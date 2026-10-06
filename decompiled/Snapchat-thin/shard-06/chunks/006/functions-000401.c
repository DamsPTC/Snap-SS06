/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104acbc8c; end: 104acbdc3;  */

void FUN_104acbc8c(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  char cStack_30;
  
  if ((char)param_2[4] == '\0') {
    FUN_104acb358(param_1);
    uStack_50 = uStack_50 & 0xffffffffffffff00;
    cStack_30 = '\0';
    if ((char)param_2[4] == '\0') {
      if (param_1 == (undefined8 *)0x0) {
        return;
      }
      goto LAB_104acbd84;
    }
  }
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_40 = param_2[2];
  uStack_38 = param_2[3];
  param_2[3] = 0;
  cStack_30 = '\x01';
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar5 = param_1[3];
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x38) = 0;
        plVar1 = (long *)(lVar5 + 0x28);
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 != 0) {
          plVar1 = (long *)(lVar5 + 0x30);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 - lVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar1 = (long *)(*(long *)(lVar5 + 0x18) + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + lVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (cStack_30 == '\0') goto LAB_104acbd84;
  }
  FUN_104acb178(&uStack_50);
LAB_104acbd84:
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR____cxa_pure_virtual_1107c4208;
  func_0x000104a9b8f0(param_1 + 1);
  __ZdlPv(param_1);
  return;
}



/* Entry: 104acbdc4; end: 104acbe5b;  */

undefined8 * FUN_104acbdc4(undefined8 *param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    *param_1 = &PTR_FUN_1107c5ac0;
    param_1[1] = &PTR____cxa_pure_virtual_1107c5b08;
    if (param_1[0xb] != 0) {
      FUN_104ac9c58(param_1);
    }
    func_0x0001005a5f48(param_1 + 2);
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                      ,0x170,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104acbe50);
  (*pcVar1)();
}



/* Entry: 104acbe5c; end: 104acbe6f;  */

void FUN_104acbe5c(void)

