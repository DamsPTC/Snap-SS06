/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a28daa8; end: 10a28dadb;  */

void FUN_10a28daa8(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bba6d0;
  param_1[1] = &UNK_110bba6a0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a28dadc; end: 10a28dba3;  */

undefined1 * FUN_10a28dadc(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  puVar2 = &uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a22fc9c(&uStack_50,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3);
  lVar1 = param_1[1];
  for (lVar3 = *param_1; lVar3 != lVar1; lVar3 = lVar3 + 0x58) {
    func_0x00010aad008c(&uStack_50,lVar3);
  }
  func_0x00010aacffc4(&uStack_50,param_2);
  puStack_38 = (undefined1 *)&uStack_50;
  FUN_10a22ff44(&puStack_38);
  return (undefined1 *)puVar2;
}



/* Entry: 10a28dba4; end: 10a28dc0b;  */

void FUN_10a28dba4(long param_1,undefined8 param_2,long param_3)

{
  if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a28dbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x48))
              (param_2,*(undefined4 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
    return;
  }
  return;
}



/* Entry: 10a28dc0c; end: 10a28dcc3;  */

void FUN_10a28dc0c(ulong *param_1,long param_2,long *param_3,undefined4 param_4,undefined4 *param_5,
                  long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_6 != 0) {
    lStack_50 = param_2;
    plStack_48 = param_3;
    func_0x0001098af634(&lStack_50,*param_5);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_3,param_4);
    puVar1 = (undefined8 *)0x113300ea0;
    if (*param_3 != -1) {
      puVar1 = (undefined8 *)(param_2 + *param_3);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*param_1 < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *param_1 * 8);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *puVar4;
        }
        *puVar1 = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a28dcc4);
  (*pcVar2)();
}



/* Entry: 10a28dcc4; end: 10a28dce7;  */

void FUN_10a28dcc4(void)

{
  return;
}



/* Entry: 10a28dce8; end: 10a28ddab;  */

void FUN_10a28dce8(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  uVar4 = 0x18;
  __Znwm(0x18);
  lVar5 = *(long *)(*param_2 + 0x108);
  FUN_10a28ddac(uVar4,lVar5,(*(long *)(*param_2 + 0x110) - lVar5 >> 3) * -0x5555555555555555);
  FUN_10a28de74(auStack_40,uVar4);
  FUN_10a286fec(param_1,auStack_40);
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
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a28ddac; end: 10a28de73;  */

void FUN_10a28ddac(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a22fc9c(param_1,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3);
  if (param_3 != 1) {
    plVar2 = param_2 + 3;
    plVar4 = param_2;
    do {
      plVar3 = plVar2;
      lVar1 = plVar4[4];
      for (lVar5 = plVar4[3]; lVar5 != lVar1; lVar5 = lVar5 + 0x58) {
        func_0x00010aad008c(param_1,lVar5);
      }
      plVar2 = plVar3 + 3;
      plVar4 = plVar3;
    } while (plVar2 != param_2 + param_3 * 3);
  }
  return;
}



/* Entry: 10a28de74; end: 10a28deeb;  */

undefined8 * FUN_10a28de74(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bba740;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a28deec; end: 10a28df27;  */

void FUN_10a28deec(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    lStack_28 = param_2;
    FUN_10a22ff44(&lStack_28);
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 10a28df28; end: 10a28df2b;  */

void FUN_10a28df28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a28df2c; end: 10a28df3f;  */

void FUN_10a28df2c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a28df40; end: 10a28df47;  */

void FUN_10a28df40(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    lStack_28 = lVar1;
    FUN_10a22ff44(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a28df48; end: 10a28df7f;  */

undefined8 FUN_10a28df48(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bba780);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a28df80; end: 10a28df83;  */

void FUN_10a28df80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a28df84; end: 10a28e0fb;  */

/* WARNING: Removing unreachable block (ram,0x00010a28e074) */
/* WARNING: Removing unreachable block (ram,0x00010a28e078) */
/* WARNING: Removing unreachable block (ram,0x00010a28e080) */
/* WARNING: Removing unreachable block (ram,0x00010a28e088) */
/* WARNING: Removing unreachable block (ram,0x00010a28e094) */
/* WARNING: Removing unreachable block (ram,0x00010a28e09c) */
/* WARNING: Removing unreachable block (ram,0x00010a28e0a4) */
/* WARNING: Removing unreachable block (ram,0x00010a28e0a8) */

void FUN_10a28df84(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puStack_38;
  
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar5[2] = 0;
  puVar5[1] = 0x200000006;
  puVar7 = puVar5 + 3;
  *(undefined2 *)puVar7 = 4;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar7;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  puStack_38 = puVar5;
  if ((*(byte *)(*param_2 + 0x1b0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a28e0cc);
    (*pcVar4)();
  }
  FUN_10aacdcf8(*param_2 + 0x180,*(undefined8 *)param_2[1],param_2[2] + 0x10,param_2[3]);
  plVar1 = puVar5 + 2;
  do {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar7);
        goto LAB_10a28e054;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a28e054:
      *param_1 = puVar5;
      func_0x0001092b4274(&puStack_38,puVar5);
      return;
    }
  } while( true );
}



/* Entry: 10a28e0fc; end: 10a28e1a3;  */

undefined8 * FUN_10a28e0fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7868;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a28e1a4; end: 10a28e46f;  */

/* WARNING: Removing unreachable block (ram,0x00010a28e404) */
/* WARNING: Removing unreachable block (ram,0x00010a28e408) */
/* WARNING: Removing unreachable block (ram,0x00010a28e410) */
/* WARNING: Removing unreachable block (ram,0x00010a28e418) */
/* WARNING: Removing unreachable block (ram,0x00010a28e41c) */

void FUN_10a28e1a4(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x288;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bba8e0;
  func_0x0001098bae4c(puVar5,&UNK_10e4a7556,0x28,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x47,in_x7,0,0
                      ,&uStack_50);
  plVar8 = plStack_48;
  plVar1 = (long *)(param_2 + 0x28);
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  *puVar5 = &PTR_FUN_110bba8e0;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x19] = &PTR_FUN_110bba410;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110bba950;
  puVar5[0x25] = &UNK_110bba920;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_FUN_110bba950;
  puVar5[0x2b] = &UNK_110bba920;
  *(undefined1 *)(puVar5 + 0x46) = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined1 *)(puVar5 + 0x30) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    plVar8 = plVar1;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    plVar8 = (long *)0x0;
    if (!bVar4) {
      plVar8 = plVar1;
    }
  }
  *(undefined2 *)(puVar5 + 0x48) = 0;
  puVar5[0x4b] = 0x10a28f680;
  puVar5[0x4c] = &UNK_110bba498;
  puVar5[0x50] = 0;
  puVar5[0x4f] = 0;
  puVar5[0x4e] = 0;
  puVar5[0x4d] = 0;
  puVar5[0x47] = &PTR_DAT_110bba990;
  if ((!bVar4) && (*(char *)(plVar8[3] + 8) == '\x01')) {
    puVar5[0x50] = plVar8 + 2;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    FUN_10a28f79c(puVar5 + 0x30);
    lVar7 = *plVar1;
    puVar5[0x30] = param_3;
    uVar10 = *(undefined8 *)(lVar7 + 0x820);
    uVar9 = *(undefined8 *)(lVar7 + 0x818);
    uVar12 = *(undefined8 *)(lVar7 + 0x830);
    uVar11 = *(undefined8 *)(lVar7 + 0x828);
    uVar14 = *(undefined8 *)(lVar7 + 0x840);
    uVar13 = *(undefined8 *)(lVar7 + 0x838);
    uVar15 = *(undefined8 *)(lVar7 + 0x844);
    *(undefined8 *)((long)puVar5 + 0x1ec) = *(undefined8 *)(lVar7 + 0x84c);
    *(undefined8 *)((long)puVar5 + 0x1e4) = uVar15;
    puVar5[0x3a] = uVar12;
    puVar5[0x39] = uVar11;
    puVar5[0x3c] = uVar14;
    puVar5[0x3b] = uVar13;
    uVar14 = *(undefined8 *)(lVar7 + 0x800);
    uVar13 = *(undefined8 *)(lVar7 + 0x7f8);
    uVar12 = *(undefined8 *)(lVar7 + 0x810);
    uVar11 = *(undefined8 *)(lVar7 + 0x808);
    uVar15 = *(undefined8 *)(lVar7 + 0x7e8);
    puVar5[0x32] = *(undefined8 *)(lVar7 + 0x7f0);
    puVar5[0x31] = uVar15;
    puVar5[0x34] = uVar14;
    puVar5[0x33] = uVar13;
    puVar5[0x36] = uVar12;
    puVar5[0x35] = uVar11;
    puVar5[0x38] = uVar10;
    puVar5[0x37] = uVar9;
    lVar6 = *(long *)(lVar7 + 0x860);
    puVar5[0x3f] = *(undefined8 *)(lVar7 + 0x858);
    puVar5[0x40] = lVar6;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar5[0x45] = 0;
    puVar5[0x42] = 0;
    puVar5[0x41] = 0;
    puVar5[0x44] = 0;
    puVar5[0x43] = 0;
    *(undefined4 *)(puVar5 + 0x45) = 0x3f800000;
    *(undefined1 *)(puVar5 + 0x46) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a28e470; end: 10a28e58b;  */

void FUN_10a28e470(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bba8e0;
  if (*(char *)(param_1 + 0x46) == '\x01') {
    func_0x00010a28f7d8(param_1 + 0x41);
    func_0x00010a042d30(param_1 + 0x3f);
  }
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110bba410;
  puStack_28 = param_1 + 0x21;
  FUN_10a28ebe8(&puStack_28);
  func_0x0001098bba44(param_1 + 0x19);
  func_0x0001098ac370(param_1);
  return;
}



/* Entry: 10a28e58c; end: 10a28e58f;  */

void FUN_10a28e58c(void)

{
  return;
}



/* Entry: 10a28e590; end: 10a28e633;  */

uint FUN_10a28e590(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar3 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  lStack_38 = param_1;
  FUN_10a28f8c8(lVar2 + 0x20,&lStack_38);
  if (lVar3 == 0) {
    uVar1 = 1;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x20);
    lVar2 = *(long *)(*(long *)(lVar2 + 0x20) + 0x18);
    if (*(long *)(lVar3 + 0x18) == 0 || lVar2 == 0) {
      uVar1 = (uint)((*(long *)(lVar3 + 0x18) == 0) != (lVar2 == 0));
    }
    else {
      FUN_10a28f080();
      uVar1 = (uint)lVar3 ^ 1;
    }
  }
  return uVar1;
}



/* Entry: 10a28e634; end: 10a28e753;  */

void FUN_10a28e634(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_40;
  long *plStack_38;
  
  if ((*(byte *)(param_2 + 0x230) & 1) != 0) {
    lVar7 = *(long *)(param_2 + 0x70);
    uVar6 = *(undefined8 *)(lVar7 + 0x20);
    func_0x0001098acf34(&plStack_40);
    FUN_10a4df17c(param_1,param_2 + 0x180,param_2,lVar7 + 0x10,uVar6,&plStack_40);
    if (plStack_38 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_38 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plStack_38 + 8))(plStack_38);
        }
      }
    }
    if (plStack_40 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_40 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plStack_40 + 8))();
        }
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a28e740);
  (*pcVar4)();
}



