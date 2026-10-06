/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003703ac; end: 0037041b;  */

void FUN_003703ac(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0x40;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  func_0x00370470(lVar1 + 0x20,param_3,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 0037041c; end: 00370577;  */

void FUN_0037041c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 00370578; end: 00370653;  */

void FUN_00370578(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  appuStack_48[0] = &PTR_FUN_009ddc98;
  pppuStack_30 = appuStack_48;
  FUN_003f517c(param_1 + 0x18,3,&UNK_00002710,appuStack_48);
  if (pppuStack_30 == appuStack_48) {
    lVar3 = 4;
    pppuVar1 = appuStack_48;
LAB_003705e0:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else {
    pppuVar1 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar3 = 5;
      goto LAB_003705e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == appuStack_48) {
    lVar3 = 4;
    pppuVar2 = appuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_0037064c;
    lVar3 = 5;
    pppuVar2 = pppuStack_30;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0037064c:
  __Unwind_Resume(pppuVar1);
  return;
}



/* Entry: 00370654; end: 0037065b;  */

void FUN_00370654(void)

{
  return;
}



/* Entry: 0037065c; end: 0037067f;  */

void FUN_0037065c(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009ddc98;
  return;
}



/* Entry: 00370680; end: 00370697;  */

void FUN_00370680(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_009ddc98;
  return;
}



/* Entry: 00370698; end: 003707bb;  */

undefined8 FUN_00370698(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auStack_48 [16];
  char cStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar7 = *param_2;
  uStack_30 = *(undefined8 *)(lVar7 + 0x38);
  plStack_28 = *(long **)(lVar7 + 0x40);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar6 = &uStack_30;
  FUN_003a21a4(puVar6,"grpc.minimal_stack",0x12);
  uVar3 = (uint)puVar6 & 0xffff;
  if (uVar3 < 0x101) {
    uVar3 = 0;
  }
  if ((uVar3 & 0xff) == 0) {
    FUN_003a20f4(auStack_48,&uStack_30,"grpc.service_config",0x13);
    if (cStack_38 != '\0') {
      FUN_003a6bac(lVar7,&PTR_FUN_009ddcf8);
    }
  }
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return 1;
}



/* Entry: 003707bc; end: 003707f7;  */

long FUN_003707bc(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009ddd60);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003707f8; end: 00370803;  */

undefined ** FUN_003707f8(void)

{
  return &PTR_DAT_009ddd60;
}



/* Entry: 00370804; end: 003708d7;  */

void FUN_00370804(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_2 + 8);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  lVar5 = *plVar6;
  if (lVar5 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar4 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6;
      (**(code **)(*plVar6 + 0x20))(plVar6,*(undefined8 *)(param_3 + 0x18));
      goto LAB_00370864;
    }
  }
  plVar4 = (long *)0x0;
LAB_00370864:
  *puVar1 = *(undefined8 *)(param_3 + 0x10);
  puVar1[1] = plVar6;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = plVar4;
  puVar1[3] = puVar1 + 4;
  *(undefined8 **)(*(long *)(param_3 + 0x10) + 0x40) = puVar1 + 1;
  *param_1 = 0;
  return;
}



/* Entry: 003708d8; end: 0037093b;  */

void FUN_003708d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(*plVar5 + 0x40) = 0;
  FUN_0034b20c(plVar5 + 3,plVar5[4]);
  plVar5 = (long *)plVar5[1];
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
                    /* WARNING: Could not recover jumptable at 0x00370938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 0037093c; end: 00370b63;  */

void FUN_0037093c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  long *plStack_40;
  ulong uStack_38;
  
  plVar9 = *(long **)(param_2 + 8);
  *plVar9 = 0;
  lVar4 = *(long *)(param_3 + 8);
  func_0x003a2dcc(lVar4,"grpc.service_config");
  if (lVar4 != 0) {
    uStack_38 = 0;
    uVar8 = *(undefined8 *)(param_3 + 8);
    lVar5 = lVar4;
    _strlen(lVar4);
    FUN_003e8aa0(&plStack_40,uVar8,lVar4,lVar5,&uStack_38);
    if (uStack_38 == 0) {
      plVar6 = (long *)*plVar9;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
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
          (**(code **)(*plVar6 + 8))();
        }
      }
      *plVar9 = (long)plStack_40;
    }
    else {
      uStack_60 = uStack_38;
      if ((uStack_38 & 1) != 0) {
        piVar7 = (int *)(uStack_38 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003be004(auStack_58,&uStack_60);
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/service_config_channel_arg_filter.cc"
                   ,0x40,2,"%s");
      if (cStack_41 < '\0') {
        __ZdlPv(auStack_58[0]);
      }
      if ((uStack_60 & 1) != 0) {
        FUN_0055293c();
      }
      if (plStack_40 != (long *)0x0) {
        plVar9 = plStack_40 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 + -1 == 0) {
          (**(code **)(*plStack_40 + 8))();
        }
      }
    }
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 00370b64; end: 00370b97;  */

void FUN_00370b64(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)**(long **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00370b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 00370b98; end: 00370c1f;  */

undefined8 * FUN_00370b98(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009ddd80;
  FUN_003a2a64(param_1[3]);
  plVar4 = (long *)param_1[2];
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
  return param_1;
}



/* Entry: 00370c20; end: 00370c23;  */

undefined8 * FUN_00370c20(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009ddd80;
  FUN_003a2a64(param_1[3]);
  plVar4 = (long *)param_1[2];
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
  return param_1;
}



/* Entry: 00370c24; end: 00370c37;  */

void FUN_00370c24(void)

{
  FUN_00370b98();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00370c38; end: 00370c9f;  */

void FUN_00370c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = 0;
  FUN_00400ab8();
  FUN_00370ca0(lVar1 + 8,param_3);
  *(undefined4 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x68) = param_2;
  plVar2 = *(long **)(param_1 + 0x10);
  func_0x003a6548(plVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00370c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))();
  return;
}



/* Entry: 00370ca0; end: 00370ce3;  */

long * FUN_00370ca0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  puVar1 = (undefined8 *)*param_1;
  *param_1 = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 00370ce4; end: 00370d37;  */

void FUN_00370ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = 0;
  FUN_00400ab8();
  *(undefined8 *)(lVar1 + 0x70) = param_2;
  *(undefined8 *)(lVar1 + 0x78) = param_3;
  plVar2 = *(long **)(param_1 + 0x10);
  func_0x003a6548(plVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00370d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))();
  return;
}



/* Entry: 00370d38; end: 00370d47;  */

long FUN_00370d38(long param_1)

{
  return *(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x50;
}



/* Entry: 00370d48; end: 00370ea3;  */

long * FUN_00370d48(long *param_1,long *param_2,ulong *param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  long **pplVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  ulong uStack_120;
  ulong auStack_118 [2];
  char cStack_101;
  long *plStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  pplVar8 = &plStack_90;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar2 = *(int *)(*(long *)(*param_2 + 0x10) + 0x38);
  puVar5 = (ulong *)param_2[8];
  do {
    uVar9 = *puVar5;
    uVar7 = uVar9 + ((ulong)(iVar2 + 0x5f) & 0xfffffff0);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar4) {
      *puVar5 = uVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (puVar5[2] < uVar7) {
    func_0x003d6048();
  }
  else {
    puVar5 = (ulong *)((long)puVar5 + uVar9 + 0x30);
  }
  lStack_88 = param_2[1];
  plStack_90 = (long *)*param_2;
  lStack_78 = param_2[3];
  plStack_80 = (long *)param_2[2];
  lStack_68 = param_2[5];
  lStack_70 = param_2[4];
  lStack_58 = param_2[7];
  lStack_60 = param_2[6];
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  *param_2 = 0;
  lStack_48 = param_2[9];
  lStack_50 = param_2[8];
  lStack_40 = param_2[10];
  FUN_00370ea4();
  *param_1 = (long)puVar5;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar10 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  plVar6 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar1 = plStack_90 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plStack_90 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return plVar6;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_00348de0(&plStack_90);
  }
  __Unwind_Resume();
  plVar6[1] = 0;
  *plVar6 = 0;
  *plVar6 = (long)*pplVar8;
  *pplVar8 = (long *)0x0;
  plVar6[7] = 0;
  plVar6[6] = 0;
  plVar6[8] = (long)pplVar8[7];
  plStack_e8 = (long *)(pplVar8 + 2);
  lStack_f0 = (long)pplVar8[9];
  lStack_c8 = (long)pplVar8[10];
  uStack_f8 = 0;
  lStack_e0 = (long)pplVar8[6];
  lStack_d0 = (long)pplVar8[8];
  lStack_d8 = (long)pplVar8[7];
  plStack_100 = plVar6 + 10;
  FUN_003a6824(auStack_118,*(undefined8 *)(*plVar6 + 0x10),1,FUN_00371094,plVar6,&plStack_100);
  uStack_120 = auStack_118[0];
  uVar7 = *param_3;
  if (auStack_118[0] != uVar7) {
    *param_3 = auStack_118[0];
    auStack_118[0] = 0x36;
    if ((uVar7 & 1) == 0) goto LAB_00370f64;
    FUN_0055293c();
    uVar7 = auStack_118[0];
  }
  if ((uVar7 & 1) != 0) {
    FUN_0055293c();
  }
  uStack_120 = *param_3;
LAB_00370f64:
  if (uStack_120 == 0) {
    FUN_003a6958(plVar6 + 10,pplVar8[1]);
    if (*(long *)(*plVar6 + 0x20) != 0) {
      FUN_003a8624(*(long *)(*plVar6 + 0x20) + 0xa0);
    }
  }
  else {
    if ((uStack_120 & 1) != 0) {
      piVar11 = (int *)(uStack_120 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = *piVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_003be004(auStack_118,&uStack_120);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                 ,0xa8,2,"error: %s");
    if (cStack_101 < '\0') {
      __ZdlPv(auStack_118[0]);
    }
    FUN_0033c494(&uStack_120);
  }
  return plVar6;
}



/* Entry: 00370ea4; end: 00371093;  */

long * FUN_00370ea4(long *param_1,long *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  ulong uStack_90;
  ulong auStack_88 [2];
  char cStack_71;
  long *plStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  param_1[1] = 0;
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = param_2[7];
  plStack_58 = param_2 + 2;
  lStack_60 = param_2[9];
  lStack_38 = param_2[10];
  uStack_68 = 0;
  lStack_50 = param_2[6];
  lStack_40 = param_2[8];
  lStack_48 = param_2[7];
  plStack_70 = param_1 + 10;
  FUN_003a6824(auStack_88,*(undefined8 *)(*param_1 + 0x10),1,FUN_00371094,param_1,&plStack_70);
  uStack_90 = auStack_88[0];
  uVar3 = *param_3;
  if (auStack_88[0] != uVar3) {
    *param_3 = auStack_88[0];
    auStack_88[0] = 0x36;
    if ((uVar3 & 1) == 0) goto LAB_00370f64;
    FUN_0055293c();
    uVar3 = auStack_88[0];
  }
  if ((uVar3 & 1) != 0) {
    FUN_0055293c();
  }
  uStack_90 = *param_3;
LAB_00370f64:
  if (uStack_90 == 0) {
    FUN_003a6958(param_1 + 10,param_2[1]);
    if (*(long *)(*param_1 + 0x20) != 0) {
      FUN_003a8624(*(long *)(*param_1 + 0x20) + 0xa0);
    }
  }
  else {
    if ((uStack_90 & 1) != 0) {
      piVar4 = (int *)(uStack_90 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003be004(auStack_88,&uStack_90);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                 ,0xa8,2,"error: %s");
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    FUN_0033c494(&uStack_90);
  }
  return param_1;
}



/* Entry: 00371094; end: 00371107;  */

void FUN_00371094(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  FUN_003a69ac(param_1 + 10,0,param_1[1]);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003710ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
  }
  return;
}



/* Entry: 00371108; end: 00371143;  */

void FUN_00371108(long param_1)

{
  undefined8 *puVar1;
  
  FUN_00371144();
  puVar1 = (undefined8 *)(param_1 + 0x50);
  func_0x003a6564(puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00371140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}



/* Entry: 00371144; end: 003711c3;  */

void FUN_00371144(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  if (((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) && (*(long *)(*param_1 + 0x20) != 0)) {
    param_1[3] = (long)FUN_00371238;
    param_1[4] = (long)param_1;
    param_1[5] = 0;
    if (param_1[7] != 0) {
      FUN_00772044();
      if (param_1[1] == 0) {
        if (param_2 != 0) {
          param_1[1] = param_2;
          return;
        }
      }
      else {
        func_0x007720ac();
      }
      func_0x00772078();
      param_1 = param_1 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = *param_1 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      return;
    }
    lVar3 = *(long *)(param_2 + 8);
    lVar4 = *(long *)(lVar3 + 0x80);
    param_1[6] = *(long *)(lVar3 + 0x90);
    param_1[7] = lVar4;
    *(long **)(lVar3 + 0x90) = param_1 + 2;
  }
  return;
}



/* Entry: 003711c4; end: 00371237;  */

void FUN_003711c4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 0x50);
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



/* Entry: 00371238; end: 003713af;  */

void FUN_00371238(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  ulong uStack_50;
  long *plStack_48;
  int iStack_3c;
  long *plStack_38;
  
  lVar4 = param_1[7];
  if (lVar4 == 0) {
    func_0x007720e0();
    plVar7 = param_1;
    puVar3 = param_2;
    goto LAB_00371378;
  }
  iStack_3c = 0;
  puVar3 = (ulong *)param_1[8];
  plVar8 = (long *)*param_2;
  plStack_48 = plVar8;
  if (((ulong)plVar8 & 1) == 0) {
    if (plVar8 != (long *)0x0) goto LAB_003712a4;
    if ((*(byte *)(lVar4 + 1) >> 2 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulong)*(uint *)(lVar4 + 0x188) | 0x100000000;
    }
    iStack_3c = 2;
    plVar7 = param_1;
    if ((uVar5 & 0x100000000) != 0) {
      iStack_3c = (int)uVar5;
    }
  }
  else {
    piVar6 = (int *)((long)plVar8 + -1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_003712a4:
    plStack_38 = plVar8;
    FUN_003fb7d8(&plStack_38,puVar3,&iStack_3c,0,0,0);
    plVar7 = plStack_38;
    if (((ulong)plStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    if (((ulong)plVar8 & 1) != 0) {
      FUN_0055293c();
      plVar7 = plVar8;
    }
  }
  if (*(long *)(*param_1 + 0x20) != 0) {
    if (iStack_3c == 0) {
      func_0x003a86dc(*(long *)(*param_1 + 0x20) + 0xa0);
    }
    else {
      func_0x003a8684();
    }
    lVar4 = param_1[6];
    uStack_50 = *param_2;
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
    FUN_00342584(&plStack_38,lVar4,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
LAB_00371378:
  func_0x00772114();
  func_0x0040cf10();
  func_0x0040cf10();
  func_0x0040cf10();
  FUN_0033c494(&plStack_38);
  FUN_0033c494(&plStack_48);
  __Unwind_Resume(plVar7);
  plVar7 = (long *)*puVar3;
  *puVar3 = 0;
  FUN_003742e4();
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      lVar4 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  return;
}



/* Entry: 003713b0; end: 0037142f;  */

void FUN_003713b0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  plStack_30 = (long *)*param_2;
  *param_2 = 0;
  plStack_28 = plStack_30;
  FUN_003742e4(param_1,&plStack_30,&plStack_30);
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
  return;
}



/* Entry: 00371430; end: 00371547;  */

void FUN_00371430(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plStack_48;
  
  plVar6 = (long *)*param_1;
  while (plVar6 != param_1 + 1) {
    uVar4 = 0x28;
    __Znwm(0x28);
    plStack_48 = (long *)0x0;
    if (plVar6[5] != 0) {
      plVar1 = (long *)(plVar6[5] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_48 = (long *)plVar6[5];
    }
    FUN_00373d98(uVar4,&plStack_48,param_2,param_3);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 8))();
      }
    }
    plVar1 = (long *)plVar6[1];
    plVar7 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar3 = (long *)*plVar6 != plVar7;
        plVar7 = plVar6;
      } while (bVar3);
    }
    else {
      do {
        plVar6 = plVar1;
        plVar1 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 00371548; end: 00371687;  */

void FUN_00371548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plStack_40;
  undefined8 *puStack_38;
  
  lVar5 = param_1;
  FUN_00374528(param_1,param_3);
  if (param_1 + 8 == lVar5) {
    FUN_00371688(&puStack_38,param_2,param_3);
    puVar6 = puStack_38;
    FUN_0037493c(param_1,param_3,param_3,&puStack_38);
    puVar4 = puStack_38;
    puStack_38 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)();
    }
  }
  else {
    puVar6 = *(undefined8 **)(lVar5 + 0x38);
  }
  plStack_40 = (long *)*param_4;
  *param_4 = 0;
  FUN_003717ac(puVar6,&plStack_40);
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
  return;
}



/* Entry: 00371688; end: 003717ab;  */

void FUN_00371688(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long *plStack_38;
  
  uVar4 = 0x70;
  __Znwm();
  plStack_38 = (long *)*param_2;
  *param_2 = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_002971d4(&uStack_50,*param_3,param_3[1]);
  }
  else {
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    lStack_40 = param_3[2];
  }
  FUN_003745b4(uVar4,&plStack_38,&uStack_50);
  *param_1 = uVar4;
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
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
      (**(code **)(*plStack_38 + 0x10))();
    }
  }
  return;
}



