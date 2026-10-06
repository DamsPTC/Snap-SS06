/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104acfb18; end: 104acfb9b;  */

void FUN_104acfb18(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 104acfb9c; end: 104acfc37;  */

void FUN_104acfb9c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lStack_88;
  int iStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_104acfc38(&lStack_88);
  if (iStack_80 != 2 || lStack_88 != *(long *)(param_2 + 8)) {
    uStack_38 = uStack_70;
    uStack_40 = uStack_78;
    plVar1 = &lStack_88;
    FUN_104acfc78();
    if ((int)plVar1[1] != 2 || *plVar1 != *(long *)(param_2 + 8)) {
      uStack_48 = uStack_70;
      uStack_50 = uStack_78;
    }
  }
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  return;
}



/* Entry: 104acfc38; end: 104acfc77;  */

ulong * FUN_104acfc38(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *extraout_x8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar10 = param_2[2];
  param_1[4] = (ulong)param_2;
  param_1[5] = uVar10;
  *(int *)(param_1 + 6) = (int)param_2[3];
  if (*param_2 == 0) {
    uVar10 = param_2[1];
    *(undefined4 *)(param_1 + 1) = 2;
    *param_1 = uVar10;
    return param_2;
  }
  if ((int)param_1[1] == 1) {
    *(undefined4 *)(param_1 + 1) = 2;
  }
  else {
    plVar9 = *(long **)param_1[4];
    uVar10 = ((undefined8 *)param_1[4])[1];
    uVar8 = param_1[6];
    *(int *)(param_1 + 6) = (int)uVar8 + 1;
    if ((int)uVar8 == *(int *)((long)param_1 + 0x2c)) {
      plVar7 = (long *)0x0;
      puVar5 = (ulong *)((long)plVar9 + uVar10);
    }
    else {
      puVar5 = param_1 + 5;
      plVar7 = plVar9;
      func_0x00010082b424(puVar5,plVar9,uVar10,*param_1);
    }
    if ((ulong *)((long)plVar9 + uVar10) == puVar5) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    uVar8 = *param_1;
    if (uVar10 < uVar8) {
      puVar5 = (ulong *)&UNK_10f2fca6e;
      FUN_104a6f9e8();
      puVar1 = puVar5 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar6 = 0x38;
      __Znwm();
      plVar9 = (long *)*plVar7;
      *plVar7 = 0;
      FUN_104acffb8();
      if (plVar9 != (long *)0x0) {
        plVar7 = plVar9 + 1;
        do {
          lVar11 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      if (puVar5 != (ulong *)0x0) {
        puVar1 = puVar5 + 1;
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
          (**(code **)(*puVar5 + 8))();
        }
      }
      *extraout_x8 = uVar6;
      return puVar5;
    }
    uVar12 = (long)puVar5 - ((long)plVar9 + uVar8);
    uVar2 = uVar10 - uVar8;
    if (uVar12 <= uVar10 - uVar8) {
      uVar2 = uVar12;
    }
    param_1[2] = (long)plVar9 + uVar8;
    param_1[3] = uVar2;
    *param_1 = (long)plVar7 + uVar2 + uVar8;
  }
  return param_1;
}



/* Entry: 104acfc78; end: 104acfd3f;  */

ulong * FUN_104acfc78(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *extraout_x8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if ((int)param_1[1] == 1) {
    *(undefined4 *)(param_1 + 1) = 2;
  }
  else {
    plVar9 = *(long **)param_1[4];
    uVar11 = ((undefined8 *)param_1[4])[1];
    uVar8 = param_1[6];
    *(int *)(param_1 + 6) = (int)uVar8 + 1;
    if ((int)uVar8 == *(int *)((long)param_1 + 0x2c)) {
      plVar7 = (long *)0x0;
      puVar5 = (ulong *)((long)plVar9 + uVar11);
    }
    else {
      puVar5 = param_1 + 5;
      plVar7 = plVar9;
      func_0x00010082b424(puVar5,plVar9,uVar11,*param_1);
    }
    if ((ulong *)((long)plVar9 + uVar11) == puVar5) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    uVar8 = *param_1;
    if (uVar11 < uVar8) {
      puVar5 = (ulong *)&UNK_10f2fca6e;
      FUN_104a6f9e8();
      puVar1 = puVar5 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar6 = 0x38;
      __Znwm();
      plVar9 = (long *)*plVar7;
      *plVar7 = 0;
      FUN_104acffb8();
      if (plVar9 != (long *)0x0) {
        plVar7 = plVar9 + 1;
        do {
          lVar10 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      if (puVar5 != (ulong *)0x0) {
        puVar1 = puVar5 + 1;
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*puVar5 + 8))();
        }
      }
      *extraout_x8 = uVar6;
      return puVar5;
    }
    uVar12 = (long)puVar5 - ((long)plVar9 + uVar8);
    uVar2 = uVar11 - uVar8;
    if (uVar12 <= uVar11 - uVar8) {
      uVar2 = uVar12;
    }
    param_1[2] = (long)plVar9 + uVar8;
    param_1[3] = uVar2;
    *param_1 = (long)plVar7 + uVar2 + uVar8;
  }
  return param_1;
}



/* Entry: 104acfd40; end: 104acfe6f;  */

void FUN_104acfd40(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = param_2 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar4 = 0x38;
  __Znwm();
  plVar5 = (long *)*param_3;
  *param_3 = 0;
  FUN_104acffb8();
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
  if (param_2 != (long *)0x0) {
    plVar5 = param_2 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*param_2 + 8))();
    }
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 104acfe70; end: 104acff0b;  */

void FUN_104acfe70(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((bRam00000001136a22b0 & 1) == 0) {
    iVar1 = 0x136a22b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104ab8e38(0x1136a22a8,"Insecure",8);
      ___cxa_guard_release(0x1136a22b0);
    }
  }
  if ((char)*(byte *)((long)puRam00000001136a22a8 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*puRam00000001136a22a8;
    uVar3 = puRam00000001136a22a8[1];
  }
  else {
    uVar3 = (ulong)*(byte *)((long)puRam00000001136a22a8 + 0x17);
    puVar2 = puRam00000001136a22a8;
  }
  *param_1 = puVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 104acff0c; end: 104acff13;  */

undefined8 FUN_104acff0c(void)

{
  return 0;
}



/* Entry: 104acff14; end: 104acffab;  */

void FUN_104acff14(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if ((bRam00000001136a22c0 & 1) == 0) {
    iVar4 = 0x136a22c0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      puVar5 = (undefined8 *)0x10;
      __Znwm();
      *puVar5 = &PTR_FUN_1107c6420;
      puVar5[1] = 1;
      puRam00000001136a22b8 = puVar5;
      ___cxa_guard_release(0x1136a22c0);
    }
  }
  plVar1 = puRam00000001136a22b8 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 104acffac; end: 104acffb7;  */

void FUN_104acffac(void)

{
  return;
}



/* Entry: 104acffb8; end: 104ad009b;  */

undefined8 * FUN_104acffb8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)*param_2;
  *param_2 = 0;
  plStack_30 = (long *)*param_3;
  *param_3 = 0;
  func_0x0001004ca74c(param_1,"",0,&plStack_28,&plStack_30);
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
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 8))();
    }
  }
  *param_1 = &PTR_FUN_1107c6518;
  return param_1;
}



/* Entry: 104ad009c; end: 104ad00b3;  */

void FUN_104ad009c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ad00a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 104ad00b4; end: 104ad00e3;  */

ulong * FUN_104ad00b4(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104ad00e4; end: 104ad0137;  */

undefined8 * FUN_104ad00e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c6480;
  func_0x000100460314(param_1[3]);
  FUN_104ad0f44(param_1[2],1);
  if ((code *)param_1[6] != (code *)0x0) {
    (*(code *)param_1[6])(param_1[5]);
  }
  return param_1;
}



/* Entry: 104ad0138; end: 104ad013b;  */

undefined8 * FUN_104ad0138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c6480;
  func_0x000100460314(param_1[3]);
  FUN_104ad0f44(param_1[2],1);
  if ((code *)param_1[6] != (code *)0x0) {
    (*(code *)param_1[6])(param_1[5]);
  }
  return param_1;
}



/* Entry: 104ad013c; end: 104ad014f;  */

void FUN_104ad013c(void)

{
  FUN_104ad00e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ad0150; end: 104ad01eb;  */

void FUN_104ad0150(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((bRam00000001136a22d0 & 1) == 0) {
    iVar1 = 0x136a22d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104ab8e38(0x1136a22c8,"Ssl",3);
      ___cxa_guard_release(0x1136a22d0);
    }
  }
  if ((char)*(byte *)((long)puRam00000001136a22c8 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*puRam00000001136a22c8;
    uVar3 = puRam00000001136a22c8[1];
  }
  else {
    uVar3 = (ulong)*(byte *)((long)puRam00000001136a22c8 + 0x17);
    puVar2 = puRam00000001136a22c8;
  }
  *param_1 = puVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 104ad01ec; end: 104ad0217;  */

void FUN_104ad01ec(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((bRam00000001136a22d0 & 1) == 0) {
    iVar1 = 0x136a22d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104ab8e38(0x1136a22c8,"Ssl",3);
      ___cxa_guard_release(0x1136a22d0);
    }
  }
  if ((char)*(byte *)((long)puRam00000001136a22c8 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*puRam00000001136a22c8;
    uVar3 = puRam00000001136a22c8[1];
  }
  else {
    uVar3 = (ulong)*(byte *)((long)puRam00000001136a22c8 + 0x17);
    puVar2 = puRam00000001136a22c8;
  }
  *param_1 = puVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 104ad0218; end: 104ad02af;  */

undefined1  [16] FUN_104ad0218(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_38 [24];
  
  func_0x000100741c08(auStack_38);
  puVar1 = auStack_38;
  func_0x000100740704();
  if (puVar1 == (undefined1 *)0x0) {
    pcVar3 = "No value found for %s property.";
    uVar4 = 99;
  }
  else {
    puVar2 = auStack_38;
    func_0x000100740704();
    if (puVar2 == (undefined1 *)0x0) {
      pcVar3 = *(char **)(puVar1 + 8);
      uVar4 = *(undefined8 *)(puVar1 + 0x10);
      goto LAB_104ad02a0;
    }
    pcVar3 = "Multiple values found for %s property.";
    uVar4 = 0x67;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/tls/tls_utils.cc"
                      ,uVar4,0,pcVar3);
  uVar4 = 0;
  pcVar3 = "";
LAB_104ad02a0:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = pcVar3;
  return auVar5;
}



/* Entry: 104ad02b0; end: 104ad0437;  */

void FUN_104ad02b0(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_68 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000100741c08(auStack_68);
  puVar6 = auStack_68;
  func_0x000100740704();
  do {
    if (puVar6 == (undefined1 *)0x0) {
      if (*param_1 == param_1[1]) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/tls/tls_utils.cc"
                            ,0x78,0,"No value found for %s property.");
      }
      return;
    }
    puVar2 = (undefined8 *)param_1[1];
    if (puVar2 < (undefined8 *)param_1[2]) {
      uVar3 = *(undefined8 *)(puVar6 + 0x10);
      *puVar2 = *(undefined8 *)(puVar6 + 8);
      puVar2[1] = uVar3;
      plVar12 = puVar2 + 2;
    }
    else {
      lVar13 = (long)puVar2 - *param_1 >> 4;
      uVar1 = lVar13 + 1;
      if (uVar1 >> 0x3c != 0) {
        FUN_104a831e0(param_1);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104ad0414);
        (*pcVar5)();
      }
      uVar8 = param_1[2] - *param_1;
      uVar9 = (long)uVar8 >> 3;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7fffffffffffffef < uVar8) {
        uVar9 = 0xfffffffffffffff;
      }
      plVar7 = param_1 + 2;
      func_0x000100477c28();
      plVar12 = plVar7 + lVar13 * 2;
      lVar13 = *(long *)(puVar6 + 0x10);
      *plVar12 = *(long *)(puVar6 + 8);
      plVar12[1] = lVar13;
      lVar13 = *param_1;
      lVar11 = param_1[1];
      plVar10 = plVar12;
      if (lVar11 != lVar13) {
        do {
          plVar4 = (long *)(lVar11 + -8);
          lVar14 = *(long *)(lVar11 + -0x10);
          lVar11 = lVar11 + -0x10;
          plVar10[-1] = *plVar4;
          plVar10[-2] = lVar14;
          plVar10 = plVar10 + -2;
        } while (lVar11 != lVar13);
        lVar11 = *param_1;
      }
      plVar12 = plVar12 + 2;
      *param_1 = (long)plVar10;
      param_1[1] = (long)plVar12;
      param_1[2] = (long)(plVar7 + uVar9 * 2);
      if (lVar11 != 0) {
        __ZdlPv(lVar11);
      }
    }
    param_1[1] = (long)plVar12;
    puVar6 = auStack_68;
    func_0x000100740704();
  } while( true );
}



/* Entry: 104ad0438; end: 104ad04e7;  */

void FUN_104ad0438(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *puVar1 = 1;
  puVar1[1] = 0;
  uStack_38 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *param_1 = puVar1;
  func_0x0001007402ac(&uStack_38);
  func_0x0001007402dc(puVar1,"transport_security_type",&UNK_10dd56f20);
  uVar2 = 0;
  func_0x00010073f24c(0);
  uVar3 = uVar2;
  _strlen();
  func_0x000100740398(puVar1,"security_level",uVar2,uVar3);
  return;
}



/* Entry: 104ad04e8; end: 104ad0517;  */

void FUN_104ad04e8(long *param_1)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  FUN_104ab8dcc();
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 104ad0518; end: 104ad05c7;  */

void FUN_104ad0518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = 0;
  plVar3 = &lStack_38;
  FUN_104ae0774();
  if ((int)plVar3 == 0) {
    func_0x0001004dde80(&plStack_40,lStack_38,param_1,param_2);
    func_0x0001004dc3b8(param_4,&plStack_40);
    if (plStack_40 == (long *)0x0) {
      return;
    }
    plVar3 = plStack_40 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = plStack_40;
    if (lVar4 + -1 != 0) {
      return;
    }
  }
  else {
    func_0x00010bdad0e4();
  }
  (**(code **)(*plVar3 + 8))();
  return;
}



/* Entry: 104ad05c8; end: 104ad064f;  */

void FUN_104ad05c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_104ad0438(auStack_38);
  func_0x0001007407ec(param_5,auStack_38);
  func_0x0001007402ac(auStack_38);
  func_0x000100740870(&uStack_30);
  uStack_40 = 0;
  func_0x0001004bd7e8(auStack_38,param_6,&uStack_40);
  if ((uStack_40 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104ad0650; end: 104ad0653;  */

void FUN_104ad0650(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    func_0x00010bdad124();
  }
  else if (*(long *)(param_2 + 0x20) != 0) {
    FUN_104a965a0();
    return;
  }
  func_0x00010bdad158();
                    /* WARNING: Could not recover jumptable at 0x000104ad0d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x20) + 0x28))();
  return;
}



/* Entry: 104ad0654; end: 104ad0793;  */

undefined8 * FUN_104ad0654(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_1107c6580;
  lVar4 = param_1[6];
  param_1[6] = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  plVar5 = (long *)param_1[5];
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
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = (long *)param_1[4];
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
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return param_1;
}



/* Entry: 104ad0794; end: 104ad07a3;  */

void FUN_104ad0794(void)

{
  return;
}



/* Entry: 104ad07a4; end: 104ad080f;  */

void FUN_104ad07a4(long param_1,long param_2,undefined8 param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    _snprintf(param_3,0x400,"%s/%s");
    if ((int)param_3 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/load_system_roots_supported.cc"
                          ,0x5d,2,"failed to get absolute path for file: %s");
    }
  }
  return;
}



/* Entry: 104ad0810; end: 104ad0b73;  */

