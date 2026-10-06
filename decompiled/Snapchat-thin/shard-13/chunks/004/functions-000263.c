/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a519d9c; end: 10a519df7;  */

void FUN_10a519d9c(long param_1,int param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_2;
  lVar4 = *(long *)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x48);
  uVar1 = lVar3 - lVar4 >> 3;
  if (uVar5 + 1 != uVar1) {
    if ((lVar4 == lVar3) || (uVar1 <= uVar5)) goto LAB_10a519df4;
    *(undefined8 *)(lVar4 + uVar5 * 8) = *(undefined8 *)(lVar3 + -8);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar3 = *(long *)(param_1 + 0x48);
    if ((ulong)(lVar3 - lVar4 >> 3) <= uVar5) goto LAB_10a519df4;
  }
  if (lVar4 != lVar3) {
    *(long *)(param_1 + 0x48) = lVar3 + -8;
    return;
  }
LAB_10a519df4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a519df8);
  (*pcVar2)();
}



/* Entry: 10a519df8; end: 10a519e6f;  */

undefined8 * FUN_10a519df8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bec540;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a519e70; end: 10a519fe3;  */

void FUN_10a519e70(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3);
  lVar3 = lStack_98 - lStack_a0;
  if (lVar3 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar6) {
LAB_10a519fa0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a519fa4);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4bf94d,0x22,*(long *)(param_1 + 8) + lVar5,2,1);
      if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar6) goto LAB_10a519fa0;
      *(int *)(lStack_a0 + uVar6 * 4) = (int)plVar2;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (lVar3 >> 2 != uVar6);
  }
  pcStack_88 = FUN_10a51a02c;
  appuStack_80[0] = &PTR_DAT_110bec570;
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
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar4 >> 0x3d == 0) {
    __Znwm((long)puVar4 << 3);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a519fe4; end: 10a519ff7;  */

void FUN_10a519fe4(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3d == 0) {
    __Znwm((long)puVar1 << 3);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a519ff8; end: 10a51a02b;  */

void FUN_10a519ff8(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a51a02c; end: 10a51a083;  */

void FUN_10a51a02c(void)

{
  return;
}



/* Entry: 10a51a084; end: 10a51a133;  */

void FUN_10a51a084(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uStack_14;
  
  if (((*(byte *)(param_3 + 0x24) & 1) == 0) || ((*(byte *)(param_2 + 0x24) & 1) == 0)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a51a134);
    (*pcVar4)();
  }
  uVar6 = *(ulong *)(param_3 + 0x1c);
  uVar5 = *(ulong *)(param_2 + 0x1c);
  uVar2 = uVar6 >> 0x20;
  if ((uVar6 >> 0x20 & 1) == 0) {
    uVar2 = uVar5 >> 0x20;
  }
  if (((uVar5 & uVar2 << 0x20) >> 0x20 & 1) == 0) {
    if (((uVar2 << 0x20 ^ uVar5) >> 0x20 & 1) != 0) goto LAB_10a51a0f0;
  }
  else {
    fVar1 = (float)uVar6;
    if ((uVar6 & 0x100000000) == 0) {
      fVar1 = (float)uVar5;
    }
    if (fVar1 != (float)uVar5) {
LAB_10a51a0f0:
      uStack_14 = 0x40000000;
      goto LAB_10a51a0f4;
    }
  }
  lVar3 = 0x10;
  if (param_4 != 0) {
    lVar3 = 0x18;
  }
  uStack_14 = *(undefined4 *)(param_2 + lVar3);
LAB_10a51a0f4:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
  return;
}



/* Entry: 10a51a134; end: 10a51a1b3;  */

void FUN_10a51a134(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110bec5b8;
  param_1[1] = &UNK_110bec588;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}



/* Entry: 10a51a1b4; end: 10a51a26b;  */

void FUN_10a51a1b4(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,long param_5,
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
    puVar1 = (undefined8 *)0x1137eb220;
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a51a26c);
  (*pcVar2)();
}



/* Entry: 10a51a26c; end: 10a51a28f;  */

void FUN_10a51a26c(void)

{
  return;
}



/* Entry: 10a51a290; end: 10a51a2fb;  */

void FUN_10a51a290(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
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
      FUN_10a4f8f34(&lStack_40,param_3);
      lVar4 = *plVar3;
      *plVar3 = 0;
      if (lVar4 != 0) {
        func_0x00010a5026e4();
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51a2fc);
  (*pcVar1)();
}



/* Entry: 10a51a2fc; end: 10a51a317;  */

void FUN_10a51a2fc(void)

{
  return;
}



/* Entry: 10a51a318; end: 10a51a3bf;  */

undefined8 * FUN_10a51a318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bec678;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a51a3c0; end: 10a51a5ff;  */

/* WARNING: Removing unreachable block (ram,0x00010a51a594) */
/* WARNING: Removing unreachable block (ram,0x00010a51a598) */
/* WARNING: Removing unreachable block (ram,0x00010a51a5a0) */
/* WARNING: Removing unreachable block (ram,0x00010a51a5a8) */
/* WARNING: Removing unreachable block (ram,0x00010a51a5ac) */

void FUN_10a51a3c0(undefined8 *param_1,long param_2,long param_3)

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
  *puVar5 = &PTR_FUN_110bec6b8;
  func_0x0001098bae4c(puVar5,&UNK_10e4bfd0a,0x43,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x31,in_x7,0,0
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
  *puVar5 = &PTR_FUN_110bec6b8;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bec708;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110bec7c0;
  puVar5[0x25] = &UNK_110bec790;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_DAT_110bec7c0;
  puVar5[0x2b] = &UNK_110bec790;
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
  puVar5[0x35] = 0x10a51b56c;
  puVar5[0x36] = &UNK_110bec820;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x31] = &PTR_FUN_110bec800;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x3a] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x181) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a51a600; end: 10a51a6bb;  */

undefined8 * FUN_10a51a600(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110bec6b8;
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110bec708;
  FUN_10a51b1ec(param_1 + 0x21);
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



/* Entry: 10a51a6bc; end: 10a51a6bf;  */

void FUN_10a51a6bc(void)

{
  return;
}



/* Entry: 10a51a6c0; end: 10a51a86f;  */

uint FUN_10a51a6c0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 *puStack_58;
  long *plStack_50;
  
  lVar12 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar12 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  puVar7 = (undefined1 *)0x40;
  __Znwm();
  puVar10 = *(undefined1 **)(param_1 + 0x108);
  puVar3 = *(undefined1 **)(param_1 + 0x110);
  *puVar7 = *puVar10;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  FUN_10a2300f4(puVar7 + 8,*(long *)(puVar10 + 8),*(long *)(puVar10 + 0x10),
                (*(long *)(puVar10 + 0x10) - *(long *)(puVar10 + 8) >> 3) * 0x6db6db6db6db6db7);
  FUN_10a1ccb30(puVar7 + 0x20,puVar10 + 0x20);
  while (puVar10 = puVar10 + 0x40, puVar10 != puVar3) {
    FUN_10acf2a70(puVar7);
  }
  plVar8 = (long *)0x20;
  puStack_58 = puVar7;
  __Znwm();
  *plVar8 = (long)&PTR_FUN_110bec868;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = (long)puVar7;
  plStack_50 = plVar8;
  FUN_10a286fec(lVar2 + 0x20,&puStack_58);
  plVar8 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lVar12 == 0) {
    uVar6 = 1;
  }
  else {
    uVar9 = *(undefined8 *)(lVar12 + 0x20);
    FUN_10a51b468(uVar9,*(undefined8 *)(lVar2 + 0x20));
    uVar6 = (uint)uVar9 ^ 1;
  }
  return uVar6;
}



/* Entry: 10a51a870; end: 10a51ab37;  */

