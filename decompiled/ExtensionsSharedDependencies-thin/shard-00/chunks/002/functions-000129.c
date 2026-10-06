/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0033faa8; end: 0033faab;  */

undefined8 * FUN_0033faa8(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_009df7c8;
  param_1[1] = &PTR_FUN_009df820;
  if (param_1[0x16] == 0) {
    FUN_003ac6f4(param_1 + 0x14);
    if ((param_1[0x13] & 1) != 0) {
      FUN_0055293c();
    }
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_009df6d8;
    param_1[1] = &PTR_FUN_009df730;
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
               ,0x3ba,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3aeb4c);
  (*pcVar1)();
}



/* Entry: 0033faac; end: 0033fabf;  */

void FUN_0033faac(void)

{
  FUN_003aeaa8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0033fac0; end: 0033fac7;  */

void FUN_0033fac0(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 uStack_41;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  lVar4 = *(long *)(param_1 + 0x10);
  plVar6 = (long *)(lVar4 + 0x48);
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
  plVar6 = *(long **)(lVar4 + 0x10);
  puVar3 = (undefined8 *)plVar6[7];
  plVar6[7] = 0;
  puStack_20 = &stack0xfffffffffffffff0;
  if (puVar3 != (undefined8 *)0x0) {
    puStack_20 = &stack0xfffffffffffffff0;
    (**(code **)*puVar3)();
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



/* Entry: 0033fac8; end: 0033fb17;  */

void FUN_0033fac8(long param_1,undefined8 param_2,long param_3)

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
  func_0x0077142c();
  pcStack_28 = FUN_0033fb18;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_0033fb40(&uStack_31,plVar2,param_2);
  return;
}



/* Entry: 0033fb18; end: 0033fb3f;  */

void FUN_0033fb18(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_0033fb40(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 0033fb40; end: 0033fccb;  */

ulong * FUN_0033fb40(undefined8 *param_1,ulong *param_2,long param_3,undefined8 *param_4)

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
    FUN_003a1d70(auStack_90,param_4[1]);
    FUN_0033bbf4(auStack_80,auStack_90,*param_4,param_3);
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
      *puVar6 = &PTR_FUN_009db2e0;
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
      *puVar6 = &PTR_FUN_009db298;
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
      *puVar6 = &PTR_FUN_009db778;
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
      FUN_003fbec4(param_1,&uStack_98);
      if ((uStack_98 & 1) != 0) {
        FUN_0055293c();
      }
    }
    puVar5 = auStack_80;
    FUN_0033fccc(puVar5);
    return puVar5;
  }
  func_0x00771460();
  func_0x0040cf10();
  FUN_0033c494(&uStack_98);
  FUN_0033fccc(auStack_80);
  __Unwind_Resume();
  if (*param_2 == 0) {
    if ((undefined8 *)param_2[7] != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)param_2[7])();
    }
    FUN_0033d130(param_2 + 1);
  }
  else if ((*param_2 & 1) != 0) {
    FUN_0055293c();
  }
  return param_2;
}



/* Entry: 0033fccc; end: 0033fd23;  */

ulong * FUN_0033fccc(ulong *param_1)

{
  if (*param_1 == 0) {
    if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)param_1[7])();
    }
    FUN_0033d130(param_1 + 1);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0033fd24; end: 0033fd43;  */

void FUN_0033fd24(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0033fd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 0033fd44; end: 0033fd8b;  */

void FUN_0033fd44(long param_1,undefined8 param_2)

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



/* Entry: 0033fd8c; end: 0033fd93;  */

void FUN_0033fd8c(void)

{
  return;
}



/* Entry: 0033fd94; end: 0033fdb7;  */

void FUN_0033fd94(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009db860;
  return;
}



/* Entry: 0033fdb8; end: 0033fdcf;  */

void FUN_0033fdb8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_009db860;
  return;
}



/* Entry: 0033fdd0; end: 0033fefb;  */

undefined8 FUN_0033fdd0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar5 = (uint)&uStack_30;
  puVar6 = &uStack_30;
  lVar8 = *param_2;
  uStack_30 = *(undefined8 *)(lVar8 + 0x38);
  plStack_28 = *(long **)(lVar8 + 0x40);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_003a21a4(&uStack_30,"grpc.minimal_stack",0x12);
  uVar5 = uVar5 & 0xffff;
  if (uVar5 < 0x101) {
    uVar5 = 0;
  }
  if ((uVar5 & 0xff) == 0) {
    pcVar7 = "grpc.client_idle_timeout_ms";
    func_0x003a2080(&uStack_30,"grpc.client_idle_timeout_ms",0x1b);
    if ((((ulong)pcVar7 & 0xff) != 0) && (puVar6 != (undefined8 *)0x7fffffffffffffff)) {
      FUN_003a6bac(lVar8,&PTR_FUN_009db1b8);
    }
  }
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return 1;
}



/* Entry: 0033fefc; end: 0033ff37;  */

long FUN_0033fefc(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009db8d0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0033ff38; end: 0033ff43;  */

undefined ** FUN_0033ff38(void)

{
  return &PTR_DAT_009db8d0;
}



/* Entry: 0033ff44; end: 0033ff8f;  */

bool FUN_0033ff44(long param_1,long param_2)

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



/* Entry: 0033ff90; end: 0033ff97;  */

void FUN_0033ff90(void)

{
  return;
}



/* Entry: 0033ff98; end: 0033ffbb;  */

void FUN_0033ff98(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009db8f0;
  return;
}



/* Entry: 0033ffbc; end: 0033ffd3;  */

void FUN_0033ffbc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_009db8f0;
  return;
}



/* Entry: 0033ffd4; end: 00340173;  */

undefined8 FUN_0033ffd4(undefined8 param_1,long *param_2)

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
  FUN_003a21a4(puVar6,"grpc.minimal_stack",0x12);
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
    FUN_0033bd68(&lStack_58,&uStack_68);
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
      FUN_003a6bac(lVar8,&PTR_FUN_009db220);
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



/* Entry: 00340174; end: 003401af;  */

long FUN_00340174(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009db950);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003401b0; end: 00340363;  */

undefined ** FUN_003401b0(void)

{
  return &PTR_DAT_009db950;
}



/* Entry: 00340364; end: 003406b3;  */

long * FUN_00340364(undefined8 param_1,undefined8 param_2,long *param_3)

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
  FUN_005d20a4(0,0,&PTR_FUN_00b1f0c8);
  ppuVar4 = &PTR_PTR_00a06ad8;
  FUN_005d0f6c(&PTR_PTR_00a06ad8,lVar3);
  if ((ppuVar4 == (undefined **)0x0) ||
     (FUN_005cef54(param_1,param_2,ppuVar4,&PTR_PTR_00a06ad8,0,0,lVar3), (int)param_1 != 0)) {
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
        FUN_005d1bec(&plStack_90);
        uVar10 = uStack_88;
        iVar2 = (int)&plStack_90;
        func_0x005d1838();
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
        FUN_003406b4(pplVar6,&plStack_90,&UNK_008000a0,&pplStack_78,&uStack_79);
        pplVar6[6] = plVar12;
        puVar7 = *ppuVar4;
      } while (puVar7 != (undefined *)0x0);
    }
    plVar5 = plVar8 + 3;
    FUN_00340a0c(plVar8 + 2,*plVar5);
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
    FUN_00340a0c(&plStack_a8,lStack_a0);
    lStack_a0 = 0;
    lStack_98 = 0;
    puVar7 = ppuVar4[1];
    plStack_a8 = &lStack_a0;
    if (puVar7 != (undefined *)0x0) {
      uVar10 = 0xffffffffffffffff;
      do {
        plStack_90 = (long *)(puVar7 + 8);
        uStack_88 = uVar10;
        FUN_005d1bec(&plStack_90);
        uVar10 = uStack_88;
        iVar2 = (int)&plStack_90;
        func_0x005d1838();
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
        FUN_003406b4(pplVar6,&plStack_90,&UNK_008000a0,&pplStack_78,&uStack_79);
        pplVar6[6] = plVar12;
        puVar7 = ppuVar4[1];
      } while (puVar7 != (undefined *)0x0);
    }
    plVar5 = plVar8 + 6;
    FUN_00340a0c(plVar8 + 5,*plVar5);
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
    FUN_00340a0c(&plStack_a8,lStack_a0);
  }
  if (lVar3 != 0) {
    FUN_005d2198(lVar3);
  }
  return plVar8;
}



/* Entry: 003406b4; end: 0034073b;  */

undefined1  [16] FUN_003406b4(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_0034073c(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x38;
    __Znwm();
    uVar4 = *(undefined8 *)*param_4;
    *(undefined8 *)(lVar3 + 0x28) = ((undefined8 *)*param_4)[1];
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    FUN_003407d8(param_1,uStack_38,plVar2,lVar3);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = lVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 0034073c; end: 003407d7;  */

long * FUN_0034073c(long param_1,undefined8 *param_2,undefined8 param_3)

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
        func_0x0034082c(param_1,param_3,plVar3 + 4);
        if ((int)lVar2 == 0) break;
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_003407bc;
      }
      lVar2 = param_1;
      func_0x0034082c(param_1,plVar3 + 4,param_3);
      if ((int)lVar2 == 0) break;
      plVar4 = plVar3 + 1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_003407bc:
  *param_2 = plVar3;
  return plVar4;
}



/* Entry: 003407d8; end: 00340873;  */

void FUN_003407d8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 00340874; end: 00340a0b;  */

void FUN_00340874(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  bVar1 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar1;
  do {
    if ((bVar1) || (plVar3 = (long *)param_2[2], (char)plVar3[3] != '\0')) {
      return;
    }
    plVar2 = (long *)plVar3[2];
    plVar5 = (long *)*plVar2;
    if (plVar5 == plVar3) {
      if ((plVar2[1] == 0) || (plVar5 = (long *)(plVar2[1] + 0x18), *(char *)plVar5 != '\0')) {
        plVar5 = plVar3;
        if ((long *)*plVar3 != param_2) {
          plVar5 = (long *)plVar3[1];
          lVar4 = *plVar5;
          plVar3[1] = lVar4;
          if (lVar4 != 0) {
            *(long **)(lVar4 + 0x10) = plVar3;
            plVar2 = (long *)plVar3[2];
          }
          plVar5[2] = (long)plVar2;
          ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = plVar5;
          *plVar5 = (long)plVar3;
          plVar3[2] = (long)plVar5;
          plVar2 = (long *)plVar5[2];
          plVar3 = (long *)*plVar2;
        }
        *(undefined1 *)(plVar5 + 3) = 1;
        *(undefined1 *)(plVar2 + 3) = 0;
        lVar4 = plVar3[1];
        *plVar2 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar2;
        }
        plVar3[2] = plVar2[2];
        ((undefined8 *)plVar2[2])[*(long **)plVar2[2] != plVar2] = plVar3;
        plVar3[1] = (long)plVar2;
LAB_00340a04:
        plVar2[2] = (long)plVar3;
        return;
      }
    }
    else if ((plVar5 == (long *)0x0) || (plVar5 = plVar5 + 3, (char)*plVar5 != '\0')) {
      if ((long *)*plVar3 == param_2) {
        lVar4 = param_2[1];
        *plVar3 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar3;
          plVar2 = (long *)plVar3[2];
        }
        param_2[2] = (long)plVar2;
        ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = param_2;
        param_2[1] = (long)plVar3;
        plVar3[2] = (long)param_2;
        plVar2 = (long *)param_2[2];
        plVar3 = param_2;
      }
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(plVar2 + 3) = 0;
      plVar3 = (long *)plVar2[1];
      lVar4 = *plVar3;
      plVar2[1] = lVar4;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 0x10) = plVar2;
      }
      plVar3[2] = plVar2[2];
      ((undefined8 *)plVar2[2])[*(long **)plVar2[2] != plVar2] = plVar3;
      *plVar3 = (long)plVar2;
      goto LAB_00340a04;
    }
    *(undefined1 *)(plVar3 + 3) = 1;
    bVar1 = plVar2 == param_1;
    *(bool *)(plVar2 + 3) = bVar1;
    *(char *)plVar5 = '\x01';
    param_2 = plVar2;
  } while( true );
}



/* Entry: 00340a0c; end: 00340a4b;  */

void FUN_00340a0c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00340a0c(param_1,*param_2);
    FUN_00340a0c(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 00340a4c; end: 00340abf;  */

void FUN_00340a4c(void)

{
  undefined **ppuVar1;
  
  func_0x00339fa0(0xafa4e8,FUN_00340cec);
  ppuVar1 = &PTR_DAT_00afa530;
  FUN_0033ad04();
  if ((int)ppuVar1 < 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/backup_poller.cc"
                 ,0x50,2,
                 "Invalid GRPC_CLIENT_CHANNEL_BACKUP_POLL_INTERVAL_MS: %d, default value %lld will be used."
                );
  }
  else {
    uRam0000000000afa4f8 = (ulong)ppuVar1 & 0xffffffff;
  }
  return;
}



/* Entry: 00340ac0; end: 00340c17;  */

void FUN_00340ac0(ulong param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((lRam0000000000afa4f8 == 0) || (uVar3 = param_1, func_0x003c3444(), (uVar3 & 1) != 0)) {
    return;
  }
  func_0x00339d8c(0xb5e6a8);
  if (lRam0000000000b5e6e8 != 0) goto LAB_00340be4;
  lVar1 = 0xa0;
  func_0x00338c94();
  lRam0000000000b5e6e8 = lVar1;
  func_0x003c3ec4();
  func_0x00338c94();
  lVar4 = lRam0000000000b5e6e8;
  *(long *)(lRam0000000000b5e6e8 + 0x80) = lVar1;
  *(undefined1 *)(lVar4 + 0x88) = 0;
  func_0x003c3e74();
  FUN_00339cc8(lRam0000000000b5e6e8 + 0x90,0);
  puVar2 = (ulong *)(lRam0000000000b5e6e8 + 0x98);
  FUN_00339cc8(puVar2,3);
  lVar1 = lRam0000000000b5e6e8;
  *(code **)(lRam0000000000b5e6e8 + 0x40) = FUN_00340cf8;
  *(long *)(lVar1 + 0x48) = lVar1;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  func_0x003c1f6c();
  uVar3 = *puVar2;
  FUN_003c1e28();
  lVar4 = 0x7fffffffffffffff;
  if ((((uVar3 != 0x7fffffffffffffff) && (lRam0000000000afa4f8 != 0x7fffffffffffffff)) &&
      (lVar4 = -0x8000000000000000, uVar3 != 0x8000000000000000)) &&
     (lRam0000000000afa4f8 != -0x8000000000000000)) {
    if ((long)uVar3 < 1) {
      if ((long)(-0x8000000000000000 - uVar3) <= lRam0000000000afa4f8) goto LAB_00340bcc;
    }
    else if ((long)(uVar3 ^ 0x7fffffffffffffff) < lRam0000000000afa4f8) {
      lVar4 = 0x7fffffffffffffff;
    }
    else {
LAB_00340bcc:
      lVar4 = lRam0000000000afa4f8 + uVar3;
    }
  }
  func_0x003cf010(lVar1,lVar4,lRam0000000000b5e6e8 + 0x38);
LAB_00340be4:
  func_0x00339cd4(lRam0000000000b5e6e8 + 0x90);
  uVar5 = *(undefined8 *)(lRam0000000000b5e6e8 + 0x80);
  func_0x00339da8(0xb5e6a8);
                    /* WARNING: Could not recover jumptable at 0x003c3f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000b65d48 + 0x10))(param_1,uVar5);
  return;
}



/* Entry: 00340c18; end: 00340ceb;  */

/* WARNING: Possible PIC construction at 0x00340c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00340cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00340c8c) */
/* WARNING: Removing unreachable block (ram,0x00340cc0) */
/* WARNING: Removing unreachable block (ram,0x00340f94) */
/* WARNING: Removing unreachable block (ram,0x00340fd0) */
/* WARNING: Removing unreachable block (ram,0x00340fb0) */
/* WARNING: Removing unreachable block (ram,0x00338cb8) */
/* WARNING: Removing unreachable block (ram,0x0077a5ec) */
/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00340c18(byte *param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar18;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  byte *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  char acStack_2c1 [137];
  char acStack_238 [536];
  
  puVar16 = &stack0xfffffffffffffff0;
  pbVar14 = param_1;
  if ((lRam0000000000afa4f8 == 0) || (func_0x003c3444(), ((ulong)pbVar14 & 1) != 0)) {
    return pbVar14;
  }
  pbVar14 = *(byte **)(lRam0000000000b5e6e8 + 0x80);
  func_0x003c3f10(param_1);
  func_0x00339d8c(0xb5e6a8);
  iVar2 = (int)lRam0000000000b5e6e8 + 0x90;
  FUN_00339d14();
  lVar18 = lRam0000000000b5e6e8;
  if (iVar2 != 0) {
    lRam0000000000b5e6e8 = 0;
    unaff_x30 = 0x340c8c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = lVar18;
    unaff_x20 = 0xb5e000;
    unaff_x29 = puVar16;
  }
  pbVar10 = (byte *)0xb5e6a8;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  _pthread_mutex_unlock();
  if ((int)pbVar10 == 0) {
    return pbVar10;
  }
  func_0x00770db4();
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x18) = 0x339dc4;
  _pthread_mutex_trylock();
  if (((uint)pbVar10 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)pbVar10 == 0);
  }
  func_0x00770de8();
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(code **)((long)register0x00000008 + -0x28) = FUN_00339df0;
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  pbVar6 = (byte *)((long)register0x00000008 + -0x58);
  _pthread_condattr_init();
  if ((int)pbVar6 == 0) {
    pbVar14 = (byte *)((long)register0x00000008 + -0x58);
    pbVar6 = pbVar10;
    _pthread_cond_init();
    if ((int)pbVar6 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x48)) {
      return pbVar6;
    }
  }
  else {
    func_0x00770e50();
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(code **)((long)register0x00000008 + -0x68) = FUN_00339e64;
  _pthread_cond_destroy();
  if ((int)pbVar6 == 0) {
    return pbVar6;
  }
  func_0x00770e84();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x20;
  *(byte **)((long)register0x00000008 + -0x88) = pbVar10;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00339e80;
  uVar7 = (ulong)param_4 >> 0x20;
  pbVar10 = pbVar14;
  func_0x0033a068(uVar7);
  pbVar8 = param_3;
  FUN_00339fc4(param_3,param_4,uVar7);
  pbVar9 = pbVar6;
  pbVar13 = pbVar14;
  if ((int)pbVar8 == 0) {
    _pthread_cond_wait();
    pbVar8 = param_4;
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar7 = (ulong)param_4 >> 0x20;
    pbVar10 = param_4;
    FUN_0033a598(uVar7);
    pbVar8 = param_3;
    pbVar12 = param_4;
    FUN_0033a01c(param_3,param_4,uVar7);
    *(byte **)((long)register0x00000008 + -0xb0) = pbVar8;
    *(long *)((long)register0x00000008 + -0xa8) = (long)(int)pbVar12;
    _pthread_cond_timedwait(pbVar6,pbVar14,(undefined1 *)((long)register0x00000008 + -0xb0));
    pbVar8 = param_3;
    param_3 = param_4;
  }
  if (((uint)pbVar9 < 0x3d) && ((1L << ((ulong)pbVar9 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar9 == 0x3c);
  }
  func_0x00770eb8();
  *(undefined1 **)((long)register0x00000008 + -0xc0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(code **)((long)register0x00000008 + -0xb8) = FUN_00339f68;
  _pthread_cond_signal();
  if ((int)pbVar9 == 0) {
    return pbVar9;
  }
  func_0x00770eec();
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -200) = 0x339f84;
  _pthread_cond_broadcast();
  if ((int)pbVar9 == 0) {
    return pbVar9;
  }
  func_0x00770f20();
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x339fa0;
  _pthread_once();
  if ((int)pbVar9 == 0) {
    return pbVar9;
  }
  func_0x00770f54();
  *(undefined1 **)((long)register0x00000008 + -0x120) = unaff_x24;
  *(byte **)((long)register0x00000008 + -0x118) = unaff_x23;
  *(byte **)((long)register0x00000008 + -0x110) = param_3;
  *(byte **)((long)register0x00000008 + -0x108) = pbVar8;
  *(byte **)((long)register0x00000008 + -0x100) = pbVar6;
  *(byte **)((long)register0x00000008 + -0xf8) = pbVar14;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0xe0);
  *(code **)((long)register0x00000008 + -0xe8) = FUN_00339fbc;
  *(undefined8 *)((long)register0x00000008 + -0x128) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pbVar14 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar6 = pbVar13;
  FUN_00338e58();
  if ((int)pbVar14 != 0) {
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0xe0);
    puVar16 = (undefined1 *)((long)register0x00000008 + -0x168);
    _vsnprintf(puVar16,0x40,pbVar10,(undefined1 *)((long)register0x00000008 + -0xe0));
    if ((int)(uint)puVar16 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar10 = (byte *)0x0;
    }
    else {
      unaff_x24 = puVar16;
      if ((uint)puVar16 < 0x40) {
        pbVar10 = (byte *)0x0;
        unaff_x23 = (byte *)((long)register0x00000008 + -0x168);
      }
      else {
        pbVar10 = (byte *)(((ulong)puVar16 & 0xffffffff) + 1);
        FUN_00338c74();
        *(undefined1 **)((long)register0x00000008 + -0x170) =
             (undefined1 *)((long)register0x00000008 + -0xe0);
        _vsnprintf();
        unaff_x23 = pbVar10;
      }
    }
    pbVar6 = pbVar13;
    FUN_00338e80(pbVar9,pbVar13,2,unaff_x23);
    pbVar14 = pbVar10;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x128)) {
    return pbVar14;
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)register0x00000008 + -0x1b0) = unaff_x24;
  *(byte **)((long)register0x00000008 + -0x1a8) = unaff_x23;
  *(byte **)((long)register0x00000008 + -0x1a0) = pbVar10;
  *(byte **)((long)register0x00000008 + -0x198) = pbVar9;
  *(byte **)((long)register0x00000008 + -400) = pbVar13;
  *(undefined8 *)((long)register0x00000008 + -0x188) = 2;
  *(undefined1 **)((long)register0x00000008 + -0x180) =
       (undefined1 *)((long)register0x00000008 + -0xf0);
  *(code **)((long)register0x00000008 + -0x178) = FUN_00339178;
  *(undefined8 *)((long)register0x00000008 + -0x1b8) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar3 = 1;
  FUN_0033a598();
  *(undefined8 *)((long)register0x00000008 + -0x268) = uVar3;
  lVar18 = *(long *)pbVar14;
  lVar4 = lVar18;
  _strrchr(lVar18,0x2f);
  if (lVar4 != 0) {
    lVar18 = lVar4 + 1;
  }
  puVar16 = (undefined1 *)((long)register0x00000008 + -0x268);
  _localtime_r(puVar16,(undefined1 *)((long)register0x00000008 + -0x2a0));
  if (puVar16 == (undefined1 *)0x0) {
    builtin_strncpy((char *)((long)register0x00000008 + -0x260),"error:localtime",0x10);
  }
  else {
    puVar16 = (undefined1 *)((long)register0x00000008 + -0x260);
    _strftime(puVar16,0x40,"%m%d %H:%M:%S",(undefined1 *)((long)register0x00000008 + -0x2a0));
    if (puVar16 == (undefined1 *)0x0) {
      builtin_strncpy((char *)((long)register0x00000008 + -0x260),"error:strftime",0xf);
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar14 + 0xc);
  func_0x00338e1c();
  uVar7 = uVar5;
  _pthread_self();
  *(ulong *)((long)register0x00000008 + -0x218) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0x210) = 0x560e98;
  *(undefined1 **)((long)register0x00000008 + -0x208) =
       (undefined1 *)((long)register0x00000008 + -0x260);
  *(undefined8 *)((long)register0x00000008 + -0x200) = 0x560e98;
  *(ulong *)((long)register0x00000008 + -0x1f8) = (ulong)pbVar6 & 0xffffffff;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0x5606ac;
  *(ulong *)((long)register0x00000008 + -0x1e8) = uVar7;
  *(code **)((long)register0x00000008 + -0x1e0) = FUN_00560738;
  *(long *)((long)register0x00000008 + -0x1d8) = lVar18;
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0x560e98;
  *(ulong *)((long)register0x00000008 + -0x1c8) = (ulong)*(uint *)(pbVar14 + 8);
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0x5606ac;
  puVar16 = (undefined1 *)((long)register0x00000008 + -0x218);
  FUN_0056189c((undefined1 *)((long)register0x00000008 + -0x2b8),"%s%s.%09d %7ld %s:%d]",0x15,
               puVar16,6);
  uVar15 = *(uint *)(pbVar14 + 0xc);
  func_0x00338e6c();
  if (uVar15 == 0) {
    *(undefined1 *)((long)register0x00000008 + -0x218) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x200) = 0;
