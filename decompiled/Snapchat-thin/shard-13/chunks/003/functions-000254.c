/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a4f01ac; end: 10a4f01bf;  */

void FUN_10a4f01ac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0x2aaaaaaaaaaaaaa < param_2) {
    func_0x000109ffded8();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar3 = puVar2[3];
        puStack_58[4] = puVar2[4];
        puStack_58[3] = uVar3;
        uVar5 = puVar2[8];
        uVar4 = puVar2[7];
        uVar7 = puVar2[10];
        uVar6 = puVar2[9];
        uVar3 = puVar2[0xb];
        uVar8 = puVar2[5];
        puStack_58[6] = puVar2[6];
        puStack_58[5] = uVar8;
        puStack_58[0xb] = uVar3;
        puStack_58[10] = uVar7;
        puStack_58[9] = uVar6;
        puStack_58[8] = uVar5;
        puStack_58[7] = uVar4;
        puVar2 = puVar2 + 0xc;
        puStack_58 = puStack_58 + 0xc;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 0xc;
      } while (param_2 != param_3);
    }
    FUN_10a4f02dc(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x60);
  return;
}



/* Entry: 10a4f01c0; end: 10a4f02db;  */

void FUN_10a4f01c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0x2aaaaaaaaaaaaaa < param_2) {
    func_0x000109ffded8();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        puStack_48[4] = puVar1[4];
        puStack_48[3] = uVar2;
        uVar4 = puVar1[8];
        uVar3 = puVar1[7];
        uVar6 = puVar1[10];
        uVar5 = puVar1[9];
        uVar2 = puVar1[0xb];
        uVar7 = puVar1[5];
        puStack_48[6] = puVar1[6];
        puStack_48[5] = uVar7;
        puStack_48[0xb] = uVar2;
        puStack_48[10] = uVar6;
        puStack_48[9] = uVar5;
        puStack_48[8] = uVar4;
        puStack_48[7] = uVar3;
        puVar1 = puVar1 + 0xc;
        puStack_48 = puStack_48 + 0xc;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 0xc;
      } while (param_2 != param_3);
    }
    FUN_10a4f02dc(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x60);
  return;
}



/* Entry: 10a4f02dc; end: 10a4f030f;  */

long FUN_10a4f02dc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a4f0310(param_1);
  }
  return param_1;
}



/* Entry: 10a4f0310; end: 10a4f03f3;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f033c) */

void FUN_10a4f0310(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x60
      ) {
  }
  return;
}



/* Entry: 10a4f03f4; end: 10a4f043f;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f0420) */

void FUN_10a4f03f4(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x60) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a4f0440; end: 10a4f049b;  */

void FUN_10a4f0440(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0xb0;
        func_0x00010a202f70();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a4f049c; end: 10a4f0ad7;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f0564) */