/* Entry: 003717ac; end: 003718eb;  */

void FUN_003717ac(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plStack_40;
  long *plStack_38;
  
  uVar4 = 0x28;
  __Znwm(0x28);
  plStack_38 = (long *)0x0;
  if (*param_2 != 0) {
    plVar1 = (long *)(*param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_38 = (long *)*param_2;
  }
  FUN_00373d98(uVar4,&plStack_38,*(undefined4 *)(param_1 + 0x48),param_1 + 0x50);
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
  plStack_40 = (long *)*param_2;
  *param_2 = 0;
  FUN_003713b0(param_1 + 0x58,&plStack_40);
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
  return;
}



/* Entry: 003718ec; end: 003719f3;  */

void FUN_003718ec(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uStack_38;
  
  plVar3 = param_1;
  uVar4 = param_3;
  FUN_00374528();
  if (param_1 + 1 == plVar3) {
    func_0x007721cc();
    plVar5 = (long *)*plVar3;
    while (plVar5 != plVar3 + 1) {
      FUN_003719f4(plVar5[7],param_2,uVar4);
      plVar1 = (long *)plVar5[1];
      plVar6 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar6[2];
          bVar2 = (long *)*plVar5 != plVar6;
          plVar6 = plVar5;
        } while (bVar2);
      }
      else {
        do {
          plVar5 = plVar1;
          plVar1 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    }
    return;
  }
  uStack_38 = param_3;
  FUN_003743f4(plVar3[7] + 0x58,&uStack_38);
  if (*(long *)(plVar3[7] + 0x68) == 0) {
    func_0x00374bb0(param_1,plVar3);
    FUN_00374168(plVar3 + 4);
    __ZdlPv(plVar3);
  }
  return;
}



/* Entry: 003719f4; end: 00371aef;  */

void FUN_003719f4(long *param_1,int param_2,ulong *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 *puStack_28;
  
  if (param_2 != 2) {
    *(int *)(param_1 + 9) = param_2;
    uVar5 = param_1[10];
    uVar8 = *param_3;
    if (uVar8 != uVar5) {
      if ((uVar8 & 1) != 0) {
        piVar9 = (int *)(uVar8 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = *piVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar8 = *param_3;
      }
      param_1[10] = uVar8;
      if ((uVar5 & 1) != 0) {
        FUN_0055293c();
      }
    }
    FUN_00371430(param_1 + 0xb,(int)param_1[9],param_3);
    puVar6 = (undefined8 *)param_1[8];
    param_1[8] = 0;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
    }
    return;
  }
  if ((int)param_1[9] != 1) {
    *(undefined4 *)(param_1 + 9) = 1;
    uVar5 = param_1[10];
    uVar8 = *param_3;
    if (uVar8 != uVar5) {
      if ((uVar8 & 1) != 0) {
        piVar9 = (int *)(uVar8 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = *piVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar8 = *param_3;
      }
      param_1[10] = uVar8;
      if ((uVar5 & 1) != 0) {
        FUN_0055293c();
      }
    }
    FUN_00371430(param_1 + 0xb,(int)param_1[9],param_3);
  }
  if (param_1[8] == 0) {
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      FUN_002971d4(&lStack_40,param_1[5],param_1[6]);
    }
    else {
      lStack_38 = param_1[6];
      lStack_40 = param_1[5];
      lStack_30 = param_1[7];
    }
    lVar10 = param_1[4];
    plStack_48 = (long *)0x0;
    if (*(long *)(lVar10 + 0x210) != 0) {
      plVar1 = (long *)(*(long *)(lVar10 + 0x210) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_48 = *(long **)(lVar10 + 0x210);
      lVar10 = param_1[4];
    }
    uVar2 = *(undefined8 *)(lVar10 + 0x138);
    if (*(long *)(lVar10 + 0x140) == 0) {
      plStack_50 = (long *)0x0;
    }
    else {
      plVar1 = (long *)(*(long *)(lVar10 + 0x140) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_50 = *(long **)(lVar10 + 0x140);
    }
    plVar1 = param_1 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_58 = param_1;
    FUN_003596f0(&puStack_28,&lStack_40,&plStack_48,uVar2,&plStack_50,&plStack_58);
    puVar6 = puStack_28;
    puStack_28 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)param_1[8];
    param_1[8] = (long)puVar6;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)();
      puVar6 = puStack_28;
      puStack_28 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)();
      }
    }
    if (plStack_58 == (long *)0x0) goto LAB_00374020;
    plVar1 = plStack_58 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    param_1 = plStack_58;
    if (lVar10 + -1 != 0) goto LAB_00374020;
  }
  else {
    func_0x00772364();
  }
  (**(code **)(*param_1 + 0x10))();
LAB_00374020:
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plStack_50 + 8))();
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plStack_48 + 8))();
    }
  }
  if (lStack_30 < 0) {
    __ZdlPv(lStack_40);
  }
  return;
}



/* Entry: 00371af0; end: 00371b53;  */

void FUN_00371af0(long param_1,undefined8 param_2)

{
  func_0x00339d8c(param_1 + 0x10);
  FUN_00371b54(param_1 + 0x50,param_2);
  func_0x00339da8(param_1 + 0x10);
  return;
}



/* Entry: 00371b54; end: 00371beb;  */

void FUN_00371b54(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != lVar3) {
    uVar2 = (*(long *)(param_1 + 0x10) - lVar3) * 0x20 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar2 == uVar4) {
    FUN_00374c20(param_1);
    lVar3 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar1 = (undefined4 *)
           (*(long *)(lVar3 + (uVar4 >> 5 & 0x7fffffffffffff8)) + (uVar4 & 0xff) * 0x10);
  *puVar1 = *param_2;
  *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0x36;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 00371bec; end: 00371cdf;  */

void FUN_00371bec(undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  int *piVar6;
  
  func_0x00339d8c(param_2 + 0x10);
  if (*(long *)(param_2 + 0x78) != 0) {
    puVar1 = (undefined4 *)
             (*(long *)(*(long *)(param_2 + 0x58) +
                       (*(ulong *)(param_2 + 0x70) >> 5 & 0x7fffffffffffff8)) +
             (*(ulong *)(param_2 + 0x70) & 0xff) * 0x10);
    *param_1 = *puVar1;
    uVar5 = *(ulong *)(puVar1 + 2);
    *(ulong *)(param_1 + 2) = uVar5;
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
    FUN_00371ce0(param_2 + 0x50);
    func_0x00339da8(param_2 + 0x10);
    return;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
               ,0x240,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x371cb0);
  (*pcVar4)();
}



/* Entry: 00371ce0; end: 00371d37;  */

bool FUN_00371ce0(long param_1)

{
  bool bVar1;
  
  FUN_00355c14(param_1 + 0x28,
               *(long *)(*(long *)(param_1 + 8) +
                        (*(ulong *)(param_1 + 0x20) >> 5 & 0x7fffffffffffff8)) +
               (*(ulong *)(param_1 + 0x20) & 0xff) * 0x10);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar1 = 0x1ff < *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x100;
  }
  return bVar1;
}



/* Entry: 00371d38; end: 003723d7;  */