LAB_00339300:
    pbVar10 = *(byte **)PTR____stderrp_00999f90;
    puVar1 = *(undefined1 **)((long)register0x00000008 + -0x2b8);
    if (-1 < *(char *)((long)register0x00000008 + -0x2a1)) {
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x2b8);
    }
    lVar18 = *(long *)(pbVar14 + 0x10);
    *(undefined1 **)((long)register0x00000008 + -0x2d0) = puVar1;
    *(long *)((long)register0x00000008 + -0x2c8) = lVar18;
    pcVar11 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8((undefined1 *)((long)register0x00000008 + -0x218));
    if (*(char *)((long)register0x00000008 + -0x200) == '\0') goto LAB_00339300;
    pbVar10 = *(byte **)PTR____stderrp_00999f90;
    puVar1 = *(undefined1 **)((long)register0x00000008 + -0x2b8);
    if (-1 < *(char *)((long)register0x00000008 + -0x2a1)) {
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x2b8);
    }
    *(long *)((long)register0x00000008 + -0x2c8) = *(long *)(pbVar14 + 0x10);
    *(undefined1 **)((long)register0x00000008 + -0x2c0) =
         (undefined1 *)((long)register0x00000008 + -0x218);
    *(undefined1 **)((long)register0x00000008 + -0x2d0) = puVar1;
    pcVar11 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (*(char *)((long)register0x00000008 + -0x2a1) < '\0') {
    pbVar10 = *(byte **)((long)register0x00000008 + -0x2b8);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x1b8)) {
    return pbVar10;
  }
  ___stack_chk_fail();
  if (*(char *)((long)register0x00000008 + -0x2a1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2b8));
  }
  __Unwind_Resume();
  uVar15 = (uint)puVar16;
  if ((char *)0x3 < pcVar11) {
    uVar7 = (ulong)pcVar11 >> 2;
    pbVar14 = pbVar10;
    do {
      uVar15 = (*(int *)pbVar14 * 0x16a88000 | (uint)(*(int *)pbVar14 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar16;
      uVar15 = (uVar15 >> 0x13 | uVar15 << 0xd) * 5 + 0xe6546b64;
      puVar16 = (undefined1 *)(ulong)uVar15;
      uVar7 = uVar7 - 1;
      pbVar14 = pbVar14 + 4;
    } while (uVar7 != 0);
    pbVar10 = pbVar10 + ((ulong)pcVar11 & 0xfffffffffffffffc);
  }
  uVar17 = 0;
  uVar7 = (ulong)pcVar11 & 3;
  if (uVar7 != 1) {
    if (uVar7 != 2) {
      if (uVar7 != 3) goto LAB_00339464;
      uVar17 = (uint)pbVar10[2] << 0x10;
    }
    uVar17 = uVar17 | (uint)pbVar10[1] << 8;
  }
  uVar15 = ((uVar17 ^ *pbVar10) * 0x16a88000 | (uVar17 ^ *pbVar10) * -0x3361d2af >> 0x11) *
           0x1b873593 ^ uVar15;
LAB_00339464:
  uVar15 = uVar15 ^ (uint)pcVar11;
  uVar15 = (uVar15 ^ uVar15 >> 0x10) * -0x7a143595;
  uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar15 ^ uVar15 >> 0x10);
}



/* Entry: 00340cec; end: 00340cf7;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00340cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  ulong *puVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_2e8 [2];
  char cStack_2d1;
  undefined1 auStack_2d0 [56];
  undefined8 uStack_298;
  undefined7 uStack_290;
  undefined1 uStack_289;
  undefined7 uStack_288;
  undefined1 uStack_281;
  ulong auStack_248 [2];
  undefined7 *puStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  code *pcStack_210;
  long lStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  undefined8 uStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined1 **ppuStack_1a0;
  byte abStack_198 [64];
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  byte abStack_88 [16];
  long lStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  pbVar7 = (byte *)0xb5e6a8;
  pbVar11 = (byte *)0x0;
  _pthread_mutex_init();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770d18();
  uStack_18 = 0x339d70;
  puStack_20 = &stack0xfffffffffffffff0;
  _pthread_mutex_destroy();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770d4c();
  uStack_28 = 0x339d8c;
  puStack_30 = (undefined1 *)&puStack_20;
  _pthread_mutex_lock();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770d80();
  uStack_38 = 0x339da8;
  puStack_40 = (undefined1 *)&puStack_30;
  _pthread_mutex_unlock();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770db4();
  uStack_48 = 0x339dc4;
  puStack_50 = (undefined1 *)&puStack_40;
  _pthread_mutex_trylock();
  if (((uint)pbVar7 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)pbVar7 == 0);
  }
  func_0x00770de8();
  pcStack_58 = FUN_00339df0;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar16 = abStack_88;
  puStack_60 = (undefined1 *)&puStack_50;
  _pthread_condattr_init();
  if ((int)pbVar16 == 0) {
    pbVar11 = abStack_88;
    _pthread_cond_init();
    if ((int)pbVar7 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return pbVar7;
    }
  }
  else {
    func_0x00770e50();
    pbVar7 = pbVar16;
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_00339e64;
  ppuStack_a0 = &puStack_60;
  _pthread_cond_destroy();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770e84();
  pcStack_a8 = FUN_00339e80;
  uVar8 = (ulong)param_4 >> 0x20;
  pbVar16 = pbVar11;
  puStack_b0 = (undefined1 *)&ppuStack_a0;
  func_0x0033a068(uVar8);
  uVar2 = param_3;
  FUN_00339fc4(param_3,param_4,uVar8);
  if ((int)uVar2 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar8 = (ulong)param_4 >> 0x20;
    pbVar16 = param_4;
    FUN_0033a598(uVar8);
    FUN_0033a01c(param_3,param_4,uVar8);
    lStack_d8 = (long)(int)param_4;
    uStack_e0 = param_3;
    _pthread_cond_timedwait(pbVar7,pbVar11,&uStack_e0);
  }
  if (((uint)pbVar7 < 0x3d) && ((1L << ((ulong)pbVar7 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar7 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_e8 = FUN_00339f68;
  ppuStack_f0 = &puStack_b0;
  _pthread_cond_signal();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770eec();
  uStack_f8 = 0x339f84;
  puStack_100 = (undefined1 *)&ppuStack_f0;
  _pthread_cond_broadcast();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f20();
  uStack_108 = 0x339fa0;
  puStack_110 = (undefined1 *)&puStack_100;
  _pthread_once();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f54();
  pcStack_118 = FUN_00339fbc;
  lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar9 = pbVar11;
  puStack_120 = (undefined1 *)&puStack_110;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    ppuStack_1a0 = &puStack_110;
    pbVar1 = abStack_198;
    _vsnprintf(pbVar1,0x40,pbVar16,&puStack_110);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar16 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar16 = (byte *)0x0;
        unaff_x23 = abStack_198;
      }
      else {
        pbVar16 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_1a0 = &puStack_110;
        _vsnprintf();
        unaff_x23 = pbVar16;
      }
    }
    pbVar9 = pbVar11;
    FUN_00338e80(pbVar7,pbVar11,2,unaff_x23);
    pbVar1 = pbVar16;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_1b8 = 2;
  pcStack_1a8 = FUN_00339178;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_1e0 = unaff_x24;
  pbStack_1d8 = unaff_x23;
  pbStack_1d0 = pbVar16;
  pbStack_1c8 = pbVar7;
  pbStack_1c0 = pbVar11;
  ppuStack_1b0 = &puStack_120;
  FUN_0033a598();
  lVar15 = *(long *)pbVar1;
  lVar3 = lVar15;
  uStack_298 = uVar2;
  _strrchr(lVar15,0x2f);
  if (lVar3 != 0) {
    lVar15 = lVar3 + 1;
  }
  puVar4 = &uStack_298;
  _localtime_r(puVar4,auStack_2d0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_288 = 0x656d69746c6163;
    uStack_281 = 0;
    uStack_290 = 0x6c3a726f727265;
    uStack_289 = 0x6f;
  }
  else {
    puVar5 = &uStack_290;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_2d0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_290 = 0x733a726f727265;
      uStack_289 = 0x74;
      uStack_288 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar8 = uVar6;
  _pthread_self();
  auStack_248[1] = 0x560e98;
  puStack_238 = &uStack_290;
  uStack_230 = 0x560e98;
  uStack_228 = (ulong)pbVar9 & 0xffffffff;
  uStack_220 = 0x5606ac;
  pcStack_210 = FUN_00560738;
  uStack_200 = 0x560e98;
  uStack_1f8 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_1f0 = 0x5606ac;
  puVar13 = auStack_248;
  auStack_248[0] = uVar6;
  uStack_218 = uVar8;
  lStack_208 = lVar15;
  FUN_0056189c(apbStack_2e8,"%s%s.%09d %7ld %s:%d]",0x15,puVar13,6);
  uVar12 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar12 == 0) {
    auStack_248[0] = auStack_248[0] & 0xffffffffffffff00;
    uStack_230 = uStack_230 & 0xffffffffffffff00;
LAB_00339300:
    pbVar11 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_248);
    if ((char)uStack_230 == '\0') goto LAB_00339300;
    pbVar11 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2d1 < '\0') {
    pbVar11 = apbStack_2e8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1e8) {
    return pbVar11;
  }
  ___stack_chk_fail();
  if (cStack_2d1 < '\0') {
    __ZdlPv(apbStack_2e8[0]);
  }
  __Unwind_Resume();
  uVar12 = (uint)puVar13;
  if ((char *)0x3 < pcVar10) {
    uVar8 = (ulong)pcVar10 >> 2;
    pbVar7 = pbVar11;
    do {
      uVar12 = (*(int *)pbVar7 * 0x16a88000 | (uint)(*(int *)pbVar7 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar13;
      uVar12 = (uVar12 >> 0x13 | uVar12 << 0xd) * 5 + 0xe6546b64;
      puVar13 = (ulong *)(ulong)uVar12;
      uVar8 = uVar8 - 1;
      pbVar7 = pbVar7 + 4;
    } while (uVar8 != 0);
    pbVar11 = pbVar11 + ((ulong)pcVar10 & 0xfffffffffffffffc);
  }
  uVar14 = 0;
  uVar8 = (ulong)pcVar10 & 3;
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      if (uVar8 != 3) goto LAB_00339464;
      uVar14 = (uint)pbVar11[2] << 0x10;
    }
    uVar14 = uVar14 | (uint)pbVar11[1] << 8;
  }
  uVar12 = ((uVar14 ^ *pbVar11) * 0x16a88000 | (uVar14 ^ *pbVar11) * -0x3361d2af >> 0x11) *
           0x1b873593 ^ uVar12;
LAB_00339464:
  uVar12 = uVar12 ^ (uint)pcVar10;
  uVar12 = (uVar12 ^ uVar12 >> 0x10) * -0x7a143595;
  uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar12 ^ uVar12 >> 0x10);
}



/* Entry: 00340cf8; end: 00340f93;  */

void FUN_00340cf8(long param_1,ulong *param_2)

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
      FUN_00552b00(param_2,&puStack_38);
      if (((ulong)puStack_38 & 1) != 0) {
        FUN_0055293c();
      }
      if (((ulong)puVar7 & 1) == 0) {
        param_2 = (ulong *)*param_2;
        puStack_40 = param_2;
        if (((ulong)param_2 & 1) == 0) {
          if (param_2 == (ulong *)0x0) goto LAB_00340e34;
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
        FUN_003be608("run_poller",&puStack_38,
                     "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/backup_poller.cc"
                     ,0x7c);
        if (((ulong)puStack_38 & 1) != 0) {
          FUN_0055293c();
        }
        if (((ulong)param_2 & 1) != 0) {
          FUN_0055293c(param_2);
        }
      }
    }
LAB_00340e34:
    FUN_00340f94(param_1);
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x78);
  func_0x00339d8c();
  if (*(char *)(param_1 + 0x88) != '\0') {
    func_0x00339da8(*(undefined8 *)(param_1 + 0x78));
    iVar3 = (int)param_1 + 0x98;
    FUN_00339d14();
    if (iVar3 != 0) {
      func_0x003c3e94(*(undefined8 *)(param_1 + 0x80));
      FUN_00338cb8(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)(param_1);
      return;
    }
    return;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x80);
  func_0x003c1f6c();
  uVar5 = *puVar4;
  FUN_003c1e28(uVar5);
  func_0x003c3ea4(&puStack_48,uVar11,0,uVar5);
  puVar6 = *(ulong **)(param_1 + 0x78);
  func_0x00339da8();
  puVar7 = puStack_48;
  if (((ulong)puStack_48 & 1) == 0) {
    if (puStack_48 != (ulong *)0x0) goto LAB_00340e78;
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
LAB_00340e78:
    puStack_38 = puStack_48;
    FUN_003be608("Run client channel backup poller",&puStack_38,
                 "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/backup_poller.cc"
                 ,0x8a);
    if (((ulong)puStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    puVar6 = puStack_38;
    if (((ulong)puVar7 & 1) != 0) {
      FUN_0055293c();
      puVar6 = puVar7;
    }
  }
  func_0x003c1f6c();
  uVar8 = *puVar6;
  FUN_003c1e28();
  lVar9 = 0x7fffffffffffffff;
  if ((((uVar8 != 0x7fffffffffffffff) && (lRam0000000000afa4f8 != 0x7fffffffffffffff)) &&
      (lVar9 = -0x8000000000000000, uVar8 != 0x8000000000000000)) &&
     (lRam0000000000afa4f8 != -0x8000000000000000)) {
    if ((long)uVar8 < 1) {
      if (lRam0000000000afa4f8 < (long)(-0x8000000000000000 - uVar8)) goto LAB_00340f14;
    }
    else if ((long)(uVar8 ^ 0x7fffffffffffffff) < lRam0000000000afa4f8) {
      lVar9 = 0x7fffffffffffffff;
      goto LAB_00340f14;
    }
    lVar9 = lRam0000000000afa4f8 + uVar8;
  }
LAB_00340f14:
  func_0x003cf010(param_1,lVar9,param_1 + 0x38);
  if (((ulong)puStack_48 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00340f94; end: 00340fdb;  */

void FUN_00340f94(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x98;
  FUN_00339d14();
  if (iVar1 != 0) {
    func_0x003c3e94(*(undefined8 *)(param_1 + 0x80));
    FUN_00338cb8(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(param_1);
    return;
  }
  return;
}



/* Entry: 00340fdc; end: 00340fdf;  */

void FUN_00340fdc(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x98;
  FUN_00339d14();
  if (iVar1 != 0) {
    func_0x003c3e94(*(undefined8 *)(param_1 + 0x80));
    FUN_00338cb8(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(param_1);
    return;
  }
  return;
}



/* Entry: 00340fe0; end: 003410bf;  */

long FUN_00340fe0(long param_1)

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
  FUN_00341380(&uStack_38,0);
  FUN_003413d4(auStack_80);
  lVar2 = param_1;
  FUN_003425f8();
  if (lVar2 == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xc0);
    func_0x003a6554();
    if ((undefined **)*puVar1 == &PTR_DAT_009e1cd0) {
      lVar2 = 3;
    }
    else {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                   ,0x47,2,
                   "grpc_channel_check_connectivity_state called on something that is not a client channel"
                  );
      lVar2 = 4;
    }
  }
  else {
    FUN_003468ec();
  }
  FUN_00341470(auStack_80);
  FUN_003414dc(&uStack_38);
  return lVar2;
}



/* Entry: 003410c0; end: 003410c3;  */

undefined8 * FUN_003410c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  *param_1 = &PTR_FUN_009db970;
  param_1[5] = param_1[5] | 1;
  puVar1 = param_1;
  FUN_003c1d50();
  func_0x003c1f6c(param_1[8]);
  *puVar1 = extraout_x8;
  if (((*(byte *)(param_1 + 5) >> 2 & 1) == 0) && ((bRam0000000000b65d08 & 1) != 0)) {
    FUN_0033a9f8();
  }
  return param_1;
}



/* Entry: 003410c4; end: 0034137f;  */

void FUN_003410c4(long param_1,dword param_2,qword param_3,undefined8 param_4,ulong param_5,
                 undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  qword *pqVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  qword *pqVar10;
  undefined1 auStack_c0 [72];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_00341380(&uStack_78,0);
  FUN_003413d4(auStack_c0);
  pqVar5 = &section_000000b8.addr;
  __Znwm();
  pqVar10 = pqVar5 + 1;
  *pqVar10 = 0x100000000;
  *pqVar5 = (qword)&PTR_FUN_009db9a8;
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(dword *)(pqVar5 + 5) = param_2;
  pqVar5[2] = param_1;
  pqVar5[3] = param_5;
  pqVar5[4] = param_6;
  *(undefined1 *)(pqVar5 + 0x1a) = 0;
  uVar6 = param_5;
  FUN_003f6ea0(param_5,param_6);
  if ((uVar6 & 1) != 0) {
    pqVar5[0xc] = (qword)FUN_00341564;
    pqVar5[0xd] = (qword)pqVar5;
    pqVar5[0xe] = 0;
    pqVar5[0x17] = 0x34158c;
    pqVar5[0x18] = (qword)pqVar5;
    pqVar5[0x19] = 0;
    lVar7 = pqVar5[2];
    FUN_003425f8();
    if (lVar7 == 0) {
      puVar9 = *(undefined8 **)(pqVar5[2] + 0xc0);
      func_0x003a6554();
      if ((undefined **)*puVar9 != &PTR_DAT_009e1cd0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                     ,0x7f,2,
                     "grpc_channel_watch_connectivity_state called on something that is not a client channel"
                    );
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                     ,0x82,2,"assertion failed: %s");
        _abort();
        goto LAB_00341300;
      }
      FUN_003b8b9c(param_3,param_4);
      func_0x003cf010(pqVar5 + 0xf,param_3,pqVar5 + 0x16);
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pqVar10,0x10);
        if (bVar3) {
          *pqVar10 = *pqVar10 + 0x100000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pcVar8 = segment_command_00000020.segname + 8;
      __Znwm();
      FUN_003b8b9c(param_3,param_4);
      *(qword **)pcVar8 = pqVar5;
      *(qword *)(pcVar8 + 8) = param_3;
      *(qword *)(pcVar8 + 0x18) = 0x3418ac;
      *(char **)(pcVar8 + 0x20) = pcVar8;
      *(undefined8 *)(pcVar8 + 0x28) = 0;
      FUN_003f7014(param_5);
      func_0x003c3d30();
      FUN_003415d4(lVar7,param_5,param_4,pqVar5 + 5,pqVar5 + 0xb,pcVar8 + 0x10);
    }
    FUN_00341470(auStack_c0);
    FUN_003414dc(&uStack_78);
    return;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
               ,0x6f,2,"assertion failed: %s");
  _abort();
LAB_00341300:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x341304);
  (*pcVar4)();
}



/* Entry: 00341380; end: 003413d3;  */

void FUN_00341380(long *param_1,uint param_2)

{
  long extraout_x8;
  
  func_0x003c1f8c(param_1);
  if (*param_1 == 0) {
    if (((param_2 & 1) == 0) && ((bRam0000000000b65d08 & 1) != 0)) {
      func_0x0033a940();
    }
    func_0x003c1f8c();
    *param_1 = extraout_x8;
  }
  return;
}



/* Entry: 003413d4; end: 0034144f;  */

undefined8 * FUN_003413d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_009db970;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 1;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  param_1[7] = 0;
  puVar1 = param_1;
  func_0x003c1f6c();
  param_1[8] = *puVar1;
  if ((bRam0000000000b65d08 & 1) != 0) {
    func_0x0033a940();
  }
  func_0x003c1f6c();
  *puVar1 = param_1;
  return param_1;
}



/* Entry: 00341450; end: 00341467;  */

void FUN_00341450(void)

{
  code *pcVar1;
  
  FUN_00341470();
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x341464);
  (*pcVar1)();
}



/* Entry: 00341468; end: 0034146f;  */

undefined8 FUN_00341468(void)

{
  return 0;
}



/* Entry: 00341470; end: 003414db;  */

undefined8 * FUN_00341470(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  *param_1 = &PTR_FUN_009db970;
  param_1[5] = param_1[5] | 1;
  puVar1 = param_1;
  FUN_003c1d50();
  func_0x003c1f6c(param_1[8]);
  *puVar1 = extraout_x8;
  if (((*(byte *)(param_1 + 5) >> 2 & 1) == 0) && ((bRam0000000000b65d08 & 1) != 0)) {
    FUN_0033a9f8();
  }
  return param_1;
}



/* Entry: 003414dc; end: 00341563;  */

byte * FUN_003414dc(byte *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  long lVar3;
  
  pbVar1 = param_1;
  func_0x003c1f8c();
  if (*(byte **)pbVar1 == param_1) {
    while (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 != (undefined8 *)0x0) {
      lVar3 = puVar2[2];
      *(long *)(param_1 + 8) = lVar3;
      if (lVar3 == 0) {
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
      }
      (*(code *)*puVar2)(puVar2,*(undefined4 *)((long)puVar2 + 0xc));
    }
    func_0x003c1f8c();
    *puVar2 = 0;
    if (((*param_1 & 1) == 0) && ((bRam0000000000b65d08 & 1) != 0)) {
      FUN_0033a9f8();
    }
  }
  return param_1;
}



/* Entry: 00341564; end: 003415d3;  */

void FUN_00341564(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  func_0x003cf020(param_1 + 0xf);
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
                    /* WARNING: Could not recover jumptable at 0x003418a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 003415d4; end: 00341657;  */

void FUN_003415d4(void)

{
  __Znwm(0x50);
  FUN_00342078();
  return;
}



/* Entry: 00341658; end: 0034176f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00341658(long param_1)

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
    FUN_003b646c(&uStack_30,2,"Timed out waiting for connection state change",0x2d,&uStack_31,
                 auStack_58 + 1);
    puStack_28 = auStack_58 + 1;
    FUN_0033d548(&puStack_28);
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
  FUN_003f6eb0(uVar4,uVar5,auStack_58,FUN_003418dc,param_1,param_1 + 0x30,0);
  if ((auStack_58[0] & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00341770; end: 003418db;  */

undefined8 * FUN_00341770(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009db9a8;
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



/* Entry: 003418dc; end: 00341907;  */

void FUN_003418dc(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00341904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 00341908; end: 00341afb;  */

void FUN_00341908(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  code **ppcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  code *pcVar9;
  code *pcVar10;
  long lVar11;
  int *piVar12;
  char *pcVar13;
  bool bVar14;
  ulong unaff_x22;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_79;
  ulong auStack_78 [4];
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  ulong uStack_40;
  code *pcStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (**(char **)(param_1 + 8) != '\0') {
    func_0x00377a90(param_1,param_2);
  }
  if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
    *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)(*(long *)(param_2 + 8) + 0x90);
    *(code **)(lVar2 + 0xf0) = FUN_00346b88;
    *(long *)(lVar2 + 0xf8) = param_1;
    *(undefined8 *)(lVar2 + 0x100) = 0;
    *(long *)(*(long *)(param_2 + 8) + 0x90) = lVar2 + 0xe8;
  }
  if (*(long *)(lVar2 + 0x110) != 0) {
    puVar6 = (undefined8 *)(*(long *)(lVar2 + 0x110) + 0x10);
    func_0x003a6564(puVar6,0);
                    /* WARNING: Could not recover jumptable at 0x00358990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar6)();
    return;
  }
  pcVar9 = *(code **)(lVar2 + 0x148);
  if (pcVar9 == (code *)0x0) {
    if ((*(byte *)(param_2 + 0x10) >> 6 & 1) == 0) {
      FUN_00346da0(lVar2);
      if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
        puStack_50 = (undefined1 *)0x0;
        FUN_00346de0(param_1,&puStack_50);
        if (((ulong)puStack_50 & 1) == 0) {
          return;
        }
        FUN_0055293c();
        return;
      }
      plVar5 = *(long **)(lVar2 + 0x88);
      pcVar8 = "batch does not include send_initial_metadata";
      do {
        lVar11 = *plVar5;
        lVar2 = lVar11 + -1;
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar14) {
          *plVar5 = lVar2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar2 != 0) {
        if (lVar11 == 0) {
          func_0x00773d94();
          func_0x0040cf10();
          func_0x0040cf10();
          FUN_0033c494(&pcStack_38);
          FUN_0033c494(&stack0xffffffffffffffd0);
          plVar7 = plVar5;
          __Unwind_Resume();
          pcStack_48 = FUN_003bba54;
          plVar7 = plVar7 + 0xb;
          plStack_58 = plVar5;
          puStack_50 = &stack0xfffffffffffffff0;
          do {
            pcVar13 = (char *)*plVar7;
            if (((ulong)pcVar13 & 1) == 0) {
              auStack_78[0] = 0;
LAB_003bbad0:
              do {
                if ((char *)*plVar7 != pcVar13) {
                  ClearExclusiveLocal();
                  bVar14 = true;
                  goto LAB_003bbb24;
                }
                cVar3 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar14) {
                  *plVar7 = (long)pcVar8;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (pcVar13 == (char *)0x0) goto LAB_003bbb14;
              uStack_90 = 0;
              FUN_003c1e6c(&uStack_79,pcVar13,&uStack_90);
              if ((uStack_90 & 1) != 0) {
                FUN_0055293c();
              }
              bVar14 = false;
              pcVar8 = pcVar13;
            }
            else {
              FUN_003b7b3c(auStack_78,(ulong)pcVar13 & 0xfffffffffffffffe);
              if (auStack_78[0] == 0) goto LAB_003bbad0;
              uStack_88 = auStack_78[0];
              if ((auStack_78[0] & 1) != 0) {
                piVar12 = (int *)(auStack_78[0] - 1);
                do {
                  cVar3 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(piVar12,0x10);
                  if (bVar14) {
                    *piVar12 = *piVar12 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              FUN_003c1e6c(&uStack_79,pcVar8,&uStack_88);
              if ((uStack_88 & 1) != 0) {
                FUN_0055293c();
              }
LAB_003bbb14:
              bVar14 = false;
            }
LAB_003bbb24:
            if ((auStack_78[0] & 1) != 0) {
              FUN_0055293c();
            }
            if (!bVar14) {
              return;
            }
          } while( true );
        }
        plVar5 = plVar5 + 1;
        plVar7 = plVar5;
        FUN_0033b3e4(plVar5,&stack0xffffffffffffffdf);
        while (plVar7 == (long *)0x0) {
          plVar7 = plVar5;
          FUN_0033b3e4(plVar5,&stack0xffffffffffffffdf);
        }
        FUN_003b7b6c(&stack0xffffffffffffffd0,plVar7[3]);
        plVar7[3] = 0;
        if ((unaff_x22 & 1) != 0) {
          piVar12 = (int *)(unaff_x22 - 1);
          do {
            cVar3 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar14) {
              *piVar12 = *piVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_003bb81c();
        if ((unaff_x22 & 1) != 0) {
          FUN_0055293c(unaff_x22);
        }
        if ((unaff_x22 & 1) != 0) {
          FUN_0055293c();
        }
      }
      return;
    }
    puVar1 = (ulong *)(lVar2 + 0x148);
    FUN_003450b4(puVar1,*(long *)(param_2 + 8) + 0x98);
    uStack_40 = *puVar1;
    if ((uStack_40 & 1) != 0) {
      piVar12 = (int *)(uStack_40 - 1);
      do {
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar14) {
          *piVar12 = *piVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_00346c1c(lVar2);
    FUN_0033c494(&uStack_40);
    pcStack_48 = (code *)*puVar1;
    if (((ulong)pcStack_48 & 1) != 0) {
      pcVar9 = pcStack_48 + -1;
      do {
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
        if (bVar14) {
          *(int *)pcVar9 = *(int *)pcVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_004007f4(param_2,&pcStack_48,*(undefined8 *)(lVar2 + 0x88));
    ppcVar4 = &pcStack_48;
  }
  else {
    if (((ulong)pcVar9 & 1) != 0) {
      pcVar10 = pcVar9 + -1;
      do {
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
        if (bVar14) {
          *(int *)pcVar10 = *(int *)pcVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pcStack_38 = pcVar9;
    FUN_004007f4(param_2,&pcStack_38,*(undefined8 *)(lVar2 + 0x88));
    ppcVar4 = &pcStack_38;
  }
  FUN_0033c494(ppcVar4);
  return;
}



/* Entry: 00341afc; end: 00341c0f;  */

void FUN_00341afc(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(char *)(param_2 + 0x30) != '\0') {
    FUN_007714d4();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x341bd0);
    (*pcVar3)();
  }
  lVar8 = *(long *)(param_1 + 8);
  if (*(long *)(param_2 + 0x60) != 0) {
    func_0x003c3f00(*(undefined8 *)(lVar8 + 0x60));
  }
  plVar7 = *(long **)(lVar8 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  ppuStack_48 = &PTR_DAT_009dc620;
  pppuVar6 = &ppuStack_48;
  lStack_40 = lVar8;
  lStack_38 = param_2;
  pppuStack_30 = &ppuStack_48;
  FUN_003d0dec(*(undefined8 *)(lVar8 + 0x130),pppuVar6,&uStack_49);
  if (pppuStack_30 == &ppuStack_48) {
    lVar8 = 4;
    pppuVar4 = &ppuStack_48;
LAB_00341b94:
    (*(code *)(*pppuVar4)[lVar8])();
  }
  else {
    pppuVar4 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar8 = 5;
      goto LAB_00341b94;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == &ppuStack_48) {
    lVar8 = 4;
    pppuVar5 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_00341c04;
    lVar8 = 5;
    pppuVar5 = pppuStack_30;
  }
  (*(code *)(*pppuVar5)[lVar8])();
LAB_00341c04:
  __Unwind_Resume();
  __Unwind_Resume();
  FUN_003469fc(pppuVar4[2],pppuVar4,pppuVar4[1],pppuVar6);
  *extraout_x8 = 0;
  return;
}



/* Entry: 00341c10; end: 00341c3f;  */

void FUN_00341c10(undefined8 *param_1,long param_2,undefined8 param_3)

{
  FUN_003469fc(*(undefined8 *)(param_2 + 0x10),param_2,*(undefined8 *)(param_2 + 8),param_3);
  *param_1 = 0;
  return;
}



/* Entry: 00341c40; end: 00341c4b;  */

void FUN_00341c40(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x98) = param_2;
  return;
}



/* Entry: 00341c4c; end: 00341cdf;  */

void FUN_00341c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_38;
  undefined1 uStack_29;
  long lStack_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x110);
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x110) = 0;
  lStack_28 = lVar1;
  FUN_00346aa4();
  if (lVar1 == 0) {
    uStack_38 = 0;
    FUN_003c1e6c(&uStack_29,param_3,&uStack_38);
    FUN_0033c494(&uStack_38);
  }
  else {
    FUN_00358994(lVar1,param_3);
  }
  FUN_00356b78(&lStack_28);
  return;
}



