/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a71504; end: 104a715a3;  */

undefined8 * FUN_104a71504(undefined8 *param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    func_0x0001004868c0(param_1 + 0x10);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a71598);
  (*pcVar1)();
}



/* Entry: 104a715a4; end: 104a715b7;  */

void FUN_104a715a4(void)

{
  FUN_104a71504();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a715b8; end: 104a715eb;  */

void FUN_104a715b8(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x54);
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  *(byte *)(param_1 + 0x54) = bVar1;
  return;
}



/* Entry: 104a715ec; end: 104a7167f;  */

void FUN_104a715ec(long *param_1)

{
  long *plVar1;
  byte bVar2;
  
  plVar1 = param_1;
  func_0x00010047a478();
  if ((long *)*plVar1 == param_1) {
    bVar2 = *(byte *)((long)param_1 + 0x54);
    if (bVar2 < 3) {
      bVar2 = 2;
    }
    *(byte *)((long)param_1 + 0x54) = bVar2;
  }
  else {
    plVar1 = param_1 + 2;
    func_0x000100460448(plVar1);
    if ((char)param_1[0x12] == '\0') {
      FUN_104a71a24(param_1);
      func_0x000100466b80(plVar1);
    }
    else {
      func_0x000100466b80(plVar1);
    }
  }
  return;
}



/* Entry: 104a71680; end: 104a71783;  */

void FUN_104a71680(long *param_1)

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
      extraout_x8[0xd] = (long)FUN_104a71e44;
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
                    /* WARNING: Could not recover jumptable at 0x000104a71750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*extraout_x8 + 0x10))(extraout_x8);
    return;
  }
  return;
}



/* Entry: 104a71784; end: 104a717e3;  */

void FUN_104a71784(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000104a717ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}



/* Entry: 104a717e4; end: 104a71a23;  */

void FUN_104a717e4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uStack_98;
  int iStack_90;
  ulong uStack_88;
  int iStack_80;
  ulong uStack_78;
  int iStack_70;
  undefined1 uStack_61;
  
  plVar6 = param_2;
  func_0x00010047a478();
  if ((long *)*plVar6 == param_2) {
    if ((char)param_2[0x12] == '\0') {
      plVar6 = param_2 + 0x13;
      plVar1 = param_2 + 0x14;
      do {
        cVar2 = (char)*plVar6;
        if (cVar2 == '\x02') {
          FUN_104a71d98(&uStack_88,plVar6);
        }
        else if (cVar2 == '\x01') {
          FUN_104a71a8c(&uStack_88,plVar6);
        }
        else {
          if (cVar2 != '\0') goto LAB_104a719d4;
          FUN_104a71a4c(&uStack_78,plVar1);
          uVar4 = uStack_78;
          if (iStack_70 == 0) {
LAB_104a71888:
            iStack_80 = iStack_70;
          }
          else {
            if (iStack_70 != 1) goto LAB_104a719d8;
            uStack_78 = 0x36;
            if (uVar4 != 0) {
              uStack_88 = uVar4;
              goto LAB_104a71888;
            }
            FUN_104ac9f40(plVar1);
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
            uVar10 = *(undefined8 *)(lVar9 + 8);
            puVar7 = (undefined8 *)0x30;
            func_0x000100460200();
            *puVar7 = FUN_104a71c50;
            puVar7[1] = uVar10;
            puVar7[3] = &UNK_1004be1e0;
            puVar7[4] = puVar7;
            puVar7[5] = 0;
            uStack_88 = 0;
            func_0x0001004bd7e8(&uStack_61,puVar7 + 2,&uStack_88);
            if ((uStack_88 & 1) != 0) {
              func_0x00010084dad0();
            }
            *plVar1 = 0;
            *(char *)plVar6 = '\x01';
            FUN_104a71a8c(&uStack_88,plVar6);
          }
          func_0x00010047a9b8(&uStack_78);
        }
        func_0x00010047a8f0(&uStack_98,&uStack_88);
        func_0x00010047a9b8(&uStack_88);
        if (iStack_90 == 1) {
          FUN_104a71a24(param_2);
          uVar10 = uStack_98;
          uStack_98 = 0x36;
LAB_104a71990:
          *param_1 = uVar10;
          uVar8 = 1;
LAB_104a719a0:
          *(undefined1 *)(param_1 + 1) = uVar8;
          func_0x00010047a9b8(&uStack_98);
          return;
        }
        cVar2 = *(char *)((long)param_2 + 0x54);
        *(undefined1 *)((long)param_2 + 0x54) = 0;
        if (cVar2 == '\0') {
          *(undefined1 *)param_1 = 0;
          uVar8 = 0;
          goto LAB_104a719a0;
        }
        if (cVar2 == '\x02') {
          FUN_104a71a24(param_2);
          uVar10 = 4;
          goto LAB_104a71990;
        }
        func_0x00010047a9b8(&uStack_98);
      } while ((char)param_2[0x12] == '\0');
    }
    func_0x00010bda9364();
  }
  func_0x00010bda9398();
LAB_104a719d4:
  _abort();
LAB_104a719d8:
  FUN_104a71e10();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x104a719e0);
  (*pcVar5)();
}



/* Entry: 104a71a24; end: 104a71a4b;  */

char * FUN_104a71a24(long param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  undefined8 extraout_x8;
  char acStack_40 [16];
  
  if (*(char *)(param_1 + 0x90) != '\0') {
    func_0x00010bda93cc();
    pcVar3 = acStack_40;
    FUN_104ac9f44(acStack_40);
    func_0x00010047a8f0(extraout_x8,acStack_40);
    func_0x00010047a9b8(acStack_40);
    return pcVar3;
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  pcVar3 = (char *)(param_1 + 0x98);
  cVar1 = *pcVar3;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      FUN_104a7148c(param_1 + 0xa0);
      return pcVar3;
    }
    if (cVar1 != '\0') {
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104a70604);
      (*pcVar2)();
    }
  }
  FUN_104ac9f40(param_1 + 0xa0);
  return pcVar3;
}



/* Entry: 104a71a4c; end: 104a71a8b;  */

void FUN_104a71a4c(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_104ac9f44(auStack_30);
  func_0x00010047a8f0(param_1,auStack_30);
  func_0x00010047a9b8(auStack_30);
  return;
}



/* Entry: 104a71a8c; end: 104a71c4f;  */

void FUN_104a71a8c(long *param_1,undefined1 *param_2)

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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (ulong *)(param_2 + 8);
  uStack_b0 = *puVar5;
  *puVar5 = 0x36;
  uStack_a8 = 1;
  func_0x00010047a8f0(&lStack_128,&uStack_b0);
  func_0x00010047a9b8(&uStack_b0);
  lVar6 = lStack_128;
  if (iStack_120 == 1) {
    lStack_128 = 0x36;
    if (lVar6 == 0) {
      puVar2 = puVar5;
      FUN_104a7148c();
      lVar6 = *(long *)(param_2 + 0x78);
      func_0x000100460dc4();
      uVar3 = *puVar2;
      func_0x0001004671a4();
      lVar4 = *(long *)(lVar6 + 0x40);
      lVar6 = 0x7fffffffffffffff;
      if (((uVar3 != 0x7fffffffffffffff && lVar4 != 0x7fffffffffffffff) &&
          (lVar6 = -0x8000000000000000, uVar3 != 0x8000000000000000)) &&
         (lVar4 != -0x8000000000000000)) {
        if ((long)uVar3 < 1) {
          if ((long)(-0x8000000000000000 - uVar3) <= lVar4) goto LAB_104a71c08;
        }
        else if ((long)(uVar3 ^ 0x7fffffffffffffff) < lVar4) {
          lVar6 = 0x7fffffffffffffff;
        }
        else {
LAB_104a71c08:
          lVar6 = lVar4 + uVar3;
        }
      }
      FUN_104ac9dec(&uStack_b0,lVar6);
      FUN_104a71404(auStack_118,&uStack_b0);
      FUN_104ac9f40(&uStack_b0);
      FUN_104a71404(puVar5,auStack_118);
      *param_2 = 2;
      FUN_104a71d98(param_1,param_2);
      FUN_104ac9f40(auStack_118);
    }
    else {
      *param_1 = lVar6;
      *(undefined4 *)(param_1 + 1) = 1;
    }
  }
  else {
    if (iStack_120 != 0) goto LAB_104a71c14;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  func_0x00010047a9b8(&lStack_128);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a71c14:
  FUN_104a71e10();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a71c1c);
  (*pcVar1)();
}



/* Entry: 104a71c50; end: 104a71d97;  */

