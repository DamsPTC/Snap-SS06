/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a5111d0; end: 10a511247;  */

undefined8 * FUN_10a5111d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110beb298;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a511248; end: 10a5113af;  */

void FUN_10a511248(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8));
  lVar3 = lStack_98 - lStack_a0;
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) <= uVar4) {
LAB_10a51136c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a511370);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4bd6df,0x20,*(long *)(param_1 + 8) + uVar4,2,1);
      if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar4) goto LAB_10a51136c;
      *(int *)(lStack_a0 + uVar4 * 4) = (int)plVar2;
      uVar4 = uVar4 + 1;
    } while (lVar3 >> 2 != uVar4);
  }
  pcStack_88 = FUN_10a5113c4;
  appuStack_80[0] = &PTR_DAT_110beb2c8;
  func_0x0001098bb6d0(*param_2 + 0x18,&pcStack_88,&lStack_a0);
  (*(code *)*appuStack_80[0])(appuStack_80);
  lVar3 = lStack_a0;
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
  __Unwind_Resume(lVar3);
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a5113b0; end: 10a5113c3;  */

void FUN_10a5113b0(void)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a5113c4; end: 10a511413;  */

void FUN_10a5113c4(void)

{
  return;
}



/* Entry: 10a511414; end: 10a511477;  */

void FUN_10a511414(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_14;
  
  if (((*(byte *)(param_3 + 0x1d) & 1) != 0) && ((*(byte *)(param_2 + 0x1d) & 1) != 0)) {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_14 = *(undefined4 *)(param_2 + lVar1);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_10a26d5a0(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a511478);
  (*pcVar2)();
}



/* Entry: 10a511478; end: 10a5114a7;  */

void FUN_10a511478(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110beb310;
  param_1[1] = &UNK_110beb2e0;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10a5114a8; end: 10a5114eb;  */

void FUN_10a5114a8(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined1 uStack_11;
  
  if ((*(byte *)(param_3 + 0x1d) & 1) != 0) {
    if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)(param_1 + 0x48))
                (param_2,*(undefined4 *)(param_3 + 0x10),&uStack_11);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5114ec);
  (*pcVar1)();
}



/* Entry: 10a5114ec; end: 10a511507;  */

void FUN_10a5114ec(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = FUN_10a511508;
  param_1[1] = &PTR_FUN_110beb390;
  param_1[2] = param_2;
  return;
}



/* Entry: 10a511508; end: 10a5115c7;  */

void FUN_10a511508(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_5 != 0) {
    lStack_50 = param_1;
    plStack_48 = param_2;
    func_0x0001098af634(&lStack_50,*param_4);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_2,param_3);
    plVar1 = (long *)0x1137eb200;
    if (*param_2 != -1) {
      plVar1 = (long *)(param_1 + *param_2);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*(ulong *)(param_6 + 0x10) < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        lVar4 = *(long *)(*plVar3 + *(ulong *)(param_6 + 0x10) * 8);
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) == '\0')) {
          lVar4 = 0;
        }
        *plVar1 = lVar4;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5115c8);
  (*pcVar2)();
}



/* Entry: 10a5115c8; end: 10a5115eb;  */

void FUN_10a5115c8(void)

{
  return;
}



/* Entry: 10a5115ec; end: 10a5116e7;  */

undefined8 ** FUN_10a5115ec(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110bef638,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *(undefined1 *)ppuVar1 = 0;
  *(undefined1 *)(ppuVar1 + 2) = 0;
  return ppuVar1;
}



/* Entry: 10a5116e8; end: 10a5116f7;  */

void FUN_10a5116e8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  return;
}



/* Entry: 10a5116f8; end: 10a511777;  */

void FUN_10a5116f8(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,long param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long *plVar3;
  long lStack_40;
  long *plStack_38;
  
  if (param_5 != 0) {
    plVar3 = &lStack_40;
    lStack_40 = param_1;
    plStack_38 = param_2;
    func_0x0001098b9090(&lStack_40,*param_4);
    if (*plVar3 != 0) {
      FUN_10a26d738(param_2,param_3);
      puVar1 = (undefined1 *)0x113302568;
      if (*param_2 != -1) {
        puVar1 = (undefined1 *)(param_1 + *param_2);
      }
      *puVar1 = 0;
      puVar1[0x10] = 0;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a511778);
  (*pcVar2)();
}



/* Entry: 10a511778; end: 10a511793;  */

void FUN_10a511778(void)

{
  return;
}



/* Entry: 10a511794; end: 10a51183b;  */

undefined8 * FUN_10a511794(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110beb3d0;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a51183c; end: 10a511a83;  */

/* WARNING: Removing unreachable block (ram,0x00010a511a18) */
/* WARNING: Removing unreachable block (ram,0x00010a511a1c) */
/* WARNING: Removing unreachable block (ram,0x00010a511a24) */
/* WARNING: Removing unreachable block (ram,0x00010a511a2c) */
/* WARNING: Removing unreachable block (ram,0x00010a511a30) */

void FUN_10a51183c(undefined8 *param_1,long param_2,long param_3)

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
  
  puVar5 = (undefined8 *)0x1f8;
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
  *puVar5 = &PTR_FUN_110beb410;
  func_0x0001098bae4c(puVar5,&UNK_10e4bda65,0x3b,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x35,in_x7,0,0
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
  *puVar5 = &PTR_FUN_110beb410;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110be9ec0;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110beb480;
  puVar5[0x25] = &UNK_110beb450;
  *(undefined1 *)(puVar5 + 0x28) = 0;
  *(undefined1 *)(puVar5 + 0x2b) = 0;
  puVar5[0x2e] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2f) = 0x40000000;
  puVar5[0x2c] = &PTR_FUN_110beb480;
  puVar5[0x2d] = &UNK_110beb450;
  *(undefined1 *)(puVar5 + 0x30) = 0;
  *(undefined1 *)(puVar5 + 0x33) = 0;
  *(undefined2 *)(puVar5 + 0x34) = 0;
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
  *(undefined2 *)(puVar5 + 0x36) = 0;
  puVar5[0x39] = 0x10a511fb8;
  puVar5[0x3a] = &UNK_110be9f48;
  puVar5[0x3b] = 0;
  puVar5[0x3c] = 0;
  puVar5[0x3d] = 0;
  puVar5[0x3e] = 0;
  puVar5[0x35] = &PTR_DAT_110beb4c0;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x3e] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x1a1) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a511a84; end: 10a511b2f;  */