void FUN_10a4f049c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  char cStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar7 = (undefined8 *)0x118;
  __Znwm();
  *puVar7 = FUN_10a534734;
  puVar7[1] = FUN_10a534c94;
  puVar1 = puVar7 + 0x16;
  puVar7[0x21] = param_2;
  func_0x0001092ba17c(puVar7 + 2);
  lVar11 = puVar7[7];
  if (lVar11 != 0) {
    plVar8 = (long *)(lVar11 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar11;
  lVar11 = *(long *)(param_2 + 0x10);
  puVar7[0xe] = lVar11;
  plVar8 = (long *)(lVar11 + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = *plVar8 + 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((uint)*(undefined8 *)(puVar7[0xe] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar7 + 0x22) = 0;
    lVar11 = puVar7[0xe];
    plVar8 = (long *)(lVar11 + 0x10);
    uVar12 = puVar7[3];
    do {
      lVar15 = *plVar8;
      if (lVar15 == 0) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          uStack_80 = 0;
          puStack_78 = puVar7;
          uStack_70 = uVar12;
          func_0x000109d1b588(lVar11 + 0x18,&uStack_80);
          *(undefined8 *)(lVar11 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar15 >> 1 & 1) == 0);
  }
  lVar11 = puVar7[0xe];
  if (((uint)*(undefined8 *)(puVar7[0xe] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(lVar11 + 0x90);
LAB_10a4f08dc:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4f08e0);
    (*pcVar6)();
  }
  if ((*(byte *)(lVar11 + 0xc0) & 1) == 0) goto LAB_10a4f08dc;
  FUN_10a4f0c8c(puVar7 + 9,lVar11 + 0x98);
  plVar8 = (long *)puVar7[0xe];
  if (plVar8 != (long *)0x0) {
    puVar2 = (ulong *)(plVar8 + 1);
    do {
      uVar13 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar13 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar13 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  ppuVar10 = &PTR_PTR_113302218;
  FUN_10ae079a0(0,&PTR_PTR_113302218);
  FUN_10ae07cd4(ppuVar10,&PTR_PTR_113302218);
  puVar9 = puVar7 + 9;
  FUN_10a4f0ad8();
  if (((ulong)puVar9 & 1) == 0) {
    func_0x0001092ba100(puVar7 + 2);
    goto LAB_10a4f0850;
  }
  if (*(char *)((long)puVar7 + 0x5f) < '\0') {
    func_0x000107c3192c(puVar1,puVar7[9],puVar7[10]);
  }
  else {
    puVar7[0x17] = puVar7[10];
    *puVar1 = puVar7[9];
    puVar7[0x18] = puVar7[0xb];
  }
  uVar13 = puVar7[0x17];
  puVar14 = (undefined8 *)puVar7[0x16];
  if (-1 < (char)*(byte *)((long)puVar7 + 199)) {
    uVar13 = (ulong)*(byte *)((long)puVar7 + 199);
    puVar14 = puVar1;
  }
  puVar16 = puVar7 + 0xe;
  FUN_10a4f0e48(puVar16,puVar14,uVar13);
  func_0x00010ad031c0();
  if (*(char *)((long)puVar16 + 0x17) < '\0') {
    func_0x000107c3192c(puVar7 + 0x19,*puVar16,puVar16[1]);
  }
  else {
    uVar17 = puVar16[1];
    uVar12 = *puVar16;
    puVar7[0x1b] = puVar16[2];
    puVar7[0x1a] = uVar17;
    puVar7[0x19] = uVar12;
  }
  func_0x000107c2b054(&uStack_80,&DAT_10f2ecb66);
  (**(code **)(puVar7[0xe] + 0x10))(puVar7 + 0x1f,puVar7 + 0xe,&uStack_80);
  if (uStack_70._7_1_ < '\0') {
    __ZdlPv(uStack_80);
  }
  (**(code **)(*(long *)puVar7[0x1f] + 0x10))(puVar7 + 0x1c);
  puVar7[0x15] = 0;
  func_0x0001094944b0(auStack_50,puVar7[0x1c],puVar7[0x1d],puVar7 + 0x12,1,0);
  plVar8 = (long *)puVar7[0x15];
  if (plVar8 == puVar7 + 0x12) {
    lVar11 = 0x20;
LAB_10a4f0740:
    (**(code **)(*plVar8 + lVar11))();
  }
  else if (plVar8 != (long *)0x0) {
    lVar11 = 0x28;
    goto LAB_10a4f0740;
  }
  puVar14 = (undefined8 *)puVar7[0x21];
  puVar16 = (undefined8 *)*puVar14;
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  cStack_68 = '\0';
  func_0x00010940674c(auStack_60,puVar7 + 0xe,puVar7 + 0x19,auStack_50,puVar14 + 4,puVar14 + 0x12,
                      &uStack_80);
  FUN_10a4f0b14(*puVar16,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar8 = plStack_58 + 1;
    do {
      lVar11 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  if ((cStack_68 == '\x01') && (uStack_80 != 0)) {
    puStack_78 = (undefined8 *)uStack_80;
    __ZdlPv();
  }
  func_0x000109380ffc(auStack_48,auStack_50[0]);
  if (puVar7[0x1c] != 0) {
    puVar7[0x1d] = puVar7[0x1c];
    __ZdlPv();
  }
  plVar8 = (long *)puVar7[0x1f];
  puVar7[0x1f] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (*(char *)((long)puVar7 + 0xdf) < '\0') {
    __ZdlPv(puVar7[0x19]);
  }
  puVar7[0xe] = &PTR_DAT_110af47c8;
  if (*(char *)((long)puVar7 + 0x8f) < '\0') {
    __ZdlPv(puVar7[0xf]);
  }
  if (*(char *)((long)puVar7 + 199) < '\0') {
    __ZdlPv(*puVar1);
  }
LAB_10a4f0850:
  plVar8 = (long *)puVar7[0xd];
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 1;
    do {
      lVar11 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (*(char *)((long)puVar7 + 0x5f) < '\0') {
    __ZdlPv(puVar7[9]);
  }
  if (((ulong)puVar9 & 1) != 0) {
    func_0x0001092ba100(puVar7 + 2);
  }
  func_0x000109d1a1d0(puVar7 + 2);
  __ZdlPv(puVar7);
  return;
}



/* Entry: 10a4f0ad8; end: 10a4f0b13;  */

undefined8 FUN_10a4f0ad8(void)

{
  FUN_10a4f0cfc();
  return 1;
}



/* Entry: 10a4f0b14; end: 10a4f0bbf;  */

undefined8 * FUN_10a4f0b14(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x3;
    FUN_10a0843f8();
    __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x18);
    __Unwind_Resume();
    FUN_10a15206c(puVar2 + 3);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      __ZdlPv(*puVar2);
    }
    return puVar2;
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    uStack_38 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    __ZNSt13exception_ptrD1Ev(&uStack_38);
    if (lVar3 == 0) {
      uVar4 = *param_2;
      *(undefined8 *)(param_1 + 0x98) = param_2[1];
      *(undefined8 *)(param_1 + 0x90) = uVar4;
      *param_2 = 0;
      param_2[1] = 0;
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
      __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
      puVar2 = (undefined8 *)(param_1 + 0x18);
      __ZNSt3__15mutex6unlockEv(puVar2);
      return puVar2;
    }
  }
  FUN_10a0843f8(2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4f0ba4);
  (*pcVar1)();
}



/* Entry: 10a4f0bc0; end: 10a4f0c2b;  */

undefined8 * FUN_10a4f0bc0(undefined8 *param_1)

{
  FUN_10a15206c(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a4f0c2c; end: 10a4f0c8b;  */

undefined8 * FUN_10a4f0c2c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
    __ZNSt13exception_ptrC1ERKS_(&uStack_28);
    __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(param_1,&uStack_28);
    puVar4 = &uStack_28;
    __ZNSt13exception_ptrD1Ev(puVar4);
    return puVar4;
  }
  puVar4 = (undefined8 *)0x3;
  FUN_10a0843f8();
  __ZNSt13exception_ptrD1Ev(&uStack_28);
  __Unwind_Resume();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar4,*param_2,param_2[1]);
  }
  else {
    uVar7 = param_2[1];
    uVar6 = *param_2;
    puVar4[2] = param_2[2];
    puVar4[1] = uVar7;
    *puVar4 = uVar6;
  }
  lVar5 = param_2[4];
  uVar6 = param_2[3];
  puVar4[4] = param_2[4];
  puVar4[3] = uVar6;
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
  return puVar4;
}



/* Entry: 10a4f0c8c; end: 10a4f0cfb;  */

undefined8 * FUN_10a4f0c8c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  lVar4 = param_2[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
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
  return param_1;
}



/* Entry: 10a4f0cfc; end: 10a4f0dcb;  */

void FUN_10a4f0cfc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  if (param_1[3] == 0) {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_50,*param_1,param_1[1]);
    }
    else {
      uStack_48 = param_1[1];
      uStack_50 = *param_1;
      lStack_40 = param_1[2];
    }
    FUN_10ad0279c(auStack_30,&uStack_50);
    FUN_10a152118(param_1 + 3,auStack_30);
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
      if (lVar4 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    if (lStack_40 < 0) {
      __ZdlPv(uStack_50);
    }
  }
  return;
}



/* Entry: 10a4f0dcc; end: 10a4f0e47;  */

undefined * FUN_10a4f0dcc(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar1 = param_1;
  }
  FUN_10ae03140(0,puVar1,uVar3);
  ppuVar7 = &PTR_PTR_113302510;
  ppuVar6 = ppuVar7;
  FUN_10ae079a0();
  FUN_10ae0314c();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar6[0x13],ppuVar6[0xf],
                  ppuVar6 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar9 = ppuVar6[0x12];
    puVar8 = ppuVar6[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar6 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar6 + 0xe);
    uStack_8c0 = uVar3 & 0xffffffff;
    ppuStack_8b0 = ppuVar6 + 0x10;
    puVar4 = *ppuVar6;
    ppuVar7 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar8;
    puStack_8d8 = puVar9;
    uStack_8d0 = (ulong)(puVar9 != (undefined *)0x0);
    uStack_8c8 = uVar2;
    FUN_10ae0784c(puVar4,ppuVar7,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10a4f0e48; end: 10a4f0eb7;  */

undefined8 * FUN_10a4f0e48(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110ba56f0;
  func_0x000107c2c4d8(param_1 + 1);
  return param_1;
}



/* Entry: 10a4f0eb8; end: 10a4f0f0f;  */

long FUN_10a4f0eb8(long param_1)

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



/* Entry: 10a4f0f10; end: 10a4f0f93;  */

void FUN_10a4f0f10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0cf150(param_1,param_4);
    lVar1 = param_1;
    FUN_10a1f3f84(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a4f0f94; end: 10a4f100b;  */

void FUN_10a4f0f94(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a4f100c(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a4f100c; end: 10a4f1057;  */

void FUN_10a4f100c(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 < 0x5d1745d1745d175) {
    plVar1 = param_1;
    FUN_10a4f106c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 0x2c;
    return;
  }
  FUN_10a4f1058();
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0x5d1745d1745d175) {
    __Znwm(param_2 * 0x2c);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a4f1138();
    puVar3 = puVar2;
    FUN_10a4f11e0(puVar2,param_2,param_3,*(undefined8 *)(puVar2 + 8));
    *(undefined **)(puVar2 + 8) = puVar3;
  }
  return;
}



/* Entry: 10a4f1058; end: 10a4f106b;  */

void FUN_10a4f1058(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0x5d1745d1745d175) {
    __Znwm(param_2 * 0x2c);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a4f1138();
    puVar2 = puVar1;
    FUN_10a4f11e0(puVar1,param_2,param_3,*(undefined8 *)(puVar1 + 8));
    *(undefined **)(puVar1 + 8) = puVar2;
  }
  return;
}



/* Entry: 10a4f106c; end: 10a4f10b3;  */

void FUN_10a4f106c(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_2 < 0x5d1745d1745d175) {
    __Znwm(param_2 * 0x2c);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a4f1138();
    lVar1 = param_1;
    FUN_10a4f11e0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a4f10b4; end: 10a4f1137;  */

void FUN_10a4f10b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a4f1138(param_1,param_4);
    lVar1 = param_1;
    FUN_10a4f11e0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a4f1138; end: 10a4f1183;  */

undefined1  [16] FUN_10a4f1138(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x1af286bca1af287) {
    plVar1 = param_1;
    FUN_10a4f1198();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x13);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a4f1184();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x1af286bca1af287) {
    lVar2 = param_2 * 0x98;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    uVar3 = param_2;
    FUN_10a4f1264(param_4,param_2);
    param_4 = param_4 + 0x98;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a4f1184; end: 10a4f1197;  */

undefined1  [16] FUN_10a4f1184(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x1af286bca1af287) {
    lVar1 = param_2 * 0x98;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    uVar2 = param_2;
    FUN_10a4f1264(param_4,param_2);
    param_4 = param_4 + 0x98;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a4f1198; end: 10a4f11df;  */

undefined1  [16] FUN_10a4f1198(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x1af286bca1af287) {
    lVar1 = param_2 * 0x98;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    uVar2 = param_2;
    FUN_10a4f1264(param_4,param_2);
    param_4 = param_4 + 0x98;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a4f11e0; end: 10a4f1263;  */

long FUN_10a4f11e0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    FUN_10a4f1264(param_4,param_2);
    param_4 = param_4 + 0x98;
  }
  return param_4;
}



/* Entry: 10a4f1264; end: 10a4f1357;  */

undefined8 * FUN_10a4f1264(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    func_0x000107c3192c(param_1 + 2,param_2[2],param_2[3]);
  }
  else {
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar2;
    param_1[2] = uVar1;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10a0e9a40(param_1 + 5,param_2[5],param_2[6],(long)(param_2[6] - param_2[5]) >> 2);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_10a0e9a40();
  uVar2 = param_2[0xc];
  uVar1 = param_2[0xb];
  uVar4 = param_2[0xe];
  uVar3 = param_2[0xd];
  uVar6 = param_2[0x10];
  uVar5 = param_2[0xf];
  uVar7 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar4;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar2;
  param_1[0xb] = uVar1;
  return param_1;
}



/* Entry: 10a4f1358; end: 10a4f136b;  */

void FUN_10a4f1358(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a4f13c8();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a4f136c; end: 10a4f141f;  */

void FUN_10a4f136c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a4f13c8();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a4f1420; end: 10a4f1433;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f1460) */

long * FUN_10a4f1420(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x48;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a4f1434; end: 10a4f1493;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f1460) */

long * FUN_10a4f1434(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x48;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a4f1494; end: 10a4f1503;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f14c8) */

void FUN_10a4f1494(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar3 = lVar3 + -0x48;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a4f1504; end: 10a4f152b;  */

undefined1  [16] FUN_10a4f1504(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10a2f2568();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a4f152c; end: 10a4f15ab;  */

undefined1  [16] FUN_10a4f152c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a2f2568();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a4f15ac; end: 10a4f1643;  */

void FUN_10a4f15ac(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    lVar7 = param_1[1];
    lVar4 = lVar6;
    if (lVar7 != lVar6) {
      do {
        plVar5 = *(long **)(lVar7 + -8);
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
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != lVar6);
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



/* Entry: 10a4f1644; end: 10a4f1663;  */

void FUN_10a4f1644(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a4f1664; end: 10a4f19db;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a4f1664(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long alStack_130 [3];
  long lStack_118;
  long *plStack_110;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_148 = param_1;
  uStack_140 = param_2;
  if (param_5 != 0) {
    plVar7 = &uStack_b8;
    uStack_b8 = param_1;
    uStack_b0 = param_2;
    func_0x0001098b9090(plVar7,*param_4);
    if (param_5 != 1) {
      iVar9 = param_4[1];
      plVar13 = &uStack_b8;
      uStack_b8 = param_1;
      uStack_b0 = param_2;
      func_0x00010a289568();
      if (*plVar7 != 0 && *plVar13 != 0) {
        plVar8 = &lStack_148;
        FUN_10a4f1aa4(plVar8,param_3);
        plVar13 = (long *)*plVar13;
        uVar12 = *(undefined8 *)*plVar7;
        lVar11 = *(long *)(param_6 + 0x20);
        if (*(char *)(lVar11 + 0x1f) < '\0') {
          func_0x000107c3192c(&uStack_100,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10)
                             );
        }
        else {
          uStack_f8 = *(undefined8 *)(lVar11 + 0x10);
          uStack_100 = *(undefined8 *)(lVar11 + 8);
          lStack_f0 = *(long *)(lVar11 + 0x18);
        }
        if (*(char *)(lVar11 + 0x37) < '\0') {
          func_0x000107c3192c(&uStack_e8,*(undefined8 *)(lVar11 + 0x20),
                              *(undefined8 *)(lVar11 + 0x28));
        }
        else {
          uStack_e0 = *(undefined8 *)(lVar11 + 0x28);
          uStack_e8 = *(undefined8 *)(lVar11 + 0x20);
          lStack_d8 = *(long *)(lVar11 + 0x30);
        }
        uStack_d0 = *(undefined8 *)(*plVar13 + 0x10);
        uVar10 = *(undefined8 *)(param_6 + 0x10);
        uStack_103 = *(int *)**(undefined8 **)(param_6 + 0x18) == 0;
        uStack_102 = ((int *)**(undefined8 **)(param_6 + 0x18))[1] == 0;
        uStack_101 = 2;
        FUN_10a4d03b4(&lStack_118,uVar10,lVar11,&uStack_103,&uStack_100,(int)plVar13[2]);
        iVar9 = (int)uVar10;
        if (lStack_118 == 0) {
          lStack_138 = 0;
        }
        else {
          lVar2 = 0;
          if (*plVar13 != 0) {
            lVar2 = *plVar13 + 0x10;
          }
          FUN_10a0f3910(&uStack_b8,lVar2,0);
          alStack_130[0] = 0;
          alStack_130[1] = 0;
          alStack_130[2] = 0;
          FUN_10a001444(alStack_130,&uStack_b8,&lStack_58,1);
          FUN_10a4d1c90(&lStack_138,lStack_118,uVar12,alStack_130,plVar13 + 2,1,lVar11,lVar11 + 0x70
                       );
          iVar9 = (int)lStack_118;
          plStack_c0 = alStack_130;
          FUN_109ffe3e8(&plStack_c0);
          if (lStack_80 != 0) {
            piVar1 = (int *)(lStack_80 + 0x14);
            do {
              iVar3 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(&uStack_b8);
            }
          }
          lStack_80 = 0;
          uStack_a0 = 0;
          uStack_a8 = 0;
          uStack_90 = 0;
          uStack_98 = 0;
          if (0 < uStack_b8._4_4_) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_78 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < uStack_b8._4_4_);
          }
          if (puStack_70 != auStack_68 && puStack_70 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_70 + -8));
          }
        }
        if (plStack_110 != (long *)0x0) {
          plVar7 = plStack_110 + 1;
          do {
            lVar11 = *plVar7;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_110 + 0x10))(plStack_110);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_110);
          }
        }
        if (lStack_d8 < 0) {
          __ZdlPv(uStack_e8);
        }
        if (lStack_f0 < 0) {
          __ZdlPv(uStack_100);
        }
        plVar13 = (long *)*plVar8;
        *plVar8 = lStack_138;
        plVar7 = plStack_110;
        if (plVar13 != (long *)0x0) {
          FUN_10a4f19dc();
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
      ___stack_chk_fail();
      if ((iVar9 != 0) && (func_0x000104bd46a0(), lStack_f0 < 0)) {
        __ZdlPv(uStack_100);
      }
      plVar8 = plVar13;
      __Unwind_Resume();
      if (plVar8 != (long *)0x0) {
        pcStack_158 = FUN_10a4f19dc;
        plStack_170 = plVar7;
        plStack_168 = plVar13;
        puStack_160 = &stack0xfffffffffffffff0;
        func_0x00010a4f1a28(plVar8 + 8);
        FUN_10a508308(plVar8 + 3);
        plStack_178 = plVar8;
        FUN_10a4f2938(&plStack_178);
        __ZdlPv(plVar8);
      }
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4f1960);
  (*pcVar6)();
}



/* Entry: 10a4f19dc; end: 10a4f1aa3;  */

void FUN_10a4f19dc(long param_1)

{
  long lStack_28;
  
  if (param_1 != 0) {
    func_0x00010a4f1a28(param_1 + 0x40);
    FUN_10a508308(param_1 + 0x18);
    lStack_28 = param_1;
    FUN_10a4f2938(&lStack_28);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 10a4f1aa4; end: 10a4f1b47;  */

long FUN_10a4f1aa4(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam00000001137eb2a0 & 1) == 0) {
    iVar1 = 0x137eb2a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(FUN_10a4d4170,0x1137eb298,0x100000000);
      ___cxa_guard_release(0x1137eb2a0);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x1137eb298;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10a4f1b48; end: 10a4f1b6b;  */

void FUN_10a4f1b48(void)

{
  return;
}



/* Entry: 10a4f1b6c; end: 10a4f1b7f;  */

void FUN_10a4f1b6c(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_4 != 0) {
    FUN_10a26d390();
    puVar2 = *(undefined4 **)(puVar1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)(puVar1 + 8) = puVar2;
  }
  return;
}



/* Entry: 10a4f1b80; end: 10a4f1bef;  */

void FUN_10a4f1b80(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a26d390(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a4f1bf0; end: 10a4f1ceb;  */

undefined8 ** FUN_10a4f1bf0(undefined8 **param_1,undefined8 *param_2,long *param_3)

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
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110be8bc0,&lStack_90);
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



/* Entry: 10a4f1cec; end: 10a4f1d13;  */

void FUN_10a4f1cec(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a4f1d14; end: 10a4f1e3b;  */

void FUN_10a4f1d14(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  plVar2 = &lStack_68;
  lStack_68 = param_1;
  uStack_60 = param_2;
  func_0x00010a2926e4(plVar2,param_3);
  plStack_58 = (long *)0x0;
  plVar5 = *(long **)(*(long *)(param_6 + 0x10) + 0x10);
  lStack_50 = param_1;
  uStack_48 = param_2;
  if (plVar5 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    uVar6 = 0;
    do {
      if ((ulong)(*(long *)(param_6 + 0x20) - *(long *)(param_6 + 0x18) >> 2) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4f1e0c);
        (*pcVar1)();
      }
      plVar3 = &lStack_50;
      FUN_10a4f1aa4(plVar3,*(undefined4 *)(*(long *)(param_6 + 0x18) + uVar6 * 4));
      lVar4 = *plVar3;
      *plVar3 = 0;
      FUN_10a4d5c40(&plStack_58,plVar5 + 2,lVar4);
      if (lVar4 != 0) {
        FUN_10a4f19dc(lVar4);
      }
      uVar6 = uVar6 + 1;
      plVar5 = (long *)*plVar5;
      plVar3 = plStack_58;
    } while (plVar5 != (long *)0x0);
  }
  plStack_58 = (long *)0x0;
  plVar5 = (long *)*plVar2;
  *plVar2 = (long)plVar3;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
    plVar2 = plStack_58;
    plStack_58 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  return;
}



/* Entry: 10a4f1e3c; end: 10a4f1e87;  */

void FUN_10a4f1e3c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a4f1e88; end: 10a4f1ec3;  */

void FUN_10a4f1e88(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    func_0x00010a1bb0e8(param_1 + 4);
    __ZdlPv(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}



/* Entry: 10a4f1ec4; end: 10a4f1f9b;  */

long FUN_10a4f1ec4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar1 = param_1;
  FUN_10a22f7e8();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar1);
    }
    else {
      plVar7 = plVar1;
      if (plVar5 <= plVar1) {
        uVar2 = 0;
        if (plVar5 != (long *)0x0) {
          uVar2 = (ulong)plVar1 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar1 - uVar2 * (long)plVar5);
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
        if (plVar1 == plVar4) {
          uVar2 = (ulong)(plVar3 + 2);
          FUN_10a22f8c4(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar2 = 0;
            if (plVar5 != (long *)0x0) {
              uVar2 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar2 * (long)plVar5);
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



/* Entry: 10a4f1f9c; end: 10a4f204b;  */

void FUN_10a4f1f9c(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    func_0x00010a4f1fd8(param_1 + 2);
    __ZdlPv(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}



/* Entry: 10a4f204c; end: 10a4f211b;  */

void FUN_10a4f204c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar9 <= param_2) {
      return;
    }
  }
  if (param_2 == (long *)0x0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return;
  }
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000109ffded8();
    plVar9 = param_1;
    plVar5 = param_2;
    if ((long)param_2 - 1U == 0) {
      param_2 = (long *)0x2;
    }
    else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar9 = param_2;
    }
    plVar6 = (long *)param_1[1];
    if (plVar6 > param_2 || param_2 == plVar6) {
      if (plVar6 <= param_2) {
        return;
      }
      plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar6 < (long *)0x3) || (((ulong)plVar6 & (long)plVar6 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar9) {
        plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
      }
      if (param_2 <= plVar9) {
        param_2 = plVar9;
      }
      if (plVar6 <= param_2) {
        return;
      }
      if (param_2 == (long *)0x0) {
        lVar2 = *param_1;
        *param_1 = 0;
        if (lVar2 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        return;
      }
    }
    if ((ulong)param_2 >> 0x3d == 0) {
      lVar2 = (long)param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      plVar9 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
        plVar9 = (long *)((long)plVar9 + 1);
      } while (param_2 != plVar9);
      plVar9 = (long *)param_1[2];
      if (plVar9 != (long *)0x0) {
        plVar5 = (long *)plVar9[1];
        uVar4 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar4) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar4);
        }
        else if (param_2 <= plVar5) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar5 / (ulong)param_2;
          }
          plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar9;
        while (plVar6 != (long *)0x0) {
          plVar8 = (long *)plVar6[1];
          if (((ulong)param_2 & uVar4) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar4);
          }
          else if (param_2 <= plVar8) {
            uVar1 = 0;
            if (param_2 != (long *)0x0) {
              uVar1 = (ulong)plVar8 / (ulong)param_2;
            }
            plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
          }
          plVar7 = plVar6;
          if (plVar8 != plVar5) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
              *(long **)(lVar2 + (long)plVar8 * 8) = plVar9;
              plVar5 = plVar8;
            }
            else {
              *plVar9 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
              **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
              plVar7 = plVar9;
            }
          }
          plVar9 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
      return;
    }
    func_0x000109ffded8();
    if ((char)plVar9[1] == '\x01') {
      if (*(char *)((long)plVar5 + 0x2f) < '\0') {
        __ZdlPv(plVar5[3]);
      }
    }
    else if (plVar5 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  lVar2 = (long)param_2 << 3;
  __Znwm();
  lVar3 = *param_1;
  *param_1 = lVar2;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  plVar9 = (long *)0x0;
  param_1[1] = (long)param_2;
  do {
    *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
    plVar9 = (long *)((long)plVar9 + 1);
  } while (param_2 != plVar9);
  plVar9 = (long *)param_1[2];
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar5 = (long *)plVar9[1];
  uVar4 = (long)param_2 - 1;
  if (((ulong)param_2 & uVar4) == 0) {
    plVar5 = (long *)((ulong)plVar5 & uVar4);
  }
  else if (param_2 <= plVar5) {
    uVar1 = 0;
    if (param_2 != (long *)0x0) {
      uVar1 = (ulong)plVar5 / (ulong)param_2;
    }
    plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
  }
  *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
  plVar6 = (long *)*plVar9;
  while (plVar6 != (long *)0x0) {
    plVar8 = (long *)plVar6[1];
    if (((ulong)param_2 & uVar4) == 0) {
      plVar8 = (long *)((ulong)plVar8 & uVar4);
    }
    else if (param_2 <= plVar8) {
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar8 / (ulong)param_2;
      }
      plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
    }
    plVar7 = plVar6;
    if (plVar8 != plVar5) {
      lVar2 = *param_1;
      if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
        *(long **)(lVar2 + (long)plVar8 * 8) = plVar9;
        plVar5 = plVar8;
      }
      else {
        *plVar9 = *plVar6;
        *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
        **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
        plVar7 = plVar9;
      }
    }
    plVar9 = plVar7;
    plVar6 = (long *)*plVar7;
  }
  return;
}



