/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10939cbf8; end: 10939cc3f;  */

/* WARNING: Removing unreachable block (ram,0x00010939cd04) */
/* WARNING: Removing unreachable block (ram,0x00010939cd08) */
/* WARNING: Removing unreachable block (ram,0x00010939cd10) */
/* WARNING: Removing unreachable block (ram,0x00010939cd18) */
/* WARNING: Removing unreachable block (ram,0x00010939cd1c) */

void FUN_10939cbf8(undefined8 param_1,ulong param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  long *plStack_70;
  long *plStack_68;
  
  if (0x924924924924924 < param_2) {
    func_0x000104c4f740();
    plVar4 = (long *)0x40;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110af5240;
    plVar4[4] = param_3;
    plVar4[5] = param_4;
    plVar4[6] = param_3;
    plVar4[7] = param_5;
    plStack_70 = plVar4 + 3;
    *plStack_70 = (long)&PTR_DAT_110af5290;
    plStack_68 = plVar4;
    FUN_10939ce10(extraout_x8,param_1,&plStack_70,param_2,0,0,param_7,param_8,0);
    plVar4 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    return;
  }
  __Znwm(param_2 * 0x1c);
  return;
}



/* Entry: 10939cc40; end: 10939cd67;  */

/* WARNING: Removing unreachable block (ram,0x00010939cd04) */
/* WARNING: Removing unreachable block (ram,0x00010939cd08) */
/* WARNING: Removing unreachable block (ram,0x00010939cd10) */
/* WARNING: Removing unreachable block (ram,0x00010939cd18) */
/* WARNING: Removing unreachable block (ram,0x00010939cd1c) */

void FUN_10939cc40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  )

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_50;
  long *plStack_48;
  
  plVar4 = (long *)0x40;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110af5240;
  plVar4[4] = param_4;
  plVar4[5] = param_5;
  plVar4[6] = param_4;
  plVar4[7] = param_6;
  plStack_50 = plVar4 + 3;
  *plStack_50 = (long)&PTR_DAT_110af5290;
  plStack_48 = plVar4;
  FUN_10939ce10(param_1,param_2,&plStack_50,param_3,0,0,param_8,param_9,0);
  plVar4 = plStack_48;
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
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10939cd68; end: 10939cd77;  */

void FUN_10939cd68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af5240;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10939cd78; end: 10939cd97;  */

void FUN_10939cd78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af5240;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10939cd98; end: 10939cdab;  */

void FUN_10939cd98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010939cda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10939cdac; end: 10939cdbf;  */

void FUN_10939cdac(void)

{
  FUN_10939cdd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10939cdc0; end: 10939cdcf;  */

undefined8 FUN_10939cdc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10939cdd0; end: 10939ce0f;  */

undefined8 * FUN_10939cdd0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110af5290;
  if ((code *)param_1[4] != (code *)0x0) {
    (*(code *)param_1[4])(param_1[1],param_1[2]);
  }
  return param_1;
}



/* Entry: 10939ce10; end: 10939cea3;  */

int * FUN_10939ce10(int *param_1,int *param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (param_4 != 0) {
    iVar1 = param_4;
  }
  param_1[1] = param_2[1];
  param_1[2] = iVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar2 = *param_3;
  *(long *)(param_1 + 8) = param_3[1];
  *(long *)(param_1 + 6) = lVar2;
  param_1[3] = iVar1;
  *param_3 = 0;
  param_3[1] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_6;
  if (param_5 == (long *)0x0) {
    param_5 = *(long **)(param_1 + 6);
    if (param_5 == (long *)0x0) {
      param_5 = (long *)0x0;
    }
    else {
      (**(code **)(*param_5 + 0x10))();
    }
  }
  *(long **)(param_1 + 4) = param_5;
  return param_1;
}



/* Entry: 10939cea4; end: 10939cf53;  */

long FUN_10939cea4(long param_1)

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



/* Entry: 10939cf54; end: 10939d00f;  */

void FUN_10939cf54(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  plStack_38 = (long *)param_2[4];
  uStack_40 = param_2[3];
  if (param_2[4] != 0) {
    plVar1 = (long *)(param_2[4] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10939d010(param_1,&uStack_28,&uStack_40,*(undefined4 *)(param_2 + 1),param_2[2],param_2[5],
                *(undefined4 *)(param_2 + 6));
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10939d010; end: 10939d0a3;  */

int * FUN_10939d010(int *param_1,int *param_2,long *param_3,int param_4,long *param_5,
                   undefined8 param_6,int param_7)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (param_4 != 0) {
    iVar1 = param_4;
  }
  param_1[1] = param_2[1];
  param_1[2] = iVar1;
  param_1[3] = iVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar2 = *param_3;
  *(long *)(param_1 + 8) = param_3[1];
  *(long *)(param_1 + 6) = lVar2;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined8 *)(param_1 + 10) = param_6;
  param_1[0xc] = param_7;
  if (param_5 == (long *)0x0) {
    param_5 = *(long **)(param_1 + 6);
    if (param_5 == (long *)0x0) {
      param_5 = (long *)0x0;
    }
    else {
      (**(code **)(*param_5 + 0x10))();
    }
  }
  *(long **)(param_1 + 4) = param_5;
  return param_1;
}



/* Entry: 10939d0a4; end: 10939d153;  */

void FUN_10939d0a4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  while (lVar3 != lVar1) {
    lVar3 = lVar3 + -8;
    FUN_10939d15c(lVar3,0);
  }
  *(long *)(param_1 + 0x10) = lVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_10939d328();
  uStack_38 = 0;
  FUN_10939d61c(param_1 + 0x38,puVar2);
  FUN_10939d61c(&uStack_38,0);
  return;
}



/* Entry: 10939d154; end: 10939d15b;  */

void FUN_10939d154(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10939d158);
  (*pcVar1)();
}



/* Entry: 10939d15c; end: 10939d183;  */

void FUN_10939d15c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10939d184();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10939d184; end: 10939d327;  */

long FUN_10939d184(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x218) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x218) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x1e0);
    }
  }
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (0 < *(int *)(param_1 + 0x1e4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x220);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1e4));
  }
  lVar5 = *(long *)(param_1 + 0x228);
  if (lVar5 != param_1 + 0x230 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x168) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x130);
    }
  }
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (0 < *(int *)(param_1 + 0x134)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x170);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x134));
  }
  lVar5 = *(long *)(param_1 + 0x178);
  if (lVar5 != param_1 + 0x180 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xb8) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x80);
    }
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (0 < *(int *)(param_1 + 0x84)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xc0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x84));
  }
  lVar5 = *(long *)(param_1 + 200);
  if (lVar5 != param_1 + 0xd0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10939d328; end: 10939d3ab;  */

void FUN_10939d328(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10939d3ac(param_1,param_4);
    lVar1 = param_1;
    FUN_10939d42c(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10939d3ac; end: 10939d3e3;  */

undefined1  [16] FUN_10939d3ac(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = param_1;
    FUN_10939d3f8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 4);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10939d3e4();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 >> 0x3b == 0) {
    lVar2 = param_2 << 5;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    uVar3 = param_2;
    FUN_10939d4b8(param_4,param_2);
    param_4 = param_4 + 0x20;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10939d3e4; end: 10939d3f7;  */

undefined1  [16] FUN_10939d3e4(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 >> 0x3b == 0) {
    lVar1 = param_2 << 5;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    uVar2 = param_2;
    FUN_10939d4b8(param_4,param_2);
    param_4 = param_4 + 0x20;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10939d3f8; end: 10939d42b;  */

undefined1  [16] FUN_10939d3f8(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3b == 0) {
    lVar1 = param_2 << 5;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    uVar2 = param_2;
    FUN_10939d4b8(param_4,param_2);
    param_4 = param_4 + 0x20;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10939d42c; end: 10939d4b7;  */

long FUN_10939d42c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_10939d4b8(param_4,param_2);
    param_4 = param_4 + 0x20;
  }
  return param_4;
}



/* Entry: 10939d4b8; end: 10939d58f;  */

undefined8 * FUN_10939d4b8(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_110af4c80;
  func_0x00010938e870(param_1,&uStack_38);
  uStack_38 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010938e870(param_1,&uStack_38);
  if (0 < *(int *)((long)param_1 + 0x14)) {
    iVar1 = 0;
    do {
      _memcpy(param_1[1] + (long)*(int *)(param_1 + 3) * (long)iVar1,
              *(long *)(param_2 + 8) + (long)*(int *)(param_2 + 0x18) * (long)iVar1,
              (long)*(int *)(param_1 + 2));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((long)param_1 + 0x14));
  }
  return param_1;
}



/* Entry: 10939d590; end: 10939d61b;  */

void FUN_10939d590(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)*puVar3;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)puVar3[1];
  puVar1 = puVar4;
  if (puVar2 != puVar4) {
    do {
      puVar2 = puVar2 + -4;
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar4);
    puVar1 = *(undefined8 **)*param_1;
  }
  puVar3[1] = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10939d61c; end: 10939d65b;  */

void FUN_10939d61c(long *param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    lStack_28 = lVar1;
    FUN_10939d590(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10939d65c; end: 10939d747;  */

undefined8 * FUN_10939d65c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_110af5330;
  uVar5 = param_2[1];
  uVar6 = *param_2;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 2);
  param_1[10] = uVar5;
  param_1[9] = uVar6;
  uVar6 = *param_2;
  iVar1 = *(int *)(param_1 + 10);
  iVar2 = *(int *)((long)param_1 + 0x54);
  plVar3 = (long *)0x8;
  __Znwm();
  *plVar3 = 0;
  puVar4 = (undefined8 *)0x70;
  __Znwm();
  *puVar4 = uVar6;
  *(int *)(puVar4 + 1) = iVar1;
  *(int *)((long)puVar4 + 0xc) = iVar2 + iVar1;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  *plVar3 = (long)puVar4;
  FUN_10939e5f0(param_1 + 8,plVar3);
  return param_1;
}



/* Entry: 10939d748; end: 10939d7a3;  */

undefined8 * FUN_10939d748(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110af52e8;
  FUN_10939d61c(param_1 + 7,0);
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  puStack_28 = param_1 + 1;
  FUN_10939e4b0(&puStack_28);
  return param_1;
}



/* Entry: 10939d7a4; end: 10939da2b;  */

long * FUN_10939d7a4(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lVar20;
  long lVar21;
  
  plVar7 = (long *)0x250;
  __Znwm();
  _bzero();
  auVar19 = NEON_fmov(0x3ff0000000000000,8);
  plVar7[0xd] = 0x3ff0000000000000;
  plVar7[0xc] = -0x4010000000000000;
  lVar15 = auVar19._8_8_;
  plVar7[0xf] = lVar15;
  lVar13 = auVar19._0_8_;
  plVar7[0xe] = lVar13;
  *(undefined4 *)(plVar7 + 0x10) = 0x42ff0000;
  *(undefined8 *)((long)plVar7 + 0x8c) = 0;
  *(undefined8 *)((long)plVar7 + 0x84) = 0;
  *(undefined8 *)((long)plVar7 + 0x9c) = 0;
  *(undefined8 *)((long)plVar7 + 0x94) = 0;
  *(undefined8 *)((long)plVar7 + 0xac) = 0;
  *(undefined8 *)((long)plVar7 + 0xa4) = 0;
  plVar7[0x17] = 0;
  plVar7[0x16] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x18] = (long)(plVar7 + 0x11);
  plVar7[0x19] = (long)(plVar7 + 0x1a);
  plVar7[0x1d] = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x1e] = 0;
  *(undefined8 *)((long)plVar7 + 0x104) = 0;
  *(undefined8 *)((long)plVar7 + 0xfc) = 0;
  plVar7[0x23] = 0x3ff0000000000000;
  plVar7[0x22] = -0x4010000000000000;
  plVar7[0x25] = lVar15;
  plVar7[0x24] = lVar13;
  *(undefined4 *)(plVar7 + 0x26) = 0x42ff0000;
  *(undefined8 *)((long)plVar7 + 0x13c) = 0;
  *(undefined8 *)((long)plVar7 + 0x134) = 0;
  *(undefined8 *)((long)plVar7 + 0x14c) = 0;
  *(undefined8 *)((long)plVar7 + 0x144) = 0;
  *(undefined8 *)((long)plVar7 + 0x15c) = 0;
  *(undefined8 *)((long)plVar7 + 0x154) = 0;
  plVar7[0x2d] = 0;
  plVar7[0x2c] = 0;
  plVar7[0x2e] = (long)(plVar7 + 0x27);
  plVar7[0x2f] = (long)(plVar7 + 0x30);
  plVar7[0x31] = 0;
  plVar7[0x30] = 0;
  plVar7[0x33] = 0;
  plVar7[0x32] = 0;
  plVar7[0x35] = 0;
  plVar7[0x34] = 0;
  *(undefined8 *)((long)plVar7 + 0x1b4) = 0;
  *(undefined8 *)((long)plVar7 + 0x1ac) = 0;
  plVar7[0x39] = 0x3ff0000000000000;
  plVar7[0x38] = -0x4010000000000000;
  plVar7[0x3b] = lVar15;
  plVar7[0x3a] = lVar13;
  *(undefined4 *)(plVar7 + 0x3c) = 0x42ff0000;
  *(undefined8 *)((long)plVar7 + 0x1ec) = 0;
  *(undefined8 *)((long)plVar7 + 0x1e4) = 0;
  *(undefined8 *)((long)plVar7 + 0x1fc) = 0;
  *(undefined8 *)((long)plVar7 + 500) = 0;
  *(undefined8 *)((long)plVar7 + 0x20c) = 0;
  *(undefined8 *)((long)plVar7 + 0x204) = 0;
  plVar7[0x43] = 0;
  plVar7[0x42] = 0;
  plVar7[0x44] = (long)(plVar7 + 0x3d);
  plVar7[0x45] = (long)(plVar7 + 0x46);
  plVar7[0x47] = 0;
  plVar7[0x46] = 0;
  *plVar7 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3;
  *(undefined1 *)((long)plVar7 + 0x244) = 1;
  plVar7[4] = 0x3ff0000000000000;
  FUN_10939da2c(plVar7 + 6,param_3);
  FUN_10939da2c(plVar7 + 0x1c,param_3);
  plVar8 = plVar7 + 0x32;
  FUN_10939da2c();
  plVar16 = *(long **)(param_1 + 0x10);
  if (plVar16 < *(long **)(param_1 + 0x18)) {
    plVar17 = plVar16 + 1;
    *plVar16 = (long)plVar7;
  }
  else {
    plVar14 = *(long **)(param_1 + 8);
    lVar13 = (long)plVar16 - (long)plVar14;
    uVar1 = (lVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x00010939e524();
LAB_10939da0c:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10939da10);
      (*pcVar6)();
    }
    uVar9 = (long)*(long **)(param_1 + 0x18) - (long)plVar14;
    uVar11 = (long)uVar9 >> 2;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar11 = 0x1fffffffffffffff;
    }
    if (uVar11 >> 0x3d != 0) {
      func_0x000104c4f740();
      goto LAB_10939da0c;
    }
    lVar15 = uVar11 << 3;
    __Znwm();
    plVar8 = (long *)(lVar15 + lVar13);
    plVar16 = plVar8 + -(lVar13 >> 3);
    plVar17 = plVar8 + 1;
    *plVar8 = (long)plVar7;
    plVar8 = plVar16;
    param_3 = plVar14;
    _memcpy(plVar16,plVar14,lVar13);
    *(long **)(param_1 + 8) = plVar16;
    *(long **)(param_1 + 0x10) = plVar17;
    *(ulong *)(param_1 + 0x18) = lVar15 + uVar11 * 8;
    if (plVar14 != (long *)0x0) {
      __ZdlPv();
      plVar8 = plVar14;
    }
  }
  *(long **)(param_1 + 0x10) = plVar17;
  lVar13 = plVar17[-1];
  plVar16 = *(long **)(param_1 + 0x28);
  if (plVar16 < *(long **)(param_1 + 0x30)) {
    plVar8 = plVar16 + 1;
    *plVar16 = lVar13;
LAB_10939d9dc:
    *(long **)(param_1 + 0x28) = plVar8;
    return *(long **)(*(long *)(param_1 + 0x10) + -8);
  }
  lVar15 = (long)plVar16 - *(long *)(param_1 + 0x20);
  uVar1 = (lVar15 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar9 = (long)*(long **)(param_1 + 0x30) - *(long *)(param_1 + 0x20);
    uVar11 = (long)uVar9 >> 2;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar11 = 0x1fffffffffffffff;
    }
    FUN_10939e54c();
    plVar16 = (long *)(uVar11 + lVar15);
    plVar8 = plVar16 + 1;
    *plVar16 = lVar13;
    lVar15 = (long)plVar16 - (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20));
    _memcpy(lVar15);
    lVar13 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar15;
    *(long **)(param_1 + 0x28) = plVar8;
    *(ulong *)(param_1 + 0x30) = uVar11 + (long)param_3 * 8;
    if (lVar13 != 0) {
      __ZdlPv();
    }
    goto LAB_10939d9dc;
  }
  func_0x00010939e538();
  FUN_10939d184(lVar13);
  __ZdlPv();
  __Unwind_Resume();
  lVar13 = *param_3;
  plVar8[1] = param_3[1];
  *plVar8 = lVar13;
  lVar13 = param_3[2];
  plVar8[3] = param_3[3];
  plVar8[2] = lVar13;
  lVar18 = param_3[5];
  lVar15 = param_3[4];
  lVar13 = param_3[6];
  lVar21 = param_3[9];
  lVar20 = param_3[8];
  plVar8[7] = param_3[7];
  plVar8[6] = lVar13;
  plVar8[9] = lVar21;
  plVar8[8] = lVar20;
  plVar8[5] = lVar18;
  plVar8[4] = lVar15;
  if (plVar8 == param_3) {
    return plVar8;
  }
  if (param_3[0x11] != 0) {
    piVar2 = (int *)(param_3[0x11] + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar8[0x11] != 0) {
    piVar2 = (int *)(plVar8[0x11] + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(plVar8 + 10);
    }
  }
  plVar8[0x11] = 0;
  plVar8[0xd] = 0;
  plVar8[0xc] = 0;
  plVar8[0xf] = 0;
  plVar8[0xe] = 0;
  if (*(int *)((long)plVar8 + 0x54) < 1) {
    *(int *)(plVar8 + 10) = (int)param_3[10];
LAB_10939dafc:
    if (*(int *)((long)param_3 + 0x54) < 3) {
      *(int *)((long)plVar8 + 0x54) = *(int *)((long)param_3 + 0x54);
      plVar8[0xb] = param_3[0xb];
      puVar10 = (undefined8 *)param_3[0x13];
      puVar12 = (undefined8 *)plVar8[0x13];
      *puVar12 = *puVar10;
      puVar12[1] = puVar10[1];
      goto LAB_10939db3c;
    }
  }
  else {
    lVar13 = 0;
    lVar15 = plVar8[0x12];
    do {
      *(undefined4 *)(lVar15 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)((long)plVar8 + 0x54));
    *(int *)(plVar8 + 10) = (int)param_3[10];
    if (*(int *)((long)plVar8 + 0x54) < 3) goto LAB_10939dafc;
  }
  func_0x000109a84868(plVar8 + 10,param_3 + 10);
LAB_10939db3c:
  lVar13 = param_3[0xc];
  plVar8[0xd] = param_3[0xd];
  plVar8[0xc] = lVar13;
  lVar13 = param_3[0xe];
  plVar8[0xf] = param_3[0xf];
  plVar8[0xe] = lVar13;
  lVar13 = param_3[0x10];
  plVar8[0x11] = param_3[0x11];
  plVar8[0x10] = lVar13;
  return plVar8;
}



/* Entry: 10939da2c; end: 10939db63;  */

undefined8 * FUN_10939da2c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  uVar9 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar9;
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar11 = param_2[6];
  uVar13 = param_2[9];
  uVar12 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar11;
  param_1[9] = uVar13;
  param_1[8] = uVar12;
  param_1[5] = uVar10;
  param_1[4] = uVar9;
  if (param_1 == param_2) {
    return param_1;
  }
  if (param_2[0x11] != 0) {
    piVar1 = (int *)(param_2[0x11] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (param_1[0x11] != 0) {
    piVar1 = (int *)(param_1[0x11] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 10);
    }
  }
  param_1[0x11] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  if (*(int *)((long)param_1 + 0x54) < 1) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
LAB_10939dafc:
    if (*(int *)((long)param_2 + 0x54) < 3) {
      *(int *)((long)param_1 + 0x54) = *(int *)((long)param_2 + 0x54);
      param_1[0xb] = param_2[0xb];
      puVar6 = (undefined8 *)param_2[0x13];
      puVar8 = (undefined8 *)param_1[0x13];
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
      goto LAB_10939db3c;
    }
  }
  else {
    lVar5 = 0;
    lVar7 = param_1[0x12];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x54));
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    if (*(int *)((long)param_1 + 0x54) < 3) goto LAB_10939dafc;
  }
  func_0x000109a84868(param_1 + 10,param_2 + 10);
LAB_10939db3c:
  uVar9 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar9;
  uVar9 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar9;
  uVar9 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar9;
  return param_1;
}



/* Entry: 10939db64; end: 10939e443;  */

void FUN_10939db64(long param_1,long *param_2)

{
  int *piVar1;
  ulong uVar2;
  float *pfVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  char cVar7;
  code *pcVar8;
  bool bVar9;
  double *pdVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  undefined8 uStack_140;
  int iStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  double dStack_120;
  double dStack_118;
  undefined4 uStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  double *pdStack_88;
  double *pdStack_80;
  
  plVar24 = (long *)(param_1 + 0x20);
  plVar5 = (long *)*plVar24;
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar5 != plVar6) {
    *plVar24 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    dStack_90 = 0.0;
    pdStack_88 = (double *)0x0;
    auVar33 = NEON_fmov(0x3fe0000000000000,8);
    auVar28 = NEON_fmov(0xbfe0000000000000,8);
    dVar29 = auVar28._8_8_;
    dVar26 = auVar28._0_8_;
    dVar34 = auVar33._8_8_;
    dVar30 = auVar33._0_8_;
    pdStack_80 = (double *)0x0;
    plVar13 = plVar5;
    do {
      pdVar10 = pdStack_88;
      lVar12 = *plVar13;
      dVar32 = *(double *)(lVar12 + 0x1a0);
      dVar35 = *(double *)(lVar12 + 0x1a8);
      dVar27 = (double)_pow(*(undefined8 *)(lVar12 + 0x1c8),(double)*(int *)(param_1 + 0x50));
      dStack_160 = (double)CONCAT44((float)((dVar35 + dVar34) * (1.0 / dVar27) + dVar29),
                                    (float)((dVar32 + dVar30) * (1.0 / dVar27) + dVar26));
      if (pdVar10 < pdStack_80) {
        *pdVar10 = dStack_160;
        pdStack_88 = pdVar10 + 1;
      }
      else {
        pdVar10 = &dStack_90;
        FUN_1092de294(pdVar10,&dStack_160);
        pdStack_88 = pdVar10;
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar6);
    plVar13 = *(long **)(param_1 + 0x40);
    lVar20 = *plVar13;
    lVar12 = *(long *)(lVar20 + 0x40);
    if (lVar12 != 0) {
      *(long *)(lVar20 + 0x48) = lVar12;
      __ZdlPv();
      *(long *)(lVar20 + 0x40) = 0;
      *(undefined8 *)(lVar20 + 0x48) = 0;
      *(undefined8 *)(lVar20 + 0x50) = 0;
      plVar13 = *(long **)(param_1 + 0x40);
    }
    *(double *)(lVar20 + 0x40) = dStack_90;
    *(double **)(lVar20 + 0x48) = pdStack_88;
    *(double **)(lVar20 + 0x50) = pdStack_80;
    pdStack_88 = (double *)0x0;
    pdStack_80 = (double *)0x0;
    dStack_90 = 0.0;
    puVar23 = (undefined8 *)(param_1 + 0x38);
    FUN_10939f05c(*plVar13,*puVar23,param_2);
    puVar25 = (undefined8 *)**(undefined8 **)(param_1 + 0x40);
    if (*(char *)(param_1 + 0x58) == '\x01') {
      plVar13 = (long *)0x8;
      __Znwm();
      *plVar13 = 0;
      puVar11 = (undefined8 *)0x70;
      __Znwm();
      uVar31 = *puVar25;
      puVar11[1] = puVar25[1];
      *puVar11 = uVar31;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      *plVar13 = (long)puVar11;
      dStack_160 = 0.0;
      dStack_158 = 0.0;
      dStack_150 = 0.0;
      FUN_10939e580(&dStack_160,puVar25[0xb],puVar25[0xc],(long)(puVar25[0xc] - puVar25[0xb]) >> 3);
      lVar21 = *plVar13;
      lVar20 = *(long *)(lVar21 + 0x40);
      lVar12 = lVar21;
      if (lVar20 != 0) {
        *(long *)(lVar21 + 0x48) = lVar20;
        __ZdlPv(lVar20);
        *(long *)(lVar21 + 0x40) = 0;
        *(undefined8 *)(lVar21 + 0x48) = 0;
        *(undefined8 *)(lVar21 + 0x50) = 0;
        lVar12 = *plVar13;
      }
      *(double *)(lVar21 + 0x48) = dStack_158;
      *(double *)(lVar21 + 0x40) = dStack_160;
      *(double *)(lVar21 + 0x50) = dStack_150;
      dStack_158 = 0.0;
      dStack_150 = 0.0;
      dStack_160 = 0.0;
      FUN_10939f05c(lVar12,param_2,*puVar23);
      lStack_a0 = 0;
      uStack_98 = 0;
      lStack_a8 = 0;
      lVar12 = *(long *)(*plVar13 + 0x58);
      lVar20 = *(long *)(*plVar13 + 0x60);
      FUN_10939e580(&lStack_a8,lVar12,lVar20,lVar20 - lVar12 >> 3);
      uVar19 = 0;
      lVar12 = puVar25[5];
      plVar15 = plVar5;
      do {
        lVar20 = *plVar15;
        bVar9 = false;
        if (*(char *)(lVar12 + uVar19) != '\0') {
          uVar31 = *(undefined8 *)(lStack_a8 + uVar19 * 8);
          dVar32 = *(double *)(lVar20 + 400) - (double)(float)uVar31;
          dVar35 = *(double *)(lVar20 + 0x198) - (double)(float)((ulong)uVar31 >> 0x20);
          bVar9 = dVar32 * dVar32 + dVar35 * dVar35 < 1.0;
        }
        *(bool *)(lVar20 + 0x244) = bVar9;
        uVar19 = (ulong)((int)uVar19 + 1);
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar6);
      if (lStack_a8 != 0) {
        lStack_a0 = lStack_a8;
        __ZdlPv();
      }
      if (dStack_160 != 0.0) {
        dStack_158 = dStack_160;
        __ZdlPv();
      }
      lVar12 = *plVar13;
      *plVar13 = 0;
      if (lVar12 != 0) {
        func_0x00010939f6c8(plVar13);
      }
      __ZdlPv(plVar13);
    }
    uVar19 = 0;
    plVar13 = plVar5;
    do {
      lVar20 = *plVar13;
      lVar12 = lVar20 + 400;
      FUN_10939da2c(lVar20 + 0xe0);
      uVar31 = *(undefined8 *)(puVar25[0xb] + uVar19 * 8);
      dVar32 = (double)(float)uVar31;
      dVar35 = (double)(float)((ulong)uVar31 >> 0x20);
      uStack_140 = *(undefined8 *)(lVar20 + 0x1b0);
      iStack_138 = *(int *)(param_1 + 0x50);
      uStack_130 = *(undefined8 *)(lVar20 + 0x1c0);
      uStack_128 = *(undefined8 *)(lVar20 + 0x1c8);
      uStack_110 = 0x42ff0000;
      uStack_104 = 0;
      uStack_100 = 0;
      iStack_10c = 0;
      uStack_108 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_e4 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      dStack_160 = dVar32;
      dStack_158 = dVar35;
      puStack_d0 = &uStack_108;
      puStack_c8 = &uStack_c0;
      dStack_120 = (double)_pow(*(undefined8 *)(lVar20 + 0x1c8),(double)iStack_138);
      dStack_118 = 1.0 / dStack_120;
      dStack_150 = (dVar32 + dVar30) * dStack_120 + dVar26;
      dStack_148 = (dVar35 + dVar34) * dStack_120 + dVar29;
      *(double *)(lVar20 + 0x198) = dStack_158;
      *(double *)(lVar20 + 400) = dStack_160;
      *(double *)(lVar20 + 0x1a8) = dStack_148;
      *(double *)(lVar20 + 0x1a0) = dStack_150;
      *(undefined8 *)(lVar20 + 0x1c8) = uStack_128;
      *(undefined8 *)(lVar20 + 0x1c0) = uStack_130;
      *(double *)(lVar20 + 0x1d8) = dStack_118;
      *(double *)(lVar20 + 0x1d0) = dStack_120;
      *(ulong *)(lVar20 + 0x1b8) = CONCAT44(uStack_134,iStack_138);
      *(undefined8 *)(lVar20 + 0x1b0) = uStack_140;
      if (*(long *)(lVar20 + 0x218) != 0) {
        piVar1 = (int *)(*(long *)(lVar20 + 0x218) + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(lVar20 + 0x1e0);
        }
      }
      *(undefined8 *)(lVar20 + 0x218) = 0;
      *(undefined8 *)(lVar20 + 0x1f8) = 0;
      *(undefined8 *)(lVar20 + 0x1f0) = 0;
      *(undefined8 *)(lVar20 + 0x208) = 0;
      *(undefined8 *)(lVar20 + 0x200) = 0;
      if (0 < *(int *)(lVar20 + 0x1e4)) {
        lVar21 = 0;
        lVar16 = *(long *)(lVar20 + 0x220);
        do {
          *(undefined4 *)(lVar16 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(lVar20 + 0x1e4));
      }
      *(ulong *)(lVar20 + 0x1e8) = CONCAT44(uStack_104,uStack_108);
      *(ulong *)(lVar20 + 0x1e0) = CONCAT44(iStack_10c,uStack_110);
      *(ulong *)(lVar20 + 0x1f8) = CONCAT44(uStack_f4,uStack_f8);
      *(ulong *)(lVar20 + 0x1f0) = CONCAT44(uStack_fc,uStack_100);
      *(ulong *)(lVar20 + 0x208) = CONCAT44(uStack_e4,uStack_e8);
      *(ulong *)(lVar20 + 0x200) = CONCAT44(uStack_ec,uStack_f0);
      *(undefined8 *)(lVar20 + 0x218) = uStack_d8;
      *(ulong *)(lVar20 + 0x210) = CONCAT44(uStack_dc,uStack_e0);
      puVar17 = *(undefined8 **)(lVar20 + 0x228);
      puVar11 = (undefined8 *)(lVar20 + 0x230);
      if (puVar17 != puVar11) {
        if (puVar17 != (undefined8 *)0x0) {
          _free(puVar17[-1]);
        }
        *(undefined8 **)(lVar20 + 0x228) = puVar11;
        *(long *)(lVar20 + 0x220) = lVar20 + 0x1e8;
        puVar17 = puVar11;
      }
      if (iStack_10c < 3) {
        *puVar17 = *puStack_c8;
        puVar17[1] = puStack_c8[1];
        uStack_110 = 0x42ff0000;
        uStack_104 = 0;
        uStack_100 = 0;
        iStack_10c = 0;
        uStack_108 = 0;
        uStack_f4 = 0;
        uStack_f0 = 0;
        uStack_fc = 0;
        uStack_f8 = 0;
        uStack_e4 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        if (puStack_c8 != &uStack_c0) {
          _free(puStack_c8[-1]);
        }
      }
      else {
        *(undefined8 **)(lVar20 + 0x228) = puStack_c8;
        *(undefined4 **)(lVar20 + 0x220) = puStack_d0;
      }
      iVar4 = *(int *)(lVar20 + 0x108);
      dVar32 = *(double *)(lVar20 + 0x1a0);
      dVar35 = *(double *)(lVar20 + 0x1a8);
      uVar31 = *(undefined8 *)(lVar20 + 0x1c8);
      dStack_120 = (double)_pow(uVar31,(double)iVar4);
      dStack_118 = 1.0 / dStack_120;
      dStack_160 = (dVar32 + dVar30) * dStack_118 + dVar26;
      dStack_158 = (dVar35 + dVar34) * dStack_118 + dVar29;
      uStack_140 = *(undefined8 *)(lVar20 + 0x1b0);
      uStack_130 = *(undefined8 *)(lVar20 + 0x1c0);
      uStack_110 = 0x42ff0000;
      uStack_104 = 0;
      uStack_100 = 0;
      iStack_10c = 0;
      uStack_108 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_e4 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      dStack_150 = (dStack_160 + dVar30) * dStack_120 + dVar26;
      dStack_148 = (dStack_158 + dVar34) * dStack_120 + dVar29;
      *(double *)(lVar20 + 0x198) = dStack_158;
      *(double *)(lVar20 + 400) = dStack_160;
      *(double *)(lVar20 + 0x1a8) = dStack_148;
      *(double *)(lVar20 + 0x1a0) = dStack_150;
      *(ulong *)(lVar20 + 0x1b8) = CONCAT44(uStack_134,iVar4);
      *(undefined8 *)(lVar20 + 0x1b0) = uStack_140;
      *(undefined8 *)(lVar20 + 0x1c8) = uVar31;
      *(undefined8 *)(lVar20 + 0x1c0) = uStack_130;
      *(double *)(lVar20 + 0x1d8) = dStack_118;
      *(double *)(lVar20 + 0x1d0) = dStack_120;
      iStack_138 = iVar4;
      uStack_128 = uVar31;
      puStack_d0 = &uStack_108;
      puStack_c8 = &uStack_c0;
      if (*(long *)(lVar20 + 0x218) != 0) {
        piVar1 = (int *)(*(long *)(lVar20 + 0x218) + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(lVar20 + 0x1e0);
        }
      }
      *(undefined8 *)(lVar20 + 0x218) = 0;
      *(undefined8 *)(lVar20 + 0x1f8) = 0;
      *(undefined8 *)(lVar20 + 0x1f0) = 0;
      *(undefined8 *)(lVar20 + 0x208) = 0;
      *(undefined8 *)(lVar20 + 0x200) = 0;
      if (0 < *(int *)(lVar20 + 0x1e4)) {
        lVar21 = 0;
        lVar16 = *(long *)(lVar20 + 0x220);
        do {
          *(undefined4 *)(lVar16 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(lVar20 + 0x1e4));
      }
      *(ulong *)(lVar20 + 0x1e8) = CONCAT44(uStack_104,uStack_108);
      *(ulong *)(lVar20 + 0x1e0) = CONCAT44(iStack_10c,uStack_110);
      *(ulong *)(lVar20 + 0x1f8) = CONCAT44(uStack_f4,uStack_f8);
      *(ulong *)(lVar20 + 0x1f0) = CONCAT44(uStack_fc,uStack_100);
      *(ulong *)(lVar20 + 0x208) = CONCAT44(uStack_e4,uStack_e8);
      *(ulong *)(lVar20 + 0x200) = CONCAT44(uStack_ec,uStack_f0);
      *(undefined8 *)(lVar20 + 0x218) = uStack_d8;
      *(ulong *)(lVar20 + 0x210) = CONCAT44(uStack_dc,uStack_e0);
      puVar17 = *(undefined8 **)(lVar20 + 0x228);
      if (puVar17 != puVar11) {
        if (puVar17 != (undefined8 *)0x0) {
          _free(puVar17[-1]);
        }
        *(undefined8 **)(lVar20 + 0x228) = puVar11;
        *(long *)(lVar20 + 0x220) = lVar20 + 0x1e8;
        puVar17 = puVar11;
      }
      if (iStack_10c < 3) {
        *puVar17 = *puStack_c8;
        puVar17[1] = puStack_c8[1];
        uStack_110 = 0x42ff0000;
        uStack_104 = 0;
        uStack_100 = 0;
        iStack_10c = 0;
        uStack_108 = 0;
        uStack_f4 = 0;
        uStack_f0 = 0;
        uStack_fc = 0;
        uStack_f8 = 0;
        uStack_e4 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        if (puStack_c8 != &uStack_c0) {
          _free(puStack_c8[-1]);
        }
      }
      else {
        *(undefined8 **)(lVar20 + 0x228) = puStack_c8;
        *(undefined4 **)(lVar20 + 0x220) = puStack_d0;
      }
      if (*(char *)(param_1 + 0x58) == '\x01') {
        *(double *)(lVar20 + 0x20) = (double)*(float *)(puVar25[2] + uVar19 * 4);
        if ((*(byte *)(lVar20 + 0x244) & 1) == 0) goto LAB_10939e1b8;
LAB_10939e1a4:
        pfVar3 = (float *)(puVar25[0xb] + uVar19 * 8);
        if (*pfVar3 < 0.0) goto LAB_10939e1b8;
        bVar9 = pfVar3[1] < 0.0;
        *(bool *)(lVar20 + 0x244) = !bVar9;
        if (bVar9) goto LAB_10939e1bc;
        iVar4 = *(int *)(lVar20 + 0x1b8);
        dVar32 = *(double *)(lVar20 + 0x1a0);
        dVar35 = *(double *)(lVar20 + 0x1a8);
        dVar27 = (double)_pow(*(undefined8 *)(lVar20 + 0x1c8),(double)iVar4);
        uVar31 = *(undefined8 *)(*param_2 + (long)iVar4 * 0x20 + 0x10);
        if ((double)(int)uVar31 <= (dVar32 + dVar30) * (1.0 / dVar27) + dVar26) goto LAB_10939e1bc;
        bVar9 = (dVar35 + dVar34) * (1.0 / dVar27) + dVar29 < (double)(int)((ulong)uVar31 >> 0x20);
        *(bool *)(lVar20 + 0x244) = bVar9;
        if (bVar9) {
          plVar15 = *(long **)(param_1 + 0x28);
          if (plVar15 < *(long **)(param_1 + 0x30)) {
            plVar22 = plVar15 + 1;
            *plVar15 = lVar20;
          }
          else {
            lVar21 = (long)plVar15 - *plVar24;
            uVar2 = (lVar21 >> 3) + 1;
            if (uVar2 >> 0x3d != 0) {
              func_0x00010939e538();
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10939e398);
              (*pcVar8)();
            }
            uVar14 = (long)*(long **)(param_1 + 0x30) - *plVar24;
            uVar18 = (long)uVar14 >> 2;
            if (uVar18 <= uVar2) {
              uVar18 = uVar2;
            }
            if (0x7ffffffffffffff7 < uVar14) {
              uVar18 = 0x1fffffffffffffff;
            }
            FUN_10939e54c();
            plVar15 = (long *)(uVar18 + lVar21);
            plVar22 = plVar15 + 1;
            *plVar15 = lVar20;
            lVar16 = (long)plVar15 - (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20));
            _memcpy(lVar16);
            lVar21 = *(long *)(param_1 + 0x20);
            *(long *)(param_1 + 0x20) = lVar16;
            *(long **)(param_1 + 0x28) = plVar22;
            *(ulong *)(param_1 + 0x30) = uVar18 + lVar12 * 8;
            if (lVar21 != 0) {
              __ZdlPv();
            }
          }
          *(long **)(param_1 + 0x28) = plVar22;
          *(int *)(lVar20 + 0x240) = *(int *)(lVar20 + 0x240) + 1;
        }
      }
      else {
        cVar7 = *(char *)(puVar25[5] + uVar19);
        *(bool *)(lVar20 + 0x244) = cVar7 != '\0';
        *(double *)(lVar20 + 0x20) = (double)*(float *)(puVar25[2] + uVar19 * 4);
        if (cVar7 != '\0') goto LAB_10939e1a4;
LAB_10939e1b8:
        *(undefined1 *)(lVar20 + 0x244) = 0;
LAB_10939e1bc:
        *(undefined1 *)(lVar20 + 0x244) = 0;
      }
      uVar19 = (ulong)((int)uVar19 + 1);
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar6);
    puVar25 = (undefined8 *)0x18;
    __Znwm();
    *puVar25 = 0;
    puVar25[1] = 0;
    puVar25[2] = 0;
    FUN_10939d328();
    dStack_160 = 0.0;
    FUN_10939d61c(puVar23,puVar25);
    FUN_10939d61c(&dStack_160,0);
    if (dStack_90 != 0.0) {
      pdStack_88 = (double *)dStack_90;
      __ZdlPv();
    }
    if (plVar5 != (long *)0x0) {
      __ZdlPv(plVar5);
    }
  }
  return;
}



/* Entry: 10939e444; end: 10939e4af;  */

undefined8 * FUN_10939e444(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110af5330;
  FUN_10939e5f0(param_1 + 8,0);
  *param_1 = &PTR_FUN_110af52e8;
  FUN_10939d61c(param_1 + 7,0);
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  puStack_28 = param_1 + 1;
  FUN_10939e4b0(&puStack_28);
  return param_1;
}



/* Entry: 10939e4b0; end: 10939e523;  */

void FUN_10939e4b0(long *param_1)

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
        FUN_10939d15c(lVar2,0);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10939e524; end: 10939e54b;  */

void FUN_10939e524(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar1 >> 0x3d == 0) {
    __Znwm((long)puVar1 << 3);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_1092e9240();
    puVar2 = *(undefined8 **)(puVar1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    *(undefined8 **)(puVar1 + 8) = puVar2;
  }
  return;
}



/* Entry: 10939e54c; end: 10939e57f;  */

void FUN_10939e54c(ulong param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_1092e9240();
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10939e580; end: 10939e5ef;  */

void FUN_10939e580(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_1092e9240(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10939e5f0; end: 10939e637;  */

void FUN_10939e5f0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      func_0x00010939f6c8(plVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return;
  }
  return;
}



/* Entry: 10939e638; end: 10939e833;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10939e638(long param_1,double *param_2,long param_3,double *param_4,double *param_5,
                   undefined4 *param_6,ulong param_7)

{
  ulong uVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  ushort *puVar10;
  undefined8 *puVar11;
  double *pdVar12;
  float fVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  float *pfVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  bool bVar25;
  float fVar26;
  long lVar27;
  ulong uVar28;
  undefined8 *puVar29;
  float *unaff_x19;
  int unaff_w24;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  int iVar38;
  double dVar39;
  double dVar40;
  int iVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar45;
  int iVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  short sVar48;
  undefined4 uVar49;
  short sVar57;
  double dVar50;
  float fVar60;
  undefined1 auVar51 [16];
  short sVar56;
  short sVar59;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar58;
  float fVar61;
  undefined1 auVar55 [16];
  short sVar62;
  uint uVar63;
  short sVar70;
  double dVar64;
  double dVar65;
  uint uVar71;
  short sVar73;
  uint uVar74;
  short sVar77;
  double dVar75;
  uint uVar78;
  undefined1 auVar66 [16];
  short sVar69;
  short sVar72;
  short sVar76;
  short sVar79;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  uint uVar80;
  int iVar85;
  undefined8 uVar81;
  uint uVar84;
  uint uVar86;
  uint uVar88;
  undefined1 auVar82 [16];
  int iVar87;
  int iVar89;
  undefined1 auVar83 [16];
  float fVar90;
  int iVar93;
  undefined8 uVar91;
  int iVar94;
  undefined1 auVar92 [16];
  int iVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  byte bVar104;
  undefined1 uVar105;
  byte bVar106;
  undefined1 uVar107;
  byte bVar108;
  undefined1 uVar109;
  byte bVar110;
  undefined1 uVar111;
  byte bVar112;
  undefined1 uVar113;
  byte bVar114;
  undefined1 uVar115;
  byte bVar116;
  undefined1 uVar117;
  byte bVar118;
  undefined1 uVar119;
  uint uVar120;
  uint uVar121;
  uint uVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar127;
  undefined1 auVar128 [16];
  ushort uVar129;
  ushort uVar133;
  ushort uVar134;
  ushort uVar135;
  ushort uVar136;
  ushort uVar137;
  ushort uVar138;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  ushort uVar139;
  undefined1 auVar132 [16];
  short sVar140;
  short sVar141;
  short sVar142;
  short sVar143;
  undefined1 auVar144 [16];
  double dStack_620;
  double dStack_618;
  undefined8 uStack_608;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  float *pfStack_5e8;
  undefined1 **ppuStack_5e0;
  code *pcStack_5d8;
  double *pdStack_5d0;
  int iStack_5c4;
  long lStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  int iStack_5a4;
  undefined8 *puStack_5a0;
  long lStack_598;
  undefined8 *puStack_590;
  int *piStack_588;
  double *pdStack_580;
  uint uStack_574;
  ulong uStack_570;
  undefined8 uStack_568;
  long lStack_560;
  long lStack_558;
  ulong uStack_550;
  int iStack_544;
  long lStack_540;
  ulong uStack_538;
  long lStack_530;
  ulong uStack_528;
  int iStack_51c;
  uint uStack_518;
  uint uStack_514;
  int aiStack_510 [8];
  int aiStack_4f0 [56];
  int aiStack_410 [64];
  undefined8 auStack_310 [32];
  undefined8 auStack_210 [32];
  float afStack_110 [8];
  short asStack_f0 [8];
  long lStack_e0;
  undefined1 *puStack_70;
  code *pcStack_68;
  byte bStack_60;
  byte bStack_5f;
  byte abStack_5e [2];
  undefined2 uStack_5c;
  byte abStack_5a [4];
  byte bStack_56;
  byte bStack_55;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  byte bStack_50;
  byte bStack_4f;
  byte bStack_4e;
  byte bStack_4d;
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  byte bStack_48;
  byte bStack_47;
  byte bStack_46;
  byte bStack_45;
  byte bStack_44;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  uint auStack_40 [10];
  long lStack_18;
  
  lVar19 = 0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(param_3 + 8);
  iVar14 = *(int *)(param_3 + 0x18);
  dVar40 = *param_2;
  dVar65 = param_2[1];
  dVar50 = param_2[2];
  dVar39 = param_2[3];
  dVar64 = *param_4 * 65536.0;
  dVar75 = param_4[1] * 65536.0;
  do {
    *(int *)((long)auStack_40 + lVar19) = (int)dVar64;
    *(int *)((long)&bStack_60 + lVar19) = (int)dVar75;
    dVar64 = dVar40 * 65536.0 + dVar64;
    dVar75 = dVar65 * 65536.0 + dVar75;
    lVar19 = lVar19 + 4;
  } while (lVar19 != 0x20);
  lVar19 = 0;
  iVar22 = (int)(dVar50 * 65536.0);
  iVar23 = (int)(dVar39 * 65536.0);
  auVar125[1] = bStack_4f;
  auVar125[0] = bStack_50;
  auVar125[2] = bStack_4e;
  auVar125[3] = bStack_4d;
  auVar125[4] = bStack_4c;
  auVar125[5] = bStack_4b;
  auVar125[6] = bStack_4a;
  auVar125[7] = bStack_49;
  auVar125[8] = bStack_48;
  auVar125[9] = bStack_47;
  auVar125[10] = bStack_46;
  auVar125[0xb] = bStack_45;
  auVar125[0xc] = bStack_44;
  auVar125[0xd] = bStack_43;
  auVar125[0xe] = bStack_42;
  auVar125[0xf] = bStack_41;
  bVar30 = bStack_60;
  bVar31 = bStack_5f;
  bVar32 = abStack_5e[0];
  bVar33 = abStack_5e[1];
  bVar34 = (byte)uStack_5c;
  bVar35 = uStack_5c._1_1_;
  bVar36 = abStack_5a[0];
  bVar37 = abStack_5a[1];
  bVar104 = abStack_5a[2];
  bVar106 = abStack_5a[3];
  bVar108 = bStack_56;
  bVar110 = bStack_55;
  bVar112 = bStack_54;
  bVar114 = bStack_53;
  bVar116 = bStack_52;
  bVar118 = bStack_51;
  uVar63 = auStack_40[0];
  uVar71 = auStack_40[1];
  uVar74 = auStack_40[2];
  uVar78 = auStack_40[3];
  uVar80 = auStack_40[4];
  uVar84 = auStack_40[5];
  uVar86 = auStack_40[6];
  uVar88 = auStack_40[7];
  auVar53 = ZEXT216(0);
  auVar83 = ZEXT216(0);
  lVar20 = lVar19;
  do {
    while( true ) {
      lVar27 = 0;
      uVar120 = auVar125._4_4_;
      uVar121 = auVar125._8_4_;
      uVar122 = auVar125._12_4_;
      auStack_40[2] = (uint)CONCAT11(bVar110,bVar108) * iVar14 + (uVar74 >> 0x10);
      auStack_40[3] = (uint)CONCAT11(bVar118,bVar116) * iVar14 + (uVar78 >> 0x10);
      auStack_40[0] = (uint)CONCAT11(bVar33,bVar32) * iVar14 + (uVar63 >> 0x10);
      auStack_40[1] = (uint)CONCAT11(bVar37,bVar36) * iVar14 + (uVar71 >> 0x10);
      auStack_40[6] = (uVar121 >> 0x10) * iVar14 + (uVar86 >> 0x10);
      auStack_40[7] = (uVar122 >> 0x10) * iVar14 + (uVar88 >> 0x10);
      auStack_40[4] = (auVar125._0_4_ >> 0x10) * iVar14 + (uVar80 >> 0x10);
      auStack_40[5] = (uVar120 >> 0x10) * iVar14 + (uVar84 >> 0x10);
      uVar28 = 0xfffffffffffffffe;
      do {
        uVar4 = *(uint *)((long)auStack_40 + lVar27 + 4);
        puVar2 = (ushort *)(lVar15 + (ulong)*(uint *)((long)auStack_40 + lVar27));
        puVar10 = (ushort *)((long)&bStack_60 + lVar27);
        uVar129 = *puVar2;
        pdVar12 = (double *)(ulong)uVar129;
        *puVar10 = uVar129;
        *(undefined2 *)(abStack_5e + lVar27) = *(undefined2 *)((long)puVar2 + (long)iVar14);
        puVar3 = (undefined2 *)(lVar15 + (ulong)uVar4);
        *(undefined2 *)((long)&uStack_5c + lVar27) = *puVar3;
        *(undefined2 *)(abStack_5a + lVar27) = *(undefined2 *)((long)puVar3 + (long)iVar14);
        uVar28 = uVar28 + 2;
        lVar27 = lVar27 + 8;
      } while (uVar28 < 6);
      uVar129 = (ushort)uVar63;
      uVar133 = (ushort)uVar71;
      uVar134 = (ushort)uVar74;
      uVar135 = (ushort)uVar78;
      uVar136 = (ushort)uVar80;
      uVar137 = (ushort)uVar84;
      uVar138 = (ushort)uVar86;
      uVar139 = (ushort)uVar88;
      uVar63 = uVar63 + iVar22;
      uVar71 = uVar71 + iVar22;
      uVar74 = uVar74 + iVar22;
      uVar78 = uVar78 + iVar22;
      uVar80 = uVar80 + iVar22;
      uVar84 = uVar84 + iVar22;
      uVar86 = uVar86 + iVar22;
      uVar88 = uVar88 + iVar22;
      auVar126._0_2_ = uVar129 >> 1;
      auVar126._2_2_ = uVar133 >> 1;
      auVar126._4_2_ = uVar134 >> 1;
      auVar126._6_2_ = uVar135 >> 1;
      auVar126._8_2_ = uVar136 >> 1;
      auVar126._10_2_ = uVar137 >> 1;
      auVar126._12_2_ = uVar138 >> 1;
      auVar126._14_2_ = uVar139 >> 1;
      auVar124._0_2_ = CONCAT11(bVar31,bVar30) >> 1;
      auVar124._2_2_ = CONCAT11(bVar35,bVar34) >> 1;
      auVar124._4_2_ = (ushort)(CONCAT12(bVar106,CONCAT11(bVar104,bVar37)) >> 9);
      auVar124._6_2_ = CONCAT11(bVar114,bVar112) >> 1;
      auVar124._8_2_ = auVar125._0_2_ >> 1;
      auVar124._10_2_ = auVar125._4_2_ >> 1;
      auVar124._12_2_ = auVar125._8_2_ >> 1;
      auVar124._14_2_ = auVar125._12_2_ >> 1;
      iVar6 = CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar30))) + iVar23;
      bVar30 = (byte)iVar6;
      bVar31 = (byte)((uint)iVar6 >> 8);
      bVar32 = (byte)((uint)iVar6 >> 0x10);
      bVar33 = (byte)((uint)iVar6 >> 0x18);
      iVar6 = CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar35,bVar34))) + iVar23;
      bVar34 = (byte)iVar6;
      bVar35 = (byte)((uint)iVar6 >> 8);
      bVar36 = (byte)((uint)iVar6 >> 0x10);
      bVar37 = (byte)((uint)iVar6 >> 0x18);
      iVar6 = CONCAT13(bVar110,CONCAT12(bVar108,CONCAT11(bVar106,bVar104))) + iVar23;
      bVar104 = (byte)iVar6;
      bVar106 = (byte)((uint)iVar6 >> 8);
      bVar108 = (byte)((uint)iVar6 >> 0x10);
      bVar110 = (byte)((uint)iVar6 >> 0x18);
      iVar6 = CONCAT13(bVar118,CONCAT12(bVar116,CONCAT11(bVar114,bVar112))) + iVar23;
      bVar112 = (byte)iVar6;
      bVar114 = (byte)((uint)iVar6 >> 8);
      bVar116 = (byte)((uint)iVar6 >> 0x10);
      bVar118 = (byte)((uint)iVar6 >> 0x18);
      auVar125._0_4_ = auVar125._0_4_ + iVar23;
      auVar125._4_4_ = uVar120 + iVar23;
      auVar125._8_4_ = uVar121 + iVar23;
      auVar125._12_4_ = uVar122 + iVar23;
      sVar48 = ((ushort)abStack_5a[1] - (ushort)uStack_5c._1_1_) * 0x80;
      sVar56 = ((ushort)bStack_55 - (ushort)abStack_5a[3]) * 0x80;
      sVar57 = ((ushort)bStack_51 - (ushort)bStack_53) * 0x80;
      auVar144._2_2_ = ((ushort)abStack_5a[0] - (ushort)(byte)uStack_5c) * 0x80;
      auVar144._0_2_ = ((ushort)abStack_5e[0] - (ushort)bStack_60) * 0x80;
      auVar144._4_2_ = ((ushort)bStack_56 - (ushort)abStack_5a[2]) * 0x80;
      auVar144._6_2_ = ((ushort)bStack_52 - (ushort)bStack_54) * 0x80;
      auVar144._8_2_ = ((ushort)bStack_4e - (ushort)bStack_50) * 0x80;
      auVar144._10_2_ = ((ushort)bStack_4a - (ushort)bStack_4c) * 0x80;
      auVar144._12_2_ = ((ushort)bStack_46 - (ushort)bStack_48) * 0x80;
      auVar144._14_2_ = ((ushort)bStack_42 - (ushort)bStack_44) * 0x80;
      auVar144 = NEON_sqdmulh(auVar144,auVar124,2);
      auVar130[2] = (char)sVar48;
      auVar130._0_2_ = ((ushort)abStack_5e[1] - (ushort)bStack_5f) * 0x80;
      auVar130[3] = (char)((ushort)sVar48 >> 8);
      auVar130[4] = (char)sVar56;
      auVar130[5] = (char)((ushort)sVar56 >> 8);
      auVar130[6] = (char)sVar57;
      auVar130[7] = (char)((ushort)sVar57 >> 8);
      auVar130._8_2_ = ((ushort)bStack_4d - (ushort)bStack_4f) * 0x80;
      auVar130._10_2_ = ((ushort)bStack_49 - (ushort)bStack_4b) * 0x80;
      auVar130._12_2_ = ((ushort)bStack_45 - (ushort)bStack_47) * 0x80;
      auVar130._14_2_ = ((ushort)bStack_41 - (ushort)bStack_43) * 0x80;
      auVar130 = NEON_sqdmulh(auVar130,auVar124,2);
      sVar48 = (ushort)bStack_60 * 0x80 + auVar144._0_2_;
      sVar56 = (ushort)(byte)uStack_5c * 0x80 + auVar144._2_2_;
      sVar57 = (ushort)abStack_5a[2] * 0x80 + auVar144._4_2_;
      sVar59 = (ushort)bStack_54 * 0x80 + auVar144._6_2_;
      sVar140 = (ushort)bStack_50 * 0x80 + auVar144._8_2_;
      sVar141 = (ushort)bStack_4c * 0x80 + auVar144._10_2_;
      sVar142 = (ushort)bStack_48 * 0x80 + auVar144._12_2_;
      sVar143 = (ushort)bStack_44 * 0x80 + auVar144._14_2_;
      auVar131._0_2_ = ((ushort)bStack_5f * 0x80 + auVar130._0_2_) - sVar48;
      auVar131._2_2_ = ((ushort)uStack_5c._1_1_ * 0x80 + auVar130._2_2_) - sVar56;
      auVar131._4_2_ = ((ushort)abStack_5a[3] * 0x80 + auVar130._4_2_) - sVar57;
      auVar131._6_2_ = ((ushort)bStack_53 * 0x80 + auVar130._6_2_) - sVar59;
      auVar131._8_2_ = ((ushort)bStack_4f * 0x80 + auVar130._8_2_) - sVar140;
      auVar131._10_2_ = ((ushort)bStack_4b * 0x80 + auVar130._10_2_) - sVar141;
      auVar131._12_2_ = ((ushort)bStack_47 * 0x80 + auVar130._12_2_) - sVar142;
      auVar131._14_2_ = ((ushort)bStack_43 * 0x80 + auVar130._14_2_) - sVar143;
      auVar130 = NEON_sqdmulh(auVar131,auVar126,2);
      uVar129 = sVar48 + auVar130._0_2_;
      uVar133 = sVar56 + auVar130._2_2_;
      uVar134 = sVar57 + auVar130._4_2_;
      uVar135 = sVar59 + auVar130._6_2_;
      uVar136 = sVar140 + auVar130._8_2_;
      uVar137 = sVar141 + auVar130._10_2_;
      uVar138 = sVar142 + auVar130._12_2_;
      uVar139 = sVar143 + auVar130._14_2_;
      uVar81 = CONCAT17((char)(uVar139 >> 7),
                        CONCAT16((char)(uVar138 >> 7),
                                 CONCAT15((char)(uVar137 >> 7),
                                          CONCAT14((char)(uVar136 >> 7),
                                                   CONCAT13((char)(uVar135 >> 7),
                                                            CONCAT12((char)(uVar134 >> 7),
                                                                     CONCAT11((char)(uVar133 >> 7),
                                                                              (char)(uVar129 >> 7)))
                                                           )))));
      *(undefined8 *)(param_1 + lVar19 * 8) = uVar81;
      if ((param_7 & 1) != 0) break;
      lVar19 = lVar19 + 1;
      if (lVar19 == 8) goto LAB_10939e808;
    }
    uVar28 = CONCAT26(uVar135 >> 7,CONCAT24(uVar134 >> 7,CONCAT22(uVar133 >> 7,uVar129 >> 7))) &
             0xfefffefffefffeff;
    auVar41._0_2_ = (short)uVar28 + auVar83._0_2_;
    auVar41._2_2_ = (short)(uVar28 >> 0x10) + auVar83._2_2_;
    auVar41._4_2_ = (short)(uVar28 >> 0x20) + auVar83._4_2_;
    auVar41._6_2_ = (short)(uVar28 >> 0x30) + auVar83._6_2_;
    auVar41._8_2_ = (uVar136 >> 7 & 0xfeff) + auVar83._8_2_;
    auVar41._10_2_ = (uVar137 >> 7 & 0xfeff) + auVar83._10_2_;
    auVar41._12_2_ = (uVar138 >> 7 & 0xfeff) + auVar83._12_2_;
    auVar41._14_2_ = (uVar139 >> 7 & 0xfeff) + auVar83._14_2_;
    auVar83 = NEON_umull(uVar81,uVar81,1);
    auVar123._0_4_ = auVar53._0_4_ + (uint)auVar83._0_2_;
    auVar123._4_4_ = auVar53._4_4_ + (uint)auVar83._2_2_;
    auVar123._8_4_ = auVar53._8_4_ + (uint)auVar83._4_2_;
    auVar123._12_4_ = auVar53._12_4_ + (uint)auVar83._6_2_;
    lVar19 = lVar20 + 1;
    auVar53 = auVar123;
    auVar83 = auVar41;
    lVar20 = lVar19;
  } while (lVar19 != 8);
  auVar53._4_4_ = auVar123._4_4_ * 2;
  auVar53._0_4_ = auVar123._0_4_ * 2;
  auVar53._8_4_ = auVar123._8_4_ * 2;
  auVar53._12_4_ = auVar123._12_4_ * 2;
  auVar125 = NEON_ext(auVar53,auVar53,8,1);
  uVar49 = NEON_ucvtf(auVar123._0_4_ * 2 + auVar125._0_4_ + auVar123._4_4_ * 2 + auVar125._4_4_);
  *param_6 = uVar49;
  auVar125 = NEON_ext(auVar41,auVar41,8,1);
  uVar49 = NEON_uaddlv(CONCAT26(auVar41._6_2_ + auVar125._6_2_,
                                CONCAT24(auVar41._4_2_ + auVar125._4_2_,
                                         CONCAT22(auVar41._2_2_ + auVar125._2_2_,
                                                  auVar41._0_2_ + auVar125._0_2_))),2);
  uVar49 = NEON_ucvtf(uVar49);
  *(undefined4 *)param_5 = uVar49;
LAB_10939e808:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return 1;
  }
  ___stack_chk_fail();
  puStack_70 = &stack0xfffffffffffffff0;
  pcStack_68 = FUN_10939e834;
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar23 = (int)param_4;
  uVar63 = ((int)pdVar12[1] - iVar23) - 4;
  uVar63 = uVar63 & ((int)uVar63 >> 0x1f ^ 0xffffffffU);
  uVar28 = (ulong)uVar63;
  iVar14 = iVar23 + 4 + (int)pdVar12[1];
  iVar22 = *(int *)(puVar10 + 10);
  if (iVar14 <= *(int *)(puVar10 + 10)) {
    iVar22 = iVar14;
  }
  uVar74 = iVar22 - 8;
  iVar14 = iVar23 + 4 + (int)*pdVar12;
  uVar71 = ((int)*pdVar12 - iVar23) - 4;
  uVar71 = uVar71 & ((int)uVar71 >> 0x1f ^ 0xffffffffU);
  iVar6 = *(int *)(puVar10 + 8);
  if (iVar14 <= *(int *)(puVar10 + 8)) {
    iVar6 = iVar14;
  }
  uVar78 = iVar6 - 8;
  if (iVar23 < 4) {
    if ((int)uVar74 < (int)uVar63) {
      uVar80 = 0;
      pdVar12 = (double *)0x0;
    }
    else {
      pdVar12 = (double *)0x0;
      uVar80 = 0;
      param_4 = (double *)(long)*(int *)(puVar10 + 0xc);
      unaff_x19 = afStack_110;
      lStack_5c0 = *(long *)(puVar10 + 4);
      iStack_5a4 = iVar22 - uVar63;
      piStack_588 = aiStack_4f0;
      puStack_590 = auStack_310 + 2;
      puStack_5a0 = auStack_210 + 4;
      iStack_5c4 = (iVar6 - uVar71) + -8;
      fVar13 = -3.4028235e+38;
      pdStack_5d0 = param_5;
      uStack_5b8 = (ulong)uVar71;
      uStack_5b0 = (ulong)uVar74;
      pdStack_580 = param_4;
      uStack_574 = uVar78;
      do {
        iStack_5a4 = iStack_5a4 + -8;
        iVar14 = iStack_5a4;
        if (6 < iStack_5a4) {
          iVar14 = 7;
        }
        iVar22 = (int)(uStack_5b0 - uVar28);
        if (6 < iVar22) {
          iVar22 = 7;
        }
        if ((int)uStack_5b8 <= (int)uVar78) {
          lStack_598 = -(ulong)(iVar14 + 7);
          uStack_550 = (ulong)(iVar22 + 1U);
          lStack_558 = lStack_5c0 + uVar28 * (long)param_4;
          lStack_560 = (long)auStack_210 + (long)(iVar22 * 0x10 + 0x70);
          uStack_568 = 0;
          uStack_570 = (ulong)(uint)(float)*(double *)(param_1 + 0x40);
          uVar17 = uStack_5b8;
          iVar14 = iStack_5c4;
          iStack_544 = iVar22;
          lStack_540 = uStack_5b0 - uVar28;
          uStack_538 = uVar28;
          do {
            iVar23 = iVar14;
            if (6 < iVar14) {
              iVar23 = 7;
            }
            iVar5 = uVar78 - (int)uVar17;
            iVar6 = iVar5;
            if (6 < iVar5) {
              iVar6 = 7;
            }
            puVar11 = (undefined8 *)(lStack_558 + uVar17);
            uStack_518 = (uint)pdVar12;
            if (-7 < lStack_540) {
              puVar21 = auStack_210;
              lVar19 = lStack_598;
              do {
                uVar81 = *puVar11;
                puVar21[1] = puVar11[1];
                *puVar21 = uVar81;
                puVar11 = (undefined8 *)((long)puVar11 + (long)param_4);
                bVar9 = lVar19 != -1;
                lVar19 = lVar19 + 1;
                puVar21 = puVar21 + 2;
              } while (bVar9);
            }
            lStack_530 = -(ulong)(iVar23 + 1);
            uStack_528 = uVar17;
            iStack_51c = iVar14;
            uStack_514 = uVar80;
            _memcpy(lStack_560,puVar11,(long)(iVar6 + 8));
            uVar28 = 0;
            uVar96 = 0;
            uVar97 = 0;
            uVar98 = 0;
            uVar99 = 0;
            uVar100 = 0;
            uVar101 = 0;
            uVar102 = 0;
            uVar103 = 0;
            uVar105 = 0;
            uVar107 = 0;
            uVar109 = 0;
            uVar111 = 0;
            uVar113 = 0;
            uVar115 = 0;
            uVar117 = 0;
            uVar119 = 0;
            puVar11 = puStack_590;
            piVar16 = piStack_588;
            auVar125 = ZEXT216(0);
            auVar53 = ZEXT216(0);
            auVar83 = ZEXT216(0);
            auVar130 = ZEXT216(0);
            auVar144 = ZEXT216(0);
            do {
              auVar126 = *(undefined1 (*) [16])((long)auStack_210 + uVar28);
              auVar124 = NEON_umull(auVar126._0_8_,auVar126._0_8_,1);
              bVar30 = auVar126[8];
              bVar31 = auVar126[9];
              bVar32 = auVar126[10];
              bVar33 = auVar126[0xb];
              bVar34 = auVar126[0xc];
              bVar35 = auVar126[0xd];
              bVar36 = auVar126[0xe];
              bVar37 = auVar126[0xf];
              puVar11[-1] = auVar53._8_8_;
              puVar11[-2] = auVar53._0_8_;
              puVar11[1] = auVar83._8_8_;
              *puVar11 = auVar83._0_8_;
              auVar51._0_2_ = auVar53._0_2_ + (ushort)auVar126[0];
              auVar51._2_2_ = auVar53._2_2_ + (ushort)auVar126[1];
              auVar51._4_2_ = auVar53._4_2_ + (ushort)auVar126[2];
              auVar51._6_2_ = auVar53._6_2_ + (ushort)auVar126[3];
              auVar51._8_2_ = auVar53._8_2_ + (ushort)auVar126[4];
              auVar51._10_2_ = auVar53._10_2_ + (ushort)auVar126[5];
              auVar51._12_2_ = auVar53._12_2_ + (ushort)auVar126[6];
              auVar51._14_2_ = auVar53._14_2_ + (ushort)auVar126[7];
              auVar66._0_2_ = auVar83._0_2_ + (ushort)bVar30;
              auVar66._2_2_ = auVar83._2_2_ + (ushort)bVar31;
              auVar66._4_2_ = auVar83._4_2_ + (ushort)bVar32;
              auVar66._6_2_ = auVar83._6_2_ + (ushort)bVar33;
              auVar66._8_2_ = auVar83._8_2_ + (ushort)bVar34;
              auVar66._10_2_ = auVar83._10_2_ + (ushort)bVar35;
              auVar66._12_2_ = auVar83._12_2_ + (ushort)bVar36;
              auVar66._14_2_ = auVar83._14_2_ + (ushort)bVar37;
              *(long *)(piVar16 + -6) = auVar125._8_8_;
              *(long *)(piVar16 + -8) = auVar125._0_8_;
              *(long *)(piVar16 + -2) = auVar130._8_8_;
              *(long *)(piVar16 + -4) = auVar130._0_8_;
              *(long *)(piVar16 + 2) = auVar144._8_8_;
              *(long *)piVar16 = auVar144._0_8_;
              *(ulong *)(piVar16 + 6) =
                   CONCAT17(uVar119,CONCAT16(uVar117,CONCAT15(uVar115,CONCAT14(uVar113,CONCAT13(
                                                  uVar111,CONCAT12(uVar109,CONCAT11(uVar107,uVar105)
                                                                  ))))));
              *(ulong *)(piVar16 + 4) =
                   CONCAT17(uVar103,CONCAT16(uVar102,CONCAT15(uVar101,CONCAT14(uVar100,CONCAT13(
                                                  uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96)))))
                                            ));
              auVar42._0_4_ = auVar125._0_4_ + (uint)auVar124._0_2_;
              auVar42._4_4_ = auVar125._4_4_ + (uint)auVar124._2_2_;
              auVar42._8_4_ = auVar125._8_4_ + (uint)auVar124._4_2_;
              auVar42._12_4_ = auVar125._12_4_ + (uint)auVar124._6_2_;
              auVar82._0_4_ = auVar130._0_4_ + (uint)auVar124._8_2_;
              auVar82._4_4_ = auVar130._4_4_ + (uint)auVar124._10_2_;
              auVar82._8_4_ = auVar130._8_4_ + (uint)auVar124._12_2_;
              auVar82._12_4_ = auVar130._12_4_ + (uint)auVar124._14_2_;
              auVar92._0_4_ = auVar144._0_4_ + (uint)(ushort)((ushort)bVar30 * (ushort)bVar30);
              auVar92._4_4_ = auVar144._4_4_ + (uint)(ushort)((ushort)bVar31 * (ushort)bVar31);
              auVar92._8_4_ = auVar144._8_4_ + (uint)(ushort)((ushort)bVar32 * (ushort)bVar32);
              auVar92._12_4_ = auVar144._12_4_ + (uint)(ushort)((ushort)bVar33 * (ushort)bVar33);
              iVar14 = CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96))) +
                       (uint)(ushort)((ushort)bVar34 * (ushort)bVar34);
              uVar96 = (undefined1)iVar14;
              uVar97 = (undefined1)((uint)iVar14 >> 8);
              uVar98 = (undefined1)((uint)iVar14 >> 0x10);
              uVar99 = (undefined1)((uint)iVar14 >> 0x18);
              iVar14 = CONCAT13(uVar103,CONCAT12(uVar102,CONCAT11(uVar101,uVar100))) +
                       (uint)(ushort)((ushort)bVar35 * (ushort)bVar35);
              uVar100 = (undefined1)iVar14;
              uVar101 = (undefined1)((uint)iVar14 >> 8);
              uVar102 = (undefined1)((uint)iVar14 >> 0x10);
              uVar103 = (undefined1)((uint)iVar14 >> 0x18);
              iVar14 = CONCAT13(uVar111,CONCAT12(uVar109,CONCAT11(uVar107,uVar105))) +
                       (uint)(ushort)((ushort)bVar36 * (ushort)bVar36);
              uVar105 = (undefined1)iVar14;
              uVar107 = (undefined1)((uint)iVar14 >> 8);
              uVar109 = (undefined1)((uint)iVar14 >> 0x10);
              uVar111 = (undefined1)((uint)iVar14 >> 0x18);
              iVar14 = CONCAT13(uVar119,CONCAT12(uVar117,CONCAT11(uVar115,uVar113))) +
                       (uint)(ushort)((ushort)bVar37 * (ushort)bVar37);
              uVar113 = (undefined1)iVar14;
              uVar115 = (undefined1)((uint)iVar14 >> 8);
              uVar117 = (undefined1)((uint)iVar14 >> 0x10);
              uVar119 = (undefined1)((uint)iVar14 >> 0x18);
              puVar11 = puVar11 + 4;
              bVar9 = uVar28 < 0x70;
              uVar28 = uVar28 + 0x10;
              piVar16 = piVar16 + 0x10;
              auVar125 = auVar42;
              auVar53 = auVar51;
              auVar83 = auVar66;
              auVar130 = auVar82;
              auVar144 = auVar92;
            } while (bVar9);
            lVar19 = 0x80;
            puVar11 = puStack_590;
            piVar16 = piStack_588;
            do {
              auVar125 = *(undefined1 (*) [16])((long)auStack_210 + lVar19);
              uVar91 = puVar11[1];
              uVar81 = *puVar11;
              sVar48 = auVar51._0_2_;
              sVar56 = auVar51._2_2_;
              sVar57 = auVar51._4_2_;
              sVar59 = auVar51._6_2_;
              sVar140 = auVar51._8_2_;
              sVar141 = auVar51._10_2_;
              sVar142 = auVar51._12_2_;
              sVar143 = auVar51._14_2_;
              sVar62 = auVar66._0_2_;
              sVar69 = auVar66._2_2_;
              sVar70 = auVar66._4_2_;
              sVar72 = auVar66._6_2_;
              sVar73 = auVar66._8_2_;
              sVar76 = auVar66._10_2_;
              sVar77 = auVar66._12_2_;
              sVar79 = auVar66._14_2_;
              auVar51._0_2_ = sVar48 + (ushort)auVar125[0];
              auVar51._2_2_ = sVar56 + (ushort)auVar125[1];
              auVar51._4_2_ = sVar57 + (ushort)auVar125[2];
              auVar51._6_2_ = sVar59 + (ushort)auVar125[3];
              auVar51._8_2_ = sVar140 + (ushort)auVar125[4];
              auVar51._10_2_ = sVar141 + (ushort)auVar125[5];
              auVar51._12_2_ = sVar142 + (ushort)auVar125[6];
              auVar51._14_2_ = sVar143 + (ushort)auVar125[7];
              bVar30 = auVar125[8];
              bVar31 = auVar125[9];
              bVar32 = auVar125[10];
              bVar33 = auVar125[0xb];
              bVar34 = auVar125[0xc];
              bVar35 = auVar125[0xd];
              bVar36 = auVar125[0xe];
              bVar37 = auVar125[0xf];
              auVar66._0_2_ = sVar62 + (ushort)bVar30;
              auVar66._2_2_ = sVar69 + (ushort)bVar31;
              auVar66._4_2_ = sVar70 + (ushort)bVar32;
              auVar66._6_2_ = sVar72 + (ushort)bVar33;
              auVar66._8_2_ = sVar73 + (ushort)bVar34;
              auVar66._10_2_ = sVar76 + (ushort)bVar35;
              auVar66._12_2_ = sVar77 + (ushort)bVar36;
              auVar66._14_2_ = sVar79 + (ushort)bVar37;
              *(short *)(puVar11 + -1) = sVar140 - *(short *)(puVar11 + -1);
              *(short *)((long)puVar11 + -6) = sVar141 - *(short *)((long)puVar11 + -6);
              *(short *)((long)puVar11 + -4) = sVar142 - *(short *)((long)puVar11 + -4);
              *(short *)((long)puVar11 + -2) = sVar143 - *(short *)((long)puVar11 + -2);
              *(short *)(puVar11 + -2) = sVar48 - *(short *)(puVar11 + -2);
              *(short *)((long)puVar11 + -0xe) = sVar56 - *(short *)((long)puVar11 + -0xe);
              *(short *)((long)puVar11 + -0xc) = sVar57 - *(short *)((long)puVar11 + -0xc);
              *(short *)((long)puVar11 + -10) = sVar59 - *(short *)((long)puVar11 + -10);
              puVar11[1] = CONCAT26(sVar79 - (short)((ulong)uVar91 >> 0x30),
                                    CONCAT24(sVar77 - (short)((ulong)uVar91 >> 0x20),
                                             CONCAT22(sVar76 - (short)((ulong)uVar91 >> 0x10),
                                                      sVar73 - (short)uVar91)));
              *puVar11 = CONCAT26(sVar72 - (short)((ulong)uVar81 >> 0x30),
                                  CONCAT24(sVar70 - (short)((ulong)uVar81 >> 0x20),
                                           CONCAT22(sVar69 - (short)((ulong)uVar81 >> 0x10),
                                                    sVar62 - (short)uVar81)));
              auVar125 = NEON_umull(auVar125._0_8_,auVar125._0_8_,1);
              iVar38 = auVar42._0_4_;
              iVar45 = auVar42._4_4_;
              iVar46 = auVar42._8_4_;
              iVar47 = auVar42._12_4_;
              iVar85 = auVar82._4_4_;
              auVar128._0_8_ = CONCAT44(iVar85 - piVar16[-3],auVar82._0_4_ - piVar16[-4]);
              iVar87 = auVar82._8_4_;
              auVar128._8_4_ = iVar87 - piVar16[-2];
              iVar89 = auVar82._12_4_;
              auVar128._12_4_ = iVar89 - piVar16[-1];
              iVar93 = auVar92._4_4_;
              auVar132._0_8_ = CONCAT44(iVar93 - piVar16[1],auVar92._0_4_ - *piVar16);
              iVar94 = auVar92._8_4_;
              auVar132._8_4_ = iVar94 - piVar16[2];
              iVar95 = auVar92._12_4_;
              auVar132._12_4_ = iVar95 - piVar16[3];
              iVar14 = CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96)));
              iVar7 = CONCAT13(uVar103,CONCAT12(uVar102,CONCAT11(uVar101,uVar100))) -
                      (int)((ulong)*(undefined8 *)(piVar16 + 4) >> 0x20);
              iVar23 = CONCAT13(uVar111,CONCAT12(uVar109,CONCAT11(uVar107,uVar105)));
              iVar8 = CONCAT13(uVar119,CONCAT12(uVar117,CONCAT11(uVar115,uVar113))) -
                      (int)((ulong)*(undefined8 *)(piVar16 + 6) >> 0x20);
              auVar42._0_4_ = iVar38 + (uint)auVar125._0_2_;
              auVar42._4_4_ = iVar45 + (uint)auVar125._2_2_;
              auVar42._8_4_ = iVar46 + (uint)auVar125._4_2_;
              auVar42._12_4_ = iVar47 + (uint)auVar125._6_2_;
              auVar82._0_4_ = auVar82._0_4_ + (uint)auVar125._8_2_;
              auVar82._4_4_ = iVar85 + (uint)auVar125._10_2_;
              auVar82._8_4_ = iVar87 + (uint)auVar125._12_2_;
              auVar82._12_4_ = iVar89 + (uint)auVar125._14_2_;
              auVar92._0_4_ = auVar92._0_4_ + (uint)(ushort)((ushort)bVar30 * (ushort)bVar30);
              auVar92._4_4_ = iVar93 + (uint)(ushort)((ushort)bVar31 * (ushort)bVar31);
              auVar92._8_4_ = iVar94 + (uint)(ushort)((ushort)bVar32 * (ushort)bVar32);
              auVar92._12_4_ = iVar95 + (uint)(ushort)((ushort)bVar33 * (ushort)bVar33);
              iVar85 = CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96))) +
                       (uint)(ushort)((ushort)bVar34 * (ushort)bVar34);
              uVar96 = (undefined1)iVar85;
              uVar97 = (undefined1)((uint)iVar85 >> 8);
              uVar98 = (undefined1)((uint)iVar85 >> 0x10);
              uVar99 = (undefined1)((uint)iVar85 >> 0x18);
              iVar85 = CONCAT13(uVar103,CONCAT12(uVar102,CONCAT11(uVar101,uVar100))) +
                       (uint)(ushort)((ushort)bVar35 * (ushort)bVar35);
              uVar100 = (undefined1)iVar85;
              uVar101 = (undefined1)((uint)iVar85 >> 8);
              uVar102 = (undefined1)((uint)iVar85 >> 0x10);
              uVar103 = (undefined1)((uint)iVar85 >> 0x18);
              iVar85 = CONCAT13(uVar111,CONCAT12(uVar109,CONCAT11(uVar107,uVar105))) +
                       (uint)(ushort)((ushort)bVar36 * (ushort)bVar36);
              uVar105 = (undefined1)iVar85;
              uVar107 = (undefined1)((uint)iVar85 >> 8);
              uVar109 = (undefined1)((uint)iVar85 >> 0x10);
              uVar111 = (undefined1)((uint)iVar85 >> 0x18);
              iVar85 = CONCAT13(uVar119,CONCAT12(uVar117,CONCAT11(uVar115,uVar113))) +
                       (uint)(ushort)((ushort)bVar37 * (ushort)bVar37);
              uVar113 = (undefined1)iVar85;
              uVar115 = (undefined1)((uint)iVar85 >> 8);
              uVar117 = (undefined1)((uint)iVar85 >> 0x10);
              uVar119 = (undefined1)((uint)iVar85 >> 0x18);
              *(ulong *)(piVar16 + -6) =
                   CONCAT44(iVar47 - (int)((ulong)*(undefined8 *)(piVar16 + -6) >> 0x20),
                            iVar46 - (int)*(undefined8 *)(piVar16 + -6));
              *(ulong *)(piVar16 + -8) =
                   CONCAT44(iVar45 - (int)((ulong)*(undefined8 *)(piVar16 + -8) >> 0x20),
                            iVar38 - (int)*(undefined8 *)(piVar16 + -8));
              *(long *)(piVar16 + -2) = auVar128._8_8_;
              *(undefined8 *)(piVar16 + -4) = auVar128._0_8_;
              uVar28 = lVar19 - 0x80;
              lVar19 = lVar19 + 0x10;
              *(long *)(piVar16 + 2) = auVar132._8_8_;
              *(undefined8 *)piVar16 = auVar132._0_8_;
              *(ulong *)(piVar16 + 6) =
                   CONCAT26((short)((uint)iVar8 >> 0x10),
                            CONCAT24((short)iVar8,iVar23 - (int)*(undefined8 *)(piVar16 + 6)));
              *(ulong *)(piVar16 + 4) =
                   CONCAT17((char)((uint)iVar7 >> 0x18),
                            CONCAT16((char)((uint)iVar7 >> 0x10),
                                     CONCAT15((char)((uint)iVar7 >> 8),
                                              CONCAT14((char)iVar7,
                                                       iVar14 - (int)*(undefined8 *)(piVar16 + 4))))
                           );
              puVar11 = puVar11 + 4;
              piVar16 = piVar16 + 0x10;
            } while (uVar28 < 0x70);
            lVar19 = 0;
            piVar16 = aiStack_510;
            puVar11 = auStack_310;
            puVar21 = auStack_310;
            piVar24 = aiStack_510;
            do {
              lVar15 = 0;
              sVar48 = 0;
              fVar26 = 0.0;
              do {
                asStack_f0[lVar15] = sVar48;
                unaff_x19[lVar15] = fVar26;
                sVar48 = *(short *)((long)puVar21 + lVar15 * 2) + sVar48;
                fVar26 = (float)(piVar24[lVar15] + (int)fVar26);
                lVar15 = lVar15 + 1;
              } while (lVar15 != 8);
              lVar15 = 0;
              do {
                *(short *)((long)puVar11 + lVar15 * 2) = sVar48 - asStack_f0[lVar15];
                piVar16[lVar15] = (int)fVar26 - (int)unaff_x19[lVar15];
                sVar48 = *(short *)((long)puVar21 + lVar15 * 2 + 0x10) + sVar48;
                fVar26 = (float)(piVar24[lVar15 + 8] + (int)fVar26);
                lVar15 = lVar15 + 1;
              } while (lVar15 != 8);
              lVar19 = lVar19 + 1;
              piVar24 = piVar24 + 0x10;
              puVar21 = puVar21 + 4;
              piVar16 = piVar16 + 8;
              puVar11 = puVar11 + 2;
            } while (lVar19 != 8);
            if (lStack_540 < 2) {
              uVar28 = 0;
            }
            else {
              puVar11 = puStack_5a0;
              uVar17 = 0;
              do {
                if (-1 < iVar5) {
                  uVar28 = 0;
                  puVar21 = puVar11;
                  do {
                    lVar19 = 0;
                    uVar81 = *(undefined8 *)((long)auStack_210 + uVar28 + uVar17 * 0x10);
                    puVar29 = puVar21;
                    auVar125 = ZEXT216(0);
                    auVar53 = ZEXT216(0);
                    auVar83 = ZEXT216(0);
                    do {
                      uVar91 = *(undefined8 *)(param_1 + lVar19);
                      auVar130 = NEON_umull(uVar91,uVar81,1);
                      uVar81 = puVar29[-2];
                      auVar126 = NEON_umull(uVar91,uVar81,1);
                      auVar144 = NEON_umull(uVar91,*puVar29,1);
                      auVar43._0_4_ = auVar125._0_4_ + (uint)auVar130._0_2_ + (uint)auVar130._2_2_;
                      auVar43._4_4_ = auVar125._4_4_ + (uint)auVar130._4_2_ + (uint)auVar130._6_2_;
                      auVar43._8_4_ = auVar125._8_4_ + (uint)auVar130._8_2_ + (uint)auVar130._10_2_;
                      auVar43._12_4_ =
                           auVar125._12_4_ + (uint)auVar130._12_2_ + (uint)auVar130._14_2_;
                      auVar67._0_4_ = auVar83._0_4_ + (uint)auVar126._0_2_ + (uint)auVar126._2_2_;
                      auVar67._4_4_ = auVar83._4_4_ + (uint)auVar126._4_2_ + (uint)auVar126._6_2_;
                      auVar67._8_4_ = auVar83._8_4_ + (uint)auVar126._8_2_ + (uint)auVar126._10_2_;
                      auVar67._12_4_ =
                           auVar83._12_4_ + (uint)auVar126._12_2_ + (uint)auVar126._14_2_;
                      auVar52._0_4_ = auVar53._0_4_ + (uint)auVar144._0_2_ + (uint)auVar144._2_2_;
                      auVar52._4_4_ = auVar53._4_4_ + (uint)auVar144._4_2_ + (uint)auVar144._6_2_;
                      auVar52._8_4_ = auVar53._8_4_ + (uint)auVar144._8_2_ + (uint)auVar144._10_2_;
                      auVar52._12_4_ =
                           auVar53._12_4_ + (uint)auVar144._12_2_ + (uint)auVar144._14_2_;
                      lVar19 = lVar19 + 8;
                      puVar29 = puVar29 + 2;
                      auVar125 = auVar43;
                      auVar53 = auVar52;
                      auVar83 = auVar67;
                    } while (lVar19 != 0x40);
                    aiStack_410[uVar17 * 8 + uVar28] =
                         auVar43._0_4_ + auVar43._4_4_ + auVar43._8_4_ + auVar43._12_4_;
                    *(int *)((long)aiStack_410 +
                            uVar28 * 4 + ((long)((uVar17 << 0x23) + 0x800000000) >> 0x1e)) =
                         auVar67._0_4_ + auVar67._4_4_ + auVar67._8_4_ + auVar67._12_4_;
                    aiStack_410[(long)((int)uVar17 * 8 + 0x10) + uVar28] =
                         auVar52._0_4_ + auVar52._4_4_ + auVar52._8_4_ + auVar52._12_4_;
                    uVar28 = uVar28 + 1;
                    puVar21 = (undefined8 *)((long)puVar21 + 1);
                  } while (uVar28 != iVar6 + 1);
                }
                uVar28 = uVar17 + 3;
                uVar1 = uVar17 + 5;
                puVar11 = puVar11 + 6;
                uVar17 = uVar28;
              } while (uVar1 < uStack_550);
              uVar28 = uVar28 & 0xffffffff;
            }
            iVar14 = (int)uVar28;
            while (iVar14 <= iStack_544) {
              if (-1 < iVar5) {
                uVar17 = 0;
                puVar11 = auStack_210 + (uVar28 & 0xfffffff) * 2;
                do {
                  lVar19 = 0;
                  puVar21 = puVar11;
                  auVar125 = ZEXT216(0);
                  do {
                    auVar53 = NEON_umull(*(undefined8 *)(param_1 + lVar19),*puVar21,1);
                    auVar44._0_4_ = auVar125._0_4_ + (uint)auVar53._0_2_ + (uint)auVar53._2_2_;
                    auVar44._4_4_ = auVar125._4_4_ + (uint)auVar53._4_2_ + (uint)auVar53._6_2_;
                    auVar44._8_4_ = auVar125._8_4_ + (uint)auVar53._8_2_ + (uint)auVar53._10_2_;
                    auVar44._12_4_ = auVar125._12_4_ + (uint)auVar53._12_2_ + (uint)auVar53._14_2_;
                    lVar19 = lVar19 + 8;
                    puVar21 = puVar21 + 2;
                    auVar125 = auVar44;
                  } while (lVar19 != 0x40);
                  aiStack_410[(uVar28 & 0x1fffffff) * 8 + uVar17] =
                       auVar44._0_4_ + auVar44._4_4_ + auVar44._8_4_ + auVar44._12_4_;
                  uVar17 = uVar17 + 1;
                  puVar11 = (undefined8 *)((long)puVar11 + 1);
                } while (uVar17 != iVar6 + 1);
              }
              uVar28 = uVar28 + 1;
              iVar14 = (int)uVar28;
            }
            if (lStack_540 < 0) {
              fVar26 = -3.4028235e+38;
            }
            else {
              uVar28 = 0;
              fVar26 = -3.4028235e+38;
              do {
                lVar19 = 0;
                pfVar18 = afStack_110;
                bVar9 = true;
                do {
                  bVar25 = bVar9;
                  uVar81 = *(undefined8 *)((long)auStack_310 + lVar19 * 2 + uVar28 * 2);
                  piVar16 = aiStack_510 + uVar28 + lVar19;
                  auVar54._0_2_ = (ushort)uVar81;
                  uVar129 = (ushort)((ulong)uVar81 >> 0x10);
                  uVar133 = (ushort)((ulong)uVar81 >> 0x20);
                  uVar134 = (ushort)((ulong)uVar81 >> 0x30);
                  auVar68._0_4_ = *piVar16 * 0x40 - (uint)auVar54._0_2_ * (uint)auVar54._0_2_;
                  auVar68._4_4_ = piVar16[1] * 0x40 - (uint)uVar129 * (uint)uVar129;
                  auVar68._8_4_ = piVar16[2] * 0x40 - (uint)uVar133 * (uint)uVar133;
                  auVar68._12_4_ = piVar16[3] * 0x40 - (uint)uVar134 * (uint)uVar134;
                  auVar53 = NEON_ucvtf(auVar68,4);
                  auVar54._2_2_ = 0;
                  auVar54._4_2_ = uVar129;
                  auVar54._6_2_ = 0;
                  auVar54._8_2_ = uVar133;
                  auVar54._10_2_ = 0;
                  auVar54._12_2_ = uVar134;
                  auVar54._14_2_ = 0;
                  auVar125 = NEON_ucvtf(auVar54,4);
                  auVar83 = NEON_ucvtf(*(undefined1 (*) [16])(aiStack_410 + uVar28 + lVar19),4);
                  fVar127 = (float)uStack_570;
                  auVar130 = NEON_frsqrte(auVar53,4);
                  fVar90 = auVar130._0_4_;
                  fVar58 = auVar130._4_4_;
                  fVar60 = auVar130._8_4_;
                  fVar61 = auVar130._12_4_;
                  auVar130 = NEON_fmov(0x40400000,4);
                  fVar58 = (auVar83._4_4_ - auVar125._4_4_ * fVar127) *
                           fVar58 * (auVar130._4_4_ - fVar58 * fVar58 * auVar53._4_4_);
                  fVar60 = (auVar83._8_4_ - auVar125._8_4_ * fVar127) *
                           fVar60 * (auVar130._8_4_ - fVar60 * fVar60 * auVar53._8_4_);
                  fVar61 = (auVar83._12_4_ - auVar125._12_4_ * fVar127) *
                           fVar61 * (auVar130._12_4_ - fVar61 * fVar61 * auVar53._12_4_);
                  auVar55._0_8_ =
                       CONCAT17((char)((uint)fVar58 >> 0x18),
                                CONCAT16((char)((uint)fVar58 >> 0x10),
                                         CONCAT15((char)((uint)fVar58 >> 8),
                                                  CONCAT14(SUB41(fVar58,0),
                                                           (auVar83._0_4_ - auVar125._0_4_ * fVar127
                                                           ) * fVar90 * (auVar130._0_4_ -
                                                                        fVar90 * fVar90 *
                                                                        auVar53._0_4_)))));
                  auVar55[8] = SUB41(fVar60,0);
                  auVar55[9] = (undefined1)((uint)fVar60 >> 8);
                  auVar55[10] = (undefined1)((uint)fVar60 >> 0x10);
                  auVar55[0xb] = (undefined1)((uint)fVar60 >> 0x18);
                  auVar55[0xc] = SUB41(fVar61,0);
                  auVar55[0xd] = (undefined1)((uint)fVar61 >> 8);
                  auVar55[0xe] = (undefined1)((uint)fVar61 >> 0x10);
                  auVar55[0xf] = (undefined1)((uint)fVar61 >> 0x18);
                  *(long *)(pfVar18 + 2) = auVar55._8_8_;
                  *(undefined8 *)pfVar18 = auVar55._0_8_;
                  lVar19 = 4;
                  pfVar18 = afStack_110 + 4;
                  bVar9 = false;
                } while (bVar25);
                if (-1 < iVar5) {
                  pfVar18 = afStack_110;
                  lVar19 = lStack_530;
                  uVar17 = uVar28;
                  fVar58 = fVar26;
                  do {
                    fVar26 = *pfVar18;
                    iVar14 = (int)uVar17;
                    if (*pfVar18 <= fVar58) {
                      fVar26 = fVar58;
                      iVar14 = unaff_w24;
                    }
                    unaff_w24 = iVar14;
                    uVar17 = (ulong)((int)uVar17 + 1);
                    bVar9 = lVar19 != -1;
                    lVar19 = lVar19 + 1;
                    pfVar18 = pfVar18 + 1;
                    fVar58 = fVar26;
                  } while (bVar9);
                }
                uVar28 = uVar28 + 8;
              } while (uVar28 < (iVar22 + 1U) * 8);
            }
            iVar14 = unaff_w24 + 7;
            if (-1 < unaff_w24) {
              iVar14 = unaff_w24;
            }
            uVar63 = uStack_518;
            uVar80 = uStack_514;
            if (fVar13 < fVar26) {
              uVar63 = unaff_w24 % 8 + (int)uStack_528;
              uVar80 = (int)uStack_538 + (iVar14 >> 3);
              fVar13 = fVar26;
            }
            pdVar12 = (double *)(ulong)uVar63;
            uVar17 = uStack_528 + 8;
            iVar14 = iStack_51c + -8;
            uVar28 = uStack_538;
            param_4 = pdStack_580;
            uVar78 = uStack_574;
          } while ((int)uVar17 <= (int)uStack_574);
        }
        uVar28 = uVar28 + 8;
        param_5 = pdStack_5d0;
      } while (uVar28 <= uStack_5b0);
    }
    iVar23 = (int)param_4;
  }
  else if ((int)uVar74 < (int)uVar63) {
    uVar80 = 0;
    pdVar12 = (double *)0x0;
  }
  else {
    pdVar12 = (double *)0x0;
    uVar80 = 0;
    dVar40 = -10000.0;
    do {
      uVar63 = (uint)uVar28;
      if ((int)uVar71 <= (int)uVar78) {
        dVar65 = 1.0;
        if (*(double *)(param_1 + 0x48) != 0.0) {
          dVar65 = *(double *)(param_1 + 0x48);
        }
        uVar28 = (ulong)uVar71;
        dVar39 = dVar40;
        do {
          lVar19 = 0;
          uVar84 = (uint)uVar28;
          puVar11 = (undefined8 *)
                    (*(long *)(puVar10 + 4) + (long)*(int *)(puVar10 + 0xc) * (long)(int)uVar63 +
                    (long)(int)uVar84);
          uVar129 = 0;
          uVar133 = 0;
          uVar134 = 0;
          uVar135 = 0;
          uVar96 = 0;
          uVar97 = 0;
          uVar98 = 0;
          uVar99 = 0;
          uVar100 = 0;
          uVar101 = 0;
          uVar102 = 0;
          uVar103 = 0;
          uVar105 = 0;
          uVar107 = 0;
          uVar109 = 0;
          uVar111 = 0;
          uVar113 = 0;
          uVar115 = 0;
          uVar117 = 0;
          uVar119 = 0;
          auVar125 = ZEXT216(0);
          do {
            uVar81 = *puVar11;
            auVar83 = NEON_umull(uVar81,uVar81,1);
            auVar53 = NEON_umull(*(undefined8 *)(param_1 + lVar19),uVar81,1);
            uVar129 = uVar129 + (ushort)(byte)uVar81 + (ushort)(byte)((ulong)uVar81 >> 8);
            uVar133 = uVar133 + (ushort)(byte)((ulong)uVar81 >> 0x10) +
                                (ushort)(byte)((ulong)uVar81 >> 0x18);
            uVar134 = uVar134 + (ushort)(byte)((ulong)uVar81 >> 0x20) +
                                (ushort)(byte)((ulong)uVar81 >> 0x28);
            uVar135 = uVar135 + (ushort)(byte)((ulong)uVar81 >> 0x30) +
                                (ushort)(byte)((ulong)uVar81 >> 0x38);
            iVar14 = CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96))) +
                     (uint)auVar83._0_2_ + (uint)auVar83._2_2_;
            uVar96 = (undefined1)iVar14;
            uVar97 = (undefined1)((uint)iVar14 >> 8);
            uVar98 = (undefined1)((uint)iVar14 >> 0x10);
            uVar99 = (undefined1)((uint)iVar14 >> 0x18);
            iVar22 = CONCAT13(uVar103,CONCAT12(uVar102,CONCAT11(uVar101,uVar100))) +
                     (uint)auVar83._4_2_ + (uint)auVar83._6_2_;
            uVar100 = (undefined1)iVar22;
            uVar101 = (undefined1)((uint)iVar22 >> 8);
            uVar102 = (undefined1)((uint)iVar22 >> 0x10);
            uVar103 = (undefined1)((uint)iVar22 >> 0x18);
            iVar6 = CONCAT13(uVar111,CONCAT12(uVar109,CONCAT11(uVar107,uVar105))) +
                    (uint)auVar83._8_2_ + (uint)auVar83._10_2_;
            uVar105 = (undefined1)iVar6;
            uVar107 = (undefined1)((uint)iVar6 >> 8);
            uVar109 = (undefined1)((uint)iVar6 >> 0x10);
            uVar111 = (undefined1)((uint)iVar6 >> 0x18);
            iVar5 = CONCAT13(uVar119,CONCAT12(uVar117,CONCAT11(uVar115,uVar113))) +
                    (uint)auVar83._12_2_ + (uint)auVar83._14_2_;
            uVar113 = (undefined1)iVar5;
            uVar115 = (undefined1)((uint)iVar5 >> 8);
            uVar117 = (undefined1)((uint)iVar5 >> 0x10);
            uVar119 = (undefined1)((uint)iVar5 >> 0x18);
            auVar83._0_4_ = auVar125._0_4_ + (uint)auVar53._0_2_ + (uint)auVar53._2_2_;
            auVar83._4_4_ = auVar125._4_4_ + (uint)auVar53._4_2_ + (uint)auVar53._6_2_;
            auVar83._8_4_ = auVar125._8_4_ + (uint)auVar53._8_2_ + (uint)auVar53._10_2_;
            auVar83._12_4_ = auVar125._12_4_ + (uint)auVar53._12_2_ + (uint)auVar53._14_2_;
            lVar19 = lVar19 + 8;
            puVar11 = (undefined8 *)((long)puVar11 + (long)*(int *)(puVar10 + 0xc));
            auVar125 = auVar83;
          } while (lVar19 != 0x40);
          dVar40 = (double)((uint)uVar129 + (uint)uVar133 + (uint)uVar134 + (uint)uVar135) / 64.0;
          dVar64 = (double)(uint)(iVar14 + iVar22 + iVar6 + iVar5) / 64.0 - dVar40 * dVar40;
          dVar50 = 1.0;
          if (dVar64 != 0.0) {
            dVar50 = SQRT(dVar64);
          }
          dVar40 = ((double)(uint)(auVar83._0_4_ + auVar83._4_4_ + auVar83._8_4_ + auVar83._12_4_) /
                    64.0 + dVar40 * -*(double *)(param_1 + 0x40)) / (dVar65 * dVar50);
          uVar86 = uVar84;
          uVar88 = uVar63;
          if (dVar40 <= dVar39) {
            uVar86 = (uint)pdVar12;
            uVar88 = uVar80;
          }
          uVar80 = uVar88;
          pdVar12 = (double *)(ulong)uVar86;
          if (dVar40 <= dVar39) {
            dVar40 = dVar39;
          }
          uVar28 = (ulong)(uVar84 + 1);
          dVar39 = dVar40;
        } while (uVar84 != uVar78);
      }
      uVar28 = (ulong)(uVar63 + 1);
    } while (uVar63 != uVar74);
  }
  *param_5 = (double)((int)pdVar12 + 4);
  param_5[1] = (double)(int)(uVar80 + 4);
  dVar40 = *(double *)(param_1 + 0x50);
  param_5[1] = *(double *)(param_1 + 0x58) + param_5[1];
  *param_5 = dVar40 + *param_5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
    return uVar28;
  }
  ___stack_chk_fail();
  pcStack_5d8 = FUN_10939efe8;
  lStack_600 = (long)*pdVar12;
  lStack_5f8 = (long)pdVar12[1];
  uStack_608 = 0;
  uVar17 = uVar28;
  lStack_5f0 = param_1;
  pfStack_5e8 = unaff_x19;
  ppuStack_5e0 = &puStack_70;
  FUN_109534000(&dStack_620,(double)iVar23);
  param_5[1] = dStack_618;
  *param_5 = dStack_620;
  dVar40 = *(double *)(uVar28 + 0x50);
  param_5[1] = *(double *)(uVar28 + 0x58) + param_5[1];
  *param_5 = dVar40 + *param_5;
  return uVar17;
}



/* Entry: 10939e834; end: 10939efe7;  */

double FUN_10939e834(long param_1,long param_2,double *param_3,long param_4,double *param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  double *pdVar10;
  uint uVar11;
  float fVar12;
  undefined8 *puVar13;
  int *piVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  uint uVar18;
  int *piVar19;
  bool bVar20;
  float fVar21;
  long lVar22;
  uint uVar23;
  undefined8 *puVar24;
  float *unaff_x19;
  int unaff_w24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  double dVar33;
  int iVar35;
  double dVar34;
  int iVar36;
  int iVar37;
  short sVar38;
  short sVar41;
  short sVar42;
  float fVar43;
  short sVar44;
  short sVar45;
  float fVar46;
  short sVar47;
  short sVar48;
  short sVar50;
  undefined1 auVar39 [16];
  float fVar49;
  undefined1 auVar40 [16];
  short sVar51;
  short sVar56;
  short sVar57;
  double dVar52;
  short sVar59;
  short sVar60;
  short sVar61;
  undefined1 auVar53 [16];
  short sVar58;
  short sVar62;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  int iVar63;
  int iVar68;
  undefined8 uVar64;
  int iVar69;
  undefined1 auVar65 [16];
  int iVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  ushort uVar71;
  int iVar72;
  float fVar73;
  ushort uVar79;
  int iVar80;
  undefined8 uVar74;
  ushort uVar78;
  ushort uVar81;
  double dVar75;
  int iVar82;
  int iVar83;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  int iVar84;
  int iVar85;
  int iVar87;
  int iVar88;
  double dVar86;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  double dStack_5c0;
  double dStack_5b8;
  double dStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  float *pfStack_588;
  undefined1 *puStack_580;
  code *pcStack_578;
  double *pdStack_570;
  int iStack_564;
  long lStack_560;
  ulong uStack_558;
  ulong uStack_550;
  int iStack_544;
  undefined8 *puStack_540;
  long lStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  long lStack_520;
  uint uStack_514;
  ulong uStack_510;
  undefined8 uStack_508;
  long lStack_500;
  long lStack_4f8;
  ulong uStack_4f0;
  int iStack_4e4;
  long lStack_4e0;
  ulong uStack_4d8;
  long lStack_4d0;
  ulong uStack_4c8;
  int iStack_4bc;
  uint uStack_4b8;
  uint uStack_4b4;
  int aiStack_4b0 [8];
  undefined8 auStack_490 [28];
  int aiStack_3b0 [64];
  undefined8 auStack_2b0 [32];
  undefined8 auStack_1b0 [32];
  float afStack_b0 [8];
  short asStack_90 [8];
  long lStack_80;
  
  iVar35 = (int)param_4;
  puStack_580 = &stack0xfffffffffffffff0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ((int)param_3[1] - iVar35) - 4;
  uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  uVar7 = (ulong)uVar6;
  iVar85 = iVar35 + 4 + (int)param_3[1];
  iVar88 = *(int *)(param_2 + 0x14);
  if (iVar85 <= *(int *)(param_2 + 0x14)) {
    iVar88 = iVar85;
  }
  uVar2 = iVar88 - 8;
  iVar85 = iVar35 + 4 + (int)*param_3;
  uVar3 = ((int)*param_3 - iVar35) - 4;
  uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  iVar90 = *(int *)(param_2 + 0x10);
  if (iVar85 <= *(int *)(param_2 + 0x10)) {
    iVar90 = iVar85;
  }
  uVar11 = iVar90 - 8;
  if (iVar35 < 4) {
    dVar52 = 0.5 / *(double *)(param_1 + 0x48);
    if (*(double *)(param_1 + 0x48) == 0.0) {
      dVar52 = 0.5;
    }
    if ((int)uVar2 < (int)uVar6) {
      uVar23 = 0;
      pdVar10 = (double *)0x0;
      dVar33 = -3.4028234663852886e+38;
    }
    else {
      pdVar10 = (double *)0x0;
      uVar23 = 0;
      param_4 = (long)*(int *)(param_2 + 0x18);
      unaff_x19 = afStack_b0;
      lStack_560 = *(long *)(param_2 + 8);
      iStack_544 = iVar88 - uVar6;
      puStack_528 = auStack_490;
      puStack_530 = auStack_2b0 + 2;
      puStack_540 = auStack_1b0 + 4;
      iStack_564 = (iVar90 - uVar3) + -8;
      fVar12 = -3.4028235e+38;
      pdStack_570 = param_5;
      uStack_558 = (ulong)uVar3;
      uStack_550 = (ulong)uVar2;
      lStack_520 = param_4;
      uStack_514 = uVar11;
      do {
        iStack_544 = iStack_544 + -8;
        iVar85 = iStack_544;
        if (6 < iStack_544) {
          iVar85 = 7;
        }
        iVar88 = (int)(uStack_550 - uVar7);
        if (6 < iVar88) {
          iVar88 = 7;
        }
        if ((int)uStack_558 <= (int)uVar11) {
          lStack_538 = -(ulong)(iVar85 + 7);
          uStack_4f0 = (ulong)(iVar88 + 1U);
          lStack_4f8 = lStack_560 + uVar7 * param_4;
          lStack_500 = (long)auStack_1b0 + (long)(iVar88 * 0x10 + 0x70);
          uStack_508 = 0;
          uStack_510 = (ulong)(uint)(float)*(double *)(param_1 + 0x40);
          uVar15 = uStack_558;
          iVar85 = iStack_564;
          iStack_4e4 = iVar88;
          lStack_4e0 = uStack_550 - uVar7;
          uStack_4d8 = uVar7;
          do {
            iVar35 = iVar85;
            if (6 < iVar85) {
              iVar35 = 7;
            }
            iVar92 = uVar11 - (int)uVar15;
            iVar90 = iVar92;
            if (6 < iVar92) {
              iVar90 = 7;
            }
            puVar8 = (undefined8 *)(lStack_4f8 + uVar15);
            uStack_4b8 = (uint)pdVar10;
            if (-7 < lStack_4e0) {
              puVar13 = auStack_1b0;
              lVar17 = lStack_538;
              do {
                uVar64 = *puVar8;
                puVar13[1] = puVar8[1];
                *puVar13 = uVar64;
                puVar8 = (undefined8 *)((long)puVar8 + param_4);
                bVar5 = lVar17 != -1;
                lVar17 = lVar17 + 1;
                puVar13 = puVar13 + 2;
              } while (bVar5);
            }
            lStack_4d0 = -(ulong)(iVar35 + 1);
            uStack_4c8 = uVar15;
            iStack_4bc = iVar85;
            uStack_4b4 = uVar23;
            _memcpy(lStack_500,puVar8,(long)(iVar90 + 8));
            uVar7 = 0;
            uVar64 = 0;
            uVar74 = 0;
            puVar8 = puStack_530;
            puVar13 = puStack_528;
            auVar94 = ZEXT216(0);
            auVar39 = ZEXT216(0);
            auVar67 = ZEXT216(0);
            auVar77 = ZEXT216(0);
            auVar66 = ZEXT216(0);
            do {
              auVar76 = *(undefined1 (*) [16])((long)auStack_1b0 + uVar7);
              auVar93 = NEON_umull(auVar76._0_8_,auVar76._0_8_,1);
              bVar25 = auVar76[8];
              bVar26 = auVar76[9];
              bVar27 = auVar76[10];
              bVar28 = auVar76[0xb];
              bVar29 = auVar76[0xc];
              bVar30 = auVar76[0xd];
              bVar31 = auVar76[0xe];
              bVar32 = auVar76[0xf];
              puVar8[-1] = auVar39._8_8_;
              puVar8[-2] = auVar39._0_8_;
              puVar8[1] = auVar67._8_8_;
              *puVar8 = auVar67._0_8_;
              auVar95._0_2_ = auVar39._0_2_ + (ushort)auVar76[0];
              auVar95._2_2_ = auVar39._2_2_ + (ushort)auVar76[1];
              auVar95._4_2_ = auVar39._4_2_ + (ushort)auVar76[2];
              auVar95._6_2_ = auVar39._6_2_ + (ushort)auVar76[3];
              auVar95._8_2_ = auVar39._8_2_ + (ushort)auVar76[4];
              auVar95._10_2_ = auVar39._10_2_ + (ushort)auVar76[5];
              auVar95._12_2_ = auVar39._12_2_ + (ushort)auVar76[6];
              auVar95._14_2_ = auVar39._14_2_ + (ushort)auVar76[7];
              auVar53._0_2_ = auVar67._0_2_ + (ushort)bVar25;
              auVar53._2_2_ = auVar67._2_2_ + (ushort)bVar26;
              auVar53._4_2_ = auVar67._4_2_ + (ushort)bVar27;
              auVar53._6_2_ = auVar67._6_2_ + (ushort)bVar28;
              auVar53._8_2_ = auVar67._8_2_ + (ushort)bVar29;
              auVar53._10_2_ = auVar67._10_2_ + (ushort)bVar30;
              auVar53._12_2_ = auVar67._12_2_ + (ushort)bVar31;
              auVar53._14_2_ = auVar67._14_2_ + (ushort)bVar32;
              puVar13[-3] = auVar94._8_8_;
              puVar13[-4] = auVar94._0_8_;
              puVar13[-1] = auVar77._8_8_;
              puVar13[-2] = auVar77._0_8_;
              puVar13[1] = auVar66._8_8_;
              *puVar13 = auVar66._0_8_;
              puVar13[3] = uVar74;
              puVar13[2] = uVar64;
              auVar76._0_4_ = auVar94._0_4_ + (uint)auVar93._0_2_;
              auVar76._4_4_ = auVar94._4_4_ + (uint)auVar93._2_2_;
              auVar76._8_4_ = auVar94._8_4_ + (uint)auVar93._4_2_;
              auVar76._12_4_ = auVar94._12_4_ + (uint)auVar93._6_2_;
              auVar65._0_4_ = auVar77._0_4_ + (uint)auVar93._8_2_;
              auVar65._4_4_ = auVar77._4_4_ + (uint)auVar93._10_2_;
              auVar65._8_4_ = auVar77._8_4_ + (uint)auVar93._12_2_;
              auVar65._12_4_ = auVar77._12_4_ + (uint)auVar93._14_2_;
              auVar93._0_4_ = auVar66._0_4_ + (uint)(ushort)((ushort)bVar25 * (ushort)bVar25);
              auVar93._4_4_ = auVar66._4_4_ + (uint)(ushort)((ushort)bVar26 * (ushort)bVar26);
              auVar93._8_4_ = auVar66._8_4_ + (uint)(ushort)((ushort)bVar27 * (ushort)bVar27);
              auVar93._12_4_ = auVar66._12_4_ + (uint)(ushort)((ushort)bVar28 * (ushort)bVar28);
              uVar64 = CONCAT44((int)((ulong)uVar64 >> 0x20) +
                                (uint)(ushort)((ushort)bVar30 * (ushort)bVar30),
                                (int)uVar64 + (uint)(ushort)((ushort)bVar29 * (ushort)bVar29));
              uVar74 = CONCAT44((int)((ulong)uVar74 >> 0x20) +
                                (uint)(ushort)((ushort)bVar32 * (ushort)bVar32),
                                (int)uVar74 + (uint)(ushort)((ushort)bVar31 * (ushort)bVar31));
              puVar8 = puVar8 + 4;
              bVar5 = uVar7 < 0x70;
              uVar7 = uVar7 + 0x10;
              puVar13 = puVar13 + 8;
              auVar94 = auVar76;
              auVar39 = auVar95;
              auVar67 = auVar53;
              auVar77 = auVar65;
              auVar66 = auVar93;
            } while (bVar5);
            lVar17 = 0x80;
            puVar8 = puStack_530;
            puVar13 = puStack_528;
            do {
              auVar94 = *(undefined1 (*) [16])((long)auStack_1b0 + lVar17);
              uVar98 = puVar8[1];
              uVar97 = *puVar8;
              sVar38 = auVar95._0_2_;
              sVar41 = auVar95._2_2_;
              sVar42 = auVar95._4_2_;
              sVar44 = auVar95._6_2_;
              sVar45 = auVar95._8_2_;
              sVar47 = auVar95._10_2_;
              sVar48 = auVar95._12_2_;
              sVar50 = auVar95._14_2_;
              sVar51 = auVar53._0_2_;
              sVar56 = auVar53._2_2_;
              sVar57 = auVar53._4_2_;
              sVar58 = auVar53._6_2_;
              sVar59 = auVar53._8_2_;
              sVar60 = auVar53._10_2_;
              sVar61 = auVar53._12_2_;
              sVar62 = auVar53._14_2_;
              auVar95._0_2_ = sVar38 + (ushort)auVar94[0];
              auVar95._2_2_ = sVar41 + (ushort)auVar94[1];
              auVar95._4_2_ = sVar42 + (ushort)auVar94[2];
              auVar95._6_2_ = sVar44 + (ushort)auVar94[3];
              auVar95._8_2_ = sVar45 + (ushort)auVar94[4];
              auVar95._10_2_ = sVar47 + (ushort)auVar94[5];
              auVar95._12_2_ = sVar48 + (ushort)auVar94[6];
              auVar95._14_2_ = sVar50 + (ushort)auVar94[7];
              bVar25 = auVar94[8];
              bVar26 = auVar94[9];
              bVar27 = auVar94[10];
              bVar28 = auVar94[0xb];
              bVar29 = auVar94[0xc];
              bVar30 = auVar94[0xd];
              bVar31 = auVar94[0xe];
              bVar32 = auVar94[0xf];
              auVar53._0_2_ = sVar51 + (ushort)bVar25;
              auVar53._2_2_ = sVar56 + (ushort)bVar26;
              auVar53._4_2_ = sVar57 + (ushort)bVar27;
              auVar53._6_2_ = sVar58 + (ushort)bVar28;
              auVar53._8_2_ = sVar59 + (ushort)bVar29;
              auVar53._10_2_ = sVar60 + (ushort)bVar30;
              auVar53._12_2_ = sVar61 + (ushort)bVar31;
              auVar53._14_2_ = sVar62 + (ushort)bVar32;
              *(short *)(puVar8 + -1) = sVar45 - *(short *)(puVar8 + -1);
              *(short *)((long)puVar8 + -6) = sVar47 - *(short *)((long)puVar8 + -6);
              *(short *)((long)puVar8 + -4) = sVar48 - *(short *)((long)puVar8 + -4);
              *(short *)((long)puVar8 + -2) = sVar50 - *(short *)((long)puVar8 + -2);
              *(short *)(puVar8 + -2) = sVar38 - *(short *)(puVar8 + -2);
              *(short *)((long)puVar8 + -0xe) = sVar41 - *(short *)((long)puVar8 + -0xe);
              *(short *)((long)puVar8 + -0xc) = sVar42 - *(short *)((long)puVar8 + -0xc);
              *(short *)((long)puVar8 + -10) = sVar44 - *(short *)((long)puVar8 + -10);
              puVar8[1] = CONCAT26(sVar62 - (short)((ulong)uVar98 >> 0x30),
                                   CONCAT24(sVar61 - (short)((ulong)uVar98 >> 0x20),
                                            CONCAT22(sVar60 - (short)((ulong)uVar98 >> 0x10),
                                                     sVar59 - (short)uVar98)));
              *puVar8 = CONCAT26(sVar58 - (short)((ulong)uVar97 >> 0x30),
                                 CONCAT24(sVar57 - (short)((ulong)uVar97 >> 0x20),
                                          CONCAT22(sVar56 - (short)((ulong)uVar97 >> 0x10),
                                                   sVar51 - (short)uVar97)));
              auVar94 = NEON_umull(auVar94._0_8_,auVar94._0_8_,1);
              iVar85 = auVar76._0_4_;
              iVar35 = auVar76._4_4_;
              iVar36 = auVar76._8_4_;
              iVar37 = auVar76._12_4_;
              iVar63 = auVar65._0_4_;
              iVar68 = auVar65._4_4_;
              iVar69 = auVar65._8_4_;
              iVar70 = auVar65._12_4_;
              iVar72 = auVar93._0_4_;
              iVar80 = auVar93._4_4_;
              iVar82 = auVar93._8_4_;
              iVar83 = auVar93._12_4_;
              iVar84 = (int)uVar64;
              iVar87 = (int)((ulong)uVar64 >> 0x20);
              iVar89 = (int)uVar74;
              iVar91 = (int)((ulong)uVar74 >> 0x20);
              auVar76._0_4_ = iVar85 + (uint)auVar94._0_2_;
              auVar76._4_4_ = iVar35 + (uint)auVar94._2_2_;
              auVar76._8_4_ = iVar36 + (uint)auVar94._4_2_;
              auVar76._12_4_ = iVar37 + (uint)auVar94._6_2_;
              auVar65._0_4_ = iVar63 + (uint)auVar94._8_2_;
              auVar65._4_4_ = iVar68 + (uint)auVar94._10_2_;
              auVar65._8_4_ = iVar69 + (uint)auVar94._12_2_;
              auVar65._12_4_ = iVar70 + (uint)auVar94._14_2_;
              auVar93._0_4_ = iVar72 + (uint)(ushort)((ushort)bVar25 * (ushort)bVar25);
              auVar93._4_4_ = iVar80 + (uint)(ushort)((ushort)bVar26 * (ushort)bVar26);
              auVar93._8_4_ = iVar82 + (uint)(ushort)((ushort)bVar27 * (ushort)bVar27);
              auVar93._12_4_ = iVar83 + (uint)(ushort)((ushort)bVar28 * (ushort)bVar28);
              uVar64 = CONCAT44(iVar87 + (uint)(ushort)((ushort)bVar30 * (ushort)bVar30),
                                iVar84 + (uint)(ushort)((ushort)bVar29 * (ushort)bVar29));
              uVar74 = CONCAT44(iVar91 + (uint)(ushort)((ushort)bVar32 * (ushort)bVar32),
                                iVar89 + (uint)(ushort)((ushort)bVar31 * (ushort)bVar31));
              puVar13[-3] = CONCAT44(iVar37 - (int)((ulong)puVar13[-3] >> 0x20),
                                     iVar36 - (int)puVar13[-3]);
              puVar13[-4] = CONCAT44(iVar35 - (int)((ulong)puVar13[-4] >> 0x20),
                                     iVar85 - (int)puVar13[-4]);
              *(int *)(puVar13 + -1) = iVar69 - *(int *)(puVar13 + -1);
              *(int *)((long)puVar13 + -4) = iVar70 - *(int *)((long)puVar13 + -4);
              *(int *)(puVar13 + -2) = iVar63 - *(int *)(puVar13 + -2);
              *(int *)((long)puVar13 + -0xc) = iVar68 - *(int *)((long)puVar13 + -0xc);
              uVar7 = lVar17 - 0x80;
              lVar17 = lVar17 + 0x10;
              puVar13[1] = CONCAT44(iVar83 - (int)((ulong)puVar13[1] >> 0x20),
                                    iVar82 - (int)puVar13[1]);
              *puVar13 = CONCAT44(iVar80 - (int)((ulong)*puVar13 >> 0x20),iVar72 - (int)*puVar13);
              puVar13[3] = CONCAT44(iVar91 - (int)((ulong)puVar13[3] >> 0x20),
                                    iVar89 - (int)puVar13[3]);
              puVar13[2] = CONCAT44(iVar87 - (int)((ulong)puVar13[2] >> 0x20),
                                    iVar84 - (int)puVar13[2]);
              puVar8 = puVar8 + 4;
              puVar13 = puVar13 + 8;
            } while (uVar7 < 0x70);
            lVar17 = 0;
            piVar14 = aiStack_4b0;
            puVar8 = auStack_2b0;
            puVar13 = auStack_2b0;
            piVar19 = aiStack_4b0;
            do {
              lVar22 = 0;
              sVar38 = 0;
              fVar21 = 0.0;
              do {
                asStack_90[lVar22] = sVar38;
                unaff_x19[lVar22] = fVar21;
                sVar38 = *(short *)((long)puVar13 + lVar22 * 2) + sVar38;
                fVar21 = (float)(piVar19[lVar22] + (int)fVar21);
                lVar22 = lVar22 + 1;
              } while (lVar22 != 8);
              lVar22 = 0;
              do {
                *(short *)((long)puVar8 + lVar22 * 2) = sVar38 - asStack_90[lVar22];
                piVar14[lVar22] = (int)fVar21 - (int)unaff_x19[lVar22];
                sVar38 = *(short *)((long)puVar13 + lVar22 * 2 + 0x10) + sVar38;
                fVar21 = (float)(piVar19[lVar22 + 8] + (int)fVar21);
                lVar22 = lVar22 + 1;
              } while (lVar22 != 8);
              lVar17 = lVar17 + 1;
              piVar19 = piVar19 + 0x10;
              puVar13 = puVar13 + 4;
              piVar14 = piVar14 + 8;
              puVar8 = puVar8 + 2;
            } while (lVar17 != 8);
            if (lStack_4e0 < 2) {
              uVar7 = 0;
            }
            else {
              puVar8 = puStack_540;
              uVar15 = 0;
              do {
                if (-1 < iVar92) {
                  uVar7 = 0;
                  puVar13 = puVar8;
                  do {
                    lVar17 = 0;
                    uVar64 = *(undefined8 *)((long)auStack_1b0 + uVar7 + uVar15 * 0x10);
                    puVar24 = puVar13;
                    auVar94 = ZEXT216(0);
                    auVar39 = ZEXT216(0);
                    auVar67 = ZEXT216(0);
                    do {
                      uVar74 = *(undefined8 *)(param_1 + lVar17);
                      auVar66 = NEON_umull(uVar74,uVar64,1);
                      uVar64 = puVar24[-2];
                      auVar95 = NEON_umull(uVar74,uVar64,1);
                      auVar76 = NEON_umull(uVar74,*puVar24,1);
                      auVar77._0_4_ = auVar94._0_4_ + (uint)auVar66._0_2_ + (uint)auVar66._2_2_;
                      auVar77._4_4_ = auVar94._4_4_ + (uint)auVar66._4_2_ + (uint)auVar66._6_2_;
                      auVar77._8_4_ = auVar94._8_4_ + (uint)auVar66._8_2_ + (uint)auVar66._10_2_;
                      auVar77._12_4_ = auVar94._12_4_ + (uint)auVar66._12_2_ + (uint)auVar66._14_2_;
                      auVar54._0_4_ = auVar67._0_4_ + (uint)auVar95._0_2_ + (uint)auVar95._2_2_;
                      auVar54._4_4_ = auVar67._4_4_ + (uint)auVar95._4_2_ + (uint)auVar95._6_2_;
                      auVar54._8_4_ = auVar67._8_4_ + (uint)auVar95._8_2_ + (uint)auVar95._10_2_;
                      auVar54._12_4_ = auVar67._12_4_ + (uint)auVar95._12_2_ + (uint)auVar95._14_2_;
                      auVar66._0_4_ = auVar39._0_4_ + (uint)auVar76._0_2_ + (uint)auVar76._2_2_;
                      auVar66._4_4_ = auVar39._4_4_ + (uint)auVar76._4_2_ + (uint)auVar76._6_2_;
                      auVar66._8_4_ = auVar39._8_4_ + (uint)auVar76._8_2_ + (uint)auVar76._10_2_;
                      auVar66._12_4_ = auVar39._12_4_ + (uint)auVar76._12_2_ + (uint)auVar76._14_2_;
                      lVar17 = lVar17 + 8;
                      puVar24 = puVar24 + 2;
                      auVar94 = auVar77;
                      auVar39 = auVar66;
                      auVar67 = auVar54;
                    } while (lVar17 != 0x40);
                    aiStack_3b0[uVar15 * 8 + uVar7] =
                         auVar77._0_4_ + auVar77._4_4_ + auVar77._8_4_ + auVar77._12_4_;
                    *(int *)((long)aiStack_3b0 +
                            uVar7 * 4 + ((long)((uVar15 << 0x23) + 0x800000000) >> 0x1e)) =
                         auVar54._0_4_ + auVar54._4_4_ + auVar54._8_4_ + auVar54._12_4_;
                    aiStack_3b0[(long)((int)uVar15 * 8 + 0x10) + uVar7] =
                         auVar66._0_4_ + auVar66._4_4_ + auVar66._8_4_ + auVar66._12_4_;
                    uVar7 = uVar7 + 1;
                    puVar13 = (undefined8 *)((long)puVar13 + 1);
                  } while (uVar7 != iVar90 + 1);
                }
                uVar7 = uVar15 + 3;
                uVar1 = uVar15 + 5;
                puVar8 = puVar8 + 6;
                uVar15 = uVar7;
              } while (uVar1 < uStack_4f0);
              uVar7 = uVar7 & 0xffffffff;
            }
            iVar85 = (int)uVar7;
            while (iVar85 <= iStack_4e4) {
              if (-1 < iVar92) {
                uVar15 = 0;
                puVar8 = auStack_1b0 + (uVar7 & 0xfffffff) * 2;
                do {
                  lVar17 = 0;
                  puVar13 = puVar8;
                  auVar94 = ZEXT216(0);
                  do {
                    auVar39 = NEON_umull(*(undefined8 *)(param_1 + lVar17),*puVar13,1);
                    auVar67._0_4_ = auVar94._0_4_ + (uint)auVar39._0_2_ + (uint)auVar39._2_2_;
                    auVar67._4_4_ = auVar94._4_4_ + (uint)auVar39._4_2_ + (uint)auVar39._6_2_;
                    auVar67._8_4_ = auVar94._8_4_ + (uint)auVar39._8_2_ + (uint)auVar39._10_2_;
                    auVar67._12_4_ = auVar94._12_4_ + (uint)auVar39._12_2_ + (uint)auVar39._14_2_;
                    lVar17 = lVar17 + 8;
                    puVar13 = puVar13 + 2;
                    auVar94 = auVar67;
                  } while (lVar17 != 0x40);
                  aiStack_3b0[(uVar7 & 0x1fffffff) * 8 + uVar15] =
                       auVar67._0_4_ + auVar67._4_4_ + auVar67._8_4_ + auVar67._12_4_;
                  uVar15 = uVar15 + 1;
                  puVar8 = (undefined8 *)((long)puVar8 + 1);
                } while (uVar15 != iVar90 + 1);
              }
              uVar7 = uVar7 + 1;
              iVar85 = (int)uVar7;
            }
            if (lStack_4e0 < 0) {
              fVar21 = -3.4028235e+38;
            }
            else {
              uVar7 = 0;
              fVar21 = -3.4028235e+38;
              do {
                lVar17 = 0;
                pfVar16 = afStack_b0;
                bVar5 = true;
                do {
                  bVar20 = bVar5;
                  uVar64 = *(undefined8 *)((long)auStack_2b0 + lVar17 * 2 + uVar7 * 2);
                  piVar14 = aiStack_4b0 + uVar7 + lVar17;
                  auVar94._0_2_ = (ushort)uVar64;
                  uVar71 = (ushort)((ulong)uVar64 >> 0x10);
                  uVar78 = (ushort)((ulong)uVar64 >> 0x20);
                  uVar79 = (ushort)((ulong)uVar64 >> 0x30);
                  auVar55._0_4_ = *piVar14 * 0x40 - (uint)auVar94._0_2_ * (uint)auVar94._0_2_;
                  auVar55._4_4_ = piVar14[1] * 0x40 - (uint)uVar71 * (uint)uVar71;
                  auVar55._8_4_ = piVar14[2] * 0x40 - (uint)uVar78 * (uint)uVar78;
                  auVar55._12_4_ = piVar14[3] * 0x40 - (uint)uVar79 * (uint)uVar79;
                  auVar39 = NEON_ucvtf(auVar55,4);
                  auVar94._2_2_ = 0;
                  auVar94._4_2_ = uVar71;
                  auVar94._6_2_ = 0;
                  auVar94._8_2_ = uVar78;
                  auVar94._10_2_ = 0;
                  auVar94._12_2_ = uVar79;
                  auVar94._14_2_ = 0;
                  auVar94 = NEON_ucvtf(auVar94,4);
                  auVar67 = NEON_ucvtf(*(undefined1 (*) [16])(aiStack_3b0 + uVar7 + lVar17),4);
                  fVar96 = (float)uStack_510;
                  auVar77 = NEON_frsqrte(auVar39,4);
                  fVar73 = auVar77._0_4_;
                  fVar43 = auVar77._4_4_;
                  fVar46 = auVar77._8_4_;
                  fVar49 = auVar77._12_4_;
                  auVar77 = NEON_fmov(0x40400000,4);
                  fVar43 = (auVar67._4_4_ - auVar94._4_4_ * fVar96) *
                           fVar43 * (auVar77._4_4_ - fVar43 * fVar43 * auVar39._4_4_);
                  fVar46 = (auVar67._8_4_ - auVar94._8_4_ * fVar96) *
                           fVar46 * (auVar77._8_4_ - fVar46 * fVar46 * auVar39._8_4_);
                  fVar49 = (auVar67._12_4_ - auVar94._12_4_ * fVar96) *
                           fVar49 * (auVar77._12_4_ - fVar49 * fVar49 * auVar39._12_4_);
                  auVar40._0_8_ =
                       CONCAT17((char)((uint)fVar43 >> 0x18),
                                CONCAT16((char)((uint)fVar43 >> 0x10),
                                         CONCAT15((char)((uint)fVar43 >> 8),
                                                  CONCAT14(SUB41(fVar43,0),
                                                           (auVar67._0_4_ - auVar94._0_4_ * fVar96)
                                                           * fVar73 * (auVar77._0_4_ -
                                                                      fVar73 * fVar73 *
                                                                      auVar39._0_4_)))));
                  auVar40[8] = SUB41(fVar46,0);
                  auVar40[9] = (undefined1)((uint)fVar46 >> 8);
                  auVar40[10] = (undefined1)((uint)fVar46 >> 0x10);
                  auVar40[0xb] = (undefined1)((uint)fVar46 >> 0x18);
                  auVar40[0xc] = SUB41(fVar49,0);
                  auVar40[0xd] = (undefined1)((uint)fVar49 >> 8);
                  auVar40[0xe] = (undefined1)((uint)fVar49 >> 0x10);
                  auVar40[0xf] = (undefined1)((uint)fVar49 >> 0x18);
                  *(long *)(pfVar16 + 2) = auVar40._8_8_;
                  *(undefined8 *)pfVar16 = auVar40._0_8_;
                  lVar17 = 4;
                  pfVar16 = afStack_b0 + 4;
                  bVar5 = false;
                } while (bVar20);
                if (-1 < iVar92) {
                  pfVar16 = afStack_b0;
                  lVar17 = lStack_4d0;
                  uVar15 = uVar7;
                  fVar43 = fVar21;
                  do {
                    fVar21 = *pfVar16;
                    iVar85 = (int)uVar15;
                    if (*pfVar16 <= fVar43) {
                      fVar21 = fVar43;
                      iVar85 = unaff_w24;
                    }
                    unaff_w24 = iVar85;
                    uVar15 = (ulong)((int)uVar15 + 1);
                    bVar5 = lVar17 != -1;
                    lVar17 = lVar17 + 1;
                    pfVar16 = pfVar16 + 1;
                    fVar43 = fVar21;
                  } while (bVar5);
                }
                uVar7 = uVar7 + 8;
              } while (uVar7 < (iVar88 + 1U) * 8);
            }
            iVar85 = unaff_w24 + 7;
            if (-1 < unaff_w24) {
              iVar85 = unaff_w24;
            }
            uVar6 = uStack_4b8;
            uVar23 = uStack_4b4;
            if (fVar12 < fVar21) {
              uVar6 = unaff_w24 % 8 + (int)uStack_4c8;
              uVar23 = (int)uStack_4d8 + (iVar85 >> 3);
              fVar12 = fVar21;
            }
            pdVar10 = (double *)(ulong)uVar6;
            uVar15 = uStack_4c8 + 8;
            iVar85 = iStack_4bc + -8;
            uVar7 = uStack_4d8;
            param_4 = lStack_520;
            uVar11 = uStack_514;
          } while ((int)uVar15 <= (int)uStack_514);
        }
        uVar7 = uVar7 + 8;
      } while (uVar7 <= uStack_550);
      dVar33 = (double)fVar12;
      param_5 = pdStack_570;
    }
    iVar35 = (int)param_4;
    dVar52 = dVar52 * dVar33;
  }
  else if ((int)uVar2 < (int)uVar6) {
    uVar23 = 0;
    pdVar10 = (double *)0x0;
    dVar52 = -10000.0;
  }
  else {
    pdVar10 = (double *)0x0;
    uVar23 = 0;
    dVar52 = -10000.0;
    do {
      uVar6 = (uint)uVar7;
      if ((int)uVar3 <= (int)uVar11) {
        dVar33 = 1.0;
        if (*(double *)(param_1 + 0x48) != 0.0) {
          dVar33 = *(double *)(param_1 + 0x48);
        }
        uVar7 = (ulong)uVar3;
        dVar34 = dVar52;
        do {
          lVar17 = 0;
          uVar18 = (uint)uVar7;
          puVar8 = (undefined8 *)
                   (*(long *)(param_2 + 8) + (long)*(int *)(param_2 + 0x18) * (long)(int)uVar6 +
                   (long)(int)uVar18);
          uVar71 = 0;
          uVar78 = 0;
          uVar79 = 0;
          uVar81 = 0;
          iVar85 = 0;
          iVar88 = 0;
          iVar90 = 0;
          iVar92 = 0;
          auVar94 = ZEXT216(0);
          do {
            uVar64 = *puVar8;
            auVar39 = NEON_umull(uVar64,uVar64,1);
            auVar67 = NEON_umull(*(undefined8 *)(param_1 + lVar17),uVar64,1);
            uVar71 = uVar71 + (ushort)(byte)uVar64 + (ushort)(byte)((ulong)uVar64 >> 8);
            uVar78 = uVar78 + (ushort)(byte)((ulong)uVar64 >> 0x10) +
                              (ushort)(byte)((ulong)uVar64 >> 0x18);
            uVar79 = uVar79 + (ushort)(byte)((ulong)uVar64 >> 0x20) +
                              (ushort)(byte)((ulong)uVar64 >> 0x28);
            uVar81 = uVar81 + (ushort)(byte)((ulong)uVar64 >> 0x30) +
                              (ushort)(byte)((ulong)uVar64 >> 0x38);
            iVar85 = iVar85 + (uint)auVar39._0_2_ + (uint)auVar39._2_2_;
            iVar88 = iVar88 + (uint)auVar39._4_2_ + (uint)auVar39._6_2_;
            iVar90 = iVar90 + (uint)auVar39._8_2_ + (uint)auVar39._10_2_;
            iVar92 = iVar92 + (uint)auVar39._12_2_ + (uint)auVar39._14_2_;
            auVar39._0_4_ = auVar94._0_4_ + (uint)auVar67._0_2_ + (uint)auVar67._2_2_;
            auVar39._4_4_ = auVar94._4_4_ + (uint)auVar67._4_2_ + (uint)auVar67._6_2_;
            auVar39._8_4_ = auVar94._8_4_ + (uint)auVar67._8_2_ + (uint)auVar67._10_2_;
            auVar39._12_4_ = auVar94._12_4_ + (uint)auVar67._12_2_ + (uint)auVar67._14_2_;
            lVar17 = lVar17 + 8;
            puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(param_2 + 0x18));
            auVar94 = auVar39;
          } while (lVar17 != 0x40);
          dVar86 = (double)((uint)uVar71 + (uint)uVar78 + (uint)uVar79 + (uint)uVar81) / 64.0;
          dVar75 = (double)(uint)(iVar85 + iVar88 + iVar90 + iVar92) / 64.0 - dVar86 * dVar86;
          dVar52 = 1.0;
          if (dVar75 != 0.0) {
            dVar52 = SQRT(dVar75);
          }
          dVar52 = ((double)(uint)(auVar39._0_4_ + auVar39._4_4_ + auVar39._8_4_ + auVar39._12_4_) /
                    64.0 + dVar86 * -*(double *)(param_1 + 0x40)) / (dVar33 * dVar52);
          uVar9 = uVar18;
          uVar4 = uVar6;
          if (dVar52 <= dVar34) {
            uVar9 = (uint)pdVar10;
            uVar4 = uVar23;
          }
          uVar23 = uVar4;
          pdVar10 = (double *)(ulong)uVar9;
          if (dVar52 <= dVar34) {
            dVar52 = dVar34;
          }
          uVar7 = (ulong)(uVar18 + 1);
          dVar34 = dVar52;
        } while (uVar18 != uVar11);
      }
      uVar7 = (ulong)(uVar6 + 1);
    } while (uVar6 != uVar2);
  }
  *param_5 = (double)((int)pdVar10 + 4);
  param_5[1] = (double)(int)(uVar23 + 4);
  dVar33 = *(double *)(param_1 + 0x50);
  param_5[1] = *(double *)(param_1 + 0x58) + param_5[1];
  *param_5 = dVar33 + *param_5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return dVar52;
  }
  ___stack_chk_fail();
  pcStack_578 = FUN_10939efe8;
  lStack_5a0 = (long)*pdVar10;
  lStack_598 = (long)pdVar10[1];
  dStack_5a8 = 0.0;
  lStack_590 = param_1;
  pfStack_588 = unaff_x19;
  FUN_109534000(&dStack_5c0,(double)iVar35);
  param_5[1] = dStack_5b8;
  *param_5 = dStack_5c0;
  dVar52 = *(double *)(uVar7 + 0x50);
  param_5[1] = *(double *)(uVar7 + 0x58) + param_5[1];
  *param_5 = dVar52 + *param_5;
  return dStack_5a8;
}



/* Entry: 10939efe8; end: 10939f05b;  */

undefined8
FUN_10939efe8(long param_1,undefined8 param_2,double *param_3,int param_4,double *param_5,
             undefined8 param_6,int param_7)

{
  undefined8 *puVar1;
  double dVar2;
  double dStack_50;
  double dStack_48;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = (long)*param_3;
  lStack_28 = (long)param_3[1];
  uStack_38 = 0;
  puVar1 = &uStack_38;
  if (param_7 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  FUN_109534000(&dStack_50,(double)param_4,param_1,param_2,&lStack_30,param_6,puVar1);
  param_5[1] = dStack_48;
  *param_5 = dStack_50;
  dVar2 = *(double *)(param_1 + 0x50);
  param_5[1] = *(double *)(param_1 + 0x58) + param_5[1];
  *param_5 = dVar2 + *param_5;
  return uStack_38;
}



/* Entry: 10939f05c; end: 10939f5b3;  */

void FUN_10939f05c(undefined8 *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  float fVar8;
  code *pcVar9;
  bool bVar10;
  undefined4 *puVar11;
  ulong uVar12;
  float *pfVar13;
  long lVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  float *pfVar19;
  float *pfVar20;
  ulong uVar21;
  float fVar22;
  undefined8 uStack_1d0;
  undefined4 auStack_1c8 [2];
  float **ppfStack_1c0;
  undefined8 uStack_1b8;
  undefined4 auStack_1b0 [2];
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined4 auStack_198 [2];
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined4 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  long alStack_118 [2];
  undefined4 auStack_108 [2];
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  int iStack_e8;
  int iStack_e4;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  int *piStack_b0;
  long *plStack_a8;
  long alStack_a0 [2];
  undefined4 auStack_90 [2];
  undefined8 *puStack_88;
  undefined8 uStack_80;
  float *pfStack_78;
  float *pfStack_70;
  undefined8 uStack_68;
  float *pfVar14;
  
  pfStack_78 = (float *)0x0;
  pfStack_70 = (float *)0x0;
  uStack_68 = 0;
  iVar4 = *(int *)(param_1 + 1);
  lVar15 = *param_2 + (long)iVar4 * 0x20;
  lStack_e0 = *(long *)(lVar15 + 8);
  uVar12 = *(ulong *)(lVar15 + 0x10);
  iVar5 = *(int *)(lVar15 + 0x18);
  uStack_f0 = 0x242ff0000;
  piStack_b0 = &iStack_e8;
  iStack_e8 = (int)(uVar12 >> 0x20);
  iStack_e4 = (int)uVar12;
  lStack_c8 = 0;
  lStack_d0 = 0;
  lStack_b8 = 0;
  uStack_c0 = 0;
  alStack_a0[0] = 0;
  alStack_a0[1] = 0;
  lVar15 = (long)iStack_e4;
  lStack_d8 = lStack_e0;
  plStack_a8 = alStack_a0;
  if (lStack_e0 == 0 && (long)iStack_e4 * (long)iStack_e8 != 0) {
    puVar11 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    uStack_168 = puVar11 + 1;
    uStack_160 = 0x1c;
    *(undefined1 *)(puVar11 + 8) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&uStack_168,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
  }
  else {
    uVar6 = 0x42ff4000;
    lVar3 = lVar15;
    if (uVar12 >> 0x20 != 1) {
      lVar3 = (long)iVar5;
    }
    alStack_a0[0] = lVar15;
    if (iVar5 != 0) {
      alStack_a0[0] = lVar3;
    }
    uVar2 = uVar6;
    if (lVar3 != lVar15 && iVar5 != 0) {
      uVar2 = 0x42ff0000;
    }
    uStack_f0 = CONCAT44(2,uVar2);
    alStack_a0[1] = 1;
    lStack_c8 = lStack_e0 + alStack_a0[0] * ((long)uVar12 >> 0x20);
    lStack_d0 = (lStack_c8 - alStack_a0[0]) + lVar15;
    uStack_80 = 0;
    auStack_90[0] = 0x1010000;
    lVar15 = *param_3 + (long)iVar4 * 0x20;
    lStack_158 = *(long *)(lVar15 + 8);
    uVar12 = *(ulong *)(lVar15 + 0x10);
    iVar5 = *(int *)(lVar15 + 0x18);
    uStack_168 = (undefined4 *)0x242ff0000;
    puStack_128 = &uStack_160;
    iVar16 = (int)(uVar12 >> 0x20);
    iVar17 = (int)uVar12;
    uStack_160 = CONCAT44(iVar17,iVar16);
    lStack_140 = 0;
    lStack_148 = 0;
    lStack_130 = 0;
    uStack_138 = 0;
    alStack_118[0] = 0;
    alStack_118[1] = 0;
    lVar15 = (long)iVar17;
    lStack_150 = lStack_158;
    plStack_120 = alStack_118;
    puStack_88 = &uStack_f0;
    if ((lStack_158 != 0) || ((long)iVar17 * (long)iVar16 == 0)) {
      lVar3 = lVar15;
      if (uVar12 >> 0x20 != 1) {
        lVar3 = (long)iVar5;
      }
      alStack_118[0] = lVar15;
      if (iVar5 != 0) {
        alStack_118[0] = lVar3;
      }
      if (lVar3 != lVar15 && iVar5 != 0) {
        uVar6 = 0x42ff0000;
      }
      uStack_168 = (undefined4 *)CONCAT44(2,uVar6);
      alStack_118[1] = 1;
      lStack_140 = lStack_158 + alStack_118[0] * ((long)uVar12 >> 0x20);
      lStack_148 = (lStack_140 - alStack_118[0]) + lVar15;
      uStack_f8 = 0;
      auStack_108[0] = 0x1010000;
      puStack_100 = &uStack_168;
      puStack_178 = param_1 + 8;
      uStack_170 = 0;
      puStack_180 = (undefined4 *)CONCAT44(puStack_180._4_4_,0x8103000d);
      puStack_190 = param_1 + 0xb;
      auStack_198[0] = 0x8303000d;
      uStack_188 = 0;
      auStack_1b0[0] = 0x82030000;
      uStack_1a0 = 0;
      auStack_1c8[0] = 0x82030005;
      ppfStack_1c0 = &pfStack_78;
      uStack_1b8 = 0;
      uStack_1d0 = *param_1;
      plStack_1a8 = param_1 + 5;
      FUN_109a25464(0x3f1a36e2eb1c432d,auStack_90,auStack_108,&puStack_180,auStack_198,auStack_1b0,
                    auStack_1c8,&uStack_1d0,*(int *)((long)param_1 + 0xc) - iVar4,0x1e00000003,
                    0x3f847ae147ae147b,0);
      if (lStack_130 != 0) {
        piVar1 = (int *)(lStack_130 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_168);
        }
      }
      lStack_130 = 0;
      lStack_150 = 0;
      lStack_158 = 0;
      lStack_140 = 0;
      lStack_148 = 0;
      if (0 < uStack_168._4_4_) {
        lVar15 = 0;
        do {
          *(undefined4 *)((long)puStack_128 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < uStack_168._4_4_);
      }
      if (plStack_120 != alStack_118 && plStack_120 != (long *)0x0) {
        _free(plStack_120[-1]);
      }
      if (lStack_b8 != 0) {
        piVar1 = (int *)(lStack_b8 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_f0);
        }
      }
      lStack_b8 = 0;
      lStack_d8 = 0;
      lStack_e0 = 0;
      lStack_c8 = 0;
      lStack_d0 = 0;
      if (0 < (int)uStack_f0._4_4_) {
        lVar15 = 0;
        do {
          piStack_b0[lVar15] = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)uStack_f0._4_4_);
      }
      if (plStack_a8 != alStack_a0 && plStack_a8 != (long *)0x0) {
        _free(plStack_a8[-1]);
      }
      puVar18 = param_1 + 2;
      param_1[3] = *puVar18;
      pfVar20 = pfStack_78;
      if (pfStack_78 != pfStack_70 && pfStack_78 + 1 != pfStack_70) {
        fVar22 = *pfStack_78;
        pfVar13 = pfStack_78 + 1;
        pfVar19 = pfStack_78;
        do {
          pfVar14 = pfVar13 + 1;
          pfVar20 = pfVar13;
          fVar8 = *pfVar13;
          if (*pfVar13 <= fVar22) {
            pfVar20 = pfVar19;
            fVar8 = fVar22;
          }
          fVar22 = fVar8;
          pfVar13 = pfVar14;
          pfVar19 = pfVar20;
        } while (pfVar14 != pfStack_70);
      }
      if (pfStack_78 != pfStack_70) {
        uVar12 = 0;
        uVar21 = 1;
        do {
          if (*(char *)(param_1[5] + uVar12) == '\0') {
            uStack_f0 = (ulong)uStack_f0._4_4_ << 0x20;
            FUN_10939f5b4(puVar18,&uStack_f0);
          }
          else {
            uStack_f0 = CONCAT44(uStack_f0._4_4_,1.0 - pfStack_78[uVar12] / *pfVar20);
            FUN_10939f5b4(puVar18,&uStack_f0);
          }
          bVar10 = uVar21 < (ulong)((long)pfStack_70 - (long)pfStack_78 >> 2);
          uVar12 = uVar21;
          uVar21 = (ulong)((int)uVar21 + 1);
        } while (bVar10);
      }
      if (pfStack_78 != (float *)0x0) {
        pfStack_70 = pfStack_78;
        __ZdlPv();
      }
      return;
    }
    puVar11 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    puStack_180 = puVar11 + 1;
    puStack_178 = (undefined8 *)0x1c;
    *(undefined1 *)(puVar11 + 8) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&puStack_180,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10939f508);
  (*pcVar9)();
}



/* Entry: 10939f5b4; end: 10939f677;  */

void FUN_10939f5b4(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = (int)*param_2;
  }
  else {
    lVar8 = (long)puVar2 - *param_1;
    uVar1 = (lVar8 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_1092cc18c();
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        __ZdlPv();
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      lVar8 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar8;
      param_1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 1;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar6 = 0x3fffffffffffffff;
    }
    plVar4 = param_1;
    FUN_1092cc1a0();
    lVar3 = *param_1;
    puVar2 = (undefined4 *)((long)plVar4 + lVar8);
    lVar7 = (long)puVar2 - (param_1[1] - lVar3);
    puVar9 = puVar2 + 1;
    *puVar2 = (int)*param_2;
    _memcpy(lVar7,lVar3);
    lVar8 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)plVar4 + uVar6 * 4;
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return;
}



/* Entry: 10939f678; end: 10939f72f;  */

void FUN_10939f678(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10939f730; end: 10939f7eb;  */

void FUN_10939f730(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x110;
  __Znwm();
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  *puVar1 = &PTR_FUN_110aed388;
  puVar1[8] = 0;
  puVar1[9] = &DAT_11383d918;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0x8000000004;
  *(undefined8 *)((long)puVar1 + 0x94) = 0;
  *(undefined8 *)((long)puVar1 + 0x8c) = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x1d) = 0x3f800000;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  *param_1 = puVar1;
  FUN_10939f7ec();
  return;
}



/* Entry: 10939f7ec; end: 10939f8ef;  */

void FUN_10939f7ec(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uStack_28;
  
  if (param_2 != param_1) {
    FUN_10932d23c(param_1);
    FUN_10932dd64(param_1,param_2);
  }
  FUN_10939f8f0(param_1);
  FUN_1093ef270(&uStack_28,param_1);
  plVar1 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uStack_28;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010939f858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 10939f8f0; end: 10939fbe7;  */

void FUN_10939f8f0(long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  long *plVar12;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x50);
    if ((*(byte *)(lVar11 + 0x10) & 1) != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&uStack_78,*(ulong *)(*(long *)(lVar11 + 0x18) + 0x28) & 0xfffffffffffffffc);
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      if ((*(uint *)(param_1 + 0x10) >> 1 & 1) == 0) goto LAB_10939f98c;
      lVar11 = *(long *)(param_1 + 0x50);
    }
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    if ((*(byte *)(lVar11 + 0x10) >> 2 & 1) != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&uStack_90,*(ulong *)(*(long *)(lVar11 + 0x28) + 0x40) & 0xfffffffffffffffc);
    }
  }
LAB_10939f98c:
  uVar7 = *(ulong *)(param_1 + 0x30);
  puVar10 = (ulong *)(param_1 + 0x30);
  if ((uVar7 & 1) != 0) {
    puVar10 = (ulong *)(uVar7 + 7);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar11 = (long)*(int *)(param_1 + 0x38) << 3;
    do {
      uVar8 = *puVar10;
      uVar7 = uStack_70;
      if (-1 < (long)uStack_68) {
        uVar7 = uStack_68 >> 0x38;
      }
      if (((uVar7 != 0) && ((*(byte *)(uVar8 + 0x10) >> 1 & 1) != 0)) &&
         ((*(byte *)(*(long *)(uVar8 + 0x50) + 0x10) & 1) != 0)) {
        lVar5 = *(long *)(*(long *)(uVar8 + 0x50) + 0x18);
        *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 4;
        uVar7 = *(ulong *)(lVar5 + 8);
        if ((uVar7 & 1) != 0) {
          uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(lVar5 + 0x28,&uStack_78,uVar7);
      }
      uVar7 = uStack_88;
      if (-1 < (long)uStack_80) {
        uVar7 = uStack_80 >> 0x38;
      }
      if (((uVar7 != 0) && ((*(byte *)(uVar8 + 0x10) >> 1 & 1) != 0)) &&
         ((*(byte *)(*(long *)(uVar8 + 0x50) + 0x10) >> 2 & 1) != 0)) {
        lVar5 = *(long *)(*(long *)(uVar8 + 0x50) + 0x28);
        *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 4;
        uVar7 = *(ulong *)(lVar5 + 8);
        if ((uVar7 & 1) != 0) {
          uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(lVar5 + 0x40,&uStack_90,uVar7);
      }
      FUN_10939f730(&lStack_98,uVar8);
      lVar5 = lStack_98;
      plVar1 = *(long **)(param_1 + 0xb8);
      if (plVar1 < *(long **)(param_1 + 0xc0)) {
        lStack_98 = 0;
        plVar12 = plVar1 + 1;
        *plVar1 = lVar5;
      }
      else {
        lVar5 = *(long *)(param_1 + 0xb0);
        lVar9 = (long)plVar1 - lVar5;
        uVar7 = (lVar9 >> 3) + 1;
        if (uVar7 >> 0x3d != 0) {
          FUN_1093a1ecc();
LAB_10939fb88:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10939fb8c);
          (*pcVar3)();
        }
        uVar6 = (long)*(long **)(param_1 + 0xc0) - lVar5;
        uVar8 = (long)uVar6 >> 2;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 >> 0x3d != 0) {
          func_0x000104c4f740();
          goto LAB_10939fb88;
        }
        lVar4 = uVar8 << 3;
        __Znwm();
        lVar2 = lStack_98;
        plVar1 = (long *)(lVar4 + lVar9);
        lStack_98 = 0;
        plVar12 = plVar1 + 1;
        *plVar1 = lVar2;
        _memcpy(plVar1 + -(lVar9 >> 3),lVar5,lVar9);
        *(long **)(param_1 + 0xb0) = plVar1 + -(lVar9 >> 3);
        *(long **)(param_1 + 0xb8) = plVar12;
        *(ulong *)(param_1 + 0xc0) = lVar4 + uVar8 * 8;
        if (lVar5 != 0) {
          __ZdlPv(lVar5);
        }
      }
      lVar5 = lStack_98;
      *(long **)(param_1 + 0xb8) = plVar12;
      lStack_98 = 0;
      if (lVar5 != 0) {
        func_0x00010939f86c();
        __ZdlPv();
      }
      puVar10 = puVar10 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  if ((long)uStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if ((long)uStack_68 < 0) {
    __ZdlPv(uStack_78);
  }
  return;
}



/* Entry: 10939fbe8; end: 10939fe03;  */

/* WARNING: Removing unreachable block (ram,0x0001093a00c8) */
/* WARNING: Removing unreachable block (ram,0x0001093a0388) */

undefined1 * FUN_10939fbe8(long *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  byte bVar13;
  byte bVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined **ppuVar21;
  undefined4 *puVar22;
  undefined1 *puVar23;
  uint uVar24;
  long lVar25;
  float *pfVar26;
  undefined8 *puVar27;
  undefined **ppuVar28;
  ulong *puVar29;
  long *plVar30;
  long *plVar31;
  int iVar32;
  undefined *puVar33;
  long lVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  long *plVar38;
  ulong *puVar39;
  long lVar40;
  undefined **ppuVar41;
  long *plVar42;
  long **pplVar43;
  undefined **ppuVar44;
  ulong uVar45;
  long *plVar46;
  ulong *puVar47;
  ulong uVar48;
  bool bVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  long *plStack_218;
  undefined **ppuStack_200;
  float *pfStack_1f0;
  float *pfStack_1e8;
  undefined1 auStack_1d8 [8];
  undefined **ppuStack_1d0;
  uint uStack_1c8;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  undefined4 uStack_170;
  undefined4 uStack_164;
  long *plStack_160;
  long *plStack_158;
  byte bStack_149;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined8 *puStack_120;
  long alStack_108 [5];
  
  lVar36 = *param_1;
  lVar37 = param_1[1];
  lVar40 = lVar37 - lVar36;
  lVar25 = lVar40 >> 3;
  uVar48 = lVar25 * -0xed7303b5cc0ed73;
  uVar45 = param_1[3];
  if (uVar45 <= uVar48 && uVar48 - uVar45 != 0) goto LAB_10939fdd4;
  uVar1 = uVar45 + 1;
  uVar15 = uVar1 + lVar25 * 0xed7303b5cc0ed73;
  if (uVar1 < uVar48 || uVar15 == 0) {
    if (uVar1 < uVar48) {
      FUN_1093a1df8(param_1,lVar36 + uVar1 * 0x228);
    }
  }
  else {
    if ((ulong)((param_1[2] - lVar37 >> 3) * -0xed7303b5cc0ed73) < uVar15) {
      if (uVar1 < 0x76b981dae6076c) {
        lVar34 = param_1[2] - lVar36 >> 3;
        uVar48 = lVar34 * -0x1dae6076b981dae6;
        if (uVar48 < uVar1 || uVar48 - uVar1 == 0) {
          uVar48 = uVar1;
        }
        if (0x3b5cc0ed7303b4 < (ulong)(lVar34 * -0xed7303b5cc0ed73)) {
          uVar48 = 0x76b981dae6076b;
        }
        if (uVar48 < 0x76b981dae6076c) {
          lVar17 = uVar48 * 0x228;
          __Znwm();
          lVar2 = lVar17 + lVar40;
          lVar25 = uVar45 * 0x228 + lVar25 * -8 + 0x228;
          lVar34 = lVar2;
          do {
            FUN_1093a1ee0(lVar34);
            lVar34 = lVar34 + 0x228;
            lVar25 = lVar25 + -0x228;
          } while (lVar25 != 0);
          if (lVar36 != lVar37) {
            lVar25 = 0;
            do {
              lVar34 = (lVar2 - lVar40) + lVar25;
              lVar3 = lVar36 + lVar25;
              FUN_1093a1fb8(lVar34,0,lVar3);
              FUN_1093a1fb8(lVar34 + 0xb8,0,lVar3 + 0xb8);
              FUN_1093a1fb8(lVar34 + 0x170,0,lVar3 + 0x170);
              lVar25 = lVar25 + 0x228;
            } while (lVar36 + lVar25 != lVar37);
            do {
              FUN_10930ef1c(lVar36 + 0x170);
              FUN_10930ef1c(lVar36 + 0xb8);
              FUN_10930ef1c(lVar36);
              lVar36 = lVar36 + 0x228;
            } while (lVar36 != lVar37);
            lVar36 = *param_1;
          }
          *param_1 = lVar2 - lVar40;
          param_1[1] = lVar2 + uVar15 * 0x228;
          param_1[2] = lVar17 + uVar48 * 0x228;
          if (lVar36 != 0) {
            __ZdlPv(lVar36);
          }
          goto LAB_10939fdcc;
        }
      }
      else {
        FUN_1093a1fa4();
      }
      func_0x000104c4f740();
      plVar18 = param_1;
      __ZNSt3__16chrono12steady_clock3nowEv();
      (**(code **)(*(long *)param_1[0x15] + 0x18))((long *)param_1[0x15],param_2);
      FUN_10933fa08(auStack_1d8,0,param_3);
      uVar7 = *(undefined4 *)(param_2 + 2);
      uVar9 = *(undefined4 *)((long)param_2 + 0x14);
      uStack_1c8 = uStack_1c8 | 1;
      if (ppuStack_198 == (undefined **)0x0) {
        ppuVar41 = ppuStack_1d0;
        if (((ulong)ppuStack_1d0 & 1) != 0) {
          ppuVar41 = *(undefined ***)((ulong)ppuStack_1d0 & 0xfffffffffffffffe);
        }
        func_0x00010933f890();
        ppuStack_198 = ppuVar41;
      }
      FUN_1093e2a74(uVar7,uVar9,1,ppuStack_198);
      *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) | 0x10;
      ppuVar41 = (undefined **)param_4[0x11];
      if (ppuVar41 == (undefined **)0x0) {
        ppuVar41 = (undefined **)param_4[1];
        if (((ulong)ppuVar41 & 1) != 0) {
          ppuVar41 = *(undefined ***)((ulong)ppuVar41 & 0xfffffffffffffffe);
        }
        func_0x00010933f890();
        param_4[0x11] = (long)ppuVar41;
      }
      ppuVar28 = &PTR_PTR_1132d80c0;
      if (ppuStack_198 != (undefined **)0x0) {
        ppuVar28 = ppuStack_198;
      }
      if (ppuVar28 != ppuVar41) {
        FUN_10933df90(ppuVar41);
        FUN_10933e2a4(ppuVar41,ppuVar28);
      }
      *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) | 0x40;
      ppuVar41 = (undefined **)param_4[0x13];
      if (ppuVar41 == (undefined **)0x0) {
        ppuVar41 = (undefined **)param_4[1];
        if (((ulong)ppuVar41 & 1) != 0) {
          ppuVar41 = *(undefined ***)((ulong)ppuVar41 & 0xfffffffffffffffe);
        }
        func_0x00010933f844();
        param_4[0x13] = (long)ppuVar41;
      }
      ppuVar28 = &PTR_PTR_1132d8098;
      if (ppuStack_190 != (undefined **)0x0) {
        ppuVar28 = ppuStack_190;
      }
      if (ppuVar28 != ppuVar41) {
        FUN_10933e4c8(ppuVar41);
        FUN_10933e754(ppuVar41,ppuVar28);
      }
      FUN_109367d10(&pfStack_1f0,6);
      pfVar26 = (float *)param_2[1];
      fVar50 = 1.0 / (-(pfVar26[1] * pfVar26[3]) + pfVar26[4] * *pfVar26);
      *pfStack_1f0 = pfVar26[4] * fVar50;
      pfStack_1f0[1] = -(fVar50 * pfVar26[1]);
      pfStack_1f0[2] = fVar50 * (-(pfVar26[2] * pfVar26[4]) + pfVar26[5] * pfVar26[1]);
      pfStack_1f0[3] = -(fVar50 * pfVar26[3]);
      pfStack_1f0[4] = fVar50 * *pfVar26;
      pfStack_1f0[5] = fVar50 * (-(*pfVar26 * pfVar26[5]) + pfVar26[3] * pfVar26[2]);
      FUN_1093c36b8(pfStack_1f0,param_4);
      *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(param_2 + 2);
      uVar24 = *(uint *)(param_4 + 2);
      *(uint *)(param_4 + 2) = uVar24 | 0x80;
      *(undefined4 *)((long)param_4 + 0xa4) = *(undefined4 *)((long)param_2 + 0x14);
      *(uint *)(param_4 + 2) = uVar24 | 0x180;
      *(undefined4 *)(param_4 + 0x15) = *(undefined4 *)((long)param_2 + 0x24);
      *(uint *)(param_4 + 2) = uVar24 | 0x380;
      *(undefined4 *)((long)param_4 + 0xac) = *(undefined4 *)(param_2 + 5);
      *(uint *)(param_4 + 2) = uVar24 | 0x780;
      plVar19 = (long *)param_1[0x15];
      (**(code **)(*plVar19 + 0x50))();
      *(int *)(param_4 + 0x16) = (int)plVar19;
      *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) | 0x800;
      plVar19 = (long *)param_1[0x15];
      (**(code **)(*plVar19 + 0x50))();
      if ((int)plVar19 != 2) goto LAB_1093a14b4;
      __ZNSt3__16chrono12steady_clock3nowEv();
      lVar36 = lStack_180;
      if (((byte)uStack_1c8 >> 3 & 1) == 0) {
        lVar36 = (long)plVar18 / 1000;
      }
      __ZNSt3__19to_stringEy(&uStack_138,lVar36);
      *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) | 1;
      uVar45 = param_4[1];
      if ((uVar45 & 1) != 0) {
        uVar45 = *(ulong *)(uVar45 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c(param_4 + 0xd,&uStack_138,uVar45);
      puVar27 = (undefined8 *)(param_1[9] & 0xfffffffffffffffc);
      puVar20 = (undefined8 *)*puVar27;
      uVar45 = puVar27[1];
      if (-1 < (char)*(byte *)((long)puVar27 + 0x17)) {
        puVar20 = puVar27;
        uVar45 = (ulong)*(byte *)((long)puVar27 + 0x17);
      }
      plVar42 = param_4 + 9;
      func_0x000107c27d5c(plVar42,puVar20,uVar45,0);
      fVar50 = 0.0;
      if (plVar42 != (long *)0x0) {
        if ((*(byte *)(plVar42 + 6) >> 1 & 1) != 0) {
          fVar51 = (float)(lVar36 - plVar42[8]) / 1e+06;
          *(float *)((long)param_4 + 0xb4) = fVar51;
          *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) | 0x1000;
          if ((*(uint *)(param_1 + 2) >> 10 & 1) == 0) {
            if ((*(uint *)(param_1 + 2) >> 7 & 1) != 0) {
              fVar50 = *(float *)(param_1 + 0x10);
            }
          }
          else {
            fVar50 = 0.0;
            if (0.0 < *(float *)((long)param_1 + 0x8c)) {
              fVar50 = 0.5;
              if (fVar51 < 0.5) {
                fVar50 = fVar51;
              }
              fVar50 = 1.0 / fVar50;
              if (fVar51 <= 0.008333334) {
                fVar50 = 119.99999;
              }
              fVar50 = 1.0 / (fVar50 / (*(float *)((long)param_1 + 0x8c) * 6.2831855) + 1.0);
            }
            fVar50 = 1.0 - fVar50;
          }
        }
        if ((*(byte *)(plVar42 + 6) & 1) != 0) {
          lVar37 = plVar42[7];
          plVar42 = (long *)param_1[0x15];
          uVar53 = *(undefined8 *)(lVar37 + 0x20);
          uVar7 = *(undefined4 *)(lVar37 + 0x28);
          *(uint *)(lVar37 + 0x10) = *(uint *)(lVar37 + 0x10) | 1;
          puVar20 = *(undefined8 **)(lVar37 + 8);
          if (((ulong)puVar20 & 1) != 0) {
            puVar20 = *(undefined8 **)((ulong)puVar20 & 0xfffffffffffffffe);
          }
          if (((uint)*(ulong *)(lVar37 + 0x18) >> 1 & 1) == 0) {
            if (puVar20 == (undefined8 *)0x0) {
              puVar20 = (undefined8 *)0x18;
              __Znwm();
              uVar45 = 2;
            }
            else {
              func_0x00010b4d80a4();
              uVar45 = 3;
            }
            *puVar20 = 0;
            puVar20[1] = 0;
            puVar20[2] = 0;
            *(ulong *)(lVar37 + 0x18) = uVar45 | (ulong)puVar20;
          }
          else {
            puVar20 = (undefined8 *)(*(ulong *)(lVar37 + 0x18) & 0xfffffffffffffffc);
          }
          if (*(char *)((long)puVar20 + 0x17) < '\0') {
            puVar20 = (undefined8 *)*puVar20;
          }
          uStack_138 = 1;
          uVar53 = NEON_rev64(uVar53,4);
          uStack_134 = (undefined4)uVar53;
          uStack_130 = (undefined4)((ulong)uVar53 >> 0x20);
          uStack_128 = 1;
          uStack_12c = uVar7;
          puStack_120 = puVar20;
          (**(code **)(*plVar42 + 0x58))(plVar42,&uStack_138);
        }
      }
      ppuVar28 = (undefined **)param_1[0xb];
      ppuVar41 = &PTR_PTR_1132d18a0;
      if (ppuVar28 != (undefined **)0x0) {
        ppuVar41 = ppuVar28;
      }
      if ((*(byte *)(ppuVar41 + 2) >> 6 & 1) != 0) {
        ppuVar41 = &PTR_PTR_1132d80c0;
        if (ppuStack_198 != (undefined **)0x0) {
          ppuVar41 = ppuStack_198;
        }
        func_0x00010933de64(&uStack_138,0,ppuVar41);
        FUN_1093e2c8c(param_2[1],&uStack_138);
        ppuVar41 = &PTR_PTR_1132d18a0;
        if ((undefined **)param_1[0xb] != (undefined **)0x0) {
          ppuVar41 = (undefined **)param_1[0xb];
        }
        ppuVar28 = &PTR_PTR_1132d15f8;
        if ((undefined **)ppuVar41[9] != (undefined **)0x0) {
          ppuVar28 = (undefined **)ppuVar41[9];
        }
        FUN_1093f4fc0(&plStack_160,param_2,&uStack_138,ppuVar28);
        (**(code **)(*(long *)param_1[0x15] + 0x28))((long *)param_1[0x15],&plStack_160);
        if (plStack_160 != (long *)0x0) {
          plStack_158 = plStack_160;
          __ZdlPv();
        }
        FUN_10933df00(&uStack_138);
        ppuVar28 = (undefined **)param_1[0xb];
      }
      ppuVar41 = &PTR_PTR_1132d18a0;
      if (ppuVar28 != (undefined **)0x0) {
        ppuVar41 = ppuVar28;
      }
      if ((*(byte *)(ppuVar41 + 2) >> 4 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x15] + 0x20))((long *)param_1[0x15],param_4,param_2);
      }
      ppuVar41 = &PTR_PTR_1132d1970;
      if ((undefined **)param_1[0xe] != (undefined **)0x0) {
        ppuVar41 = (undefined **)param_1[0xe];
      }
      if (*(char *)((long)ppuVar41 + 0x32) == '\x01') {
        ppuVar41 = &PTR_PTR_1132cfaf0;
        if ((undefined **)param_4[0xf] != (undefined **)0x0) {
          ppuVar41 = (undefined **)param_4[0xf];
        }
        if ((*(byte *)(ppuVar41 + 2) >> 3 & 1) == 0) {
          FUN_10937e740(&uStack_138,&UNK_10f568dad);
          FUN_109388c6c(1,&UNK_10f568d30,&UNK_10f568da9,0xf3,&uStack_138);
          goto LAB_1093a14b4;
        }
        (**(code **)(*(long *)param_1[0x15] + 0x38))((long *)param_1[0x15],ppuVar41[0x19],param_2);
      }
      FUN_109312ec8(&uStack_138,param_4 + 9,param_1[9] & 0xfffffffffffffffc);
      lVar37 = CONCAT44(uStack_134,uStack_138);
      *(long *)(lVar37 + 0x40) = lVar36;
      uVar24 = *(uint *)(lVar37 + 0x30);
      *(uint *)(lVar37 + 0x30) = uVar24 | 2;
      if (((*(byte *)(param_1 + 2) >> 6 & 1) == 0) || ((uVar24 >> 2 & 1) == 0)) {
LAB_1093a0434:
        plStack_218 = (long *)param_1[0x15];
        (**(code **)(*plStack_218 + 0x40))(fVar50);
        *(long *)(lVar37 + 0x48) = lVar36;
        *(uint *)(lVar37 + 0x30) = *(uint *)(lVar37 + 0x30) | 4;
        __ZNSt3__16chrono12steady_clock3nowEv();
        plVar42 = (long *)param_1[0x15];
        (**(code **)(*plVar42 + 0x48))(plVar42,param_1 + 0x19);
        ppuVar41 = &PTR_PTR_1132d19d0;
        if ((undefined **)param_1[0xc] != (undefined **)0x0) {
          ppuVar41 = (undefined **)param_1[0xc];
        }
        if (*(char *)((long)ppuVar41 + 0x12) < '\0') {
          plVar42 = param_1 + 0x19;
          FUN_1093e96e8(&plStack_160,plVar42,ppuVar41[0x1a]);
          uVar24 = (uint)(char)bStack_149;
          plVar38 = plStack_158;
          if (-1 < (int)uVar24) {
            plVar38 = (long *)(ulong)bStack_149;
          }
          if (plVar38 != (long *)0x0) {
            plVar42 = param_1 + 0x19;
            func_0x000107c31944(plVar42,&plStack_160);
            plVar38 = (long *)param_1[0x1a];
            if (plVar38 != (long *)0x0) {
              uVar45 = (long)plVar38 - 1;
              if (((ulong)plVar38 & uVar45) == 0) {
                plVar46 = (long *)(uVar45 & (ulong)plVar42);
              }
              else {
                plVar46 = plVar42;
                if (plVar38 <= plVar42) {
                  uVar48 = 0;
                  if (plVar38 != (long *)0x0) {
                    uVar48 = (ulong)plVar42 / (ulong)plVar38;
                  }
                  plVar46 = (long *)((long)plVar42 - uVar48 * (long)plVar38);
                }
              }
              plVar30 = *(long **)(param_1[0x19] + (long)plVar46 * 8);
              if (plVar30 != (long *)0x0) {
                for (plVar30 = (long *)*plVar30; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30)
                {
                  plVar31 = (long *)plVar30[1];
                  if (plVar31 == plVar42) {
                    plVar31 = param_1 + 0x19;
                    func_0x000104c4fbc4(plVar31,plVar30 + 2,&plStack_160);
                    if (((ulong)plVar31 & 1) != 0) {
                      FUN_109312ec8(&uStack_138,param_4 + 9,param_1[9] & 0xfffffffffffffffc);
                      lVar36 = CONCAT44(uStack_134,uStack_138);
                      *(uint *)(lVar36 + 0x30) = *(uint *)(lVar36 + 0x30) | 1;
                      uVar45 = *(ulong *)(lVar36 + 0x38);
                      if (uVar45 == 0) {
                        uVar45 = *(ulong *)(lVar36 + 0x28);
                        if ((uVar45 & 1) != 0) {
                          uVar45 = *(ulong *)(uVar45 & 0xfffffffffffffffe);
                        }
                        func_0x000109312140();
                        *(ulong *)(lVar36 + 0x38) = uVar45;
                      }
                      uVar24 = *(uint *)(uVar45 + 0x10);
                      uVar52 = plVar30[6];
                      uVar53 = plVar30[5];
                      *(int *)(uVar45 + 0x20) = (int)plVar30[6];
                      *(ulong *)(uVar45 + 0x24) =
                           CONCAT44((int)((ulong)uVar52 >> 0x20),(int)((ulong)uVar53 >> 0x20));
                      *(uint *)(uVar45 + 0x10) = uVar24 | 0xe;
                      uVar53 = plVar30[8];
                      iVar8 = *(int *)(plVar30 + 5);
                      iVar10 = *(int *)((long)plVar30 + 0x2c);
                      iVar32 = *(int *)(plVar30 + 6);
                      iVar11 = *(int *)((long)plVar30 + 0x34);
                      if (*(uint *)(plVar30 + 7) < 5) {
                        iVar35 = *(int *)(&UNK_10dfc8c48 + (ulong)*(uint *)(plVar30 + 7) * 4);
                      }
                      else {
                        iVar35 = 1;
                      }
                      *(uint *)(uVar45 + 0x10) = uVar24 | 0xf;
                      uVar48 = *(ulong *)(uVar45 + 8);
                      if ((uVar48 & 1) != 0) {
                        uVar48 = *(ulong *)(uVar48 & 0xfffffffffffffffe);
                      }
                      plVar42 = (long *)(uVar45 + 0x18);
                      func_0x00010b4bf088(plVar42,uVar53,
                                          (long)(iVar10 * iVar8 * iVar32 * iVar11 * iVar35),uVar48);
                      uVar24 = (uint)bStack_149;
                      goto LAB_1093a0828;
                    }
                  }
                  else {
                    if (((ulong)plVar38 & uVar45) == 0) {
                      plVar31 = (long *)((ulong)plVar31 & uVar45);
                    }
                    else if (plVar38 <= plVar31) {
                      uVar48 = 0;
                      if (plVar38 != (long *)0x0) {
                        uVar48 = (ulong)plVar31 / (ulong)plVar38;
                      }
                      plVar31 = (long *)((long)plVar31 - uVar48 * (long)plVar38);
                    }
                    if (plVar31 != plVar46) break;
                  }
                }
              }
            }
            FUN_109262df8(&UNK_10f639994);
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1093a0768);
            (*pcVar16)();
          }
LAB_1093a0828:
          if ((uVar24 >> 7 & 1) != 0) {
            __ZdlPv();
            plVar42 = plStack_160;
          }
        }
      }
      else {
        lVar25 = *(long *)(lVar37 + 0x48);
        plStack_218 = param_1 + 0x1e;
        FUN_10939fbe8();
        lVar25 = lVar36 - lVar25;
        ppuVar41 = &PTR_PTR_1132d16c8;
        if ((undefined **)param_1[0xf] != (undefined **)0x0) {
          ppuVar41 = (undefined **)param_1[0xf];
        }
        fVar50 = 0.0;
        if (((*(uint *)(ppuVar41 + 2) >> 1 & 1) != 0) && ((long)ppuVar41[7] <= lVar25))
        goto LAB_1093a0434;
        if (((*(uint *)(ppuVar41 + 2) & 1) != 0) && ((long)ppuVar41[6] <= lVar25)) {
          puVar33 = ppuVar41[3];
          ppuVar28 = ppuVar41 + 3;
          if (((ulong)puVar33 & 1) != 0) {
            ppuVar28 = (undefined **)(puVar33 + 7);
          }
          if (*(int *)(ppuVar41 + 4) != 0) {
            ppuVar41 = ppuVar28 + *(int *)(ppuVar41 + 4);
            do {
              puVar33 = *ppuVar28;
              plVar42 = plStack_218 + 0x1a;
              if ((plStack_218[0x1a] & 1U) != 0) {
                plVar42 = (long *)(plStack_218[0x1a] + 7);
              }
              iVar8 = (int)plStack_218[0x1b];
              if ((*(uint *)(puVar33 + 0x10) & 1) == 0) {
                iVar32 = 0;
                if (iVar8 != 0) {
                  lVar25 = (long)iVar8 << 3;
                  do {
                    if ((*(char *)(*plVar42 + 0x13c) == '\x01') &&
                       (((*(uint *)(puVar33 + 0x10) >> 2 & 1) == 0 ||
                        (*(float *)(puVar33 + 0x24) < *(float *)(*plVar42 + 0x134))))) {
                      iVar32 = iVar32 + 1;
                    }
                    plVar42 = plVar42 + 1;
                    lVar25 = lVar25 + -8;
                  } while (lVar25 != 0);
                }
                if (iVar32 < *(int *)(puVar33 + 0x20)) goto LAB_1093a0434;
              }
              else {
                iVar32 = 0;
                if (iVar8 != 0) {
                  plVar38 = plVar42 + iVar8;
                  do {
                    lVar25 = *plVar42;
                    if (*(char *)(lVar25 + 0x13c) == '\x01') {
                      uVar45 = *(ulong *)(lVar25 + 0x48);
                      puVar39 = (ulong *)(lVar25 + 0x48);
                      if ((uVar45 & 1) != 0) {
                        puVar39 = (ulong *)(uVar45 + 7);
                      }
                      if (*(int *)(lVar25 + 0x50) != 0) {
                        lVar25 = (long)*(int *)(lVar25 + 0x50) << 3;
                        do {
                          uVar45 = *puVar39;
                          if ((*(ulong *)(uVar45 + 0xb0) & 3) == 0) {
                            ppuVar44 = ppuRam00000001132d06b0;
                            if (ppuRam00000001132d06b0 == (undefined **)0x0) {
                              ppuVar44 = &PTR_DAT_1132d0698;
                              func_0x00010b4befb0();
                            }
                          }
                          else {
                            ppuVar44 = (undefined **)
                                       (*(ulong *)(uVar45 + 0xb0) & 0xfffffffffffffffc);
                          }
                          puVar29 = (ulong *)(*(ulong *)(puVar33 + 0x18) & 0xfffffffffffffffc);
                          bVar13 = *(byte *)((long)ppuVar44 + 0x17);
                          puVar4 = ppuVar44[1];
                          if (-1 < (char)bVar13) {
                            puVar4 = (undefined *)(ulong)bVar13;
                          }
                          bVar14 = *(byte *)((long)puVar29 + 0x17);
                          puVar5 = (undefined *)puVar29[1];
                          if (-1 < (char)bVar14) {
                            puVar5 = (undefined *)(ulong)bVar14;
                          }
                          if (puVar4 == puVar5) {
                            ppuVar21 = (undefined **)*ppuVar44;
                            if (-1 < (char)bVar13) {
                              ppuVar21 = ppuVar44;
                            }
                            puVar6 = (ulong *)*puVar29;
                            if (-1 < (char)bVar14) {
                              puVar6 = puVar29;
                            }
                            _memcmp(ppuVar21,puVar6);
                            if ((((int)ppuVar21 == 0) && (*(char *)(uVar45 + 0x13c) == '\x01')) &&
                               ((((byte)puVar33[0x10] >> 2 & 1) == 0 ||
                                (*(float *)(puVar33 + 0x24) < *(float *)(uVar45 + 0x134))))) {
                              iVar32 = iVar32 + 1;
                            }
                          }
                          puVar39 = puVar39 + 1;
                          lVar25 = lVar25 + -8;
                        } while (lVar25 != 0);
                      }
                    }
                    plVar42 = plVar42 + 1;
                  } while (plVar42 != plVar38);
                }
                if (iVar32 < *(int *)(puVar33 + 0x20)) goto LAB_1093a0434;
              }
              ppuVar28 = ppuVar28 + 1;
            } while (ppuVar28 != ppuVar41);
          }
        }
        __ZNSt3__16chrono12steady_clock3nowEv();
        plVar42 = param_1 + 0x19;
        func_0x0001093a2140();
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (((*(byte *)(param_1 + 0x12) & 1) != 0) || (*(char *)((long)param_1 + 0x91) == '\x01')) {
        uVar7 = *(undefined4 *)((long)param_2 + 0x24);
        uVar9 = *(undefined4 *)(param_2 + 5);
        uVar12 = *(undefined4 *)(param_2 + 3);
        *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) | 8;
        uVar45 = param_4[0x10];
        if (uVar45 == 0) {
          uVar45 = param_4[1];
          if ((uVar45 & 1) != 0) {
            uVar45 = *(ulong *)(uVar45 & 0xfffffffffffffffe);
          }
          func_0x000109312140();
          param_4[0x10] = uVar45;
        }
        *(undefined4 *)(uVar45 + 0x20) = uVar7;
        *(undefined4 *)(uVar45 + 0x24) = uVar9;
        *(undefined4 *)(uVar45 + 0x28) = uVar12;
        *(uint *)(uVar45 + 0x10) = *(uint *)(uVar45 + 0x10) | 0xf;
        puVar20 = *(undefined8 **)(uVar45 + 8);
        if (((ulong)puVar20 & 1) != 0) {
          puVar20 = *(undefined8 **)((ulong)puVar20 & 0xfffffffffffffffe);
        }
        if (((uint)*(undefined8 *)(uVar45 + 0x18) >> 1 & 1) == 0) {
          if (puVar20 == (undefined8 *)0x0) {
            puVar20 = (undefined8 *)0x18;
            __Znwm();
            uVar48 = 2;
          }
          else {
            func_0x00010b4d80a4();
            uVar48 = 3;
          }
          *puVar20 = 0;
          puVar20[1] = 0;
          puVar20[2] = 0;
          *(ulong *)(uVar45 + 0x18) = uVar48 | (ulong)puVar20;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
        plVar38 = (long *)param_1[0x15];
        *(uint *)(uVar45 + 0x10) = *(uint *)(uVar45 + 0x10) | 1;
        puVar20 = *(undefined8 **)(uVar45 + 8);
        if (((ulong)puVar20 & 1) != 0) {
          puVar20 = *(undefined8 **)((ulong)puVar20 & 0xfffffffffffffffe);
        }
        if (((uint)*(ulong *)(uVar45 + 0x18) >> 1 & 1) == 0) {
          if (puVar20 == (undefined8 *)0x0) {
            puVar20 = (undefined8 *)0x18;
            __Znwm();
            uVar48 = 2;
          }
          else {
            func_0x00010b4d80a4();
            uVar48 = 3;
          }
          *puVar20 = 0;
          puVar20[1] = 0;
          puVar20[2] = 0;
          *(ulong *)(uVar45 + 0x18) = uVar48 | (ulong)puVar20;
        }
        else {
          puVar20 = (undefined8 *)(*(ulong *)(uVar45 + 0x18) & 0xfffffffffffffffc);
        }
        if (*(char *)((long)puVar20 + 0x17) < '\0') {
          puVar20 = (undefined8 *)*puVar20;
        }
        (**(code **)(*plVar38 + 0x30))(plVar38,uVar7,uVar9,uVar12,puVar20);
        if ((*(byte *)((long)param_1 + 0x91) & 1) != 0) {
          ppuVar41 = &PTR_PTR_1132cf8e8;
          if ((undefined **)param_4[0x10] != (undefined **)0x0) {
            ppuVar41 = (undefined **)param_4[0x10];
          }
          *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) | 0x20;
          if (param_4[0x12] == 0) {
            uVar45 = param_4[1];
            if ((uVar45 & 1) != 0) {
              uVar45 = *(ulong *)(uVar45 & 0xfffffffffffffffe);
            }
            func_0x000109312140();
            param_4[0x12] = uVar45;
          }
          FUN_1093f3a14(ppuVar41);
          if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
            if (param_4[0x10] != 0) {
              func_0x000109308014();
            }
            *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) & 0xfffffff7;
          }
        }
      }
      *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) | 4;
      uVar45 = param_4[0xf];
      if (uVar45 == 0) {
        uVar45 = param_4[1];
        if ((uVar45 & 1) != 0) {
          uVar45 = *(ulong *)(uVar45 & 0xfffffffffffffffe);
        }
        func_0x000109312438();
        param_4[0xf] = uVar45;
      }
      *(uint *)(uVar45 + 0x10) = *(uint *)(uVar45 + 0x10) | 1;
      uVar48 = *(ulong *)(uVar45 + 8);
      if ((uVar48 & 1) != 0) {
        uVar48 = *(ulong *)(uVar48 & 0xfffffffffffffffe);
      }
      func_0x00010b4bf088(uVar45 + 0xb0,&DAT_10f5262f1,6,uVar48);
      ppuVar41 = &PTR_PTR_1132d80c0;
      if (ppuStack_198 != (undefined **)0x0) {
        ppuVar41 = ppuStack_198;
      }
      func_0x00010933de64(&uStack_138,0,ppuVar41);
      FUN_1093e2c8c(param_2[1],&uStack_138);
      ppuVar28 = &PTR_PTR_1132d8098;
      if (ppuStack_190 != (undefined **)0x0) {
        ppuVar28 = ppuStack_190;
      }
      FUN_10933e3a4(&plStack_160,0,ppuVar28);
      FUN_1093e2fd0(param_2[1],&plStack_160);
      *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) | 0x40;
      pplVar43 = (long **)param_4[0x13];
      if (pplVar43 == (long **)0x0) {
        pplVar43 = (long **)param_4[1];
        if (((ulong)pplVar43 & 1) != 0) {
          pplVar43 = *(long ***)((ulong)pplVar43 & 0xfffffffffffffffe);
        }
        func_0x00010933f844();
        param_4[0x13] = (long)pplVar43;
      }
      if (&plStack_160 != pplVar43) {
        FUN_10933e4c8(pplVar43);
        FUN_10933e754(pplVar43,&plStack_160);
      }
      plVar38 = param_1 + 0x1e;
      FUN_10939fbe8();
      FUN_109312ec8(alStack_108,param_4 + 9,param_1[9] & 0xfffffffffffffffc);
      uStack_164 = *(undefined4 *)(alStack_108[0] + 0x50);
      puVar29 = (ulong *)(param_1 + 3);
      puVar39 = puVar29;
      if ((*puVar29 & 1) != 0) {
        puVar39 = (ulong *)(*puVar29 + 7);
      }
      if ((int)param_1[4] == 0) {
        ppuStack_200 = (undefined **)0x0;
      }
      else {
        ppuStack_200 = (undefined **)0x0;
        lVar36 = (long)(int)param_1[4] << 3;
        do {
          if (param_1[0x1c] == 0) break;
          uVar45 = *puVar39;
          iVar8 = *(int *)(uVar45 + 0x1c);
          switch(iVar8) {
          case 1:
            ppuVar44 = &PTR_PTR_1132d19d0;
            if ((undefined **)param_1[0xc] != (undefined **)0x0) {
              ppuVar44 = (undefined **)param_1[0xc];
            }
            FUN_1093b141c(*(undefined8 *)(uVar45 + 0x10),ppuVar44,param_1 + 0x19,param_4);
            break;
          default:
            if (iVar8 == 0x1c && ppuStack_200 != (undefined **)0x0) {
              FUN_1093b7750(*(undefined8 *)(uVar45 + 0x10),ppuStack_200,plVar38,param_4);
            }
            else if (iVar8 < 0xe) {
              if (iVar8 < 9) {
                if (iVar8 == 6) {
                  ppuVar44 = &PTR_PTR_1132d19d0;
                  if ((undefined **)param_1[0xc] != (undefined **)0x0) {
                    ppuVar44 = (undefined **)param_1[0xc];
                  }
                  FUN_1093b9ba8(*(undefined8 *)(uVar45 + 0x10),ppuVar44,param_1 + 0x19,param_4);
                }
                else if (iVar8 == 8) {
                  ppuVar44 = &PTR_PTR_1132d19d0;
                  if ((undefined **)param_1[0xc] != (undefined **)0x0) {
                    ppuVar44 = (undefined **)param_1[0xc];
                  }
                  FUN_1093be43c(*(undefined8 *)(uVar45 + 0x10),ppuVar44,param_1 + 0x19,param_4);
                }
              }
              else if (iVar8 == 9) {
                ppuVar44 = *(undefined ***)(*(long *)(uVar45 + 0x10) + 0x30);
                ppuStack_200 = &PTR_PTR_1132d70f0;
                if (ppuVar44 != (undefined **)0x0) {
                  ppuStack_200 = ppuVar44;
                }
                ppuVar44 = &PTR_PTR_1132d19d0;
                if ((undefined **)param_1[0xc] != (undefined **)0x0) {
                  ppuVar44 = (undefined **)param_1[0xc];
                }
                FUN_1093be73c(*(long *)(uVar45 + 0x10),ppuVar44,&uStack_138,plVar38,param_1 + 0x19,
                              param_4);
              }
              else if (iVar8 == 0xd) {
                ppuVar44 = &PTR_PTR_1132d19d0;
                if ((undefined **)param_1[0xc] != (undefined **)0x0) {
                  ppuVar44 = (undefined **)param_1[0xc];
                }
                FUN_1093ba430(*(undefined8 *)(uVar45 + 0x10),ppuVar44,param_1 + 0x19,param_4);
              }
            }
            else if (iVar8 < 0x13) {
              if (iVar8 == 0xe) {
                ppuVar44 = &PTR_PTR_1132d19d0;
                if ((undefined **)param_1[0xc] != (undefined **)0x0) {
                  ppuVar44 = (undefined **)param_1[0xc];
                }
                FUN_1093b9ec4(*(undefined8 *)(uVar45 + 0x10),ppuVar44,&uStack_138,param_1 + 0x19,
                              param_4);
              }
              else if (iVar8 == 0xf) {
                ppuVar44 = &PTR_PTR_1132cfc60;
                if ((undefined **)param_1[0xd] != (undefined **)0x0) {
                  ppuVar44 = (undefined **)param_1[0xd];
                }
                FUN_1093bac30(*(undefined8 *)(uVar45 + 0x10),ppuVar44,&uStack_138,param_1 + 0x19,
                              param_4);
              }
            }
            else if (iVar8 == 0x13) {
              FUN_1093be66c(*(undefined8 *)(uVar45 + 0x10),&uStack_138,param_4);
            }
            else if (iVar8 == 0x30) {
              FUN_1093ba344(&uStack_138,param_4);
            }
            else if (iVar8 == 0x36) {
              ppuVar44 = &PTR_PTR_1132d19d0;
              if ((undefined **)param_1[0xc] != (undefined **)0x0) {
                ppuVar44 = (undefined **)param_1[0xc];
              }
              FUN_1093ba830(*(undefined8 *)(uVar45 + 0x10),ppuVar44,param_1 + 0x19,param_4);
            }
            break;
          case 3:
            ppuVar44 = &PTR_PTR_1132d19d0;
            if ((undefined **)param_1[0xc] != (undefined **)0x0) {
              ppuVar44 = (undefined **)param_1[0xc];
            }
            FUN_1093b4f98(*(undefined8 *)(uVar45 + 0x10),ppuVar44,param_1 + 0x19,param_4);
            break;
          case 4:
            ppuVar44 = &PTR_PTR_1132d19d0;
            if ((undefined **)param_1[0xc] != (undefined **)0x0) {
              ppuVar44 = (undefined **)param_1[0xc];
            }
            FUN_1093b7910(*(undefined8 *)(uVar45 + 0x10),ppuVar44,param_1 + 0x19,param_4);
            break;
          case 5:
            ppuVar44 = &PTR_PTR_1132d19d0;
            if ((undefined **)param_1[0xc] != (undefined **)0x0) {
              ppuVar44 = (undefined **)param_1[0xc];
            }
            FUN_1093b7e44(*(undefined8 *)(uVar45 + 0x10),ppuVar44,&uStack_138,param_1 + 0x19,param_4
                         );
            break;
          case 7:
            FUN_1093bd7bc(*(undefined8 *)(uVar45 + 0x10),&uStack_138,plVar38,&uStack_164,param_4);
            break;
          case 10:
            ppuVar44 = &PTR_PTR_1132d19d0;
            if ((undefined **)param_1[0xc] != (undefined **)0x0) {
              ppuVar44 = (undefined **)param_1[0xc];
            }
            FUN_1093b4890(*(undefined8 *)(uVar45 + 0x10),ppuVar44,param_1 + 0x19,param_4);
            break;
          case 0x10:
            FUN_1093b75c4(*(undefined8 *)(uVar45 + 0x10),plVar38,param_4);
            break;
          case 0x14:
            ppuVar44 = &PTR_PTR_1132d19d0;
            if ((undefined **)param_1[0xc] != (undefined **)0x0) {
              ppuVar44 = (undefined **)param_1[0xc];
            }
            FUN_1093b8728(*(undefined8 *)(uVar45 + 0x10),ppuVar44,&uStack_138,param_1 + 0x19,param_4
                         );
            break;
          case 0x16:
            FUN_1093b76c8(*(undefined8 *)(uVar45 + 0x10),param_4);
            break;
          case 0x17:
            FUN_1093b709c(*(undefined8 *)(uVar45 + 0x10),&uStack_138,plVar38,0,param_4);
            break;
          case 0x1e:
            FUN_1093b1a18(*(undefined8 *)(uVar45 + 0x10),param_1 + 0x19,param_4);
            break;
          case 0x1f:
            FUN_1093b2180(*(undefined8 *)(uVar45 + 0x10),param_1 + 0x19,param_4);
            break;
          case 0x21:
            FUN_1093b3504(*(undefined8 *)(uVar45 + 0x10),param_1 + 0x19,param_4);
            break;
          case 0x22:
            FUN_1093b74b4(*(undefined8 *)(uVar45 + 0x10),plVar38,param_4);
            break;
          case 0x24:
            FUN_1093b5a74(*(undefined8 *)(uVar45 + 0x10),plVar38,param_4);
            break;
          case 0x28:
            FUN_1093c1520(uStack_170,plVar38,param_4);
            break;
          case 0x2b:
            FUN_1093b3df8(*(undefined8 *)(uVar45 + 0x10),&uStack_138,param_1 + 0x19,param_4);
            break;
          case 0x2c:
            FUN_1093b3fd4(*(undefined8 *)(uVar45 + 0x10),param_1 + 0x19,param_4);
            break;
          case 0x2d:
            FUN_1093b4130(*(undefined8 *)(uVar45 + 0x10),param_1 + 0x19,param_4);
          }
          puVar39 = puVar39 + 1;
          lVar36 = lVar36 + -8;
        } while (lVar36 != 0);
      }
      if (param_4 != plVar38) {
        FUN_10930f010(plVar38);
        FUN_10930f9c4(plVar38,param_4);
      }
      FUN_1093c2248(param_4);
      FUN_1093c36b8(param_2[1],param_4);
      *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) | 0x40;
      ppuVar44 = (undefined **)param_4[0x13];
      if (ppuVar44 == (undefined **)0x0) {
        ppuVar44 = (undefined **)param_4[1];
        if (((ulong)ppuVar44 & 1) != 0) {
          ppuVar44 = *(undefined ***)((ulong)ppuVar44 & 0xfffffffffffffffe);
        }
        func_0x00010933f844();
        param_4[0x13] = (long)ppuVar44;
      }
      if (ppuVar28 != ppuVar44) {
        FUN_10933e4c8(ppuVar44);
        FUN_10933e754(ppuVar44,ppuVar28);
      }
      puVar39 = puVar29;
      if ((param_1[3] & 1U) != 0) {
        puVar39 = (ulong *)(param_1[3] + 7);
      }
      if ((int)param_1[4] == 0) {
        bVar49 = false;
      }
      else {
        bVar49 = false;
        plVar46 = plVar38 + 0x17;
        lVar36 = (long)(int)param_1[4] << 3;
        do {
          uVar45 = *puVar39;
          iVar8 = *(int *)(uVar45 + 0x1c);
          if (iVar8 < 0x2e) {
            if (iVar8 < 0x1a) {
              if (iVar8 == 0xc) {
                FUN_1093ba258(ppuVar41,param_4);
              }
              else if (iVar8 == 0x11) {
                FUN_1093bb130(*(undefined8 *)(uVar45 + 0x10),param_1 + 0x16,*param_2,
                              *(undefined4 *)(param_2 + 2),*(undefined4 *)((long)param_2 + 0x14),
                              *(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                              *(undefined4 *)(param_2 + 4),auStack_1d8,plVar46,param_4);
LAB_1093a1164:
                bVar49 = true;
              }
              else {
LAB_1093a10c0:
                if (iVar8 == 0x1b && ppuStack_200 != (undefined **)0x0) {
                  FUN_1093c0224(*(undefined8 *)(uVar45 + 0x10),ppuVar41,ppuStack_200,plVar46,param_4
                               );
                  goto LAB_1093a1164;
                }
                if (iVar8 == 0x35) {
LAB_1093a1134:
                  FUN_1093b709c(*(undefined8 *)(uVar45 + 0x10),ppuVar41,plVar46,iVar8 != 0x35,
                                param_4);
                  goto LAB_1093a1164;
                }
                if (iVar8 == 0x3e && ppuStack_200 != (undefined **)0x0) {
                  FUN_1093b7230(*(undefined8 *)(uVar45 + 0x10),ppuStack_200,plVar46,param_4);
                  goto LAB_1093a1164;
                }
                switch(iVar8) {
                case 0x20:
                  FUN_1093b2c28(*(undefined8 *)(uVar45 + 0x10),param_4);
                  break;
                case 0x23:
                  ppuVar28 = &PTR_PTR_1132d7f38;
                  if (ppuStack_188 != (undefined **)0x0) {
                    ppuVar28 = ppuStack_188;
                  }
                  ppuVar44 = &PTR_PTR_1132cfc60;
                  if ((undefined **)param_1[0xd] != (undefined **)0x0) {
                    ppuVar44 = (undefined **)param_1[0xd];
                  }
                  FUN_1093c0b50(*(undefined8 *)(uVar45 + 0x10),ppuVar28,ppuVar41,ppuVar44,param_4);
                  break;
                case 0x25:
                  FUN_1093b64c8(*(undefined8 *)(uVar45 + 0x10),param_2[1],ppuVar41,plVar46,param_4);
                  goto LAB_1093a1164;
                case 0x27:
                  FUN_1093c13b4(*(undefined8 *)(uVar45 + 0x10),param_4);
                  break;
                case 0x29:
                  FUN_1093c18a8(*(undefined8 *)(uVar45 + 0x10),ppuVar41,param_1,param_4);
                  break;
                case 0x2a:
                  FUN_1093c1aec(*(undefined8 *)(uVar45 + 0x10),param_4);
                  break;
                case 0x2f:
                  ppuVar28 = &PTR_PTR_1132cfc60;
                  if ((undefined **)param_1[0xd] != (undefined **)0x0) {
                    ppuVar28 = (undefined **)param_1[0xd];
                  }
                  FUN_1093bac30(*(undefined8 *)(uVar45 + 0x10),ppuVar28,ppuVar41,param_1 + 0x19,
                                param_4);
                  break;
                case 0x31:
                  FUN_1093b455c(*(undefined8 *)(uVar45 + 0x10),param_4);
                  break;
                case 0x32:
                  FUN_1093b473c(*(undefined8 *)(uVar45 + 0x10),ppuVar41,param_2,param_4);
                  break;
                case 0x33:
                  goto LAB_1093a1134;
                default:
                  if (iVar8 == 0x3d) {
                    FUN_1093b74b4(*(undefined8 *)(uVar45 + 0x10),plVar46,param_4);
                    goto LAB_1093a1164;
                  }
                case 0x21:
                case 0x22:
                case 0x24:
                case 0x26:
                case 0x28:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
                case 0x30:
                  if ((iVar8 == 0x38) && (ppuStack_200 != (undefined **)0x0)) {
                    FUN_1093c2050(*(undefined8 *)(uVar45 + 0x10),ppuStack_200,param_4);
                  }
                  else if (iVar8 == 0x3b) {
                    FUN_1093bd688(*(undefined8 *)(uVar45 + 0x10),param_4);
                  }
                  else if (iVar8 == 0x34) {
                    FUN_1093c1b68(*(undefined8 *)(uVar45 + 0x10),param_4);
                  }
                }
              }
            }
            else {
              if (iVar8 != 0x1a) {
                if (iVar8 != 0x1d) goto LAB_1093a10c0;
                FUN_1093b75c4(*(undefined8 *)(uVar45 + 0x10),plVar46,param_4);
                goto LAB_1093a1164;
              }
              FUN_1093bffe8(*(undefined8 *)(uVar45 + 0x10),param_1,param_4);
            }
          }
          else {
            if (0x39 < iVar8) {
              if (iVar8 == 0x3a) {
                FUN_1093bd530(*(undefined8 *)(uVar45 + 0x10),plVar46,param_4);
              }
              else {
                if (iVar8 != 0x3c) goto LAB_1093a10c0;
                FUN_1093c1520(uStack_170,plVar46,param_4);
              }
              goto LAB_1093a1164;
            }
            if (iVar8 == 0x2e) {
              FUN_1093ba344(ppuVar41,param_4);
            }
            else {
              if (iVar8 != 0x39) goto LAB_1093a10c0;
              if (param_1[0x1c] != 0) {
                FUN_1093bd7bc(*(undefined8 *)(uVar45 + 0x10),ppuVar41,plVar46,&uStack_164,param_4);
                goto LAB_1093a1164;
              }
            }
          }
          puVar39 = puVar39 + 1;
          lVar36 = lVar36 + -8;
        } while (lVar36 != 0);
      }
      FUN_109312ec8(alStack_108,plVar38 + 9,param_1[9] & 0xfffffffffffffffc);
      *(undefined4 *)(alStack_108[0] + 0x50) = uStack_164;
      *(uint *)(alStack_108[0] + 0x30) = *(uint *)(alStack_108[0] + 0x30) | 8;
      if ((bVar49) && (plVar38 = plVar38 + 0x17, param_4 != plVar38)) {
        FUN_10930f010(plVar38);
        FUN_10930f9c4(plVar38,param_4);
      }
      uVar45 = param_4[3];
      puVar39 = (ulong *)(param_4 + 3);
      if ((uVar45 & 1) != 0) {
        puVar39 = (ulong *)(uVar45 + 7);
      }
      if ((int)param_4[4] != 0) {
        puVar6 = puVar39 + (int)param_4[4];
        do {
          uVar45 = *puVar39;
          if (*(int *)(uVar45 + 0x94) != 1) {
            func_0x000107c30320(uVar45 + 0x90,0x10500580020,0);
          }
          uVar48 = *(ulong *)(uVar45 + 0x48);
          puVar47 = (ulong *)(uVar45 + 0x48);
          if ((uVar48 & 1) != 0) {
            puVar47 = (ulong *)(uVar48 + 7);
          }
          if (*(int *)(uVar45 + 0x50) != 0) {
            lVar36 = (long)*(int *)(uVar45 + 0x50) << 3;
            do {
              if (*(int *)(*puVar47 + 0x94) != 1) {
                func_0x000107c30320(*puVar47 + 0x90,0x10500580020,0);
              }
              puVar47 = puVar47 + 1;
              lVar36 = lVar36 + -8;
            } while (lVar36 != 0);
          }
          puVar39 = puVar39 + 1;
        } while (puVar39 != puVar6);
      }
      if ((param_1[3] & 1U) != 0) {
        puVar29 = (ulong *)(param_1[3] + 7);
      }
      if ((int)param_1[4] != 0) {
        lVar36 = (long)(int)param_1[4] << 3;
        do {
          iVar8 = *(int *)(*puVar29 + 0x1c);
          if (iVar8 == 0x15) {
            func_0x0001093c08b8(param_4);
          }
          else if (iVar8 == 0x12) {
            func_0x0001093c0928(*(undefined8 *)(*puVar29 + 0x10),param_4);
          }
          puVar29 = puVar29 + 1;
          lVar36 = lVar36 + -8;
        } while (lVar36 != 0);
      }
      FUN_10933e438(&plStack_160);
      puVar22 = &uStack_138;
      FUN_10933df00();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) | 2;
      uVar45 = param_4[0xe];
      if (uVar45 == 0) {
        uVar45 = param_4[1];
        if ((uVar45 & 1) != 0) {
          uVar45 = *(ulong *)(uVar45 & 0xfffffffffffffffe);
        }
        func_0x000109312028();
        param_4[0xe] = uVar45;
      }
      *(double *)(uVar45 + 0x50) = (double)((long)plVar19 - (long)plVar18) / 1000000000.0;
      *(double *)(uVar45 + 0x58) = (double)((long)plStack_218 - (long)plVar19) / 1000000000.0;
      *(double *)(uVar45 + 0x60) = (double)((long)plVar42 - (long)plStack_218) / 1000000000.0;
      *(double *)(uVar45 + 0x68) = (double)((long)puVar22 - (long)plVar42) / 1000000000.0;
      *(double *)(uVar45 + 0x70) = (double)((long)puVar22 - (long)plVar18) / 1000000000.0;
      *(uint *)(uVar45 + 0x10) = *(uint *)(uVar45 + 0x10) | 0x3e;
LAB_1093a14b4:
      if (pfStack_1f0 != (float *)0x0) {
        pfStack_1e8 = pfStack_1f0;
        __ZdlPv();
      }
      puVar23 = auStack_1d8;
      FUN_10933fb14(puVar23);
      return puVar23;
    }
    lVar40 = lVar37 + uVar15 * 0x228;
    lVar36 = uVar45 * 0x228 + lVar25 * -8 + 0x228;
    do {
      FUN_1093a1ee0(lVar37);
      lVar37 = lVar37 + 0x228;
      lVar36 = lVar36 + -0x228;
    } while (lVar36 != 0);
    param_1[1] = lVar40;
  }
LAB_10939fdcc:
  uVar45 = param_1[3];
  lVar36 = *param_1;
LAB_10939fdd4:
  return (undefined1 *)(lVar36 + uVar45 * 0x228);
}



/* Entry: 10939fe04; end: 1093a16b7;  */

/* WARNING: Removing unreachable block (ram,0x0001093a00c8) */
/* WARNING: Removing unreachable block (ram,0x0001093a0388) */

void FUN_10939fe04(long param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  byte bVar10;
  byte bVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined **ppuVar17;
  undefined4 *puVar18;
  ulong uVar19;
  uint uVar20;
  float *pfVar21;
  undefined8 *puVar22;
  undefined **ppuVar23;
  ulong uVar24;
  int iVar25;
  undefined *puVar26;
  int iVar27;
  long lVar28;
  ulong *puVar29;
  long lVar30;
  ulong uVar31;
  ulong *puVar32;
  undefined **ppuVar33;
  long *plVar34;
  ulong uVar35;
  long *plVar36;
  long **pplVar37;
  undefined **ppuVar38;
  ulong uVar39;
  ulong *puVar40;
  long lVar41;
  bool bVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  long *plStack_1a8;
  undefined **ppuStack_190;
  float *pfStack_180;
  float *pfStack_178;
  undefined1 auStack_168 [8];
  undefined **ppuStack_160;
  uint uStack_158;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  long lStack_110;
  undefined4 uStack_100;
  undefined4 uStack_f4;
  long *plStack_f0;
  long *plStack_e8;
  byte bStack_d9;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 *puStack_b0;
  long alStack_98 [5];
  
  lVar14 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))(*(long **)(param_1 + 0xa8),param_2);
  FUN_10933fa08(auStack_168,0,param_3);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar6 = *(undefined4 *)((long)param_2 + 0x14);
  uStack_158 = uStack_158 | 1;
  if (ppuStack_128 == (undefined **)0x0) {
    ppuVar33 = ppuStack_160;
    if (((ulong)ppuStack_160 & 1) != 0) {
      ppuVar33 = *(undefined ***)((ulong)ppuStack_160 & 0xfffffffffffffffe);
    }
    func_0x00010933f890();
    ppuStack_128 = ppuVar33;
  }
  FUN_1093e2a74(uVar4,uVar6,1,ppuStack_128);
  *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 0x10;
  ppuVar33 = *(undefined ***)(param_4 + 0x88);
  if (ppuVar33 == (undefined **)0x0) {
    ppuVar33 = *(undefined ***)(param_4 + 8);
    if (((ulong)ppuVar33 & 1) != 0) {
      ppuVar33 = *(undefined ***)((ulong)ppuVar33 & 0xfffffffffffffffe);
    }
    func_0x00010933f890();
    *(undefined ***)(param_4 + 0x88) = ppuVar33;
  }
  ppuVar23 = &PTR_PTR_1132d80c0;
  if (ppuStack_128 != (undefined **)0x0) {
    ppuVar23 = ppuStack_128;
  }
  if (ppuVar23 != ppuVar33) {
    FUN_10933df90(ppuVar33);
    FUN_10933e2a4(ppuVar33,ppuVar23);
  }
  *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 0x40;
  ppuVar33 = *(undefined ***)(param_4 + 0x98);
  if (ppuVar33 == (undefined **)0x0) {
    ppuVar33 = *(undefined ***)(param_4 + 8);
    if (((ulong)ppuVar33 & 1) != 0) {
      ppuVar33 = *(undefined ***)((ulong)ppuVar33 & 0xfffffffffffffffe);
    }
    func_0x00010933f844();
    *(undefined ***)(param_4 + 0x98) = ppuVar33;
  }
  ppuVar23 = &PTR_PTR_1132d8098;
  if (ppuStack_120 != (undefined **)0x0) {
    ppuVar23 = ppuStack_120;
  }
  if (ppuVar23 != ppuVar33) {
    FUN_10933e4c8(ppuVar33);
    FUN_10933e754(ppuVar33,ppuVar23);
  }
  FUN_109367d10(&pfStack_180,6);
  pfVar21 = (float *)param_2[1];
  fVar43 = 1.0 / (-(pfVar21[1] * pfVar21[3]) + pfVar21[4] * *pfVar21);
  *pfStack_180 = pfVar21[4] * fVar43;
  pfStack_180[1] = -(fVar43 * pfVar21[1]);
  pfStack_180[2] = fVar43 * (-(pfVar21[2] * pfVar21[4]) + pfVar21[5] * pfVar21[1]);
  pfStack_180[3] = -(fVar43 * pfVar21[3]);
  pfStack_180[4] = fVar43 * *pfVar21;
  pfStack_180[5] = fVar43 * (-(*pfVar21 * pfVar21[5]) + pfVar21[3] * pfVar21[2]);
  FUN_1093c36b8(pfStack_180,param_4);
  *(undefined4 *)(param_4 + 0xa0) = *(undefined4 *)(param_2 + 2);
  uVar20 = *(uint *)(param_4 + 0x10);
  *(uint *)(param_4 + 0x10) = uVar20 | 0x80;
  *(undefined4 *)(param_4 + 0xa4) = *(undefined4 *)((long)param_2 + 0x14);
  *(uint *)(param_4 + 0x10) = uVar20 | 0x180;
  *(undefined4 *)(param_4 + 0xa8) = *(undefined4 *)((long)param_2 + 0x24);
  *(uint *)(param_4 + 0x10) = uVar20 | 0x380;
  *(undefined4 *)(param_4 + 0xac) = *(undefined4 *)(param_2 + 5);
  *(uint *)(param_4 + 0x10) = uVar20 | 0x780;
  plVar15 = *(long **)(param_1 + 0xa8);
  (**(code **)(*plVar15 + 0x50))();
  *(int *)(param_4 + 0xb0) = (int)plVar15;
  *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 0x800;
  plVar15 = *(long **)(param_1 + 0xa8);
  (**(code **)(*plVar15 + 0x50))();
  if ((int)plVar15 != 2) goto LAB_1093a14b4;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar41 = lStack_110;
  if (((byte)uStack_158 >> 3 & 1) == 0) {
    lVar41 = lVar14 / 1000;
  }
  __ZNSt3__19to_stringEy(&uStack_c8,lVar41);
  *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 1;
  uVar19 = *(ulong *)(param_4 + 8);
  if ((uVar19 & 1) != 0) {
    uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(param_4 + 0x68,&uStack_c8,uVar19);
  puVar22 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  puVar16 = (undefined8 *)*puVar22;
  uVar19 = puVar22[1];
  if (-1 < (char)*(byte *)((long)puVar22 + 0x17)) {
    puVar16 = puVar22;
    uVar19 = (ulong)*(byte *)((long)puVar22 + 0x17);
  }
  lVar30 = param_4 + 0x48;
  func_0x000107c27d5c(lVar30,puVar16,uVar19,0);
  fVar43 = 0.0;
  if (lVar30 != 0) {
    if ((*(byte *)(lVar30 + 0x30) >> 1 & 1) != 0) {
      fVar44 = (float)(lVar41 - *(long *)(lVar30 + 0x40)) / 1e+06;
      *(float *)(param_4 + 0xb4) = fVar44;
      *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 0x1000;
      if ((*(uint *)(param_1 + 0x10) >> 10 & 1) == 0) {
        if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
          fVar43 = *(float *)(param_1 + 0x80);
        }
      }
      else {
        fVar43 = 0.0;
        if (0.0 < *(float *)(param_1 + 0x8c)) {
          fVar43 = 0.5;
          if (fVar44 < 0.5) {
            fVar43 = fVar44;
          }
          fVar43 = 1.0 / fVar43;
          if (fVar44 <= 0.008333334) {
            fVar43 = 119.99999;
          }
          fVar43 = 1.0 / (fVar43 / (*(float *)(param_1 + 0x8c) * 6.2831855) + 1.0);
        }
        fVar43 = 1.0 - fVar43;
      }
    }
    if ((*(byte *)(lVar30 + 0x30) & 1) != 0) {
      lVar30 = *(long *)(lVar30 + 0x38);
      plVar34 = *(long **)(param_1 + 0xa8);
      uVar46 = *(undefined8 *)(lVar30 + 0x20);
      uVar4 = *(undefined4 *)(lVar30 + 0x28);
      *(uint *)(lVar30 + 0x10) = *(uint *)(lVar30 + 0x10) | 1;
      puVar16 = *(undefined8 **)(lVar30 + 8);
      if (((ulong)puVar16 & 1) != 0) {
        puVar16 = *(undefined8 **)((ulong)puVar16 & 0xfffffffffffffffe);
      }
      if (((uint)*(ulong *)(lVar30 + 0x18) >> 1 & 1) == 0) {
        if (puVar16 == (undefined8 *)0x0) {
          puVar16 = (undefined8 *)0x18;
          __Znwm();
          uVar19 = 2;
        }
        else {
          func_0x00010b4d80a4();
          uVar19 = 3;
        }
        *puVar16 = 0;
        puVar16[1] = 0;
        puVar16[2] = 0;
        *(ulong *)(lVar30 + 0x18) = uVar19 | (ulong)puVar16;
      }
      else {
        puVar16 = (undefined8 *)(*(ulong *)(lVar30 + 0x18) & 0xfffffffffffffffc);
      }
      if (*(char *)((long)puVar16 + 0x17) < '\0') {
        puVar16 = (undefined8 *)*puVar16;
      }
      uStack_c8 = 1;
      uVar46 = NEON_rev64(uVar46,4);
      uStack_c4 = (undefined4)uVar46;
      uStack_c0 = (undefined4)((ulong)uVar46 >> 0x20);
      uStack_b8 = 1;
      uStack_bc = uVar4;
      puStack_b0 = puVar16;
      (**(code **)(*plVar34 + 0x58))(plVar34,&uStack_c8);
    }
  }
  ppuVar23 = *(undefined ***)(param_1 + 0x58);
  ppuVar33 = &PTR_PTR_1132d18a0;
  if (ppuVar23 != (undefined **)0x0) {
    ppuVar33 = ppuVar23;
  }
  if ((*(byte *)(ppuVar33 + 2) >> 6 & 1) != 0) {
    ppuVar33 = &PTR_PTR_1132d80c0;
    if (ppuStack_128 != (undefined **)0x0) {
      ppuVar33 = ppuStack_128;
    }
    func_0x00010933de64(&uStack_c8,0,ppuVar33);
    FUN_1093e2c8c(param_2[1],&uStack_c8);
    ppuVar33 = &PTR_PTR_1132d18a0;
    if (*(undefined ***)(param_1 + 0x58) != (undefined **)0x0) {
      ppuVar33 = *(undefined ***)(param_1 + 0x58);
    }
    ppuVar23 = &PTR_PTR_1132d15f8;
    if ((undefined **)ppuVar33[9] != (undefined **)0x0) {
      ppuVar23 = (undefined **)ppuVar33[9];
    }
    FUN_1093f4fc0(&plStack_f0,param_2,&uStack_c8,ppuVar23);
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x28))(*(long **)(param_1 + 0xa8),&plStack_f0);
    if (plStack_f0 != (long *)0x0) {
      plStack_e8 = plStack_f0;
      __ZdlPv();
    }
    FUN_10933df00(&uStack_c8);
    ppuVar23 = *(undefined ***)(param_1 + 0x58);
  }
  ppuVar33 = &PTR_PTR_1132d18a0;
  if (ppuVar23 != (undefined **)0x0) {
    ppuVar33 = ppuVar23;
  }
  if ((*(byte *)(ppuVar33 + 2) >> 4 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x20))(*(long **)(param_1 + 0xa8),param_4,param_2);
  }
  ppuVar33 = &PTR_PTR_1132d1970;
  if (*(undefined ***)(param_1 + 0x70) != (undefined **)0x0) {
    ppuVar33 = *(undefined ***)(param_1 + 0x70);
  }
  if (*(char *)((long)ppuVar33 + 0x32) == '\x01') {
    ppuVar33 = &PTR_PTR_1132cfaf0;
    if (*(undefined ***)(param_4 + 0x78) != (undefined **)0x0) {
      ppuVar33 = *(undefined ***)(param_4 + 0x78);
    }
    if ((*(byte *)(ppuVar33 + 2) >> 3 & 1) == 0) {
      FUN_10937e740(&uStack_c8,&UNK_10f568dad);
      FUN_109388c6c(1,&UNK_10f568d30,&UNK_10f568da9,0xf3,&uStack_c8);
      goto LAB_1093a14b4;
    }
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x38))
              (*(long **)(param_1 + 0xa8),ppuVar33[0x19],param_2);
  }
  FUN_109312ec8(&uStack_c8,param_4 + 0x48,*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  lVar30 = CONCAT44(uStack_c4,uStack_c8);
  *(long *)(lVar30 + 0x40) = lVar41;
  uVar20 = *(uint *)(lVar30 + 0x30);
  *(uint *)(lVar30 + 0x30) = uVar20 | 2;
  if (((*(byte *)(param_1 + 0x10) >> 6 & 1) == 0) || ((uVar20 >> 2 & 1) == 0)) {
LAB_1093a0434:
    plStack_1a8 = *(long **)(param_1 + 0xa8);
    (**(code **)(*plStack_1a8 + 0x40))(fVar43);
    *(long *)(lVar30 + 0x48) = lVar41;
    *(uint *)(lVar30 + 0x30) = *(uint *)(lVar30 + 0x30) | 4;
    __ZNSt3__16chrono12steady_clock3nowEv();
    plVar34 = *(long **)(param_1 + 0xa8);
    (**(code **)(*plVar34 + 0x48))(plVar34,param_1 + 200);
    ppuVar33 = &PTR_PTR_1132d19d0;
    if (*(undefined ***)(param_1 + 0x60) != (undefined **)0x0) {
      ppuVar33 = *(undefined ***)(param_1 + 0x60);
    }
    if (*(char *)((long)ppuVar33 + 0x12) < '\0') {
      plVar34 = (long *)(param_1 + 200);
      FUN_1093e96e8(&plStack_f0,plVar34,ppuVar33[0x1a]);
      uVar20 = (uint)(char)bStack_d9;
      plVar36 = plStack_e8;
      if (-1 < (int)uVar20) {
        plVar36 = (long *)(ulong)bStack_d9;
      }
      if (plVar36 != (long *)0x0) {
        uVar19 = param_1 + 200;
        func_0x000107c31944(uVar19,&plStack_f0);
        uVar31 = *(ulong *)(param_1 + 0xd0);
        if (uVar31 != 0) {
          uVar35 = uVar31 - 1;
          if ((uVar31 & uVar35) == 0) {
            uVar39 = uVar35 & uVar19;
          }
          else {
            uVar39 = uVar19;
            if (uVar31 <= uVar19) {
              uVar39 = 0;
              if (uVar31 != 0) {
                uVar39 = uVar19 / uVar31;
              }
              uVar39 = uVar19 - uVar39 * uVar31;
            }
          }
          plVar34 = *(long **)(*(long *)(param_1 + 200) + uVar39 * 8);
          if (plVar34 != (long *)0x0) {
            for (plVar34 = (long *)*plVar34; plVar34 != (long *)0x0; plVar34 = (long *)*plVar34) {
              uVar24 = plVar34[1];
              if (uVar24 == uVar19) {
                uVar24 = param_1 + 200;
                func_0x000104c4fbc4(uVar24,plVar34 + 2,&plStack_f0);
                if ((uVar24 & 1) != 0) {
                  FUN_109312ec8(&uStack_c8,param_4 + 0x48,
                                *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
                  lVar41 = CONCAT44(uStack_c4,uStack_c8);
                  *(uint *)(lVar41 + 0x30) = *(uint *)(lVar41 + 0x30) | 1;
                  uVar19 = *(ulong *)(lVar41 + 0x38);
                  if (uVar19 == 0) {
                    uVar19 = *(ulong *)(lVar41 + 0x28);
                    if ((uVar19 & 1) != 0) {
                      uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
                    }
                    func_0x000109312140();
                    *(ulong *)(lVar41 + 0x38) = uVar19;
                  }
                  uVar20 = *(uint *)(uVar19 + 0x10);
                  uVar45 = plVar34[6];
                  uVar46 = plVar34[5];
                  *(int *)(uVar19 + 0x20) = (int)plVar34[6];
                  *(ulong *)(uVar19 + 0x24) =
                       CONCAT44((int)((ulong)uVar45 >> 0x20),(int)((ulong)uVar46 >> 0x20));
                  *(uint *)(uVar19 + 0x10) = uVar20 | 0xe;
                  uVar46 = plVar34[8];
                  iVar5 = *(int *)(plVar34 + 5);
                  iVar7 = *(int *)((long)plVar34 + 0x2c);
                  iVar25 = *(int *)(plVar34 + 6);
                  iVar8 = *(int *)((long)plVar34 + 0x34);
                  if (*(uint *)(plVar34 + 7) < 5) {
                    iVar27 = *(int *)(&UNK_10dfc8c48 + (ulong)*(uint *)(plVar34 + 7) * 4);
                  }
                  else {
                    iVar27 = 1;
                  }
                  *(uint *)(uVar19 + 0x10) = uVar20 | 0xf;
                  uVar31 = *(ulong *)(uVar19 + 8);
                  if ((uVar31 & 1) != 0) {
                    uVar31 = *(ulong *)(uVar31 & 0xfffffffffffffffe);
                  }
                  plVar34 = (long *)(uVar19 + 0x18);
                  func_0x00010b4bf088(plVar34,uVar46,(long)(iVar7 * iVar5 * iVar25 * iVar8 * iVar27)
                                      ,uVar31);
                  uVar20 = (uint)bStack_d9;
                  goto LAB_1093a0828;
                }
              }
              else {
                if ((uVar31 & uVar35) == 0) {
                  uVar24 = uVar24 & uVar35;
                }
                else if (uVar31 <= uVar24) {
                  uVar12 = 0;
                  if (uVar31 != 0) {
                    uVar12 = uVar24 / uVar31;
                  }
                  uVar24 = uVar24 - uVar12 * uVar31;
                }
                if (uVar24 != uVar39) break;
              }
            }
          }
        }
        FUN_109262df8(&UNK_10f639994);
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1093a0768);
        (*pcVar13)();
      }
LAB_1093a0828:
      if ((uVar20 >> 7 & 1) != 0) {
        __ZdlPv();
        plVar34 = plStack_f0;
      }
    }
  }
  else {
    lVar28 = *(long *)(lVar30 + 0x48);
    plStack_1a8 = (long *)(param_1 + 0xf0);
    FUN_10939fbe8();
    lVar28 = lVar41 - lVar28;
    ppuVar33 = &PTR_PTR_1132d16c8;
    if (*(undefined ***)(param_1 + 0x78) != (undefined **)0x0) {
      ppuVar33 = *(undefined ***)(param_1 + 0x78);
    }
    fVar43 = 0.0;
    if (((*(uint *)(ppuVar33 + 2) >> 1 & 1) != 0) && ((long)ppuVar33[7] <= lVar28))
    goto LAB_1093a0434;
    if (((*(uint *)(ppuVar33 + 2) & 1) != 0) && ((long)ppuVar33[6] <= lVar28)) {
      puVar26 = ppuVar33[3];
      ppuVar23 = ppuVar33 + 3;
      if (((ulong)puVar26 & 1) != 0) {
        ppuVar23 = (undefined **)(puVar26 + 7);
      }
      if (*(int *)(ppuVar33 + 4) != 0) {
        ppuVar33 = ppuVar23 + *(int *)(ppuVar33 + 4);
        do {
          puVar26 = *ppuVar23;
          plVar34 = plStack_1a8 + 0x1a;
          if ((plStack_1a8[0x1a] & 1U) != 0) {
            plVar34 = (long *)(plStack_1a8[0x1a] + 7);
          }
          iVar5 = (int)plStack_1a8[0x1b];
          if ((*(uint *)(puVar26 + 0x10) & 1) == 0) {
            iVar25 = 0;
            if (iVar5 != 0) {
              lVar28 = (long)iVar5 << 3;
              do {
                if ((*(char *)(*plVar34 + 0x13c) == '\x01') &&
                   (((*(uint *)(puVar26 + 0x10) >> 2 & 1) == 0 ||
                    (*(float *)(puVar26 + 0x24) < *(float *)(*plVar34 + 0x134))))) {
                  iVar25 = iVar25 + 1;
                }
                plVar34 = plVar34 + 1;
                lVar28 = lVar28 + -8;
              } while (lVar28 != 0);
            }
            if (iVar25 < *(int *)(puVar26 + 0x20)) goto LAB_1093a0434;
          }
          else {
            iVar25 = 0;
            if (iVar5 != 0) {
              plVar36 = plVar34 + iVar5;
              do {
                lVar28 = *plVar34;
                if (*(char *)(lVar28 + 0x13c) == '\x01') {
                  uVar19 = *(ulong *)(lVar28 + 0x48);
                  puVar32 = (ulong *)(lVar28 + 0x48);
                  if ((uVar19 & 1) != 0) {
                    puVar32 = (ulong *)(uVar19 + 7);
                  }
                  if (*(int *)(lVar28 + 0x50) != 0) {
                    lVar28 = (long)*(int *)(lVar28 + 0x50) << 3;
                    do {
                      uVar19 = *puVar32;
                      if ((*(ulong *)(uVar19 + 0xb0) & 3) == 0) {
                        ppuVar38 = ppuRam00000001132d06b0;
                        if (ppuRam00000001132d06b0 == (undefined **)0x0) {
                          ppuVar38 = &PTR_DAT_1132d0698;
                          func_0x00010b4befb0();
                        }
                      }
                      else {
                        ppuVar38 = (undefined **)(*(ulong *)(uVar19 + 0xb0) & 0xfffffffffffffffc);
                      }
                      puVar29 = (ulong *)(*(ulong *)(puVar26 + 0x18) & 0xfffffffffffffffc);
                      bVar10 = *(byte *)((long)ppuVar38 + 0x17);
                      puVar1 = ppuVar38[1];
                      if (-1 < (char)bVar10) {
                        puVar1 = (undefined *)(ulong)bVar10;
                      }
                      bVar11 = *(byte *)((long)puVar29 + 0x17);
                      puVar2 = (undefined *)puVar29[1];
                      if (-1 < (char)bVar11) {
                        puVar2 = (undefined *)(ulong)bVar11;
                      }
                      if (puVar1 == puVar2) {
                        ppuVar17 = (undefined **)*ppuVar38;
                        if (-1 < (char)bVar10) {
                          ppuVar17 = ppuVar38;
                        }
                        puVar3 = (ulong *)*puVar29;
                        if (-1 < (char)bVar11) {
                          puVar3 = puVar29;
                        }
                        _memcmp(ppuVar17,puVar3);
                        if ((((int)ppuVar17 == 0) && (*(char *)(uVar19 + 0x13c) == '\x01')) &&
                           ((((byte)puVar26[0x10] >> 2 & 1) == 0 ||
                            (*(float *)(puVar26 + 0x24) < *(float *)(uVar19 + 0x134))))) {
                          iVar25 = iVar25 + 1;
                        }
                      }
                      puVar32 = puVar32 + 1;
                      lVar28 = lVar28 + -8;
                    } while (lVar28 != 0);
                  }
                }
                plVar34 = plVar34 + 1;
              } while (plVar34 != plVar36);
            }
            if (iVar25 < *(int *)(puVar26 + 0x20)) goto LAB_1093a0434;
          }
          ppuVar23 = ppuVar23 + 1;
        } while (ppuVar23 != ppuVar33);
      }
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    plVar34 = (long *)(param_1 + 200);
    func_0x0001093a2140();
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (((*(byte *)(param_1 + 0x90) & 1) != 0) || (*(char *)(param_1 + 0x91) == '\x01')) {
    uVar4 = *(undefined4 *)((long)param_2 + 0x24);
    uVar6 = *(undefined4 *)(param_2 + 5);
    uVar9 = *(undefined4 *)(param_2 + 3);
    *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 8;
    uVar19 = *(ulong *)(param_4 + 0x80);
    if (uVar19 == 0) {
      uVar19 = *(ulong *)(param_4 + 8);
      if ((uVar19 & 1) != 0) {
        uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
      }
      func_0x000109312140();
      *(ulong *)(param_4 + 0x80) = uVar19;
    }
    *(undefined4 *)(uVar19 + 0x20) = uVar4;
    *(undefined4 *)(uVar19 + 0x24) = uVar6;
    *(undefined4 *)(uVar19 + 0x28) = uVar9;
    *(uint *)(uVar19 + 0x10) = *(uint *)(uVar19 + 0x10) | 0xf;
    puVar16 = *(undefined8 **)(uVar19 + 8);
    if (((ulong)puVar16 & 1) != 0) {
      puVar16 = *(undefined8 **)((ulong)puVar16 & 0xfffffffffffffffe);
    }
    if (((uint)*(undefined8 *)(uVar19 + 0x18) >> 1 & 1) == 0) {
      if (puVar16 == (undefined8 *)0x0) {
        puVar16 = (undefined8 *)0x18;
        __Znwm();
        uVar31 = 2;
      }
      else {
        func_0x00010b4d80a4();
        uVar31 = 3;
      }
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      *(ulong *)(uVar19 + 0x18) = uVar31 | (ulong)puVar16;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
    plVar36 = *(long **)(param_1 + 0xa8);
    *(uint *)(uVar19 + 0x10) = *(uint *)(uVar19 + 0x10) | 1;
    puVar16 = *(undefined8 **)(uVar19 + 8);
    if (((ulong)puVar16 & 1) != 0) {
      puVar16 = *(undefined8 **)((ulong)puVar16 & 0xfffffffffffffffe);
    }
    if (((uint)*(ulong *)(uVar19 + 0x18) >> 1 & 1) == 0) {
      if (puVar16 == (undefined8 *)0x0) {
        puVar16 = (undefined8 *)0x18;
        __Znwm();
        uVar31 = 2;
      }
      else {
        func_0x00010b4d80a4();
        uVar31 = 3;
      }
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      *(ulong *)(uVar19 + 0x18) = uVar31 | (ulong)puVar16;
    }
    else {
      puVar16 = (undefined8 *)(*(ulong *)(uVar19 + 0x18) & 0xfffffffffffffffc);
    }
    if (*(char *)((long)puVar16 + 0x17) < '\0') {
      puVar16 = (undefined8 *)*puVar16;
    }
    (**(code **)(*plVar36 + 0x30))(plVar36,uVar4,uVar6,uVar9,puVar16);
    if ((*(byte *)(param_1 + 0x91) & 1) != 0) {
      ppuVar33 = &PTR_PTR_1132cf8e8;
      if (*(undefined ***)(param_4 + 0x80) != (undefined **)0x0) {
        ppuVar33 = *(undefined ***)(param_4 + 0x80);
      }
      *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 0x20;
      if (*(long *)(param_4 + 0x90) == 0) {
        uVar19 = *(ulong *)(param_4 + 8);
        if ((uVar19 & 1) != 0) {
          uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
        }
        func_0x000109312140();
        *(ulong *)(param_4 + 0x90) = uVar19;
      }
      FUN_1093f3a14(ppuVar33);
      if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
        if (*(long *)(param_4 + 0x80) != 0) {
          func_0x000109308014();
        }
        *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) & 0xfffffff7;
      }
    }
  }
  *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 4;
  uVar19 = *(ulong *)(param_4 + 0x78);
  if (uVar19 == 0) {
    uVar19 = *(ulong *)(param_4 + 8);
    if ((uVar19 & 1) != 0) {
      uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
    }
    func_0x000109312438();
    *(ulong *)(param_4 + 0x78) = uVar19;
  }
  *(uint *)(uVar19 + 0x10) = *(uint *)(uVar19 + 0x10) | 1;
  uVar31 = *(ulong *)(uVar19 + 8);
  if ((uVar31 & 1) != 0) {
    uVar31 = *(ulong *)(uVar31 & 0xfffffffffffffffe);
  }
  func_0x00010b4bf088(uVar19 + 0xb0,&DAT_10f5262f1,6,uVar31);
  ppuVar33 = &PTR_PTR_1132d80c0;
  if (ppuStack_128 != (undefined **)0x0) {
    ppuVar33 = ppuStack_128;
  }
  func_0x00010933de64(&uStack_c8,0,ppuVar33);
  FUN_1093e2c8c(param_2[1],&uStack_c8);
  ppuVar23 = &PTR_PTR_1132d8098;
  if (ppuStack_120 != (undefined **)0x0) {
    ppuVar23 = ppuStack_120;
  }
  FUN_10933e3a4(&plStack_f0,0,ppuVar23);
  FUN_1093e2fd0(param_2[1],&plStack_f0);
  *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 0x40;
  pplVar37 = *(long ***)(param_4 + 0x98);
  if (pplVar37 == (long **)0x0) {
    pplVar37 = *(long ***)(param_4 + 8);
    if (((ulong)pplVar37 & 1) != 0) {
      pplVar37 = *(long ***)((ulong)pplVar37 & 0xfffffffffffffffe);
    }
    func_0x00010933f844();
    *(long ***)(param_4 + 0x98) = pplVar37;
  }
  if (&plStack_f0 != pplVar37) {
    FUN_10933e4c8(pplVar37);
    FUN_10933e754(pplVar37,&plStack_f0);
  }
  lVar41 = param_1 + 0xf0;
  FUN_10939fbe8();
  FUN_109312ec8(alStack_98,param_4 + 0x48,*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  uStack_f4 = *(undefined4 *)(alStack_98[0] + 0x50);
  puVar29 = (ulong *)(param_1 + 0x18);
  puVar32 = puVar29;
  if ((*puVar29 & 1) != 0) {
    puVar32 = (ulong *)(*puVar29 + 7);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    ppuStack_190 = (undefined **)0x0;
  }
  else {
    ppuStack_190 = (undefined **)0x0;
    lVar30 = (long)*(int *)(param_1 + 0x20) << 3;
    do {
      if (*(long *)(param_1 + 0xe0) == 0) break;
      uVar19 = *puVar32;
      iVar5 = *(int *)(uVar19 + 0x1c);
      switch(iVar5) {
      case 1:
        ppuVar38 = &PTR_PTR_1132d19d0;
        if (*(undefined ***)(param_1 + 0x60) != (undefined **)0x0) {
          ppuVar38 = *(undefined ***)(param_1 + 0x60);
        }
        FUN_1093b141c(*(undefined8 *)(uVar19 + 0x10),ppuVar38,param_1 + 200,param_4);
        break;
      default:
        if (iVar5 == 0x1c && ppuStack_190 != (undefined **)0x0) {
          FUN_1093b7750(*(undefined8 *)(uVar19 + 0x10),ppuStack_190,lVar41,param_4);
        }
        else if (iVar5 < 0xe) {
          if (iVar5 < 9) {
            if (iVar5 == 6) {
              ppuVar38 = &PTR_PTR_1132d19d0;
              if (*(undefined ***)(param_1 + 0x60) != (undefined **)0x0) {
                ppuVar38 = *(undefined ***)(param_1 + 0x60);
              }
              FUN_1093b9ba8(*(undefined8 *)(uVar19 + 0x10),ppuVar38,param_1 + 200,param_4);
            }
            else if (iVar5 == 8) {
              ppuVar38 = &PTR_PTR_1132d19d0;
              if (*(undefined ***)(param_1 + 0x60) != (undefined **)0x0) {
                ppuVar38 = *(undefined ***)(param_1 + 0x60);
              }
              FUN_1093be43c(*(undefined8 *)(uVar19 + 0x10),ppuVar38,param_1 + 200,param_4);
            }
          }
          else if (iVar5 == 9) {
            ppuVar38 = *(undefined ***)(*(long *)(uVar19 + 0x10) + 0x30);
            ppuStack_190 = &PTR_PTR_1132d70f0;
            if (ppuVar38 != (undefined **)0x0) {
              ppuStack_190 = ppuVar38;
            }
            ppuVar38 = &PTR_PTR_1132d19d0;
            if (*(undefined ***)(param_1 + 0x60) != (undefined **)0x0) {
              ppuVar38 = *(undefined ***)(param_1 + 0x60);
            }
            FUN_1093be73c(*(long *)(uVar19 + 0x10),ppuVar38,&uStack_c8,lVar41,param_1 + 200,param_4)
            ;
          }
          else if (iVar5 == 0xd) {
            ppuVar38 = &PTR_PTR_1132d19d0;
            if (*(undefined ***)(param_1 + 0x60) != (undefined **)0x0) {
              ppuVar38 = *(undefined ***)(param_1 + 0x60);
            }
            FUN_1093ba430(*(undefined8 *)(uVar19 + 0x10),ppuVar38,param_1 + 200,param_4);
          }
        }
        else if (iVar5 < 0x13) {
          if (iVar5 == 0xe) {
            ppuVar38 = &PTR_PTR_1132d19d0;
            if (*(undefined ***)(param_1 + 0x60) != (undefined **)0x0) {
              ppuVar38 = *(undefined ***)(param_1 + 0x60);
            }
            FUN_1093b9ec4(*(undefined8 *)(uVar19 + 0x10),ppuVar38,&uStack_c8,param_1 + 200,param_4);
          }
          else if (iVar5 == 0xf) {
            ppuVar38 = &PTR_PTR_1132cfc60;
            if (*(undefined ***)(param_1 + 0x68) != (undefined **)0x0) {
              ppuVar38 = *(undefined ***)(param_1 + 0x68);
            }
            FUN_1093bac30(*(undefined8 *)(uVar19 + 0x10),ppuVar38,&uStack_c8,param_1 + 200,param_4);
          }
        }
        else if (iVar5 == 0x13) {
          FUN_1093be66c(*(undefined8 *)(uVar19 + 0x10),&uStack_c8,param_4);
        }
        else if (iVar5 == 0x30) {
          FUN_1093ba344(&uStack_c8,param_4);
        }
        else if (iVar5 == 0x36) {
          ppuVar38 = &PTR_PTR_1132d19d0;
          if (*(undefined ***)(param_1 + 0x60) != (undefined **)0x0) {
            ppuVar38 = *(undefined ***)(param_1 + 0x60);
          }
          FUN_1093ba830(*(undefined8 *)(uVar19 + 0x10),ppuVar38,param_1 + 200,param_4);
        }
        break;
      case 3:
        ppuVar38 = &PTR_PTR_1132d19d0;
        if (*(undefined ***)(param_1 + 0x60) != (undefined **)0x0) {
          ppuVar38 = *(undefined ***)(param_1 + 0x60);
        }
        FUN_1093b4f98(*(undefined8 *)(uVar19 + 0x10),ppuVar38,param_1 + 200,param_4);
        break;
      case 4:
        ppuVar38 = &PTR_PTR_1132d19d0;
        if (*(undefined ***)(param_1 + 0x60) != (undefined **)0x0) {
          ppuVar38 = *(undefined ***)(param_1 + 0x60);
        }
        FUN_1093b7910(*(undefined8 *)(uVar19 + 0x10),ppuVar38,param_1 + 200,param_4);
        break;
      case 5:
        ppuVar38 = &PTR_PTR_1132d19d0;
        if (*(undefined ***)(param_1 + 0x60) != (undefined **)0x0) {
          ppuVar38 = *(undefined ***)(param_1 + 0x60);
        }
        FUN_1093b7e44(*(undefined8 *)(uVar19 + 0x10),ppuVar38,&uStack_c8,param_1 + 200,param_4);
        break;
      case 7:
        FUN_1093bd7bc(*(undefined8 *)(uVar19 + 0x10),&uStack_c8,lVar41,&uStack_f4,param_4);
        break;
      case 10:
        ppuVar38 = &PTR_PTR_1132d19d0;
        if (*(undefined ***)(param_1 + 0x60) != (undefined **)0x0) {
          ppuVar38 = *(undefined ***)(param_1 + 0x60);
        }
        FUN_1093b4890(*(undefined8 *)(uVar19 + 0x10),ppuVar38,param_1 + 200,param_4);
        break;
      case 0x10:
        FUN_1093b75c4(*(undefined8 *)(uVar19 + 0x10),lVar41,param_4);
        break;
      case 0x14:
        ppuVar38 = &PTR_PTR_1132d19d0;
        if (*(undefined ***)(param_1 + 0x60) != (undefined **)0x0) {
          ppuVar38 = *(undefined ***)(param_1 + 0x60);
        }
        FUN_1093b8728(*(undefined8 *)(uVar19 + 0x10),ppuVar38,&uStack_c8,param_1 + 200,param_4);
        break;
      case 0x16:
        FUN_1093b76c8(*(undefined8 *)(uVar19 + 0x10),param_4);
        break;
      case 0x17:
        FUN_1093b709c(*(undefined8 *)(uVar19 + 0x10),&uStack_c8,lVar41,0,param_4);
        break;
      case 0x1e:
        FUN_1093b1a18(*(undefined8 *)(uVar19 + 0x10),param_1 + 200,param_4);
        break;
      case 0x1f:
        FUN_1093b2180(*(undefined8 *)(uVar19 + 0x10),param_1 + 200,param_4);
        break;
      case 0x21:
        FUN_1093b3504(*(undefined8 *)(uVar19 + 0x10),param_1 + 200,param_4);
        break;
      case 0x22:
        FUN_1093b74b4(*(undefined8 *)(uVar19 + 0x10),lVar41,param_4);
        break;
      case 0x24:
        FUN_1093b5a74(*(undefined8 *)(uVar19 + 0x10),lVar41,param_4);
        break;
      case 0x28:
        FUN_1093c1520(uStack_100,lVar41,param_4);
        break;
      case 0x2b:
        FUN_1093b3df8(*(undefined8 *)(uVar19 + 0x10),&uStack_c8,param_1 + 200,param_4);
        break;
      case 0x2c:
        FUN_1093b3fd4(*(undefined8 *)(uVar19 + 0x10),param_1 + 200,param_4);
        break;
      case 0x2d:
        FUN_1093b4130(*(undefined8 *)(uVar19 + 0x10),param_1 + 200,param_4);
      }
      puVar32 = puVar32 + 1;
      lVar30 = lVar30 + -8;
    } while (lVar30 != 0);
  }
  if (param_4 != lVar41) {
    FUN_10930f010(lVar41);
    FUN_10930f9c4(lVar41,param_4);
  }
  FUN_1093c2248(param_4);
  FUN_1093c36b8(param_2[1],param_4);
  *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 0x40;
  ppuVar38 = *(undefined ***)(param_4 + 0x98);
  if (ppuVar38 == (undefined **)0x0) {
    ppuVar38 = *(undefined ***)(param_4 + 8);
    if (((ulong)ppuVar38 & 1) != 0) {
      ppuVar38 = *(undefined ***)((ulong)ppuVar38 & 0xfffffffffffffffe);
    }
    func_0x00010933f844();
    *(undefined ***)(param_4 + 0x98) = ppuVar38;
  }
  if (ppuVar23 != ppuVar38) {
    FUN_10933e4c8(ppuVar38);
    FUN_10933e754(ppuVar38,ppuVar23);
  }
  puVar32 = puVar29;
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    puVar32 = (ulong *)(*(ulong *)(param_1 + 0x18) + 7);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    bVar42 = false;
  }
  else {
    bVar42 = false;
    lVar30 = lVar41 + 0xb8;
    lVar28 = (long)*(int *)(param_1 + 0x20) << 3;
    do {
      uVar19 = *puVar32;
      iVar5 = *(int *)(uVar19 + 0x1c);
      if (iVar5 < 0x2e) {
        if (iVar5 < 0x1a) {
          if (iVar5 == 0xc) {
            FUN_1093ba258(ppuVar33,param_4);
          }
          else if (iVar5 == 0x11) {
            FUN_1093bb130(*(undefined8 *)(uVar19 + 0x10),param_1 + 0xb0,*param_2,
                          *(undefined4 *)(param_2 + 2),*(undefined4 *)((long)param_2 + 0x14),
                          *(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                          *(undefined4 *)(param_2 + 4),auStack_168,lVar30,param_4);
LAB_1093a1164:
            bVar42 = true;
          }
          else {
LAB_1093a10c0:
            if (iVar5 == 0x1b && ppuStack_190 != (undefined **)0x0) {
              FUN_1093c0224(*(undefined8 *)(uVar19 + 0x10),ppuVar33,ppuStack_190,lVar30,param_4);
              goto LAB_1093a1164;
            }
            if (iVar5 == 0x35) {
LAB_1093a1134:
              FUN_1093b709c(*(undefined8 *)(uVar19 + 0x10),ppuVar33,lVar30,iVar5 != 0x35,param_4);
              goto LAB_1093a1164;
            }
            if (iVar5 == 0x3e && ppuStack_190 != (undefined **)0x0) {
              FUN_1093b7230(*(undefined8 *)(uVar19 + 0x10),ppuStack_190,lVar30,param_4);
              goto LAB_1093a1164;
            }
            switch(iVar5) {
            case 0x20:
              FUN_1093b2c28(*(undefined8 *)(uVar19 + 0x10),param_4);
              break;
            case 0x23:
              ppuVar23 = &PTR_PTR_1132d7f38;
              if (ppuStack_118 != (undefined **)0x0) {
                ppuVar23 = ppuStack_118;
              }
              ppuVar38 = &PTR_PTR_1132cfc60;
              if (*(undefined ***)(param_1 + 0x68) != (undefined **)0x0) {
                ppuVar38 = *(undefined ***)(param_1 + 0x68);
              }
              FUN_1093c0b50(*(undefined8 *)(uVar19 + 0x10),ppuVar23,ppuVar33,ppuVar38,param_4);
              break;
            case 0x25:
              FUN_1093b64c8(*(undefined8 *)(uVar19 + 0x10),param_2[1],ppuVar33,lVar30,param_4);
              goto LAB_1093a1164;
            case 0x27:
              FUN_1093c13b4(*(undefined8 *)(uVar19 + 0x10),param_4);
              break;
            case 0x29:
              FUN_1093c18a8(*(undefined8 *)(uVar19 + 0x10),ppuVar33,param_1,param_4);
              break;
            case 0x2a:
              FUN_1093c1aec(*(undefined8 *)(uVar19 + 0x10),param_4);
              break;
            case 0x2f:
              ppuVar23 = &PTR_PTR_1132cfc60;
              if (*(undefined ***)(param_1 + 0x68) != (undefined **)0x0) {
                ppuVar23 = *(undefined ***)(param_1 + 0x68);
              }
              FUN_1093bac30(*(undefined8 *)(uVar19 + 0x10),ppuVar23,ppuVar33,param_1 + 200,param_4);
              break;
            case 0x31:
              FUN_1093b455c(*(undefined8 *)(uVar19 + 0x10),param_4);
              break;
            case 0x32:
              FUN_1093b473c(*(undefined8 *)(uVar19 + 0x10),ppuVar33,param_2,param_4);
              break;
            case 0x33:
              goto LAB_1093a1134;
            default:
              if (iVar5 == 0x3d) {
                FUN_1093b74b4(*(undefined8 *)(uVar19 + 0x10),lVar30,param_4);
                goto LAB_1093a1164;
              }
            case 0x21:
            case 0x22:
            case 0x24:
            case 0x26:
            case 0x28:
            case 0x2b:
            case 0x2c:
            case 0x2d:
            case 0x2e:
            case 0x30:
              if ((iVar5 == 0x38) && (ppuStack_190 != (undefined **)0x0)) {
                FUN_1093c2050(*(undefined8 *)(uVar19 + 0x10),ppuStack_190,param_4);
              }
              else if (iVar5 == 0x3b) {
                FUN_1093bd688(*(undefined8 *)(uVar19 + 0x10),param_4);
              }
              else if (iVar5 == 0x34) {
                FUN_1093c1b68(*(undefined8 *)(uVar19 + 0x10),param_4);
              }
            }
          }
        }
        else {
          if (iVar5 != 0x1a) {
            if (iVar5 != 0x1d) goto LAB_1093a10c0;
            FUN_1093b75c4(*(undefined8 *)(uVar19 + 0x10),lVar30,param_4);
            goto LAB_1093a1164;
          }
          FUN_1093bffe8(*(undefined8 *)(uVar19 + 0x10),param_1,param_4);
        }
      }
      else {
        if (0x39 < iVar5) {
          if (iVar5 == 0x3a) {
            FUN_1093bd530(*(undefined8 *)(uVar19 + 0x10),lVar30,param_4);
          }
          else {
            if (iVar5 != 0x3c) goto LAB_1093a10c0;
            FUN_1093c1520(uStack_100,lVar30,param_4);
          }
          goto LAB_1093a1164;
        }
        if (iVar5 == 0x2e) {
          FUN_1093ba344(ppuVar33,param_4);
        }
        else {
          if (iVar5 != 0x39) goto LAB_1093a10c0;
          if (*(long *)(param_1 + 0xe0) != 0) {
            FUN_1093bd7bc(*(undefined8 *)(uVar19 + 0x10),ppuVar33,lVar30,&uStack_f4,param_4);
            goto LAB_1093a1164;
          }
        }
      }
      puVar32 = puVar32 + 1;
      lVar28 = lVar28 + -8;
    } while (lVar28 != 0);
  }
  FUN_109312ec8(alStack_98,lVar41 + 0x48,*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  *(undefined4 *)(alStack_98[0] + 0x50) = uStack_f4;
  *(uint *)(alStack_98[0] + 0x30) = *(uint *)(alStack_98[0] + 0x30) | 8;
  if ((bVar42) && (lVar41 = lVar41 + 0xb8, param_4 != lVar41)) {
    FUN_10930f010(lVar41);
    FUN_10930f9c4(lVar41,param_4);
  }
  uVar19 = *(ulong *)(param_4 + 0x18);
  puVar32 = (ulong *)(param_4 + 0x18);
  if ((uVar19 & 1) != 0) {
    puVar32 = (ulong *)(uVar19 + 7);
  }
  if (*(int *)(param_4 + 0x20) != 0) {
    puVar3 = puVar32 + *(int *)(param_4 + 0x20);
    do {
      uVar19 = *puVar32;
      if (*(int *)(uVar19 + 0x94) != 1) {
        func_0x000107c30320(uVar19 + 0x90,0x10500580020,0);
      }
      uVar31 = *(ulong *)(uVar19 + 0x48);
      puVar40 = (ulong *)(uVar19 + 0x48);
      if ((uVar31 & 1) != 0) {
        puVar40 = (ulong *)(uVar31 + 7);
      }
      if (*(int *)(uVar19 + 0x50) != 0) {
        lVar41 = (long)*(int *)(uVar19 + 0x50) << 3;
        do {
          if (*(int *)(*puVar40 + 0x94) != 1) {
            func_0x000107c30320(*puVar40 + 0x90,0x10500580020,0);
          }
          puVar40 = puVar40 + 1;
          lVar41 = lVar41 + -8;
        } while (lVar41 != 0);
      }
      puVar32 = puVar32 + 1;
    } while (puVar32 != puVar3);
  }
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    puVar29 = (ulong *)(*(ulong *)(param_1 + 0x18) + 7);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar41 = (long)*(int *)(param_1 + 0x20) << 3;
    do {
      iVar5 = *(int *)(*puVar29 + 0x1c);
      if (iVar5 == 0x15) {
        func_0x0001093c08b8(param_4);
      }
      else if (iVar5 == 0x12) {
        func_0x0001093c0928(*(undefined8 *)(*puVar29 + 0x10),param_4);
      }
      puVar29 = puVar29 + 1;
      lVar41 = lVar41 + -8;
    } while (lVar41 != 0);
  }
  FUN_10933e438(&plStack_f0);
  puVar18 = &uStack_c8;
  FUN_10933df00();
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 2;
  uVar19 = *(ulong *)(param_4 + 0x70);
  if (uVar19 == 0) {
    uVar19 = *(ulong *)(param_4 + 8);
    if ((uVar19 & 1) != 0) {
      uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
    }
    func_0x000109312028();
    *(ulong *)(param_4 + 0x70) = uVar19;
  }
  *(double *)(uVar19 + 0x50) = (double)((long)plVar15 - lVar14) / 1000000000.0;
  *(double *)(uVar19 + 0x58) = (double)((long)plStack_1a8 - (long)plVar15) / 1000000000.0;
  *(double *)(uVar19 + 0x60) = (double)((long)plVar34 - (long)plStack_1a8) / 1000000000.0;
  *(double *)(uVar19 + 0x68) = (double)((long)puVar18 - (long)plVar34) / 1000000000.0;
  *(double *)(uVar19 + 0x70) = (double)((long)puVar18 - lVar14) / 1000000000.0;
  *(uint *)(uVar19 + 0x10) = *(uint *)(uVar19 + 0x10) | 0x3e;
LAB_1093a14b4:
  if (pfStack_180 != (float *)0x0) {
    pfStack_178 = pfStack_180;
    __ZdlPv();
  }
  FUN_10933fb14(auStack_168);
  return;
}



/* Entry: 1093a16b8; end: 1093a1d6b;  */

void FUN_1093a16b8(undefined **param_1,undefined **param_2,long *param_3,long *param_4,long *param_5
                  )

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  undefined **ppuStack_120;
  long alStack_118 [2];
  char cStack_101;
  undefined **ppuStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  
  lVar18 = *param_3;
  lVar8 = param_3[1];
  if (((lVar18 == lVar8) ||
      (lVar12 = (lVar8 - lVar18 >> 4) * -0x5555555555555555,
      lVar12 + (param_4[1] - *param_4 >> 4) * -0x6db6db6db6db6db7 != 0)) ||
     (ppuVar4 = param_2, lVar12 + (param_5[1] - *param_5 >> 3) * 0x2c8590b21642c859 != 0)) {
    FUN_10937e740(&ppuStack_f8,&UNK_10f568dfa);
    ppuVar4 = (undefined **)0x1;
    FUN_109388c6c(1,&UNK_10f568d30,&UNK_10f568ded,0x135,&ppuStack_f8);
    if (uStack_e8 < 0) {
      ppuVar4 = ppuStack_f8;
      __ZdlPv();
    }
    lVar18 = *param_3;
    lVar8 = param_3[1];
  }
  if (lVar8 == lVar18) {
    param_2[0x21] = (undefined *)0x0;
  }
  else {
    puVar19 = (undefined *)0x0;
    do {
      param_2[0x21] = puVar19;
      puVar10 = (undefined *)((param_5[1] - *param_5 >> 3) * -0x2c8590b21642c859);
      ppuStack_120 = param_1;
      if (puVar10 < puVar19 || (long)puVar10 - (long)puVar19 == 0) goto LAB_1093a1cf0;
      lVar18 = *param_5 + (long)puVar19 * 0xb8;
      ppuVar4 = param_2 + 0x1e;
      FUN_10939fbe8();
      puVar9 = (undefined8 *)((ulong)param_2[9] & 0xfffffffffffffffc);
      puVar7 = (undefined8 *)*puVar9;
      uVar17 = puVar9[1];
      if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
        puVar7 = puVar9;
        uVar17 = (ulong)*(byte *)((long)puVar9 + 0x17);
      }
      lVar8 = lVar18 + 0x48;
      func_0x000107c27d5c(lVar8,puVar7,uVar17,0);
      if (lVar8 == 0) {
        puVar9 = (undefined8 *)((ulong)param_2[9] & 0xfffffffffffffffc);
        lVar8 = (long)*(char *)((long)puVar9 + 0x17);
        puVar7 = puVar9;
        if (lVar8 < 0) {
          puVar7 = (undefined8 *)*puVar9;
          lVar8 = puVar9[1];
        }
        ppuVar4 = ppuVar4 + 9;
        func_0x000107c27d5c(ppuVar4,puVar7,lVar8,0);
        if (ppuVar4 == (undefined **)0x0) {
          ppuStack_f8 = &PTR_FUN_110aeb6f8;
          uStack_f0 = 0;
          uStack_e0 = 0;
          uStack_e8 = 0;
          uStack_d0 = 0;
          uStack_d8 = 0;
          puStack_c8 = (undefined *)((ulong)puStack_c8 & 0xffffffff00000000);
        }
        else {
          func_0x00010930afec(&ppuStack_f8,0,ppuVar4 + 4);
        }
        FUN_109312ec8(alStack_118,lVar18 + 0x48,(ulong)param_2[9] & 0xfffffffffffffffc);
        pppuVar15 = (undefined ***)(alStack_118[0] + 0x20);
        if (pppuVar15 != &ppuStack_f8) {
          uVar11 = *(ulong *)(alStack_118[0] + 0x28);
          uVar17 = uVar11;
          if ((uVar11 & 1) != 0) {
            uVar17 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
          }
          uVar13 = uStack_f0;
          if ((uStack_f0 & 1) != 0) {
            uVar13 = *(ulong *)(uStack_f0 & 0xfffffffffffffffe);
          }
          if (uVar17 == uVar13) {
            lVar8 = 0;
            *(ulong *)(alStack_118[0] + 0x28) = uStack_f0;
            uVar2 = *(undefined4 *)(alStack_118[0] + 0x30);
            *(uint *)(alStack_118[0] + 0x30) = (uint)uStack_e8;
            uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar2);
            do {
              uVar3 = *(undefined1 *)(alStack_118[0] + 0x38 + lVar8);
              *(undefined1 *)(alStack_118[0] + 0x38 + lVar8) =
                   *(undefined1 *)((long)&uStack_e0 + lVar8);
              *(undefined1 *)((long)&uStack_e0 + lVar8) = uVar3;
              lVar8 = lVar8 + 1;
              uStack_f0 = uVar11;
            } while (lVar8 != 0x1c);
          }
          else {
            FUN_10930b0d4(pppuVar15);
            FUN_10930b470(pppuVar15,&ppuStack_f8);
          }
        }
        FUN_10930b074(&ppuStack_f8);
      }
      ppuVar4 = param_2;
      FUN_10939fe04(param_2,*param_3 + (long)puVar19 * 0x30,*param_4 + (long)puVar19 * 0x70,lVar18);
      puVar19 = puVar19 + 1;
      puVar10 = (undefined *)((param_3[1] - *param_3 >> 4) * -0x5555555555555555);
    } while (puVar19 < puVar10);
    param_2[0x21] = (undefined *)0x0;
    if ((undefined *)0x1 < puVar10) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      FUN_10930ed5c(param_1,0,*param_5);
      ppuVar5 = param_2 + 0x1e;
      FUN_10939fbe8();
      puVar19 = param_2[3];
      ppuVar14 = param_2 + 3;
      if (((ulong)puVar19 & 1) != 0) {
        ppuVar14 = (undefined **)(puVar19 + 7);
      }
      ppuVar6 = ppuVar5;
      if (*(int *)(param_2 + 4) != 0) {
        lVar18 = (long)*(int *)(param_2 + 4) << 3;
        do {
          if (*(int *)(*ppuVar14 + 0x1c) == 0x26) {
            ppuVar6 = *(undefined ***)(*ppuVar14 + 0x10);
            FUN_1093c106c(ppuVar6,param_3,param_4,param_5,ppuVar5 + 0x2e,param_1);
          }
          ppuVar14 = ppuVar14 + 1;
          lVar18 = lVar18 + -8;
        } while (lVar18 != 0);
      }
      ppuVar5 = ppuVar5 + 0x2e;
      if (param_1 != ppuVar5) {
        FUN_10930f010(ppuVar5);
        FUN_10930f9c4(ppuVar5,param_1);
        ppuVar6 = ppuVar5;
      }
      lVar18 = *param_5;
      lVar8 = param_5[1];
      if (lVar18 != lVar8) {
        do {
          if ((*(byte *)(lVar18 + 0x10) >> 3 & 1) != 0) {
            ppuVar6 = param_1 + 6;
            func_0x000107c303b0(ppuVar6,0x109312140);
            ppuVar14 = &PTR_PTR_1132cf8e8;
            if (*(undefined ***)(lVar18 + 0x80) != (undefined **)0x0) {
              ppuVar14 = *(undefined ***)(lVar18 + 0x80);
            }
            if (ppuVar14 != ppuVar6) {
              func_0x000109308014(ppuVar6);
              FUN_1093082f8(ppuVar6,ppuVar14);
            }
          }
          lVar18 = lVar18 + 0xb8;
        } while (lVar18 != lVar8);
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      ppuStack_f8 = &PTR_FUN_110aeb3d8;
      uStack_f0 = 0;
      uStack_e0 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_c0 = 0;
      puStack_c8 = (undefined *)0x0;
      uStack_b8 = 0;
      puStack_b0 = &DAT_11383d918;
      dStack_a0 = 0.0;
      uStack_a8 = 0;
      dStack_90 = 0.0;
      uStack_98 = 0;
      uStack_80 = 0;
      dStack_88 = 0.0;
      uStack_78 = 0;
      dStack_70 = (double)((long)ppuVar6 - (long)ppuVar4) / 1000000000.0;
      uStack_e8._4_4_ = 0;
      uVar2 = uStack_e8._4_4_;
      uStack_e8._0_4_ = 0x100;
      uStack_e8._4_4_ = 0;
      lVar18 = *param_5;
      if (param_5[1] != lVar18) {
        uVar17 = 0;
        lVar8 = 0x70;
        do {
          ppuVar4 = &PTR_PTR_1132cf7e8;
          if (*(undefined ***)(lVar18 + lVar8) != (undefined **)0x0) {
            ppuVar4 = *(undefined ***)(lVar18 + lVar8);
          }
          dStack_a0 = dStack_a0 + (double)ppuVar4[0xb];
          ppuVar4 = &PTR_PTR_1132cf7e8;
          if (*(undefined ***)(lVar18 + lVar8) != (undefined **)0x0) {
            ppuVar4 = *(undefined ***)(lVar18 + lVar8);
          }
          dStack_90 = dStack_90 + (double)ppuVar4[0xd];
          ppuVar4 = &PTR_PTR_1132cf7e8;
          if (*(undefined ***)(lVar18 + lVar8) != (undefined **)0x0) {
            ppuVar4 = *(undefined ***)(lVar18 + lVar8);
          }
          dStack_88 = dStack_88 + (double)ppuVar4[0xe];
          uStack_e8._0_4_ = (uint)uStack_e8 | 0x34;
          ppuVar4 = &puStack_c8;
          func_0x000107c303b0(ppuVar4,0x109312028);
          ppuVar14 = &PTR_PTR_1132cf7e8;
          if (*(undefined ***)(*param_5 + lVar8) != (undefined **)0x0) {
            ppuVar14 = *(undefined ***)(*param_5 + lVar8);
          }
          if (ppuVar14 != ppuVar4) {
            FUN_10930e51c(ppuVar4);
            FUN_10930ec1c(ppuVar4,ppuVar14);
          }
          __ZNSt3__19to_stringEm(alStack_118,uVar17);
          *(uint *)(ppuVar4 + 2) = *(uint *)(ppuVar4 + 2) | 1;
          puVar19 = ppuVar4[1];
          if (((ulong)puVar19 & 1) != 0) {
            puVar19 = *(undefined **)((ulong)puVar19 & 0xfffffffffffffffe);
          }
          func_0x000107c3024c(ppuVar4 + 9,alStack_118,puVar19);
          if (cStack_101 < '\0') {
            __ZdlPv(alStack_118[0]);
          }
          uVar17 = uVar17 + 1;
          lVar18 = *param_5;
          lVar8 = lVar8 + 0xb8;
          uVar2 = uStack_e8._4_4_;
        } while (uVar17 < (ulong)((param_5[1] - lVar18 >> 3) * -0x2c8590b21642c859));
      }
      uStack_e8._4_4_ = uVar2;
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 2;
      pppuVar15 = (undefined ***)param_1[0xe];
      if (pppuVar15 == (undefined ***)0x0) {
        pppuVar15 = (undefined ***)param_1[1];
        if (((ulong)pppuVar15 & 1) != 0) {
          pppuVar15 = *(undefined ****)((ulong)pppuVar15 & 0xfffffffffffffffe);
        }
        func_0x000109312028();
        param_1[0xe] = (undefined *)pppuVar15;
      }
      if (&ppuStack_f8 != pppuVar15) {
        FUN_10930e51c(pppuVar15);
        FUN_10930ec1c(pppuVar15,&ppuStack_f8);
      }
      func_0x00010930e4b4(&ppuStack_f8);
      return;
    }
  }
  if (param_5[1] != *param_5) {
    FUN_10930ed5c(param_1,0);
    return;
  }
LAB_1093a1cf0:
  FUN_1093a2088();
  func_0x00010930e4b4(&ppuStack_f8);
  FUN_10930ef1c(ppuStack_120);
  __Unwind_Resume();
  FUN_1093a1df8(ppuVar4 + 0x1e,ppuVar4[0x1e]);
  ppuVar4[0x21] = (undefined *)0x0;
  plVar1 = (long *)ppuVar4[0x17];
  for (plVar16 = (long *)ppuVar4[0x16]; plVar16 != plVar1; plVar16 = plVar16 + 1) {
    if (*plVar16 != 0) {
      FUN_1093a1d6c();
    }
  }
  return;
}



/* Entry: 1093a1d6c; end: 1093a1df7;  */

void FUN_1093a1d6c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_1093a1df8((undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf0));
  *(undefined8 *)(param_1 + 0x108) = 0;
  plVar1 = *(long **)(param_1 + 0xb8);
  for (plVar2 = *(long **)(param_1 + 0xb0); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if (*plVar2 != 0) {
      FUN_1093a1d6c();
    }
  }
  return;
}



/* Entry: 1093a1df8; end: 1093a1ecb;  */

void FUN_1093a1df8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    FUN_10930ef1c(lVar1 + -0xb8);
    FUN_10930ef1c(lVar1 + -0x170);
    FUN_10930ef1c(lVar1 + -0x228);
    lVar1 = lVar1 + -0x228;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1093a1ecc; end: 1093a1edf;  */

void FUN_1093a1ecc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *puVar1 = &PTR_FUN_110aeb838;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 1;
  *(undefined4 *)((long)puVar1 + 0x54) = 1;
  puVar1[0xb] = &DAT_10e5b4a18;
  puVar1[0xc] = 0;
  puVar1[0xd] = &DAT_11383d918;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = &PTR_FUN_110aeb838;
  puVar1[0x18] = 0;
  puVar1[0x16] = 0;
  *(undefined8 *)((long)puVar1 + 0xfc) = 0;
  *(undefined8 *)((long)puVar1 + 0xf4) = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  *(undefined4 *)((long)puVar1 + 0x104) = 1;
  puVar1[0x21] = 0x100000000;
  puVar1[0x22] = &DAT_10e5b4a18;
  puVar1[0x23] = 0;
  puVar1[0x24] = &DAT_11383d918;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2e] = &PTR_FUN_110aeb838;
  puVar1[0x2f] = 0;
  puVar1[0x2d] = 0;
  *(undefined8 *)((long)puVar1 + 0x1b4) = 0;
  *(undefined8 *)((long)puVar1 + 0x1ac) = 0;
  puVar1[0x33] = 0;
  puVar1[0x32] = 0;
  puVar1[0x35] = 0;
  puVar1[0x34] = 0;
  puVar1[0x31] = 0;
  puVar1[0x30] = 0;
  *(undefined4 *)((long)puVar1 + 0x1bc) = 1;
  puVar1[0x38] = 0x100000000;
  puVar1[0x39] = &DAT_10e5b4a18;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = &DAT_11383d918;
  puVar1[0x44] = 0;
  puVar1[0x41] = 0;
  puVar1[0x40] = 0;
  puVar1[0x43] = 0;
  puVar1[0x42] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x3e] = 0;
  return;
}



/* Entry: 1093a1ee0; end: 1093a1fa3;  */

void FUN_1093a1ee0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aeb838;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 1;
  *(undefined4 *)((long)param_1 + 0x54) = 1;
  param_1[0xb] = &DAT_10e5b4a18;
  param_1[0xc] = 0;
  param_1[0xd] = &DAT_11383d918;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = &PTR_FUN_110aeb838;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0x104) = 1;
  param_1[0x21] = 0x100000000;
  param_1[0x22] = &DAT_10e5b4a18;
  param_1[0x23] = 0;
  param_1[0x24] = &DAT_11383d918;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = &PTR_FUN_110aeb838;
  param_1[0x2f] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)((long)param_1 + 0x1bc) = 1;
  param_1[0x38] = 0x100000000;
  param_1[0x39] = &DAT_10e5b4a18;
  param_1[0x3a] = 0;
  param_1[0x3b] = &DAT_11383d918;
  param_1[0x44] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  return;
}



/* Entry: 1093a1fa4; end: 1093a1fb7;  */

undefined8 * FUN_1093a1fa4(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *puVar1 = &PTR_FUN_110aeb838;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_2;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = param_2;
  puVar1[10] = 0x100000000;
  puVar1[9] = 0x100000000;
  puVar1[0xb] = &DAT_10e5b4a18;
  puVar1[0xc] = param_2;
  puVar1[0xd] = &DAT_11383d918;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x16] = 0;
  if (puVar1 != param_3) {
    if ((param_2 & 1) != 0) {
      param_2 = *(ulong *)(param_2 & 0xfffffffffffffffe);
    }
    uVar2 = param_3[1];
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (param_2 == uVar2) {
      FUN_10930fc28(puVar1,param_3);
    }
    else {
      FUN_10930f010(puVar1);
      FUN_10930f9c4(puVar1,param_3);
    }
  }
  return puVar1;
}



/* Entry: 1093a1fb8; end: 1093a2087;  */

undefined8 * FUN_1093a1fb8(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  *param_1 = &PTR_FUN_110aeb838;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[10] = 0x100000000;
  param_1[9] = 0x100000000;
  param_1[0xb] = &DAT_10e5b4a18;
  param_1[0xc] = param_2;
  param_1[0xd] = &DAT_11383d918;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  if (param_1 != param_3) {
    if ((param_2 & 1) != 0) {
      param_2 = *(ulong *)(param_2 & 0xfffffffffffffffe);
    }
    uVar1 = param_3[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (param_2 == uVar1) {
      FUN_10930fc28(param_1,param_3);
    }
    else {
      FUN_10930f010(param_1);
      FUN_10930f9c4(param_1,param_3);
    }
  }
  return param_1;
}



/* Entry: 1093a2088; end: 1093a20c3;  */

void FUN_1093a2088(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109262df8();
  lVar2 = *plVar1;
  *plVar1 = param_2;
  if (lVar2 != 0) {
    func_0x00010939f86c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1093a20c4; end: 1093a2193;  */

long * FUN_1093a20c4(long *param_1)

{
  long lVar1;
  
  func_0x0001093a20fc(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1093a2194; end: 1093a2207;  */

int * FUN_1093a2194(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    FUN_109311970(param_1,0,iVar1);
    *param_1 = iVar1;
    if (0 < iVar1) {
      uVar4 = iVar1 + 1;
      puVar2 = *(undefined4 **)(param_1 + 2);
      puVar3 = *(undefined4 **)(param_2 + 2);
      do {
        *puVar2 = *puVar3;
        uVar4 = uVar4 - 1;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (1 < uVar4);
    }
  }
  return param_1;
}



/* Entry: 1093a2208; end: 1093a2533;  */

void FUN_1093a2208(float param_1,undefined ***param_2)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined4 uVar15;
  uint uStack_fc;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long alStack_e0 [3];
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  int iStack_a4;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  
  ppuStack_c8 = &PTR_FUN_110aeb428;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  lStack_a0 = 0;
  iStack_a8 = 0;
  iStack_a4 = 0;
  lStack_90 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  alStack_e0[0] = 0;
  alStack_e0[1] = 0;
  alStack_e0[2] = 0;
  lStack_f8 = 0;
  lStack_f0 = 0;
  uStack_e8 = 0;
  if (0 < *(int *)(param_2 + 4)) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      fVar2 = *(float *)((long)param_2[5] + lVar10 * 4 + 4);
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      if ((float)CONCAT13(in_register_00005003,
                          CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) <=
          fVar2) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar2) && !NAN(param_1)) {
          bVar3 = fVar2 < param_1;
          bVar4 = fVar2 == param_1;
          bVar5 = false;
        }
      }
      if (bVar4 || bVar3 != bVar5) {
        uStack_fc = iStack_a8 / 0xe;
        FUN_1092d7128(&lStack_f8,&uStack_fc);
        lVar14 = 0xe;
        lVar13 = lVar9;
        do {
          uVar15 = *(undefined4 *)((long)param_2[5] + lVar13);
          if (iStack_a8 == iStack_a4) {
            FUN_109311970(&iStack_a8,iStack_a8,iStack_a8 + 1);
          }
          iVar6 = iStack_a8 + 1;
          *(undefined4 *)(lStack_a0 + (long)iStack_a8 * 4) = uVar15;
          lVar13 = lVar13 + 4;
          lVar14 = lVar14 + -1;
          iStack_a8 = iVar6;
        } while (lVar14 != 0);
        uStack_fc = uStack_fc & 0xffffff00;
        func_0x0001078db3d4(alStack_e0,&uStack_fc);
      }
      else {
        uStack_fc = CONCAT31(uStack_fc._1_3_,1);
        func_0x0001078db3d4(alStack_e0,&uStack_fc);
        uStack_fc = 0xffffffff;
        FUN_1092d7128(&lStack_f8,&uStack_fc);
      }
      lVar10 = lVar10 + 0xe;
      lVar9 = lVar9 + 0x38;
    } while ((int)lVar10 < *(int *)(param_2 + 4));
  }
  iVar6 = *(int *)(param_2 + 6);
  if (0 < iVar6) {
    lVar10 = 0;
    do {
      piVar1 = (int *)((long)param_2[7] + lVar10 * 4);
      uVar7 = (ulong)*piVar1;
      if ((((*(ulong *)(alStack_e0[0] + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0) &&
          (uVar12 = (ulong)piVar1[1],
          (*(ulong *)(alStack_e0[0] + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0)) &&
         (uVar11 = (ulong)piVar1[2],
         (*(ulong *)(alStack_e0[0] + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) == 0)) {
        uVar15 = *(undefined4 *)(lStack_f8 + uVar7 * 4);
        iVar6 = uStack_98._4_4_;
        if ((int)uStack_98 == uStack_98._4_4_) {
          func_0x000107c282d8(&uStack_98,uStack_98._4_4_,uStack_98._4_4_ + 1);
          iVar6 = uStack_98._4_4_;
        }
        iVar8 = (int)uStack_98 + 1;
        *(undefined4 *)(lStack_90 + (long)(int)uStack_98 * 4) = uVar15;
        uVar15 = *(undefined4 *)(lStack_f8 + uVar12 * 4);
        uStack_98._0_4_ = iVar8;
        if (iVar8 == iVar6) {
          func_0x000107c282d8(&uStack_98,iVar6,iVar6 + 1);
          iVar6 = uStack_98._4_4_;
        }
        iVar8 = (int)uStack_98 + 1;
        *(undefined4 *)(lStack_90 + (long)(int)uStack_98 * 4) = uVar15;
        uVar15 = *(undefined4 *)(lStack_f8 + uVar11 * 4);
        if (iVar8 == iVar6) {
          uStack_98._0_4_ = iVar8;
          func_0x000107c282d8(&uStack_98,iVar6,iVar6 + 1);
          iVar8 = (int)uStack_98;
        }
        uStack_98 = CONCAT44(uStack_98._4_4_,iVar8 + 1);
        *(undefined4 *)(lStack_90 + (long)iVar8 * 4) = uVar15;
        iVar6 = *(int *)(param_2 + 6);
      }
      lVar10 = lVar10 + 3;
    } while ((int)lVar10 < iVar6);
  }
  if (&ppuStack_c8 != param_2) {
    func_0x00010930a6e8(param_2);
    FUN_10930ae8c(param_2,&ppuStack_c8);
  }
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv();
  }
  if (alStack_e0[0] != 0) {
    __ZdlPv();
  }
  FUN_10930a644(&ppuStack_c8);
  return;
}



/* Entry: 1093a2534; end: 1093a269f;  */

void FUN_1093a2534(long param_1,long param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  float fVar2;
  long lStack_14c8;
  long lStack_14c0;
  undefined **appuStack_14b0 [649];
  int iStack_68;
  int iStack_64;
  int iStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 uStack_50;
  float fStack_48;
  undefined4 uStack_44;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_1093a3c10(appuStack_14b0);
  appuStack_14b0[0] = &PTR_FUN_110af5380;
  uStack_44 = 0x41f00000;
  iStack_64 = *(int *)(param_1 + 8);
  iStack_60 = *(int *)(param_1 + 0xc);
  iStack_68 = *(int *)(param_1 + 4);
  fVar2 = (float)param_3;
  fStack_5c = fVar2 / ((float)iStack_64 + -1.0);
  fStack_58 = (float)param_4 / ((float)iStack_68 + -1.0);
  ppuVar1 = &PTR_PTR_1132d8bd0;
  if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x18);
  }
  fStack_54 = 1.0 / (*(float *)(ppuVar1 + 3) / 3.0);
  fStack_48 = fStack_54 * fVar2 * -0.5 + 3.0;
  fStack_54 = (fVar2 / ((float)iStack_60 + -1.0)) * fStack_54;
  uStack_50 = 0;
  FUN_1093e3918(&lStack_14c8,param_1);
  FUN_1093a26a0(appuStack_14b0,&lStack_14c8,param_5);
  if (lStack_14c8 != 0) {
    lStack_14c0 = lStack_14c8;
    __ZdlPv();
  }
  FUN_1093a3c74(appuStack_14b0);
  return;
}



/* Entry: 1093a26a0; end: 1093a2fc3;  */

void FUN_1093a26a0(long *param_1,undefined8 param_2,long param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  float *pfVar21;
  long lVar22;
  float *pfVar23;
  ulong uVar24;
  float *pfVar25;
  undefined2 *puVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined4 *puVar31;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  uint uVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  uint uStack_b4;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x0001093a6220(param_1 + 3);
  func_0x0001093a6324(param_1 + 0x264);
  param_1[0x269] = -0x7ffe800080008001;
  *(undefined4 *)(param_1 + 0x26a) = 0x80018001;
  *(undefined8 *)((long)param_1 + 0x135c) = 0;
  *(undefined8 *)((long)param_1 + 0x1364) = 0;
  *(undefined8 *)((long)param_1 + 0x1354) = 0;
  FUN_1093a432c(param_1);
  if (*(long *)(param_3 + 0x120) != 0) {
    func_0x00010930a6e8();
  }
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) & 0xffffbfff;
  lStack_c8 = 0;
  uStack_c0 = 0;
  lStack_d0 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_2,&lStack_d0);
  FUN_1093a6f18(param_1 + 0x1d,param_1 + 3,&lStack_d0,1,0,0);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_e0 = 0x3f800000;
  plVar32 = (long *)param_1[0x266];
  if (plVar32 != (long *)0x0) {
    lVar30 = 0;
    lVar28 = 0;
    do {
      lVar34 = plVar32[3];
      lVar29 = lVar34 + 0x48;
      FUN_1093af048(lVar29,3);
      lVar34 = lVar34 + 0x48;
      FUN_1093af048(lVar34,0);
      lVar30 = lVar29 + lVar30;
      lVar28 = lVar34 + lVar28;
      plVar32 = (long *)*plVar32;
    } while (plVar32 != (long *)0x0);
    if (lVar30 != 0 && lVar28 != 0) {
      puVar9 = &uStack_100;
      FUN_1093ad6a4(puVar9,3);
      puVar10 = &uStack_100;
      FUN_1093ada18(puVar10,0);
      puVar11 = &uStack_100;
      FUN_1093ada18(puVar11,1);
      puVar12 = &uStack_100;
      FUN_1093acbe0(puVar12,4);
      puVar13 = &uStack_100;
      FUN_1093adf30(puVar13,0xc);
      lVar29 = puVar10[2];
      lVar34 = puVar10[3];
      func_0x0001056c5718(puVar9 + 2,lVar30 + ((long)(puVar9[3] - puVar9[2]) >> 2));
      uVar33 = (lVar34 - lVar29 >> 2) * -0x5555555555555555;
      FUN_1093aca70(puVar10 + 2,uVar33 + lVar28);
      FUN_1093aca70(puVar11 + 2,uVar33 + lVar28);
      func_0x0001093acb2c(puVar12 + 2,uVar33 + lVar28);
      func_0x000107c31950(puVar13 + 2,uVar33 + lVar28);
      for (plVar32 = (long *)param_1[0x266]; plVar32 != (long *)0x0; plVar32 = (long *)*plVar32) {
        lVar30 = plVar32[3];
        if (lVar30 != 0) {
          lVar28 = lVar30 + 0x48;
          func_0x0001093af084(lVar28,3);
          if ((lVar28 != 0) && (*(long *)(lVar28 + 0x18) != *(long *)(lVar28 + 0x10))) {
            lVar29 = lVar30 + 0x48;
            FUN_1093a6e30(lVar29,0);
            lVar34 = lVar30 + 0x48;
            FUN_1093a6e30(lVar34,1);
            lVar36 = lVar30 + 0x48;
            func_0x0001093af0cc(lVar36,4);
            lVar30 = lVar30 + 0x48;
            func_0x0001093af114(lVar30,0xc);
            if ((lVar29 != 0) && (lVar34 != 0)) {
              FUN_1093af15c(puVar10 + 2,puVar10[3],*(long *)(lVar29 + 0x10),*(long *)(lVar29 + 0x18)
                            ,(*(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 0x10) >> 2) *
                             -0x5555555555555555);
              FUN_1093af15c(puVar11 + 2,puVar11[3],*(long *)(lVar34 + 0x10),*(long *)(lVar34 + 0x18)
                            ,(*(long *)(lVar34 + 0x18) - *(long *)(lVar34 + 0x10) >> 2) *
                             -0x5555555555555555);
              if (lVar36 != 0) {
                puVar26 = *(undefined2 **)(lVar36 + 0x10);
                puVar3 = *(undefined2 **)(lVar36 + 0x18);
                lVar34 = (long)puVar3 - (long)puVar26;
                if (0 < lVar34) {
                  puVar2 = (undefined2 *)puVar12[3];
                  puVar1 = puVar2;
                  if (puVar12[4] - (long)puVar2 < lVar34) {
                    lVar36 = (long)puVar2 - puVar12[2];
                    uVar18 = lVar34 * -0x5555555555555555 + lVar36 * -0x5555555555555555;
                    if (0x5555555555555555 < uVar18) {
                      FUN_1093ad184();
                    /* WARNING: Does not return */
                      pcVar8 = (code *)SoftwareBreakpoint(1,0x1093a2f28);
                      (*pcVar8)();
                    }
                    lVar22 = puVar12[4] - puVar12[2];
                    uVar24 = lVar22 * 0x5555555555555556;
                    if (uVar24 < uVar18 || uVar24 - uVar18 == 0) {
                      uVar24 = uVar18;
                    }
                    if (0x2aaaaaaaaaaaaaa9 < (ulong)(lVar22 * -0x5555555555555555)) {
                      uVar24 = 0x5555555555555555;
                    }
                    if (uVar24 == 0) {
                      puVar14 = (undefined8 *)0x0;
                    }
                    else {
                      puVar14 = puVar12 + 2;
                      FUN_1093ad198();
                    }
                    puVar1 = (undefined2 *)((long)puVar14 + lVar36);
                    puVar3 = (undefined2 *)((long)puVar1 + lVar34);
                    puVar20 = puVar1;
                    do {
                      uVar7 = *puVar26;
                      *(undefined1 *)(puVar20 + 1) = *(undefined1 *)(puVar26 + 1);
                      *puVar20 = uVar7;
                      puVar26 = (undefined2 *)((long)puVar26 + 3);
                      lVar34 = lVar34 + -3;
                      puVar20 = (undefined2 *)((long)puVar20 + 3);
                    } while (lVar34 != 0);
                    puVar19 = (undefined2 *)puVar12[3];
                    puVar26 = puVar2;
                    puVar20 = puVar3;
                    if (puVar19 != puVar2) {
                      do {
                        uVar7 = *puVar26;
                        *(undefined1 *)(puVar20 + 1) = *(undefined1 *)(puVar26 + 1);
                        *puVar20 = uVar7;
                        puVar26 = (undefined2 *)((long)puVar26 + 3);
                        puVar20 = (undefined2 *)((long)puVar20 + 3);
                      } while (puVar26 != puVar19);
                      puVar26 = (undefined2 *)puVar12[3];
                    }
                    puVar12[3] = puVar2;
                    puVar20 = (undefined2 *)puVar12[2];
                    puVar1 = (undefined2 *)((long)puVar1 + ((long)puVar20 - (long)puVar2));
                    puVar19 = puVar1;
                    if ((long)puVar20 - (long)puVar2 != 0) {
                      do {
                        uVar7 = *puVar20;
                        *(undefined1 *)(puVar19 + 1) = *(undefined1 *)(puVar20 + 1);
                        *puVar19 = uVar7;
                        puVar20 = (undefined2 *)((long)puVar20 + 3);
                        puVar19 = (undefined2 *)((long)puVar19 + 3);
                      } while (puVar20 != puVar2);
                      puVar20 = (undefined2 *)puVar12[2];
                    }
                    puVar12[2] = puVar1;
                    puVar12[3] = (long)puVar3 + ((long)puVar26 - (long)puVar2);
                    puVar12[4] = (long)puVar14 + uVar24 * 3;
                    if (puVar20 != (undefined2 *)0x0) {
                      __ZdlPv(puVar20);
                    }
                  }
                  else {
                    for (; puVar26 != puVar3; puVar26 = (undefined2 *)((long)puVar26 + 3)) {
                      uVar7 = *puVar26;
                      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar26 + 1);
                      *puVar2 = uVar7;
                      puVar2 = (undefined2 *)((long)puVar2 + 3);
                      puVar1 = (undefined2 *)((long)puVar1 + 3);
                    }
                    puVar12[3] = puVar1;
                  }
                }
              }
              if (lVar30 != 0) {
                FUN_1093af564(puVar13 + 2,puVar13[3],*(long *)(lVar30 + 0x10),
                              *(long *)(lVar30 + 0x18),
                              *(long *)(lVar30 + 0x18) - *(long *)(lVar30 + 0x10));
              }
              lVar30 = *(long *)(lVar28 + 0x10);
              if (*(long *)(lVar28 + 0x18) != lVar30) {
                uVar18 = 0;
                do {
                  puStack_90 = (undefined8 *)
                               CONCAT44(puStack_90._4_4_,*(int *)(lVar30 + uVar18 * 4) + (int)uVar33
                                       );
                  func_0x0001093aa148(puVar9 + 2,&puStack_90);
                  uVar18 = uVar18 + 1;
                  lVar30 = *(long *)(lVar28 + 0x10);
                } while (uVar18 < (ulong)(*(long *)(lVar28 + 0x18) - lVar30 >> 2));
              }
              uVar33 = (ulong)(uint)((int)uVar33 +
                                    (int)((ulong)(*(long *)(lVar29 + 0x18) -
                                                 *(long *)(lVar29 + 0x10)) >> 2) * -0x55555555);
            }
          }
        }
      }
    }
  }
  if (0 < (int)param_1[2]) {
    iVar27 = 0;
    do {
      puVar9 = &uStack_100;
      FUN_1093ad6a4(puVar9,3);
      puVar10 = &uStack_100;
      FUN_1093ada18(puVar10,0);
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_a0 = 0;
      lStack_a8 = 0;
      lStack_b0 = 0;
      lVar30 = puVar9[2];
      puStack_90 = &uStack_88;
      if (puVar9[3] == lVar30) {
        uStack_a0 = 0;
        lStack_b0 = 0;
      }
      else {
        lVar29 = 0;
        lVar28 = 1;
        do {
          uVar35 = *(uint *)(lVar30 + lVar29);
          uVar33 = (ulong)uVar35;
          uVar38 = *(uint *)(lVar30 + lVar28 * 4);
          uVar18 = (ulong)uVar38;
          uVar5 = ((uint *)(lVar30 + lVar29))[2];
          uVar24 = (ulong)uVar5;
          lVar30 = puVar10[2];
          pfVar23 = (float *)(lVar30 + uVar33 * 0xc);
          fVar39 = *pfVar23;
          pfVar25 = (float *)(lVar30 + uVar18 * 0xc);
          fVar40 = *pfVar25;
          pfVar21 = (float *)(lVar30 + uVar24 * 0xc);
          fVar43 = *pfVar21;
          uVar44 = *(undefined8 *)(pfVar23 + 1);
          uVar45 = *(undefined8 *)(pfVar25 + 1);
          uVar47 = *(undefined8 *)(pfVar21 + 1);
          fVar50 = (float)uVar44;
          fVar49 = (float)uVar45 - fVar50;
          fVar42 = (float)((ulong)uVar44 >> 0x20);
          fVar46 = (float)((ulong)uVar45 >> 0x20);
          fVar50 = (float)uVar47 - fVar50;
          fVar48 = (float)((ulong)uVar47 >> 0x20);
          fVar41 = fVar50 * -(fVar46 - fVar42) + (fVar48 - fVar42) * fVar49;
          fVar42 = (fVar48 - fVar42) * -(fVar40 - fVar39) + (fVar43 - fVar39) * (fVar46 - fVar42);
          fVar39 = -(fVar49 * (fVar43 - fVar39)) + fVar50 * (fVar40 - fVar39);
          fVar40 = fVar41 * fVar41 + fVar42 * fVar42 + fVar39 * fVar39;
          if (0.0 < fVar40) {
            fVar39 = fVar39 / SQRT(fVar40);
          }
          if (0.7071 <= fVar39) {
            uVar15 = uVar33;
            FUN_1093af76c(uVar33,uVar18,puVar10 + 2,&puStack_90);
            FUN_1093af76c(uVar33,uVar24,puVar10 + 2,&puStack_90);
            FUN_1093af76c(uVar18,uVar24,puVar10 + 2,&puStack_90);
            uStack_b4 = uVar35;
            func_0x0001093aa148(&lStack_b0,&uStack_b4);
            uVar37 = (uint)uVar15;
            uStack_b4 = uVar37;
            func_0x0001093aa148(&lStack_b0,&uStack_b4);
            uVar35 = (uint)uVar33;
            uStack_b4 = uVar35;
            func_0x0001093aa148(&lStack_b0,&uStack_b4);
            uStack_b4 = uVar38;
            func_0x0001093aa148(&lStack_b0,&uStack_b4);
            uVar38 = (uint)uVar18;
            uStack_b4 = uVar38;
            func_0x0001093aa148(&lStack_b0,&uStack_b4);
            uStack_b4 = uVar37;
            func_0x0001093aa148(&lStack_b0,&uStack_b4);
            uStack_b4 = uVar5;
            func_0x0001093aa148(&lStack_b0,&uStack_b4);
            uStack_b4 = uVar35;
            func_0x0001093aa148(&lStack_b0,&uStack_b4);
            uStack_b4 = uVar38;
            func_0x0001093aa148(&lStack_b0,&uStack_b4);
            uStack_b4 = uVar37;
            func_0x0001093aa148(&lStack_b0,&uStack_b4);
            uStack_b4 = uVar38;
            func_0x0001093aa148(&lStack_b0,&uStack_b4);
            uStack_b4 = uVar35;
            func_0x0001093aa148(&lStack_b0,&uStack_b4);
          }
          else {
            FUN_109231afc(&lStack_b0);
            FUN_109231afc(&lStack_b0,puVar9[2] + lVar29 + 4);
            FUN_109231afc(&lStack_b0,puVar9[2] + lVar29 + 8);
          }
          lVar30 = puVar9[2];
          uVar33 = lVar28 + 2;
          lVar28 = lVar28 + 3;
          lVar29 = lVar29 + 0xc;
        } while (uVar33 < (ulong)(puVar9[3] - lVar30 >> 2));
      }
      puVar9[3] = lStack_a8;
      puVar9[2] = lStack_b0;
      uVar44 = puVar9[4];
      puVar9[4] = uStack_a0;
      lStack_b0 = lVar30;
      uStack_a0 = uVar44;
      if (lVar30 != 0) {
        lStack_a8 = lVar30;
        __ZdlPv();
      }
      FUN_1093afa88(uStack_88);
      iVar27 = iVar27 + 1;
    } while (iVar27 < (int)param_1[2]);
  }
  (**(code **)(*param_1 + 0x18))(param_1,&uStack_100,param_3);
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x4000;
  uVar33 = *(ulong *)(param_3 + 0x120);
  if (uVar33 == 0) {
    uVar33 = *(ulong *)(param_3 + 8);
    if ((uVar33 & 1) != 0) {
      uVar33 = *(ulong *)(uVar33 & 0xfffffffffffffffe);
    }
    func_0x000109312090();
    *(ulong *)(param_3 + 0x120) = uVar33;
  }
  puVar9 = &uStack_100;
  func_0x0001093af084(puVar9,3);
  if (puVar9 != (undefined8 *)0x0) {
    puVar31 = (undefined4 *)puVar9[2];
    puVar4 = (undefined4 *)puVar9[3];
    if (puVar31 != puVar4) {
      iVar27 = *(int *)(uVar33 + 0x30);
      iVar17 = *(int *)(uVar33 + 0x34);
      do {
        uVar6 = *puVar31;
        iVar16 = iVar27;
        if (iVar27 == iVar17) {
          func_0x000107c282d8((int *)(uVar33 + 0x30),iVar27,iVar27 + 1);
          iVar16 = *(int *)(uVar33 + 0x30);
          iVar17 = *(int *)(uVar33 + 0x34);
        }
        iVar27 = iVar16 + 1;
        *(int *)(uVar33 + 0x30) = iVar27;
        *(undefined4 *)(*(long *)(uVar33 + 0x38) + (long)iVar16 * 4) = uVar6;
        puVar31 = puVar31 + 1;
      } while (puVar31 != puVar4);
    }
  }
  func_0x0001093a5f94(&uStack_100);
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  return;
}



/* Entry: 1093a2fc4; end: 1093a2fc7;  */

undefined8 * FUN_1093a2fc4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110af53d8;
  func_0x0001093a6220(param_1 + 3);
  func_0x0001093a6324(param_1 + 0x264);
  param_1[0x269] = 0x80017fff7fff7fff;
  *(undefined4 *)(param_1 + 0x26a) = 0x80018001;
  *(undefined8 *)((long)param_1 + 0x135c) = 0;
  *(undefined8 *)((long)param_1 + 0x1364) = 0;
  *(undefined8 *)((long)param_1 + 0x1354) = 0;
  func_0x0001093a5e88(param_1 + 0x27e);
  func_0x0001093a5e88(param_1 + 0x279);
  func_0x0001093a5e88(param_1 + 0x274);
  _free(param_1[0x270]);
  param_1[0x273] = 0;
  param_1[0x272] = 0;
  param_1[0x271] = 0;
  param_1[0x270] = 0;
  func_0x0001093a5ed0(param_1 + 0x264);
  func_0x0001093a6118(param_1 + 0x1d);
  if (param_1[0x1a] != 0) {
    param_1[0x1b] = param_1[0x1a];
    __ZdlPv();
  }
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x12;
  FUN_1093a5560(&puStack_28);
  func_0x0001093a5800(param_1 + 0xd);
  puStack_28 = param_1 + 8;
  FUN_1093a4eb8(&puStack_28);
  return param_1;
}



/* Entry: 1093a2fc8; end: 1093a38f3;  */

void FUN_1093a2fc8(undefined8 param_1,long param_2,long param_3)

{
  byte *pbVar1;
  undefined **ppuVar2;
  ulong *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined2 *puVar16;
  ulong uVar17;
  float *pfVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 extraout_var;
  undefined8 uVar31;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined ***pppuStack_1758;
  long *plStack_1750;
  undefined ***pppuStack_1748;
  undefined1 *puStack_1740;
  code *pcStack_1738;
  long lStack_1730;
  long lStack_1728;
  undefined8 uStack_1720;
  undefined8 uStack_1718;
  long lStack_1708;
  long lStack_1700;
  float fStack_16f0;
  float fStack_16ec;
  byte bStack_16e8;
  undefined7 uStack_16e7;
  undefined7 uStack_16e0;
  char cStack_16d9;
  float fStack_16d8;
  float fStack_16d4;
  float fStack_16d0;
  float fStack_16cc;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  undefined2 uStack_16a6;
  undefined2 uStack_16a4;
  undefined2 uStack_16a2;
  undefined **appuStack_16a0 [2];
  undefined4 uStack_1690;
  undefined8 uStack_258;
  int iStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
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
  undefined1 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [40];
  long lStack_120;
  long lStack_118;
  long *plStack_110;
  long lStack_108;
  float fStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1093a3c10(appuStack_16a0);
  appuStack_16a0[0] = &PTR_FUN_110af56b8;
  uStack_258 = 0x41f0000040a00000;
  iStack_250 = 0;
  lStack_240 = 0;
  lStack_248 = 0;
  uStack_230 = 0;
  uStack_238 = 0;
  uStack_220 = 0;
  uStack_228 = 0;
  uStack_190 = 0x404000003d4ccccd;
  uStack_188 = 0x1400000014;
  uStack_180 = 0;
  uStack_16c = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_170 = 0x1001;
  uStack_150 = NEON_fmov(0x3f800000,4);
  FUN_1093a4588(auStack_148,0x10);
  lStack_108 = 0;
  plStack_110 = (long *)0x0;
  lStack_118 = 0;
  lStack_120 = 0;
  fStack_100 = 1.0;
  plStack_f0 = (long *)0x0;
  plStack_f8 = (long *)0x0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0;
  func_0x0001093b05b0(&plStack_f8);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  func_0x0001093b0afc(&lStack_120,(long)(1048576.0 / fStack_100));
  fVar25 = (float)uStack_190 * 8.0;
  uStack_150 = CONCAT44(1.0 / fVar25,fVar25);
  if (fVar25 < uStack_190._4_4_) {
    uStack_190 = CONCAT44(fVar25,(float)uStack_190);
  }
  FUN_1093e3918(&lStack_1708,param_1);
  iVar9 = (int)((ulong)(lStack_1700 - lStack_1708) >> 2);
  iStack_250 = *(int *)(param_3 + 0x38);
  if (iVar9 <= *(int *)(param_3 + 0x38)) {
    iStack_250 = iVar9;
  }
  ppuVar10 = &PTR_PTR_1132d6d90;
  if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
    ppuVar10 = *(undefined ***)(param_2 + 0x30);
  }
  FUN_1093ca0a8(&fStack_16f0,ppuVar10,0);
  uStack_1e8 = uStack_16c8;
  auVar26._4_4_ = fStack_16ec;
  auVar26._0_4_ = fStack_16f0;
  uStack_1d8 = uStack_16b8;
  uStack_1e0 = uStack_16c0;
  fVar28 = (float)uStack_16e0;
  fVar39 = (float)(CONCAT17(cStack_16d9,uStack_16e0) >> 0x20);
  fVar48 = (float)CONCAT71(uStack_16e7,bStack_16e8);
  fVar25 = (float)((uint7)uStack_16e7 >> 0x18);
  fVar46 = fVar39 * fVar48 - fStack_16ec * fStack_16d8;
  fVar47 = fVar39 * fVar25 - fStack_16ec * fStack_16d4;
  fVar49 = fStack_16f0 * fStack_16d8 - fVar28 * fVar48;
  fVar50 = fStack_16f0 * fStack_16d4 - fVar28 * fVar25;
  fVar42 = (float)uStack_16c8;
  fVar44 = (float)((ulong)uStack_16c8 >> 0x20);
  fVar36 = (float)((ulong)uStack_16b8 >> 0x20);
  fVar53 = (float)uStack_16b8;
  fVar52 = (float)((ulong)uStack_16c0 >> 0x20);
  fVar37 = (float)uStack_16c0;
  fVar40 = fStack_16d0 * fVar36 - fVar44 * fVar37;
  fVar41 = fStack_16cc * fVar36 - fVar44 * fVar52;
  fVar43 = fVar37 * fVar42 - fVar53 * fStack_16d0;
  fVar45 = fVar52 * fVar42 - fVar53 * fStack_16cc;
  fVar54 = fStack_16f0 * fVar39 - fVar28 * fStack_16ec;
  fVar55 = fStack_16d4 * fVar48 - fVar25 * fStack_16d8;
  fVar51 = fVar52 * fStack_16d0 - fStack_16cc * fVar37;
  fVar56 = fVar36 * fVar42 - fVar44 * fVar53;
  auVar58._4_4_ = fVar41;
  auVar58._0_4_ = fVar40;
  auVar58._8_4_ = fVar43;
  auVar58._12_4_ = fVar45;
  auVar58 = NEON_rev64(auVar58,4);
  auVar59 = NEON_fmov(0x3f800000,4);
  fVar57 = auVar59._0_4_ /
           ((fVar55 * fVar51 + fVar54 * fVar56) -
           (fVar46 * fVar40 + fVar49 * auVar58._0_4_ + fVar47 * fVar43 + fVar50 * auVar58._8_4_));
  auVar32._4_4_ = fVar47;
  auVar32._0_4_ = fVar46;
  auVar32._8_4_ = fVar49;
  auVar32._12_4_ = fVar50;
  auVar60._4_4_ = fVar47;
  auVar60._0_4_ = fVar46;
  auVar60._8_4_ = fVar49;
  auVar60._12_4_ = fVar50;
  auVar60 = NEON_ext(auVar32,auVar60,0xc,1);
  auVar34._8_8_ = uStack_16b8;
  auVar34._0_8_ = uStack_16c8;
  auVar32 = NEON_rev64(auVar34,4);
  auVar59._4_4_ = fVar41;
  auVar59._0_4_ = fVar40;
  auVar59._8_4_ = fVar43;
  auVar59._12_4_ = fVar45;
  auVar35._4_4_ = fVar41;
  auVar35._0_4_ = fVar40;
  auVar35._8_4_ = fVar43;
  auVar35._12_4_ = fVar45;
  auVar35 = NEON_ext(auVar59,auVar35,0xc,1);
  auVar26._8_8_ = CONCAT17(cStack_16d9,uStack_16e0);
  auVar58 = NEON_rev64(auVar26,4);
  auVar29._0_4_ = (fStack_16f0 * fVar56 - (fVar48 * fVar40 + fVar25 * fVar43)) * fVar57;
  auVar27._0_4_ =
       (fVar48 * fVar51 - (fStack_16f0 * auVar35._0_4_ - auVar58._0_4_ * fVar43)) * fVar57;
  auVar33._4_4_ = (fVar39 * fVar56 - (fStack_16d8 * fVar41 + fStack_16d4 * fVar45)) * fVar57;
  auVar33._0_4_ = (fStack_16ec * fVar56 - (fVar48 * fVar41 + fVar25 * fVar45)) * -fVar57;
  auVar33._8_4_ =
       (fStack_16cc * fVar55 - (fVar44 * auVar60._4_4_ - auVar32._4_4_ * fVar47)) * -fVar57;
  auVar33._12_4_ = (fVar52 * fVar55 - (fVar36 * auVar60._4_4_ - auVar32._12_4_ * fVar47)) * fVar57;
  auVar59 = NEON_rev64(auVar33,4);
  uStack_1c8 = auVar59._8_8_;
  uStack_1d0 = auVar59._0_8_;
  auVar29._4_4_ = (fVar28 * fVar56 - (fStack_16d8 * fVar40 + fStack_16d4 * fVar43)) * -fVar57;
  auVar29._8_4_ =
       (fStack_16d0 * fVar55 - (fVar42 * auVar60._0_4_ - auVar32._0_4_ * fVar49)) * fVar57;
  auVar29._12_4_ = (fVar37 * fVar55 - (fVar53 * auVar60._0_4_ - auVar32._8_4_ * fVar49)) * -fVar57;
  auVar59 = NEON_rev64(auVar29,4);
  uStack_1b8 = auVar59._8_8_;
  uStack_1c0 = auVar59._0_8_;
  auVar30._4_4_ =
       (fStack_16d4 * fVar51 - (fVar39 * auVar35._4_4_ - auVar58._12_4_ * fVar41)) * fVar57;
  auVar30._0_4_ =
       (fVar25 * fVar51 - (fStack_16ec * auVar35._4_4_ - auVar58._4_4_ * fVar41)) * -fVar57;
  auVar30._8_4_ = (fVar44 * fVar54 - (fStack_16d0 * fVar47 + fStack_16cc * fVar50)) * -fVar57;
  auVar30._12_4_ = (fVar36 * fVar54 - (fVar37 * fVar47 + fVar52 * fVar50)) * fVar57;
  auVar59 = NEON_rev64(auVar30,4);
  uStack_1a8 = auVar59._8_8_;
  uStack_1b0 = auVar59._0_8_;
  auVar27._4_4_ =
       (fStack_16d8 * fVar51 - (fVar28 * auVar35._0_4_ - auVar58._8_4_ * fVar43)) * -fVar57;
  auVar27._8_4_ = (fVar42 * fVar54 - (fStack_16d0 * fVar46 + fStack_16cc * fVar49)) * fVar57;
  auVar27._12_4_ = (fVar53 * fVar54 - (fVar37 * fVar46 + fVar52 * fVar49)) * -fVar57;
  auVar58 = NEON_rev64(auVar27,4);
  uStack_198 = auVar58._8_8_;
  uStack_1a0 = auVar58._0_8_;
  ppuVar10 = *(undefined ***)(param_3 + 0x128);
  lStack_240 = lStack_248;
  if (0 < iStack_250) {
    lVar22 = 0;
    ppuVar2 = &PTR_PTR_1132d70f0;
    if (ppuVar10 != (undefined **)0x0) {
      ppuVar2 = ppuVar10;
    }
    lVar24 = 8;
    do {
      puVar11 = ppuVar2[0x1e];
      ppuVar10 = ppuVar2 + 0x1e;
      if (((ulong)puVar11 & 1) != 0) {
        ppuVar10 = (undefined **)(puVar11 + lVar24 + -1);
      }
      FUN_109340914(&fStack_16f0,0,*ppuVar10);
      fVar25 = (float)uStack_1a0 +
               (float)uStack_1d0 * fStack_16d8 + (float)uStack_1c0 * fStack_16d4 +
               (float)uStack_1b0 * fStack_16d0;
      uStack_1718 = CONCAT44((float)((ulong)uStack_198 >> 0x20) +
                             uStack_1c8._4_4_ * fStack_16d8 + uStack_1b8._4_4_ * fStack_16d4 +
                             (float)((ulong)uStack_1a8 >> 0x20) * fStack_16d0,
                             (float)uStack_198 +
                             (float)uStack_1c8 * fStack_16d8 + (float)uStack_1b8 * fStack_16d4 +
                             (float)uStack_1a8 * fStack_16d0);
      uStack_1720 = CONCAT44((float)((ulong)uStack_1a0 >> 0x20) +
                             uStack_1d0._4_4_ * fStack_16d8 + uStack_1c0._4_4_ * fStack_16d4 +
                             (float)((ulong)uStack_1b0 >> 0x20) * fStack_16d0,fVar25);
      uStack_16a6._0_1_ = (char)(long)fVar25;
      FUN_1093aa574(&lStack_248,&uStack_16a6);
      uStack_16a6._0_1_ = (undefined1)(long)uStack_1720._4_4_;
      FUN_1093aa574(&lStack_248,&uStack_16a6);
      uStack_16a6 = CONCAT11(uStack_16a6._1_1_,(char)(long)(float)uStack_1718);
      FUN_1093aa574(&lStack_248,&uStack_16a6);
      if ((bStack_16e8 & 1) != 0) {
        func_0x0001053936ac(&bStack_16e8);
      }
      lVar22 = lVar22 + 1;
      lVar24 = lVar24 + 8;
    } while (lVar22 < iStack_250);
    ppuVar10 = *(undefined ***)(param_3 + 0x128);
  }
  ppuVar2 = &PTR_PTR_1132d70f0;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar2 = ppuVar10;
  }
  uStack_190 = CONCAT44(uStack_190._4_4_,0x3f800000);
  uStack_150 = 0x3e00000041000000;
  if (8.0 < uStack_190._4_4_) {
    uStack_190 = 0x410000003f800000;
  }
  plVar19 = plStack_110;
  if (lStack_108 != 0) {
    while (plVar19 != (long *)0x0) {
      plVar19 = (long *)*plVar19;
      __ZdlPv();
    }
    plStack_110 = (long *)0x0;
    if (lStack_118 != 0) {
      lVar22 = 0;
      do {
        *(undefined8 *)(lStack_120 + lVar22 * 8) = 0;
        lVar22 = lVar22 + 1;
      } while (lStack_118 != lVar22);
    }
    lStack_108 = 0;
  }
  func_0x0001093a6264(auStack_148);
  plVar19 = plStack_f8;
  uStack_d8 = uStack_e0;
  plVar20 = plStack_f0;
  while (plVar5 = plVar20, plVar5 != plVar19) {
    plVar20 = plVar5 + -3;
    if (*plVar20 != 0) {
      plVar5[-2] = *plVar20;
      __ZdlPv();
    }
  }
  plStack_f0 = plVar19;
  uStack_c8 = 0;
  func_0x0001093b05b0(&plStack_f8);
  lStack_1730 = param_2;
  lStack_1728 = param_3;
  if (2 < (ulong)(lStack_240 - lStack_248)) {
    uVar23 = 0;
    plVar19 = (long *)0x7;
    uVar31 = extraout_var;
    do {
      pbVar1 = (byte *)(lStack_248 + uVar23 * 3);
      fVar28 = (float)NEON_ucvtf((uint)*pbVar1);
      fVar25 = (float)NEON_ucvtf((uint)pbVar1[1]);
      fVar39 = (float)NEON_ucvtf((uint)pbVar1[2]);
      uStack_1720 = CONCAT44(fVar25,fVar28);
      uStack_16a6 = (undefined2)(int)(fVar28 * uStack_150._4_4_);
      uStack_16a4 = (undefined2)(int)(fVar25 * uStack_150._4_4_);
      uStack_16a2 = (undefined2)(int)(uStack_150._4_4_ * fVar39);
      puVar6 = &uStack_190;
      uStack_1718 = uVar31;
      FUN_1093b0d5c(puVar6,&uStack_16a6);
      uVar38 = puVar6[0x800];
      iVar9 = (int)(fVar39 - *(float *)(puVar6 + 0x801));
      if (6 < iVar9) {
        iVar9 = 7;
      }
      puVar11 = ppuVar2[0x1b];
      ppuVar10 = ppuVar2 + 0x1b;
      if (((ulong)puVar11 & 1) != 0) {
        ppuVar10 = (undefined **)(puVar11 + (long)(int)uVar23 * 8 + 7);
      }
      puVar11 = *ppuVar10;
      uVar4 = *(uint *)(puVar11 + 0x18);
      uVar31 = extraout_var_00;
      if (4 < (int)uVar4) {
        FUN_10937e740(&fStack_16f0,&UNK_10f569024);
        FUN_109388c6c(1,&UNK_10f568f53,&UNK_10f569017,0x1fd,&fStack_16f0);
        uVar31 = extraout_var_01;
        if (cStack_16d9 < '\0') {
          __ZdlPv(CONCAT44(fStack_16ec,fStack_16f0));
          uVar31 = extraout_var_02;
        }
        uVar4 = *(uint *)(puVar11 + 0x18);
      }
      uVar12 = (ulong)uVar4;
      if (0 < (int)uVar4) {
        uVar38 = NEON_smin(CONCAT44((int)(float)(int)(uStack_1720._4_4_ -
                                                     (float)((ulong)uVar38 >> 0x20)),
                                    (int)(float)(int)((float)uStack_1720 - (float)uVar38)),
                           0x700000007,4);
        lVar22 = (long)((int)((ulong)uVar38 >> 0x20) << 3);
        uVar13 = *(ulong *)(puVar11 + 0x10);
        puVar14 = (ulong *)(uVar13 + 7);
        puVar15 = puVar6 + (long)(int)uVar38 * 4 + lVar22 * 4 + (long)(iVar9 << 6) * 4 + 2;
        puVar16 = (undefined2 *)
                  ((long)puVar6 +
                  (long)(iVar9 << 6) * 0x20 + lVar22 * 0x20 + (long)(int)uVar38 * 0x20 + 4);
        do {
          puVar3 = (ulong *)(puVar11 + 0x10);
          if ((uVar13 & 1) != 0) {
            puVar3 = puVar14;
          }
          uVar17 = *puVar3;
          *(undefined4 *)puVar15 = *(undefined4 *)(uVar17 + 0x1c);
          *puVar16 = (short)*(undefined4 *)(uVar17 + 0x18);
          puVar14 = puVar14 + 1;
          uVar12 = uVar12 - 1;
          puVar15 = (undefined8 *)((long)puVar15 + 4);
          puVar16 = puVar16 + 1;
        } while (uVar12 != 0);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 < (ulong)(lStack_240 - lStack_248) / 3);
  }
  lVar24 = lStack_1728;
  lVar22 = lStack_1730;
  if (*(int *)(lStack_1730 + 0x18) != 0) {
    plVar19 = (long *)0x1470;
    lVar21 = (long)*(int *)(lStack_1730 + 0x18) << 2;
    pfVar18 = *(float **)(lStack_1730 + 0x20);
    do {
      fStack_16f0 = *pfVar18;
      FUN_10923b3a0(&uStack_230,&fStack_16f0);
      lVar21 = lVar21 + -4;
      pfVar18 = pfVar18 + 1;
    } while (lVar21 != 0);
  }
  uStack_1690 = *(undefined4 *)(lVar22 + 0x38);
  FUN_1093a26a0(appuStack_16a0,&lStack_1708,lVar24);
  if (lStack_1708 != 0) {
    lStack_1700 = lStack_1708;
    __ZdlPv();
  }
  pppuVar7 = appuStack_16a0;
  FUN_1093a38f4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  FUN_1093a38f4(appuStack_16a0);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_1738 = FUN_1093a38f4;
  plStack_1750 = plVar19;
  pppuStack_1748 = pppuVar7;
  puStack_1740 = &stack0xfffffffffffffff0;
  *pppuVar8 = &PTR_FUN_110af56b8;
  if (pppuVar8[0x2bd] != (undefined **)0x0) {
    pppuVar8[0x2be] = pppuVar8[0x2bd];
    __ZdlPv();
  }
  if (pppuVar8[0x2b8] != (undefined **)0x0) {
    pppuVar8[0x2b9] = pppuVar8[0x2b8];
    __ZdlPv();
  }
  FUN_1093b0a78(pppuVar8 + 0x2b5);
  FUN_1093b0ccc(pppuVar8 + 0x2b0);
  pppuStack_1758 = pppuVar8 + 0x2ab;
  FUN_1093a4eb8(&pppuStack_1758);
  if (pppuVar8[0x28e] != (undefined **)0x0) {
    pppuVar8[0x28f] = pppuVar8[0x28e];
    __ZdlPv();
  }
  if (pppuVar8[0x28b] != (undefined **)0x0) {
    pppuVar8[0x28c] = pppuVar8[0x28b];
    __ZdlPv();
  }
  FUN_1093a3c74(pppuVar8);
  return;
}



/* Entry: 1093a38f4; end: 1093a3997;  */

void FUN_1093a38f4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110af56b8;
  if (param_1[0x2bd] != 0) {
    param_1[0x2be] = param_1[0x2bd];
    __ZdlPv();
  }
  if (param_1[0x2b8] != 0) {
    param_1[0x2b9] = param_1[0x2b8];
    __ZdlPv();
  }
  FUN_1093b0a78(param_1 + 0x2b5);
  FUN_1093b0ccc(param_1 + 0x2b0);
  puStack_28 = param_1 + 0x2ab;
  FUN_1093a4eb8(&puStack_28);
  if (param_1[0x28e] != 0) {
    param_1[0x28f] = param_1[0x28e];
    __ZdlPv();
  }
  if (param_1[0x28b] != 0) {
    param_1[0x28c] = param_1[0x28b];
    __ZdlPv();
  }
  FUN_1093a3c74(param_1);
  return;
}



/* Entry: 1093a3998; end: 1093a39ab;  */

void FUN_1093a3998(undefined8 param_1,byte *param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if ((byte *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    pbVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_1093a3a68(param_4,0,pbVar1);
        pbVar1 = pbVar1 + 0x28;
        param_4 = param_4 + 0x28;
      } while (pbVar1 != param_3);
      param_2 = param_2 + 8;
      do {
        if ((*param_2 & 1) != 0) {
          func_0x0001053936ac(param_2);
        }
        pbVar1 = param_2 + 0x20;
        param_2 = param_2 + 0x28;
      } while (pbVar1 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 1093a39ac; end: 1093a39ef;  */

void FUN_1093a39ac(undefined8 param_1,byte *param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  
  if ((byte *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    pbVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_1093a3a68(param_4,0,pbVar1);
        pbVar1 = pbVar1 + 0x28;
        param_4 = param_4 + 0x28;
      } while (pbVar1 != param_3);
      param_2 = param_2 + 8;
      do {
        if ((*param_2 & 1) != 0) {
          func_0x0001053936ac(param_2);
        }
        pbVar1 = param_2 + 0x20;
        param_2 = param_2 + 0x28;
      } while (pbVar1 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 1093a39f0; end: 1093a3a67;  */

void FUN_1093a39f0(undefined8 param_1,byte *param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  
  pbVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_1093a3a68(param_4,0,pbVar1);
      pbVar1 = pbVar1 + 0x28;
      param_4 = param_4 + 0x28;
    } while (pbVar1 != param_3);
    param_2 = param_2 + 8;
    do {
      if ((*param_2 & 1) != 0) {
        func_0x0001053936ac(param_2);
      }
      pbVar1 = param_2 + 0x20;
      param_2 = param_2 + 0x28;
    } while (pbVar1 != param_3);
  }
  return;
}



/* Entry: 1093a3a68; end: 1093a3b33;  */

undefined8 * FUN_1093a3a68(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_110aefbe0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_1 != param_3) {
    uVar3 = param_2;
    if ((param_2 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 & 0xfffffffffffffffe);
    }
    uVar4 = param_3[1];
    uVar5 = uVar4;
    if ((uVar4 & 1) != 0) {
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    if (uVar3 == uVar5) {
      lVar2 = 0;
      param_1[1] = uVar4;
      param_3[1] = param_2;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
      *(undefined4 *)(param_3 + 2) = 0;
      do {
        uVar1 = *(undefined1 *)((long)param_1 + lVar2 + 0x18);
        *(undefined1 *)((long)param_1 + lVar2 + 0x18) =
             *(undefined1 *)((long)param_3 + lVar2 + 0x18);
        *(undefined1 *)((long)param_3 + lVar2 + 0x18) = uVar1;
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0xc);
    }
    else {
      func_0x0001093409d8(param_1);
      FUN_1093408b0(param_1,param_3);
    }
  }
  return param_1;
}



/* Entry: 1093a3b34; end: 1093a3b8f;  */

long * FUN_1093a3b34(long *param_1)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x28;
    pbVar2 = (byte *)(lVar3 + -0x20);
    lVar3 = lVar3 + -0x28;
    if ((*pbVar2 & 1) != 0) {
      func_0x0001053936ac();
      lVar3 = param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1093a3b90; end: 1093a3c0f;  */

void FUN_1093a3b90(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  
  puVar3 = (undefined8 *)*param_1;
  pbVar4 = (byte *)*puVar3;
  if (pbVar4 != (byte *)0x0) {
    pbVar2 = pbVar4;
    if ((byte *)puVar3[1] != pbVar4) {
      pbVar2 = (byte *)puVar3[1] + -0x20;
      do {
        if ((*pbVar2 & 1) != 0) {
          func_0x0001053936ac(pbVar2);
        }
        pbVar1 = pbVar2 + -8;
        pbVar2 = pbVar2 + -0x28;
      } while (pbVar1 != pbVar4);
      pbVar2 = *(byte **)*param_1;
    }
    puVar3[1] = pbVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(pbVar2);
    return;
  }
  return;
}



/* Entry: 1093a3c10; end: 1093a3c73;  */

undefined8 * FUN_1093a3c10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110af53d8;
  uVar1 = NEON_fmov(0x40a00000,4);
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1093a4438(param_1 + 3);
  FUN_1093a5848(param_1 + 0x1d);
  FUN_1093a432c(param_1);
  return param_1;
}



/* Entry: 1093a3c74; end: 1093a3d6f;  */

undefined8 * FUN_1093a3c74(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110af53d8;
  func_0x0001093a6220(param_1 + 3);
  func_0x0001093a6324(param_1 + 0x264);
  param_1[0x269] = 0x80017fff7fff7fff;
  *(undefined4 *)(param_1 + 0x26a) = 0x80018001;
  *(undefined8 *)((long)param_1 + 0x135c) = 0;
  *(undefined8 *)((long)param_1 + 0x1364) = 0;
  *(undefined8 *)((long)param_1 + 0x1354) = 0;
  func_0x0001093a5e88(param_1 + 0x27e);
  func_0x0001093a5e88(param_1 + 0x279);
  func_0x0001093a5e88(param_1 + 0x274);
  _free(param_1[0x270]);
  param_1[0x273] = 0;
  param_1[0x272] = 0;
  param_1[0x271] = 0;
  param_1[0x270] = 0;
  func_0x0001093a5ed0(param_1 + 0x264);
  func_0x0001093a6118(param_1 + 0x1d);
  if (param_1[0x1a] != 0) {
    param_1[0x1b] = param_1[0x1a];
    __ZdlPv();
  }
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x12;
  FUN_1093a5560(&puStack_28);
  func_0x0001093a5800(param_1 + 0xd);
  puStack_28 = param_1 + 8;
  FUN_1093a4eb8(&puStack_28);
  return param_1;
}



/* Entry: 1093a3d70; end: 1093a3d83;  */

void FUN_1093a3d70(void)

{
  FUN_1093a3c74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093a3d84; end: 1093a406b;  */

void FUN_1093a3d84(ulong param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined2 *puVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  undefined2 uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  undefined8 *puVar30;
  uint uVar31;
  float *pfVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  uint uStack_4cc;
  undefined2 uStack_476;
  undefined2 uStack_474;
  undefined2 uStack_472;
  undefined2 auStack_470 [512];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar22 = *(int *)(param_1 + 0x1448);
  uVar25 = param_1;
  uVar15 = param_3;
  if (0 < iVar22) {
    uVar20 = 0;
    uVar17 = 0;
    iVar14 = *(int *)(param_1 + 0x144c);
    uVar4 = *(uint *)(param_1 + 0x1450);
    uVar29 = 8;
    do {
      if (0 < iVar14) {
        uVar28 = 0;
        uStack_4cc = uVar20;
        do {
          if (0 < (int)uVar4) {
            uVar18 = 0;
            uVar31 = 8;
            uVar3 = uStack_4cc;
            do {
              lVar19 = *param_2;
              fVar33 = *(float *)(lVar19 + uVar28 * uVar4 * 4 + (ulong)(uVar4 * iVar14 * uVar17) * 4
                                 + uVar18 * 4);
              fVar34 = *(float *)(param_1 + 0x146c);
              bVar8 = false;
              if ((-fVar34 < fVar33) && (bVar8 = false, !NAN(fVar33) && !NAN(fVar34))) {
                bVar8 = fVar33 < fVar34;
              }
              if (bVar8) {
                bVar8 = false;
                bVar7 = 0;
                lVar23 = 0;
                bVar6 = 0;
                uVar26 = uVar17;
                uVar2 = uVar3;
                uVar5 = uVar3;
                uVar24 = uVar18;
                do {
                  do {
                    uVar25 = (ulong)uVar2;
                    lVar27 = 0;
                    lVar23 = (long)(int)lVar23;
                    do {
                      uVar16 = 0;
                      if ((((int)uVar26 < iVar22) &&
                          (uVar15 = uVar28 + lVar27, (long)uVar15 < (long)iVar14)) &&
                         ((int)uVar24 < (int)uVar4)) {
                        fVar34 = *(float *)(lVar19 + (long)(int)uVar25 * 4);
                        fVar36 = *(float *)(param_1 + 8);
                        fVar33 = fVar36;
                        if (-fVar34 <= fVar36) {
                          fVar33 = -fVar34;
                        }
                        fVar35 = -fVar36;
                        if (-fVar36 <= fVar33) {
                          fVar35 = fVar33;
                        }
                        uVar16 = (undefined2)(int)((fVar35 / fVar36) * 4096.0);
                        fVar33 = -*(float *)(param_1 + 0xc);
                        bVar9 = false;
                        bVar10 = true;
                        bVar11 = false;
                        if (fVar34 < *(float *)(param_1 + 0xc)) {
                          bVar9 = false;
                          bVar10 = false;
                          bVar11 = true;
                          if (!NAN(fVar34) && !NAN(fVar33)) {
                            bVar9 = fVar34 < fVar33;
                            bVar10 = fVar34 == fVar33;
                            bVar11 = false;
                          }
                        }
                        bVar8 = (bool)(bVar8 | (!bVar10 && bVar9 == bVar11));
                        bVar7 = bVar7 | fVar34 < 0.0;
                        bVar9 = fVar34 != 0.0 && fVar34 >= 0.0;
                        uVar15 = (ulong)bVar9;
                        bVar6 = bVar6 | bVar9;
                      }
                      auStack_470[lVar23] = uVar16;
                      lVar23 = lVar23 + 1;
                      uVar25 = (ulong)((int)uVar25 + uVar4);
                      lVar27 = lVar27 + 1;
                    } while (lVar27 != 8);
                    uVar26 = uVar26 + 1;
                    uVar2 = uVar2 + uVar4 * iVar14;
                  } while (uVar26 != uVar29);
                  uVar1 = (int)uVar24 + 1;
                  uVar24 = (ulong)uVar1;
                  uVar2 = uVar5 + 1;
                  uVar26 = uVar17;
                  uVar5 = uVar2;
                } while (uVar1 != uVar31);
                if (bVar8 || (bool)(bVar7 & bVar6)) {
                  fVar33 = *(float *)(param_1 + 0x3c);
                  uStack_476 = (undefined2)(int)((float)(uVar28 & 0xffffffff) * fVar33);
                  uStack_474 = (undefined2)(int)((float)uVar17 * fVar33);
                  uStack_472 = (undefined2)(int)(fVar33 * (float)(uVar18 & 0xffffffff));
                  puVar12 = (undefined2 *)(param_1 + 0x18);
                  FUN_1093a6378(puVar12,&uStack_476);
                  uVar25 = param_3;
                  func_0x0001093a647c(param_3,&uStack_476);
                  lVar19 = 0;
                  do {
                    *puVar12 = *(undefined2 *)((long)auStack_470 + lVar19);
                    puVar12[1] = 1;
                    puVar12 = puVar12 + 6;
                    lVar19 = lVar19 + 2;
                  } while (lVar19 != 0x400);
                }
              }
              uVar18 = uVar18 + 8;
              uVar31 = uVar31 + 8;
              uVar3 = uVar3 + 8;
            } while ((int)uVar18 < (int)uVar4);
          }
          uVar28 = uVar28 + 8;
          uStack_4cc = uStack_4cc + uVar4 * 8;
        } while ((int)uVar28 < iVar14);
      }
      uVar17 = uVar17 + 8;
      uVar29 = uVar29 + 8;
      uVar20 = uVar20 + uVar4 * iVar14 * 8;
    } while ((int)uVar17 < iVar22);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(uint *)(uVar15 + 0x10) = *(uint *)(uVar15 + 0x10) | 0x4000;
  uVar28 = *(ulong *)(uVar15 + 0x120);
  if (uVar28 == 0) {
    uVar28 = *(ulong *)(uVar15 + 8);
    if ((uVar28 & 1) != 0) {
      uVar28 = *(ulong *)(uVar28 & 0xfffffffffffffffe);
    }
    func_0x000109312090();
    *(ulong *)(uVar15 + 0x120) = uVar28;
  }
  plVar13 = param_2;
  FUN_1093a6e30(param_2,0);
  FUN_1093a6e30(param_2,1);
  if (((plVar13 != (long *)0x0) && (param_2 != (long *)0x0)) &&
     (puVar30 = (undefined8 *)plVar13[2], puVar30 != (undefined8 *)plVar13[3])) {
    pfVar32 = (float *)param_2[2];
    do {
      if (pfVar32 == (float *)param_2[3]) break;
      uVar37 = *puVar30;
      fVar33 = *(float *)(puVar30 + 1);
      uVar38 = *(undefined8 *)(uVar25 + 0x1454);
      uVar39 = *(undefined8 *)(uVar25 + 0x1460);
      fVar34 = *(float *)(uVar25 + 0x145c);
      fVar36 = *(float *)(uVar25 + 0x1468);
      iVar22 = *(int *)(uVar28 + 0x10);
      iVar14 = *(int *)(uVar28 + 0x14);
      if (iVar22 == iVar14) {
        FUN_109311970(uVar28 + 0x10,iVar14,iVar14 + 1);
        iVar22 = *(int *)(uVar28 + 0x10);
        iVar14 = *(int *)(uVar28 + 0x14);
      }
      lVar19 = *(long *)(uVar28 + 0x18);
      iVar21 = iVar22 + 1;
      *(int *)(uVar28 + 0x10) = iVar21;
      *(float *)(lVar19 + (long)iVar22 * 4) = (float)uVar37 * (float)uVar38 + (float)uVar39;
      if (iVar21 == iVar14) {
        FUN_109311970(uVar28 + 0x10,iVar14,iVar14 + 1);
        lVar19 = *(long *)(uVar28 + 0x18);
        iVar21 = *(int *)(uVar28 + 0x10);
        iVar14 = *(int *)(uVar28 + 0x14);
      }
      iVar22 = iVar21 + 1;
      *(int *)(uVar28 + 0x10) = iVar22;
      *(float *)(lVar19 + (long)iVar21 * 4) =
           (float)((ulong)uVar37 >> 0x20) * (float)((ulong)uVar38 >> 0x20) +
           (float)((ulong)uVar39 >> 0x20);
      if (iVar22 == iVar14) {
        FUN_109311970(uVar28 + 0x10,iVar14,iVar14 + 1);
        lVar19 = *(long *)(uVar28 + 0x18);
        iVar22 = *(int *)(uVar28 + 0x10);
        iVar14 = *(int *)(uVar28 + 0x14);
      }
      iVar21 = iVar22 + 1;
      *(int *)(uVar28 + 0x10) = iVar21;
      *(float *)(lVar19 + (long)iVar22 * 4) = fVar33 * fVar34 + fVar36;
      fVar33 = *pfVar32;
      if (iVar21 == iVar14) {
        FUN_109311970(uVar28 + 0x10,iVar14,iVar14 + 1);
        lVar19 = *(long *)(uVar28 + 0x18);
        iVar21 = *(int *)(uVar28 + 0x10);
        iVar14 = *(int *)(uVar28 + 0x14);
      }
      iVar22 = iVar21 + 1;
      *(int *)(uVar28 + 0x10) = iVar22;
      *(float *)(lVar19 + (long)iVar21 * 4) = -fVar33;
      fVar33 = pfVar32[1];
      if (iVar22 == iVar14) {
        FUN_109311970(uVar28 + 0x10,iVar14,iVar14 + 1);
        lVar19 = *(long *)(uVar28 + 0x18);
        iVar22 = *(int *)(uVar28 + 0x10);
        iVar14 = *(int *)(uVar28 + 0x14);
      }
      iVar21 = iVar22 + 1;
      *(int *)(uVar28 + 0x10) = iVar21;
      *(float *)(lVar19 + (long)iVar22 * 4) = -fVar33;
      fVar33 = pfVar32[2];
      if (iVar21 == iVar14) {
        FUN_109311970(uVar28 + 0x10,iVar14,iVar14 + 1);
        lVar19 = *(long *)(uVar28 + 0x18);
        iVar21 = *(int *)(uVar28 + 0x10);
        iVar14 = *(int *)(uVar28 + 0x14);
      }
      iVar22 = iVar21 + 1;
      *(int *)(uVar28 + 0x10) = iVar22;
      *(float *)(lVar19 + (long)iVar21 * 4) = -fVar33;
      if (iVar22 == iVar14) {
        FUN_109311970(uVar28 + 0x10,iVar14,iVar14 + 1);
        lVar19 = *(long *)(uVar28 + 0x18);
        iVar22 = *(int *)(uVar28 + 0x10);
        iVar14 = *(int *)(uVar28 + 0x14);
      }
      iVar21 = iVar22 + 1;
      *(int *)(uVar28 + 0x10) = iVar21;
      *(undefined4 *)(lVar19 + (long)iVar22 * 4) = 0x3f000000;
      if (iVar21 == iVar14) {
        FUN_109311970(uVar28 + 0x10,iVar14,iVar14 + 1);
        iVar21 = *(int *)(uVar28 + 0x10);
        lVar19 = *(long *)(uVar28 + 0x18);
      }
      *(int *)(uVar28 + 0x10) = iVar21 + 1;
      *(undefined4 *)(lVar19 + (long)iVar21 * 4) = 0x3f000000;
      pfVar32 = pfVar32 + 3;
      puVar30 = (undefined8 *)((long)puVar30 + 0xc);
    } while (puVar30 != (undefined8 *)plVar13[3]);
  }
  *(undefined4 *)(uVar15 + 0x168) = 3;
  *(uint *)(uVar15 + 0x10) = *(uint *)(uVar15 + 0x10) | 0x40000000;
  return;
}



/* Entry: 1093a406c; end: 1093a432b;  */

void FUN_1093a406c(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x4000;
  uVar6 = *(ulong *)(param_3 + 0x120);
  if (uVar6 == 0) {
    uVar6 = *(ulong *)(param_3 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000109312090();
    *(ulong *)(param_3 + 0x120) = uVar6;
  }
  lVar1 = param_2;
  FUN_1093a6e30(param_2,0);
  FUN_1093a6e30(param_2,1);
  if (((lVar1 != 0) && (param_2 != 0)) &&
     (puVar7 = *(undefined8 **)(lVar1 + 0x10), puVar7 != *(undefined8 **)(lVar1 + 0x18))) {
    pfVar8 = *(float **)(param_2 + 0x10);
    do {
      if (pfVar8 == *(float **)(param_2 + 0x18)) break;
      uVar12 = *puVar7;
      fVar9 = *(float *)(puVar7 + 1);
      uVar13 = *(undefined8 *)(param_1 + 0x1454);
      uVar14 = *(undefined8 *)(param_1 + 0x1460);
      fVar10 = *(float *)(param_1 + 0x145c);
      fVar11 = *(float *)(param_1 + 0x1468);
      iVar5 = *(int *)(uVar6 + 0x10);
      iVar2 = *(int *)(uVar6 + 0x14);
      if (iVar5 == iVar2) {
        FUN_109311970(uVar6 + 0x10,iVar2,iVar2 + 1);
        iVar5 = *(int *)(uVar6 + 0x10);
        iVar2 = *(int *)(uVar6 + 0x14);
      }
      lVar3 = *(long *)(uVar6 + 0x18);
      iVar4 = iVar5 + 1;
      *(int *)(uVar6 + 0x10) = iVar4;
      *(float *)(lVar3 + (long)iVar5 * 4) = (float)uVar12 * (float)uVar13 + (float)uVar14;
      if (iVar4 == iVar2) {
        FUN_109311970(uVar6 + 0x10,iVar2,iVar2 + 1);
        lVar3 = *(long *)(uVar6 + 0x18);
        iVar4 = *(int *)(uVar6 + 0x10);
        iVar2 = *(int *)(uVar6 + 0x14);
      }
      iVar5 = iVar4 + 1;
      *(int *)(uVar6 + 0x10) = iVar5;
      *(float *)(lVar3 + (long)iVar4 * 4) =
           (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar13 >> 0x20) +
           (float)((ulong)uVar14 >> 0x20);
      if (iVar5 == iVar2) {
        FUN_109311970(uVar6 + 0x10,iVar2,iVar2 + 1);
        lVar3 = *(long *)(uVar6 + 0x18);
        iVar5 = *(int *)(uVar6 + 0x10);
        iVar2 = *(int *)(uVar6 + 0x14);
      }
      iVar4 = iVar5 + 1;
      *(int *)(uVar6 + 0x10) = iVar4;
      *(float *)(lVar3 + (long)iVar5 * 4) = fVar9 * fVar10 + fVar11;
      fVar9 = *pfVar8;
      if (iVar4 == iVar2) {
        FUN_109311970(uVar6 + 0x10,iVar2,iVar2 + 1);
        lVar3 = *(long *)(uVar6 + 0x18);
        iVar4 = *(int *)(uVar6 + 0x10);
        iVar2 = *(int *)(uVar6 + 0x14);
      }
      iVar5 = iVar4 + 1;
      *(int *)(uVar6 + 0x10) = iVar5;
      *(float *)(lVar3 + (long)iVar4 * 4) = -fVar9;
      fVar9 = pfVar8[1];
      if (iVar5 == iVar2) {
        FUN_109311970(uVar6 + 0x10,iVar2,iVar2 + 1);
        lVar3 = *(long *)(uVar6 + 0x18);
        iVar5 = *(int *)(uVar6 + 0x10);
        iVar2 = *(int *)(uVar6 + 0x14);
      }
      iVar4 = iVar5 + 1;
      *(int *)(uVar6 + 0x10) = iVar4;
      *(float *)(lVar3 + (long)iVar5 * 4) = -fVar9;
      fVar9 = pfVar8[2];
      if (iVar4 == iVar2) {
        FUN_109311970(uVar6 + 0x10,iVar2,iVar2 + 1);
        lVar3 = *(long *)(uVar6 + 0x18);
        iVar4 = *(int *)(uVar6 + 0x10);
        iVar2 = *(int *)(uVar6 + 0x14);
      }
      iVar5 = iVar4 + 1;
      *(int *)(uVar6 + 0x10) = iVar5;
      *(float *)(lVar3 + (long)iVar4 * 4) = -fVar9;
      if (iVar5 == iVar2) {
        FUN_109311970(uVar6 + 0x10,iVar2,iVar2 + 1);
        lVar3 = *(long *)(uVar6 + 0x18);
        iVar5 = *(int *)(uVar6 + 0x10);
        iVar2 = *(int *)(uVar6 + 0x14);
      }
      iVar4 = iVar5 + 1;
      *(int *)(uVar6 + 0x10) = iVar4;
      *(undefined4 *)(lVar3 + (long)iVar5 * 4) = 0x3f000000;
      if (iVar4 == iVar2) {
        FUN_109311970(uVar6 + 0x10,iVar2,iVar2 + 1);
        iVar4 = *(int *)(uVar6 + 0x10);
        lVar3 = *(long *)(uVar6 + 0x18);
      }
      *(int *)(uVar6 + 0x10) = iVar4 + 1;
      *(undefined4 *)(lVar3 + (long)iVar4 * 4) = 0x3f000000;
      pfVar8 = pfVar8 + 3;
      puVar7 = (undefined8 *)((long)puVar7 + 0xc);
    } while (puVar7 != *(undefined8 **)(lVar1 + 0x18));
  }
  *(undefined4 *)(param_3 + 0x168) = 3;
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x40000000;
  return;
}



/* Entry: 1093a432c; end: 1093a4437;  */

void FUN_1093a432c(long param_1)

{
  double dVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x38) = 0x3e00000041000000;
  if (8.0 < *(float *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x1c) = 0x41000000;
  }
  if ((*(ulong *)(param_1 + 0x1374) >> 0x30 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x1430) = 0x100000000;
    *(undefined4 *)(param_1 + 0x1438) = 2;
    *(undefined8 *)(param_1 + 0x143c) = 0x100000001;
    *(undefined4 *)(param_1 + 0x1444) = 1;
  }
  dVar1 = (double)(int)*(ulong *)(param_1 + 0x1374);
  _log2();
  *(int *)(param_1 + 0x1418) = (int)dVar1;
  *(int *)(param_1 + 0x1374) = 1 << (ulong)((int)dVar1 & 0x1f);
  return;
}



/* Entry: 1093a4438; end: 1093a4543;  */

float * FUN_1093a4438(float *param_1)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  
  param_1[0] = 0.05;
  param_1[1] = 3.0;
  param_1[2] = 2.8026e-44;
  param_1[3] = 2.8026e-44;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x12) = 0x1001;
  *(undefined4 *)((long)param_1 + 0x1a) = 0;
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 8) = uVar3;
  FUN_1093a4588(param_1 + 10,0x10);
  pfVar1 = param_1 + 0x14;
  param_1[0x16] = 0.0;
  param_1[0x17] = 0.0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  param_1[0x1a] = 0.0;
  param_1[0x1b] = 0.0;
  param_1[0x18] = 0.0;
  param_1[0x19] = 0.0;
  param_1[0x1c] = 1.0;
  FUN_1093a4f4c(param_1 + 0x1e);
  param_1[0x2e] = 0.0;
  param_1[0x2f] = 0.0;
  param_1[0x2c] = 0.0;
  param_1[0x2d] = 0.0;
  param_1[0x32] = 0.0;
  param_1[0x33] = 0.0;
  param_1[0x30] = 0.0;
  param_1[0x31] = 0.0;
  func_0x0001093a55f4(pfVar1,(long)(1048576.0 / param_1[0x1c]));
  fVar2 = *param_1 * 8.0;
  param_1[8] = fVar2;
  param_1[9] = 1.0 / fVar2;
  if (fVar2 < param_1[1]) {
    param_1[1] = fVar2;
  }
  return param_1;
}



/* Entry: 1093a4544; end: 1093a4587;  */

long FUN_1093a4544(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  lStack_28 = param_1;
  FUN_1093a5560(&lStack_28);
  return param_1;
}



/* Entry: 1093a4588; end: 1093a4613;  */

undefined8 * FUN_1093a4588(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  FUN_1093a4614(param_1,0x2000);
  func_0x0001093a46cc(param_1,1);
  FUN_1093a4760(*param_1,0x2000);
  FUN_1093a4bb4(param_1);
  puVar1 = *(undefined8 **)*param_1;
  *puVar1 = 0;
  puVar1[2] = 0xffffffffffffffff;
  puVar1[1] = 0xffffffffffffffff;
  puVar1[4] = 0xffffffffffffffff;
  puVar1[3] = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 1093a4614; end: 1093a475f;  */

void FUN_1093a4614(long *param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar8 = *param_1;
  if ((ulong)((param_1[2] - lVar8 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_1093a4884();
      lVar8 = param_1[1] - *param_1 >> 3;
      bVar5 = param_2 < (ulong)(lVar8 * -0x5555555555555555);
      puVar7 = (undefined8 *)(param_2 + lVar8 * 0x5555555555555555);
      if (bVar5 || puVar7 == (undefined8 *)0x0) {
        if (bVar5) {
          plVar14 = (long *)(*param_1 + param_2 * 0x18);
          plVar6 = (long *)param_1[1];
          while (plVar4 = plVar6, plVar4 != plVar14) {
            plVar6 = plVar4 + -3;
            if (*plVar6 != 0) {
              plVar4[-2] = *plVar6;
              __ZdlPv();
            }
          }
          param_1[1] = (long)plVar14;
        }
        return;
      }
      lVar8 = param_1[1];
      if ((undefined8 *)((param_1[2] - lVar8 >> 3) * -0x5555555555555555) < puVar7) {
        lVar8 = lVar8 - *param_1;
        uVar11 = (long)puVar7 + (lVar8 >> 3) * -0x5555555555555555;
        if (0xaaaaaaaaaaaaaaa < uVar11) {
          FUN_1093a4884();
          plVar6 = (long *)&DAT_10f62a4d8;
          func_0x000104c4f6cc();
          puVar9 = (undefined4 *)*plVar6;
          puVar2 = (undefined4 *)plVar6[1];
          puVar1 = (undefined4 *)((long)puVar9 + (puVar7[1] - (long)puVar2));
          puVar13 = puVar1;
          if (puVar2 != puVar9) {
            do {
              uVar3 = *puVar9;
              *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(puVar9 + 1);
              *puVar13 = uVar3;
              uVar17 = *(undefined8 *)((long)puVar9 + 0xe);
              uVar16 = *(undefined8 *)((long)puVar9 + 6);
              uVar19 = *(undefined8 *)((long)puVar9 + 0x1e);
              uVar18 = *(undefined8 *)((long)puVar9 + 0x16);
              *(undefined2 *)((long)puVar13 + 0x26) = *(undefined2 *)((long)puVar9 + 0x26);
              *(undefined8 *)((long)puVar13 + 0x1e) = uVar19;
              *(undefined8 *)((long)puVar13 + 0x16) = uVar18;
              *(undefined8 *)((long)puVar13 + 0xe) = uVar17;
              *(undefined8 *)((long)puVar13 + 6) = uVar16;
              puVar9 = puVar9 + 10;
              puVar13 = puVar13 + 10;
            } while (puVar9 != puVar2);
            puVar9 = (undefined4 *)*plVar6;
          }
          puVar7[1] = puVar1;
          *plVar6 = (long)puVar1;
          plVar6[1] = (long)puVar9;
          puVar7[1] = puVar9;
          lVar8 = plVar6[1];
          plVar6[1] = puVar7[2];
          puVar7[2] = lVar8;
          lVar8 = plVar6[2];
          plVar6[2] = puVar7[3];
          puVar7[3] = lVar8;
          *puVar7 = puVar7[1];
          return;
        }
        lVar10 = param_1[2] - *param_1 >> 3;
        uVar12 = lVar10 * 0x5555555555555556;
        if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
          uVar12 = uVar11;
        }
        if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
          uVar12 = 0xaaaaaaaaaaaaaaa;
        }
        plStack_a8 = param_1;
        if (uVar12 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = param_1;
          FUN_1093a4898();
        }
        lVar8 = (long)plVar6 + lVar8;
        lVar10 = (((long)puVar7 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
        _bzero(lVar8,lVar10);
        lVar15 = lVar8 - (param_1[1] - *param_1);
        _memcpy(lVar15);
        lStack_c8 = *param_1;
        *param_1 = lVar15;
        param_1[1] = lVar8 + lVar10;
        lStack_b0 = param_1[2];
        param_1[2] = (long)(plVar6 + uVar12 * 3);
        lStack_c0 = lStack_c8;
        lStack_b8 = lStack_c8;
        func_0x0001093a48dc(&lStack_c8);
      }
      else {
        if (puVar7 != (undefined8 *)0x0) {
          lVar10 = (((long)puVar7 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
          _bzero(lVar8,lVar10);
          lVar8 = lVar8 + lVar10;
        }
        param_1[1] = lVar8;
      }
      return;
    }
    lVar10 = param_1[1];
    plVar6 = param_1;
    plStack_38 = param_1;
    FUN_1093a4898();
    lVar8 = (long)plVar6 + (lVar10 - lVar8);
    lVar10 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lStack_58 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar8;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar6 + param_2 * 3);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x0001093a48dc(&lStack_58);
  }
  return;
}



/* Entry: 1093a4760; end: 1093a4883;  */

undefined1  [16] FUN_1093a4760(long *param_1,long **param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  
  lVar2 = *param_1;
  if ((long **)((param_1[2] - lVar2 >> 3) * -0x3333333333333333) < param_2) {
    if ((long **)0x666666666666666 < param_2) {
      FUN_1093a4acc();
      if (lStack_38 - lStack_40 != 0) {
        lStack_38 = lStack_38 + (((lStack_38 - lStack_40) - 0x28U) / 0x28) * -0x28 + -0x28;
      }
      if (plStack_48 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume(param_1);
      plVar1 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if (param_2 < (long **)0xaaaaaaaaaaaaaab) {
        lVar2 = (long)param_2 * 0x18;
        __Znwm(lVar2);
        auVar5._8_8_ = param_2;
        auVar5._0_8_ = lVar2;
        return auVar5;
      }
      func_0x000104c4f740();
      lVar2 = plVar1[1];
      func_0x0001093a4910();
      if (*plVar1 != 0) {
        __ZdlPv();
      }
      auVar6._8_8_ = lVar2;
      auVar6._0_8_ = plVar1;
      return auVar6;
    }
    lVar3 = param_1[1];
    plVar1 = param_1;
    plStack_28 = param_1;
    FUN_1093a4b70();
    lStack_40 = (long)plVar1 + (lVar3 - lVar2);
    plStack_30 = plVar1 + (long)param_2 * 5;
    param_2 = &plStack_48;
    plStack_48 = plVar1;
    lStack_38 = lStack_40;
    FUN_1093a4ae0(param_1,param_2);
    if (lStack_38 - lStack_40 != 0) {
      lStack_38 = lStack_38 + (((lStack_38 - lStack_40) - 0x28U) / 0x28) * -0x28 + -0x28;
    }
    param_1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      __ZdlPv();
      param_1 = plStack_48;
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1093a4884; end: 1093a4897;  */

undefined1  [16] FUN_1093a4884(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  func_0x0001093a4910();
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 1093a4898; end: 1093a4967;  */

undefined1  [16] FUN_1093a4898(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  func_0x0001093a4910();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1093a4968; end: 1093a4acb;  */

void FUN_1093a4968(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar11 = param_1[1];
  if ((undefined8 *)((param_1[2] - lVar11 >> 3) * -0x5555555555555555) < param_2) {
    lVar11 = lVar11 - *param_1;
    uVar7 = (long)param_2 + (lVar11 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar7) {
      FUN_1093a4884();
      plVar4 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      puVar6 = (undefined4 *)*plVar4;
      puVar2 = (undefined4 *)plVar4[1];
      puVar1 = (undefined4 *)((long)puVar6 + (param_2[1] - (long)puVar2));
      puVar9 = puVar1;
      if (puVar2 != puVar6) {
        do {
          uVar3 = *puVar6;
          *(undefined2 *)(puVar9 + 1) = *(undefined2 *)(puVar6 + 1);
          *puVar9 = uVar3;
          uVar13 = *(undefined8 *)((long)puVar6 + 0xe);
          uVar12 = *(undefined8 *)((long)puVar6 + 6);
          uVar15 = *(undefined8 *)((long)puVar6 + 0x1e);
          uVar14 = *(undefined8 *)((long)puVar6 + 0x16);
          *(undefined2 *)((long)puVar9 + 0x26) = *(undefined2 *)((long)puVar6 + 0x26);
          *(undefined8 *)((long)puVar9 + 0x1e) = uVar15;
          *(undefined8 *)((long)puVar9 + 0x16) = uVar14;
          *(undefined8 *)((long)puVar9 + 0xe) = uVar13;
          *(undefined8 *)((long)puVar9 + 6) = uVar12;
          puVar6 = puVar6 + 10;
          puVar9 = puVar9 + 10;
        } while (puVar6 != puVar2);
        puVar6 = (undefined4 *)*plVar4;
      }
      param_2[1] = puVar1;
      *plVar4 = (long)puVar1;
      plVar4[1] = (long)puVar6;
      param_2[1] = puVar6;
      lVar11 = plVar4[1];
      plVar4[1] = param_2[2];
      param_2[2] = lVar11;
      lVar11 = plVar4[2];
      plVar4[2] = param_2[3];
      param_2[3] = lVar11;
      *param_2 = param_2[1];
      return;
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar5 * 0x5555555555555556;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (uVar8 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_1093a4898();
    }
    lVar11 = (long)plVar4 + lVar11;
    lVar5 = (((long)param_2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
    _bzero(lVar11,lVar5);
    lVar10 = lVar11 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lStack_68 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar11 + lVar5;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar4 + uVar8 * 3);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x0001093a48dc(&lStack_68);
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      lVar5 = (((long)param_2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
      _bzero(lVar11,lVar5);
      lVar11 = lVar11 + lVar5;
    }
    param_1[1] = lVar11;
  }
  return;
}



/* Entry: 1093a4acc; end: 1093a4adf;  */

void FUN_1093a4acc(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar5 = (undefined4 *)*plVar4;
  puVar2 = (undefined4 *)plVar4[1];
  puVar1 = (undefined4 *)((long)puVar5 + (param_2[1] - (long)puVar2));
  puVar7 = puVar1;
  if (puVar2 != puVar5) {
    do {
      uVar3 = *puVar5;
      *(undefined2 *)(puVar7 + 1) = *(undefined2 *)(puVar5 + 1);
      *puVar7 = uVar3;
      uVar9 = *(undefined8 *)((long)puVar5 + 0xe);
      uVar8 = *(undefined8 *)((long)puVar5 + 6);
      uVar11 = *(undefined8 *)((long)puVar5 + 0x1e);
      uVar10 = *(undefined8 *)((long)puVar5 + 0x16);
      *(undefined2 *)((long)puVar7 + 0x26) = *(undefined2 *)((long)puVar5 + 0x26);
      *(undefined8 *)((long)puVar7 + 0x1e) = uVar11;
      *(undefined8 *)((long)puVar7 + 0x16) = uVar10;
      *(undefined8 *)((long)puVar7 + 0xe) = uVar9;
      *(undefined8 *)((long)puVar7 + 6) = uVar8;
      puVar5 = puVar5 + 10;
      puVar7 = puVar7 + 10;
    } while (puVar5 != puVar2);
    puVar5 = (undefined4 *)*plVar4;
  }
  param_2[1] = puVar1;
  *plVar4 = (long)puVar1;
  plVar4[1] = (long)puVar5;
  param_2[1] = puVar5;
  lVar6 = plVar4[1];
  plVar4[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = plVar4[2];
  plVar4[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1093a4ae0; end: 1093a4b6f;  */

void FUN_1093a4ae0(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar4 = (undefined4 *)*param_1;
  puVar2 = (undefined4 *)param_1[1];
  puVar1 = (undefined4 *)((long)puVar4 + (param_2[1] - (long)puVar2));
  puVar6 = puVar1;
  if (puVar2 != puVar4) {
    do {
      uVar3 = *puVar4;
      *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar4 + 1);
      *puVar6 = uVar3;
      uVar8 = *(undefined8 *)((long)puVar4 + 0xe);
      uVar7 = *(undefined8 *)((long)puVar4 + 6);
      uVar10 = *(undefined8 *)((long)puVar4 + 0x1e);
      uVar9 = *(undefined8 *)((long)puVar4 + 0x16);
      *(undefined2 *)((long)puVar6 + 0x26) = *(undefined2 *)((long)puVar4 + 0x26);
      *(undefined8 *)((long)puVar6 + 0x1e) = uVar10;
      *(undefined8 *)((long)puVar6 + 0x16) = uVar9;
      *(undefined8 *)((long)puVar6 + 0xe) = uVar8;
      *(undefined8 *)((long)puVar6 + 6) = uVar7;
      puVar4 = puVar4 + 10;
      puVar6 = puVar6 + 10;
    } while (puVar4 != puVar2);
    puVar4 = (undefined4 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar4;
  param_2[1] = puVar4;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1093a4b70; end: 1093a4bb3;  */

undefined1  [16] FUN_1093a4b70(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x666666666666667) {
    lVar2 = param_2 * 0x28;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  lVar4 = param_1[1];
  lVar2 = *(long *)(lVar4 + -0x10);
  if (lVar2 == *(long *)(lVar4 + -8)) {
    if (lVar4 == param_1[2]) {
      FUN_1093a4614(param_1,(lVar4 - *param_1 >> 3) * 0x5555555555555556);
      lVar4 = param_1[1];
    }
    func_0x0001093a46cc(param_1,(lVar4 - *param_1 >> 3) * -0x5555555555555555 + 1);
    lVar4 = param_1[1];
    lVar2 = *(long *)(lVar4 + -0x10);
  }
  lVar1 = *param_1;
  plVar3 = (long *)(lVar4 + -0x18);
  lVar2 = (lVar2 - *plVar3 >> 3) * -0x3333333333333333 + 1;
  FUN_1093a4ca8(plVar3,lVar2);
  auVar6._4_4_ = 0;
  auVar6._0_4_ = (((uint)((int)lVar4 - (int)lVar1) >> 3) * 0x55556000 +
                 (int)((ulong)(*(long *)(lVar4 + -0x10) - *plVar3) >> 3) * -0x33333333) - 0x2001;
  auVar6._8_8_ = lVar2;
  return auVar6;
}



/* Entry: 1093a4bb4; end: 1093a4ca7;  */

int FUN_1093a4bb4(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = param_1[1];
  lVar2 = *(long *)(lVar4 + -0x10);
  if (lVar2 == *(long *)(lVar4 + -8)) {
    if (lVar4 == param_1[2]) {
      FUN_1093a4614(param_1,(lVar4 - *param_1 >> 3) * 0x5555555555555556);
      lVar4 = param_1[1];
    }
    func_0x0001093a46cc(param_1,(lVar4 - *param_1 >> 3) * -0x5555555555555555 + 1);
    lVar4 = param_1[1];
    lVar2 = *(long *)(lVar4 + -0x10);
  }
  lVar1 = *param_1;
  plVar3 = (long *)(lVar4 + -0x18);
  FUN_1093a4ca8(plVar3,(lVar2 - *plVar3 >> 3) * -0x3333333333333333 + 1);
  return ((uint)((int)lVar4 - (int)lVar1) >> 3) * 0x55556000 +
         (int)((ulong)(*(long *)(lVar4 + -0x10) - *plVar3) >> 3) * -0x33333333 + -0x2001;
}



/* Entry: 1093a4ca8; end: 1093a4ce3;  */

void FUN_1093a4ca8(long *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  bVar2 = param_2 < (ulong)(lVar4 * -0x3333333333333333);
  uVar1 = param_2 + lVar4 * 0x3333333333333333;
  if (bVar2 || uVar1 == 0) {
    if (bVar2) {
      param_1[1] = *param_1 + param_2 * 0x28;
    }
    return;
  }
  lVar4 = param_1[1];
  if ((ulong)((param_1[2] - lVar4 >> 3) * -0x3333333333333333) < uVar1) {
    lVar4 = lVar4 - *param_1;
    uVar6 = uVar1 + (lVar4 >> 3) * -0x3333333333333333;
    if (0x666666666666666 < uVar6) {
      FUN_1093a4acc();
      if (lStack_48 - lStack_50 != 0) {
        lStack_48 = lStack_48 + (((lStack_48 - lStack_50) - 0x28U) / 0x28) * -0x28 + -0x28;
      }
      if (plStack_58 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      if (*(long *)*param_1 != 0) {
        FUN_1093a4ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
        return;
      }
      return;
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar5 * -0x6666666666666666;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar7 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_1093a4b70();
    }
    lVar4 = (long)plVar3 + lVar4;
    plStack_40 = plVar3 + uVar7 * 5;
    lVar5 = ((uVar1 * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
    plStack_58 = plVar3;
    lStack_50 = lVar4;
    _bzero(lVar4,lVar5);
    lStack_48 = lVar4 + lVar5;
    FUN_1093a4ae0(param_1,&plStack_58);
    if (lStack_48 - lStack_50 != 0) {
      lStack_48 = lStack_48 + (((lStack_48 - lStack_50) - 0x28U) / 0x28) * -0x28 + -0x28;
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
  }
  else {
    if (uVar1 != 0) {
      lVar5 = ((uVar1 * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
      _bzero(lVar4,lVar5);
      lVar4 = lVar4 + lVar5;
    }
    param_1[1] = lVar4;
  }
  return;
}



/* Entry: 1093a4ce4; end: 1093a4eb7;  */

void FUN_1093a4ce4(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1];
  if ((ulong)((param_1[2] - lVar5 >> 3) * -0x3333333333333333) < param_2) {
    lVar5 = lVar5 - *param_1;
    uVar3 = param_2 + (lVar5 >> 3) * -0x3333333333333333;
    if (0x666666666666666 < uVar3) {
      FUN_1093a4acc();
      if (lStack_48 - lStack_50 != 0) {
        lStack_48 = lStack_48 + (((lStack_48 - lStack_50) - 0x28U) / 0x28) * -0x28 + -0x28;
      }
      if (plStack_58 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      if (*(long *)*param_1 != 0) {
        FUN_1093a4ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
        return;
      }
      return;
    }
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * -0x6666666666666666;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x333333333333332 < (ulong)(lVar2 * -0x3333333333333333)) {
      uVar4 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_1093a4b70();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_40 = plVar1 + uVar4 * 5;
    lVar2 = ((param_2 * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
    plStack_58 = plVar1;
    lStack_50 = lVar5;
    _bzero(lVar5,lVar2);
    lStack_48 = lVar5 + lVar2;
    FUN_1093a4ae0(param_1,&plStack_58);
    if (lStack_48 - lStack_50 != 0) {
      lStack_48 = lStack_48 + (((lStack_48 - lStack_50) - 0x28U) / 0x28) * -0x28 + -0x28;
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
  }
  else {
    if (param_2 != 0) {
      lVar2 = ((param_2 * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
      _bzero(lVar5,lVar2);
      lVar5 = lVar5 + lVar2;
    }
    param_1[1] = lVar5;
  }
  return;
}



/* Entry: 1093a4eb8; end: 1093a4ef7;  */

void FUN_1093a4eb8(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_1093a4ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1093a4ef8; end: 1093a4f4b;  */

void FUN_1093a4ef8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 1093a4f4c; end: 1093a4faf;  */

undefined8 * FUN_1093a4f4c(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_1093a4fb0();
  return param_1;
}



/* Entry: 1093a4fb0; end: 1093a4fe7;  */

/* WARNING: Removing unreachable block (ram,0x0001093a5200) */
/* WARNING: Removing unreachable block (ram,0x0001093a520c) */
/* WARNING: Removing unreachable block (ram,0x0001093a5214) */
/* WARNING: Removing unreachable block (ram,0x0001093a5250) */
/* WARNING: Removing unreachable block (ram,0x0001093a5270) */
/* WARNING: Removing unreachable block (ram,0x0001093a5294) */
/* WARNING: Removing unreachable block (ram,0x0001093a5298) */

undefined1  [16] FUN_1093a4fb0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  FUN_1093a4fe8(param_1,0x2000);
  func_0x0001093a50a0(param_1,1);
  plVar2 = (long *)*param_1;
  lVar5 = 0x1000;
  lVar6 = *plVar2;
  lVar7 = lVar5;
  if ((ulong)((plVar2[2] - lVar6 >> 2) * 0x6a2ec96a594287b7) < 0x1000) {
    lVar7 = plVar2[1];
    plVar3 = plVar2;
    FUN_1093a5478();
    lVar6 = (long)plVar3 + (lVar7 - lVar6);
    lVar7 = *plVar2;
    lVar1 = lVar6 + (lVar7 - plVar2[1]);
    FUN_1093a54c0(plVar2,lVar7,plVar2[1],lVar1);
    lVar4 = *plVar2;
    *plVar2 = lVar1;
    plVar2[1] = lVar6;
    plVar2[2] = (long)plVar3 + lVar5 * 0x181c;
    plVar2 = (long *)0x0;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar9._8_8_ = lVar7;
      auVar9._0_8_ = lVar4;
      return auVar9;
    }
  }
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = plVar2;
  return auVar8;
}



/* Entry: 1093a4fe8; end: 1093a5133;  */

void FUN_1093a4fe8(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  long *plVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar9 = *param_1;
  if ((ulong)((param_1[2] - lVar9 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_1093a521c();
      lVar9 = param_1[1] - *param_1 >> 3;
      bVar6 = param_2 < (ulong)(lVar9 * -0x5555555555555555);
      uVar8 = param_2 + lVar9 * 0x5555555555555555;
      if (bVar6 || uVar8 == 0) {
        if (bVar6) {
          plVar15 = (long *)(*param_1 + param_2 * 0x18);
          plVar7 = (long *)param_1[1];
          while (plVar5 = plVar7, plVar5 != plVar15) {
            plVar7 = plVar5 + -3;
            if (*plVar7 != 0) {
              plVar5[-2] = *plVar7;
              __ZdlPv();
            }
          }
          param_1[1] = (long)plVar15;
        }
        return;
      }
      lVar9 = param_1[1];
      if ((ulong)((param_1[2] - lVar9 >> 3) * -0x5555555555555555) < uVar8) {
        lVar9 = lVar9 - *param_1;
        uVar11 = uVar8 + (lVar9 >> 3) * -0x5555555555555555;
        if (0xaaaaaaaaaaaaaaa < uVar11) {
          FUN_1093a521c();
          func_0x000104c4f6cc(&DAT_10f62a4d8);
          if (0xa9e47576f5373 < uVar8) {
            func_0x000104c4f740();
            if (uVar8 != param_3) {
              lVar10 = 0;
              uVar11 = uVar8;
              lVar9 = param_4;
              do {
                lVar14 = 0x200;
                lVar16 = lVar10;
                do {
                  puVar1 = (undefined4 *)(param_4 + lVar16);
                  puVar2 = (undefined4 *)(uVar8 + lVar16);
                  *puVar1 = *puVar2;
                  uVar4 = *(undefined2 *)(puVar2 + 1);
                  *(undefined1 *)((long)puVar1 + 6) = *(undefined1 *)((long)puVar2 + 6);
                  *(undefined2 *)(puVar1 + 1) = uVar4;
                  *(undefined1 *)((long)puVar1 + 7) = *(undefined1 *)((long)puVar2 + 7);
                  puVar1[2] = puVar2[2];
                  lVar16 = lVar16 + 0xc;
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
                uVar13 = *(undefined8 *)(uVar11 + 0x1800);
                *(undefined4 *)(lVar9 + 0x1808) = *(undefined4 *)(uVar11 + 0x1808);
                *(undefined8 *)(lVar9 + 0x1800) = uVar13;
                uVar3 = *(undefined4 *)(uVar11 + 0x180c);
                *(undefined2 *)(lVar9 + 0x1810) = *(undefined2 *)(uVar11 + 0x1810);
                *(undefined4 *)(lVar9 + 0x180c) = uVar3;
                *(undefined8 *)(lVar9 + 0x1814) = *(undefined8 *)(uVar11 + 0x1814);
                uVar11 = uVar11 + 0x181c;
                lVar9 = lVar9 + 0x181c;
                lVar10 = lVar10 + 0x181c;
              } while (uVar11 != param_3);
            }
            return;
          }
          __Znwm(uVar8 * 0x181c);
          return;
        }
        lVar10 = param_1[2] - *param_1 >> 3;
        uVar12 = lVar10 * 0x5555555555555556;
        if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
          uVar12 = uVar11;
        }
        if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
          uVar12 = 0xaaaaaaaaaaaaaaa;
        }
        plStack_a8 = param_1;
        if (uVar12 == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = param_1;
          FUN_1093a5230();
        }
        lVar9 = (long)plVar7 + lVar9;
        lVar10 = ((uVar8 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
        _bzero(lVar9,lVar10);
        lVar16 = lVar9 - (param_1[1] - *param_1);
        _memcpy(lVar16);
        lStack_c8 = *param_1;
        *param_1 = lVar16;
        param_1[1] = lVar9 + lVar10;
        lStack_b0 = param_1[2];
        param_1[2] = (long)(plVar7 + uVar12 * 3);
        lStack_c0 = lStack_c8;
        lStack_b8 = lStack_c8;
        func_0x0001093a5274(&lStack_c8);
      }
      else {
        if (uVar8 != 0) {
          lVar10 = ((uVar8 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
          _bzero(lVar9,lVar10);
          lVar9 = lVar9 + lVar10;
        }
        param_1[1] = lVar9;
      }
      return;
    }
    lVar10 = param_1[1];
    plVar7 = param_1;
    plStack_38 = param_1;
    FUN_1093a5230();
    lVar9 = (long)plVar7 + (lVar10 - lVar9);
    lVar10 = lVar9 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lStack_58 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar9;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar7 + param_2 * 3);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x0001093a5274(&lStack_58);
  }
  return;
}



/* Entry: 1093a5134; end: 1093a521b;  */

undefined1  [16] FUN_1093a5134(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar6 = *param_1;
  uVar7 = param_2;
  if ((ulong)(((long)(param_1[2] - uVar6) >> 2) * 0x6a2ec96a594287b7) < param_2) {
    if (0xa9e47576f5373 < param_2) {
      FUN_1093a5464();
      if (unaff_x20 != 0) {
        __ZdlPv();
      }
      __Unwind_Resume(param_1);
      plVar4 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if (param_2 < 0xaaaaaaaaaaaaaab) {
        lVar5 = param_2 * 0x18;
        __Znwm(lVar5);
        auVar9._8_8_ = param_2;
        auVar9._0_8_ = lVar5;
        return auVar9;
      }
      func_0x000104c4f740();
      lVar5 = plVar4[1];
      func_0x0001093a52a8();
      if (*plVar4 != 0) {
        __ZdlPv();
      }
      auVar10._8_8_ = lVar5;
      auVar10._0_8_ = plVar4;
      return auVar10;
    }
    uVar7 = param_1[1];
    puVar2 = param_1;
    FUN_1093a5478();
    uVar6 = (long)puVar2 + (uVar7 - uVar6);
    uVar7 = *param_1;
    uVar1 = uVar6 + (uVar7 - param_1[1]);
    FUN_1093a54c0(param_1,uVar7,param_1[1],uVar1);
    uVar3 = *param_1;
    *param_1 = uVar1;
    param_1[1] = uVar6;
    param_1[2] = (long)puVar2 + param_2 * 0x181c;
    param_1 = (ulong *)0x0;
    if (uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar11._8_8_ = uVar7;
      auVar11._0_8_ = uVar3;
      return auVar11;
    }
  }
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 1093a521c; end: 1093a522f;  */

undefined1  [16] FUN_1093a521c(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  func_0x0001093a52a8();
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 1093a5230; end: 1093a52ff;  */

undefined1  [16] FUN_1093a5230(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  func_0x0001093a52a8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1093a5300; end: 1093a5463;  */

void FUN_1093a5300(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar12 = param_1[1];
  if ((ulong)((param_1[2] - lVar12 >> 3) * -0x5555555555555555) < param_2) {
    lVar12 = lVar12 - *param_1;
    uVar7 = param_2 + (lVar12 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar7) {
      FUN_1093a521c();
      func_0x000104c4f6cc(&DAT_10f62a4d8);
      if (param_2 < 0xa9e47576f5374) {
        __Znwm(param_2 * 0x181c);
        return;
      }
      func_0x000104c4f740();
      if (param_2 != param_3) {
        lVar6 = 0;
        uVar7 = param_2;
        lVar12 = param_4;
        do {
          lVar10 = 0x200;
          lVar11 = lVar6;
          do {
            puVar1 = (undefined4 *)(param_4 + lVar11);
            puVar2 = (undefined4 *)(param_2 + lVar11);
            *puVar1 = *puVar2;
            uVar4 = *(undefined2 *)(puVar2 + 1);
            *(undefined1 *)((long)puVar1 + 6) = *(undefined1 *)((long)puVar2 + 6);
            *(undefined2 *)(puVar1 + 1) = uVar4;
            *(undefined1 *)((long)puVar1 + 7) = *(undefined1 *)((long)puVar2 + 7);
            puVar1[2] = puVar2[2];
            lVar11 = lVar11 + 0xc;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          uVar9 = *(undefined8 *)(uVar7 + 0x1800);
          *(undefined4 *)(lVar12 + 0x1808) = *(undefined4 *)(uVar7 + 0x1808);
          *(undefined8 *)(lVar12 + 0x1800) = uVar9;
          uVar3 = *(undefined4 *)(uVar7 + 0x180c);
          *(undefined2 *)(lVar12 + 0x1810) = *(undefined2 *)(uVar7 + 0x1810);
          *(undefined4 *)(lVar12 + 0x180c) = uVar3;
          *(undefined8 *)(lVar12 + 0x1814) = *(undefined8 *)(uVar7 + 0x1814);
          uVar7 = uVar7 + 0x181c;
          lVar12 = lVar12 + 0x181c;
          lVar6 = lVar6 + 0x181c;
        } while (uVar7 != param_3);
      }
      return;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar6 * 0x5555555555555556;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (uVar8 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = param_1;
      FUN_1093a5230();
    }
    lVar12 = (long)plVar5 + lVar12;
    lVar6 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar12,lVar6);
    lVar11 = lVar12 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    lStack_68 = *param_1;
    *param_1 = lVar11;
    param_1[1] = lVar12 + lVar6;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar5 + uVar8 * 3);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x0001093a5274(&lStack_68);
  }
  else {
    if (param_2 != 0) {
      lVar6 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar12,lVar6);
      lVar12 = lVar12 + lVar6;
    }
    param_1[1] = lVar12;
  }
  return;
}



/* Entry: 1093a5464; end: 1093a5477;  */

void FUN_1093a5464(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0xa9e47576f5374) {
    __Znwm(param_2 * 0x181c);
    return;
  }
  func_0x000104c4f740();
  if (param_2 != param_3) {
    lVar5 = 0;
    uVar6 = param_2;
    lVar7 = param_4;
    do {
      lVar10 = 0x200;
      lVar8 = lVar5;
      do {
        puVar1 = (undefined4 *)(param_4 + lVar8);
        puVar2 = (undefined4 *)(param_2 + lVar8);
        *puVar1 = *puVar2;
        uVar4 = *(undefined2 *)(puVar2 + 1);
        *(undefined1 *)((long)puVar1 + 6) = *(undefined1 *)((long)puVar2 + 6);
        *(undefined2 *)(puVar1 + 1) = uVar4;
        *(undefined1 *)((long)puVar1 + 7) = *(undefined1 *)((long)puVar2 + 7);
        puVar1[2] = puVar2[2];
        lVar8 = lVar8 + 0xc;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uVar9 = *(undefined8 *)(uVar6 + 0x1800);
      *(undefined4 *)(lVar7 + 0x1808) = *(undefined4 *)(uVar6 + 0x1808);
      *(undefined8 *)(lVar7 + 0x1800) = uVar9;
      uVar3 = *(undefined4 *)(uVar6 + 0x180c);
      *(undefined2 *)(lVar7 + 0x1810) = *(undefined2 *)(uVar6 + 0x1810);
      *(undefined4 *)(lVar7 + 0x180c) = uVar3;
      *(undefined8 *)(lVar7 + 0x1814) = *(undefined8 *)(uVar6 + 0x1814);
      uVar6 = uVar6 + 0x181c;
      lVar7 = lVar7 + 0x181c;
      lVar5 = lVar5 + 0x181c;
    } while (uVar6 != param_3);
  }
  return;
}



/* Entry: 1093a5478; end: 1093a54bf;  */

void FUN_1093a5478(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  if (param_2 < 0xa9e47576f5374) {
    __Znwm(param_2 * 0x181c);
    return;
  }
  func_0x000104c4f740();
  if (param_2 != param_3) {
    lVar5 = 0;
    uVar6 = param_2;
    lVar7 = param_4;
    do {
      lVar10 = 0x200;
      lVar8 = lVar5;
      do {
        puVar1 = (undefined4 *)(param_4 + lVar8);
        puVar2 = (undefined4 *)(param_2 + lVar8);
        *puVar1 = *puVar2;
        uVar4 = *(undefined2 *)(puVar2 + 1);
        *(undefined1 *)((long)puVar1 + 6) = *(undefined1 *)((long)puVar2 + 6);
        *(undefined2 *)(puVar1 + 1) = uVar4;
        *(undefined1 *)((long)puVar1 + 7) = *(undefined1 *)((long)puVar2 + 7);
        puVar1[2] = puVar2[2];
        lVar8 = lVar8 + 0xc;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uVar9 = *(undefined8 *)(uVar6 + 0x1800);
      *(undefined4 *)(lVar7 + 0x1808) = *(undefined4 *)(uVar6 + 0x1808);
      *(undefined8 *)(lVar7 + 0x1800) = uVar9;
      uVar3 = *(undefined4 *)(uVar6 + 0x180c);
      *(undefined2 *)(lVar7 + 0x1810) = *(undefined2 *)(uVar6 + 0x1810);
      *(undefined4 *)(lVar7 + 0x180c) = uVar3;
      *(undefined8 *)(lVar7 + 0x1814) = *(undefined8 *)(uVar6 + 0x1814);
      uVar6 = uVar6 + 0x181c;
      lVar7 = lVar7 + 0x181c;
      lVar5 = lVar5 + 0x181c;
    } while (uVar6 != param_3);
  }
  return;
}



/* Entry: 1093a54c0; end: 1093a555f;  */

void FUN_1093a54c0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  if (param_2 != param_3) {
    lVar5 = 0;
    lVar6 = param_2;
    lVar7 = param_4;
    do {
      lVar10 = 0x200;
      lVar8 = lVar5;
      do {
        puVar1 = (undefined4 *)(param_4 + lVar8);
        puVar2 = (undefined4 *)(param_2 + lVar8);
        *puVar1 = *puVar2;
        uVar4 = *(undefined2 *)(puVar2 + 1);
        *(undefined1 *)((long)puVar1 + 6) = *(undefined1 *)((long)puVar2 + 6);
        *(undefined2 *)(puVar1 + 1) = uVar4;
        *(undefined1 *)((long)puVar1 + 7) = *(undefined1 *)((long)puVar2 + 7);
        puVar1[2] = puVar2[2];
        lVar8 = lVar8 + 0xc;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uVar9 = *(undefined8 *)(lVar6 + 0x1800);
      *(undefined4 *)(lVar7 + 0x1808) = *(undefined4 *)(lVar6 + 0x1808);
      *(undefined8 *)(lVar7 + 0x1800) = uVar9;
      uVar3 = *(undefined4 *)(lVar6 + 0x180c);
      *(undefined2 *)(lVar7 + 0x1810) = *(undefined2 *)(lVar6 + 0x1810);
      *(undefined4 *)(lVar7 + 0x180c) = uVar3;
      *(undefined8 *)(lVar7 + 0x1814) = *(undefined8 *)(lVar6 + 0x1814);
      lVar6 = lVar6 + 0x181c;
      lVar7 = lVar7 + 0x181c;
      lVar5 = lVar5 + 0x181c;
    } while (lVar6 != param_3);
  }
  return;
}