/* WARNING: Removing unreachable block (ram,0x00010a51aa20) */
/* WARNING: Removing unreachable block (ram,0x00010a51aa24) */
/* WARNING: Removing unreachable block (ram,0x00010a51aa2c) */
/* WARNING: Removing unreachable block (ram,0x00010a51aa34) */
/* WARNING: Removing unreachable block (ram,0x00010a51aa40) */
/* WARNING: Removing unreachable block (ram,0x00010a51aa48) */
/* WARNING: Removing unreachable block (ram,0x00010a51aa50) */
/* WARNING: Removing unreachable block (ram,0x00010a51aa54) */

void FUN_10a51a870(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *extraout_x8;
  long lVar12;
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
  lVar12 = *(long *)(param_2 + 0x70);
  puVar9 = (undefined8 *)0xa0;
  __Znwm();
  puVar11 = puVar9 + 3;
  *(undefined2 *)puVar11 = 4;
  puVar9[2] = 0;
  puVar9[1] = 0x200000006;
  puVar9[5] = 0;
  puVar9[4] = 0;
  puVar9[7] = 0;
  puVar9[6] = 0;
  puVar9[9] = 0;
  puVar9[8] = 0;
  puVar9[0xb] = 0;
  puVar9[10] = 0;
  puVar9[0xd] = 0;
  puVar9[0xc] = 0;
  puVar9[0xf] = 0;
  puVar9[0xe] = 0;
  puVar9[0x10] = 0;
  puVar9[0x11] = puVar11;
  puVar9[0x12] = 0;
  *puVar9 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar9 + 0x13) = 0;
  puStack_118 = puVar9;
  if ((*(byte *)(param_2 + 0x181) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a51aa98);
    (*pcVar8)();
  }
  lStack_110 = 0;
  lStack_108 = 0;
  uStack_100 = 0;
  uStack_98 = (code *)CONCAT44(uStack_98._4_4_,0x20000000);
  FUN_10a26ebc0(&lStack_110,0,&uStack_98,(long)&uStack_98 + 4,1);
  pcStack_d8 = FUN_10a51b78c;
  appuStack_d0[0] = &PTR_FUN_110bec8b8;
  uStack_98 = FUN_10a51b78c;
  appuStack_90[0] = &PTR_FUN_110bec8b8;
  lStack_e8 = lStack_108;
  lStack_f0 = lStack_110;
  uStack_e0 = uStack_100;
  lStack_110 = 0;
  lStack_108 = 0;
  uStack_100 = 0;
  param_2 = param_2 + 0x18;
  func_0x0001098aeecc(param_2,&uStack_98,&UNK_110bef5f8,&lStack_f0);
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
  plVar1 = puVar9 + 2;
  *(int *)(lVar12 + 0x10) = (int)param_2;
  do {
    lVar12 = *plVar1;
    if (lVar12 == 0) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = 2;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        FUN_109d1b4dc(puVar11);
        goto LAB_10a51aa00;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar12 >> 1 & 1) != 0) {
LAB_10a51aa00:
      while( true ) {
        *param_1 = puVar9;
        puVar11 = puVar9;
        func_0x0001092b4274(&puStack_118);
        lVar12 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          return;
        }
        ___stack_chk_fail();
        if ((int)puVar11 == 0) break;
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
        ___cxa_begin_catch(lVar12);
        __ZSt17current_exceptionv(&pcStack_d8);
        func_0x000109d1b350(puVar9,&pcStack_d8);
        __ZNSt13exception_ptrD1Ev(&pcStack_d8);
        ___cxa_end_catch();
      }
      __Unwind_Resume(lVar12);
      func_0x000104bd46a0();
      puVar9 = (undefined8 *)0x20;
      __Znwm();
      puVar9[1] = 0;
      *puVar9 = &PTR_FUN_110bec748;
      puVar9[2] = 0;
      puVar9[3] = 0;
      lVar4 = *(long *)(lVar12 + 0x40);
      puVar5 = *(undefined1 **)(lVar12 + 0x48);
      lVar12 = (long)puVar5 - lVar4;
      if (lVar12 != 0) {
        uVar10 = lVar12 >> 6;
        if (uVar10 >> 0x3a != 0) {
          FUN_10a51b154();
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a51ac44);
          (*pcVar8)();
        }
        FUN_10a51b168();
        lVar12 = 0;
        puVar9[1] = uVar10;
        puVar9[2] = uVar10;
        puVar9[3] = uVar10 + (long)puVar11 * 0x40;
        do {
          puVar2 = (undefined1 *)(lVar4 + lVar12);
          puVar3 = (undefined1 *)(uVar10 + lVar12);
          *puVar3 = *puVar2;
          *(undefined8 *)(puVar3 + 8) = 0;
          *(undefined8 *)(puVar3 + 0x10) = 0;
          *(undefined8 *)(puVar3 + 0x18) = 0;
          FUN_10a2300f4();
          FUN_10a1ccb30(puVar3 + 0x20,puVar2 + 0x20);
          lVar12 = lVar12 + 0x40;
        } while (puVar2 + 0x40 != puVar5);
        puVar9[2] = uVar10 + lVar12;
      }
      *extraout_x8 = puVar9;
      return;
    }
  } while( true );
}



/* Entry: 10a51ab38; end: 10a51acb7;  */