/* Entry: 00341ce0; end: 00341d43;  */

long FUN_00341ce0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (*(int *)(param_3 + 0x14) == 0) {
    func_0x00771508();
  }
  else if ((undefined **)*param_2 == &PTR_FUN_009dba00) {
    *param_1 = 0;
    lVar4 = param_2[1];
    FUN_00342630(lVar4,param_3,param_1);
    return lVar4;
  }
  func_0x0077153c();
  FUN_0033c494(param_1);
  __Unwind_Resume();
  lVar4 = param_2[1];
  FUN_00343304();
  FUN_003a2a64(*(undefined8 *)(lVar4 + 0x18));
  FUN_00340c18(*(undefined8 *)(lVar4 + 0x60));
  func_0x003c3ef0(*(undefined8 *)(lVar4 + 0x60));
  func_0x00353cf0(lVar4 + 0x290,*(undefined8 *)(lVar4 + 0x298));
  func_0x00339d70(lVar4 + 0x250);
  if (*(char *)(lVar4 + 0x24f) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar4 + 0x238));
  }
  if (*(char *)(lVar4 + 0x237) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar4 + 0x220));
  }
  func_0x00339d70(lVar4 + 0x1e0);
  if ((*(ulong *)(lVar4 + 0x1d8) & 1) != 0) {
    FUN_0055293c();
  }
  func_0x00353cb0(lVar4 + 0x1b8,*(undefined8 *)(lVar4 + 0x1c0));
  func_0x00353c70(lVar4 + 0x1a0,*(undefined8 *)(lVar4 + 0x1a8));
  plVar5 = *(long **)(lVar4 + 0x198);
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
  puVar6 = *(undefined8 **)(lVar4 + 400);
  *(undefined8 *)(lVar4 + 400) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)();
  }
  plVar5 = *(long **)(lVar4 + 0x188);
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
  plVar5 = *(long **)(lVar4 + 0x180);
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
  puVar6 = *(undefined8 **)(lVar4 + 0x170);
  *(undefined8 *)(lVar4 + 0x170) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)();
  }
  FUN_003fb02c(lVar4 + 0x140);
  FUN_0033d36c(lVar4 + 0x130);
  plVar5 = *(long **)(lVar4 + 0x120);
  *(undefined8 *)(lVar4 + 0x120) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  func_0x00339d70(lVar4 + 0xe0);
  plVar5 = *(long **)(lVar4 + 0xd8);
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
  plVar5 = *(long **)(lVar4 + 0xd0);
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
  plVar5 = *(long **)(lVar4 + 200);
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
  if ((*(ulong *)(lVar4 + 0xb8) & 1) != 0) {
    FUN_0055293c();
  }
  func_0x00339d70(lVar4 + 0x70);
  if (*(char *)(lVar4 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar4 + 0x40));
  }
  if (*(char *)(lVar4 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar4 + 0x28));
  }
  plVar5 = *(long **)(lVar4 + 0x20);
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
  return lVar4;
}



/* Entry: 00341d44; end: 00341d4b;  */

long FUN_00341d44(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_1 + 8);
  FUN_00343304();
  FUN_003a2a64(*(undefined8 *)(lVar4 + 0x18));
  FUN_00340c18(*(undefined8 *)(lVar4 + 0x60));
  func_0x003c3ef0(*(undefined8 *)(lVar4 + 0x60));
  func_0x00353cf0(lVar4 + 0x290,*(undefined8 *)(lVar4 + 0x298));
  func_0x00339d70(lVar4 + 0x250);
  if (*(char *)(lVar4 + 0x24f) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar4 + 0x238));
  }
  if (*(char *)(lVar4 + 0x237) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar4 + 0x220));
  }
  func_0x00339d70(lVar4 + 0x1e0);
  if ((*(ulong *)(lVar4 + 0x1d8) & 1) != 0) {
    FUN_0055293c();
  }
  func_0x00353cb0(lVar4 + 0x1b8,*(undefined8 *)(lVar4 + 0x1c0));
  func_0x00353c70(lVar4 + 0x1a0,*(undefined8 *)(lVar4 + 0x1a8));
  plVar5 = *(long **)(lVar4 + 0x198);
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
  puVar6 = *(undefined8 **)(lVar4 + 400);
  *(undefined8 *)(lVar4 + 400) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)();
  }
  plVar5 = *(long **)(lVar4 + 0x188);
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
  plVar5 = *(long **)(lVar4 + 0x180);
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
  puVar6 = *(undefined8 **)(lVar4 + 0x170);
  *(undefined8 *)(lVar4 + 0x170) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)();
  }
  FUN_003fb02c(lVar4 + 0x140);
  FUN_0033d36c(lVar4 + 0x130);
  plVar5 = *(long **)(lVar4 + 0x120);
  *(undefined8 *)(lVar4 + 0x120) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  func_0x00339d70(lVar4 + 0xe0);
  plVar5 = *(long **)(lVar4 + 0xd8);
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
  plVar5 = *(long **)(lVar4 + 0xd0);
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
  plVar5 = *(long **)(lVar4 + 200);
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
  if ((*(ulong *)(lVar4 + 0xb8) & 1) != 0) {
    FUN_0055293c();
  }
  func_0x00339d70(lVar4 + 0x70);
  if (*(char *)(lVar4 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar4 + 0x40));
  }
  if (*(char *)(lVar4 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar4 + 0x28));
  }
  plVar5 = *(long **)(lVar4 + 0x20);
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
  return lVar4;
}



/* Entry: 00341d4c; end: 00341deb;  */

void FUN_00341d4c(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00339d8c(lVar2 + 0x1e0);
  if (*param_2 != 0) {
    plVar1 = (long *)(lVar2 + 0x220);
    if (*(char *)(lVar2 + 0x237) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    FUN_00339490();
    *(long **)*param_2 = plVar1;
  }
  if (param_2[1] != 0) {
    plVar1 = (long *)(lVar2 + 0x238);
    if (*(char *)(lVar2 + 0x24f) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    FUN_00339490();
    *(long **)param_2[1] = plVar1;
  }
  func_0x00339da8(lVar2 + 0x1e0);
  return;
}



/* Entry: 00341dec; end: 00342077;  */

long * FUN_00341dec(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                   undefined4 *param_5,long param_6,long param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    plVar5 = param_1;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    *(long *)((long)register0x00000008 + -0x70) = param_6;
    unaff_x22 = plVar5 + 1;
    *unaff_x22 = 1;
    *plVar5 = (long)&PTR_FUN_009dba78;
    plVar5[2] = (long)param_2;
    plVar5[3] = (long)param_3;
    plVar5[4] = (long)param_4;
    *(undefined4 *)(plVar5 + 5) = *param_5;
    plVar5[6] = (long)param_5;
    plVar5[7] = param_6;
    plVar5[8] = param_7;
    *(undefined1 *)(plVar5 + 9) = 0;
    FUN_003c3d80(plVar5 + 3,*(undefined8 *)(param_2 + 0x60));
    plVar8 = *(long **)(plVar5[2] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar9 = plVar5[2];
    func_0x00339d8c(lVar9 + 0x250);
    param_2 = param_2 + 0x290;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    puVar6 = param_2;
    FUN_00353334(param_2,(undefined1 *)((long)register0x00000008 + -0x70),&UNK_008000a0,
                 (undefined1 *)((long)register0x00000008 + -0x60),
                 (undefined1 *)((long)register0x00000008 + -0x61));
    if (*(long *)(puVar6 + 0x28) != 0) {
      *(char **)((long)register0x00000008 + -0x80) =
           "chand->external_watchers_[on_complete] == nullptr";
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0x2c8,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x341fcc);
      (*pcVar4)();
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x22,0x10);
      if (bVar3) {
        *unaff_x22 = *unaff_x22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    param_4 = (undefined1 *)((long)register0x00000008 + -0x60);
    param_5 = (undefined4 *)((long)register0x00000008 + -0x61);
    FUN_00353334(param_2,(undefined1 *)((long)register0x00000008 + -0x70),&UNK_008000a0);
    plVar8 = *(long **)(param_2 + 0x28);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(long **)(param_2 + 0x28) = plVar5;
    func_0x00339da8(lVar9 + 0x250);
    uVar7 = *(undefined8 *)(plVar5[2] + 0x130);
    *(undefined ***)((long)register0x00000008 + -0x58) = &PTR_FUN_009dbe18;
    *(long **)((long)register0x00000008 + -0x50) = plVar5;
    unaff_x20 = (long *)((long)register0x00000008 + -0x58);
    *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
    param_2 = (undefined1 *)((long)register0x00000008 + -0x58);
    param_3 = (undefined1 *)((long)register0x00000008 + -0x60);
    FUN_003d0dec(uVar7);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x40);
    if (unaff_x21 == unaff_x20) {
      lVar9 = 4;
      unaff_x21 = (long *)((long)register0x00000008 + -0x58);
LAB_00341f60:
      (**(code **)(*unaff_x21 + lVar9 * 8))();
    }
    else if (unaff_x21 != (long *)0x0) {
      lVar9 = 5;
      goto LAB_00341f60;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x38)) {
      return plVar5;
    }
    ___stack_chk_fail();
    plVar8 = *(long **)((long)register0x00000008 + -0x40);
    if (plVar8 == unaff_x20) {
      lVar9 = 4;
      plVar8 = (long *)((long)register0x00000008 + -0x58);
LAB_00342004:
      (**(code **)(*plVar8 + lVar9 * 8))();
    }
    else if (plVar8 != (long *)0x0) {
      lVar9 = 5;
      goto LAB_00342004;
    }
    __Unwind_Resume(unaff_x21);
    unaff_x30 = FUN_00342078;
    param_1 = unaff_x21;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x19 = plVar5;
  } while( true );
}



/* Entry: 00342078; end: 0034207b;  */

long * FUN_00342078(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                   undefined4 *param_5,long param_6,long param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    plVar7 = param_1;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    *(long *)((long)register0x00000008 + -0x70) = param_6;
    unaff_x22 = plVar7 + 1;
    *unaff_x22 = 1;
    *plVar7 = (long)&PTR_FUN_009dba78;
    plVar7[2] = (long)param_2;
    plVar7[3] = (long)param_3;
    plVar7[4] = (long)param_4;
    *(undefined4 *)(plVar7 + 5) = *param_5;
    plVar7[6] = (long)param_5;
    plVar7[7] = param_6;
    plVar7[8] = param_7;
    *(undefined1 *)(plVar7 + 9) = 0;
    FUN_003c3d80(plVar7 + 3,*(undefined8 *)(param_2 + 0x60));
    plVar8 = *(long **)(plVar7[2] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar9 = plVar7[2];
    func_0x00339d8c(lVar9 + 0x250);
    param_2 = param_2 + 0x290;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    puVar5 = param_2;
    FUN_00353334(param_2,(undefined1 *)((long)register0x00000008 + -0x70),&UNK_008000a0,
                 (undefined1 *)((long)register0x00000008 + -0x60),
                 (undefined1 *)((long)register0x00000008 + -0x61));
    if (*(long *)(puVar5 + 0x28) != 0) {
      *(char **)((long)register0x00000008 + -0x80) =
           "chand->external_watchers_[on_complete] == nullptr";
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0x2c8,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x341fcc);
      (*pcVar4)();
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x22,0x10);
      if (bVar3) {
        *unaff_x22 = *unaff_x22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    param_4 = (undefined1 *)((long)register0x00000008 + -0x60);
    param_5 = (undefined4 *)((long)register0x00000008 + -0x61);
    FUN_00353334(param_2,(undefined1 *)((long)register0x00000008 + -0x70),&UNK_008000a0);
    plVar8 = *(long **)(param_2 + 0x28);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(long **)(param_2 + 0x28) = plVar7;
    func_0x00339da8(lVar9 + 0x250);
    uVar6 = *(undefined8 *)(plVar7[2] + 0x130);
    *(undefined ***)((long)register0x00000008 + -0x58) = &PTR_FUN_009dbe18;
    *(long **)((long)register0x00000008 + -0x50) = plVar7;
    unaff_x20 = (long *)((long)register0x00000008 + -0x58);
    *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
    param_2 = (undefined1 *)((long)register0x00000008 + -0x58);
    param_3 = (undefined1 *)((long)register0x00000008 + -0x60);
    FUN_003d0dec(uVar6);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x40);
    if (unaff_x21 == unaff_x20) {
      lVar9 = 4;
      unaff_x21 = (long *)((long)register0x00000008 + -0x58);
LAB_00341f60:
      (**(code **)(*unaff_x21 + lVar9 * 8))();
    }
    else if (unaff_x21 != (long *)0x0) {
      lVar9 = 5;
      goto LAB_00341f60;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x38)) {
      return plVar7;
    }
    ___stack_chk_fail();
    plVar8 = *(long **)((long)register0x00000008 + -0x40);
    if (plVar8 == unaff_x20) {
      lVar9 = 4;
      plVar8 = (long *)((long)register0x00000008 + -0x58);
LAB_00342004:
      (**(code **)(*plVar8 + lVar9 * 8))();
    }
    else if (plVar8 != (long *)0x0) {
      lVar9 = 5;
      goto LAB_00342004;
    }
    __Unwind_Resume(unaff_x21);
    unaff_x30 = FUN_00342078;
    param_1 = unaff_x21;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x19 = plVar7;
  } while( true );
}



/* Entry: 0034207c; end: 003420db;  */

undefined8 * FUN_0034207c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_009dba78;
  func_0x003c3de0(param_1 + 3,*(undefined8 *)(param_1[2] + 0x60));
  plVar3 = *(long **)(param_1[2] + 8);
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
  return param_1;
}



/* Entry: 003420dc; end: 003420df;  */

undefined8 * FUN_003420dc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_009dba78;
  func_0x003c3de0(param_1 + 3,*(undefined8 *)(param_1[2] + 0x60));
  plVar3 = *(long **)(param_1[2] + 8);
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
  return param_1;
}



/* Entry: 003420e0; end: 003420f3;  */

void FUN_003420e0(void)

{
  FUN_0034207c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003420f4; end: 0034222b;  */

void FUN_003420f4(long param_1,ulong param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  func_0x00339d8c(param_1 + 0x250);
  plVar5 = *(long **)(param_1 + 0x298);
  if (plVar5 != (long *)0x0) {
    plVar4 = (long *)(param_1 + 0x298);
    do {
      plVar3 = plVar5 + 1;
      if (param_2 <= (ulong)plVar5[4]) {
        plVar4 = plVar5;
        plVar3 = plVar5;
      }
      plVar5 = (long *)*plVar3;
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != (long *)(param_1 + 0x298)) && ((ulong)plVar4[4] <= param_2)) {
      plVar5 = (long *)plVar4[5];
      plVar4[5] = 0;
      FUN_003534ec(param_1 + 0x290);
      goto LAB_00342164;
    }
  }
  plVar5 = (long *)0x0;
LAB_00342164:
  func_0x00339da8(param_1 + 0x250);
  if ((plVar5 == (long *)0x0) || (param_3 == 0)) {
    if (plVar5 == (long *)0x0) {
      return;
    }
  }
  else {
    FUN_0034222c(plVar5);
  }
  plVar4 = plVar5 + 1;
  do {
    lVar6 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003421d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))(plVar5);
  return;
}



/* Entry: 0034222c; end: 0034236f;  */