/* Entry: 10a28e754; end: 10a28e7cf;  */

void FUN_10a28e754(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bba450;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a28ea44();
  *param_1 = puVar1;
  return;
}



/* Entry: 10a28e7d0; end: 10a28e813;  */

void FUN_10a28e7d0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  if (uVar1 < *(ulong *)(param_1 + 0x50)) {
    FUN_10a231018();
    lVar2 = uVar1 + 0x28;
  }
  else {
    lVar2 = param_1 + 0x40;
    FUN_10a28ec70();
  }
  *(long *)(param_1 + 0x48) = lVar2;
  return;
}



/* Entry: 10a28e814; end: 10a28e81f;  */

void FUN_10a28e814(long param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = (ulong)param_2;
  lVar4 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  uVar5 = (lVar2 - lVar4 >> 3) * -0x3333333333333333;
  if (uVar3 + 1 != uVar5) {
    if ((lVar4 == lVar2) || (uVar5 < uVar3 || uVar5 - uVar3 == 0)) goto LAB_10a28eed4;
    FUN_10a230f24(lVar4 + uVar3 * 0x28,lVar2 + -0x28);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x48);
    uVar5 = (lVar2 - lVar4 >> 3) * -0x3333333333333333;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) goto LAB_10a28eed4;
  }
  if (lVar4 != lVar2) {
    lVar2 = lVar2 + -0x28;
    func_0x00010a22eba0();
    *(long *)(param_1 + 0x48) = lVar2;
    return;
  }
LAB_10a28eed4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a28eed8);
  (*pcVar1)();
}



/* Entry: 10a28e820; end: 10a28e8ab;  */

undefined8 * FUN_10a28e820(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 1;
  *param_1 = &PTR_FUN_110bba450;
  FUN_10a28ebe8(&puStack_28);
  return param_1;
}



/* Entry: 10a28e8ac; end: 10a28ea43;  */

void FUN_10a28e8ac(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  code **ppcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  plVar5 = &lStack_b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_b0,
                (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x3333333333333333);
  lVar3 = lStack_a8 - lStack_b0;
  if (lVar3 != 0) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      uVar6 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x3333333333333333;
      if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
LAB_10a28ea00:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a28ea04);
        (*pcVar1)();
      }
      param_4 = *(long *)(param_1 + 8) + lVar7;
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4a6e3c,0x2c,param_4,2,1);
      if ((ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar8) goto LAB_10a28ea00;
      *(int *)(lStack_b0 + uVar8 * 4) = (int)plVar2;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x28;
    } while (lVar3 >> 2 != uVar8);
  }
  pcStack_98 = FUN_10a28ec58;
  appuStack_90[0] = &PTR_DAT_110bba480;
  ppcVar4 = &pcStack_98;
  func_0x0001098bb6d0(*param_2 + 0x18,ppcVar4,&lStack_b0);
  (*(code *)*appuStack_90[0])(appuStack_90);
  lVar3 = lStack_b0;
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_90[0])(appuStack_90);
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (param_4 != 0) {
    FUN_10a28eac8();
    lVar7 = lVar3;
    FUN_10a28eb68(lVar3,ppcVar4,plVar5,*(undefined8 *)(lVar3 + 8));
    *(long *)(lVar3 + 8) = lVar7;
  }
  return;
}



/* Entry: 10a28ea44; end: 10a28eac7;  */

