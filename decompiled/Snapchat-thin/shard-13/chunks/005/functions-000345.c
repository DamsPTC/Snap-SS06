/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a74c51c; end: 10a74c673;  */

void FUN_10a74c51c(undefined8 *param_1,undefined8 **param_2,undefined8 ***param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  bool bVar6;
  undefined1 *puVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *puVar12;
  undefined8 **unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 **ppuStack_130;
  undefined8 **ppuStack_128;
  undefined8 uStack_120;
  undefined8 **ppuStack_118;
  undefined1 auStack_110 [8];
  undefined8 *apuStack_108 [8];
  long lStack_c8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  undefined1 *puVar5;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_88 = param_2;
  if (param_2 == (undefined8 **)0x0) {
    uStack_a0 = 0;
    FUN_10a762644(&uStack_80,&uStack_a0);
    param_1[1] = ppuStack_78;
    *param_1 = uStack_80;
    if (ppuStack_78 != (undefined8 **)0x0) {
      ppuVar8 = ppuStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar6) {
          *ppuVar8 = (undefined8 *)((long)*ppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a044790(auStack_70);
    ppuVar8 = apuStack_68;
    (*(code *)*apuStack_68[0])();
    if (ppuStack_78 != (undefined8 **)0x0) {
      ppuVar10 = ppuStack_78 + 1;
      do {
        puVar12 = *ppuVar10;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar6) {
          *ppuVar10 = (undefined8 *)((long)puVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
        ppuVar9 = ppuStack_78;
      } while (cVar3 != '\0');
      goto LAB_10a74c610;
    }
  }
  else {
    puStack_98 = param_2[0x10b];
    ppuStack_90 = (undefined8 **)param_2[0x10c];
    if (ppuStack_90 != (undefined8 **)0x0) {
      ppuVar8 = ppuStack_90 + 1;
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar6) {
          *ppuVar8 = (undefined8 *)((long)*ppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuVar8 = &puStack_98;
    param_3 = &ppuStack_88;
    FUN_10a76245c(param_1);
    if (ppuStack_90 != (undefined8 **)0x0) {
      ppuVar10 = ppuStack_90 + 1;
      do {
        puVar12 = *ppuVar10;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar6) {
          *ppuVar10 = (undefined8 *)((long)puVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
        ppuVar9 = ppuStack_90;
      } while (cVar3 != '\0');
LAB_10a74c610:
      if (puVar12 == (undefined8 *)0x0) {
        (*(code *)(*ppuVar9)[2])(ppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar8 = ppuVar9;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_128 = ppuVar8;
  if (ppuVar8 == (undefined8 **)0x0) {
    uStack_140 = 0;
    FUN_10a762c90(&uStack_120,&uStack_140);
    extraout_x8_00[1] = ppuStack_118;
    *extraout_x8_00 = uStack_120;
    if (ppuStack_118 != (undefined8 **)0x0) {
      ppuVar8 = ppuStack_118 + 1;
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar6) {
          *ppuVar8 = (undefined8 *)((long)*ppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a044790(auStack_110);
    ppuVar8 = apuStack_108;
    (*(code *)*apuStack_108[0])();
    if (ppuStack_118 != (undefined8 **)0x0) {
      ppuVar10 = ppuStack_118 + 1;
      do {
        puVar12 = *ppuVar10;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar6) {
          *ppuVar10 = (undefined8 *)((long)puVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
        ppuVar9 = ppuStack_118;
      } while (cVar3 != '\0');
      goto LAB_10a74c768;
    }
  }
  else {
    puStack_138 = ppuVar8[0x10b];
    ppuStack_130 = (undefined8 **)ppuVar8[0x10c];
    if (ppuStack_130 != (undefined8 **)0x0) {
      ppuVar8 = ppuStack_130 + 1;
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar6) {
          *ppuVar8 = (undefined8 *)((long)*ppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuVar8 = &puStack_138;
    param_3 = &ppuStack_128;
    FUN_10a762aa8(extraout_x8_00);
    if (ppuStack_130 != (undefined8 **)0x0) {
      ppuVar10 = ppuStack_130 + 1;
      do {
        puVar12 = *ppuVar10;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar6) {
          *ppuVar10 = (undefined8 *)((long)puVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
        ppuVar9 = ppuStack_130;
      } while (cVar3 != '\0');
LAB_10a74c768:
      if (puVar12 == (undefined8 *)0x0) {
        (*(code *)(*ppuVar9)[2])(ppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar8 = ppuVar9;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  pcVar13 = FUN_10a74c7cc;
  ppuVar10 = ppuVar8;
  __Unwind_Resume();
  puVar12 = &uStack_140;
  puVar11 = extraout_x8_01;
  puVar4 = &uStack_a0;
  while( true ) {
    ppuVar9 = ppuVar10;
    puVar5 = (undefined1 *)puVar12;
    *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 ***)(puVar5 + -0x20) = unaff_x20;
    *(undefined8 ***)(puVar5 + -0x18) = ppuVar8;
    *(undefined1 **)(puVar5 + -0x10) = (undefined1 *)((long)puVar4 + -0x10);
    *(code **)(puVar5 + -8) = pcVar13;
    ppuVar8 = ppuVar9;
    (*(code *)(*ppuVar9)[7])();
    if (param_3 < (undefined8 ***)0x7ffffffffffffff8) break;
    func_0x000109ffde50();
    if ((char)puVar5[-0x41] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar5 + -0x58));
    }
    pcVar13 = FUN_10a3c83bc;
    ppuVar10 = ppuVar8;
    __Unwind_Resume();
    puVar12 = (undefined8 *)(puVar5 + -0x60);
    ppuVar10 = ppuVar10 + -2;
    puVar11 = extraout_x8;
    unaff_x20 = ppuVar9;
    puVar4 = (undefined8 *)puVar5;
  }
  if (param_3 < (undefined8 ***)0x17) {
    puVar5[-0x41] = (char)param_3;
    puVar7 = puVar5 + -0x58;
    if (param_3 == (undefined8 ***)0x0) goto LAB_10a3c832c;
  }
  else {
    puVar2 = (undefined1 *)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      puVar2 = (undefined1 *)(((ulong)param_3 | 7) + 1);
    }
    puVar7 = puVar2;
    __Znwm();
    *(undefined8 ****)(puVar5 + -0x50) = param_3;
    *(ulong *)(puVar5 + -0x48) = (ulong)puVar2 | 0x8000000000000000;
    *(undefined1 **)(puVar5 + -0x58) = puVar7;
  }
  _memmove(puVar7,ppuVar8,param_3);
LAB_10a3c832c:
  puVar7[(long)param_3] = 0;
  bVar6 = ((ulong)ppuVar9[0x30] & 2) != 0;
  puVar1 = &UNK_10f65387d;
  if (bVar6) {
    puVar1 = &UNK_10f653888;
  }
  uVar14 = 10;
  if (bVar6) {
    uVar14 = 0xb;
  }
  puVar12 = (undefined8 *)(puVar5 + -0x58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar12,puVar1,uVar14);
  uVar14 = *puVar12;
  puVar11[1] = puVar12[1];
  *puVar11 = uVar14;
  puVar11[2] = puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  if ((char)puVar5[-0x41] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar5 + -0x58));
  }
  return;
}



/* Entry: 10a74c674; end: 10a74c7cb;  */

void FUN_10a74c674(undefined8 *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined1 *puVar3;
  bool bVar5;
  undefined1 *puVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar11;
  undefined8 **unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  undefined1 *puVar4;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_88 = param_2;
  if (param_2 == 0) {
    uStack_a0 = 0;
    FUN_10a762c90(&uStack_80,&uStack_a0);
    param_1[1] = ppuStack_78;
    *param_1 = uStack_80;
    if (ppuStack_78 != (undefined8 **)0x0) {
      ppuVar7 = ppuStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar5) {
          *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a044790(auStack_70);
    ppuVar7 = apuStack_68;
    (*(code *)*apuStack_68[0])();
    if (ppuStack_78 != (undefined8 **)0x0) {
      ppuVar9 = ppuStack_78 + 1;
      do {
        puVar11 = *ppuVar9;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar5) {
          *ppuVar9 = (undefined8 *)((long)puVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
        ppuVar8 = ppuStack_78;
      } while (cVar2 != '\0');
      goto LAB_10a74c768;
    }
  }
  else {
    puStack_98 = *(undefined8 **)(param_2 + 0x858);
    ppuStack_90 = *(undefined8 ***)(param_2 + 0x860);
    if (ppuStack_90 != (undefined8 **)0x0) {
      ppuVar7 = ppuStack_90 + 1;
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar5) {
          *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuVar7 = &puStack_98;
    param_3 = &lStack_88;
    FUN_10a762aa8(param_1);
    if (ppuStack_90 != (undefined8 **)0x0) {
      ppuVar9 = ppuStack_90 + 1;
      do {
        puVar11 = *ppuVar9;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar5) {
          *ppuVar9 = (undefined8 *)((long)puVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
        ppuVar8 = ppuStack_90;
      } while (cVar2 != '\0');
LAB_10a74c768:
      if (puVar11 == (undefined8 *)0x0) {
        (*(code *)(*ppuVar8)[2])(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar7 = ppuVar8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pcVar12 = FUN_10a74c7cc;
  ppuVar9 = ppuVar7;
  __Unwind_Resume();
  puVar11 = &uStack_a0;
  puVar10 = extraout_x8_00;
  puVar3 = (undefined1 *)register0x00000008;
  while( true ) {
    ppuVar8 = ppuVar9;
    puVar4 = (undefined1 *)puVar11;
    *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 ***)(puVar4 + -0x20) = unaff_x20;
    *(undefined8 ***)(puVar4 + -0x18) = ppuVar7;
    *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x10;
    *(code **)(puVar4 + -8) = pcVar12;
    ppuVar7 = ppuVar8;
    (*(code *)(*ppuVar8)[7])();
    if (param_3 < (long *)0x7ffffffffffffff8) break;
    func_0x000109ffde50();
    if ((char)puVar4[-0x41] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar4 + -0x58));
    }
    pcVar12 = FUN_10a3c83bc;
    ppuVar9 = ppuVar7;
    __Unwind_Resume();
    puVar11 = (undefined8 *)(puVar4 + -0x60);
    ppuVar9 = ppuVar9 + -2;
    puVar10 = extraout_x8;
    unaff_x20 = ppuVar8;
    puVar3 = puVar4;
  }
  if (param_3 < (long *)0x17) {
    puVar4[-0x41] = (char)param_3;
    puVar6 = puVar4 + -0x58;
    if (param_3 == (long *)0x0) goto LAB_10a3c832c;
  }
  else {
    puVar3 = (undefined1 *)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      puVar3 = (undefined1 *)(((ulong)param_3 | 7) + 1);
    }
    puVar6 = puVar3;
    __Znwm();
    *(long **)(puVar4 + -0x50) = param_3;
    *(ulong *)(puVar4 + -0x48) = (ulong)puVar3 | 0x8000000000000000;
    *(undefined1 **)(puVar4 + -0x58) = puVar6;
  }
  _memmove(puVar6,ppuVar7,param_3);
LAB_10a3c832c:
  puVar6[(long)param_3] = 0;
  bVar5 = ((ulong)ppuVar8[0x30] & 2) != 0;
  puVar1 = &UNK_10f65387d;
  if (bVar5) {
    puVar1 = &UNK_10f653888;
  }
  uVar13 = 10;
  if (bVar5) {
    uVar13 = 0xb;
  }
  puVar11 = (undefined8 *)(puVar4 + -0x58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar11,puVar1,uVar13);
  uVar13 = *puVar11;
  puVar10[1] = puVar11[1];
  *puVar10 = uVar13;
  puVar10[2] = puVar11[2];
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = 0;
  if ((char)puVar4[-0x41] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar4 + -0x58));
  }
  return;
}



/* Entry: 10a74c7cc; end: 10a74c85b;  */

void FUN_10a74c7cc(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar9;
  
  puVar3 = (undefined1 *)register0x00000008;
  while( true ) {
    plVar5 = param_2;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
    unaff_x29 = puVar3 + -0x10;
    unaff_x19 = plVar5;
    (**(code **)(*plVar5 + 0x38))();
    if (param_3 < 0x7ffffffffffffff8) break;
    func_0x000109ffde50();
    if ((char)puVar3[-0x41] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar3 + -0x58));
    }
    unaff_x30 = FUN_10a3c83bc;
    plVar8 = unaff_x19;
    __Unwind_Resume();
    puVar3 = puVar3 + -0x60;
    param_2 = plVar8 + -2;
    param_1 = extraout_x8;
    unaff_x20 = plVar5;
  }
  if (param_3 < 0x17) {
    puVar3[-0x41] = (char)param_3;
    puVar6 = puVar3 + -0x58;
    if (param_3 == 0) goto LAB_10a3c832c;
  }
  else {
    puVar2 = (undefined1 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar2 = (undefined1 *)((param_3 | 7) + 1);
    }
    puVar6 = puVar2;
    __Znwm();
    *(ulong *)(puVar3 + -0x50) = param_3;
    *(ulong *)(puVar3 + -0x48) = (ulong)puVar2 | 0x8000000000000000;
    *(undefined1 **)(puVar3 + -0x58) = puVar6;
  }
  _memmove(puVar6,unaff_x19,param_3);
LAB_10a3c832c:
  puVar6[param_3] = 0;
  bVar4 = (*(ushort *)(plVar5 + 0x30) & 2) != 0;
  puVar1 = &UNK_10f65387d;
  if (bVar4) {
    puVar1 = &UNK_10f653888;
  }
  uVar9 = 10;
  if (bVar4) {
    uVar9 = 0xb;
  }
  puVar7 = (undefined8 *)(puVar3 + -0x58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,puVar1,uVar9);
  uVar9 = *puVar7;
  param_1[1] = puVar7[1];
  *param_1 = uVar9;
  param_1[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if ((char)puVar3[-0x41] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar3 + -0x58));
  }
  return;
}



/* Entry: 10a74c85c; end: 10a74c90f;  */

void FUN_10a74c85c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000100;
  uStack_88 = CONCAT44(uStack_88._4_4_,4);
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_60 = 0x11700000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a74c910(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672cee;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a7631f0();
  FUN_10a763348(param_1);
  return;
}



/* Entry: 10a74c910; end: 10a74c9e7;  */

/* WARNING: Removing unreachable block (ram,0x00010a74c9a8) */

undefined1  [16] FUN_10a74c910(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f674a75,0xb);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a7630f4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a74c9e8; end: 10a74cb8b;  */

void FUN_10a74c9e8(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672cff;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000117;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672d08;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000117;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a74cb8c(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672d16;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000117;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a74cb8c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672d21;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000117;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a74cb8c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f672d2d;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f672059;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000117;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a74cb8c();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a74cb8c; end: 10a74cc2f;  */

undefined8 * FUN_10a74cb8c(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a74cc30);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a74cc30; end: 10a74ccaf;  */

undefined8 FUN_10a74cc30(void)

{
  return 0x100;
}



/* Entry: 10a74ccb0; end: 10a74cdaf;  */

void FUN_10a74ccb0(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110c15558;
  param_1[2] = &PTR_DAT_110c155f8;
  param_1[7] = &PTR_DAT_110c15650;
  (*(code *)**(undefined8 **)(param_1[0x1d] + 0x18))(&plStack_28);
  FUN_109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  func_0x00010a763448(param_1 + 0x1f);
  plVar7 = (long *)param_1[0x1e];
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  lVar6 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar6 != 0) {
    func_0x00010a763404();
  }
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10a74cdb0; end: 10a74cdc3;  */

void FUN_10a74cdb0(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110c15558;
  param_1[2] = &PTR_DAT_110c155f8;
  param_1[7] = &PTR_DAT_110c15650;
  (*(code *)**(undefined8 **)(param_1[0x1d] + 0x18))(&plStack_28);
  FUN_109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  func_0x00010a763448(param_1 + 0x1f);
  plVar7 = (long *)param_1[0x1e];
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  lVar6 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar6 != 0) {
    func_0x00010a763404();
  }
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10a74cdc4; end: 10a74ce07;  */

void FUN_10a74cdc4(void)

{
  FUN_10a74ccb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a74ce08; end: 10a74cecb;  */

undefined *** FUN_10a74ce08(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10a7634a0;
  puStack_78 = &UNK_10f674a81;
  uStack_70 = 0x12;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,param_2);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)(pppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  return (undefined ***)0x100;
}



/* Entry: 10a74cecc; end: 10a74cf57;  */

undefined8 FUN_10a74cecc(void)

{
  return 0x100;
}



/* Entry: 10a74cf58; end: 10a74cfab;  */

void FUN_10a74cf58(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = 0x13c00000124;
  FUN_10a74cfac(param_1,&uStack_58);
  FUN_10a763764();
  return;
}



/* Entry: 10a74cfac; end: 10a74d083;  */

/* WARNING: Removing unreachable block (ram,0x00010a74d044) */

undefined1  [16] FUN_10a74cfac(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f674a94,0x15);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a763668(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a74d084; end: 10a74d19b;  */

void FUN_10a74d084(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a74d19c; end: 10a74d45f;  */

void FUN_10a74d19c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f674aaa,0xf);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c16120;
  pppuVar2 = (undefined8 ***)&UNK_10f672059;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c16120;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a74d440;
    FUN_10a054dac(param_1,&UNK_10f672d3c,FUN_10a763844,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2e899b,FUN_10a763b0c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2ecce3,FUN_10a763bc8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"mediaId",FUN_10a763ce4,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f674aaa,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a74d440:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a74d444);
  (*pcVar6)();
}



/* Entry: 10a74d460; end: 10a74d70b;  */

void FUN_10a74d460(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a003e74(param_1,&UNK_10f65547e,0x10);
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c16cd8;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 0xb;
    puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 0xb;
    puVar6 = (undefined8 *)(param_1 + 0x1b8);
  }
  *(undefined4 *)((long)puVar6 + 7) = 0x736e6f69;
  *puVar6 = 0x6974704f776f6853;
  *(undefined1 *)((long)puVar6 + 0xb) = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &UNK_10f674aba;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c16cd8;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&UNK_10f674aba,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a763da0,0,0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f672d48,FUN_10a763ecc,FUN_10a763f88);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f672d57,FUN_10a7640d0,FUN_10a764188);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f672d62,FUN_10a764248,FUN_10a764300);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    puStack_a0 = *(undefined **)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uVar7 = *(ulong *)(lVar1 + -0x48);
    uVar8 = *(ulong *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar2 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar3 = uStack_80._4_4_;
    uVar5 = param_1;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    FUN_10a0051e8(param_1,uVar8 & 0xffffffff,uVar2,uStack_50 & 0xffffffff,uVar7 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&puStack_a0,(undefined8 *)(param_1 + 0x1b8),&UNK_10f674aba,0xb);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a74d70c);
  (*pcVar4)();
}



/* Entry: 10a74d70c; end: 10a74dad3;  */

void FUN_10a74d70c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f663d81,0x16);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c16138;
  pppuVar2 = (undefined8 ***)&UNK_10f672059;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c16138;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a74dab4;
    FUN_10a054dac(param_1,&UNK_10f672d6d,FUN_10a7643c0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a74dab4;
    FUN_10a054dac(param_1,&UNK_10f672d7d,FUN_10a764514,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f672d8d,FUN_10a7645f0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c16d10,FUN_10a7648f4);
    FUN_10a0605c4(param_1,&UNK_10f672d9b,FUN_10a7656fc,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f663d81,0x16);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f65547e;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f672059;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a74dab4;
      FUN_10a054dac(param_1,&UNK_10f672daf,FUN_10a765830,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a74dab4;
      FUN_10a054dac(param_1,&UNK_10f672dc4,FUN_10a7658c8,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a74dab4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a74dab8);
  (*pcVar6)();
}



/* Entry: 10a74dad4; end: 10a74dc4b;  */

void FUN_10a74dad4(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "CameraRollMediaType";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13d00000141;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Unset";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13d00000141;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a74dc4c(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Image";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13d00000141;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a74dc4c();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Video";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f672059;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x13d00000141;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a74dc4c();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a74dc4c; end: 10a74dcf3;  */

undefined8 * FUN_10a74dc4c(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a74dcf4);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a74dcf4; end: 10a74dde3;  */

undefined8 * FUN_10a74dcf4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_DAT_110c157e0;
  puVar1[2] = &PTR_FUN_110c158a8;
  puVar1[7] = &PTR_DAT_110c15900;
  puVar1[0x1c] = &PTR_DAT_110c15920;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c16d38;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110c16d88;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[0xb] = FUN_10a765c8c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x20] = puVar1 + 3;
  param_1[0x21] = puVar1;
  *(undefined4 *)(param_1 + 0x22) = 10;
  *(undefined2 *)((long)param_1 + 0x114) = 0x101;
  return param_1;
}



/* Entry: 10a74dde4; end: 10a74de1b;  */

void FUN_10a74dde4(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0xe0;
  FUN_10a7c9810(*(long *)(*(long *)(param_1 + 0x50) + 3000) + 0x78,&lStack_18,&lStack_18);
  return;
}



/* Entry: 10a74de1c; end: 10a74def7;  */

void FUN_10a74de1c(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (*(int *)(param_1 + 0x110) == 1) {
    lVar5 = *(long *)(param_1 + 0xe8);
    lVar4 = *(long *)(param_1 + 0xf0);
    while (lVar4 != lVar5) {
      lVar4 = lVar4 + -0x10;
      FUN_10a765960();
    }
    *(long *)(param_1 + 0xf0) = lVar5;
  }
  FUN_10a765d1c(auStack_40,param_2,2);
  FUN_10a74def8(param_1 + 0xe8,auStack_40);
  FUN_10a74dff4(*(undefined8 *)(param_1 + 0x100),param_1 + 0xe8);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10a74def8; end: 10a74dff3;  */

void FUN_10a74def8(long *param_1,code **param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined1 uVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  code **ppcVar20;
  code **unaff_x25;
  ulong unaff_x26;
  ulong uVar21;
  code *pcVar22;
  undefined1 auStack_190 [8];
  long *plStack_188;
  code **ppcStack_180;
  long *plStack_178;
  long *plStack_170;
  undefined1 *puStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  long lStack_150;
  ulong uStack_148;
  long *plStack_140;
  long lStack_138;
  float fStack_130;
  code **ppcStack_120;
  code **ppcStack_118;
  long alStack_110 [3];
  long *plStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long *plStack_e0;
  long lStack_b0;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar18 = (long *)param_1[1];
  if (plVar18 < (long *)param_1[2]) {
    pcVar11 = param_2[1];
    pcVar22 = *param_2;
    plVar18[1] = (long)param_2[1];
    *plVar18 = (long)pcVar22;
    if (pcVar11 != (code *)0x0) {
      pcVar11 = pcVar11 + 8;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
        if (bVar2) {
          *(long *)pcVar11 = *(long *)pcVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar6 = plVar18 + 2;
  }
  else {
    plVar18 = (long *)((long)plVar18 - *param_1);
    uVar21 = ((long)plVar18 >> 4) + 1;
    if (uVar21 >> 0x3c != 0) {
      FUN_10a756c54();
      plVar6 = &lStack_150;
      pcStack_38 = FUN_10a74dff4;
      lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_148 = 0;
      lStack_150 = 0;
      lStack_138 = 0;
      plStack_140 = (long *)0x0;
      fStack_130 = *(float *)(param_1 + 7);
      ppcVar8 = (code **)param_1[4];
      puStack_40 = &stack0xfffffffffffffff0;
      FUN_10a764afc(&lStack_150,ppcVar8);
      plVar19 = (long *)param_1[5];
      if (plVar19 != (long *)0x0) {
        unaff_x25 = (code **)0x3;
        do {
          uVar21 = uStack_148;
          uVar14 = plVar19[2];
          uVar12 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) * -0x622015f714c7d297;
          uVar12 = (uVar14 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
          uVar12 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
          if (uStack_148 != 0) {
            uVar13 = uStack_148 - 1;
            if ((uStack_148 & uVar13) == 0) {
              unaff_x26 = uVar12 & uVar13;
            }
            else {
              unaff_x26 = uVar12;
              if (uStack_148 <= uVar12) {
                uVar16 = 0;
                if (uStack_148 != 0) {
                  uVar16 = uVar12 / uStack_148;
                }
                unaff_x26 = uVar12 - uVar16 * uStack_148;
              }
            }
            plVar15 = *(long **)(lStack_150 + unaff_x26 * 8);
            if (plVar15 != (long *)0x0) {
              do {
                while( true ) {
                  plVar15 = (long *)*plVar15;
                  if (plVar15 == (long *)0x0) goto LAB_10a74e124;
                  uVar16 = plVar15[1];
                  if (uVar16 != uVar12) break;
                  if (plVar15[2] == uVar14) goto LAB_10a74e284;
                }
                if ((uStack_148 & uVar13) == 0) {
                  uVar16 = uVar16 & uVar13;
                }
                else if (uStack_148 <= uVar16) {
                  uVar4 = 0;
                  if (uStack_148 != 0) {
                    uVar4 = uVar16 / uStack_148;
                  }
                  uVar16 = uVar16 - uVar4 * uStack_148;
                }
              } while (uVar16 == unaff_x26);
            }
          }
LAB_10a74e124:
          plVar18 = (long *)0x68;
          __Znwm();
          *plVar18 = 0;
          plVar18[1] = uVar12;
          lVar5 = plVar19[3];
          lVar17 = plVar19[2];
          plVar18[3] = plVar19[3];
          plVar18[2] = lVar17;
          if (lVar5 != 0) {
            plVar15 = (long *)(lVar5 + 8);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar2) {
                *plVar15 = *plVar15 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          pcStack_f0 = (code *)(plVar18 + 4);
          *(undefined1 *)(plVar18 + 0xc) = 3;
          if ((char)plVar19[0xc] == '\0') {
            uVar10 = 0;
          }
          else {
            ppcVar8 = (code **)(plVar19 + 4);
            FUN_10a005398(&pcStack_f0,ppcVar8);
            uVar10 = (undefined1)plVar19[0xc];
          }
          *(undefined1 *)(plVar18 + 0xc) = uVar10;
          if ((uVar21 == 0) || (fStack_130 * (float)uVar21 < (float)(lStack_138 + 1))) {
            uVar14 = 1;
            if (2 < uVar21) {
              uVar14 = (ulong)((uVar21 & uVar21 - 1) != 0);
            }
            ppcVar8 = (code **)(uVar14 | uVar21 << 1);
            ppcVar20 = (code **)(long)((float)(lStack_138 + 1) / fStack_130);
            if (ppcVar8 <= ppcVar20) {
              ppcVar8 = ppcVar20;
            }
            FUN_10a764afc(&lStack_150,ppcVar8);
            uVar21 = uStack_148;
            if ((uStack_148 & uStack_148 - 1) == 0) {
              unaff_x26 = uStack_148 - 1 & uVar12;
            }
            else {
              unaff_x26 = uVar12;
              if (uStack_148 <= uVar12) {
                uVar14 = 0;
                if (uStack_148 != 0) {
                  uVar14 = uVar12 / uStack_148;
                }
                unaff_x26 = uVar12 - uVar14 * uStack_148;
              }
            }
          }
          plVar15 = *(long **)(lStack_150 + unaff_x26 * 8);
          if (plVar15 == (long *)0x0) {
            *plVar18 = (long)plStack_140;
            *(long ***)(lStack_150 + unaff_x26 * 8) = &plStack_140;
            plStack_140 = plVar18;
            if (*plVar18 != 0) {
              uVar14 = *(ulong *)(*plVar18 + 8);
              if ((uVar21 & uVar21 - 1) == 0) {
                uVar14 = uVar14 & uVar21 - 1;
              }
              else if (uVar21 <= uVar14) {
                uVar12 = 0;
                if (uVar21 != 0) {
                  uVar12 = uVar14 / uVar21;
                }
                uVar14 = uVar14 - uVar12 * uVar21;
              }
              *(long **)(lStack_150 + uVar14 * 8) = plVar18;
            }
          }
          else {
            *plVar18 = *plVar15;
            *plVar15 = (long)plVar18;
          }
          lStack_138 = lStack_138 + 1;
LAB_10a74e284:
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      ppcVar20 = (code **)0x0;
      if (plStack_140 != (long *)0x0) {
        plVar18 = alStack_110;
        unaff_x25 = &pcStack_f0;
        plVar19 = plStack_140;
        do {
          ppcVar9 = (code **)plVar19[2];
          plVar15 = param_1 + 3;
          FUN_10a76550c();
          ppcVar8 = ppcVar9;
          if (plVar15 != (long *)0x0) {
            if ((char)plVar19[0xc] == '\x01') {
              ppcVar20 = (code **)plVar19[4];
              ppuStack_e8 = (undefined **)0x0;
              plStack_e0 = (long *)0x0;
              pcStack_f0 = (code *)0x0;
              FUN_10a756ba0(&pcStack_f0,*param_2,param_2[1],(long)param_2[1] - (long)*param_2 >> 4);
              ppcVar8 = (code **)(plVar19 + 4);
              (*(code *)ppcVar20)(&pcStack_f0,ppcVar8);
              ppcStack_120 = unaff_x25;
              FUN_10a756c9c(&ppcStack_120);
            }
            else if ((char)plVar19[0xc] == '\x02') {
              plVar15 = plVar19 + 4;
              FUN_10a688b40();
              if (plVar15 == (long *)0x0) {
                ppcVar8 = (code **)0x0;
                ppcVar20 = ppcVar9;
                if (ppcVar9 != (code **)0x0) {
                  ppcStack_118 = (code **)plVar19[5];
                  ppcStack_120 = (code **)plVar19[4];
                  if (plVar19[5] != 0) {
                    plVar15 = (long *)(plVar19[5] + 8);
                    do {
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                      if (bVar2) {
                        *plVar15 = *plVar15 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                  }
                  alStack_110[0] = 0;
                  alStack_110[1] = 0;
                  alStack_110[2] = 0;
                  FUN_10a756ba0(plVar18,*param_2,param_2[1],(long)param_2[1] - (long)*param_2 >> 4);
                  pcStack_f0 = FUN_10a76603c;
                  ppuStack_e8 = &PTR_FUN_110c16e20;
                  plVar15 = (long *)0x28;
                  __Znwm();
                  plVar15[1] = (long)ppcStack_118;
                  *plVar15 = (long)ppcStack_120;
                  ppcStack_120 = (code **)0x0;
                  ppcStack_118 = (code **)0x0;
                  plVar15[3] = 0;
                  plVar15[4] = 0;
                  plVar15[2] = 0;
                  FUN_10a756ba0();
                  ppcVar8 = &pcStack_f0;
                  plStack_e0 = plVar15;
                  FUN_10a4634ec(ppcVar9,ppcVar8);
                  (*(code *)*ppuStack_e8)(&ppuStack_e8);
                  plStack_f8 = plVar18;
                  FUN_10a756c9c(&plStack_f8);
                  ppcVar20 = ppcStack_118;
                  if (ppcStack_118 != (code **)0x0) {
                    ppcVar9 = ppcStack_118 + 1;
                    do {
                      pcVar11 = *ppcVar9;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppcVar9,0x10);
                      if (bVar2) {
                        *ppcVar9 = pcVar11 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                    if (pcVar11 == (code *)0x0) {
                      (**(code **)(*ppcStack_118 + 0x10))(ppcStack_118);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar20);
                    }
                  }
                }
              }
              else {
                *plVar15 = CONCAT44((int)((ulong)*plVar15 >> 0x20) + 1,(int)*plVar15 + 1);
                ppcVar8 = param_2;
                FUN_10a765e60(plVar19[4],param_2);
                iVar3 = *(int *)((long)plVar15 + 4) + -1;
                *(int *)((long)plVar15 + 4) = iVar3;
                if (iVar3 == 0) {
                  *(undefined4 *)plVar15 = 0;
                }
              }
            }
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      FUN_10a765c9c();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
        return;
      }
      ___stack_chk_fail();
      (*(code *)*ppuStack_e8)(unaff_x25 + 1);
      FUN_10a766000(&ppcStack_120);
      FUN_10a765c9c(&lStack_150);
      puVar7 = (undefined1 *)plVar6;
      __Unwind_Resume();
      pcStack_158 = FUN_10a74e550;
      ppcStack_180 = ppcVar20;
      plStack_178 = plVar18;
      plStack_170 = param_1;
      puStack_168 = (undefined1 *)plVar6;
      ppuStack_160 = &puStack_40;
      if (*(int *)(puVar7 + 0x30) == 1) {
        lVar5 = *(long *)(puVar7 + 8);
        lVar17 = *(long *)(puVar7 + 0x10);
        while (lVar17 != lVar5) {
          lVar17 = lVar17 + -0x10;
          FUN_10a765960();
        }
        *(long *)(puVar7 + 0x10) = lVar5;
      }
      FUN_10a765d1c(auStack_190,ppcVar8,2);
      FUN_10a74def8(puVar7 + 8,auStack_190);
      FUN_10a74dff4(*(undefined8 *)(puVar7 + 0x20),puVar7 + 8);
      if (plStack_188 != (long *)0x0) {
        plVar18 = plStack_188 + 1;
        do {
          lVar5 = *plVar18;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar2) {
            *plVar18 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_188 + 0x10))(plStack_188);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_188);
          return;
        }
      }
      return;
    }
    uVar12 = param_1[2] - *param_1;
    uVar14 = (long)uVar12 >> 3;
    if (uVar14 <= uVar21) {
      uVar14 = uVar21;
    }
    if (0x7fffffffffffffef < uVar12) {
      uVar14 = 0xfffffffffffffff;
    }
    ppcVar8 = param_2;
    FUN_10a756c68();
    plVar18 = (long *)(uVar14 + (long)plVar18);
    pcVar11 = param_2[1];
    pcVar22 = *param_2;
    plVar18[1] = (long)param_2[1];
    *plVar18 = (long)pcVar22;
    if (pcVar11 != (code *)0x0) {
      pcVar11 = pcVar11 + 8;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
        if (bVar2) {
          *(long *)pcVar11 = *(long *)pcVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar6 = plVar18 + 2;
    lVar17 = (long)plVar18 - (param_1[1] - *param_1);
    _memcpy(lVar17);
    lVar5 = *param_1;
    *param_1 = lVar17;
    param_1[1] = (long)plVar6;
    param_1[2] = uVar14 + (long)ppcVar8 * 0x10;
    if (lVar5 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10a74dff4; end: 10a74e54f;  */

void FUN_10a74dff4(long param_1,code **param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined1 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *unaff_x21;
  long *plVar18;
  code **ppcVar19;
  code **unaff_x25;
  ulong unaff_x26;
  ulong uVar20;
  undefined1 auStack_160 [8];
  long *plStack_158;
  code **ppcStack_150;
  long *plStack_148;
  long lStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  long lStack_120;
  ulong uStack_118;
  long *plStack_110;
  long lStack_108;
  float fStack_100;
  code **ppcStack_f0;
  code **ppcStack_e8;
  long alStack_e0 [3];
  long *plStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  long *plStack_b0;
  long lStack_80;
  
  plVar6 = &lStack_120;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  lStack_120 = 0;
  lStack_108 = 0;
  plStack_110 = (long *)0x0;
  fStack_100 = *(float *)(param_1 + 0x38);
  ppcVar8 = *(code ***)(param_1 + 0x20);
  FUN_10a764afc(&lStack_120,ppcVar8);
  plVar18 = *(long **)(param_1 + 0x28);
  if (plVar18 != (long *)0x0) {
    unaff_x25 = (code **)0x3;
    do {
      uVar20 = uStack_118;
      uVar11 = plVar18[2];
      uVar15 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
      uVar15 = (uVar11 >> 0x20 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
      uVar15 = (uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297;
      if (uStack_118 != 0) {
        uVar13 = uStack_118 - 1;
        if ((uStack_118 & uVar13) == 0) {
          unaff_x26 = uVar15 & uVar13;
        }
        else {
          unaff_x26 = uVar15;
          if (uStack_118 <= uVar15) {
            uVar17 = 0;
            if (uStack_118 != 0) {
              uVar17 = uVar15 / uStack_118;
            }
            unaff_x26 = uVar15 - uVar17 * uStack_118;
          }
        }
        plVar16 = *(long **)(lStack_120 + unaff_x26 * 8);
        if (plVar16 != (long *)0x0) {
          do {
            while( true ) {
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) goto LAB_10a74e124;
              uVar17 = plVar16[1];
              if (uVar17 != uVar15) break;
              if (plVar16[2] == uVar11) goto LAB_10a74e284;
            }
            if ((uStack_118 & uVar13) == 0) {
              uVar17 = uVar17 & uVar13;
            }
            else if (uStack_118 <= uVar17) {
              uVar4 = 0;
              if (uStack_118 != 0) {
                uVar4 = uVar17 / uStack_118;
              }
              uVar17 = uVar17 - uVar4 * uStack_118;
            }
          } while (uVar17 == unaff_x26);
        }
      }
LAB_10a74e124:
      unaff_x21 = (long *)0x68;
      __Znwm();
      *unaff_x21 = 0;
      unaff_x21[1] = uVar15;
      lVar12 = plVar18[3];
      lVar5 = plVar18[2];
      unaff_x21[3] = plVar18[3];
      unaff_x21[2] = lVar5;
      if (lVar12 != 0) {
        plVar16 = (long *)(lVar12 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar2) {
            *plVar16 = *plVar16 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pcStack_c0 = (code *)(unaff_x21 + 4);
      *(undefined1 *)(unaff_x21 + 0xc) = 3;
      if ((char)plVar18[0xc] == '\0') {
        uVar10 = 0;
      }
      else {
        ppcVar8 = (code **)(plVar18 + 4);
        FUN_10a005398(&pcStack_c0,ppcVar8);
        uVar10 = (undefined1)plVar18[0xc];
      }
      *(undefined1 *)(unaff_x21 + 0xc) = uVar10;
      if ((uVar20 == 0) || (fStack_100 * (float)uVar20 < (float)(lStack_108 + 1))) {
        uVar11 = 1;
        if (2 < uVar20) {
          uVar11 = (ulong)((uVar20 & uVar20 - 1) != 0);
        }
        ppcVar8 = (code **)(uVar11 | uVar20 << 1);
        ppcVar19 = (code **)(long)((float)(lStack_108 + 1) / fStack_100);
        if (ppcVar8 <= ppcVar19) {
          ppcVar8 = ppcVar19;
        }
        FUN_10a764afc(&lStack_120,ppcVar8);
        uVar20 = uStack_118;
        if ((uStack_118 & uStack_118 - 1) == 0) {
          unaff_x26 = uStack_118 - 1 & uVar15;
        }
        else {
          unaff_x26 = uVar15;
          if (uStack_118 <= uVar15) {
            uVar11 = 0;
            if (uStack_118 != 0) {
              uVar11 = uVar15 / uStack_118;
            }
            unaff_x26 = uVar15 - uVar11 * uStack_118;
          }
        }
      }
      plVar16 = *(long **)(lStack_120 + unaff_x26 * 8);
      if (plVar16 == (long *)0x0) {
        *unaff_x21 = (long)plStack_110;
        *(long ***)(lStack_120 + unaff_x26 * 8) = &plStack_110;
        plStack_110 = unaff_x21;
        if (*unaff_x21 != 0) {
          uVar11 = *(ulong *)(*unaff_x21 + 8);
          if ((uVar20 & uVar20 - 1) == 0) {
            uVar11 = uVar11 & uVar20 - 1;
          }
          else if (uVar20 <= uVar11) {
            uVar15 = 0;
            if (uVar20 != 0) {
              uVar15 = uVar11 / uVar20;
            }
            uVar11 = uVar11 - uVar15 * uVar20;
          }
          *(long **)(lStack_120 + uVar11 * 8) = unaff_x21;
        }
      }
      else {
        *unaff_x21 = *plVar16;
        *plVar16 = (long)unaff_x21;
      }
      lStack_108 = lStack_108 + 1;
LAB_10a74e284:
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  ppcVar19 = (code **)0x0;
  if (plStack_110 != (long *)0x0) {
    unaff_x21 = alStack_e0;
    unaff_x25 = &pcStack_c0;
    plVar18 = plStack_110;
    do {
      ppcVar9 = (code **)plVar18[2];
      lVar12 = param_1 + 0x18;
      FUN_10a76550c();
      ppcVar8 = ppcVar9;
      if (lVar12 != 0) {
        if ((char)plVar18[0xc] == '\x01') {
          ppcVar19 = (code **)plVar18[4];
          ppuStack_b8 = (undefined **)0x0;
          plStack_b0 = (long *)0x0;
          pcStack_c0 = (code *)0x0;
          FUN_10a756ba0(&pcStack_c0,*param_2,param_2[1],(long)param_2[1] - (long)*param_2 >> 4);
          ppcVar8 = (code **)(plVar18 + 4);
          (*(code *)ppcVar19)(&pcStack_c0,ppcVar8);
          ppcStack_f0 = unaff_x25;
          FUN_10a756c9c(&ppcStack_f0);
        }
        else if ((char)plVar18[0xc] == '\x02') {
          plVar16 = plVar18 + 4;
          FUN_10a688b40();
          if (plVar16 == (long *)0x0) {
            ppcVar8 = (code **)0x0;
            ppcVar19 = ppcVar9;
            if (ppcVar9 != (code **)0x0) {
              ppcStack_e8 = (code **)plVar18[5];
              ppcStack_f0 = (code **)plVar18[4];
              if (plVar18[5] != 0) {
                plVar16 = (long *)(plVar18[5] + 8);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar2) {
                    *plVar16 = *plVar16 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              alStack_e0[0] = 0;
              alStack_e0[1] = 0;
              alStack_e0[2] = 0;
              FUN_10a756ba0(unaff_x21,*param_2,param_2[1],(long)param_2[1] - (long)*param_2 >> 4);
              pcStack_c0 = FUN_10a76603c;
              ppuStack_b8 = &PTR_FUN_110c16e20;
              plVar16 = (long *)0x28;
              __Znwm();
              plVar16[1] = (long)ppcStack_e8;
              *plVar16 = (long)ppcStack_f0;
              ppcStack_f0 = (code **)0x0;
              ppcStack_e8 = (code **)0x0;
              plVar16[3] = 0;
              plVar16[4] = 0;
              plVar16[2] = 0;
              FUN_10a756ba0();
              ppcVar8 = &pcStack_c0;
              plStack_b0 = plVar16;
              FUN_10a4634ec(ppcVar9,ppcVar8);
              (*(code *)*ppuStack_b8)(&ppuStack_b8);
              plStack_c8 = unaff_x21;
              FUN_10a756c9c(&plStack_c8);
              ppcVar19 = ppcStack_e8;
              if (ppcStack_e8 != (code **)0x0) {
                ppcVar9 = ppcStack_e8 + 1;
                do {
                  pcVar14 = *ppcVar9;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppcVar9,0x10);
                  if (bVar2) {
                    *ppcVar9 = pcVar14 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (pcVar14 == (code *)0x0) {
                  (**(code **)(*ppcStack_e8 + 0x10))(ppcStack_e8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar19);
                }
              }
            }
          }
          else {
            *plVar16 = CONCAT44((int)((ulong)*plVar16 >> 0x20) + 1,(int)*plVar16 + 1);
            ppcVar8 = param_2;
            FUN_10a765e60(plVar18[4],param_2);
            iVar3 = *(int *)((long)plVar16 + 4) + -1;
            *(int *)((long)plVar16 + 4) = iVar3;
            if (iVar3 == 0) {
              *(undefined4 *)plVar16 = 0;
            }
          }
        }
      }
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  FUN_10a765c9c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x25 + 1);
  FUN_10a766000(&ppcStack_f0);
  FUN_10a765c9c(&lStack_120);
  puVar7 = (undefined1 *)plVar6;
  __Unwind_Resume();
  pcStack_128 = FUN_10a74e550;
  ppcStack_150 = ppcVar19;
  plStack_148 = unaff_x21;
  lStack_140 = param_1;
  puStack_138 = (undefined1 *)plVar6;
  puStack_130 = &stack0xfffffffffffffff0;
  if (*(int *)(puVar7 + 0x30) == 1) {
    lVar12 = *(long *)(puVar7 + 8);
    lVar5 = *(long *)(puVar7 + 0x10);
    while (lVar5 != lVar12) {
      lVar5 = lVar5 + -0x10;
      FUN_10a765960();
    }
    *(long *)(puVar7 + 0x10) = lVar12;
  }
  FUN_10a765d1c(auStack_160,ppcVar8,2);
  FUN_10a74def8(puVar7 + 8,auStack_160);
  FUN_10a74dff4(*(undefined8 *)(puVar7 + 0x20),puVar7 + 8);
  if (plStack_158 != (long *)0x0) {
    plVar6 = plStack_158 + 1;
    do {
      lVar12 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_158);
      return;
    }
  }
  return;
}



/* Entry: 10a74e550; end: 10a74e557;  */

void FUN_10a74e550(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    lVar5 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    while (lVar4 != lVar5) {
      lVar4 = lVar4 + -0x10;
      FUN_10a765960();
    }
    *(long *)(param_1 + 0x10) = lVar5;
  }
  FUN_10a765d1c(auStack_40,param_2,2);
  FUN_10a74def8(param_1 + 8,auStack_40);
  FUN_10a74dff4(*(undefined8 *)(param_1 + 0x20),param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10a74e558; end: 10a74e633;  */

void FUN_10a74e558(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (*(int *)(param_1 + 0x110) == 1) {
    lVar5 = *(long *)(param_1 + 0xe8);
    lVar4 = *(long *)(param_1 + 0xf0);
    while (lVar4 != lVar5) {
      lVar4 = lVar4 + -0x10;
      FUN_10a765960();
    }
    *(long *)(param_1 + 0xf0) = lVar5;
  }
  FUN_10a765d1c(auStack_40,param_2,1);
  FUN_10a74def8(param_1 + 0xe8,auStack_40);
  FUN_10a74dff4(*(undefined8 *)(param_1 + 0x100),param_1 + 0xe8);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10a74e634; end: 10a74e643;  */

void FUN_10a74e634(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    lVar5 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    while (lVar4 != lVar5) {
      lVar4 = lVar4 + -0x10;
      FUN_10a765960();
    }
    *(long *)(param_1 + 0x10) = lVar5;
  }
  FUN_10a765d1c(auStack_40,param_2,1);
  FUN_10a74def8(param_1 + 8,auStack_40);
  FUN_10a74dff4(*(undefined8 *)(param_1 + 0x20),param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10a74e644; end: 10a74e81f;  */

void FUN_10a74e644(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lStack_50;
  long *plStack_48;
  
  if (*(int *)(param_1 + 0x110) != 1) {
    plVar5 = &lStack_50;
    func_0x000107c2b05c();
    plVar9 = *(long **)(param_1 + 0xe8);
    plVar7 = *(long **)(param_1 + 0xf0);
    if (plVar9 == plVar7) {
LAB_10a74e6a8:
      if (plVar9 != plVar7) {
        plStack_48 = (long *)plVar9[1];
        lStack_50 = *plVar9;
        if (plVar9[1] != 0) {
          plVar5 = (long *)(plVar9[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar7 = *(long **)(param_1 + 0xf0);
        }
        if (plVar7 == plVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a74e80c);
          (*pcVar4)();
        }
        plVar5 = plVar9 + 2;
        if (plVar5 != plVar7) {
          do {
            lVar10 = plVar5[1];
            lVar6 = *plVar5;
            *plVar5 = 0;
            plVar5[1] = 0;
            plVar8 = (long *)plVar9[1];
            plVar9[1] = lVar10;
            *plVar9 = lVar6;
            if (plVar8 != (long *)0x0) {
              plVar1 = plVar8 + 1;
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
                (**(code **)(*plVar8 + 0x10))(plVar8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            plVar5 = plVar5 + 2;
            plVar9 = plVar9 + 2;
          } while (plVar5 != plVar7);
          plVar7 = *(long **)(param_1 + 0xf0);
        }
        while (plVar7 != plVar9) {
          plVar7 = plVar7 + -2;
          FUN_10a765960(plVar7);
        }
        *(long **)(param_1 + 0xf0) = plVar9;
        FUN_10a74dff4(*(undefined8 *)(param_1 + 0x100),(undefined8 *)(param_1 + 0xe8));
        plVar5 = plStack_48;
        if (plStack_48 == (long *)0x0) {
          return;
        }
        plVar9 = plStack_48 + 1;
        do {
          lVar6 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 != 0) {
          return;
        }
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        return;
      }
    }
    else {
      do {
        if (*(long **)(*plVar9 + 0x48) == plVar5) goto LAB_10a74e6a8;
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar7);
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      plVar5 = (long *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        plVar5 = param_2;
      }
      func_0x00010ae06f08(0,1,&UNK_10f672df1,&UNK_10f672e32,0x58,&UNK_10f672e9d,in_x6,in_x7,plVar5);
    }
  }
  return;
}



/* Entry: 10a74e820; end: 10a74e827;  */

void FUN_10a74e820(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lStack_50;
  long *plStack_48;
  
  if (*(int *)(param_1 + 0x30) != 1) {
    plVar5 = &lStack_50;
    func_0x000107c2b05c();
    plVar9 = *(long **)(param_1 + 8);
    plVar7 = *(long **)(param_1 + 0x10);
    if (plVar9 == plVar7) {
LAB_10a74e6a8:
      if (plVar9 != plVar7) {
        plStack_48 = (long *)plVar9[1];
        lStack_50 = *plVar9;
        if (plVar9[1] != 0) {
          plVar5 = (long *)(plVar9[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar7 = *(long **)(param_1 + 0x10);
        }
        if (plVar7 == plVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a74e80c);
          (*pcVar4)();
        }
        plVar5 = plVar9 + 2;
        if (plVar5 != plVar7) {
          do {
            lVar10 = plVar5[1];
            lVar6 = *plVar5;
            *plVar5 = 0;
            plVar5[1] = 0;
            plVar8 = (long *)plVar9[1];
            plVar9[1] = lVar10;
            *plVar9 = lVar6;
            if (plVar8 != (long *)0x0) {
              plVar1 = plVar8 + 1;
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
                (**(code **)(*plVar8 + 0x10))(plVar8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            plVar5 = plVar5 + 2;
            plVar9 = plVar9 + 2;
          } while (plVar5 != plVar7);
          plVar7 = *(long **)(param_1 + 0x10);
        }
        while (plVar7 != plVar9) {
          plVar7 = plVar7 + -2;
          FUN_10a765960(plVar7);
        }
        *(long **)(param_1 + 0x10) = plVar9;
        FUN_10a74dff4(*(undefined8 *)(param_1 + 0x20),(undefined8 *)(param_1 + 8));
        plVar5 = plStack_48;
        if (plStack_48 == (long *)0x0) {
          return;
        }
        plVar9 = plStack_48 + 1;
        do {
          lVar6 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 != 0) {
          return;
        }
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        return;
      }
    }
    else {
      do {
        if (*(long **)(*plVar9 + 0x48) == plVar5) goto LAB_10a74e6a8;
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar7);
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      plVar5 = (long *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        plVar5 = param_2;
      }
      func_0x00010ae06f08(0,1,&UNK_10f672df1,&UNK_10f672e32,0x58,&UNK_10f672e9d,in_x6,in_x7,plVar5);
    }
  }
  return;
}



/* Entry: 10a74e828; end: 10a74eac7;  */

/* WARNING: Removing unreachable block (ram,0x00010a74ea74) */

void FUN_10a74e828(long param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_74;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  undefined4 uStack_40;
  
  uVar2 = *param_2;
  *(short *)(param_1 + 0x114) = (short)param_2[1];
  *(uint *)(param_1 + 0x110) = uVar2;
  if ((int)uVar2 < 1) {
    __ZNSt3__19to_stringEi(&lStack_a0,0x14);
    FUN_109feb280(&lStack_60,&UNK_10f672ef1,&lStack_a0);
    FUN_10a0029c0(&lStack_60);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a74ea5c);
    (*pcVar6)();
  }
  if (0x14 < uVar2) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f672df1,&UNK_10f672f1a,0x65,&UNK_10f672f71,in_x6,in_x7,uVar2,
                          0x14,0x14);
    }
    *(undefined4 *)(param_1 + 0x110) = 0x14;
  }
  if (((*(byte *)(param_1 + 0x114) & 1) == 0) && ((*(byte *)(param_1 + 0x115) & 1) == 0)) {
    puVar8 = (undefined8 *)&UNK_10f672fce;
    FUN_10a00946c();
    if (uStack_90._7_1_ < '\0') {
      __ZdlPv(lStack_a0);
    }
    __Unwind_Resume();
    plVar12 = (long *)puVar8[1];
    *puVar8 = 0;
    puVar8[1] = 0;
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 1;
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar12);
        return;
      }
    }
    return;
  }
  lVar9 = *(long *)(param_1 + 0xe8);
  lVar7 = *(long *)(param_1 + 0xf0);
  while (lVar7 != lVar9) {
    lVar7 = lVar7 + -0x10;
    FUN_10a765960();
  }
  *(long *)(param_1 + 0xf0) = lVar9;
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 3000);
  uStack_58 = 0;
  lStack_60 = 0;
  lStack_48 = 0;
  lStack_50 = 0;
  uStack_40 = 0x3f800000;
  func_0x00010a756d0c(&lStack_60,3);
  puStack_70 = &DAT_10f674ac6;
  uStack_68 = 0xc;
  uStack_74._0_1_ = *(undefined1 *)(param_1 + 0x114);
  FUN_10a756f18(&lStack_60,&puStack_70,&uStack_74);
  puStack_70 = &DAT_10f674ad3;
  uStack_68 = 0xc;
  uStack_74 = CONCAT31(uStack_74._1_3_,*(undefined1 *)(param_1 + 0x115));
  FUN_10a756f18(&lStack_60,&puStack_70,&uStack_74);
  puStack_70 = &DAT_10f674ae0;
  uStack_68 = 0x17;
  uStack_74 = *(undefined4 *)(param_1 + 0x110);
  FUN_10a7573c0(&lStack_60,&puStack_70,&uStack_74);
  puStack_70 = &DAT_10f674af8;
  uStack_68 = 0x19;
  uStack_74 = CONCAT31(uStack_74._1_3_,1);
  FUN_10a756f18(&lStack_60,&puStack_70,&uStack_74);
  uStack_98 = uStack_58;
  lStack_a0 = lStack_60;
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_90 = lStack_50;
  lStack_88 = lStack_48;
  uStack_80 = uStack_40;
  if (lStack_48 != 0) {
    uVar10 = *(ulong *)(lStack_50 + 8);
    if ((uStack_98 & uStack_98 - 1) == 0) {
      uVar10 = uVar10 & uStack_98 - 1;
    }
    else if (uStack_98 <= uVar10) {
      uVar5 = 0;
      if (uStack_98 != 0) {
        uVar5 = uVar10 / uStack_98;
      }
      uVar10 = uVar10 - uVar5 * uStack_98;
    }
    *(undefined8 **)(lStack_a0 + uVar10 * 8) = &uStack_90;
    lStack_50 = 0;
    lStack_48 = 0;
  }
  FUN_10a7575a8(&lStack_60);
  FUN_10a79c004(uVar11,1,3,&lStack_a0);
  FUN_10a7575a8(&lStack_a0);
  return;
}



/* Entry: 10a74eac8; end: 10a74ebeb;  */

void FUN_10a74eac8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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



/* Entry: 10a74ebec; end: 10a74ec83;  */

undefined1  [16] FUN_10a74ebec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f6552a3;
  return auVar1;
}



/* Entry: 10a74ec84; end: 10a74efeb;  */

void FUN_10a74ec84(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f6552a3,0x17);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c16170;
  pppuVar2 = (undefined8 ***)&UNK_10f672059;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0xad;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c16170;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"scope",FUN_10a7660fc,FUN_10a7661b8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"cursor",FUN_10a76636c,FUN_10a76644c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f37b588,FUN_10a7665c4,FUN_10a7666a4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"limit",FUN_10a76675c,FUN_10a766818);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f6552a3,0x17);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f6552a3;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f672059;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a74efcc;
      FUN_10a054dac(param_1,&UNK_10f6721c7,FUN_10a7668d8,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a74efcc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a74efd0);
  (*pcVar6)();
}



/* Entry: 10a74efec; end: 10a74f04b;  */

undefined8 * FUN_10a74efec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c15968;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a74f04c; end: 10a74f04f;  */

undefined8 * FUN_10a74f04c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c15968;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a74f050; end: 10a74f063;  */

void FUN_10a74f050(void)

{
  FUN_10a74efec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a74f064; end: 10a74f10b;  */

void FUN_10a74f064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1 + 0x20);
  return;
}



/* Entry: 10a74f10c; end: 10a74f473;  */

void FUN_10a74f10c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f65525e,0x13);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c171e8;
  pppuVar2 = (undefined8 ***)&UNK_10f672059;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0xad;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c171e8;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"session",FUN_10a766a5c,FUN_10a766b14);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f672fff,FUN_10a766cf0,FUN_10a766da8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f673008,FUN_10a766e8c,FUN_10a766f6c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f673015,FUN_10a767068,FUN_10a767144);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f65525e,0x13);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f65525e;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f672059;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a74f454;
      FUN_10a054dac(param_1,&UNK_10f6721c7,FUN_10a767520,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a74f454:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a74f458);
  (*pcVar6)();
}



/* Entry: 10a74f474; end: 10a74f4ef;  */

undefined8 * FUN_10a74f474(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a74f4f0; end: 10a74f587;  */

undefined1  [16] FUN_10a74f4f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f655272;
  return auVar1;
}



/* Entry: 10a74f588; end: 10a74f86f;  */

void FUN_10a74f588(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f655272,0x17);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c161e0;
  pppuVar2 = (undefined8 ***)&UNK_10f672059;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0xad;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c161e0;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"scope",FUN_10a767664,FUN_10a767720);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f37b588,FUN_10a7678b0,FUN_10a767990);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f655272,0x17);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f655272;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f672059;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a74f850;
      FUN_10a054dac(param_1,&UNK_10f6721c7,FUN_10a767a8c,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a74f850:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a74f854);
  (*pcVar6)();
}



/* Entry: 10a74f870; end: 10a74f8bf;  */

undefined8 * FUN_10a74f870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c159c0;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a74f8c0; end: 10a74f8c3;  */

undefined8 * FUN_10a74f8c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c159c0;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a74f8c4; end: 10a74f8d7;  */

void FUN_10a74f8c4(void)

{
  FUN_10a74f870();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a74f8d8; end: 10a74f987;  */

undefined1  [16] FUN_10a74f8d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1f;
  auVar1._0_8_ = &UNK_10f6552bb;
  return auVar1;
}



/* Entry: 10a74f988; end: 10a74fc67;  */

void FUN_10a74f988(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6552bb,0x1f);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c161f8;
  pppuVar2 = (undefined8 ***)&UNK_10f672059;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x12f;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c161f8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f37b588,FUN_10a767bfc,FUN_10a767cac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"key",FUN_10a767fec,FUN_10a76809c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6552bb,0x1f);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f6552bb;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000019;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a74fc48;
      FUN_10a054dac(param_1,&UNK_10f6721c7,FUN_10a768154,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a74fc48:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a74fc4c);
  (*pcVar6)();
}



/* Entry: 10a74fc68; end: 10a74fcc7;  */

undefined8 * FUN_10a74fc68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c15a18;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a74fcc8; end: 10a74fccb;  */

undefined8 * FUN_10a74fcc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c15a18;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a74fccc; end: 10a74fcdf;  */

void FUN_10a74fccc(void)

{
  FUN_10a74fc68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a74fce0; end: 10a74fd07;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a74fce0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x2f)) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x28);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x18);
  uVar1 = *(ulong *)(param_2 + 0x20);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10a74fd08; end: 10a74fd4f;  */

void FUN_10a74fd08(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 10a74fd50; end: 10a74fd77;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a74fd50(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x47)) {
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    param_1[1] = *(undefined8 *)(param_2 + 0x38);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x40);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x30);
  uVar1 = *(ulong *)(param_2 + 0x38);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10a74fd78; end: 10a74fdbf;  */

void FUN_10a74fd78(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x40) = param_2[2];
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 10a74fdc0; end: 10a74fe57;  */

undefined1  [16] FUN_10a74fdc0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x18;
  auVar1._0_8_ = &UNK_10f65528a;
  return auVar1;
}



/* Entry: 10a74fe58; end: 10a7501bf;  */

void FUN_10a74fe58(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f65528a,0x18);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c16210;
  pppuVar2 = (undefined8 ***)&UNK_10f672059;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0xad;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c16210;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"scope",FUN_10a7682e4,FUN_10a7683a0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f673026,FUN_10a768530,FUN_10a7685ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f673037,FUN_10a7686d0,FUN_10a768780);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f37b588,FUN_10a768a10,FUN_10a768ac0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f65528a,0x18);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f65528a;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f672059;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a7501a0;
      FUN_10a054dac(param_1,&UNK_10f6721c7,FUN_10a768b78,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a7501a0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7501a4);
  (*pcVar6)();
}



/* Entry: 10a7501c0; end: 10a75021f;  */

undefined8 * FUN_10a7501c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c15a70;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a750220; end: 10a750223;  */

undefined8 * FUN_10a750220(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c15a70;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a750224; end: 10a750237;  */

void FUN_10a750224(void)

{
  FUN_10a7501c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a750238; end: 10a75025f;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a750238(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x37)) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    param_1[1] = *(undefined8 *)(param_2 + 0x28);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x30);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x20);
  uVar1 = *(ulong *)(param_2 + 0x28);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10a750260; end: 10a7502a7;  */

void FUN_10a750260(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x30) = param_2[2];
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 10a7502a8; end: 10a7502cf;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a7502a8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x4f)) {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    param_1[1] = *(undefined8 *)(param_2 + 0x40);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x48);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x38);
  uVar1 = *(ulong *)(param_2 + 0x40);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10a7502d0; end: 10a750317;  */

void FUN_10a7502d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[2];
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 10a750318; end: 10a75038f;  */

undefined1  [16] FUN_10a750318(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f674b41;
  return auVar1;
}



/* Entry: 10a750390; end: 10a7508bf;  */

void FUN_10a750390(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f674b41,10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c17218;
  pppuVar2 = (undefined8 ***)&UNK_10f672059;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xad;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c17218;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7508a0;
    FUN_10a054dac(param_1,&UNK_10f673042,FUN_10a768cf0,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7508a0;
    FUN_10a054dac(param_1,&UNK_10f673053,FUN_10a7691b0,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7508a0;
    FUN_10a054dac(param_1,&UNK_10f673064,FUN_10a769948,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7508a0;
    FUN_10a054dac(param_1,&UNK_10f673077,FUN_10a769e10,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7508a0;
    FUN_10a054dac(param_1,&DAT_10f67308b,FUN_10a76a090,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7508a0;
    FUN_10a054dac(param_1,&DAT_10f673094,FUN_10a76a5fc,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7508a0;
    FUN_10a054dac(param_1,&UNK_10f67309d,FUN_10a76a6b4,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7508a0;
    FUN_10a054dac(param_1,&UNK_10f6730a8,FUN_10a76abe4,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7508a0;
    FUN_10a054dac(param_1,&UNK_10f6730b4,FUN_10a76ac9c,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7508a0;
    FUN_10a054dac(param_1,&UNK_10f6730c6,FUN_10a76b0b4,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7508a0;
    FUN_10a054dac(param_1,&UNK_10f6730d8,FUN_10a76b624,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7508a0;
    FUN_10a054dac(param_1,&UNK_10f6730eb,FUN_10a76b7f4,3,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f674b41,10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a7508a0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7508a4);
  (*pcVar6)();
}



/* Entry: 10a7508c0; end: 10a750997;  */

long * FUN_10a7508c0(long param_1,undefined8 *param_2,long param_3,long *param_4,undefined8 *param_5
                    )

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  int iVar20;
  long *plVar21;
  undefined *puVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  undefined *puVar26;
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
  undefined1 auStack_470 [824];
  undefined4 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  long lStack_118;
  ulong uStack_110;
  long *plStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  long *plStack_88;
  int iStack_7c;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar6 = (long *)(ulong)(param_3 == 0);
  FUN_10a750998(plVar6,param_5);
  if (param_3 == 0) {
    return plVar6;
  }
  plVar6 = (long *)(ulong)*(uint *)(param_3 + 0x18);
  FUN_10a750a50(plVar6,*(undefined1 *)(param_1 + 0x38),param_5);
  if (((ulong)plVar6 & 1) != 0) {
    return plVar6;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 == 0) {
    if ((bRam000000011330a9e8 & 1) == 0) {
      return (long *)0x0;
    }
    plVar6 = (long *)0x0;
    FUN_10ae06f30(0,1,&UNK_10f673102,&UNK_10f673143,0x71,&UNK_10f67323b,&stack0x00000000);
    return plVar6;
  }
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  puVar14 = (undefined8 *)(param_3 + 0x20);
  FUN_10a86d5f0(param_2[1],*(undefined1 *)((long)param_2 + 0x17),uVar2);
  if ((*(long *)(lVar7 + 0x368) == 0) || (**(int **)(lVar7 + 0x1e8) != 2)) {
    func_0x00010ae02ecc(0,**(undefined4 **)(lVar7 + 0x1e8));
    ppuVar12 = &PTR_PTR_113303730;
    ppuVar11 = ppuVar12;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    plStack_70 = *(long **)PTR____stack_chk_guard_11034bdc0;
    plVar6 = (long *)0x0;
    if (ppuVar11 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar11[0x13],ppuVar11[0xf],
                    ppuVar11 + 0x14,0x400);
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
      puVar26 = ppuVar11[0x12];
      puVar22 = ppuVar11[0xb];
      uVar10 = 0;
      _clock_gettime_nsec_np();
      uVar13 = uVar10;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_8e8 = ppuVar11 + 1;
      uStack_8b8 = *(undefined4 *)(ppuVar11 + 0xe);
      uStack_8c0 = uVar13 & 0xffffffff;
      ppuStack_8b0 = ppuVar11 + 0x10;
      plVar6 = (long *)*ppuVar11;
      ppuVar12 = (undefined **)&ppuStack_8e8;
      uStack_8f0 = uStack_898;
      puStack_8e0 = puVar22;
      puStack_8d8 = puVar26;
      uStack_8d0 = (ulong)(puVar26 != (undefined *)0x0);
      uStack_8c8 = uVar10;
      FUN_10ae0784c(plVar6,ppuVar12,&puStack_900,&puStack_918);
    }
    iVar20 = (int)ppuVar12;
    if ((long *)*(long *)PTR____stack_chk_guard_11034bdc0 != plStack_70) {
      ___stack_chk_fail();
      if (iVar20 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010ae087bc();
      FUN_10ae07e54(plVar6);
      return plVar6;
    }
    return plVar6;
  }
  lVar8 = lVar7;
  FUN_10a86d630(lVar7,puVar14,param_2,uVar2);
  if (*(char *)(param_3 + 0x37) < '\0') {
    func_0x000107c3192c(&plStack_c0,*puVar14,*(undefined8 *)(param_3 + 0x28));
  }
  else {
    lStack_b8 = *(long *)(param_3 + 0x28);
    plStack_c0 = (long *)*puVar14;
    uStack_b0 = *(ulong *)(param_3 + 0x30);
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&plStack_a8,*param_2,param_2[1]);
  }
  else {
    lStack_a0 = param_2[1];
    plStack_a8 = (long *)*param_2;
    uStack_98 = param_2[2];
  }
  plStack_88 = (long *)param_4[1];
  lStack_90 = *param_4;
  if (param_4[1] != 0) {
    plVar6 = (long *)(param_4[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_d8 = 0x19;
  uVar1 = *param_5;
  plVar6 = (long *)param_5[1];
  if (plVar6 != (long *)0x0) {
    plVar23 = plVar6 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *plVar23 = *plVar23 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar23 = *(long **)(lVar7 + 0x3a8);
  uStack_d0 = uVar1;
  plStack_c8 = plVar6;
  if ((long)uStack_b0 < 0) {
    func_0x000107c3192c(&plStack_120,plStack_c0,lStack_b8);
  }
  else {
    lStack_118 = lStack_b8;
    plStack_120 = plStack_c0;
    uStack_110 = uStack_b0;
  }
  if ((long)uStack_98 < 0) {
    func_0x000107c3192c(&plStack_108,plStack_a8,lStack_a0);
  }
  else {
    lStack_100 = lStack_a0;
    plStack_108 = plStack_a8;
    uStack_f8 = uStack_98;
  }
  plStack_e8 = plStack_88;
  lStack_f0 = lStack_90;
  if (plStack_88 != (long *)0x0) {
    plVar25 = plStack_88 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *plVar25 = *plVar25 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_138 = 0x19;
  if (plVar6 != (long *)0x0) {
    plVar25 = plVar6 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *plVar25 = *plVar25 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  iVar20 = (int)lVar8;
  plVar24 = (long *)(long)iVar20;
  plVar25 = (long *)plVar23[1];
  uStack_130 = uVar1;
  plStack_128 = plVar6;
  iStack_7c = iVar20;
  if (plVar25 != (long *)0x0) {
    uVar13 = (long)plVar25 - 1;
    if (((ulong)plVar25 & uVar13) == 0) {
      plVar6 = (long *)(uVar13 & (ulong)plVar24);
    }
    else {
      plVar6 = plVar24;
      if (plVar25 <= plVar24) {
        uVar10 = 0;
        if (plVar25 != (long *)0x0) {
          uVar10 = (ulong)plVar24 / (ulong)plVar25;
        }
        plVar6 = (long *)((long)plVar24 - uVar10 * (long)plVar25);
      }
    }
    puVar14 = *(undefined8 **)(*plVar23 + (long)plVar6 * 8);
    if (puVar14 != (undefined8 *)0x0) {
      for (plVar21 = (long *)*puVar14; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
        plVar15 = (long *)plVar21[1];
        if (plVar15 == plVar24) {
          if ((int)plVar21[2] == iVar20) goto LAB_10a86d338;
        }
        else {
          if (((ulong)plVar25 & uVar13) == 0) {
            plVar15 = (long *)((ulong)plVar15 & uVar13);
          }
          else if (plVar25 <= plVar15) {
            uVar10 = 0;
            if (plVar25 != (long *)0x0) {
              uVar10 = (ulong)plVar15 / (ulong)plVar25;
            }
            plVar15 = (long *)((long)plVar15 - uVar10 * (long)plVar25);
          }
          if (plVar15 != plVar6) break;
        }
      }
    }
  }
  plVar21 = (long *)0x58;
  __Znwm();
  uStack_68 = 1;
  *plVar21 = 0;
  plVar21[1] = (long)plVar24;
  *(int *)(plVar21 + 2) = iVar20;
  plVar21[4] = 0;
  plVar21[3] = 0;
  plVar21[6] = 0;
  plVar21[5] = 0;
  plVar21[8] = 0;
  plVar21[7] = 0;
  plVar21[10] = 0;
  plVar21[9] = 0;
  plStack_78 = plVar21;
  plStack_70 = plVar23;
  if ((plVar25 == (long *)0x0) ||
     (*(float *)(plVar23 + 4) * (float)plVar25 < (float)(plVar23[3] + 1))) {
    uVar13 = 1;
    if ((long *)0x2 < plVar25) {
      uVar13 = (ulong)(((ulong)plVar25 & (long)plVar25 - 1U) != 0);
    }
    plVar6 = (long *)(uVar13 | (long)plVar25 << 1);
    plVar15 = (long *)(long)((float)(plVar23[3] + 1) / *(float *)(plVar23 + 4));
    if (plVar6 <= plVar15) {
      plVar6 = plVar15;
    }
    if ((long)plVar6 - 1U == 0) {
      plVar6 = (long *)0x2;
    }
    else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar25 = (long *)plVar23[1];
    }
    if (plVar25 < plVar6) {
LAB_10a86d14c:
      if ((ulong)plVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a86d578);
        (*pcVar5)();
      }
      lVar7 = (long)plVar6 << 3;
      __Znwm();
      lVar9 = *plVar23;
      *plVar23 = lVar7;
      if (lVar9 != 0) {
        __ZdlPv();
      }
      plVar25 = (long *)0x0;
      plVar23[1] = (long)plVar6;
      do {
        *(undefined8 *)(*plVar23 + (long)plVar25 * 8) = 0;
        plVar25 = (long *)((long)plVar25 + 1);
      } while (plVar6 != plVar25);
      plVar15 = (long *)plVar23[2];
      plVar25 = plVar6;
      if (plVar15 != (long *)0x0) {
        plVar16 = (long *)plVar15[1];
        uVar13 = (long)plVar6 - 1;
        if (((ulong)plVar6 & uVar13) == 0) {
          plVar16 = (long *)((ulong)plVar16 & uVar13);
        }
        else if (plVar6 <= plVar16) {
          uVar10 = 0;
          if (plVar6 != (long *)0x0) {
            uVar10 = (ulong)plVar16 / (ulong)plVar6;
          }
          plVar16 = (long *)((long)plVar16 - uVar10 * (long)plVar6);
        }
        *(long **)(*plVar23 + (long)plVar16 * 8) = plVar23 + 2;
        plVar17 = (long *)*plVar15;
        while (plVar17 != (long *)0x0) {
          plVar19 = (long *)plVar17[1];
          if (((ulong)plVar6 & uVar13) == 0) {
            plVar19 = (long *)((ulong)plVar19 & uVar13);
          }
          else if (plVar6 <= plVar19) {
            uVar10 = 0;
            if (plVar6 != (long *)0x0) {
              uVar10 = (ulong)plVar19 / (ulong)plVar6;
            }
            plVar19 = (long *)((long)plVar19 - uVar10 * (long)plVar6);
          }
          plVar18 = plVar17;
          if (plVar19 != plVar16) {
            lVar7 = *plVar23;
            if (*(long *)(lVar7 + (long)plVar19 * 8) == 0) {
              *(long **)(lVar7 + (long)plVar19 * 8) = plVar15;
              plVar16 = plVar19;
            }
            else {
              *plVar15 = *plVar17;
              *plVar17 = **(undefined8 **)(lVar7 + (long)plVar19 * 8);
              **(long **)(lVar7 + (long)plVar19 * 8) = (long)plVar17;
              plVar18 = plVar15;
            }
          }
          plVar15 = plVar18;
          plVar17 = (long *)*plVar18;
        }
      }
    }
    else if (plVar6 < plVar25) {
      plVar15 = (long *)(long)((float)(ulong)plVar23[3] / *(float *)(plVar23 + 4));
      if ((plVar25 < (long *)0x3) || (((ulong)plVar25 & (long)plVar25 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar15) {
        plVar15 = (long *)(1L << (-LZCOUNT((long)plVar15 + -1) & 0x3fU));
      }
      if (plVar6 <= plVar15) {
        plVar6 = plVar15;
      }
      if (plVar6 < plVar25) {
        if (plVar6 != (long *)0x0) goto LAB_10a86d14c;
        lVar7 = *plVar23;
        *plVar23 = 0;
        if (lVar7 != 0) {
          __ZdlPv();
        }
        plVar23[1] = 0;
        plVar25 = (long *)0x0;
      }
      else {
        plVar25 = (long *)plVar23[1];
      }
    }
    if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
      plVar6 = (long *)((long)plVar25 - 1U & (ulong)plVar24);
    }
    else {
      plVar6 = plVar24;
      if (plVar25 <= plVar24) {
        uVar13 = 0;
        if (plVar25 != (long *)0x0) {
          uVar13 = (ulong)plVar24 / (ulong)plVar25;
        }
        plVar6 = (long *)((long)plVar24 - uVar13 * (long)plVar25);
      }
    }
  }
  lVar7 = *plVar23;
  plVar24 = *(long **)(lVar7 + (long)plVar6 * 8);
  if (plVar24 == (long *)0x0) {
    plVar24 = plVar23 + 2;
    *plVar21 = *plVar24;
    *plVar24 = (long)plVar21;
    *(long **)(lVar7 + (long)plVar6 * 8) = plVar24;
    if (*plVar21 == 0) goto LAB_10a86d32c;
    plVar6 = *(long **)(*plVar21 + 8);
    if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
      plVar6 = (long *)((ulong)plVar6 & (long)plVar25 - 1U);
    }
    else if (plVar25 <= plVar6) {
      uVar13 = 0;
      if (plVar25 != (long *)0x0) {
        uVar13 = (ulong)plVar6 / (ulong)plVar25;
      }
      plVar6 = (long *)((long)plVar6 - uVar13 * (long)plVar25);
    }
    plVar24 = (long *)(*plVar23 + (long)plVar6 * 8);
  }
  else {
    *plVar21 = *plVar24;
  }
  *plVar24 = (long)plVar21;
LAB_10a86d32c:
  plVar23[3] = plVar23[3] + 1;
LAB_10a86d338:
  if (*(char *)((long)plVar21 + 0x2f) < '\0') {
    __ZdlPv(plVar21[3]);
  }
  plVar21[4] = lStack_118;
  plVar21[3] = (long)plStack_120;
  plVar21[5] = uStack_110;
  uStack_110 = uStack_110 & 0xffffffffffffff;
  plStack_120 = (long *)((ulong)plStack_120 & 0xffffffffffffff00);
  if (*(char *)((long)plVar21 + 0x47) < '\0') {
    __ZdlPv(plVar21[6]);
  }
  plVar6 = plStack_e8;
  lVar7 = lStack_f0;
  plVar21[7] = lStack_100;
  plVar21[6] = (long)plStack_108;
  plVar21[8] = uStack_f8;
  uStack_f8 = uStack_f8 & 0xffffffffffffff;
  plStack_108 = (long *)((ulong)plStack_108 & 0xffffffffffffff00);
  lStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  plVar25 = (long *)plVar21[10];
  plVar21[10] = (long)plVar6;
  plVar21[9] = lVar7;
  if (plVar25 != (long *)0x0) {
    plVar6 = plVar25 + 1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  plVar23 = plVar23 + 0x28;
  FUN_10a87f4f0(plVar23,lVar8,&iStack_7c);
  *(undefined4 *)(plVar23 + 3) = uStack_138;
  plVar23 = plVar23 + 4;
  FUN_10a03c06c(plVar23,&uStack_130);
  plVar6 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar25 = plStack_128 + 1;
    do {
      lVar7 = *plVar25;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *plVar25 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      plVar23 = plVar6;
    }
  }
  plVar6 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar25 = plStack_e8 + 1;
    do {
      lVar7 = *plVar25;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *plVar25 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      plVar23 = plVar6;
    }
  }
  if ((long)uStack_f8 < 0) {
    plVar23 = plStack_108;
    __ZdlPv(plStack_108);
  }
  if ((long)uStack_110 < 0) {
    plVar23 = plStack_120;
    __ZdlPv(plStack_120);
  }
  plVar6 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar25 = plStack_c8 + 1;
    do {
      lVar7 = *plVar25;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *plVar25 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      plVar23 = plVar6;
    }
  }
  plVar6 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar25 = plStack_88 + 1;
    do {
      lVar7 = *plVar25;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *plVar25 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      plVar23 = plVar6;
    }
  }
  if ((long)uStack_98 < 0) {
    plVar23 = plStack_a8;
    __ZdlPv(plStack_a8);
  }
  if ((long)uStack_b0 < 0) {
    __ZdlPv(plStack_c0);
    plVar23 = plStack_c0;
  }
  return plVar23;
}



/* Entry: 10a750998; end: 10a750a4f;  */

undefined8 FUN_10a750998(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (((int)param_1 != 0) && (lVar1 = *param_2, lVar1 != 0)) {
    func_0x000107c2b054(auStack_38,&UNK_10f674b4c);
    func_0x000107c2b054(auStack_50,&UNK_10f674b50);
    FUN_10a7576b4(lVar1,auStack_38,auStack_50);
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return param_1;
}



/* Entry: 10a750a50; end: 10a750c5b;  */

/* WARNING: Removing unreachable block (ram,0x00010a750b80) */
/* WARNING: Removing unreachable block (ram,0x00010a750bc0) */

undefined8 FUN_10a750a50(uint param_1,int param_2,long *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long lVar5;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  if (param_1 < 4) {
    uVar2 = param_1;
    if (param_2 != 0) {
      uVar2 = param_1 & 1;
    }
    if (uVar2 != 0) {
      return 0;
    }
  }
  lVar5 = *param_3;
  if (lVar5 != 0) {
    func_0x000107c2b054(auStack_48,&UNK_10f674b4c);
    if (param_1 - 1 < 3) {
      pcVar4 = (&PTR_DAT_110c17508)[param_1 - 1];
    }
    else {
      pcVar4 = "Unknown";
    }
    func_0x000107c2b054(auStack_b8,pcVar4);
    puVar3 = auStack_b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f674b67,0x3a);
    uStack_98 = puVar3[1];
    uStack_a0 = *puVar3;
    lStack_90 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3 = &uStack_a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f674ba2,0xe);
    uStack_78 = puVar3[1];
    uStack_80 = *puVar3;
    lStack_70 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    pcVar4 = "true";
    if (param_2 == 0) {
      pcVar4 = "false";
    }
    uVar1 = 4;
    if (param_2 == 0) {
      uVar1 = 5;
    }
    puVar3 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,pcVar4,uVar1);
    uStack_58 = puVar3[1];
    uStack_60 = *puVar3;
    uStack_50 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_10a7576b4(lVar5,auStack_48,&uStack_60);
    if (lStack_70 < 0) {
      __ZdlPv(uStack_80);
    }
    if (lStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
    if (cStack_a1 < '\0') {
      __ZdlPv(auStack_b8[0]);
    }
  }
  return 1;
}



/* Entry: 10a750c5c; end: 10a750de7;  */

void FUN_10a750c5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a750998(param_4 == 0,param_6);
  if (param_4 != 0) {
    uVar4 = (ulong)*(uint *)(param_4 + 0x18);
    FUN_10a750a50(uVar4,*(undefined1 *)(param_1 + 0x38),param_6);
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 == 0) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          FUN_10ae06f30(0,1,&UNK_10f673102,&UNK_10f673281,0x81,&UNK_10f67323b,&stack0x00000000);
          return;
        }
      }
      else {
        FUN_10a750de8(auStack_50,param_4);
        if (*(char *)(param_4 + 0x4f) < '\0') {
          func_0x000107c3192c(&uStack_70,*(undefined8 *)(param_4 + 0x38),
                              *(undefined8 *)(param_4 + 0x40));
        }
        else {
          uStack_68 = *(undefined8 *)(param_4 + 0x40);
          uStack_70 = *(undefined8 *)(param_4 + 0x38);
          lStack_60 = *(long *)(param_4 + 0x48);
        }
        FUN_10a86f8b4(lVar5,&uStack_70,param_2,param_3,auStack_50,param_5,param_6);
        if (lStack_60 < 0) {
          __ZdlPv(uStack_70);
        }
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
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a750de8; end: 10a750ed3;  */

void FUN_10a750de8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c17118;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &PTR_FUN_110c256d8;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x37) < '\0') {
    func_0x000107c3192c(&uStack_50,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uStack_48 = *(undefined8 *)(param_2 + 0x28);
    uStack_50 = *(undefined8 *)(param_2 + 0x20);
    lStack_40 = *(long *)(param_2 + 0x30);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 7,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  *(undefined4 *)((long)puVar1 + 0x34) = *(undefined4 *)(param_2 + 0x1c);
  return;
}



/* Entry: 10a750ed4; end: 10a750f9b;  */

long * FUN_10a750ed4(long param_1,long param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  undefined *puVar23;
  long *plVar24;
  long *plVar25;
  undefined *puVar26;
  float fVar27;
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
  undefined1 auStack_470 [824];
  undefined4 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  long lStack_118;
  ulong uStack_110;
  long *plStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  undefined7 uStack_98;
  char cStack_91;
  long lStack_90;
  long *plStack_88;
  int iStack_7c;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar5 = (long *)(ulong)(param_2 == 0);
  FUN_10a750998(plVar5,param_4);
  if (param_2 == 0) {
    return plVar5;
  }
  plVar5 = (long *)(ulong)*(uint *)(param_2 + 0x18);
  FUN_10a750a50(plVar5,*(undefined1 *)(param_1 + 0x38),param_4);
  if (((ulong)plVar5 & 1) != 0) {
    return plVar5;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == 0) {
    if ((bRam000000011330a9e8 & 1) == 0) {
      return (long *)0x0;
    }
    plVar5 = (long *)0x0;
    FUN_10ae06f30(0,1,&UNK_10f673102,&UNK_10f6733a1,0x93,&UNK_10f67323b,&stack0x00000000);
    return plVar5;
  }
  plVar5 = (long *)(param_2 + 0x38);
  if (*(int *)(param_2 + 0x18) == 0) {
    FUN_10a00946c(&UNK_10f67f2f7,plVar5,0,*(undefined4 *)(param_2 + 0x50),param_2 + 0x20);
    goto LAB_10a86ed0c;
  }
  if ((*(long *)(lVar6 + 0x368) == 0) || (**(int **)(lVar6 + 0x1e8) != 2)) {
    func_0x00010ae02ecc(0,**(undefined4 **)(lVar6 + 0x1e8));
    ppuVar12 = &PTR_PTR_1133037c8;
    ppuVar11 = ppuVar12;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    plStack_70 = *(long **)PTR____stack_chk_guard_11034bdc0;
    plVar5 = (long *)0x0;
    if (ppuVar11 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar11[0x13],ppuVar11[0xf],
                    ppuVar11 + 0x14,0x400);
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
      puVar26 = ppuVar11[0x12];
      puVar23 = ppuVar11[0xb];
      uVar10 = 0;
      _clock_gettime_nsec_np();
      uVar13 = uVar10;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_8e8 = ppuVar11 + 1;
      uStack_8b8 = *(undefined4 *)(ppuVar11 + 0xe);
      uStack_8c0 = uVar13 & 0xffffffff;
      ppuStack_8b0 = ppuVar11 + 0x10;
      plVar5 = (long *)*ppuVar11;
      ppuVar12 = (undefined **)&ppuStack_8e8;
      uStack_8f0 = uStack_898;
      puStack_8e0 = puVar23;
      puStack_8d8 = puVar26;
      uStack_8d0 = (ulong)(puVar26 != (undefined *)0x0);
      uStack_8c8 = uVar10;
      FUN_10ae0784c(plVar5,ppuVar12,&puStack_900,&puStack_918);
    }
    iVar20 = (int)ppuVar12;
    if ((long *)*(long *)PTR____stack_chk_guard_11034bdc0 != plStack_70) {
      ___stack_chk_fail();
      if (iVar20 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010ae087bc();
      FUN_10ae07e54(plVar5);
      return plVar5;
    }
    return plVar5;
  }
  lVar7 = lVar6;
  FUN_10a86ed8c();
  if (*(char *)(param_2 + 0x4f) < '\0') {
    func_0x000107c3192c(&plStack_c0,*plVar5,*(undefined8 *)(param_2 + 0x40));
  }
  else {
    lStack_b8 = *(long *)(param_2 + 0x40);
    plStack_c0 = (long *)*plVar5;
    uStack_b0 = *(ulong *)(param_2 + 0x48);
  }
  func_0x000107c2b054(&plStack_a8,&UNK_10f67d9eb);
  plStack_88 = (long *)param_3[1];
  lStack_90 = *param_3;
  if (param_3[1] != 0) {
    plVar5 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_d8 = 0x19;
  uVar1 = *param_4;
  plVar5 = (long *)param_4[1];
  if (plVar5 != (long *)0x0) {
    plVar22 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = *plVar22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = *(long *)(lVar6 + 0x3a8);
  uStack_d0 = uVar1;
  plStack_c8 = plVar5;
  if ((long)uStack_b0 < 0) {
    func_0x000107c3192c(&plStack_120,plStack_c0,lStack_b8);
  }
  else {
    lStack_118 = lStack_b8;
    plStack_120 = plStack_c0;
    uStack_110 = uStack_b0;
  }
  if (cStack_91 < '\0') {
    func_0x000107c3192c(&plStack_108,plStack_a8,lStack_a0);
  }
  else {
    lStack_100 = lStack_a0;
    plStack_108 = plStack_a8;
    uStack_f8 = CONCAT17(cStack_91,uStack_98);
  }
  plStack_e8 = plStack_88;
  lStack_f0 = lStack_90;
  if (plStack_88 != (long *)0x0) {
    plVar22 = plStack_88 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = *plVar22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_138 = 0x19;
  if (plVar5 != (long *)0x0) {
    plVar22 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = *plVar22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar22 = (long *)(lVar6 + 0x50);
  iVar20 = (int)lVar7;
  plVar24 = (long *)(long)iVar20;
  plVar25 = *(long **)(lVar6 + 0x58);
  uStack_130 = uVar1;
  plStack_128 = plVar5;
  iStack_7c = iVar20;
  if (plVar25 != (long *)0x0) {
    uVar13 = (long)plVar25 - 1;
    if (((ulong)plVar25 & uVar13) == 0) {
      plVar5 = (long *)(uVar13 & (ulong)plVar24);
    }
    else {
      plVar5 = plVar24;
      if (plVar25 <= plVar24) {
        uVar10 = 0;
        if (plVar25 != (long *)0x0) {
          uVar10 = (ulong)plVar24 / (ulong)plVar25;
        }
        plVar5 = (long *)((long)plVar24 - uVar10 * (long)plVar25);
      }
    }
    puVar14 = *(undefined8 **)(*plVar22 + (long)plVar5 * 8);
    if (puVar14 != (undefined8 *)0x0) {
      for (plVar21 = (long *)*puVar14; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
        plVar15 = (long *)plVar21[1];
        if (plVar15 == plVar24) {
          if ((int)plVar21[2] == iVar20) goto LAB_10a86eac8;
        }
        else {
          if (((ulong)plVar25 & uVar13) == 0) {
            plVar15 = (long *)((ulong)plVar15 & uVar13);
          }
          else if (plVar25 <= plVar15) {
            uVar10 = 0;
            if (plVar25 != (long *)0x0) {
              uVar10 = (ulong)plVar15 / (ulong)plVar25;
            }
            plVar15 = (long *)((long)plVar15 - uVar10 * (long)plVar25);
          }
          if (plVar15 != plVar5) break;
        }
      }
    }
  }
  plVar21 = (long *)0x58;
  __Znwm();
  uStack_68 = 1;
  *plVar21 = 0;
  plVar21[1] = (long)plVar24;
  *(int *)(plVar21 + 2) = iVar20;
  plVar21[4] = 0;
  plVar21[3] = 0;
  plVar21[6] = 0;
  plVar21[5] = 0;
  plVar21[8] = 0;
  plVar21[7] = 0;
  plVar21[10] = 0;
  plVar21[9] = 0;
  fVar27 = (float)(*(long *)(lVar6 + 0x68) + 1);
  plStack_78 = plVar21;
  plStack_70 = plVar22;
  if ((plVar25 == (long *)0x0) || (*(float *)(lVar6 + 0x70) * (float)plVar25 < fVar27)) {
    uVar13 = 1;
    if ((long *)0x2 < plVar25) {
      uVar13 = (ulong)(((ulong)plVar25 & (long)plVar25 - 1U) != 0);
    }
    plVar5 = (long *)(uVar13 | (long)plVar25 << 1);
    plVar15 = (long *)(long)(fVar27 / *(float *)(lVar6 + 0x70));
    if (plVar5 <= plVar15) {
      plVar5 = plVar15;
    }
    if ((long)plVar5 - 1U == 0) {
      plVar5 = (long *)0x2;
    }
    else if (((ulong)plVar5 & (long)plVar5 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar25 = *(long **)(lVar6 + 0x58);
    }
    if (plVar25 < plVar5) {
LAB_10a86e8dc:
      if ((ulong)plVar5 >> 0x3d != 0) {
LAB_10a86ed0c:
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a86ed14);
        (*pcVar4)();
      }
      lVar8 = (long)plVar5 << 3;
      __Znwm();
      lVar9 = *plVar22;
      *plVar22 = lVar8;
      if (lVar9 != 0) {
        __ZdlPv();
      }
      plVar25 = (long *)0x0;
      *(long **)(lVar6 + 0x58) = plVar5;
      do {
        *(undefined8 *)(*plVar22 + (long)plVar25 * 8) = 0;
        plVar25 = (long *)((long)plVar25 + 1);
      } while (plVar5 != plVar25);
      plVar15 = *(long **)(lVar6 + 0x60);
      plVar25 = plVar5;
      if (plVar15 != (long *)0x0) {
        plVar16 = (long *)plVar15[1];
        uVar13 = (long)plVar5 - 1;
        if (((ulong)plVar5 & uVar13) == 0) {
          plVar16 = (long *)((ulong)plVar16 & uVar13);
        }
        else if (plVar5 <= plVar16) {
          uVar10 = 0;
          if (plVar5 != (long *)0x0) {
            uVar10 = (ulong)plVar16 / (ulong)plVar5;
          }
          plVar16 = (long *)((long)plVar16 - uVar10 * (long)plVar5);
        }
        *(undefined8 **)(*plVar22 + (long)plVar16 * 8) = (undefined8 *)(lVar6 + 0x60);
        plVar17 = (long *)*plVar15;
        while (plVar17 != (long *)0x0) {
          plVar19 = (long *)plVar17[1];
          if (((ulong)plVar5 & uVar13) == 0) {
            plVar19 = (long *)((ulong)plVar19 & uVar13);
          }
          else if (plVar5 <= plVar19) {
            uVar10 = 0;
            if (plVar5 != (long *)0x0) {
              uVar10 = (ulong)plVar19 / (ulong)plVar5;
            }
            plVar19 = (long *)((long)plVar19 - uVar10 * (long)plVar5);
          }
          plVar18 = plVar17;
          if (plVar19 != plVar16) {
            lVar8 = *plVar22;
            if (*(long *)(lVar8 + (long)plVar19 * 8) == 0) {
              *(long **)(lVar8 + (long)plVar19 * 8) = plVar15;
              plVar16 = plVar19;
            }
            else {
              *plVar15 = *plVar17;
              *plVar17 = **(undefined8 **)(lVar8 + (long)plVar19 * 8);
              **(long **)(lVar8 + (long)plVar19 * 8) = (long)plVar17;
              plVar18 = plVar15;
            }
          }
          plVar15 = plVar18;
          plVar17 = (long *)*plVar18;
        }
      }
    }
    else if (plVar5 < plVar25) {
      plVar15 = (long *)(long)((float)*(ulong *)(lVar6 + 0x68) / *(float *)(lVar6 + 0x70));
      if ((plVar25 < (long *)0x3) || (((ulong)plVar25 & (long)plVar25 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar15) {
        plVar15 = (long *)(1L << (-LZCOUNT((long)plVar15 - 1) & 0x3fU));
      }
      if (plVar5 <= plVar15) {
        plVar5 = plVar15;
      }
      if (plVar5 < plVar25) {
        if (plVar5 != (long *)0x0) goto LAB_10a86e8dc;
        lVar8 = *plVar22;
        *plVar22 = 0;
        if (lVar8 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(lVar6 + 0x58) = 0;
        plVar25 = (long *)0x0;
      }
      else {
        plVar25 = *(long **)(lVar6 + 0x58);
      }
    }
    if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
      plVar5 = (long *)((long)plVar25 - 1U & (ulong)plVar24);
    }
    else {
      plVar5 = plVar24;
      if (plVar25 <= plVar24) {
        uVar13 = 0;
        if (plVar25 != (long *)0x0) {
          uVar13 = (ulong)plVar24 / (ulong)plVar25;
        }
        plVar5 = (long *)((long)plVar24 - uVar13 * (long)plVar25);
      }
    }
  }
  lVar8 = *plVar22;
  plVar24 = *(long **)(lVar8 + (long)plVar5 * 8);
  if (plVar24 == (long *)0x0) {
    plVar24 = (long *)(lVar6 + 0x60);
    *plVar21 = *plVar24;
    *plVar24 = (long)plVar21;
    *(long **)(lVar8 + (long)plVar5 * 8) = plVar24;
    if (*plVar21 == 0) goto LAB_10a86eabc;
    plVar5 = *(long **)(*plVar21 + 8);
    if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
      plVar5 = (long *)((ulong)plVar5 & (long)plVar25 - 1U);
    }
    else if (plVar25 <= plVar5) {
      uVar13 = 0;
      if (plVar25 != (long *)0x0) {
        uVar13 = (ulong)plVar5 / (ulong)plVar25;
      }
      plVar5 = (long *)((long)plVar5 - uVar13 * (long)plVar25);
    }
    plVar24 = (long *)(*plVar22 + (long)plVar5 * 8);
  }
  else {
    *plVar21 = *plVar24;
  }
  *plVar24 = (long)plVar21;
LAB_10a86eabc:
  *(long *)(lVar6 + 0x68) = *(long *)(lVar6 + 0x68) + 1;
LAB_10a86eac8:
  if (*(char *)((long)plVar21 + 0x2f) < '\0') {
    __ZdlPv(plVar21[3]);
  }
  plVar21[4] = lStack_118;
  plVar21[3] = (long)plStack_120;
  plVar21[5] = uStack_110;
  uStack_110 = uStack_110 & 0xffffffffffffff;
  plStack_120 = (long *)((ulong)plStack_120 & 0xffffffffffffff00);
  if (*(char *)((long)plVar21 + 0x47) < '\0') {
    __ZdlPv(plVar21[6]);
  }
  plVar5 = plStack_e8;
  lVar8 = lStack_f0;
  plVar21[7] = lStack_100;
  plVar21[6] = (long)plStack_108;
  plVar21[8] = uStack_f8;
  uStack_f8 = uStack_f8 & 0xffffffffffffff;
  plStack_108 = (long *)((ulong)plStack_108 & 0xffffffffffffff00);
  lStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  plVar22 = (long *)plVar21[10];
  plVar21[10] = (long)plVar5;
  plVar21[9] = lVar8;
  if (plVar22 != (long *)0x0) {
    plVar5 = plVar22 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
    }
  }
  lVar6 = lVar6 + 0x140;
  FUN_10a87f4f0(lVar6,lVar7,&iStack_7c);
  *(undefined4 *)(lVar6 + 0x18) = uStack_138;
  plVar5 = (long *)(lVar6 + 0x20);
  FUN_10a03c06c(plVar5,&uStack_130);
  plVar22 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar25 = plStack_128 + 1;
    do {
      lVar6 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      plVar5 = plVar22;
    }
  }
  plVar22 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar25 = plStack_e8 + 1;
    do {
      lVar6 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      plVar5 = plVar22;
    }
  }
  if ((long)uStack_f8 < 0) {
    plVar5 = plStack_108;
    __ZdlPv(plStack_108);
  }
  if ((long)uStack_110 < 0) {
    plVar5 = plStack_120;
    __ZdlPv(plStack_120);
  }
  plVar22 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar25 = plStack_c8 + 1;
    do {
      lVar6 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      plVar5 = plVar22;
    }
  }
  plVar22 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar25 = plStack_88 + 1;
    do {
      lVar6 = *plVar25;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *plVar25 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      plVar5 = plVar22;
    }
  }
  if (cStack_91 < '\0') {
    __ZdlPv(plStack_a8);
    plVar5 = plStack_a8;
  }
  if ((long)uStack_b0 < 0) {
    __ZdlPv(plStack_c0);
    plVar5 = plStack_c0;
  }
  return plVar5;
}



/* Entry: 10a750f9c; end: 10a751073;  */

ulong * FUN_10a750f9c(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                     undefined8 *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  int iVar15;
  undefined4 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
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
  undefined1 auStack_470 [792];
  undefined4 auStack_158 [2];
  undefined8 uStack_150;
  long *plStack_148;
  ulong *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  ulong *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  ulong *puStack_108;
  undefined8 uStack_100;
  undefined6 uStack_f8;
  undefined2 uStack_f2;
  undefined6 uStack_f0;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  long lStack_e0;
  long *plStack_d8;
  ulong *puStack_d0;
  undefined8 uStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong *puStack_88;
  undefined4 uStack_74;
  long lStack_70;
  
  puVar8 = (ulong *)(ulong)(param_3 == 0);
  FUN_10a750998(puVar8,param_5);
  if (param_3 == 0) {
    return puVar8;
  }
  puVar8 = (ulong *)(ulong)*(uint *)(param_3 + 0x18);
  FUN_10a750a50(puVar8,*(undefined1 *)(param_1 + 0x38),param_5);
  if (((ulong)puVar8 & 1) != 0) {
    return puVar8;
  }
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 == 0) {
    if ((bRam000000011330a9e8 & 1) == 0) {
      return (ulong *)0x0;
    }
    puVar8 = (ulong *)0x0;
    FUN_10ae06f30(0,1,&UNK_10f673102,&UNK_10f673488,0xa1,&UNK_10f67323b,&stack0x00000000);
    return puVar8;
  }
  uVar16 = *(undefined4 *)(param_3 + 0x18);
  puVar8 = (ulong *)(param_3 + 0x20);
  uStack_74 = uVar16;
  FUN_10a86d5f0(param_2[1],*(undefined1 *)((long)param_2 + 0x17),uVar16);
  if ((*(long *)(lVar9 + 0x368) == 0) || (**(int **)(lVar9 + 0x1e8) != 2)) {
    func_0x00010ae02ecc(0,**(undefined4 **)(lVar9 + 0x1e8));
    ppuVar14 = &PTR_PTR_113304fe8;
    ppuVar13 = ppuVar14;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = (ulong *)0x0;
    if (ppuVar13 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar13[0x13],ppuVar13[0xf],
                    ppuVar13 + 0x14,0x400);
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
      puVar21 = ppuVar13[0x12];
      puVar20 = ppuVar13[0xb];
      uVar19 = 0;
      _clock_gettime_nsec_np();
      uVar17 = uVar19;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_8e8 = ppuVar13 + 1;
      uStack_8b8 = *(undefined4 *)(ppuVar13 + 0xe);
      uStack_8c0 = uVar17 & 0xffffffff;
      ppuStack_8b0 = ppuVar13 + 0x10;
      puVar8 = (ulong *)*ppuVar13;
      ppuVar14 = (undefined **)&ppuStack_8e8;
      uStack_8f0 = uStack_898;
      puStack_8e0 = puVar20;
      puStack_8d8 = puVar21;
      uStack_8d0 = (ulong)(puVar21 != (undefined *)0x0);
      uStack_8c8 = uVar19;
      FUN_10ae0784c(puVar8,ppuVar14,&puStack_900,&puStack_918);
    }
    iVar15 = (int)ppuVar14;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return puVar8;
    }
    ___stack_chk_fail();
    if (iVar15 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar8);
    return puVar8;
  }
  FUN_10a86e114(lVar9 + 0x2d8,2);
  if (*(char *)(param_3 + 0x37) < '\0') {
    func_0x000107c3192c(&puStack_c0,*puVar8,*(undefined8 *)(param_3 + 0x28));
  }
  else {
    uStack_b8 = *(undefined8 *)(param_3 + 0x28);
    puStack_c0 = (ulong *)*puVar8;
    lStack_b0 = *(long *)(param_3 + 0x30);
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&puStack_a8,*param_2,param_2[1]);
  }
  else {
    uStack_a0 = param_2[1];
    puStack_a8 = (ulong *)*param_2;
    lStack_98 = param_2[2];
  }
  puStack_88 = (ulong *)param_4[1];
  uStack_90 = *param_4;
  if (param_4[1] != 0) {
    plVar11 = (long *)(param_4[1] + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = *plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar10 = (ulong *)0x18;
  __Znwm();
  puVar3 = (ulong *)*puVar8;
  if (-1 < *(char *)(param_3 + 0x37)) {
    puVar3 = puVar8;
  }
  puVar2 = (undefined8 *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    puVar2 = param_2;
  }
  *puVar10 = (ulong)puVar3;
  puVar10[1] = (ulong)puVar2;
  puVar10[2] = 0;
  FUN_10a86e53c();
  *(undefined4 *)(puVar10 + 2) = uVar16;
  uStack_c8 = 1;
  plVar11 = (long *)0x10;
  puStack_d0 = puVar10;
  __Znwm();
  FUN_10a8a41a8(&lStack_e0,lVar9 + 0x18);
  if (lStack_e0 == 0) {
    plVar12 = &uStack_100;
  }
  else {
    uStack_100 = lStack_e0;
    uStack_f8 = SUB86(plStack_d8,0);
    uStack_f2 = (undefined2)((ulong)plStack_d8 >> 0x30);
    plVar12 = &lStack_e0;
  }
  *plVar12 = 0;
  plVar12[1] = 0;
  plVar12 = (long *)CONCAT26(uStack_f2,uStack_f8);
  if (plVar12 == (long *)0x0) {
    *plVar11 = uStack_100;
    plVar11[1] = 0;
  }
  else {
    plVar1 = plVar12 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    *plVar11 = uStack_100;
    plVar11[1] = (long)plVar12;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    plVar1 = plVar12 + 1;
    do {
      lVar18 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (plStack_d8 != (long *)0x0) {
    plVar12 = plStack_d8 + 1;
    do {
      lVar18 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  plVar12 = *(long **)(lVar9 + 0x368);
  (**(code **)(*plVar12 + 0x68))(plVar12,&puStack_d0,FUN_10a867f2c,FUN_10a868058,plVar11);
  FUN_10a8a41e8();
  ppuVar14 = &PTR_PTR_113304b00;
  FUN_10ae079a0();
  func_0x00010a8a425c();
  FUN_10ae07cd4(ppuVar14,&PTR_PTR_113304b00);
  bVar5 = *(byte *)(param_3 + 0x37);
  uVar17 = *(ulong *)(param_3 + 0x28);
  if (-1 < (char)bVar5) {
    uVar17 = (ulong)bVar5;
  }
  if (uVar17 != 0x16) {
    uVar16 = 0x19;
    goto LAB_10a871bf4;
  }
  puVar3 = (ulong *)*puVar8;
  if (-1 < (char)bVar5) {
    puVar3 = puVar8;
  }
  uVar17 = (*puVar3 & 0xff00ff00ff00ff00) >> 8 | (*puVar3 & 0xff00ff00ff00ff) << 8;
  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
  uVar17 = uVar17 >> 0x20 | uVar17 << 0x20;
  uVar19 = 0x5055424c49435f55;
  if (uVar17 == 0x5055424c49435f55) {
    uVar17 = (puVar3[1] & 0xff00ff00ff00ff00) >> 8 | (puVar3[1] & 0xff00ff00ff00ff) << 8;
    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
    uVar17 = uVar17 >> 0x20 | uVar17 << 0x20;
    uVar19 = 0x5345525f434f4c4c;
    if (uVar17 != 0x5345525f434f4c4c) goto LAB_10a871bd8;
    uVar17 = (*(ulong *)((long)puVar3 + 0xe) & 0xff00ff00ff00ff00) >> 8 |
             (*(ulong *)((long)puVar3 + 0xe) & 0xff00ff00ff00ff) << 8;
    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
    uVar17 = uVar17 >> 0x20 | uVar17 << 0x20;
    uVar19 = 0x4c4c454354494f4e;
    if (uVar17 != 0x4c4c454354494f4e) goto LAB_10a871bd8;
    iVar15 = 0;
  }
  else {
LAB_10a871bd8:
    iVar15 = 1;
    if (uVar17 < uVar19) {
      iVar15 = -1;
    }
  }
  uVar16 = 100;
  if (iVar15 != 0) {
    uVar16 = 0x19;
  }
LAB_10a871bf4:
  uStack_100 = CONCAT44(0x555f4349,uVar16);
  uVar4 = *param_5;
  plVar11 = (long *)param_5[1];
  uStack_f8 = (undefined6)uVar4;
  uStack_f2 = (undefined2)((ulong)uVar4 >> 0x30);
  uStack_f0 = SUB86(plVar11,0);
  uStack_ea = (undefined1)((ulong)plVar11 >> 0x30);
  uStack_e9 = (undefined1)((ulong)plVar11 >> 0x38);
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar9 = *(long *)(lVar9 + 0x3a8);
  if (lStack_b0 < 0) {
    func_0x000107c3192c(&puStack_140,puStack_c0,uStack_b8);
  }
  else {
    uStack_138 = uStack_b8;
    puStack_140 = puStack_c0;
    lStack_130 = lStack_b0;
  }
  if (lStack_98 < 0) {
    func_0x000107c3192c(&puStack_128,puStack_a8,uStack_a0);
  }
  else {
    uStack_120 = uStack_a0;
    puStack_128 = puStack_a8;
    lStack_118 = lStack_98;
  }
  puStack_108 = puStack_88;
  uStack_110 = uStack_90;
  if (puStack_88 != (ulong *)0x0) {
    puVar8 = puStack_88 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar7) {
        *puVar8 = *puVar8 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  auStack_158[0] = uVar16;
  uStack_150 = uVar4;
  plStack_148 = plVar11;
  FUN_10a87fb50(lVar9,plVar12,lVar9 + 200,&puStack_140,auStack_158);
  plVar11 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar12 = plStack_148 + 1;
    do {
      lVar9 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  puVar8 = puStack_108;
  if (puStack_108 != (ulong *)0x0) {
    puVar3 = puStack_108 + 1;
    do {
      uVar17 = *puVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar7) {
        *puVar3 = uVar17 - 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (uVar17 == 0) {
      (**(code **)(*puStack_108 + 0x10))(puStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(puVar8);
    }
  }
  if (lStack_118 < 0) {
    __ZdlPv(puStack_128);
  }
  if (lStack_130 < 0) {
    __ZdlPv(puStack_140);
  }
  plVar11 = (long *)CONCAT17(uStack_e9,CONCAT16(uStack_ea,uStack_f0));
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 1;
    do {
      lVar9 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  __ZdlPv(puVar10);
  puVar8 = puStack_88;
  if (puStack_88 != (ulong *)0x0) {
    puVar3 = puStack_88 + 1;
    do {
      uVar17 = *puVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar7) {
        *puVar3 = uVar17 - 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (uVar17 == 0) {
      (**(code **)(*puStack_88 + 0x10))(puStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(puVar8);
      puVar10 = puVar8;
    }
  }
  if (lStack_98 < 0) {
    puVar10 = puStack_a8;
    __ZdlPv(puStack_a8);
  }
  if (lStack_b0 < 0) {
    __ZdlPv(puStack_c0);
    puVar10 = puStack_c0;
  }
  return puVar10;
}



/* Entry: 10a751074; end: 10a7511ab;  */

void FUN_10a751074(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a750998(param_4 == 0,param_6);
  if (param_4 != 0) {
    uVar4 = (ulong)*(uint *)(param_4 + 0x18);
    FUN_10a750a50(uVar4,*(undefined1 *)(param_1 + 0x38),param_6);
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 == 0) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          FUN_10ae06f30(0,1,&UNK_10f673102,&UNK_10f673689,0xbf,&UNK_10f67323b,&stack0x00000000);
          return;
        }
      }
      else {
        FUN_10a750de8(auStack_50,param_4);
        FUN_10a8703e0(lVar5,param_2,param_3,auStack_50,param_5,param_6);
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
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a7511ac; end: 10a75127f;  */

/* WARNING: Removing unreachable block (ram,0x00010a871efc) */

void FUN_10a7511ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  
  FUN_10a750998(param_3 == 0,param_5);
  if (param_3 != 0) {
    uVar1 = (ulong)*(uint *)(param_3 + 0x18);
    FUN_10a750a50(uVar1,*(undefined1 *)(param_1 + 0x38),param_5);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_10a871854(*(long *)(param_1 + 0x28),&stack0xffffffffffffffc0,param_2,
                      *(undefined4 *)(param_3 + 0x18),param_4,param_5);
        return;
      }
      if ((bRam000000011330a9e8 & 1) != 0) {
        FUN_10ae06f30(0,1,&UNK_10f673102,&UNK_10f673893,0xda,&UNK_10f67323b,&stack0x00000000);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a751280; end: 10a75136f;  */

void FUN_10a751280(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  FUN_10a751370(uVar1,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    if (*(char *)(param_2 + 0x2f) < '\0') {
      func_0x000107c3192c(&uStack_40,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20)
                         );
    }
    else {
      uStack_38 = *(undefined8 *)(param_2 + 0x20);
      uStack_40 = *(undefined8 *)(param_2 + 0x18);
      lStack_30 = *(long *)(param_2 + 0x28);
    }
    if (*(char *)(param_2 + 0x47) < '\0') {
      func_0x000107c3192c(&uStack_60,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38)
                         );
    }
    else {
      uStack_58 = *(undefined8 *)(param_2 + 0x38);
      uStack_60 = *(undefined8 *)(param_2 + 0x30);
      lStack_50 = *(long *)(param_2 + 0x40);
    }
    FUN_10a8727e0(uVar2,&uStack_40,&uStack_60);
    if (lStack_50 < 0) {
      __ZdlPv(uStack_60);
    }
    if (lStack_30 < 0) {
      __ZdlPv(uStack_40);
    }
  }
  return;
}



/* Entry: 10a751370; end: 10a751453;  */

undefined8 FUN_10a751370(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if ((((*(long *)(param_1 + 0x378) == 0) ||
       (*(char *)(*(long *)(param_1 + 0x378) + 0xa8) == '\x01')) &&
      (*(long *)(param_1 + 0x368) != 0)) && (**(int **)(param_1 + 0x1e8) == 2)) {
    uVar1 = 0;
  }
  else {
    lVar2 = *param_2;
    if (lVar2 != 0) {
      func_0x000107c2b054(auStack_38,&UNK_10f674b4c);
      func_0x000107c2b054(auStack_50,&UNK_10f674bb8);
      FUN_10a7576b4(lVar2,auStack_38,auStack_50);
      if (cStack_39 < '\0') {
        __ZdlPv(auStack_50[0]);
      }
      if (cStack_21 < '\0') {
        __ZdlPv(auStack_38[0]);
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10a751454; end: 10a751543;  */

void FUN_10a751454(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  FUN_10a751370(uVar1,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    if (*(char *)(param_2 + 0x2f) < '\0') {
      func_0x000107c3192c(&uStack_40,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20)
                         );
    }
    else {
      uStack_38 = *(undefined8 *)(param_2 + 0x20);
      uStack_40 = *(undefined8 *)(param_2 + 0x18);
      lStack_30 = *(long *)(param_2 + 0x28);
    }
    if (*(char *)(param_2 + 0x47) < '\0') {
      func_0x000107c3192c(&uStack_60,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38)
                         );
    }
    else {
      uStack_58 = *(undefined8 *)(param_2 + 0x38);
      uStack_60 = *(undefined8 *)(param_2 + 0x30);
      lStack_50 = *(long *)(param_2 + 0x40);
    }
    func_0x00010a872888(uVar2,&uStack_40,&uStack_60);
    if (lStack_50 < 0) {
      __ZdlPv(uStack_60);
    }
    if (lStack_30 < 0) {
      __ZdlPv(uStack_40);
    }
  }
  return;
}



/* Entry: 10a751544; end: 10a7515db;  */

undefined1  [16] FUN_10a751544(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f66376c;
  return auVar1;
}



/* Entry: 10a7515dc; end: 10a75161f;  */

void FUN_10a7515dc(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a751620; end: 10a7517b7;  */

undefined8 * FUN_10a751620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c15c38;
  FUN_10a757ff0(param_1 + 10);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110c5eee8;
  func_0x00010a0428c0(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a7517b8; end: 10a7517bb;  */

undefined8 * FUN_10a7517b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14dd0;
  func_0x00010a05a86c(param_1 + 0x13);
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110c5eee8;
  func_0x00010a0428c0(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a7517bc; end: 10a7517cf;  */

void FUN_10a7517bc(void)

{
  FUN_10a757dd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7517d0; end: 10a751963;  */

undefined8 * FUN_10a7517d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c15d40;
  func_0x00010a75f734(param_1 + 0xf);
  func_0x00010a75f544(param_1 + 0xd);
  func_0x00010a75f63c(param_1 + 0xb);
  func_0x000104c4f944(param_1 + 5);
  func_0x00010a29b7f0(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a751964; end: 10a75196b;  */

undefined8 FUN_10a751964(void)

{
  return 1;
}



/* Entry: 10a75196c; end: 10a751a2f;  */

undefined8 * FUN_10a75196c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_DAT_110c14e30;
  *param_1 = &PTR_FUN_110c14ed8;
  param_1[5] = &PTR_FUN_110c14f30;
  func_0x00010a0810c8(param_1 + 0x23);
  func_0x000104c4f944(param_1 + 0x1e);
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    __ZdlPv(param_1[0x1b]);
  }
  *puVar1 = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a751a30; end: 10a751a37;  */

undefined8 FUN_10a751a30(void)

{
  return 1;
}



/* Entry: 10a751a38; end: 10a751d17;  */

undefined8 * FUN_10a751a38(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_DAT_110c14e30;
  param_1[-5] = &PTR_FUN_110c14ed8;
  *param_1 = &PTR_FUN_110c14f30;
  func_0x00010a0810c8(param_1 + 0x1e);
  func_0x000104c4f944(param_1 + 0x19);
  if (*(char *)((long)param_1 + 199) < '\0') {
    __ZdlPv(param_1[0x16]);
  }
  *puVar1 = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a751d18; end: 10a751d1f;  */

long FUN_10a751d18(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a751d20; end: 10a751d7f;  */

undefined8 * FUN_10a751d20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a751d80; end: 10a751d83;  */

undefined8 * FUN_10a751d80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a751d84; end: 10a751d97;  */

void FUN_10a751d84(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a751d98; end: 10a751d9f;  */

undefined8 * FUN_10a751d98(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a751da0; end: 10a751db7;  */

void FUN_10a751da0(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a751db8; end: 10a751dbf;  */

undefined8 * FUN_10a751db8(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a751dc0; end: 10a751dd7;  */

void FUN_10a751dc0(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a751dd8; end: 10a751f0b;  */

undefined8 * FUN_10a751dd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c15788;
  func_0x00010a1f6f04(param_1 + 7);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a751f0c; end: 10a751f13;  */

undefined8 FUN_10a751f0c(void)

{
  return 0;
}



/* Entry: 10a751f14; end: 10a7520cf;  */

void FUN_10a751f14(long param_1)

{
  long lStack_28;
  
  func_0x00010a7659b8(param_1 + 0xf0);
  lStack_28 = param_1 + 0xd8;
  FUN_10a756c9c(&lStack_28);
  func_0x00010aa71c88(param_1 + -0x10);
  return;
}



/* Entry: 10a7520d0; end: 10a7520db;  */

undefined8 FUN_10a7520d0(void)

{
  return 0;
}