void FUN_104ad0810(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined *puVar6;
  long lVar7;
  long *extraout_x8;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  char *pcStack_5a0;
  ulong uStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined1 *puStack_530;
  code *pcStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_510;
  undefined1 auStack_508 [4];
  ushort uStack_504;
  long lStack_4a8;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_2;
  func_0x0001004b8028(param_1);
  puVar11 = param_1;
  if (param_2 != (undefined8 *)0x0) {
    puVar4 = param_2;
    _opendir();
    puVar16 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
      puVar15 = (undefined8 *)0x0;
      lVar13 = 0;
      puVar11 = (undefined8 *)0x0;
      puStack_510 = param_1;
      while( true ) {
        puVar17 = puVar4;
        _readdir();
        if (puVar17 == (undefined8 *)0x0) break;
        FUN_104ad07a4(param_2,(long)puVar17 + 0x15,&uStack_478);
        puVar17 = &uStack_478;
        _stat(puVar17,auStack_508);
        lVar1 = lStack_4a8;
        if ((int)puVar17 == -1) {
          puStack_520 = &uStack_478;
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/load_system_roots_supported.cc"
                              ,0x7c,2,"failed to get status for file: %s");
        }
        else if ((uStack_504 & 0xf000) == 0x8000) {
          lStack_78 = lStack_4a8;
          if (puVar15 < puVar16) {
            _memcpy(puVar15,&uStack_478,0x408);
            puVar12 = puVar11;
            puVar17 = puVar15;
          }
          else {
            lVar7 = (long)puVar15 - (long)puVar11 >> 3;
            uVar14 = lVar7 * -0x7f01fc07f01fc07f + 1;
            if (0x3f80fe03f80fe0 < uVar14) {
              FUN_104ad0cdc();
LAB_104ad0b34:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x104ad0b38);
              (*pcVar2)();
            }
            lVar8 = (long)puVar16 - (long)puVar11 >> 3;
            uVar10 = lVar8 * 0x1fc07f01fc07f02;
            if (uVar10 < uVar14 || uVar10 - uVar14 == 0) {
              uVar10 = uVar14;
            }
            if (0x1fc07f01fc07ef < (ulong)(lVar8 * -0x7f01fc07f01fc07f)) {
              uVar10 = 0x3f80fe03f80fe0;
            }
            if (uVar10 == 0) {
              lVar8 = 0;
            }
            else {
              if (0x3f80fe03f80fe0 < uVar10) {
                FUN_104a7757c();
                goto LAB_104ad0b34;
              }
              lVar8 = uVar10 * 0x408;
              __Znwm();
            }
            puVar17 = (undefined8 *)(lVar8 + lVar7 * 8);
            _memcpy(puVar17,&uStack_478,0x408);
            puVar12 = puVar17;
            while (puVar15 != puVar11) {
              puVar15 = puVar15 + -0x81;
              puVar12 = puVar12 + -0x81;
              _memcpy(puVar12,puVar15,0x408);
            }
            puVar16 = (undefined8 *)(lVar8 + uVar10 * 0x408);
            if (puVar11 != (undefined8 *)0x0) {
              __ZdlPv(puVar11);
            }
          }
          puVar15 = puVar17 + 0x81;
          lVar13 = lVar1 + lVar13;
          puVar11 = puVar12;
        }
      }
      _closedir(puVar4);
      puVar16 = (undefined8 *)(lVar13 + 1);
      func_0x000100460860();
      if ((long)puVar15 - (long)puVar11 == 0) {
        param_3 = 0;
      }
      else {
        param_3 = 0;
        uVar14 = ((long)puVar15 - (long)puVar11) / 0x408;
        puVar4 = puVar11;
        if (uVar14 < 2) {
          uVar14 = 1;
        }
        do {
          puVar15 = puVar4;
          _open(puVar4,0);
          iVar3 = (int)puVar15;
          if (iVar3 != -1) {
            _read();
            if (iVar3 == -1) {
              puStack_520 = puVar4;
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/load_system_roots_supported.cc"
                                  ,0x91,2,"failed to read file: %s");
            }
            else {
              param_3 = param_3 + iVar3;
            }
          }
          uVar14 = uVar14 - 1;
          puVar4 = puVar4 + 0x81;
        } while (uVar14 != 0);
      }
      FUN_104ad7748(&uStack_478,puVar16,param_3,&SUB_100460314);
      puStack_510[1] = uStack_470;
      *puStack_510 = uStack_478;
      puStack_510[3] = uStack_460;
      puStack_510[2] = uStack_468;
      if (puVar11 != (undefined8 *)0x0) {
        puVar16 = puVar11;
        __ZdlPv();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (puVar11 != (undefined8 *)0x0) {
    __ZdlPv(puVar11);
  }
  __Unwind_Resume(puVar16);
  pcStack_528 = FUN_104ad0b74;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_540 = puVar16;
  puStack_538 = puVar11;
  puStack_530 = &stack0xfffffffffffffff0;
  func_0x0001004b8028(extraout_x8);
  func_0x00010045ffc4(&pcStack_5a0,&PTR_DAT_1130a63d8);
  if (*pcStack_5a0 != '\0') {
    FUN_104ad0810(&lStack_568);
    extraout_x8[1] = lStack_560;
    *extraout_x8 = lStack_568;
    extraout_x8[3] = lStack_550;
    extraout_x8[2] = lStack_558;
  }
  lVar13 = *extraout_x8;
  uVar9 = extraout_x8[1];
  uVar10 = uVar9 & 0xff;
  uVar14 = uVar10;
  if (lVar13 != 0) {
    uVar14 = uVar9;
  }
  if (uVar14 == 0) {
    func_0x0001004b8028(&lStack_568);
    param_3 = 1;
    FUN_104abe3d4(&uStack_598,"/etc/ssl/cert.pem",1,&lStack_568);
    if (uStack_598 == 0) {
      lStack_588 = lStack_560;
      lStack_590 = lStack_568;
      lStack_578 = lStack_550;
      lStack_580 = lStack_558;
    }
    else {
      if ((uStack_598 & 1) != 0) {
        func_0x00010084dad0();
      }
      func_0x0001004b8028(&lStack_590);
    }
    extraout_x8[1] = lStack_588;
    *extraout_x8 = lStack_590;
    extraout_x8[3] = lStack_578;
    extraout_x8[2] = lStack_580;
    lVar13 = *extraout_x8;
    uVar9 = extraout_x8[1];
    uVar10 = uVar9 & 0xff;
  }
  if (lVar13 != 0) {
    uVar10 = uVar9;
  }
  if (uVar10 == 0) {
    FUN_104ad0810(&lStack_568,"");
    extraout_x8[1] = lStack_560;
    *extraout_x8 = lStack_568;
    extraout_x8[3] = lStack_550;
    extraout_x8[2] = lStack_558;
  }
  pcVar5 = pcStack_5a0;
  pcStack_5a0 = (char *)0x0;
  if (pcVar5 != (char *)0x0) {
    func_0x000100460314();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_548) {
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      FUN_104bd46a0();
      param_3 = 0;
      func_0x000100474c88(&pcStack_5a0);
    }
    __Unwind_Resume(pcVar5);
    puVar6 = &DAT_10f62a4d8;
    FUN_104a6fa70();
    lVar13 = *(long *)(puVar6 + 0x20);
    if (lVar13 == 0) {
      func_0x00010bdad124();
    }
    else if (*(long *)(param_3 + 0x20) != 0) {
      FUN_104a965a0();
      return;
    }
    func_0x00010bdad158();
                    /* WARNING: Could not recover jumptable at 0x000104ad0d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar13 + 0x20) + 0x28))();
    return;
  }
  return;
}



/* Entry: 104ad0b74; end: 104ad0cdb;  */

void FUN_104ad0b74(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001004b8028(param_1);
  func_0x00010045ffc4(&pcStack_80,&PTR_DAT_1130a63d8);
  if (*pcStack_80 != '\0') {
    FUN_104ad0810(&lStack_48);
    param_1[1] = lStack_40;
    *param_1 = lStack_48;
    param_1[3] = lStack_30;
    param_1[2] = lStack_38;
  }
  lVar4 = *param_1;
  uVar5 = param_1[1];
  uVar6 = uVar5 & 0xff;
  uVar1 = uVar6;
  if (lVar4 != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0) {
    func_0x0001004b8028(&lStack_48);
    param_3 = 1;
    FUN_104abe3d4(&uStack_78,"/etc/ssl/cert.pem",1,&lStack_48);
    if (uStack_78 == 0) {
      lStack_68 = lStack_40;
      lStack_70 = lStack_48;
      lStack_58 = lStack_30;
      lStack_60 = lStack_38;
    }
    else {
      if ((uStack_78 & 1) != 0) {
        func_0x00010084dad0();
      }
      func_0x0001004b8028(&lStack_70);
    }
    param_1[1] = lStack_68;
    *param_1 = lStack_70;
    param_1[3] = lStack_58;
    param_1[2] = lStack_60;
    lVar4 = *param_1;
    uVar5 = param_1[1];
    uVar6 = uVar5 & 0xff;
  }
  if (lVar4 != 0) {
    uVar6 = uVar5;
  }
  if (uVar6 == 0) {
    FUN_104ad0810(&lStack_48,"");
    param_1[1] = lStack_40;
    *param_1 = lStack_48;
    param_1[3] = lStack_30;
    param_1[2] = lStack_38;
  }
  pcVar2 = pcStack_80;
  pcStack_80 = (char *)0x0;
  if (pcVar2 != (char *)0x0) {
    func_0x000100460314();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      FUN_104bd46a0();
      param_3 = 0;
      func_0x000100474c88(&pcStack_80);
    }
    __Unwind_Resume(pcVar2);
    puVar3 = &DAT_10f62a4d8;
    FUN_104a6fa70();
    lVar4 = *(long *)(puVar3 + 0x20);
    if (lVar4 == 0) {
      func_0x00010bdad124();
    }
    else if (*(long *)(param_3 + 0x20) != 0) {
      FUN_104a965a0();
      return;
    }
    func_0x00010bdad158();
                    /* WARNING: Could not recover jumptable at 0x000104ad0d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar4 + 0x20) + 0x28))();
    return;
  }
  return;
}



/* Entry: 104ad0cdc; end: 104ad0cef;  */

void FUN_104ad0cdc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_104a6fa70();
  lVar2 = *(long *)(puVar1 + 0x20);
  if (lVar2 == 0) {
    func_0x00010bdad124();
  }
  else if (*(long *)(param_2 + 0x20) != 0) {
    FUN_104a965a0();
    return;
  }
  func_0x00010bdad158();
                    /* WARNING: Could not recover jumptable at 0x000104ad0d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 0x20) + 0x28))();
  return;
}



/* Entry: 104ad0cf0; end: 104ad0d47;  */

void FUN_104ad0cf0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    func_0x00010bdad124();
  }
  else if (*(long *)(param_2 + 0x20) != 0) {
    FUN_104a965a0();
    return;
  }
  func_0x00010bdad158();
                    /* WARNING: Could not recover jumptable at 0x000104ad0d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x20) + 0x28))();
  return;
}



/* Entry: 104ad0d48; end: 104ad0d6b;  */

void FUN_104ad0d48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ad0d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x28))();
  return;
}



/* Entry: 104ad0d6c; end: 104ad0e37;  */

undefined8 * FUN_104ad0d6c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_104ae173c(param_1[7]);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  *param_1 = &PTR_DAT_1107c6580;
  lVar4 = param_1[6];
  param_1[6] = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  plVar5 = (long *)param_1[5];
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
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = (long *)param_1[4];
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
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return param_1;
}



/* Entry: 104ad0e38; end: 104ad0e4b;  */

void FUN_104ad0e38(void)

{
  FUN_104ad0d6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ad0e4c; end: 104ad0e4f;  */

void FUN_104ad0e4c(void)

{
  return;
}



/* Entry: 104ad0e50; end: 104ad0f37;  */

void FUN_104ad0e50(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar5 = param_1;
  FUN_104ad0cf0();
  if ((int)lVar5 == 0) {
    if ((char)*(byte *)(param_1 + 0x57) < '\0') {
      lVar5 = *(long *)(param_1 + 0x40);
      uVar6 = *(ulong *)(param_1 + 0x48);
    }
    else {
      lVar5 = param_1 + 0x40;
      uVar6 = (ulong)*(byte *)(param_1 + 0x57);
    }
    plVar1 = (long *)*(long *)(param_2 + 0x40);
    uVar4 = *(ulong *)(param_2 + 0x48);
    if (-1 < (char)*(byte *)(param_2 + 0x57)) {
      plVar1 = (long *)(param_2 + 0x40);
      uVar4 = (ulong)*(byte *)(param_2 + 0x57);
    }
    uVar2 = uVar4;
    if (uVar4 >= uVar6) {
      uVar2 = uVar6;
    }
    _memcmp(lVar5,plVar1,uVar2);
    uVar7 = (uint)(uVar4 < uVar6);
    if (uVar6 < uVar4) {
      uVar7 = 0xffffffff;
    }
    if ((uint)lVar5 != 0) {
      uVar7 = (uint)lVar5;
    }
    if (uVar7 == 0) {
      if ((char)*(byte *)(param_1 + 0x6f) < '\0') {
        lVar5 = *(long *)(param_1 + 0x58);
        uVar6 = *(ulong *)(param_1 + 0x60);
      }
      else {
        lVar5 = param_1 + 0x58;
        uVar6 = (ulong)*(byte *)(param_1 + 0x6f);
      }
      puVar3 = *(undefined8 **)(param_2 + 0x58);
      uVar4 = *(ulong *)(param_2 + 0x60);
      if (-1 < (char)*(byte *)(param_2 + 0x6f)) {
        puVar3 = (undefined8 *)(param_2 + 0x58);
        uVar4 = (ulong)*(byte *)(param_2 + 0x6f);
      }
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      _memcmp(lVar5,puVar3,uVar4);
    }
  }
  return;
}



/* Entry: 104ad0f38; end: 104ad0f43;  */

void FUN_104ad0f38(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ad0f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 104ad0f44; end: 104ad0f97;  */

/* WARNING: Possible PIC construction at 0x000104ad0f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ad0f70) */

void FUN_104ad0f44(long *param_1,long param_2)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  if (param_2 != 0) {
    param_1 = (long *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 104ad0f98; end: 104ad1013;  */

undefined8 FUN_104ad0f98(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010045fe6c(0x1130a63f8,FUN_104ad12e4);
  uVar1 = uRam0000000113815c48 & 0xff;
  if (lRam0000000113815c40 != 0) {
    uVar1 = uRam0000000113815c48;
  }
  uVar2 = 0x113815c49;
  if (lRam0000000113815c40 != 0) {
    uVar2 = uRam0000000113815c50;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar2;
  }
  return uVar3;
}



/* Entry: 104ad1014; end: 104ad12e3;  */

/* WARNING: Possible PIC construction at 0x000104ad1050: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ad1054) */
/* WARNING: Removing unreachable block (ram,0x000104ad1060) */
/* WARNING: Removing unreachable block (ram,0x000104ad1078) */
/* WARNING: Removing unreachable block (ram,0x000104ad1080) */
/* WARNING: Removing unreachable block (ram,0x000104ad1084) */
/* WARNING: Removing unreachable block (ram,0x000104ad108c) */
/* WARNING: Removing unreachable block (ram,0x000104ad1094) */
/* WARNING: Removing unreachable block (ram,0x000104ad10b8) */
/* WARNING: Removing unreachable block (ram,0x000104ad10bc) */
/* WARNING: Removing unreachable block (ram,0x000104ad10c4) */
/* WARNING: Removing unreachable block (ram,0x000104ad10c8) */
/* WARNING: Removing unreachable block (ram,0x000104ad10d4) */
/* WARNING: Removing unreachable block (ram,0x000104ad10e4) */
/* WARNING: Removing unreachable block (ram,0x000104ad10e8) */
/* WARNING: Removing unreachable block (ram,0x000104ad10f4) */
/* WARNING: Removing unreachable block (ram,0x000104ad1108) */
/* WARNING: Removing unreachable block (ram,0x000104ad1234) */
/* WARNING: Removing unreachable block (ram,0x000104ad1110) */
/* WARNING: Removing unreachable block (ram,0x000104ad1134) */
/* WARNING: Removing unreachable block (ram,0x000104ad10ec) */
/* WARNING: Removing unreachable block (ram,0x000104ad1144) */
/* WARNING: Removing unreachable block (ram,0x000104ad1148) */
/* WARNING: Removing unreachable block (ram,0x000104ad1150) */
/* WARNING: Removing unreachable block (ram,0x000104ad1158) */
/* WARNING: Removing unreachable block (ram,0x000104ad1174) */
/* WARNING: Removing unreachable block (ram,0x000104ad1178) */
/* WARNING: Removing unreachable block (ram,0x000104ad1180) */
/* WARNING: Removing unreachable block (ram,0x000104ad1188) */
/* WARNING: Removing unreachable block (ram,0x000104ad11a8) */
/* WARNING: Removing unreachable block (ram,0x000104ad11b0) */
/* WARNING: Removing unreachable block (ram,0x000104ad11b4) */
/* WARNING: Removing unreachable block (ram,0x000104ad11bc) */
/* WARNING: Removing unreachable block (ram,0x000104ad11c4) */
/* WARNING: Removing unreachable block (ram,0x000104ad11e8) */
/* WARNING: Removing unreachable block (ram,0x000104ad11ec) */
/* WARNING: Removing unreachable block (ram,0x000104ad11f4) */
/* WARNING: Removing unreachable block (ram,0x000104ad11f8) */
/* WARNING: Removing unreachable block (ram,0x000104ad1204) */
/* WARNING: Removing unreachable block (ram,0x000104ad1208) */
/* WARNING: Removing unreachable block (ram,0x000104ad1264) */
/* WARNING: Removing unreachable block (ram,0x000104ad12b0) */
/* WARNING: Removing unreachable block (ram,0x000104ad12b8) */
/* WARNING: Removing unreachable block (ram,0x000104ad12cc) */
/* WARNING: Removing unreachable block (ram,0x000104ad12dc) */
/* WARNING: Removing unreachable block (ram,0x000104ad1328) */
/* WARNING: Removing unreachable block (ram,0x000104ad1330) */
/* WARNING: Removing unreachable block (ram,0x000104ad1340) */
/* WARNING: Removing unreachable block (ram,0x000104ad1350) */
/* WARNING: Removing unreachable block (ram,0x000104ad1374) */
/* WARNING: Removing unreachable block (ram,0x000104ad1368) */
/* WARNING: Removing unreachable block (ram,0x000104ad1220) */

void FUN_104ad1014(undefined8 param_1)

{
  undefined **ppuVar1;
  
  func_0x0001004b8028(param_1);
  func_0x000104ad1384();
  ppuVar1 = &PTR_DAT_1130a6458;
  func_0x00010045ff80();
  func_0x00010046018c();
  if (ppuVar1 == (undefined **)0x0) {
    func_0x0001004601ac();
  }
  return;
}



/* Entry: 104ad12e4; end: 104ad1377;  */

void FUN_104ad12e4(void)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  long lStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104ad1014(&lStack_38);
  uRam0000000113815c48 = uStack_30;
  lRam0000000113815c40 = lStack_38;
  uRam0000000113815c58 = uStack_20;
  uRam0000000113815c50 = uStack_28;
  uVar1 = uStack_30 & 0xff;
  if (lStack_38 != 0) {
    uVar1 = uStack_30;
  }
  if (uVar1 != 0) {
    uVar3 = 0x113815c49;
    if (lStack_38 != 0) {
      uVar3 = uStack_28;
    }
    FUN_104ae1640();
    uRam0000000113815c38 = uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  ppuVar2 = &PTR_DAT_1130a6458;
  func_0x00010045ff80();
  func_0x00010046018c();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = (undefined **)PTR_s__1130a6460;
    func_0x0001004601ac();
  }
  *extraout_x8 = ppuVar2;
  return;
}



/* Entry: 104ad1378; end: 104ad138f;  */

void FUN_104ad1378(undefined8 *param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_DAT_1130a6458;
  func_0x00010045ff80();
  func_0x00010046018c();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = (undefined **)PTR_s__1130a6460;
    func_0x0001004601ac();
  }
  *param_1 = ppuVar1;
  return;
}



/* Entry: 104ad1390; end: 104ad13eb;  */

char * FUN_104ad1390(char *param_1)

{
  code *pcVar1;
  
  if (*param_1 == '\x01') {
    func_0x0001008dcf5c(param_1 + 8);
  }
  else {
    if (*param_1 != '\0') {
      _abort();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104ad13e4);
      (*pcVar1)();
    }
    (**(code **)(**(long **)(param_1 + 8) + 8))();
  }
  return param_1;
}



/* Entry: 104ad13ec; end: 104ad149b;  */

long FUN_104ad13ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  func_0x0001007402ac(param_1 + 0x10);
  plVar4 = *(long **)(param_1 + 8);
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



/* Entry: 104ad149c; end: 104ad149f;  */

void FUN_104ad149c(void)

{
  return;
}



/* Entry: 104ad14a0; end: 104ad14fb;  */

void FUN_104ad14a0(long param_1)

{
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_30 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0x36;
  uStack_28 = 1;
  FUN_104ad1500(&uStack_30);
  func_0x00010047a9b8(&uStack_30);
  return;
}



/* Entry: 104ad14fc; end: 104ad14ff;  */

long FUN_104ad14fc(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104ad1500; end: 104ad153b;  */

long * FUN_104ad1500(long *param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      FUN_104a71e10();
      *param_1 = *param_2;
      *param_2 = 0x36;
      if (*param_1 == 0) {
        func_0x00010ae77b40(param_1);
      }
      return param_1;
    }
    FUN_104ad153c();
  }
  *(int *)(param_1 + 3) = iVar1;
  return param_1;
}