{
  FUN_104acbdc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104acbe70; end: 104acbf73;  */

void FUN_104acbe70(long *param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  byte bVar4;
  ulong uStack_28;
  
  plVar3 = param_1;
  func_0x00010047a478();
  if ((long *)*plVar3 == param_1) {
    bVar4 = *(byte *)((long)param_1 + 0x54);
    if (bVar4 < 3) {
      bVar4 = 2;
    }
    *(byte *)((long)param_1 + 0x54) = bVar4;
  }
  else {
    plVar3 = param_1 + 2;
    func_0x000100460448(plVar3);
    if ((char)param_1[0x10] == '\0') {
      FUN_104acc0d8(param_1);
      func_0x000100466b80(plVar3);
      uStack_28 = 4;
      iVar2 = (int)&uStack_28;
      func_0x00010ae770f8();
      if (iVar2 != 1) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
                            ,0x18e,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104acbf40);
        (*pcVar1)();
      }
      if ((uStack_28 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      func_0x000100466b80(plVar3);
    }
  }
  return;
}



/* Entry: 104acbf74; end: 104acc077;  */

void FUN_104acbf74(long *param_1)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *extraout_x8;
  int iVar6;
  ulong uStack_30;
  undefined1 uStack_21;
  
  func_0x00010047a478(param_1);
  if ((long *)*param_1 == extraout_x8) {
    bVar3 = *(byte *)((long)extraout_x8 + 0x54);
    if (bVar3 < 2) {
      bVar3 = 1;
    }
    *(byte *)((long)extraout_x8 + 0x54) = bVar3;
    plVar2 = extraout_x8 + 10;
    do {
      iVar6 = (int)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    pbVar1 = (byte *)((long)extraout_x8 + 0x81);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((bVar3 & 1) == 0) {
      extraout_x8[0xd] = (long)FUN_104acc8e4;
      extraout_x8[0xe] = (long)extraout_x8;
      extraout_x8[0xf] = 0;
      uStack_30 = 0;
      func_0x0001004bd7e8(&uStack_21,extraout_x8 + 0xc,&uStack_30);
      if ((uStack_30 & 1) == 0) {
        return;
      }
      func_0x00010084dad0();
      return;
    }
    plVar2 = extraout_x8 + 10;
    do {
      iVar6 = (int)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((extraout_x8 != (long *)0x0) && (iVar6 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x000104acc044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*extraout_x8 + 0x10))(extraout_x8);
    return;
  }
  return;
}



/* Entry: 104acc078; end: 104acc0d7;  */

void FUN_104acc078(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 10;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != (long *)0x0) && ((int)lVar4 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x000104acc0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}



/* Entry: 104acc0d8; end: 104acc113;  */

/* WARNING: Possible PIC construction at 0x000104acc0fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104acc100) */

undefined1 * FUN_104acc0d8(undefined1 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  code *pcVar9;
  long **pplVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long lVar12;
  undefined1 auStack_f0 [8];
  long *plStack_e8;
  int iStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  int iStack_b0;
  long *plStack_a8;
  long lStack_a0;
  int iStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if (param_1[0x80] != '\0') {
    func_0x00010bdaccac();
    puVar11 = auStack_f0;
    FUN_104acc550(&plStack_c0,param_1 + 8);
    if (iStack_b0 == 1) {
      plStack_d8 = plStack_c0;
      lStack_d0 = lStack_b8;
      lStack_b8 = 0;
      uStack_c8 = 1;
    }
    else {
      if (iStack_b0 != 0) {
        FUN_104a71e10();
        goto LAB_104acc364;
      }
      FUN_104acc550(&plStack_a8,param_1 + 0x18);
      if (iStack_98 == 1) {
        plStack_d8 = plStack_a8;
        lStack_d0 = lStack_a0;
        lStack_a0 = 0;
        uStack_c8 = 1;
      }
      else {
        if (iStack_98 != 0) {
          FUN_104a71e10();
          goto LAB_104acc364;
        }
        FUN_104acc550(&plStack_90,param_1 + 0x28);
        if ((int)lStack_80 == 1) {
          plStack_d8 = plStack_90;
          lStack_d0 = lStack_88;
          lStack_88 = 0;
          uStack_c8 = 1;
        }
        else {
          if ((int)lStack_80 != 0) {
            FUN_104a71e10();
            goto LAB_104acc364;
          }
          FUN_104acc550(&plStack_d8,param_1 + 0x38);
        }
        FUN_104acc88c(&plStack_90);
      }
      FUN_104acc88c(&plStack_a8);
    }
    FUN_104acc88c(&plStack_c0);
    FUN_104acc440(auStack_f0,&plStack_d8);
    pplVar10 = &plStack_d8;
    FUN_104acc88c();
    plVar8 = plStack_e8;
    if (iStack_e0 == 1) {
      plStack_e8 = (long *)0x0;
      plVar1 = (long *)(*(long *)(param_1 + 0x48) + 0x68);
      do {
        lVar2 = *plVar1 + 1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar2;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = *(long **)(param_1 + 0x48);
      lVar5 = *(long *)(param_1 + 0x50);
      if (lVar5 != 0) {
        plVar3 = (long *)(lVar5 + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = *plVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      func_0x00010047a478();
      (**(code **)(**pplVar10 + 0x28))(&plStack_a8);
      plStack_78 = plStack_a8;
      plStack_a8 = (long *)0x0;
      plStack_90 = plVar1;
      lStack_88 = lVar5;
      lStack_80 = lVar2;
      FUN_104acb2c8(plVar8,&plStack_90);
      FUN_104acb178(&plStack_90);
      if (plStack_a8 != (long *)0x0) {
        (**(code **)(*plStack_a8 + 8))();
      }
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      lVar5 = *(long *)(param_1 + 0x50);
      if (lVar5 != 0) {
        plVar1 = (long *)(lVar5 + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          lVar12 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      func_0x00010047a38c(param_1 + 0x48);
      *(undefined8 *)(param_1 + 8) = uVar4;
      *(long *)(param_1 + 0x10) = lVar5;
      *(long *)(param_1 + 0x18) = lVar2;
      *param_1 = 2;
      FUN_104acc75c(extraout_x8,param_1);
    }
    else {
      if (iStack_e0 != 0) {
        FUN_104a71e10();
LAB_104acc364:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104acc368);
        (*pcVar9)();
      }
      *(undefined4 *)(extraout_x8 + 0x18) = 0;
    }
    FUN_104acc88c(auStack_f0);
    return puVar11;
  }
  param_1[0x80] = 1;
  switch(param_1[0xe0]) {
  case 0:
    func_0x00010047a38c(param_1 + 0xe8);
    func_0x00010047a38c(param_1 + 0xf8);
  case 1:
    puVar11 = param_1 + 0x128;
    break;
  case 2:
    puVar11 = param_1 + 0xe8;
    break;
  case 3:
    goto code_r0x00010047a370;
  default:
    func_0x000107c60ebc();
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10047a388);
    (*pcVar9)();
  }
  func_0x00010047a38c(puVar11);
code_r0x00010047a370:
  return param_1 + 0xe0;
}



/* Entry: 104acc114; end: 104acc43f;  */

void FUN_104acc114(long param_1,undefined1 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  code *pcVar9;
  long **pplVar10;
  long lVar11;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  int iStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined4 uStack_a8;
  long *plStack_a0;
  long lStack_98;
  int iStack_90;
  long *plStack_88;
  long lStack_80;
  int iStack_78;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  FUN_104acc550(&plStack_a0,param_2 + 8);
  if (iStack_90 == 1) {
    plStack_b8 = plStack_a0;
    lStack_b0 = lStack_98;
    lStack_98 = 0;
    uStack_a8 = 1;
  }
  else {
    if (iStack_90 != 0) {
      FUN_104a71e10();
      goto LAB_104acc364;
    }
    FUN_104acc550(&plStack_88,param_2 + 0x18);
    if (iStack_78 == 1) {
      plStack_b8 = plStack_88;
      lStack_b0 = lStack_80;
      lStack_80 = 0;
      uStack_a8 = 1;
    }
    else {
      if (iStack_78 != 0) {
        FUN_104a71e10();
        goto LAB_104acc364;
      }
      FUN_104acc550(&plStack_70,param_2 + 0x28);
      if ((int)lStack_60 == 1) {
        plStack_b8 = plStack_70;
        lStack_b0 = lStack_68;
        lStack_68 = 0;
        uStack_a8 = 1;
      }
      else {
        if ((int)lStack_60 != 0) {
          FUN_104a71e10();
          goto LAB_104acc364;
        }
        FUN_104acc550(&plStack_b8,param_2 + 0x38);
      }
      FUN_104acc88c(&plStack_70);
    }
    FUN_104acc88c(&plStack_88);
  }
  FUN_104acc88c(&plStack_a0);
  FUN_104acc440(auStack_d0,&plStack_b8);
  pplVar10 = &plStack_b8;
  FUN_104acc88c();
  plVar8 = plStack_c8;
  if (iStack_c0 == 1) {
    plStack_c8 = (long *)0x0;
    plVar1 = (long *)(*(long *)(param_2 + 0x48) + 0x68);
    do {
      lVar2 = *plVar1 + 1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar2;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar1 = *(long **)(param_2 + 0x48);
    lVar5 = *(long *)(param_2 + 0x50);
    if (lVar5 != 0) {
      plVar3 = (long *)(lVar5 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *plVar3 = *plVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    func_0x00010047a478();
    (**(code **)(**pplVar10 + 0x28))(&plStack_88);
    plStack_58 = plStack_88;
    plStack_88 = (long *)0x0;
    plStack_70 = plVar1;
    lStack_68 = lVar5;
    lStack_60 = lVar2;
    FUN_104acb2c8(plVar8,&plStack_70);
    FUN_104acb178(&plStack_70);
    if (plStack_88 != (long *)0x0) {
      (**(code **)(*plStack_88 + 8))();
    }
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    lVar5 = *(long *)(param_2 + 0x50);
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar11 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    func_0x00010047a38c(param_2 + 0x48);
    *(undefined8 *)(param_2 + 8) = uVar4;
    *(long *)(param_2 + 0x10) = lVar5;
    *(long *)(param_2 + 0x18) = lVar2;
    *param_2 = 2;
    FUN_104acc75c(param_1,param_2);
  }
  else {
    if (iStack_c0 != 0) {
      FUN_104a71e10();
LAB_104acc364:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x104acc368);
      (*pcVar9)();
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_104acc88c(auStack_d0);
  return;
}



/* Entry: 104acc440; end: 104acc473;  */

undefined1 * FUN_104acc440(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_104acc474();
  return param_1;
}



/* Entry: 104acc474; end: 104acc4ff;  */

void FUN_104acc474(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c5f78)[*(uint *)(param_1 + 0x10)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c5f88)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 104acc500; end: 104acc54f;  */

void FUN_104acc500(void)

{
  return;
}



/* Entry: 104acc550; end: 104acc5f7;  */

void FUN_104acc550(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  int iStack_28;
  
  func_0x000104acc5b4(&uStack_30);
  uVar1 = uStack_30;
  if (iStack_28 == 1) {
    uStack_30 = 0;
    *param_1 = *(undefined8 *)(param_2 + 8);
    param_1[1] = uVar1;
  }
  *(uint *)(param_1 + 2) = (uint)(iStack_28 == 1);
  FUN_104acc704(&uStack_30);
  return;
}



/* Entry: 104acc5f8; end: 104acc62b;  */

undefined1 * FUN_104acc5f8(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  FUN_104acc62c();
  return param_1;
}



/* Entry: 104acc62c; end: 104acc6b7;  */

void FUN_104acc62c(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c5f98)[*(uint *)(param_1 + 8)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c5fa8)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 8) = uVar1;
  }
  return;
}



/* Entry: 104acc6b8; end: 104acc703;  */

void FUN_104acc6b8(void)

{
  return;
}



/* Entry: 104acc704; end: 104acc75b;  */

long FUN_104acc704(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c5f98)[*(uint *)(param_1 + 8)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return param_1;
}



/* Entry: 104acc75c; end: 104acc7af;  */

void FUN_104acc75c(long param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_40 [16];
  int iStack_30;
  long lStack_28;
  
  if (*(long *)(*(long *)(param_2 + 8) + 0x68) == *(long *)(param_2 + 0x18)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  func_0x00010047a38c();
  *param_2 = 3;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = 0;
  FUN_104a7294c(auStack_40,auStack_58);
  iStack_30 = 1;
  FUN_104a72d1c(auStack_58);
  if (iStack_30 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    if (iStack_30 != 1) goto LAB_104acc870;
    FUN_104a7294c(auStack_58,auStack_40);
    FUN_104a7294c(param_1 + 8,auStack_58);
    *(undefined4 *)(param_1 + 0x18) = 1;
    FUN_104a72d1c(auStack_58);
  }
  func_0x00010047a898(auStack_40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
LAB_104acc870:
  FUN_104a71e10();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104acc878);
  (*pcVar1)();
}



/* Entry: 104acc7b0; end: 104acc88b;  */

void FUN_104acc7b0(long param_1)

{
  code *pcVar1;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_40 [16];
  int iStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = 0;
  FUN_104a7294c(auStack_40,auStack_58);
  iStack_30 = 1;
  FUN_104a72d1c(auStack_58);
  if (iStack_30 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    if (iStack_30 != 1) goto LAB_104acc870;
    FUN_104a7294c(auStack_58,auStack_40);
    FUN_104a7294c(param_1 + 8,auStack_58);
    *(undefined4 *)(param_1 + 0x18) = 1;
    FUN_104a72d1c(auStack_58);
  }
  func_0x00010047a898(auStack_40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
LAB_104acc870:
  FUN_104a71e10();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104acc878);
  (*pcVar1)();
}



/* Entry: 104acc88c; end: 104acc8e3;  */

long FUN_104acc88c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c5f78)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return param_1;
}



/* Entry: 104acc8e4; end: 104acca43;  */

void FUN_104acc8e4(long *param_1)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uStack_48;
  ulong uStack_40;
  char cStack_38;
  
  pbVar1 = (byte *)((long)param_1 + 0x81);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((bVar3 & 1) != 0) {
    plVar2 = param_1 + 2;
    plVar8 = plVar2;
    func_0x000100460448();
    if ((char)param_1[0x10] == '\0') {
      func_0x00010047a478();
      lVar9 = *plVar8;
      func_0x00010047a478();
      *plVar8 = (long)param_1;
      plVar8 = param_1;
      func_0x00010047a498(&uStack_40);
      func_0x00010047a478();
      *plVar8 = lVar9;
      func_0x000100466b80(plVar2);
      if (cStack_38 != '\0') {
        uStack_48 = uStack_40;
        uStack_40 = 0x36;
        iVar7 = (int)&uStack_48;
        func_0x00010ae770f8();
        if (iVar7 != 1) goto LAB_104acc9d4;
        if ((uStack_48 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      func_0x00010047aa10(&uStack_40);
    }
    else {
      func_0x000100466b80(plVar2);
    }
    plVar2 = param_1 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
    return;
  }
  func_0x00010bdacce0();
LAB_104acc9d4:
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
                      ,0x18e,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x104acca04);
  (*pcVar6)();
}



/* Entry: 104acca44; end: 104acca53;  */

void FUN_104acca44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c5fc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104acca54; end: 104acca73;  */

void FUN_104acca54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c5fc8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104acca74; end: 104acca87;  */

long FUN_104acca74(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x40) + 0xc0 == *(long *)(param_1 + 0x48)) {
    lVar5 = *(long *)(param_1 + 0x48);
    plVar1 = (long *)(*(long *)(param_1 + 0x30) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(char *)(param_1 + 0xd7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xc0));
    }
    lVar5 = 0xa0;
    do {
      func_0x0001004bc3ac(param_1 + 0x18 + lVar5,0);
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0x80);
    func_0x0001005a5f48(param_1 + 0x58);
    func_0x00010047a38c((long *)(param_1 + 0x30));
    if (*(long *)(param_1 + 0x28) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return param_1 + 0x18;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
                      ,0xa8,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104acb61c);
  (*pcVar4)();
}



/* Entry: 104acca88; end: 104accaeb;  */

undefined8 * FUN_104acca88(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c6018;
  plVar4 = (long *)param_1[4];
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
  FUN_104a91938(param_1 + 2);
  return param_1;
}



/* Entry: 104accaec; end: 104accaef;  */

undefined8 * FUN_104accaec(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c6018;
  plVar4 = (long *)param_1[4];
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
  FUN_104a91938(param_1 + 2);
  return param_1;
}



/* Entry: 104accaf0; end: 104accb03;  */

void FUN_104accaf0(void)

{
  FUN_104acca88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104accb04; end: 104accb13;  */

void FUN_104accb04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c6098;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104accb14; end: 104accb33;  */

void FUN_104accb14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c6098;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104accb34; end: 104accb4f;  */

long FUN_104accb34(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x60);
    *(undefined8 *)(lVar2 + 0x60) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
  }
  func_0x00010047a38c((long *)(param_1 + 0x20));
  return param_1 + 0x18;
}



/* Entry: 104accb50; end: 104accb93;  */

void FUN_104accb50(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107c60e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104accb94; end: 104accb97;  */

void FUN_104accb94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104accb98; end: 104accc0b;  */

void FUN_104accb98(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x70));
  }
  puVar1 = *(undefined8 **)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  lVar2 = 0x50;
  do {
    FUN_104acb418(param_2 + lVar2);
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0x10);
  if (*(long *)(param_2 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 104accc0c; end: 104accc3f;  */

undefined8 * FUN_104accc0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c6138;
  func_0x0001005a5f48(param_1 + 2);
  return param_1;
}



/* Entry: 104accc40; end: 104accc73;  */

void FUN_104accc40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c6138;
  func_0x0001005a5f48(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104accc74; end: 104accf27;  */

long * FUN_104accc74(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  long *plVar12;
  char *pcVar13;
  long extraout_x8;
  int *piVar14;
  long *plVar15;
  ulong *puVar16;
  long *plVar17;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 ***pppuStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  long alStack_1e8 [7];
  undefined8 ***pppuStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_1 + 4;
  param_1[5] = 0;
  *plVar15 = 0;
  plVar17 = param_1 + 0x1f;
  *plVar17 = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar12 = param_1 + 7;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  plVar1 = param_1 + 0x34;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  plVar9 = param_1;
  if (param_2 != (long *)0x0) {
    pcVar13 = "transport_security_type";
    plVar9 = param_2;
    FUN_104ad0218();
    *param_1 = (long)plVar9;
    param_1[1] = (long)pcVar13;
    pcVar13 = "peer_spiffe_id";
    plVar9 = param_2;
    FUN_104ad0218();
    param_1[2] = (long)plVar9;
    param_1[3] = (long)pcVar13;
    FUN_104ad02b0(&lStack_100,param_2,"peer_uri");
    if (*plVar15 != 0) {
      param_1[5] = *plVar15;
      __ZdlPv();
      *plVar15 = 0;
      param_1[5] = 0;
      param_1[6] = 0;
    }
    param_1[5] = lStack_f8;
    param_1[4] = lStack_100;
    param_1[6] = lStack_f0;
    FUN_104ad02b0(&lStack_100,param_2,"peer_dns");
    if (*plVar12 != 0) {
      param_1[8] = *plVar12;
      __ZdlPv();
      *plVar12 = 0;
      param_1[8] = 0;
      param_1[9] = 0;
    }
    param_1[8] = lStack_f8;
    param_1[7] = lStack_100;
    param_1[9] = lStack_f0;
    pcVar13 = "x509_common_name";
    plVar9 = param_2;
    FUN_104ad0218();
    param_1[10] = (long)plVar9;
    param_1[0xb] = (long)pcVar13;
    pcVar13 = "x509_subject";
    FUN_104ad0218();
    param_1[0xc] = (long)param_2;
    param_1[0xd] = (long)pcVar13;
    plVar9 = param_2;
  }
  if (param_3 != (long *)0x0) {
    func_0x000100746c84(param_3);
    FUN_104accf28(&lStack_100);
    param_1[0x1b] = lStack_98;
    param_1[0x1a] = lStack_a0;
    param_1[0x1d] = lStack_88;
    param_1[0x1c] = lStack_90;
    *(undefined4 *)(param_1 + 0x1e) = uStack_80;
    param_1[0x13] = lStack_d8;
    param_1[0x12] = lStack_e0;
    param_1[0x15] = lStack_c8;
    param_1[0x14] = lStack_d0;
    param_1[0x17] = lStack_b8;
    param_1[0x16] = lStack_c0;
    param_1[0x19] = lStack_a8;
    param_1[0x18] = lStack_b0;
    param_1[0xf] = lStack_f8;
    param_1[0xe] = lStack_100;
    param_1[0x11] = lStack_e8;
    param_1[0x10] = lStack_f0;
    if (*(char *)((long)param_1 + 0x10f) < '\0') {
      __ZdlPv(*plVar17);
    }
    param_1[0x20] = lStack_70;
    *plVar17 = lStack_78;
    param_1[0x21] = lStack_68;
    *(undefined4 *)(param_1 + 0x22) = uStack_60;
    func_0x000100741550();
    FUN_104accf28(&lStack_100);
    param_1[0x30] = lStack_98;
    param_1[0x2f] = lStack_a0;
    param_1[0x32] = lStack_88;
    param_1[0x31] = lStack_90;
    *(undefined4 *)(param_1 + 0x33) = uStack_80;
    param_1[0x28] = lStack_d8;
    param_1[0x27] = lStack_e0;
    param_1[0x2a] = lStack_c8;
    param_1[0x29] = lStack_d0;
    param_1[0x2c] = lStack_b8;
    param_1[0x2b] = lStack_c0;
    param_1[0x2e] = lStack_a8;
    param_1[0x2d] = lStack_b0;
    param_1[0x24] = lStack_f8;
    param_1[0x23] = lStack_100;
    param_1[0x26] = lStack_e8;
    param_1[0x25] = lStack_f0;
    if (*(char *)((long)param_1 + 0x1b7) < '\0') {
      param_3 = (long *)*plVar1;
      __ZdlPv();
    }
    param_1[0x35] = lStack_70;
    *plVar1 = lStack_78;
    param_1[0x36] = lStack_68;
    *(undefined4 *)(param_1 + 0x37) = uStack_60;
    plVar9 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0x1b7) < '\0') {
    __ZdlPv(*plVar1);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(*plVar17);
  }
  if (*plVar12 != 0) {
    param_1[8] = *plVar12;
    __ZdlPv();
  }
  if (*plVar15 != 0) {
    param_1[5] = *plVar15;
    __ZdlPv();
  }
  __Unwind_Resume(plVar9);
  puVar16 = (ulong *)(extraout_x8 + 0x88);
  *puVar16 = 0;
  *(undefined4 *)(extraout_x8 + 0xa0) = 0;
  *(undefined8 *)(extraout_x8 + 0x90) = 0;
  *(undefined8 *)(extraout_x8 + 0x98) = 0;
  func_0x00010047ae00(alStack_1e8);
  if (alStack_1e8[0] != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                        ,0x2a,0,"Failed to parse uri.");
    goto LAB_104acd218;
  }
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  ppppuVar10 = (undefined8 ****)pppuStack_1b0;
  if (-1 < (char)bStack_199) {
    uStack_1a8 = (ulong)bStack_199;
    ppppuVar10 = &pppuStack_1b0;
  }
  func_0x0001004ca784(ppppuVar10,uStack_1a8,&uStack_1f8,&uStack_208);
  if (((ulong)ppppuVar10 & 1) == 0) {
    if (alStack_1e8[0] == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                          ,0x30,0,"Failed to split %s into host and port.");
      goto LAB_104acd218;
    }
    func_0x00010ae77c74(alStack_1e8);
    goto LAB_104acd25c;
  }
  uVar11 = uStack_208;
  func_0x00010082e12c(uStack_208,uStack_200,&pppuStack_220,10);
  uVar2 = uStack_200;
  uVar6 = uStack_208;
  *(undefined4 *)(extraout_x8 + 0xa0) = pppuStack_220._0_4_;
  if ((uVar11 & 1) == 0) {
    if (0x7ffffffffffffff7 < uStack_200) {
      func_0x000104a6fa5c(&pppuStack_220);
      goto LAB_104acd25c;
    }
    if (uStack_200 < 0x17) {
      uStack_210 = CONCAT17((char)uStack_200,(undefined7)uStack_210);
      ppppuVar10 = &pppuStack_220;
      if (uStack_200 != 0) goto LAB_104acd078;
    }
    else {
      uVar11 = (uStack_200 & 0xfffffffffffffff8) + 8;
      if ((uStack_200 | 7) != 0x17) {
        uVar11 = uStack_200 | 7;
      }
      ppppuVar10 = (undefined8 ****)(uVar11 + 1);
      __Znwm();
      uStack_210 = uVar11 + 1 | 0x8000000000000000;
      uStack_218 = uVar2;
      pppuStack_220 = ppppuVar10;
LAB_104acd078:
      _memmove(ppppuVar10,uVar6,uVar2);
    }
    *(undefined1 *)((long)ppppuVar10 + uVar2) = 0;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                        ,0x35,0,"Port %s is out of range or null.");
    if ((long)uStack_210 < 0) {
      __ZdlPv(pppuStack_220);
    }
  }
  uVar6 = uStack_1f0;
  uVar7 = uStack_1f8;
  if (0x7ffffffffffffff7 < uStack_1f0) {
    func_0x000104a6fa5c(&pppuStack_220);
LAB_104acd25c:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x104acd260);
    (*pcVar8)();
  }
  if (uStack_1f0 < 0x17) {
    uStack_210 = CONCAT17((char)uStack_1f0,(undefined7)uStack_210);
    ppppuVar10 = &pppuStack_220;
    if (uStack_1f0 != 0) goto LAB_104acd128;
  }
  else {
    uVar2 = (uStack_1f0 & 0xfffffffffffffff8) + 8;
    if ((uStack_1f0 | 7) != 0x17) {
      uVar2 = uStack_1f0 | 7;
    }
    ppppuVar10 = (undefined8 ****)(uVar2 + 1);
    __Znwm();
    uStack_210 = uVar2 + 1 | 0x8000000000000000;
    uStack_218 = uVar6;
    pppuStack_220 = ppppuVar10;
LAB_104acd128:
    _memmove(ppppuVar10,uVar7,uVar6);
  }
  *(undefined1 *)((long)ppppuVar10 + uVar6) = 0;
  if (*(char *)(extraout_x8 + 0x9f) < '\0') {
    __ZdlPv(*puVar16);
  }
  *(ulong *)(extraout_x8 + 0x90) = uStack_218;
  *puVar16 = (ulong)pppuStack_220;
  *(ulong *)(extraout_x8 + 0x98) = uStack_210;
  puVar3 = *(ulong **)(extraout_x8 + 0x88);
  if (-1 < *(char *)(extraout_x8 + 0x9f)) {
    puVar3 = puVar16;
  }
  FUN_104aa9678(&uStack_228,extraout_x8,puVar3,*(undefined4 *)(extraout_x8 + 0xa0));
  if (uStack_228 != 0) {
    uStack_230 = uStack_228;
    if ((uStack_228 & 1) != 0) {
      piVar14 = (int *)(uStack_228 - 1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = *piVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_104aba950(&pppuStack_220,&uStack_230);
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                        ,0x3c,0,"Address %s is not IPv4/IPv6. Error: %s");
    if ((long)uStack_210 < 0) {
      __ZdlPv(pppuStack_220);
    }
    if ((uStack_230 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_228 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
LAB_104acd218:
  plVar12 = alStack_1e8;
  func_0x00010047cac8(plVar12);
  return plVar12;
}



/* Entry: 104accf28; end: 104acd2e3;  */

void FUN_104accf28(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 ****ppppuVar8;
  ulong uVar9;
  int *piVar10;
  ulong *puVar11;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 ***pppuStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long alStack_e8 [7];
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  
  puVar11 = (ulong *)(param_1 + 0x88);
  *puVar11 = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  func_0x00010047ae00(alStack_e8);
  if (alStack_e8[0] != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                        ,0x2a,0,"Failed to parse uri.");
    goto LAB_104acd218;
  }
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  ppppuVar8 = (undefined8 ****)pppuStack_b0;
  if (-1 < (char)bStack_99) {
    uStack_a8 = (ulong)bStack_99;
    ppppuVar8 = &pppuStack_b0;
  }
  func_0x0001004ca784(ppppuVar8,uStack_a8,&uStack_f8,&uStack_108);
  if (((ulong)ppppuVar8 & 1) == 0) {
    if (alStack_e8[0] == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                          ,0x30,0,"Failed to split %s into host and port.");
      goto LAB_104acd218;
    }
    func_0x00010ae77c74(alStack_e8);
    goto LAB_104acd25c;
  }
  uVar9 = uStack_108;
  func_0x00010082e12c(uStack_108,uStack_100,&pppuStack_120,10);
  uVar1 = uStack_100;
  uVar5 = uStack_108;
  *(undefined4 *)(param_1 + 0xa0) = pppuStack_120._0_4_;
  if ((uVar9 & 1) == 0) {
    if (0x7ffffffffffffff7 < uStack_100) {
      func_0x000104a6fa5c(&pppuStack_120);
      goto LAB_104acd25c;
    }
    if (uStack_100 < 0x17) {
      uStack_110 = CONCAT17((char)uStack_100,(undefined7)uStack_110);
      ppppuVar8 = &pppuStack_120;
      if (uStack_100 != 0) goto LAB_104acd078;
    }
    else {
      uVar9 = (uStack_100 & 0xfffffffffffffff8) + 8;
      if ((uStack_100 | 7) != 0x17) {
        uVar9 = uStack_100 | 7;
      }
      ppppuVar8 = (undefined8 ****)(uVar9 + 1);
      __Znwm();
      uStack_110 = uVar9 + 1 | 0x8000000000000000;
      uStack_118 = uVar1;
      pppuStack_120 = ppppuVar8;
LAB_104acd078:
      _memmove(ppppuVar8,uVar5,uVar1);
    }
    *(undefined1 *)((long)ppppuVar8 + uVar1) = 0;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                        ,0x35,0,"Port %s is out of range or null.");
    if ((long)uStack_110 < 0) {
      __ZdlPv(pppuStack_120);
    }
  }
  uVar5 = uStack_f0;
  uVar6 = uStack_f8;
  if (0x7ffffffffffffff7 < uStack_f0) {
    func_0x000104a6fa5c(&pppuStack_120);
LAB_104acd25c:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x104acd260);
    (*pcVar7)();
  }
  if (uStack_f0 < 0x17) {
    uStack_110 = CONCAT17((char)uStack_f0,(undefined7)uStack_110);
    ppppuVar8 = &pppuStack_120;
    if (uStack_f0 != 0) goto LAB_104acd128;
  }
  else {
    uVar1 = (uStack_f0 & 0xfffffffffffffff8) + 8;
    if ((uStack_f0 | 7) != 0x17) {
      uVar1 = uStack_f0 | 7;
    }
    ppppuVar8 = (undefined8 ****)(uVar1 + 1);
    __Znwm();
    uStack_110 = uVar1 + 1 | 0x8000000000000000;
    uStack_118 = uVar5;
    pppuStack_120 = ppppuVar8;
LAB_104acd128:
    _memmove(ppppuVar8,uVar6,uVar5);
  }
  *(undefined1 *)((long)ppppuVar8 + uVar5) = 0;
  if (*(char *)(param_1 + 0x9f) < '\0') {
    __ZdlPv(*puVar11);
  }
  *(ulong *)(param_1 + 0x90) = uStack_118;
  *puVar11 = (ulong)pppuStack_120;
  *(ulong *)(param_1 + 0x98) = uStack_110;
  puVar2 = *(ulong **)(param_1 + 0x88);
  if (-1 < *(char *)(param_1 + 0x9f)) {
    puVar2 = puVar11;
  }
  FUN_104aa9678(&uStack_128,param_1,puVar2,*(undefined4 *)(param_1 + 0xa0));
  if (uStack_128 != 0) {
    uStack_130 = uStack_128;
    if ((uStack_128 & 1) != 0) {
      piVar10 = (int *)(uStack_128 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = *piVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_104aba950(&pppuStack_120,&uStack_130);
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                        ,0x3c,0,"Address %s is not IPv4/IPv6. Error: %s");
    if ((long)uStack_110 < 0) {
      __ZdlPv(pppuStack_120);
    }
    if ((uStack_130 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_128 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
LAB_104acd218:
  func_0x00010047cac8(alStack_e8);
  return;
}



/* Entry: 104acd2e4; end: 104acd2e7;  */

long * FUN_104acd2e4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  long *plVar12;
  char *pcVar13;
  long extraout_x8;
  int *piVar14;
  long *plVar15;
  ulong *puVar16;
  long *plVar17;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 ***pppuStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  long alStack_1e8 [7];
  undefined8 ***pppuStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_1 + 4;
  param_1[5] = 0;
  *plVar15 = 0;
  plVar17 = param_1 + 0x1f;
  *plVar17 = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar12 = param_1 + 7;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  plVar1 = param_1 + 0x34;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  plVar9 = param_1;
  if (param_2 != (long *)0x0) {
    pcVar13 = "transport_security_type";
    plVar9 = param_2;
    FUN_104ad0218();
    *param_1 = (long)plVar9;
    param_1[1] = (long)pcVar13;
    pcVar13 = "peer_spiffe_id";
    plVar9 = param_2;
    FUN_104ad0218();
    param_1[2] = (long)plVar9;
    param_1[3] = (long)pcVar13;
    FUN_104ad02b0(&lStack_100,param_2,"peer_uri");
    if (*plVar15 != 0) {
      param_1[5] = *plVar15;
      __ZdlPv();
      *plVar15 = 0;
      param_1[5] = 0;
      param_1[6] = 0;
    }
    param_1[5] = lStack_f8;
    param_1[4] = lStack_100;
    param_1[6] = lStack_f0;
    FUN_104ad02b0(&lStack_100,param_2,"peer_dns");
    if (*plVar12 != 0) {
      param_1[8] = *plVar12;
      __ZdlPv();
      *plVar12 = 0;
      param_1[8] = 0;
      param_1[9] = 0;
    }
    param_1[8] = lStack_f8;
    param_1[7] = lStack_100;
    param_1[9] = lStack_f0;
    pcVar13 = "x509_common_name";
    plVar9 = param_2;
    FUN_104ad0218();
    param_1[10] = (long)plVar9;
    param_1[0xb] = (long)pcVar13;
    pcVar13 = "x509_subject";
    FUN_104ad0218();
    param_1[0xc] = (long)param_2;
    param_1[0xd] = (long)pcVar13;
    plVar9 = param_2;
  }
  if (param_3 != (long *)0x0) {
    func_0x000100746c84(param_3);
    FUN_104accf28(&lStack_100);
    param_1[0x1b] = lStack_98;
    param_1[0x1a] = lStack_a0;
    param_1[0x1d] = lStack_88;
    param_1[0x1c] = lStack_90;
    *(undefined4 *)(param_1 + 0x1e) = uStack_80;
    param_1[0x13] = lStack_d8;
    param_1[0x12] = lStack_e0;
    param_1[0x15] = lStack_c8;
    param_1[0x14] = lStack_d0;
    param_1[0x17] = lStack_b8;
    param_1[0x16] = lStack_c0;
    param_1[0x19] = lStack_a8;
    param_1[0x18] = lStack_b0;
    param_1[0xf] = lStack_f8;
    param_1[0xe] = lStack_100;
    param_1[0x11] = lStack_e8;
    param_1[0x10] = lStack_f0;
    if (*(char *)((long)param_1 + 0x10f) < '\0') {
      __ZdlPv(*plVar17);
    }
    param_1[0x20] = lStack_70;
    *plVar17 = lStack_78;
    param_1[0x21] = lStack_68;
    *(undefined4 *)(param_1 + 0x22) = uStack_60;
    func_0x000100741550();
    FUN_104accf28(&lStack_100);
    param_1[0x30] = lStack_98;
    param_1[0x2f] = lStack_a0;
    param_1[0x32] = lStack_88;
    param_1[0x31] = lStack_90;
    *(undefined4 *)(param_1 + 0x33) = uStack_80;
    param_1[0x28] = lStack_d8;
    param_1[0x27] = lStack_e0;
    param_1[0x2a] = lStack_c8;
    param_1[0x29] = lStack_d0;
    param_1[0x2c] = lStack_b8;
    param_1[0x2b] = lStack_c0;
    param_1[0x2e] = lStack_a8;
    param_1[0x2d] = lStack_b0;
    param_1[0x24] = lStack_f8;
    param_1[0x23] = lStack_100;
    param_1[0x26] = lStack_e8;
    param_1[0x25] = lStack_f0;
    if (*(char *)((long)param_1 + 0x1b7) < '\0') {
      param_3 = (long *)*plVar1;
      __ZdlPv();
    }
    param_1[0x35] = lStack_70;
    *plVar1 = lStack_78;
    param_1[0x36] = lStack_68;
    *(undefined4 *)(param_1 + 0x37) = uStack_60;
    plVar9 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0x1b7) < '\0') {
    __ZdlPv(*plVar1);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(*plVar17);
  }
  if (*plVar12 != 0) {
    param_1[8] = *plVar12;
    __ZdlPv();
  }
  if (*plVar15 != 0) {
    param_1[5] = *plVar15;
    __ZdlPv();
  }
  __Unwind_Resume(plVar9);
  puVar16 = (ulong *)(extraout_x8 + 0x88);
  *puVar16 = 0;
  *(undefined4 *)(extraout_x8 + 0xa0) = 0;
  *(undefined8 *)(extraout_x8 + 0x90) = 0;
  *(undefined8 *)(extraout_x8 + 0x98) = 0;
  func_0x00010047ae00(alStack_1e8);
  if (alStack_1e8[0] != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                        ,0x2a,0,"Failed to parse uri.");
    goto LAB_104acd218;
  }
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  ppppuVar10 = (undefined8 ****)pppuStack_1b0;
  if (-1 < (char)bStack_199) {
    uStack_1a8 = (ulong)bStack_199;
    ppppuVar10 = &pppuStack_1b0;
  }
  func_0x0001004ca784(ppppuVar10,uStack_1a8,&uStack_1f8,&uStack_208);
  if (((ulong)ppppuVar10 & 1) == 0) {
    if (alStack_1e8[0] == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                          ,0x30,0,"Failed to split %s into host and port.");
      goto LAB_104acd218;
    }
    func_0x00010ae77c74(alStack_1e8);
    goto LAB_104acd25c;
  }
  uVar11 = uStack_208;
  func_0x00010082e12c(uStack_208,uStack_200,&pppuStack_220,10);
  uVar2 = uStack_200;
  uVar6 = uStack_208;
  *(undefined4 *)(extraout_x8 + 0xa0) = pppuStack_220._0_4_;
  if ((uVar11 & 1) == 0) {
    if (0x7ffffffffffffff7 < uStack_200) {
      func_0x000104a6fa5c(&pppuStack_220);
      goto LAB_104acd25c;
    }
    if (uStack_200 < 0x17) {
      uStack_210 = CONCAT17((char)uStack_200,(undefined7)uStack_210);
      ppppuVar10 = &pppuStack_220;
      if (uStack_200 != 0) goto LAB_104acd078;
    }
    else {
      uVar11 = (uStack_200 & 0xfffffffffffffff8) + 8;
      if ((uStack_200 | 7) != 0x17) {
        uVar11 = uStack_200 | 7;
      }
      ppppuVar10 = (undefined8 ****)(uVar11 + 1);
      __Znwm();
      uStack_210 = uVar11 + 1 | 0x8000000000000000;
      uStack_218 = uVar2;
      pppuStack_220 = ppppuVar10;
LAB_104acd078:
      _memmove(ppppuVar10,uVar6,uVar2);
    }
    *(undefined1 *)((long)ppppuVar10 + uVar2) = 0;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                        ,0x35,0,"Port %s is out of range or null.");
    if ((long)uStack_210 < 0) {
      __ZdlPv(pppuStack_220);
    }
  }
  uVar6 = uStack_1f0;
  uVar7 = uStack_1f8;
  if (0x7ffffffffffffff7 < uStack_1f0) {
    func_0x000104a6fa5c(&pppuStack_220);
LAB_104acd25c:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x104acd260);
    (*pcVar8)();
  }
  if (uStack_1f0 < 0x17) {
    uStack_210 = CONCAT17((char)uStack_1f0,(undefined7)uStack_210);
    ppppuVar10 = &pppuStack_220;
    if (uStack_1f0 != 0) goto LAB_104acd128;
  }
  else {
    uVar2 = (uStack_1f0 & 0xfffffffffffffff8) + 8;
    if ((uStack_1f0 | 7) != 0x17) {
      uVar2 = uStack_1f0 | 7;
    }
    ppppuVar10 = (undefined8 ****)(uVar2 + 1);
    __Znwm();
    uStack_210 = uVar2 + 1 | 0x8000000000000000;
    uStack_218 = uVar6;
    pppuStack_220 = ppppuVar10;
LAB_104acd128:
    _memmove(ppppuVar10,uVar7,uVar6);
  }
  *(undefined1 *)((long)ppppuVar10 + uVar6) = 0;
  if (*(char *)(extraout_x8 + 0x9f) < '\0') {
    __ZdlPv(*puVar16);
  }
  *(ulong *)(extraout_x8 + 0x90) = uStack_218;
  *puVar16 = (ulong)pppuStack_220;
  *(ulong *)(extraout_x8 + 0x98) = uStack_210;
  puVar3 = *(ulong **)(extraout_x8 + 0x88);
  if (-1 < *(char *)(extraout_x8 + 0x9f)) {
    puVar3 = puVar16;
  }
  FUN_104aa9678(&uStack_228,extraout_x8,puVar3,*(undefined4 *)(extraout_x8 + 0xa0));
  if (uStack_228 != 0) {
    uStack_230 = uStack_228;
    if ((uStack_228 & 1) != 0) {
      piVar14 = (int *)(uStack_228 - 1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = *piVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_104aba950(&pppuStack_220,&uStack_230);
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                        ,0x3c,0,"Address %s is not IPv4/IPv6. Error: %s");
    if ((long)uStack_210 < 0) {
      __ZdlPv(pppuStack_220);
    }
    if ((uStack_230 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_228 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
LAB_104acd218:
  plVar12 = alStack_1e8;
  func_0x00010047cac8(plVar12);
  return plVar12;
}



/* Entry: 104acd2e8; end: 104acd35f;  */

undefined8 *
FUN_104acd2e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_1107c6188;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  *puVar1 = *param_2;
  *param_2 = 0;
  FUN_104acd2e4(param_1 + 2,*puVar1);
  param_1[0x3a] = 0;
  param_1[0x3a] = *param_4;
  *param_4 = 0;
  return param_1;
}



/* Entry: 104acd360; end: 104acd527;  */

long ** FUN_104acd360(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long **pplVar5;
  int iVar6;
  long *plStack_220;
  long *plStack_218;
  long **pplStack_210;
  undefined1 auStack_208 [40];
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_108;
  char cStack_f1;
  undefined8 uStack_60;
  char cStack_49;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  func_0x000100479434(param_2,"grpc.auth_context",0x11);
  func_0x000100479434(param_2,"grpc.authorization_policy_provider",0x22);
  if (param_2 == (long *)0x0) {
    func_0x00010ae775f4(&pplStack_210,"Failed to get authorization provider.",0x25);
    iVar6 = (int)&pplStack_210;
    FUN_104acda3c(param_1);
    pplVar5 = pplStack_210;
    if (((ulong)pplStack_210 & 1) != 0) {
      func_0x00010084dad0();
      pplVar5 = pplStack_210;
    }
  }
  else {
    if (plVar4 != (long *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar1 = param_2 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 0x100000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_220 = param_2;
    plStack_218 = plVar4;
    FUN_104acd2e8(&pplStack_210,&plStack_218,0,&plStack_220);
    iVar6 = (int)&pplStack_210;
    FUN_104acda94(param_1);
    FUN_104acd9a8(auStack_40);
    if (cStack_49 < '\0') {
      __ZdlPv(uStack_60);
    }
    if (cStack_f1 < '\0') {
      __ZdlPv(uStack_108);
    }
    if (lStack_1c8 != 0) {
      lStack_1c0 = lStack_1c8;
      __ZdlPv();
    }
    if (lStack_1e0 != 0) {
      lStack_1d8 = lStack_1e0;
      __ZdlPv();
    }
    func_0x0001007402ac(auStack_208);
    FUN_104acd9a8(&plStack_220);
    pplVar5 = &plStack_218;
    func_0x0001007402ac();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pplVar5;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004bdf74(&pplStack_210);
  }
  __Unwind_Resume();
  FUN_104acd9a8(pplVar5 + 0x3a);
  if (*(char *)((long)pplVar5 + 0x1c7) < '\0') {
    __ZdlPv(pplVar5[0x36]);
  }
  if (*(char *)((long)pplVar5 + 0x11f) < '\0') {
    __ZdlPv(pplVar5[0x21]);
  }
  if (pplVar5[9] != (long *)0x0) {
    pplVar5[10] = pplVar5[9];
    __ZdlPv();
  }
  if (pplVar5[6] != (long *)0x0) {
    pplVar5[7] = pplVar5[6];
    __ZdlPv();
  }
  func_0x0001007402ac(pplVar5 + 1);
  return pplVar5;
}



/* Entry: 104acd528; end: 104acd597;  */

long FUN_104acd528(long param_1)

{
  FUN_104acd9a8(param_1 + 0x1d0);
  if (*(char *)(param_1 + 0x1c7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x1b0));
  }
  if (*(char *)(param_1 + 0x11f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x108));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  func_0x0001007402ac(param_1 + 8);
  return param_1;
}



/* Entry: 104acd598; end: 104acd6cf;  */

undefined8 FUN_104acd598(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int aiStack_60 [2];
  undefined8 uStack_58;
  char cStack_41;
  long *plStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = *param_2;
  lStack_28 = param_1 + 0x10;
  (**(code **)(**(long **)(param_1 + 0x1d0) + 0x18))(&plStack_40);
  if (plStack_38 == (long *)0x0) {
LAB_104acd600:
    if (plStack_40 != (long *)0x0) {
      (**(code **)(*plStack_40 + 0x10))(aiStack_60,plStack_40,&uStack_30);
      if (cStack_41 < '\0') {
        __ZdlPv(uStack_58);
      }
      if (aiStack_60[0] == 0) {
        uVar6 = 1;
        goto LAB_104acd630;
      }
    }
  }
  else {
    (**(code **)(*plStack_38 + 0x10))(aiStack_60,plStack_38,&uStack_30);
    iVar4 = aiStack_60[0];
    if (cStack_41 < '\0') {
      __ZdlPv(uStack_58);
    }
    if (iVar4 != 1) goto LAB_104acd600;
  }
  uVar6 = 0;
LAB_104acd630:
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 8))();
    }
  }
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_40 + 8))();
    }
  }
  return uVar6;
}