undefined8 * FUN_10a511a84(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110beb410;
  param_1[0x19] = &PTR_FUN_110be9ec0;
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



/* Entry: 10a511b30; end: 10a511c1f;  */

void FUN_10a511b30(void)

{
  return;
}



/* Entry: 10a511c20; end: 10a511e83;  */

/* WARNING: Removing unreachable block (ram,0x00010a511d90) */
/* WARNING: Removing unreachable block (ram,0x00010a511d94) */
/* WARNING: Removing unreachable block (ram,0x00010a511d9c) */
/* WARNING: Removing unreachable block (ram,0x00010a511da4) */
/* WARNING: Removing unreachable block (ram,0x00010a511db0) */
/* WARNING: Removing unreachable block (ram,0x00010a511db8) */
/* WARNING: Removing unreachable block (ram,0x00010a511dc0) */
/* WARNING: Removing unreachable block (ram,0x00010a511dc4) */

void FUN_10a511c20(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(lVar8 + 0x38) & 1) != 0) {
    puVar5 = (undefined8 *)0xa0;
    __Znwm();
    puVar6 = puVar5 + 3;
    *(undefined2 *)puVar6 = 4;
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
    puVar5[0x11] = puVar6;
    puVar5[0x12] = 0;
    *puVar5 = &PTR_DAT_110ae91c0;
    *(undefined2 *)(puVar5 + 0x13) = 0;
    puStack_b0 = puVar5;
    if ((*(byte *)(param_2 + 0x1a1) & 1) != 0) {
      lStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
      uStack_8c = 0x20000000;
      FUN_10a26ebc0(&lStack_a8,0,&uStack_8c,&pcStack_88,1);
      pcStack_88 = FUN_10a511fd4;
      appuStack_80[0] = &PTR_FUN_110beb4e0;
      param_2 = param_2 + 0x18;
      FUN_10a4ff788(param_2,&pcStack_88,&lStack_a8);
      (*(code *)*appuStack_80[0])(appuStack_80);
      if (lStack_a8 != 0) {
        lStack_a0 = lStack_a8;
        __ZdlPv();
      }
      plVar1 = puVar5 + 2;
      *(int *)(lVar8 + 0x10) = (int)param_2;
      do {
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 2;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            FUN_109d1b4dc(puVar6);
            goto LAB_10a511d70;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_10a511d70:
          while( true ) {
            *param_1 = puVar5;
            puVar6 = puVar5;
            func_0x0001092b4274(&puStack_b0);
            lVar8 = 0;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return;
            }
            ___stack_chk_fail();
            if ((int)puVar6 == 0) break;
            (*(code *)*appuStack_80[0])(appuStack_80);
            if (lStack_a8 != 0) {
              lStack_a0 = lStack_a8;
              __ZdlPv();
            }
            ___cxa_begin_catch(lVar8);
            __ZSt17current_exceptionv(&pcStack_88);
            func_0x000109d1b350(puVar5,&pcStack_88);
            __ZNSt13exception_ptrD1Ev(&pcStack_88);
            ___cxa_end_catch();
          }
          __Unwind_Resume(lVar8);
          func_0x000104bd46a0();
          uVar7 = *(undefined8 *)(lVar8 + 8);
          *puVar6 = &PTR____cxa_pure_virtual_110b17f40;
          puVar6[1] = uVar7;
          uVar7 = *(undefined8 *)(lVar8 + 0x10);
          *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(lVar8 + 0x18);
          puVar6[2] = uVar7;
          *puVar6 = &PTR_FUN_110beb480;
          uVar7 = *(undefined8 *)(lVar8 + 0x20);
          uVar10 = *(undefined8 *)(lVar8 + 0x38);
          uVar9 = *(undefined8 *)(lVar8 + 0x30);
          puVar6[5] = *(undefined8 *)(lVar8 + 0x28);
          puVar6[4] = uVar7;
          puVar6[7] = uVar10;
          puVar6[6] = uVar9;
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a511e04);
  (*pcVar4)();
}



/* Entry: 10a511e84; end: 10a511ebb;  */

void FUN_10a511e84(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar1;
  *param_2 = &PTR_FUN_110beb480;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar1;
  param_2[7] = uVar3;
  param_2[6] = uVar2;
  return;
}



/* Entry: 10a511ebc; end: 10a511f53;  */

void FUN_10a511ebc(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_34;
  
  if (((*(byte *)(param_3 + 0x38) & 1) != 0) && ((*(byte *)(param_2 + 0x38) & 1) != 0)) {
    param_3 = param_3 + 0x20;
    func_0x00010a4ff654(param_3,param_2 + 0x20);
    if ((int)param_3 == 0) {
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
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a511f54);
  (*pcVar2)();
}



/* Entry: 10a511f54; end: 10a511fd3;  */

void FUN_10a511f54(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110beb480;
  param_1[1] = &UNK_110beb450;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}



/* Entry: 10a511fd4; end: 10a51203b;  */

void FUN_10a511fd4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar3 = &lStack_40;
  lStack_40 = param_1;
  uStack_38 = param_2;
  if (param_5 != 0) {
    plVar2 = &lStack_30;
    lStack_30 = param_1;
    uStack_28 = param_2;
    func_0x0001098b9090(plVar2,*param_4);
    if (*plVar2 != 0) {
      func_0x00010a4efd18(&lStack_40,param_3);
      lVar4 = *plVar3;
      *plVar3 = 0;
      if (lVar4 != 0) {
        func_0x00010a502728();
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51203c);
  (*pcVar1)();
}



/* Entry: 10a51203c; end: 10a512057;  */

void FUN_10a51203c(void)

{
  return;
}



/* Entry: 10a512058; end: 10a5120ff;  */

undefined8 * FUN_10a512058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110beb508;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a512100; end: 10a51233f;  */

/* WARNING: Removing unreachable block (ram,0x00010a5122d4) */
/* WARNING: Removing unreachable block (ram,0x00010a5122d8) */
/* WARNING: Removing unreachable block (ram,0x00010a5122e0) */
/* WARNING: Removing unreachable block (ram,0x00010a5122e8) */
/* WARNING: Removing unreachable block (ram,0x00010a5122ec) */

void FUN_10a512100(undefined8 *param_1,long param_2,long param_3)

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
  
  puVar5 = (undefined8 *)0x1d8;
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
  *puVar5 = &PTR_FUN_110beb548;
  func_0x0001098bae4c(puVar5,&UNK_10e4bdc99,0x39,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x31,in_x7,0,0
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
  *puVar5 = &PTR_FUN_110beb548;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bb9fe8;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110beb5b8;
  puVar5[0x25] = &UNK_110beb588;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_FUN_110beb5b8;
  puVar5[0x2b] = &UNK_110beb588;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined2 *)(puVar5 + 0x30) = 0;
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
  *(undefined2 *)(puVar5 + 0x32) = 0;
  puVar5[0x35] = 0x10a512994;
  puVar5[0x36] = &UNK_110bba070;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x31] = &PTR_DAT_110beb5f8;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x3a] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x181) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a512340; end: 10a512423;  */

void FUN_10a512340(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110beb548;
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110bb9fe8;
  puStack_28 = param_1 + 0x21;
  FUN_10a28a2cc(&puStack_28);
  func_0x0001098bba44(param_1 + 0x19);
  func_0x0001098ac370(param_1);
  return;
}



/* Entry: 10a512424; end: 10a512427;  */

void FUN_10a512424(void)

{
  return;
}



/* Entry: 10a512428; end: 10a512603;  */

uint FUN_10a512428(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puStack_50;
  long *plStack_48;
  
  lVar13 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar13 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  puVar8 = (undefined8 *)0xb8;
  __Znwm();
  puVar12 = *(undefined8 **)(param_1 + 0x108);
  puVar3 = *(undefined8 **)(param_1 + 0x110);
  uVar10 = *(undefined8 *)((long)puVar12 + 0xf);
  uVar14 = *puVar12;
  puVar8[1] = puVar12[1];
  *puVar8 = uVar14;
  *(undefined8 *)((long)puVar8 + 0xf) = uVar10;
  FUN_10a22cb80(puVar8 + 3,puVar12 + 3);
  FUN_10a22cd3c(puVar8 + 7,puVar12 + 7);
  uVar4 = *(undefined1 *)(puVar12 + 0x13);
  puVar8[0x14] = 0;
  *(undefined1 *)(puVar8 + 0x13) = uVar4;
  puVar8[0x15] = 0;
  puVar8[0x16] = 0;
  FUN_10a22ce94();
  if ((long)puVar3 - (long)puVar12 != 0xb8) {
    puVar12 = puVar12 + 0x17;
    do {
      FUN_10aab73e4(puVar8,puVar12);
      puVar12 = puVar12 + 0x17;
    } while (puVar12 != puVar3);
  }
  plVar9 = (long *)0x20;
  puStack_50 = puVar8;
  __Znwm();
  *plVar9 = (long)&PTR_FUN_110beb628;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)puVar8;
  plStack_48 = plVar9;
  FUN_10a286fec(lVar2 + 0x20,&puStack_50);
  plVar9 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar11 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (lVar13 == 0) {
    uVar7 = 1;
  }
  else {
    uVar10 = *(undefined8 *)(lVar13 + 0x20);
    FUN_10a28a860(uVar10,*(undefined8 *)(lVar2 + 0x20));
    uVar7 = (uint)uVar10 ^ 1;
  }
  return uVar7;
}



/* Entry: 10a512604; end: 10a51285f;  */

/* WARNING: Removing unreachable block (ram,0x00010a51276c) */
/* WARNING: Removing unreachable block (ram,0x00010a512770) */
/* WARNING: Removing unreachable block (ram,0x00010a512778) */
/* WARNING: Removing unreachable block (ram,0x00010a512780) */
/* WARNING: Removing unreachable block (ram,0x00010a51278c) */
/* WARNING: Removing unreachable block (ram,0x00010a512794) */
/* WARNING: Removing unreachable block (ram,0x00010a51279c) */
/* WARNING: Removing unreachable block (ram,0x00010a5127a0) */

