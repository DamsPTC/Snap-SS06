/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae6f61c; end: 10ae6f69f;  */

void FUN_10ae6f61c(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  
  if (*param_2 != param_4) {
    if (param_4 == 0) {
      puVar1 = (uint *)(param_2 + 1);
      do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar2 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar2 & 0xfffffff9) == 0) {
        FUN_10ae6cd10(param_2);
      }
      param_2 = (long *)0x0;
    }
    else {
      FUN_10ae6f498(param_2,param_3,param_4);
    }
  }
  uVar5 = *(undefined8 *)*param_1;
  FUN_10ae6d21c(uVar5,param_2);
  *(undefined8 *)*param_1 = uVar5;
  return;
}



/* Entry: 10ae6f6a0; end: 10ae6f7af;  */

undefined1  [16] FUN_10ae6f6a0(long *param_1,int param_2,long param_3,long param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  uVar8 = (ulong)*(byte *)((long)param_1 + 0xf);
  if (param_2 == 0) {
    lVar10 = *param_1;
    plVar6 = (long *)0x40;
    __Znwm();
    *(undefined4 *)(plVar6 + 1) = 4;
    *plVar6 = lVar10;
    uVar7 = *(undefined8 *)((long)param_1 + 0xc);
    *(undefined8 *)((long)plVar6 + 0x14) = *(undefined8 *)((long)param_1 + 0x14);
    *(undefined8 *)((long)plVar6 + 0xc) = uVar7;
    uVar7 = *(undefined8 *)((long)param_1 + 0x1c);
    *(undefined8 *)((long)plVar6 + 0x24) = *(undefined8 *)((long)param_1 + 0x24);
    *(undefined8 *)((long)plVar6 + 0x1c) = uVar7;
    uVar7 = *(undefined8 *)((long)param_1 + 0x2c);
    *(undefined8 *)((long)plVar6 + 0x34) = *(undefined8 *)((long)param_1 + 0x34);
    *(undefined8 *)((long)plVar6 + 0x2c) = uVar7;
    *(undefined4 *)((long)plVar6 + 0x3c) = *(undefined4 *)((long)param_1 + 0x3c);
    if (uVar8 - 1 != (ulong)*(byte *)((long)param_1 + 0xe)) {
      plVar9 = param_1 + (ulong)*(byte *)((long)param_1 + 0xe) + 2;
      do {
        piVar2 = (int *)(*plVar9 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar9 = plVar9 + 1;
      } while (plVar9 != param_1 + uVar8 + 1);
    }
    uVar7 = 1;
  }
  else {
    puVar1 = (uint *)(param_1[uVar8 + 1] + 8);
    do {
      uVar3 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar3 & 0xfffffff9) == 0) {
      FUN_10ae6cd10();
    }
    uVar7 = 0;
    plVar6 = param_1;
  }
  plVar6[uVar8 + 1] = param_3;
  *plVar6 = *plVar6 + param_4;
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = plVar6;
  return auVar11;
}



/* Entry: 10ae6f7b0; end: 10ae6f873;  */

void FUN_10ae6f7b0(undefined8 *param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = *param_1;
  if (*(char *)((long)param_1 + 0xc) == '\x01') {
    uVar8 = param_1[2];
    puVar6 = (undefined8 *)param_1[3];
    puVar1 = (uint *)(param_1 + 1);
    if ((*puVar1 & 0xfffffffd) == 4) {
      __ZdlPv(param_1);
    }
    else {
      piVar2 = (int *)(puVar6 + 1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        uVar3 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar3 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar3 & 0xfffffff9) == 0) {
        FUN_10ae6cd10(param_1);
      }
    }
  }
  else {
    uVar8 = 0;
    puVar6 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ae6f860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,puVar6,uVar8,uVar7);
  return;
}



/* Entry: 10ae6f874; end: 10ae6f8c7;  */

void FUN_10ae6f874(long param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = (uint *)(*(long *)(param_1 + 0x10) + 8);
    do {
      uVar2 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar2 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar2 & 0xfffffff9) == 0) {
      FUN_10ae6cd10();
    }
  }
  func_0x00010ae701fc(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ae6f8c8; end: 10ae6f9eb;  */

void FUN_10ae6f8c8(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar6 = param_3;
  if (param_3 <= param_2) {
    uVar6 = *(uint *)(param_1 + 0x18);
  }
  if (param_2 < uVar6) {
    uVar7 = (ulong)param_2;
    do {
      lVar5 = *(long *)(param_1 + 0x28 + (ulong)*(uint *)(param_1 + 0x18) * 8 + uVar7 * 8);
      puVar1 = (uint *)(lVar5 + 8);
      if (*puVar1 == 4) {
LAB_10ae6f93c:
        if (*(byte *)(lVar5 + 0xc) < 6) {
          (**(code **)(lVar5 + 0x18))();
        }
        else {
          __ZdlPv();
        }
      }
      else {
        do {
          uVar2 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar2 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar2 & 0xfffffff9) == 0) goto LAB_10ae6f93c;
      }
      uVar7 = uVar7 + 1;
    } while (uVar6 != (uint)uVar7);
  }
  if (param_3 - 1 < param_2) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x28 + (ulong)*(uint *)(param_1 + 0x18) * 8 + uVar7 * 8);
      puVar1 = (uint *)(lVar5 + 8);
      if (*puVar1 == 4) {
LAB_10ae6f9b0:
        if (*(byte *)(lVar5 + 0xc) < 6) {
          (**(code **)(lVar5 + 0x18))();
        }
        else {
          __ZdlPv();
        }
      }
      else {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar6 & 0xfffffff9) == 0) goto LAB_10ae6f9b0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_3);
  }
  return;
}



/* Entry: 10ae6f9ec; end: 10ae6fa63;  */

undefined8 * FUN_10ae6f9ec(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam00000001138370f8 & 1) == 0) {
    iVar1 = 0x138370f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x10;
      __Znwm();
      *puVar2 = 0;
      puVar2[1] = 0;
      puRam00000001138370f0 = puVar2;
      ___cxa_guard_release(0x1138370f8);
    }
  }
  return puRam00000001138370f0;
}



/* Entry: 10ae6fa64; end: 10ae6fb73;  */

undefined8 * FUN_10ae6fa64(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_110c8ad30;
  puVar3 = param_1;
  FUN_10ae6f9ec();
  if (*(char *)(param_1 + 1) != '\x01') {
    return param_1;
  }
  plStack_48 = (long *)0x0;
  plStack_40 = (long *)0x0;
  uStack_38 = 0;
  func_0x000107c2b9f0();
  lVar4 = param_1[2];
  lStack_50 = param_1[3];
  if (lVar4 == 0) {
    if (lStack_50 == 0) {
      lVar4 = 0;
    }
    else {
      do {
        if ((*(byte *)(lStack_50 + 8) & 1) != 0) {
          lVar4 = param_1[2];
          goto LAB_10ae6fb04;
        }
        FUN_10ae6fb74(&plStack_48,&lStack_50);
        lStack_50 = *(long *)(lStack_50 + 0x18);
      } while (lStack_50 != 0);
      lVar4 = param_1[2];
    }
  }
  else {
    *(long *)(lVar4 + 0x18) = lStack_50;
    if (lStack_50 != 0) {
LAB_10ae6fb04:
      *(long *)(lStack_50 + 0x10) = lVar4;
      goto LAB_10ae6fb08;
    }
  }
  puVar3[1] = lVar4;
LAB_10ae6fb08:
  func_0x000107c2b9fc(puVar3);
  plVar2 = plStack_40;
  for (plVar1 = plStack_48; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
  }
  if (plStack_48 != (long *)0x0) {
    plStack_40 = plStack_48;
    __ZdlPv(plStack_48);
  }
  return param_1;
}



/* Entry: 10ae6fb74; end: 10ae6fc37;  */

long * FUN_10ae6fb74(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    plVar4 = param_1;
LAB_10ae6fc20:
    param_1[1] = (long)puVar8;
    return plVar4;
  }
  lVar7 = (long)puVar2 - *param_1;
  uVar1 = (lVar7 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10ae6fcf4();
    puVar2 = (undefined8 *)((long)plVar3 + lVar7);
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar7 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    plVar4 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar3 + uVar6);
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
    goto LAB_10ae6fc20;
  }
  FUN_10ae6fce0();
  *param_1 = (long)&PTR_FUN_110c8ad30;
  plVar4 = param_1;
  FUN_10ae6f9ec();
  if ((char)param_1[1] != '\x01') {
    return param_1;
  }
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  uStack_68 = 0;
  func_0x000107c2b9f0();
  lVar7 = param_1[2];
  lStack_80 = param_1[3];
  if (lVar7 == 0) {
    if (lStack_80 == 0) {
      lVar7 = 0;
    }
    else {
      do {
        if ((*(byte *)(lStack_80 + 8) & 1) != 0) {
          lVar7 = param_1[2];
          goto LAB_10ae6fb04;
        }
        FUN_10ae6fb74(&plStack_78,&lStack_80);
        lStack_80 = *(long *)(lStack_80 + 0x18);
      } while (lStack_80 != 0);
      lVar7 = param_1[2];
    }
  }
  else {
    *(long *)(lVar7 + 0x18) = lStack_80;
    if (lStack_80 != 0) {
LAB_10ae6fb04:
      *(long *)(lStack_80 + 0x10) = lVar7;
      goto LAB_10ae6fb08;
    }
  }
  plVar4[1] = lVar7;
LAB_10ae6fb08:
  func_0x000107c2b9fc(plVar4);
  plVar3 = plStack_70;
  for (plVar4 = plStack_78; plVar4 != plVar3; plVar4 = plVar4 + 1) {
    if ((long *)*plVar4 != (long *)0x0) {
      (**(code **)(*(long *)*plVar4 + 8))();
    }
  }
  if (plStack_78 != (long *)0x0) {
    plStack_70 = plStack_78;
    __ZdlPv(plStack_78);
  }
  return param_1;
}



/* Entry: 10ae6fc38; end: 10ae6fc3b;  */

undefined8 * FUN_10ae6fc38(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_110c8ad30;
  puVar3 = param_1;
  FUN_10ae6f9ec();
  if (*(char *)(param_1 + 1) != '\x01') {
    return param_1;
  }
  plStack_48 = (long *)0x0;
  plStack_40 = (long *)0x0;
  uStack_38 = 0;
  func_0x000107c2b9f0();
  lVar4 = param_1[2];
  lStack_50 = param_1[3];
  if (lVar4 == 0) {
    if (lStack_50 == 0) {
      lVar4 = 0;
    }
    else {
      do {
        if ((*(byte *)(lStack_50 + 8) & 1) != 0) {
          lVar4 = param_1[2];
          goto LAB_10ae6fb04;
        }
        FUN_10ae6fb74(&plStack_48,&lStack_50);
        lStack_50 = *(long *)(lStack_50 + 0x18);
      } while (lStack_50 != 0);
      lVar4 = param_1[2];
    }
  }
  else {
    *(long *)(lVar4 + 0x18) = lStack_50;
    if (lStack_50 != 0) {
LAB_10ae6fb04:
      *(long *)(lStack_50 + 0x10) = lVar4;
      goto LAB_10ae6fb08;
    }
  }
  puVar3[1] = lVar4;
LAB_10ae6fb08:
  func_0x000107c2b9fc(puVar3);
  plVar2 = plStack_40;
  for (plVar1 = plStack_48; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
  }
  if (plStack_48 != (long *)0x0) {
    plStack_40 = plStack_48;
    __ZdlPv(plStack_48);
  }
  return param_1;
}



/* Entry: 10ae6fc3c; end: 10ae6fc4f;  */

void FUN_10ae6fc3c(void)

{
  FUN_10ae6fa64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae6fc50; end: 10ae6fcdf;  */

void FUN_10ae6fc50(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar1 = param_1;
  FUN_10ae6f9ec();
  if (((*(byte *)(param_1 + 1) & 1) == 0) && (plVar2 = plVar1, FUN_10ae6f9ec(), plVar2[1] != 0)) {
    func_0x000107c2b9f0(plVar1);
    lVar3 = plVar1[1];
    if (lVar3 != 0) {
      param_1[2] = lVar3;
      *(long **)(lVar3 + 0x18) = param_1;
      plVar1[1] = (long)param_1;
      func_0x000107c2b9fc(plVar1);
      return;
    }
    func_0x000107c2b9fc(plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010ae6fcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 10ae6fce0; end: 10ae6fcf3;  */

void FUN_10ae6fce0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  uint *puVar7;
  
  puVar5 = &UNK_10f6d1919;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  puVar7 = *(uint **)(puVar5 + 0x20);
  uVar2 = *puVar7;
  if ((uVar2 & 1) == 0) {
    do {
      uVar1 = *puVar7;
      if (uVar1 != uVar2) {
        ClearExclusiveLocal();
        if ((uVar1 & 1) != 0) goto LAB_10ae6fdc4;
        goto LAB_10ae6fd60;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar4) {
        *puVar7 = uVar2 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar1 & 1) == 0) goto LAB_10ae6fd60;
  }
LAB_10ae6fdc4:
  func_0x00010bdb3254(puVar7);
LAB_10ae6fd60:
  lVar6 = *(long *)(*(long *)(puVar5 + 0x20) + 8);
  if (lVar6 != 0) {
    *(undefined **)(lVar6 + 0x28) = puVar5;
  }
  *(long *)(puVar5 + 0x30) = lVar6;
  *(undefined **)(*(long *)(puVar5 + 0x20) + 8) = puVar5;
  uVar2 = *puVar7;
  do {
    uVar1 = *puVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar4) {
      *puVar7 = uVar2 & 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (7 < uVar1) {
    func_0x00010bdb33e0(puVar7);
  }
  return;
}



/* Entry: 10ae6fcf4; end: 10ae6fd27;  */

void FUN_10ae6fcf4(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint *puVar6;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  puVar6 = *(uint **)(param_1 + 0x20);
  uVar2 = *puVar6;
  if ((uVar2 & 1) == 0) {
    do {
      uVar1 = *puVar6;
      if (uVar1 != uVar2) {
        ClearExclusiveLocal();
        if ((uVar1 & 1) != 0) goto LAB_10ae6fdc4;
        goto LAB_10ae6fd60;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar4) {
        *puVar6 = uVar2 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar1 & 1) == 0) goto LAB_10ae6fd60;
  }
LAB_10ae6fdc4:
  func_0x00010bdb3254(puVar6);
LAB_10ae6fd60:
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x28) = param_1;
  }
  *(long *)(param_1 + 0x30) = lVar5;
  *(long *)(*(long *)(param_1 + 0x20) + 8) = param_1;
  uVar2 = *puVar6;
  do {
    uVar1 = *puVar6;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar4) {
      *puVar6 = uVar2 & 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (7 < uVar1) {
    func_0x00010bdb33e0(puVar6);
  }
  return;
}



/* Entry: 10ae6fd28; end: 10ae6fdd3;  */

void FUN_10ae6fd28(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint *puVar6;
  
  puVar6 = *(uint **)(param_1 + 0x20);
  uVar2 = *puVar6;
  if ((uVar2 & 1) == 0) {
    do {
      uVar1 = *puVar6;
      if (uVar1 != uVar2) {
        ClearExclusiveLocal();
        if ((uVar1 & 1) != 0) goto LAB_10ae6fdc4;
        goto LAB_10ae6fd60;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar4) {
        *puVar6 = uVar2 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar1 & 1) == 0) goto LAB_10ae6fd60;
  }
LAB_10ae6fdc4:
  func_0x00010bdb3254(puVar6);
LAB_10ae6fd60:
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x28) = param_1;
  }
  *(long *)(param_1 + 0x30) = lVar5;
  *(long *)(*(long *)(param_1 + 0x20) + 8) = param_1;
  uVar2 = *puVar6;
  do {
    uVar1 = *puVar6;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar4) {
      *puVar6 = uVar2 & 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (7 < uVar1) {
    func_0x00010bdb33e0(puVar6);
  }
  return;
}



/* Entry: 10ae6fdd4; end: 10ae6fe4f;  */

void FUN_10ae6fdd4(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  
  if (*param_1 - 1 != 0) {
    FUN_10ae6fe50(*param_1 - 1);
  }
  uVar5 = 0x538;
  __Znwm();
  FUN_10ae6ffc8();
  *param_1 = uVar5 | 1;
  puVar7 = *(uint **)(uVar5 + 0x20);
  uVar2 = *puVar7;
  if ((uVar2 & 1) == 0) {
    do {
      uVar1 = *puVar7;
      if (uVar1 != uVar2) {
        ClearExclusiveLocal();
        if ((uVar1 & 1) != 0) goto LAB_10ae6fdc4;
        goto LAB_10ae6fd60;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar4) {
        *puVar7 = uVar2 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar1 & 1) == 0) goto LAB_10ae6fd60;
  }
LAB_10ae6fdc4:
  func_0x00010bdb3254(puVar7);
LAB_10ae6fd60:
  lVar6 = *(long *)(*(long *)(uVar5 + 0x20) + 8);
  if (lVar6 != 0) {
    *(ulong *)(lVar6 + 0x28) = uVar5;
  }
  *(long *)(uVar5 + 0x30) = lVar6;
  *(ulong *)(*(long *)(uVar5 + 0x20) + 8) = uVar5;
  uVar2 = *puVar7;
  do {
    uVar1 = *puVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar4) {
      *puVar7 = uVar2 & 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (7 < uVar1) {
    func_0x00010bdb33e0(puVar7);
  }
  return;
}



/* Entry: 10ae6fe50; end: 10ae6ff77;  */

void FUN_10ae6fe50(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint *puVar10;
  
  puVar10 = *(uint **)(param_1 + 8);
  uVar3 = *puVar10;
  if ((uVar3 & 1) == 0) {
    do {
      uVar2 = *puVar10;
      if (uVar2 != uVar3) {
        ClearExclusiveLocal();
        break;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar10,0x10);
      if (bVar5) {
        *puVar10 = uVar3 | 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar6 = param_1;
    if ((uVar2 & 1) == 0) goto LAB_10ae6fe88;
  }
  puVar6 = puVar10;
  func_0x00010bdb3254();
LAB_10ae6fe88:
  lVar7 = *(long *)(param_1 + 0xc);
  lVar8 = *(long *)(param_1 + 10);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x28) = lVar8;
  }
  if (lVar8 == 0) {
    plVar9 = (long *)(*(long *)(param_1 + 8) + 8);
  }
  else {
    plVar9 = (long *)(lVar8 + 0x30);
  }
  *plVar9 = lVar7;
  uVar3 = *puVar10;
  do {
    uVar2 = *puVar10;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar10,0x10);
    if (bVar5) {
      *puVar10 = uVar3 & 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (7 < uVar2) {
    func_0x00010bdb33e0();
    puVar6 = puVar10;
  }
  if (((param_1[2] & 1) != 0) || (FUN_10ae6f9ec(), *(long *)(puVar6 + 2) == 0)) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010ae6ff6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 8))(param_1);
    return;
  }
  func_0x000107c2b9f0(param_1 + 0xe);
  if (*(long *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x000107c2b9fc(param_1 + 0xe);
  if (param_1 == (uint *)0x0) {
    return;
  }
  puVar10 = param_1;
  FUN_10ae6f9ec();
  if (((param_1[2] & 1) == 0) && (puVar6 = puVar10, FUN_10ae6f9ec(), *(long *)(puVar6 + 2) != 0)) {
    func_0x000107c2b9f0(puVar10);
    lVar7 = *(long *)(puVar10 + 2);
    if (lVar7 != 0) {
      *(long *)(param_1 + 4) = lVar7;
      *(uint **)(lVar7 + 0x18) = param_1;
      *(uint **)(puVar10 + 2) = param_1;
      func_0x000107c2b9fc(puVar10);
      return;
    }
    func_0x000107c2b9fc(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010ae6fcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 8))(param_1);
  return;
}



/* Entry: 10ae6ff78; end: 10ae6ffc7;  */

void FUN_10ae6ff78(ulong *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  
  if (*param_2 == 1) {
    if (*param_1 - 1 != 0) {
      FUN_10ae6fe50(*param_1 - 1);
      *param_1 = 1;
    }
    return;
  }
  if (*param_1 - 1 != 0) {
    FUN_10ae6fe50(*param_1 - 1);
  }
  uVar5 = 0x538;
  __Znwm();
  FUN_10ae6ffc8();
  *param_1 = uVar5 | 1;
  puVar7 = *(uint **)(uVar5 + 0x20);
  uVar2 = *puVar7;
  if ((uVar2 & 1) == 0) {
    do {
      uVar1 = *puVar7;
      if (uVar1 != uVar2) {
        ClearExclusiveLocal();
        if ((uVar1 & 1) != 0) goto LAB_10ae6fdc4;
        goto LAB_10ae6fd60;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar4) {
        *puVar7 = uVar2 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar1 & 1) == 0) goto LAB_10ae6fd60;
  }
LAB_10ae6fdc4:
  func_0x00010bdb3254(puVar7);
LAB_10ae6fd60:
  lVar6 = *(long *)(*(long *)(uVar5 + 0x20) + 8);
  if (lVar6 != 0) {
    *(ulong *)(lVar6 + 0x28) = uVar5;
  }
  *(long *)(uVar5 + 0x30) = lVar6;
  *(ulong *)(*(long *)(uVar5 + 0x20) + 8) = uVar5;
  uVar2 = *puVar7;
  do {
    uVar1 = *puVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar4) {
      *puVar7 = uVar2 & 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (7 < uVar1) {
    func_0x00010bdb33e0(puVar7);
  }
  return;
}



/* Entry: 10ae6ffc8; end: 10ae70143;  */

undefined8 * FUN_10ae6ffc8(undefined8 *param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_110c8ad30;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10ae6f9ec();
  *param_1 = &PTR_FUN_110c8ad60;
  param_1[4] = 0x113311b48;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  puVar1 = param_1 + 9;
  uVar2 = 0x40;
  FUN_10ae781a4(puVar1,0x40,1);
  param_1[0x89] = (long)(int)puVar1;
  if (param_3 == 0) {
    iVar3 = 0;
    param_1[0x8a] = 0;
    *(uint *)(param_1 + 0x8b) = param_4;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x450);
    if (lVar4 == 0) {
      lVar5 = param_3 + 0x48;
      puVar6 = (undefined8 *)(param_3 + 0x448);
      lVar4 = *(long *)(param_3 + 0x448);
    }
    else {
      puVar6 = (undefined8 *)(param_3 + 0x450);
      lVar5 = param_3 + 0x248;
    }
    puVar1 = param_1 + 0x49;
    _memcpy(puVar1,lVar5,lVar4 << 3);
    uVar2 = (undefined4)lVar5;
    param_1[0x8a] = *puVar6;
    *(uint *)(param_1 + 0x8b) = param_4;
    iVar3 = *(int *)(param_3 + 0x45c);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_3 + 0x458);
    }
  }
  *(int *)((long)param_1 + 0x45c) = iVar3;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa4] = 0;
  FUN_10ae866ac();
  param_1[0xa5] = puVar1;
  *(undefined4 *)(param_1 + 0xa6) = uVar2;
  param_1[(ulong)param_4 + 0x8c] = param_1[(ulong)param_4 + 0x8c] + 1;
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      lVar5 = *(long *)(param_3 + 0x460 + lVar4);
      if (lVar5 != 0) {
        *(long *)((long)param_1 + lVar4 + 0x460) = *(long *)((long)param_1 + lVar4 + 0x460) + lVar5;
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 200);
  }
  return param_1;
}



/* Entry: 10ae70144; end: 10ae701a7;  */

undefined8 * FUN_10ae70144(undefined8 *param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_110c8ad60;
  if (param_1[8] != 0) {
    puVar2 = (uint *)(param_1[8] + 8);
    do {
      uVar3 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar3 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar3 & 0xfffffff9) == 0) {
      FUN_10ae6cd10();
    }
  }
  FUN_10ae7c720(param_1 + 7);
  *param_1 = &PTR_FUN_110c8ad30;
  puVar7 = param_1;
  FUN_10ae6f9ec();
  if (*(char *)(param_1 + 1) != '\x01') {
    return param_1;
  }
  plStack_48 = (long *)0x0;
  plStack_40 = (long *)0x0;
  uStack_38 = 0;
  func_0x000107c2b9f0();
  lVar8 = param_1[2];
  lStack_50 = param_1[3];
  if (lVar8 == 0) {
    if (lStack_50 == 0) {
      lVar8 = 0;
    }
    else {
      do {
        if ((*(byte *)(lStack_50 + 8) & 1) != 0) {
          lVar8 = param_1[2];
          goto LAB_10ae6fb04;
        }
        FUN_10ae6fb74(&plStack_48,&lStack_50);
        lStack_50 = *(long *)(lStack_50 + 0x18);
      } while (lStack_50 != 0);
      lVar8 = param_1[2];
    }
  }
  else {
    *(long *)(lVar8 + 0x18) = lStack_50;
    if (lStack_50 != 0) {
LAB_10ae6fb04:
      *(long *)(lStack_50 + 0x10) = lVar8;
      goto LAB_10ae6fb08;
    }
  }
  puVar7[1] = lVar8;
LAB_10ae6fb08:
  func_0x000107c2b9fc(puVar7);
  plVar6 = plStack_40;
  for (plVar1 = plStack_48; plVar1 != plVar6; plVar1 = plVar1 + 1) {
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
  }
  if (plStack_48 != (long *)0x0) {
    plStack_40 = plStack_48;
    __ZdlPv(plStack_48);
  }
  return param_1;
}



/* Entry: 10ae701a8; end: 10ae701ab;  */

undefined8 * FUN_10ae701a8(undefined8 *param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_110c8ad60;
  if (param_1[8] != 0) {
    puVar2 = (uint *)(param_1[8] + 8);
    do {
      uVar3 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar3 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar3 & 0xfffffff9) == 0) {
      FUN_10ae6cd10();
    }
  }
  FUN_10ae7c720(param_1 + 7);
  *param_1 = &PTR_FUN_110c8ad30;
  puVar7 = param_1;
  FUN_10ae6f9ec();
  if (*(char *)(param_1 + 1) != '\x01') {
    return param_1;
  }
  plStack_48 = (long *)0x0;
  plStack_40 = (long *)0x0;
  uStack_38 = 0;
  func_0x000107c2b9f0();
  lVar8 = param_1[2];
  lStack_50 = param_1[3];
  if (lVar8 == 0) {
    if (lStack_50 == 0) {
      lVar8 = 0;
    }
    else {
      do {
        if ((*(byte *)(lStack_50 + 8) & 1) != 0) {
          lVar8 = param_1[2];
          goto LAB_10ae6fb04;
        }
        FUN_10ae6fb74(&plStack_48,&lStack_50);
        lStack_50 = *(long *)(lStack_50 + 0x18);
      } while (lStack_50 != 0);
      lVar8 = param_1[2];
    }
  }
  else {
    *(long *)(lVar8 + 0x18) = lStack_50;
    if (lStack_50 != 0) {
LAB_10ae6fb04:
      *(long *)(lStack_50 + 0x10) = lVar8;
      goto LAB_10ae6fb08;
    }
  }
  puVar7[1] = lVar8;
LAB_10ae6fb08:
  func_0x000107c2b9fc(puVar7);
  plVar6 = plStack_40;
  for (plVar1 = plStack_48; plVar1 != plVar6; plVar1 = plVar1 + 1) {
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
  }
  if (plStack_48 != (long *)0x0) {
    plStack_40 = plStack_48;
    __ZdlPv(plStack_48);
  }
  return param_1;
}



/* Entry: 10ae701ac; end: 10ae701bf;  */

void FUN_10ae701ac(void)

{
  FUN_10ae70144();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae701c0; end: 10ae7024b;  */

void FUN_10ae701c0(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  uint *puVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x10);
  func_0x000107c2b9fc(param_1 + 0xe);
  if (lVar10 != 0) {
    return;
  }
  puVar9 = *(uint **)(param_1 + 8);
  uVar3 = *puVar9;
  if ((uVar3 & 1) == 0) {
    do {
      uVar2 = *puVar9;
      if (uVar2 != uVar3) {
        ClearExclusiveLocal();
        break;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar5) {
        *puVar9 = uVar3 | 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar6 = param_1;
    if ((uVar2 & 1) == 0) goto LAB_10ae6fe88;
  }
  puVar6 = puVar9;
  func_0x00010bdb3254();
LAB_10ae6fe88:
  lVar10 = *(long *)(param_1 + 0xc);
  lVar7 = *(long *)(param_1 + 10);
  if (lVar10 != 0) {
    *(long *)(lVar10 + 0x28) = lVar7;
  }
  if (lVar7 == 0) {
    plVar8 = (long *)(*(long *)(param_1 + 8) + 8);
  }
  else {
    plVar8 = (long *)(lVar7 + 0x30);
  }
  *plVar8 = lVar10;
  uVar3 = *puVar9;
  do {
    uVar2 = *puVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar9,0x10);
    if (bVar5) {
      *puVar9 = uVar3 & 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (7 < uVar2) {
    func_0x00010bdb33e0();
    puVar6 = puVar9;
  }
  if (((param_1[2] & 1) != 0) || (FUN_10ae6f9ec(), *(long *)(puVar6 + 2) == 0)) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010ae6ff6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 8))(param_1);
    return;
  }
  func_0x000107c2b9f0(param_1 + 0xe);
  if (*(long *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x000107c2b9fc(param_1 + 0xe);
  if (param_1 == (uint *)0x0) {
    return;
  }
  puVar9 = param_1;
  FUN_10ae6f9ec();
  if (((param_1[2] & 1) == 0) && (puVar6 = puVar9, FUN_10ae6f9ec(), *(long *)(puVar6 + 2) != 0)) {
    func_0x000107c2b9f0(puVar9);
    lVar10 = *(long *)(puVar9 + 2);
    if (lVar10 != 0) {
      *(long *)(param_1 + 4) = lVar10;
      *(uint **)(lVar10 + 0x18) = param_1;
      *(uint **)(puVar9 + 2) = param_1;
      func_0x000107c2b9fc(puVar9);
      return;
    }
    func_0x000107c2b9fc(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010ae6fcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 8))(param_1);
  return;
}



/* Entry: 10ae7024c; end: 10ae702e3;  */

long * FUN_10ae7024c(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x80;
  }
  else {
    if (uVar2 != 2) goto LAB_10ae702c8;
    lVar3 = 0x100;
  }
  param_1[4] = lVar3;
LAB_10ae702c8:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
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



/* Entry: 10ae702e4; end: 10ae7032f;  */

long * FUN_10ae702e4(long *param_1)

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



/* Entry: 10ae70330; end: 10ae7033f;  */

void FUN_10ae70330(byte *param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lStack_38;
  
  if ((*param_1 & 1) != 0) {
    lVar1 = *(long *)param_1 + -1;
    lStack_38 = lVar1;
    if (lVar1 != 0) {
      func_0x000107c2b9f0(*(long *)param_1 + 0x37);
      lVar1 = lVar1 + (param_3 & 0xffffffff) * 8;
      *(long *)(lVar1 + 0x460) = *(long *)(lVar1 + 0x460) + 1;
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    FUN_10ae704fc();
    if ((*(byte *)((long)param_2 + 0xc) < 5) &&
       ((*(byte *)((long)param_2 + 0xc) != 1 || (*(byte *)(param_2[3] + 0xc) < 5)))) {
      func_0x00010ae6ecd0();
    }
    else {
      FUN_10ae6d21c();
    }
    *(undefined8 *)(param_1 + 8) = uVar4;
    if (lStack_38 != 0) {
      *(undefined8 *)(lStack_38 + 0x40) = uVar4;
    }
    FUN_10ae72844(&lStack_38);
    return;
  }
  puVar2 = param_2;
  if ((long)(char)*param_1 != 0) {
    puVar5 = (ulong *)((ulong)(long)(char)*param_1 >> 1);
    puVar2 = puVar5;
    FUN_10ae6f400();
    *puVar2 = (ulong)puVar5;
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)((long)puVar2 + 0xd) = *(undefined8 *)(param_1 + 1);
    *(undefined8 *)((long)puVar2 + 0x14) = uVar4;
    if ((*(byte *)((long)puVar2 + 0xc) < 5) &&
       ((*(byte *)((long)puVar2 + 0xc) != 1 || (*(byte *)(puVar2[3] + 0xc) < 5)))) {
      func_0x00010ae6ec90();
    }
    else {
      puVar3 = (ulong *)0x40;
      __Znwm();
      *(undefined4 *)(puVar3 + 1) = 4;
      *puVar3 = (ulong)puVar5;
      *(undefined4 *)((long)puVar3 + 0xc) = 0x1000003;
      puVar3[2] = (ulong)puVar2;
      puVar2 = puVar3;
    }
    if ((*(byte *)((long)param_2 + 0xc) < 5) &&
       ((*(byte *)((long)param_2 + 0xc) != 1 || (*(byte *)(param_2[3] + 0xc) < 5)))) {
      func_0x00010ae6ecd0();
    }
    else {
      FUN_10ae6d21c();
    }
  }
  param_1[0] = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(ulong **)(param_1 + 8) = puVar2;
  return;
}



/* Entry: 10ae70340; end: 10ae7042b;  */

void FUN_10ae70340(char *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  
  puVar1 = param_2;
  if ((long)*param_1 != 0) {
    puVar4 = (ulong *)((ulong)(long)*param_1 >> 1);
    puVar1 = puVar4;
    FUN_10ae6f400();
    *puVar1 = (ulong)puVar4;
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)((long)puVar1 + 0xd) = *(undefined8 *)(param_1 + 1);
    *(undefined8 *)((long)puVar1 + 0x14) = uVar3;
    if ((*(byte *)((long)puVar1 + 0xc) < 5) &&
       ((*(byte *)((long)puVar1 + 0xc) != 1 || (*(byte *)(puVar1[3] + 0xc) < 5)))) {
      func_0x00010ae6ec90();
    }
    else {
      puVar2 = (ulong *)0x40;
      __Znwm();
      *(undefined4 *)(puVar2 + 1) = 4;
      *puVar2 = (ulong)puVar4;
      *(undefined4 *)((long)puVar2 + 0xc) = 0x1000003;
      puVar2[2] = (ulong)puVar1;
      puVar1 = puVar2;
    }
    if ((*(byte *)((long)param_2 + 0xc) < 5) &&
       ((*(byte *)((long)param_2 + 0xc) != 1 || (*(byte *)(param_2[3] + 0xc) < 5)))) {
      func_0x00010ae6ecd0();
    }
    else {
      FUN_10ae6d21c();
    }
  }
  param_1[0] = '\x01';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  *(ulong **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10ae7042c; end: 10ae704fb;  */

void FUN_10ae7042c(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lStack_38;
  
  lVar1 = *param_1 + -1;
  lStack_38 = lVar1;
  if (lVar1 != 0) {
    func_0x000107c2b9f0(*param_1 + 0x37);
    lVar1 = lVar1 + (param_3 & 0xffffffff) * 8;
    *(long *)(lVar1 + 0x460) = *(long *)(lVar1 + 0x460) + 1;
  }
  lVar1 = param_1[1];
  FUN_10ae704fc();
  if ((*(byte *)(param_2 + 0xc) < 5) &&
     ((*(byte *)(param_2 + 0xc) != 1 || (*(byte *)(*(long *)(param_2 + 0x18) + 0xc) < 5)))) {
    func_0x00010ae6ecd0();
  }
  else {
    FUN_10ae6d21c();
  }
  param_1[1] = lVar1;
  if (lStack_38 != 0) {
    *(long *)(lStack_38 + 0x40) = lVar1;
  }
  FUN_10ae72844(&lStack_38);
  return;
}



/* Entry: 10ae704fc; end: 10ae705ef;  */

undefined8 * FUN_10ae704fc(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (*(char *)((long)param_1 + 0xc) != '\x03') {
    puVar6 = param_1;
    if (*(char *)((long)param_1 + 0xc) == '\x02') {
      puVar6 = (undefined8 *)param_1[2];
      puVar1 = (uint *)(param_1 + 1);
      if ((*puVar1 & 0xfffffffd) == 4) {
        func_0x00010ae701fc(param_1[3]);
        __ZdlPv(param_1);
      }
      else {
        piVar2 = (int *)(puVar6 + 1);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          uVar3 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar3 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar3 & 0xfffffff9) == 0) {
          FUN_10ae6cd10();
        }
      }
    }
    if ((*(byte *)((long)puVar6 + 0xc) < 5) &&
       ((*(byte *)((long)puVar6 + 0xc) != 1 || (*(byte *)(puVar6[3] + 0xc) < 5)))) {
      if (*(char *)((long)puVar6 + 0xc) != '\x03') {
        FUN_10ae6f7b0(puVar6,&stack0xffffffffffffffe0,0x10ae6f530);
        puVar6 = (undefined8 *)0x0;
      }
      return puVar6;
    }
    param_1 = (undefined8 *)0x40;
    __Znwm();
    *(undefined4 *)(param_1 + 1) = 4;
    *param_1 = *puVar6;
    *(undefined4 *)((long)param_1 + 0xc) = 0x1000003;
    param_1[2] = puVar6;
  }
  return param_1;
}



/* Entry: 10ae705f0; end: 10ae706fb;  */

void FUN_10ae705f0(ulong *param_1,ulong *param_2)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  long *plVar13;
  long *plVar14;
  
  if ((*param_1 & 1) != 0) {
    uVar10 = param_1[1];
    if (((*param_2 & 1) == 0) || (uVar11 = param_2[1], uVar11 == 0)) {
      if (*param_1 - 1 != 0) {
        FUN_10ae6fe50(*param_1 - 1);
      }
      uVar11 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar11;
    }
    else {
      piVar1 = (int *)(uVar11 + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      param_1[1] = uVar11;
      if ((*param_2 | *param_1) != 1) {
        FUN_10ae6ff78(param_1,param_2,5);
      }
    }
    puVar12 = (uint *)(uVar10 + 8);
    do {
      uVar4 = *puVar12;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar8) {
        *puVar12 = uVar4 - 4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((uVar4 & 0xfffffff9) != 0) {
      return;
    }
    while (bVar5 = *(byte *)(uVar10 + 0xc), bVar5 == 1) {
      uVar11 = *(ulong *)(uVar10 + 0x18);
      __ZdlPv(uVar10);
      puVar12 = (uint *)(uVar11 + 8);
      uVar10 = uVar11;
      if (*puVar12 != 4) {
        do {
          uVar4 = *puVar12;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
          if (bVar8) {
            *puVar12 = uVar4 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar4 & 0xfffffff9) != 0) {
          return;
        }
      }
    }
    if (bVar5 < 4) {
      if (bVar5 == 2) {
        if (*(long *)(uVar10 + 0x10) != 0) {
          puVar12 = (uint *)(*(long *)(uVar10 + 0x10) + 8);
          do {
            uVar4 = *puVar12;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
            if (bVar8) {
              *puVar12 = uVar4 - 4;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((uVar4 & 0xfffffff9) == 0) {
            FUN_10ae6cd10();
          }
        }
        func_0x00010ae701fc(*(undefined8 *)(uVar10 + 0x18));
      }
      else if (bVar5 == 3) {
        lVar9 = uVar10 + 0x10;
        bVar5 = *(byte *)(uVar10 + 0xe);
        uVar11 = (ulong)bVar5;
        bVar6 = *(byte *)(uVar10 + 0xf);
        plVar2 = (long *)(lVar9 + (ulong)bVar6 * 8);
        if (*(char *)(uVar10 + 0xd) == '\x01') {
          if (bVar5 == bVar6) goto code_r0x00010bdbd7ac;
          plVar13 = (long *)(lVar9 + uVar11 * 8);
          do {
            lVar9 = *plVar13;
            puVar12 = (uint *)(lVar9 + 8);
            if (*puVar12 == 4) {
LAB_10ae6e04c:
              bVar5 = *(byte *)(lVar9 + 0xf);
              if ((uint)*(byte *)(lVar9 + 0xe) != (uint)bVar5) {
                plVar14 = (long *)(lVar9 + 0x10 + (ulong)*(byte *)(lVar9 + 0xe) * 8);
                do {
                  puVar12 = (uint *)(*plVar14 + 8);
                  if (*puVar12 == 4) {
LAB_10ae6e094:
                    FUN_10ae6e194();
                  }
                  else {
                    do {
                      uVar4 = *puVar12;
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
                      if (bVar8) {
                        *puVar12 = uVar4 - 4;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if ((uVar4 & 0xfffffff9) == 0) goto LAB_10ae6e094;
                  }
                  plVar14 = plVar14 + 1;
                } while (plVar14 != (long *)(lVar9 + 0x10 + (ulong)(uint)bVar5 * 8));
                if (lVar9 == 0) goto LAB_10ae6e0b0;
              }
              __ZdlPv(lVar9);
            }
            else {
              do {
                uVar4 = *puVar12;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
                if (bVar8) {
                  *puVar12 = uVar4 - 4;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if ((uVar4 & 0xfffffff9) == 0) goto LAB_10ae6e04c;
            }
LAB_10ae6e0b0:
            plVar13 = plVar13 + 1;
          } while (plVar13 != plVar2);
        }
        else if (*(char *)(uVar10 + 0xd) == '\0') {
          if (bVar5 == bVar6) goto code_r0x00010bdbd7ac;
          plVar13 = (long *)(lVar9 + uVar11 * 8);
          do {
            puVar12 = (uint *)(*plVar13 + 8);
            if (*puVar12 == 4) {
LAB_10ae6e000:
              FUN_10ae6e194();
            }
            else {
              do {
                uVar4 = *puVar12;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
                if (bVar8) {
                  *puVar12 = uVar4 - 4;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if ((uVar4 & 0xfffffff9) == 0) goto LAB_10ae6e000;
            }
            plVar13 = plVar13 + 1;
          } while (plVar13 != plVar2);
        }
        else {
          if (bVar5 == bVar6) goto code_r0x00010bdbd7ac;
          plVar13 = (long *)(lVar9 + uVar11 * 8);
          do {
            lVar9 = *plVar13;
            puVar12 = (uint *)(lVar9 + 8);
            if (*puVar12 == 4) {
LAB_10ae6e0f4:
              bVar5 = *(byte *)(lVar9 + 0xf);
              if ((uint)*(byte *)(lVar9 + 0xe) != (uint)bVar5) {
                plVar14 = (long *)(lVar9 + 0x10 + (ulong)*(byte *)(lVar9 + 0xe) * 8);
                do {
                  puVar12 = (uint *)(*plVar14 + 8);
                  if (*puVar12 == 4) {
LAB_10ae6e13c:
                    FUN_10ae6df90();
                  }
                  else {
                    do {
                      uVar4 = *puVar12;
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
                      if (bVar8) {
                        *puVar12 = uVar4 - 4;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if ((uVar4 & 0xfffffff9) == 0) goto LAB_10ae6e13c;
                  }
                  plVar14 = plVar14 + 1;
                } while (plVar14 != (long *)(lVar9 + 0x10 + (ulong)(uint)bVar5 * 8));
                if (lVar9 == 0) goto LAB_10ae6e158;
              }
              __ZdlPv(lVar9);
            }
            else {
              do {
                uVar4 = *puVar12;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
                if (bVar8) {
                  *puVar12 = uVar4 - 4;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if ((uVar4 & 0xfffffff9) == 0) goto LAB_10ae6e0f4;
            }
LAB_10ae6e158:
            plVar13 = plVar13 + 1;
          } while (plVar13 != plVar2);
        }
        if (uVar10 == 0) {
          return;
        }
      }
    }
    else if (bVar5 == 4) {
      FUN_10ae6f8c8(uVar10,*(undefined4 *)(uVar10 + 0x10),*(undefined4 *)(uVar10 + 0x14));
    }
    else if (bVar5 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010ae6cdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar10 + 0x18))(uVar10);
      return;
    }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar10);
    return;
  }
  uVar10 = param_2[1];
  piVar1 = (int *)(uVar10 + 8);
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = *piVar1 + 4;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  *param_1 = 1;
  param_1[1] = uVar10;
  if (*param_2 < 2) {
    return;
  }
  if (*param_2 == 1) {
    if (*param_1 - 1 != 0) {
      FUN_10ae6fe50(*param_1 - 1);
      *param_1 = 1;
    }
    return;
  }
  if (*param_1 - 1 != 0) {
    FUN_10ae6fe50(*param_1 - 1);
  }
  uVar10 = 0x538;
  __Znwm();
  FUN_10ae6ffc8();
  *param_1 = uVar10 | 1;
  puVar12 = *(uint **)(uVar10 + 0x20);
  uVar4 = *puVar12;
  if ((uVar4 & 1) == 0) {
    do {
      uVar3 = *puVar12;
      if (uVar3 != uVar4) {
        ClearExclusiveLocal();
        break;
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar8) {
        *puVar12 = uVar4 | 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((uVar3 & 1) == 0) goto LAB_10ae6fd60;
  }
  func_0x00010bdb3254(puVar12);
LAB_10ae6fd60:
  lVar9 = *(long *)(*(long *)(uVar10 + 0x20) + 8);
  if (lVar9 != 0) {
    *(ulong *)(lVar9 + 0x28) = uVar10;
  }
  *(long *)(uVar10 + 0x30) = lVar9;
  *(ulong *)(*(long *)(uVar10 + 0x20) + 8) = uVar10;
  uVar4 = *puVar12;
  do {
    uVar3 = *puVar12;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
    if (bVar8) {
      *puVar12 = uVar4 & 2;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (7 < uVar3) {
    func_0x00010bdb33e0(puVar12);
  }
  return;
}



/* Entry: 10ae706fc; end: 10ae70763;  */

void FUN_10ae706fc(byte *param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  if ((*param_1 & 1) != 0) {
    if ((*(long *)param_1 + -1 == 0) || (FUN_10ae6fe50(*(long *)param_1 + -1), (*param_1 & 1) != 0))
    {
      lVar8 = *(long *)(param_1 + 8);
    }
    else {
      lVar8 = 0;
    }
    puVar1 = (uint *)(lVar8 + 8);
    do {
      uVar3 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar3 - 4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar3 & 0xfffffff9) == 0) {
      while (bVar4 = *(byte *)(lVar8 + 0xc), bVar4 == 1) {
        lVar10 = *(long *)(lVar8 + 0x18);
        __ZdlPv(lVar8);
        puVar1 = (uint *)(lVar10 + 8);
        lVar8 = lVar10;
        if (*puVar1 != 4) {
          do {
            uVar3 = *puVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar7) {
              *puVar1 = uVar3 - 4;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((uVar3 & 0xfffffff9) != 0) {
            return;
          }
        }
      }
      if (bVar4 < 4) {
        if (bVar4 == 2) {
          if (*(long *)(lVar8 + 0x10) != 0) {
            puVar1 = (uint *)(*(long *)(lVar8 + 0x10) + 8);
            do {
              uVar3 = *puVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar3 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((uVar3 & 0xfffffff9) == 0) {
              FUN_10ae6cd10();
            }
          }
          func_0x00010ae701fc(*(undefined8 *)(lVar8 + 0x18));
        }
        else if (bVar4 == 3) {
          lVar10 = lVar8 + 0x10;
          bVar4 = *(byte *)(lVar8 + 0xe);
          uVar9 = (ulong)bVar4;
          bVar5 = *(byte *)(lVar8 + 0xf);
          plVar2 = (long *)(lVar10 + (ulong)bVar5 * 8);
          if (*(char *)(lVar8 + 0xd) == '\x01') {
            if (bVar4 == bVar5) goto code_r0x00010bdbd7ac;
            plVar11 = (long *)(lVar10 + uVar9 * 8);
            do {
              lVar10 = *plVar11;
              puVar1 = (uint *)(lVar10 + 8);
              if (*puVar1 == 4) {
LAB_10ae6e04c:
                bVar4 = *(byte *)(lVar10 + 0xf);
                if ((uint)*(byte *)(lVar10 + 0xe) != (uint)bVar4) {
                  plVar12 = (long *)(lVar10 + 0x10 + (ulong)*(byte *)(lVar10 + 0xe) * 8);
                  do {
                    puVar1 = (uint *)(*plVar12 + 8);
                    if (*puVar1 == 4) {
LAB_10ae6e094:
                      FUN_10ae6e194();
                    }
                    else {
                      do {
                        uVar3 = *puVar1;
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar7) {
                          *puVar1 = uVar3 - 4;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e094;
                    }
                    plVar12 = plVar12 + 1;
                  } while (plVar12 != (long *)(lVar10 + 0x10 + (ulong)(uint)bVar4 * 8));
                  if (lVar10 == 0) goto LAB_10ae6e0b0;
                }
                __ZdlPv(lVar10);
              }
              else {
                do {
                  uVar3 = *puVar1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar7) {
                    *puVar1 = uVar3 - 4;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e04c;
              }
LAB_10ae6e0b0:
              plVar11 = plVar11 + 1;
            } while (plVar11 != plVar2);
          }
          else if (*(char *)(lVar8 + 0xd) == '\0') {
            if (bVar4 == bVar5) goto code_r0x00010bdbd7ac;
            plVar11 = (long *)(lVar10 + uVar9 * 8);
            do {
              puVar1 = (uint *)(*plVar11 + 8);
              if (*puVar1 == 4) {
LAB_10ae6e000:
                FUN_10ae6e194();
              }
              else {
                do {
                  uVar3 = *puVar1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar7) {
                    *puVar1 = uVar3 - 4;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e000;
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != plVar2);
          }
          else {
            if (bVar4 == bVar5) goto code_r0x00010bdbd7ac;
            plVar11 = (long *)(lVar10 + uVar9 * 8);
            do {
              lVar10 = *plVar11;
              puVar1 = (uint *)(lVar10 + 8);
              if (*puVar1 == 4) {
LAB_10ae6e0f4:
                bVar4 = *(byte *)(lVar10 + 0xf);
                if ((uint)*(byte *)(lVar10 + 0xe) != (uint)bVar4) {
                  plVar12 = (long *)(lVar10 + 0x10 + (ulong)*(byte *)(lVar10 + 0xe) * 8);
                  do {
                    puVar1 = (uint *)(*plVar12 + 8);
                    if (*puVar1 == 4) {
LAB_10ae6e13c:
                      FUN_10ae6df90();
                    }
                    else {
                      do {
                        uVar3 = *puVar1;
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar7) {
                          *puVar1 = uVar3 - 4;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e13c;
                    }
                    plVar12 = plVar12 + 1;
                  } while (plVar12 != (long *)(lVar10 + 0x10 + (ulong)(uint)bVar4 * 8));
                  if (lVar10 == 0) goto LAB_10ae6e158;
                }
                __ZdlPv(lVar10);
              }
              else {
                do {
                  uVar3 = *puVar1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar7) {
                    *puVar1 = uVar3 - 4;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e0f4;
              }
LAB_10ae6e158:
              plVar11 = plVar11 + 1;
            } while (plVar11 != plVar2);
          }
          if (lVar8 == 0) {
            return;
          }
        }
      }
      else if (bVar4 == 4) {
        FUN_10ae6f8c8(lVar8,*(undefined4 *)(lVar8 + 0x10),*(undefined4 *)(lVar8 + 0x14));
      }
      else if (bVar4 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010ae6cdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x18))(lVar8);
        return;
      }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar8);
      return;
    }
  }
  return;
}



/* Entry: 10ae70764; end: 10ae70837;  */

/* WARNING: Type propagation algorithm not settling */

ulong * FUN_10ae70764(long param_1,ulong *param_2)

{
  int *piVar1;
  long lVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  code *pcVar10;
  bool bVar11;
  ulong *puVar12;
  long *plVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  int iVar16;
  char cVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  ulong *puVar26;
  uint uVar27;
  ulong *puVar28;
  long *plVar29;
  ulong *puVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  ulong uStack_108;
  ulong uStack_e8;
  long *plStack_e0;
  ulong *puStack_d8;
  ulong auStack_d0 [14];
  
  if (param_2 == (ulong *)0x0) {
    puVar28 = (ulong *)0x0;
  }
  else {
    plStack_e0 = (long *)((long)param_2 - 0xff3);
    if (0xff2 < param_2 && plStack_e0 != (long *)0x0) {
      puVar15 = (undefined8 *)0x1000;
      __Znwm();
      *(undefined4 *)(puVar15 + 1) = 4;
      *(undefined1 *)((long)puVar15 + 0xc) = 0x7a;
      *puVar15 = 0xff3;
      _memcpy((long)puVar15 + 0xd,param_1,0xff3);
      puStack_d8 = (ulong *)0x40;
      __Znwm();
      *(undefined4 *)(puStack_d8 + 1) = 4;
      *puStack_d8 = 0xff3;
      *(undefined4 *)((long)puStack_d8 + 0xc) = 0x1000003;
      puStack_d8[2] = (ulong)puVar15;
      param_1 = param_1 + 0xff3;
      if (plStack_e0 == (long *)0x0) {
        return puStack_d8;
      }
      bVar7 = *(byte *)((long)puStack_d8 + 0xd);
      uStack_e8 = (ulong)bVar7;
      puVar28 = puStack_d8;
      if (bVar7 == 0) {
        uVar31 = 0;
      }
      else {
        uVar18 = 0;
        do {
          uVar31 = uVar18;
          if ((puVar28[1] & 0xfffffffd) != 4) break;
          auStack_d0[uVar18 + 1] = (ulong)puVar28;
          uVar18 = uVar18 + 1;
          puVar28 = (ulong *)puVar28[(ulong)*(byte *)((long)puVar28 + 0xf) + 1];
          uVar31 = uStack_e8;
        } while (uStack_e8 != uVar18);
      }
      iVar16 = (int)uVar31;
      iVar5 = iVar16;
      if ((puVar28[1] & 0xfffffffd) == 4) {
        iVar5 = iVar16 + 1;
      }
      if (iVar16 < (int)(uint)bVar7) {
        puVar12 = auStack_d0 + (uVar31 & 0xffffffff);
        lVar19 = uStack_e8 - (uVar31 & 0xffffffff);
        do {
          puVar12 = puVar12 + 1;
          *puVar12 = (ulong)puVar28;
          puVar28 = (ulong *)puVar28[(ulong)*(byte *)((long)puVar28 + 0xf) + 1];
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      auStack_d0[0]._0_4_ = iVar5;
      if ((ulong)*(byte *)((long)puVar28 + 0xf) - (ulong)*(byte *)((long)puVar28 + 0xe) < 6) {
        if ((int)(uint)bVar7 < iVar5) {
          uStack_108 = 0;
          puVar12 = puVar28;
        }
        else {
          uVar31 = *puVar28;
          puVar12 = (ulong *)0x40;
          __Znwm();
          *(undefined4 *)(puVar12 + 1) = 4;
          *puVar12 = uVar31;
          uVar33 = *(undefined8 *)((long)puVar28 + 0x14);
          uVar32 = *(undefined8 *)((long)puVar28 + 0xc);
          uVar35 = *(undefined8 *)((long)puVar28 + 0x24);
          uVar34 = *(undefined8 *)((long)puVar28 + 0x1c);
          uVar37 = *(undefined8 *)((long)puVar28 + 0x34);
          uVar36 = *(undefined8 *)((long)puVar28 + 0x2c);
          *(undefined4 *)((long)puVar12 + 0x3c) = *(undefined4 *)((long)puVar28 + 0x3c);
          *(undefined8 *)((long)puVar12 + 0x34) = uVar37;
          *(undefined8 *)((long)puVar12 + 0x2c) = uVar36;
          *(undefined8 *)((long)puVar12 + 0x24) = uVar35;
          *(undefined8 *)((long)puVar12 + 0x1c) = uVar34;
          *(undefined8 *)((long)puVar12 + 0x14) = uVar33;
          *(undefined8 *)((long)puVar12 + 0xc) = uVar32;
          bVar8 = *(byte *)((long)puVar28 + 0xf);
          if ((uint)*(byte *)((long)puVar28 + 0xe) == (uint)bVar8) {
            uStack_108 = 1;
          }
          else {
            puVar14 = puVar28 + (ulong)*(byte *)((long)puVar28 + 0xe) + 2;
            uStack_108 = 1;
            do {
              piVar1 = (int *)(*puVar14 + 8);
              do {
                cVar17 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 4;
                  cVar17 = ExclusiveMonitorsStatus();
                }
              } while (cVar17 != '\0');
              puVar14 = puVar14 + 1;
            } while (puVar14 != puVar28 + (ulong)(uint)bVar8 + 2);
          }
        }
        bVar8 = *(byte *)((long)puVar12 + 0xe);
        plVar29 = plStack_e0;
        if (bVar8 != 0) {
          bVar9 = *(byte *)((long)puVar12 + 0xf);
          lVar19 = (ulong)bVar9 - (ulong)bVar8;
          *(undefined1 *)((long)puVar12 + 0xe) = 0;
          *(char *)((long)puVar12 + 0xf) = (char)lVar19;
          if (bVar9 != bVar8) {
            puVar28 = puVar12 + 2;
            do {
              *puVar28 = puVar28[bVar8];
              lVar19 = lVar19 + -1;
              puVar28 = puVar28 + 1;
            } while (lVar19 != 0);
          }
        }
        do {
          plVar25 = plVar29;
          FUN_10ae6f400();
          bVar8 = *(byte *)((long)plVar25 + 0xc);
          uVar21 = 6;
          if (0xba < bVar8) {
            uVar21 = 0xc;
          }
          iVar16 = -0xe8d;
          if (0xba < bVar8) {
            iVar16 = -0xb800d;
          }
          uVar27 = 3;
          if (0x42 < bVar8) {
            uVar27 = uVar21;
          }
          iVar4 = -0x1d;
          if (0x42 < bVar8) {
            iVar4 = iVar16;
          }
          iVar4 = ((uint)bVar8 << (ulong)uVar27) + iVar4;
          plVar13 = plVar29;
          if ((long *)(long)iVar4 <= plVar29) {
            plVar13 = (long *)(long)iVar4;
          }
          *plVar25 = (long)plVar13;
          bVar8 = *(byte *)((long)puVar12 + 0xf);
          *(byte *)((long)puVar12 + 0xf) = bVar8 + 1;
          puVar12[(ulong)bVar8 + 2] = (ulong)plVar25;
          _memcpy((long)plVar25 + 0xd,param_1,plVar13);
          plVar29 = (long *)((long)plVar29 - (long)plVar13);
          if (plVar29 == (long *)0x0) {
            *puVar12 = *puVar12 + (long)plStack_e0;
            goto LAB_10ae6df20;
          }
          param_1 = param_1 + (long)plVar13;
        } while (*(char *)((long)puVar12 + 0xf) != '\x06');
        lVar19 = (long)plStack_e0 - (long)plVar29;
        *puVar12 = *puVar12 + lVar19;
        uVar21 = (uint)bVar7;
        if (uVar21 == 0) {
          iVar16 = (int)uStack_108;
        }
        else {
          uVar27 = uVar21 - 2;
          uVar31 = uStack_e8;
          do {
            puVar28 = (ulong *)auStack_d0[uVar31];
            iVar16 = (int)uStack_108;
            if (iVar16 == 1) {
              uStack_108 = (ulong)((long)uVar31 <= (long)iVar5);
              FUN_10ae6f6a0(puVar28,uStack_108,puVar12,lVar19);
              auStack_d0[uVar31] = (ulong)puVar28;
              puVar12 = puVar28;
            }
            else if (iVar16 == 2) {
              bVar7 = *(byte *)((long)puVar28 + 0xf);
              bVar8 = *(byte *)((long)puVar28 + 0xe);
              if ((ulong)bVar7 - (ulong)bVar8 < 6) {
                if ((long)iVar5 < (long)uVar31) {
                  uVar18 = *puVar28;
                  puVar14 = (ulong *)0x40;
                  __Znwm();
                  *(undefined4 *)(puVar14 + 1) = 4;
                  *puVar14 = uVar18;
                  uVar33 = *(undefined8 *)((long)puVar28 + 0x14);
                  uVar32 = *(undefined8 *)((long)puVar28 + 0xc);
                  uVar35 = *(undefined8 *)((long)puVar28 + 0x24);
                  uVar34 = *(undefined8 *)((long)puVar28 + 0x1c);
                  uVar37 = *(undefined8 *)((long)puVar28 + 0x34);
                  uVar36 = *(undefined8 *)((long)puVar28 + 0x2c);
                  *(undefined4 *)((long)puVar14 + 0x3c) = *(undefined4 *)((long)puVar28 + 0x3c);
                  *(undefined8 *)((long)puVar14 + 0x34) = uVar37;
                  *(undefined8 *)((long)puVar14 + 0x2c) = uVar36;
                  *(undefined8 *)((long)puVar14 + 0x24) = uVar35;
                  *(undefined8 *)((long)puVar14 + 0x1c) = uVar34;
                  *(undefined8 *)((long)puVar14 + 0x14) = uVar33;
                  *(undefined8 *)((long)puVar14 + 0xc) = uVar32;
                  if (bVar8 == bVar7) {
                    uStack_108 = 1;
                  }
                  else {
                    puVar22 = puVar28 + (ulong)bVar8 + 2;
                    do {
                      piVar1 = (int *)(*puVar22 + 8);
                      do {
                        cVar17 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar11) {
                          *piVar1 = *piVar1 + 4;
                          cVar17 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar17 != '\0');
                      puVar22 = puVar22 + 1;
                    } while (puVar22 != puVar28 + (ulong)bVar7 + 2);
                    uStack_108 = 1;
                  }
                }
                else {
                  uStack_108 = 0;
                  puVar14 = puVar28;
                }
                bVar7 = *(byte *)((long)puVar14 + 0xe);
                uVar18 = (ulong)bVar7;
                bVar8 = *(byte *)((long)puVar14 + 0xf);
                uVar23 = (ulong)bVar8;
                if (uVar18 != 0) {
                  uVar23 = uVar23 - uVar18;
                  *(undefined1 *)((long)puVar14 + 0xe) = 0;
                  *(char *)((long)puVar14 + 0xf) = (char)uVar23;
                  if (bVar8 != bVar7) {
                    puVar28 = puVar14 + 2;
                    uVar24 = uVar23;
                    do {
                      *puVar28 = puVar28[uVar18];
                      uVar24 = uVar24 - 1;
                      puVar28 = puVar28 + 1;
                    } while (uVar24 != 0);
                  }
                }
                *(char *)((long)puVar14 + 0xf) = (char)uVar23 + '\x01';
                puVar14[(uVar23 & 0xff) + 2] = (ulong)puVar12;
                *puVar14 = *puVar14 + lVar19;
                puVar12 = puVar14;
              }
              else {
                puVar28 = (ulong *)0x40;
                __Znwm();
                *(undefined4 *)(puVar28 + 1) = 4;
                if (*(char *)((long)puVar12 + 0xc) == '\x03') {
                  cVar17 = *(char *)((long)puVar12 + 0xd) + '\x01';
                }
                else {
                  cVar17 = '\0';
                }
                *puVar28 = *puVar12;
                *(undefined1 *)((long)puVar28 + 0xc) = 3;
                *(char *)((long)puVar28 + 0xd) = cVar17;
                *(undefined2 *)((long)puVar28 + 0xe) = 0x100;
                puVar28[2] = (ulong)puVar12;
                uStack_108 = 2;
                puVar12 = puVar28;
              }
            }
            else if (iVar16 == 0) {
              *puVar28 = *puVar28 + lVar19;
              puVar12 = puVar28;
              if (1 < uVar31) {
                puVar28 = auStack_d0 + (ulong)uVar27 + 1;
                do {
                  puVar12 = (ulong *)*puVar28;
                  *puVar12 = *puVar12 + lVar19;
                  uVar27 = (int)uVar31 - 1;
                  uVar31 = (ulong)uVar27;
                  puVar28 = puVar28 + -1;
                } while (1 < (int)uVar27);
              }
              goto LAB_10ae6dd9c;
            }
            iVar16 = (int)uStack_108;
            uVar27 = uVar27 - 1;
            bVar11 = 1 < uVar31;
            uVar31 = uVar31 - 1;
          } while (bVar11);
        }
        if (iVar16 != 0) {
          if (iVar16 == 1) {
            puStack_d8 = puStack_d8 + 1;
            do {
              uVar31 = *puStack_d8;
              cVar17 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puStack_d8,0x10);
              if (bVar11) {
                *(uint *)puStack_d8 = (uint)uVar31 - 4;
                cVar17 = ExclusiveMonitorsStatus();
              }
            } while (cVar17 != '\0');
            if (((uint)uVar31 & 0xfffffff9) == 0) {
              FUN_10ae6cd10();
            }
          }
          else {
            puVar28 = (ulong *)0x40;
            __Znwm();
            *(undefined4 *)(puVar28 + 1) = 4;
            *puVar28 = *puVar12 + *puStack_d8;
            bVar7 = *(char *)((long)puStack_d8 + 0xd) + 1;
            *(undefined1 *)((long)puVar28 + 0xc) = 3;
            *(byte *)((long)puVar28 + 0xd) = bVar7;
            *(undefined2 *)((long)puVar28 + 0xe) = 0x200;
            puVar28[2] = (ulong)puStack_d8;
            puVar28[3] = (ulong)puVar12;
            puVar12 = puVar28;
            if ((0xb < bVar7) &&
               (FUN_10ae6f110(), puVar12 = puVar28, 0xb < *(byte *)((long)puVar28 + 0xd))) {
              FUN_10ae87b7c(3,&UNK_10f6d18a0,0x118,&UNK_10f6d18c6);
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10ae6dd60);
              (*pcVar10)();
            }
          }
        }
LAB_10ae6dd9c:
        plStack_e0 = plVar29;
        puStack_d8 = puVar12;
        auStack_d0[0]._0_4_ = uVar21 + 1;
      }
      do {
        puVar12 = (ulong *)0x40;
        __Znwm();
        plVar29 = (long *)0x0;
        *(undefined4 *)(puVar12 + 1) = 4;
        *(undefined2 *)((long)puVar12 + 0xc) = 3;
        *(undefined1 *)((long)puVar12 + 0xe) = 0;
        lVar20 = 2;
        plVar25 = plStack_e0;
        lVar19 = param_1;
        do {
          plVar13 = plVar25;
          FUN_10ae6f400();
          bVar7 = *(byte *)((long)plVar13 + 0xc);
          uVar21 = 6;
          if (0xba < bVar7) {
            uVar21 = 0xc;
          }
          iVar5 = -0xe8d;
          if (0xba < bVar7) {
            iVar5 = -0xb800d;
          }
          uVar27 = 3;
          if (0x42 < bVar7) {
            uVar27 = uVar21;
          }
          iVar16 = -0x1d;
          if (0x42 < bVar7) {
            iVar16 = iVar5;
          }
          iVar16 = ((uint)bVar7 << (ulong)uVar27) + iVar16;
          plVar6 = plVar25;
          if ((long *)(long)iVar16 <= plVar25) {
            plVar6 = (long *)(long)iVar16;
          }
          *plVar13 = (long)plVar6;
          plVar29 = (long *)((long)plVar6 + (long)plVar29);
          puVar12[lVar20] = (ulong)plVar13;
          _memcpy((long)plVar13 + 0xd,lVar19,plVar6);
          lVar19 = lVar19 + (long)plVar6;
          plVar25 = (long *)((long)plVar25 - (long)plVar6);
          lVar2 = lVar20 + 1;
          bVar11 = lVar20 != 7;
          lVar20 = lVar2;
        } while (plVar25 != (long *)0x0 && bVar11);
        *puVar12 = (ulong)plVar29;
        *(char *)((long)puVar12 + 0xf) = (char)lVar2 + -2;
        if ((long *)((long)plStack_e0 - (long)plVar29) == (long *)0x0) {
          uStack_108 = 2;
LAB_10ae6df20:
          puVar28 = auStack_d0;
          FUN_10ae6d470(puVar28,puStack_d8,uStack_e8,plStack_e0,puVar12,uStack_108);
          return puVar28;
        }
        if (plStack_e0 < plVar29) goto LAB_10ae6df84;
        puVar28 = auStack_d0;
        FUN_10ae6d470(puVar28,puStack_d8,uStack_e8,plVar29,puVar12,2);
        bVar7 = *(byte *)((long)puVar28 + 0xd);
        uStack_e8 = (ulong)bVar7;
        uVar31 = uStack_e8;
        puVar14 = puVar28;
        puVar12 = auStack_d0;
        if (bVar7 == 0) {
          auStack_d0[0]._0_4_ = 1;
        }
        else {
          do {
            puVar12[1] = (ulong)puVar14;
            uVar31 = uVar31 - 1;
            puVar14 = (ulong *)puVar14[(ulong)*(byte *)((long)puVar14 + 0xf) + 1];
            puVar12 = puVar12 + 1;
          } while (uVar31 != 0);
          auStack_d0[0]._0_4_ = bVar7 + 1;
        }
        param_1 = (long)plVar29 + param_1;
        plStack_e0 = (long *)((long)plStack_e0 - (long)plVar29);
        puStack_d8 = puVar28;
      } while( true );
    }
    puVar28 = param_2;
    FUN_10ae6f400();
    *puVar28 = (ulong)param_2;
    _memcpy((long)puVar28 + 0xd,param_1,param_2);
  }
  return puVar28;
LAB_10ae6df84:
  puVar28 = (ulong *)&UNK_10f6d18b2;
  func_0x000109262df8();
  bVar7 = *(byte *)((long)puVar28 + 0xe);
  bVar8 = *(byte *)((long)puVar28 + 0xf);
  puVar12 = puVar28 + (ulong)bVar8 + 2;
  puVar14 = puVar28;
  if (*(char *)((long)puVar28 + 0xd) == '\x01') {
    if (bVar7 == bVar8) goto LAB_10ae6e168;
    puVar22 = puVar28 + (ulong)bVar7 + 2;
    do {
      puVar26 = (ulong *)*puVar22;
      puVar30 = puVar26 + 1;
      if ((uint)*puVar30 == 4) {
LAB_10ae6e04c:
        bVar7 = *(byte *)((long)puVar26 + 0xf);
        if ((uint)*(byte *)((long)puVar26 + 0xe) != (uint)bVar7) {
          puVar30 = puVar26 + (ulong)*(byte *)((long)puVar26 + 0xe) + 2;
          do {
            puVar14 = (ulong *)*puVar30;
            puVar3 = puVar14 + 1;
            if ((uint)*puVar3 == 4) {
LAB_10ae6e094:
              FUN_10ae6e194();
            }
            else {
              do {
                uVar31 = *puVar3;
                cVar17 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar11) {
                  *(uint *)puVar3 = (uint)uVar31 - 4;
                  cVar17 = ExclusiveMonitorsStatus();
                }
              } while (cVar17 != '\0');
              if (((uint)uVar31 & 0xfffffff9) == 0) goto LAB_10ae6e094;
            }
            puVar30 = puVar30 + 1;
          } while (puVar30 != puVar26 + (ulong)(uint)bVar7 + 2);
          if (puVar26 == (ulong *)0x0) goto LAB_10ae6e0b0;
        }
        __ZdlPv(puVar26);
        puVar14 = puVar26;
      }
      else {
        do {
          uVar31 = *puVar30;
          cVar17 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar30,0x10);
          if (bVar11) {
            *(uint *)puVar30 = (uint)uVar31 - 4;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (((uint)uVar31 & 0xfffffff9) == 0) goto LAB_10ae6e04c;
      }
LAB_10ae6e0b0:
      puVar22 = puVar22 + 1;
    } while (puVar22 != puVar12);
  }
  else if (*(char *)((long)puVar28 + 0xd) == '\0') {
    if (bVar7 == bVar8) goto LAB_10ae6e168;
    puVar22 = puVar28 + (ulong)bVar7 + 2;
    do {
      puVar14 = (ulong *)*puVar22;
      puVar30 = puVar14 + 1;
      if ((uint)*puVar30 == 4) {
LAB_10ae6e000:
        FUN_10ae6e194();
      }
      else {
        do {
          uVar31 = *puVar30;
          cVar17 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar30,0x10);
          if (bVar11) {
            *(uint *)puVar30 = (uint)uVar31 - 4;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (((uint)uVar31 & 0xfffffff9) == 0) goto LAB_10ae6e000;
      }
      puVar22 = puVar22 + 1;
    } while (puVar22 != puVar12);
  }
  else {
    if (bVar7 == bVar8) goto LAB_10ae6e168;
    puVar22 = puVar28 + (ulong)bVar7 + 2;
    do {
      puVar26 = (ulong *)*puVar22;
      puVar30 = puVar26 + 1;
      if ((uint)*puVar30 == 4) {
LAB_10ae6e0f4:
        bVar7 = *(byte *)((long)puVar26 + 0xf);
        if ((uint)*(byte *)((long)puVar26 + 0xe) != (uint)bVar7) {
          puVar30 = puVar26 + (ulong)*(byte *)((long)puVar26 + 0xe) + 2;
          do {
            puVar14 = (ulong *)*puVar30;
            puVar3 = puVar14 + 1;
            if ((uint)*puVar3 == 4) {
LAB_10ae6e13c:
              FUN_10ae6df90();
            }
            else {
              do {
                uVar31 = *puVar3;
                cVar17 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar11) {
                  *(uint *)puVar3 = (uint)uVar31 - 4;
                  cVar17 = ExclusiveMonitorsStatus();
                }
              } while (cVar17 != '\0');
              if (((uint)uVar31 & 0xfffffff9) == 0) goto LAB_10ae6e13c;
            }
            puVar30 = puVar30 + 1;
          } while (puVar30 != puVar26 + (ulong)(uint)bVar7 + 2);
          if (puVar26 == (ulong *)0x0) goto LAB_10ae6e158;
        }
        __ZdlPv(puVar26);
        puVar14 = puVar26;
      }
      else {
        do {
          uVar31 = *puVar30;
          cVar17 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar30,0x10);
          if (bVar11) {
            *(uint *)puVar30 = (uint)uVar31 - 4;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (((uint)uVar31 & 0xfffffff9) == 0) goto LAB_10ae6e0f4;
      }
LAB_10ae6e158:
      puVar22 = puVar22 + 1;
    } while (puVar22 != puVar12);
  }
  if (puVar28 == (ulong *)0x0) {
    return puVar14;
  }
LAB_10ae6e168:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar28);
  return puVar28;
}



/* Entry: 10ae70838; end: 10ae70913;  */

void FUN_10ae70838(long *param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  if (*param_1 + -1 != 0) {
    FUN_10ae6fe50(*param_1 + -1);
  }
  lVar8 = param_1[1];
  puVar1 = (uint *)(lVar8 + 8);
  do {
    uVar3 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar3 - 4;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar3 & 0xfffffff9) != 0) {
    return;
  }
  while (bVar4 = *(byte *)(lVar8 + 0xc), bVar4 == 1) {
    lVar10 = *(long *)(lVar8 + 0x18);
    __ZdlPv(lVar8);
    puVar1 = (uint *)(lVar10 + 8);
    lVar8 = lVar10;
    if (*puVar1 != 4) {
      do {
        uVar3 = *puVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar3 - 4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((uVar3 & 0xfffffff9) != 0) {
        return;
      }
    }
  }
  if (bVar4 < 4) {
    if (bVar4 == 2) {
      if (*(long *)(lVar8 + 0x10) != 0) {
        puVar1 = (uint *)(*(long *)(lVar8 + 0x10) + 8);
        do {
          uVar3 = *puVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar3 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar3 & 0xfffffff9) == 0) {
          FUN_10ae6cd10();
        }
      }
      func_0x00010ae701fc(*(undefined8 *)(lVar8 + 0x18));
    }
    else if (bVar4 == 3) {
      lVar10 = lVar8 + 0x10;
      bVar4 = *(byte *)(lVar8 + 0xe);
      uVar9 = (ulong)bVar4;
      bVar5 = *(byte *)(lVar8 + 0xf);
      plVar2 = (long *)(lVar10 + (ulong)bVar5 * 8);
      if (*(char *)(lVar8 + 0xd) == '\x01') {
        if (bVar4 == bVar5) goto code_r0x00010bdbd7ac;
        plVar11 = (long *)(lVar10 + uVar9 * 8);
        do {
          lVar10 = *plVar11;
          puVar1 = (uint *)(lVar10 + 8);
          if (*puVar1 == 4) {
LAB_10ae6e04c:
            bVar4 = *(byte *)(lVar10 + 0xf);
            if ((uint)*(byte *)(lVar10 + 0xe) != (uint)bVar4) {
              plVar12 = (long *)(lVar10 + 0x10 + (ulong)*(byte *)(lVar10 + 0xe) * 8);
              do {
                puVar1 = (uint *)(*plVar12 + 8);
                if (*puVar1 == 4) {
LAB_10ae6e094:
                  FUN_10ae6e194();
                }
                else {
                  do {
                    uVar3 = *puVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar7) {
                      *puVar1 = uVar3 - 4;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e094;
                }
                plVar12 = plVar12 + 1;
              } while (plVar12 != (long *)(lVar10 + 0x10 + (ulong)(uint)bVar4 * 8));
              if (lVar10 == 0) goto LAB_10ae6e0b0;
            }
            __ZdlPv(lVar10);
          }
          else {
            do {
              uVar3 = *puVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar3 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e04c;
          }
LAB_10ae6e0b0:
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar2);
      }
      else if (*(char *)(lVar8 + 0xd) == '\0') {
        if (bVar4 == bVar5) goto code_r0x00010bdbd7ac;
        plVar11 = (long *)(lVar10 + uVar9 * 8);
        do {
          puVar1 = (uint *)(*plVar11 + 8);
          if (*puVar1 == 4) {
LAB_10ae6e000:
            FUN_10ae6e194();
          }
          else {
            do {
              uVar3 = *puVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar3 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e000;
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar2);
      }
      else {
        if (bVar4 == bVar5) goto code_r0x00010bdbd7ac;
        plVar11 = (long *)(lVar10 + uVar9 * 8);
        do {
          lVar10 = *plVar11;
          puVar1 = (uint *)(lVar10 + 8);
          if (*puVar1 == 4) {
LAB_10ae6e0f4:
            bVar4 = *(byte *)(lVar10 + 0xf);
            if ((uint)*(byte *)(lVar10 + 0xe) != (uint)bVar4) {
              plVar12 = (long *)(lVar10 + 0x10 + (ulong)*(byte *)(lVar10 + 0xe) * 8);
              do {
                puVar1 = (uint *)(*plVar12 + 8);
                if (*puVar1 == 4) {
LAB_10ae6e13c:
                  FUN_10ae6df90();
                }
                else {
                  do {
                    uVar3 = *puVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar7) {
                      *puVar1 = uVar3 - 4;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e13c;
                }
                plVar12 = plVar12 + 1;
              } while (plVar12 != (long *)(lVar10 + 0x10 + (ulong)(uint)bVar4 * 8));
              if (lVar10 == 0) goto LAB_10ae6e158;
            }
            __ZdlPv(lVar10);
          }
          else {
            do {
              uVar3 = *puVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar3 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e0f4;
          }
LAB_10ae6e158:
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar2);
      }
      if (lVar8 == 0) {
        return;
      }
    }
  }
  else if (bVar4 == 4) {
    FUN_10ae6f8c8(lVar8,*(undefined4 *)(lVar8 + 0x10),*(undefined4 *)(lVar8 + 0x14));
  }
  else if (bVar4 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010ae6cdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x18))(lVar8);
    return;
  }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar8);
  return;
}



/* Entry: 10ae70914; end: 10ae70aff;  */

byte * FUN_10ae70914(byte *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong *puVar12;
  long lStack_48;
  
  if ((*param_1 & 1) == 0) {
    if (0xf < param_3) {
LAB_10ae70a44:
      FUN_10ae70764(param_2,param_3);
      param_1[0] = 1;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined8 *)(param_1 + 8) = param_2;
      return param_1;
    }
LAB_10ae709a0:
    func_0x000107c2b988(param_1,param_2,param_3);
    return param_1;
  }
  puVar12 = *(ulong **)(param_1 + 8);
  if (param_3 < 0x10) {
    if (puVar12 != (ulong *)0x0) {
      if (*(long *)param_1 + -1 != 0) {
        FUN_10ae6fe50(*(long *)param_1 + -1);
      }
      func_0x000107c2b988(param_1,param_2,param_3);
      puVar1 = puVar12 + 1;
      do {
        uVar8 = *puVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *(uint *)puVar1 = (uint)uVar8 - 4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (((uint)uVar8 & 0xfffffff9) != 0) {
        return param_1;
      }
      FUN_10ae6cd10(puVar12);
      return param_1;
    }
    goto LAB_10ae709a0;
  }
  if (puVar12 == (ulong *)0x0) goto LAB_10ae70a44;
  lVar10 = *(long *)param_1;
  lStack_48 = lVar10 + -1;
  if (lStack_48 != 0) {
    func_0x000107c2b9f0(lVar10 + 0x37);
    *(long *)(lVar10 + 0x48f) = *(long *)(lVar10 + 0x48f) + 1;
  }
  bVar5 = *(byte *)((long)puVar12 + 0xc);
  if (5 < bVar5) {
    uVar11 = 6;
    if (0xba < bVar5) {
      uVar11 = 0xc;
    }
    iVar2 = -0xe8d;
    if (0xba < bVar5) {
      iVar2 = -0xb800d;
    }
    uVar9 = (uint)bVar5;
    uVar3 = 3;
    if (0x42 < uVar9) {
      uVar3 = uVar11;
    }
    iVar4 = -0x1d;
    if (0x42 < uVar9) {
      iVar4 = iVar2;
    }
    if ((param_3 <= (ulong)(long)(int)((uVar9 << (ulong)uVar3) + iVar4)) &&
       ((puVar12[1] & 0xfffffffd) == 4)) {
      _memmove((long)puVar12 + 0xd,param_2,param_3);
      *puVar12 = param_3;
      goto LAB_10ae70a90;
    }
  }
  FUN_10ae70764(param_2,param_3);
  *(undefined8 *)(param_1 + 8) = param_2;
  if (lStack_48 != 0) {
    *(undefined8 *)(lStack_48 + 0x40) = param_2;
  }
  puVar1 = puVar12 + 1;
  do {
    uVar8 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *(uint *)puVar1 = (uint)uVar8 - 4;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (((uint)uVar8 & 0xfffffff9) == 0) {
    FUN_10ae6cd10(puVar12);
  }
LAB_10ae70a90:
  FUN_10ae72844(&lStack_48);
  return param_1;
}



/* Entry: 10ae70b00; end: 10ae7102f;  */

void FUN_10ae70b00(byte *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  bool bVar18;
  ulong uVar19;
  long lStack_58;
  
  bVar8 = *param_1;
  if ((((bVar8 & 1) != 0) && (plVar16 = *(long **)(param_1 + 8), plVar16 != (long *)0x0)) &&
     (*plVar16 == 0)) {
    if (*(long *)param_1 + -1 != 0) {
      FUN_10ae6fe50(*(long *)param_1 + -1);
    }
    puVar1 = (uint *)(plVar16 + 1);
    do {
      uVar10 = *puVar1;
      cVar6 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar18) {
        *puVar1 = uVar10 - 4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar10 & 0xfffffff9) == 0) {
      FUN_10ae6cd10(plVar16);
    }
    bVar8 = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  if (param_3 == 0) {
    return;
  }
  if (((bVar8 & 1) == 0) || (plVar16 = *(long **)(param_1 + 8), plVar16 == (long *)0x0)) {
    lStack_58 = 0;
    uVar9 = (ulong)(char)bVar8;
    uVar17 = uVar9 >> 1;
    plVar15 = (long *)(param_3 + (uVar9 >> 1));
    if (param_3 <= 0xf - (uVar9 >> 1)) {
      *param_1 = (byte)((int)plVar15 << 1);
      _memcpy(param_1 + uVar17 + 1,param_2,param_3);
      goto LAB_10ae70e90;
    }
    FUN_10ae6f400();
    bVar8 = *(byte *)((long)plVar15 + 0xc);
    uVar10 = 6;
    if (0xba < bVar8) {
      uVar10 = 0xc;
    }
    iVar2 = -0xe8d;
    if (0xba < bVar8) {
      iVar2 = -0xb800d;
    }
    uVar3 = 3;
    if (0x42 < bVar8) {
      uVar3 = uVar10;
    }
    iVar4 = -0x1d;
    if (0x42 < bVar8) {
      iVar4 = iVar2;
    }
    uVar19 = (long)(int)(((uint)bVar8 << (ulong)uVar3) + iVar4) - uVar17;
    uVar9 = uVar19;
    if (param_3 <= uVar19) {
      uVar9 = param_3;
    }
    _memcpy((long)plVar15 + 0xd,param_1 + 1,uVar17);
    _memcpy((long)plVar15 + 0xd + uVar17,param_2,uVar9);
    *plVar15 = uVar9 + uVar17;
    if (uVar19 < param_3) {
      bVar18 = true;
      goto LAB_10ae70e44;
    }
    *(long **)(param_1 + 8) = plVar15;
  }
  else {
    lVar7 = *(long *)param_1 + -1;
    lStack_58 = lVar7;
    if (lVar7 != 0) {
      func_0x000107c2b9f0(*(long *)param_1 + 0x37);
      lVar7 = lVar7 + (param_4 & 0xffffffff) * 8;
      *(long *)(lVar7 + 0x460) = *(long *)(lVar7 + 0x460) + 1;
    }
    plVar15 = plVar16;
    if (*(char *)((long)plVar16 + 0xc) == '\x02') {
      plVar15 = (long *)plVar16[2];
      puVar1 = (uint *)(plVar16 + 1);
      if ((*puVar1 & 0xfffffffd) == 4) {
        func_0x00010ae701fc(plVar16[3]);
        __ZdlPv(plVar16);
      }
      else {
        plVar11 = plVar15 + 1;
        do {
          cVar6 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar18) {
            *(int *)plVar11 = (int)*plVar11 + 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          uVar10 = *puVar1;
          cVar6 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar18) {
            *puVar1 = uVar10 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar10 & 0xfffffff9) == 0) {
          FUN_10ae6cd10(plVar16);
        }
      }
    }
    bVar8 = *(byte *)((long)plVar15 + 0xc);
    if (bVar8 == 3) {
      if ((*(uint *)(plVar15 + 1) & 0xfffffffd) != 4) {
LAB_10ae70dd0:
        bVar8 = *(byte *)((long)plVar15 + 0xc);
        goto LAB_10ae70dd4;
      }
      bVar8 = *(byte *)((long)plVar15 + 0xd);
      plVar16 = plVar15;
      if (1 < bVar8) {
        if (bVar8 != 2) {
          if (bVar8 != 3) goto LAB_10ae70dbc;
          plVar16 = (long *)plVar15[(ulong)*(byte *)((long)plVar15 + 0xf) + 1];
          if ((*(uint *)(plVar16 + 1) & 0xfffffffd) != 4) goto LAB_10ae70dd0;
        }
        plVar11 = (long *)plVar16[(ulong)*(byte *)((long)plVar16 + 0xf) + 1];
        if ((*(uint *)(plVar11 + 1) & 0xfffffffd) == 4) {
LAB_10ae70cfc:
          plVar12 = (long *)plVar11[(ulong)*(byte *)((long)plVar11 + 0xf) + 1];
          if ((*(uint *)(plVar12 + 1) & 0xfffffffd) == 4) goto LAB_10ae70d1c;
        }
        goto LAB_10ae70dd0;
      }
      plVar11 = plVar15;
      plVar12 = plVar15;
      if (bVar8 == 0) {
LAB_10ae70d1c:
        plVar13 = (long *)plVar12[(ulong)*(byte *)((long)plVar12 + 0xf) + 1];
        if (((*(uint *)(plVar13 + 1) & 0xfffffffd) == 4) &&
           (bVar5 = *(byte *)((long)plVar13 + 0xc), 5 < bVar5)) {
          uVar10 = 6;
          if (0xba < bVar5) {
            uVar10 = 0xc;
          }
          iVar2 = -0xe8d;
          if (0xba < bVar5) {
            iVar2 = -0xb800d;
          }
          uVar14 = (uint)bVar5;
          uVar3 = 3;
          if (0x42 < uVar14) {
            uVar3 = uVar10;
          }
          iVar4 = -0x1d;
          if (0x42 < uVar14) {
            iVar4 = iVar2;
          }
          uVar9 = (long)(int)((uVar14 << (ulong)uVar3) + iVar4) - *plVar13;
          if (uVar9 != 0) {
            if (param_3 <= uVar9) {
              uVar9 = param_3;
            }
            *plVar13 = uVar9 + *plVar13;
            if (bVar8 < 2) {
              if (bVar8 != 0) goto LAB_10ae70f20;
            }
            else {
              if (bVar8 != 2) {
                *plVar15 = *plVar15 + uVar9;
              }
              *plVar16 = *plVar16 + uVar9;
LAB_10ae70f20:
              *plVar11 = *plVar11 + uVar9;
            }
            *plVar12 = *plVar12 + uVar9;
            if (uVar9 != 0) goto LAB_10ae70ecc;
          }
        }
        goto LAB_10ae70dd0;
      }
      if (bVar8 == 1) goto LAB_10ae70cfc;
LAB_10ae70dbc:
      uVar9 = param_3;
      func_0x00010ae6eb34(plVar15);
      if (uVar9 == 0) goto LAB_10ae70dd0;
LAB_10ae70ecc:
      _memcpy();
      if (param_3 == uVar9) {
        *(long **)(param_1 + 8) = plVar15;
        if (lStack_58 != 0) {
          *(long **)(lStack_58 + 0x40) = plVar15;
        }
        goto LAB_10ae70e90;
      }
      bVar18 = false;
    }
    else {
LAB_10ae70dd4:
      if ((5 < bVar8) && ((*(uint *)(plVar15 + 1) & 0xfffffffd) == 4)) {
        bVar8 = *(byte *)((long)plVar15 + 0xc);
        uVar10 = 6;
        if (0xba < bVar8) {
          uVar10 = 0xc;
        }
        iVar2 = -0xe8d;
        if (0xba < bVar8) {
          iVar2 = -0xb800d;
        }
        uVar3 = 3;
        if (0x42 < bVar8) {
          uVar3 = uVar10;
        }
        iVar4 = -0x1d;
        if (0x42 < bVar8) {
          iVar4 = iVar2;
        }
        uVar9 = (long)(int)(((uint)bVar8 << (ulong)uVar3) + iVar4) - *plVar15;
        if (uVar9 != 0) {
          if (param_3 <= uVar9) {
            uVar9 = param_3;
          }
          *plVar15 = uVar9 + *plVar15;
          goto LAB_10ae70ecc;
        }
      }
      bVar18 = false;
    }
LAB_10ae70e44:
    FUN_10ae704fc();
    func_0x00010ae6d7d0();
    *(long **)(param_1 + 8) = plVar15;
    if (!bVar18) {
      if (lStack_58 != 0) {
        *(long **)(lStack_58 + 0x40) = plVar15;
      }
      goto LAB_10ae70e90;
    }
  }
  param_1[0] = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
LAB_10ae70e90:
  FUN_10ae72844(&lStack_58);
  return;
}



/* Entry: 10ae71030; end: 10ae7138f;  */

void FUN_10ae71030(ulong *param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4,
                  long *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  byte bVar8;
  bool bVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_58;
  
  bVar8 = *param_2;
  uVar16 = (ulong)(char)bVar8;
  if (((uVar16 & 1) == 0) || (plVar14 = *(long **)(param_2 + 8), plVar14 == (long *)0x0)) {
    uVar15 = uVar16 >> 1;
    puVar10 = (undefined8 *)((long)param_4 + (uVar16 >> 1));
    if (CARRY8((ulong)param_4,uVar16 >> 1)) {
      puVar10 = (undefined8 *)0xffffffffffffffff;
    }
    if (param_3 == (undefined8 *)0x0) {
      if (puVar10 < (undefined8 *)0x10) {
        uVar12 = 1;
        *(byte *)param_1 = 1;
        pbVar1 = (byte *)((long)param_1 + 1);
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        param_1[1] = 0;
        puVar10 = (undefined8 *)*param_1;
        goto LAB_10ae7114c;
      }
      FUN_10ae6f400();
    }
    else {
      puVar6 = puVar10;
      if ((undefined8 *)0xffff < puVar10) {
        puVar6 = (undefined8 *)0x10000;
      }
      if ((undefined8 *)0xffff < param_3) {
        param_3 = (undefined8 *)0x10000;
      }
      if (((((undefined8 *)((long)puVar6 + 0xd) < param_3) &&
           (param_3 = (undefined8 *)((long)puVar6 + 0xd), (undefined8 *)0xff3 < puVar10)) &&
          (param_3 = puVar10, ((ulong)puVar6 & (long)puVar6 - 1U) != 0)) &&
         (param_3 = (undefined8 *)(1L << (-LZCOUNT((long)puVar6 - 1U) & 0x3fU)),
         0x80 < (ulong)((long)param_3 + (-0xd - (long)puVar6)))) {
        param_3 = (undefined8 *)(1L << ((LZCOUNT(puVar6) ^ 0x3fU) & 0x3f));
      }
      puVar10 = (undefined8 *)((long)param_3 + -0xd);
      FUN_10ae72878();
    }
    *puVar10 = 0;
    *param_1 = (ulong)puVar10;
    uVar12 = (uint)puVar10 & 0xff;
LAB_10ae7114c:
    pbVar1 = (byte *)((long)puVar10 + 0xd);
    if ((uVar12 & 1) != 0) {
      pbVar1 = (byte *)((long)param_1 + 1);
    }
    pbVar2 = param_2 + 1;
    if (bVar8 < 0x10) {
      if (bVar8 < 8) {
        if (1 < bVar8) {
          *pbVar1 = param_2[1];
          pbVar1[uVar16 >> 2] = pbVar2[uVar16 >> 2];
          pbVar1[uVar15 - 1] = param_2[uVar15];
        }
      }
      else {
        uVar7 = *(undefined4 *)(pbVar2 + (uVar15 - 4));
        *(undefined4 *)pbVar1 = *(undefined4 *)pbVar2;
        *(undefined4 *)(pbVar1 + (uVar15 - 4)) = uVar7;
      }
    }
    else {
      uVar13 = *(undefined8 *)(pbVar2 + (uVar15 - 8));
      *(undefined8 *)pbVar1 = *(undefined8 *)pbVar2;
      *(undefined8 *)(pbVar1 + (uVar15 - 8)) = uVar13;
    }
    if ((*param_1 & 1) == 0) {
      *(ulong *)*param_1 = uVar15;
    }
    else {
      *(byte *)param_1 = bVar8 | 1;
    }
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    return;
  }
  lVar11 = *(long *)param_2;
  lStack_58 = lVar11 + -1;
  if (lStack_58 != 0) {
    func_0x000107c2b9f0(lVar11 + 0x37);
    *(long *)(lVar11 + 0x4bf) = *(long *)(lVar11 + 0x4bf) + 1;
  }
  if (*(byte *)((long)plVar14 + 0xc) == 3) {
    FUN_10ae6f1e8();
    if (param_5 != (long *)0x0) {
      if (plVar14 == (long *)0x0) {
LAB_10ae71310:
        plVar14 = (long *)0x0;
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        param_2[0xe] = 0;
        param_2[0xf] = 0;
      }
      else {
        *(long **)(param_2 + 8) = plVar14;
      }
      if (lStack_58 != 0) {
        *(long **)(lStack_58 + 0x40) = plVar14;
      }
      *param_1 = (ulong)param_5;
      goto LAB_10ae71338;
    }
  }
  else if ((5 < *(byte *)((long)plVar14 + 0xc)) && ((*(uint *)(plVar14 + 1) & 0xfffffffd) == 4)) {
    bVar8 = *(byte *)((long)plVar14 + 0xc);
    uVar12 = 6;
    if (0xba < bVar8) {
      uVar12 = 0xc;
    }
    iVar3 = -0xe8d;
    if (0xba < bVar8) {
      iVar3 = -0xb800d;
    }
    uVar4 = 3;
    if (0x42 < bVar8) {
      uVar4 = uVar12;
    }
    iVar5 = -0x1d;
    if (0x42 < bVar8) {
      iVar5 = iVar3;
    }
    bVar9 = param_5 <= (long *)((long)(int)(((uint)bVar8 << (ulong)uVar4) + iVar5) - *plVar14);
    param_5 = plVar14;
    if (bVar9) goto LAB_10ae71310;
  }
  if (param_3 == (undefined8 *)0x0) {
    if (param_4 < (undefined8 *)0x10) {
      *(byte *)param_1 = 1;
      pbVar1 = (byte *)((long)param_1 + 1);
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_1[1] = 0;
      goto LAB_10ae71338;
    }
    FUN_10ae6f400();
  }
  else {
    puVar10 = param_4;
    if ((undefined8 *)0xffff < param_4) {
      puVar10 = (undefined8 *)0x10000;
    }
    if ((undefined8 *)0xffff < param_3) {
      param_3 = (undefined8 *)0x10000;
    }
    if ((((undefined8 *)((long)puVar10 + 0xd) < param_3) &&
        (param_3 = (undefined8 *)((long)puVar10 + 0xd), (undefined8 *)0xff3 < param_4)) &&
       (param_3 = param_4, ((ulong)puVar10 & (long)puVar10 - 1U) != 0)) {
      param_3 = (undefined8 *)(1L << (-LZCOUNT((long)puVar10 - 1U) & 0x3fU));
      if (0x80 < (ulong)((long)param_3 + (-0xd - (long)puVar10))) {
        param_3 = (undefined8 *)(1L << ((LZCOUNT(puVar10) ^ 0x3fU) & 0x3f));
      }
    }
    param_4 = (undefined8 *)((long)param_3 + -0xd);
    FUN_10ae72878();
  }
  *param_4 = 0;
  *param_1 = (ulong)param_4;
LAB_10ae71338:
  FUN_10ae72844(&lStack_58);
  return;
}



/* Entry: 10ae71390; end: 10ae7193b;  */

void FUN_10ae71390(byte *param_1,byte *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  byte *pbVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  uint uVar20;
  byte *unaff_x20;
  byte *pbVar21;
  long *plVar22;
  byte *pbVar23;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  byte abStack_c4 [12];
  long alStack_b8 [12];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar10 = *param_1;
  if ((((bVar10 & 1) != 0) && (unaff_x20 = *(byte **)(param_1 + 8), unaff_x20 != (byte *)0x0)) &&
     (*(long *)unaff_x20 == 0)) {
    if (*(long *)param_1 != 1) goto LAB_10ae718fc;
    goto LAB_10ae717ec;
  }
  do {
    bVar5 = *param_2;
    uVar12 = (ulong)(char)bVar5;
    if ((uVar12 & 1) == 0) {
      if (uVar12 >> 1 == 0) goto LAB_10ae714dc;
LAB_10ae713f8:
      if ((bVar10 & 1) == 0) {
        uVar15 = (ulong)(long)(char)bVar10 >> 1;
      }
      else {
        uVar15 = **(ulong **)(param_1 + 8);
      }
      if (uVar15 == 0) {
        if ((bVar5 & 1) == 0) {
          lVar11 = *(long *)param_2;
          *(long *)(param_1 + 8) = *(long *)(param_2 + 8);
          *(long *)param_1 = lVar11;
        }
        else {
          unaff_x20 = *(byte **)(param_2 + 8);
          if (*(long *)param_2 + -1 != 0) {
            FUN_10ae6fe50(*(long *)param_2 + -1);
          }
          param_2[0] = 0;
          param_2[1] = 0;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          param_2[7] = 0;
          param_2[8] = 0;
          param_2[9] = 0;
          param_2[10] = 0;
          param_2[0xb] = 0;
          param_2[0xc] = 0;
          param_2[0xd] = 0;
          param_2[0xe] = 0;
          param_2[0xf] = 0;
          pbVar23 = unaff_x20;
          if (unaff_x20[0xc] == 2) {
            pbVar23 = *(byte **)(unaff_x20 + 0x10);
            puVar1 = (uint *)(unaff_x20 + 8);
            if ((*puVar1 & 0xfffffffd) == 4) {
              func_0x00010ae701fc(*(long *)(unaff_x20 + 0x18));
              __ZdlPv(unaff_x20);
            }
            else {
              pbVar21 = pbVar23 + 8;
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pbVar21,0x10);
                if (bVar7) {
                  *(int *)pbVar21 = *(int *)pbVar21 + 4;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              do {
                uVar14 = *puVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar7) {
                  *puVar1 = uVar14 - 4;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((uVar14 & 0xfffffff9) == 0) {
                FUN_10ae6cd10(unaff_x20);
              }
            }
          }
          param_1[0] = 1;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          *(byte **)(param_1 + 8) = pbVar23;
        }
        goto LAB_10ae714dc;
      }
      if ((uVar12 & 1) == 0) {
        if ((char)bVar5 < 0) {
          pbVar23 = (byte *)0x0;
          goto LAB_10ae71530;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          unaff_x20 = (byte *)(ulong)((uint)(int)(char)bVar5 >> 1 & 0x7f);
          param_2 = param_2 + 1;
LAB_10ae71494:
          bVar10 = *param_1;
          if ((((bVar10 & 1) != 0) && (plVar22 = *(long **)(param_1 + 8), plVar22 != (long *)0x0))
             && (*plVar22 == 0)) {
            if (*(long *)param_1 + -1 != 0) {
              FUN_10ae6fe50(*(long *)param_1 + -1);
            }
            puVar1 = (uint *)(plVar22 + 1);
            do {
              uVar14 = *puVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar14 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((uVar14 & 0xfffffff9) == 0) {
              FUN_10ae6cd10(plVar22);
            }
            bVar10 = 0;
            param_1[0] = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            param_1[3] = 0;
            param_1[4] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
            param_1[7] = 0;
            param_1[8] = 0;
            param_1[9] = 0;
            param_1[10] = 0;
            param_1[0xb] = 0;
            param_1[0xc] = 0;
            param_1[0xd] = 0;
            param_1[0xe] = 0;
            param_1[0xf] = 0;
          }
          if (unaff_x20 == (byte *)0x0) {
            return;
          }
          if (((bVar10 & 1) == 0) || (pbVar23 = *(byte **)(param_1 + 8), pbVar23 == (byte *)0x0)) {
            lStack_58 = 0;
            uVar12 = (ulong)(char)bVar10;
            uVar15 = uVar12 >> 1;
            pbVar21 = unaff_x20 + (uVar12 >> 1);
            if (unaff_x20 <= (byte *)(0xf - (uVar12 >> 1))) {
              *param_1 = (byte)((int)pbVar21 << 1);
              _memcpy(param_1 + uVar15 + 1,param_2,unaff_x20);
              goto LAB_10ae70e90;
            }
            FUN_10ae6f400();
            bVar10 = pbVar21[0xc];
            uVar14 = 6;
            if (0xba < bVar10) {
              uVar14 = 0xc;
            }
            iVar2 = -0xe8d;
            if (0xba < bVar10) {
              iVar2 = -0xb800d;
            }
            uVar3 = 3;
            if (0x42 < bVar10) {
              uVar3 = uVar14;
            }
            iVar4 = -0x1d;
            if (0x42 < bVar10) {
              iVar4 = iVar2;
            }
            pbVar17 = (byte *)((long)(int)(((uint)bVar10 << (ulong)uVar3) + iVar4) - uVar15);
            pbVar23 = pbVar17;
            if (unaff_x20 <= pbVar17) {
              pbVar23 = unaff_x20;
            }
            _memcpy(pbVar21 + 0xd,param_1 + 1,uVar15);
            _memcpy(pbVar21 + 0xd + uVar15,param_2,pbVar23);
            *(byte **)pbVar21 = pbVar23 + uVar15;
            if (pbVar17 < unaff_x20) {
              bVar7 = true;
              goto LAB_10ae70e44;
            }
            *(byte **)(param_1 + 8) = pbVar21;
          }
          else {
            lVar11 = *(long *)param_1;
            lStack_58 = lVar11 + -1;
            if (lStack_58 != 0) {
              func_0x000107c2b9f0(lVar11 + 0x37);
              *(long *)(lVar11 + 0x467) = *(long *)(lVar11 + 0x467) + 1;
            }
            pbVar21 = pbVar23;
            if (pbVar23[0xc] == 2) {
              pbVar21 = *(byte **)(pbVar23 + 0x10);
              puVar1 = (uint *)(pbVar23 + 8);
              if ((*puVar1 & 0xfffffffd) == 4) {
                func_0x00010ae701fc(*(long *)(pbVar23 + 0x18));
                __ZdlPv(pbVar23);
              }
              else {
                pbVar17 = pbVar21 + 8;
                do {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(pbVar17,0x10);
                  if (bVar7) {
                    *(int *)pbVar17 = *(int *)pbVar17 + 4;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                do {
                  uVar14 = *puVar1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar7) {
                    *puVar1 = uVar14 - 4;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if ((uVar14 & 0xfffffff9) == 0) {
                  FUN_10ae6cd10(pbVar23);
                }
              }
            }
            bVar10 = pbVar21[0xc];
            if (bVar10 == 3) {
              if ((*(uint *)(pbVar21 + 8) & 0xfffffffd) != 4) {
LAB_10ae70dd0:
                bVar10 = pbVar21[0xc];
                goto LAB_10ae70dd4;
              }
              bVar10 = pbVar21[0xd];
              pbVar23 = pbVar21;
              if (1 < bVar10) {
                if (bVar10 != 2) {
                  if (bVar10 != 3) goto LAB_10ae70dbc;
                  pbVar23 = *(byte **)(pbVar21 + ((ulong)pbVar21[0xf] + 1) * 8);
                  if ((*(uint *)(pbVar23 + 8) & 0xfffffffd) != 4) goto LAB_10ae70dd0;
                }
                pbVar17 = *(byte **)(pbVar23 + ((ulong)pbVar23[0xf] + 1) * 8);
                if ((*(uint *)(pbVar17 + 8) & 0xfffffffd) == 4) {
LAB_10ae70cfc:
                  pbVar18 = *(byte **)(pbVar17 + ((ulong)pbVar17[0xf] + 1) * 8);
                  if ((*(uint *)(pbVar18 + 8) & 0xfffffffd) == 4) goto LAB_10ae70d1c;
                }
                goto LAB_10ae70dd0;
              }
              pbVar17 = pbVar21;
              pbVar18 = pbVar21;
              if (bVar10 == 0) {
LAB_10ae70d1c:
                plVar22 = *(long **)(pbVar18 + ((ulong)pbVar18[0xf] + 1) * 8);
                if (((*(uint *)(plVar22 + 1) & 0xfffffffd) == 4) &&
                   (bVar5 = *(byte *)((long)plVar22 + 0xc), 5 < bVar5)) {
                  uVar14 = 6;
                  if (0xba < bVar5) {
                    uVar14 = 0xc;
                  }
                  iVar2 = -0xe8d;
                  if (0xba < bVar5) {
                    iVar2 = -0xb800d;
                  }
                  uVar20 = (uint)bVar5;
                  uVar3 = 3;
                  if (0x42 < uVar20) {
                    uVar3 = uVar14;
                  }
                  iVar4 = -0x1d;
                  if (0x42 < uVar20) {
                    iVar4 = iVar2;
                  }
                  pbVar9 = (byte *)((long)(int)((uVar20 << (ulong)uVar3) + iVar4) - *plVar22);
                  if (pbVar9 != (byte *)0x0) {
                    if (unaff_x20 <= pbVar9) {
                      pbVar9 = unaff_x20;
                    }
                    *plVar22 = (long)(pbVar9 + *plVar22);
                    if (bVar10 < 2) {
                      if (bVar10 != 0) goto LAB_10ae70f20;
                    }
                    else {
                      if (bVar10 != 2) {
                        *(byte **)pbVar21 = pbVar9 + *(long *)pbVar21;
                      }
                      *(byte **)pbVar23 = pbVar9 + *(long *)pbVar23;
LAB_10ae70f20:
                      *(byte **)pbVar17 = pbVar9 + *(long *)pbVar17;
                    }
                    *(byte **)pbVar18 = pbVar9 + *(long *)pbVar18;
                    if (pbVar9 != (byte *)0x0) goto LAB_10ae70ecc;
                  }
                }
                goto LAB_10ae70dd0;
              }
              if (bVar10 == 1) goto LAB_10ae70cfc;
LAB_10ae70dbc:
              pbVar9 = unaff_x20;
              func_0x00010ae6eb34(pbVar21);
              if (pbVar9 == (byte *)0x0) goto LAB_10ae70dd0;
LAB_10ae70ecc:
              _memcpy();
              if (unaff_x20 + -(long)pbVar9 == (byte *)0x0) {
                *(byte **)(param_1 + 8) = pbVar21;
                if (lStack_58 != 0) {
                  *(byte **)(lStack_58 + 0x40) = pbVar21;
                }
                goto LAB_10ae70e90;
              }
              bVar7 = false;
            }
            else {
LAB_10ae70dd4:
              if ((5 < bVar10) && ((*(uint *)(pbVar21 + 8) & 0xfffffffd) == 4)) {
                bVar10 = pbVar21[0xc];
                uVar14 = 6;
                if (0xba < bVar10) {
                  uVar14 = 0xc;
                }
                iVar2 = -0xe8d;
                if (0xba < bVar10) {
                  iVar2 = -0xb800d;
                }
                uVar3 = 3;
                if (0x42 < bVar10) {
                  uVar3 = uVar14;
                }
                iVar4 = -0x1d;
                if (0x42 < bVar10) {
                  iVar4 = iVar2;
                }
                pbVar9 = (byte *)((long)(int)(((uint)bVar10 << (ulong)uVar3) + iVar4) -
                                 *(long *)pbVar21);
                if (pbVar9 != (byte *)0x0) {
                  if (unaff_x20 <= pbVar9) {
                    pbVar9 = unaff_x20;
                  }
                  *(byte **)pbVar21 = pbVar9 + *(long *)pbVar21;
                  goto LAB_10ae70ecc;
                }
              }
              bVar7 = false;
            }
LAB_10ae70e44:
            FUN_10ae704fc();
            func_0x00010ae6d7d0();
            *(byte **)(param_1 + 8) = pbVar21;
            if (!bVar7) {
              if (lStack_58 != 0) {
                *(byte **)(lStack_58 + 0x40) = pbVar21;
              }
              goto LAB_10ae70e90;
            }
          }
          param_1[0] = 1;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
LAB_10ae70e90:
          FUN_10ae72844(&lStack_58);
          return;
        }
      }
      else {
        pbVar23 = *(byte **)(param_2 + 8);
        unaff_x20 = *(byte **)pbVar23;
        if (unaff_x20 < (byte *)0x200) {
          bVar10 = pbVar23[0xc];
          if (5 < bVar10) {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
              param_2 = pbVar23 + 0xd;
              goto LAB_10ae71494;
            }
            goto LAB_10ae718f8;
          }
          if (param_2 == param_1) {
            FUN_10ae7227c(&uStack_f0);
            param_2 = (byte *)&uStack_f0;
            FUN_10ae71390(param_1);
            func_0x000107c34fe8(&uStack_f0);
          }
          else {
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_e0 = 0;
            uStack_c8 = 0xffffffff;
            lStack_d0 = 0;
            pbStack_d8 = unaff_x20;
            if (unaff_x20 != (byte *)0x0) {
              if (bVar10 == 2) {
                pbVar23 = *(byte **)(pbVar23 + 0x10);
                bVar10 = pbVar23[0xc];
              }
              if (bVar10 == 3) {
                uVar12 = (ulong)pbVar23[0xd];
                uStack_c8 = (uint)pbVar23[0xd];
                bVar10 = pbVar23[0xe];
                uVar15 = (ulong)bVar10;
                alStack_b8[uVar12] = (long)pbVar23;
                abStack_c4[uVar12] = bVar10;
                pbVar21 = pbVar23;
                if (uVar12 != 0) {
                  do {
                    pbVar21 = *(byte **)(pbVar21 + uVar15 * 8 + 0x10);
                    *(byte **)(abStack_c4 + uVar12 * 8 + 4) = pbVar21;
                    uVar15 = (ulong)pbVar21[0xe];
                    abStack_c4[uVar12 - 1] = pbVar21[0xe];
                    bVar7 = uVar12 != 0;
                    uVar12 = uVar12 - 1;
                  } while (bVar7 && uVar12 != 0);
                }
                plVar22 = *(long **)(alStack_b8[0] + uVar15 * 8 + 0x10);
                lVar8 = *plVar22;
                lStack_d0 = *(long *)pbVar23 - lVar8;
                bVar10 = *(byte *)((long)plVar22 + 0xc);
                if (bVar10 == 1) {
                  lVar11 = plVar22[2];
                  plVar22 = (long *)plVar22[3];
                  bVar10 = *(byte *)((long)plVar22 + 0xc);
                }
                else {
                  lVar11 = 0;
                }
                if (bVar10 < 6) {
                  pbVar21 = (byte *)plVar22[2];
                }
                else {
                  pbVar21 = (byte *)((long)plVar22 + 0xd);
                }
                if (unaff_x20 == (byte *)0x0) goto LAB_10ae714dc;
              }
              else {
                if (bVar10 == 1) {
                  lVar11 = *(long *)(pbVar23 + 0x10);
                  bVar10 = (*(byte **)(pbVar23 + 0x18))[0xc];
                  pbVar21 = *(byte **)(pbVar23 + 0x18);
                }
                else {
                  lVar11 = 0;
                  pbVar21 = pbVar23;
                }
                lVar8 = *(long *)pbVar23;
                if (bVar10 < 6) {
                  pbVar21 = *(byte **)(pbVar21 + 0x10);
                }
                else {
                  pbVar21 = pbVar21 + 0xd;
                }
              }
              param_2 = pbVar21 + lVar11;
              lVar11 = lStack_d0;
              do {
                pbVar23 = pbStack_d8;
                FUN_10ae70b00(param_1,param_2,lVar8,4);
                unaff_x20 = pbVar23 + -lVar8;
                pbStack_d8 = unaff_x20;
                if (unaff_x20 == (byte *)0x0) break;
                if ((((int)uStack_c8 < 0) || (alStack_b8[uStack_c8] == 0)) || (lVar11 == 0)) {
                  lVar8 = 0;
                  param_2 = (byte *)0x0;
                }
                else {
                  if ((ulong)*(byte *)(alStack_b8[0] + 0xf) - 1 == (ulong)abStack_c4[0]) {
                    uVar15 = 0;
                    do {
                      uVar19 = uVar15;
                      if (uStack_c8 == uVar19) {
                        plVar22 = (long *)0x0;
                        goto LAB_10ae71794;
                      }
                      lVar8 = alStack_b8[uVar19 + 1];
                      uVar12 = (ulong)abStack_c4[uVar19 + 1] + 1;
                      uVar15 = uVar19 + 1;
                    } while (uVar12 == *(byte *)(lVar8 + 0xf));
                    abStack_c4[uVar19 + 1] = (byte)uVar12;
                    lVar11 = (long)(int)(uVar19 + 1);
                    do {
                      lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x10);
                      lVar16 = lVar11 + -1;
                      alStack_b8[lVar16] = lVar8;
                      uVar12 = (ulong)*(byte *)(lVar8 + 0xe);
                      abStack_c4[lVar11 + -1] = *(byte *)(lVar8 + 0xe);
                      bVar7 = 0 < lVar11;
                      lVar11 = lVar16;
                    } while (lVar16 != 0 && bVar7);
                  }
                  else {
                    abStack_c4[0] = abStack_c4[0] + 1;
                    uVar12 = (ulong)abStack_c4[0];
                    lVar8 = alStack_b8[0];
                    lStack_d0 = lVar11;
                  }
                  plVar22 = *(long **)(lVar8 + uVar12 * 8 + 0x10);
                  lVar11 = lStack_d0;
LAB_10ae71794:
                  lVar8 = *plVar22;
                  lVar11 = lVar11 - lVar8;
                  bVar10 = *(byte *)((long)plVar22 + 0xc);
                  if (bVar10 == 1) {
                    lVar16 = plVar22[2];
                    plVar22 = (long *)plVar22[3];
                    bVar10 = *(byte *)((long)plVar22 + 0xc);
                  }
                  else {
                    lVar16 = 0;
                  }
                  if (bVar10 < 6) {
                    lVar13 = plVar22[2];
                  }
                  else {
                    lVar13 = (long)plVar22 + 0xd;
                  }
                  param_2 = (byte *)(lVar13 + lVar16);
                  lStack_d0 = lVar11;
                }
              } while (unaff_x20 != (byte *)0x0);
            }
          }
          goto LAB_10ae714dc;
        }
        if (*(long *)param_2 + -1 != 0) {
          FUN_10ae6fe50(*(long *)param_2 + -1);
        }
LAB_10ae71530:
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        param_2[0xe] = 0;
        param_2[0xf] = 0;
        unaff_x20 = pbVar23;
        if (pbVar23[0xc] == 2) {
          unaff_x20 = *(byte **)(pbVar23 + 0x10);
          puVar1 = (uint *)(pbVar23 + 8);
          if ((*puVar1 & 0xfffffffd) == 4) {
            func_0x00010ae701fc(*(long *)(pbVar23 + 0x18));
            __ZdlPv(pbVar23);
          }
          else {
            pbVar21 = unaff_x20 + 8;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pbVar21,0x10);
              if (bVar7) {
                *(int *)pbVar21 = *(int *)pbVar21 + 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            do {
              uVar14 = *puVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar14 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((uVar14 & 0xfffffff9) == 0) {
              FUN_10ae6cd10(pbVar23);
            }
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          if ((*param_1 & 1) == 0) {
            pbVar23 = unaff_x20;
            if ((long)(char)*param_1 != 0) {
              pbVar21 = (byte *)((ulong)(long)(char)*param_1 >> 1);
              pbVar23 = pbVar21;
              FUN_10ae6f400();
              *(byte **)pbVar23 = pbVar21;
              lVar11 = *(long *)(param_1 + 8);
              *(undefined8 *)(pbVar23 + 0xd) = *(undefined8 *)(param_1 + 1);
              *(long *)(pbVar23 + 0x14) = lVar11;
              if ((pbVar23[0xc] < 5) &&
                 ((pbVar23[0xc] != 1 || (*(byte *)(*(long *)(pbVar23 + 0x18) + 0xc) < 5)))) {
                func_0x00010ae6ec90();
              }
              else {
                pbVar17 = (byte *)0x40;
                __Znwm();
                pbVar17[8] = 4;
                pbVar17[9] = 0;
                pbVar17[10] = 0;
                pbVar17[0xb] = 0;
                *(byte **)pbVar17 = pbVar21;
                pbVar17[0xc] = 3;
                pbVar17[0xd] = 0;
                pbVar17[0xe] = 0;
                pbVar17[0xf] = 1;
                *(byte **)(pbVar17 + 0x10) = pbVar23;
                pbVar23 = pbVar17;
              }
              if ((unaff_x20[0xc] < 5) &&
                 ((unaff_x20[0xc] != 1 || (*(byte *)(*(long *)(unaff_x20 + 0x18) + 0xc) < 5)))) {
                func_0x00010ae6ecd0();
              }
              else {
                FUN_10ae6d21c();
              }
            }
            param_1[0] = 1;
            param_1[1] = 0;
            param_1[2] = 0;
            param_1[3] = 0;
            param_1[4] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
            param_1[7] = 0;
            *(byte **)(param_1 + 8) = pbVar23;
            return;
          }
          lVar11 = *(long *)param_1;
          if (lVar11 != 1) {
            func_0x000107c2b9f0(lVar11 + 0x37);
            *(long *)(lVar11 + 0x467) = *(long *)(lVar11 + 0x467) + 1;
          }
          lVar8 = *(long *)(param_1 + 8);
          FUN_10ae704fc();
          if ((unaff_x20[0xc] < 5) &&
             ((unaff_x20[0xc] != 1 || (*(byte *)(*(long *)(unaff_x20 + 0x18) + 0xc) < 5)))) {
            func_0x00010ae6ecd0();
          }
          else {
            FUN_10ae6d21c();
          }
          *(long *)(param_1 + 8) = lVar8;
          if (lVar11 != 1) {
            *(long *)(lVar11 + 0x3f) = lVar8;
          }
          FUN_10ae72844(&stack0xffffffffffffffc8);
          return;
        }
      }
    }
    else {
      if (**(long **)(param_2 + 8) != 0) goto LAB_10ae713f8;
LAB_10ae714dc:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
    }
LAB_10ae718f8:
    ___stack_chk_fail();
LAB_10ae718fc:
    FUN_10ae6fe50();
LAB_10ae717ec:
    puVar1 = (uint *)(unaff_x20 + 8);
    do {
      uVar14 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar14 - 4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar14 & 0xfffffff9) == 0) {
      FUN_10ae6cd10(unaff_x20);
      unaff_x20 = param_2;
    }
    bVar10 = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  } while( true );
}



/* Entry: 10ae7193c; end: 10ae719ef;  */

void FUN_10ae7193c(byte *param_1,undefined8 param_2,ulong *param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  
  uVar8 = (ulong)(char)*param_1;
  uVar9 = 0xf - (uVar8 >> 1);
  if ((uVar8 & 1) != 0) {
    uVar9 = 0;
  }
  if (param_3 <= uVar9) {
    *param_1 = ((char)(uVar8 >> 1) + (char)param_3) * '\x02';
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1 + (uVar8 >> 1) + 1,param_2,param_3);
    return;
  }
  puVar5 = param_3;
  FUN_10ae6f400();
  _memcpy((long)puVar5 + 0xd,param_2,param_3);
  *puVar5 = (ulong)param_3;
  if ((*param_1 & 1) != 0) {
    lVar7 = *(long *)param_1;
    lVar2 = lVar7 + -1;
    if (lVar2 != 0) {
      func_0x000107c2b9f0(lVar7 + 0x37);
      lVar1 = lVar2 + (param_4 & 0xffffffff) * 8;
      *(long *)(lVar1 + 0x460) = *(long *)(lVar1 + 0x460) + 1;
    }
    uVar6 = *(undefined8 *)(param_1 + 8);
    FUN_10ae704fc();
    if ((*(byte *)((long)puVar5 + 0xc) < 5) &&
       ((*(byte *)((long)puVar5 + 0xc) != 1 || (*(byte *)(puVar5[3] + 0xc) < 5)))) {
      func_0x00010ae6ecd0();
    }
    else {
      FUN_10ae6d21c();
    }
    *(undefined8 *)(param_1 + 8) = uVar6;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar7 + 0x3f) = uVar6;
    }
    FUN_10ae72844(&stack0xffffffffffffffc8);
    return;
  }
  puVar3 = puVar5;
  if ((long)(char)*param_1 != 0) {
    puVar10 = (ulong *)((ulong)(long)(char)*param_1 >> 1);
    puVar3 = puVar10;
    FUN_10ae6f400();
    *puVar3 = (ulong)puVar10;
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)((long)puVar3 + 0xd) = *(undefined8 *)(param_1 + 1);
    *(undefined8 *)((long)puVar3 + 0x14) = uVar6;
    if ((*(byte *)((long)puVar3 + 0xc) < 5) &&
       ((*(byte *)((long)puVar3 + 0xc) != 1 || (*(byte *)(puVar3[3] + 0xc) < 5)))) {
      func_0x00010ae6ec90();
    }
    else {
      puVar4 = (ulong *)0x40;
      __Znwm();
      *(undefined4 *)(puVar4 + 1) = 4;
      *puVar4 = (ulong)puVar10;
      *(undefined4 *)((long)puVar4 + 0xc) = 0x1000003;
      puVar4[2] = (ulong)puVar3;
      puVar3 = puVar4;
    }
    if ((*(byte *)((long)puVar5 + 0xc) < 5) &&
       ((*(byte *)((long)puVar5 + 0xc) != 1 || (*(byte *)(puVar5[3] + 0xc) < 5)))) {
      func_0x00010ae6ecd0();
    }
    else {
      FUN_10ae6d21c();
    }
  }
  param_1[0] = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(ulong **)(param_1 + 8) = puVar3;
  return;
}



/* Entry: 10ae719f0; end: 10ae7227b;  */

ulong * FUN_10ae719f0(byte *param_1,byte *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  ulong *puVar9;
  uint uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  byte bVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_190;
  undefined4 uStack_188;
  byte abStack_184 [12];
  long alStack_178 [13];
  byte *pbStack_110;
  undefined8 uStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  byte abStack_e4 [12];
  long alStack_d8 [13];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar14 = *param_1;
  uVar23 = (ulong)(char)bVar14;
  if ((uVar23 & 1) == 0) {
    pbVar8 = (byte *)0x0;
    if (bVar14 != 0) {
      pbVar8 = param_1 + 1;
    }
    uVar17 = 0;
    if (bVar14 != 0) {
      uVar17 = uVar23 >> 1;
    }
  }
  else {
    puVar11 = *(ulong **)(param_1 + 8);
    if (*puVar11 == 0) {
      pbVar8 = (byte *)0x0;
      uVar17 = 0;
    }
    else {
      bVar3 = *(byte *)((long)puVar11 + 0xc);
      if (bVar3 == 2) {
        puVar11 = (ulong *)puVar11[2];
        bVar3 = *(byte *)((long)puVar11 + 0xc);
      }
      if (bVar3 < 6) {
        if (bVar3 == 3) {
          if (*(byte *)((long)puVar11 + 0xd) != 0) {
            uVar10 = *(byte *)((long)puVar11 + 0xd) + 1;
            do {
              puVar11 = (ulong *)puVar11[(ulong)*(byte *)((long)puVar11 + 0xe) + 2];
              uVar10 = uVar10 - 1;
            } while (1 < uVar10);
          }
          puVar11 = (ulong *)puVar11[(ulong)*(byte *)((long)puVar11 + 0xe) + 2];
          bVar3 = *(byte *)((long)puVar11 + 0xc);
          if (bVar3 == 1) {
            uVar22 = puVar11[2];
            bVar3 = *(byte *)((long)puVar11[3] + 0xc);
            puVar9 = (ulong *)puVar11[3];
          }
          else {
            uVar22 = 0;
            puVar9 = puVar11;
          }
          uVar17 = *puVar11;
          if (bVar3 < 6) {
            uVar15 = puVar9[2];
          }
          else {
            uVar15 = (long)puVar9 + 0xd;
          }
        }
        else {
          if (bVar3 == 5) {
            pbVar8 = (byte *)puVar11[2];
            uVar17 = *puVar11;
            goto LAB_10ae71b34;
          }
          uVar17 = *puVar11;
          if (bVar3 == 1) {
            uVar22 = puVar11[2];
            puVar11 = (ulong *)puVar11[3];
            if (5 < *(byte *)((long)puVar11 + 0xc)) {
              pbVar8 = (byte *)((long)puVar11 + uVar22 + 0xd);
              goto LAB_10ae71b34;
            }
          }
          else {
            uVar22 = 0;
          }
          uVar15 = puVar11[2];
        }
        pbVar8 = (byte *)(uVar15 + uVar22);
      }
      else {
        pbVar8 = (byte *)((long)puVar11 + 0xd);
        uVar17 = *puVar11;
      }
    }
  }
LAB_10ae71b34:
  bVar3 = *param_2;
  uVar22 = (ulong)(char)bVar3;
  if ((uVar22 & 1) == 0) {
    puVar9 = (ulong *)0x0;
    if (bVar3 != 0) {
      puVar9 = (ulong *)(param_2 + 1);
    }
    uVar15 = 0;
    if (bVar3 != 0) {
      uVar15 = uVar22 >> 1;
    }
  }
  else {
    puVar11 = *(ulong **)(param_2 + 8);
    if (*puVar11 == 0) {
      puVar9 = (ulong *)0x0;
      uVar15 = 0;
    }
    else {
      bVar2 = *(byte *)((long)puVar11 + 0xc);
      if (bVar2 == 2) {
        puVar11 = (ulong *)puVar11[2];
        bVar2 = *(byte *)((long)puVar11 + 0xc);
      }
      if (bVar2 < 6) {
        if (bVar2 == 3) {
          if (*(byte *)((long)puVar11 + 0xd) != 0) {
            uVar10 = *(byte *)((long)puVar11 + 0xd) + 1;
            do {
              puVar11 = (ulong *)puVar11[(ulong)*(byte *)((long)puVar11 + 0xe) + 2];
              uVar10 = uVar10 - 1;
            } while (1 < uVar10);
          }
          puVar11 = (ulong *)puVar11[(ulong)*(byte *)((long)puVar11 + 0xe) + 2];
          bVar2 = *(byte *)((long)puVar11 + 0xc);
          if (bVar2 == 1) {
            uVar19 = puVar11[2];
            bVar2 = *(byte *)((long)puVar11[3] + 0xc);
            puVar9 = (ulong *)puVar11[3];
          }
          else {
            uVar19 = 0;
            puVar9 = puVar11;
          }
          uVar15 = *puVar11;
          if (bVar2 < 6) {
            uVar24 = puVar9[2];
          }
          else {
            uVar24 = (long)puVar9 + 0xd;
          }
        }
        else {
          if (bVar2 == 5) {
            puVar9 = (ulong *)puVar11[2];
            uVar15 = *puVar11;
            goto LAB_10ae71c3c;
          }
          uVar15 = *puVar11;
          if (bVar2 == 1) {
            uVar19 = puVar11[2];
            puVar11 = (ulong *)puVar11[3];
            if (5 < *(byte *)((long)puVar11 + 0xc)) {
              puVar9 = (ulong *)((long)puVar11 + uVar19 + 0xd);
              goto LAB_10ae71c3c;
            }
          }
          else {
            uVar19 = 0;
          }
          uVar24 = puVar11[2];
        }
        puVar9 = (ulong *)(uVar24 + uVar19);
      }
      else {
        puVar9 = (ulong *)((long)puVar11 + 0xd);
        uVar15 = *puVar11;
      }
    }
  }
LAB_10ae71c3c:
  if (uVar17 <= uVar15) {
    uVar15 = uVar17;
  }
  _memcmp(pbVar8,puVar9,uVar15);
  iVar7 = (int)pbVar8;
  param_3 = param_3 - uVar15;
  if ((param_3 == 0) || (iVar7 != 0)) goto LAB_10ae72118;
  lStack_f0 = 0;
  uStack_108 = 0;
  puStack_100 = (ulong *)0x0;
  uStack_e8 = 0xffffffff;
  if (((uVar23 & 1) == 0) || (puVar11 = *(ulong **)(param_1 + 8), puVar11 == (ulong *)0x0)) {
    uVar23 = uVar23 >> 1;
    pbStack_110 = (byte *)0x0;
    if ((bVar14 & 1) == 0) {
      pbStack_110 = param_1 + 1;
    }
    uStack_f8 = uVar23;
LAB_10ae71d2c:
  }
  else {
    uStack_f8 = *puVar11;
    if (*puVar11 != 0) {
      bVar14 = *(byte *)((long)puVar11 + 0xc);
      if (bVar14 == 2) {
        puVar11 = (ulong *)puVar11[2];
        bVar14 = *(byte *)((long)puVar11 + 0xc);
      }
      if (bVar14 == 3) {
        uVar23 = (ulong)*(byte *)((long)puVar11 + 0xd);
        uStack_e8 = (uint)*(byte *)((long)puVar11 + 0xd);
        bVar14 = *(byte *)((long)puVar11 + 0xe);
        uVar17 = (ulong)bVar14;
        alStack_d8[uVar23] = (long)puVar11;
        abStack_e4[uVar23] = bVar14;
        puVar20 = puVar11;
        if (uVar23 != 0) {
          do {
            puVar20 = (ulong *)puVar20[uVar17 + 2];
            *(ulong **)(abStack_e4 + uVar23 * 8 + 4) = puVar20;
            uVar17 = (ulong)*(byte *)((long)puVar20 + 0xe);
            abStack_e4[uVar23 - 1] = *(byte *)((long)puVar20 + 0xe);
            bVar6 = uVar23 != 0;
            uVar23 = uVar23 - 1;
          } while (bVar6 && uVar23 != 0);
        }
        puVar20 = *(ulong **)(alStack_d8[0] + uVar17 * 8 + 0x10);
        uVar23 = *puVar20;
        lStack_f0 = *puVar11 - uVar23;
        bVar14 = *(byte *)((long)puVar20 + 0xc);
        if (bVar14 == 1) {
          uVar17 = puVar20[2];
          puVar20 = (ulong *)puVar20[3];
          bVar14 = *(byte *)((long)puVar20 + 0xc);
        }
        else {
          uVar17 = 0;
        }
        if (bVar14 < 6) {
          uVar19 = puVar20[2];
        }
        else {
          uVar19 = (long)puVar20 + 0xd;
        }
        pbStack_110 = (byte *)(uVar19 + uVar17);
      }
      else {
        puStack_100 = puVar11;
        if (bVar14 == 1) {
          uVar17 = puVar11[2];
          bVar14 = *(byte *)((long)puVar11[3] + 0xc);
          puVar20 = (ulong *)puVar11[3];
        }
        else {
          uVar17 = 0;
          puVar20 = puVar11;
        }
        uVar23 = *puVar11;
        if (bVar14 < 6) {
          uVar19 = puVar20[2];
        }
        else {
          uVar19 = (long)puVar20 + 0xd;
        }
        pbStack_110 = (byte *)(uVar19 + uVar17);
      }
      goto LAB_10ae71d2c;
    }
    uVar23 = 0;
    pbStack_110 = (byte *)0x0;
    uStack_108 = 0;
  }
  lStack_1b8 = lStack_f0;
  pbVar8 = pbStack_110;
  uStack_108 = 0;
  lStack_190 = 0;
  uStack_188 = 0xffffffff;
  if (((uVar22 & 1) == 0) || (puVar11 = *(ulong **)(param_2 + 8), puVar11 == (ulong *)0x0)) {
    uVar22 = uVar22 >> 1;
    pbVar16 = (byte *)0x0;
    uVar17 = uVar22;
    if ((bVar3 & 1) == 0) {
      pbVar16 = param_2 + 1;
    }
  }
  else {
    uVar17 = *puVar11;
    if (uVar17 == 0) {
      pbVar16 = (byte *)0x0;
      uVar22 = 0;
    }
    else {
      bVar14 = *(byte *)((long)puVar11 + 0xc);
      if (bVar14 == 2) {
        puVar11 = (ulong *)puVar11[2];
        bVar14 = *(byte *)((long)puVar11 + 0xc);
      }
      if (bVar14 == 3) {
        uVar22 = (ulong)*(byte *)((long)puVar11 + 0xd);
        uStack_188 = (uint)*(byte *)((long)puVar11 + 0xd);
        bVar14 = *(byte *)((long)puVar11 + 0xe);
        uVar19 = (ulong)bVar14;
        alStack_178[uVar22] = (long)puVar11;
        abStack_184[uVar22] = bVar14;
        puVar20 = puVar11;
        if (uVar22 != 0) {
          do {
            puVar20 = (ulong *)puVar20[uVar19 + 2];
            *(ulong **)(abStack_184 + uVar22 * 8 + 4) = puVar20;
            uVar19 = (ulong)*(byte *)((long)puVar20 + 0xe);
            abStack_184[uVar22 - 1] = *(byte *)((long)puVar20 + 0xe);
            bVar6 = uVar22 != 0;
            uVar22 = uVar22 - 1;
          } while (bVar6 && uVar22 != 0);
        }
        puVar20 = *(ulong **)(alStack_178[0] + uVar19 * 8 + 0x10);
        uVar22 = *puVar20;
        lStack_190 = *puVar11 - uVar22;
        bVar14 = *(byte *)((long)puVar20 + 0xc);
        if (bVar14 == 1) {
          uVar19 = puVar20[2];
          puVar20 = (ulong *)puVar20[3];
          bVar14 = *(byte *)((long)puVar20 + 0xc);
        }
        else {
          uVar19 = 0;
        }
        if (bVar14 < 6) {
          uVar24 = puVar20[2];
        }
        else {
          uVar24 = (long)puVar20 + 0xd;
        }
        pbVar16 = (byte *)(uVar24 + uVar19);
      }
      else {
        if (bVar14 == 1) {
          uVar19 = puVar11[2];
          bVar14 = *(byte *)((long)puVar11[3] + 0xc);
          puVar20 = (ulong *)puVar11[3];
        }
        else {
          uVar19 = 0;
          puVar20 = puVar11;
        }
        uVar22 = *puVar11;
        if (bVar14 < 6) {
          uVar24 = puVar20[2];
        }
        else {
          uVar24 = (long)puVar20 + 0xd;
        }
        pbVar16 = (byte *)(uVar24 + uVar19);
      }
    }
  }
  pbVar21 = (byte *)0x0;
  if (uStack_f8 != 0) {
    pbVar21 = pbVar8;
  }
  uVar19 = 0;
  if (uStack_f8 != 0) {
    uVar19 = uVar23;
  }
  pbVar8 = (byte *)0x0;
  if (uVar17 != 0) {
    pbVar8 = pbVar16;
  }
  uVar24 = 0;
  if (uVar17 != 0) {
    uVar24 = uVar22;
  }
  pbVar21 = pbVar21 + uVar15;
  uVar19 = uVar19 - uVar15;
  puVar11 = (ulong *)(pbVar8 + uVar15);
  uVar24 = uVar24 - uVar15;
  uVar15 = uStack_f8;
  lStack_1c0 = lStack_190;
  do {
    if (uVar19 == 0) {
      uVar15 = uVar15 - uVar23;
      uStack_f8 = uVar15;
      if (uVar15 != 0) {
        if ((-1 < (int)uStack_e8) && (alStack_d8[uStack_e8] != 0)) {
          if (lStack_1b8 != 0) {
            if ((ulong)*(byte *)(alStack_d8[0] + 0xf) - 1 == (ulong)abStack_e4[0]) {
              uVar19 = 0;
              do {
                uVar13 = uVar19;
                if (uStack_e8 == uVar13) {
                  puVar20 = (ulong *)0x0;
                  goto LAB_10ae72010;
                }
                lVar12 = alStack_d8[uVar13 + 1];
                uVar23 = (ulong)abStack_e4[uVar13 + 1] + 1;
                uVar19 = uVar13 + 1;
              } while (uVar23 == *(byte *)(lVar12 + 0xf));
              abStack_e4[uVar13 + 1] = (byte)uVar23;
              lVar18 = (long)(int)(uVar13 + 1);
              do {
                lVar12 = *(long *)(lVar12 + uVar23 * 8 + 0x10);
                lVar5 = lVar18 + -1;
                alStack_d8[lVar5] = lVar12;
                uVar23 = (ulong)*(byte *)(lVar12 + 0xe);
                abStack_e4[lVar18 + -1] = *(byte *)(lVar12 + 0xe);
                bVar6 = 0 < lVar18;
                lVar18 = lVar5;
                lStack_1b8 = lStack_f0;
              } while (lVar5 != 0 && bVar6);
            }
            else {
              abStack_e4[0] = abStack_e4[0] + 1;
              uVar23 = (ulong)abStack_e4[0];
              lVar12 = alStack_d8[0];
            }
            puVar20 = *(ulong **)(lVar12 + uVar23 * 8 + 0x10);
LAB_10ae72010:
            uVar19 = *puVar20;
            lStack_1b8 = lStack_1b8 - uVar19;
            lStack_f0 = lStack_1b8;
            bVar14 = *(byte *)((long)puVar20 + 0xc);
            if (bVar14 == 1) {
              uVar23 = puVar20[2];
              puVar20 = (ulong *)puVar20[3];
              bVar14 = *(byte *)((long)puVar20 + 0xc);
            }
            else {
              uVar23 = 0;
            }
            if (bVar14 < 6) {
              uVar13 = puVar20[2];
            }
            else {
              uVar13 = (long)puVar20 + 0xd;
            }
            if (uVar15 != 0) {
              pbVar21 = (byte *)(uVar13 + uVar23);
              uVar23 = uVar19;
              goto joined_r0x00010ae71f18;
            }
            goto LAB_10ae720f8;
          }
          lStack_1b8 = 0;
        }
        uVar23 = 0;
        pbVar21 = (byte *)0x0;
        uVar19 = 0;
        goto joined_r0x00010ae71f18;
      }
LAB_10ae720f8:
      uVar19 = 0;
LAB_10ae72104:
      iVar7 = (uint)(uVar24 == 0) - (uint)(uVar19 == 0);
      goto LAB_10ae72118;
    }
joined_r0x00010ae71f18:
    if (uVar24 == 0) {
      uVar17 = uVar17 - uVar22;
      if (uVar17 == 0) {
LAB_10ae72100:
        uVar24 = 0;
        goto LAB_10ae72104;
      }
      if ((-1 < (int)uStack_188) && (alStack_178[uStack_188] != 0)) {
        if (lStack_1c0 != 0) {
          if ((ulong)*(byte *)(alStack_178[0] + 0xf) - 1 == (ulong)abStack_184[0]) {
            uVar24 = 0;
            do {
              uVar13 = uVar24;
              if (uStack_188 == uVar13) {
                puVar11 = (ulong *)0x0;
                goto LAB_10ae7206c;
              }
              lVar12 = alStack_178[uVar13 + 1];
              uVar22 = (ulong)abStack_184[uVar13 + 1] + 1;
              uVar24 = uVar13 + 1;
            } while (uVar22 == *(byte *)(lVar12 + 0xf));
            abStack_184[uVar13 + 1] = (byte)uVar22;
            lVar18 = (long)(int)(uVar13 + 1);
            do {
              lVar12 = *(long *)(lVar12 + uVar22 * 8 + 0x10);
              lVar5 = lVar18 + -1;
              alStack_178[lVar5] = lVar12;
              uVar22 = (ulong)*(byte *)(lVar12 + 0xe);
              abStack_184[lVar18 + -1] = *(byte *)(lVar12 + 0xe);
              bVar6 = 0 < lVar18;
              lVar18 = lVar5;
              lStack_1c0 = lStack_190;
            } while (lVar5 != 0 && bVar6);
          }
          else {
            abStack_184[0] = abStack_184[0] + 1;
            uVar22 = (ulong)abStack_184[0];
            lVar12 = alStack_178[0];
          }
          puVar11 = *(ulong **)(lVar12 + uVar22 * 8 + 0x10);
LAB_10ae7206c:
          uVar24 = *puVar11;
          lStack_1c0 = lStack_1c0 - uVar24;
          bVar14 = *(byte *)((long)puVar11 + 0xc);
          if (bVar14 == 1) {
            uVar22 = puVar11[2];
            puVar11 = (ulong *)puVar11[3];
            bVar14 = *(byte *)((long)puVar11 + 0xc);
          }
          else {
            uVar22 = 0;
          }
          if (bVar14 < 6) {
            uVar13 = puVar11[2];
          }
          else {
            uVar13 = (long)puVar11 + 0xd;
          }
          if (uVar17 != 0) {
            puVar11 = (ulong *)(uVar13 + uVar22);
            uVar22 = uVar24;
            lStack_190 = lStack_1c0;
            goto LAB_10ae720bc;
          }
          goto LAB_10ae72100;
        }
        lStack_1c0 = 0;
      }
      uVar22 = 0;
      puVar11 = (ulong *)0x0;
      uVar24 = 0;
    }
LAB_10ae720bc:
    uVar13 = uVar24;
    if (uVar19 <= uVar24) {
      uVar13 = uVar19;
    }
    pbVar8 = pbVar21;
    puVar9 = puVar11;
    _memcmp(pbVar21,puVar11,uVar13);
    iVar7 = (int)pbVar8;
    if (iVar7 != 0) goto LAB_10ae72118;
    pbVar21 = pbVar21 + uVar13;
    uVar19 = uVar19 - uVar13;
    puVar11 = (ulong *)((long)puVar11 + uVar13);
    uVar24 = uVar24 - uVar13;
    param_3 = param_3 - uVar13;
  } while (param_3 != 0);
  iVar7 = 0;
LAB_10ae72118:
  puVar11 = (ulong *)(ulong)(iVar7 == 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (((*puVar9 & 1) == 0) || (uVar23 = puVar9[1], uVar23 == 0)) {
      uVar23 = *puVar9;
      puVar11[1] = puVar9[1];
      *puVar11 = uVar23;
    }
    else {
      piVar1 = (int *)(uVar23 + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *puVar11 = 1;
      puVar11[1] = uVar23;
      if (1 < *puVar9) {
        FUN_10ae6ff78(puVar11);
      }
    }
    return puVar11;
  }
  return puVar11;
}



/* Entry: 10ae7227c; end: 10ae722eb;  */

ulong * FUN_10ae7227c(ulong *param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  if (((*param_2 & 1) == 0) || (uVar4 = param_2[1], uVar4 == 0)) {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
  }
  else {
    piVar1 = (int *)(uVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = 1;
    param_1[1] = uVar4;
    if (1 < *param_2) {
      FUN_10ae6ff78(param_1,param_2,8);
    }
  }
  return param_1;
}



/* Entry: 10ae722ec; end: 10ae725ff;  */

/* WARNING: Type propagation algorithm not settling */

ulong * FUN_10ae722ec(byte *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  ulong *puVar8;
  ulong **ppuVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  byte bVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  uint uVar21;
  long lVar22;
  ulong *puVar23;
  ulong *puStack_1a8;
  undefined8 auStack_188 [12];
  long lStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  ulong *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  byte abStack_c4 [12];
  long alStack_b8 [12];
  long lStack_58;
  
  ppuVar9 = &puStack_100;
  puVar8 = (ulong *)0x0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = (ulong *)0x0;
  uStack_f8 = 0;
  if ((*param_1 & 1) != 0) {
    puVar8 = *(ulong **)(param_1 + 8);
  }
  FUN_10ae72600();
  if ((int)puVar8 == 0) {
    lStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0xffffffff;
    bVar14 = *param_1;
    lVar22 = lStack_d0;
    if ((((long)(char)bVar14 & 1U) == 0) ||
       (puVar13 = *(ulong **)(param_1 + 8), puVar13 == (ulong *)0x0)) {
      uVar12 = (ulong)(long)(char)bVar14 >> 1;
      ppuVar9 = (ulong **)0x0;
      uVar16 = uVar12;
      if ((bVar14 & 1) == 0) {
        ppuVar9 = (ulong **)(param_1 + 1);
      }
    }
    else {
      uStack_d8 = *puVar13;
      if (uStack_d8 == 0) goto LAB_10ae72558;
      bVar14 = *(byte *)((long)puVar13 + 0xc);
      if (bVar14 == 2) {
        puVar13 = (ulong *)puVar13[2];
        bVar14 = *(byte *)((long)puVar13 + 0xc);
      }
      uVar16 = uStack_d8;
      if (bVar14 == 3) {
        uVar12 = (ulong)*(byte *)((long)puVar13 + 0xd);
        uStack_c8 = (uint)*(byte *)((long)puVar13 + 0xd);
        bVar14 = *(byte *)((long)puVar13 + 0xe);
        uVar17 = (ulong)bVar14;
        alStack_b8[uVar12] = (long)puVar13;
        abStack_c4[uVar12] = bVar14;
        puVar23 = puVar13;
        if (uVar12 != 0) {
          do {
            puVar23 = (ulong *)puVar23[uVar17 + 2];
            *(ulong **)(abStack_c4 + uVar12 * 8 + 4) = puVar23;
            uVar17 = (ulong)*(byte *)((long)puVar23 + 0xe);
            abStack_c4[uVar12 - 1] = *(byte *)((long)puVar23 + 0xe);
            bVar7 = uVar12 != 0;
            uVar12 = uVar12 - 1;
          } while (bVar7 && uVar12 != 0);
        }
        puVar23 = *(ulong **)(alStack_b8[0] + uVar17 * 8 + 0x10);
        uVar12 = *puVar23;
        lStack_d0 = *puVar13 - uVar12;
        bVar14 = *(byte *)((long)puVar23 + 0xc);
        if (bVar14 == 1) {
          uVar17 = puVar23[2];
          puVar23 = (ulong *)puVar23[3];
          bVar14 = *(byte *)((long)puVar23 + 0xc);
        }
        else {
          uVar17 = 0;
        }
        if (bVar14 < 6) {
          uVar15 = puVar23[2];
        }
        else {
          uVar15 = (long)puVar23 + 0xd;
        }
        ppuVar9 = (ulong **)(uVar15 + uVar17);
        lVar22 = lStack_d0;
      }
      else {
        if (bVar14 == 1) {
          uVar17 = puVar13[2];
          bVar14 = *(byte *)((long)puVar13[3] + 0xc);
          puVar23 = (ulong *)puVar13[3];
        }
        else {
          uVar17 = 0;
          puVar23 = puVar13;
        }
        uVar12 = *puVar13;
        if (bVar14 < 6) {
          uVar15 = puVar23[2];
        }
        else {
          uVar15 = (long)puVar23 + 0xd;
        }
        ppuVar9 = (ulong **)(uVar15 + uVar17);
      }
    }
    while (uVar16 != 0) {
      puVar8 = param_2;
      _memcpy(param_2,ppuVar9,uVar12);
      uStack_d8 = uVar16 - uVar12;
      if (uStack_d8 == 0) break;
      if ((((int)uStack_c8 < 0) || (alStack_b8[uStack_c8] == 0)) || (lVar22 == 0)) {
        uVar16 = 0;
        ppuVar9 = (ulong **)0x0;
      }
      else {
        if ((ulong)*(byte *)(alStack_b8[0] + 0xf) - 1 == (ulong)abStack_c4[0]) {
          uVar17 = 0;
          do {
            uVar15 = uVar17;
            if (uStack_c8 == uVar15) {
              puVar13 = (ulong *)0x0;
              goto LAB_10ae72508;
            }
            lVar11 = alStack_b8[uVar15 + 1];
            uVar16 = (ulong)abStack_c4[uVar15 + 1] + 1;
            uVar17 = uVar15 + 1;
          } while (uVar16 == *(byte *)(lVar11 + 0xf));
          abStack_c4[uVar15 + 1] = (byte)uVar16;
          lVar22 = (long)(int)(uVar15 + 1);
          do {
            lVar11 = *(long *)(lVar11 + uVar16 * 8 + 0x10);
            lVar6 = lVar22 + -1;
            alStack_b8[lVar6] = lVar11;
            uVar16 = (ulong)*(byte *)(lVar11 + 0xe);
            abStack_c4[lVar22 + -1] = *(byte *)(lVar11 + 0xe);
            bVar7 = 0 < lVar22;
            lVar22 = lVar6;
          } while (lVar6 != 0 && bVar7);
        }
        else {
          abStack_c4[0] = abStack_c4[0] + 1;
          uVar16 = (ulong)abStack_c4[0];
          lVar11 = alStack_b8[0];
          lStack_d0 = lVar22;
        }
        puVar13 = *(ulong **)(lVar11 + uVar16 * 8 + 0x10);
        lVar22 = lStack_d0;
LAB_10ae72508:
        uVar16 = *puVar13;
        lVar22 = lVar22 - uVar16;
        bVar14 = *(byte *)((long)puVar13 + 0xc);
        if (bVar14 == 1) {
          uVar17 = puVar13[2];
          puVar13 = (ulong *)puVar13[3];
          bVar14 = *(byte *)((long)puVar13 + 0xc);
        }
        else {
          uVar17 = 0;
        }
        if (bVar14 < 6) {
          uVar15 = puVar13[2];
        }
        else {
          uVar15 = (long)puVar13 + 0xd;
        }
        ppuVar9 = (ulong **)(uVar15 + uVar17);
        lStack_d0 = lVar22;
      }
      param_2 = (ulong *)((long)param_2 + uVar12);
      uVar12 = uVar16;
      uVar16 = uStack_d8;
    }
  }
  else {
    ppuVar9 = (ulong **)puStack_100;
    _memcpy(param_2,puStack_100,uStack_f8);
    puVar8 = param_2;
  }
LAB_10ae72558:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar8;
  }
  ___stack_chk_fail();
  if (*puVar8 == 0) {
    *ppuVar9 = (ulong *)0x0;
    ppuVar9[1] = (ulong *)0x0;
  }
  else {
    bVar14 = *(byte *)((long)puVar8 + 0xc);
    if (bVar14 == 2) {
      puVar8 = (ulong *)puVar8[2];
      bVar14 = *(byte *)((long)puVar8 + 0xc);
    }
    if (bVar14 < 6) {
      if (bVar14 == 1) {
        puVar13 = (ulong *)puVar8[3];
        bVar14 = *(byte *)((long)puVar13 + 0xc);
        if (bVar14 < 6) {
          if (bVar14 == 3) {
            uVar12 = puVar8[2];
            uVar16 = *puVar8;
            pcStack_108 = FUN_10ae72600;
            if (uVar16 == 0) {
LAB_10ae6eae0:
              puVar8 = (ulong *)0x0;
            }
            else {
              uVar21 = (uint)*(byte *)((long)puVar13 + 0xd);
              do {
                puVar8 = (ulong *)puVar13[(ulong)*(byte *)((long)puVar13 + 0xe) + 2];
                uVar17 = *puVar8;
                if (uVar17 <= uVar12) {
                  puVar13 = puVar13 + (ulong)*(byte *)((long)puVar13 + 0xe) + 3;
                  do {
                    uVar12 = uVar12 - uVar17;
                    puVar8 = (ulong *)*puVar13;
                    uVar17 = *puVar8;
                    puVar13 = puVar13 + 1;
                  } while (uVar17 <= uVar12);
                }
                if (uVar17 < uVar12 + uVar16) goto LAB_10ae6eae0;
                bVar7 = 0 < (int)uVar21;
                puVar13 = puVar8;
                uVar21 = uVar21 - 1;
              } while (bVar7);
              if (ppuVar9 != (ulong **)0x0) {
                bVar14 = *(byte *)((long)puVar8 + 0xc);
                if (bVar14 == 1) {
                  uVar15 = puVar8[2];
                  puVar8 = (ulong *)puVar8[3];
                  bVar14 = *(byte *)((long)puVar8 + 0xc);
                }
                else {
                  uVar15 = 0;
                }
                if (bVar14 < 6) {
                  uVar18 = puVar8[2];
                }
                else {
                  uVar18 = (long)puVar8 + 0xd;
                }
                if (uVar17 < uVar12) {
                  puStack_1a8 = (ulong *)&UNK_10f6d18b2;
                  puStack_110 = &stack0xfffffffffffffff0;
                  func_0x000109262df8();
                  puStack_120 = (undefined1 *)&puStack_110;
                  uStack_118 = 0x10ae6eb34;
                  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  bVar14 = *(byte *)((long)puStack_1a8 + 0xd);
                  uVar16 = (ulong)bVar14;
                  puVar8 = puStack_1a8;
                  if (uVar16 != 0) {
                    puVar20 = auStack_188;
                    uVar17 = uVar16;
                    do {
                      puVar8 = (ulong *)puVar8[(ulong)*(byte *)((long)puVar8 + 0xf) + 1];
                      if ((puVar8[1] & 0xfffffffd) != 4) goto LAB_10ae6ebc0;
                      *puVar20 = puVar8;
                      uVar17 = uVar17 - 1;
                      puVar20 = puVar20 + 1;
                    } while (uVar17 != 0);
                  }
                  plVar19 = (long *)puVar8[(ulong)*(byte *)((long)puVar8 + 0xf) + 1];
                  if (((*(uint *)(plVar19 + 1) & 0xfffffffd) == 4) &&
                     (bVar5 = *(byte *)((long)plVar19 + 0xc), 5 < bVar5)) {
                    uVar21 = 6;
                    if (0xba < bVar5) {
                      uVar21 = 0xc;
                    }
                    iVar1 = -0xe8d;
                    if (0xba < bVar5) {
                      iVar1 = -0xb800d;
                    }
                    uVar10 = (uint)bVar5;
                    uVar2 = 3;
                    if (0x42 < uVar10) {
                      uVar2 = uVar21;
                    }
                    iVar3 = -0x1d;
                    if (0x42 < uVar10) {
                      iVar3 = iVar1;
                    }
                    lVar22 = *plVar19;
                    uVar17 = (int)((uVar10 << (ulong)uVar2) + iVar3) - lVar22;
                    if (uVar17 == 0) {
                      puVar8 = (ulong *)0x0;
                    }
                    else {
                      if (uVar12 <= uVar17) {
                        uVar17 = uVar12;
                      }
                      puVar8 = (ulong *)((long)plVar19 + lVar22 + 0xd);
                      *plVar19 = uVar17 + lVar22;
                      *puStack_1a8 = *puStack_1a8 + uVar17;
                      if (bVar14 != 0) {
                        puVar20 = auStack_188;
                        do {
                          *(long *)*puVar20 = *(long *)*puVar20 + uVar17;
                          uVar16 = uVar16 - 1;
                          puVar20 = puVar20 + 1;
                        } while (uVar16 != 0);
                      }
                    }
                  }
                  else {
LAB_10ae6ebc0:
                    puVar8 = (ulong *)0x0;
                  }
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
                    ___stack_chk_fail();
                    if (*(char *)((long)puStack_1a8 + 0xc) != '\x03') {
                      puStack_1a8 = (ulong *)0x0;
                      FUN_10ae6f7b0();
                    }
                    return puStack_1a8;
                  }
                  return puVar8;
                }
                uVar4 = uVar17 - uVar12;
                if (uVar16 <= uVar17 - uVar12) {
                  uVar4 = uVar16;
                }
                *ppuVar9 = (ulong *)(uVar18 + uVar15 + uVar12);
                ppuVar9[1] = (ulong *)uVar4;
              }
              puVar8 = (ulong *)0x1;
            }
            return puVar8;
          }
          if (bVar14 != 5) {
            return (ulong *)0x0;
          }
          uVar12 = puVar13[2] + puVar8[2];
        }
        else {
          uVar12 = (long)puVar13 + puVar8[2] + 0xd;
        }
      }
      else {
        if (bVar14 == 3) {
          if ((*(char *)((long)puVar8 + 0xd) == '\0') &&
             ((ulong)*(byte *)((long)puVar8 + 0xf) - (ulong)*(byte *)((long)puVar8 + 0xe) == 1)) {
            if (ppuVar9 != (ulong **)0x0) {
              puVar8 = (ulong *)puVar8[(ulong)*(byte *)((long)puVar8 + 0xe) + 2];
              bVar14 = *(byte *)((long)puVar8 + 0xc);
              if (bVar14 == 1) {
                uVar12 = puVar8[2];
                bVar14 = *(byte *)((long)puVar8[3] + 0xc);
                puVar13 = (ulong *)puVar8[3];
              }
              else {
                uVar12 = 0;
                puVar13 = puVar8;
              }
              uVar16 = *puVar8;
              if (bVar14 < 6) {
                uVar17 = puVar13[2];
              }
              else {
                uVar17 = (long)puVar13 + 0xd;
              }
              *ppuVar9 = (ulong *)(uVar17 + uVar12);
              ppuVar9[1] = (ulong *)uVar16;
            }
            return (ulong *)0x1;
          }
          return (ulong *)0x0;
        }
        if (bVar14 != 5) {
          return (ulong *)0x0;
        }
        uVar12 = puVar8[2];
      }
      uVar16 = *puVar8;
      *ppuVar9 = (ulong *)uVar12;
      ppuVar9[1] = (ulong *)uVar16;
    }
    else {
      uVar12 = *puVar8;
      *ppuVar9 = (ulong *)((long)puVar8 + 0xd);
      ppuVar9[1] = (ulong *)uVar12;
    }
  }
  return (ulong *)0x1;
}



/* Entry: 10ae72600; end: 10ae726cb;  */

long * FUN_10ae72600(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  ulong *puVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  long lVar20;
  long *plStack_a8;
  undefined8 auStack_88 [12];
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    bVar7 = *(byte *)((long)param_1 + 0xc);
    if (bVar7 == 2) {
      param_1 = (ulong *)param_1[2];
      bVar7 = *(byte *)((long)param_1 + 0xc);
    }
    if (bVar7 < 6) {
      if (bVar7 == 1) {
        puVar13 = (ulong *)param_1[3];
        bVar7 = *(byte *)((long)puVar13 + 0xc);
        if (bVar7 < 6) {
          if (bVar7 == 3) {
            uVar12 = param_1[2];
            uVar15 = *param_1;
            if (uVar15 == 0) {
LAB_10ae6eae0:
              plVar9 = (long *)0x0;
            }
            else {
              uVar19 = (uint)*(byte *)((long)puVar13 + 0xd);
              do {
                puVar8 = (ulong *)puVar13[(ulong)*(byte *)((long)puVar13 + 0xe) + 2];
                uVar16 = *puVar8;
                if (uVar16 <= uVar12) {
                  puVar13 = puVar13 + (ulong)*(byte *)((long)puVar13 + 0xe) + 3;
                  do {
                    uVar12 = uVar12 - uVar16;
                    puVar8 = (ulong *)*puVar13;
                    uVar16 = *puVar8;
                    puVar13 = puVar13 + 1;
                  } while (uVar16 <= uVar12);
                }
                if (uVar16 < uVar12 + uVar15) goto LAB_10ae6eae0;
                bVar1 = 0 < (int)uVar19;
                puVar13 = puVar8;
                uVar19 = uVar19 - 1;
              } while (bVar1);
              if (param_2 != (ulong *)0x0) {
                bVar7 = *(byte *)((long)puVar8 + 0xc);
                if (bVar7 == 1) {
                  uVar14 = puVar8[2];
                  puVar8 = (ulong *)puVar8[3];
                  bVar7 = *(byte *)((long)puVar8 + 0xc);
                }
                else {
                  uVar14 = 0;
                }
                if (bVar7 < 6) {
                  uVar17 = puVar8[2];
                }
                else {
                  uVar17 = (long)puVar8 + 0xd;
                }
                if (uVar16 < uVar12) {
                  plStack_a8 = (long *)&UNK_10f6d18b2;
                  func_0x000109262df8();
                  puStack_20 = &stack0xfffffffffffffff0;
                  uStack_18 = 0x10ae6eb34;
                  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  bVar7 = *(byte *)((long)plStack_a8 + 0xd);
                  uVar15 = (ulong)bVar7;
                  plVar9 = plStack_a8;
                  if (uVar15 != 0) {
                    puVar18 = auStack_88;
                    uVar16 = uVar15;
                    do {
                      plVar9 = (long *)plVar9[(ulong)*(byte *)((long)plVar9 + 0xf) + 1];
                      if ((*(uint *)(plVar9 + 1) & 0xfffffffd) != 4) goto LAB_10ae6ebc0;
                      *puVar18 = plVar9;
                      uVar16 = uVar16 - 1;
                      puVar18 = puVar18 + 1;
                    } while (uVar16 != 0);
                  }
                  plVar9 = (long *)plVar9[(ulong)*(byte *)((long)plVar9 + 0xf) + 1];
                  if (((*(uint *)(plVar9 + 1) & 0xfffffffd) == 4) &&
                     (bVar6 = *(byte *)((long)plVar9 + 0xc), 5 < bVar6)) {
                    uVar19 = 6;
                    if (0xba < bVar6) {
                      uVar19 = 0xc;
                    }
                    iVar2 = -0xe8d;
                    if (0xba < bVar6) {
                      iVar2 = -0xb800d;
                    }
                    uVar10 = (uint)bVar6;
                    uVar3 = 3;
                    if (0x42 < uVar10) {
                      uVar3 = uVar19;
                    }
                    iVar4 = -0x1d;
                    if (0x42 < uVar10) {
                      iVar4 = iVar2;
                    }
                    lVar20 = *plVar9;
                    uVar16 = (int)((uVar10 << (ulong)uVar3) + iVar4) - lVar20;
                    if (uVar16 == 0) {
                      plVar11 = (long *)0x0;
                    }
                    else {
                      if (uVar12 <= uVar16) {
                        uVar16 = uVar12;
                      }
                      plVar11 = (long *)((long)plVar9 + lVar20 + 0xd);
                      *plVar9 = uVar16 + lVar20;
                      *plStack_a8 = *plStack_a8 + uVar16;
                      if (bVar7 != 0) {
                        puVar18 = auStack_88;
                        do {
                          *(long *)*puVar18 = *(long *)*puVar18 + uVar16;
                          uVar15 = uVar15 - 1;
                          puVar18 = puVar18 + 1;
                        } while (uVar15 != 0);
                      }
                    }
                  }
                  else {
LAB_10ae6ebc0:
                    plVar11 = (long *)0x0;
                  }
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    return plVar11;
                  }
                  ___stack_chk_fail();
                  if (*(char *)((long)plStack_a8 + 0xc) != '\x03') {
                    plStack_a8 = (long *)0x0;
                    FUN_10ae6f7b0();
                  }
                  return plStack_a8;
                }
                uVar5 = uVar16 - uVar12;
                if (uVar15 <= uVar16 - uVar12) {
                  uVar5 = uVar15;
                }
                *param_2 = uVar17 + uVar14 + uVar12;
                param_2[1] = uVar5;
              }
              plVar9 = (long *)0x1;
            }
            return plVar9;
          }
          if (bVar7 != 5) {
            return (long *)0x0;
          }
          uVar12 = puVar13[2] + param_1[2];
        }
        else {
          uVar12 = (long)puVar13 + param_1[2] + 0xd;
        }
      }
      else {
        if (bVar7 == 3) {
          if ((*(char *)((long)param_1 + 0xd) == '\0') &&
             ((ulong)*(byte *)((long)param_1 + 0xf) - (ulong)*(byte *)((long)param_1 + 0xe) == 1)) {
            if (param_2 != (ulong *)0x0) {
              puVar13 = (ulong *)param_1[(ulong)*(byte *)((long)param_1 + 0xe) + 2];
              bVar7 = *(byte *)((long)puVar13 + 0xc);
              if (bVar7 == 1) {
                uVar12 = puVar13[2];
                bVar7 = *(byte *)((long)puVar13[3] + 0xc);
                puVar8 = (ulong *)puVar13[3];
              }
              else {
                uVar12 = 0;
                puVar8 = puVar13;
              }
              uVar15 = *puVar13;
              if (bVar7 < 6) {
                uVar16 = puVar8[2];
              }
              else {
                uVar16 = (long)puVar8 + 0xd;
              }
              *param_2 = uVar16 + uVar12;
              param_2[1] = uVar15;
            }
            return (long *)0x1;
          }
          return (long *)0x0;
        }
        if (bVar7 != 5) {
          return (long *)0x0;
        }
        uVar12 = param_1[2];
      }
      uVar15 = *param_1;
      *param_2 = uVar12;
      param_2[1] = uVar15;
    }
    else {
      uVar12 = *param_1;
      *param_2 = (long)param_1 + 0xd;
      param_2[1] = uVar12;
    }
  }
  return (long *)0x1;
}



/* Entry: 10ae726cc; end: 10ae7280b;  */

undefined1  [16] FUN_10ae726cc(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined1 auVar9 [16];
  long lStack_48;
  
  if (((long)(char)*param_1 & 1U) == 0) {
    puVar7 = (ulong *)((ulong)(long)(char)*param_1 >> 1);
  }
  else {
    puVar7 = *(ulong **)param_1[1];
  }
  if (puVar7 < (ulong *)0xff4) {
    puVar5 = puVar7;
    FUN_10ae6f400();
    puVar8 = (ulong *)((long)puVar5 + 0xd);
    *puVar5 = (ulong)puVar7;
    FUN_10ae722ec(param_1,puVar8);
  }
  else {
    puVar8 = puVar7;
    __Znwm();
    FUN_10ae722ec(param_1,puVar8);
    puVar5 = (ulong *)0x20;
    __Znwm();
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = (ulong)puVar7;
    *(undefined1 *)((long)puVar5 + 0xc) = 5;
    puVar5[2] = (ulong)puVar8;
    puVar5[3] = 0x10ae7292c;
  }
  lVar6 = *param_1;
  lStack_48 = lVar6 + -1;
  if (lStack_48 != 0) {
    func_0x000107c2b9f0(lVar6 + 0x37);
    *(long *)(lVar6 + 0x4b7) = *(long *)(lVar6 + 0x4b7) + 1;
  }
  puVar1 = (uint *)(param_1[1] + 8);
  do {
    uVar2 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar2 - 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar2 & 0xfffffff9) == 0) {
    FUN_10ae6cd10();
  }
  param_1[1] = (long)puVar5;
  if (lStack_48 != 0) {
    *(ulong **)(lStack_48 + 0x40) = puVar5;
  }
  FUN_10ae72844(&lStack_48);
  auVar9._8_8_ = puVar7;
  auVar9._0_8_ = puVar8;
  return auVar9;
}



/* Entry: 10ae7280c; end: 10ae72843;  */

void FUN_10ae7280c(long param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x20));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ae72844; end: 10ae72877;  */

long * FUN_10ae72844(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10ae701c0();
  }
  return param_1;
}



/* Entry: 10ae72878; end: 10ae7295b;  */

void FUN_10ae72878(ulong param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  
  uVar2 = param_1;
  if (0x3fff2 < param_1) {
    uVar2 = 0x3fff3;
  }
  uVar3 = 0x20;
  if (0x13 < param_1) {
    uVar3 = uVar2 + 0xd;
  }
  lVar4 = 0x40;
  if (0x2000 < uVar3) {
    lVar4 = 0x1000;
  }
  lVar5 = 8;
  if (0x200 < uVar3) {
    lVar5 = lVar4;
  }
  puVar8 = (undefined8 *)((uVar3 + lVar5) - 1 & -lVar5);
  puVar6 = puVar8;
  __Znwm();
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)(puVar6 + 1) = 4;
  lVar4 = 6;
  if ((undefined8 *)0x2000 < puVar8) {
    lVar4 = 0xc;
  }
  cVar7 = ':';
  if ((undefined8 *)0x2000 < puVar8) {
    cVar7 = -0x48;
  }
  lVar5 = 3;
  if ((undefined8 *)0x200 < puVar8) {
    lVar5 = lVar4;
  }
  cVar1 = '\x02';
  if ((undefined8 *)0x200 < puVar8) {
    cVar1 = cVar7;
  }
  *(char *)((long)puVar6 + 0xc) = (char)((ulong)puVar8 >> lVar5) + cVar1;
  return;
}



/* Entry: 10ae7295c; end: 10ae72a87;  */

long FUN_10ae7295c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lStack_48;
  
  lStack_48 = 0;
  bVar4 = *(byte *)(param_1 + 0xc);
  if (bVar4 == 2) {
    lStack_48 = 0x20;
    param_1 = *(long *)(param_1 + 0x10);
    bVar4 = *(byte *)(param_1 + 0xc);
    lVar5 = 0x48;
  }
  else {
    lVar5 = 0x28;
  }
  if (bVar4 < 5) {
    if (bVar4 == 4) {
      uVar2 = *(uint *)(param_1 + 0x14);
      uVar6 = (ulong)uVar2;
      lStack_48 = lVar5 + (ulong)*(uint *)(param_1 + 0x18) * 0x14;
      uVar3 = *(uint *)(param_1 + 0x10);
      uVar1 = uVar2;
      if (uVar2 <= uVar3) {
        uVar1 = *(uint *)(param_1 + 0x18);
      }
      if (uVar3 < uVar1) {
        lVar7 = (ulong)uVar1 - (ulong)uVar3;
        lVar5 = param_1 + (ulong)uVar3 * 8 + 0x28;
        do {
          FUN_10ae72a88(*(undefined8 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x18) * 8),&lStack_48);
          lVar5 = lVar5 + 8;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (uVar3 <= uVar2 - 1) {
        return lStack_48;
      }
      lVar5 = param_1 + 0x28;
      do {
        FUN_10ae72a88(*(undefined8 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x18) * 8),&lStack_48);
        lVar5 = lVar5 + 8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      return lStack_48;
    }
    if (bVar4 == 3) {
      FUN_10ae72b0c(param_1,&lStack_48);
      return lStack_48;
    }
    if (bVar4 != 1) {
      return lStack_48;
    }
    if (*(byte *)(*(long *)(param_1 + 0x18) + 0xc) < 5) {
      return lStack_48;
    }
  }
  FUN_10ae72a88(param_1,&lStack_48);
  return lStack_48;
}



/* Entry: 10ae72a88; end: 10ae72b0b;  */

void FUN_10ae72a88(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  bVar4 = *(byte *)((long)param_1 + 0xc);
  if (bVar4 == 1) {
    *param_2 = *param_2 + 0x20;
    param_1 = (long *)param_1[3];
    bVar4 = *(byte *)((long)param_1 + 0xc);
  }
  uVar5 = (uint)bVar4;
  if (uVar5 < 6) {
    lVar6 = *param_1 + 0x28;
  }
  else {
    uVar7 = 6;
    if (0xba < uVar5) {
      uVar7 = 0xc;
    }
    iVar1 = -0xe80;
    if (0xba < uVar5) {
      iVar1 = -0xb8000;
    }
    uVar2 = 3;
    if (0x42 < uVar5) {
      uVar2 = uVar7;
    }
    iVar3 = -0x10;
    if (0x42 < uVar5) {
      iVar3 = iVar1;
    }
    lVar6 = (long)(int)((uVar5 << (ulong)uVar2) + iVar3);
  }
  *param_2 = *param_2 + lVar6;
  return;
}



/* Entry: 10ae72b0c; end: 10ae72dff;  */

void FUN_10ae72b0c(long param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *param_2 = *param_2 + 0x40;
  bVar1 = *(byte *)(param_1 + 0xe);
  uVar3 = (ulong)bVar1;
  bVar2 = *(byte *)(param_1 + 0xf);
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (bVar1 != bVar2) {
      lVar5 = (ulong)bVar2 * 8 + uVar3 * -8;
      puVar4 = (undefined8 *)(param_1 + 0x10 + uVar3 * 8);
      do {
        FUN_10ae72a88(*puVar4,param_2);
        lVar5 = lVar5 + -8;
        puVar4 = puVar4 + 1;
      } while (lVar5 != 0);
    }
  }
  else if (bVar1 != bVar2) {
    lVar5 = (ulong)bVar2 * 8 + uVar3 * -8;
    puVar4 = (undefined8 *)(param_1 + 0x10 + uVar3 * 8);
    do {
      FUN_10ae72b0c(*puVar4,param_2);
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 10ae72e00; end: 10ae73017;  */

void FUN_10ae72e00(long *param_1,ulong param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  char *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  char cVar8;
  uint uVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  ulong uVar21;
  ulong uVar22;
  undefined *puVar23;
  
  uVar13 = (uint)param_2;
  uVar9 = uVar13 >> 8;
  uVar17 = (param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU)) >> 0x20;
  pcVar7 = (char *)*param_1;
  uVar21 = param_1[1];
  cVar8 = *pcVar7;
  uVar16 = (ulong)(cVar8 < '1');
  if (cVar8 < '1') {
    pcVar7 = pcVar7 + 1;
  }
  uVar19 = uVar21 - uVar16;
  uVar5 = 0;
  if (uVar19 <= uVar17) {
    uVar5 = uVar17 - uVar19;
  }
  bVar10 = (param_2 & 0xfe) == 2;
  uVar17 = (ulong)bVar10;
  pcVar20 = (char *)0x0;
  if (bVar10) {
    pcVar20 = (char *)0x0;
    if ((uVar9 & 4) != 0) {
      pcVar20 = " ";
    }
    pcVar3 = "+";
    uVar18 = 1;
    if ((uVar9 & 2) == 0) {
      pcVar3 = pcVar20;
      uVar18 = (ulong)((uVar9 & 4) >> 2);
    }
    pcVar20 = "-";
    if (cVar8 != '-') {
      uVar17 = uVar18;
      pcVar20 = pcVar3;
    }
  }
  uVar22 = 0;
  uVar18 = 0;
  if (uVar17 <= uVar5) {
    uVar18 = uVar5 - uVar17;
  }
  uVar2 = uVar13 & 0xff;
  if (uVar2 < 0x12) {
    puVar23 = (undefined *)0x0;
    if ((1 << (ulong)(uVar13 & 0x1f) & 0x200c0U) != 0) {
      if (uVar2 == 0x11 || (param_2 & 0x800) != 0) {
        puVar4 = &UNK_10f6d1926;
        if (uVar2 != 7) {
          puVar4 = &DAT_10f519110;
        }
        uVar22 = 0;
        if (uVar21 != uVar16) {
          uVar22 = 2;
        }
        puVar23 = (undefined *)0x0;
        if (uVar21 != uVar16) {
          puVar23 = puVar4;
        }
      }
      else {
        uVar22 = 0;
        puVar23 = (undefined *)0x0;
      }
    }
  }
  else {
    puVar23 = (undefined *)0x0;
  }
  uVar5 = 0;
  if (uVar22 <= uVar18) {
    uVar5 = uVar18 - uVar22;
  }
  uVar18 = (ulong)param_3;
  if (0x7fffffff < param_3) {
    uVar18 = 1;
  }
  if (((((param_2 & 0xff) == 4) && (((uVar9 & 0xff) >> 3 & 1) != 0)) &&
      ((uVar21 == uVar16 || (*pcVar7 != '0')))) && (uVar18 <= uVar19 + 1)) {
    uVar18 = uVar19 + 1;
  }
  uVar21 = 0;
  if (uVar19 <= uVar18) {
    uVar21 = uVar18 - uVar19;
  }
  uVar16 = 0;
  if (uVar21 <= uVar5) {
    uVar16 = uVar5 - uVar21;
  }
  uVar5 = uVar16;
  if ((uVar9 & 1) != 0) {
    uVar5 = 0;
  }
  bVar10 = (uVar9 & 0x10) != 0;
  uVar18 = uVar5;
  if (bVar10) {
    uVar18 = 0;
  }
  uVar6 = 0;
  if (bVar10) {
    uVar6 = uVar5;
  }
  if ((param_3 & 0x80000000) != 0) {
    uVar21 = uVar6 + uVar21;
    uVar5 = uVar18;
  }
  uVar18 = 0;
  if ((uVar9 & 1) != 0) {
    uVar18 = uVar16;
  }
  FUN_10ae7419c(param_4,uVar5,0x20);
  func_0x000107c2b990(param_4,pcVar20,uVar17);
  func_0x000107c2b990(param_4,puVar23,uVar22);
  FUN_10ae7419c(param_4,uVar21,0x30);
  func_0x000107c2b990(param_4,pcVar7,uVar19);
  if (uVar18 != 0) {
    puVar11 = (undefined8 *)param_4[3];
    param_4[2] = param_4[2] + uVar18;
    puVar1 = param_4 + 0x84;
    uVar21 = (long)puVar1 - (long)puVar11;
    puVar12 = puVar11;
    if (uVar21 < uVar18) {
      puVar12 = param_4 + 4;
      do {
        puVar15 = puVar1;
        if (puVar1 != puVar11) {
          _memset(puVar11,0x20,uVar21);
          lVar14 = param_4[3];
          param_4[3] = (undefined8 *)(lVar14 + uVar21);
          puVar15 = (undefined8 *)(lVar14 + uVar21);
        }
        uVar18 = uVar18 - uVar21;
        (*(code *)param_4[1])(*param_4,puVar12,(long)puVar15 - (long)puVar12);
        param_4[3] = puVar12;
        uVar21 = 0x400;
        puVar11 = puVar12;
      } while (0x400 < uVar18);
    }
    _memset(puVar12,0x20,uVar18);
    param_4[3] = param_4[3] + uVar18;
  }
  return;
}



/* Entry: 10ae73018; end: 10ae73afb;  */

byte ** FUN_10ae73018(byte *param_1,byte *param_2,ulong param_3,byte *param_4)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  byte **ppbVar4;
  byte **ppbVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *unaff_x22;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbStack_358;
  undefined4 uStack_350;
  byte *pbStack_348;
  long lStack_340;
  byte abStack_338 [42];
  undefined2 uStack_30e;
  undefined1 auStack_30c [12];
  byte *pbStack_300;
  ulong uStack_2f8;
  byte *pbStack_2f0;
  byte *pbStack_2e8;
  undefined1 *****pppppuStack_2e0;
  undefined8 uStack_2d8;
  byte *pbStack_2c8;
  undefined4 uStack_2c0;
  byte *pbStack_2b8;
  ulong uStack_2b0;
  byte abStack_2a8 [42];
  undefined2 uStack_27e;
  undefined1 auStack_27c [12];
  byte *pbStack_270;
  ulong uStack_268;
  byte *pbStack_260;
  byte *pbStack_258;
  undefined1 ****ppppuStack_250;
  undefined8 uStack_248;
  byte *pbStack_238;
  undefined4 uStack_230;
  byte *pbStack_228;
  ulong uStack_220;
  byte abStack_218 [42];
  undefined2 uStack_1ee;
  undefined1 auStack_1ec [12];
  byte *pbStack_1e0;
  ulong uStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  undefined1 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  byte *pbStack_1a8;
  undefined4 uStack_1a0;
  byte *pbStack_198;
  ulong uStack_190;
  byte abStack_188 [42];
  undefined2 uStack_15e;
  undefined1 auStack_15c [12];
  byte *pbStack_150;
  ulong uStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  undefined1 **ppuStack_130;
  undefined8 uStack_128;
  byte *pbStack_118;
  undefined4 uStack_110;
  byte *pbStack_108;
  ulong uStack_100;
  byte abStack_f8 [42];
  undefined2 uStack_ce;
  undefined1 auStack_cc [12];
  byte *pbStack_c0;
  ulong uStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  byte *pbStack_88;
  undefined4 uStack_80;
  byte *pbStack_78;
  ulong uStack_70;
  byte abStack_68 [42];
  undefined2 uStack_3e;
  byte abStack_3c [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = (undefined4)param_3;
  uVar3 = (uint)param_2 & 0xff;
  pbVar13 = param_2;
  pbVar9 = param_4;
  pbStack_88 = param_2;
  if (uVar3 < 7) {
    if (3 < uVar3) {
      if (uVar3 == 4) {
        unaff_x22 = abStack_3c;
        do {
          uVar3 = (uint)param_1;
          unaff_x22 = unaff_x22 + -1;
          *unaff_x22 = (byte)param_1 & 7 | 0x30;
          param_1 = (byte *)(ulong)(uVar3 >> 3 & 0x1f);
        } while (7 < (uVar3 & 0xff));
      }
      else {
        if (uVar3 == 5) goto LAB_10ae73124;
        uStack_3e = *(ushort *)(&UNK_10e530083 + ((ulong)param_1 & 0xffffffff) * 2);
        unaff_x22 = (byte *)((long)&uStack_3e + 1);
        if ((uStack_3e & 0xff) != 0x30) {
          unaff_x22 = (byte *)&uStack_3e;
        }
      }
      goto LAB_10ae73168;
    }
    if (uVar3 - 2 < 2) {
LAB_10ae73124:
      unaff_x22 = abStack_68;
      pbStack_78 = unaff_x22;
      func_0x000107c2ba2c(param_1,unaff_x22);
      goto LAB_10ae7316c;
    }
    uVar8 = param_3 & 0xffffffff;
    func_0x00010ae72d88((int)(char)param_1);
LAB_10ae731a0:
    ppbVar4 = (byte **)0x1;
  }
  else {
    if (7 < uVar3 - 8) {
      if (uVar3 != 7) goto LAB_10ae73124;
      unaff_x22 = abStack_3c;
      do {
        uVar3 = (uint)param_1;
        unaff_x22 = unaff_x22 + -1;
        *unaff_x22 = (&DAT_10f3ddedc)[(ulong)param_1 & 0xf];
        param_1 = (byte *)(ulong)(uVar3 >> 4 & 0xf);
      } while (0xf < (uVar3 & 0xff));
LAB_10ae73168:
      param_1 = abStack_3c;
      pbStack_78 = unaff_x22;
LAB_10ae7316c:
      uVar8 = (long)param_1 - (long)unaff_x22;
      uStack_70 = uVar8;
      if (((ulong)param_2 & 0xff00) == 0) {
        pbVar13 = pbStack_78;
        func_0x000107c2b990(param_4);
      }
      else {
        uVar8 = param_3 & 0xffffffff;
        pbVar9 = param_4;
        FUN_10ae72e00(&pbStack_78);
      }
      goto LAB_10ae731a0;
    }
    ppbVar4 = &pbStack_88;
    pbVar13 = param_4;
    uVar8 = param_3;
    FUN_10ae74500((double)((ulong)param_1 & 0xffffffff));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppbVar4;
  }
  ___stack_chk_fail();
  uStack_98 = 0x10ae731d4;
  auStack_cc._4_8_ = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_110 = (undefined4)uVar8;
  uVar3 = (uint)pbVar13 & 0xff;
  pbVar11 = pbVar13;
  pbVar6 = pbVar9;
  pbStack_118 = pbVar13;
  pbStack_c0 = unaff_x22;
  uStack_b8 = param_3;
  pbStack_b0 = param_2;
  pbStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (uVar3 < 7) {
    if (3 < uVar3) {
      if (uVar3 == 4) {
        pbVar12 = auStack_cc;
        do {
          uVar3 = (uint)ppbVar4;
          pbVar12 = pbVar12 + -1;
          *pbVar12 = (byte)ppbVar4 & 7 | 0x30;
          ppbVar4 = (byte **)(ulong)(uVar3 >> 3 & 0x1fff);
        } while (7 < (uVar3 & 0xffff));
      }
      else {
        if (uVar3 == 5) goto LAB_10ae732f8;
        pbVar12 = auStack_cc + 1;
        do {
          pbVar10 = pbVar12;
          uVar3 = (uint)ppbVar4;
          uVar2 = *(ushort *)(&UNK_10e530083 + ((ulong)ppbVar4 & 0xff) * 2);
          *(ushort *)(pbVar10 + -3) = uVar2;
          ppbVar4 = (byte **)(ulong)(uVar3 >> 8 & 0xff);
          pbVar12 = pbVar10 + -2;
        } while (0xff < (uVar3 & 0xffff));
        if ((uVar2 & 0xff) != 0x30) {
          pbVar12 = pbVar10 + -3;
        }
      }
      goto LAB_10ae7333c;
    }
    if (uVar3 - 2 < 2) {
LAB_10ae732f8:
      pbVar12 = abStack_f8;
      pbStack_108 = pbVar12;
      func_0x000107c2ba2c();
      goto LAB_10ae73340;
    }
    uVar7 = uVar8 & 0xffffffff;
    func_0x00010ae72d88((int)(char)ppbVar4);
LAB_10ae73374:
    ppbVar5 = (byte **)0x1;
  }
  else {
    if (7 < uVar3 - 8) {
      if (uVar3 != 7) goto LAB_10ae732f8;
      pbVar12 = auStack_cc;
      do {
        uVar3 = (uint)ppbVar4;
        pbVar12 = pbVar12 + -1;
        *pbVar12 = (&DAT_10f3ddedc)[(ulong)ppbVar4 & 0xf];
        ppbVar4 = (byte **)(ulong)(uVar3 >> 4 & 0xfff);
      } while (0xf < (uVar3 & 0xffff));
LAB_10ae7333c:
      ppbVar4 = (byte **)auStack_cc;
      pbStack_108 = pbVar12;
LAB_10ae73340:
      uVar7 = (long)ppbVar4 - (long)pbVar12;
      unaff_x22 = pbVar12;
      uStack_100 = uVar7;
      if (((ulong)pbVar13 & 0xff00) == 0) {
        pbVar11 = pbStack_108;
        func_0x000107c2b990(pbVar9);
      }
      else {
        uVar7 = uVar8 & 0xffffffff;
        pbVar6 = pbVar9;
        FUN_10ae72e00(&pbStack_108);
      }
      goto LAB_10ae73374;
    }
    ppbVar5 = &pbStack_118;
    pbVar11 = pbVar9;
    uVar7 = uVar8;
    FUN_10ae74500((double)((ulong)ppbVar4 & 0xffffffff));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_cc._4_8_) {
    return ppbVar5;
  }
  ___stack_chk_fail();
  uStack_128 = 0x10ae733a8;
  auStack_15c._4_8_ = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_1a0 = (undefined4)uVar7;
  uVar3 = (uint)pbVar11 & 0xff;
  pbVar12 = pbVar11;
  pbVar10 = pbVar6;
  pbStack_1a8 = pbVar11;
  pbStack_150 = unaff_x22;
  uStack_148 = uVar8;
  pbStack_140 = pbVar13;
  pbStack_138 = pbVar9;
  ppuStack_130 = &puStack_a0;
  if (uVar3 < 7) {
    if (3 < uVar3) {
      if (uVar3 == 4) {
        pbVar13 = auStack_15c;
        do {
          uVar3 = (uint)ppbVar5;
          pbVar13 = pbVar13 + -1;
          *pbVar13 = (byte)ppbVar5 & 7 | 0x30;
          ppbVar5 = (byte **)(ulong)(uVar3 >> 3);
        } while (7 < uVar3);
      }
      else {
        if (uVar3 == 5) goto LAB_10ae734cc;
        pbVar13 = auStack_15c + 1;
        do {
          pbVar9 = pbVar13;
          uVar2 = *(ushort *)(&UNK_10e530083 + ((ulong)ppbVar5 & 0xff) * 2);
          *(ushort *)(pbVar9 + -3) = uVar2;
          uVar3 = (uint)ppbVar5;
          ppbVar5 = (byte **)((ulong)ppbVar5 >> 8 & 0xffffff);
          pbVar13 = pbVar9 + -2;
        } while (0xff < uVar3);
        if ((uVar2 & 0xff) != 0x30) {
          pbVar13 = pbVar9 + -3;
        }
      }
      goto LAB_10ae73510;
    }
    if (uVar3 - 2 < 2) {
LAB_10ae734cc:
      pbVar13 = abStack_188;
      pbStack_198 = pbVar13;
      func_0x000107c2ba2c();
      goto LAB_10ae73514;
    }
    uVar8 = uVar7 & 0xffffffff;
    func_0x00010ae72d88((int)(char)ppbVar5);
LAB_10ae73548:
    ppbVar4 = (byte **)0x1;
  }
  else {
    if (7 < uVar3 - 8) {
      if (uVar3 != 7) goto LAB_10ae734cc;
      pbVar13 = auStack_15c;
      do {
        pbVar13 = pbVar13 + -1;
        *pbVar13 = (&DAT_10f3ddedc)[(ulong)ppbVar5 & 0xf];
        uVar3 = (uint)ppbVar5;
        ppbVar5 = (byte **)((ulong)ppbVar5 >> 4 & 0xfffffff);
      } while (0xf < uVar3);
LAB_10ae73510:
      ppbVar5 = (byte **)auStack_15c;
      pbStack_198 = pbVar13;
LAB_10ae73514:
      uVar8 = (long)ppbVar5 - (long)pbVar13;
      unaff_x22 = pbVar13;
      uStack_190 = uVar8;
      if (((ulong)pbVar11 & 0xff00) == 0) {
        pbVar12 = pbStack_198;
        func_0x000107c2b990(pbVar6);
      }
      else {
        uVar8 = uVar7 & 0xffffffff;
        pbVar10 = pbVar6;
        FUN_10ae72e00(&pbStack_198);
      }
      goto LAB_10ae73548;
    }
    ppbVar4 = &pbStack_1a8;
    pbVar12 = pbVar6;
    uVar8 = uVar7;
    FUN_10ae74500((double)((ulong)ppbVar5 & 0xffffffff));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_15c._4_8_) {
    return ppbVar4;
  }
  ___stack_chk_fail();
  uStack_1b8 = 0x10ae7357c;
  auStack_1ec._4_8_ = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_230 = (undefined4)uVar8;
  uVar3 = (uint)pbVar12 & 0xff;
  pbVar13 = pbVar12;
  pbVar9 = pbVar10;
  pbStack_238 = pbVar12;
  pbStack_1e0 = unaff_x22;
  uStack_1d8 = uVar7;
  pbStack_1d0 = pbVar11;
  pbStack_1c8 = pbVar6;
  pppuStack_1c0 = &ppuStack_130;
  if (uVar3 < 7) {
    if (3 < uVar3) {
      if (uVar3 == 4) {
        pbVar11 = auStack_1ec;
        do {
          pbVar11 = pbVar11 + -1;
          *pbVar11 = (byte)ppbVar4 & 7 | 0x30;
          bVar1 = (byte **)0x7 < ppbVar4;
          ppbVar4 = (byte **)((ulong)ppbVar4 >> 3);
        } while (bVar1);
      }
      else {
        if (uVar3 == 5) goto LAB_10ae73698;
        pbVar11 = auStack_1ec + 1;
        do {
          pbVar6 = pbVar11;
          uVar2 = *(ushort *)(&UNK_10e530083 + ((ulong)ppbVar4 & 0xff) * 2);
          *(ushort *)(pbVar6 + -3) = uVar2;
          bVar1 = (byte **)0xff < ppbVar4;
          ppbVar4 = (byte **)((ulong)ppbVar4 >> 8);
          pbVar11 = pbVar6 + -2;
        } while (bVar1);
        if ((uVar2 & 0xff) != 0x30) {
          pbVar11 = pbVar6 + -3;
        }
      }
      goto LAB_10ae736d8;
    }
    if (uVar3 - 2 < 2) {
LAB_10ae73698:
      pbVar11 = abStack_218;
      pbStack_228 = pbVar11;
      func_0x00010ae8b9f0();
      goto LAB_10ae736dc;
    }
    uVar7 = uVar8 & 0xffffffff;
    func_0x00010ae72d88((int)(char)ppbVar4);
LAB_10ae73710:
    ppbVar5 = (byte **)0x1;
  }
  else {
    if (7 < uVar3 - 8) {
      if (uVar3 != 7) goto LAB_10ae73698;
      pbVar11 = auStack_1ec;
      do {
        pbVar11 = pbVar11 + -1;
        *pbVar11 = (&DAT_10f3ddedc)[(ulong)ppbVar4 & 0xf];
        bVar1 = (byte **)0xf < ppbVar4;
        ppbVar4 = (byte **)((ulong)ppbVar4 >> 4);
      } while (bVar1);
LAB_10ae736d8:
      ppbVar4 = (byte **)auStack_1ec;
      pbStack_228 = pbVar11;
LAB_10ae736dc:
      uVar7 = (long)ppbVar4 - (long)pbVar11;
      unaff_x22 = pbVar11;
      uStack_220 = uVar7;
      if (((ulong)pbVar12 & 0xff00) == 0) {
        pbVar13 = pbStack_228;
        func_0x000107c2b990(pbVar10);
      }
      else {
        uVar7 = uVar8 & 0xffffffff;
        pbVar9 = pbVar10;
        FUN_10ae72e00(&pbStack_228);
      }
      goto LAB_10ae73710;
    }
    ppbVar5 = &pbStack_238;
    pbVar13 = pbVar10;
    uVar7 = uVar8;
    FUN_10ae74500((double)ppbVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_1ec._4_8_) {
    return ppbVar5;
  }
  ___stack_chk_fail();
  uStack_248 = 0x10ae73744;
  auStack_27c._4_8_ = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_2c0 = (undefined4)uVar7;
  uVar3 = (uint)pbVar13 & 0xff;
  pbVar11 = pbVar13;
  pbVar6 = pbVar9;
  pbStack_2c8 = pbVar13;
  pbStack_270 = unaff_x22;
  uStack_268 = uVar8;
  pbStack_260 = pbVar12;
  pbStack_258 = pbVar10;
  ppppuStack_250 = &pppuStack_1c0;
  if (uVar3 < 7) {
    if (3 < uVar3) {
      if (uVar3 == 4) {
        pbVar12 = auStack_27c;
        do {
          pbVar12 = pbVar12 + -1;
          *pbVar12 = (byte)ppbVar5 & 7 | 0x30;
          bVar1 = (byte **)0x7 < ppbVar5;
          ppbVar5 = (byte **)((ulong)ppbVar5 >> 3);
        } while (bVar1);
      }
      else {
        if (uVar3 == 5) goto LAB_10ae73854;
        pbVar12 = auStack_27c + 1;
        do {
          pbVar10 = pbVar12;
          uVar2 = *(ushort *)(&UNK_10e530083 + ((ulong)ppbVar5 & 0xff) * 2);
          *(ushort *)(pbVar10 + -3) = uVar2;
          bVar1 = (byte **)0xff < ppbVar5;
          ppbVar5 = (byte **)((ulong)ppbVar5 >> 8);
          pbVar12 = pbVar10 + -2;
        } while (bVar1);
        if ((uVar2 & 0xff) != 0x30) {
          pbVar12 = pbVar10 + -3;
        }
      }
LAB_10ae738c8:
      ppbVar5 = (byte **)auStack_27c;
      pbStack_2b8 = pbVar12;
      goto LAB_10ae738cc;
    }
    if (uVar3 - 2 < 2) goto LAB_10ae7382c;
    uVar8 = uVar7 & 0xffffffff;
    func_0x00010ae72d88((int)(char)ppbVar5);
LAB_10ae73900:
    ppbVar4 = (byte **)0x1;
  }
  else {
    if (7 < uVar3 - 8) {
      if (uVar3 == 7) {
        pbVar12 = auStack_27c;
        do {
          pbVar12 = pbVar12 + -1;
          *pbVar12 = (&DAT_10f3ddedc)[(ulong)ppbVar5 & 0xf];
          bVar1 = (byte **)0xf < ppbVar5;
          ppbVar5 = (byte **)((ulong)ppbVar5 >> 4);
        } while (bVar1);
        goto LAB_10ae738c8;
      }
LAB_10ae7382c:
      if ((long)ppbVar5 < 0) {
        abStack_2a8[0] = 0x2d;
        ppbVar5 = (byte **)-(long)ppbVar5;
      }
LAB_10ae73854:
      pbVar12 = abStack_2a8;
      pbStack_2b8 = pbVar12;
      func_0x00010ae8b9f0();
LAB_10ae738cc:
      uVar8 = (long)ppbVar5 - (long)pbVar12;
      unaff_x22 = pbVar12;
      uStack_2b0 = uVar8;
      if (((ulong)pbVar13 & 0xff00) == 0) {
        pbVar11 = pbStack_2b8;
        func_0x000107c2b990(pbVar9);
      }
      else {
        uVar8 = uVar7 & 0xffffffff;
        pbVar6 = pbVar9;
        FUN_10ae72e00(&pbStack_2b8);
      }
      goto LAB_10ae73900;
    }
    ppbVar4 = &pbStack_2c8;
    pbVar11 = pbVar9;
    uVar8 = uVar7;
    FUN_10ae74500((double)(long)ppbVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_27c._4_8_) {
    return ppbVar4;
  }
  ___stack_chk_fail();
  uStack_2d8 = 0x10ae73934;
  auStack_30c._4_8_ = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_350 = (undefined4)uVar8;
  uVar3 = (uint)pbVar11 & 0xff;
  pbStack_358 = pbVar11;
  pbStack_300 = unaff_x22;
  uStack_2f8 = uVar7;
  pbStack_2f0 = pbVar13;
  pbStack_2e8 = pbVar9;
  pppppuStack_2e0 = &ppppuStack_250;
  if (uVar3 < 7) {
    if (3 < uVar3) {
      if (uVar3 == 4) {
        pbVar13 = auStack_30c;
        do {
          pbVar13 = pbVar13 + -1;
          *pbVar13 = (byte)ppbVar4 & 7 | 0x30;
          bVar1 = (byte **)0x7 < ppbVar4;
          ppbVar4 = (byte **)((ulong)ppbVar4 >> 3);
        } while (bVar1);
      }
      else {
        if (uVar3 == 5) goto LAB_10ae73a50;
        pbVar13 = auStack_30c + 1;
        do {
          pbVar9 = pbVar13;
          uVar2 = *(ushort *)(&UNK_10e530083 + ((ulong)ppbVar4 & 0xff) * 2);
          *(ushort *)(pbVar9 + -3) = uVar2;
          bVar1 = (byte **)0xff < ppbVar4;
          ppbVar4 = (byte **)((ulong)ppbVar4 >> 8);
          pbVar13 = pbVar9 + -2;
        } while (bVar1);
        if ((uVar2 & 0xff) != 0x30) {
          pbVar13 = pbVar9 + -3;
        }
      }
      goto LAB_10ae73a90;
    }
    if (uVar3 - 2 < 2) {
LAB_10ae73a50:
      pbVar13 = abStack_338;
      pbStack_348 = pbVar13;
      func_0x00010ae8b9f0();
      goto LAB_10ae73a94;
    }
    func_0x00010ae72d88((int)(char)ppbVar4,pbVar11,uVar8 & 0xffffffff,pbVar6);
  }
  else {
    if (uVar3 - 8 < 8) {
      ppbVar5 = &pbStack_358;
      FUN_10ae74500((double)ppbVar4,ppbVar5);
      pbVar11 = pbVar6;
      goto LAB_10ae73acc;
    }
    if (uVar3 != 7) goto LAB_10ae73a50;
    pbVar13 = auStack_30c;
    do {
      pbVar13 = pbVar13 + -1;
      *pbVar13 = (&DAT_10f3ddedc)[(ulong)ppbVar4 & 0xf];
      bVar1 = (byte **)0xf < ppbVar4;
      ppbVar4 = (byte **)((ulong)ppbVar4 >> 4);
    } while (bVar1);
LAB_10ae73a90:
    ppbVar4 = (byte **)auStack_30c;
    pbStack_348 = pbVar13;
LAB_10ae73a94:
    lStack_340 = (long)ppbVar4 - (long)pbVar13;
    if (((ulong)pbVar11 & 0xff00) == 0) {
      pbVar11 = pbStack_348;
      func_0x000107c2b990(pbVar6);
    }
    else {
      FUN_10ae72e00(&pbStack_348,pbVar11,uVar8 & 0xffffffff,pbVar6);
    }
  }
  ppbVar5 = (byte **)0x1;
LAB_10ae73acc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != auStack_30c._4_8_) {
    ___stack_chk_fail();
    if (((ulong)pbVar11 & 0xff) == 0x11) {
      FUN_10ae73b30();
    }
    return (byte **)(ulong)(((ulong)pbVar11 & 0xff) == 0x11);
  }
  return ppbVar5;
}



/* Entry: 10ae73afc; end: 10ae73b2f;  */

bool FUN_10ae73afc(undefined8 param_1,ulong param_2,undefined4 param_3)

{
  if ((param_2 & 0xff) == 0x11) {
    FUN_10ae73b30(param_1,param_2,param_3);
  }
  return (param_2 & 0xff) == 0x11;
}



/* Entry: 10ae73b30; end: 10ae73be7;  */

/* WARNING: Possible PIC construction at 0x00010ae72c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae72c28) */
/* WARNING: Type propagation algorithm not settling */

byte ******* FUN_10ae73b30(ulong param_1,byte *******param_2,ulong param_3,byte *******param_4)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  undefined8 *puVar11;
  ulong uVar12;
  byte ******ppppppbVar13;
  byte *******pppppppbVar14;
  undefined1 *puVar15;
  byte *******pppppppbVar16;
  ulong uVar17;
  byte *******pppppppbStack_e8;
  undefined4 uStack_e0;
  byte *******pppppppbStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_c7 [41];
  undefined1 auStack_9e [2];
  undefined1 auStack_9c [12];
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  ushort uStack_1e;
  undefined1 auStack_1c [4];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    param_2 = (byte *******)&UNK_10f6d1920;
    param_3 = 5;
    pppppppbVar10 = param_4;
    func_0x000107c2b990();
    uVar6 = (uint)param_4;
  }
  else {
    puVar5 = auStack_1c + 1;
    do {
      puVar15 = puVar5;
      uVar3 = *(ushort *)(&UNK_10e530083 + (param_1 & 0xff) * 2);
      *(ushort *)(puVar15 + -3) = uVar3;
      bVar1 = 0xff < param_1;
      param_1 = param_1 >> 8;
      puVar5 = puVar15 + -2;
    } while (bVar1);
    puStack_58 = puVar15 + -2;
    if ((uVar3 & 0xff) != 0x30) {
      puStack_58 = puVar15 + -3;
    }
    puStack_50 = auStack_1c + -(long)puStack_58;
    param_3 = param_3 & 0xffffffff;
    uVar6 = (uint)&puStack_58;
    FUN_10ae72e00();
    pppppppbVar10 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return (byte *******)0x1;
  }
  ___stack_chk_fail();
  if (((ulong)param_2 & 0xff) == 0x13) {
    *(int *)pppppppbVar10 = (int)(char)uVar6;
    return (byte *******)0x1;
  }
  if ((2L << ((ulong)param_2 & 0x3f) & 0x1fffaU) == 0) {
    return (byte *******)0x0;
  }
  uStack_e0 = (undefined4)param_3;
  uVar4 = (uint)(char)uVar6;
  pppppppbVar7 = (byte *******)(ulong)uVar4;
  auStack_9c._4_8_ = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = (uint)param_2 & 0xff;
  pppppppbVar9 = pppppppbVar10;
  pppppppbStack_e8 = param_2;
  if (uVar2 < 7) {
    if (uVar2 < 4) {
      if (1 < uVar2 - 2) goto SUB_10ae72d88;
      goto LAB_10ae72c90;
    }
    if (uVar2 == 4) {
      pppppppbVar16 = (byte *******)auStack_9c;
      do {
        uVar6 = (uint)pppppppbVar7;
        pppppppbVar16 = (byte *******)((long)pppppppbVar16 + -1);
        *(byte *)pppppppbVar16 = (byte)pppppppbVar7 & 7 | 0x30;
        pppppppbVar7 = (byte *******)(ulong)(uVar6 >> 3 & 0x1f);
      } while (7 < (uVar6 & 0xff));
    }
    else {
      if (uVar2 == 5) {
        puVar11 = (undefined8 *)&uStack_c8;
        pppppppbVar7 = (byte *******)(ulong)(uVar6 & 0xff);
        goto LAB_10ae72cb4;
      }
      auStack_9e = *(undefined1 (*) [2])(&UNK_10e530083 + ((ulong)pppppppbVar7 & 0xff) * 2);
      pppppppbVar16 = (byte *******)(auStack_9e + 1);
      if (((ushort)auStack_9e & 0xff) != 0x30) {
        pppppppbVar16 = (byte *******)auStack_9e;
      }
    }
LAB_10ae72d1c:
    pppppppbVar7 = (byte *******)auStack_9c;
    pppppppbStack_d8 = pppppppbVar16;
LAB_10ae72d20:
    lStack_d0 = (long)pppppppbVar7 - (long)pppppppbVar16;
    if (((ulong)param_2 & 0xff00) == 0) {
      param_2 = pppppppbStack_d8;
      func_0x000107c2b990(pppppppbVar10);
      pppppppbVar10 = pppppppbVar9;
    }
    else {
      FUN_10ae72e00(&pppppppbStack_d8,param_2,param_3 & 0xffffffff);
    }
    pppppppbVar7 = (byte *******)0x1;
  }
  else {
    if (7 < uVar2 - 8) {
      if (uVar2 == 7) {
        pppppppbVar16 = (byte *******)auStack_9c;
        do {
          uVar6 = (uint)pppppppbVar7;
          pppppppbVar16 = (byte *******)((long)pppppppbVar16 + -1);
          *(undefined *)pppppppbVar16 = (&DAT_10f3ddedc)[(ulong)pppppppbVar7 & 0xf];
          pppppppbVar7 = (byte *******)(ulong)(uVar6 >> 4 & 0xf);
        } while (0xf < (uVar6 & 0xff));
        goto LAB_10ae72d1c;
      }
LAB_10ae72c90:
      puVar11 = (undefined8 *)&uStack_c8;
      if ((int)uVar4 < 0) {
        puVar11 = (undefined8 *)auStack_c7;
        uStack_c8 = 0x2d;
        pppppppbVar7 = (byte *******)(ulong)-uVar4;
      }
LAB_10ae72cb4:
      pppppppbVar16 = (byte *******)&uStack_c8;
      pppppppbStack_d8 = pppppppbVar16;
      func_0x000107c2ba2c(pppppppbVar7,puVar11);
      goto LAB_10ae72d20;
    }
    pppppppbVar7 = (byte *******)&pppppppbStack_e8;
    FUN_10ae74500((double)(int)uVar4,pppppppbVar7);
    param_2 = pppppppbVar10;
    pppppppbVar10 = pppppppbVar9;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_9c._4_8_) {
    return pppppppbVar7;
  }
  ___stack_chk_fail();
SUB_10ae72d88:
  uVar17 = 0;
  if ((ulong)param_2 >> 0x20 != 0) {
    uVar17 = ((ulong)param_2 >> 0x20) - 1;
  }
  uVar12 = 0;
  if (-1 < (long)param_2) {
    uVar12 = uVar17;
  }
  if (((uint)param_2 >> 8 & 1) == 0) {
    FUN_10ae7419c(pppppppbVar10,uVar12,0x20);
    uVar12 = 1;
  }
  else {
    FUN_10ae7419c(pppppppbVar10,1,pppppppbVar7);
    pppppppbVar7 = (byte *******)0x20;
  }
  pppppppbVar9 = pppppppbVar10;
  if (uVar12 != 0) {
    pppppppbVar8 = (byte *******)pppppppbVar10[3];
    pppppppbVar10[2] = (byte ******)((long)pppppppbVar10[2] + uVar12);
    pppppppbVar16 = pppppppbVar10 + 0x84;
    uVar17 = (long)pppppppbVar16 - (long)pppppppbVar8;
    pppppppbVar9 = pppppppbVar8;
    if (uVar17 < uVar12) {
      pppppppbVar9 = pppppppbVar10 + 4;
      do {
        pppppppbVar14 = pppppppbVar16;
        if (pppppppbVar16 != pppppppbVar8) {
          _memset(pppppppbVar8,pppppppbVar7,uVar17);
          ppppppbVar13 = pppppppbVar10[3];
          pppppppbVar10[3] = (byte ******)((long)ppppppbVar13 + uVar17);
          pppppppbVar14 = (byte *******)((long)ppppppbVar13 + uVar17);
        }
        uVar12 = uVar12 - uVar17;
        (*(code *)pppppppbVar10[1])
                  (*pppppppbVar10,pppppppbVar9,(long)pppppppbVar14 - (long)pppppppbVar9);
        pppppppbVar10[3] = (byte ******)pppppppbVar9;
        uVar17 = 0x400;
        pppppppbVar8 = pppppppbVar9;
      } while (0x400 < uVar12);
    }
    _memset(pppppppbVar9,pppppppbVar7,uVar12);
    pppppppbVar10[3] = (byte ******)((long)pppppppbVar10[3] + uVar12);
  }
  return pppppppbVar9;
}



/* Entry: 10ae73be8; end: 10ae73d0b;  */

/* WARNING: Possible PIC construction at 0x00010ae72c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae72c28) */
/* WARNING: Type propagation algorithm not settling */

byte ******* FUN_10ae73be8(byte param_1,byte *******param_2,undefined4 param_3,byte *******param_4)

{
  uint uVar1;
  uint uVar2;
  byte *******pppppppbVar3;
  byte *******pppppppbVar4;
  byte *******pppppppbVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte ******ppppppbVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  ulong uVar11;
  byte *******pppppppbStack_88;
  undefined4 uStack_80;
  byte *******pppppppbStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined1 auStack_67 [41];
  undefined1 auStack_3e [2];
  undefined1 auStack_3c [12];
  
  if (((ulong)param_2 & 0xff) == 0x13) {
    *(int *)param_4 = (int)(char)param_1;
    return (byte *******)0x1;
  }
  if ((2L << ((ulong)param_2 & 0x3f) & 0x1fffaU) == 0) {
    return (byte *******)0x0;
  }
  uVar1 = (uint)(char)param_1;
  pppppppbVar3 = (byte *******)(ulong)uVar1;
  auStack_3c._4_8_ = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = (uint)param_2 & 0xff;
  pppppppbVar5 = param_4;
  pppppppbStack_88 = param_2;
  uStack_80 = param_3;
  if (uVar2 < 7) {
    if (uVar2 < 4) {
      if (1 < uVar2 - 2) goto SUB_10ae72d88;
      goto LAB_10ae72c90;
    }
    if (uVar2 == 4) {
      pppppppbVar10 = (byte *******)auStack_3c;
      do {
        uVar2 = (uint)pppppppbVar3;
        pppppppbVar10 = (byte *******)((long)pppppppbVar10 + -1);
        *(byte *)pppppppbVar10 = (byte)pppppppbVar3 & 7 | 0x30;
        pppppppbVar3 = (byte *******)(ulong)(uVar2 >> 3 & 0x1f);
      } while (7 < (uVar2 & 0xff));
    }
    else {
      if (uVar2 == 5) {
        puVar6 = (undefined8 *)&uStack_68;
        pppppppbVar3 = (byte *******)(ulong)param_1;
        goto LAB_10ae72cb4;
      }
      auStack_3e = *(undefined1 (*) [2])(&UNK_10e530083 + ((ulong)pppppppbVar3 & 0xff) * 2);
      pppppppbVar10 = (byte *******)(auStack_3e + 1);
      if (((ushort)auStack_3e & 0xff) != 0x30) {
        pppppppbVar10 = (byte *******)auStack_3e;
      }
    }
LAB_10ae72d1c:
    pppppppbVar3 = (byte *******)auStack_3c;
    pppppppbStack_78 = pppppppbVar10;
LAB_10ae72d20:
    lStack_70 = (long)pppppppbVar3 - (long)pppppppbVar10;
    if (((ulong)param_2 & 0xff00) == 0) {
      param_2 = pppppppbStack_78;
      func_0x000107c2b990(param_4);
      param_4 = pppppppbVar5;
    }
    else {
      FUN_10ae72e00(&pppppppbStack_78,param_2,param_3);
    }
    pppppppbVar3 = (byte *******)0x1;
  }
  else {
    if (7 < uVar2 - 8) {
      if (uVar2 == 7) {
        pppppppbVar10 = (byte *******)auStack_3c;
        do {
          uVar2 = (uint)pppppppbVar3;
          pppppppbVar10 = (byte *******)((long)pppppppbVar10 + -1);
          *(undefined *)pppppppbVar10 = (&DAT_10f3ddedc)[(ulong)pppppppbVar3 & 0xf];
          pppppppbVar3 = (byte *******)(ulong)(uVar2 >> 4 & 0xf);
        } while (0xf < (uVar2 & 0xff));
        goto LAB_10ae72d1c;
      }
LAB_10ae72c90:
      puVar6 = (undefined8 *)&uStack_68;
      if ((int)uVar1 < 0) {
        puVar6 = (undefined8 *)auStack_67;
        uStack_68 = 0x2d;
        pppppppbVar3 = (byte *******)(ulong)-uVar1;
      }
LAB_10ae72cb4:
      pppppppbVar10 = (byte *******)&uStack_68;
      pppppppbStack_78 = pppppppbVar10;
      func_0x000107c2ba2c(pppppppbVar3,puVar6);
      goto LAB_10ae72d20;
    }
    pppppppbVar3 = (byte *******)&pppppppbStack_88;
    FUN_10ae74500((double)(int)uVar1,pppppppbVar3);
    param_2 = param_4;
    param_4 = pppppppbVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_3c._4_8_) {
    return pppppppbVar3;
  }
  ___stack_chk_fail();
SUB_10ae72d88:
  uVar11 = 0;
  if ((ulong)param_2 >> 0x20 != 0) {
    uVar11 = ((ulong)param_2 >> 0x20) - 1;
  }
  uVar7 = 0;
  if (-1 < (long)param_2) {
    uVar7 = uVar11;
  }
  if (((uint)param_2 >> 8 & 1) == 0) {
    FUN_10ae7419c(param_4,uVar7,0x20);
    uVar7 = 1;
  }
  else {
    FUN_10ae7419c(param_4,1,pppppppbVar3);
    pppppppbVar3 = (byte *******)0x20;
  }
  pppppppbVar5 = param_4;
  if (uVar7 != 0) {
    pppppppbVar4 = (byte *******)param_4[3];
    param_4[2] = (byte ******)((long)param_4[2] + uVar7);
    pppppppbVar10 = param_4 + 0x84;
    uVar11 = (long)pppppppbVar10 - (long)pppppppbVar4;
    pppppppbVar5 = pppppppbVar4;
    if (uVar11 < uVar7) {
      pppppppbVar5 = param_4 + 4;
      do {
        pppppppbVar9 = pppppppbVar10;
        if (pppppppbVar10 != pppppppbVar4) {
          _memset(pppppppbVar4,pppppppbVar3,uVar11);
          ppppppbVar8 = param_4[3];
          param_4[3] = (byte ******)((long)ppppppbVar8 + uVar11);
          pppppppbVar9 = (byte *******)((long)ppppppbVar8 + uVar11);
        }
        uVar7 = uVar7 - uVar11;
        (*(code *)param_4[1])(*param_4,pppppppbVar5,(long)pppppppbVar9 - (long)pppppppbVar5);
        param_4[3] = (byte ******)pppppppbVar5;
        uVar11 = 0x400;
        pppppppbVar4 = pppppppbVar5;
      } while (0x400 < uVar7);
    }
    _memset(pppppppbVar5,pppppppbVar3,uVar7);
    param_4[3] = (byte ******)((long)param_4[3] + uVar7);
  }
  return pppppppbVar5;
}



/* Entry: 10ae73d0c; end: 10ae73f47;  */

byte ** FUN_10ae73d0c(byte *param_1,byte *param_2,ulong param_3,byte *param_4)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  byte **ppbVar4;
  byte **ppbVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *unaff_x20;
  ulong unaff_x21;
  byte *pbVar11;
  byte *pbVar12;
  byte *unaff_x22;
  byte *pbStack_238;
  undefined4 uStack_230;
  byte *pbStack_228;
  long lStack_220;
  byte abStack_218 [42];
  undefined2 uStack_1ee;
  undefined1 auStack_1ec [12];
  byte *pbStack_1e0;
  ulong uStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  undefined1 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  byte *pbStack_1a8;
  undefined4 uStack_1a0;
  byte *pbStack_198;
  ulong uStack_190;
  byte abStack_188 [42];
  undefined2 uStack_15e;
  undefined1 auStack_15c [12];
  byte *pbStack_150;
  ulong uStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  undefined1 **ppuStack_130;
  undefined8 uStack_128;
  byte *pbStack_118;
  undefined4 uStack_110;
  byte *pbStack_108;
  ulong uStack_100;
  byte abStack_f8 [42];
  undefined2 uStack_ce;
  undefined1 auStack_cc [12];
  byte *pbStack_c0;
  ulong uStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte *pbStack_88;
  undefined4 uStack_80;
  byte *pbStack_78;
  ulong uStack_70;
  byte bStack_68;
  byte abStack_67 [41];
  undefined2 uStack_3e;
  byte bStack_3c;
  byte abStack_3b [3];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar12 = param_4;
  if (((ulong)param_2 & 0xff) == 0x13) {
    if ((long)param_1 < -0x7fffffff) {
      param_1 = (byte *)0xffffffff80000000;
    }
    if (0x7ffffffe < (long)param_1) {
      param_1 = (byte *)0x7fffffff;
    }
    *(int *)param_4 = (int)param_1;
LAB_10ae73eec:
    ppbVar4 = (byte **)0x1;
  }
  else {
    if ((2L << ((ulong)param_2 & 0x3f) & 0x9fffaU) != 0) {
      unaff_x21 = param_3 & 0xffffffff;
      uStack_80 = (undefined4)param_3;
      uVar2 = (uint)param_2 & 0xff;
      unaff_x20 = param_2;
      pbStack_88 = param_2;
      if (uVar2 < 7) {
        if (uVar2 < 4) {
          if (1 < uVar2 - 2) {
            param_3 = unaff_x21;
            func_0x00010ae72d88((int)(char)param_1);
            goto LAB_10ae73eec;
          }
          goto LAB_10ae73e18;
        }
        if (uVar2 == 4) {
          unaff_x22 = &bStack_3c;
          do {
            unaff_x22 = unaff_x22 + -1;
            *unaff_x22 = (byte)param_1 & 7 | 0x30;
            bVar1 = (byte *)0x7 < param_1;
            param_1 = (byte *)((ulong)param_1 >> 3);
          } while (bVar1);
        }
        else {
          if (uVar2 == 5) goto LAB_10ae73e28;
          pbVar6 = abStack_3b;
          do {
            pbVar9 = pbVar6;
            uVar3 = *(ushort *)(&UNK_10e530083 + ((ulong)param_1 & 0xff) * 2);
            *(ushort *)(pbVar9 + -3) = uVar3;
            bVar1 = (byte *)0xff < param_1;
            param_1 = (byte *)((ulong)param_1 >> 8);
            pbVar6 = pbVar9 + -2;
          } while (bVar1);
          unaff_x22 = pbVar9 + -2;
          if ((uVar3 & 0xff) != 0x30) {
            unaff_x22 = pbVar9 + -3;
          }
        }
LAB_10ae73eb4:
        param_1 = &bStack_3c;
        pbStack_78 = unaff_x22;
      }
      else {
        if (uVar2 - 8 < 8) {
          ppbVar4 = &pbStack_88;
          param_2 = param_4;
          FUN_10ae74500((double)(long)param_1);
          goto LAB_10ae73ef0;
        }
        if (uVar2 == 7) {
          unaff_x22 = &bStack_3c;
          do {
            unaff_x22 = unaff_x22 + -1;
            *unaff_x22 = (&DAT_10f3ddedc)[(ulong)param_1 & 0xf];
            bVar1 = (byte *)0xf < param_1;
            param_1 = (byte *)((ulong)param_1 >> 4);
          } while (bVar1);
          goto LAB_10ae73eb4;
        }
LAB_10ae73e18:
        if ((long)param_1 < 0) {
          pbVar6 = abStack_67;
          bStack_68 = 0x2d;
          param_1 = (byte *)-(long)param_1;
        }
        else {
LAB_10ae73e28:
          pbVar6 = &bStack_68;
        }
        unaff_x22 = &bStack_68;
        pbStack_78 = unaff_x22;
        func_0x00010ae8b9f0(param_1,pbVar6);
      }
      param_3 = (long)param_1 - (long)unaff_x22;
      uStack_70 = param_3;
      if (((ulong)param_2 & 0xff00) == 0) {
        param_2 = pbStack_78;
        func_0x000107c2b990(param_4);
      }
      else {
        param_3 = unaff_x21;
        pbVar12 = param_4;
        FUN_10ae72e00(&pbStack_78);
      }
      goto LAB_10ae73eec;
    }
    ppbVar4 = (byte **)0x0;
  }
LAB_10ae73ef0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppbVar4;
  }
  ___stack_chk_fail();
  if (((ulong)param_2 & 0xff) == 0x13) {
    if ((byte **)0x7ffffffe < ppbVar4) {
      ppbVar4 = (byte **)0x7fffffff;
    }
    *(int *)pbVar12 = (int)ppbVar4;
    return (byte **)0x1;
  }
  if ((2L << ((ulong)param_2 & 0x3f) & 0x9fffaU) == 0) {
    return (byte **)0x0;
  }
  uStack_110 = (undefined4)param_3;
  uVar8 = param_3 & 0xffffffff;
  pcStack_98 = FUN_10ae73f48;
  auStack_cc._4_8_ = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = (uint)param_2 & 0xff;
  pbVar6 = param_2;
  pbVar9 = pbVar12;
  pbStack_118 = param_2;
  pbStack_c0 = unaff_x22;
  uStack_b8 = unaff_x21;
  pbStack_b0 = unaff_x20;
  pbStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (uVar2 < 7) {
    if (3 < uVar2) {
      if (uVar2 == 4) {
        pbVar11 = auStack_cc;
        do {
          pbVar11 = pbVar11 + -1;
          *pbVar11 = (byte)ppbVar4 & 7 | 0x30;
          bVar1 = (byte **)0x7 < ppbVar4;
          ppbVar4 = (byte **)((ulong)ppbVar4 >> 3);
        } while (bVar1);
      }
      else {
        if (uVar2 == 5) goto LAB_10ae73698;
        pbVar11 = auStack_cc + 1;
        do {
          pbVar7 = pbVar11;
          uVar3 = *(ushort *)(&UNK_10e530083 + ((ulong)ppbVar4 & 0xff) * 2);
          *(ushort *)(pbVar7 + -3) = uVar3;
          bVar1 = (byte **)0xff < ppbVar4;
          ppbVar4 = (byte **)((ulong)ppbVar4 >> 8);
          pbVar11 = pbVar7 + -2;
        } while (bVar1);
        if ((uVar3 & 0xff) != 0x30) {
          pbVar11 = pbVar7 + -3;
        }
      }
      goto LAB_10ae736d8;
    }
    if (uVar2 - 2 < 2) {
LAB_10ae73698:
      pbVar11 = abStack_f8;
      pbStack_108 = pbVar11;
      func_0x00010ae8b9f0();
      goto LAB_10ae736dc;
    }
    param_3 = param_3 & 0xffffffff;
    func_0x00010ae72d88((int)(char)ppbVar4);
LAB_10ae73710:
    ppbVar5 = (byte **)0x1;
  }
  else {
    if (7 < uVar2 - 8) {
      if (uVar2 != 7) goto LAB_10ae73698;
      pbVar11 = auStack_cc;
      do {
        pbVar11 = pbVar11 + -1;
        *pbVar11 = (&DAT_10f3ddedc)[(ulong)ppbVar4 & 0xf];
        bVar1 = (byte **)0xf < ppbVar4;
        ppbVar4 = (byte **)((ulong)ppbVar4 >> 4);
      } while (bVar1);
LAB_10ae736d8:
      ppbVar4 = (byte **)auStack_cc;
      pbStack_108 = pbVar11;
LAB_10ae736dc:
      param_3 = (long)ppbVar4 - (long)pbVar11;
      unaff_x22 = pbVar11;
      uStack_100 = param_3;
      if (((ulong)param_2 & 0xff00) == 0) {
        pbVar6 = pbStack_108;
        func_0x000107c2b990(pbVar12);
      }
      else {
        param_3 = uVar8;
        pbVar9 = pbVar12;
        FUN_10ae72e00(&pbStack_108);
      }
      goto LAB_10ae73710;
    }
    ppbVar5 = &pbStack_118;
    pbVar6 = pbVar12;
    param_3 = uVar8;
    FUN_10ae74500((double)ppbVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_cc._4_8_) {
    return ppbVar5;
  }
  ___stack_chk_fail();
  uStack_128 = 0x10ae73744;
  auStack_15c._4_8_ = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_1a0 = (undefined4)param_3;
  uVar2 = (uint)pbVar6 & 0xff;
  pbVar11 = pbVar6;
  pbVar7 = pbVar9;
  pbStack_1a8 = pbVar6;
  pbStack_150 = unaff_x22;
  uStack_148 = uVar8;
  pbStack_140 = param_2;
  pbStack_138 = pbVar12;
  ppuStack_130 = &puStack_a0;
  if (uVar2 < 7) {
    if (3 < uVar2) {
      if (uVar2 == 4) {
        pbVar12 = auStack_15c;
        do {
          pbVar12 = pbVar12 + -1;
          *pbVar12 = (byte)ppbVar5 & 7 | 0x30;
          bVar1 = (byte **)0x7 < ppbVar5;
          ppbVar5 = (byte **)((ulong)ppbVar5 >> 3);
        } while (bVar1);
      }
      else {
        if (uVar2 == 5) goto LAB_10ae73854;
        pbVar12 = auStack_15c + 1;
        do {
          pbVar10 = pbVar12;
          uVar3 = *(ushort *)(&UNK_10e530083 + ((ulong)ppbVar5 & 0xff) * 2);
          *(ushort *)(pbVar10 + -3) = uVar3;
          bVar1 = (byte **)0xff < ppbVar5;
          ppbVar5 = (byte **)((ulong)ppbVar5 >> 8);
          pbVar12 = pbVar10 + -2;
        } while (bVar1);
        if ((uVar3 & 0xff) != 0x30) {
          pbVar12 = pbVar10 + -3;
        }
      }
LAB_10ae738c8:
      ppbVar5 = (byte **)auStack_15c;
      pbStack_198 = pbVar12;
      goto LAB_10ae738cc;
    }
    if (uVar2 - 2 < 2) goto LAB_10ae7382c;
    uVar8 = param_3 & 0xffffffff;
    func_0x00010ae72d88((int)(char)ppbVar5);
LAB_10ae73900:
    ppbVar4 = (byte **)0x1;
  }
  else {
    if (7 < uVar2 - 8) {
      if (uVar2 == 7) {
        pbVar12 = auStack_15c;
        do {
          pbVar12 = pbVar12 + -1;
          *pbVar12 = (&DAT_10f3ddedc)[(ulong)ppbVar5 & 0xf];
          bVar1 = (byte **)0xf < ppbVar5;
          ppbVar5 = (byte **)((ulong)ppbVar5 >> 4);
        } while (bVar1);
        goto LAB_10ae738c8;
      }
LAB_10ae7382c:
      if ((long)ppbVar5 < 0) {
        abStack_188[0] = 0x2d;
        ppbVar5 = (byte **)-(long)ppbVar5;
      }
LAB_10ae73854:
      pbVar12 = abStack_188;
      pbStack_198 = pbVar12;
      func_0x00010ae8b9f0();
LAB_10ae738cc:
      uVar8 = (long)ppbVar5 - (long)pbVar12;
      unaff_x22 = pbVar12;
      uStack_190 = uVar8;
      if (((ulong)pbVar6 & 0xff00) == 0) {
        pbVar11 = pbStack_198;
        func_0x000107c2b990(pbVar9);
      }
      else {
        uVar8 = param_3 & 0xffffffff;
        pbVar7 = pbVar9;
        FUN_10ae72e00(&pbStack_198);
      }
      goto LAB_10ae73900;
    }
    ppbVar4 = &pbStack_1a8;
    pbVar11 = pbVar9;
    uVar8 = param_3;
    FUN_10ae74500((double)(long)ppbVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_15c._4_8_) {
    return ppbVar4;
  }
  ___stack_chk_fail();
  uStack_1b8 = 0x10ae73934;
  auStack_1ec._4_8_ = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_230 = (undefined4)uVar8;
  uVar2 = (uint)pbVar11 & 0xff;
  pbStack_238 = pbVar11;
  pbStack_1e0 = unaff_x22;
  uStack_1d8 = param_3;
  pbStack_1d0 = pbVar6;
  pbStack_1c8 = pbVar9;
  pppuStack_1c0 = &ppuStack_130;
  if (uVar2 < 7) {
    if (3 < uVar2) {
      if (uVar2 == 4) {
        pbVar12 = auStack_1ec;
        do {
          pbVar12 = pbVar12 + -1;
          *pbVar12 = (byte)ppbVar4 & 7 | 0x30;
          bVar1 = (byte **)0x7 < ppbVar4;
          ppbVar4 = (byte **)((ulong)ppbVar4 >> 3);
        } while (bVar1);
      }
      else {
        if (uVar2 == 5) goto LAB_10ae73a50;
        pbVar12 = auStack_1ec + 1;
        do {
          pbVar6 = pbVar12;
          uVar3 = *(ushort *)(&UNK_10e530083 + ((ulong)ppbVar4 & 0xff) * 2);
          *(ushort *)(pbVar6 + -3) = uVar3;
          bVar1 = (byte **)0xff < ppbVar4;
          ppbVar4 = (byte **)((ulong)ppbVar4 >> 8);
          pbVar12 = pbVar6 + -2;
        } while (bVar1);
        if ((uVar3 & 0xff) != 0x30) {
          pbVar12 = pbVar6 + -3;
        }
      }
      goto LAB_10ae73a90;
    }
    if (uVar2 - 2 < 2) {
LAB_10ae73a50:
      pbVar12 = abStack_218;
      pbStack_228 = pbVar12;
      func_0x00010ae8b9f0();
      goto LAB_10ae73a94;
    }
    func_0x00010ae72d88((int)(char)ppbVar4,pbVar11,uVar8 & 0xffffffff,pbVar7);
  }
  else {
    if (uVar2 - 8 < 8) {
      ppbVar5 = &pbStack_238;
      FUN_10ae74500((double)ppbVar4,ppbVar5);
      pbVar11 = pbVar7;
      goto LAB_10ae73acc;
    }
    if (uVar2 != 7) goto LAB_10ae73a50;
    pbVar12 = auStack_1ec;
    do {
      pbVar12 = pbVar12 + -1;
      *pbVar12 = (&DAT_10f3ddedc)[(ulong)ppbVar4 & 0xf];
      bVar1 = (byte **)0xf < ppbVar4;
      ppbVar4 = (byte **)((ulong)ppbVar4 >> 4);
    } while (bVar1);
LAB_10ae73a90:
    ppbVar4 = (byte **)auStack_1ec;
    pbStack_228 = pbVar12;
LAB_10ae73a94:
    lStack_220 = (long)ppbVar4 - (long)pbVar12;
    if (((ulong)pbVar11 & 0xff00) == 0) {
      pbVar11 = pbStack_228;
      func_0x000107c2b990(pbVar7);
    }
    else {
      FUN_10ae72e00(&pbStack_228,pbVar11,uVar8 & 0xffffffff,pbVar7);
    }
  }
  ppbVar5 = (byte **)0x1;
LAB_10ae73acc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != auStack_1ec._4_8_) {
    ___stack_chk_fail();
    if (((ulong)pbVar11 & 0xff) == 0x11) {
      FUN_10ae73b30();
    }
    return (byte **)(ulong)(((ulong)pbVar11 & 0xff) == 0x11);
  }
  return ppbVar5;
}



/* Entry: 10ae73f48; end: 10ae74037;  */

byte ** FUN_10ae73f48(byte *param_1,byte *param_2,uint param_3,byte *param_4)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  byte **ppbVar4;
  byte **ppbVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *unaff_x22;
  byte *pbStack_1a8;
  undefined4 uStack_1a0;
  byte *pbStack_198;
  long lStack_190;
  byte abStack_188 [42];
  undefined2 uStack_15e;
  undefined1 auStack_15c [12];
  byte *pbStack_150;
  ulong uStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  undefined1 **ppuStack_130;
  undefined8 uStack_128;
  byte *pbStack_118;
  undefined4 uStack_110;
  byte *pbStack_108;
  ulong uStack_100;
  byte abStack_f8 [42];
  undefined2 uStack_ce;
  undefined1 auStack_cc [12];
  byte *pbStack_c0;
  ulong uStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  byte *pbStack_88;
  uint uStack_80;
  byte *pbStack_78;
  ulong uStack_70;
  byte abStack_68 [42];
  undefined2 uStack_3e;
  byte bStack_3c;
  byte abStack_3b [3];
  long lStack_38;
  
  if (((ulong)param_2 & 0xff) == 0x13) {
    if ((byte *)0x7ffffffe < param_1) {
      param_1 = (byte *)0x7fffffff;
    }
    *(int *)param_4 = (int)param_1;
    return (byte **)0x1;
  }
  if ((2L << ((ulong)param_2 & 0x3f) & 0x9fffaU) == 0) {
    return (byte **)0x0;
  }
  uVar9 = (ulong)param_3;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = (uint)param_2 & 0xff;
  pbVar13 = param_2;
  pbVar10 = param_4;
  pbStack_88 = param_2;
  uStack_80 = param_3;
  if (uVar2 < 7) {
    if (3 < uVar2) {
      if (uVar2 == 4) {
        unaff_x22 = &bStack_3c;
        do {
          unaff_x22 = unaff_x22 + -1;
          *unaff_x22 = (byte)param_1 & 7 | 0x30;
          bVar1 = (byte *)0x7 < param_1;
          param_1 = (byte *)((ulong)param_1 >> 3);
        } while (bVar1);
      }
      else {
        if (uVar2 == 5) goto LAB_10ae73698;
        pbVar6 = abStack_3b;
        do {
          pbVar7 = pbVar6;
          uVar3 = *(ushort *)(&UNK_10e530083 + ((ulong)param_1 & 0xff) * 2);
          *(ushort *)(pbVar7 + -3) = uVar3;
          bVar1 = (byte *)0xff < param_1;
          param_1 = (byte *)((ulong)param_1 >> 8);
          pbVar6 = pbVar7 + -2;
        } while (bVar1);
        unaff_x22 = pbVar7 + -2;
        if ((uVar3 & 0xff) != 0x30) {
          unaff_x22 = pbVar7 + -3;
        }
      }
      goto LAB_10ae736d8;
    }
    if (uVar2 - 2 < 2) {
LAB_10ae73698:
      unaff_x22 = abStack_68;
      pbStack_78 = unaff_x22;
      func_0x00010ae8b9f0(param_1,unaff_x22);
      goto LAB_10ae736dc;
    }
    uVar8 = (ulong)param_3;
    func_0x00010ae72d88((int)(char)param_1);
LAB_10ae73710:
    ppbVar5 = (byte **)0x1;
  }
  else {
    if (7 < uVar2 - 8) {
      if (uVar2 != 7) goto LAB_10ae73698;
      unaff_x22 = &bStack_3c;
      do {
        unaff_x22 = unaff_x22 + -1;
        *unaff_x22 = (&DAT_10f3ddedc)[(ulong)param_1 & 0xf];
        bVar1 = (byte *)0xf < param_1;
        param_1 = (byte *)((ulong)param_1 >> 4);
      } while (bVar1);
LAB_10ae736d8:
      param_1 = &bStack_3c;
      pbStack_78 = unaff_x22;
LAB_10ae736dc:
      uVar8 = (long)param_1 - (long)unaff_x22;
      uStack_70 = uVar8;
      if (((ulong)param_2 & 0xff00) == 0) {
        pbVar13 = pbStack_78;
        func_0x000107c2b990(param_4);
      }
      else {
        uVar8 = uVar9;
        pbVar10 = param_4;
        FUN_10ae72e00(&pbStack_78);
      }
      goto LAB_10ae73710;
    }
    ppbVar5 = &pbStack_88;
    pbVar13 = param_4;
    uVar8 = uVar9;
    FUN_10ae74500((double)param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppbVar5;
  }
  ___stack_chk_fail();
  uStack_98 = 0x10ae73744;
  auStack_cc._4_8_ = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_110 = (undefined4)uVar8;
  uVar2 = (uint)pbVar13 & 0xff;
  pbVar6 = pbVar13;
  pbVar7 = pbVar10;
  pbStack_118 = pbVar13;
  pbStack_c0 = unaff_x22;
  uStack_b8 = uVar9;
  pbStack_b0 = param_2;
  pbStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (uVar2 < 7) {
    if (3 < uVar2) {
      if (uVar2 == 4) {
        pbVar12 = auStack_cc;
        do {
          pbVar12 = pbVar12 + -1;
          *pbVar12 = (byte)ppbVar5 & 7 | 0x30;
          bVar1 = (byte **)0x7 < ppbVar5;
          ppbVar5 = (byte **)((ulong)ppbVar5 >> 3);
        } while (bVar1);
      }
      else {
        if (uVar2 == 5) goto LAB_10ae73854;
        pbVar12 = auStack_cc + 1;
        do {
          pbVar11 = pbVar12;
          uVar3 = *(ushort *)(&UNK_10e530083 + ((ulong)ppbVar5 & 0xff) * 2);
          *(ushort *)(pbVar11 + -3) = uVar3;
          bVar1 = (byte **)0xff < ppbVar5;
          ppbVar5 = (byte **)((ulong)ppbVar5 >> 8);
          pbVar12 = pbVar11 + -2;
        } while (bVar1);
        if ((uVar3 & 0xff) != 0x30) {
          pbVar12 = pbVar11 + -3;
        }
      }
LAB_10ae738c8:
      ppbVar5 = (byte **)auStack_cc;
      pbStack_108 = pbVar12;
      goto LAB_10ae738cc;
    }
    if (uVar2 - 2 < 2) goto LAB_10ae7382c;
    uVar9 = uVar8 & 0xffffffff;
    func_0x00010ae72d88((int)(char)ppbVar5);
LAB_10ae73900:
    ppbVar4 = (byte **)0x1;
  }
  else {
    if (7 < uVar2 - 8) {
      if (uVar2 == 7) {
        pbVar12 = auStack_cc;
        do {
          pbVar12 = pbVar12 + -1;
          *pbVar12 = (&DAT_10f3ddedc)[(ulong)ppbVar5 & 0xf];
          bVar1 = (byte **)0xf < ppbVar5;
          ppbVar5 = (byte **)((ulong)ppbVar5 >> 4);
        } while (bVar1);
        goto LAB_10ae738c8;
      }
LAB_10ae7382c:
      if ((long)ppbVar5 < 0) {
        abStack_f8[0] = 0x2d;
        ppbVar5 = (byte **)-(long)ppbVar5;
      }
LAB_10ae73854:
      pbVar12 = abStack_f8;
      pbStack_108 = pbVar12;
      func_0x00010ae8b9f0();
LAB_10ae738cc:
      uVar9 = (long)ppbVar5 - (long)pbVar12;
      unaff_x22 = pbVar12;
      uStack_100 = uVar9;
      if (((ulong)pbVar13 & 0xff00) == 0) {
        pbVar6 = pbStack_108;
        func_0x000107c2b990(pbVar10);
      }
      else {
        uVar9 = uVar8 & 0xffffffff;
        pbVar7 = pbVar10;
        FUN_10ae72e00(&pbStack_108);
      }
      goto LAB_10ae73900;
    }
    ppbVar4 = &pbStack_118;
    pbVar6 = pbVar10;
    uVar9 = uVar8;
    FUN_10ae74500((double)(long)ppbVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_cc._4_8_) {
    return ppbVar4;
  }
  ___stack_chk_fail();
  uStack_128 = 0x10ae73934;
  auStack_15c._4_8_ = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_1a0 = (undefined4)uVar9;
  uVar2 = (uint)pbVar6 & 0xff;
  pbStack_1a8 = pbVar6;
  pbStack_150 = unaff_x22;
  uStack_148 = uVar8;
  pbStack_140 = pbVar13;
  pbStack_138 = pbVar10;
  ppuStack_130 = &puStack_a0;
  if (uVar2 < 7) {
    if (3 < uVar2) {
      if (uVar2 == 4) {
        pbVar13 = auStack_15c;
        do {
          pbVar13 = pbVar13 + -1;
          *pbVar13 = (byte)ppbVar4 & 7 | 0x30;
          bVar1 = (byte **)0x7 < ppbVar4;
          ppbVar4 = (byte **)((ulong)ppbVar4 >> 3);
        } while (bVar1);
      }
      else {
        if (uVar2 == 5) goto LAB_10ae73a50;
        pbVar13 = auStack_15c + 1;
        do {
          pbVar10 = pbVar13;
          uVar3 = *(ushort *)(&UNK_10e530083 + ((ulong)ppbVar4 & 0xff) * 2);
          *(ushort *)(pbVar10 + -3) = uVar3;
          bVar1 = (byte **)0xff < ppbVar4;
          ppbVar4 = (byte **)((ulong)ppbVar4 >> 8);
          pbVar13 = pbVar10 + -2;
        } while (bVar1);
        if ((uVar3 & 0xff) != 0x30) {
          pbVar13 = pbVar10 + -3;
        }
      }
      goto LAB_10ae73a90;
    }
    if (uVar2 - 2 < 2) {
LAB_10ae73a50:
      pbVar13 = abStack_188;
      pbStack_198 = pbVar13;
      func_0x00010ae8b9f0();
      goto LAB_10ae73a94;
    }
    func_0x00010ae72d88((int)(char)ppbVar4,pbVar6,uVar9 & 0xffffffff,pbVar7);
  }
  else {
    if (uVar2 - 8 < 8) {
      ppbVar5 = &pbStack_1a8;
      FUN_10ae74500((double)ppbVar4,ppbVar5);
      pbVar6 = pbVar7;
      goto LAB_10ae73acc;
    }
    if (uVar2 != 7) goto LAB_10ae73a50;
    pbVar13 = auStack_15c;
    do {
      pbVar13 = pbVar13 + -1;
      *pbVar13 = (&DAT_10f3ddedc)[(ulong)ppbVar4 & 0xf];
      bVar1 = (byte **)0xf < ppbVar4;
      ppbVar4 = (byte **)((ulong)ppbVar4 >> 4);
    } while (bVar1);
LAB_10ae73a90:
    ppbVar4 = (byte **)auStack_15c;
    pbStack_198 = pbVar13;
LAB_10ae73a94:
    lStack_190 = (long)ppbVar4 - (long)pbVar13;
    if (((ulong)pbVar6 & 0xff00) == 0) {
      pbVar6 = pbStack_198;
      func_0x000107c2b990(pbVar7);
    }
    else {
      FUN_10ae72e00(&pbStack_198,pbVar6,uVar9 & 0xffffffff,pbVar7);
    }
  }
  ppbVar5 = (byte **)0x1;
LAB_10ae73acc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != auStack_15c._4_8_) {
    ___stack_chk_fail();
    if (((ulong)pbVar6 & 0xff) == 0x11) {
      FUN_10ae73b30();
    }
    return (byte **)(ulong)(((ulong)pbVar6 & 0xff) == 0x11);
  }
  return ppbVar5;
}



/* Entry: 10ae74038; end: 10ae7419b;  */

uint FUN_10ae74038(undefined4 param_1,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  if (((param_2 & 0xff) != 0x13) && ((2L << (param_2 & 0x3f) & 0x9fe00U) != 0)) {
    func_0x00010ae74090(param_1,param_2,param_3,param_4);
    return (uint)param_2 & 0xff;
  }
  return 0;
}



/* Entry: 10ae7419c; end: 10ae7425f;  */

void FUN_10ae7419c(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)param_1[3];
    param_1[2] = param_1[2] + param_2;
    puVar1 = param_1 + 0x84;
    uVar6 = (long)puVar1 - (long)puVar2;
    puVar3 = puVar2;
    if (uVar6 < param_2) {
      puVar3 = param_1 + 4;
      do {
        puVar5 = puVar1;
        if (puVar1 != puVar2) {
          _memset(puVar2,param_3,uVar6);
          lVar4 = param_1[3];
          param_1[3] = (undefined8 *)(lVar4 + uVar6);
          puVar5 = (undefined8 *)(lVar4 + uVar6);
        }
        param_2 = param_2 - uVar6;
        (*(code *)param_1[1])(*param_1,puVar3,(long)puVar5 - (long)puVar3);
        param_1[3] = puVar3;
        uVar6 = 0x400;
        puVar2 = puVar3;
      } while (0x400 < param_2);
    }
    _memset(puVar3,param_3,param_2);
    param_1[3] = param_1[3] + param_2;
  }
  return;
}



/* Entry: 10ae74260; end: 10ae742c3;  */

ulong FUN_10ae74260(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)*(char *)(param_1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  uVar1 = param_1;
  func_0x000107c2b998(param_1,&UNK_1004d54ec,param_2,param_3,param_4,param_5);
  if ((uVar1 & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
              (param_1,lVar2,0xffffffffffffffff);
  }
  return param_1;
}



/* Entry: 10ae742c4; end: 10ae74397;  */

ulong FUN_10ae742c4(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar1 = param_2 - 1;
  uStack_40 = 0;
  if (param_2 != 0) {
    uStack_40 = uVar1;
  }
  uStack_38 = 0;
  plVar2 = &lStack_48;
  lStack_48 = param_1;
  func_0x000107c2b998(plVar2,0x10ae74340);
  if (((ulong)plVar2 & 1) == 0) {
    ___error();
    *(undefined4 *)plVar2 = 0x16;
    uStack_38 = 0xffffffff;
  }
  else if (param_2 != 0) {
    if (uStack_38 <= uVar1) {
      uVar1 = uStack_38;
    }
    *(undefined1 *)(param_1 + uVar1) = 0;
  }
  return uStack_38;
}



/* Entry: 10ae74398; end: 10ae74473;  */

void FUN_10ae74398(undefined8 *param_1,uint param_2)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = &UNK_10f6d192b;
  if ((param_2 & 1) != 0) {
    puVar1 = &UNK_10f6d1929;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,puVar1,param_2 & 1);
  puVar1 = &UNK_10f6d192b;
  if ((param_2 & 2) != 0) {
    puVar1 = &UNK_10f6d192c;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,puVar1,(param_2 & 2) >> 1);
  puVar1 = &UNK_10f6d192b;
  if ((param_2 & 4) != 0) {
    puVar1 = &UNK_10f6d192e;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,puVar1,(param_2 & 4) >> 2);
  puVar1 = &UNK_10f6d192b;
  if ((param_2 & 8) != 0) {
    puVar1 = &UNK_10f6d1930;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,puVar1,(param_2 & 8) >> 3);
  puVar1 = &UNK_10f6d192b;
  if ((param_2 & 0x10) != 0) {
    puVar1 = &UNK_10f6d1932;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,puVar1,(param_2 & 0x10) >> 4);
  return;
}



/* Entry: 10ae74474; end: 10ae744ff;  */

undefined8
FUN_10ae74474(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4,uint param_5,
             uint param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU));
  uVar1 = param_3;
  if (param_5 <= param_3) {
    uVar1 = (ulong)param_5;
  }
  if (-1 < (int)param_5) {
    param_3 = uVar1;
  }
  lVar2 = 0;
  if (param_3 <= uVar3) {
    lVar2 = uVar3 - param_3;
  }
  if ((param_6 & 1) == 0) {
    FUN_10ae7419c(param_1,lVar2,0x20);
    func_0x000107c2b990(param_1,param_2,param_3);
  }
  else {
    func_0x000107c2b990(param_1,param_2,param_3);
    FUN_10ae7419c(param_1,lVar2,0x20);
  }
  return 1;
}



/* Entry: 10ae74500; end: 10ae74cfb;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_10ae74500(double param_1,byte *param_2,byte *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  char *pcVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  byte bVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  char *pcVar22;
  ulong uVar23;
  byte *pbVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  byte *pbVar30;
  byte *pbVar31;
  double dVar32;
  byte abStack_150 [8];
  ulong uStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  uint uStack_12c;
  undefined1 auStack_128 [2];
  undefined1 auStack_126 [38];
  byte abStack_100 [48];
  undefined1 *puStack_d0;
  char *pcStack_c8;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 auStack_75 [13];
  long lStack_68;
  
  pbVar19 = abStack_150;
  pbVar30 = abStack_150;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((long)param_1 < 0) {
    pbVar31 = (byte *)0x2d;
    dVar32 = -param_1;
LAB_10ae7457c:
    puVar12 = (undefined4 *)((long)auStack_128 + 1);
    _auStack_128 = CONCAT31(stack0xfffffffffffffed9,(char)pbVar31);
  }
  else {
    dVar32 = param_1;
    if ((param_2[1] >> 1 & 1) != 0) {
      pbVar31 = (byte *)0x2b;
      goto LAB_10ae7457c;
    }
    if ((param_2[1] >> 2 & 1) != 0) {
      pbVar31 = (byte *)0x20;
      goto LAB_10ae7457c;
    }
    pbVar31 = (byte *)0x0;
    puVar12 = (undefined4 *)auStack_128;
  }
  if (NAN(dVar32)) {
    bVar7 = (*param_2 & 0xf9) == 9 || *param_2 == 7;
    pcVar13 = "nan";
    pcVar22 = "NAN";
LAB_10ae745c4:
    if (!bVar7) {
      pcVar22 = pcVar13;
    }
    *(undefined2 *)puVar12 = *(undefined2 *)pcVar22;
    *(char *)((long)puVar12 + 2) = pcVar22[2];
    pbVar14 = auStack_128;
    uVar17 = (long)puVar12 + (3 - (long)auStack_128);
    pbVar8 = param_3;
    FUN_10ae74474();
    uVar20 = SUB81(pbVar14,0);
    param_4 = uVar17;
    if (((ulong)pbVar8 & 1) == 0) goto LAB_10ae74604;
    goto LAB_10ae74c64;
  }
  pbVar14 = param_3;
  if (ABS(dVar32) == INFINITY) {
    bVar7 = (*param_2 & 0xf9) == 9 || *param_2 == 7;
    pcVar13 = "inf";
    pcVar22 = "INF";
    goto LAB_10ae745c4;
  }
LAB_10ae74604:
  uVar20 = SUB81(pbVar14,0);
  uVar3 = *(uint *)(param_2 + 8);
  uVar10 = 6;
  if (-1 < (int)uVar3) {
    uVar10 = uVar3;
  }
  uVar29 = (ulong)uVar10;
  uStack_12c = 0;
  _frexp(auStack_128);
  _ldexp(0x35);
  uVar26 = _auStack_128 - 0x35;
  uVar17 = (ulong)uVar26;
  pbVar8 = (byte *)(long)dVar32;
  bVar4 = *param_2;
  bVar16 = bVar4 & 0xfe;
  bVar5 = (byte)pbVar31;
  pbVar14 = (byte *)0x0;
  if (bVar16 < 0xc) {
    if (bVar16 != 8) {
      if (bVar16 != 10) goto LAB_10ae74c68;
      FUN_10ae76048(pbVar8,uVar17,uVar29,auStack_128,&uStack_12c);
      if (((ulong)pbVar8 & 1) == 0) {
        FUN_10ae76468(param_1);
        uVar20 = SUB81(param_3,0);
        pbVar8 = param_2;
        param_4 = uVar29;
        pbVar14 = param_2;
        goto LAB_10ae74c68;
      }
      if (((param_2[1] >> 3 & 1) == 0) && (pcStack_c8[-1] == '.')) {
        pcStack_c8 = pcStack_c8 + -1;
      }
      uVar17 = (ulong)uStack_12c;
LAB_10ae749e0:
      uVar11 = 0x45;
      if ((*param_2 & 0xf9) != 9 && *param_2 != 7) {
        uVar11 = 0x65;
      }
      FUN_10ae74cfc(uVar17,uVar11,auStack_128);
      goto LAB_10ae74a0c;
    }
    if (_auStack_128 < 0x35) {
      if (0xffffff7f < uVar26) {
        abStack_100[2] = 0x2e;
        uVar17 = (ulong)pbVar8 >> ((ulong)(0x35 - _auStack_128) & 0x3f);
        if (uVar26 < 0xffffffc1) {
          uVar17 = 0;
        }
        pbVar30 = abStack_100 + 1;
        do {
          pbVar31 = pbVar30;
          pbVar30 = pbVar31 + -1;
          *pbVar31 = (char)uVar17 + (char)(uVar17 / 10) * -10 | 0x30;
          bVar7 = 9 < uVar17;
          uVar17 = uVar17 / 10;
        } while (bVar7);
        pbVar14 = abStack_100 + 3;
        *pbVar30 = 0x30;
        if (_auStack_128 < -0xb) {
          abStack_150[0] = bVar5;
          uStack_148 = uVar29;
          pbStack_140 = param_2;
          pbStack_138 = param_3;
          func_0x00010ae75b5c(pbVar8,0,pbVar14,(ulong)(0x35 - _auStack_128),uVar29);
        }
        else {
          uVar23 = (long)pbVar8 << ((ulong)(_auStack_128 + 0xb) & 0x3f);
          pbVar8 = pbVar14;
          uVar18 = uVar23;
          uVar17 = uVar29;
          if (uVar10 != 0) {
            do {
              pbVar8 = pbVar14;
              abStack_150[0] = bVar5;
              uStack_148 = uVar29;
              pbStack_140 = param_2;
              pbStack_138 = param_3;
              if (uVar18 == 0) goto LAB_10ae74b08;
              uVar23 = uVar18 * 10;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar18;
              pbVar8 = pbVar14 + 1;
              *pbVar14 = SUB161(auVar6 * ZEXT816(10),8) | 0x30;
              uVar17 = uVar17 - 1;
              pbVar14 = pbVar8;
              uVar18 = uVar23;
            } while (uVar17 != 0);
          }
          abStack_150[0] = bVar5;
          uStack_148 = uVar29;
          pbStack_140 = param_2;
          pbStack_138 = param_3;
          if ((long)uVar23 < 0) {
            pbVar14 = pbVar8;
            if (uVar23 == 0x8000000000000000) {
              pbVar14 = pbVar8 + -1 + -(ulong)(pbVar8[-1] == 0x2e);
              bVar16 = *pbVar14;
              if ((bVar16 & 0x81) == 1) {
                do {
                  if (bVar16 != 0x2e) {
                    if (bVar16 != 0x39) goto LAB_10ae74b00;
                    *pbVar14 = 0x30;
                  }
                  pbVar14 = pbVar14 + -1;
                  bVar16 = *pbVar14;
                } while( true );
              }
            }
            else {
              while( true ) {
                do {
                  pbVar14 = pbVar14 + -1;
                  bVar16 = *pbVar14;
                } while (bVar16 == 0x2e);
                if (bVar16 != 0x39) break;
                *pbVar14 = 0x30;
              }
LAB_10ae74b00:
              *pbVar14 = bVar16 + 1;
            }
          }
        }
LAB_10ae74b08:
        pbVar14 = pbVar8;
        uVar29 = uStack_148;
        if (*pbVar30 != 0x30) {
          pbVar31 = pbVar30;
        }
        goto LAB_10ae74b18;
      }
      uVar17 = (ulong)(0x35 - _auStack_128);
      uVar20 = 0;
      abStack_150[0] = bVar5;
      uStack_148 = uVar29;
      pbStack_140 = param_2;
      pbStack_138 = param_3;
      FUN_10ae74f40();
    }
    else {
      iVar9 = (_auStack_128 - (int)LZCOUNT(pbVar8)) + 0xb;
      if (iVar9 < 0x81) {
        abStack_100[2] = 0x2e;
        pbVar14 = abStack_100 + 3;
        if (iVar9 < 0x41) {
          pbVar31 = abStack_100 + 2;
          uVar17 = (long)pbVar8 << (uVar17 & 0x3f);
          do {
            pbVar31 = pbVar31 + -1;
            *pbVar31 = (char)uVar17 + (char)(uVar17 / 10) * -10 | 0x30;
            bVar7 = 9 < uVar17;
            uVar17 = uVar17 / 10;
            abStack_150[0] = bVar5;
            uStack_148 = uVar29;
            pbStack_140 = param_2;
            pbStack_138 = param_3;
          } while (bVar7);
        }
        else {
          pbVar24 = (byte *)((long)pbVar8 << (uVar17 & 0x3f));
          bVar7 = (uVar26 & 0x40) == 0;
          pbVar30 = pbVar24;
          if (bVar7) {
            pbVar30 = (byte *)(((ulong)pbVar8 >> 1) >> ((ulong)~uVar26 & 0x3f));
          }
          pbVar31 = (byte *)0x0;
          if (bVar7) {
            pbVar31 = pbVar24;
          }
          abStack_150[0] = bVar5;
          uStack_148 = uVar29;
          pbStack_140 = param_2;
          pbStack_138 = param_3;
          FUN_10ae75abc(pbVar31,pbVar30,abStack_100 + 2);
        }
LAB_10ae74b18:
        uVar17 = (long)pbVar14 - (long)pbVar31;
        if ((uVar29 == 0) && ((pbStack_140[1] >> 3 & 1) == 0)) {
          uVar17 = uVar17 - 1;
        }
        FUN_10ae75ca8();
        uVar20 = SUB81(pbVar31,0);
        pbVar8 = pbVar19;
      }
      else {
        uVar20 = 0;
        abStack_150[0] = bVar5;
        uStack_148 = uVar29;
        pbStack_140 = param_2;
        pbStack_138 = param_3;
        FUN_10ae74e98();
      }
    }
  }
  else {
    if (bVar16 != 0xc) {
      if (bVar16 != 0xe) goto LAB_10ae74c68;
      iVar9 = _auStack_128 + 0xb;
      if (0 < (long)pbVar8) {
        iVar1 = iVar9;
        if (-0x3ff < iVar9) {
          iVar1 = -0x3fe;
        }
        do {
          if (iVar9 < -0x3fd) {
            uVar18 = 0;
            uVar10 = 0xfffffc02;
            uVar17 = (ulong)pbVar8 >> ((ulong)(-iVar1 - 0x3fe) & 0x3f);
            goto joined_r0x00010ae74b68;
          }
          pbVar8 = (byte *)((long)pbVar8 * 2);
          iVar9 = iVar9 + -1;
        } while (0 < (long)pbVar8);
      }
      uVar18 = (ulong)pbVar8 >> 0x3f;
      uVar10 = 0;
      if (pbVar8 != (byte *)0x0) {
        uVar10 = iVar9 - 1;
      }
      uVar17 = (long)pbVar8 << 1;
joined_r0x00010ae74b68:
      uVar23 = uVar17;
      if (-1 < (int)uVar3) {
        uVar25 = 0;
        if (uVar29 < 0x11) {
          uVar25 = 0x10 - uVar29;
        }
        if (uVar3 < 0x10) {
          uVar23 = uVar25 * 4;
          uVar27 = uVar17 & 0xffffffffffffffffU >> (uVar25 * -4 & 0x3f);
          uVar28 = 8L << ((ulong)((int)uVar23 - 4) & 0x3f);
          if (uVar27 == uVar28) {
            uVar26 = (uint)uVar18;
            if (uVar25 != 0x10) {
              uVar26 = (uint)((uVar17 & 0xfL << (uVar23 & 0x3f)) >> (uVar23 & 0x3f));
            }
            if ((uVar26 & 1) != 0) {
LAB_10ae74a2c:
              lVar2 = 0;
              if (uVar25 < 0x10) {
                lVar2 = 1L << (uVar23 & 0x3f);
              }
              bVar7 = (long)uVar17 < 0;
              uVar17 = uVar17 + lVar2;
              uVar26 = (uint)(0xf < uVar25);
              if (bVar7 && -1 < (long)uVar17) {
                uVar26 = 1;
              }
              uVar18 = (ulong)((uint)uVar18 + uVar26);
            }
          }
          else if (uVar28 < uVar27) goto LAB_10ae74a2c;
        }
        else {
          uVar25 = 0;
        }
        uVar23 = 0xffffffffffffffff;
        if (uVar3 < 0x10) {
          uVar23 = ~(0xffffffffffffffffU >> (uVar25 * -4 & 0x3f));
        }
        uVar23 = uVar23 & uVar17;
        uVar17 = uVar29;
      }
      lVar2 = 0;
      if (bVar4 != 0xf) {
        lVar2 = 0x10;
      }
      uStack_79 = 0x30;
      uStack_78 = 0x58;
      if (bVar4 != 0xf) {
        uStack_78 = 0x78;
      }
      uStack_77 = (&UNK_10f6d1934)[uVar18 + lVar2];
      if ((uVar17 == 0) && ((param_2[1] >> 3 & 1) == 0)) {
        puVar15 = &uStack_76;
      }
      else {
        puVar15 = auStack_75;
        uStack_76 = 0x2e;
      }
      for (; uVar23 != 0; uVar23 = uVar23 << 4) {
        *puVar15 = (&UNK_10f6d1934)[(uVar23 >> 0x3c) + lVar2];
        puVar15 = puVar15 + 1;
      }
      uVar17 = (long)puVar15 - (long)&uStack_79;
      uVar20 = 0x50;
      if (bVar4 != 0xf) {
        uVar20 = 0x70;
      }
      uVar21 = 0x2b;
      if (0x7fffffff < uVar10) {
        uVar21 = 0x2d;
      }
      auStack_128 = (undefined1  [2])CONCAT11(uVar21,uVar20);
      uVar3 = -uVar10;
      if (-1 < (int)uVar10) {
        uVar3 = uVar10;
      }
      abStack_150[0] = bVar5;
      uStack_148 = uVar29;
      pbStack_140 = param_2;
      pbStack_138 = param_3;
      func_0x000107c2ba2c(uVar3,(long)auStack_128 + 2);
      _strlen(auStack_128);
      uVar20 = SUB81(&uStack_79,0);
      FUN_10ae75ca8();
      pbVar8 = pbVar30;
      goto LAB_10ae74c64;
    }
    if (uVar10 == 0) {
      uVar29 = 1;
    }
    param_4 = uVar29 - 1;
    FUN_10ae76048(pbVar8,uVar17,param_4,auStack_128,&uStack_12c);
    if (((ulong)pbVar8 & 1) == 0) {
      FUN_10ae76468(param_1);
      uVar20 = SUB81(param_3,0);
      pbVar8 = param_2;
      pbVar14 = param_2;
      goto LAB_10ae74c68;
    }
    uVar17 = (ulong)uStack_12c;
    if ((int)uStack_12c < 0) {
      if (0xfffffffb < uStack_12c) {
        puStack_d0[1] = *puStack_d0;
        puVar15 = puStack_d0;
        for (uVar10 = uStack_12c; uVar10 != 0xffffffff; uVar10 = uVar10 + 1) {
          *puVar15 = 0x30;
          puVar15 = puVar15 + -1;
        }
        uVar17 = 0;
        puStack_d0 = puVar15 + -1;
        *puVar15 = 0x2e;
        *puStack_d0 = 0x30;
      }
    }
    else if ((uVar17 < uVar29) && (uStack_12c != 0)) {
      puVar15 = puStack_d0 + 1;
      uVar20 = *puVar15;
      _memmove(puVar15,puStack_d0 + 2,uVar17);
      puVar15[uVar17] = uVar20;
      uVar17 = 0;
    }
    pcVar13 = pcStack_c8;
    if ((param_2[1] >> 3 & 1) == 0) {
      do {
        pcStack_c8 = pcVar13;
        pcVar13 = pcStack_c8 + -1;
      } while (*pcVar13 == '0');
      if (*pcVar13 == '.') {
        pcStack_c8 = pcVar13;
      }
    }
    if ((int)uVar17 != 0) goto LAB_10ae749e0;
LAB_10ae74a0c:
    uVar17 = (long)pcStack_c8 - (long)puStack_d0;
    puVar15 = puStack_d0;
    FUN_10ae74dd8();
    uVar20 = SUB81(puVar15,0);
    pbVar8 = pbVar31;
  }
LAB_10ae74c64:
  param_4 = uVar17;
  pbVar14 = (byte *)0x1;
LAB_10ae74c68:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    __Unwind_Resume();
    puVar15 = *(undefined1 **)(param_4 + 0x60);
    *(undefined1 **)(param_4 + 0x60) = puVar15 + 1;
    *puVar15 = uVar20;
    puVar15 = *(undefined1 **)(param_4 + 0x60);
    *(undefined1 **)(param_4 + 0x60) = puVar15 + 1;
    uVar10 = (uint)pbVar8;
    uVar20 = 0x2d;
    if (-1 < (int)uVar10) {
      uVar20 = 0x2b;
    }
    uVar3 = -uVar10;
    if (-1 < (int)uVar10) {
      uVar3 = uVar10;
    }
    *puVar15 = uVar20;
    pbVar19 = *(byte **)(param_4 + 0x60);
    *(byte **)(param_4 + 0x60) = pbVar19 + 1;
    if (uVar3 < 100) {
      bVar16 = (byte)((uVar3 & 0xff) / 10);
      *pbVar19 = bVar16 | 0x30;
    }
    else {
      *pbVar19 = (char)(uVar3 / 100) + 0x30;
      bVar16 = (byte)(uVar3 / 10);
      pbVar19 = *(byte **)(param_4 + 0x60);
      *(byte **)(param_4 + 0x60) = pbVar19 + 1;
      *pbVar19 = bVar16 + (char)(((ulong)uVar3 / 10) * 0x1999999a >> 0x20) * -10 | 0x30;
    }
    pbVar19 = *(byte **)(param_4 + 0x60);
    *(byte **)(param_4 + 0x60) = pbVar19 + 1;
    *pbVar19 = (char)uVar3 + bVar16 * -10 | 0x30;
    return pbVar8;
  }
  return pbVar14;
}



/* Entry: 10ae74cfc; end: 10ae74dd7;  */

void FUN_10ae74cfc(uint param_1,undefined1 param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined1 uVar5;
  
  puVar3 = *(undefined1 **)(param_3 + 0x60);
  *(undefined1 **)(param_3 + 0x60) = puVar3 + 1;
  *puVar3 = param_2;
  puVar3 = *(undefined1 **)(param_3 + 0x60);
  *(undefined1 **)(param_3 + 0x60) = puVar3 + 1;
  uVar5 = 0x2d;
  if (-1 < (int)param_1) {
    uVar5 = 0x2b;
  }
  uVar1 = -param_1;
  if (-1 < (int)param_1) {
    uVar1 = param_1;
  }
  *puVar3 = uVar5;
  pbVar4 = *(byte **)(param_3 + 0x60);
  *(byte **)(param_3 + 0x60) = pbVar4 + 1;
  if (uVar1 < 100) {
    bVar2 = (byte)((uVar1 & 0xff) / 10);
    *pbVar4 = bVar2 | 0x30;
  }
  else {
    *pbVar4 = (char)(uVar1 / 100) + 0x30;
    bVar2 = (byte)(uVar1 / 10);
    pbVar4 = *(byte **)(param_3 + 0x60);
    *(byte **)(param_3 + 0x60) = pbVar4 + 1;
    *pbVar4 = bVar2 + (char)(((ulong)uVar1 / 10) * 0x1999999a >> 0x20) * -10 | 0x30;
  }
  pbVar4 = *(byte **)(param_3 + 0x60);
  *(byte **)(param_3 + 0x60) = pbVar4 + 1;
  *pbVar4 = (char)uVar1 + bVar2 * -10 | 0x30;
  return;
}



/* Entry: 10ae74dd8; end: 10ae74e97;  */

void FUN_10ae74dd8(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4,uint param_5,
                  undefined8 *param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar9 = param_3;
  if ((int)param_1 != 0) {
    uVar9 = param_3 + 1;
  }
  uVar2 = 0;
  if (uVar9 <= param_5) {
    uVar2 = param_5 - uVar9;
  }
  if (0x7fffffff < param_5) {
    uVar2 = 0;
  }
  uVar9 = uVar2;
  if ((param_4 & 0x11) != 0) {
    uVar9 = 0;
  }
  FUN_10ae7419c(param_6,uVar9,0x20);
  if ((int)param_1 != 0) {
    FUN_10ae7419c(param_6,1,param_1);
  }
  uVar9 = 0;
  if ((param_4 & 0x10) != 0) {
    uVar9 = uVar2;
  }
  bVar3 = (param_4 & 1) != 0;
  if (bVar3) {
    uVar9 = 0;
  }
  uVar8 = 0;
  if (bVar3) {
    uVar8 = uVar2;
  }
  FUN_10ae7419c(param_6,uVar9,0x30);
  func_0x000107c2b990(param_6,param_2,param_3);
  if (uVar8 != 0) {
    puVar4 = (undefined8 *)param_6[3];
    param_6[2] = param_6[2] + uVar8;
    puVar1 = param_6 + 0x84;
    uVar9 = (long)puVar1 - (long)puVar4;
    puVar5 = puVar4;
    if (uVar9 < uVar8) {
      puVar5 = param_6 + 4;
      do {
        puVar7 = puVar1;
        if (puVar1 != puVar4) {
          _memset(puVar4,0x20,uVar9);
          lVar6 = param_6[3];
          param_6[3] = (undefined8 *)(lVar6 + uVar9);
          puVar7 = (undefined8 *)(lVar6 + uVar9);
        }
        uVar8 = uVar8 - uVar9;
        (*(code *)param_6[1])(*param_6,puVar5,(long)puVar7 - (long)puVar5);
        param_6[3] = puVar5;
        uVar9 = 0x400;
        puVar4 = puVar5;
      } while (0x400 < uVar8);
    }
    _memset(puVar5,0x20,uVar8);
    param_6[3] = param_6[3] + uVar8;
  }
  return;
}



/* Entry: 10ae74e98; end: 10ae74f3f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ae74e98(undefined8 param_1,undefined8 param_2,int param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  bool bVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  long *plVar17;
  undefined8 *puVar18;
  code ***pppcVar19;
  code *pcVar20;
  code *pcVar21;
  undefined1 *puVar22;
  code *pcVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  char *pcVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  undefined4 *puVar33;
  long lVar35;
  ulong uVar36;
  code *pcVar37;
  code *pcVar38;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar39;
  code *pcVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  byte abStack_2130 [7680];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_128;
  undefined8 *******pppppppuStack_110;
  code *pcStack_108;
  undefined1 auStack_100 [8];
  code *pcStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code **ppcStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  code ***pppcStack_c8;
  int iStack_c0;
  long lStack_a8;
  undefined8 ******ppppppuStack_70;
  code *pcStack_68;
  code *pcStack_58;
  code **ppcStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iStack_30;
  long lStack_18;
  undefined4 *puVar34;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = param_3 + 0xbe;
  if (-0xa0 < param_3) {
    iVar1 = param_3 + 0x9f;
  }
  lVar25 = (long)(((iVar1 >> 5) * 0xb) / 10);
  ppcStack_50 = &pcStack_58;
  pcStack_48 = FUN_10ae755b8;
  pcVar16 = FUN_10ae753dc;
  pppcVar19 = &ppcStack_50;
  pcStack_58 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_2;
  iStack_30 = param_3;
  FUN_10ae750e4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = (undefined8 *)auStack_100;
  puVar9 = auStack_100;
  puVar10 = auStack_100;
  puVar11 = auStack_100;
  pcStack_68 = FUN_10ae74f40;
  pppppppuVar39 = &ppppppuStack_70;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_4 + 8) == 0) {
    lVar26 = *(long *)(param_4 + 0x10);
    uVar27 = 1;
    if ((*(byte *)(lVar26 + 1) & 8) != 0) {
      uVar27 = 2;
    }
  }
  else {
    uVar27 = *(long *)(param_4 + 8) + 2;
    lVar26 = *(long *)(param_4 + 0x10);
  }
  if (*param_4 != (code)0x0) {
    uVar27 = uVar27 + 1;
  }
  uVar30 = *(uint *)(lVar26 + 4);
  if (((int)uVar30 < 0) ||
     (pcVar37 = (code *)(uVar30 - uVar27), uVar30 < uVar27 || pcVar37 == (code *)0x0)) {
    pcVar37 = (code *)0x0;
    pcVar38 = (code *)0x1;
    pcVar23 = (code *)0x0;
  }
  else {
    bVar12 = (*(byte *)(lVar26 + 1) & 0x10) != 0;
    pcVar13 = pcVar37;
    if (bVar12) {
      pcVar13 = (code *)0x0;
    }
    pcVar23 = (code *)0x1;
    if (bVar12) {
      pcVar23 = pcVar37 + 1;
    }
    bVar12 = (*(byte *)(lVar26 + 1) & 1) == 0;
    if (bVar12) {
      pcVar37 = (code *)0x0;
    }
    pcVar38 = (code *)0x1;
    if (bVar12) {
      pcVar38 = pcVar23;
    }
    pcVar23 = (code *)0x0;
    if (bVar12) {
      pcVar23 = pcVar13;
    }
  }
  ppppppuStack_70 = (undefined8 ******)&stack0xfffffffffffffff0;
  FUN_10ae7419c(*(undefined8 *)(param_4 + 0x18),pcVar23,0x20);
  if (*param_4 != (code)0x0) {
    FUN_10ae7419c(*(undefined8 *)(param_4 + 0x18),1);
  }
  FUN_10ae7419c(*(undefined8 *)(param_4 + 0x18),pcVar38,0x30);
  if ((*(long *)(param_4 + 8) == 0) && ((*(byte *)(*(long *)(param_4 + 0x10) + 1) >> 3 & 1) == 0)) {
    uStack_e8 = 0;
  }
  else {
    FUN_10ae7419c(*(undefined8 *)(param_4 + 0x18),1,0x2e);
    uStack_e8 = *(undefined8 *)(param_4 + 8);
  }
  puStack_f0 = &uStack_e8;
  iStack_c0 = (int)pcVar16;
  ppcStack_e0 = &pcStack_f8;
  pcStack_d8 = FUN_10ae758cc;
  pcStack_f8 = param_4;
  lStack_d0 = lVar25;
  pppcStack_c8 = pppcVar19;
  FUN_10ae750e4(iStack_c0 + 0x54U >> 5,&ppcStack_e0,FUN_10ae757d8);
  FUN_10ae7419c(*(undefined8 *)(param_4 + 0x18),uStack_e8,0x30);
  lVar26 = *(long *)(param_4 + 0x18);
  pcVar23 = (code *)0x20;
  pcVar13 = pcVar37;
  FUN_10ae7419c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  pcVar40 = FUN_10ae750e4;
  ___stack_chk_fail();
  uVar27 = lVar26 + 0x7fU >> 7;
  if (uVar27 < 3) {
    if (uVar27 == 1) {
      pcStack_108 = FUN_10ae750e4;
      puVar8 = &uStack_330;
      pcVar20 = (code *)&uStack_330;
      lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      pppppppuStack_110 = pppppppuVar39;
      (*pcVar23)(pcVar13,&uStack_330,0x80);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
        return;
      }
      pcVar40 = FUN_10ae751fc;
      ___stack_chk_fail();
      pcVar23 = pcVar20;
      pppppppuVar39 = &pppppppuStack_110;
    }
    else if (uVar27 != 2) {
      return;
    }
    *(undefined8 *)((long)puVar8 + -0x30) = unaff_x28;
    *(undefined8 *)((long)puVar8 + -0x28) = unaff_x27;
    *(code **)((long)puVar8 + -0x20) = pcVar16;
    *(code **)((long)puVar8 + -0x18) = param_4;
    *(undefined8 ********)((long)puVar8 + -0x10) = pppppppuVar39;
    *(code **)((long)puVar8 + -8) = pcVar40;
    pppppppuVar39 = (undefined8 *******)((long)puVar8 + -0x10);
    puVar9 = (undefined1 *)((long)puVar8 + -0x440);
    *(undefined8 *)((long)puVar8 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _bzero((undefined1 *)((long)puVar8 + -0x438),0x400);
    pcVar20 = (code *)((long)puVar8 + -0x438);
    pcVar14 = pcVar13;
    (*pcVar23)(pcVar13,pcVar20,0x100);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar8 + -0x38)) {
      return;
    }
    pcVar40 = (code *)0x10ae75274;
    ___stack_chk_fail();
    param_4 = pcVar23;
    pcVar16 = pcVar13;
LAB_10ae75274:
    *(undefined8 *)(puVar9 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar9 + -0x28) = unaff_x27;
    *(code **)(puVar9 + -0x20) = pcVar16;
    *(code **)(puVar9 + -0x18) = param_4;
    *(undefined8 ********)(puVar9 + -0x10) = pppppppuVar39;
    *(code **)(puVar9 + -8) = pcVar40;
    pppppppuVar39 = (undefined8 *******)(puVar9 + -0x10);
    puVar10 = puVar9 + -0x640;
    *(undefined8 *)(puVar9 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _bzero(puVar9 + -0x638,0x600);
    pcVar21 = (code *)(puVar9 + -0x638);
    pcVar15 = pcVar14;
    (*pcVar20)(pcVar14,pcVar21,0x180);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar9 + -0x38)) {
      return;
    }
    pcVar40 = (code *)0x10ae752ec;
    ___stack_chk_fail();
    param_4 = pcVar20;
    pcVar16 = pcVar14;
  }
  else {
    pcVar14 = pcVar13;
    pcVar20 = pcVar23;
    if (uVar27 == 3) goto LAB_10ae75274;
    pcVar15 = pcVar13;
    pcVar21 = pcVar23;
    if (uVar27 != 4) {
      if (uVar27 != 5) {
        return;
      }
      goto LAB_10ae75364;
    }
  }
  *(undefined8 *)(puVar10 + -0x30) = unaff_x28;
  *(undefined8 *)(puVar10 + -0x28) = unaff_x27;
  *(code **)(puVar10 + -0x20) = pcVar16;
  *(code **)(puVar10 + -0x18) = param_4;
  *(undefined8 ********)(puVar10 + -0x10) = pppppppuVar39;
  *(code **)(puVar10 + -8) = pcVar40;
  pppppppuVar39 = (undefined8 *******)(puVar10 + -0x10);
  puVar11 = puVar10 + -0x840;
  *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _bzero(puVar10 + -0x838,0x800);
  pcVar23 = (code *)(puVar10 + -0x838);
  pcVar13 = pcVar15;
  (*pcVar21)(pcVar15,pcVar23,0x200);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar10 + -0x38)) {
    return;
  }
  pcVar40 = (code *)0x10ae75364;
  ___stack_chk_fail();
  param_4 = pcVar21;
  pcVar16 = pcVar15;
LAB_10ae75364:
  *(undefined8 *)(puVar11 + -0x30) = unaff_x28;
  *(undefined8 *)(puVar11 + -0x28) = unaff_x27;
  *(code **)(puVar11 + -0x20) = pcVar16;
  *(code **)(puVar11 + -0x18) = param_4;
  *(undefined8 ********)(puVar11 + -0x10) = pppppppuVar39;
  *(code **)(puVar11 + -8) = pcVar40;
  *(undefined8 *)(puVar11 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _bzero(puVar11 + -0xa38,0xa00);
  puVar22 = puVar11 + -0xa38;
  uVar24 = 0x280;
  pcVar16 = pcVar13;
  (*pcVar23)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar11 + -0x38)) {
    return;
  }
  ___stack_chk_fail();
  puVar18 = (undefined8 *)(puVar11 + -0xa90);
  *(undefined1 **)(puVar11 + -0xa50) = puVar11 + -0x10;
  *(code **)(puVar11 + -0xa48) = FUN_10ae753dc;
  *(undefined8 *)(puVar11 + -0xa58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar27 = *(ulong *)(pcVar16 + 0x10);
  uVar5 = *(ulong *)(pcVar16 + 0x18);
  iVar6 = *(int *)(pcVar16 + 0x20);
  *(undefined1 **)(puVar11 + -0xa68) = puVar22;
  *(undefined8 *)(puVar11 + -0xa60) = uVar24;
  iVar1 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar1 = iVar6;
  }
  iVar1 = (iVar1 >> 5) + 1;
  lVar26 = (long)iVar1;
  iVar2 = iVar6 + 0xbe;
  if (-0xa0 < iVar6) {
    iVar2 = iVar6 + 0x9f;
  }
  lVar29 = (long)(((iVar2 >> 5) * 0xb) / 10);
  *(undefined8 *)(puVar11 + -0xa70) = 0;
  *(long *)(puVar11 + -0xa88) = lVar29;
  uVar30 = iVar6 % 0x20;
  uVar3 = 0;
  if ((uVar30 & 0x40) == 0) {
    uVar3 = (int)(uVar27 << ((ulong)uVar30 & 0x3f));
  }
  *(undefined4 *)(puVar22 + (long)iVar1 * 4 + -4) = uVar3;
  uVar30 = 0x20 - uVar30;
  uVar32 = uVar5 >> ((ulong)uVar30 & 0x3f);
  bVar12 = (uVar30 & 0x40) == 0;
  uVar31 = uVar32;
  if (bVar12) {
    uVar31 = (uVar5 << 1) << ((ulong)~uVar30 & 0x3f) | uVar27 >> ((ulong)uVar30 & 0x3f);
  }
  uVar27 = 0;
  if (bVar12) {
    uVar27 = uVar32;
  }
  if (uVar31 != 0 || uVar27 != 0) {
    do {
      do {
        *(int *)(puVar22 + lVar26 * 4) = (int)uVar31;
        lVar26 = lVar26 + 1;
        uVar31 = uVar31 >> 0x20 | uVar27 << 0x20;
        uVar27 = uVar27 >> 0x20;
      } while (uVar27 != 0);
    } while (uVar31 != 0);
  }
  if (lVar26 == 0) {
    uVar27 = (ulong)*(uint *)(puVar22 + lVar29 * 4);
    lVar35 = lVar29 + 1;
  }
  else {
    do {
      lVar35 = lVar29;
      uVar27 = 0;
      lVar29 = lVar26;
      do {
        uVar27 = (ulong)*(uint *)(puVar22 + lVar29 * 4 + -4) | uVar27 << 0x20;
        *(int *)(puVar22 + lVar29 * 4 + -4) = (int)(uVar27 / 1000000000);
        uVar27 = uVar27 % 1000000000;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar4 = lVar26 + -1;
      if (*(int *)(puVar22 + (lVar26 + -1) * 4) != 0) {
        lVar4 = lVar26;
      }
      *(int *)(puVar22 + (lVar35 + -1) * 4) = (int)uVar27;
      lVar26 = lVar4;
      lVar29 = lVar35 + -1;
    } while (lVar4 != 0);
  }
  *(long *)(puVar11 + -0xa90) = lVar35;
  if ((int)uVar27 != 0) {
    do {
      uVar30 = (uint)uVar27;
      lVar26 = *(long *)(puVar11 + -0xa70);
      *(long *)(puVar11 + -0xa70) = lVar26 + 1;
      puVar11[-0xa78 - lVar26] = (char)uVar27 + (char)(uVar27 / 10) * -10 | 0x30;
      uVar27 = uVar27 / 10;
    } while (9 < uVar30);
  }
  plVar17 = *(long **)pcVar16;
  (**(code **)(pcVar16 + 8))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar11 + -0xa58)) {
    return;
  }
  ___stack_chk_fail();
  *(code **)(puVar11 + -0xad0) = pcVar38;
  *(code **)(puVar11 + -0xac8) = pcVar37;
  *(code ****)(puVar11 + -0xac0) = pppcVar19;
  *(long *)(puVar11 + -0xab8) = lVar25;
  *(code **)(puVar11 + -0xab0) = pcVar13;
  *(code **)(puVar11 + -0xaa8) = pcVar23;
  *(undefined1 **)(puVar11 + -0xaa0) = puVar11 + -0xa50;
  *(code **)(puVar11 + -0xa98) = FUN_10ae755b8;
  *(undefined8 *)(puVar11 + -0xad8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar42 = puVar18[2];
  uVar41 = puVar18[5];
  uVar24 = puVar18[4];
  *(undefined8 *)(puVar11 + -0xaf8) = puVar18[3];
  *(undefined8 *)(puVar11 + -0xb00) = uVar42;
  *(undefined8 *)(puVar11 + -0xae8) = uVar41;
  *(undefined8 *)(puVar11 + -0xaf0) = uVar24;
  *(undefined8 *)(puVar11 + -0xae0) = puVar18[6];
  uVar24 = *puVar18;
  *(undefined8 *)(puVar11 + -0xb08) = puVar18[1];
  *(undefined8 *)(puVar11 + -0xb10) = uVar24;
  lVar26 = *(long *)(puVar11 + -0xaf0);
  pcVar28 = (char *)*plVar17;
  lVar25 = *(long *)(pcVar28 + 0x10);
  if ((*(long *)(pcVar28 + 8) == 0) && ((*(byte *)(lVar25 + 1) >> 3 & 1) == 0)) {
    lVar29 = 0;
  }
  else {
    lVar29 = *(long *)(pcVar28 + 8) + 1;
  }
  uVar27 = (*(long *)(puVar11 + -0xb08) - *(long *)(puVar11 + -0xb10)) * 9 + lVar26 + lVar29;
  if (*pcVar28 != '\0') {
    uVar27 = uVar27 + 1;
  }
  uVar30 = *(uint *)(lVar25 + 4);
  if (((int)uVar30 < 0) || (lVar29 = uVar30 - uVar27, uVar30 < uVar27 || lVar29 == 0)) {
    lVar25 = 0;
    lVar29 = 0;
    lVar35 = 0;
  }
  else {
    bVar12 = (*(byte *)(lVar25 + 1) & 0x10) != 0;
    lVar35 = lVar29;
    if (bVar12) {
      lVar35 = 0;
    }
    lVar4 = 0;
    if (bVar12) {
      lVar4 = lVar29;
    }
    bVar12 = (*(byte *)(lVar25 + 1) & 1) == 0;
    lVar25 = 0;
    if (bVar12) {
      lVar25 = lVar35;
    }
    lVar35 = 0;
    if (bVar12) {
      lVar29 = 0;
      lVar35 = lVar4;
    }
  }
  FUN_10ae7419c(*(undefined8 *)(pcVar28 + 0x18),lVar25,0x20);
  pcVar28 = (char *)*plVar17;
  if (*pcVar28 != '\0') {
    FUN_10ae7419c(*(undefined8 *)(pcVar28 + 0x18),1);
    pcVar28 = (char *)*plVar17;
  }
  FUN_10ae7419c(*(undefined8 *)(pcVar28 + 0x18),lVar35,0x30);
  func_0x000107c2b990(*(undefined8 *)(*plVar17 + 0x18),puVar11 + (-0xaf7 - lVar26),lVar26);
  uVar27 = *(ulong *)(puVar11 + -0xb10);
  if (uVar27 < *(ulong *)(puVar11 + -0xb08)) {
    do {
      *(ulong *)(puVar11 + -0xb10) = uVar27 + 1;
      lVar25 = 0x18;
      uVar27 = (ulong)*(uint *)(*(long *)(puVar11 + -0xae8) + uVar27 * 4);
      do {
        puVar11[lVar25 + -0xb10] = (char)uVar27 + (char)(uVar27 / 10) * -10 | 0x30;
        lVar25 = lVar25 + -1;
        uVar27 = uVar27 / 10;
      } while (lVar25 != 0xf);
      *(undefined8 *)(puVar11 + -0xaf0) = 9;
      func_0x000107c2b990(*(undefined8 *)(*plVar17 + 0x18),puVar11 + -0xb00,9);
      uVar27 = *(ulong *)(puVar11 + -0xb10);
    } while (uVar27 < *(ulong *)(puVar11 + -0xb08));
  }
  lVar25 = *plVar17;
  if ((*(long *)(lVar25 + 8) == 0) && ((*(byte *)(*(long *)(lVar25 + 0x10) + 1) >> 3 & 1) == 0)) {
    uVar24 = 0;
  }
  else {
    FUN_10ae7419c(*(undefined8 *)(lVar25 + 0x18),1,0x2e);
    lVar25 = *plVar17;
    uVar24 = *(undefined8 *)(lVar25 + 8);
  }
  FUN_10ae7419c(*(undefined8 *)(lVar25 + 0x18),uVar24,0x30);
  puVar18 = *(undefined8 **)(*plVar17 + 0x18);
  uVar24 = 0x20;
  FUN_10ae7419c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar11 + -0xad8)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 **)(puVar11 + -0xb20) = puVar11 + -0xaa0;
  *(code **)(puVar11 + -0xb18) = FUN_10ae757d8;
  uVar27 = puVar18[2];
  uVar5 = puVar18[3];
  iVar6 = *(int *)(puVar18 + 4);
  iVar1 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar1 = iVar6;
  }
  uVar30 = (iVar1 >> 5) + 1;
  uVar31 = (ulong)uVar30;
  *(long *)(puVar11 + -0xb38) = (long)(int)uVar30;
  *(long *)(puVar11 + -0xb30) = lVar29;
  *(undefined8 *)(puVar11 + -0xb28) = uVar24;
  uVar7 = iVar6 % 0x20;
  uVar3 = 0;
  if ((0x20 - uVar7 & 0x40) == 0) {
    uVar3 = (int)(uVar27 << ((ulong)(0x20 - uVar7) & 0x3f));
  }
  lVar25 = (long)(int)uVar30 + -1;
  *(undefined4 *)(lVar29 + lVar25 * 4) = uVar3;
  uVar36 = uVar5 >> ((ulong)uVar7 & 0x3f);
  bVar12 = (uVar7 & 0x40) == 0;
  uVar32 = uVar36;
  if (bVar12) {
    uVar32 = (uVar5 << 1) << ((ulong)~uVar7 & 0x3f) | uVar27 >> ((ulong)uVar7 & 0x3f);
  }
  uVar27 = 0;
  if (bVar12) {
    uVar27 = uVar36;
  }
  if (uVar32 != 0 || uVar27 != 0) {
    puVar33 = (undefined4 *)(lVar29 + lVar25 * 4 + -4);
    do {
      do {
        puVar34 = puVar33 + -1;
        *puVar33 = (int)uVar32;
        uVar32 = uVar32 >> 0x20 | uVar27 << 0x20;
        uVar27 = uVar27 >> 0x20;
        puVar33 = puVar34;
      } while (uVar27 != 0);
    } while (uVar32 != 0);
  }
  if (uVar30 != 0) {
    uVar31 = 0;
    lVar26 = (long)(iVar1 >> 5);
    do {
      uVar31 = uVar31 + (ulong)*(uint *)(lVar29 + lVar26 * 4) * 10;
      *(int *)(lVar29 + lVar26 * 4) = (int)uVar31;
      uVar31 = uVar31 >> 0x20;
      lVar26 = lVar26 + -1;
    } while (lVar26 != -1);
    if (*(int *)(lVar29 + lVar25 * 4) == 0) {
      *(long *)(puVar11 + -0xb38) = lVar25;
    }
  }
  puVar11[-0xb40] = (char)uVar31;
  (*(code *)puVar18[1])(*puVar18,puVar11 + -0xb40);
  return;
}



/* Entry: 10ae74f40; end: 10ae750e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ae74f40(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  bool bVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  code *pcVar19;
  code *pcVar20;
  undefined1 *puVar21;
  code *pcVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  char *pcVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined4 *puVar31;
  long lVar33;
  ulong uVar34;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar35;
  code *pcVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  byte abStack_20d0 [7680];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  undefined8 *******pppppppuStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [8];
  code *pcStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code **ppcStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  long lStack_48;
  undefined4 *puVar32;
  
  puVar8 = (undefined8 *)auStack_a0;
  puVar9 = auStack_a0;
  puVar10 = auStack_a0;
  puVar11 = auStack_a0;
  pppppppuVar35 = (undefined8 *******)&stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_4 + 8) == 0) {
    lVar24 = *(long *)(param_4 + 0x10);
    uVar25 = 1;
    if ((*(byte *)(lVar24 + 1) & 8) != 0) {
      uVar25 = 2;
    }
  }
  else {
    uVar25 = *(long *)(param_4 + 8) + 2;
    lVar24 = *(long *)(param_4 + 0x10);
  }
  if (*param_4 != (code)0x0) {
    uVar25 = uVar25 + 1;
  }
  uVar28 = *(uint *)(lVar24 + 4);
  if (((int)uVar28 < 0) ||
     (puVar18 = (undefined8 *)(uVar28 - uVar25), uVar28 < uVar25 || puVar18 == (undefined8 *)0x0)) {
    puVar18 = (undefined8 *)0x0;
    lVar24 = 1;
    puVar14 = (undefined8 *)0x0;
  }
  else {
    bVar12 = (*(byte *)(lVar24 + 1) & 0x10) != 0;
    puVar15 = puVar18;
    if (bVar12) {
      puVar15 = (undefined8 *)0x0;
    }
    lVar13 = 1;
    if (bVar12) {
      lVar13 = (long)puVar18 + 1;
    }
    bVar12 = (*(byte *)(lVar24 + 1) & 1) == 0;
    if (bVar12) {
      puVar18 = (undefined8 *)0x0;
    }
    lVar24 = 1;
    if (bVar12) {
      lVar24 = lVar13;
    }
    puVar14 = (undefined8 *)0x0;
    if (bVar12) {
      puVar14 = puVar15;
    }
  }
  FUN_10ae7419c(*(undefined8 *)(param_4 + 0x18),puVar14,0x20);
  if (*param_4 != (code)0x0) {
    FUN_10ae7419c(*(undefined8 *)(param_4 + 0x18),1);
  }
  FUN_10ae7419c(*(undefined8 *)(param_4 + 0x18),lVar24,0x30);
  if ((*(long *)(param_4 + 8) == 0) && ((*(byte *)(*(long *)(param_4 + 0x10) + 1) >> 3 & 1) == 0)) {
    uStack_88 = 0;
  }
  else {
    FUN_10ae7419c(*(undefined8 *)(param_4 + 0x18),1,0x2e);
    uStack_88 = *(undefined8 *)(param_4 + 8);
  }
  puStack_90 = &uStack_88;
  iStack_60 = (int)param_3;
  ppcStack_80 = &pcStack_98;
  pcStack_78 = FUN_10ae758cc;
  pcStack_98 = param_4;
  uStack_70 = param_1;
  uStack_68 = param_2;
  FUN_10ae750e4(iStack_60 + 0x54U >> 5,&ppcStack_80,FUN_10ae757d8);
  FUN_10ae7419c(*(undefined8 *)(param_4 + 0x18),uStack_88,0x30);
  lVar13 = *(long *)(param_4 + 0x18);
  pcVar22 = (code *)0x20;
  puVar14 = puVar18;
  FUN_10ae7419c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  pcVar36 = FUN_10ae750e4;
  ___stack_chk_fail();
  uVar25 = lVar13 + 0x7fU >> 7;
  if (uVar25 < 3) {
    if (uVar25 == 1) {
      pcStack_a8 = FUN_10ae750e4;
      puVar8 = &uStack_2d0;
      pcVar19 = (code *)&uStack_2d0;
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      pppppppuStack_b0 = pppppppuVar35;
      (*pcVar22)(puVar14,&uStack_2d0,0x80);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
        return;
      }
      pcVar36 = FUN_10ae751fc;
      ___stack_chk_fail();
      pcVar22 = pcVar19;
      pppppppuVar35 = &pppppppuStack_b0;
    }
    else if (uVar25 != 2) {
      return;
    }
    *(undefined8 *)((long)puVar8 + -0x30) = unaff_x28;
    *(undefined8 *)((long)puVar8 + -0x28) = unaff_x27;
    *(undefined8 **)((long)puVar8 + -0x20) = param_3;
    *(code **)((long)puVar8 + -0x18) = param_4;
    *(undefined8 ********)((long)puVar8 + -0x10) = pppppppuVar35;
    *(code **)((long)puVar8 + -8) = pcVar36;
    pppppppuVar35 = (undefined8 *******)((long)puVar8 + -0x10);
    puVar9 = (undefined1 *)((long)puVar8 + -0x440);
    *(undefined8 *)((long)puVar8 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _bzero((undefined1 *)((long)puVar8 + -0x438),0x400);
    pcVar19 = (code *)((long)puVar8 + -0x438);
    puVar15 = puVar14;
    (*pcVar22)(puVar14,pcVar19,0x100);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar8 + -0x38)) {
      return;
    }
    pcVar36 = (code *)0x10ae75274;
    ___stack_chk_fail();
    param_4 = pcVar22;
    param_3 = puVar14;
LAB_10ae75274:
    *(undefined8 *)(puVar9 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar9 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar9 + -0x20) = param_3;
    *(code **)(puVar9 + -0x18) = param_4;
    *(undefined8 ********)(puVar9 + -0x10) = pppppppuVar35;
    *(code **)(puVar9 + -8) = pcVar36;
    pppppppuVar35 = (undefined8 *******)(puVar9 + -0x10);
    puVar10 = puVar9 + -0x640;
    *(undefined8 *)(puVar9 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _bzero(puVar9 + -0x638,0x600);
    pcVar20 = (code *)(puVar9 + -0x638);
    puVar16 = puVar15;
    (*pcVar19)(puVar15,pcVar20,0x180);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar9 + -0x38)) {
      return;
    }
    pcVar36 = (code *)0x10ae752ec;
    ___stack_chk_fail();
    param_4 = pcVar19;
    param_3 = puVar15;
  }
  else {
    puVar15 = puVar14;
    pcVar19 = pcVar22;
    if (uVar25 == 3) goto LAB_10ae75274;
    puVar16 = puVar14;
    pcVar20 = pcVar22;
    if (uVar25 != 4) {
      if (uVar25 != 5) {
        return;
      }
      goto LAB_10ae75364;
    }
  }
  *(undefined8 *)(puVar10 + -0x30) = unaff_x28;
  *(undefined8 *)(puVar10 + -0x28) = unaff_x27;
  *(undefined8 **)(puVar10 + -0x20) = param_3;
  *(code **)(puVar10 + -0x18) = param_4;
  *(undefined8 ********)(puVar10 + -0x10) = pppppppuVar35;
  *(code **)(puVar10 + -8) = pcVar36;
  pppppppuVar35 = (undefined8 *******)(puVar10 + -0x10);
  puVar11 = puVar10 + -0x840;
  *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _bzero(puVar10 + -0x838,0x800);
  pcVar22 = (code *)(puVar10 + -0x838);
  puVar14 = puVar16;
  (*pcVar20)(puVar16,pcVar22,0x200);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar10 + -0x38)) {
    return;
  }
  pcVar36 = (code *)0x10ae75364;
  ___stack_chk_fail();
  param_4 = pcVar20;
  param_3 = puVar16;
LAB_10ae75364:
  *(undefined8 *)(puVar11 + -0x30) = unaff_x28;
  *(undefined8 *)(puVar11 + -0x28) = unaff_x27;
  *(undefined8 **)(puVar11 + -0x20) = param_3;
  *(code **)(puVar11 + -0x18) = param_4;
  *(undefined8 ********)(puVar11 + -0x10) = pppppppuVar35;
  *(code **)(puVar11 + -8) = pcVar36;
  *(undefined8 *)(puVar11 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _bzero(puVar11 + -0xa38,0xa00);
  puVar21 = puVar11 + -0xa38;
  uVar23 = 0x280;
  puVar15 = puVar14;
  (*pcVar22)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar11 + -0x38)) {
    return;
  }
  ___stack_chk_fail();
  puVar16 = (undefined8 *)(puVar11 + -0xa90);
  *(undefined1 **)(puVar11 + -0xa50) = puVar11 + -0x10;
  *(code **)(puVar11 + -0xa48) = FUN_10ae753dc;
  *(undefined8 *)(puVar11 + -0xa58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar25 = puVar15[2];
  uVar5 = puVar15[3];
  iVar6 = *(int *)(puVar15 + 4);
  *(undefined1 **)(puVar11 + -0xa68) = puVar21;
  *(undefined8 *)(puVar11 + -0xa60) = uVar23;
  iVar1 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar1 = iVar6;
  }
  iVar1 = (iVar1 >> 5) + 1;
  lVar13 = (long)iVar1;
  iVar2 = iVar6 + 0xbe;
  if (-0xa0 < iVar6) {
    iVar2 = iVar6 + 0x9f;
  }
  lVar27 = (long)(((iVar2 >> 5) * 0xb) / 10);
  *(undefined8 *)(puVar11 + -0xa70) = 0;
  *(long *)(puVar11 + -0xa88) = lVar27;
  uVar28 = iVar6 % 0x20;
  uVar3 = 0;
  if ((uVar28 & 0x40) == 0) {
    uVar3 = (int)(uVar25 << ((ulong)uVar28 & 0x3f));
  }
  *(undefined4 *)(puVar21 + (long)iVar1 * 4 + -4) = uVar3;
  uVar28 = 0x20 - uVar28;
  uVar30 = uVar5 >> ((ulong)uVar28 & 0x3f);
  bVar12 = (uVar28 & 0x40) == 0;
  uVar29 = uVar30;
  if (bVar12) {
    uVar29 = (uVar5 << 1) << ((ulong)~uVar28 & 0x3f) | uVar25 >> ((ulong)uVar28 & 0x3f);
  }
  uVar25 = 0;
  if (bVar12) {
    uVar25 = uVar30;
  }
  if (uVar29 != 0 || uVar25 != 0) {
    do {
      do {
        *(int *)(puVar21 + lVar13 * 4) = (int)uVar29;
        lVar13 = lVar13 + 1;
        uVar29 = uVar29 >> 0x20 | uVar25 << 0x20;
        uVar25 = uVar25 >> 0x20;
      } while (uVar25 != 0);
    } while (uVar29 != 0);
  }
  if (lVar13 == 0) {
    uVar25 = (ulong)*(uint *)(puVar21 + lVar27 * 4);
    lVar33 = lVar27 + 1;
  }
  else {
    do {
      lVar33 = lVar27;
      uVar25 = 0;
      lVar27 = lVar13;
      do {
        uVar25 = (ulong)*(uint *)(puVar21 + lVar27 * 4 + -4) | uVar25 << 0x20;
        *(int *)(puVar21 + lVar27 * 4 + -4) = (int)(uVar25 / 1000000000);
        uVar25 = uVar25 % 1000000000;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar4 = lVar13 + -1;
      if (*(int *)(puVar21 + (lVar13 + -1) * 4) != 0) {
        lVar4 = lVar13;
      }
      *(int *)(puVar21 + (lVar33 + -1) * 4) = (int)uVar25;
      lVar13 = lVar4;
      lVar27 = lVar33 + -1;
    } while (lVar4 != 0);
  }
  *(long *)(puVar11 + -0xa90) = lVar33;
  if ((int)uVar25 != 0) {
    do {
      uVar28 = (uint)uVar25;
      lVar13 = *(long *)(puVar11 + -0xa70);
      *(long *)(puVar11 + -0xa70) = lVar13 + 1;
      puVar11[-0xa78 - lVar13] = (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
      uVar25 = uVar25 / 10;
    } while (9 < uVar28);
  }
  plVar17 = (long *)*puVar15;
  (*(code *)puVar15[1])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar11 + -0xa58)) {
    return;
  }
  ___stack_chk_fail();
  *(long *)(puVar11 + -0xad0) = lVar24;
  *(undefined8 **)(puVar11 + -0xac8) = puVar18;
  *(undefined8 *)(puVar11 + -0xac0) = param_2;
  *(undefined8 *)(puVar11 + -0xab8) = param_1;
  *(undefined8 **)(puVar11 + -0xab0) = puVar14;
  *(code **)(puVar11 + -0xaa8) = pcVar22;
  *(undefined1 **)(puVar11 + -0xaa0) = puVar11 + -0xa50;
  *(code **)(puVar11 + -0xa98) = FUN_10ae755b8;
  *(undefined8 *)(puVar11 + -0xad8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar38 = puVar16[2];
  uVar37 = puVar16[5];
  uVar23 = puVar16[4];
  *(undefined8 *)(puVar11 + -0xaf8) = puVar16[3];
  *(undefined8 *)(puVar11 + -0xb00) = uVar38;
  *(undefined8 *)(puVar11 + -0xae8) = uVar37;
  *(undefined8 *)(puVar11 + -0xaf0) = uVar23;
  *(undefined8 *)(puVar11 + -0xae0) = puVar16[6];
  uVar23 = *puVar16;
  *(undefined8 *)(puVar11 + -0xb08) = puVar16[1];
  *(undefined8 *)(puVar11 + -0xb10) = uVar23;
  lVar13 = *(long *)(puVar11 + -0xaf0);
  pcVar26 = (char *)*plVar17;
  lVar24 = *(long *)(pcVar26 + 0x10);
  if ((*(long *)(pcVar26 + 8) == 0) && ((*(byte *)(lVar24 + 1) >> 3 & 1) == 0)) {
    lVar27 = 0;
  }
  else {
    lVar27 = *(long *)(pcVar26 + 8) + 1;
  }
  uVar25 = (*(long *)(puVar11 + -0xb08) - *(long *)(puVar11 + -0xb10)) * 9 + lVar13 + lVar27;
  if (*pcVar26 != '\0') {
    uVar25 = uVar25 + 1;
  }
  uVar28 = *(uint *)(lVar24 + 4);
  if (((int)uVar28 < 0) || (lVar27 = uVar28 - uVar25, uVar28 < uVar25 || lVar27 == 0)) {
    lVar24 = 0;
    lVar27 = 0;
    lVar33 = 0;
  }
  else {
    bVar12 = (*(byte *)(lVar24 + 1) & 0x10) != 0;
    lVar33 = lVar27;
    if (bVar12) {
      lVar33 = 0;
    }
    lVar4 = 0;
    if (bVar12) {
      lVar4 = lVar27;
    }
    bVar12 = (*(byte *)(lVar24 + 1) & 1) == 0;
    lVar24 = 0;
    if (bVar12) {
      lVar24 = lVar33;
    }
    lVar33 = 0;
    if (bVar12) {
      lVar27 = 0;
      lVar33 = lVar4;
    }
  }
  FUN_10ae7419c(*(undefined8 *)(pcVar26 + 0x18),lVar24,0x20);
  pcVar26 = (char *)*plVar17;
  if (*pcVar26 != '\0') {
    FUN_10ae7419c(*(undefined8 *)(pcVar26 + 0x18),1);
    pcVar26 = (char *)*plVar17;
  }
  FUN_10ae7419c(*(undefined8 *)(pcVar26 + 0x18),lVar33,0x30);
  func_0x000107c2b990(*(undefined8 *)(*plVar17 + 0x18),puVar11 + (-0xaf7 - lVar13),lVar13);
  uVar25 = *(ulong *)(puVar11 + -0xb10);
  if (uVar25 < *(ulong *)(puVar11 + -0xb08)) {
    do {
      *(ulong *)(puVar11 + -0xb10) = uVar25 + 1;
      lVar24 = 0x18;
      uVar25 = (ulong)*(uint *)(*(long *)(puVar11 + -0xae8) + uVar25 * 4);
      do {
        puVar11[lVar24 + -0xb10] = (char)uVar25 + (char)(uVar25 / 10) * -10 | 0x30;
        lVar24 = lVar24 + -1;
        uVar25 = uVar25 / 10;
      } while (lVar24 != 0xf);
      *(undefined8 *)(puVar11 + -0xaf0) = 9;
      func_0x000107c2b990(*(undefined8 *)(*plVar17 + 0x18),puVar11 + -0xb00,9);
      uVar25 = *(ulong *)(puVar11 + -0xb10);
    } while (uVar25 < *(ulong *)(puVar11 + -0xb08));
  }
  lVar24 = *plVar17;
  if ((*(long *)(lVar24 + 8) == 0) && ((*(byte *)(*(long *)(lVar24 + 0x10) + 1) >> 3 & 1) == 0)) {
    uVar23 = 0;
  }
  else {
    FUN_10ae7419c(*(undefined8 *)(lVar24 + 0x18),1,0x2e);
    lVar24 = *plVar17;
    uVar23 = *(undefined8 *)(lVar24 + 8);
  }
  FUN_10ae7419c(*(undefined8 *)(lVar24 + 0x18),uVar23,0x30);
  puVar18 = *(undefined8 **)(*plVar17 + 0x18);
  uVar23 = 0x20;
  FUN_10ae7419c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar11 + -0xad8)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 **)(puVar11 + -0xb20) = puVar11 + -0xaa0;
  *(code **)(puVar11 + -0xb18) = FUN_10ae757d8;
  uVar25 = puVar18[2];
  uVar5 = puVar18[3];
  iVar6 = *(int *)(puVar18 + 4);
  iVar1 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar1 = iVar6;
  }
  uVar28 = (iVar1 >> 5) + 1;
  uVar29 = (ulong)uVar28;
  *(long *)(puVar11 + -0xb38) = (long)(int)uVar28;
  *(long *)(puVar11 + -0xb30) = lVar27;
  *(undefined8 *)(puVar11 + -0xb28) = uVar23;
  uVar7 = iVar6 % 0x20;
  uVar3 = 0;
  if ((0x20 - uVar7 & 0x40) == 0) {
    uVar3 = (int)(uVar25 << ((ulong)(0x20 - uVar7) & 0x3f));
  }
  lVar24 = (long)(int)uVar28 + -1;
  *(undefined4 *)(lVar27 + lVar24 * 4) = uVar3;
  uVar34 = uVar5 >> ((ulong)uVar7 & 0x3f);
  bVar12 = (uVar7 & 0x40) == 0;
  uVar30 = uVar34;
  if (bVar12) {
    uVar30 = (uVar5 << 1) << ((ulong)~uVar7 & 0x3f) | uVar25 >> ((ulong)uVar7 & 0x3f);
  }
  uVar25 = 0;
  if (bVar12) {
    uVar25 = uVar34;
  }
  if (uVar30 != 0 || uVar25 != 0) {
    puVar31 = (undefined4 *)(lVar27 + lVar24 * 4 + -4);
    do {
      do {
        puVar32 = puVar31 + -1;
        *puVar31 = (int)uVar30;
        uVar30 = uVar30 >> 0x20 | uVar25 << 0x20;
        uVar25 = uVar25 >> 0x20;
        puVar31 = puVar32;
      } while (uVar25 != 0);
    } while (uVar30 != 0);
  }
  if (uVar28 != 0) {
    uVar29 = 0;
    lVar13 = (long)(iVar1 >> 5);
    do {
      uVar29 = uVar29 + (ulong)*(uint *)(lVar27 + lVar13 * 4) * 10;
      *(int *)(lVar27 + lVar13 * 4) = (int)uVar29;
      uVar29 = uVar29 >> 0x20;
      lVar13 = lVar13 + -1;
    } while (lVar13 != -1);
    if (*(int *)(lVar27 + lVar24 * 4) == 0) {
      *(long *)(puVar11 + -0xb38) = lVar24;
    }
  }
  puVar11[-0xb40] = (char)uVar29;
  (*(code *)puVar18[1])(*puVar18,puVar11 + -0xb40);
  return;
}



/* Entry: 10ae750e4; end: 10ae7515b;  */

void FUN_10ae750e4(long param_1,undefined8 *param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  bool bVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  code *pcVar13;
  code *pcVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined4 *puVar24;
  ulong uVar26;
  code *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar27;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar28;
  undefined8 uVar29;
  byte abStack_2030 [7680];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  undefined4 *puVar25;
  
  uVar16 = param_1 + 0x7fU >> 7;
  if (uVar16 < 3) {
    if (uVar16 == 1) {
      unaff_x29 = &stack0xfffffffffffffff0;
      pcVar13 = (code *)&uStack_230;
      lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      (*param_3)(param_2,&uStack_230,0x80);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        return;
      }
      unaff_x30 = FUN_10ae751fc;
      ___stack_chk_fail();
      register0x00000008 = (BADSPACEBASE *)&uStack_230;
      param_3 = pcVar13;
    }
    else if (uVar16 != 2) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x27;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _bzero((undefined1 *)((long)register0x00000008 + -0x438),0x400);
    pcVar13 = (code *)((long)register0x00000008 + -0x438);
    puVar12 = param_2;
    (*param_3)(param_2,pcVar13,0x100);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    unaff_x30 = (code *)0x10ae75274;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x440);
    unaff_x19 = param_3;
    unaff_x20 = param_2;
LAB_10ae75274:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x27;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _bzero((undefined1 *)((long)register0x00000008 + -0x638),0x600);
    pcVar14 = (code *)((long)register0x00000008 + -0x638);
    puVar10 = puVar12;
    (*pcVar13)(puVar12,pcVar14,0x180);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    unaff_x30 = (code *)0x10ae752ec;
    ___stack_chk_fail();
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x640);
    unaff_x19 = pcVar13;
    unaff_x20 = puVar12;
  }
  else {
    puVar12 = param_2;
    pcVar13 = param_3;
    if (uVar16 == 3) goto LAB_10ae75274;
    puVar8 = (undefined1 *)register0x00000008;
    puVar10 = param_2;
    pcVar14 = param_3;
    if (uVar16 != 4) {
      if (uVar16 != 5) {
        return;
      }
      goto LAB_10ae75364;
    }
  }
  *(undefined8 *)(puVar8 + -0x30) = unaff_x28;
  *(undefined8 *)(puVar8 + -0x28) = unaff_x27;
  *(undefined8 **)(puVar8 + -0x20) = unaff_x20;
  *(code **)(puVar8 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar8 + -0x10) = unaff_x29;
  *(code **)(puVar8 + -8) = unaff_x30;
  unaff_x29 = puVar8 + -0x10;
  register0x00000008 = (BADSPACEBASE *)(puVar8 + -0x840);
  *(undefined8 *)(puVar8 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _bzero(puVar8 + -0x838,0x800);
  param_3 = (code *)(puVar8 + -0x838);
  param_2 = puVar10;
  (*pcVar14)(puVar10,param_3,0x200);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0x38)) {
    return;
  }
  unaff_x30 = (code *)0x10ae75364;
  ___stack_chk_fail();
  unaff_x19 = pcVar14;
  unaff_x20 = puVar10;
LAB_10ae75364:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _bzero((undefined1 *)((long)register0x00000008 + -0xa38),0xa00);
  puVar8 = (undefined1 *)((long)register0x00000008 + -0xa38);
  uVar15 = 0x280;
  puVar12 = param_2;
  (*param_3)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = (undefined8 *)((long)register0x00000008 + -0xa90);
  *(undefined1 **)((long)register0x00000008 + -0xa50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0xa48) = FUN_10ae753dc;
  *(undefined8 *)((long)register0x00000008 + -0xa58) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = puVar12[2];
  uVar5 = puVar12[3];
  iVar6 = *(int *)(puVar12 + 4);
  *(undefined1 **)((long)register0x00000008 + -0xa68) = puVar8;
  *(undefined8 *)((long)register0x00000008 + -0xa60) = uVar15;
  iVar1 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar1 = iVar6;
  }
  iVar1 = (iVar1 >> 5) + 1;
  lVar17 = (long)iVar1;
  iVar2 = iVar6 + 0xbe;
  if (-0xa0 < iVar6) {
    iVar2 = iVar6 + 0x9f;
  }
  lVar19 = (long)(((iVar2 >> 5) * 0xb) / 10);
  *(undefined8 *)((long)register0x00000008 + -0xa70) = 0;
  *(long *)((long)register0x00000008 + -0xa88) = lVar19;
  uVar20 = iVar6 % 0x20;
  uVar3 = 0;
  if ((uVar20 & 0x40) == 0) {
    uVar3 = (int)(uVar16 << ((ulong)uVar20 & 0x3f));
  }
  *(undefined4 *)(puVar8 + (long)iVar1 * 4 + -4) = uVar3;
  uVar20 = 0x20 - uVar20;
  uVar23 = uVar5 >> ((ulong)uVar20 & 0x3f);
  bVar9 = (uVar20 & 0x40) == 0;
  uVar21 = uVar23;
  if (bVar9) {
    uVar21 = (uVar5 << 1) << ((ulong)~uVar20 & 0x3f) | uVar16 >> ((ulong)uVar20 & 0x3f);
  }
  uVar16 = 0;
  if (bVar9) {
    uVar16 = uVar23;
  }
  if (uVar21 != 0 || uVar16 != 0) {
    do {
      do {
        *(int *)(puVar8 + lVar17 * 4) = (int)uVar21;
        lVar17 = lVar17 + 1;
        uVar21 = uVar21 >> 0x20 | uVar16 << 0x20;
        uVar16 = uVar16 >> 0x20;
      } while (uVar16 != 0);
    } while (uVar21 != 0);
  }
  if (lVar17 == 0) {
    uVar16 = (ulong)*(uint *)(puVar8 + lVar19 * 4);
    lVar22 = lVar19 + 1;
  }
  else {
    do {
      lVar22 = lVar19;
      uVar16 = 0;
      lVar19 = lVar17;
      do {
        uVar16 = (ulong)*(uint *)(puVar8 + lVar19 * 4 + -4) | uVar16 << 0x20;
        *(int *)(puVar8 + lVar19 * 4 + -4) = (int)(uVar16 / 1000000000);
        uVar16 = uVar16 % 1000000000;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar27 = lVar17 + -1;
      if (*(int *)(puVar8 + (lVar17 + -1) * 4) != 0) {
        lVar27 = lVar17;
      }
      *(int *)(puVar8 + (lVar22 + -1) * 4) = (int)uVar16;
      lVar17 = lVar27;
      lVar19 = lVar22 + -1;
    } while (lVar27 != 0);
  }
  *(long *)((long)register0x00000008 + -0xa90) = lVar22;
  if ((int)uVar16 != 0) {
    do {
      uVar20 = (uint)uVar16;
      lVar17 = *(long *)((long)register0x00000008 + -0xa70);
      *(long *)((long)register0x00000008 + -0xa70) = lVar17 + 1;
      *(byte *)((long)register0x00000008 + (-0xa78 - lVar17)) =
           (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
      uVar16 = uVar16 / 10;
    } while (9 < uVar20);
  }
  plVar11 = (long *)*puVar12;
  (*(code *)puVar12[1])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xa58)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0xad0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0xac8) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0xac0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0xab8) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0xab0) = param_2;
  *(code **)((long)register0x00000008 + -0xaa8) = param_3;
  *(undefined1 **)((long)register0x00000008 + -0xaa0) =
       (undefined1 *)((long)register0x00000008 + -0xa50);
  *(code **)((long)register0x00000008 + -0xa98) = FUN_10ae755b8;
  *(undefined8 *)((long)register0x00000008 + -0xad8) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar29 = puVar10[2];
  uVar28 = puVar10[5];
  uVar15 = puVar10[4];
  *(undefined8 *)((long)register0x00000008 + -0xaf8) = puVar10[3];
  *(undefined8 *)((long)register0x00000008 + -0xb00) = uVar29;
  *(undefined8 *)((long)register0x00000008 + -0xae8) = uVar28;
  *(undefined8 *)((long)register0x00000008 + -0xaf0) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0xae0) = puVar10[6];
  uVar15 = *puVar10;
  *(undefined8 *)((long)register0x00000008 + -0xb08) = puVar10[1];
  *(undefined8 *)((long)register0x00000008 + -0xb10) = uVar15;
  lVar19 = *(long *)((long)register0x00000008 + -0xaf0);
  pcVar18 = (char *)*plVar11;
  lVar17 = *(long *)(pcVar18 + 0x10);
  if ((*(long *)(pcVar18 + 8) == 0) && ((*(byte *)(lVar17 + 1) >> 3 & 1) == 0)) {
    lVar22 = 0;
  }
  else {
    lVar22 = *(long *)(pcVar18 + 8) + 1;
  }
  uVar16 = (*(long *)((long)register0x00000008 + -0xb08) -
           *(long *)((long)register0x00000008 + -0xb10)) * 9 + lVar19 + lVar22;
  if (*pcVar18 != '\0') {
    uVar16 = uVar16 + 1;
  }
  uVar20 = *(uint *)(lVar17 + 4);
  if (((int)uVar20 < 0) || (lVar22 = uVar20 - uVar16, uVar20 < uVar16 || lVar22 == 0)) {
    lVar17 = 0;
    lVar22 = 0;
    lVar27 = 0;
  }
  else {
    bVar9 = (*(byte *)(lVar17 + 1) & 0x10) != 0;
    lVar27 = lVar22;
    if (bVar9) {
      lVar27 = 0;
    }
    lVar4 = 0;
    if (bVar9) {
      lVar4 = lVar22;
    }
    bVar9 = (*(byte *)(lVar17 + 1) & 1) == 0;
    lVar17 = 0;
    if (bVar9) {
      lVar17 = lVar27;
    }
    lVar27 = 0;
    if (bVar9) {
      lVar22 = 0;
      lVar27 = lVar4;
    }
  }
  FUN_10ae7419c(*(undefined8 *)(pcVar18 + 0x18),lVar17,0x20);
  pcVar18 = (char *)*plVar11;
  if (*pcVar18 != '\0') {
    FUN_10ae7419c(*(undefined8 *)(pcVar18 + 0x18),1);
    pcVar18 = (char *)*plVar11;
  }
  FUN_10ae7419c(*(undefined8 *)(pcVar18 + 0x18),lVar27,0x30);
  func_0x000107c2b990(*(undefined8 *)(*plVar11 + 0x18),
                      (undefined1 *)((long)register0x00000008 + (-0xaf7 - lVar19)),lVar19);
  uVar16 = *(ulong *)((long)register0x00000008 + -0xb10);
  if (uVar16 < *(ulong *)((long)register0x00000008 + -0xb08)) {
    do {
      *(ulong *)((long)register0x00000008 + -0xb10) = uVar16 + 1;
      lVar17 = 0x18;
      uVar16 = (ulong)*(uint *)(*(long *)((long)register0x00000008 + -0xae8) + uVar16 * 4);
      do {
        *(byte *)((long)register0x00000008 + lVar17 + -0xb10) =
             (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
        lVar17 = lVar17 + -1;
        uVar16 = uVar16 / 10;
      } while (lVar17 != 0xf);
      *(undefined8 *)((long)register0x00000008 + -0xaf0) = 9;
      func_0x000107c2b990(*(undefined8 *)(*plVar11 + 0x18),
                          (undefined1 *)((long)register0x00000008 + -0xb00),9);
      uVar16 = *(ulong *)((long)register0x00000008 + -0xb10);
    } while (uVar16 < *(ulong *)((long)register0x00000008 + -0xb08));
  }
  lVar17 = *plVar11;
  if ((*(long *)(lVar17 + 8) == 0) && ((*(byte *)(*(long *)(lVar17 + 0x10) + 1) >> 3 & 1) == 0)) {
    uVar15 = 0;
  }
  else {
    FUN_10ae7419c(*(undefined8 *)(lVar17 + 0x18),1,0x2e);
    lVar17 = *plVar11;
    uVar15 = *(undefined8 *)(lVar17 + 8);
  }
  FUN_10ae7419c(*(undefined8 *)(lVar17 + 0x18),uVar15,0x30);
  puVar12 = *(undefined8 **)(*plVar11 + 0x18);
  uVar15 = 0x20;
  FUN_10ae7419c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xad8)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)register0x00000008 + -0xb20) =
       (undefined1 *)((long)register0x00000008 + -0xaa0);
  *(code **)((long)register0x00000008 + -0xb18) = FUN_10ae757d8;
  uVar16 = puVar12[2];
  uVar5 = puVar12[3];
  iVar6 = *(int *)(puVar12 + 4);
  iVar1 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar1 = iVar6;
  }
  uVar20 = (iVar1 >> 5) + 1;
  uVar21 = (ulong)uVar20;
  *(long *)((long)register0x00000008 + -0xb38) = (long)(int)uVar20;
  *(long *)((long)register0x00000008 + -0xb30) = lVar22;
  *(undefined8 *)((long)register0x00000008 + -0xb28) = uVar15;
  uVar7 = iVar6 % 0x20;
  uVar3 = 0;
  if ((0x20 - uVar7 & 0x40) == 0) {
    uVar3 = (int)(uVar16 << ((ulong)(0x20 - uVar7) & 0x3f));
  }
  lVar17 = (long)(int)uVar20 + -1;
  *(undefined4 *)(lVar22 + lVar17 * 4) = uVar3;
  uVar26 = uVar5 >> ((ulong)uVar7 & 0x3f);
  bVar9 = (uVar7 & 0x40) == 0;
  uVar23 = uVar26;
  if (bVar9) {
    uVar23 = (uVar5 << 1) << ((ulong)~uVar7 & 0x3f) | uVar16 >> ((ulong)uVar7 & 0x3f);
  }
  uVar16 = 0;
  if (bVar9) {
    uVar16 = uVar26;
  }
  if (uVar23 != 0 || uVar16 != 0) {
    puVar24 = (undefined4 *)(lVar22 + lVar17 * 4 + -4);
    do {
      do {
        puVar25 = puVar24 + -1;
        *puVar24 = (int)uVar23;
        uVar23 = uVar23 >> 0x20 | uVar16 << 0x20;
        uVar16 = uVar16 >> 0x20;
        puVar24 = puVar25;
      } while (uVar16 != 0);
    } while (uVar23 != 0);
  }
  if (uVar20 != 0) {
    uVar21 = 0;
    lVar19 = (long)(iVar1 >> 5);
    do {
      uVar21 = uVar21 + (ulong)*(uint *)(lVar22 + lVar19 * 4) * 10;
      *(int *)(lVar22 + lVar19 * 4) = (int)uVar21;
      uVar21 = uVar21 >> 0x20;
      lVar19 = lVar19 + -1;
    } while (lVar19 != -1);
    if (*(int *)(lVar22 + lVar17 * 4) == 0) {
      *(long *)((long)register0x00000008 + -0xb38) = lVar17;
    }
  }
  *(char *)((long)register0x00000008 + -0xb40) = (char)uVar21;
  (*(code *)puVar12[1])(*puVar12,(undefined1 *)((long)register0x00000008 + -0xb40));
  return;
}



/* Entry: 10ae7515c; end: 10ae751fb;  */

void FUN_10ae7515c(undefined8 *param_1,code *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  undefined1 *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long lVar15;
  char *pcVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined4 *puVar24;
  ulong uVar26;
  undefined1 auStack_2030 [8];
  long lStack_2028;
  long lStack_2020;
  undefined8 uStack_2018;
  undefined8 ******ppppppuStack_2010;
  code *pcStack_2008;
  ulong uStack_2000;
  ulong uStack_1ff8;
  ulong uStack_1ff0;
  undefined8 uStack_1fe8;
  ulong uStack_1fe0;
  ulong uStack_1fd8;
  ulong uStack_1fd0;
  long lStack_1fc8;
  undefined1 ******ppppppuStack_1f90;
  code *pcStack_1f88;
  ulong uStack_1f80;
  ulong uStack_1f78;
  byte abStack_1f6a [10];
  long lStack_1f60;
  undefined1 *puStack_1f58;
  undefined8 uStack_1f50;
  long lStack_1f48;
  undefined1 *****pppppuStack_1f40;
  code *pcStack_1f38;
  undefined1 auStack_1f28 [2560];
  long lStack_1528;
  undefined1 ****ppppuStack_1500;
  undefined8 uStack_14f8;
  undefined1 auStack_14e8 [2048];
  long lStack_ce8;
  undefined1 ***pppuStack_cc0;
  undefined8 uStack_cb8;
  undefined1 auStack_ca8 [1536];
  long lStack_6a8;
  undefined1 **ppuStack_680;
  undefined8 uStack_678;
  undefined1 auStack_668 [1024];
  long lStack_268;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  undefined4 *puVar25;
  
  pcVar10 = (code *)&uStack_230;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  (*param_2)(param_1,&uStack_230,0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_10ae751fc;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_240 = &stack0xfffffffffffffff0;
  _bzero(auStack_668,0x400);
  pcVar11 = (code *)auStack_668;
  (*pcVar10)(param_1,pcVar11,0x100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  uStack_678 = 0x10ae75274;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_680 = &puStack_240;
  _bzero(auStack_ca8,0x600);
  pcVar10 = (code *)auStack_ca8;
  (*pcVar11)(param_1,pcVar10,0x180);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return;
  }
  ___stack_chk_fail();
  uStack_cb8 = 0x10ae752ec;
  lStack_ce8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_cc0 = &ppuStack_680;
  _bzero(auStack_14e8,0x800);
  pcVar11 = (code *)auStack_14e8;
  (*pcVar10)(param_1,pcVar11,0x200);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_ce8) {
    ___stack_chk_fail();
    uStack_14f8 = 0x10ae75364;
    lStack_1528 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppuStack_1500 = &pppuStack_cc0;
    _bzero(auStack_1f28,0xa00);
    puVar12 = auStack_1f28;
    uVar14 = 0x280;
    (*pcVar11)();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1528) {
      return;
    }
    ___stack_chk_fail();
    puVar13 = &uStack_1f80;
    pcStack_1f38 = FUN_10ae753dc;
    lStack_1f48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar21 = param_1[2];
    uVar20 = param_1[3];
    iVar5 = *(int *)(param_1 + 4);
    iVar1 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar1 = iVar5;
    }
    iVar1 = (iVar1 >> 5) + 1;
    lVar15 = (long)iVar1;
    iVar2 = iVar5 + 0xbe;
    if (-0xa0 < iVar5) {
      iVar2 = iVar5 + 0x9f;
    }
    uStack_1f78 = (ulong)(((iVar2 >> 5) * 0xb) / 10);
    lStack_1f60 = 0;
    uVar18 = iVar5 % 0x20;
    uVar3 = 0;
    if ((uVar18 & 0x40) == 0) {
      uVar3 = (int)(uVar21 << ((ulong)uVar18 & 0x3f));
    }
    *(undefined4 *)(puVar12 + (long)iVar1 * 4 + -4) = uVar3;
    uVar18 = 0x20 - uVar18;
    uVar23 = uVar20 >> ((ulong)uVar18 & 0x3f);
    bVar7 = (uVar18 & 0x40) == 0;
    uVar19 = uVar23;
    if (bVar7) {
      uVar19 = (uVar20 << 1) << ((ulong)~uVar18 & 0x3f) | uVar21 >> ((ulong)uVar18 & 0x3f);
    }
    uVar21 = 0;
    if (bVar7) {
      uVar21 = uVar23;
    }
    if (uVar19 != 0 || uVar21 != 0) {
      do {
        do {
          *(int *)(puVar12 + lVar15 * 4) = (int)uVar19;
          lVar15 = lVar15 + 1;
          uVar19 = uVar19 >> 0x20 | uVar21 << 0x20;
          uVar21 = uVar21 >> 0x20;
        } while (uVar21 != 0);
      } while (uVar19 != 0);
    }
    uVar21 = uStack_1f78;
    if (lVar15 == 0) {
      uVar20 = (ulong)*(uint *)(puVar12 + uStack_1f78 * 4);
      uStack_1f80 = uStack_1f78 + 1;
    }
    else {
      do {
        uStack_1f80 = uVar21;
        uVar20 = 0;
        lVar22 = lVar15;
        do {
          uVar20 = (ulong)*(uint *)(puVar12 + lVar22 * 4 + -4) | uVar20 << 0x20;
          *(int *)(puVar12 + lVar22 * 4 + -4) = (int)(uVar20 / 1000000000);
          uVar20 = uVar20 % 1000000000;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = lVar15 + -1;
        if (*(int *)(puVar12 + (lVar15 + -1) * 4) != 0) {
          lVar22 = lVar15;
        }
        *(int *)(puVar12 + (uStack_1f80 - 1) * 4) = (int)uVar20;
        lVar15 = lVar22;
        uVar21 = uStack_1f80 - 1;
      } while (lVar22 != 0);
    }
    puStack_1f58 = puVar12;
    uStack_1f50 = uVar14;
    pppppuStack_1f40 = &ppppuStack_1500;
    if ((int)uVar20 != 0) {
      do {
        uVar18 = (uint)uVar20;
        lVar15 = 2 - lStack_1f60;
        lStack_1f60 = lStack_1f60 + 1;
        abStack_1f6a[lVar15] = (char)uVar20 + (char)(uVar20 / 10) * -10 | 0x30;
        uVar20 = uVar20 / 10;
      } while (9 < uVar18);
    }
    plVar8 = (long *)*param_1;
    (*(code *)param_1[1])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f48) {
      ___stack_chk_fail();
      pcStack_1f88 = FUN_10ae755b8;
      lStack_1fc8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_1fe8 = puVar13[3];
      uStack_1ff0 = puVar13[2];
      uStack_1fd8 = puVar13[5];
      uVar21 = puVar13[4];
      uStack_1fd0 = puVar13[6];
      uStack_1ff8 = puVar13[1];
      uStack_2000 = *puVar13;
      pcVar16 = (char *)*plVar8;
      lVar15 = *(long *)(pcVar16 + 0x10);
      if ((*(long *)(pcVar16 + 8) == 0) && ((*(byte *)(lVar15 + 1) >> 3 & 1) == 0)) {
        lVar22 = 0;
      }
      else {
        lVar22 = *(long *)(pcVar16 + 8) + 1;
      }
      uVar20 = (uStack_1ff8 - uStack_2000) * 9 + uVar21 + lVar22;
      if (*pcVar16 != '\0') {
        uVar20 = uVar20 + 1;
      }
      uVar18 = *(uint *)(lVar15 + 4);
      if (((int)uVar18 < 0) || (lVar22 = uVar18 - uVar20, uVar18 < uVar20 || lVar22 == 0)) {
        lVar15 = 0;
        lVar22 = 0;
        lVar17 = 0;
      }
      else {
        bVar7 = (*(byte *)(lVar15 + 1) & 0x10) != 0;
        lVar17 = lVar22;
        if (bVar7) {
          lVar17 = 0;
        }
        lVar4 = 0;
        if (bVar7) {
          lVar4 = lVar22;
        }
        bVar7 = (*(byte *)(lVar15 + 1) & 1) == 0;
        lVar15 = 0;
        if (bVar7) {
          lVar15 = lVar17;
        }
        lVar17 = 0;
        if (bVar7) {
          lVar22 = 0;
          lVar17 = lVar4;
        }
      }
      uStack_1fe0 = uVar21;
      ppppppuStack_1f90 = &pppppuStack_1f40;
      FUN_10ae7419c(*(undefined8 *)(pcVar16 + 0x18),lVar15,0x20);
      pcVar16 = (char *)*plVar8;
      if (*pcVar16 != '\0') {
        FUN_10ae7419c(*(undefined8 *)(pcVar16 + 0x18),1);
        pcVar16 = (char *)*plVar8;
      }
      FUN_10ae7419c(*(undefined8 *)(pcVar16 + 0x18),lVar17,0x30);
      func_0x000107c2b990(*(undefined8 *)(*plVar8 + 0x18),(long)&uStack_1fe8 + (1 - uVar21),uVar21);
      if (uStack_2000 < uStack_1ff8) {
        do {
          lVar15 = 0x18;
          uVar21 = (ulong)*(uint *)(uStack_1fd8 + uStack_2000 * 4);
          do {
            *(byte *)((long)&uStack_2000 + lVar15) = (char)uVar21 + (char)(uVar21 / 10) * -10 | 0x30
            ;
            lVar15 = lVar15 + -1;
            uVar21 = uVar21 / 10;
          } while (lVar15 != 0xf);
          uStack_1fe0 = 9;
          uStack_2000 = uStack_2000 + 1;
          func_0x000107c2b990(*(undefined8 *)(*plVar8 + 0x18),&uStack_1ff0,9);
        } while (uStack_2000 < uStack_1ff8);
      }
      lVar15 = *plVar8;
      if ((*(long *)(lVar15 + 8) == 0) && ((*(byte *)(*(long *)(lVar15 + 0x10) + 1) >> 3 & 1) == 0))
      {
        uVar14 = 0;
      }
      else {
        FUN_10ae7419c(*(undefined8 *)(lVar15 + 0x18),1,0x2e);
        lVar15 = *plVar8;
        uVar14 = *(undefined8 *)(lVar15 + 8);
      }
      FUN_10ae7419c(*(undefined8 *)(lVar15 + 0x18),uVar14,0x30);
      puVar9 = *(undefined8 **)(*plVar8 + 0x18);
      uVar14 = 0x20;
      FUN_10ae7419c();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1fc8) {
        ___stack_chk_fail();
        pcStack_2008 = FUN_10ae757d8;
        uVar21 = puVar9[2];
        uVar20 = puVar9[3];
        iVar5 = *(int *)(puVar9 + 4);
        iVar1 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar1 = iVar5;
        }
        uVar18 = (iVar1 >> 5) + 1;
        uVar19 = (ulong)uVar18;
        lStack_2028 = (long)(int)uVar18;
        uVar6 = iVar5 % 0x20;
        uVar3 = 0;
        if ((0x20 - uVar6 & 0x40) == 0) {
          uVar3 = (int)(uVar21 << ((ulong)(0x20 - uVar6) & 0x3f));
        }
        lVar15 = lStack_2028 + -1;
        *(undefined4 *)(lVar22 + lVar15 * 4) = uVar3;
        uVar26 = uVar20 >> ((ulong)uVar6 & 0x3f);
        bVar7 = (uVar6 & 0x40) == 0;
        uVar23 = uVar26;
        if (bVar7) {
          uVar23 = (uVar20 << 1) << ((ulong)~uVar6 & 0x3f) | uVar21 >> ((ulong)uVar6 & 0x3f);
        }
        uVar21 = 0;
        if (bVar7) {
          uVar21 = uVar26;
        }
        if (uVar23 != 0 || uVar21 != 0) {
          puVar24 = (undefined4 *)(lVar22 + lVar15 * 4 + -4);
          do {
            do {
              puVar25 = puVar24 + -1;
              *puVar24 = (int)uVar23;
              uVar23 = uVar23 >> 0x20 | uVar21 << 0x20;
              uVar21 = uVar21 >> 0x20;
              puVar24 = puVar25;
            } while (uVar21 != 0);
          } while (uVar23 != 0);
        }
        if (uVar18 != 0) {
          uVar19 = 0;
          lVar17 = (long)(iVar1 >> 5);
          do {
            uVar19 = uVar19 + (ulong)*(uint *)(lVar22 + lVar17 * 4) * 10;
            *(int *)(lVar22 + lVar17 * 4) = (int)uVar19;
            uVar19 = uVar19 >> 0x20;
            lVar17 = lVar17 + -1;
          } while (lVar17 != -1);
          if (*(int *)(lVar22 + lVar15 * 4) == 0) {
            lStack_2028 = lVar15;
          }
        }
        auStack_2030[0] = (undefined1)uVar19;
        lStack_2020 = lVar22;
        uStack_2018 = uVar14;
        ppppppuStack_2010 = &ppppppuStack_1f90;
        (*(code *)puVar9[1])(*puVar9,auStack_2030);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10ae751fc; end: 10ae753db;  */

void FUN_10ae751fc(undefined8 *param_1,code *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  undefined1 *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long lVar15;
  char *pcVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined4 *puVar24;
  ulong uVar26;
  undefined1 auStack_1e00 [8];
  long lStack_1df8;
  long lStack_1df0;
  undefined8 uStack_1de8;
  undefined1 ******ppppppuStack_1de0;
  code *pcStack_1dd8;
  ulong uStack_1dd0;
  ulong uStack_1dc8;
  ulong uStack_1dc0;
  undefined8 uStack_1db8;
  ulong uStack_1db0;
  ulong uStack_1da8;
  ulong uStack_1da0;
  long lStack_1d98;
  undefined1 *****pppppuStack_1d60;
  code *pcStack_1d58;
  ulong uStack_1d50;
  ulong uStack_1d48;
  byte abStack_1d3a [10];
  long lStack_1d30;
  undefined1 *puStack_1d28;
  undefined8 uStack_1d20;
  long lStack_1d18;
  undefined1 ****ppppuStack_1d10;
  code *pcStack_1d08;
  undefined1 auStack_1cf8 [2560];
  long lStack_12f8;
  undefined1 ***pppuStack_12d0;
  undefined8 uStack_12c8;
  undefined1 auStack_12b8 [2048];
  long lStack_ab8;
  undefined1 **ppuStack_a90;
  undefined8 uStack_a88;
  undefined1 auStack_a78 [1536];
  long lStack_478;
  undefined1 *puStack_450;
  undefined8 uStack_448;
  undefined1 auStack_438 [1024];
  long lStack_38;
  undefined4 *puVar25;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _bzero(auStack_438,0x400);
  pcVar10 = (code *)auStack_438;
  (*param_2)(param_1,pcVar10,0x100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uStack_448 = 0x10ae75274;
  lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_450 = &stack0xfffffffffffffff0;
  _bzero(auStack_a78,0x600);
  pcVar11 = (code *)auStack_a78;
  (*pcVar10)(param_1,pcVar11,0x180);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_478) {
    return;
  }
  ___stack_chk_fail();
  uStack_a88 = 0x10ae752ec;
  lStack_ab8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_a90 = &puStack_450;
  _bzero(auStack_12b8,0x800);
  pcVar10 = (code *)auStack_12b8;
  (*pcVar11)(param_1,pcVar10,0x200);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ab8) {
    return;
  }
  ___stack_chk_fail();
  uStack_12c8 = 0x10ae75364;
  lStack_12f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_12d0 = &ppuStack_a90;
  _bzero(auStack_1cf8,0xa00);
  puVar12 = auStack_1cf8;
  uVar14 = 0x280;
  (*pcVar10)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_12f8) {
    ___stack_chk_fail();
    puVar13 = &uStack_1d50;
    pcStack_1d08 = FUN_10ae753dc;
    lStack_1d18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar21 = param_1[2];
    uVar20 = param_1[3];
    iVar5 = *(int *)(param_1 + 4);
    iVar1 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar1 = iVar5;
    }
    iVar1 = (iVar1 >> 5) + 1;
    lVar15 = (long)iVar1;
    iVar2 = iVar5 + 0xbe;
    if (-0xa0 < iVar5) {
      iVar2 = iVar5 + 0x9f;
    }
    uStack_1d48 = (ulong)(((iVar2 >> 5) * 0xb) / 10);
    lStack_1d30 = 0;
    uVar18 = iVar5 % 0x20;
    uVar3 = 0;
    if ((uVar18 & 0x40) == 0) {
      uVar3 = (int)(uVar21 << ((ulong)uVar18 & 0x3f));
    }
    *(undefined4 *)(puVar12 + (long)iVar1 * 4 + -4) = uVar3;
    uVar18 = 0x20 - uVar18;
    uVar23 = uVar20 >> ((ulong)uVar18 & 0x3f);
    bVar7 = (uVar18 & 0x40) == 0;
    uVar19 = uVar23;
    if (bVar7) {
      uVar19 = (uVar20 << 1) << ((ulong)~uVar18 & 0x3f) | uVar21 >> ((ulong)uVar18 & 0x3f);
    }
    uVar21 = 0;
    if (bVar7) {
      uVar21 = uVar23;
    }
    if (uVar19 != 0 || uVar21 != 0) {
      do {
        do {
          *(int *)(puVar12 + lVar15 * 4) = (int)uVar19;
          lVar15 = lVar15 + 1;
          uVar19 = uVar19 >> 0x20 | uVar21 << 0x20;
          uVar21 = uVar21 >> 0x20;
        } while (uVar21 != 0);
      } while (uVar19 != 0);
    }
    uVar21 = uStack_1d48;
    if (lVar15 == 0) {
      uVar20 = (ulong)*(uint *)(puVar12 + uStack_1d48 * 4);
      uStack_1d50 = uStack_1d48 + 1;
    }
    else {
      do {
        uStack_1d50 = uVar21;
        uVar20 = 0;
        lVar22 = lVar15;
        do {
          uVar20 = (ulong)*(uint *)(puVar12 + lVar22 * 4 + -4) | uVar20 << 0x20;
          *(int *)(puVar12 + lVar22 * 4 + -4) = (int)(uVar20 / 1000000000);
          uVar20 = uVar20 % 1000000000;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = lVar15 + -1;
        if (*(int *)(puVar12 + (lVar15 + -1) * 4) != 0) {
          lVar22 = lVar15;
        }
        *(int *)(puVar12 + (uStack_1d50 - 1) * 4) = (int)uVar20;
        lVar15 = lVar22;
        uVar21 = uStack_1d50 - 1;
      } while (lVar22 != 0);
    }
    puStack_1d28 = puVar12;
    uStack_1d20 = uVar14;
    ppppuStack_1d10 = &pppuStack_12d0;
    if ((int)uVar20 != 0) {
      do {
        uVar18 = (uint)uVar20;
        lVar15 = 2 - lStack_1d30;
        lStack_1d30 = lStack_1d30 + 1;
        abStack_1d3a[lVar15] = (char)uVar20 + (char)(uVar20 / 10) * -10 | 0x30;
        uVar20 = uVar20 / 10;
      } while (9 < uVar18);
    }
    plVar8 = (long *)*param_1;
    (*(code *)param_1[1])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d18) {
      return;
    }
    ___stack_chk_fail();
    pcStack_1d58 = FUN_10ae755b8;
    lStack_1d98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_1db8 = puVar13[3];
    uStack_1dc0 = puVar13[2];
    uStack_1da8 = puVar13[5];
    uVar21 = puVar13[4];
    uStack_1da0 = puVar13[6];
    uStack_1dc8 = puVar13[1];
    uStack_1dd0 = *puVar13;
    pcVar16 = (char *)*plVar8;
    lVar15 = *(long *)(pcVar16 + 0x10);
    if ((*(long *)(pcVar16 + 8) == 0) && ((*(byte *)(lVar15 + 1) >> 3 & 1) == 0)) {
      lVar22 = 0;
    }
    else {
      lVar22 = *(long *)(pcVar16 + 8) + 1;
    }
    uVar20 = (uStack_1dc8 - uStack_1dd0) * 9 + uVar21 + lVar22;
    if (*pcVar16 != '\0') {
      uVar20 = uVar20 + 1;
    }
    uVar18 = *(uint *)(lVar15 + 4);
    if (((int)uVar18 < 0) || (lVar22 = uVar18 - uVar20, uVar18 < uVar20 || lVar22 == 0)) {
      lVar15 = 0;
      lVar22 = 0;
      lVar17 = 0;
    }
    else {
      bVar7 = (*(byte *)(lVar15 + 1) & 0x10) != 0;
      lVar17 = lVar22;
      if (bVar7) {
        lVar17 = 0;
      }
      lVar4 = 0;
      if (bVar7) {
        lVar4 = lVar22;
      }
      bVar7 = (*(byte *)(lVar15 + 1) & 1) == 0;
      lVar15 = 0;
      if (bVar7) {
        lVar15 = lVar17;
      }
      lVar17 = 0;
      if (bVar7) {
        lVar22 = 0;
        lVar17 = lVar4;
      }
    }
    uStack_1db0 = uVar21;
    pppppuStack_1d60 = &ppppuStack_1d10;
    FUN_10ae7419c(*(undefined8 *)(pcVar16 + 0x18),lVar15,0x20);
    pcVar16 = (char *)*plVar8;
    if (*pcVar16 != '\0') {
      FUN_10ae7419c(*(undefined8 *)(pcVar16 + 0x18),1);
      pcVar16 = (char *)*plVar8;
    }
    FUN_10ae7419c(*(undefined8 *)(pcVar16 + 0x18),lVar17,0x30);
    func_0x000107c2b990(*(undefined8 *)(*plVar8 + 0x18),(long)&uStack_1db8 + (1 - uVar21),uVar21);
    if (uStack_1dd0 < uStack_1dc8) {
      do {
        lVar15 = 0x18;
        uVar21 = (ulong)*(uint *)(uStack_1da8 + uStack_1dd0 * 4);
        do {
          *(byte *)((long)&uStack_1dd0 + lVar15) = (char)uVar21 + (char)(uVar21 / 10) * -10 | 0x30;
          lVar15 = lVar15 + -1;
          uVar21 = uVar21 / 10;
        } while (lVar15 != 0xf);
        uStack_1db0 = 9;
        uStack_1dd0 = uStack_1dd0 + 1;
        func_0x000107c2b990(*(undefined8 *)(*plVar8 + 0x18),&uStack_1dc0,9);
      } while (uStack_1dd0 < uStack_1dc8);
    }
    lVar15 = *plVar8;
    if ((*(long *)(lVar15 + 8) == 0) && ((*(byte *)(*(long *)(lVar15 + 0x10) + 1) >> 3 & 1) == 0)) {
      uVar14 = 0;
    }
    else {
      FUN_10ae7419c(*(undefined8 *)(lVar15 + 0x18),1,0x2e);
      lVar15 = *plVar8;
      uVar14 = *(undefined8 *)(lVar15 + 8);
    }
    FUN_10ae7419c(*(undefined8 *)(lVar15 + 0x18),uVar14,0x30);
    puVar9 = *(undefined8 **)(*plVar8 + 0x18);
    uVar14 = 0x20;
    FUN_10ae7419c();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d98) {
      ___stack_chk_fail();
      pcStack_1dd8 = FUN_10ae757d8;
      uVar21 = puVar9[2];
      uVar20 = puVar9[3];
      iVar5 = *(int *)(puVar9 + 4);
      iVar1 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar1 = iVar5;
      }
      uVar18 = (iVar1 >> 5) + 1;
      uVar19 = (ulong)uVar18;
      lStack_1df8 = (long)(int)uVar18;
      uVar6 = iVar5 % 0x20;
      uVar3 = 0;
      if ((0x20 - uVar6 & 0x40) == 0) {
        uVar3 = (int)(uVar21 << ((ulong)(0x20 - uVar6) & 0x3f));
      }
      lVar15 = lStack_1df8 + -1;
      *(undefined4 *)(lVar22 + lVar15 * 4) = uVar3;
      uVar26 = uVar20 >> ((ulong)uVar6 & 0x3f);
      bVar7 = (uVar6 & 0x40) == 0;
      uVar23 = uVar26;
      if (bVar7) {
        uVar23 = (uVar20 << 1) << ((ulong)~uVar6 & 0x3f) | uVar21 >> ((ulong)uVar6 & 0x3f);
      }
      uVar21 = 0;
      if (bVar7) {
        uVar21 = uVar26;
      }
      if (uVar23 != 0 || uVar21 != 0) {
        puVar24 = (undefined4 *)(lVar22 + lVar15 * 4 + -4);
        do {
          do {
            puVar25 = puVar24 + -1;
            *puVar24 = (int)uVar23;
            uVar23 = uVar23 >> 0x20 | uVar21 << 0x20;
            uVar21 = uVar21 >> 0x20;
            puVar24 = puVar25;
          } while (uVar21 != 0);
        } while (uVar23 != 0);
      }
      if (uVar18 != 0) {
        uVar19 = 0;
        lVar17 = (long)(iVar1 >> 5);
        do {
          uVar19 = uVar19 + (ulong)*(uint *)(lVar22 + lVar17 * 4) * 10;
          *(int *)(lVar22 + lVar17 * 4) = (int)uVar19;
          uVar19 = uVar19 >> 0x20;
          lVar17 = lVar17 + -1;
        } while (lVar17 != -1);
        if (*(int *)(lVar22 + lVar15 * 4) == 0) {
          lStack_1df8 = lVar15;
        }
      }
      auStack_1e00[0] = (undefined1)uVar19;
      lStack_1df0 = lVar22;
      uStack_1de8 = uVar14;
      ppppppuStack_1de0 = &pppppuStack_1d60;
      (*(code *)puVar9[1])(*puVar9,auStack_1e00);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10ae753dc; end: 10ae755b7;  */

void FUN_10ae753dc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined8 uVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined4 *puVar21;
  ulong uVar23;
  undefined1 auStack_100 [8];
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  ulong uStack_50;
  ulong uStack_48;
  byte abStack_3a [10];
  long lStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  undefined4 *puVar22;
  
  puVar11 = &uStack_50;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = param_1[2];
  uVar5 = param_1[3];
  iVar6 = *(int *)(param_1 + 4);
  iVar1 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar1 = iVar6;
  }
  iVar1 = (iVar1 >> 5) + 1;
  lVar13 = (long)iVar1;
  iVar2 = iVar6 + 0xbe;
  if (-0xa0 < iVar6) {
    iVar2 = iVar6 + 0x9f;
  }
  uStack_48 = (ulong)(((iVar2 >> 5) * 0xb) / 10);
  lStack_30 = 0;
  uVar16 = iVar6 % 0x20;
  uVar3 = 0;
  if ((uVar16 & 0x40) == 0) {
    uVar3 = (int)(uVar18 << ((ulong)uVar16 & 0x3f));
  }
  *(undefined4 *)(param_2 + (long)iVar1 * 4 + -4) = uVar3;
  uVar16 = 0x20 - uVar16;
  uVar20 = uVar5 >> ((ulong)uVar16 & 0x3f);
  bVar8 = (uVar16 & 0x40) == 0;
  uVar17 = uVar20;
  if (bVar8) {
    uVar17 = (uVar5 << 1) << ((ulong)~uVar16 & 0x3f) | uVar18 >> ((ulong)uVar16 & 0x3f);
  }
  uVar18 = 0;
  if (bVar8) {
    uVar18 = uVar20;
  }
  if (uVar17 != 0 || uVar18 != 0) {
    do {
      do {
        *(int *)(param_2 + lVar13 * 4) = (int)uVar17;
        lVar13 = lVar13 + 1;
        uVar17 = uVar17 >> 0x20 | uVar18 << 0x20;
        uVar18 = uVar18 >> 0x20;
      } while (uVar18 != 0);
    } while (uVar17 != 0);
  }
  if (lVar13 == 0) {
    uVar18 = (ulong)*(uint *)(param_2 + uStack_48 * 4);
    uStack_50 = uStack_48 + 1;
  }
  else {
    uVar5 = uStack_48;
    do {
      uStack_50 = uVar5;
      uVar18 = 0;
      lVar19 = lVar13;
      do {
        uVar18 = (ulong)*(uint *)(param_2 + -4 + lVar19 * 4) | uVar18 << 0x20;
        *(int *)(param_2 + -4 + lVar19 * 4) = (int)(uVar18 / 1000000000);
        uVar18 = uVar18 % 1000000000;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = lVar13 + -1;
      if (*(int *)(param_2 + (lVar13 + -1) * 4) != 0) {
        lVar19 = lVar13;
      }
      *(int *)(param_2 + (uStack_50 - 1) * 4) = (int)uVar18;
      lVar13 = lVar19;
      uVar5 = uStack_50 - 1;
    } while (lVar19 != 0);
  }
  lStack_28 = param_2;
  uStack_20 = param_3;
  if ((int)uVar18 != 0) {
    do {
      uVar16 = (uint)uVar18;
      lVar13 = 2 - lStack_30;
      lStack_30 = lStack_30 + 1;
      abStack_3a[lVar13] = (char)uVar18 + (char)(uVar18 / 10) * -10 | 0x30;
      uVar18 = uVar18 / 10;
    } while (9 < uVar16);
  }
  plVar9 = (long *)*param_1;
  (*(code *)param_1[1])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_10ae755b8;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = puVar11[3];
  uStack_c0 = puVar11[2];
  uStack_a8 = puVar11[5];
  uVar18 = puVar11[4];
  uStack_a0 = puVar11[6];
  uStack_c8 = puVar11[1];
  uStack_d0 = *puVar11;
  pcVar14 = (char *)*plVar9;
  lVar13 = *(long *)(pcVar14 + 0x10);
  if ((*(long *)(pcVar14 + 8) == 0) && ((*(byte *)(lVar13 + 1) >> 3 & 1) == 0)) {
    lVar19 = 0;
  }
  else {
    lVar19 = *(long *)(pcVar14 + 8) + 1;
  }
  uVar5 = (uStack_c8 - uStack_d0) * 9 + uVar18 + lVar19;
  if (*pcVar14 != '\0') {
    uVar5 = uVar5 + 1;
  }
  uVar16 = *(uint *)(lVar13 + 4);
  if (((int)uVar16 < 0) || (lVar19 = uVar16 - uVar5, uVar16 < uVar5 || lVar19 == 0)) {
    lVar13 = 0;
    lVar19 = 0;
    lVar15 = 0;
  }
  else {
    bVar8 = (*(byte *)(lVar13 + 1) & 0x10) != 0;
    lVar15 = lVar19;
    if (bVar8) {
      lVar15 = 0;
    }
    lVar4 = 0;
    if (bVar8) {
      lVar4 = lVar19;
    }
    bVar8 = (*(byte *)(lVar13 + 1) & 1) == 0;
    lVar13 = 0;
    if (bVar8) {
      lVar13 = lVar15;
    }
    lVar15 = 0;
    if (bVar8) {
      lVar19 = 0;
      lVar15 = lVar4;
    }
  }
  uStack_b0 = uVar18;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10ae7419c(*(undefined8 *)(pcVar14 + 0x18),lVar13,0x20);
  pcVar14 = (char *)*plVar9;
  if (*pcVar14 != '\0') {
    FUN_10ae7419c(*(undefined8 *)(pcVar14 + 0x18),1);
    pcVar14 = (char *)*plVar9;
  }
  FUN_10ae7419c(*(undefined8 *)(pcVar14 + 0x18),lVar15,0x30);
  func_0x000107c2b990(*(undefined8 *)(*plVar9 + 0x18),(long)&uStack_b8 + (1 - uVar18),uVar18);
  if (uStack_d0 < uStack_c8) {
    do {
      lVar13 = 0x18;
      uVar18 = (ulong)*(uint *)(uStack_a8 + uStack_d0 * 4);
      do {
        *(byte *)((long)&uStack_d0 + lVar13) = (char)uVar18 + (char)(uVar18 / 10) * -10 | 0x30;
        lVar13 = lVar13 + -1;
        uVar18 = uVar18 / 10;
      } while (lVar13 != 0xf);
      uStack_b0 = 9;
      uStack_d0 = uStack_d0 + 1;
      func_0x000107c2b990(*(undefined8 *)(*plVar9 + 0x18),&uStack_c0,9);
    } while (uStack_d0 < uStack_c8);
  }
  lVar13 = *plVar9;
  if ((*(long *)(lVar13 + 8) == 0) && ((*(byte *)(*(long *)(lVar13 + 0x10) + 1) >> 3 & 1) == 0)) {
    uVar12 = 0;
  }
  else {
    FUN_10ae7419c(*(undefined8 *)(lVar13 + 0x18),1,0x2e);
    lVar13 = *plVar9;
    uVar12 = *(undefined8 *)(lVar13 + 8);
  }
  FUN_10ae7419c(*(undefined8 *)(lVar13 + 0x18),uVar12,0x30);
  puVar10 = *(undefined8 **)(*plVar9 + 0x18);
  uVar12 = 0x20;
  FUN_10ae7419c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_10ae757d8;
  uVar18 = puVar10[2];
  uVar5 = puVar10[3];
  iVar6 = *(int *)(puVar10 + 4);
  iVar1 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar1 = iVar6;
  }
  uVar16 = (iVar1 >> 5) + 1;
  uVar17 = (ulong)uVar16;
  lStack_f8 = (long)(int)uVar16;
  uVar7 = iVar6 % 0x20;
  uVar3 = 0;
  if ((0x20 - uVar7 & 0x40) == 0) {
    uVar3 = (int)(uVar18 << ((ulong)(0x20 - uVar7) & 0x3f));
  }
  lVar13 = lStack_f8 + -1;
  *(undefined4 *)(lVar19 + lVar13 * 4) = uVar3;
  uVar23 = uVar5 >> ((ulong)uVar7 & 0x3f);
  bVar8 = (uVar7 & 0x40) == 0;
  uVar20 = uVar23;
  if (bVar8) {
    uVar20 = (uVar5 << 1) << ((ulong)~uVar7 & 0x3f) | uVar18 >> ((ulong)uVar7 & 0x3f);
  }
  uVar18 = 0;
  if (bVar8) {
    uVar18 = uVar23;
  }
  if (uVar20 != 0 || uVar18 != 0) {
    puVar21 = (undefined4 *)(lVar19 + lVar13 * 4 + -4);
    do {
      do {
        puVar22 = puVar21 + -1;
        *puVar21 = (int)uVar20;
        uVar20 = uVar20 >> 0x20 | uVar18 << 0x20;
        uVar18 = uVar18 >> 0x20;
        puVar21 = puVar22;
      } while (uVar18 != 0);
    } while (uVar20 != 0);
  }
  if (uVar16 != 0) {
    uVar17 = 0;
    lVar15 = (long)(iVar1 >> 5);
    do {
      uVar17 = uVar17 + (ulong)*(uint *)(lVar19 + lVar15 * 4) * 10;
      *(int *)(lVar19 + lVar15 * 4) = (int)uVar17;
      uVar17 = uVar17 >> 0x20;
      lVar15 = lVar15 + -1;
    } while (lVar15 != -1);
    if (*(int *)(lVar19 + lVar13 * 4) == 0) {
      lStack_f8 = lVar13;
    }
  }
  auStack_100[0] = (undefined1)uVar17;
  lStack_f0 = lVar19;
  uStack_e8 = uVar12;
  ppuStack_e0 = &puStack_60;
  (*(code *)puVar10[1])(*puVar10,auStack_100);
  return;
}



/* Entry: 10ae755b8; end: 10ae757d7;  */

void FUN_10ae755b8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  ulong uVar20;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined4 *puVar19;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uVar17 = param_2[4];
  uStack_50 = param_2[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  pcVar11 = (char *)*param_1;
  lVar12 = *(long *)(pcVar11 + 0x10);
  if ((*(long *)(pcVar11 + 8) == 0) && ((*(byte *)(lVar12 + 1) >> 3 & 1) == 0)) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(pcVar11 + 8) + 1;
  }
  uVar1 = (uStack_78 - uStack_80) * 9 + uVar17 + lVar15;
  if (*pcVar11 != '\0') {
    uVar1 = uVar1 + 1;
  }
  uVar5 = *(uint *)(lVar12 + 4);
  if (((int)uVar5 < 0) || (lVar15 = uVar5 - uVar1, uVar5 < uVar1 || lVar15 == 0)) {
    lVar12 = 0;
    lVar15 = 0;
    lVar13 = 0;
  }
  else {
    bVar8 = (*(byte *)(lVar12 + 1) & 0x10) != 0;
    lVar13 = lVar15;
    if (bVar8) {
      lVar13 = 0;
    }
    lVar4 = 0;
    if (bVar8) {
      lVar4 = lVar15;
    }
    bVar8 = (*(byte *)(lVar12 + 1) & 1) == 0;
    lVar12 = 0;
    if (bVar8) {
      lVar12 = lVar13;
    }
    lVar13 = 0;
    if (bVar8) {
      lVar15 = 0;
      lVar13 = lVar4;
    }
  }
  uStack_60 = uVar17;
  FUN_10ae7419c(*(undefined8 *)(pcVar11 + 0x18),lVar12,0x20);
  pcVar11 = (char *)*param_1;
  if (*pcVar11 != '\0') {
    FUN_10ae7419c(*(undefined8 *)(pcVar11 + 0x18),1);
    pcVar11 = (char *)*param_1;
  }
  FUN_10ae7419c(*(undefined8 *)(pcVar11 + 0x18),lVar13,0x30);
  func_0x000107c2b990(*(undefined8 *)(*param_1 + 0x18),(long)&uStack_68 + (1 - uVar17),uVar17);
  if (uStack_80 < uStack_78) {
    do {
      lVar12 = 0x18;
      uVar17 = (ulong)*(uint *)(uStack_58 + uStack_80 * 4);
      do {
        *(byte *)((long)&uStack_80 + lVar12) = (char)uVar17 + (char)(uVar17 / 10) * -10 | 0x30;
        lVar12 = lVar12 + -1;
        uVar17 = uVar17 / 10;
      } while (lVar12 != 0xf);
      uStack_60 = 9;
      uStack_80 = uStack_80 + 1;
      func_0x000107c2b990(*(undefined8 *)(*param_1 + 0x18),&uStack_70,9);
    } while (uStack_80 < uStack_78);
  }
  lVar12 = *param_1;
  if ((*(long *)(lVar12 + 8) == 0) && ((*(byte *)(*(long *)(lVar12 + 0x10) + 1) >> 3 & 1) == 0)) {
    uVar10 = 0;
  }
  else {
    FUN_10ae7419c(*(undefined8 *)(lVar12 + 0x18),1,0x2e);
    lVar12 = *param_1;
    uVar10 = *(undefined8 *)(lVar12 + 8);
  }
  FUN_10ae7419c(*(undefined8 *)(lVar12 + 0x18),uVar10,0x30);
  puVar9 = *(undefined8 **)(*param_1 + 0x18);
  uVar10 = 0x20;
  FUN_10ae7419c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_10ae757d8;
  uVar17 = puVar9[2];
  uVar1 = puVar9[3];
  iVar6 = *(int *)(puVar9 + 4);
  iVar2 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar2 = iVar6;
  }
  uVar5 = (iVar2 >> 5) + 1;
  uVar14 = (ulong)uVar5;
  lStack_a8 = (long)(int)uVar5;
  uVar7 = iVar6 % 0x20;
  uVar3 = 0;
  if ((0x20 - uVar7 & 0x40) == 0) {
    uVar3 = (int)(uVar17 << ((ulong)(0x20 - uVar7) & 0x3f));
  }
  lVar12 = lStack_a8 + -1;
  *(undefined4 *)(lVar15 + lVar12 * 4) = uVar3;
  uVar20 = uVar1 >> ((ulong)uVar7 & 0x3f);
  bVar8 = (uVar7 & 0x40) == 0;
  uVar16 = uVar20;
  if (bVar8) {
    uVar16 = (uVar1 << 1) << ((ulong)~uVar7 & 0x3f) | uVar17 >> ((ulong)uVar7 & 0x3f);
  }
  uVar17 = 0;
  if (bVar8) {
    uVar17 = uVar20;
  }
  if (uVar16 != 0 || uVar17 != 0) {
    puVar18 = (undefined4 *)(lVar15 + lVar12 * 4 + -4);
    do {
      do {
        puVar19 = puVar18 + -1;
        *puVar18 = (int)uVar16;
        uVar16 = uVar16 >> 0x20 | uVar17 << 0x20;
        uVar17 = uVar17 >> 0x20;
        puVar18 = puVar19;
      } while (uVar17 != 0);
    } while (uVar16 != 0);
  }
  if (uVar5 != 0) {
    uVar14 = 0;
    lVar13 = (long)(iVar2 >> 5);
    do {
      uVar14 = uVar14 + (ulong)*(uint *)(lVar15 + lVar13 * 4) * 10;
      *(int *)(lVar15 + lVar13 * 4) = (int)uVar14;
      uVar14 = uVar14 >> 0x20;
      lVar13 = lVar13 + -1;
    } while (lVar13 != -1);
    if (*(int *)(lVar15 + lVar12 * 4) == 0) {
      lStack_a8 = lVar12;
    }
  }
  auStack_b0[0] = (undefined1)uVar14;
  lStack_a0 = lVar15;
  uStack_98 = uVar10;
  puStack_90 = &stack0xfffffffffffffff0;
  (*(code *)puVar9[1])(*puVar9,auStack_b0);
  return;
}



/* Entry: 10ae757d8; end: 10ae758cb;  */

void FUN_10ae757d8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar15;
  undefined1 auStack_30 [8];
  long lStack_28;
  long lStack_20;
  undefined8 uStack_18;
  undefined4 *puVar14;
  
  uVar12 = param_1[2];
  uVar4 = param_1[3];
  iVar5 = *(int *)(param_1 + 4);
  iVar2 = iVar5 + 0x1f;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  uVar1 = (iVar2 >> 5) + 1;
  uVar10 = (ulong)uVar1;
  lStack_28 = (long)(int)uVar1;
  uVar6 = iVar5 % 0x20;
  uVar3 = 0;
  if ((0x20 - uVar6 & 0x40) == 0) {
    uVar3 = (int)(uVar12 << ((ulong)(0x20 - uVar6) & 0x3f));
  }
  lVar8 = lStack_28 + -1;
  *(undefined4 *)(param_2 + lVar8 * 4) = uVar3;
  uVar15 = uVar4 >> ((ulong)uVar6 & 0x3f);
  bVar7 = (uVar6 & 0x40) == 0;
  uVar11 = uVar15;
  if (bVar7) {
    uVar11 = (uVar4 << 1) << ((ulong)~uVar6 & 0x3f) | uVar12 >> ((ulong)uVar6 & 0x3f);
  }
  uVar12 = 0;
  if (bVar7) {
    uVar12 = uVar15;
  }
  if (uVar11 != 0 || uVar12 != 0) {
    puVar13 = (undefined4 *)(param_2 + lVar8 * 4 + -4);
    do {
      do {
        puVar14 = puVar13 + -1;
        *puVar13 = (int)uVar11;
        uVar11 = uVar11 >> 0x20 | uVar12 << 0x20;
        uVar12 = uVar12 >> 0x20;
        puVar13 = puVar14;
      } while (uVar12 != 0);
    } while (uVar11 != 0);
  }
  if (uVar1 != 0) {
    uVar10 = 0;
    lVar9 = (long)(iVar2 >> 5);
    do {
      uVar10 = uVar10 + (ulong)*(uint *)(param_2 + lVar9 * 4) * 10;
      *(int *)(param_2 + lVar9 * 4) = (int)uVar10;
      uVar10 = uVar10 >> 0x20;
      lVar9 = lVar9 + -1;
    } while (lVar9 != -1);
    if (*(int *)(param_2 + lVar8 * 4) == 0) {
      lStack_28 = lVar8;
    }
  }
  auStack_30[0] = (undefined1)uVar10;
  lStack_20 = param_2;
  uStack_18 = param_3;
  (*(code *)param_1[1])(*param_1,auStack_30);
  return;
}



/* Entry: 10ae758cc; end: 10ae75abb;  */

void FUN_10ae758cc(long *param_1,byte *param_2)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  if ((*(long *)(*param_1 + 8) != 0) && (uVar5 = *(ulong *)param_1[1], uVar5 != 0)) {
    lVar7 = *(long *)(param_2 + 8);
    lVar2 = *(long *)(param_2 + 0x10);
    lVar9 = lVar2 + -4;
    uVar4 = (ulong)*param_2;
    do {
      if ((uint)uVar4 == 0) {
        if (lVar7 == 0) {
          return;
        }
LAB_10ae75924:
        uVar10 = 0;
        lVar6 = lVar7;
        do {
          uVar10 = uVar10 + (ulong)*(uint *)(lVar9 + lVar6 * 4) * 10;
          *(int *)(lVar9 + lVar6 * 4) = (int)uVar10;
          uVar10 = uVar10 >> 0x20;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        lVar6 = lVar7 + -1;
        if (*(int *)(lVar2 + (lVar7 + -1) * 4) != 0) {
          lVar6 = lVar7;
        }
        lVar7 = lVar6;
        if (uVar10 != 9) goto LAB_10ae759b0;
        lVar8 = 0;
        do {
          lVar8 = lVar8 + 1;
          if (lVar6 == 0) {
            uVar10 = 0;
            lVar7 = lVar6;
            break;
          }
          uVar10 = 0;
          lVar7 = lVar6;
          do {
            uVar10 = uVar10 + (ulong)*(uint *)(lVar9 + lVar7 * 4) * 10;
            *(int *)(lVar9 + lVar7 * 4) = (int)uVar10;
            uVar10 = uVar10 >> 0x20;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
          lVar7 = lVar6 + -1;
          if (*(int *)(lVar2 + (lVar6 + -1) * 4) != 0) {
            lVar7 = lVar6;
          }
          lVar6 = lVar7;
        } while (uVar10 == 9);
      }
      else {
        if (lVar7 != 0) goto LAB_10ae75924;
        uVar10 = 0;
LAB_10ae759b0:
        lVar8 = 0;
      }
      uVar1 = lVar8 + 1;
      cVar3 = (char)uVar4;
      if (uVar5 <= uVar1) {
        if ((((uint)uVar10 < 6) && (uVar1 <= uVar5)) &&
           (((uint)uVar10 != 5 || (((lVar7 == 0 && (((uint)uVar4 & 0x81) != 1)) && (lVar8 == 0))))))
        {
          FUN_10ae7419c(*(undefined8 *)(*param_1 + 0x18),1,(int)(char)(cVar3 + '0'));
          FUN_10ae7419c(*(undefined8 *)(*param_1 + 0x18),*(long *)param_1[1] + -1,0x39);
          *(undefined8 *)param_1[1] = 0;
          return;
        }
        FUN_10ae7419c(*(undefined8 *)(*param_1 + 0x18),1,(int)(char)(cVar3 + '1'));
        *(long *)param_1[1] = *(long *)param_1[1] + -1;
        return;
      }
      FUN_10ae7419c(*(undefined8 *)(*param_1 + 0x18),1,(int)(char)(cVar3 + '0'));
      FUN_10ae7419c(*(undefined8 *)(*param_1 + 0x18),lVar8,0x39);
      uVar5 = *(ulong *)param_1[1] - uVar1;
      *(ulong *)param_1[1] = uVar5;
      uVar4 = uVar10;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 10ae75abc; end: 10ae75ca7;  */

byte * FUN_10ae75abc(ulong param_1,ulong param_2,byte *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    do {
      uVar3 = (int)param_1 + (int)(param_1 / 10) * -10 + (int)(param_2 % 10) * 6;
      uVar2 = (uVar3 & 0xff) / 10;
      param_1 = (param_2 % 10) * 0x1999999999999999 + param_1 / 10 + (ulong)uVar2;
      param_3 = param_3 + -1;
      *param_3 = (char)uVar3 + (char)uVar2 * -10 | 0x30;
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
  }
  do {
    param_3 = param_3 + -1;
    *param_3 = (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  return param_3;
}



/* Entry: 10ae75ca8; end: 10ae75e3f;  */

/* WARNING: Possible PIC construction at 0x00010ae75dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae75de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae75e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae75d4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae75e0c) */
/* WARNING: Removing unreachable block (ram,0x00010ae7419c) */
/* WARNING: Removing unreachable block (ram,0x00010ae741a0) */
/* WARNING: Removing unreachable block (ram,0x00010ae741dc) */
/* WARNING: Removing unreachable block (ram,0x00010ae741e0) */
/* WARNING: Removing unreachable block (ram,0x00010ae74204) */
/* WARNING: Removing unreachable block (ram,0x00010ae741e8) */
/* WARNING: Removing unreachable block (ram,0x00010ae74208) */
/* WARNING: Removing unreachable block (ram,0x00010ae74230) */
/* WARNING: Removing unreachable block (ram,0x00010ae74234) */
/* WARNING: Removing unreachable block (ram,0x00010ae7425c) */
/* WARNING: Removing unreachable block (ram,0x00010ae75dec) */
/* WARNING: Removing unreachable block (ram,0x00010ae75dc8) */
/* WARNING: Removing unreachable block (ram,0x00010ae75e34) */
/* WARNING: Removing unreachable block (ram,0x00010ae75e44) */
/* WARNING: Removing unreachable block (ram,0x00010ae75e50) */
/* WARNING: Removing unreachable block (ram,0x00010ae75e7c) */
/* WARNING: Removing unreachable block (ram,0x00010ae75ea0) */
/* WARNING: Removing unreachable block (ram,0x00010ae75de0) */
/* WARNING: Removing unreachable block (ram,0x00010ae75d50) */

void FUN_10ae75ca8(char *param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 4);
  if ((int)uVar3 < 0) {
    if (*param_1 != '\0') {
      FUN_10ae7419c(*(undefined8 *)(param_1 + 0x18),1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x18);
  }
  else {
    uVar2 = param_5 + param_3 + param_7;
    if (*param_1 != '\0') {
      uVar2 = uVar2 + 1;
    }
    lVar5 = uVar3 - uVar2;
    if (uVar3 < uVar2 || lVar5 == 0) {
      lVar7 = 0;
    }
    else {
      bVar4 = *(byte *)(*(long *)(param_1 + 0x10) + 1);
      if ((bVar4 & 0x10) != 0) {
        lVar5 = 0;
      }
      lVar7 = 0;
      if ((bVar4 & 1) == 0) {
        lVar7 = lVar5;
      }
    }
    FUN_10ae7419c(*(undefined8 *)(param_1 + 0x18),lVar7,0x20);
    if (*param_1 != '\0') {
      FUN_10ae7419c(*(undefined8 *)(param_1 + 0x18),1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    if (param_4 <= param_3) {
      param_3 = param_4;
    }
  }
  if (param_3 != 0) {
    lVar5 = puVar6[3];
    puVar6[2] = puVar6[2] + param_3;
    if ((ulong)((long)puVar6 + (0x420 - lVar5)) <= param_3) {
      puVar1 = puVar6 + 4;
      (*(code *)puVar6[1])(*puVar6,puVar1,lVar5 - (long)puVar1);
      puVar6[3] = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0001004d4ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)puVar6[1])(*puVar6,param_2,param_3);
      return;
    }
    func_0x000107c610b4(lVar5,param_2,param_3);
    puVar6[3] = puVar6[3] + param_3;
  }
  return;
}



/* Entry: 10ae75e40; end: 10ae75f97;  */

long FUN_10ae75e40(ulong param_1,long param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long lVar4;
  
  lVar4 = 0;
  if (param_1 != 0) {
    do {
      lVar4 = *(long *)(param_2 + 0x58);
      *(long *)(param_2 + 0x58) = lVar4 + -1;
      *(byte *)(lVar4 + -1) = (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
      bVar1 = 9 < param_1;
      param_1 = param_1 / 10;
    } while (bVar1);
    puVar2 = *(undefined1 **)(param_2 + 0x58);
    lVar4 = *(long *)(param_2 + 0x60) - (long)puVar2;
    uVar3 = *puVar2;
    *(undefined1 **)(param_2 + 0x58) = puVar2 + -1;
    puVar2[-1] = uVar3;
    *(undefined1 *)(*(long *)(param_2 + 0x58) + 1) = 0x2e;
  }
  return lVar4;
}



/* Entry: 10ae75f98; end: 10ae76047;  */

long FUN_10ae75f98(ulong param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == 0 && param_2 == 0) {
    return 0;
  }
  do {
    uVar5 = param_1;
    lVar6 = param_2;
    ___udivti3(param_1,param_2,10,0);
    bVar4 = param_1 < 10;
    uVar3 = param_2 + (ulong)!bVar4;
    lVar7 = *(long *)(param_3 + 0x58);
    *(long *)(param_3 + 0x58) = lVar7 + -1;
    *(byte *)(lVar7 + -1) = (char)param_1 + (char)uVar5 * -10 | 0x30;
    param_1 = uVar5;
    param_2 = lVar6;
  } while (!CARRY8(~uVar3,(ulong)bVar4));
  puVar1 = *(undefined1 **)(param_3 + 0x58);
  lVar6 = *(long *)(param_3 + 0x60);
  uVar2 = *puVar1;
  *(undefined1 **)(param_3 + 0x58) = puVar1 + -1;
  puVar1[-1] = uVar2;
  *(undefined1 *)(*(long *)(param_3 + 0x58) + 1) = 0x2e;
  return lVar6 - (long)puVar1;
}



/* Entry: 10ae76048; end: 10ae76467;  */

undefined8 FUN_10ae76048(ulong param_1,ulong param_2,ulong param_3,long param_4,int *param_5)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  if (0x27 < param_3) {
    return 0;
  }
  *(long *)(param_4 + 0x58) = param_4 + 0x29;
  *(long *)(param_4 + 0x60) = param_4 + 0x29;
  uVar10 = (uint)param_2;
  if (-1 < (int)uVar10) {
    if (uVar10 < 0xc) {
      lVar8 = param_1 << (param_2 & 0xf);
      func_0x00010ae75e40(lVar8,param_4);
      uVar13 = lVar8 - 1;
      *param_5 = (int)uVar13;
      lVar9 = uVar13 - param_3;
      if (uVar13 < param_3 || lVar9 == 0) {
        if (param_3 == uVar13) {
          return 1;
        }
        lVar8 = ~param_3 + lVar8;
        do {
          puVar15 = *(undefined1 **)(param_4 + 0x60);
          *(undefined1 **)(param_4 + 0x60) = puVar15 + 1;
          *puVar15 = 0x30;
          bVar7 = lVar8 != -1;
          lVar8 = lVar8 + 1;
        } while (bVar7);
        return 1;
      }
    }
    else {
      if (0x4b < uVar10) {
        return 0;
      }
      uVar12 = param_1 << (param_2 & 0x3f);
      bVar7 = (param_2 & 0x40) == 0;
      uVar13 = uVar12;
      if (bVar7) {
        uVar13 = (param_1 >> 1) >> ((ulong)~uVar10 & 0x3f);
      }
      uVar17 = 0;
      if (bVar7) {
        uVar17 = uVar12;
      }
      FUN_10ae75f98(uVar17,uVar13,param_4);
      uVar13 = uVar17 - 1;
      *param_5 = (int)uVar13;
      lVar9 = uVar13 - param_3;
      if (uVar13 < param_3 || lVar9 == 0) {
        if (param_3 == uVar13) {
          return 1;
        }
        lVar8 = ~param_3 + uVar17;
        do {
          puVar15 = *(undefined1 **)(param_4 + 0x60);
          *(undefined1 **)(param_4 + 0x60) = puVar15 + 1;
          *puVar15 = 0x30;
          bVar7 = lVar8 != -1;
          lVar8 = lVar8 + 1;
        } while (bVar7);
        return 1;
      }
    }
    bVar7 = false;
    goto LAB_10ae76220;
  }
  if (uVar10 < 0xffffffc4) {
    if (uVar10 < 0xffffff84) {
      return 0;
    }
    uVar2 = -uVar10;
    uVar17 = (ulong)uVar2;
    uVar12 = -1L << (uVar17 & 0x3f);
    bVar7 = (uVar2 & 0x40) == 0;
    uVar13 = uVar12;
    if (bVar7) {
      uVar13 = uVar12 | 0x7fffffffffffffffU >> ((ulong)(uVar10 - 1) & 0x3f);
    }
    uVar19 = 0;
    if (bVar7) {
      uVar19 = uVar12;
    }
    uVar18 = ~uVar19;
    uVar13 = ~uVar13;
    uVar12 = 0;
    if (bVar7) {
      uVar12 = param_1 >> (uVar17 & 0x3f);
    }
    FUN_10ae75f98(uVar12,0,param_4);
    uVar14 = 0;
    param_1 = param_1 & (uVar19 ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      *param_5 = 0;
      if (param_1 == 0) {
        uVar14 = 0;
        uVar12 = 0;
      }
      else {
        iVar11 = 0;
        do {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = param_1;
          uVar14 = SUB168(auVar4 * ZEXT816(10),8) + uVar14 * 10;
          uVar12 = param_1 * 10;
          iVar11 = iVar11 + -1;
          uVar19 = param_1 * 10;
          param_1 = uVar12;
        } while (CARRY8(uVar13,~uVar14) || CARRY8(uVar13 + ~uVar14,(ulong)(uVar19 <= uVar18)));
        *param_5 = iVar11;
      }
      bVar1 = (byte)(uVar14 >> (uVar17 & 0x3f));
      if ((uVar2 & 0x40) == 0) {
        bVar1 = (byte)((uVar14 << 1) << ((ulong)~uVar2 & 0x3f)) | (byte)(uVar12 >> (uVar17 & 0x3f));
      }
      lVar8 = *(long *)(param_4 + 0x58);
      *(long *)(param_4 + 0x58) = lVar8 + -1;
      *(byte *)(lVar8 + -1) = bVar1 + 0x30;
      puVar15 = *(undefined1 **)(param_4 + 0x60);
      *(undefined1 **)(param_4 + 0x60) = puVar15 + 1;
      *puVar15 = 0x2e;
      param_1 = uVar12 & uVar18;
      uVar14 = uVar14 & uVar13;
    }
    else {
      uVar12 = uVar12 - 1;
      *param_5 = (int)uVar12;
      lVar9 = uVar12 - param_3;
      if (param_3 <= uVar12 && lVar9 != 0) {
LAB_10ae76218:
        bVar7 = param_1 != 0;
LAB_10ae76220:
        func_0x00010ae75ea4(lVar9,bVar7,param_4,param_5);
        return 1;
      }
      param_3 = param_3 - uVar12;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_1;
      uVar14 = SUB168(auVar5 * ZEXT816(10),8) + uVar14 * 10;
      bVar1 = (byte)(uVar14 >> (uVar17 & 0x3f));
      if ((uVar2 & 0x40) == 0) {
        bVar1 = (byte)(uVar14 * 2 << ((ulong)~uVar2 & 0x3f)) |
                (byte)(param_1 * 10 >> (uVar17 & 0x3f));
      }
      uVar14 = uVar14 & uVar13;
      param_1 = uVar18 & param_1 * 10;
      pcVar16 = *(char **)(param_4 + 0x60);
      *(char **)(param_4 + 0x60) = pcVar16 + 1;
      *pcVar16 = bVar1 + 0x30;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_1;
    uVar12 = SUB168(auVar6 * ZEXT816(10),8) + uVar14 * 10;
    bVar1 = (byte)(uVar12 >> (uVar17 & 0x3f));
    if ((uVar2 & 0x40) == 0) {
      bVar1 = (byte)(uVar12 * 2 << ((ulong)~uVar2 & 0x3f)) | (byte)(param_1 * 10 >> (uVar17 & 0x3f))
      ;
    }
    if ('\x05' < (char)bVar1) goto LAB_10ae76440;
    if (bVar1 != 5) {
      return 1;
    }
    if ((uVar18 & param_1 * 10) != 0 || (uVar12 & uVar13) != 0) goto LAB_10ae76440;
  }
  else {
    uVar12 = (ulong)-uVar10;
    uVar19 = -1L << (uVar12 & 0x3f);
    uVar17 = ~uVar19;
    uVar13 = param_1 >> (uVar12 & 0x3f);
    func_0x00010ae75e40(uVar13,param_4);
    param_1 = param_1 & (uVar19 ^ 0xffffffffffffffff);
    if (uVar13 == 0) {
      *param_5 = 0;
      uVar13 = 0;
      if (param_1 != 0) {
        iVar11 = 0;
        do {
          param_1 = param_1 * 10;
          iVar11 = iVar11 + -1;
        } while (param_1 < uVar17 || param_1 - uVar17 == 0);
        *param_5 = iVar11;
        uVar13 = param_1;
      }
      lVar8 = *(long *)(param_4 + 0x58);
      *(long *)(param_4 + 0x58) = lVar8 + -1;
      *(char *)(lVar8 + -1) = (char)(uVar13 >> (uVar12 & 0x3f)) + '0';
      puVar15 = *(undefined1 **)(param_4 + 0x60);
      *(undefined1 **)(param_4 + 0x60) = puVar15 + 1;
      *puVar15 = 0x2e;
      param_1 = uVar13 & uVar17;
    }
    else {
      uVar13 = uVar13 - 1;
      *param_5 = (int)uVar13;
      lVar9 = uVar13 - param_3;
      if (param_3 <= uVar13 && lVar9 != 0) goto LAB_10ae76218;
      param_3 = param_3 - uVar13;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar13 = param_1 * 10;
      param_1 = uVar17 & param_1 * 10;
      pcVar16 = *(char **)(param_4 + 0x60);
      *(char **)(param_4 + 0x60) = pcVar16 + 1;
      *pcVar16 = (char)(uVar13 >> (uVar12 & 0x3f)) + '0';
    }
    cVar3 = (char)(param_1 * 10 >> (uVar12 & 0x3f));
    if ('\x05' < cVar3) goto LAB_10ae76440;
    if (cVar3 != '\x05') {
      return 1;
    }
    if ((uVar17 & param_1 * 10) != 0) goto LAB_10ae76440;
  }
  bVar1 = *(byte *)(*(long *)(param_4 + 0x60) + -1);
  if (bVar1 == 0x2e) {
    bVar1 = *(byte *)(*(long *)(param_4 + 0x60) + -2);
  }
  if ((bVar1 & 0x81) != 1) {
    return 1;
  }
LAB_10ae76440:
  func_0x00010ae75f14(param_4,param_5);
  return 1;
}



/* Entry: 10ae76468; end: 10ae7665f;  */

/* WARNING: Type propagation algorithm not settling */

byte ******* FUN_10ae76468(byte *param_1,byte *******param_2,undefined8 param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  byte *******pppppppbVar3;
  byte *******pppppppbVar4;
  byte bVar5;
  undefined1 uVar6;
  byte *******pppppppbVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  byte *******pppppppbVar11;
  int iVar12;
  int iVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  long lVar17;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined2 uStack_87;
  undefined1 auStack_85 [29];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0x25;
  FUN_10ae74398(&pppppppbStack_a0,param_1[1]);
  lVar17 = (long)uStack_90._7_1_;
  if (lVar17 < 0) {
    _memcpy(&uStack_87,pppppppbStack_a0,pppppppbStack_98);
    __ZdlPv(pppppppbStack_a0);
  }
  else {
    _memcpy(&uStack_87,&pppppppbStack_a0,lVar17);
    pppppppbStack_98 = (byte *******)lVar17;
  }
  auStack_85[(long)pppppppbStack_98] = 0x2a;
  *(undefined2 *)((long)&uStack_87 + (long)pppppppbStack_98) = 0x2e2a;
  if ((ulong)*param_1 < 0x13) {
    uVar6 = (&UNK_10e52c0e0)[*param_1];
  }
  else {
    uVar6 = 0;
  }
  auStack_85[(long)pppppppbStack_98 + 1] = uVar6;
  auStack_85[(long)pppppppbStack_98 + 2] = 0;
  pppppppbVar3 = (byte *******)0x208;
  __Znwm();
  uStack_90 = 0x8000000000000208;
  pppppppbStack_98 = (byte *******)0x200;
  pppppppbStack_a0 = pppppppbVar3;
  _bzero();
LAB_10ae76568:
  pppppppbVar3 = pppppppbStack_98;
  pppppppbVar11 = pppppppbStack_a0;
  if (-1 < (long)uStack_90) {
    pppppppbVar3 = (byte *******)(uStack_90 >> 0x38);
    pppppppbVar11 = (byte *******)&pppppppbStack_a0;
  }
  pppppppbVar4 = (byte *******)&uStack_88;
  _snprintf();
  uVar2 = (uint)pppppppbVar11;
  if ((int)uVar2 < 0) goto LAB_10ae765e4;
  pppppppbVar4 = (byte *******)((ulong)pppppppbVar11 & 0xffffffff);
  if (uStack_90._7_1_ < 0) {
    pppppppbVar3 = pppppppbStack_a0;
    if (pppppppbVar4 < pppppppbStack_98) goto LAB_10ae765dc;
LAB_10ae765bc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&pppppppbStack_a0,(byte *)((long)pppppppbVar4 + 1),0);
    goto LAB_10ae76568;
  }
  if ((uint)(int)uStack_90._7_1_ <= uVar2) goto LAB_10ae765bc;
  pppppppbVar3 = (byte *******)&pppppppbStack_a0;
LAB_10ae765dc:
  func_0x000107c2b990();
  pppppppbVar11 = param_2;
LAB_10ae765e4:
  if ((long)uStack_90 < 0) {
    pppppppbVar11 = pppppppbStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (byte *******)(ulong)(~uVar2 >> 0x1f);
  }
  ___stack_chk_fail();
  if ((long)uStack_90 < 0) {
    __ZdlPv(pppppppbStack_a0);
  }
  __Unwind_Resume();
  iVar8 = *param_4;
  if (iVar8 < 0) {
LAB_10ae7674c:
    if (pppppppbVar11 == pppppppbVar3) {
      return (byte *******)0x0;
    }
    if (*(byte *)pppppppbVar11 - 0x3a < 0xfffffff7) {
      return (byte *******)0x0;
    }
    iVar8 = *(byte *)pppppppbVar11 - 0x30;
    if ((byte *******)((long)pppppppbVar11 + 1) != pppppppbVar3) {
      iVar12 = -8;
      pppppppbVar11 = (byte *******)((long)pppppppbVar11 + 1);
      do {
        pppppppbVar7 = (byte *******)((long)pppppppbVar11 + 1);
        bVar5 = *(byte *)pppppppbVar11;
        if (((int)(char)bVar5 - 0x3aU & 0xff) < 0xf6) {
          *(int *)pppppppbVar4 = iVar8;
          if ((char)bVar5 != 0x24 || (byte *******)((long)pppppppbVar11 + 1) == pppppppbVar3) {
            return (byte *******)0x0;
          }
          pppppppbVar7 = (byte *******)((long)pppppppbVar11 + 2);
          bVar5 = *(byte *)((long)pppppppbVar11 + 1);
          uVar10 = (ulong)(char)bVar5;
          if ((char)bVar5 < 'A') goto joined_r0x00010ae76a0c;
          goto LAB_10ae76b5c;
        }
        if (iVar12 == 0) break;
        iVar8 = (int)(char)bVar5 + iVar8 * 10 + -0x30;
        iVar12 = iVar12 + 1;
        pppppppbVar11 = pppppppbVar7;
      } while (pppppppbVar7 != pppppppbVar3);
    }
    *(int *)pppppppbVar4 = iVar8;
    return (byte *******)0x0;
  }
  if (pppppppbVar11 == pppppppbVar3) {
    return (byte *******)0x0;
  }
  pppppppbVar7 = (byte *******)((long)pppppppbVar11 + 1);
  bVar5 = *(byte *)pppppppbVar11;
  uVar10 = (ulong)(char)bVar5;
  if ((char)bVar5 < 'A') {
    while (uVar2 = (uint)uVar10, (char)bVar5 < '1') {
      if (((&UNK_10e52bfd0)[uVar10 & 0xff] & 0xe0) != 0xc0) {
        if ((uVar2 & 0xff) != 0x2a) {
          if ((uVar2 & 0xff) != 0x30) goto LAB_10ae767b0;
          goto LAB_10ae766dc;
        }
        *(byte *)((long)pppppppbVar4 + 0xc) = *(byte *)((long)pppppppbVar4 + 0xc) | 0x20;
        if (pppppppbVar7 == pppppppbVar3) {
          return (byte *******)0x0;
        }
        uVar10 = (ulong)*(byte *)pppppppbVar7;
        *param_4 = iVar8 + 1;
        *(int *)((long)pppppppbVar4 + 4) = -2 - iVar8;
        pppppppbVar7 = (byte *******)((long)pppppppbVar7 + 1);
        goto LAB_10ae767b0;
      }
      *(byte *)((long)pppppppbVar4 + 0xc) =
           *(byte *)((long)pppppppbVar4 + 0xc) | (&UNK_10e52bfd0)[uVar10 & 0xff] & 0x1f;
      if (pppppppbVar7 == pppppppbVar3) {
        return (byte *******)0x0;
      }
      bVar5 = *(byte *)pppppppbVar7;
      uVar10 = (ulong)(char)bVar5;
      pppppppbVar7 = (byte *******)((long)pppppppbVar7 + 1);
    }
    if (0x39 < uVar2) goto LAB_10ae76840;
LAB_10ae766dc:
    iVar12 = (uVar2 & 0xff) - 0x30;
    if (pppppppbVar7 != pppppppbVar3) {
      pppppppbVar14 = (byte *******)((long)pppppppbVar7 + 9);
      iVar13 = -8;
      pppppppbVar15 = pppppppbVar7;
LAB_10ae766fc:
      pppppppbVar16 = (byte *******)((long)pppppppbVar15 + 1);
      bVar5 = *(byte *)pppppppbVar15;
      uVar10 = (ulong)(uint)bVar5;
      if (0xf5 < (byte)(bVar5 - 0x3a)) {
        pppppppbVar7 = pppppppbVar14;
        if (iVar13 != 0) goto code_r0x00010ae76718;
        goto LAB_10ae768c4;
      }
      if (bVar5 == 0x24) {
        if (iVar8 != 0) {
          return (byte *******)0x0;
        }
        *param_4 = -1;
        goto LAB_10ae7674c;
      }
      *(byte *)((long)pppppppbVar4 + 0xc) = *(byte *)((long)pppppppbVar4 + 0xc) | 0x20;
      *(int *)((long)pppppppbVar4 + 4) = iVar12;
      pppppppbVar7 = (byte *******)((long)pppppppbVar15 + 1);
LAB_10ae767b0:
      if (((uint)uVar10 & 0xff) == 0x2e) {
        *(byte *)((long)pppppppbVar4 + 0xc) = *(byte *)((long)pppppppbVar4 + 0xc) | 0x20;
        if (pppppppbVar7 == pppppppbVar3) {
          return (byte *******)0x0;
        }
        pppppppbVar11 = (byte *******)((long)pppppppbVar7 + 1);
        bVar5 = *(byte *)pppppppbVar7;
        uVar10 = (ulong)bVar5;
        uVar2 = bVar5 - 0x30;
        if (uVar2 < 10) {
          if (pppppppbVar11 != pppppppbVar3) {
            iVar8 = -8;
            pppppppbVar14 = pppppppbVar11;
            do {
              pppppppbVar15 = (byte *******)((long)pppppppbVar14 + 1);
              bVar5 = *(byte *)pppppppbVar14;
              uVar10 = (ulong)bVar5;
              if ((byte)(bVar5 - 0x3a) < 0xf6) {
                pppppppbVar11 = (byte *******)((long)pppppppbVar14 + 1);
                break;
              }
              pppppppbVar11 = (byte *******)((long)pppppppbVar7 + 10);
              if (iVar8 == 0) break;
              uVar2 = ((int)(char)bVar5 + uVar2 * 10) - 0x30;
              iVar8 = iVar8 + 1;
              pppppppbVar11 = pppppppbVar3;
              pppppppbVar14 = pppppppbVar15;
            } while (pppppppbVar15 != pppppppbVar3);
          }
          pppppppbVar7 = pppppppbVar11;
          *(uint *)(pppppppbVar4 + 1) = uVar2;
          goto LAB_10ae76840;
        }
        if (bVar5 == 0x2a) {
          if (pppppppbVar11 == pppppppbVar3) {
            return (byte *******)0x0;
          }
          uVar10 = (ulong)*(byte *)((long)pppppppbVar7 + 1);
          iVar8 = *param_4;
          *param_4 = iVar8 + 1;
          *(int *)(pppppppbVar4 + 1) = -2 - iVar8;
          pppppppbVar7 = (byte *******)((long)pppppppbVar7 + 2);
        }
        else {
          *(int *)(pppppppbVar4 + 1) = 0;
          pppppppbVar7 = pppppppbVar11;
        }
      }
      goto LAB_10ae76840;
    }
LAB_10ae768c4:
    *(byte *)((long)pppppppbVar4 + 0xc) = *(byte *)((long)pppppppbVar4 + 0xc) | 0x20;
    *(int *)((long)pppppppbVar4 + 4) = iVar12;
    bVar5 = (&UNK_10e52bfd0)[uVar10 & 0xff];
  }
  else {
LAB_10ae76840:
    bVar5 = (&UNK_10e52bfd0)[uVar10 & 0xff];
    if ((((uint)uVar10 & 0xff) == 0x76) && (*(byte *)((long)pppppppbVar4 + 0xc) != 0)) {
      return (byte *******)0x0;
    }
  }
  pppppppbVar11 = pppppppbVar7;
  if (-1 < (char)bVar5) goto LAB_10ae76860;
  if (0xbf < bVar5) {
    return (byte *******)0x0;
  }
  if (pppppppbVar7 == pppppppbVar3) {
    return (byte *******)0x0;
  }
  pppppppbVar11 = (byte *******)((long)pppppppbVar7 + 1);
  uVar2 = (uint)*(byte *)pppppppbVar7;
  if (((bVar5 & 0x3f) == 0) && (uVar2 == 0x68)) {
    bVar5 = 1;
LAB_10ae7692c:
    *(byte *)((long)pppppppbVar4 + 0xd) = bVar5;
    if (pppppppbVar11 == pppppppbVar3) {
      return (byte *******)0x0;
    }
    uVar2 = (uint)*(byte *)((long)pppppppbVar7 + 1);
    pppppppbVar11 = (byte *******)((long)pppppppbVar7 + 2);
  }
  else {
    if (((bVar5 & 0x3f) == 2) && (uVar2 == 0x6c)) {
      bVar5 = 3;
      goto LAB_10ae7692c;
    }
    *(byte *)((long)pppppppbVar4 + 0xd) = bVar5 & 0x3f;
  }
  if ((uVar2 == 0x76) || (bVar5 = (&UNK_10e52bfd0)[uVar2], (char)bVar5 < '\0')) {
    return (byte *******)0x0;
  }
LAB_10ae76860:
  *(byte *)((long)pppppppbVar4 + 0xe) = bVar5;
  iVar8 = *param_4;
  *param_4 = iVar8 + 1;
  *(int *)pppppppbVar4 = iVar8 + 1;
  return pppppppbVar11;
code_r0x00010ae76718:
  iVar12 = (int)(char)bVar5 + iVar12 * 10 + -0x30;
  iVar13 = iVar13 + 1;
  pppppppbVar7 = pppppppbVar3;
  pppppppbVar15 = pppppppbVar16;
  if (pppppppbVar16 == pppppppbVar3) goto LAB_10ae768c4;
  goto LAB_10ae766fc;
joined_r0x00010ae76a0c:
  uVar9 = (undefined4)uVar10;
  if ('0' < (char)bVar5) goto LAB_10ae76a48;
  if (((&UNK_10e52bfd0)[uVar10 & 0xff] & 0xe0) != 0xc0) {
    if ((uVar9 & 0xff) != 0x2a) {
      if ((uVar9 & 0xff) != 0x30) goto LAB_10ae76acc;
      goto LAB_10ae76a58;
    }
    *(byte *)((long)pppppppbVar4 + 0xc) = *(byte *)((long)pppppppbVar4 + 0xc) | 0x20;
    if (pppppppbVar7 == pppppppbVar3) {
      return (byte *******)0x0;
    }
    if (*(byte *)pppppppbVar7 - 0x3a < 0xfffffff7) {
      return (byte *******)0x0;
    }
    uVar2 = *(byte *)pppppppbVar7 - 0x30;
    if ((byte *******)((long)pppppppbVar7 + 1) == pppppppbVar3) goto LAB_10ae76c98;
    iVar8 = -8;
    pppppppbVar11 = (byte *******)((long)pppppppbVar7 + 1);
    goto LAB_10ae76c68;
  }
  *(byte *)((long)pppppppbVar4 + 0xc) =
       *(byte *)((long)pppppppbVar4 + 0xc) | (&UNK_10e52bfd0)[uVar10 & 0xff] & 0x1f;
  if (pppppppbVar7 == pppppppbVar3) {
    return (byte *******)0x0;
  }
  bVar5 = *(byte *)pppppppbVar7;
  uVar10 = (ulong)(char)bVar5;
  pppppppbVar7 = (byte *******)((long)pppppppbVar7 + 1);
  goto joined_r0x00010ae76a0c;
  while( true ) {
    uVar2 = ((int)(char)bVar5 + uVar2 * 10) - 0x30;
    iVar8 = iVar8 + 1;
    pppppppbVar11 = pppppppbVar7;
    if (pppppppbVar7 == pppppppbVar3) break;
LAB_10ae76c68:
    pppppppbVar7 = (byte *******)((long)pppppppbVar11 + 1);
    bVar5 = *(byte *)pppppppbVar11;
    if (((int)(char)bVar5 - 0x3aU & 0xff) < 0xf6) {
      *(uint *)((long)pppppppbVar4 + 4) = ~uVar2;
      if ((char)bVar5 != 0x24 || (byte *******)((long)pppppppbVar11 + 1) == pppppppbVar3) {
        return (byte *******)0x0;
      }
      pppppppbVar7 = (byte *******)((long)pppppppbVar11 + 2);
      uVar10 = (ulong)*(byte *)((long)pppppppbVar11 + 1);
      goto LAB_10ae76acc;
    }
    if (iVar8 == 0) break;
  }
LAB_10ae76c98:
  *(uint *)((long)pppppppbVar4 + 4) = ~uVar2;
  return (byte *******)0x0;
LAB_10ae76a48:
  if ((uint)uVar9 < 0x3a) {
LAB_10ae76a58:
    iVar8 = (uVar9 & 0xff) - 0x30;
    if (pppppppbVar7 != pppppppbVar3) {
      pppppppbVar11 = (byte *******)((long)pppppppbVar7 + 9);
      iVar12 = -8;
      pppppppbVar14 = pppppppbVar7;
      do {
        pppppppbVar15 = (byte *******)((long)pppppppbVar14 + 1);
        bVar5 = *(byte *)pppppppbVar14;
        uVar10 = (ulong)bVar5;
        if ((byte)(bVar5 - 0x3a) < 0xf6) {
          pppppppbVar7 = (byte *******)((long)pppppppbVar14 + 1);
          break;
        }
        pppppppbVar7 = pppppppbVar11;
        if (iVar12 == 0) break;
        iVar8 = (int)(char)bVar5 + iVar8 * 10 + -0x30;
        iVar12 = iVar12 + 1;
        pppppppbVar7 = pppppppbVar3;
        pppppppbVar14 = pppppppbVar15;
      } while (pppppppbVar15 != pppppppbVar3);
    }
    *(byte *)((long)pppppppbVar4 + 0xc) = *(byte *)((long)pppppppbVar4 + 0xc) | 0x20;
    *(int *)((long)pppppppbVar4 + 4) = iVar8;
LAB_10ae76acc:
    if (((uint)uVar10 & 0xff) == 0x2e) {
      *(byte *)((long)pppppppbVar4 + 0xc) = *(byte *)((long)pppppppbVar4 + 0xc) | 0x20;
      if (pppppppbVar7 == pppppppbVar3) {
        return (byte *******)0x0;
      }
      pppppppbVar11 = (byte *******)((long)pppppppbVar7 + 1);
      bVar5 = *(byte *)pppppppbVar7;
      uVar10 = (ulong)bVar5;
      uVar2 = bVar5 - 0x30;
      if (uVar2 < 10) {
        if (pppppppbVar11 != pppppppbVar3) {
          iVar8 = -8;
          pppppppbVar14 = pppppppbVar11;
          do {
            pppppppbVar15 = (byte *******)((long)pppppppbVar14 + 1);
            bVar5 = *(byte *)pppppppbVar14;
            uVar10 = (ulong)bVar5;
            if ((byte)(bVar5 - 0x3a) < 0xf6) {
              pppppppbVar11 = (byte *******)((long)pppppppbVar14 + 1);
              break;
            }
            pppppppbVar11 = (byte *******)((long)pppppppbVar7 + 10);
            if (iVar8 == 0) break;
            uVar2 = ((int)(char)bVar5 + uVar2 * 10) - 0x30;
            iVar8 = iVar8 + 1;
            pppppppbVar11 = pppppppbVar3;
            pppppppbVar14 = pppppppbVar15;
          } while (pppppppbVar15 != pppppppbVar3);
        }
        *(uint *)(pppppppbVar4 + 1) = uVar2;
        pppppppbVar7 = pppppppbVar11;
      }
      else {
        if (bVar5 == 0x2a) {
          if (pppppppbVar11 == pppppppbVar3) {
            return (byte *******)0x0;
          }
          if (*(byte *)pppppppbVar11 - 0x3a < 0xfffffff7) {
            return (byte *******)0x0;
          }
          uVar2 = *(byte *)pppppppbVar11 - 0x30;
          if ((byte *******)((long)pppppppbVar7 + 2) != pppppppbVar3) {
            iVar8 = -8;
            pppppppbVar11 = (byte *******)((long)pppppppbVar7 + 2);
            do {
              pppppppbVar7 = (byte *******)((long)pppppppbVar11 + 1);
              bVar5 = *(byte *)pppppppbVar11;
              if (((int)(char)bVar5 - 0x3aU & 0xff) < 0xf6) {
                *(uint *)(pppppppbVar4 + 1) = ~uVar2;
                if ((char)bVar5 != 0x24 || (byte *******)((long)pppppppbVar11 + 1) == pppppppbVar3)
                {
                  return (byte *******)0x0;
                }
                uVar10 = (ulong)*(byte *)((long)pppppppbVar11 + 1);
                pppppppbVar7 = (byte *******)((long)pppppppbVar11 + 2);
                goto LAB_10ae76b5c;
              }
              if (iVar8 == 0) break;
              uVar2 = ((int)(char)bVar5 + uVar2 * 10) - 0x30;
              iVar8 = iVar8 + 1;
              pppppppbVar11 = pppppppbVar7;
            } while (pppppppbVar7 != pppppppbVar3);
          }
          *(uint *)(pppppppbVar4 + 1) = ~uVar2;
          return (byte *******)0x0;
        }
        *(int *)(pppppppbVar4 + 1) = 0;
        pppppppbVar7 = pppppppbVar11;
      }
    }
  }
LAB_10ae76b5c:
  bVar5 = (&UNK_10e52bfd0)[uVar10 & 0xff];
  if ((((uint)uVar10 & 0xff) == 0x76) && (*(byte *)((long)pppppppbVar4 + 0xc) != 0)) {
    return (byte *******)0x0;
  }
  pppppppbVar11 = pppppppbVar7;
  if (-1 < (char)bVar5) goto LAB_10ae76b7c;
  if (0xbf < bVar5) {
    return (byte *******)0x0;
  }
  if (pppppppbVar7 == pppppppbVar3) {
    return (byte *******)0x0;
  }
  pppppppbVar11 = (byte *******)((long)pppppppbVar7 + 1);
  bVar1 = *(byte *)pppppppbVar7;
  if ((bVar1 == 0x68) && ((bVar5 & 0x3f) == 0)) {
    bVar5 = 1;
LAB_10ae76d54:
    *(byte *)((long)pppppppbVar4 + 0xd) = bVar5;
    if (pppppppbVar11 == pppppppbVar3) {
      return (byte *******)0x0;
    }
    bVar1 = *(byte *)((long)pppppppbVar7 + 1);
    pppppppbVar11 = (byte *******)((long)pppppppbVar7 + 2);
  }
  else {
    if ((bVar1 == 0x6c) && ((bVar5 & 0x3f) == 2)) {
      bVar5 = 3;
      goto LAB_10ae76d54;
    }
    *(byte *)((long)pppppppbVar4 + 0xd) = bVar5 & 0x3f;
  }
  if ((bVar1 == 0x76) || (bVar5 = (&UNK_10e52bfd0)[(uint)bVar1], (char)bVar5 < '\0')) {
    return (byte *******)0x0;
  }
LAB_10ae76b7c:
  *(byte *)((long)pppppppbVar4 + 0xe) = bVar5;
  return pppppppbVar11;
}



/* Entry: 10ae76660; end: 10ae76d8f;  */

byte * FUN_10ae76660(byte *param_1,byte *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  iVar6 = *param_4;
  if (iVar6 < 0) {
LAB_10ae7696c:
    if (param_1 == param_2) {
      return (byte *)0x0;
    }
    if (*param_1 - 0x3a < 0xfffffff7) {
      return (byte *)0x0;
    }
    iVar6 = *param_1 - 0x30;
    if (param_1 + 1 != param_2) {
      iVar9 = -8;
      pbVar5 = param_1 + 1;
      do {
        pbVar8 = pbVar5 + 1;
        bVar2 = *pbVar5;
        if (((int)(char)bVar2 - 0x3aU & 0xff) < 0xf6) {
          *param_3 = iVar6;
          if ((char)bVar2 != 0x24 || pbVar5 + 1 == param_2) {
            return (byte *)0x0;
          }
          pbVar8 = pbVar5 + 2;
          bVar2 = pbVar5[1];
          uVar7 = (ulong)(char)bVar2;
          if ((char)bVar2 < 'A') goto joined_r0x00010ae76a0c;
          goto LAB_10ae76b5c;
        }
        if (iVar9 == 0) break;
        iVar6 = (int)(char)bVar2 + iVar6 * 10 + -0x30;
        iVar9 = iVar9 + 1;
        pbVar5 = pbVar8;
      } while (pbVar8 != param_2);
    }
    *param_3 = iVar6;
    return (byte *)0x0;
  }
  if (param_1 == param_2) {
    return (byte *)0x0;
  }
  pbVar5 = param_1 + 1;
  bVar2 = *param_1;
  uVar7 = (ulong)(char)bVar2;
  if ((char)bVar2 < 'A') {
    while (uVar4 = (uint)uVar7, (char)bVar2 < '1') {
      if (((&UNK_10e52bfd0)[uVar7 & 0xff] & 0xe0) != 0xc0) {
        if ((uVar4 & 0xff) != 0x2a) {
          if ((uVar4 & 0xff) != 0x30) goto LAB_10ae767b0;
          goto LAB_10ae766dc;
        }
        *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
        if (pbVar5 == param_2) {
          return (byte *)0x0;
        }
        uVar7 = (ulong)*pbVar5;
        *param_4 = iVar6 + 1;
        param_3[1] = -2 - iVar6;
        pbVar5 = pbVar5 + 1;
        goto LAB_10ae767b0;
      }
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | (&UNK_10e52bfd0)[uVar7 & 0xff] & 0x1f;
      if (pbVar5 == param_2) {
        return (byte *)0x0;
      }
      bVar2 = *pbVar5;
      uVar7 = (ulong)(char)bVar2;
      pbVar5 = pbVar5 + 1;
    }
    if (0x39 < uVar4) goto LAB_10ae76840;
LAB_10ae766dc:
    iVar9 = (uVar4 & 0xff) - 0x30;
    if (pbVar5 != param_2) {
      pbVar8 = pbVar5 + 9;
      iVar10 = -8;
      pbVar11 = pbVar5;
LAB_10ae766fc:
      pbVar12 = pbVar11 + 1;
      bVar2 = *pbVar11;
      uVar7 = (ulong)(uint)bVar2;
      if (0xf5 < (byte)(bVar2 - 0x3a)) {
        pbVar5 = pbVar8;
        if (iVar10 != 0) goto code_r0x00010ae76718;
        goto LAB_10ae768c4;
      }
      if (bVar2 == 0x24) {
        if (iVar6 != 0) {
          return (byte *)0x0;
        }
        *param_4 = -1;
        goto LAB_10ae7696c;
      }
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
      param_3[1] = iVar9;
      pbVar5 = pbVar11 + 1;
LAB_10ae767b0:
      if (((uint)uVar7 & 0xff) == 0x2e) {
        *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
        if (pbVar5 == param_2) {
          return (byte *)0x0;
        }
        pbVar8 = pbVar5 + 1;
        bVar2 = *pbVar5;
        uVar7 = (ulong)bVar2;
        uVar4 = bVar2 - 0x30;
        if (9 < uVar4) {
          if (bVar2 == 0x2a) {
            if (pbVar8 == param_2) {
              return (byte *)0x0;
            }
            uVar7 = (ulong)pbVar5[1];
            iVar6 = *param_4;
            *param_4 = iVar6 + 1;
            param_3[2] = -2 - iVar6;
            pbVar5 = pbVar5 + 2;
          }
          else {
            param_3[2] = 0;
            pbVar5 = pbVar8;
          }
          goto LAB_10ae76840;
        }
        if (pbVar8 != param_2) {
          iVar6 = -8;
          pbVar11 = pbVar8;
          do {
            pbVar12 = pbVar11 + 1;
            bVar2 = *pbVar11;
            uVar7 = (ulong)bVar2;
            if ((byte)(bVar2 - 0x3a) < 0xf6) {
              pbVar8 = pbVar11 + 1;
              break;
            }
            pbVar8 = pbVar5 + 10;
            if (iVar6 == 0) break;
            uVar4 = ((int)(char)bVar2 + uVar4 * 10) - 0x30;
            iVar6 = iVar6 + 1;
            pbVar8 = param_2;
            pbVar11 = pbVar12;
          } while (pbVar12 != param_2);
        }
        pbVar5 = pbVar8;
        param_3[2] = uVar4;
      }
      goto LAB_10ae76840;
    }
LAB_10ae768c4:
    *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
    param_3[1] = iVar9;
    bVar2 = (&UNK_10e52bfd0)[uVar7 & 0xff];
  }
  else {
LAB_10ae76840:
    bVar2 = (&UNK_10e52bfd0)[uVar7 & 0xff];
    if ((((uint)uVar7 & 0xff) == 0x76) && ((char)param_3[3] != '\0')) {
      return (byte *)0x0;
    }
  }
  pbVar8 = pbVar5;
  if (-1 < (char)bVar2) goto LAB_10ae76860;
  if (0xbf < bVar2) {
    return (byte *)0x0;
  }
  if (pbVar5 == param_2) {
    return (byte *)0x0;
  }
  pbVar8 = pbVar5 + 1;
  uVar4 = (uint)*pbVar5;
  if (((bVar2 & 0x3f) == 0) && (uVar4 == 0x68)) {
    uVar3 = 1;
LAB_10ae7692c:
    *(undefined1 *)((long)param_3 + 0xd) = uVar3;
    if (pbVar8 == param_2) {
      return (byte *)0x0;
    }
    uVar4 = (uint)pbVar5[1];
    pbVar8 = pbVar5 + 2;
  }
  else {
    if (((bVar2 & 0x3f) == 2) && (uVar4 == 0x6c)) {
      uVar3 = 3;
      goto LAB_10ae7692c;
    }
    *(byte *)((long)param_3 + 0xd) = bVar2 & 0x3f;
  }
  if ((uVar4 == 0x76) || (bVar2 = (&UNK_10e52bfd0)[uVar4], (char)bVar2 < '\0')) {
    return (byte *)0x0;
  }
LAB_10ae76860:
  *(byte *)((long)param_3 + 0xe) = bVar2;
  iVar6 = *param_4;
  *param_4 = iVar6 + 1;
  *param_3 = iVar6 + 1;
  return pbVar8;
code_r0x00010ae76718:
  iVar9 = (int)(char)bVar2 + iVar9 * 10 + -0x30;
  iVar10 = iVar10 + 1;
  pbVar5 = param_2;
  pbVar11 = pbVar12;
  if (pbVar12 == param_2) goto LAB_10ae768c4;
  goto LAB_10ae766fc;
joined_r0x00010ae76a0c:
  uVar4 = (uint)uVar7;
  if ('0' < (char)bVar2) goto LAB_10ae76a48;
  if (((&UNK_10e52bfd0)[uVar7 & 0xff] & 0xe0) != 0xc0) {
    if ((uVar4 & 0xff) != 0x2a) {
      if ((uVar4 & 0xff) != 0x30) goto LAB_10ae76acc;
      goto LAB_10ae76a58;
    }
    *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
    if (pbVar8 == param_2) {
      return (byte *)0x0;
    }
    if (*pbVar8 - 0x3a < 0xfffffff7) {
      return (byte *)0x0;
    }
    uVar4 = *pbVar8 - 0x30;
    if (pbVar8 + 1 == param_2) goto LAB_10ae76c98;
    iVar6 = -8;
    pbVar5 = pbVar8 + 1;
    goto LAB_10ae76c68;
  }
  *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | (&UNK_10e52bfd0)[uVar7 & 0xff] & 0x1f;
  if (pbVar8 == param_2) {
    return (byte *)0x0;
  }
  bVar2 = *pbVar8;
  uVar7 = (ulong)(char)bVar2;
  pbVar8 = pbVar8 + 1;
  goto joined_r0x00010ae76a0c;
  while( true ) {
    uVar4 = ((int)(char)bVar2 + uVar4 * 10) - 0x30;
    iVar6 = iVar6 + 1;
    pbVar5 = pbVar8;
    if (pbVar8 == param_2) break;
LAB_10ae76c68:
    pbVar8 = pbVar5 + 1;
    bVar2 = *pbVar5;
    if (((int)(char)bVar2 - 0x3aU & 0xff) < 0xf6) {
      param_3[1] = ~uVar4;
      if ((char)bVar2 != 0x24 || pbVar5 + 1 == param_2) {
        return (byte *)0x0;
      }
      pbVar8 = pbVar5 + 2;
      uVar7 = (ulong)pbVar5[1];
      goto LAB_10ae76acc;
    }
    if (iVar6 == 0) break;
  }
LAB_10ae76c98:
  param_3[1] = ~uVar4;
  return (byte *)0x0;
LAB_10ae76a48:
  if (uVar4 < 0x3a) {
LAB_10ae76a58:
    iVar6 = (uVar4 & 0xff) - 0x30;
    if (pbVar8 != param_2) {
      pbVar5 = pbVar8 + 9;
      iVar9 = -8;
      pbVar11 = pbVar8;
      do {
        pbVar12 = pbVar11 + 1;
        bVar2 = *pbVar11;
        uVar7 = (ulong)bVar2;
        if ((byte)(bVar2 - 0x3a) < 0xf6) {
          pbVar8 = pbVar11 + 1;
          break;
        }
        pbVar8 = pbVar5;
        if (iVar9 == 0) break;
        iVar6 = (int)(char)bVar2 + iVar6 * 10 + -0x30;
        iVar9 = iVar9 + 1;
        pbVar8 = param_2;
        pbVar11 = pbVar12;
      } while (pbVar12 != param_2);
    }
    *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
    param_3[1] = iVar6;
LAB_10ae76acc:
    if (((uint)uVar7 & 0xff) == 0x2e) {
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
      if (pbVar8 == param_2) {
        return (byte *)0x0;
      }
      pbVar5 = pbVar8 + 1;
      bVar2 = *pbVar8;
      uVar7 = (ulong)bVar2;
      uVar4 = bVar2 - 0x30;
      if (uVar4 < 10) {
        if (pbVar5 != param_2) {
          iVar6 = -8;
          pbVar11 = pbVar5;
          do {
            pbVar12 = pbVar11 + 1;
            bVar2 = *pbVar11;
            uVar7 = (ulong)bVar2;
            if ((byte)(bVar2 - 0x3a) < 0xf6) {
              pbVar5 = pbVar11 + 1;
              break;
            }
            pbVar5 = pbVar8 + 10;
            if (iVar6 == 0) break;
            uVar4 = ((int)(char)bVar2 + uVar4 * 10) - 0x30;
            iVar6 = iVar6 + 1;
            pbVar5 = param_2;
            pbVar11 = pbVar12;
          } while (pbVar12 != param_2);
        }
        param_3[2] = uVar4;
        pbVar8 = pbVar5;
      }
      else {
        if (bVar2 == 0x2a) {
          if (pbVar5 == param_2) {
            return (byte *)0x0;
          }
          if (*pbVar5 - 0x3a < 0xfffffff7) {
            return (byte *)0x0;
          }
          uVar4 = *pbVar5 - 0x30;
          if (pbVar8 + 2 != param_2) {
            iVar6 = -8;
            pbVar5 = pbVar8 + 2;
            do {
              pbVar8 = pbVar5 + 1;
              bVar2 = *pbVar5;
              if (((int)(char)bVar2 - 0x3aU & 0xff) < 0xf6) {
                param_3[2] = ~uVar4;
                if ((char)bVar2 != 0x24 || pbVar5 + 1 == param_2) {
                  return (byte *)0x0;
                }
                uVar7 = (ulong)pbVar5[1];
                pbVar8 = pbVar5 + 2;
                goto LAB_10ae76b5c;
              }
              if (iVar6 == 0) break;
              uVar4 = ((int)(char)bVar2 + uVar4 * 10) - 0x30;
              iVar6 = iVar6 + 1;
              pbVar5 = pbVar8;
            } while (pbVar8 != param_2);
          }
          param_3[2] = ~uVar4;
          return (byte *)0x0;
        }
        param_3[2] = 0;
        pbVar8 = pbVar5;
      }
    }
  }
LAB_10ae76b5c:
  bVar2 = (&UNK_10e52bfd0)[uVar7 & 0xff];
  if ((((uint)uVar7 & 0xff) == 0x76) && ((char)param_3[3] != '\0')) {
    return (byte *)0x0;
  }
  pbVar5 = pbVar8;
  if (-1 < (char)bVar2) goto LAB_10ae76b7c;
  if (0xbf < bVar2) {
    return (byte *)0x0;
  }
  if (pbVar8 == param_2) {
    return (byte *)0x0;
  }
  pbVar5 = pbVar8 + 1;
  bVar1 = *pbVar8;
  if ((bVar1 == 0x68) && ((bVar2 & 0x3f) == 0)) {
    uVar3 = 1;
LAB_10ae76d54:
    *(undefined1 *)((long)param_3 + 0xd) = uVar3;
    if (pbVar5 == param_2) {
      return (byte *)0x0;
    }
    bVar1 = pbVar8[1];
    pbVar5 = pbVar8 + 2;
  }
  else {
    if ((bVar1 == 0x6c) && ((bVar2 & 0x3f) == 2)) {
      uVar3 = 3;
      goto LAB_10ae76d54;
    }
    *(byte *)((long)param_3 + 0xd) = bVar2 & 0x3f;
  }
  if ((bVar1 == 0x76) || (bVar2 = (&UNK_10e52bfd0)[(uint)bVar1], (char)bVar2 < '\0')) {
    return (byte *)0x0;
  }
LAB_10ae76b7c:
  *(byte *)((long)param_3 + 0xe) = bVar2;
  return pbVar5;
}



/* Entry: 10ae76d90; end: 10ae76e83;  */

void FUN_10ae76d90(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = param_2;
  ___error();
  uVar1 = *(undefined4 *)puVar2;
  if ((bRam0000000113837108 & 1) == 0) {
    puVar3 = (undefined8 *)0x113837108;
    ___cxa_guard_acquire();
    puVar2 = puVar3;
    if ((int)puVar3 != 0) {
      FUN_10ae76e84();
      puVar2 = (undefined8 *)0x113837108;
      puRam0000000113837100 = puVar3;
      ___cxa_guard_release();
    }
  }
  if ((uint)param_2 < 0x87) {
    puVar3 = puRam0000000113837100 + ((ulong)param_2 & 0xffffffff) * 3;
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      func_0x000107c3192c(param_1,*puVar3,puVar3[1]);
      param_2 = param_1;
    }
    else {
      uVar5 = puVar3[1];
      uVar4 = *puVar3;
      param_1[2] = puVar3[2];
      param_1[1] = uVar5;
      *param_1 = uVar4;
      param_2 = puVar2;
    }
  }
  else {
    FUN_10ae76f08(param_1);
  }
  ___error();
  *(undefined4 *)param_2 = uVar1;
  return;
}



/* Entry: 10ae76e84; end: 10ae76f07;  */

undefined8 * FUN_10ae76e84(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0xca8;
  __Znwm();
  _bzero();
  lVar2 = 0;
  puVar3 = puVar1;
  do {
    FUN_10ae76f08(&uStack_48,lVar2);
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      __ZdlPv(*puVar3);
    }
    puVar3[1] = uStack_40;
    *puVar3 = uStack_48;
    puVar3[2] = uStack_38;
    lVar2 = lVar2 + 1;
    puVar3 = puVar3 + 3;
  } while (lVar2 != 0x87);
  return puVar1;
}



/* Entry: 10ae76f08; end: 10ae76f9f;  */

/* WARNING: Possible PIC construction at 0x00010ae76f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae76f74) */
/* WARNING: Removing unreachable block (ram,0x00010ae76f9c) */
/* WARNING: Removing unreachable block (ram,0x00010ae76fc0) */
/* WARNING: Removing unreachable block (ram,0x00010ae76fb0) */
/* WARNING: Removing unreachable block (ram,0x00010ae76f8c) */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

ulong * FUN_10ae76f08(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 auStack_a0 [2];
  char acStack_8c [100];
  undefined8 uStack_28;
  
  puVar8 = &stack0xfffffffffffffff0;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _strerror_r(param_2,acStack_8c,100);
  if ((int)uVar5 == 0) {
    if (acStack_8c[0] == '\0') goto LAB_10ae76f44;
  }
  else {
    acStack_8c[0] = '\0';
LAB_10ae76f44:
    auStack_a0[0] = param_2;
    _snprintf(acStack_8c,100,&UNK_10f6d1955);
  }
  puVar9 = (undefined *)0x10ae76f74;
  puVar1 = auStack_a0;
  puVar3 = (ulong *)acStack_8c;
  puVar7 = param_1;
  while( true ) {
    puVar6 = puVar3;
    puVar2 = param_1;
    *(undefined8 *)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
    *(ulong **)((long)puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)((long)puVar1 + -0x20) = param_2;
    *(ulong **)((long)puVar1 + -0x18) = puVar7;
    *(undefined1 **)((long)puVar1 + -0x10) = puVar8;
    *(undefined **)((long)puVar1 + -8) = puVar9;
    puVar3 = puVar6;
    func_0x000107c613d0();
    if (puVar3 < (ulong *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)((long)puVar1 + -0x60) = param_2;
    *(ulong **)((long)puVar1 + -0x58) = puVar2;
    *(undefined1 **)((long)puVar1 + -0x50) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x48) = &UNK_10002d57c;
    puVar8 = (undefined1 *)((long)puVar1 + -0x50);
    if ((bRam00000001132dfb00 & 1) != 0) {
      return puVar3;
    }
    puVar3 = (ulong *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)puVar3 == 0) {
      return puVar3;
    }
    puVar9 = &UNK_10002d5bc;
    puVar1 = (undefined8 *)((long)puVar1 + -0x60);
    param_1 = (ulong *)0x1132dfae8;
    puVar3 = (ulong *)&UNK_10f5738ce;
    puVar7 = puVar2;
    unaff_x21 = puVar6;
  }
  if (puVar3 < (ulong *)0x17) {
    *(char *)((long)puVar2 + 0x17) = (char)puVar3;
    puVar4 = puVar2;
    if (puVar3 == (ulong *)0x0) goto code_r0x00010002d55c;
  }
  else {
    puVar7 = (ulong *)0x19;
    if (((ulong)puVar3 | 7) != 0x17) {
      puVar7 = (ulong *)(((ulong)puVar3 | 7) + 1);
    }
    puVar4 = puVar7;
    func_0x000107c60e20();
    puVar2[1] = (ulong)puVar3;
    puVar2[2] = (ulong)puVar7 | 0x8000000000000000;
    *puVar2 = (ulong)puVar4;
  }
  func_0x000107c610b8(puVar4,puVar6,puVar3);
code_r0x00010002d55c:
  *(char *)((long)puVar4 + (long)puVar3) = '\0';
  return puVar2;
}



/* Entry: 10ae76fa0; end: 10ae76fcb;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

ulong * FUN_10ae76fa0(ulong *param_1,uint param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  if (param_2 < 0x11) {
    puVar3 = (ulong *)(&PTR_s_OK_110c8ad88)[param_2];
  }
  else {
    puVar3 = (ulong *)"";
  }
  while( true ) {
    puVar5 = puVar3;
    puVar2 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar3 = puVar5;
    func_0x000107c613d0();
    if (puVar3 < (ulong *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = puVar2;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_10002d57c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    if ((bRam00000001132dfb00 & 1) != 0) {
      return puVar3;
    }
    puVar3 = (ulong *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)puVar3 == 0) {
      return puVar3;
    }
    unaff_x30 = &UNK_10002d5bc;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = (ulong *)0x1132dfae8;
    puVar3 = (ulong *)&UNK_10f5738ce;
    unaff_x19 = puVar2;
    unaff_x21 = puVar5;
  }
  if (puVar3 < (ulong *)0x17) {
    *(char *)((long)puVar2 + 0x17) = (char)puVar3;
    puVar4 = puVar2;
    if (puVar3 == (ulong *)0x0) goto code_r0x00010002d55c;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar3 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar3 | 7) + 1);
    }
    puVar4 = puVar1;
    func_0x000107c60e20();
    puVar2[1] = (ulong)puVar3;
    puVar2[2] = (ulong)puVar1 | 0x8000000000000000;
    *puVar2 = (ulong)puVar4;
  }
  func_0x000107c610b8(puVar4,puVar5,puVar3);
code_r0x00010002d55c:
  *(char *)((long)puVar4 + (long)puVar3) = '\0';
  return puVar2;
}



/* Entry: 10ae76fcc; end: 10ae77003;  */

undefined8 * FUN_10ae76fcc(undefined8 *param_1)

{
  func_0x000107c34fe8(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10ae77004; end: 10ae770f7;  */

void FUN_10ae77004(ulong *param_1,undefined8 param_2,code *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  
  if (((*param_1 & 1) != 0) && (puVar6 = *(ulong **)(*param_1 + 0x1f), puVar6 != (ulong *)0x0)) {
    uVar4 = *puVar6;
    if (uVar4 < 4) {
      if (uVar4 < 2) {
        return;
      }
      bVar1 = false;
    }
    else {
      bVar1 = 6 < (ulong)puVar6 % 0xd;
    }
    uVar7 = 0;
    lVar8 = -1;
    do {
      uVar2 = (uVar4 >> 1) + lVar8;
      if (!bVar1) {
        uVar2 = uVar7;
      }
      puVar5 = puVar6 + 1;
      if ((uVar4 & 1) != 0) {
        puVar5 = (ulong *)puVar6[1];
      }
      puVar5 = puVar5 + uVar2 * 5;
      uVar4 = (ulong)*(char *)((long)puVar5 + 0x17);
      puVar3 = puVar5;
      if ((long)uVar4 < 0) {
        uVar4 = puVar5[1];
        puVar3 = (ulong *)*puVar5;
      }
      (*param_3)(param_2,puVar3,uVar4,puVar5 + 3);
      uVar7 = uVar7 + 1;
      uVar4 = *puVar6;
      lVar8 = lVar8 + -1;
    } while (uVar7 < uVar4 >> 1);
  }
  return;
}



/* Entry: 10ae770f8; end: 10ae7711b;  */

uint FUN_10ae770f8(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    uVar2 = (uint)(uVar1 >> 2);
  }
  else {
    uVar2 = *(uint *)(uVar1 + 3);
  }
  if (0x10 < uVar2) {
    uVar2 = 2;
  }
  return uVar2;
}



/* Entry: 10ae7711c; end: 10ae7742f;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

char ** FUN_10ae7711c(char **param_1,char **param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char **ppcVar4;
  char ***pppcVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  char **extraout_x8;
  char **extraout_x8_00;
  int iVar10;
  uint uVar11;
  long lVar12;
  char **ppcVar13;
  char *pcVar14;
  char **ppcVar15;
  char **ppcVar16;
  char **unaff_x21;
  char **unaff_x22;
  char **ppcStack_170;
  char **ppcStack_168;
  byte bStack_159;
  char *pcStack_158;
  ulong uStack_150;
  char *pcStack_128;
  undefined8 uStack_120;
  char **ppcStack_f8;
  char **ppcStack_f0;
  long lStack_c8;
  char **ppcStack_c0;
  char **ppcStack_b8;
  char **ppcStack_b0;
  char **ppcStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  char *apcStack_88 [6];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar16 = (char **)*param_1;
  pcVar14 = *param_2;
  if ((((ulong)ppcVar16 & 1) == 0) == (((ulong)pcVar14 & 1) == 0)) {
    if (((ulong)ppcVar16 & 1) == 0) {
      uVar6 = ((long)ppcVar16 << 0x3e) >> 0x3f;
      param_1 = (char **)(uVar6 & 0x10e52c0f3);
      uVar6 = uVar6 & 0x1b;
joined_r0x00010ae771b8:
      if (((ulong)pcVar14 & 1) == 0) goto LAB_10ae7719c;
LAB_10ae771bc:
      uVar8 = (ulong)pcVar14[0x1e];
      if ((long)uVar8 < 0) {
        param_2 = *(char ***)(pcVar14 + 7);
        uVar8 = *(ulong *)(pcVar14 + 0xf);
      }
      else {
        param_2 = (char **)(pcVar14 + 7);
      }
    }
    else {
      uVar6 = (ulong)*(char *)((long)ppcVar16 + 0x1e);
      if ((long)uVar6 < 0) {
        param_1 = *(char ***)((long)ppcVar16 + 7);
        uVar6 = *(ulong *)((long)ppcVar16 + 0xf);
        goto joined_r0x00010ae771b8;
      }
      param_1 = (char **)((long)ppcVar16 + 7);
      if (((ulong)pcVar14 & 1) != 0) goto LAB_10ae771bc;
LAB_10ae7719c:
      uVar8 = ((long)pcVar14 << 0x3e) >> 0x3f;
      param_2 = (char **)(uVar8 & 0x10e52c0f3);
      uVar8 = uVar8 & 0x1b;
    }
    if ((uVar6 == uVar8) && (_memcmp(), (int)param_1 == 0)) {
      if (((ulong)ppcVar16 & 1) == 0) {
        iVar7 = (int)((ulong)ppcVar16 >> 2);
        if (((ulong)pcVar14 & 1) == 0) goto LAB_10ae77200;
LAB_10ae771f0:
        iVar10 = *(int *)(pcVar14 + 3);
      }
      else {
        iVar7 = *(int *)((long)ppcVar16 + 3);
        if (((ulong)pcVar14 & 1) != 0) goto LAB_10ae771f0;
LAB_10ae77200:
        iVar10 = (int)((ulong)pcVar14 >> 2);
      }
      if (iVar7 == iVar10) {
        if (((ulong)ppcVar16 & 1) == 0) {
          lVar9 = 0;
          if (((ulong)pcVar14 & 1) == 0) goto LAB_10ae77264;
LAB_10ae77218:
          lVar12 = *(long *)(pcVar14 + 0x1f);
        }
        else {
          lVar9 = *(long *)((long)ppcVar16 + 0x1f);
          if (((ulong)pcVar14 & 1) != 0) goto LAB_10ae77218;
LAB_10ae77264:
          lVar12 = 0;
        }
        if (lVar9 == lVar12) {
          ppcVar15 = (char **)0x1;
        }
        else {
          apcStack_88[0] = (char *)0x0;
          ppcVar15 = apcStack_88;
          if ((((ulong)ppcVar16 & 1) != 0) && (*(char ***)((long)ppcVar16 + 0x1f) != (char **)0x0))
          {
            ppcVar15 = *(char ***)((long)ppcVar16 + 0x1f);
          }
          if ((((ulong)pcVar14 & 1) == 0) ||
             (ppcVar13 = *(char ***)(pcVar14 + 0x1f), ppcVar13 == (char **)0x0)) {
            uVar6 = 0;
            ppcVar13 = apcStack_88;
          }
          else {
            uVar6 = (ulong)*ppcVar13 >> 1;
          }
          uVar8 = (ulong)*ppcVar15 >> 1;
          ppcVar16 = ppcVar15;
          ppcVar4 = ppcVar13;
          if (uVar6 <= uVar8) {
            ppcVar16 = ppcVar13;
            ppcVar4 = ppcVar15;
          }
          pcVar14 = *ppcVar4;
          if (((ulong)pcVar14 >> 1) - ((ulong)*ppcVar16 >> 1) < 2) {
            unaff_x21 = ppcVar13 + 1;
            if (uVar6 <= uVar8) {
              unaff_x21 = ppcVar15 + 1;
            }
            if (((ulong)pcVar14 & 1) != 0) {
              unaff_x21 = (char **)*unaff_x21;
            }
            if ((char *)0x1 < pcVar14) {
              unaff_x22 = unaff_x21 + ((ulong)pcVar14 >> 1) * 5;
              ppcVar15 = ppcVar15 + 1;
              if (uVar6 <= uVar8) {
                ppcVar15 = ppcVar13 + 1;
              }
LAB_10ae77324:
              pcVar14 = *ppcVar16;
              ppcVar13 = ppcVar15;
              if (((ulong)pcVar14 & 1) != 0) {
                ppcVar13 = (char **)*ppcVar15;
              }
              if ((char *)0x1 < pcVar14) {
                bVar2 = *(byte *)((long)unaff_x21 + 0x17);
                pcVar1 = unaff_x21[1];
                if (-1 < (char)bVar2) {
                  pcVar1 = (char *)(ulong)bVar2;
                }
                lVar9 = ((ulong)pcVar14 >> 1) * 0x28;
                do {
                  bVar3 = *(byte *)((long)ppcVar13 + 0x17);
                  pcVar14 = ppcVar13[1];
                  if (-1 < (char)bVar3) {
                    pcVar14 = (char *)(ulong)bVar3;
                  }
                  if (pcVar1 == pcVar14) {
                    ppcVar4 = (char **)*unaff_x21;
                    if (-1 < (char)bVar2) {
                      ppcVar4 = unaff_x21;
                    }
                    param_2 = (char **)*ppcVar13;
                    if (-1 < (char)bVar3) {
                      param_2 = ppcVar13;
                    }
                    _memcmp(ppcVar4,param_2,pcVar1);
                    if ((int)ppcVar4 == 0) goto LAB_10ae773ac;
                  }
                  ppcVar13 = ppcVar13 + 5;
                  lVar9 = lVar9 + -0x28;
                  if (lVar9 == 0) break;
                } while( true );
              }
              goto LAB_10ae772d4;
            }
LAB_10ae77304:
            ppcVar15 = (char **)0x1;
          }
          else {
LAB_10ae772d4:
            ppcVar15 = (char **)0x0;
          }
          param_1 = apcStack_88;
          func_0x000107c2b9e0();
        }
        goto LAB_10ae77224;
      }
    }
  }
  ppcVar15 = (char **)0x0;
LAB_10ae77224:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppcVar15;
  }
  ___stack_chk_fail();
  func_0x000107c2b9e0(apcStack_88);
  ppcVar15 = param_1;
  __Unwind_Resume();
  pcStack_98 = FUN_10ae77430;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = (char *)0x0;
  extraout_x8[1] = (char *)0x0;
  extraout_x8[2] = (char *)0x0;
  pcVar14 = *ppcVar15;
  if (((ulong)pcVar14 & 1) == 0) {
    uVar11 = (uint)((ulong)pcVar14 >> 2);
  }
  else {
    uVar11 = *(uint *)(pcVar14 + 3);
  }
  if (0x10 < uVar11) {
    uVar11 = 2;
  }
  ppcStack_c0 = unaff_x22;
  ppcStack_b8 = unaff_x21;
  ppcStack_b0 = ppcVar16;
  ppcStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_10ae76fa0(&ppcStack_170,uVar11);
  ppcStack_f0 = ppcStack_168;
  ppcStack_f8 = ppcStack_170;
  if (-1 < (char)bStack_159) {
    ppcStack_f0 = (char **)(ulong)bStack_159;
    ppcStack_f8 = (char **)&ppcStack_170;
  }
  pcStack_128 = ": ";
  uStack_120 = 2;
  pcVar14 = *ppcVar15;
  if (((ulong)pcVar14 & 1) == 0) {
    uStack_150 = ((long)pcVar14 << 0x3e) >> 0x3f;
    pcStack_158 = (char *)(uStack_150 & 0x10e52c0f3);
    uStack_150 = uStack_150 & 0x1b;
  }
  else {
    uStack_150 = (ulong)pcVar14[0x1e];
    if ((long)uStack_150 < 0) {
      pcStack_158 = *(char **)(pcVar14 + 7);
      uStack_150 = *(ulong *)(pcVar14 + 0xf);
    }
    else {
      pcStack_158 = pcVar14 + 7;
    }
  }
  pppcVar5 = &ppcStack_f8;
  ppcVar16 = extraout_x8;
  FUN_10ae8c9e4(extraout_x8,pppcVar5,&pcStack_128,&pcStack_158);
  if ((char)bStack_159 < '\0') {
    __ZdlPv();
    ppcVar16 = ppcStack_170;
  }
  if (((ulong)param_2 & 1) != 0) {
    pcStack_128 = (char *)0x0;
    ppcStack_f8 = &pcStack_128;
    pppcVar5 = &ppcStack_f8;
    ppcStack_f0 = extraout_x8;
    FUN_10ae77004(ppcVar15,pppcVar5,FUN_10ae778a0);
    ppcVar16 = ppcVar15;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
      __ZdlPv(*extraout_x8);
    }
    __Unwind_Resume(ppcVar16);
    *extraout_x8_00 = (char *)0x4;
    if (pppcVar5 != (char ***)0x0) {
      lVar9 = 0x28;
      func_0x000107c60e20();
      func_0x000107c2b9d0();
      *extraout_x8_00 = (char *)(lVar9 + 1);
    }
    return extraout_x8_00;
  }
  return ppcVar16;
LAB_10ae773ac:
  ppcVar4 = unaff_x21 + 3;
  param_2 = ppcVar13 + 3;
  if (*ppcVar4 != *param_2 || unaff_x21[4] != ppcVar13[4]) {
    if (((long)*(char *)param_2 & 1U) == 0) {
      uVar6 = (ulong)(long)*(char *)param_2 >> 1;
    }
    else {
      uVar6 = *(ulong *)ppcVar13[4];
    }
    if (((long)*(char *)ppcVar4 & 1U) == 0) {
      uVar8 = (ulong)(long)*(char *)ppcVar4 >> 1;
    }
    else {
      uVar8 = *(ulong *)unaff_x21[4];
    }
    if ((uVar8 != uVar6) || (FUN_10ae719f0(), ((ulong)ppcVar4 & 1) == 0)) goto LAB_10ae772d4;
  }
  unaff_x21 = unaff_x21 + 5;
  if (unaff_x21 == unaff_x22) goto LAB_10ae77304;
  goto LAB_10ae77324;
}



/* Entry: 10ae77430; end: 10ae775b7;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

char ** FUN_10ae77430(char **param_1,char **param_2,ulong param_3)

{
  long lVar1;
  char **ppcVar2;
  char ***pppcVar3;
  char *pcVar4;
  char **extraout_x8;
  uint uVar5;
  char **ppcStack_e0;
  char **ppcStack_d8;
  byte bStack_c9;
  char *pcStack_c8;
  ulong uStack_c0;
  char *pcStack_98;
  undefined8 uStack_90;
  char **ppcStack_68;
  char **ppcStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (char *)0x0;
  param_1[1] = (char *)0x0;
  param_1[2] = (char *)0x0;
  pcVar4 = *param_2;
  if (((ulong)pcVar4 & 1) == 0) {
    uVar5 = (uint)((ulong)pcVar4 >> 2);
  }
  else {
    uVar5 = *(uint *)(pcVar4 + 3);
  }
  if (0x10 < uVar5) {
    uVar5 = 2;
  }
  FUN_10ae76fa0(&ppcStack_e0,uVar5);
  ppcStack_60 = ppcStack_d8;
  ppcStack_68 = ppcStack_e0;
  if (-1 < (char)bStack_c9) {
    ppcStack_60 = (char **)(ulong)bStack_c9;
    ppcStack_68 = (char **)&ppcStack_e0;
  }
  pcStack_98 = ": ";
  uStack_90 = 2;
  pcVar4 = *param_2;
  if (((ulong)pcVar4 & 1) == 0) {
    uStack_c0 = ((long)pcVar4 << 0x3e) >> 0x3f;
    pcStack_c8 = (char *)(uStack_c0 & 0x10e52c0f3);
    uStack_c0 = uStack_c0 & 0x1b;
  }
  else {
    uStack_c0 = (ulong)pcVar4[0x1e];
    if ((long)uStack_c0 < 0) {
      pcStack_c8 = *(char **)(pcVar4 + 7);
      uStack_c0 = *(ulong *)(pcVar4 + 0xf);
    }
    else {
      pcStack_c8 = pcVar4 + 7;
    }
  }
  pppcVar3 = &ppcStack_68;
  ppcVar2 = param_1;
  FUN_10ae8c9e4(param_1,pppcVar3,&pcStack_98,&pcStack_c8);
  if ((char)bStack_c9 < '\0') {
    __ZdlPv();
    ppcVar2 = ppcStack_e0;
  }
  if ((param_3 & 1) != 0) {
    pcStack_98 = (char *)0x0;
    ppcStack_68 = &pcStack_98;
    pppcVar3 = &ppcStack_68;
    ppcStack_60 = param_1;
    FUN_10ae77004(param_2,pppcVar3,FUN_10ae778a0);
    ppcVar2 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    __Unwind_Resume(ppcVar2);
    *extraout_x8 = (char *)0x4;
    if (pppcVar3 != (char ***)0x0) {
      lVar1 = 0x28;
      func_0x000107c60e20();
      func_0x000107c2b9d0();
      *extraout_x8 = (char *)(lVar1 + 1);
    }
    return extraout_x8;
  }
  return ppcVar2;
}



/* Entry: 10ae775b8; end: 10ae77657;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

long * FUN_10ae775b8(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  *param_1 = 4;
  if (param_3 != 0) {
    lVar1 = 0x28;
    func_0x000107c60e20();
    func_0x000107c2b9d0();
    *param_1 = lVar1 + 1;
  }
  return param_1;
}



/* Entry: 10ae77658; end: 10ae7770b;  */

ulong * FUN_10ae77658(ulong *param_1,ulong *param_2,undefined8 param_3,ulong param_4,ulong *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  
  *(undefined4 *)param_1 = 1;
  *(int *)((long)param_1 + 4) = (int)param_2;
  if (0x7ffffffffffffff7 < param_4) {
    func_0x000104c4f6b8();
    uVar6 = *param_2;
    puVar9 = (ulong *)(uVar6 >> 1);
    if ((uVar6 & 1) == 0) {
      puVar11 = param_2 + 1;
      puVar4 = param_1;
      puVar7 = param_1 + 1;
    }
    else {
      puVar4 = puVar9;
      if (puVar9 < (ulong *)0x3) {
        puVar4 = (ulong *)0x2;
      }
      puVar11 = param_2;
      func_0x000107c2b9d4();
      param_1[1] = (ulong)puVar4;
      param_1[2] = (ulong)puVar11;
      puVar11 = (ulong *)param_2[1];
      puVar7 = puVar4;
    }
    if (1 < uVar6) {
      puVar10 = (ulong *)0x0;
      do {
        puVar8 = puVar7 + (long)puVar10 * 5;
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          puVar4 = puVar8;
          func_0x000107c3192c(puVar8,*puVar11,puVar11[1]);
        }
        else {
          uVar12 = puVar11[1];
          uVar6 = *puVar11;
          puVar8[2] = puVar11[2];
          puVar8[1] = uVar12;
          *puVar8 = uVar6;
        }
        puVar5 = puVar11 + 3;
        if (((*puVar5 & 1) == 0) || (uVar6 = puVar11[4], uVar6 == 0)) {
          uVar6 = *puVar5;
          puVar8[4] = puVar11[4];
          puVar8[3] = uVar6;
        }
        else {
          piVar1 = (int *)(uVar6 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar8[3] = 1;
          puVar8[4] = uVar6;
          if (1 < *puVar5) {
            puVar4 = puVar8 + 3;
            FUN_10ae6ff78(puVar4,puVar5,8);
          }
        }
        puVar11 = puVar11 + 5;
        puVar10 = (ulong *)((long)puVar10 + 1);
      } while (puVar10 != puVar9);
    }
    *param_1 = *param_2;
    return puVar4;
  }
  if (param_4 < 0x17) {
    puVar4 = param_1 + 1;
    *(char *)((long)param_1 + 0x1f) = (char)param_4;
    if (param_4 == 0) goto LAB_10ae776e0;
  }
  else {
    puVar9 = (ulong *)0x19;
    if ((param_4 | 7) != 0x17) {
      puVar9 = (ulong *)((param_4 | 7) + 1);
    }
    puVar4 = puVar9;
    __Znwm();
    param_1[2] = param_4;
    param_1[3] = (ulong)puVar9 | 0x8000000000000000;
    param_1[1] = (ulong)puVar4;
  }
  _memmove(puVar4,param_3,param_4);
LAB_10ae776e0:
  *(undefined1 *)((long)puVar4 + param_4) = 0;
  uVar6 = *param_5;
  *param_5 = 0;
  param_1[4] = uVar6;
  return param_1;
}



/* Entry: 10ae7770c; end: 10ae7789f;  */

void FUN_10ae7770c(ulong *param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  
  uVar6 = *param_2;
  puVar8 = (ulong *)(uVar6 >> 1);
  if ((uVar6 & 1) == 0) {
    puVar4 = param_1 + 1;
    puVar10 = param_2 + 1;
  }
  else {
    puVar4 = puVar8;
    if (puVar8 < (ulong *)0x3) {
      puVar4 = (ulong *)0x2;
    }
    puVar10 = param_2;
    func_0x000107c2b9d4();
    param_1[1] = (ulong)puVar4;
    param_1[2] = (ulong)puVar10;
    puVar10 = (ulong *)param_2[1];
  }
  if (1 < uVar6) {
    puVar9 = (ulong *)0x0;
    do {
      puVar7 = puVar4 + (long)puVar9 * 5;
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        func_0x000107c3192c(puVar7,*puVar10,puVar10[1]);
      }
      else {
        uVar11 = puVar10[1];
        uVar6 = *puVar10;
        puVar7[2] = puVar10[2];
        puVar7[1] = uVar11;
        *puVar7 = uVar6;
      }
      puVar5 = puVar10 + 3;
      if (((*puVar5 & 1) == 0) || (uVar6 = puVar10[4], uVar6 == 0)) {
        uVar6 = *puVar5;
        puVar7[4] = puVar10[4];
        puVar7[3] = uVar6;
      }
      else {
        piVar1 = (int *)(uVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar7[3] = 1;
        puVar7[4] = uVar6;
        if (1 < *puVar5) {
          FUN_10ae6ff78(puVar7 + 3,puVar5,8);
        }
      }
      puVar10 = puVar10 + 5;
      puVar9 = (ulong *)((long)puVar9 + 1);
    } while (puVar9 != puVar8);
  }
  *param_1 = *param_2;
  return;
}



/* Entry: 10ae778a0; end: 10ae77af3;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_10ae778a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  undefined8 *******pppppppuStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  ulong uStack_b0;
  byte bStack_a1;
  char cStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 *******pppppppuStack_68;
  ulong uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = 0;
  cStack_a0 = '\0';
  if (*(code **)*param_1 == (code *)0x0) {
    pppppppuVar3 = (undefined8 *******)param_1[1];
  }
  else {
    (**(code **)*param_1)(&puStack_98,param_2,param_3,param_4);
    func_0x0001098405f0(&uStack_b8,&puStack_98);
    if (((char)uStack_80 == '\x01') && (uStack_88._7_1_ < '\0')) {
      __ZdlPv(puStack_98);
    }
    pppppppuVar3 = (undefined8 *******)param_1[1];
    if (cStack_a0 == '\x01') {
      if ((char)bStack_a1 < '\0') {
        func_0x000107c3192c(&pppppppuStack_d0,CONCAT71(uStack_b7,uStack_b8),uStack_b0);
      }
      else {
        pppppppuStack_d0 = (undefined8 *******)CONCAT71(uStack_b7,uStack_b8);
        uStack_c8 = uStack_b0;
        uStack_c0 = (ulong)bStack_a1 << 0x38;
      }
      bVar1 = true;
      goto LAB_10ae779a8;
    }
  }
  func_0x000107c2b978(&pppppppuStack_e8,param_4);
  pppppppuVar2 = pppppppuStack_e8;
  if (-1 < (char)bStack_d1) {
    uStack_e0 = (ulong)bStack_d1;
    pppppppuVar2 = &pppppppuStack_e8;
  }
  FUN_10ae89998(&pppppppuStack_d0,pppppppuVar2,uStack_e0,1,0);
  bVar1 = false;
LAB_10ae779a8:
  uStack_60 = uStack_c8;
  pppppppuStack_68 = pppppppuStack_d0;
  if (-1 < uStack_c0) {
    uStack_60 = (ulong)uStack_c0._7_1_;
    pppppppuStack_68 = &pppppppuStack_d0;
  }
  puStack_98 = &UNK_10f47a8fa;
  uStack_90 = 2;
  puStack_78 = &UNK_10f6d1966;
  uStack_70 = 2;
  puStack_58 = &UNK_10f6d1969;
  uStack_50 = 2;
  uStack_88 = param_2;
  uStack_80 = param_3;
  FUN_10ae8c89c(pppppppuVar3,&puStack_98,5);
  pppppppuVar2 = pppppppuStack_e8;
  if ((char)uStack_c0._7_1_ < '\0') {
    pppppppuVar3 = pppppppuStack_d0;
    __ZdlPv();
    pppppppuVar2 = pppppppuStack_e8;
  }
  if ((!bVar1) && ((char)bStack_d1 < '\0')) {
    __ZdlPv();
    pppppppuVar3 = pppppppuVar2;
  }
  if ((cStack_a0 == '\x01') && ((char)bStack_a1 < '\0')) {
    pppppppuVar3 = (undefined8 *******)CONCAT71(uStack_b7,uStack_b8);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppppuVar3;
  }
  ___stack_chk_fail();
  if ((cStack_a0 == '\x01') && ((char)bStack_a1 < '\0')) {
    __ZdlPv(CONCAT71(uStack_b7,uStack_b8));
  }
  __Unwind_Resume();
  if (*(int *)(pppppppuVar3 + 2) != 0xdd) {
    FUN_10ae77e20(pppppppuVar3 + 2,pppppppuVar3);
  }
  pppppppuVar2 = pppppppuVar3 + 3;
  if (*(char *)((long)pppppppuVar3 + 0x2f) < '\0') {
    pppppppuVar2 = (undefined8 *******)*pppppppuVar2;
  }
  return pppppppuVar2;
}



/* Entry: 10ae77af4; end: 10ae77b3f;  */

long * FUN_10ae77af4(long param_1)

{
  long *plVar1;
  
  if (*(int *)(param_1 + 0x10) != 0xdd) {
    FUN_10ae77e20((int *)(param_1 + 0x10),param_1);
  }
  plVar1 = (long *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x2f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  return plVar1;
}



/* Entry: 10ae77b40; end: 10ae77bef;  */

void FUN_10ae77b40(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_30 = &UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  FUN_10ae77bf0(&PTR_FUN_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar2 = puStack_28;
  puVar1 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar2,puVar1);
  puVar2 = (undefined *)*param_1;
  if (puStack_30 != puVar2) {
    *param_1 = puStack_30;
    puStack_30 = (undefined *)0x36;
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar2 = puStack_30;
  }
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 10ae77bf0; end: 10ae77c73;  */

void FUN_10ae77bf0(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  pcVar4 = (code *)*param_1;
  uVar1 = *param_2;
  uVar3 = *param_3;
  uVar2 = *param_4;
  func_0x000107c31940(auStack_48,*param_5);
  (*pcVar4)(uVar1,uVar3,uVar2,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10ae77c74; end: 10ae77d6f;  */

void FUN_10ae77c74(long *param_1)

{
  code *pcVar1;
  undefined8 **ppuStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  undefined1 auStack_a0 [24];
  undefined8 **ppuStack_88;
  ulong uStack_80;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_58 = &UNK_10f6d1a3f;
  uStack_50 = 0x34;
  if (*param_1 == 0) {
    func_0x000107c31940(&ppuStack_b8,&UNK_10f6d1a74);
  }
  else {
    FUN_10ae77430(&ppuStack_b8,param_1,1);
  }
  uStack_80 = uStack_b0;
  ppuStack_88 = ppuStack_b8;
  if (-1 < (char)bStack_a1) {
    uStack_80 = (ulong)bStack_a1;
    ppuStack_88 = &ppuStack_b8;
  }
  func_0x000107c2ba40(auStack_a0,&puStack_58,&ppuStack_88);
  (*(code *)PTR_FUN_113311b68)(3,&UNK_10f6d19ac,0x56,auStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(&ppuStack_b8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae77d34);
  (*pcVar1)();
}



/* Entry: 10ae77d70; end: 10ae77dbf;  */

void FUN_10ae77d70(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  ___cxa_allocate_exception();
  uVar2 = *param_1;
  *param_1 = 0x36;
  *puVar1 = &PTR_FUN_110c8ae20;
  puVar1[1] = uVar2;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  ___cxa_throw();
  *puVar1 = &PTR_FUN_110c8ae20;
  if (*(char *)((long)puVar1 + 0x2f) < '\0') {
    __ZdlPv(puVar1[3]);
  }
  if ((puVar1[1] & 1) != 0) {
    func_0x000107c2b9b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(puVar1);
  return;
}



/* Entry: 10ae77dc0; end: 10ae77dc3;  */

void FUN_10ae77dc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c8ae20;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if ((param_1[1] & 1) != 0) {
    func_0x000107c2b9b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 10ae77dc4; end: 10ae77dd7;  */

void FUN_10ae77dc4(void)

{
  FUN_10ae77dd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