/* Entry: 104ad153c; end: 104ad1593;  */

long * FUN_104ad153c(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    func_0x00010ae77b40(param_1);
  }
  return param_1;
}



/* Entry: 104ad1594; end: 104ad15c3;  */

long FUN_104ad1594(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104ad15c4; end: 104ad17fb;  */

void FUN_104ad15c4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
  long lVar5;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  int iStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  pcVar4 = (char *)(param_2 + 8);
  if (*pcVar4 == '\x01') {
    FUN_104ad186c(&lStack_e8,pcVar4);
LAB_104ad173c:
    lVar1 = lStack_e0;
    lVar5 = lStack_e8;
    if (iStack_d0 == 0) {
LAB_104ad1770:
      *(int *)(param_1 + 3) = iStack_d0;
      func_0x0001008dd99c(&lStack_e8);
      return;
    }
    if (iStack_d0 == 1) {
      if (lStack_e8 == 0) {
        lStack_e0 = 0;
        param_1[2] = lStack_d8;
        param_1[1] = lVar1;
      }
      else {
        lStack_e8 = 0x36;
      }
      *param_1 = lVar5;
      goto LAB_104ad1770;
    }
  }
  else {
    if (*pcVar4 == '\0') {
      (**(code **)**(undefined8 **)(param_2 + 0x10))(&lStack_58);
      FUN_104acf4bc(&lStack_b8,&lStack_58);
      FUN_104acf650(&lStack_58);
      uVar2 = uStack_b0;
      if (iStack_a8 == 1) {
        if (lStack_b8 == 0) {
          uStack_b0 = 0;
          lStack_c8 = 0;
          uStack_c0 = uVar2;
          (**(code **)(**(long **)(param_2 + 0x10) + 8))();
          uVar2 = uStack_c0;
          if (lStack_c8 != 0) {
            func_0x00010ae77c74(&lStack_c8);
            goto LAB_104ad17b0;
          }
          uStack_c0 = 0;
          *(undefined8 *)(param_2 + 0x18) = 0;
          lVar5 = *(long *)(param_2 + 0x20);
          uStack_68 = 0;
          uStack_70 = 0;
          lStack_50 = 0;
          lStack_58 = 0;
          uStack_88 = 0;
          lStack_78 = lVar5;
          lStack_60 = lVar5;
          lStack_48 = lVar5;
          func_0x0001008dcf5c(&lStack_58);
          func_0x0001008dcf5c(&uStack_70);
          uStack_80 = 0;
          uStack_a0 = 0;
          lStack_90 = lVar5;
          func_0x0001008dcf5c(&uStack_88);
          uStack_98 = 0;
          *(undefined8 *)(param_2 + 0x18) = uVar2;
          *(long *)(param_2 + 0x20) = lVar5;
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(undefined1 *)(param_2 + 8) = 1;
          FUN_104ad186c(&lStack_e8,pcVar4);
        }
        else {
          lStack_c8 = lStack_b8;
          lStack_b8 = 0x36;
          FUN_104ad1804();
          lVar5 = lStack_50;
          lStack_e8 = lStack_58;
          if (lStack_58 == 0) {
            lStack_50 = 0;
            lStack_d8 = lStack_48;
            lStack_e0 = lVar5;
          }
          else {
            lStack_58 = 0x36;
          }
          iStack_d0 = 1;
        }
        func_0x0001008dcf5c();
        FUN_104acf620(&lStack_c8);
      }
      else {
        if (iStack_a8 != 0) {
          FUN_104a71e10();
          goto LAB_104ad17b0;
        }
        iStack_d0 = 0;
      }
      FUN_104acf650(&lStack_b8);
      goto LAB_104ad173c;
    }
    _abort();
  }
  FUN_104a71e10();
LAB_104ad17b0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104ad17b4);
  (*pcVar3)();
}



/* Entry: 104ad17fc; end: 104ad1803;  */

char * FUN_104ad17fc(long param_1)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\x01') {
    func_0x0001008dcf5c(param_1 + 0x10);
  }
  else {
    if (cVar1 != '\0') {
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104ad13e4);
      (*pcVar2)();
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  }
  return (char *)(param_1 + 8);
}



/* Entry: 104ad1804; end: 104ad186b;  */

ulong * FUN_104ad1804(ulong *param_1,ulong *param_2)

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



/* Entry: 104ad186c; end: 104ad1917;  */

void FUN_104ad186c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  int iStack_28;
  
  FUN_104ad1918(&lStack_40,param_2 + 8);
  lVar2 = lStack_38;
  lVar1 = lStack_40;
  if (iStack_28 == 0) {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    if (iStack_28 != 1) {
      FUN_104a71e10();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104ad1904);
      (*pcVar3)();
    }
    if (lStack_40 == 0) {
      uStack_58 = 0;
      lStack_38 = 0;
      uStack_50 = 0;
      lStack_48 = lStack_30;
      param_1[1] = lVar2;
      param_1[2] = lStack_30;
    }
    else {
      uStack_58 = 0x36;
      lStack_40 = 0x36;
    }
    *param_1 = lVar1;
    *(undefined4 *)(param_1 + 3) = 1;
    func_0x0001008dcf5c(&uStack_58);
  }
  func_0x0001008dd99c(&lStack_40);
  return;
}



/* Entry: 104ad1918; end: 104ad1973;  */

void FUN_104ad1918(undefined8 param_1,long *param_2)

{
  long lStack_30;
  long lStack_28;
  long lStack_20;
  undefined4 uStack_18;
  
  lStack_30 = *param_2;
  if (lStack_30 == 0) {
    lStack_20 = param_2[2];
    lStack_28 = param_2[1];
    param_2[1] = 0;
  }
  else {
    *param_2 = 0x36;
  }
  uStack_18 = 1;
  func_0x0001008dda80(param_1,&lStack_30);
  func_0x0001008dd99c(&lStack_30);
  return;
}



/* Entry: 104ad1974; end: 104ad1977;  */

void FUN_104ad1974(void)

{
  return;
}



/* Entry: 104ad1978; end: 104ad19df;  */

void FUN_104ad1978(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  (**(code **)(**(long **)(param_1 + 8) + 8))();
  plVar2 = (long *)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000104ad19cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}



/* Entry: 104ad19e0; end: 104ad19e7;  */

char * FUN_104ad19e0(long param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 8);
  func_0x0001008dd448((long)*pcVar1,pcVar1,pcVar1,pcVar1);
  return pcVar1;
}



/* Entry: 104ad19e8; end: 104ad1a3f;  */

long * FUN_104ad19e8(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    func_0x00010ae77b40(param_1);
  }
  return param_1;
}



/* Entry: 104ad1a40; end: 104ad1b3f;  */

long * FUN_104ad1a40(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  code *pcVar1;
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
LAB_104ad1ac8:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_104ad1ac8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar3;
  }
  ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plStack_50 = alStack_68;
  }
  else {
    if (plStack_50 == (long *)0x0) goto SUB_100837090;
    lVar2 = 5;
  }
  (**(code **)(*plStack_50 + lVar2 * 8))();
SUB_100837090:
  __Unwind_Resume();
  *plVar3 = (long)&PTR_FUN_1107c4cb8;
  plVar3[1] = (long)&PTR_FUN_1107c4d10;
  if (plVar3[0x16] == 0) {
    if ((plVar3[0x14] & 1U) != 0) {
      func_0x00010084dad0();
    }
    func_0x0001006153ac(plVar3 + 0xc);
    (**(code **)(*(long *)plVar3[0xb] + 8))();
    *plVar3 = (long)&PTR_FUN_1107c4c40;
    plVar3[1] = (long)&PTR_FUN_1107c4c98;
    return plVar3;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,0x1e5,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100837134);
  (*pcVar1)();
}



/* Entry: 104ad1b40; end: 104ad1b43;  */

undefined8 * FUN_104ad1b40(undefined8 *param_1)

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



/* Entry: 104ad1b44; end: 104ad1b57;  */

void FUN_104ad1b44(void)