void FUN_10a28ea44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a28eac8(param_1,param_4);
    lVar1 = param_1;
    FUN_10a28eb68(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a28eac8; end: 10a28eb0f;  */

undefined1  [16] FUN_10a28eac8(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x666666666666667) {
    plVar1 = param_1;
    FUN_10a28eb24();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 5);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a28eb10();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x666666666666667) {
    lVar2 = param_2 * 0x28;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    uVar3 = param_2;
    FUN_10a22dff8(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a28eb10; end: 10a28eb23;  */

undefined1  [16] FUN_10a28eb10(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x666666666666667) {
    lVar1 = param_2 * 0x28;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    uVar2 = param_2;
    FUN_10a22dff8(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a28eb24; end: 10a28eb67;  */

undefined1  [16] FUN_10a28eb24(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x666666666666667) {
    lVar1 = param_2 * 0x28;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    uVar2 = param_2;
    FUN_10a22dff8(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a28eb68; end: 10a28ebe7;  */

long FUN_10a28eb68(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    FUN_10a22dff8(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  return param_4;
}



/* Entry: 10a28ebe8; end: 10a28ec57;  */

void FUN_10a28ebe8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010a22eba0();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a28ec58; end: 10a28ec6f;  */

void FUN_10a28ec58(void)

{
  return;
}



/* Entry: 10a28ec70; end: 10a28ed8b;  */

long * FUN_10a28ec70(long *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar4) {
    FUN_10a28eb10();
    FUN_10a28edf0(&plStack_58);
    __Unwind_Resume(param_1);
    plVar2 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_10a231018(param_4,plVar2);
        plVar2 = plVar2 + 5;
        param_4 = param_4 + 0x28;
      } while (plVar2 != param_3);
      do {
        param_1 = param_2;
        func_0x00010a22eba0(param_2);
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    return param_1;
  }
  lVar3 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar3 * -0x6666666666666666;
  if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
    uVar5 = uVar4;
  }
  if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
    uVar5 = 0x666666666666666;
  }
  plStack_38 = param_1;
  if (uVar5 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = param_1;
    FUN_10a28eb24();
  }
  lVar6 = (long)plVar2 + lVar6;
  plStack_58 = plVar2;
  plStack_50 = (long *)lVar6;
  plStack_40 = plVar2 + uVar5 * 5;
  FUN_10a231018(lVar6,param_2);
  plVar1 = (long *)(lVar6 + 0x28);
  lVar6 = lVar6 + (*param_1 - param_1[1]);
  plStack_48 = plVar1;
  FUN_10a28ed8c(param_1,*param_1,param_1[1],lVar6);
  plStack_58 = (long *)*param_1;
  *param_1 = lVar6;
  param_1[1] = (long)plVar1;
  plStack_40 = (long *)param_1[2];
  param_1[2] = (long)(plVar2 + uVar5 * 5);
  plStack_50 = plStack_58;
  plStack_48 = plStack_58;
  FUN_10a28edf0(&plStack_58);
  return plVar1;
}



/* Entry: 10a28ed8c; end: 10a28edef;  */

void FUN_10a28ed8c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_10a231018(param_4,lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + 0x28;
    } while (lVar1 != param_3);
    do {
      func_0x00010a22eba0(param_2);
      param_2 = param_2 + 0x28;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10a28edf0; end: 10a28eed7;  */

long * FUN_10a28edf0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x28;
    func_0x00010a22eba0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a28eed8; end: 10a28ef2b;  */

void FUN_10a28eed8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar4;
  *param_2 = &PTR_FUN_110bba950;
  lVar5 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10a28ef2c; end: 10a28efaf;  */

void FUN_10a28ef2c(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a28efe4(uVar2,*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == 0) {
    uStack_34 = 0x40000000;
  }
  else {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_34 = *(undefined4 *)(param_2 + lVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_34,&stack0xffffffffffffffd0,1);
  return;
}



/* Entry: 10a28efb0; end: 10a28efe3;  */

void FUN_10a28efb0(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bba950;
  param_1[1] = &UNK_110bba920;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a28efe4; end: 10a28f07f;  */

undefined1 * FUN_10a28efe4(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [24];
  long lStack_30;
  
  FUN_10a22dff8(auStack_48);
  func_0x00010a4dca74(auStack_48,param_1);
  if (lStack_30 == 0 || *(long *)(param_2 + 0x18) == 0) {
    puVar1 = (undefined1 *)(ulong)((lStack_30 == 0) != (*(long *)(param_2 + 0x18) == 0) ^ 1);
  }
  else {
    puVar1 = auStack_48;
    FUN_10a28f080(puVar1,param_2);
  }
  func_0x00010a22eba0(auStack_48);
  return puVar1;
}



/* Entry: 10a28f080; end: 10a28f157;  */

bool FUN_10a28f080(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  if (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)) {
    plVar9 = (long *)(param_1 + 0x10);
    do {
      plVar9 = (long *)*plVar9;
      bVar5 = plVar9 == (long *)0x0;
      if (plVar9 == (long *)0x0) {
        return true;
      }
      plVar2 = plVar9 + 2;
      lVar6 = param_2;
      FUN_10a28f158(param_2,plVar2);
      if (lVar6 == 0) {
        return bVar5;
      }
      bVar3 = *(byte *)((long)plVar9 + 0x27);
      uVar8 = plVar9[3];
      if (-1 < (char)bVar3) {
        uVar8 = (ulong)bVar3;
      }
      bVar4 = *(byte *)(lVar6 + 0x27);
      uVar1 = *(ulong *)(lVar6 + 0x18);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      if (uVar8 != uVar1) {
        return bVar5;
      }
      plVar7 = (long *)*plVar2;
      if (-1 < (char)bVar3) {
        plVar7 = plVar2;
      }
      plVar2 = (long *)*(long *)(lVar6 + 0x10);
      if (-1 < (char)bVar4) {
        plVar2 = (long *)(lVar6 + 0x10);
      }
      _memcmp(plVar7,plVar2);
      if ((int)plVar7 != 0) {
        return bVar5;
      }
      uVar8 = (ulong)(plVar9 + 5);
      FUN_10a28f23c(uVar8,lVar6 + 0x28);
    } while ((uVar8 & 1) != 0);
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}



/* Entry: 10a28f158; end: 10a28f23b;  */

long FUN_10a28f158(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a28f23c; end: 10a28f493;  */

undefined1 * FUN_10a28f23c(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  bool bVar6;
  undefined1 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 uStack_31;
  
  bVar3 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar1 == uVar2) {
    plVar8 = (long *)*param_1;
    if (-1 < (char)bVar3) {
      plVar8 = param_1;
    }
    plVar9 = (long *)*param_2;
    if (-1 < (char)bVar4) {
      plVar9 = param_2;
    }
    _memcmp(plVar8,plVar9);
    if ((((int)plVar8 == 0) && (*(float *)(param_1 + 3) == *(float *)(param_2 + 3))) &&
       (*(char *)((long)param_1 + 0x1c) == *(char *)((long)param_2 + 0x1c))) {
      bVar3 = *(byte *)((long)param_1 + 0x37);
      uVar1 = param_1[5];
      if (-1 < (char)bVar3) {
        uVar1 = (ulong)bVar3;
      }
      bVar4 = *(byte *)((long)param_2 + 0x37);
      uVar2 = param_2[5];
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      if (uVar1 == uVar2) {
        plVar8 = (long *)param_1[4];
        if (-1 < (char)bVar3) {
          plVar8 = param_1 + 4;
        }
        plVar9 = (long *)param_2[4];
        if (-1 < (char)bVar4) {
          plVar9 = param_2 + 4;
        }
        _memcmp(plVar8,plVar9);
        if (((((int)plVar8 == 0) && ((int)param_1[7] == (int)param_2[7])) &&
            ((*(char *)((long)param_1 + 0x44) == *(char *)((long)param_2 + 0x44) &&
             ((*(float *)(param_1 + 8) == *(float *)(param_2 + 8) &&
              (*(char *)((long)param_1 + 0x46) == *(char *)((long)param_2 + 0x46))))))) &&
           (((int)param_1[9] == (int)param_2[9] &&
            (((((*(char *)((long)param_1 + 0x4c) == *(char *)((long)param_2 + 0x4c) &&
                (*(float *)(param_1 + 10) == *(float *)(param_2 + 10))) &&
               (*(char *)((long)param_1 + 0x54) == *(char *)((long)param_2 + 0x54))) &&
              ((*(float *)(param_1 + 0xe) == *(float *)(param_2 + 0xe) &&
               (*(char *)((long)param_1 + 0x74) == *(char *)((long)param_2 + 0x74))))) &&
             (param_1[0x12] == param_2[0x12])))))) {
          plVar8 = (long *)param_1[0x10];
          if (plVar8 == param_1 + 0x11) {
            return (undefined1 *)0x1;
          }
          plVar9 = (long *)param_2[0x10];
          do {
            puVar7 = &uStack_31;
            FUN_10a28f494(puVar7,plVar8 + 4,plVar9 + 4);
            if ((int)puVar7 == 0) {
              return puVar7;
            }
            plVar5 = (long *)plVar8[1];
            plVar10 = plVar8;
            if ((long *)plVar8[1] == (long *)0x0) {
              do {
                plVar8 = (long *)plVar10[2];
                bVar6 = (long *)*plVar8 != plVar10;
                plVar10 = plVar8;
              } while (bVar6);
            }
            else {
              do {
                plVar8 = plVar5;
                plVar5 = (long *)*plVar8;
              } while ((long *)*plVar8 != (long *)0x0);
            }
            plVar5 = (long *)plVar9[1];
            plVar10 = plVar9;
            if ((long *)plVar9[1] == (long *)0x0) {
              do {
                plVar9 = (long *)plVar10[2];
                bVar6 = (long *)*plVar9 != plVar10;
                plVar10 = plVar9;
              } while (bVar6);
            }
            else {
              do {
                plVar9 = plVar5;
                plVar5 = (long *)*plVar9;
              } while ((long *)*plVar9 != (long *)0x0);
            }
          } while (plVar8 != param_1 + 0x11);
          return puVar7;
        }
      }
    }
    return (undefined1 *)0x0;
  }
  return (undefined1 *)0x0;
}



/* Entry: 10a28f494; end: 10a28f51b;  */

bool FUN_10a28f494(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_3 + 0x17);
  uVar2 = param_3[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_2;
    if (-1 < (char)bVar4) {
      plVar6 = param_2;
    }
    plVar3 = (long *)*param_3;
    if (-1 < (char)bVar5) {
      plVar3 = param_3;
    }
    _memcmp(plVar6,plVar3);
    if ((int)plVar6 == 0) {
      if ((((((((char)param_2[3] == (char)param_3[3]) &&
              (*(char *)((long)param_2 + 0x19) == *(char *)((long)param_3 + 0x19))) &&
             (*(char *)((long)param_2 + 0x1a) == *(char *)((long)param_3 + 0x1a))) &&
            ((*(int *)((long)param_2 + 0x1c) == *(int *)((long)param_3 + 0x1c) &&
             (*(float *)(param_2 + 4) == *(float *)(param_3 + 4))))) &&
           ((*(float *)((long)param_2 + 0x24) == *(float *)((long)param_3 + 0x24) &&
            (((char)param_2[5] == (char)param_3[5] &&
             (*(int *)((long)param_2 + 0x2c) == *(int *)((long)param_3 + 0x2c))))))) &&
          ((double)param_2[6] == (double)param_3[6])) &&
         ((((((int)param_2[7] == (int)param_3[7] &&
             (*(char *)((long)param_2 + 0x3c) == *(char *)((long)param_3 + 0x3c))) &&
            (*(char *)((long)param_2 + 0x44) == *(char *)((long)param_3 + 0x44))) &&
           ((((int)param_2[9] == (int)param_3[9] &&
             (*(int *)((long)param_2 + 0x4c) == *(int *)((long)param_3 + 0x4c))) &&
            (((char)param_2[10] == (char)param_3[10] &&
             ((*(char *)((long)param_2 + 0x51) == *(char *)((long)param_3 + 0x51) &&
              (*(char *)((long)param_2 + 0x52) == *(char *)((long)param_3 + 0x52))))))))) &&
          ((char)param_2[0xb] == (char)param_3[0xb])))) {
        return (double)param_2[0xc] == (double)param_3[0xc];
      }
      return false;
    }
  }
  return false;
}



/* Entry: 10a28f51c; end: 10a28f6bf;  */

bool FUN_10a28f51c(char *param_1,char *param_2)

{
  if (((((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
        ((*(int *)(param_1 + 4) == *(int *)(param_2 + 4) &&
         (*(float *)(param_1 + 8) == *(float *)(param_2 + 8))))) &&
       ((*(float *)(param_1 + 0xc) == *(float *)(param_2 + 0xc) &&
        ((param_1[0x10] == param_2[0x10] && (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))))
        ))) && (*(double *)(param_1 + 0x18) == *(double *)(param_2 + 0x18))) &&
     (((((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20) && (param_1[0x24] == param_2[0x24]))
        && (param_1[0x2c] == param_2[0x2c])) &&
       (((*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30) &&
         (*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34))) &&
        ((param_1[0x38] == param_2[0x38] &&
         ((param_1[0x39] == param_2[0x39] && (param_1[0x3a] == param_2[0x3a])))))))) &&
      (param_1[0x40] == param_2[0x40])))) {
    return *(double *)(param_1 + 0x48) == *(double *)(param_2 + 0x48);
  }
  return false;
}



/* Entry: 10a28f6c0; end: 10a28f777;  */

void FUN_10a28f6c0(ulong *param_1,long param_2,long *param_3,undefined4 param_4,undefined4 *param_5,
                  long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_6 != 0) {
    lStack_50 = param_2;
    plStack_48 = param_3;
    func_0x0001098af634(&lStack_50,*param_5);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_3,param_4);
    puVar1 = (undefined8 *)0x113300ea8;
    if (*param_3 != -1) {
      puVar1 = (undefined8 *)(param_2 + *param_3);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*param_1 < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *param_1 * 8);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *puVar4;
        }
        *puVar1 = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a28f778);
  (*pcVar2)();
}



/* Entry: 10a28f778; end: 10a28f79b;  */

void FUN_10a28f778(void)

{
  return;
}



/* Entry: 10a28f79c; end: 10a28f8c7;  */