ulong * FUN_00371d38(ulong *param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  bool bVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  ulong unaff_x28;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uStack_158;
  ulong *puStack_150;
  ulong *puStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  char *pcStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  *param_1 = (ulong)&PTR_FUN_009ddda0;
  param_1[1] = 0x100000000;
  param_1[2] = 0;
  puVar8 = param_1 + 3;
  puVar4 = puVar8;
  FUN_003759e0();
  func_0x003c3ee0();
  puVar14 = param_1 + 0x28;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = (ulong)puVar4;
  uVar10 = *param_3;
  *param_3 = 0;
  param_1[0x2a] = uVar10;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  puStack_110 = param_1 + 0x32;
  FUN_00339d50();
  uStack_78 = 120000;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((long)param_1 + 0x1d4) = 0;
  puStack_118 = param_1 + 0x3d;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = (ulong)puStack_118;
  param_1[0x42] = 0;
  param_1[0x3f] = (ulong)(param_1 + 0x40);
  param_1[0x40] = 0;
  param_1[0x29] = (ulong)&UNK_00004e20;
  param_1[0x41] = 0;
  if (param_4 == (ulong *)0x0) {
    uStack_88 = 0x3ff999999999999a;
    uStack_80 = 0x3fc999999999999a;
    uVar10 = 1000;
  }
  else {
    uStack_e8 = 120000;
    puStack_108 = puVar14;
    puStack_100 = puVar8;
    if (*param_4 == 0) {
      bVar13 = false;
      uVar10 = 1000;
    }
    else {
      bVar13 = false;
      uVar16 = 0;
      uVar10 = 1000;
      lVar15 = 8;
      do {
        puVar6 = (undefined8 *)(param_4[1] + lVar15) + -1;
        uVar12 = *(undefined8 *)(param_4[1] + lVar15);
        uVar5 = uVar12;
        _strcmp(uVar12,"grpc.testing.fixed_reconnect_backoff_ms");
        if ((int)uVar5 == 0) {
          puVar14 = (ulong *)((ulong)puVar14 & 0xffffffff00000000 | 0x7fffffff);
          FUN_003a2c94(puVar6,uVar10 & 0xffffffff | 0x6400000000,puVar14);
          uVar10 = (ulong)(int)puVar6;
          param_1[0x29] = uVar10;
          bVar13 = true;
          uStack_e8 = uVar10;
        }
        else {
          uVar5 = uVar12;
          _strcmp(uVar12,"grpc.min_reconnect_backoff_ms");
          if ((int)uVar5 == 0) {
            unaff_x28 = unaff_x28 & 0xffffffff00000000 | 0x7fffffff;
            FUN_003a2c94(puVar6,(ulong)(uint)param_1[0x29] | 0x6400000000,unaff_x28);
            bVar13 = false;
            param_1[0x29] = (long)(int)puVar6;
          }
          else {
            uVar5 = uVar12;
            _strcmp(uVar12,"grpc.max_reconnect_backoff_ms");
            if ((int)uVar5 == 0) {
              uStack_f0 = uStack_f0 & 0xffffffff00000000 | 0x7fffffff;
              FUN_003a2c94(puVar6,uStack_e8 & 0xffffffff | 0x6400000000);
              bVar13 = false;
              uStack_e8 = (long)(int)puVar6;
            }
            else {
              _strcmp(uVar12,"grpc.initial_reconnect_backoff_ms");
              if ((int)uVar12 == 0) {
                uStack_f8 = uStack_f8 & 0xffffffff00000000 | 0x7fffffff;
                FUN_003a2c94(puVar6,uVar10 & 0xffffffff | 0x6400000000);
                bVar13 = false;
                uVar10 = (ulong)(int)puVar6;
              }
            }
          }
        }
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + 0x20;
      } while (uVar16 < *param_4);
    }
    bVar13 = !bVar13;
    uStack_80 = -(ulong)((long)((ulong)bVar13 << 0x3f) < 0) & 0x3fc999999999999a;
    uStack_88 = -(ulong)((long)((ulong)CONCAT14(bVar13,(uint)bVar13) << 0x3f) < 0) & 0x999999999999a
                ^ 0x3ff0000000000000;
    uStack_78 = uStack_e8;
    puVar8 = puStack_100;
    puVar14 = puStack_108;
  }
  uStack_90 = uVar10;
  func_0x003a15f0(param_1 + 0x43,&uStack_90);
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0xffffffff;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = (ulong)(param_1 + 0x71);
  FUN_003f8b94();
  puVar4 = param_1 + 0x15;
  uVar17 = puVar8[9];
  uVar16 = puVar8[8];
  uVar10 = puVar8[10];
  param_1[0x20] = puVar8[0xb];
  param_1[0x1f] = uVar10;
  uVar10 = puVar8[0xc];
  uVar19 = puVar8[0xf];
  uVar18 = puVar8[0xe];
  param_1[0x22] = puVar8[0xd];
  param_1[0x21] = uVar10;
  param_1[0x24] = uVar19;
  param_1[0x23] = uVar18;
  uVar19 = puVar8[1];
  uVar18 = *puVar8;
  uVar10 = puVar8[2];
  param_1[0x18] = puVar8[3];
  param_1[0x17] = uVar10;
  uVar10 = puVar8[4];
  uVar21 = puVar8[7];
  uVar20 = puVar8[6];
  param_1[0x1a] = puVar8[5];
  param_1[0x19] = uVar10;
  param_1[0x1c] = uVar21;
  param_1[0x1b] = uVar20;
  param_1[0x1e] = uVar17;
  param_1[0x1d] = uVar16;
  param_1[0x2f] = (ulong)FUN_003723d8;
  param_1[0x30] = (ulong)param_1;
  param_1[0x31] = 0;
  *(int *)(param_1 + 0x25) = (int)puVar8[0x10];
  param_1[0x16] = uVar19;
  param_1[0x15] = uVar18;
  puStack_c0 = (ulong *)0x0;
  puStack_b8 = (ulong *)0x0;
  puVar9 = puVar4;
  func_0x00360d78(puVar4,param_4,&puStack_b8,&puStack_c0);
  if ((int)puVar9 != 0) {
    if (puStack_b8 == (ulong *)0x0) {
      pcStack_120 = "new_address != nullptr";
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                   ,0x29e,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x372208);
      (*pcVar3)();
    }
    uVar10 = *puStack_b8;
    param_1[0x16] = puStack_b8[1];
    *puVar4 = uVar10;
    uVar10 = puStack_b8[2];
    uVar16 = puStack_b8[3];
    uVar18 = puStack_b8[5];
    uVar17 = puStack_b8[4];
    uVar19 = puStack_b8[6];
    uVar21 = puStack_b8[9];
    uVar20 = puStack_b8[8];
    param_1[0x1c] = puStack_b8[7];
    param_1[0x1b] = uVar19;
    param_1[0x1e] = uVar21;
    param_1[0x1d] = uVar20;
    param_1[0x18] = uVar16;
    param_1[0x17] = uVar10;
    param_1[0x1a] = uVar18;
    param_1[0x19] = uVar17;
    uVar10 = puStack_b8[10];
    uVar16 = puStack_b8[0xb];
    uVar18 = puStack_b8[0xd];
    uVar17 = puStack_b8[0xc];
    uVar20 = puStack_b8[0xf];
    uVar19 = puStack_b8[0xe];
    *(int *)(param_1 + 0x25) = (int)puStack_b8[0x10];
    param_1[0x22] = uVar18;
    param_1[0x21] = uVar17;
    param_1[0x24] = uVar20;
    param_1[0x23] = uVar19;
    param_1[0x20] = uVar16;
    param_1[0x1f] = uVar10;
    FUN_00338cb8();
  }
  puVar4 = puStack_c0;
  if (puStack_c0 == (ulong *)0x0) {
    FUN_003a277c();
    puVar4 = param_4;
  }
  param_1[0x26] = (ulong)puVar4;
  func_0x003a2e80();
  if ((int)puVar4 != 0) {
    func_0x003a2d4c(param_1[0x26],"grpc.max_channel_trace_event_memory_per_node",0x1000,0x7fffffff);
    FUN_003a0d08(&uStack_90,puVar8);
    if (uStack_90 == 0) {
      uStack_d8 = uStack_80;
      uStack_e0 = uStack_88;
      uStack_d0 = uStack_78;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_88 = 0;
    }
    else {
      FUN_00353254(&uStack_e0,"<unknown address type>");
    }
    uVar10 = 0x138;
    __Znwm();
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    uStack_a0 = uStack_d0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    FUN_003574fc();
    if ((long)uStack_a0 < 0) {
      __ZdlPv(uStack_b0);
    }
    plVar7 = (long *)*puVar14;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar15 = *plVar1;
        cVar2 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    *puVar14 = uVar10;
    if ((long)uStack_d0 < 0) {
      __ZdlPv(uStack_e0);
    }
    FUN_0035d18c(&uStack_90);
    uVar10 = *puVar14;
    FUN_003ec14c(&uStack_90,"subchannel created");
    puVar4 = (ulong *)(uVar10 + 0xc0);
    FUN_003a75b4(puVar4,1,&uStack_90);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
    ___stack_chk_fail();
    FUN_0035d18c(&uStack_90);
    func_0x00375420(param_1 + 0x70,param_1[0x71]);
    plVar7 = (long *)param_1[0x42];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar15 = *plVar1;
        cVar2 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    FUN_00374120(param_1 + 0x3f,param_1[0x40]);
    puVar9 = (ulong *)param_1[0x3d];
    FUN_003741b8(param_1 + 0x3c);
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3c] = (ulong)puStack_118;
    FUN_0033c494(param_1 + 0x3b);
    func_0x00339d70(puStack_110);
    plVar7 = (long *)param_1[0x2d];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar15 = *plVar1;
        cVar2 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    FUN_003724f8(param_1 + 0x2a);
    plVar7 = (long *)*puVar14;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar15 = *plVar1;
        cVar2 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    FUN_00375958(puVar8);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar15 = *plVar1;
        cVar2 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    __Unwind_Resume(puVar4);
    puVar8 = puVar4;
    func_0x0040cf10();
    pcStack_128 = FUN_003723d8;
    puVar14 = (ulong *)puVar8[0x2c];
    puStack_150 = puVar4;
    puStack_148 = param_1 + 0x3b;
    puStack_140 = param_1 + 0x2a;
    puStack_138 = param_1;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x00339d8c(puVar8 + 0x32);
    uVar10 = *puVar9;
    if ((uVar10 & 1) != 0) {
      piVar11 = (int *)(uVar10 - 1);
      do {
        cVar2 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar13) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_158 = uVar10;
    FUN_003734dc(puVar8,&uStack_158);
    if ((uVar10 & 1) != 0) {
      FUN_0055293c(uVar10);
    }
    func_0x00339da8(puVar8 + 0x32);
    FUN_003a2a64(puVar14);
    puVar4 = puVar8 + 1;
    do {
      uVar10 = *puVar4;
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar13) {
        *puVar4 = uVar10 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar10 - 1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00372494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*puVar8 + 0x10))(puVar8);
      return puVar8;
    }
    return puVar14;
  }
  return param_1;
}



/* Entry: 003723d8; end: 003724f7;  */

