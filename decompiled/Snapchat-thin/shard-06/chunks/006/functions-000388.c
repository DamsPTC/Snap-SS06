/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a840b4; end: 104a840bb;  */

void FUN_104a840b4(void)

{
  return;
}



/* Entry: 104a840bc; end: 104a840df;  */

void FUN_104a840bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1107c2440;
  return;
}



/* Entry: 104a840e0; end: 104a840e3;  */

void FUN_104a840e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a840e4; end: 104a8411f;  */

long FUN_104a840e4(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c24a0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a84120; end: 104a8417f;  */

undefined ** FUN_104a84120(void)

{
  return &PTR_DAT_1107c24a0;
}



/* Entry: 104a84180; end: 104a84217;  */

undefined8 * FUN_104a84180(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_1107c2510;
  if (param_1[0xf] == 0) {
    if (param_1[0x10] == 0) {
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      func_0x0001004d89a4(param_1 + 6);
      *param_1 = &PTR_FUN_1107c2180;
      func_0x000100748390(param_1[4]);
      plVar2 = (long *)param_1[5];
      param_1[5] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      func_0x0001004c05d4(param_1 + 2);
      return param_1;
    }
    uVar3 = 0xbb;
  }
  else {
    uVar3 = 0xba;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                      ,uVar3,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a84214);
  (*pcVar1)();
}



/* Entry: 104a84218; end: 104a8422b;  */

void FUN_104a84218(void)

{
  FUN_104a84180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a8422c; end: 104a84237;  */

undefined * FUN_104a8422c(void)

{
  return &UNK_10dd50770;
}



/* Entry: 104a84238; end: 104a842bb;  */

void FUN_104a84238(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x28);
    for (lVar2 = *(long *)(lVar2 + 0x20); lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
      if (*(long **)(lVar2 + 0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar2 + 0x10) + 0x28))();
      }
    }
  }
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x28);
    for (lVar2 = *(long *)(lVar2 + 0x20); lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
      if (*(long **)(lVar2 + 0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar2 + 0x10) + 0x28))();
      }
    }
  }
  return;
}



/* Entry: 104a842bc; end: 104a84317;  */

void FUN_104a842bc(long param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x91) = 1;
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return;
}



/* Entry: 104a84318; end: 104a8439b;  */

void FUN_104a84318(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  
  puVar3 = (undefined8 *)0x10;
  __Znwm();
  uVar4 = *param_2;
  if ((uVar4 & 1) == 0) {
    *puVar3 = &PTR_FUN_1107c1550;
    puVar3[1] = uVar4;
    *param_1 = puVar3;
  }
  else {
    piVar5 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *puVar3 = &PTR_FUN_1107c1550;
    puVar3[1] = uVar4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = puVar3;
    func_0x00010084dad0(uVar4);
  }
  return;
}



/* Entry: 104a8439c; end: 104a84447;  */

undefined8 * FUN_104a8439c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_1107c25f0;
  if (param_1[3] != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                        ,0x198,1,"[%s %p] Destroying subchannel_list %p");
  }
  puVar2 = (undefined8 *)param_1[4];
  puVar1 = (undefined8 *)param_1[5];
  if (puVar2 != puVar1) {
    do {
      puVar3 = puVar2 + 6;
      (**(code **)*puVar2)(puVar2);
      puVar2 = puVar3;
    } while (puVar3 != puVar1);
    puVar2 = (undefined8 *)param_1[4];
  }
  if (puVar2 != (undefined8 *)0x0) {
    param_1[5] = puVar2;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104a84448; end: 104a844fb;  */

void FUN_104a84448(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = param_1 + 1;
  (**(code **)(*param_1 + 0x18))();
  do {
    lVar3 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a8449c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 104a844fc; end: 104a8450f;  */

void FUN_104a844fc(void)

{
  func_0x000104a844a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a84510; end: 104a84597;  */

char * FUN_104a84510(char *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  
  pcVar4 = param_1;
  if (*(long *)(param_1 + 0x18) != 0) {
    pcVar4 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
    ;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                        ,0x1a3,1,"[%s %p] Shutting down subchannel_list %p");
  }
  if (param_1[0x38] != '\0') {
    func_0x00010bda9dc0();
    *(undefined ***)pcVar4 = &PTR_FUN_1107c25f0;
    if (*(long *)(pcVar4 + 0x18) != 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                          ,0x198,1,"[%s %p] Destroying subchannel_list %p");
    }
    puVar3 = *(undefined8 **)(pcVar4 + 0x20);
    puVar1 = *(undefined8 **)(pcVar4 + 0x28);
    if (puVar3 != puVar1) {
      do {
        puVar6 = puVar3 + 6;
        (**(code **)*puVar3)(puVar3);
        puVar3 = puVar6;
      } while (puVar6 != puVar1);
      puVar3 = *(undefined8 **)(pcVar4 + 0x20);
    }
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 **)(pcVar4 + 0x28) = puVar3;
      __ZdlPv();
    }
    return pcVar4;
  }
  param_1[0x38] = '\x01';
  pcVar2 = *(char **)(param_1 + 0x28);
  for (pcVar5 = *(char **)(param_1 + 0x20); pcVar5 != pcVar2; pcVar5 = pcVar5 + 0x30) {
    pcVar4 = pcVar5;
    FUN_104a84748(pcVar5);
  }
  return pcVar4;
}



/* Entry: 104a84598; end: 104a8459b;  */