void FUN_10a51ab38(undefined8 *param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  
  puVar6 = (undefined8 *)0x20;
  __Znwm();
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_110bec748;
  puVar6[2] = 0;
  puVar6[3] = 0;
  lVar3 = *(long *)(param_2 + 0x40);
  puVar4 = *(undefined1 **)(param_2 + 0x48);
  lVar8 = (long)puVar4 - lVar3;
  if (lVar8 != 0) {
    uVar7 = lVar8 >> 6;
    if (uVar7 >> 0x3a != 0) {
      FUN_10a51b154();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a51ac44);
      (*pcVar5)();
    }
    FUN_10a51b168();
    lVar8 = 0;
    puVar6[1] = uVar7;
    puVar6[2] = uVar7;
    puVar6[3] = uVar7 + param_3 * 0x40;
    do {
      puVar1 = (undefined1 *)(lVar3 + lVar8);
      puVar2 = (undefined1 *)(uVar7 + lVar8);
      *puVar2 = *puVar1;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(undefined8 *)(puVar2 + 0x10) = 0;
      *(undefined8 *)(puVar2 + 0x18) = 0;
      FUN_10a2300f4();
      FUN_10a1ccb30(puVar2 + 0x20,puVar1 + 0x20);
      lVar8 = lVar8 + 0x40;
    } while (puVar1 + 0x40 != puVar4);
    puVar6[2] = uVar7 + lVar8;
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 10a51acb8; end: 10a51aec7;  */

void FUN_10a51acb8(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar13 = *(undefined1 **)(param_1 + 0x48);
  if (puVar13 < *(undefined1 **)(param_1 + 0x50)) {
    *puVar13 = *param_2;
    *(undefined8 *)(puVar13 + 0x10) = 0;
    *(undefined8 *)(puVar13 + 0x18) = 0;
    *(undefined8 *)(puVar13 + 8) = 0;
    uVar14 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar13 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(puVar13 + 8) = uVar14;
    *(undefined8 *)(puVar13 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    puVar13[0x20] = 0;
    puVar13[0x38] = 0;
    if (param_2[0x38] == '\x01') {
      uVar15 = *(undefined8 *)(param_2 + 0x28);
      uVar14 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(puVar13 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(puVar13 + 0x28) = uVar15;
      *(undefined8 *)(puVar13 + 0x20) = uVar14;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      puVar13[0x38] = 1;
    }
    puVar13 = puVar13 + 0x40;
LAB_10a51aeac:
    *(undefined1 **)(param_1 + 0x48) = puVar13;
    return;
  }
  lVar12 = (long)puVar13 - *(long *)(param_1 + 0x40);
  uVar1 = (lVar12 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    uVar9 = (long)*(undefined1 **)(param_1 + 0x50) - *(long *)(param_1 + 0x40);
    uVar10 = (long)uVar9 >> 5;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar9) {
      uVar10 = 0x3ffffffffffffff;
    }
    puVar7 = param_2;
    FUN_10a51b168();
    puVar2 = (undefined1 *)(uVar10 + lVar12);
    *puVar2 = *param_2;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    uVar14 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(puVar2 + 8) = uVar14;
    *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    puVar2[0x20] = 0;
    puVar2[0x38] = 0;
    if (param_2[0x38] == '\x01') {
      uVar15 = *(undefined8 *)(param_2 + 0x28);
      uVar14 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(puVar2 + 0x28) = uVar15;
      *(undefined8 *)(puVar2 + 0x20) = uVar14;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      puVar2[0x38] = 1;
    }
    puVar13 = puVar2 + 0x40;
    puVar11 = *(undefined1 **)(param_1 + 0x40);
    puVar5 = *(undefined1 **)(param_1 + 0x48);
    lVar12 = (long)puVar11 - (long)puVar5;
    if (puVar5 != puVar11) {
      lVar8 = 0;
      do {
        puVar3 = puVar11 + lVar8;
        puVar4 = puVar2 + lVar12 + lVar8;
        *puVar4 = *puVar3;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        uVar14 = *(undefined8 *)(puVar3 + 8);
        *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(puVar3 + 0x10);
        *(undefined8 *)(puVar4 + 8) = uVar14;
        *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(puVar3 + 0x18);
        *(undefined8 *)(puVar3 + 8) = 0;
        *(undefined8 *)(puVar3 + 0x10) = 0;
        *(undefined8 *)(puVar3 + 0x18) = 0;
        puVar4[0x20] = 0;
        puVar4[0x38] = 0;
        if (puVar3[0x38] == '\x01') {
          uVar15 = *(undefined8 *)(puVar3 + 0x28);
          uVar14 = *(undefined8 *)(puVar3 + 0x20);
          *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(puVar3 + 0x30);
          *(undefined8 *)(puVar4 + 0x28) = uVar15;
          *(undefined8 *)(puVar4 + 0x20) = uVar14;
          *(undefined8 *)(puVar3 + 0x28) = 0;
          *(undefined8 *)(puVar3 + 0x30) = 0;
          *(undefined8 *)(puVar3 + 0x20) = 0;
          puVar4[0x38] = 1;
        }
        lVar8 = lVar8 + 0x40;
      } while (puVar3 + 0x40 != puVar5);
      do {
        func_0x00010a51b19c(puVar11);
        puVar11 = puVar11 + 0x40;
      } while (puVar11 != puVar5);
      puVar11 = *(undefined1 **)(param_1 + 0x40);
    }
    *(undefined1 **)(param_1 + 0x40) = puVar2 + lVar12;
    *(undefined1 **)(param_1 + 0x48) = puVar13;
    *(ulong *)(param_1 + 0x50) = uVar10 + (long)puVar7 * 0x40;
    if (puVar11 != (undefined1 *)0x0) {
      __ZdlPv(puVar11);
    }
    goto LAB_10a51aeac;
  }
  FUN_10a51b154();
  uVar10 = (ulong)(int)param_2;
  lVar12 = *(long *)(param_1 + 0x40);
  lVar8 = *(long *)(param_1 + 0x48);
  uVar1 = lVar8 - lVar12 >> 6;
  if (uVar10 + 1 != uVar1) {
    if ((lVar12 == lVar8) || (uVar1 <= uVar10)) goto LAB_10a51af78;
    puVar13 = (undefined1 *)(lVar12 + uVar10 * 0x40);
    *puVar13 = *(undefined1 *)(lVar8 + -0x40);
    FUN_10a2319d4(puVar13 + 8);
    uVar14 = *(undefined8 *)(lVar8 + -0x38);
    *(undefined8 *)(puVar13 + 0x10) = *(undefined8 *)(lVar8 + -0x30);
    *(undefined8 *)(puVar13 + 8) = uVar14;
    *(undefined8 *)(puVar13 + 0x18) = *(undefined8 *)(lVar8 + -0x28);
    *(undefined8 *)(lVar8 + -0x38) = 0;
    *(undefined8 *)(lVar8 + -0x30) = 0;
    *(undefined8 *)(lVar8 + -0x28) = 0;
    func_0x00010a20a7e0(puVar13 + 0x20,lVar8 + -0x20);
    lVar12 = *(long *)(param_1 + 0x40);
    lVar8 = *(long *)(param_1 + 0x48);
    if ((ulong)(lVar8 - lVar12 >> 6) <= uVar10) goto LAB_10a51af78;
  }
  if (lVar12 != lVar8) {
    func_0x00010a51b19c(lVar8 + -0x40);
    *(long *)(param_1 + 0x48) = lVar8 + -0x40;
    return;
  }
LAB_10a51af78:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a51af7c);
  (*pcVar6)();
}



/* Entry: 10a51aec8; end: 10a51af7f;  */

void FUN_10a51aec8(long param_1,int param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar6 = (ulong)param_2;
  lVar4 = *(long *)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x48);
  uVar1 = lVar5 - lVar4 >> 6;
  if (uVar6 + 1 != uVar1) {
    if ((lVar4 == lVar5) || (uVar1 <= uVar6)) goto LAB_10a51af78;
    puVar2 = (undefined1 *)(lVar4 + uVar6 * 0x40);
    *puVar2 = *(undefined1 *)(lVar5 + -0x40);
    FUN_10a2319d4(puVar2 + 8);
    uVar7 = *(undefined8 *)(lVar5 + -0x38);
    *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(lVar5 + -0x30);
    *(undefined8 *)(puVar2 + 8) = uVar7;
    *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(lVar5 + -0x28);
    *(undefined8 *)(lVar5 + -0x38) = 0;
    *(undefined8 *)(lVar5 + -0x30) = 0;
    *(undefined8 *)(lVar5 + -0x28) = 0;
    func_0x00010a20a7e0(puVar2 + 0x20,lVar5 + -0x20);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x48);
    if ((ulong)(lVar5 - lVar4 >> 6) <= uVar6) goto LAB_10a51af78;
  }
  if (lVar4 != lVar5) {
    func_0x00010a51b19c(lVar5 + -0x40);
    *(long *)(param_1 + 0x48) = lVar5 + -0x40;
    return;
  }
LAB_10a51af78:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a51af7c);
  (*pcVar3)();
}



/* Entry: 10a51af80; end: 10a51afdf;  */

undefined8 * FUN_10a51af80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bec748;
  FUN_10a51b1ec(param_1 + 1);
  return param_1;
}



/* Entry: 10a51afe0; end: 10a51b153;  */

void FUN_10a51afe0(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puStack_f8;
  code **ppcStack_f0;
  undefined1 **ppuStack_e0;
  undefined8 uStack_d8;
  code **ppcStack_d0;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 6);
  lVar3 = lStack_98 - lStack_a0;
  if (lVar3 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 6) <= uVar6) {
LAB_10a51b110:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51b114);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4bfc14,0x2e,*(long *)(param_1 + 8) + lVar5,2,1);
      if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar6) goto LAB_10a51b110;
      *(int *)(lStack_a0 + uVar6 * 4) = (int)plVar2;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x40;
    } while (lVar3 >> 2 != uVar6);
  }
  pcStack_88 = FUN_10a51b254;
  appuStack_80[0] = &PTR_DAT_110bec778;
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
  pcStack_a8 = FUN_10a51b154;
  puVar4 = &DAT_10f62a4d8;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_b8 = FUN_10a51b168;
  ppuStack_e0 = &puStack_c0;
  ppcStack_d0 = &pcStack_88;
  if ((ulong)puVar4 >> 0x3a == 0) {
    puStack_c0 = (undefined1 *)&puStack_b0;
    __Znwm((long)puVar4 << 6);
    return;
  }
  puStack_c0 = (undefined1 *)&puStack_b0;
  func_0x000109ffded8();
  uStack_d8 = 0x10a51b19c;
  ppcStack_f0 = &pcStack_88;
  if ((puVar4[0x38] == '\x01') && ((char)puVar4[0x37] < '\0')) {
    __ZdlPv(*(undefined8 *)(puVar4 + 0x20));
  }
  puStack_f8 = puVar4 + 8;
  FUN_10a2303d4(&puStack_f8);
  return;
}



