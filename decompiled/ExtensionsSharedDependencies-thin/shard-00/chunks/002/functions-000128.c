/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0033d0cc; end: 0033d0df;  */

void FUN_0033d0cc(void)

{
  FUN_0033d130();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0033d0e0; end: 0033d11b;  */

void FUN_0033d0e0(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x30))();
  }
  FUN_0033d130(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0033d11c; end: 0033d12f;  */

void FUN_0033d11c(void)

{
  FUN_0033d130();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0033d130; end: 0033d17f;  */

undefined8 * FUN_0033d130(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009db2e0;
  if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[5])();
  }
  FUN_0033d4f0(param_1 + 3);
  return param_1;
}



/* Entry: 0033d180; end: 0033d1d7;  */

long FUN_0033d180(long param_1)

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



/* Entry: 0033d1d8; end: 0033d29b;  */

void FUN_0033d1d8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  func_0x003401f0(*(undefined8 *)(param_1[1] + 0x18));
  lVar8 = param_1[1];
  iVar3 = (int)*(undefined8 *)(lVar8 + 0x18);
  func_0x00340260();
  if (iVar3 != 0) {
    FUN_0033c6b0(lVar8);
  }
  lVar8 = 0;
  FUN_00400ab8();
  pcVar4 = segment_command_00000020.segname + 8;
  __Znwm();
  lVar5 = param_1[1];
  *(qword *)(pcVar4 + 0x10) = 0;
  *(qword *)(pcVar4 + 0x18) = 0;
  plVar7 = *(long **)(lVar5 + 8);
  *(undefined ***)pcVar4 = &PTR_FUN_009db3c8;
  *(qword *)(pcVar4 + 8) = 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(long **)(pcVar4 + 0x20) = plVar7;
  *(long *)(pcVar4 + 0x28) = lVar5;
  puVar6 = *(undefined8 **)(lVar8 + 8);
  *(char **)(lVar8 + 8) = pcVar4;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
  }
  *(undefined4 *)(lVar8 + 0x10) = 0;
  func_0x003a6548(*param_1,0);
  func_0x003a6a1c();
  FUN_0033d4a8(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0033d29c; end: 0033d2c7;  */

void FUN_0033d29c(long *param_1)

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
  if (lVar4 + -1 != 0 || param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0033d2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 0033d2c8; end: 0033d357;  */

undefined8 * FUN_0033d2c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009db3c8;
  FUN_0033d4a8(param_1 + 4);
  *param_1 = &PTR_FUN_009e1eb0;
  FUN_0033d36c(param_1 + 2);
  return param_1;
}



/* Entry: 0033d358; end: 0033d36b;  */

void FUN_0033d358(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_2 != 4) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  plVar1 = (long *)(lVar5 + 0x30);
  do {
    puVar4 = (undefined8 *)*plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  func_0x003401f0(*(undefined8 *)(lVar5 + 0x18));
  plVar1 = (long *)(lVar5 + 0x28);
  do {
    puVar4 = (undefined8 *)*plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0033bf54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)();
    return;
  }
  return;
}



/* Entry: 0033d36c; end: 0033d3c3;  */

long FUN_0033d36c(long param_1)

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



/* Entry: 0033d3c4; end: 0033d3cb;  */

undefined8 FUN_0033d3c4(void)

{
  return 0;
}



/* Entry: 0033d3cc; end: 0033d423;  */

void FUN_0033d3cc(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x20;
  __Znwm();
  FUN_0033d424();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 0033d424; end: 0033d46f;  */

undefined8 * FUN_0033d424(undefined8 *param_1,undefined1 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009db418;
  func_0x003401e4(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 0033d470; end: 0033d47f;  */

void FUN_0033d470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009db418;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0033d480; end: 0033d49f;  */

void FUN_0033d480(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009db418;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0033d4a0; end: 0033d4a7;  */

void FUN_0033d4a0(void)

{
  return;
}



/* Entry: 0033d4a8; end: 0033d4ef;  */

undefined8 * FUN_0033d4a8(undefined8 *param_1)

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



/* Entry: 0033d4f0; end: 0033d547;  */

long FUN_0033d4f0(long param_1)

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



/* Entry: 0033d548; end: 0033d5cb;  */

void FUN_0033d548(long *param_1)

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
        lVar2 = lVar2 + -8;
        FUN_0033d5cc(plVar3 + 2,lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 0033d5cc; end: 0033d5eb;  */

void FUN_0033d5cc(undefined8 param_1,ulong *param_2)

{
  if ((*param_2 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0033d5ec; end: 0033d673;  */

undefined8 * FUN_0033d5ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  FUN_00339d50(param_1 + 3);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  func_0x00339d8c(param_2 + 3);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = uVar1;
  *param_2 = 0x8000000000000000;
  func_0x00339da8(param_2 + 3);
  return param_1;
}



/* Entry: 0033d674; end: 0033d693;  */

void FUN_0033d674(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0033d694; end: 0033d6eb;  */

void FUN_0033d694(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = param_1 + 10;
  (**(code **)(*param_1 + 0x30))();
  do {
    iVar3 = (int)*plVar4 + -1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *(int *)plVar4 = iVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0033d6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1);
    return;
  }
  return;
}



/* Entry: 0033d6ec; end: 0033d78b;  */

undefined8 * FUN_0033d6ec(undefined8 *param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    FUN_0033d4a8(param_1 + 0x10);
    *param_1 = &PTR_FUN_009e0558;
    param_1[1] = &PTR____cxa_pure_virtual_009e05a0;
    if (param_1[0xb] != 0) {
      FUN_003d3290(param_1);
    }
    func_0x00339d70(param_1 + 2);
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
               ,0x170,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x33d780);
  (*pcVar1)();
}



/* Entry: 0033d78c; end: 0033d79f;  */

void FUN_0033d78c(void)

{
  FUN_0033d6ec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0033d7a0; end: 0033d7d3;  */

void FUN_0033d7a0(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x54);
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  *(byte *)(param_1 + 0x54) = bVar1;
  return;
}



/* Entry: 0033d7d4; end: 0033d867;  */

void FUN_0033d7d4(long *param_1)

{
  long *plVar1;
  byte bVar2;
  
  plVar1 = param_1;
  FUN_003d3424();
  if ((long *)*plVar1 == param_1) {
    bVar2 = *(byte *)((long)param_1 + 0x54);
    if (bVar2 < 3) {
      bVar2 = 2;
    }
    *(byte *)((long)param_1 + 0x54) = bVar2;
  }
  else {
    plVar1 = param_1 + 2;
    func_0x00339d8c(plVar1);
    if ((char)param_1[0x12] == '\0') {
      FUN_0033dc0c(param_1);
      func_0x00339da8(plVar1);
    }
    else {
      func_0x00339da8(plVar1);
    }
  }
  return;
}



/* Entry: 0033d868; end: 0033d96b;  */

void FUN_0033d868(long *param_1)

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
  
  FUN_003d3424(param_1);
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
    pbVar1 = (byte *)((long)extraout_x8 + 0x91);
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
      extraout_x8[0xd] = (long)FUN_0033e23c;
      extraout_x8[0xe] = (long)extraout_x8;
      extraout_x8[0xf] = 0;
      uStack_30 = 0;
      FUN_003c1e6c(&uStack_21,extraout_x8 + 0xc,&uStack_30);
      if ((uStack_30 & 1) == 0) {
        return;
      }
      FUN_0055293c();
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
                    /* WARNING: Could not recover jumptable at 0x0033d938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*extraout_x8 + 0x10))(extraout_x8);
    return;
  }
  return;
}



/* Entry: 0033d96c; end: 0033d9cb;  */

void FUN_0033d96c(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0033d994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}



/* Entry: 0033d9cc; end: 0033dc0b;  */

void FUN_0033d9cc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  char *pcVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  qword qVar12;
  undefined8 uStack_98;
  int iStack_90;
  ulong uStack_88;
  int iStack_80;
  ulong uStack_78;
  int iStack_70;
  undefined1 uStack_61;
  
  plVar6 = param_2;
  FUN_003d3424();
  if ((long *)*plVar6 == param_2) {
    if ((char)param_2[0x12] == '\0') {
      plVar6 = param_2 + 0x13;
      plVar1 = param_2 + 0x14;
      do {
        cVar2 = (char)*plVar6;
        if (cVar2 == '\x02') {
          FUN_0033e100(&uStack_88,plVar6);
        }
        else if (cVar2 == '\x01') {
          FUN_0033dd70(&uStack_88,plVar6);
        }
        else {
          if (cVar2 != '\0') goto LAB_0033dbbc;
          FUN_0033dd30(&uStack_78,plVar1);
          uVar4 = uStack_78;
          if (iStack_70 == 0) {
LAB_0033da70:
            iStack_80 = iStack_70;
          }
          else {
            if (iStack_70 != 1) goto LAB_0033dbc0;
            uStack_78 = 0x36;
            if (uVar4 != 0) {
              uStack_88 = uVar4;
              goto LAB_0033da70;
            }
            FUN_003d3598(plVar1);
            lVar9 = param_2[0x21];
            plVar11 = *(long **)(lVar9 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = *plVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            qVar12 = *(qword *)(lVar9 + 8);
            pcVar7 = segment_command_00000020.segname + 8;
            FUN_00338c74();
            *(code **)pcVar7 = FUN_0033dfb8;
            *(qword *)(pcVar7 + 8) = qVar12;
            *(code **)(pcVar7 + 0x18) = FUN_0033df34;
            *(char **)(pcVar7 + 0x20) = pcVar7;
            *(undefined8 *)(pcVar7 + 0x28) = 0;
            uStack_88 = 0;
            FUN_003c1e6c(&uStack_61,pcVar7 + 0x10,&uStack_88);
            if ((uStack_88 & 1) != 0) {
              FUN_0055293c();
            }
            *plVar1 = 0;
            *(char *)plVar6 = '\x01';
            FUN_0033dd70(&uStack_88,plVar6);
          }
          FUN_0033e1ac(&uStack_78);
        }
        FUN_0033dc34(&uStack_98,&uStack_88);
        FUN_0033e1ac(&uStack_88);
        if (iStack_90 == 1) {
          FUN_0033dc0c(param_2);
          uVar10 = uStack_98;
          uStack_98 = 0x36;
LAB_0033db78:
          *param_1 = uVar10;
          uVar8 = 1;
LAB_0033db88:
          *(undefined1 *)(param_1 + 1) = uVar8;
          FUN_0033e1ac(&uStack_98);
          return;
        }
        cVar2 = *(char *)((long)param_2 + 0x54);
        *(undefined1 *)((long)param_2 + 0x54) = 0;
        if (cVar2 == '\0') {
          *(undefined1 *)param_1 = 0;
          uVar8 = 0;
          goto LAB_0033db88;
        }
        if (cVar2 == '\x02') {
          FUN_0033dc0c(param_2);
          uVar10 = 4;
          goto LAB_0033db78;
        }
        FUN_0033e1ac(&uStack_98);
      } while ((char)param_2[0x12] == '\0');
    }
    FUN_007711f0();
  }
  func_0x00771224();
LAB_0033dbbc:
  _abort();
LAB_0033dbc0:
  FUN_0033e178();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x33dbc8);
  (*pcVar5)();
}



/* Entry: 0033dc0c; end: 0033dc33;  */

char * FUN_0033dc0c(char *param_1)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  
  if (param_1[0x90] != '\0') {
    func_0x00771258();
    *param_1 = '\0';
    param_1[8] = -1;
    param_1[9] = -1;
    param_1[10] = -1;
    param_1[0xb] = -1;
    FUN_0033dc68();
    return param_1;
  }
  param_1[0x90] = '\x01';
  pcVar1 = param_1 + 0x98;
  cVar2 = *pcVar1;
  if (cVar2 != '\x02') {
    if (cVar2 == '\x01') {
      FUN_0033d674(param_1 + 0xa0);
      return pcVar1;
    }
    if (cVar2 != '\0') {
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x33c518);
      (*pcVar3)();
    }
  }
  FUN_003d3598(param_1 + 0xa0);
  return pcVar1;
}



/* Entry: 0033dc34; end: 0033dc67;  */

undefined1 * FUN_0033dc34(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  FUN_0033dc68();
  return param_1;
}



/* Entry: 0033dc68; end: 0033dcf3;  */

void FUN_0033dc68(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009db518)[*(uint *)(param_1 + 8)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_009db528)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 8) = uVar1;
  }
  return;
}