undefined8 * FUN_104a84598(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_1107c25f0;
  if (param_1[3] != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                        ,0x198,1,"[%s %p] Destroying subchannel_list %p");
  }
  puVar2 = (undefined8 *)param_1[4];
  puVar1 = (undefined8 *)param_1[5];
  if (puVar2 != puVar1) {
    do {
      puVar3 = puVar2 + 6;
      (**(code **)*puVar2)(puVar2);
      puVar2 = puVar3;
    } while (puVar3 != puVar1);
    puVar2 = (undefined8 *)param_1[4];
  }
  if (puVar2 != (undefined8 *)0x0) {
    param_1[5] = puVar2;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104a8459c; end: 104a845c3;  */

void FUN_104a8459c(void)

{
  FUN_104a8439c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a845c4; end: 104a84673;  */

undefined8 * FUN_104a845c4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_1107c2670;
  if (param_1[2] == 0) {
    if ((param_1[5] & 1) != 0) {
      func_0x00010084dad0();
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                      ,0x120,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a8465c);
  (*pcVar4)();
}



/* Entry: 104a84674; end: 104a84723;  */

void FUN_104a84674(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_1107c2670;
  if (param_1[2] == 0) {
    if ((param_1[5] & 1) != 0) {
      func_0x00010084dad0();
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                      ,0x120,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a8470c);
  (*pcVar4)();
}



/* Entry: 104a84724; end: 104a84747;  */

void FUN_104a84724(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a84728);
  (*pcVar1)();
}



/* Entry: 104a84748; end: 104a84a17;  */

void FUN_104a84748(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    if (*(long *)(*(long *)(param_1 + 8) + 0x18) != 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                          ,0x153,1,
                          "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): canceling connectivity watch (%s)"
                         );
      lVar5 = *(long *)(param_1 + 0x18);
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),lVar5);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
    return;
  }
  if (*(long *)(*(long *)(param_1 + 8) + 0x18) != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                        ,0x128,1,
                        "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): unreffing subchannel (%s)"
                       );
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_104a847b0;
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
  if (lVar5 + -1 == 0) {
    (**(code **)(*plVar4 + 8))();
  }
LAB_104a847b0:
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 104a84a18; end: 104a84a27;  */

void FUN_104a84a18(void)

{
  return;
}



/* Entry: 104a84a28; end: 104a84a6b;  */

void FUN_104a84a28(void)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = lRam00000001136a1db8;
  if (lRam00000001136a1db8 != 0) {
    lStack_28 = lRam00000001136a1db8;
    FUN_104a84a6c(&lStack_28);
    __ZdlPv(lVar1);
  }
  lRam00000001136a1db8 = 0;
  return;
}



/* Entry: 104a84a6c; end: 104a84ae7;  */

void FUN_104a84a6c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 104a84ae8; end: 104a84afb;  */

undefined1  [16]
FUN_104a84ae8(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long alStack_98 [8];
  long lStack_58;
  
  puVar4 = &DAT_10f62a4d8;
  FUN_104a6fa70(&DAT_10f62a4d8);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar5 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_98;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0xfffffffffffffff0);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_98;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(puVar4,param_2,2,plVar3);
    func_0x000100460314();
    uVar5 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar7._8_8_ = uVar5;
    auVar7._0_8_ = plVar1;
    return auVar7;
  }
  func_0x000107c60e78();
  if (uVar5 >> 0x3d == 0) {
    lVar2 = uVar5 << 3;
    func_0x000107c60e20(lVar2);
    auVar8._8_8_ = uVar5;
    auVar8._0_8_ = lVar2;
    return auVar8;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar6 = plVar1[2];
  while (lVar6 != lVar2) {
    plVar1[2] = lVar6 + -8;
    plVar3 = *(long **)(lVar6 + -8);
    *(undefined8 *)(lVar6 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar6 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = plVar1;
  return auVar9;
}



/* Entry: 104a84afc; end: 104a84b03;  */

undefined1  [16]
FUN_104a84afc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 104a84b04; end: 104a84b93;  */

void FUN_104a84b04(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *extraout_x8;
  long lVar6;
  undefined8 uVar7;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  lVar6 = param_2 + 0x10;
  lVar4 = lVar6;
  puVar5 = param_4;
  func_0x0001004d368c();
  if (param_2 + 0x18 == lVar4) {
    uVar7 = *param_4;
    uStack_48 = param_3;
    func_0x0001004d6ffc(lVar6,param_3,&UNK_10dd5b8f9,&uStack_48,&uStack_49);
    *(undefined8 *)(lVar6 + 0xb0) = uVar7;
    *param_1 = *param_4;
    *param_4 = 0;
    return;
  }
  func_0x00010bda9f60();
  lVar6 = lVar4 + 0x10;
  func_0x0001004d368c();
  if (lVar4 + 0x18 == lVar6) {
    func_0x00010bda9f94();
  }
  else if (*(undefined8 **)(lVar6 + 0xb0) == puVar5) {
    FUN_104a823f8(lVar4 + 0x10,lVar6);
    func_0x0001004d6d80(lVar6 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar6);
    return;
  }
  func_0x00010bda9fc8();
  lVar4 = lVar6 + 0x10;
  func_0x0001004d368c();
  if (lVar6 + 0x18 == lVar4) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar4 + 0xb0);
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 0x100000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *extraout_x8 = lVar6;
  return;
}



/* Entry: 104a84b94; end: 104a84c07;  */

void FUN_104a84b94(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *extraout_x8;
  long lVar5;
  
  lVar5 = param_1 + 0x10;
  func_0x0001004d368c();
  if (param_1 + 0x18 == lVar5) {
    func_0x00010bda9f94();
  }
  else if (*(long *)(lVar5 + 0xb0) == param_3) {
    FUN_104a823f8(param_1 + 0x10,lVar5);
    func_0x0001004d6d80(lVar5 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar5);
    return;
  }
  func_0x00010bda9fc8();
  lVar4 = lVar5 + 0x10;
  func_0x0001004d368c();
  if (lVar5 + 0x18 == lVar4) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0xb0);
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 0x100000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *extraout_x8 = lVar5;
  return;
}



/* Entry: 104a84c08; end: 104a84cbb;  */

void FUN_104a84c08(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = param_2 + 0x10;
  func_0x0001004d368c();
  if (param_2 + 0x18 == lVar4) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0xb0);
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 0x100000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 104a84cbc; end: 104a84cc3;  */

undefined1  [16]
FUN_104a84cbc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 104a84cc4; end: 104a84d07;  */

void FUN_104a84cc4(void)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = lRam00000001136a1dc0;
  if (lRam00000001136a1dc0 != 0) {
    lStack_28 = lRam00000001136a1dc0;
    FUN_104a84d08(&lStack_28);
    __ZdlPv(lVar1);
  }
  lRam00000001136a1dc0 = 0;
  return;
}



/* Entry: 104a84d08; end: 104a84d83;  */

