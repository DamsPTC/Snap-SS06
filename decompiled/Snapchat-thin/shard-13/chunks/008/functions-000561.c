/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10adcab94; end: 10adcac3f;  */

undefined8 * FUN_10adcab94(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c74f88;
  param_1[0x19] = &PTR_FUN_110c74fd8;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10adcac40; end: 10adcace3;  */

void FUN_10adcac40(long param_1)

{
  if (*(char *)(param_1 + 0x164) == '\x01') {
    *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
  }
  return;
}



/* Entry: 10adcace4; end: 10adcae53;  */

/* WARNING: Removing unreachable block (ram,0x00010adcadcc) */
/* WARNING: Removing unreachable block (ram,0x00010adcadd0) */
/* WARNING: Removing unreachable block (ram,0x00010adcadd8) */
/* WARNING: Removing unreachable block (ram,0x00010adcade0) */
/* WARNING: Removing unreachable block (ram,0x00010adcadec) */
/* WARNING: Removing unreachable block (ram,0x00010adcadf4) */
/* WARNING: Removing unreachable block (ram,0x00010adcadfc) */
/* WARNING: Removing unreachable block (ram,0x00010adcae00) */

void FUN_10adcace4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puStack_48;
  
  lVar6 = *(long *)(param_2 + 0x70);
  puVar4 = (undefined8 *)0xa0;
  __Znwm();
  puVar4[2] = 0;
  puVar4[1] = 0x200000006;
  puVar5 = puVar4 + 3;
  *(undefined2 *)puVar5 = 4;
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
  puVar4[0x11] = puVar5;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar4 + 0x13) = 0;
  puStack_48 = puVar4;
  FUN_10adbdd38(param_2 + 0x160,param_2,lVar6 + 0x10,lVar6 + 0x1c);
  plVar1 = puVar4 + 2;
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
        FUN_109d1b4dc(puVar5);
        goto LAB_10adcadac;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10adcadac:
      *param_1 = puVar4;
      func_0x0001092b4274(&puStack_48,puVar4);
      return;
    }
  } while( true );
}



/* Entry: 10adcae54; end: 10adcaf13;  */

void FUN_10adcae54(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110c75018;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    lVar4 = lVar1 >> 1;
    if (lVar4 < 0) {
      FUN_10adcb1d0();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10adcaef0);
      (*pcVar2)();
    }
    FUN_10adcb1e4();
    puVar3[1] = lVar4;
    puVar3[3] = lVar4 + param_3 * 2;
    _memmove();
    puVar3[2] = lVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10adcaf14; end: 10adcafcf;  */

void FUN_10adcaf14(long param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  ulong uVar2;
  undefined2 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined2 *puVar7;
  
  puVar1 = *(undefined2 **)(param_1 + 0x48);
  if (puVar1 < *(undefined2 **)(param_1 + 0x50)) {
    puVar7 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    lVar6 = (long)puVar1 - *(long *)(param_1 + 0x40);
    lVar5 = lVar6 >> 1;
    if (lVar5 < -1) {
      FUN_10adcb1d0();
      lVar5 = *(long *)(param_1 + 0x48);
      if ((long)(int)param_2 + 1 != lVar5 - *(long *)(param_1 + 0x40) >> 1) {
        *(undefined2 *)(*(long *)(param_1 + 0x40) + (long)(int)param_2 * 2) =
             *(undefined2 *)(lVar5 + -2);
        lVar5 = *(long *)(param_1 + 0x48);
      }
      *(long *)(param_1 + 0x48) = lVar5 + -2;
      return;
    }
    uVar4 = (long)*(undefined2 **)(param_1 + 0x50) - *(long *)(param_1 + 0x40);
    uVar2 = uVar4;
    if (uVar4 <= lVar5 + 1U) {
      uVar2 = lVar5 + 1;
    }
    if (0x7ffffffffffffffd < uVar4) {
      uVar2 = 0x7fffffffffffffff;
    }
    puVar3 = param_2;
    FUN_10adcb1e4();
    puVar1 = (undefined2 *)(uVar2 + lVar6);
    puVar7 = puVar1 + 1;
    *puVar1 = *param_2;
    lVar6 = (long)puVar1 - (*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40));
    _memcpy(lVar6);
    lVar5 = *(long *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar6;
    *(undefined2 **)(param_1 + 0x48) = puVar7;
    *(ulong *)(param_1 + 0x50) = uVar2 + (long)puVar3 * 2;
    if (lVar5 != 0) {
      __ZdlPv();
    }
  }
  *(undefined2 **)(param_1 + 0x48) = puVar7;
  return;
}



/* Entry: 10adcafd0; end: 10adcafff;  */

void FUN_10adcafd0(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if ((long)param_2 + 1 != lVar1 - *(long *)(param_1 + 0x40) >> 1) {
    *(undefined2 *)(*(long *)(param_1 + 0x40) + (long)param_2 * 2) = *(undefined2 *)(lVar1 + -2);
    lVar1 = *(long *)(param_1 + 0x48);
  }
  *(long *)(param_1 + 0x48) = lVar1 + -2;
  return;
}



/* Entry: 10adcb000; end: 10adcb077;  */

undefined8 * FUN_10adcb000(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75018;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10adcb078; end: 10adcb1cf;  */

void FUN_10adcb078(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001098bb7cc(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 1);
  lVar2 = lStack_98 - lStack_a0;
  if (lVar2 != 0) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      plVar1 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e50d082,0x26,*(long *)(param_1 + 8) + lVar4,2,1);
      *(int *)(lStack_a0 + lVar5 * 4) = (int)plVar1;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 2;
    } while (lVar2 >> 2 != lVar5);
  }
  pcStack_88 = FUN_10adcb214;
  appuStack_80[0] = &PTR_DAT_110c75048;
  func_0x0001098bb6d0(*param_2 + 0x18,&pcStack_88,&lStack_a0);
  (*(code *)*appuStack_80[0])(appuStack_80);
  lVar2 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  puVar3 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (-1 < (long)puVar3) {
    __Znwm((long)puVar3 << 1);
    return;
  }
  func_0x000104c4f740();
  return;
}



/* Entry: 10adcb1d0; end: 10adcb1e3;  */

void FUN_10adcb1d0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (-1 < (long)puVar1) {
    __Znwm((long)puVar1 << 1);
    return;
  }
  func_0x000104c4f740();
  return;
}



/* Entry: 10adcb1e4; end: 10adcb213;  */

void FUN_10adcb1e4(long param_1)

{
  if (-1 < param_1) {
    __Znwm(param_1 << 1);
    return;
  }
  func_0x000104c4f740();
  return;
}



/* Entry: 10adcb214; end: 10adcb26b;  */

void FUN_10adcb214(void)

{
  return;
}



/* Entry: 10adcb26c; end: 10adcb2d7;  */