/* Entry: 0033dcf4; end: 0033dcf7;  */

void FUN_0033dcf4(void)

{
  return;
}



/* Entry: 0033dcf8; end: 0033dd17;  */

void FUN_0033dcf8(undefined8 param_1,ulong *param_2)

{
  if ((*param_2 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0033dd18; end: 0033dd2f;  */

void FUN_0033dd18(void)

{
  return;
}



/* Entry: 0033dd30; end: 0033dd6f;  */

void FUN_0033dd30(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_003d359c(auStack_30);
  FUN_0033dc34(param_1,auStack_30);
  FUN_0033e1ac(auStack_30);
  return;
}



/* Entry: 0033dd70; end: 0033df33;  */

void FUN_0033dd70(long *param_1,undefined1 *param_2)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  long lStack_128;
  int iStack_120;
  undefined1 auStack_118 [104];
  ulong uStack_b0;
  undefined4 uStack_a8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = (ulong *)(param_2 + 8);
  uStack_b0 = *puVar5;
  *puVar5 = 0x36;
  uStack_a8 = 1;
  FUN_0033dc34(&lStack_128,&uStack_b0);
  FUN_0033e1ac(&uStack_b0);
  lVar6 = lStack_128;
  if (iStack_120 == 1) {
    lStack_128 = 0x36;
    if (lVar6 == 0) {
      puVar2 = puVar5;
      FUN_0033d674();
      lVar6 = *(long *)(param_2 + 0x78);
      func_0x003c1f6c();
      uVar3 = *puVar2;
      FUN_003c1e28();
      lVar4 = *(long *)(lVar6 + 0x40);
      lVar6 = 0x7fffffffffffffff;
      if (((uVar3 != 0x7fffffffffffffff && lVar4 != 0x7fffffffffffffff) &&
          (lVar6 = -0x8000000000000000, uVar3 != 0x8000000000000000)) &&
         (lVar4 != -0x8000000000000000)) {
        if ((long)uVar3 < 1) {
          if ((long)(-0x8000000000000000 - uVar3) <= lVar4) goto LAB_0033deec;
        }
        else if ((long)(uVar3 ^ 0x7fffffffffffffff) < lVar4) {
          lVar6 = 0x7fffffffffffffff;
        }
        else {
LAB_0033deec:
          lVar6 = lVar4 + uVar3;
        }
      }
      FUN_003d3444(&uStack_b0,lVar6);
      FUN_0033d5ec(auStack_118,&uStack_b0);
      FUN_003d3598(&uStack_b0);
      FUN_0033d5ec(puVar5,auStack_118);
      *param_2 = 2;
      FUN_0033e100(param_1,param_2);
      FUN_003d3598(auStack_118);
    }
    else {
      *param_1 = lVar6;
      *(undefined4 *)(param_1 + 1) = 1;
    }
  }
  else {
    if (iStack_120 != 0) goto LAB_0033def8;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  FUN_0033e1ac(&lStack_128);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_0033def8:
  FUN_0033e178();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x33df00);
  (*pcVar1)();
}



/* Entry: 0033df34; end: 0033dfb7;  */

void FUN_0033df34(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  ulong uStack_38;
  
  pcVar1 = (code *)*param_1;
  uVar2 = param_1[1];
  FUN_00338cb8();
  uStack_38 = *param_2;
  if ((uStack_38 & 1) != 0) {
    piVar5 = (int *)(uStack_38 - 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = *piVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (*pcVar1)(uVar2,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0033dfb8; end: 0033e0ff;  */

void FUN_0033dfb8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  ulong uStack_30;
  undefined8 *puStack_28;
  
  lVar3 = 0;
  FUN_00400ab8();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  FUN_003b646c(&uStack_38,2,"max_age",7,&uStack_39,&uStack_58);
  FUN_003be104(&uStack_30,&uStack_38,7,0);
  uVar4 = *(ulong *)(lVar3 + 0x28);
  if (uStack_30 != uVar4) {
    *(ulong *)(lVar3 + 0x28) = uStack_30;
    uStack_30 = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_0033e044;
    FUN_0055293c();
    uVar4 = uStack_30;
  }
  if ((uVar4 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0033e044:
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_28 = &uStack_58;
  FUN_0033d548(&puStack_28);
  plVar5 = param_1;
  func_0x003a6548(param_1,0);
  (**(code **)(*plVar5 + 0x10))();
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 == 0) {
    FUN_004005ec(param_1);
  }
  return;
}



/* Entry: 0033e100; end: 0033e177;  */

void FUN_0033e100(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uStack_30;
  int iStack_28;
  
  FUN_0033dd30(&uStack_30,param_2 + 8);
  uVar1 = uStack_30;
  if (iStack_28 != 0) {
    if (iStack_28 != 1) {
      FUN_0033e178();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x33e164);
      (*pcVar2)();
    }
    uStack_30 = 0x36;
    *param_1 = uVar1;
  }
  *(int *)(param_1 + 1) = iStack_28;
  FUN_0033e1ac(&uStack_30);
  return;
}



/* Entry: 0033e178; end: 0033e1ab;  */

dword * FUN_0033e178(void)

{
  dword *pdVar1;
  undefined1 uStack_31;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  ___cxa_allocate_exception();
  *(undefined **)pdVar1 = PTR___ZTVSt18bad_variant_access_00998e10 + 0x10;
  ___cxa_throw();
  if (pdVar1[2] != 0xffffffff) {
    (*(code *)(&PTR_FUN_009db518)[pdVar1[2]])(&uStack_31,pdVar1);
  }
  pdVar1[2] = 0xffffffff;
  return pdVar1;
}



/* Entry: 0033e1ac; end: 0033e203;  */

long FUN_0033e1ac(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009db518)[*(uint *)(param_1 + 8)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return param_1;
}



/* Entry: 0033e204; end: 0033e23b;  */

ulong * FUN_0033e204(ulong *param_1)

{
  if (((char)param_1[1] != '\0') && ((*param_1 & 1) != 0)) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0033e23c; end: 0033e353;  */

void FUN_0033e23c(long *param_1,long param_2)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uStack_40;
  char cStack_38;
  
  pbVar1 = (byte *)((long)param_1 + 0x91);
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
    func_0x00339d8c();
    if ((char)param_1[0x12] == '\0') {
      FUN_003d3424();
      lVar9 = *plVar8;
      FUN_003d3424();
      *plVar8 = (long)param_1;
      plVar8 = param_1;
      FUN_0033d9cc(&uStack_40);
      FUN_003d3424();
      *plVar8 = lVar9;
      func_0x00339da8(plVar2);
      uVar6 = uStack_40;
      if (cStack_38 != '\0') {
        uStack_40 = 0x36;
        if (uVar6 == 0) {
          FUN_0033ce58(param_1[0x11]);
        }
        else if ((uVar6 & 1) != 0) {
          FUN_0055293c();
        }
      }
      FUN_0033e204(&uStack_40);
    }
    else {
      func_0x00339da8(plVar2);
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
  func_0x0077128c();
  func_0x0040cf10();
  FUN_0033e204(&uStack_40);
  __Unwind_Resume();
  lVar9 = *param_1;
  *param_1 = param_2;
  if (lVar9 != 0) {
    iVar7 = (int)*(undefined8 *)(lVar9 + 0x18);
    func_0x00340260();
    if (iVar7 != 0) {
      FUN_0033c6b0(lVar9);
    }
  }
  return;
}



/* Entry: 0033e354; end: 0033e38f;  */

void FUN_0033e354(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x18);
    func_0x00340260();
    if (iVar1 != 0) {
      FUN_0033c6b0(lVar2);
    }
  }
  return;
}



/* Entry: 0033e390; end: 0033e3f3;  */

void FUN_0033e390(void)

{
  int iVar1;
  dword *pdVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  long lVar5;
  
  pdVar2 = &MACH_HEADER.cpusubtype;
  ___cxa_allocate_exception();
  *(undefined ***)pdVar2 = &PTR_FUN_009e6568;
  ppuVar4 = &PTR_DAT_009e34c8;
  ___cxa_throw();
  puVar3 = *(undefined8 **)(pdVar2 + 4);
  (**(code **)*puVar3)();
  if (((ulong)ppuVar4 & 0xfffffffe) == 0) {
    return;
  }
  FUN_0033e178();
  (**(code **)(*(long *)puVar3[2] + 8))();
  lVar5 = puVar3[1];
  puVar3[1] = 0;
  if (lVar5 != 0) {
    iVar1 = (int)*(undefined8 *)(lVar5 + 0x18);
    func_0x00340260();
    if (iVar1 != 0) {
      FUN_0033c6b0(lVar5);
    }
  }
  return;
}



/* Entry: 0033e3f4; end: 0033e42b;  */

void FUN_0033e3f4(long param_1)

{
  int iVar1;
  long lVar2;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  lVar2 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = 0;
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x18);
    func_0x00340260();
    if (iVar1 != 0) {
      FUN_0033c6b0(lVar2);
    }
  }
  return;
}



/* Entry: 0033e42c; end: 0033e42f;  */

void FUN_0033e42c(void)

{
  return;
}



/* Entry: 0033e430; end: 0033e573;  */

char * FUN_0033e430(undefined1 *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  char acStack_198 [8];
  undefined1 auStack_190 [104];
  ulong uStack_128;
  ulong uStack_120;
  undefined1 auStack_118 [104];
  undefined1 auStack_b0 [104];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = param_2;
  func_0x003c1f6c();
  uVar6 = *puVar5;
  FUN_003c1e28();
  uVar10 = *param_2;
  lVar9 = 0x7fffffffffffffff;
  if ((uVar6 != 0x7fffffffffffffff && uVar10 != 0x7fffffffffffffff) &&
     (lVar9 = -0x8000000000000000, uVar6 != 0x8000000000000000 && uVar10 != 0x8000000000000000)) {
    if ((long)uVar6 < 1) {
      if ((long)uVar10 < (long)(-0x8000000000000000 - uVar6)) goto LAB_0033e4bc;
    }
    else if ((long)(uVar6 ^ 0x7fffffffffffffff) < (long)uVar10) {
      lVar9 = 0x7fffffffffffffff;
      goto LAB_0033e4bc;
    }
    lVar9 = uVar10 + uVar6;
  }
LAB_0033e4bc:
  FUN_003d3444(auStack_118,lVar9);
  uStack_128 = param_2[1];
  uStack_120 = param_2[2];
  if (uStack_120 != 0) {
    plVar1 = (long *)(uStack_120 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_0033d5ec(auStack_b0,auStack_118);
  acStack_198[0] = '\0';
  FUN_0033d5ec(auStack_190,auStack_b0);
  FUN_003d3598(auStack_b0);
  FUN_003d3598(auStack_118);
  *param_1 = 0;
  FUN_0033d5ec(param_1 + 8,auStack_190);
  *(ulong *)(param_1 + 0x78) = uStack_120;
  *(ulong *)(param_1 + 0x70) = uStack_128;
  uStack_128 = 0;
  uStack_120 = 0;
  pcVar7 = acStack_198;
  FUN_0033e574();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pcVar7;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*pcVar7 == '\x01') {
    pcVar8 = pcVar7 + 8;
  }
  else {
    if (*pcVar7 != '\0') {
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x33e5c4);
      (*pcVar4)();
    }
    FUN_003d3598(pcVar7 + 8);
    pcVar8 = pcVar7 + 0x70;
  }
  FUN_0033d4f0(pcVar8);
  return pcVar7;
}



/* Entry: 0033e574; end: 0033e5c7;  */

char * FUN_0033e574(char *param_1)

{
  code *pcVar1;
  char *pcVar2;
  
  if (*param_1 == '\x01') {
    pcVar2 = param_1 + 8;
  }
  else {
    if (*param_1 != '\0') {
      _abort();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x33e5c4);
      (*pcVar1)();
    }
    FUN_003d3598(param_1 + 8);
    pcVar2 = param_1 + 0x70;
  }
  FUN_0033d4f0(pcVar2);
  return param_1;
}



/* Entry: 0033e5c8; end: 0033e667;  */

undefined8 * FUN_0033e5c8(undefined8 *param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    FUN_0033d4a8(param_1 + 0x10);
    *param_1 = &PTR_FUN_009e0558;
    param_1[1] = &PTR____cxa_pure_virtual_009e05a0;
    if (param_1[0xb] != 0) {
      FUN_003d3290(param_1);
    }
    func_0x00339d70(param_1 + 2);
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
               ,0x170,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x33e65c);
  (*pcVar1)();
}