void FUN_104a71c50(long *param_1)

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
  func_0x0001008daf18();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  FUN_104ab5920(&uStack_38,2,"max_age",7,&uStack_39,&uStack_58);
  FUN_104abaa50(&uStack_30,&uStack_38,7,0);
  uVar4 = *(ulong *)(lVar3 + 0x28);
  if (uStack_30 != uVar4) {
    *(ulong *)(lVar3 + 0x28) = uStack_30;
    uStack_30 = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_104a71cdc;
    func_0x00010084dad0();
    uVar4 = uStack_30;
  }
  if ((uVar4 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104a71cdc:
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_28 = &uStack_58;
  func_0x000100482b64(&puStack_28);
  plVar5 = param_1;
  func_0x0001004868b0(param_1,0);
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
    func_0x000100836ca4(param_1);
  }
  return;
}



/* Entry: 104a71d98; end: 104a71e0f;  */

void FUN_104a71d98(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uStack_30;
  int iStack_28;
  
  FUN_104a71a4c(&uStack_30,param_2 + 8);
  uVar1 = uStack_30;
  if (iStack_28 != 0) {
    if (iStack_28 != 1) {
      FUN_104a71e10();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104a71dfc);
      (*pcVar2)();
    }
    uStack_30 = 0x36;
    *param_1 = uVar1;
  }
  *(int *)(param_1 + 1) = iStack_28;
  func_0x00010047a9b8(&uStack_30);
  return;
}



/* Entry: 104a71e10; end: 104a71e43;  */

void FUN_104a71e10(void)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  long lVar11;
  ulong uStack_50;
  char cStack_48;
  
  plVar8 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar8 = (long)(PTR___ZTVSt18bad_variant_access_110346b70 + 0x10);
  puVar10 = PTR___ZTISt18bad_variant_access_110346a48;
  ___cxa_throw();
  pbVar1 = (byte *)((long)plVar8 + 0x91);
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
    plVar2 = plVar8 + 2;
    plVar9 = plVar2;
    func_0x000100460448();
    if ((char)plVar8[0x12] == '\0') {
      func_0x00010047a478();
      lVar11 = *plVar9;
      func_0x00010047a478();
      *plVar9 = (long)plVar8;
      plVar9 = plVar8;
      FUN_104a717e4(&uStack_50);
      func_0x00010047a478();
      *plVar9 = lVar11;
      func_0x000100466b80(plVar2);
      uVar6 = uStack_50;
      if (cStack_48 != '\0') {
        uStack_50 = 0x36;
        if (uVar6 == 0) {
          FUN_104a70f44(plVar8[0x11]);
        }
        else if ((uVar6 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      func_0x00010047aa10(&uStack_50);
    }
    else {
      func_0x000100466b80(plVar2);
    }
    plVar2 = plVar8 + 10;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    return;
  }
  func_0x00010bda9400();
  FUN_104bd46a0();
  func_0x00010047aa10(&uStack_50);
  __Unwind_Resume();
  lVar11 = *plVar8;
  *plVar8 = (long)puVar10;
  if (lVar11 != 0) {
    iVar7 = (int)*(undefined8 *)(lVar11 + 0x18);
    func_0x000104a73b64();
    if (iVar7 != 0) {
      FUN_104a7079c(lVar11);
    }
  }
  return;
}



/* Entry: 104a71e44; end: 104a71f5b;  */

void FUN_104a71e44(long *param_1,long param_2)

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
    func_0x000100460448();
    if ((char)param_1[0x12] == '\0') {
      func_0x00010047a478();
      lVar9 = *plVar8;
      func_0x00010047a478();
      *plVar8 = (long)param_1;
      plVar8 = param_1;
      FUN_104a717e4(&uStack_40);
      func_0x00010047a478();
      *plVar8 = lVar9;
      func_0x000100466b80(plVar2);
      uVar6 = uStack_40;
      if (cStack_38 != '\0') {
        uStack_40 = 0x36;
        if (uVar6 == 0) {
          FUN_104a70f44(param_1[0x11]);
        }
        else if ((uVar6 & 1) != 0) {
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
  func_0x00010bda9400();
  FUN_104bd46a0();
  func_0x00010047aa10(&uStack_40);
  __Unwind_Resume();
  lVar9 = *param_1;
  *param_1 = param_2;
  if (lVar9 != 0) {
    iVar7 = (int)*(undefined8 *)(lVar9 + 0x18);
    func_0x000104a73b64();
    if (iVar7 != 0) {
      FUN_104a7079c(lVar9);
    }
  }
  return;
}



/* Entry: 104a71f5c; end: 104a71f97;  */

void FUN_104a71f5c(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x18);
    func_0x000104a73b64();
    if (iVar1 != 0) {
      FUN_104a7079c(lVar2);
    }
  }
  return;
}



/* Entry: 104a71f98; end: 104a71ffb;  */

void FUN_104a71f98(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  *puVar2 = &PTR_FUN_1107e9838;
  ppuVar3 = &PTR_DAT_1107e9810;
  ___cxa_throw();
  puVar2 = (undefined8 *)puVar2[2];
  (**(code **)*puVar2)();
  if (((ulong)ppuVar3 & 0xfffffffe) == 0) {
    return;
  }
  FUN_104a71e10();
  (**(code **)(*(long *)puVar2[2] + 8))();
  lVar4 = puVar2[1];
  puVar2[1] = 0;
  if (lVar4 != 0) {
    iVar1 = (int)*(undefined8 *)(lVar4 + 0x18);
    func_0x000104a73b64();
    if (iVar1 != 0) {
      FUN_104a7079c(lVar4);
    }
  }
  return;
}



/* Entry: 104a71ffc; end: 104a72033;  */

void FUN_104a71ffc(long param_1)

{
  int iVar1;
  long lVar2;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  lVar2 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = 0;
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x18);
    func_0x000104a73b64();
    if (iVar1 != 0) {
      FUN_104a7079c(lVar2);
    }
  }
  return;
}



/* Entry: 104a72034; end: 104a72177;  */

char * FUN_104a72034(undefined1 *param_1,ulong *param_2)

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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  func_0x000100460dc4();
  uVar6 = *puVar5;
  func_0x0001004671a4();
  uVar10 = *param_2;
  lVar9 = 0x7fffffffffffffff;
  if ((uVar6 != 0x7fffffffffffffff && uVar10 != 0x7fffffffffffffff) &&
     (lVar9 = -0x8000000000000000, uVar6 != 0x8000000000000000 && uVar10 != 0x8000000000000000)) {
    if ((long)uVar6 < 1) {
      if ((long)uVar10 < (long)(-0x8000000000000000 - uVar6)) goto LAB_104a720c0;
    }
    else if ((long)(uVar6 ^ 0x7fffffffffffffff) < (long)uVar10) {
      lVar9 = 0x7fffffffffffffff;
      goto LAB_104a720c0;
    }
    lVar9 = uVar10 + uVar6;
  }
LAB_104a720c0:
  FUN_104ac9dec(auStack_118,lVar9);
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
  FUN_104a71404(auStack_b0,auStack_118);
  acStack_198[0] = '\0';
  FUN_104a71404(auStack_190,auStack_b0);
  FUN_104ac9f40(auStack_b0);
  FUN_104ac9f40(auStack_118);
  *param_1 = 0;
  FUN_104a71404(param_1 + 8,auStack_190);
  *(ulong *)(param_1 + 0x78) = uStack_120;
  *(ulong *)(param_1 + 0x70) = uStack_128;
  uStack_128 = 0;
  uStack_120 = 0;
  pcVar7 = acStack_198;
  FUN_104a72178();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104a721c8);
      (*pcVar4)();
    }
    FUN_104ac9f40(pcVar7 + 8);
    pcVar8 = pcVar7 + 0x70;
  }
  FUN_104a7138c(pcVar8);
  return pcVar7;
}



/* Entry: 104a72178; end: 104a721cb;  */

char * FUN_104a72178(char *param_1)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104a721c8);
      (*pcVar1)();
    }
    FUN_104ac9f40(param_1 + 8);
    pcVar2 = param_1 + 0x70;
  }
  FUN_104a7138c(pcVar2);
  return param_1;
}



/* Entry: 104a721cc; end: 104a7226b;  */

undefined8 * FUN_104a721cc(undefined8 *param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    func_0x0001004868c0(param_1 + 0x10);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a72260);
  (*pcVar1)();
}



/* Entry: 104a7226c; end: 104a7227f;  */

void FUN_104a7226c(void)