{
  func_0x000100837090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ad1b58; end: 104ad1ba7;  */

void FUN_104ad1b58(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  puVar1 = (undefined8 *)plVar2[7];
  plVar2[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  (**(code **)(*plVar2 + 8))();
  if (param_3 == 0) {
    return;
  }
  func_0x00010bdad274();
                    /* WARNING: Could not recover jumptable at 0x000104ad1bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)plVar2[1] + 0x20))();
  return;
}



/* Entry: 104ad1ba8; end: 104ad1bb7;  */

void FUN_104ad1ba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ad1bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}



/* Entry: 104ad1bb8; end: 104ad1bff;  */

void FUN_104ad1bb8(long param_1,undefined8 param_2)

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



/* Entry: 104ad1c00; end: 104ad1c0f;  */

undefined1  [16]
FUN_104ad1c00(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 104ad1c10; end: 104ad1c7f;  */

void FUN_104ad1c10(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
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
  FUN_104aba5c4(uVar3,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104ad1c80; end: 104ad1cbf;  */

void FUN_104ad1c80(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long **)(param_1 + 0x4d0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x4d0) + 0x20))();
  }
  FUN_104a9be8c(param_1 + 0x4d0);
  iVar3 = (int)param_1 + 0x628;
  func_0x0001005a5e70();
  if ((param_1 != 0) && (iVar3 != 0)) {
    FUN_104aba638(*(undefined8 *)(param_1 + 8));
    func_0x000104ae1b8c(*(undefined8 *)(param_1 + 0x10));
    func_0x000104ae1c90(*(undefined8 *)(param_1 + 0x18));
    func_0x00010061ce28(param_1 + 0x118);
    func_0x00010061ce28(param_1 + 0x240);
    plVar4 = *(long **)(param_1 + 0x368);
    if ((long *)0x1 < plVar4) {
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
    plVar4 = *(long **)(param_1 + 0x388);
    if ((long *)0x1 < plVar4) {
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
    func_0x00010061ce28(param_1 + 0x3a8);
    func_0x00010061ce28(param_1 + 0x500);
    func_0x0001005a5f48(param_1 + 0x20);
    func_0x000100741660(param_1 + 0x4e0);
    func_0x000100487bf4(param_1 + 0x4d0);
    func_0x0001005a5f48(param_1 + 0xa0);
    func_0x0001005a5f48(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 104ad1cc0; end: 104ad1ccf;  */

void FUN_104ad1cc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104aba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x48))();
  return;
}



/* Entry: 104ad1cd0; end: 104ad1f5b;  */

void FUN_104ad1cd0(long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  char cStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  ulong *puStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  char *pcStack_b0;
  ulong *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)(param_1 + 0x388);
  uStack_78 = *(undefined8 *)(param_1 + 0x390);
  lStack_80 = *plVar7;
  uStack_68 = *(undefined8 *)(param_1 + 0x3a0);
  uStack_70 = *(undefined8 *)(param_1 + 0x398);
  func_0x0001005a7ec4(param_1 + 0x3a8,&lStack_80);
  plVar12 = (long *)(param_1 + 0x4d0);
  puVar9 = (ulong *)0x2000;
  plVar13 = plVar12;
  func_0x00010074169c(&puStack_a0,plVar12,0x2000,0x2000);
  *(undefined8 *)(param_1 + 0x390) = uStack_98;
  *plVar7 = (long)puStack_a0;
  *(undefined8 *)(param_1 + 0x3a0) = uStack_88;
  *(undefined8 *)(param_1 + 0x398) = uStack_90;
  if (*plVar7 == 0) {
    lVar10 = param_1 + 0x391;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x398);
  }
  *param_2 = lVar10;
  if (*plVar7 == 0) {
    lVar10 = param_1 + 0x391;
    uVar11 = (ulong)*(byte *)(param_1 + 0x390);
  }
  else {
    lVar10 = *(long *)(param_1 + 0x398);
    uVar11 = *(ulong *)(param_1 + 0x390);
  }
  *param_3 = lVar10 + uVar11;
  puVar5 = (ulong *)(param_1 + 0x4f8);
  if ((*(byte *)puVar5 & 1) == 0) {
    func_0x0001004811f0(param_1 + 0x628);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar3) {
        *(byte *)puVar5 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar10 = *plVar12;
    plVar12 = (long *)(lVar10 + 0x40);
    func_0x000100460448(plVar12);
    if (*(char *)(lVar10 + 0x80) != '\0') {
      pcStack_b0 = "!shutdown_";
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.h"
                          ,0x13a,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104ad1ed8);
      (*pcVar4)();
    }
    lVar15 = *(long *)(lVar10 + 0x18);
    puVar5 = (ulong *)0x18;
    __Znwm();
    uVar1 = *(undefined8 *)(lVar15 + 0x30);
    param_2 = *(long **)(lVar15 + 0x38);
    if (param_2 != (long *)0x0) {
      plVar7 = param_2 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar9 = puVar5 + 1;
    *puVar9 = 1;
    *puVar5 = (ulong)&PTR_FUN_1107c5d60;
    puVar6 = (undefined8 *)0x20;
    __Znwm();
    *puVar6 = &PTR_FUN_1107c69c0;
    puVar6[1] = uVar1;
    puVar6[2] = param_2;
    puVar6[3] = param_1;
    puVar5[2] = (ulong)puVar6;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar3) {
        *puVar9 = *puVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_a0 = puVar5;
    func_0x0001004bc2ec(lVar15 + 0x30,&puStack_a0);
    if (puStack_a0 != (ulong *)0x0) {
      puVar9 = puStack_a0 + 1;
      do {
        uVar11 = *puVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar3) {
          *puVar9 = uVar11 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*puStack_a0 + 0x10))();
      }
    }
    puVar9 = puVar5;
    func_0x0001004bc3ac(lVar10 + 0x90);
    plVar13 = plVar12;
    func_0x000100466b80();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar9 == 0) {
    __Unwind_Resume(plVar13);
  }
  plVar7 = plVar13;
  FUN_104bd46a0();
  puVar8 = &uStack_130;
  pcStack_b8 = FUN_104ad1f5c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_e0 = param_2;
  puStack_d8 = puVar5;
  plStack_d0 = plVar13;
  plStack_c8 = plVar12;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((byte)puVar9[4] == 0) {
    FUN_104acb358(plVar7);
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    cStack_110 = '\0';
    if ((byte)puVar9[4] == 0) goto LAB_104ad20b4;
  }
  plVar14 = plVar7 + 3;
  uStack_128 = puVar9[1];
  uStack_130 = *puVar9;
  *puVar9 = 0;
  puVar9[1] = 0;
  uStack_120 = puVar9[2];
  uStack_118 = puVar9[3];
  puVar9[3] = 0;
  cStack_110 = '\x01';
  func_0x000100460448(*plVar14 + 0x60);
  plVar12 = *(long **)(*plVar14 + 0x368);
  func_0x0001004b8028(&uStack_108);
  lVar10 = *plVar14;
  *(undefined8 *)(lVar10 + 0x370) = uStack_100;
  *(undefined8 *)(lVar10 + 0x368) = uStack_108;
  *(undefined8 *)(lVar10 + 0x380) = uStack_f0;
  *(undefined8 *)(lVar10 + 0x378) = uStack_f8;
  func_0x000100466b80(*plVar14 + 0x60);
  func_0x000100460448(*plVar14 + 0xa0);
  plVar13 = *(long **)(*plVar14 + 0x388);
  func_0x0001004b8028(&uStack_108);
  lVar10 = *plVar14;
  *(undefined8 *)(lVar10 + 0x390) = uStack_100;
  *(undefined8 *)(lVar10 + 0x388) = uStack_108;
  *(undefined8 *)(lVar10 + 0x3a0) = uStack_f0;
  *(undefined8 *)(lVar10 + 0x398) = uStack_f8;
  func_0x000100466b80(*plVar14 + 0xa0);
  if ((long *)0x1 < plVar12) {
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plVar12[1])(plVar12);
    }
  }
  if ((long *)0x1 < plVar13) {
    do {
      lVar10 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plVar13[1])(plVar13);
    }
  }
  lVar10 = *plVar14;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass((undefined1 *)(lVar10 + 0x4f8),0x10);
    if (bVar3) {
      *(undefined1 *)(lVar10 + 0x4f8) = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_104ad20b4:
  plVar12 = (long *)plVar7[3];
  func_0x0001008d7c8c(plVar12);
  if (cStack_110 != '\0') {
    FUN_104acb218(&uStack_130);
    plVar12 = (long *)puVar8;
  }
  if (plVar7 != (long *)0x0) {
    *plVar7 = (long)&PTR____cxa_pure_virtual_1107c4208;
    func_0x000104a9b8f0(plVar7 + 1);
    __ZdlPv(plVar7);
    plVar12 = plVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    if (cStack_110 != '\0') {
      FUN_104acb218(&uStack_130);
    }
    __Unwind_Resume(plVar12);
    return;
  }
  return;
}



/* Entry: 104ad1f5c; end: 104ad2137;  */

void FUN_104ad1f5c(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  char cStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar4 = &uStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_2[4] == '\0') {
    FUN_104acb358(param_1);
    uStack_80 = uStack_80 & 0xffffffffffffff00;
    cStack_60 = '\0';
    if ((char)param_2[4] == '\0') goto LAB_104ad20b4;
  }
  plVar8 = param_1 + 3;
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_70 = param_2[2];
  uStack_68 = param_2[3];
  param_2[3] = 0;
  cStack_60 = '\x01';
  func_0x000100460448(*plVar8 + 0x60);
  plVar6 = *(long **)(*plVar8 + 0x368);
  func_0x0001004b8028(&uStack_58);
  lVar5 = *plVar8;
  *(undefined8 *)(lVar5 + 0x370) = uStack_50;
  *(undefined8 *)(lVar5 + 0x368) = uStack_58;
  *(undefined8 *)(lVar5 + 0x380) = uStack_40;
  *(undefined8 *)(lVar5 + 0x378) = uStack_48;
  func_0x000100466b80(*plVar8 + 0x60);
  func_0x000100460448(*plVar8 + 0xa0);
  plVar7 = *(long **)(*plVar8 + 0x388);
  func_0x0001004b8028(&uStack_58);
  lVar5 = *plVar8;
  *(undefined8 *)(lVar5 + 0x390) = uStack_50;
  *(undefined8 *)(lVar5 + 0x388) = uStack_58;
  *(undefined8 *)(lVar5 + 0x3a0) = uStack_40;
  *(undefined8 *)(lVar5 + 0x398) = uStack_48;
  func_0x000100466b80(*plVar8 + 0xa0);
  if ((long *)0x1 < plVar6) {
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)plVar6[1])(plVar6);
    }
  }
  if ((long *)0x1 < plVar7) {
    do {
      lVar5 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)plVar7[1])(plVar7);
    }
  }
  lVar5 = *plVar8;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass((undefined1 *)(lVar5 + 0x4f8),0x10);
    if (bVar2) {
      *(undefined1 *)(lVar5 + 0x4f8) = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_104ad20b4:
  puVar3 = (undefined8 *)param_1[3];
  func_0x0001008d7c8c(puVar3);
  if (cStack_60 != '\0') {
    FUN_104acb218(&uStack_80);
    puVar3 = puVar4;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &PTR____cxa_pure_virtual_1107c4208;
    func_0x000104a9b8f0(param_1 + 1);
    __ZdlPv(param_1);
    puVar3 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (cStack_60 != '\0') {
      FUN_104acb218(&uStack_80);
    }
    __Unwind_Resume(puVar3);
    return;
  }
  return;
}



/* Entry: 104ad2138; end: 104ad2143;  */

void FUN_104ad2138(void)

{
  return;
}



/* Entry: 104ad2144; end: 104ad22a7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104ad2144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_70;
  ulong auStack_68 [4];
  undefined1 uStack_41;
  ulong uStack_40;
  ulong *puStack_38;
  
  auStack_68[2] = 0;
  auStack_68[3] = 0;
  auStack_68[1] = 0;
  FUN_104ab5920(&uStack_40,2,"Failed to create security handshaker",0x24,&uStack_41,auStack_68 + 1);
  puStack_38 = auStack_68 + 1;
  func_0x000100482b64(&puStack_38);
  uVar3 = *param_4;
  auStack_68[0] = uStack_40;
  if ((uStack_40 & 1) != 0) {
    piVar4 = (int *)(uStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104aba5c4(uVar3,auStack_68);
  if ((auStack_68[0] & 1) != 0) {
    func_0x00010084dad0();
  }
  FUN_104aba638(*param_4);
  *param_4 = 0;
  func_0x00010048650c(param_4[1]);
  param_4[1] = 0;
  func_0x00010061ce28(param_4[2]);
  func_0x000100460314(param_4[2]);
  param_4[2] = 0;
  uStack_70 = uStack_40;
  if ((uStack_40 & 1) != 0) {
    piVar4 = (int *)(uStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x0001004bd7e8(&puStack_38,param_3,&uStack_70);
  if ((uStack_70 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_40 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104ad22a8; end: 104ad22b3;  */

char * FUN_104ad22a8(void)

{
  return "security_fail";
}



/* Entry: 104ad22b4; end: 104ad23f3;  */