/* Entry: 0033e668; end: 0033e67b;  */

void FUN_0033e668(void)

{
  FUN_0033e5c8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0033e67c; end: 0033e70f;  */

void FUN_0033e67c(long *param_1)

{
  long *plVar1;
  byte bVar2;
  
  plVar1 = param_1;
  FUN_003d3424();
  if ((long *)*plVar1 == param_1) {
    bVar2 = *(byte *)((long)param_1 + 0x54);
    if (bVar2 < 3) {
      bVar2 = 2;
    }
    *(byte *)((long)param_1 + 0x54) = bVar2;
  }
  else {
    plVar1 = param_1 + 2;
    func_0x00339d8c(plVar1);
    if ((char)param_1[0x12] == '\0') {
      FUN_0033eba4(param_1);
      func_0x00339da8(plVar1);
    }
    else {
      func_0x00339da8(plVar1);
    }
  }
  return;
}



/* Entry: 0033e710; end: 0033e813;  */

void FUN_0033e710(long *param_1)

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
  
  FUN_003d3424(param_1);
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
    pbVar1 = (byte *)((long)extraout_x8 + 0x91);
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
      extraout_x8[0xd] = (long)FUN_0033f328;
      extraout_x8[0xe] = (long)extraout_x8;
      extraout_x8[0xf] = 0;
      uStack_30 = 0;
      FUN_003c1e6c(&uStack_21,extraout_x8 + 0xc,&uStack_30);
      if ((uStack_30 & 1) == 0) {
        return;
      }
      FUN_0055293c();
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
                    /* WARNING: Could not recover jumptable at 0x0033e7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*extraout_x8 + 0x10))(extraout_x8);
    return;
  }
  return;
}



/* Entry: 0033e814; end: 0033e873;  */

void FUN_0033e814(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0033e83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}



/* Entry: 0033e874; end: 0033eba3;  */

void FUN_0033e874(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  undefined1 uVar8;
  undefined8 *extraout_x8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_100;
  int iStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  int iStack_c0;
  ulong uStack_b8;
  int aiStack_b0 [4];
  undefined4 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  int iStack_88;
  ulong uStack_80;
  undefined4 auStack_78 [6];
  
  plVar7 = param_1;
  FUN_003d3424();
  if ((long *)*plVar7 != param_1) {
    func_0x007712f4();
LAB_0033eb1c:
    FUN_0033e178();
LAB_0033eb2c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x33eb30);
    (*pcVar6)();
  }
  if ((char)param_1[0x12] == '\0') {
    plVar7 = param_1 + 0x16;
    plVar1 = param_1 + 0x17;
    plVar2 = param_1 + 0x24;
LAB_0033e8dc:
    do {
      if ((char)*plVar7 == '\x01') {
        FUN_0033ee9c(&uStack_b8,plVar7);
      }
      else {
        if ((char)*plVar7 != '\0') {
          _abort();
LAB_0033eb28:
          FUN_0033e178();
          goto LAB_0033eb2c;
        }
        FUN_0033dd30(&uStack_90,plVar1);
        uVar5 = uStack_90;
        if (iStack_88 == 1) {
          uStack_98 = uStack_90;
          uStack_90 = 0x36;
          if (uVar5 == 0) {
            FUN_003d3598(plVar1);
            lVar12 = param_1[0x25];
            lVar11 = *plVar2;
            *plVar2 = 0;
            param_1[0x25] = 0;
            FUN_0033d4f0(plVar2);
            param_1[0x18] = lVar12;
            *plVar1 = lVar11;
            *(char *)plVar7 = '\x01';
            FUN_0033ee9c(&uStack_b8,plVar7);
          }
          else {
            FUN_0033ee44(&uStack_80,&uStack_98);
            uVar5 = uStack_80;
            if (uStack_80 == 0) {
              FUN_0033ed48(aiStack_b0,auStack_78);
            }
            else {
              uStack_80 = 0x36;
            }
            uStack_b8 = uVar5;
            uStack_a0 = 1;
            FUN_0033f290(&uStack_80);
            if ((uStack_98 & 1) != 0) {
              FUN_0055293c();
            }
          }
        }
        else {
          if (iStack_88 != 0) goto LAB_0033eb28;
          uStack_a0 = 0;
        }
        FUN_0033e1ac(&uStack_90);
      }
      FUN_0033ec34(auStack_d8,&uStack_b8);
      FUN_0033f2d0(&uStack_b8);
      if (iStack_c0 == 1) {
        FUN_0033f0e8(auStack_f0,auStack_d8);
        FUN_0033ebe0(&uStack_b8,auStack_f0);
        FUN_0033f290(auStack_f0);
        if (aiStack_b0[0] == 0) {
          FUN_0033e574(plVar7);
          FUN_0033e430(plVar7,param_1 + 0x13);
          FUN_0033f238(&uStack_b8);
          FUN_0033f2d0(auStack_d8);
          goto LAB_0033e8dc;
        }
        if (aiStack_b0[0] != 1) goto LAB_0033eb1c;
        uStack_80 = uStack_b8;
        if ((uStack_b8 & 1) != 0) {
          piVar9 = (int *)(uStack_b8 - 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar4) {
              *piVar9 = *piVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        auStack_78[0] = 1;
        FUN_0033f238(&uStack_b8);
      }
      else {
        auStack_78[0] = 0;
      }
      FUN_0033f2d0(auStack_d8);
      FUN_0033dc34(&uStack_100,&uStack_80);
      FUN_0033e1ac(&uStack_80);
      if (iStack_f8 == 1) goto LAB_0033eab0;
      cVar3 = *(char *)((long)param_1 + 0x54);
      *(undefined1 *)((long)param_1 + 0x54) = 0;
      if (cVar3 == '\0') {
        *(undefined1 *)extraout_x8 = 0;
        uVar8 = 0;
        goto LAB_0033eaec;
      }
      if (cVar3 == '\x02') {
        FUN_0033eba4(param_1);
        uVar10 = 4;
        goto LAB_0033eae0;
      }
      FUN_0033e1ac(&uStack_100);
    } while ((char)param_1[0x12] == '\0');
  }
  func_0x007712c0();
LAB_0033eab0:
  FUN_0033eba4(param_1);
  uVar10 = uStack_100;
  uStack_100 = 0x36;
LAB_0033eae0:
  *extraout_x8 = uVar10;
  uVar8 = 1;
LAB_0033eaec:
  *(undefined1 *)(extraout_x8 + 1) = uVar8;
  FUN_0033e1ac(&uStack_100);
  return;
}



/* Entry: 0033eba4; end: 0033ebdf;  */

ulong * FUN_0033eba4(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *extraout_x8;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((char)param_1[0x12] == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 1;
    FUN_0033e574(param_1 + 0x16);
    plVar8 = (long *)param_1[0x15];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return param_1 + 0x14;
  }
  func_0x00771328();
  uVar6 = *param_1;
  if (uVar6 == 0) {
    uVar4 = 0;
    if ((int)param_1[2] == 0) goto LAB_0033ec24;
    if ((int)param_1[2] != 1) {
      FUN_0033e178();
      *(undefined1 *)param_1 = 0;
      *(undefined4 *)(param_1 + 3) = 0xffffffff;
      FUN_0033ec68();
      return param_1;
    }
    uVar6 = param_1[1];
  }
  *extraout_x8 = uVar6;
  if ((uVar6 & 1) != 0) {
    piVar7 = (int *)(uVar6 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = 1;
LAB_0033ec24:
  *(undefined4 *)(extraout_x8 + 1) = uVar4;
  return param_1;
}



/* Entry: 0033ebe0; end: 0033ec33;  */

ulong * FUN_0033ebe0(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar4 = *param_2;
  if (uVar4 == 0) {
    uVar3 = 0;
    if ((int)param_2[2] == 0) goto LAB_0033ec24;
    if ((int)param_2[2] != 1) {
      FUN_0033e178();
      *(undefined1 *)param_2 = 0;
      *(undefined4 *)(param_2 + 3) = 0xffffffff;
      FUN_0033ec68();
      return param_2;
    }
    uVar4 = param_2[1];
  }
  *param_1 = uVar4;
  if ((uVar4 & 1) != 0) {
    piVar5 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar3 = 1;
LAB_0033ec24:
  *(undefined4 *)(param_1 + 1) = uVar3;
  return param_2;
}



/* Entry: 0033ec34; end: 0033ec67;  */

undefined1 * FUN_0033ec34(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_0033ec68();
  return param_1;
}



/* Entry: 0033ec68; end: 0033ecf3;  */

void FUN_0033ec68(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009db668)[*(uint *)(param_1 + 0x18)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_009db678)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 0033ecf4; end: 0033ed03;  */

void FUN_0033ecf4(void)

{
  return;
}



/* Entry: 0033ed04; end: 0033ed47;  */

void FUN_0033ed04(undefined8 param_1,long *param_2,long *param_3)

{
  if (*param_3 == 0) {
    FUN_0033ed48(param_2 + 1,param_3 + 1);
    *param_2 = 0;
  }
  else {
    *param_2 = *param_3;
    *param_3 = 0x36;
  }
  return;
}



/* Entry: 0033ed48; end: 0033ed7b;  */

undefined1 * FUN_0033ed48(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  FUN_0033ed7c();
  return param_1;
}



/* Entry: 0033ed7c; end: 0033ee07;  */

void FUN_0033ed7c(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009db688)[*(uint *)(param_1 + 8)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_009db698)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 8) = uVar1;
  }
  return;
}



/* Entry: 0033ee08; end: 0033ee0b;  */

void FUN_0033ee08(void)

{
  return;
}



/* Entry: 0033ee0c; end: 0033ee2b;  */

void FUN_0033ee0c(undefined8 param_1,ulong *param_2)

{
  if ((*param_2 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0033ee2c; end: 0033ee43;  */

void FUN_0033ee2c(void)

{
  return;
}



/* Entry: 0033ee44; end: 0033ee9b;  */

long * FUN_0033ee44(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 0033ee9c; end: 0033efb3;  */

void FUN_0033ee9c(undefined8 *param_1,long param_2)

{
  bool bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 auStack_70 [16];
  int iStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = *(ulong *)(param_2 + 8);
  func_0x0034030c();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    uStack_50 = 0;
  }
  uStack_48 = (uint)bVar1;
  uStack_40 = 1;
  FUN_0033efb4(auStack_70,&uStack_50);
  FUN_0033f090(&uStack_50);
  if (iStack_60 == 0) {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    if (iStack_60 != 1) goto LAB_0033ef98;
    FUN_0033ed48(&uStack_50,auStack_70);
    uStack_58 = 0;
    FUN_0033ed48(param_1 + 1,&uStack_50);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 3) = 1;
    FUN_0033f290(&uStack_58);
  }
  FUN_0033f090(auStack_70);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
LAB_0033ef98:
  FUN_0033e178();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x33efa0);
  (*pcVar2)();
}



/* Entry: 0033efb4; end: 0033efe7;  */

undefined1 * FUN_0033efb4(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_0033efe8();
  return param_1;
}



/* Entry: 0033efe8; end: 0033f073;  */

void FUN_0033efe8(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009db6a8)[*(uint *)(param_1 + 0x10)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_009db6b8)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 0033f074; end: 0033f08f;  */

void FUN_0033f074(void)

{
  return;
}



/* Entry: 0033f090; end: 0033f0e7;  */

long FUN_0033f090(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009db6a8)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return param_1;
}



/* Entry: 0033f0e8; end: 0033f13f;  */

ulong * FUN_0033f0e8(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *param_2;
  if (uVar3 == 0) {
    FUN_0033f140(param_1 + 1,param_2 + 1);
    *param_1 = 0;
  }
  else {
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
    }
  }
  return param_1;
}



/* Entry: 0033f140; end: 0033f183;  */

undefined1 * FUN_0033f140(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  FUN_0033f184();
  return param_1;
}



/* Entry: 0033f184; end: 0033f20f;  */

void FUN_0033f184(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009db688)[*(uint *)(param_1 + 8)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_009db6c8)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 8) = uVar1;
  }
  return;
}