void FUN_104a84d08(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 104a84d84; end: 104a84dcb;  */

undefined1  [16] FUN_104a84d84(long param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)((long)param_2 + ((long)plVar3 - param_4));
  plVar5 = plVar3;
  for (plVar2 = plVar1; plVar2 < param_3; plVar2 = plVar2 + 1) {
    lVar4 = *plVar2;
    *plVar2 = 0;
    *plVar5 = lVar4;
    plVar5 = plVar5 + 1;
  }
  *(long **)(param_1 + 8) = plVar5;
  plVar5 = plVar1;
  while (plVar5 != param_2) {
    plVar5 = plVar5 + -1;
    lVar4 = *plVar5;
    *plVar5 = 0;
    plVar3 = plVar3 + -1;
    plVar2 = (long *)*plVar3;
    *plVar3 = lVar4;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  auVar6._8_8_ = plVar3;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 104a84dcc; end: 104a84e33;  */

undefined1  [16] FUN_104a84dcc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  plVar3 = param_2;
  while (plVar3 != param_1) {
    plVar3 = plVar3 + -1;
    lVar2 = *plVar3;
    *plVar3 = 0;
    param_3 = param_3 + -1;
    plVar1 = (long *)*param_3;
    *param_3 = lVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = param_2;
  return auVar4;
}



/* Entry: 104a84e34; end: 104a84e47;  */

undefined1  [16] FUN_104a84e34(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  plVar2 = plVar1;
  for (; plVar1 != param_2; plVar1 = plVar1 + 1) {
    lVar3 = *plVar1;
    *plVar1 = 0;
    plVar2 = (long *)*param_3;
    *param_3 = lVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    param_3 = param_3 + 1;
    plVar2 = param_2;
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = plVar2;
  return auVar4;
}



/* Entry: 104a84e48; end: 104a84eb7;  */

undefined1  [16] FUN_104a84e48(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  plVar1 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    lVar2 = *param_1;
    *param_1 = 0;
    plVar1 = (long *)*param_3;
    *param_3 = lVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    param_3 = param_3 + 1;
    plVar1 = param_2;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = plVar1;
  return auVar3;
}



/* Entry: 104a84eb8; end: 104a84ec3;  */

void FUN_104a84eb8(void)

{
  return;
}



/* Entry: 104a84ec4; end: 104a84f1b;  */

void FUN_104a84ec4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = param_1 + 1;
  (**(code **)(*param_1 + 0x30))();
  do {
    lVar3 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a84f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 104a84f1c; end: 104a84f2b;  */

undefined8 * FUN_104a84f1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_1107c2828;
  *param_1 = &PTR_FUN_1107c2b48;
  func_0x00010048650c(param_1[8]);
  puVar1 = (undefined8 *)param_1[0xf];
  param_1[0xf] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  plVar2 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x0001004c05d4(param_1 + 9);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 104a84f2c; end: 104a84f4b;  */

void FUN_104a84f2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c2828;
  FUN_104a85c50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a84f4c; end: 104a84f53;  */

void FUN_104a84f4c(void)

{
  return;
}



/* Entry: 104a84f54; end: 104a84f93;  */

void FUN_104a84f54(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_1107c2890;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 104a84f94; end: 104a84fb7;  */

void FUN_104a84f94(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1107c2890;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104a84fb8; end: 104a84ff3;  */

long FUN_104a84fb8(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c2900);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a84ff4; end: 104a85007;  */

undefined ** FUN_104a84ff4(void)

{
  return &PTR_DAT_1107c2900;
}



/* Entry: 104a85008; end: 104a8521b;  */

long * FUN_104a85008(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *extraout_x8;
  long *plStack_58;
  char *pcStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_1;
  func_0x0001004beff4();
  *plVar4 = (long)&PTR_FUN_1107c2960;
  plVar4[2] = 0;
  lVar7 = *(long *)(param_2 + 0xa0);
  plVar4[4] = *(long *)(param_2 + 0xa8);
  plVar4[3] = lVar7;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  lVar7 = *(long *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  plVar4[5] = lVar7;
  FUN_104a8521c(plVar4 + 6,*(undefined8 *)(param_2 + 0x90));
  *(undefined1 *)(param_1 + 7) = 0;
  func_0x0001004c44d4(param_1 + 8);
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  func_0x0001004c44d4(param_1 + 0x13);
  *(int *)(param_1 + 0x1d) = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  pcStack_50 = "grpc.fake_resolver.response_generator";
  lVar7 = *(long *)(param_2 + 0x90);
  func_0x000100486500(lVar7,&pcStack_50,1);
  param_1[2] = lVar7;
  plVar5 = (long *)0x0;
  if (param_1[6] != 0) {
    plVar5 = param_1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_58 = param_1;
    FUN_104a8527c(param_1[6],&plStack_58);
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plStack_58 + 0x10))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plStack_58 + 0x10))();
      }
    }
    func_0x0001004d8a60(param_1 + 0x13);
    func_0x0001004d8a60(param_1 + 8);
    plVar6 = (long *)plVar4[6];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 8))();
      }
    }
    plVar6 = (long *)param_1[5];
    param_1[5] = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    func_0x0001004c05d4(plVar4 + 3);
    __Unwind_Resume();
    func_0x00010047fdf4();
    if ((plVar5 == (long *)0x0) || ((int)*plVar5 != 2)) {
      lVar7 = 0;
    }
    else {
      lVar7 = plVar5[2];
      if (lVar7 != 0) {
        plVar4 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    *extraout_x8 = lVar7;
    return plVar5;
  }
  return param_1;
}



/* Entry: 104a8521c; end: 104a8527b;  */

