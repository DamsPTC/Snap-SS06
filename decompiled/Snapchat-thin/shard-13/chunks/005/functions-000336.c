/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a6fc390; end: 10a6fc443;  */

undefined8 * FUN_10a6fc390(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13258;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10a37985c(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a6fc444; end: 10a6fc4f7;  */

void FUN_10a6fc444(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_2,param_2[1]);
  }
  else {
    uVar3 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    puVar1[2] = param_2[2];
  }
  *param_1 = (long)puVar1;
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110c13290;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = puVar1;
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 10a6fc4f8; end: 10a6fc5e7;  */

void FUN_10a6fc4f8(long *param_1)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 **ppuStack_40;
  long lStack_38;
  long lStack_30;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c3192c(&ppuStack_40,*param_1,param_1[1]);
  }
  else {
    lStack_38 = param_1[1];
    ppuStack_40 = (undefined8 **)*param_1;
    lStack_30 = param_1[2];
  }
  iVar2 = (int)&ppuStack_40;
  FUN_10ad01a04();
  if (iVar2 != 0) {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      pppuVar1 = (undefined8 ***)ppuStack_40;
      if (-1 < lStack_30) {
        pppuVar1 = &ppuStack_40;
      }
      func_0x00010ae06f08(1,4,&UNK_10f66dd79,&UNK_10f67085f,0x25,&UNK_10f67091e,in_x6,in_x7,pppuVar1
                         );
    }
    FUN_10ad00b0c(&ppuStack_40);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  __ZdlPv(param_1);
  if (lStack_30 < 0) {
    __ZdlPv(ppuStack_40);
  }
  return;
}



/* Entry: 10a6fc5e8; end: 10a6fc5eb;  */

void FUN_10a6fc5e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6fc5ec; end: 10a6fc5ff;  */

void FUN_10a6fc5ec(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6fc600; end: 10a6fc61b;  */

void FUN_10a6fc600(long param_1)

{
  FUN_10a6fc4f8(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a6fc61c; end: 10a6fc653;  */

undefined8 FUN_10a6fc61c(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c132d0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a6fc654; end: 10a6fc657;  */

void FUN_10a6fc654(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6fc658; end: 10a6fc713;  */

void FUN_10a6fc658(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if ((int)param_1[3] == 2) {
    if (*param_2 != 0) {
      param_2[1] = *param_2;
      __ZdlPv();
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
    lVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar1;
    param_2[2] = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    return;
  }
  FUN_10a6fc01c();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = lVar1;
  param_1[2] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10a6fc714; end: 10a6fc7af;  */

byte FUN_10a6fc714(undefined8 *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = 0;
  FUN_109d18960(param_2 + 0x10,*param_1,&lStack_38);
  if (lStack_38 == 0) {
    bVar1 = *(byte *)(param_1 + 1);
    if ((bVar1 & 1) == 0) {
      puStack_40 = (undefined8 *)*param_1;
      uStack_50 = 0;
      lStack_48 = param_2;
      (**(code **)*puStack_40)(puStack_40,&uStack_50);
    }
    __ZNSt13exception_ptrD1Ev(&lStack_38);
    return bVar1 ^ 1;
  }
  func_0x0001092af97c(&lStack_38);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6fc79c);
  (*pcVar2)();
}



/* Entry: 10a6fc7b0; end: 10a6fc7ef;  */

void FUN_10a6fc7b0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a6fc944(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a6fc7f0; end: 10a6fc88f;  */

undefined8 * FUN_10a6fc7f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
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
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110c14a28;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10a6fc890; end: 10a6fc943;  */

undefined8 * FUN_10a6fc890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14a28;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a0536d4(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a6fc944; end: 10a6fc9e3;  */

undefined1 FUN_10a6fc944(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0xa8) == '\x01') {
          func_0x00010a0536d4(param_1 + 0x98);
        }
        uVar5 = *param_2;
        *(undefined8 *)(param_1 + 0xa0) = param_2[1];
        *(undefined8 *)(param_1 + 0x98) = uVar5;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a6fc9e4; end: 10a6fca37;  */

void FUN_10a6fc9e4(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110c132e0)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 10a6fca38; end: 10a6fca4f;  */

long FUN_10a6fca38(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
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
  return param_2;
}



/* Entry: 10a6fca50; end: 10a6fcaff;  */

long FUN_10a6fca50(long param_1)

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



/* Entry: 10a6fcb00; end: 10a6fcc7b;  */

/* WARNING: Removing unreachable block (ram,0x00010a6fcc20) */
/* WARNING: Removing unreachable block (ram,0x00010a6fcc24) */
/* WARNING: Removing unreachable block (ram,0x00010a6fcc2c) */
/* WARNING: Removing unreachable block (ram,0x00010a6fcc34) */
/* WARNING: Removing unreachable block (ram,0x00010a6fcc40) */
/* WARNING: Removing unreachable block (ram,0x00010a6fcc48) */
/* WARNING: Removing unreachable block (ram,0x00010a6fcc50) */
/* WARNING: Removing unreachable block (ram,0x00010a6fcc54) */

void FUN_10a6fcb00(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puStack_48;
  
  puVar4 = (undefined8 *)0xb0;
  __Znwm();
  plVar1 = puVar4 + 2;
  puVar4[2] = 0;
  puVar4[1] = 0x200000006;
  puVar7 = puVar4 + 3;
  *(undefined2 *)puVar7 = 4;
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
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = puVar7;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_FUN_110c14b90;
  puVar5 = puVar4 + 0x13;
  *(undefined1 *)puVar5 = 0;
  *(undefined1 *)(puVar4 + 0x15) = 0;
  do {
    lVar6 = *plVar1;
    puStack_48 = puVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(puVar4 + 0x15) == '\x01') {
          FUN_10a711cf8();
          *(undefined1 *)(puVar4 + 0x15) = 0;
        }
        lVar6 = param_3[1];
        uVar8 = *param_3;
        puVar5[1] = param_3[1];
        *puVar5 = uVar8;
        if (lVar6 != 0) {
          plVar1 = (long *)(lVar6 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(undefined1 *)(puVar4 + 0x15) = 1;
        puVar4[2] = 2;
        FUN_109d1b4dc(puVar7);
LAB_10a6fcc04:
        *param_1 = puVar4;
        func_0x0001092b4274(&puStack_48,puVar4);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) goto LAB_10a6fcc04;
  } while( true );
}



/* Entry: 10a6fcc7c; end: 10a6fcdbb;  */

long * FUN_10a6fcc7c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  long *plStack_40;
  undefined8 *puStack_38;
  
  if (*param_3 != 0) {
    FUN_10a7cf8cc(auStack_50);
    puVar5 = (undefined8 *)0xb0;
    __Znwm();
    *(undefined2 *)(puVar5 + 3) = 4;
    puVar5[2] = 0;
    puVar5[1] = 0x200000006;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = puVar5 + 3;
    puVar5[0x12] = 0;
    *puVar5 = &PTR_FUN_110c14b90;
    *(undefined1 *)(puVar5 + 0x13) = 0;
    *(undefined1 *)(puVar5 + 0x15) = 0;
    puStack_38 = puVar5;
    FUN_10a6fceac();
    *param_1 = puVar5;
    plStack_40 = (long *)0x0;
    func_0x0001092b4274(&puStack_38,puVar5);
    plVar6 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_40 + 1);
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plStack_40 + 8))();
        }
      }
    }
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        plVar6 = plStack_48;
      }
    }
    return plVar6;
  }
  FUN_10a00946c(&UNK_10f670a82);
  func_0x000104bd46a0();
  pcStack_58 = FUN_10a6fcdbc;
  lStack_68 = *param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  if (lStack_68 != 0) {
    plVar6 = *(long **)(lStack_68 + 400);
    FUN_10a839cd8(plVar6,&lStack_68);
    return plVar6;
  }
  plVar6 = (long *)&UNK_10f66de73;
  FUN_10a00946c();
  *plVar6 = (long)&PTR_FUN_110c14b90;
  if ((char)plVar6[0x15] == '\x01') {
    FUN_10a711cf8(plVar6 + 0x13);
  }
  *plVar6 = (long)&PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(plVar6 + 0x12);
  *plVar6 = (long)&PTR_DAT_110ae8c08;
  return plVar6;
}



/* Entry: 10a6fcdbc; end: 10a6fcdf7;  */

undefined8 * FUN_10a6fcdbc(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lStack_18;
  
  lStack_18 = *param_2;
  if (lStack_18 != 0) {
    puVar1 = *(undefined8 **)(lStack_18 + 400);
    FUN_10a839cd8(puVar1,&lStack_18);
    return puVar1;
  }
  puVar1 = (undefined8 *)&UNK_10f66de73;
  FUN_10a00946c();
  *puVar1 = &PTR_FUN_110c14b90;
  if (*(char *)(puVar1 + 0x15) == '\x01') {
    FUN_10a711cf8(puVar1 + 0x13);
  }
  *puVar1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(puVar1 + 0x12);
  *puVar1 = &PTR_DAT_110ae8c08;
  return puVar1;
}



/* Entry: 10a6fcdf8; end: 10a6fceab;  */

undefined8 * FUN_10a6fcdf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14b90;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10a711cf8(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a6fceac; end: 10a6fcf4b;  */

undefined1 FUN_10a6fceac(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0xa8) == '\x01') {
          FUN_10a711cf8(param_1 + 0x98);
        }
        uVar5 = *param_2;
        *(undefined8 *)(param_1 + 0xa0) = param_2[1];
        *(undefined8 *)(param_1 + 0x98) = uVar5;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a6fcf4c; end: 10a6fd047;  */

undefined8 * FUN_10a6fcf4c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *param_1 = &PTR_DAT_110b17898;
    lVar4 = *(long *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
    param_1[1] = uVar5;
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
    *param_1 = &PTR_DAT_110b9f078;
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    uVar10 = *(undefined8 *)(param_2 + 0x40);
    uVar9 = *(undefined8 *)(param_2 + 0x38);
    uVar11 = *(undefined8 *)(param_2 + 0x48);
    param_1[10] = *(undefined8 *)(param_2 + 0x50);
    param_1[9] = uVar11;
    param_1[8] = uVar10;
    param_1[7] = uVar9;
    param_1[6] = uVar8;
    param_1[5] = uVar7;
    param_1[4] = uVar6;
    param_1[3] = uVar5;
    if (*(char *)(param_2 + 0x6f) < '\0') {
      func_0x000107c3192c(param_1 + 0xb,*(undefined8 *)(param_2 + 0x58),
                          *(undefined8 *)(param_2 + 0x60));
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x60);
      uVar5 = *(undefined8 *)(param_2 + 0x58);
      param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
      param_1[0xc] = uVar6;
      param_1[0xb] = uVar5;
    }
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return param_1;
}



/* Entry: 10a6fd048; end: 10a6fd0df;  */