/* Entry: 104acd6d0; end: 104acd74f;  */

long * FUN_104acd6d0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[1];
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
  plVar4 = (long *)*param_1;
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



/* Entry: 104acd750; end: 104acd85b;  */

void FUN_104acd750(undefined8 *param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = param_3;
  uStack_48 = param_4;
  FUN_104acd598(param_2,&uStack_50);
  if ((param_2 & 1) == 0) {
    func_0x00010ae7761c(&uStack_40,"Unauthorized RPC request rejected.",0x22);
    FUN_104a91cc8(&uStack_58,&uStack_40);
    ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
    (*(code *)PTR___tlv_bootstrap_11340d8b8)();
    puVar6 = (ulong *)*ppuVar5;
    do {
      uVar7 = *puVar6;
      uVar1 = uVar7 + 0x10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *puVar6 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar6[2] < uVar1) {
      func_0x0001004bbee0(puVar6,0x10);
    }
    else {
      puVar6 = (ulong *)((long)puVar6 + uVar7 + 0x30);
    }
    *puVar6 = (ulong)&PTR_FUN_1107c3e30;
    puVar6[1] = uStack_58;
    *param_1 = puVar6;
    if ((uStack_40 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    plVar4 = *(long **)(param_5 + 0x18);
    uStack_40 = param_3;
    uStack_38 = param_4;
    if (plVar4 == (long *)0x0) {
      FUN_104a71f98();
      FUN_104bd46a0();
      func_0x0001004bdf74(&uStack_40);
      __Unwind_Resume();
      FUN_104acd9a8(plVar4 + 0x3a);
      if (*(char *)((long)plVar4 + 0x1c7) < '\0') {
        __ZdlPv(plVar4[0x36]);
      }
      if (*(char *)((long)plVar4 + 0x11f) < '\0') {
        __ZdlPv(plVar4[0x21]);
      }
      if (plVar4[9] != 0) {
        plVar4[10] = plVar4[9];
        __ZdlPv();
      }
      if (plVar4[6] != 0) {
        plVar4[7] = plVar4[6];
        __ZdlPv();
      }
      func_0x0001007402ac(plVar4 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar4);
      return;
    }
    (**(code **)(*plVar4 + 0x30))(param_1,plVar4,&uStack_40);
  }
  return;
}



/* Entry: 104acd85c; end: 104acd8cb;  */

void FUN_104acd85c(long param_1)

{
  FUN_104acd9a8(param_1 + 0x1d0);
  if (*(char *)(param_1 + 0x1c7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x1b0));
  }
  if (*(char *)(param_1 + 0x11f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x108));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  func_0x0001007402ac(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104acd8cc; end: 104acd8ff;  */

void FUN_104acd8cc(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 != 0 || param_1 == (long *)0x0) {
    return;
  }
  FUN_104acd900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104acd900; end: 104acd9a7;  */

long FUN_104acd900(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  plVar3 = *(long **)(param_1 + 8);
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
      FUN_104acd900();
      __ZdlPv();
    }
  }
  *(undefined8 *)(param_1 + 8) = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        FUN_104ace30c(*(long *)(param_1 + 0x10) + lVar4);
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar5 < *(ulong *)(param_1 + 0x18));
      lVar4 = *(long *)(param_1 + 0x10);
    }
    func_0x000100460314(lVar4);
  }
  func_0x0001007402ac((undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 104acd9a8; end: 104acda3b;  */

undefined8 * FUN_104acd9a8(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0xffffffff;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x20 == 1) {
      (**(code **)*plVar5)(plVar5);
    }
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 - 1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



/* Entry: 104acda3c; end: 104acda93;  */

long * FUN_104acda3c(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    func_0x00010ae77b40(param_1);
  }
  return param_1;
}



/* Entry: 104acda94; end: 104acdbdf;  */

void FUN_104acda94(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[1] = &PTR_DAT_1107c6188;
  param_1[2] = 0;
  param_1[2] = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  param_1[6] = *(undefined8 *)(param_2 + 0x28);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[3] = uVar2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[8] = *(undefined8 *)(param_2 + 0x38);
  param_1[7] = uVar2;
  param_1[9] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x50);
  param_1[10] = uVar2;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x78);
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[0xd] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  uVar5 = *(undefined8 *)(param_2 + 200);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  uVar8 = *(undefined8 *)(param_2 + 0x90);
  uVar7 = *(undefined8 *)(param_2 + 0xa8);
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x14] = *(undefined8 *)(param_2 + 0x98);
  param_1[0x13] = uVar8;
  param_1[0x1a] = uVar5;
  param_1[0x19] = uVar4;
  param_1[0x18] = uVar3;
  param_1[0x17] = uVar2;
  param_1[0x16] = uVar7;
  param_1[0x15] = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0xe8);
  uVar4 = *(undefined8 *)(param_2 + 0xe0);
  uVar3 = *(undefined8 *)(param_2 + 0xf8);
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar6 = *(undefined8 *)(param_2 + 0xd0);
  param_1[0x1c] = *(undefined8 *)(param_2 + 0xd8);
  param_1[0x1b] = uVar6;
  *(undefined4 *)(param_1 + 0x21) = uVar1;
  param_1[0x20] = uVar3;
  param_1[0x1f] = uVar2;
  param_1[0x1e] = uVar5;
  param_1[0x1d] = uVar4;
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x88);
  param_1[0x11] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x110);
  uVar2 = *(undefined8 *)(param_2 + 0x108);
  param_1[0x24] = *(undefined8 *)(param_2 + 0x118);
  param_1[0x23] = uVar3;
  param_1[0x22] = uVar2;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x120);
  uVar2 = *(undefined8 *)(param_2 + 0x128);
  param_1[0x27] = *(undefined8 *)(param_2 + 0x130);
  param_1[0x26] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x140);
  uVar2 = *(undefined8 *)(param_2 + 0x138);
  uVar5 = *(undefined8 *)(param_2 + 0x150);
  uVar4 = *(undefined8 *)(param_2 + 0x148);
  uVar6 = *(undefined8 *)(param_2 + 0x158);
  uVar8 = *(undefined8 *)(param_2 + 0x170);
  uVar7 = *(undefined8 *)(param_2 + 0x168);
  param_1[0x2d] = *(undefined8 *)(param_2 + 0x160);
  param_1[0x2c] = uVar6;
  param_1[0x2f] = uVar8;
  param_1[0x2e] = uVar7;
  param_1[0x29] = uVar3;
  param_1[0x28] = uVar2;
  param_1[0x2b] = uVar5;
  param_1[0x2a] = uVar4;
  uVar3 = *(undefined8 *)(param_2 + 0x180);
  uVar2 = *(undefined8 *)(param_2 + 0x178);
  uVar5 = *(undefined8 *)(param_2 + 400);
  uVar4 = *(undefined8 *)(param_2 + 0x188);
  uVar7 = *(undefined8 *)(param_2 + 0x1a0);
  uVar6 = *(undefined8 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x1a8);
  param_1[0x33] = uVar5;
  param_1[0x32] = uVar4;
  param_1[0x35] = uVar7;
  param_1[0x34] = uVar6;
  param_1[0x31] = uVar3;
  param_1[0x30] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x1b8);
  uVar2 = *(undefined8 *)(param_2 + 0x1b0);
  param_1[0x39] = *(undefined8 *)(param_2 + 0x1c0);
  param_1[0x38] = uVar3;
  param_1[0x37] = uVar2;
  *(undefined8 *)(param_2 + 0x1b8) = 0;
  *(undefined8 *)(param_2 + 0x1c0) = 0;
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x1c8);
  param_1[0x3b] = 0;
  param_1[0x3b] = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_2 + 0x1d0) = 0;
  *param_1 = 0;
  return;
}