/* Entry: 10a51b154; end: 10a51b167;  */

void FUN_10a51b154(void)

{
  undefined *puVar1;
  undefined *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3a == 0) {
    __Znwm((long)puVar1 << 6);
    return;
  }
  func_0x000109ffded8();
  if ((puVar1[0x38] == '\x01') && ((char)puVar1[0x37] < '\0')) {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x20));
  }
  puStack_58 = puVar1 + 8;
  FUN_10a2303d4(&puStack_58);
  return;
}



/* Entry: 10a51b168; end: 10a51b1eb;  */

void FUN_10a51b168(ulong param_1)

{
  long lStack_48;
  
  if (param_1 >> 0x3a == 0) {
    __Znwm(param_1 << 6);
    return;
  }
  func_0x000109ffded8();
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(char *)(param_1 + 0x37) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  lStack_48 = param_1 + 8;
  FUN_10a2303d4(&lStack_48);
  return;
}



/* Entry: 10a51b1ec; end: 10a51b253;  */

void FUN_10a51b1ec(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x40;
        func_0x00010a51b19c(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a51b254; end: 10a51b2bf;  */

void FUN_10a51b254(void)

{
  return;
}



/* Entry: 10a51b2c0; end: 10a51b343;  */

void FUN_10a51b2c0(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a51b378(uVar2,*(undefined8 *)(param_2 + 0x20));
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



/* Entry: 10a51b344; end: 10a51b377;  */

void FUN_10a51b344(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110bec7c0;
  param_1[1] = &UNK_110bec790;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a51b378; end: 10a51b467;  */

undefined1 * FUN_10a51b378(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  char cStack_40;
  undefined8 *puStack_38;
  
  auStack_78[0] = *param_2;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  FUN_10a2300f4(&uStack_70,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) * 0x6db6db6db6db6db7);
  FUN_10a1ccb30(auStack_58,param_2 + 0x20);
  FUN_10acf2a70(auStack_78,param_1);
  puVar1 = auStack_78;
  FUN_10a51b468(puVar1,param_2);
  if ((cStack_40 == '\x01') && (cStack_41 < '\0')) {
    __ZdlPv(auStack_58[0]);
  }
  puStack_38 = &uStack_70;
  FUN_10a2303d4(&puStack_38);
  return puVar1;
}



/* Entry: 10a51b468; end: 10a51b543;  */

bool FUN_10a51b468(char *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (*param_1 == *param_2) {
    puVar11 = *(undefined8 **)(param_1 + 8);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    puVar12 = *(undefined8 **)(param_2 + 8);
    if ((long)puVar5 - (long)puVar11 == *(long *)(param_2 + 0x10) - (long)puVar12) {
      while( true ) {
        if (puVar11 == puVar5) {
          bVar8 = param_1[0x38] == param_2[0x38];
          if ((byte)(param_2[0x38] & param_1[0x38]) != 0) {
            bVar6 = param_1[0x37];
            uVar1 = *(ulong *)(param_1 + 0x28);
            if (-1 < (char)bVar6) {
              uVar1 = (ulong)bVar6;
            }
            bVar7 = param_2[0x37];
            uVar2 = *(ulong *)(param_2 + 0x28);
            if (-1 < (char)bVar7) {
              uVar2 = (ulong)bVar7;
            }
            if (uVar1 == uVar2) {
              plVar9 = (long *)*(long *)(param_1 + 0x20);
              if (-1 < (char)bVar6) {
                plVar9 = (long *)(param_1 + 0x20);
              }
              plVar3 = (long *)*(long *)(param_2 + 0x20);
              if (-1 < (char)bVar7) {
                plVar3 = (long *)(param_2 + 0x20);
              }
              _memcmp(plVar9,plVar3);
              bVar8 = (int)plVar9 == 0;
            }
            else {
              bVar8 = false;
            }
          }
          return bVar8;
        }
        bVar6 = *(byte *)((long)puVar11 + 0x17);
        uVar1 = puVar11[1];
        if (-1 < (char)bVar6) {
          uVar1 = (ulong)bVar6;
        }
        bVar7 = *(byte *)((long)puVar12 + 0x17);
        uVar2 = puVar12[1];
        if (-1 < (char)bVar7) {
          uVar2 = (ulong)bVar7;
        }
        if (uVar1 != uVar2) break;
        puVar10 = (undefined8 *)*puVar11;
        if (-1 < (char)bVar6) {
          puVar10 = puVar11;
        }
        puVar4 = (undefined8 *)*puVar12;
        if (-1 < (char)bVar7) {
          puVar4 = puVar12;
        }
        _memcmp(puVar10,puVar4);
        if ((int)puVar10 != 0) {
          return false;
        }
        puVar11 = puVar11 + 7;
        puVar12 = puVar12 + 7;
      }
    }
  }
  return false;
}



/* Entry: 10a51b544; end: 10a51b587;  */

void FUN_10a51b544(long param_1,undefined8 param_2,long param_3)

{
  if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a51b564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x48))
              (param_2,*(undefined4 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
    return;
  }
  return;
}



/* Entry: 10a51b588; end: 10a51b63f;  */

void FUN_10a51b588(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,long param_5,
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
    puVar1 = (undefined8 *)0x1137eb228;
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a51b640);
  (*pcVar2)();
}



/* Entry: 10a51b640; end: 10a51b663;  */

void FUN_10a51b640(void)

{
  return;
}



/* Entry: 10a51b664; end: 10a51b713;  */

long FUN_10a51b664(long param_1)

{
  long lStack_28;
  
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(char *)(param_1 + 0x37) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  lStack_28 = param_1 + 8;
  FUN_10a2303d4(&lStack_28);
  return param_1;
}



/* Entry: 10a51b714; end: 10a51b717;  */

void FUN_10a51b714(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a51b718; end: 10a51b72b;  */

void FUN_10a51b718(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a51b72c; end: 10a51b733;  */

void FUN_10a51b72c(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(char *)(lVar1 + 0x38) == '\x01') && (*(char *)(lVar1 + 0x37) < '\0')) {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x20));
    }
    lStack_28 = lVar1 + 8;
    FUN_10a2303d4(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a51b734; end: 10a51b76b;  */

undefined8 FUN_10a51b734(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bec8a8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a51b76c; end: 10a51b78b;  */

void FUN_10a51b76c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a51b78c; end: 10a51b89b;  */

void FUN_10a51b78c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
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
      func_0x00010a51b7f4(&lStack_40,param_3);
      lVar4 = *plVar3;
      *plVar3 = 0;
      if (lVar4 != 0) {
        func_0x00010a502568();
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51b7f4);
  (*pcVar1)();
}



/* Entry: 10a51b89c; end: 10a51b8b7;  */

void FUN_10a51b89c(void)

{
  return;
}



/* Entry: 10a51b8b8; end: 10a51b95f;  */

undefined8 * FUN_10a51b8b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bec8e0;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a51b960; end: 10a51bb9f;  */

/* WARNING: Removing unreachable block (ram,0x00010a51bb34) */
/* WARNING: Removing unreachable block (ram,0x00010a51bb38) */
/* WARNING: Removing unreachable block (ram,0x00010a51bb40) */
/* WARNING: Removing unreachable block (ram,0x00010a51bb48) */
/* WARNING: Removing unreachable block (ram,0x00010a51bb4c) */

void FUN_10a51b960(undefined8 *param_1,long param_2,long param_3)

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
  
  puVar5 = (undefined8 *)0x1b8;
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
  *puVar5 = &PTR_FUN_110bec920;
  func_0x0001098bae4c(puVar5,&UNK_10e4c0160,0x32,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x2d,in_x7,0,0
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
  *puVar5 = &PTR_FUN_110bec920;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bec970;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110beca28;
  puVar5[0x25] = &UNK_110bec9f8;
  *(undefined2 *)((long)puVar5 + 0x13c) = 0;
  puVar5[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2b) = 0x40000000;
  puVar5[0x28] = &PTR_DAT_110beca28;
  puVar5[0x29] = &UNK_110bec9f8;
  *(undefined2 *)((long)puVar5 + 0x15c) = 0;
  *(undefined2 *)(puVar5 + 0x2c) = 0;
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
  *(undefined2 *)(puVar5 + 0x2e) = 0;
  puVar5[0x31] = FUN_10a51c3c4;
  puVar5[0x32] = &UNK_110beca88;
  puVar5[0x33] = 0;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x2d] = &PTR_FUN_110beca68;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x36] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x161) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a51bba0; end: 10a51bc4b;  */