undefined8 * FUN_10a6fd048(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    __ZdlPv(param_1[0x1e]);
  }
  if ((*(char *)(param_1 + 0x1c) == '\x01') && (*(char *)((long)param_1 + 0xdf) < '\0')) {
    __ZdlPv(param_1[0x19]);
  }
  func_0x00010a71259c(param_1 + 0x13);
  func_0x00010a71245c(param_1 + 0xe);
  if ((*(char *)(param_1 + 0xd) == '\x01') && (*(char *)((long)param_1 + 0x67) < '\0')) {
    __ZdlPv(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a6fd0e0; end: 10a6fd17b;  */

byte FUN_10a6fd0e0(undefined8 *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = 0;
  FUN_109d18960(param_2 + 0x10,*param_1,&lStack_38);
  if (lStack_38 == 0) {
    bVar1 = *(byte *)(param_1 + 1);
    if ((bVar1 & 1) == 0) {
      puStack_40 = (undefined8 *)*param_1;
      uStack_50 = 0;
      lStack_48 = param_2;
      (**(code **)*puStack_40)(puStack_40,&uStack_50);
    }
    __ZNSt13exception_ptrD1Ev(&lStack_38);
    return bVar1 ^ 1;
  }
  func_0x0001092af97c(&lStack_38);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6fd168);
  (*pcVar2)();
}



/* Entry: 10a6fd17c; end: 10a6fd6b3;  */

void FUN_10a6fd17c(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar7 = (undefined8 *)0x160;
  __Znwm();
  *puVar7 = FUN_10a733504;
  puVar7[1] = FUN_10a73381c;
  FUN_10a711e58(puVar7 + 2);
  lVar9 = puVar7[7];
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar9;
  uVar12 = *param_2;
  FUN_10a1ccb30(puVar7 + 0x18,param_2 + 1);
  if (*(char *)((long)param_2 + 0x3f) < '\0') {
    func_0x000107c3192c(puVar7 + 0x20,param_2[5],param_2[6]);
  }
  else {
    uVar13 = param_2[5];
    puVar7[0x21] = param_2[6];
    puVar7[0x20] = uVar13;
    puVar7[0x22] = param_2[7];
  }
  lVar9 = param_2[9];
  uVar13 = param_2[8];
  puVar7[0x24] = param_2[9];
  puVar7[0x23] = uVar13;
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar9 = param_2[0xb];
  uVar13 = param_2[10];
  puVar7[0x26] = param_2[0xb];
  puVar7[0x25] = uVar13;
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7[0x27] = 0;
  puVar7[0x28] = 0;
  FUN_10a6fd7c8(puVar7 + 9,param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x1b);
  FUN_10a1ccb30(puVar7 + 0x1c,param_2 + 0x1c);
  FUN_10a6dbfa0(puVar7 + 0x2a,uVar12,puVar7 + 0x18,puVar7 + 0x20,puVar7 + 0x23,puVar7 + 0x25,
                puVar7 + 0x27,puVar7 + 9,uVar3);
  puVar7[0x29] = puVar7[0x2a];
  plVar8 = (long *)(puVar7[0x2a] + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = *plVar8 + 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((uint)*(undefined8 *)(puVar7[0x29] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar7 + 0x2b) = 0;
    lVar9 = puVar7[0x29];
    plVar8 = (long *)(lVar9 + 0x10);
    uStack_58 = puVar7[3];
    do {
      lVar11 = *plVar8;
      if (lVar11 == 0) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          uStack_68 = 0;
          puStack_60 = puVar7;
          func_0x000109d1b588(lVar9 + 0x18,&uStack_68);
          *(undefined8 *)(lVar9 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar11 >> 1 & 1) == 0);
  }
  lVar9 = puVar7[0x29];
  if (((uint)*(undefined8 *)(puVar7[0x29] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar9 + 0xa8) & 1) != 0) {
      FUN_10a6fd6b4(puVar7 + 2,lVar9 + 0x98);
      plVar8 = (long *)puVar7[0x29];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar10 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar7[0x2a];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar10 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      if ((*(char *)(puVar7 + 0x1f) == '\x01') && (*(char *)((long)puVar7 + 0xf7) < '\0')) {
        __ZdlPv(puVar7[0x1c]);
      }
      if (*(char *)(puVar7 + 0x17) == '\x01') {
        func_0x00010a052168(puVar7 + 9);
      }
      plVar8 = (long *)puVar7[0x28];
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          lVar9 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = (long *)puVar7[0x26];
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          lVar9 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = (long *)puVar7[0x24];
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          lVar9 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (*(char *)((long)puVar7 + 0x117) < '\0') {
        __ZdlPv(puVar7[0x20]);
      }
      if ((*(char *)(puVar7 + 0x1b) == '\x01') && (*(char *)((long)puVar7 + 0xd7) < '\0')) {
        __ZdlPv(puVar7[0x18]);
      }
      func_0x000109d1a1d0(puVar7 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar7);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar9 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6fd550);
  (*pcVar6)();
}



/* Entry: 10a6fd6b4; end: 10a6fd6f3;  */

void FUN_10a6fd6b4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a6fd6f4(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a6fd6f4; end: 10a6fd76b;  */

undefined1 FUN_10a6fd6f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_10a6fd76c(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a6fd76c; end: 10a6fd7c7;  */

void FUN_10a6fd76c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    FUN_10a0772f0();
    *(undefined1 *)(param_1 + 2) = 0;
  }
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
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
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a6fd7c8; end: 10a6fd82b;  */

undefined1 * FUN_10a6fd7c8(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x70] = 0;
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_10a0500e4(param_1);
    param_1[0x70] = 1;
  }
  return param_1;
}



/* Entry: 10a6fd82c; end: 10a6fda23;  */

undefined8 * FUN_10a6fd82c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  
  puVar6 = (undefined8 *)*param_1;
  if (*(int *)(puVar6 + 2) != 0) {
    puVar4 = puVar6;
    FUN_10a6fc9e4(puVar6);
    lVar5 = param_3[1];
    uVar8 = *param_3;
    puVar6[1] = param_3[1];
    *puVar6 = uVar8;
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined4 *)(puVar6 + 2) = 0;
    return puVar4;
  }
  uVar8 = *param_3;
  lVar5 = param_3[1];
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)param_2[1];
  *param_2 = uVar8;
  param_2[1] = lVar5;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return param_2;
}



/* Entry: 10a6fda24; end: 10a6fdaa7;  */

undefined1 * FUN_10a6fda24(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined1 *puStack_38;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_10a6fc9e4();
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != 0xffffffff) {
    puStack_38 = param_1;
    (*(code *)(&PTR_FUN_110c13328)[uVar1])(&puStack_38,param_2);
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  return param_1;
}



/* Entry: 10a6fdaa8; end: 10a6fdb2b;  */

void FUN_10a6fdaa8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)*param_1;
  lVar4 = param_2[1];
  uVar6 = *param_2;
  puVar5[1] = param_2[1];
  *puVar5 = uVar6;
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
  return;
}



/* Entry: 10a6fdb2c; end: 10a6fdc97;  */

void FUN_10a6fdb2c(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar8 = *plVar7;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(lVar8 + 0x148) == '\x01') {
          FUN_10a6dbc78(lVar8 + 0x98);
          *(undefined1 *)(lVar8 + 0x148) = 0;
        }
        lVar6 = param_2[1];
        uVar9 = *param_2;
        *(undefined8 *)(lVar8 + 0xa0) = param_2[1];
        *(undefined8 *)(lVar8 + 0x98) = uVar9;
        if (lVar6 != 0) {
          plVar4 = (long *)(lVar6 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_10a6fd7c8(lVar8 + 0xa8,param_2 + 2);
        lVar6 = param_2[0x12];
        uVar9 = param_2[0x11];
        *(undefined8 *)(lVar8 + 0x128) = param_2[0x12];
        *(undefined8 *)(lVar8 + 0x120) = uVar9;
        if (lVar6 != 0) {
          plVar4 = (long *)(lVar6 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(char *)((long)param_2 + 0xaf) < '\0') {
          func_0x000107c3192c(lVar8 + 0x130,param_2[0x13],param_2[0x14]);
        }
        else {
          uVar10 = param_2[0x14];
          uVar9 = param_2[0x13];
          *(undefined8 *)(lVar8 + 0x140) = param_2[0x15];
          *(undefined8 *)(lVar8 + 0x138) = uVar10;
          *(undefined8 *)(lVar8 + 0x130) = uVar9;
        }
        *(undefined1 *)(lVar8 + 0x148) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
LAB_10a6fdc30:
        plVar4 = (long *)*plVar7;
        *plVar7 = 0;
        if (plVar4 == (long *)0x0) {
          return;
        }
        puVar1 = (ulong *)(plVar4 + 1);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 0x200000000;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 >> 0x21 == 1) {
          FUN_109d1b3c4(plVar4,1,plVar7);
          do {
            uVar5 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar5 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 8))(plVar4);
            return;
          }
        }
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) goto LAB_10a6fdc30;
  } while( true );
}



/* Entry: 10a6fdc98; end: 10a6fe503;  */

/* WARNING: Removing unreachable block (ram,0x00010a6fde20) */
/* WARNING: Removing unreachable block (ram,0x00010a6fded8) */