void FUN_10a28f79c(long param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    func_0x00010a28f7d8(param_1 + 0x88);
    func_0x00010a042d30(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  return;
}



/* Entry: 10a28f8c8; end: 10a28f98b;  */

void FUN_10a28f8c8(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  uVar4 = 0x28;
  __Znwm(0x28);
  lVar5 = *(long *)(*param_2 + 0x108);
  FUN_10a28f98c(uVar4,lVar5,(*(long *)(*param_2 + 0x110) - lVar5 >> 3) * -0x3333333333333333);
  FUN_10a28fa04(auStack_40,uVar4);
  FUN_10a286fec(param_1,auStack_40);
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
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a28f98c; end: 10a28fa03;  */

void FUN_10a28f98c(undefined8 param_1,long param_2,long param_3)

{
  FUN_10a22dff8(param_1,param_2);
  param_3 = param_3 * 0x28;
  while( true ) {
    param_3 = param_3 + -0x28;
    param_2 = param_2 + 0x28;
    if (param_3 == 0) break;
    func_0x00010a4dca74(param_1,param_2);
  }
  return;
}



/* Entry: 10a28fa04; end: 10a28fa77;  */

undefined8 * FUN_10a28fa04(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bba9c0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a28fa78; end: 10a28fa7b;  */

void FUN_10a28fa78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a28fa7c; end: 10a28faaf;  */

void FUN_10a28fa7c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a28fab0; end: 10a28fae7;  */

undefined8 FUN_10a28fab0(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bbaa00);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a28fae8; end: 10a28faeb;  */

void FUN_10a28fae8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a28faec; end: 10a28fbb7;  */

long * FUN_10a28faec(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
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
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a28fbb8; end: 10a28fc5f;  */

undefined8 * FUN_10a28fbb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x17) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    FUN_10a28fda4(param_1 + 3,param_2 + 3);
    FUN_10a28ffb0(param_1 + 7,param_2 + 7);
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
    if (param_1 != param_2) {
      FUN_10a290680(param_1 + 0x14,param_2[0x14],param_2[0x15],
                    ((long)(param_2[0x15] - param_2[0x14]) >> 3) * 0x2e8ba2e8ba2e8ba3);
    }
  }
  else {
    FUN_10a22cac8(param_1,param_2);
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  return param_1;
}



/* Entry: 10a28fc60; end: 10a28fda3;  */

void FUN_10a28fc60(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  byte bStack_d0;
  undefined1 auStack_c8 [96];
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  if ((*(byte *)(param_2 + 0xc0) & 1) != 0) {
    uStack_100 = *(undefined8 *)(param_2 + 8);
    uStack_f8 = (undefined7)*(undefined8 *)(param_2 + 0x10);
    uStack_f1 = (undefined1)*(undefined8 *)(param_2 + 0x17);
    uStack_f0 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x17) >> 8);
    FUN_10a22cb80(&lStack_e8,param_2 + 0x20);
    FUN_10a22cd3c(auStack_c8,param_2 + 0x40);
    uStack_68 = *(undefined1 *)(param_2 + 0xa0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    FUN_10a22ce94(&uStack_60,*(long *)(param_2 + 0xa8),*(long *)(param_2 + 0xb0),
                  (*(long *)(param_2 + 0xb0) - *(long *)(param_2 + 0xa8) >> 3) * 0x2e8ba2e8ba2e8ba3)
    ;
    puVar2 = (undefined8 *)0xc8;
    __Znwm();
    *puVar2 = &PTR_FUN_110bb78b8;
    puVar2[1] = param_3;
    FUN_10a290c0c(puVar2 + 2,&uStack_100);
    *param_1 = puVar2;
    puStack_48 = &uStack_60;
    FUN_10a22d224(&puStack_48);
    FUN_10a22ce48(auStack_c8);
    if (((bStack_d0 & 1) != 0) && (lStack_e8 != 0)) {
      lStack_e0 = lStack_e8;
      __ZdlPv();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a28fd60);
  (*pcVar1)();
}



/* Entry: 10a28fda4; end: 10a28fe57;  */

void FUN_10a28fda4(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  cVar2 = (char)param_1[3];
  if (cVar2 == (char)param_2[3]) {
    if ((param_1 != param_2) && (cVar2 != '\0')) {
      plVar1 = (long *)*param_2;
      lVar6 = param_2[1];
      lVar7 = lVar6 - (long)plVar1 >> 2;
      uVar4 = lVar7 * -0x3333333333333333;
      lVar5 = param_1[2];
      plVar10 = (long *)*param_1;
      if ((ulong)((lVar5 - (long)plVar10 >> 2) * -0x3333333333333333) < uVar4) {
        plVar11 = param_1;
        plVar9 = plVar1;
        if (plVar10 != (long *)0x0) {
          param_1[1] = (long)plVar10;
          __ZdlPv();
          lVar5 = 0;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          plVar11 = plVar10;
        }
        if (0xccccccccccccccc < uVar4) {
          FUN_10a22cce8();
          cVar2 = (char)plVar11[0xb];
          if (cVar2 == (char)plVar9[0xb]) {
            if (cVar2 != '\0') {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (plVar11,plVar9);
              func_0x00010a290054(plVar11 + 3,plVar9 + 3);
              plVar11[5] = plVar9[5];
              if (plVar11 != plVar9) {
                *(int *)(plVar11 + 10) = (int)plVar9[10];
                plVar10 = (long *)plVar9[8];
                plVar1 = plVar11 + 6;
                lVar6 = plVar11[7];
                if (lVar6 != 0) {
                  lVar5 = 0;
                  do {
                    *(undefined8 *)(*plVar1 + lVar5 * 8) = 0;
                    lVar5 = lVar5 + 1;
                  } while (lVar6 != lVar5);
                  plVar9 = (long *)plVar11[8];
                  plVar11[8] = 0;
                  plVar11[9] = 0;
                  while (plVar9 != (long *)0x0) {
                    if (plVar10 == (long *)0x0) goto LAB_10a290160;
                    iVar3 = *(int *)(plVar10 + 2);
                    *(int *)(plVar9 + 2) = iVar3;
                    lVar6 = *plVar9;
                    plVar9[1] = (long)iVar3;
                    plVar11 = plVar1;
                    FUN_10a2901d8(plVar1);
                    FUN_10a290320(plVar1,plVar9,plVar11);
                    plVar10 = (long *)*plVar10;
                    plVar9 = (long *)lVar6;
                  }
                }
                goto LAB_10a290188;
              }
            }
          }
          else {
            if (cVar2 != '\0') {
              if ((char)plVar11[0xb] == '\x01') {
                func_0x000107c2ab24(plVar11 + 6);
                func_0x00010a052434(plVar11 + 3);
                if (*(char *)((long)plVar11 + 0x17) < '\0') {
                  __ZdlPv(*plVar11);
                }
                *(undefined1 *)(plVar11 + 0xb) = 0;
              }
              return;
            }
            FUN_10a22cd94(plVar11,plVar9);
            *(undefined1 *)(plVar11 + 0xb) = 1;
          }
          return;
        }
        uVar8 = (lVar5 >> 2) * -0x6666666666666666;
        if (uVar8 < uVar4 || uVar8 + lVar7 * 0x3333333333333333 == 0) {
          uVar8 = uVar4;
        }
        if (0x666666666666665 < (ulong)((lVar5 >> 2) * -0x3333333333333333)) {
          uVar8 = 0xccccccccccccccc;
        }
        FUN_10a22cca4(param_1,uVar8);
        lVar5 = param_1[1];
        lVar6 = lVar6 - (long)plVar1;
        if (lVar6 != 0) {
          _memmove(lVar5,plVar1,lVar6);
        }
        lVar5 = lVar5 + lVar6;
      }
      else {
        plVar11 = (long *)param_1[1];
        if ((ulong)(((long)plVar11 - (long)plVar10 >> 2) * -0x3333333333333333) < uVar4) {
          lVar5 = (long)plVar1 + ((long)plVar11 - (long)plVar10);
          if (plVar11 != plVar10) {
            _memmove(plVar10,plVar1);
            plVar11 = (long *)param_1[1];
          }
          lVar6 = lVar6 - lVar5;
          if (lVar6 != 0) {
            _memmove(plVar11,lVar5,lVar6);
          }
          lVar5 = (long)plVar11 + lVar6;
        }
        else {
          lVar6 = lVar6 - (long)plVar1;
          if (lVar6 != 0) {
            _memmove(plVar10,plVar1,lVar6);
          }
          lVar5 = (long)plVar10 + lVar6;
        }
      }
      param_1[1] = lVar5;
      return;
    }
  }
  else if (cVar2 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_10a22cc2c(param_1,*param_2,param_2[1],(param_2[1] - *param_2 >> 2) * -0x3333333333333333);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
LAB_10a290160:
  do {
    plVar10 = (long *)*plVar9;
    __ZdlPv(plVar9);
    plVar9 = plVar10;
  } while (plVar10 != (long *)0x0);
  plVar10 = (undefined8 *)0x0;
LAB_10a290188:
  for (; plVar10 != (undefined8 *)0x0; plVar10 = (long *)*plVar10) {
    FUN_10a29060c(plVar1,plVar10 + 2);
  }
  return;
}



/* Entry: 10a28fe58; end: 10a28ffaf;  */

void FUN_10a28fe58(undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  lVar7 = param_1[2];
  puVar11 = (undefined8 *)*param_1;
  if ((ulong)((lVar7 - (long)puVar11 >> 2) * -0x3333333333333333) < param_4) {
    puVar12 = param_1;
    puVar5 = param_2;
    if (puVar11 != (undefined8 *)0x0) {
      param_1[1] = puVar11;
      __ZdlPv();
      lVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar12 = puVar11;
    }
    if (0xccccccccccccccc < param_4) {
      FUN_10a22cce8();
      cVar2 = *(char *)(puVar12 + 0xb);
      if (cVar2 == *(char *)(puVar5 + 0xb)) {
        if (cVar2 != '\0') {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar12,puVar5);
          func_0x00010a290054(puVar12 + 3,puVar5 + 3);
          puVar12[5] = puVar5[5];
          if (puVar12 != puVar5) {
            *(undefined4 *)(puVar12 + 10) = *(undefined4 *)(puVar5 + 10);
            plVar6 = (long *)puVar5[8];
            plVar1 = puVar12 + 6;
            lVar7 = puVar12[7];
            if (lVar7 != 0) {
              lVar8 = 0;
              do {
                *(undefined8 *)(*plVar1 + lVar8 * 8) = 0;
                lVar8 = lVar8 + 1;
              } while (lVar7 != lVar8);
              plVar10 = (long *)puVar12[8];
              puVar12[8] = 0;
              puVar12[9] = 0;
              while (plVar10 != (long *)0x0) {
                if (plVar6 == (long *)0x0) goto LAB_10a290160;
                iVar3 = *(int *)(plVar6 + 2);
                *(int *)(plVar10 + 2) = iVar3;
                lVar7 = *plVar10;
                plVar10[1] = (long)iVar3;
                plVar4 = plVar1;
                FUN_10a2901d8(plVar1);
                FUN_10a290320(plVar1,plVar10,plVar4);
                plVar6 = (long *)*plVar6;
                plVar10 = (long *)lVar7;
              }
            }
            goto LAB_10a290188;
          }
        }
      }
      else {
        if (cVar2 != '\0') {
          if (*(char *)(puVar12 + 0xb) == '\x01') {
            func_0x000107c2ab24(puVar12 + 6);
            func_0x00010a052434(puVar12 + 3);
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              __ZdlPv(*puVar12);
            }
            *(undefined1 *)(puVar12 + 0xb) = 0;
          }
          return;
        }
        FUN_10a22cd94(puVar12,puVar5);
        *(undefined1 *)(puVar12 + 0xb) = 1;
      }
      return;
    }
    uVar9 = (lVar7 >> 2) * -0x6666666666666666;
    if (uVar9 < param_4 || uVar9 - param_4 == 0) {
      uVar9 = param_4;
    }
    if (0x666666666666665 < (ulong)((lVar7 >> 2) * -0x3333333333333333)) {
      uVar9 = 0xccccccccccccccc;
    }
    FUN_10a22cca4(param_1,uVar9);
    lVar7 = param_1[1];
    param_3 = param_3 - (long)param_2;
    if (param_3 != 0) {
      _memmove(lVar7,param_2,param_3);
    }
    lVar7 = lVar7 + param_3;
  }
  else {
    puVar12 = (undefined8 *)param_1[1];
    if ((ulong)(((long)puVar12 - (long)puVar11 >> 2) * -0x3333333333333333) < param_4) {
      lVar7 = (long)param_2 + ((long)puVar12 - (long)puVar11);
      if (puVar12 != puVar11) {
        _memmove(puVar11,param_2);
        puVar12 = (undefined8 *)param_1[1];
      }
      param_3 = param_3 - lVar7;
      if (param_3 != 0) {
        _memmove(puVar12,lVar7,param_3);
      }
      lVar7 = (long)puVar12 + param_3;
    }
    else {
      param_3 = param_3 - (long)param_2;
      if (param_3 != 0) {
        _memmove(puVar11,param_2,param_3);
      }
      lVar7 = (long)puVar11 + param_3;
    }
  }
  param_1[1] = lVar7;
  return;
LAB_10a290160:
  do {
    plVar6 = (long *)*plVar10;
    __ZdlPv(plVar10);
    plVar10 = plVar6;
  } while (plVar6 != (long *)0x0);
  plVar6 = (undefined8 *)0x0;
LAB_10a290188:
  for (; plVar6 != (undefined8 *)0x0; plVar6 = (long *)*plVar6) {
    FUN_10a29060c(plVar1,plVar6 + 2);
  }
  return;
}



/* Entry: 10a28ffb0; end: 10a2900cf;  */

void FUN_10a28ffb0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  cVar2 = *(char *)(param_1 + 0xb);
  if (cVar2 == *(char *)(param_2 + 0xb)) {
    if (cVar2 != '\0') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,param_2);
      func_0x00010a290054(param_1 + 3,param_2 + 3);
      param_1[5] = param_2[5];
      if (param_1 != param_2) {
        *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
        plVar5 = (long *)param_2[8];
        plVar1 = param_1 + 6;
        lVar6 = param_1[7];
        if (lVar6 != 0) {
          lVar7 = 0;
          do {
            *(undefined8 *)(*plVar1 + lVar7 * 8) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar6 != lVar7);
          plVar8 = (long *)param_1[8];
          param_1[8] = 0;
          param_1[9] = 0;
          while (plVar8 != (long *)0x0) {
            if (plVar5 == (long *)0x0) goto LAB_10a290160;
            iVar3 = *(int *)(plVar5 + 2);
            *(int *)(plVar8 + 2) = iVar3;
            lVar6 = *plVar8;
            plVar8[1] = (long)iVar3;
            plVar4 = plVar1;
            FUN_10a2901d8(plVar1);
            FUN_10a290320(plVar1,plVar8,plVar4);
            plVar5 = (long *)*plVar5;
            plVar8 = (long *)lVar6;
          }
        }
        goto LAB_10a290188;
      }
    }
  }
  else {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0xb) == '\x01') {
        func_0x000107c2ab24(param_1 + 6);
        func_0x00010a052434(param_1 + 3);
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          __ZdlPv(*param_1);
        }
        *(undefined1 *)(param_1 + 0xb) = 0;
      }
      return;
    }
    FUN_10a22cd94(param_1,param_2);
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  return;
LAB_10a290160:
  do {
    plVar5 = (long *)*plVar8;
    __ZdlPv(plVar8);
    plVar8 = plVar5;
  } while (plVar5 != (long *)0x0);
  plVar5 = (undefined8 *)0x0;