void FUN_10a512604(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_2 + 0x70);
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar6 = puVar5 + 3;
  *(undefined2 *)puVar6 = 4;
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
  puVar5[0x11] = puVar6;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  puStack_b0 = puVar5;
  if ((*(byte *)(param_2 + 0x181) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5127e0);
    (*pcVar4)();
  }
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  uStack_8c = 0x20000000;
  FUN_10a26ebc0(&lStack_a8,0,&uStack_8c,&pcStack_88,1);
  pcStack_88 = FUN_10a512a70;
  appuStack_80[0] = &PTR_FUN_110beb678;
  param_2 = param_2 + 0x18;
  FUN_10a4ff8a0(param_2,&pcStack_88,&lStack_a8);
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  plVar1 = puVar5 + 2;
  *(int *)(lVar9 + 0x10) = (int)param_2;
  do {
    lVar9 = *plVar1;
    if (lVar9 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar6);
        goto LAB_10a51274c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_10a51274c:
      while( true ) {
        *param_1 = puVar5;
        puVar6 = puVar5;
        func_0x0001092b4274(&puStack_b0);
        lVar9 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return;
        }
        ___stack_chk_fail();
        if ((int)puVar6 == 0) break;
        (*(code *)*appuStack_80[0])(appuStack_80);
        if (lStack_a8 != 0) {
          lStack_a0 = lStack_a8;
          __ZdlPv();
        }
        ___cxa_begin_catch(lVar9);
        __ZSt17current_exceptionv(&pcStack_88);
        func_0x000109d1b350(puVar5,&pcStack_88);
        __ZNSt13exception_ptrD1Ev(&pcStack_88);
        ___cxa_end_catch();
      }
      __Unwind_Resume(lVar9);
      func_0x000104bd46a0();
      uVar7 = *(undefined8 *)(lVar9 + 8);
      *puVar6 = &PTR____cxa_pure_virtual_110b17f40;
      puVar6[1] = uVar7;
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(lVar9 + 0x18);
      puVar6[2] = uVar7;
      *puVar6 = &PTR_FUN_110beb5b8;
      lVar8 = *(long *)(lVar9 + 0x28);
      uVar7 = *(undefined8 *)(lVar9 + 0x20);
      puVar6[5] = *(undefined8 *)(lVar9 + 0x28);
      puVar6[4] = uVar7;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
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
  } while( true );
}



/* Entry: 10a512860; end: 10a5128b3;  */

void FUN_10a512860(long param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_110beb5b8;
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



/* Entry: 10a5128b4; end: 10a512937;  */

void FUN_10a5128b4(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a28a748(uVar2,*(undefined8 *)(param_2 + 0x20));
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



/* Entry: 10a512938; end: 10a5129af;  */

void FUN_10a512938(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110beb5b8;
  param_1[1] = &UNK_110beb588;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a5129b0; end: 10a512a13;  */

void FUN_10a5129b0(long param_1)

{
  long lStack_28;
  
  if (param_1 != 0) {
    lStack_28 = param_1 + 0xa0;
    FUN_10a22d224(&lStack_28);
    FUN_10a22ce48(param_1 + 0x38);
    if ((*(char *)(param_1 + 0x30) == '\x01') && (*(long *)(param_1 + 0x18) != 0)) {
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
      __ZdlPv();
    }
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 10a512a14; end: 10a512a17;  */

void FUN_10a512a14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a512a18; end: 10a512a2b;  */

void FUN_10a512a18(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a512a2c; end: 10a512a33;  */

void FUN_10a512a2c(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    lStack_28 = lVar1 + 0xa0;
    FUN_10a22d224(&lStack_28);
    FUN_10a22ce48(lVar1 + 0x38);
    if ((*(char *)(lVar1 + 0x30) == '\x01') && (*(long *)(lVar1 + 0x18) != 0)) {
      *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x18);
      __ZdlPv();
    }
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a512a34; end: 10a512a6b;  */

undefined8 FUN_10a512a34(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110beb668);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a512a6c; end: 10a512a6f;  */

void FUN_10a512a6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a512a70; end: 10a512ae3;  */

void FUN_10a512a70(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar2 = &lStack_40;
  lStack_40 = param_1;
  uStack_38 = param_2;
  if (param_5 != 0) {
    plVar3 = &lStack_30;
    lStack_30 = param_1;
    uStack_28 = param_2;
    func_0x0001098b9090(plVar3,*param_4);
    if (*plVar3 != 0) {
      func_0x00010a290d64(&lStack_40,param_3);
      plVar3 = (long *)*plVar2;
      *plVar2 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a512ae4);
  (*pcVar1)();
}



/* Entry: 10a512ae4; end: 10a512aff;  */

void FUN_10a512ae4(void)

{
  return;
}



/* Entry: 10a512b00; end: 10a512ba7;  */

undefined8 * FUN_10a512b00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110beb6a0;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a512ba8; end: 10a512de7;  */

/* WARNING: Removing unreachable block (ram,0x00010a512d7c) */
/* WARNING: Removing unreachable block (ram,0x00010a512d80) */
/* WARNING: Removing unreachable block (ram,0x00010a512d88) */
/* WARNING: Removing unreachable block (ram,0x00010a512d90) */
/* WARNING: Removing unreachable block (ram,0x00010a512d94) */

void FUN_10a512ba8(undefined8 *param_1,long param_2,long param_3)

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
  
  puVar5 = (undefined8 *)0x1d8;
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
  *puVar5 = &PTR_FUN_110beb6e0;
  func_0x0001098bae4c(puVar5,&UNK_10e4be034,0x43,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x31,in_x7,0,0
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
  *puVar5 = &PTR_FUN_110beb6e0;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110beb730;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110beb7e8;
  puVar5[0x25] = &UNK_110beb7b8;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_DAT_110beb7e8;
  puVar5[0x2b] = &UNK_110beb7b8;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined2 *)(puVar5 + 0x30) = 0;
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
  *(undefined2 *)(puVar5 + 0x32) = 0;
  puVar5[0x35] = 0x10a513f3c;
  puVar5[0x36] = &UNK_110beb848;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x31] = &PTR_FUN_110beb828;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x3a] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x181) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a512de8; end: 10a512ea3;  */

undefined8 * FUN_10a512de8(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110beb6e0;
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110beb730;
  func_0x00010a5138fc(param_1 + 0x21);
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



/* Entry: 10a512ea4; end: 10a512ea7;  */

void FUN_10a512ea4(void)

{
  return;
}



/* Entry: 10a512ea8; end: 10a51300b;  */

uint FUN_10a512ea8(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_50;
  long *plStack_48;
  
  lVar11 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar11 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  lVar7 = 0x18;
  __Znwm();
  lVar10 = *(long *)(param_1 + 0x108);
  lVar3 = *(long *)(param_1 + 0x110);
  FUN_10a22d2fc();
  while (lVar10 = lVar10 + 0x18, lVar10 != lVar3) {
    FUN_10a4cab14(lVar7);
  }
  plVar8 = (long *)0x20;
  lStack_50 = lVar7;
  __Znwm();
  *plVar8 = (long)&PTR_FUN_110beb890;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = lVar7;
  plStack_48 = plVar8;
  FUN_10a286fec(lVar2 + 0x20,&lStack_50);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lVar11 == 0) {
    uVar6 = 1;
  }
  else {
    uVar9 = *(undefined8 *)(lVar11 + 0x20);
    FUN_10a513b08(uVar9,**(undefined8 **)(lVar2 + 0x20),(*(undefined8 **)(lVar2 + 0x20))[2]);
    uVar6 = (uint)uVar9 ^ 1;
  }
  return uVar6;
}



/* Entry: 10a51300c; end: 10a5132d3;  */

/* WARNING: Removing unreachable block (ram,0x00010a5131bc) */
/* WARNING: Removing unreachable block (ram,0x00010a5131c0) */
/* WARNING: Removing unreachable block (ram,0x00010a5131c8) */
/* WARNING: Removing unreachable block (ram,0x00010a5131d0) */
/* WARNING: Removing unreachable block (ram,0x00010a5131dc) */
/* WARNING: Removing unreachable block (ram,0x00010a5131e4) */
/* WARNING: Removing unreachable block (ram,0x00010a5131ec) */
/* WARNING: Removing unreachable block (ram,0x00010a5131f0) */

void FUN_10a51300c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x8;
  long lVar8;
  long lVar9;
  ulong uStack_168;
  undefined8 *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined **appuStack_d0 [7];
  undefined8 uStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_2 + 0x70);
  puVar6 = (undefined8 *)0xa0;
  __Znwm();
  puVar7 = puVar6 + 3;
  *(undefined2 *)puVar7 = 4;
  puVar6[2] = 0;
  puVar6[1] = 0x200000006;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = puVar7;
  puVar6[0x12] = 0;
  *puVar6 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar6 + 0x13) = 0;
  puStack_118 = puVar6;
  if ((*(byte *)(param_2 + 0x181) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a513234);
    (*pcVar5)();
  }
  lStack_110 = 0;
  lStack_108 = 0;
  uStack_100 = 0;
  uStack_98 = (code *)CONCAT44(uStack_98._4_4_,0x20000000);
  FUN_10a26ebc0(&lStack_110,0,&uStack_98,(long)&uStack_98 + 4,1);
  pcStack_d8 = FUN_10a5140c0;
  appuStack_d0[0] = &PTR_FUN_110beb8e0;
  uStack_98 = FUN_10a5140c0;
  appuStack_90[0] = &PTR_FUN_110beb8e0;
  lStack_e8 = lStack_108;
  lStack_f0 = lStack_110;
  uStack_e0 = uStack_100;
  lStack_110 = 0;
  lStack_108 = 0;
  uStack_100 = 0;
  param_2 = param_2 + 0x18;
  func_0x0001098aeecc(param_2,&uStack_98,&UNK_110be8990,&lStack_f0);
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  (*(code *)*appuStack_90[0])(appuStack_90);
  (*(code *)*appuStack_d0[0])(appuStack_d0);
  if (lStack_110 != 0) {
    lStack_108 = lStack_110;
    __ZdlPv();
  }
  plVar1 = puVar6 + 2;
  *(int *)(lVar9 + 0x10) = (int)param_2;
  do {
    lVar9 = *plVar1;
    if (lVar9 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar7);
        goto LAB_10a51319c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_10a51319c:
      while( true ) {
        *param_1 = puVar6;
        puVar7 = puVar6;
        func_0x0001092b4274(&puStack_118);
        lVar9 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          return;
        }
        ___stack_chk_fail();
        if ((int)puVar7 == 0) break;
        if (lStack_f0 != 0) {
          lStack_e8 = lStack_f0;
          __ZdlPv();
        }
        (*(code *)*appuStack_90[0])(appuStack_90);
        (*(code *)*appuStack_d0[0])(appuStack_d0);
        if (lStack_110 != 0) {
          lStack_108 = lStack_110;
          __ZdlPv();
        }
        ___cxa_begin_catch(lVar9);
        __ZSt17current_exceptionv(&pcStack_d8);
        func_0x000109d1b350(puVar6,&pcStack_d8);
        __ZNSt13exception_ptrD1Ev(&pcStack_d8);
        ___cxa_end_catch();
      }
      __Unwind_Resume(lVar9);
      func_0x000104bd46a0();
      puVar6 = (undefined8 *)0x20;
      __Znwm();
      puVar6[1] = 0;
      *puVar6 = &PTR_DAT_110beb770;
      puVar6[2] = 0;
      puVar6[3] = 0;
      lVar8 = *(long *)(lVar9 + 0x40);
      lVar9 = *(long *)(lVar9 + 0x48);
      lVar4 = lVar9 - lVar8;
      if (lVar4 != 0) {
        uStack_168 = (lVar4 >> 3) * -0x5555555555555555;
        if (0xaaaaaaaaaaaaaaa < uStack_168) {
          FUN_10a513844();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5133c0);
          (*pcVar5)();
        }
        FUN_10a513858();
        puVar6[1] = uStack_168;
        puVar6[2] = uStack_168;
        puVar6[3] = uStack_168 + (long)puVar7 * 0x18;
        do {
          FUN_10a22d2fc();
          lVar8 = lVar8 + 0x18;
          uStack_168 = uStack_168 + 0x18;
        } while (lVar8 != lVar9);
        puVar6[2] = uStack_168;
      }
      *extraout_x8 = puVar6;
      return;
    }
  } while( true );
}