{
  FUN_104a721cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a72280; end: 104a72313;  */

void FUN_104a72280(long *param_1)

{
  long *plVar1;
  byte bVar2;
  
  plVar1 = param_1;
  func_0x00010047a478();
  if ((long *)*plVar1 == param_1) {
    bVar2 = *(byte *)((long)param_1 + 0x54);
    if (bVar2 < 3) {
      bVar2 = 2;
    }
    *(byte *)((long)param_1 + 0x54) = bVar2;
  }
  else {
    plVar1 = param_1 + 2;
    func_0x000100460448(plVar1);
    if ((char)param_1[0x12] == '\0') {
      FUN_104a727a8(param_1);
      func_0x000100466b80(plVar1);
    }
    else {
      func_0x000100466b80(plVar1);
    }
  }
  return;
}



/* Entry: 104a72314; end: 104a72417;  */

void FUN_104a72314(long *param_1)

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
      extraout_x8[0xd] = (long)FUN_104a72e0c;
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
                    /* WARNING: Could not recover jumptable at 0x000104a723e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*extraout_x8 + 0x10))(extraout_x8);
    return;
  }
  return;
}



/* Entry: 104a72418; end: 104a72477;  */

void FUN_104a72418(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000104a72440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}



/* Entry: 104a72478; end: 104a727a7;  */

void FUN_104a72478(long *param_1)

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
  func_0x00010047a478();
  if ((long *)*plVar7 != param_1) {
    func_0x00010bda9468();
LAB_104a72720:
    FUN_104a71e10();
LAB_104a72730:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x104a72734);
    (*pcVar6)();
  }
  if ((char)param_1[0x12] == '\0') {
    plVar7 = param_1 + 0x16;
    plVar1 = param_1 + 0x17;
    plVar2 = param_1 + 0x24;
LAB_104a724e0:
    do {
      if ((char)*plVar7 == '\x01') {
        FUN_104a72aa0(&uStack_b8,plVar7);
      }
      else {
        if ((char)*plVar7 != '\0') {
          _abort();
LAB_104a7272c:
          FUN_104a71e10();
          goto LAB_104a72730;
        }
        FUN_104a71a4c(&uStack_90,plVar1);
        uVar5 = uStack_90;
        if (iStack_88 == 1) {
          uStack_98 = uStack_90;
          uStack_90 = 0x36;
          if (uVar5 == 0) {
            FUN_104ac9f40(plVar1);
            lVar12 = param_1[0x25];
            lVar11 = *plVar2;
            *plVar2 = 0;
            param_1[0x25] = 0;
            FUN_104a7138c(plVar2);
            param_1[0x18] = lVar12;
            *plVar1 = lVar11;
            *(char *)plVar7 = '\x01';
            FUN_104a72aa0(&uStack_b8,plVar7);
          }
          else {
            FUN_104a72a48(&uStack_80,&uStack_98);
            uVar5 = uStack_80;
            if (uStack_80 == 0) {
              FUN_104a7294c(aiStack_b0,auStack_78);
            }
            else {
              uStack_80 = 0x36;
            }
            uStack_b8 = uVar5;
            uStack_a0 = 1;
            FUN_104a72d74(&uStack_80);
            if ((uStack_98 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
        }
        else {
          if (iStack_88 != 0) goto LAB_104a7272c;
          uStack_a0 = 0;
        }
        func_0x00010047a9b8(&uStack_90);
      }
      FUN_104a72838(auStack_d8,&uStack_b8);
      FUN_104a72db4(&uStack_b8);
      if (iStack_c0 == 1) {
        FUN_104a72bcc(auStack_f0,auStack_d8);
        FUN_104a727e4(&uStack_b8,auStack_f0);
        FUN_104a72d74(auStack_f0);
        if (aiStack_b0[0] == 0) {
          FUN_104a72178(plVar7);
          FUN_104a72034(plVar7,param_1 + 0x13);
          FUN_104a72d1c(&uStack_b8);
          FUN_104a72db4(auStack_d8);
          goto LAB_104a724e0;
        }
        if (aiStack_b0[0] != 1) goto LAB_104a72720;
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
        FUN_104a72d1c(&uStack_b8);
      }
      else {
        auStack_78[0] = 0;
      }
      FUN_104a72db4(auStack_d8);
      func_0x00010047a8f0(&uStack_100,&uStack_80);
      func_0x00010047a9b8(&uStack_80);
      if (iStack_f8 == 1) goto LAB_104a726b4;
      cVar3 = *(char *)((long)param_1 + 0x54);
      *(undefined1 *)((long)param_1 + 0x54) = 0;
      if (cVar3 == '\0') {
        *(undefined1 *)extraout_x8 = 0;
        uVar8 = 0;
        goto LAB_104a726f0;
      }
      if (cVar3 == '\x02') {
        FUN_104a727a8(param_1);
        uVar10 = 4;
        goto LAB_104a726e4;
      }
      func_0x00010047a9b8(&uStack_100);
    } while ((char)param_1[0x12] == '\0');
  }
  func_0x00010bda9434();
LAB_104a726b4:
  FUN_104a727a8(param_1);
  uVar10 = uStack_100;
  uStack_100 = 0x36;
LAB_104a726e4:
  *extraout_x8 = uVar10;
  uVar8 = 1;
LAB_104a726f0:
  *(undefined1 *)(extraout_x8 + 1) = uVar8;
  func_0x00010047a9b8(&uStack_100);
  return;
}



/* Entry: 104a727a8; end: 104a727e3;  */

ulong * FUN_104a727a8(ulong *param_1)

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
    FUN_104a72178(param_1 + 0x16);
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
  func_0x00010bda949c();
  uVar6 = *param_1;
  if (uVar6 == 0) {
    uVar4 = 0;
    if ((int)param_1[2] == 0) goto LAB_104a72828;
    if ((int)param_1[2] != 1) {
      FUN_104a71e10();
      *(undefined1 *)param_1 = 0;
      *(undefined4 *)(param_1 + 3) = 0xffffffff;
      FUN_104a7286c();
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
LAB_104a72828:
  *(undefined4 *)(extraout_x8 + 1) = uVar4;
  return param_1;
}



/* Entry: 104a727e4; end: 104a72837;  */

ulong * FUN_104a727e4(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar4 = *param_2;
  if (uVar4 == 0) {
    uVar3 = 0;
    if ((int)param_2[2] == 0) goto LAB_104a72828;
    if ((int)param_2[2] != 1) {
      FUN_104a71e10();
      *(undefined1 *)param_2 = 0;
      *(undefined4 *)(param_2 + 3) = 0xffffffff;
      FUN_104a7286c();
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
LAB_104a72828:
  *(undefined4 *)(param_1 + 1) = uVar3;
  return param_2;
}



/* Entry: 104a72838; end: 104a7286b;  */

undefined1 * FUN_104a72838(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_104a7286c();
  return param_1;
}



/* Entry: 104a7286c; end: 104a728f7;  */

void FUN_104a7286c(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c0be0)[*(uint *)(param_1 + 0x18)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c0bf0)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 104a728f8; end: 104a72907;  */

void FUN_104a728f8(void)

{
  return;
}



/* Entry: 104a72908; end: 104a7294b;  */

void FUN_104a72908(undefined8 param_1,long *param_2,long *param_3)

{
  if (*param_3 == 0) {
    FUN_104a7294c(param_2 + 1,param_3 + 1);
    *param_2 = 0;
  }
  else {
    *param_2 = *param_3;
    *param_3 = 0x36;
  }
  return;
}



/* Entry: 104a7294c; end: 104a7297f;  */

undefined1 * FUN_104a7294c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  FUN_104a72980();
  return param_1;
}



/* Entry: 104a72980; end: 104a72a0b;  */

void FUN_104a72980(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c0c00)[*(uint *)(param_1 + 8)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c0c10)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 8) = uVar1;
  }
  return;
}



/* Entry: 104a72a0c; end: 104a72a0f;  */

void FUN_104a72a0c(void)

{
  return;
}



/* Entry: 104a72a10; end: 104a72a2f;  */

void FUN_104a72a10(undefined8 param_1,ulong *param_2)

{
  if ((*param_2 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a72a30; end: 104a72a47;  */

void FUN_104a72a30(void)

{
  return;
}



/* Entry: 104a72a48; end: 104a72a9f;  */

long * FUN_104a72a48(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    func_0x00010ae77b40(param_1);
  }
  return param_1;
}



/* Entry: 104a72aa0; end: 104a72bb7;  */

void FUN_104a72aa0(undefined8 *param_1,long param_2)

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
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(ulong *)(param_2 + 8);
  func_0x000104a73c10();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    uStack_50 = 0;
  }
  uStack_48 = (uint)bVar1;
  uStack_40 = 1;
  func_0x00010047a85c(auStack_70,&uStack_50);
  func_0x00010047a898(&uStack_50);
  if (iStack_60 == 0) {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    if (iStack_60 != 1) goto LAB_104a72b9c;
    FUN_104a7294c(&uStack_50,auStack_70);
    uStack_58 = 0;
    FUN_104a7294c(param_1 + 1,&uStack_50);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 3) = 1;
    FUN_104a72d74(&uStack_58);
  }
  func_0x00010047a898(auStack_70);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
LAB_104a72b9c:
  FUN_104a71e10();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a72ba4);
  (*pcVar2)();
}



/* Entry: 104a72bb8; end: 104a72bcb;  */

long FUN_104a72bb8(undefined8 param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_2 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c0c00)[*(uint *)(param_2 + 8)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  return param_2;
}