void FUN_003723d8(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  ulong uStack_38;
  
  lVar5 = param_1[0x2c];
  func_0x00339d8c(param_1 + 0x32);
  uVar6 = *param_2;
  if ((uVar6 & 1) != 0) {
    piVar4 = (int *)(uVar6 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = *piVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_38 = uVar6;
  FUN_003734dc(param_1,&uStack_38);
  if ((uVar6 & 1) != 0) {
    FUN_0055293c(uVar6);
  }
  func_0x00339da8(param_1 + 0x32);
  FUN_003a2a64(lVar5);
  plVar1 = param_1 + 1;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00372494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 003724f8; end: 00372533;  */

long * FUN_003724f8(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 00372534; end: 0037273f;  */

long * FUN_00372534(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *unaff_x19;
  long *unaff_x20;
  long lVar9;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar4 = param_1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    *plVar4 = (long)&PTR_FUN_009ddda0;
    lVar9 = plVar4[0x28];
    if (lVar9 != 0) {
      FUN_003ec14c((undefined1 *)((long)register0x00000008 + -0x48),"Subchannel destroyed");
      FUN_003a75b4(lVar9 + 0xc0,1,(undefined1 *)((long)register0x00000008 + -0x48));
      FUN_003575a4(plVar4[0x28],4);
    }
    FUN_003a2a64(plVar4[0x26]);
    puVar5 = (undefined8 *)plVar4[0x2a];
    plVar4[0x2a] = 0;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
    func_0x003c3ef0(plVar4[0x27]);
    FUN_003f8e14();
    func_0x00375420(plVar4 + 0x70,plVar4[0x71]);
    plVar6 = (long *)plVar4[0x42];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    FUN_00374120(plVar4 + 0x3f,plVar4[0x40]);
    unaff_x20 = plVar4 + 0x3d;
    lVar9 = plVar4[0x3d];
    FUN_003741b8(plVar4 + 0x3c);
    plVar4[0x3d] = 0;
    plVar4[0x3e] = 0;
    plVar4[0x3c] = (long)unaff_x20;
    if ((plVar4[0x3b] & 1U) != 0) {
      FUN_0055293c();
    }
    func_0x00339d70(plVar4 + 0x32);
    plVar6 = (long *)plVar4[0x2d];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    puVar5 = (undefined8 *)plVar4[0x2a];
    plVar4[0x2a] = 0;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
    plVar6 = (long *)plVar4[0x28];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    FUN_00375958(plVar4 + 3);
    param_1 = (long *)plVar4[2];
    if (param_1 != (long *)0x0) {
      plVar6 = param_1 + 1;
      do {
        lVar8 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*param_1 + 8))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    iVar7 = (int)lVar9;
    while (iVar7 != 0) {
      func_0x0040cf10();
      iVar7 = (int)lVar9;
    }
    unaff_x30 = FUN_00372740;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    unaff_x19 = plVar4;
  }
  return plVar4;
}



/* Entry: 00372740; end: 00372743;  */

long * FUN_00372740(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *unaff_x19;
  long lVar9;
  long *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar6 = param_1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    *plVar6 = (long)&PTR_FUN_009ddda0;
    lVar9 = plVar6[0x28];
    if (lVar9 != 0) {
      FUN_003ec14c((undefined1 *)((long)register0x00000008 + -0x48),"Subchannel destroyed");
      FUN_003a75b4(lVar9 + 0xc0,1,(undefined1 *)((long)register0x00000008 + -0x48));
      FUN_003575a4(plVar6[0x28],4);
    }
    FUN_003a2a64(plVar6[0x26]);
    puVar4 = (undefined8 *)plVar6[0x2a];
    plVar6[0x2a] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)();
    }
    func_0x003c3ef0(plVar6[0x27]);
    FUN_003f8e14();
    func_0x00375420(plVar6 + 0x70,plVar6[0x71]);
    plVar5 = (long *)plVar6[0x42];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    FUN_00374120(plVar6 + 0x3f,plVar6[0x40]);
    unaff_x20 = plVar6 + 0x3d;
    lVar9 = plVar6[0x3d];
    FUN_003741b8(plVar6 + 0x3c);
    plVar6[0x3d] = 0;
    plVar6[0x3e] = 0;
    plVar6[0x3c] = (long)unaff_x20;
    if ((plVar6[0x3b] & 1U) != 0) {
      FUN_0055293c();
    }
    func_0x00339d70(plVar6 + 0x32);
    plVar5 = (long *)plVar6[0x2d];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    puVar4 = (undefined8 *)plVar6[0x2a];
    plVar6[0x2a] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)();
    }
    plVar5 = (long *)plVar6[0x28];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    FUN_00375958(plVar6 + 3);
    param_1 = (long *)plVar6[2];
    if (param_1 != (long *)0x0) {
      plVar5 = param_1 + 1;
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
        (**(code **)(*param_1 + 8))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    iVar7 = (int)lVar9;
    while (iVar7 != 0) {
      func_0x0040cf10();
      iVar7 = (int)lVar9;
    }
    unaff_x30 = FUN_00372740;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    unaff_x19 = plVar6;
  }
  return plVar6;
}



/* Entry: 00372744; end: 00372757;  */

void FUN_00372744(void)

{
  FUN_00372534();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00372758; end: 003729c7;  */

void FUN_00372758(long *param_1,undefined8 param_2,undefined8 param_3,long **param_4)

{
  long **pplVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  long **pplVar13;
  ulong *puVar14;
  undefined8 *extraout_x8;
  long lVar15;
  ulong uVar16;
  char *pcStack_248;
  undefined1 auStack_240 [32];
  long *plStack_220;
  long **pplStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined8 *puStack_1f0;
  undefined1 auStack_1e8 [144];
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  char *pcStack_110;
  ulong *puStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long **pplStack_e0;
  long alStack_d8 [18];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pplVar13 = param_4;
  pplStack_e0 = param_4;
  FUN_003758fc(alStack_d8);
  FUN_00375cbc();
  if (param_4 == (long **)0x0) {
    pcStack_110 = "subchannel_pool != nullptr";
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                 ,0x2ce,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x372934);
    (*pcVar6)();
  }
  plVar11 = alStack_d8;
  (*(code *)(*param_4)[4])(&plStack_e8,param_4);
  if (plStack_e8 == (long *)0x0) {
    FUN_003729c8(&plStack_f0,alStack_d8,param_2,&pplStack_e0);
    plVar11 = plStack_f0;
    if (plStack_e8 != (long *)0x0) {
      puVar14 = (ulong *)(plStack_e8 + 1);
      do {
        uVar16 = *puVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar4) {
          *puVar14 = uVar16 - 0xffffffff;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar16 >> 0x20 == 1) {
        puStack_100 = puVar14;
        (**(code **)*plStack_e8)(plStack_e8);
        puVar14 = puStack_100;
      }
      do {
        uVar16 = *puVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar4) {
          *puVar14 = uVar16 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar16 - 1 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      }
    }
    plStack_f0 = (long *)0x0;
    plStack_e8 = plVar11;
    FUN_0035615c(&plStack_f0);
    if (plStack_e8 != (long *)0x0) {
      plVar11 = plStack_e8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 0x100000000;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_f8 = plStack_e8;
    plVar11 = plStack_e8 + 3;
    pplVar13 = &plStack_f8;
    (*(code *)(*param_4)[2])(param_1,param_4);
    FUN_0035615c(&plStack_f8);
    param_1 = (long *)*param_1;
    if (param_1 == plStack_e8) {
      pplVar1 = param_4 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
        if (bVar4) {
          *pplVar1 = (long *)((long)*pplVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7 = (long *)param_1[2];
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 1;
        do {
          lVar15 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      param_1[2] = (long)param_4;
    }
  }
  else {
    *param_1 = (long)plStack_e8;
    plStack_e8 = (long *)0x0;
  }
  FUN_0035615c(&plStack_e8);
  plVar7 = alStack_d8;
  FUN_00375958();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar11 != 0) {
    func_0x0040cf10();
    FUN_0035615c(&plStack_f8);
    FUN_0035615c(&plStack_e8);
    FUN_00375958(alStack_d8);
  }
  __Unwind_Resume(plVar7);
  pcStack_118 = FUN_003729c8;
  lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar8 = 0x398;
  puStack_120 = &stack0xfffffffffffffff0;
  __Znwm();
  FUN_003759e0(auStack_1e8,plVar7);
  puStack_1f0 = (undefined8 *)*plVar11;
  *plVar11 = 0;
  puVar12 = auStack_1e8;
  FUN_00371d38(uVar8,puVar12,&puStack_1f0,*pplVar13);
  puVar5 = puStack_1f0;
  *extraout_x8 = uVar8;
  puStack_1f0 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
  }
  puVar9 = auStack_1e8;
  FUN_00375958();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar12 == 0) {
    __Unwind_Resume(puVar9);
  }
  puVar10 = puVar9;
  func_0x0040cf10();
  pcStack_1f8 = FUN_00372adc;
  plStack_220 = plVar11;
  pplStack_218 = pplVar13;
  uStack_210 = uVar8;
  puStack_208 = puVar9;
  ppuStack_200 = &puStack_120;
  func_0x00339d8c(puVar10 + 400);
  if (*(int *)(puVar10 + 0x378) < (int)puVar12) {
    *(int *)(puVar10 + 0x378) = (int)puVar12;
    func_0x003a2ed0(auStack_240,"grpc.keepalive_time_ms",puVar12);
    pcStack_248 = "grpc.keepalive_time_ms";
    uVar8 = *(undefined8 *)(puVar10 + 0x130);
    FUN_003a24dc(uVar8,&pcStack_248,1,auStack_240,1);
    FUN_003a2a64(*(undefined8 *)(puVar10 + 0x130));
    *(undefined8 *)(puVar10 + 0x130) = uVar8;
  }
  func_0x00339da8(puVar10 + 400);
  return;
}



/* Entry: 003729c8; end: 00372adb;  */

void FUN_003729c8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcStack_138;
  undefined1 auStack_130 [32];
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 *puStack_e0;
  undefined1 auStack_d8 [144];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 0x398;
  __Znwm();
  FUN_003759e0(auStack_d8,param_2);
  puStack_e0 = (undefined8 *)*param_3;
  *param_3 = 0;
  puVar5 = auStack_d8;
  FUN_00371d38(uVar2,puVar5,&puStack_e0,*param_4);
  puVar1 = puStack_e0;
  *param_1 = uVar2;
  puStack_e0 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  puVar3 = auStack_d8;
  FUN_00375958();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar5 == 0) {
    __Unwind_Resume(puVar3);
  }
  puVar4 = puVar3;
  func_0x0040cf10();
  pcStack_e8 = FUN_00372adc;
  puStack_110 = param_3;
  puStack_108 = param_4;
  uStack_100 = uVar2;
  puStack_f8 = puVar3;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00339d8c(puVar4 + 400);
  if (*(int *)(puVar4 + 0x378) < (int)puVar5) {
    *(int *)(puVar4 + 0x378) = (int)puVar5;
    func_0x003a2ed0(auStack_130,"grpc.keepalive_time_ms",puVar5);
    pcStack_138 = "grpc.keepalive_time_ms";
    uVar2 = *(undefined8 *)(puVar4 + 0x130);
    FUN_003a24dc(uVar2,&pcStack_138,1,auStack_130,1);
    FUN_003a2a64(*(undefined8 *)(puVar4 + 0x130));
    *(undefined8 *)(puVar4 + 0x130) = uVar2;
  }
  func_0x00339da8(puVar4 + 400);
  return;
}



/* Entry: 00372adc; end: 00372b93;  */

void FUN_00372adc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcStack_58;
  undefined1 auStack_50 [32];
  
  func_0x00339d8c(param_1 + 400);
  if (*(int *)(param_1 + 0x378) < (int)param_2) {
    *(int *)(param_1 + 0x378) = (int)param_2;
    func_0x003a2ed0(auStack_50,"grpc.keepalive_time_ms",param_2);
    pcStack_58 = "grpc.keepalive_time_ms";
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    FUN_003a24dc(uVar1,&pcStack_58,1,auStack_50,1);
    FUN_003a2a64(*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = uVar1;
  }
  func_0x00339da8(param_1 + 400);
  return;
}



/* Entry: 00372b94; end: 00372b9b;  */

undefined8 FUN_00372b94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 00372b9c; end: 00372e07;  */

void FUN_00372b9c(long *param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x00339d8c(param_1 + 0x32);
  plVar3 = (long *)*param_3;
  (**(code **)(*plVar3 + 0x18))();
  if (plVar3 != (long *)0x0) {
    func_0x003c3f20(param_1[0x27]);
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    uVar4 = 0x28;
    __Znwm(0x28);
    plStack_38 = (long *)0x0;
    if (*param_3 != 0) {
      plVar3 = (long *)(*param_3 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_38 = (long *)*param_3;
    }
    FUN_00373d98(uVar4,&plStack_38,*(undefined4 *)((long)param_1 + 0x1d4),param_1 + 0x3b);
    if (plStack_38 != (long *)0x0) {
      plVar3 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 8))();
      }
    }
    plStack_40 = (long *)*param_3;
    *param_3 = 0;
    FUN_003713b0(param_1 + 0x3c,&plStack_40);
    if (plStack_40 == (long *)0x0) goto LAB_00372d10;
    plVar3 = plStack_40 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 != 1) goto LAB_00372d10;
    lVar5 = 1;
    plVar3 = plStack_40;
  }
  else {
    plVar3 = param_1 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_50 = (long *)*param_3;
    *param_3 = 0;
    plStack_48 = param_1;
    FUN_00371548(param_1 + 0x3f,&plStack_48,param_2,&plStack_50);
    if (plStack_50 != (long *)0x0) {
      plVar3 = plStack_50 + 1;
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
        (**(code **)(*plStack_50 + 8))();
      }
    }
    if (plStack_48 == (long *)0x0) goto LAB_00372d10;
    plVar3 = plStack_48 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 != 1) goto LAB_00372d10;
    lVar5 = 2;
    plVar3 = plStack_48;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_00372d10:
  func_0x00339da8(param_1 + 0x32);
  return;
}



/* Entry: 00372e08; end: 00372eb7;  */

void FUN_00372e08(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plStack_38;
  
  func_0x00339d8c(param_1 + 400);
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x18))();
  if (plVar1 != (long *)0x0) {
    func_0x003c3f30(*(undefined8 *)(param_1 + 0x138));
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    plStack_38 = param_3;
    FUN_003743f4(param_1 + 0x1e0,&plStack_38);
  }
  else {
    FUN_003718ec(param_1 + 0x1f8,param_2,param_3);
  }
  func_0x00339da8(param_1 + 400);
  return;
}



/* Entry: 00372eb8; end: 00372f13;  */

void FUN_00372eb8(long param_1)