/* Entry: 10a5132d4; end: 10a5133ef;  */

void FUN_10a5132d4(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uStack_48;
  
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  puVar4[1] = 0;
  *puVar4 = &PTR_DAT_110beb770;
  puVar4[2] = 0;
  puVar4[3] = 0;
  lVar5 = *(long *)(param_2 + 0x40);
  lVar1 = *(long *)(param_2 + 0x48);
  lVar2 = lVar1 - lVar5;
  if (lVar2 != 0) {
    uStack_48 = (lVar2 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uStack_48) {
      FUN_10a513844();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a5133c0);
      (*pcVar3)();
    }
    FUN_10a513858();
    puVar4[1] = uStack_48;
    puVar4[2] = uStack_48;
    puVar4[3] = uStack_48 + param_3 * 0x18;
    do {
      FUN_10a22d2fc();
      lVar5 = lVar5 + 0x18;
      uStack_48 = uStack_48 + 0x18;
    } while (lVar5 != lVar1);
    puVar4[2] = uStack_48;
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 10a5133f0; end: 10a5135a7;  */

void FUN_10a5133f0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  
  puVar15 = *(undefined8 **)(param_1 + 0x48);
  if (puVar15 < *(undefined8 **)(param_1 + 0x50)) {
    *puVar15 = *param_2;
    plVar8 = param_2 + 1;
    lVar10 = *plVar8;
    plVar9 = puVar15 + 1;
    *plVar9 = lVar10;
    lVar12 = param_2[2];
    puVar15[2] = lVar12;
    if (lVar12 == 0) {
      *puVar15 = plVar9;
    }
    else {
      *(long **)(lVar10 + 0x10) = plVar9;
      *param_2 = plVar8;
      *plVar8 = 0;
      param_2[2] = 0;
    }
    puVar15 = puVar15 + 3;
LAB_10a51358c:
    *(undefined8 **)(param_1 + 0x48) = puVar15;
    return;
  }
  lVar10 = (long)puVar15 - *(long *)(param_1 + 0x40);
  uVar6 = (lVar10 >> 3) * -0x5555555555555555 + 1;
  if (uVar6 < 0xaaaaaaaaaaaaaab) {
    lVar12 = (long)*(undefined8 **)(param_1 + 0x50) - *(long *)(param_1 + 0x40) >> 3;
    uVar11 = lVar12 * 0x5555555555555556;
    if (uVar11 < uVar6 || uVar11 - uVar6 == 0) {
      uVar11 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
      uVar11 = 0xaaaaaaaaaaaaaaa;
    }
    puVar5 = param_2;
    FUN_10a513858();
    puVar1 = (undefined8 *)(uVar11 + lVar10);
    *puVar1 = *param_2;
    plVar8 = param_2 + 1;
    lVar10 = *plVar8;
    plVar9 = puVar1 + 1;
    *plVar9 = lVar10;
    lVar12 = param_2[2];
    puVar1[2] = lVar12;
    if (lVar12 == 0) {
      *puVar1 = plVar9;
    }
    else {
      *(long **)(lVar10 + 0x10) = plVar9;
      *param_2 = plVar8;
      *plVar8 = 0;
      param_2[2] = 0;
    }
    puVar15 = puVar1 + 3;
    lVar10 = *(long *)(param_1 + 0x40);
    lVar3 = *(long *)(param_1 + 0x48);
    lVar12 = (long)puVar1 + (lVar10 - lVar3);
    if (lVar3 != lVar10) {
      lVar7 = 0;
      do {
        puVar1 = (undefined8 *)(lVar12 + lVar7);
        puVar2 = (undefined8 *)(lVar10 + lVar7);
        *puVar1 = *puVar2;
        plVar8 = puVar2 + 1;
        lVar13 = *plVar8;
        plVar9 = puVar1 + 1;
        *plVar9 = lVar13;
        lVar14 = puVar2[2];
        puVar1[2] = lVar14;
        if (lVar14 == 0) {
          *puVar1 = plVar9;
        }
        else {
          *(long **)(lVar13 + 0x10) = plVar9;
          *(long **)(lVar10 + lVar7) = plVar8;
          *plVar8 = 0;
          puVar2[2] = 0;
        }
        lVar7 = lVar7 + 0x18;
      } while (lVar10 + lVar7 != lVar3);
      do {
        func_0x00010a22dfb0(lVar10,*(undefined8 *)(lVar10 + 8));
        lVar10 = lVar10 + 0x18;
      } while (lVar10 != lVar3);
      lVar10 = *(long *)(param_1 + 0x40);
    }
    *(long *)(param_1 + 0x40) = lVar12;
    *(undefined8 **)(param_1 + 0x48) = puVar15;
    *(ulong *)(param_1 + 0x50) = uVar11 + (long)puVar5 * 0x18;
    if (lVar10 != 0) {
      __ZdlPv(lVar10);
    }
    goto LAB_10a51358c;
  }
  FUN_10a513844();
  uVar11 = (ulong)(int)param_2;
  lVar10 = *(long *)(param_1 + 0x40);
  lVar12 = *(long *)(param_1 + 0x48);
  uVar6 = (lVar12 - lVar10 >> 3) * -0x5555555555555555;
  if (uVar11 + 1 != uVar6) {
    if ((lVar10 == lVar12) || (uVar6 < uVar11 || uVar6 - uVar11 == 0)) goto LAB_10a513648;
    FUN_10a230dcc(lVar10 + (long)(int)param_2 * 0x18,lVar12 + -0x18);
    lVar10 = *(long *)(param_1 + 0x40);
    lVar12 = *(long *)(param_1 + 0x48);
    uVar6 = (lVar12 - lVar10 >> 3) * -0x5555555555555555;
    if (uVar6 < uVar11 || uVar6 - uVar11 == 0) goto LAB_10a513648;
  }
  if (lVar10 != lVar12) {
    func_0x00010a22dfb0(lVar12 + -0x18,*(undefined8 *)(lVar12 + -0x10));
    *(long *)(param_1 + 0x48) = lVar12 + -0x18;
    return;
  }
LAB_10a513648:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a51364c);
  (*pcVar4)();
}