void FUN_104a8521c(long *param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x00010047fdf4(param_2,"grpc.fake_resolver.response_generator");
  if ((param_2 == (int *)0x0) || (*param_2 != 2)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 4);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 104a8527c; end: 104a8543f;  */

undefined8 * FUN_104a8527c(long param_1,undefined ***param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined1 uStack_a9;
  undefined1 auStack_a8 [80];
  undefined **ppuStack_58;
  undefined8 *puStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  func_0x000100460448(puVar1);
  ppuVar9 = *param_2;
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined ***)(param_1 + 0x50) = ppuVar9;
  *param_2 = (undefined **)0x0;
  lVar8 = *(long *)(param_1 + 0x50);
  if ((lVar8 != 0) && (*(char *)(param_1 + 0xa8) != '\0')) {
    puVar6 = (undefined8 *)0x60;
    __Znwm();
    plVar5 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    func_0x0001004c4d2c(auStack_a8,param_1 + 0x58);
    *puVar6 = uVar10;
    func_0x0001004c4d2c(puVar6 + 1,auStack_a8);
    *(undefined2 *)(puVar6 + 0xb) = 0x100;
    func_0x0001004d8a60(auStack_a8);
    ppuStack_58 = &PTR_FUN_1107c2a70;
    param_2 = &ppuStack_58;
    puStack_50 = puVar6;
    pppuStack_40 = param_2;
    func_0x0001004be2c8(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x18),&ppuStack_58,&uStack_a9);
    if (pppuStack_40 == param_2) {
      lVar8 = 4;
      pppuVar7 = &ppuStack_58;
LAB_104a85388:
      (*(code *)(*pppuVar7)[lVar8])();
    }
    else if (pppuStack_40 != (undefined ***)0x0) {
      lVar8 = 5;
      pppuVar7 = pppuStack_40;
      goto LAB_104a85388;
    }
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  puVar6 = puVar1;
  func_0x000100466b80();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar6;
  }
  ___stack_chk_fail();
  if (pppuStack_40 == param_2) {
    lVar8 = 4;
    pppuVar7 = &ppuStack_58;
  }
  else {
    if (pppuStack_40 == (undefined ***)0x0) goto LAB_104a85418;
    lVar8 = 5;
    pppuVar7 = pppuStack_40;
  }
  (*(code *)(*pppuVar7)[lVar8])();
LAB_104a85418:
  func_0x000100466b80(puVar1);
  __Unwind_Resume(puVar6);
  FUN_104bd46a0();
  *puVar6 = &PTR_FUN_1107c2960;
  func_0x00010048650c(puVar6[2]);
  func_0x0001004d8a60(puVar6 + 0x13);
  func_0x0001004d8a60(puVar6 + 8);
  plVar5 = (long *)puVar6[6];
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = (long *)puVar6[5];
  puVar6[5] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  func_0x0001004c05d4(puVar6 + 3);
  return puVar6;
}



/* Entry: 104a85440; end: 104a854d7;  */

undefined8 * FUN_104a85440(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c2960;
  func_0x00010048650c(param_1[2]);
  func_0x0001004d8a60(param_1 + 0x13);
  func_0x0001004d8a60(param_1 + 8);
  plVar4 = (long *)param_1[6];
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
  plVar4 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  func_0x0001004c05d4(param_1 + 3);
  return param_1;
}



/* Entry: 104a854d8; end: 104a854db;  */

undefined8 * FUN_104a854d8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c2960;
  func_0x00010048650c(param_1[2]);
  func_0x0001004d8a60(param_1 + 0x13);
  func_0x0001004d8a60(param_1 + 8);
  plVar4 = (long *)param_1[6];
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
  plVar4 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  func_0x0001004c05d4(param_1 + 3);
  return param_1;
}



/* Entry: 104a854dc; end: 104a854ef;  */

void FUN_104a854dc(void)

{
  FUN_104a85440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a854f0; end: 104a854fb;  */

void FUN_104a854f0(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_128 [80];
  undefined1 auStack_d8 [80];
  ulong uStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined1 *)(param_1 + 0xe8) = 1;
  if ((*(char *)(param_1 + 0xe8) != '\0') && (*(char *)(param_1 + 0xe9) == '\0')) {
    if (*(char *)(param_1 + 0xea) == '\0') {
      if (*(char *)(param_1 + 0x38) != '\0') {
        uVar1 = *(undefined8 *)(param_1 + 0x88);
        FUN_104aa9dc8(uVar1,*(undefined8 *)(param_1 + 0x10));
        func_0x00010048650c(*(undefined8 *)(param_1 + 0x88));
        *(undefined8 *)(param_1 + 0x88) = uVar1;
        plVar2 = *(long **)(param_1 + 0x28);
        func_0x0001004c4d2c(auStack_128,param_1 + 0x40);
        (**(code **)(*plVar2 + 0x10))(plVar2,auStack_128);
        func_0x0001004d8a60(auStack_128);
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
    }
    else {
      func_0x0001004c44d4(auStack_80);
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      func_0x00010ae77644(&uStack_88,"Resolver transient failure",0x1a);
      FUN_104a77a7c(auStack_80,&uStack_88);
      if ((uStack_88 & 1) != 0) {
        func_0x00010084dad0();
      }
      FUN_104a859d4(&uStack_60,auStack_80);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x0001004bf248();
      plVar2 = *(long **)(param_1 + 0x28);
      uStack_38 = uVar1;
      func_0x0001004c4d2c(auStack_d8,auStack_80);
      (**(code **)(*plVar2 + 0x10))(plVar2,auStack_d8);
      func_0x0001004d8a60(auStack_d8);
      *(undefined1 *)(param_1 + 0xea) = 0;
      func_0x0001004d8a60(auStack_80);
    }
  }
  return;
}



/* Entry: 104a854fc; end: 104a8567b;  */

void FUN_104a854fc(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_128 [80];
  undefined1 auStack_d8 [80];
  ulong uStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(char *)(param_1 + 0xe8) != '\0') && (*(char *)(param_1 + 0xe9) == '\0')) {
    if (*(char *)(param_1 + 0xea) == '\0') {
      if (*(char *)(param_1 + 0x38) != '\0') {
        uVar1 = *(undefined8 *)(param_1 + 0x88);
        FUN_104aa9dc8(uVar1,*(undefined8 *)(param_1 + 0x10));
        func_0x00010048650c(*(undefined8 *)(param_1 + 0x88));
        *(undefined8 *)(param_1 + 0x88) = uVar1;
        plVar2 = *(long **)(param_1 + 0x28);
        func_0x0001004c4d2c(auStack_128,param_1 + 0x40);
        (**(code **)(*plVar2 + 0x10))(plVar2,auStack_128);
        func_0x0001004d8a60(auStack_128);
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
    }
    else {
      func_0x0001004c44d4(auStack_80);
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      func_0x00010ae77644(&uStack_88,"Resolver transient failure",0x1a);
      FUN_104a77a7c(auStack_80,&uStack_88);
      if ((uStack_88 & 1) != 0) {
        func_0x00010084dad0();
      }
      FUN_104a859d4(&uStack_60,auStack_80);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x0001004bf248();
      plVar2 = *(long **)(param_1 + 0x28);
      uStack_38 = uVar1;
      func_0x0001004c4d2c(auStack_d8,auStack_80);
      (**(code **)(*plVar2 + 0x10))(plVar2,auStack_d8);
      func_0x0001004d8a60(auStack_d8);
      *(undefined1 *)(param_1 + 0xea) = 0;
      func_0x0001004d8a60(auStack_80);
    }
  }
  return;
}