void FUN_0034222c(undefined ***param_1,undefined ***param_2)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  long lVar5;
  undefined ***pppuStack_f8;
  ulong uStack_f0;
  undefined1 uStack_e1;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined ***pppuStack_b8;
  undefined1 uStack_a9;
  undefined **ppuStack_a8;
  undefined ***pppuStack_a0;
  undefined ***pppuStack_90;
  long lStack_88;
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_58;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  undefined ***pppuStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  pppuVar3 = param_1 + 9;
  do {
    if (*(char *)pppuVar3 != '\0') {
      ClearExclusiveLocal();
      goto LAB_003422e8;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
    if (bVar2) {
      *(char *)pppuVar3 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_58 = 4;
  FUN_003c1e6c(&uStack_49,param_1[7],&uStack_58);
  if ((uStack_58 & 1) != 0) {
    FUN_0055293c();
  }
  ppuStack_48 = &PTR_DAT_009dbf18;
  param_2 = &ppuStack_48;
  pppuStack_40 = param_1;
  pppuStack_30 = &ppuStack_48;
  FUN_003d0dec(param_1[2][0x26],param_2,&uStack_49);
  if (pppuStack_30 == &ppuStack_48) {
    lVar5 = 4;
    param_1 = &ppuStack_48;
LAB_003422dc:
    (*(code *)(*param_1)[lVar5])();
  }
  else {
    param_1 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar5 = 5;
      goto LAB_003422dc;
    }
  }
LAB_003422e8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x0040cf10();
    if (pppuStack_30 == &ppuStack_48) {
      lVar5 = 4;
      pppuVar3 = &ppuStack_48;
    }
    else {
      if (pppuStack_30 == (undefined ***)0x0) goto LAB_00342368;
      lVar5 = 5;
      pppuVar3 = pppuStack_30;
    }
    (*(code *)(*pppuVar3)[lVar5])();
  }
LAB_00342368:
  __Unwind_Resume();
  puStack_70 = &stack0xfffffffffffffff0;
  pcStack_68 = FUN_00342370;
  lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
  pppuVar3 = param_1 + 9;
  do {
    if (*(char *)pppuVar3 != '\0') {
      ClearExclusiveLocal();
      pppuVar3 = param_1;
      goto LAB_0034244c;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
    if (bVar2) {
      *(char *)pppuVar3 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_003420f4(param_1[2],param_1[7],0);
  *(int *)param_1[6] = (int)param_2;
  pppuStack_b8 = (undefined ***)0x0;
  FUN_003c1e6c(&uStack_a9,param_1[7],&pppuStack_b8);
  pppuVar3 = pppuStack_b8;
  if (((ulong)pppuStack_b8 & 1) != 0) {
    FUN_0055293c();
  }
  if ((int)param_2 != 4) {
    ppuStack_a8 = &PTR_DAT_009dbe98;
    param_2 = &ppuStack_a8;
    pppuStack_a0 = param_1;
    pppuStack_90 = param_2;
    FUN_003d0dec(param_1[2][0x26],&ppuStack_a8,&uStack_a9);
    if (pppuStack_90 == param_2) {
      lVar5 = 4;
      pppuVar3 = &ppuStack_a8;
    }
    else {
      pppuVar3 = pppuStack_90;
      if (pppuStack_90 == (undefined ***)0x0) goto LAB_0034244c;
      lVar5 = 5;
    }
    (*(code *)(*pppuVar3)[lVar5])();
  }
LAB_0034244c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_90 == param_2) {
    lVar5 = 4;
    pppuVar4 = &ppuStack_a8;
  }
  else {
    if (pppuStack_90 == (undefined ***)0x0) goto LAB_003424c8;
    lVar5 = 5;
    pppuVar4 = pppuStack_90;
  }
  (*(code *)(*pppuVar4)[lVar5])();
LAB_003424c8:
  pppuVar4 = pppuVar3;
  __Unwind_Resume();
  pppuStack_e0 = param_2;
  pppuStack_d8 = pppuVar3;
  ppuStack_d0 = &puStack_70;
  pcStack_c8 = FUN_003424d0;
  uStack_f0 = 0;
  FUN_00342584(&uStack_e1,pppuVar4[8],&uStack_f0);
  if ((uStack_f0 & 1) != 0) {
    FUN_0055293c();
  }
  pppuStack_f8 = pppuVar4;
  FUN_003fb030(pppuVar4[2] + 0x28,*(undefined4 *)(pppuVar4 + 5),&pppuStack_f8);
  pppuVar3 = pppuStack_f8;
  pppuStack_f8 = (undefined ***)0x0;
  if (pppuVar3 != (undefined ***)0x0) {
    (*(code *)**pppuVar3)();
  }
  return;
}



/* Entry: 00342370; end: 003424cf;  */

void FUN_00342370(undefined ***param_1,undefined ***param_2)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  long lVar5;
  undefined ***pppuStack_98;
  ulong uStack_90;
  undefined1 uStack_81;
  undefined ***pppuStack_80;
  undefined ***pppuStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined ***pppuStack_58;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  undefined ***pppuStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  pppuVar3 = param_1 + 9;
  do {
    if (*(char *)pppuVar3 != '\0') {
      ClearExclusiveLocal();
      pppuVar3 = param_1;
      goto LAB_0034244c;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
    if (bVar2) {
      *(char *)pppuVar3 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_003420f4(param_1[2],param_1[7],0);
  *(int *)param_1[6] = (int)param_2;
  pppuStack_58 = (undefined ***)0x0;
  FUN_003c1e6c(&uStack_49,param_1[7],&pppuStack_58);
  pppuVar3 = pppuStack_58;
  if (((ulong)pppuStack_58 & 1) != 0) {
    FUN_0055293c();
  }
  if ((int)param_2 != 4) {
    ppuStack_48 = &PTR_DAT_009dbe98;
    param_2 = &ppuStack_48;
    pppuStack_40 = param_1;
    pppuStack_30 = param_2;
    FUN_003d0dec(param_1[2][0x26],&ppuStack_48,&uStack_49);
    if (pppuStack_30 == param_2) {
      lVar5 = 4;
      pppuVar3 = &ppuStack_48;
    }
    else {
      pppuVar3 = pppuStack_30;
      if (pppuStack_30 == (undefined ***)0x0) goto LAB_0034244c;
      lVar5 = 5;
    }
    (*(code *)(*pppuVar3)[lVar5])();
  }
LAB_0034244c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == param_2) {
    lVar5 = 4;
    pppuVar4 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_003424c8;
    lVar5 = 5;
    pppuVar4 = pppuStack_30;
  }
  (*(code *)(*pppuVar4)[lVar5])();
LAB_003424c8:
  pppuVar4 = pppuVar3;
  __Unwind_Resume();
  pcStack_68 = FUN_003424d0;
  uStack_90 = 0;
  pppuStack_80 = param_2;
  pppuStack_78 = pppuVar3;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_00342584(&uStack_81,pppuVar4[8],&uStack_90);
  if ((uStack_90 & 1) != 0) {
    FUN_0055293c();
  }
  pppuStack_98 = pppuVar4;
  FUN_003fb030(pppuVar4[2] + 0x28,*(undefined4 *)(pppuVar4 + 5),&pppuStack_98);
  pppuVar3 = pppuStack_98;
  pppuStack_98 = (undefined ***)0x0;
  if (pppuVar3 != (undefined ***)0x0) {
    (*(code *)**pppuVar3)();
  }
  return;
}



/* Entry: 003424d0; end: 00342583;  */

void FUN_003424d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uStack_30 = 0;
  FUN_00342584(&uStack_21,param_1[8],&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_38 = param_1;
  FUN_003fb030(param_1[2] + 0x140,*(undefined4 *)(param_1 + 5),&puStack_38);
  puVar1 = puStack_38;
  puStack_38 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return;
}



/* Entry: 00342584; end: 003425f7;  */

void FUN_00342584(undefined8 param_1,long param_2,ulong *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  ulong uStack_28;
  
  if (param_2 != 0) {
    pcVar1 = *(code **)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    uStack_28 = *param_3;
    if ((uStack_28 & 1) != 0) {
      piVar5 = (int *)(uStack_28 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar4) {
          *piVar5 = *piVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    (*pcVar1)(uVar2,&uStack_28);
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 003425f8; end: 0034262f;  */

undefined8 FUN_003425f8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xc0);
  func_0x003a6554();
  if ((undefined **)*puVar1 == &PTR_FUN_009dba00) {
    uVar2 = puVar1[1];
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 00342630; end: 00342fe7;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00342630(undefined1 *param_1,undefined8 *param_2,ulong *param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 *puVar19;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_139;
  char *pcStack_138;
  ulong uStack_130;
  byte bStack_121;
  ulong uStack_120;
  long lStack_118;
  long alStack_110 [4];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  char *pcStack_d0;
  ulong uStack_c8;
  char *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar4 = (undefined1)param_2[1];
  FUN_00377c30();
  *param_1 = uVar4;
  *(undefined8 *)(param_1 + 8) = *param_2;
  uVar5 = param_2[1];
  FUN_003584c0();
  puVar16 = (undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *puVar16 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  puVar19 = (undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *puVar19 = 0;
  pcVar17 = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  piVar6 = (int *)param_2[1];
  FUN_003a28d0(piVar6,"grpc.internal.channelz_channel_node");
  if ((piVar6 == (int *)0x0) || (*piVar6 != 2)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(piVar6 + 4);
  }
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  func_0x003c3ee0();
  *(int **)(param_1 + 0x60) = piVar6;
  FUN_003645b8();
  *(int **)(param_1 + 0x68) = piVar6;
  FUN_00339d50(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  param_1[0xc0] = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  FUN_00339d50(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_00353ba4(&pcStack_a0);
  *(char **)(param_1 + 0x140) = "client_channel";
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined1 **)(param_1 + 0x158) = param_1 + 0x160;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  uVar5 = param_2[1];
  param_1[0x178] = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  func_0x003a2e80(uVar5,"grpc.use_local_subchannel_pool",0);
  if ((int)uVar5 == 0) {
    FUN_00358f68(&pcStack_a0);
    pcVar10 = pcStack_a0;
  }
  else {
    pcVar10 = segment_command_00000020.segname;
    __Znwm();
    *(undefined ***)pcVar10 = &PTR_DAT_009dd208;
    pcVar10[8] = '\x01';
    pcVar10[9] = '\0';
    pcVar10[10] = '\0';
    pcVar10[0xb] = '\0';
    pcVar10[0xc] = '\0';
    pcVar10[0xd] = '\0';
    pcVar10[0xe] = '\0';
    pcVar10[0xf] = '\0';
    *(qword *)(pcVar10 + 0x20) = 0;
    *(qword *)(pcVar10 + 0x18) = 0;
    *(char **)(pcVar10 + 0x10) = pcVar10 + 0x18;
  }
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(char **)(param_1 + 0x198) = pcVar10;
  *(undefined1 **)(param_1 + 0x1a0) = param_1 + 0x1a8;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 **)(param_1 + 0x1b8) = param_1 + 0x1c0;
  *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  FUN_00339d50();
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  FUN_00339d50();
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined1 **)(param_1 + 0x290) = param_1 + 0x298;
  FUN_00340ac0(*(undefined8 *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x10) == 0) {
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f0 = 0;
    iVar13 = 0x8bfea2;
    FUN_003b646c(&pcStack_d0,2,"Missing client channel factory in args for client channel filter",
                 0x40,&pcStack_138,alStack_110 + 4);
    pcVar10 = (char *)*param_3;
    if (pcStack_d0 == pcVar10) {
LAB_00342938:
      if (((ulong)pcVar10 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_3 = (ulong)pcStack_d0;
      pcStack_d0 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar10 & 1) != 0) {
        FUN_0055293c();
        pcVar10 = pcStack_d0;
        goto LAB_00342938;
      }
    }
    pcStack_a0 = (char *)(alStack_110 + 4);
  }
  else {
    pcVar7 = (char *)param_2[1];
    pcVar10 = "grpc.service_config";
    pcVar18 = "grpc.service_config";
    func_0x003a2dcc(pcVar7,"grpc.service_config");
    pcVar9 = "{}";
    if (pcVar7 != (char *)0x0) {
      pcVar9 = pcVar7;
    }
    uVar8 = *param_3;
    if (uVar8 != 0) {
      *param_3 = 0;
      pcStack_a0 = segment_command_00000020.segname + 0xe;
      if (((uVar8 & 1) != 0) && (FUN_0055293c(), ((ulong)pcStack_a0 & 1) != 0)) {
        FUN_0055293c();
      }
    }
    uVar5 = param_2[1];
    pcVar7 = pcVar9;
    _strlen(pcVar9);
    FUN_003e8aa0(&pcStack_a0,uVar5,pcVar9,pcVar7,param_3);
    pcVar7 = pcStack_a0;
    iVar13 = (int)pcVar9;
    pcVar9 = (char *)*puVar19;
    if (pcVar9 != (char *)0x0) {
      pcVar1 = pcVar9 + 8;
      do {
        lVar15 = *(long *)pcVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar3) {
          *(long *)pcVar1 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 + -1 == 0) {
        (**(code **)(*(long *)pcVar9 + 8))();
      }
    }
    *puVar19 = pcVar7;
    if (*param_3 != 0) {
      if (pcVar7 != (char *)0x0) {
        pcVar17 = pcVar7 + 8;
        do {
          lVar15 = *(long *)pcVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
          if (bVar3) {
            *(long *)pcVar17 = lVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar15 + -1 == 0) {
          (**(code **)(*(long *)pcVar7 + 8))();
          pcVar9 = pcVar7;
        }
      }
      *puVar19 = 0;
      pcVar17 = pcVar10;
      goto LAB_00342950;
    }
    lVar15 = param_2[1];
    func_0x003a2dcc(lVar15,"grpc.server_uri");
    if (lVar15 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(pcVar17,lVar15);
      lStack_118 = 0;
      alStack_110[0] = 0;
      FUN_00360cc8(lVar15,param_2[1],alStack_110,&lStack_118);
      if (alStack_110[0] != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(pcVar17);
        FUN_00338cb8(alStack_110[0]);
      }
      lVar11 = lRam0000000000b65d18;
      if (lRam0000000000b65d18 == 0) {
        FUN_003b171c();
      }
      uVar8 = lVar11 + 0xf0;
      if ((char)param_1[0x3f] < '\0') {
        pcVar9 = *(char **)(param_1 + 0x28);
        uVar14 = *(ulong *)(param_1 + 0x30);
      }
      else {
        uVar14 = (ulong)(byte)param_1[0x3f];
        pcVar9 = pcVar17;
      }
      FUN_003d413c(uVar8,pcVar9,uVar14);
      if ((uVar8 & 1) != 0) {
        pcStack_d0 = "grpc.service_config";
        lVar11 = lStack_118;
        if (lStack_118 == 0) {
          lVar11 = param_2[1];
        }
        FUN_003a26f0(lVar11,&pcStack_d0,1);
        *(long *)(param_1 + 0x18) = lVar11;
        FUN_003a2a64(lStack_118);
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        func_0x003a2d4c(uVar5,"grpc.keepalive_time_ms",0x1ffffffff,0x7fffffff);
        *(int *)(param_1 + 0x1d0) = (int)uVar5;
        lVar11 = *(long *)(param_1 + 0x18);
        func_0x003a2dcc(lVar11,"grpc.default_authority");
        if (lVar11 == 0) {
          lVar11 = lRam0000000000b65d18;
          if (lRam0000000000b65d18 == 0) {
            FUN_003b171c();
          }
          lVar12 = lVar15;
          _strlen(lVar15);
          FUN_003d4930(&pcStack_a0,lVar11 + 0xf0,lVar15,lVar12);
          iVar13 = (int)lVar15;
          if ((char)param_1[0x57] < '\0') {
            __ZdlPv(*puVar16);
          }
          *(undefined8 *)(param_1 + 0x48) = uStack_98;
          *puVar16 = pcStack_a0;
          *(undefined8 *)(param_1 + 0x50) = uStack_90;
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar16);
          iVar13 = (int)lVar11;
        }
        pcVar9 = (char *)*param_3;
        pcVar17 = pcVar10;
        if (pcVar9 != (char *)0x0) {
          *param_3 = 0;
          pcStack_a0 = segment_command_00000020.segname + 0xe;
          pcVar17 = pcVar18;
          if ((((ulong)pcVar9 & 1) != 0) &&
             (FUN_0055293c(), pcVar9 = pcStack_a0, ((ulong)pcStack_a0 & 1) != 0)) {
            FUN_0055293c();
          }
        }
        goto LAB_00342950;
      }
      pcStack_a0 = "the target uri is not valid: ";
      uStack_98 = 0x1d;
      uStack_c8 = *(ulong *)(param_1 + 0x30);
      pcStack_d0 = *(char **)(param_1 + 0x28);
      if (-1 < (char)param_1[0x3f]) {
        uStack_c8 = (ulong)(byte)param_1[0x3f];
        pcStack_d0 = pcVar17;
      }
      FUN_00575d30(&pcStack_138,&pcStack_a0,&pcStack_d0);
      pcVar17 = pcStack_138;
      if (-1 < (char)bStack_121) {
        uStack_130 = (ulong)bStack_121;
        pcVar17 = (char *)&pcStack_138;
      }
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_158 = 0;
      FUN_003b646c(&uStack_120,2,pcVar17,uStack_130,&uStack_139,&uStack_158);
      iVar13 = (int)pcVar17;
      uVar8 = *param_3;
      if (uStack_120 == uVar8) {
LAB_00342b80:
        if ((uVar8 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        *param_3 = uStack_120;
        uStack_120 = 0x36;
        if ((uVar8 & 1) != 0) {
          FUN_0055293c();
          uVar8 = uStack_120;
          goto LAB_00342b80;
        }
      }
      puStack_d8 = &uStack_158;
      pcVar9 = (char *)&puStack_d8;
      FUN_0033d548();
      pcVar17 = pcVar18;
      if ((char)bStack_121 < '\0') {
        __ZdlPv();
        pcVar9 = pcStack_138;
      }
      goto LAB_00342950;
    }
    alStack_110[2] = 0;
    alStack_110[3] = 0;
    alStack_110[1] = 0;
    iVar13 = 0x8bff07;
    FUN_003b646c(&pcStack_d0,2,
                 "target URI channel arg missing or wrong type in client channel filter",0x45,
                 &pcStack_138,alStack_110 + 1);
    pcVar17 = (char *)*param_3;
    if (pcStack_d0 == pcVar17) {
LAB_00342a5c:
      if (((ulong)pcVar17 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_3 = (ulong)pcStack_d0;
      pcStack_d0 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar17 & 1) != 0) {
        FUN_0055293c();
        pcVar17 = pcStack_d0;
        goto LAB_00342a5c;
      }
    }
    pcStack_a0 = (char *)(alStack_110 + 1);
    pcVar17 = pcVar10;
  }
  pcVar9 = (char *)&pcStack_a0;
  FUN_0033d548();
LAB_00342950:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
    ___stack_chk_fail();
    if (iVar13 != 0) {
      func_0x0040cf10();
      if ((char)param_1[0x57] < '\0') {
        __ZdlPv(*puVar16);
      }
      if ((char)param_1[0x3f] < '\0') {
        __ZdlPv(*(undefined8 *)pcVar17);
      }
      pcVar17 = (char *)*puVar19;
      if (pcVar17 != (char *)0x0) {
        pcVar10 = pcVar17 + 8;
        do {
          lVar15 = *(long *)pcVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
          if (bVar3) {
            *(long *)pcVar10 = lVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar15 + -1 == 0) goto LAB_00342fd8;
      }
    }
    do {
      pcVar17 = pcVar9;
      __Unwind_Resume();
LAB_00342fd8:
      (**(code **)(*(long *)pcVar17 + 8))();
    } while( true );
  }
  return param_1;
}



/* Entry: 00342fe8; end: 00343023;  */

long * FUN_00342fe8(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 00343024; end: 0034305f;  */

long * FUN_00343024(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 00343060; end: 00343303;  */

long FUN_00343060(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  FUN_00343304();
  FUN_003a2a64(*(undefined8 *)(param_1 + 0x18));
  FUN_00340c18(*(undefined8 *)(param_1 + 0x60));
  func_0x003c3ef0(*(undefined8 *)(param_1 + 0x60));
  func_0x00353cf0(param_1 + 0x290,*(undefined8 *)(param_1 + 0x298));
  func_0x00339d70(param_1 + 0x250);
  if (*(char *)(param_1 + 0x24f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x238));
  }
  if (*(char *)(param_1 + 0x237) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x220));
  }
  func_0x00339d70(param_1 + 0x1e0);
  if ((*(ulong *)(param_1 + 0x1d8) & 1) != 0) {
    FUN_0055293c();
  }
  func_0x00353cb0(param_1 + 0x1b8,*(undefined8 *)(param_1 + 0x1c0));
  func_0x00353c70(param_1 + 0x1a0,*(undefined8 *)(param_1 + 0x1a8));
  plVar4 = *(long **)(param_1 + 0x198);
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
  puVar5 = *(undefined8 **)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
  }
  plVar4 = *(long **)(param_1 + 0x188);
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
  plVar4 = *(long **)(param_1 + 0x180);
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
  puVar5 = *(undefined8 **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
  }
  FUN_003fb02c(param_1 + 0x140);
  FUN_0033d36c(param_1 + 0x130);
  plVar4 = *(long **)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  func_0x00339d70(param_1 + 0xe0);
  plVar4 = *(long **)(param_1 + 0xd8);
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
  plVar4 = *(long **)(param_1 + 0xd0);
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
  plVar4 = *(long **)(param_1 + 200);
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
  if ((*(ulong *)(param_1 + 0xb8) & 1) != 0) {
    FUN_0055293c();
  }
  func_0x00339d70(param_1 + 0x70);
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  plVar4 = *(long **)(param_1 + 0x20);
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
  return param_1;
}



/* Entry: 00343304; end: 0034336b;  */

void FUN_00343304(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x170);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    (**(code **)*puVar1)();
    if (*(long *)(param_1 + 400) != 0) {
      func_0x003c3f30(*(undefined8 *)(*(long *)(param_1 + 400) + 0x20),
                      *(undefined8 *)(param_1 + 0x60));
      puVar1 = *(undefined8 **)(param_1 + 400);
      *(undefined8 *)(param_1 + 400) = 0;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)();
      }
    }
  }
  return;
}



/* Entry: 0034336c; end: 003433cb;  */

void FUN_0034336c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  uStack_48 = param_2;
  uStack_39 = param_7;
  uStack_38 = param_6;
  uStack_30 = param_5;
  uStack_28 = param_4;
  FUN_003433cc(uVar1,&uStack_48,param_3,&uStack_28,&uStack_30,&uStack_38,&uStack_39);
  *param_1 = uVar1;
  return;
}



/* Entry: 003433cc; end: 00343453;  */

ulong * FUN_003433cc(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                    ulong *param_6,undefined1 *param_7)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  do {
    uVar7 = *param_1;
    uVar4 = uVar7 + 0x1f0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[2] < uVar4) {
    func_0x003d6048(param_1,0x1f0);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar7 + 0x30);
  }
  uVar4 = *param_2;
  uVar7 = *param_4;
  uVar5 = *param_5;
  uVar6 = *param_6;
  uVar1 = *param_7;
  *param_1 = (ulong)&PTR_FUN_009dbb40;
  param_1[1] = 1;
  param_1[2] = uVar4;
  puVar8 = (ulong *)param_3[3];
  plVar9 = (long *)*puVar8;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar10 = *puVar8;
  uVar11 = puVar8[3];
  uVar4 = puVar8[2];
  param_1[4] = puVar8[1];
  param_1[3] = uVar10;
  param_1[6] = uVar11;
  param_1[5] = uVar4;
  uVar4 = param_3[6];
  param_1[7] = param_3[5];
  param_1[8] = uVar4;
  uVar4 = param_3[7];
  param_1[9] = *param_3;
  param_1[10] = uVar4;
  uVar4 = param_3[2];
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar6;
  plVar9 = *(long **)(uVar4 + 0x20);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9,uVar1);
  }
  param_1[0xf] = (ulong)plVar9;
  FUN_0033a6ec();
  param_1[0x10] = uVar10;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  return param_1;
}



/* Entry: 00343454; end: 003442af;  */