/* Entry: 10a5135a8; end: 10a5136ab;  */

void FUN_10a5135a8(long param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_2;
  lVar3 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  uVar4 = (lVar2 - lVar3 >> 3) * -0x5555555555555555;
  if (uVar5 + 1 != uVar4) {
    if ((lVar3 == lVar2) || (uVar4 < uVar5 || uVar4 - uVar5 == 0)) goto LAB_10a513648;
    FUN_10a230dcc(lVar3 + (long)param_2 * 0x18,lVar2 + -0x18);
    lVar3 = *(long *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x48);
    uVar4 = (lVar2 - lVar3 >> 3) * -0x5555555555555555;
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) goto LAB_10a513648;
  }
  if (lVar3 != lVar2) {
    func_0x00010a22dfb0(lVar2 + -0x18,*(undefined8 *)(lVar2 + -0x10));
    *(long *)(param_1 + 0x48) = lVar2 + -0x18;
    return;
  }
LAB_10a513648:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51364c);
  (*pcVar1)();
}



/* Entry: 10a5136ac; end: 10a513843;  */

undefined1  [16] FUN_10a5136ac(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  code **ppcVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_b0,
                (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x5555555555555555);
  lVar4 = lStack_a8 - lStack_b0;
  if (lVar4 != 0) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      uVar6 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x5555555555555555;
      if ((uVar6 < uVar8 || uVar6 - uVar8 == 0) ||
         (plVar2 = param_2,
         func_0x0001098ac018(param_2,&UNK_10e4bdf3c,0x2e,*(long *)(param_1 + 8) + lVar7,2,1),
         (ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar8)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a513804);
        (*pcVar1)();
      }
      *(int *)(lStack_b0 + uVar8 * 4) = (int)plVar2;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar4 >> 2 != uVar8);
  }
  pcStack_98 = FUN_10a51396c;
  appuStack_90[0] = &PTR_DAT_110beb7a0;
  ppcVar5 = &pcStack_98;
  func_0x0001098bb6d0(*param_2 + 0x18,ppcVar5,&lStack_b0);
  (*(code *)*appuStack_90[0])(appuStack_90);
  lVar4 = lStack_b0;
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    (*(code *)*appuStack_90[0])(appuStack_90);
    if (lStack_b0 != 0) {
      lStack_a8 = lStack_b0;
      __ZdlPv();
    }
    __Unwind_Resume(lVar4);
    puVar3 = &DAT_10f62a4d8;
    FUN_109ffde64();
    if ((undefined *)0xaaaaaaaaaaaaaaa < puVar3) {
      func_0x000109ffded8();
      if ((puVar3[0x18] & 1) == 0) {
        lVar7 = **(long **)(puVar3 + 8);
        lVar4 = **(long **)(puVar3 + 0x10);
        while (lVar4 != lVar7) {
          ppcVar5 = *(code ***)(lVar4 + -0x10);
          func_0x00010a22dfb0(lVar4 + -0x18,ppcVar5);
          lVar4 = lVar4 + -0x18;
        }
      }
      auVar11._8_8_ = ppcVar5;
      auVar11._0_8_ = puVar3;
      return auVar11;
    }
    lVar4 = (long)puVar3 * 0x18;
    __Znwm(lVar4);
    auVar10._8_8_ = puVar3;
    auVar10._0_8_ = lVar4;
    return auVar10;
  }
  auVar9._8_8_ = ppcVar5;
  auVar9._0_8_ = lVar4;
  return auVar9;
}



/* Entry: 10a513844; end: 10a513857;  */

undefined1  [16] FUN_10a513844(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined *)0xaaaaaaaaaaaaaaa < puVar1) {
    func_0x000109ffded8();
    if ((puVar1[0x18] & 1) == 0) {
      lVar3 = **(long **)(puVar1 + 8);
      lVar2 = **(long **)(puVar1 + 0x10);
      while (lVar2 != lVar3) {
        param_2 = *(undefined8 *)(lVar2 + -0x10);
        func_0x00010a22dfb0(lVar2 + -0x18,param_2);
        lVar2 = lVar2 + -0x18;
      }
    }
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = puVar1;
    return auVar5;
  }
  lVar2 = (long)puVar1 * 0x18;
  __Znwm(lVar2);
  auVar4._8_8_ = puVar1;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 10a513858; end: 10a51389b;  */

undefined1  [16] FUN_10a513858(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (0xaaaaaaaaaaaaaaa < param_1) {
    func_0x000109ffded8();
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      lVar2 = **(long **)(param_1 + 8);
      lVar1 = **(long **)(param_1 + 0x10);
      while (lVar1 != lVar2) {
        param_2 = *(undefined8 *)(lVar1 + -0x10);
        func_0x00010a22dfb0(lVar1 + -0x18,param_2);
        lVar1 = lVar1 + -0x18;
      }
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  lVar1 = param_1 * 0x18;
  __Znwm(lVar1);
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 10a51389c; end: 10a51396b;  */

long FUN_10a51389c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      func_0x00010a22dfb0(lVar1 + -0x18,*(undefined8 *)(lVar1 + -0x10));
      lVar1 = lVar1 + -0x18;
    }
  }
  return param_1;
}



/* Entry: 10a51396c; end: 10a5139d7;  */

void FUN_10a51396c(void)

{
  return;
}



/* Entry: 10a5139d8; end: 10a513a5b;  */