LAB_10a290188:
  for (; plVar5 != (undefined8 *)0x0; plVar5 = (long *)*plVar5) {
    FUN_10a29060c(plVar1,plVar5 + 2);
  }
  return;
}



/* Entry: 10a2900d0; end: 10a2901d7;  */

void FUN_10a2900d0(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
    plVar4 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    while (plVar4 != (long *)0x0) {
      if (param_2 == param_3) goto LAB_10a290160;
      iVar1 = *(int *)(param_2 + 2);
      *(int *)(plVar4 + 2) = iVar1;
      lVar2 = *plVar4;
      plVar4[1] = (long)iVar1;
      plVar5 = param_1;
      FUN_10a2901d8(param_1);
      FUN_10a290320(param_1,plVar4,plVar5);
      param_2 = (long *)*param_2;
      plVar4 = (long *)lVar2;
    }
  }
LAB_10a290188:
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10a29060c(param_1,param_2 + 2);
  }
  return;
LAB_10a290160:
  do {
    plVar5 = (long *)*plVar4;
    __ZdlPv(plVar4);
    plVar4 = plVar5;
  } while (plVar5 != (long *)0x0);
  goto LAB_10a290188;
}



/* Entry: 10a2901d8; end: 10a29031f;  */

long * FUN_10a2901d8(long *param_1,ulong param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_10a2903f0(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar7 = uVar6 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar9 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar10 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      else {
        uVar11 = uVar10;
        if (uVar5 <= uVar10) {
          uVar11 = 0;
          if (uVar5 != 0) {
            uVar11 = uVar10 / uVar5;
          }
          uVar11 = uVar10 - uVar11 * uVar5;
        }
      }
      if (uVar11 != uVar7) {
        return plVar4;
      }
      if (uVar10 == param_2) {
        bVar2 = *(int *)(plVar8 + 2) == *param_3;
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar9;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar9 = (bool)(bVar9 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  return plVar4;
}



/* Entry: 10a290320; end: 10a2903ef;  */

void FUN_10a290320(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_10a290348;
LAB_10a290384:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a2903e0;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_10a290384;
LAB_10a290348:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a2903e0;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_10a2903e0;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a2903e0:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a2903f0; end: 10a2904bf;  */

long * FUN_10a2903f0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (param_2 <= plVar10) {
    if (param_2 < plVar10) {
      plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar3) {
        plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
      }
      if (param_2 <= plVar3) {
        param_2 = plVar3;
      }
      if (param_2 < plVar10) goto LAB_10a290438;
    }
    return plVar3;
  }
LAB_10a290438:
  if (param_2 == (long *)0x0) {
    plVar3 = (long *)*param_1;
    *param_1 = 0;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      plVar10 = (long *)0x18;
      __Znwm();
      lVar2 = *param_2;
      *(int *)(plVar10 + 2) = (int)lVar2;
      *plVar10 = 0;
      plVar10[1] = (long)(int)lVar2;
      plVar3 = param_1;
      FUN_10a2901d8(param_1);
      FUN_10a290320(param_1,plVar10,plVar3);
      return plVar10;
    }
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar10 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar10 * 8) = 0;
      plVar10 = (long *)((long)plVar10 + 1);
    } while (param_2 != plVar10);
    plVar10 = (long *)param_1[2];
    if (plVar10 != (long *)0x0) {
      plVar6 = (long *)plVar10[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar5);
      }
      else if (param_2 <= plVar6) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)param_2;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
      while (plVar4 = plVar10, plVar10 = (long *)*plVar4, plVar10 != (long *)0x0) {
        plVar7 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar6) {
          lVar2 = *param_1;
          plVar9 = plVar10;
          if (*(long *)(lVar2 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar7 * 8) = plVar4;
            plVar6 = plVar7;
          }
          else {
            do {
              plVar8 = plVar9;
              plVar9 = (long *)*plVar8;
              if (plVar9 == (long *)0x0) break;
            } while (*(int *)(plVar10 + 2) == *(int *)(plVar9 + 2));
            *plVar4 = (long)plVar9;
            *plVar8 = **(long **)(lVar2 + (long)plVar7 * 8);
            **(long **)(lVar2 + (long)plVar7 * 8) = (long)plVar10;
            plVar10 = plVar4;
          }
        }
      }
    }
  }
  return plVar3;
}



/* Entry: 10a2904c0; end: 10a29060b;  */