{
  func_0x00339d8c(param_1 + 400);
  if (*(int *)(param_1 + 0x1d4) == 0) {
    FUN_00372f14(param_1);
  }
  func_0x00339da8(param_1 + 400);
  return;
}



/* Entry: 00372f14; end: 0037302b;  */

void FUN_00372f14(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar6 = param_1[0x29];
  puVar3 = param_1;
  func_0x003c1f6c();
  uVar4 = *puVar3;
  FUN_003c1e28();
  uVar5 = 0x7fffffffffffffff;
  if ((uVar6 != 0x7fffffffffffffff && uVar4 != 0x7fffffffffffffff) &&
     (uVar5 = 0x8000000000000000, uVar6 != 0x8000000000000000 && uVar4 != 0x8000000000000000)) {
    if ((long)uVar4 < 1) {
      if ((long)uVar6 < (long)(-0x8000000000000000 - uVar4)) goto LAB_00372f88;
    }
    else if ((long)(uVar4 ^ 0x7fffffffffffffff) < (long)uVar6) {
      uVar5 = 0x7fffffffffffffff;
      goto LAB_00372f88;
    }
    uVar5 = uVar4 + uVar6;
  }
LAB_00372f88:
  puVar3 = param_1 + 0x43;
  FUN_003a15f4();
  param_1[0x6c] = (ulong)puVar3;
  puStack_50 = (ulong *)0x0;
  FUN_00373374(param_1,1,&puStack_50);
  if (((ulong)puStack_50 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_50 = param_1 + 0x15;
  uStack_38 = param_1[0x26];
  uStack_48 = param_1[0x27];
  uStack_40 = param_1[0x6c];
  if ((long)param_1[0x6c] <= (long)uVar5) {
    uStack_40 = uVar5;
  }
  puVar3 = param_1 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *puVar3 = *puVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  (**(code **)(*(long *)param_1[0x2a] + 0x18))
            ((long *)param_1[0x2a],&puStack_50,param_1 + 0x2b,param_1 + 0x2e);
  return;
}



/* Entry: 0037302c; end: 00373153;  */

void FUN_0037302c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  
  plVar1 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x00339d8c(param_1 + 0x32);
  plVar4 = param_1 + 0x43;
  FUN_003a15dc();
  iVar5 = *(int *)((long)param_1 + 0x1d4);
  if (iVar5 == 3) {
    FUN_003b2134();
    (**(code **)(*plVar4 + 0x58))();
    if ((int)plVar4 != 0) {
      FUN_00373154(param_1);
      goto LAB_003730b8;
    }
    iVar5 = *(int *)((long)param_1 + 0x1d4);
  }
  if (iVar5 == 1) {
    func_0x003c1f6c();
    lVar6 = *plVar4;
    FUN_003c1e28();
    param_1[0x6c] = lVar6;
  }
LAB_003730b8:
  func_0x00339da8(param_1 + 0x32);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003730fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 00373154; end: 0037321f;  */

void FUN_00373154(long param_1)

{
  ulong auStack_38 [2];
  char cStack_21;
  
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    FUN_00375a84(auStack_38,param_1 + 0x18);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                 ,899,1,"subchannel %p %s: backoff delay elapsed, reporting IDLE");
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
    auStack_38[0] = 0;
    FUN_00373374(param_1,0,auStack_38);
    if ((auStack_38[0] & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 00373220; end: 00373373;  */

void FUN_00373220(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,param_1 + 0x18,param_1);
    plVar5 = *(long **)(param_1 + 0x10);
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
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  func_0x00339d8c(param_1 + 400);
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    puVar6 = *(undefined8 **)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x150) = 0;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
    }
    plVar5 = *(long **)(param_1 + 0x210);
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
    *(undefined8 *)(param_1 + 0x210) = 0;
    FUN_00374120(param_1 + 0x1f8,*(undefined8 *)(param_1 + 0x200));
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(long *)(param_1 + 0x1f8) = param_1 + 0x200;
    *(undefined8 *)(param_1 + 0x200) = 0;
    func_0x00339da8(param_1 + 400);
    return;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
               ,0x335,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x373334);
  (*pcVar4)();
}



/* Entry: 00373374; end: 00373487;  */