/* WARNING: Removing unreachable block (ram,0x00343e30) */
/* WARNING: Removing unreachable block (ram,0x003439d8) */
/* WARNING: Removing unreachable block (ram,0x00343a84) */
/* WARNING: Removing unreachable block (ram,0x00343f00) */
/* WARNING: Removing unreachable block (ram,0x00343f0c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00343454(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  uint uVar4;
  long *******ppppppplVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  long ******pppppplVar9;
  long *plVar10;
  undefined8 uVar11;
  long *******ppppppplVar12;
  long lVar13;
  undefined1 uVar14;
  ulong uVar15;
  int *piVar16;
  undefined4 uVar17;
  long *******ppppppplVar18;
  long lVar19;
  ulong uVar20;
  long ******pppppplVar21;
  long *plVar22;
  ulong *puVar23;
  long *******ppppppplVar24;
  long *******ppppppplVar25;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined1 auStack_2a0 [80];
  long *plStack_250;
  undefined8 auStack_248 [2];
  char cStack_231;
  long *******ppppppplStack_230;
  long *plStack_228;
  long *plStack_220;
  ulong uStack_218;
  long *******ppppppplStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  undefined1 uStack_1d1;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  long ******pppppplStack_198;
  long ******pppppplStack_190;
  char *pcStack_188;
  undefined8 *******pppppppuStack_180;
  undefined1 uStack_178;
  long *******ppppppplStack_170;
  undefined8 uStack_168;
  undefined7 uStack_160;
  char cStack_159;
  undefined8 uStack_150;
  char cStack_139;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 *****apppppuStack_120 [3];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *******pppppppuStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long ******pppppplStack_80;
  long ******pppppplStack_78;
  long ******pppppplStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(long *)(param_1 + 0x170) == 0) {
LAB_00343ec8:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppppppplStack_1f0 = (long *******)0x0;
    ppppppplStack_1e8 = (long *******)0x0;
    ppppppplStack_1e0 = (long *******)0x0;
    if ((*param_2 == 0) && (param_2[1] != param_2[2])) {
      if (*(char *)(param_1 + 0x178) == '\0') {
        ppppppplVar24 = (long *******)&ppppppplStack_1e0;
        lVar13 = 1;
        FUN_00353d74();
        ppppppplStack_1e0 = ppppppplVar24 + lVar13;
        ppppppplVar25 = ppppppplVar24 + 1;
        *ppppppplVar24 = (long ******)"Address list became non-empty";
        ppppppplVar12 = ppppppplStack_1e8;
        while (ppppppplStack_1e8 != ppppppplStack_1f0) {
          ppppppplStack_1e8 = ppppppplStack_1e8 + -1;
          ppppppplVar24 = ppppppplVar24 + -1;
          *ppppppplVar24 = *ppppppplStack_1e8;
          ppppppplVar12 = ppppppplStack_1f0;
        }
        ppppppplStack_1f0 = ppppppplVar24;
        ppppppplStack_1e8 = ppppppplVar25;
        if (ppppppplVar12 != (long *******)0x0) {
          __ZdlPv(ppppppplVar12);
          ppppppplStack_1e8 = ppppppplVar25;
        }
      }
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
      if (*(char *)(param_1 + 0x178) != '\0') {
        ppppppplVar24 = (long *******)&ppppppplStack_1e0;
        lVar13 = 1;
        FUN_00353d74();
        ppppppplStack_1e0 = ppppppplVar24 + lVar13;
        ppppppplVar25 = ppppppplVar24 + 1;
        *ppppppplVar24 = (long ******)"Address list became empty";
        ppppppplVar12 = ppppppplStack_1e8;
        while (ppppppplStack_1e8 != ppppppplStack_1f0) {
          ppppppplStack_1e8 = ppppppplStack_1e8 + -1;
          ppppppplVar24 = ppppppplVar24 + -1;
          *ppppppplVar24 = *ppppppplStack_1e8;
          ppppppplVar12 = ppppppplStack_1f0;
        }
        ppppppplStack_1f0 = ppppppplVar24;
        if (ppppppplVar12 != (long *******)0x0) {
          ppppppplStack_1e8 = ppppppplVar25;
          __ZdlPv(ppppppplVar12);
        }
        uVar14 = 0;
        ppppppplStack_1e8 = ppppppplVar25;
      }
    }
    *(undefined1 *)(param_1 + 0x178) = uVar14;
    ppppppplStack_210 = (long *******)0x0;
    uStack_208 = 0;
    lStack_200 = 0;
    puVar23 = (ulong *)(param_2 + 4);
    if (*puVar23 == 0) {
LAB_003436d8:
      plVar22 = (long *)param_2[5];
      if (plVar22 == (long *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          ppppppplVar24 = (long *******)0x0;
          plVar22 = (long *)0x0;
        }
        else {
          plVar22 = (long *)(*(long *)(param_1 + 0x20) + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar2) {
              *plVar22 = *plVar22 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          ppppppplVar24 = (long *******)0x0;
          plVar22 = *(long **)(param_1 + 0x20);
joined_r0x0034371c:
          if (plVar22 != (long *)0x0) goto LAB_0034377c;
        }
      }
      else {
        param_2[5] = 0;
        FUN_003586c4(&ppppppplStack_170,param_2[9]);
        ppppppplVar24 = ppppppplStack_170;
LAB_0034377c:
        lVar13 = *(long *)(param_1 + 0x68);
        plVar6 = plVar22;
        (**(code **)(*plVar22 + 0x18))();
        if (plVar6[1] == 0) {
LAB_003437f8:
          pcStack_188 = (char *)(plVar6 + 2);
          if (*(char *)((long)plVar6 + 0x27) < '\0') {
            if (plVar6[3] == 0) goto LAB_0034381c;
            pcStack_188 = *(char **)pcStack_188;
LAB_00343894:
LAB_00343898:
            if (pcStack_188 == (char *)0x0) goto LAB_0034389c;
          }
          else {
            if (*(char *)((long)plVar6 + 0x27) != '\0') goto LAB_00343894;
LAB_0034381c:
            pcVar8 = (char *)param_2[9];
            func_0x003a2dcc(pcVar8,"grpc.lb_policy_name");
            ppppppplStack_170 = (long *******)((ulong)ppppppplStack_170 & 0xffffffffffffff00);
            if (pcVar8 != (char *)0x0) {
              pcStack_188 = pcVar8;
              FUN_0035fd88();
              uVar4 = 0;
              if ((char)ppppppplStack_170 == '\0') {
                uVar4 = (uint)pcVar8;
              }
              if ((uVar4 & 1) == 0) {
                uVar17 = 0x4a4;
                if ((char)ppppppplStack_170 != '\0') {
                  uVar17 = 0x49f;
                }
                pcVar8 = 
                "LB policy: %s passed through channel_args does not exist. Using pick_first instead."
                ;
                if ((char)ppppppplStack_170 != '\0') {
                  pcVar8 = 
                  "LB policy: %s passed through channel_args must not require a config. Using pick_first instead."
                  ;
                }
                FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                             ,uVar17,2,pcVar8);
                pcStack_188 = "pick_first";
                goto LAB_00343894;
              }
              goto LAB_00343898;
            }
LAB_0034389c:
            pcStack_188 = "pick_first";
          }
          uStack_1c8 = 0;
          uStack_1c0 = 0;
          puStack_1d0 = &uStack_1c8;
          func_0x00349078(&ppppppplStack_170,&pcStack_188,&puStack_1d0);
          FUN_003490ec(&plStack_1b8,&ppppppplStack_170,1,&uStack_1d1);
          uStack_108 = 5;
          uStack_100 = 0;
          lStack_f8 = 0;
          uStack_f0 = 0;
          plStack_e8 = plStack_1b8;
          lStack_e0 = lStack_1b0;
          lStack_d8 = lStack_1a8;
          plVar7 = &lStack_e0;
          if (lStack_1a8 != 0) {
            plStack_1b8 = &lStack_1b0;
            *(long **)(lStack_1b0 + 0x10) = &lStack_e0;
            lStack_1b0 = 0;
            lStack_1a8 = 0;
            plVar7 = plStack_e8;
          }
          plStack_e8 = plVar7;
          pppppuStack_d0 = (undefined8 *****)0x0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          pppppppuStack_180 = &pppppppuStack_1a0;
          pppppplStack_198 = (long ******)0x0;
          pppppplStack_190 = (long ******)0x0;
          pppppppuStack_1a0 = (undefined8 *******)0x0;
          uStack_178 = 0;
          pppppplVar9 = (long ******)0x50;
          __Znwm();
          pppppplVar21 = (long ******)&pppppplStack_190;
          pppppplStack_190 = pppppplVar9 + 10;
          pppppppuStack_1a0 = (undefined8 *******)pppppplVar9;
          pppppplStack_198 = pppppplVar9;
          FUN_00349fb0(pppppplVar21,&uStack_108,&pppppppuStack_b8,pppppplVar9);
          pppppppuStack_b8 = (undefined8 *******)CONCAT44(pppppppuStack_b8._4_4_,6);
          uStack_b0 = 0;
          uStack_a8 = 0;
          plStack_98 = &lStack_90;
          lStack_90 = 0;
          uStack_88 = 0;
          uStack_a0 = 0;
          pppppplStack_80 = (long ******)pppppppuStack_1a0;
          pppppplStack_70 = pppppplStack_190;
          pppppppuStack_1a0 = (undefined8 *******)0x0;
          pppppplStack_198 = (long ******)0x0;
          pppppplStack_190 = (long ******)0x0;
          pppppppuStack_180 = &pppppppuStack_1a0;
          pppppplStack_78 = pppppplVar21;
          FUN_0034a050(&pppppppuStack_180);
          pppppppuStack_180 = (undefined8 *******)&pppppuStack_d0;
          FUN_0034a050(&pppppppuStack_180);
          func_0x003499b4(&plStack_e8,lStack_e0);
          func_0x003499b4(&plStack_1b8,lStack_1b0);
          pppppppuStack_180 = (undefined8 *******)apppppuStack_120;
          FUN_0034a050(&pppppppuStack_180);
          func_0x003499b4(auStack_138,uStack_130);
          if (cStack_139 < '\0') {
            __ZdlPv(uStack_150);
          }
          if (cStack_159 < '\0') {
            __ZdlPv(ppppppplStack_170);
          }
          func_0x003499b4(&puStack_1d0,uStack_1c8);
          ppppppplStack_170 = (long *******)0x0;
          FUN_0035feb8(&plStack_220,&pppppppuStack_b8,&ppppppplStack_170);
          if (plStack_220 == (long *)0x0) {
            uVar11 = 0x4bf;
          }
          else {
            if (ppppppplStack_170 == (long *******)0x0) {
              ppppppplStack_170 = &pppppplStack_80;
              FUN_0034a050(&ppppppplStack_170);
              lVar13 = lStack_90;
              func_0x003499b4(&plStack_98);
              goto LAB_00343a8c;
            }
            uVar11 = 0x4c0;
          }
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                       ,uVar11,2,"assertion failed: %s");
          _abort();
          goto LAB_00343fe4;
        }
        plVar7 = (long *)(plVar6[1] + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plVar7 = (long *)plVar6[1];
        if (plVar7 == (long *)0x0) goto LAB_003437f8;
        plVar10 = plVar7 + 1;
        do {
          lVar19 = *plVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar19 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar19 + -1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
        plStack_220 = (long *)0x0;
        if (plVar6[1] != 0) {
          plVar7 = (long *)(plVar6[1] + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = *plVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          plStack_220 = (long *)plVar6[1];
        }
LAB_00343a8c:
        if (*(long *)(param_1 + 0x180) == 0) {
LAB_00343ae4:
          uVar4 = 1;
        }
        else {
          plVar7 = plVar22;
          (**(code **)(*plVar22 + 0x10))();
          plVar10 = *(long **)(param_1 + 0x180);
          lVar19 = lVar13;
          (**(code **)(*plVar10 + 0x10))();
          if (lVar13 != lVar19) goto LAB_00343ae4;
          _memcmp(plVar7,plVar10,lVar13);
          uVar4 = (uint)((int)plVar7 != 0);
        }
        uVar11 = *(undefined8 *)(param_1 + 0x188);
        FUN_00344528(uVar11,ppppppplVar24);
        uVar4 = uVar4 | (uint)uVar11 ^ 1;
        if (uVar4 == 1) {
          plVar7 = plStack_220;
          ppppppplStack_230 = ppppppplVar24;
          plStack_228 = plVar22;
          (**(code **)(*plStack_220 + 0x10))();
          FUN_00353254(auStack_248,plVar7);
          FUN_003445bc(param_1,&plStack_228,&ppppppplStack_230,auStack_248);
          if (cStack_231 < '\0') {
            __ZdlPv(auStack_248[0]);
          }
          if (ppppppplStack_230 != (long *******)0x0) {
            ppppppplVar24 = ppppppplStack_230 + 1;
            do {
              pppppplVar21 = *ppppppplVar24;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar24,0x10);
              if (bVar2) {
                *ppppppplVar24 = (long ******)((long)pppppplVar21 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if ((long ******)((long)pppppplVar21 + -1) == (long ******)0x0) {
              (*(code *)(*ppppppplStack_230)[1])();
            }
          }
          if (plStack_228 != (long *)0x0) {
            plVar22 = plStack_228 + 1;
            do {
              lVar13 = *plVar22;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar2) {
                *plVar22 = lVar13 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar13 == 1) {
              (**(code **)(*plStack_228 + 8))();
            }
          }
          ppppppplVar24 = (long *******)0x0;
          plVar22 = (long *)0x0;
        }
        plStack_250 = plStack_220;
        plStack_220 = (long *)0x0;
        func_0x003d3ad8(auStack_2a0,param_2);
        FUN_003447b8(param_1,&plStack_250,plVar6 + 5,auStack_2a0);
        FUN_003d3950(auStack_2a0);
        if (plStack_250 != (long *)0x0) {
          plVar6 = plStack_250 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 + -1 == 0) {
            (**(code **)(*plStack_250 + 8))();
          }
        }
        if (uVar4 != 0) {
          FUN_00344a28(param_1);
          if (ppppppplStack_1e8 < ppppppplStack_1e0) {
            *ppppppplStack_1e8 = (long ******)"Service config changed";
            ppppppplStack_1e8 = ppppppplStack_1e8 + 1;
          }
          else {
            lVar13 = (long)ppppppplStack_1e8 - (long)ppppppplStack_1f0 >> 3;
            uVar15 = lVar13 + 1;
            if (uVar15 >> 0x3d != 0) {
              FUN_00353d60(&ppppppplStack_1f0);
              goto LAB_00343fe4;
            }
            uVar20 = (long)ppppppplStack_1e0 - (long)ppppppplStack_1f0 >> 2;
            if (uVar20 <= uVar15) {
              uVar20 = uVar15;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)ppppppplStack_1e0 - (long)ppppppplStack_1f0)) {
              uVar20 = 0x1fffffffffffffff;
            }
            if (uVar20 == 0) {
              ppppppplVar12 = (long *******)0x0;
            }
            else {
              ppppppplVar12 = (long *******)&ppppppplStack_1e0;
              FUN_00353d74();
            }
            ppppppplVar25 = ppppppplVar12 + lVar13;
            ppppppplVar18 = ppppppplVar25 + 1;
            *ppppppplVar25 = (long ******)"Service config changed";
            ppppppplVar5 = ppppppplStack_1e8;
            while (ppppppplVar5 != ppppppplStack_1f0) {
              ppppppplVar5 = ppppppplVar5 + -1;
              ppppppplVar25 = ppppppplVar25 + -1;
              *ppppppplVar25 = *ppppppplVar5;
              ppppppplStack_1e8 = ppppppplStack_1f0;
            }
            bVar2 = ppppppplStack_1e8 != (long *******)0x0;
            ppppppplStack_1f0 = ppppppplVar25;
            ppppppplStack_1e8 = ppppppplVar18;
            ppppppplStack_1e0 = ppppppplVar12 + uVar20;
            if (bVar2) {
              __ZdlPv();
              ppppppplStack_1e8 = ppppppplVar18;
            }
          }
        }
        if (plStack_220 != (long *)0x0) {
          plVar6 = plStack_220 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 + -1 == 0) {
            (**(code **)(*plStack_220 + 8))();
          }
        }
      }
LAB_00343d98:
      if (ppppppplStack_1f0 != ppppppplStack_1e8) {
        ppppppplStack_170 = (long *******)0x8c0000;
        uStack_168 = 0x12;
        FUN_00353da8(&pppppppuStack_1a0,ppppppplStack_1f0,ppppppplStack_1e8,", ",2,&plStack_1b8);
        uStack_b0 = (ulong)pppppplStack_198;
        pppppppuStack_b8 = pppppppuStack_1a0;
        if (-1 < (long)pppppplStack_190) {
          uStack_b0 = (ulong)pppppplStack_190 >> 0x38;
          pppppppuStack_b8 = &pppppppuStack_1a0;
        }
        FUN_00575d30(&uStack_108,&ppppppplStack_170,&pppppppuStack_b8);
        if ((long)pppppplStack_190 < 0) {
          __ZdlPv(pppppppuStack_1a0);
        }
        lVar13 = *(long *)(param_1 + 0x58);
        if (lVar13 != 0) {
          uStack_2c0 = CONCAT44(uStack_104,uStack_108);
          uStack_2b8 = uStack_100;
          lStack_2b0 = lStack_f8;
          func_0x003ec34c(&ppppppplStack_170,&uStack_2c0);
          FUN_003a75b4(lVar13 + 0x70,1,&ppppppplStack_170);
          if (lStack_2b0 < 0) {
            __ZdlPv(uStack_2c0);
          }
        }
      }
      if (ppppppplVar24 != (long *******)0x0) {
        ppppppplVar12 = ppppppplVar24 + 1;
        do {
          pppppplVar21 = *ppppppplVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
          if (bVar2) {
            *ppppppplVar12 = (long ******)((long)pppppplVar21 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long ******)((long)pppppplVar21 + -1) == (long ******)0x0) {
          (*(code *)(*ppppppplVar24)[1])(ppppppplVar24);
        }
      }
      if (plVar22 != (long *)0x0) {
        plVar6 = plVar22 + 1;
        do {
          lVar13 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar22 + 8))(plVar22);
        }
      }
      if (lStack_200 < 0) {
        __ZdlPv(ppppppplStack_210);
      }
      if (ppppppplStack_1f0 != (long *******)0x0) {
        ppppppplStack_1e8 = ppppppplStack_1f0;
        __ZdlPv();
      }
      goto LAB_00343ec8;
    }
    FUN_00552ec8(&ppppppplStack_170,puVar23,1);
    if (lStack_200 < 0) {
      __ZdlPv(ppppppplStack_210);
    }
    uStack_208 = uStack_168;
    ppppppplStack_210 = ppppppplStack_170;
    lStack_200 = CONCAT17(cStack_159,uStack_160);
    ppppppplVar24 = ppppppplStack_170;
    if (-1 < cStack_159) {
      ppppppplVar24 = (long *******)&ppppppplStack_210;
    }
    ppppppplVar12 = (long *******)&ppppppplStack_1e0;
    if (ppppppplStack_1e8 < ppppppplStack_1e0) {
      ppppppplVar25 = ppppppplStack_1e8 + 1;
      *ppppppplStack_1e8 = (long ******)ppppppplVar24;
LAB_00343688:
      uVar15 = *puVar23;
      ppppppplStack_1e8 = ppppppplVar25;
      if (uVar15 == 0) goto LAB_003436d8;
      if (*(long *)(param_1 + 0x180) == 0) {
        if ((uVar15 & 1) != 0) {
          piVar16 = (int *)(uVar15 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar2) {
              *piVar16 = *piVar16 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_218 = uVar15;
        FUN_003442b0(param_1,&uStack_218);
        if ((uStack_218 & 1) != 0) {
          FUN_0055293c();
        }
        if (ppppppplStack_1e8 < ppppppplStack_1e0) {
          ppppppplVar5 = ppppppplStack_1e8 + 1;
          *ppppppplStack_1e8 = (long ******)"no valid service config";
        }
        else {
          lVar13 = (long)ppppppplStack_1e8 - (long)ppppppplStack_1f0 >> 3;
          uVar15 = lVar13 + 1;
          if (uVar15 >> 0x3d != 0) {
            FUN_00353d60(&ppppppplStack_1f0);
            goto LAB_00343fe4;
          }
          uVar20 = (long)ppppppplStack_1e0 - (long)ppppppplStack_1f0 >> 2;
          if (uVar20 <= uVar15) {
            uVar20 = uVar15;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppppppplStack_1e0 - (long)ppppppplStack_1f0)) {
            uVar20 = 0x1fffffffffffffff;
          }
          if (uVar20 == 0) {
            ppppppplVar12 = (long *******)0x0;
          }
          else {
            FUN_00353d74();
          }
          ppppppplVar24 = ppppppplVar12 + lVar13;
          ppppppplVar5 = ppppppplVar24 + 1;
          *ppppppplVar24 = (long ******)"no valid service config";
          ppppppplVar25 = ppppppplStack_1e8;
          while (ppppppplVar25 != ppppppplStack_1f0) {
            ppppppplVar25 = ppppppplVar25 + -1;
            ppppppplVar24 = ppppppplVar24 + -1;
            *ppppppplVar24 = *ppppppplVar25;
            ppppppplStack_1e8 = ppppppplStack_1f0;
          }
          ppppppplStack_1f0 = ppppppplVar24;
          ppppppplStack_1e0 = ppppppplVar12 + uVar20;
          if (ppppppplStack_1e8 != (long *******)0x0) {
            ppppppplStack_1e8 = ppppppplVar5;
            __ZdlPv();
          }
        }
        ppppppplVar24 = (long *******)0x0;
        plVar22 = (long *)0x0;
        ppppppplStack_1e8 = ppppppplVar5;
        goto LAB_00343d98;
      }
      plVar22 = (long *)(*(long *)(param_1 + 0x180) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar2) {
          *plVar22 = *plVar22 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar22 = *(long **)(param_1 + 0x180);
      if (*(long *)(param_1 + 0x188) != 0) {
        plVar6 = (long *)(*(long *)(param_1 + 0x188) + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        ppppppplVar24 = *(long ********)(param_1 + 0x188);
        goto joined_r0x0034371c;
      }
      ppppppplVar24 = (long *******)0x0;
      if (plVar22 == (long *)0x0) goto LAB_00343d98;
      goto LAB_0034377c;
    }
    lVar13 = (long)ppppppplStack_1e8 - (long)ppppppplStack_1f0 >> 3;
    uVar15 = lVar13 + 1;
    if (uVar15 >> 0x3d == 0) {
      uVar20 = (long)ppppppplStack_1e0 - (long)ppppppplStack_1f0 >> 2;
      if (uVar20 <= uVar15) {
        uVar20 = uVar15;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)ppppppplStack_1e0 - (long)ppppppplStack_1f0)) {
        uVar20 = 0x1fffffffffffffff;
      }
      if (uVar20 == 0) {
        ppppppplVar5 = (long *******)0x0;
      }
      else {
        ppppppplVar5 = ppppppplVar12;
        FUN_00353d74();
      }
      ppppppplVar18 = ppppppplVar5 + lVar13;
      ppppppplVar25 = ppppppplVar18 + 1;
      *ppppppplVar18 = (long ******)ppppppplVar24;
      ppppppplVar24 = ppppppplStack_1e8;
      while (ppppppplVar24 != ppppppplStack_1f0) {
        ppppppplVar24 = ppppppplVar24 + -1;
        ppppppplVar18 = ppppppplVar18 + -1;
        *ppppppplVar18 = *ppppppplVar24;
        ppppppplStack_1e8 = ppppppplStack_1f0;
      }
      ppppppplStack_1f0 = ppppppplVar18;
      ppppppplStack_1e0 = ppppppplVar5 + uVar20;
      if (ppppppplStack_1e8 != (long *******)0x0) {
        ppppppplStack_1e8 = ppppppplVar25;
        __ZdlPv();
      }
      goto LAB_00343688;
    }
  }
  FUN_00353d60(&ppppppplStack_1f0);
LAB_00343fe4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x343fe8);
  (*pcVar3)();
}



/* Entry: 003442b0; end: 00344527;  */

void FUN_003442b0(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  dword *pdVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  dword *pdStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  if ((*(long *)(param_1 + 0x170) != 0) && (*(long *)(param_1 + 400) == 0)) {
    uStack_60 = *param_2;
    if ((uStack_60 & 1) != 0) {
      piVar6 = (int *)(uStack_60 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003fbec4(&uStack_58,&uStack_60);
    if ((uStack_60 & 1) != 0) {
      FUN_0055293c();
    }
    func_0x00339d8c(param_1 + 0x70);
    uVar3 = *(ulong *)(param_1 + 0xb8);
    uVar7 = *param_2;
    if (uVar7 != uVar3) {
      if ((uVar7 & 1) != 0) {
        piVar6 = (int *)(uVar7 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar7 = *param_2;
      }
      *(ulong *)(param_1 + 0xb8) = uVar7;
      if ((uVar3 & 1) != 0) {
        FUN_0055293c();
      }
    }
    for (plVar10 = *(long **)(param_1 + 0xb0); plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1])
    {
      lVar8 = *plVar10;
      uVar9 = *(undefined8 *)(lVar8 + 0x10);
      uStack_68 = 0;
      uVar4 = uVar9;
      FUN_0034510c(uVar9,lVar8,&uStack_68);
      uVar3 = uStack_68;
      if ((int)uVar4 == 0) {
        if ((uStack_68 & 1) != 0) goto LAB_003443cc;
      }
      else {
        uStack_70 = uStack_68;
        if ((uStack_68 & 1) != 0) {
          piVar6 = (int *)(uStack_68 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
              *piVar6 = *piVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_00345350(uVar9,lVar8,&uStack_70);
        if ((uVar3 & 1) != 0) {
          FUN_0055293c(uVar3);
LAB_003443cc:
          FUN_0055293c(uVar3);
        }
      }
    }
    func_0x00339da8(param_1 + 0x70);
    pdVar5 = &MACH_HEADER.ncmds;
    __Znwm();
    uVar3 = *param_2;
    if ((uVar3 & 1) == 0) {
      *(undefined ***)pdVar5 = &PTR_FUN_009dbfe8;
      *(ulong *)(pdVar5 + 2) = uVar3;
    }
    else {
      piVar6 = (int *)(uVar3 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      *(undefined ***)pdVar5 = &PTR_FUN_009dbfe8;
      *(ulong *)(pdVar5 + 2) = uVar3;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      FUN_0055293c();
    }
    pdStack_78 = pdVar5;
    FUN_003453d8(param_1,3,param_2,"resolver failure",&pdStack_78);
    pdVar5 = pdStack_78;
    pdStack_78 = (dword *)0x0;
    if (pdVar5 != (dword *)0x0) {
      (**(code **)(*(long *)pdVar5 + 8))();
    }
    if ((uStack_58 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 00344528; end: 003445bb;  */

long * FUN_00344528(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)(ulong)(param_1 == (long *)0x0 && param_2 == (long *)0x0);
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x10))();
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x10))(param_2);
    _strcmp(plVar1,plVar2);
    if ((int)plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003445b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1,param_2);
      return param_1;
    }
    plVar1 = (long *)0x0;
  }
  return plVar1;
}



/* Entry: 003445bc; end: 003447b7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003445bc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 ******ppppppuVar7;
  undefined1 *puVar8;
  dword *pdVar9;
  dword *pdVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *******pppppppuVar23;
  long *plVar24;
  undefined8 ******ppppppuVar25;
  dword *pdVar26;
  char *pcVar27;
  undefined8 uVar28;
  undefined8 *******pppppppuVar29;
  long *plVar30;
  char *pcStack_2b0;
  char *pcStack_2a8;
  undefined8 *******pppppppuStack_2a0;
  undefined8 *******pppppppuStack_298;
  undefined8 *******pppppppuStack_290;
  long *plStack_288;
  undefined8 *******pppppppuStack_280;
  undefined8 *******pppppppuStack_278;
  undefined8 *******apppppppuStack_270 [2];
  undefined1 auStack_260 [32];
  byte bStack_240;
  undefined7 uStack_23f;
  undefined8 *******apppppppuStack_238 [8];
  long lStack_1f8;
  undefined1 auStack_198 [72];
  undefined8 ******ppppppuStack_150;
  char *apcStack_148 [4];
  undefined1 auStack_128 [32];
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 *******apppppppuStack_d8 [4];
  long lStack_b8;
  undefined8 *******pppppppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  plVar6 = (long *)*param_2;
  puVar16 = param_2;
  puVar17 = param_3;
  puVar18 = param_4;
  (**(code **)(*plVar6 + 0x10))();
  if (puVar16 < (undefined8 *)0x7ffffffffffffff8) {
    if ((undefined8 *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar16) {
      uVar1 = ((ulong)puVar16 & 0xfffffffffffffff8) + 8;
      if (((ulong)puVar16 | 7) != 0x17) {
        uVar1 = (ulong)puVar16 | 7;
      }
      pppppppuVar11 = (undefined8 *******)(uVar1 + 1);
      __Znwm();
      uStack_58 = uVar1 + 1 | 0x8000000000000000;
      pppppppuStack_68 = pppppppuVar11;
      puStack_60 = puVar16;
    }
    else {
      uStack_58 = CONCAT17((char)puVar16,(undefined7)uStack_58);
      pppppppuVar11 = &pppppppuStack_68;
      if (puVar16 == (undefined8 *)0x0) goto LAB_00344664;
    }
    _memmove(pppppppuVar11,plVar6,puVar16);
LAB_00344664:
    *(undefined1 *)((long)pppppppuVar11 + (long)puVar16) = 0;
    uVar28 = *param_2;
    plVar6 = *(long **)(param_1 + 0x180);
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 1;
      do {
        lVar21 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar21 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    *(undefined8 *)(param_1 + 0x180) = uVar28;
    *param_2 = 0;
    func_0x00339d8c(param_1 + 0x1e0);
    if (*(char *)(param_1 + 0x237) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x220));
    }
    uVar19 = param_4[1];
    uVar28 = *param_4;
    *(undefined8 *)(param_1 + 0x230) = param_4[2];
    *(undefined8 *)(param_1 + 0x228) = uVar19;
    *(undefined8 *)(param_1 + 0x220) = uVar28;
    *(undefined1 *)((long)param_4 + 0x17) = 0;
    *(undefined1 *)param_4 = 0;
    if (*(char *)(param_1 + 0x24f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x238));
    }
    *(undefined8 **)(param_1 + 0x240) = puStack_60;
    *(undefined8 *)(param_1 + 0x238) = pppppppuStack_68;
    *(ulong *)(param_1 + 0x248) = uStack_58;
    uStack_58 = uStack_58 & 0xffffffffffffff;
    pppppppuStack_68 = (undefined8 *******)((ulong)pppppppuStack_68 & 0xffffffffffffff00);
    func_0x00339da8(param_1 + 0x1e0);
    uVar28 = *param_3;
    plVar6 = *(long **)(param_1 + 0x188);
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 1;
      do {
        lVar21 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar21 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    *(undefined8 *)(param_1 + 0x188) = uVar28;
    *param_3 = 0;
    if (-1 < (long)uStack_58) {
      return;
    }
                    /* WARNING: Trying to construct memory range beyond end of address space: ram */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(pppppppuStack_68);
    return;
  }
  pppppppuVar11 = &pppppppuStack_68;
  func_0x0033b318();
  func_0x0040cf10();
  if (uStack_58._7_1_ < '\0') {
    __ZdlPv(pppppppuStack_68);
  }
  __Unwind_Resume();
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034a0d4(auStack_128);
  uStack_e8 = 0;
  lStack_f0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  plStack_108 = (long *)0x0;
  func_0x0034a2ec(auStack_128,puVar18);
  uVar28 = *puVar16;
  if (plStack_108 != (long *)0x0) {
    plVar6 = plStack_108 + 1;
    do {
      lVar21 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar21 + -1 == 0) {
      (**(code **)(*plStack_108 + 8))();
    }
  }
  *puVar16 = 0;
  plStack_108 = (long *)uVar28;
  if (lStack_f0 < 0) {
    __ZdlPv(uStack_100);
  }
  uStack_f8 = puVar18[7];
  uStack_100 = puVar18[6];
  lStack_f0 = puVar18[8];
  *(undefined1 *)((long)puVar18 + 0x47) = 0;
  *(undefined1 *)(puVar18 + 6) = 0;
  uStack_e0 = 0;
  if (*(char *)(puVar17 + 3) != '\0') {
    puVar16 = (undefined8 *)*puVar17;
    if (-1 < *(char *)((long)puVar17 + 0x17)) {
      puVar16 = puVar17;
    }
    FUN_003a2ec4(apcStack_148,"grpc.internal.health_check_service_name",puVar16);
    FUN_00353fa0(&uStack_e0,apcStack_148);
  }
  apcStack_148[0] = "grpc.internal.config_selector";
  uVar28 = puVar18[9];
  pppppppuVar29 = apppppppuStack_d8;
  if ((uStack_e0 & 1) != 0) {
    pppppppuVar29 = apppppppuStack_d8[0];
  }
  FUN_003a24dc(uVar28,apcStack_148,1,pppppppuVar29,uStack_e0 >> 1);
  ppppppuVar25 = pppppppuVar11[0x32];
  uStack_e8 = uVar28;
  if (ppppppuVar25 == (undefined8 ******)0x0) {
    FUN_003456c4(&ppppppuStack_150,pppppppuVar11);
    ppppppuVar25 = ppppppuStack_150;
    ppppppuStack_150 = (undefined8 ******)0x0;
    ppppppuVar7 = pppppppuVar11[0x32];
    pppppppuVar11[0x32] = ppppppuVar25;
    if (ppppppuVar7 != (undefined8 ******)0x0) {
      (*(code *)**ppppppuVar7)();
      ppppppuVar25 = ppppppuStack_150;
      ppppppuStack_150 = (undefined8 ******)0x0;
      if (ppppppuVar25 != (undefined8 ******)0x0) {
        (*(code *)**ppppppuVar25)();
      }
    }
    ppppppuVar25 = pppppppuVar11[0x32];
  }
  func_0x0035b724(auStack_198,auStack_128);
  iVar15 = (int)auStack_198;
  (*(code *)(*ppppppuVar25)[4])(ppppppuVar25);
  FUN_0034a4dc(auStack_198);
  if ((uStack_e0 & 1) != 0) {
    __ZdlPv(apppppppuStack_d8[0]);
  }
  puVar8 = auStack_128;
  FUN_0034a4dc();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar15 != 0) {
    func_0x0040cf10();
    if ((uStack_e0 & 1) != 0) {
      __ZdlPv(apppppppuStack_d8[0]);
    }
    FUN_0034a4dc(auStack_128);
  }
  __Unwind_Resume();
  lStack_1f8 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(long *)(puVar8 + 0x180) == 0) {
    uVar28 = 0;
  }
  else {
    plVar6 = (long *)(*(long *)(puVar8 + 0x180) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar28 = *(undefined8 *)(puVar8 + 0x180);
  }
  if (*(long *)(puVar8 + 0x188) == 0) {
LAB_00344aa4:
    pdVar26 = &MACH_HEADER.flags;
    __Znwm();
    uVar19 = 0;
    if (*(long *)(puVar8 + 0x180) != 0) {
      plVar6 = (long *)(*(long *)(puVar8 + 0x180) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar19 = *(undefined8 *)(puVar8 + 0x180);
    }
    *(undefined ***)pdVar26 = &PTR_FUN_009dc300;
    *(undefined8 *)(pdVar26 + 2) = 1;
    *(undefined8 *)(pdVar26 + 4) = uVar19;
  }
  else {
    plVar6 = (long *)(*(long *)(puVar8 + 0x188) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pdVar26 = *(dword **)(puVar8 + 0x188);
    if (pdVar26 == (dword *)0x0) goto LAB_00344aa4;
  }
  func_0x003a2ee4(&pppppppuStack_280,"grpc.internal.client_channel",puVar8,&PTR_FUN_009dba98);
  func_0x003a2ee4(auStack_260,"grpc.internal.service_config_obj",uVar28,&PTR_DAT_009dbab0);
  FUN_00353aa0(&bStack_240,&pppppppuStack_280,&bStack_240,&plStack_288);
  uVar19 = *(undefined8 *)(puVar8 + 0x18);
  pppppppuVar11 = apppppppuStack_238;
  if ((bStack_240 & 1) != 0) {
    pppppppuVar11 = apppppppuStack_238[0];
  }
  FUN_003a1ecc(uVar19,pppppppuVar11,CONCAT71(uStack_23f,bStack_240) >> 1);
  pdVar9 = pdVar26;
  (**(code **)(*(long *)pdVar26 + 0x28))(pdVar26,uVar19);
  pdVar10 = pdVar9;
  FUN_003a2ea4();
  if (((ulong)pdVar10 & 1) == 0) {
    pdVar10 = pdVar9;
    func_0x003a2e80(pdVar9,"grpc.enable_retries",1);
    iVar15 = (int)pdVar10;
  }
  else {
    iVar15 = 0;
  }
  (**(code **)(*(long *)pdVar26 + 0x20))(&pppppppuStack_280,pdVar26);
  pppppppuVar11 = apppppppuStack_270;
  if (iVar15 == 0) {
    if (pppppppuStack_278 < apppppppuStack_270[0]) {
      ppuVar20 = &PTR_DAT_009dbac8;
      goto LAB_00344bdc;
    }
    lVar21 = (long)pppppppuStack_278 - (long)pppppppuStack_280 >> 3;
    uVar1 = lVar21 + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_00356474(&pppppppuStack_280);
      goto LAB_00344f44;
    }
    uVar22 = (long)apppppppuStack_270[0] - (long)pppppppuStack_280 >> 2;
    if (uVar22 <= uVar1) {
      uVar22 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)apppppppuStack_270[0] - (long)pppppppuStack_280)) {
      uVar22 = 0x1fffffffffffffff;
    }
    if (uVar22 == 0) {
      pppppppuVar11 = (undefined8 *******)0x0;
    }
    else {
      FUN_00356488();
    }
    pppppppuVar29 = pppppppuVar11 + lVar21;
    pppppppuVar11 = pppppppuVar11 + uVar22;
    *pppppppuVar29 = (undefined8 ******)&PTR_DAT_009dbac8;
    pppppppuVar23 = pppppppuVar29;
    pppppppuVar12 = pppppppuStack_278;
    while (pppppppuVar12 != pppppppuStack_280) {
      pppppppuVar12 = pppppppuVar12 + -1;
      pppppppuVar23 = pppppppuVar23 + -1;
      *pppppppuVar23 = *pppppppuVar12;
      pppppppuStack_278 = pppppppuStack_280;
    }
LAB_00344ce4:
    pppppppuVar29 = pppppppuVar29 + 1;
    pppppppuStack_280 = pppppppuVar23;
    apppppppuStack_270[0] = pppppppuVar11;
    if (pppppppuStack_278 != (undefined8 *******)0x0) {
      pppppppuStack_278 = pppppppuVar29;
      __ZdlPv();
    }
LAB_00344cf4:
    pppppppuStack_2a0 = pppppppuStack_280;
    pppppppuStack_290 = apppppppuStack_270[0];
    pppppppuStack_280 = (undefined8 *******)0x0;
    pppppppuStack_278 = (undefined8 *******)0x0;
    apppppppuStack_270[0] = (undefined8 *******)0x0;
    pppppppuStack_298 = pppppppuVar29;
    FUN_003589dc(&plStack_288,pdVar9,&pppppppuStack_2a0);
    if (pppppppuStack_2a0 != (undefined8 *******)0x0) {
      pppppppuStack_298 = pppppppuStack_2a0;
      __ZdlPv();
    }
    if (plStack_288 == (long *)0x0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0x5f2,2,"assertion failed: %s");
      _abort();
      goto LAB_00344f44;
    }
    FUN_003a2a64(pdVar9);
    func_0x00339d8c(puVar8 + 0x70);
    pcVar13 = *(char **)(puVar8 + 0xb8);
    if (pcVar13 != (char *)0x0) {
      *(undefined8 *)(puVar8 + 0xb8) = 0;
      pcStack_2a8 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar13 & 1) != 0) {
        FUN_0055293c();
      }
    }
    plVar6 = *(long **)(puVar8 + 200);
    plVar2 = *(long **)(puVar8 + 0xd0);
    plVar30 = *(long **)(puVar8 + 0xb0);
    plVar24 = *(long **)(puVar8 + 0xd8);
    puVar8[0xc0] = 1;
    *(undefined8 *)(puVar8 + 200) = uVar28;
    *(dword **)(puVar8 + 0xd0) = pdVar26;
    *(long **)(puVar8 + 0xd8) = plStack_288;
    plStack_288 = plVar24;
    for (; plVar30 != (long *)0x0; plVar30 = (long *)plVar30[1]) {
      func_0x003c1f6c();
      *(undefined1 *)(*(long *)pcVar13 + 0x34) = 0;
      lVar21 = *plVar30;
      pcVar27 = *(char **)(lVar21 + 0x10);
      pcStack_2a8 = (char *)0x0;
      pcVar13 = pcVar27;
      FUN_0034510c(pcVar27,lVar21,&pcStack_2a8);
      pcVar14 = pcStack_2a8;
      if ((int)pcVar13 == 0) {
        if (((ulong)pcStack_2a8 & 1) != 0) goto LAB_00344dfc;
      }
      else {
        pcStack_2b0 = pcStack_2a8;
        if (((ulong)pcStack_2a8 & 1) != 0) {
          pcVar13 = pcStack_2a8 + -1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
            if (bVar4) {
              *(int *)pcVar13 = *(int *)pcVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_00345350(pcVar27,lVar21,&pcStack_2b0);
        pcVar13 = pcVar27;
        if (((ulong)pcVar14 & 1) != 0) {
          FUN_0055293c(pcVar14);
LAB_00344dfc:
          FUN_0055293c();
          pcVar13 = pcVar14;
        }
      }
    }
    func_0x00339da8(puVar8 + 0x70);
    if (plStack_288 != (long *)0x0) {
      plVar30 = plStack_288 + 1;
      do {
        lVar21 = *plVar30;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar4) {
          *plVar30 = lVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar21 + -1 == 0) {
        (**(code **)(*plStack_288 + 8))();
      }
    }
    if (pppppppuStack_280 != (undefined8 *******)0x0) {
      pppppppuStack_278 = pppppppuStack_280;
      __ZdlPv();
    }
    if ((bStack_240 & 1) != 0) {
      __ZdlPv(apppppppuStack_238[0]);
    }
    if (plVar2 != (long *)0x0) {
      plVar30 = plVar2 + 1;
      do {
        lVar21 = *plVar30;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar4) {
          *plVar30 = lVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar21 + -1 == 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 1;
      do {
        lVar21 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar21 + -1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1f8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (pppppppuStack_278 < apppppppuStack_270[0]) {
      ppuVar20 = &PTR_FUN_009dd9d8;
LAB_00344bdc:
      pppppppuVar29 = pppppppuStack_278 + 1;
      *pppppppuStack_278 = (undefined8 ******)ppuVar20;
      goto LAB_00344cf4;
    }
    lVar21 = (long)pppppppuStack_278 - (long)pppppppuStack_280 >> 3;
    uVar1 = lVar21 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar22 = (long)apppppppuStack_270[0] - (long)pppppppuStack_280 >> 2;
      if (uVar22 <= uVar1) {
        uVar22 = uVar1;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)apppppppuStack_270[0] - (long)pppppppuStack_280)) {
        uVar22 = 0x1fffffffffffffff;
      }
      if (uVar22 == 0) {
        pppppppuVar11 = (undefined8 *******)0x0;
      }
      else {
        FUN_00356488();
      }
      pppppppuVar29 = pppppppuVar11 + lVar21;
      pppppppuVar11 = pppppppuVar11 + uVar22;
      *pppppppuVar29 = (undefined8 ******)&PTR_FUN_009dd9d8;
      pppppppuVar23 = pppppppuVar29;
      pppppppuVar12 = pppppppuStack_278;
      while (pppppppuVar12 != pppppppuStack_280) {
        pppppppuVar12 = pppppppuVar12 + -1;
        pppppppuVar23 = pppppppuVar23 + -1;
        *pppppppuVar23 = *pppppppuVar12;
        pppppppuStack_278 = pppppppuStack_280;
      }
      goto LAB_00344ce4;
    }
  }
  FUN_00356474(&pppppppuStack_280);
LAB_00344f44:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x344f48);
  (*pcVar5)();
}