undefined8 * FUN_10a2904c0(long *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  
  if (param_2 == (int *)0x0) {
    puVar4 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      puVar4 = (undefined8 *)0x18;
      __Znwm();
      iVar1 = *param_2;
      *(int *)(puVar4 + 2) = iVar1;
      *puVar4 = 0;
      puVar4[1] = (long)iVar1;
      plVar6 = param_1;
      FUN_10a2901d8(param_1);
      FUN_10a290320(param_1,puVar4,plVar6);
      return puVar4;
    }
    lVar3 = (long)param_2 << 3;
    __Znwm();
    puVar4 = (undefined8 *)*param_1;
    *param_1 = lVar3;
    if (puVar4 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    piVar5 = (int *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)piVar5 * 8) = 0;
      piVar5 = (int *)((long)piVar5 + 1);
    } while (param_2 != piVar5);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      piVar5 = (int *)plVar6[1];
      uVar8 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar8) == 0) {
        piVar5 = (int *)((ulong)piVar5 & uVar8);
      }
      else if (param_2 <= piVar5) {
        uVar2 = 0;
        if (param_2 != (int *)0x0) {
          uVar2 = (ulong)piVar5 / (ulong)param_2;
        }
        piVar5 = (int *)((long)piVar5 - uVar2 * (long)param_2);
      }
      *(long **)(*param_1 + (long)piVar5 * 8) = param_1 + 2;
      while (plVar7 = plVar6, plVar6 = (long *)*plVar7, plVar6 != (long *)0x0) {
        piVar9 = (int *)plVar6[1];
        if (((ulong)param_2 & uVar8) == 0) {
          piVar9 = (int *)((ulong)piVar9 & uVar8);
        }
        else if (param_2 <= piVar9) {
          uVar2 = 0;
          if (param_2 != (int *)0x0) {
            uVar2 = (ulong)piVar9 / (ulong)param_2;
          }
          piVar9 = (int *)((long)piVar9 - uVar2 * (long)param_2);
        }
        if (piVar9 != piVar5) {
          lVar3 = *param_1;
          plVar11 = plVar6;
          if (*(long *)(lVar3 + (long)piVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)piVar9 * 8) = plVar7;
            piVar5 = piVar9;
          }
          else {
            do {
              plVar10 = plVar11;
              plVar11 = (long *)*plVar10;
              if (plVar11 == (long *)0x0) break;
            } while (*(int *)(plVar6 + 2) == *(int *)(plVar11 + 2));
            *plVar7 = (long)plVar11;
            *plVar10 = **(long **)(lVar3 + (long)piVar9 * 8);
            **(long **)(lVar3 + (long)piVar9 * 8) = (long)plVar6;
            plVar6 = plVar7;
          }
        }
      }
    }
  }
  return puVar4;
}



/* Entry: 10a29060c; end: 10a29067f;  */

undefined8 * FUN_10a29060c(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  iVar1 = *param_2;
  *(int *)(puVar2 + 2) = iVar1;
  *puVar2 = 0;
  puVar2[1] = (long)iVar1;
  uVar3 = param_1;
  FUN_10a2901d8(param_1);
  FUN_10a290320(param_1,puVar2,uVar3);
  return puVar2;
}



/* Entry: 10a290680; end: 10a29083f;  */

void FUN_10a290680(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x23;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uStack_71;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  lVar6 = *param_1;
  plVar4 = param_1;
  if ((ulong)((param_1[2] - lVar6 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_4) {
    plVar3 = param_1;
    lVar6 = param_2;
    FUN_10a230b90();
    if (0x2e8ba2e8ba2e8ba < param_4) {
      FUN_10a22cf64();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x2e8ba2e8ba2e8ba;
      __Unwind_Resume();
      uVar2 = *(uint *)(lVar6 + 0x38);
      if ((int)plVar3[7] != -1 || uVar2 != 0xffffffff) {
        puStack_60 = &stack0xfffffffffffffff0;
        if (uVar2 == 0xffffffff) {
          pcStack_58 = FUN_10a290840;
          if (*(uint *)(plVar3 + 7) != 0xffffffff) {
            lStack_70 = param_3;
            plStack_68 = param_1;
            (*(code *)(&PTR_FUN_110bb4278)[*(uint *)(plVar3 + 7)])(&uStack_71,plVar3,lVar6);
          }
          *(undefined4 *)(plVar3 + 7) = 0xffffffff;
          return;
        }
        pcStack_58 = FUN_10a290840;
        plStack_68 = plVar3;
        (*(code *)(&PTR_FUN_110bb7898)[uVar2])(&plStack_68);
      }
      return;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar6 * 0x5d1745d1745d1746;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x1745d1745d1745c < (ulong)(lVar6 * 0x2e8ba2e8ba2e8ba3)) {
      uVar5 = 0x2e8ba2e8ba2e8ba;
    }
    FUN_10a22cf18(param_1,uVar5);
    FUN_10a22cfc0(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar7 = param_1[1];
    if (param_4 <= (ulong)((lVar7 - lVar6 >> 3) * 0x2e8ba2e8ba2e8ba3)) {
      if (param_2 != param_3) {
        do {
          FUN_10a290840(lVar6,param_2);
          uVar9 = *(undefined8 *)(param_2 + 0x48);
          uVar8 = *(undefined8 *)(param_2 + 0x40);
          *(undefined8 *)(lVar6 + 0x4d) = *(undefined8 *)(param_2 + 0x4d);
          *(undefined8 *)(lVar6 + 0x48) = uVar9;
          *(undefined8 *)(lVar6 + 0x40) = uVar8;
          param_2 = param_2 + 0x58;
          lVar6 = lVar6 + 0x58;
        } while (param_2 != param_3);
        lVar7 = param_1[1];
      }
      while (lVar7 != lVar6) {
        lVar7 = lVar7 + -0x58;
        FUN_10a22d0f8(lVar7);
      }
      param_1[1] = lVar6;
      return;
    }
    lVar1 = param_2 + (lVar7 - lVar6);
    if (lVar7 != lVar6) {
      do {
        FUN_10a290840(lVar6,param_2);
        uVar9 = *(undefined8 *)(param_2 + 0x48);
        uVar8 = *(undefined8 *)(param_2 + 0x40);
        *(undefined8 *)(lVar6 + 0x4d) = *(undefined8 *)(param_2 + 0x4d);
        *(undefined8 *)(lVar6 + 0x48) = uVar9;
        *(undefined8 *)(lVar6 + 0x40) = uVar8;
        param_2 = param_2 + 0x58;
        lVar6 = lVar6 + 0x58;
      } while (param_2 != lVar1);
      lVar7 = param_1[1];
    }
    FUN_10a22cfc0(param_1,lVar1,param_3,lVar7);
  }
  param_1[1] = (long)plVar4;
  return;
}



/* Entry: 10a290840; end: 10a29089b;  */

void FUN_10a290840(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x38);
  if (*(int *)(param_1 + 0x38) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110bb4278)[*(uint *)(param_1 + 0x38)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_110bb7898)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 10a29089c; end: 10a2908e3;  */

void FUN_10a29089c(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1[0xe] == 0) {
    *param_2 = *param_3;
  }
  else {
    FUN_10a22d0f8(puVar1);
    *puVar1 = *param_3;
    puVar1[0xe] = 0;
  }
  return;
}



/* Entry: 10a2908e4; end: 10a2908eb;  */

void FUN_10a2908e4(long *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = *param_1;
  if (*(int *)(lStack_30 + 0x38) == 1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2,param_3);
    func_0x00010a290054(param_2 + 0x18,param_3 + 0x18);
    uVar1 = *(undefined1 *)(param_3 + 0x30);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    *(undefined1 *)(param_2 + 0x30) = uVar1;
  }
  else {
    lStack_28 = param_3;
    func_0x00010a290958(&lStack_30);
  }
  return;
}



/* Entry: 10a2908ec; end: 10a290a0f;  */

void FUN_10a2908ec(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lStack_30;
  long lStack_28;
  
  if (*(int *)(param_1 + 0x38) == 1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2,param_3);
    func_0x00010a290054(param_2 + 0x18,param_3 + 0x18);
    uVar1 = *(undefined1 *)(param_3 + 0x30);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    *(undefined1 *)(param_2 + 0x30) = uVar1;
  }
  else {
    lStack_30 = param_1;
    lStack_28 = param_3;
    func_0x00010a290958(&lStack_30);
  }
  return;
}



/* Entry: 10a290a10; end: 10a290a13;  */

undefined8 * FUN_10a290a10(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bb78b8;
  puStack_28 = param_1 + 0x16;
  FUN_10a22d224(&puStack_28);
  FUN_10a22ce48(param_1 + 9);
  if ((*(char *)(param_1 + 8) == '\x01') && (param_1[5] != 0)) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a290a14; end: 10a290a27;  */

void FUN_10a290a14(void)

{
  func_0x00010a290cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a290a28; end: 10a290c0b;  */

undefined8 * FUN_10a290a28(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_160;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  byte bStack_130;
  undefined8 auStack_128 [12];
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_160 = *(undefined8 *)(param_1 + 0x10);
  uStack_158 = (undefined7)*(undefined8 *)(param_1 + 0x18);
  uStack_151 = (undefined1)*(undefined8 *)(param_1 + 0x1f);
  uStack_150 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x1f) >> 8);
  puStack_148 = (undefined8 *)((ulong)puStack_148 & 0xffffffffffffff00);
  bStack_130 = *(char *)(param_1 + 0x40) == '\x01';
  if ((bool)bStack_130) {
    puStack_140 = *(undefined8 **)(param_1 + 0x30);
    puStack_148 = *(undefined8 **)(param_1 + 0x28);
    uStack_138 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_10a230c9c(auStack_128,param_1 + 0x48);
  uStack_c8 = *(undefined1 *)(param_1 + 0xa8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  plVar1 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4a7b05,0x24,&uStack_160,0,1);
  lVar4 = *param_2;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = (undefined8 *)CONCAT44(uStack_88._4_4_,(int)plVar1);
  FUN_10a26ebc0(&lStack_a0,0,&uStack_88,(long)&uStack_88 + 4,1);
  uStack_78 = *(undefined8 *)(param_1 + 8);
  uStack_88 = (undefined8 *)0x10a290d1c;
  ppuStack_80 = &PTR_FUN_110bb78e8;
  puVar3 = &uStack_88;
  func_0x0001098bb6d0(lVar4 + 0x18,puVar3,&lStack_a0);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  uStack_88 = &uStack_c0;
  FUN_10a22d224(&uStack_88);
  puVar2 = auStack_128;
  FUN_10a22ce48();
  if (((bStack_130 & 1) != 0) && (puVar2 = puStack_148, puStack_148 != (undefined8 *)0x0)) {
    puStack_140 = puStack_148;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  FUN_10a26dcbc(&uStack_160);
  __Unwind_Resume();
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *(undefined8 *)((long)puVar2 + 0xf) = *(undefined8 *)((long)puVar3 + 0xf);
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  if (*(char *)(puVar3 + 6) == '\x01') {
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    uVar5 = puVar3[3];
    puVar2[4] = puVar3[4];
    puVar2[3] = uVar5;
    puVar2[5] = puVar3[5];
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined1 *)(puVar2 + 6) = 1;
  }
  FUN_10a230c9c(puVar2 + 7,puVar3 + 7);
  *(undefined1 *)(puVar2 + 0x13) = *(undefined1 *)(puVar3 + 0x13);
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x14] = 0;
  uVar5 = puVar3[0x14];
  puVar2[0x15] = puVar3[0x15];
  puVar2[0x14] = uVar5;
  puVar2[0x16] = puVar3[0x16];
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  return puVar2;
}