void FUN_00373374(long param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar5 = (uint)param_2;
  *(uint *)(param_1 + 0x1d4) = uVar5;
  uVar3 = *(ulong *)(param_1 + 0x1d8);
  uVar6 = *param_3;
  if (uVar6 != uVar3) {
    if ((uVar6 & 1) != 0) {
      piVar7 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar6 = *param_3;
    }
    *(ulong *)(param_1 + 0x1d8) = uVar6;
    if ((uVar3 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    FUN_003575a4(*(long *)(param_1 + 0x140),param_2);
    if (4 < uVar5) goto LAB_00373470;
    lVar8 = *(long *)(param_1 + 0x140);
    FUN_003ec14c(auStack_58,(&PTR_s_Subchannel_state_change_to_IDLE_009ddf60)[(int)uVar5]);
    FUN_003a75b4(lVar8 + 0xc0,1,auStack_58);
  }
  FUN_00371430(param_1 + 0x1e0,param_2,param_3);
  func_0x00371974(param_1 + 0x1f8,param_2,param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
LAB_00373470:
  pcVar4 = "return \"UNKNOWN\"";
  func_0x00338df0("return \"UNKNOWN\"",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                  ,0x365);
  func_0x00339d8c(pcVar4 + 400);
  FUN_00373154(pcVar4);
  func_0x00339da8(pcVar4 + 400);
  return;
}



/* Entry: 00373488; end: 003734db;  */

void FUN_00373488(long param_1)

{
  func_0x00339d8c(param_1 + 400);
  FUN_00373154(param_1);
  func_0x00339da8(param_1 + 400);
  return;
}



/* Entry: 003734dc; end: 0037383b;  */

dword * FUN_003734dc(dword *param_1,ulong *param_2)

{
  long *plVar1;
  dword *pdVar2;
  char cVar3;
  bool bVar4;
  qword qVar5;
  dword *pdVar6;
  long lVar7;
  ulong *puVar8;
  char *pcVar9;
  qword qVar10;
  long *plVar11;
  int iVar12;
  int *piVar13;
  long *plVar14;
  dword *pdVar15;
  dword *unaff_x22;
  ulong uVar16;
  undefined8 uVar17;
  qword qVar18;
  undefined8 uVar19;
  char *pcStack_1f8;
  long *plStack_1f0;
  ulong uStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  ulong auStack_1c8 [2];
  char cStack_1b1;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  qword qStack_198;
  undefined1 auStack_190 [8];
  long *plStack_188;
  undefined **appuStack_180 [12];
  long *plStack_b0;
  ulong uStack_a8;
  undefined8 auStack_a0 [2];
  char cStack_89;
  ulong auStack_88 [2];
  char cStack_71;
  ulong uStack_70;
  dword adStack_68 [6];
  dword *pdStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pdVar6 = param_1;
  puVar8 = param_2;
  if ((*(char *)(param_1 + 0x74) == '\0') &&
     ((*(long *)(param_1 + 0x56) == 0 || (FUN_0037383c(), ((ulong)pdVar6 & 1) == 0)))) {
    uVar16 = *(ulong *)(param_1 + 0xd8);
    func_0x003c1f6c();
    lVar7 = *(long *)pdVar6;
    FUN_003c1e28();
    uStack_70 = 0x7fffffffffffffff;
    if ((uVar16 != 0x7fffffffffffffff && lVar7 != -0x7fffffffffffffff) &&
       ((uStack_70 = 0x8000000000000000, uVar16 != 0x8000000000000000 &&
        (lVar7 != -0x8000000000000000)))) {
      if ((long)uVar16 < 1) {
        if ((long)(-0x8000000000000000 - uVar16) <= -lVar7) goto LAB_00373758;
      }
      else if ((long)(uVar16 ^ 0x7fffffffffffffff) < -lVar7) {
        uStack_70 = 0x7fffffffffffffff;
      }
      else {
LAB_00373758:
        uStack_70 = uVar16 - lVar7;
      }
    }
    FUN_00375a84(auStack_88,param_1 + 6);
    uStack_a8 = *param_2;
    if ((uStack_a8 & 1) != 0) {
      piVar13 = (int *)(uStack_a8 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = *piVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_003be004(auStack_a0,&uStack_a8);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                 ,0x3b1,1,"subchannel %p %s: connect failed (%s), backing off for %lld ms");
    if (cStack_89 < '\0') {
      __ZdlPv(auStack_a0[0]);
    }
    if ((uStack_a8 & 1) != 0) {
      FUN_0055293c();
    }
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    plStack_b0 = (long *)*param_2;
    if (((ulong)plStack_b0 & 1) != 0) {
      piVar13 = (int *)((long)plStack_b0 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = *piVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_003fbde8(auStack_88,&plStack_b0);
    FUN_00373374(param_1,3,auStack_88);
    if ((auStack_88[0] & 1) != 0) {
      FUN_0055293c();
    }
    plVar14 = plStack_b0;
    if (((ulong)plStack_b0 & 1) != 0) {
      FUN_0055293c();
    }
    FUN_003b2134();
    puVar8 = &uStack_70;
    FUN_003b8fa4();
    pdVar6 = param_1 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pdVar6,0x10);
      if (bVar4) {
        *(long *)pdVar6 = *(long *)pdVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pdStack_50 = (dword *)0x0;
    pdVar6 = &MACH_HEADER.ncmds;
    __Znwm();
    *(undefined ***)pdVar6 = &PTR_DAT_009ddea0;
    *(dword **)(pdVar6 + 2) = param_1;
    unaff_x22 = adStack_68;
    pdStack_50 = pdVar6;
    (**(code **)(*plVar14 + 0x50))(plVar14,puVar8,adStack_68);
    *(long **)(param_1 + 0xda) = plVar14;
    *(ulong **)(param_1 + 0xdc) = puVar8;
    if (pdStack_50 == unaff_x22) {
      lVar7 = 4;
      pdVar6 = adStack_68;
    }
    else {
      pdVar6 = pdStack_50;
      if (pdStack_50 == (dword *)0x0) goto LAB_0037371c;
      lVar7 = 5;
    }
    (**(code **)(*(long *)pdVar6 + lVar7 * 8))();
  }
LAB_0037371c:
  iVar12 = (int)puVar8;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pdVar6;
  }
  ___stack_chk_fail();
  if (iVar12 != 0) {
    func_0x0040cf10();
    if (pdStack_50 == unaff_x22) {
      lVar7 = 4;
      pdVar15 = adStack_68;
    }
    else {
      if (pdStack_50 == (dword *)0x0) goto LAB_00373834;
      lVar7 = 5;
      pdVar15 = pdStack_50;
    }
    (**(code **)(*(long *)pdVar15 + lVar7 * 8))();
  }
LAB_00373834:
  __Unwind_Resume();
  FUN_00374228(appuStack_180,"subchannel",1);
  appuStack_180[0] = &PTR_FUN_009df510;
  FUN_003a1d70(auStack_190,*(undefined8 *)(pdVar6 + 0x58));
  func_0x003a6b84(appuStack_180,auStack_190);
  FUN_00373d78();
  if (plStack_188 != (long *)0x0) {
    plVar14 = plStack_188 + 1;
    do {
      lVar7 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_188);
    }
  }
  lVar7 = lRam0000000000b65d18;
  if (lRam0000000000b65d18 == 0) {
    FUN_003b171c();
  }
  uVar16 = lVar7 + 0x18;
  FUN_003f5500(uVar16,appuStack_180);
  if ((uVar16 & 1) == 0) {
    pdVar15 = (dword *)0x0;
  }
  else {
    FUN_003a6fb0(&uStack_1a0,appuStack_180);
    if (uStack_1a0 == 0) {
      plVar14 = *(long **)(pdVar6 + 0x5a);
      *(undefined8 *)(pdVar6 + 0x56) = 0;
      *(undefined8 *)(pdVar6 + 0x58) = 0;
      *(undefined8 *)(pdVar6 + 0x5a) = 0;
      pdVar15 = (dword *)(ulong)(*(char *)(pdVar6 + 0x74) == '\0');
      if (*(char *)(pdVar6 + 0x74) == '\0') {
        pcVar9 = segment_command_00000020.segname;
        __Znwm();
        qVar5 = qStack_198;
        qStack_198 = 0;
        qVar10 = *(qword *)(pdVar6 + 0x4c);
        if (*(long *)(pdVar6 + 0x50) == 0) {
          qVar18 = 0;
        }
        else {
          plVar11 = (long *)(*(long *)(pdVar6 + 0x50) + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          qVar18 = *(qword *)(pdVar6 + 0x50);
        }
        *(undefined ***)pcVar9 = &PTR_FUN_009ddd80;
        pcVar9[8] = '\x01';
        pcVar9[9] = '\0';
        pcVar9[10] = '\0';
        pcVar9[0xb] = '\0';
        pcVar9[0xc] = '\0';
        pcVar9[0xd] = '\0';
        pcVar9[0xe] = '\0';
        pcVar9[0xf] = '\0';
        *(qword *)(pcVar9 + 0x10) = qVar5;
        FUN_003a277c();
        *(qword *)(pcVar9 + 0x18) = qVar10;
        *(qword *)(pcVar9 + 0x20) = qVar18;
        plVar11 = *(long **)(pdVar6 + 0x84);
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
          do {
            lVar7 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
        *(char **)(pdVar6 + 0x84) = pcVar9;
        if (*(long *)(pdVar6 + 0x50) != 0) {
          plStack_1f0 = plVar14;
          FUN_003575ac(*(long *)(pdVar6 + 0x50),&plStack_1f0);
          if (plStack_1f0 != (long *)0x0) {
            plVar14 = plStack_1f0 + 1;
            do {
              lVar7 = *plVar14;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar4) {
                *plVar14 = lVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar7 == 1) {
              (**(code **)(*plStack_1f0 + 8))();
            }
          }
          plVar14 = (long *)0x0;
        }
        uVar17 = *(undefined8 *)(pdVar6 + 0x84);
        uVar19 = *(undefined8 *)(pdVar6 + 0x4e);
        pdVar2 = pdVar6 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pdVar2,0x10);
          if (bVar4) {
            *(long *)pdVar2 = *(long *)pdVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pcVar9 = segment_command_00000020.segname;
        __Znwm();
        *(qword *)(pcVar9 + 0x10) = 0;
        *(qword *)(pcVar9 + 0x18) = 0;
        *(undefined ***)pcVar9 = &PTR_FUN_009ddf20;
        pcVar9[8] = '\x01';
        pcVar9[9] = '\0';
        pcVar9[10] = '\0';
        pcVar9[0xb] = '\0';
        pcVar9[0xc] = '\0';
        pcVar9[0xd] = '\0';
        pcVar9[0xe] = '\0';
        pcVar9[0xf] = '\0';
        *(dword **)(pcVar9 + 0x20) = pdVar6;
        pcStack_1f8 = pcVar9;
        FUN_00370c38(uVar17,uVar19,&pcStack_1f8);
        pcVar9 = pcStack_1f8;
        pcStack_1f8 = (char *)0x0;
        if (pcVar9 != (char *)0x0) {
          (*(code *)**(undefined8 **)pcVar9)();
        }
        auStack_1c8[0] = 0;
        FUN_00373374(pdVar6,2,auStack_1c8);
        if ((auStack_1c8[0] & 1) != 0) {
          FUN_0055293c();
        }
      }
      if (plVar14 != (long *)0x0) {
        plVar11 = plVar14 + 1;
        do {
          lVar7 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
    }
    else {
      uStack_1b0 = uStack_1a0;
      if ((uStack_1a0 & 1) != 0) {
        piVar13 = (int *)(uStack_1a0 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = *piVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_003fbec4(&uStack_1a8,&uStack_1b0);
      if ((uStack_1b0 & 1) != 0) {
        FUN_0055293c();
      }
      func_0x0040073c(*(undefined8 *)(pdVar6 + 0x56));
      FUN_00375a84(auStack_1c8,pdVar6 + 6);
      uStack_1e8 = uStack_1a8;
      if ((uStack_1a8 & 1) != 0) {
        piVar13 = (int *)(uStack_1a8 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = *piVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_003be004(auStack_1e0,&uStack_1e8);
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                   ,0x3d8,2,"subchannel %p %s: error initializing subchannel stack: %s");
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
      }
      if ((uStack_1e8 & 1) != 0) {
        FUN_0055293c();
      }
      if (cStack_1b1 < '\0') {
        __ZdlPv(auStack_1c8[0]);
      }
      if ((uStack_1a8 & 1) != 0) {
        FUN_0055293c();
      }
      pdVar15 = (dword *)0x0;
    }
    FUN_003742a4(&uStack_1a0);
  }
  func_0x003a6ac4(appuStack_180);
  return pdVar15;
}



/* Entry: 0037383c; end: 00373d77;  */

bool FUN_0037383c(qword param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword qVar4;
  bool bVar5;
  ulong uVar6;
  char *pcVar7;
  qword qVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  qword qVar14;
  undefined8 uVar15;
  char *pcStack_128;
  long *plStack_120;
  ulong uStack_118;
  undefined8 auStack_110 [2];
  char cStack_f9;
  ulong auStack_f8 [2];
  char cStack_e1;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  qword qStack_c8;
  undefined1 auStack_c0 [8];
  long *plStack_b8;
  undefined **appuStack_b0 [12];
  
  FUN_00374228(appuStack_b0,"subchannel",1);
  appuStack_b0[0] = &PTR_FUN_009df510;
  FUN_003a1d70(auStack_c0,*(undefined8 *)(param_1 + 0x160));
  func_0x003a6b84(appuStack_b0,auStack_c0);
  FUN_00373d78();
  if (plStack_b8 != (long *)0x0) {
    plVar12 = plStack_b8 + 1;
    do {
      lVar11 = *plVar12;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  lVar11 = lRam0000000000b65d18;
  if (lRam0000000000b65d18 == 0) {
    FUN_003b171c();
  }
  uVar6 = lVar11 + 0x18;
  FUN_003f5500(uVar6,appuStack_b0);
  if ((uVar6 & 1) == 0) {
    bVar5 = false;
  }
  else {
    FUN_003a6fb0(&uStack_d0,appuStack_b0);
    if (uStack_d0 == 0) {
      plVar12 = *(long **)(param_1 + 0x168);
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      bVar5 = *(char *)(param_1 + 0x1d0) == '\0';
      if (*(char *)(param_1 + 0x1d0) == '\0') {
        pcVar7 = segment_command_00000020.segname;
        __Znwm();
        qVar4 = qStack_c8;
        qStack_c8 = 0;
        qVar8 = *(qword *)(param_1 + 0x130);
        if (*(long *)(param_1 + 0x140) == 0) {
          qVar14 = 0;
        }
        else {
          plVar9 = (long *)(*(long *)(param_1 + 0x140) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          qVar14 = *(qword *)(param_1 + 0x140);
        }
        *(undefined ***)pcVar7 = &PTR_FUN_009ddd80;
        pcVar7[8] = '\x01';
        pcVar7[9] = '\0';
        pcVar7[10] = '\0';
        pcVar7[0xb] = '\0';
        pcVar7[0xc] = '\0';
        pcVar7[0xd] = '\0';
        pcVar7[0xe] = '\0';
        pcVar7[0xf] = '\0';
        *(qword *)(pcVar7 + 0x10) = qVar4;
        FUN_003a277c();
        *(qword *)(pcVar7 + 0x18) = qVar8;
        *(qword *)(pcVar7 + 0x20) = qVar14;
        plVar9 = *(long **)(param_1 + 0x210);
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 1;
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
            (**(code **)(*plVar9 + 8))();
          }
        }
        *(char **)(param_1 + 0x210) = pcVar7;
        if (*(long *)(param_1 + 0x140) != 0) {
          plStack_120 = plVar12;
          FUN_003575ac(*(long *)(param_1 + 0x140),&plStack_120);
          if (plStack_120 != (long *)0x0) {
            plVar12 = plStack_120 + 1;
            do {
              lVar11 = *plVar12;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *plVar12 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 == 1) {
              (**(code **)(*plStack_120 + 8))();
            }
          }
          plVar12 = (long *)0x0;
        }
        uVar13 = *(undefined8 *)(param_1 + 0x210);
        uVar15 = *(undefined8 *)(param_1 + 0x138);
        plVar9 = (long *)(param_1 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        pcVar7 = segment_command_00000020.segname;
        __Znwm();
        *(qword *)(pcVar7 + 0x10) = 0;
        *(qword *)(pcVar7 + 0x18) = 0;
        *(undefined ***)pcVar7 = &PTR_FUN_009ddf20;
        pcVar7[8] = '\x01';
        pcVar7[9] = '\0';
        pcVar7[10] = '\0';
        pcVar7[0xb] = '\0';
        pcVar7[0xc] = '\0';
        pcVar7[0xd] = '\0';
        pcVar7[0xe] = '\0';
        pcVar7[0xf] = '\0';
        *(qword *)(pcVar7 + 0x20) = param_1;
        pcStack_128 = pcVar7;
        FUN_00370c38(uVar13,uVar15,&pcStack_128);
        pcVar7 = pcStack_128;
        pcStack_128 = (char *)0x0;
        if (pcVar7 != (char *)0x0) {
          (*(code *)**(undefined8 **)pcVar7)();
        }
        auStack_f8[0] = 0;
        FUN_00373374(param_1,2,auStack_f8);
        if ((auStack_f8[0] & 1) != 0) {
          FUN_0055293c();
        }
      }
      if (plVar12 != (long *)0x0) {
        plVar9 = plVar12 + 1;
        do {
          lVar11 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
      }
    }
    else {
      uStack_e0 = uStack_d0;
      if ((uStack_d0 & 1) != 0) {
        piVar10 = (int *)(uStack_d0 - 1);
        do {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003fbec4(&uStack_d8,&uStack_e0);
      if ((uStack_e0 & 1) != 0) {
        FUN_0055293c();
      }
      func_0x0040073c(*(undefined8 *)(param_1 + 0x158));
      FUN_00375a84(auStack_f8,param_1 + 0x18);
      uStack_118 = uStack_d8;
      if ((uStack_d8 & 1) != 0) {
        piVar10 = (int *)(uStack_d8 - 1);
        do {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003be004(auStack_110,&uStack_118);
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                   ,0x3d8,2,"subchannel %p %s: error initializing subchannel stack: %s");
      if (cStack_f9 < '\0') {
        __ZdlPv(auStack_110[0]);
      }
      if ((uStack_118 & 1) != 0) {
        FUN_0055293c();
      }
      if (cStack_e1 < '\0') {
        __ZdlPv(auStack_f8[0]);
      }
      if ((uStack_d8 & 1) != 0) {
        FUN_0055293c();
      }
      bVar5 = false;
    }
    FUN_003742a4(&uStack_d0);
  }
  func_0x003a6ac4(appuStack_b0);
  return bVar5;
}



/* Entry: 00373d78; end: 00373d97;  */

undefined8 * FUN_00373d78(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,ulong *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_50;
  undefined1 uStack_41;
  undefined4 auStack_40 [2];
  ulong uStack_38;
  
  if (param_1[6] == 0) {
    param_1[6] = param_2;
    return param_1;
  }
  auStack_40[0] = param_3;
  func_0x00772284();
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  uVar3 = *param_1;
  uStack_38 = *param_4;
  if ((uStack_38 & 1) != 0) {
    piVar4 = (int *)(uStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_00371af0(uVar3,auStack_40);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  param_1[2] = FUN_00373e98;
  param_1[3] = param_1;
  param_1[4] = 0;
  uStack_50 = 0;
  FUN_003c1e6c(&uStack_41,param_1 + 1,&uStack_50);
  if ((uStack_50 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 00373d98; end: 00373e97;  */

undefined8 * FUN_00373d98(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,ulong *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_40;
  undefined1 uStack_31;
  undefined4 auStack_30 [2];
  ulong uStack_28;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  uVar3 = *param_1;
  uStack_28 = *param_4;
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
  auStack_30[0] = param_3;
  FUN_00371af0(uVar3,auStack_30);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  param_1[2] = FUN_00373e98;
  param_1[3] = param_1;
  param_1[4] = 0;
  uStack_40 = 0;
  FUN_003c1e6c(&uStack_31,param_1 + 1,&uStack_40);
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 00373e98; end: 00373ef7;  */

void FUN_00373e98(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  (**(code **)(*(long *)*param_1 + 0x10))();
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
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 00373ef8; end: 003740e3;  */

void FUN_00373ef8(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 *puStack_28;
  
  if (param_1[8] == 0) {
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      FUN_002971d4(&lStack_40,param_1[5],param_1[6]);
    }
    else {
      lStack_38 = param_1[6];
      lStack_40 = param_1[5];
      lStack_30 = param_1[7];
    }
    lVar7 = param_1[4];
    plStack_48 = (long *)0x0;
    if (*(long *)(lVar7 + 0x210) != 0) {
      plVar1 = (long *)(*(long *)(lVar7 + 0x210) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_48 = *(long **)(lVar7 + 0x210);
      lVar7 = param_1[4];
    }
    uVar2 = *(undefined8 *)(lVar7 + 0x138);
    if (*(long *)(lVar7 + 0x140) == 0) {
      plStack_50 = (long *)0x0;
    }
    else {
      plVar1 = (long *)(*(long *)(lVar7 + 0x140) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_50 = *(long **)(lVar7 + 0x140);
    }
    plVar1 = param_1 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_58 = param_1;
    FUN_003596f0(&puStack_28,&lStack_40,&plStack_48,uVar2,&plStack_50,&plStack_58);
    puVar5 = puStack_28;
    puStack_28 = (undefined8 *)0x0;
    puVar6 = (undefined8 *)param_1[8];
    param_1[8] = (long)puVar5;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
      puVar5 = puStack_28;
      puStack_28 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)();
      }
    }
    if (plStack_58 == (long *)0x0) goto LAB_00374020;
    plVar1 = plStack_58 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    param_1 = plStack_58;
    if (lVar7 + -1 != 0) goto LAB_00374020;
  }
  else {
    func_0x00772364();
  }
  (**(code **)(*param_1 + 0x10))();
LAB_00374020:
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plStack_50 + 8))();
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plStack_48 + 8))();
    }
  }
  if (lStack_30 < 0) {
    __ZdlPv(lStack_40);
  }
  return;
}



/* Entry: 003740e4; end: 0037411f;  */

long * FUN_003740e4(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 00374120; end: 00374167;  */

void FUN_00374120(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00374120(param_1,*param_2);
    FUN_00374120(param_1,param_2[1]);
    FUN_00374168(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 00374168; end: 003741b7;  */

void FUN_00374168(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[3];
  param_1[3] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(*param_1);
  return;
}



/* Entry: 003741b8; end: 00374227;  */

void FUN_003741b8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_003741b8(param_1,*param_2);
    FUN_003741b8(param_1,param_2[1]);
    plVar4 = (long *)param_2[5];
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
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 00374228; end: 003742a3;  */

undefined8 * FUN_00374228(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR____cxa_pure_virtual_009dde28;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  FUN_00353254(param_1 + 3,"unknown");
  param_1[6] = 0;
  FUN_003a1a48(param_1 + 7);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



/* Entry: 003742a4; end: 003742e3;  */

ulong * FUN_003742a4(ulong *param_1)

{
  if (*param_1 == 0) {
    FUN_0033d4a8(param_1 + 1);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003742e4; end: 0037439f;  */

undefined1  [16] FUN_003742e4(long param_1,ulong *param_2,qword *param_3)

{
  qword *pqVar1;
  undefined8 uVar2;
  qword *pqVar3;
  qword *pqVar4;
  qword qVar5;
  undefined1 auVar6 [16];
  
  pqVar3 = (qword *)(param_1 + 8);
  pqVar4 = pqVar3;
  if ((qword *)*pqVar3 != (qword *)0x0) {
    pqVar1 = (qword *)*pqVar3;
    do {
      while (pqVar3 = pqVar1, pqVar3[4] <= *param_2) {
        if (*param_2 <= pqVar3[4]) {
          uVar2 = 0;
          goto LAB_00374388;
        }
        pqVar1 = (qword *)pqVar3[1];
        if ((qword *)pqVar3[1] == (qword *)0x0) {
          pqVar4 = pqVar3 + 1;
          goto LAB_0037434c;
        }
      }
      pqVar1 = (qword *)*pqVar3;
      pqVar4 = pqVar3;
    } while ((qword *)*pqVar3 != (qword *)0x0);
  }
LAB_0037434c:
  pqVar1 = (qword *)(segment_command_00000020.segname + 8);
  __Znwm();
  qVar5 = *param_3;
  pqVar1[5] = param_3[1];
  pqVar1[4] = qVar5;
  param_3[1] = 0;
  FUN_003743a0(param_1,pqVar3,pqVar4,pqVar1);
  uVar2 = 1;
  pqVar3 = pqVar1;
LAB_00374388:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = pqVar3;
  return auVar6;
}



/* Entry: 003743a0; end: 003743f3;  */

void FUN_003743a0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 003743f4; end: 00374457;  */

undefined8 FUN_003743f4(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    plVar2 = plVar3;
    do {
      plVar1 = plVar4 + 1;
      if (*param_2 <= (ulong)plVar4[4]) {
        plVar2 = plVar4;
        plVar1 = plVar4;
      }
      plVar4 = (long *)*plVar1;
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar3) && ((ulong)plVar2[4] <= *param_2)) {
      FUN_00374458();
      return 1;
    }
  }
  return 0;
}



/* Entry: 00374458; end: 00374527;  */

undefined8 FUN_00374458(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  func_0x003744b8();
  plVar4 = *(long **)(param_2 + 0x28);
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
  __ZdlPv(param_2);
  return param_1;
}



/* Entry: 00374528; end: 003745b3;  */

long * FUN_00374528(long param_1,undefined8 param_2)

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



/* Entry: 003745b4; end: 003746eb;  */

undefined8 * FUN_003745b4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  plVar2 = param_1 + 4;
  *plVar2 = 0;
  *param_1 = &PTR_FUN_009dde50;
  param_1[1] = 1;
  *plVar2 = *param_2;
  *param_2 = 0;
  uVar4 = param_3[1];
  uVar3 = *param_3;
  param_1[7] = param_3[2];
  param_1[6] = uVar4;
  param_1[5] = uVar3;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  iVar1 = *(int *)(*plVar2 + 0x1d4);
  param_1[0xc] = 0;
  param_1[8] = 0;
  if (iVar1 == 2) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 9) = iVar1;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = param_1 + 0xc;
  if (*(int *)(*plVar2 + 0x1d4) == 2) {
    FUN_00373ef8(param_1);
  }
  return param_1;
}



/* Entry: 003746ec; end: 0037476b;  */

void FUN_003746ec(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  FUN_003741b8(param_1 + 0xb,param_1[0xc]);
  param_1[0xb] = (long)(param_1 + 0xc);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar4 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  plVar1 = param_1 + 1;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00374764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 0037476c; end: 0037476f;  */

undefined8 * FUN_0037476c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_009dde50;
  plVar4 = (long *)param_1[4];
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
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  param_1[4] = 0;
  FUN_003741b8(param_1 + 0xb,param_1[0xc]);
  param_1[0xb] = param_1 + 0xc;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((param_1[10] & 1) != 0) {
    FUN_0055293c();
  }
  puVar5 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  plVar4 = (long *)param_1[4];
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
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_009e1eb0;
  FUN_0033d36c(param_1 + 2);
  return param_1;
}



/* Entry: 00374770; end: 00374783;  */

void FUN_00374770(void)

{
  FUN_00374840();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00374784; end: 0037483f;  */

void FUN_00374784(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  
  lVar1 = *(long *)(param_1 + 0x20) + 400;
  func_0x00339d8c(lVar1);
  if (((int)param_2 != 4) && (*(long *)(param_1 + 0x40) != 0)) {
    *(int *)(param_1 + 0x48) = (int)param_2;
    uVar4 = *(ulong *)(param_1 + 0x50);
    uVar5 = *param_3;
    if (uVar5 != uVar4) {
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
        uVar5 = *param_3;
      }
      *(ulong *)(param_1 + 0x50) = uVar5;
      if ((uVar4 & 1) != 0) {
        FUN_0055293c();
      }
    }
    FUN_00371430(param_1 + 0x58,param_2,param_3);
  }
  func_0x00339da8(lVar1);
  return;
}



/* Entry: 00374840; end: 0037493b;  */

undefined8 * FUN_00374840(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_009dde50;
  plVar4 = (long *)param_1[4];
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
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  param_1[4] = 0;
  FUN_003741b8(param_1 + 0xb,param_1[0xc]);
  param_1[0xb] = param_1 + 0xc;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((param_1[10] & 1) != 0) {
    FUN_0055293c();
  }
  puVar5 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  plVar4 = (long *)param_1[4];
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
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_009e1eb0;
  FUN_0033d36c(param_1 + 2);
  return param_1;
}



/* Entry: 0037493c; end: 00374a77;  */

undefined1  [16]
FUN_0037493c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x003749dc(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_00374a78(alStack_60,param_1,param_3,param_4);
    FUN_00374b18(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
    alStack_60[0] = 0;
    func_0x00374b6c(alStack_60,0);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 00374a78; end: 00374b17;  */

void FUN_00374a78(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x40;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_002971d4((undefined8 *)(lVar1 + 0x20),*param_3,param_3[1]);
  }
  else {
    uVar2 = *param_3;
    *(undefined8 *)(lVar1 + 0x28) = param_3[1];
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    *(undefined8 *)(lVar1 + 0x30) = param_3[2];
  }
  uVar2 = *param_4;
  *param_4 = 0;
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 00374b18; end: 00374c1f;  */

void FUN_00374b18(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 00374c20; end: 00374f33;  */

void FUN_00374c20(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  
  if ((ulong)param_1[4] < 0x100) {
    uVar8 = param_1[2] - param_1[1] >> 3;
    plVar1 = param_1 + 3;
    lVar7 = *plVar1;
    lVar12 = lVar7 - *param_1;
    if ((ulong)(lVar12 >> 3) <= uVar8) {
      lVar12 = lVar12 >> 2;
      if (lVar7 == *param_1) {
        lVar12 = 1;
      }
      plStack_50 = plVar1;
      FUN_00375390();
      plStack_68 = plVar1 + uVar8;
      plStack_58 = plVar1 + lVar12;
      uVar2 = 0x1000;
      lStack_70 = (long)plVar1;
      plStack_60 = plStack_68;
      __Znwm();
      uStack_78 = uVar2;
      FUN_00375164(&lStack_70,&uStack_78);
      lVar7 = param_1[2];
      lVar12 = -7 - lVar7;
      while (lVar7 != param_1[1]) {
        lVar7 = lVar7 + -8;
        lVar12 = lVar12 + 8;
        FUN_00375278(&lStack_70,lVar7);
      }
      lVar3 = *param_1;
      lVar14 = param_1[3];
      lVar13 = param_1[2];
      param_1[1] = (long)plStack_68;
      *param_1 = lStack_70;
      param_1[3] = (long)plStack_58;
      param_1[2] = (long)plStack_60;
      plStack_60 = (long *)lVar13;
      if (lVar7 != lVar13) {
        plStack_60 = (long *)(lVar13 + (-(lVar13 + lVar12) & 0xfffffffffffffff8U));
      }
      if (lVar3 == 0) {
        return;
      }
      lStack_70 = lVar3;
      plStack_68 = (long *)lVar7;
      plStack_58 = (long *)lVar14;
      __ZdlPv();
      return;
    }
    lVar12 = 0x1000;
    if (lVar7 != param_1[2]) {
      __Znwm();
      lStack_70 = lVar12;
      FUN_00374f34(param_1,&lStack_70);
      return;
    }
    __Znwm();
    lStack_70 = lVar12;
    FUN_00375048(param_1,&lStack_70);
    plVar10 = (long *)param_1[2];
    plVar4 = (long *)param_1[1] + 1;
    lVar12 = *(long *)param_1[1];
    param_1[1] = (long)plVar4;
    if (plVar10 != (long *)param_1[3]) goto LAB_00374e58;
    plVar6 = (long *)*param_1;
    lVar7 = (long)plVar4 - (long)plVar6;
    if (plVar4 < plVar6 || lVar7 == 0) {
      uVar8 = (long)plVar10 - (long)plVar6 >> 2;
      if ((long)plVar10 - (long)plVar6 == 0) {
        uVar8 = 1;
      }
      uVar5 = uVar8;
      FUN_00375390();
      plVar4 = plVar1 + (uVar8 >> 2);
      plVar6 = plVar1 + uVar5;
      uVar8 = param_1[2] - param_1[1];
      plVar10 = plVar4;
      if (uVar8 != 0) {
        plVar10 = (long *)((long)plVar4 + (uVar8 & 0xfffffffffffffff8));
        lVar7 = ((long)uVar8 >> 3) << 3;
        plVar9 = (long *)param_1[1];
        plVar11 = plVar4;
        do {
          *plVar11 = *plVar9;
          lVar7 = lVar7 + -8;
          plVar9 = plVar9 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar7 != 0);
      }
      goto LAB_00374e0c;
    }
  }
  else {
    plVar1 = param_1 + 3;
    param_1[4] = param_1[4] - 0x100;
    plVar10 = (long *)param_1[2];
    plVar4 = (long *)param_1[1] + 1;
    lVar12 = *(long *)param_1[1];
    param_1[1] = (long)plVar4;
    if (plVar10 != (long *)*plVar1) goto LAB_00374e58;
    plVar6 = (long *)*param_1;
    lVar7 = (long)plVar4 - (long)plVar6;
    if (plVar4 < plVar6 || lVar7 == 0) {
      uVar8 = (long)plVar10 - (long)plVar6 >> 2;
      if ((long)plVar10 - (long)plVar6 == 0) {
        uVar8 = 1;
      }
      uVar5 = uVar8;
      FUN_00375390();
      plVar4 = plVar1 + (uVar8 >> 2);
      plVar6 = plVar1 + uVar5;
      uVar8 = param_1[2] - param_1[1];
      plVar10 = plVar4;
      if (uVar8 != 0) {
        lVar7 = ((long)uVar8 >> 3) << 3;
        plVar9 = (long *)param_1[1];
        plVar11 = plVar4;
        do {
          *plVar11 = *plVar9;
          lVar7 = lVar7 + -8;
          plVar9 = plVar9 + 1;
          plVar10 = (long *)((long)plVar4 + (uVar8 & 0xfffffffffffffff8));
          plVar11 = plVar11 + 1;
        } while (lVar7 != 0);
      }
LAB_00374e0c:
      lVar7 = *param_1;
      *param_1 = (long)plVar1;
      param_1[1] = (long)plVar4;
      param_1[2] = (long)plVar10;
      param_1[3] = (long)plVar6;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        plVar10 = (long *)param_1[2];
      }
      goto LAB_00374e58;
    }
  }
  lVar7 = lVar7 >> 3;
  lVar3 = lVar7 + 2;
  if (-2 < lVar7) {
    lVar3 = lVar7 + 1;
  }
  plVar1 = plVar4 + -(lVar3 >> 1);
  lVar7 = (long)plVar10 - (long)plVar4;
  if (lVar7 != 0) {
    _memmove(plVar1,plVar4,lVar7);
    plVar4 = (long *)param_1[1];
  }
  plVar10 = (long *)((long)plVar1 + lVar7);
  param_1[1] = (long)(plVar4 + -(lVar3 >> 1));
  param_1[2] = (long)plVar10;
LAB_00374e58:
  *plVar10 = lVar12;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 00374f34; end: 00375047;  */

void FUN_00374f34(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  
  puVar2 = param_1 + 3;
  puVar8 = (ulong *)param_1[2];
  if (puVar8 == (ulong *)*puVar2) {
    uVar7 = *param_1;
    uVar5 = param_1[1];
    if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
      uVar5 = (long)((long)puVar8 - uVar7) >> 2;
      if ((long)puVar8 - uVar7 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_00375390();
      puVar1 = puVar2 + (uVar5 >> 2);
      uVar7 = param_1[2] - (long)param_1[1];
      puVar8 = puVar1;
      if (uVar7 != 0) {
        puVar8 = (ulong *)((long)puVar1 + (uVar7 & 0xfffffffffffffff8));
        lVar9 = ((long)uVar7 >> 3) << 3;
        puVar6 = (ulong *)param_1[1];
        puVar10 = puVar1;
        do {
          *puVar10 = *puVar6;
          lVar9 = lVar9 + -8;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar9 != 0);
      }
      uVar7 = *param_1;
      *param_1 = (ulong)puVar2;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar8;
      param_1[3] = (ulong)(puVar2 + uVar3);
      if (uVar7 != 0) {
        __ZdlPv(uVar7);
        puVar8 = (ulong *)param_1[2];
      }
    }
    else {
      lVar4 = (long)(uVar5 - uVar7) >> 3;
      lVar9 = lVar4 + 2;
      if (-2 < lVar4) {
        lVar9 = lVar4 + 1;
      }
      lVar11 = uVar5 + (lVar9 >> 1) * -8;
      lVar4 = (long)puVar8 - uVar5;
      if (lVar4 != 0) {
        _memmove(lVar11,uVar5,lVar4);
        puVar8 = (ulong *)param_1[1];
      }
      puVar2 = puVar8 + -(lVar9 >> 1);
      puVar8 = (ulong *)(lVar11 + lVar4);
      param_1[1] = (ulong)puVar2;
      param_1[2] = (ulong)puVar8;
    }
  }
  *puVar8 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 00375048; end: 00375163;  */

void FUN_00375048(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)*param_1) {
    puVar1 = (ulong *)(param_1 + 3);
    uVar6 = *puVar1;
    uVar3 = param_1[2];
    if (uVar3 < uVar6) {
      lVar7 = (long)(uVar6 - uVar3) >> 3;
      lVar4 = lVar7 + 2;
      if (-2 < lVar7) {
        lVar4 = lVar7 + 1;
      }
      puVar8 = puVar2 + (lVar4 >> 1);
      if (uVar3 - (long)puVar2 != 0) {
        _memmove(puVar8,puVar2,uVar3 - (long)puVar2);
        puVar2 = (undefined8 *)param_1[2];
      }
      param_1[1] = (long)puVar8;
      param_1[2] = (long)(puVar2 + (lVar4 >> 1));
      puVar2 = puVar8;
    }
    else {
      lVar4 = (long)(uVar6 - (long)puVar2) >> 2;
      if (uVar6 - (long)puVar2 == 0) {
        lVar4 = 1;
      }
      lVar7 = lVar4 * 2;
      FUN_00375390();
      puVar2 = (undefined8 *)((long)puVar1 + (lVar7 + 6U & 0xfffffffffffffff8));
      uVar3 = param_1[2] - param_1[1];
      puVar8 = puVar2;
      if (uVar3 != 0) {
        puVar8 = (undefined8 *)((long)puVar2 + (uVar3 & 0xfffffffffffffff8));
        lVar7 = ((long)uVar3 >> 3) << 3;
        puVar5 = (undefined8 *)param_1[1];
        puVar9 = puVar2;
        do {
          *puVar9 = *puVar5;
          lVar7 = lVar7 + -8;
          puVar5 = puVar5 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)puVar8;
      param_1[3] = (long)(puVar1 + lVar4);
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar2 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar2[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 00375164; end: 00375277;  */

void FUN_00375164(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar8 = (undefined8 *)param_1[2];
  if (puVar8 == (undefined8 *)param_1[3]) {
    uVar7 = *param_1;
    uVar5 = param_1[1];
    if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
      uVar5 = (long)((long)puVar8 - uVar7) >> 2;
      if ((long)puVar8 - uVar7 == 0) {
        uVar5 = 1;
      }
      uVar2 = param_1[4];
      uVar3 = uVar5;
      FUN_00375390();
      puVar1 = (undefined8 *)(uVar2 + (uVar5 >> 2) * 8);
      uVar7 = param_1[2] - (long)param_1[1];
      puVar8 = puVar1;
      if (uVar7 != 0) {
        puVar8 = (undefined8 *)((long)puVar1 + (uVar7 & 0xfffffffffffffff8));
        lVar9 = ((long)uVar7 >> 3) << 3;
        puVar6 = (undefined8 *)param_1[1];
        puVar10 = puVar1;
        do {
          *puVar10 = *puVar6;
          lVar9 = lVar9 + -8;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar9 != 0);
      }
      uVar7 = *param_1;
      *param_1 = uVar2;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar8;
      param_1[3] = uVar2 + uVar3 * 8;
      if (uVar7 != 0) {
        __ZdlPv(uVar7);
        puVar8 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar4 = (long)(uVar5 - uVar7) >> 3;
      lVar9 = lVar4 + 2;
      if (-2 < lVar4) {
        lVar9 = lVar4 + 1;
      }
      lVar11 = uVar5 + (lVar9 >> 1) * -8;
      lVar4 = (long)puVar8 - uVar5;
      if (lVar4 != 0) {
        _memmove(lVar11,uVar5,lVar4);
        puVar8 = (undefined8 *)param_1[1];
      }
      puVar1 = puVar8 + -(lVar9 >> 1);
      puVar8 = (undefined8 *)(lVar11 + lVar4);
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar8;
    }
  }
  *puVar8 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 00375278; end: 0037538f;  */

void FUN_00375278(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)*param_1) {
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    if (uVar1 < uVar2) {
      lVar6 = (long)(uVar2 - uVar1) >> 3;
      lVar4 = lVar6 + 2;
      if (-2 < lVar6) {
        lVar4 = lVar6 + 1;
      }
      puVar7 = puVar3 + (lVar4 >> 1);
      if (uVar1 - (long)puVar3 != 0) {
        _memmove(puVar7,puVar3,uVar1 - (long)puVar3);
        puVar3 = (undefined8 *)param_1[2];
      }
      param_1[1] = (long)puVar7;
      param_1[2] = (long)(puVar3 + (lVar4 >> 1));
      puVar3 = puVar7;
    }
    else {
      lVar4 = (long)(uVar2 - (long)puVar3) >> 2;
      if (uVar2 - (long)puVar3 == 0) {
        lVar4 = 1;
      }
      lVar9 = lVar4 * 2;
      lVar6 = param_1[4];
      FUN_00375390();
      puVar3 = (undefined8 *)(lVar6 + (lVar9 + 6U & 0xfffffffffffffff8));
      uVar1 = param_1[2] - param_1[1];
      puVar7 = puVar3;
      if (uVar1 != 0) {
        puVar7 = (undefined8 *)((long)puVar3 + (uVar1 & 0xfffffffffffffff8));
        lVar9 = ((long)uVar1 >> 3) << 3;
        puVar5 = (undefined8 *)param_1[1];
        puVar8 = puVar3;
        do {
          *puVar8 = *puVar5;
          lVar9 = lVar9 + -8;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar9 != 0);
      }
      lVar9 = *param_1;
      *param_1 = lVar6;
      param_1[1] = (long)puVar3;
      param_1[2] = (long)puVar7;
      param_1[3] = lVar6 + lVar4 * 8;
      if (lVar9 != 0) {
        __ZdlPv(lVar9);
        puVar3 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar3[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 00375390; end: 0037556b;  */

undefined1  [16] FUN_00375390(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  FUN_00349558();
  uVar3 = (uint)param_2;
  if (*(ulong *)(param_1 + 0x20) < 0x100) {
    uVar3 = 1;
  }
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x20) < 0x200) {
    uVar1 = uVar3;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x100;
  }
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar1 ^ 1;
  auVar5._8_8_ = param_2;
  return auVar5;
}



/* Entry: 0037556c; end: 003755cf;  */

void FUN_0037556c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_DAT_009ddea0;
  param_2[1] = 0;
  uVar4 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = *(undefined8 *)(param_1 + 8);
  }
  param_2[1] = uVar4;
  return;
}



/* Entry: 003755d0; end: 0037561f;  */

void FUN_003755d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
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
      (**(code **)(*plVar4 + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 00375620; end: 003756cf;  */

void FUN_00375620(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_00341380(&uStack_38,0);
  FUN_003413d4(auStack_80);
  FUN_00373488(*(undefined8 *)(param_1 + 8));
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
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00341470(auStack_80);
  FUN_003414dc(&uStack_38);
  return;
}



/* Entry: 003756d0; end: 0037570b;  */

long FUN_003756d0(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009ddf00);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0037570c; end: 0037571b;  */

undefined ** FUN_0037570c(void)

{
  return &PTR_DAT_009ddf00;
}



/* Entry: 0037571c; end: 0037572f;  */

void FUN_0037571c(void)

{
  FUN_00375864();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00375730; end: 00375863;  */

void FUN_00375730(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plStack_38;
  
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x00339d8c(lVar6 + 400);
  if ((param_2 - 3U < 2) && (plVar4 = *(long **)(lVar6 + 0x210), plVar4 != (long *)0x0)) {
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
    *(undefined8 *)(lVar6 + 0x210) = 0;
    if (*(long *)(lVar6 + 0x140) != 0) {
      plStack_38 = (long *)0x0;
      FUN_003575ac(*(long *)(lVar6 + 0x140),&plStack_38);
      if (plStack_38 != (long *)0x0) {
        plVar4 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 8))();
        }
      }
    }
    FUN_00373374(lVar6,0,param_3);
    FUN_003a15dc(lVar6 + 0x218);
  }
  func_0x00339da8(lVar6 + 400);
  return;
}



/* Entry: 00375864; end: 003758db;  */

undefined8 * FUN_00375864(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009ddf20;
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
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  param_1[4] = 0;
  *param_1 = &PTR_FUN_009e1eb0;
  FUN_0033d36c(param_1 + 2);
  return param_1;
}



/* Entry: 003758dc; end: 003758fb;  */

void FUN_003758dc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003758e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 003758fc; end: 00375957;  */

undefined8 * FUN_003758fc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  FUN_003a2928();
  param_1[0x11] = param_3;
  return param_1;
}



/* Entry: 00375958; end: 00375983;  */

long FUN_00375958(long param_1)

{
  FUN_003a2a64(*(undefined8 *)(param_1 + 0x88));
  return param_1;
}