void FUN_10a5139d8(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a513a90(uVar2,*(undefined8 *)(param_2 + 0x20));
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



/* Entry: 10a513a5c; end: 10a513a8f;  */

void FUN_10a513a5c(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110beb7e8;
  param_1[1] = &UNK_110beb7b8;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a513a90; end: 10a513b07;  */

undefined1 * FUN_10a513a90(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  
  FUN_10a22d2fc(auStack_38);
  FUN_10a4cab14(auStack_38,param_1);
  puVar1 = auStack_38;
  FUN_10a513b08(puVar1,*param_2,param_2[2]);
  func_0x00010a22dfb0(auStack_38,uStack_30);
  return puVar1;
}



/* Entry: 10a513b08; end: 10a513e57;  */

long FUN_10a513b08(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  double *pdVar9;
  long *plVar10;
  double *pdVar11;
  long *plVar12;
  long *plVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  if (param_1[2] != param_3) {
    return 0;
  }
  plVar12 = (long *)*param_1;
  do {
    if (plVar12 == param_1 + 1) {
      return 1;
    }
    bVar3 = *(byte *)((long)plVar12 + 0x37);
    uVar1 = plVar12[5];
    if (-1 < (char)bVar3) {
      uVar1 = (ulong)bVar3;
    }
    bVar4 = *(byte *)((long)param_2 + 0x37);
    uVar2 = param_2[5];
    if (-1 < (char)bVar4) {
      uVar2 = (ulong)bVar4;
    }
    if (uVar1 != uVar2) {
      return 0;
    }
    plVar13 = (long *)plVar12[4];
    if (-1 < (char)bVar3) {
      plVar13 = plVar12 + 4;
    }
    plVar10 = (long *)param_2[4];
    if (-1 < (char)bVar4) {
      plVar10 = param_2 + 4;
    }
    _memcmp(plVar13,plVar10);
    if ((int)plVar13 != 0) {
      return 0;
    }
    lVar6 = (long)(plVar12 + 7);
    FUN_10a513e58(lVar6,param_2 + 7);
    if ((int)lVar6 == 0) {
      return lVar6;
    }
    if (plVar12[0xf] != param_2[0xf]) {
      return 0;
    }
    plVar13 = plVar12 + 0xe;
    while (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0) {
      plVar10 = plVar13 + 2;
      plVar7 = param_2 + 0xc;
      FUN_10a504900(plVar7,plVar10);
      if (plVar7 == (long *)0x0) {
        return 0;
      }
      bVar3 = *(byte *)((long)plVar13 + 0x27);
      uVar1 = plVar13[3];
      if (-1 < (char)bVar3) {
        uVar1 = (ulong)bVar3;
      }
      bVar4 = *(byte *)((long)plVar7 + 0x27);
      uVar2 = plVar7[3];
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      if (uVar1 != uVar2) {
        return 0;
      }
      plVar8 = (long *)*plVar10;
      if (-1 < (char)bVar3) {
        plVar8 = plVar10;
      }
      plVar10 = (long *)plVar7[2];
      if (-1 < (char)bVar4) {
        plVar10 = plVar7 + 2;
      }
      _memcmp(plVar8,plVar10);
      if ((int)plVar8 != 0) {
        return 0;
      }
      if ((double)plVar13[10] != (double)plVar7[10]) {
        return 0;
      }
      if ((double)plVar13[0xb] != (double)plVar7[0xb]) {
        return 0;
      }
      if ((double)plVar13[0xc] != (double)plVar7[0xc]) {
        return 0;
      }
      func_0x0001093804f0(&dStack_70,plVar13 + 6);
      dVar17 = dStack_58;
      dVar15 = dStack_60;
      dVar14 = dStack_70 * dStack_58;
      dVar16 = dStack_68 * dStack_58;
      func_0x0001093804f0(&dStack_70,plVar7 + 6);
      if (dVar14 != dStack_70 * dStack_58) {
        return 0;
      }
      if (dVar16 != dStack_68 * dStack_58) {
        return 0;
      }
      if (dVar17 * dVar15 != dStack_58 * dStack_60) {
        return 0;
      }
    }
    pdVar9 = (double *)plVar12[0x11];
    pdVar11 = (double *)param_2[0x11];
    if (plVar12[0x12] - plVar12[0x11] != param_2[0x12] - param_2[0x11]) {
      return 0;
    }
    while (pdVar9 != (double *)plVar12[0x12]) {
      dVar15 = *pdVar9;
      dVar17 = *pdVar11;
      pdVar9 = pdVar9 + 1;
      pdVar11 = pdVar11 + 1;
      if (dVar15 != dVar17) {
        return 0;
      }
    }
    pdVar9 = (double *)plVar12[0x14];
    pdVar11 = (double *)param_2[0x14];
    if (plVar12[0x15] - plVar12[0x14] != param_2[0x15] - param_2[0x14]) {
      return 0;
    }
    while (pdVar9 != (double *)plVar12[0x15]) {
      dVar15 = *pdVar9;
      dVar17 = *pdVar11;
      pdVar9 = pdVar9 + 1;
      pdVar11 = pdVar11 + 1;
      if (dVar15 != dVar17) {
        return 0;
      }
    }
    bVar3 = *(byte *)((long)plVar12 + 0xcf);
    uVar1 = plVar12[0x18];
    if (-1 < (char)bVar3) {
      uVar1 = (ulong)bVar3;
    }
    bVar4 = *(byte *)((long)param_2 + 0xcf);
    uVar2 = param_2[0x18];
    if (-1 < (char)bVar4) {
      uVar2 = (ulong)bVar4;
    }
    if (uVar1 != uVar2) {
      return 0;
    }
    plVar13 = (long *)plVar12[0x17];
    if (-1 < (char)bVar3) {
      plVar13 = plVar12 + 0x17;
    }
    plVar10 = (long *)param_2[0x17];
    if (-1 < (char)bVar4) {
      plVar10 = param_2 + 0x17;
    }
    _memcmp(plVar13,plVar10);
    if ((int)plVar13 != 0) {
      return 0;
    }
    if (*(float *)(plVar12 + 0x1a) != *(float *)(param_2 + 0x1a)) {
      return 0;
    }
    if (*(int *)((long)plVar12 + 0xd4) != *(int *)((long)param_2 + 0xd4)) {
      return 0;
    }
    if (*(char *)(plVar12 + 0x1b) != (char)param_2[0x1b]) {
      return 0;
    }
    plVar13 = (long *)plVar12[1];
    plVar10 = plVar12;
    if ((long *)plVar12[1] == (long *)0x0) {
      do {
        plVar12 = (long *)plVar10[2];
        bVar5 = (long *)*plVar12 != plVar10;
        plVar10 = plVar12;
      } while (bVar5);
    }
    else {
      do {
        plVar12 = plVar13;
        plVar13 = (long *)*plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
    }
    plVar13 = (long *)param_2[1];
    plVar10 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar10[2];
        bVar5 = (long *)*param_2 != plVar10;
        plVar10 = param_2;
      } while (bVar5);
    }
    else {
      do {
        param_2 = plVar13;
        plVar13 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  } while( true );
}



/* Entry: 10a513e58; end: 10a513f13;  */

bool FUN_10a513e58(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  if (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)) {
    plVar9 = (long *)(param_1 + 0x10);
    do {
      plVar9 = (long *)*plVar9;
      bVar6 = plVar9 == (long *)0x0;
      if (plVar9 == (long *)0x0) {
        return true;
      }
      plVar3 = plVar9 + 2;
      lVar7 = param_2;
      func_0x0001067e045c(param_2,plVar3);
      if (lVar7 == 0) {
        return bVar6;
      }
      bVar4 = *(byte *)((long)plVar9 + 0x27);
      uVar1 = plVar9[3];
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      bVar5 = *(byte *)(lVar7 + 0x27);
      uVar2 = *(ulong *)(lVar7 + 0x18);
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      if (uVar1 != uVar2) {
        return bVar6;
      }
      plVar8 = (long *)*plVar3;
      if (-1 < (char)bVar4) {
        plVar8 = plVar3;
      }
      plVar3 = (long *)*(long *)(lVar7 + 0x10);
      if (-1 < (char)bVar5) {
        plVar3 = (long *)(lVar7 + 0x10);
      }
      _memcmp(plVar8,plVar3);
    } while ((int)plVar8 == 0);
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}



/* Entry: 10a513f14; end: 10a513f57;  */

void FUN_10a513f14(long param_1,undefined8 param_2,long param_3)

{
  if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a513f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x48))
              (param_2,*(undefined4 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
    return;
  }
  return;
}



/* Entry: 10a513f58; end: 10a51400f;  */

void FUN_10a513f58(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,long param_5,
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
  if (param_5 != 0) {
    lStack_50 = param_1;
    plStack_48 = param_2;
    func_0x0001098af634(&lStack_50,*param_4);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_2,param_3);
    puVar1 = (undefined8 *)0x1137eb208;
    if (*param_2 != -1) {
      puVar1 = (undefined8 *)(param_1 + *param_2);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*(ulong *)(param_6 + 0x10) < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *(ulong *)(param_6 + 0x10) * 8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a514010);
  (*pcVar2)();
}



/* Entry: 10a514010; end: 10a514033;  */

void FUN_10a514010(void)

{
  return;
}



/* Entry: 10a514034; end: 10a514063;  */

void FUN_10a514034(long param_1)

{
  if (param_1 != 0) {
    func_0x00010a22dfb0(param_1,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a514064; end: 10a514067;  */

void FUN_10a514064(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a514068; end: 10a51407b;  */

void FUN_10a514068(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a51407c; end: 10a514083;  */

void FUN_10a51407c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    func_0x00010a22dfb0(lVar1,*(undefined8 *)(lVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a514084; end: 10a5140bb;  */

undefined8 FUN_10a514084(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110beb8d0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a5140bc; end: 10a5140bf;  */

void FUN_10a5140bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5140c0; end: 10a51412f;  */

void FUN_10a5140c0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5)

{
  code *pcVar1;
  long *plVar2;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_40 = param_1;
  uStack_38 = param_2;
  if (param_5 != 0) {
    plVar2 = &lStack_30;
    lStack_30 = param_1;
    uStack_28 = param_2;
    func_0x0001098b9090(plVar2,*param_4);
    if (*plVar2 != 0) {
      FUN_10a4efdc0(&lStack_40,param_3);
      lStack_30 = 0;
      func_0x00010a5026a0();
      func_0x00010a5026a0(&lStack_30,0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a514130);
  (*pcVar1)();
}



/* Entry: 10a514130; end: 10a51414b;  */

void FUN_10a514130(void)

{
  return;
}



/* Entry: 10a51414c; end: 10a5141f3;  */

undefined8 * FUN_10a51414c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110beb908;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a5141f4; end: 10a514433;  */

/* WARNING: Removing unreachable block (ram,0x00010a5143c8) */
/* WARNING: Removing unreachable block (ram,0x00010a5143cc) */
/* WARNING: Removing unreachable block (ram,0x00010a5143d4) */
/* WARNING: Removing unreachable block (ram,0x00010a5143dc) */
/* WARNING: Removing unreachable block (ram,0x00010a5143e0) */

void FUN_10a5141f4(undefined8 *param_1,long param_2,long param_3)

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
  
  puVar5 = (undefined8 *)0x1d8;
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
  *puVar5 = &PTR_FUN_110beb948;
  func_0x0001098bae4c(puVar5,&UNK_10e4be484,0x3b,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x31,in_x7,0,0
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
  *puVar5 = &PTR_FUN_110beb948;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110be9d58;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110beb9b8;
  puVar5[0x25] = &UNK_110beb988;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_FUN_110beb9b8;
  puVar5[0x2b] = &UNK_110beb988;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined2 *)(puVar5 + 0x30) = 0;
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
  *(undefined2 *)(puVar5 + 0x32) = 0;
  puVar5[0x35] = 0x10a514a0c;
  puVar5[0x36] = &UNK_110bb9fa0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x31] = &PTR_DAT_110beb9f8;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x3a] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x181) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a514434; end: 10a5144ef;  */

undefined8 * FUN_10a514434(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110beb948;
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110be9d58;
  FUN_10a4fe398(param_1 + 0x21);
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



/* Entry: 10a5144f0; end: 10a5144f3;  */

void FUN_10a5144f0(void)

{
  return;
}



/* Entry: 10a5144f4; end: 10a51467b;  */

uint FUN_10a5144f4(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puStack_50;
  long *plStack_48;
  
  lVar10 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar10 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  puVar7 = (undefined8 *)0x38;
  __Znwm();
  lVar9 = *(long *)(param_1 + 0x108);
  lVar3 = *(long *)(param_1 + 0x110);
  *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(lVar9 + 8);
  *puVar7 = &PTR_FUN_110bef348;
  FUN_10a22ec14(puVar7 + 2,lVar9 + 0x10);
  while (lVar9 + 0x38 != lVar3) {
    FUN_10a4d87e4(puVar7,*(undefined8 *)(lVar9 + 0x58));
    lVar9 = lVar9 + 0x38;
  }
  plVar8 = (long *)0x20;
  puStack_50 = puVar7;
  __Znwm();
  *plVar8 = (long)&PTR_DAT_110beba28;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = (long)puVar7;
  plStack_48 = plVar8;
  FUN_10a286fec(lVar2 + 0x20,&puStack_50);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lVar10 == 0) {
    uVar6 = 1;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x20) + 0x10;
    FUN_10a28beec(lVar10,*(long *)(lVar2 + 0x20) + 0x10);
    uVar6 = (uint)lVar10 ^ 1;
  }
  return uVar6;
}



/* Entry: 10a51467c; end: 10a5148d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a5147e4) */
/* WARNING: Removing unreachable block (ram,0x00010a5147e8) */
/* WARNING: Removing unreachable block (ram,0x00010a5147f0) */
/* WARNING: Removing unreachable block (ram,0x00010a5147f8) */
/* WARNING: Removing unreachable block (ram,0x00010a514804) */
/* WARNING: Removing unreachable block (ram,0x00010a51480c) */
/* WARNING: Removing unreachable block (ram,0x00010a514814) */
/* WARNING: Removing unreachable block (ram,0x00010a514818) */

void FUN_10a51467c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_2 + 0x70);
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar6 = puVar5 + 3;
  *(undefined2 *)puVar6 = 4;
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
  puVar5[0x11] = puVar6;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  puStack_b0 = puVar5;
  if ((*(byte *)(param_2 + 0x181) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a514858);
    (*pcVar4)();
  }
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  uStack_8c = 0x20000000;
  FUN_10a26ebc0(&lStack_a8,0,&uStack_8c,&pcStack_88,1);
  pcStack_88 = FUN_10a514ac0;
  appuStack_80[0] = &PTR_FUN_110beba78;
  param_2 = param_2 + 0x18;
  FUN_10a4f1bf0(param_2,&pcStack_88,&lStack_a8);
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  plVar1 = puVar5 + 2;
  *(int *)(lVar9 + 0x10) = (int)param_2;
  do {
    lVar9 = *plVar1;
    if (lVar9 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar6);
        goto LAB_10a5147c4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_10a5147c4:
      while( true ) {
        *param_1 = puVar5;
        puVar6 = puVar5;
        func_0x0001092b4274(&puStack_b0);
        lVar9 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return;
        }
        ___stack_chk_fail();
        if ((int)puVar6 == 0) break;
        (*(code *)*appuStack_80[0])(appuStack_80);
        if (lStack_a8 != 0) {
          lStack_a0 = lStack_a8;
          __ZdlPv();
        }
        ___cxa_begin_catch(lVar9);
        __ZSt17current_exceptionv(&pcStack_88);
        func_0x000109d1b350(puVar5,&pcStack_88);
        __ZNSt13exception_ptrD1Ev(&pcStack_88);
        ___cxa_end_catch();
      }
      __Unwind_Resume(lVar9);
      func_0x000104bd46a0();
      uVar7 = *(undefined8 *)(lVar9 + 8);
      *puVar6 = &PTR____cxa_pure_virtual_110b17f40;
      puVar6[1] = uVar7;
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(lVar9 + 0x18);
      puVar6[2] = uVar7;
      *puVar6 = &PTR_FUN_110beb9b8;
      lVar8 = *(long *)(lVar9 + 0x28);
      uVar7 = *(undefined8 *)(lVar9 + 0x20);
      puVar6[5] = *(undefined8 *)(lVar9 + 0x28);
      puVar6[4] = uVar7;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
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
  } while( true );
}



/* Entry: 10a5148d8; end: 10a51492b;  */

void FUN_10a5148d8(long param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_110beb9b8;
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



/* Entry: 10a51492c; end: 10a5149af;  */

void FUN_10a51492c(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a4fe428(uVar2,*(undefined8 *)(param_2 + 0x20));
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



/* Entry: 10a5149b0; end: 10a514a2b;  */

void FUN_10a5149b0(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110beb9b8;
  param_1[1] = &UNK_110beb988;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a514a2c; end: 10a514a3f;  */

void FUN_10a514a2c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a514a40; end: 10a514abb;  */

void FUN_10a514a40(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_110bef348;
    func_0x00010a22fc28(puVar1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a514abc; end: 10a514abf;  */

void FUN_10a514abc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a514ac0; end: 10a514b33;  */

void FUN_10a514ac0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar2 = &lStack_40;
  lStack_40 = param_1;
  uStack_38 = param_2;
  if (param_5 != 0) {
    plVar3 = &lStack_30;
    lStack_30 = param_1;
    uStack_28 = param_2;
    func_0x0001098b9090(plVar3,*param_4);
    if (*plVar3 != 0) {
      func_0x00010a2926e4(&lStack_40,param_3);
      plVar3 = (long *)*plVar2;
      *plVar2 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a514b34);
  (*pcVar1)();
}



/* Entry: 10a514b34; end: 10a514b4f;  */

void FUN_10a514b34(void)

{
  return;
}



/* Entry: 10a514b50; end: 10a514bf7;  */

undefined8 * FUN_10a514b50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bebaa0;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a514bf8; end: 10a514e37;  */

/* WARNING: Removing unreachable block (ram,0x00010a514dcc) */
/* WARNING: Removing unreachable block (ram,0x00010a514dd0) */
/* WARNING: Removing unreachable block (ram,0x00010a514dd8) */
/* WARNING: Removing unreachable block (ram,0x00010a514de0) */
/* WARNING: Removing unreachable block (ram,0x00010a514de4) */

void FUN_10a514bf8(undefined8 *param_1,long param_2,long param_3)

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
  
  puVar5 = (undefined8 *)0x1d8;
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
  *puVar5 = &PTR_FUN_110bebae0;
  func_0x0001098bae4c(puVar5,&UNK_10e4be7f1,0x34,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x31,in_x7,0,0
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
  *puVar5 = &PTR_FUN_110bebae0;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bba340;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110bebb50;
  puVar5[0x25] = &UNK_110bebb20;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_FUN_110bebb50;
  puVar5[0x2b] = &UNK_110bebb20;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined2 *)(puVar5 + 0x30) = 0;
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
  *(undefined2 *)(puVar5 + 0x32) = 0;
  puVar5[0x35] = 0x10a515458;
  puVar5[0x36] = &UNK_110bba3c8;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x31] = &PTR_DAT_110bebb90;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x3a] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x181) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a514e38; end: 10a514f1b;  */

void FUN_10a514e38(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bebae0;
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110bba340;
  puStack_28 = param_1 + 0x21;
  FUN_10a28d628(&puStack_28);
  func_0x0001098bba44(param_1 + 0x19);
  func_0x0001098ac370(param_1);
  return;
}



/* Entry: 10a514f1c; end: 10a514f1f;  */

void FUN_10a514f1c(void)

{
  return;
}



/* Entry: 10a514f20; end: 10a5150c7;  */

uint FUN_10a514f20(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puStack_68;
  long *plStack_60;
  
  lVar13 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar13 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  puVar8 = (undefined8 *)0x18;
  __Znwm();
  lVar12 = *(long *)(param_1 + 0x108);
  lVar3 = *(long *)(param_1 + 0x110);
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  FUN_10a22fc9c();
  if (lVar3 - lVar12 != 0x18) {
    lVar4 = lVar12 + 0x18;
    do {
      lVar11 = lVar4;
      lVar4 = *(long *)(lVar12 + 0x20);
      for (lVar12 = *(long *)(lVar12 + 0x18); lVar12 != lVar4; lVar12 = lVar12 + 0x58) {
        func_0x00010aad008c(puVar8,lVar12);
      }
      lVar4 = lVar11 + 0x18;
      lVar12 = lVar11;
    } while (lVar4 != lVar3);
  }
  plVar9 = (long *)0x20;
  puStack_68 = puVar8;
  __Znwm();
  *plVar9 = (long)&PTR_FUN_110bebbc0;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)puVar8;
  plStack_60 = plVar9;
  FUN_10a286fec(lVar2 + 0x20,&puStack_68);
  plVar9 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (lVar13 == 0) {
    uVar7 = 1;
  }
  else {
    uVar10 = *(undefined8 *)(lVar13 + 0x20);
    func_0x00010aacffc4(uVar10,*(undefined8 *)(lVar2 + 0x20));
    uVar7 = (uint)uVar10 ^ 1;
  }
  return uVar7;
}



/* Entry: 10a5150c8; end: 10a515323;  */

/* WARNING: Removing unreachable block (ram,0x00010a515230) */
/* WARNING: Removing unreachable block (ram,0x00010a515234) */
/* WARNING: Removing unreachable block (ram,0x00010a51523c) */
/* WARNING: Removing unreachable block (ram,0x00010a515244) */
/* WARNING: Removing unreachable block (ram,0x00010a515250) */
/* WARNING: Removing unreachable block (ram,0x00010a515258) */
/* WARNING: Removing unreachable block (ram,0x00010a515260) */
/* WARNING: Removing unreachable block (ram,0x00010a515264) */

void FUN_10a5150c8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_2 + 0x70);
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar6 = puVar5 + 3;
  *(undefined2 *)puVar6 = 4;
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
  puVar5[0x11] = puVar6;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  puStack_b0 = puVar5;
  if ((*(byte *)(param_2 + 0x181) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5152a4);
    (*pcVar4)();
  }
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  uStack_8c = 0x20000000;
  FUN_10a26ebc0(&lStack_a8,0,&uStack_8c,&pcStack_88,1);
  pcStack_88 = FUN_10a515618;
  appuStack_80[0] = &PTR_FUN_110bebc10;
  param_2 = param_2 + 0x18;
  FUN_10a51550c(param_2,&pcStack_88,&lStack_a8);
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  plVar1 = puVar5 + 2;
  *(int *)(lVar9 + 0x10) = (int)param_2;
  do {
    lVar9 = *plVar1;
    if (lVar9 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar6);
        goto LAB_10a515210;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_10a515210:
      while( true ) {
        *param_1 = puVar5;
        puVar6 = puVar5;
        func_0x0001092b4274(&puStack_b0);
        lVar9 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return;
        }
        ___stack_chk_fail();
        if ((int)puVar6 == 0) break;
        (*(code *)*appuStack_80[0])(appuStack_80);
        if (lStack_a8 != 0) {
          lStack_a0 = lStack_a8;
          __ZdlPv();
        }
        ___cxa_begin_catch(lVar9);
        __ZSt17current_exceptionv(&pcStack_88);
        func_0x000109d1b350(puVar5,&pcStack_88);
        __ZNSt13exception_ptrD1Ev(&pcStack_88);
        ___cxa_end_catch();
      }
      __Unwind_Resume(lVar9);
      func_0x000104bd46a0();
      uVar7 = *(undefined8 *)(lVar9 + 8);
      *puVar6 = &PTR____cxa_pure_virtual_110b17f40;
      puVar6[1] = uVar7;
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(lVar9 + 0x18);
      puVar6[2] = uVar7;
      *puVar6 = &PTR_FUN_110bebb50;
      lVar8 = *(long *)(lVar9 + 0x28);
      uVar7 = *(undefined8 *)(lVar9 + 0x20);
      puVar6[5] = *(undefined8 *)(lVar9 + 0x28);
      puVar6[4] = uVar7;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
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
  } while( true );
}



/* Entry: 10a515324; end: 10a515377;  */

void FUN_10a515324(long param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_110bebb50;
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



/* Entry: 10a515378; end: 10a5153fb;  */

void FUN_10a515378(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a28dadc(uVar2,*(undefined8 *)(param_2 + 0x20));
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



/* Entry: 10a5153fc; end: 10a515473;  */

void FUN_10a5153fc(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bebb50;
  param_1[1] = &UNK_110bebb20;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a515474; end: 10a5154af;  */

void FUN_10a515474(long param_1)

{
  long lStack_28;
  
  if (param_1 != 0) {
    lStack_28 = param_1;
    FUN_10a22ff44(&lStack_28);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 10a5154b0; end: 10a5154b3;  */

void FUN_10a5154b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a5154b4; end: 10a5154c7;  */

void FUN_10a5154b4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5154c8; end: 10a5154cf;  */

void FUN_10a5154c8(long param_1)

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



/* Entry: 10a5154d0; end: 10a515507;  */

undefined8 FUN_10a5154d0(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bebc00);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a515508; end: 10a51550b;  */

void FUN_10a515508(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