/* Entry: 104a72bcc; end: 104a72c23;  */

ulong * FUN_104a72bcc(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *param_2;
  if (uVar3 == 0) {
    FUN_104a72c24(param_1 + 1,param_2 + 1);
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



/* Entry: 104a72c24; end: 104a72c67;  */

undefined1 * FUN_104a72c24(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  FUN_104a72c68();
  return param_1;
}



/* Entry: 104a72c68; end: 104a72cf3;  */

void FUN_104a72c68(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c0c00)[*(uint *)(param_1 + 8)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c0c40)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 8) = uVar1;
  }
  return;
}



/* Entry: 104a72cf4; end: 104a72d1b;  */

void FUN_104a72cf4(void)

{
  return;
}



/* Entry: 104a72d1c; end: 104a72d73;  */

long FUN_104a72d1c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c0c00)[*(uint *)(param_1 + 8)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return param_1;
}



/* Entry: 104a72d74; end: 104a72db3;  */

ulong * FUN_104a72d74(ulong *param_1)

{
  if (*param_1 == 0) {
    FUN_104a72d1c(param_1 + 1);
  }
  else if ((*param_1 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a72db4; end: 104a72e0b;  */

long FUN_104a72db4(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c0be0)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}



/* Entry: 104a72e0c; end: 104a72f23;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a72e0c(long *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
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
    plVar11 = plVar14;
    func_0x000100460448();
    if ((char)param_1[0x12] == '\0') {
      func_0x00010047a478();
      lVar19 = *plVar11;
      func_0x00010047a478();
      *plVar11 = (long)param_1;
      plVar11 = param_1;
      FUN_104a72478(&uStack_40);
      func_0x00010047a478();
      *plVar11 = lVar19;
      func_0x000100466b80(plVar14);
      uVar20 = uStack_40;
      if (cStack_38 != '\0') {
        uStack_40 = 0x36;
        if (uVar20 == 0) {
          FUN_104a70f44(param_1[0x11]);
        }
        else if ((uVar20 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      func_0x00010047aa10(&uStack_40);
    }
    else {
      func_0x000100466b80(plVar14);
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
  func_0x00010bda94d0();
  FUN_104bd46a0();
  func_0x00010047aa10(&uStack_40);
  __Unwind_Resume();
  lVar19 = *(long *)((long)param_1 + 0x10);
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined8 *)(lVar19 + 0x20));
  puVar21 = *ppuVar7;
  *ppuVar7 = extraout_x8;
  ppuVar8 = &PTR___tlv_bootstrap_11340d8d0;
  (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined8 *)(lVar19 + 0x40));
  puVar22 = *ppuVar8;
  *ppuVar8 = extraout_x8_00;
  ppuVar9 = &PTR___tlv_bootstrap_11340d8e8;
  (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined8 *)(lVar19 + 0x48));
  puVar23 = *ppuVar9;
  *ppuVar9 = extraout_x8_01;
  ppuVar10 = &PTR___tlv_bootstrap_11340d900;
  (*(code *)PTR___tlv_bootstrap_11340d900)(lVar19 + 0x38);
  puVar24 = *ppuVar10;
  *ppuVar10 = extraout_x8_02;
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
       (puVar17 = *(undefined4 **)(lVar19 + 0x70), puVar17 == (undefined4 *)0x0))
    goto code_r0x000100615030;
    uVar18 = 3;
    switch(*puVar17) {
    case 1:
      uVar18 = 4;
    case 0:
      *puVar17 = uVar18;
      break;
    case 2:
      goto code_r0x000100615030;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      goto code_r0x000100615318;
    }
    lVar15 = *(long *)(param_2 + 8);
    *(undefined8 *)(puVar17 + 0xc) = *(undefined8 *)(lVar15 + 0x38);
    *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(lVar15 + 0x48);
    *(undefined **)(puVar17 + 6) = &UNK_10082b948;
    *(long *)(puVar17 + 8) = lVar19;
    *(undefined8 *)(puVar17 + 10) = 0;
    *(long *)(*(long *)(param_2 + 8) + 0x48) = *(long *)(lVar19 + 0x70) + 0x10;
    uVar13 = (uint)*(byte *)(param_2 + 0x10);
code_r0x000100615030:
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
          FUN_104aaf3e8(alStack_170,&uStack_198,alStack_170 + 1);
          if ((uVar20 & 1) != 0) {
            func_0x00010084dad0(uVar20);
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
        FUN_104aaf3e8(alStack_170,&uStack_188,alStack_170 + 1);
        if ((uVar20 & 1) != 0) {
          func_0x00010084dad0(uVar20);
        }
      }
      else {
        if (*(int *)(lVar19 + 0xac) != 0) {
          uVar12 = 0x24a;
          goto code_r0x0001006152c0;
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
        func_0x0001006153ac(&lStack_190);
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
      FUN_104aaf3e8(alStack_170,&uStack_180,alStack_170 + 1);
      if ((uVar20 & 1) != 0) {
        func_0x00010084dad0(uVar20);
      }
    }
    else {
      if (*(int *)(lVar19 + 0xa8) != 0) {
        uVar12 = 0x237;
code_r0x0001006152c0:
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                            ,uVar12,2,"assertion failed: %s");
        func_0x000107c60ebc();
        goto code_r0x00010061531c;
      }
      *(undefined4 *)(lVar19 + 0xa8) = 1;
      if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
        if (*(int *)(lVar19 + 0xac) != 0) {
          uVar12 = 0x23c;
          goto code_r0x0001006152c0;
        }
        *(undefined4 *)(lVar19 + 0xac) = 1;
      }
      func_0x000100615414(lVar19 + 0x60,alStack_170);
      func_0x0001006154b8(lVar19,alStack_170 + 1);
    }
    if (alStack_170[0] != 0) {
      lVar15 = *(long *)(lVar19 + 0x10);
      func_0x0001004bd910(lVar15,*(long *)(lVar15 + 0x28) + -1);
      if (lVar15 == *(long *)(lVar19 + 0x18)) {
        uStack_1a0 = 4;
        FUN_104aaf3e8(alStack_170,&uStack_1a0,alStack_170 + 1);
      }
      else {
code_r0x000100615234:
        func_0x00010061664c(alStack_170,alStack_170 + 1);
      }
    }
  }
  else {
    if ((bVar2 & 0x3f) != 0) {
      uVar12 = 0x1ff;
      goto code_r0x0001006152c0;
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
    FUN_104aaf50c(lVar19,&uStack_178);
    if ((uVar20 & 1) != 0) {
      func_0x00010084dad0(uVar20);
    }
    lVar15 = *(long *)(lVar19 + 0x10);
    func_0x0001004bd910(lVar15,*(long *)(lVar15 + 0x28) + -1);
    if (lVar15 != *(long *)(lVar19 + 0x18)) goto code_r0x000100615234;
    FUN_104aaf338(alStack_170,alStack_170 + 1);
  }
  func_0x00010061694c(alStack_170 + 1);
  func_0x0001006153ac(alStack_170);
  *ppuVar10 = puVar24;
  *ppuVar9 = puVar23;
  *ppuVar8 = puVar22;
  *ppuVar7 = puVar21;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  func_0x000107c60e78();
code_r0x000100615318:
  func_0x000107c60ebc();
code_r0x00010061531c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100615320);
  (*pcVar6)();
}



/* Entry: 104a72f24; end: 104a72f2b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a72f24(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
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
  
  lVar9 = *(long *)(param_1 + 0x10);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined8 *)(lVar9 + 0x20));
  puVar18 = *ppuVar5;
  *ppuVar5 = extraout_x8;
  ppuVar6 = &PTR___tlv_bootstrap_11340d8d0;
  (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined8 *)(lVar9 + 0x40));
  puVar19 = *ppuVar6;
  *ppuVar6 = extraout_x8_00;
  ppuVar7 = &PTR___tlv_bootstrap_11340d8e8;
  (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined8 *)(lVar9 + 0x48));
  puVar20 = *ppuVar7;
  *ppuVar7 = extraout_x8_01;
  ppuVar8 = &PTR___tlv_bootstrap_11340d900;
  (*(code *)PTR___tlv_bootstrap_11340d900)(lVar9 + 0x38);
  puVar21 = *ppuVar8;
  *ppuVar8 = extraout_x8_02;
  *(undefined8 *)(param_2 + 0x38) = 1;
  alStack_130[1] = 0;
  uStack_110 = 0;
  plVar12 = *(long **)(lVar9 + 0x10);
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
  lStack_78 = lVar9;
  if ((bVar1 >> 6 & 1) == 0) {
    if (((bVar1 >> 3 & 1) == 0) ||
       (puVar15 = *(undefined4 **)(lVar9 + 0x70), puVar15 == (undefined4 *)0x0))
    goto code_r0x000100615030;
    uVar16 = 3;
    switch(*puVar15) {
    case 1:
      uVar16 = 4;
    case 0:
      *puVar15 = uVar16;
      break;
    case 2:
      goto code_r0x000100615030;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      goto code_r0x000100615318;
    }
    lVar13 = *(long *)(param_2 + 8);
    *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(lVar13 + 0x38);
    *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(lVar13 + 0x48);
    *(undefined **)(puVar15 + 6) = &UNK_10082b948;
    *(long *)(puVar15 + 8) = lVar9;
    *(undefined8 *)(puVar15 + 10) = 0;
    *(long *)(*(long *)(param_2 + 8) + 0x48) = *(long *)(lVar9 + 0x70) + 0x10;
    uVar11 = (uint)*(byte *)(param_2 + 0x10);
code_r0x000100615030:
    if ((uVar11 & 1) == 0) {
      if ((uVar11 >> 5 & 1) == 0) {
        uVar17 = *(ulong *)(lVar9 + 0xa0);
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
          FUN_104aaf3e8(alStack_130,&uStack_158,alStack_130 + 1);
          if ((uVar17 & 1) != 0) {
            func_0x00010084dad0(uVar17);
          }
        }
      }
      else if (*(int *)(lVar9 + 0xac) == 5) {
        uVar17 = *(ulong *)(lVar9 + 0xa0);
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
        FUN_104aaf3e8(alStack_130,&uStack_148,alStack_130 + 1);
        if ((uVar17 & 1) != 0) {
          func_0x00010084dad0(uVar17);
        }
      }
      else {
        if (*(int *)(lVar9 + 0xac) != 0) {
          uVar10 = 0x24a;
          goto code_r0x0001006152c0;
        }
        *(undefined4 *)(lVar9 + 0xac) = 2;
        if (*(long *)(param_2 + 0x38) != 0) {
          *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
        }
        lVar13 = *(long *)(param_2 + 8);
        *(undefined8 *)(lVar9 + 0x68) = *(undefined8 *)(lVar13 + 0x80);
        *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar13 + 0x90);
        *(long *)(lVar13 + 0x90) = lVar9 + 0x80;
        lStack_150 = param_2;
        func_0x0001006153ac(&lStack_150);
      }
    }
    else if ((*(int *)(lVar9 + 0xa8) == 3) || (*(int *)(lVar9 + 0xac) == 5)) {
      uVar17 = *(ulong *)(lVar9 + 0xa0);
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
      FUN_104aaf3e8(alStack_130,&uStack_140,alStack_130 + 1);
      if ((uVar17 & 1) != 0) {
        func_0x00010084dad0(uVar17);
      }
    }
    else {
      if (*(int *)(lVar9 + 0xa8) != 0) {
        uVar10 = 0x237;
code_r0x0001006152c0:
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                            ,uVar10,2,"assertion failed: %s");
        func_0x000107c60ebc();
        goto code_r0x00010061531c;
      }
      *(undefined4 *)(lVar9 + 0xa8) = 1;
      if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
        if (*(int *)(lVar9 + 0xac) != 0) {
          uVar10 = 0x23c;
          goto code_r0x0001006152c0;
        }
        *(undefined4 *)(lVar9 + 0xac) = 1;
      }
      func_0x000100615414(lVar9 + 0x60,alStack_130);
      func_0x0001006154b8(lVar9,alStack_130 + 1);
    }
    if (alStack_130[0] != 0) {
      lVar13 = *(long *)(lVar9 + 0x10);
      func_0x0001004bd910(lVar13,*(long *)(lVar13 + 0x28) + -1);
      if (lVar13 == *(long *)(lVar9 + 0x18)) {
        uStack_160 = 4;
        FUN_104aaf3e8(alStack_130,&uStack_160,alStack_130 + 1);
      }
      else {
code_r0x000100615234:
        func_0x00010061664c(alStack_130,alStack_130 + 1);
      }
    }
  }
  else {
    if ((bVar1 & 0x3f) != 0) {
      uVar10 = 0x1ff;
      goto code_r0x0001006152c0;
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
    FUN_104aaf50c(lVar9,&uStack_138);
    if ((uVar17 & 1) != 0) {
      func_0x00010084dad0(uVar17);
    }
    lVar13 = *(long *)(lVar9 + 0x10);
    func_0x0001004bd910(lVar13,*(long *)(lVar13 + 0x28) + -1);
    if (lVar13 != *(long *)(lVar9 + 0x18)) goto code_r0x000100615234;
    FUN_104aaf338(alStack_130,alStack_130 + 1);
  }
  func_0x00010061694c(alStack_130 + 1);
  func_0x0001006153ac(alStack_130);
  *ppuVar8 = puVar21;
  *ppuVar7 = puVar20;
  *ppuVar6 = puVar19;
  *ppuVar5 = puVar18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
code_r0x000100615318:
  func_0x000107c60ebc();
code_r0x00010061531c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100615320);
  (*pcVar4)();
}



/* Entry: 104a72f2c; end: 104a7302b;  */

void FUN_104a72f2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
LAB_104a72fb4:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_104a72fb4;
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
    if (plStack_50 == (long *)0x0) goto LAB_104a73024;
    lVar2 = 5;
  }
  (**(code **)(*plStack_50 + lVar2 * 8))();
LAB_104a73024:
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



/* Entry: 104a7302c; end: 104a730b7;  */

void FUN_104a7302c(long param_1,undefined8 param_2)

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



/* Entry: 104a730b8; end: 104a730bb;  */

undefined8 * FUN_104a730b8(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_1107c4cb8;
  param_1[1] = &PTR_FUN_1107c4d10;
  if (param_1[0x16] == 0) {
    if ((param_1[0x14] & 1) != 0) {
      func_0x00010084dad0();
    }
    func_0x0001006153ac(param_1 + 0xc);
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_1107c4c40;
    param_1[1] = &PTR_FUN_1107c4c98;
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,0x1e5,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100837134);
  (*pcVar1)();
}



/* Entry: 104a730bc; end: 104a730cf;  */

void FUN_104a730bc(void)

{
  func_0x000100837090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a730d0; end: 104a730d7;  */

void FUN_104a730d0(long param_1,long param_2)

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



/* Entry: 104a730d8; end: 104a73127;  */

void FUN_104a730d8(long param_1,undefined8 param_2,long param_3)

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
  func_0x00010bda9538();
  pcStack_28 = FUN_104a73128;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_104a73150(&uStack_31,plVar2,param_2);
  return;
}



/* Entry: 104a73128; end: 104a7314f;  */

void FUN_104a73128(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_104a73150(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 104a73150; end: 104a732bb;  */

void FUN_104a73150(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

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
    func_0x000100560184(auStack_78,param_4[1]);
    FUN_104a6fc58(auStack_68,auStack_78,*param_4,param_3);
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
      *puVar5 = &PTR_DAT_1107c0858;
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
      *puVar5 = &PTR_DAT_1107c08e0;
      *param_1 = 0;
    }
    else {
      *puVar5 = &PTR_DAT_1107c0cf0;
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
      FUN_104addba0(param_1,&uStack_80);
      if ((uStack_80 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    FUN_104a732c4(auStack_68);
    return;
  }
  func_0x00010bda956c();
  FUN_104bd46a0();
  func_0x0001004bdf74(&uStack_80);
  FUN_104a732c4(auStack_68);
  __Unwind_Resume(param_2);
  return;
}



/* Entry: 104a732bc; end: 104a732c3;  */

void FUN_104a732bc(void)

{
  return;
}



/* Entry: 104a732c4; end: 104a73303;  */

ulong * FUN_104a732c4(ulong *param_1)

{
  if (*param_1 == 0) {
    FUN_104a710cc(param_1 + 1);
  }
  else if ((*param_1 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a73304; end: 104a73323;  */

void FUN_104a73304(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000104a73310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 104a73324; end: 104a7336b;  */

void FUN_104a73324(long param_1,undefined8 param_2)

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



/* Entry: 104a7336c; end: 104a73373;  */

void FUN_104a7336c(long param_1,ulong *param_2,ulong *param_3)

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
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined8 *)(lVar7 + 0x20));
  puStack_150 = *ppuVar8;
  *ppuVar8 = extraout_x8;
  ppuVar9 = &PTR___tlv_bootstrap_11340d8d0;
  (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined8 *)(lVar7 + 0x40));
  puVar23 = *ppuVar9;
  *ppuVar9 = extraout_x8_00;
  ppuVar10 = &PTR___tlv_bootstrap_11340d8e8;
  (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined8 *)(lVar7 + 0x48));
  puVar24 = *ppuVar10;
  *ppuVar10 = extraout_x8_01;
  ppuVar11 = &PTR___tlv_bootstrap_11340d900;
  (*(code *)PTR___tlv_bootstrap_11340d900)(lVar7 + 0x38);
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
      goto LAB_104ab0020;
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
    FUN_104ab00c8(lVar7,&uStack_138,param_3);
    if ((uVar18 & 1) != 0) {
      func_0x00010084dad0(uVar18);
    }
    lVar12 = *(long *)(lVar7 + 0x10);
    func_0x0001004bd910(lVar12,*(long *)(lVar12 + 0x28) + -1);
    if (lVar12 == *(long *)(lVar7 + 0x18)) {
      puVar15 = auStack_128;
      FUN_104aaf338(&puStack_130);
      goto LAB_104aaff68;
    }
    goto LAB_104aaff5c;
  }
  if ((bVar2 >> 3 & 1) != 0) {
    if ((bVar2 & 0x37) == 0) {
      if (*(int *)(lVar7 + 0xa8) == 0) {
        uVar18 = param_2[1];
        *(undefined8 *)(lVar7 + 0x60) = *(undefined8 *)(uVar18 + 0x38);
        *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(uVar18 + 0x48);
        *(long *)(uVar18 + 0x48) = lVar7 + 0x78;
        *(undefined4 *)(lVar7 + 0xa8) = 1;
        goto LAB_104aafdf0;
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
LAB_104ab0020:
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                        ,uVar16,2,"assertion failed: %s");
    goto LAB_104ab003c;
  }
LAB_104aafdf0:
  puVar19 = *(undefined4 **)(lVar7 + 0x68);
  if ((puVar19 == (undefined4 *)0x0) || ((param_2[2] & 1) == 0)) {
    bVar4 = false;
    goto LAB_104aafec8;
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
    goto LAB_104ab003c;
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
    FUN_104aaf3e8(&puStack_130,&uStack_140,param_3);
    if ((uVar18 & 1) != 0) {
      func_0x00010084dad0(uVar18);
    }
  }
  func_0x000100615414(*(long *)(lVar7 + 0x68) + 8,&puStack_130);
  if (puStack_130 == (ulong *)0x0) {
LAB_104aaff48:
    puVar15 = auStack_128;
    FUN_104ab0298(lVar7);
  }
  else {
    bVar4 = true;
LAB_104aafec8:
    puVar15 = puStack_130;
    if (((byte)puStack_130[2] >> 1 & 1) != 0) {
      iVar1 = *(int *)(lVar7 + 0xac);
      if (iVar1 == 0) {
        func_0x000100615414(lVar7 + 0xa0,&puStack_130);
        *(undefined4 *)(lVar7 + 0xac) = 1;
        goto LAB_104aaff48;
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
        FUN_104aaf3e8(&puStack_130,puVar15,param_3);
        if ((uVar18 & 1) != 0) {
          func_0x00010084dad0(uVar18);
        }
      }
      else if (iVar1 - 1U < 2) {
LAB_104ab003c:
        _abort();
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x104ab0044);
        (*pcVar6)();
      }
    }
    if (bVar4) goto LAB_104aaff48;
  }
  if (puStack_130 != (ulong *)0x0) {
LAB_104aaff5c:
    puVar15 = auStack_128;
    func_0x00010061664c(&puStack_130);
  }
LAB_104aaff68:
  func_0x00010061694c(auStack_128);
  ppuVar13 = &puStack_130;
  func_0x0001006153ac();
  *ppuVar11 = puVar25;
  *ppuVar10 = puVar24;
  *ppuVar9 = puVar23;
  *ppuVar8 = puStack_150;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if ((int)puVar15 != 0) {
      FUN_104bd46a0();
      func_0x0001004bdf74(&uStack_138);
      func_0x00010061694c(auStack_128);
      func_0x0001006153ac(&puStack_130);
      *ppuVar11 = puVar25;
      *ppuVar10 = puVar24;
      *ppuVar9 = puVar23;
      *ppuVar8 = puStack_150;
    }
    __Unwind_Resume();
    pcStack_168 = FUN_104ab00c8;
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
        func_0x00010084dad0();
      }
    }
    (**(code **)(*ppuVar13[0xb] + 8))();
    ppuVar13[0xb] = (ulong *)&PTR_PTR_1130a5848;
    (**(code **)(PTR_PTR_1130a5848 + 8))();
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
      FUN_104aaf3e8(ppuVar13 + 0x14,&uStack_198,param_3);
      if ((uVar18 & 1) != 0) {
        func_0x00010084dad0(uVar18);
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
        FUN_104aaf3e8(puVar14 + 1,&uStack_1a0,param_3);
        if ((uVar18 & 1) != 0) {
          func_0x00010084dad0(uVar18);
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
      func_0x00010082bfa8(param_3,puVar14,&uStack_1a8,"original_recv_initial_metadata");
      if ((uStack_1a8 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    return;
  }
  return;
}



/* Entry: 104a73374; end: 104a73473;  */

void FUN_104a73374(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
LAB_104a733fc:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_104a733fc;
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
    if (plStack_50 == (long *)0x0) goto LAB_104a7346c;
    lVar2 = 5;
  }
  (**(code **)(*plStack_50 + lVar2 * 8))();
LAB_104a7346c:
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



/* Entry: 104a73474; end: 104a734ff;  */

void FUN_104a73474(long param_1,undefined8 param_2)

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



/* Entry: 104a73500; end: 104a73503;  */

undefined8 * FUN_104a73500(undefined8 *param_1)

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



/* Entry: 104a73504; end: 104a73517;  */

void FUN_104a73504(void)

{
  FUN_104aafbdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a73518; end: 104a7351f;  */

void FUN_104a73518(long param_1,long param_2)

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



/* Entry: 104a73520; end: 104a7356f;  */

void FUN_104a73520(long param_1,undefined8 param_2,long param_3)

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
  func_0x00010bda95a0();
  pcStack_28 = FUN_104a73570;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_104a73598(&uStack_31,plVar2,param_2);
  return;
}



/* Entry: 104a73570; end: 104a73597;  */

void FUN_104a73570(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_104a73598(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 104a73598; end: 104a73723;  */

ulong * FUN_104a73598(undefined8 *param_1,ulong *param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  ulong uStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  ulong auStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)((long)param_4 + 0x14) == 0) {
    func_0x000100560184(auStack_90,param_4[1]);
    FUN_104a6fd10(auStack_80,auStack_90,*param_4,param_3);
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
    puVar6 = *(undefined8 **)(param_3 + 8);
    if (auStack_80[0] == 0) {
      *puVar6 = &PTR_DAT_1107c0858;
      puVar6[2] = uStack_68;
      puVar6[1] = uStack_70;
      puVar6[4] = uStack_58;
      puVar6[3] = uStack_60;
      uStack_60 = 0;
      uStack_58 = 0;
      do {
        uVar4 = uStack_50;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(&uStack_50,0x10);
        if (bVar3) {
          uStack_50 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar6[5] = uVar4;
      *puVar6 = &PTR_FUN_1107c0810;
      do {
        uVar4 = uStack_48;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(&uStack_48,0x10);
        if (bVar3) {
          uStack_48 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar6[6] = uVar4;
      puVar6[8] = uStack_38;
      puVar6[7] = uStack_40;
      *param_1 = 0;
    }
    else {
      *puVar6 = &PTR_DAT_1107c0cf0;
      uStack_98 = auStack_80[0];
      if ((auStack_80[0] & 1) != 0) {
        piVar7 = (int *)(auStack_80[0] - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_104addba0(param_1,&uStack_98);
      if ((uStack_98 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    puVar5 = auStack_80;
    FUN_104a73724(puVar5);
    return puVar5;
  }
  func_0x00010bda95d4();
  FUN_104bd46a0();
  func_0x0001004bdf74(&uStack_98);
  FUN_104a73724(auStack_80);
  __Unwind_Resume();
  if (*param_2 == 0) {
    if ((undefined8 *)param_2[7] != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)param_2[7])();
    }
    FUN_104a710cc(param_2 + 1);
  }
  else if ((*param_2 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_2;
}



/* Entry: 104a73724; end: 104a7377b;  */

ulong * FUN_104a73724(ulong *param_1)

{
  if (*param_1 == 0) {
    if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)param_1[7])();
    }
    FUN_104a710cc(param_1 + 1);
  }
  else if ((*param_1 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a7377c; end: 104a7379b;  */

void FUN_104a7377c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000104a73788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 104a7379c; end: 104a737e3;  */

void FUN_104a7379c(long param_1,undefined8 param_2)

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



/* Entry: 104a737e4; end: 104a737eb;  */

void FUN_104a737e4(void)

{
  return;
}



/* Entry: 104a737ec; end: 104a7380f;  */

void FUN_104a737ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1107c0dd8;
  return;
}



/* Entry: 104a73810; end: 104a73813;  */

void FUN_104a73810(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a73814; end: 104a7384f;  */

long FUN_104a73814(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c0e48);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a73850; end: 104a7385b;  */

undefined ** FUN_104a73850(void)

{
  return &PTR_DAT_1107c0e48;
}



/* Entry: 104a7385c; end: 104a738a7;  */

bool FUN_104a7385c(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  uVar3 = *(ulong *)(param_2 + 8);
  if (uVar2 == uVar3) {
    bVar1 = true;
  }
  else if ((long)(uVar3 & uVar2) < 0) {
    uVar2 = uVar2 & 0x7fffffffffffffff;
    _strcmp(uVar2,uVar3 & 0x7fffffffffffffff);
    bVar1 = (int)uVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 104a738a8; end: 104a738af;  */

void FUN_104a738a8(void)

{
  return;
}



/* Entry: 104a738b0; end: 104a738d3;  */

void FUN_104a738b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1107c0e68;
  return;
}



/* Entry: 104a738d4; end: 104a738d7;  */

void FUN_104a738d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a738d8; end: 104a73a77;  */

undefined8 FUN_104a738d8(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_40;
  long *plStack_38;
  
  lVar8 = *param_2;
  uStack_40 = *(undefined8 *)(lVar8 + 0x38);
  plStack_38 = *(long **)(lVar8 + 0x40);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar6 = &uStack_40;
  func_0x00010047d6c8(puVar6,"grpc.minimal_stack",0x12);
  uVar3 = (uint)puVar6 & 0xffff;
  if (uVar3 < 0x101) {
    uVar3 = 0;
  }
  if ((uVar3 & 0xff) == 0) {
    uStack_68 = uStack_40;
    plStack_60 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_104a6fe84(&lStack_58,&uStack_68);
    plVar1 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      plVar2 = plStack_60 + 1;
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
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (lStack_58 != 0x7fffffffffffffff || lStack_50 != 0x7fffffffffffffff) {
      func_0x000100560688(lVar8,&PTR_FUN_1107c0798);
    }
  }
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return 1;
}



/* Entry: 104a73a78; end: 104a73ab3;  */

long FUN_104a73a78(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c0ec8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a73ab4; end: 104a73c67;  */

undefined ** FUN_104a73ab4(void)

{
  return &PTR_DAT_1107c0ec8;
}



/* Entry: 104a73c68; end: 104a73fb7;  */

long * FUN_104a73c68(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long **pplVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  ulong uStack_88;
  undefined1 uStack_79;
  long **pplStack_78;
  
  lVar3 = 0;
  func_0x00010b28ba8c(0,0,&PTR_DAT_11336f028);
  ppuVar4 = &PTR_PTR_110ccfc70;
  func_0x00010b28a954(&PTR_PTR_110ccfc70,lVar3);
  if ((ppuVar4 == (undefined **)0x0) ||
     (func_0x00010b28893c(param_1,param_2,ppuVar4,&PTR_PTR_110ccfc70,0,0,lVar3), (int)param_1 != 0))
  {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = param_3;
    (**(code **)(*param_3 + 0x10))();
    *plVar8 = (long)ppuVar4[2];
    plVar8[1] = (long)ppuVar4[3];
    lStack_a0 = 0;
    lStack_98 = 0;
    puVar7 = *ppuVar4;
    plStack_a8 = &lStack_a0;
    if (puVar7 != (undefined *)0x0) {
      uVar10 = 0xffffffffffffffff;
      do {
        plStack_90 = (long *)(puVar7 + 8);
        uStack_88 = uVar10;
        func_0x00010b28b5d4(&plStack_90);
        uVar10 = uStack_88;
        iVar2 = (int)&plStack_90;
        func_0x00010b28b220();
        uVar1 = uStack_88;
        if ((iVar2 != 0) || (lVar11 = plStack_90[3], lVar11 == 0)) break;
        uVar9 = (ulong)**(uint **)(lVar11 + uStack_88 * 0x18);
        plVar5 = param_3;
        (**(code **)(*param_3 + 0x18))(param_3,uVar9);
        _memcpy();
        plVar12 = *(long **)(lVar11 + uVar1 * 0x18 + 8);
        pplStack_78 = &plStack_90;
        pplVar6 = &plStack_a8;
        plStack_90 = plVar5;
        uStack_88 = uVar9;
        FUN_104a73fb8(pplVar6,&plStack_90,&UNK_10dd5b8f9,&pplStack_78,&uStack_79);
        pplVar6[6] = plVar12;
        puVar7 = *ppuVar4;
      } while (puVar7 != (undefined *)0x0);
    }
    plVar5 = plVar8 + 3;
    func_0x000104a74130(plVar8 + 2,*plVar5);
    plVar8[2] = (long)plStack_a8;
    plVar8[3] = lStack_a0;
    plVar8[4] = lStack_98;
    if (lStack_98 == 0) {
      plVar8[2] = (long)plVar5;
    }
    else {
      *(long **)(lStack_a0 + 0x10) = plVar5;
      lStack_a0 = 0;
      lStack_98 = 0;
      plStack_a8 = &lStack_a0;
    }
    func_0x000104a74130(&plStack_a8,lStack_a0);
    lStack_a0 = 0;
    lStack_98 = 0;
    puVar7 = ppuVar4[1];
    plStack_a8 = &lStack_a0;
    if (puVar7 != (undefined *)0x0) {
      uVar10 = 0xffffffffffffffff;
      do {
        plStack_90 = (long *)(puVar7 + 8);
        uStack_88 = uVar10;
        func_0x00010b28b5d4(&plStack_90);
        uVar10 = uStack_88;
        iVar2 = (int)&plStack_90;
        func_0x00010b28b220();
        uVar1 = uStack_88;
        if ((iVar2 != 0) || (lVar11 = plStack_90[3], lVar11 == 0)) break;
        uVar9 = (ulong)**(uint **)(lVar11 + uStack_88 * 0x18);
        plVar5 = param_3;
        (**(code **)(*param_3 + 0x18))(param_3,uVar9);
        _memcpy();
        plVar12 = *(long **)(lVar11 + uVar1 * 0x18 + 8);
        pplStack_78 = &plStack_90;
        pplVar6 = &plStack_a8;
        plStack_90 = plVar5;
        uStack_88 = uVar9;
        FUN_104a73fb8(pplVar6,&plStack_90,&UNK_10dd5b8f9,&pplStack_78,&uStack_79);
        pplVar6[6] = plVar12;
        puVar7 = ppuVar4[1];
      } while (puVar7 != (undefined *)0x0);
    }
    plVar5 = plVar8 + 6;
    func_0x000104a74130(plVar8 + 5,*plVar5);
    plVar8[5] = (long)plStack_a8;
    plVar8[6] = lStack_a0;
    plVar8[7] = lStack_98;
    if (lStack_98 == 0) {
      plVar8[5] = (long)plVar5;
    }
    else {
      *(long **)(lStack_a0 + 0x10) = plVar5;
      lStack_a0 = 0;
      lStack_98 = 0;
      plStack_a8 = &lStack_a0;
    }
    func_0x000104a74130(&plStack_a8,lStack_a0);
  }
  if (lVar3 != 0) {
    func_0x00010b28bb80(lVar3);
  }
  return plVar8;
}



/* Entry: 104a73fb8; end: 104a7403f;  */

undefined1  [16] FUN_104a73fb8(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_104a74040(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x38;
    __Znwm();
    uVar4 = *(undefined8 *)*param_4;
    *(undefined8 *)(lVar3 + 0x28) = ((undefined8 *)*param_4)[1];
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    FUN_104a740dc(param_1,uStack_38,plVar2,lVar3);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = lVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 104a74040; end: 104a740db;  */

long * FUN_104a74040(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar1 = (long *)*plVar3;
    do {
      while( true ) {
        plVar3 = plVar1;
        lVar2 = param_1;
        func_0x000100475284(param_1,param_3,plVar3 + 4);
        if ((int)lVar2 == 0) break;
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_104a740c0;
      }
      lVar2 = param_1;
      func_0x000100475284(param_1,plVar3 + 4,param_3);
      if ((int)lVar2 == 0) break;
      plVar4 = plVar3 + 1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_104a740c0:
  *param_2 = plVar3;
  return plVar4;
}



/* Entry: 104a740dc; end: 104a74243;  */

void FUN_104a740dc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 104a74244; end: 104a744df;  */

/* WARNING: Possible PIC construction at 0x000104a74508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a7450c) */

void FUN_104a74244(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  ulong *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  if (*param_2 != 0) {
    puStack_38 = (ulong *)0x4;
    if (*param_2 != 4) {
      puVar7 = param_2;
      func_0x00010ae7711c(param_2,&puStack_38);
      if (((ulong)puStack_38 & 1) != 0) {
        func_0x00010084dad0();
      }
      if (((ulong)puVar7 & 1) == 0) {
        param_2 = (ulong *)*param_2;
        puStack_40 = param_2;
        if (((ulong)param_2 & 1) == 0) {
          if (param_2 == (ulong *)0x0) goto LAB_104a74380;
        }
        else {
          piVar10 = (int *)((long)param_2 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = *piVar10 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = *piVar10 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puStack_38 = param_2;
        FUN_104abab1c("run_poller",&puStack_38,
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/backup_poller.cc"
                      ,0x7c);
        if (((ulong)puStack_38 & 1) != 0) {
          func_0x00010084dad0();
        }
        if (((ulong)param_2 & 1) != 0) {
          func_0x00010084dad0(param_2);
        }
      }
    }
LAB_104a74380:
    FUN_104a744e0(param_1);
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x78);
  func_0x000100460448();
  if (*(char *)(param_1 + 0x88) != '\0') {
    func_0x000100466b80(*(undefined8 *)(param_1 + 0x78));
    iVar3 = (int)param_1 + 0x98;
    func_0x0001005a5e70();
    if (iVar3 != 0) {
      func_0x000104abe9b0(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + 0x80));
      return;
    }
    return;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x80);
  func_0x000100460dc4();
  uVar5 = *puVar4;
  func_0x0001004671a4(uVar5);
  func_0x00010049215c(&puStack_48,uVar11,0,uVar5);
  puVar6 = *(ulong **)(param_1 + 0x78);
  func_0x000100466b80();
  puVar7 = puStack_48;
  if (((ulong)puStack_48 & 1) == 0) {
    if (puStack_48 != (ulong *)0x0) goto LAB_104a743c4;
  }
  else {
    piVar10 = (int *)((long)puStack_48 + -1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_104a743c4:
    puStack_38 = puStack_48;
    FUN_104abab1c("Run client channel backup poller",&puStack_38,
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/backup_poller.cc"
                  ,0x8a);
    if (((ulong)puStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    puVar6 = puStack_38;
    if (((ulong)puVar7 & 1) != 0) {
      func_0x00010084dad0();
      puVar6 = puVar7;
    }
  }
  func_0x000100460dc4();
  uVar8 = *puVar6;
  func_0x0001004671a4();
  lVar9 = 0x7fffffffffffffff;
  if ((((uVar8 != 0x7fffffffffffffff) && (lRam00000001130a5860 != 0x7fffffffffffffff)) &&
      (lVar9 = -0x8000000000000000, uVar8 != 0x8000000000000000)) &&
     (lRam00000001130a5860 != -0x8000000000000000)) {
    if ((long)uVar8 < 1) {
      if (lRam00000001130a5860 < (long)(-0x8000000000000000 - uVar8)) goto LAB_104a74460;
    }
    else if ((long)(uVar8 ^ 0x7fffffffffffffff) < lRam00000001130a5860) {
      lVar9 = 0x7fffffffffffffff;
      goto LAB_104a74460;
    }
    lVar9 = lRam00000001130a5860 + uVar8;
  }
LAB_104a74460:
  func_0x000100480ee4(param_1,lVar9,param_1 + 0x38);
  if (((ulong)puStack_48 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a744e0; end: 104a74527;  */

/* WARNING: Possible PIC construction at 0x000104a74508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a7450c) */

void FUN_104a744e0(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x98;
  func_0x0001005a5e70();
  if (iVar1 != 0) {
    func_0x000104abe9b0(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + 0x80));
    return;
  }
  return;
}



/* Entry: 104a74528; end: 104a7452b;  */

/* WARNING: Possible PIC construction at 0x000104a74508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a7450c) */

void FUN_104a74528(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x98;
  func_0x0001005a5e70();
  if (iVar1 != 0) {
    func_0x000104abe9b0(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + 0x80));
    return;
  }
  return;
}



/* Entry: 104a7452c; end: 104a7460b;  */

long FUN_104a7452c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001004b62b4(&uStack_38,0);
  func_0x000100460de4(auStack_80);
  lVar2 = param_1;
  FUN_104a75678();
  if (lVar2 == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xc0);
    FUN_104aab068();
    if ((undefined **)*puVar1 == &PTR_DAT_1107c7238) {
      lVar2 = 3;
    }
    else {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                          ,0x47,2,
                          "grpc_channel_check_connectivity_state called on something that is not a client channel"
                         );
      lVar2 = 4;
    }
  }
  else {
    func_0x0001004be484();
  }
  func_0x000100467a48(auStack_80);
  func_0x0001004b6ddc(&uStack_38);
  return lVar2;
}



/* Entry: 104a7460c; end: 104a7460f;  */

undefined8 * FUN_104a7460c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  *param_1 = &PTR_FUN_1107c0ee8;
  param_1[5] = param_1[5] | 1;
  puVar1 = param_1;
  func_0x000100467970();
  func_0x000100460dc4(param_1[8]);
  *puVar1 = extraout_x8;
  if (((*(byte *)(param_1 + 5) >> 2 & 1) == 0) && ((bRam0000000113815bd8 & 1) != 0)) {
    FUN_104a6f7dc();
  }
  return param_1;
}



/* Entry: 104a74610; end: 104a748cb;  */

void FUN_104a74610(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 auStack_c0 [72];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001004b62b4(&uStack_78,0);
  func_0x000100460de4(auStack_c0);
  puVar5 = (undefined8 *)0xd8;
  __Znwm();
  plVar9 = puVar5 + 1;
  *plVar9 = 0x100000000;
  *puVar5 = &PTR_FUN_1107c0f20;
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined4 *)(puVar5 + 5) = param_2;
  puVar5[2] = param_1;
  puVar5[3] = param_5;
  puVar5[4] = param_6;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  uVar6 = param_5;
  func_0x0001004bd5bc(param_5,param_6);
  if ((uVar6 & 1) != 0) {
    puVar5[0xc] = FUN_104a748ec;
    puVar5[0xd] = puVar5;
    puVar5[0xe] = 0;
    puVar5[0x17] = 0x104a74914;
    puVar5[0x18] = puVar5;
    puVar5[0x19] = 0;
    lVar7 = puVar5[2];
    FUN_104a75678();
    if (lVar7 == 0) {
      puVar8 = *(undefined8 **)(puVar5[2] + 0xc0);
      FUN_104aab068();
      if ((undefined **)*puVar8 != &PTR_DAT_1107c7238) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                            ,0x7f,2,
                            "grpc_channel_watch_connectivity_state called on something that is not a client channel"
                           );
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                            ,0x82,2,"assertion failed: %s");
        _abort();
        goto LAB_104a7484c;
      }
      func_0x000100491618(param_3,param_4);
      func_0x000100480ee4(puVar5 + 0xf,param_3,puVar5 + 0x16);
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 0x100000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar8 = (undefined8 *)0x30;
      __Znwm();
      func_0x000100491618(param_3,param_4);
      *puVar8 = puVar5;
      puVar8[1] = param_3;
      puVar8[3] = 0x104a74c34;
      puVar8[4] = puVar8;
      puVar8[5] = 0;
      func_0x0001004b85fc(param_5);
      func_0x0001004b8624();
      FUN_104a7495c(lVar7,param_5,param_4,puVar5 + 5,puVar5 + 0xb,puVar8 + 2);
    }
    func_0x000100467a48(auStack_c0);
    func_0x0001004b6ddc(&uStack_78);
    return;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                      ,0x6f,2,"assertion failed: %s");
  _abort();
LAB_104a7484c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a74850);
  (*pcVar4)();
}



/* Entry: 104a748cc; end: 104a748e3;  */

void FUN_104a748cc(void)

{
  code *pcVar1;
  
  func_0x000100467a48();
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a748e0);
  (*pcVar1)();
}



/* Entry: 104a748e4; end: 104a748eb;  */

undefined8 FUN_104a748e4(void)

{
  return 0;
}



/* Entry: 104a748ec; end: 104a7495b;  */

void FUN_104a748ec(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  func_0x0001005a5960(param_1 + 0xf);
  puVar1 = (ulong *)(param_1 + 1);
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
    (**(code **)*param_1)(param_1);
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
  if (uVar4 - 1 != 0 || param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a74c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 104a7495c; end: 104a749df;  */

void FUN_104a7495c(void)

{
  __Znwm(0x50);
  FUN_104a7516c();
  return;
}



/* Entry: 104a749e0; end: 104a74af7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a749e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*(char *)(param_1 + 0xd0) == '\0') {
    uStack_30 = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    auStack_58[1] = 0;
    auStack_58[2] = 0;
    auStack_58[3] = 0;
    FUN_104ab5920(&uStack_30,2,"Timed out waiting for connection state change",0x2d,&uStack_31,
                  auStack_58 + 1);
    puStack_28 = auStack_58 + 1;
    func_0x000100482b64(&puStack_28);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if ((uStack_30 & 1) != 0) {
      piVar6 = (int *)(uStack_30 - 1);
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
  auStack_58[0] = uStack_30;
  func_0x0001008324d0(uVar4,uVar5,auStack_58,FUN_104a74c64,param_1,param_1 + 0x30,0);
  if ((auStack_58[0] & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a74af8; end: 104a74c63;  */

undefined8 * FUN_104a74af8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c0f20;
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