undefined8 * FUN_10a51bba0(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110bec920;
  param_1[0x19] = &PTR_FUN_110bec970;
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



/* Entry: 10a51bc4c; end: 10a51bc8b;  */

void FUN_10a51bc4c(void)

{
  return;
}



/* Entry: 10a51bc8c; end: 10a51beef;  */

/* WARNING: Removing unreachable block (ram,0x00010a51bdfc) */
/* WARNING: Removing unreachable block (ram,0x00010a51be00) */
/* WARNING: Removing unreachable block (ram,0x00010a51be08) */
/* WARNING: Removing unreachable block (ram,0x00010a51be10) */
/* WARNING: Removing unreachable block (ram,0x00010a51be1c) */
/* WARNING: Removing unreachable block (ram,0x00010a51be24) */
/* WARNING: Removing unreachable block (ram,0x00010a51be2c) */
/* WARNING: Removing unreachable block (ram,0x00010a51be30) */

void FUN_10a51bc8c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x8;
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
  if ((*(byte *)(lVar9 + 0x1d) & 1) != 0) {
    puVar5 = (undefined8 *)0xa0;
    __Znwm();
    puVar8 = puVar5 + 3;
    *(undefined2 *)puVar8 = 4;
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
    puVar5[0x11] = puVar8;
    puVar5[0x12] = 0;
    *puVar5 = &PTR_DAT_110ae91c0;
    *(undefined2 *)(puVar5 + 0x13) = 0;
    puStack_b0 = puVar5;
    if ((*(byte *)(param_2 + 0x161) & 1) != 0) {
      lStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
      uStack_8c = 0x20000000;
      FUN_10a26ebc0(&lStack_a8,0,&uStack_8c,&pcStack_88,1);
      pcStack_88 = FUN_10a51c5d4;
      appuStack_80[0] = &PTR_FUN_110becae0;
      param_2 = param_2 + 0x18;
      FUN_10a51c4bc(param_2,&pcStack_88,&lStack_a8);
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
            FUN_109d1b4dc(puVar8);
            goto LAB_10a51bddc;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_10a51bddc:
          while( true ) {
            *param_1 = puVar5;
            puVar8 = puVar5;
            func_0x0001092b4274(&puStack_b0);
            iVar7 = (int)puVar8;
            lVar9 = 0;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return;
            }
            ___stack_chk_fail();
            if (iVar7 == 0) break;
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
          puVar5 = (undefined8 *)0x20;
          __Znwm();
          puVar5[1] = 0;
          *puVar5 = &PTR_FUN_110bec9b0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          lVar9 = *(long *)(lVar9 + 0x48) - *(long *)(lVar9 + 0x40);
          if (lVar9 != 0) {
            if (lVar9 < 0) {
              FUN_10a51c288();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a51bf84);
              (*pcVar4)();
            }
            lVar6 = lVar9;
            __Znwm();
            puVar5[1] = lVar6;
            puVar5[3] = lVar6 + lVar9;
            _memcpy();
            puVar5[2] = lVar6 + lVar9;
          }
          *extraout_x8 = puVar5;
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a51be70);
  (*pcVar4)();
}



/* Entry: 10a51bef0; end: 10a51bfa7;  */

void FUN_10a51bef0(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110bec9b0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      FUN_10a51c288();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a51bf84);
      (*pcVar2)();
    }
    lVar4 = lVar1;
    __Znwm();
    puVar3[1] = lVar4;
    puVar3[3] = lVar4 + lVar1;
    _memcpy();
    puVar3[2] = lVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a51bfa8; end: 10a51c067;  */

void FUN_10a51bfa8(long param_1,int param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 0x48);
  if (uVar7 < *(ulong *)(param_1 + 0x50)) {
    lVar6 = uVar7 + 1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    lVar5 = uVar7 - lVar4;
    uVar7 = lVar5 + 1;
    if ((long)uVar7 < 0) {
      FUN_10a51c288();
      lVar4 = *(long *)(param_1 + 0x40);
      lVar5 = *(long *)(param_1 + 0x48);
      if ((((long)param_2 + 1U == lVar5 - lVar4) ||
          ((lVar4 != lVar5 && ((ulong)(long)param_2 < (ulong)(lVar5 - lVar4))))) && (lVar4 != lVar5)
         ) {
        *(long *)(param_1 + 0x48) = lVar5 + -1;
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51c0a8);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(param_1 + 0x50) - lVar4;
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar7 || uVar3 - uVar7 == 0) {
      uVar3 = uVar7;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar3;
      __Znwm();
    }
    lVar6 = uVar7 + lVar5 + 1;
    _memcpy(uVar7,lVar4,lVar5);
    *(ulong *)(param_1 + 0x40) = uVar7;
    *(long *)(param_1 + 0x48) = lVar6;
    *(ulong *)(param_1 + 0x50) = uVar7 + uVar3;
    if (lVar4 != 0) {
      __ZdlPv(lVar4);
    }
  }
  *(long *)(param_1 + 0x48) = lVar6;
  return;
}



/* Entry: 10a51c068; end: 10a51c0a7;  */

void FUN_10a51c068(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  if ((((long)param_2 + 1U == lVar2 - lVar1) ||
      ((lVar1 != lVar2 && ((ulong)(long)param_2 < (ulong)(lVar2 - lVar1))))) && (lVar1 != lVar2)) {
    *(long *)(param_1 + 0x48) = lVar2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a51c0a8);
  (*pcVar3)();
}



/* Entry: 10a51c0a8; end: 10a51c11f;  */

undefined8 * FUN_10a51c0a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bec9b0;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a51c120; end: 10a51c287;  */

void FUN_10a51c120(long param_1,long *param_2)

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
LAB_10a51c244:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51c248);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4c008b,0x1d,*(long *)(param_1 + 8) + uVar4,2,1);
      if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar4) goto LAB_10a51c244;
      *(int *)(lStack_a0 + uVar4 * 4) = (int)plVar2;
      uVar4 = uVar4 + 1;
    } while (lVar3 >> 2 != uVar4);
  }
  pcStack_88 = FUN_10a51c29c;
  appuStack_80[0] = &PTR_DAT_110bec9e0;
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



/* Entry: 10a51c288; end: 10a51c29b;  */

void FUN_10a51c288(void)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a51c29c; end: 10a51c2eb;  */