void FUN_10a6fdc98(long *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 auStack_e0 [15];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  *puVar6 = FUN_10a730168;
  puVar6[1] = FUN_10a730848;
  puVar6[0x10] = param_2;
  FUN_10a6fe504(puVar6 + 2);
  lVar7 = puVar6[7];
  if (lVar7 != 0) {
    plVar11 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar7;
  if (((*(int *)(param_2 + 0x98) != 2) || (lVar7 = *(long *)(param_2 + 0x88), lVar7 == 0)) ||
     (lVar10 = *(long *)(lVar7 + 0x40), puVar6[0x11] = lVar7, lVar10 == 0)) {
    func_0x00010a6dbf58(puVar6 + 0xd,puVar6[0x10] + 0x88);
    puVar6[0xc] = puVar6[0xd];
    plVar11 = (long *)(puVar6[0xd] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0xc] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x12) = 2;
      lVar7 = puVar6[0xc];
      plVar11 = (long *)(lVar7 + 0x10);
      auStack_e0[0] = puVar6[3];
      do {
        lVar10 = *plVar11;
        if (lVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_10a6fe074;
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar11 = (long *)puVar6[0xc];
    if (((uint)*(undefined8 *)(puVar6[0xc] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar11 + 0x12);
      goto LAB_10a6fe290;
    }
    if ((*(byte *)(plVar11 + 0x15) & 1) == 0) goto LAB_10a6fe290;
    lVar7 = plVar11[0x14];
    lVar10 = plVar11[0x13];
    puVar6[10] = plVar11[0x14];
    puVar6[9] = lVar10;
    if (lVar7 != 0) {
      plVar2 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar1 = (ulong *)(plVar11 + 1);
    do {
      uVar8 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar11 + 8))();
      }
    }
    plVar11 = (long *)puVar6[0xd];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    puVar9 = (undefined8 *)puVar6[0x10];
    puStack_e8 = (undefined8 *)puVar9[1];
    uStack_f0 = *puVar9;
    if (puVar9[1] != 0) {
      plVar11 = (long *)(puVar9[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar9 = (undefined8 *)puVar6[0x10];
    }
    FUN_10a6fd7c8(auStack_e0,puVar9 + 2);
    plVar11 = (long *)puVar6[10];
    uStack_60 = puVar6[10];
    uStack_68 = puVar6[9];
    if (plVar11 != (long *)0x0) {
      plVar2 = plVar11 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10a6fdb2c(puVar6 + 2,&uStack_f0);
    FUN_10a6dbc78(&uStack_f0);
    if (plVar11 != (long *)0x0) {
      plVar2 = plVar11 + 1;
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
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    goto LAB_10a6fe248;
  }
  puVar6[9] = 0;
  *(undefined1 *)(puVar6 + 0x12) = 0;
  lVar7 = puVar6[6];
  if (lVar7 != 0) {
    plVar11 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar11 = (long *)puVar6[9];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
    }
  }
  puVar6[9] = lVar7;
  puVar6[0xc] = lVar7;
  FUN_10a8313f8(puVar6 + 0xf,puVar6[0x11]);
  FUN_10a4f3e88(puVar6 + 0xe,puVar6 + 0xc,puVar6 + 0xf);
  puVar6[0xd] = puVar6[0xe];
  plVar11 = (long *)(puVar6[0xe] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = *plVar11 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0xd] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x12) = 1;
    lVar7 = puVar6[0xd];
    plVar11 = (long *)(lVar7 + 0x10);
    auStack_e0[0] = puVar6[3];
    do {
      lVar10 = *plVar11;
      if (lVar10 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
LAB_10a6fe074:
          uStack_f0 = 0;
          puStack_e8 = puVar6;
          func_0x000109d1b588(lVar7 + 0x18,&uStack_f0);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar11 = (long *)puVar6[0xd];
  if (((uint)*(undefined8 *)(puVar6[0xd] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar11 + 0x12);
LAB_10a6fe290:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6fe294);
    (*pcVar5)();
  }
  if ((*(byte *)(plVar11 + 0x16) & 1) == 0) goto LAB_10a6fe290;
  if (*(char *)((long)plVar11 + 0xaf) < '\0') {
    func_0x000107c3192c(puVar6 + 9,plVar11[0x13],plVar11[0x14]);
    plVar11 = (long *)puVar6[0xd];
    if (plVar11 != (long *)0x0) goto LAB_10a6fe0a0;
  }
  else {
    lVar10 = plVar11[0x14];
    lVar7 = plVar11[0x13];
    puVar6[0xb] = plVar11[0x15];
    puVar6[10] = lVar10;
    puVar6[9] = lVar7;
LAB_10a6fe0a0:
    puVar1 = (ulong *)(plVar11 + 1);
    do {
      uVar8 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar11 + 8))();
      }
    }
  }
  plVar11 = (long *)puVar6[0xe];
  if (plVar11 != (long *)0x0) {
    puVar1 = (ulong *)(plVar11 + 1);
    do {
      uVar8 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar11 + 8))();
      }
    }
  }
  plVar11 = (long *)puVar6[0xf];
  if (plVar11 != (long *)0x0) {
    puVar1 = (ulong *)(plVar11 + 1);
    do {
      uVar8 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar11 + 8))();
      }
    }
  }
  puVar9 = (undefined8 *)puVar6[0x10];
  puStack_e8 = (undefined8 *)puVar9[1];
  uStack_f0 = *puVar9;
  if (puVar9[1] != 0) {
    plVar11 = (long *)(puVar9[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar9 = (undefined8 *)puVar6[0x10];
  }
  FUN_10a6fd7c8(auStack_e0,puVar9 + 2);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_50 = puVar6[10];
  uStack_58 = puVar6[9];
  uStack_48 = puVar6[0xb];
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  FUN_10a6fdb2c(puVar6 + 2,&uStack_f0);
  FUN_10a6dbc78(&uStack_f0);
  if (*(char *)((long)puVar6 + 0x5f) < '\0') {
    __ZdlPv(puVar6[9]);
  }
  plVar11 = (long *)puVar6[0xc];
  if (plVar11 != (long *)0x0) {
    puVar1 = (ulong *)(plVar11 + 1);
    do {
      uVar8 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
LAB_10a6fe248:
  func_0x000109d1a1d0(puVar6 + 2);
  __ZdlPv(puVar6);
  return;
}



/* Entry: 10a6fe504; end: 10a6fe5a3;  */

undefined8 * FUN_10a6fe504(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x150;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
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
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110c13350;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x29) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10a6fe5a4; end: 10a6fe657;  */

undefined8 * FUN_10a6fe5a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13350;
  if (*(char *)(param_1 + 0x29) == '\x01') {
    FUN_10a6dbc78(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a6fe658; end: 10a6ff307;  */

/* WARNING: Removing unreachable block (ram,0x00010a6fe798) */
/* WARNING: Removing unreachable block (ram,0x00010a6fe8b0) */
/* WARNING: Removing unreachable block (ram,0x00010a6feb88) */

void FUN_10a6fe658(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  puVar7 = (undefined8 *)0x3e0;
  __Znwm();
  *puVar7 = FUN_10a731ad4;
  puVar7[1] = FUN_10a732a2c;
  puVar7[0x78] = param_2;
  FUN_10a711e58(puVar7 + 2);
  lVar10 = puVar7[7];
  if (lVar10 != 0) {
    plVar9 = (long *)(lVar10 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar10;
  lVar10 = (long)*(char *)((long)param_2 + 0x137);
  if (lVar10 < 0) {
    lVar10 = param_2[0x25];
  }
  plVar9 = puVar7 + 0x57;
  puStack_70 = puVar7;
  if (lVar10 == 0) {
    puVar14 = puVar7 + 0x4f;
    uVar11 = *param_2;
    FUN_10a1ccb30(puVar14,param_2 + 8);
    puVar3 = puVar7 + 0x68;
    if (*(char *)((long)param_2 + 0x1f) < '\0') {
      func_0x000107c3192c(puVar3,param_2[1],param_2[2]);
    }
    else {
      uVar15 = param_2[1];
      puVar7[0x69] = param_2[2];
      *puVar3 = uVar15;
      puVar7[0x6a] = param_2[3];
    }
    lVar10 = param_2[0x23];
    uVar15 = param_2[0x22];
    puVar7[0x70] = param_2[0x23];
    puVar7[0x6f] = uVar15;
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar10 = param_2[0x12];
    uVar15 = param_2[0x11];
    puVar7[0x72] = param_2[0x12];
    puVar7[0x71] = uVar15;
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar10 = param_2[0x10];
    uVar15 = param_2[0xf];
    puVar7[0x74] = param_2[0x10];
    puVar7[0x73] = uVar15;
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a6fd7c8(puVar7 + 0x2d,param_2 + 0x13);
    FUN_10a1ccb30(puVar7 + 0x4b,param_2 + 4);
    FUN_10a6dbfa0(plVar9,uVar11,puVar14,puVar3,puVar7 + 0x6f,puVar7 + 0x71,puVar7 + 0x73,
                  puVar7 + 0x2d,0);
    puVar7[9] = *plVar9;
    plVar8 = (long *)(*plVar9 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar7[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar7 + 0x7b) = 4;
      lVar10 = puVar7[9];
      plVar8 = (long *)(lVar10 + 0x10);
      uStack_68 = puVar7[3];
      do {
        lVar12 = *plVar8;
        if (lVar12 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            uStack_78 = 0;
            func_0x000109d1b588(lVar10 + 0x18,&uStack_78);
            goto LAB_10a6fedc0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    lVar10 = puVar7[9];
    if (((uint)*(undefined8 *)(puVar7[9] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar10 + 0xa8) & 1) != 0) {
        FUN_10a6fd6b4(puVar7 + 2,lVar10 + 0x98);
        plVar8 = (long *)puVar7[9];
        if (plVar8 != (long *)0x0) {
          puVar1 = (ulong *)(plVar8 + 1);
          do {
            uVar13 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar13 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar13 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 != (long *)0x0) {
          puVar1 = (ulong *)(plVar9 + 1);
          do {
            uVar13 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar13 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar13 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        if ((*(char *)(puVar7 + 0x4e) == '\x01') && (*(char *)((long)puVar7 + 0x26f) < '\0')) {
          __ZdlPv(puVar7[0x4b]);
        }
        if (*(char *)(puVar7 + 0x3b) == '\x01') {
          func_0x00010a052168(puVar7 + 0x2d);
        }
        plVar9 = (long *)puVar7[0x74];
        if (plVar9 != (long *)0x0) {
          plVar8 = plVar9 + 1;
          do {
            lVar10 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar9 = (long *)puVar7[0x72];
        if (plVar9 != (long *)0x0) {
          plVar8 = plVar9 + 1;
          do {
            lVar10 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar9 = (long *)puVar7[0x70];
        if (plVar9 != (long *)0x0) {
          plVar8 = plVar9 + 1;
          do {
            lVar10 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        if (*(char *)((long)puVar7 + 0x357) < '\0') {
          __ZdlPv(*puVar3);
        }
        if ((*(char *)(puVar7 + 0x52) == '\x01') && (*(char *)((long)puVar7 + 0x28f) < '\0')) {
          __ZdlPv(*puVar14);
        }
        func_0x000109d1a1d0(puVar7 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar7);
        return;
      }
    }
    else {
      func_0x0001092af97c(lVar10 + 0x90);
    }
  }
  else if (((*(int *)(param_2 + 0xe) == 2) && (lVar10 = param_2[0xc], lVar10 != 0)) &&
          (lVar12 = *(long *)(lVar10 + 0x40), puVar7[0x79] = lVar10, lVar12 != 0)) {
    puVar7[9] = 0;
    *(undefined1 *)(puVar7 + 0x7b) = 0;
    puVar14 = puVar7 + 9;
    FUN_10a6de354(puVar14,puVar7);
    if (((ulong)puVar14 & 1) != 0) {
      return;
    }
    puVar7[0x77] = puVar7[9];
    FUN_10a8313a8(puVar7 + 0x76,puVar7[0x79]);
    lVar10 = puVar7[0x76];
    puVar7[9] = lVar10;
    plVar8 = (long *)(lVar10 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar7[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar7 + 0x7b) = 1;
      lVar10 = puVar7[9];
      plVar8 = (long *)(lVar10 + 0x10);
      uStack_68 = puVar7[3];
      do {
        lVar12 = *plVar8;
        if (lVar12 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_10a6fedb0;
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    uVar11 = *(undefined8 *)(puVar7[9] + 0x10);
    plVar8 = (long *)puVar7[9];
    puVar7[0x7a] = plVar8;
    if (((uint)uVar11 >> 5 & 1) == 0) {
      if ((*(byte *)(plVar8 + 0x14) & 1) != 0) {
        puVar14 = (undefined8 *)puVar7[0x78];
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar13 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar13 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar13 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        uVar11 = *puVar14;
        lVar10 = puVar14[0x12];
        uVar15 = puVar14[0x11];
        puVar7[0x6c] = puVar14[0x12];
        puVar7[0x6b] = uVar15;
        if (lVar10 != 0) {
          plVar8 = (long *)(lVar10 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        FUN_10a6d7f90(puVar7 + 9,uVar11,puVar7 + 0x6b);
        FUN_10a6de718(puVar7 + 0x62,puVar7 + 0x77,puVar7[9]);
        puVar7[0x6d] = puVar7[0x62];
        plVar8 = (long *)(puVar7[0x62] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(puVar7[0x6d] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar7 + 0x7b) = 2;
          lVar10 = puVar7[0x6d];
          plVar8 = (long *)(lVar10 + 0x10);
          uStack_68 = puVar7[3];
          do {
            lVar12 = *plVar8;
            if (lVar12 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
LAB_10a6fedb0:
                uStack_78 = 0;
                func_0x000109d1b588(lVar10 + 0x18,&uStack_78);
LAB_10a6fedc0:
                *(undefined8 *)(lVar10 + 0x10) = 0;
                return;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar12 >> 1 & 1) == 0);
        }
        lVar10 = puVar7[0x6d];
        if (((uint)*(undefined8 *)(puVar7[0x6d] + 0x10) >> 5 & 1) == 0) {
          if ((*(byte *)(lVar10 + 0xb8) & 1) != 0) {
            FUN_10a1cffac(plVar9,lVar10 + 0x98);
            plVar8 = (long *)puVar7[0x6d];
            if (plVar8 != (long *)0x0) {
              puVar1 = (ulong *)(plVar8 + 1);
              do {
                uVar13 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar13 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar13 & 0x1fffffffc) == 4) {
                do {
                  uVar13 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar13 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar13 - 1 == 0) {
                  (**(code **)(*plVar8 + 8))();
                }
              }
            }
            plVar8 = (long *)puVar7[0x62];
            if (plVar8 != (long *)0x0) {
              puVar1 = (ulong *)(plVar8 + 1);
              do {
                uVar13 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar13 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar13 & 0x1fffffffc) == 4) {
                do {
                  uVar13 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar13 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar13 - 1 == 0) {
                  (**(code **)(*plVar8 + 8))();
                }
              }
            }
            plVar8 = (long *)puVar7[9];
            if (plVar8 != (long *)0x0) {
              puVar1 = (ulong *)(plVar8 + 1);
              do {
                uVar13 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar13 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar13 & 0x1fffffffc) == 4) {
                do {
                  uVar13 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar13 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar13 - 1 == 0) {
                  (**(code **)(*plVar8 + 8))();
                }
              }
            }
            plVar8 = (long *)puVar7[0x6c];
            if (plVar8 != (long *)0x0) {
              plVar2 = plVar8 + 1;
              do {
                lVar10 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            lVar10 = puVar7[0x78];
            if (*(char *)(lVar10 + 0x58) == '\x01') {
              lVar12 = (long)*(char *)(lVar10 + 0x57);
              if (lVar12 < 0) {
                lVar12 = *(long *)(lVar10 + 0x48);
              }
              if ((lVar12 != 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
                func_0x00010ae06f08(1,2,&UNK_10f66dea2,&UNK_10f670b2a,0x183,&UNK_10f670bce);
                lVar10 = puVar7[0x78];
              }
            }
            if (*(char *)(lVar10 + 0x137) < '\0') {
              func_0x000107c3192c(puVar7 + 0x65,*(undefined8 *)(lVar10 + 0x120),
                                  *(undefined8 *)(lVar10 + 0x128));
              lVar10 = puVar7[0x78];
            }
            else {
              uVar15 = *(undefined8 *)(lVar10 + 0x128);
              uVar11 = *(undefined8 *)(lVar10 + 0x120);
              puVar7[0x67] = *(undefined8 *)(lVar10 + 0x130);
              puVar7[0x66] = uVar15;
              puVar7[0x65] = uVar11;
            }
            if (*(char *)(lVar10 + 0x1f) < '\0') {
              func_0x000107c3192c(puVar7 + 0x5f,*(undefined8 *)(lVar10 + 8),
                                  *(undefined8 *)(lVar10 + 0x10));
              lVar10 = puVar7[0x78];
            }
            else {
              uVar15 = *(undefined8 *)(lVar10 + 0x10);
              uVar11 = *(undefined8 *)(lVar10 + 8);
              puVar7[0x61] = *(undefined8 *)(lVar10 + 0x18);
              puVar7[0x60] = uVar15;
              puVar7[0x5f] = uVar11;
            }
            FUN_10a6fd7c8(puVar7 + 0x3c,lVar10 + 0x98);
            *(undefined1 *)(puVar7 + 0x5b) = 0;
            *(undefined1 *)(puVar7 + 0x5e) = 0;
            if (*(char *)(puVar7 + 0x5a) == '\x01') {
              puVar7[0x5b] = puVar7[0x57];
              puVar7[0x5d] = puVar7[0x59];
              puVar7[0x5c] = puVar7[0x58];
              puVar7[0x58] = 0;
              puVar7[0x59] = 0;
              *plVar9 = 0;
              *(undefined1 *)(puVar7 + 0x5e) = 1;
            }
            FUN_10a00946c(&UNK_10f67b849);
          }
        }
        else {
          func_0x0001092af97c(lVar10 + 0x90);
        }
      }
    }
    else {
      func_0x0001092af97c(plVar8 + 0x12);
    }
  }
  else {
    FUN_10a00946c(&UNK_10f670abd);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6fef14);
  (*pcVar6)();
}



/* Entry: 10a6ff308; end: 10a6ff37b;  */

undefined1 * FUN_10a6ff308(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined1 *puStack_38;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_10a6fc9e4();
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != 0xffffffff) {
    puStack_38 = param_1;
    (*(code *)(&PTR_FUN_110c13378)[uVar1])(&puStack_38,param_2);
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  return param_1;
}



/* Entry: 10a6ff37c; end: 10a6ff3b7;  */

void FUN_10a6ff37c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 10a6ff3b8; end: 10a6ff4ab;  */

void FUN_10a6ff3b8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_50;
  long *plStack_48;
  
  plVar4 = (long *)0x118;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c14bc8;
  plVar1 = plVar4 + 3;
  FUN_10a6f27ec(plVar1,param_2,param_3,param_4);
  plStack_50 = plVar1;
  plStack_48 = plVar4;
  FUN_10a6ff650(&plStack_50,plVar4 + 8,plVar1);
  FUN_10a6ff4ac(param_1,&plStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a6ff4ac; end: 10a6ff60f;  */

void FUN_10a6ff4ac(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a6ff610; end: 10a6ff61f;  */

void FUN_10a6ff610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14bc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6ff620; end: 10a6ff63f;  */

void FUN_10a6ff620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14bc8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6ff640; end: 10a6ff64f;  */

void FUN_10a6ff640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6ff648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6ff650; end: 10a6ff6ff;  */

void FUN_10a6ff650(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a6ff700; end: 10a700143;  */

void FUN_10a6ff700(long *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_b0 [8];
  undefined8 *****pppppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined1 uStack_79;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  puVar7 = (undefined8 *)0x210;
  __Znwm();
  *puVar7 = FUN_10a72dd00;
  puVar7[1] = FUN_10a72e634;
  puVar7[0x40] = param_2;
  FUN_10a711e58(puVar7 + 2);
  lVar9 = puVar7[7];
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar9;
  FUN_10a6fda24(puVar7 + 0x2f,param_2 + 0x58);
  FUN_10a6dbf18(puVar7 + 9,puVar7 + 0x2f);
  FUN_10a6fc9e4(puVar7 + 0x2f);
  func_0x00010a6dbf58(puVar7 + 0x3d,param_2 + 0x58);
  puVar7[0x35] = puVar7[0x3d];
  plVar8 = (long *)(puVar7[0x3d] + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = *plVar8 + 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((uint)*(undefined8 *)(puVar7[0x35] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar7 + 0x41) = 0;
    lVar9 = puVar7[0x35];
    plVar8 = (long *)(lVar9 + 0x10);
    uVar10 = puVar7[3];
    do {
      lVar12 = *plVar8;
      if (lVar12 == 0) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_10a6ffd3c;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar12 >> 1 & 1) == 0);
  }
  uVar10 = *(undefined8 *)(puVar7[0x35] + 0x10);
  plVar8 = (long *)puVar7[0x35];
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar11 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar11 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar11 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  if (((uint)uVar10 >> 5 & 1) == 0) {
    puVar7[0x3e] = puVar7[0x3d];
    plVar8 = (long *)(puVar7[0x3d] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar7[0x3e] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar7 + 0x41) = 1;
      lVar9 = puVar7[0x3e];
      plVar8 = (long *)(lVar9 + 0x10);
      uVar10 = puVar7[3];
      do {
        lVar12 = *plVar8;
        if (lVar12 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_10a6ffd3c;
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar7[0x3e];
    if (((uint)*(undefined8 *)(puVar7[0x3e] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(plVar8 + 0x15) & 1) != 0) {
        lVar12 = plVar8[0x13];
        puVar7[0x35] = lVar12;
        lVar9 = plVar8[0x14];
        puVar7[0x36] = lVar9;
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
        lVar13 = puVar7[0x40];
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar11 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar11 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        uVar10 = *(undefined8 *)(lVar13 + 0x80);
        FUN_10a1ccb30(puVar7 + 0x27,lVar13);
        lVar13 = puVar7[0x40];
        if (*(char *)(lVar13 + 0x37) < '\0') {
          func_0x000107c3192c(puVar7 + 0x32,*(undefined8 *)(lVar13 + 0x20),
                              *(undefined8 *)(lVar13 + 0x28));
        }
        else {
          uVar15 = *(undefined8 *)(lVar13 + 0x28);
          uVar14 = *(undefined8 *)(lVar13 + 0x20);
          puVar7[0x34] = *(undefined8 *)(lVar13 + 0x30);
          puVar7[0x33] = uVar15;
          puVar7[0x32] = uVar14;
        }
        puVar7[0x37] = lVar12;
        puVar7[0x38] = lVar9;
        if (lVar9 != 0) {
          plVar8 = (long *)(lVar9 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar9 = puVar7[0x40];
        lVar12 = *(long *)(lVar9 + 0x90);
        uVar14 = *(undefined8 *)(lVar9 + 0x88);
        puVar7[0x3a] = *(undefined8 *)(lVar9 + 0x90);
        puVar7[0x39] = uVar14;
        if (lVar12 != 0) {
          plVar8 = (long *)(lVar12 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          lVar9 = puVar7[0x40];
        }
        lVar12 = *(long *)(lVar9 + 0x78);
        uVar14 = *(undefined8 *)(lVar9 + 0x70);
        puVar7[0x3c] = *(undefined8 *)(lVar9 + 0x78);
        puVar7[0x3b] = uVar14;
        if (lVar12 != 0) {
          plVar8 = (long *)(lVar12 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        FUN_10a6fd7c8(puVar7 + 0x18,puVar7 + 9);
        uVar3 = *(undefined4 *)(puVar7[0x40] + 0x98);
        FUN_10a1ccb30(puVar7 + 0x2b,puVar7[0x40] + 0x38);
        FUN_10a6dbfa0(puVar7 + 0x3f,uVar10,puVar7 + 0x27,puVar7 + 0x32,puVar7 + 0x37,puVar7 + 0x39,
                      puVar7 + 0x3b,puVar7 + 0x18,uVar3);
        puVar7[0x3e] = puVar7[0x3f];
        plVar8 = (long *)(puVar7[0x3f] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(puVar7[0x3e] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar7 + 0x41) = 2;
          lVar9 = puVar7[0x3e];
          plVar8 = (long *)(lVar9 + 0x10);
          uVar10 = puVar7[3];
          do {
            lVar12 = *plVar8;
            if (lVar12 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
LAB_10a6ffd3c:
                uStack_60 = uVar10;
                uStack_70 = 0;
                puStack_68 = puVar7;
                func_0x000109d1b588(lVar9 + 0x18,&uStack_70);
                *(undefined8 *)(lVar9 + 0x10) = 0;
                return;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar12 >> 1 & 1) == 0);
        }
        lVar9 = puVar7[0x3e];
        if (((uint)*(undefined8 *)(puVar7[0x3e] + 0x10) >> 5 & 1) == 0) {
          if ((*(byte *)(lVar9 + 0xa8) & 1) != 0) {
            FUN_10a6fd6b4(puVar7 + 2,lVar9 + 0x98);
            plVar8 = (long *)puVar7[0x3e];
            if (plVar8 != (long *)0x0) {
              puVar1 = (ulong *)(plVar8 + 1);
              do {
                uVar11 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar11 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar11 & 0x1fffffffc) == 4) {
                do {
                  uVar11 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar11 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar11 - 1 == 0) {
                  (**(code **)(*plVar8 + 8))();
                }
              }
            }
            plVar8 = (long *)puVar7[0x3f];
            if (plVar8 != (long *)0x0) {
              puVar1 = (ulong *)(plVar8 + 1);
              do {
                uVar11 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar11 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar11 & 0x1fffffffc) == 4) {
                do {
                  uVar11 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar11 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar11 - 1 == 0) {
                  (**(code **)(*plVar8 + 8))();
                }
              }
            }
            if ((*(char *)(puVar7 + 0x2e) == '\x01') && (*(char *)((long)puVar7 + 0x16f) < '\0')) {
              __ZdlPv(puVar7[0x2b]);
            }
            if (*(char *)(puVar7 + 0x26) == '\x01') {
              func_0x00010a052168(puVar7 + 0x18);
            }
            plVar8 = (long *)puVar7[0x3c];
            if (plVar8 != (long *)0x0) {
              plVar2 = plVar8 + 1;
              do {
                lVar9 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            plVar8 = (long *)puVar7[0x3a];
            if (plVar8 != (long *)0x0) {
              plVar2 = plVar8 + 1;
              do {
                lVar9 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            plVar8 = (long *)puVar7[0x38];
            if (plVar8 != (long *)0x0) {
              plVar2 = plVar8 + 1;
              do {
                lVar9 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            if (*(char *)((long)puVar7 + 0x1a7) < '\0') {
              __ZdlPv(puVar7[0x32]);
            }
            if ((*(char *)(puVar7 + 0x2a) == '\x01') && (*(char *)((long)puVar7 + 0x14f) < '\0')) {
              __ZdlPv(puVar7[0x27]);
            }
            plVar8 = (long *)puVar7[0x36];
            if (plVar8 != (long *)0x0) {
              plVar2 = plVar8 + 1;
              do {
                lVar9 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            plVar8 = (long *)puVar7[0x3d];
            if (plVar8 != (long *)0x0) {
              puVar1 = (ulong *)(plVar8 + 1);
              do {
                uVar11 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar11 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar11 & 0x1fffffffc) == 4) {
                do {
                  uVar11 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar11 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar11 - 1 == 0) {
                  (**(code **)(*plVar8 + 8))();
                }
              }
            }
            if (*(char *)(puVar7 + 0x17) == '\x01') {
              func_0x00010a052168(puVar7 + 9);
            }
            func_0x000109d1a1d0(puVar7 + 2);
            __ZdlPv(puVar7);
            return;
          }
        }
        else {
          func_0x0001092af97c(lVar9 + 0x90);
        }
      }
    }
    else {
      func_0x0001092af97c(plVar8 + 0x12);
    }
  }
  else {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(&uStack_90,puVar7[0x3d] + 0x90);
      func_0x0001098bc760(&uStack_70,&uStack_90);
      func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f670c24,0x1b6,&UNK_10f670d24);
      if (uStack_60._7_1_ < '\0') {
        __ZdlPv(uStack_70);
      }
      __ZNSt13exception_ptrD1Ev(&uStack_90);
    }
    uStack_79 = 0x14;
    uStack_80 = 0x202d2070;
    uStack_88 = 0x616d207465672074;
    uStack_90 = 0x6f6e20646c756f63;
    uStack_7c = 0;
    __ZNSt13exception_ptrC1ERKS_(auStack_b0,puVar7[0x3d] + 0x90);
    func_0x0001098bc760(&pppppuStack_a8,auStack_b0);
    if (-1 < (char)bStack_91) {
      uStack_a0 = (ulong)bStack_91;
      pppppuStack_a8 = &pppppuStack_a8;
    }
    puVar7 = &uStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,pppppuStack_a8,uStack_a0);
    puStack_68 = (undefined8 *)puVar7[1];
    uStack_70 = *puVar7;
    uStack_60 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_10a0029c0(&uStack_70);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6ffe1c);
  (*pcVar6)();
}



/* Entry: 10a700144; end: 10a7003bf;  */

void FUN_10a700144(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x60;
  __Znwm();
  *puVar5 = FUN_10a72eeb4;
  puVar5[1] = FUN_10a72f038;
  puVar5[10] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  lVar7 = *param_2;
  puVar5[9] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xb) = 0;
    lVar7 = puVar5[9];
    plVar6 = (long *)(lVar7 + 0x10);
    uVar8 = puVar5[3];
    do {
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          uStack_48 = 0;
          puStack_40 = puVar5;
          uStack_38 = uVar8;
          func_0x000109d1b588(lVar7 + 0x18,&uStack_48);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  uVar8 = *(undefined8 *)(puVar5[9] + 0x10);
  plVar6 = (long *)puVar5[9];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = (long *)puVar5[10];
  if (((uint)uVar8 >> 5 & 1) == 0) {
    lVar7 = plVar6[1];
    if (lVar7 != 0) {
      func_0x0001092af8bc();
      if ((*(byte *)(*(long *)puVar5[10] + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a700360);
        (*pcVar4)();
      }
      FUN_10a7003c0(lVar7,*(long *)puVar5[10] + 0x98);
    }
  }
  else {
    puVar11 = (undefined8 *)plVar6[3];
    if (puVar11 != (undefined8 *)0x0) {
      __ZNSt13exception_ptrC1ERKS_(auStack_50,*plVar6 + 0x90);
      func_0x0001098bc760(&uStack_48,auStack_50);
      if (*(char *)(puVar11 + 8) == '\x01') {
        (*(code *)*puVar11)(&uStack_48,puVar11);
      }
      else if (*(char *)(puVar11 + 8) == '\x02') {
        FUN_10a05aad0(puVar11,&uStack_48);
      }
      if (uStack_38._7_1_ < '\0') {
        __ZdlPv(uStack_48);
      }
      __ZNSt13exception_ptrD1Ev(auStack_50);
    }
  }
  func_0x0001092ba100(puVar5 + 2);
  func_0x000109d1a1d0(puVar5 + 2);
  __ZdlPv(puVar5);
  return;
}



/* Entry: 10a7003c0; end: 10a70048b;  */

void FUN_10a7003c0(code **param_1,code **param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  code *pcVar11;
  long lVar12;
  undefined **ppuVar13;
  code *pcVar14;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    pcVar11 = *param_1;
    pcVar14 = param_2[1];
    if (param_2[1] != (code *)0x0) {
      pcVar1 = param_2[1] + 8;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar4) {
          *(long *)pcVar1 = *(long *)pcVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    (*pcVar11)(&stack0xffffffffffffffd0,param_1);
    if (pcVar14 != (code *)0x0) {
      pcVar11 = pcVar14 + 8;
      do {
        lVar12 = *(long *)pcVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
        if (bVar4) {
          *(long *)pcVar11 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*(long *)pcVar14 + 0x10))(pcVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar14);
      }
    }
  }
  else if (*(char *)(param_1 + 8) == '\x02') {
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppcVar6 = param_1;
    ppcVar9 = param_2;
    FUN_10a688b40();
    if (ppcVar6 == (code **)0x0) {
      ppcVar10 = (code **)0x0;
      pppuVar7 = (undefined ***)0x0;
      if (ppcVar9 != (code **)0x0) {
        pcStack_60 = param_1[1];
        pcStack_68 = *param_1;
        if (param_1[1] != (code *)0x0) {
          pcVar11 = param_1[1] + 8;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
            if (bVar4) {
              *(long *)pcVar11 = *(long *)pcVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pcStack_88 = *param_2;
        pppuVar8 = (undefined ***)param_2[1];
        if (pppuVar8 != (undefined ***)0x0) {
          pppuVar7 = pppuVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
            if (bVar4) {
              *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pcStack_78 = FUN_10a700848;
        ppuStack_70 = &PTR_FUN_110c14990;
        pcStack_98 = (code *)0x0;
        pppuStack_90 = (undefined ***)0x0;
        if (pppuVar8 != (undefined ***)0x0) {
          pppuVar7 = pppuVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
            if (bVar4) {
              *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        ppcVar6 = &pcStack_98;
        param_1 = &pcStack_78;
        ppcVar10 = &pcStack_78;
        pppuStack_80 = pppuVar8;
        pcStack_58 = pcStack_88;
        pppuStack_50 = pppuVar8;
        FUN_10a4634ec(ppcVar9,ppcVar10);
        pppuVar7 = &ppuStack_70;
        (*(code *)*ppuStack_70)();
        if (pppuVar8 != (undefined ***)0x0) {
          pppuVar2 = pppuVar8 + 1;
          do {
            ppuVar13 = *pppuVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
            if (bVar4) {
              *pppuVar2 = (undefined **)((long)ppuVar13 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar13 == (undefined **)0x0) {
            (*(code *)(*pppuVar8)[2])(pppuVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar7 = pppuVar8;
          }
        }
        pppuVar8 = pppuStack_90;
        if (pppuStack_90 != (undefined ***)0x0) {
          pppuVar2 = pppuStack_90 + 1;
          do {
            ppuVar13 = *pppuVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
            if (bVar4) {
              *pppuVar2 = (undefined **)((long)ppuVar13 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar13 == (undefined **)0x0) {
            (*(code *)(*pppuStack_90)[2])(pppuStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar7 = pppuVar8;
          }
        }
      }
    }
    else {
      *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
      pppuVar7 = (undefined ***)*param_1;
      FUN_10a70067c(pppuVar7,param_2);
      iVar5 = *(int *)((long)ppcVar6 + 4) + -1;
      *(int *)((long)ppcVar6 + 4) = iVar5;
      ppcVar10 = param_2;
      if (iVar5 == 0) {
        *(undefined4 *)ppcVar6 = 0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    (*(code *)*ppuStack_70)(param_1 + 1);
    FUN_10a0772f0(ppcVar6 + 2);
    func_0x00010a004dac(&pcStack_98);
    pppuVar8 = pppuVar7;
    __Unwind_Resume();
    pcStack_a8 = FUN_10a70067c;
    ppcStack_c0 = ppcVar6;
    pppuStack_b8 = pppuVar7;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(&puStack_d0,pppuVar8 + 1,*pppuVar8);
    func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar8);
    if (puStack_d0 != (undefined8 *)0x0) {
      (**(code **)*puStack_d0)();
    }
    (**(code **)(**pppuVar8 + 0x30))(&puStack_d0);
    FUN_10a700768(*pppuVar8,&puStack_d0,&puStack_c8,ppcVar10);
    if (puStack_d0 != (undefined8 *)0x0) {
      (**(code **)*puStack_d0)();
    }
    if (puStack_c8 != (undefined8 *)0x0) {
      (**(code **)*puStack_c8)();
    }
    return;
  }
  return;
}



/* Entry: 10a70048c; end: 10a70067b;  */

void FUN_10a70048c(code **param_1,code **param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  undefined **ppuVar11;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = param_1;
  ppcVar9 = param_2;
  FUN_10a688b40();
  if (ppcVar6 == (code **)0x0) {
    ppcVar10 = (code **)0x0;
    pppuVar7 = (undefined ***)0x0;
    if (ppcVar9 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar1 = param_1[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = *param_2;
      pppuVar8 = (undefined ***)param_2[1];
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_78 = FUN_10a700848;
      ppuStack_70 = &PTR_FUN_110c14990;
      pcStack_98 = (code *)0x0;
      pppuStack_90 = (undefined ***)0x0;
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppcVar6 = &pcStack_98;
      param_1 = &pcStack_78;
      ppcVar10 = &pcStack_78;
      pppuStack_80 = pppuVar8;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar8;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      pppuVar7 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar2 = pppuVar8 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuVar8)[2])(pppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
      pppuVar8 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_90 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
    }
  }
  else {
    *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
    pppuVar7 = (undefined ***)*param_1;
    FUN_10a70067c(pppuVar7,param_2);
    iVar5 = *(int *)((long)ppcVar6 + 4) + -1;
    *(int *)((long)ppcVar6 + 4) = iVar5;
    ppcVar10 = param_2;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  FUN_10a0772f0(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a70067c;
  ppcStack_c0 = ppcVar6;
  pppuStack_b8 = pppuVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar8);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_d0);
  FUN_10a700768(*pppuVar8,&puStack_d0,&puStack_c8,ppcVar10);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a70067c; end: 10a700767;  */

void FUN_10a70067c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a700768(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a700768; end: 10a700847;  */

void FUN_10a700768(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  FUN_10a080b34(aiStack_70,param_1,param_4);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &piStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a700848; end: 10a700857;  */

void FUN_10a700848(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&puStack_30,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_28,&puStack_30,*puVar1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_30);
  FUN_10a700768(*puVar1,&puStack_30,&puStack_28,param_1 + 0x20);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a700858; end: 10a70087f;  */

long FUN_10a700858(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a0772f0(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a700880; end: 10a7008bf;  */

void FUN_10a700880(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c14990;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a7008c0; end: 10a700917;  */

long FUN_10a7008c0(long param_1)

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



/* Entry: 10a700918; end: 10a700a53;  */

/* WARNING: Removing unreachable block (ram,0x00010a700a1c) */

void FUN_10a700918(undefined8 param_1)

{
  undefined1 auStack_48 [24];
  
  FUN_10a700a54(auStack_48,&UNK_10f670e15);
  FUN_10a700a54(param_1,auStack_48);
  return;
}



/* Entry: 10a700a54; end: 10a700b33;  */

void FUN_10a700a54(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined1 auStack_1028 [4096];
  long lStack_28;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _vsnprintf(auStack_1028,0x1000,param_1,&stack0x00000000);
  puVar1 = extraout_x8;
  func_0x000107c2b054(extraout_x8,auStack_1028);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar2 = puVar1;
    func_0x00010b4d80e0(puVar1,0x38);
  }
  *puVar2 = &PTR_FUN_110c78bf0;
  puVar2[1] = puVar1;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  return;
}



/* Entry: 10a700b34; end: 10a700bfb;  */

undefined8 *
FUN_10a700b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(param_4,*param_5,param_5[1]);
  }
  else {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_4[2] = param_5[2];
    param_4[1] = uVar2;
    *param_4 = uVar1;
  }
  param_4[3] = param_1;
  param_4[4] = param_2;
  param_4[5] = param_3;
  *(undefined4 *)(param_4 + 6) = param_6;
  if (*(char *)((long)param_7 + 0x17) < '\0') {
    func_0x000107c3192c(param_4 + 7,*param_7,param_7[1]);
  }
  else {
    uVar2 = param_7[1];
    uVar1 = *param_7;
    param_4[9] = param_7[2];
    param_4[8] = uVar2;
    param_4[7] = uVar1;
  }
  return param_4;
}



/* Entry: 10a700bfc; end: 10a700c8b;  */

undefined8 * FUN_10a700bfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 10a700c8c; end: 10a700ce3;  */

undefined1 * FUN_10a700c8c(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_10a700bfc(param_1);
    param_1[0x30] = 1;
  }
  return param_1;
}



/* Entry: 10a700ce4; end: 10a700d2f;  */

undefined8 * FUN_10a700ce4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 6) == '\x01') {
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(param_1[3]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10a700d30; end: 10a700d87;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a700e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a700de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a700d30(undefined8 *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *puVar4;
  undefined8 unaff_x30;
  long lVar5;
  long lVar6;
  
  if (param_3 == 0) {
    unaff_x19 = (long *)*param_1;
    puVar1 = &stack0xffffffffffffffe0;
    unaff_x29 = &stack0xfffffffffffffff0;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(unaff_x19,*param_2,param_2[1]);
    }
    else {
      lVar6 = param_2[1];
      lVar5 = *param_2;
      unaff_x19[2] = param_2[2];
      unaff_x19[1] = lVar6;
      *unaff_x19 = lVar5;
    }
    if (-1 < *(char *)((long)param_2 + 0x2f)) {
      lVar6 = param_2[4];
      lVar5 = param_2[3];
      unaff_x19[5] = param_2[5];
      unaff_x19[4] = lVar6;
      unaff_x19[3] = lVar5;
      return;
    }
    lVar5 = param_2[3];
    uVar3 = param_2[4];
    plVar2 = unaff_x19 + 3;
    unaff_x30 = 0x10a700dec;
  }
  else if (param_3 == 2) {
    unaff_x19 = (long *)*param_1;
    puVar1 = &stack0xffffffffffffffe0;
    unaff_x29 = &stack0xfffffffffffffff0;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(unaff_x19,*param_2,param_2[1]);
    }
    else {
      lVar6 = param_2[1];
      lVar5 = *param_2;
      unaff_x19[2] = param_2[2];
      unaff_x19[1] = lVar6;
      *unaff_x19 = lVar5;
    }
    if (-1 < *(char *)((long)param_2 + 0x2f)) {
      lVar6 = param_2[4];
      lVar5 = param_2[3];
      unaff_x19[5] = param_2[5];
      unaff_x19[4] = lVar6;
      unaff_x19[3] = lVar5;
      return;
    }
    lVar5 = param_2[3];
    uVar3 = param_2[4];
    plVar2 = unaff_x19 + 3;
    unaff_x30 = 0x10a700e78;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    plVar2 = (long *)*param_1;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      lVar6 = param_2[1];
      lVar5 = *param_2;
      plVar2[2] = param_2[2];
      plVar2[1] = lVar6;
      *plVar2 = lVar5;
      return;
    }
    lVar5 = *param_2;
    uVar3 = param_2[1];
    puVar1 = (undefined1 *)register0x00000008;
    param_2 = unaff_x20;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(long **)(puVar1 + -0x20) = param_2;
  *(long **)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  if (uVar3 < 0x17) {
    *(char *)((long)plVar2 + 0x17) = (char)uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(plVar2,lVar5,uVar3 + 1);
    return;
  }
  if (uVar3 < 0x7ffffffffffffff7) {
    lVar6 = 0x19;
    if ((uVar3 | 7) != 0x17) {
      lVar6 = (uVar3 | 7) + 1;
    }
    puVar4 = &UNK_100033e00;
  }
  else {
    puVar4 = &UNK_100033e30;
    lVar6 = lVar5;
    func_0x000104bd47d4();
  }
  *(ulong *)(puVar1 + -0x50) = uVar3;
  *(long *)(puVar1 + -0x48) = lVar5;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x38) = puVar4;
  func_0x000107c60e20(lVar6);
  return;
}



/* Entry: 10a700d88; end: 10a700e13;  */

void FUN_10a700d88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return;
}



/* Entry: 10a700e14; end: 10a700e9f;  */

void FUN_10a700e14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return;
}



/* Entry: 10a700ea0; end: 10a700edf;  */

undefined8 * FUN_10a700ea0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_90 [8];
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  
  lVar8 = param_2[1];
  *param_1 = *param_2;
  if (lVar8 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar8;
    if (lVar8 != 0) {
      return param_1;
    }
  }
  plVar7 = (long *)0x0;
  FUN_10a043ecc();
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  *puVar6 = FUN_10a729e78;
  puVar6[1] = FUN_10a72a310;
  puVar6[0xd] = param_2;
  func_0x0001092ba17c(puVar6 + 2);
  lVar8 = puVar6[7];
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *plVar7 = lVar8;
  puVar6[10] = 0;
  *(undefined1 *)(puVar6 + 0xe) = 0;
  puVar9 = puVar6 + 10;
  FUN_10a057268(puVar9,puVar6);
  if (((ulong)puVar9 & 1) != 0) {
    return puVar9;
  }
  puVar6[9] = puVar6[10];
  if (((uint)*(undefined8 *)(puVar6[10] + 0x10) >> 1 & 1) != 0) {
    func_0x0001092ba100(puVar6 + 2);
    bVar4 = false;
    goto LAB_10a7011e8;
  }
  puVar9 = (undefined8 *)puVar6[0xd];
  FUN_10a6e8d8c(puVar6 + 10,*puVar9,puVar9 + 1,puVar9 + 4);
  FUN_10a4f3e88(puVar6 + 0xb,puVar6 + 9,puVar6 + 10);
  puVar6[0xc] = puVar6[0xb];
  plVar7 = (long *)(puVar6[0xb] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0xc] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xe) = 1;
    lVar8 = puVar6[0xc];
    plVar7 = (long *)(lVar8 + 0x10);
    uVar10 = puVar6[3];
    do {
      lVar12 = *plVar7;
      if (lVar12 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          uStack_70 = 0;
          puVar9 = (undefined8 *)(lVar8 + 0x18);
          puStack_68 = puVar6;
          lStack_60 = uVar10;
          func_0x000109d1b588(puVar9,&uStack_70);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return puVar9;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar12 >> 1 & 1) == 0);
  }
  uVar10 = *(undefined8 *)(puVar6[0xc] + 0x10);
  plVar7 = (long *)puVar6[0xc];
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar11 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar11 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar11 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  if (((uint)uVar10 >> 5 & 1) == 0) {
    (**(code **)(*(long *)(puVar6[0xd] + 0x100) + 0x168))(*(long *)(puVar6[0xd] + 0x100) + 0x168);
LAB_10a701124:
    bVar4 = true;
  }
  else {
    if (((uint)*(undefined8 *)(puVar6[9] + 0x10) >> 1 & 1) == 0) {
      lVar8 = *(long *)(puVar6[0xd] + 0x100);
      __ZNSt13exception_ptrC1ERKS_(auStack_90,puVar6[0xb] + 0x90);
      func_0x0001098bc760(auStack_88,auStack_90);
      puVar9 = auStack_88;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar9,0,&UNK_10f670ede,0x19);
      puStack_68 = (undefined8 *)puVar9[1];
      uStack_70 = *puVar9;
      lStack_60 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      (**(code **)(lVar8 + 0x1a8))(&uStack_70,lVar8 + 0x1a8);
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      if (cStack_71 < '\0') {
        __ZdlPv(auStack_88[0]);
      }
      __ZNSt13exception_ptrD1Ev(auStack_90);
      goto LAB_10a701124;
    }
    func_0x0001092ba100(puVar6 + 2);
    bVar4 = false;
  }
  plVar7 = (long *)puVar6[0xb];
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar11 = *puVar2;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar11 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar2;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  plVar7 = (long *)puVar6[10];
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar11 = *puVar2;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar11 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar2;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
LAB_10a7011e8:
  plVar7 = (long *)puVar6[9];
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar11 = *puVar2;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar11 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar11 = *puVar2;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  if (bVar4) {
    func_0x0001092ba100(puVar6 + 2);
  }
  func_0x000109d1a1d0(puVar6 + 2);
  __ZdlPv(puVar6);
  return puVar6;
}



/* Entry: 10a700ee0; end: 10a7013e7;  */

void FUN_10a700ee0(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  
  puVar5 = (undefined8 *)0x78;
  __Znwm();
  *puVar5 = FUN_10a729e78;
  puVar5[1] = FUN_10a72a310;
  puVar5[0xd] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  puVar8 = puVar5 + 10;
  FUN_10a057268(puVar8,puVar5);
  if (((ulong)puVar8 & 1) != 0) {
    return;
  }
  puVar5[9] = puVar5[10];
  if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 1 & 1) != 0) {
    func_0x0001092ba100(puVar5 + 2);
    bVar3 = false;
    goto LAB_10a7011e8;
  }
  puVar8 = (undefined8 *)puVar5[0xd];
  FUN_10a6e8d8c(puVar5 + 10,*puVar8,puVar8 + 1,puVar8 + 4);
  FUN_10a4f3e88(puVar5 + 0xb,puVar5 + 9,puVar5 + 10);
  puVar5[0xc] = puVar5[0xb];
  plVar6 = (long *)(puVar5[0xb] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xe) = 1;
    lVar7 = puVar5[0xc];
    plVar6 = (long *)(lVar7 + 0x10);
    uVar9 = puVar5[3];
    do {
      lVar11 = *plVar6;
      if (lVar11 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          uStack_50 = 0;
          puStack_48 = puVar5;
          lStack_40 = uVar9;
          func_0x000109d1b588(lVar7 + 0x18,&uStack_50);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar11 >> 1 & 1) == 0);
  }
  uVar9 = *(undefined8 *)(puVar5[0xc] + 0x10);
  plVar6 = (long *)puVar5[0xc];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if (((uint)uVar9 >> 5 & 1) == 0) {
    (**(code **)(*(long *)(puVar5[0xd] + 0x100) + 0x168))(*(long *)(puVar5[0xd] + 0x100) + 0x168);
LAB_10a701124:
    bVar3 = true;
  }
  else {
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
      lVar7 = *(long *)(puVar5[0xd] + 0x100);
      __ZNSt13exception_ptrC1ERKS_(auStack_70,puVar5[0xb] + 0x90);
      func_0x0001098bc760(auStack_68,auStack_70);
      puVar8 = auStack_68;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar8,0,&UNK_10f670ede,0x19);
      puStack_48 = (undefined8 *)puVar8[1];
      uStack_50 = *puVar8;
      lStack_40 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      (**(code **)(lVar7 + 0x1a8))(&uStack_50,lVar7 + 0x1a8);
      if (lStack_40 < 0) {
        __ZdlPv(uStack_50);
      }
      if (cStack_51 < '\0') {
        __ZdlPv(auStack_68[0]);
      }
      __ZNSt13exception_ptrD1Ev(auStack_70);
      goto LAB_10a701124;
    }
    func_0x0001092ba100(puVar5 + 2);
    bVar3 = false;
  }
  plVar6 = (long *)puVar5[0xb];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = (long *)puVar5[10];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
LAB_10a7011e8:
  plVar6 = (long *)puVar5[9];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (bVar3) {
    func_0x0001092ba100(puVar5 + 2);
  }
  func_0x000109d1a1d0(puVar5 + 2);
  __ZdlPv(puVar5);
  return;
}



/* Entry: 10a7013e8; end: 10a70147f;  */

undefined8 * FUN_10a7013e8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_110c78d80;
  param_1[1] = param_2;
  FUN_10ae0e08c();
  if (param_1 != param_3) {
    uVar1 = param_1[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = param_3[1];
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10ae0ef38(param_1,param_3);
    }
    else {
      FUN_10ae0e300(param_1);
      FUN_10ae0ed04(param_1,param_3);
    }
  }
  return param_1;
}



/* Entry: 10a701480; end: 10a70162b;  */

void FUN_10a701480(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  iVar4 = (int)*(undefined8 *)(param_4 + 0x20);
  FUN_10a70162c();
  if (iVar4 != 0) {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      plVar7 = (long *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        plVar7 = param_1;
      }
      func_0x00010ae06f08(1,4,&UNK_10f66e891,&UNK_10f670f50,0x1c5,&UNK_10f67103a,param_7,param_8,
                          plVar7);
    }
    plVar7 = *(long **)(param_4 + 0x10);
    puVar5 = (undefined8 *)(*(ulong *)(*(long *)(param_4 + 0x20) + 0x100) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar5 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_60,*puVar5,puVar5[1]);
    }
    else {
      uStack_58 = puVar5[1];
      uStack_60 = *puVar5;
      lStack_50 = puVar5[2];
    }
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_48,*param_2,param_2[1]);
    }
    else {
      uStack_40 = param_2[1];
      uStack_48 = *param_2;
      lStack_38 = param_2[2];
    }
    lVar8 = *plVar7;
    plVar1 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          FUN_10a70183c(lVar8 + 0x98);
          FUN_10a700bfc(lVar8 + 0x98,&uStack_60);
          *(undefined1 *)(lVar8 + 200) = 1;
          *(undefined8 *)(lVar8 + 0x10) = 2;
          FUN_109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    FUN_10a7016a4(plVar7);
    if (lStack_38 < 0) {
      __ZdlPv(uStack_48);
    }
    if (lStack_50 < 0) {
      __ZdlPv(uStack_60);
    }
  }
  return;
}



/* Entry: 10a70162c; end: 10a7016a3;  */

bool FUN_10a70162c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_1 + 0x1f0);
  if ((plVar5 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 == (long *)0x0))
  {
    bVar4 = false;
  }
  else {
    bVar4 = *(long *)(param_1 + 0x1e8) != 0;
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
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return bVar4;
}



/* Entry: 10a7016a4; end: 10a70183b;  */

void FUN_10a7016a4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 ****ppppuStack_98;
  char cStack_90;
  undefined8 **ppuStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cStack_90 = '\0';
    pppppuVar3 = &ppppuStack_98;
    ppppuStack_98 = (undefined8 *****)(param_1 + 0x70);
    func_0x00010a701888();
    pppppuVar4 = pppppuVar3;
    if (((ulong)pppppuVar3 & 1) != 0) {
      pppuStack_b0 = (undefined8 ****)0x0;
      pppuStack_a8 = (undefined8 ***)0x0;
      uStack_a0 = 0;
      __ZNSt3__15mutex4lockEv(param_1 + 0x30);
      ppppuVar5 = *(undefined8 *****)(param_1 + 0x18);
      uStack_a0 = *(undefined8 *)(param_1 + 0x28);
      ppppuVar6 = *(undefined8 *****)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      pppuStack_b0 = ppppuVar5;
      pppuStack_a8 = ppppuVar6;
      __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
      for (; ppppuVar5 != ppppuVar6; ppppuVar5 = ppppuVar5 + 8) {
        ppuStack_88 = *ppppuVar5;
        (*(code *)ppppuVar5[1][3])(apuStack_80,ppppuVar5 + 1);
        (*(code *)ppuStack_88)(param_1 + 8,&ppuStack_88);
        (*(code *)*apuStack_80[0])(apuStack_80);
      }
      pppppuVar4 = (undefined8 *****)&pppuStack_b0;
      FUN_10a7018e0();
    }
    if (cStack_90 == '\x01') {
      pppppuVar4 = (undefined8 *****)ppppuStack_98;
      __ZNSt3__15mutex6unlockEv();
    }
    if ((int)pppppuVar3 == 0) break;
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    lVar1 = *(long *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    pppppuVar4 = (undefined8 *****)(param_1 + 0x30);
    __ZNSt3__15mutex6unlockEv();
  } while (lVar2 != lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a7018e0(&pppuStack_b0);
  if (cStack_90 == '\x01') {
    __ZNSt3__15mutex6unlockEv(ppppuStack_98);
  }
  __Unwind_Resume();
  if (*(char *)(pppppuVar4 + 6) == '\x01') {
    if (*(char *)((long)pppppuVar4 + 0x2f) < '\0') {
      __ZdlPv(pppppuVar4[3]);
    }
    if (*(char *)((long)pppppuVar4 + 0x17) < '\0') {
      __ZdlPv(*pppppuVar4);
    }
    *(undefined1 *)(pppppuVar4 + 6) = 0;
  }
  return;
}



/* Entry: 10a70183c; end: 10a7018df;  */

void FUN_10a70183c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 6) == '\x01') {
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(param_1[3]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



/* Entry: 10a7018e0; end: 10a701957;  */

void FUN_10a7018e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -7;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -8;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a701958; end: 10a70197f;  */

long FUN_10a701958(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a707f3c(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a701980; end: 10a7019a7;  */

void FUN_10a701980(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c13390;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10a7019a8; end: 10a701b4f;  */

void FUN_10a7019a8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar6;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined **appuStack_158 [36];
  undefined1 auStack_38 [8];
  
  iVar3 = (int)*(undefined8 *)(param_2 + 0x20);
  FUN_10a70162c();
  if (iVar3 != 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      func_0x00010ae06f08(0,1,&UNK_10f66e891,&UNK_10f6710a2,0x1cc,&UNK_10f671159,in_x6,in_x7,puVar1)
      ;
    }
    puVar6 = *(undefined8 **)(param_2 + 0x10);
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    lStack_178 = -0x7fffffffffffffe0;
    uStack_180 = 0x19;
    puVar4[1] = 0x64616f6c7075206f;
    *puVar4 = 0x742064656c696166;
    *(undefined8 *)((long)puVar4 + 0x11) = 0x202d207465737361;
    *(undefined8 *)((long)puVar4 + 9) = 0x2064616f6c707520;
    *(undefined1 *)((long)puVar4 + 0x19) = 0;
    uVar2 = param_1[1];
    puVar1 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar1 = param_1;
    }
    ppuVar5 = &puStack_188;
    puStack_188 = puVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppuVar5,puVar1,uVar2);
    puStack_168 = ppuVar5[1];
    puStack_170 = *ppuVar5;
    puStack_160 = ppuVar5[2];
    ppuVar5[1] = (undefined8 *)0x0;
    ppuVar5[2] = (undefined8 *)0x0;
    *ppuVar5 = (undefined8 *)0x0;
    FUN_10a002a94(appuStack_158,&puStack_170);
    appuStack_158[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_38,appuStack_158);
    func_0x000109d1b350(*puVar6,auStack_38);
    FUN_10a7016a4(puVar6);
    __ZNSt13exception_ptrD1Ev(auStack_38);
    __ZNSt13runtime_errorD2Ev(appuStack_158);
    if ((long)puStack_160 < 0) {
      __ZdlPv(puStack_170);
    }
    if (lStack_178 < 0) {
      __ZdlPv(puStack_188);
    }
  }
  return;
}



/* Entry: 10a701b50; end: 10a701b77;  */

long FUN_10a701b50(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a707f3c(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a701b78; end: 10a701b9f;  */

void FUN_10a701b78(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c133a8;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10a701ba0; end: 10a701baf;  */

void FUN_10a701ba0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x18))();
    func_0x00010a084504(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a701bb0; end: 10a701bf3;  */

void FUN_10a701bb0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x18))();
    func_0x00010a084504(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a701bf4; end: 10a701c0b;  */

void FUN_10a701bf4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a701c0c; end: 10a701caf;  */

void FUN_10a701c0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110c78c90;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10a701cb0; end: 10a701ec3;  */

void FUN_10a701cb0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    uVar10 = param_2[1];
    uVar9 = *param_2;
    uVar11 = param_2[2];
    uVar13 = param_2[5];
    uVar12 = param_2[4];
    puVar7[3] = param_2[3];
    puVar7[2] = uVar11;
    puVar7[5] = uVar13;
    puVar7[4] = uVar12;
    puVar7[1] = uVar10;
    *puVar7 = uVar9;
    uVar10 = param_2[7];
    uVar9 = param_2[6];
    uVar12 = param_2[9];
    uVar11 = param_2[8];
    uVar14 = param_2[0xb];
    uVar13 = param_2[10];
    puVar7[0xc] = param_2[0xc];
    puVar7[9] = uVar12;
    puVar7[8] = uVar11;
    puVar7[0xb] = uVar14;
    puVar7[10] = uVar13;
    puVar7[7] = uVar10;
    puVar7[6] = uVar9;
    puVar7 = puVar7 + 0xd;
  }
  else {
    lVar6 = (long)puVar7 - *param_1;
    uVar3 = (lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
    if (0x276276276276276 < uVar3) {
      FUN_10a18d150();
      lVar6 = *param_1;
      if (lVar6 != 0) {
        lVar8 = param_1[1];
        lVar4 = lVar6;
        if (lVar8 != lVar6) {
          do {
            if (*(long *)(lVar8 + -8) != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            lVar8 = lVar8 + -0x10;
          } while (lVar8 != lVar6);
          lVar4 = *param_1;
        }
        param_1[1] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar4);
        return;
      }
      return;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar4 * -0x6276276276276276;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar4 * 0x4ec4ec4ec4ec4ec5)) {
      uVar5 = 0x276276276276276;
    }
    plVar2 = param_1;
    FUN_10a18d164();
    puVar1 = (undefined8 *)((long)plVar2 + lVar6);
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    uVar10 = param_2[5];
    uVar9 = param_2[4];
    uVar13 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar13;
    puVar1[3] = uVar12;
    puVar1[2] = uVar11;
    puVar1[5] = uVar10;
    puVar1[4] = uVar9;
    uVar12 = param_2[9];
    uVar11 = param_2[8];
    uVar10 = param_2[0xb];
    uVar9 = param_2[10];
    uVar14 = param_2[7];
    uVar13 = param_2[6];
    puVar1[0xc] = param_2[0xc];
    puVar1[9] = uVar12;
    puVar1[8] = uVar11;
    puVar1[0xb] = uVar10;
    puVar1[10] = uVar9;
    puVar1[7] = uVar14;
    puVar1[6] = uVar13;
    puVar7 = puVar1 + 0xd;
    lVar4 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar4);
    lVar6 = *param_1;
    *param_1 = lVar4;
    param_1[1] = (long)puVar7;
    param_1[2] = (long)(plVar2 + uVar5 * 0xd);
    if (lVar6 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar7;
  return;
}



/* Entry: 10a701ec4; end: 10a701f2f;  */

long FUN_10a701ec4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
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



/* Entry: 10a701f30; end: 10a70202b;  */

/* WARNING: Possible PIC construction at 0x00010a70200c: Changing call to branch */

undefined1  [16] FUN_10a701f30(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 **ppuVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  ppuVar3 = (undefined8 **)auStack_60;
  ppuVar11 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)param_1[2]) {
    uVar12 = *param_2;
    puVar6[1] = param_2[1];
    *puVar6 = uVar12;
    *param_2 = 0;
    param_2[1] = 0;
    uVar12 = param_2[2];
    puVar6[3] = param_2[3];
    puVar6[2] = uVar12;
    param_2[2] = 0;
    param_2[3] = 0;
    param_1[1] = (long)(puVar6 + 4);
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  lVar10 = (long)puVar6 - *param_1;
  uVar1 = (lVar10 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 4;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar8) {
      uVar9 = 0x7ffffffffffffff;
    }
    puVar5 = param_2;
    plStack_38 = param_1;
    FUN_10a702040();
    puVar2 = (undefined8 *)(uVar9 + lVar10);
    uVar12 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar12;
    *param_2 = 0;
    param_2[1] = 0;
    uVar12 = param_2[2];
    puVar2[3] = param_2[3];
    puVar2[2] = uVar12;
    param_2[2] = 0;
    param_2[3] = 0;
    puVar6 = (undefined8 *)*param_1;
    param_2 = (undefined8 *)((long)puVar2 - (param_1[1] - (long)puVar6));
    _memcpy(param_2);
    lStack_48 = *param_1;
    *param_1 = (long)param_2;
    param_1[1] = (long)(puVar2 + 4);
    lStack_40 = param_1[2];
    param_1[2] = uVar9 + (long)puVar5 * 0x20;
    lStack_58 = lStack_48;
    lStack_50 = lStack_48;
    plVar4 = &lStack_58;
    uVar12 = 0x10a702010;
  }
  else {
    puVar6 = param_2;
    FUN_10a70202c();
    pcStack_68 = FUN_10a70202c;
    plVar4 = (long *)&DAT_10f62a4d8;
    ppuStack_70 = ppuVar11;
    FUN_109ffde64();
    ppuVar3 = &puStack_90;
    pcStack_78 = FUN_10a702040;
    ppuVar11 = &puStack_80;
    puStack_90 = param_2;
    plStack_88 = param_1;
    if ((ulong)plVar4 >> 0x3b == 0) {
      lVar10 = (long)plVar4 << 5;
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm(lVar10);
      auVar14._8_8_ = plVar4;
      auVar14._0_8_ = lVar10;
      return auVar14;
    }
    uVar12 = 0x10a702074;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000109ffded8();
  }
  *(undefined8 **)((long)ppuVar3 + -0x20) = param_2;
  *(long **)((long)ppuVar3 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar11;
  *(undefined8 *)((long)ppuVar3 + -8) = uVar12;
  lVar10 = plVar4[1];
  lVar7 = plVar4[2];
  while (lVar7 != lVar10) {
    plVar4[2] = lVar7 + -0x20;
    FUN_10a701ec4();
    lVar7 = plVar4[2];
  }
  if (*plVar4 != 0) {
    __ZdlPv();
  }
  auVar15._8_8_ = puVar6;
  auVar15._0_8_ = plVar4;
  return auVar15;
}



/* Entry: 10a70202c; end: 10a70203f;  */

undefined1  [16] FUN_10a70202c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3b == 0) {
    lVar2 = (long)plVar1 << 5;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x20;
    FUN_10a701ec4();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a702040; end: 10a702117;  */

undefined1  [16] FUN_10a702040(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3b == 0) {
    lVar1 = (long)param_1 << 5;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    FUN_10a701ec4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a702118; end: 10a70212b;  */

byte FUN_10a702118(undefined8 param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  puVar3 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lStack_48 = 0;
  FUN_109d18960(param_2 + 0x10,*puVar3,&lStack_48);
  if (lStack_48 == 0) {
    bVar1 = *(byte *)(puVar3 + 1);
    if ((bVar1 & 1) == 0) {
      puStack_50 = (undefined8 *)*puVar3;
      uStack_60 = 0;
      lStack_58 = param_2;
      (**(code **)*puStack_50)(puStack_50,&uStack_60);
    }
    __ZNSt13exception_ptrD1Ev(&lStack_48);
    return bVar1 ^ 1;
  }
  func_0x0001092af97c(&lStack_48);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7021b4);
  (*pcVar2)();
}



/* Entry: 10a70212c; end: 10a7021c7;  */

byte FUN_10a70212c(undefined8 *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = 0;
  FUN_109d18960(param_2 + 0x10,*param_1,&lStack_38);
  if (lStack_38 == 0) {
    bVar1 = *(byte *)(param_1 + 1);
    if ((bVar1 & 1) == 0) {
      puStack_40 = (undefined8 *)*param_1;
      uStack_50 = 0;
      lStack_48 = param_2;
      (**(code **)*puStack_40)(puStack_40,&uStack_50);
    }
    __ZNSt13exception_ptrD1Ev(&lStack_38);
    return bVar1 ^ 1;
  }
  func_0x0001092af97c(&lStack_38);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7021b4);
  (*pcVar2)();
}



/* Entry: 10a7021c8; end: 10a702207;  */

void FUN_10a7021c8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a702964(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a702208; end: 10a7026e7;  */

void FUN_10a702208(long *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  
  puVar8 = (undefined8 *)0x80;
  __Znwm();
  *puVar8 = FUN_10a7347ac;
  puVar8[1] = FUN_10a734bac;
  puVar1 = puVar8 + 9;
  puVar8[0xe] = param_2;
  FUN_10a7026e8(puVar8 + 2);
  lVar10 = puVar8[7];
  if (lVar10 != 0) {
    plVar9 = (long *)(lVar10 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *param_1 = lVar10;
  lVar10 = *(long *)(param_2 + 0x10);
  puVar8[0xc] = lVar10;
  plVar9 = (long *)(lVar10 + 8);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar6) {
      *plVar9 = *plVar9 + 4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (((uint)*(undefined8 *)(puVar8[0xc] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar8 + 0xf) = 0;
    lVar10 = puVar8[0xc];
    plVar9 = (long *)(lVar10 + 0x10);
    uVar11 = puVar8[3];
    do {
      lVar13 = *plVar9;
      if (lVar13 == 0) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          puStack_70 = (undefined8 *)0x0;
          puStack_68 = puVar8;
          lStack_60 = uVar11;
          func_0x000109d1b588(lVar10 + 0x18,&puStack_70);
          *(undefined8 *)(lVar10 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar13 >> 1 & 1) == 0);
  }
  lVar10 = puVar8[0xc];
  if (((uint)*(undefined8 *)(puVar8[0xc] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar10 + 0xb0) & 1) != 0) {
      *puVar1 = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      FUN_10a702a80(puVar1,*(long *)(lVar10 + 0x98),*(long *)(lVar10 + 0xa0),
                    (*(long *)(lVar10 + 0xa0) - *(long *)(lVar10 + 0x98) >> 3) * -0x3333333333333333
                   );
      plVar9 = (long *)puVar8[0xc];
      if (plVar9 != (long *)0x0) {
        puVar2 = (ulong *)(plVar9 + 1);
        do {
          uVar12 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar12 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar12 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      lVar13 = puVar8[0xe];
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      lVar10 = *(long *)(lVar13 + 0x20);
      if (lVar10 != 0) {
        __ZNSt3__119__shared_weak_count4lockEv();
        puVar8[0xd] = lVar10;
        if ((lVar10 != 0) && (lVar10 = *(long *)(lVar13 + 0x18), puVar8[0xc] = lVar10, lVar10 != 0))
        {
          puVar14 = (undefined8 *)puVar8[9];
          puVar4 = (undefined8 *)puVar8[10];
          if (puVar14 != puVar4) {
            lVar10 = puVar8[0xe];
            do {
              lVar13 = *(long *)(*(long *)(lVar10 + 0x28) + 8);
              FUN_10a702c98(lVar13,puVar14);
              if (lVar13 == 0) {
                uVar11 = *(undefined8 *)(lVar10 + 0x28);
                uStack_90 = 0;
                plStack_88 = (long *)0x0;
                (**(code **)(**(long **)(puVar8[0xc] + 0x90) + 0x18))
                          (&uStack_80,*(long **)(puVar8[0xc] + 0x90),&uStack_90,puVar14[3]);
                if (*(char *)((long)puVar14 + 0x17) < '\0') {
                  func_0x000107c3192c(&puStack_70,*puVar14,puVar14[1]);
                }
                else {
                  puStack_68 = (undefined8 *)puVar14[1];
                  puStack_70 = (undefined8 *)*puVar14;
                  lStack_60 = puVar14[2];
                }
                plStack_50 = plStack_78;
                uStack_58 = uStack_80;
                uStack_80 = 0;
                plStack_78 = (long *)0x0;
                FUN_10a702cfc(uVar11,&puStack_70,&puStack_70);
                plVar9 = plStack_50;
                if (plStack_50 != (long *)0x0) {
                  plVar3 = plStack_50 + 1;
                  do {
                    lVar13 = *plVar3;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar6) {
                      *plVar3 = lVar13 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar13 == 0) {
                    (**(code **)(*plStack_50 + 0x10))(plStack_50);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
                  }
                }
                if (lStack_60 < 0) {
                  __ZdlPv(puStack_70);
                }
                plVar9 = plStack_78;
                if (plStack_78 != (long *)0x0) {
                  plVar3 = plStack_78 + 1;
                  do {
                    lVar13 = *plVar3;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar6) {
                      *plVar3 = lVar13 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar13 == 0) {
                    (**(code **)(*plStack_78 + 0x10))(plStack_78);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
                  }
                }
                plVar9 = plStack_88;
                if (plStack_88 != (long *)0x0) {
                  plVar3 = plStack_88 + 1;
                  do {
                    lVar13 = *plVar3;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar6) {
                      *plVar3 = lVar13 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar13 == 0) {
                    (**(code **)(*plStack_88 + 0x10))(plStack_88);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
                  }
                }
              }
              puVar14 = puVar14 + 5;
            } while (puVar14 != puVar4);
          }
          FUN_10a7021c8(puVar8 + 2,puVar1);
          plVar9 = (long *)puVar8[0xd];
          if (plVar9 != (long *)0x0) {
            plVar3 = plVar9 + 1;
            do {
              lVar10 = *plVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *plVar3 = lVar10 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
          puStack_70 = puVar1;
          FUN_10a702860(&puStack_70);
          func_0x000109d1a1d0(puVar8 + 2);
          __ZdlPv(puVar8);
          return;
        }
      }
      FUN_10a00946c(&UNK_10f6711e3);
    }
  }
  else {
    func_0x0001092af97c(lVar10 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a702530);
  (*pcVar7)();
}



/* Entry: 10a7026e8; end: 10a702787;  */

undefined8 * FUN_10a7026e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
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
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110c14a98;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10a702788; end: 10a70285f;  */

undefined8 * FUN_10a702788(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c14a98;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    puStack_28 = param_1 + 0x13;
    FUN_10a702860(&puStack_28);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a702860; end: 10a7028cf;  */

void FUN_10a702860(long *param_1)

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
        FUN_10a7028d0(lVar2);
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



/* Entry: 10a7028d0; end: 10a702963;  */

void FUN_10a7028d0(undefined8 *param_1)

{
  func_0x00010a70290c(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a702964; end: 10a7029db;  */

undefined1 FUN_10a702964(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_10a7029dc(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a7029dc; end: 10a702a7f;  */

undefined8 * FUN_10a7029dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puStack_28;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    puStack_28 = param_1;
    FUN_10a702860(&puStack_28);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



/* Entry: 10a702a80; end: 10a702b03;  */

void FUN_10a702a80(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a702b04(param_1,param_4);
    lVar1 = param_1;
    FUN_10a702ba4(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a702b04; end: 10a702b4b;  */

undefined1  [16] FUN_10a702b04(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x666666666666667) {
    plVar1 = param_1;
    FUN_10a702b60();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 5);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a702b4c();
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
    FUN_10a702c28(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a702b4c; end: 10a702b5f;  */

undefined1  [16] FUN_10a702b4c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

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
    FUN_10a702c28(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}