/* Entry: 003447b8; end: 00344a27;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003447b8(long param_1,undefined8 *param_2,long *param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  dword *pdVar9;
  dword *pdVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *******pppppppuVar20;
  long *plVar21;
  long *plVar22;
  dword *pdVar23;
  char *pcVar24;
  undefined8 uVar25;
  undefined8 *******pppppppuVar26;
  long *plVar27;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 *******pppppppuStack_230;
  undefined8 *******pppppppuStack_228;
  undefined8 *******pppppppuStack_220;
  long *plStack_218;
  undefined8 *******pppppppuStack_210;
  undefined8 *******pppppppuStack_208;
  undefined8 *******apppppppuStack_200 [2];
  undefined1 auStack_1f0 [32];
  byte bStack_1d0;
  undefined7 uStack_1cf;
  undefined8 *******apppppppuStack_1c8 [8];
  long lStack_188;
  undefined1 auStack_128 [72];
  undefined8 *puStack_e0;
  char *apcStack_d8 [4];
  undefined1 auStack_b8 [32];
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 *******apppppppuStack_68 [4];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034a0d4(auStack_b8);
  uStack_78 = 0;
  lStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  plStack_98 = (long *)0x0;
  func_0x0034a2ec(auStack_b8,param_4);
  uVar25 = *param_2;
  if (plStack_98 != (long *)0x0) {
    plVar22 = plStack_98 + 1;
    do {
      lVar18 = *plVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *plVar22 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 + -1 == 0) {
      (**(code **)(*plStack_98 + 8))();
    }
  }
  *param_2 = 0;
  plStack_98 = (long *)uVar25;
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  uStack_88 = *(undefined8 *)(param_4 + 0x38);
  uStack_90 = *(undefined8 *)(param_4 + 0x30);
  lStack_80 = *(undefined8 *)(param_4 + 0x40);
  *(undefined1 *)(param_4 + 0x47) = 0;
  *(undefined1 *)(param_4 + 0x30) = 0;
  uStack_70 = 0;
  if ((char)param_3[3] != '\0') {
    plVar22 = (long *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      plVar22 = param_3;
    }
    FUN_003a2ec4(apcStack_d8,"grpc.internal.health_check_service_name",plVar22);
    FUN_00353fa0(&uStack_70,apcStack_d8);
  }
  apcStack_d8[0] = "grpc.internal.config_selector";
  uVar25 = *(undefined8 *)(param_4 + 0x48);
  pppppppuVar11 = apppppppuStack_68;
  if ((uStack_70 & 1) != 0) {
    pppppppuVar11 = apppppppuStack_68[0];
  }
  FUN_003a24dc(uVar25,apcStack_d8,1,pppppppuVar11,uStack_70 >> 1);
  plVar22 = *(long **)(param_1 + 400);
  uStack_78 = uVar25;
  if (plVar22 == (long *)0x0) {
    FUN_003456c4(&puStack_e0,param_1);
    puVar5 = puStack_e0;
    puStack_e0 = (undefined8 *)0x0;
    puVar7 = *(undefined8 **)(param_1 + 400);
    *(undefined8 **)(param_1 + 400) = puVar5;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)();
      puVar5 = puStack_e0;
      puStack_e0 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)();
      }
    }
    plVar22 = *(long **)(param_1 + 400);
  }
  func_0x0035b724(auStack_128,auStack_b8);
  iVar15 = (int)auStack_128;
  (**(code **)(*plVar22 + 0x20))(plVar22);
  FUN_0034a4dc(auStack_128);
  if ((uStack_70 & 1) != 0) {
    __ZdlPv(apppppppuStack_68[0]);
  }
  puVar8 = auStack_b8;
  FUN_0034a4dc();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (iVar15 != 0) {
    func_0x0040cf10();
    if ((uStack_70 & 1) != 0) {
      __ZdlPv(apppppppuStack_68[0]);
    }
    FUN_0034a4dc(auStack_b8);
  }
  __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(long *)(puVar8 + 0x180) == 0) {
    uVar25 = 0;
  }
  else {
    plVar22 = (long *)(*(long *)(puVar8 + 0x180) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *plVar22 = *plVar22 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar25 = *(undefined8 *)(puVar8 + 0x180);
  }
  if (*(long *)(puVar8 + 0x188) == 0) {
LAB_00344aa4:
    pdVar23 = &MACH_HEADER.flags;
    __Znwm();
    uVar16 = 0;
    if (*(long *)(puVar8 + 0x180) != 0) {
      plVar22 = (long *)(*(long *)(puVar8 + 0x180) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar4) {
          *plVar22 = *plVar22 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar16 = *(undefined8 *)(puVar8 + 0x180);
    }
    *(undefined ***)pdVar23 = &PTR_FUN_009dc300;
    *(undefined8 *)(pdVar23 + 2) = 1;
    *(undefined8 *)(pdVar23 + 4) = uVar16;
  }
  else {
    plVar22 = (long *)(*(long *)(puVar8 + 0x188) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *plVar22 = *plVar22 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pdVar23 = *(dword **)(puVar8 + 0x188);
    if (pdVar23 == (dword *)0x0) goto LAB_00344aa4;
  }
  func_0x003a2ee4(&pppppppuStack_210,"grpc.internal.client_channel",puVar8,&PTR_FUN_009dba98);
  func_0x003a2ee4(auStack_1f0,"grpc.internal.service_config_obj",uVar25,&PTR_DAT_009dbab0);
  FUN_00353aa0(&bStack_1d0,&pppppppuStack_210,&bStack_1d0,&plStack_218);
  uVar16 = *(undefined8 *)(puVar8 + 0x18);
  pppppppuVar11 = apppppppuStack_1c8;
  if ((bStack_1d0 & 1) != 0) {
    pppppppuVar11 = apppppppuStack_1c8[0];
  }
  FUN_003a1ecc(uVar16,pppppppuVar11,CONCAT71(uStack_1cf,bStack_1d0) >> 1);
  pdVar9 = pdVar23;
  (**(code **)(*(long *)pdVar23 + 0x28))(pdVar23,uVar16);
  pdVar10 = pdVar9;
  FUN_003a2ea4();
  if (((ulong)pdVar10 & 1) == 0) {
    pdVar10 = pdVar9;
    func_0x003a2e80(pdVar9,"grpc.enable_retries",1);
    iVar15 = (int)pdVar10;
  }
  else {
    iVar15 = 0;
  }
  (**(code **)(*(long *)pdVar23 + 0x20))(&pppppppuStack_210,pdVar23);
  pppppppuVar11 = apppppppuStack_200;
  if (iVar15 == 0) {
    if (pppppppuStack_208 < apppppppuStack_200[0]) {
      ppuVar17 = &PTR_DAT_009dbac8;
      goto LAB_00344bdc;
    }
    lVar18 = (long)pppppppuStack_208 - (long)pppppppuStack_210 >> 3;
    uVar1 = lVar18 + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_00356474(&pppppppuStack_210);
      goto LAB_00344f44;
    }
    uVar19 = (long)apppppppuStack_200[0] - (long)pppppppuStack_210 >> 2;
    if (uVar19 <= uVar1) {
      uVar19 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)apppppppuStack_200[0] - (long)pppppppuStack_210)) {
      uVar19 = 0x1fffffffffffffff;
    }
    if (uVar19 == 0) {
      pppppppuVar11 = (undefined8 *******)0x0;
    }
    else {
      FUN_00356488();
    }
    pppppppuVar26 = pppppppuVar11 + lVar18;
    pppppppuVar11 = pppppppuVar11 + uVar19;
    *pppppppuVar26 = (undefined8 ******)&PTR_DAT_009dbac8;
    pppppppuVar20 = pppppppuVar26;
    pppppppuVar12 = pppppppuStack_208;
    while (pppppppuVar12 != pppppppuStack_210) {
      pppppppuVar12 = pppppppuVar12 + -1;
      pppppppuVar20 = pppppppuVar20 + -1;
      *pppppppuVar20 = *pppppppuVar12;
      pppppppuStack_208 = pppppppuStack_210;
    }
LAB_00344ce4:
    pppppppuVar26 = pppppppuVar26 + 1;
    pppppppuStack_210 = pppppppuVar20;
    apppppppuStack_200[0] = pppppppuVar11;
    if (pppppppuStack_208 != (undefined8 *******)0x0) {
      pppppppuStack_208 = pppppppuVar26;
      __ZdlPv();
    }
LAB_00344cf4:
    pppppppuStack_230 = pppppppuStack_210;
    pppppppuStack_220 = apppppppuStack_200[0];
    pppppppuStack_210 = (undefined8 *******)0x0;
    pppppppuStack_208 = (undefined8 *******)0x0;
    apppppppuStack_200[0] = (undefined8 *******)0x0;
    pppppppuStack_228 = pppppppuVar26;
    FUN_003589dc(&plStack_218,pdVar9,&pppppppuStack_230);
    if (pppppppuStack_230 != (undefined8 *******)0x0) {
      pppppppuStack_228 = pppppppuStack_230;
      __ZdlPv();
    }
    if (plStack_218 == (long *)0x0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0x5f2,2,"assertion failed: %s");
      _abort();
      goto LAB_00344f44;
    }
    FUN_003a2a64(pdVar9);
    func_0x00339d8c(puVar8 + 0x70);
    pcVar13 = *(char **)(puVar8 + 0xb8);
    if (pcVar13 != (char *)0x0) {
      *(undefined8 *)(puVar8 + 0xb8) = 0;
      pcStack_238 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar13 & 1) != 0) {
        FUN_0055293c();
      }
    }
    plVar22 = *(long **)(puVar8 + 200);
    plVar2 = *(long **)(puVar8 + 0xd0);
    plVar27 = *(long **)(puVar8 + 0xb0);
    plVar21 = *(long **)(puVar8 + 0xd8);
    puVar8[0xc0] = 1;
    *(undefined8 *)(puVar8 + 200) = uVar25;
    *(dword **)(puVar8 + 0xd0) = pdVar23;
    *(long **)(puVar8 + 0xd8) = plStack_218;
    plStack_218 = plVar21;
    for (; plVar27 != (long *)0x0; plVar27 = (long *)plVar27[1]) {
      func_0x003c1f6c();
      *(undefined1 *)(*(long *)pcVar13 + 0x34) = 0;
      lVar18 = *plVar27;
      pcVar24 = *(char **)(lVar18 + 0x10);
      pcStack_238 = (char *)0x0;
      pcVar13 = pcVar24;
      FUN_0034510c(pcVar24,lVar18,&pcStack_238);
      pcVar14 = pcStack_238;
      if ((int)pcVar13 == 0) {
        if (((ulong)pcStack_238 & 1) != 0) goto LAB_00344dfc;
      }
      else {
        pcStack_240 = pcStack_238;
        if (((ulong)pcStack_238 & 1) != 0) {
          pcVar13 = pcStack_238 + -1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
            if (bVar4) {
              *(int *)pcVar13 = *(int *)pcVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_00345350(pcVar24,lVar18,&pcStack_240);
        pcVar13 = pcVar24;
        if (((ulong)pcVar14 & 1) != 0) {
          FUN_0055293c(pcVar14);
LAB_00344dfc:
          FUN_0055293c();
          pcVar13 = pcVar14;
        }
      }
    }
    func_0x00339da8(puVar8 + 0x70);
    if (plStack_218 != (long *)0x0) {
      plVar27 = plStack_218 + 1;
      do {
        lVar18 = *plVar27;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar4) {
          *plVar27 = lVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(*plStack_218 + 8))();
      }
    }
    if (pppppppuStack_210 != (undefined8 *******)0x0) {
      pppppppuStack_208 = pppppppuStack_210;
      __ZdlPv();
    }
    if ((bStack_1d0 & 1) != 0) {
      __ZdlPv(apppppppuStack_1c8[0]);
    }
    if (plVar2 != (long *)0x0) {
      plVar27 = plVar2 + 1;
      do {
        lVar18 = *plVar27;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar4) {
          *plVar27 = lVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
    if (plVar22 != (long *)0x0) {
      plVar2 = plVar22 + 1;
      do {
        lVar18 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar22 + 8))(plVar22);
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_188) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (pppppppuStack_208 < apppppppuStack_200[0]) {
      ppuVar17 = &PTR_FUN_009dd9d8;
LAB_00344bdc:
      pppppppuVar26 = pppppppuStack_208 + 1;
      *pppppppuStack_208 = (undefined8 ******)ppuVar17;
      goto LAB_00344cf4;
    }
    lVar18 = (long)pppppppuStack_208 - (long)pppppppuStack_210 >> 3;
    uVar1 = lVar18 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar19 = (long)apppppppuStack_200[0] - (long)pppppppuStack_210 >> 2;
      if (uVar19 <= uVar1) {
        uVar19 = uVar1;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)apppppppuStack_200[0] - (long)pppppppuStack_210)) {
        uVar19 = 0x1fffffffffffffff;
      }
      if (uVar19 == 0) {
        pppppppuVar11 = (undefined8 *******)0x0;
      }
      else {
        FUN_00356488();
      }
      pppppppuVar26 = pppppppuVar11 + lVar18;
      pppppppuVar11 = pppppppuVar11 + uVar19;
      *pppppppuVar26 = (undefined8 ******)&PTR_FUN_009dd9d8;
      pppppppuVar20 = pppppppuVar26;
      pppppppuVar12 = pppppppuStack_208;
      while (pppppppuVar12 != pppppppuStack_210) {
        pppppppuVar12 = pppppppuVar12 + -1;
        pppppppuVar20 = pppppppuVar20 + -1;
        *pppppppuVar20 = *pppppppuVar12;
        pppppppuStack_208 = pppppppuStack_210;
      }
      goto LAB_00344ce4;
    }
  }
  FUN_00356474(&pppppppuStack_210);
LAB_00344f44:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x344f48);
  (*pcVar6)();
}



/* Entry: 00344a28; end: 003450b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00344a28(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  dword *pdVar7;
  dword *pdVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  ulong uVar15;
  undefined8 *******pppppppuVar16;
  long *plVar17;
  undefined8 uVar18;
  dword *pdVar19;
  long lVar20;
  char *pcVar21;
  int iVar22;
  undefined8 *******pppppppuVar23;
  long *plVar24;
  char *pcStack_110;
  char *pcStack_108;
  undefined8 *******pppppppuStack_100;
  undefined8 *******pppppppuStack_f8;
  undefined8 *******pppppppuStack_f0;
  long *plStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined8 *******pppppppuStack_d8;
  undefined8 *******apppppppuStack_d0 [2];
  undefined1 auStack_c0 [32];
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined8 *******apppppppuStack_98 [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(long *)(param_1 + 0x180) == 0) {
    uVar18 = 0;
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x180) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar18 = *(undefined8 *)(param_1 + 0x180);
  }
  if (*(long *)(param_1 + 0x188) == 0) {
LAB_00344aa4:
    pdVar19 = &MACH_HEADER.flags;
    __Znwm();
    uVar13 = 0;
    if (*(long *)(param_1 + 0x180) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x180) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar13 = *(undefined8 *)(param_1 + 0x180);
    }
    *(undefined ***)pdVar19 = &PTR_FUN_009dc300;
    *(undefined8 *)(pdVar19 + 2) = 1;
    *(undefined8 *)(pdVar19 + 4) = uVar13;
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x188) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pdVar19 = *(dword **)(param_1 + 0x188);
    if (pdVar19 == (dword *)0x0) goto LAB_00344aa4;
  }
  func_0x003a2ee4(&pppppppuStack_e0,"grpc.internal.client_channel",param_1,&PTR_FUN_009dba98);
  func_0x003a2ee4(auStack_c0,"grpc.internal.service_config_obj",uVar18,&PTR_DAT_009dbab0);
  FUN_00353aa0(&bStack_a0,&pppppppuStack_e0,&bStack_a0,&plStack_e8);
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  pppppppuVar9 = apppppppuStack_98;
  if ((bStack_a0 & 1) != 0) {
    pppppppuVar9 = apppppppuStack_98[0];
  }
  FUN_003a1ecc(uVar13,pppppppuVar9,CONCAT71(uStack_9f,bStack_a0) >> 1);
  pdVar7 = pdVar19;
  (**(code **)(*(long *)pdVar19 + 0x28))(pdVar19,uVar13);
  pdVar8 = pdVar7;
  FUN_003a2ea4();
  if (((ulong)pdVar8 & 1) == 0) {
    pdVar8 = pdVar7;
    func_0x003a2e80(pdVar7,"grpc.enable_retries",1);
    iVar22 = (int)pdVar8;
  }
  else {
    iVar22 = 0;
  }
  (**(code **)(*(long *)pdVar19 + 0x20))(&pppppppuStack_e0,pdVar19);
  pppppppuVar9 = apppppppuStack_d0;
  if (iVar22 == 0) {
    if (pppppppuStack_d8 < apppppppuStack_d0[0]) {
      ppuVar14 = &PTR_DAT_009dbac8;
      goto LAB_00344bdc;
    }
    lVar20 = (long)pppppppuStack_d8 - (long)pppppppuStack_e0 >> 3;
    uVar2 = lVar20 + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_00356474(&pppppppuStack_e0);
      goto LAB_00344f44;
    }
    uVar15 = (long)apppppppuStack_d0[0] - (long)pppppppuStack_e0 >> 2;
    if (uVar15 <= uVar2) {
      uVar15 = uVar2;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)apppppppuStack_d0[0] - (long)pppppppuStack_e0)) {
      uVar15 = 0x1fffffffffffffff;
    }
    if (uVar15 == 0) {
      pppppppuVar9 = (undefined8 *******)0x0;
    }
    else {
      FUN_00356488();
    }
    pppppppuVar23 = pppppppuVar9 + lVar20;
    pppppppuVar9 = pppppppuVar9 + uVar15;
    *pppppppuVar23 = (undefined8 ******)&PTR_DAT_009dbac8;
    pppppppuVar16 = pppppppuVar23;
    pppppppuVar10 = pppppppuStack_d8;
    while (pppppppuVar10 != pppppppuStack_e0) {
      pppppppuVar10 = pppppppuVar10 + -1;
      pppppppuVar16 = pppppppuVar16 + -1;
      *pppppppuVar16 = *pppppppuVar10;
      pppppppuStack_d8 = pppppppuStack_e0;
    }
LAB_00344ce4:
    pppppppuVar23 = pppppppuVar23 + 1;
    pppppppuStack_e0 = pppppppuVar16;
    apppppppuStack_d0[0] = pppppppuVar9;
    if (pppppppuStack_d8 != (undefined8 *******)0x0) {
      pppppppuStack_d8 = pppppppuVar23;
      __ZdlPv();
    }
LAB_00344cf4:
    pppppppuStack_100 = pppppppuStack_e0;
    pppppppuStack_f0 = apppppppuStack_d0[0];
    pppppppuStack_e0 = (undefined8 *******)0x0;
    pppppppuStack_d8 = (undefined8 *******)0x0;
    apppppppuStack_d0[0] = (undefined8 *******)0x0;
    pppppppuStack_f8 = pppppppuVar23;
    FUN_003589dc(&plStack_e8,pdVar7,&pppppppuStack_100);
    if (pppppppuStack_100 != (undefined8 *******)0x0) {
      pppppppuStack_f8 = pppppppuStack_100;
      __ZdlPv();
    }
    if (plStack_e8 == (long *)0x0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0x5f2,2,"assertion failed: %s");
      _abort();
      goto LAB_00344f44;
    }
    FUN_003a2a64(pdVar7);
    func_0x00339d8c(param_1 + 0x70);
    pcVar11 = *(char **)(param_1 + 0xb8);
    if (pcVar11 != (char *)0x0) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      pcStack_108 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar11 & 1) != 0) {
        FUN_0055293c();
      }
    }
    plVar1 = *(long **)(param_1 + 200);
    plVar3 = *(long **)(param_1 + 0xd0);
    plVar24 = *(long **)(param_1 + 0xb0);
    plVar17 = *(long **)(param_1 + 0xd8);
    *(undefined1 *)(param_1 + 0xc0) = 1;
    *(undefined8 *)(param_1 + 200) = uVar18;
    *(dword **)(param_1 + 0xd0) = pdVar19;
    *(long **)(param_1 + 0xd8) = plStack_e8;
    plStack_e8 = plVar17;
    for (; plVar24 != (long *)0x0; plVar24 = (long *)plVar24[1]) {
      func_0x003c1f6c();
      *(undefined1 *)(*(long *)pcVar11 + 0x34) = 0;
      lVar20 = *plVar24;
      pcVar21 = *(char **)(lVar20 + 0x10);
      pcStack_108 = (char *)0x0;
      pcVar11 = pcVar21;
      FUN_0034510c(pcVar21,lVar20,&pcStack_108);
      pcVar12 = pcStack_108;
      if ((int)pcVar11 == 0) {
        if (((ulong)pcStack_108 & 1) != 0) goto LAB_00344dfc;
      }
      else {
        pcStack_110 = pcStack_108;
        if (((ulong)pcStack_108 & 1) != 0) {
          pcVar11 = pcStack_108 + -1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
            if (bVar5) {
              *(int *)pcVar11 = *(int *)pcVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        FUN_00345350(pcVar21,lVar20,&pcStack_110);
        pcVar11 = pcVar21;
        if (((ulong)pcVar12 & 1) != 0) {
          FUN_0055293c(pcVar12);
LAB_00344dfc:
          FUN_0055293c();
          pcVar11 = pcVar12;
        }
      }
    }
    func_0x00339da8(param_1 + 0x70);
    if (plStack_e8 != (long *)0x0) {
      plVar24 = plStack_e8 + 1;
      do {
        lVar20 = *plVar24;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar5) {
          *plVar24 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 + -1 == 0) {
        (**(code **)(*plStack_e8 + 8))();
      }
    }
    if (pppppppuStack_e0 != (undefined8 *******)0x0) {
      pppppppuStack_d8 = pppppppuStack_e0;
      __ZdlPv();
    }
    if ((bStack_a0 & 1) != 0) {
      __ZdlPv(apppppppuStack_98[0]);
    }
    if (plVar3 != (long *)0x0) {
      plVar24 = plVar3 + 1;
      do {
        lVar20 = *plVar24;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar5) {
          *plVar24 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 + -1 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
    if (plVar1 != (long *)0x0) {
      plVar3 = plVar1 + 1;
      do {
        lVar20 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 + -1 == 0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (pppppppuStack_d8 < apppppppuStack_d0[0]) {
      ppuVar14 = &PTR_FUN_009dd9d8;
LAB_00344bdc:
      pppppppuVar23 = pppppppuStack_d8 + 1;
      *pppppppuStack_d8 = (undefined8 ******)ppuVar14;
      goto LAB_00344cf4;
    }
    lVar20 = (long)pppppppuStack_d8 - (long)pppppppuStack_e0 >> 3;
    uVar2 = lVar20 + 1;
    if (uVar2 >> 0x3d == 0) {
      uVar15 = (long)apppppppuStack_d0[0] - (long)pppppppuStack_e0 >> 2;
      if (uVar15 <= uVar2) {
        uVar15 = uVar2;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)apppppppuStack_d0[0] - (long)pppppppuStack_e0)) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 == 0) {
        pppppppuVar9 = (undefined8 *******)0x0;
      }
      else {
        FUN_00356488();
      }
      pppppppuVar23 = pppppppuVar9 + lVar20;
      pppppppuVar9 = pppppppuVar9 + uVar15;
      *pppppppuVar23 = (undefined8 ******)&PTR_FUN_009dd9d8;
      pppppppuVar16 = pppppppuVar23;
      pppppppuVar10 = pppppppuStack_d8;
      while (pppppppuVar10 != pppppppuStack_e0) {
        pppppppuVar10 = pppppppuVar10 + -1;
        pppppppuVar16 = pppppppuVar16 + -1;
        *pppppppuVar16 = *pppppppuVar10;
        pppppppuStack_d8 = pppppppuStack_e0;
      }
      goto LAB_00344ce4;
    }
  }
  FUN_00356474(&pppppppuStack_e0);
LAB_00344f44:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x344f48);
  (*pcVar6)();
}



/* Entry: 003450b4; end: 0034510b;  */