void FUN_10a51c29c(void)

{
  return;
}



/* Entry: 10a51c2ec; end: 10a51c34f;  */

void FUN_10a51c2ec(undefined8 *param_1,long param_2,long param_3,int param_4)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a51c350);
  (*pcVar2)();
}



/* Entry: 10a51c350; end: 10a51c37f;  */

void FUN_10a51c350(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110beca28;
  param_1[1] = &UNK_110bec9f8;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10a51c380; end: 10a51c3c3;  */

void FUN_10a51c380(long param_1,undefined8 param_2,long param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51c3c4);
  (*pcVar1)();
}



/* Entry: 10a51c3c4; end: 10a51c3df;  */

void FUN_10a51c3c4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = FUN_10a51c3e0;
  param_1[1] = &PTR_FUN_110becaa8;
  param_1[2] = param_2;
  return;
}



/* Entry: 10a51c3e0; end: 10a51c497;  */

void FUN_10a51c3e0(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,long param_5,
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
    puVar1 = (undefined8 *)0x1137eb230;
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a51c498);
  (*pcVar2)();
}



/* Entry: 10a51c498; end: 10a51c4bb;  */

void FUN_10a51c498(void)

{
  return;
}



/* Entry: 10a51c4bc; end: 10a51c5b7;  */

undefined8 ** FUN_10a51c4bc(undefined8 **param_1,undefined8 *param_2,long *param_3)

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
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110becac0,&lStack_90);
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
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10a51c5b8; end: 10a51c5d3;  */

void FUN_10a51c5b8(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a51c5d4; end: 10a51c63b;  */

void FUN_10a51c5d4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
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
      FUN_10a51c63c(&lStack_40,param_3);
      lVar4 = *plVar3;
      *plVar3 = 0;
      if (lVar4 != 0) {
        func_0x00010a50299c();
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51c63c);
  (*pcVar1)();
}



/* Entry: 10a51c63c; end: 10a51c6df;  */

long FUN_10a51c63c(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam00000001137eb2e8 & 1) == 0) {
    iVar1 = 0x137eb2e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(FUN_10a4c5e7c,0x1137eb2e0,0x100000000);
      ___cxa_guard_release(0x1137eb2e8);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x1137eb2e0;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10a51c6e0; end: 10a51c6fb;  */

void FUN_10a51c6e0(void)

{
  return;
}



/* Entry: 10a51c6fc; end: 10a51c7a3;  */

undefined8 * FUN_10a51c6fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110becb08;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a51c7a4; end: 10a51c9e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a51c978) */
/* WARNING: Removing unreachable block (ram,0x00010a51c97c) */
/* WARNING: Removing unreachable block (ram,0x00010a51c984) */
/* WARNING: Removing unreachable block (ram,0x00010a51c98c) */
/* WARNING: Removing unreachable block (ram,0x00010a51c990) */

void FUN_10a51c7a4(undefined8 *param_1,long param_2,long param_3)

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
  
  puVar5 = (undefined8 *)0x1b8;
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
  *puVar5 = &PTR_FUN_110becb48;
  func_0x0001098bae4c(puVar5,&UNK_10e4c040c,0x31,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x2d,in_x7,0,0
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
  *puVar5 = &PTR_FUN_110becb48;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110becb98;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110becc50;
  puVar5[0x25] = &UNK_110becc20;
  *(undefined2 *)((long)puVar5 + 0x13c) = 0;
  puVar5[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2b) = 0x40000000;
  puVar5[0x28] = &PTR_DAT_110becc50;
  puVar5[0x29] = &UNK_110becc20;
  *(undefined2 *)((long)puVar5 + 0x15c) = 0;
  *(undefined2 *)(puVar5 + 0x2c) = 0;
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
  *(undefined2 *)(puVar5 + 0x2e) = 0;
  puVar5[0x31] = FUN_10a51d208;
  puVar5[0x32] = &UNK_110beccb0;
  puVar5[0x33] = 0;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x2d] = &PTR_FUN_110becc90;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x36] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x161) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a51c9e4; end: 10a51ca8f;  */

undefined8 * FUN_10a51c9e4(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110becb48;
  param_1[0x19] = &PTR_FUN_110becb98;
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



/* Entry: 10a51ca90; end: 10a51cacf;  */

void FUN_10a51ca90(void)

{
  return;
}



/* Entry: 10a51cad0; end: 10a51cd33;  */

/* WARNING: Removing unreachable block (ram,0x00010a51cc40) */
/* WARNING: Removing unreachable block (ram,0x00010a51cc44) */
/* WARNING: Removing unreachable block (ram,0x00010a51cc4c) */
/* WARNING: Removing unreachable block (ram,0x00010a51cc54) */
/* WARNING: Removing unreachable block (ram,0x00010a51cc60) */
/* WARNING: Removing unreachable block (ram,0x00010a51cc68) */
/* WARNING: Removing unreachable block (ram,0x00010a51cc70) */
/* WARNING: Removing unreachable block (ram,0x00010a51cc74) */

void FUN_10a51cad0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x8;
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
  if ((*(byte *)(lVar9 + 0x1d) & 1) != 0) {
    puVar5 = (undefined8 *)0xa0;
    __Znwm();
    puVar8 = puVar5 + 3;
    *(undefined2 *)puVar8 = 4;
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
    puVar5[0x11] = puVar8;
    puVar5[0x12] = 0;
    *puVar5 = &PTR_DAT_110ae91c0;
    *(undefined2 *)(puVar5 + 0x13) = 0;
    puStack_b0 = puVar5;
    if ((*(byte *)(param_2 + 0x161) & 1) != 0) {
      lStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
      uStack_8c = 0x20000000;
      FUN_10a26ebc0(&lStack_a8,0,&uStack_8c,&pcStack_88,1);
      pcStack_88 = FUN_10a51d418;
      appuStack_80[0] = &PTR_FUN_110becd08;
      param_2 = param_2 + 0x18;
      FUN_10a51d300(param_2,&pcStack_88,&lStack_a8);
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
            FUN_109d1b4dc(puVar8);
            goto LAB_10a51cc20;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_10a51cc20:
          while( true ) {
            *param_1 = puVar5;
            puVar8 = puVar5;
            func_0x0001092b4274(&puStack_b0);
            iVar7 = (int)puVar8;
            lVar9 = 0;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return;
            }
            ___stack_chk_fail();
            if (iVar7 == 0) break;
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
          puVar5 = (undefined8 *)0x20;
          __Znwm();
          puVar5[1] = 0;
          *puVar5 = &PTR_FUN_110becbd8;
          puVar5[2] = 0;
          puVar5[3] = 0;
          lVar9 = *(long *)(lVar9 + 0x48) - *(long *)(lVar9 + 0x40);
          if (lVar9 != 0) {
            if (lVar9 < 0) {
              FUN_10a51d0cc();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a51cdc8);
              (*pcVar4)();
            }
            lVar6 = lVar9;
            __Znwm();
            puVar5[1] = lVar6;
            puVar5[3] = lVar6 + lVar9;
            _memcpy();
            puVar5[2] = lVar6 + lVar9;
          }
          *extraout_x8 = puVar5;
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a51ccb4);
  (*pcVar4)();
}



/* Entry: 10a51cd34; end: 10a51cdeb;  */

void FUN_10a51cd34(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110becbd8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      FUN_10a51d0cc();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a51cdc8);
      (*pcVar2)();
    }
    lVar4 = lVar1;
    __Znwm();
    puVar3[1] = lVar4;
    puVar3[3] = lVar4 + lVar1;
    _memcpy();
    puVar3[2] = lVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a51cdec; end: 10a51ceab;  */