/* Entry: 10a4f211c; end: 10a4f2257;  */

void FUN_10a4f211c(long *param_1,long *param_2)

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
  
  if (param_2 == (long *)0x0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 == (long *)0x0) {
      return;
    }
    plVar6 = (long *)plVar4[1];
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
    plVar7 = (long *)*plVar4;
    while (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      plVar8 = plVar7;
      if (plVar9 != plVar6) {
        lVar2 = *param_1;
        if (*(long *)(lVar2 + (long)plVar9 * 8) == 0) {
          *(long **)(lVar2 + (long)plVar9 * 8) = plVar4;
          plVar6 = plVar9;
        }
        else {
          *plVar4 = *plVar7;
          *plVar7 = **(undefined8 **)(lVar2 + (long)plVar9 * 8);
          **(long **)(lVar2 + (long)plVar9 * 8) = (long)plVar7;
          plVar8 = plVar4;
        }
      }
      plVar4 = plVar8;
      plVar7 = (long *)*plVar8;
    }
    return;
  }
  func_0x000109ffded8();
  plVar4 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar6 = (long *)plVar4[1];
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
      plVar7 = (long *)*plVar4;
      while (plVar7 != (long *)0x0) {
        plVar9 = (long *)plVar7[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar5);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar7;
        if (plVar9 != plVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar9 * 8) = plVar4;
            plVar6 = plVar9;
          }
          else {
            *plVar4 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + (long)plVar9 * 8);
            **(long **)(lVar2 + (long)plVar9 * 8) = (long)plVar7;
            plVar8 = plVar4;
          }
        }
        plVar4 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if ((char)plVar4[1] == '\x01') {
    if (*(char *)((long)plVar6 + 0x2f) < '\0') {
      __ZdlPv(plVar6[3]);
    }
  }
  else if (plVar6 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 10a4f2258; end: 10a4f2427;  */

void FUN_10a4f2258(long *param_1,long *param_2)

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
  
  plVar4 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar6 = (long *)plVar4[1];
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
      plVar9 = (long *)*plVar4;
      while (plVar9 != (long *)0x0) {
        plVar8 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar9;
        if (plVar8 != plVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar6 = plVar8;
          }
          else {
            *plVar4 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar9;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar9 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if ((char)plVar4[1] == '\x01') {
    if (*(char *)((long)plVar6 + 0x2f) < '\0') {
      __ZdlPv(plVar6[3]);
    }
  }
  else if (plVar6 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 10a4f2428; end: 10a4f2477;  */

void FUN_10a4f2428(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(char *)(param_2 + 0x2f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x18));
    }
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a4f2478; end: 10a4f249f;  */

void FUN_10a4f2478(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c != 0) {
    func_0x000109ffded8();
    if (plVar1[3] != 0) {
      plVar2 = (long *)plVar1[2];
      while (plVar2 != (long *)0x0) {
        plVar2 = (long *)*plVar2;
        __ZdlPv();
      }
      plVar1[2] = 0;
      lVar3 = plVar1[1];
      if (lVar3 != 0) {
        lVar4 = 0;
        do {
          *(undefined8 *)(*plVar1 + lVar4 * 8) = 0;
          lVar4 = lVar4 + 1;
        } while (lVar3 != lVar4);
      }
      plVar1[3] = 0;
    }
    return;
  }
  __Znwm((long)plVar1 << 4);
  return;
}



/* Entry: 10a4f24a0; end: 10a4f2537;  */

void FUN_10a4f24a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((ulong)param_1 >> 0x3c != 0) {
    func_0x000109ffded8();
    if (param_1[3] != 0) {
      plVar1 = (long *)param_1[2];
      while (plVar1 != (long *)0x0) {
        plVar1 = (long *)*plVar1;
        __ZdlPv();
      }
      param_1[2] = 0;
      lVar2 = param_1[1];
      if (lVar2 != 0) {
        lVar3 = 0;
        do {
          *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
          lVar3 = lVar3 + 1;
        } while (lVar2 != lVar3);
      }
      param_1[3] = 0;
    }
    return;
  }
  __Znwm((long)param_1 << 4);
  return;
}



/* Entry: 10a4f2538; end: 10a4f2707;  */

long * FUN_10a4f2538(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return plVar3;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar9 <= param_2) {
      return plVar3;
    }
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar9 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
      plVar9 = (long *)((long)plVar9 + 1);
    } while (param_2 != plVar9);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      plVar5 = (long *)plVar9[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar4);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar9;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar4);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar9;
            plVar5 = plVar8;
          }
          else {
            *plVar9 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar9;
          }
        }
        plVar9 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return plVar3;
  }
  func_0x000109ffded8();
  if (plVar3[3] != 0) {
    plVar3[4] = plVar3[3];
    __ZdlPv();
  }
  if (*plVar3 != 0) {
    plVar3[1] = *plVar3;
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 10a4f2708; end: 10a4f2937;  */

long * FUN_10a4f2708(long *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a4f2938; end: 10a4f29a7;  */

void FUN_10a4f2938(long *param_1)

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
        lVar1 = lVar1 + -0x10;
        FUN_10a2f2568();
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



/* Entry: 10a4f29a8; end: 10a4f2d2f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a4f29a8(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long alStack_50 [2];
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar5 = (undefined8 *)0x88;
  __Znwm();
  *puVar5 = FUN_10a5343e8;
  puVar5[1] = FUN_10a534664;
  FUN_10a4f3ba4(puVar5 + 2);
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
  puVar5[9] = *param_3;
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar5 + 10,param_3[1],param_3[2]);
  }
  else {
    uVar10 = param_3[1];
    puVar5[0xb] = param_3[2];
    puVar5[10] = uVar10;
    puVar5[0xc] = param_3[3];
  }
  puVar5[0xd] = param_2;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  *(undefined1 *)(puVar5 + 0x10) = 0;
  alStack_50[0] = 0;
  FUN_109d18960(puVar5 + 2,param_2,alStack_50);
  if (alStack_50[0] == 0) {
    puStack_40 = puVar5;
    if ((*(byte *)(puVar5 + 0xe) & 1) == 0) {
      puStack_38 = (undefined8 *)puVar5[0xd];
      alStack_50[1] = 0;
      (**(code **)*puStack_38)(puStack_38,alStack_50 + 1);
      __ZNSt13exception_ptrD1Ev(alStack_50);
      return;
    }
    __ZNSt13exception_ptrD1Ev(alStack_50);
    FUN_10a4f2dfc(puVar5 + 0xf,puVar5 + 9);
    puVar5[0xd] = puVar5[0xf];
    plVar6 = (long *)(puVar5[0xf] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0xd] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x10) = 1;
      lVar7 = puVar5[0xd];
      plVar6 = (long *)(lVar7 + 0x10);
      puStack_38 = (undefined8 *)puVar5[3];
      do {
        lVar9 = *plVar6;
        if (lVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            alStack_50[1] = 0;
            func_0x000109d1b588(lVar7 + 0x18,alStack_50 + 1);
            *(undefined8 *)(lVar7 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
    lVar7 = puVar5[0xd];
    if (((uint)*(undefined8 *)(puVar5[0xd] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar7 + 0xc0) & 1) != 0) {
        FUN_10a4f2d30(puVar5 + 2,lVar7 + 0x98);
        plVar6 = (long *)puVar5[0xd];
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
        plVar6 = (long *)puVar5[0xf];
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
        if (*(char *)((long)puVar5 + 0x67) < '\0') {
          __ZdlPv(puVar5[10]);
        }
        func_0x000109d1a1d0(puVar5 + 2);
        __ZdlPv(puVar5);
        return;
      }
    }
    else {
      func_0x0001092af97c(lVar7 + 0x90);
    }
  }
  else {
    func_0x0001092af97c(alStack_50);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4f2c38);
  (*pcVar4)();
}



/* Entry: 10a4f2d30; end: 10a4f2dfb;  */

void FUN_10a4f2d30(long param_1,undefined8 *param_2)

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
        func_0x00010a4f3d1c(lVar8 + 0x98);
        uVar10 = param_2[1];
        uVar9 = *param_2;
        *(undefined8 *)(lVar8 + 0xa8) = param_2[2];
        *(undefined8 *)(lVar8 + 0xa0) = uVar10;
        *(undefined8 *)(lVar8 + 0x98) = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        uVar9 = param_2[3];
        *(undefined8 *)(lVar8 + 0xb8) = param_2[4];
        *(undefined8 *)(lVar8 + 0xb0) = uVar9;
        param_2[3] = 0;
        param_2[4] = 0;
        *(undefined1 *)(lVar8 + 0xc0) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
        goto LAB_10a4f2dcc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a4f2dcc:
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
  } while( true );
}