ulong * FUN_003450b4(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  if (uVar4 != uVar3) {
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
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
    if ((uVar3 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return param_1;
}



/* Entry: 0034510c; end: 0034534f;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_0034510c(long param_1,long param_2,ulong *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  bool bVar11;
  qword qVar12;
  ulong uStack_50;
  ulong uStack_48;
  ulong auStack_40 [2];
  
  qVar12 = *(qword *)(param_2 + 8);
  iVar4 = (int)qVar12 + 0x140;
  FUN_003fb210();
  if (iVar4 == 0) {
    plVar9 = *(long **)(qVar12 + 8);
    do {
      cVar2 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar11) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pcVar6 = segment_command_00000020.segname + 8;
    FUN_00338c74();
    *(code **)pcVar6 = FUN_0034b24c;
    *(qword *)(pcVar6 + 8) = qVar12;
    *(code **)(pcVar6 + 0x18) = FUN_0033df34;
    *(char **)(pcVar6 + 0x20) = pcVar6;
    *(undefined8 *)(pcVar6 + 0x28) = 0;
    auStack_40[1] = 0;
    FUN_003c1e6c(auStack_40,pcVar6 + 0x10,auStack_40 + 1);
    FUN_0033c494(auStack_40 + 1);
  }
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x118) + 8);
  if (*(char *)(qVar12 + 0xc0) == '\0') {
    uVar1 = *(uint *)(puVar8 + 1);
    auStack_40[0] = *(ulong *)(qVar12 + 0xb8);
    if ((auStack_40[0] & 1) != 0) {
      piVar10 = (int *)(auStack_40[0] - 1);
      do {
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar11) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bVar3 = (uVar1 & 0x20) != 0;
    bVar11 = !bVar3 && auStack_40[0] != 0;
    if (bVar3 || auStack_40[0] == 0) {
      FUN_003472e8(param_1,param_2);
    }
    else {
      if (*(char *)(param_1 + 0xc1) != '\0') {
        func_0x00345920(*(undefined8 *)(param_2 + 8),param_1 + 200,*(undefined8 *)(param_1 + 0x98));
        *(undefined1 *)(param_1 + 0xc1) = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
      }
      if ((auStack_40[0] & 1) != 0) {
        piVar10 = (int *)(auStack_40[0] - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_50 = auStack_40[0];
      FUN_003fbec4(&uStack_48,&uStack_50);
      uVar5 = *param_3;
      if (uStack_48 != uVar5) {
        *param_3 = uStack_48;
        uStack_48 = 0x36;
        if ((uVar5 & 1) != 0) {
          FUN_0055293c();
        }
      }
      FUN_0033c494(&uStack_48);
      FUN_0033c494(&uStack_50);
    }
    FUN_0033c494(auStack_40);
  }
  else {
    if (*(char *)(param_1 + 0xc0) == '\0') {
      uVar7 = *puVar8;
      *(undefined1 *)(param_1 + 0xc0) = 1;
      FUN_003473a0(auStack_40,param_1,param_2,uVar7);
      uVar5 = *param_3;
      if (auStack_40[0] == uVar5) {
        if ((uVar5 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        *param_3 = auStack_40[0];
        auStack_40[0] = 0x36;
        if ((uVar5 & 1) != 0) {
          FUN_0055293c();
        }
      }
    }
    if (*(char *)(param_1 + 0xc1) != '\0') {
      func_0x00345920(*(undefined8 *)(param_2 + 8),param_1 + 200,*(undefined8 *)(param_1 + 0x98));
      *(undefined1 *)(param_1 + 0xc1) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    bVar11 = true;
  }
  return bVar11;
}



/* Entry: 00345350; end: 003453d7;  */

void FUN_00345350(long param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *(code **)(param_1 + 0xa8) = FUN_00347790;
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  uStack_30 = *param_3;
  if ((uStack_30 & 1) != 0) {
    piVar3 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(&uStack_21,param_1 + 0xa0,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003453d8; end: 003456c3;  */

void FUN_003453d8(long param_1,long **param_2,undefined8 param_3,long param_4,long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  dword *pdVar9;
  long **pplVar10;
  int *piVar11;
  long *extraout_x8;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uStack_100;
  long *plStack_f8;
  dword *pdStack_f0;
  long **pplStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  dword *pdStack_d0;
  long **pplStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long *plStack_90;
  long *aplStack_88 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (((int)param_2 == 4) || (*param_5 == 0)) {
    plVar6 = *(long **)(param_1 + 0x180);
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        lVar12 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    *(undefined8 *)(param_1 + 0x180) = 0;
    plVar6 = *(long **)(param_1 + 0x188);
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        lVar12 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    *(undefined8 *)(param_1 + 0x188) = 0;
    func_0x00339d8c(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0xc0) = 0;
    plVar6 = *(long **)(param_1 + 200);
    plVar7 = *(long **)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    plVar15 = *(long **)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    func_0x00339da8(param_1 + 0x70);
    if (plVar15 != (long *)0x0) {
      plVar1 = plVar15 + 1;
      do {
        lVar12 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar15 + 8))(plVar15);
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar15 = plVar7 + 1;
      do {
        lVar12 = *plVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *plVar15 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        lVar12 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  pplVar10 = param_2;
  FUN_003fb114(param_1 + 0x140,param_2,param_3,param_4);
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_003a972c(*(long *)(param_1 + 0x58),param_2);
    param_4 = *(long *)(param_1 + 0x58);
    FUN_003a8bd4(param_2);
    FUN_003ec14c(aplStack_88);
    pplVar10 = (long **)((long)&MACH_HEADER.magic + 1);
    FUN_003a75b4(param_4 + 0x70,1,aplStack_88);
  }
  plVar6 = (long *)(param_1 + 0xe0);
  plVar7 = plVar6;
  func_0x00339d8c();
  lVar12 = *(long *)(param_1 + 0x120);
  *(long *)(param_1 + 0x120) = *param_5;
  *param_5 = lVar12;
  for (puVar14 = *(undefined8 **)(param_1 + 0x128); puVar14 != (undefined8 *)0x0;
      puVar14 = (undefined8 *)puVar14[1]) {
    func_0x003c1f6c();
    *(undefined1 *)(*plVar7 + 0x34) = 0;
    aplStack_88[0] = (long *)0x0;
    iVar5 = (int)*puVar14;
    pplVar10 = aplStack_88;
    FUN_00345bd4();
    plVar7 = aplStack_88[0];
    if (iVar5 != 0) {
      uVar8 = *puVar14;
      plStack_90 = aplStack_88[0];
      if (((ulong)aplStack_88[0] & 1) != 0) {
        piVar11 = (int *)((long)aplStack_88[0] + -1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = *piVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pplVar10 = &plStack_90;
      FUN_00345f80(uVar8);
      if (((ulong)plVar7 & 1) != 0) {
        FUN_0055293c(plVar7);
      }
    }
    plVar7 = aplStack_88[0];
    if (((ulong)aplStack_88[0] & 1) != 0) {
      FUN_0055293c();
    }
  }
  plVar7 = plVar6;
  func_0x00339da8();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar10 == 0) {
    __Unwind_Resume(plVar7);
  }
  plVar15 = plVar7;
  func_0x0040cf10();
  pcStack_98 = FUN_003456c4;
  plStack_f8 = (long *)0x0;
  uStack_100 = 0;
  pplStack_e8 = (long **)0x0;
  pdStack_f0 = (dword *)0x0;
  lStack_c0 = param_4;
  plStack_b8 = plVar6;
  puStack_b0 = puVar14;
  plStack_a8 = plVar7;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_003458a8(&uStack_100,plVar15 + 0x26);
  pdVar9 = &MACH_HEADER.ncmds;
  __Znwm();
  pdVar4 = pdStack_f0;
  *(undefined ***)pdVar9 = &PTR_FUN_009dc038;
  *(long **)(pdVar9 + 2) = plVar15;
  plVar6 = (long *)plVar15[1];
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (pdStack_f0 != (dword *)0x0) {
    lVar12 = *(long *)pdStack_f0;
    pdStack_f0 = pdVar9;
    (**(code **)(lVar12 + 8))(pdVar4);
    pdVar9 = pdStack_f0;
  }
  pdStack_f0 = pdVar9;
  lVar12 = 0x58;
  pplStack_e8 = pplVar10;
  __Znwm();
  pdStack_d0 = pdStack_f0;
  plStack_d8 = plStack_f8;
  uStack_e0 = uStack_100;
  plStack_f8 = (long *)0x0;
  pdStack_f0 = (dword *)0x0;
  uStack_100 = 0;
  pplStack_c8 = pplVar10;
  FUN_003561f0();
  pdVar4 = pdStack_d0;
  pdStack_d0 = (dword *)0x0;
  if (pdVar4 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar4 + 8))();
  }
  plVar6 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar7 = plStack_d8 + 1;
    do {
      lVar13 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  *extraout_x8 = lVar12;
  func_0x003c3f20(*(undefined8 *)(lVar12 + 0x20),plVar15[0xc]);
  pdVar4 = pdStack_f0;
  pdStack_f0 = (dword *)0x0;
  if (pdVar4 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar4 + 8))();
  }
  plVar6 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar7 = plStack_f8 + 1;
    do {
      lVar12 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 003456c4; end: 003458a7;  */

void FUN_003456c4(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  dword *pdVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  long *plStack_68;
  dword *pdStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  dword *pdStack_40;
  undefined8 uStack_38;
  
  plStack_68 = (long *)0x0;
  uStack_70 = 0;
  uStack_58 = 0;
  pdStack_60 = (dword *)0x0;
  FUN_003458a8(&uStack_70,param_2 + 0x130);
  pdVar5 = &MACH_HEADER.ncmds;
  __Znwm();
  pdVar4 = pdStack_60;
  *(undefined ***)pdVar5 = &PTR_FUN_009dc038;
  *(long *)(pdVar5 + 2) = param_2;
  plVar6 = *(long **)(param_2 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (pdStack_60 != (dword *)0x0) {
    lVar7 = *(long *)pdStack_60;
    pdStack_60 = pdVar5;
    (**(code **)(lVar7 + 8))(pdVar4);
    pdVar5 = pdStack_60;
  }
  pdStack_60 = pdVar5;
  lVar7 = 0x58;
  uStack_58 = param_3;
  __Znwm();
  pdStack_40 = pdStack_60;
  plStack_48 = plStack_68;
  uStack_50 = uStack_70;
  plStack_68 = (long *)0x0;
  pdStack_60 = (dword *)0x0;
  uStack_70 = 0;
  uStack_38 = param_3;
  FUN_003561f0();
  pdVar4 = pdStack_40;
  pdStack_40 = (dword *)0x0;
  if (pdVar4 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar4 + 8))();
  }
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  *param_1 = lVar7;
  func_0x003c3f20(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(param_2 + 0x60));
  pdVar4 = pdStack_60;
  pdStack_60 = (dword *)0x0;
  if (pdVar4 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar4 + 8))();
  }
  plVar6 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 003458a8; end: 0034597b;  */

undefined8 * FUN_003458a8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = (long *)param_1[1];
  *param_1 = uVar2;
  param_1[1] = lVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return param_1;
}



/* Entry: 0034597c; end: 00345bd3;  */

segment_command * FUN_0034597c(long param_1)

{
  dword *pdVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined *puVar7;
  dword *pdVar8;
  undefined8 *puVar9;
  dword *pdVar10;
  segment_command *psVar11;
  segment_command *psVar12;
  undefined ***pppuVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lStack_190;
  ulong uStack_188;
  undefined ***pppuStack_180;
  undefined ***pppuStack_178;
  undefined1 auStack_170 [16];
  undefined4 uStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  dword *pdStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  undefined1 auStack_128 [16];
  undefined **ppuStack_118;
  long *plStack_110;
  undefined1 auStack_108 [64];
  undefined **ppuStack_c8;
  dword *pdStack_c0;
  undefined ***pppuStack_b0;
  qword qStack_a8;
  dword *pdStack_68;
  dword *pdStack_60;
  undefined8 uStack_58;
  dword *pdStack_50;
  undefined8 *puStack_48;
  
  lVar15 = lRam0000000000b65d18;
  if (lRam0000000000b65d18 == 0) {
    lVar15 = param_1;
    FUN_003b171c();
  }
  plVar16 = (long *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x3f) < '\0') {
    plVar16 = (long *)*plVar16;
  }
  puVar7 = (undefined *)plVar16;
  _strlen(plVar16);
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  uVar18 = *(undefined8 *)(param_1 + 0x60);
  uStack_58 = *(undefined8 *)(param_1 + 0x130);
  pdStack_50 = *(dword **)(param_1 + 0x138);
  if (pdStack_50 != (dword *)0x0) {
    pdVar8 = pdStack_50 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pdVar8,0x10);
      if (bVar4) {
        *(long *)pdVar8 = *(long *)pdVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pdVar8 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar8 = &PTR_FUN_009dc390;
  *(long *)(pdVar8 + 2) = param_1;
  plVar14 = *(long **)(param_1 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *plVar14 = *plVar14 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pdStack_60 = pdVar8;
  FUN_003d46c4(&puStack_48,lVar15 + 0xf0,plVar16,puVar7,uVar17,uVar18,&uStack_58,&pdStack_60);
  puVar5 = puStack_48;
  puStack_48 = (undefined8 *)0x0;
  puVar9 = *(undefined8 **)(param_1 + 0x170);
  *(undefined8 **)(param_1 + 0x170) = puVar5;
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)();
    puVar5 = puStack_48;
    puStack_48 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
  }
  pdVar8 = pdStack_60;
  pdStack_60 = (dword *)0x0;
  if (pdVar8 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar8 + 8))();
  }
  pdVar10 = pdStack_50;
  if (pdStack_50 != (dword *)0x0) {
    pdVar1 = pdStack_50 + 2;
    do {
      lVar15 = *(long *)pdVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pdVar1,0x10);
      if (bVar4) {
        *(long *)pdVar1 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*(long *)pdStack_50 + 0x10))(pdStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pdVar8 = pdVar10;
    }
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    puStack_48 = (undefined8 *)0x0;
    pdVar8 = &MACH_HEADER.flags;
    __Znwm();
    *(undefined ***)pdVar8 = &PTR_FUN_009dcc68;
    *(undefined8 *)(pdVar8 + 2) = 0;
    *(undefined1 *)(pdVar8 + 4) = 0;
    pdStack_68 = pdVar8;
    FUN_003453d8(param_1,1,&puStack_48,"started resolving",&pdStack_68);
    pdVar8 = pdStack_68;
    pdStack_68 = (dword *)0x0;
    if (pdVar8 != (dword *)0x0) {
      (**(code **)(*(long *)pdVar8 + 8))();
    }
    if (((ulong)puStack_48 & 1) != 0) {
      FUN_0055293c();
    }
    psVar11 = *(segment_command **)(param_1 + 0x170);
    (**(code **)(*(long *)psVar11 + 0x18))();
    return psVar11;
  }
  func_0x00771570();
  func_0x0040cf10();
  func_0x0040cf10();
  func_0x0040cf10();
  if (pdStack_68 != (dword *)0x0) {
    (**(code **)(*(long *)pdStack_68 + 8))();
  }
  FUN_0033c494(&puStack_48);
  __Unwind_Resume();
  qStack_a8 = *(qword *)PTR____stack_chk_guard_00999f88;
  puStack_138 = (undefined *)plVar16;
  if (*(long *)(pdVar8 + 0x36) != 0) {
    func_0x007715d8();
    goto LAB_00345e90;
  }
  if (*(long *)(pdVar8 + 0x3c) != 0) {
    func_0x007715a4();
    goto LAB_00345e90;
  }
  uStack_150 = **(undefined8 **)(*(long *)(pdVar8 + 0x70) + 8);
  if (*(long *)(pdVar8 + 6) == 0) {
    lStack_190 = (long)pdVar8 + 0x21;
    uStack_188 = (ulong)*(byte *)(pdVar8 + 8);
  }
  else {
    uStack_188 = *(ulong *)(pdVar8 + 8);
    lStack_190 = *(long *)(pdVar8 + 10);
  }
  uVar2 = *(undefined4 *)(*(undefined8 **)(*(long *)(pdVar8 + 0x70) + 8) + 1);
  ppuStack_148 = &PTR_FUN_009dbdc8;
  ppuStack_158 = &PTR_DAT_009dbcc0;
  pppuStack_180 = &ppuStack_158;
  pppuStack_178 = &ppuStack_148;
  pdStack_140 = pdVar8;
  (**(code **)(**(long **)(*(long *)(pdVar8 + 4) + 0x120) + 0x10))
            (auStack_170,*(long **)(*(long *)(pdVar8 + 4) + 0x120),&lStack_190);
  ppuStack_c8 = &PTR_FUN_009dc778;
  pppuStack_b0 = &ppuStack_c8;
  auStack_108._32_8_ = &PTR_DAT_009dc808;
  auStack_108._56_8_ = auStack_108 + 0x20;
  auStack_108._24_8_ = 0;
  psVar11 = &segment_command_00000020;
  auStack_108._40_8_ = pdVar8;
  pdStack_c0 = pdVar8;
  __Znwm();
  *(undefined ***)psVar11 = &PTR_DAT_009dc898;
  *(dword **)psVar11->segname = pdVar8;
  *(undefined4 *)(psVar11->segname + 8) = uVar2;
  ppuStack_118 = &puStack_138;
  psVar11->vmaddr = (qword)ppuStack_118;
  auStack_128._0_8_ = &PTR_DAT_009dc928;
  plStack_110 = (long *)auStack_128;
  auStack_128._8_8_ = pdVar8;
  auStack_108._24_8_ = psVar11;
  switch(uStack_160) {
  case 0:
    puStack_130 = auStack_170;
    psVar11 = (segment_command *)&ppuStack_c8;
    FUN_00356d8c(psVar11,&puStack_130);
    break;
  case 1:
    FUN_00348e40(pdVar8);
    psVar11 = (segment_command *)0x0;
    break;
  case 2:
    puStack_130 = auStack_170;
    FUN_00356ff0();
    break;
  case 3:
    puStack_130 = auStack_170;
    psVar11 = (segment_command *)auStack_128;
    FUN_003571fc(psVar11,&puStack_130);
    break;
  default:
    goto LAB_00345e64;
  }
  if (plStack_110 == (long *)auStack_128) {
    lVar15 = 4;
    plVar16 = (long *)auStack_128;
code_r0x00345d7c:
    (**(code **)(*plVar16 + lVar15 * 8))();
  }
  else if (plStack_110 != (long *)0x0) {
    lVar15 = 5;
    plVar16 = plStack_110;
    goto code_r0x00345d7c;
  }
  if ((segment_command *)auStack_108._24_8_ == (segment_command *)auStack_108) {
    lVar15 = 4;
    psVar12 = (segment_command *)auStack_108;
code_r0x00345dac:
    (*(code *)(*(undefined ***)psVar12)[lVar15])();
  }
  else if ((segment_command *)auStack_108._24_8_ != (segment_command *)0x0) {
    lVar15 = 5;
    psVar12 = (segment_command *)auStack_108._24_8_;
    goto code_r0x00345dac;
  }
  if ((undefined1 *)auStack_108._56_8_ == auStack_108 + 0x20) {
    lVar15 = 4;
    plVar16 = (long *)(auStack_108 + 0x20);
code_r0x00345ddc:
    (**(code **)(*plVar16 + lVar15 * 8))();
  }
  else if ((long *)auStack_108._56_8_ != (long *)0x0) {
    lVar15 = 5;
    plVar16 = (long *)auStack_108._56_8_;
    goto code_r0x00345ddc;
  }
  if (pppuStack_b0 == &ppuStack_c8) {
    lVar15 = 4;
    pppuVar13 = &ppuStack_c8;
code_r0x00345e0c:
    (*(code *)(*pppuVar13)[lVar15])();
  }
  else if (pppuStack_b0 != (undefined ***)0x0) {
    lVar15 = 5;
    pppuVar13 = pppuStack_b0;
    goto code_r0x00345e0c;
  }
  FUN_0034ac74(auStack_170);
  if (*(qword *)PTR____stack_chk_guard_00999f88 == qStack_a8) {
    return psVar11;
  }
  ___stack_chk_fail();
LAB_00345e64:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
               ,0x695,2,"assertion failed: %s");
  _abort();