void FUN_10a51cdec(long param_1,int param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 0x48);
  if (uVar7 < *(ulong *)(param_1 + 0x50)) {
    lVar6 = uVar7 + 1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    lVar5 = uVar7 - lVar4;
    uVar7 = lVar5 + 1;
    if ((long)uVar7 < 0) {
      FUN_10a51d0cc();
      lVar4 = *(long *)(param_1 + 0x40);
      lVar5 = *(long *)(param_1 + 0x48);
      if ((((long)param_2 + 1U == lVar5 - lVar4) ||
          ((lVar4 != lVar5 && ((ulong)(long)param_2 < (ulong)(lVar5 - lVar4))))) && (lVar4 != lVar5)
         ) {
        *(long *)(param_1 + 0x48) = lVar5 + -1;
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51ceec);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(param_1 + 0x50) - lVar4;
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar7 || uVar3 - uVar7 == 0) {
      uVar3 = uVar7;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar3;
      __Znwm();
    }
    lVar6 = uVar7 + lVar5 + 1;
    _memcpy(uVar7,lVar4,lVar5);
    *(ulong *)(param_1 + 0x40) = uVar7;
    *(long *)(param_1 + 0x48) = lVar6;
    *(ulong *)(param_1 + 0x50) = uVar7 + uVar3;
    if (lVar4 != 0) {
      __ZdlPv(lVar4);
    }
  }
  *(long *)(param_1 + 0x48) = lVar6;
  return;
}



/* Entry: 10a51ceac; end: 10a51ceeb;  */

void FUN_10a51ceac(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  if ((((long)param_2 + 1U == lVar2 - lVar1) ||
      ((lVar1 != lVar2 && ((ulong)(long)param_2 < (ulong)(lVar2 - lVar1))))) && (lVar1 != lVar2)) {
    *(long *)(param_1 + 0x48) = lVar2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a51ceec);
  (*pcVar3)();
}



/* Entry: 10a51ceec; end: 10a51cf63;  */

undefined8 * FUN_10a51ceec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110becbd8;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a51cf64; end: 10a51d0cb;  */

void FUN_10a51cf64(long param_1,long *param_2)

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
LAB_10a51d088:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51d08c);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4c0339,0x1c,*(long *)(param_1 + 8) + uVar4,2,1);
      if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar4) goto LAB_10a51d088;
      *(int *)(lStack_a0 + uVar4 * 4) = (int)plVar2;
      uVar4 = uVar4 + 1;
    } while (lVar3 >> 2 != uVar4);
  }
  pcStack_88 = FUN_10a51d0e0;
  appuStack_80[0] = &PTR_DAT_110becc08;
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



/* Entry: 10a51d0cc; end: 10a51d0df;  */

void FUN_10a51d0cc(void)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a51d0e0; end: 10a51d12f;  */

void FUN_10a51d0e0(void)

{
  return;
}



/* Entry: 10a51d130; end: 10a51d193;  */

void FUN_10a51d130(undefined8 *param_1,long param_2,long param_3,int param_4)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a51d194);
  (*pcVar2)();
}



/* Entry: 10a51d194; end: 10a51d1c3;  */

void FUN_10a51d194(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110becc50;
  param_1[1] = &UNK_110becc20;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10a51d1c4; end: 10a51d207;  */

void FUN_10a51d1c4(long param_1,undefined8 param_2,long param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51d208);
  (*pcVar1)();
}



/* Entry: 10a51d208; end: 10a51d223;  */

void FUN_10a51d208(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = FUN_10a51d224;
  param_1[1] = &PTR_FUN_110beccd0;
  param_1[2] = param_2;
  return;
}



/* Entry: 10a51d224; end: 10a51d2db;  */

void FUN_10a51d224(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,long param_5,
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
    puVar1 = (undefined8 *)0x1137eb238;
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a51d2dc);
  (*pcVar2)();
}



/* Entry: 10a51d2dc; end: 10a51d2ff;  */

void FUN_10a51d2dc(void)

{
  return;
}



/* Entry: 10a51d300; end: 10a51d3fb;  */

undefined8 ** FUN_10a51d300(undefined8 **param_1,undefined8 *param_2,long *param_3)

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
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110becce8,&lStack_90);
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
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10a51d3fc; end: 10a51d417;  */

void FUN_10a51d3fc(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a51d418; end: 10a51d47f;  */

void FUN_10a51d418(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
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
      FUN_10a51d480(&lStack_40,param_3);
      lVar4 = *plVar3;
      *plVar3 = 0;
      if (lVar4 != 0) {
        func_0x00010a502888();
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51d480);
  (*pcVar1)();
}



/* Entry: 10a51d480; end: 10a51d523;  */

long FUN_10a51d480(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam00000001137eb2f8 & 1) == 0) {
    iVar1 = 0x137eb2f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x10a4c5eb0,0x1137eb2f0,0x100000000);
      ___cxa_guard_release(0x1137eb2f8);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x1137eb2f0;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10a51d524; end: 10a51d53f;  */

void FUN_10a51d524(void)

{
  return;
}



/* Entry: 10a51d540; end: 10a51d5e7;  */