/* Entry: 10a290c0c; end: 10a290e43;  */

undefined8 * FUN_10a290c0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_2 + 6) == '\x01') {
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    uVar1 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar1;
    param_1[5] = param_2[5];
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  FUN_10a230c9c(param_1 + 7,param_2 + 7);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  uVar1 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar1;
  param_1[0x16] = param_2[0x16];
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  return param_1;
}



/* Entry: 10a290e44; end: 10a290e5f;  */

void FUN_10a290e44(void)

{
  return;
}



/* Entry: 10a290e60; end: 10a290eff;  */

long * FUN_10a290e60(long *param_1,long *param_2)

{
  if ((char)param_1[3] == '\x01') {
    if (param_1 != param_2) {
      FUN_10a290fc4(param_1,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_10a22fc9c(param_1,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



/* Entry: 10a290f00; end: 10a290fc3;  */

void FUN_10a290f00(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_10a22fc9c(&uStack_50,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                  (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) * 0x2e8ba2e8ba2e8ba3);
    puVar2 = (undefined8 *)0x28;
    __Znwm();
    *puVar2 = &PTR_FUN_110bb7910;
    puVar2[1] = param_3;
    puVar2[3] = uStack_48;
    puVar2[2] = uStack_50;
    puVar2[4] = uStack_40;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    *param_1 = puVar2;
    puStack_38 = (undefined1 *)&uStack_50;
    FUN_10a22ff44(&puStack_38);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a290fac);
  (*pcVar1)();
}



/* Entry: 10a290fc4; end: 10a29113b;  */

undefined1  [16] FUN_10a290fc4(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_42 [2];
  
  lVar4 = *param_1;
  plVar2 = param_1;
  if ((ulong)((param_1[2] - lVar4 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_4) {
    plVar6 = param_2;
    plVar3 = param_3;
    FUN_10a23141c(param_1);
    if (0x2e8ba2e8ba2e8ba < param_4) {
      FUN_10a22fd6c();
      param_1[1] = param_4;
      __Unwind_Resume();
      if (plVar6 != plVar3) {
        lVar1 = lVar4 + 0x30;
        do {
          lVar4 = lVar1;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    ((long *)(lVar4 + -0x30),plVar6);
          func_0x00010a290054(lVar4 + -0x18,plVar6 + 3);
          *(long *)(lVar4 + -8) = plVar6[5];
          if ((long *)(lVar4 + -0x30) != plVar6) {
            *(int *)(lVar4 + 0x20) = (int)plVar6[10];
            FUN_10a2900d0(lVar4,plVar6[8],0);
          }
          plVar6 = plVar6 + 0xb;
          lVar1 = lVar4 + 0x58;
        } while (plVar6 != plVar3);
        lVar4 = lVar4 + 0x28;
        plVar6 = plVar3;
      }
      auVar8._8_8_ = lVar4;
      auVar8._0_8_ = plVar6;
      return auVar8;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar4 * 0x5d1745d1745d1746;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x1745d1745d1745c < (ulong)(lVar4 * 0x2e8ba2e8ba2e8ba3)) {
      uVar5 = 0x2e8ba2e8ba2e8ba;
    }
    FUN_10a22fd20(param_1,uVar5);
    FUN_10a22fdc8(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar4 = param_1[1] - lVar4;
    if (param_4 <= (ulong)((lVar4 >> 3) * 0x2e8ba2e8ba2e8ba3)) {
      plVar2 = (long *)(auStack_42 + 1);
      FUN_10a29113c(plVar2,param_2,param_3);
      plVar6 = (long *)param_1[1];
      plVar3 = param_2;
      while (plVar6 != param_2) {
        plVar6 = plVar6 + -0xb;
        plVar2 = plVar6;
        FUN_10a22ff00(plVar6);
      }
      param_1[1] = (long)param_2;
      goto LAB_10a291114;
    }
    FUN_10a29113c(auStack_42,param_2,(undefined1 *)((long)param_2 + lVar4));
    param_2 = (long *)((long)param_2 + lVar4);
    FUN_10a22fdc8(param_1,param_2,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar2;
  plVar3 = param_2;
LAB_10a291114:
  auVar7._8_8_ = plVar3;
  auVar7._0_8_ = plVar2;
  return auVar7;
}



/* Entry: 10a29113c; end: 10a2911d7;  */

undefined1  [16] FUN_10a29113c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_2 != param_3) {
    lVar1 = param_4 + 0x30;
    do {
      param_4 = lVar1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_4 + -0x30,param_2);
      func_0x00010a290054(param_4 + -0x18,param_2 + 0x18);
      *(undefined8 *)(param_4 + -8) = *(undefined8 *)(param_2 + 0x28);
      if (param_4 + -0x30 != param_2) {
        *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(param_2 + 0x50);
        FUN_10a2900d0(param_4,*(undefined8 *)(param_2 + 0x40),0);
      }
      param_2 = param_2 + 0x58;
      lVar1 = param_4 + 0x58;
    } while (param_2 != param_3);
    param_4 = param_4 + 0x28;
    param_2 = param_3;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 10a2911d8; end: 10a291263;  */

undefined8 * FUN_10a2911d8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110bb7910;
  FUN_10a22ff44(&puStack_28);
  return param_1;
}



/* Entry: 10a291264; end: 10a2913cb;  */

void FUN_10a291264(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined1 ***pppuVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 **ppuStack_d0;
  undefined1 **ppuStack_c8;
  long lStack_c0;
  undefined1 **ppuStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = *(undefined8 *)(param_1 + 0x10);
  uStack_90 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar9 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4a7ae5,0x1f,&uStack_a0,0);
  lVar10 = *param_2;
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_6c = SUB84(plVar2,0);
  ppuVar7 = &puStack_68;
  lVar8 = 1;
  FUN_10a26ebc0(&lStack_88,0,&uStack_6c);
  uStack_58 = *(undefined8 *)(param_1 + 8);
  puStack_68 = (undefined1 *)0x10a2913cc;
  ppuStack_60 = &PTR_FUN_110bb7940;
  ppuVar6 = &puStack_68;
  func_0x0001098bb6d0(lVar10 + 0x18,ppuVar6,&lStack_88);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  ppuVar3 = &puStack_68;
  puStack_68 = (undefined1 *)&uStack_a0;
  FUN_10a22ff44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  puStack_68 = (undefined1 *)&uStack_a0;
  FUN_10a22ff44(&puStack_68);
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  if (lVar8 != 0) {
    pppuVar5 = &ppuStack_d0;
    uStack_a8 = 0x10a2913cc;
    ppuStack_d0 = ppuVar4;
    ppuStack_c8 = ppuVar6;
    lStack_c0 = lVar10;
    ppuStack_b8 = ppuVar3;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x00010a291414(&ppuStack_d0,*(undefined4 *)ppuVar7);
    *(undefined1 ****)(*(long *)(lVar9 + 0x10) + 0x10) = pppuVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a291414);
  (*pcVar1)();
}



/* Entry: 10a2913cc; end: 10a291523;  */

void FUN_10a2913cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x00010a291414(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x10) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a291414);
  (*pcVar1)();
}



/* Entry: 10a291524; end: 10a291593;  */

void FUN_10a291524(long *param_1)

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
        lVar2 = lVar2 + -0x28;
        FUN_10a291594(lVar2);
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



/* Entry: 10a291594; end: 10a291627;  */

void FUN_10a291594(undefined8 *param_1)

{
  func_0x00010a2915d0(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a291628; end: 10a291643;  */

void FUN_10a291628(void)

{
  return;
}



/* Entry: 10a291644; end: 10a2916cb;  */

void FUN_10a291644(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  
  if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
    FUN_10a22ec14(auStack_58,param_2 + 8);
    puVar2 = (undefined8 *)0x38;
    __Znwm();
    *puVar2 = &PTR_FUN_110bb7968;
    puVar2[1] = param_3;
    FUN_10a2311c0(puVar2 + 2,auStack_58);
    *param_1 = puVar2;
    func_0x00010a22fc28(auStack_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2916b8);
  (*pcVar1)();
}



/* Entry: 10a2916cc; end: 10a2917d7;  */

void FUN_10a2916cc(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plStack_50;
  long *plStack_48;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar4 = plVar3;
    if (plVar3 != (long *)0x0 && param_2 != param_3) {
      do {
        plStack_50 = plVar4 + 2;
        plStack_48 = plVar4 + 0x10;
        FUN_10a291834(&plStack_50,param_2 + 2);
        plVar3 = (long *)*plVar4;
        FUN_10a2917d8(param_1,plVar4);
        param_2 = (long *)*param_2;
        plVar4 = plVar3;
      } while (plVar3 != (long *)0x0 && param_2 != param_3);
    }
    func_0x00010a22fc60(param_1,plVar3);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10a29241c(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10a2917d8; end: 10a291833;  */

long FUN_10a2917d8(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  func_0x000107c2b05c(puVar1,param_2 + 0x30);
  *(undefined1 **)(param_2 + 8) = puVar1;
  uVar2 = param_1;
  FUN_10a291fa0(param_1,puVar1,param_2 + 0x10);
  FUN_10a2920f4(param_1,param_2,uVar2);
  return param_2;
}



/* Entry: 10a291834; end: 10a2918d7;  */

undefined8 * FUN_10a291834(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined1 *)*param_1;
  *puVar2 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar2 + 8,param_2 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (puVar2 + 0x20,param_2 + 0x20);
  uVar1 = param_2[0x48];
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(puVar2 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(puVar2 + 0x38) = uVar3;
  puVar2[0x48] = uVar1;
  if (puVar2 != param_2) {
    FUN_10a0ea4a0(puVar2 + 0x50,*(long *)(param_2 + 0x50),*(long *)(param_2 + 0x58),
                  *(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 2);
  }
  *(undefined2 *)(puVar2 + 0x68) = *(undefined2 *)(param_2 + 0x68);
  puVar2 = (undefined1 *)param_1[1];
  if (puVar2 != param_2 + 0x70) {
    *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(param_2 + 0x90);
    FUN_10a2918d8(puVar2,*(undefined8 *)(param_2 + 0x80),0);
  }
  return param_1;
}



/* Entry: 10a2918d8; end: 10a2919e7;  */

void FUN_10a2918d8(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar4 = plVar3;
    if (plVar3 != (long *)0x0 && param_2 != param_3) {
      do {
        plVar4[2] = param_2[2];
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar4 + 3,param_2 + 3);
        lVar2 = param_2[7];
        lVar1 = param_2[6];
        lVar6 = param_2[9];
        lVar5 = param_2[8];
        *(undefined8 *)((long)plVar4 + 0x4d) = *(undefined8 *)((long)param_2 + 0x4d);
        plVar4[7] = lVar2;
        plVar4[6] = lVar1;
        plVar4[9] = lVar6;
        plVar4[8] = lVar5;
        plVar3 = (long *)*plVar4;
        FUN_10a2919e8(param_1,plVar4);
        param_2 = (long *)*param_2;
        if (plVar3 == (long *)0x0) break;
        plVar4 = plVar3;
      } while (param_2 != param_3);
    }
    func_0x00010a22fb40(param_1,plVar3);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10a291eb4(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10a2919e8; end: 10a291a37;  */

long FUN_10a2919e8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_10a22f7e8(param_1,param_2 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar2 = param_1;
  FUN_10a291a38(param_1,uVar1,param_2 + 0x10);
  FUN_10a291b8c(param_1,param_2,uVar2);
  return param_2;
}



/* Entry: 10a291a38; end: 10a291b8b;  */

long * FUN_10a291a38(long *param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar9 = param_1[1];
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar9) {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    FUN_10a291c5c(param_1,uVar4);
    uVar9 = param_1[1];
  }
  uVar4 = uVar9 - 1;
  if ((uVar9 & uVar4) == 0) {
    uVar10 = uVar4 & param_2;
  }
  else {
    uVar10 = param_2;
    if (uVar9 <= param_2) {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = param_2 / uVar9;
      }
      uVar10 = param_2 - uVar10 * uVar9;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar10 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = *plVar8, lVar5 != 0)) {
    uVar11 = 0;
    bVar1 = 0;
    do {
      uVar6 = *(ulong *)(lVar5 + 8);
      if ((uVar9 & uVar4) == 0) {
        uVar7 = uVar6 & uVar4;
      }
      else {
        uVar7 = uVar6;
        if (uVar9 <= uVar6) {
          uVar7 = 0;
          if (uVar9 != 0) {
            uVar7 = uVar6 / uVar9;
          }
          uVar7 = uVar6 - uVar7 * uVar9;
        }
      }
      if (uVar7 != uVar10) {
        return plVar8;
      }
      if (uVar6 == param_2) {
        lVar5 = lVar5 + 0x10;
        FUN_10a22f8c4(lVar5,param_3);
        uVar3 = (uint)lVar5;
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar11;
      if ((bool)(bVar1 & bVar2)) {
        return plVar8;
      }
      uVar11 = uVar11 | bVar2;
      bVar1 = bVar1 | bVar2;
      plVar8 = (long *)*plVar8;
      lVar5 = *plVar8;
    } while (lVar5 != 0);
  }
  return plVar8;
}



/* Entry: 10a291b8c; end: 10a291c5b;  */

void FUN_10a291b8c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_10a291bb4;
LAB_10a291bf0:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a291c4c;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_10a291bf0;
LAB_10a291bb4:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a291c4c;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_10a291c4c;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a291c4c:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a291c5c; end: 10a291d2b;  */

void FUN_10a291c5c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 auStack_88 [3];
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (param_2 <= uVar10) {
        param_2 = uVar10;
      }
      if (param_2 < uVar7) goto LAB_10a291ca4;
    }
    return;
  }
LAB_10a291ca4:
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar8 = param_1;
      func_0x000109ffded8();
      pcStack_58 = FUN_10a291eb4;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_10a291f10(auStack_88);
      FUN_10a2919e8(plVar8,auStack_88[0]);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar7 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar7 = plVar8[1];
      uVar10 = param_2 - 1;
      if ((param_2 & uVar10) == 0) {
        uVar7 = uVar7 & uVar10;
      }
      else if (param_2 <= uVar7) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar7 / param_2;
        }
        uVar7 = uVar7 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar11 = plVar8[1];
        if ((param_2 & uVar10) == 0) {
          uVar11 = uVar11 & uVar10;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        if (uVar11 != uVar7) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar7 = uVar11;
          }
          else {
            lVar3 = *plVar8;
            plVar6 = plVar8;
            if (lVar3 == 0) {
              plVar5 = (long *)0x0;
            }
            else {
              do {
                plVar4 = plVar8 + 2;
                FUN_10a22f8c4(plVar4,lVar3 + 0x10);
                plVar5 = (long *)*plVar6;
                if ((int)plVar4 == 0) goto LAB_10a291e90;
                lVar3 = *plVar5;
                plVar6 = plVar5;
              } while (lVar3 != 0);
              plVar5 = (long *)0x0;
LAB_10a291e90:
              lVar2 = *param_1;
            }
            *plVar9 = (long)plVar5;
            *plVar6 = **(long **)(lVar2 + uVar11 * 8);
            **(undefined8 **)(lVar2 + uVar11 * 8) = plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a291d2c; end: 10a291eb3;  */

void FUN_10a291d2c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 auStack_88 [3];
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar8 = param_1;
      func_0x000109ffded8();
      pcStack_58 = FUN_10a291eb4;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_10a291f10(auStack_88);
      FUN_10a2919e8(plVar8,auStack_88[0]);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar5 = plVar8[1];
      uVar10 = param_2 - 1;
      if ((param_2 & uVar10) == 0) {
        uVar5 = uVar5 & uVar10;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar11 = plVar8[1];
        if ((param_2 & uVar10) == 0) {
          uVar11 = uVar11 & uVar10;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar5 = uVar11;
          }
          else {
            lVar3 = *plVar8;
            plVar7 = plVar8;
            if (lVar3 == 0) {
              plVar6 = (long *)0x0;
            }
            else {
              do {
                plVar4 = plVar8 + 2;
                FUN_10a22f8c4(plVar4,lVar3 + 0x10);
                plVar6 = (long *)*plVar7;
                if ((int)plVar4 == 0) goto LAB_10a291e90;
                lVar3 = *plVar6;
                plVar7 = plVar6;
              } while (lVar3 != 0);
              plVar6 = (long *)0x0;
LAB_10a291e90:
              lVar2 = *param_1;
            }
            *plVar9 = (long)plVar6;
            *plVar7 = **(long **)(lVar2 + uVar11 * 8);
            **(undefined8 **)(lVar2 + uVar11 * 8) = plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a291eb4; end: 10a291f0f;  */

void FUN_10a291eb4(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_10a291f10(auStack_38);
  FUN_10a2919e8(param_1,auStack_38[0]);
  return;
}



/* Entry: 10a291f10; end: 10a291f9f;  */

void FUN_10a291f10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10a22fa58(puVar1 + 2,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_10a22f7e8(param_2,puVar1 + 2);
  puVar1[1] = param_2;
  return;
}



/* Entry: 10a291fa0; end: 10a2920f3;  */

long * FUN_10a291fa0(long *param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar9 = param_1[1];
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar9) {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    FUN_10a2921c4(param_1,uVar4);
    uVar9 = param_1[1];
  }
  uVar4 = uVar9 - 1;
  if ((uVar9 & uVar4) == 0) {
    uVar10 = uVar4 & param_2;
  }
  else {
    uVar10 = param_2;
    if (uVar9 <= param_2) {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = param_2 / uVar9;
      }
      uVar10 = param_2 - uVar10 * uVar9;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar10 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = *plVar8, lVar5 != 0)) {
    uVar11 = 0;
    bVar1 = 0;
    do {
      uVar6 = *(ulong *)(lVar5 + 8);
      if ((uVar9 & uVar4) == 0) {
        uVar7 = uVar6 & uVar4;
      }
      else {
        uVar7 = uVar6;
        if (uVar9 <= uVar6) {
          uVar7 = 0;
          if (uVar9 != 0) {
            uVar7 = uVar6 / uVar9;
          }
          uVar7 = uVar6 - uVar7 * uVar9;
        }
      }
      if (uVar7 != uVar10) {
        return plVar8;
      }
      if (uVar6 == param_2) {
        lVar5 = lVar5 + 0x10;
        FUN_10a22f138(lVar5,param_3);
        uVar3 = (uint)lVar5;
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar11;
      if ((bool)(bVar1 & bVar2)) {
        return plVar8;
      }
      uVar11 = uVar11 | bVar2;
      bVar1 = bVar1 | bVar2;
      plVar8 = (long *)*plVar8;
      lVar5 = *plVar8;
    } while (lVar5 != 0);
  }
  return plVar8;
}