/* Entry: 104a8567c; end: 104a8579b;  */

void FUN_104a8567c(undefined ***param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  long *plStack_78;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  undefined ***pppuStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(char *)(param_1 + 0x12) != '\0') ||
     (pppuVar5 = param_1, *(char *)((long)param_1 + 0xea) != '\0')) {
    pppuVar5 = param_1 + 8;
    FUN_104aca2a0(pppuVar5,param_1 + 0x13);
    *(undefined1 *)(param_1 + 7) = 1;
    if (*(char *)((long)param_1 + 0xeb) == '\0') {
      *(undefined1 *)((long)param_1 + 0xeb) = 1;
      pppuVar5 = param_1 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar4) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppuStack_48 = &PTR_DAT_1107c29f0;
      pppuStack_40 = param_1;
      pppuStack_30 = &ppuStack_48;
      func_0x0001004be2c8(param_1[3],&ppuStack_48,&uStack_49);
      if (pppuStack_30 == &ppuStack_48) {
        lVar8 = 4;
        pppuVar5 = &ppuStack_48;
      }
      else {
        pppuVar5 = pppuStack_30;
        if (pppuStack_30 == (undefined ***)0x0) goto LAB_104a85734;
        lVar8 = 5;
      }
      (*(code *)(*pppuVar5)[lVar8])();
    }
  }
LAB_104a85734:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == &ppuStack_48) {
    lVar8 = 4;
    pppuVar6 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_104a85794;
    lVar8 = 5;
    pppuVar6 = pppuStack_30;
  }
  (*(code *)(*pppuVar6)[lVar8])();
LAB_104a85794:
  __Unwind_Resume();
  *(undefined1 *)((long)pppuVar5 + 0xe9) = 1;
  if (pppuVar5[6] != (undefined **)0x0) {
    plStack_78 = (long *)0x0;
    FUN_104a8527c(pppuVar5[6],&plStack_78);
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))();
      }
    }
    ppuVar7 = pppuVar5[6];
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar2 = ppuVar7 + 1;
      do {
        puVar9 = *ppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = puVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar9 + -1 == (undefined *)0x0) {
        (**(code **)(*ppuVar7 + 8))();
      }
    }
    pppuVar5[6] = (undefined **)0x0;
  }
  return;
}



/* Entry: 104a8579c; end: 104a85857;  */

void FUN_104a8579c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_28;
  
  *(undefined1 *)(param_1 + 0xe9) = 1;
  if (*(long *)(param_1 + 0x30) != 0) {
    plStack_28 = (long *)0x0;
    FUN_104a8527c(*(long *)(param_1 + 0x30),&plStack_28);
    if (plStack_28 != (long *)0x0) {
      plVar4 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))();
      }
    }
    plVar4 = *(long **)(param_1 + 0x30);
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
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 104a85858; end: 104a858d7;  */

