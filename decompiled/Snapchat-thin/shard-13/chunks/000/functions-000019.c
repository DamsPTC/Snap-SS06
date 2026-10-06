/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d3aca8; end: 109d3ad37;  */

void FUN_109d3aca8(long *param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  if ((ulong)param_1[2] < lVar1 + 1U) {
    FUN_109dffce4(param_1,param_1 + 3,lVar1 + 1U,1);
    lVar1 = param_1[1];
  }
  *(char *)(*param_1 + lVar1) = (char)param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



/* Entry: 109d3ad38; end: 109d3ad8b;  */

void FUN_109d3ad38(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = (undefined4)param_2;
  if (param_2 <= *(uint *)((long)param_1 + 0xc)) {
    puVar4 = (undefined8 *)*param_1;
    uVar6 = (ulong)*(uint *)(param_1 + 1);
    puVar5 = puVar4;
    uVar1 = uVar6;
    if (param_2 <= uVar6) {
      uVar1 = param_2;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = param_3;
      puVar5 = puVar5 + 1;
    }
    lVar7 = uVar6 - param_2;
    if (uVar6 < param_2) {
      puVar5 = puVar4 + uVar6;
      do {
        *puVar5 = param_3;
        bVar2 = lVar7 != -1;
        lVar7 = lVar7 + 1;
        puVar5 = puVar5 + 1;
      } while (bVar2);
    }
    *(undefined4 *)(param_1 + 1) = uVar3;
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  func_0x000107c2b01c(param_1,param_1 + 2,param_2,8);
  if (param_2 != 0) {
    puVar5 = (undefined8 *)*param_1;
    do {
      *puVar5 = param_3;
      param_2 = param_2 - 1;
      puVar5 = puVar5 + 1;
    } while (param_2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = uVar3;
  return;
}



/* Entry: 109d3ad8c; end: 109d3ade7;  */

void FUN_109d3ad8c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  func_0x000107c2b01c(param_1,param_1 + 2,param_2,8);
  if (param_2 != 0) {
    puVar1 = (undefined8 *)*param_1;
    lVar2 = param_2;
    do {
      *puVar1 = param_3;
      lVar2 = lVar2 + -1;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  *(int *)(param_1 + 1) = (int)param_2;
  return;
}



/* Entry: 109d3ade8; end: 109d3ae0f;  */

void FUN_109d3ade8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_109d9d1b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109d3ae10; end: 109d3afab;  */

/* WARNING: Possible PIC construction at 0x000109d3aee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d3aeec) */
/* WARNING: Removing unreachable block (ram,0x000109d3aefc) */

long * FUN_109d3ae10(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long **pplVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *******pppppppuVar10;
  undefined8 uVar11;
  long lVar12;
  long *plStack_60;
  long *plStack_58;
  undefined8 ******ppppppuStack_50;
  code *pcStack_48;
  
  pplVar4 = (long **)&stack0xffffffffffffffc0;
  pppppppuVar10 = (undefined8 *******)&stack0xfffffffffffffff0;
  plVar9 = (long *)*param_1;
  if ((ulong)(param_1[2] - (long)plVar9 >> 4) < param_4) {
    plVar9 = param_1;
    plVar8 = param_2;
    func_0x000109d3a964();
    if (param_4 >> 0x3c != 0) {
      FUN_109d3b060();
      pplVar4 = &plStack_60;
      pcStack_48 = FUN_109d3afac;
      plStack_60 = param_3;
      plStack_58 = param_1;
      ppppppuStack_50 = pppppppuVar10;
      if ((ulong)plVar8 >> 0x3c == 0) {
        plVar5 = plVar9;
        FUN_109d3b074();
        *plVar9 = (long)plVar5;
        plVar9[1] = (long)plVar5;
        plVar9[2] = (long)(plVar5 + (long)plVar8 * 2);
        return plVar5;
      }
      uVar11 = 0x109d3afe4;
      FUN_109d3b060();
      param_2 = plVar8;
      pppppppuVar10 = &ppppppuStack_50;
SUB_109d3afe4:
      *(long **)((long)pplVar4 + -0x20) = param_3;
      *(long **)((long)pplVar4 + -0x18) = param_1;
      *(undefined8 ********)((long)pplVar4 + -0x10) = pppppppuVar10;
      *(undefined8 *)((long)pplVar4 + -8) = uVar11;
      lVar12 = param_2[1];
      lVar7 = *param_2;
      if (param_2[1] != 0) {
        plVar8 = (long *)(param_2[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar8 = (long *)plVar9[1];
      plVar9[1] = lVar12;
      *plVar9 = lVar7;
      if (plVar8 != (long *)0x0) {
        plVar5 = plVar8 + 1;
        do {
          lVar7 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      return plVar9;
    }
    uVar6 = param_1[2] - *param_1 >> 3;
    if (uVar6 <= param_4) {
      uVar6 = param_4;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar6 = 0xfffffffffffffff;
    }
    plVar8 = param_1;
    FUN_109d3afac(param_1,uVar6);
    plVar5 = (long *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar7 = param_2[1];
      lVar12 = *param_2;
      plVar5[1] = param_2[1];
      *plVar5 = lVar12;
      if (lVar7 != 0) {
        plVar9 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar5 = plVar5 + 2;
    }
  }
  else {
    plVar8 = (long *)param_1[1];
    if (param_4 <= (ulong)((long)plVar8 - (long)plVar9 >> 4)) {
      if (param_2 != param_3) {
        do {
          func_0x000109d3afe4(plVar9,param_2);
          param_2 = param_2 + 2;
          plVar9 = plVar9 + 2;
        } while (param_2 != param_3);
        plVar8 = (long *)param_1[1];
      }
      while (plVar8 != plVar9) {
        plVar8 = plVar8 + -2;
        func_0x000109d3a9c0();
      }
      param_1[1] = (long)plVar9;
      return plVar8;
    }
    plVar1 = (long *)((long)param_2 + ((long)plVar8 - (long)plVar9));
    plVar5 = plVar8;
    if (plVar8 != plVar9) {
      uVar11 = 0x109d3aeec;
      goto SUB_109d3afe4;
    }
    for (; plVar1 != param_3; plVar1 = plVar1 + 2) {
      lVar7 = plVar1[1];
      lVar12 = *plVar1;
      plVar5[1] = plVar1[1];
      *plVar5 = lVar12;
      if (lVar7 != 0) {
        plVar9 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar5 = plVar5 + 2;
    }
  }
  param_1[1] = (long)plVar5;
  return plVar8;
}



/* Entry: 109d3afac; end: 109d3b05f;  */

long * FUN_109d3afac(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar5 = param_1;
    FUN_109d3b074();
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar5;
    param_1[2] = (long)(plVar5 + (long)param_2 * 2);
    return plVar5;
  }
  FUN_109d3b060();
  lVar6 = param_2[1];
  lVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = lVar6;
  *param_1 = lVar4;
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



/* Entry: 109d3b060; end: 109d3b073;  */

void FUN_109d3b060(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  FUN_109d3b100(*plVar2,*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 8,param_2);
  uVar1 = *(uint *)(plVar2 + 1);
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 * -8;
    lVar3 = *plVar2 + (ulong)uVar1 * 8;
    do {
      lVar3 = lVar3 + -8;
      FUN_109d33be0(lVar3);
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d3b074; end: 109d3b0ff;  */

void FUN_109d3b074(long *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  FUN_109d3b100(*param_1,*param_1 + (ulong)*(uint *)(param_1 + 1) * 8,param_2);
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * -8;
    lVar2 = *param_1 + (ulong)uVar1 * 8;
    do {
      lVar2 = lVar2 + -8;
      FUN_109d33be0(lVar2);
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 109d3b100; end: 109d3b1af;  */

void FUN_109d3b100(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    lVar1 = *param_1;
    *param_3 = lVar1;
    if (lVar1 != 0) {
      FUN_109d947e4(param_1,lVar1,param_3);
      *param_1 = 0;
    }
    param_3 = param_3 + 1;
  }
  return;
}



/* Entry: 109d3b1b0; end: 109d3b21b;  */

void FUN_109d3b1b0(undefined8 *param_1)

{
  long *plStack_30;
  undefined1 auStack_28 [8];
  
  plStack_30 = (long *)*param_1;
  *param_1 = 0;
  FUN_109d3b21c(auStack_28,&plStack_30);
  if (plStack_30 != (long *)0x0) {
    (**(code **)(*plStack_30 + 8))();
  }
  return;
}



/* Entry: 109d3b21c; end: 109d3b3eb;  */

void FUN_109d3b21c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar3 = (long *)*param_2;
  if (plVar3 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    *param_2 = 0;
    plVar4 = plVar3;
    (**(code **)(*plVar3 + 0x30))(plVar3,0x113834570);
    if ((int)plVar4 == 0) {
      plVar4 = plVar3;
      (**(code **)(*plVar3 + 0x30))(plVar3,0x113834571);
      if ((int)plVar4 != 0) {
        *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x000109d3b34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3);
        return;
      }
      *param_1 = plVar3;
    }
    else {
      puVar6 = (undefined8 *)plVar3[1];
      puVar1 = (undefined8 *)plVar3[2];
      if (puVar6 == puVar1) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = (long *)0x0;
        do {
          plVar5 = (long *)*puVar6;
          *puVar6 = 0;
          plVar2 = plVar5;
          plStack_50 = plVar4;
          (**(code **)(*plVar5 + 0x30))(plVar5,0x113834571);
          if ((int)plVar2 != 0) {
            (**(code **)(*plVar5 + 8))(plVar5);
            plVar5 = (long *)0x0;
          }
          plStack_58 = plVar5;
          FUN_109d39358(&plStack_48,&plStack_50,&plStack_58);
          plVar4 = plStack_48;
          plStack_48 = (long *)0x0;
          if (plStack_58 != (long *)0x0) {
            (**(code **)(*plStack_58 + 8))();
          }
          if (plStack_50 != (long *)0x0) {
            (**(code **)(*plStack_50 + 8))();
          }
          puVar6 = puVar6 + 1;
        } while (puVar6 != puVar1);
      }
      *param_1 = plVar4;
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  return;
}



/* Entry: 109d3b3ec; end: 109d3b46b;  */

void FUN_109d3b3ec(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_3 - param_2;
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  uVar1 = uVar2 + ((long)uVar3 >> 3);
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1,8);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  if (param_2 != param_3) {
    _memcpy(*param_1 + uVar2 * 8,param_2,uVar3);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  *(int *)(param_1 + 1) = (int)uVar2 + (int)(uVar3 >> 3);
  return;
}



/* Entry: 109d3b46c; end: 109d3b4b7;  */

long FUN_109d3b46c(long param_1)

{
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa0);
    __ZdlPv();
  }
  FUN_109d340ac(param_1 + 0x38);
  __ZdlPvSt11align_val_t(*(undefined8 *)(param_1 + 0x10),8);
  FUN_109d4f9c0(param_1 + 8);
  return param_1;
}



/* Entry: 109d3b4b8; end: 109d3b6e3;  */

void FUN_109d3b4b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined4 uStack_bc;
  ulong uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d3b6e4(*(undefined8 *)(param_1 + 8),param_2,3);
  plVar6 = (long *)0x228;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110b40f08;
  plVar6[8] = 0;
  plVar6[7] = 0;
  plVar6[10] = 0;
  plVar6[9] = 0;
  plVar6[0xc] = 0;
  plVar6[0xb] = 0;
  plVar6[0xe] = 0;
  plVar6[0xd] = 0;
  plVar6[0x10] = 0;
  plVar6[0xf] = 0;
  plVar6[0x12] = 0;
  plVar6[0x11] = 0;
  plVar6[0x14] = 0;
  plVar6[0x13] = 0;
  plVar6[0x16] = 0;
  plVar6[0x15] = 0;
  plVar6[0x18] = 0;
  plVar6[0x17] = 0;
  plVar6[0x1a] = 0;
  plVar6[0x19] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1b] = 0;
  plVar6[0x1e] = 0;
  plVar6[0x1d] = 0;
  plVar6[0x20] = 0;
  plVar6[0x1f] = 0;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[0x22] = 0;
  plVar6[0x21] = 0;
  plVar6[0x24] = 0;
  plVar6[0x23] = 0;
  plVar6[0x26] = 0;
  plVar6[0x25] = 0;
  plVar6[0x28] = 0;
  plVar6[0x27] = 0;
  plVar6[0x2a] = 0;
  plVar6[0x29] = 0;
  plVar6[0x2c] = 0;
  plVar6[0x2b] = 0;
  plVar6[0x2e] = 0;
  plVar6[0x2d] = 0;
  plVar6[0x30] = 0;
  plVar6[0x2f] = 0;
  plVar6[0x32] = 0;
  plVar6[0x31] = 0;
  plVar6[0x34] = 0;
  plVar6[0x33] = 0;
  plVar6[0x36] = 0;
  plVar6[0x35] = 0;
  plVar6[0x38] = 0;
  plVar6[0x37] = 0;
  plVar6[0x3a] = 0;
  plVar6[0x39] = 0;
  plVar6[0x3c] = 0;
  plVar6[0x3b] = 0;
  plVar6[0x3e] = 0;
  plVar6[0x3d] = 0;
  plVar6[0x40] = 0;
  plVar6[0x3f] = 0;
  plVar8 = plVar6 + 3;
  *plVar8 = (long)(plVar6 + 5);
  plVar6[0x42] = 0;
  plVar6[0x41] = 0;
  plVar6[0x44] = 0;
  plVar6[0x43] = 0;
  plVar6[4] = 0x2000000000;
  plStack_60 = plVar8;
  plStack_58 = plVar6;
  FUN_109d4444c(plVar8,1,0xff);
  FUN_109d4444c(plVar8,0,10);
  lVar15 = *(long *)(param_1 + 8);
  plStack_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  plStack_70 = plVar8;
  plStack_68 = plVar6;
  FUN_109d444b8(lVar15,plVar8);
  FUN_109d4459c(lVar15 + 0x28,&plStack_70);
  plVar6 = plStack_68;
  uVar14 = (ulong)(*(long *)(lVar15 + 0x30) - *(long *)(lVar15 + 0x28)) >> 4;
  if (plStack_68 != (long *)0x0) {
    plVar8 = plStack_68 + 1;
    do {
      lVar13 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  uStack_50 = 1;
  uVar9 = (ulong)((int)uVar14 + 3);
  puVar10 = &uStack_50;
  FUN_109d478e0(*(undefined8 *)(param_1 + 8),uVar9,puVar10,1,param_3,param_4,0);
  plVar7 = *(long **)(param_1 + 8);
  FUN_109d3b86c();
  plVar8 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar13 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x000109d3a9c0(&plStack_60);
  plVar8 = plVar7;
  __Unwind_Resume();
  plStack_a0 = plVar6;
  pcStack_78 = FUN_109d3b6e4;
  lStack_b0 = lVar15;
  uStack_a8 = uVar14;
  uStack_98 = param_3;
  uStack_90 = param_4;
  plStack_88 = plVar7;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109d43c48();
  FUN_109d43cd4(plVar8,uVar9,8);
  FUN_109d43cd4(plVar8,puVar10,4);
  FUN_109d43d4c(plVar8);
  plVar6 = (long *)plVar8[1];
  lVar15 = *(long *)(*plVar8 + 8);
  if (plVar6 == (long *)0x0) {
    lVar13 = 0;
  }
  else {
    plVar7 = plVar6;
    (**(code **)(*plVar6 + 0x50))();
    lVar13 = (long)plVar7 + (plVar6[4] - plVar6[2]);
  }
  uVar14 = (ulong)(lVar13 + lVar15) >> 2;
  lVar15 = plVar8[4];
  uStack_bc = (int)lVar15;
  uStack_b8 = uVar14;
  FUN_109d43c48(plVar8,0,0x20);
  *(int *)(plVar8 + 4) = (int)puVar10;
  puVar2 = (undefined4 *)plVar8[9];
  if (puVar2 < (undefined4 *)plVar8[10]) {
    *puVar2 = (int)lVar15;
    *(ulong *)(puVar2 + 2) = uVar14;
    *(undefined8 *)(puVar2 + 4) = 0;
    plVar6 = (long *)(puVar2 + 10);
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
  }
  else {
    plVar6 = plVar8 + 8;
    FUN_109d43d98(plVar6,&uStack_bc,&uStack_b8);
  }
  plVar7 = plVar8 + 5;
  plVar8[9] = (long)plVar6;
  lVar15 = plVar6[-3];
  plVar6[-3] = *plVar7;
  *plVar7 = lVar15;
  lVar15 = plVar6[-2];
  plVar6[-2] = plVar8[6];
  plVar8[6] = lVar15;
  lVar15 = plVar6[-1];
  plVar6[-1] = plVar8[7];
  plVar8[7] = lVar15;
  piVar12 = (int *)plVar8[0xb];
  piVar3 = (int *)plVar8[0xc];
  if (piVar12 != piVar3) {
    piVar11 = piVar3 + -8;
    if (piVar3[-8] == (int)uVar9) {
LAB_109d3b820:
      FUN_109d440e4(plVar7,plVar8[6],*(long *)(piVar11 + 2),*(long *)(piVar11 + 4),
                    *(long *)(piVar11 + 4) - *(long *)(piVar11 + 2) >> 4);
    }
    else {
      do {
        piVar11 = piVar12;
        if (*piVar12 == (int)uVar9) goto LAB_109d3b820;
        piVar12 = piVar12 + 8;
      } while (piVar12 != piVar3);
    }
  }
  return;
}



/* Entry: 109d3b6e4; end: 109d3b86b;  */

void FUN_109d3b6e4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uStack_4c;
  ulong uStack_48;
  
  FUN_109d43c48(param_1,1,(int)param_1[4]);
  FUN_109d43cd4(param_1,param_2,8);
  FUN_109d43cd4(param_1,param_3,4);
  FUN_109d43d4c(param_1);
  plVar4 = (long *)param_1[1];
  lVar9 = *(long *)(*param_1 + 8);
  if (plVar4 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    plVar3 = plVar4;
    (**(code **)(*plVar4 + 0x50))();
    lVar5 = (long)plVar3 + (plVar4[4] - plVar4[2]);
  }
  uVar8 = (ulong)(lVar5 + lVar9) >> 2;
  lVar9 = param_1[4];
  uStack_4c = (int)lVar9;
  uStack_48 = uVar8;
  FUN_109d43c48(param_1,0,0x20);
  *(int *)(param_1 + 4) = (int)param_3;
  puVar1 = (undefined4 *)param_1[9];
  if (puVar1 < (undefined4 *)param_1[10]) {
    *puVar1 = (int)lVar9;
    *(ulong *)(puVar1 + 2) = uVar8;
    *(undefined8 *)(puVar1 + 4) = 0;
    plVar4 = (long *)(puVar1 + 10);
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
  }
  else {
    plVar4 = param_1 + 8;
    FUN_109d43d98(plVar4,&uStack_4c,&uStack_48);
  }
  plVar3 = param_1 + 5;
  param_1[9] = (long)plVar4;
  lVar9 = plVar4[-3];
  plVar4[-3] = *plVar3;
  *plVar3 = lVar9;
  lVar9 = plVar4[-2];
  plVar4[-2] = param_1[6];
  param_1[6] = lVar9;
  lVar9 = plVar4[-1];
  plVar4[-1] = param_1[7];
  param_1[7] = lVar9;
  piVar7 = (int *)param_1[0xb];
  piVar2 = (int *)param_1[0xc];
  if (piVar7 != piVar2) {
    piVar6 = piVar2 + -8;
    if (piVar2[-8] == (int)param_2) {
LAB_109d3b820:
      FUN_109d440e4(plVar3,param_1[6],*(long *)(piVar6 + 2),*(long *)(piVar6 + 4),
                    *(long *)(piVar6 + 4) - *(long *)(piVar6 + 2) >> 4);
    }
    else {
      do {
        piVar6 = piVar7;
        if (*piVar7 == (int)param_2) goto LAB_109d3b820;
        piVar7 = piVar7 + 8;
      } while (piVar7 != piVar2);
    }
  }
  return;
}



/* Entry: 109d3b86c; end: 109d3ba13;  */

void FUN_109d3b86c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_38;
  
  lVar4 = param_1[9];
  FUN_109d43c48(param_1,0,(int)param_1[4]);
  FUN_109d43d4c(param_1);
  plVar1 = (long *)param_1[1];
  lVar5 = *(long *)(*param_1 + 8);
  if (plVar1 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    plVar2 = plVar1;
    (**(code **)(*plVar1 + 0x50))(plVar1);
    lVar3 = (long)plVar2 + (plVar1[4] - plVar1[2]);
  }
  FUN_109d44718(param_1,*(long *)(lVar4 + -0x20) << 5,
                (int)((ulong)(lVar3 + lVar5) >> 2) + ~(uint)*(long *)(lVar4 + -0x20));
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar4 + -0x28);
  if (param_1 + 5 != (long *)(lVar4 + -0x18)) {
    FUN_109d3ae10();
  }
  lVar4 = param_1[9];
  lStack_38 = lVar4 + -0x18;
  FUN_109d3aa18(&lStack_38);
  param_1[9] = lVar4 + -0x28;
  FUN_109d44930(param_1);
  return;
}



/* Entry: 109d3ba14; end: 109d432cb;  */

/* WARNING: Type propagation algorithm not settling */

long ****** FUN_109d3ba14(long *******param_1)

{
  long ****pppplVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  undefined8 *puVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  ulong *puVar15;
  uint uVar16;
  char cVar17;
  bool bVar18;
  code *pcVar19;
  bool bVar20;
  long ******pppppplVar21;
  long ******pppppplVar22;
  long *plVar23;
  long *******ppppppplVar24;
  long *******ppppppplVar25;
  long ****pppplVar26;
  byte bVar27;
  ulong uVar28;
  long ***ppplVar29;
  undefined4 uVar30;
  long *****ppppplVar31;
  long lVar32;
  long *****ppppplVar33;
  long *****ppppplVar34;
  long *****ppppplVar35;
  long *****ppppplVar36;
  long *****ppppplVar37;
  long *****ppppplVar38;
  ulong uVar39;
  long *******ppppppplVar40;
  ulong uVar41;
  long ******pppppplVar42;
  undefined8 uVar43;
  long ****pppplVar44;
  undefined8 uVar45;
  long *******ppppppplVar46;
  long ******pppppplVar47;
  ulong *puVar48;
  long *plVar49;
  uint uVar50;
  uint uVar51;
  long ***ppplVar52;
  ulong *puVar53;
  int iVar55;
  uint uVar56;
  long ******pppppplVar57;
  long lVar58;
  long *****ppppplStack_640;
  long *****ppppplStack_638;
  long *****ppppplStack_630;
  long ******pppppplStack_628;
  long ******pppppplStack_620;
  long ******pppppplStack_618;
  long *******ppppppplStack_610;
  long *******ppppppplStack_608;
  long ******pppppplStack_600;
  long ******pppppplStack_5f8;
  long ******pppppplStack_5f0;
  undefined4 uStack_5e8;
  long ******pppppplStack_5e0;
  long *plStack_5d8;
  long ******pppppplStack_5d0;
  long *plStack_5c8;
  long ******pppppplStack_5c0;
  long *plStack_5b8;
  long *******ppppppplStack_5b0;
  long ******pppppplStack_5a8;
  undefined8 uStack_5a0;
  long *******ppppppplStack_598;
  long ******pppppplStack_590;
  undefined8 uStack_588;
  long ******pppppplStack_580;
  long *plStack_578;
  long ******pppppplStack_570;
  long *plStack_568;
  long ******pppppplStack_560;
  long *plStack_558;
  long ******pppppplStack_550;
  long *plStack_548;
  long ******pppppplStack_540;
  long *plStack_538;
  long ******pppppplStack_530;
  long *plStack_528;
  long ******pppppplStack_520;
  long *plStack_518;
  long ******pppppplStack_510;
  long ******pppppplStack_508;
  long *******ppppppplStack_500;
  long *******ppppppplStack_4f8;
  long ******apppppplStack_4f0 [64];
  long ******pppppplStack_2f0;
  long ******pppppplStack_2e8;
  undefined8 uStack_2e0;
  long *******ppppppplStack_2d8;
  long ***ppplStack_2d0;
  long *plStack_2c8;
  long *******ppppppplStack_2c0;
  long *******ppppppplStack_2b8;
  long ****pppplStack_2b0;
  long *******ppppppplStack_2a8;
  long *******ppppppplStack_2a0;
  long ******pppppplStack_298;
  undefined8 uStack_290;
  long lStack_90;
  ulong *puVar54;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar42 = *param_1;
  FUN_109d3b6e4(pppppplVar42,0xd,5);
  pppppplVar21 = (long ******)0x228;
  __Znwm();
  pppppplVar21[1] = (long *****)0x0;
  pppppplVar21[2] = (long *****)0x0;
  *pppppplVar21 = (long *****)&PTR_FUN_110b40f08;
  pppppplVar21[8] = (long *****)0x0;
  pppppplVar21[7] = (long *****)0x0;
  pppppplVar21[10] = (long *****)0x0;
  pppppplVar21[9] = (long *****)0x0;
  pppppplVar21[0xc] = (long *****)0x0;
  pppppplVar21[0xb] = (long *****)0x0;
  pppppplVar21[0xe] = (long *****)0x0;
  pppppplVar21[0xd] = (long *****)0x0;
  pppppplVar21[0x10] = (long *****)0x0;
  pppppplVar21[0xf] = (long *****)0x0;
  pppppplVar21[0x12] = (long *****)0x0;
  pppppplVar21[0x11] = (long *****)0x0;
  pppppplVar21[0x14] = (long *****)0x0;
  pppppplVar21[0x13] = (long *****)0x0;
  pppppplVar21[0x16] = (long *****)0x0;
  pppppplVar21[0x15] = (long *****)0x0;
  pppppplVar21[0x18] = (long *****)0x0;
  pppppplVar21[0x17] = (long *****)0x0;
  pppppplVar21[0x1a] = (long *****)0x0;
  pppppplVar21[0x19] = (long *****)0x0;
  pppppplVar21[0x1c] = (long *****)0x0;
  pppppplVar21[0x1b] = (long *****)0x0;
  pppppplVar21[0x1e] = (long *****)0x0;
  pppppplVar21[0x1d] = (long *****)0x0;
  pppppplVar21[0x20] = (long *****)0x0;
  pppppplVar21[0x1f] = (long *****)0x0;
  pppppplVar21[6] = (long *****)0x0;
  pppppplVar21[5] = (long *****)0x0;
  pppppplVar21[0x22] = (long *****)0x0;
  pppppplVar21[0x21] = (long *****)0x0;
  pppppplVar21[0x24] = (long *****)0x0;
  pppppplVar21[0x23] = (long *****)0x0;
  pppppplVar21[0x26] = (long *****)0x0;
  pppppplVar21[0x25] = (long *****)0x0;
  pppppplVar21[0x28] = (long *****)0x0;
  pppppplVar21[0x27] = (long *****)0x0;
  pppppplVar21[0x2a] = (long *****)0x0;
  pppppplVar21[0x29] = (long *****)0x0;
  pppppplVar21[0x2c] = (long *****)0x0;
  pppppplVar21[0x2b] = (long *****)0x0;
  pppppplVar21[0x2e] = (long *****)0x0;
  pppppplVar21[0x2d] = (long *****)0x0;
  pppppplVar21[0x30] = (long *****)0x0;
  pppppplVar21[0x2f] = (long *****)0x0;
  pppppplVar21[0x32] = (long *****)0x0;
  pppppplVar21[0x31] = (long *****)0x0;
  pppppplVar21[0x34] = (long *****)0x0;
  pppppplVar21[0x33] = (long *****)0x0;
  pppppplVar21[0x36] = (long *****)0x0;
  pppppplVar21[0x35] = (long *****)0x0;
  pppppplVar21[0x38] = (long *****)0x0;
  pppppplVar21[0x37] = (long *****)0x0;
  pppppplVar21[0x3a] = (long *****)0x0;
  pppppplVar21[0x39] = (long *****)0x0;
  pppppplVar21[0x3c] = (long *****)0x0;
  pppppplVar21[0x3b] = (long *****)0x0;
  pppppplVar21[0x3e] = (long *****)0x0;
  pppppplVar21[0x3d] = (long *****)0x0;
  pppppplVar21[0x40] = (long *****)0x0;
  pppppplVar21[0x3f] = (long *****)0x0;
  pppppplVar22 = pppppplVar21 + 3;
  *pppppplVar22 = (long *****)(pppppplVar21 + 5);
  pppppplVar21[0x42] = (long *****)0x0;
  pppppplVar21[0x41] = (long *****)0x0;
  pppppplVar21[0x44] = (long *****)0x0;
  pppppplVar21[0x43] = (long *****)0x0;
  pppppplVar21[4] = (long *****)0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar22;
  pppppplStack_298 = pppppplVar21;
  FUN_109d4444c(pppppplVar22,1,0xff);
  FUN_109d4444c(pppppplVar22,0,6);
  FUN_109d4444c(pppppplVar22,0,8);
  pppppplStack_298 = (long ******)0x0;
  ppppppplStack_2a0 = (long *******)0x0;
  ppppppplStack_500 = (long *******)pppppplVar22;
  ppppppplStack_4f8 = (long *******)pppppplVar21;
  FUN_109d444b8(pppppplVar42,pppppplVar22);
  FUN_109d4459c(pppppplVar42 + 5,&ppppppplStack_500);
  ppppppplVar46 = ppppppplStack_4f8;
  ppppplVar33 = pppppplVar42[5];
  ppppplVar34 = pppppplVar42[6];
  if (ppppppplStack_4f8 != (long *******)0x0) {
    pppppplVar21 = (long ******)(ppppppplStack_4f8 + 1);
    do {
      ppppplVar31 = *pppppplVar21;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
      if (bVar20) {
        *pppppplVar21 = (long *****)((long)ppppplVar31 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar31 == (long *****)0x0) {
      (*(code *)(*ppppppplStack_4f8)[2])(ppppppplStack_4f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
    }
  }
  FUN_109d4714c(pppppplVar42,1,&UNK_10f5af24a,10,
                (int)((ulong)((long)ppppplVar34 - (long)ppppplVar33) >> 4) + 3);
  pppppplVar22 = (long ******)0x228;
  __Znwm();
  pppppplVar21 = pppppplStack_298;
  pppppplVar22[1] = (long *****)0x0;
  pppppplVar22[2] = (long *****)0x0;
  *pppppplVar22 = (long *****)&PTR_FUN_110b40f08;
  pppppplVar22[8] = (long *****)0x0;
  pppppplVar22[7] = (long *****)0x0;
  pppppplVar22[10] = (long *****)0x0;
  pppppplVar22[9] = (long *****)0x0;
  pppppplVar22[0xc] = (long *****)0x0;
  pppppplVar22[0xb] = (long *****)0x0;
  pppppplVar22[0xe] = (long *****)0x0;
  pppppplVar22[0xd] = (long *****)0x0;
  pppppplVar22[0x10] = (long *****)0x0;
  pppppplVar22[0xf] = (long *****)0x0;
  pppppplVar22[0x12] = (long *****)0x0;
  pppppplVar22[0x11] = (long *****)0x0;
  pppppplVar22[0x14] = (long *****)0x0;
  pppppplVar22[0x13] = (long *****)0x0;
  pppppplVar22[0x16] = (long *****)0x0;
  pppppplVar22[0x15] = (long *****)0x0;
  pppppplVar22[0x18] = (long *****)0x0;
  pppppplVar22[0x17] = (long *****)0x0;
  pppppplVar22[0x1a] = (long *****)0x0;
  pppppplVar22[0x19] = (long *****)0x0;
  pppppplVar22[0x1c] = (long *****)0x0;
  pppppplVar22[0x1b] = (long *****)0x0;
  pppppplVar22[0x1e] = (long *****)0x0;
  pppppplVar22[0x1d] = (long *****)0x0;
  pppppplVar22[0x20] = (long *****)0x0;
  pppppplVar22[0x1f] = (long *****)0x0;
  pppppplVar22[6] = (long *****)0x0;
  pppppplVar22[5] = (long *****)0x0;
  pppppplVar22[0x22] = (long *****)0x0;
  pppppplVar22[0x21] = (long *****)0x0;
  pppppplVar22[0x24] = (long *****)0x0;
  pppppplVar22[0x23] = (long *****)0x0;
  pppppplVar22[0x26] = (long *****)0x0;
  pppppplVar22[0x25] = (long *****)0x0;
  pppppplVar22[0x28] = (long *****)0x0;
  pppppplVar22[0x27] = (long *****)0x0;
  pppppplVar22[0x2a] = (long *****)0x0;
  pppppplVar22[0x29] = (long *****)0x0;
  pppppplVar22[0x2c] = (long *****)0x0;
  pppppplVar22[0x2b] = (long *****)0x0;
  pppppplVar22[0x2e] = (long *****)0x0;
  pppppplVar22[0x2d] = (long *****)0x0;
  pppppplVar22[0x30] = (long *****)0x0;
  pppppplVar22[0x2f] = (long *****)0x0;
  pppppplVar22[0x32] = (long *****)0x0;
  pppppplVar22[0x31] = (long *****)0x0;
  pppppplVar22[0x34] = (long *****)0x0;
  pppppplVar22[0x33] = (long *****)0x0;
  pppppplVar22[0x36] = (long *****)0x0;
  pppppplVar22[0x35] = (long *****)0x0;
  pppppplVar22[0x38] = (long *****)0x0;
  pppppplVar22[0x37] = (long *****)0x0;
  pppppplVar22[0x3a] = (long *****)0x0;
  pppppplVar22[0x39] = (long *****)0x0;
  pppppplVar22[0x3c] = (long *****)0x0;
  pppppplVar22[0x3b] = (long *****)0x0;
  pppppplVar22[0x3e] = (long *****)0x0;
  pppppplVar22[0x3d] = (long *****)0x0;
  pppppplVar22[0x40] = (long *****)0x0;
  pppppplVar22[0x3f] = (long *****)0x0;
  pppppplVar22[0x42] = (long *****)0x0;
  pppppplVar22[0x41] = (long *****)0x0;
  pppppplVar22[0x44] = (long *****)0x0;
  pppppplVar22[0x43] = (long *****)0x0;
  ppppppplStack_2a0 = (long *******)(pppppplVar22 + 3);
  *ppppppplStack_2a0 = pppppplVar22 + 5;
  pppppplVar22[4] = (long *****)0x2000000000;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      lVar32 = (long)*pppppplStack_298;
      pppppplStack_298 = pppppplVar22;
      (**(code **)(lVar32 + 0x10))(pppppplVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
      pppppplVar22 = pppppplStack_298;
    }
  }
  pppppplStack_298 = pppppplVar22;
  ppppppplVar46 = ppppppplStack_2a0;
  FUN_109d4444c(ppppppplStack_2a0,2,0xff);
  FUN_109d4444c(ppppppplVar46,6,4);
  ppppppplStack_2c0 = ppppppplVar46;
  ppppppplStack_2b8 = (long *******)pppppplStack_298;
  pppppplStack_298 = (long ******)0x0;
  ppppppplStack_2a0 = (long *******)0x0;
  FUN_109d444b8(pppppplVar42,ppppppplVar46);
  FUN_109d4459c(pppppplVar42 + 5,&ppppppplStack_2c0);
  ppppppplVar46 = ppppppplStack_2b8;
  iVar55 = (int)((ulong)((long)pppppplVar42[6] - (long)pppppplVar42[5]) >> 4) + 3;
  if (ppppppplStack_2b8 != (long *******)0x0) {
    pppppplVar21 = (long ******)(ppppppplStack_2b8 + 1);
    do {
      ppppplVar33 = *pppppplVar21;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
      if (bVar20) {
        *pppppplVar21 = (long *****)((long)ppppplVar33 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar33 == (long *****)0x0) {
      (*(code *)(*ppppppplStack_2b8)[2])(ppppppplStack_2b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
    }
  }
  uStack_2e0 = (undefined **)((ulong)uStack_2e0._4_4_ << 0x20);
  if (iVar55 == 0) {
    FUN_109d43c48(pppppplVar42,3,*(undefined4 *)(pppppplVar42 + 4));
    FUN_109d43c48(pppppplVar42,2,6);
    FUN_109d43c48(pppppplVar42,1,6);
    FUN_109d44680(pppppplVar42,(ulong)uStack_2e0 & 0xffffffff,6);
  }
  else {
    FUN_109d47340(pppppplVar42,iVar55,&uStack_2e0,1,0,0,0x100000002);
  }
  FUN_109d3b86c(pppppplVar42);
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  FUN_109d3b6e4(*param_1,8,3);
  ppppplVar33 = param_1[0x44][1];
  ppppppplStack_2a0 = (long *******)0x2;
  func_0x000109d47864(*param_1,1,&ppppppplStack_2a0,1);
  func_0x000109d47bcc(*param_1);
  pppppplVar21 = (long ******)0x228;
  __Znwm();
  pppppplVar47 = pppppplVar21 + 1;
  *pppppplVar47 = (long *****)0x0;
  pppppplVar21[2] = (long *****)0x0;
  *pppppplVar21 = (long *****)&PTR_FUN_110b40f08;
  pppppplVar21[8] = (long *****)0x0;
  pppppplVar21[7] = (long *****)0x0;
  pppppplVar21[10] = (long *****)0x0;
  pppppplVar21[9] = (long *****)0x0;
  pppppplVar21[0xc] = (long *****)0x0;
  pppppplVar21[0xb] = (long *****)0x0;
  pppppplVar21[0xe] = (long *****)0x0;
  pppppplVar21[0xd] = (long *****)0x0;
  pppppplVar21[0x10] = (long *****)0x0;
  pppppplVar21[0xf] = (long *****)0x0;
  pppppplVar21[0x12] = (long *****)0x0;
  pppppplVar21[0x11] = (long *****)0x0;
  pppppplVar21[0x14] = (long *****)0x0;
  pppppplVar21[0x13] = (long *****)0x0;
  pppppplVar21[0x16] = (long *****)0x0;
  pppppplVar21[0x15] = (long *****)0x0;
  pppppplVar21[0x18] = (long *****)0x0;
  pppppplVar21[0x17] = (long *****)0x0;
  pppppplVar21[0x1a] = (long *****)0x0;
  pppppplVar21[0x19] = (long *****)0x0;
  pppppplVar21[0x1c] = (long *****)0x0;
  pppppplVar21[0x1b] = (long *****)0x0;
  pppppplVar21[0x1e] = (long *****)0x0;
  pppppplVar21[0x1d] = (long *****)0x0;
  pppppplVar21[0x20] = (long *****)0x0;
  pppppplVar21[0x1f] = (long *****)0x0;
  pppppplVar21[6] = (long *****)0x0;
  pppppplVar21[5] = (long *****)0x0;
  pppppplVar21[0x22] = (long *****)0x0;
  pppppplVar21[0x21] = (long *****)0x0;
  pppppplVar21[0x24] = (long *****)0x0;
  pppppplVar21[0x23] = (long *****)0x0;
  pppppplVar21[0x26] = (long *****)0x0;
  pppppplVar21[0x25] = (long *****)0x0;
  pppppplVar21[0x28] = (long *****)0x0;
  pppppplVar21[0x27] = (long *****)0x0;
  pppppplVar21[0x2a] = (long *****)0x0;
  pppppplVar21[0x29] = (long *****)0x0;
  pppppplVar21[0x2c] = (long *****)0x0;
  pppppplVar21[0x2b] = (long *****)0x0;
  pppppplVar21[0x2e] = (long *****)0x0;
  pppppplVar21[0x2d] = (long *****)0x0;
  pppppplVar21[0x30] = (long *****)0x0;
  pppppplVar21[0x2f] = (long *****)0x0;
  pppppplVar21[0x32] = (long *****)0x0;
  pppppplVar21[0x31] = (long *****)0x0;
  pppppplVar21[0x34] = (long *****)0x0;
  pppppplVar21[0x33] = (long *****)0x0;
  pppppplVar21[0x36] = (long *****)0x0;
  pppppplVar21[0x35] = (long *****)0x0;
  pppppplVar21[0x38] = (long *****)0x0;
  pppppplVar21[0x37] = (long *****)0x0;
  pppppplVar21[0x3a] = (long *****)0x0;
  pppppplVar21[0x39] = (long *****)0x0;
  pppppplVar21[0x3c] = (long *****)0x0;
  pppppplVar21[0x3b] = (long *****)0x0;
  pppppplVar21[0x3e] = (long *****)0x0;
  pppppplVar21[0x3d] = (long *****)0x0;
  pppppplVar21[0x40] = (long *****)0x0;
  pppppplVar21[0x3f] = (long *****)0x0;
  pppppplVar21[0x42] = (long *****)0x0;
  pppppplVar21[0x41] = (long *****)0x0;
  pppppplVar21[0x44] = (long *****)0x0;
  pppppplVar21[0x43] = (long *****)0x0;
  pppppplVar22 = pppppplVar21 + 3;
  *pppppplVar22 = (long *****)(pppppplVar21 + 5);
  pppppplVar21[4] = (long *****)0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar22;
  pppppplStack_298 = pppppplVar21;
  FUN_109d4444c(pppppplVar22,3,2);
  FUN_109d4444c(pppppplVar22,8,4);
  FUN_109d4444c(pppppplVar22,0,6);
  FUN_109d4444c(pppppplVar22,8,2);
  pppppplVar42 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(pppppplVar47,0x10);
    if (bVar20) {
      *pppppplVar47 = (long *****)((long)*pppppplVar47 + 1);
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  ppppppplStack_500 = (long *******)pppppplVar22;
  ppppppplStack_4f8 = (long *******)pppppplVar21;
  func_0x000109d47c3c(pppppplVar42,0xe,&ppppppplStack_500);
  ppppppplVar46 = ppppppplStack_4f8;
  if (ppppppplStack_4f8 != (long *******)0x0) {
    pppppplVar21 = (long ******)(ppppppplStack_4f8 + 1);
    do {
      ppppplVar34 = *pppppplVar21;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
      if (bVar20) {
        *pppppplVar21 = (long *****)((long)ppppplVar34 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar34 == (long *****)0x0) {
      (*(code *)(*ppppppplStack_4f8)[2])(ppppppplStack_4f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    pppppplVar42 = pppppplStack_298 + 1;
    do {
      ppppplVar34 = *pppppplVar42;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
      if (bVar20) {
        *pppppplVar42 = (long *****)((long)ppppplVar34 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar34 == (long *****)0x0) {
      (*(code *)(*pppppplStack_298)[2])(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  pppppplVar21 = (long ******)0x228;
  __Znwm();
  pppppplVar47 = pppppplVar21 + 1;
  *pppppplVar47 = (long *****)0x0;
  pppppplVar21[2] = (long *****)0x0;
  *pppppplVar21 = (long *****)&PTR_FUN_110b40f08;
  pppppplVar21[8] = (long *****)0x0;
  pppppplVar21[7] = (long *****)0x0;
  pppppplVar21[10] = (long *****)0x0;
  pppppplVar21[9] = (long *****)0x0;
  pppppplVar21[0xc] = (long *****)0x0;
  pppppplVar21[0xb] = (long *****)0x0;
  pppppplVar21[0xe] = (long *****)0x0;
  pppppplVar21[0xd] = (long *****)0x0;
  pppppplVar21[0x10] = (long *****)0x0;
  pppppplVar21[0xf] = (long *****)0x0;
  pppppplVar21[0x12] = (long *****)0x0;
  pppppplVar21[0x11] = (long *****)0x0;
  pppppplVar21[0x14] = (long *****)0x0;
  pppppplVar21[0x13] = (long *****)0x0;
  pppppplVar21[0x16] = (long *****)0x0;
  pppppplVar21[0x15] = (long *****)0x0;
  pppppplVar21[0x18] = (long *****)0x0;
  pppppplVar21[0x17] = (long *****)0x0;
  pppppplVar21[0x1a] = (long *****)0x0;
  pppppplVar21[0x19] = (long *****)0x0;
  pppppplVar21[0x1c] = (long *****)0x0;
  pppppplVar21[0x1b] = (long *****)0x0;
  pppppplVar21[0x1e] = (long *****)0x0;
  pppppplVar21[0x1d] = (long *****)0x0;
  pppppplVar21[0x20] = (long *****)0x0;
  pppppplVar21[0x1f] = (long *****)0x0;
  pppppplVar21[6] = (long *****)0x0;
  pppppplVar21[5] = (long *****)0x0;
  pppppplVar21[0x22] = (long *****)0x0;
  pppppplVar21[0x21] = (long *****)0x0;
  pppppplVar21[0x24] = (long *****)0x0;
  pppppplVar21[0x23] = (long *****)0x0;
  pppppplVar21[0x26] = (long *****)0x0;
  pppppplVar21[0x25] = (long *****)0x0;
  pppppplVar21[0x28] = (long *****)0x0;
  pppppplVar21[0x27] = (long *****)0x0;
  pppppplVar21[0x2a] = (long *****)0x0;
  pppppplVar21[0x29] = (long *****)0x0;
  pppppplVar21[0x2c] = (long *****)0x0;
  pppppplVar21[0x2b] = (long *****)0x0;
  pppppplVar21[0x2e] = (long *****)0x0;
  pppppplVar21[0x2d] = (long *****)0x0;
  pppppplVar21[0x30] = (long *****)0x0;
  pppppplVar21[0x2f] = (long *****)0x0;
  pppppplVar21[0x32] = (long *****)0x0;
  pppppplVar21[0x31] = (long *****)0x0;
  pppppplVar21[0x34] = (long *****)0x0;
  pppppplVar21[0x33] = (long *****)0x0;
  pppppplVar21[0x36] = (long *****)0x0;
  pppppplVar21[0x35] = (long *****)0x0;
  pppppplVar21[0x38] = (long *****)0x0;
  pppppplVar21[0x37] = (long *****)0x0;
  pppppplVar21[0x3a] = (long *****)0x0;
  pppppplVar21[0x39] = (long *****)0x0;
  pppppplVar21[0x3c] = (long *****)0x0;
  pppppplVar21[0x3b] = (long *****)0x0;
  pppppplVar21[0x3e] = (long *****)0x0;
  pppppplVar21[0x3d] = (long *****)0x0;
  pppppplVar21[0x40] = (long *****)0x0;
  pppppplVar21[0x3f] = (long *****)0x0;
  pppppplVar21[0x42] = (long *****)0x0;
  pppppplVar21[0x41] = (long *****)0x0;
  pppppplVar21[0x44] = (long *****)0x0;
  pppppplVar21[0x43] = (long *****)0x0;
  pppppplVar22 = pppppplVar21 + 3;
  *pppppplVar22 = (long *****)(pppppplVar21 + 5);
  pppppplVar21[4] = (long *****)0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar22;
  pppppplStack_298 = pppppplVar21;
  FUN_109d4444c(pppppplVar22,1,0xff);
  FUN_109d4444c(pppppplVar22,8,4);
  FUN_109d4444c(pppppplVar22,0,6);
  FUN_109d4444c(pppppplVar22,7,2);
  pppppplVar42 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(pppppplVar47,0x10);
    if (bVar20) {
      *pppppplVar47 = (long *****)((long)*pppppplVar47 + 1);
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  ppppppplStack_2c0 = (long *******)pppppplVar22;
  ppppppplStack_2b8 = (long *******)pppppplVar21;
  func_0x000109d47c3c(pppppplVar42,0xe,&ppppppplStack_2c0);
  ppppppplVar46 = ppppppplStack_2b8;
  if (ppppppplStack_2b8 != (long *******)0x0) {
    pppppplVar21 = (long ******)(ppppppplStack_2b8 + 1);
    do {
      ppppplVar34 = *pppppplVar21;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
      if (bVar20) {
        *pppppplVar21 = (long *****)((long)ppppplVar34 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar34 == (long *****)0x0) {
      (*(code *)(*ppppppplStack_2b8)[2])(ppppppplStack_2b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    pppppplVar42 = pppppplStack_298 + 1;
    do {
      ppppplVar34 = *pppppplVar42;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
      if (bVar20) {
        *pppppplVar42 = (long *****)((long)ppppplVar34 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar34 == (long *****)0x0) {
      (*(code *)(*pppppplStack_298)[2])(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,1,0xff);
  FUN_109d4444c(pppppplVar42,8,4);
  FUN_109d4444c(pppppplVar42,0,6);
  FUN_109d4444c(pppppplVar42,0,8);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  uStack_2e0 = (undefined **)pppppplVar42;
  ppppppplStack_2d8 = (long *******)plVar23;
  func_0x000109d47c3c(pppppplVar21,0xe,&uStack_2e0);
  ppppppplVar46 = ppppppplStack_2d8;
  if (ppppppplStack_2d8 != (long *******)0x0) {
    plVar23 = (long *)(ppppppplStack_2d8 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*ppppppplStack_2d8 + 0x10))(ppppppplStack_2d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,2,0xff);
  FUN_109d4444c(pppppplVar42,8,4);
  FUN_109d4444c(pppppplVar42,0,6);
  FUN_109d4444c(pppppplVar42,0,8);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  ppppppplStack_598 = (long *******)pppppplVar42;
  pppppplStack_590 = (long ******)plVar23;
  func_0x000109d47c3c(pppppplVar21,0xe,&ppppppplStack_598);
  pppppplVar21 = pppppplStack_590;
  if (pppppplStack_590 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_590 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_590 + 0x10))(pppppplStack_590);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,1,0xff);
  FUN_109d4444c(pppppplVar42,
                0x20 - (int)LZCOUNT((int)((ulong)((long)param_1[10] - (long)param_1[9]) >> 3)),2);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  ppppppplStack_5b0 = (long *******)pppppplVar42;
  pppppplStack_5a8 = (long ******)plVar23;
  func_0x000109d47c3c(pppppplVar21,0xb,&ppppppplStack_5b0);
  pppppplVar21 = pppppplStack_5a8;
  if (pppppplStack_5a8 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_5a8 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_5a8 + 0x10))(pppppplStack_5a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,4,0xff);
  FUN_109d4444c(pppppplVar42,8,4);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  pppppplStack_5f8 = pppppplVar42;
  pppppplStack_5f0 = (long ******)plVar23;
  func_0x000109d47c3c(pppppplVar21,0xb,&pppppplStack_5f8);
  pppppplVar21 = pppppplStack_5f0;
  if (pppppplStack_5f0 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_5f0 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_5f0 + 0x10))(pppppplStack_5f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,0xb,0xff);
  FUN_109d4444c(pppppplVar42,4,2);
  FUN_109d4444c(pppppplVar42,
                0x20 - (int)LZCOUNT((int)((ulong)((long)param_1[10] - (long)param_1[9]) >> 3)),2);
  FUN_109d4444c(pppppplVar42,8,4);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  pppppplStack_2f0 = pppppplVar42;
  pppppplStack_2e8 = (long ******)plVar23;
  func_0x000109d47c3c(pppppplVar21,0xb,&pppppplStack_2f0);
  pppppplVar21 = pppppplStack_2e8;
  if (pppppplStack_2e8 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_2e8 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_2e8 + 0x10))(pppppplStack_2e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,2,0xff);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  pppppplStack_510 = pppppplVar42;
  pppppplStack_508 = (long ******)plVar23;
  func_0x000109d47c3c(pppppplVar21,0xb,&pppppplStack_510);
  pppppplVar21 = pppppplStack_508;
  if (pppppplStack_508 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_508 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_508 + 0x10))(pppppplStack_508);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,0x14,0xff);
  FUN_109d4444c(pppppplVar42,6,4);
  FUN_109d4444c(pppppplVar42,
                0x20 - (int)LZCOUNT((int)((ulong)((long)param_1[10] - (long)param_1[9]) >> 3)),2);
  FUN_109d4444c(pppppplVar42,4,4);
  FUN_109d4444c(pppppplVar42,1,2);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  pppppplStack_520 = pppppplVar42;
  plStack_518 = plVar23;
  func_0x000109d47c3c(pppppplVar21,0xc,&pppppplStack_520);
  plVar23 = plStack_518;
  if (plStack_518 != (long *)0x0) {
    plVar49 = plStack_518 + 1;
    do {
      lVar32 = *plVar49;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar20) {
        *plVar49 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_518 + 0x10))(plStack_518);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,0x38,0xff);
  FUN_109d4444c(pppppplVar42,6,4);
  FUN_109d4444c(pppppplVar42,4,2);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  pppppplStack_530 = pppppplVar42;
  plStack_528 = plVar23;
  func_0x000109d47c3c(pppppplVar21,0xc,&pppppplStack_530);
  plVar23 = plStack_528;
  if (plStack_528 != (long *)0x0) {
    plVar49 = plStack_528 + 1;
    do {
      lVar32 = *plVar49;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar20) {
        *plVar49 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_528 + 0x10))(plStack_528);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,0x38,0xff);
  FUN_109d4444c(pppppplVar42,6,4);
  FUN_109d4444c(pppppplVar42,4,2);
  FUN_109d4444c(pppppplVar42,8,2);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  pppppplStack_540 = pppppplVar42;
  plStack_538 = plVar23;
  func_0x000109d47c3c(pppppplVar21,0xc,&pppppplStack_540);
  plVar23 = plStack_538;
  if (plStack_538 != (long *)0x0) {
    plVar49 = plStack_538 + 1;
    do {
      lVar32 = *plVar49;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar20) {
        *plVar49 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_538 + 0x10))(plStack_538);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,2,0xff);
  FUN_109d4444c(pppppplVar42,6,4);
  FUN_109d4444c(pppppplVar42,6,4);
  FUN_109d4444c(pppppplVar42,4,2);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  pppppplStack_550 = pppppplVar42;
  plStack_548 = plVar23;
  func_0x000109d47c3c(pppppplVar21,0xc,&pppppplStack_550);
  plVar23 = plStack_548;
  if (plStack_548 != (long *)0x0) {
    plVar49 = plStack_548 + 1;
    do {
      lVar32 = *plVar49;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar20) {
        *plVar49 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_548 + 0x10))(plStack_548);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,2,0xff);
  FUN_109d4444c(pppppplVar42,6,4);
  FUN_109d4444c(pppppplVar42,6,4);
  FUN_109d4444c(pppppplVar42,4,2);
  FUN_109d4444c(pppppplVar42,8,2);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  pppppplStack_560 = pppppplVar42;
  plStack_558 = plVar23;
  func_0x000109d47c3c(pppppplVar21,0xc,&pppppplStack_560);
  plVar23 = plStack_558;
  if (plStack_558 != (long *)0x0) {
    plVar49 = plStack_558 + 1;
    do {
      lVar32 = *plVar49;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar20) {
        *plVar49 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_558 + 0x10))(plStack_558);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,3,0xff);
  FUN_109d4444c(pppppplVar42,6,4);
  FUN_109d4444c(pppppplVar42,
                0x20 - (int)LZCOUNT((int)((ulong)((long)param_1[10] - (long)param_1[9]) >> 3)),2);
  FUN_109d4444c(pppppplVar42,4,2);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  pppppplStack_570 = pppppplVar42;
  plStack_568 = plVar23;
  func_0x000109d47c3c(pppppplVar21,0xc,&pppppplStack_570);
  plVar23 = plStack_568;
  if (plStack_568 != (long *)0x0) {
    plVar49 = plStack_568 + 1;
    do {
      lVar32 = *plVar49;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar20) {
        *plVar49 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_568 + 0x10))(plStack_568);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,10,0xff);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  pppppplStack_580 = pppppplVar42;
  plStack_578 = plVar23;
  func_0x000109d47c3c(pppppplVar21,0xc,&pppppplStack_580);
  plVar23 = plStack_578;
  if (plStack_578 != (long *)0x0) {
    plVar49 = plStack_578 + 1;
    do {
      lVar32 = *plVar49;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar20) {
        *plVar49 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_578 + 0x10))(plStack_578);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,10,0xff);
  FUN_109d4444c(pppppplVar42,6,4);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  pppppplStack_5c0 = pppppplVar42;
  plStack_5b8 = plVar23;
  func_0x000109d47c3c(pppppplVar21,0xc,&pppppplStack_5c0);
  plVar23 = plStack_5b8;
  if (plStack_5b8 != (long *)0x0) {
    plVar49 = plStack_5b8 + 1;
    do {
      lVar32 = *plVar49;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar20) {
        *plVar49 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_5b8 + 0x10))(plStack_5b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,0xf,0xff);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  pppppplStack_5d0 = pppppplVar42;
  plStack_5c8 = plVar23;
  func_0x000109d47c3c(pppppplVar21,0xc,&pppppplStack_5d0);
  plVar23 = plStack_5c8;
  if (plStack_5c8 != (long *)0x0) {
    plVar49 = plStack_5c8 + 1;
    do {
      lVar32 = *plVar49;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar20) {
        *plVar49 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_5c8 + 0x10))(plStack_5c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar49 = plVar23 + 1;
  *plVar49 = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = (long ******)plVar23;
  FUN_109d4444c(pppppplVar42,0x2b,0xff);
  FUN_109d4444c(pppppplVar42,1,2);
  FUN_109d4444c(pppppplVar42,
                0x20 - (int)LZCOUNT((int)((ulong)((long)param_1[10] - (long)param_1[9]) >> 3)),2);
  FUN_109d4444c(pppppplVar42,0,6);
  FUN_109d4444c(pppppplVar42,6,4);
  pppppplVar21 = *param_1;
  do {
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar20) {
      *plVar49 = *plVar49 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  pppppplStack_5e0 = pppppplVar42;
  plStack_5d8 = plVar23;
  func_0x000109d47c3c(pppppplVar21,0xc,&pppppplStack_5e0);
  plVar23 = plStack_5d8;
  if (plStack_5d8 != (long *)0x0) {
    plVar49 = plStack_5d8 + 1;
    do {
      lVar32 = *plVar49;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar20) {
        *plVar49 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    plVar23 = (long *)(pppppplStack_298 + 1);
    do {
      lVar32 = *plVar23;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar20) {
        *plVar23 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  FUN_109d3b86c(*param_1);
  FUN_109d3b6e4(*param_1,0x11,4);
  pppppplStack_298 = (long ******)0x4000000000;
  pppppplVar21 = param_1[9];
  pppppplVar42 = param_1[10];
  pppppplVar22 = (long ******)0x228;
  ppppppplStack_2a0 = (long *******)&uStack_290;
  __Znwm();
  pppppplVar22[1] = (long *****)0x0;
  pppppplVar22[2] = (long *****)0x0;
  *pppppplVar22 = (long *****)&PTR_FUN_110b40f08;
  pppppplVar22[8] = (long *****)0x0;
  pppppplVar22[7] = (long *****)0x0;
  pppppplVar22[10] = (long *****)0x0;
  pppppplVar22[9] = (long *****)0x0;
  pppppplVar22[0xc] = (long *****)0x0;
  pppppplVar22[0xb] = (long *****)0x0;
  pppppplVar22[0xe] = (long *****)0x0;
  pppppplVar22[0xd] = (long *****)0x0;
  pppppplVar22[0x10] = (long *****)0x0;
  pppppplVar22[0xf] = (long *****)0x0;
  pppppplVar22[0x12] = (long *****)0x0;
  pppppplVar22[0x11] = (long *****)0x0;
  pppppplVar22[0x14] = (long *****)0x0;
  pppppplVar22[0x13] = (long *****)0x0;
  pppppplVar22[0x16] = (long *****)0x0;
  pppppplVar22[0x15] = (long *****)0x0;
  pppppplVar22[0x18] = (long *****)0x0;
  pppppplVar22[0x17] = (long *****)0x0;
  pppppplVar22[0x1a] = (long *****)0x0;
  pppppplVar22[0x19] = (long *****)0x0;
  pppppplVar22[0x1c] = (long *****)0x0;
  pppppplVar22[0x1b] = (long *****)0x0;
  pppppplVar22[0x1e] = (long *****)0x0;
  pppppplVar22[0x1d] = (long *****)0x0;
  pppppplVar22[0x20] = (long *****)0x0;
  pppppplVar22[0x1f] = (long *****)0x0;
  pppppplVar22[6] = (long *****)0x0;
  pppppplVar22[5] = (long *****)0x0;
  pppppplVar22[0x22] = (long *****)0x0;
  pppppplVar22[0x21] = (long *****)0x0;
  pppppplVar22[0x24] = (long *****)0x0;
  pppppplVar22[0x23] = (long *****)0x0;
  pppppplVar22[0x26] = (long *****)0x0;
  pppppplVar22[0x25] = (long *****)0x0;
  pppppplVar22[0x28] = (long *****)0x0;
  pppppplVar22[0x27] = (long *****)0x0;
  pppppplVar22[0x2a] = (long *****)0x0;
  pppppplVar22[0x29] = (long *****)0x0;
  pppppplVar22[0x2c] = (long *****)0x0;
  pppppplVar22[0x2b] = (long *****)0x0;
  pppppplVar22[0x2e] = (long *****)0x0;
  pppppplVar22[0x2d] = (long *****)0x0;
  pppppplVar22[0x30] = (long *****)0x0;
  pppppplVar22[0x2f] = (long *****)0x0;
  pppppplVar22[0x32] = (long *****)0x0;
  pppppplVar22[0x31] = (long *****)0x0;
  pppppplVar22[0x34] = (long *****)0x0;
  pppppplVar22[0x33] = (long *****)0x0;
  pppppplVar22[0x36] = (long *****)0x0;
  pppppplVar22[0x35] = (long *****)0x0;
  pppppplVar22[0x38] = (long *****)0x0;
  pppppplVar22[0x37] = (long *****)0x0;
  pppppplVar22[0x3a] = (long *****)0x0;
  pppppplVar22[0x39] = (long *****)0x0;
  pppppplVar22[0x3c] = (long *****)0x0;
  pppppplVar22[0x3b] = (long *****)0x0;
  pppppplVar22[0x3e] = (long *****)0x0;
  pppppplVar22[0x3d] = (long *****)0x0;
  pppppplVar22[0x40] = (long *****)0x0;
  pppppplVar22[0x3f] = (long *****)0x0;
  pppppplVar22[0x42] = (long *****)0x0;
  pppppplVar22[0x41] = (long *****)0x0;
  pppppplVar22[0x44] = (long *****)0x0;
  pppppplVar22[0x43] = (long *****)0x0;
  pppppplVar47 = pppppplVar22 + 3;
  *pppppplVar47 = (long *****)(pppppplVar22 + 5);
  pppppplVar22[4] = (long *****)0x2000000000;
  ppppppplStack_500 = (long *******)pppppplVar47;
  ppppppplStack_4f8 = (long *******)pppppplVar22;
  FUN_109d4444c(pppppplVar47,8,0xff);
  iVar55 = 0x20 - (int)LZCOUNT((int)((ulong)((long)pppppplVar42 - (long)pppppplVar21) >> 3));
  FUN_109d4444c(pppppplVar47,iVar55,2);
  FUN_109d4444c(pppppplVar47,0,0xff);
  pppppplVar21 = *param_1;
  ppppppplStack_500 = (long *******)0x0;
  ppppppplStack_4f8 = (long *******)0x0;
  ppppppplStack_2c0 = (long *******)pppppplVar47;
  ppppppplStack_2b8 = (long *******)pppppplVar22;
  FUN_109d444b8(pppppplVar21,pppppplVar47);
  FUN_109d4459c(pppppplVar21 + 5,&ppppppplStack_2c0);
  ppppppplVar46 = ppppppplStack_2b8;
  ppppplVar34 = pppppplVar21[5];
  ppppplVar31 = pppppplVar21[6];
  if (ppppppplStack_2b8 != (long *******)0x0) {
    pppppplVar21 = (long ******)(ppppppplStack_2b8 + 1);
    do {
      ppppplVar35 = *pppppplVar21;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
      if (bVar20) {
        *pppppplVar21 = (long *****)((long)ppppplVar35 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar35 == (long *****)0x0) {
      (*(code *)(*ppppppplStack_2b8)[2])(ppppppplStack_2b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
    }
  }
  ppppppplVar24 = (long *******)0x228;
  __Znwm();
  ppppppplVar46 = ppppppplStack_4f8;
  ppppppplVar24[1] = (long ******)0x0;
  ppppppplVar24[2] = (long ******)0x0;
  *ppppppplVar24 = (long ******)&PTR_FUN_110b40f08;
  ppppppplVar24[8] = (long ******)0x0;
  ppppppplVar24[7] = (long ******)0x0;
  ppppppplVar24[10] = (long ******)0x0;
  ppppppplVar24[9] = (long ******)0x0;
  ppppppplVar24[0xc] = (long ******)0x0;
  ppppppplVar24[0xb] = (long ******)0x0;
  ppppppplVar24[0xe] = (long ******)0x0;
  ppppppplVar24[0xd] = (long ******)0x0;
  ppppppplVar24[0x10] = (long ******)0x0;
  ppppppplVar24[0xf] = (long ******)0x0;
  ppppppplVar24[0x12] = (long ******)0x0;
  ppppppplVar24[0x11] = (long ******)0x0;
  ppppppplVar24[0x14] = (long ******)0x0;
  ppppppplVar24[0x13] = (long ******)0x0;
  ppppppplVar24[0x16] = (long ******)0x0;
  ppppppplVar24[0x15] = (long ******)0x0;
  ppppppplVar24[0x18] = (long ******)0x0;
  ppppppplVar24[0x17] = (long ******)0x0;
  ppppppplVar24[0x1a] = (long ******)0x0;
  ppppppplVar24[0x19] = (long ******)0x0;
  ppppppplVar24[0x1c] = (long ******)0x0;
  ppppppplVar24[0x1b] = (long ******)0x0;
  ppppppplVar24[0x1e] = (long ******)0x0;
  ppppppplVar24[0x1d] = (long ******)0x0;
  ppppppplVar24[0x20] = (long ******)0x0;
  ppppppplVar24[0x1f] = (long ******)0x0;
  ppppppplVar24[6] = (long ******)0x0;
  ppppppplVar24[5] = (long ******)0x0;
  ppppppplVar24[0x22] = (long ******)0x0;
  ppppppplVar24[0x21] = (long ******)0x0;
  ppppppplVar24[0x24] = (long ******)0x0;
  ppppppplVar24[0x23] = (long ******)0x0;
  ppppppplVar24[0x26] = (long ******)0x0;
  ppppppplVar24[0x25] = (long ******)0x0;
  ppppppplVar24[0x28] = (long ******)0x0;
  ppppppplVar24[0x27] = (long ******)0x0;
  ppppppplVar24[0x2a] = (long ******)0x0;
  ppppppplVar24[0x29] = (long ******)0x0;
  ppppppplVar24[0x2c] = (long ******)0x0;
  ppppppplVar24[0x2b] = (long ******)0x0;
  ppppppplVar24[0x2e] = (long ******)0x0;
  ppppppplVar24[0x2d] = (long ******)0x0;
  ppppppplVar24[0x30] = (long ******)0x0;
  ppppppplVar24[0x2f] = (long ******)0x0;
  ppppppplVar24[0x32] = (long ******)0x0;
  ppppppplVar24[0x31] = (long ******)0x0;
  ppppppplVar24[0x34] = (long ******)0x0;
  ppppppplVar24[0x33] = (long ******)0x0;
  ppppppplVar24[0x36] = (long ******)0x0;
  ppppppplVar24[0x35] = (long ******)0x0;
  ppppppplVar24[0x38] = (long ******)0x0;
  ppppppplVar24[0x37] = (long ******)0x0;
  ppppppplVar24[0x3a] = (long ******)0x0;
  ppppppplVar24[0x39] = (long ******)0x0;
  ppppppplVar24[0x3c] = (long ******)0x0;
  ppppppplVar24[0x3b] = (long ******)0x0;
  ppppppplVar24[0x3e] = (long ******)0x0;
  ppppppplVar24[0x3d] = (long ******)0x0;
  ppppppplVar24[0x40] = (long ******)0x0;
  ppppppplVar24[0x3f] = (long ******)0x0;
  ppppppplVar24[0x42] = (long ******)0x0;
  ppppppplVar24[0x41] = (long ******)0x0;
  ppppppplVar24[0x44] = (long ******)0x0;
  ppppppplVar24[0x43] = (long ******)0x0;
  ppppppplStack_500 = ppppppplVar24 + 3;
  *ppppppplStack_500 = (long ******)(ppppppplVar24 + 5);
  ppppppplVar24[4] = (long ******)0x2000000000;
  if (ppppppplStack_4f8 != (long *******)0x0) {
    pppppplVar21 = (long ******)(ppppppplStack_4f8 + 1);
    do {
      ppppplVar35 = *pppppplVar21;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
      if (bVar20) {
        *pppppplVar21 = (long *****)((long)ppppplVar35 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar35 == (long *****)0x0) {
      ppppplVar35 = (long *****)*ppppppplStack_4f8;
      ppppppplStack_4f8 = ppppppplVar24;
      (*(code *)ppppplVar35[2])(ppppppplVar46);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
      ppppppplVar24 = ppppppplStack_4f8;
    }
  }
  ppppppplStack_4f8 = ppppppplVar24;
  ppppppplVar46 = ppppppplStack_500;
  FUN_109d4444c(ppppppplStack_500,0x19,0xff);
  FUN_109d4444c(ppppppplVar46,0,0xff);
  pppppplVar21 = *param_1;
  uStack_2e0 = (undefined **)ppppppplVar46;
  ppppppplStack_2d8 = ppppppplStack_4f8;
  ppppppplStack_500 = (long *******)0x0;
  ppppppplStack_4f8 = (long *******)0x0;
  FUN_109d444b8(pppppplVar21,ppppppplVar46);
  FUN_109d4459c(pppppplVar21 + 5,&uStack_2e0);
  ppppppplVar46 = ppppppplStack_2d8;
  ppppplVar35 = pppppplVar21[5];
  ppppplVar38 = pppppplVar21[6];
  if (ppppppplStack_2d8 != (long *******)0x0) {
    ppppppplVar24 = ppppppplStack_2d8 + 1;
    do {
      pppppplVar21 = *ppppppplVar24;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar24,0x10);
      if (bVar20) {
        *ppppppplVar24 = (long ******)((long)pppppplVar21 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (pppppplVar21 == (long ******)0x0) {
      (*(code *)(*ppppppplStack_2d8)[2])(ppppppplStack_2d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
    }
  }
  ppppppplVar24 = (long *******)0x228;
  __Znwm();
  ppppppplVar46 = ppppppplStack_4f8;
  ppppppplVar24[1] = (long ******)0x0;
  ppppppplVar24[2] = (long ******)0x0;
  *ppppppplVar24 = (long ******)&PTR_FUN_110b40f08;
  ppppppplVar24[8] = (long ******)0x0;
  ppppppplVar24[7] = (long ******)0x0;
  ppppppplVar24[10] = (long ******)0x0;
  ppppppplVar24[9] = (long ******)0x0;
  ppppppplVar24[0xc] = (long ******)0x0;
  ppppppplVar24[0xb] = (long ******)0x0;
  ppppppplVar24[0xe] = (long ******)0x0;
  ppppppplVar24[0xd] = (long ******)0x0;
  ppppppplVar24[0x10] = (long ******)0x0;
  ppppppplVar24[0xf] = (long ******)0x0;
  ppppppplVar24[0x12] = (long ******)0x0;
  ppppppplVar24[0x11] = (long ******)0x0;
  ppppppplVar24[0x14] = (long ******)0x0;
  ppppppplVar24[0x13] = (long ******)0x0;
  ppppppplVar24[0x16] = (long ******)0x0;
  ppppppplVar24[0x15] = (long ******)0x0;
  ppppppplVar24[0x18] = (long ******)0x0;
  ppppppplVar24[0x17] = (long ******)0x0;
  ppppppplVar24[0x1a] = (long ******)0x0;
  ppppppplVar24[0x19] = (long ******)0x0;
  ppppppplVar24[0x1c] = (long ******)0x0;
  ppppppplVar24[0x1b] = (long ******)0x0;
  ppppppplVar24[0x1e] = (long ******)0x0;
  ppppppplVar24[0x1d] = (long ******)0x0;
  ppppppplVar24[0x20] = (long ******)0x0;
  ppppppplVar24[0x1f] = (long ******)0x0;
  ppppppplVar24[6] = (long ******)0x0;
  ppppppplVar24[5] = (long ******)0x0;
  ppppppplVar24[0x22] = (long ******)0x0;
  ppppppplVar24[0x21] = (long ******)0x0;
  ppppppplVar24[0x24] = (long ******)0x0;
  ppppppplVar24[0x23] = (long ******)0x0;
  ppppppplVar24[0x26] = (long ******)0x0;
  ppppppplVar24[0x25] = (long ******)0x0;
  ppppppplVar24[0x28] = (long ******)0x0;
  ppppppplVar24[0x27] = (long ******)0x0;
  ppppppplVar24[0x2a] = (long ******)0x0;
  ppppppplVar24[0x29] = (long ******)0x0;
  ppppppplVar24[0x2c] = (long ******)0x0;
  ppppppplVar24[0x2b] = (long ******)0x0;
  ppppppplVar24[0x2e] = (long ******)0x0;
  ppppppplVar24[0x2d] = (long ******)0x0;
  ppppppplVar24[0x30] = (long ******)0x0;
  ppppppplVar24[0x2f] = (long ******)0x0;
  ppppppplVar24[0x32] = (long ******)0x0;
  ppppppplVar24[0x31] = (long ******)0x0;
  ppppppplVar24[0x34] = (long ******)0x0;
  ppppppplVar24[0x33] = (long ******)0x0;
  ppppppplVar24[0x36] = (long ******)0x0;
  ppppppplVar24[0x35] = (long ******)0x0;
  ppppppplVar24[0x38] = (long ******)0x0;
  ppppppplVar24[0x37] = (long ******)0x0;
  ppppppplVar24[0x3a] = (long ******)0x0;
  ppppppplVar24[0x39] = (long ******)0x0;
  ppppppplVar24[0x3c] = (long ******)0x0;
  ppppppplVar24[0x3b] = (long ******)0x0;
  ppppppplVar24[0x3e] = (long ******)0x0;
  ppppppplVar24[0x3d] = (long ******)0x0;
  ppppppplVar24[0x40] = (long ******)0x0;
  ppppppplVar24[0x3f] = (long ******)0x0;
  ppppppplVar24[0x42] = (long ******)0x0;
  ppppppplVar24[0x41] = (long ******)0x0;
  ppppppplVar24[0x44] = (long ******)0x0;
  ppppppplVar24[0x43] = (long ******)0x0;
  ppppppplStack_500 = ppppppplVar24 + 3;
  *ppppppplStack_500 = (long ******)(ppppppplVar24 + 5);
  ppppppplVar24[4] = (long ******)0x2000000000;
  if (ppppppplStack_4f8 != (long *******)0x0) {
    pppppplVar21 = (long ******)(ppppppplStack_4f8 + 1);
    do {
      ppppplVar36 = *pppppplVar21;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
      if (bVar20) {
        *pppppplVar21 = (long *****)((long)ppppplVar36 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar36 == (long *****)0x0) {
      ppppplVar36 = (long *****)*ppppppplStack_4f8;
      ppppppplStack_4f8 = ppppppplVar24;
      (*(code *)ppppplVar36[2])(ppppppplVar46);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
      ppppppplVar24 = ppppppplStack_4f8;
    }
  }
  ppppppplStack_4f8 = ppppppplVar24;
  ppppppplVar46 = ppppppplStack_500;
  FUN_109d4444c(ppppppplStack_500,0x15,0xff);
  FUN_109d4444c(ppppppplVar46,1,2);
  FUN_109d4444c(ppppppplVar46,0,6);
  FUN_109d4444c(ppppppplVar46,iVar55,2);
  pppppplVar42 = *param_1;
  ppppppplStack_598 = ppppppplVar46;
  pppppplStack_590 = (long ******)ppppppplStack_4f8;
  ppppppplStack_500 = (long *******)0x0;
  ppppppplStack_4f8 = (long *******)0x0;
  FUN_109d444b8(pppppplVar42,ppppppplVar46);
  FUN_109d4459c(pppppplVar42 + 5,&ppppppplStack_598);
  pppppplVar21 = pppppplStack_590;
  ppppppplVar46 = (long *******)pppppplVar42[5];
  ppppppplStack_608 = (long *******)pppppplVar42[6];
  if (pppppplStack_590 != (long ******)0x0) {
    pppppplVar42 = pppppplStack_590 + 1;
    do {
      ppppplVar36 = *pppppplVar42;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
      if (bVar20) {
        *pppppplVar42 = (long *****)((long)ppppplVar36 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar36 == (long *****)0x0) {
      (*(code *)(*pppppplStack_590)[2])(pppppplStack_590);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  ppppppplVar25 = (long *******)0x228;
  __Znwm();
  ppppppplVar24 = ppppppplStack_4f8;
  ppppppplVar25[1] = (long ******)0x0;
  ppppppplVar25[2] = (long ******)0x0;
  *ppppppplVar25 = (long ******)&PTR_FUN_110b40f08;
  ppppppplVar25[8] = (long ******)0x0;
  ppppppplVar25[7] = (long ******)0x0;
  ppppppplVar25[10] = (long ******)0x0;
  ppppppplVar25[9] = (long ******)0x0;
  ppppppplVar25[0xc] = (long ******)0x0;
  ppppppplVar25[0xb] = (long ******)0x0;
  ppppppplVar25[0xe] = (long ******)0x0;
  ppppppplVar25[0xd] = (long ******)0x0;
  ppppppplVar25[0x10] = (long ******)0x0;
  ppppppplVar25[0xf] = (long ******)0x0;
  ppppppplVar25[0x12] = (long ******)0x0;
  ppppppplVar25[0x11] = (long ******)0x0;
  ppppppplVar25[0x14] = (long ******)0x0;
  ppppppplVar25[0x13] = (long ******)0x0;
  ppppppplVar25[0x16] = (long ******)0x0;
  ppppppplVar25[0x15] = (long ******)0x0;
  ppppppplVar25[0x18] = (long ******)0x0;
  ppppppplVar25[0x17] = (long ******)0x0;
  ppppppplVar25[0x1a] = (long ******)0x0;
  ppppppplVar25[0x19] = (long ******)0x0;
  ppppppplVar25[0x1c] = (long ******)0x0;
  ppppppplVar25[0x1b] = (long ******)0x0;
  ppppppplVar25[0x1e] = (long ******)0x0;
  ppppppplVar25[0x1d] = (long ******)0x0;
  ppppppplVar25[0x20] = (long ******)0x0;
  ppppppplVar25[0x1f] = (long ******)0x0;
  ppppppplVar25[6] = (long ******)0x0;
  ppppppplVar25[5] = (long ******)0x0;
  ppppppplVar25[0x22] = (long ******)0x0;
  ppppppplVar25[0x21] = (long ******)0x0;
  ppppppplVar25[0x24] = (long ******)0x0;
  ppppppplVar25[0x23] = (long ******)0x0;
  ppppppplVar25[0x26] = (long ******)0x0;
  ppppppplVar25[0x25] = (long ******)0x0;
  ppppppplVar25[0x28] = (long ******)0x0;
  ppppppplVar25[0x27] = (long ******)0x0;
  ppppppplVar25[0x2a] = (long ******)0x0;
  ppppppplVar25[0x29] = (long ******)0x0;
  ppppppplVar25[0x2c] = (long ******)0x0;
  ppppppplVar25[0x2b] = (long ******)0x0;
  ppppppplVar25[0x2e] = (long ******)0x0;
  ppppppplVar25[0x2d] = (long ******)0x0;
  ppppppplVar25[0x30] = (long ******)0x0;
  ppppppplVar25[0x2f] = (long ******)0x0;
  ppppppplVar25[0x32] = (long ******)0x0;
  ppppppplVar25[0x31] = (long ******)0x0;
  ppppppplVar25[0x34] = (long ******)0x0;
  ppppppplVar25[0x33] = (long ******)0x0;
  ppppppplVar25[0x36] = (long ******)0x0;
  ppppppplVar25[0x35] = (long ******)0x0;
  ppppppplVar25[0x38] = (long ******)0x0;
  ppppppplVar25[0x37] = (long ******)0x0;
  ppppppplVar25[0x3a] = (long ******)0x0;
  ppppppplVar25[0x39] = (long ******)0x0;
  ppppppplVar25[0x3c] = (long ******)0x0;
  ppppppplVar25[0x3b] = (long ******)0x0;
  ppppppplVar25[0x3e] = (long ******)0x0;
  ppppppplVar25[0x3d] = (long ******)0x0;
  ppppppplVar25[0x40] = (long ******)0x0;
  ppppppplVar25[0x3f] = (long ******)0x0;
  ppppppplVar25[0x42] = (long ******)0x0;
  ppppppplVar25[0x41] = (long ******)0x0;
  ppppppplVar25[0x44] = (long ******)0x0;
  ppppppplVar25[0x43] = (long ******)0x0;
  ppppppplStack_500 = ppppppplVar25 + 3;
  *ppppppplStack_500 = (long ******)(ppppppplVar25 + 5);
  ppppppplVar25[4] = (long ******)0x2000000000;
  if (ppppppplStack_4f8 != (long *******)0x0) {
    pppppplVar21 = (long ******)(ppppppplStack_4f8 + 1);
    do {
      ppppplVar36 = *pppppplVar21;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
      if (bVar20) {
        *pppppplVar21 = (long *****)((long)ppppplVar36 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar36 == (long *****)0x0) {
      ppppplVar36 = (long *****)*ppppppplStack_4f8;
      ppppppplStack_4f8 = ppppppplVar25;
      (*(code *)ppppplVar36[2])(ppppppplVar24);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar24);
      ppppppplVar25 = ppppppplStack_4f8;
    }
  }
  ppppppplStack_4f8 = ppppppplVar25;
  ppppppplVar24 = ppppppplStack_500;
  FUN_109d4444c(ppppppplStack_500,0x12,0xff);
  FUN_109d4444c(ppppppplVar24,1,2);
  FUN_109d4444c(ppppppplVar24,0,6);
  ppppppplStack_610 = ppppppplVar46;
  FUN_109d4444c(ppppppplVar24,iVar55,2);
  pppppplVar22 = *param_1;
  ppppppplStack_5b0 = ppppppplVar24;
  pppppplStack_5a8 = (long ******)ppppppplStack_4f8;
  ppppppplStack_500 = (long *******)0x0;
  ppppppplStack_4f8 = (long *******)0x0;
  FUN_109d444b8(pppppplVar22,ppppppplVar24);
  FUN_109d4459c(pppppplVar22 + 5,&ppppppplStack_5b0);
  pppppplVar42 = pppppplStack_5a8;
  pppppplVar21 = (long ******)pppppplVar22[5];
  pppppplStack_618 = (long ******)pppppplVar22[6];
  if (pppppplStack_5a8 != (long ******)0x0) {
    pppppplVar22 = pppppplStack_5a8 + 1;
    do {
      ppppplVar36 = *pppppplVar22;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar22,0x10);
      if (bVar20) {
        *pppppplVar22 = (long *****)((long)ppppplVar36 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar36 == (long *****)0x0) {
      (*(code *)(*pppppplStack_5a8)[2])(pppppplStack_5a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar42);
    }
  }
  ppppppplVar24 = (long *******)0x228;
  __Znwm();
  ppppppplVar46 = ppppppplStack_4f8;
  ppppppplVar24[1] = (long ******)0x0;
  ppppppplVar24[2] = (long ******)0x0;
  *ppppppplVar24 = (long ******)&PTR_FUN_110b40f08;
  ppppppplVar24[8] = (long ******)0x0;
  ppppppplVar24[7] = (long ******)0x0;
  ppppppplVar24[10] = (long ******)0x0;
  ppppppplVar24[9] = (long ******)0x0;
  ppppppplVar24[0xc] = (long ******)0x0;
  ppppppplVar24[0xb] = (long ******)0x0;
  ppppppplVar24[0xe] = (long ******)0x0;
  ppppppplVar24[0xd] = (long ******)0x0;
  ppppppplVar24[0x10] = (long ******)0x0;
  ppppppplVar24[0xf] = (long ******)0x0;
  ppppppplVar24[0x12] = (long ******)0x0;
  ppppppplVar24[0x11] = (long ******)0x0;
  ppppppplVar24[0x14] = (long ******)0x0;
  ppppppplVar24[0x13] = (long ******)0x0;
  ppppppplVar24[0x16] = (long ******)0x0;
  ppppppplVar24[0x15] = (long ******)0x0;
  ppppppplVar24[0x18] = (long ******)0x0;
  ppppppplVar24[0x17] = (long ******)0x0;
  ppppppplVar24[0x1a] = (long ******)0x0;
  ppppppplVar24[0x19] = (long ******)0x0;
  ppppppplVar24[0x1c] = (long ******)0x0;
  ppppppplVar24[0x1b] = (long ******)0x0;
  ppppppplVar24[0x1e] = (long ******)0x0;
  ppppppplVar24[0x1d] = (long ******)0x0;
  ppppppplVar24[0x20] = (long ******)0x0;
  ppppppplVar24[0x1f] = (long ******)0x0;
  ppppppplVar24[6] = (long ******)0x0;
  ppppppplVar24[5] = (long ******)0x0;
  ppppppplVar24[0x22] = (long ******)0x0;
  ppppppplVar24[0x21] = (long ******)0x0;
  ppppppplVar24[0x24] = (long ******)0x0;
  ppppppplVar24[0x23] = (long ******)0x0;
  ppppppplVar24[0x26] = (long ******)0x0;
  ppppppplVar24[0x25] = (long ******)0x0;
  ppppppplVar24[0x28] = (long ******)0x0;
  ppppppplVar24[0x27] = (long ******)0x0;
  ppppppplVar24[0x2a] = (long ******)0x0;
  ppppppplVar24[0x29] = (long ******)0x0;
  ppppppplVar24[0x2c] = (long ******)0x0;
  ppppppplVar24[0x2b] = (long ******)0x0;
  ppppppplVar24[0x2e] = (long ******)0x0;
  ppppppplVar24[0x2d] = (long ******)0x0;
  ppppppplVar24[0x30] = (long ******)0x0;
  ppppppplVar24[0x2f] = (long ******)0x0;
  ppppppplVar24[0x32] = (long ******)0x0;
  ppppppplVar24[0x31] = (long ******)0x0;
  ppppppplVar24[0x34] = (long ******)0x0;
  ppppppplVar24[0x33] = (long ******)0x0;
  ppppppplVar24[0x36] = (long ******)0x0;
  ppppppplVar24[0x35] = (long ******)0x0;
  ppppppplVar24[0x38] = (long ******)0x0;
  ppppppplVar24[0x37] = (long ******)0x0;
  ppppppplVar24[0x3a] = (long ******)0x0;
  ppppppplVar24[0x39] = (long ******)0x0;
  ppppppplVar24[0x3c] = (long ******)0x0;
  ppppppplVar24[0x3b] = (long ******)0x0;
  ppppppplVar24[0x3e] = (long ******)0x0;
  ppppppplVar24[0x3d] = (long ******)0x0;
  ppppppplVar24[0x40] = (long ******)0x0;
  ppppppplVar24[0x3f] = (long ******)0x0;
  ppppppplVar24[0x42] = (long ******)0x0;
  ppppppplVar24[0x41] = (long ******)0x0;
  ppppppplVar24[0x44] = (long ******)0x0;
  ppppppplVar24[0x43] = (long ******)0x0;
  ppppppplStack_500 = ppppppplVar24 + 3;
  *ppppppplStack_500 = (long ******)(ppppppplVar24 + 5);
  ppppppplVar24[4] = (long ******)0x2000000000;
  if (ppppppplStack_4f8 != (long *******)0x0) {
    pppppplVar42 = (long ******)(ppppppplStack_4f8 + 1);
    do {
      ppppplVar36 = *pppppplVar42;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
      if (bVar20) {
        *pppppplVar42 = (long *****)((long)ppppplVar36 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar36 == (long *****)0x0) {
      ppppplVar36 = (long *****)*ppppppplStack_4f8;
      ppppppplStack_4f8 = ppppppplVar24;
      (*(code *)ppppplVar36[2])(ppppppplVar46);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
      ppppppplVar24 = ppppppplStack_4f8;
    }
  }
  ppppppplStack_4f8 = ppppppplVar24;
  ppppppplVar46 = ppppppplStack_500;
  FUN_109d4444c(ppppppplStack_500,0x13,0xff);
  FUN_109d4444c(ppppppplVar46,0,6);
  pppppplStack_620 = pppppplVar21;
  FUN_109d4444c(ppppppplVar46,0,8);
  pppppplVar42 = *param_1;
  pppppplStack_5f8 = (long ******)ppppppplVar46;
  pppppplStack_5f0 = (long ******)ppppppplStack_4f8;
  ppppppplStack_500 = (long *******)0x0;
  ppppppplStack_4f8 = (long *******)0x0;
  FUN_109d444b8(pppppplVar42,ppppppplVar46);
  FUN_109d4459c(pppppplVar42 + 5,&pppppplStack_5f8);
  pppppplVar21 = pppppplStack_5f0;
  ppppplVar36 = pppppplVar42[5];
  pppppplStack_628 = (long ******)pppppplVar42[6];
  if (pppppplStack_5f0 != (long ******)0x0) {
    pppppplVar42 = pppppplStack_5f0 + 1;
    do {
      ppppplVar37 = *pppppplVar42;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
      if (bVar20) {
        *pppppplVar42 = (long *****)((long)ppppplVar37 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar37 == (long *****)0x0) {
      (*(code *)(*pppppplStack_5f0)[2])(pppppplStack_5f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  ppppppplVar24 = (long *******)0x228;
  __Znwm();
  ppppppplVar46 = ppppppplStack_4f8;
  ppppppplVar24[1] = (long ******)0x0;
  ppppppplVar24[2] = (long ******)0x0;
  *ppppppplVar24 = (long ******)&PTR_FUN_110b40f08;
  ppppppplVar24[8] = (long ******)0x0;
  ppppppplVar24[7] = (long ******)0x0;
  ppppppplVar24[10] = (long ******)0x0;
  ppppppplVar24[9] = (long ******)0x0;
  ppppppplVar24[0xc] = (long ******)0x0;
  ppppppplVar24[0xb] = (long ******)0x0;
  ppppppplVar24[0xe] = (long ******)0x0;
  ppppppplVar24[0xd] = (long ******)0x0;
  ppppppplVar24[0x10] = (long ******)0x0;
  ppppppplVar24[0xf] = (long ******)0x0;
  ppppppplVar24[0x12] = (long ******)0x0;
  ppppppplVar24[0x11] = (long ******)0x0;
  ppppppplVar24[0x14] = (long ******)0x0;
  ppppppplVar24[0x13] = (long ******)0x0;
  ppppppplVar24[0x16] = (long ******)0x0;
  ppppppplVar24[0x15] = (long ******)0x0;
  ppppppplVar24[0x18] = (long ******)0x0;
  ppppppplVar24[0x17] = (long ******)0x0;
  ppppppplVar24[0x1a] = (long ******)0x0;
  ppppppplVar24[0x19] = (long ******)0x0;
  ppppppplVar24[0x1c] = (long ******)0x0;
  ppppppplVar24[0x1b] = (long ******)0x0;
  ppppppplVar24[0x1e] = (long ******)0x0;
  ppppppplVar24[0x1d] = (long ******)0x0;
  ppppppplVar24[0x20] = (long ******)0x0;
  ppppppplVar24[0x1f] = (long ******)0x0;
  ppppppplVar24[6] = (long ******)0x0;
  ppppppplVar24[5] = (long ******)0x0;
  ppppppplVar24[0x22] = (long ******)0x0;
  ppppppplVar24[0x21] = (long ******)0x0;
  ppppppplVar24[0x24] = (long ******)0x0;
  ppppppplVar24[0x23] = (long ******)0x0;
  ppppppplVar24[0x26] = (long ******)0x0;
  ppppppplVar24[0x25] = (long ******)0x0;
  ppppppplVar24[0x28] = (long ******)0x0;
  ppppppplVar24[0x27] = (long ******)0x0;
  ppppppplVar24[0x2a] = (long ******)0x0;
  ppppppplVar24[0x29] = (long ******)0x0;
  ppppppplVar24[0x2c] = (long ******)0x0;
  ppppppplVar24[0x2b] = (long ******)0x0;
  ppppppplVar24[0x2e] = (long ******)0x0;
  ppppppplVar24[0x2d] = (long ******)0x0;
  ppppppplVar24[0x30] = (long ******)0x0;
  ppppppplVar24[0x2f] = (long ******)0x0;
  ppppppplVar24[0x32] = (long ******)0x0;
  ppppppplVar24[0x31] = (long ******)0x0;
  ppppppplVar24[0x34] = (long ******)0x0;
  ppppppplVar24[0x33] = (long ******)0x0;
  ppppppplVar24[0x36] = (long ******)0x0;
  ppppppplVar24[0x35] = (long ******)0x0;
  ppppppplVar24[0x38] = (long ******)0x0;
  ppppppplVar24[0x37] = (long ******)0x0;
  ppppppplVar24[0x3a] = (long ******)0x0;
  ppppppplVar24[0x39] = (long ******)0x0;
  ppppppplVar24[0x3c] = (long ******)0x0;
  ppppppplVar24[0x3b] = (long ******)0x0;
  ppppppplVar24[0x3e] = (long ******)0x0;
  ppppppplVar24[0x3d] = (long ******)0x0;
  ppppppplVar24[0x40] = (long ******)0x0;
  ppppppplVar24[0x3f] = (long ******)0x0;
  ppppppplVar24[0x42] = (long ******)0x0;
  ppppppplVar24[0x41] = (long ******)0x0;
  ppppppplVar24[0x44] = (long ******)0x0;
  ppppppplVar24[0x43] = (long ******)0x0;
  ppppppplStack_500 = ppppppplVar24 + 3;
  *ppppppplStack_500 = (long ******)(ppppppplVar24 + 5);
  ppppppplVar24[4] = (long ******)0x2000000000;
  if (ppppppplStack_4f8 != (long *******)0x0) {
    pppppplVar21 = (long ******)(ppppppplStack_4f8 + 1);
    do {
      ppppplVar37 = *pppppplVar21;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
      if (bVar20) {
        *pppppplVar21 = (long *****)((long)ppppplVar37 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar37 == (long *****)0x0) {
      ppppplVar37 = (long *****)*ppppppplStack_4f8;
      ppppppplStack_4f8 = ppppppplVar24;
      (*(code *)ppppplVar37[2])(ppppppplVar46);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
      ppppppplVar24 = ppppppplStack_4f8;
    }
  }
  ppppppplStack_4f8 = ppppppplVar24;
  ppppppplVar46 = ppppppplStack_500;
  FUN_109d4444c(ppppppplStack_500,0x14,0xff);
  FUN_109d4444c(ppppppplVar46,1,2);
  FUN_109d4444c(ppppppplVar46,0,6);
  ppppplStack_630 = ppppplVar36;
  FUN_109d4444c(ppppppplVar46,iVar55,2);
  pppppplVar22 = *param_1;
  pppppplStack_2f0 = (long ******)ppppppplVar46;
  pppppplStack_2e8 = (long ******)ppppppplStack_4f8;
  ppppppplStack_500 = (long *******)0x0;
  ppppppplStack_4f8 = (long *******)0x0;
  ppppplStack_640 = ppppplVar35;
  ppppplStack_638 = ppppplVar38;
  FUN_109d444b8(pppppplVar22,ppppppplVar46);
  FUN_109d4459c(pppppplVar22 + 5,&pppppplStack_2f0);
  pppppplVar42 = pppppplStack_2e8;
  pppppplVar21 = (long ******)pppppplVar22[5];
  ppppplVar35 = pppppplVar22[6];
  if (pppppplStack_2e8 != (long ******)0x0) {
    pppppplVar22 = pppppplStack_2e8 + 1;
    do {
      ppppplVar38 = *pppppplVar22;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar22,0x10);
      if (bVar20) {
        *pppppplVar22 = (long *****)((long)ppppplVar38 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar38 == (long *****)0x0) {
      (*(code *)(*pppppplStack_2e8)[2])(pppppplStack_2e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar42);
    }
  }
  ppppppplVar24 = (long *******)0x228;
  __Znwm();
  ppppppplVar46 = ppppppplStack_4f8;
  ppppppplVar24[1] = (long ******)0x0;
  ppppppplVar24[2] = (long ******)0x0;
  *ppppppplVar24 = (long ******)&PTR_FUN_110b40f08;
  ppppppplVar24[8] = (long ******)0x0;
  ppppppplVar24[7] = (long ******)0x0;
  ppppppplVar24[10] = (long ******)0x0;
  ppppppplVar24[9] = (long ******)0x0;
  ppppppplVar24[0xc] = (long ******)0x0;
  ppppppplVar24[0xb] = (long ******)0x0;
  ppppppplVar24[0xe] = (long ******)0x0;
  ppppppplVar24[0xd] = (long ******)0x0;
  ppppppplVar24[0x10] = (long ******)0x0;
  ppppppplVar24[0xf] = (long ******)0x0;
  ppppppplVar24[0x12] = (long ******)0x0;
  ppppppplVar24[0x11] = (long ******)0x0;
  ppppppplVar24[0x14] = (long ******)0x0;
  ppppppplVar24[0x13] = (long ******)0x0;
  ppppppplVar24[0x16] = (long ******)0x0;
  ppppppplVar24[0x15] = (long ******)0x0;
  ppppppplVar24[0x18] = (long ******)0x0;
  ppppppplVar24[0x17] = (long ******)0x0;
  ppppppplVar24[0x1a] = (long ******)0x0;
  ppppppplVar24[0x19] = (long ******)0x0;
  ppppppplVar24[0x1c] = (long ******)0x0;
  ppppppplVar24[0x1b] = (long ******)0x0;
  ppppppplVar24[0x1e] = (long ******)0x0;
  ppppppplVar24[0x1d] = (long ******)0x0;
  ppppppplVar24[0x20] = (long ******)0x0;
  ppppppplVar24[0x1f] = (long ******)0x0;
  ppppppplVar24[6] = (long ******)0x0;
  ppppppplVar24[5] = (long ******)0x0;
  ppppppplVar24[0x22] = (long ******)0x0;
  ppppppplVar24[0x21] = (long ******)0x0;
  ppppppplVar24[0x24] = (long ******)0x0;
  ppppppplVar24[0x23] = (long ******)0x0;
  ppppppplVar24[0x26] = (long ******)0x0;
  ppppppplVar24[0x25] = (long ******)0x0;
  ppppppplVar24[0x28] = (long ******)0x0;
  ppppppplVar24[0x27] = (long ******)0x0;
  ppppppplVar24[0x2a] = (long ******)0x0;
  ppppppplVar24[0x29] = (long ******)0x0;
  ppppppplVar24[0x2c] = (long ******)0x0;
  ppppppplVar24[0x2b] = (long ******)0x0;
  ppppppplVar24[0x2e] = (long ******)0x0;
  ppppppplVar24[0x2d] = (long ******)0x0;
  ppppppplVar24[0x30] = (long ******)0x0;
  ppppppplVar24[0x2f] = (long ******)0x0;
  ppppppplVar24[0x32] = (long ******)0x0;
  ppppppplVar24[0x31] = (long ******)0x0;
  ppppppplVar24[0x34] = (long ******)0x0;
  ppppppplVar24[0x33] = (long ******)0x0;
  ppppppplVar24[0x36] = (long ******)0x0;
  ppppppplVar24[0x35] = (long ******)0x0;
  ppppppplVar24[0x38] = (long ******)0x0;
  ppppppplVar24[0x37] = (long ******)0x0;
  ppppppplVar24[0x3a] = (long ******)0x0;
  ppppppplVar24[0x39] = (long ******)0x0;
  ppppppplVar24[0x3c] = (long ******)0x0;
  ppppppplVar24[0x3b] = (long ******)0x0;
  ppppppplVar24[0x3e] = (long ******)0x0;
  ppppppplVar24[0x3d] = (long ******)0x0;
  ppppppplVar24[0x40] = (long ******)0x0;
  ppppppplVar24[0x3f] = (long ******)0x0;
  ppppppplVar24[0x42] = (long ******)0x0;
  ppppppplVar24[0x41] = (long ******)0x0;
  ppppppplVar24[0x44] = (long ******)0x0;
  ppppppplVar24[0x43] = (long ******)0x0;
  ppppppplStack_500 = ppppppplVar24 + 3;
  *ppppppplStack_500 = (long ******)(ppppppplVar24 + 5);
  ppppppplVar24[4] = (long ******)0x2000000000;
  if (ppppppplStack_4f8 != (long *******)0x0) {
    pppppplVar42 = (long ******)(ppppppplStack_4f8 + 1);
    do {
      ppppplVar38 = *pppppplVar42;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
      if (bVar20) {
        *pppppplVar42 = (long *****)((long)ppppplVar38 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar38 == (long *****)0x0) {
      ppppplVar38 = (long *****)*ppppppplStack_4f8;
      ppppppplStack_4f8 = ppppppplVar24;
      (*(code *)ppppplVar38[2])(ppppppplVar46);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
      ppppppplVar24 = ppppppplStack_4f8;
    }
  }
  ppppppplStack_4f8 = ppppppplVar24;
  ppppppplVar46 = ppppppplStack_500;
  FUN_109d4444c(ppppppplStack_500,0xb,0xff);
  FUN_109d4444c(ppppppplVar46,8,4);
  FUN_109d4444c(ppppppplVar46,iVar55,2);
  pppppplVar22 = *param_1;
  pppppplStack_510 = (long ******)ppppppplVar46;
  pppppplStack_508 = (long ******)ppppppplStack_4f8;
  ppppppplStack_500 = (long *******)0x0;
  ppppppplStack_4f8 = (long *******)0x0;
  FUN_109d444b8(pppppplVar22,ppppppplVar46);
  FUN_109d4459c(pppppplVar22 + 5,&pppppplStack_510);
  pppppplVar42 = pppppplStack_508;
  ppppplVar38 = pppppplVar22[5];
  ppppplVar36 = pppppplVar22[6];
  if (pppppplStack_508 != (long ******)0x0) {
    pppppplVar22 = pppppplStack_508 + 1;
    do {
      ppppplVar37 = *pppppplVar22;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar22,0x10);
      if (bVar20) {
        *pppppplVar22 = (long *****)((long)ppppplVar37 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar37 == (long *****)0x0) {
      (*(code *)(*pppppplStack_508)[2])(pppppplStack_508);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar42);
    }
  }
  pppppplStack_600 = (long ******)&uStack_290;
  FUN_109d38988(&ppppppplStack_2a0,(long)param_1[10] - (long)param_1[9] >> 3);
  FUN_109d481c4(*param_1,1,&ppppppplStack_2a0,0);
  pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
  pppppplVar42 = param_1[9];
  pppppplVar22 = param_1[10];
  if (pppppplVar42 != pppppplVar22) {
    uVar41 = (long)pppppplStack_628 - (long)ppppplStack_630;
    ppppppplStack_608 =
         (long *******)
         CONCAT44(ppppppplStack_608._4_4_,
                  (int)((ulong)((long)ppppppplStack_608 - (long)ppppppplStack_610) >> 4) + 3);
    pppppplStack_618 =
         (long ******)
         CONCAT44(pppppplStack_618._4_4_,
                  (int)((ulong)((long)pppppplStack_618 - (long)pppppplStack_620) >> 4) + 3);
    ppppppplStack_610 =
         (long *******)
         CONCAT44(ppppppplStack_610._4_4_,
                  (int)((ulong)((long)ppppplVar31 - (long)ppppplVar34) >> 4) + 3);
    pppppplStack_628 =
         (long ******)
         CONCAT44(pppppplStack_628._4_4_,
                  (int)((ulong)((long)ppppplStack_638 - (long)ppppplStack_640) >> 4) + 3);
    pppppplStack_620 =
         (long ******)
         CONCAT44(pppppplStack_620._4_4_,
                  (int)((ulong)((long)ppppplVar35 - (long)pppppplVar21) >> 4) + 3);
    do {
      uVar30 = 0;
      ppppplVar34 = *pppppplVar42;
      uVar50 = *(uint *)(ppppplVar34 + 1);
      pppppplVar21 = (long ******)(ulong)uVar50;
      iVar55 = (int)(uVar41 >> 4);
      uVar51 = 0;
      switch((ulong)pppppplVar21 & 0xff) {
      case 0:
        uVar51 = 0;
        uVar30 = 10;
        break;
      case 1:
        uVar51 = 0;
        uVar30 = 0x17;
        break;
      case 2:
        uVar51 = 0;
        uVar30 = 3;
        break;
      case 3:
        uVar51 = 0;
        uVar30 = 4;
        break;
      case 4:
        uVar51 = 0;
        uVar30 = 0xd;
        break;
      case 5:
        uVar51 = 0;
        uVar30 = 0xe;
        break;
      case 6:
        uVar51 = 0;
        uVar30 = 0xf;
        break;
      case 7:
        uVar51 = 0;
        uVar30 = 2;
        break;
      case 8:
        uVar51 = 0;
        uVar30 = 5;
        break;
      case 9:
        uVar51 = 0;
        uVar30 = 0x10;
        break;
      case 10:
        uVar51 = 0;
        uVar30 = 0x11;
        break;
      case 0xb:
        uVar51 = 0;
        uVar30 = 0x18;
        break;
      case 0xc:
        uVar51 = 0;
        uVar30 = 0x16;
        break;
      case 0xd:
        FUN_109d38988(&ppppppplStack_2a0,uVar50 >> 8);
        uVar51 = 0;
        uVar30 = 7;
        break;
      case 0xe:
        FUN_109d38988(&ppppppplStack_2a0,0xff < uVar50);
        ppppppplVar46 = param_1 + 6;
        FUN_109d48288(ppppppplVar46,*ppppplVar34[2]);
        FUN_109d38988(&ppppppplStack_2a0,*(int *)(ppppppplVar46 + 1) + -1);
        iVar55 = *(int *)((long)ppppplVar34 + 0xc);
        for (uVar39 = 1; uVar39 - (iVar55 - 1) != 1; uVar39 = uVar39 + 1) {
          ppppppplVar46 = param_1 + 6;
          FUN_109d48288(ppppppplVar46,ppppplVar34[2][uVar39 & 0xffffffff]);
          FUN_109d38988(&ppppppplStack_2a0,*(int *)(ppppppplVar46 + 1) + -1);
        }
        uVar30 = 0x15;
        uVar51 = (uint)ppppppplStack_608;
        break;
      case 0xf:
        if (ppppplVar34[3] == (long ****)0x0) {
          FUN_109d38988(&ppppppplStack_2a0,uVar50 >> 8);
          uVar51 = (uint)pppppplStack_628;
          if (0xff < uVar50) {
            uVar51 = 0;
          }
          uVar30 = 0x19;
        }
        else {
          ppppppplVar46 = param_1 + 6;
          FUN_109d48288(ppppppplVar46,*ppppplVar34[2]);
          FUN_109d38988(&ppppppplStack_2a0,*(int *)(ppppppplVar46 + 1) + -1);
          FUN_109d38988(&ppppppplStack_2a0,uVar50 >> 8);
          uVar51 = (uint)ppppppplStack_610;
          if (0xff < uVar50) {
            uVar51 = 0;
          }
          uVar30 = 8;
        }
        break;
      case 0x10:
        FUN_109d38988(&ppppppplStack_2a0,uVar50 >> 9 & 1);
        if (*(uint *)((long)ppppplVar34 + 0xc) != 0) {
          lVar32 = (ulong)*(uint *)((long)ppppplVar34 + 0xc) << 3;
          pppplVar26 = ppppplVar34[2];
          do {
            ppppppplVar46 = param_1 + 6;
            FUN_109d48288(ppppppplVar46,*pppplVar26);
            FUN_109d38988(&ppppppplStack_2a0,*(int *)(ppppppplVar46 + 1) + -1);
            lVar32 = lVar32 + -8;
            pppplVar26 = pppplVar26 + 1;
          } while (lVar32 != 0);
        }
        uVar51 = *(uint *)(ppppplVar34 + 1);
        if ((uVar51 >> 10 & 1) == 0) {
          uVar30 = 6;
          if ((uVar51 & 0x100) != 0) {
            uVar30 = 0x14;
          }
          uVar51 = (uint)pppppplStack_620 & (int)(uVar51 << 0x17) >> 0x1f;
          pppplVar26 = ppppplVar34[3];
          if ((pppplVar26 != (long ****)0x0) && (*pppplVar26 != (long ***)0x0)) {
            FUN_109d4714c(*param_1,0x13,pppplVar26 + 2,*pppplVar26,iVar55 + 3);
          }
        }
        else {
          uVar30 = 0x12;
          uVar51 = (uint)pppppplStack_618;
        }
        break;
      case 0x11:
        FUN_109d38988(&ppppppplStack_2a0,ppppplVar34[4]);
        ppppppplVar46 = param_1 + 6;
        FUN_109d48288(ppppppplVar46,ppppplVar34[3]);
        FUN_109d38988(&ppppppplStack_2a0,*(int *)(ppppppplVar46 + 1) + -1);
        uVar30 = 0xb;
        uVar51 = (int)((ulong)((long)ppppplVar36 - (long)ppppplVar38) >> 4) + 3;
        break;
      case 0x12:
      case 0x13:
        FUN_109d38988(&ppppppplStack_2a0,*(undefined4 *)(ppppplVar34 + 4));
        ppppppplVar46 = param_1 + 6;
        FUN_109d48288(ppppppplVar46,ppppplVar34[3]);
        FUN_109d38988(&ppppppplStack_2a0,*(int *)(ppppppplVar46 + 1) + -1);
        if (*(char *)(ppppplVar34 + 1) == '\x13') {
          FUN_109d38988(&ppppppplStack_2a0,1);
        }
        uVar30 = 0xc;
        uVar51 = 0;
        break;
      case 0x14:
        break;
      case 0x15:
        FUN_109d4714c(*param_1,0x13,ppppplVar34[3],ppppplVar34[4],iVar55 + 3);
        FUN_109d38988(&ppppppplStack_2a0,*(undefined4 *)((long)ppppplVar34 + 0xc));
        if (*(uint *)((long)ppppplVar34 + 0xc) != 0) {
          lVar32 = (ulong)*(uint *)((long)ppppplVar34 + 0xc) << 3;
          pppplVar26 = ppppplVar34[2];
          do {
            ppppppplVar46 = param_1 + 6;
            FUN_109d48288(ppppppplVar46,*pppplVar26);
            FUN_109d38988(&ppppppplStack_2a0,*(int *)(ppppppplVar46 + 1) + -1);
            lVar32 = lVar32 + -8;
            pppplVar26 = pppplVar26 + 1;
          } while (lVar32 != 0);
        }
        if (0xff < *(uint *)(ppppplVar34 + 1)) {
          lVar32 = (ulong)(*(uint *)(ppppplVar34 + 1) >> 8) << 2;
          pppplVar26 = ppppplVar34[5];
          do {
            FUN_109d38988(&ppppppplStack_2a0,*(undefined4 *)pppplVar26);
            lVar32 = lVar32 + -4;
            pppplVar26 = (long ****)((long)pppplVar26 + 4);
          } while (lVar32 != 0);
        }
        uVar30 = 0x1a;
        uVar51 = 0;
        break;
      default:
        uVar51 = 0;
      }
      FUN_109d481c4(*param_1,uVar30,&ppppppplStack_2a0,uVar51);
      pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
      pppppplVar42 = pppppplVar42 + 1;
    } while (pppppplVar42 != pppppplVar22);
  }
  FUN_109d3b86c(*param_1);
  ppppppplVar46 = ppppppplStack_4f8;
  pppppplVar42 = pppppplStack_600;
  if (ppppppplStack_4f8 != (long *******)0x0) {
    pppppplVar22 = (long ******)(ppppppplStack_4f8 + 1);
    do {
      ppppplVar34 = *pppppplVar22;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar22,0x10);
      if (bVar20) {
        *pppppplVar22 = (long *****)((long)ppppplVar34 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar34 == (long *****)0x0) {
      (*(code *)(*ppppppplStack_4f8)[2])(ppppppplStack_4f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
    }
  }
  if (ppppppplStack_2a0 != (long *******)pppppplVar42) {
    _free();
  }
  if (param_1[0x28] != param_1[0x29]) {
    FUN_109d3b6e4(*param_1,10,3);
    pppppplStack_600 = (long ******)&uStack_290;
    pppppplStack_298 = (long ******)0x4000000000;
    pppppplVar21 = param_1[0x29];
    ppppppplStack_2a0 = (long *******)pppppplStack_600;
    for (pppppplVar42 = param_1[0x28]; pppppplVar42 != pppppplVar21; pppppplVar42 = pppppplVar42 + 2
        ) {
      pppppplVar22 = (long ******)*pppppplVar42;
      pppppplVar47 = (long ******)pppppplVar42[1];
      ppppppplStack_500 = (long *******)pppppplVar22;
      ppppppplStack_4f8 = (long *******)pppppplVar47;
      if (pppppplVar47 == (long ******)0x0) {
        uVar30 = 0;
      }
      else {
        ppppppplVar46 = param_1 + 0x25;
        FUN_109d4840c(ppppppplVar46,&ppppppplStack_500);
        uVar30 = *(undefined4 *)(ppppppplVar46 + 2);
      }
      FUN_109d38988(&ppppppplStack_2a0,uVar30);
      FUN_109d38988(&ppppppplStack_2a0,(ulong)pppppplVar22 & 0xffffffff);
      pppppplVar22 = (long ******)0x0;
      if (pppppplVar47 == (long ******)0x0) {
        pppppplVar57 = (long ******)0x0;
      }
      else {
        pppppplVar57 = pppppplVar47 + 6 + *(uint *)(pppppplVar47 + 1);
        pppppplVar22 = pppppplVar47 + 6;
      }
      for (; pppppplVar22 != pppppplVar57; pppppplVar22 = pppppplVar22 + 1) {
        ppppplVar34 = *pppppplVar22;
        if (ppppplVar34 == (long *****)0x0) {
          bVar20 = true;
          uVar43 = 5;
LAB_109d3e788:
          FUN_109d38988(&ppppppplStack_2a0,uVar43);
          if (ppppplVar34 == (long *****)0x0) {
            uVar41 = 0;
          }
          else {
            uVar41 = (ulong)*(uint *)((long)ppppplVar34 + 0xc);
          }
          func_0x000109d4837c(uVar41);
          FUN_109d38988(&ppppppplStack_2a0,uVar41);
          if (!bVar20) {
            if (ppppplVar34 == (long *****)0x0) {
              pppplVar26 = (long ****)0x0;
            }
            else {
              pppplVar26 = ppppplVar34[2];
            }
            ppppppplVar46 = param_1 + 6;
            FUN_109d48288(ppppppplVar46,pppplVar26);
            FUN_109d38988(&ppppppplStack_2a0,*(int *)(ppppppplVar46 + 1) + -1);
          }
        }
        else {
          cVar17 = *(char *)(ppppplVar34 + 1);
          if (cVar17 == '\x02') {
            uVar51 = *(uint *)((long)ppppplVar34 + 0xc);
            uVar50 = *(uint *)(ppppplVar34 + 2);
            uVar43 = 3;
            if (uVar50 != 0) {
              uVar43 = 4;
            }
            FUN_109d38988(&ppppppplStack_2a0,uVar43);
            lVar32 = (long)(ppppplVar34 + 3) + (ulong)uVar51;
            FUN_109d48390(&ppppppplStack_2a0,ppppplVar34 + 3,lVar32);
            FUN_109d38988(&ppppppplStack_2a0,0);
            if (uVar50 != 0) {
              lVar32 = lVar32 + 1;
              FUN_109d48390(&ppppppplStack_2a0,lVar32,lVar32 + (ulong)uVar50);
              FUN_109d38988(&ppppppplStack_2a0,0);
            }
          }
          else {
            if (cVar17 == '\x01') {
              FUN_109d38988(&ppppppplStack_2a0,1);
              uVar41 = (ulong)*(uint *)((long)ppppplVar34 + 0xc);
              func_0x000109d4837c(uVar41);
              FUN_109d38988(&ppppppplStack_2a0,uVar41);
              pppplVar26 = ppppplVar34[2];
            }
            else {
              if (cVar17 != '\0') {
                bVar20 = ppppplVar34[2] == (long ****)0x0;
                uVar43 = 5;
                if (!bVar20) {
                  uVar43 = 6;
                }
                goto LAB_109d3e788;
              }
              FUN_109d38988(&ppppppplStack_2a0,0);
              pppplVar26 = (long ****)(ulong)*(uint *)((long)ppppplVar34 + 0xc);
              func_0x000109d4837c(pppplVar26);
            }
            FUN_109d38988(&ppppppplStack_2a0,pppplVar26);
          }
        }
      }
      FUN_109d481c4(*param_1,3,&ppppppplStack_2a0,0);
      pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
    }
    FUN_109d3b86c(*param_1);
    if (ppppppplStack_2a0 != (long *******)pppppplStack_600) {
      _free();
    }
  }
  if (param_1[0x2e] != param_1[0x2f]) {
    FUN_109d3b6e4(*param_1,9,3);
    pppppplStack_298 = (long ******)0x4000000000;
    pppppplVar22 = param_1[0x2f];
    ppppppplStack_2a0 = (long *******)&uStack_290;
    for (pppppplVar42 = param_1[0x2e]; pppppplVar42 != pppppplVar22; pppppplVar42 = pppppplVar42 + 1
        ) {
      if ((*pppppplVar42 != (long *****)0x0) && (uVar51 = *(uint *)(*pppppplVar42 + 1), uVar51 != 0)
         ) {
        uVar50 = 0;
        lVar32 = 0x28;
        do {
          ppppplVar34 = *pppppplVar42;
          if (((ppppplVar34 != (long *****)0x0) && (uVar50 < *(uint *)(ppppplVar34 + 1))) &&
             (*(long *******)((long)ppppplVar34 + lVar32) != (long ******)0x0)) {
            pppppplVar21 = (long ******)
                           ((ulong)pppppplVar21 & 0xffffffff00000000 | (ulong)(uVar50 - 1));
            ppppppplVar46 = param_1 + 0x25;
            ppppppplStack_500 = (long *******)pppppplVar21;
            ppppppplStack_4f8 = (long *******)*(long *******)((long)ppppplVar34 + lVar32);
            FUN_109d4840c(ppppppplVar46,&ppppppplStack_500);
            FUN_109d38988(&ppppppplStack_2a0,*(undefined4 *)(ppppppplVar46 + 2));
          }
          lVar32 = lVar32 + 8;
          uVar50 = uVar50 + 1;
        } while (uVar51 != uVar50);
      }
      FUN_109d481c4(*param_1,2,&ppppppplStack_2a0,0);
      pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
    }
    FUN_109d3b86c(*param_1);
    if (ppppppplStack_2a0 != (long *******)&uStack_290) {
      _free();
    }
  }
  pppppplStack_298 = (long ******)0x4000000000;
  pppppplVar21 = param_1[0x16];
  pppppplVar42 = param_1[0x15];
  ppppppplStack_2a0 = (long *******)&uStack_290;
  if (param_1[0x15] != pppppplVar21) {
    do {
      pppppplVar22 = pppppplVar42 + 1;
      ppppplVar34 = *pppppplVar42;
      ppppppplVar46 = param_1;
      FUN_109d48584(param_1,*ppppplVar34 + 9,**ppppplVar34);
      func_0x000109d31b50(&ppppppplStack_2a0,ppppppplVar46);
      func_0x000109d31b50(&ppppppplStack_2a0,*(undefined4 *)*ppppplVar34);
      func_0x000109d31b50(&ppppppplStack_2a0,*(int *)(ppppplVar34 + 1) + 1);
      FUN_109d4727c(*param_1,0xc,&ppppppplStack_2a0,0);
      pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
      pppppplVar42 = pppppplVar22;
    } while (pppppplVar22 != pppppplVar21);
    if (ppppppplStack_2a0 != (long *******)&uStack_290) {
      _free();
    }
  }
  pppppplVar21 = param_1[2];
  ppppplVar31 = (long *****)(long)*(char *)((long)pppppplVar21 + 0xe7);
  ppppplVar34 = ppppplVar31;
  if ((long)ppppplVar31 < 0) {
    ppppplVar34 = pppppplVar21[0x1b];
  }
  if (ppppplVar34 != (long *****)0x0) {
    ppppplVar34 = pppppplVar21[0x1b];
    pppppplVar42 = (long ******)pppppplVar21[0x1a];
    if (-1 < *(char *)((long)pppppplVar21 + 0xe7)) {
      ppppplVar34 = ppppplVar31;
      pppppplVar42 = pppppplVar21 + 0x1a;
    }
    FUN_109d4714c(*param_1,2,pppppplVar42,ppppplVar34,0);
    pppppplVar21 = param_1[2];
  }
  ppppplVar31 = (long *****)(long)*(char *)((long)pppppplVar21 + 0x1e7);
  ppppplVar34 = ppppplVar31;
  if ((long)ppppplVar31 < 0) {
    ppppplVar34 = pppppplVar21[0x3b];
  }
  if (ppppplVar34 != (long *****)0x0) {
    ppppplVar34 = pppppplVar21[0x3b];
    pppppplVar42 = (long ******)pppppplVar21[0x3a];
    if (-1 < *(char *)((long)pppppplVar21 + 0x1e7)) {
      ppppplVar34 = ppppplVar31;
      pppppplVar42 = pppppplVar21 + 0x3a;
    }
    FUN_109d4714c(*param_1,3,pppppplVar42,ppppplVar34,0);
    pppppplVar21 = param_1[2];
  }
  ppppplVar31 = (long *****)(long)*(char *)((long)pppppplVar21 + 0x6f);
  ppppplVar34 = ppppplVar31;
  if ((long)ppppplVar31 < 0) {
    ppppplVar34 = pppppplVar21[0xc];
  }
  if (ppppplVar34 != (long *****)0x0) {
    ppppplVar34 = pppppplVar21[0xc];
    pppppplVar42 = (long ******)pppppplVar21[0xb];
    if (-1 < *(char *)((long)pppppplVar21 + 0x6f)) {
      ppppplVar34 = ppppplVar31;
      pppppplVar42 = pppppplVar21 + 0xb;
    }
    FUN_109d4714c(*param_1,4,pppppplVar42,ppppplVar34,0);
    pppppplVar21 = param_1[2];
  }
  ppppppplStack_500 = (long *******)&ppppppplStack_4f8;
  ppppppplStack_4f8 = (long *******)0x0;
  apppppplStack_4f0[0] = (long ******)0x0;
  ppppppplStack_2c0 = (long *******)&ppppppplStack_2b8;
  pppplStack_2b0 = (long ****)0x0;
  ppppppplStack_2b8 = (long *******)0x0;
  pppppplVar42 = (long ******)pppppplVar21[2];
  ppppppplStack_608 = param_1;
  if (pppppplVar42 == pppppplVar21 + 1) {
    uVar41 = 0;
    uVar51 = 0;
    uVar50 = 0;
  }
  else {
    uVar50 = 0;
    uVar51 = 0;
    uVar41 = 0;
    do {
      ppppppplVar24 = (long *******)(pppppplVar42 + -7);
      ppppppplVar46 = (long *******)0x0;
      if (pppppplVar42 != (long ******)0x0) {
        ppppppplVar46 = ppppppplVar24;
      }
      uVar16 = *(uint *)(ppppppplVar46 + 4);
      uVar2 = 0;
      if ((uVar16 >> 0x11 & 0x3f) != 0) {
        uVar2 = (uVar16 >> 0x11 & 0x3f) - 1;
      }
      uVar3 = uVar51 & 0xff;
      if ((uVar51 & 0xff) <= (uVar2 & 0xff)) {
        uVar3 = uVar2 & 0xff;
      }
      uVar56 = (uint)uVar41;
      if ((uVar41 & 1) == 0) {
        uVar3 = uVar2;
      }
      bVar20 = (uVar16 >> 0x11 & 0x3f) != 0;
      if (bVar20) {
        uVar56 = 1;
      }
      uVar41 = (ulong)uVar56;
      if (bVar20) {
        uVar51 = uVar3;
      }
      ppppppplVar25 = param_1 + 6;
      FUN_109d48288(ppppppplVar25,pppppplVar42[-4]);
      if (uVar50 <= *(int *)(ppppppplVar25 + 1) - 1U) {
        uVar50 = *(int *)(ppppppplVar25 + 1) - 1U;
      }
      if (*(char *)((long)ppppppplVar46 + 0x22) < '\0') {
        pppppplStack_600 = (long ******)CONCAT44(pppppplStack_600._4_4_,uVar56);
        pppplVar26 = ***ppppppplVar24 + 0x138;
        uStack_2e0 = (undefined **)ppppppplVar24;
        FUN_109d89ac0(pppplVar26,&uStack_2e0);
        pppppplVar22 = (long ******)pppplVar26[2];
        if ((long ******)0x7ffffffffffffff7 < pppppplVar22) {
          func_0x000104c4f6b8();
          goto LAB_109d42910;
        }
        ppplVar52 = pppplVar26[1];
        if (pppppplVar22 < (long ******)0x17) {
          uStack_290 = (long ******)CONCAT17((char)pppppplVar22,(undefined7)uStack_290);
          ppppppplVar40 = (long *******)&ppppppplStack_2a0;
          if (pppppplVar22 != (long ******)0x0) goto LAB_109d3eb90;
        }
        else {
          ppppppplVar25 = (long *******)0x19;
          if (((ulong)pppppplVar22 | 7) != 0x17) {
            ppppppplVar25 = (long *******)(((ulong)pppppplVar22 | 7) + 1);
          }
          ppppppplVar40 = ppppppplVar25;
          __Znwm();
          uStack_290 = (long ******)((ulong)ppppppplVar25 | 0x8000000000000000);
          ppppppplStack_2a0 = ppppppplVar40;
          pppppplStack_298 = pppppplVar22;
LAB_109d3eb90:
          _memmove(ppppppplVar40,ppplVar52,pppppplVar22);
        }
        *(undefined1 *)((long)ppppppplVar40 + (long)pppppplVar22) = 0;
        ppppppplVar25 = (long *******)&ppppppplStack_500;
        FUN_109d486cc(ppppppplVar25,&ppppppplStack_2a0,&ppppppplStack_2a0);
        param_1 = ppppppplStack_608;
        uVar41 = (ulong)pppppplStack_600 & 0xffffffff;
        if ((long)uStack_290 < 0) {
          __ZdlPv(ppppppplStack_2a0);
        }
        if (*(int *)(ppppppplVar25 + 7) == 0) {
          pppppplVar22 = *param_1;
          if (*(char *)((long)ppppppplVar46 + 0x22) < '\0') {
            pppplVar26 = ***ppppppplVar24 + 0x138;
            ppppppplStack_2a0 = ppppppplVar24;
            FUN_109d89ac0(pppplVar26,&ppppppplStack_2a0);
            ppplVar52 = pppplVar26[1];
            ppplVar29 = pppplVar26[2];
          }
          else {
            ppplVar52 = (long ***)0x0;
            ppplVar29 = (long ***)0x0;
          }
          FUN_109d4714c(pppppplVar22,5,ppplVar52,ppplVar29,0);
          *(int *)(ppppppplVar25 + 7) = (int)apppppplStack_4f0[0];
        }
      }
      pppppplVar42 = (long ******)pppppplVar42[1];
    } while (pppppplVar42 != pppppplVar21 + 1);
    pppppplVar21 = param_1[2];
  }
  pppppplVar42 = (long ******)pppppplVar21[4];
  if (pppppplVar42 != pppppplVar21 + 3) {
    do {
      ppppppplVar24 = (long *******)(pppppplVar42 + -7);
      ppppppplVar46 = (long *******)0x0;
      if (pppppplVar42 != (long ******)0x0) {
        ppppppplVar46 = ppppppplVar24;
      }
      uVar16 = *(uint *)(ppppppplVar46 + 4);
      uVar2 = 0;
      if ((uVar16 >> 0x11 & 0x3f) != 0) {
        uVar2 = (uVar16 >> 0x11 & 0x3f) - 1;
      }
      uVar3 = uVar51 & 0xff;
      if ((uVar51 & 0xff) <= (uVar2 & 0xff)) {
        uVar3 = uVar2 & 0xff;
      }
      uVar56 = (uint)uVar41;
      if ((uVar41 & 1) == 0) {
        uVar3 = uVar2;
      }
      bVar20 = (uVar16 >> 0x11 & 0x3f) != 0;
      if (bVar20) {
        uVar56 = 1;
      }
      uVar41 = (ulong)uVar56;
      if (bVar20) {
        uVar51 = uVar3;
      }
      if ((uVar16 >> 0x17 & 1) != 0) {
        pppppplStack_600 = (long ******)CONCAT44(pppppplStack_600._4_4_,uVar56);
        pppplVar26 = ***ppppppplVar24 + 0x138;
        uStack_2e0 = (undefined **)ppppppplVar24;
        FUN_109d89ac0(pppplVar26,&uStack_2e0);
        pppppplVar22 = (long ******)pppplVar26[2];
        if ((long ******)0x7ffffffffffffff7 < pppppplVar22) {
          func_0x000104c4f6b8();
          goto LAB_109d42910;
        }
        ppplVar52 = pppplVar26[1];
        if (pppppplVar22 < (long ******)0x17) {
          uStack_290 = (long ******)CONCAT17((char)pppppplVar22,(undefined7)uStack_290);
          ppppppplVar40 = (long *******)&ppppppplStack_2a0;
          if (pppppplVar22 != (long ******)0x0) goto LAB_109d3ed38;
        }
        else {
          ppppppplVar25 = (long *******)0x19;
          if (((ulong)pppppplVar22 | 7) != 0x17) {
            ppppppplVar25 = (long *******)(((ulong)pppppplVar22 | 7) + 1);
          }
          ppppppplVar40 = ppppppplVar25;
          __Znwm();
          uStack_290 = (long ******)((ulong)ppppppplVar25 | 0x8000000000000000);
          ppppppplStack_2a0 = ppppppplVar40;
          pppppplStack_298 = pppppplVar22;
LAB_109d3ed38:
          _memmove(ppppppplVar40,ppplVar52,pppppplVar22);
        }
        *(undefined1 *)((long)ppppppplVar40 + (long)pppppplVar22) = 0;
        ppppppplVar25 = (long *******)&ppppppplStack_500;
        FUN_109d486cc(ppppppplVar25,&ppppppplStack_2a0,&ppppppplStack_2a0);
        if ((long)uStack_290 < 0) {
          __ZdlPv(ppppppplStack_2a0);
        }
        param_1 = ppppppplStack_608;
        uVar41 = (ulong)pppppplStack_600 & 0xffffffff;
        if (*(int *)(ppppppplVar25 + 7) == 0) {
          pppppplVar22 = *ppppppplStack_608;
          if (*(char *)((long)ppppppplVar46 + 0x22) < '\0') {
            pppplVar26 = ***ppppppplVar24 + 0x138;
            ppppppplStack_2a0 = ppppppplVar24;
            FUN_109d89ac0(pppplVar26,&ppppppplStack_2a0);
            ppplVar52 = pppplVar26[1];
            ppplVar29 = pppplVar26[2];
          }
          else {
            ppplVar52 = (long ***)0x0;
            ppplVar29 = (long ***)0x0;
          }
          FUN_109d4714c(pppppplVar22,5,ppplVar52,ppplVar29,0);
          *(int *)(ppppppplVar25 + 7) = (int)apppppplStack_4f0[0];
        }
      }
      if ((*(ushort *)((long)pppppplVar42 + -0x26) >> 0xe & 1) != 0) {
        pppplVar26 = ***ppppppplVar24 + 0x14a;
        ppppppplStack_2a0 = ppppppplVar24;
        FUN_109d8e414(pppplVar26,&ppppppplStack_2a0);
        ppppppplStack_2a0 = (long *******)(pppplVar26 + 1);
        ppppppplVar46 = (long *******)&ppppppplStack_2c0;
        func_0x000107c2af5c(ppppppplVar46,ppppppplStack_2a0,&UNK_10dd5b8f9,&ppppppplStack_2a0,
                            &uStack_2e0);
        if (*(int *)(ppppppplVar46 + 7) == 0) {
          pppppplVar22 = *param_1;
          pppplVar26 = ***ppppppplVar24 + 0x14a;
          ppppppplStack_2a0 = ppppppplVar24;
          FUN_109d8e414(pppplVar26,&ppppppplStack_2a0);
          cVar17 = *(char *)((long)pppplVar26 + 0x1f);
          pppplVar44 = (long ****)pppplVar26[1];
          if (-1 < (long)cVar17) {
            pppplVar44 = pppplVar26 + 1;
          }
          ppplVar52 = pppplVar26[2];
          if (-1 < cVar17) {
            ppplVar52 = (long ***)(long)cVar17;
          }
          FUN_109d4714c(pppppplVar22,0xb,pppplVar44,ppplVar52,0);
          *(int *)(ppppppplVar46 + 7) = (int)pppplStack_2b0;
        }
      }
      pppppplVar42 = (long ******)pppppplVar42[1];
    } while (pppppplVar42 != pppppplVar21 + 3);
    pppppplVar21 = param_1[2];
  }
  if ((long ******)pppppplVar21[1] == pppppplVar21 + 1) {
    pppppplStack_600 = (long ******)((ulong)pppppplStack_600 & 0xffffffff00000000);
  }
  else {
    pppppplVar21 = (long ******)0x228;
    __Znwm();
    pppppplVar21[1] = (long *****)0x0;
    pppppplVar21[2] = (long *****)0x0;
    *pppppplVar21 = (long *****)&PTR_FUN_110b40f08;
    pppppplVar21[8] = (long *****)0x0;
    pppppplVar21[7] = (long *****)0x0;
    pppppplVar21[10] = (long *****)0x0;
    pppppplVar21[9] = (long *****)0x0;
    pppppplVar21[0xc] = (long *****)0x0;
    pppppplVar21[0xb] = (long *****)0x0;
    pppppplVar21[0xe] = (long *****)0x0;
    pppppplVar21[0xd] = (long *****)0x0;
    pppppplVar21[0x10] = (long *****)0x0;
    pppppplVar21[0xf] = (long *****)0x0;
    pppppplVar21[0x12] = (long *****)0x0;
    pppppplVar21[0x11] = (long *****)0x0;
    pppppplVar21[0x14] = (long *****)0x0;
    pppppplVar21[0x13] = (long *****)0x0;
    pppppplVar21[0x16] = (long *****)0x0;
    pppppplVar21[0x15] = (long *****)0x0;
    pppppplVar21[0x18] = (long *****)0x0;
    pppppplVar21[0x17] = (long *****)0x0;
    pppppplVar21[0x1a] = (long *****)0x0;
    pppppplVar21[0x19] = (long *****)0x0;
    pppppplVar21[0x1c] = (long *****)0x0;
    pppppplVar21[0x1b] = (long *****)0x0;
    pppppplVar21[0x1e] = (long *****)0x0;
    pppppplVar21[0x1d] = (long *****)0x0;
    pppppplVar21[0x20] = (long *****)0x0;
    pppppplVar21[0x1f] = (long *****)0x0;
    pppppplVar21[6] = (long *****)0x0;
    pppppplVar21[5] = (long *****)0x0;
    pppppplVar21[0x22] = (long *****)0x0;
    pppppplVar21[0x21] = (long *****)0x0;
    pppppplVar21[0x24] = (long *****)0x0;
    pppppplVar21[0x23] = (long *****)0x0;
    pppppplVar21[0x26] = (long *****)0x0;
    pppppplVar21[0x25] = (long *****)0x0;
    pppppplVar21[0x28] = (long *****)0x0;
    pppppplVar21[0x27] = (long *****)0x0;
    pppppplVar21[0x2a] = (long *****)0x0;
    pppppplVar21[0x29] = (long *****)0x0;
    pppppplVar21[0x2c] = (long *****)0x0;
    pppppplVar21[0x2b] = (long *****)0x0;
    pppppplVar21[0x2e] = (long *****)0x0;
    pppppplVar21[0x2d] = (long *****)0x0;
    pppppplVar21[0x30] = (long *****)0x0;
    pppppplVar21[0x2f] = (long *****)0x0;
    pppppplVar21[0x32] = (long *****)0x0;
    pppppplVar21[0x31] = (long *****)0x0;
    pppppplVar21[0x34] = (long *****)0x0;
    pppppplVar21[0x33] = (long *****)0x0;
    pppppplVar21[0x36] = (long *****)0x0;
    pppppplVar21[0x35] = (long *****)0x0;
    pppppplVar21[0x38] = (long *****)0x0;
    pppppplVar21[0x37] = (long *****)0x0;
    pppppplVar21[0x3a] = (long *****)0x0;
    pppppplVar21[0x39] = (long *****)0x0;
    pppppplVar21[0x3c] = (long *****)0x0;
    pppppplVar21[0x3b] = (long *****)0x0;
    pppppplVar21[0x3e] = (long *****)0x0;
    pppppplVar21[0x3d] = (long *****)0x0;
    pppppplVar21[0x40] = (long *****)0x0;
    pppppplVar21[0x3f] = (long *****)0x0;
    pppppplVar21[0x42] = (long *****)0x0;
    pppppplVar21[0x41] = (long *****)0x0;
    pppppplVar21[0x44] = (long *****)0x0;
    pppppplVar21[0x43] = (long *****)0x0;
    pppppplVar42 = pppppplVar21 + 3;
    *pppppplVar42 = (long *****)(pppppplVar21 + 5);
    pppppplVar21[4] = (long *****)0x2000000000;
    ppppppplStack_2a0 = (long *******)pppppplVar42;
    pppppplStack_298 = pppppplVar21;
    FUN_109d4444c(pppppplVar42,7,0xff);
    FUN_109d4444c(pppppplVar42,8,4);
    FUN_109d4444c(pppppplVar42,8,4);
    FUN_109d4444c(pppppplVar42,0x20 - (int)LZCOUNT(uVar50),2);
    FUN_109d4444c(pppppplVar42,6,4);
    FUN_109d4444c(pppppplVar42,6,4);
    FUN_109d4444c(pppppplVar42,5,2);
    if ((uVar41 & 1) == 0) {
      FUN_109d4444c(pppppplVar42,0,0xff);
    }
    else {
      FUN_109d4444c(pppppplVar42,0x20 - (int)LZCOUNT((uVar51 & 0xff) + 1),2);
    }
    if (apppppplStack_4f0[0] == (long ******)0x0) {
      FUN_109d4444c(pppppplVar42,0,0xff);
    }
    else {
      FUN_109d4444c(pppppplVar42,0x20 - (int)LZCOUNT((int)apppppplStack_4f0[0]),2);
    }
    pppppplVar22 = *param_1;
    pppppplStack_298 = (long ******)0x0;
    ppppppplStack_2a0 = (long *******)0x0;
    pppppplStack_510 = pppppplVar42;
    pppppplStack_508 = pppppplVar21;
    FUN_109d444b8(pppppplVar22,pppppplVar42);
    FUN_109d4459c(pppppplVar22 + 5,&pppppplStack_510);
    pppppplVar21 = pppppplStack_508;
    ppppplVar34 = pppppplVar22[5];
    ppppplVar31 = pppppplVar22[6];
    if (pppppplStack_508 != (long ******)0x0) {
      pppppplVar42 = pppppplStack_508 + 1;
      do {
        ppppplVar35 = *pppppplVar42;
        cVar17 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
        if (bVar20) {
          *pppppplVar42 = (long *****)((long)ppppplVar35 + -1);
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      if (ppppplVar35 == (long *****)0x0) {
        (*(code *)(*pppppplStack_508)[2])(pppppplStack_508);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
      }
    }
    pppppplVar21 = pppppplStack_298;
    pppppplStack_600 =
         (long ******)
         CONCAT44(pppppplStack_600._4_4_,
                  (int)((ulong)((long)ppppplVar31 - (long)ppppplVar34) >> 4) + 3);
    if (pppppplStack_298 != (long ******)0x0) {
      plVar23 = (long *)(pppppplStack_298 + 1);
      do {
        lVar32 = *plVar23;
        cVar17 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar20) {
          *plVar23 = lVar32 + -1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      if (lVar32 == 0) {
        (**(code **)((long)*pppppplStack_298 + 0x10))(pppppplStack_298);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
      }
    }
    pppppplVar21 = param_1[2];
  }
  ppppppplStack_608 = (long *******)&uStack_290;
  pppppplStack_298 = (long ******)0x4000000000;
  cVar17 = *(char *)((long)pppppplVar21 + 0xcf);
  pppppplVar42 = (long ******)pppppplVar21[0x17];
  if (-1 < (long)cVar17) {
    pppppplVar42 = pppppplVar21 + 0x17;
  }
  ppppplVar34 = pppppplVar21[0x18];
  if (-1 < cVar17) {
    ppppplVar34 = (long *****)(long)cVar17;
  }
  ppppppplStack_2a0 = ppppppplStack_608;
  FUN_109d485ec(pppppplVar42,ppppplVar34);
  if ((int)pppppplVar42 == 1) {
    uVar43 = 2;
    uVar45 = 7;
  }
  else if ((int)pppppplVar42 == 0) {
    uVar45 = 0;
    uVar43 = 8;
  }
  else {
    uVar43 = 2;
    uVar45 = 8;
  }
  plVar23 = (long *)0x228;
  __Znwm();
  plVar23[1] = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&PTR_FUN_110b40f08;
  plVar23[8] = 0;
  plVar23[7] = 0;
  plVar23[10] = 0;
  plVar23[9] = 0;
  plVar23[0xc] = 0;
  plVar23[0xb] = 0;
  plVar23[0xe] = 0;
  plVar23[0xd] = 0;
  plVar23[0x10] = 0;
  plVar23[0xf] = 0;
  plVar23[0x12] = 0;
  plVar23[0x11] = 0;
  plVar23[0x14] = 0;
  plVar23[0x13] = 0;
  plVar23[0x16] = 0;
  plVar23[0x15] = 0;
  plVar23[0x18] = 0;
  plVar23[0x17] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x20] = 0;
  plVar23[0x1f] = 0;
  plVar23[6] = 0;
  plVar23[5] = 0;
  plVar23[0x22] = 0;
  plVar23[0x21] = 0;
  plVar23[0x24] = 0;
  plVar23[0x23] = 0;
  plVar23[0x26] = 0;
  plVar23[0x25] = 0;
  plVar23[0x28] = 0;
  plVar23[0x27] = 0;
  plVar23[0x2a] = 0;
  plVar23[0x29] = 0;
  plVar23[0x2c] = 0;
  plVar23[0x2b] = 0;
  plVar23[0x2e] = 0;
  plVar23[0x2d] = 0;
  plVar23[0x30] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x31] = 0;
  plVar23[0x34] = 0;
  plVar23[0x33] = 0;
  plVar23[0x36] = 0;
  plVar23[0x35] = 0;
  plVar23[0x38] = 0;
  plVar23[0x37] = 0;
  plVar23[0x3a] = 0;
  plVar23[0x39] = 0;
  plVar23[0x3c] = 0;
  plVar23[0x3b] = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3d] = 0;
  plVar23[0x40] = 0;
  plVar23[0x3f] = 0;
  plVar23[0x42] = 0;
  plVar23[0x41] = 0;
  plVar23[0x44] = 0;
  plVar23[0x43] = 0;
  pppppplVar42 = (long ******)(plVar23 + 3);
  *pppppplVar42 = (long *****)(plVar23 + 5);
  plVar23[4] = 0x2000000000;
  uStack_2e0 = (undefined **)pppppplVar42;
  ppppppplStack_2d8 = (long *******)plVar23;
  FUN_109d4444c(pppppplVar42,0x10,0xff);
  FUN_109d4444c(pppppplVar42,0,6);
  FUN_109d4444c(pppppplVar42,uVar45,uVar43);
  pppppplVar21 = *param_1;
  ppppppplStack_2d8 = (long *******)0x0;
  uStack_2e0 = (undefined **)0x0;
  pppppplStack_520 = pppppplVar42;
  plStack_518 = plVar23;
  FUN_109d444b8(pppppplVar21,pppppplVar42);
  FUN_109d4459c(pppppplVar21 + 5,&pppppplStack_520);
  plVar23 = plStack_518;
  ppppplVar34 = pppppplVar21[5];
  ppppplVar31 = pppppplVar21[6];
  if (plStack_518 != (long *)0x0) {
    plVar49 = plStack_518 + 1;
    do {
      lVar32 = *plVar49;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar20) {
        *plVar49 = lVar32 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_518 + 0x10))(plStack_518);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  pppppplVar21 = param_1[2];
  ppppplVar35 = (long *****)(long)*(char *)((long)pppppplVar21 + 0xcf);
  if ((long)ppppplVar35 < 0) {
    pppppplVar42 = (long ******)pppppplVar21[0x17];
    ppppplVar35 = pppppplVar21[0x18];
  }
  else {
    pppppplVar42 = pppppplVar21 + 0x17;
  }
  for (; ppppplVar35 != (long *****)0x0; ppppplVar35 = (long *****)((long)ppppplVar35 + -1)) {
    func_0x000109d31b50(&ppppppplStack_2a0,*(undefined1 *)pppppplVar42);
    pppppplVar42 = (long ******)((long)pppppplVar42 + 1);
  }
  FUN_109d4727c(*param_1,0x10,&ppppppplStack_2a0,
                (int)((ulong)((long)ppppplVar31 - (long)ppppplVar34) >> 4) + 3);
  ppppppplVar46 = ppppppplStack_2d8;
  pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
  if (ppppppplStack_2d8 != (long *******)0x0) {
    ppppppplVar24 = ppppppplStack_2d8 + 1;
    do {
      pppppplVar21 = *ppppppplVar24;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar24,0x10);
      if (bVar20) {
        *ppppppplVar24 = (long ******)((long)pppppplVar21 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (pppppplVar21 == (long ******)0x0) {
      (*(code *)(*ppppppplStack_2d8)[2])(ppppppplStack_2d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
    }
  }
  pppppplVar21 = param_1[2];
  pppppplVar42 = (long ******)pppppplVar21[2];
  if (pppppplVar42 != pppppplVar21 + 1) {
    ppppppplVar46 = param_1 + 0x13;
    do {
      ppppppplVar24 = (long *******)(pppppplVar42 + -7);
      if ((*(byte *)((long)pppppplVar42 + -0x21) >> 4 & 1) == 0) {
        pppppplVar22 = (long ******)0x0;
        ppppppplVar25 = (long *******)&UNK_10f5fa524;
      }
      else {
        ppppppplVar40 = ppppppplVar24;
        func_0x000109da271c();
        ppppppplVar25 = ppppppplVar40 + 2;
        pppppplVar22 = *ppppppplVar40;
      }
      ppppppplVar40 = param_1;
      FUN_109d48584(param_1,ppppppplVar25,pppppplVar22);
      func_0x000109d31b50(&ppppppplStack_2a0,ppppppplVar40);
      if ((*(byte *)((long)pppppplVar42 + -0x21) >> 4 & 1) == 0) {
        uVar30 = 0;
      }
      else {
        ppppppplVar25 = ppppppplVar24;
        func_0x000109da271c();
        uVar30 = *(undefined4 *)ppppppplVar25;
      }
      func_0x000109d31b50(&ppppppplStack_2a0,uVar30);
      ppppppplVar25 = param_1 + 6;
      FUN_109d48288(ppppppplVar25,pppppplVar42[-4]);
      func_0x000109d31b50(&ppppppplStack_2a0,*(int *)(ppppppplVar25 + 1) + -1);
      func_0x000109d31b50(&ppppppplStack_2a0,
                          *(byte *)(pppppplVar42 + 3) & 1 |
                          (*(uint *)(pppppplVar42[-7] + 1) >> 8) << 2 | 2);
      if (*(char *)(pppppplVar42 + -5) == '\0') {
        if (((long ******)pppppplVar42[2] != pppppplVar42 + 2) ||
           ((*(byte *)((long)pppppplVar42 + -0x15) & 1) != 0)) goto LAB_109d3f3f4;
LAB_109d3f3ec:
        iVar55 = 0;
      }
      else {
        if ((*(char *)(pppppplVar42 + -5) == '\x03') &&
           ((*(uint *)((long)pppppplVar42 + -0x24) & 0x7ffffff) == 0)) goto LAB_109d3f3ec;
LAB_109d3f3f4:
        ppppppplVar25 = param_1 + 3;
        FUN_109d51b68(ppppppplVar25,pppppplVar42[-0xb]);
        iVar55 = (int)ppppppplVar25 + 1;
      }
      func_0x000109d31b50(&ppppppplStack_2a0,iVar55);
      func_0x000109d31b50(&ppppppplStack_2a0,
                          *(undefined4 *)
                           (&UNK_10e0438e4 + ((ulong)*(uint *)(pppppplVar42 + -3) & 0xf) * 4));
      iVar55 = 0;
      if ((*(uint *)(pppppplVar42 + -3) >> 0x11 & 0x3f) != 0) {
        iVar55 = ((*(uint *)(pppppplVar42 + -3) >> 0x11 & 0x3f) - 1 & 0xff) + 1;
      }
      func_0x000109d31b50(&ppppppplStack_2a0,iVar55);
      uVar51 = *(uint *)(pppppplVar42 + -3);
      if ((uVar51 >> 0x17 & 1) == 0) {
        uVar30 = 0;
      }
      else {
        pppplVar26 = ***ppppppplVar24 + 0x138;
        uStack_2e0 = (undefined **)ppppppplVar24;
        FUN_109d89ac0(pppplVar26,&uStack_2e0);
        pppppplVar22 = (long ******)pppplVar26[2];
        if ((long ******)0x7ffffffffffffff7 < pppppplVar22) {
          func_0x000104c4f6b8();
          goto LAB_109d42910;
        }
        ppplVar52 = pppplVar26[1];
        if (pppppplVar22 < (long ******)0x17) {
          uStack_588 = CONCAT17((char)pppppplVar22,(undefined7)uStack_588);
          ppppppplVar40 = (long *******)&ppppppplStack_598;
          if (pppppplVar22 != (long ******)0x0) goto LAB_109d3f4c8;
        }
        else {
          ppppppplVar25 = (long *******)0x19;
          if (((ulong)pppppplVar22 | 7) != 0x17) {
            ppppppplVar25 = (long *******)(((ulong)pppppplVar22 | 7) + 1);
          }
          ppppppplVar40 = ppppppplVar25;
          __Znwm();
          uStack_588 = (ulong)ppppppplVar25 | 0x8000000000000000;
          ppppppplStack_598 = ppppppplVar40;
          pppppplStack_590 = pppppplVar22;
LAB_109d3f4c8:
          _memmove(ppppppplVar40,ppplVar52,pppppplVar22);
        }
        *(undefined1 *)((long)ppppppplVar40 + (long)pppppplVar22) = 0;
        ppppppplVar25 = (long *******)&ppppppplStack_500;
        FUN_109d486cc(ppppppplVar25,&ppppppplStack_598,&ppppppplStack_598);
        uVar30 = *(undefined4 *)(ppppppplVar25 + 7);
      }
      func_0x000109d31b50(&ppppppplStack_2a0,uVar30);
      if (((uVar51 >> 0x17 & 1) != 0) && ((long)uStack_588 < 0)) {
        __ZdlPv(ppppppplStack_598);
      }
      uVar51 = *(uint *)(pppppplVar42 + -3);
      if (((((uVar51 & 0x1cf0) != 0) || ((uVar51 & 0x300) != 0 || ((ulong)pppppplVar42[3] & 2) != 0)
           ) || (pppppplVar42[-1] != (long *****)0x0)) ||
         (((uVar51 & 0x1c000) != 0 ||
          (uVar41 = (ulong)pppppplStack_600 & 0xffffffff, pppppplVar42[2] != (long *****)0x0)))) {
        func_0x000109d31b50(&ppppppplStack_2a0,uVar51 >> 4 & 3);
        func_0x000109d31b50(&ppppppplStack_2a0,*(uint *)(pppppplVar42 + -3) >> 10 & 7);
        func_0x000109d31b50(&ppppppplStack_2a0,
                            *(undefined4 *)
                             (&UNK_10e0438d8 + ((ulong)(*(uint *)(pppppplVar42 + -3) >> 6) & 3) * 4)
                           );
        func_0x000109d31b50(&ppppppplStack_2a0,*(byte *)(pppppplVar42 + 3) >> 1 & 1);
        func_0x000109d31b50(&ppppppplStack_2a0,*(uint *)(pppppplVar42 + -3) >> 8 & 3);
        pppppplVar22 = (long ******)pppppplVar42[-1];
        if ((pppppplVar22 == (long ******)0x0) ||
           (ppppppplVar40 = (long *******)*ppppppplVar46, ppppppplVar25 = ppppppplVar46,
           ppppppplVar40 == (long *******)0x0)) {
LAB_109d3f5e4:
          uVar30 = 0;
        }
        else {
          do {
            lVar32 = 8;
            if (pppppplVar22 <= ppppppplVar40[4]) {
              lVar32 = 0;
              ppppppplVar25 = ppppppplVar40;
            }
            ppppppplVar40 = *(long ********)((long)ppppppplVar40 + lVar32);
          } while (ppppppplVar40 != (long *******)0x0);
          if ((ppppppplVar25 == ppppppplVar46) || (pppppplVar22 < ppppppplVar25[4]))
          goto LAB_109d3f5e4;
          uVar30 = *(undefined4 *)(ppppppplVar25 + 5);
        }
        func_0x000109d31b50(&ppppppplStack_2a0,uVar30);
        ppppppplVar25 = ppppppplVar24;
        FUN_109d4865c(ppppppplVar24,0xffffffff);
        uStack_2e0 = (undefined **)ppppppplVar25;
        if (ppppppplVar25 == (long *******)0x0) {
          uVar30 = 0;
        }
        else {
          ppppppplVar25 = param_1 + 0x2b;
          FUN_109d48754(ppppppplVar25,&uStack_2e0);
          uVar30 = *(undefined4 *)(ppppppplVar25 + 1);
        }
        func_0x000109d31b50(&ppppppplStack_2a0,uVar30);
        uVar41 = (ulong)(*(uint *)(pppppplVar42 + -3) >> 0xe & 1);
        func_0x000109d31b50(&ppppppplStack_2a0,uVar41);
        ppppppplVar25 = ppppppplVar24;
        FUN_109d88d68(ppppppplVar24);
        ppppppplVar40 = param_1;
        FUN_109d48584(param_1,ppppppplVar25,uVar41);
        func_0x000109d31b50(&ppppppplStack_2a0,ppppppplVar40);
        FUN_109d88d68(ppppppplVar24);
        func_0x000109d31b50(&ppppppplStack_2a0);
        if ((*(byte *)((long)pppppplVar42 + -0x16) & 1) == 0) {
          bVar27 = 0;
        }
        else {
          pppplVar26 = ***ppppppplVar24 + 0x13e;
          uStack_2e0 = (undefined **)ppppppplVar24;
          FUN_109d897f0(pppplVar26,&uStack_2e0);
          bVar27 = *(byte *)(pppplVar26 + 1) & 0xf;
        }
        func_0x000109d31b50(&ppppppplStack_2a0,bVar27);
        uVar41 = 0;
      }
      FUN_109d4727c(*param_1,7,&ppppppplStack_2a0,uVar41);
      pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
      pppppplVar42 = (long ******)pppppplVar42[1];
    } while (pppppplVar42 != pppppplVar21 + 1);
    pppppplVar21 = param_1[2];
  }
  pppppplVar42 = (long ******)pppppplVar21[4];
  if (pppppplVar42 != pppppplVar21 + 3) {
    ppppppplVar46 = param_1 + 0x13;
    do {
      ppppppplVar24 = (long *******)(pppppplVar42 + -7);
      if ((*(byte *)((long)pppppplVar42 + -0x21) >> 4 & 1) == 0) {
        pppppplVar22 = (long ******)0x0;
        ppppppplVar25 = (long *******)&UNK_10f5fa524;
      }
      else {
        ppppppplVar40 = ppppppplVar24;
        func_0x000109da271c();
        ppppppplVar25 = ppppppplVar40 + 2;
        pppppplVar22 = *ppppppplVar40;
      }
      ppppppplVar40 = param_1;
      FUN_109d48584(param_1,ppppppplVar25,pppppplVar22);
      func_0x000109d31b50(&ppppppplStack_2a0,ppppppplVar40);
      if ((*(byte *)((long)pppppplVar42 + -0x21) >> 4 & 1) == 0) {
        uVar30 = 0;
      }
      else {
        ppppppplVar25 = ppppppplVar24;
        func_0x000109da271c();
        uVar30 = *(undefined4 *)ppppppplVar25;
      }
      func_0x000109d31b50(&ppppppplStack_2a0,uVar30);
      ppppppplVar25 = param_1 + 6;
      FUN_109d48288(ppppppplVar25,pppppplVar42[-4]);
      func_0x000109d31b50(&ppppppplStack_2a0,*(int *)(ppppppplVar25 + 1) + -1);
      func_0x000109d31b50(&ppppppplStack_2a0,*(ushort *)((long)pppppplVar42 + -0x26) >> 4 & 0x3ff);
      if (*(char *)(pppppplVar42 + -5) == '\0') {
        if ((long ******)pppppplVar42[2] != pppppplVar42 + 2) goto LAB_109d3f7d8;
        bVar20 = (*(byte *)((long)pppppplVar42 + -0x15) & 1) == 0;
      }
      else if (*(char *)(pppppplVar42 + -5) == '\x03') {
        bVar20 = (*(uint *)((long)pppppplVar42 + -0x24) & 0x7ffffff) == 0;
      }
      else {
LAB_109d3f7d8:
        bVar20 = false;
      }
      func_0x000109d31b50(&ppppppplStack_2a0,bVar20);
      func_0x000109d31b50(&ppppppplStack_2a0,
                          *(undefined4 *)
                           (&UNK_10e0438e4 + ((ulong)*(uint *)(pppppplVar42 + -3) & 0xf) * 4));
      uStack_2e0 = (undefined **)pppppplVar42[7];
      if ((long *******)uStack_2e0 == (long *******)0x0) {
        uVar30 = 0;
      }
      else {
        ppppppplVar25 = param_1 + 0x2b;
        FUN_109d48754(ppppppplVar25,&uStack_2e0);
        uVar30 = *(undefined4 *)(ppppppplVar25 + 1);
      }
      func_0x000109d31b50(&ppppppplStack_2a0,uVar30);
      iVar55 = 0;
      if ((*(uint *)(pppppplVar42 + -3) >> 0x11 & 0x3f) != 0) {
        iVar55 = ((*(uint *)(pppppplVar42 + -3) >> 0x11 & 0x3f) - 1 & 0xff) + 1;
      }
      func_0x000109d31b50(&ppppppplStack_2a0,iVar55);
      uVar51 = *(uint *)(pppppplVar42 + -3);
      if ((uVar51 >> 0x17 & 1) == 0) {
        uVar30 = 0;
      }
      else {
        pppplVar26 = ***ppppppplVar24 + 0x138;
        uStack_2e0 = (undefined **)ppppppplVar24;
        FUN_109d89ac0(pppplVar26,&uStack_2e0);
        pppppplVar22 = (long ******)pppplVar26[2];
        if ((long ******)0x7ffffffffffffff7 < pppppplVar22) {
          func_0x000104c4f6b8();
          goto LAB_109d42910;
        }
        ppplVar52 = pppplVar26[1];
        if (pppppplVar22 < (long ******)0x17) {
          uStack_5a0 = CONCAT17((char)pppppplVar22,(undefined7)uStack_5a0);
          ppppppplVar40 = (long *******)&ppppppplStack_5b0;
          if (pppppplVar22 != (long ******)0x0) goto LAB_109d3f8dc;
        }
        else {
          ppppppplVar25 = (long *******)0x19;
          if (((ulong)pppppplVar22 | 7) != 0x17) {
            ppppppplVar25 = (long *******)(((ulong)pppppplVar22 | 7) + 1);
          }
          ppppppplVar40 = ppppppplVar25;
          __Znwm();
          uStack_5a0 = (ulong)ppppppplVar25 | 0x8000000000000000;
          ppppppplStack_5b0 = ppppppplVar40;
          pppppplStack_5a8 = pppppplVar22;
LAB_109d3f8dc:
          _memmove(ppppppplVar40,ppplVar52,pppppplVar22);
        }
        *(undefined1 *)((long)ppppppplVar40 + (long)pppppplVar22) = 0;
        ppppppplVar25 = (long *******)&ppppppplStack_500;
        FUN_109d486cc(ppppppplVar25,&ppppppplStack_5b0,&ppppppplStack_5b0);
        uVar30 = *(undefined4 *)(ppppppplVar25 + 7);
      }
      func_0x000109d31b50(&ppppppplStack_2a0,uVar30);
      if (((uVar51 >> 0x17 & 1) != 0) && ((long)uStack_5a0 < 0)) {
        __ZdlPv(ppppppplStack_5b0);
      }
      func_0x000109d31b50(&ppppppplStack_2a0,*(uint *)(pppppplVar42 + -3) >> 4 & 3);
      if ((*(ushort *)((long)pppppplVar42 + -0x26) >> 0xe & 1) == 0) {
        uVar30 = 0;
      }
      else {
        pppplVar26 = ***ppppppplVar24 + 0x14a;
        uStack_2e0 = (undefined **)ppppppplVar24;
        FUN_109d8e414(pppplVar26,&uStack_2e0);
        uStack_2e0 = (undefined **)(pppplVar26 + 1);
        ppppppplVar25 = (long *******)&ppppppplStack_2c0;
        func_0x000107c2af5c(ppppppplVar25,uStack_2e0,&UNK_10dd5b8f9,&uStack_2e0,&pppppplStack_5f8);
        uVar30 = *(undefined4 *)(ppppppplVar25 + 7);
      }
      func_0x000109d31b50(&ppppppplStack_2a0,uVar30);
      func_0x000109d31b50(&ppppppplStack_2a0,
                          *(undefined4 *)
                           (&UNK_10e0438d8 + ((ulong)(*(uint *)(pppppplVar42 + -3) >> 6) & 3) * 4));
      if ((*(ushort *)((long)pppppplVar42 + -0x26) >> 2 & 1) == 0) {
        iVar55 = 0;
      }
      else {
        if ((*(uint *)((long)pppppplVar42 + -0x24) >> 0x1e & 1) == 0) {
          ppppppplVar25 =
               ppppppplVar24 + ((ulong)*(uint *)((long)pppppplVar42 + -0x24) & 0x7ffffff) * -4;
        }
        else {
          ppppppplVar25 = (long *******)pppppplVar42[-8];
        }
        ppppppplVar40 = param_1 + 3;
        FUN_109d51b68(ppppppplVar40,ppppppplVar25[8]);
        iVar55 = (int)ppppppplVar40 + 1;
      }
      func_0x000109d31b50(&ppppppplStack_2a0,iVar55);
      func_0x000109d31b50(&ppppppplStack_2a0,*(uint *)(pppppplVar42 + -3) >> 8 & 3);
      pppppplVar22 = (long ******)pppppplVar42[-1];
      if ((pppppplVar22 == (long ******)0x0) ||
         (ppppppplVar40 = (long *******)*ppppppplVar46, ppppppplVar25 = ppppppplVar46,
         ppppppplVar40 == (long *******)0x0)) {
LAB_109d3fa48:
        uVar30 = 0;
      }
      else {
        do {
          lVar32 = 8;
          if (pppppplVar22 <= ppppppplVar40[4]) {
            lVar32 = 0;
            ppppppplVar25 = ppppppplVar40;
          }
          ppppppplVar40 = *(long ********)((long)ppppppplVar40 + lVar32);
        } while (ppppppplVar40 != (long *******)0x0);
        if ((ppppppplVar25 == ppppppplVar46) || (pppppplVar22 < ppppppplVar25[4]))
        goto LAB_109d3fa48;
        uVar30 = *(undefined4 *)(ppppppplVar25 + 5);
      }
      func_0x000109d31b50(&ppppppplStack_2a0,uVar30);
      if ((*(ushort *)((long)pppppplVar42 + -0x26) >> 1 & 1) == 0) {
        iVar55 = 0;
      }
      else {
        if ((*(uint *)((long)pppppplVar42 + -0x24) >> 0x1e & 1) == 0) {
          ppppppplVar25 =
               ppppppplVar24 + ((ulong)*(uint *)((long)pppppplVar42 + -0x24) & 0x7ffffff) * -4;
        }
        else {
          ppppppplVar25 = (long *******)pppppplVar42[-8];
        }
        ppppppplVar40 = param_1 + 3;
        FUN_109d51b68(ppppppplVar40,ppppppplVar25[4]);
        iVar55 = (int)ppppppplVar40 + 1;
      }
      func_0x000109d31b50(&ppppppplStack_2a0,iVar55);
      if ((*(ushort *)((long)pppppplVar42 + -0x26) >> 3 & 1) == 0) {
        iVar55 = 0;
      }
      else {
        if ((*(uint *)((long)pppppplVar42 + -0x24) >> 0x1e & 1) == 0) {
          ppppppplVar25 =
               ppppppplVar24 + ((ulong)*(uint *)((long)pppppplVar42 + -0x24) & 0x7ffffff) * -4;
        }
        else {
          ppppppplVar25 = (long *******)pppppplVar42[-8];
        }
        ppppppplVar40 = param_1 + 3;
        FUN_109d51b68(ppppppplVar40,*ppppppplVar25);
        iVar55 = (int)ppppppplVar40 + 1;
      }
      func_0x000109d31b50(&ppppppplStack_2a0,iVar55);
      func_0x000109d31b50(&ppppppplStack_2a0,*(uint *)(pppppplVar42 + -3) >> 0xe & 1);
      uVar41 = (ulong)(*(uint *)(*ppppppplVar24 + 1) >> 8);
      func_0x000109d31b50(&ppppppplStack_2a0,uVar41);
      ppppppplVar25 = ppppppplVar24;
      FUN_109d88d68(ppppppplVar24);
      ppppppplVar40 = param_1;
      FUN_109d48584(param_1,ppppppplVar25,uVar41);
      func_0x000109d31b50(&ppppppplStack_2a0,ppppppplVar40);
      FUN_109d88d68(ppppppplVar24);
      func_0x000109d31b50(&ppppppplStack_2a0);
      FUN_109d4727c(*param_1,8,&ppppppplStack_2a0,0);
      pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
      pppppplVar42 = (long ******)pppppplVar42[1];
    } while (pppppplVar42 != pppppplVar21 + 3);
    pppppplVar21 = param_1[2];
  }
  pppppplVar42 = (long ******)pppppplVar21[6];
  if (pppppplVar42 != pppppplVar21 + 5) {
    do {
      pppppplVar22 = pppppplVar42 + -6;
      if ((*(byte *)((long)pppppplVar42 + -0x19) >> 4 & 1) == 0) {
        ppppplVar34 = (long *****)0x0;
        pppppplVar57 = (long ******)&UNK_10f5fa524;
      }
      else {
        pppppplVar47 = pppppplVar22;
        func_0x000109da271c();
        pppppplVar57 = pppppplVar47 + 2;
        ppppplVar34 = *pppppplVar47;
      }
      ppppppplVar46 = param_1;
      FUN_109d48584(param_1,pppppplVar57,ppppplVar34);
      func_0x000109d31b50(&ppppppplStack_2a0,ppppppplVar46);
      if ((*(byte *)((long)pppppplVar42 + -0x19) >> 4 & 1) == 0) {
        uVar30 = 0;
      }
      else {
        pppppplVar47 = pppppplVar22;
        func_0x000109da271c();
        uVar30 = *(undefined4 *)pppppplVar47;
      }
      func_0x000109d31b50(&ppppppplStack_2a0,uVar30);
      ppppppplVar46 = param_1 + 6;
      FUN_109d48288(ppppppplVar46,pppppplVar42[-3]);
      func_0x000109d31b50(&ppppppplStack_2a0,*(int *)(ppppppplVar46 + 1) + -1);
      func_0x000109d31b50(&ppppppplStack_2a0,*(uint *)(*pppppplVar22 + 1) >> 8);
      ppppppplVar46 = param_1 + 3;
      FUN_109d51b68(ppppppplVar46,pppppplVar42[-10]);
      func_0x000109d31b50(&ppppppplStack_2a0,ppppppplVar46);
      func_0x000109d31b50(&ppppppplStack_2a0,
                          *(undefined4 *)
                           (&UNK_10e0438e4 + ((ulong)*(uint *)(pppppplVar42 + -2) & 0xf) * 4));
      func_0x000109d31b50(&ppppppplStack_2a0,*(uint *)(pppppplVar42 + -2) >> 4 & 3);
      func_0x000109d31b50(&ppppppplStack_2a0,*(uint *)(pppppplVar42 + -2) >> 8 & 3);
      func_0x000109d31b50(&ppppppplStack_2a0,*(uint *)(pppppplVar42 + -2) >> 10 & 7);
      func_0x000109d31b50(&ppppppplStack_2a0,
                          *(undefined4 *)
                           (&UNK_10e0438d8 + ((ulong)(*(uint *)(pppppplVar42 + -2) >> 6) & 3) * 4));
      uVar41 = (ulong)(*(uint *)(pppppplVar42 + -2) >> 0xe & 1);
      func_0x000109d31b50(&ppppppplStack_2a0,uVar41);
      pppppplVar47 = pppppplVar22;
      FUN_109d88d68(pppppplVar22);
      ppppppplVar46 = param_1;
      FUN_109d48584(param_1,pppppplVar47,uVar41);
      func_0x000109d31b50(&ppppppplStack_2a0,ppppppplVar46);
      FUN_109d88d68(pppppplVar22);
      func_0x000109d31b50(&ppppppplStack_2a0);
      FUN_109d4727c(*param_1,0xe,&ppppppplStack_2a0,0);
      pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
      pppppplVar42 = (long ******)pppppplVar42[1];
    } while (pppppplVar42 != pppppplVar21 + 5);
    pppppplVar21 = param_1[2];
  }
  pppppplVar42 = (long ******)pppppplVar21[8];
  if (pppppplVar42 != pppppplVar21 + 7) {
    do {
      pppppplVar22 = pppppplVar42 + -7;
      if ((*(byte *)((long)pppppplVar42 + -0x21) >> 4 & 1) == 0) {
        ppppplVar34 = (long *****)0x0;
        pppppplVar57 = (long ******)&UNK_10f5fa524;
      }
      else {
        pppppplVar47 = pppppplVar22;
        func_0x000109da271c();
        pppppplVar57 = pppppplVar47 + 2;
        ppppplVar34 = *pppppplVar47;
      }
      ppppppplVar46 = param_1;
      FUN_109d48584(param_1,pppppplVar57,ppppplVar34);
      func_0x000109d31b50(&ppppppplStack_2a0,ppppppplVar46);
      if ((*(byte *)((long)pppppplVar42 + -0x21) >> 4 & 1) == 0) {
        uVar30 = 0;
      }
      else {
        pppppplVar47 = pppppplVar22;
        func_0x000109da271c();
        uVar30 = *(undefined4 *)pppppplVar47;
      }
      func_0x000109d31b50(&ppppppplStack_2a0,uVar30);
      ppppppplVar46 = param_1 + 6;
      FUN_109d48288(ppppppplVar46,pppppplVar42[-4]);
      func_0x000109d31b50(&ppppppplStack_2a0,*(int *)(ppppppplVar46 + 1) + -1);
      func_0x000109d31b50(&ppppppplStack_2a0,*(uint *)(*pppppplVar22 + 1) >> 8);
      ppppppplVar46 = param_1 + 3;
      FUN_109d51b68(ppppppplVar46,pppppplVar42[-0xb]);
      func_0x000109d31b50(&ppppppplStack_2a0,ppppppplVar46);
      func_0x000109d31b50(&ppppppplStack_2a0,
                          *(undefined4 *)
                           (&UNK_10e0438e4 + ((ulong)*(uint *)(pppppplVar42 + -3) & 0xf) * 4));
      func_0x000109d31b50(&ppppppplStack_2a0,*(uint *)(pppppplVar42 + -3) >> 4 & 3);
      uVar41 = (ulong)(*(uint *)(pppppplVar42 + -3) >> 0xe & 1);
      func_0x000109d31b50(&ppppppplStack_2a0,uVar41);
      pppppplVar47 = pppppplVar22;
      FUN_109d88d68(pppppplVar22);
      ppppppplVar46 = param_1;
      FUN_109d48584(param_1,pppppplVar47,uVar41);
      func_0x000109d31b50(&ppppppplStack_2a0,ppppppplVar46);
      FUN_109d88d68(pppppplVar22);
      func_0x000109d31b50(&ppppppplStack_2a0);
      FUN_109d4727c(*param_1,0x12,&ppppppplStack_2a0,0);
      pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
      pppppplVar42 = (long ******)pppppplVar42[1];
    } while (pppppplVar42 != pppppplVar21 + 7);
  }
  pppppplVar21 = (long ******)0x228;
  __Znwm();
  pppppplVar21[1] = (long *****)0x0;
  pppppplVar21[2] = (long *****)0x0;
  *pppppplVar21 = (long *****)&PTR_FUN_110b40f08;
  pppppplVar21[8] = (long *****)0x0;
  pppppplVar21[7] = (long *****)0x0;
  pppppplVar21[10] = (long *****)0x0;
  pppppplVar21[9] = (long *****)0x0;
  pppppplVar21[0xc] = (long *****)0x0;
  pppppplVar21[0xb] = (long *****)0x0;
  pppppplVar21[0xe] = (long *****)0x0;
  pppppplVar21[0xd] = (long *****)0x0;
  pppppplVar21[0x10] = (long *****)0x0;
  pppppplVar21[0xf] = (long *****)0x0;
  pppppplVar21[0x12] = (long *****)0x0;
  pppppplVar21[0x11] = (long *****)0x0;
  pppppplVar21[0x14] = (long *****)0x0;
  pppppplVar21[0x13] = (long *****)0x0;
  pppppplVar21[0x16] = (long *****)0x0;
  pppppplVar21[0x15] = (long *****)0x0;
  pppppplVar21[0x18] = (long *****)0x0;
  pppppplVar21[0x17] = (long *****)0x0;
  pppppplVar21[0x1a] = (long *****)0x0;
  pppppplVar21[0x19] = (long *****)0x0;
  pppppplVar21[0x1c] = (long *****)0x0;
  pppppplVar21[0x1b] = (long *****)0x0;
  pppppplVar21[0x1e] = (long *****)0x0;
  pppppplVar21[0x1d] = (long *****)0x0;
  pppppplVar21[0x20] = (long *****)0x0;
  pppppplVar21[0x1f] = (long *****)0x0;
  pppppplVar21[6] = (long *****)0x0;
  pppppplVar21[5] = (long *****)0x0;
  pppppplVar21[0x22] = (long *****)0x0;
  pppppplVar21[0x21] = (long *****)0x0;
  pppppplVar21[0x24] = (long *****)0x0;
  pppppplVar21[0x23] = (long *****)0x0;
  pppppplVar21[0x26] = (long *****)0x0;
  pppppplVar21[0x25] = (long *****)0x0;
  pppppplVar21[0x28] = (long *****)0x0;
  pppppplVar21[0x27] = (long *****)0x0;
  pppppplVar21[0x2a] = (long *****)0x0;
  pppppplVar21[0x29] = (long *****)0x0;
  pppppplVar21[0x2c] = (long *****)0x0;
  pppppplVar21[0x2b] = (long *****)0x0;
  pppppplVar21[0x2e] = (long *****)0x0;
  pppppplVar21[0x2d] = (long *****)0x0;
  pppppplVar21[0x30] = (long *****)0x0;
  pppppplVar21[0x2f] = (long *****)0x0;
  pppppplVar21[0x32] = (long *****)0x0;
  pppppplVar21[0x31] = (long *****)0x0;
  pppppplVar21[0x34] = (long *****)0x0;
  pppppplVar21[0x33] = (long *****)0x0;
  pppppplVar21[0x36] = (long *****)0x0;
  pppppplVar21[0x35] = (long *****)0x0;
  pppppplVar21[0x38] = (long *****)0x0;
  pppppplVar21[0x37] = (long *****)0x0;
  pppppplVar21[0x3a] = (long *****)0x0;
  pppppplVar21[0x39] = (long *****)0x0;
  pppppplVar21[0x3c] = (long *****)0x0;
  pppppplVar21[0x3b] = (long *****)0x0;
  pppppplVar21[0x3e] = (long *****)0x0;
  pppppplVar21[0x3d] = (long *****)0x0;
  pppppplVar21[0x40] = (long *****)0x0;
  pppppplVar21[0x3f] = (long *****)0x0;
  pppppplVar21[0x42] = (long *****)0x0;
  pppppplVar21[0x41] = (long *****)0x0;
  pppppplVar21[0x44] = (long *****)0x0;
  pppppplVar21[0x43] = (long *****)0x0;
  pppppplVar42 = pppppplVar21 + 3;
  *pppppplVar42 = (long *****)(pppppplVar21 + 5);
  pppppplVar21[4] = (long *****)0x2000000000;
  uStack_2e0 = (undefined **)pppppplVar42;
  ppppppplStack_2d8 = (long *******)pppppplVar21;
  FUN_109d4444c(pppppplVar42,0xd,0xff);
  FUN_109d4444c(pppppplVar42,0x20,2);
  pppppplVar22 = *param_1;
  ppppppplStack_2d8 = (long *******)0x0;
  uStack_2e0 = (undefined **)0x0;
  pppppplStack_5f8 = pppppplVar42;
  pppppplStack_5f0 = pppppplVar21;
  FUN_109d444b8(pppppplVar22,pppppplVar42);
  FUN_109d4459c(pppppplVar22 + 5,&pppppplStack_5f8);
  pppppplVar21 = pppppplStack_5f0;
  ppppplVar34 = pppppplVar22[5];
  ppppplVar31 = pppppplVar22[6];
  if (pppppplStack_5f0 != (long ******)0x0) {
    pppppplVar42 = pppppplStack_5f0 + 1;
    do {
      ppppplVar35 = *pppppplVar42;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
      if (bVar20) {
        *pppppplVar42 = (long *****)((long)ppppplVar35 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar35 == (long *****)0x0) {
      (*(code *)(*pppppplStack_5f0)[2])(pppppplStack_5f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  pppppplStack_2e8 = (long ******)0x0;
  pppppplStack_2f0 = (long ******)0xd;
  FUN_109d478e0(*param_1,(int)((ulong)((long)ppppplVar31 - (long)ppppplVar34) >> 4) + 3,
                &pppppplStack_2f0,2,0,0,0);
  pppppplVar21 = *param_1;
  FUN_109d449c0();
  ppppppplVar46 = ppppppplStack_2d8;
  param_1[0x43] = pppppplVar21 + -4;
  if (ppppppplStack_2d8 != (long *******)0x0) {
    ppppppplVar24 = ppppppplStack_2d8 + 1;
    do {
      pppppplVar21 = *ppppppplVar24;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(ppppppplVar24,0x10);
      if (bVar20) {
        *ppppppplVar24 = (long ******)((long)pppppplVar21 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (pppppplVar21 == (long ******)0x0) {
      (*(code *)(*ppppppplStack_2d8)[2])(ppppppplStack_2d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
    }
  }
  if (ppppppplStack_2a0 != ppppppplStack_608) {
    _free();
  }
  FUN_109d4882c(&ppppppplStack_2c0,ppppppplStack_2b8);
  FUN_109d4882c(&ppppppplStack_500,ppppppplStack_4f8);
  uVar39 = (long)param_1[0x10] - (long)param_1[0xf];
  uVar41 = uVar39 >> 4;
  if ((int)uVar41 != 0) {
    uVar28 = 0;
    pppppplVar21 = param_1[0xf];
    do {
      if (3 < *(byte *)(*pppppplVar21 + 2)) {
        FUN_109d4887c(param_1,uVar28,uVar41,1);
        break;
      }
      uVar28 = uVar28 + 1;
      pppppplVar21 = pppppplVar21 + 2;
    } while ((uVar39 >> 4 & 0xffffffff) != uVar28);
  }
  pppppplStack_298 = (long ******)0x4000000000;
  ppppppplStack_4f8 = (long *******)0x800000000;
  ppppppplStack_500 = apppppplStack_4f0;
  ppppppplStack_2a0 = (long *******)&uStack_290;
  func_0x000109d8de94(*param_1[2],&ppppppplStack_500);
  if ((int)ppppppplStack_4f8 != 0) {
    FUN_109d3b6e4(*param_1,0x16,3);
    uVar41 = (ulong)ppppppplStack_4f8 & 0xffffffff;
    if ((int)ppppppplStack_4f8 != 0) {
      lVar32 = 0;
      uVar39 = 0;
      do {
        FUN_109d38988(&ppppppplStack_2a0,uVar39);
        lVar58 = *(long *)((long)ppppppplStack_500 + lVar32);
        FUN_109d48390(&ppppppplStack_2a0,lVar58,
                      lVar58 + ((long *)((long)ppppppplStack_500 + lVar32))[1]);
        FUN_109d481c4(*param_1,6,&ppppppplStack_2a0,0);
        pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
        uVar39 = uVar39 + 1;
        lVar32 = lVar32 + 0x10;
      } while (uVar41 != uVar39);
    }
    FUN_109d3b86c(*param_1);
  }
  if (ppppppplStack_500 != apppppplStack_4f0) {
    _free();
  }
  if (ppppppplStack_2a0 != (long *******)&uStack_290) {
    _free();
  }
  if (((ulong)*(uint *)((long)param_1 + 0x1dc) <
       (ulong)((long)param_1[0x19] - (long)param_1[0x18] >> 3)) ||
     ((long ******)param_1[2][9] != param_1[2] + 9)) {
    FUN_109d3b6e4(*param_1,0xf,4);
    pppppplStack_298 = (long ******)0x4000000000;
    ppppppplStack_2b8 = (long *******)0x0;
    ppppppplStack_2c0 = (long *******)0x0;
    pppplStack_2b0 = (long ****)0x0;
    ppppppplStack_2a0 = (long *******)&uStack_290;
    func_0x0001074287b0(&ppppppplStack_2c0,0x20);
    ppppppplVar46 = param_1;
    FUN_109d49f2c();
    *(int *)((long)ppppppplStack_2c0 + 4) = (int)ppppppplVar46;
    ppppppplVar46 = param_1;
    FUN_109d4a140();
    *(int *)(ppppppplStack_2c0 + 2) = (int)ppppppplVar46;
    pppppplVar21 = (long ******)0x228;
    __Znwm();
    pppppplVar21[1] = (long *****)0x0;
    pppppplVar21[2] = (long *****)0x0;
    *pppppplVar21 = (long *****)&PTR_FUN_110b40f08;
    pppppplVar21[8] = (long *****)0x0;
    pppppplVar21[7] = (long *****)0x0;
    pppppplVar21[10] = (long *****)0x0;
    pppppplVar21[9] = (long *****)0x0;
    pppppplVar21[0xc] = (long *****)0x0;
    pppppplVar21[0xb] = (long *****)0x0;
    pppppplVar21[0xe] = (long *****)0x0;
    pppppplVar21[0xd] = (long *****)0x0;
    pppppplVar21[0x10] = (long *****)0x0;
    pppppplVar21[0xf] = (long *****)0x0;
    pppppplVar21[0x12] = (long *****)0x0;
    pppppplVar21[0x11] = (long *****)0x0;
    pppppplVar21[0x14] = (long *****)0x0;
    pppppplVar21[0x13] = (long *****)0x0;
    pppppplVar21[0x16] = (long *****)0x0;
    pppppplVar21[0x15] = (long *****)0x0;
    pppppplVar21[0x18] = (long *****)0x0;
    pppppplVar21[0x17] = (long *****)0x0;
    pppppplVar21[0x1a] = (long *****)0x0;
    pppppplVar21[0x19] = (long *****)0x0;
    pppppplVar21[0x1c] = (long *****)0x0;
    pppppplVar21[0x1b] = (long *****)0x0;
    pppppplVar21[0x1e] = (long *****)0x0;
    pppppplVar21[0x1d] = (long *****)0x0;
    pppppplVar21[0x20] = (long *****)0x0;
    pppppplVar21[0x1f] = (long *****)0x0;
    pppppplVar21[6] = (long *****)0x0;
    pppppplVar21[5] = (long *****)0x0;
    pppppplVar21[0x22] = (long *****)0x0;
    pppppplVar21[0x21] = (long *****)0x0;
    pppppplVar21[0x24] = (long *****)0x0;
    pppppplVar21[0x23] = (long *****)0x0;
    pppppplVar21[0x26] = (long *****)0x0;
    pppppplVar21[0x25] = (long *****)0x0;
    pppppplVar21[0x28] = (long *****)0x0;
    pppppplVar21[0x27] = (long *****)0x0;
    pppppplVar21[0x2a] = (long *****)0x0;
    pppppplVar21[0x29] = (long *****)0x0;
    pppppplVar21[0x2c] = (long *****)0x0;
    pppppplVar21[0x2b] = (long *****)0x0;
    pppppplVar21[0x2e] = (long *****)0x0;
    pppppplVar21[0x2d] = (long *****)0x0;
    pppppplVar21[0x30] = (long *****)0x0;
    pppppplVar21[0x2f] = (long *****)0x0;
    pppppplVar21[0x32] = (long *****)0x0;
    pppppplVar21[0x31] = (long *****)0x0;
    pppppplVar21[0x34] = (long *****)0x0;
    pppppplVar21[0x33] = (long *****)0x0;
    pppppplVar21[0x36] = (long *****)0x0;
    pppppplVar21[0x35] = (long *****)0x0;
    pppppplVar21[0x38] = (long *****)0x0;
    pppppplVar21[0x37] = (long *****)0x0;
    pppppplVar21[0x3a] = (long *****)0x0;
    pppppplVar21[0x39] = (long *****)0x0;
    pppppplVar21[0x3c] = (long *****)0x0;
    pppppplVar21[0x3b] = (long *****)0x0;
    pppppplVar21[0x3e] = (long *****)0x0;
    pppppplVar21[0x3d] = (long *****)0x0;
    pppppplVar21[0x40] = (long *****)0x0;
    pppppplVar21[0x3f] = (long *****)0x0;
    pppppplVar21[0x42] = (long *****)0x0;
    pppppplVar21[0x41] = (long *****)0x0;
    pppppplVar21[0x44] = (long *****)0x0;
    pppppplVar21[0x43] = (long *****)0x0;
    pppppplVar42 = pppppplVar21 + 3;
    *pppppplVar42 = (long *****)(pppppplVar21 + 5);
    pppppplVar21[4] = (long *****)0x2000000000;
    pppppplStack_2f0 = pppppplVar42;
    pppppplStack_2e8 = pppppplVar21;
    FUN_109d4444c(pppppplVar42,0x26,0xff);
    FUN_109d4444c(pppppplVar42,0x20,2);
    FUN_109d4444c(pppppplVar42,0x20,2);
    pppppplVar22 = *param_1;
    pppppplStack_2e8 = (long ******)0x0;
    pppppplStack_2f0 = (long ******)0x0;
    pppppplStack_510 = pppppplVar42;
    pppppplStack_508 = pppppplVar21;
    FUN_109d444b8(pppppplVar22,pppppplVar42);
    FUN_109d4459c(pppppplVar22 + 5,&pppppplStack_510);
    pppppplVar21 = pppppplStack_508;
    ppppplVar34 = pppppplVar22[5];
    ppppplVar31 = pppppplVar22[6];
    if (pppppplStack_508 != (long ******)0x0) {
      pppppplVar42 = pppppplStack_508 + 1;
      do {
        ppppplVar35 = *pppppplVar42;
        cVar17 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
        if (bVar20) {
          *pppppplVar42 = (long *****)((long)ppppplVar35 + -1);
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      if (ppppplVar35 == (long *****)0x0) {
        (*(code *)(*pppppplStack_508)[2])(pppppplStack_508);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
      }
    }
    pppppplVar42 = (long ******)0x228;
    __Znwm();
    pppppplVar21 = pppppplStack_2e8;
    pppppplVar42[1] = (long *****)0x0;
    pppppplVar42[2] = (long *****)0x0;
    *pppppplVar42 = (long *****)&PTR_FUN_110b40f08;
    pppppplVar42[8] = (long *****)0x0;
    pppppplVar42[7] = (long *****)0x0;
    pppppplVar42[10] = (long *****)0x0;
    pppppplVar42[9] = (long *****)0x0;
    pppppplVar42[0xc] = (long *****)0x0;
    pppppplVar42[0xb] = (long *****)0x0;
    pppppplVar42[0xe] = (long *****)0x0;
    pppppplVar42[0xd] = (long *****)0x0;
    pppppplVar42[0x10] = (long *****)0x0;
    pppppplVar42[0xf] = (long *****)0x0;
    pppppplVar42[0x12] = (long *****)0x0;
    pppppplVar42[0x11] = (long *****)0x0;
    pppppplVar42[0x14] = (long *****)0x0;
    pppppplVar42[0x13] = (long *****)0x0;
    pppppplVar42[0x16] = (long *****)0x0;
    pppppplVar42[0x15] = (long *****)0x0;
    pppppplVar42[0x18] = (long *****)0x0;
    pppppplVar42[0x17] = (long *****)0x0;
    pppppplVar42[0x1a] = (long *****)0x0;
    pppppplVar42[0x19] = (long *****)0x0;
    pppppplVar42[0x1c] = (long *****)0x0;
    pppppplVar42[0x1b] = (long *****)0x0;
    pppppplVar42[0x1e] = (long *****)0x0;
    pppppplVar42[0x1d] = (long *****)0x0;
    pppppplVar42[0x20] = (long *****)0x0;
    pppppplVar42[0x1f] = (long *****)0x0;
    pppppplVar42[6] = (long *****)0x0;
    pppppplVar42[5] = (long *****)0x0;
    pppppplVar42[0x22] = (long *****)0x0;
    pppppplVar42[0x21] = (long *****)0x0;
    pppppplVar42[0x24] = (long *****)0x0;
    pppppplVar42[0x23] = (long *****)0x0;
    pppppplVar42[0x26] = (long *****)0x0;
    pppppplVar42[0x25] = (long *****)0x0;
    pppppplVar42[0x28] = (long *****)0x0;
    pppppplVar42[0x27] = (long *****)0x0;
    pppppplVar42[0x2a] = (long *****)0x0;
    pppppplVar42[0x29] = (long *****)0x0;
    pppppplVar42[0x2c] = (long *****)0x0;
    pppppplVar42[0x2b] = (long *****)0x0;
    pppppplVar42[0x2e] = (long *****)0x0;
    pppppplVar42[0x2d] = (long *****)0x0;
    pppppplVar42[0x30] = (long *****)0x0;
    pppppplVar42[0x2f] = (long *****)0x0;
    pppppplVar42[0x32] = (long *****)0x0;
    pppppplVar42[0x31] = (long *****)0x0;
    pppppplVar42[0x34] = (long *****)0x0;
    pppppplVar42[0x33] = (long *****)0x0;
    pppppplVar42[0x36] = (long *****)0x0;
    pppppplVar42[0x35] = (long *****)0x0;
    pppppplVar42[0x38] = (long *****)0x0;
    pppppplVar42[0x37] = (long *****)0x0;
    pppppplVar42[0x3a] = (long *****)0x0;
    pppppplVar42[0x39] = (long *****)0x0;
    pppppplVar42[0x3c] = (long *****)0x0;
    pppppplVar42[0x3b] = (long *****)0x0;
    pppppplVar42[0x3e] = (long *****)0x0;
    pppppplVar42[0x3d] = (long *****)0x0;
    pppppplVar42[0x40] = (long *****)0x0;
    pppppplVar42[0x3f] = (long *****)0x0;
    pppppplVar42[0x42] = (long *****)0x0;
    pppppplVar42[0x41] = (long *****)0x0;
    pppppplVar42[0x44] = (long *****)0x0;
    pppppplVar42[0x43] = (long *****)0x0;
    pppppplStack_2f0 = pppppplVar42 + 3;
    *pppppplStack_2f0 = (long *****)(pppppplVar42 + 5);
    pppppplVar42[4] = (long *****)0x2000000000;
    if (pppppplStack_2e8 != (long ******)0x0) {
      plVar23 = (long *)(pppppplStack_2e8 + 1);
      do {
        lVar32 = *plVar23;
        cVar17 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar20) {
          *plVar23 = lVar32 + -1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      if (lVar32 == 0) {
        lVar32 = (long)*pppppplStack_2e8;
        pppppplStack_2e8 = pppppplVar42;
        (**(code **)(lVar32 + 0x10))(pppppplVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
        pppppplVar42 = pppppplStack_2e8;
      }
    }
    pppppplStack_2e8 = pppppplVar42;
    pppppplVar21 = pppppplStack_2f0;
    FUN_109d4444c(pppppplStack_2f0,0x27,0xff);
    FUN_109d4444c(pppppplVar21,0,6);
    FUN_109d4444c(pppppplVar21,6,4);
    pppppplVar42 = *param_1;
    pppppplStack_520 = pppppplVar21;
    plStack_518 = (long *)pppppplStack_2e8;
    pppppplStack_2e8 = (long ******)0x0;
    pppppplStack_2f0 = (long ******)0x0;
    FUN_109d444b8(pppppplVar42,pppppplVar21);
    FUN_109d4459c(pppppplVar42 + 5,&pppppplStack_520);
    plVar23 = plStack_518;
    ppppplVar35 = pppppplVar42[5];
    ppppplVar38 = pppppplVar42[6];
    if (plStack_518 != (long *)0x0) {
      plVar49 = plStack_518 + 1;
      do {
        lVar32 = *plVar49;
        cVar17 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
        if (bVar20) {
          *plVar49 = lVar32 + -1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plStack_518 + 0x10))(plStack_518);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
    FUN_109d4a354(param_1,param_1[0x18] + *(uint *)((long)param_1 + 0x1dc),
                  *(undefined4 *)(param_1 + 0x3c),&ppppppplStack_2a0);
    if ((ulong)uRam00000001137e5d28 <
        ((long)param_1[0x19] - (long)param_1[0x18] >> 3) -
        ((ulong)*(uint *)(param_1 + 0x3c) + (ulong)*(uint *)((long)param_1 + 0x1dc))) {
      ppppppplStack_500 = (long *******)0x0;
      ppppppplStack_4f8 = (long *******)0x0;
      FUN_109d4a6bc(*param_1,0x26,&ppppppplStack_500,
                    (int)((ulong)((long)ppppplVar31 - (long)ppppplVar34) >> 4) + 3);
    }
    pppppplVar21 = *param_1;
    FUN_109d449c0();
    ppppppplStack_2d8 = (long *******)0x0;
    uStack_2e0 = (undefined **)0x0;
    ppplStack_2d0 = (long ***)0x0;
    func_0x000107c28300(&uStack_2e0,
                        ((long)param_1[0x19] - (long)param_1[0x18] >> 3) -
                        ((ulong)*(uint *)(param_1 + 0x3c) + (ulong)*(uint *)((long)param_1 + 0x1dc))
                       );
    FUN_109d4a76c(param_1,param_1[0x18] +
                          (ulong)*(uint *)((long)param_1 + 0x1dc) + (ulong)*(uint *)(param_1 + 0x3c)
                  ,((long)param_1[0x19] - (long)param_1[0x18] >> 3) -
                   ((ulong)*(uint *)(param_1 + 0x3c) + (ulong)*(uint *)((long)param_1 + 0x1dc)),
                  &ppppppplStack_2a0,&ppppppplStack_2c0,&uStack_2e0);
    if ((ulong)uRam00000001137e5d28 <
        ((long)param_1[0x19] - (long)param_1[0x18] >> 3) -
        ((ulong)*(uint *)(param_1 + 0x3c) + (ulong)*(uint *)((long)param_1 + 0x1dc))) {
      pppppplVar22 = *param_1;
      pppppplVar42 = pppppplVar22;
      FUN_109d449c0(pppppplVar22);
      FUN_109d44718(pppppplVar22,pppppplVar21 + -8,(long)pppppplVar42 - (long)pppppplVar21);
      FUN_109d44718(pppppplVar22,pppppplVar21 + -4,
                    (ulong)((long)pppppplVar42 - (long)pppppplVar21) >> 0x20);
      for (ppppppplVar46 = (long *******)uStack_2e0; ppppppplVar46 != ppppppplStack_2d8;
          ppppppplVar46 = ppppppplVar46 + 1) {
        pppppplVar42 = *ppppppplVar46;
        *ppppppplVar46 = (long ******)((long)pppppplVar42 - (long)pppppplVar21);
        pppppplVar21 = pppppplVar42;
      }
      FUN_109d4af04(*param_1,0x27,&uStack_2e0,
                    (int)((ulong)((long)ppppplVar38 - (long)ppppplVar35) >> 4) + 3);
      ppppppplStack_2d8 = (long *******)uStack_2e0;
    }
    pppppplVar21 = param_1[2];
    if ((long ******)pppppplVar21[9] != pppppplVar21 + 9) {
      pppppplVar21 = (long ******)0x228;
      __Znwm();
      pppppplVar21[1] = (long *****)0x0;
      pppppplVar21[2] = (long *****)0x0;
      *pppppplVar21 = (long *****)&PTR_FUN_110b40f08;
      pppppplVar21[8] = (long *****)0x0;
      pppppplVar21[7] = (long *****)0x0;
      pppppplVar21[10] = (long *****)0x0;
      pppppplVar21[9] = (long *****)0x0;
      pppppplVar21[0xc] = (long *****)0x0;
      pppppplVar21[0xb] = (long *****)0x0;
      pppppplVar21[0xe] = (long *****)0x0;
      pppppplVar21[0xd] = (long *****)0x0;
      pppppplVar21[0x10] = (long *****)0x0;
      pppppplVar21[0xf] = (long *****)0x0;
      pppppplVar21[0x12] = (long *****)0x0;
      pppppplVar21[0x11] = (long *****)0x0;
      pppppplVar21[0x14] = (long *****)0x0;
      pppppplVar21[0x13] = (long *****)0x0;
      pppppplVar21[0x16] = (long *****)0x0;
      pppppplVar21[0x15] = (long *****)0x0;
      pppppplVar21[0x18] = (long *****)0x0;
      pppppplVar21[0x17] = (long *****)0x0;
      pppppplVar21[0x1a] = (long *****)0x0;
      pppppplVar21[0x19] = (long *****)0x0;
      pppppplVar21[0x1c] = (long *****)0x0;
      pppppplVar21[0x1b] = (long *****)0x0;
      pppppplVar21[0x1e] = (long *****)0x0;
      pppppplVar21[0x1d] = (long *****)0x0;
      pppppplVar21[0x20] = (long *****)0x0;
      pppppplVar21[0x1f] = (long *****)0x0;
      pppppplVar21[6] = (long *****)0x0;
      pppppplVar21[5] = (long *****)0x0;
      pppppplVar21[0x22] = (long *****)0x0;
      pppppplVar21[0x21] = (long *****)0x0;
      pppppplVar21[0x24] = (long *****)0x0;
      pppppplVar21[0x23] = (long *****)0x0;
      pppppplVar21[0x26] = (long *****)0x0;
      pppppplVar21[0x25] = (long *****)0x0;
      pppppplVar21[0x28] = (long *****)0x0;
      pppppplVar21[0x27] = (long *****)0x0;
      pppppplVar21[0x2a] = (long *****)0x0;
      pppppplVar21[0x29] = (long *****)0x0;
      pppppplVar21[0x2c] = (long *****)0x0;
      pppppplVar21[0x2b] = (long *****)0x0;
      pppppplVar21[0x2e] = (long *****)0x0;
      pppppplVar21[0x2d] = (long *****)0x0;
      pppppplVar21[0x30] = (long *****)0x0;
      pppppplVar21[0x2f] = (long *****)0x0;
      pppppplVar21[0x32] = (long *****)0x0;
      pppppplVar21[0x31] = (long *****)0x0;
      pppppplVar21[0x34] = (long *****)0x0;
      pppppplVar21[0x33] = (long *****)0x0;
      pppppplVar21[0x36] = (long *****)0x0;
      pppppplVar21[0x35] = (long *****)0x0;
      pppppplVar21[0x38] = (long *****)0x0;
      pppppplVar21[0x37] = (long *****)0x0;
      pppppplVar21[0x3a] = (long *****)0x0;
      pppppplVar21[0x39] = (long *****)0x0;
      pppppplVar21[0x3c] = (long *****)0x0;
      pppppplVar21[0x3b] = (long *****)0x0;
      pppppplVar21[0x3e] = (long *****)0x0;
      pppppplVar21[0x3d] = (long *****)0x0;
      pppppplVar21[0x40] = (long *****)0x0;
      pppppplVar21[0x3f] = (long *****)0x0;
      pppppplVar21[0x42] = (long *****)0x0;
      pppppplVar21[0x41] = (long *****)0x0;
      pppppplVar21[0x44] = (long *****)0x0;
      pppppplVar21[0x43] = (long *****)0x0;
      pppppplVar42 = pppppplVar21 + 3;
      *pppppplVar42 = (long *****)(pppppplVar21 + 5);
      pppppplVar21[4] = (long *****)0x2000000000;
      ppppppplStack_500 = (long *******)pppppplVar42;
      ppppppplStack_4f8 = (long *******)pppppplVar21;
      FUN_109d4444c(pppppplVar42,4,0xff);
      FUN_109d4444c(pppppplVar42,0,6);
      FUN_109d4444c(pppppplVar42,8,2);
      pppppplVar22 = *param_1;
      ppppppplStack_500 = (long *******)0x0;
      ppppppplStack_4f8 = (long *******)0x0;
      pppppplStack_5f8 = pppppplVar42;
      pppppplStack_5f0 = pppppplVar21;
      FUN_109d444b8(pppppplVar22,pppppplVar42);
      FUN_109d4459c(pppppplVar22 + 5,&pppppplStack_5f8);
      pppppplVar21 = pppppplStack_5f0;
      ppppplVar34 = pppppplVar22[5];
      ppppplVar31 = pppppplVar22[6];
      if (pppppplStack_5f0 != (long ******)0x0) {
        pppppplVar42 = pppppplStack_5f0 + 1;
        do {
          ppppplVar35 = *pppppplVar42;
          cVar17 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
          if (bVar20) {
            *pppppplVar42 = (long *****)((long)ppppplVar35 + -1);
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (ppppplVar35 == (long *****)0x0) {
          (*(code *)(*pppppplStack_5f0)[2])(pppppplStack_5f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
        }
      }
      ppppppplVar46 = ppppppplStack_4f8;
      if (ppppppplStack_4f8 != (long *******)0x0) {
        pppppplVar21 = (long ******)(ppppppplStack_4f8 + 1);
        do {
          ppppplVar35 = *pppppplVar21;
          cVar17 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
          if (bVar20) {
            *pppppplVar21 = (long *****)((long)ppppplVar35 + -1);
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (ppppplVar35 == (long *****)0x0) {
          (*(code *)(*ppppppplStack_4f8)[2])(ppppppplStack_4f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
        }
      }
      pppppplVar21 = param_1[2];
      pppppplVar42 = (long ******)pppppplVar21[10];
      if (pppppplVar42 != pppppplVar21 + 9) {
        do {
          cVar17 = *(char *)((long)pppppplVar42 + 0x27);
          pppppplVar22 = (long ******)pppppplVar42[2];
          if (-1 < (long)cVar17) {
            pppppplVar22 = pppppplVar42 + 2;
          }
          ppppplVar35 = pppppplVar42[3];
          if (-1 < cVar17) {
            ppppplVar35 = (long *****)(long)cVar17;
          }
          FUN_109d4e8a4(&ppppppplStack_2a0,pppppplVar22,(long)pppppplVar22 + (long)ppppplVar35);
          FUN_109d4e748(*param_1,4,&ppppppplStack_2a0,
                        (int)((ulong)((long)ppppplVar31 - (long)ppppplVar34) >> 4) + 3);
          pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
          uVar51 = *(uint *)(pppppplVar42[6] + 1);
          if (uVar51 != 0) {
            lVar32 = 0;
            do {
              ppppppplStack_500 = *(long ********)((long)*pppppplVar42[6] + lVar32);
              ppppppplVar46 = param_1 + 0x1e;
              FUN_109d4e80c(ppppppplVar46,&ppppppplStack_500,&pppppplStack_5f8);
              if ((int)ppppppplVar46 == 0) {
                iVar55 = -1;
              }
              else {
                iVar55 = *(int *)((long)pppppplStack_5f8 + 0xc) + -1;
              }
              FUN_109d38988(&ppppppplStack_2a0,iVar55);
              lVar32 = lVar32 + 8;
            } while ((ulong)uVar51 * 8 - lVar32 != 0);
          }
          FUN_109d4e748(*param_1,10,&ppppppplStack_2a0,0);
          pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
          pppppplVar42 = (long ******)pppppplVar42[1];
        } while (pppppplVar42 != pppppplVar21 + 9);
        pppppplVar21 = param_1[2];
      }
    }
    pppppplVar42 = (long ******)pppppplVar21[4];
    if (pppppplVar42 != pppppplVar21 + 3) {
      do {
        if (*(char *)(pppppplVar42 + -5) == '\0') {
          if (((long ******)pppppplVar42[2] == pppppplVar42 + 2) &&
             ((*(byte *)((long)pppppplVar42 + -0x15) & 1) == 0)) {
            uVar51 = *(uint *)((long)pppppplVar42 + -0x24);
            goto joined_r0x000109d40868;
          }
        }
        else if ((*(char *)(pppppplVar42 + -5) == '\x03') &&
                (uVar51 = *(uint *)((long)pppppplVar42 + -0x24), (uVar51 & 0x7ffffff) == 0)) {
joined_r0x000109d40868:
          if ((uVar51 >> 0x1d & 1) != 0) {
            ppppppplStack_4f8 = (long *******)0x400000000;
            ppppppplVar46 = param_1 + 3;
            ppppppplStack_500 = apppppplStack_4f0;
            FUN_109d51b68(ppppppplVar46,pppppplVar42 + -7);
            FUN_109d38988(&ppppppplStack_500,(ulong)ppppppplVar46 & 0xffffffff);
            FUN_109d4e920(param_1,&ppppppplStack_500,pppppplVar42 + -7);
            FUN_109d4ea3c(*param_1,&ppppppplStack_500);
            if (ppppppplStack_500 != apppppplStack_4f0) {
              _free();
            }
          }
        }
        pppppplVar42 = (long ******)pppppplVar42[1];
      } while (pppppplVar42 != pppppplVar21 + 3);
      pppppplVar21 = param_1[2];
    }
    pppppplVar42 = (long ******)pppppplVar21[2];
    if (pppppplVar42 != pppppplVar21 + 1) {
      do {
        if ((*(byte *)((long)pppppplVar42 + -0x21) >> 5 & 1) != 0) {
          ppppppplStack_4f8 = (long *******)0x400000000;
          ppppppplVar46 = param_1 + 3;
          ppppppplStack_500 = apppppplStack_4f0;
          FUN_109d51b68(ppppppplVar46,pppppplVar42 + -7);
          FUN_109d38988(&ppppppplStack_500,(ulong)ppppppplVar46 & 0xffffffff);
          FUN_109d4e920(param_1,&ppppppplStack_500,pppppplVar42 + -7);
          FUN_109d4ea3c(*param_1,&ppppppplStack_500);
          if (ppppppplStack_500 != apppppplStack_4f0) {
            _free();
          }
        }
        pppppplVar42 = (long ******)pppppplVar42[1];
      } while (pppppplVar42 != pppppplVar21 + 1);
    }
    FUN_109d3b86c(*param_1);
    if ((long *******)uStack_2e0 != (long *******)0x0) {
      ppppppplStack_2d8 = (long *******)uStack_2e0;
      __ZdlPv();
    }
    pppppplVar21 = pppppplStack_2e8;
    if (pppppplStack_2e8 != (long ******)0x0) {
      pppppplVar42 = pppppplStack_2e8 + 1;
      do {
        ppppplVar34 = *pppppplVar42;
        cVar17 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
        if (bVar20) {
          *pppppplVar42 = (long *****)((long)ppppplVar34 + -1);
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      if (ppppplVar34 == (long *****)0x0) {
        (*(code *)(*pppppplStack_2e8)[2])(pppppplStack_2e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
      }
    }
    if (ppppppplStack_2c0 != (long *******)0x0) {
      ppppppplStack_2b8 = ppppppplStack_2c0;
      __ZdlPv();
    }
    if (ppppppplStack_2a0 != (long *******)&uStack_290) {
      _free();
    }
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    FUN_109d44c4c(param_1,0);
  }
  ppppppplStack_4f8 = (long *******)0x800000000;
  ppppppplStack_500 = apppppplStack_4f0;
  FUN_109d92588(**param_1[2],&ppppppplStack_500);
  if ((int)ppppppplStack_4f8 != 0) {
    FUN_109d3b6e4(*param_1,0x15,3);
    pppppplStack_298 = (long ******)0x4000000000;
    ppppppplStack_2a0 = (long *******)&uStack_290;
    if ((int)ppppppplStack_4f8 != 0) {
      pppppplVar21 = (long ******)(ppppppplStack_500 + ((ulong)ppppppplStack_4f8 & 0xffffffff) * 2);
      ppppppplVar46 = ppppppplStack_500;
      do {
        pppppplVar42 = (long ******)(ppppppplVar46 + 2);
        FUN_109d48390(&ppppppplStack_2a0,*ppppppplVar46,
                      (long)*ppppppplVar46 + (long)ppppppplVar46[1]);
        FUN_109d481c4(*param_1,1,&ppppppplStack_2a0,0);
        pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
        ppppppplVar46 = (long *******)pppppplVar42;
      } while (pppppplVar42 != pppppplVar21);
    }
    FUN_109d3b86c(*param_1);
    if (ppppppplStack_2a0 != (long *******)&uStack_290) {
      _free();
    }
  }
  if (ppppppplStack_500 != apppppplStack_4f0) {
    _free();
  }
  ppppppplStack_4f8 = (long *******)0x800000000;
  ppppppplStack_500 = apppppplStack_4f0;
  func_0x000109d92620(**param_1[2],&ppppppplStack_500);
  if ((int)ppppppplStack_4f8 != 0) {
    FUN_109d3b6e4(*param_1,0x1a,2);
    pppppplStack_298 = (long ******)0x4000000000;
    ppppppplStack_2a0 = (long *******)&uStack_290;
    if ((int)ppppppplStack_4f8 != 0) {
      ppppppplVar46 = ppppppplStack_500 + ((ulong)ppppppplStack_4f8 & 0xffffffff) * 2;
      ppppppplVar24 = ppppppplStack_500;
      do {
        ppppppplVar25 = ppppppplVar24 + 2;
        FUN_109d48390(&ppppppplStack_2a0,*ppppppplVar24,
                      (long)*ppppppplVar24 + (long)ppppppplVar24[1]);
        FUN_109d481c4(*param_1,1,&ppppppplStack_2a0,0);
        pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
        ppppppplVar24 = ppppppplVar25;
      } while (ppppppplVar25 != ppppppplVar46);
    }
    FUN_109d3b86c(*param_1);
    if (ppppppplStack_2a0 != (long *******)&uStack_290) {
      _free();
    }
  }
  if (ppppppplStack_500 != apppppplStack_4f0) {
    _free();
  }
  pppppplStack_5f8 = (long ******)0x0;
  pppppplStack_5f0 = (long ******)0x0;
  uStack_5e8 = 0;
  pppppplVar21 = param_1[2];
  for (pppppplVar42 = (long ******)pppppplVar21[4]; pppppplVar42 != pppppplVar21 + 3;
      pppppplVar42 = (long ******)pppppplVar42[1]) {
    if (*(char *)(pppppplVar42 + -5) == '\0') {
      if (((long ******)pppppplVar42[2] != pppppplVar42 + 2) ||
         ((*(byte *)((long)pppppplVar42 + -0x15) & 1) != 0)) goto LAB_109d40b90;
    }
    else if ((*(char *)(pppppplVar42 + -5) != '\x03') ||
            ((*(uint *)((long)pppppplVar42 + -0x24) & 0x7ffffff) != 0)) {
LAB_109d40b90:
      FUN_109d44e28(param_1,pppppplVar42 + -7,&pppppplStack_5f8);
    }
  }
  if (param_1[0x3e] != (long ******)0x0) {
    pppppplVar21 = param_1[2];
    FUN_109d9d8c0(pppppplVar21,&UNK_10f5af255,7);
    if ((pppppplVar21 == (long ******)0x0) ||
       (ppppplVar34 = pppppplVar21[0x10], ppppplVar34 == (long *****)0x0)) {
      uVar30 = 0x14;
    }
    else {
      ppppplVar31 = ppppplVar34 + 3;
      if (0x40 < *(uint *)(ppppplVar34 + 4)) {
        ppppplVar31 = (long *****)*ppppplVar31;
      }
      uVar30 = 0x18;
      if (*ppppplVar31 != (long ****)0x0) {
        uVar30 = 0x14;
      }
    }
    FUN_109d3b6e4(*param_1,uVar30,4);
    ppppppplStack_2a0 = (long *******)0x9;
    func_0x000109d47864(*param_1,10,&ppppppplStack_2a0,1);
    ppppppplStack_2a0 = (long *******)((ulong)*(byte *)((long)param_1[0x3e] + 0x7f) << 3);
    func_0x000109d47864(*param_1,0x14,&ppppppplStack_2a0,1);
    pppppplVar21 = param_1[0x3e];
    if ((long ******)*pppppplVar21 == pppppplVar21 + 1) {
      FUN_109d3b86c(*param_1);
    }
    else {
      ppppppplVar46 = (long *******)param_1[0x3f];
      if (ppppppplVar46 != param_1 + 0x40) {
        do {
          ppppppplStack_2a0 = (long *******)(ulong)*(uint *)(ppppppplVar46 + 5);
          pppppplStack_298 = ppppppplVar46[4];
          func_0x000109d47864(*param_1,0x10,&ppppppplStack_2a0,2);
          ppppppplVar24 = (long *******)ppppppplVar46[1];
          ppppppplVar25 = ppppppplVar46;
          if ((long *******)ppppppplVar46[1] == (long *******)0x0) {
            do {
              ppppppplVar46 = (long *******)ppppppplVar25[2];
              bVar20 = (long *******)*ppppppplVar46 != ppppppplVar25;
              ppppppplVar25 = ppppppplVar46;
            } while (bVar20);
          }
          else {
            do {
              ppppppplVar46 = ppppppplVar24;
              ppppppplVar24 = (long *******)*ppppppplVar46;
            } while ((long *******)*ppppppplVar46 != (long *******)0x0);
          }
        } while (ppppppplVar46 != param_1 + 0x40);
        pppppplVar21 = param_1[0x3e];
      }
      if (pppppplVar21[0x25] != pppppplVar21[0x26]) {
        pppppplVar21 = (long ******)0x228;
        __Znwm();
        pppppplVar21[1] = (long *****)0x0;
        pppppplVar21[2] = (long *****)0x0;
        *pppppplVar21 = (long *****)&PTR_FUN_110b40f08;
        pppppplVar21[8] = (long *****)0x0;
        pppppplVar21[7] = (long *****)0x0;
        pppppplVar21[10] = (long *****)0x0;
        pppppplVar21[9] = (long *****)0x0;
        pppppplVar21[0xc] = (long *****)0x0;
        pppppplVar21[0xb] = (long *****)0x0;
        pppppplVar21[0xe] = (long *****)0x0;
        pppppplVar21[0xd] = (long *****)0x0;
        pppppplVar21[0x10] = (long *****)0x0;
        pppppplVar21[0xf] = (long *****)0x0;
        pppppplVar21[0x12] = (long *****)0x0;
        pppppplVar21[0x11] = (long *****)0x0;
        pppppplVar21[0x14] = (long *****)0x0;
        pppppplVar21[0x13] = (long *****)0x0;
        pppppplVar21[0x16] = (long *****)0x0;
        pppppplVar21[0x15] = (long *****)0x0;
        pppppplVar21[0x18] = (long *****)0x0;
        pppppplVar21[0x17] = (long *****)0x0;
        pppppplVar21[0x1a] = (long *****)0x0;
        pppppplVar21[0x19] = (long *****)0x0;
        pppppplVar21[0x1c] = (long *****)0x0;
        pppppplVar21[0x1b] = (long *****)0x0;
        pppppplVar21[0x1e] = (long *****)0x0;
        pppppplVar21[0x1d] = (long *****)0x0;
        pppppplVar21[0x20] = (long *****)0x0;
        pppppplVar21[0x1f] = (long *****)0x0;
        pppppplVar21[6] = (long *****)0x0;
        pppppplVar21[5] = (long *****)0x0;
        pppppplVar21[0x22] = (long *****)0x0;
        pppppplVar21[0x21] = (long *****)0x0;
        pppppplVar21[0x24] = (long *****)0x0;
        pppppplVar21[0x23] = (long *****)0x0;
        pppppplVar21[0x26] = (long *****)0x0;
        pppppplVar21[0x25] = (long *****)0x0;
        pppppplVar21[0x28] = (long *****)0x0;
        pppppplVar21[0x27] = (long *****)0x0;
        pppppplVar21[0x2a] = (long *****)0x0;
        pppppplVar21[0x29] = (long *****)0x0;
        pppppplVar21[0x2c] = (long *****)0x0;
        pppppplVar21[0x2b] = (long *****)0x0;
        pppppplVar21[0x2e] = (long *****)0x0;
        pppppplVar21[0x2d] = (long *****)0x0;
        pppppplVar21[0x30] = (long *****)0x0;
        pppppplVar21[0x2f] = (long *****)0x0;
        pppppplVar21[0x32] = (long *****)0x0;
        pppppplVar21[0x31] = (long *****)0x0;
        pppppplVar21[0x34] = (long *****)0x0;
        pppppplVar21[0x33] = (long *****)0x0;
        pppppplVar21[0x36] = (long *****)0x0;
        pppppplVar21[0x35] = (long *****)0x0;
        pppppplVar21[0x38] = (long *****)0x0;
        pppppplVar21[0x37] = (long *****)0x0;
        pppppplVar21[0x3a] = (long *****)0x0;
        pppppplVar21[0x39] = (long *****)0x0;
        pppppplVar21[0x3c] = (long *****)0x0;
        pppppplVar21[0x3b] = (long *****)0x0;
        pppppplVar21[0x3e] = (long *****)0x0;
        pppppplVar21[0x3d] = (long *****)0x0;
        pppppplVar21[0x40] = (long *****)0x0;
        pppppplVar21[0x3f] = (long *****)0x0;
        pppppplVar21[0x42] = (long *****)0x0;
        pppppplVar21[0x41] = (long *****)0x0;
        pppppplVar21[0x44] = (long *****)0x0;
        pppppplVar21[0x43] = (long *****)0x0;
        pppppplVar42 = pppppplVar21 + 3;
        *pppppplVar42 = (long *****)(pppppplVar21 + 5);
        pppppplVar21[4] = (long *****)0x2000000000;
        ppppppplStack_2a0 = (long *******)pppppplVar42;
        pppppplStack_298 = pppppplVar21;
        FUN_109d4444c(pppppplVar42,0x1e,0xff);
        FUN_109d4444c(pppppplVar42,0,6);
        FUN_109d4444c(pppppplVar42,8,4);
        pppppplVar22 = *param_1;
        pppppplStack_298 = (long ******)0x0;
        ppppppplStack_2a0 = (long *******)0x0;
        pppppplStack_2f0 = pppppplVar42;
        pppppplStack_2e8 = pppppplVar21;
        FUN_109d444b8(pppppplVar22,pppppplVar42);
        FUN_109d4459c(pppppplVar22 + 5,&pppppplStack_2f0);
        pppppplVar21 = pppppplStack_2e8;
        ppppplVar34 = pppppplVar22[5];
        ppppplVar31 = pppppplVar22[6];
        if (pppppplStack_2e8 != (long ******)0x0) {
          pppppplVar42 = pppppplStack_2e8 + 1;
          do {
            ppppplVar35 = *pppppplVar42;
            cVar17 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
            if (bVar20) {
              *pppppplVar42 = (long *****)((long)ppppplVar35 + -1);
              cVar17 = ExclusiveMonitorsStatus();
            }
          } while (cVar17 != '\0');
          if (ppppplVar35 == (long *****)0x0) {
            (*(code *)(*pppppplStack_2e8)[2])(pppppplStack_2e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
          }
        }
        FUN_109d4af04(*param_1,0x1e,param_1[0x3e] + 0x25,
                      (int)((ulong)((long)ppppplVar31 - (long)ppppplVar34) >> 4) + 3);
        pppppplVar21 = pppppplStack_298;
        if (pppppplStack_298 != (long ******)0x0) {
          pppppplVar42 = pppppplStack_298 + 1;
          do {
            ppppplVar34 = *pppppplVar42;
            cVar17 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
            if (bVar20) {
              *pppppplVar42 = (long *****)((long)ppppplVar34 + -1);
              cVar17 = ExclusiveMonitorsStatus();
            }
          } while (cVar17 != '\0');
          if (ppppplVar34 == (long *****)0x0) {
            (*(code *)(*pppppplStack_298)[2])(pppppplStack_298);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
          }
        }
      }
      pppppplVar21 = (long ******)0x228;
      __Znwm();
      pppppplVar21[1] = (long *****)0x0;
      pppppplVar21[2] = (long *****)0x0;
      *pppppplVar21 = (long *****)&PTR_FUN_110b40f08;
      pppppplVar21[8] = (long *****)0x0;
      pppppplVar21[7] = (long *****)0x0;
      pppppplVar21[10] = (long *****)0x0;
      pppppplVar21[9] = (long *****)0x0;
      pppppplVar21[0xc] = (long *****)0x0;
      pppppplVar21[0xb] = (long *****)0x0;
      pppppplVar21[0xe] = (long *****)0x0;
      pppppplVar21[0xd] = (long *****)0x0;
      pppppplVar21[0x10] = (long *****)0x0;
      pppppplVar21[0xf] = (long *****)0x0;
      pppppplVar21[0x12] = (long *****)0x0;
      pppppplVar21[0x11] = (long *****)0x0;
      pppppplVar21[0x14] = (long *****)0x0;
      pppppplVar21[0x13] = (long *****)0x0;
      pppppplVar21[0x16] = (long *****)0x0;
      pppppplVar21[0x15] = (long *****)0x0;
      pppppplVar21[0x18] = (long *****)0x0;
      pppppplVar21[0x17] = (long *****)0x0;
      pppppplVar21[0x1a] = (long *****)0x0;
      pppppplVar21[0x19] = (long *****)0x0;
      pppppplVar21[0x1c] = (long *****)0x0;
      pppppplVar21[0x1b] = (long *****)0x0;
      pppppplVar21[0x1e] = (long *****)0x0;
      pppppplVar21[0x1d] = (long *****)0x0;
      pppppplVar21[0x20] = (long *****)0x0;
      pppppplVar21[0x1f] = (long *****)0x0;
      pppppplVar21[6] = (long *****)0x0;
      pppppplVar21[5] = (long *****)0x0;
      pppppplVar21[0x22] = (long *****)0x0;
      pppppplVar21[0x21] = (long *****)0x0;
      pppppplVar21[0x24] = (long *****)0x0;
      pppppplVar21[0x23] = (long *****)0x0;
      pppppplVar21[0x26] = (long *****)0x0;
      pppppplVar21[0x25] = (long *****)0x0;
      pppppplVar21[0x28] = (long *****)0x0;
      pppppplVar21[0x27] = (long *****)0x0;
      pppppplVar21[0x2a] = (long *****)0x0;
      pppppplVar21[0x29] = (long *****)0x0;
      pppppplVar21[0x2c] = (long *****)0x0;
      pppppplVar21[0x2b] = (long *****)0x0;
      pppppplVar21[0x2e] = (long *****)0x0;
      pppppplVar21[0x2d] = (long *****)0x0;
      pppppplVar21[0x30] = (long *****)0x0;
      pppppplVar21[0x2f] = (long *****)0x0;
      pppppplVar21[0x32] = (long *****)0x0;
      pppppplVar21[0x31] = (long *****)0x0;
      pppppplVar21[0x34] = (long *****)0x0;
      pppppplVar21[0x33] = (long *****)0x0;
      pppppplVar21[0x36] = (long *****)0x0;
      pppppplVar21[0x35] = (long *****)0x0;
      pppppplVar21[0x38] = (long *****)0x0;
      pppppplVar21[0x37] = (long *****)0x0;
      pppppplVar21[0x3a] = (long *****)0x0;
      pppppplVar21[0x39] = (long *****)0x0;
      pppppplVar21[0x3c] = (long *****)0x0;
      pppppplVar21[0x3b] = (long *****)0x0;
      pppppplVar21[0x3e] = (long *****)0x0;
      pppppplVar21[0x3d] = (long *****)0x0;
      pppppplVar21[0x40] = (long *****)0x0;
      pppppplVar21[0x3f] = (long *****)0x0;
      pppppplVar21[0x42] = (long *****)0x0;
      pppppplVar21[0x41] = (long *****)0x0;
      pppppplVar21[0x44] = (long *****)0x0;
      pppppplVar21[0x43] = (long *****)0x0;
      pppppplVar42 = pppppplVar21 + 3;
      *pppppplVar42 = (long *****)(pppppplVar21 + 5);
      pppppplVar21[4] = (long *****)0x2000000000;
      FUN_109d4444c(pppppplVar42,2,0xff);
      FUN_109d4444c(pppppplVar42,8,4);
      FUN_109d4444c(pppppplVar42,6,4);
      FUN_109d4444c(pppppplVar42,8,4);
      FUN_109d4444c(pppppplVar42,4,4);
      FUN_109d4444c(pppppplVar42,4,4);
      FUN_109d4444c(pppppplVar42,4,4);
      FUN_109d4444c(pppppplVar42,4,4);
      FUN_109d4444c(pppppplVar42,0,6);
      FUN_109d4444c(pppppplVar42,8,4);
      pppppplVar22 = *param_1;
      pppppplStack_510 = pppppplVar42;
      pppppplStack_508 = pppppplVar21;
      FUN_109d444b8(pppppplVar22,pppppplVar42);
      FUN_109d4459c(pppppplVar22 + 5,&pppppplStack_510);
      pppppplVar21 = pppppplStack_508;
      ppppplVar34 = pppppplVar22[5];
      ppppplVar31 = pppppplVar22[6];
      if (pppppplStack_508 != (long ******)0x0) {
        pppppplVar42 = pppppplStack_508 + 1;
        do {
          ppppplVar35 = *pppppplVar42;
          cVar17 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
          if (bVar20) {
            *pppppplVar42 = (long *****)((long)ppppplVar35 + -1);
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (ppppplVar35 == (long *****)0x0) {
          (*(code *)(*pppppplStack_508)[2])(pppppplStack_508);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
        }
      }
      plVar23 = (long *)0x228;
      __Znwm();
      plVar23[1] = 0;
      plVar23[2] = 0;
      *plVar23 = (long)&PTR_FUN_110b40f08;
      plVar23[8] = 0;
      plVar23[7] = 0;
      plVar23[10] = 0;
      plVar23[9] = 0;
      plVar23[0xc] = 0;
      plVar23[0xb] = 0;
      plVar23[0xe] = 0;
      plVar23[0xd] = 0;
      plVar23[0x10] = 0;
      plVar23[0xf] = 0;
      plVar23[0x12] = 0;
      plVar23[0x11] = 0;
      plVar23[0x14] = 0;
      plVar23[0x13] = 0;
      plVar23[0x16] = 0;
      plVar23[0x15] = 0;
      plVar23[0x18] = 0;
      plVar23[0x17] = 0;
      plVar23[0x1a] = 0;
      plVar23[0x19] = 0;
      plVar23[0x1c] = 0;
      plVar23[0x1b] = 0;
      plVar23[0x1e] = 0;
      plVar23[0x1d] = 0;
      plVar23[0x20] = 0;
      plVar23[0x1f] = 0;
      plVar23[6] = 0;
      plVar23[5] = 0;
      plVar23[0x22] = 0;
      plVar23[0x21] = 0;
      plVar23[0x24] = 0;
      plVar23[0x23] = 0;
      plVar23[0x26] = 0;
      plVar23[0x25] = 0;
      plVar23[0x28] = 0;
      plVar23[0x27] = 0;
      plVar23[0x2a] = 0;
      plVar23[0x29] = 0;
      plVar23[0x2c] = 0;
      plVar23[0x2b] = 0;
      plVar23[0x2e] = 0;
      plVar23[0x2d] = 0;
      plVar23[0x30] = 0;
      plVar23[0x2f] = 0;
      plVar23[0x32] = 0;
      plVar23[0x31] = 0;
      plVar23[0x34] = 0;
      plVar23[0x33] = 0;
      plVar23[0x36] = 0;
      plVar23[0x35] = 0;
      plVar23[0x38] = 0;
      plVar23[0x37] = 0;
      plVar23[0x3a] = 0;
      plVar23[0x39] = 0;
      plVar23[0x3c] = 0;
      plVar23[0x3b] = 0;
      plVar23[0x3e] = 0;
      plVar23[0x3d] = 0;
      plVar23[0x40] = 0;
      plVar23[0x3f] = 0;
      plVar23[0x42] = 0;
      plVar23[0x41] = 0;
      plVar23[0x44] = 0;
      plVar23[0x43] = 0;
      pppppplVar21 = (long ******)(plVar23 + 3);
      *pppppplVar21 = (long *****)(plVar23 + 5);
      plVar23[4] = 0x2000000000;
      if (cRam00000001137e5ea8 == '\x01') {
        FUN_109d4444c(pppppplVar21,0x13,0xff);
      }
      else {
        FUN_109d4444c(pppppplVar21,1,0xff);
      }
      FUN_109d4444c(pppppplVar21,8,4);
      FUN_109d4444c(pppppplVar21,6,4);
      FUN_109d4444c(pppppplVar21,8,4);
      FUN_109d4444c(pppppplVar21,4,4);
      FUN_109d4444c(pppppplVar21,4,4);
      FUN_109d4444c(pppppplVar21,4,4);
      FUN_109d4444c(pppppplVar21,4,4);
      FUN_109d4444c(pppppplVar21,0,6);
      FUN_109d4444c(pppppplVar21,8,4);
      pppppplVar42 = *param_1;
      pppppplStack_520 = pppppplVar21;
      plStack_518 = plVar23;
      FUN_109d444b8(pppppplVar42,pppppplVar21);
      FUN_109d4459c(pppppplVar42 + 5,&pppppplStack_520);
      plVar23 = plStack_518;
      ppppppplVar46 = (long *******)pppppplVar42[5];
      ppppplVar35 = pppppplVar42[6];
      if (plStack_518 != (long *)0x0) {
        plVar49 = plStack_518 + 1;
        do {
          lVar32 = *plVar49;
          cVar17 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
          if (bVar20) {
            *plVar49 = lVar32 + -1;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*plStack_518 + 0x10))(plStack_518);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      plVar23 = (long *)0x228;
      __Znwm();
      plVar23[1] = 0;
      plVar23[2] = 0;
      *plVar23 = (long)&PTR_FUN_110b40f08;
      plVar23[8] = 0;
      plVar23[7] = 0;
      plVar23[10] = 0;
      plVar23[9] = 0;
      plVar23[0xc] = 0;
      plVar23[0xb] = 0;
      plVar23[0xe] = 0;
      plVar23[0xd] = 0;
      plVar23[0x10] = 0;
      plVar23[0xf] = 0;
      plVar23[0x12] = 0;
      plVar23[0x11] = 0;
      plVar23[0x14] = 0;
      plVar23[0x13] = 0;
      plVar23[0x16] = 0;
      plVar23[0x15] = 0;
      plVar23[0x18] = 0;
      plVar23[0x17] = 0;
      plVar23[0x1a] = 0;
      plVar23[0x19] = 0;
      plVar23[0x1c] = 0;
      plVar23[0x1b] = 0;
      plVar23[0x1e] = 0;
      plVar23[0x1d] = 0;
      plVar23[0x20] = 0;
      plVar23[0x1f] = 0;
      plVar23[6] = 0;
      plVar23[5] = 0;
      plVar23[0x22] = 0;
      plVar23[0x21] = 0;
      plVar23[0x24] = 0;
      plVar23[0x23] = 0;
      plVar23[0x26] = 0;
      plVar23[0x25] = 0;
      plVar23[0x28] = 0;
      plVar23[0x27] = 0;
      plVar23[0x2a] = 0;
      plVar23[0x29] = 0;
      plVar23[0x2c] = 0;
      plVar23[0x2b] = 0;
      plVar23[0x2e] = 0;
      plVar23[0x2d] = 0;
      plVar23[0x30] = 0;
      plVar23[0x2f] = 0;
      plVar23[0x32] = 0;
      plVar23[0x31] = 0;
      plVar23[0x34] = 0;
      plVar23[0x33] = 0;
      plVar23[0x36] = 0;
      plVar23[0x35] = 0;
      plVar23[0x38] = 0;
      plVar23[0x37] = 0;
      plVar23[0x3a] = 0;
      plVar23[0x39] = 0;
      plVar23[0x3c] = 0;
      plVar23[0x3b] = 0;
      plVar23[0x3e] = 0;
      plVar23[0x3d] = 0;
      plVar23[0x40] = 0;
      plVar23[0x3f] = 0;
      plVar23[0x42] = 0;
      plVar23[0x41] = 0;
      plVar23[0x44] = 0;
      plVar23[0x43] = 0;
      pppppplVar21 = (long ******)(plVar23 + 3);
      *pppppplVar21 = (long *****)(plVar23 + 5);
      plVar23[4] = 0x2000000000;
      FUN_109d4444c(pppppplVar21,3,0xff);
      FUN_109d4444c(pppppplVar21,8,4);
      FUN_109d4444c(pppppplVar21,6,4);
      FUN_109d4444c(pppppplVar21,0,6);
      FUN_109d4444c(pppppplVar21,8,4);
      pppppplVar42 = *param_1;
      pppppplStack_530 = pppppplVar21;
      plStack_528 = plVar23;
      FUN_109d444b8(pppppplVar42,pppppplVar21);
      FUN_109d4459c(pppppplVar42 + 5,&pppppplStack_530);
      plVar23 = plStack_528;
      ppppplVar38 = pppppplVar42[5];
      ppppplVar36 = pppppplVar42[6];
      if (plStack_528 != (long *)0x0) {
        plVar49 = plStack_528 + 1;
        do {
          lVar32 = *plVar49;
          cVar17 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
          if (bVar20) {
            *plVar49 = lVar32 + -1;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*plStack_528 + 0x10))(plStack_528);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      plVar23 = (long *)0x228;
      __Znwm();
      plVar23[1] = 0;
      plVar23[2] = 0;
      *plVar23 = (long)&PTR_FUN_110b40f08;
      plVar23[8] = 0;
      plVar23[7] = 0;
      plVar23[10] = 0;
      plVar23[9] = 0;
      plVar23[0xc] = 0;
      plVar23[0xb] = 0;
      plVar23[0xe] = 0;
      plVar23[0xd] = 0;
      plVar23[0x10] = 0;
      plVar23[0xf] = 0;
      plVar23[0x12] = 0;
      plVar23[0x11] = 0;
      plVar23[0x14] = 0;
      plVar23[0x13] = 0;
      plVar23[0x16] = 0;
      plVar23[0x15] = 0;
      plVar23[0x18] = 0;
      plVar23[0x17] = 0;
      plVar23[0x1a] = 0;
      plVar23[0x19] = 0;
      plVar23[0x1c] = 0;
      plVar23[0x1b] = 0;
      plVar23[0x1e] = 0;
      plVar23[0x1d] = 0;
      plVar23[0x20] = 0;
      plVar23[0x1f] = 0;
      plVar23[6] = 0;
      plVar23[5] = 0;
      plVar23[0x22] = 0;
      plVar23[0x21] = 0;
      plVar23[0x24] = 0;
      plVar23[0x23] = 0;
      plVar23[0x26] = 0;
      plVar23[0x25] = 0;
      plVar23[0x28] = 0;
      plVar23[0x27] = 0;
      plVar23[0x2a] = 0;
      plVar23[0x29] = 0;
      plVar23[0x2c] = 0;
      plVar23[0x2b] = 0;
      plVar23[0x2e] = 0;
      plVar23[0x2d] = 0;
      plVar23[0x30] = 0;
      plVar23[0x2f] = 0;
      plVar23[0x32] = 0;
      plVar23[0x31] = 0;
      plVar23[0x34] = 0;
      plVar23[0x33] = 0;
      plVar23[0x36] = 0;
      plVar23[0x35] = 0;
      plVar23[0x38] = 0;
      plVar23[0x37] = 0;
      plVar23[0x3a] = 0;
      plVar23[0x39] = 0;
      plVar23[0x3c] = 0;
      plVar23[0x3b] = 0;
      plVar23[0x3e] = 0;
      plVar23[0x3d] = 0;
      plVar23[0x40] = 0;
      plVar23[0x3f] = 0;
      plVar23[0x42] = 0;
      plVar23[0x41] = 0;
      plVar23[0x44] = 0;
      plVar23[0x43] = 0;
      pppppplVar21 = (long ******)(plVar23 + 3);
      *pppppplVar21 = (long *****)(plVar23 + 5);
      plVar23[4] = 0x2000000000;
      FUN_109d4444c(pppppplVar21,0x17,0xff);
      FUN_109d4444c(pppppplVar21,8,4);
      FUN_109d4444c(pppppplVar21,6,4);
      FUN_109d4444c(pppppplVar21,4,4);
      FUN_109d4444c(pppppplVar21,0,6);
      FUN_109d4444c(pppppplVar21,8,4);
      pppppplVar42 = *param_1;
      pppppplStack_540 = pppppplVar21;
      plStack_538 = plVar23;
      FUN_109d444b8(pppppplVar42,pppppplVar21);
      FUN_109d4459c(pppppplVar42 + 5,&pppppplStack_540);
      plVar23 = plStack_538;
      ppppplVar37 = pppppplVar42[5];
      ppppplVar10 = pppppplVar42[6];
      if (plStack_538 != (long *)0x0) {
        plVar49 = plStack_538 + 1;
        do {
          lVar32 = *plVar49;
          cVar17 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
          if (bVar20) {
            *plVar49 = lVar32 + -1;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*plStack_538 + 0x10))(plStack_538);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      plVar23 = (long *)0x228;
      __Znwm();
      plVar23[1] = 0;
      plVar23[2] = 0;
      *plVar23 = (long)&PTR_FUN_110b40f08;
      plVar23[8] = 0;
      plVar23[7] = 0;
      plVar23[10] = 0;
      plVar23[9] = 0;
      plVar23[0xc] = 0;
      plVar23[0xb] = 0;
      plVar23[0xe] = 0;
      plVar23[0xd] = 0;
      plVar23[0x10] = 0;
      plVar23[0xf] = 0;
      plVar23[0x12] = 0;
      plVar23[0x11] = 0;
      plVar23[0x14] = 0;
      plVar23[0x13] = 0;
      plVar23[0x16] = 0;
      plVar23[0x15] = 0;
      plVar23[0x18] = 0;
      plVar23[0x17] = 0;
      plVar23[0x1a] = 0;
      plVar23[0x19] = 0;
      plVar23[0x1c] = 0;
      plVar23[0x1b] = 0;
      plVar23[0x1e] = 0;
      plVar23[0x1d] = 0;
      plVar23[0x20] = 0;
      plVar23[0x1f] = 0;
      plVar23[6] = 0;
      plVar23[5] = 0;
      plVar23[0x22] = 0;
      plVar23[0x21] = 0;
      plVar23[0x24] = 0;
      plVar23[0x23] = 0;
      plVar23[0x26] = 0;
      plVar23[0x25] = 0;
      plVar23[0x28] = 0;
      plVar23[0x27] = 0;
      plVar23[0x2a] = 0;
      plVar23[0x29] = 0;
      plVar23[0x2c] = 0;
      plVar23[0x2b] = 0;
      plVar23[0x2e] = 0;
      plVar23[0x2d] = 0;
      plVar23[0x30] = 0;
      plVar23[0x2f] = 0;
      plVar23[0x32] = 0;
      plVar23[0x31] = 0;
      plVar23[0x34] = 0;
      plVar23[0x33] = 0;
      plVar23[0x36] = 0;
      plVar23[0x35] = 0;
      plVar23[0x38] = 0;
      plVar23[0x37] = 0;
      plVar23[0x3a] = 0;
      plVar23[0x39] = 0;
      plVar23[0x3c] = 0;
      plVar23[0x3b] = 0;
      plVar23[0x3e] = 0;
      plVar23[0x3d] = 0;
      plVar23[0x40] = 0;
      plVar23[0x3f] = 0;
      plVar23[0x42] = 0;
      plVar23[0x41] = 0;
      plVar23[0x44] = 0;
      plVar23[0x43] = 0;
      pppppplVar21 = (long ******)(plVar23 + 3);
      *pppppplVar21 = (long *****)(plVar23 + 5);
      plVar23[4] = 0x2000000000;
      FUN_109d4444c(pppppplVar21,7,0xff);
      FUN_109d4444c(pppppplVar21,8,4);
      FUN_109d4444c(pppppplVar21,6,4);
      FUN_109d4444c(pppppplVar21,8,4);
      pppppplVar42 = *param_1;
      ppppppplStack_608 = ppppppplVar46;
      pppppplStack_550 = pppppplVar21;
      plStack_548 = plVar23;
      FUN_109d444b8(pppppplVar42,pppppplVar21);
      FUN_109d4459c(pppppplVar42 + 5,&pppppplStack_550);
      plVar23 = plStack_548;
      ppppplVar5 = pppppplVar42[5];
      ppppplVar11 = pppppplVar42[6];
      if (plStack_548 != (long *)0x0) {
        plVar49 = plStack_548 + 1;
        do {
          lVar32 = *plVar49;
          cVar17 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
          if (bVar20) {
            *plVar49 = lVar32 + -1;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*plStack_548 + 0x10))(plStack_548);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      plVar23 = (long *)0x228;
      __Znwm();
      plVar23[1] = 0;
      plVar23[2] = 0;
      *plVar23 = (long)&PTR_FUN_110b40f08;
      plVar23[8] = 0;
      plVar23[7] = 0;
      plVar23[10] = 0;
      plVar23[9] = 0;
      plVar23[0xc] = 0;
      plVar23[0xb] = 0;
      plVar23[0xe] = 0;
      plVar23[0xd] = 0;
      plVar23[0x10] = 0;
      plVar23[0xf] = 0;
      plVar23[0x12] = 0;
      plVar23[0x11] = 0;
      plVar23[0x14] = 0;
      plVar23[0x13] = 0;
      plVar23[0x16] = 0;
      plVar23[0x15] = 0;
      plVar23[0x18] = 0;
      plVar23[0x17] = 0;
      plVar23[0x1a] = 0;
      plVar23[0x19] = 0;
      plVar23[0x1c] = 0;
      plVar23[0x1b] = 0;
      plVar23[0x1e] = 0;
      plVar23[0x1d] = 0;
      plVar23[0x20] = 0;
      plVar23[0x1f] = 0;
      plVar23[6] = 0;
      plVar23[5] = 0;
      plVar23[0x22] = 0;
      plVar23[0x21] = 0;
      plVar23[0x24] = 0;
      plVar23[0x23] = 0;
      plVar23[0x26] = 0;
      plVar23[0x25] = 0;
      plVar23[0x28] = 0;
      plVar23[0x27] = 0;
      plVar23[0x2a] = 0;
      plVar23[0x29] = 0;
      plVar23[0x2c] = 0;
      plVar23[0x2b] = 0;
      plVar23[0x2e] = 0;
      plVar23[0x2d] = 0;
      plVar23[0x30] = 0;
      plVar23[0x2f] = 0;
      plVar23[0x32] = 0;
      plVar23[0x31] = 0;
      plVar23[0x34] = 0;
      plVar23[0x33] = 0;
      plVar23[0x36] = 0;
      plVar23[0x35] = 0;
      plVar23[0x38] = 0;
      plVar23[0x37] = 0;
      plVar23[0x3a] = 0;
      plVar23[0x39] = 0;
      plVar23[0x3c] = 0;
      plVar23[0x3b] = 0;
      plVar23[0x3e] = 0;
      plVar23[0x3d] = 0;
      plVar23[0x40] = 0;
      plVar23[0x3f] = 0;
      plVar23[0x42] = 0;
      plVar23[0x41] = 0;
      plVar23[0x44] = 0;
      plVar23[0x43] = 0;
      pppppplVar21 = (long ******)(plVar23 + 3);
      *pppppplVar21 = (long *****)(plVar23 + 5);
      plVar23[4] = 0x2000000000;
      FUN_109d4444c(pppppplVar21,0x16,0xff);
      FUN_109d4444c(pppppplVar21,8,4);
      FUN_109d4444c(pppppplVar21,8,4);
      FUN_109d4444c(pppppplVar21,0,6);
      FUN_109d4444c(pppppplVar21,8,4);
      pppppplVar42 = *param_1;
      pppppplStack_560 = pppppplVar21;
      plStack_558 = plVar23;
      FUN_109d444b8(pppppplVar42,pppppplVar21);
      FUN_109d4459c(pppppplVar42 + 5,&pppppplStack_560);
      plVar23 = plStack_558;
      ppppplVar6 = pppppplVar42[5];
      ppppplVar12 = pppppplVar42[6];
      if (plStack_558 != (long *)0x0) {
        plVar49 = plStack_558 + 1;
        do {
          lVar32 = *plVar49;
          cVar17 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
          if (bVar20) {
            *plVar49 = lVar32 + -1;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*plStack_558 + 0x10))(plStack_558);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      plVar23 = (long *)0x228;
      __Znwm();
      plVar23[1] = 0;
      plVar23[2] = 0;
      *plVar23 = (long)&PTR_FUN_110b40f08;
      plVar23[8] = 0;
      plVar23[7] = 0;
      plVar23[10] = 0;
      plVar23[9] = 0;
      plVar23[0xc] = 0;
      plVar23[0xb] = 0;
      plVar23[0xe] = 0;
      plVar23[0xd] = 0;
      plVar23[0x10] = 0;
      plVar23[0xf] = 0;
      plVar23[0x12] = 0;
      plVar23[0x11] = 0;
      plVar23[0x14] = 0;
      plVar23[0x13] = 0;
      plVar23[0x16] = 0;
      plVar23[0x15] = 0;
      plVar23[0x18] = 0;
      plVar23[0x17] = 0;
      plVar23[0x1a] = 0;
      plVar23[0x19] = 0;
      plVar23[0x1c] = 0;
      plVar23[0x1b] = 0;
      plVar23[0x1e] = 0;
      plVar23[0x1d] = 0;
      plVar23[0x20] = 0;
      plVar23[0x1f] = 0;
      plVar23[6] = 0;
      plVar23[5] = 0;
      plVar23[0x22] = 0;
      plVar23[0x21] = 0;
      plVar23[0x24] = 0;
      plVar23[0x23] = 0;
      plVar23[0x26] = 0;
      plVar23[0x25] = 0;
      plVar23[0x28] = 0;
      plVar23[0x27] = 0;
      plVar23[0x2a] = 0;
      plVar23[0x29] = 0;
      plVar23[0x2c] = 0;
      plVar23[0x2b] = 0;
      plVar23[0x2e] = 0;
      plVar23[0x2d] = 0;
      plVar23[0x30] = 0;
      plVar23[0x2f] = 0;
      plVar23[0x32] = 0;
      plVar23[0x31] = 0;
      plVar23[0x34] = 0;
      plVar23[0x33] = 0;
      plVar23[0x36] = 0;
      plVar23[0x35] = 0;
      plVar23[0x38] = 0;
      plVar23[0x37] = 0;
      plVar23[0x3a] = 0;
      plVar23[0x39] = 0;
      plVar23[0x3c] = 0;
      plVar23[0x3b] = 0;
      plVar23[0x3e] = 0;
      plVar23[0x3d] = 0;
      plVar23[0x40] = 0;
      plVar23[0x3f] = 0;
      plVar23[0x42] = 0;
      plVar23[0x41] = 0;
      plVar23[0x44] = 0;
      plVar23[0x43] = 0;
      pppppplVar21 = (long ******)(plVar23 + 3);
      *pppppplVar21 = (long *****)(plVar23 + 5);
      plVar23[4] = 0x2000000000;
      FUN_109d4444c(pppppplVar21,0x1a,0xff);
      FUN_109d4444c(pppppplVar21,8,4);
      FUN_109d4444c(pppppplVar21,0,6);
      FUN_109d4444c(pppppplVar21,8,4);
      pppppplVar42 = *param_1;
      pppppplStack_570 = pppppplVar21;
      plStack_568 = plVar23;
      FUN_109d444b8(pppppplVar42,pppppplVar21);
      FUN_109d4459c(pppppplVar42 + 5,&pppppplStack_570);
      plVar23 = plStack_568;
      ppppplVar7 = pppppplVar42[5];
      ppppplVar13 = pppppplVar42[6];
      if (plStack_568 != (long *)0x0) {
        plVar49 = plStack_568 + 1;
        do {
          lVar32 = *plVar49;
          cVar17 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
          if (bVar20) {
            *plVar49 = lVar32 + -1;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*plStack_568 + 0x10))(plStack_568);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      plVar23 = (long *)0x228;
      __Znwm();
      plVar23[1] = 0;
      plVar23[2] = 0;
      *plVar23 = (long)&PTR_FUN_110b40f08;
      plVar23[8] = 0;
      plVar23[7] = 0;
      plVar23[10] = 0;
      plVar23[9] = 0;
      plVar23[0xc] = 0;
      plVar23[0xb] = 0;
      plVar23[0xe] = 0;
      plVar23[0xd] = 0;
      plVar23[0x10] = 0;
      plVar23[0xf] = 0;
      plVar23[0x12] = 0;
      plVar23[0x11] = 0;
      plVar23[0x14] = 0;
      plVar23[0x13] = 0;
      plVar23[0x16] = 0;
      plVar23[0x15] = 0;
      plVar23[0x18] = 0;
      plVar23[0x17] = 0;
      plVar23[0x1a] = 0;
      plVar23[0x19] = 0;
      plVar23[0x1c] = 0;
      plVar23[0x1b] = 0;
      plVar23[0x1e] = 0;
      plVar23[0x1d] = 0;
      plVar23[0x20] = 0;
      plVar23[0x1f] = 0;
      plVar23[6] = 0;
      plVar23[5] = 0;
      plVar23[0x22] = 0;
      plVar23[0x21] = 0;
      plVar23[0x24] = 0;
      plVar23[0x23] = 0;
      plVar23[0x26] = 0;
      plVar23[0x25] = 0;
      plVar23[0x28] = 0;
      plVar23[0x27] = 0;
      plVar23[0x2a] = 0;
      plVar23[0x29] = 0;
      plVar23[0x2c] = 0;
      plVar23[0x2b] = 0;
      plVar23[0x2e] = 0;
      plVar23[0x2d] = 0;
      plVar23[0x30] = 0;
      plVar23[0x2f] = 0;
      plVar23[0x32] = 0;
      plVar23[0x31] = 0;
      plVar23[0x34] = 0;
      plVar23[0x33] = 0;
      plVar23[0x36] = 0;
      plVar23[0x35] = 0;
      plVar23[0x38] = 0;
      plVar23[0x37] = 0;
      plVar23[0x3a] = 0;
      plVar23[0x39] = 0;
      plVar23[0x3c] = 0;
      plVar23[0x3b] = 0;
      plVar23[0x3e] = 0;
      plVar23[0x3d] = 0;
      plVar23[0x40] = 0;
      plVar23[0x3f] = 0;
      plVar23[0x42] = 0;
      plVar23[0x41] = 0;
      plVar23[0x44] = 0;
      plVar23[0x43] = 0;
      pppppplVar21 = (long ******)(plVar23 + 3);
      *pppppplVar21 = (long *****)(plVar23 + 5);
      plVar23[4] = 0x2000000000;
      FUN_109d4444c(pppppplVar21,0x1b,0xff);
      FUN_109d4444c(pppppplVar21,0,6);
      FUN_109d4444c(pppppplVar21,8,4);
      pppppplVar42 = *param_1;
      pppppplStack_580 = pppppplVar21;
      plStack_578 = plVar23;
      FUN_109d444b8(pppppplVar42,pppppplVar21);
      FUN_109d4459c(pppppplVar42 + 5,&pppppplStack_580);
      plVar23 = plStack_578;
      ppppplVar8 = pppppplVar42[5];
      ppppplVar14 = pppppplVar42[6];
      if (plStack_578 != (long *)0x0) {
        plVar49 = plStack_578 + 1;
        do {
          lVar32 = *plVar49;
          cVar17 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar49,0x10);
          if (bVar20) {
            *plVar49 = lVar32 + -1;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*plStack_578 + 0x10))(plStack_578);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      ppppppplStack_4f8 = (long *******)0x4000000000;
      pppppplVar42 = param_1[2];
      pppppplVar21 = pppppplVar42 + 3;
      pppppplVar22 = (long ******)pppppplVar42[4];
      pppppplStack_620 = pppppplVar21;
      ppppppplStack_500 = apppppplStack_4f0;
      if (pppppplVar22 != pppppplVar21) {
        ppppplStack_630 = (long *****)((ulong)((long)ppppplVar13 - (long)ppppplVar7) >> 4);
        pppppplStack_600 = (long ******)((ulong)((long)ppppplVar14 - (long)ppppplVar8) >> 4);
        ppppplStack_638 = (long *****)((long)ppppplVar31 - (long)ppppplVar34);
        ppppplStack_640 = (long *****)((long)ppppplVar35 - (long)ppppppplStack_608);
        ppppppplStack_610 = (long *******)&uStack_290;
        do {
          if ((*(byte *)((long)pppppplVar22 + -0x21) >> 4 & 1) == 0) {
            FUN_109df7828(&UNK_10f5af25d,1);
LAB_109d42910:
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x109d42914);
            (*pcVar19)();
          }
          pppppplVar57 = pppppplVar22 + -7;
          pppppplVar47 = param_1[0x3e];
          pppppplVar42 = pppppplVar57;
          FUN_109d35ab4(pppppplVar57);
          FUN_109d36700(pppppplVar47,pppppplVar42);
          if (((long ******)0x7 < pppppplVar47) &&
             (puVar9 = *(undefined8 **)(((ulong)pppppplVar47 & 0xfffffffffffffff8) + 0x18),
             *(undefined8 **)(((ulong)pppppplVar47 & 0xfffffffffffffff8) + 0x20) != puVar9)) {
            ppppppplStack_608 = (long *******)*puVar9;
            ppppppplVar46 = param_1 + 3;
            FUN_109d51b68(ppppppplVar46,pppppplVar57);
            FUN_109d38988(&ppppppplStack_500,(ulong)ppppppplVar46 & 0xffffffff);
            pppppplVar42 = *param_1;
            pppppplVar21 = ppppppplStack_608[0xd];
            pppppplStack_618 = pppppplVar57;
            if (pppppplVar21 == (long ******)0x0) {
              ppppppplStack_2a0 = ppppppplStack_610;
              pppppplStack_298 = (long ******)0x4000000000;
            }
            else {
              lVar32 = (long)pppppplVar21[1] - (long)*pppppplVar21;
              if (lVar32 != 0) {
                func_0x000109d47864(pppppplVar42,0xb,*pppppplVar21,lVar32 >> 3);
                pppppplVar21 = ppppppplStack_608[0xd];
                ppppppplStack_2a0 = ppppppplStack_610;
                pppppplStack_298 = (long ******)0x4000000000;
                if (pppppplVar21 == (long ******)0x0) goto LAB_109d41b88;
              }
              pppppplStack_298 = (long ******)0x4000000000;
              ppppplVar34 = pppppplVar21[3];
              ppppplVar31 = pppppplVar21[4];
              ppppppplStack_2a0 = ppppppplStack_610;
              if (ppppplVar31 != ppppplVar34) {
                pppppplStack_298 = (long ******)0x4000000000;
                do {
                  FUN_109d38988(&ppppppplStack_2a0,*ppppplVar34);
                  FUN_109d38988(&ppppppplStack_2a0,ppppplVar34[1]);
                  ppppplVar34 = ppppplVar34 + 2;
                } while (ppppplVar34 != ppppplVar31);
                FUN_109d481c4(pppppplVar42,0xc,&ppppppplStack_2a0,0);
                pppppplVar21 = ppppppplStack_608[0xd];
                if (pppppplVar21 == (long ******)0x0) goto LAB_109d41b88;
              }
              ppppplVar34 = pppppplVar21[6];
              ppppplVar31 = pppppplVar21[7];
              if (ppppplVar31 != ppppplVar34) {
                pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
                do {
                  FUN_109d38988(&ppppppplStack_2a0,*ppppplVar34);
                  FUN_109d38988(&ppppppplStack_2a0,ppppplVar34[1]);
                  ppppplVar34 = ppppplVar34 + 2;
                } while (ppppplVar34 != ppppplVar31);
                FUN_109d481c4(pppppplVar42,0xd,&ppppppplStack_2a0,0);
                pppppplVar21 = ppppppplStack_608[0xd];
                if (pppppplVar21 == (long ******)0x0) goto LAB_109d41b88;
              }
              ppppplVar34 = pppppplVar21[9];
              ppppplVar31 = pppppplVar21[10];
              if (ppppplVar31 != ppppplVar34) {
                do {
                  pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
                  FUN_109d38988(&ppppppplStack_2a0,*ppppplVar34);
                  FUN_109d38988(&ppppppplStack_2a0,ppppplVar34[1]);
                  FUN_109d4f3d8(&ppppppplStack_2a0,
                                ppppppplStack_2a0 + ((ulong)pppppplStack_298 & 0xffffffff),
                                ppppplVar34[2],ppppplVar34[3]);
                  FUN_109d481c4(pppppplVar42,0xe,&ppppppplStack_2a0,0);
                  ppppplVar34 = ppppplVar34 + 5;
                } while (ppppplVar34 != ppppplVar31);
                pppppplVar21 = ppppppplStack_608[0xd];
                if (pppppplVar21 == (long ******)0x0) goto LAB_109d41b88;
              }
              ppppplVar31 = pppppplVar21[0xd];
              for (ppppplVar34 = pppppplVar21[0xc]; ppppplVar31 != ppppplVar34;
                  ppppplVar34 = ppppplVar34 + 5) {
                pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
                FUN_109d38988(&ppppppplStack_2a0,*ppppplVar34);
                FUN_109d38988(&ppppppplStack_2a0,ppppplVar34[1]);
                FUN_109d4f3d8(&ppppppplStack_2a0,
                              ppppppplStack_2a0 + ((ulong)pppppplStack_298 & 0xffffffff),
                              ppppplVar34[2],ppppplVar34[3]);
                FUN_109d481c4(pppppplVar42,0xf,&ppppppplStack_2a0,0);
              }
            }
LAB_109d41b88:
            pppppplVar21 = ppppppplStack_608[0xe];
            pppppplStack_628 = pppppplVar42;
            if (pppppplVar21 != (long ******)0x0) {
              ppppplVar34 = *pppppplVar21;
              ppppplVar31 = pppppplVar21[1];
              if (ppppplVar31 != ppppplVar34) {
                pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
                do {
                  FUN_109d38988(&ppppppplStack_2a0,*ppppplVar34);
                  uVar51 = *(uint *)(ppppplVar34 + 2);
                  ppppppplStack_2b8 = (long *******)CONCAT44(ppppppplStack_2b8._4_4_,uVar51);
                  if (uVar51 < 0x41) {
                    ppppppplStack_2c0 = (long *******)ppppplVar34[1];
                  }
                  else {
                    ppppppplVar46 = (long *******)((ulong)uVar51 + 0x3f >> 3 & 0x3ffffff8);
                    __Znam();
                    ppppppplStack_2c0 = ppppppplVar46;
                    _memcpy();
                  }
                  uVar51 = *(uint *)(ppppplVar34 + 4);
                  ppppppplStack_2a8 = (long *******)CONCAT44(ppppppplStack_2a8._4_4_,uVar51);
                  if (uVar51 < 0x41) {
                    pppplStack_2b0 = ppppplVar34[3];
                  }
                  else {
                    pppplVar26 = (long ****)((ulong)uVar51 + 0x3f >> 3 & 0x3ffffff8);
                    __Znam();
                    pppplStack_2b0 = pppplVar26;
                    _memcpy();
                  }
                  FUN_109d4f2ac(&ppppppplStack_2a0,&ppppppplStack_2c0);
                  if ((0x40 < (uint)ppppppplStack_2a8) && (pppplStack_2b0 != (long ****)0x0)) {
                    __ZdaPv();
                  }
                  if ((0x40 < (uint)ppppppplStack_2b8) && (ppppppplStack_2c0 != (long *******)0x0))
                  {
                    __ZdaPv();
                  }
                  FUN_109d38988(&ppppppplStack_2a0,
                                ((long)ppppplVar34[6] - (long)ppppplVar34[5] >> 4) *
                                -0x5555555555555555);
                  pppplVar26 = ppppplVar34[6];
                  if (ppppplVar34[5] != pppplVar26) {
                    pppplVar44 = ppppplVar34[5] + 4;
                    do {
                      FUN_109d38988(&ppppppplStack_2a0,pppplVar44[-4]);
                      ppppppplVar46 = param_1 + 3;
                      FUN_109d51b68(ppppppplVar46,
                                    *(undefined8 *)
                                     (((ulong)pppplVar44[-3] & 0xfffffffffffffff8) + 8));
                      FUN_109d38988(&ppppppplStack_2a0,(ulong)ppppppplVar46 & 0xffffffff);
                      uVar51 = *(uint *)(pppplVar44 + -1);
                      ppppppplStack_2d8 = (long *******)CONCAT44(ppppppplStack_2d8._4_4_,uVar51);
                      if (uVar51 < 0x41) {
                        uStack_2e0 = (undefined **)pppplVar44[-2];
                      }
                      else {
                        ppppppplVar46 = (long *******)((ulong)uVar51 + 0x3f >> 3 & 0x3ffffff8);
                        __Znam();
                        uStack_2e0 = (undefined **)ppppppplVar46;
                        _memcpy();
                      }
                      uVar51 = *(uint *)(pppplVar44 + 1);
                      plStack_2c8 = (long *)CONCAT44(plStack_2c8._4_4_,uVar51);
                      if (uVar51 < 0x41) {
                        ppplStack_2d0 = *pppplVar44;
                      }
                      else {
                        ppplVar52 = (long ***)((ulong)uVar51 + 0x3f >> 3 & 0x3ffffff8);
                        __Znam();
                        ppplStack_2d0 = ppplVar52;
                        _memcpy();
                      }
                      FUN_109d4f2ac(&ppppppplStack_2a0,&uStack_2e0);
                      if ((0x40 < (uint)plStack_2c8) && (ppplStack_2d0 != (long ***)0x0)) {
                        __ZdaPv();
                      }
                      if ((0x40 < (uint)ppppppplStack_2d8) &&
                         ((long *******)uStack_2e0 != (long *******)0x0)) {
                        __ZdaPv();
                      }
                      pppplVar1 = pppplVar44 + 2;
                      pppplVar44 = pppplVar44 + 6;
                    } while (pppplVar1 != pppplVar26);
                  }
                  ppppplVar34 = ppppplVar34 + 8;
                } while (ppppplVar34 != ppppplVar31);
                if ((int)pppppplStack_298 != 0) {
                  FUN_109d481c4(pppppplStack_628,0x19,&ppppppplStack_2a0,0);
                }
              }
            }
            if (ppppppplStack_2a0 != ppppppplStack_610) {
              _free();
            }
            ppppplVar34 = ppppplStack_630;
            pppppplVar42 = *param_1;
            ppppppplStack_2c0 = (long *******)&PTR_FUN_110b40de8;
            uStack_2e0 = &PTR_DAT_110b40e78;
            plStack_2c8 = &uStack_2e0;
            ppppppplStack_2a0 = ppppppplStack_610;
            pppppplStack_298 = (long ******)0x600000000;
            pppppplVar21 = ppppppplStack_608[0xf];
            ppppppplStack_2b8 = param_1;
            ppppppplStack_2a8 = (long *******)&ppppppplStack_2c0;
            if (pppppplVar21 != (long ******)0x0) {
              ppppplVar35 = pppppplVar21[1];
              ppppppplVar46 = (long *******)&ppppppplStack_2c0;
              for (ppppplVar31 = *pppppplVar21; ppppppplStack_2a8 = ppppppplVar46,
                  ppppplVar35 != ppppplVar31; ppppplVar31 = ppppplVar31 + 0x11) {
                pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
                if (ppppppplVar46 == (long *******)0x0) {
                  func_0x000104c501e4();
                  goto LAB_109d42910;
                }
                (*(code *)(*ppppppplVar46)[6])(ppppppplVar46,ppppplVar31);
                FUN_109d38988(&ppppppplStack_2a0,(ulong)ppppppplVar46 & 0xffffffff);
                if (*(uint *)(ppppplVar31 + 10) != 0) {
                  lVar32 = (ulong)*(uint *)(ppppplVar31 + 10) << 2;
                  pppplVar26 = ppppplVar31[9];
                  do {
                    pppppplStack_5c0 =
                         (long ******)CONCAT44(pppppplStack_5c0._4_4_,*(undefined4 *)pppplVar26);
                    if (plStack_2c8 == (long *)0x0) {
                      func_0x000104c501e4();
                      goto LAB_109d42910;
                    }
                    plVar23 = plStack_2c8;
                    (**(code **)(*plStack_2c8 + 0x30))(plStack_2c8,&pppppplStack_5c0);
                    FUN_109d38988(&ppppppplStack_2a0,(ulong)plVar23 & 0xffffffff);
                    lVar32 = lVar32 + -4;
                    pppplVar26 = (long ****)((long)pppplVar26 + 4);
                  } while (lVar32 != 0);
                }
                func_0x000109d4f608(pppppplVar42,0x1a,&ppppppplStack_2a0,(int)ppppplVar34 + 3);
                ppppppplVar46 = ppppppplStack_2a8;
              }
            }
            pppppplVar21 = pppppplStack_620;
            pppppplVar47 = ppppppplStack_608[0x10];
            if (pppppplVar47 != (long ******)0x0) {
              ppppplVar31 = pppppplVar47[1];
              for (ppppplVar34 = *pppppplVar47; ppppplVar31 != ppppplVar34;
                  ppppplVar34 = ppppplVar34 + 0xb) {
                pppppplStack_298 = (long ******)((ulong)pppppplStack_298 & 0xffffffff00000000);
                pppplVar44 = ppppplVar34[9];
                for (pppplVar26 = ppppplVar34[8]; pppplVar26 != pppplVar44;
                    pppplVar26 = pppplVar26 + 9) {
                  FUN_109d38988(&ppppppplStack_2a0,*(undefined1 *)pppplVar26);
                  FUN_109d38988(&ppppppplStack_2a0,*(undefined4 *)(pppplVar26 + 2));
                  if (*(uint *)(pppplVar26 + 2) != 0) {
                    lVar32 = (ulong)*(uint *)(pppplVar26 + 2) << 2;
                    ppplVar52 = pppplVar26[1];
                    do {
                      pppppplStack_5c0 =
                           (long ******)CONCAT44(pppppplStack_5c0._4_4_,*(undefined4 *)ppplVar52);
                      if (plStack_2c8 == (long *)0x0) {
                        func_0x000104c501e4();
                        goto LAB_109d42910;
                      }
                      plVar23 = plStack_2c8;
                      (**(code **)(*plStack_2c8 + 0x30))(plStack_2c8,&pppppplStack_5c0);
                      FUN_109d38988(&ppppppplStack_2a0,(ulong)plVar23 & 0xffffffff);
                      lVar32 = lVar32 + -4;
                      ppplVar52 = (long ***)((long)ppplVar52 + 4);
                    } while (lVar32 != 0);
                  }
                }
                func_0x000109d4f608(pppppplVar42,0x1b,&ppppppplStack_2a0,(int)pppppplStack_600 + 3);
              }
            }
            if (ppppppplStack_2a0 != ppppppplStack_610) {
              _free();
            }
            if (plStack_2c8 == &uStack_2e0) {
              lVar32 = 0x20;
LAB_109d41f9c:
              (**(code **)(*plStack_2c8 + lVar32))();
            }
            else if (plStack_2c8 != (long *)0x0) {
              lVar32 = 0x28;
              goto LAB_109d41f9c;
            }
            if ((long ********)ppppppplStack_2a8 == &ppppppplStack_2c0) {
              lVar32 = 0x20;
LAB_109d41fc8:
              (**(code **)((long)*ppppppplStack_2a8 + lVar32))();
            }
            else if (ppppppplStack_2a8 != (long *******)0x0) {
              lVar32 = 0x28;
              goto LAB_109d41fc8;
            }
            ppppppplVar46 = ppppppplStack_608;
            ppppppplVar24 = ppppppplStack_608;
            FUN_109d9e5e4(ppppppplStack_608);
            uVar51 = *(uint *)((long)ppppppplVar46 + 0xc);
            FUN_109d38988(&ppppppplStack_500,
                          uVar51 & 0xf | (uVar51 >> 6 & 0xf) << 4 | (uVar51 >> 4 & 3) << 8);
            FUN_109d38988(&ppppppplStack_500,*(undefined4 *)(ppppppplStack_608 + 8));
            FUN_109d38988(&ppppppplStack_500,*(uint *)((long)ppppppplStack_608 + 0x44) & 0x3ff);
            FUN_109d38988(&ppppppplStack_500,
                          (long)ppppppplStack_608[6] - (long)ppppppplStack_608[5] >> 3);
            FUN_109d38988(&ppppppplStack_500,(ulong)ppppppplVar24 & 0xffffffff);
            FUN_109d38988(&ppppppplStack_500,(ulong)ppppppplVar24 >> 0x20);
            pppppplVar47 = ppppppplStack_608[6];
            for (pppppplVar42 = ppppppplStack_608[5]; pppppplVar42 != pppppplVar47;
                pppppplVar42 = pppppplVar42 + 1) {
              ppppppplVar46 = param_1 + 3;
              FUN_109d51b68(ppppppplVar46,
                            *(undefined8 *)(((ulong)*pppppplVar42 & 0xfffffffffffffff8) + 8));
              FUN_109d38988(&ppppppplStack_500,(ulong)ppppppplVar46 & 0xffffffff);
            }
            FUN_109d87d1c(&ppppppplStack_2a0,pppppplStack_618,0);
            pppppplVar57 = uStack_290;
            bVar20 = iRam00000001138338f0 == 0;
            pppppplVar47 = ppppppplStack_608[0xb];
            for (pppppplVar42 = ppppppplStack_608[10]; pppppplVar42 != pppppplVar47;
                pppppplVar42 = pppppplVar42 + 2) {
              ppppppplVar46 = param_1;
              FUN_109d4f244(param_1,*pppppplVar42);
              FUN_109d38988(&ppppppplStack_500,(ulong)ppppppplVar46 & 0xffffffff);
              if (((ulong)pppppplVar57 & 1) == 0 && bVar20) {
                if (cRam00000001137e5ea8 == '\x01') {
                  uVar51 = *(uint *)(pppppplVar42 + 1) >> 3;
                  goto LAB_109d42100;
                }
              }
              else {
                uVar51 = *(uint *)(pppppplVar42 + 1) & 7;
LAB_109d42100:
                FUN_109d38988(&ppppppplStack_500,uVar51);
              }
            }
            uVar30 = 0x13;
            if (cRam00000001137e5ea8 == '\0') {
              uVar30 = 1;
            }
            bVar18 = ((ulong)pppppplVar57 & 1) == 0;
            ppppplVar34 = (long *****)&ppppplStack_638;
            if (bVar18 && bVar20) {
              ppppplVar34 = (long *****)&ppppplStack_640;
            }
            uVar4 = 2;
            if (bVar18 && bVar20) {
              uVar4 = uVar30;
            }
            FUN_109d481c4(*param_1,uVar4,&ppppppplStack_500,(int)((ulong)*ppppplVar34 >> 4) + 3);
            ppppppplStack_4f8 = (long *******)((ulong)ppppppplStack_4f8 & 0xffffffff00000000);
          }
          pppppplVar22 = (long ******)pppppplVar22[1];
        } while (pppppplVar22 != pppppplVar21);
        pppppplVar42 = param_1[2];
      }
      pppppplVar21 = (long ******)pppppplVar42[2];
      if (pppppplVar21 != pppppplVar42 + 1) {
        pppppplStack_600 = (long ******)((long)ppppplVar36 - (long)ppppplVar38);
        do {
          pppppplVar57 = pppppplVar21 + -7;
          pppppplVar47 = param_1[0x3e];
          pppppplVar22 = pppppplVar57;
          FUN_109d35ab4(pppppplVar57);
          FUN_109d36700(pppppplVar47,pppppplVar22);
          if (((long ******)0x7 < pppppplVar47) &&
             (plVar23 = *(long **)(((ulong)pppppplVar47 & 0xfffffffffffffff8) + 0x18),
             *(long **)(((ulong)pppppplVar47 & 0xfffffffffffffff8) + 0x20) != plVar23)) {
            lVar32 = *plVar23;
            ppppppplVar46 = param_1 + 3;
            FUN_109d51b68(ppppppplVar46,pppppplVar57);
            FUN_109d38988(&ppppppplStack_500,(ulong)ppppppplVar46 & 0xffffffff);
            uVar51 = *(uint *)(lVar32 + 0xc);
            FUN_109d38988(&ppppppplStack_500,
                          uVar51 & 0xf | (uVar51 >> 6 & 0xf) << 4 | (uVar51 >> 4 & 3) << 8);
            FUN_109d38988(&ppppppplStack_500,*(uint *)(lVar32 + 0x48) & 0x1f);
            plVar23 = *(long **)(lVar32 + 0x40);
            if (plVar23 == (long *)0x0) {
              puVar48 = (ulong *)0x0;
LAB_109d4223c:
              lVar58 = 0;
              bVar20 = true;
            }
            else {
              puVar48 = (ulong *)*plVar23;
              lVar58 = plVar23[1];
              if (lVar58 - (long)puVar48 == 0) goto LAB_109d4223c;
              FUN_109d38988(&ppppppplStack_500,
                            *(long *)(lVar32 + 0x30) - *(long *)(lVar32 + 0x28) >> 3);
              bVar20 = false;
              lVar58 = lVar58 - (long)puVar48 >> 4;
            }
            uVar39 = (ulong)ppppppplStack_4f8 & 0xffffffff;
            puVar15 = *(ulong **)(lVar32 + 0x30);
            uVar41 = uVar39;
            puVar53 = *(ulong **)(lVar32 + 0x28);
            if (*(ulong **)(lVar32 + 0x28) != puVar15) {
              do {
                puVar54 = puVar53 + 1;
                ppppppplVar46 = param_1 + 3;
                FUN_109d51b68(ppppppplVar46,*(undefined8 *)((*puVar53 & 0xfffffffffffffff8) + 8));
                FUN_109d38988(&ppppppplStack_500,(ulong)ppppppplVar46 & 0xffffffff);
                puVar53 = puVar54;
              } while (puVar54 != puVar15);
              uVar41 = (ulong)ppppppplStack_4f8 & 0xffffffff;
            }
            if (1 < (long)(uVar41 - uVar39)) {
              _qsort(ppppppplStack_500 + uVar39,uVar41 - uVar39,8,0x109d4f80c);
            }
            if (bVar20) {
              uVar43 = 3;
              pppppplVar22 = pppppplStack_600;
            }
            else {
              if (lVar58 != 0) {
                puVar15 = puVar48 + lVar58 * 2;
                do {
                  ppppppplVar46 = param_1 + 3;
                  FUN_109d51b68(ppppppplVar46,*(undefined8 *)((*puVar48 & 0xfffffffffffffff8) + 8));
                  FUN_109d38988(&ppppppplStack_500,(ulong)ppppppplVar46 & 0xffffffff);
                  FUN_109d38988(&ppppppplStack_500,puVar48[1]);
                  puVar48 = puVar48 + 2;
                } while (puVar48 != puVar15);
              }
              uVar43 = 0x17;
              pppppplVar22 = (long ******)((long)ppppplVar10 - (long)ppppplVar37);
            }
            FUN_109d481c4(*param_1,uVar43,&ppppppplStack_500,(int)((ulong)pppppplVar22 >> 4) + 3);
            ppppppplStack_4f8 = (long *******)((ulong)ppppppplStack_4f8 & 0xffffffff00000000);
          }
          pppppplVar21 = (long ******)pppppplVar21[1];
        } while (pppppplVar21 != pppppplVar42 + 1);
        pppppplVar42 = param_1[2];
      }
      pppppplVar21 = (long ******)pppppplVar42[6];
      if (pppppplVar21 != pppppplVar42 + 5) {
        do {
          pppppplVar47 = pppppplVar21 + -6;
          pppppplVar22 = pppppplVar47;
          FUN_109d890b0();
          if (((*(byte *)((long)pppppplVar22 + 0x17) >> 4 & 1) != 0) &&
             (*(char *)(pppppplVar22 + 2) != '\x02')) {
            ppppppplVar46 = param_1 + 3;
            FUN_109d51b68(ppppppplVar46,pppppplVar47);
            ppppppplVar24 = param_1 + 3;
            FUN_109d51b68(ppppppplVar24,pppppplVar22);
            FUN_109d38988(&ppppppplStack_500,(ulong)ppppppplVar46 & 0xffffffff);
            pppppplVar22 = param_1[0x3e];
            FUN_109d35ab4(pppppplVar47);
            FUN_109d36700(pppppplVar22,pppppplVar47);
            uVar51 = *(uint *)(**(long **)(((ulong)pppppplVar22 & 0xfffffffffffffff8) + 0x18) + 0xc)
            ;
            FUN_109d38988(&ppppppplStack_500,
                          uVar51 & 0xf | (uVar51 >> 6 & 0xf) << 4 | (uVar51 >> 4 & 3) << 8);
            FUN_109d38988(&ppppppplStack_500,(ulong)ppppppplVar24 & 0xffffffff);
            FUN_109d481c4(*param_1,7,&ppppppplStack_500,
                          (int)((ulong)((long)ppppplVar11 - (long)ppppplVar5) >> 4) + 3);
            ppppppplStack_4f8 = (long *******)((ulong)ppppppplStack_4f8 & 0xffffffff00000000);
          }
          pppppplVar21 = (long ******)pppppplVar21[1];
        } while (pppppplVar21 != pppppplVar42 + 5);
      }
      pppppplVar42 = param_1[0x3e];
      pppppplVar21 = (long ******)pppppplVar42[9];
      if (pppppplVar21 != pppppplVar42 + 10) {
        do {
          pppppplVar47 = param_1[1];
          cVar17 = *(char *)((long)pppppplVar21 + 0x37);
          pppppplVar22 = (long ******)pppppplVar21[4];
          if (-1 < (long)cVar17) {
            pppppplVar22 = pppppplVar21 + 4;
          }
          ppppplVar34 = pppppplVar21[5];
          if (-1 < cVar17) {
            ppppplVar34 = (long *****)(long)cVar17;
          }
          pppppplVar57 = pppppplVar22;
          FUN_109e0438c(pppppplVar22,(long)pppppplVar22 + (long)ppppplVar34);
          FUN_109de2a7c(pppppplVar47,pppppplVar22,
                        (ulong)ppppplVar34 & 0xffffffff | (long)pppppplVar57 << 0x20);
          FUN_109d38988(&ppppppplStack_500,pppppplVar47);
          ppppplVar34 = pppppplVar21[5];
          if (-1 < (char)*(byte *)((long)pppppplVar21 + 0x37)) {
            ppppplVar34 = (long *****)(ulong)*(byte *)((long)pppppplVar21 + 0x37);
          }
          FUN_109d38988(&ppppppplStack_500,ppppplVar34);
          ppppplVar31 = pppppplVar21[8];
          for (ppppplVar34 = pppppplVar21[7]; ppppplVar34 != ppppplVar31;
              ppppplVar34 = ppppplVar34 + 2) {
            FUN_109d38988(&ppppppplStack_500,*ppppplVar34);
            ppppppplVar46 = param_1 + 3;
            FUN_109d51b68(ppppppplVar46,
                          *(undefined8 *)(((ulong)ppppplVar34[1] & 0xfffffffffffffff8) + 8));
            FUN_109d38988(&ppppppplStack_500,(ulong)ppppppplVar46 & 0xffffffff);
          }
          FUN_109d481c4(*param_1,0x16,&ppppppplStack_500,
                        (int)((ulong)((long)ppppplVar12 - (long)ppppplVar6) >> 4) + 3);
          ppppppplStack_4f8 = (long *******)((ulong)ppppppplStack_4f8 & 0xffffffff00000000);
          pppppplVar22 = (long ******)pppppplVar21[1];
          pppppplVar47 = pppppplVar21;
          if ((long ******)pppppplVar21[1] == (long ******)0x0) {
            do {
              pppppplVar21 = (long ******)pppppplVar47[2];
              bVar20 = (long ******)*pppppplVar21 != pppppplVar47;
              pppppplVar47 = pppppplVar21;
            } while (bVar20);
          }
          else {
            do {
              pppppplVar21 = pppppplVar22;
              pppppplVar22 = (long ******)*pppppplVar21;
            } while ((long ******)*pppppplVar21 != (long ******)0x0);
          }
        } while (pppppplVar21 != pppppplVar42 + 10);
        pppppplVar42 = param_1[0x3e];
      }
      ppppppplStack_2a0 = (long *******)pppppplVar42[0x24];
      func_0x000109d47864(*param_1,0x18,&ppppppplStack_2a0,1);
      FUN_109d3b86c(*param_1);
      if (ppppppplStack_500 != apppppplStack_4f0) {
        _free();
      }
    }
  }
  pppppplVar21 = *param_1;
  FUN_109d449c0(pppppplVar21);
  FUN_109d44718(*param_1,param_1[0x43],
                (int)((ulong)((long)pppppplVar21 - (long)param_1[0x53]) >> 5) + 1);
  FUN_109d3b6e4(*param_1,0xe,4);
  pppppplVar21 = (long ******)0x228;
  __Znwm();
  pppppplVar21[1] = (long *****)0x0;
  pppppplVar21[2] = (long *****)0x0;
  *pppppplVar21 = (long *****)&PTR_FUN_110b40f08;
  pppppplVar21[8] = (long *****)0x0;
  pppppplVar21[7] = (long *****)0x0;
  pppppplVar21[10] = (long *****)0x0;
  pppppplVar21[9] = (long *****)0x0;
  pppppplVar21[0xc] = (long *****)0x0;
  pppppplVar21[0xb] = (long *****)0x0;
  pppppplVar21[0xe] = (long *****)0x0;
  pppppplVar21[0xd] = (long *****)0x0;
  pppppplVar21[0x10] = (long *****)0x0;
  pppppplVar21[0xf] = (long *****)0x0;
  pppppplVar21[0x12] = (long *****)0x0;
  pppppplVar21[0x11] = (long *****)0x0;
  pppppplVar21[0x14] = (long *****)0x0;
  pppppplVar21[0x13] = (long *****)0x0;
  pppppplVar21[0x16] = (long *****)0x0;
  pppppplVar21[0x15] = (long *****)0x0;
  pppppplVar21[0x18] = (long *****)0x0;
  pppppplVar21[0x17] = (long *****)0x0;
  pppppplVar21[0x1a] = (long *****)0x0;
  pppppplVar21[0x19] = (long *****)0x0;
  pppppplVar21[0x1c] = (long *****)0x0;
  pppppplVar21[0x1b] = (long *****)0x0;
  pppppplVar21[0x1e] = (long *****)0x0;
  pppppplVar21[0x1d] = (long *****)0x0;
  pppppplVar21[0x20] = (long *****)0x0;
  pppppplVar21[0x1f] = (long *****)0x0;
  pppppplVar21[6] = (long *****)0x0;
  pppppplVar21[5] = (long *****)0x0;
  pppppplVar21[0x22] = (long *****)0x0;
  pppppplVar21[0x21] = (long *****)0x0;
  pppppplVar21[0x24] = (long *****)0x0;
  pppppplVar21[0x23] = (long *****)0x0;
  pppppplVar21[0x26] = (long *****)0x0;
  pppppplVar21[0x25] = (long *****)0x0;
  pppppplVar21[0x28] = (long *****)0x0;
  pppppplVar21[0x27] = (long *****)0x0;
  pppppplVar21[0x2a] = (long *****)0x0;
  pppppplVar21[0x29] = (long *****)0x0;
  pppppplVar21[0x2c] = (long *****)0x0;
  pppppplVar21[0x2b] = (long *****)0x0;
  pppppplVar21[0x2e] = (long *****)0x0;
  pppppplVar21[0x2d] = (long *****)0x0;
  pppppplVar21[0x30] = (long *****)0x0;
  pppppplVar21[0x2f] = (long *****)0x0;
  pppppplVar21[0x32] = (long *****)0x0;
  pppppplVar21[0x31] = (long *****)0x0;
  pppppplVar21[0x34] = (long *****)0x0;
  pppppplVar21[0x33] = (long *****)0x0;
  pppppplVar21[0x36] = (long *****)0x0;
  pppppplVar21[0x35] = (long *****)0x0;
  pppppplVar21[0x38] = (long *****)0x0;
  pppppplVar21[0x37] = (long *****)0x0;
  pppppplVar21[0x3a] = (long *****)0x0;
  pppppplVar21[0x39] = (long *****)0x0;
  pppppplVar21[0x3c] = (long *****)0x0;
  pppppplVar21[0x3b] = (long *****)0x0;
  pppppplVar21[0x3e] = (long *****)0x0;
  pppppplVar21[0x3d] = (long *****)0x0;
  pppppplVar21[0x40] = (long *****)0x0;
  pppppplVar21[0x3f] = (long *****)0x0;
  pppppplVar21[0x42] = (long *****)0x0;
  pppppplVar21[0x41] = (long *****)0x0;
  pppppplVar21[0x44] = (long *****)0x0;
  pppppplVar21[0x43] = (long *****)0x0;
  pppppplVar42 = pppppplVar21 + 3;
  *pppppplVar42 = (long *****)(pppppplVar21 + 5);
  pppppplVar21[4] = (long *****)0x2000000000;
  ppppppplStack_2a0 = (long *******)pppppplVar42;
  pppppplStack_298 = pppppplVar21;
  FUN_109d4444c(pppppplVar42,3,0xff);
  FUN_109d4444c(pppppplVar42,8,4);
  FUN_109d4444c(pppppplVar42,8,4);
  pppppplVar22 = *param_1;
  pppppplStack_298 = (long ******)0x0;
  ppppppplStack_2a0 = (long *******)0x0;
  ppppppplStack_500 = (long *******)pppppplVar42;
  ppppppplStack_4f8 = (long *******)pppppplVar21;
  FUN_109d444b8(pppppplVar22,pppppplVar42);
  FUN_109d4459c(pppppplVar22 + 5,&ppppppplStack_500);
  ppppppplVar46 = ppppppplStack_4f8;
  ppppplVar34 = pppppplVar22[5];
  ppppplVar31 = pppppplVar22[6];
  if (ppppppplStack_4f8 != (long *******)0x0) {
    pppppplVar21 = (long ******)(ppppppplStack_4f8 + 1);
    do {
      ppppplVar35 = *pppppplVar21;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
      if (bVar20) {
        *pppppplVar21 = (long *****)((long)ppppplVar35 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar35 == (long *****)0x0) {
      (*(code *)(*ppppppplStack_4f8)[2])(ppppppplStack_4f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar46);
    }
  }
  pppppplVar21 = param_1[2] + 3;
  pppppplVar42 = (long ******)param_1[2][4];
  if (pppppplVar42 != pppppplVar21) {
    do {
      if (*(char *)(pppppplVar42 + -5) == '\0') {
        if (((long ******)pppppplVar42[2] != pppppplVar42 + 2) ||
           ((*(byte *)((long)pppppplVar42 + -0x15) & 1) != 0)) goto LAB_109d42710;
      }
      else if ((*(char *)(pppppplVar42 + -5) != '\x03') ||
              ((*(uint *)((long)pppppplVar42 + -0x24) & 0x7ffffff) != 0)) {
LAB_109d42710:
        ppppppplVar46 = param_1 + 3;
        FUN_109d51b68(ppppppplVar46,pppppplVar42 + -7);
        ppppppplStack_2c0 = (long *******)((ulong)ppppppplVar46 & 0xffffffff);
        pppppplVar22 = (long ******)&pppppplStack_5f8;
        FUN_109d4eac0(pppppplVar22,pppppplVar42 + -7);
        ppppppplStack_2b8 =
             (long *******)(((ulong)((long)pppppplVar22[1] - (long)param_1[0x53]) >> 5) + 1);
        FUN_109d4a6bc(*param_1,3,&ppppppplStack_2c0,
                      (int)((ulong)((long)ppppplVar31 - (long)ppppplVar34) >> 4) + 3);
      }
      pppppplVar42 = (long ******)pppppplVar42[1];
    } while (pppppplVar42 != pppppplVar21);
  }
  FUN_109d3b86c(*param_1);
  pppppplVar21 = pppppplStack_298;
  if (pppppplStack_298 != (long ******)0x0) {
    pppppplVar42 = pppppplStack_298 + 1;
    do {
      ppppplVar34 = *pppppplVar42;
      cVar17 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(pppppplVar42,0x10);
      if (bVar20) {
        *pppppplVar42 = (long *****)((long)ppppplVar34 + -1);
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (ppppplVar34 == (long *****)0x0) {
      (*(code *)(*pppppplStack_298)[2])(pppppplStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  if (*(char *)(param_1 + 0x45) == '\x01') {
    FUN_109dfd218(param_1 + 0x47,(long)*param_1[0x44] + (long)ppppplVar33,
                  (long)param_1[0x44][1] - (long)ppppplVar33);
    func_0x000109dfd420(&ppppppplStack_500,param_1 + 0x47);
    uVar41 = 0;
    do {
      uVar51 = (*(uint *)((long)&ppppppplStack_500 + uVar41) & 0xff00ff00) >> 8 |
               (*(uint *)((long)&ppppppplStack_500 + uVar41) & 0xff00ff) << 8;
      *(uint *)((long)&ppppppplStack_2a0 + uVar41) = uVar51 >> 0x10 | uVar51 << 0x10;
      bVar20 = uVar41 < 0x10;
      uVar41 = uVar41 + 4;
    } while (bVar20);
    pppppplVar21 = *param_1;
    FUN_109d43c48(pppppplVar21,3,*(undefined4 *)(pppppplVar21 + 4));
    FUN_109d43c48(pppppplVar21,0x11,6);
    FUN_109d43c48(pppppplVar21,5,6);
    lVar32 = 0;
    do {
      FUN_109d44680(pppppplVar21,*(undefined4 *)((long)&ppppppplStack_2a0 + lVar32),6);
      lVar32 = lVar32 + 4;
    } while (lVar32 != 0x14);
    pppppplVar42 = param_1[0x46];
    if (pppppplVar42 != (long ******)0x0) {
      pppppplVar42[1] = (long *****)pppppplStack_298;
      *pppppplVar42 = (long *****)ppppppplStack_2a0;
      *(undefined4 *)(pppppplVar42 + 2) = (undefined4)uStack_290;
    }
  }
  FUN_109d3b86c(*param_1);
  pppppplVar42 = pppppplStack_5f8;
  __ZdlPvSt11align_val_t(pppppplStack_5f8,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return pppppplVar42;
  }
  ___stack_chk_fail();
  pppppplVar22 = pppppplVar21 + 1;
  do {
    ppppplVar33 = *pppppplVar22;
    cVar17 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(pppppplVar22,0x10);
    if (bVar20) {
      *pppppplVar22 = (long *****)((long)ppppplVar33 + -1);
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  if (ppppplVar33 == (long *****)0x0) {
    (*(code *)(*pppppplVar21)[2])(pppppplVar21);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
  }
  __ZdlPvSt11align_val_t(pppppplStack_5f8,8);
  __Unwind_Resume();
  FUN_109d36758(pppppplVar42 + 0x3f,pppppplVar42[0x40]);
  func_0x000109d44a58(pppppplVar42 + 3);
  return pppppplVar42;
}



/* Entry: 109d432cc; end: 109d432ff;  */

long FUN_109d432cc(long param_1)

{
  FUN_109d36758(param_1 + 0x1f8,*(undefined8 *)(param_1 + 0x200));
  func_0x000109d44a58(param_1 + 0x18);
  return param_1;
}



/* Entry: 109d43300; end: 109d43c47;  */

void FUN_109d43300(long *param_1,undefined8 *****param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 param_5,undefined8 param_6)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *****pppppuVar5;
  long **pplVar6;
  long **pplVar7;
  uint uVar8;
  undefined8 *****pppppuVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  undefined4 uVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *****pppppuVar19;
  long ****pppplVar20;
  long ****pppplVar21;
  undefined8 ****ppppuVar22;
  uint uStack_4e4;
  undefined8 ****ppppuStack_4e0;
  long ****pppplStack_4d8;
  long **pplStack_4d0;
  long *plStack_4c8;
  undefined1 *puStack_4c0;
  code *pcStack_4b8;
  undefined8 *puStack_4a8;
  undefined8 ****ppppuStack_4a0;
  long ***ppplStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined4 uStack_47c;
  long **pplStack_478;
  long *plStack_470;
  long *plStack_468;
  long *plStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  int iStack_440;
  uint uStack_434;
  int iStack_42c;
  long **pplStack_428;
  ulong uStack_420;
  ulong uStack_418;
  long *aplStack_410 [4];
  undefined2 uStack_3f0;
  long *plStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined1 uStack_3c9;
  long ***ppplStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  long lStack_3a0;
  undefined4 uStack_398;
  undefined2 uStack_394;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 *puStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [32];
  undefined8 *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined2 uStack_330;
  long *plStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  long *plStack_308;
  long *plStack_300;
  long lStack_2f8;
  undefined2 uStack_2f0;
  long lStack_298;
  long lStack_290;
  undefined8 *puStack_120;
  undefined8 ****ppppuStack_118;
  undefined8 ****ppppuStack_110;
  long lStack_108;
  int iStack_100;
  undefined8 uStack_f8;
  long ***ppplStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_420 = 0;
  uStack_418 = 0;
  pplStack_478 = aplStack_410;
  pplStack_428 = pplStack_478;
  FUN_109dffce4(&pplStack_428,pplStack_478,0x40000,1);
  plStack_310 = param_1 + 0x1a;
  uStack_2f0 = 0x104;
  FUN_109e0c844(auStack_458,&plStack_310);
  if (((uStack_434 & 0xfffffff7) == 3) ||
     (((uStack_434 < 0x1f && ((1 << (ulong)(uStack_434 & 0x1f) & 0x70000080U) != 0)) ||
      (iStack_42c == 5)))) {
    if (uStack_420 == 0) {
      func_0x000109d4f9e8(&pplStack_428,0x14,0);
    }
    else {
      if (uStack_418 < uStack_420 + 0x14) {
        FUN_109dffce4(&pplStack_428,pplStack_478,uStack_420 + 0x14,1);
      }
      uVar13 = uStack_420;
      pplVar6 = pplStack_428;
      lVar16 = (long)pplStack_428 + uStack_420;
      if (uStack_420 < 0x14) {
        uVar1 = uStack_420 + 0x14;
        bVar3 = uStack_420 != 0;
        uStack_420 = uVar1;
        if (bVar3) {
          _memcpy((long)pplStack_428 + 0x14,pplStack_428,uVar13);
          _bzero(pplVar6,uVar13);
        }
        _bzero(lVar16,0x14 - uVar13);
      }
      else {
        func_0x000109d4fa64(&pplStack_428,lVar16 + -0x14,lVar16);
        if (uVar13 - 0x14 != 0) {
          _memmove((long)pplVar6 + 0x14,pplVar6,uVar13 - 0x14);
        }
        *pplVar6 = (long *)0x0;
        pplVar6[1] = (long *)0x0;
        *(undefined4 *)(pplVar6 + 2) = 0;
      }
    }
  }
  iVar12 = *(int *)(param_2 + 1);
  plVar4 = (long *)0x70;
  uStack_47c = param_5;
  ppplStack_3c8 = &pplStack_428;
  __Znwm();
  iVar2 = iRam00000001137e5de8;
  pppplVar20 = &ppplStack_3c8;
  pppppuVar9 = param_2;
  if (iVar12 != 1) {
    pppppuVar9 = (undefined8 *****)0x0;
  }
  *plVar4 = (long)&pplStack_428;
  plVar4[1] = (long)pppppuVar9;
  plVar4[2] = (ulong)(uint)(iVar2 << 0x14);
  plVar4[3] = 0;
  *(undefined4 *)(plVar4 + 4) = 2;
  plVar4[6] = 0;
  plVar4[5] = 0;
  plVar4[8] = 0;
  plVar4[7] = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  plVar4[0xd] = 0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  lStack_3a0 = 0;
  uStack_398 = 6;
  uStack_394 = 0;
  plStack_3c0 = plVar4;
  FUN_109de2484(&uStack_3b8);
  plVar4 = plStack_3c0;
  puStack_380 = auStack_370;
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_378 = 0x400000000;
  puStack_350 = &uStack_340;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 1;
  uStack_330 = 0;
  plStack_320 = (long *)0x0;
  uStack_318 = 0;
  plStack_328 = (long *)0x0;
  FUN_109d43c48(plStack_3c0,0x42,8);
  FUN_109d43c48(plVar4,0x43,8);
  FUN_109d43c48(plVar4,0,4);
  FUN_109d43c48(plVar4,0xc,4);
  FUN_109d43c48(plVar4,0xe,4);
  FUN_109d43c48(plVar4,0xd,4);
  uStack_488 = param_6;
  plStack_310 = param_1;
  func_0x000109d3b950(&plStack_328,&plStack_310);
  ppplStack_498 = ppplStack_3c8;
  plStack_490 = plStack_3c0;
  plStack_310 = plStack_3c0;
  plStack_308 = &uStack_3b8;
  plStack_300 = param_1;
  FUN_109d4fae4(&lStack_2f8,param_1,param_3);
  lStack_108 = 0;
  ppppuStack_110 = (undefined8 *****)0x0;
  uStack_f8 = 0;
  iStack_100 = (int)((ulong)(lStack_290 - lStack_298) >> 4);
  puStack_4a8 = &uStack_3b8;
  ppppuStack_4a0 = param_2;
  puStack_120 = param_4;
  ppppuStack_118 = &ppppuStack_110;
  if (param_4 != (undefined8 *)0x0) {
    plStack_470 = param_4 + 1;
    plVar4 = (long *)*param_4;
    if (plVar4 != plStack_470) {
      do {
        plStack_460 = (long *)plVar4[8];
        plStack_468 = plVar4;
        for (plVar10 = (long *)plVar4[7]; plVar10 != plStack_460; plVar10 = plVar10 + 1) {
          lVar16 = *plVar10;
          if (lVar16 != 0 && *(int *)(lVar16 + 8) == 1) {
            pppplVar20 = *(long *****)(lVar16 + 0x58);
            for (pppplVar21 = *(long *****)(lVar16 + 0x50); pppplVar21 != pppplVar20;
                pppplVar21 = pppplVar21 + 2) {
              puVar17 = (undefined8 *)((ulong)*pppplVar21 & 0xfffffffffffffff8);
              if ((((ulong)*pppplVar21 & 1) == 0) || (puVar17[1] == 0)) {
                ppppuVar22 = (undefined8 ****)*puVar17;
                iVar12 = iStack_100 + 1;
                pppppuVar9 = (undefined8 *****)ppppuStack_110;
                pppppuVar19 = &ppppuStack_110;
                param_2 = &ppppuStack_110;
                iStack_100 = iVar12;
                if ((undefined8 *****)ppppuStack_110 != (undefined8 *****)0x0) {
                  do {
                    while (pppppuVar19 = pppppuVar9, ppppuVar22 < pppppuVar19[4]) {
                      pppppuVar9 = (undefined8 *****)*pppppuVar19;
                      param_2 = pppppuVar19;
                      if ((undefined8 *****)*pppppuVar19 == (undefined8 *****)0x0)
                      goto LAB_109d4369c;
                    }
                    if (ppppuVar22 <= pppppuVar19[4]) goto LAB_109d436f0;
                    pppppuVar9 = (undefined8 *****)pppppuVar19[1];
                  } while ((undefined8 *****)pppppuVar19[1] != (undefined8 *****)0x0);
                  param_2 = pppppuVar19 + 1;
                }
LAB_109d4369c:
                pppppuVar5 = (undefined8 *****)0x30;
                __Znwm();
                pppppuVar5[4] = ppppuVar22;
                *(undefined4 *)(pppppuVar5 + 5) = 0;
                *pppppuVar5 = (undefined8 ****)0x0;
                pppppuVar5[1] = (undefined8 ****)0x0;
                pppppuVar5[2] = pppppuVar19;
                *param_2 = pppppuVar5;
                pppppuVar9 = pppppuVar5;
                if ((undefined8 *****)*ppppuStack_118 != (undefined8 *****)0x0) {
                  ppppuStack_118 = (undefined8 ****)*ppppuStack_118;
                  pppppuVar9 = (undefined8 *****)*param_2;
                }
                func_0x000107c27d40(ppppuStack_110,pppppuVar9);
                lStack_108 = lStack_108 + 1;
                pppppuVar19 = pppppuVar5;
LAB_109d436f0:
                *(int *)(pppppuVar19 + 5) = iVar12;
              }
            }
          }
        }
        plVar10 = (long *)plStack_468[1];
        plVar18 = plStack_468;
        if ((long *)plStack_468[1] == (long *)0x0) {
          do {
            plVar4 = (long *)plVar18[2];
            bVar3 = (long *)*plVar4 != plVar18;
            plVar18 = plVar4;
          } while (bVar3);
        }
        else {
          do {
            plVar4 = plVar10;
            plVar10 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
      } while (plVar4 != plStack_470);
    }
  }
  ppplStack_f0 = ppplStack_498;
  uStack_e8 = (undefined1)uStack_47c;
  uStack_e0 = uStack_488;
  uStack_90 = 0x1032547698badcfe;
  uStack_98 = 0xefcdab8967452301;
  uStack_88 = 0xc3d2e1f0;
  uStack_80 = 0;
  plVar4 = plStack_490;
  FUN_109d449c0();
  plStack_78 = plVar4;
  FUN_109d3ba14(&plStack_310);
  ppppuVar22 = ppppuStack_4a0;
  FUN_109d36758(&ppppuStack_118,ppppuStack_110);
  func_0x000109d44a58(&lStack_2f8);
  plVar4 = plStack_320;
  puVar17 = puStack_4a8;
  plVar10 = plStack_328;
  if (plStack_328 != plStack_320) {
    pppplVar20 = (long ****)0x104;
    plVar18 = plStack_328;
    do {
      lVar16 = *plVar18;
      if (*(char *)(lVar16 + 0x6f) < '\0') {
        if (*(long *)(lVar16 + 0x60) != 0) goto LAB_109d437d8;
      }
      else if (*(char *)(lVar16 + 0x6f) != '\0') {
LAB_109d437d8:
        plStack_3e8 = (long *)0x0;
        uStack_3e0 = 0;
        lStack_3d8 = 0;
        aplStack_410[0] = (long *)(lVar16 + 0xd0);
        uStack_3f0 = 0x104;
        FUN_109e0c844(&plStack_310,aplStack_410);
        pplVar6 = &plStack_310;
        FUN_109de2f94(pplVar6,&plStack_3e8);
        if (pplVar6 == (long **)0x0) {
          param_2 = (undefined8 *****)0x0;
        }
        else {
          param_2 = (undefined8 *****)(ulong)(pplVar6[0xe] != (long *)0x0);
        }
        if ((long)plStack_300 < 0) {
          __ZdlPv(plStack_310);
        }
        if (lStack_3d8 < 0) {
          __ZdlPv(plStack_3e8);
        }
        if ((int)param_2 == 0) goto LAB_109d438f8;
      }
      plVar18 = plVar18 + 1;
      plVar10 = plStack_320;
    } while (plVar18 != plVar4);
  }
  uStack_330 = CONCAT11(1,(undefined1)uStack_330);
  plVar4 = &lStack_2f8;
  plStack_308 = (long *)0x0;
  plStack_300 = (long *)0x0;
  plStack_310 = plVar4;
  FUN_109de326c(&plStack_3e8,plStack_328,(long)plVar10 - (long)plStack_328 >> 3,&plStack_310,puVar17
                ,&uStack_390);
  plVar10 = plStack_3e8;
  if (plStack_3e8 == (long *)0x0) {
    FUN_109d3b4b8(&ppplStack_3c8,0x19,plStack_310,plStack_308);
  }
  else {
    plStack_3e8 = (long *)0x0;
    aplStack_410[0] = plVar10;
    FUN_109d3b1b0(aplStack_410,&uStack_3c9);
    if (aplStack_410[0] != (long *)0x0) {
      (**(code **)(*aplStack_410[0] + 8))();
    }
    if (plStack_3e8 != (long *)0x0) {
      (**(code **)(*plStack_3e8 + 8))();
    }
  }
  if (plStack_310 != plVar4) {
    _free();
  }
LAB_109d438f8:
  plStack_310 = (long *)0x0;
  plStack_308 = (long *)0x0;
  plStack_300 = (long *)0x0;
  FUN_109de25cc(puVar17,0);
  plVar10 = (long *)0x0;
  if (lStack_3a0 != 0) {
    func_0x0001080e0ff0(&plStack_310);
    plVar10 = plStack_310;
  }
  FUN_109de24a4(puVar17,plVar10);
  uVar11 = 0x17;
  FUN_109d3b4b8(&ppplStack_3c8,0x17,plStack_310,(long)plStack_308 - (long)plStack_310);
  uStack_330 = CONCAT11(uStack_330._1_1_,1);
  if (plStack_310 != (long *)0x0) {
    plStack_308 = plStack_310;
    __ZdlPv();
  }
  uVar8 = (uint)uVar11;
  if ((((uStack_434 & 0xfffffff7) != 3) &&
      ((0x1e < uStack_434 || ((1 << (ulong)(uStack_434 & 0x1f) & 0x70000080U) == 0)))) &&
     (iStack_42c != 5)) goto LAB_109d43a58;
  uVar14 = 0x1000007;
  if (iStack_440 < 0x23) {
    if (iStack_440 == 1) {
LAB_109d439d8:
      uVar14 = 0xc;
    }
    else if (iStack_440 == 0x15) {
      uVar14 = 0x12;
    }
    else if (iStack_440 == 0x17) {
      uVar14 = 0x1000012;
    }
    else {
LAB_109d439e0:
      uVar14 = 0xffffffff;
    }
  }
  else {
    if (iStack_440 == 0x23) goto LAB_109d439d8;
    if (iStack_440 != 0x26) {
      if (iStack_440 != 0x25) goto LAB_109d439e0;
      uVar14 = 7;
    }
  }
  *(undefined4 *)pplStack_428 = 0xb17c0de;
  *(undefined4 *)((long)pplStack_428 + 4) = 0;
  *(undefined4 *)(pplStack_428 + 1) = 0x14;
  *(int *)((long)pplStack_428 + 0xc) = (int)uStack_420 + -0x14;
  *(undefined4 *)(pplStack_428 + 2) = uVar14;
  while (uVar8 = (uint)uVar11, (uStack_420 & 0xf) != 0) {
    uVar11 = 0;
    func_0x000109d3acdc(&pplStack_428);
  }
LAB_109d43a58:
  uVar13 = uStack_420;
  if (uStack_420 != 0) {
    pplVar6 = pplStack_428;
    FUN_109e0560c(ppppuVar22);
    uVar8 = (uint)pplVar6;
  }
  iVar12 = (int)uVar13;
  FUN_109d3b46c(&ppplStack_3c8);
  if (cStack_441 < '\0') {
    __ZdlPv(auStack_458[0]);
  }
  pplVar6 = pplStack_428;
  if (pplStack_428 != pplStack_478) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_310 != plVar4) {
    _free();
  }
  FUN_109d3b46c(&ppplStack_3c8);
  if (cStack_441 < '\0') {
    __ZdlPv(auStack_458[0]);
  }
  if (pplStack_428 != pplStack_478) {
    _free();
  }
  pplVar7 = pplVar6;
  __Unwind_Resume();
  pcStack_4b8 = FUN_109d43c48;
  uStack_4e4 = *(uint *)((long)pplVar7 + 0x1c) | uVar8 << (ulong)(*(uint *)(pplVar7 + 3) & 0x1f);
  *(uint *)((long)pplVar7 + 0x1c) = uStack_4e4;
  uVar15 = *(uint *)(pplVar7 + 3) + iVar12;
  if (0x1f < uVar15) {
    ppppuStack_4e0 = param_2;
    pppplStack_4d8 = pppplVar20;
    pplStack_4d0 = pplVar6;
    plStack_4c8 = plVar4;
    puStack_4c0 = &stack0xfffffffffffffff0;
    FUN_109d3a7bc(*pplVar7,&uStack_4e4,&ppppuStack_4e0);
    iVar2 = *(int *)(pplVar7 + 3);
    uVar15 = 0;
    if (iVar2 != 0) {
      uVar15 = uVar8 >> (ulong)(-iVar2 & 0x1f);
    }
    *(uint *)((long)pplVar7 + 0x1c) = uVar15;
    uVar15 = iVar2 + iVar12 & 0x1f;
  }
  *(uint *)(pplVar7 + 3) = uVar15;
  return;
}



/* Entry: 109d43c48; end: 109d43cd3;  */

void FUN_109d43c48(undefined8 *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uStack_34;
  
  uStack_34 = *(uint *)((long)param_1 + 0x1c) | param_2 << (ulong)(*(uint *)(param_1 + 3) & 0x1f);
  *(uint *)((long)param_1 + 0x1c) = uStack_34;
  uVar2 = *(uint *)(param_1 + 3) + param_3;
  if (0x1f < uVar2) {
    FUN_109d3a7bc(*param_1,&uStack_34,&stack0xffffffffffffffd0);
    iVar1 = *(int *)(param_1 + 3);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = param_2 >> (ulong)(-iVar1 & 0x1f);
    }
    *(uint *)((long)param_1 + 0x1c) = uVar2;
    uVar2 = iVar1 + param_3 & 0x1f;
  }
  *(uint *)(param_1 + 3) = uVar2;
  return;
}



/* Entry: 109d43cd4; end: 109d43d4b;  */

void FUN_109d43cd4(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)param_3;
  uVar3 = 1 << (ulong)(iVar2 - 1U & 0x1f);
  if (uVar3 <= param_2) {
    do {
      FUN_109d43c48(param_1,param_2 & uVar3 - 1 | uVar3,param_3);
      param_2 = param_2 >> (ulong)(iVar2 - 1U & 0x1f);
    } while (uVar3 <= param_2);
  }
  *(uint *)((long)param_1 + 0x1c) =
       *(uint *)((long)param_1 + 0x1c) | param_2 << (ulong)(*(uint *)(param_1 + 3) & 0x1f);
  uVar3 = *(uint *)(param_1 + 3) + iVar2;
  if (0x1f < uVar3) {
    FUN_109d3a7bc(*param_1,&stack0xffffffffffffffcc,&stack0xffffffffffffffd0);
    iVar1 = *(int *)(param_1 + 3);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = param_2 >> (ulong)(-iVar1 & 0x1f);
    }
    *(uint *)((long)param_1 + 0x1c) = uVar3;
    uVar3 = iVar1 + iVar2 & 0x1f;
  }
  *(uint *)(param_1 + 3) = uVar3;
  return;
}



/* Entry: 109d43d4c; end: 109d43d97;  */

void FUN_109d43d4c(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  if (*(int *)(param_1 + 3) != 0) {
    uStack_24 = *(undefined4 *)((long)param_1 + 0x1c);
    FUN_109d3a7bc(*param_1,&uStack_24,&stack0xffffffffffffffe0);
    param_1[3] = 0;
  }
  return;
}



/* Entry: 109d43d98; end: 109d43ebf;  */

/* WARNING: Possible PIC construction at 0x000109d43e6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d43e70) */

void FUN_109d43d98(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *unaff_x20;
  long lVar9;
  undefined1 **ppuVar10;
  undefined1 auStack_d0 [64];
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar1 = auStack_60;
  ppuVar10 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar9 = param_1[1] - *param_1;
  uVar6 = (lVar9 >> 3) * -0x3333333333333333 + 1;
  if (uVar6 < 0x666666666666667) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar5 * -0x6666666666666666;
    if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
      uVar8 = uVar6;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_109d43ed4();
    }
    puStack_50 = (undefined4 *)((long)plVar2 + lVar9);
    plStack_40 = plVar2 + uVar8 * 5;
    uVar7 = *param_3;
    *puStack_50 = *(undefined4 *)param_2;
    *(undefined8 *)(puStack_50 + 2) = uVar7;
    *(undefined8 *)(puStack_50 + 4) = 0;
    *(undefined8 *)(puStack_50 + 6) = 0;
    *(undefined8 *)(puStack_50 + 8) = 0;
    unaff_x20 = puStack_50 + 10;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar7 = 0x109d43e70;
    plVar3 = param_1;
    plStack_58 = plVar2;
    puStack_48 = unaff_x20;
  }
  else {
    FUN_109d43ec0();
    func_0x000109d44060(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_109d43ec0;
    plVar3 = (long *)&DAT_10f62a4d8;
    ppuStack_70 = ppuVar10;
    func_0x000104c4f6cc();
    puVar1 = &stack0xffffffffffffff70;
    pcStack_78 = FUN_109d43ed4;
    ppuVar10 = &puStack_80;
    if (param_2 < (undefined8 *)0x666666666666667) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 * 0x28);
      return;
    }
    uVar7 = 0x109d43f18;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000104c4f740();
  }
  *(undefined4 **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar10;
  *(undefined8 *)(puVar1 + -8) = uVar7;
  *(undefined8 **)(puVar1 + -0x30) = param_4;
  *(undefined8 **)(puVar1 + -0x38) = param_4;
  *(long **)(puVar1 + -0x58) = plVar3;
  *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x38;
  *(undefined1 **)(puVar1 + -0x48) = puVar1 + -0x30;
  puVar4 = param_2;
  if (param_2 == param_3) {
    puVar1[-0x40] = 1;
  }
  else {
    do {
      uVar7 = *puVar4;
      param_4[1] = puVar4[1];
      *param_4 = uVar7;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[2] = 0;
      uVar7 = puVar4[2];
      param_4[3] = puVar4[3];
      param_4[2] = uVar7;
      param_4[4] = puVar4[4];
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4 = puVar4 + 5;
      param_4 = param_4 + 5;
    } while (puVar4 != param_3);
    *(undefined8 **)(puVar1 + -0x30) = param_4;
    puVar1[-0x40] = 1;
    do {
      *(undefined8 **)(puVar1 + -0x28) = param_2 + 2;
      FUN_109d3aa18(puVar1 + -0x28);
      param_2 = param_2 + 5;
    } while (param_2 != param_3);
  }
  FUN_109d43fd8(puVar1 + -0x58);
  return;
}



/* Entry: 109d43ec0; end: 109d43ed3;  */

void FUN_109d43ec0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  undefined1 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_80 = &puStack_68;
    ppuStack_78 = &puStack_60;
    puStack_60 = param_4;
    puVar2 = param_2;
    puStack_88 = puVar1;
    puStack_68 = param_4;
    if (param_2 == param_3) {
      uStack_70 = 1;
    }
    else {
      do {
        uVar3 = *puVar2;
        puStack_60[1] = puVar2[1];
        *puStack_60 = uVar3;
        puStack_60[3] = 0;
        puStack_60[4] = 0;
        puStack_60[2] = 0;
        uVar3 = puVar2[2];
        puStack_60[3] = puVar2[3];
        puStack_60[2] = uVar3;
        puStack_60[4] = puVar2[4];
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2 = puVar2 + 5;
        puStack_60 = puStack_60 + 5;
      } while (puVar2 != param_3);
      uStack_70 = 1;
      do {
        puStack_58 = param_2 + 2;
        FUN_109d3aa18(&puStack_58);
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_109d43fd8(&puStack_88);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 109d43ed4; end: 109d43fd7;  */

void FUN_109d43ed4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined1 uStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_70 = &puStack_58;
    ppuStack_68 = &puStack_50;
    puStack_50 = param_4;
    puVar1 = param_2;
    uStack_78 = param_1;
    puStack_58 = param_4;
    if (param_2 == param_3) {
      uStack_60 = 1;
    }
    else {
      do {
        uVar2 = *puVar1;
        puStack_50[1] = puVar1[1];
        *puStack_50 = uVar2;
        puStack_50[3] = 0;
        puStack_50[4] = 0;
        puStack_50[2] = 0;
        uVar2 = puVar1[2];
        puStack_50[3] = puVar1[3];
        puStack_50[2] = uVar2;
        puStack_50[4] = puVar1[4];
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1 = puVar1 + 5;
        puStack_50 = puStack_50 + 5;
      } while (puVar1 != param_3);
      uStack_60 = 1;
      do {
        puStack_48 = param_2 + 2;
        FUN_109d3aa18(&puStack_48);
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_109d43fd8(&uStack_78);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 109d43fd8; end: 109d4400b;  */

long FUN_109d43fd8(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109d4400c(param_1);
  }
  return param_1;
}



/* Entry: 109d4400c; end: 109d440e3;  */

void FUN_109d4400c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x28) {
    lStack_28 = lVar1 + -0x18;
    FUN_109d3aa18(&lStack_28);
  }
  return;
}



/* Entry: 109d440e4; end: 109d4431b;  */

long * FUN_109d440e4(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (0 < param_5) {
    plVar6 = (long *)param_1[1];
    if (param_1[2] - (long)plVar6 >> 4 < param_5) {
      lVar9 = *param_1;
      uVar3 = param_5 + ((long)plVar6 - lVar9 >> 4);
      if (uVar3 >> 0x3c != 0) {
        FUN_109d3b060();
        plVar8 = (long *)param_1[1];
        plVar11 = plVar8;
        for (plVar6 = (long *)((long)param_2 + ((long)plVar8 - (long)param_4)); plVar6 < param_3;
            plVar6 = plVar6 + 2) {
          lVar9 = *plVar6;
          plVar11[1] = plVar6[1];
          *plVar11 = lVar9;
          *plVar6 = 0;
          plVar6[1] = 0;
          plVar11 = plVar11 + 2;
        }
        param_1[1] = (long)plVar11;
        if (plVar8 != param_4) {
          plVar6 = plVar8 + -2;
          lVar9 = (long)param_4 - (long)plVar8;
          lVar12 = (long)param_2 + ((long)plVar6 - (long)param_4);
          do {
            param_1 = plVar6;
            func_0x000109d4439c(plVar6,lVar12);
            plVar6 = plVar6 + -2;
            lVar12 = lVar12 + -0x10;
            lVar9 = lVar9 + 0x10;
          } while (lVar9 != 0);
        }
        return param_1;
      }
      uVar7 = param_1[2] - lVar9;
      uVar10 = (long)uVar7 >> 3;
      if (uVar10 <= uVar3) {
        uVar10 = uVar3;
      }
      if (0x7fffffffffffffef < uVar7) {
        uVar10 = 0xfffffffffffffff;
      }
      plStack_48 = param_1;
      if (uVar10 == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = param_1;
        FUN_109d3b074();
      }
      plVar11 = (long *)((long)plVar6 + ((long)param_2 - lVar9));
      plStack_50 = plVar6 + uVar10 * 2;
      plVar8 = plVar11 + param_5 * 2;
      plVar6 = plVar11;
      do {
        lVar9 = param_3[1];
        lVar12 = *param_3;
        plVar6[1] = param_3[1];
        *plVar6 = lVar12;
        if (lVar9 != 0) {
          plVar2 = (long *)(lVar9 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar6 = plVar6 + 2;
        param_3 = param_3 + 2;
      } while (plVar6 != plVar8);
      _memcpy(plVar8,param_2,param_1[1] - (long)param_2);
      lVar9 = param_1[1];
      param_1[1] = (long)param_2;
      lVar12 = (long)plVar11 - ((long)param_2 - *param_1);
      _memcpy(lVar12);
      lStack_68 = *param_1;
      *param_1 = lVar12;
      param_1[1] = (long)plVar8 + (lVar9 - (long)param_2);
      lVar9 = param_1[2];
      param_1[2] = (long)plStack_50;
      lStack_60 = lStack_68;
      lStack_58 = lStack_68;
      plStack_50 = (long *)lVar9;
      func_0x000109d44400(&lStack_68);
      param_2 = plVar11;
    }
    else {
      lVar9 = (long)plVar6 - (long)param_2 >> 4;
      if (lVar9 < param_5) {
        plVar2 = (long *)(((long)plVar6 - (long)param_2) + (long)param_3);
        plVar8 = plVar6;
        for (plVar11 = plVar2; plVar11 != param_4; plVar11 = plVar11 + 2) {
          lVar12 = plVar11[1];
          lVar13 = *plVar11;
          plVar8[1] = plVar11[1];
          *plVar8 = lVar13;
          if (lVar12 != 0) {
            plVar1 = (long *)(lVar12 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          plVar8 = plVar8 + 2;
        }
        param_1[1] = (long)plVar8;
        if ((0 < lVar9) &&
           (FUN_109d4431c(param_1,param_2,plVar6,param_2 + param_5 * 2), plVar11 = param_2,
           plVar6 != param_2)) {
          do {
            func_0x000109d3afe4(plVar11,param_3);
            param_3 = param_3 + 2;
            plVar11 = plVar11 + 2;
          } while (param_3 != plVar2);
        }
      }
      else {
        FUN_109d4431c(param_1,param_2,plVar6,param_2 + param_5 * 2);
        plVar11 = param_3 + param_5 * 2;
        plVar6 = param_2;
        do {
          func_0x000109d3afe4(plVar6,param_3);
          param_3 = param_3 + 2;
          plVar6 = plVar6 + 2;
        } while (param_3 != plVar11);
      }
    }
  }
  return param_2;
}



/* Entry: 109d4431c; end: 109d4439b;  */

void FUN_109d4431c(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined8 *)((long)puVar1 + (param_2 - (long)param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 2) {
    uVar6 = *puVar2;
    puVar3[1] = puVar2[1];
    *puVar3 = uVar6;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar3 = puVar3 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  if (puVar1 != param_4) {
    puVar2 = puVar1 + -2;
    lVar5 = (long)param_4 - (long)puVar1;
    lVar4 = (long)puVar2 + (param_2 - (long)param_4);
    do {
      FUN_109d4439c(puVar2,lVar4);
      puVar2 = puVar2 + -2;
      lVar4 = lVar4 + -0x10;
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d4439c; end: 109d4444b;  */

undefined8 * FUN_109d4439c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 109d4444c; end: 109d444b7;  */

void FUN_109d4444c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar2 + 1,0x10);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  puVar1 = (undefined8 *)(*param_1 + uVar2 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109d444b8; end: 109d4459b;  */

void FUN_109d444b8(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  FUN_109d43c48(param_1,2,*(undefined4 *)(param_1 + 0x20));
  FUN_109d43cd4(param_1,(int)param_2[1],5);
  if (*(uint *)(param_2 + 1) != 0) {
    lVar14 = 0;
    lVar17 = (ulong)*(uint *)(param_2 + 1) * 0x10;
    do {
      puVar2 = (undefined8 *)(*param_2 + lVar14);
      FUN_109d43c48(param_1,*(byte *)(puVar2 + 1) & 1,1);
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        uVar8 = 3;
        FUN_109d43c48(param_1,*(byte *)(puVar2 + 1) >> 1 & 7);
        uVar9 = *(byte *)(puVar2 + 1) >> 1 & 7;
        if (2 < uVar9 - 3) {
          if (1 < uVar9 - 1) {
            plVar5 = (long *)&UNK_10f47b1ad;
            puVar7 = (undefined8 *)0x1;
            FUN_109df7828();
            pcStack_48 = FUN_109d4459c;
            ppuStack_b0 = &puStack_50;
            puVar13 = (undefined8 *)plVar5[1];
            if (puVar13 < (undefined8 *)plVar5[2]) {
              uVar8 = *puVar7;
              puVar16 = puVar13 + 2;
              puVar13[1] = puVar7[1];
              *puVar13 = uVar8;
              *puVar7 = 0;
              puVar7[1] = 0;
            }
            else {
              lVar15 = (long)puVar13 - *plVar5;
              uVar1 = (lVar15 >> 4) + 1;
              lStack_70 = lVar17;
              lStack_68 = lVar14;
              lStack_60 = param_1;
              plStack_58 = param_2;
              puStack_50 = &stack0xfffffffffffffff0;
              if (uVar1 >> 0x3c != 0) {
                plVar6 = plVar5;
                puVar13 = puVar7;
                FUN_109d3b060();
                pcStack_a8 = FUN_109d44680;
                iVar12 = (int)uVar8;
                plStack_b8 = plVar5;
                puStack_c0 = puVar7;
                lStack_c8 = lVar15;
                lStack_d0 = lVar17;
                uStack_d8 = puVar2;
                if ((ulong)puVar13 >> 0x20 == 0) {
                  uVar9 = 1 << (ulong)(iVar12 - 1U & 0x1f);
                  if (uVar9 <= (uint)puVar13) {
                    do {
                      FUN_109d43c48(plVar6,(uint)puVar13 & uVar9 - 1 | uVar9,uVar8);
                      uVar4 = (uint)puVar13 >> (ulong)(iVar12 - 1U & 0x1f);
                      puVar13 = (undefined8 *)(ulong)uVar4;
                    } while (uVar9 <= uVar4);
                  }
                }
                else {
                  uVar9 = 1 << (ulong)(iVar12 - 1U & 0x1f);
                  do {
                    FUN_109d43c48(plVar6,uVar9 - 1 & (uint)puVar13 | uVar9,uVar8);
                    puVar13 = (undefined8 *)((ulong)puVar13 >> ((ulong)(iVar12 - 1U) & 0x3f));
                  } while ((undefined8 *)(ulong)uVar9 <= puVar13);
                }
                uVar4 = *(uint *)((long)plVar6 + 0x1c) |
                        (uint)puVar13 << (ulong)(*(uint *)(plVar6 + 3) & 0x1f);
                *(uint *)((long)plVar6 + 0x1c) = uVar4;
                uVar9 = *(uint *)(plVar6 + 3) + iVar12;
                if (0x1f < uVar9) {
                  uStack_d8 = (undefined8 *)CONCAT44(uVar4,(undefined4)uStack_d8);
                  FUN_109d3a7bc(*plVar6,(long)&uStack_d8 + 4,&lStack_d0);
                  iVar3 = (int)plVar6[3];
                  uVar9 = 0;
                  if (iVar3 != 0) {
                    uVar9 = (uint)puVar13 >> (ulong)(-iVar3 & 0x1f);
                  }
                  *(uint *)((long)plVar6 + 0x1c) = uVar9;
                  uVar9 = iVar3 + iVar12 & 0x1f;
                }
                *(uint *)(plVar6 + 3) = uVar9;
                return;
              }
              uVar10 = plVar5[2] - *plVar5;
              uVar11 = (long)uVar10 >> 3;
              if (uVar11 <= uVar1) {
                uVar11 = uVar1;
              }
              if (0x7fffffffffffffef < uVar10) {
                uVar11 = 0xfffffffffffffff;
              }
              plVar6 = plVar5;
              plStack_78 = plVar5;
              FUN_109d3b074();
              puVar2 = (undefined8 *)((long)plVar6 + lVar15);
              uVar8 = *puVar7;
              puVar16 = puVar2 + 2;
              puVar2[1] = puVar7[1];
              *puVar2 = uVar8;
              *puVar7 = 0;
              puVar7[1] = 0;
              lVar14 = (long)puVar2 - (plVar5[1] - *plVar5);
              _memcpy(lVar14);
              lStack_98 = *plVar5;
              *plVar5 = lVar14;
              plVar5[1] = (long)puVar16;
              lStack_80 = plVar5[2];
              plVar5[2] = (long)(plVar6 + uVar11 * 2);
              lStack_90 = lStack_98;
              lStack_88 = lStack_98;
              func_0x000109d44400(&lStack_98);
            }
            plVar5[1] = (long)puVar16;
            return;
          }
          uVar8 = 5;
          goto LAB_109d44560;
        }
      }
      else {
        uVar8 = 8;
LAB_109d44560:
        FUN_109d44680(param_1,*puVar2,uVar8);
      }
      lVar14 = lVar14 + 0x10;
    } while (lVar17 - lVar14 != 0);
  }
  return;
}



/* Entry: 109d4459c; end: 109d4467f;  */

void FUN_109d4459c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar12 = *param_2;
    puVar11 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar12;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar10 = (long)puVar2 - *param_1;
    uVar1 = (lVar10 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_109d3b060();
      iVar9 = (int)param_3;
      if ((ulong)param_2 >> 0x20 == 0) {
        uVar6 = 1 << (ulong)(iVar9 - 1U & 0x1f);
        if (uVar6 <= (uint)param_2) {
          do {
            FUN_109d43c48(param_1,(uint)param_2 & uVar6 - 1 | uVar6,param_3);
            uVar4 = (uint)param_2 >> (ulong)(iVar9 - 1U & 0x1f);
            param_2 = (undefined8 *)(ulong)uVar4;
          } while (uVar6 <= uVar4);
        }
      }
      else {
        uVar6 = 1 << (ulong)(iVar9 - 1U & 0x1f);
        do {
          FUN_109d43c48(param_1,uVar6 - 1 & (uint)param_2 | uVar6,param_3);
          param_2 = (undefined8 *)((ulong)param_2 >> ((ulong)(iVar9 - 1U) & 0x3f));
        } while ((undefined8 *)(ulong)uVar6 <= param_2);
      }
      *(uint *)((long)param_1 + 0x1c) =
           *(uint *)((long)param_1 + 0x1c) | (uint)param_2 << (ulong)(*(uint *)(param_1 + 3) & 0x1f)
      ;
      uVar6 = *(uint *)(param_1 + 3) + iVar9;
      if (0x1f < uVar6) {
        FUN_109d3a7bc(*param_1,&stack0xffffffffffffff6c,&stack0xffffffffffffff70);
        iVar3 = (int)param_1[3];
        uVar6 = 0;
        if (iVar3 != 0) {
          uVar6 = (uint)param_2 >> (ulong)(-iVar3 & 0x1f);
        }
        *(uint *)((long)param_1 + 0x1c) = uVar6;
        uVar6 = iVar3 + iVar9 & 0x1f;
      }
      *(uint *)(param_1 + 3) = uVar6;
      return;
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    plVar5 = param_1;
    plStack_38 = param_1;
    FUN_109d3b074();
    puVar2 = (undefined8 *)((long)plVar5 + lVar10);
    uVar12 = *param_2;
    puVar11 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar12;
    *param_2 = 0;
    param_2[1] = 0;
    lVar10 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lStack_58 = *param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar11;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar5 + uVar8 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x000109d44400(&lStack_58);
  }
  param_1[1] = (long)puVar11;
  return;
}



/* Entry: 109d44680; end: 109d44717;  */

void FUN_109d44680(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  if (param_2 >> 0x20 == 0) {
    uVar3 = 1 << (ulong)(iVar4 - 1U & 0x1f);
    if (uVar3 <= (uint)param_2) {
      do {
        FUN_109d43c48(param_1,(uint)param_2 & uVar3 - 1 | uVar3,param_3);
        uVar2 = (uint)param_2 >> (ulong)(iVar4 - 1U & 0x1f);
        param_2 = (ulong)uVar2;
      } while (uVar3 <= uVar2);
    }
  }
  else {
    uVar3 = 1 << (ulong)(iVar4 - 1U & 0x1f);
    do {
      FUN_109d43c48(param_1,uVar3 - 1 & (uint)param_2 | uVar3,param_3);
      param_2 = param_2 >> ((ulong)(iVar4 - 1U) & 0x3f);
    } while (uVar3 <= param_2);
  }
  *(uint *)((long)param_1 + 0x1c) =
       *(uint *)((long)param_1 + 0x1c) | (uint)param_2 << (ulong)(*(uint *)(param_1 + 3) & 0x1f);
  uVar3 = *(uint *)(param_1 + 3) + iVar4;
  if (0x1f < uVar3) {
    FUN_109d3a7bc(*param_1,&stack0xffffffffffffffcc,&stack0xffffffffffffffd0);
    iVar1 = *(int *)(param_1 + 3);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = (uint)param_2 >> (ulong)(-iVar1 & 0x1f);
    }
    *(uint *)((long)param_1 + 0x1c) = uVar3;
    uVar3 = iVar1 + iVar4 & 0x1f;
  }
  *(uint *)(param_1 + 3) = uVar3;
  return;
}



/* Entry: 109d44718; end: 109d4492f;  */

void FUN_109d44718(long *param_1,ulong param_2,uint param_3)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  uint uStack_74;
  uint uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_2 >> 3;
  param_2 = param_2 & 7;
  plVar11 = (long *)param_1[1];
  if (plVar11 == (long *)0x0) {
    uVar6 = 0;
    plVar12 = param_1;
  }
  else {
    plVar12 = plVar11;
    (**(code **)(*plVar11 + 0x50))();
    uVar6 = (long)plVar12 + (plVar11[4] - plVar11[2]);
    uVar5 = uVar6 - uVar10;
    if (uVar10 <= uVar6 && uVar5 != 0) {
      plVar12 = (long *)param_1[1];
      plVar11 = plVar12;
      (**(code **)(*plVar12 + 0x50))(plVar12);
      lVar7 = plVar12[4];
      lVar9 = plVar12[2];
      uVar6 = 4;
      if (param_2 != 0) {
        uVar6 = 8;
      }
      uVar2 = uVar5;
      if (uVar6 <= uVar5) {
        uVar2 = uVar6;
      }
      uVar3 = param_3;
      if (param_2 != 0) {
        FUN_109e05f2c(param_1[1],uVar10);
        FUN_109e06250(param_1[1],&uStack_74,uVar2);
        if (uVar5 < 8) {
          lVar8 = 0;
          plVar12 = (long *)*param_1;
          do {
            *(undefined1 *)((long)&uStack_74 + lVar8 + uVar2) = *(undefined1 *)(*plVar12 + lVar8);
            lVar8 = lVar8 + 1;
          } while (uVar6 - uVar2 != lVar8);
        }
        uVar3 = -1 << param_2;
        uStack_70 = uStack_70 & uVar3 |
                    param_3 >> (ulong)(-(int)param_2 & 0x1f) & (uVar3 ^ 0xffffffff);
        uVar3 = uStack_74 & (uVar3 ^ 0xffffffff) | param_3 << param_2;
      }
      uStack_74 = uVar3;
      FUN_109e05f2c(param_1[1],uVar10);
      FUN_109e0560c(param_1[1],&uStack_74,uVar2);
      if (uVar5 < uVar6) {
        lVar8 = 0;
        do {
          *(undefined1 *)(*(long *)*param_1 + lVar8) =
               *(undefined1 *)((long)&uStack_74 + lVar8 + uVar2);
          lVar8 = lVar8 + 1;
        } while (uVar6 - uVar2 != lVar8);
      }
      plVar12 = (long *)param_1[1];
      FUN_109e05f2c(plVar12,(long)plVar11 + (lVar7 - lVar9));
      goto LAB_109d448f4;
    }
  }
  puVar1 = (uint *)(*(long *)*param_1 + (uVar10 - uVar6));
  if (param_2 != 0) {
    uVar3 = -1 << param_2;
    uVar4 = param_3 >> (ulong)(-(int)param_2 & 0x1f);
    param_3 = *puVar1 & (uVar3 ^ 0xffffffff) | param_3 << param_2;
    puVar1[1] = puVar1[1] & uVar3 | uVar4 & (uVar3 ^ 0xffffffff);
  }
  *puVar1 = param_3;
LAB_109d448f4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (plVar12[1] != 0) {
    if ((ulong)plVar12[2] <= (ulong)((undefined8 *)*plVar12)[1]) {
      FUN_109e0560c(plVar12[1],*(undefined8 *)*plVar12);
      *(undefined8 *)(*plVar12 + 8) = 0;
    }
  }
  return;
}



/* Entry: 109d44930; end: 109d44977;  */

void FUN_109d44930(long *param_1)

{
  if (param_1[1] != 0) {
    if ((ulong)param_1[2] <= (ulong)((undefined8 *)*param_1)[1]) {
      FUN_109e0560c(param_1[1],*(undefined8 *)*param_1);
      *(undefined8 *)(*param_1 + 8) = 0;
    }
  }
  return;
}



/* Entry: 109d44978; end: 109d4498b;  */

undefined1  [16] FUN_109d44978(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  plVar1 = (long *)plVar2[1];
  lVar3 = *(long *)(*plVar2 + 8);
  if (plVar1 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    plVar4 = plVar1;
    (**(code **)(*plVar1 + 0x50))(plVar1);
    lVar5 = (long)plVar4 + (plVar1[4] - plVar1[2]);
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = (ulong)*(uint *)(plVar2 + 3) + (lVar5 + lVar3) * 8;
  return auVar7;
}



/* Entry: 109d4498c; end: 109d449bf;  */

undefined1  [16] FUN_109d4498c(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  plVar1 = (long *)param_1[1];
  lVar2 = *(long *)(*param_1 + 8);
  if (plVar1 == (long *)0x0) {
    lVar4 = 0;
  }
  else {
    plVar3 = plVar1;
    (**(code **)(*plVar1 + 0x50))(plVar1);
    lVar4 = (long)plVar3 + (plVar1[4] - plVar1[2]);
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = (ulong)*(uint *)(param_1 + 3) + (lVar4 + lVar2) * 8;
  return auVar6;
}



/* Entry: 109d449c0; end: 109d44a23;  */

long FUN_109d449c0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)param_1[1];
  lVar4 = *(long *)(*param_1 + 8);
  if (plVar1 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    plVar2 = plVar1;
    (**(code **)(*plVar1 + 0x50))(plVar1);
    lVar3 = (long)plVar2 + (plVar1[4] - plVar1[2]);
  }
  return (ulong)*(uint *)(param_1 + 3) + (lVar3 + lVar4) * 8;
}



/* Entry: 109d44a24; end: 109d44bff;  */

long FUN_109d44a24(long param_1)

{
  FUN_109d36758(param_1 + 0x1f8,*(undefined8 *)(param_1 + 0x200));
  func_0x000109d44a58(param_1 + 0x18);
  return param_1;
}



/* Entry: 109d44c00; end: 109d44c4b;  */

void FUN_109d44c00(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    if (*(long *)(lVar2 + -0x18) != 0) {
      *(long *)(lVar2 + -0x10) = *(long *)(lVar2 + -0x18);
      __ZdlPv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 109d44c4c; end: 109d44e27;  */

/* WARNING: Removing unreachable block (ram,0x000109d47398) */
/* WARNING: Removing unreachable block (ram,0x000109d474d8) */
/* WARNING: Removing unreachable block (ram,0x000109d4749c) */
/* WARNING: Removing unreachable block (ram,0x000109d474ec) */
/* WARNING: Removing unreachable block (ram,0x000109d474b0) */
/* WARNING: Removing unreachable block (ram,0x000109d474b4) */
/* WARNING: Removing unreachable block (ram,0x000109d474cc) */

void FUN_109d44c4c(long *param_1,uint ******param_2,undefined1 **param_3,undefined8 param_4,
                  ulong param_5)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint ******ppppppuVar9;
  undefined1 *puVar10;
  uint ******ppppppuVar11;
  uint ******ppppppuVar12;
  uint ******ppppppuVar13;
  undefined1 **ppuVar14;
  undefined1 *puVar15;
  uint ******ppppppuVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *****pppppuVar22;
  uint ****ppppuVar23;
  uint *****pppppuVar24;
  uint ******ppppppuVar25;
  uint uVar26;
  ulong *puVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  uint ******ppppppuVar31;
  uint ******ppppppuVar32;
  uint ******unaff_x23;
  uint ******ppppppuVar33;
  uint *****pppppuVar34;
  uint ******unaff_x25;
  long *plVar35;
  uint ******unaff_x26;
  ulong uVar36;
  uint ******unaff_x28;
  undefined1 *puStack_ad8;
  undefined8 uStack_ad0;
  undefined1 auStack_ac8 [256];
  long lStack_9c8;
  uint *****pppppuStack_9c0;
  ulong uStack_9b8;
  uint *****pppppuStack_9b0;
  uint *****pppppuStack_9a8;
  uint *****pppppuStack_9a0;
  uint *****pppppuStack_998;
  uint *****pppppuStack_990;
  uint *****pppppuStack_988;
  uint *****pppppuStack_980;
  uint *****pppppuStack_978;
  undefined1 **ppuStack_970;
  code *pcStack_968;
  uint *****pppppuStack_960;
  uint *****pppppuStack_958;
  uint *****pppppuStack_950;
  uint *****pppppuStack_948;
  uint *****pppppuStack_940;
  uint *****pppppuStack_938;
  uint *****pppppuStack_930;
  uint *****pppppuStack_928;
  uint *****pppppuStack_920;
  uint ****ppppuStack_918;
  uint *****pppppuStack_910;
  long lStack_908;
  uint ****appppuStack_900 [2];
  char cStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  uint *****pppppuStack_8c0;
  ulong uStack_8b8;
  uint ****appppuStack_8b0 [4];
  uint *****pppppuStack_890;
  ulong uStack_888;
  uint ****appppuStack_880 [32];
  uint *****pppppuStack_780;
  uint *****pppppuStack_778;
  uint ****ppppuStack_770;
  undefined4 uStack_768;
  uint ****appppuStack_760 [126];
  uint *****pppppuStack_370;
  ulong uStack_368;
  uint ****appppuStack_360 [8];
  long lStack_320;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  undefined1 *puStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [512];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar35 = param_1 + 3;
  ppppppuVar11 = param_2;
  if ((*plVar35 != param_1[4]) && (*(uint *******)(param_1[4] + -0x20) == param_2)) {
    ppppppuVar11 = (uint ******)0x12;
    param_3 = (undefined1 **)0x3;
    FUN_109d3b6e4(*param_1);
    unaff_x25 = (uint ******)param_1[4];
    if ((uint ******)param_1[3] != unaff_x25) {
      do {
        if ((uint ******)unaff_x25[-4] != param_2) break;
        uVar26 = 1;
        if (*(char *)(unaff_x25[-5] + 2) == '\x16') {
          uVar26 = 2;
        }
        ppppppuVar11 = (uint ******)(ulong)uVar26;
        unaff_x26 = (uint ******)unaff_x25[-3];
        ppppppuVar16 = (uint ******)unaff_x25[-2];
        uStack_288 = 0x4000000000;
        unaff_x28 = (uint ******)((long)ppppppuVar16 - (long)unaff_x26);
        puStack_290 = auStack_280;
        if ((ulong)((long)unaff_x28 >> 2) < 0x41) {
          uStack_288._0_4_ = 0;
        }
        else {
          func_0x000107c2b01c(&puStack_290,auStack_280,(long)unaff_x28 >> 2,8);
        }
        if (unaff_x26 != ppppppuVar16) {
          puVar27 = (ulong *)(puStack_290 + (ulong)(uint)uStack_288 * 8);
          ppppppuVar32 = unaff_x26;
          do {
            unaff_x26 = (uint ******)((long)ppppppuVar32 + 4);
            *puVar27 = (ulong)*(uint *)ppppppuVar32;
            puVar27 = puVar27 + 1;
            ppppppuVar32 = unaff_x26;
          } while (unaff_x26 != ppppppuVar16);
        }
        uStack_288 = CONCAT44(uStack_288._4_4_,(uint)uStack_288 + (int)((ulong)unaff_x28 >> 2));
        plVar5 = plVar35;
        FUN_109d51b68(plVar35,unaff_x25[-5]);
        FUN_109d38988(&puStack_290,(ulong)plVar5 & 0xffffffff);
        param_3 = &puStack_290;
        FUN_109d481c4(*param_1,ppppppuVar11,&puStack_290,0);
        if (puStack_290 != auStack_280) {
          _free();
        }
        unaff_x23 = (uint ******)param_1[4];
        if (unaff_x23[-3] != (uint *****)0x0) {
          unaff_x23[-2] = unaff_x23[-3];
          __ZdlPv();
        }
        unaff_x25 = unaff_x23 + -5;
        param_1[4] = (long)unaff_x25;
      } while ((uint ******)param_1[3] != unaff_x25);
    }
    param_1 = (long *)*param_1;
    FUN_109d3b86c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_298 = FUN_109d44e28;
  lStack_320 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *param_1;
  puStack_2a0 = &stack0xfffffffffffffff0;
  FUN_109d449c0();
  FUN_109d4eac0(param_3,ppppppuVar11);
  *(long *)((long)param_3 + 8) = lVar6;
  FUN_109d3b6e4(*param_1,0xc,4);
  FUN_109d524d0(param_1 + 3,ppppppuVar11);
  pppppuStack_960 = appppuStack_880;
  uStack_888 = 0x4000000000;
  pppppuStack_890 = pppppuStack_960;
  func_0x000109d31b50(&pppppuStack_890,(ulong)(param_1[0x39] - param_1[0x38]) >> 3);
  FUN_109d4727c(*param_1,1,&pppppuStack_890,0);
  uStack_888 = uStack_888 & 0xffffffff00000000;
  ppppppuVar12 = (uint ******)(ulong)*(uint *)((long)param_1 + 0x1e4);
  ppppppuVar32 = (uint ******)(ulong)*(uint *)(param_1 + 0x3d);
  ppppppuVar16 = (uint ******)0x0;
  ppppppuVar13 = ppppppuVar32;
  FUN_109d4887c(param_1);
  if ((ulong)*(uint *)((long)param_1 + 0x1dc) < (ulong)(param_1[0x19] - param_1[0x18] >> 3)) {
    FUN_109d3b6e4(*param_1,0xf,3);
    pppppuStack_778 = (uint *****)0x4000000000;
    pppppuStack_780 = &ppppuStack_770;
    FUN_109d4a354(param_1,param_1[0x18] + (ulong)*(uint *)((long)param_1 + 0x1dc) * 8,
                  (int)param_1[0x3c],&pppppuStack_780);
    ppppppuVar13 = (uint ******)
                   ((param_1[0x19] - param_1[0x18] >> 3) -
                   ((ulong)*(uint *)(param_1 + 0x3c) + (ulong)*(uint *)((long)param_1 + 0x1dc)));
    ppppppuVar12 = (uint ******)
                   (param_1[0x18] + (ulong)*(uint *)((long)param_1 + 0x1dc) * 8 +
                   (ulong)*(uint *)(param_1 + 0x3c) * 8);
    ppppppuVar16 = &pppppuStack_780;
    param_5 = 0;
    FUN_109d4a76c(param_1);
    FUN_109d3b86c(*param_1);
    if (pppppuStack_780 != &ppppuStack_770) {
      _free();
    }
  }
  uVar36 = (ulong)(*(uint *)((long)ppppppuVar11 + 0x14) >> 0x1d & 1);
  uStack_8e8 = 1;
  uStack_8e0 = 0xfffffffffffff000;
  uStack_8d8 = 0xfffffffffffff000;
  uStack_8d0 = 0xfffffffffffff000;
  uStack_8c8 = 0xfffffffffffff000;
  pppppuStack_958 = appppuStack_8b0;
  uStack_8b8 = 0x400000000;
  pppppuStack_930 = (uint *****)(ppppppuVar11 + 9);
  ppppppuVar33 = (uint ******)ppppppuVar11[10];
  pppppuStack_8c0 = pppppuStack_958;
  if (ppppppuVar33 != (uint ******)pppppuStack_930) {
    ppppuStack_918 = (uint ****)0x0;
    pppppuStack_940 = &ppppuStack_770;
    pppppuStack_938 = appppuStack_360;
    pppppuStack_948 = appppuStack_760;
    pppppuStack_950 = (uint *****)ppppppuVar11;
    do {
      pppppuStack_920 = (uint *****)(ppppppuVar33 + -3);
      pppppuStack_910 = (uint *****)(uint ******)0x0;
      if (ppppppuVar33 != (uint ******)0x0) {
        pppppuStack_910 = pppppuStack_920;
      }
      pppppuStack_910 = pppppuStack_910 + 5;
      pppppuStack_928 = (uint *****)ppppppuVar33;
      for (unaff_x28 = (uint ******)ppppppuVar33[3]; unaff_x28 != (uint ******)pppppuStack_910;
          unaff_x28 = (uint ******)unaff_x28[1]) {
        ppppppuVar13 = unaff_x28 + -3;
        ppppppuVar12 = (uint ******)0x0;
        if (unaff_x28 != (uint ******)0x0) {
          ppppppuVar12 = ppppppuVar13;
        }
        lVar6 = param_1[0x37];
        *(int *)(param_1 + 0x37) = (int)lVar6 + 1;
        plVar35 = param_1 + 0x34;
        pppppuStack_780 = (uint *****)ppppppuVar13;
        FUN_109d55030(plVar35,&pppppuStack_780);
        *(int *)(plVar35 + 1) = (int)lVar6;
        bVar1 = *(byte *)(ppppppuVar12 + 2);
        uVar26 = (uint)ppppppuVar32;
        unaff_x26 = (uint ******)0xc;
        switch(bVar1) {
        case 0x1d:
          uVar7 = (ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff;
          if ((int)uVar7 != 0) {
            if ((int)uVar7 == 1) {
              if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
                ppppppuVar12 = ppppppuVar12 + -4;
              }
              else {
                ppppppuVar12 = (uint ******)unaff_x28[-4];
              }
              ppppppuVar16 = &pppppuStack_890;
              plVar35 = param_1;
              FUN_109d4ed3c(param_1,*ppppppuVar12,ppppppuVar32);
              uVar17 = 10;
              if (((ulong)plVar35 & 1) == 0) {
                unaff_x26 = (uint ******)0xb;
                goto code_r0x000109d469e0;
              }
            }
            else {
              lVar6 = 0;
              do {
                if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
                  ppppppuVar13 = ppppppuVar12 +
                                 ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
                }
                else {
                  ppppppuVar13 = (uint ******)unaff_x28[-4];
                }
                ppppppuVar16 = &pppppuStack_890;
                FUN_109d4ed3c(param_1,*(undefined8 *)((long)ppppppuVar13 + lVar6),ppppppuVar32);
                lVar6 = lVar6 + 0x20;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
              uVar17 = 10;
            }
            break;
          }
          unaff_x26 = (uint ******)0xa;
          goto code_r0x000109d469e0;
        case 0x1e:
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,unaff_x28[-7]);
          func_0x000109d31b50(&pppppuStack_890,plVar35);
          if ((*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) == 3) {
            plVar35 = param_1 + 3;
            FUN_109d51b68(plVar35,unaff_x28[-0xb]);
            func_0x000109d31b50(&pppppuStack_890,plVar35);
            plVar35 = param_1 + 3;
            FUN_109d51b68(plVar35,unaff_x28[-0xf]);
            func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
          }
          uVar17 = 0xb;
          break;
        case 0x1f:
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar32 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar32 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 6;
          FUN_109d48288(plVar35,**ppppppuVar32);
          func_0x000109d31b50(&pppppuStack_890,(int)plVar35[1] + -1);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar32 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar32 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,*ppppppuVar32);
          func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar32 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar32 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,ppppppuVar32[4]);
          func_0x000109d31b50(&pppppuStack_890,plVar35);
          uVar20 = (*(uint *)((long)ppppppuVar12 + 0x14) >> 1 & 0x3ffffff) - 1;
          uVar7 = (ulong)uVar20;
          if (uVar20 != 0) {
            lVar6 = 0xfffffffe;
            uVar20 = 3;
            do {
              if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
                ppppppuVar32 = ppppppuVar12 +
                               ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
              }
              else {
                ppppppuVar32 = (uint ******)ppppppuVar12[-1];
              }
              plVar35 = param_1 + 3;
              FUN_109d51b68(plVar35,ppppppuVar32[((ulong)(uVar20 - 1) & 0xfffffffe) * 4]);
              func_0x000109d31b50(&pppppuStack_890,plVar35);
              if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
                ppppppuVar32 = ppppppuVar12 +
                               ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
              }
              else {
                ppppppuVar32 = (uint ******)ppppppuVar12[-1];
              }
              uVar28 = (ulong)uVar20;
              if (lVar6 == 0) {
                uVar28 = 1;
              }
              plVar35 = param_1 + 3;
              FUN_109d51b68(plVar35,ppppppuVar32[uVar28 * 4]);
              func_0x000109d31b50(&pppppuStack_890,plVar35);
              lVar6 = lVar6 + -1;
              uVar20 = uVar20 + 2;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar17 = 0xc;
          break;
        case 0x20:
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar32 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar32 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 6;
          FUN_109d48288(plVar35,**ppppppuVar32);
          func_0x000109d31b50(&pppppuStack_890,(int)plVar35[1] + -1);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar32 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar32 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,*ppppppuVar32);
          func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
          iVar18 = (*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) - 1;
          if (iVar18 != 0) {
            lVar6 = 0x20;
            do {
              if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
                ppppppuVar32 = ppppppuVar12 +
                               ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
              }
              else {
                ppppppuVar32 = (uint ******)unaff_x28[-4];
              }
              plVar35 = param_1 + 3;
              FUN_109d51b68(plVar35,*(undefined8 *)((long)ppppppuVar32 + lVar6));
              func_0x000109d31b50(&pppppuStack_890,plVar35);
              lVar6 = lVar6 + 0x20;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
          uVar17 = 0x1f;
          break;
        case 0x21:
          pppppuVar24 = unaff_x28[-7];
          pppppuVar34 = unaff_x28[6];
          if (((int)*(uint *)((long)unaff_x28 + -4) < 0) &&
             (((ulong)ppppppuVar13[((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4 + -1] &
              0xffffffff0) != 0)) {
            FUN_109d4edb8(param_1,ppppppuVar13,ppppppuVar32);
          }
          pppppuStack_780 = unaff_x28[5];
          if ((uint ******)pppppuStack_780 == (uint ******)0x0) {
            uVar17 = 0;
          }
          else {
            plVar35 = param_1 + 0x2b;
            FUN_109d48754(plVar35,&pppppuStack_780);
            uVar17 = (undefined4)plVar35[1];
          }
          func_0x000109d31b50(&pppppuStack_890,uVar17);
          func_0x000109d31b50(&pppppuStack_890,
                              *(ushort *)((long)unaff_x28 + -6) >> 2 & 0x3ff | 0x2000);
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,unaff_x28[-0xf]);
          func_0x000109d31b50(&pppppuStack_890,plVar35);
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,unaff_x28[-0xb]);
          func_0x000109d31b50(&pppppuStack_890,plVar35);
          plVar35 = param_1 + 6;
          FUN_109d48288(plVar35,pppppuVar34);
          func_0x000109d31b50(&pppppuStack_890,(int)plVar35[1] + -1);
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,pppppuVar24,ppppppuVar32);
          uVar20 = *(int *)((long)pppppuVar34 + 0xc) - 1;
          if (uVar20 != 0) {
            lVar6 = 0;
            do {
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppuVar12 = ppppppuVar13 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppuVar12 = (uint ******)unaff_x28[-4];
              }
              plVar35 = param_1 + 3;
              FUN_109d51b68(plVar35,*(undefined8 *)((long)ppppppuVar12 + lVar6));
              func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
              lVar6 = lVar6 + 0x20;
            } while ((ulong)uVar20 << 5 != lVar6);
          }
          if (0xff < *(uint *)(pppppuVar34 + 1)) {
            iVar18 = *(int *)((long)pppppuVar34 + 0xc);
            ppppppuVar12 = ppppppuVar13;
            FUN_109d2f6b8();
            uVar21 = *(uint *)((long)unaff_x28 + -4);
            for (uVar20 = iVar18 - 1;
                uVar20 != (uint)((ulong)((long)ppppppuVar12 -
                                        (long)(ppppppuVar13 + (ulong)-(uVar21 & 0x7ffffff) * 4)) >>
                                5); uVar20 = uVar20 + 1) {
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppuVar33 = ppppppuVar13 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppuVar33 = (uint ******)unaff_x28[-4];
              }
              ppppppuVar16 = &pppppuStack_890;
              FUN_109d4ed3c(param_1,ppppppuVar33[(ulong)uVar20 * 4],ppppppuVar32);
            }
          }
          uVar17 = 0xd;
          break;
        case 0x22:
          if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
            ppppppuVar13 = ppppppuVar13 + ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar13 = (uint ******)unaff_x28[-4];
          }
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,*ppppppuVar13,ppppppuVar32);
          uVar17 = 0x27;
          break;
        case 0x23:
          goto code_r0x000109d469e0;
        case 0x24:
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,ppppppuVar13
                                [((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4]);
          func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
          if ((*(ushort *)((long)unaff_x28 + -6) & 1) != 0) {
            plVar35 = param_1 + 3;
            FUN_109d51b68(plVar35,ppppppuVar13
                                  [((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4 +
                                   4]);
            func_0x000109d31b50(&pppppuStack_890,plVar35);
          }
          uVar17 = 0x30;
          break;
        case 0x25:
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,unaff_x28[-0xb]);
          func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,unaff_x28[-7]);
          func_0x000109d31b50(&pppppuStack_890,plVar35);
          uVar17 = 0x31;
          break;
        case 0x26:
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar32 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar32 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,*ppppppuVar32);
          func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
          iVar18 = -2;
          if ((*(ushort *)((long)ppppppuVar12 + 0x12) & 1) == 0) {
            iVar18 = -1;
          }
          func_0x000109d31b50(&pppppuStack_890,
                              iVar18 + (*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff));
          uVar20 = *(uint *)((long)ppppppuVar12 + 0x14);
          if ((uVar20 >> 0x1e & 1) == 0) {
            uVar7 = (ulong)(uVar20 & 0x7ffffff);
            ppppppuVar32 = ppppppuVar12 + uVar7 * -4;
            uVar3 = *(ushort *)((long)ppppppuVar12 + 0x12);
            lVar6 = 0x20;
            if ((uVar3 & 1) != 0) {
              lVar6 = 0x40;
            }
            ppppppuVar13 = (uint ******)((long)ppppppuVar32 + lVar6);
          }
          else {
            ppppppuVar32 = (uint ******)unaff_x28[-4];
            uVar3 = *(ushort *)((long)ppppppuVar12 + 0x12);
            lVar6 = 0x20;
            if ((uVar3 & 1) != 0) {
              lVar6 = 0x40;
            }
            ppppppuVar13 = (uint ******)((long)ppppppuVar32 + lVar6);
            uVar7 = (ulong)uVar20 & 0x7ffffff;
          }
          if (ppppppuVar13 != ppppppuVar32 + uVar7 * 4) {
            do {
              ppppppuVar33 = ppppppuVar13 + 4;
              plVar35 = param_1 + 3;
              FUN_109d51b68(plVar35,*ppppppuVar13);
              func_0x000109d31b50(&pppppuStack_890,plVar35);
              ppppppuVar13 = ppppppuVar33;
            } while (ppppppuVar33 != ppppppuVar32 + uVar7 * 4);
            uVar3 = *(ushort *)((long)ppppppuVar12 + 0x12);
          }
          if ((uVar3 & 1) != 0) {
            if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
              ppppppuVar12 = ppppppuVar12 +
                             ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
            }
            else {
              ppppppuVar12 = (uint ******)unaff_x28[-4];
            }
            plVar35 = param_1 + 3;
            FUN_109d51b68(plVar35,ppppppuVar12[4]);
            func_0x000109d31b50(&pppppuStack_890,plVar35);
          }
          uVar17 = 0x34;
          break;
        case 0x27:
          ppppppuVar12 = ppppppuVar12 + -4;
          pppppuVar24 = *ppppppuVar12;
          pppppuVar34 = unaff_x28[6];
          if (((int)*(uint *)((long)unaff_x28 + -4) < 0) &&
             (((ulong)ppppppuVar13[((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4 + -1] &
              0xffffffff0) != 0)) {
            FUN_109d4edb8(param_1,ppppppuVar13,ppppppuVar32);
          }
          pppppuStack_780 = unaff_x28[5];
          if ((uint ******)pppppuStack_780 == (uint ******)0x0) {
            uVar17 = 0;
          }
          else {
            plVar35 = param_1 + 0x2b;
            FUN_109d48754(plVar35,&pppppuStack_780);
            uVar17 = (undefined4)plVar35[1];
          }
          func_0x000109d31b50(&pppppuStack_890,uVar17);
          func_0x000109d31b50(&pppppuStack_890,
                              *(ushort *)((long)unaff_x28 + -6) >> 1 & 0x7fe | 0x8000);
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,ppppppuVar12[(ulong)*(uint *)(unaff_x28 + 7) * -4 + -4]);
          func_0x000109d31b50(&pppppuStack_890,plVar35);
          func_0x000109d31b50(&pppppuStack_890,*(undefined4 *)(unaff_x28 + 7));
          uVar7 = (ulong)*(uint *)(unaff_x28 + 7);
          if (*(uint *)(unaff_x28 + 7) != 0) {
            do {
              plVar35 = param_1 + 3;
              FUN_109d51b68(plVar35,ppppppuVar12[(ulong)*(uint *)(unaff_x28 + 7) * -4]);
              func_0x000109d31b50(&pppppuStack_890,plVar35);
              ppppppuVar12 = ppppppuVar12 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          plVar35 = param_1 + 6;
          FUN_109d48288(plVar35,pppppuVar34);
          func_0x000109d31b50(&pppppuStack_890,(int)plVar35[1] + -1);
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,pppppuVar24,ppppppuVar32);
          uVar20 = *(int *)((long)pppppuVar34 + 0xc) - 1;
          if (uVar20 != 0) {
            lVar6 = 0;
            do {
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppuVar12 = ppppppuVar13 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppuVar12 = (uint ******)unaff_x28[-4];
              }
              plVar35 = param_1 + 3;
              FUN_109d51b68(plVar35,*(undefined8 *)((long)ppppppuVar12 + lVar6));
              func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
              lVar6 = lVar6 + 0x20;
            } while ((ulong)uVar20 << 5 != lVar6);
          }
          if (0xff < *(uint *)(pppppuVar34 + 1)) {
            iVar18 = *(int *)((long)pppppuVar34 + 0xc);
            ppppppuVar12 = ppppppuVar13;
            FUN_109d2f6b8();
            uVar21 = *(uint *)((long)unaff_x28 + -4);
            for (uVar20 = iVar18 - 1;
                uVar20 != (uint)((ulong)((long)ppppppuVar12 -
                                        (long)(ppppppuVar13 + (ulong)-(uVar21 & 0x7ffffff) * 4)) >>
                                5); uVar20 = uVar20 + 1) {
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppuVar33 = ppppppuVar13 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppuVar33 = (uint ******)unaff_x28[-4];
              }
              ppppppuVar16 = &pppppuStack_890;
              FUN_109d4ed3c(param_1,ppppppuVar33[(ulong)uVar20 * 4],ppppppuVar32);
            }
          }
          uVar17 = 0x39;
          break;
        case 0x28:
          if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
            ppppppuVar12 = ppppppuVar13 + ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar12 = (uint ******)unaff_x28[-4];
          }
          ppppppuVar16 = &pppppuStack_890;
          plVar35 = param_1;
          FUN_109d4ed3c(param_1,*ppppppuVar12,ppppppuVar32);
          uVar20 = 0;
          if ((int)plVar35 == 0) {
            uVar20 = 5;
          }
          func_0x000109d31b50(&pppppuStack_890,0);
          FUN_109d49e20();
          if (ppppppuVar13 != (uint ******)0x0) {
            uVar20 = 0;
            if ((int)plVar35 == 0) {
              uVar20 = 6;
            }
            func_0x000109d31b50(&pppppuStack_890);
          }
          unaff_x26 = (uint ******)(ulong)uVar20;
          uVar17 = 0x38;
          goto LAB_109d469b0;
        default:
          uVar20 = *(uint *)((long)ppppppuVar12 + 0x14);
          if (bVar1 - 0x42 < 0xd) {
            if ((uVar20 >> 0x1e & 1) == 0) {
              ppppppuVar33 = ppppppuVar12 + ((ulong)uVar20 & 0x7ffffff) * -4;
            }
            else {
              ppppppuVar33 = (uint ******)unaff_x28[-4];
            }
            ppppppuVar16 = &pppppuStack_890;
            plVar35 = param_1;
            FUN_109d4ed3c(param_1,*ppppppuVar33,ppppppuVar32);
            uVar20 = 0;
            if ((int)plVar35 == 0) {
              uVar20 = 9;
            }
            plVar35 = param_1 + 6;
            FUN_109d48288(plVar35,*ppppppuVar13);
            func_0x000109d31b50(&pppppuStack_890,(int)plVar35[1] + -1);
            func_0x000109d31b50(&pppppuStack_890,*(char *)(ppppppuVar12 + 2) + -0x42);
            uVar17 = 3;
            unaff_x26 = (uint ******)(ulong)uVar20;
          }
          else {
            if ((uVar20 >> 0x1e & 1) == 0) {
              ppppppuVar33 = ppppppuVar12 + (ulong)(uVar20 & 0x7ffffff) * -4;
            }
            else {
              ppppppuVar33 = (uint ******)unaff_x28[-4];
            }
            ppppppuVar16 = &pppppuStack_890;
            plVar35 = param_1;
            FUN_109d4ed3c(param_1,*ppppppuVar33,ppppppuVar32);
            bVar4 = (int)plVar35 == 0;
            uVar20 = 0;
            if (bVar4) {
              uVar20 = 8;
            }
            uVar21 = 0;
            if (bVar4) {
              uVar21 = 7;
            }
            unaff_x26 = (uint ******)(ulong)uVar21;
            if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
              ppppppuVar32 = ppppppuVar12 +
                             ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
            }
            else {
              ppppppuVar32 = (uint ******)unaff_x28[-4];
            }
            plVar35 = param_1 + 3;
            FUN_109d51b68(plVar35,ppppppuVar32[4]);
            func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
            uVar7 = (ulong)(*(byte *)(ppppppuVar12 + 2) - 0x1c);
            func_0x000109d49e0c(uVar7);
            func_0x000109d31b50(&pppppuStack_890,uVar7);
            FUN_109d49e20();
            if (ppppppuVar13 == (uint ******)0x0) {
              uVar17 = 2;
            }
            else {
              func_0x000109d31b50(&pppppuStack_890);
              uVar17 = 2;
              unaff_x26 = (uint ******)(ulong)uVar20;
            }
          }
          goto LAB_109d469b0;
        case 0x3b:
          plVar35 = param_1 + 6;
          FUN_109d48288(plVar35,unaff_x28[5]);
          func_0x000109d31b50(&pppppuStack_890,(int)plVar35[1] + -1);
          if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
            ppppppuVar32 = ppppppuVar13 + ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar32 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 6;
          FUN_109d48288(plVar35,**ppppppuVar32);
          func_0x000109d31b50(&pppppuStack_890,(int)plVar35[1] + -1);
          if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
            ppppppuVar32 = ppppppuVar13 + ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar32 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,*ppppppuVar32);
          func_0x000109d31b50(&pppppuStack_890,plVar35);
          uVar3 = *(ushort *)((long)unaff_x28 + -6);
          uVar20 = (uVar3 & 0x3f) + 1;
          func_0x000109d31b50(&pppppuStack_890,
                              uVar3 & 0x80 | uVar3 >> 1 & 0x20 | uVar20 & 0x1f | (uVar20 >> 5) << 8
                              | 0x40);
          if (*(uint *)(*ppppppuVar13 + 1) >> 8 != *(uint *)(param_1[2] + 0x104)) {
            func_0x000109d31b50(&pppppuStack_890);
          }
          uVar17 = 0x13;
          break;
        case 0x3c:
          ppppppuVar16 = ppppppuVar13;
          FUN_109d8b368();
          uVar20 = *(uint *)((long)unaff_x28 + -4);
          if ((int)ppppppuVar16 == 0) {
            if ((uVar20 >> 0x1e & 1) == 0) {
              ppppppuVar12 = ppppppuVar13 + (ulong)(uVar20 & 0x7ffffff) * -4;
            }
            else {
              ppppppuVar12 = (uint ******)unaff_x28[-4];
            }
            ppppppuVar16 = &pppppuStack_890;
            plVar35 = param_1;
            FUN_109d4ed3c(param_1,*ppppppuVar12,ppppppuVar32);
            uVar20 = 0;
            if ((int)plVar35 == 0) {
              uVar20 = 4;
            }
            unaff_x26 = (uint ******)(ulong)uVar20;
            uVar17 = 0x14;
          }
          else {
            if ((uVar20 >> 0x1e & 1) == 0) {
              ppppppuVar12 = ppppppuVar13 + ((ulong)uVar20 & 0x7ffffff) * -4;
            }
            else {
              ppppppuVar12 = (uint ******)unaff_x28[-4];
            }
            ppppppuVar16 = &pppppuStack_890;
            FUN_109d4ed3c(param_1,*ppppppuVar12,ppppppuVar32);
            unaff_x26 = (uint ******)0x0;
            uVar17 = 0x29;
          }
          plVar35 = param_1 + 6;
          FUN_109d48288(plVar35,*ppppppuVar13);
          func_0x000109d31b50(&pppppuStack_890,(int)plVar35[1] + -1);
          func_0x000109d31b50(&pppppuStack_890,(*(ushort *)((long)unaff_x28 + -6) >> 1 & 0x3f) + 1);
          func_0x000109d31b50(&pppppuStack_890,*(ushort *)((long)unaff_x28 + -6) & 1);
          FUN_109d8b368();
          if ((int)ppppppuVar13 != 0) {
            uVar7 = (ulong)(*(ushort *)((long)unaff_x28 + -6) >> 7 & 7);
            func_0x000109d4ef70(uVar7);
            func_0x000109d31b50(&pppppuStack_890,uVar7);
            func_0x000109d31b50(&pppppuStack_890,*(undefined1 *)((long)unaff_x28 + 0x24));
          }
LAB_109d469b0:
          lVar6 = *param_1;
          if ((int)unaff_x26 == 0) goto LAB_109d467f4;
          goto LAB_109d469e4;
        case 0x3d:
          ppppppuVar16 = ppppppuVar13;
          FUN_109d8b368();
          uVar17 = 0x2c;
          if ((int)ppppppuVar16 != 0) {
            uVar17 = 0x2d;
          }
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar16 = ppppppuVar13 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar16 = (uint ******)unaff_x28[-4];
          }
          FUN_109d4ed3c(param_1,ppppppuVar16[4],ppppppuVar32,&pppppuStack_890);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar12 = ppppppuVar13 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar12 = (uint ******)unaff_x28[-4];
          }
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,*ppppppuVar12,ppppppuVar32);
          func_0x000109d31b50(&pppppuStack_890,(*(ushort *)((long)unaff_x28 + -6) >> 1 & 0x3f) + 1);
          func_0x000109d31b50(&pppppuStack_890,*(ushort *)((long)unaff_x28 + -6) & 1);
          FUN_109d8b368();
          if ((int)ppppppuVar13 != 0) {
            uVar7 = (ulong)(*(ushort *)((long)unaff_x28 + -6) >> 7 & 7);
            func_0x000109d4ef70(uVar7);
            func_0x000109d31b50(&pppppuStack_890,uVar7);
            func_0x000109d31b50(&pppppuStack_890,*(undefined1 *)((long)unaff_x28 + 0x24));
          }
          break;
        case 0x3e:
          func_0x000109d31b50(&pppppuStack_890,*(byte *)((long)unaff_x28 + -7) >> 1 & 1);
          plVar35 = param_1 + 6;
          FUN_109d48288(plVar35,unaff_x28[5]);
          func_0x000109d31b50(&pppppuStack_890,(int)plVar35[1] + -1);
          uVar7 = (ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff;
          if ((int)uVar7 != 0) {
            lVar6 = 0;
            do {
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppuVar16 = ppppppuVar13 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppuVar16 = (uint ******)unaff_x28[-4];
              }
              FUN_109d4ed3c(param_1,*(undefined8 *)((long)ppppppuVar16 + lVar6),ppppppuVar32,
                            &pppppuStack_890);
              lVar6 = lVar6 + 0x20;
            } while (uVar7 * 0x20 - lVar6 != 0);
          }
          unaff_x26 = (uint ******)0xd;
          goto code_r0x000109d469e0;
        case 0x3f:
          uVar7 = (ulong)(*(ushort *)((long)unaff_x28 + -6) & 7);
          func_0x000109d4ef70(uVar7);
          func_0x000109d31b50(&pppppuStack_890,uVar7);
          func_0x000109d31b50(&pppppuStack_890,*(undefined1 *)((long)unaff_x28 + 0x24));
          uVar17 = 0x24;
          break;
        case 0x40:
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar16 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar16 = (uint ******)unaff_x28[-4];
          }
          FUN_109d4ed3c(param_1,*ppppppuVar16,ppppppuVar32,&pppppuStack_890);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar13 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar13 = (uint ******)unaff_x28[-4];
          }
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,ppppppuVar13[4],ppppppuVar32);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar32 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar32 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,ppppppuVar32[8]);
          func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
          func_0x000109d31b50(&pppppuStack_890,*(ushort *)((long)ppppppuVar12 + 0x12) & 1);
          uVar7 = (ulong)(*(ushort *)((long)ppppppuVar12 + 0x12) >> 2 & 7);
          func_0x000109d4ef70(uVar7);
          func_0x000109d31b50(&pppppuStack_890,uVar7);
          func_0x000109d31b50(&pppppuStack_890,*(undefined1 *)((long)unaff_x28 + 0x24));
          uVar7 = (ulong)(*(ushort *)((long)ppppppuVar12 + 0x12) >> 5 & 7);
          func_0x000109d4ef70(uVar7);
          func_0x000109d31b50(&pppppuStack_890,uVar7);
          func_0x000109d31b50(&pppppuStack_890,*(ushort *)((long)ppppppuVar12 + 0x12) >> 1 & 1);
          func_0x000109d31b50(&pppppuStack_890,(*(byte *)((long)ppppppuVar12 + 0x13) & 0x3f) + 1);
          uVar17 = 0x2e;
          break;
        case 0x41:
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar16 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar16 = (uint ******)unaff_x28[-4];
          }
          FUN_109d4ed3c(param_1,*ppppppuVar16,ppppppuVar32,&pppppuStack_890);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar13 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar13 = (uint ******)unaff_x28[-4];
          }
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,ppppppuVar13[4],ppppppuVar32);
          func_0x000109d31b50(&pppppuStack_890,*(ushort *)((long)ppppppuVar12 + 0x12) >> 4 & 0x1f);
          func_0x000109d31b50(&pppppuStack_890,*(ushort *)((long)ppppppuVar12 + 0x12) & 1);
          uVar7 = (ulong)(*(ushort *)((long)ppppppuVar12 + 0x12) >> 1 & 7);
          func_0x000109d4ef70(uVar7);
          func_0x000109d31b50(&pppppuStack_890,uVar7);
          func_0x000109d31b50(&pppppuStack_890,*(undefined1 *)((long)unaff_x28 + 0x24));
          func_0x000109d31b50(&pppppuStack_890,
                              (*(ushort *)((long)ppppppuVar12 + 0x12) >> 9 & 0x3f) + 1);
          uVar17 = 0x3b;
          break;
        case 0x4f:
        case 0x50:
          uVar17 = 0x32;
          if (bVar1 != 0x50) {
            uVar17 = 0x33;
          }
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,unaff_x28[-7]);
          func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
          uVar20 = (*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) - 1;
          uVar7 = (ulong)uVar20;
          func_0x000109d31b50(&pppppuStack_890,uVar7);
          if (uVar20 != 0) {
            do {
              ppppppuVar16 = &pppppuStack_890;
              FUN_109d4ed3c(param_1,ppppppuVar13
                                    [((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4],
                            ppppppuVar32);
              ppppppuVar13 = ppppppuVar13 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          break;
        case 0x51:
        case 0x52:
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar33 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar33 = (uint ******)unaff_x28[-4];
          }
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,*ppppppuVar33,ppppppuVar32);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar12 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar12 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,ppppppuVar12[4]);
          func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
          func_0x000109d31b50(&pppppuStack_890,*(ushort *)((long)unaff_x28 + -6) & 0x3f);
          FUN_109d49e20();
          if (ppppppuVar13 != (uint ******)0x0) {
            func_0x000109d31b50(&pppppuStack_890);
          }
          uVar17 = 0x1c;
          break;
        case 0x53:
          pppppuStack_780 = pppppuStack_940;
          pppppuStack_778 = (uint *****)0x8000000000;
          plVar35 = param_1 + 6;
          FUN_109d48288(plVar35,*ppppppuVar13);
          FUN_109d38988(&pppppuStack_780,(int)plVar35[1] + -1);
          uVar7 = (ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff;
          if ((int)uVar7 != 0) {
            lVar30 = 0;
            lVar6 = 0;
            unaff_x26 = (uint ******)(uVar7 * 0x20);
            do {
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppuVar32 = ppppppuVar13 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppuVar32 = (uint ******)unaff_x28[-4];
              }
              plVar35 = param_1 + 3;
              FUN_109d51b68(plVar35,*(undefined8 *)((long)ppppppuVar32 + lVar6));
              uVar20 = uVar26 - (int)plVar35;
              uVar7 = (long)(int)uVar20 * -2 + 1;
              if ((int)plVar35 <= (int)uVar26) {
                uVar7 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar20 << 1;
              }
              FUN_109d38988(&pppppuStack_780,uVar7);
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppuVar32 = ppppppuVar13 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppuVar32 = (uint ******)unaff_x28[-4];
              }
              plVar35 = param_1 + 3;
              FUN_109d51b68(plVar35,*(undefined8 *)
                                     ((long)ppppppuVar32 +
                                     lVar30 + (ulong)*(uint *)((long)unaff_x28 + 0x24) * 0x20));
              FUN_109d38988(&pppppuStack_780,(ulong)plVar35 & 0xffffffff);
              lVar6 = lVar6 + 0x20;
              lVar30 = lVar30 + 8;
            } while ((long)unaff_x26 - lVar6 != 0);
          }
          FUN_109d49e20();
          if (ppppppuVar13 != (uint ******)0x0) {
            FUN_109d38988(&pppppuStack_780);
          }
          lVar6 = *param_1;
          iVar18 = (int)pppppuStack_778;
          uVar7 = (ulong)pppppuStack_778 & 0xffffffff;
          FUN_109d43c48(lVar6,3,*(undefined4 *)(lVar6 + 0x20));
          FUN_109d43c48(lVar6,0x10,6);
          ppppppuVar13 = (uint ******)0x6;
          FUN_109d43cd4(lVar6,uVar7);
          if (iVar18 != 0) {
            lVar30 = 0;
            do {
              ppppppuVar13 = (uint ******)0x6;
              FUN_109d44680(lVar6,*(undefined8 *)((long)pppppuStack_780 + lVar30));
              lVar30 = lVar30 + 8;
            } while (uVar7 * 8 - lVar30 != 0);
          }
          pppppuStack_778 = (uint *****)((ulong)pppppuStack_778 & 0xffffffff00000000);
          if (pppppuStack_780 != pppppuStack_940) {
            _free();
          }
          goto code_r0x000109d46858;
        case 0x54:
          pppppuVar34 = unaff_x28[6];
          if (((int)*(uint *)((long)unaff_x28 + -4) < 0) &&
             (((ulong)ppppppuVar13[((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4 + -1] &
              0xffffffff0) != 0)) {
            FUN_109d4edb8(param_1,ppppppuVar13,ppppppuVar32);
          }
          pppppuStack_780 = unaff_x28[5];
          if ((uint ******)pppppuStack_780 == (uint ******)0x0) {
            uVar17 = 0;
          }
          else {
            plVar35 = param_1 + 0x2b;
            FUN_109d48754(plVar35,&pppppuStack_780);
            uVar17 = (undefined4)plVar35[1];
          }
          func_0x000109d31b50(&pppppuStack_890,uVar17);
          ppppppuVar11 = ppppppuVar13;
          FUN_109d49e20();
          uVar20 = *(ushort *)((long)unaff_x28 + -6) >> 1 & 0x7fe;
          uVar21 = *(ushort *)((long)unaff_x28 + -6) & 3;
          if (uVar21 - 1 < 2) {
            uVar20 = uVar20 + 1;
          }
          uVar29 = 0x4000;
          if (uVar21 != 2) {
            uVar29 = 0;
          }
          uVar19 = 0x10000;
          if (uVar21 != 3) {
            uVar19 = 0;
          }
          uVar21 = 0x8000;
          if (ppppppuVar11 != (uint ******)0x0) {
            uVar21 = 0x28000;
          }
          func_0x000109d31b50(&pppppuStack_890,uVar29 | uVar21 | uVar19 | uVar20);
          if (ppppppuVar11 != (uint ******)0x0) {
            func_0x000109d31b50(&pppppuStack_890,ppppppuVar11);
          }
          plVar35 = param_1 + 6;
          FUN_109d48288(plVar35,pppppuVar34);
          func_0x000109d31b50(&pppppuStack_890,(int)plVar35[1] + -1);
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,unaff_x28[-7],ppppppuVar32);
          uVar20 = *(int *)((long)pppppuVar34 + 0xc) - 1;
          uVar7 = (ulong)uVar20;
          if (uVar20 != 0) {
            lVar6 = 8;
            ppppppuVar11 = ppppppuVar13;
            do {
              cVar2 = *(char *)(*(long *)((long)pppppuVar34[2] + lVar6) + 8);
              plVar35 = param_1 + 3;
              FUN_109d51b68(plVar35,ppppppuVar11
                                    [((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4]);
              iVar18 = (int)plVar35;
              if (cVar2 != '\b') {
                iVar18 = uVar26 - (int)plVar35;
              }
              func_0x000109d31b50(&pppppuStack_890,iVar18);
              ppppppuVar11 = ppppppuVar11 + 4;
              lVar6 = lVar6 + 8;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          if (*(uint *)(pppppuVar34 + 1) < 0x100) {
            uVar17 = 0x22;
            ppppppuVar11 = (uint ******)pppppuStack_950;
          }
          else {
            iVar18 = *(int *)((long)pppppuVar34 + 0xc);
            ppppppuVar12 = ppppppuVar13;
            FUN_109d2f6b8();
            ppppppuVar11 = (uint ******)pppppuStack_950;
            uVar21 = *(uint *)((long)unaff_x28 + -4);
            for (uVar20 = iVar18 - 1;
                uVar20 != (uint)((ulong)((long)ppppppuVar12 -
                                        (long)(ppppppuVar13 + (ulong)-(uVar21 & 0x7ffffff) * 4)) >>
                                5); uVar20 = uVar20 + 1) {
              ppppppuVar16 = &pppppuStack_890;
              FUN_109d4ed3c(param_1,ppppppuVar13
                                    [((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4 +
                                     (ulong)uVar20 * 4],ppppppuVar32);
            }
            uVar17 = 0x22;
          }
          break;
        case 0x55:
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar16 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar16 = (uint ******)unaff_x28[-4];
          }
          FUN_109d4ed3c(param_1,ppppppuVar16[4],ppppppuVar32,&pppppuStack_890);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar16 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar16 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,ppppppuVar16[8]);
          func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar12 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar12 = (uint ******)unaff_x28[-4];
          }
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,*ppppppuVar12,ppppppuVar32);
          FUN_109d49e20();
          if (ppppppuVar13 != (uint ******)0x0) {
            func_0x000109d31b50(&pppppuStack_890);
          }
          uVar17 = 0x1d;
          break;
        case 0x58:
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar32 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar32 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 6;
          FUN_109d48288(plVar35,**ppppppuVar32);
          func_0x000109d31b50(&pppppuStack_890,(int)plVar35[1] + -1);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar12 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar12 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,*ppppppuVar12);
          func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
          plVar35 = param_1 + 6;
          FUN_109d48288(plVar35,*ppppppuVar13);
          func_0x000109d31b50(&pppppuStack_890,(int)plVar35[1] + -1);
          uVar17 = 0x17;
          break;
        case 0x59:
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar16 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar16 = (uint ******)unaff_x28[-4];
          }
          FUN_109d4ed3c(param_1,*ppppppuVar16,ppppppuVar32,&pppppuStack_890);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar12 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar12 = (uint ******)unaff_x28[-4];
          }
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,ppppppuVar12[4],ppppppuVar32);
          uVar17 = 6;
          break;
        case 0x5a:
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar16 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar16 = (uint ******)unaff_x28[-4];
          }
          FUN_109d4ed3c(param_1,*ppppppuVar16,ppppppuVar32,&pppppuStack_890);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar16 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar16 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,ppppppuVar16[4]);
          func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar12 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar12 = (uint ******)unaff_x28[-4];
          }
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,ppppppuVar12[8],ppppppuVar32);
          uVar17 = 7;
          break;
        case 0x5b:
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar13 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar13 = (uint ******)unaff_x28[-4];
          }
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,*ppppppuVar13,ppppppuVar32);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar12 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar12 = (uint ******)unaff_x28[-4];
          }
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,ppppppuVar12[4]);
          func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,unaff_x28[9]);
          func_0x000109d31b50(&pppppuStack_890,uVar26 - (int)plVar35);
          uVar17 = 8;
          break;
        case 0x5c:
          if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
            ppppppuVar13 = ppppppuVar13 + ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar13 = (uint ******)unaff_x28[-4];
          }
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,*ppppppuVar13,ppppppuVar32);
          FUN_109d36160(&pppppuStack_890,unaff_x28[5],
                        (long)unaff_x28[5] + (ulong)*(uint *)(unaff_x28 + 6) * 4);
          uVar17 = 0x1a;
          break;
        case 0x5d:
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar16 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar16 = (uint ******)unaff_x28[-4];
          }
          FUN_109d4ed3c(param_1,*ppppppuVar16,ppppppuVar32,&pppppuStack_890);
          if ((*(uint *)((long)ppppppuVar12 + 0x14) >> 0x1e & 1) == 0) {
            ppppppuVar12 = ppppppuVar12 +
                           ((ulong)*(uint *)((long)ppppppuVar12 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar12 = (uint ******)unaff_x28[-4];
          }
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,ppppppuVar12[4],ppppppuVar32);
          FUN_109d36160(&pppppuStack_890,unaff_x28[5],
                        (long)unaff_x28[5] + (ulong)*(uint *)(unaff_x28 + 6) * 4);
          uVar17 = 0x1b;
          break;
        case 0x5e:
          plVar35 = param_1 + 6;
          FUN_109d48288(plVar35,*ppppppuVar13);
          func_0x000109d31b50(&pppppuStack_890,(int)plVar35[1] + -1);
          func_0x000109d31b50(&pppppuStack_890,*(ushort *)((long)unaff_x28 + -6) & 1);
          func_0x000109d31b50(&pppppuStack_890,*(uint *)((long)unaff_x28 + -4) & 0x7ffffff);
          uVar7 = (ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff;
          if ((int)uVar7 != 0) {
            lVar6 = 0;
            do {
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppuVar16 = ppppppuVar13 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppuVar16 = (uint ******)unaff_x28[-4];
              }
              func_0x000109d31b50(&pppppuStack_890,
                                  *(char *)(**(long **)((long)ppppppuVar16 + lVar6) + 8) == '\x11');
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppuVar12 = ppppppuVar13 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppuVar12 = (uint ******)unaff_x28[-4];
              }
              ppppppuVar16 = &pppppuStack_890;
              FUN_109d4ed3c(param_1,*(undefined8 *)((long)ppppppuVar12 + lVar6),ppppppuVar32);
              lVar6 = lVar6 + 0x20;
            } while (uVar7 * 0x20 - lVar6 != 0);
          }
          uVar17 = 0x2f;
          break;
        case 0x5f:
          if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
            ppppppuVar13 = ppppppuVar13 + ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
          }
          else {
            ppppppuVar13 = (uint ******)unaff_x28[-4];
          }
          ppppppuVar16 = &pppppuStack_890;
          FUN_109d4ed3c(param_1,*ppppppuVar13,ppppppuVar32);
          uVar17 = 0x3a;
        }
        lVar6 = *param_1;
LAB_109d467f4:
        iVar18 = (int)uStack_888;
        unaff_x26 = (uint ******)(uStack_888 & 0xffffffff);
        FUN_109d43c48(lVar6,3,*(undefined4 *)(lVar6 + 0x20));
        FUN_109d43cd4(lVar6,uVar17,6);
        ppppppuVar13 = (uint ******)0x6;
        FUN_109d43cd4(lVar6,unaff_x26);
        if (iVar18 != 0) {
          lVar30 = 0;
          do {
            ppppppuVar13 = (uint ******)0x6;
            FUN_109d44680(lVar6,*(undefined4 *)((long)pppppuStack_890 + lVar30));
            lVar30 = lVar30 + 4;
          } while ((long)unaff_x26 * 4 - lVar30 != 0);
        }
LAB_109d46854:
        uStack_888 = uStack_888 & 0xffffffff00000000;
code_r0x000109d46858:
        if (*(char *)(unaff_x28[-3] + 1) != '\a') {
          uVar26 = uVar26 + 1;
        }
        ppppppuVar32 = (uint ******)(ulong)uVar26;
        bVar1 = *(byte *)((long)unaff_x28 + -1);
        pppppuVar34 = unaff_x28[3];
        if (pppppuVar34 != (uint *****)0x0) {
          if (pppppuVar34 == (uint *****)ppppuStack_918) {
            ppppppuVar13 = &pppppuStack_890;
            ppppppuVar16 = (uint ******)0x0;
            FUN_109d4727c(*param_1,0x21);
          }
          else {
            func_0x000109d31b50(&pppppuStack_890,*(undefined4 *)((long)pppppuVar34 + 4));
            func_0x000109d31b50(&pppppuStack_890,*(undefined2 *)((long)pppppuVar34 + 2));
            pppppuVar24 = pppppuVar34 + -2;
            if (((uint)*pppppuVar24 >> 1 & 1) == 0) {
              pppppuVar22 = pppppuVar24 + -((ulong)*pppppuVar24 >> 2 & 0xf);
            }
            else {
              pppppuVar22 = (uint *****)pppppuVar34[-4];
            }
            pppppuStack_780 = (uint *****)*pppppuVar22;
            plVar35 = param_1 + 0x1e;
            FUN_109d4e80c(plVar35,&pppppuStack_780,&pppppuStack_370);
            if ((int)plVar35 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined4 *)((long)pppppuStack_370 + 0xc);
            }
            func_0x000109d31b50(&pppppuStack_890,uVar17);
            ppppuVar23 = *pppppuVar24;
            if (((uint)ppppuVar23 >> 1 & 1) == 0) {
              if (((ulong)ppppuVar23 & 0x3c0) == 0x80) {
                pppppuVar24 = pppppuVar24 + -((ulong)ppppuVar23 >> 2 & 0xf);
                goto LAB_109d46930;
              }
LAB_109d46938:
              pppppuStack_780 = (uint *****)0x0;
            }
            else {
              if (*(int *)(pppppuVar34 + -3) != 2) goto LAB_109d46938;
              pppppuVar24 = (uint *****)pppppuVar34[-4];
LAB_109d46930:
              pppppuStack_780 = (uint *****)pppppuVar24[1];
            }
            plVar35 = param_1 + 0x1e;
            FUN_109d4e80c(plVar35,&pppppuStack_780,&pppppuStack_370);
            if ((int)plVar35 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined4 *)((long)pppppuStack_370 + 0xc);
            }
            func_0x000109d31b50(&pppppuStack_890,uVar17);
            func_0x000109d31b50(&pppppuStack_890,*(byte *)((long)pppppuVar34 + 1) >> 7);
            ppppppuVar13 = &pppppuStack_890;
            ppppppuVar16 = (uint ******)0x0;
            FUN_109d4727c(*param_1,0x23);
            uStack_888 = uStack_888 & 0xffffffff00000000;
            ppppuStack_918 = (uint ****)pppppuVar34;
          }
        }
        uVar36 = (ulong)((uint)uVar36 | (bVar1 & 0x20) >> 5);
      }
      unaff_x23 = (uint ******)pppppuStack_920;
      func_0x000109d69ed8();
      pppppuVar34 = pppppuStack_928;
      unaff_x25 = (uint ******)0x4;
      if (unaff_x23 != (uint ******)0x0) {
        pppppuStack_370 = pppppuStack_938;
        uStack_368 = 0x600000000;
        ppppppuVar13 = &pppppuStack_778;
        pppppuStack_780 = (uint *****)unaff_x23;
        FUN_109d37910(&pppppuStack_370,&pppppuStack_780);
        pppppuStack_780 = pppppuStack_948;
        pppppuStack_778 = pppppuStack_948;
        ppppuStack_770 = (uint ****)0x8;
        uStack_768 = 0;
        func_0x000109d30094(appppuStack_900,&pppppuStack_780,unaff_x23);
        do {
          uVar26 = (uint)uStack_368;
          do {
            if (uVar26 == 0) {
              if (pppppuStack_778 != pppppuStack_780) {
                _free();
              }
              if (pppppuStack_370 != pppppuStack_938) {
                _free();
              }
              goto LAB_109d46c04;
            }
            uVar7 = (ulong)uVar26;
            uVar26 = uVar26 - 1;
            uStack_368 = CONCAT44(uStack_368._4_4_,uVar26);
            ppppuVar23 = (uint ****)pppppuStack_370[uVar7 - 1][1];
          } while (ppppuVar23 == (uint ****)0x0);
          do {
            unaff_x23 = (uint ******)ppppuVar23[3];
            if (unaff_x23 == (uint ******)0x0 || *(byte *)(unaff_x23 + 2) < 0x1c) {
              if ((0xffffffee < *(byte *)(unaff_x23 + 2) - 0x15) &&
                 (func_0x000109d30094(appppuStack_900,&pppppuStack_780,unaff_x23),
                 cStack_8f0 == '\x01')) {
                func_0x000109d30100(&pppppuStack_370,unaff_x23);
              }
            }
            else {
              unaff_x23 = (uint ******)unaff_x23[5][7];
              if (unaff_x23 != ppppppuVar11) {
                puVar8 = &uStack_8e8;
                ppppppuVar13 = (uint ******)appppuStack_900;
                func_0x000109d4ef80(puVar8,unaff_x23);
                if (((ulong)puVar8 & 1) == 0) {
                  uVar26 = (uint)uStack_8d8;
                  if ((uStack_8e8 & 1) != 0) {
                    uVar26 = 4;
                  }
                  if (((uint)uStack_8e8 >> 1) * 4 + 4 < uVar26 * 3) {
                    if ((uVar26 + ~((uint)uStack_8e8 >> 1)) - uStack_8e8._4_4_ <= uVar26 >> 3) {
                      FUN_109d4f028(&uStack_8e8);
                      goto LAB_109d46bcc;
                    }
                  }
                  else {
                    FUN_109d4f028(&uStack_8e8,uVar26 << 1);
LAB_109d46bcc:
                    ppppppuVar13 = (uint ******)appppuStack_900;
                    func_0x000109d4ef80(&uStack_8e8,unaff_x23);
                  }
                  if ((uint ****)*appppuStack_900[0] != (uint ****)0xfffffffffffff000) {
                    uStack_8e8._4_4_ = uStack_8e8._4_4_ + -1;
                  }
                  uStack_8e8 = CONCAT44(uStack_8e8._4_4_,(uint)uStack_8e8 + 2);
                  *appppuStack_900[0] = (uint ***)unaff_x23;
                  uVar7 = uStack_8b8 & 0xffffffff;
                  if (uStack_8b8 >> 0x20 <= uVar7) {
                    ppppppuVar13 = (uint ******)(uVar7 + 1);
                    ppppppuVar16 = (uint ******)0x8;
                    func_0x000107c2b01c(&pppppuStack_8c0,pppppuStack_958);
                    uVar7 = uStack_8b8 & 0xffffffff;
                  }
                  pppppuStack_8c0[uVar7] = (uint ****)unaff_x23;
                  uStack_8b8 = CONCAT44(uStack_8b8._4_4_,(int)uStack_8b8 + 1);
                }
              }
            }
            ppppuVar23 = (uint ****)ppppuVar23[1];
          } while (ppppuVar23 != (uint ****)0x0);
        } while( true );
      }
LAB_109d46c04:
      ppppppuVar33 = (uint ******)pppppuVar34[1];
    } while (ppppppuVar33 != (uint ******)pppppuStack_930);
    ppppppuVar12 = (uint ******)(uStack_8b8 & 0xffffffff);
    if ((int)uStack_8b8 != 0) {
      FUN_109d33ca4(&pppppuStack_890);
      if ((int)uStack_8b8 != 0) {
        lVar6 = 0;
        lVar30 = (uStack_8b8 & 0xffffffff) << 3;
        ppppppuVar16 = (uint ******)pppppuStack_8c0;
        do {
          ppppppuVar32 = ppppppuVar16 + 1;
          plVar35 = param_1 + 3;
          FUN_109d51b68(plVar35,*ppppppuVar16);
          *(int *)((long)pppppuStack_890 + lVar6) = (int)plVar35;
          lVar6 = lVar6 + 4;
          lVar30 = lVar30 + -8;
          unaff_x23 = (uint ******)0x0;
          ppppppuVar16 = ppppppuVar32;
        } while (lVar30 != 0);
      }
      ppppppuVar13 = &pppppuStack_890;
      ppppppuVar12 = (uint ******)0x3c;
      ppppppuVar16 = (uint ******)0x0;
      FUN_109d4727c(*param_1);
      uStack_888 = uStack_888 & 0xffffffff00000000;
    }
  }
  ppppppuVar31 = (uint ******)ppppppuVar11[0xd];
  if ((ppppppuVar31 != (uint ******)0x0) && (*(int *)((long)ppppppuVar31 + 0xc) != 0)) {
    ppppppuVar12 = (uint ******)0xe;
    ppppppuVar13 = (uint ******)0x4;
    FUN_109d3b6e4(*param_1);
    pppppuStack_910 = &ppppuStack_770;
    pppppuStack_778 = (uint *****)0x4000000000;
    ppppppuVar25 = (uint ******)*ppppppuVar31;
    unaff_x25 = ppppppuVar25;
    if (*(uint *)(ppppppuVar31 + 1) != 0) {
      for (; *unaff_x25 == (uint *****)0x0 || *unaff_x25 == (uint *****)0xfffffffffffffff8;
          unaff_x25 = unaff_x25 + 1) {
      }
    }
    unaff_x26 = ppppppuVar25 + *(uint *)(ppppppuVar31 + 1);
    pppppuStack_780 = pppppuStack_910;
    if (unaff_x25 != unaff_x26) {
      unaff_x28 = (uint ******)*unaff_x25;
      ppppppuVar31 = (uint ******)0x4;
      do {
        ppppppuVar32 = unaff_x28 + 2;
        ppppppuVar16 = ppppppuVar32;
        FUN_109d485ec(ppppppuVar32,*unaff_x28);
        plVar35 = param_1 + 3;
        FUN_109d51b68(plVar35,unaff_x28[1]);
        FUN_109d38988(&pppppuStack_780,(ulong)plVar35 & 0xffffffff);
        pppppuVar34 = *unaff_x28;
        iVar18 = (int)ppppppuVar16;
        uVar26 = 4;
        if (iVar18 == 1) {
          uVar26 = 5;
        }
        uVar20 = 6;
        if (iVar18 != 0) {
          uVar20 = uVar26;
        }
        uVar21 = 1;
        uVar26 = 7;
        if (iVar18 != 0) {
          uVar26 = 4;
        }
        if (*(char *)(unaff_x28[1] + 2) == '\x16') {
          uVar20 = uVar26;
        }
        unaff_x23 = (uint ******)(ulong)uVar20;
        if (*(char *)(unaff_x28[1] + 2) == '\x16') {
          uVar21 = 2;
        }
        ppppppuVar33 = (uint ******)(ulong)uVar21;
        for (; pppppuVar34 != (uint *****)0x0; pppppuVar34 = (uint *****)((long)pppppuVar34 + -1)) {
          FUN_109d38988(&pppppuStack_780,*(undefined1 *)ppppppuVar32);
          ppppppuVar32 = (uint ******)((long)ppppppuVar32 + 1);
        }
        ppppppuVar13 = &pppppuStack_780;
        ppppppuVar12 = ppppppuVar33;
        ppppppuVar16 = unaff_x23;
        FUN_109d481c4(*param_1);
        pppppuStack_778 = (uint *****)((ulong)pppppuStack_778 & 0xffffffff00000000);
        do {
          unaff_x25 = unaff_x25 + 1;
          unaff_x28 = (uint ******)*unaff_x25;
        } while (unaff_x28 == (uint ******)0x0 || unaff_x28 == (uint ******)0xfffffffffffffff8);
      } while (unaff_x25 != unaff_x26);
    }
    FUN_109d3b86c(*param_1);
    if (pppppuStack_780 != pppppuStack_910) {
      _free();
    }
  }
  if ((int)uVar36 != 0) {
    ppppppuVar12 = (uint ******)0x10;
    ppppppuVar13 = (uint ******)0x3;
    FUN_109d3b6e4(*param_1);
    ppppppuVar31 = (uint ******)&ppppuStack_770;
    pppppuStack_778 = (uint *****)0x4000000000;
    pppppuStack_780 = (uint *****)ppppppuVar31;
    if ((*(byte *)((long)ppppppuVar11 + 0x17) >> 5 & 1) != 0) {
      FUN_109d4e920(param_1,&pppppuStack_780,ppppppuVar11);
      ppppppuVar13 = &pppppuStack_780;
      ppppppuVar12 = (uint ******)0xb;
      ppppppuVar16 = (uint ******)0x0;
      FUN_109d481c4(*param_1);
      pppppuStack_778 = (uint *****)((ulong)pppppuStack_778 & 0xffffffff00000000);
    }
    unaff_x23 = (uint ******)appppuStack_360;
    uStack_368 = 0x400000000;
    pppppuStack_370 = (uint *****)unaff_x23;
    for (ppppppuVar33 = (uint ******)ppppppuVar11[10]; ppppppuVar33 != (uint ******)pppppuStack_930;
        ppppppuVar33 = (uint ******)ppppppuVar33[1]) {
      ppppppuVar25 = (uint ******)0x0;
      if (ppppppuVar33 != (uint ******)0x0) {
        ppppppuVar25 = ppppppuVar33 + -3;
      }
      unaff_x25 = ppppppuVar25 + 5;
      for (unaff_x26 = (uint ******)ppppppuVar33[3]; unaff_x26 != unaff_x25;
          unaff_x26 = (uint ******)unaff_x26[1]) {
        ppppppuVar32 = unaff_x26 + -3;
        ppppppuVar25 = (uint ******)0x0;
        if (unaff_x26 != (uint ******)0x0) {
          ppppppuVar25 = ppppppuVar32;
        }
        uStack_368 = uStack_368 & 0xffffffff00000000;
        ppppppuVar12 = &pppppuStack_370;
        func_0x000109d97bcc(ppppppuVar25);
        if ((uint)uStack_368 != 0) {
          plVar35 = param_1 + 0x34;
          FUN_109d51b0c(plVar35,ppppppuVar32);
          FUN_109d38988(&pppppuStack_780,(int)plVar35[1]);
          if ((uint)uStack_368 != 0) {
            ppppppuVar32 = (uint ******)0x0;
            uVar36 = (uStack_368 & 0xffffffff) * 0x10;
            do {
              FUN_109d38988(&pppppuStack_780,
                            *(undefined4 *)((long)pppppuStack_370 + (long)ppppppuVar32));
              appppuStack_900[0] = *(uint *****)((long)pppppuStack_370 + (long)ppppppuVar32 + 8);
              plVar35 = param_1 + 0x1e;
              FUN_109d4e80c(plVar35,appppuStack_900,&lStack_908);
              if ((int)plVar35 == 0) {
                iVar18 = -1;
              }
              else {
                iVar18 = *(int *)(lStack_908 + 0xc) + -1;
              }
              FUN_109d38988(&pppppuStack_780,iVar18);
              ppppppuVar32 = ppppppuVar32 + 2;
            } while (uVar36 - (long)ppppppuVar32 != 0);
          }
          ppppppuVar13 = &pppppuStack_780;
          ppppppuVar12 = (uint ******)0xb;
          ppppppuVar16 = (uint ******)0x0;
          FUN_109d481c4(*param_1);
          pppppuStack_778 = (uint *****)((ulong)pppppuStack_778 & 0xffffffff00000000);
        }
      }
    }
    FUN_109d3b86c(*param_1);
    if ((uint ******)pppppuStack_370 != unaff_x23) {
      _free();
    }
    if ((uint ******)pppppuStack_780 != ppppppuVar31) {
      _free();
    }
  }
  if ((char)param_1[0x24] == '\x01') {
    ppppppuVar12 = ppppppuVar11;
    FUN_109d44c4c(param_1);
  }
  FUN_109d52c14(param_1 + 3);
  FUN_109d3b86c(*param_1);
  if (pppppuStack_8c0 != pppppuStack_958) {
    _free();
  }
  if ((uStack_8e8 & 1) == 0) {
    ppppppuVar12 = (uint ******)0x8;
    __ZdlPvSt11align_val_t(uStack_8e0);
  }
  ppppppuVar25 = (uint ******)pppppuStack_890;
  if (pppppuStack_890 != pppppuStack_960) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_320) {
    return;
  }
  ___stack_chk_fail();
  if (pppppuStack_780 != pppppuStack_910) {
    _free();
  }
  if (pppppuStack_8c0 != pppppuStack_958) {
    _free();
  }
  if ((uStack_8e8 & 1) == 0) {
    ppppppuVar12 = (uint ******)0x8;
    __ZdlPvSt11align_val_t(uStack_8e0);
  }
  if (pppppuStack_890 != pppppuStack_960) {
    _free();
  }
  ppppppuVar9 = ppppppuVar25;
  __Unwind_Resume();
  pppppuStack_9c0 = (uint *****)unaff_x28;
  uStack_9b8 = uVar36;
  pppppuStack_9b0 = (uint *****)unaff_x26;
  pppppuStack_9a8 = (uint *****)unaff_x25;
  pppppuStack_9a0 = (uint *****)ppppppuVar33;
  pppppuStack_998 = (uint *****)unaff_x23;
  pppppuStack_990 = (uint *****)ppppppuVar32;
  pppppuStack_988 = (uint *****)ppppppuVar11;
  pppppuStack_980 = (uint *****)ppppppuVar25;
  pppppuStack_978 = (uint *****)ppppppuVar31;
  ppuStack_970 = &puStack_2a0;
  pcStack_968 = FUN_109d4714c;
  lStack_9c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_ad8 = auStack_ac8;
  uStack_ad0 = 0x4000000000;
  for (; ppppppuVar16 != (uint ******)0x0; ppppppuVar16 = (uint ******)((long)ppppppuVar16 + -1)) {
    bVar1 = *(byte *)ppppppuVar13;
    uVar26 = (uint)param_5;
    if (((0x19 < (byte)((bVar1 & 0xdf) + 0xbf) && 9 < (byte)(bVar1 - 0x30)) && bVar1 != 0x2e) &&
        bVar1 != 0x5f) {
      uVar26 = 0;
    }
    uVar20 = 0;
    if ((uint)param_5 != 0) {
      uVar20 = uVar26;
    }
    param_5 = (ulong)uVar20;
    func_0x000109d31b50(&puStack_ad8);
    ppppppuVar13 = (uint ******)((long)ppppppuVar13 + 1);
  }
  ppuVar14 = &puStack_ad8;
  FUN_109d4727c(ppppppuVar9);
  puVar10 = puStack_ad8;
  if (puStack_ad8 != auStack_ac8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9c8) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_ad8 != auStack_ac8) {
    _free();
  }
  __Unwind_Resume();
  if ((int)param_5 == 0) {
    uVar26 = *(uint *)(ppuVar14 + 1);
    FUN_109d43c48(puVar10,3,*(undefined4 *)(puVar10 + 0x20));
    FUN_109d43cd4(puVar10,ppppppuVar12,6);
    FUN_109d43cd4(puVar10,(ulong)uVar26,6);
    if (uVar26 != 0) {
      lVar6 = 0;
      do {
        FUN_109d44680(puVar10,*(undefined4 *)(*ppuVar14 + lVar6),6);
        lVar6 = lVar6 + 4;
      } while ((ulong)uVar26 * 4 - lVar6 != 0);
    }
    return;
  }
  puVar15 = *ppuVar14;
  uVar26 = *(uint *)(ppuVar14 + 1);
  plVar35 = *(long **)(*(long *)(puVar10 + 0x28) + (ulong)((int)param_5 - 4) * 0x10);
  FUN_109d43c48(puVar10,param_5,*(undefined4 *)(puVar10 + 0x20));
  uVar20 = *(uint *)(plVar35 + 1);
  if ((*(byte *)(*plVar35 + 8) & 1) == 0) {
    FUN_109d474f4(puVar10,*plVar35,(ulong)ppppppuVar12 & 0xffffffff | 0x100000000);
  }
  uVar21 = 1;
  if (uVar20 != 1) {
    uVar36 = 0;
    do {
      lVar30 = *plVar35;
      lVar6 = lVar30 + (ulong)uVar21 * 0x10;
      bVar1 = *(byte *)(lVar6 + 8);
      if ((bVar1 & 1) == 0) {
        bVar1 = bVar1 >> 1 & 7;
        if (bVar1 == 5) {
          FUN_109d47610(puVar10,puVar15 + uVar36 * 4,uVar26 - uVar36,1);
          uVar7 = uVar36;
        }
        else {
          if (bVar1 != 3) {
            FUN_109d474f4(puVar10,lVar6,*(undefined4 *)(puVar15 + uVar36 * 4));
            goto LAB_109d4747c;
          }
          uVar21 = uVar21 + 1;
          FUN_109d43cd4(puVar10,uVar26 - (int)uVar36,6);
          for (; uVar7 = (ulong)uVar26, uVar26 != (uint)uVar36; uVar36 = (ulong)((uint)uVar36 + 1))
          {
            FUN_109d474f4(puVar10,lVar30 + (ulong)uVar21 * 0x10,
                          *(undefined4 *)(puVar15 + uVar36 * 4));
          }
        }
      }
      else {
LAB_109d4747c:
        uVar7 = (ulong)((int)uVar36 + 1);
      }
      uVar21 = uVar21 + 1;
      uVar36 = uVar7;
    } while (uVar21 != uVar20);
  }
  return;
code_r0x000109d469e0:
  lVar6 = *param_1;
LAB_109d469e4:
  ppppppuVar16 = (uint ******)(uStack_888 & 0xffffffff);
  param_5 = 0;
  ppppppuVar13 = (uint ******)pppppuStack_890;
  FUN_109d47340(lVar6,unaff_x26);
  goto LAB_109d46854;
}



/* Entry: 109d44e28; end: 109d4714b;  */

/* WARNING: Removing unreachable block (ram,0x000109d47398) */
/* WARNING: Removing unreachable block (ram,0x000109d474d8) */
/* WARNING: Removing unreachable block (ram,0x000109d4749c) */
/* WARNING: Removing unreachable block (ram,0x000109d474ec) */
/* WARNING: Removing unreachable block (ram,0x000109d474b0) */
/* WARNING: Removing unreachable block (ram,0x000109d474b4) */
/* WARNING: Removing unreachable block (ram,0x000109d474cc) */

void FUN_109d44e28(long *param_1,byte ******param_2,long param_3,undefined8 param_4,ulong param_5)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte ******ppppppbVar8;
  undefined1 *puVar9;
  byte ******ppppppbVar10;
  byte ******ppppppbVar11;
  undefined1 **ppuVar12;
  undefined1 *puVar13;
  byte ******ppppppbVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte *****pppppbVar20;
  byte ****ppppbVar21;
  byte *****pppppbVar22;
  byte ******ppppppbVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  byte ******ppppppbVar28;
  byte ******ppppppbVar29;
  byte ******unaff_x23;
  byte ******ppppppbVar30;
  byte *****pppppbVar31;
  byte ******unaff_x25;
  long *plVar32;
  byte ******unaff_x26;
  ulong uVar33;
  byte ******unaff_x28;
  undefined1 *puStack_848;
  undefined8 uStack_840;
  undefined1 auStack_838 [256];
  long lStack_738;
  byte *****pppppbStack_730;
  ulong uStack_728;
  byte *****pppppbStack_720;
  byte *****pppppbStack_718;
  byte *****pppppbStack_710;
  byte *****pppppbStack_708;
  byte *****pppppbStack_700;
  byte *****pppppbStack_6f8;
  byte *****pppppbStack_6f0;
  byte *****pppppbStack_6e8;
  undefined1 *puStack_6e0;
  code *pcStack_6d8;
  byte *****pppppbStack_6d0;
  byte *****pppppbStack_6c8;
  byte *****pppppbStack_6c0;
  byte *****pppppbStack_6b8;
  byte *****pppppbStack_6b0;
  byte *****pppppbStack_6a8;
  byte *****pppppbStack_6a0;
  byte *****pppppbStack_698;
  byte *****pppppbStack_690;
  byte ****ppppbStack_688;
  byte *****pppppbStack_680;
  long lStack_678;
  byte ****appppbStack_670 [2];
  char cStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  byte *****pppppbStack_630;
  ulong uStack_628;
  byte ****appppbStack_620 [4];
  byte *****pppppbStack_600;
  ulong uStack_5f8;
  byte ****appppbStack_5f0 [32];
  byte *****pppppbStack_4f0;
  byte *****pppppbStack_4e8;
  byte ****ppppbStack_4e0;
  undefined4 uStack_4d8;
  byte ****appppbStack_4d0 [126];
  byte *****pppppbStack_e0;
  ulong uStack_d8;
  byte ****appppbStack_d0 [8];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *param_1;
  FUN_109d449c0();
  FUN_109d4eac0(param_3,param_2);
  *(long *)(param_3 + 8) = lVar5;
  FUN_109d3b6e4(*param_1,0xc,4);
  FUN_109d524d0(param_1 + 3,param_2);
  pppppbStack_6d0 = appppbStack_5f0;
  uStack_5f8 = 0x4000000000;
  pppppbStack_600 = pppppbStack_6d0;
  func_0x000109d31b50(&pppppbStack_600,(ulong)(param_1[0x39] - param_1[0x38]) >> 3);
  FUN_109d4727c(*param_1,1,&pppppbStack_600,0);
  uStack_5f8 = uStack_5f8 & 0xffffffff00000000;
  ppppppbVar10 = (byte ******)(ulong)*(uint *)((long)param_1 + 0x1e4);
  ppppppbVar29 = (byte ******)(ulong)*(uint *)(param_1 + 0x3d);
  ppppppbVar14 = (byte ******)0x0;
  ppppppbVar11 = ppppppbVar29;
  FUN_109d4887c(param_1);
  if ((ulong)*(uint *)((long)param_1 + 0x1dc) < (ulong)(param_1[0x19] - param_1[0x18] >> 3)) {
    FUN_109d3b6e4(*param_1,0xf,3);
    pppppbStack_4e8 = (byte *****)0x4000000000;
    pppppbStack_4f0 = &ppppbStack_4e0;
    FUN_109d4a354(param_1,param_1[0x18] + (ulong)*(uint *)((long)param_1 + 0x1dc) * 8,
                  (int)param_1[0x3c],&pppppbStack_4f0);
    ppppppbVar11 = (byte ******)
                   ((param_1[0x19] - param_1[0x18] >> 3) -
                   ((ulong)*(uint *)(param_1 + 0x3c) + (ulong)*(uint *)((long)param_1 + 0x1dc)));
    ppppppbVar10 = (byte ******)
                   (param_1[0x18] + (ulong)*(uint *)((long)param_1 + 0x1dc) * 8 +
                   (ulong)*(uint *)(param_1 + 0x3c) * 8);
    ppppppbVar14 = &pppppbStack_4f0;
    param_5 = 0;
    FUN_109d4a76c(param_1);
    FUN_109d3b86c(*param_1);
    if (pppppbStack_4f0 != &ppppbStack_4e0) {
      _free();
    }
  }
  uVar33 = (ulong)(*(uint *)((long)param_2 + 0x14) >> 0x1d & 1);
  uStack_658 = 1;
  uStack_650 = 0xfffffffffffff000;
  uStack_648 = 0xfffffffffffff000;
  uStack_640 = 0xfffffffffffff000;
  uStack_638 = 0xfffffffffffff000;
  pppppbStack_6c8 = appppbStack_620;
  uStack_628 = 0x400000000;
  pppppbStack_6a0 = (byte *****)(param_2 + 9);
  ppppppbVar30 = (byte ******)param_2[10];
  pppppbStack_630 = pppppbStack_6c8;
  if (ppppppbVar30 != (byte ******)pppppbStack_6a0) {
    ppppbStack_688 = (byte ****)0x0;
    pppppbStack_6b0 = &ppppbStack_4e0;
    pppppbStack_6a8 = appppbStack_d0;
    pppppbStack_6b8 = appppbStack_4d0;
    pppppbStack_6c0 = (byte *****)param_2;
    do {
      pppppbStack_690 = (byte *****)(ppppppbVar30 + -3);
      pppppbStack_680 = (byte *****)(byte ******)0x0;
      if (ppppppbVar30 != (byte ******)0x0) {
        pppppbStack_680 = pppppbStack_690;
      }
      pppppbStack_680 = pppppbStack_680 + 5;
      pppppbStack_698 = (byte *****)ppppppbVar30;
      for (unaff_x28 = (byte ******)ppppppbVar30[3]; unaff_x28 != (byte ******)pppppbStack_680;
          unaff_x28 = (byte ******)unaff_x28[1]) {
        ppppppbVar11 = unaff_x28 + -3;
        ppppppbVar10 = (byte ******)0x0;
        if (unaff_x28 != (byte ******)0x0) {
          ppppppbVar10 = ppppppbVar11;
        }
        lVar5 = param_1[0x37];
        *(int *)(param_1 + 0x37) = (int)lVar5 + 1;
        plVar32 = param_1 + 0x34;
        pppppbStack_4f0 = (byte *****)ppppppbVar11;
        FUN_109d55030(plVar32,&pppppbStack_4f0);
        *(int *)(plVar32 + 1) = (int)lVar5;
        bVar1 = *(byte *)(ppppppbVar10 + 2);
        uVar24 = (uint)ppppppbVar29;
        unaff_x26 = (byte ******)0xc;
        switch(bVar1) {
        case 0x1d:
          uVar6 = (ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff;
          if ((int)uVar6 != 0) {
            if ((int)uVar6 == 1) {
              if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
                ppppppbVar10 = ppppppbVar10 + -4;
              }
              else {
                ppppppbVar10 = (byte ******)unaff_x28[-4];
              }
              ppppppbVar14 = &pppppbStack_600;
              plVar32 = param_1;
              FUN_109d4ed3c(param_1,*ppppppbVar10,ppppppbVar29);
              uVar15 = 10;
              if (((ulong)plVar32 & 1) == 0) {
                unaff_x26 = (byte ******)0xb;
                goto code_r0x000109d469e0;
              }
            }
            else {
              lVar5 = 0;
              do {
                if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
                  ppppppbVar11 = ppppppbVar10 +
                                 ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
                }
                else {
                  ppppppbVar11 = (byte ******)unaff_x28[-4];
                }
                ppppppbVar14 = &pppppbStack_600;
                FUN_109d4ed3c(param_1,*(undefined8 *)((long)ppppppbVar11 + lVar5),ppppppbVar29);
                lVar5 = lVar5 + 0x20;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
              uVar15 = 10;
            }
            break;
          }
          unaff_x26 = (byte ******)0xa;
          goto code_r0x000109d469e0;
        case 0x1e:
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,unaff_x28[-7]);
          func_0x000109d31b50(&pppppbStack_600,plVar32);
          if ((*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) == 3) {
            plVar32 = param_1 + 3;
            FUN_109d51b68(plVar32,unaff_x28[-0xb]);
            func_0x000109d31b50(&pppppbStack_600,plVar32);
            plVar32 = param_1 + 3;
            FUN_109d51b68(plVar32,unaff_x28[-0xf]);
            func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
          }
          uVar15 = 0xb;
          break;
        case 0x1f:
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar29 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar29 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 6;
          FUN_109d48288(plVar32,**ppppppbVar29);
          func_0x000109d31b50(&pppppbStack_600,(int)plVar32[1] + -1);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar29 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar29 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,*ppppppbVar29);
          func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar29 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar29 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,ppppppbVar29[4]);
          func_0x000109d31b50(&pppppbStack_600,plVar32);
          uVar18 = (*(uint *)((long)ppppppbVar10 + 0x14) >> 1 & 0x3ffffff) - 1;
          uVar6 = (ulong)uVar18;
          if (uVar18 != 0) {
            lVar5 = 0xfffffffe;
            uVar18 = 3;
            do {
              if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
                ppppppbVar29 = ppppppbVar10 +
                               ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
              }
              else {
                ppppppbVar29 = (byte ******)ppppppbVar10[-1];
              }
              plVar32 = param_1 + 3;
              FUN_109d51b68(plVar32,ppppppbVar29[((ulong)(uVar18 - 1) & 0xfffffffe) * 4]);
              func_0x000109d31b50(&pppppbStack_600,plVar32);
              if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
                ppppppbVar29 = ppppppbVar10 +
                               ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
              }
              else {
                ppppppbVar29 = (byte ******)ppppppbVar10[-1];
              }
              uVar25 = (ulong)uVar18;
              if (lVar5 == 0) {
                uVar25 = 1;
              }
              plVar32 = param_1 + 3;
              FUN_109d51b68(plVar32,ppppppbVar29[uVar25 * 4]);
              func_0x000109d31b50(&pppppbStack_600,plVar32);
              lVar5 = lVar5 + -1;
              uVar18 = uVar18 + 2;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          uVar15 = 0xc;
          break;
        case 0x20:
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar29 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar29 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 6;
          FUN_109d48288(plVar32,**ppppppbVar29);
          func_0x000109d31b50(&pppppbStack_600,(int)plVar32[1] + -1);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar29 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar29 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,*ppppppbVar29);
          func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
          iVar16 = (*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) - 1;
          if (iVar16 != 0) {
            lVar5 = 0x20;
            do {
              if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
                ppppppbVar29 = ppppppbVar10 +
                               ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
              }
              else {
                ppppppbVar29 = (byte ******)unaff_x28[-4];
              }
              plVar32 = param_1 + 3;
              FUN_109d51b68(plVar32,*(undefined8 *)((long)ppppppbVar29 + lVar5));
              func_0x000109d31b50(&pppppbStack_600,plVar32);
              lVar5 = lVar5 + 0x20;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          uVar15 = 0x1f;
          break;
        case 0x21:
          pppppbVar22 = unaff_x28[-7];
          pppppbVar31 = unaff_x28[6];
          if (((int)*(uint *)((long)unaff_x28 + -4) < 0) &&
             (((ulong)ppppppbVar11[((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4 + -1] &
              0xffffffff0) != 0)) {
            FUN_109d4edb8(param_1,ppppppbVar11,ppppppbVar29);
          }
          pppppbStack_4f0 = unaff_x28[5];
          if ((byte ******)pppppbStack_4f0 == (byte ******)0x0) {
            uVar15 = 0;
          }
          else {
            plVar32 = param_1 + 0x2b;
            FUN_109d48754(plVar32,&pppppbStack_4f0);
            uVar15 = (undefined4)plVar32[1];
          }
          func_0x000109d31b50(&pppppbStack_600,uVar15);
          func_0x000109d31b50(&pppppbStack_600,
                              *(ushort *)((long)unaff_x28 + -6) >> 2 & 0x3ff | 0x2000);
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,unaff_x28[-0xf]);
          func_0x000109d31b50(&pppppbStack_600,plVar32);
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,unaff_x28[-0xb]);
          func_0x000109d31b50(&pppppbStack_600,plVar32);
          plVar32 = param_1 + 6;
          FUN_109d48288(plVar32,pppppbVar31);
          func_0x000109d31b50(&pppppbStack_600,(int)plVar32[1] + -1);
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,pppppbVar22,ppppppbVar29);
          uVar18 = *(int *)((long)pppppbVar31 + 0xc) - 1;
          if (uVar18 != 0) {
            lVar5 = 0;
            do {
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppbVar10 = ppppppbVar11 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppbVar10 = (byte ******)unaff_x28[-4];
              }
              plVar32 = param_1 + 3;
              FUN_109d51b68(plVar32,*(undefined8 *)((long)ppppppbVar10 + lVar5));
              func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
              lVar5 = lVar5 + 0x20;
            } while ((ulong)uVar18 << 5 != lVar5);
          }
          if (0xff < *(uint *)(pppppbVar31 + 1)) {
            iVar16 = *(int *)((long)pppppbVar31 + 0xc);
            ppppppbVar10 = ppppppbVar11;
            FUN_109d2f6b8();
            uVar19 = *(uint *)((long)unaff_x28 + -4);
            for (uVar18 = iVar16 - 1;
                uVar18 != (uint)((ulong)((long)ppppppbVar10 -
                                        (long)(ppppppbVar11 + (ulong)-(uVar19 & 0x7ffffff) * 4)) >>
                                5); uVar18 = uVar18 + 1) {
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppbVar30 = ppppppbVar11 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppbVar30 = (byte ******)unaff_x28[-4];
              }
              ppppppbVar14 = &pppppbStack_600;
              FUN_109d4ed3c(param_1,ppppppbVar30[(ulong)uVar18 * 4],ppppppbVar29);
            }
          }
          uVar15 = 0xd;
          break;
        case 0x22:
          if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
            ppppppbVar11 = ppppppbVar11 + ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar11 = (byte ******)unaff_x28[-4];
          }
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,*ppppppbVar11,ppppppbVar29);
          uVar15 = 0x27;
          break;
        case 0x23:
          goto code_r0x000109d469e0;
        case 0x24:
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,ppppppbVar11
                                [((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4]);
          func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
          if ((*(ushort *)((long)unaff_x28 + -6) & 1) != 0) {
            plVar32 = param_1 + 3;
            FUN_109d51b68(plVar32,ppppppbVar11
                                  [((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4 +
                                   4]);
            func_0x000109d31b50(&pppppbStack_600,plVar32);
          }
          uVar15 = 0x30;
          break;
        case 0x25:
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,unaff_x28[-0xb]);
          func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,unaff_x28[-7]);
          func_0x000109d31b50(&pppppbStack_600,plVar32);
          uVar15 = 0x31;
          break;
        case 0x26:
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar29 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar29 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,*ppppppbVar29);
          func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
          iVar16 = -2;
          if ((*(ushort *)((long)ppppppbVar10 + 0x12) & 1) == 0) {
            iVar16 = -1;
          }
          func_0x000109d31b50(&pppppbStack_600,
                              iVar16 + (*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff));
          uVar18 = *(uint *)((long)ppppppbVar10 + 0x14);
          if ((uVar18 >> 0x1e & 1) == 0) {
            uVar6 = (ulong)(uVar18 & 0x7ffffff);
            ppppppbVar29 = ppppppbVar10 + uVar6 * -4;
            uVar3 = *(ushort *)((long)ppppppbVar10 + 0x12);
            lVar5 = 0x20;
            if ((uVar3 & 1) != 0) {
              lVar5 = 0x40;
            }
            ppppppbVar11 = (byte ******)((long)ppppppbVar29 + lVar5);
          }
          else {
            ppppppbVar29 = (byte ******)unaff_x28[-4];
            uVar3 = *(ushort *)((long)ppppppbVar10 + 0x12);
            lVar5 = 0x20;
            if ((uVar3 & 1) != 0) {
              lVar5 = 0x40;
            }
            ppppppbVar11 = (byte ******)((long)ppppppbVar29 + lVar5);
            uVar6 = (ulong)uVar18 & 0x7ffffff;
          }
          if (ppppppbVar11 != ppppppbVar29 + uVar6 * 4) {
            do {
              ppppppbVar30 = ppppppbVar11 + 4;
              plVar32 = param_1 + 3;
              FUN_109d51b68(plVar32,*ppppppbVar11);
              func_0x000109d31b50(&pppppbStack_600,plVar32);
              ppppppbVar11 = ppppppbVar30;
            } while (ppppppbVar30 != ppppppbVar29 + uVar6 * 4);
            uVar3 = *(ushort *)((long)ppppppbVar10 + 0x12);
          }
          if ((uVar3 & 1) != 0) {
            if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
              ppppppbVar10 = ppppppbVar10 +
                             ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
            }
            else {
              ppppppbVar10 = (byte ******)unaff_x28[-4];
            }
            plVar32 = param_1 + 3;
            FUN_109d51b68(plVar32,ppppppbVar10[4]);
            func_0x000109d31b50(&pppppbStack_600,plVar32);
          }
          uVar15 = 0x34;
          break;
        case 0x27:
          ppppppbVar10 = ppppppbVar10 + -4;
          pppppbVar22 = *ppppppbVar10;
          pppppbVar31 = unaff_x28[6];
          if (((int)*(uint *)((long)unaff_x28 + -4) < 0) &&
             (((ulong)ppppppbVar11[((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4 + -1] &
              0xffffffff0) != 0)) {
            FUN_109d4edb8(param_1,ppppppbVar11,ppppppbVar29);
          }
          pppppbStack_4f0 = unaff_x28[5];
          if ((byte ******)pppppbStack_4f0 == (byte ******)0x0) {
            uVar15 = 0;
          }
          else {
            plVar32 = param_1 + 0x2b;
            FUN_109d48754(plVar32,&pppppbStack_4f0);
            uVar15 = (undefined4)plVar32[1];
          }
          func_0x000109d31b50(&pppppbStack_600,uVar15);
          func_0x000109d31b50(&pppppbStack_600,
                              *(ushort *)((long)unaff_x28 + -6) >> 1 & 0x7fe | 0x8000);
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,ppppppbVar10[(ulong)*(uint *)(unaff_x28 + 7) * -4 + -4]);
          func_0x000109d31b50(&pppppbStack_600,plVar32);
          func_0x000109d31b50(&pppppbStack_600,*(undefined4 *)(unaff_x28 + 7));
          uVar6 = (ulong)*(uint *)(unaff_x28 + 7);
          if (*(uint *)(unaff_x28 + 7) != 0) {
            do {
              plVar32 = param_1 + 3;
              FUN_109d51b68(plVar32,ppppppbVar10[(ulong)*(uint *)(unaff_x28 + 7) * -4]);
              func_0x000109d31b50(&pppppbStack_600,plVar32);
              ppppppbVar10 = ppppppbVar10 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          plVar32 = param_1 + 6;
          FUN_109d48288(plVar32,pppppbVar31);
          func_0x000109d31b50(&pppppbStack_600,(int)plVar32[1] + -1);
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,pppppbVar22,ppppppbVar29);
          uVar18 = *(int *)((long)pppppbVar31 + 0xc) - 1;
          if (uVar18 != 0) {
            lVar5 = 0;
            do {
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppbVar10 = ppppppbVar11 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppbVar10 = (byte ******)unaff_x28[-4];
              }
              plVar32 = param_1 + 3;
              FUN_109d51b68(plVar32,*(undefined8 *)((long)ppppppbVar10 + lVar5));
              func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
              lVar5 = lVar5 + 0x20;
            } while ((ulong)uVar18 << 5 != lVar5);
          }
          if (0xff < *(uint *)(pppppbVar31 + 1)) {
            iVar16 = *(int *)((long)pppppbVar31 + 0xc);
            ppppppbVar10 = ppppppbVar11;
            FUN_109d2f6b8();
            uVar19 = *(uint *)((long)unaff_x28 + -4);
            for (uVar18 = iVar16 - 1;
                uVar18 != (uint)((ulong)((long)ppppppbVar10 -
                                        (long)(ppppppbVar11 + (ulong)-(uVar19 & 0x7ffffff) * 4)) >>
                                5); uVar18 = uVar18 + 1) {
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppbVar30 = ppppppbVar11 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppbVar30 = (byte ******)unaff_x28[-4];
              }
              ppppppbVar14 = &pppppbStack_600;
              FUN_109d4ed3c(param_1,ppppppbVar30[(ulong)uVar18 * 4],ppppppbVar29);
            }
          }
          uVar15 = 0x39;
          break;
        case 0x28:
          if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
            ppppppbVar10 = ppppppbVar11 + ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar10 = (byte ******)unaff_x28[-4];
          }
          ppppppbVar14 = &pppppbStack_600;
          plVar32 = param_1;
          FUN_109d4ed3c(param_1,*ppppppbVar10,ppppppbVar29);
          uVar18 = 0;
          if ((int)plVar32 == 0) {
            uVar18 = 5;
          }
          func_0x000109d31b50(&pppppbStack_600,0);
          FUN_109d49e20();
          if (ppppppbVar11 != (byte ******)0x0) {
            uVar18 = 0;
            if ((int)plVar32 == 0) {
              uVar18 = 6;
            }
            func_0x000109d31b50(&pppppbStack_600);
          }
          unaff_x26 = (byte ******)(ulong)uVar18;
          uVar15 = 0x38;
          goto LAB_109d469b0;
        default:
          uVar18 = *(uint *)((long)ppppppbVar10 + 0x14);
          if (bVar1 - 0x42 < 0xd) {
            if ((uVar18 >> 0x1e & 1) == 0) {
              ppppppbVar30 = ppppppbVar10 + ((ulong)uVar18 & 0x7ffffff) * -4;
            }
            else {
              ppppppbVar30 = (byte ******)unaff_x28[-4];
            }
            ppppppbVar14 = &pppppbStack_600;
            plVar32 = param_1;
            FUN_109d4ed3c(param_1,*ppppppbVar30,ppppppbVar29);
            uVar18 = 0;
            if ((int)plVar32 == 0) {
              uVar18 = 9;
            }
            plVar32 = param_1 + 6;
            FUN_109d48288(plVar32,*ppppppbVar11);
            func_0x000109d31b50(&pppppbStack_600,(int)plVar32[1] + -1);
            func_0x000109d31b50(&pppppbStack_600,*(char *)(ppppppbVar10 + 2) + -0x42);
            uVar15 = 3;
            unaff_x26 = (byte ******)(ulong)uVar18;
          }
          else {
            if ((uVar18 >> 0x1e & 1) == 0) {
              ppppppbVar30 = ppppppbVar10 + (ulong)(uVar18 & 0x7ffffff) * -4;
            }
            else {
              ppppppbVar30 = (byte ******)unaff_x28[-4];
            }
            ppppppbVar14 = &pppppbStack_600;
            plVar32 = param_1;
            FUN_109d4ed3c(param_1,*ppppppbVar30,ppppppbVar29);
            bVar4 = (int)plVar32 == 0;
            uVar18 = 0;
            if (bVar4) {
              uVar18 = 8;
            }
            uVar19 = 0;
            if (bVar4) {
              uVar19 = 7;
            }
            unaff_x26 = (byte ******)(ulong)uVar19;
            if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
              ppppppbVar29 = ppppppbVar10 +
                             ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
            }
            else {
              ppppppbVar29 = (byte ******)unaff_x28[-4];
            }
            plVar32 = param_1 + 3;
            FUN_109d51b68(plVar32,ppppppbVar29[4]);
            func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
            uVar6 = (ulong)(*(byte *)(ppppppbVar10 + 2) - 0x1c);
            func_0x000109d49e0c(uVar6);
            func_0x000109d31b50(&pppppbStack_600,uVar6);
            FUN_109d49e20();
            if (ppppppbVar11 == (byte ******)0x0) {
              uVar15 = 2;
            }
            else {
              func_0x000109d31b50(&pppppbStack_600);
              uVar15 = 2;
              unaff_x26 = (byte ******)(ulong)uVar18;
            }
          }
          goto LAB_109d469b0;
        case 0x3b:
          plVar32 = param_1 + 6;
          FUN_109d48288(plVar32,unaff_x28[5]);
          func_0x000109d31b50(&pppppbStack_600,(int)plVar32[1] + -1);
          if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
            ppppppbVar29 = ppppppbVar11 + ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar29 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 6;
          FUN_109d48288(plVar32,**ppppppbVar29);
          func_0x000109d31b50(&pppppbStack_600,(int)plVar32[1] + -1);
          if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
            ppppppbVar29 = ppppppbVar11 + ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar29 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,*ppppppbVar29);
          func_0x000109d31b50(&pppppbStack_600,plVar32);
          uVar3 = *(ushort *)((long)unaff_x28 + -6);
          uVar18 = (uVar3 & 0x3f) + 1;
          func_0x000109d31b50(&pppppbStack_600,
                              uVar3 & 0x80 | uVar3 >> 1 & 0x20 | uVar18 & 0x1f | (uVar18 >> 5) << 8
                              | 0x40);
          if (*(uint *)(*ppppppbVar11 + 1) >> 8 != *(uint *)(param_1[2] + 0x104)) {
            func_0x000109d31b50(&pppppbStack_600);
          }
          uVar15 = 0x13;
          break;
        case 0x3c:
          ppppppbVar14 = ppppppbVar11;
          FUN_109d8b368();
          uVar18 = *(uint *)((long)unaff_x28 + -4);
          if ((int)ppppppbVar14 == 0) {
            if ((uVar18 >> 0x1e & 1) == 0) {
              ppppppbVar10 = ppppppbVar11 + (ulong)(uVar18 & 0x7ffffff) * -4;
            }
            else {
              ppppppbVar10 = (byte ******)unaff_x28[-4];
            }
            ppppppbVar14 = &pppppbStack_600;
            plVar32 = param_1;
            FUN_109d4ed3c(param_1,*ppppppbVar10,ppppppbVar29);
            uVar18 = 0;
            if ((int)plVar32 == 0) {
              uVar18 = 4;
            }
            unaff_x26 = (byte ******)(ulong)uVar18;
            uVar15 = 0x14;
          }
          else {
            if ((uVar18 >> 0x1e & 1) == 0) {
              ppppppbVar10 = ppppppbVar11 + ((ulong)uVar18 & 0x7ffffff) * -4;
            }
            else {
              ppppppbVar10 = (byte ******)unaff_x28[-4];
            }
            ppppppbVar14 = &pppppbStack_600;
            FUN_109d4ed3c(param_1,*ppppppbVar10,ppppppbVar29);
            unaff_x26 = (byte ******)0x0;
            uVar15 = 0x29;
          }
          plVar32 = param_1 + 6;
          FUN_109d48288(plVar32,*ppppppbVar11);
          func_0x000109d31b50(&pppppbStack_600,(int)plVar32[1] + -1);
          func_0x000109d31b50(&pppppbStack_600,(*(ushort *)((long)unaff_x28 + -6) >> 1 & 0x3f) + 1);
          func_0x000109d31b50(&pppppbStack_600,*(ushort *)((long)unaff_x28 + -6) & 1);
          FUN_109d8b368();
          if ((int)ppppppbVar11 != 0) {
            uVar6 = (ulong)(*(ushort *)((long)unaff_x28 + -6) >> 7 & 7);
            func_0x000109d4ef70(uVar6);
            func_0x000109d31b50(&pppppbStack_600,uVar6);
            func_0x000109d31b50(&pppppbStack_600,*(undefined1 *)((long)unaff_x28 + 0x24));
          }
LAB_109d469b0:
          lVar5 = *param_1;
          if ((int)unaff_x26 == 0) goto LAB_109d467f4;
          goto LAB_109d469e4;
        case 0x3d:
          ppppppbVar14 = ppppppbVar11;
          FUN_109d8b368();
          uVar15 = 0x2c;
          if ((int)ppppppbVar14 != 0) {
            uVar15 = 0x2d;
          }
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar14 = ppppppbVar11 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar14 = (byte ******)unaff_x28[-4];
          }
          FUN_109d4ed3c(param_1,ppppppbVar14[4],ppppppbVar29,&pppppbStack_600);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar10 = ppppppbVar11 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar10 = (byte ******)unaff_x28[-4];
          }
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,*ppppppbVar10,ppppppbVar29);
          func_0x000109d31b50(&pppppbStack_600,(*(ushort *)((long)unaff_x28 + -6) >> 1 & 0x3f) + 1);
          func_0x000109d31b50(&pppppbStack_600,*(ushort *)((long)unaff_x28 + -6) & 1);
          FUN_109d8b368();
          if ((int)ppppppbVar11 != 0) {
            uVar6 = (ulong)(*(ushort *)((long)unaff_x28 + -6) >> 7 & 7);
            func_0x000109d4ef70(uVar6);
            func_0x000109d31b50(&pppppbStack_600,uVar6);
            func_0x000109d31b50(&pppppbStack_600,*(undefined1 *)((long)unaff_x28 + 0x24));
          }
          break;
        case 0x3e:
          func_0x000109d31b50(&pppppbStack_600,*(byte *)((long)unaff_x28 + -7) >> 1 & 1);
          plVar32 = param_1 + 6;
          FUN_109d48288(plVar32,unaff_x28[5]);
          func_0x000109d31b50(&pppppbStack_600,(int)plVar32[1] + -1);
          uVar6 = (ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff;
          if ((int)uVar6 != 0) {
            lVar5 = 0;
            do {
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppbVar14 = ppppppbVar11 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppbVar14 = (byte ******)unaff_x28[-4];
              }
              FUN_109d4ed3c(param_1,*(undefined8 *)((long)ppppppbVar14 + lVar5),ppppppbVar29,
                            &pppppbStack_600);
              lVar5 = lVar5 + 0x20;
            } while (uVar6 * 0x20 - lVar5 != 0);
          }
          unaff_x26 = (byte ******)0xd;
          goto code_r0x000109d469e0;
        case 0x3f:
          uVar6 = (ulong)(*(ushort *)((long)unaff_x28 + -6) & 7);
          func_0x000109d4ef70(uVar6);
          func_0x000109d31b50(&pppppbStack_600,uVar6);
          func_0x000109d31b50(&pppppbStack_600,*(undefined1 *)((long)unaff_x28 + 0x24));
          uVar15 = 0x24;
          break;
        case 0x40:
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar14 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar14 = (byte ******)unaff_x28[-4];
          }
          FUN_109d4ed3c(param_1,*ppppppbVar14,ppppppbVar29,&pppppbStack_600);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar11 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar11 = (byte ******)unaff_x28[-4];
          }
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,ppppppbVar11[4],ppppppbVar29);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar29 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar29 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,ppppppbVar29[8]);
          func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
          func_0x000109d31b50(&pppppbStack_600,*(ushort *)((long)ppppppbVar10 + 0x12) & 1);
          uVar6 = (ulong)(*(ushort *)((long)ppppppbVar10 + 0x12) >> 2 & 7);
          func_0x000109d4ef70(uVar6);
          func_0x000109d31b50(&pppppbStack_600,uVar6);
          func_0x000109d31b50(&pppppbStack_600,*(undefined1 *)((long)unaff_x28 + 0x24));
          uVar6 = (ulong)(*(ushort *)((long)ppppppbVar10 + 0x12) >> 5 & 7);
          func_0x000109d4ef70(uVar6);
          func_0x000109d31b50(&pppppbStack_600,uVar6);
          func_0x000109d31b50(&pppppbStack_600,*(ushort *)((long)ppppppbVar10 + 0x12) >> 1 & 1);
          func_0x000109d31b50(&pppppbStack_600,(*(byte *)((long)ppppppbVar10 + 0x13) & 0x3f) + 1);
          uVar15 = 0x2e;
          break;
        case 0x41:
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar14 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar14 = (byte ******)unaff_x28[-4];
          }
          FUN_109d4ed3c(param_1,*ppppppbVar14,ppppppbVar29,&pppppbStack_600);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar11 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar11 = (byte ******)unaff_x28[-4];
          }
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,ppppppbVar11[4],ppppppbVar29);
          func_0x000109d31b50(&pppppbStack_600,*(ushort *)((long)ppppppbVar10 + 0x12) >> 4 & 0x1f);
          func_0x000109d31b50(&pppppbStack_600,*(ushort *)((long)ppppppbVar10 + 0x12) & 1);
          uVar6 = (ulong)(*(ushort *)((long)ppppppbVar10 + 0x12) >> 1 & 7);
          func_0x000109d4ef70(uVar6);
          func_0x000109d31b50(&pppppbStack_600,uVar6);
          func_0x000109d31b50(&pppppbStack_600,*(undefined1 *)((long)unaff_x28 + 0x24));
          func_0x000109d31b50(&pppppbStack_600,
                              (*(ushort *)((long)ppppppbVar10 + 0x12) >> 9 & 0x3f) + 1);
          uVar15 = 0x3b;
          break;
        case 0x4f:
        case 0x50:
          uVar15 = 0x32;
          if (bVar1 != 0x50) {
            uVar15 = 0x33;
          }
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,unaff_x28[-7]);
          func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
          uVar18 = (*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) - 1;
          uVar6 = (ulong)uVar18;
          func_0x000109d31b50(&pppppbStack_600,uVar6);
          if (uVar18 != 0) {
            do {
              ppppppbVar14 = &pppppbStack_600;
              FUN_109d4ed3c(param_1,ppppppbVar11
                                    [((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4],
                            ppppppbVar29);
              ppppppbVar11 = ppppppbVar11 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          break;
        case 0x51:
        case 0x52:
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar30 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar30 = (byte ******)unaff_x28[-4];
          }
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,*ppppppbVar30,ppppppbVar29);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar10 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar10 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,ppppppbVar10[4]);
          func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
          func_0x000109d31b50(&pppppbStack_600,*(ushort *)((long)unaff_x28 + -6) & 0x3f);
          FUN_109d49e20();
          if (ppppppbVar11 != (byte ******)0x0) {
            func_0x000109d31b50(&pppppbStack_600);
          }
          uVar15 = 0x1c;
          break;
        case 0x53:
          pppppbStack_4f0 = pppppbStack_6b0;
          pppppbStack_4e8 = (byte *****)0x8000000000;
          plVar32 = param_1 + 6;
          FUN_109d48288(plVar32,*ppppppbVar11);
          FUN_109d38988(&pppppbStack_4f0,(int)plVar32[1] + -1);
          uVar6 = (ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff;
          if ((int)uVar6 != 0) {
            lVar27 = 0;
            lVar5 = 0;
            unaff_x26 = (byte ******)(uVar6 * 0x20);
            do {
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppbVar29 = ppppppbVar11 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppbVar29 = (byte ******)unaff_x28[-4];
              }
              plVar32 = param_1 + 3;
              FUN_109d51b68(plVar32,*(undefined8 *)((long)ppppppbVar29 + lVar5));
              uVar18 = uVar24 - (int)plVar32;
              uVar6 = (long)(int)uVar18 * -2 + 1;
              if ((int)plVar32 <= (int)uVar24) {
                uVar6 = -(ulong)(uVar18 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar18 << 1;
              }
              FUN_109d38988(&pppppbStack_4f0,uVar6);
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppbVar29 = ppppppbVar11 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppbVar29 = (byte ******)unaff_x28[-4];
              }
              plVar32 = param_1 + 3;
              FUN_109d51b68(plVar32,*(undefined8 *)
                                     ((long)ppppppbVar29 +
                                     lVar27 + (ulong)*(uint *)((long)unaff_x28 + 0x24) * 0x20));
              FUN_109d38988(&pppppbStack_4f0,(ulong)plVar32 & 0xffffffff);
              lVar5 = lVar5 + 0x20;
              lVar27 = lVar27 + 8;
            } while ((long)unaff_x26 - lVar5 != 0);
          }
          FUN_109d49e20();
          if (ppppppbVar11 != (byte ******)0x0) {
            FUN_109d38988(&pppppbStack_4f0);
          }
          lVar5 = *param_1;
          iVar16 = (int)pppppbStack_4e8;
          uVar6 = (ulong)pppppbStack_4e8 & 0xffffffff;
          FUN_109d43c48(lVar5,3,*(undefined4 *)(lVar5 + 0x20));
          FUN_109d43c48(lVar5,0x10,6);
          ppppppbVar11 = (byte ******)0x6;
          FUN_109d43cd4(lVar5,uVar6);
          if (iVar16 != 0) {
            lVar27 = 0;
            do {
              ppppppbVar11 = (byte ******)0x6;
              FUN_109d44680(lVar5,*(undefined8 *)((long)pppppbStack_4f0 + lVar27));
              lVar27 = lVar27 + 8;
            } while (uVar6 * 8 - lVar27 != 0);
          }
          pppppbStack_4e8 = (byte *****)((ulong)pppppbStack_4e8 & 0xffffffff00000000);
          if (pppppbStack_4f0 != pppppbStack_6b0) {
            _free();
          }
          goto code_r0x000109d46858;
        case 0x54:
          pppppbVar31 = unaff_x28[6];
          if (((int)*(uint *)((long)unaff_x28 + -4) < 0) &&
             (((ulong)ppppppbVar11[((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4 + -1] &
              0xffffffff0) != 0)) {
            FUN_109d4edb8(param_1,ppppppbVar11,ppppppbVar29);
          }
          pppppbStack_4f0 = unaff_x28[5];
          if ((byte ******)pppppbStack_4f0 == (byte ******)0x0) {
            uVar15 = 0;
          }
          else {
            plVar32 = param_1 + 0x2b;
            FUN_109d48754(plVar32,&pppppbStack_4f0);
            uVar15 = (undefined4)plVar32[1];
          }
          func_0x000109d31b50(&pppppbStack_600,uVar15);
          ppppppbVar14 = ppppppbVar11;
          FUN_109d49e20();
          uVar18 = *(ushort *)((long)unaff_x28 + -6) >> 1 & 0x7fe;
          uVar19 = *(ushort *)((long)unaff_x28 + -6) & 3;
          if (uVar19 - 1 < 2) {
            uVar18 = uVar18 + 1;
          }
          uVar26 = 0x4000;
          if (uVar19 != 2) {
            uVar26 = 0;
          }
          uVar17 = 0x10000;
          if (uVar19 != 3) {
            uVar17 = 0;
          }
          uVar19 = 0x8000;
          if (ppppppbVar14 != (byte ******)0x0) {
            uVar19 = 0x28000;
          }
          func_0x000109d31b50(&pppppbStack_600,uVar26 | uVar19 | uVar17 | uVar18);
          if (ppppppbVar14 != (byte ******)0x0) {
            func_0x000109d31b50(&pppppbStack_600,ppppppbVar14);
          }
          plVar32 = param_1 + 6;
          FUN_109d48288(plVar32,pppppbVar31);
          func_0x000109d31b50(&pppppbStack_600,(int)plVar32[1] + -1);
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,unaff_x28[-7],ppppppbVar29);
          uVar18 = *(int *)((long)pppppbVar31 + 0xc) - 1;
          uVar6 = (ulong)uVar18;
          if (uVar18 != 0) {
            lVar5 = 8;
            ppppppbVar10 = ppppppbVar11;
            do {
              cVar2 = *(char *)(*(long *)((long)pppppbVar31[2] + lVar5) + 8);
              plVar32 = param_1 + 3;
              FUN_109d51b68(plVar32,ppppppbVar10
                                    [((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4]);
              iVar16 = (int)plVar32;
              if (cVar2 != '\b') {
                iVar16 = uVar24 - (int)plVar32;
              }
              func_0x000109d31b50(&pppppbStack_600,iVar16);
              ppppppbVar10 = ppppppbVar10 + 4;
              lVar5 = lVar5 + 8;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          if (*(uint *)(pppppbVar31 + 1) < 0x100) {
            uVar15 = 0x22;
            param_2 = (byte ******)pppppbStack_6c0;
          }
          else {
            iVar16 = *(int *)((long)pppppbVar31 + 0xc);
            ppppppbVar10 = ppppppbVar11;
            FUN_109d2f6b8();
            param_2 = (byte ******)pppppbStack_6c0;
            uVar19 = *(uint *)((long)unaff_x28 + -4);
            for (uVar18 = iVar16 - 1;
                uVar18 != (uint)((ulong)((long)ppppppbVar10 -
                                        (long)(ppppppbVar11 + (ulong)-(uVar19 & 0x7ffffff) * 4)) >>
                                5); uVar18 = uVar18 + 1) {
              ppppppbVar14 = &pppppbStack_600;
              FUN_109d4ed3c(param_1,ppppppbVar11
                                    [((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4 +
                                     (ulong)uVar18 * 4],ppppppbVar29);
            }
            uVar15 = 0x22;
          }
          break;
        case 0x55:
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar14 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar14 = (byte ******)unaff_x28[-4];
          }
          FUN_109d4ed3c(param_1,ppppppbVar14[4],ppppppbVar29,&pppppbStack_600);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar14 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar14 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,ppppppbVar14[8]);
          func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar10 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar10 = (byte ******)unaff_x28[-4];
          }
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,*ppppppbVar10,ppppppbVar29);
          FUN_109d49e20();
          if (ppppppbVar11 != (byte ******)0x0) {
            func_0x000109d31b50(&pppppbStack_600);
          }
          uVar15 = 0x1d;
          break;
        case 0x58:
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar29 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar29 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 6;
          FUN_109d48288(plVar32,**ppppppbVar29);
          func_0x000109d31b50(&pppppbStack_600,(int)plVar32[1] + -1);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar10 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar10 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,*ppppppbVar10);
          func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
          plVar32 = param_1 + 6;
          FUN_109d48288(plVar32,*ppppppbVar11);
          func_0x000109d31b50(&pppppbStack_600,(int)plVar32[1] + -1);
          uVar15 = 0x17;
          break;
        case 0x59:
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar14 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar14 = (byte ******)unaff_x28[-4];
          }
          FUN_109d4ed3c(param_1,*ppppppbVar14,ppppppbVar29,&pppppbStack_600);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar10 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar10 = (byte ******)unaff_x28[-4];
          }
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,ppppppbVar10[4],ppppppbVar29);
          uVar15 = 6;
          break;
        case 0x5a:
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar14 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar14 = (byte ******)unaff_x28[-4];
          }
          FUN_109d4ed3c(param_1,*ppppppbVar14,ppppppbVar29,&pppppbStack_600);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar14 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar14 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,ppppppbVar14[4]);
          func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar10 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar10 = (byte ******)unaff_x28[-4];
          }
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,ppppppbVar10[8],ppppppbVar29);
          uVar15 = 7;
          break;
        case 0x5b:
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar11 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar11 = (byte ******)unaff_x28[-4];
          }
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,*ppppppbVar11,ppppppbVar29);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar10 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar10 = (byte ******)unaff_x28[-4];
          }
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,ppppppbVar10[4]);
          func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,unaff_x28[9]);
          func_0x000109d31b50(&pppppbStack_600,uVar24 - (int)plVar32);
          uVar15 = 8;
          break;
        case 0x5c:
          if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
            ppppppbVar11 = ppppppbVar11 + ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar11 = (byte ******)unaff_x28[-4];
          }
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,*ppppppbVar11,ppppppbVar29);
          FUN_109d36160(&pppppbStack_600,unaff_x28[5],
                        (byte *)((long)unaff_x28[5] + (ulong)*(uint *)(unaff_x28 + 6) * 4));
          uVar15 = 0x1a;
          break;
        case 0x5d:
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar14 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar14 = (byte ******)unaff_x28[-4];
          }
          FUN_109d4ed3c(param_1,*ppppppbVar14,ppppppbVar29,&pppppbStack_600);
          if ((*(uint *)((long)ppppppbVar10 + 0x14) >> 0x1e & 1) == 0) {
            ppppppbVar10 = ppppppbVar10 +
                           ((ulong)*(uint *)((long)ppppppbVar10 + 0x14) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar10 = (byte ******)unaff_x28[-4];
          }
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,ppppppbVar10[4],ppppppbVar29);
          FUN_109d36160(&pppppbStack_600,unaff_x28[5],
                        (byte *)((long)unaff_x28[5] + (ulong)*(uint *)(unaff_x28 + 6) * 4));
          uVar15 = 0x1b;
          break;
        case 0x5e:
          plVar32 = param_1 + 6;
          FUN_109d48288(plVar32,*ppppppbVar11);
          func_0x000109d31b50(&pppppbStack_600,(int)plVar32[1] + -1);
          func_0x000109d31b50(&pppppbStack_600,*(ushort *)((long)unaff_x28 + -6) & 1);
          func_0x000109d31b50(&pppppbStack_600,*(uint *)((long)unaff_x28 + -4) & 0x7ffffff);
          uVar6 = (ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff;
          if ((int)uVar6 != 0) {
            lVar5 = 0;
            do {
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppbVar14 = ppppppbVar11 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppbVar14 = (byte ******)unaff_x28[-4];
              }
              func_0x000109d31b50(&pppppbStack_600,
                                  *(char *)(**(long **)((long)ppppppbVar14 + lVar5) + 8) == '\x11');
              if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
                ppppppbVar10 = ppppppbVar11 +
                               ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
              }
              else {
                ppppppbVar10 = (byte ******)unaff_x28[-4];
              }
              ppppppbVar14 = &pppppbStack_600;
              FUN_109d4ed3c(param_1,*(undefined8 *)((long)ppppppbVar10 + lVar5),ppppppbVar29);
              lVar5 = lVar5 + 0x20;
            } while (uVar6 * 0x20 - lVar5 != 0);
          }
          uVar15 = 0x2f;
          break;
        case 0x5f:
          if ((*(uint *)((long)unaff_x28 + -4) >> 0x1e & 1) == 0) {
            ppppppbVar11 = ppppppbVar11 + ((ulong)*(uint *)((long)unaff_x28 + -4) & 0x7ffffff) * -4;
          }
          else {
            ppppppbVar11 = (byte ******)unaff_x28[-4];
          }
          ppppppbVar14 = &pppppbStack_600;
          FUN_109d4ed3c(param_1,*ppppppbVar11,ppppppbVar29);
          uVar15 = 0x3a;
        }
        lVar5 = *param_1;
LAB_109d467f4:
        iVar16 = (int)uStack_5f8;
        unaff_x26 = (byte ******)(uStack_5f8 & 0xffffffff);
        FUN_109d43c48(lVar5,3,*(undefined4 *)(lVar5 + 0x20));
        FUN_109d43cd4(lVar5,uVar15,6);
        ppppppbVar11 = (byte ******)0x6;
        FUN_109d43cd4(lVar5,unaff_x26);
        if (iVar16 != 0) {
          lVar27 = 0;
          do {
            ppppppbVar11 = (byte ******)0x6;
            FUN_109d44680(lVar5,*(undefined4 *)((long)pppppbStack_600 + lVar27));
            lVar27 = lVar27 + 4;
          } while ((long)unaff_x26 * 4 - lVar27 != 0);
        }
LAB_109d46854:
        uStack_5f8 = uStack_5f8 & 0xffffffff00000000;
code_r0x000109d46858:
        if (*(byte *)(unaff_x28[-3] + 1) != 7) {
          uVar24 = uVar24 + 1;
        }
        ppppppbVar29 = (byte ******)(ulong)uVar24;
        bVar1 = *(byte *)((long)unaff_x28 + -1);
        pppppbVar31 = unaff_x28[3];
        if (pppppbVar31 != (byte *****)0x0) {
          if (pppppbVar31 == (byte *****)ppppbStack_688) {
            ppppppbVar11 = &pppppbStack_600;
            ppppppbVar14 = (byte ******)0x0;
            FUN_109d4727c(*param_1,0x21);
          }
          else {
            func_0x000109d31b50(&pppppbStack_600,*(undefined4 *)((long)pppppbVar31 + 4));
            func_0x000109d31b50(&pppppbStack_600,*(undefined2 *)((long)pppppbVar31 + 2));
            pppppbVar22 = pppppbVar31 + -2;
            if (((uint)*pppppbVar22 >> 1 & 1) == 0) {
              pppppbVar20 = pppppbVar22 + -((ulong)*pppppbVar22 >> 2 & 0xf);
            }
            else {
              pppppbVar20 = (byte *****)pppppbVar31[-4];
            }
            pppppbStack_4f0 = (byte *****)*pppppbVar20;
            plVar32 = param_1 + 0x1e;
            FUN_109d4e80c(plVar32,&pppppbStack_4f0,&pppppbStack_e0);
            if ((int)plVar32 == 0) {
              uVar15 = 0;
            }
            else {
              uVar15 = *(undefined4 *)((long)pppppbStack_e0 + 0xc);
            }
            func_0x000109d31b50(&pppppbStack_600,uVar15);
            ppppbVar21 = *pppppbVar22;
            if (((uint)ppppbVar21 >> 1 & 1) == 0) {
              if (((ulong)ppppbVar21 & 0x3c0) == 0x80) {
                pppppbVar22 = pppppbVar22 + -((ulong)ppppbVar21 >> 2 & 0xf);
                goto LAB_109d46930;
              }
LAB_109d46938:
              pppppbStack_4f0 = (byte *****)0x0;
            }
            else {
              if (*(int *)(pppppbVar31 + -3) != 2) goto LAB_109d46938;
              pppppbVar22 = (byte *****)pppppbVar31[-4];
LAB_109d46930:
              pppppbStack_4f0 = (byte *****)pppppbVar22[1];
            }
            plVar32 = param_1 + 0x1e;
            FUN_109d4e80c(plVar32,&pppppbStack_4f0,&pppppbStack_e0);
            if ((int)plVar32 == 0) {
              uVar15 = 0;
            }
            else {
              uVar15 = *(undefined4 *)((long)pppppbStack_e0 + 0xc);
            }
            func_0x000109d31b50(&pppppbStack_600,uVar15);
            func_0x000109d31b50(&pppppbStack_600,*(byte *)((long)pppppbVar31 + 1) >> 7);
            ppppppbVar11 = &pppppbStack_600;
            ppppppbVar14 = (byte ******)0x0;
            FUN_109d4727c(*param_1,0x23);
            uStack_5f8 = uStack_5f8 & 0xffffffff00000000;
            ppppbStack_688 = (byte ****)pppppbVar31;
          }
        }
        uVar33 = (ulong)((uint)uVar33 | (bVar1 & 0x20) >> 5);
      }
      unaff_x23 = (byte ******)pppppbStack_690;
      func_0x000109d69ed8();
      pppppbVar31 = pppppbStack_698;
      unaff_x25 = (byte ******)0x4;
      if (unaff_x23 != (byte ******)0x0) {
        pppppbStack_e0 = pppppbStack_6a8;
        uStack_d8 = 0x600000000;
        ppppppbVar11 = &pppppbStack_4e8;
        pppppbStack_4f0 = (byte *****)unaff_x23;
        FUN_109d37910(&pppppbStack_e0,&pppppbStack_4f0);
        pppppbStack_4f0 = pppppbStack_6b8;
        pppppbStack_4e8 = pppppbStack_6b8;
        ppppbStack_4e0 = (byte ****)0x8;
        uStack_4d8 = 0;
        func_0x000109d30094(appppbStack_670,&pppppbStack_4f0,unaff_x23);
        do {
          uVar24 = (uint)uStack_d8;
          do {
            if (uVar24 == 0) {
              if (pppppbStack_4e8 != pppppbStack_4f0) {
                _free();
              }
              if (pppppbStack_e0 != pppppbStack_6a8) {
                _free();
              }
              goto LAB_109d46c04;
            }
            uVar6 = (ulong)uVar24;
            uVar24 = uVar24 - 1;
            uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar24);
            ppppbVar21 = (byte ****)pppppbStack_e0[uVar6 - 1][1];
          } while (ppppbVar21 == (byte ****)0x0);
          do {
            unaff_x23 = (byte ******)ppppbVar21[3];
            if (unaff_x23 == (byte ******)0x0 || *(byte *)(unaff_x23 + 2) < 0x1c) {
              if ((0xffffffee < *(byte *)(unaff_x23 + 2) - 0x15) &&
                 (func_0x000109d30094(appppbStack_670,&pppppbStack_4f0,unaff_x23),
                 cStack_660 == '\x01')) {
                func_0x000109d30100(&pppppbStack_e0,unaff_x23);
              }
            }
            else {
              unaff_x23 = (byte ******)unaff_x23[5][7];
              if (unaff_x23 != param_2) {
                puVar7 = &uStack_658;
                ppppppbVar11 = (byte ******)appppbStack_670;
                func_0x000109d4ef80(puVar7,unaff_x23);
                if (((ulong)puVar7 & 1) == 0) {
                  uVar24 = (uint)uStack_648;
                  if ((uStack_658 & 1) != 0) {
                    uVar24 = 4;
                  }
                  if (((uint)uStack_658 >> 1) * 4 + 4 < uVar24 * 3) {
                    if ((uVar24 + ~((uint)uStack_658 >> 1)) - uStack_658._4_4_ <= uVar24 >> 3) {
                      FUN_109d4f028(&uStack_658);
                      goto LAB_109d46bcc;
                    }
                  }
                  else {
                    FUN_109d4f028(&uStack_658,uVar24 << 1);
LAB_109d46bcc:
                    ppppppbVar11 = (byte ******)appppbStack_670;
                    func_0x000109d4ef80(&uStack_658,unaff_x23);
                  }
                  if ((byte ****)*appppbStack_670[0] != (byte ****)0xfffffffffffff000) {
                    uStack_658._4_4_ = uStack_658._4_4_ + -1;
                  }
                  uStack_658 = CONCAT44(uStack_658._4_4_,(uint)uStack_658 + 2);
                  *appppbStack_670[0] = (byte ***)unaff_x23;
                  uVar6 = uStack_628 & 0xffffffff;
                  if (uStack_628 >> 0x20 <= uVar6) {
                    ppppppbVar11 = (byte ******)(uVar6 + 1);
                    ppppppbVar14 = (byte ******)0x8;
                    func_0x000107c2b01c(&pppppbStack_630,pppppbStack_6c8);
                    uVar6 = uStack_628 & 0xffffffff;
                  }
                  pppppbStack_630[uVar6] = (byte ****)unaff_x23;
                  uStack_628 = CONCAT44(uStack_628._4_4_,(int)uStack_628 + 1);
                }
              }
            }
            ppppbVar21 = (byte ****)ppppbVar21[1];
          } while (ppppbVar21 != (byte ****)0x0);
        } while( true );
      }
LAB_109d46c04:
      ppppppbVar30 = (byte ******)pppppbVar31[1];
    } while (ppppppbVar30 != (byte ******)pppppbStack_6a0);
    ppppppbVar10 = (byte ******)(uStack_628 & 0xffffffff);
    if ((int)uStack_628 != 0) {
      FUN_109d33ca4(&pppppbStack_600);
      if ((int)uStack_628 != 0) {
        lVar5 = 0;
        lVar27 = (uStack_628 & 0xffffffff) << 3;
        ppppppbVar14 = (byte ******)pppppbStack_630;
        do {
          ppppppbVar29 = ppppppbVar14 + 1;
          plVar32 = param_1 + 3;
          FUN_109d51b68(plVar32,*ppppppbVar14);
          *(int *)((long)pppppbStack_600 + lVar5) = (int)plVar32;
          lVar5 = lVar5 + 4;
          lVar27 = lVar27 + -8;
          unaff_x23 = (byte ******)0x0;
          ppppppbVar14 = ppppppbVar29;
        } while (lVar27 != 0);
      }
      ppppppbVar11 = &pppppbStack_600;
      ppppppbVar10 = (byte ******)0x3c;
      ppppppbVar14 = (byte ******)0x0;
      FUN_109d4727c(*param_1);
      uStack_5f8 = uStack_5f8 & 0xffffffff00000000;
    }
  }
  ppppppbVar28 = (byte ******)param_2[0xd];
  if ((ppppppbVar28 != (byte ******)0x0) && (*(int *)((long)ppppppbVar28 + 0xc) != 0)) {
    ppppppbVar10 = (byte ******)0xe;
    ppppppbVar11 = (byte ******)0x4;
    FUN_109d3b6e4(*param_1);
    pppppbStack_680 = &ppppbStack_4e0;
    pppppbStack_4e8 = (byte *****)0x4000000000;
    ppppppbVar23 = (byte ******)*ppppppbVar28;
    unaff_x25 = ppppppbVar23;
    if (*(uint *)(ppppppbVar28 + 1) != 0) {
      for (; *unaff_x25 == (byte *****)0x0 || *unaff_x25 == (byte *****)0xfffffffffffffff8;
          unaff_x25 = unaff_x25 + 1) {
      }
    }
    unaff_x26 = ppppppbVar23 + *(uint *)(ppppppbVar28 + 1);
    pppppbStack_4f0 = pppppbStack_680;
    if (unaff_x25 != unaff_x26) {
      unaff_x28 = (byte ******)*unaff_x25;
      ppppppbVar28 = (byte ******)0x4;
      do {
        ppppppbVar29 = unaff_x28 + 2;
        ppppppbVar14 = ppppppbVar29;
        FUN_109d485ec(ppppppbVar29,*unaff_x28);
        plVar32 = param_1 + 3;
        FUN_109d51b68(plVar32,unaff_x28[1]);
        FUN_109d38988(&pppppbStack_4f0,(ulong)plVar32 & 0xffffffff);
        pppppbVar31 = *unaff_x28;
        iVar16 = (int)ppppppbVar14;
        uVar24 = 4;
        if (iVar16 == 1) {
          uVar24 = 5;
        }
        uVar18 = 6;
        if (iVar16 != 0) {
          uVar18 = uVar24;
        }
        uVar19 = 1;
        uVar24 = 7;
        if (iVar16 != 0) {
          uVar24 = 4;
        }
        if (*(byte *)(unaff_x28[1] + 2) == 0x16) {
          uVar18 = uVar24;
        }
        unaff_x23 = (byte ******)(ulong)uVar18;
        if (*(byte *)(unaff_x28[1] + 2) == 0x16) {
          uVar19 = 2;
        }
        ppppppbVar30 = (byte ******)(ulong)uVar19;
        for (; pppppbVar31 != (byte *****)0x0; pppppbVar31 = (byte *****)((long)pppppbVar31 + -1)) {
          FUN_109d38988(&pppppbStack_4f0,*(byte *)ppppppbVar29);
          ppppppbVar29 = (byte ******)((long)ppppppbVar29 + 1);
        }
        ppppppbVar11 = &pppppbStack_4f0;
        ppppppbVar10 = ppppppbVar30;
        ppppppbVar14 = unaff_x23;
        FUN_109d481c4(*param_1);
        pppppbStack_4e8 = (byte *****)((ulong)pppppbStack_4e8 & 0xffffffff00000000);
        do {
          unaff_x25 = unaff_x25 + 1;
          unaff_x28 = (byte ******)*unaff_x25;
        } while (unaff_x28 == (byte ******)0x0 || unaff_x28 == (byte ******)0xfffffffffffffff8);
      } while (unaff_x25 != unaff_x26);
    }
    FUN_109d3b86c(*param_1);
    if (pppppbStack_4f0 != pppppbStack_680) {
      _free();
    }
  }
  if ((int)uVar33 != 0) {
    ppppppbVar10 = (byte ******)0x10;
    ppppppbVar11 = (byte ******)0x3;
    FUN_109d3b6e4(*param_1);
    ppppppbVar28 = (byte ******)&ppppbStack_4e0;
    pppppbStack_4e8 = (byte *****)0x4000000000;
    pppppbStack_4f0 = (byte *****)ppppppbVar28;
    if ((*(byte *)((long)param_2 + 0x17) >> 5 & 1) != 0) {
      FUN_109d4e920(param_1,&pppppbStack_4f0,param_2);
      ppppppbVar11 = &pppppbStack_4f0;
      ppppppbVar10 = (byte ******)0xb;
      ppppppbVar14 = (byte ******)0x0;
      FUN_109d481c4(*param_1);
      pppppbStack_4e8 = (byte *****)((ulong)pppppbStack_4e8 & 0xffffffff00000000);
    }
    unaff_x23 = (byte ******)appppbStack_d0;
    uStack_d8 = 0x400000000;
    pppppbStack_e0 = (byte *****)unaff_x23;
    for (ppppppbVar30 = (byte ******)param_2[10]; ppppppbVar30 != (byte ******)pppppbStack_6a0;
        ppppppbVar30 = (byte ******)ppppppbVar30[1]) {
      ppppppbVar23 = (byte ******)0x0;
      if (ppppppbVar30 != (byte ******)0x0) {
        ppppppbVar23 = ppppppbVar30 + -3;
      }
      unaff_x25 = ppppppbVar23 + 5;
      for (unaff_x26 = (byte ******)ppppppbVar30[3]; unaff_x26 != unaff_x25;
          unaff_x26 = (byte ******)unaff_x26[1]) {
        ppppppbVar29 = unaff_x26 + -3;
        ppppppbVar23 = (byte ******)0x0;
        if (unaff_x26 != (byte ******)0x0) {
          ppppppbVar23 = ppppppbVar29;
        }
        uStack_d8 = uStack_d8 & 0xffffffff00000000;
        ppppppbVar10 = &pppppbStack_e0;
        func_0x000109d97bcc(ppppppbVar23);
        if ((uint)uStack_d8 != 0) {
          plVar32 = param_1 + 0x34;
          FUN_109d51b0c(plVar32,ppppppbVar29);
          FUN_109d38988(&pppppbStack_4f0,(int)plVar32[1]);
          if ((uint)uStack_d8 != 0) {
            ppppppbVar29 = (byte ******)0x0;
            uVar33 = (uStack_d8 & 0xffffffff) * 0x10;
            do {
              FUN_109d38988(&pppppbStack_4f0,
                            *(undefined4 *)((long)pppppbStack_e0 + (long)ppppppbVar29));
              appppbStack_670[0] =
                   *(byte *****)((byte *)((long)pppppbStack_e0 + (long)ppppppbVar29) + 8);
              plVar32 = param_1 + 0x1e;
              FUN_109d4e80c(plVar32,appppbStack_670,&lStack_678);
              if ((int)plVar32 == 0) {
                iVar16 = -1;
              }
              else {
                iVar16 = *(int *)(lStack_678 + 0xc) + -1;
              }
              FUN_109d38988(&pppppbStack_4f0,iVar16);
              ppppppbVar29 = ppppppbVar29 + 2;
            } while (uVar33 - (long)ppppppbVar29 != 0);
          }
          ppppppbVar11 = &pppppbStack_4f0;
          ppppppbVar10 = (byte ******)0xb;
          ppppppbVar14 = (byte ******)0x0;
          FUN_109d481c4(*param_1);
          pppppbStack_4e8 = (byte *****)((ulong)pppppbStack_4e8 & 0xffffffff00000000);
        }
      }
    }
    FUN_109d3b86c(*param_1);
    if ((byte ******)pppppbStack_e0 != unaff_x23) {
      _free();
    }
    if ((byte ******)pppppbStack_4f0 != ppppppbVar28) {
      _free();
    }
  }
  if ((char)param_1[0x24] == '\x01') {
    ppppppbVar10 = param_2;
    FUN_109d44c4c(param_1);
  }
  FUN_109d52c14(param_1 + 3);
  FUN_109d3b86c(*param_1);
  if (pppppbStack_630 != pppppbStack_6c8) {
    _free();
  }
  if ((uStack_658 & 1) == 0) {
    ppppppbVar10 = (byte ******)0x8;
    __ZdlPvSt11align_val_t(uStack_650);
  }
  ppppppbVar23 = (byte ******)pppppbStack_600;
  if (pppppbStack_600 != pppppbStack_6d0) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  if (pppppbStack_4f0 != pppppbStack_680) {
    _free();
  }
  if (pppppbStack_630 != pppppbStack_6c8) {
    _free();
  }
  if ((uStack_658 & 1) == 0) {
    ppppppbVar10 = (byte ******)0x8;
    __ZdlPvSt11align_val_t(uStack_650);
  }
  if (pppppbStack_600 != pppppbStack_6d0) {
    _free();
  }
  ppppppbVar8 = ppppppbVar23;
  __Unwind_Resume();
  pppppbStack_730 = (byte *****)unaff_x28;
  uStack_728 = uVar33;
  pppppbStack_720 = (byte *****)unaff_x26;
  pppppbStack_718 = (byte *****)unaff_x25;
  pppppbStack_710 = (byte *****)ppppppbVar30;
  pppppbStack_708 = (byte *****)unaff_x23;
  pppppbStack_700 = (byte *****)ppppppbVar29;
  pppppbStack_6f8 = (byte *****)param_2;
  pppppbStack_6f0 = (byte *****)ppppppbVar23;
  pppppbStack_6e8 = (byte *****)ppppppbVar28;
  puStack_6e0 = &stack0xfffffffffffffff0;
  pcStack_6d8 = FUN_109d4714c;
  lStack_738 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_848 = auStack_838;
  uStack_840 = 0x4000000000;
  for (; ppppppbVar14 != (byte ******)0x0; ppppppbVar14 = (byte ******)((long)ppppppbVar14 + -1)) {
    bVar1 = *(byte *)ppppppbVar11;
    uVar24 = (uint)param_5;
    if (((0x19 < (byte)((bVar1 & 0xdf) + 0xbf) && 9 < (byte)(bVar1 - 0x30)) && bVar1 != 0x2e) &&
        bVar1 != 0x5f) {
      uVar24 = 0;
    }
    uVar18 = 0;
    if ((uint)param_5 != 0) {
      uVar18 = uVar24;
    }
    param_5 = (ulong)uVar18;
    func_0x000109d31b50(&puStack_848);
    ppppppbVar11 = (byte ******)((long)ppppppbVar11 + 1);
  }
  ppuVar12 = &puStack_848;
  FUN_109d4727c(ppppppbVar8);
  puVar9 = puStack_848;
  if (puStack_848 != auStack_838) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_738) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_848 != auStack_838) {
    _free();
  }
  __Unwind_Resume();
  if ((int)param_5 == 0) {
    uVar24 = *(uint *)(ppuVar12 + 1);
    FUN_109d43c48(puVar9,3,*(undefined4 *)(puVar9 + 0x20));
    FUN_109d43cd4(puVar9,ppppppbVar10,6);
    FUN_109d43cd4(puVar9,(ulong)uVar24,6);
    if (uVar24 != 0) {
      lVar5 = 0;
      do {
        FUN_109d44680(puVar9,*(undefined4 *)(*ppuVar12 + lVar5),6);
        lVar5 = lVar5 + 4;
      } while ((ulong)uVar24 * 4 - lVar5 != 0);
    }
    return;
  }
  puVar13 = *ppuVar12;
  uVar24 = *(uint *)(ppuVar12 + 1);
  plVar32 = *(long **)(*(long *)(puVar9 + 0x28) + (ulong)((int)param_5 - 4) * 0x10);
  FUN_109d43c48(puVar9,param_5,*(undefined4 *)(puVar9 + 0x20));
  uVar18 = *(uint *)(plVar32 + 1);
  if ((*(byte *)(*plVar32 + 8) & 1) == 0) {
    FUN_109d474f4(puVar9,*plVar32,(ulong)ppppppbVar10 & 0xffffffff | 0x100000000);
  }
  uVar19 = 1;
  if (uVar18 != 1) {
    uVar33 = 0;
    do {
      lVar27 = *plVar32;
      lVar5 = lVar27 + (ulong)uVar19 * 0x10;
      bVar1 = *(byte *)(lVar5 + 8);
      if ((bVar1 & 1) == 0) {
        bVar1 = bVar1 >> 1 & 7;
        if (bVar1 == 5) {
          FUN_109d47610(puVar9,puVar13 + uVar33 * 4,uVar24 - uVar33,1);
          uVar6 = uVar33;
        }
        else {
          if (bVar1 != 3) {
            FUN_109d474f4(puVar9,lVar5,*(undefined4 *)(puVar13 + uVar33 * 4));
            goto LAB_109d4747c;
          }
          uVar19 = uVar19 + 1;
          FUN_109d43cd4(puVar9,uVar24 - (int)uVar33,6);
          for (; uVar6 = (ulong)uVar24, uVar24 != (uint)uVar33; uVar33 = (ulong)((uint)uVar33 + 1))
          {
            FUN_109d474f4(puVar9,lVar27 + (ulong)uVar19 * 0x10,*(undefined4 *)(puVar13 + uVar33 * 4)
                         );
          }
        }
      }
      else {
LAB_109d4747c:
        uVar6 = (ulong)((int)uVar33 + 1);
      }
      uVar19 = uVar19 + 1;
      uVar33 = uVar6;
    } while (uVar19 != uVar18);
  }
  return;
code_r0x000109d469e0:
  lVar5 = *param_1;
LAB_109d469e4:
  ppppppbVar14 = (byte ******)(uStack_5f8 & 0xffffffff);
  param_5 = 0;
  ppppppbVar11 = (byte ******)pppppbStack_600;
  FUN_109d47340(lVar5,unaff_x26);
  goto LAB_109d46854;
}



/* Entry: 109d4714c; end: 109d4727b;  */

/* WARNING: Removing unreachable block (ram,0x000109d47398) */
/* WARNING: Removing unreachable block (ram,0x000109d474d8) */
/* WARNING: Removing unreachable block (ram,0x000109d4749c) */
/* WARNING: Removing unreachable block (ram,0x000109d474ec) */
/* WARNING: Removing unreachable block (ram,0x000109d474b0) */
/* WARNING: Removing unreachable block (ram,0x000109d474b4) */
/* WARNING: Removing unreachable block (ram,0x000109d474cc) */

void FUN_109d4714c(undefined8 param_1,ulong param_2,byte *param_3,long param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [256];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_170 = 0x4000000000;
  puStack_178 = auStack_168;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar3 = *param_3;
    uVar1 = (uint)param_5;
    if (((0x19 < (byte)((bVar3 & 0xdf) + 0xbf) && 9 < (byte)(bVar3 - 0x30)) && bVar3 != 0x2e) &&
        bVar3 != 0x5f) {
      uVar1 = 0;
    }
    uVar2 = 0;
    if ((uint)param_5 != 0) {
      uVar2 = uVar1;
    }
    param_5 = (ulong)uVar2;
    func_0x000109d31b50(&puStack_178);
    param_3 = param_3 + 1;
  }
  ppuVar5 = &puStack_178;
  FUN_109d4727c(param_1);
  puVar4 = puStack_178;
  if (puStack_178 != auStack_168) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_178 != auStack_168) {
    _free();
  }
  __Unwind_Resume();
  if ((int)param_5 == 0) {
    uVar1 = *(uint *)(ppuVar5 + 1);
    FUN_109d43c48(puVar4,3,*(undefined4 *)(puVar4 + 0x20));
    FUN_109d43cd4(puVar4,param_2,6);
    FUN_109d43cd4(puVar4,(ulong)uVar1,6);
    if (uVar1 != 0) {
      lVar8 = 0;
      do {
        FUN_109d44680(puVar4,*(undefined4 *)(*ppuVar5 + lVar8),6);
        lVar8 = lVar8 + 4;
      } while ((ulong)uVar1 * 4 - lVar8 != 0);
    }
    return;
  }
  puVar6 = *ppuVar5;
  uVar1 = *(uint *)(ppuVar5 + 1);
  plVar9 = *(long **)(*(long *)(puVar4 + 0x28) + (ulong)((int)param_5 - 4) * 0x10);
  FUN_109d43c48(puVar4,param_5,*(undefined4 *)(puVar4 + 0x20));
  uVar2 = *(uint *)(plVar9 + 1);
  if ((*(byte *)(*plVar9 + 8) & 1) == 0) {
    FUN_109d474f4(puVar4,*plVar9,param_2 & 0xffffffff | 0x100000000);
  }
  uVar10 = 1;
  if (uVar2 != 1) {
    uVar11 = 0;
    do {
      lVar7 = *plVar9;
      lVar8 = lVar7 + (ulong)uVar10 * 0x10;
      bVar3 = *(byte *)(lVar8 + 8);
      if ((bVar3 & 1) == 0) {
        bVar3 = bVar3 >> 1 & 7;
        if (bVar3 == 5) {
          FUN_109d47610(puVar4,puVar6 + uVar11 * 4,uVar1 - uVar11,1);
          uVar12 = uVar11;
        }
        else {
          if (bVar3 != 3) {
            FUN_109d474f4(puVar4,lVar8,*(undefined4 *)(puVar6 + uVar11 * 4));
            goto LAB_109d4747c;
          }
          uVar10 = uVar10 + 1;
          FUN_109d43cd4(puVar4,uVar1 - (int)uVar11,6);
          for (; uVar12 = (ulong)uVar1, uVar1 != (uint)uVar11; uVar11 = (ulong)((uint)uVar11 + 1)) {
            FUN_109d474f4(puVar4,lVar7 + (ulong)uVar10 * 0x10,*(undefined4 *)(puVar6 + uVar11 * 4));
          }
        }
      }
      else {
LAB_109d4747c:
        uVar12 = (ulong)((int)uVar11 + 1);
      }
      uVar10 = uVar10 + 1;
      uVar11 = uVar12;
    } while (uVar10 != uVar2);
  }
  return;
}



/* Entry: 109d4727c; end: 109d4733f;  */

/* WARNING: Removing unreachable block (ram,0x000109d47398) */
/* WARNING: Removing unreachable block (ram,0x000109d474d8) */
/* WARNING: Removing unreachable block (ram,0x000109d4749c) */
/* WARNING: Removing unreachable block (ram,0x000109d474ec) */
/* WARNING: Removing unreachable block (ram,0x000109d474b0) */
/* WARNING: Removing unreachable block (ram,0x000109d474b4) */
/* WARNING: Removing unreachable block (ram,0x000109d474cc) */

void FUN_109d4727c(long param_1,ulong param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((int)param_4 == 0) {
    uVar2 = *(uint *)(param_3 + 1);
    FUN_109d43c48(param_1,3,*(undefined4 *)(param_1 + 0x20));
    FUN_109d43cd4(param_1,param_2,6);
    FUN_109d43cd4(param_1,(ulong)uVar2,6);
    if (uVar2 != 0) {
      lVar5 = 0;
      do {
        FUN_109d44680(param_1,*(undefined4 *)(*param_3 + lVar5),6);
        lVar5 = lVar5 + 4;
      } while ((ulong)uVar2 * 4 - lVar5 != 0);
    }
    return;
  }
  lVar5 = *param_3;
  uVar2 = *(uint *)(param_3 + 1);
  plVar7 = *(long **)(*(long *)(param_1 + 0x28) + (ulong)((int)param_4 - 4) * 0x10);
  FUN_109d43c48(param_1,param_4,*(undefined4 *)(param_1 + 0x20));
  uVar3 = *(uint *)(plVar7 + 1);
  if ((*(byte *)(*plVar7 + 8) & 1) == 0) {
    FUN_109d474f4(param_1,*plVar7,param_2 & 0xffffffff | 0x100000000);
  }
  uVar8 = 1;
  if (uVar3 != 1) {
    uVar9 = 0;
    do {
      lVar6 = *plVar7;
      lVar1 = lVar6 + (ulong)uVar8 * 0x10;
      bVar4 = *(byte *)(lVar1 + 8);
      if ((bVar4 & 1) == 0) {
        bVar4 = bVar4 >> 1 & 7;
        if (bVar4 == 5) {
          FUN_109d47610(param_1,lVar5 + uVar9 * 4,uVar2 - uVar9,1);
          uVar10 = uVar9;
        }
        else {
          if (bVar4 != 3) {
            FUN_109d474f4(param_1,lVar1,*(undefined4 *)(lVar5 + uVar9 * 4));
            goto LAB_109d4747c;
          }
          uVar8 = uVar8 + 1;
          FUN_109d43cd4(param_1,uVar2 - (int)uVar9,6);
          for (; uVar10 = (ulong)uVar2, uVar2 != (uint)uVar9; uVar9 = (ulong)((uint)uVar9 + 1)) {
            FUN_109d474f4(param_1,lVar6 + (ulong)uVar8 * 0x10,*(undefined4 *)(lVar5 + uVar9 * 4));
          }
        }
      }
      else {
LAB_109d4747c:
        uVar10 = (ulong)((int)uVar9 + 1);
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar10;
    } while (uVar8 != uVar3);
  }
  return;
}



/* Entry: 109d47340; end: 109d474f3;  */

void FUN_109d47340(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined1 *param_5,
                  ulong param_6,ulong param_7)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  
  plVar6 = *(long **)(*(long *)(param_1 + 0x28) + (ulong)((int)param_2 - 4) * 0x10);
  FUN_109d43c48(param_1,param_2,*(undefined4 *)(param_1 + 0x20));
  uVar2 = *(uint *)(plVar6 + 1);
  if ((param_7 >> 0x20 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    if ((*(byte *)(*plVar6 + 8) & 1) == 0) {
      FUN_109d474f4(param_1,*plVar6,param_7);
    }
    uVar7 = 1;
  }
  if (uVar7 != uVar2) {
    uVar8 = 0;
    puVar5 = param_5;
    do {
      lVar1 = *plVar6 + (ulong)uVar7 * 0x10;
      bVar3 = *(byte *)(lVar1 + 8);
      if ((bVar3 & 1) == 0) {
        bVar3 = bVar3 >> 1 & 7;
        if (bVar3 == 5) {
          if (puVar5 == (undefined1 *)0x0) {
            FUN_109d47610(param_1,param_3 + (uVar8 & 0xffffffff) * 4,param_4 - (uVar8 & 0xffffffff),
                          1);
          }
          else {
            func_0x000109d476b8(param_1,param_5,param_6,1);
LAB_109d474ec:
            puVar5 = (undefined1 *)0x0;
          }
        }
        else {
          if (bVar3 != 3) {
            FUN_109d474f4(param_1,lVar1,*(undefined4 *)(param_3 + (uVar8 & 0xffffffff) * 4));
            goto LAB_109d4747c;
          }
          uVar7 = uVar7 + 1;
          lVar1 = *plVar6 + (ulong)uVar7 * 0x10;
          if (puVar5 == (undefined1 *)0x0) {
            FUN_109d43cd4(param_1,(int)param_4 - (int)uVar8,6);
            for (; (int)param_4 != (int)uVar8; uVar8 = (ulong)((int)uVar8 + 1)) {
              FUN_109d474f4(param_1,lVar1,*(undefined4 *)(param_3 + (uVar8 & 0xffffffff) * 4));
            }
            puVar5 = (undefined1 *)0x0;
            uVar8 = param_4;
          }
          else {
            FUN_109d43cd4(param_1,param_6,6);
            uVar4 = param_6 & 0xffffffff;
            if ((int)param_6 == 0) goto LAB_109d474ec;
            do {
              func_0x000109d47584(param_1,lVar1,*puVar5);
              uVar4 = uVar4 - 1;
              puVar5 = puVar5 + 1;
            } while (uVar4 != 0);
            puVar5 = (undefined1 *)0x0;
          }
        }
      }
      else {
LAB_109d4747c:
        uVar8 = (ulong)((int)uVar8 + 1);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  return;
}



/* Entry: 109d474f4; end: 109d4760f;  */

/* WARNING: Removing unreachable block (ram,0x000109d446c8) */
/* WARNING: Removing unreachable block (ram,0x000109d446d8) */
/* WARNING: Removing unreachable block (ram,0x000109d446f8) */

void FUN_109d474f4(undefined8 *param_1,long *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  
  bVar3 = *(byte *)(param_2 + 1) >> 1 & 7;
  if (bVar3 == 1) {
    lVar5 = *param_2;
    if (lVar5 == 0) {
      return;
    }
  }
  else if (bVar3 == 2) {
    lVar5 = *param_2;
    if (lVar5 == 0) {
      return;
    }
    uVar2 = (int)lVar5 - 1;
    uVar4 = 1 << (ulong)(uVar2 & 0x1f);
    if (uVar4 <= param_3) {
      do {
        FUN_109d43c48(param_1,param_3 & uVar4 - 1 | uVar4,lVar5);
        param_3 = param_3 >> (ulong)(uVar2 & 0x1f);
      } while (uVar4 <= param_3);
    }
  }
  else {
    uVar4 = param_3 & 0xff;
    iVar1 = (int)(char)param_3;
    param_3 = 0x3e;
    if (uVar4 != 0x2e) {
      param_3 = 0x3f;
    }
    if (uVar4 - 0x30 < 10) {
      param_3 = iVar1 + 4;
    }
    if (uVar4 - 0x41 < 0x1a) {
      param_3 = iVar1 - 0x27;
    }
    if (uVar4 - 0x61 < 0x1a) {
      param_3 = iVar1 - 0x61;
    }
    lVar5 = 6;
  }
  *(uint *)((long)param_1 + 0x1c) =
       *(uint *)((long)param_1 + 0x1c) | param_3 << (ulong)(*(uint *)(param_1 + 3) & 0x1f);
  uVar4 = *(uint *)(param_1 + 3) + (int)lVar5;
  if (0x1f < uVar4) {
    FUN_109d3a7bc(*param_1,&stack0xffffffffffffffcc,&stack0xffffffffffffffd0);
    iVar1 = *(int *)(param_1 + 3);
    uVar4 = 0;
    if (iVar1 != 0) {
      uVar4 = param_3 >> (ulong)(-iVar1 & 0x1f);
    }
    *(uint *)((long)param_1 + 0x1c) = uVar4;
    uVar4 = iVar1 + (int)lVar5 & 0x1f;
  }
  *(uint *)(param_1 + 3) = uVar4;
  return;
}



/* Entry: 109d47610; end: 109d478df;  */

void FUN_109d47610(long *param_1,long param_2,long param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_4 != 0) {
    FUN_109d43cd4(param_1,param_3,6);
  }
  FUN_109d43d4c(param_1);
  func_0x000109d477e0(*param_1,param_2,param_2 + param_3 * 4);
  while( true ) {
    plVar1 = (long *)param_1[1];
    uVar4 = *(undefined8 *)(*param_1 + 8);
    if (plVar1 == (long *)0x0) {
      iVar3 = 0;
    }
    else {
      plVar2 = plVar1;
      (**(code **)(*plVar1 + 0x50))();
      iVar3 = ((int)plVar2 + (int)plVar1[4]) - (int)plVar1[2];
    }
    if ((iVar3 + (int)uVar4 & 3U) == 0) break;
    func_0x000109d3acdc(*param_1,0);
  }
  return;
}



/* Entry: 109d478e0; end: 109d47a93;  */

void FUN_109d478e0(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined1 *param_5,
                  ulong param_6,ulong param_7)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  
  plVar6 = *(long **)(*(long *)(param_1 + 0x28) + (ulong)((int)param_2 - 4) * 0x10);
  FUN_109d43c48(param_1,param_2,*(undefined4 *)(param_1 + 0x20));
  uVar2 = *(uint *)(plVar6 + 1);
  if ((param_7 >> 0x20 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    if ((*(byte *)(*plVar6 + 8) & 1) == 0) {
      func_0x000109d474f4(param_1,*plVar6,param_7);
    }
    uVar7 = 1;
  }
  if (uVar7 != uVar2) {
    uVar8 = 0;
    puVar5 = param_5;
    do {
      lVar1 = *plVar6 + (ulong)uVar7 * 0x10;
      bVar3 = *(byte *)(lVar1 + 8);
      if ((bVar3 & 1) == 0) {
        bVar3 = bVar3 >> 1 & 7;
        if (bVar3 == 5) {
          if (puVar5 == (undefined1 *)0x0) {
            FUN_109d47b24(param_1,param_3 + (uVar8 & 0xffffffff) * 8,param_4 - (uVar8 & 0xffffffff),
                          1);
          }
          else {
            func_0x000109d476b8(param_1,param_5,param_6,1);
LAB_109d47a8c:
            puVar5 = (undefined1 *)0x0;
          }
        }
        else {
          if (bVar3 != 3) {
            FUN_109d47a94(param_1,lVar1,*(undefined8 *)(param_3 + (uVar8 & 0xffffffff) * 8));
            goto LAB_109d47a1c;
          }
          uVar7 = uVar7 + 1;
          lVar1 = *plVar6 + (ulong)uVar7 * 0x10;
          if (puVar5 == (undefined1 *)0x0) {
            FUN_109d43cd4(param_1,(int)param_4 - (int)uVar8,6);
            for (; (int)param_4 != (int)uVar8; uVar8 = (ulong)((int)uVar8 + 1)) {
              FUN_109d47a94(param_1,lVar1,*(undefined8 *)(param_3 + (uVar8 & 0xffffffff) * 8));
            }
            puVar5 = (undefined1 *)0x0;
            uVar8 = param_4;
          }
          else {
            FUN_109d43cd4(param_1,param_6,6);
            uVar4 = param_6 & 0xffffffff;
            if ((int)param_6 == 0) goto LAB_109d47a8c;
            do {
              func_0x000109d47584(param_1,lVar1,*puVar5);
              uVar4 = uVar4 - 1;
              puVar5 = puVar5 + 1;
            } while (uVar4 != 0);
            puVar5 = (undefined1 *)0x0;
          }
        }
      }
      else {
LAB_109d47a1c:
        uVar8 = (ulong)((int)uVar8 + 1);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  return;
}



/* Entry: 109d47a94; end: 109d47b23;  */

void FUN_109d47a94(undefined8 *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  
  bVar4 = *(byte *)(param_2 + 1) >> 1 & 7;
  if (bVar4 == 1) {
    lVar5 = *param_2;
    if (lVar5 == 0) {
      return;
    }
  }
  else if (bVar4 == 2) {
    lVar5 = *param_2;
    if (lVar5 == 0) {
      return;
    }
    if (param_3 >> 0x20 == 0) {
      uVar3 = (int)lVar5 - 1;
      uVar6 = 1 << (ulong)(uVar3 & 0x1f);
      if (uVar6 <= (uint)param_3) {
        do {
          FUN_109d43c48(param_1,(uint)param_3 & uVar6 - 1 | uVar6,lVar5);
          uVar2 = (uint)param_3 >> (ulong)(uVar3 & 0x1f);
          param_3 = (ulong)uVar2;
        } while (uVar6 <= uVar2);
      }
    }
    else {
      uVar3 = (int)lVar5 - 1;
      uVar6 = 1 << (ulong)(uVar3 & 0x1f);
      do {
        FUN_109d43c48(param_1,uVar6 - 1 & (uint)param_3 | uVar6,lVar5);
        param_3 = param_3 >> ((ulong)uVar3 & 0x3f);
      } while (uVar6 <= param_3);
    }
  }
  else {
    iVar1 = (int)(char)param_3;
    uVar6 = 0x3e;
    if (iVar1 != 0x2e) {
      uVar6 = 0x3f;
    }
    if (iVar1 - 0x30U < 10) {
      uVar6 = iVar1 + 4;
    }
    if (iVar1 - 0x41U < 0x1a) {
      uVar6 = iVar1 - 0x27;
    }
    if (((uint)param_3 - 0x61 & 0xff) < 0x1a) {
      uVar6 = iVar1 - 0x61;
    }
    param_3 = (ulong)uVar6;
    lVar5 = 6;
  }
  *(uint *)((long)param_1 + 0x1c) =
       *(uint *)((long)param_1 + 0x1c) | (uint)param_3 << (ulong)(*(uint *)(param_1 + 3) & 0x1f);
  uVar6 = *(uint *)(param_1 + 3) + (int)lVar5;
  if (0x1f < uVar6) {
    FUN_109d3a7bc(*param_1,&stack0xffffffffffffffcc,&stack0xffffffffffffffd0);
    iVar1 = *(int *)(param_1 + 3);
    uVar6 = 0;
    if (iVar1 != 0) {
      uVar6 = (uint)param_3 >> (ulong)(-iVar1 & 0x1f);
    }
    *(uint *)((long)param_1 + 0x1c) = uVar6;
    uVar6 = iVar1 + (int)lVar5 & 0x1f;
  }
  *(uint *)(param_1 + 3) = uVar6;
  return;
}



/* Entry: 109d47b24; end: 109d47ca3;  */

void FUN_109d47b24(long *param_1,long param_2,long param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_4 != 0) {
    FUN_109d43cd4(param_1,param_3,6);
  }
  FUN_109d43d4c(param_1);
  FUN_109d3abbc(*param_1,param_2,param_2 + param_3 * 8);
  while( true ) {
    plVar1 = (long *)param_1[1];
    uVar4 = *(undefined8 *)(*param_1 + 8);
    if (plVar1 == (long *)0x0) {
      iVar3 = 0;
    }
    else {
      plVar2 = plVar1;
      (**(code **)(*plVar1 + 0x50))();
      iVar3 = ((int)plVar2 + (int)plVar1[4]) - (int)plVar1[2];
    }
    if ((iVar3 + (int)uVar4 & 3U) == 0) break;
    func_0x000109d3acdc(*param_1,0);
  }
  return;
}



/* Entry: 109d47ca4; end: 109d47d6f;  */

void FUN_109d47ca4(undefined1 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 *unaff_x21;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar3 = param_2;
  if (*(int *)(param_1 + 0x24) != param_2) {
    unaff_x21 = auStack_40;
    uStack_48 = 0x200000000;
    puStack_50 = unaff_x21;
    func_0x000109d31b50(&puStack_50);
    iVar3 = 1;
    FUN_109d47df8(param_1,1,&puStack_50,0);
    *(int *)(param_1 + 0x24) = param_2;
    param_1 = puStack_50;
    if (puStack_50 != unaff_x21) {
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (puStack_50 != unaff_x21) {
      _free();
    }
    __Unwind_Resume();
    piVar4 = (int *)(param_1 + 0x58);
    piVar2 = *(int **)piVar4;
    piVar1 = *(int **)(param_1 + 0x60);
    if (piVar2 != piVar1) {
      if (piVar1[-8] == iVar3) {
        return;
      }
      do {
        if (*piVar2 == iVar3) {
          return;
        }
        piVar2 = piVar2 + 8;
      } while (piVar2 != piVar1);
    }
    if (piVar1 < *(int **)(param_1 + 0x68)) {
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[0] = 0;
      piVar1[1] = 0;
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar4 = piVar1 + 8;
    }
    else {
      FUN_109d47ebc();
    }
    *(int **)(param_1 + 0x60) = piVar4;
    piVar4[-8] = iVar3;
    return;
  }
  return;
}



/* Entry: 109d47d70; end: 109d47df7;  */

void FUN_109d47d70(long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x58);
  piVar2 = *(int **)piVar3;
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar2 != piVar1) {
    if (piVar1[-8] == param_2) {
      return;
    }
    do {
      if (*piVar2 == param_2) {
        return;
      }
      piVar2 = piVar2 + 8;
    } while (piVar2 != piVar1);
  }
  if (piVar1 < *(int **)(param_1 + 0x68)) {
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar3 = piVar1 + 8;
  }
  else {
    FUN_109d47ebc();
  }
  *(int **)(param_1 + 0x60) = piVar3;
  piVar3[-8] = param_2;
  return;
}



/* Entry: 109d47df8; end: 109d47ebb;  */

/* WARNING: Removing unreachable block (ram,0x000109d47398) */
/* WARNING: Removing unreachable block (ram,0x000109d474d8) */
/* WARNING: Removing unreachable block (ram,0x000109d4749c) */
/* WARNING: Removing unreachable block (ram,0x000109d474ec) */
/* WARNING: Removing unreachable block (ram,0x000109d474b0) */
/* WARNING: Removing unreachable block (ram,0x000109d474b4) */
/* WARNING: Removing unreachable block (ram,0x000109d474cc) */

void FUN_109d47df8(long param_1,ulong param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((int)param_4 == 0) {
    uVar2 = *(uint *)(param_3 + 1);
    FUN_109d43c48(param_1,3,*(undefined4 *)(param_1 + 0x20));
    FUN_109d43cd4(param_1,param_2,6);
    FUN_109d43cd4(param_1,(ulong)uVar2,6);
    if (uVar2 != 0) {
      lVar5 = 0;
      do {
        FUN_109d44680(param_1,*(undefined4 *)(*param_3 + lVar5),6);
        lVar5 = lVar5 + 4;
      } while ((ulong)uVar2 * 4 - lVar5 != 0);
    }
    return;
  }
  lVar5 = *param_3;
  uVar3 = *(uint *)(param_3 + 1);
  plVar7 = *(long **)(*(long *)(param_1 + 0x28) + (ulong)((int)param_4 - 4) * 0x10);
  FUN_109d43c48(param_1,param_4,*(undefined4 *)(param_1 + 0x20));
  uVar2 = *(uint *)(plVar7 + 1);
  if ((*(byte *)(*plVar7 + 8) & 1) == 0) {
    FUN_109d474f4(param_1,*plVar7,param_2 & 0xffffffff | 0x100000000);
  }
  uVar8 = 1;
  if (uVar2 != 1) {
    uVar9 = 0;
    do {
      lVar6 = *plVar7;
      lVar1 = lVar6 + (ulong)uVar8 * 0x10;
      bVar4 = *(byte *)(lVar1 + 8);
      if ((bVar4 & 1) == 0) {
        bVar4 = bVar4 >> 1 & 7;
        if (bVar4 == 5) {
          FUN_109d47610(param_1,lVar5 + uVar9 * 4,uVar3 - uVar9,1);
          uVar10 = uVar9;
        }
        else {
          if (bVar4 != 3) {
            FUN_109d474f4(param_1,lVar1,*(undefined4 *)(lVar5 + uVar9 * 4));
            goto LAB_109d4747c;
          }
          uVar8 = uVar8 + 1;
          FUN_109d43cd4(param_1,uVar3 - (int)uVar9,6);
          for (; uVar10 = (ulong)uVar3, uVar3 != (uint)uVar9; uVar9 = (ulong)((uint)uVar9 + 1)) {
            FUN_109d474f4(param_1,lVar6 + (ulong)uVar8 * 0x10,*(undefined4 *)(lVar5 + uVar9 * 4));
          }
        }
      }
      else {
LAB_109d4747c:
        uVar10 = (ulong)((int)uVar9 + 1);
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar10;
    } while (uVar8 != uVar2);
  }
  return;
}



/* Entry: 109d47ebc; end: 109d47faf;  */

/* WARNING: Possible PIC construction at 0x000109d47f5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d47f60) */

void FUN_109d47ebc(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined1 auStack_d0 [64];
  undefined8 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  ppuVar2 = (undefined8 **)auStack_60;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar8 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar8 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar7 = 0x7ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_109d47fc4();
    }
    puStack_50 = (undefined8 *)((long)plVar3 + (long)puVar8);
    plStack_40 = plVar3 + uVar7 * 4;
    puStack_50[1] = 0;
    *puStack_50 = 0;
    puStack_50[3] = 0;
    puStack_50[2] = 0;
    puVar8 = puStack_50 + 4;
    param_2 = (undefined4 *)*param_1;
    param_3 = (undefined4 *)param_1[1];
    param_4 = (undefined4 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar10 = 0x109d47f60;
    plVar4 = param_1;
    plStack_58 = plVar3;
    puStack_48 = puVar8;
  }
  else {
    FUN_109d47fb0();
    func_0x000109d48140(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_109d47fb0;
    plVar4 = (long *)&DAT_10f62a4d8;
    ppuStack_70 = ppuVar9;
    func_0x000104c4f6cc();
    ppuVar2 = &puStack_90;
    pcStack_78 = FUN_109d47fc4;
    ppuVar9 = &puStack_80;
    puStack_90 = puVar8;
    plStack_88 = param_1;
    if ((ulong)param_2 >> 0x3b == 0) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 << 5);
      return;
    }
    uVar10 = 0x109d47ff8;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000104c4f740();
  }
  *(undefined8 **)((long)ppuVar2 + -0x20) = puVar8;
  *(long **)((long)ppuVar2 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar9;
  *(undefined8 *)((long)ppuVar2 + -8) = uVar10;
  *(undefined4 **)((long)ppuVar2 + -0x30) = param_4;
  *(undefined4 **)((long)ppuVar2 + -0x38) = param_4;
  *(long **)((long)ppuVar2 + -0x58) = plVar4;
  *(undefined1 **)((long)ppuVar2 + -0x50) = (undefined1 *)((long)ppuVar2 + -0x38);
  *(undefined1 **)((long)ppuVar2 + -0x48) = (undefined1 *)((long)ppuVar2 + -0x30);
  puVar6 = param_2;
  if (param_2 == param_3) {
    *(undefined1 *)((long)ppuVar2 + -0x40) = 1;
  }
  else {
    do {
      *param_4 = *puVar6;
      *(undefined8 *)(param_4 + 4) = 0;
      *(undefined8 *)(param_4 + 6) = 0;
      *(undefined8 *)(param_4 + 2) = 0;
      uVar10 = *(undefined8 *)(puVar6 + 2);
      *(undefined8 *)(param_4 + 4) = *(undefined8 *)(puVar6 + 4);
      *(undefined8 *)(param_4 + 2) = uVar10;
      *(undefined8 *)(param_4 + 6) = *(undefined8 *)(puVar6 + 6);
      *(undefined8 *)(puVar6 + 2) = 0;
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 6) = 0;
      puVar6 = puVar6 + 8;
      param_4 = param_4 + 8;
    } while (puVar6 != param_3);
    *(undefined4 **)((long)ppuVar2 + -0x30) = param_4;
    *(undefined1 *)((long)ppuVar2 + -0x40) = 1;
    do {
      *(undefined4 **)((long)ppuVar2 + -0x28) = param_2 + 2;
      FUN_109d3aa18((undefined1 *)((long)ppuVar2 + -0x28));
      param_2 = param_2 + 8;
    } while (param_2 != param_3);
  }
  FUN_109d480b8((undefined1 *)((long)ppuVar2 + -0x58));
  return;
}



/* Entry: 109d47fb0; end: 109d47fc3;  */

void FUN_109d47fb0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined4 **ppuStack_80;
  undefined4 **ppuStack_78;
  undefined1 uStack_70;
  undefined4 *puStack_68;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000104c4f740();
    ppuStack_80 = &puStack_68;
    ppuStack_78 = &puStack_60;
    puStack_60 = param_4;
    puVar2 = param_2;
    puStack_88 = puVar1;
    puStack_68 = param_4;
    if (param_2 == param_3) {
      uStack_70 = 1;
    }
    else {
      do {
        *puStack_60 = *puVar2;
        *(undefined8 *)(puStack_60 + 4) = 0;
        *(undefined8 *)(puStack_60 + 6) = 0;
        *(undefined8 *)(puStack_60 + 2) = 0;
        uVar3 = *(undefined8 *)(puVar2 + 2);
        *(undefined8 *)(puStack_60 + 4) = *(undefined8 *)(puVar2 + 4);
        *(undefined8 *)(puStack_60 + 2) = uVar3;
        *(undefined8 *)(puStack_60 + 6) = *(undefined8 *)(puVar2 + 6);
        *(undefined8 *)(puVar2 + 2) = 0;
        *(undefined8 *)(puVar2 + 4) = 0;
        *(undefined8 *)(puVar2 + 6) = 0;
        puVar2 = puVar2 + 8;
        puStack_60 = puStack_60 + 8;
      } while (puVar2 != param_3);
      uStack_70 = 1;
      do {
        puStack_58 = param_2 + 2;
        FUN_109d3aa18(&puStack_58);
        param_2 = param_2 + 8;
      } while (param_2 != param_3);
    }
    FUN_109d480b8(&puStack_88);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 109d47fc4; end: 109d480b7;  */

void FUN_109d47fc4(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined4 **ppuStack_70;
  undefined4 **ppuStack_68;
  undefined1 uStack_60;
  undefined4 *puStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000104c4f740();
    ppuStack_70 = &puStack_58;
    ppuStack_68 = &puStack_50;
    puStack_50 = param_4;
    puVar1 = param_2;
    uStack_78 = param_1;
    puStack_58 = param_4;
    if (param_2 == param_3) {
      uStack_60 = 1;
    }
    else {
      do {
        *puStack_50 = *puVar1;
        *(undefined8 *)(puStack_50 + 4) = 0;
        *(undefined8 *)(puStack_50 + 6) = 0;
        *(undefined8 *)(puStack_50 + 2) = 0;
        uVar2 = *(undefined8 *)(puVar1 + 2);
        *(undefined8 *)(puStack_50 + 4) = *(undefined8 *)(puVar1 + 4);
        *(undefined8 *)(puStack_50 + 2) = uVar2;
        *(undefined8 *)(puStack_50 + 6) = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(puVar1 + 2) = 0;
        *(undefined8 *)(puVar1 + 4) = 0;
        *(undefined8 *)(puVar1 + 6) = 0;
        puVar1 = puVar1 + 8;
        puStack_50 = puStack_50 + 8;
      } while (puVar1 != param_3);
      uStack_60 = 1;
      do {
        puStack_48 = param_2 + 2;
        FUN_109d3aa18(&puStack_48);
        param_2 = param_2 + 8;
      } while (param_2 != param_3);
    }
    FUN_109d480b8(&uStack_78);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 109d480b8; end: 109d480eb;  */

long FUN_109d480b8(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109d480ec(param_1);
  }
  return param_1;
}



/* Entry: 109d480ec; end: 109d481c3;  */

void FUN_109d480ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x20) {
    lStack_28 = lVar1 + -0x18;
    FUN_109d3aa18(&lStack_28);
  }
  return;
}



/* Entry: 109d481c4; end: 109d48287;  */

/* WARNING: Removing unreachable block (ram,0x000109d47938) */
/* WARNING: Removing unreachable block (ram,0x000109d47a78) */
/* WARNING: Removing unreachable block (ram,0x000109d47a3c) */
/* WARNING: Removing unreachable block (ram,0x000109d47a8c) */
/* WARNING: Removing unreachable block (ram,0x000109d47a50) */
/* WARNING: Removing unreachable block (ram,0x000109d47a54) */
/* WARNING: Removing unreachable block (ram,0x000109d47a6c) */

void FUN_109d481c4(long param_1,ulong param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((int)param_4 == 0) {
    uVar2 = *(uint *)(param_3 + 1);
    FUN_109d43c48(param_1,3,*(undefined4 *)(param_1 + 0x20));
    FUN_109d43cd4(param_1,param_2,6);
    FUN_109d43cd4(param_1,(ulong)uVar2,6);
    if (uVar2 != 0) {
      lVar5 = 0;
      do {
        FUN_109d44680(param_1,*(undefined8 *)(*param_3 + lVar5),6);
        lVar5 = lVar5 + 8;
      } while ((ulong)uVar2 * 8 - lVar5 != 0);
    }
    return;
  }
  lVar5 = *param_3;
  uVar3 = *(uint *)(param_3 + 1);
  plVar7 = *(long **)(*(long *)(param_1 + 0x28) + (ulong)((int)param_4 - 4) * 0x10);
  FUN_109d43c48(param_1,param_4,*(undefined4 *)(param_1 + 0x20));
  uVar2 = *(uint *)(plVar7 + 1);
  if ((*(byte *)(*plVar7 + 8) & 1) == 0) {
    func_0x000109d474f4(param_1,*plVar7,param_2 & 0xffffffff | 0x100000000);
  }
  uVar8 = 1;
  if (uVar2 != 1) {
    uVar9 = 0;
    do {
      lVar6 = *plVar7;
      lVar1 = lVar6 + (ulong)uVar8 * 0x10;
      bVar4 = *(byte *)(lVar1 + 8);
      if ((bVar4 & 1) == 0) {
        bVar4 = bVar4 >> 1 & 7;
        if (bVar4 == 5) {
          FUN_109d47b24(param_1,lVar5 + uVar9 * 8,uVar3 - uVar9,1);
          uVar10 = uVar9;
        }
        else {
          if (bVar4 != 3) {
            FUN_109d47a94(param_1,lVar1,*(undefined8 *)(lVar5 + uVar9 * 8));
            goto LAB_109d47a1c;
          }
          uVar8 = uVar8 + 1;
          FUN_109d43cd4(param_1,uVar3 - (int)uVar9,6);
          for (; uVar10 = (ulong)uVar3, uVar3 != (uint)uVar9; uVar9 = (ulong)((uint)uVar9 + 1)) {
            FUN_109d47a94(param_1,lVar6 + (ulong)uVar8 * 0x10,*(undefined8 *)(lVar5 + uVar9 * 8));
          }
        }
      }
      else {
LAB_109d47a1c:
        uVar10 = (ulong)((int)uVar9 + 1);
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar10;
    } while (uVar8 != uVar2);
  }
  return;
}



/* Entry: 109d48288; end: 109d482e3;  */

undefined1  [16] FUN_109d48288(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  plVar1 = param_1;
  uStack_28 = param_2;
  FUN_109d482e4(param_1,&uStack_28,&lStack_30);
  if ((int)plVar1 == 0) {
    lStack_30 = *param_1 + (ulong)*(uint *)(param_1 + 2) * 0x10;
    lVar2 = lStack_30;
  }
  else {
    lVar2 = *param_1 + (ulong)*(uint *)(param_1 + 2) * 0x10;
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = lStack_30;
  return auVar3;
}



/* Entry: 109d482e4; end: 109d4838f;  */

undefined8 FUN_109d482e4(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d48324;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d48324:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d48390; end: 109d4840b;  */

void FUN_109d48390(long *param_1,char *param_2,char *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  uVar1 = ((long)param_3 - (long)param_2) + uVar2;
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1,8);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  if (param_2 != param_3) {
    plVar3 = (long *)(*param_1 + uVar2 * 8);
    pcVar5 = param_2;
    do {
      pcVar4 = pcVar5 + 1;
      *plVar3 = (long)*pcVar5;
      plVar3 = plVar3 + 1;
      pcVar5 = pcVar4;
    } while (pcVar4 != param_3);
  }
  *(int *)(param_1 + 1) = (int)uVar2 + (int)((long)param_3 - (long)param_2);
  return;
}



/* Entry: 109d4840c; end: 109d48453;  */

long FUN_109d4840c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_109d48454(param_1,param_2,&lStack_28);
  if ((int)plVar1 == 0) {
    lStack_28 = *param_1 + (ulong)*(uint *)(param_1 + 2) * 0x18;
  }
  return lStack_28;
}



/* Entry: 109d48454; end: 109d4852f;  */

undefined8 FUN_109d48454(long *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  lVar8 = param_1[2];
  if ((int)lVar8 == 0) {
    uVar3 = 0;
    piVar4 = (int *)0x0;
  }
  else {
    lVar10 = *param_1;
    piVar4 = param_2;
    FUN_109d48530();
    uVar2 = (int)lVar8 - 1;
    uVar5 = (uint)piVar4 & uVar2;
    piVar4 = (int *)(lVar10 + (ulong)uVar5 * 0x18);
    iVar7 = *piVar4;
    lVar8 = *(long *)(piVar4 + 2);
    if (*param_2 != iVar7 || *(long *)(param_2 + 2) != lVar8) {
      iVar9 = 1;
      piVar6 = (int *)0x0;
      do {
        if ((iVar7 == -1) && (lVar8 == -4)) {
          uVar3 = 0;
          if (piVar6 != (int *)0x0) {
            piVar4 = piVar6;
          }
          goto LAB_109d484bc;
        }
        piVar1 = piVar4;
        if ((piVar6 != (int *)0x0 || lVar8 != -8) || iVar7 != -2) {
          piVar1 = piVar6;
        }
        uVar5 = uVar5 + iVar9;
        iVar9 = iVar9 + 1;
        uVar5 = uVar5 & uVar2;
        piVar4 = (int *)(lVar10 + (ulong)uVar5 * 0x18);
        iVar7 = *piVar4;
        lVar8 = *(long *)(piVar4 + 2);
        piVar6 = piVar1;
      } while (*param_2 != iVar7 || *(long *)(param_2 + 2) != lVar8);
    }
    uVar3 = 1;
  }
LAB_109d484bc:
  *param_3 = piVar4;
  return uVar3;
}



/* Entry: 109d48530; end: 109d48583;  */

uint FUN_109d48530(int *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)param_1[2] >> 4 ^ (uint)param_1[2] >> 9;
  uVar2 = CONCAT44(*param_1 * 0x25,uVar1) + ((ulong)uVar1 << 0x20 ^ 0xffffffffffffffff);
  uVar2 = uVar2 ^ uVar2 >> 0x16;
  uVar2 = uVar2 + (uVar2 << 0xd ^ 0xffffffffffffffff);
  uVar2 = (uVar2 ^ uVar2 >> 8) * 9;
  uVar2 = uVar2 ^ uVar2 >> 0xf;
  uVar2 = uVar2 + (uVar2 << 0x1b ^ 0xffffffffffffffff);
  return (uint)(uVar2 >> 0x1f) ^ (uint)uVar2;
}



/* Entry: 109d48584; end: 109d485eb;  */

ulong FUN_109d48584(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  byte unaff_w21;
  long lVar3;
  long lStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (*(char *)(param_1 + 0x228) == '\x01') {
    FUN_109dfd218(param_1 + 0x238,param_2,param_3);
  }
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = param_2;
  FUN_109e0438c(param_2,param_2 + param_3);
  uStack_48 = param_3 & 0xffffffff | lVar2 << 0x20;
  uStack_40 = 0;
  lStack_50 = param_2;
  func_0x000109de2f04(&lStack_38,lVar3,&lStack_50,&uStack_40);
  if ((unaff_w21 & 1) == 0) {
    uVar1 = *(ulong *)(lStack_38 + 0x10);
  }
  else {
    lVar2 = 1L << ((ulong)*(byte *)(lVar3 + 0x24) & 0x3f);
    uVar1 = (*(long *)(lVar3 + 0x18) + lVar2) - 1U & -lVar2;
    *(ulong *)(lStack_38 + 0x10) = uVar1;
    lVar2 = uVar1 + (param_3 & 0xffffffff);
    if (*(int *)(lVar3 + 0x20) != 6) {
      lVar2 = lVar2 + 1;
    }
    *(long *)(lVar3 + 0x18) = lVar2;
  }
  return uVar1;
}



/* Entry: 109d485ec; end: 109d4865b;  */

undefined1 FUN_109d485ec(byte *param_1,long param_2)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  bVar4 = true;
  do {
    bVar3 = bVar4;
    param_2 = param_2 + -1;
    bVar2 = *param_1;
    bVar5 = bVar2 - 0x30 < 10;
    bVar6 = (bVar2 & 0xffffffdf) - 0x41 < 0x1a;
    if ((char)bVar2 < '\0') break;
    param_1 = param_1 + 1;
    bVar4 = bVar3 && (((bVar5 || bVar6) || bVar2 == 0x2e) || bVar2 == 0x5f);
  } while (param_2 != 0);
  uVar1 = 2;
  if (-1 < (char)bVar2) {
    uVar1 = !bVar3 || ((!bVar5 && !bVar6) && bVar2 != 0x2e) && bVar2 != 0x5f;
  }
  return uVar1;
}



/* Entry: 109d4865c; end: 109d486cb;  */

long * FUN_109d4865c(undefined8 *param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_68;
  undefined4 auStack_28 [2];
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[9] == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = *(long **)*param_1;
    param_3 = (long *)0x1;
    auStack_28[0] = param_2;
    lStack_20 = param_1[9];
    FUN_109d5a9e0(plVar1,auStack_28);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar1;
  }
  ___stack_chk_fail();
  plVar2 = plVar1;
  func_0x000107c2af60();
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x40;
    __Znwm();
    lVar4 = *param_3;
    plVar3[5] = param_3[1];
    plVar3[4] = lVar4;
    plVar3[6] = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined4 *)(plVar3 + 7) = 0;
    func_0x000107c2af64(plVar1,uStack_68,plVar2,plVar3);
  }
  return plVar3;
}



/* Entry: 109d486cc; end: 109d48753;  */

long FUN_109d486cc(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  func_0x000107c2af60(param_1,&uStack_38,param_2);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    lVar2 = 0x40;
    __Znwm();
    uVar3 = *param_3;
    *(undefined8 *)(lVar2 + 0x28) = param_3[1];
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    *(undefined8 *)(lVar2 + 0x30) = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined4 *)(lVar2 + 0x38) = 0;
    func_0x000107c2af64(param_1,uStack_38,plVar1,lVar2);
  }
  return lVar2;
}



/* Entry: 109d48754; end: 109d48797;  */

long FUN_109d48754(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_109d48798(param_1,param_2,&lStack_28);
  if ((int)plVar1 == 0) {
    lStack_28 = *param_1 + (ulong)*(uint *)(param_1 + 2) * 0x10;
  }
  return lStack_28;
}



/* Entry: 109d48798; end: 109d4882b;  */

undefined8 FUN_109d48798(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffffffc) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d487d8;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xfffffffffffffff8) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d487d8:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d4882c; end: 109d4887b;  */

void FUN_109d4882c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_109d4882c(param_1,*param_2);
    FUN_109d4882c(param_1,param_2[1]);
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



/* Entry: 109d4887c; end: 109d49cf7;  */

void FUN_109d4887c(long *param_1,long **param_2,long **param_3,int param_4)

{
  undefined8 *****pppppuVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  undefined8 ****ppppuVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  undefined8 uVar22;
  long **pplVar23;
  long **pplVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long *plVar28;
  int iStack_320;
  int iStack_31c;
  undefined8 uStack_318;
  uint uStack_310;
  int iStack_30c;
  long *plStack_308;
  long lStack_300;
  uint uStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ****ppppuStack_2b0;
  uint auStack_2a8 [6];
  long *plStack_290;
  long *plStack_288;
  long alStack_280 [64];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = (uint)param_3;
  if ((uint)param_2 != uVar11) {
    FUN_109d3b6e4(*param_1,0xb,4);
    if (param_4 == 0) {
      uStack_318 = 0;
      iStack_31c = 0;
      iStack_30c = 0;
    }
    else {
      plVar8 = (long *)0x228;
      __Znwm();
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = (long)&PTR_FUN_110b40f08;
      plVar8[8] = 0;
      plVar8[7] = 0;
      plVar8[10] = 0;
      plVar8[9] = 0;
      plVar8[0xc] = 0;
      plVar8[0xb] = 0;
      plVar8[0xe] = 0;
      plVar8[0xd] = 0;
      plVar8[0x10] = 0;
      plVar8[0xf] = 0;
      plVar8[0x12] = 0;
      plVar8[0x11] = 0;
      plVar8[0x14] = 0;
      plVar8[0x13] = 0;
      plVar8[0x16] = 0;
      plVar8[0x15] = 0;
      plVar8[0x18] = 0;
      plVar8[0x17] = 0;
      plVar8[0x1a] = 0;
      plVar8[0x19] = 0;
      plVar8[0x1c] = 0;
      plVar8[0x1b] = 0;
      plVar8[0x1e] = 0;
      plVar8[0x1d] = 0;
      plVar8[0x20] = 0;
      plVar8[0x1f] = 0;
      plVar8[6] = 0;
      plVar8[5] = 0;
      plVar8[0x22] = 0;
      plVar8[0x21] = 0;
      plVar8[0x24] = 0;
      plVar8[0x23] = 0;
      plVar8[0x26] = 0;
      plVar8[0x25] = 0;
      plVar8[0x28] = 0;
      plVar8[0x27] = 0;
      plVar8[0x2a] = 0;
      plVar8[0x29] = 0;
      plVar8[0x2c] = 0;
      plVar8[0x2b] = 0;
      plVar8[0x2e] = 0;
      plVar8[0x2d] = 0;
      plVar8[0x30] = 0;
      plVar8[0x2f] = 0;
      plVar8[0x32] = 0;
      plVar8[0x31] = 0;
      plVar8[0x34] = 0;
      plVar8[0x33] = 0;
      plVar8[0x36] = 0;
      plVar8[0x35] = 0;
      plVar8[0x38] = 0;
      plVar8[0x37] = 0;
      plVar8[0x3a] = 0;
      plVar8[0x39] = 0;
      plVar8[0x3c] = 0;
      plVar8[0x3b] = 0;
      plVar8[0x3e] = 0;
      plVar8[0x3d] = 0;
      plVar8[0x40] = 0;
      plVar8[0x3f] = 0;
      plVar9 = plVar8 + 3;
      *plVar9 = (long)(plVar8 + 5);
      plVar8[0x42] = 0;
      plVar8[0x41] = 0;
      plVar8[0x44] = 0;
      plVar8[0x43] = 0;
      plVar8[4] = 0x2000000000;
      plStack_290 = plVar9;
      plStack_288 = plVar8;
      FUN_109d4444c(plVar9,7,0xff);
      FUN_109d4444c(plVar9,0,6);
      FUN_109d4444c(plVar9,0x20 - (int)LZCOUNT(uVar11),2);
      lVar26 = *param_1;
      plStack_290 = (long *)0x0;
      plStack_288 = (long *)0x0;
      plStack_2c0 = plVar9;
      plStack_2b8 = plVar8;
      FUN_109d444b8(lVar26,plVar9);
      FUN_109d4459c(lVar26 + 0x28,&plStack_2c0);
      plVar8 = plStack_2b8;
      lVar20 = *(long *)(lVar26 + 0x28);
      lVar26 = *(long *)(lVar26 + 0x30);
      if (plStack_2b8 != (long *)0x0) {
        plVar9 = plStack_2b8 + 1;
        do {
          lVar15 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar9 = (long *)0x228;
      __Znwm();
      plVar8 = plStack_288;
      plVar9[1] = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_110b40f08;
      plVar9[8] = 0;
      plVar9[7] = 0;
      plVar9[10] = 0;
      plVar9[9] = 0;
      plVar9[0xc] = 0;
      plVar9[0xb] = 0;
      plVar9[0xe] = 0;
      plVar9[0xd] = 0;
      plVar9[0x10] = 0;
      plVar9[0xf] = 0;
      plVar9[0x12] = 0;
      plVar9[0x11] = 0;
      plVar9[0x14] = 0;
      plVar9[0x13] = 0;
      plVar9[0x16] = 0;
      plVar9[0x15] = 0;
      plVar9[0x18] = 0;
      plVar9[0x17] = 0;
      plVar9[0x1a] = 0;
      plVar9[0x19] = 0;
      plVar9[0x1c] = 0;
      plVar9[0x1b] = 0;
      plVar9[0x1e] = 0;
      plVar9[0x1d] = 0;
      plVar9[0x20] = 0;
      plVar9[0x1f] = 0;
      plVar9[6] = 0;
      plVar9[5] = 0;
      plVar9[0x22] = 0;
      plVar9[0x21] = 0;
      plVar9[0x24] = 0;
      plVar9[0x23] = 0;
      plVar9[0x26] = 0;
      plVar9[0x25] = 0;
      plVar9[0x28] = 0;
      plVar9[0x27] = 0;
      plVar9[0x2a] = 0;
      plVar9[0x29] = 0;
      plVar9[0x2c] = 0;
      plVar9[0x2b] = 0;
      plVar9[0x2e] = 0;
      plVar9[0x2d] = 0;
      plVar9[0x30] = 0;
      plVar9[0x2f] = 0;
      plVar9[0x32] = 0;
      plVar9[0x31] = 0;
      plVar9[0x34] = 0;
      plVar9[0x33] = 0;
      plVar9[0x36] = 0;
      plVar9[0x35] = 0;
      plVar9[0x38] = 0;
      plVar9[0x37] = 0;
      plVar9[0x3a] = 0;
      plVar9[0x39] = 0;
      plVar9[0x3c] = 0;
      plVar9[0x3b] = 0;
      plVar9[0x3e] = 0;
      plVar9[0x3d] = 0;
      plVar9[0x40] = 0;
      plVar9[0x3f] = 0;
      plVar9[0x42] = 0;
      plVar9[0x41] = 0;
      plVar9[0x44] = 0;
      plVar9[0x43] = 0;
      plStack_290 = plVar9 + 3;
      *plStack_290 = (long)(plVar9 + 5);
      plVar9[4] = 0x2000000000;
      if (plStack_288 != (long *)0x0) {
        plVar28 = plStack_288 + 1;
        do {
          lVar15 = *plVar28;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar5) {
            *plVar28 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          lVar15 = *plStack_288;
          plStack_288 = plVar9;
          (**(code **)(lVar15 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          plVar9 = plStack_288;
        }
      }
      plStack_288 = plVar9;
      plVar8 = plStack_290;
      FUN_109d4444c(plStack_290,8,0xff);
      FUN_109d4444c(plVar8,0,6);
      FUN_109d4444c(plVar8,8,2);
      lVar25 = *param_1;
      plStack_2d0 = plVar8;
      plStack_2c8 = plStack_288;
      plStack_290 = (long *)0x0;
      plStack_288 = (long *)0x0;
      uStack_310 = uVar11;
      FUN_109d444b8(lVar25,plVar8);
      FUN_109d4459c(lVar25 + 0x28,&plStack_2d0);
      plVar8 = plStack_2c8;
      lVar15 = *(long *)(lVar25 + 0x28);
      lVar25 = *(long *)(lVar25 + 0x30);
      if (plStack_2c8 != (long *)0x0) {
        plVar9 = plStack_2c8 + 1;
        do {
          lVar16 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar9 = (long *)0x228;
      __Znwm();
      plVar8 = plStack_288;
      plVar9[1] = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_110b40f08;
      plVar9[8] = 0;
      plVar9[7] = 0;
      plVar9[10] = 0;
      plVar9[9] = 0;
      plVar9[0xc] = 0;
      plVar9[0xb] = 0;
      plVar9[0xe] = 0;
      plVar9[0xd] = 0;
      plVar9[0x10] = 0;
      plVar9[0xf] = 0;
      plVar9[0x12] = 0;
      plVar9[0x11] = 0;
      plVar9[0x14] = 0;
      plVar9[0x13] = 0;
      plVar9[0x16] = 0;
      plVar9[0x15] = 0;
      plVar9[0x18] = 0;
      plVar9[0x17] = 0;
      plVar9[0x1a] = 0;
      plVar9[0x19] = 0;
      plVar9[0x1c] = 0;
      plVar9[0x1b] = 0;
      plVar9[0x1e] = 0;
      plVar9[0x1d] = 0;
      plVar9[0x20] = 0;
      plVar9[0x1f] = 0;
      plVar9[6] = 0;
      plVar9[5] = 0;
      plVar9[0x22] = 0;
      plVar9[0x21] = 0;
      plVar9[0x24] = 0;
      plVar9[0x23] = 0;
      plVar9[0x26] = 0;
      plVar9[0x25] = 0;
      plVar9[0x28] = 0;
      plVar9[0x27] = 0;
      plVar9[0x2a] = 0;
      plVar9[0x29] = 0;
      plVar9[0x2c] = 0;
      plVar9[0x2b] = 0;
      plVar9[0x2e] = 0;
      plVar9[0x2d] = 0;
      plVar9[0x30] = 0;
      plVar9[0x2f] = 0;
      plVar9[0x32] = 0;
      plVar9[0x31] = 0;
      plVar9[0x34] = 0;
      plVar9[0x33] = 0;
      plVar9[0x36] = 0;
      plVar9[0x35] = 0;
      plVar9[0x38] = 0;
      plVar9[0x37] = 0;
      plVar9[0x3a] = 0;
      plVar9[0x39] = 0;
      plVar9[0x3c] = 0;
      plVar9[0x3b] = 0;
      plVar9[0x3e] = 0;
      plVar9[0x3d] = 0;
      plVar9[0x40] = 0;
      plVar9[0x3f] = 0;
      plVar9[0x42] = 0;
      plVar9[0x41] = 0;
      plVar9[0x44] = 0;
      plVar9[0x43] = 0;
      plStack_290 = plVar9 + 3;
      *plStack_290 = (long)(plVar9 + 5);
      plVar9[4] = 0x2000000000;
      if (plStack_288 != (long *)0x0) {
        plVar28 = plStack_288 + 1;
        do {
          lVar16 = *plVar28;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar5) {
            *plVar28 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          lVar16 = *plStack_288;
          plStack_288 = plVar9;
          (**(code **)(lVar16 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          plVar9 = plStack_288;
        }
      }
      plStack_288 = plVar9;
      plVar8 = plStack_290;
      FUN_109d4444c(plStack_290,9,0xff);
      FUN_109d4444c(plVar8,0,6);
      FUN_109d4444c(plVar8,7,2);
      lVar16 = *param_1;
      plStack_2e0 = plVar8;
      plStack_2d8 = plStack_288;
      plStack_290 = (long *)0x0;
      plStack_288 = (long *)0x0;
      plStack_308 = (long *)lVar15;
      FUN_109d444b8(lVar16,plVar8);
      FUN_109d4459c(lVar16 + 0x28,&plStack_2e0);
      plVar8 = plStack_2d8;
      lVar15 = *(long *)(lVar16 + 0x28);
      lVar16 = *(long *)(lVar16 + 0x30);
      if (plStack_2d8 != (long *)0x0) {
        plVar9 = plStack_2d8 + 1;
        do {
          lVar17 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar9 = (long *)0x228;
      __Znwm();
      plVar8 = plStack_288;
      plVar9[1] = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_110b40f08;
      plVar9[8] = 0;
      plVar9[7] = 0;
      plVar9[10] = 0;
      plVar9[9] = 0;
      plVar9[0xc] = 0;
      plVar9[0xb] = 0;
      plVar9[0xe] = 0;
      plVar9[0xd] = 0;
      plVar9[0x10] = 0;
      plVar9[0xf] = 0;
      plVar9[0x12] = 0;
      plVar9[0x11] = 0;
      plVar9[0x14] = 0;
      plVar9[0x13] = 0;
      plVar9[0x16] = 0;
      plVar9[0x15] = 0;
      plVar9[0x18] = 0;
      plVar9[0x17] = 0;
      plVar9[0x1a] = 0;
      plVar9[0x19] = 0;
      plVar9[0x1c] = 0;
      plVar9[0x1b] = 0;
      plVar9[0x1e] = 0;
      plVar9[0x1d] = 0;
      plVar9[0x20] = 0;
      plVar9[0x1f] = 0;
      plVar9[6] = 0;
      plVar9[5] = 0;
      plVar9[0x22] = 0;
      plVar9[0x21] = 0;
      plVar9[0x24] = 0;
      plVar9[0x23] = 0;
      plVar9[0x26] = 0;
      plVar9[0x25] = 0;
      plVar9[0x28] = 0;
      plVar9[0x27] = 0;
      plVar9[0x2a] = 0;
      plVar9[0x29] = 0;
      plVar9[0x2c] = 0;
      plVar9[0x2b] = 0;
      plVar9[0x2e] = 0;
      plVar9[0x2d] = 0;
      plVar9[0x30] = 0;
      plVar9[0x2f] = 0;
      plVar9[0x32] = 0;
      plVar9[0x31] = 0;
      plVar9[0x34] = 0;
      plVar9[0x33] = 0;
      plVar9[0x36] = 0;
      plVar9[0x35] = 0;
      plVar9[0x38] = 0;
      plVar9[0x37] = 0;
      plVar9[0x3a] = 0;
      plVar9[0x39] = 0;
      plVar9[0x3c] = 0;
      plVar9[0x3b] = 0;
      plVar9[0x3e] = 0;
      plVar9[0x3d] = 0;
      plVar9[0x40] = 0;
      plVar9[0x3f] = 0;
      plVar9[0x42] = 0;
      plVar9[0x41] = 0;
      plVar9[0x44] = 0;
      plVar9[0x43] = 0;
      plStack_290 = plVar9 + 3;
      *plStack_290 = (long)(plVar9 + 5);
      plVar9[4] = 0x2000000000;
      if (plStack_288 != (long *)0x0) {
        plVar28 = plStack_288 + 1;
        do {
          lVar17 = *plVar28;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar5) {
            *plVar28 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          lVar17 = *plStack_288;
          plStack_288 = plVar9;
          (**(code **)(lVar17 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          plVar9 = plStack_288;
        }
      }
      plStack_288 = plVar9;
      plVar8 = plStack_290;
      FUN_109d4444c(plStack_290,9,0xff);
      FUN_109d4444c(plVar8,0,6);
      FUN_109d4444c(plVar8,0,8);
      lVar17 = *param_1;
      plStack_2f0 = plVar8;
      plStack_2e8 = plStack_288;
      plStack_290 = (long *)0x0;
      plStack_288 = (long *)0x0;
      FUN_109d444b8(lVar17,plVar8);
      FUN_109d4459c(lVar17 + 0x28,&plStack_2f0);
      plVar8 = plStack_2e8;
      uVar18 = lVar25 - (long)plStack_308;
      lVar25 = *(long *)(lVar17 + 0x28);
      lVar17 = *(long *)(lVar17 + 0x30);
      param_3 = (long **)(ulong)uStack_310;
      if (plStack_2e8 != (long *)0x0) {
        plVar9 = plStack_2e8 + 1;
        do {
          lVar19 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_288;
      iStack_30c = (int)((ulong)(lVar26 - lVar20) >> 4) + 3;
      iStack_31c = (int)((ulong)(lVar16 - lVar15) >> 4) + 3;
      uStack_318 = CONCAT44((int)(uVar18 >> 4) + 3,(int)((ulong)(lVar17 - lVar25) >> 4) + 3);
      if (plStack_288 != (long *)0x0) {
        plVar9 = plStack_288 + 1;
        do {
          lVar20 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar20 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_288 + 0x10))(plStack_288);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    lVar20 = 0;
    plStack_308 = alStack_280;
    plStack_288 = (long *)0x4000000000;
    pplVar23 = param_2;
    pplVar24 = param_3;
    plStack_290 = plStack_308;
    do {
      plVar8 = *(long **)(param_1[0xf] + ((ulong)pplVar23 & 0xffffffff) * 0x10);
      lVar26 = *plVar8;
      if (lVar26 != lVar20) {
        plVar9 = param_1 + 6;
        FUN_109d48288(plVar9,lVar26);
        FUN_109d38988(&plStack_290,(int)plVar9[1] + -1);
        FUN_109d478e0(*param_1,4,plStack_290,(ulong)plStack_288 & 0xffffffff,0,0,0x100000001);
        plStack_288 = (long *)((ulong)plStack_288 & 0xffffffff00000000);
        lVar20 = lVar26;
      }
      if ((char)plVar8[2] == '\x18') {
        plVar9 = param_1 + 6;
        FUN_109d48288(plVar9,plVar8[9]);
        FUN_109d38988(&plStack_290,(int)plVar9[1] + -1);
        uVar11 = (uint)*(byte *)(plVar8 + 10) | (uint)*(byte *)((long)plVar8 + 0x51) << 1;
        FUN_109d38988(&plStack_290,
                      uVar11 & 0xfffffff8 | uVar11 & 3 | (*(uint *)((long)plVar8 + 0x54) & 1) << 2 |
                      (uint)*(byte *)(plVar8 + 0xb) << 3);
        lVar26 = (long)*(char *)((long)plVar8 + 0x2f);
        if (lVar26 < 0) {
          lVar26 = plVar8[4];
        }
        FUN_109d38988(&plStack_290,lVar26);
        lVar26 = (long)*(char *)((long)plVar8 + 0x2f);
        if (lVar26 < 0) {
          plVar9 = (long *)plVar8[3];
          lVar26 = plVar8[4];
        }
        else {
          plVar9 = plVar8 + 3;
        }
        FUN_109d49cf8(&plStack_290,plVar9,(long)plVar9 + lVar26);
        lVar26 = (long)*(char *)((long)plVar8 + 0x47);
        if (lVar26 < 0) {
          lVar26 = plVar8[7];
        }
        FUN_109d38988(&plStack_290,lVar26);
        lVar26 = (long)*(char *)((long)plVar8 + 0x47);
        if (lVar26 < 0) {
          plVar9 = (long *)plVar8[6];
          lVar26 = plVar8[7];
        }
        else {
          plVar9 = plVar8 + 6;
        }
        FUN_109d49cf8(&plStack_290,plVar9,(long)plVar9 + lVar26);
        param_3 = &plStack_290;
        param_2 = (long **)0x1e;
        FUN_109d481c4(*param_1,0x1e,param_3,0);
      }
      else {
        plVar9 = plVar8;
        FUN_109d661e0();
        if (((ulong)plVar9 & 1) == 0) {
          bVar2 = *(byte *)(plVar8 + 2);
          if (bVar2 == 0xc) {
            param_2 = (long **)0x1a;
            iVar12 = 0;
          }
          else if (bVar2 - 0xb < 2) {
            param_2 = (long **)0x3;
            iVar12 = 0;
          }
          else {
            uVar11 = (uint)bVar2;
            if (uVar11 == 0x11) {
              bVar2 = *(byte *)(*plVar8 + 8);
              if (bVar2 < 4) {
                FUN_109d323e4(&ppppuStack_2b0,plVar8 + 3);
                pppppuVar1 = &ppppuStack_2b0;
                if (0x40 < auStack_2a8[0]) {
                  pppppuVar1 = (undefined8 *****)ppppuStack_2b0;
                }
                FUN_109d38988(&plStack_290,*pppppuVar1);
LAB_109d492a0:
                if ((0x40 < auStack_2a8[0]) &&
                   ((undefined8 *****)ppppuStack_2b0 != (undefined8 *****)0x0)) {
                  __ZdaPv();
                }
              }
              else {
                if (bVar2 - 5 < 2) {
                  FUN_109d323e4(&ppppuStack_2b0,plVar8 + 3);
                  uVar11 = auStack_2a8[0];
                  ppppuVar7 = ppppuStack_2b0;
                  pppppuVar1 = &ppppuStack_2b0;
                  if (0x40 < auStack_2a8[0]) {
                    pppppuVar1 = (undefined8 *****)ppppuStack_2b0;
                  }
                  FUN_109d38988(&plStack_290,*pppppuVar1);
                  pppppuVar1 = &ppppuStack_2b0;
                  if (0x40 < uVar11) {
                    pppppuVar1 = (undefined8 *****)ppppuVar7;
                  }
                  FUN_109d38988(&plStack_290,pppppuVar1[1]);
                  goto LAB_109d492a0;
                }
                if (bVar2 == 4) {
                  FUN_109d323e4(&ppppuStack_2b0,plVar8 + 3);
                  pppppuVar1 = &ppppuStack_2b0;
                  if (0x40 < auStack_2a8[0]) {
                    pppppuVar1 = (undefined8 *****)ppppuStack_2b0;
                  }
                  FUN_109d38988(&plStack_290,*(undefined8 *)((long)pppppuVar1 + 2));
                  FUN_109d38988(&plStack_290,*(undefined2 *)pppppuVar1);
                  goto LAB_109d492a0;
                }
              }
              iVar12 = 0;
              param_2 = (long **)0x6;
            }
            else if (uVar11 == 0x10) {
              if (*(uint *)(plVar8 + 4) < 0x41) {
                uVar18 = -(ulong)*(uint *)(plVar8 + 4);
                lVar15 = (plVar8[3] << (uVar18 & 0x3f)) >> (uVar18 & 0x3f);
                lVar26 = lVar15 * -2 + 1;
                if (-1 < lVar15) {
                  lVar26 = lVar15 << 1;
                }
                FUN_109d38988(&plStack_290,lVar26);
                param_2 = (long **)0x4;
                iVar12 = 5;
              }
              else {
                func_0x000109d49d74(&plStack_290,plVar8 + 3);
                param_2 = (long **)0x5;
                iVar12 = 0;
              }
            }
            else if ((uVar11 & 0xfe) == 0xe) {
              lVar26 = *plVar8;
              uVar11 = *(uint *)(*(long *)(lVar26 + 0x18) + 8);
              if ((*(char *)(lVar26 + 8) == '\x11') && (uVar11 == 0x80d)) {
                uStack_310 = (uint)pplVar24;
                uVar22 = *(undefined8 *)(lVar26 + 0x20);
                plVar9 = plVar8;
                FUN_109d6b618();
                uVar11 = (uint)plVar9;
                iStack_320 = 0;
                if (uVar11 == 0) {
                  iStack_320 = uStack_318._4_4_;
                }
                uVar13 = 8;
                if (uVar11 != 0) {
                  uVar13 = 9;
                }
                param_2 = (long **)(ulong)uVar13;
                uVar21 = (uint)uVar22;
                iVar12 = uVar21 - uVar11;
                uVar13 = uVar11;
                if (uVar21 != uVar11) {
                  iVar27 = 0;
                  plVar28 = plVar9;
                  do {
                    plVar10 = plVar8;
                    FUN_109d6b464(plVar8,iVar27);
                    FUN_109d38988(&plStack_290,(ulong)plVar10 & 0xff);
                    uVar21 = (uint)plVar10 & 0xff;
                    uVar11 = (uint)plVar28 & (uint)(((ulong)plVar10 & 0x80) == 0);
                    plVar28 = (long *)(ulong)uVar11;
                    uVar13 = 0;
                    if (((ulong)plVar9 & 1) != 0) {
                      uVar13 = (uint)(((uVar21 - 0x30 < 10 || ((uint)plVar10 & 0xdf) - 0x41 < 0x1a)
                                      || uVar21 == 0x2e) || uVar21 == 0x5f);
                    }
                    plVar9 = (long *)(ulong)uVar13;
                    iVar27 = iVar27 + 1;
                  } while (iVar12 != iVar27);
                }
                piVar6 = &iStack_31c;
                if (uVar11 == 0) {
                  piVar6 = &iStack_320;
                }
                iVar12 = (int)uStack_318;
                if (uVar13 == 0) {
                  iVar12 = *piVar6;
                }
                pplVar24 = (long **)(ulong)uStack_310;
              }
              else {
                iVar12 = *(int *)(lVar26 + 0x20);
                if ((uVar11 & 0xff) == 0xd) {
                  if (iVar12 != 0) {
                    iVar27 = 0;
                    do {
                      plVar9 = plVar8;
                      FUN_109d6b464(plVar8,iVar27);
                      FUN_109d38988(&plStack_290,plVar9);
                      iVar27 = iVar27 + 1;
                    } while (iVar12 != iVar27);
                  }
                }
                else if (iVar12 != 0) {
                  iVar27 = 0;
                  do {
                    func_0x000109d6b510(&ppppuStack_2b0,plVar8,iVar27);
                    FUN_109d323e4(&lStack_300,&ppppuStack_2b0);
                    plVar9 = &lStack_300;
                    func_0x000109d30394(plVar9,0xffffffffffffffff);
                    FUN_109d38988(&plStack_290,plVar9);
                    if ((0x40 < uStack_2f8) && (lStack_300 != 0)) {
                      __ZdaPv();
                    }
                    FUN_109d32234(auStack_2a8);
                    iVar27 = iVar27 + 1;
                  } while (iVar12 != iVar27);
                }
                param_2 = (long **)0x16;
                iVar12 = 0;
              }
            }
            else if (uVar11 - 8 < 3) {
              uVar11 = *(uint *)((long)plVar8 + 0x14);
              if ((uVar11 >> 0x1e & 1) == 0) {
                uVar18 = (ulong)(uVar11 & 0x7ffffff);
                plVar8 = plVar8 + uVar18 * -4;
                if (uVar18 != 0) {
LAB_109d493c4:
                  lVar26 = uVar18 << 5;
                  do {
                    plVar9 = param_1 + 3;
                    FUN_109d51b68(plVar9,*plVar8);
                    FUN_109d38988(&plStack_290,(ulong)plVar9 & 0xffffffff);
                    lVar26 = lVar26 + -0x20;
                    plVar8 = plVar8 + 4;
                  } while (lVar26 != 0);
                }
              }
              else {
                plVar8 = (long *)plVar8[-1];
                uVar18 = (ulong)uVar11 & 0x7ffffff;
                if ((uVar11 & 0x7ffffff) != 0) goto LAB_109d493c4;
              }
              param_2 = (long **)0x7;
              iVar12 = iStack_30c;
            }
            else if (bVar2 == 4) {
              plVar9 = param_1 + 6;
              FUN_109d48288(plVar9,*(undefined8 *)plVar8[-8]);
              FUN_109d38988(&plStack_290,(int)plVar9[1] + -1);
              plVar9 = param_1 + 3;
              FUN_109d51b68(plVar9,plVar8[-8]);
              FUN_109d38988(&plStack_290,(ulong)plVar9 & 0xffffffff);
              plVar9 = param_1 + 3;
              FUN_109d52e08(plVar9,plVar8[-4]);
              FUN_109d38988(&plStack_290,(ulong)plVar9 & 0xffffffff);
              iVar12 = 0;
              param_2 = (long **)0x15;
            }
            else if (bVar2 == 6) {
              plVar9 = param_1 + 6;
              FUN_109d48288(plVar9,*(undefined8 *)plVar8[-4]);
              FUN_109d38988(&plStack_290,(int)plVar9[1] + -1);
              plVar9 = param_1 + 3;
              FUN_109d51b68(plVar9,plVar8[-4]);
              FUN_109d38988(&plStack_290,(ulong)plVar9 & 0xffffffff);
              iVar12 = 0;
              param_2 = (long **)0x1b;
            }
            else if (bVar2 == 5) {
              uVar3 = *(ushort *)((long)plVar8 + 0x12);
              uVar18 = (ulong)uVar3;
              uVar11 = (uint)uVar3;
              if (uVar3 < 0x39) {
                if (uVar11 - 0x35 < 2) {
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  plVar28 = param_1 + 6;
                  FUN_109d48288(plVar28,*(undefined8 *)*plVar9);
                  FUN_109d38988(&plStack_290,(int)plVar28[1] + -1);
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  plVar28 = param_1 + 3;
                  FUN_109d51b68(plVar28,*plVar9);
                  FUN_109d38988(&plStack_290,(ulong)plVar28 & 0xffffffff);
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  plVar28 = param_1 + 3;
                  FUN_109d51b68(plVar28,plVar9[4]);
                  FUN_109d38988(&plStack_290,(ulong)plVar28 & 0xffffffff);
                  FUN_109d38988(&plStack_290,(short)plVar8[3]);
                  iVar12 = 0;
                  param_2 = (long **)0x11;
                }
                else if (uVar11 == 0xc) {
                  FUN_109d38988(&plStack_290,0);
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  plVar28 = param_1 + 3;
                  FUN_109d51b68(plVar28,*plVar9);
                  FUN_109d38988(&plStack_290,(ulong)plVar28 & 0xffffffff);
                  FUN_109d49e20();
                  if (plVar8 != (long *)0x0) {
                    FUN_109d38988(&plStack_290);
                  }
                  iVar12 = 0;
                  param_2 = (long **)0x19;
                }
                else {
                  if (uVar3 != 0x22) goto LAB_109d4960c;
                  plVar9 = param_1 + 6;
                  FUN_109d48288(plVar9,plVar8[3]);
                  FUN_109d38988(&plStack_290,(int)plVar9[1] + -1);
                  bVar2 = *(byte *)((long)plVar8 + 0x11);
                  if (bVar2 < 4) {
                    uVar11 = 0xc;
                    if (1 < bVar2) {
                      uVar11 = 0x14;
                    }
                    param_2 = (long **)(ulong)uVar11;
                  }
                  else {
                    FUN_109d38988(&plStack_290,(bVar2 >> 1 & 0x7e) - 2 & 0x1fe | bVar2 >> 1 & 1);
                    param_2 = (long **)0x18;
                  }
                  uVar18 = (ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff;
                  if ((int)uVar18 != 0) {
                    lVar26 = 0;
                    do {
                      if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                        plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                      }
                      else {
                        plVar9 = (long *)plVar8[-1];
                      }
                      plVar28 = param_1 + 6;
                      FUN_109d48288(plVar28,**(undefined8 **)((long)plVar9 + lVar26));
                      FUN_109d38988(&plStack_290,(int)plVar28[1] + -1);
                      if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                        plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                      }
                      else {
                        plVar9 = (long *)plVar8[-1];
                      }
                      plVar28 = param_1 + 3;
                      FUN_109d51b68(plVar28,*(undefined8 *)((long)plVar9 + lVar26));
                      FUN_109d38988(&plStack_290,(ulong)plVar28 & 0xffffffff);
                      lVar26 = lVar26 + 0x20;
                    } while (uVar18 * 0x20 - lVar26 != 0);
                  }
LAB_109d49a70:
                  iVar12 = 0;
                }
              }
              else if (uVar11 == 0x3d || uVar3 < 0x3d) {
                if (uVar11 == 0x39) {
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  plVar28 = param_1 + 3;
                  FUN_109d51b68(plVar28,*plVar9);
                  FUN_109d38988(&plStack_290,(ulong)plVar28 & 0xffffffff);
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  plVar28 = param_1 + 3;
                  FUN_109d51b68(plVar28,plVar9[4]);
                  FUN_109d38988(&plStack_290,(ulong)plVar28 & 0xffffffff);
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar8 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar8 = (long *)plVar8[-1];
                  }
                  plVar9 = param_1 + 3;
                  FUN_109d51b68(plVar9,plVar8[8]);
                  FUN_109d38988(&plStack_290,(ulong)plVar9 & 0xffffffff);
                  iVar12 = 0;
                  param_2 = (long **)0xd;
                }
                else {
                  if (uVar11 != 0x3d) goto LAB_109d4960c;
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  plVar28 = param_1 + 6;
                  FUN_109d48288(plVar28,*(undefined8 *)*plVar9);
                  FUN_109d38988(&plStack_290,(int)plVar28[1] + -1);
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  plVar28 = param_1 + 3;
                  FUN_109d51b68(plVar28,*plVar9);
                  FUN_109d38988(&plStack_290,(ulong)plVar28 & 0xffffffff);
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  plVar28 = param_1 + 6;
                  FUN_109d48288(plVar28,*(undefined8 *)plVar9[4]);
                  FUN_109d38988(&plStack_290,(int)plVar28[1] + -1);
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar8 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar8 = (long *)plVar8[-1];
                  }
                  plVar9 = param_1 + 3;
                  FUN_109d51b68(plVar9,plVar8[4]);
                  FUN_109d38988(&plStack_290,(ulong)plVar9 & 0xffffffff);
                  iVar12 = 0;
                  param_2 = (long **)0xe;
                }
              }
              else if (uVar11 == 0x3e) {
                if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                  plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                }
                else {
                  plVar9 = (long *)plVar8[-1];
                }
                plVar28 = param_1 + 3;
                FUN_109d51b68(plVar28,*plVar9);
                FUN_109d38988(&plStack_290,(ulong)plVar28 & 0xffffffff);
                if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                  plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                }
                else {
                  plVar9 = (long *)plVar8[-1];
                }
                plVar28 = param_1 + 3;
                FUN_109d51b68(plVar28,plVar9[4]);
                FUN_109d38988(&plStack_290,(ulong)plVar28 & 0xffffffff);
                if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                  plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                }
                else {
                  plVar9 = (long *)plVar8[-1];
                }
                plVar28 = param_1 + 6;
                FUN_109d48288(plVar28,*(undefined8 *)plVar9[8]);
                FUN_109d38988(&plStack_290,(int)plVar28[1] + -1);
                if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                  plVar8 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                }
                else {
                  plVar8 = (long *)plVar8[-1];
                }
                plVar9 = param_1 + 3;
                FUN_109d51b68(plVar9,plVar8[8]);
                FUN_109d38988(&plStack_290,(ulong)plVar9 & 0xffffffff);
                iVar12 = 0;
                param_2 = (long **)0xf;
              }
              else {
                if (uVar11 == 0x3f) {
                  uVar11 = *(uint *)((long)plVar8 + 0x14);
                  if ((uVar11 >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + ((ulong)uVar11 & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  if (*plVar8 == *(long *)*plVar9) {
                    param_2 = (long **)0x10;
                  }
                  else {
                    plVar9 = param_1 + 6;
                    FUN_109d48288();
                    FUN_109d38988(&plStack_290,(int)plVar9[1] + -1);
                    uVar11 = *(uint *)((long)plVar8 + 0x14);
                    param_2 = (long **)0x13;
                  }
                  if ((uVar11 >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + (ulong)(uVar11 & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  plVar28 = param_1 + 3;
                  FUN_109d51b68(plVar28,*plVar9);
                  FUN_109d38988(&plStack_290,(ulong)plVar28 & 0xffffffff);
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  plVar28 = param_1 + 3;
                  FUN_109d51b68(plVar28,plVar9[4]);
                  FUN_109d38988(&plStack_290,(ulong)plVar28 & 0xffffffff);
                  plVar9 = param_1 + 3;
                  FUN_109d51b68(plVar9,plVar8[7]);
                  FUN_109d38988(&plStack_290,(ulong)plVar9 & 0xffffffff);
                  goto LAB_109d49a70;
                }
LAB_109d4960c:
                if (uVar3 - 0x26 < 0xd) {
                  FUN_109d49e04();
                  FUN_109d38988(&plStack_290,uVar18 & 0xffffffff);
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  plVar28 = param_1 + 6;
                  FUN_109d48288(plVar28,*(undefined8 *)*plVar9);
                  FUN_109d38988(&plStack_290,(int)plVar28[1] + -1);
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar8 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar8 = (long *)plVar8[-1];
                  }
                  plVar9 = param_1 + 3;
                  FUN_109d51b68(plVar9,*plVar8);
                  FUN_109d38988(&plStack_290,(ulong)plVar9 & 0xffffffff);
                  param_2 = (long **)0xb;
                  iVar12 = 6;
                }
                else {
                  func_0x000109d49e0c();
                  FUN_109d38988(&plStack_290,uVar18 & 0xffffffff);
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  plVar28 = param_1 + 3;
                  FUN_109d51b68(plVar28,*plVar9);
                  FUN_109d38988(&plStack_290,(ulong)plVar28 & 0xffffffff);
                  if ((*(uint *)((long)plVar8 + 0x14) >> 0x1e & 1) == 0) {
                    plVar9 = plVar8 + ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x7ffffff) * -4;
                  }
                  else {
                    plVar9 = (long *)plVar8[-1];
                  }
                  plVar28 = param_1 + 3;
                  FUN_109d51b68(plVar28,plVar9[4]);
                  FUN_109d38988(&plStack_290,(ulong)plVar28 & 0xffffffff);
                  FUN_109d49e20();
                  if (plVar8 != (long *)0x0) {
                    FUN_109d38988(&plStack_290);
                  }
                  iVar12 = 0;
                  param_2 = (long **)0xa;
                }
              }
            }
            else {
              if (bVar2 != 7) {
                plVar8 = (long *)0x0;
              }
              plVar9 = param_1 + 6;
              FUN_109d48288(plVar9,*(undefined8 *)plVar8[-4]);
              FUN_109d38988(&plStack_290,(int)plVar9[1] + -1);
              plVar9 = param_1 + 3;
              FUN_109d51b68(plVar9,plVar8[-4]);
              FUN_109d38988(&plStack_290,(ulong)plVar9 & 0xffffffff);
              iVar12 = 0;
              param_2 = (long **)0x1d;
            }
          }
        }
        else {
          param_2 = (long **)0x2;
          iVar12 = 0;
        }
        param_3 = &plStack_290;
        FUN_109d481c4(*param_1,param_2,param_3,iVar12);
      }
      plStack_288 = (long *)((ulong)plStack_288 & 0xffffffff00000000);
      uVar11 = (int)pplVar23 + 1;
      pplVar23 = (long **)(ulong)uVar11;
    } while (uVar11 != (uint)pplVar24);
    FUN_109d3b86c(*param_1);
    param_1 = plStack_290;
    if (plStack_290 != plStack_308) {
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_290 != plStack_308) {
    _free();
  }
  __Unwind_Resume();
  uVar14 = (ulong)*(uint *)(param_1 + 1);
  uVar18 = ((long)param_3 - (long)param_2) + uVar14;
  if (*(uint *)((long)param_1 + 0xc) < uVar18) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar18,8);
    uVar14 = (ulong)*(uint *)(param_1 + 1);
  }
  if (param_3 != param_2) {
    plVar8 = (long *)(*param_1 + uVar14 * 8);
    pplVar23 = param_2;
    do {
      pplVar24 = (long **)((long)pplVar23 + 1);
      *plVar8 = (long)*(char *)pplVar23;
      plVar8 = plVar8 + 1;
      pplVar23 = pplVar24;
    } while (pplVar24 != param_3);
  }
  *(int *)(param_1 + 1) = (int)uVar14 + (int)((long)param_3 - (long)param_2);
  return;
}



/* Entry: 109d49cf8; end: 109d49e03;  */

void FUN_109d49cf8(long *param_1,char *param_2,char *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  uVar1 = ((long)param_3 - (long)param_2) + uVar2;
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1,8);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  if (param_3 != param_2) {
    plVar3 = (long *)(*param_1 + uVar2 * 8);
    pcVar5 = param_2;
    do {
      pcVar4 = pcVar5 + 1;
      *plVar3 = (long)*pcVar5;
      plVar3 = plVar3 + 1;
      pcVar5 = pcVar4;
    } while (pcVar4 != param_3);
  }
  *(int *)(param_1 + 1) = (int)uVar2 + (int)((long)param_3 - (long)param_2);
  return;
}



/* Entry: 109d49e04; end: 109d49e1f;  */

int FUN_109d49e04(int param_1)

{
  return param_1 + -0x26;
}



/* Entry: 109d49e20; end: 109d49f2b;  */

uint FUN_109d49e20(long param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 < 0x1c) {
    if (bVar1 == 5) {
      uVar2 = *(ushort *)(param_1 + 0x12);
      uVar6 = uVar2 - 0xd;
      uVar4 = uVar6 >> 1;
      if ((uVar4 | uVar6 * -0x80000000) < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x47U) != 0)
      goto LAB_109d49eb4;
      if ((uVar2 < 0x1c) && ((1 << (ulong)(uVar2 & 0x1f) & 0xc180000U) != 0)) goto LAB_109d49ee4;
    }
  }
  else {
    uVar6 = bVar1 - 0x29;
    uVar4 = uVar6 >> 1;
    if ((uVar4 | uVar6 * -0x80000000) < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x47U) != 0) {
LAB_109d49eb4:
      return *(byte *)(param_1 + 0x11) >> 1 & 3;
    }
    if ((bVar1 < 0x38) && ((1L << ((ulong)bVar1 & 0x3f) & 0xc1800000000000U) != 0)) {
LAB_109d49ee4:
      return *(byte *)(param_1 + 0x11) >> 1 & 1;
    }
  }
  lVar5 = param_1;
  FUN_109d32e0c();
  if ((int)lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *(char *)(param_1 + 0x11);
    uVar6 = ((int)cVar3 & 0x7cU) >> 1 | ((int)cVar3 & 2U) << 6;
    uVar4 = uVar6 | 0x40;
    if (-1 < cVar3) {
      uVar4 = uVar6;
    }
  }
  return uVar4;
}



/* Entry: 109d49f2c; end: 109d4a13f;  */

int FUN_109d49f2c(long *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = (long *)0x228;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110b40f08;
  plVar4[8] = 0;
  plVar4[7] = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  plVar4[0xe] = 0;
  plVar4[0xd] = 0;
  plVar4[0x10] = 0;
  plVar4[0xf] = 0;
  plVar4[0x12] = 0;
  plVar4[0x11] = 0;
  plVar4[0x14] = 0;
  plVar4[0x13] = 0;
  plVar4[0x16] = 0;
  plVar4[0x15] = 0;
  plVar4[0x18] = 0;
  plVar4[0x17] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x20] = 0;
  plVar4[0x1f] = 0;
  plVar4[6] = 0;
  plVar4[5] = 0;
  plVar4[0x22] = 0;
  plVar4[0x21] = 0;
  plVar4[0x24] = 0;
  plVar4[0x23] = 0;
  plVar4[0x26] = 0;
  plVar4[0x25] = 0;
  plVar4[0x28] = 0;
  plVar4[0x27] = 0;
  plVar4[0x2a] = 0;
  plVar4[0x29] = 0;
  plVar4[0x2c] = 0;
  plVar4[0x2b] = 0;
  plVar4[0x2e] = 0;
  plVar4[0x2d] = 0;
  plVar4[0x30] = 0;
  plVar4[0x2f] = 0;
  plVar4[0x32] = 0;
  plVar4[0x31] = 0;
  plVar4[0x34] = 0;
  plVar4[0x33] = 0;
  plVar4[0x36] = 0;
  plVar4[0x35] = 0;
  plVar4[0x38] = 0;
  plVar4[0x37] = 0;
  plVar4[0x3a] = 0;
  plVar4[0x39] = 0;
  plVar4[0x3c] = 0;
  plVar4[0x3b] = 0;
  plVar4[0x3e] = 0;
  plVar4[0x3d] = 0;
  plVar4[0x40] = 0;
  plVar4[0x3f] = 0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)(plVar4 + 5);
  plVar4[0x42] = 0;
  plVar4[0x41] = 0;
  plVar4[0x44] = 0;
  plVar4[0x43] = 0;
  plVar4[4] = 0x2000000000;
  plStack_40 = plVar7;
  plStack_38 = plVar4;
  FUN_109d4444c(plVar7,7,0xff);
  FUN_109d4444c(plVar7,1,2);
  FUN_109d4444c(plVar7,6,4);
  FUN_109d4444c(plVar7,8,4);
  FUN_109d4444c(plVar7,6,4);
  FUN_109d4444c(plVar7,6,4);
  FUN_109d4444c(plVar7,1,2);
  lVar6 = *param_1;
  plStack_40 = (long *)0x0;
  plStack_38 = (long *)0x0;
  plStack_50 = plVar7;
  plStack_48 = plVar4;
  FUN_109d444b8(lVar6,plVar7);
  FUN_109d4459c(lVar6 + 0x28,&plStack_50);
  plVar4 = plStack_48;
  lVar1 = *(long *)(lVar6 + 0x28);
  lVar6 = *(long *)(lVar6 + 0x30);
  if (plStack_48 != (long *)0x0) {
    plVar7 = plStack_48 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar7 = plStack_38 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return (int)((ulong)(lVar6 - lVar1) >> 4) + 3;
}



/* Entry: 109d4a140; end: 109d4a353;  */

int FUN_109d4a140(long *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = (long *)0x228;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110b40f08;
  plVar4[8] = 0;
  plVar4[7] = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  plVar4[0xe] = 0;
  plVar4[0xd] = 0;
  plVar4[0x10] = 0;
  plVar4[0xf] = 0;
  plVar4[0x12] = 0;
  plVar4[0x11] = 0;
  plVar4[0x14] = 0;
  plVar4[0x13] = 0;
  plVar4[0x16] = 0;
  plVar4[0x15] = 0;
  plVar4[0x18] = 0;
  plVar4[0x17] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x20] = 0;
  plVar4[0x1f] = 0;
  plVar4[6] = 0;
  plVar4[5] = 0;
  plVar4[0x22] = 0;
  plVar4[0x21] = 0;
  plVar4[0x24] = 0;
  plVar4[0x23] = 0;
  plVar4[0x26] = 0;
  plVar4[0x25] = 0;
  plVar4[0x28] = 0;
  plVar4[0x27] = 0;
  plVar4[0x2a] = 0;
  plVar4[0x29] = 0;
  plVar4[0x2c] = 0;
  plVar4[0x2b] = 0;
  plVar4[0x2e] = 0;
  plVar4[0x2d] = 0;
  plVar4[0x30] = 0;
  plVar4[0x2f] = 0;
  plVar4[0x32] = 0;
  plVar4[0x31] = 0;
  plVar4[0x34] = 0;
  plVar4[0x33] = 0;
  plVar4[0x36] = 0;
  plVar4[0x35] = 0;
  plVar4[0x38] = 0;
  plVar4[0x37] = 0;
  plVar4[0x3a] = 0;
  plVar4[0x39] = 0;
  plVar4[0x3c] = 0;
  plVar4[0x3b] = 0;
  plVar4[0x3e] = 0;
  plVar4[0x3d] = 0;
  plVar4[0x40] = 0;
  plVar4[0x3f] = 0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)(plVar4 + 5);
  plVar4[0x42] = 0;
  plVar4[0x41] = 0;
  plVar4[0x44] = 0;
  plVar4[0x43] = 0;
  plVar4[4] = 0x2000000000;
  plStack_40 = plVar7;
  plStack_38 = plVar4;
  FUN_109d4444c(plVar7,0xc,0xff);
  FUN_109d4444c(plVar7,1,2);
  FUN_109d4444c(plVar7,6,4);
  FUN_109d4444c(plVar7,1,2);
  FUN_109d4444c(plVar7,6,4);
  FUN_109d4444c(plVar7,0,6);
  FUN_109d4444c(plVar7,6,4);
  lVar6 = *param_1;
  plStack_40 = (long *)0x0;
  plStack_38 = (long *)0x0;
  plStack_50 = plVar7;
  plStack_48 = plVar4;
  FUN_109d444b8(lVar6,plVar7);
  FUN_109d4459c(lVar6 + 0x28,&plStack_50);
  plVar4 = plStack_48;
  lVar1 = *(long *)(lVar6 + 0x28);
  lVar6 = *(long *)(lVar6 + 0x30);
  if (plStack_48 != (long *)0x0) {
    plVar7 = plStack_48 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar7 = plStack_38 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return (int)((ulong)(lVar6 - lVar1) >> 4) + 3;
}



/* Entry: 109d4a354; end: 109d4a6bb;  */

/* WARNING: Removing unreachable block (ram,0x000109d47938) */
/* WARNING: Removing unreachable block (ram,0x000109d47a78) */
/* WARNING: Removing unreachable block (ram,0x000109d47a3c) */
/* WARNING: Removing unreachable block (ram,0x000109d47a8c) */
/* WARNING: Removing unreachable block (ram,0x000109d47a50) */
/* WARNING: Removing unreachable block (ram,0x000109d47a54) */
/* WARNING: Removing unreachable block (ram,0x000109d47a6c) */

void FUN_109d4a354(long *param_1,long *param_2,long param_3,long *param_4)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long **pplVar10;
  long *unaff_x24;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long **pplStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
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
  long *plStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long alStack_158 [32];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = 0;
  plVar5 = param_4;
  if (param_3 != 0) {
    FUN_109d38988(param_4,0x23);
    FUN_109d38988(param_4,param_3);
    pplStack_1f0 = &plStack_170;
    unaff_x24 = alStack_158;
    uStack_160 = 0x100;
    uStack_168 = 0;
    plStack_1e8 = (long *)0x0;
    uStack_1e0 = 0x20000000;
    uStack_1d8 = 0;
    uStack_1d0 = 2;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    param_3 = param_3 << 3;
    uStack_188 = 0;
    lVar7 = param_3;
    plVar5 = param_2;
    plStack_170 = unaff_x24;
    do {
      FUN_109d43cd4(&pplStack_1f0,**(undefined4 **)(*plVar5 + 8),6);
      lVar7 = lVar7 + -8;
      plVar5 = plVar5 + 1;
    } while (lVar7 != 0);
    if ((int)uStack_1d8 != 0) {
      uStack_180 = (long **)CONCAT44(uStack_180._4_4_,uStack_1d8._4_4_);
      FUN_109d3a7bc(pplStack_1f0,&uStack_180,(long)&uStack_180 + 4);
      uStack_1d8 = 0;
    }
    FUN_109d4afe0(&pplStack_1f0);
    FUN_109d38988(param_4,uStack_168);
    do {
      plVar5 = *(long **)(*param_2 + 8) + 3;
      FUN_109d3a7bc(&plStack_170,plVar5,(long)plVar5 + **(long **)(*param_2 + 8));
      param_3 = param_3 + -8;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
    lVar8 = *param_1;
    plVar5 = (long *)0x228;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110b40f08;
    plVar5[8] = 0;
    plVar5[7] = 0;
    plVar5[10] = 0;
    plVar5[9] = 0;
    plVar5[0xc] = 0;
    plVar5[0xb] = 0;
    plVar5[0xe] = 0;
    plVar5[0xd] = 0;
    plVar5[0x10] = 0;
    plVar5[0xf] = 0;
    plVar5[0x12] = 0;
    plVar5[0x11] = 0;
    plVar5[0x14] = 0;
    plVar5[0x13] = 0;
    plVar5[0x16] = 0;
    plVar5[0x15] = 0;
    plVar5[0x18] = 0;
    plVar5[0x17] = 0;
    plVar5[0x1a] = 0;
    plVar5[0x19] = 0;
    plVar5[0x1c] = 0;
    plVar5[0x1b] = 0;
    plVar5[0x1e] = 0;
    plVar5[0x1d] = 0;
    plVar5[0x20] = 0;
    plVar5[0x1f] = 0;
    plVar5[6] = 0;
    plVar5[5] = 0;
    plVar5[0x22] = 0;
    plVar5[0x21] = 0;
    plVar5[0x24] = 0;
    plVar5[0x23] = 0;
    plVar5[0x26] = 0;
    plVar5[0x25] = 0;
    plVar5[0x28] = 0;
    plVar5[0x27] = 0;
    plVar5[0x2a] = 0;
    plVar5[0x29] = 0;
    plVar5[0x2c] = 0;
    plVar5[0x2b] = 0;
    plVar5[0x2e] = 0;
    plVar5[0x2d] = 0;
    plVar5[0x30] = 0;
    plVar5[0x2f] = 0;
    plVar5[0x32] = 0;
    plVar5[0x31] = 0;
    plVar5[0x34] = 0;
    plVar5[0x33] = 0;
    plVar5[0x36] = 0;
    plVar5[0x35] = 0;
    plVar5[0x38] = 0;
    plVar5[0x37] = 0;
    plVar5[0x3a] = 0;
    plVar5[0x39] = 0;
    plVar5[0x3c] = 0;
    plVar5[0x3b] = 0;
    plVar5[0x3e] = 0;
    plVar5[0x3d] = 0;
    plVar5[0x40] = 0;
    plVar5[0x3f] = 0;
    pplVar10 = (long **)(plVar5 + 3);
    *pplVar10 = plVar5 + 5;
    plVar5[0x42] = 0;
    plVar5[0x41] = 0;
    plVar5[0x44] = 0;
    plVar5[0x43] = 0;
    plVar5[4] = 0x2000000000;
    pplStack_1f0 = pplVar10;
    plStack_1e8 = plVar5;
    FUN_109d4444c(pplVar10,0x23,0xff);
    FUN_109d4444c(pplVar10,6,4);
    FUN_109d4444c(pplVar10,6,4);
    FUN_109d4444c(pplVar10,0,10);
    lVar7 = *param_1;
    pplStack_1f0 = (long **)0x0;
    plStack_1e8 = (long *)0x0;
    uStack_180 = pplVar10;
    plStack_178 = plVar5;
    FUN_109d444b8(lVar7,pplVar10);
    FUN_109d4459c(lVar7 + 0x28,&uStack_180);
    plVar5 = plStack_178;
    lVar9 = *(long *)(lVar7 + 0x28);
    lVar6 = *(long *)(lVar7 + 0x30);
    if (plStack_178 != (long *)0x0) {
      plVar11 = plStack_178 + 1;
      do {
        lVar7 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = plStack_1e8;
    if (plStack_1e8 != (long *)0x0) {
      plVar11 = plStack_1e8 + 1;
      do {
        lVar7 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    lVar7 = *param_4;
    plVar5 = (long *)(ulong)*(uint *)(param_4 + 1);
    param_2 = (long *)(ulong)((int)((ulong)(lVar6 - lVar9) >> 4) + 3);
    FUN_109d478e0(lVar8);
    *(undefined4 *)(param_4 + 1) = 0;
    param_1 = plStack_170;
    if (plStack_170 != unaff_x24) {
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_109d4afe0(&pplStack_1f0);
  if (plStack_170 != unaff_x24) {
    _free();
  }
  __Unwind_Resume();
  if ((int)plVar5 == 0) {
    FUN_109d43c48(param_1,3,(int)param_1[4]);
    FUN_109d43cd4(param_1,param_2,6);
    FUN_109d43c48(param_1,2,6);
    lVar9 = 0;
    do {
      FUN_109d44680(param_1,*(undefined8 *)(lVar7 + lVar9),6);
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0x10);
    return;
  }
  plVar11 = *(long **)(param_1[5] + (ulong)((int)plVar5 - 4) * 0x10);
  FUN_109d43c48(param_1,plVar5,(int)param_1[4]);
  uVar1 = *(uint *)(plVar11 + 1);
  if ((*(byte *)(*plVar11 + 8) & 1) == 0) {
    func_0x000109d474f4(param_1,*plVar11,(ulong)param_2 & 0xffffffff | 0x100000000);
  }
  uVar12 = 1;
  if (uVar1 != 1) {
    uVar13 = 0;
    do {
      lVar6 = *plVar11;
      lVar9 = lVar6 + (ulong)uVar12 * 0x10;
      bVar2 = *(byte *)(lVar9 + 8);
      if ((bVar2 & 1) == 0) {
        bVar2 = bVar2 >> 1 & 7;
        if (bVar2 == 5) {
          FUN_109d47b24(param_1,lVar7 + uVar13 * 8,2 - uVar13,1);
          uVar14 = uVar13;
        }
        else {
          if (bVar2 != 3) {
            FUN_109d47a94(param_1,lVar9,*(undefined8 *)(lVar7 + uVar13 * 8));
            goto LAB_109d47a1c;
          }
          uVar12 = uVar12 + 1;
          FUN_109d43cd4(param_1,2 - (int)uVar13,6);
          for (; uVar14 = 2, (int)uVar13 != 2; uVar13 = (ulong)((int)uVar13 + 1)) {
            FUN_109d47a94(param_1,lVar6 + (ulong)uVar12 * 0x10,*(undefined8 *)(lVar7 + uVar13 * 8));
          }
        }
      }
      else {
LAB_109d47a1c:
        uVar14 = (ulong)((int)uVar13 + 1);
      }
      uVar12 = uVar12 + 1;
      uVar13 = uVar14;
    } while (uVar12 != uVar1);
  }
  return;
}



/* Entry: 109d4a6bc; end: 109d4a76b;  */

/* WARNING: Removing unreachable block (ram,0x000109d47938) */
/* WARNING: Removing unreachable block (ram,0x000109d47a78) */
/* WARNING: Removing unreachable block (ram,0x000109d47a3c) */
/* WARNING: Removing unreachable block (ram,0x000109d47a8c) */
/* WARNING: Removing unreachable block (ram,0x000109d47a50) */
/* WARNING: Removing unreachable block (ram,0x000109d47a54) */
/* WARNING: Removing unreachable block (ram,0x000109d47a6c) */

void FUN_109d4a6bc(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((int)param_4 == 0) {
    FUN_109d43c48(param_1,3,*(undefined4 *)(param_1 + 0x20));
    FUN_109d43cd4(param_1,param_2,6);
    FUN_109d43c48(param_1,2,6);
    lVar4 = 0;
    do {
      FUN_109d44680(param_1,*(undefined8 *)(param_3 + lVar4),6);
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x10);
    return;
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x28) + (ulong)((int)param_4 - 4) * 0x10);
  FUN_109d43c48(param_1,param_4,*(undefined4 *)(param_1 + 0x20));
  uVar1 = *(uint *)(plVar5 + 1);
  if ((*(byte *)(*plVar5 + 8) & 1) == 0) {
    func_0x000109d474f4(param_1,*plVar5,param_2 & 0xffffffff | 0x100000000);
  }
  uVar6 = 1;
  if (uVar1 != 1) {
    uVar7 = 0;
    do {
      lVar3 = *plVar5;
      lVar4 = lVar3 + (ulong)uVar6 * 0x10;
      bVar2 = *(byte *)(lVar4 + 8);
      if ((bVar2 & 1) == 0) {
        bVar2 = bVar2 >> 1 & 7;
        if (bVar2 == 5) {
          FUN_109d47b24(param_1,param_3 + uVar7 * 8,2 - uVar7,1);
          uVar8 = uVar7;
        }
        else {
          if (bVar2 != 3) {
            FUN_109d47a94(param_1,lVar4,*(undefined8 *)(param_3 + uVar7 * 8));
            goto LAB_109d47a1c;
          }
          uVar6 = uVar6 + 1;
          FUN_109d43cd4(param_1,2 - (int)uVar7,6);
          for (; uVar8 = 2, (int)uVar7 != 2; uVar7 = (ulong)((int)uVar7 + 1)) {
            FUN_109d47a94(param_1,lVar3 + (ulong)uVar6 * 0x10,*(undefined8 *)(param_3 + uVar7 * 8));
          }
        }
      }
      else {
LAB_109d47a1c:
        uVar8 = (ulong)((int)uVar7 + 1);
      }
      uVar6 = uVar6 + 1;
      uVar7 = uVar8;
    } while (uVar6 != uVar1);
  }
  return;
}



/* Entry: 109d4a76c; end: 109d4af03;  */

void FUN_109d4a76c(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,long *param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_3 != 0) {
    uStack_68 = 0;
    param_3 = param_3 << 3;
    do {
      puVar5 = (undefined1 *)*param_2;
      if (param_6 != 0) {
        uVar1 = *param_1;
        FUN_109d449c0();
        uStack_70 = uVar1;
        FUN_109d34cd8(param_6,&uStack_70);
      }
      switch(*puVar5) {
      case 4:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)*param_5;
        }
        FUN_109d4b128(param_1,puVar5,param_4,uVar3);
        break;
      case 5:
        if (param_5 == (long *)0x0) {
          puVar4 = &uStack_68;
        }
        else {
          puVar4 = (undefined8 *)*param_5;
        }
        FUN_109d4b21c(param_1,puVar5,param_4,(long)puVar4 + 4);
        break;
      case 6:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 8);
        }
        FUN_109d4b388(param_1,puVar5,param_4,uVar3);
        break;
      case 7:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0xc);
        }
        func_0x000109d4b424(param_1,puVar5,param_4,uVar3);
        break;
      case 8:
        if (param_5 == (long *)0x0) {
          puVar4 = &uStack_68;
        }
        else {
          puVar4 = (undefined8 *)(*param_5 + 0x10);
        }
        func_0x000109d4b530(param_1,puVar5,param_4,puVar4);
        break;
      case 9:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x14);
        }
        func_0x000109d4b63c(param_1,puVar5,param_4,uVar3);
        break;
      case 10:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x18);
        }
        func_0x000109d4b7e4(param_1,puVar5,param_4,uVar3);
        break;
      case 0xb:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x1c);
        }
        func_0x000109d4b8c8(param_1,puVar5,param_4,uVar3);
        break;
      case 0xc:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x20);
        }
        func_0x000109d4b9bc(param_1,puVar5,param_4,uVar3);
        break;
      case 0xd:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x24);
        }
        func_0x000109d4bc68(param_1,puVar5,param_4,uVar3);
        break;
      case 0xe:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x28);
        }
        FUN_109d4c16c(param_1,puVar5,param_4,uVar3);
        break;
      case 0xf:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x2c);
        }
        func_0x000109d4c240(param_1,puVar5,param_4,uVar3);
        break;
      case 0x10:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x30);
        }
        func_0x000109d4c3f4(param_1,puVar5,param_4,uVar3);
        break;
      case 0x11:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x34);
        }
        func_0x000109d4c82c(param_1,puVar5,param_4,uVar3);
        break;
      case 0x12:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x38);
        }
        func_0x000109d4cd78(param_1,puVar5,param_4,uVar3);
        break;
      case 0x13:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x3c);
        }
        func_0x000109d4ceac(param_1,puVar5,param_4,uVar3);
        break;
      case 0x14:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x40);
        }
        func_0x000109d4cfd4(param_1,puVar5,param_4,uVar3);
        break;
      case 0x15:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x44);
        }
        func_0x000109d4d0e8(param_1,puVar5,param_4,uVar3);
        break;
      case 0x16:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x48);
        }
        func_0x000109d4d1e0(param_1,puVar5,param_4,uVar3);
        break;
      case 0x17:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x4c);
        }
        func_0x000109d4d2f8(param_1,puVar5,param_4,uVar3);
        break;
      case 0x18:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x50);
        }
        func_0x000109d4d468(param_1,puVar5,param_4,uVar3);
        break;
      case 0x19:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x54);
        }
        func_0x000109d4d770(param_1,puVar5,param_4,uVar3);
        break;
      case 0x1a:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x58);
        }
        func_0x000109d4d994(param_1,puVar5,param_4,uVar3);
        break;
      case 0x1b:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x5c);
        }
        func_0x000109d4daf8(param_1,puVar5,param_4,uVar3);
        break;
      case 0x1c:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x60);
        }
        func_0x000109d4dd00(param_1,puVar5,param_4,uVar3);
        break;
      case 0x1d:
        if (param_5 == (long *)0x0) {
          FUN_109d38988(param_4,(puVar5[1] & 0x7f) == 1);
          uVar1 = *param_1;
          uVar2 = 0x2f;
          goto code_r0x000109d4a850;
        }
        uVar3 = *(undefined4 *)(*param_5 + 100);
        FUN_109d38988(param_4,(puVar5[1] & 0x7f) == 1);
        uVar1 = *param_1;
        uVar2 = 0x2f;
        goto code_r0x000109d4a858;
      case 0x1e:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x68);
        }
        func_0x000109d4df08(param_1,puVar5,param_4,uVar3);
        break;
      case 0x1f:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x6c);
        }
        func_0x000109d4e02c(param_1,puVar5,param_4,uVar3);
        break;
      case 0x20:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x70);
        }
        func_0x000109d4e150(param_1,puVar5,param_4,uVar3);
        break;
      case 0x21:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x74);
        }
        func_0x000109d4e300(param_1,puVar5,param_4,uVar3);
        break;
      case 0x22:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x78);
        }
        func_0x000109d4e3d0(param_1,puVar5,param_4,uVar3);
        break;
      case 0x23:
        if (param_5 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*param_5 + 0x7c);
        }
        func_0x000109d4e5a4(param_1,puVar5,param_4,uVar3);
        break;
      default:
        puVar6 = *(undefined8 **)(puVar5 + 0x80);
        puVar4 = param_1 + 6;
        FUN_109d48288(puVar4,*puVar6);
        FUN_109d38988(param_4,*(int *)(puVar4 + 1) + -1);
        puVar4 = param_1 + 3;
        FUN_109d51b68(puVar4,puVar6);
        FUN_109d38988(param_4,(ulong)puVar4 & 0xffffffff);
        uVar1 = *param_1;
        uVar2 = 2;
code_r0x000109d4a850:
        uVar3 = 0;
code_r0x000109d4a858:
        FUN_109d4e748(uVar1,uVar2,param_4,uVar3);
        *(undefined4 *)(param_4 + 8) = 0;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -8;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 109d4af04; end: 109d4afdf;  */

/* WARNING: Removing unreachable block (ram,0x000109d47938) */
/* WARNING: Removing unreachable block (ram,0x000109d47a78) */
/* WARNING: Removing unreachable block (ram,0x000109d47a3c) */
/* WARNING: Removing unreachable block (ram,0x000109d47a8c) */
/* WARNING: Removing unreachable block (ram,0x000109d47a50) */
/* WARNING: Removing unreachable block (ram,0x000109d47a54) */
/* WARNING: Removing unreachable block (ram,0x000109d47a6c) */

void FUN_109d4af04(long param_1,ulong param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((int)param_4 == 0) {
    lVar2 = *param_3;
    lVar1 = param_3[1];
    uVar6 = (ulong)(lVar1 - lVar2) >> 3;
    FUN_109d43c48(param_1,3,*(undefined4 *)(param_1 + 0x20));
    FUN_109d43cd4(param_1,param_2,6);
    FUN_109d43cd4(param_1,uVar6,6);
    if ((int)uVar6 != 0) {
      uVar6 = 0;
      do {
        FUN_109d44680(param_1,*(undefined8 *)(*param_3 + uVar6),6);
        uVar6 = uVar6 + 8;
      } while ((lVar1 - lVar2 & 0x7fffffff8U) != uVar6);
    }
    return;
  }
  lVar2 = *param_3;
  uVar6 = param_3[1] - lVar2 >> 3;
  plVar7 = *(long **)(*(long *)(param_1 + 0x28) + (ulong)((int)param_4 - 4) * 0x10);
  FUN_109d43c48(param_1,param_4,*(undefined4 *)(param_1 + 0x20));
  uVar3 = *(uint *)(plVar7 + 1);
  if ((*(byte *)(*plVar7 + 8) & 1) == 0) {
    func_0x000109d474f4(param_1,*plVar7,param_2 & 0xffffffff | 0x100000000);
  }
  uVar8 = 1;
  if (uVar3 != 1) {
    uVar9 = 0;
    do {
      lVar5 = *plVar7;
      lVar1 = lVar5 + (ulong)uVar8 * 0x10;
      bVar4 = *(byte *)(lVar1 + 8);
      if ((bVar4 & 1) == 0) {
        bVar4 = bVar4 >> 1 & 7;
        if (bVar4 == 5) {
          FUN_109d47b24(param_1,lVar2 + (uVar9 & 0xffffffff) * 8,uVar6 - (uVar9 & 0xffffffff),1);
          uVar10 = uVar9;
        }
        else {
          if (bVar4 != 3) {
            FUN_109d47a94(param_1,lVar1,*(undefined8 *)(lVar2 + (uVar9 & 0xffffffff) * 8));
            goto LAB_109d47a1c;
          }
          uVar8 = uVar8 + 1;
          FUN_109d43cd4(param_1,(int)uVar6 - (int)uVar9,6);
          for (; uVar10 = uVar6, (int)uVar6 != (int)uVar9; uVar9 = (ulong)((int)uVar9 + 1)) {
            FUN_109d47a94(param_1,lVar5 + (ulong)uVar8 * 0x10,
                          *(undefined8 *)(lVar2 + (uVar9 & 0xffffffff) * 8));
          }
        }
      }
      else {
LAB_109d47a1c:
        uVar10 = (ulong)((int)uVar9 + 1);
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar10;
    } while (uVar8 != uVar3);
  }
  return;
}



/* Entry: 109d4afe0; end: 109d4b037;  */

long FUN_109d4afe0(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x58;
  FUN_109d4b038(&lStack_28);
  lStack_28 = param_1 + 0x40;
  func_0x000109d4b0b0(&lStack_28);
  lStack_28 = param_1 + 0x28;
  FUN_109d3aa18(&lStack_28);
  return param_1;
}



/* Entry: 109d4b038; end: 109d4b127;  */

void FUN_109d4b038(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar1 = plVar2[1];
    if (plVar2[1] != lVar3) {
      do {
        lVar4 = lVar1 + -0x20;
        lStack_38 = lVar1 + -0x18;
        FUN_109d3aa18(&lStack_38);
        lVar1 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    __ZdlPv(lVar4);
  }
  return;
}



/* Entry: 109d4b128; end: 109d4b21b;  */

void FUN_109d4b128(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  long lStack_60;
  undefined8 uStack_58;
  
  puVar5 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar5 >> 1 & 1) == 0) {
    uVar1 = (uint)*puVar5 >> 6 & 0xf;
  }
  else {
    uVar1 = *(uint *)(param_2 + -0x18);
  }
  if (uVar1 != 0) {
    lVar6 = 0;
    do {
      if (((uint)*puVar5 >> 1 & 1) == 0) {
        puVar4 = puVar5 + -(*puVar5 >> 2 & 0xf);
      }
      else {
        puVar4 = *(ulong **)(param_2 + -0x20);
      }
      uStack_58 = *(undefined8 *)((long)puVar4 + lVar6);
      puVar2 = param_1 + 0x1e;
      FUN_109d4e80c(puVar2,&uStack_58,&lStack_60);
      if ((int)puVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(lStack_60 + 0xc);
      }
      FUN_109d38988(param_3,uVar3);
      lVar6 = lVar6 + 8;
    } while ((ulong)uVar1 << 3 != lVar6);
  }
  uVar3 = 5;
  if ((*(byte *)(param_2 + 1) & 0x7f) != 1) {
    uVar3 = 3;
  }
  FUN_109d4e748(*param_1,uVar3,param_3,param_4);
  *(undefined4 *)(param_3 + 8) = 0;
  return;
}



/* Entry: 109d4b21c; end: 109d4b387;  */

void FUN_109d4b21c(undefined8 *param_1,long param_2,long param_3,int *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long lStack_50;
  ulong uStack_48;
  
  if (*param_4 == 0) {
    puVar1 = param_1;
    FUN_109d49f2c();
    *param_4 = (int)puVar1;
  }
  FUN_109d38988(param_3,(*(byte *)(param_2 + 1) & 0x7f) == 1);
  FUN_109d38988(param_3,*(undefined4 *)(param_2 + 4));
  FUN_109d38988(param_3,*(undefined2 *)(param_2 + 2));
  puVar6 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar6 >> 1 & 1) == 0) {
    puVar4 = puVar6 + -(*puVar6 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  uStack_48 = *puVar4;
  puVar1 = param_1 + 0x1e;
  FUN_109d4e80c(puVar1,&uStack_48,&lStack_50);
  if ((int)puVar1 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(lStack_50 + 0xc) + -1;
  }
  FUN_109d38988(param_3,iVar2);
  uVar5 = *puVar6;
  if (((uint)uVar5 >> 1 & 1) == 0) {
    if ((uVar5 & 0x3c0) != 0x80) {
LAB_109d4b314:
      uStack_48 = 0;
      goto LAB_109d4b318;
    }
    puVar6 = puVar6 + -(uVar5 >> 2 & 0xf);
  }
  else {
    if (*(int *)(param_2 + -0x18) != 2) goto LAB_109d4b314;
    puVar6 = *(ulong **)(param_2 + -0x20);
  }
  uStack_48 = puVar6[1];
LAB_109d4b318:
  puVar1 = param_1 + 0x1e;
  FUN_109d4e80c(puVar1,&uStack_48,&lStack_50);
  if ((int)puVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lStack_50 + 0xc);
  }
  FUN_109d38988(param_3,uVar3);
  FUN_109d38988(param_3,*(byte *)(param_2 + 1) >> 7);
  FUN_109d4e748(*param_1,7,param_3,*param_4);
  *(undefined4 *)(param_3 + 8) = 0;
  return;
}



/* Entry: 109d4b388; end: 109d4b423;  */

void FUN_109d4b388(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3) + 1;
  if (*(uint *)(param_3 + 0xc) < uVar1) {
    func_0x000107c2b01c(param_3,param_3 + 0x10,uVar1,8);
  }
  uVar2 = 6;
  if ((*(byte *)(param_2 + 1) & 0x7f) == 1) {
    uVar2 = 7;
  }
  FUN_109d38988(param_3,uVar2);
  FUN_109d3b3ec(param_3,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  FUN_109d4e748(*param_1,0x1d,param_3,param_4);
  *(undefined4 *)(param_3 + 8) = 0;
  return;
}



/* Entry: 109d4b424; end: 109d4b7e3;  */

void FUN_109d4b424(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lStack_50;
  ulong uStack_48;
  
  FUN_109d38988(param_3,(*(byte *)(param_2 + 1) & 0x7f) == 1);
  puVar4 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar4 >> 1 & 1) == 0) {
    puVar3 = puVar4 + -(*puVar4 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  uStack_48 = *puVar3;
  puVar1 = param_1 + 0x1e;
  FUN_109d4e80c(puVar1,&uStack_48,&lStack_50);
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lStack_50 + 0xc);
  }
  FUN_109d38988(param_3,uVar2);
  if (((uint)*puVar4 >> 1 & 1) == 0) {
    puVar4 = puVar4 + -(*puVar4 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  uStack_48 = puVar4[1];
  puVar1 = param_1 + 0x1e;
  FUN_109d4e80c(puVar1,&uStack_48,&lStack_50);
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lStack_50 + 0xc);
  }
  FUN_109d38988(param_3,uVar2);
  FUN_109d4e748(*param_1,0x25,param_3,param_4);
  *(undefined4 *)(param_3 + 8) = 0;
  return;
}



/* Entry: 109d4b7e4; end: 109d4b9bb;  */

void FUN_109d4b7e4(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lStack_40;
  ulong uStack_38;
  
  lVar1 = 4;
  if (*(int *)(param_2 + 4) != 0) {
    lVar1 = 6;
  }
  if ((*(byte *)(param_2 + 1) & 0x7f) == 1) {
    lVar1 = lVar1 + 1;
  }
  FUN_109d38988(param_3,lVar1);
  FUN_109d38988(param_3,*(undefined4 *)(param_2 + 0x18));
  uVar5 = *(ulong *)(param_2 + -0x10);
  if (((uint)uVar5 >> 1 & 1) == 0) {
    puVar4 = (ulong *)(param_2 + -0x10) + -(uVar5 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  uStack_38 = *puVar4;
  puVar2 = param_1 + 0x1e;
  FUN_109d4e80c(puVar2,&uStack_38,&lStack_40);
  if ((int)puVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lStack_40 + 0xc);
  }
  FUN_109d38988(param_3,uVar3);
  func_0x000109d49d74(param_3,param_2 + 0x10);
  FUN_109d4e748(*param_1,0xe,param_3,param_4);
  *(undefined4 *)(param_3 + 8) = 0;
  return;
}



/* Entry: 109d4b9bc; end: 109d4c16b;  */

void FUN_109d4b9bc(undefined8 *param_1,char *param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lStack_50;
  char *pcStack_48;
  
  FUN_109d38988(param_3,(param_2[1] & 0x7fU) == 1);
  FUN_109d38988(param_3,*(undefined2 *)(param_2 + 2));
  puVar4 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar4 >> 1 & 1) == 0) {
    puVar3 = puVar4 + -(*puVar4 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  pcStack_48 = (char *)puVar3[2];
  puVar1 = param_1 + 0x1e;
  FUN_109d4e80c(puVar1,&pcStack_48,&lStack_50);
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lStack_50 + 0xc);
  }
  FUN_109d38988(param_3,uVar2);
  pcStack_48 = param_2;
  if (*param_2 != '\x0f') {
    if (((uint)*puVar4 >> 1 & 1) == 0) {
      puVar3 = puVar4 + -(*puVar4 >> 2 & 0xf);
    }
    else {
      puVar3 = *(ulong **)(param_2 + -0x20);
    }
    pcStack_48 = (char *)*puVar3;
  }
  puVar1 = param_1 + 0x1e;
  FUN_109d4e80c(puVar1,&pcStack_48,&lStack_50);
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lStack_50 + 0xc);
  }
  FUN_109d38988(param_3,uVar2);
  FUN_109d38988(param_3,*(undefined4 *)(param_2 + 0x10));
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar3 = puVar4 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  pcStack_48 = (char *)puVar3[1];
  puVar1 = param_1 + 0x1e;
  FUN_109d4e80c(puVar1,&pcStack_48,&lStack_50);
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lStack_50 + 0xc);
  }
  FUN_109d38988(param_3,uVar2);
  if (((uint)*puVar4 >> 1 & 1) == 0) {
    puVar3 = puVar4 + -(*puVar4 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  pcStack_48 = (char *)puVar3[3];
  puVar1 = param_1 + 0x1e;
  FUN_109d4e80c(puVar1,&pcStack_48,&lStack_50);
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lStack_50 + 0xc);
  }
  FUN_109d38988(param_3,uVar2);
  FUN_109d38988(param_3,*(undefined8 *)(param_2 + 0x18));
  FUN_109d38988(param_3,*(undefined4 *)(param_2 + 0x28));
  FUN_109d38988(param_3,*(undefined8 *)(param_2 + 0x20));
  FUN_109d38988(param_3,*(undefined4 *)(param_2 + 0x14));
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar3 = puVar4 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  pcStack_48 = (char *)puVar3[4];
  puVar1 = param_1 + 0x1e;
  FUN_109d4e80c(puVar1,&pcStack_48,&lStack_50);
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lStack_50 + 0xc);
  }
  FUN_109d38988(param_3,uVar2);
  FUN_109d38988(param_3,(int)*(undefined8 *)(param_2 + 0x2c) + 1U &
                        -((uint)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20) & 1));
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar4 = puVar4 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  pcStack_48 = (char *)puVar4[5];
  puVar1 = param_1 + 0x1e;
  FUN_109d4e80c(puVar1,&pcStack_48,&lStack_50);
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lStack_50 + 0xc);
  }
  FUN_109d38988(param_3,uVar2);
  FUN_109d4e748(*param_1,0x11,param_3,param_4);
  *(undefined4 *)(param_3 + 8) = 0;
  return;
}



/* Entry: 109d4c16c; end: 109d4c23f;  */

void FUN_109d4c16c(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lStack_40;
  ulong uStack_38;
  
  uVar1 = 2;
  if ((*(byte *)(param_2 + 1) & 0x7f) == 1) {
    uVar1 = 3;
  }
  FUN_109d38988(param_3,uVar1);
  FUN_109d38988(param_3,*(undefined4 *)(param_2 + 0x14));
  uVar5 = *(ulong *)(param_2 + -0x10);
  if (((uint)uVar5 >> 1 & 1) == 0) {
    puVar4 = (ulong *)(param_2 + -0x10) + -(uVar5 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  uStack_38 = puVar4[3];
  puVar2 = param_1 + 0x1e;
  FUN_109d4e80c(puVar2,&uStack_38,&lStack_40);
  if ((int)puVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lStack_40 + 0xc);
  }
  FUN_109d38988(param_3,uVar3);
  FUN_109d38988(param_3,*(undefined1 *)(param_2 + 0x2c));
  FUN_109d4e748(*param_1,0x13,param_3,param_4);
  *(undefined4 *)(param_3 + 8) = 0;
  return;
}



/* Entry: 109d4c240; end: 109d4e747;  */

void FUN_109d4c240(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lStack_50;
  ulong uStack_48;
  
  FUN_109d38988(param_3,(*(byte *)(param_2 + 1) & 0x7f) == 1);
  puVar4 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar4 >> 1 & 1) == 0) {
    puVar3 = puVar4 + -(*puVar4 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  uStack_48 = *puVar3;
  puVar1 = param_1 + 0x1e;
  FUN_109d4e80c(puVar1,&uStack_48,&lStack_50);
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lStack_50 + 0xc);
  }
  FUN_109d38988(param_3,uVar2);
  if (((uint)*puVar4 >> 1 & 1) == 0) {
    puVar4 = puVar4 + -(*puVar4 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  uStack_48 = puVar4[1];
  puVar1 = param_1 + 0x1e;
  FUN_109d4e80c(puVar1,&uStack_48,&lStack_50);
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lStack_50 + 0xc);
  }
  FUN_109d38988(param_3,uVar2);
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    FUN_109d38988(param_3,0);
    uStack_48 = 0;
    puVar1 = param_1 + 0x1e;
    FUN_109d4e80c(puVar1,&uStack_48,&lStack_50);
    uVar2 = 0;
    if ((int)puVar1 == 0) goto LAB_109d4c384;
  }
  else {
    FUN_109d38988(param_3,*(undefined4 *)(param_2 + 0x10));
    uStack_48 = *(ulong *)(param_2 + 0x18);
    puVar1 = param_1 + 0x1e;
    FUN_109d4e80c(puVar1,&uStack_48,&lStack_50);
    if ((int)puVar1 == 0) {
      uVar2 = 0;
      goto LAB_109d4c384;
    }
  }
  uVar2 = *(undefined4 *)(lStack_50 + 0xc);
LAB_109d4c384:
  FUN_109d38988(param_3,uVar2);
  if (*(ulong *)(param_2 + 0x28) != 0) {
    puVar1 = param_1 + 0x1e;
    uStack_48 = *(ulong *)(param_2 + 0x28);
    FUN_109d4e80c(puVar1,&uStack_48,&lStack_50);
    if ((int)puVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(lStack_50 + 0xc);
    }
    FUN_109d38988(param_3,uVar2);
  }
  FUN_109d4e748(*param_1,0x10,param_3,param_4);
  *(undefined4 *)(param_3 + 8) = 0;
  return;
}



/* Entry: 109d4e748; end: 109d4e80b;  */

/* WARNING: Removing unreachable block (ram,0x000109d47938) */
/* WARNING: Removing unreachable block (ram,0x000109d47a78) */
/* WARNING: Removing unreachable block (ram,0x000109d47a3c) */
/* WARNING: Removing unreachable block (ram,0x000109d47a8c) */
/* WARNING: Removing unreachable block (ram,0x000109d47a50) */
/* WARNING: Removing unreachable block (ram,0x000109d47a54) */
/* WARNING: Removing unreachable block (ram,0x000109d47a6c) */

void FUN_109d4e748(long param_1,ulong param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((int)param_4 == 0) {
    uVar2 = *(uint *)(param_3 + 1);
    FUN_109d43c48(param_1,3,*(undefined4 *)(param_1 + 0x20));
    FUN_109d43cd4(param_1,param_2,6);
    FUN_109d43cd4(param_1,(ulong)uVar2,6);
    if (uVar2 != 0) {
      lVar5 = 0;
      do {
        FUN_109d44680(param_1,*(undefined8 *)(*param_3 + lVar5),6);
        lVar5 = lVar5 + 8;
      } while ((ulong)uVar2 * 8 - lVar5 != 0);
    }
    return;
  }
  lVar5 = *param_3;
  uVar3 = *(uint *)(param_3 + 1);
  plVar7 = *(long **)(*(long *)(param_1 + 0x28) + (ulong)((int)param_4 - 4) * 0x10);
  FUN_109d43c48(param_1,param_4,*(undefined4 *)(param_1 + 0x20));
  uVar2 = *(uint *)(plVar7 + 1);
  if ((*(byte *)(*plVar7 + 8) & 1) == 0) {
    func_0x000109d474f4(param_1,*plVar7,param_2 & 0xffffffff | 0x100000000);
  }
  uVar8 = 1;
  if (uVar2 != 1) {
    uVar9 = 0;
    do {
      lVar6 = *plVar7;
      lVar1 = lVar6 + (ulong)uVar8 * 0x10;
      bVar4 = *(byte *)(lVar1 + 8);
      if ((bVar4 & 1) == 0) {
        bVar4 = bVar4 >> 1 & 7;
        if (bVar4 == 5) {
          FUN_109d47b24(param_1,lVar5 + uVar9 * 8,uVar3 - uVar9,1);
          uVar10 = uVar9;
        }
        else {
          if (bVar4 != 3) {
            FUN_109d47a94(param_1,lVar1,*(undefined8 *)(lVar5 + uVar9 * 8));
            goto LAB_109d47a1c;
          }
          uVar8 = uVar8 + 1;
          FUN_109d43cd4(param_1,uVar3 - (int)uVar9,6);
          for (; uVar10 = (ulong)uVar3, uVar3 != (uint)uVar9; uVar9 = (ulong)((uint)uVar9 + 1)) {
            FUN_109d47a94(param_1,lVar6 + (ulong)uVar8 * 0x10,*(undefined8 *)(lVar5 + uVar9 * 8));
          }
        }
      }
      else {
LAB_109d47a1c:
        uVar10 = (ulong)((int)uVar9 + 1);
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar10;
    } while (uVar8 != uVar2);
  }
  return;
}



/* Entry: 109d4e80c; end: 109d4e8a3;  */

undefined8 FUN_109d4e80c(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d4e84c;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d4e84c:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d4e8a4; end: 109d4e91f;  */

void FUN_109d4e8a4(long *param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  uVar1 = ((long)param_3 - (long)param_2) + uVar2;
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1,8);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  if (param_2 != param_3) {
    puVar3 = (ulong *)(*param_1 + uVar2 * 8);
    pbVar5 = param_2;
    do {
      pbVar4 = pbVar5 + 1;
      *puVar3 = (ulong)*pbVar5;
      puVar3 = puVar3 + 1;
      pbVar5 = pbVar4;
    } while (pbVar4 != param_3);
  }
  *(int *)(param_1 + 1) = (int)uVar2 + (int)((long)param_3 - (long)param_2);
  return;
}



/* Entry: 109d4e920; end: 109d4ea3b;  */

void FUN_109d4e920(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  long lVar5;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined4 *puStack_98;
  ulong uStack_90;
  undefined4 auStack_88 [16];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = 0x400000000;
  ppuVar3 = &puStack_98;
  puStack_98 = auStack_88;
  func_0x000109d97bcc();
  if ((int)uStack_90 != 0) {
    puVar1 = puStack_98 + (uStack_90 & 0xffffffff) * 4;
    puVar4 = puStack_98;
    do {
      FUN_109d38988(param_2,*puVar4);
      uStack_a0 = *(undefined8 *)(puVar4 + 2);
      lVar5 = param_1 + 0xf0;
      FUN_109d4e80c(lVar5,&uStack_a0,&lStack_a8);
      if ((int)lVar5 == 0) {
        ppuVar3 = (undefined4 **)0xffffffff;
      }
      else {
        ppuVar3 = (undefined4 **)(ulong)(*(int *)(lStack_a8 + 0xc) - 1);
      }
      param_3 = param_2;
      FUN_109d38988();
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar1);
  }
  if (puStack_98 != auStack_88) {
    param_3 = puStack_98;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (puStack_98 != auStack_88) {
      _free();
    }
    __Unwind_Resume();
    uVar2 = *(uint *)(ppuVar3 + 1);
    FUN_109d43c48();
    FUN_109d43cd4(param_3,0x24,6);
    FUN_109d43cd4(param_3,(ulong)uVar2,6);
    if (uVar2 != 0) {
      lVar5 = 0;
      do {
        FUN_109d44680(param_3,*(undefined8 *)((long)*ppuVar3 + lVar5),6);
        lVar5 = lVar5 + 8;
      } while ((ulong)uVar2 * 8 - lVar5 != 0);
    }
    return;
  }
  return;
}



/* Entry: 109d4ea3c; end: 109d4eabf;  */

void FUN_109d4ea3c(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  FUN_109d43c48(param_1,3,*(undefined4 *)(param_1 + 0x20));
  FUN_109d43cd4(param_1,0x24,6);
  FUN_109d43cd4(param_1,(ulong)uVar1,6);
  if (uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_109d44680(param_1,*(undefined8 *)(*param_2 + lVar2),6);
      lVar2 = lVar2 + 8;
    } while ((ulong)uVar1 * 8 - lVar2 != 0);
  }
  return;
}



/* Entry: 109d4eac0; end: 109d4eb8b;  */

void FUN_109d4eac0(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plStack_28;
  
  uVar2 = *param_1;
  FUN_109d4eb8c(uVar2,(int)param_1[2],param_2,&plStack_28);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar1 = (uint)param_1[2];
  if ((uint)param_1[1] * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~(uint)param_1[1]) - *(int *)((long)param_1 + 0xc))
    goto LAB_109d4eb2c;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d4ec18(param_1,uVar1);
  FUN_109d4eb8c(*param_1,(int)param_1[2],param_2,&plStack_28);
LAB_109d4eb2c:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  if (*plStack_28 != -0x1000) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + -1;
  }
  *plStack_28 = param_2;
  plStack_28[1] = 0;
  return;
}



/* Entry: 109d4eb8c; end: 109d4ec17;  */

undefined8 FUN_109d4eb8c(long param_1,int param_2,long param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  if (param_2 == 0) {
    uVar2 = 0;
    plVar3 = (long *)0x0;
  }
  else {
    uVar4 = ((uint)param_3 >> 4 ^ (uint)param_3 >> 9) & param_2 - 1U;
    plVar3 = (long *)(param_1 + (ulong)uVar4 * 0x10);
    lVar6 = *plVar3;
    if (param_3 != lVar6) {
      iVar7 = 1;
      plVar5 = (long *)0x0;
      do {
        if (lVar6 == -0x1000) {
          uVar2 = 0;
          if (plVar5 != (long *)0x0) {
            plVar3 = plVar5;
          }
          goto LAB_109d4ebc0;
        }
        plVar1 = plVar3;
        if (plVar5 != (long *)0x0 || lVar6 != -0x2000) {
          plVar1 = plVar5;
        }
        uVar4 = uVar4 + iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 & param_2 - 1U;
        plVar3 = (long *)(param_1 + (ulong)uVar4 * 0x10);
        lVar6 = *plVar3;
        plVar5 = plVar1;
      } while (param_3 != lVar6);
    }
    uVar2 = 1;
  }
LAB_109d4ebc0:
  *param_4 = (long)plVar3;
  return uVar2;
}