/* Entry: 104acdbe0; end: 104acdcdf;  */

void FUN_104acdbe0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = *(long **)(param_2 + 8);
  func_0x0001008dd084(alStack_68,param_5);
  (**(code **)(*plVar3 + 8))(param_1,plVar3,param_3,param_4,alStack_68);
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plVar3 = alStack_68;
LAB_104acdc68:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_104acdc68;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plStack_50 = alStack_68;
  }
  else {
    if (plStack_50 == (long *)0x0) goto LAB_104acdcd8;
    lVar2 = 5;
  }
  (**(code **)(*plStack_50 + lVar2 * 8))();
LAB_104acdcd8:
  __Unwind_Resume();
  plVar1 = (long *)plVar3[1];
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008db094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,param_3);
  return;
}



/* Entry: 104acdce0; end: 104acdd6b;  */

void FUN_104acdce0(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008db094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 104acdd6c; end: 104acdd6f;  */

undefined8 * FUN_104acdd6c(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_1107c4d30;
  param_1[1] = &PTR_FUN_1107c4d88;
  if (param_1[0x16] == 0) {
    func_0x0001006153ac(param_1 + 0x14);
    if ((param_1[0x13] & 1) != 0) {
      func_0x00010084dad0();
    }
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_1107c4c40;
    param_1[1] = &PTR_FUN_1107c4c98;
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,0x3ba,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104aafc80);
  (*pcVar1)();
}



/* Entry: 104acdd70; end: 104acdd83;  */

void FUN_104acdd70(void)

{
  FUN_104aafbdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104acdd84; end: 104acdd8b;  */

void FUN_104acdd84(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  plVar3 = (long *)(lVar4 + 0x48);
  do {
    lVar6 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    return;
  }
  func_0x000107c2c17c();
  lVar6 = *(long *)(lVar4 + 0x10);
  plVar3 = (long *)**(undefined8 **)(lVar4 + 8);
  lVar4 = param_2;
  func_0x000100611dc4();
  if (lVar4 == 0) {
    FUN_104abe96c();
    if (param_2 == 0) {
      return;
    }
    puVar5 = (undefined8 *)(*plVar3 + 0x28);
  }
  else {
    puVar5 = (undefined8 *)(*plVar3 + 0x20);
    param_2 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000100611e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar3,lVar6 + 0x200,param_2);
  return;
}



/* Entry: 104acdd8c; end: 104acdddb;  */

void FUN_104acdd8c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 uStack_31;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  plVar2 = *(long **)(param_1 + 0x10);
  puVar1 = (undefined8 *)plVar2[7];
  plVar2[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  (**(code **)(*plVar2 + 8))(plVar2);
  if (param_3 == 0) {
    return;
  }
  func_0x00010bdacd14();
  pcStack_28 = FUN_104acdddc;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_104acde04(&uStack_31,plVar2,param_2);
  return;
}



/* Entry: 104acdddc; end: 104acde03;  */

void FUN_104acdddc(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_104acde04(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 104acde04; end: 104ace09f;  */

ulong * FUN_104acde04(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  ulong uStack_230;
  undefined1 auStack_228 [8];
  long *plStack_220;
  ulong auStack_218 [2];
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
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
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
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  iVar6 = (int)param_3;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_4 + 0x14) != 0) {
    func_0x00010bdacd48();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x104ace058);
    (*pcVar4)();
  }
  func_0x000100560184(auStack_228,*(undefined8 *)(param_4 + 8));
  FUN_104acd360(auStack_218,auStack_228);
  if (plStack_220 != (long *)0x0) {
    plVar1 = plStack_220 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_220 + 0x10))(plStack_220);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_220);
    }
  }
  puVar7 = *(undefined8 **)(param_3 + 8);
  if (auStack_218[0] == 0) {
    *puVar7 = &PTR_DAT_1107c6188;
    puVar7[1] = 0;
    puVar7[1] = uStack_208;
    uStack_208 = 0;
    puVar7[3] = uStack_1f8;
    puVar7[2] = uStack_200;
    puVar7[5] = uStack_1e8;
    puVar7[4] = uStack_1f0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[6] = 0;
    puVar7[7] = uStack_1d8;
    puVar7[6] = uStack_1e0;
    puVar7[8] = uStack_1d0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e0 = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[9] = 0;
    puVar7[10] = uStack_1c0;
    puVar7[9] = uStack_1c8;
    puVar7[0xb] = uStack_1b8;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1c8 = 0;
    puVar7[0xd] = uStack_1a8;
    puVar7[0xc] = uStack_1b0;
    puVar7[0xf] = uStack_198;
    puVar7[0xe] = uStack_1a0;
    puVar7[0x11] = uStack_188;
    puVar7[0x10] = uStack_190;
    puVar7[0x17] = uStack_158;
    puVar7[0x16] = uStack_160;
    puVar7[0x19] = uStack_148;
    puVar7[0x18] = uStack_150;
    puVar7[0x13] = uStack_178;
    puVar7[0x12] = uStack_180;
    puVar7[0x15] = uStack_168;
    puVar7[0x14] = uStack_170;
    *(undefined4 *)(puVar7 + 0x20) = uStack_110;
    puVar7[0x1d] = uStack_128;
    puVar7[0x1c] = uStack_130;
    puVar7[0x1f] = uStack_118;
    puVar7[0x1e] = uStack_120;
    puVar7[0x1b] = uStack_138;
    puVar7[0x1a] = uStack_140;
    puVar7[0x23] = uStack_f8;
    puVar7[0x22] = uStack_100;
    puVar7[0x21] = uStack_108;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_108 = 0;
    *(undefined4 *)(puVar7 + 0x24) = uStack_f0;
    *(undefined4 *)(puVar7 + 0x35) = uStack_68;
    puVar7[0x32] = uStack_80;
    puVar7[0x31] = uStack_88;
    puVar7[0x34] = uStack_70;
    puVar7[0x33] = uStack_78;
    puVar7[0x30] = uStack_90;
    puVar7[0x2f] = uStack_98;
    puVar7[0x2c] = uStack_b0;
    puVar7[0x2b] = uStack_b8;
    puVar7[0x2e] = uStack_a0;
    puVar7[0x2d] = uStack_a8;
    puVar7[0x28] = uStack_d0;
    puVar7[0x27] = uStack_d8;
    puVar7[0x2a] = uStack_c0;
    puVar7[0x29] = uStack_c8;
    puVar7[0x26] = uStack_e0;
    puVar7[0x25] = uStack_e8;
    puVar7[0x38] = uStack_50;
    puVar7[0x37] = uStack_58;
    puVar7[0x36] = uStack_60;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    *(undefined4 *)(puVar7 + 0x39) = uStack_48;
    puVar7[0x3a] = 0;
    puVar7[0x3a] = uStack_40;
    uStack_40 = 0;
    *param_1 = 0;
  }
  else {
    *puVar7 = &PTR_DAT_1107c0cf0;
    uStack_230 = auStack_218[0];
    if ((auStack_218[0] & 1) != 0) {
      piVar8 = (int *)(auStack_218[0] - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104addba0(param_1,&uStack_230);
    if ((uStack_230 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  puVar5 = auStack_218;
  FUN_104ace0a0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004bdf74(&uStack_230);
    FUN_104ace0a0(auStack_218);
  }
  __Unwind_Resume();
  if (*puVar5 == 0) {
    FUN_104acd9a8(puVar5 + 0x3b);
    if (*(char *)((long)puVar5 + 0x1cf) < '\0') {
      __ZdlPv(puVar5[0x37]);
    }
    if (*(char *)((long)puVar5 + 0x127) < '\0') {
      __ZdlPv(puVar5[0x22]);
    }
    if (puVar5[10] != 0) {
      puVar5[0xb] = puVar5[10];
      __ZdlPv();
    }
    if (puVar5[7] != 0) {
      puVar5[8] = puVar5[7];
      __ZdlPv();
    }
    func_0x0001007402ac(puVar5 + 2);
  }
  else if ((*puVar5 & 1) != 0) {
    func_0x00010084dad0();
  }
  return puVar5;
}



/* Entry: 104ace0a0; end: 104ace127;  */

ulong * FUN_104ace0a0(ulong *param_1)

{
  if (*param_1 == 0) {
    FUN_104acd9a8(param_1 + 0x3b);
    if (*(char *)((long)param_1 + 0x1cf) < '\0') {
      __ZdlPv(param_1[0x37]);
    }
    if (*(char *)((long)param_1 + 0x127) < '\0') {
      __ZdlPv(param_1[0x22]);
    }
    if (param_1[10] != 0) {
      param_1[0xb] = param_1[10];
      __ZdlPv();
    }
    if (param_1[7] != 0) {
      param_1[8] = param_1[7];
      __ZdlPv();
    }
    func_0x0001007402ac(param_1 + 2);
  }
  else if ((*param_1 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104ace128; end: 104ace147;  */

void FUN_104ace128(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000104ace134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 104ace148; end: 104ace18f;  */

void FUN_104ace148(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104aab120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x58))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 104ace190; end: 104ace197;  */

undefined1  [16]
FUN_104ace190(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104ace198; end: 104ace1d3;  */

void FUN_104ace198(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  func_0x000100460de4(auStack_68);
  FUN_104ace1d4(param_1);
  func_0x000100467a48(auStack_68);
  return;
}



/* Entry: 104ace1d4; end: 104ace267;  */

long * FUN_104ace1d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 uStack_21;
  
  func_0x000100748074(param_1 + 1,&uStack_21,"client_security_context",0);
  if ((param_1[2] != 0) && ((code *)param_1[3] != (code *)0x0)) {
    (*(code *)param_1[3])();
  }
  func_0x0001007402ac(param_1 + 1);
  plVar4 = (long *)*param_1;
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



/* Entry: 104ace268; end: 104ace2bf;  */

void FUN_104ace268(long param_1)

{
  undefined1 uStack_21;
  
  func_0x000100748074(param_1,&uStack_21,"server_security_context",0);
  if ((*(long *)(param_1 + 8) != 0) && (*(code **)(param_1 + 0x10) != (code *)0x0)) {
    (**(code **)(param_1 + 0x10))();
  }
  func_0x0001007402ac(param_1);
  return;
}



/* Entry: 104ace2c0; end: 104ace307;  */

void FUN_104ace2c0(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  do {
    uVar4 = *param_1;
    uVar1 = uVar4 + 0x20;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[2] < uVar1) {
    func_0x0001004bbee0(param_1,0x20);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar4 + 0x30);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 104ace308; end: 104ace30b;  */

void FUN_104ace308(long param_1)

{
  undefined1 uStack_21;
  
  func_0x000100748074(param_1,&uStack_21,"server_security_context",0);
  if ((*(long *)(param_1 + 8) != 0) && (*(code **)(param_1 + 0x10) != (code *)0x0)) {
    (**(code **)(param_1 + 0x10))();
  }
  func_0x0001007402ac(param_1);
  return;
}



/* Entry: 104ace30c; end: 104ace3b3;  */

void FUN_104ace30c(undefined8 *param_1)

{
  func_0x000100460314(*param_1);
  func_0x000100460314(param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 104ace3b4; end: 104ace413;  */

void FUN_104ace3b4(ulong *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_1 != (ulong *)0x0) && (*param_1 != 0)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = param_1[1] + lVar2;
      func_0x000104ace340();
      if (lVar1 != 0) {
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (uVar3 < *param_1);
  }
  return;
}



/* Entry: 104ace414; end: 104ace443;  */

uint FUN_104ace414(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 < param_1);
  if (param_1 < param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 104ace444; end: 104ace60f;  */

void FUN_104ace444(undefined8 *param_1,long *param_2,undefined **param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  ulong uStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  
  plVar1 = param_2 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar9 = (undefined8 *)param_2[3];
  puStack_68 = (undefined8 *)param_2[4];
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puStack_70 = puVar9;
  plStack_60 = param_2;
  uStack_58 = param_4;
  ppuStack_50 = param_3;
  if (puVar9 != puStack_68) {
    (**(code **)(*(long *)*puVar9 + 0x10))(&ppuStack_48);
    ppuStack_50 = ppuStack_48;
    ppuStack_48 = &PTR_PTR_1130a63b0;
    (**(code **)(PTR_PTR_1130a63b0 + 8))(&PTR_PTR_1130a63b0);
  }
  ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)();
  puVar6 = (ulong *)*ppuVar5;
  do {
    uVar7 = *puVar6;
    uVar2 = uVar7 + 0x30;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar4) {
      *puVar6 = uVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (puVar6[2] < uVar2) {
    func_0x0001004bbee0(puVar6,0x30);
    puVar9 = puStack_70;
  }
  else {
    puVar6 = (ulong *)((long)puVar6 + uVar7 + 0x30);
  }
  *puVar6 = (ulong)&PTR_FUN_1107c63c8;
  puVar6[1] = (ulong)puVar9;
  puVar6[2] = (ulong)puStack_68;
  puVar6[4] = uStack_58;
  puVar6[3] = (ulong)plStack_60;
  puVar6[5] = (ulong)ppuStack_50;
  ppuStack_50 = (undefined **)0x0;
  if (puVar9 != puStack_68) {
    ppuStack_50 = &PTR_PTR_1130a63b0;
  }
  plStack_60 = (long *)0x0;
  *param_1 = puVar6;
  FUN_104ace610(&puStack_70);
  do {
    lVar8 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar8 + -1 == 0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}



/* Entry: 104ace610; end: 104ace67f;  */

long * FUN_104ace610(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*param_1 != param_1[1]) {
    (**(code **)(*(long *)param_1[4] + 8))();
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
  return param_1;
}



/* Entry: 104ace680; end: 104ace71b;  */

void FUN_104ace680(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((bRam00000001136a22a0 & 1) == 0) {
    iVar1 = 0x136a22a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104ab8e38(0x1136a2298,&DAT_10f479fae,9);
      ___cxa_guard_release(0x1136a22a0);
    }
  }
  if ((char)*(byte *)((long)puRam00000001136a2298 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*puRam00000001136a2298;
    uVar3 = puRam00000001136a2298[1];
  }
  else {
    uVar3 = (ulong)*(byte *)((long)puRam00000001136a2298 + 0x17);
    puVar2 = puRam00000001136a2298;
  }
  *param_1 = puVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 104ace71c; end: 104ace9bb;  */

long ****** FUN_104ace71c(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  code *pcVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  long ****pppplVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined **ppuVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 ****ppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 *puVar21;
  long lVar22;
  long *****ppppplVar23;
  long *****ppppplVar24;
  long lVar25;
  ulong uVar26;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *plStack_270;
  undefined8 ****ppppuStack_268;
  long alStack_260 [2];
  long alStack_250 [2];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  undefined8 *****pppppuStack_210;
  long *****ppppplStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  long *****ppppplStack_1e8;
  long *****ppppplStack_1e0;
  long *****ppppplStack_1d8;
  long *****ppppplStack_1d0;
  long *****ppppplStack_1c8;
  undefined8 *puStack_1c0;
  long lStack_1b8;
  undefined8 *****pppppuStack_1b0;
  long *****ppppplStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  long *****ppppplStack_188;
  long *****ppppplStack_180;
  long *****ppppplStack_178;
  long *****ppppplStack_170;
  long *****ppppplStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *****pppppuStack_150;
  long *****ppppplStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 *****pppppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  long ***ppplStack_110;
  long **pplStack_108;
  long ***ppplStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *****pppppuStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long ****pppplStack_98;
  long ****pppplStack_90;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ****pppplStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_110 = (long ***)0x0;
  pplStack_108 = (long **)0x0;
  ppplStack_100 = (long ***)0x0;
  puVar21 = *(undefined8 **)(param_2 + 0x18);
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar21 != puVar2) {
    unaff_x23 = 0xaaaaaaaaaaaaaaa;
    unaff_x24 = 0xaaaaaaaaaaaaaaab;
    unaff_x25 = 0x555555555555555;
    unaff_x26 = 0x18;
    do {
      (**(code **)(*(long *)*puVar21 + 0x20))(&pppppuStack_c8);
      if (pplStack_108 < ppplStack_100) {
        pplStack_108[2] = (long *)ppplStack_b8;
        pplStack_108[1] = (long *)ppplStack_c0;
        *pplStack_108 = (long *)pppppuStack_c8;
        pplStack_108 = pplStack_108 + 3;
      }
      else {
        lVar22 = (long)pplStack_108 - (long)ppplStack_110 >> 3;
        uVar26 = lVar22 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar26) {
          FUN_104a9439c(&ppplStack_110);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x104ace958);
          (*pcVar7)();
        }
        lVar25 = (long)ppplStack_100 - (long)ppplStack_110 >> 3;
        uVar17 = lVar25 * 0x5555555555555556;
        if (uVar17 < uVar26 || uVar17 - uVar26 == 0) {
          uVar17 = uVar26;
        }
        if (0x555555555555554 < (ulong)(lVar25 * -0x5555555555555555)) {
          uVar17 = unaff_x23;
        }
        pppplStack_78 = &ppplStack_100;
        if (uVar17 == 0) {
          ppppplVar23 = (long *****)0x0;
        }
        else {
          ppppplVar23 = (long *****)&ppplStack_100;
          func_0x0001004d69d4();
        }
        ppppplVar24 = ppppplVar23 + lVar22;
        pppplStack_80 = (long ****)(ppppplVar23 + uVar17 * 3);
        pppplStack_98 = (long ****)ppppplVar23;
        pppplStack_90 = (long ****)ppppplVar24;
        ppppplVar24[2] = (long ****)ppplStack_b8;
        ppppplVar24[1] = (long ****)ppplStack_c0;
        *ppppplVar24 = (long ****)pppppuStack_c8;
        ppplStack_c0 = (long ***)0x0;
        ppplStack_b8 = (long ***)0x0;
        pppppuStack_c8 = (undefined8 *****)0x0;
        pppplStack_88 = (long ****)(ppppplVar24 + 3);
        func_0x00010004824c(&ppplStack_110,&pppplStack_98);
        pplVar6 = pplStack_108;
        func_0x0001000482e8(&pppplStack_98);
        pplStack_108 = pplVar6;
        if ((long)ppplStack_b8 < 0) {
          __ZdlPv(pppppuStack_c8);
        }
      }
      puVar21 = puVar21 + 1;
    } while (puVar21 != puVar2);
  }
  pppplStack_98 = (long ****)0x10f23acac;
  pppplStack_90 = (long ****)0x19;
  func_0x0001004d6a18(&pppppuStack_128,ppplStack_110,pplStack_108,&DAT_10f68e8ee,1);
  ppplStack_c0 = (long ***)uStack_120;
  pppppuStack_c8 = pppppuStack_128;
  if (-1 < (char)bStack_111) {
    ppplStack_c0 = (long ***)(ulong)bStack_111;
    pppppuStack_c8 = &pppppuStack_128;
  }
  puStack_f8 = &DAT_10f2da10d;
  uStack_f0 = 1;
  ppppppuVar12 = &pppppuStack_c8;
  ppuVar14 = &puStack_f8;
  func_0x000100066c24(param_1,&pppplStack_98);
  if ((char)bStack_111 < '\0') {
    __ZdlPv(pppppuStack_128);
  }
  pppplStack_98 = &ppplStack_110;
  pppppplVar8 = (long ******)&pppplStack_98;
  func_0x0001004d6bcc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppppplVar8;
  }
  ___stack_chk_fail();
  if ((char)bStack_111 < '\0') {
    __ZdlPv(pppppuStack_128);
  }
  pppppuStack_c8 = (undefined8 *****)&ppplStack_110;
  func_0x0001004d6bcc(&pppppuStack_c8);
  pppppplVar9 = pppppplVar8;
  __Unwind_Resume();
  puStack_160 = puVar2;
  puStack_158 = puVar21;
  pppppuStack_150 = &pppppuStack_128;
  ppppplStack_148 = (long *****)pppppplVar8;
  puStack_140 = &stack0xfffffffffffffff0;
  if (((ulong)ppuVar14 & 1) != 0) {
    pcStack_138 = FUN_104ace9bc;
    pppppuVar20 = *ppppppuVar12;
    ppppuVar19 = pppppuVar20[3];
    if (pppppuVar20[4] != ppppuVar19) {
      lVar22 = 0;
      uVar26 = 0;
      pppppplVar8 = pppppplVar9 + 3;
      do {
        pppppplVar9 = pppppplVar8;
        FUN_104aceb28(pppppplVar8,(long)ppppuVar19 + lVar22);
        uVar26 = uVar26 + 1;
        ppppuVar19 = pppppuVar20[3];
        lVar22 = lVar22 + 8;
      } while (uVar26 < (ulong)((long)pppppuVar20[4] - (long)ppppuVar19 >> 3));
    }
    return pppppplVar9;
  }
  pppppplVar8 = pppppplVar9 + 3;
  pcStack_138 = FUN_104ace9bc;
  pppppplVar10 = pppppplVar9 + 5;
  ppppplVar23 = pppppplVar9[4];
  if (ppppplVar23 < *pppppplVar10) {
    *ppppplVar23 = (long ****)0x0;
    ppppplVar24 = ppppplVar23 + 1;
    *ppppplVar23 = (long ****)*ppppppuVar12;
    *ppppppuVar12 = (undefined8 *****)0x0;
    pppppplVar9[4] = ppppplVar24;
  }
  else {
    lVar22 = (long)ppppplVar23 - (long)*pppppplVar8 >> 3;
    uVar26 = lVar22 + 1;
    if (uVar26 >> 0x3d != 0) {
      ppppppuVar13 = ppppppuVar12;
      FUN_104acf71c();
      func_0x000104acf88c(&ppppplStack_188);
      pppppplVar10 = pppppplVar8;
      __Unwind_Resume();
      pcStack_198 = FUN_104aceb28;
      pppuStack_200 = &ppuStack_1a0;
      pppppplVar9 = pppppplVar10 + 2;
      ppppplVar23 = pppppplVar10[1];
      if (ppppplVar23 < *pppppplVar9) {
        *ppppplVar23 = (long ****)0x0;
        pppppuVar20 = (undefined8 *****)0x0;
        if (*ppppppuVar13 != (undefined8 *****)0x0) {
          pppppuVar20 = *ppppppuVar13 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppuVar20,0x10);
            if (bVar5) {
              *pppppuVar20 = (undefined8 ****)((long)*pppppuVar20 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          pppppuVar20 = *ppppppuVar13;
        }
        ppppplVar24 = ppppplVar23 + 1;
        *ppppplVar23 = (long ****)pppppuVar20;
        pppppplVar10[1] = ppppplVar24;
      }
      else {
        lVar25 = (long)ppppplVar23 - (long)*pppppplVar10 >> 3;
        uVar26 = lVar25 + 1;
        puStack_1c0 = puVar2;
        lStack_1b8 = lVar22;
        pppppuStack_1b0 = ppppppuVar12;
        ppppplStack_1a8 = (long *****)pppppplVar8;
        ppuStack_1a0 = &puStack_140;
        if (uVar26 >> 0x3d != 0) {
          ppppppuVar12 = ppppppuVar13;
          FUN_104acf71c();
          func_0x000104acf88c(&ppppplStack_1e8);
          pppppplVar8 = pppppplVar10;
          __Unwind_Resume();
          pcStack_1f8 = FUN_104acec58;
          uStack_240 = unaff_x26;
          uStack_238 = unaff_x25;
          uStack_230 = unaff_x24;
          uStack_228 = unaff_x23;
          puStack_220 = puVar2;
          lStack_218 = lVar25;
          pppppuStack_210 = ppppppuVar13;
          ppppplStack_208 = (long *****)pppppplVar10;
          *(undefined4 *)(pppppplVar8 + 2) = 2;
          pppppplVar9 = pppppplVar8 + 3;
          *pppppplVar9 = (long *****)0x0;
          *pppppplVar8 = (long *****)&PTR_FUN_1107c62f0;
          pppppplVar8[1] = (long *****)0x1;
          pppppplVar8[4] = (long *****)0x0;
          pppppplVar8[5] = (long *****)0x0;
          (*(code *)(**ppppppuVar12)[5])(alStack_250);
          FUN_104ace680(alStack_260);
          lVar25 = alStack_250[0];
          lVar22 = alStack_260[0];
          (**(code **)(*(long *)*ppuVar14 + 0x28))(alStack_250);
          FUN_104ace680(alStack_260);
          if (lVar25 == lVar22) {
            lVar16 = (long)(*ppppppuVar12)[4] - (long)(*ppppppuVar12)[3] >> 3;
          }
          else {
            lVar16 = 1;
          }
          if (alStack_250[0] == alStack_260[0]) {
            lVar18 = *(long *)(*ppuVar14 + 0x20) - *(long *)(*ppuVar14 + 0x18) >> 3;
          }
          else {
            lVar18 = 1;
          }
          FUN_104aceed8(pppppplVar9,lVar18 + lVar16);
          ppppuStack_268 = *ppppppuVar12;
          *ppppppuVar12 = (undefined8 *****)0x0;
          FUN_104ace9bc(pppppplVar8,&ppppuStack_268,lVar25 == lVar22);
          if ((undefined8 *****)ppppuStack_268 != (undefined8 *****)0x0) {
            pppppuVar20 = (undefined8 *****)(ppppuStack_268 + 1);
            do {
              ppppuVar19 = *pppppuVar20;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppuVar20,0x10);
              if (bVar5) {
                *pppppuVar20 = (undefined8 ****)((long)ppppuVar19 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((undefined8 ****)((long)ppppuVar19 + -1) == (undefined8 ****)0x0) {
              (*(code *)(*ppppuStack_268)[1])();
            }
          }
          plStack_270 = (long *)*ppuVar14;
          *ppuVar14 = (undefined *)0x0;
          FUN_104ace9bc(pppppplVar8,&plStack_270,alStack_250[0] == alStack_260[0]);
          if (plStack_270 != (long *)0x0) {
            plVar1 = plStack_270 + 1;
            do {
              lVar22 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar22 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar22 + -1 == 0) {
              (**(code **)(*plStack_270 + 8))();
            }
          }
          *(undefined4 *)((long)pppppplVar8 + 0x14) = 0;
          ppppplVar23 = pppppplVar8[3];
          if (pppppplVar8[4] != ppppplVar23) {
            uVar26 = 0;
            do {
              iVar3 = *(int *)((long)pppppplVar8 + 0x14);
              pppplVar11 = ppppplVar23[uVar26];
              (*(code *)(*pppplVar11)[3])();
              if (iVar3 < (int)pppplVar11) {
                pppplVar11 = (*pppppplVar9)[uVar26];
                (*(code *)(*pppplVar11)[3])();
                *(int *)((long)pppppplVar8 + 0x14) = (int)pppplVar11;
              }
              uVar26 = uVar26 + 1;
              ppppplVar23 = pppppplVar8[3];
            } while (uVar26 < (ulong)((long)pppppplVar8[4] - (long)ppppplVar23 >> 3));
          }
          return pppppplVar8;
        }
        uVar15 = (long)*pppppplVar9 - (long)*pppppplVar10;
        uVar17 = (long)uVar15 >> 2;
        if (uVar17 <= uVar26) {
          uVar17 = uVar26;
        }
        if (0x7ffffffffffffff7 < uVar15) {
          uVar17 = 0x1fffffffffffffff;
        }
        ppppplStack_1c8 = (long *****)pppppplVar9;
        if (uVar17 == 0) {
          ppppplStack_1e8 = (long *****)0x0;
        }
        else {
          FUN_104acf730();
          ppppplStack_1e8 = (long *****)pppppplVar9;
        }
        ppppplStack_1e0 = ppppplStack_1e8 + lVar25;
        ppppplStack_1d0 = ppppplStack_1e8 + uVar17;
        *ppppplStack_1e0 = (long ****)0x0;
        ppppplVar23 = (long *****)0x0;
        if (*ppppppuVar13 != (undefined8 *****)0x0) {
          pppppuVar20 = *ppppppuVar13 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppuVar20,0x10);
            if (bVar5) {
              *pppppuVar20 = (undefined8 ****)((long)*pppppuVar20 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppppplVar23 = *ppppppuVar13;
        }
        ppppplStack_1d8 = ppppplStack_1e0 + 1;
        *ppppplStack_1e0 = (long ****)ppppplVar23;
        FUN_104acf6a8(pppppplVar10,&ppppplStack_1e8);
        ppppplVar24 = pppppplVar10[1];
        pppppplVar9 = &ppppplStack_1e8;
        func_0x000104acf88c(pppppplVar9);
      }
      pppppplVar10[1] = ppppplVar24;
      return pppppplVar9;
    }
    uVar15 = (long)*pppppplVar10 - (long)*pppppplVar8;
    uVar17 = (long)uVar15 >> 2;
    if (uVar17 <= uVar26) {
      uVar17 = uVar26;
    }
    if (0x7ffffffffffffff7 < uVar15) {
      uVar17 = 0x1fffffffffffffff;
    }
    ppppplStack_168 = (long *****)pppppplVar10;
    if (uVar17 == 0) {
      ppppplStack_188 = (long *****)0x0;
    }
    else {
      FUN_104acf730();
      ppppplStack_188 = (long *****)pppppplVar10;
    }
    ppppplStack_180 = ppppplStack_188 + lVar22;
    ppppplStack_170 = ppppplStack_188 + uVar17;
    *ppppplStack_180 = (long ****)0x0;
    ppppplStack_178 = ppppplStack_180 + 1;
    *ppppplStack_180 = (long ****)*ppppppuVar12;
    *ppppppuVar12 = (undefined8 *****)0x0;
    FUN_104acf6a8(pppppplVar8,&ppppplStack_188);
    ppppplVar24 = pppppplVar9[4];
    pppppplVar10 = &ppppplStack_188;
    func_0x000104acf88c(pppppplVar10);
  }
  pppppplVar9[4] = ppppplVar24;
  return pppppplVar10;
}



/* Entry: 104ace9bc; end: 104acea27;  */

long ****** FUN_104ace9bc(long ******param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long ******pppppplVar5;
  long ******pppppplVar6;
  ulong uVar7;
  long ****pppplVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *****ppppplVar13;
  long lVar14;
  long *****ppppplVar15;
  ulong uVar16;
  long *plStack_140;
  long *plStack_138;
  long alStack_130 [2];
  long alStack_120 [2];
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  long *****ppppplStack_a8;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_58;
  long *****ppppplStack_50;
  long *****ppppplStack_48;
  long *****ppppplStack_40;
  long *****ppppplStack_38;
  
  if (((ulong)param_3 & 1) != 0) {
    lVar11 = *param_2;
    lVar14 = *(long *)(lVar11 + 0x18);
    if (*(long *)(lVar11 + 0x20) != lVar14) {
      lVar12 = 0;
      uVar16 = 0;
      pppppplVar5 = param_1 + 3;
      do {
        param_1 = pppppplVar5;
        FUN_104aceb28(pppppplVar5,lVar14 + lVar12);
        uVar16 = uVar16 + 1;
        lVar14 = *(long *)(lVar11 + 0x18);
        lVar12 = lVar12 + 8;
      } while (uVar16 < (ulong)(*(long *)(lVar11 + 0x20) - lVar14 >> 3));
    }
    return param_1;
  }
  pppppplVar5 = param_1 + 3;
  pppppplVar6 = param_1 + 5;
  ppppplVar13 = param_1[4];
  if (ppppplVar13 < *pppppplVar6) {
    *ppppplVar13 = (long ****)0x0;
    ppppplVar15 = ppppplVar13 + 1;
    *ppppplVar13 = (long ****)*param_2;
    *param_2 = 0;
    param_1[4] = ppppplVar15;
  }
  else {
    lVar14 = (long)ppppplVar13 - (long)*pppppplVar5 >> 3;
    uVar16 = lVar14 + 1;
    if (uVar16 >> 0x3d != 0) {
      FUN_104acf71c();
      func_0x000104acf88c(&ppppplStack_58);
      __Unwind_Resume();
      pppppplVar6 = pppppplVar5 + 2;
      ppppplVar13 = pppppplVar5[1];
      if (ppppplVar13 < *pppppplVar6) {
        *ppppplVar13 = (long ****)0x0;
        pppplVar8 = (long ****)0x0;
        if (*param_2 != 0) {
          plVar1 = (long *)(*param_2 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          pppplVar8 = (long ****)*param_2;
        }
        ppppplVar15 = ppppplVar13 + 1;
        *ppppplVar13 = pppplVar8;
        pppppplVar5[1] = ppppplVar15;
      }
      else {
        lVar14 = (long)ppppplVar13 - (long)*pppppplVar5 >> 3;
        uVar16 = lVar14 + 1;
        if (uVar16 >> 0x3d != 0) {
          FUN_104acf71c();
          func_0x000104acf88c(&ppppplStack_b8);
          __Unwind_Resume();
          *(undefined4 *)(pppppplVar5 + 2) = 2;
          pppppplVar6 = pppppplVar5 + 3;
          *pppppplVar6 = (long *****)0x0;
          *pppppplVar5 = (long *****)&PTR_FUN_1107c62f0;
          pppppplVar5[1] = (long *****)0x1;
          pppppplVar5[4] = (long *****)0x0;
          pppppplVar5[5] = (long *****)0x0;
          (**(code **)(*(long *)*param_2 + 0x28))(alStack_120);
          FUN_104ace680(alStack_130);
          lVar11 = alStack_120[0];
          lVar14 = alStack_130[0];
          (**(code **)(*(long *)*param_3 + 0x28))(alStack_120);
          FUN_104ace680(alStack_130);
          if (lVar11 == lVar14) {
            lVar12 = *(long *)(*param_2 + 0x20) - *(long *)(*param_2 + 0x18) >> 3;
          }
          else {
            lVar12 = 1;
          }
          if (alStack_120[0] == alStack_130[0]) {
            lVar10 = *(long *)(*param_3 + 0x20) - *(long *)(*param_3 + 0x18) >> 3;
          }
          else {
            lVar10 = 1;
          }
          FUN_104aceed8(pppppplVar6,lVar10 + lVar12);
          plStack_138 = (long *)*param_2;
          *param_2 = 0;
          FUN_104ace9bc(pppppplVar5,&plStack_138,lVar11 == lVar14);
          if (plStack_138 != (long *)0x0) {
            plVar1 = plStack_138 + 1;
            do {
              lVar14 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar14 + -1 == 0) {
              (**(code **)(*plStack_138 + 8))();
            }
          }
          plStack_140 = (long *)*param_3;
          *param_3 = 0;
          FUN_104ace9bc(pppppplVar5,&plStack_140,alStack_120[0] == alStack_130[0]);
          if (plStack_140 != (long *)0x0) {
            plVar1 = plStack_140 + 1;
            do {
              lVar14 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar14 + -1 == 0) {
              (**(code **)(*plStack_140 + 8))();
            }
          }
          *(undefined4 *)((long)pppppplVar5 + 0x14) = 0;
          ppppplVar13 = pppppplVar5[3];
          if (pppppplVar5[4] != ppppplVar13) {
            uVar16 = 0;
            do {
              iVar2 = *(int *)((long)pppppplVar5 + 0x14);
              pppplVar8 = ppppplVar13[uVar16];
              (*(code *)(*pppplVar8)[3])();
              if (iVar2 < (int)pppplVar8) {
                pppplVar8 = (*pppppplVar6)[uVar16];
                (*(code *)(*pppplVar8)[3])();
                *(int *)((long)pppppplVar5 + 0x14) = (int)pppplVar8;
              }
              uVar16 = uVar16 + 1;
              ppppplVar13 = pppppplVar5[3];
            } while (uVar16 < (ulong)((long)pppppplVar5[4] - (long)ppppplVar13 >> 3));
          }
          return pppppplVar5;
        }
        uVar7 = (long)*pppppplVar6 - (long)*pppppplVar5;
        uVar9 = (long)uVar7 >> 2;
        if (uVar9 <= uVar16) {
          uVar9 = uVar16;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar9 = 0x1fffffffffffffff;
        }
        ppppplStack_98 = (long *****)pppppplVar6;
        if (uVar9 == 0) {
          ppppplStack_b8 = (long *****)0x0;
        }
        else {
          FUN_104acf730();
          ppppplStack_b8 = (long *****)pppppplVar6;
        }
        ppppplStack_b0 = ppppplStack_b8 + lVar14;
        ppppplStack_a0 = ppppplStack_b8 + uVar9;
        *ppppplStack_b0 = (long ****)0x0;
        ppppplVar13 = (long *****)0x0;
        if (*param_2 != 0) {
          plVar1 = (long *)(*param_2 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          ppppplVar13 = (long *****)*param_2;
        }
        ppppplStack_a8 = ppppplStack_b0 + 1;
        *ppppplStack_b0 = (long ****)ppppplVar13;
        FUN_104acf6a8(pppppplVar5,&ppppplStack_b8);
        ppppplVar15 = pppppplVar5[1];
        pppppplVar6 = &ppppplStack_b8;
        func_0x000104acf88c(pppppplVar6);
      }
      pppppplVar5[1] = ppppplVar15;
      return pppppplVar6;
    }
    uVar7 = (long)*pppppplVar6 - (long)*pppppplVar5;
    uVar9 = (long)uVar7 >> 2;
    if (uVar9 <= uVar16) {
      uVar9 = uVar16;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar9 = 0x1fffffffffffffff;
    }
    ppppplStack_38 = (long *****)pppppplVar6;
    if (uVar9 == 0) {
      ppppplStack_58 = (long *****)0x0;
    }
    else {
      FUN_104acf730();
      ppppplStack_58 = (long *****)pppppplVar6;
    }
    ppppplStack_50 = ppppplStack_58 + lVar14;
    ppppplStack_40 = ppppplStack_58 + uVar9;
    *ppppplStack_50 = (long ****)0x0;
    ppppplStack_48 = ppppplStack_50 + 1;
    *ppppplStack_50 = (long ****)*param_2;
    *param_2 = 0;
    FUN_104acf6a8(pppppplVar5,&ppppplStack_58);
    ppppplVar15 = param_1[4];
    pppppplVar6 = &ppppplStack_58;
    func_0x000104acf88c(pppppplVar6);
  }
  param_1[4] = ppppplVar15;
  return pppppplVar6;
}



/* Entry: 104acea28; end: 104aceb27;  */

long ****** FUN_104acea28(long ******param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long ******pppppplVar6;
  ulong uVar7;
  long ****pppplVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *****ppppplVar12;
  long lVar13;
  long *****ppppplVar14;
  ulong uVar15;
  long *plStack_140;
  long *plStack_138;
  long alStack_130 [2];
  long alStack_120 [2];
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  long *****ppppplStack_a8;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_58;
  long *****ppppplStack_50;
  long *****ppppplStack_48;
  long *****ppppplStack_40;
  long *****ppppplStack_38;
  
  pppppplVar6 = param_1 + 2;
  ppppplVar12 = param_1[1];
  if (ppppplVar12 < *pppppplVar6) {
    *ppppplVar12 = (long ****)0x0;
    ppppplVar14 = ppppplVar12 + 1;
    *ppppplVar12 = (long ****)*param_2;
    *param_2 = 0;
    param_1[1] = ppppplVar14;
  }
  else {
    lVar13 = (long)ppppplVar12 - (long)*param_1 >> 3;
    uVar15 = lVar13 + 1;
    if (uVar15 >> 0x3d != 0) {
      FUN_104acf71c();
      func_0x000104acf88c(&ppppplStack_58);
      __Unwind_Resume();
      pppppplVar6 = param_1 + 2;
      ppppplVar12 = param_1[1];
      if (ppppplVar12 < *pppppplVar6) {
        *ppppplVar12 = (long ****)0x0;
        pppplVar8 = (long ****)0x0;
        if (*param_2 != 0) {
          plVar1 = (long *)(*param_2 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          pppplVar8 = (long ****)*param_2;
        }
        ppppplVar14 = ppppplVar12 + 1;
        *ppppplVar12 = pppplVar8;
        param_1[1] = ppppplVar14;
      }
      else {
        lVar13 = (long)ppppplVar12 - (long)*param_1 >> 3;
        uVar15 = lVar13 + 1;
        if (uVar15 >> 0x3d != 0) {
          FUN_104acf71c();
          func_0x000104acf88c(&ppppplStack_b8);
          __Unwind_Resume();
          *(undefined4 *)(param_1 + 2) = 2;
          pppppplVar6 = param_1 + 3;
          *pppppplVar6 = (long *****)0x0;
          *param_1 = (long *****)&PTR_FUN_1107c62f0;
          param_1[1] = (long *****)0x1;
          param_1[4] = (long *****)0x0;
          param_1[5] = (long *****)0x0;
          (**(code **)(*(long *)*param_2 + 0x28))(alStack_120);
          FUN_104ace680(alStack_130);
          lVar5 = alStack_120[0];
          lVar13 = alStack_130[0];
          (**(code **)(*(long *)*param_3 + 0x28))(alStack_120);
          FUN_104ace680(alStack_130);
          if (lVar5 == lVar13) {
            lVar9 = *(long *)(*param_2 + 0x20) - *(long *)(*param_2 + 0x18) >> 3;
          }
          else {
            lVar9 = 1;
          }
          if (alStack_120[0] == alStack_130[0]) {
            lVar11 = *(long *)(*param_3 + 0x20) - *(long *)(*param_3 + 0x18) >> 3;
          }
          else {
            lVar11 = 1;
          }
          FUN_104aceed8(pppppplVar6,lVar11 + lVar9);
          plStack_138 = (long *)*param_2;
          *param_2 = 0;
          FUN_104ace9bc(param_1,&plStack_138,lVar5 == lVar13);
          if (plStack_138 != (long *)0x0) {
            plVar1 = plStack_138 + 1;
            do {
              lVar13 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar13 + -1 == 0) {
              (**(code **)(*plStack_138 + 8))();
            }
          }
          plStack_140 = (long *)*param_3;
          *param_3 = 0;
          FUN_104ace9bc(param_1,&plStack_140,alStack_120[0] == alStack_130[0]);
          if (plStack_140 != (long *)0x0) {
            plVar1 = plStack_140 + 1;
            do {
              lVar13 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar13 + -1 == 0) {
              (**(code **)(*plStack_140 + 8))();
            }
          }
          *(undefined4 *)((long)param_1 + 0x14) = 0;
          ppppplVar12 = param_1[3];
          if (param_1[4] != ppppplVar12) {
            uVar15 = 0;
            do {
              iVar2 = *(int *)((long)param_1 + 0x14);
              pppplVar8 = ppppplVar12[uVar15];
              (*(code *)(*pppplVar8)[3])();
              if (iVar2 < (int)pppplVar8) {
                pppplVar8 = (*pppppplVar6)[uVar15];
                (*(code *)(*pppplVar8)[3])();
                *(int *)((long)param_1 + 0x14) = (int)pppplVar8;
              }
              uVar15 = uVar15 + 1;
              ppppplVar12 = param_1[3];
            } while (uVar15 < (ulong)((long)param_1[4] - (long)ppppplVar12 >> 3));
          }
          return param_1;
        }
        uVar7 = (long)*pppppplVar6 - (long)*param_1;
        uVar10 = (long)uVar7 >> 2;
        if (uVar10 <= uVar15) {
          uVar10 = uVar15;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar10 = 0x1fffffffffffffff;
        }
        ppppplStack_98 = (long *****)pppppplVar6;
        if (uVar10 == 0) {
          ppppplStack_b8 = (long *****)0x0;
        }
        else {
          FUN_104acf730();
          ppppplStack_b8 = (long *****)pppppplVar6;
        }
        ppppplStack_b0 = ppppplStack_b8 + lVar13;
        ppppplStack_a0 = ppppplStack_b8 + uVar10;
        *ppppplStack_b0 = (long ****)0x0;
        ppppplVar12 = (long *****)0x0;
        if (*param_2 != 0) {
          plVar1 = (long *)(*param_2 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          ppppplVar12 = (long *****)*param_2;
        }
        ppppplStack_a8 = ppppplStack_b0 + 1;
        *ppppplStack_b0 = (long ****)ppppplVar12;
        FUN_104acf6a8(param_1,&ppppplStack_b8);
        ppppplVar14 = param_1[1];
        pppppplVar6 = &ppppplStack_b8;
        func_0x000104acf88c(pppppplVar6);
      }
      param_1[1] = ppppplVar14;
      return pppppplVar6;
    }
    uVar7 = (long)*pppppplVar6 - (long)*param_1;
    uVar10 = (long)uVar7 >> 2;
    if (uVar10 <= uVar15) {
      uVar10 = uVar15;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar10 = 0x1fffffffffffffff;
    }
    ppppplStack_38 = (long *****)pppppplVar6;
    if (uVar10 == 0) {
      ppppplStack_58 = (long *****)0x0;
    }
    else {
      FUN_104acf730();
      ppppplStack_58 = (long *****)pppppplVar6;
    }
    ppppplStack_50 = ppppplStack_58 + lVar13;
    ppppplStack_40 = ppppplStack_58 + uVar10;
    *ppppplStack_50 = (long ****)0x0;
    ppppplStack_48 = ppppplStack_50 + 1;
    *ppppplStack_50 = (long ****)*param_2;
    *param_2 = 0;
    FUN_104acf6a8(param_1,&ppppplStack_58);
    ppppplVar14 = param_1[1];
    pppppplVar6 = &ppppplStack_58;
    func_0x000104acf88c(pppppplVar6);
  }
  param_1[1] = ppppplVar14;
  return pppppplVar6;
}



/* Entry: 104aceb28; end: 104acec57;  */

long ****** FUN_104aceb28(long ******param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long ******pppppplVar6;
  long ****pppplVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *****ppppplVar12;
  long lVar13;
  long *****ppppplVar14;
  ulong uVar15;
  long *plStack_e0;
  long *plStack_d8;
  long alStack_d0 [2];
  long alStack_c0 [2];
  long *****ppppplStack_58;
  long *****ppppplStack_50;
  long *****ppppplStack_48;
  long *****ppppplStack_40;
  long *****ppppplStack_38;
  
  pppppplVar6 = param_1 + 2;
  ppppplVar12 = param_1[1];
  if (ppppplVar12 < *pppppplVar6) {
    *ppppplVar12 = (long ****)0x0;
    pppplVar7 = (long ****)0x0;
    if (*param_2 != 0) {
      plVar1 = (long *)(*param_2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppplVar7 = (long ****)*param_2;
    }
    ppppplVar14 = ppppplVar12 + 1;
    *ppppplVar12 = pppplVar7;
    param_1[1] = ppppplVar14;
  }
  else {
    lVar13 = (long)ppppplVar12 - (long)*param_1 >> 3;
    uVar15 = lVar13 + 1;
    if (uVar15 >> 0x3d != 0) {
      FUN_104acf71c();
      func_0x000104acf88c(&ppppplStack_58);
      __Unwind_Resume();
      *(undefined4 *)(param_1 + 2) = 2;
      pppppplVar6 = param_1 + 3;
      *pppppplVar6 = (long *****)0x0;
      *param_1 = (long *****)&PTR_FUN_1107c62f0;
      param_1[1] = (long *****)0x1;
      param_1[4] = (long *****)0x0;
      param_1[5] = (long *****)0x0;
      (**(code **)(*(long *)*param_2 + 0x28))(alStack_c0);
      FUN_104ace680(alStack_d0);
      lVar5 = alStack_c0[0];
      lVar13 = alStack_d0[0];
      (**(code **)(*(long *)*param_3 + 0x28))(alStack_c0);
      FUN_104ace680(alStack_d0);
      if (lVar5 == lVar13) {
        lVar9 = *(long *)(*param_2 + 0x20) - *(long *)(*param_2 + 0x18) >> 3;
      }
      else {
        lVar9 = 1;
      }
      if (alStack_c0[0] == alStack_d0[0]) {
        lVar11 = *(long *)(*param_3 + 0x20) - *(long *)(*param_3 + 0x18) >> 3;
      }
      else {
        lVar11 = 1;
      }
      FUN_104aceed8(pppppplVar6,lVar11 + lVar9);
      plStack_d8 = (long *)*param_2;
      *param_2 = 0;
      FUN_104ace9bc(param_1,&plStack_d8,lVar5 == lVar13);
      if (plStack_d8 != (long *)0x0) {
        plVar1 = plStack_d8 + 1;
        do {
          lVar13 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plStack_d8 + 8))();
        }
      }
      plStack_e0 = (long *)*param_3;
      *param_3 = 0;
      FUN_104ace9bc(param_1,&plStack_e0,alStack_c0[0] == alStack_d0[0]);
      if (plStack_e0 != (long *)0x0) {
        plVar1 = plStack_e0 + 1;
        do {
          lVar13 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plStack_e0 + 8))();
        }
      }
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      ppppplVar12 = param_1[3];
      if (param_1[4] != ppppplVar12) {
        uVar15 = 0;
        do {
          iVar2 = *(int *)((long)param_1 + 0x14);
          pppplVar7 = ppppplVar12[uVar15];
          (*(code *)(*pppplVar7)[3])();
          if (iVar2 < (int)pppplVar7) {
            pppplVar7 = (*pppppplVar6)[uVar15];
            (*(code *)(*pppplVar7)[3])();
            *(int *)((long)param_1 + 0x14) = (int)pppplVar7;
          }
          uVar15 = uVar15 + 1;
          ppppplVar12 = param_1[3];
        } while (uVar15 < (ulong)((long)param_1[4] - (long)ppppplVar12 >> 3));
      }
      return param_1;
    }
    uVar8 = (long)*pppppplVar6 - (long)*param_1;
    uVar10 = (long)uVar8 >> 2;
    if (uVar10 <= uVar15) {
      uVar10 = uVar15;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar10 = 0x1fffffffffffffff;
    }
    ppppplStack_38 = (long *****)pppppplVar6;
    if (uVar10 == 0) {
      ppppplStack_58 = (long *****)0x0;
    }
    else {
      FUN_104acf730();
      ppppplStack_58 = (long *****)pppppplVar6;
    }
    ppppplStack_50 = ppppplStack_58 + lVar13;
    ppppplStack_40 = ppppplStack_58 + uVar10;
    *ppppplStack_50 = (long ****)0x0;
    ppppplVar12 = (long *****)0x0;
    if (*param_2 != 0) {
      plVar1 = (long *)(*param_2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppppplVar12 = (long *****)*param_2;
    }
    ppppplStack_48 = ppppplStack_50 + 1;
    *ppppplStack_50 = (long ****)ppppplVar12;
    FUN_104acf6a8(param_1,&ppppplStack_58);
    ppppplVar14 = param_1[1];
    pppppplVar6 = &ppppplStack_58;
    func_0x000104acf88c(pppppplVar6);
  }
  param_1[1] = ppppplVar14;
  return pppppplVar6;
}



/* Entry: 104acec58; end: 104aceed7;  */

undefined8 * FUN_104acec58(undefined8 *param_1,long *param_2,long *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plStack_80;
  long *plStack_78;
  long alStack_70 [2];
  long alStack_60 [2];
  
  *(undefined4 *)(param_1 + 2) = 2;
  plVar9 = param_1 + 3;
  *plVar9 = 0;
  *param_1 = &PTR_FUN_1107c62f0;
  param_1[1] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  (**(code **)(*(long *)*param_2 + 0x28))(alStack_60);
  FUN_104ace680(alStack_70);
  lVar4 = alStack_60[0];
  lVar8 = alStack_70[0];
  (**(code **)(*(long *)*param_3 + 0x28))(alStack_60);
  FUN_104ace680(alStack_70);
  if (lVar4 == lVar8) {
    lVar6 = *(long *)(*param_2 + 0x20) - *(long *)(*param_2 + 0x18) >> 3;
  }
  else {
    lVar6 = 1;
  }
  if (alStack_60[0] == alStack_70[0]) {
    lVar7 = *(long *)(*param_3 + 0x20) - *(long *)(*param_3 + 0x18) >> 3;
  }
  else {
    lVar7 = 1;
  }
  FUN_104aceed8(plVar9,lVar7 + lVar6);
  plStack_78 = (long *)*param_2;
  *param_2 = 0;
  FUN_104ace9bc(param_1,&plStack_78,lVar4 == lVar8);
  if (plStack_78 != (long *)0x0) {
    plVar5 = plStack_78 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plStack_78 + 8))();
    }
  }
  plStack_80 = (long *)*param_3;
  *param_3 = 0;
  FUN_104ace9bc(param_1,&plStack_80,alStack_60[0] == alStack_70[0]);
  if (plStack_80 != (long *)0x0) {
    plVar5 = plStack_80 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plStack_80 + 8))();
    }
  }
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar8 = param_1[3];
  if (param_1[4] != lVar8) {
    uVar10 = 0;
    do {
      iVar1 = *(int *)((long)param_1 + 0x14);
      plVar5 = *(long **)(lVar8 + uVar10 * 8);
      (**(code **)(*plVar5 + 0x18))();
      if (iVar1 < (int)plVar5) {
        plVar5 = *(long **)(*plVar9 + uVar10 * 8);
        (**(code **)(*plVar5 + 0x18))();
        *(int *)((long)param_1 + 0x14) = (int)plVar5;
      }
      uVar10 = uVar10 + 1;
      lVar8 = param_1[3];
    } while (uVar10 < (ulong)(param_1[4] - lVar8 >> 3));
  }
  return param_1;
}



/* Entry: 104aceed8; end: 104acef67;  */

long **** FUN_104aceed8(long ****param_1,long ****param_2,long param_3)

{
  long ****pppplVar1;
  char cVar2;
  bool bVar3;
  long ****pppplVar4;
  long ***ppplVar5;
  long ***ppplVar6;
  long ***ppplStack_88;
  long ***ppplStack_80;
  long ***ppplStack_78;
  long ***ppplStack_48;
  long lStack_40;
  long lStack_38;
  long ***ppplStack_30;
  long ***ppplStack_28;
  
  pppplVar4 = param_1 + 2;
  ppplVar5 = *param_1;
  if (param_2 <= (long ****)((long)*pppplVar4 - (long)ppplVar5 >> 3)) {
    return pppplVar4;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    ppplVar6 = param_1[1];
    ppplStack_28 = (long ***)pppplVar4;
    FUN_104acf730();
    lStack_40 = (long)pppplVar4 + ((long)ppplVar6 - (long)ppplVar5);
    ppplStack_30 = (long ***)(pppplVar4 + (long)param_2);
    ppplStack_48 = (long ***)pppplVar4;
    lStack_38 = lStack_40;
    FUN_104acf6a8(param_1,&ppplStack_48);
    pppplVar4 = &ppplStack_48;
    func_0x000104acf88c(pppplVar4);
    return pppplVar4;
  }
  FUN_104acf71c();
  func_0x000104acf88c(&ppplStack_48);
  pppplVar4 = param_1;
  __Unwind_Resume();
  if (param_3 == 0) {
    if (pppplVar4 == (long ****)0x0) goto LAB_104acf024;
    if (param_2 == (long ****)0x0) goto LAB_104acf028;
    pppplVar1 = pppplVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
      if (bVar3) {
        *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pppplVar1 = param_2 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
      if (bVar3) {
        *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppplStack_88 = (long ***)param_2;
    ppplStack_80 = (long ***)pppplVar4;
    FUN_104acf06c(&ppplStack_78,&ppplStack_80,&ppplStack_88);
    param_1 = (long ****)ppplStack_78;
    ppplStack_78 = (long ***)0x0;
    if ((long ****)ppplStack_88 == (long ****)0x0) goto LAB_104acefec;
    pppplVar4 = (long ****)(ppplStack_88 + 1);
    do {
      ppplVar5 = *pppplVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplVar4,0x10);
      if (bVar3) {
        *pppplVar4 = (long ***)((long)ppplVar5 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pppplVar4 = (long ****)ppplStack_88;
    if ((long ***)((long)ppplVar5 + -1) != (long ***)0x0) goto LAB_104acefec;
  }
  else {
    func_0x00010bdace98();
LAB_104acf024:
    func_0x00010bdacde8();
LAB_104acf028:
    func_0x00010bdace1c();
  }
  (*(code *)(*pppplVar4)[1])();
LAB_104acefec:
  if ((long ****)ppplStack_80 != (long ****)0x0) {
    pppplVar4 = (long ****)(ppplStack_80 + 1);
    do {
      ppplVar5 = *pppplVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplVar4,0x10);
      if (bVar3) {
        *pppplVar4 = (long ***)((long)ppplVar5 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((long ***)((long)ppplVar5 + -1) == (long ***)0x0) {
      (*(code *)(*ppplStack_80)[1])();
    }
  }
  return param_1;
}



/* Entry: 104acef68; end: 104acf06b;  */

undefined8 FUN_104acef68(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 unaff_x19;
  long *plStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    if (param_1 == (long *)0x0) goto LAB_104acf024;
    if (param_2 == (long *)0x0) goto LAB_104acf028;
    plVar1 = param_1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = param_2 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_38 = param_2;
    plStack_30 = param_1;
    FUN_104acf06c(&uStack_28,&plStack_30,&plStack_38);
    unaff_x19 = uStack_28;
    uStack_28 = 0;
    if (plStack_38 == (long *)0x0) goto LAB_104acefec;
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_1 = plStack_38;
    if (lVar4 + -1 != 0) goto LAB_104acefec;
  }
  else {
    func_0x00010bdace98();
LAB_104acf024:
    func_0x00010bdacde8();
LAB_104acf028:
    func_0x00010bdace1c();
  }
  (**(code **)(*param_1 + 8))();
LAB_104acefec:
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*plStack_30 + 8))();
    }
  }
  return unaff_x19;
}



/* Entry: 104acf06c; end: 104acf157;  */

void FUN_104acf06c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  uVar4 = 0x30;
  __Znwm();
  plVar6 = (long *)*param_2;
  *param_2 = 0;
  plVar5 = (long *)*param_3;
  *param_3 = 0;
  FUN_104acec58();
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 104acf158; end: 104acf1e3;  */

undefined8 * FUN_104acf158(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 3;
  *param_1 = &PTR_FUN_1107c62f0;
  func_0x000104acf928(&puStack_28);
  return param_1;
}



/* Entry: 104acf1e4; end: 104acf207;  */

undefined4 FUN_104acf1e4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 104acf208; end: 104acf2bf;  */

void FUN_104acf208(long *param_1,long param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  long lStack_38;
  long lStack_30;
  int iStack_28;
  
  if (*(long *)(param_2 + 8) == *(long *)(param_2 + 0x10)) {
    lStack_30 = *(long *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0;
    lStack_38 = 0;
    iStack_28 = 1;
LAB_104acf270:
    lVar3 = 0;
    param_1[1] = lStack_30;
    lStack_30 = 0;
  }
  else {
    FUN_104acf2c8(&lStack_38,(long *)(param_2 + 8));
    lVar3 = lStack_38;
    uVar2 = 0;
    if (iStack_28 == 0) goto LAB_104acf288;
    if (iStack_28 != 1) {
      FUN_104a71e10();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104acf2ac);
      (*pcVar1)();
    }
    if (lStack_38 == 0) goto LAB_104acf270;
    lStack_38 = 0x36;
  }
  *param_1 = lVar3;
  uVar2 = 1;
LAB_104acf288:
  *(undefined4 *)(param_1 + 2) = uVar2;
  FUN_104acf650(&lStack_38);
  return;
}



/* Entry: 104acf2c0; end: 104acf2c7;  */

long * FUN_104acf2c0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
    (**(code **)(**(long **)(param_1 + 0x28) + 8))();
  }
  plVar4 = *(long **)(param_1 + 0x18);
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
  return (long *)(param_1 + 8);
}



/* Entry: 104acf2c8; end: 104acf4bb;  */

void FUN_104acf2c8(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long alStack_78 [4];
  int iStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  (*(code *)**(undefined8 **)param_2[4])(&lStack_50);
  FUN_104acf4bc(alStack_78 + 2,&lStack_50);
  FUN_104acf650(&lStack_50);
  lVar1 = alStack_78[3];
  if (iStack_58 == 1) {
    if (alStack_78[2] == 0) {
      alStack_78[3] = 0;
      alStack_78[0] = 0;
      alStack_78[1] = 0;
      lStack_38 = 0;
      lStack_30 = lVar1;
      if (*param_2 + 8 == param_2[1]) {
        lStack_30 = 0;
        *param_1 = 0;
        param_1[1] = lVar1;
        *(undefined4 *)(param_1 + 2) = 1;
      }
      else {
        *param_2 = *param_2 + 8;
        (**(code **)(*(long *)param_2[4] + 8))();
        lVar1 = lStack_30;
        if (lStack_38 != 0) {
          lStack_50 = lStack_38;
          lStack_38 = 0x36;
          func_0x00010ae77c74(&lStack_50);
          goto LAB_104acf46c;
        }
        lStack_30 = 0;
        lStack_50 = 0;
        lStack_48 = 0;
        (**(code **)(**(long **)*param_2 + 0x10))(&ppuStack_28,*(long **)*param_2,lVar1,param_2[3]);
        param_2[4] = (long)ppuStack_28;
        ppuStack_28 = &PTR_PTR_1130a63b0;
        (**(code **)(PTR_PTR_1130a63b0 + 8))();
        FUN_104acf620(&lStack_50);
        FUN_104acf2c8(param_1,param_2);
      }
      plVar3 = &lStack_38;
    }
    else {
      alStack_78[0] = alStack_78[2];
      alStack_78[2] = 0x36;
      FUN_104acf5b8(&lStack_50,alStack_78);
      lVar1 = lStack_50;
      if (lStack_50 == 0) {
        param_1[1] = lStack_48;
        lStack_48 = 0;
      }
      else {
        lStack_50 = 0x36;
      }
      *param_1 = lVar1;
      *(undefined4 *)(param_1 + 2) = 1;
      plVar3 = &lStack_50;
    }
    FUN_104acf620(plVar3);
    FUN_104acf620(alStack_78);
  }
  else {
    if (iStack_58 != 0) {
      FUN_104a71e10();
LAB_104acf46c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104acf470);
      (*pcVar2)();
    }
    FUN_104acf4bc(param_1,alStack_78 + 2);
  }
  FUN_104acf650(alStack_78 + 2);
  return;
}



/* Entry: 104acf4bc; end: 104acf4ef;  */

undefined1 * FUN_104acf4bc(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_104acf4f0();
  return param_1;
}



/* Entry: 104acf4f0; end: 104acf57b;  */

void FUN_104acf4f0(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c63f0)[*(uint *)(param_1 + 0x10)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c6400)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 104acf57c; end: 104acf5b7;  */

void FUN_104acf57c(void)

{
  return;
}



/* Entry: 104acf5b8; end: 104acf61f;  */

ulong * FUN_104acf5b8(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  if ((uVar3 & 1) != 0) {
    piVar4 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar3 = *param_1;
  }
  if (uVar3 == 0) {
    func_0x00010ae77b40(param_1);
  }
  return param_1;
}



/* Entry: 104acf620; end: 104acf64f;  */

ulong * FUN_104acf620(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104acf650; end: 104acf6a7;  */

long FUN_104acf650(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c63f0)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return param_1;
}



/* Entry: 104acf6a8; end: 104acf71b;  */

void FUN_104acf6a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  func_0x000104acf764(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 104acf71c; end: 104acf72f;  */

undefined1  [16]
FUN_104acf71c(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_104a6fa70();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  FUN_104a7757c();
  puStack_88 = &uStack_70;
  puStack_80 = &uStack_60;
  puStack_58 = param_7;
  puVar3 = param_7;
  while (param_3 != param_5) {
    puStack_58 = puStack_58 + -1;
    *puStack_58 = 0;
    param_3 = param_3 + -1;
    *puStack_58 = *param_3;
    *param_3 = 0;
    puVar3 = puVar3 + -1;
  }
  uStack_78 = 1;
  puStack_90 = puVar1;
  uStack_70 = param_6;
  puStack_68 = param_7;
  uStack_60 = param_6;
  FUN_104acf7f4(&puStack_90);
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = param_6;
  return auVar5;
}



/* Entry: 104acf730; end: 104acf7f3;  */

undefined1  [16]
FUN_104acf730(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_104a7757c();
  puStack_78 = &uStack_60;
  puStack_70 = &uStack_50;
  puStack_48 = param_7;
  puVar2 = param_7;
  while (param_3 != param_5) {
    puStack_48 = puStack_48 + -1;
    *puStack_48 = 0;
    param_3 = param_3 + -1;
    *puStack_48 = *param_3;
    *param_3 = 0;
    puVar2 = puVar2 + -1;
  }
  uStack_68 = 1;
  uStack_80 = param_1;
  uStack_60 = param_6;
  puStack_58 = param_7;
  uStack_50 = param_6;
  FUN_104acf7f4(&uStack_80);
  auVar4._8_8_ = puVar2;
  auVar4._0_8_ = param_6;
  return auVar4;
}



/* Entry: 104acf7f4; end: 104acf827;  */

long FUN_104acf7f4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_104acf828(param_1);
  }
  return param_1;
}



/* Entry: 104acf828; end: 104acf967;  */

void FUN_104acf828(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 8);
  for (plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 8); plVar6 != plVar7; plVar6 = plVar6 + 1) {
    plVar4 = (long *)*plVar6;
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
  }
  return;
}



/* Entry: 104acf968; end: 104acf9cb;  */

void FUN_104acf968(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar2 = (long *)*param_1;
  plVar7 = (long *)param_1[1];
  while (plVar7 != plVar2) {
    plVar7 = plVar7 + -1;
    plVar5 = (long *)*plVar7;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 104acf9cc; end: 104acf9df;  */

void FUN_104acf9cc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104acf9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 104acf9e0; end: 104acfab7;  */

void FUN_104acf9e0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_68 [72];
  
  func_0x000100460de4(auStack_68);
  if (param_1 != (long *)0x0) {
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
    if (lVar4 + -1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  func_0x000100467a48(auStack_68);
  return;
}



/* Entry: 104acfab8; end: 104acfb17;  */

void FUN_104acfab8(ulong *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_1 != (ulong *)0x0) && (*param_1 != 0)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = param_1[1] + lVar2;
      func_0x000104acfa44();
      if (lVar1 != 0) {
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (uVar3 < *param_1);
  }
  return;
}