undefined8 * FUN_10a51d540(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110becd30;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a51d5e8; end: 10a51d8a3;  */

/* WARNING: Removing unreachable block (ram,0x00010a51d838) */
/* WARNING: Removing unreachable block (ram,0x00010a51d83c) */
/* WARNING: Removing unreachable block (ram,0x00010a51d844) */
/* WARNING: Removing unreachable block (ram,0x00010a51d84c) */
/* WARNING: Removing unreachable block (ram,0x00010a51d850) */

void FUN_10a51d5e8(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 in_x7;
  long lVar6;
  long *plVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar4 = (undefined8 *)0x1d0;
  __Znwm();
  lVar6 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar5 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *puVar4 = &PTR_FUN_110becd70;
  func_0x0001098bae4c(puVar4,&UNK_10e4c06b5,0x1d,param_3,lVar6,puVar4 + 0x19,puVar4 + 0x30,in_x7,0,0
                      ,&uStack_50);
  plVar7 = plStack_48;
  plVar5 = (long *)(param_2 + 0x28);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  puVar4[0x1c] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x20] = 0;
  puVar4[0x1f] = 0;
  *puVar4 = &PTR_FUN_110becd70;
  *(undefined1 *)(puVar4 + 0x1a) = 0;
  puVar4[0x19] = &PTR_FUN_110beb258;
  puVar4[0x21] = 0;
  puVar4[0x23] = 0;
  puVar4[0x22] = 0;
  puVar4[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar4 + 0x27) = 0x40000000;
  puVar4[0x24] = &PTR_FUN_110becde0;
  puVar4[0x25] = &UNK_110becdb0;
  *(undefined2 *)((long)puVar4 + 0x13c) = 0;
  puVar4[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar4 + 0x2b) = 0x40000000;
  puVar4[0x28] = &PTR_FUN_110becde0;
  puVar4[0x29] = &UNK_110becdb0;
  *(undefined2 *)((long)puVar4 + 0x15c) = 0;
  *(undefined1 *)(puVar4 + 0x2c) = 0;
  *(undefined1 *)(puVar4 + 0x2f) = 0;
  lVar6 = puVar4[0xc];
  if (lVar6 == 0) {
    bVar3 = false;
    plVar7 = plVar5;
  }
  else {
    bVar3 = lVar6 != puVar4[0xb];
    plVar7 = (long *)0x0;
    if (!bVar3) {
      plVar7 = plVar5;
    }
  }
  *(undefined2 *)(puVar4 + 0x31) = 0;
  puVar4[0x34] = FUN_10a51dc4c;
  puVar4[0x35] = &UNK_110beb370;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  puVar4[0x39] = 0;
  puVar4[0x30] = &PTR_FUN_110bece20;
  if ((!bVar3) && (*(char *)(plVar7[3] + 8) == '\x01')) {
    puVar4[0x39] = plVar7 + 2;
  }
  if ((lVar6 == 0) || (lVar6 == puVar4[0xb])) {
    lVar6 = *(long *)(*plVar5 + 0x490);
    plVar5 = *(long **)(lVar6 + 0x28);
    if ((plVar5 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 == (long *)0x0)
       ) {
      puVar4[0x2c] = 0;
      puVar4[0x2d] = 0;
      *(undefined1 *)(puVar4 + 0x2e) = 0;
    }
    else {
      puVar4[0x2c] = *(undefined8 *)(lVar6 + 0x20);
      puVar4[0x2d] = plVar5;
      plVar7 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined1 *)(puVar4 + 0x2e) = 0;
      do {
        lVar6 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    *(undefined1 *)(puVar4 + 0x2f) = 1;
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 10a51d8a4; end: 10a51d977;  */

undefined8 * FUN_10a51d8a4(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110becd70;
  if (*(char *)(param_1 + 0x2f) == '\x01') {
    FUN_10ace79dc(param_1 + 0x2c);
  }
  param_1[0x19] = &PTR_FUN_110beb258;
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



/* Entry: 10a51d978; end: 10a51d9b7;  */

void FUN_10a51d978(void)

{
  return;
}



/* Entry: 10a51d9b8; end: 10a51db3b;  */

/* WARNING: Removing unreachable block (ram,0x00010a51dab0) */
/* WARNING: Removing unreachable block (ram,0x00010a51dab4) */
/* WARNING: Removing unreachable block (ram,0x00010a51dabc) */
/* WARNING: Removing unreachable block (ram,0x00010a51dac4) */
/* WARNING: Removing unreachable block (ram,0x00010a51dad0) */
/* WARNING: Removing unreachable block (ram,0x00010a51dad8) */
/* WARNING: Removing unreachable block (ram,0x00010a51dae0) */
/* WARNING: Removing unreachable block (ram,0x00010a51dae4) */

void FUN_10a51d9b8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_50;
  undefined1 uStack_41;
  
  lVar7 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(lVar7 + 0x1d) & 1) != 0) {
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
    puStack_50 = puVar5;
    if ((*(byte *)(param_2 + 0x178) & 1) != 0) {
      FUN_10ace7a20(param_2 + 0x160,param_2,lVar7 + 0x10,&uStack_41);
      plVar1 = puVar5 + 2;
      do {
        lVar7 = *plVar1;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 2;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            FUN_109d1b4dc(puVar6);
            goto LAB_10a51da90;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar7 >> 1 & 1) != 0) {
LAB_10a51da90:
          *param_1 = puVar5;
          func_0x0001092b4274(&puStack_50,puVar5);
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a51db0c);
  (*pcVar4)();
}



/* Entry: 10a51db3c; end: 10a51db73;  */

void FUN_10a51db3c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar1;
  *param_2 = &PTR_FUN_110becde0;
  *(undefined2 *)((long)param_2 + 0x1c) = *(undefined2 *)(param_1 + 0x1c);
  return;
}



/* Entry: 10a51db74; end: 10a51dbd7;  */

void FUN_10a51db74(undefined8 *param_1,long param_2,long param_3,int param_4)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a51dbd8);
  (*pcVar2)();
}



/* Entry: 10a51dbd8; end: 10a51dc07;  */

void FUN_10a51dbd8(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110becde0;
  param_1[1] = &UNK_110becdb0;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10a51dc08; end: 10a51dc4b;  */

void FUN_10a51dc08(long param_1,undefined8 param_2,long param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51dc4c);
  (*pcVar1)();
}



/* Entry: 10a51dc4c; end: 10a51dc67;  */

void FUN_10a51dc4c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = FUN_10a511508;
  param_1[1] = &PTR_FUN_110beb390;
  param_1[2] = param_2;
  return;
}



/* Entry: 10a51dc68; end: 10a51dd67;  */

long FUN_10a51dc68(long param_1)

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



/* Entry: 10a51dd68; end: 10a51e02f;  */

/* WARNING: Removing unreachable block (ram,0x00010a51dfc4) */
/* WARNING: Removing unreachable block (ram,0x00010a51dfc8) */
/* WARNING: Removing unreachable block (ram,0x00010a51dfd0) */
/* WARNING: Removing unreachable block (ram,0x00010a51dfd8) */
/* WARNING: Removing unreachable block (ram,0x00010a51dfdc) */

void FUN_10a51dd68(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 in_x7;
  long lVar6;
  long *plVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar4 = (undefined8 *)0x210;
  __Znwm();
  lVar6 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar5 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *puVar4 = &PTR_FUN_110bece90;
  func_0x0001098bae4c(puVar4,&UNK_10e4c0880,0x1e,param_3,lVar6,puVar4 + 0x19,puVar4 + 0x38,in_x7,0,0
                      ,&uStack_50);
  plVar7 = plStack_48;
  plVar5 = (long *)(param_2 + 0x28);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  puVar4[0x1c] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x20] = 0;
  puVar4[0x1f] = 0;
  *puVar4 = &PTR_FUN_110bece90;
  *(undefined1 *)(puVar4 + 0x1a) = 0;
  puVar4[0x19] = &PTR_FUN_110be9ec0;
  puVar4[0x21] = 0;
  puVar4[0x23] = 0;
  puVar4[0x22] = 0;
  puVar4[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar4 + 0x27) = 0x40000000;
  puVar4[0x24] = &PTR_FUN_110becf00;
  puVar4[0x25] = &UNK_110beced0;
  *(undefined1 *)(puVar4 + 0x28) = 0;
  *(undefined1 *)(puVar4 + 0x2b) = 0;
  puVar4[0x2e] = 0x4000000040000000;
  *(undefined4 *)(puVar4 + 0x2f) = 0x40000000;
  puVar4[0x2c] = &PTR_FUN_110becf00;
  puVar4[0x2d] = &UNK_110beced0;
  *(undefined1 *)(puVar4 + 0x30) = 0;
  *(undefined1 *)(puVar4 + 0x33) = 0;
  *(undefined1 *)(puVar4 + 0x34) = 0;
  *(undefined1 *)(puVar4 + 0x37) = 0;
  lVar6 = puVar4[0xc];
  if (lVar6 == 0) {
    bVar3 = false;
    plVar7 = plVar5;
  }
  else {
    bVar3 = lVar6 != puVar4[0xb];
    plVar7 = (long *)0x0;
    if (!bVar3) {
      plVar7 = plVar5;
    }
  }
  *(undefined2 *)(puVar4 + 0x39) = 0;
  puVar4[0x3c] = 0x10a51e4ac;
  puVar4[0x3d] = &UNK_110be9f48;
  puVar4[0x3e] = 0;
  puVar4[0x3f] = 0;
  puVar4[0x41] = 0;
  puVar4[0x40] = 0;
  puVar4[0x38] = &PTR_DAT_110becf40;
  if ((!bVar3) && (*(char *)(plVar7[3] + 8) == '\x01')) {
    puVar4[0x41] = plVar7 + 2;
  }
  if ((lVar6 == 0) || (lVar6 == puVar4[0xb])) {
    lVar6 = *(long *)(*plVar5 + 0x490);
    plVar5 = *(long **)(lVar6 + 0x38);
    if ((plVar5 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 == (long *)0x0)
       ) {
      puVar4[0x34] = 0;
      puVar4[0x35] = 0;
      *(undefined1 *)(puVar4 + 0x36) = 0;
    }
    else {
      puVar4[0x34] = *(undefined8 *)(lVar6 + 0x30);
      puVar4[0x35] = plVar5;
      plVar7 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined1 *)(puVar4 + 0x36) = 0;
      do {
        lVar6 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    *(undefined1 *)(puVar4 + 0x37) = 1;
  }
  *param_1 = puVar4;
  return;
}