/* Entry: 10a4f2dfc; end: 10a4f3ba3;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f375c) */
/* WARNING: Removing unreachable block (ram,0x00010a4f3358) */

void FUN_10a4f2dfc(code **param_1,long *param_2)

{
  undefined **ppuVar1;
  ulong *puVar2;
  code cVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  code *pcVar9;
  undefined *puVar10;
  long *plVar11;
  code *pcVar12;
  undefined *puVar13;
  code **ppcVar14;
  code **ppcVar15;
  long lVar16;
  undefined *extraout_x8;
  code **ppcVar17;
  long *plVar18;
  long *plVar19;
  code **ppcVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  ulong uVar23;
  code **ppcVar24;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar22 = (undefined *)*param_2;
  ppuVar8 = (undefined **)0x140;
  __Znwm();
  *ppuVar8 = FUN_10a533a58;
  ppuVar8[1] = FUN_10a534224;
  ppuVar8[0x24] = (undefined *)param_2;
  ppuVar8[0x25] = puVar22;
  FUN_10a4f3ba4(ppuVar8 + 2);
  pcVar12 = (code *)ppuVar8[7];
  if (pcVar12 != (code *)0x0) {
    pcVar9 = pcVar12 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
      if (bVar5) {
        *(long *)pcVar9 = *(long *)pcVar9 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = pcVar12;
  puVar13 = *(undefined **)(puVar22 + 0x90);
  ppuVar8[0x21] = puVar13;
  if (puVar13 != (undefined *)0x0) {
    plVar11 = (long *)(puVar13 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuVar1 = (undefined **)(puVar22 + 0x10);
  plVar11 = param_2 + 1;
  ppcVar15 = &pcStack_a8;
  func_0x000107c2b05c(ppcVar15,plVar11);
  ppcVar24 = *(code ***)(puVar22 + 0x18);
  if (ppcVar24 != (code **)0x0) {
    uVar23 = (long)ppcVar24 - 1;
    if (((ulong)ppcVar24 & uVar23) == 0) {
      param_1 = (code **)(uVar23 & (ulong)ppcVar15);
    }
    else {
      param_1 = ppcVar15;
      if (ppcVar24 <= ppcVar15) {
        uVar6 = 0;
        if (ppcVar24 != (code **)0x0) {
          uVar6 = (ulong)ppcVar15 / (ulong)ppcVar24;
        }
        param_1 = (code **)((long)ppcVar15 - uVar6 * (long)ppcVar24);
      }
    }
    if ((*(undefined8 **)(*ppuVar1 + (long)param_1 * 8) != (undefined8 *)0x0) &&
       (pcVar12 = (code *)**(undefined8 **)(*ppuVar1 + (long)param_1 * 8), pcVar12 != (code *)0x0))
    {
      uVar6 = param_2[2];
      plVar18 = (long *)param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x1f)) {
        uVar6 = (ulong)*(byte *)((long)param_2 + 0x1f);
        plVar18 = plVar11;
      }
      do {
        ppcVar14 = *(code ***)(pcVar12 + 8);
        if (ppcVar14 == ppcVar15) {
          cVar3 = pcVar12[0x27];
          uVar7 = *(ulong *)(pcVar12 + 0x18);
          if (-1 < (char)cVar3) {
            uVar7 = (ulong)(byte)cVar3;
          }
          if (uVar7 == uVar6) {
            pcVar9 = *(code **)(pcVar12 + 0x10);
            if (-1 < (char)cVar3) {
              pcVar9 = pcVar12 + 0x10;
            }
            _memcmp(pcVar9,plVar18,uVar6);
            if ((int)pcVar9 == 0) goto LAB_10a4f3260;
          }
        }
        else {
          if (((ulong)ppcVar24 & uVar23) == 0) {
            ppcVar14 = (code **)((ulong)ppcVar14 & uVar23);
          }
          else if (ppcVar24 <= ppcVar14) {
            uVar7 = 0;
            if (ppcVar24 != (code **)0x0) {
              uVar7 = (ulong)ppcVar14 / (ulong)ppcVar24;
            }
            ppcVar14 = (code **)((long)ppcVar14 - uVar7 * (long)ppcVar24);
          }
          if (ppcVar14 != param_1) break;
        }
        pcVar12 = *(code **)pcVar12;
      } while (pcVar12 != (code *)0x0);
    }
  }
  pcVar12 = (code *)0x30;
  __Znwm();
  pcStack_98 = (code *)0x0;
  *(long *)pcVar12 = 0;
  *(code ***)(pcVar12 + 8) = ppcVar15;
  pcStack_a8 = pcVar12;
  ppuStack_a0 = ppuVar1;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(pcVar12 + 0x10,param_2[1],param_2[2]);
  }
  else {
    lVar16 = *plVar11;
    *(long *)(pcVar12 + 0x18) = param_2[2];
    *(long *)(pcVar12 + 0x10) = lVar16;
    *(long *)(pcVar12 + 0x20) = param_2[3];
  }
  *(long *)(pcVar12 + 0x28) = 0;
  pcStack_98 = (code *)CONCAT71(pcStack_98._1_7_,1);
  if ((ppcVar24 == (code **)0x0) ||
     (*(float *)(puVar22 + 0x30) * (float)ppcVar24 < (float)(*(long *)(puVar22 + 0x28) + 1))) {
    uVar23 = 1;
    if ((code **)0x2 < ppcVar24) {
      uVar23 = (ulong)(((ulong)ppcVar24 & (long)ppcVar24 - 1U) != 0);
    }
    ppcVar14 = (code **)(uVar23 | (long)ppcVar24 << 1);
    ppcVar24 = (code **)(long)((float)(*(long *)(puVar22 + 0x28) + 1) / *(float *)(puVar22 + 0x30));
    if (ppcVar14 <= ppcVar24) {
      ppcVar14 = ppcVar24;
    }
    if ((long)ppcVar14 - 1U == 0) {
      ppcVar14 = (code **)0x2;
    }
    else if (((ulong)ppcVar14 & (long)ppcVar14 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    ppcVar24 = *(code ***)(puVar22 + 0x18);
    if (ppcVar24 < ppcVar14) {
LAB_10a4f3074:
      if ((ulong)ppcVar14 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10a4f392c;
      }
      puVar13 = (undefined *)((long)ppcVar14 << 3);
      __Znwm();
      puVar10 = *ppuVar1;
      *ppuVar1 = puVar13;
      if (puVar10 != (undefined *)0x0) {
        __ZdlPv();
      }
      ppcVar24 = (code **)0x0;
      *(code ***)(puVar22 + 0x18) = ppcVar14;
      do {
        *(undefined8 *)(*ppuVar1 + (long)ppcVar24 * 8) = 0;
        ppcVar24 = (code **)((long)ppcVar24 + 1);
      } while (ppcVar14 != ppcVar24);
      plVar11 = *(long **)(puVar22 + 0x20);
      ppcVar24 = ppcVar14;
      if (plVar11 != (long *)0x0) {
        ppcVar17 = (code **)plVar11[1];
        uVar23 = (long)ppcVar14 - 1;
        if (((ulong)ppcVar14 & uVar23) == 0) {
          ppcVar17 = (code **)((ulong)ppcVar17 & uVar23);
        }
        else if (ppcVar14 <= ppcVar17) {
          uVar6 = 0;
          if (ppcVar14 != (code **)0x0) {
            uVar6 = (ulong)ppcVar17 / (ulong)ppcVar14;
          }
          ppcVar17 = (code **)((long)ppcVar17 - uVar6 * (long)ppcVar14);
        }
        *(undefined **)(*ppuVar1 + (long)ppcVar17 * 8) = puVar22 + 0x20;
        plVar18 = (long *)*plVar11;
        while (plVar18 != (long *)0x0) {
          ppcVar20 = (code **)plVar18[1];
          if (((ulong)ppcVar14 & uVar23) == 0) {
            ppcVar20 = (code **)((ulong)ppcVar20 & uVar23);
          }
          else if (ppcVar14 <= ppcVar20) {
            uVar6 = 0;
            if (ppcVar14 != (code **)0x0) {
              uVar6 = (ulong)ppcVar20 / (ulong)ppcVar14;
            }
            ppcVar20 = (code **)((long)ppcVar20 - uVar6 * (long)ppcVar14);
          }
          plVar19 = plVar18;
          if (ppcVar20 != ppcVar17) {
            puVar13 = *ppuVar1;
            if (*(long *)(puVar13 + (long)ppcVar20 * 8) == 0) {
              *(long **)(puVar13 + (long)ppcVar20 * 8) = plVar11;
              ppcVar17 = ppcVar20;
            }
            else {
              *plVar11 = *plVar18;
              *plVar18 = **(undefined8 **)(puVar13 + (long)ppcVar20 * 8);
              **(long **)(puVar13 + (long)ppcVar20 * 8) = (long)plVar18;
              plVar19 = plVar11;
            }
          }
          plVar11 = plVar19;
          plVar18 = (long *)*plVar19;
        }
      }
    }
    else if (ppcVar14 < ppcVar24) {
      ppcVar17 = (code **)(long)((float)*(ulong *)(puVar22 + 0x28) / *(float *)(puVar22 + 0x30));
      if ((ppcVar24 < (code **)0x3) || (((ulong)ppcVar24 & (long)ppcVar24 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((code **)0x1 < ppcVar17) {
        ppcVar17 = (code **)(1L << (-LZCOUNT((long)ppcVar17 + -1) & 0x3fU));
      }
      if (ppcVar14 <= ppcVar17) {
        ppcVar14 = ppcVar17;
      }
      if (ppcVar14 < ppcVar24) {
        if (ppcVar14 != (code **)0x0) goto LAB_10a4f3074;
        puVar13 = *ppuVar1;
        *ppuVar1 = (undefined *)0x0;
        if (puVar13 != (undefined *)0x0) {
          __ZdlPv();
        }
        *(undefined8 *)(puVar22 + 0x18) = 0;
        ppcVar24 = (code **)0x0;
      }
      else {
        ppcVar24 = *(code ***)(puVar22 + 0x18);
      }
    }
    if (((ulong)ppcVar24 & (long)ppcVar24 - 1U) == 0) {
      param_1 = (code **)((long)ppcVar24 - 1U & (ulong)ppcVar15);
    }
    else {
      param_1 = ppcVar15;
      if (ppcVar24 <= ppcVar15) {
        uVar23 = 0;
        if (ppcVar24 != (code **)0x0) {
          uVar23 = (ulong)ppcVar15 / (ulong)ppcVar24;
        }
        param_1 = (code **)((long)ppcVar15 - uVar23 * (long)ppcVar24);
      }
    }
  }
  puVar13 = *ppuVar1;
  plVar11 = *(long **)(puVar13 + (long)param_1 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)(puVar22 + 0x20);
    *(long *)pcVar12 = *plVar11;
    *plVar11 = (long)pcVar12;
    *(long **)(puVar13 + (long)param_1 * 8) = plVar11;
    if (*(long *)pcVar12 != 0) {
      ppcVar15 = *(code ***)(*(long *)pcVar12 + 8);
      if (((ulong)ppcVar24 & (long)ppcVar24 - 1U) == 0) {
        ppcVar15 = (code **)((ulong)ppcVar15 & (long)ppcVar24 - 1U);
      }
      else if (ppcVar24 <= ppcVar15) {
        uVar23 = 0;
        if (ppcVar24 != (code **)0x0) {
          uVar23 = (ulong)ppcVar15 / (ulong)ppcVar24;
        }
        ppcVar15 = (code **)((long)ppcVar15 - uVar23 * (long)ppcVar24);
      }
      *(code **)(*ppuVar1 + (long)ppcVar15 * 8) = pcVar12;
    }
  }
  else {
    *(long *)pcVar12 = *plVar11;
    *plVar11 = (long)pcVar12;
  }
  *(long *)(puVar22 + 0x28) = *(long *)(puVar22 + 0x28) + 1;
LAB_10a4f3260:
  ppuVar8[0x26] = pcVar12;
  lVar16 = *(long *)(pcVar12 + 0x28);
  if ((lVar16 == 0) || (((uint)*(undefined8 *)(lVar16 + 0x10) >> 5 & 1) != 0)) {
    ppuVar1 = ppuVar8 + 0x22;
    *ppuVar1 = (undefined *)0x0;
    FUN_10a4f3d60(&pcStack_a8);
    pcStack_c8 = pcVar12 + 0x28;
    ppuStack_c0 = ppuVar1;
    FUN_10a4f40f4(&pcStack_c8,&pcStack_a8);
    if (ppuStack_a0 != (undefined **)0x0) {
      func_0x0001092b4274(&ppuStack_a0);
    }
    if (pcStack_a8 != (code *)0x0) {
      pcVar12 = pcStack_a8 + 8;
      do {
        uVar23 = *(ulong *)pcVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
        if (bVar5) {
          *(ulong *)pcVar12 = uVar23 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar23 & 0x1fffffffc) == 4) {
        do {
          uVar23 = *(ulong *)pcVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
          if (bVar5) {
            *(ulong *)pcVar12 = uVar23 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar23 - 1 == 0) {
          (**(code **)(*(long *)pcStack_a8 + 8))();
        }
      }
    }
    func_0x0001098ad440(ppuVar8 + 0x1f,ppuVar8 + 0x21,puVar22 + 0x38);
    ppuVar8[9] = ppuVar8[0x1f];
    plVar11 = (long *)(ppuVar8[0x1f] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(ppuVar8[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(ppuVar8 + 0x27) = 0;
      puVar22 = ppuVar8[9];
      plVar11 = (long *)(puVar22 + 0x10);
      pcVar12 = (code *)ppuVar8[3];
      do {
        lVar16 = *plVar11;
        if (lVar16 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            pcStack_a8 = (code *)0x0;
            ppuStack_a0 = ppuVar8;
            pcStack_98 = pcVar12;
            func_0x000109d1b588(puVar22 + 0x18,&pcStack_a8);
            goto LAB_10a4f38b4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar16 >> 1 & 1) == 0);
    }
    plVar11 = (long *)ppuVar8[9];
    if (((uint)*(undefined8 *)(ppuVar8[9] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar11 + 0x12);
      goto LAB_10a4f392c;
    }
    if (plVar11 != (long *)0x0) {
      puVar2 = (ulong *)(plVar11 + 1);
      do {
        uVar23 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar23 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar23 & 0x1fffffffc) == 4) {
        do {
          uVar23 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar23 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar23 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = (long *)ppuVar8[0x1f];
    if (plVar11 != (long *)0x0) {
      puVar2 = (ulong *)(plVar11 + 1);
      do {
        uVar23 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar23 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar23 & 0x1fffffffc) == 4) {
        do {
          uVar23 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar23 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar23 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    puVar13 = ppuVar8[0x25];
    puVar22 = ppuVar8[0x22];
    ppuVar8[0x22] = (undefined *)0x0;
    ppuVar8[0x23] = puVar22;
    ppuVar8[0x1f] = (undefined *)0x0;
    ppuVar8[0x20] = (undefined *)0x0;
    plVar11 = *(long **)(puVar13 + 0x50);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
LAB_10a4f34b8:
      FUN_10a4f41d4(&pcStack_a8,&UNK_10f65db58);
      FUN_109d1a6b8(ppuVar8 + 0x23,&pcStack_a8);
      __ZNSt13exception_ptrD1Ev(&pcStack_a8);
      if (plVar11 != (long *)0x0) goto LAB_10a4f36a4;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      ppuVar8[0x20] = (undefined *)plVar11;
      if (plVar11 == (long *)0x0) goto LAB_10a4f34b8;
      puVar21 = *(undefined8 **)(puVar13 + 0x48);
      ppuVar8[0x1f] = (undefined *)puVar21;
      if (puVar21 == (undefined8 *)0x0) goto LAB_10a4f34b8;
      puVar22 = ppuVar8[0x24];
      *(undefined4 *)(ppuVar8 + 9) = 3;
      if ((char)puVar22[0x1f] < '\0') {
        func_0x000107c3192c(ppuVar8 + 10,*(undefined8 *)(puVar22 + 8),
                            *(undefined8 *)(puVar22 + 0x10));
        cVar4 = puVar22[0x1f];
        ppuVar8[0xe] = (undefined *)0x0;
        ppuVar8[0xd] = (undefined *)0x0;
        ppuVar8[0x14] = (undefined *)0x0;
        ppuVar8[0x13] = (undefined *)0x0;
        ppuVar8[0x1a] = (undefined *)0x0;
        ppuVar8[0x19] = (undefined *)0x0;
        ppuVar8[0x1c] = (undefined *)0x0;
        ppuVar8[0x1b] = (undefined *)0x0;
        ppuVar8[0x1e] = (undefined *)0x0;
        ppuVar8[0x1d] = (undefined *)0x0;
        ppuVar8[0x16] = (undefined *)0x0;
        ppuVar8[0x15] = (undefined *)0x0;
        ppuVar8[0x18] = (undefined *)0x0;
        ppuVar8[0x17] = (undefined *)0x0;
        ppuVar8[0x10] = (undefined *)0x0;
        ppuVar8[0xf] = (undefined *)0x0;
        ppuVar8[0x12] = (undefined *)0x0;
        ppuVar8[0x11] = (undefined *)0x0;
        pcStack_c8 = (code *)ppuVar8[0x23];
        puVar22 = ppuVar8[0x24];
        ppuVar8[0x23] = (undefined *)0x0;
        if (-1 < cVar4) goto LAB_10a4f359c;
        func_0x000107c3192c(&ppuStack_c0,*(undefined8 *)(puVar22 + 8),
                            *(undefined8 *)(puVar22 + 0x10));
        pcStack_98 = pcStack_c8;
      }
      else {
        puVar10 = *(undefined **)(puVar22 + 0x10);
        puVar13 = *(undefined **)(puVar22 + 8);
        ppuVar8[0xc] = *(undefined **)(puVar22 + 0x18);
        ppuVar8[0xb] = puVar10;
        ppuVar8[10] = puVar13;
        ppuVar8[0x1a] = (undefined *)0x0;
        ppuVar8[0x19] = (undefined *)0x0;
        ppuVar8[0xe] = (undefined *)0x0;
        ppuVar8[0xd] = (undefined *)0x0;
        ppuVar8[0x14] = (undefined *)0x0;
        ppuVar8[0x13] = (undefined *)0x0;
        ppuVar8[0x10] = (undefined *)0x0;
        ppuVar8[0xf] = (undefined *)0x0;
        ppuVar8[0x12] = (undefined *)0x0;
        ppuVar8[0x11] = (undefined *)0x0;
        ppuVar8[0x16] = (undefined *)0x0;
        ppuVar8[0x15] = (undefined *)0x0;
        ppuVar8[0x18] = (undefined *)0x0;
        ppuVar8[0x17] = (undefined *)0x0;
        ppuVar8[0x1c] = (undefined *)0x0;
        ppuVar8[0x1b] = (undefined *)0x0;
        ppuVar8[0x1e] = (undefined *)0x0;
        ppuVar8[0x1d] = (undefined *)0x0;
        pcStack_c8 = (code *)ppuVar8[0x23];
        ppuVar8[0x23] = (undefined *)0x0;
LAB_10a4f359c:
        uStack_b8 = *(undefined8 *)(puVar22 + 0x10);
        ppuStack_c0 = *(undefined ***)(puVar22 + 8);
        lStack_b0 = *(long *)(puVar22 + 0x18);
        pcStack_98 = pcStack_c8;
      }
      ppuStack_d0 = ppuVar8 + 0x10;
      ppuStack_d8 = ppuVar8 + 0x16;
      pcStack_a8 = FUN_10a4f4228;
      ppuStack_a0 = &PTR_DAT_110be8ea8;
      pcStack_c8 = (code *)0x0;
      lStack_80 = lStack_b0;
      uStack_88 = uStack_b8;
      ppuStack_90 = ppuStack_c0;
      uStack_b8 = 0;
      lStack_b0 = 0;
      ppuStack_c0 = (undefined **)0x0;
      (**(code **)*puVar21)(puVar21,ppuVar8 + 9,&pcStack_a8);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      if (lStack_b0 < 0) {
        __ZdlPv(ppuStack_c0);
      }
      if (pcStack_c8 != (code *)0x0) {
        func_0x0001092b4274(&pcStack_c8);
      }
      if (*(char *)((long)ppuVar8 + 0xf7) < '\0') {
        __ZdlPv(ppuVar8[0x1c]);
      }
      if (*(char *)((long)ppuVar8 + 0xdf) < '\0') {
        __ZdlPv(ppuVar8[0x19]);
      }
      if (*(char *)((long)ppuVar8 + 199) < '\0') {
        __ZdlPv(*ppuStack_d8);
      }
      if (*(char *)((long)ppuVar8 + 0xaf) < '\0') {
        __ZdlPv(ppuVar8[0x13]);
      }
      if (*(char *)((long)ppuVar8 + 0x97) < '\0') {
        __ZdlPv(*ppuStack_d0);
      }
      if (*(char *)((long)ppuVar8 + 0x7f) < '\0') {
        __ZdlPv(ppuVar8[0xd]);
      }
      if (*(char *)((long)ppuVar8 + 0x67) < '\0') {
        __ZdlPv(ppuVar8[10]);
      }
LAB_10a4f36a4:
      plVar18 = plVar11 + 1;
      do {
        lVar16 = *plVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    if (ppuVar8[0x23] != (undefined *)0x0) {
      func_0x0001092b4274(ppuVar8 + 0x23);
    }
    if (*ppuVar1 != (undefined *)0x0) {
      func_0x0001092b4274(ppuVar1);
    }
  }
  FUN_10a4f3e88(ppuVar8 + 0x1f,ppuVar8 + 0x21,ppuVar8[0x26] + 0x28);
  ppuVar8[9] = ppuVar8[0x1f];
  plVar11 = (long *)(ppuVar8[0x1f] + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = *plVar11 + 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((uint)*(undefined8 *)(ppuVar8[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(ppuVar8 + 0x27) = 1;
    puVar22 = ppuVar8[9];
    plVar11 = (long *)(puVar22 + 0x10);
    pcVar12 = (code *)ppuVar8[3];
    do {
      lVar16 = *plVar11;
      if (lVar16 == 0) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_10a4f3770;
        pcStack_a8 = (code *)0x0;
        ppuStack_a0 = ppuVar8;
        pcStack_98 = pcVar12;
        func_0x000109d1b588(puVar22 + 0x18,&pcStack_a8);
LAB_10a4f38b4:
        *(undefined8 *)(puVar22 + 0x10) = 0;
        goto LAB_10a4f38b8;
      }
      ClearExclusiveLocal();
LAB_10a4f3770:
    } while (((uint)lVar16 >> 1 & 1) == 0);
  }
  puVar22 = ppuVar8[9];
  if (((uint)*(undefined8 *)(ppuVar8[9] + 0x10) >> 5 & 1) == 0) {
    if ((puVar22[0xb0] & 1) == 0) goto LAB_10a4f392c;
    FUN_10a4f3dd0(ppuVar8 + 2,puVar22 + 0x98);
    plVar11 = (long *)ppuVar8[9];
    if (plVar11 != (long *)0x0) {
      puVar2 = (ulong *)(plVar11 + 1);
      do {
        uVar23 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar23 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar23 & 0x1fffffffc) == 4) {
        do {
          uVar23 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar23 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar23 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = (long *)ppuVar8[0x1f];
    if (plVar11 != (long *)0x0) {
      puVar2 = (ulong *)(plVar11 + 1);
      do {
        uVar23 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar23 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar23 & 0x1fffffffc) == 4) {
        do {
          uVar23 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar23 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar23 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = (long *)ppuVar8[0x21];
    if (plVar11 != (long *)0x0) {
      puVar2 = (ulong *)(plVar11 + 1);
      do {
        uVar23 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar23 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar23 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        do {
          uVar23 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar23 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar23 - 1 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
    }
    func_0x000109d1a1d0(ppuVar8 + 2);
    __ZdlPv(ppuVar8);
LAB_10a4f38b8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    puVar22 = extraout_x8;
  }
  func_0x0001092af97c(puVar22 + 0x90);
LAB_10a4f392c:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a4f3930);
  (*pcVar12)();
}



/* Entry: 10a4f3ba4; end: 10a4f3c43;  */

undefined8 * FUN_10a4f3ba4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xc8;
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
  *puVar1 = &PTR_FUN_110be8e48;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
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



/* Entry: 10a4f3c44; end: 10a4f3d5f;  */

undefined8 * FUN_10a4f3c44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be8e48;
  func_0x00010a4f3cd8(param_1 + 0x13);
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a4f3d60; end: 10a4f3dcf;  */

void FUN_10a4f3d60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
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
  *puVar1 = &PTR_DAT_110be8e80;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a4f3dd0; end: 10a4f3e87;  */

void FUN_10a4f3dd0(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
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
        func_0x00010a4f3d1c(lVar8 + 0x98);
        FUN_10a4f45d8(lVar8 + 0x98,param_2,0);
        *(undefined1 *)(lVar8 + 0xc0) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
        goto LAB_10a4f3e58;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a4f3e58:
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
  } while( true );
}



/* Entry: 10a4f3e88; end: 10a4f3f6b;  */

void FUN_10a4f3e88(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plStack_28;
  
  plStack_28 = (long *)*param_2;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a4f46c4(param_1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_28 + 1);
    do {
      uVar5 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a4f3f6c; end: 10a4f40f3;  */

void FUN_10a4f3f6c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a4f3fb4(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a4f40f4; end: 10a4f4193;  */

void FUN_10a4f40f4(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_1;
  plVar4 = (long *)*plVar6;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  *plVar6 = *param_2;
  *param_2 = 0;
  plVar4 = (long *)param_1[1];
  if (*plVar4 != 0) {
    func_0x0001092b4274(plVar4);
  }
  *plVar4 = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a4f4194; end: 10a4f41d3;  */

long * FUN_10a4f4194(long *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  if (*param_1 != 0) {
    func_0x0001092b4274(param_1);
  }
  return param_1;
}



/* Entry: 10a4f41d4; end: 10a4f4227;  */

void FUN_10a4f41d4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  *puVar2 = param_2;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4f4208);
  (*pcVar1)();
}



/* Entry: 10a4f4228; end: 10a4f447b;  */

void FUN_10a4f4228(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  long lStack_80;
  long lStack_78;
  undefined7 uStack_70;
  char cStack_69;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  lVar7 = param_2 + 0x18;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010a383718(param_1,lVar7);
    ppuVar6 = &PTR_PTR_1133025c0;
    FUN_10ae079a0();
    func_0x00010a38376c();
    FUN_10ae07cd4(ppuVar6,&PTR_PTR_1133025c0);
    lVar3 = param_1;
    FUN_10ad02150();
    if ((int)lVar3 != 0) {
      lVar7 = *(long *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x10) = 0;
      lStack_60 = lVar7;
      FUN_10a4f447c(lVar7,param_1);
      if (lVar7 != 0) {
        func_0x0001092b4274(&lStack_60,lVar7);
      }
      return;
    }
    func_0x00010a383718(param_1,lVar7);
    ppuVar6 = &PTR_PTR_1133025f0;
    ppuVar4 = ppuVar6;
    FUN_10ae079a0();
    func_0x00010a38376c();
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x20);
    lVar3 = *(long *)(param_2 + 0x18);
    if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x2f);
      lVar3 = lVar7;
    }
    FUN_10ae03140(0,lVar3,uVar1);
    ppuVar6 = &PTR_PTR_113302620;
    ppuVar4 = ppuVar6;
    FUN_10ae079a0();
    FUN_10ae0314c();
  }
  FUN_10ae07cd4(ppuVar4,ppuVar6);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&lStack_80,&UNK_10f65db7e,lVar7);
  if (cStack_69 < '\0') {
    func_0x000107c3192c(&lStack_60,lStack_80,lStack_78);
  }
  else {
    lStack_58 = lStack_78;
    lStack_60 = lStack_80;
    lStack_50 = CONCAT17(cStack_69,uStack_70);
  }
  plVar5 = (long *)0x18;
  ___cxa_allocate_exception();
  if (lStack_50 < 0) {
    func_0x000107c3192c(plVar5,lStack_60,lStack_58);
  }
  else {
    plVar5[2] = lStack_50;
    plVar5[1] = lStack_58;
    *plVar5 = lStack_60;
  }
  ___cxa_throw(plVar5,&PTR_DAT_1108a6308,
               PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4f43f8);
  (*pcVar2)();
}



/* Entry: 10a4f447c; end: 10a4f45a7;  */

undefined1 FUN_10a4f447c(long param_1)

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
        func_0x00010a4f44f0(param_1 + 0x98);
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



/* Entry: 10a4f45a8; end: 10a4f45d7;  */

void FUN_10a4f45a8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR_DAT_110be8ea8;
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 10a4f45d8; end: 10a4f46c3;  */

undefined8 * FUN_10a4f45d8(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = param_1;
  FUN_10ad015f0(param_1,0x8000);
  if ((int)puVar1 != 0) {
    lVar2 = (long)*(char *)((long)param_1 + 0x17);
    puVar1 = param_1;
    if (lVar2 < 0) {
      lVar2 = param_1[1];
      puVar1 = (undefined8 *)*param_1;
    }
    FUN_10a151324(&uStack_48,puVar1,lVar2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
  }
  if (param_3 != 0) {
    FUN_10a4f0cfc(param_1);
  }
  return param_1;
}



/* Entry: 10a4f46c4; end: 10a4f4c3f;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f4814) */
/* WARNING: Removing unreachable block (ram,0x00010a4f4a24) */
/* WARNING: Removing unreachable block (ram,0x00010a4f47d4) */
/* WARNING: Removing unreachable block (ram,0x00010a4f4968) */

void FUN_10a4f46c4(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  plVar4 = (long *)0x120;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x16) = 0;
  *plVar4 = (long)&PTR_FUN_110be8ed0;
  plVar9 = plVar4 + 0x17;
  *plVar9 = *param_3;
  *param_3 = 0;
  lVar5 = *param_2;
  plVar4[0x18] = lVar5;
  if (lVar5 != 0) {
    plVar10 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4[0x1b] = 0;
  plVar4[0x1c] = 0x32aaaba7;
  plVar4[0x20] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x23] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x22] = 0;
  plVar4[0x21] = 0;
  lStack_78 = 0;
  plVar4[0x19] = (long)plVar4;
  plVar4[0x1a] = 0;
  plStack_70 = plVar9;
  if (((uint)*(undefined8 *)(plVar4[0x18] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1c);
    lVar5 = *plVar9;
    plVar10 = (long *)(lVar5 + 0x10);
    do {
      lVar7 = *plVar10;
      if (lVar7 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar7 = lVar5 + 0x18;
          pcStack_68 = FUN_10a4f4c40;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar9;
          func_0x000109d1b588(lVar7,&pcStack_68);
          *(undefined8 *)(lVar5 + 0x10) = 0;
          plStack_70[3] = lVar7;
          lVar5 = plVar4[0x18];
          plVar10 = (long *)(lVar5 + 0x10);
          goto LAB_10a4f4954;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar5 = plVar4[0x19];
    plVar10 = (long *)(lVar5 + 0x10);
    do {
      lVar7 = *plVar10;
      if (lVar7 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar5 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
    plVar10 = (long *)plVar4[0x18];
    plVar4[0x18] = 0;
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
    }
    lVar5 = plVar4[0x19];
    plVar4[0x19] = 0;
    if (lVar5 != 0) {
      func_0x0001092b4274(plVar4 + 0x19);
    }
    *param_1 = *plVar9;
    *plVar9 = 0;
    plStack_80 = plVar4;
LAB_10a4f4b94:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1c);
  }
  else {
    lVar5 = plVar4[0x19];
    plVar10 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar5,plVar10);
    plVar10 = (long *)*plVar9;
    *plVar9 = 0;
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x18];
    plVar4[0x18] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar5 = plVar4[0x19];
    plVar4[0x19] = 0;
    if (lVar5 != 0) {
      func_0x0001092b4274(plVar4 + 0x19);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a4f4954:
  do {
    lVar8 = *plVar10;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar7 = lVar5 + 0x18;
        pcStack_68 = FUN_10a4f4d50;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar9;
        func_0x000109d1b588(lVar7,&pcStack_68);
        *(undefined8 *)(lVar5 + 0x10) = 0;
        plStack_70[4] = lVar7;
        *param_1 = (long)plVar4;
        goto LAB_10a4f4b90;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar8 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar5 = plVar4[0x19];
  FUN_109d1857c();
  func_0x000109d1b350(lVar5,lVar7);
  plVar10 = (long *)plVar4[0x18];
  plVar4[0x18] = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  lVar7 = *plVar9;
  plVar10 = (long *)(lVar7 + 0x10);
  lVar5 = plStack_70[3];
  while (lVar8 = *plVar10, lVar8 != 0) {
    ClearExclusiveLocal();
LAB_10a4f4a38:
    if (((uint)lVar8 >> 1 & 1) != 0) goto LAB_10a4f4b88;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar3) {
    *plVar10 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a4f4a38;
  pcStack_68 = FUN_10a4f4c40;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar9;
  FUN_109d1b624(lVar7 + 0x18,&pcStack_68,lVar5);
  *(undefined8 *)(lVar7 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar10 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
  lVar5 = plVar4[0x19];
  plVar4[0x19] = 0;
  if (lVar5 != 0) {
    func_0x0001092b4274(plVar4 + 0x19);
  }
LAB_10a4f4b88:
  *param_1 = (long)plVar4;
LAB_10a4f4b90:
  plStack_80 = (long *)0x0;
  goto LAB_10a4f4b94;
}



/* Entry: 10a4f4c40; end: 10a4f4d4f;  */

void FUN_10a4f4c40(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a4f4d50;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar7 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0xb0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4f4d4c);
      (*pcVar4)();
    }
    FUN_10a4f447c(lVar7,*param_1 + 0x98);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar7,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_10a4f5100(param_1,param_1 + 3);
  return;
}



/* Entry: 10a4f4d50; end: 10a4f4e2f;  */

void FUN_10a4f4d50(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a4f4c40;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
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
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_10a4f5100(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a4f4e30; end: 10a4f4ea3;  */

long * FUN_10a4f4e30(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a4f4ea4; end: 10a4f50ff;  */

undefined8 * FUN_10a4f4ea4(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110be8ed0;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1c);
  if (param_1[0x19] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x18];
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
  plVar5 = (long *)param_1[0x17];
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
  *param_1 = &PTR_DAT_110be8e80;
  if ((*(char *)(param_1 + 0x16) == '\x01') && (*(char *)((long)param_1 + 0xaf) < '\0')) {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a4f5100; end: 10a4f516f;  */

void FUN_10a4f5100(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a4f5170; end: 10a4f520b;  */

void FUN_10a4f5170(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  lVar1 = 0;
  puVar4 = &uStack_40;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_8 = param_1[7];
  uStack_10 = param_1[6];
  puVar3 = param_1;
  do {
    lVar5 = 0;
    do {
      *(undefined4 *)((long)puVar3 + lVar5) = 0;
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 0x40);
    lVar1 = lVar1 + 1;
    puVar3 = (undefined8 *)((long)puVar3 + 4);
  } while (lVar1 != 4);
  uVar2 = 0;
  do {
    lVar1 = 0;
    lVar5 = param_2;
    do {
      lVar6 = 0;
      uVar7 = uVar2 | lVar1 << 2;
      fVar8 = *(float *)((long)param_1 + uVar7 * 4);
      do {
        fVar8 = fVar8 + *(float *)(lVar5 + lVar6) * *(float *)((long)puVar4 + lVar6 * 4);
        *(float *)((long)param_1 + uVar7 * 4) = fVar8;
        lVar6 = lVar6 + 4;
      } while (lVar6 != 0x10);
      lVar1 = lVar1 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar1 != 4);
    uVar2 = uVar2 + 1;
    puVar4 = (undefined8 *)((long)puVar4 + 4);
  } while (uVar2 != 4);
  return;
}



/* Entry: 10a4f520c; end: 10a4f5307;  */

undefined8 ** FUN_10a4f520c(undefined8 **param_1,undefined8 *param_2,long *param_3)

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
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110bef698,&lStack_90);
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



/* Entry: 10a4f5308; end: 10a4f5327;  */

void FUN_10a4f5308(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a4f5328; end: 10a4f545b;  */

void FUN_10a4f5328(long param_1,long param_2,undefined4 param_3,undefined4 *param_4,long param_5,
                  long param_6)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  
  plVar3 = &lStack_130;
  lStack_130 = param_1;
  lStack_128 = param_2;
  if (param_5 != 0) {
    plVar4 = &lStack_120;
    lStack_120 = param_1;
    lStack_118 = param_2;
    func_0x00010a289568(plVar4,*param_4);
    if (param_5 != 1) {
      plVar2 = &lStack_120;
      lStack_120 = param_1;
      lStack_118 = param_2;
      FUN_10a4efbc8(plVar2,param_4[1]);
      if (*plVar4 != 0 && *plVar2 != 0) {
        func_0x00010a4efc70(&lStack_130,param_3);
        if (*(int *)((undefined8 *)*plVar4 + 2) == 1) {
          FUN_10a4da464(&lStack_120,*(undefined8 *)(param_6 + 0x10),*(undefined8 *)*plVar4,*plVar2);
          plVar4 = (long *)0xcc;
          __Znwm();
          plVar4[0x15] = lStack_78;
          plVar4[0x14] = lStack_80;
          plVar4[0x17] = CONCAT44(uStack_64,uStack_68);
          plVar4[0x16] = lStack_70;
          *(undefined8 *)((long)plVar4 + 0xc4) = uStack_5c;
          *(ulong *)((long)plVar4 + 0xbc) = CONCAT44(uStack_60,uStack_64);
          plVar4[0xd] = lStack_b8;
          plVar4[0xc] = lStack_c0;
          plVar4[0xf] = lStack_a8;
          plVar4[0xe] = lStack_b0;
          plVar4[0x11] = lStack_98;
          plVar4[0x10] = lStack_a0;
          plVar4[0x13] = lStack_88;
          plVar4[0x12] = lStack_90;
          plVar4[5] = lStack_f8;
          plVar4[4] = lStack_100;
          plVar4[7] = lStack_e8;
          plVar4[6] = lStack_f0;
          plVar4[9] = lStack_d8;
          plVar4[8] = lStack_e0;
          plVar4[0xb] = lStack_c8;
          plVar4[10] = lStack_d0;
          plVar4[1] = lStack_118;
          *plVar4 = lStack_120;
          plVar4[3] = lStack_108;
          plVar4[2] = lStack_110;
        }
        else {
          plVar4 = (long *)0x0;
        }
        lVar5 = *plVar3;
        *plVar3 = (long)plVar4;
        if (lVar5 != 0) {
          __ZdlPv(lVar5);
        }
      }
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4f545c);
  (*pcVar1)();
}



/* Entry: 10a4f545c; end: 10a4f5477;  */

void FUN_10a4f545c(void)

{
  return;
}



/* Entry: 10a4f5478; end: 10a4f54a7;  */

void FUN_10a4f5478(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x38);
  FUN_10a4f54a8();
                    /* WARNING: Could not recover jumptable at 0x00010a4f54a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a4f54a8; end: 10a4f581f;  */

void FUN_10a4f54a8(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  undefined4 auStack_e8 [2];
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4f5774);
    (*pcVar5)();
  }
  lVar10 = param_1[6];
  param_1[6] = 0;
  plVar6 = (long *)0x90;
  lStack_f0 = lVar10;
  __Znwm();
  uStack_b8 = (undefined8 *)0x109d138c8;
  ppuStack_b0 = &PTR_DAT_110b3e838;
  pcStack_a8 = FUN_10a1b2664;
  FUN_10a236228();
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  FUN_10a0f3910(&uStack_b8,plVar6 + 2,0);
  uStack_c0 = 0;
  lStack_d0._0_4_ = 0x1010000;
  auStack_e8[0] = 0x2010000;
  uStack_d8 = 0;
  puStack_e0 = &uStack_b8;
  puStack_c8 = &uStack_b8;
  func_0x000109ac9fc8(&lStack_d0,auStack_e8,3,0);
  func_0x00010959b998(&uStack_110,*(undefined8 *)(*param_1 + 8),&uStack_b8);
  if (lStack_80 != 0) {
    piVar1 = (int *)(lStack_80 + 0x14);
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
      func_0x000109a848d4(&uStack_b8);
    }
  }
  lStack_80 = 0;
  uStack_a0 = 0;
  pcStack_a8 = (code *)0x0;
  uStack_90 = 0;
  uStack_98 = 0;
  if (0 < uStack_b8._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_78 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_b8._4_4_);
  }
  if (puStack_70 != auStack_68 && puStack_70 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_70 + -8));
  }
  (**(code **)(*plVar6 + 8))(plVar6);
  plVar7 = (long *)(lVar10 + 0x10);
  do {
    lVar9 = *plVar7;
    if (lVar9 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        if (*(char *)(lVar10 + 0xb0) == '\x01') {
          uStack_b8 = (undefined8 *)(lVar10 + 0x98);
          func_0x00010a4f5ef0(&uStack_b8);
        }
        *(undefined8 *)(lVar10 + 0xa0) = uStack_108;
        *(undefined8 *)(lVar10 + 0x98) = uStack_110;
        *(undefined8 *)(lVar10 + 0xa8) = uStack_100;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_110 = 0;
        *(undefined1 *)(lVar10 + 0xb0) = 1;
        *(undefined8 *)(lVar10 + 0x10) = 2;
        FUN_109d1b4dc(lVar10 + 0x18);
        goto LAB_10a4f56e8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_10a4f56e8:
      plVar7 = &uStack_b8;
      uStack_b8 = &uStack_110;
      func_0x00010a4f5ef0(plVar7);
      while( true ) {
        if ((char)param_1[5] == '\x01') {
          func_0x00010a136de4(param_1 + 2);
          plVar7 = param_1;
          FUN_10a509354(param_1);
          *(undefined1 *)(param_1 + 5) = 0;
        }
        lVar9 = lStack_f0;
        lStack_f0 = 0;
        lVar8 = 0;
        if (lVar9 != 0) {
          plVar7 = &lStack_f0;
          func_0x0001092b4274(plVar7);
          lVar8 = lStack_f0;
          if (lStack_f0 != 0) {
            plVar7 = &lStack_f0;
            func_0x0001092b4274(plVar7);
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) break;
        ___stack_chk_fail();
        if ((int)lVar8 != 0) goto LAB_10a4f5788;
        do {
          __Unwind_Resume(plVar7);
LAB_10a4f5788:
          func_0x000104bd46a0();
        } while ((int)lVar8 == 0);
        func_0x00010567aa40(&uStack_b8);
        (**(code **)(*plVar6 + 8))(plVar6);
        ___cxa_begin_catch(plVar7);
        __ZSt17current_exceptionv(&lStack_d0);
        func_0x000109d1b350(lVar10,&lStack_d0);
        plVar7 = &lStack_d0;
        __ZNSt13exception_ptrD1Ev();
        ___cxa_end_catch();
      }
      return;
    }
  } while( true );
}



/* Entry: 10a4f5820; end: 10a4f5b87;  */

undefined8 * FUN_10a4f5820(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110be9020;
  if (param_1[0x1d] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    func_0x00010a136de4(param_1 + 0x19);
    FUN_10a509354(param_1 + 0x17);
  }
  *param_1 = &PTR_DAT_110be9070;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    puStack_28 = param_1 + 0x13;
    func_0x00010a4f5ef0(&puStack_28);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a4f5b88; end: 10a4f5cf7;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f5cbc) */

void FUN_10a4f5b88(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x23;
  long lVar6;
  
  lVar5 = *param_1;
  plVar3 = param_1;
  if ((ulong)(param_1[2] - lVar5 >> 5) < param_4) {
    plVar2 = param_1;
    FUN_10a4f5cf8();
    if (param_4 >> 0x3b != 0) {
      FUN_10a4f5ea8();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = lVar5;
      __Unwind_Resume();
      if (*plVar2 != 0) {
        FUN_10a4dc440();
        __ZdlPv(*plVar2);
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[2] = 0;
      }
      return;
    }
    uVar4 = param_1[2] - *param_1 >> 4;
    if (uVar4 <= param_4) {
      uVar4 = param_4;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar4 = 0x7ffffffffffffff;
    }
    func_0x00010a4f5d30(param_1,uVar4);
    FUN_10a4f5d68(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar6 = param_1[1];
    if (param_4 <= (ulong)(lVar6 - lVar5 >> 5)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
          *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(param_2 + 0x18);
          param_2 = param_2 + 0x20;
          lVar5 = lVar5 + 0x20;
        } while (param_2 != param_3);
        lVar6 = param_1[1];
      }
      for (; lVar6 != lVar5; lVar6 = lVar6 + -0x20) {
      }
      param_1[1] = lVar5;
      return;
    }
    lVar1 = param_2 + (lVar6 - lVar5);
    if (lVar6 != lVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
        *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(param_2 + 0x18);
        param_2 = param_2 + 0x20;
        lVar5 = lVar5 + 0x20;
      } while (param_2 != lVar1);
      lVar6 = param_1[1];
    }
    FUN_10a4f5d68(param_1,lVar1,param_3,lVar6);
  }
  param_1[1] = (long)plVar3;
  return;
}



/* Entry: 10a4f5cf8; end: 10a4f5d67;  */

void FUN_10a4f5cf8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a4dc440();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a4f5d68; end: 10a4f5e2f;  */

undefined8 *
FUN_10a4f5d68(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_2 + 3);
    param_4 = puStack_38 + 4;
  }
  uStack_48 = 1;
  FUN_10a4f5e30(&uStack_60);
  return param_4;
}



/* Entry: 10a4f5e30; end: 10a4f5e63;  */

long FUN_10a4f5e30(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a4f5e64(param_1);
  }
  return param_1;
}



/* Entry: 10a4f5e64; end: 10a4f5ea7;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f5e90) */

void FUN_10a4f5e64(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x20
      ) {
  }
  return;
}



/* Entry: 10a4f5ea8; end: 10a4f5ebb;  */

void FUN_10a4f5ea8(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3b == 0) {
    __Znwm(param_2 << 5);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*puVar1 != 0) {
    FUN_10a4dc440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 10a4f5ebc; end: 10a4f5f2f;  */

void FUN_10a4f5ebc(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
    __Znwm(param_2 << 5);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*param_1 != 0) {
    FUN_10a4dc440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a4f5f30; end: 10a4f5fc3;  */

undefined1  [16]
FUN_10a4f5f30(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10a203020(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_10a4f5fc4(alStack_60,param_1,param_3,param_4,param_5);
    FUN_10a22ea44(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10a4f5fc4; end: 10a4f6057;  */

void FUN_10a4f5fc4(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  lVar1 = 0x88;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  uStack_48 = *param_4;
  FUN_10a4f6058(lVar1 + 0x20,&uStack_48,&uStack_49);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a4f6058; end: 10a4f6123;  */

undefined8 * FUN_10a4f6058(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2 = (undefined8 *)*param_2;
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
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 7;
  param_1[4] = 0x3d4ccccd3f000000;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xf;
  param_1[6] = 0x401a028f5c28f5c3;
  *(undefined4 *)(param_1 + 7) = 4;
  *(undefined4 *)(param_1 + 8) = 0xa0;
  *(undefined1 *)((long)param_1 + 0x44) = 1;
  param_1[9] = 0x8000000028;
  *(undefined2 *)(param_1 + 10) = 0x101;
  *(undefined1 *)((long)param_1 + 0x52) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0x405fc00000000000;
  return param_1;
}



/* Entry: 10a4f6124; end: 10a4f6137;  */

void FUN_10a4f6124(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar4 >> 0x3a == 0) {
    __Znwm((long)puVar4 << 6);
    return;
  }
  func_0x000109ffded8();
  puVar5 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar8 = (long *)*puVar5;
  if (plVar8 != (long *)0x0) {
    plVar9 = (long *)puVar5[1];
    plVar6 = plVar8;
    if (plVar9 != plVar8) {
      do {
        plVar9 = plVar9 + -1;
        plVar6 = (long *)*plVar9;
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar7 & 0x1fffffffc) == 4) {
            do {
              uVar7 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar7 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar7 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
      } while (plVar9 != plVar8);
      plVar6 = (long *)*puVar5;
    }
    puVar5[1] = plVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar6);
    return;
  }
  return;
}



/* Entry: 10a4f6138; end: 10a4f616b;  */

void FUN_10a4f6138(ulong param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1 >> 0x3a == 0) {
    __Znwm(param_1 << 6);
    return;
  }
  func_0x000109ffded8();
  puVar4 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar7 = (long *)*puVar4;
  if (plVar7 != (long *)0x0) {
    plVar8 = (long *)puVar4[1];
    plVar5 = plVar7;
    if (plVar8 != plVar7) {
      do {
        plVar8 = plVar8 + -1;
        plVar5 = (long *)*plVar8;
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar6 & 0x1fffffffc) == 4) {
            do {
              uVar6 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar6 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar6 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
      } while (plVar8 != plVar7);
      plVar5 = (long *)*puVar4;
    }
    puVar4[1] = plVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  return;
}