void FUN_104ad22b4(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uStack_40;
  ulong uStack_38;
  
  func_0x000100460448(param_1 + 0x20);
  if (*(char *)(param_1 + 0x60) == '\0') {
    *(undefined1 *)(param_1 + 0x60) = 1;
    plVar4 = *(long **)(param_1 + 0x18);
    uStack_38 = *param_2;
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
    (**(code **)(*plVar4 + 0x18))(plVar4,param_1 + 0x200,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    FUN_104ae1ba0(*(undefined8 *)(param_1 + 0x10));
    uVar5 = **(undefined8 **)(param_1 + 0x78);
    uStack_40 = *param_2;
    if ((uStack_40 & 1) != 0) {
      piVar6 = (int *)(uStack_40 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104aba5c4(uVar5,&uStack_40);
    if ((uStack_40 & 1) != 0) {
      func_0x00010084dad0();
    }
    puVar7 = *(undefined8 **)(param_1 + 0x78);
    uVar5 = *puVar7;
    uVar1 = puVar7[1];
    *puVar7 = 0;
    uVar8 = puVar7[2];
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    *(undefined8 *)(param_1 + 0x70) = uVar8;
    puVar7[2] = 0;
    func_0x00010048650c(uVar1);
    *(undefined8 *)(*(long *)(param_1 + 0x78) + 8) = 0;
  }
  func_0x000100466b80(param_1 + 0x20);
  return;
}



/* Entry: 104ad23f4; end: 104ad23ff;  */

char * FUN_104ad23f4(void)

{
  return "security";
}



/* Entry: 104ad2400; end: 104ad2653;  */

void FUN_104ad2400(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 *apuStack_70 [2];
  char cStack_59;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  
  uStack_78 = *param_2;
  if (uStack_78 != 0) goto LAB_104ad2490;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  FUN_104ab5920(&uStack_38,2,"Handshaker shutdown",0x13,&uStack_39,&uStack_58);
  uVar3 = *param_2;
  if (uStack_38 == uVar3) {
LAB_104ad2474:
    if ((uVar3 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_2 = uStack_38;
    uStack_38 = 0x36;
    if ((uVar3 & 1) != 0) {
      func_0x00010084dad0();
      uVar3 = uStack_38;
      goto LAB_104ad2474;
    }
  }
  apuStack_70[0] = &uStack_58;
  func_0x000100482b64(apuStack_70);
  uStack_78 = *param_2;
LAB_104ad2490:
  if ((uStack_78 & 1) != 0) {
    piVar5 = (int *)(uStack_78 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104aba950(apuStack_70,&uStack_78);
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/security_handshaker.cc"
                      ,0xce,0,"Security handshake failed: %s");
  if (cStack_59 < '\0') {
    __ZdlPv(apuStack_70[0]);
  }
  if ((uStack_78 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    FUN_104ae1ba0(*(undefined8 *)(param_1 + 0x10));
    uVar4 = **(undefined8 **)(param_1 + 0x78);
    uStack_80 = *param_2;
    if ((uStack_80 & 1) != 0) {
      piVar5 = (int *)(uStack_80 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_104aba5c4(uVar4,&uStack_80);
    if ((uStack_80 & 1) != 0) {
      func_0x00010084dad0();
    }
    puVar6 = *(undefined8 **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x68) = *puVar6;
    *puVar6 = 0;
    *(undefined8 *)(param_1 + 0x70) = puVar6[2];
    puVar6[2] = 0;
    func_0x00010048650c(puVar6[1]);
    *(undefined8 *)(*(long *)(param_1 + 0x78) + 8) = 0;
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uStack_88 = *param_2;
  if ((uStack_88 & 1) != 0) {
    piVar5 = (int *)(uStack_88 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x0001004bd7e8(apuStack_70,uVar4,&uStack_88);
  if ((uStack_88 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104ad2654; end: 104ad2787;  */

undefined8 * FUN_104ad2654(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c6ac0;
  func_0x000104ad26d4(param_1 + 0xe);
  func_0x000100741bb0(param_1 + 3);
  return param_1;
}



/* Entry: 104ad2788; end: 104ad28ef;  */

void FUN_104ad2788(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  ulong uStack_50;
  ulong uStack_48;
  
  plVar1 = param_2 + 4;
  func_0x000100460448(plVar1);
  func_0x0001005a6d08(&uStack_48,param_2,param_1,param_3,param_4,param_5);
  if (uStack_48 == 0) {
    param_2 = (long *)0x0;
  }
  else {
    uStack_50 = uStack_48;
    if ((uStack_48 & 1) != 0) {
      piVar4 = (int *)(uStack_48 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar3) {
          *piVar4 = *piVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104ad2400(param_2,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  if ((uStack_48 & 1) != 0) {
    func_0x00010084dad0();
  }
  func_0x000100466b80(plVar1);
  if (param_2 != (long *)0x0) {
    plVar1 = param_2 + 1;
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
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  return;
}



/* Entry: 104ad28f0; end: 104ad28f7;  */

void FUN_104ad28f0(void)

{
  return;
}



/* Entry: 104ad28f8; end: 104ad2953;  */

void FUN_104ad28f8(undefined8 param_1,long *param_2)

{
  func_0x0001004ca024();
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104ad2940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))();
    return;
  }
  return;
}



/* Entry: 104ad2954; end: 104ad29a3;  */

void FUN_104ad2954(void)

{
  return;
}



/* Entry: 104ad29a4; end: 104ad2aaf;  */

void FUN_104ad29a4(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plStack_48;
  
  puVar6 = *(undefined8 **)(param_2 + 0x10);
  uVar5 = *param_3;
  *puVar6 = param_3[7];
  puVar6[1] = uVar5;
  puVar6[0xe] = 0;
  *(undefined1 *)(puVar6 + 0xf) = 0;
  puVar6[0x17] = 0;
  puVar6[5] = FUN_104ad2bec;
  puVar6[6] = param_2;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[10] = FUN_104ad4618;
  puVar6[0xb] = param_2;
  puVar6[0xc] = 0;
  lVar3 = param_3[6];
  FUN_104ace2c0();
  plStack_48 = (long *)**(undefined8 **)(param_2 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
    if (bVar2) {
      *plStack_48 = *plStack_48 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  func_0x0001007407ec(lVar3,&plStack_48);
  func_0x0001007402ac(&plStack_48);
  plVar4 = (long *)param_3[2];
  if (*plVar4 != 0) {
    (*(code *)plVar4[1])();
    plVar4 = (long *)param_3[2];
  }
  *plVar4 = lVar3;
  plVar4[1] = (long)FUN_104ace308;
  *param_1 = 0;
  return;
}



/* Entry: 104ad2ab0; end: 104ad2aeb;  */

void FUN_104ad2ab0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(ulong *)(lVar1 + 0x70) & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((*(ulong *)(lVar1 + 0x40) & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104ad2aec; end: 104ad2b73;  */

void FUN_104ad2aec(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  undefined1 uStack_51;
  long lStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if (*(int *)(param_3 + 0x14) == 0) {
    plVar4 = *(long **)(param_3 + 8);
    FUN_104ace3b4();
    lVar5 = 0;
    unaff_x20 = param_2;
    if (plVar4 != (long *)0x0) {
      lVar5 = *(long *)(param_3 + 8);
      FUN_104acfab8();
      puVar6 = *(undefined8 **)(param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar6 = plVar4;
      plVar4 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar6[1] = lVar5;
      *param_1 = 0;
      return;
    }
  }
  else {
    func_0x00010bdad3cc();
    lVar5 = param_2;
  }
  func_0x00010bdad398();
  pcStack_38 = FUN_104ad2b74;
  lVar5 = *(long *)(lVar5 + 8);
  lStack_50 = unaff_x20;
  puStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x000100748074(lVar5,&uStack_51,"server_auth_filter",0);
  plVar4 = *(long **)(lVar5 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 8))();
    }
  }
  func_0x0001007402ac(lVar5);
  return;
}



/* Entry: 104ad2b74; end: 104ad2beb;  */

void FUN_104ad2b74(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 uStack_21;
  
  lVar6 = *(long *)(param_1 + 8);
  func_0x000100748074(lVar6,&uStack_21,"server_auth_filter",0);
  plVar4 = *(long **)(lVar6 + 8);
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
  func_0x0001007402ac(lVar6);
  return;
}



/* Entry: 104ad2bec; end: 104ad4617;  */

void FUN_104ad2bec(long param_1,ulong *param_2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint *puVar17;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  char *pcStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = *(undefined8 **)(param_1 + 0x10);
  if (*param_2 == 0) {
    puVar16 = *(undefined8 **)(param_1 + 8);
    if ((puVar16[1] == 0) || (*(long *)(puVar16[1] + 0x10) == 0)) goto LAB_104ad2c2c;
    plVar8 = (long *)puVar15[1];
    lVar9 = puVar15[2];
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar15[0x14] = FUN_104ad47c0;
    puVar15[0x15] = param_1;
    puVar15[0x16] = 0;
    func_0x0001004be0b8(*puVar15,puVar15 + 0x13);
    plVar8 = (long *)puVar15[1];
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar17 = *(uint **)(*(long *)(lVar9 + 8) + 0x38);
    FUN_104adc524(&uStack_f0);
    uVar6 = *puVar17;
    puStack_d8 = &uStack_f0;
    if ((uVar6 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 5;
      pcStack_80 = ":path";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x74);
      if ((long *)0x1 < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x76);
      plStack_b0 = *(long **)(puVar17 + 0x74);
      lStack_98 = *(long *)(puVar17 + 0x7a);
      lStack_a0 = *(long *)(puVar17 + 0x78);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 1 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 10;
      pcStack_80 = ":authority";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x6c);
      if ((long *)0x1 < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x6e);
      plStack_b0 = *(long **)(puVar17 + 0x6c);
      lStack_98 = *(long *)(puVar17 + 0x72);
      lStack_a0 = *(long *)(puVar17 + 0x70);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 3 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 7;
      pcStack_80 = ":status";
      lStack_78 = 0;
      FUN_104a7a584(&plStack_b0,puVar17[0x69]);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 4 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 7;
      pcStack_80 = ":scheme";
      lStack_78 = 0;
      FUN_104adf034(&plStack_d0,puVar17[0x68]);
      lStack_a8 = lStack_c8;
      plStack_b0 = plStack_d0;
      lStack_98 = lStack_b8;
      lStack_a0 = lStack_c0;
      lStack_c8 = 0;
      plStack_d0 = (long *)0x0;
      lStack_b8 = 0;
      lStack_c0 = 0;
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 5 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 0xc;
      pcStack_80 = "content-type";
      lStack_78 = 0;
      func_0x000100619644(&plStack_d0,puVar17[0x67]);
      lStack_a8 = lStack_c8;
      plStack_b0 = plStack_d0;
      lStack_98 = lStack_b8;
      lStack_a0 = lStack_c0;
      lStack_c8 = 0;
      plStack_d0 = (long *)0x0;
      lStack_b8 = 0;
      lStack_c0 = 0;
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 6 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 2;
      pcStack_80 = "te";
      lStack_78 = 0;
      func_0x000100619828(&plStack_d0,(char)puVar17[0x66]);
      lStack_a8 = lStack_c8;
      plStack_b0 = plStack_d0;
      lStack_98 = lStack_b8;
      lStack_a0 = lStack_c0;
      lStack_c8 = 0;
      plStack_d0 = (long *)0x0;
      lStack_b8 = 0;
      lStack_c0 = 0;
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 7 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 0xd;
      pcStack_80 = "grpc-encoding";
      lStack_78 = 0;
      FUN_104a7ac74(&plStack_b0,puVar17[0x65]);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 8 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 0x1e;
      pcStack_80 = "grpc-internal-encoding-request";
      lStack_78 = 0;
      FUN_104a7ac74(&plStack_b0,puVar17[100]);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 9 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 0x14;
      pcStack_80 = "grpc-accept-encoding";
      lStack_78 = 0;
      plStack_d0 = (long *)CONCAT71(plStack_d0._1_7_,(char)puVar17[99]);
      func_0x00010061b500(&plStack_b0,&plStack_d0);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 10 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 0xb;
      pcStack_80 = "grpc-status";
      lStack_78 = 0;
      FUN_104a7a584(&plStack_b0,(long)(int)puVar17[0x62]);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0xb & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 0xc;
      pcStack_80 = "grpc-timeout";
      lStack_78 = 0;
      func_0x00010061b528(&plStack_b0,*(undefined8 *)(puVar17 + 0x60));
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0xc & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 0x1a;
      pcStack_80 = "grpc-previous-rpc-attempts";
      lStack_78 = 0;
      FUN_104a7a584(&plStack_b0,puVar17[0x5e]);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0xd & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 0x16;
      pcStack_80 = "grpc-retry-pushback-ms";
      lStack_78 = 0;
      FUN_104a7a584(&plStack_b0,*(undefined8 *)(puVar17 + 0x5c));
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0xe & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 10;
      pcStack_80 = "user-agent";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x54);
      if ((long *)0x1 < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x56);
      plStack_b0 = *(long **)(puVar17 + 0x54);
      lStack_98 = *(long *)(puVar17 + 0x5a);
      lStack_a0 = *(long *)(puVar17 + 0x58);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0xf & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 0xc;
      pcStack_80 = "grpc-message";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x4c);
      if ((long *)0x1 < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x4e);
      plStack_b0 = *(long **)(puVar17 + 0x4c);
      lStack_98 = *(long *)(puVar17 + 0x52);
      lStack_a0 = *(long *)(puVar17 + 0x50);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0x10 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 4;
      pcStack_80 = "host";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x44);
      if ((long *)0x1 < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x46);
      plStack_b0 = *(long **)(puVar17 + 0x44);
      lStack_98 = *(long *)(puVar17 + 0x4a);
      lStack_a0 = *(long *)(puVar17 + 0x48);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0x11 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 0x19;
      pcStack_80 = "endpoint-load-metrics-bin";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x3c);
      if ((long *)0x1 < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x3e);
      plStack_b0 = *(long **)(puVar17 + 0x3c);
      lStack_98 = *(long *)(puVar17 + 0x42);
      lStack_a0 = *(long *)(puVar17 + 0x40);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0x12 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 0x15;
      pcStack_80 = "grpc-server-stats-bin";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x34);
      if ((long *)0x1 < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x36);
      plStack_b0 = *(long **)(puVar17 + 0x34);
      lStack_98 = *(long *)(puVar17 + 0x3a);
      lStack_a0 = *(long *)(puVar17 + 0x38);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0x13 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 0xe;
      pcStack_80 = "grpc-trace-bin";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x2c);
      if ((long *)0x1 < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x2e);
      plStack_b0 = *(long **)(puVar17 + 0x2c);
      lStack_98 = *(long *)(puVar17 + 0x32);
      lStack_a0 = *(long *)(puVar17 + 0x30);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0x14 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 0xd;
      pcStack_80 = "grpc-tags-bin";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x24);
      if ((long *)0x1 < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x26);
      plStack_b0 = *(long **)(puVar17 + 0x24);
      lStack_98 = *(long *)(puVar17 + 0x2a);
      lStack_a0 = *(long *)(puVar17 + 0x28);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0x15 & 1) != 0) goto LAB_104ad3c18;
    if ((uVar6 >> 0x16 & 1) != 0) {
      uVar11 = *(ulong *)(puVar17 + 0x18);
      puVar14 = puVar17 + 0x1a;
      if ((uVar11 & 1) != 0) {
        puVar14 = *(uint **)(puVar17 + 0x1a);
      }
      if (1 < uVar11) {
        puVar1 = puVar14 + (uVar11 >> 1) * 8;
        do {
          plStack_90 = (long *)0x1;
          lStack_88 = 0xb;
          pcStack_80 = "lb-cost-bin";
          lStack_78 = 0;
          FUN_104adf18c(&plStack_b0,puVar14);
          FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
          if ((long *)0x1 < plStack_b0) {
            do {
              lVar9 = *plStack_b0;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
              if (bVar3) {
                *plStack_b0 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 + -1 == 0) {
              (*(code *)plStack_b0[1])();
            }
          }
          if ((long *)0x1 < plStack_90) {
            do {
              lVar9 = *plStack_90;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
              if (bVar3) {
                *plStack_90 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 + -1 == 0) {
              (*(code *)plStack_90[1])();
            }
          }
          puVar14 = puVar14 + 8;
        } while (puVar14 != puVar1);
        uVar6 = *puVar17;
      }
    }
    if ((uVar6 >> 0x17 & 1) != 0) {
      plStack_90 = (long *)0x1;
      lStack_88 = 8;
      pcStack_80 = "lb-token";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x10);
      if ((long *)0x1 < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x12);
      plStack_b0 = *(long **)(puVar17 + 0x10);
      lStack_98 = *(long *)(puVar17 + 0x16);
      lStack_a0 = *(long *)(puVar17 + 0x14);
      FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)0x1 < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)0x1 < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
    }
    plVar8 = *(long **)(puVar17 + 0x7e);
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      lVar9 = 0;
      do {
        plVar12 = (long *)plVar8[lVar9 * 8 + 2];
        if ((long *)0x1 < plVar12) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = *plVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lStack_88 = plVar8[lVar9 * 8 + 3];
        plStack_90 = (long *)plVar8[lVar9 * 8 + 2];
        lStack_78 = plVar8[lVar9 * 8 + 5];
        pcStack_80 = (char *)plVar8[lVar9 * 8 + 4];
        plVar12 = (long *)plVar8[lVar9 * 8 + 6];
        if ((long *)0x1 < plVar12) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = *plVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lStack_a8 = plVar8[lVar9 * 8 + 7];
        plStack_b0 = (long *)plVar8[lVar9 * 8 + 6];
        lStack_98 = plVar8[lVar9 * 8 + 9];
        lStack_a0 = plVar8[lVar9 * 8 + 8];
        FUN_104ad5608(&puStack_d8,&plStack_90,&plStack_b0);
        if ((long *)0x1 < plStack_b0) {
          do {
            lVar10 = *plStack_b0;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
            if (bVar3) {
              *plStack_b0 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 + -1 == 0) {
            (*(code *)plStack_b0[1])();
          }
        }
        if ((long *)0x1 < plStack_90) {
          do {
            lVar10 = *plStack_90;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
            if (bVar3) {
              *plStack_90 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 + -1 == 0) {
            (*(code *)plStack_90[1])();
          }
        }
        lVar9 = lVar9 + 1;
        do {
          if (lVar9 != plVar8[1]) goto LAB_104ad3ba0;
          lVar9 = 0;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
        lVar9 = 0;
LAB_104ad3ba0:
      } while ((plVar8 != (long *)0x0) || (lVar9 != 0));
    }
    puVar15[0x11] = uStack_e8;
    puVar15[0x10] = uStack_f0;
    puVar15[0x12] = uStack_e0;
    (**(code **)(puVar16[1] + 0x10))
              (*(undefined8 *)(puVar16[1] + 0x20),*puVar16,puVar15[0x12],puVar15[0x10],FUN_104ad4890
               ,param_1);
  }
  else {
LAB_104ad2c2c:
    uVar13 = puVar15[3];
    puVar15[3] = 0;
    if (*(char *)(puVar15 + 0xf) != '\0') {
      uVar5 = *puVar15;
      uStack_f8 = puVar15[0xe];
      if ((uStack_f8 & 1) != 0) {
        piVar7 = (int *)(uStack_f8 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x0001004bd618(uVar5,puVar15 + 9,&uStack_f8,"continue recv_trailing_metadata_ready");
      if ((uStack_f8 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    uStack_100 = *param_2;
    if ((uStack_100 & 1) != 0) {
      piVar7 = (int *)(uStack_100 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010082b8d4(&plStack_90,uVar13,&uStack_100);
    if ((uStack_100 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_104ad3c18:
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104ad3c20);
  (*pcVar4)();
}



/* Entry: 104ad4618; end: 104ad47bf;  */

long * FUN_104ad4618(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  if (puVar11[3] != 0) {
    uVar5 = puVar11[0xe];
    uVar9 = *param_2;
    if (uVar9 != uVar5) {
      if ((uVar9 & 1) != 0) {
        piVar10 = (int *)(uVar9 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar9 = *param_2;
      }
      puVar11[0xe] = uVar9;
      if ((uVar5 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    *(undefined1 *)(puVar11 + 0xf) = 1;
    plVar6 = (long *)*puVar11;
    do {
      lVar8 = *plVar6;
      lVar3 = lVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 != 0) {
      if (lVar8 == 0) {
        func_0x000107c2c340(plVar6,
                            "deferring recv_trailing_metadata_ready until after recv_initial_metadata_ready"
                           );
        FUN_104bd46a0();
        FUN_104bd46a0();
        func_0x0001004bdf74(&plStack_38);
        func_0x0001004bdf74(&plStack_30);
        func_0x000107c60bd8(plVar6);
        return plRam0000000113815c70;
      }
      plVar6 = plVar6 + 1;
      plVar4 = plVar6;
      func_0x0001004920d0(plVar6,(long)&uStack_28 + 7);
      while (plVar4 == (long *)0x0) {
        plVar4 = plVar6;
        func_0x0001004920d0(plVar6,(long)&uStack_28 + 7);
      }
      func_0x0001004bd8dc(&plStack_30,plVar4[3]);
      plVar6 = plStack_30;
      plVar4[3] = 0;
      plStack_38 = plStack_30;
      if (((ulong)plStack_30 & 1) != 0) {
        piVar10 = (int *)((long)plStack_30 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x0001004bd778();
      if (((ulong)plVar6 & 1) != 0) {
        func_0x00010084dad0(plVar6);
      }
      plVar6 = plStack_30;
      if (((ulong)plStack_30 & 1) != 0) {
        func_0x00010084dad0();
        plVar6 = plStack_30;
      }
    }
    return plVar6;
  }
  plStack_30 = (long *)*param_2;
  if (((ulong)plStack_30 & 1) != 0) {
    piVar10 = (int *)((long)plStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_38 = (long *)puVar11[8];
  if (((ulong)plStack_38 & 1) != 0) {
    piVar10 = (int *)((long)plStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x0001008306c4(&uStack_28,&plStack_30,&plStack_38);
  uVar5 = *param_2;
  if (uStack_28 != uVar5) {
    *param_2 = uStack_28;
    uStack_28 = 0x36;
    if ((uVar5 & 1) == 0) goto LAB_104ad4714;
    func_0x00010084dad0();
    uVar5 = uStack_28;
  }
  if ((uVar5 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104ad4714:
  if (((ulong)plStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (((ulong)plStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  uVar7 = puVar11[0xd];
  plStack_40 = (long *)*param_2;
  if (((ulong)plStack_40 & 1) != 0) {
    piVar10 = (int *)((long)plStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010082b8d4(&uStack_28,uVar7,&plStack_40);
  if (((ulong)plStack_40 & 1) != 0) {
    func_0x00010084dad0();
  }
  return plStack_40;
}



/* Entry: 104ad47c0; end: 104ad488f;  */

void FUN_104ad47c0(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (*param_2 != 0) {
    plVar4 = (long *)(lVar7 + 0xb8);
    do {
      if (*plVar4 != 0) {
        ClearExclusiveLocal();
        goto LAB_104ad4840;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = *param_2;
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_28 = uVar6;
    FUN_104ad4b40(param_1,0,0,0,0,&uStack_28);
    if ((uVar6 & 1) != 0) {
      func_0x00010084dad0(uVar6);
    }
  }
LAB_104ad4840:
  plVar4 = *(long **)(lVar7 + 8);
  do {
    lVar7 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    plVar3 = plVar4;
    func_0x000100836ca0();
    if ((((ulong)plVar3 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar3 + 0x28) >> 1 & 1) != 0)) {
      uStack_28 = 0;
      func_0x0001004c1168(plVar4 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      func_0x00010084dad0();
      return;
    }
    uStack_38 = 0;
    func_0x0001004bd7e8(&uStack_29,plVar4 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    return;
  }
  return;
}



/* Entry: 104ad4890; end: 104ad4b3f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104ad4890(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,char *param_7)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  bool bVar9;
  long lVar10;
  ulong auStack_108 [4];
  undefined1 uStack_e1;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong *puStack_68;
  
  lVar10 = *(long *)(param_1 + 0x10);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  func_0x0001004b62b4(&uStack_80,0);
  func_0x000100460de4(auStack_c8);
  plVar4 = (long *)(lVar10 + 0xb8);
  do {
    if (*plVar4 != 0) {
      ClearExclusiveLocal();
      goto LAB_104ad49f0;
    }
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar9) {
      *plVar4 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack_d0 = 0;
  if (param_6 == 0) {
    auStack_108[0] = 0;
  }
  else {
    pcVar1 = "Authentication metadata processing failed.";
    if (param_7 != (char *)0x0) {
      pcVar1 = param_7;
    }
    pcVar3 = pcVar1;
    _strlen(pcVar1);
    auStack_108[2] = 0;
    auStack_108[3] = 0;
    auStack_108[1] = 0;
    FUN_104ab5920(&uStack_e0,2,pcVar1,pcVar3,&uStack_e1,auStack_108 + 1);
    FUN_104abaa50(&uStack_d8,&uStack_e0,3,(long)param_6);
    uVar8 = uStack_d8;
    if (uStack_d8 != 0) {
      uStack_d8 = 0x36;
      uStack_d0 = uVar8;
    }
    if ((uStack_e0 & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_68 = auStack_108 + 1;
    func_0x000100482b64(&puStack_68);
    auStack_108[0] = uVar8;
    if ((uVar8 & 1) != 0) {
      piVar5 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar9) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar9 = false;
      goto LAB_104ad49c0;
    }
  }
  bVar9 = true;
LAB_104ad49c0:
  uVar8 = auStack_108[0];
  FUN_104ad4b40(param_1,param_2,param_3,param_4,param_5,auStack_108);
  if (!bVar9) {
    func_0x00010084dad0(uVar8);
    func_0x00010084dad0(uVar8);
  }
LAB_104ad49f0:
  puVar7 = (ulong *)(lVar10 + 0x80);
  if (*puVar7 != 0) {
    uVar8 = 0;
    do {
      plVar4 = *(long **)(*(long *)(lVar10 + 0x90) + uVar8 * 0x60);
      if ((long *)0x1 < plVar4) {
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar9) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (*(code *)plVar4[1])();
        }
      }
      plVar4 = *(long **)(*(long *)(lVar10 + 0x90) + uVar8 * 0x60 + 0x20);
      if ((long *)0x1 < plVar4) {
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar9) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (*(code *)plVar4[1])();
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *puVar7);
  }
  func_0x000100837a1c(puVar7);
  plVar4 = *(long **)(lVar10 + 8);
  do {
    lVar10 = *plVar4;
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar9) {
      *plVar4 = lVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar10 + -1 == 0) {
    func_0x000100836ca4();
  }
  func_0x000100467a48(auStack_c8);
  func_0x0001004b6ddc(&uStack_80);
  return;
}



/* Entry: 104ad4b40; end: 104ad4ce3;  */

void FUN_104ad4b40(long param_1,long param_2,long param_3,long param_4,long param_5,ulong *param_6)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  lVar10 = puVar9[2];
  if ((param_4 != 0) && (param_5 != 0)) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/server_auth_filter.cc"
                        ,0xaa,2,
                        "response_md in auth metadata processing not supported for now. Ignoring..."
                       );
  }
  uVar5 = *param_6;
  if (uVar5 == 0 && param_3 != 0) {
    puVar8 = (ulong *)(param_2 + 8);
    do {
      uStack_48 = *(undefined8 *)(*(long *)(lVar10 + 8) + 0x38);
      uVar5 = puVar8[1];
      if (puVar8[-1] == 0) {
        uVar5 = (long)puVar8 + 1;
      }
      uVar3 = *puVar8 & 0xff;
      if (puVar8[-1] != 0) {
        uVar3 = *puVar8;
      }
      FUN_104ad4ce4(uVar5,uVar3,&uStack_48);
      puVar8 = puVar8 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    uVar5 = *param_6;
  }
  uVar3 = puVar9[8];
  if (uVar5 != uVar3) {
    if ((uVar5 & 1) != 0) {
      piVar6 = (int *)(uVar5 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar5 = *param_6;
    }
    puVar9[8] = uVar5;
    if ((uVar3 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  uVar7 = puVar9[3];
  puVar9[3] = 0;
  if (*(char *)(puVar9 + 0xf) != '\0') {
    uVar4 = *puVar9;
    uStack_50 = puVar9[0xe];
    if ((uStack_50 & 1) != 0) {
      piVar6 = (int *)(uStack_50 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x0001004bd618(uVar4,puVar9 + 9,&uStack_50,"continue recv_trailing_metadata_ready");
    if ((uStack_50 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  uStack_58 = *param_6;
  if ((uStack_58 & 1) != 0) {
    piVar6 = (int *)(uStack_58 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x0001004bd7e8(&uStack_48,uVar7,&uStack_58);
  if ((uStack_58 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104ad4ce4; end: 104ad5607;  */

/* WARNING: Possible PIC construction at 0x000104adec60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104adeca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104adec64) */
/* WARNING: Removing unreachable block (ram,0x000104adecac) */

uint * FUN_104ad4ce4(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  uint *unaff_x19;
  uint *unaff_x20;
  uint *puVar11;
  uint *unaff_x21;
  long *plVar12;
  uint *unaff_x22;
  uint *puVar13;
  uint *unaff_x23;
  uint *unaff_x24;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  if ((param_2 == (uint *)0x5) && (*param_1 == 0x7461703a && (char)param_1[1] == 'h')) {
    puVar10 = *(uint **)param_3;
    uVar1 = *puVar10;
    *puVar10 = uVar1 & 0xfffffffe;
    if ((uVar1 & 1) == 0) {
      return param_3;
    }
    puVar10 = puVar10 + 0x74;
    goto code_r0x0001004b6d90;
  }
  if ((param_2 == (uint *)0xa) &&
     (*(long *)param_1 == 0x69726f687475613a && (short)param_1[2] == 0x7974)) {
    puVar10 = *(uint **)param_3;
    uVar1 = *puVar10;
    *puVar10 = uVar1 & 0xfffffffd;
    if ((uVar1 >> 1 & 1) == 0) {
      return param_3;
    }
    puVar10 = puVar10 + 0x6c;
    goto code_r0x0001004b6d90;
  }
  if ((param_2 == (uint *)0x7) &&
     (*param_1 == 0x74656d3a && *(int *)((long)param_1 + 3) == 0x646f6874)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xfffffffb;
    return param_3;
  }
  if ((param_2 == (uint *)0x7) &&
     (*param_1 == 0x6174733a && *(int *)((long)param_1 + 3) == 0x73757461)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xfffffff7;
    return param_3;
  }
  if ((param_2 == (uint *)0x7) &&
     (*param_1 == 0x6863733a && *(int *)((long)param_1 + 3) == 0x656d6568)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xffffffef;
    return param_3;
  }
  if ((param_2 == (uint *)0xc) &&
     (*(long *)param_1 == 0x2d746e65746e6f63 && param_1[2] == 0x65707974)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xffffffdf;
    return param_3;
  }
  if ((param_2 == (uint *)0x2) && ((short)*param_1 == 0x6574)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xffffffbf;
    return param_3;
  }
  if ((param_2 == (uint *)0xd) &&
     (*(long *)param_1 == 0x636e652d63707267 && *(long *)((long)param_1 + 5) == 0x676e69646f636e65))
  {
    **(uint **)param_3 = **(uint **)param_3 & 0xffffff7f;
    return param_3;
  }
  if ((param_2 == (uint *)0x1e) &&
     (((*(long *)param_1 == 0x746e692d63707267 && *(long *)(param_1 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(param_1 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)param_1 + 0x16) == 0x747365757165722d)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xfffffeff;
    return param_3;
  }
  if ((param_2 == (uint *)0x14) &&
     ((*(long *)param_1 == 0x6363612d63707267 && *(long *)(param_1 + 2) == 0x6f636e652d747065) &&
      param_1[4] == 0x676e6964)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xfffffdff;
    return param_3;
  }
  if ((param_2 == (uint *)0xb) &&
     (*(long *)param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63))
  {
    **(uint **)param_3 = **(uint **)param_3 & 0xfffffbff;
    return param_3;
  }
  if ((param_2 == (uint *)0xc) &&
     (*(long *)param_1 == 0x6d69742d63707267 && param_1[2] == 0x74756f65)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xfffff7ff;
    return param_3;
  }
  if ((param_2 == (uint *)0x1a) &&
     (((*(long *)param_1 == 0x6572702d63707267 && *(long *)(param_1 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_1 + 4) == 0x706d657474612d63) && (short)param_1[6] == 0x7374)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xffffefff;
    return param_3;
  }
  if ((param_2 == (uint *)0x16) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xffffdfff;
    return param_3;
  }
  if ((param_2 == (uint *)0xa) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    puVar10 = *(uint **)param_3;
    uVar1 = *puVar10;
    *puVar10 = uVar1 & 0xffffbfff;
    if ((uVar1 >> 0xe & 1) == 0) {
      return param_3;
    }
    puVar10 = puVar10 + 0x54;
    goto code_r0x0001004b6d90;
  }
  if ((param_2 == (uint *)0xc) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    puVar10 = *(uint **)param_3;
    uVar1 = *puVar10;
    *puVar10 = uVar1 & 0xffff7fff;
    if ((uVar1 >> 0xf & 1) == 0) {
      return param_3;
    }
    puVar10 = puVar10 + 0x4c;
    goto code_r0x0001004b6d90;
  }
  if ((param_2 == (uint *)0x4) && (*param_1 == 0x74736f68)) {
    puVar10 = *(uint **)param_3;
    uVar1 = *puVar10;
    *puVar10 = uVar1 & 0xfffeffff;
    if ((uVar1 >> 0x10 & 1) == 0) {
      return param_3;
    }
    puVar10 = puVar10 + 0x44;
    goto code_r0x0001004b6d90;
  }
  if ((param_2 == (uint *)0x19) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    puVar10 = *(uint **)param_3;
    uVar1 = *puVar10;
    *puVar10 = uVar1 & 0xfffdffff;
    if ((uVar1 >> 0x11 & 1) == 0) {
      return param_3;
    }
    puVar10 = puVar10 + 0x3c;
    goto code_r0x0001004b6d90;
  }
  if ((param_2 == (uint *)0x15) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    puVar10 = *(uint **)param_3;
    uVar1 = *puVar10;
    *puVar10 = uVar1 & 0xfffbffff;
    if ((uVar1 >> 0x12 & 1) == 0) {
      return param_3;
    }
    puVar10 = puVar10 + 0x34;
    goto code_r0x0001004b6d90;
  }
  if ((param_2 == (uint *)0xe) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    puVar10 = *(uint **)param_3;
    uVar1 = *puVar10;
    *puVar10 = uVar1 & 0xfff7ffff;
    if ((uVar1 >> 0x13 & 1) == 0) {
      return param_3;
    }
    puVar10 = puVar10 + 0x2c;
    goto code_r0x0001004b6d90;
  }
  if ((param_2 == (uint *)0xd) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    puVar10 = *(uint **)param_3;
    uVar1 = *puVar10;
    *puVar10 = uVar1 & 0xffefffff;
    if ((uVar1 >> 0x14 & 1) == 0) {
      return param_3;
    }
    puVar10 = puVar10 + 0x24;
    goto code_r0x0001004b6d90;
  }
  if ((param_2 == (uint *)0x13) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xffdfffff;
    return param_3;
  }
  if ((param_2 == (uint *)0xb) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    puVar10 = *(uint **)param_3;
    uVar1 = *puVar10;
    *puVar10 = uVar1 & 0xffbfffff;
    if ((uVar1 >> 0x16 & 1) != 0) {
      puVar10 = puVar10 + 0x18;
      if (*(long *)puVar10 != 0) {
        FUN_104a874fc(puVar10);
      }
      return puVar10;
    }
    return param_3;
  }
  if ((param_2 == (uint *)0x8) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    puVar10 = *(uint **)param_3;
    uVar1 = *puVar10;
    *puVar10 = uVar1 & 0xff7fffff;
    if ((uVar1 >> 0x17 & 1) == 0) {
      return param_3;
    }
    puVar10 = puVar10 + 0x10;
    goto code_r0x0001004b6d90;
  }
  puVar10 = (uint *)(*(long *)param_3 + 0x1f0);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = *(uint **)(*(long *)param_3 + 0x1f8);
  puVar5 = puVar10;
  puVar6 = param_1;
  puVar7 = param_2;
  puVar14 = unaff_x24;
  if (puVar11 == (uint *)0x0) {
LAB_104adeb08:
    puVar13 = (uint *)0x0;
    param_2 = unaff_x21;
    param_1 = unaff_x23;
  }
  else {
    if (*(long *)(puVar11 + 2) == 0) {
      puVar11 = (uint *)0x0;
      goto LAB_104adeb08;
    }
    puVar13 = (uint *)0x0;
    do {
      puVar15 = (uint *)((ulong)*(uint **)(puVar11 + (long)puVar13 * 0x10 + 6) & 0xff);
      if (*(long *)(puVar11 + (long)puVar13 * 0x10 + 4) != 0) {
        puVar15 = *(uint **)(puVar11 + (long)puVar13 * 0x10 + 6);
      }
      if (puVar15 == param_2) {
        puVar5 = (uint *)((long)puVar11 + (long)puVar13 * 0x40 + 0x19);
        if (*(long *)(puVar11 + (long)puVar13 * 0x10 + 4) != 0) {
          puVar5 = *(uint **)(puVar11 + (long)puVar13 * 0x10 + 8);
        }
        puVar6 = param_1;
        puVar7 = param_2;
        _memcmp();
        puVar15 = puVar13;
        puVar16 = puVar11;
        if ((int)puVar5 == 0) goto LAB_104adeb54;
      }
      puVar13 = (uint *)((long)puVar13 + 1);
      do {
        if (puVar13 != *(uint **)(puVar11 + 2)) goto LAB_104adeaf4;
        puVar13 = (uint *)0x0;
        puVar11 = *(uint **)puVar11;
      } while (puVar11 != (uint *)0x0);
      puVar13 = (uint *)0x0;
LAB_104adeaf4:
    } while ((puVar11 != (uint *)0x0) || (puVar13 != (uint *)0x0));
    puVar11 = (uint *)0x0;
  }
LAB_104adeb0c:
  puVar4 = (undefined8 *)register0x00000008;
  puVar15 = puVar10;
  puVar16 = puVar11;
  puVar8 = puVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    unaff_x30 = FUN_104adec18;
    ___stack_chk_fail();
    puVar4 = &uStack_80;
    puVar15 = puVar5;
    puVar16 = puVar6;
    puVar8 = puVar7;
    unaff_x19 = puVar10;
    unaff_x20 = puVar11;
    unaff_x21 = param_2;
    unaff_x22 = puVar13;
    unaff_x23 = param_1;
    unaff_x24 = puVar14;
    unaff_x29 = &stack0xfffffffffffffff0;
  }
  if (puVar16 != (uint *)0x0 || puVar8 != (uint *)0x0) {
    register0x00000008 = (BADSPACEBASE *)((long)puVar4 + -0x40);
    *(uint **)((long)puVar4 + -0x40) = unaff_x24;
    *(uint **)((long)puVar4 + -0x38) = unaff_x23;
    *(uint **)((long)puVar4 + -0x30) = unaff_x22;
    *(uint **)((long)puVar4 + -0x28) = unaff_x21;
    *(uint **)((long)puVar4 + -0x20) = unaff_x20;
    *(uint **)((long)puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)((long)puVar4 + -0x10) = unaff_x29;
    *(code **)((long)puVar4 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)puVar4 + -0x10);
    if (puVar8 < *(uint **)(puVar16 + 2)) {
      puVar10 = puVar16 + (long)puVar8 * 0x10 + 0xc;
      unaff_x30 = (code *)0x104adec64;
      register0x00000008 = (BADSPACEBASE *)((long)puVar4 + -0x40);
      unaff_x19 = puVar16;
      unaff_x20 = puVar8;
code_r0x0001004b6d90:
      *(uint **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      plVar12 = *(long **)puVar10;
      if ((long *)0x1 < plVar12) {
        do {
          lVar9 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plVar12[1])();
        }
      }
      return puVar10;
    }
    *(uint **)(puVar16 + 2) = puVar8;
    *(uint **)(puVar15 + 4) = puVar16;
    for (plVar12 = *(long **)puVar16; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (plVar12[1] != 0) {
        puVar10 = (uint *)(plVar12 + 6);
        unaff_x20 = (uint *)(plVar12 + 2);
        unaff_x30 = (code *)0x104adecac;
        unaff_x19 = puVar10;
        goto code_r0x0001004b6d90;
      }
      plVar12[1] = 0;
    }
  }
  return puVar15;
LAB_104adeb54:
  puVar15 = (uint *)((long)puVar15 + 1);
  if (puVar16 == (uint *)0x0) {
    puVar14 = (uint *)0x0;
    if (puVar15 == (uint *)0x0) goto LAB_104adeb0c;
    puVar16 = (uint *)0x0;
  }
  else {
    while (puVar15 == *(uint **)(puVar16 + 2)) {
      puVar15 = (uint *)0x0;
      puVar16 = *(uint **)puVar16;
      puVar14 = puVar15;
      if (puVar16 == (uint *)0x0) goto LAB_104adeb0c;
    }
  }
  puVar8 = puVar16 + (long)puVar15 * 0x10 + 4;
  puVar14 = (uint *)((ulong)*(uint **)(puVar16 + (long)puVar15 * 0x10 + 6) & 0xff);
  if (*(long *)puVar8 != 0) {
    puVar14 = *(uint **)(puVar16 + (long)puVar15 * 0x10 + 6);
  }
  if (puVar14 == param_2) goto code_r0x000104adeb9c;
  goto LAB_104adebbc;
code_r0x000104adeb9c:
  puVar5 = (uint *)((long)puVar16 + (long)puVar15 * 0x40 + 0x19);
  if (*(long *)puVar8 != 0) {
    puVar5 = *(uint **)(puVar16 + (long)puVar15 * 0x10 + 8);
  }
  puVar6 = param_1;
  puVar7 = param_2;
  _memcmp();
  if ((int)puVar5 != 0) {
LAB_104adebbc:
    uVar19 = *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 6);
    uVar17 = *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 4);
    uVar22 = *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 10);
    uVar20 = *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 8);
    uVar18 = *(undefined8 *)puVar8;
    uVar23 = *(undefined8 *)(puVar16 + (long)puVar15 * 0x10 + 10);
    uVar21 = *(undefined8 *)(puVar16 + (long)puVar15 * 0x10 + 8);
    *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 6) =
         *(undefined8 *)(puVar16 + (long)puVar15 * 0x10 + 6);
    *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 4) = uVar18;
    *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 10) = uVar23;
    *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 8) = uVar21;
    *(undefined8 *)(puVar16 + (long)puVar15 * 0x10 + 6) = uVar19;
    *(undefined8 *)puVar8 = uVar17;
    *(undefined8 *)(puVar16 + (long)puVar15 * 0x10 + 10) = uVar22;
    *(undefined8 *)(puVar16 + (long)puVar15 * 0x10 + 8) = uVar20;
    uStack_78 = *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 0xe);
    uStack_80 = *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 0xc);
    uStack_68 = *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 0x12);
    uStack_70 = *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 0x10);
    uVar17 = *(undefined8 *)(puVar16 + (long)puVar15 * 0x10 + 0xc);
    uVar19 = *(undefined8 *)(puVar16 + (long)puVar15 * 0x10 + 0x12);
    uVar18 = *(undefined8 *)(puVar16 + (long)puVar15 * 0x10 + 0x10);
    *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 0xe) =
         *(undefined8 *)(puVar16 + (long)puVar15 * 0x10 + 0xe);
    *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 0xc) = uVar17;
    *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 0x12) = uVar19;
    *(undefined8 *)(puVar11 + (long)puVar13 * 0x10 + 0x10) = uVar18;
    *(undefined8 *)(puVar16 + (long)puVar15 * 0x10 + 0xe) = uStack_78;
    *(undefined8 *)(puVar16 + (long)puVar15 * 0x10 + 0xc) = uStack_80;
    *(undefined8 *)(puVar16 + (long)puVar15 * 0x10 + 0x12) = uStack_68;
    *(undefined8 *)(puVar16 + (long)puVar15 * 0x10 + 0x10) = uStack_70;
    puVar13 = (uint *)((long)puVar13 + 1);
    do {
      if (puVar13 != *(uint **)(puVar11 + 2)) goto LAB_104adeb54;
      puVar13 = (uint *)0x0;
      puVar11 = *(uint **)puVar11;
    } while (puVar11 != (uint *)0x0);
    puVar13 = (uint *)0x0;
  }
  goto LAB_104adeb54;
}



/* Entry: 104ad5608; end: 104ad56db;  */

undefined1  [16]
FUN_104ad5608(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long alStack_108 [8];
  long lStack_c8;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)*param_1;
  lVar7 = *plVar5;
  if (lVar7 == plVar5[1]) {
    uVar1 = lVar7 + 8U;
    if (lVar7 + 8U <= (ulong)(lVar7 * 2)) {
      uVar1 = lVar7 << 1;
    }
    plVar5[1] = uVar1;
    lVar3 = plVar5[2];
    puVar4 = (undefined8 *)(uVar1 * 0x60);
    func_0x0001004689e4();
    plVar5 = (long *)*param_1;
    plVar5[2] = lVar3;
    lVar7 = *plVar5;
  }
  else {
    lVar3 = plVar5[2];
    puVar4 = param_2;
  }
  *plVar5 = lVar7 + 1;
  puVar6 = (undefined8 *)(lVar3 + lVar7 * 0x60);
  uVar11 = param_2[1];
  uVar10 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  puVar6[1] = uVar11;
  *puVar6 = uVar10;
  puVar6[3] = uVar9;
  puVar6[2] = uVar8;
  uVar11 = param_3[1];
  uVar10 = *param_3;
  uVar9 = param_3[3];
  uVar8 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  puVar6[5] = uVar11;
  puVar6[4] = uVar10;
  puVar6[7] = uVar9;
  puVar6[6] = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar15._8_8_ = puVar4;
    auVar15._0_8_ = lVar3;
    return auVar15;
  }
  ___stack_chk_fail();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)0x2;
  puVar6 = puVar4;
  func_0x0001004686b8();
  if ((int)plVar5 != 0) {
    plVar5 = alStack_108;
    func_0x000107c616d0(plVar5,0x40,param_4,auStack_80);
    if ((int)(uint)plVar5 < 0) {
      plVar2 = (long *)0x0;
      plVar5 = (long *)0x0;
    }
    else if ((uint)plVar5 < 0x40) {
      plVar5 = (long *)0x0;
      plVar2 = alStack_108;
    }
    else {
      plVar5 = (long *)(((ulong)plVar5 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar2 = plVar5;
    }
    FUN_104a6e9e0(lVar3,puVar4,2,plVar2);
    func_0x000100460314();
    puVar6 = puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    auVar12._8_8_ = puVar6;
    auVar12._0_8_ = plVar5;
    return auVar12;
  }
  func_0x000107c60e78();
  if ((ulong)puVar6 >> 0x3d == 0) {
    lVar7 = (long)puVar6 << 3;
    func_0x000107c60e20(lVar7);
    auVar13._8_8_ = puVar6;
    auVar13._0_8_ = lVar7;
    return auVar13;
  }
  FUN_104a7757c();
  lVar7 = plVar5[1];
  lVar3 = plVar5[2];
  while (lVar3 != lVar7) {
    plVar5[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = plVar5[2];
  }
  if (*plVar5 != 0) {
    func_0x000107c60e14();
  }
  auVar14._8_8_ = puVar6;
  auVar14._0_8_ = plVar5;
  return auVar14;
}



/* Entry: 104ad56dc; end: 104ad56e3;  */

undefined1  [16]
FUN_104ad56dc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 104ad56e4; end: 104ad57b3;  */

void FUN_104ad56e4(undefined8 param_1,ulong *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  ulong uStack_40;
  ulong uStack_38;
  
  uStack_40 = *param_2;
  if ((uStack_40 & 1) != 0) {
    piVar5 = (int *)(uStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar3 = param_3;
  func_0x000104ae1b68(param_3);
  uVar4 = uVar3;
  _strlen();
  func_0x00010084caf8(&uStack_38,&uStack_40,7,uVar3,uVar4);
  FUN_104abaa50(param_1,&uStack_38,8,param_3 & 0xffffffff);
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_40 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104ad57b4; end: 104ad587f;  */

long FUN_104ad57b4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_28;
  
  for (plVar5 = *(long **)(param_1 + 0xa0); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    plVar3 = (long *)plVar5[2];
    if ((long *)0x1 < plVar3) {
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
  lStack_28 = param_1 + 0xc0;
  FUN_104ad660c(&lStack_28);
  FUN_104ad65c4(param_1 + 0x90);
  lStack_28 = param_1 + 0x78;
  func_0x000100484f44(&lStack_28);
  lStack_28 = param_1 + 0x60;
  func_0x000100482ae0(&lStack_28);
  func_0x000100482900(param_1 + 0x48,*(undefined8 *)(param_1 + 0x50));
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return param_1;
}



/* Entry: 104ad5880; end: 104ad5883;  */

long FUN_104ad5880(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_28;
  
  for (plVar5 = *(long **)(param_1 + 0xa0); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    plVar3 = (long *)plVar5[2];
    if ((long *)0x1 < plVar3) {
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
  lStack_28 = param_1 + 0xc0;
  FUN_104ad660c(&lStack_28);
  FUN_104ad65c4(param_1 + 0x90);
  lStack_28 = param_1 + 0x78;
  func_0x000100484f44(&lStack_28);
  lStack_28 = param_1 + 0x60;
  func_0x000100482ae0(&lStack_28);
  func_0x000100482900(param_1 + 0x48,*(undefined8 *)(param_1 + 0x50));
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return param_1;
}



/* Entry: 104ad5884; end: 104ad5897;  */

void FUN_104ad5884(void)

{
  FUN_104ad57b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ad5898; end: 104ad60db;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104ad5898(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  ulong *****pppppuVar5;
  ulong ******ppppppuVar6;
  undefined8 *******pppppppuVar7;
  long *plVar8;
  ulong uVar9;
  ulong ******ppppppuVar10;
  ulong *******pppppppuVar11;
  ulong ******ppppppuVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong *****pppppuVar16;
  ulong ******ppppppuVar17;
  bool bVar18;
  long lVar19;
  ulong ******ppppppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_141;
  ulong ******ppppppuStack_140;
  ulong ******ppppppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *******pppppppuStack_120;
  long lStack_118;
  char cStack_109;
  ulong auStack_108 [5];
  ulong *****pppppuStack_e0;
  ulong ******ppppppuStack_d8;
  ulong *****pppppuStack_d0;
  ulong *****pppppuStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong ******ppppppuStack_a8;
  ulong ******ppppppuStack_a0;
  ulong ******ppppppuStack_98;
  ulong *******apppppppuStack_90 [4];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuStack_d8 = (ulong ******)0x0;
  pppppuStack_d0 = (ulong *****)0x0;
  pppppuStack_c8 = (ulong *****)0x0;
  pppppuVar5 = (ulong *****)0x18;
  __Znwm();
  *pppppuVar5 = (ulong ****)0x0;
  pppppuVar5[1] = (ulong ****)0x0;
  pppppuVar5[2] = (ulong ****)0x0;
  auStack_108[4] = 0;
  lVar14 = lRam0000000113815be8;
  pppppuStack_e0 = pppppuVar5;
  if (lRam0000000113815be8 == 0) {
    func_0x000100472138();
  }
  FUN_104ad6e4c(&pppppppuStack_c0,lVar14 + 0xd8,param_3,param_4,auStack_108 + 4);
  pppppuVar5 = pppppuStack_e0;
  func_0x000100484ed4(pppppuStack_e0);
  pppppuVar5[1] = (ulong ****)pppppppuStack_b8;
  *pppppuVar5 = (ulong ****)pppppppuStack_c0;
  pppppuVar5[2] = (ulong ****)pppppppuStack_b0;
  pppppppuStack_c0 = (ulong *******)0x0;
  pppppppuStack_b8 = (ulong *******)0x0;
  pppppppuStack_b0 = (ulong *******)0x0;
  apppppppuStack_90[0] = (ulong *******)&pppppppuStack_c0;
  func_0x000100484f44(apppppppuStack_90);
  if (auStack_108[4] != 0) {
    FUN_104a83d48(&ppppppuStack_d8,auStack_108 + 4);
  }
  pppppuVar5 = pppppuStack_e0;
  ppppppuVar6 = (ulong ******)(param_2 + 0xd0);
  pppppuVar16 = *(ulong ******)(param_2 + 200);
  if (pppppuVar16 < *ppppppuVar6) {
    pppppuStack_e0 = (ulong *****)0x0;
    ppppppuVar17 = (ulong ******)(pppppuVar16 + 1);
    *pppppuVar16 = (ulong ****)pppppuVar5;
LAB_104ad5a4c:
    *(ulong *******)(param_2 + 200) = ppppppuVar17;
    pppppuVar5 = ppppppuVar17[-1];
    func_0x00010002b024(&pppppppuStack_c0,&DAT_10f68f148);
    plVar15 = (long *)(param_4 + 0x20);
    func_0x000100484044(plVar15,&pppppppuStack_c0);
    if ((long)pppppppuStack_b0 < 0) {
      __ZdlPv(pppppppuStack_c0);
    }
    if ((long *)(param_4 + 0x28) == plVar15) goto LAB_104ad5d9c;
    if ((int)plVar15[7] == 6) {
      lVar14 = plVar15[0xe];
      lVar2 = plVar15[0xf];
      if (lVar14 == lVar2) {
LAB_104ad5d9c:
        lVar14 = *(long *)(param_2 + 200) + -8;
        FUN_104ad6680(lVar14,0);
        *(long *)(param_2 + 200) = lVar14;
      }
      else {
        bVar18 = false;
        plVar15 = (long *)(param_2 + 0x90);
        do {
          auStack_108[0] = 0;
          FUN_104ad60dc(&pppppppuStack_120,lVar14,auStack_108);
          if (auStack_108[0] == 0) {
            if (cStack_109 < '\0') {
              pppppppuVar7 = pppppppuStack_120;
              if (lStack_118 != 0) goto LAB_104ad5b10;
LAB_104ad5b88:
              if (*(long *)(param_2 + 0xb8) != 0) {
                uStack_130 = 0;
                uStack_128 = 0;
                ppppppuStack_138 = (ulong ******)0x0;
                FUN_104ab5920(&ppppppuStack_98,2,"field:name error:multiple default method configs",
                              0x30,&ppppppuStack_140,&ppppppuStack_138);
                if (pppppuStack_d0 < pppppuStack_c8) {
                  *pppppuStack_d0 = (ulong ****)ppppppuStack_98;
                  ppppppuStack_98 = (ulong ******)0x36;
                  pppppuStack_d0 = pppppuStack_d0 + 1;
                }
                else {
                  lVar19 = (long)pppppuStack_d0 - (long)ppppppuStack_d8 >> 3;
                  uVar1 = lVar19 + 1;
                  if (uVar1 >> 0x3d != 0) {
                    FUN_104a83ee4(&ppppppuStack_d8);
                    goto LAB_104ad5f7c;
                  }
                  uVar13 = (long)pppppuStack_c8 - (long)ppppppuStack_d8 >> 2;
                  if (uVar13 <= uVar1) {
                    uVar13 = uVar1;
                  }
                  if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_c8 - (long)ppppppuStack_d8)) {
                    uVar13 = 0x1fffffffffffffff;
                  }
                  if (uVar13 == 0) {
                    ppppppuVar6 = (ulong ******)0x0;
                    ppppppuStack_a0 = &pppppuStack_c8;
                  }
                  else {
                    ppppppuVar6 = &pppppuStack_c8;
                    ppppppuStack_a0 = &pppppuStack_c8;
                    FUN_104a83ef8();
                  }
                  pppppppuStack_b8 = (ulong *******)(ppppppuVar6 + lVar19);
                  ppppppuStack_a8 = ppppppuVar6 + uVar13;
                  pppppppuVar11 = pppppppuStack_b8 + 1;
                  pppppppuStack_c0 = (ulong *******)ppppppuVar6;
                  *pppppppuStack_b8 = ppppppuStack_98;
                  ppppppuStack_98 = (ulong ******)0x36;
                  pppppppuStack_b0 = pppppppuVar11;
                  FUN_104a83e70(&ppppppuStack_d8,&pppppppuStack_c0);
                  pppppuVar16 = pppppuStack_d0;
                  FUN_104a84040(&pppppppuStack_c0);
                  pppppuStack_d0 = pppppuVar16;
                  if (((ulong)ppppppuStack_98 & 1) != 0) {
                    func_0x00010084dad0();
                  }
                }
                pppppppuStack_c0 = &ppppppuStack_138;
                func_0x000100482b64(&pppppppuStack_c0);
              }
              *(ulong ******)(param_2 + 0xb8) = pppppuVar5;
            }
            else {
              if (cStack_109 == '\0') goto LAB_104ad5b88;
              pppppppuVar7 = &pppppppuStack_120;
LAB_104ad5b10:
              func_0x000100746ba8(apppppppuStack_90,pppppppuVar7);
              plVar8 = plVar15;
              pppppppuStack_c0 = (ulong *******)apppppppuStack_90;
              FUN_104ad6758(plVar15,apppppppuStack_90,&UNK_10dd5b8f9,&pppppppuStack_c0,
                            &ppppppuStack_98);
              if (plVar8[6] == 0) {
                plVar8[6] = (long)pppppuVar5;
              }
              else {
                uStack_158 = 0;
                uStack_150 = 0;
                ppppppuStack_160 = (ulong ******)0x0;
                FUN_104ab5920(&ppppppuStack_140,2,
                              "field:name error:multiple method configs with same name",0x37,
                              &uStack_141,&ppppppuStack_160);
                if (pppppuStack_d0 < pppppuStack_c8) {
                  *pppppuStack_d0 = (ulong ****)ppppppuStack_140;
                  ppppppuStack_140 = (ulong ******)0x36;
                  pppppuStack_d0 = pppppuStack_d0 + 1;
                }
                else {
                  lVar19 = (long)pppppuStack_d0 - (long)ppppppuStack_d8 >> 3;
                  uVar1 = lVar19 + 1;
                  if (uVar1 >> 0x3d != 0) {
                    FUN_104a83ee4(&ppppppuStack_d8);
                    goto LAB_104ad5f7c;
                  }
                  uVar13 = (long)pppppuStack_c8 - (long)ppppppuStack_d8 >> 2;
                  if (uVar13 <= uVar1) {
                    uVar13 = uVar1;
                  }
                  if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_c8 - (long)ppppppuStack_d8)) {
                    uVar13 = 0x1fffffffffffffff;
                  }
                  if (uVar13 == 0) {
                    ppppppuVar6 = (ulong ******)0x0;
                    ppppppuStack_a0 = &pppppuStack_c8;
                  }
                  else {
                    ppppppuVar6 = &pppppuStack_c8;
                    ppppppuStack_a0 = &pppppuStack_c8;
                    FUN_104a83ef8();
                  }
                  pppppppuStack_b8 = (ulong *******)(ppppppuVar6 + lVar19);
                  ppppppuStack_a8 = ppppppuVar6 + uVar13;
                  pppppppuVar11 = pppppppuStack_b8 + 1;
                  pppppppuStack_c0 = (ulong *******)ppppppuVar6;
                  *pppppppuStack_b8 = ppppppuStack_140;
                  ppppppuStack_140 = (ulong ******)0x36;
                  pppppppuStack_b0 = pppppppuVar11;
                  FUN_104a83e70(&ppppppuStack_d8,&pppppppuStack_c0);
                  pppppuVar16 = pppppuStack_d0;
                  FUN_104a84040(&pppppppuStack_c0);
                  pppppuStack_d0 = pppppuVar16;
                  if (((ulong)ppppppuStack_140 & 1) != 0) {
                    func_0x00010084dad0();
                  }
                }
                pppppppuStack_c0 = &ppppppuStack_160;
                func_0x000100482b64(&pppppppuStack_c0);
                pppppppuVar11 = apppppppuStack_90[0];
                if ((ulong *******)0x1 < apppppppuStack_90[0]) {
                  do {
                    ppppppuVar6 = *pppppppuVar11;
                    cVar3 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
                    if (bVar18) {
                      *pppppppuVar11 = (ulong ******)((long)ppppppuVar6 + -1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if ((ulong ******)((long)ppppppuVar6 + -1) == (ulong ******)0x0) {
                    (*(code *)pppppppuVar11[1])();
                  }
                }
              }
            }
            bVar18 = true;
          }
          else {
            FUN_104a83d48(&ppppppuStack_d8,auStack_108);
          }
          if (cStack_109 < '\0') {
            __ZdlPv(pppppppuStack_120);
          }
          if ((auStack_108[0] & 1) != 0) {
            func_0x00010084dad0();
          }
          lVar14 = lVar14 + 0x50;
        } while (lVar14 != lVar2);
        if (!bVar18) goto LAB_104ad5d9c;
      }
      func_0x0001004853bc(param_1,&pppppppuStack_c0,"methodConfig",0xc,&ppppppuStack_d8);
    }
    else {
      auStack_108[2] = 0;
      auStack_108[3] = 0;
      auStack_108[1] = 0;
      FUN_104ab5920(&pppppppuStack_120,2,"field:name error:not of type Array",0x22,&ppppppuStack_98,
                    auStack_108 + 1);
      if (pppppuStack_d0 < pppppuStack_c8) {
        *pppppuStack_d0 = (ulong ****)pppppppuStack_120;
        pppppppuStack_120 = (undefined8 *******)0x36;
        pppppuStack_d0 = pppppuStack_d0 + 1;
      }
      else {
        lVar14 = (long)pppppuStack_d0 - (long)ppppppuStack_d8 >> 3;
        uVar1 = lVar14 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_104a83ee4(&ppppppuStack_d8);
          goto LAB_104ad5f7c;
        }
        ppppppuVar6 = &pppppuStack_c8;
        uVar13 = (long)pppppuStack_c8 - (long)ppppppuStack_d8 >> 2;
        if (uVar13 <= uVar1) {
          uVar13 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_c8 - (long)ppppppuStack_d8)) {
          uVar13 = 0x1fffffffffffffff;
        }
        ppppppuStack_a0 = ppppppuVar6;
        if (uVar13 == 0) {
          pppppppuStack_c0 = (ulong *******)0x0;
        }
        else {
          FUN_104a83ef8();
          pppppppuStack_c0 = (ulong *******)ppppppuVar6;
        }
        pppppppuStack_b8 = pppppppuStack_c0 + lVar14;
        ppppppuStack_a8 = (ulong ******)(pppppppuStack_c0 + uVar13);
        pppppppuVar11 = pppppppuStack_b8 + 1;
        *pppppppuStack_b8 = (ulong ******)pppppppuStack_120;
        pppppppuStack_120 = (undefined8 *******)0x36;
        pppppppuStack_b0 = pppppppuVar11;
        FUN_104a83e70(&ppppppuStack_d8,&pppppppuStack_c0);
        pppppuVar5 = pppppuStack_d0;
        FUN_104a84040(&pppppppuStack_c0);
        pppppuStack_d0 = pppppuVar5;
        if (((ulong)pppppppuStack_120 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      pppppppuStack_c0 = (ulong *******)(auStack_108 + 1);
      func_0x000100482b64(&pppppppuStack_c0);
      func_0x0001004853bc(param_1,&pppppppuStack_c0,"methodConfig",0xc,&ppppppuStack_d8);
    }
    if ((auStack_108[4] & 1) != 0) {
      func_0x00010084dad0();
    }
    FUN_104ad6680(&pppppuStack_e0,0);
    pppppppuStack_c0 = &ppppppuStack_d8;
    func_0x000100482b64(&pppppppuStack_c0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    plVar15 = (long *)(param_2 + 0xc0);
    lVar14 = (long)pppppuVar16 - *plVar15 >> 3;
    uVar1 = lVar14 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar9 = (long)*ppppppuVar6 - *plVar15;
      uVar13 = (long)uVar9 >> 2;
      if (uVar13 <= uVar1) {
        uVar13 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar13 = 0x1fffffffffffffff;
      }
      ppppppuStack_a0 = ppppppuVar6;
      if (uVar13 == 0) {
        ppppppuVar6 = (ulong ******)0x0;
      }
      else {
        FUN_104ad66d4();
      }
      pppppuVar5 = pppppuStack_e0;
      ppppppuVar10 = ppppppuVar6 + lVar14;
      pppppuStack_e0 = (ulong *****)0x0;
      ppppppuVar17 = ppppppuVar10 + 1;
      *ppppppuVar10 = pppppuVar5;
      pppppppuVar11 = *(ulong ********)(param_2 + 0xc0);
      pppppppuStack_c0 = *(ulong ********)(param_2 + 200);
      pppppppuStack_b0 = pppppppuStack_c0;
      if (pppppppuStack_c0 != pppppppuVar11) {
        do {
          pppppppuStack_c0 = pppppppuStack_c0 + -1;
          ppppppuVar12 = *pppppppuStack_c0;
          *pppppppuStack_c0 = (ulong ******)0x0;
          ppppppuVar10 = ppppppuVar10 + -1;
          *ppppppuVar10 = (ulong *****)ppppppuVar12;
        } while (pppppppuStack_c0 != pppppppuVar11);
        pppppppuStack_c0 = (ulong *******)*plVar15;
        pppppppuStack_b0 = *(ulong ********)(param_2 + 200);
      }
      *(ulong *******)(param_2 + 0xc0) = ppppppuVar10;
      *(ulong *******)(param_2 + 200) = ppppppuVar17;
      ppppppuStack_a8 = *(ulong *******)(param_2 + 0xd0);
      *(ulong *******)(param_2 + 0xd0) = ppppppuVar6 + uVar13;
      pppppppuStack_b8 = pppppppuStack_c0;
      func_0x000104ad6708(&pppppppuStack_c0);
      goto LAB_104ad5a4c;
    }
  }
  FUN_104ad66c0(plVar15);
LAB_104ad5f7c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104ad5f80);
  (*pcVar4)();
}



/* Entry: 104ad60dc; end: 104ad65c3;  */

/* WARNING: Removing unreachable block (ram,0x000104ad614c) */
/* WARNING: Removing unreachable block (ram,0x000104ad62e8) */

char ** FUN_104ad60dc(char **param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  char **ppcVar2;
  int *piVar3;
  long *plVar4;
  char *pcVar5;
  ulong uVar6;
  int *piVar7;
  char **ppcStack_190;
  ulong uStack_188;
  ulong uStack_180;
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
  char **ppcStack_118;
  ulong uStack_110;
  char *pcStack_e8;
  undefined8 uStack_e0;
  int *piStack_b8;
  ulong uStack_b0;
  char *pcStack_88;
  undefined8 uStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_2 == 5) {
    func_0x00010002b024(&pcStack_88,"service");
    piVar3 = param_2 + 8;
    piVar1 = piVar3;
    func_0x000100484044(piVar3,&pcStack_88);
    if ((param_2 + 10 == piVar1) || (piVar1[0xe] == 0)) {
      piVar7 = (int *)0x0;
    }
    else {
      if (piVar1[0xe] != 4) {
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_148 = 0;
        FUN_104ab5920(&piStack_b8,2,"field:name error: field:service error:not of type string",0x38,
                      &pcStack_e8,&uStack_148);
        piVar3 = (int *)*param_3;
        if (piStack_b8 == piVar3) {
LAB_104ad6288:
          if (((ulong)piVar3 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          *param_3 = piStack_b8;
          piStack_b8 = (int *)0x36;
          if (((ulong)piVar3 & 1) != 0) {
            func_0x00010084dad0();
            piVar3 = piStack_b8;
            goto LAB_104ad6288;
          }
        }
        pcStack_88 = (char *)&uStack_148;
        func_0x000100482b64(&pcStack_88);
        func_0x00010002b024(param_1,"");
        goto LAB_104ad61fc;
      }
      if ((char)*(byte *)((long)piVar1 + 0x57) < '\0') {
        uVar6 = *(ulong *)(piVar1 + 0x12);
      }
      else {
        uVar6 = (ulong)*(byte *)((long)piVar1 + 0x57);
      }
      piVar7 = (int *)0x0;
      if (uVar6 != 0) {
        piVar7 = piVar1 + 0x10;
      }
    }
    func_0x00010002b024(&pcStack_88,"method");
    func_0x000100484044(piVar3,&pcStack_88);
    if ((param_2 + 10 == piVar3) || (piVar3[0xe] == 0)) {
      piVar1 = (int *)0x0;
    }
    else {
      if (piVar3[0xe] != 4) {
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_160 = 0;
        FUN_104ab5920(&piStack_b8,2,"field:name error: field:method error:not of type string",0x37,
                      &pcStack_e8,&uStack_160);
        piVar3 = (int *)*param_3;
        if (piStack_b8 == piVar3) {
LAB_104ad63c4:
          if (((ulong)piVar3 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        else {
          *param_3 = piStack_b8;
          piStack_b8 = (int *)0x36;
          if (((ulong)piVar3 & 1) != 0) {
            func_0x00010084dad0();
            piVar3 = piStack_b8;
            goto LAB_104ad63c4;
          }
        }
        pcStack_88 = (char *)&uStack_160;
        func_0x000100482b64(&pcStack_88);
        func_0x00010002b024(param_1,"");
        goto LAB_104ad61fc;
      }
      if ((char)*(byte *)((long)piVar3 + 0x57) < '\0') {
        uVar6 = *(ulong *)(piVar3 + 0x12);
      }
      else {
        uVar6 = (ulong)*(byte *)((long)piVar3 + 0x57);
      }
      piVar1 = (int *)0x0;
      if (uVar6 != 0) {
        piVar1 = piVar3 + 0x10;
      }
    }
    if (piVar7 != (int *)0x0) {
      pcStack_88 = "/";
      uStack_80 = 1;
      uStack_b0 = *(ulong *)(piVar7 + 2);
      piStack_b8 = *(int **)piVar7;
      if (-1 < (char)*(byte *)((long)piVar7 + 0x17)) {
        uStack_b0 = (ulong)*(byte *)((long)piVar7 + 0x17);
        piStack_b8 = piVar7;
      }
      pcStack_e8 = "/";
      uStack_e0 = 1;
      if (piVar1 == (int *)0x0) {
        func_0x00010002b024(&ppcStack_190,"");
      }
      else if (*(char *)((long)piVar1 + 0x17) < '\0') {
        func_0x000100033dac(&ppcStack_190,*(undefined8 *)piVar1,*(undefined8 *)(piVar1 + 2));
      }
      else {
        uStack_188 = *(ulong *)(piVar1 + 2);
        ppcStack_190 = *(char ***)piVar1;
        uStack_180 = *(ulong *)(piVar1 + 4);
      }
      uStack_110 = uStack_188;
      ppcStack_118 = ppcStack_190;
      if (-1 < (long)uStack_180) {
        uStack_110 = uStack_180 >> 0x38;
        ppcStack_118 = (char **)&ppcStack_190;
      }
      ppcVar2 = &pcStack_88;
      func_0x00010ae8c6d8(param_1,ppcVar2,&piStack_b8,&pcStack_e8,&ppcStack_118);
      param_1 = ppcVar2;
      if ((long)uStack_180 < 0) {
        param_1 = ppcStack_190;
        __ZdlPv();
      }
      goto LAB_104ad61fc;
    }
    if (piVar1 != (int *)0x0) {
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_178 = 0;
      FUN_104ab5920(&piStack_b8,2,"field:name error:method name populated without service name",0x3b
                    ,&pcStack_e8,&uStack_178);
      piVar3 = (int *)*param_3;
      if (piStack_b8 == piVar3) {
LAB_104ad64c0:
        if (((ulong)piVar3 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        *param_3 = piStack_b8;
        piStack_b8 = (int *)0x36;
        if (((ulong)piVar3 & 1) != 0) {
          func_0x00010084dad0();
          piVar3 = piStack_b8;
          goto LAB_104ad64c0;
        }
      }
      pcStack_88 = (char *)&uStack_178;
      func_0x000100482b64(&pcStack_88);
    }
    func_0x00010002b024(param_1,"");
    goto LAB_104ad61fc;
  }
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_130 = 0;
  FUN_104ab5920(&piStack_b8,2,"field:name error:type is not object",0x23,&pcStack_e8,&uStack_130);
  piVar3 = (int *)*param_3;
  if (piStack_b8 == piVar3) {
LAB_104ad61d4:
    if (((ulong)piVar3 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_3 = piStack_b8;
    piStack_b8 = (int *)0x36;
    if (((ulong)piVar3 & 1) != 0) {
      func_0x00010084dad0();
      piVar3 = piStack_b8;
      goto LAB_104ad61d4;
    }
  }
  pcStack_88 = (char *)&uStack_130;
  func_0x000100482b64(&pcStack_88);
  func_0x00010002b024(param_1,"");
LAB_104ad61fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x0001004bdf74(&piStack_b8);
    pcStack_88 = (char *)&uStack_178;
    func_0x000100482b64(&pcStack_88);
    __Unwind_Resume();
    plVar4 = (long *)param_1[2];
    while (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      __ZdlPv();
    }
    pcVar5 = *param_1;
    *param_1 = (char *)0x0;
    if (pcVar5 != (char *)0x0) {
      __ZdlPv();
    }
    return param_1;
  }
  return param_1;
}