void FUN_10adcb26c(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined4 uStack_14;
  
  if ((*(ushort *)(param_3 + 0x1c) & (*(ushort *)(param_2 + 0x1c) ^ 0xffff) & 1) == 0) {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_14 = *(undefined4 *)(param_2 + lVar1);
  }
  else {
    uStack_14 = 0x40000000;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x0001098afc14(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
  return;
}



/* Entry: 10adcb2d8; end: 10adcb34b;  */

void FUN_10adcb2d8(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110c75090;
  param_1[1] = &UNK_110c75060;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x1e) = 0;
  return;
}



/* Entry: 10adcb34c; end: 10adcb3f3;  */

undefined8 * FUN_10adcb34c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75100;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  func_0x0001098ae07c(param_1 + 3);
  return param_1;
}



/* Entry: 10adcb3f4; end: 10adcb63b;  */

/* WARNING: Removing unreachable block (ram,0x00010adcb5d0) */
/* WARNING: Removing unreachable block (ram,0x00010adcb5d4) */
/* WARNING: Removing unreachable block (ram,0x00010adcb5dc) */
/* WARNING: Removing unreachable block (ram,0x00010adcb5e4) */
/* WARNING: Removing unreachable block (ram,0x00010adcb5e8) */

void FUN_10adcb3f4(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1c8;
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
  *puVar5 = &PTR_FUN_110c75140;
  func_0x0001098bae4c(puVar5,&UNK_10e514ebf,0x18,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x2f,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110c75140;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110be9df0;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110c751b0;
  puVar5[0x25] = &UNK_110c75180;
  *(undefined2 *)((long)puVar5 + 0x13c) = 0;
  puVar5[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2b) = 0x40000000;
  puVar5[0x28] = &PTR_FUN_110c751b0;
  puVar5[0x29] = &UNK_110c75180;
  *(undefined2 *)((long)puVar5 + 0x15c) = 0;
  *(undefined1 *)(puVar5 + 0x2c) = 0;
  *(undefined1 *)(puVar5 + 0x2e) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x30) = 0;
  puVar5[0x33] = 0x10adcb9d8;
  puVar5[0x34] = &UNK_110be9e78;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x2f] = &PTR_DAT_110c751f0;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x38] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    puVar5[0x2c] = 0;
    puVar5[0x2d] = 0;
    *(undefined1 *)(puVar5 + 0x2e) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10adcb63c; end: 10adcb6f7;  */

undefined8 * FUN_10adcb63c(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c75140;
  FUN_10adcb9f4(param_1 + 0x2c);
  param_1[0x19] = &PTR_FUN_110be9df0;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10adcb6f8; end: 10adcb76b;  */

void FUN_10adcb6f8(void)

{
  return;
}



/* Entry: 10adcb76c; end: 10adcb8db;  */

/* WARNING: Removing unreachable block (ram,0x00010adcb854) */
/* WARNING: Removing unreachable block (ram,0x00010adcb858) */
/* WARNING: Removing unreachable block (ram,0x00010adcb860) */
/* WARNING: Removing unreachable block (ram,0x00010adcb868) */
/* WARNING: Removing unreachable block (ram,0x00010adcb874) */
/* WARNING: Removing unreachable block (ram,0x00010adcb87c) */
/* WARNING: Removing unreachable block (ram,0x00010adcb884) */
/* WARNING: Removing unreachable block (ram,0x00010adcb888) */

void FUN_10adcb76c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puStack_48;
  
  lVar6 = *(long *)(param_2 + 0x70);
  puVar4 = (undefined8 *)0xa0;
  __Znwm();
  puVar5 = puVar4 + 3;
  *(undefined2 *)puVar5 = 4;
  puVar4[2] = 0;
  puVar4[1] = 0x200000006;
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
  puVar4[0x11] = puVar5;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar4 + 0x13) = 0;
  puStack_48 = puVar4;
  FUN_10adbd9c4(param_2 + 0x160,param_2,lVar6 + 0x10,*(undefined1 *)(lVar6 + 0x1c));
  plVar1 = puVar4 + 2;
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
        FUN_109d1b4dc(puVar5);
        goto LAB_10adcb834;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10adcb834:
      *param_1 = puVar4;
      func_0x0001092b4274(&puStack_48,puVar4);
      return;
    }
  } while( true );
}



/* Entry: 10adcb8dc; end: 10adcb913;  */

void FUN_10adcb8dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar1;
  *param_2 = &PTR_FUN_110c751b0;
  *(undefined2 *)((long)param_2 + 0x1c) = *(undefined2 *)(param_1 + 0x1c);
  return;
}



/* Entry: 10adcb914; end: 10adcb983;  */

void FUN_10adcb914(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined4 uStack_14;
  
  if ((*(byte *)(param_3 + 0x1c) & (*(byte *)(param_2 + 0x1c) ^ 0xff)) == 0) {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_14 = *(undefined4 *)(param_2 + lVar1);
  }
  else {
    uStack_14 = 0x40000000;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x0001098afc14(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
  return;
}



/* Entry: 10adcb984; end: 10adcb9f3;  */

void FUN_10adcb984(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110c751b0;
  param_1[1] = &UNK_110c75180;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10adcb9f4; end: 10adcba2f;  */

undefined8 * FUN_10adcb9f4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 2) == '\x01') {
    _objc_release(param_1[1]);
    _objc_release(*param_1);
  }
  return param_1;
}



/* Entry: 10adcba30; end: 10adcbbaf; -[LSATrackingComponentListenerAnnouncer description] */