void FUN_104a85858(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(char *)(*param_1 + 0xe9) == '\0') {
    FUN_104aca300(*param_1 + 0x40,param_1 + 1);
    *(undefined1 *)(*param_1 + 0x38) = 1;
    FUN_104a854fc();
  }
  func_0x0001004d8a60(param_1 + 1);
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
      (**(code **)(*plVar4 + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104a858d8; end: 104a858e3;  */

void FUN_104a858d8(void)

{
  return;
}



/* Entry: 104a858e4; end: 104a85917;  */

void FUN_104a858e4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1107c29f0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a85918; end: 104a85933;  */

void FUN_104a85918(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c29f0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104a85934; end: 104a859c7;  */

void FUN_104a85934(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  *(undefined1 *)((long)plVar5 + 0xeb) = 0;
  FUN_104a854fc(plVar5);
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
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a85988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))(plVar5);
  return;
}



/* Entry: 104a859c8; end: 104a859d3;  */

undefined ** FUN_104a859c8(void)

{
  return &PTR_DAT_1107c2a50;
}



/* Entry: 104a859d4; end: 104a85ab7;  */

void FUN_104a859d4(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong *puVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulong *puStack_30;
  undefined *puStack_28;
  
  if ((*param_1 == 0) && (plVar5 = (long *)param_1[1], plVar5 != (long *)0x0)) {
    plVar1 = plVar5 + 1;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      puStack_30 = param_2;
      (**(code **)(*plVar5 + 8))();
      param_2 = puStack_30;
    }
  }
  uVar6 = *param_2;
  if ((uVar6 & 1) != 0) {
    piVar9 = (int *)(uVar6 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = *piVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar10 = *param_1;
  if (uVar6 == uVar10) {
    if ((uVar6 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_1 = uVar6;
    puStack_28 = (undefined *)0x36;
    if ((uVar10 & 1) == 0) goto LAB_104a85a60;
    func_0x00010084dad0(uVar10);
  }
  uVar6 = *param_1;
LAB_104a85a60:
  if (uVar6 != 0) {
    return;
  }
  puStack_30 = (ulong *)&UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar4 = puStack_28;
  puVar7 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar4,puVar7);
  puVar8 = (ulong *)*param_1;
  if (puStack_30 != puVar8) {
    *param_1 = (ulong)puStack_30;
    puStack_30 = (ulong *)0x36;
    if (((ulong)puVar8 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar8 = puStack_30;
  }
  if (((ulong)puVar8 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 104a85ab8; end: 104a85abf;  */

void FUN_104a85ab8(void)

{
  return;
}



/* Entry: 104a85ac0; end: 104a85af3;  */

void FUN_104a85ac0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c2a70;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a85af4; end: 104a85b17;  */

void FUN_104a85af4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1107c2a70;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104a85b18; end: 104a85b53;  */

long FUN_104a85b18(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c2ad0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a85b54; end: 104a85b6f;  */

undefined ** FUN_104a85b54(void)

{
  return &PTR_DAT_1107c2ad0;
}



/* Entry: 104a85b70; end: 104a85c07;  */

void FUN_104a85b70(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [144];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0xf0;
  __Znwm();
  func_0x00010047c654(auStack_e8,param_3);
  uStack_50 = *(undefined8 *)(param_3 + 0x98);
  uStack_58 = *(undefined8 *)(param_3 + 0x90);
  uStack_40 = *(undefined8 *)(param_3 + 0xa8);
  uStack_48 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0xa0) = 0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  uStack_38 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = 0;
  FUN_104a85008(uVar1,auStack_e8);
  func_0x0001004c0530(auStack_e8);
  *param_1 = uVar1;
  return;
}



/* Entry: 104a85c08; end: 104a85c13;  */

void FUN_104a85c08(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a85c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 104a85c14; end: 104a85c4f;  */

long * FUN_104a85c14(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 104a85c50; end: 104a85ce3;  */

undefined8 * FUN_104a85c50(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_1107c2b48;
  func_0x00010048650c(param_1[8]);
  puVar1 = (undefined8 *)param_1[0xf];
  param_1[0xf] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  plVar2 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x0001004c05d4(param_1 + 9);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 104a85ce4; end: 104a85cfb;  */

void FUN_104a85ce4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a85ce8);
  (*pcVar1)();
}



/* Entry: 104a85cfc; end: 104a85d2b;  */

void FUN_104a85cfc(long param_1)

{
  if (*(char *)(param_1 + 0x80) != '\0') {
    func_0x0001005a5960(param_1 + 0x88);
  }
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined1 *)(param_1 + 0x230) = 1;
  return;
}



/* Entry: 104a85d2c; end: 104a85d7b;  */

void FUN_104a85d2c(long param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x70) = 1;
  if (*(char *)(param_1 + 0x80) != '\0') {
    func_0x0001005a5960(param_1 + 0x88);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return;
}



/* Entry: 104a85d7c; end: 104a85ea7;  */

long * FUN_104a85d7c(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 uStack_69;
  long lStack_68;
  ulong uStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *param_2;
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
  plStack_40 = (long *)0x0;
  plVar3 = (long *)0x18;
  lStack_68 = param_1;
  uStack_60 = uVar8;
  __Znwm();
  *plVar3 = (long)&PTR_FUN_1107c2bb0;
  plVar3[1] = param_1;
  plVar3[2] = uVar8;
  uStack_60 = 0x36;
  plStack_40 = plVar3;
  func_0x0001004be2c8(uVar7,alStack_58,&uStack_69);
  if (plStack_40 == alStack_58) {
    lVar6 = 4;
    plVar3 = alStack_58;
LAB_104a85e24:
    (**(code **)(*plVar3 + lVar6 * 8))();
  }
  else {
    plVar3 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      lVar6 = 5;
      goto LAB_104a85e24;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar3;
  }
  ___stack_chk_fail();
  if (plStack_40 == alStack_58) {
    lVar6 = 4;
    plVar4 = alStack_58;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_104a85e98;
    lVar6 = 5;
    plVar4 = plStack_40;
  }
  (**(code **)(*plVar4 + lVar6 * 8))();
LAB_104a85e98:
  FUN_104a85ea8(&lStack_68);
  __Unwind_Resume();
  if ((plVar3[1] & 1U) != 0) {
    func_0x00010084dad0();
  }
  return plVar3;
}



/* Entry: 104a85ea8; end: 104a85ed7;  */

long FUN_104a85ea8(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a85ed8; end: 104a85f3f;  */

void FUN_104a85ed8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((*param_2 == 0) && ((char)param_1[0xe] == '\0')) {
    func_0x0001004c0db4(param_1);
  }
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
                    /* WARNING: Could not recover jumptable at 0x000104a85f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 104a85f40; end: 104a85f7b;  */

undefined8 * FUN_104a85f40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c2bb0;
  if ((param_1[2] & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a85f7c; end: 104a85fb7;  */

void FUN_104a85f7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c2bb0;
  if ((param_1[2] & 1) != 0) {
    func_0x00010084dad0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104a85fb8; end: 104a86007;  */

void FUN_104a85fb8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int *piVar6;
  
  puVar5 = (undefined8 *)0x18;
  __Znwm();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  *puVar5 = &PTR_FUN_1107c2bb0;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  if ((uVar2 & 1) != 0) {
    piVar6 = (int *)(uVar2 - 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = *piVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}



/* Entry: 104a86008; end: 104a8603f;  */

void FUN_104a86008(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_1107c2bb0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  if ((uVar2 & 1) != 0) {
    piVar5 = (int *)(uVar2 - 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = *piVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}



/* Entry: 104a86040; end: 104a86067;  */

void FUN_104a86040(long param_1)

{
  FUN_104a8612c(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104a86068; end: 104a860e3;  */

void FUN_104a86068(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(ulong *)(param_1 + 0x10);
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar5;
  FUN_104a85ed8(uVar3,&uStack_28);
  if ((uVar5 & 1) != 0) {
    func_0x00010084dad0(uVar5);
  }
  return;
}



/* Entry: 104a860e4; end: 104a8611f;  */

long FUN_104a860e4(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c2c10);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a86120; end: 104a8612b;  */

undefined ** FUN_104a86120(void)

{
  return &PTR_DAT_1107c2c10;
}



/* Entry: 104a8612c; end: 104a8614b;  */

void FUN_104a8612c(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a8614c; end: 104a861ab;  */

undefined8 * FUN_104a8614c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c2c30;
  func_0x0001004d8a60(param_1 + 2);
  return param_1;
}



/* Entry: 104a861ac; end: 104a86203;  */

undefined8 * FUN_104a861ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c2c30;
  puVar1[1] = uVar2;
  func_0x0001004c4dbc(puVar1 + 2,param_1 + 0x10);
  return puVar1;
}



/* Entry: 104a86204; end: 104a8622b;  */

undefined8 * FUN_104a86204(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1107c2c30;
  param_2[1] = uVar7;
  puVar4 = param_2 + 2;
  func_0x0001004c4f04();
  uVar5 = *(ulong *)(param_1 + 0x30);
  if (uVar5 == 0) {
    param_2[7] = 0;
    uVar7 = 0;
    if (*(long *)(param_1 + 0x38) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x38) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar7 = *(undefined8 *)(param_1 + 0x38);
    }
    param_2[6] = 0;
    param_2[7] = uVar7;
  }
  else {
    puVar4[4] = uVar5;
    if ((uVar5 & 1) != 0) {
      piVar6 = (int *)(uVar5 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (*(char *)(param_1 + 0x57) < '\0') {
    func_0x000100033dac(param_2 + 8,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48))
    ;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    param_2[10] = *(undefined8 *)(param_1 + 0x50);
    param_2[9] = uVar8;
    param_2[8] = uVar7;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  func_0x0001004bf248();
  param_2[0xb] = uVar7;
  return param_2 + 2;
}



/* Entry: 104a8622c; end: 104a86267;  */

long FUN_104a8622c(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c2c90);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a86268; end: 104a8628f;  */

undefined ** FUN_104a86268(void)

{
  return &PTR_DAT_1107c2c90;
}



/* Entry: 104a86290; end: 104a8630b;  */

void FUN_104a86290(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_d8 [144];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010047c654(auStack_d8);
  uStack_40 = *(undefined8 *)(param_3 + 0x98);
  uStack_48 = *(undefined8 *)(param_3 + 0x90);
  uStack_30 = *(undefined8 *)(param_3 + 0xa8);
  uStack_38 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0xa0) = 0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  uStack_28 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = 0;
  FUN_104a866e0(param_1,auStack_d8,&UNK_1004de988);
  func_0x0001004c0530(auStack_d8);
  return;
}



/* Entry: 104a8630c; end: 104a866df;  */

void FUN_104a8630c(undefined8 *param_1,code *param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *extraout_x8;
  long unaff_x19;
  code *unaff_x21;
  undefined1 *unaff_x22;
  ulong unaff_x25;
  undefined8 *****unaff_x27;
  undefined8 unaff_x28;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *apuStack_388 [18];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 ****ppppuStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  ulong uStack_290;
  long lStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  undefined8 *puStack_270;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 ****ppppuStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 auStack_1d0 [144];
  ulong uStack_140;
  int iStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 **ppuStack_120;
  undefined1 uStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  undefined1 uStack_100;
  undefined8 *apuStack_f8 [17];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1[4];
  if (-1 < (char)*(byte *)((long)param_1 + 0x2f)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x2f);
  }
  if (uVar2 != 0) {
    puStack_270 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puStack_270 = param_1;
    }
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/resolver/sockaddr/sockaddr_resolver.cc"
                        ,0x5b,2,"authority-based URIs not supported by the %s scheme");
    param_3 = unaff_x19;
    param_2 = unaff_x21;
LAB_104a86388:
    uVar2 = 0;
    goto LAB_104a865ec;
  }
  uStack_108 = param_1[7];
  puStack_110 = (undefined8 *)param_1[6];
  if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
    uStack_108 = (ulong)*(byte *)((long)param_1 + 0x47);
    puStack_110 = param_1 + 6;
  }
  uStack_100 = 0x2c;
  uStack_140 = 0;
  iStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  ppuStack_120 = &puStack_110;
  uStack_118 = 0x2c;
  if (puStack_110 == (undefined8 *)0x0) {
    iStack_138 = 2;
    uStack_140 = uStack_108;
LAB_104a8641c:
    if (uStack_140 != uStack_108) goto LAB_104a86424;
  }
  else {
    func_0x00010082b388(&uStack_140);
    if (iStack_138 == 2) goto LAB_104a8641c;
LAB_104a86424:
    uVar2 = uStack_108;
    unaff_x22 = auStack_1d0;
    lStack_260 = param_3 + 0x10;
    do {
      unaff_x25 = uStack_128;
      uVar8 = uStack_130;
      if (uStack_128 != 0) {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          func_0x000100033dac(&uStack_1f0,*param_1,param_1[1]);
        }
        else {
          uStack_1e8 = param_1[1];
          uStack_1f0 = *param_1;
          lStack_1e0 = param_1[2];
        }
        func_0x00010002b024(auStack_208,"");
        if (0x7ffffffffffffff7 < unaff_x25) {
          func_0x000104a6fa5c(&ppppuStack_220);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104a8663c);
          (*pcVar1)();
        }
        if (unaff_x25 < 0x17) {
          uStack_210 = CONCAT17((char)unaff_x25,(undefined7)uStack_210);
          unaff_x27 = &ppppuStack_220;
        }
        else {
          uVar5 = (unaff_x25 & 0xfffffffffffffff8) + 8;
          if ((unaff_x25 | 7) != 0x17) {
            uVar5 = unaff_x25 | 7;
          }
          unaff_x27 = (undefined8 *****)(uVar5 + 1);
          __Znwm();
          uStack_210 = uVar5 + 1 | 0x8000000000000000;
          uStack_218 = unaff_x25;
          ppppuStack_220 = unaff_x27;
        }
        unaff_x28 = 0x7ffffffffffffff8;
        _memmove(unaff_x27,uVar8,unaff_x25);
        *(undefined1 *)((long)unaff_x27 + unaff_x25) = 0;
        uStack_230 = 0;
        uStack_228 = 0;
        uStack_238 = 0;
        func_0x00010002b024(auStack_250,"");
        func_0x0001004d5598(&lStack_1d8,&uStack_1f0,auStack_208,&ppppuStack_220,&uStack_238,
                            auStack_250);
        if (cStack_239 < '\0') {
          __ZdlPv(auStack_250[0]);
        }
        apuStack_f8[0] = &uStack_238;
        func_0x00010047c710(apuStack_f8);
        if ((long)uStack_210 < 0) {
          __ZdlPv(ppppuStack_220);
        }
        if (cStack_1f1 < '\0') {
          __ZdlPv(auStack_208[0]);
        }
        if (lStack_1e0 < 0) {
          __ZdlPv(uStack_1f0);
        }
        if ((lStack_1d8 != 0) ||
           (puVar3 = unaff_x22, (*param_2)(unaff_x22,apuStack_f8), ((ulong)puVar3 & 1) == 0)) {
          func_0x00010047cac8(&lStack_1d8);
          goto LAB_104a86388;
        }
        if (param_3 != 0) {
          uStack_258 = 0;
          unaff_x25 = *(ulong *)(param_3 + 8);
          if (unaff_x25 < *(ulong *)(param_3 + 0x10)) {
            func_0x0001004c4a8c(lStack_260,unaff_x25,apuStack_f8,&uStack_258);
            lVar4 = unaff_x25 + 0xa8;
            *(long *)(param_3 + 8) = lVar4;
          }
          else {
            lVar4 = param_3;
            func_0x0001004c48e8(param_3,apuStack_f8,&uStack_258);
          }
          *(long *)(param_3 + 8) = lVar4;
        }
        func_0x00010047cac8(&lStack_1d8);
      }
      unaff_x28 = 0x7ffffffffffffff8;
      func_0x00010082b388(&uStack_140);
    } while (iStack_138 != 2 || uStack_140 != uVar2);
  }
  uVar2 = 1;
LAB_104a865ec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    *(ulong *)(param_3 + 8) = unaff_x25;
    func_0x00010047cac8(&lStack_1d8);
    uVar5 = uVar2;
    __Unwind_Resume();
    pcStack_278 = FUN_104a866e0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    uVar6 = uVar5;
    uStack_2b0 = unaff_x28;
    ppppuStack_2a8 = unaff_x27;
    puStack_2a0 = unaff_x22;
    pcStack_298 = param_2;
    uStack_290 = uVar2;
    lStack_288 = param_3;
    puStack_280 = &stack0xfffffffffffffff0;
    FUN_104a8630c();
    if ((uVar6 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)0x38;
      __Znwm();
      uStack_2c8 = uStack_398;
      uStack_2d0 = uStack_3a0;
      uStack_2c0 = uStack_390;
      uStack_398 = 0;
      uStack_390 = 0;
      uStack_3a0 = 0;
      func_0x00010047c654(apuStack_388,uVar5);
      uStack_2f0 = *(undefined8 *)(uVar5 + 0x98);
      uStack_2f8 = *(undefined8 *)(uVar5 + 0x90);
      uStack_2e0 = *(undefined8 *)(uVar5 + 0xa8);
      uStack_2e8 = *(undefined8 *)(uVar5 + 0xa0);
      *(undefined8 *)(uVar5 + 0xa0) = 0;
      *(undefined8 *)(uVar5 + 0xa8) = 0;
      uStack_2d8 = *(undefined8 *)(uVar5 + 0xb0);
      *(undefined8 *)(uVar5 + 0xb0) = 0;
      func_0x0001004beff4(puVar7);
      uVar8 = uStack_2d8;
      *puVar7 = &PTR_FUN_1107c2d08;
      uStack_2d8 = 0;
      puVar7[4] = uStack_2c8;
      puVar7[3] = uStack_2d0;
      puVar7[2] = uVar8;
      puVar7[5] = uStack_2c0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      uStack_2c0 = 0;
      uVar8 = uStack_2f8;
      func_0x0001004bf248();
      puVar7[6] = uVar8;
      func_0x0001004c0530(apuStack_388);
      puStack_2b8 = &uStack_2d0;
      func_0x0001004c4cbc(&puStack_2b8);
    }
    *extraout_x8 = puVar7;
    apuStack_388[0] = (undefined1 *)&uStack_3a0;
    func_0x0001004c4cbc(apuStack_388);
    return;
  }
  return;
}



/* Entry: 104a866e0; end: 104a86867;  */

void FUN_104a866e0(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *apuStack_118 [18];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uVar1 = param_2;
  FUN_104a8630c(param_2,param_3,&uStack_130);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_50 = uStack_120;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_130 = 0;
    func_0x00010047c654(apuStack_118,param_2);
    uStack_80 = *(undefined8 *)(param_2 + 0x98);
    uStack_88 = *(undefined8 *)(param_2 + 0x90);
    uStack_70 = *(undefined8 *)(param_2 + 0xa8);
    uStack_78 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    uStack_68 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_2 + 0xb0) = 0;
    func_0x0001004beff4(puVar2);
    uVar3 = uStack_68;
    *puVar2 = &PTR_FUN_1107c2d08;
    uStack_68 = 0;
    puVar2[4] = uStack_58;
    puVar2[3] = uStack_60;
    puVar2[2] = uVar3;
    puVar2[5] = uStack_50;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uVar3 = uStack_88;
    func_0x0001004bf248();
    puVar2[6] = uVar3;
    func_0x0001004c0530(apuStack_118);
    puStack_48 = &uStack_60;
    func_0x0001004c4cbc(&puStack_48);
  }
  *param_1 = puVar2;
  apuStack_118[0] = (undefined1 *)&uStack_130;
  func_0x0001004c4cbc(apuStack_118);
  return;
}



/* Entry: 104a86868; end: 104a868cf;  */

undefined8 * FUN_104a86868(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_1107c2d08;
  func_0x00010048650c(param_1[6]);
  puStack_28 = param_1 + 3;
  func_0x0001004c4cbc(&puStack_28);
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 104a868d0; end: 104a868e3;  */

void FUN_104a868d0(void)

{
  FUN_104a86868();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a868e4; end: 104a8698b;  */

void FUN_104a868e4(long param_1)

{
  long *plVar1;
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001004c44d4(auStack_70);
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  func_0x0001004c4c1c(auStack_70,param_1 + 0x18);
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar1 = *(long **)(param_1 + 0x10);
  func_0x0001004c4d2c(auStack_c0,auStack_70);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_c0);
  func_0x0001004d8a60(auStack_c0);
  func_0x0001004d8a60(auStack_70);
  return;
}



/* Entry: 104a8698c; end: 104a869af;  */

void FUN_104a8698c(void)

{
  return;
}



/* Entry: 104a869b0; end: 104a86a2b;  */

void FUN_104a869b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_d8 [144];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010047c654(auStack_d8);
  uStack_40 = *(undefined8 *)(param_3 + 0x98);
  uStack_48 = *(undefined8 *)(param_3 + 0x90);
  uStack_30 = *(undefined8 *)(param_3 + 0xa8);
  uStack_38 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0xa0) = 0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  uStack_28 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = 0;
  FUN_104a866e0(param_1,auStack_d8,FUN_104aa95a4);
  func_0x0001004c0530(auStack_d8);
  return;
}



/* Entry: 104a86a2c; end: 104a86a47;  */

void FUN_104a86a2c(void)

{
  return;
}