/* Entry: 0033f210; end: 0033f237;  */

void FUN_0033f210(void)

{
  return;
}



/* Entry: 0033f238; end: 0033f28f;  */

long FUN_0033f238(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009db688)[*(uint *)(param_1 + 8)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return param_1;
}



/* Entry: 0033f290; end: 0033f2cf;  */

ulong * FUN_0033f290(ulong *param_1)

{
  if (*param_1 == 0) {
    FUN_0033f238(param_1 + 1);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0033f2d0; end: 0033f327;  */

long FUN_0033f2d0(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009db668)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}



/* Entry: 0033f328; end: 0033f43f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0033f328(long *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long *plVar14;
  long lVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  long lVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  long alStack_170 [4];
  undefined8 uStack_150;
  long lStack_b8;
  long lStack_b0;
  ulong uStack_40;
  char cStack_38;
  
  pbVar1 = (byte *)((long)param_1 + 0x91);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) != 0) {
    plVar14 = param_1 + 2;
    plVar7 = plVar14;
    func_0x00339d8c();
    if ((char)param_1[0x12] == '\0') {
      FUN_003d3424();
      lVar19 = *plVar7;
      FUN_003d3424();
      *plVar7 = (long)param_1;
      plVar7 = param_1;
      FUN_0033e874(&uStack_40);
      FUN_003d3424();
      *plVar7 = lVar19;
      func_0x00339da8(plVar14);
      uVar20 = uStack_40;
      if (cStack_38 != '\0') {
        uStack_40 = 0x36;
        if (uVar20 == 0) {
          FUN_0033ce58(param_1[0x11]);
        }
        else if ((uVar20 & 1) != 0) {
          FUN_0055293c();
        }
      }
      FUN_0033e204(&uStack_40);
    }
    else {
      func_0x00339da8(plVar14);
    }
    plVar14 = param_1 + 10;
    do {
      iVar5 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
    return;
  }
  func_0x0077135c();
  func_0x0040cf10();
  FUN_0033e204(&uStack_40);
  __Unwind_Resume();
  lVar19 = *(long *)((long)param_1 + 0x10);
  lStack_b0 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar8 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(lVar19 + 0x20));
  puVar21 = *ppuVar8;
  *ppuVar8 = extraout_x8;
  ppuVar9 = &PTR___tlv_bootstrap_00b2c3a8;
  (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(lVar19 + 0x40));
  puVar22 = *ppuVar9;
  *ppuVar9 = extraout_x8_00;
  ppuVar10 = &PTR___tlv_bootstrap_00b2c3c0;
  (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(lVar19 + 0x48));
  puVar23 = *ppuVar10;
  *ppuVar10 = extraout_x8_01;
  ppuVar11 = &PTR___tlv_bootstrap_00b2c3d8;
  (*(code *)PTR___tlv_bootstrap_00b2c3d8)(lVar19 + 0x38);
  puVar24 = *ppuVar11;
  *ppuVar11 = extraout_x8_02;
  *(undefined8 *)(param_2 + 0x38) = 1;
  alStack_170[1] = 0;
  uStack_150 = 0;
  plVar14 = *(long **)(lVar19 + 0x10);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *plVar14 = *plVar14 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar2 = *(byte *)(param_2 + 0x10);
  uVar13 = (uint)bVar2;
  alStack_170[0] = param_2;
  lStack_b8 = lVar19;
  if ((bVar2 >> 6 & 1) == 0) {
    if (((bVar2 >> 3 & 1) == 0) ||
       (puVar17 = *(undefined4 **)(lVar19 + 0x70), puVar17 == (undefined4 *)0x0)) goto LAB_003acf78;
    uVar18 = 3;
    switch(*puVar17) {
    case 1:
      uVar18 = 4;
    case 0:
      *puVar17 = uVar18;
      break;
    case 2:
      goto LAB_003acf78;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      goto code_r0x003ad260;
    }
    lVar15 = *(long *)(param_2 + 8);
    *(undefined8 *)(puVar17 + 0xc) = *(undefined8 *)(lVar15 + 0x38);
    *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(lVar15 + 0x48);
    *(code **)(puVar17 + 6) = FUN_003afc08;
    *(long *)(puVar17 + 8) = lVar19;
    *(undefined8 *)(puVar17 + 10) = 0;
    *(long *)(*(long *)(param_2 + 8) + 0x48) = *(long *)(lVar19 + 0x70) + 0x10;
    uVar13 = (uint)*(byte *)(param_2 + 0x10);
LAB_003acf78:
    if ((uVar13 & 1) == 0) {
      if ((uVar13 >> 5 & 1) == 0) {
        uVar20 = *(ulong *)(lVar19 + 0xa0);
        if (uVar20 != 0) {
          if ((uVar20 & 1) != 0) {
            piVar16 = (int *)(uVar20 - 1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar4) {
                *piVar16 = *piVar16 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          uStack_198 = uVar20;
          FUN_003ac8fc(alStack_170,&uStack_198,alStack_170 + 1);
          if ((uVar20 & 1) != 0) {
            FUN_0055293c(uVar20);
          }
        }
      }
      else if (*(int *)(lVar19 + 0xac) == 5) {
        uVar20 = *(ulong *)(lVar19 + 0xa0);
        if ((uVar20 & 1) != 0) {
          piVar16 = (int *)(uVar20 - 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar4) {
              *piVar16 = *piVar16 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_188 = uVar20;
        FUN_003ac8fc(alStack_170,&uStack_188,alStack_170 + 1);
        if ((uVar20 & 1) != 0) {
          FUN_0055293c(uVar20);
        }
      }
      else {
        if (*(int *)(lVar19 + 0xac) != 0) {
          uVar12 = 0x24a;
          goto LAB_003ad208;
        }
        *(undefined4 *)(lVar19 + 0xac) = 2;
        if (*(long *)(param_2 + 0x38) != 0) {
          *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
        }
        lVar15 = *(long *)(param_2 + 8);
        *(undefined8 *)(lVar19 + 0x68) = *(undefined8 *)(lVar15 + 0x80);
        *(undefined8 *)(lVar19 + 0x78) = *(undefined8 *)(lVar15 + 0x90);
        *(long *)(lVar15 + 0x90) = lVar19 + 0x80;
        lStack_190 = param_2;
        FUN_003ac6f4(&lStack_190);
      }
    }
    else if ((*(int *)(lVar19 + 0xa8) == 3) || (*(int *)(lVar19 + 0xac) == 5)) {
      uVar20 = *(ulong *)(lVar19 + 0xa0);
      if ((uVar20 & 1) != 0) {
        piVar16 = (int *)(uVar20 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = *piVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_180 = uVar20;
      FUN_003ac8fc(alStack_170,&uStack_180,alStack_170 + 1);
      if ((uVar20 & 1) != 0) {
        FUN_0055293c(uVar20);
      }
    }
    else {
      if (*(int *)(lVar19 + 0xa8) != 0) {
        uVar12 = 0x237;
LAB_003ad208:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                     ,uVar12,2,"assertion failed: %s");
        _abort();
        goto LAB_003ad264;
      }
      *(undefined4 *)(lVar19 + 0xa8) = 1;
      if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
        if (*(int *)(lVar19 + 0xac) != 0) {
          uVar12 = 0x23c;
          goto LAB_003ad208;
        }
        *(undefined4 *)(lVar19 + 0xac) = 1;
      }
      FUN_003ac75c(lVar19 + 0x60,alStack_170);
      FUN_003ad4b8(lVar19,alStack_170 + 1);
    }
    if (alStack_170[0] != 0) {
      lVar15 = *(long *)(lVar19 + 0x10);
      func_0x003a6564(lVar15,*(long *)(lVar15 + 0x28) + -1);
      if (lVar15 == *(long *)(lVar19 + 0x18)) {
        uStack_1a0 = 4;
        FUN_003ac8fc(alStack_170,&uStack_1a0,alStack_170 + 1);
      }
      else {
LAB_003ad17c:
        FUN_003ac7b0(alStack_170,alStack_170 + 1);
      }
    }
  }
  else {
    if ((bVar2 & 0x3f) != 0) {
      uVar12 = 0x1ff;
      goto LAB_003ad208;
    }
    uVar20 = *(ulong *)(*(long *)(param_2 + 8) + 0x98);
    if ((uVar20 & 1) != 0) {
      piVar16 = (int *)(uVar20 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar4) {
          *piVar16 = *piVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_178 = uVar20;
    FUN_003ad2f4(lVar19,&uStack_178);
    if ((uVar20 & 1) != 0) {
      FUN_0055293c(uVar20);
    }
    lVar15 = *(long *)(lVar19 + 0x10);
    func_0x003a6564(lVar15,*(long *)(lVar15 + 0x28) + -1);
    if (lVar15 != *(long *)(lVar19 + 0x18)) goto LAB_003ad17c;
    FUN_003ac84c(alStack_170,alStack_170 + 1);
  }
  FUN_003aca08(alStack_170 + 1);
  FUN_003ac6f4(alStack_170);
  *ppuVar11 = puVar24;
  *ppuVar10 = puVar23;
  *ppuVar9 = puVar22;
  *ppuVar8 = puVar21;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
code_r0x003ad260:
  _abort();
LAB_003ad264:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x3ad268);
  (*pcVar6)();
}



/* Entry: 0033f440; end: 0033f447;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0033f440(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uStack_160;
  ulong uStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long alStack_130 [4];
  undefined8 uStack_110;
  long lStack_78;
  long lStack_70;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar6 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(lVar5 + 0x20));
  puVar18 = *ppuVar6;
  *ppuVar6 = extraout_x8;
  ppuVar7 = &PTR___tlv_bootstrap_00b2c3a8;
  (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(lVar5 + 0x40));
  puVar19 = *ppuVar7;
  *ppuVar7 = extraout_x8_00;
  ppuVar8 = &PTR___tlv_bootstrap_00b2c3c0;
  (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(lVar5 + 0x48));
  puVar20 = *ppuVar8;
  *ppuVar8 = extraout_x8_01;
  ppuVar9 = &PTR___tlv_bootstrap_00b2c3d8;
  (*(code *)PTR___tlv_bootstrap_00b2c3d8)(lVar5 + 0x38);
  puVar21 = *ppuVar9;
  *ppuVar9 = extraout_x8_02;
  *(undefined8 *)(param_2 + 0x38) = 1;
  alStack_130[1] = 0;
  uStack_110 = 0;
  plVar12 = *(long **)(lVar5 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = *plVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar1 = *(byte *)(param_2 + 0x10);
  uVar11 = (uint)bVar1;
  alStack_130[0] = param_2;
  lStack_78 = lVar5;
  if ((bVar1 >> 6 & 1) == 0) {
    if (((bVar1 >> 3 & 1) == 0) ||
       (puVar15 = *(undefined4 **)(lVar5 + 0x70), puVar15 == (undefined4 *)0x0)) goto LAB_003acf78;
    uVar16 = 3;
    switch(*puVar15) {
    case 1:
      uVar16 = 4;
    case 0:
      *puVar15 = uVar16;
      break;
    case 2:
      goto LAB_003acf78;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      goto code_r0x003ad260;
    }
    lVar13 = *(long *)(param_2 + 8);
    *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(lVar13 + 0x38);
    *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(lVar13 + 0x48);
    *(code **)(puVar15 + 6) = FUN_003afc08;
    *(long *)(puVar15 + 8) = lVar5;
    *(undefined8 *)(puVar15 + 10) = 0;
    *(long *)(*(long *)(param_2 + 8) + 0x48) = *(long *)(lVar5 + 0x70) + 0x10;
    uVar11 = (uint)*(byte *)(param_2 + 0x10);
LAB_003acf78:
    if ((uVar11 & 1) == 0) {
      if ((uVar11 >> 5 & 1) == 0) {
        uVar17 = *(ulong *)(lVar5 + 0xa0);
        if (uVar17 != 0) {
          if ((uVar17 & 1) != 0) {
            piVar14 = (int *)(uVar17 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar3) {
                *piVar14 = *piVar14 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_158 = uVar17;
          FUN_003ac8fc(alStack_130,&uStack_158,alStack_130 + 1);
          if ((uVar17 & 1) != 0) {
            FUN_0055293c(uVar17);
          }
        }
      }
      else if (*(int *)(lVar5 + 0xac) == 5) {
        uVar17 = *(ulong *)(lVar5 + 0xa0);
        if ((uVar17 & 1) != 0) {
          piVar14 = (int *)(uVar17 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar3) {
              *piVar14 = *piVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_148 = uVar17;
        FUN_003ac8fc(alStack_130,&uStack_148,alStack_130 + 1);
        if ((uVar17 & 1) != 0) {
          FUN_0055293c(uVar17);
        }
      }
      else {
        if (*(int *)(lVar5 + 0xac) != 0) {
          uVar10 = 0x24a;
          goto LAB_003ad208;
        }
        *(undefined4 *)(lVar5 + 0xac) = 2;
        if (*(long *)(param_2 + 0x38) != 0) {
          *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
        }
        lVar13 = *(long *)(param_2 + 8);
        *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(lVar13 + 0x80);
        *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar13 + 0x90);
        *(long *)(lVar13 + 0x90) = lVar5 + 0x80;
        lStack_150 = param_2;
        FUN_003ac6f4(&lStack_150);
      }
    }
    else if ((*(int *)(lVar5 + 0xa8) == 3) || (*(int *)(lVar5 + 0xac) == 5)) {
      uVar17 = *(ulong *)(lVar5 + 0xa0);
      if ((uVar17 & 1) != 0) {
        piVar14 = (int *)(uVar17 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = *piVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_140 = uVar17;
      FUN_003ac8fc(alStack_130,&uStack_140,alStack_130 + 1);
      if ((uVar17 & 1) != 0) {
        FUN_0055293c(uVar17);
      }
    }
    else {
      if (*(int *)(lVar5 + 0xa8) != 0) {
        uVar10 = 0x237;
LAB_003ad208:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                     ,uVar10,2,"assertion failed: %s");
        _abort();
        goto LAB_003ad264;
      }
      *(undefined4 *)(lVar5 + 0xa8) = 1;
      if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
        if (*(int *)(lVar5 + 0xac) != 0) {
          uVar10 = 0x23c;
          goto LAB_003ad208;
        }
        *(undefined4 *)(lVar5 + 0xac) = 1;
      }
      FUN_003ac75c(lVar5 + 0x60,alStack_130);
      FUN_003ad4b8(lVar5,alStack_130 + 1);
    }
    if (alStack_130[0] != 0) {
      lVar13 = *(long *)(lVar5 + 0x10);
      func_0x003a6564(lVar13,*(long *)(lVar13 + 0x28) + -1);
      if (lVar13 == *(long *)(lVar5 + 0x18)) {
        uStack_160 = 4;
        FUN_003ac8fc(alStack_130,&uStack_160,alStack_130 + 1);
      }
      else {
LAB_003ad17c:
        FUN_003ac7b0(alStack_130,alStack_130 + 1);
      }
    }
  }
  else {
    if ((bVar1 & 0x3f) != 0) {
      uVar10 = 0x1ff;
      goto LAB_003ad208;
    }
    uVar17 = *(ulong *)(*(long *)(param_2 + 8) + 0x98);
    if ((uVar17 & 1) != 0) {
      piVar14 = (int *)(uVar17 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar3) {
          *piVar14 = *piVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_138 = uVar17;
    FUN_003ad2f4(lVar5,&uStack_138);
    if ((uVar17 & 1) != 0) {
      FUN_0055293c(uVar17);
    }
    lVar13 = *(long *)(lVar5 + 0x10);
    func_0x003a6564(lVar13,*(long *)(lVar13 + 0x28) + -1);
    if (lVar13 != *(long *)(lVar5 + 0x18)) goto LAB_003ad17c;
    FUN_003ac84c(alStack_130,alStack_130 + 1);
  }
  FUN_003aca08(alStack_130 + 1);
  FUN_003ac6f4(alStack_130);
  *ppuVar9 = puVar21;
  *ppuVar8 = puVar20;
  *ppuVar7 = puVar19;
  *ppuVar6 = puVar18;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
code_r0x003ad260:
  _abort();
LAB_003ad264:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3ad268);
  (*pcVar4)();
}



/* Entry: 0033f448; end: 0033f547;  */

long * FUN_0033f448(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar3 = *(long **)(param_2 + 8);
  FUN_0033f548(alStack_68,param_5);
  (**(code **)(*plVar3 + 8))(param_1,plVar3,param_3,param_4,alStack_68);
  if (plStack_50 == alStack_68) {
    lVar1 = 4;
    plVar3 = alStack_68;
LAB_0033f4d0:
    (**(code **)(*plVar3 + lVar1 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar1 = 5;
      goto LAB_0033f4d0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return plVar3;
  }
  ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar1 = 4;
    plStack_50 = alStack_68;
  }
  else {
    if (plStack_50 == (long *)0x0) goto LAB_0033f540;
    lVar1 = 5;
  }
  (**(code **)(*plStack_50 + lVar1 * 8))();
LAB_0033f540:
  __Unwind_Resume();
  plVar2 = (long *)(param_3 + 0x18);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    plVar2 = plVar3 + 3;
  }
  else {
    if (lVar1 == param_3) {
      plVar3[3] = (long)plVar3;
      (**(code **)(*(long *)*plVar2 + 0x18))((long *)*plVar2,plVar3);
      return plVar3;
    }
    plVar3[3] = lVar1;
  }
  *plVar2 = 0;
  return plVar3;
}



/* Entry: 0033f548; end: 0033f5ab;  */

long FUN_0033f548(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 0033f5ac; end: 0033f637;  */

void FUN_0033f5ac(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 0033f638; end: 0033f63b;  */

undefined8 * FUN_0033f638(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_009df750;
  param_1[1] = &PTR_FUN_009df7a8;
  if (param_1[0x16] == 0) {
    if ((param_1[0x14] & 1) != 0) {
      FUN_0055293c();
    }
    FUN_003ac6f4(param_1 + 0xc);
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_009df6d8;
    param_1[1] = &PTR_FUN_009df730;
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
               ,0x1e5,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3acdd4);
  (*pcVar1)();
}



/* Entry: 0033f63c; end: 0033f64f;  */

void FUN_0033f63c(void)

{
  FUN_003acd30();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0033f650; end: 0033f657;  */

void FUN_0033f650(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 uStack_41;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  lVar3 = *(long *)(param_1 + 0x10);
  plVar6 = (long *)(lVar3 + 0x48);
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    return;
  }
  func_0x00771390();
  pcStack_18 = FUN_0033f680;
  plVar6 = *(long **)(lVar3 + 0x10);
  puVar4 = (undefined8 *)plVar6[7];
  plVar6[7] = 0;
  puStack_20 = &stack0xfffffffffffffff0;
  if (puVar4 != (undefined8 *)0x0) {
    puStack_20 = &stack0xfffffffffffffff0;
    (**(code **)*puVar4)();
  }
  (**(code **)(*plVar6 + 8))(plVar6);
  if (param_3 == 0) {
    return;
  }
  func_0x007713c4();
  pcStack_38 = FUN_0033f6d0;
  ppuStack_40 = &puStack_20;
  FUN_0033f6f8(&uStack_41,plVar6,param_2);
  return;
}



/* Entry: 0033f658; end: 0033f67f;  */

void FUN_0033f658(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined1 uStack_41;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  plVar5 = (long *)(param_1 + 0x48);
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 == 0) {
    return;
  }
  func_0x00771390();
  pcStack_18 = FUN_0033f680;
  plVar5 = *(long **)(param_1 + 0x10);
  puVar3 = (undefined8 *)plVar5[7];
  plVar5[7] = 0;
  puStack_20 = &stack0xfffffffffffffff0;
  if (puVar3 != (undefined8 *)0x0) {
    puStack_20 = &stack0xfffffffffffffff0;
    (**(code **)*puVar3)();
  }
  (**(code **)(*plVar5 + 8))(plVar5);
  if (param_3 == 0) {
    return;
  }
  func_0x007713c4();
  pcStack_38 = FUN_0033f6d0;
  ppuStack_40 = &puStack_20;
  FUN_0033f6f8(&uStack_41,plVar5,param_2);
  return;
}



/* Entry: 0033f680; end: 0033f6cf;  */

void FUN_0033f680(long param_1,undefined8 param_2,long param_3)

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
  func_0x007713c4();
  pcStack_28 = FUN_0033f6d0;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_0033f6f8(&uStack_31,plVar2,param_2);
  return;
}



/* Entry: 0033f6d0; end: 0033f6f7;  */

void FUN_0033f6d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_0033f6f8(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 0033f6f8; end: 0033f863;  */

void FUN_0033f6f8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  ulong uStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  ulong auStack_68 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)((long)param_4 + 0x14) == 0) {
    FUN_003a1d70(auStack_78,param_4[1]);
    FUN_0033bb3c(auStack_68,auStack_78,*param_4,param_3);
    if (plStack_70 != (long *)0x0) {
      plVar1 = plStack_70 + 1;
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
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
      }
    }
    puVar5 = *(undefined8 **)(param_3 + 8);
    if (auStack_68[0] == 0) {
      *puVar5 = &PTR_FUN_009db2e0;
      puVar5[2] = uStack_50;
      puVar5[1] = uStack_58;
      puVar5[4] = uStack_40;
      puVar5[3] = uStack_48;
      uStack_48 = 0;
      uStack_40 = 0;
      do {
        uVar4 = uStack_38;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(&uStack_38,0x10);
        if (bVar3) {
          uStack_38 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar5[5] = uVar4;
      *puVar5 = &PTR_FUN_009db368;
      *param_1 = 0;
    }
    else {
      *puVar5 = &PTR_FUN_009db778;
      uStack_80 = auStack_68[0];
      if ((auStack_68[0] & 1) != 0) {
        piVar6 = (int *)(auStack_68[0] - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003fbec4(param_1,&uStack_80);
      if ((uStack_80 & 1) != 0) {
        FUN_0055293c();
      }
    }
    FUN_0033f86c(auStack_68);
    return;
  }
  func_0x007713f8();
  func_0x0040cf10();
  FUN_0033c494(&uStack_80);
  FUN_0033f86c(auStack_68);
  __Unwind_Resume(param_2);
  return;
}



/* Entry: 0033f864; end: 0033f86b;  */

void FUN_0033f864(void)

{
  return;
}



/* Entry: 0033f86c; end: 0033f8ab;  */

ulong * FUN_0033f86c(ulong *param_1)

{
  if (*param_1 == 0) {
    FUN_0033d130(param_1 + 1);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0033f8ac; end: 0033f8cb;  */

void FUN_0033f8ac(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0033f8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 0033f8cc; end: 0033f913;  */

void FUN_0033f8cc(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x58))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 0033f914; end: 0033f91b;  */

void FUN_0033f914(long param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  ulong **ppuVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined8 uVar16;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long *plVar17;
  ulong uVar18;
  undefined4 *puVar19;
  ulong *puVar20;
  int *piVar21;
  undefined4 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  char *pcStack_160;
  undefined *puStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong *puStack_130;
  ulong auStack_128 [3];
  undefined8 uStack_110;
  long lStack_78;
  long lStack_70;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar8 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(lVar7 + 0x20));
  puStack_150 = *ppuVar8;
  *ppuVar8 = extraout_x8;
  ppuVar9 = &PTR___tlv_bootstrap_00b2c3a8;
  (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(lVar7 + 0x40));
  puVar23 = *ppuVar9;
  *ppuVar9 = extraout_x8_00;
  ppuVar10 = &PTR___tlv_bootstrap_00b2c3c0;
  (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(lVar7 + 0x48));
  puVar24 = *ppuVar10;
  *ppuVar10 = extraout_x8_01;
  ppuVar11 = &PTR___tlv_bootstrap_00b2c3d8;
  (*(code *)PTR___tlv_bootstrap_00b2c3d8)(lVar7 + 0x38);
  puVar25 = *ppuVar11;
  *ppuVar11 = extraout_x8_02;
  param_2[7] = 1;
  auStack_128[0] = 0;
  uStack_110 = 0;
  plVar17 = *(long **)(lVar7 + 0x10);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar4) {
      *plVar17 = *plVar17 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar2 = (byte)param_2[2];
  puStack_130 = param_2;
  lStack_78 = lVar7;
  if ((bVar2 >> 6 & 1) != 0) {
    if ((bVar2 & 0x3f) != 0) {
      pcStack_160 = 
      "!batch->send_initial_metadata && !batch->send_trailing_metadata && !batch->send_message && !batch->recv_initial_metadata && !batch->recv_message && !batch->recv_trailing_metadata"
      ;
      uVar16 = 0x3d2;
      goto LAB_003aeeec;
    }
    uVar18 = *(ulong *)(param_2[1] + 0x98);
    if ((uVar18 & 1) != 0) {
      piVar21 = (int *)(uVar18 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = *piVar21 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_3 = auStack_128;
    uStack_138 = uVar18;
    FUN_003aef94(lVar7,&uStack_138,param_3);
    if ((uVar18 & 1) != 0) {
      FUN_0055293c(uVar18);
    }
    lVar12 = *(long *)(lVar7 + 0x10);
    func_0x003a6564(lVar12,*(long *)(lVar12 + 0x28) + -1);
    if (lVar12 == *(long *)(lVar7 + 0x18)) {
      puVar15 = auStack_128;
      FUN_003ac84c(&puStack_130);
      goto LAB_003aee34;
    }
    goto LAB_003aee28;
  }
  if ((bVar2 >> 3 & 1) != 0) {
    if ((bVar2 & 0x37) == 0) {
      if (*(int *)(lVar7 + 0xa8) == 0) {
        uVar18 = param_2[1];
        *(undefined8 *)(lVar7 + 0x60) = *(undefined8 *)(uVar18 + 0x38);
        *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(uVar18 + 0x48);
        *(long *)(uVar18 + 0x48) = lVar7 + 0x78;
        *(undefined4 *)(lVar7 + 0xa8) = 1;
        goto LAB_003aecbc;
      }
      pcStack_160 = "recv_initial_state_ == RecvInitialState::kInitial";
      uVar16 = 0x3e5;
    }
    else {
      pcStack_160 = 
      "!batch->send_initial_metadata && !batch->send_trailing_metadata && !batch->send_message && !batch->recv_message && !batch->recv_trailing_metadata"
      ;
      uVar16 = 0x3e3;
    }
LAB_003aeeec:
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                 ,uVar16,2,"assertion failed: %s");
    goto LAB_003aef08;
  }
LAB_003aecbc:
  puVar19 = *(undefined4 **)(lVar7 + 0x68);
  if ((puVar19 == (undefined4 *)0x0) || ((param_2[2] & 1) == 0)) {
    bVar4 = false;
    goto LAB_003aed94;
  }
  uVar22 = 2;
  switch(*puVar19) {
  case 1:
    uVar22 = 3;
  case 0:
    *puVar19 = uVar22;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    goto LAB_003aef08;
  case 6:
    uVar18 = *(ulong *)(lVar7 + 0x98);
    if ((uVar18 & 1) != 0) {
      piVar21 = (int *)(uVar18 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = *piVar21 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_3 = auStack_128;
    uStack_140 = uVar18;
    FUN_003ac8fc(&puStack_130,&uStack_140,param_3);
    if ((uVar18 & 1) != 0) {
      FUN_0055293c(uVar18);
    }
  }
  FUN_003ac75c(*(long *)(lVar7 + 0x68) + 8,&puStack_130);
  if (puStack_130 == (ulong *)0x0) {
LAB_003aee14:
    puVar15 = auStack_128;
    FUN_003af164(lVar7);
  }
  else {
    bVar4 = true;
LAB_003aed94:
    puVar15 = puStack_130;
    if (((byte)puStack_130[2] >> 1 & 1) != 0) {
      iVar1 = *(int *)(lVar7 + 0xac);
      if (iVar1 == 0) {
        FUN_003ac75c(lVar7 + 0xa0,&puStack_130);
        *(undefined4 *)(lVar7 + 0xac) = 1;
        goto LAB_003aee14;
      }
      if (iVar1 == 3) {
        uVar18 = *(ulong *)(lVar7 + 0x98);
        if ((uVar18 & 1) != 0) {
          piVar21 = (int *)(uVar18 - 1);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
            if (bVar5) {
              *piVar21 = *piVar21 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar15 = &uStack_148;
        param_3 = auStack_128;
        uStack_148 = uVar18;
        FUN_003ac8fc(&puStack_130,puVar15,param_3);
        if ((uVar18 & 1) != 0) {
          FUN_0055293c(uVar18);
        }
      }
      else if (iVar1 - 1U < 2) {
LAB_003aef08:
        _abort();
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x3aef10);
        (*pcVar6)();
      }
    }
    if (bVar4) goto LAB_003aee14;
  }
  if (puStack_130 != (ulong *)0x0) {
LAB_003aee28:
    puVar15 = auStack_128;
    FUN_003ac7b0(&puStack_130);
  }
LAB_003aee34:
  FUN_003aca08(auStack_128);
  ppuVar13 = &puStack_130;
  FUN_003ac6f4();
  *ppuVar11 = puVar25;
  *ppuVar10 = puVar24;
  *ppuVar9 = puVar23;
  *ppuVar8 = puStack_150;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
    ___stack_chk_fail();
    if ((int)puVar15 != 0) {
      func_0x0040cf10();
      FUN_0033c494(&uStack_138);
      FUN_003aca08(auStack_128);
      FUN_003ac6f4(&puStack_130);
      *ppuVar11 = puVar25;
      *ppuVar10 = puVar24;
      *ppuVar9 = puVar23;
      *ppuVar8 = puStack_150;
    }
    __Unwind_Resume();
    pcStack_168 = FUN_003aef94;
    puVar14 = ppuVar13[0x13];
    puVar20 = (ulong *)*puVar15;
    ppuStack_190 = ppuVar11;
    ppuStack_188 = ppuVar10;
    ppuStack_180 = ppuVar9;
    ppuStack_178 = ppuVar8;
    puStack_170 = &stack0xfffffffffffffff0;
    if (puVar20 != puVar14) {
      if (((ulong)puVar20 & 1) != 0) {
        piVar21 = (int *)((long)puVar20 + -1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar4) {
            *piVar21 = *piVar21 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar20 = (ulong *)*puVar15;
      }
      ppuVar13[0x13] = puVar20;
      if (((ulong)puVar14 & 1) != 0) {
        FUN_0055293c();
      }
    }
    (**(code **)(*ppuVar13[0xb] + 8))();
    ppuVar13[0xb] = (ulong *)&PTR_PTR_00afa4e0;
    (**(code **)(PTR_PTR_00afa4e0 + 8))();
    iVar1 = *(int *)((long)ppuVar13 + 0xac);
    *(undefined4 *)((long)ppuVar13 + 0xac) = 3;
    if (iVar1 == 1) {
      uVar18 = *puVar15;
      if ((uVar18 & 1) != 0) {
        piVar21 = (int *)(uVar18 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar4) {
            *piVar21 = *piVar21 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_198 = uVar18;
      FUN_003ac8fc(ppuVar13 + 0x14,&uStack_198,param_3);
      if ((uVar18 & 1) != 0) {
        FUN_0055293c(uVar18);
      }
    }
    puVar14 = ppuVar13[0xd];
    if (puVar14 != (ulong *)0x0) {
      if ((int)*puVar14 - 2U < 3) {
        uVar18 = *puVar15;
        if ((uVar18 & 1) != 0) {
          piVar21 = (int *)(uVar18 - 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
            if (bVar4) {
              *piVar21 = *piVar21 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_1a0 = uVar18;
        FUN_003ac8fc(puVar14 + 1,&uStack_1a0,param_3);
        if ((uVar18 & 1) != 0) {
          FUN_0055293c(uVar18);
        }
      }
      *(undefined4 *)ppuVar13[0xd] = 6;
    }
    puVar14 = ppuVar13[0xe];
    ppuVar13[0xe] = (ulong *)0x0;
    if (puVar14 != (ulong *)0x0) {
      uStack_1a8 = *puVar15;
      if ((uStack_1a8 & 1) != 0) {
        piVar21 = (int *)(uStack_1a8 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar4) {
            *piVar21 = *piVar21 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_003adfa8(param_3,puVar14,&uStack_1a8,"original_recv_initial_metadata");
      if ((uStack_1a8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0033f91c; end: 0033fa1b;  */

void FUN_0033f91c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar3 = *(long **)(param_2 + 8);
  FUN_0033f548(alStack_68,param_5);
  (**(code **)(*plVar3 + 8))(param_1,plVar3,param_3,param_4,alStack_68);
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plVar3 = alStack_68;
LAB_0033f9a4:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_0033f9a4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plStack_50 = alStack_68;
  }
  else {
    if (plStack_50 == (long *)0x0) goto LAB_0033fa14;
    lVar2 = 5;
  }
  (**(code **)(*plStack_50 + lVar2 * 8))();
LAB_0033fa14:
  __Unwind_Resume();
  plVar1 = (long *)plVar3[1];
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,param_3);
  return;
}



/* Entry: 0033fa1c; end: 0033faa7;  */

void FUN_0033fa1c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))((long *)(param_1 + 0x10),param_2);
  return;
}