LAB_00345e90:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x345e94);
  (*pcVar6)();
}



/* Entry: 00345bd4; end: 00345f7f;  */

segment_command * FUN_00345bd4(qword param_1,undefined *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  segment_command *psVar4;
  segment_command *psVar5;
  undefined ***pppuVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puStack_120;
  ulong uStack_118;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  qword qStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 auStack_b8 [24];
  long *plStack_a0;
  undefined1 auStack_98 [64];
  undefined **ppuStack_58;
  qword qStack_50;
  undefined ***pppuStack_40;
  qword qStack_38;
  
  qStack_38 = *(qword *)PTR____stack_chk_guard_00999f88;
  puStack_c8 = param_2;
  if (*(long *)(param_1 + 0xd8) != 0) {
    func_0x007715d8();
    goto LAB_00345e90;
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    func_0x007715a4();
    goto LAB_00345e90;
  }
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x1c0) + 8);
  uStack_e0 = *puVar8;
  if (*(long *)(param_1 + 0x18) == 0) {
    puStack_120 = (undefined *)(param_1 + 0x21);
    uStack_118 = (ulong)*(byte *)(param_1 + 0x20);
  }
  else {
    uStack_118 = *(ulong *)(param_1 + 0x20);
    puStack_120 = *(undefined **)(param_1 + 0x28);
  }
  uVar1 = *(undefined4 *)(puVar8 + 1);
  ppuStack_d8 = &PTR_FUN_009dbdc8;
  ppuStack_e8 = &PTR_DAT_009dbcc0;
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x120);
  pppuStack_110 = &ppuStack_e8;
  pppuStack_108 = &ppuStack_d8;
  qStack_d0 = param_1;
  (**(code **)(*plVar3 + 0x10))(auStack_100,plVar3,&puStack_120);
  ppuStack_58 = &PTR_FUN_009dc778;
  pppuStack_40 = &ppuStack_58;
  auStack_98._32_8_ = &PTR_DAT_009dc808;
  auStack_98._56_8_ = auStack_98 + 0x20;
  auStack_98._24_8_ = 0;
  psVar4 = &segment_command_00000020;
  auStack_98._40_8_ = param_1;
  qStack_50 = param_1;
  __Znwm();
  *(undefined ***)psVar4 = &PTR_DAT_009dc898;
  *(qword *)psVar4->segname = param_1;
  *(undefined4 *)(psVar4->segname + 8) = uVar1;
  auStack_b8._16_8_ = &puStack_c8;
  psVar4->vmaddr = auStack_b8._16_8_;
  auStack_b8._0_8_ = &PTR_DAT_009dc928;
  plStack_a0 = (long *)auStack_b8;
  auStack_b8._8_8_ = param_1;
  auStack_98._24_8_ = psVar4;
  switch(uStack_f0) {
  case 0:
    puStack_c0 = auStack_100;
    psVar4 = (segment_command *)&ppuStack_58;
    FUN_00356d8c(psVar4,&puStack_c0);
    break;
  case 1:
    FUN_00348e40(param_1);
    psVar4 = (segment_command *)0x0;
    break;
  case 2:
    puStack_c0 = auStack_100;
    FUN_00356ff0();
    break;
  case 3:
    puStack_c0 = auStack_100;
    psVar4 = (segment_command *)auStack_b8;
    FUN_003571fc(psVar4,&puStack_c0);
    break;
  default:
    goto LAB_00345e64;
  }
  if (plStack_a0 == (long *)auStack_b8) {
    lVar7 = 4;
    plVar3 = (long *)auStack_b8;
code_r0x00345d7c:
    (**(code **)(*plVar3 + lVar7 * 8))();
  }
  else if (plStack_a0 != (long *)0x0) {
    lVar7 = 5;
    plVar3 = plStack_a0;
    goto code_r0x00345d7c;
  }
  if ((segment_command *)auStack_98._24_8_ == (segment_command *)auStack_98) {
    lVar7 = 4;
    psVar5 = (segment_command *)auStack_98;
code_r0x00345dac:
    (*(code *)(*(undefined ***)psVar5)[lVar7])();
  }
  else if ((segment_command *)auStack_98._24_8_ != (segment_command *)0x0) {
    lVar7 = 5;
    psVar5 = (segment_command *)auStack_98._24_8_;
    goto code_r0x00345dac;
  }
  if ((undefined1 *)auStack_98._56_8_ == auStack_98 + 0x20) {
    lVar7 = 4;
    plVar3 = (long *)(auStack_98 + 0x20);
code_r0x00345ddc:
    (**(code **)(*plVar3 + lVar7 * 8))();
  }
  else if ((long *)auStack_98._56_8_ != (long *)0x0) {
    lVar7 = 5;
    plVar3 = (long *)auStack_98._56_8_;
    goto code_r0x00345ddc;
  }
  if (pppuStack_40 == &ppuStack_58) {
    lVar7 = 4;
    pppuVar6 = &ppuStack_58;
code_r0x00345e0c:
    (*(code *)(*pppuVar6)[lVar7])();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar7 = 5;
    pppuVar6 = pppuStack_40;
    goto code_r0x00345e0c;
  }
  FUN_0034ac74(auStack_100);
  if (*(qword *)PTR____stack_chk_guard_00999f88 == qStack_38) {
    return psVar4;
  }
  ___stack_chk_fail();
LAB_00345e64:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
               ,0x695,2,"assertion failed: %s");
  _abort();
LAB_00345e90:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x345e94);
  (*pcVar2)();
}



/* Entry: 00345f80; end: 00346007;  */

void FUN_00345f80(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *(code **)(param_1 + 0xa0) = FUN_00348f18;
  *(long *)(param_1 + 0xa8) = param_1;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar3 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(&uStack_21,param_1 + 0x98,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00346008; end: 003463eb;  */

void FUN_00346008(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 **appuStack_110 [3];
  undefined8 *apuStack_f8 [2];
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **appuStack_c8 [3];
  undefined ***pppuStack_b0;
  undefined **appuStack_a8 [3];
  undefined ***pppuStack_90;
  undefined **appuStack_88 [3];
  undefined ***pppuStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar2 = (int)param_2 + 0x140;
  FUN_003fb210();
  if (iVar2 == 2) {
    uStack_e8 = 1;
    func_0x00339d8c(param_2 + 0xe0);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    (**(code **)(**(long **)(param_2 + 0x120) + 0x10))
              (appuStack_110,*(long **)(param_2 + 0x120),&uStack_130);
    FUN_0034a850(apuStack_f8,appuStack_110);
    FUN_0034ac74(appuStack_110);
    func_0x00339da8(param_2 + 0xe0);
    ppuStack_68 = &PTR_FUN_009dc3e0;
    pppuStack_50 = &ppuStack_68;
    pppuStack_70 = appuStack_88;
    appuStack_88[0] = &PTR_FUN_009dc470;
    pppuStack_90 = appuStack_a8;
    pppuStack_b0 = appuStack_c8;
    appuStack_c8[0] = &PTR_DAT_009dc590;
    appuStack_a8[0] = &PTR_DAT_009dc500;
    uStack_60 = param_3;
    switch(uStack_e8) {
    case 0:
      appuStack_110[0] = apuStack_f8;
      FUN_003565d4(param_1,&ppuStack_68,appuStack_110);
      break;
    case 1:
      FUN_0035675c(param_1);
      break;
    case 2:
      appuStack_110[0] = apuStack_f8;
      FUN_00356858(param_1);
      break;
    case 3:
      appuStack_110[0] = apuStack_f8;
      FUN_0035695c(param_1);
      break;
    default:
      goto LAB_00346298;
    }
    if (pppuStack_b0 == appuStack_c8) {
      lVar4 = 4;
      pppuVar3 = appuStack_c8;
code_r0x003461c0:
      (*(code *)(*pppuVar3)[lVar4])();
    }
    else if (pppuStack_b0 != (undefined ***)0x0) {
      lVar4 = 5;
      pppuVar3 = pppuStack_b0;
      goto code_r0x003461c0;
    }
    if (pppuStack_90 == appuStack_a8) {
      lVar4 = 4;
      pppuVar3 = appuStack_a8;
code_r0x003461f0:
      (*(code *)(*pppuVar3)[lVar4])();
    }
    else if (pppuStack_90 != (undefined ***)0x0) {
      lVar4 = 5;
      pppuVar3 = pppuStack_90;
      goto code_r0x003461f0;
    }
    if (pppuStack_70 == appuStack_88) {
      lVar4 = 4;
      pppuVar3 = appuStack_88;
code_r0x00346220:
      (*(code *)(*pppuVar3)[lVar4])();
    }
    else if (pppuStack_70 != (undefined ***)0x0) {
      lVar4 = 5;
      pppuVar3 = pppuStack_70;
      goto code_r0x00346220;
    }
    if (pppuStack_50 == &ppuStack_68) {
      lVar4 = 4;
      pppuVar3 = &ppuStack_68;
code_r0x00346250:
      (*(code *)(*pppuVar3)[lVar4])();
    }
    else if (pppuStack_50 != (undefined ***)0x0) {
      lVar4 = 5;
      pppuVar3 = pppuStack_50;
      goto code_r0x00346250;
    }
    FUN_0034ac74(apuStack_f8);
  }
  else {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    FUN_003b646c(param_1,2,"channel not connected",0x15,appuStack_110,&uStack_e0);
    apuStack_f8[0] = &uStack_e0;
    FUN_0033d548(apuStack_f8);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_00346298:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
               ,0x695,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3462c8);
  (*pcVar1)();
}



/* Entry: 003463ec; end: 0034681f;  */

void FUN_003463ec(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  dword *pdVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  dword *pdStack_70;
  long *plStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 *puStack_38;
  
  puVar10 = (undefined8 *)param_2[1];
  if (puVar10 != (undefined8 *)0x0) {
    param_2[1] = 0;
    puStack_38 = puVar10;
    FUN_003fb030(param_1 + 0x140,*(undefined4 *)(param_2 + 2),&puStack_38);
    puVar10 = puStack_38;
    puStack_38 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)();
    }
  }
  if (param_2[3] != 0) {
    FUN_003fb0ec(param_1 + 0x140);
  }
  plVar6 = param_2 + 0xe;
  if ((*plVar6 != 0) || (param_2[0xf] != 0)) {
    FUN_00346008(&uStack_40,param_1,param_2);
    uStack_48 = CONCAT44(uStack_3c,uStack_40);
    if (uStack_48 == 0) {
      param_2[0xc] = 0;
      *plVar6 = 0;
      param_2[0xf] = 0;
    }
    else {
      lVar7 = *plVar6;
      if ((uStack_40 & 1) != 0) {
        piVar11 = (int *)(uStack_48 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003c1e6c(&uStack_60,lVar7,&uStack_48);
      if ((uStack_48 & 1) != 0) {
        FUN_0055293c();
      }
      uVar8 = param_2[0xf];
      uStack_50 = CONCAT44(uStack_3c,uStack_40);
      if ((uStack_40 & 1) != 0) {
        piVar11 = (int *)(uStack_50 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003c1e6c(&uStack_60,uVar8,&uStack_50);
      if ((uStack_50 & 1) != 0) {
        FUN_0055293c();
      }
      param_2[0xc] = 0;
      *plVar6 = 0;
      param_2[0xf] = 0;
      if ((uStack_40 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  if ((*(char *)(param_2 + 0x10) != '\0') && (*(long **)(param_1 + 400) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 400) + 0x30))();
  }
  if (param_2[4] != 0) {
    FUN_00343304(param_1);
    uStack_58 = param_2[4];
    if ((uStack_58 & 1) != 0) {
      piVar11 = (int *)(uStack_58 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puVar4 = &uStack_58;
    puVar9 = &uStack_40;
    lVar7 = 0xd;
    FUN_003be1d0(puVar4,0xd,puVar9);
    iVar3 = 0;
    if (uStack_40 == 0) {
      iVar3 = (int)puVar4;
    }
    uVar12 = uStack_58;
    if ((uStack_58 & 1) != 0) {
      FUN_0055293c();
    }
    if (iVar3 == 0) {
      if (*(long *)(param_1 + 0x1d8) != 0) {
        func_0x0077160c();
        func_0x0040cf10();
        if (plStack_68 != (long *)0x0) {
          (**(code **)(*plStack_68 + 8))();
        }
        FUN_0033c494(&uStack_60);
        __Unwind_Resume();
        func_0x003c3de0(puVar9,*(undefined8 *)(uVar12 + 0x60));
        lVar13 = *(long *)(uVar12 + 0x128);
        if (lVar13 != 0) {
          if (lVar13 == lVar7) {
            puVar10 = (undefined8 *)(uVar12 + 0x128);
          }
          else {
            do {
              lVar14 = lVar13;
              lVar13 = *(long *)(lVar14 + 8);
              if (lVar13 == 0) {
                return;
              }
            } while (lVar13 != lVar7);
            puVar10 = (undefined8 *)(lVar14 + 8);
          }
          *puVar10 = *(undefined8 *)(lVar7 + 8);
        }
        return;
      }
      uVar12 = param_2[4];
      if (uVar12 == 0) {
        uStack_80 = 0;
      }
      else {
        if ((uVar12 & 1) != 0) {
          piVar11 = (int *)(uVar12 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar2) {
              *piVar11 = *piVar11 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          uVar12 = param_2[4];
        }
        *(ulong *)(param_1 + 0x1d8) = uVar12;
        uStack_80 = param_2[4];
        if ((uStack_80 & 1) != 0) {
          piVar11 = (int *)(uStack_80 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar2) {
              *piVar11 = *piVar11 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      uStack_60 = 0;
      FUN_003fbde8(&uStack_78,&uStack_80);
      pdVar5 = &MACH_HEADER.ncmds;
      __Znwm();
      uVar12 = uStack_78;
      uStack_78 = 0x36;
      *(undefined ***)pdVar5 = &PTR_FUN_009dbfe8;
      *(ulong *)(pdVar5 + 2) = uVar12;
      if ((uVar12 & 1) != 0) {
        piVar11 = (int *)(uVar12 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        FUN_0055293c();
      }
      pdStack_70 = pdVar5;
      FUN_003453d8(param_1,4,&uStack_60,"shutdown from API",&pdStack_70);
      pdVar5 = pdStack_70;
      pdStack_70 = (dword *)0x0;
      if (pdVar5 != (dword *)0x0) {
        (**(code **)(*(long *)pdVar5 + 8))();
      }
      if ((uStack_78 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_80 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_60 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else if (*(long *)(param_1 + 0x1d8) == 0) {
      plStack_68 = (long *)0x0;
      uStack_60 = 0;
      FUN_003453d8(param_1,0,&uStack_60,"channel entering IDLE",&plStack_68);
      plVar6 = plStack_68;
      plStack_68 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if ((uStack_60 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 8);
  do {
    lVar7 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    FUN_004005ec();
  }
  uStack_88 = 0;
  FUN_003c1e6c(&uStack_40,*param_2,&uStack_88);
  if ((uStack_88 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00346820; end: 003468eb;  */

void FUN_00346820(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  func_0x003c3de0(param_3,*(undefined8 *)(param_1 + 0x60));
  lVar1 = *(long *)(param_1 + 0x128);
  if (lVar1 != 0) {
    if (lVar1 == param_2) {
      puVar3 = (undefined8 *)(param_1 + 0x128);
    }
    else {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 8);
        if (lVar1 == 0) {
          return;
        }
      } while (lVar1 != param_2);
      puVar3 = (undefined8 *)(lVar2 + 8);
    }
    *puVar3 = *(undefined8 *)(param_2 + 8);
  }
  return;
}



/* Entry: 003468ec; end: 003469fb;  */

undefined *** FUN_003468ec(undefined ***param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuStack_58;
  undefined ***pppuStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  pppuVar3 = param_1 + 0x28;
  FUN_003fb210();
  pppuVar4 = pppuVar3;
  pppuVar9 = param_1;
  if (((int)pppuVar3 == 0) && (param_2 != 0)) {
    ppuVar5 = param_1[1];
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
      if (bVar2) {
        *ppuVar5 = *ppuVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppuStack_58 = &PTR_DAT_009dc6a0;
    pppuVar9 = &ppuStack_58;
    pppuStack_50 = param_1;
    pppuStack_40 = pppuVar9;
    FUN_003d0dec(param_1[0x26],&ppuStack_58);
    if (pppuStack_40 == pppuVar9) {
      lVar6 = 4;
      pppuVar4 = &ppuStack_58;
    }
    else {
      pppuVar4 = pppuStack_40;
      if (pppuStack_40 == (undefined ***)0x0) goto LAB_00346990;
      lVar6 = 5;
    }
    (*(code *)(*pppuVar4)[lVar6])();
  }
LAB_00346990:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  if (pppuStack_40 == pppuVar9) {
    lVar6 = 4;
    pppuVar3 = &ppuStack_58;
  }
  else {
    if (pppuStack_40 == (undefined ***)0x0) goto LAB_003469f4;
    lVar6 = 5;
    pppuVar3 = pppuStack_40;
  }
  (*(code *)(*pppuVar3)[lVar6])();
LAB_003469f4:
  __Unwind_Resume();
  FUN_003779b4();
  puVar7 = (undefined8 *)param_4[3];
  plVar8 = (long *)*puVar7;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuVar10 = (undefined **)puVar7[1];
  ppuVar5 = (undefined **)*puVar7;
  ppuVar11 = (undefined **)puVar7[2];
  pppuVar4[0xc] = (undefined **)puVar7[3];
  pppuVar4[0xb] = ppuVar11;
  pppuVar4[10] = ppuVar10;
  pppuVar4[9] = ppuVar5;
  pppuVar4[0xd] = (undefined **)param_4[4];
  ppuVar5 = (undefined **)param_4[6];
  pppuVar4[0xe] = (undefined **)param_4[5];
  pppuVar4[0xf] = ppuVar5;
  ppuVar5 = (undefined **)param_4[7];
  pppuVar4[0x10] = (undefined **)*param_4;
  pppuVar4[0x11] = ppuVar5;
  pppuVar4[0x12] = (undefined **)param_4[2];
  pppuVar4[0x13] = (undefined **)0x0;
  *(undefined2 *)(pppuVar4 + 0x18) = 0;
  pppuVar4[0x1b] = (undefined **)0x0;
  pppuVar4[0x1c] = (undefined **)0x0;
  pppuVar4[0x1a] = (undefined **)0x0;
  pppuVar4[0x22] = (undefined **)0x0;
  pppuVar4[0x21] = (undefined **)0x0;
  pppuVar4[0x24] = (undefined **)0x0;
  pppuVar4[0x23] = (undefined **)0x0;
  pppuVar4[0x26] = (undefined **)0x0;
  pppuVar4[0x25] = (undefined **)0x0;
  pppuVar4[0x28] = (undefined **)0x0;
  pppuVar4[0x27] = (undefined **)0x0;
  pppuVar4[0x29] = (undefined **)0x0;
  return pppuVar4;
}



/* Entry: 003469fc; end: 00346aa3;  */

void FUN_003469fc(long param_1,undefined8 param_2,char *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = 0x7fffffffffffffff;
  if (*param_3 != '\0') {
    uVar5 = param_4[5];
  }
  FUN_003779b4(param_1,param_2,param_4,uVar5);
  puVar3 = (undefined8 *)param_4[3];
  plVar4 = (long *)*puVar3;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  uVar7 = puVar3[2];
  *(undefined8 *)(param_1 + 0x60) = puVar3[3];
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x68) = param_4[4];
  uVar5 = param_4[6];
  *(undefined8 *)(param_1 + 0x70) = param_4[5];
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  uVar5 = param_4[7];
  *(undefined8 *)(param_1 + 0x80) = *param_4;
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = param_4[2];
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  return;
}



/* Entry: 00346aa4; end: 00346b87;  */

long FUN_00346aa4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_1 + 0x48);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
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
      (*(code *)plVar5[1])();
    }
  }
  lVar6 = 0x118;
  do {
    if (*(long *)(param_1 + lVar6) != 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0x76f,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x346b70);
      (*pcVar4)();
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x148);
  if ((*(ulong *)(param_1 + 0x148) & 1) != 0) {
    FUN_0055293c();
  }
  FUN_00356b78(param_1 + 0x110);
  plVar5 = *(long **)(param_1 + 0x108);
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
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x003cf020(*(long *)(param_1 + 0x18) + 8);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 00346b88; end: 00346c1b;  */

void FUN_00346b88(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  ulong uStack_30;
  undefined1 uStack_21;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(*(long *)(lVar6 + 0x90) + 0x40);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x28) + 0x18))();
  }
  uVar4 = *(undefined8 *)(lVar6 + 0xe0);
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar5 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_00342584(&uStack_21,uVar4,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00346c1c; end: 00346d97;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_00346c1c(long param_1,undefined8 param_2,ulong *param_3,code *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  ulong uStack_108;
  char *pcStack_100;
  long alStack_f8 [20];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*param_3 == 0) {
    func_0x00771640();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x346d58);
    (*pcVar3)();
  }
  lVar9 = 0;
  alStack_f8[1] = 0;
  do {
    lVar7 = param_1 + lVar9 * 8;
    lVar6 = *(long *)(lVar7 + 0x118);
    if (lVar6 != 0) {
      plVar5 = (long *)(lVar7 + 0x118);
      *(long *)(lVar6 + 0x18) = param_1;
      lVar7 = *plVar5;
      *(code **)(lVar7 + 0x28) = FUN_00346f18;
      *(long *)(lVar7 + 0x30) = lVar7;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      alStack_f8[0] = *plVar5;
      uStack_108 = *param_3;
      if ((uStack_108 & 1) != 0) {
        piVar8 = (int *)(uStack_108 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      alStack_f8[0] = alStack_f8[0] + 0x20;
      pcStack_100 = "PendingBatchesFail";
      FUN_0034accc(alStack_f8 + 1,alStack_f8,&uStack_108,&pcStack_100);
      if ((uStack_108 & 1) != 0) {
        FUN_0055293c();
      }
      *plVar5 = 0;
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 6);
  iVar4 = (int)alStack_f8 + 8;
  (*param_4)();
  if (iVar4 == 0) {
    FUN_003470dc(alStack_f8 + 1,*(undefined8 *)(param_1 + 0x88));
  }
  else {
    FUN_00346f8c(alStack_f8 + 1);
  }
  plVar5 = alStack_f8 + 1;
  FUN_0034afe4(plVar5);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return plVar5;
  }
  ___stack_chk_fail();
  FUN_0034afe4(alStack_f8 + 1);
  __Unwind_Resume(plVar5);
  return (long *)0x0;
}



/* Entry: 00346d98; end: 00346d9f;  */

undefined8 FUN_00346d98(void)

{
  return 0;
}



/* Entry: 00346da0; end: 00346ddf;  */

void FUN_00346da0(long param_1,ulong *param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uStack_58;
  
  lVar4 = param_3;
  FUN_00346ea8();
  param_1 = param_1 + lVar4 * 8;
  if (*(long *)(param_1 + 0x118) == 0) {
    *(long *)(param_1 + 0x118) = param_3;
    return;
  }
  func_0x00771674();
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  lVar1 = *(long *)(lVar4 + 8) + 0x70;
  func_0x00339d8c(lVar1);
  FUN_0034510c(uVar5,lVar4,param_2);
  func_0x00339da8(lVar1);
  if ((int)uVar5 != 0) {
    uVar7 = *param_2;
    if ((uVar7 & 1) != 0) {
      piVar6 = (int *)(uVar7 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_58 = uVar7;
    FUN_00347790(lVar4,&uStack_58);
    if ((uVar7 & 1) != 0) {
      FUN_0055293c(uVar7);
    }
  }
  return;
}