void FUN_10adcba30(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plStack_60;
  long *plStack_58;
  
  FUN_10adcbbb0(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar6 = *plStack_60;
  if (plStack_60[1] != lVar6) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      lVar6 = lVar6 + lVar7;
      _objc_loadWeakRetained();
      func_0x00010bf06ba0(puVar4);
      _objc_release(lVar6);
      lVar6 = *plStack_60;
      uVar5 = plStack_60[1] - lVar6 >> 3;
      if (uVar8 != uVar5 - 1) {
        func_0x00010bf070e0(puVar4);
        lVar6 = *plStack_60;
        uVar5 = plStack_60[1] - lVar6 >> 3;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar8 < uVar5);
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10adcbbb0; end: 10adcbc0f;  */

void FUN_10adcbbb0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 10adcbc10; end: 10adcbeab; -[LSATrackingComponentListenerAnnouncer addListener:] */

void FUN_10adcbc10(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar10 = plVar3 + 1;
  *plVar10 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110c75220;
  plVar8 = plVar3 + 3;
  *plVar8 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar7 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar7;
  plStack_70 = plVar8;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_10adcbeac(plVar8,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar8;
    plStack_98 = plVar3;
    FUN_10adcbfec(puVar7,&plStack_a0);
    if (plStack_98 == (long *)0x0) goto LAB_10adcbdd8;
    plVar3 = plStack_98 + 1;
    do {
      lVar9 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_98;
    } while (cVar1 != '\0');
  }
  else {
    lVar5 = *plVar6;
    lVar11 = plVar6[1];
    lVar9 = lVar5;
    if (lVar5 != lVar11) {
      do {
        lVar4 = lVar9;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar9;
        if (lVar4 == param_3) break;
        lVar9 = lVar9 + 8;
        lVar5 = lVar11;
      } while (lVar9 != lVar11);
      plVar6 = (long *)*puVar7;
      lVar11 = plVar6[1];
    }
    if (lVar5 != lVar11) goto LAB_10adcbdd8;
    for (lVar9 = *plVar6; lVar9 != lVar11; lVar9 = lVar9 + 8) {
      lVar5 = lVar9;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10adcbeac(plVar8,lVar9);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10adcbeac(plVar8,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar8;
    plStack_80 = plVar3;
    FUN_10adcbfec(puVar7,&plStack_88);
    if (plStack_80 == (long *)0x0) goto LAB_10adcbdd8;
    plVar3 = plStack_80 + 1;
    do {
      lVar9 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_80;
    } while (cVar1 != '\0');
  }
  if (lVar9 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10adcbdd8:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return;
}



/* Entry: 10adcbeac; end: 10adcbfeb;  */

void FUN_10adcbeac(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_10adcc4f4();
LAB_10adcbfe8:
      func_0x000104c4f740();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_1;
      *param_1 = *param_2;
      *param_2 = lVar9;
      lVar9 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10adcbfe8;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar10 = lVar8;
    lVar11 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar11,lVar10);
        lVar10 = lVar10 + 8;
        lVar11 = lVar11 + 8;
      } while (lVar10 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10adcbfec; end: 10adcc043;  */

void FUN_10adcbfec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10adcc044; end: 10adcc273; -[LSATrackingComponentListenerAnnouncer removeListener:] */

void FUN_10adcc044(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_10adcc1f8;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10adcc0ac;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10adcbfec(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10adcc1f8;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_10adcc0ac:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110c75220;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_10adcbeac(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_10adcbfec(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10adcc1f8;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10adcc1f8:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adcc274; end: 10adcc39b; -[LSATrackingComponentListenerAnnouncer trackingComponent:didRecognizeExpression:] */

void FUN_10adcc274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_10adcbbb0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c278d60(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adcc39c; end: 10adcc4ab; -[LSATrackingComponentListenerAnnouncer trackingComponent:didRecognizeFaces:] */

void FUN_10adcc39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10adcbbb0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c278d80(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adcc4ac; end: 10adcc4d3; -[LSATrackingComponentListenerAnnouncer .cxx_destruct] */

void FUN_10adcc4ac(long param_1)

{
  FUN_10adcc508(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10adcc4d4; end: 10adcc4f3; -[LSATrackingComponentListenerAnnouncer .cxx_construct] */

void FUN_10adcc4d4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 10adcc4f4; end: 10adcc507;  */

undefined * FUN_10adcc4f4(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 10adcc508; end: 10adcc55f;  */

long FUN_10adcc508(long param_1)

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



/* Entry: 10adcc560; end: 10adcc56f;  */

void FUN_10adcc560(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75220;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10adcc570; end: 10adcc58f;  */

void FUN_10adcc570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75220;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adcc590; end: 10adcc5f7;  */

void FUN_10adcc590(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10adcc5f8; end: 10adcc5fb;  */

void FUN_10adcc5f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adcc5fc; end: 10adcc693; -[LSATrackingSerializationComponent setShouldSerializeTrackingData:] */

void FUN_10adcc5fc(undefined8 param_1)

{
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 10adcc694; end: 10adcc6b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcc694(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127845ac) + 8) + 8) =
       *(undefined1 *)(param_1 + 0x28);
  return;
}



/* Entry: 10adcc6b4; end: 10adcc78b; -[LSATrackingSerializationComponent resetAndWriteTrackingData:] */

void FUN_10adcc6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10adcc78c;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10adcc78c; end: 10adcc807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcc78c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127845ac);
  _objc_retainAutorelease(uVar1);
  func_0x00010bdc3520();
  func_0x000107c31940(auStack_38,uVar1);
  FUN_10a4ef160(uVar2,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10adcc808; end: 10adcc8df; -[LSATrackingSerializationComponent setRecordedTrackingDataWithPath:] */

void FUN_10adcc808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10adcc8e0;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10adcc8e0; end: 10adcca3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcc8e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retainAutorelease(uVar4);
  func_0x00010bdc3520();
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110c752a0;
  func_0x000107c31940(auStack_58,uVar4);
  FUN_10a4eb4d0(puVar5 + 3,auStack_58,0);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  lVar8 = (long)_DAT_1127845b0;
  plVar1 = (long *)(*(long *)(param_1 + 0x20) + lVar8);
  plVar7 = (long *)plVar1[1];
  *plVar1 = (long)(puVar5 + 3);
  plVar1[1] = (long)puVar5;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  lVar8 = *(long *)(param_1 + 0x20) + lVar8;
  lVar6 = *(long *)(lVar8 + 8);
  lVar8 = *(long *)(lVar8 + 8);
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010bdc8d60();
  if (lVar8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10adcca40; end: 10adccac7; -[LSATrackingSerializationComponent clearRecordedTrackingData] */

void FUN_10adcca40(undefined8 param_1)

{
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 10adccac8; end: 10adccb33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adccac8(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127845b0);
  plVar6 = (long *)puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10adccb34; end: 10adccc0b; -[LSATrackingSerializationComponent setRecordedMarkerTrackingDataWithPath:] */

void FUN_10adccb34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10adccc0c;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10adccc0c; end: 10adccd8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adccc0c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined7 uStack_48;
  char cStack_41;
  
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retainAutorelease(uVar5);
  func_0x00010bdc3520();
  puVar6 = (undefined8 *)0x38;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110c752f0;
  func_0x000107c31940(&uStack_58,uVar5);
  puVar6[3] = &PTR_DAT_110be88b0;
  if (cStack_41 < '\0') {
    func_0x000107c3192c(puVar6 + 4,uStack_58,uStack_50);
    if (cStack_41 < '\0') {
      __ZdlPv(uStack_58);
    }
  }
  else {
    puVar6[5] = uStack_50;
    puVar6[4] = uStack_58;
    puVar6[6] = CONCAT17(cStack_41,uStack_48);
  }
  lVar9 = (long)_DAT_1127845b4;
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar9);
  plVar8 = (long *)puVar2[1];
  *puVar2 = puVar6 + 3;
  puVar2[1] = puVar6;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  lVar9 = *(long *)(param_1 + 0x20) + lVar9;
  lVar7 = *(long *)(lVar9 + 8);
  lVar9 = *(long *)(lVar9 + 8);
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010bdc8d60();
  if (lVar9 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10adccd90; end: 10adcce17; -[LSATrackingSerializationComponent clearRecordedMarkerTrackingData] */

void FUN_10adccd90(undefined8 param_1)

{
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 10adcce18; end: 10adcce83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcce18(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127845b4);
  plVar6 = (long *)puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10adcce84; end: 10adccf23; -[LSATrackingSerializationComponent _addTrackingDataProvider:] */

void FUN_10adcce84(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc6000000;
  pcStack_40 = FUN_10adccf24;
  puStack_38 = &UNK_110c75260;
  lStack_28 = param_3[1];
  uStack_30 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010bf9b180(param_1,param_2,&puStack_50,0);
  if (lStack_28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10adccf24; end: 10adccf9f;  */

void FUN_10adccf24(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a52f264(*param_2 + 0x690,&uStack_30,&uStack_30);
  if (lStack_28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10adccfa0; end: 10adccfd7;  */

void FUN_10adccfa0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
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



/* Entry: 10adccfd8; end: 10adcd0b7; -[LSATrackingSerializationComponent initWithPerformer:announcerQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10adccfd8(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar5 = &uStack_40;
  puStack_38 = PTR_PTR_112701488;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithPerformer_announcerQueue_1125eac68);
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x30;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar7 = puVar6 + 3;
    *puVar6 = &PTR_DAT_110c75340;
    FUN_10a4ef00c();
    puVar2 = (undefined8 *)((long)puVar5 + (long)_DAT_1127845ac);
    plVar9 = (long *)puVar2[1];
    *puVar2 = puVar7;
    puVar2[1] = puVar6;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  return (undefined1 *)puVar5;
}



/* Entry: 10adcd0b8; end: 10adcd21f; -[LSATrackingSerializationComponent setCoreManager:announcer:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcd0b8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  plStack_48 = (long *)param_3[1];
  uStack_50 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puStack_58 = PTR_PTR_112701488;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_setCoreManager_announcer_configu_11263ea88,&uStack_50,param_4
                      ,param_5);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar6 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  param_3 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)(param_1 + _DAT_1127845ac);
  lStack_68 = puVar3[1];
  uStack_70 = *puVar3;
  if (puVar3[1] != 0) {
    plVar1 = (long *)(puVar3[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a224854(*param_3,&uStack_70);
  if (lStack_68 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10adcd220; end: 10adcd30f; -[LSATrackingSerializationComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcd220(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + _DAT_1127845b4 + 8);
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
  plVar5 = *(long **)(param_1 + _DAT_1127845b0 + 8);
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
  plVar5 = *(long **)(param_1 + _DAT_1127845ac + 8);
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
  return;
}



/* Entry: 10adcd310; end: 10adcd34f; -[LSATrackingSerializationComponent .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adcd310(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127845ac;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  lVar1 = (long)_DAT_1127845b0;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  lVar1 = (long)_DAT_1127845b4;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  return;
}



/* Entry: 10adcd350; end: 10adcd36f;  */

void FUN_10adcd350(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c752a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adcd370; end: 10adcd38f;  */

void FUN_10adcd370(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adcd378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10adcd390; end: 10adcd3af;  */

void FUN_10adcd390(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c752f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adcd3b0; end: 10adcd3cf;  */

void FUN_10adcd3b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adcd3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10adcd3d0; end: 10adcd3ef;  */

void FUN_10adcd3d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c75340;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adcd3f0; end: 10adcd3ff;  */

void FUN_10adcd3f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adcd3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10adcd400; end: 10adcd45f;  */

undefined8 * FUN_10adcd400(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_1 = &PTR_FUN_110c75390;
  param_1[1] = 0;
  _objc_release(uVar1);
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  func_0x000107c27bf0(param_1 + 6,param_1[7]);
  FUN_10adce5b8(param_1[4]);
  _objc_release(param_1[2]);
  _objc_release(param_1[1]);
  return param_1;
}



/* Entry: 10adcd460; end: 10adcd463;  */

undefined8 * FUN_10adcd460(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_1 = &PTR_FUN_110c75390;
  param_1[1] = 0;
  _objc_release(uVar1);
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  func_0x000107c27bf0(param_1 + 6,param_1[7]);
  FUN_10adce5b8(param_1[4]);
  _objc_release(param_1[2]);
  _objc_release(param_1[1]);
  return param_1;
}



/* Entry: 10adcd464; end: 10adcd477;  */

void FUN_10adcd464(void)

{
  FUN_10adcd400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adcd478; end: 10adcd4cb;  */

void FUN_10adcd478(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  __ZNSt3__15mutex4lockEv(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x48);
  return;
}



/* Entry: 10adcd4cc; end: 10adcd52f;  */

void FUN_10adcd4cc(long param_1,long param_2)

{
  _objc_retain(param_2);
  __ZNSt3__15mutex4lockEv(param_1 + 0x48);
  if (*(long *)(param_1 + 8) == param_2) {
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release();
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adcd530; end: 10adcd56b;  */

void FUN_10adcd530(long param_1)

{
  undefined8 uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10adcd56c; end: 10adcd65f;  */

void FUN_10adcd56c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_40;
  long *plStack_38;
  
  func_0x000107c2a6b0(param_2 + 6,*param_3,*param_3);
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)*param_2)(param_2,&uStack_40);
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
  param_3 = (undefined8 *)*param_3;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_3,param_3[1]);
  }
  else {
    uVar7 = param_3[1];
    uVar6 = *param_3;
    param_1[2] = param_3[2];
    param_1[1] = uVar7;
    *param_1 = uVar6;
  }
  return;
}



/* Entry: 10adcd660; end: 10adcd76f;  */

void FUN_10adcd660(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x18;
  FUN_10adce68c();
  if (param_1 + 0x20 != lVar1) {
    FUN_10adce708(param_1 + 0x18,lVar1);
    func_0x00010adce5f8(lVar1 + 0x20);
    __ZdlPv(lVar1);
  }
  func_0x000108974130(param_1 + 0x30,param_2);
  FUN_10adcd530();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  _objc_opt_respondsToSelector();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((uVar2 & 1) != 0) {
    func_0x00010bf68f00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c25d8e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2edc0(param_1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10adcd770; end: 10adcdd9f;  */

void FUN_10adcd770(ulong param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *plVar14;
  long lVar15;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  long *plStack_228;
  ulong uStack_220;
  undefined **ppuStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  ulong uStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [80];
  undefined8 *puStack_128;
  long *plStack_120;
  long lStack_118;
  undefined8 uStack_110;
  char cStack_f9;
  undefined1 auStack_f0 [88];
  undefined1 auStack_98 [40];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    lVar12 = *param_2;
    puStack_200 = (undefined *)(lVar12 + 0x98);
    if (*(char *)(lVar12 + 0xaf) < '\0') {
      puStack_200 = *(undefined **)puStack_200;
    }
    lStack_1f8 = lVar12 + 0x30;
    if (*(char *)(lVar12 + 0x47) < '\0') {
      lStack_1f8 = *(long *)lStack_1f8;
    }
    func_0x00010ae06f08(1,4,&UNK_10f6adcda,&UNK_10f6ade1b,0x6c,&UNK_10f6ade6f);
  }
  uVar6 = param_1;
  FUN_10adcd530();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = (undefined8 **)PTR_s_performRequest_completion__11261bd80;
  uStack_1e0 = uVar6;
  _objc_opt_respondsToSelector();
  ppuVar13 = (undefined **)*param_2;
  if ((uVar6 & 1) == 0) {
    if (ppuVar13[0x17][8] != '\x01') goto LAB_10adcdc20;
    func_0x000107c31940(&ppuStack_190,&UNK_10f6adeaf);
    FUN_10a3bf120(auStack_178);
    FUN_10a973e5c(&puStack_128,ppuVar13 + 6,0x1f7,&ppuStack_190,auStack_178,
                  *(undefined4 *)(*param_2 + 0xf0));
    ppuVar10 = (undefined8 **)(ppuVar13 + 0x16);
    (*(code *)ppuVar13[0x16])(&puStack_128);
    func_0x000104c4f944(auStack_98);
    FUN_10adce56c(auStack_f0);
    if (cStack_f9 < '\0') {
      __ZdlPv(uStack_110);
    }
    if (lStack_118 < 0) {
      __ZdlPv(puStack_128);
    }
    FUN_10adce56c(auStack_178);
  }
  else {
    if (*(char *)((long)ppuVar13 + 0x17) < '\0') {
      func_0x000107c3192c(&ppuStack_190,*ppuVar13,ppuVar13[1]);
    }
    else {
      puStack_188 = ppuVar13[1];
      ppuStack_190 = (undefined8 **)*ppuVar13;
      puStack_180 = ppuVar13[2];
    }
    unaff_x22 = PTR_PTR_1126d0870;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    lVar12 = *param_2 + 0x30;
    FUN_10addec90();
    _objc_retainAutoreleasedReturnValue();
    lStack_1f0 = lVar12;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = &ppuStack_190;
    puStack_1e8 = puVar4;
    FUN_10addec90(pppuVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = *param_2 + 0x18;
    FUN_10addec90(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = *param_2 + 0x98;
    FUN_10addec90(lVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = (ulong)*(uint *)(*param_2 + 0xf0);
    FUN_10a3beff4(uVar6);
    FUN_10addecfc();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *param_2 + 0xf8;
    FUN_10addeb4c(lVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puStack_1e8;
    puStack_200 = puVar8;
    func_0x00010c059e60();
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(lVar15);
    _objc_release(lVar12);
    _objc_release(pppuVar5);
    _objc_release(puVar4);
    _objc_release(lStack_1f0);
    puVar11 = *(undefined8 **)(param_1 + 0x20);
    unaff_x23 = (undefined8 *)(param_1 + 0x20);
    while (unaff_x24 = unaff_x23, puVar11 != (undefined8 *)0x0) {
      while( true ) {
        unaff_x24 = puVar11;
        pppuVar5 = &ppuStack_190;
        func_0x000107c2abd4(pppuVar5,unaff_x24 + 4);
        if (((uint)pppuVar5 >> 7 & 1) != 0) break;
        puVar11 = unaff_x24 + 4;
        func_0x000107c2abd4(puVar11,&ppuStack_190);
        if (((uint)puVar11 >> 7 & 1) == 0) {
          puVar11 = (undefined8 *)*unaff_x23;
          if (puVar11 == (undefined8 *)0x0) goto LAB_10adcdaa0;
          goto LAB_10adcdb20;
        }
        unaff_x23 = unaff_x24 + 1;
        puVar11 = (undefined8 *)*unaff_x23;
        if ((undefined8 *)*unaff_x23 == (undefined8 *)0x0) goto LAB_10adcdaa0;
      }
      unaff_x23 = unaff_x24;
      puVar11 = (undefined8 *)*unaff_x24;
    }
LAB_10adcdaa0:
    puVar11 = (undefined8 *)0x48;
    __Znwm();
    plVar14 = (long *)(param_1 + 0x18);
    lStack_118 = 0;
    puStack_128 = puVar11;
    plStack_120 = plVar14;
    if ((long)puStack_180 < 0) {
      func_0x000107c3192c(puVar11 + 4,ppuStack_190,puStack_188);
    }
    else {
      puVar11[5] = puStack_188;
      puVar11[4] = ppuStack_190;
      puVar11[6] = puStack_180;
    }
    puVar11[7] = 0;
    puVar11[8] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = unaff_x24;
    *unaff_x23 = puVar11;
    if (*(long *)*plVar14 != 0) {
      *plVar14 = *(long *)*plVar14;
      puVar11 = (undefined8 *)*unaff_x23;
    }
    func_0x000107c27d40(*(undefined8 *)(param_1 + 0x20),puVar11);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    puVar11 = puStack_128;
LAB_10adcdb20:
    lVar15 = param_2[1];
    lVar12 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    plVar14 = (long *)puVar11[8];
    puVar11[8] = lVar15;
    puVar11[7] = lVar12;
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 1;
      do {
        lVar12 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    _objc_initWeak(&puStack_128,*(undefined8 *)(param_1 + 0x10));
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc6000000;
    pcStack_1c8 = FUN_10adcdda0;
    puStack_1c0 = &UNK_110c753e8;
    ppuVar13 = &puStack_1d8;
    ppuVar10 = &puStack_128;
    uStack_1b0 = param_1;
    _objc_copyWeak(auStack_1b8);
    if ((long)puStack_180 < 0) {
      ppuVar10 = ppuStack_190;
      func_0x000107c3192c(&ppuStack_1a8,ppuStack_190,puStack_188);
    }
    else {
      puStack_1a0 = puStack_188;
      ppuStack_1a8 = ppuStack_190;
      puStack_198 = puStack_180;
    }
    func_0x00010c0f8d80(uStack_1e0);
    if ((long)puStack_198 < 0) {
      __ZdlPv(ppuStack_1a8);
    }
    _objc_destroyWeak(auStack_1b8);
    _objc_destroyWeak(&puStack_128);
    _objc_release(unaff_x22);
  }
  if ((long)puStack_180 < 0) {
    __ZdlPv(ppuStack_190);
  }
LAB_10adcdc20:
  uVar6 = uStack_1e0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_10adce75c(&puStack_128);
  _objc_release(unaff_x22);
  if ((long)puStack_180 < 0) {
    __ZdlPv(ppuStack_190);
  }
  _objc_release(uStack_1e0);
  uVar9 = uVar6;
  __Unwind_Resume();
  pcStack_208 = FUN_10adcdda0;
  puStack_240 = unaff_x24;
  puStack_238 = unaff_x23;
  puStack_230 = unaff_x22;
  plStack_228 = param_2;
  uStack_220 = uVar6;
  ppuStack_218 = ppuVar13;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar10);
  lVar12 = uVar9 + 0x20;
  _objc_loadWeakRetained(lVar12);
  puVar4 = PTR_PTR_1126db570;
  func_0x00010c28f320(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(uVar9 + 0x47) < '\0') {
    func_0x000107c3192c(&uStack_258,*(undefined8 *)(uVar9 + 0x30),*(undefined8 *)(uVar9 + 0x38));
  }
  else {
    uStack_250 = *(undefined8 *)(uVar9 + 0x38);
    uStack_258 = *(undefined8 *)(uVar9 + 0x30);
    lStack_248 = *(long *)(uVar9 + 0x40);
  }
  _objc_retain(ppuVar10);
  func_0x00010c0f9160(lVar12);
  _objc_release(puVar4);
  _objc_release(lVar12);
  _objc_release(ppuVar10);
  if (lStack_248 < 0) {
    __ZdlPv(uStack_258);
  }
  _objc_release(ppuVar10);
  return;
}



/* Entry: 10adcdda0; end: 10adcdf03;  */

void FUN_10adcdda0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126db570;
  func_0x00010c28f320(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x47) < '\0') {
    func_0x000107c3192c(&uStack_58,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  }
  else {
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    lStack_48 = *(long *)(param_1 + 0x40);
  }
  _objc_retain(param_2);
  func_0x00010c0f9160(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  if (lStack_48 < 0) {
    __ZdlPv(uStack_58);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10adcdf04; end: 10adce43f;  */

void FUN_10adcdf04(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  undefined ***pppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_240;
  ulong uStack_238;
  long lStack_230;
  long lStack_228;
  undefined4 uStack_220;
  long lStack_218;
  ulong uStack_210;
  long lStack_208;
  long lStack_200;
  undefined4 uStack_1f8;
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [56];
  undefined8 uStack_168;
  undefined **appuStack_160 [2];
  char cStack_149;
  undefined8 uStack_148;
  char cStack_131;
  undefined1 auStack_128 [88];
  undefined1 auStack_d0 [40];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long alStack_98 [7];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_1 + 0x30;
  lVar2 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar2);
  lVar11 = lVar4 + 0x18;
  lVar12 = lVar13;
  FUN_10adce68c();
  if (lVar4 + 0x20 == lVar11) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      lVar12 = 2;
      func_0x00010ae06f08(1,2,&UNK_10f6adcda,&UNK_10f6add81,0x48,&UNK_10f6adde8);
    }
  }
  else {
    lVar3 = *(long *)(lVar11 + 0x38);
    plVar5 = *(long **)(lVar11 + 0x40);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    lVar9 = lVar4 + 0x30;
    lStack_1c0 = lVar3;
    plStack_1b8 = plVar5;
    func_0x000107c280fc();
    lVar12 = lVar13;
    if (lVar4 + 0x38 == lVar9) {
      lVar12 = lVar11;
      FUN_10adce708(lVar4 + 0x18);
      func_0x00010adce5f8(lVar11 + 0x20);
      __ZdlPv(lVar11);
    }
    if (*(char *)(*(long *)(lVar3 + 0xb8) + 8) == '\x01') {
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      lStack_1c8 = 0;
      lVar13 = lVar2;
      func_0x00010c13b800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar13 != 0) {
        lVar13 = lVar2;
        func_0x00010c13b800(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar13;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        func_0x000107c2c4dc(&uStack_1d8,lVar11);
        _objc_release(lVar13);
      }
      lVar13 = lVar2;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar13 == 0) {
        lVar13 = 0;
        lVar11 = 0;
      }
      else {
        lVar11 = lVar2;
        func_0x00010bf63640(lVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        lVar13 = lVar11;
        func_0x00010bf25f00(lVar11);
        _objc_release(lVar11);
        lVar11 = lVar2;
        func_0x00010bf63640(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010c08fa60();
        _objc_release(lVar11);
        lVar11 = (long)(int)lVar12;
      }
      FUN_10a3bf408(&uStack_a8,lVar13,lVar11);
      uVar15 = *(undefined4 *)(lVar3 + 0xf0);
      lVar13 = lVar2;
      func_0x00010bf4dac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar13 != 0) {
        lVar13 = lVar2;
        func_0x00010bf4dac0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        FUN_10addec2c(auStack_1f0);
        appuStack_160[0] = &PTR_DAT_110bcfbe8;
        pppuVar10 = appuStack_160;
        FUN_10a3bf8c8(pppuVar10,auStack_1f0);
        if (pppuVar10 == (undefined ***)&UNK_110bcfc78) {
          uVar15 = 4;
        }
        else {
          uVar15 = *(undefined4 *)(pppuVar10 + 2);
        }
        if (cStack_1d9 < '\0') {
          __ZdlPv(auStack_1f0[0]);
        }
        _objc_release(lVar13);
      }
      lVar13 = lVar2;
      func_0x00010c0cc0c0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      FUN_10adde924(&lStack_218);
      _objc_release(lVar13);
      lVar13 = lVar2;
      func_0x00010c13b780(lVar2);
      uStack_1b0 = uStack_a8;
      uStack_a8 = 0;
      uStack_1a8 = uStack_a0;
      (**(code **)(alStack_98[0] + 0x10))(auStack_1a0,alStack_98);
      uStack_238 = uStack_210;
      lStack_240 = lStack_218;
      uStack_168 = uStack_60;
      lStack_218 = 0;
      uStack_210 = 0;
      lStack_230 = lStack_208;
      lStack_228 = lStack_200;
      uStack_220 = uStack_1f8;
      if (lStack_200 != 0) {
        uVar14 = *(ulong *)(lStack_208 + 8);
        if ((uStack_238 & uStack_238 - 1) == 0) {
          uVar14 = uVar14 & uStack_238 - 1;
        }
        else {
          uVar8 = 0;
          if (uStack_238 != 0) {
            uVar8 = uVar14 / uStack_238;
          }
          if (uStack_238 <= uVar14) {
            uVar14 = uVar14 - uVar8 * uStack_238;
          }
        }
        *(long **)(lStack_240 + uVar14 * 8) = &lStack_230;
        lStack_208 = 0;
        lStack_200 = 0;
      }
      FUN_10a989f0c(appuStack_160,lVar3 + 0x30,lVar13,&uStack_1d8,&uStack_1b0,uVar15,&lStack_240);
      lVar12 = lVar3 + 0xb0;
      (**(code **)(lVar3 + 0xb0))(appuStack_160);
      func_0x000104c4f944(auStack_d0);
      FUN_10adce56c(auStack_128);
      if (cStack_131 < '\0') {
        __ZdlPv(uStack_148);
      }
      if (cStack_149 < '\0') {
        __ZdlPv(appuStack_160[0]);
      }
      func_0x000104c4f944(&lStack_240);
      FUN_10adce56c(&uStack_1b0);
      func_0x000104c4f944(&lStack_218);
      FUN_10adce56c(&uStack_a8);
      if (lStack_1c8 < 0) {
        __ZdlPv(uStack_1d8);
      }
    }
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar13 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  lVar13 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar2);
  __Unwind_Resume();
  _objc_retain(*(undefined8 *)(lVar12 + 0x20));
  if (*(char *)(lVar12 + 0x47) < '\0') {
    func_0x000107c3192c(lVar13 + 0x30,*(undefined8 *)(lVar12 + 0x30),*(undefined8 *)(lVar12 + 0x38))
    ;
  }
  else {
    uVar17 = *(undefined8 *)(lVar12 + 0x38);
    uVar16 = *(undefined8 *)(lVar12 + 0x30);
    *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)(lVar12 + 0x40);
    *(undefined8 *)(lVar13 + 0x38) = uVar17;
    *(undefined8 *)(lVar13 + 0x30) = uVar16;
  }
  return;
}



/* Entry: 10adce440; end: 10adce4a3;  */

void FUN_10adce440(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  if (*(char *)(param_2 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),
                        *(undefined8 *)(param_2 + 0x38));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 10adce4a4; end: 10adce4d3;  */

void FUN_10adce4a4(long param_1)

{
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10adce4d4; end: 10adce53b;  */

void FUN_10adce4d4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_copyWeak(param_1 + 0x20,param_2 + 0x20);
  if (*(char *)(param_2 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),
                        *(undefined8 *)(param_2 + 0x38));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 10adce53c; end: 10adce56b;  */

void FUN_10adce53c(long param_1)

{
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x20);
  return;
}



/* Entry: 10adce56c; end: 10adce5b7;  */

long * FUN_10adce56c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10adce5b8; end: 10adce68b;  */

void FUN_10adce5b8(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10adce5b8(*param_1);
    FUN_10adce5b8(param_1[1]);
    func_0x00010adce5f8(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10adce68c; end: 10adce707;  */

long * FUN_10adce68c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      func_0x000107c2abd4(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) &&
       (func_0x000107c2abd4(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10adce708; end: 10adce75b;  */

void FUN_10adce708(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  plVar8 = param_2;
  plVar6 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar5 = (long *)plVar8[2];
      bVar3 = (long *)*plVar5 != plVar8;
      plVar8 = plVar5;
    } while (bVar3);
  }
  else {
    do {
      plVar5 = plVar6;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = plVar5;
  }
  plVar8 = (long *)param_1[1];
  param_1[2] = param_1[2] + -1;
  plVar5 = (long *)*param_2;
  plVar6 = param_2;
  if (plVar5 == (long *)0x0) {
code_r0x000104c61210:
    plVar5 = (long *)plVar6[1];
    if (plVar5 == (long *)0x0) {
      puVar7 = (undefined8 *)plVar6[2];
      bVar3 = true;
      goto code_r0x000104c61234;
    }
  }
  else {
    plVar4 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
      goto code_r0x000104c61210;
    }
  }
  bVar3 = false;
  puVar7 = (undefined8 *)plVar6[2];
  plVar5[2] = (long)puVar7;
code_r0x000104c61234:
  plVar4 = (long *)*puVar7;
  if (plVar4 == plVar6) {
    *puVar7 = plVar5;
    if (plVar6 == plVar8) {
      plVar4 = (long *)0x0;
      plVar8 = plVar5;
    }
    else {
      plVar4 = (long *)puVar7[1];
    }
  }
  else {
    puVar7[1] = plVar5;
  }
  lVar10 = plVar6[3];
  plVar9 = plVar8;
  if (plVar6 != param_2) {
    puVar7 = (undefined8 *)param_2[2];
    plVar6[2] = (long)puVar7;
    lVar1 = 0;
    if ((long *)*puVar7 != param_2) {
      lVar1 = 8;
    }
    *(long **)((long)puVar7 + lVar1) = plVar6;
    lVar1 = *param_2;
    lVar2 = param_2[1];
    *(long **)(lVar1 + 0x10) = plVar6;
    *plVar6 = lVar1;
    plVar6[1] = lVar2;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = plVar6;
    }
    *(char *)(plVar6 + 3) = (char)param_2[3];
    plVar9 = plVar6;
    if (plVar8 != param_2) {
      plVar9 = plVar8;
    }
  }
  if ((plVar9 != (long *)0x0) && ((char)lVar10 != '\0')) {
    if (bVar3) {
      while( true ) {
        plVar6 = (long *)plVar4[2];
        plVar5 = (long *)*plVar6;
        plVar8 = plVar9;
        if (plVar5 == plVar4) break;
        if ((*(byte *)(plVar4 + 3) & 1) == 0) {
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar6 + 3) = 0;
          plVar8 = (long *)plVar6[1];
          lVar10 = *plVar8;
          plVar6[1] = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar6;
          }
          puVar7 = (undefined8 *)plVar6[2];
          plVar8[2] = (long)puVar7;
          lVar10 = 0;
          if ((long *)*puVar7 != plVar6) {
            lVar10 = 8;
          }
          *(long **)((long)puVar7 + lVar10) = plVar8;
          *plVar8 = (long)plVar6;
          plVar6[2] = (long)plVar8;
          plVar8 = plVar4;
          if (plVar9 != (long *)*plVar4) {
            plVar8 = plVar9;
          }
          plVar4 = (long *)((long *)*plVar4)[1];
        }
        plVar5 = (long *)*plVar4;
        plVar6 = plVar4;
        if ((plVar5 != (long *)0x0) && ((char)plVar5[3] != '\x01')) {
          plVar9 = (long *)plVar4[1];
          if ((plVar9 == (long *)0x0) || ((char)plVar9[3] == '\x01')) {
            *(undefined1 *)(plVar5 + 3) = 1;
            *(undefined1 *)(plVar4 + 3) = 0;
            lVar10 = plVar5[1];
            *plVar4 = lVar10;
            if (lVar10 != 0) {
              *(long **)(lVar10 + 0x10) = plVar4;
            }
            puVar7 = (undefined8 *)plVar4[2];
            plVar5[2] = (long)puVar7;
            lVar10 = 0;
            if ((long *)*puVar7 != plVar4) {
              lVar10 = 8;
            }
            *(long **)((long)puVar7 + lVar10) = plVar5;
            plVar5[1] = (long)plVar4;
            plVar4[2] = (long)plVar5;
            plVar6 = plVar5;
            plVar9 = plVar4;
          }
code_r0x000104c61488:
          plVar8 = (long *)plVar6[2];
          *(char *)(plVar6 + 3) = (char)plVar8[3];
          *(undefined1 *)(plVar8 + 3) = 1;
          *(undefined1 *)(plVar9 + 3) = 1;
          plVar6 = (long *)plVar8[1];
          lVar10 = *plVar6;
          plVar8[1] = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar8;
          }
          puVar7 = (undefined8 *)plVar8[2];
          plVar6[2] = (long)puVar7;
          lVar10 = 0;
          if ((long *)*puVar7 != plVar8) {
            lVar10 = 8;
          }
          *(long **)((long)puVar7 + lVar10) = plVar6;
          *plVar6 = (long)plVar8;
code_r0x000104c61580:
          plVar8[2] = (long)plVar6;
          return;
        }
        plVar9 = (long *)plVar4[1];
        if ((plVar9 != (long *)0x0) && ((char)plVar9[3] != '\x01')) goto code_r0x000104c61488;
        *(undefined1 *)(plVar4 + 3) = 0;
        plVar6 = (long *)plVar4[2];
        if ((plVar6 == plVar8) || ((*(byte *)(plVar6 + 3) & 1) == 0)) goto code_r0x000104c6141c;
code_r0x000104c613f8:
        lVar10 = 8;
        if (*(long **)plVar6[2] != plVar6) {
          lVar10 = 0;
        }
        plVar4 = *(long **)((long)plVar6[2] + lVar10);
        plVar9 = plVar8;
      }
      if ((*(byte *)(plVar4 + 3) & 1) == 0) {
        *(undefined1 *)(plVar4 + 3) = 1;
        *(undefined1 *)(plVar6 + 3) = 0;
        lVar10 = plVar5[1];
        *plVar6 = lVar10;
        if (lVar10 != 0) {
          *(long **)(lVar10 + 0x10) = plVar6;
        }
        puVar7 = (undefined8 *)plVar6[2];
        plVar5[2] = (long)puVar7;
        lVar10 = 0;
        if ((long *)*puVar7 != plVar6) {
          lVar10 = 8;
        }
        *(long **)((long)puVar7 + lVar10) = plVar5;
        plVar5[1] = (long)plVar6;
        plVar6[2] = (long)plVar5;
        plVar8 = plVar4;
        if (plVar9 != (long *)plVar4[1]) {
          plVar8 = plVar9;
        }
        plVar4 = *(long **)plVar4[1];
      }
      plVar5 = (long *)*plVar4;
      plVar6 = plVar4;
      if ((plVar5 == (long *)0x0) || ((char)plVar5[3] == '\x01')) {
        plVar9 = (long *)plVar4[1];
        if ((plVar9 == (long *)0x0) || ((char)plVar9[3] == '\x01')) {
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar6 = (long *)plVar4[2];
          if ((char)plVar6[3] == '\x01' && plVar6 != plVar8) goto code_r0x000104c613f8;
code_r0x000104c6141c:
          *(undefined1 *)(plVar6 + 3) = 1;
          return;
        }
        if ((plVar5 == (long *)0x0) || ((char)plVar5[3] == '\x01')) {
          *(undefined1 *)(plVar9 + 3) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          lVar10 = *plVar9;
          plVar4[1] = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar4;
          }
          puVar7 = (undefined8 *)plVar4[2];
          plVar9[2] = (long)puVar7;
          lVar10 = 0;
          if ((long *)*puVar7 != plVar4) {
            lVar10 = 8;
          }
          *(long **)((long)puVar7 + lVar10) = plVar9;
          *plVar9 = (long)plVar4;
          plVar4[2] = (long)plVar9;
          plVar6 = plVar9;
          plVar5 = plVar4;
        }
      }
      plVar8 = (long *)plVar6[2];
      *(char *)(plVar6 + 3) = (char)plVar8[3];
      *(undefined1 *)(plVar8 + 3) = 1;
      *(undefined1 *)(plVar5 + 3) = 1;
      plVar6 = (long *)*plVar8;
      lVar10 = plVar6[1];
      *plVar8 = lVar10;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 0x10) = plVar8;
      }
      puVar7 = (undefined8 *)plVar8[2];
      plVar6[2] = (long)puVar7;
      lVar10 = 0;
      if ((long *)*puVar7 != plVar8) {
        lVar10 = 8;
      }
      *(long **)((long)puVar7 + lVar10) = plVar6;
      plVar6[1] = (long)plVar8;
      goto code_r0x000104c61580;
    }
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  return;
}



/* Entry: 10adce75c; end: 10adce7a3;  */

void FUN_10adce75c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010adce5f8(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10adce7a4; end: 10adce91f; -[LSAUriRequest initWithUri:requestId:lensId:method:contentType:metadata:data:] */

undefined1 *
FUN_10adce7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112701490;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10adce920; end: 10adce927; -[LSAUriRequest uri] */

undefined8 FUN_10adce920(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10adce928; end: 10adce92f; -[LSAUriRequest identifier] */

undefined8 FUN_10adce928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10adce930; end: 10adce937; -[LSAUriRequest lensId] */

undefined8 FUN_10adce930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10adce938; end: 10adce93f; -[LSAUriRequest method] */

undefined8 FUN_10adce938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10adce940; end: 10adce947; -[LSAUriRequest contentType] */

undefined8 FUN_10adce940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10adce948; end: 10adce94f; -[LSAUriRequest metadata] */

undefined8 FUN_10adce948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10adce950; end: 10adce957; -[LSAUriRequest data] */

undefined8 FUN_10adce950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10adce958; end: 10adce9c3; -[LSAUriRequest .cxx_destruct] */

void FUN_10adce958(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10adce9c4; end: 10adcea6f; -[LSAUriResponse initWithUri:code:description:data:] */

undefined8
FUN_10adce9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c059dc0(param_1,param_2,param_3,param_4,puVar1,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10adcea70; end: 10adcea77; -[LSAUriResponse initWithUri:code:metadata:description:data:] */

void FUN_10adcea70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c059df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithUri_code_metadata_descri_1125f4188);
  return;
}



/* Entry: 10adcea78; end: 10adcebab; -[LSAUriResponse initWithUri:code:metadata:description:data:contentType:] */

undefined1 *
FUN_10adcea78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112701498;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10adcebac; end: 10adcebb3; -[LSAUriResponse uri] */

undefined8 FUN_10adcebac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10adcebb4; end: 10adcebbb; -[LSAUriResponse responseCode] */

undefined8 FUN_10adcebb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10adcebbc; end: 10adcebc3; -[LSAUriResponse metadata] */

undefined8 FUN_10adcebbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10adcebc4; end: 10adcebcb; -[LSAUriResponse responseDescription] */

undefined8 FUN_10adcebc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10adcebcc; end: 10adcebd3; -[LSAUriResponse data] */

undefined8 FUN_10adcebcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


