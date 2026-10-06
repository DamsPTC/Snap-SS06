/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a0d8eac; end: 10a0d8f17;  */

void FUN_10a0d8eac(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10a0d8f18(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a0d8f18; end: 10a0d8f63;  */

void FUN_10a0d8f18(undefined8 *param_1)

{
  FUN_10a0dc3c8(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a0d8f64; end: 10a0d8fcf;  */

void FUN_10a0d8f64(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10a0d8fd0(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a0d8fd0; end: 10a0d900b;  */

void FUN_10a0d8fd0(undefined8 *param_1)

{
  FUN_10a0e3194(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a0d900c; end: 10a0d9077;  */

void FUN_10a0d900c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10a0d9078(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a0d9078; end: 10a0d90b3;  */

void FUN_10a0d9078(undefined8 *param_1)

{
  FUN_10a0617bc(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a0d90b4; end: 10a0d911f;  */

void FUN_10a0d90b4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10a0d9120(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a0d9120; end: 10a0d916b;  */

void FUN_10a0d9120(undefined8 *param_1)

{
  func_0x00010a05248c(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a0d916c; end: 10a0d9177;  */

void FUN_10a0d916c(void)

{
  return;
}



/* Entry: 10a0d9178; end: 10a0d918b;  */

undefined8 * FUN_10a0d9178(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  
  puVar4 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  uVar6 = puVar4[2];
  puVar13 = (undefined8 *)*puVar4;
  puVar5 = puVar4;
  if (uVar6 - (long)puVar13 < param_4) {
    puVar8 = puVar4;
    if (puVar13 != (undefined8 *)0x0) {
      puVar4[1] = puVar13;
      __ZdlPv();
      uVar6 = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar8 = puVar13;
    }
    if ((long)param_4 < 0) {
      FUN_109ffdf98();
      plVar11 = (long *)puVar8[1];
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 1;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      return puVar8;
    }
    uVar9 = uVar6 * 2;
    if (uVar9 < param_4 || uVar9 - param_4 == 0) {
      uVar9 = param_4;
    }
    if (0x3ffffffffffffffe < uVar6) {
      uVar9 = 0x7fffffffffffffff;
    }
    func_0x000107c2b04c(puVar4,uVar9);
    puVar7 = (undefined8 *)puVar4[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)puVar7 = *param_2;
      puVar7 = (undefined8 *)((long)puVar7 + 1);
    }
  }
  else {
    puVar8 = (undefined8 *)puVar4[1];
    if ((ulong)((long)puVar8 - (long)puVar13) < param_4) {
      puVar12 = param_2 + ((long)puVar8 - (long)puVar13);
      puVar7 = puVar8;
      if (puVar8 != puVar13) {
        _memmove(puVar13,param_2);
        puVar8 = (undefined8 *)puVar4[1];
        puVar7 = puVar8;
        puVar5 = puVar13;
      }
      for (; puVar12 != param_3; puVar12 = puVar12 + 1) {
        *(undefined1 *)puVar8 = *puVar12;
        puVar8 = (undefined8 *)((long)puVar8 + 1);
        puVar7 = (undefined8 *)((long)puVar7 + 1);
      }
    }
    else {
      lVar10 = (long)param_3 - (long)param_2;
      if (lVar10 != 0) {
        puVar5 = puVar13;
        _memmove(puVar13,param_2,lVar10);
      }
      puVar7 = (undefined8 *)((long)puVar13 + lVar10);
    }
  }
  puVar4[1] = puVar7;
  return puVar5;
}



/* Entry: 10a0d918c; end: 10a0d92b7;  */

undefined8 *
FUN_10a0d918c(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  
  uVar5 = param_1[2];
  puVar12 = (undefined8 *)*param_1;
  puVar4 = param_1;
  if (uVar5 - (long)puVar12 < param_4) {
    puVar7 = param_1;
    if (puVar12 != (undefined8 *)0x0) {
      param_1[1] = puVar12;
      __ZdlPv();
      uVar5 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar7 = puVar12;
    }
    if ((long)param_4 < 0) {
      FUN_109ffdf98();
      plVar10 = (long *)puVar7[1];
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 1;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      return puVar7;
    }
    uVar8 = uVar5 * 2;
    if (uVar8 < param_4 || uVar8 - param_4 == 0) {
      uVar8 = param_4;
    }
    if (0x3ffffffffffffffe < uVar5) {
      uVar8 = 0x7fffffffffffffff;
    }
    func_0x000107c2b04c(param_1,uVar8);
    puVar6 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)puVar6 = *param_2;
      puVar6 = (undefined8 *)((long)puVar6 + 1);
    }
  }
  else {
    puVar7 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar7 - (long)puVar12) < param_4) {
      puVar11 = param_2 + ((long)puVar7 - (long)puVar12);
      puVar6 = puVar7;
      if (puVar7 != puVar12) {
        _memmove(puVar12,param_2);
        puVar7 = (undefined8 *)param_1[1];
        puVar6 = puVar7;
        puVar4 = puVar12;
      }
      for (; puVar11 != param_3; puVar11 = puVar11 + 1) {
        *(undefined1 *)puVar7 = *puVar11;
        puVar7 = (undefined8 *)((long)puVar7 + 1);
        puVar6 = (undefined8 *)((long)puVar6 + 1);
      }
    }
    else {
      lVar9 = (long)param_3 - (long)param_2;
      if (lVar9 != 0) {
        puVar4 = puVar12;
        _memmove(puVar12,param_2,lVar9);
      }
      puVar6 = (undefined8 *)((long)puVar12 + lVar9);
    }
  }
  param_1[1] = puVar6;
  return puVar4;
}



/* Entry: 10a0d92b8; end: 10a0d92c7;  */

long FUN_10a0d92b8(long param_1)

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



/* Entry: 10a0d92c8; end: 10a0d93cf;  */

long FUN_10a0d92c8(long param_1)

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



/* Entry: 10a0d93d0; end: 10a0d93e3;  */

undefined1  [16] FUN_10a0d93d0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f63805b;
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
    FUN_10a0617bc();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a0d93e4; end: 10a0d9463;  */

undefined1  [16] FUN_10a0d93e4(long *param_1,ulong param_2)

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
    FUN_10a0617bc();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a0d9464; end: 10a0d949f;  */

char * FUN_10a0d9464(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  char **ppcVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined4 uVar14;
  long lVar15;
  undefined4 uVar16;
  char *pcVar17;
  undefined8 **ppuStack_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  char cStack_109;
  undefined8 uStack_108;
  float fStack_f4;
  undefined8 ***pppuStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  char *pcStack_d8;
  char *apcStack_d0 [2];
  undefined1 auStack_18 [8];
  
  puVar9 = auStack_18;
  FUN_10a0da208();
  if (*param_1 != 0) {
    return (char *)(*param_1 + 0x38);
  }
  pcVar17 = "map::at:  key not found";
  FUN_109ffdddc();
  pcVar4 = pcRam00000001137e9550;
  uVar13 = (*(long *)(puVar9 + 0xb0) - *(long *)(puVar9 + 0xa8) >> 5) * 0x6db6db6db6db6db7;
  iVar10 = (int)param_2;
  if (uVar13 < (ulong)(long)iVar10 || uVar13 - (long)iVar10 == 0) {
LAB_10a0d95e4:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0d95e8);
    (*pcVar2)();
  }
  iVar10 = *(int *)(*(long *)(puVar9 + 0xa8) + (long)iVar10 * 0xe0 + 0x18);
  if (iVar10 == -1) {
    uVar14 = 2;
    uVar16 = 1;
    uVar11 = 1;
    uVar12 = 1;
    pcVar4 = pcVar17;
LAB_10a0d95b0:
    *pcVar17 = '\x01';
    *(undefined4 *)(pcVar17 + 4) = uVar14;
    *(undefined4 *)(pcVar17 + 8) = uVar16;
    *(undefined4 *)(pcVar17 + 0xc) = uVar11;
    *(undefined4 *)(pcVar17 + 0x10) = uVar12;
    pcVar17[0x1c] = '\0';
    pcVar17[0x1d] = '\0';
    pcVar17[0x1e] = '\0';
    pcVar17[0x1f] = '\0';
    pcVar17[0x20] = '\0';
    pcVar17[0x21] = '\0';
    pcVar17[0x22] = '\0';
    pcVar17[0x23] = '\0';
    pcVar17[0x14] = '\0';
    pcVar17[0x15] = '\0';
    pcVar17[0x16] = '\0';
    pcVar17[0x17] = '\0';
    pcVar17[0x18] = '\0';
    pcVar17[0x19] = '\0';
    pcVar17[0x1a] = '\0';
    pcVar17[0x1b] = '\0';
    pcVar17[0x24] = '\0';
    pcVar17[0x25] = '\0';
    pcVar17[0x26] = -0x18;
    pcVar17[0x27] = '\x03';
    return pcVar4;
  }
  uVar13 = (*(long *)(puVar9 + 0xf8) - *(long *)(puVar9 + 0xf0) >> 4) * -0x1111111111111111;
  if (uVar13 < (ulong)(long)iVar10 || uVar13 - (long)iVar10 == 0) goto LAB_10a0d95e4;
  lVar15 = *(long *)(puVar9 + 0xf0) + (long)iVar10 * 0xf0;
  if (((*(uint *)(lVar15 + 0x18) | 0x100) == 0x2700) && (*(int *)(lVar15 + 0x1c) == 0x2600)) {
    uVar14 = 0;
  }
  else {
    uVar14 = 2;
  }
  uVar13 = (ulong)*(uint *)(lVar15 + 0x20);
  pcVar3 = pcRam00000001137e9550;
  FUN_10a0da2a0(pcRam00000001137e9550,uVar13);
  if (pcVar3 != (char *)0x0) {
    uVar16 = *(undefined4 *)(pcVar3 + 0x14);
    uVar13 = (ulong)*(uint *)(lVar15 + 0x24);
    pcVar3 = pcVar4;
    FUN_10a0da2a0(pcVar4,uVar13);
    if (pcVar3 != (char *)0x0) {
      uVar13 = (ulong)*(uint *)(lVar15 + 0x28);
      FUN_10a0da2a0(pcVar4,uVar13);
      if (pcVar4 != (char *)0x0) {
        uVar11 = *(undefined4 *)(pcVar3 + 0x14);
        uVar12 = *(undefined4 *)(pcVar4 + 0x14);
        goto LAB_10a0d95b0;
      }
    }
  }
  puVar5 = &UNK_10f639994;
  FUN_109ffdddc(&UNK_10f639994);
  FUN_10a0c9838(&pcStack_d8,puVar5 + 0x58);
  func_0x000107c2b054(&ppuStack_120,&DAT_10f63975c);
  ppcVar6 = &pcStack_d8;
  FUN_10a0cd368(ppcVar6,&ppuStack_120);
  if (cStack_109 < '\0') {
    __ZdlPv(ppuStack_120);
  }
  uVar1 = (undefined1)param_4;
  if (apcStack_d0 != ppcVar6) {
    if (0x7ffffffffffffff7 < param_4) {
      func_0x000109ffde50();
      goto LAB_10a0d99b0;
    }
    if (param_4 < 0x17) {
      uStack_e0 = CONCAT17(uVar1,(undefined7)uStack_e0);
      ppppuVar7 = &pppuStack_f0;
      if (param_4 != 0) goto LAB_10a0d96bc;
    }
    else {
      ppppuVar8 = (undefined8 ****)0x19;
      if ((param_4 | 7) != 0x17) {
        ppppuVar8 = (undefined8 ****)((param_4 | 7) + 1);
      }
      ppppuVar7 = ppppuVar8;
      __Znwm();
      uStack_e0 = (ulong)ppppuVar8 | 0x8000000000000000;
      pppuStack_f0 = ppppuVar7;
      uStack_e8 = param_4;
LAB_10a0d96bc:
      _memmove(ppppuVar7,param_2,param_4);
    }
    *(undefined1 *)((long)ppppuVar7 + param_4) = 0;
    ppppuVar8 = &pppuStack_f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppuVar8,&UNK_10f6399d0,7);
    ppuStack_120 = *ppppuVar8;
    uStack_110 = SUB87(ppppuVar8[2],0);
    cStack_109 = (char)((ulong)ppppuVar8[2] >> 0x38);
    uStack_118 = SUB87(ppppuVar8[1],0);
    uStack_111 = (undefined1)((ulong)ppppuVar8[1] >> 0x38);
    ppppuVar8[1] = (undefined8 ***)0x0;
    ppppuVar8[2] = (undefined8 ***)0x0;
    *ppppuVar8 = (undefined8 ***)0x0;
    FUN_10a0da340(ppcVar6 + 7,uVar13,&ppuStack_120,0);
    if (cStack_109 < '\0') {
      __ZdlPv(ppuStack_120);
    }
    if ((long)uStack_e0 < 0) {
      __ZdlPv(pppuStack_f0);
    }
  }
  func_0x000107c2b054(&ppuStack_120,"scale");
  ppcVar6 = &pcStack_d8;
  FUN_10a0cd368(ppcVar6,&ppuStack_120);
  if (cStack_109 < '\0') {
    __ZdlPv(ppuStack_120);
  }
  if (apcStack_d0 != ppcVar6) {
    if (0x7ffffffffffffff7 < param_4) {
      func_0x000109ffde50();
      goto LAB_10a0d99b0;
    }
    if (param_4 < 0x17) {
      uStack_e0 = CONCAT17(uVar1,(undefined7)uStack_e0);
      ppppuVar7 = &pppuStack_f0;
      if (param_4 != 0) goto LAB_10a0d97b0;
    }
    else {
      ppppuVar8 = (undefined8 ****)0x19;
      if ((param_4 | 7) != 0x17) {
        ppppuVar8 = (undefined8 ****)((param_4 | 7) + 1);
      }
      ppppuVar7 = ppppuVar8;
      __Znwm();
      uStack_e0 = (ulong)ppppuVar8 | 0x8000000000000000;
      pppuStack_f0 = ppppuVar7;
      uStack_e8 = param_4;
LAB_10a0d97b0:
      _memmove(ppppuVar7,param_2,param_4);
    }
    *(undefined1 *)((long)ppppuVar7 + param_4) = 0;
    ppppuVar8 = &pppuStack_f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppuVar8,&UNK_10f6399d8,6);
    ppuStack_120 = *ppppuVar8;
    uStack_110 = SUB87(ppppuVar8[2],0);
    cStack_109 = (char)((ulong)ppppuVar8[2] >> 0x38);
    uStack_118 = SUB87(ppppuVar8[1],0);
    uStack_111 = (undefined1)((ulong)ppppuVar8[1] >> 0x38);
    ppppuVar8[1] = (undefined8 ***)0x0;
    ppppuVar8[2] = (undefined8 ***)0x0;
    *ppppuVar8 = (undefined8 ***)0x0;
    FUN_10a0da340(ppcVar6 + 7,uVar13,&ppuStack_120,0x3f8000003f800000);
    if (cStack_109 < '\0') {
      __ZdlPv(ppuStack_120);
    }
    if ((long)uStack_e0 < 0) {
      __ZdlPv(pppuStack_f0);
    }
  }
  fStack_f4 = 0.0;
  func_0x000107c2b054(&ppuStack_120,&DAT_10f2c46ae);
  ppcVar6 = &pcStack_d8;
  FUN_10a0cd368(ppcVar6,&ppuStack_120);
  if (cStack_109 < '\0') {
    __ZdlPv(ppuStack_120);
  }
  if ((apcStack_d0 != ppcVar6) && (*(int *)(ppcVar6 + 7) - 1U < 2)) {
    if (*(int *)(ppcVar6 + 7) == 2) {
      pcVar17 = (char *)(double)*(int *)((long)ppcVar6 + 0x3c);
    }
    else {
      pcVar17 = ppcVar6[8];
    }
    fStack_f4 = (float)(((double)pcVar17 / 3.141592653589793) * 180.0);
  }
  if (0x7ffffffffffffff7 < param_4) {
    func_0x000109ffde50();
LAB_10a0d99b0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0d99b4);
    (*pcVar2)();
  }
  if (param_4 < 0x17) {
    uStack_e0 = CONCAT17(uVar1,(undefined7)uStack_e0);
    ppppuVar7 = &pppuStack_f0;
    if (param_4 == 0) goto LAB_10a0d9900;
  }
  else {
    ppppuVar8 = (undefined8 ****)0x19;
    if ((param_4 | 7) != 0x17) {
      ppppuVar8 = (undefined8 ****)((param_4 | 7) + 1);
    }
    ppppuVar7 = ppppuVar8;
    __Znwm();
    uStack_e0 = (ulong)ppppuVar8 | 0x8000000000000000;
    pppuStack_f0 = ppppuVar7;
    uStack_e8 = param_4;
  }
  _memmove(ppppuVar7,param_2,param_4);
LAB_10a0d9900:
  *(undefined1 *)((long)ppppuVar7 + param_4) = 0;
  ppppuVar8 = &pppuStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar8,&UNK_10f6399df,9);
  ppuStack_120 = *ppppuVar8;
  uStack_110 = (undefined7)((ulong)*(undefined8 *)((long)ppppuVar8 + 0xf) >> 8);
  uStack_118 = SUB87(ppppuVar8[1],0);
  uStack_111 = (undefined1)((ulong)ppppuVar8[1] >> 0x38);
  cStack_109 = *(char *)((long)ppppuVar8 + 0x17);
  ppppuVar8[1] = (undefined8 ***)0x0;
  ppppuVar8[2] = (undefined8 ***)0x0;
  *ppppuVar8 = (undefined8 ***)0x0;
  uStack_108 = 0;
  func_0x000107c2b080(&ppuStack_120);
  FUN_10a0d9bd4(uVar13,&ppuStack_120,&fStack_f4);
  if (cStack_109 < '\0') {
    __ZdlPv(ppuStack_120);
  }
  if ((long)uStack_e0 < 0) {
    __ZdlPv(pppuStack_f0);
  }
  func_0x00010a0c9b2c(apcStack_d0[0]);
  return apcStack_d0[0];
}



/* Entry: 10a0d94a0; end: 10a0d95f3;  */

void FUN_10a0d94a0(undefined1 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 uVar15;
  double dVar16;
  undefined8 **ppuStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  char cStack_e9;
  undefined8 uStack_e8;
  float fStack_d4;
  undefined8 ***pppuStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 auStack_b0 [2];
  
  lVar4 = lRam00000001137e9550;
  uVar12 = (*(long *)(param_2 + 0xb0) - *(long *)(param_2 + 0xa8) >> 5) * 0x6db6db6db6db6db7;
  iVar9 = (int)param_3;
  if (uVar12 < (ulong)(long)iVar9 || uVar12 - (long)iVar9 == 0) {
LAB_10a0d95e4:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0d95e8);
    (*pcVar2)();
  }
  iVar9 = *(int *)(*(long *)(param_2 + 0xa8) + (long)iVar9 * 0xe0 + 0x18);
  if (iVar9 == -1) {
    uVar13 = 2;
    uVar15 = 1;
    uVar10 = 1;
    uVar11 = 1;
LAB_10a0d95b0:
    *param_1 = 1;
    *(undefined4 *)(param_1 + 4) = uVar13;
    *(undefined4 *)(param_1 + 8) = uVar15;
    *(undefined4 *)(param_1 + 0xc) = uVar10;
    *(undefined4 *)(param_1 + 0x10) = uVar11;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x3e80000;
    return;
  }
  uVar12 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 4) * -0x1111111111111111;
  if (uVar12 < (ulong)(long)iVar9 || uVar12 - (long)iVar9 == 0) goto LAB_10a0d95e4;
  lVar14 = *(long *)(param_2 + 0xf0) + (long)iVar9 * 0xf0;
  if (((*(uint *)(lVar14 + 0x18) | 0x100) == 0x2700) && (*(int *)(lVar14 + 0x1c) == 0x2600)) {
    uVar13 = 0;
  }
  else {
    uVar13 = 2;
  }
  uVar12 = (ulong)*(uint *)(lVar14 + 0x20);
  lVar3 = lRam00000001137e9550;
  FUN_10a0da2a0(lRam00000001137e9550,uVar12);
  if (lVar3 != 0) {
    uVar15 = *(undefined4 *)(lVar3 + 0x14);
    uVar12 = (ulong)*(uint *)(lVar14 + 0x24);
    lVar3 = lVar4;
    FUN_10a0da2a0(lVar4,uVar12);
    if (lVar3 != 0) {
      uVar12 = (ulong)*(uint *)(lVar14 + 0x28);
      FUN_10a0da2a0(lVar4,uVar12);
      if (lVar4 != 0) {
        uVar10 = *(undefined4 *)(lVar3 + 0x14);
        uVar11 = *(undefined4 *)(lVar4 + 0x14);
        goto LAB_10a0d95b0;
      }
    }
  }
  puVar5 = &UNK_10f639994;
  FUN_109ffdddc(&UNK_10f639994);
  FUN_10a0c9838(&uStack_b8,puVar5 + 0x58);
  func_0x000107c2b054(&ppuStack_100,&DAT_10f63975c);
  puVar6 = &uStack_b8;
  FUN_10a0cd368(puVar6,&ppuStack_100);
  if (cStack_e9 < '\0') {
    __ZdlPv(ppuStack_100);
  }
  uVar1 = (undefined1)param_4;
  if (auStack_b0 != puVar6) {
    if (0x7ffffffffffffff7 < param_4) {
      func_0x000109ffde50();
      goto LAB_10a0d99b0;
    }
    if (param_4 < 0x17) {
      uStack_c0 = CONCAT17(uVar1,(undefined7)uStack_c0);
      ppppuVar7 = &pppuStack_d0;
      if (param_4 != 0) goto LAB_10a0d96bc;
    }
    else {
      ppppuVar8 = (undefined8 ****)0x19;
      if ((param_4 | 7) != 0x17) {
        ppppuVar8 = (undefined8 ****)((param_4 | 7) + 1);
      }
      ppppuVar7 = ppppuVar8;
      __Znwm();
      uStack_c0 = (ulong)ppppuVar8 | 0x8000000000000000;
      pppuStack_d0 = ppppuVar7;
      uStack_c8 = param_4;
LAB_10a0d96bc:
      _memmove(ppppuVar7,param_3,param_4);
    }
    *(undefined1 *)((long)ppppuVar7 + param_4) = 0;
    ppppuVar8 = &pppuStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppuVar8,&UNK_10f6399d0,7);
    ppuStack_100 = *ppppuVar8;
    uStack_f0 = SUB87(ppppuVar8[2],0);
    cStack_e9 = (char)((ulong)ppppuVar8[2] >> 0x38);
    uStack_f8 = SUB87(ppppuVar8[1],0);
    uStack_f1 = (undefined1)((ulong)ppppuVar8[1] >> 0x38);
    ppppuVar8[1] = (undefined8 ***)0x0;
    ppppuVar8[2] = (undefined8 ***)0x0;
    *ppppuVar8 = (undefined8 ***)0x0;
    FUN_10a0da340(puVar6 + 7,uVar12,&ppuStack_100,0);
    if (cStack_e9 < '\0') {
      __ZdlPv(ppuStack_100);
    }
    if ((long)uStack_c0 < 0) {
      __ZdlPv(pppuStack_d0);
    }
  }
  func_0x000107c2b054(&ppuStack_100,"scale");
  puVar6 = &uStack_b8;
  FUN_10a0cd368(puVar6,&ppuStack_100);
  if (cStack_e9 < '\0') {
    __ZdlPv(ppuStack_100);
  }
  if (auStack_b0 != puVar6) {
    if (0x7ffffffffffffff7 < param_4) {
      func_0x000109ffde50();
      goto LAB_10a0d99b0;
    }
    if (param_4 < 0x17) {
      uStack_c0 = CONCAT17(uVar1,(undefined7)uStack_c0);
      ppppuVar7 = &pppuStack_d0;
      if (param_4 != 0) goto LAB_10a0d97b0;
    }
    else {
      ppppuVar8 = (undefined8 ****)0x19;
      if ((param_4 | 7) != 0x17) {
        ppppuVar8 = (undefined8 ****)((param_4 | 7) + 1);
      }
      ppppuVar7 = ppppuVar8;
      __Znwm();
      uStack_c0 = (ulong)ppppuVar8 | 0x8000000000000000;
      pppuStack_d0 = ppppuVar7;
      uStack_c8 = param_4;
LAB_10a0d97b0:
      _memmove(ppppuVar7,param_3,param_4);
    }
    *(undefined1 *)((long)ppppuVar7 + param_4) = 0;
    ppppuVar8 = &pppuStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppuVar8,&UNK_10f6399d8,6);
    ppuStack_100 = *ppppuVar8;
    uStack_f0 = SUB87(ppppuVar8[2],0);
    cStack_e9 = (char)((ulong)ppppuVar8[2] >> 0x38);
    uStack_f8 = SUB87(ppppuVar8[1],0);
    uStack_f1 = (undefined1)((ulong)ppppuVar8[1] >> 0x38);
    ppppuVar8[1] = (undefined8 ***)0x0;
    ppppuVar8[2] = (undefined8 ***)0x0;
    *ppppuVar8 = (undefined8 ***)0x0;
    FUN_10a0da340(puVar6 + 7,uVar12,&ppuStack_100,0x3f8000003f800000);
    if (cStack_e9 < '\0') {
      __ZdlPv(ppuStack_100);
    }
    if ((long)uStack_c0 < 0) {
      __ZdlPv(pppuStack_d0);
    }
  }
  fStack_d4 = 0.0;
  func_0x000107c2b054(&ppuStack_100,&DAT_10f2c46ae);
  puVar6 = &uStack_b8;
  FUN_10a0cd368(puVar6,&ppuStack_100);
  if (cStack_e9 < '\0') {
    __ZdlPv(ppuStack_100);
  }
  if ((auStack_b0 != puVar6) && (*(int *)(puVar6 + 7) - 1U < 2)) {
    if (*(int *)(puVar6 + 7) == 2) {
      dVar16 = (double)*(int *)((long)puVar6 + 0x3c);
    }
    else {
      dVar16 = (double)puVar6[8];
    }
    fStack_d4 = (float)((dVar16 / 3.141592653589793) * 180.0);
  }
  if (0x7ffffffffffffff7 < param_4) {
    func_0x000109ffde50();
LAB_10a0d99b0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0d99b4);
    (*pcVar2)();
  }
  if (param_4 < 0x17) {
    uStack_c0 = CONCAT17(uVar1,(undefined7)uStack_c0);
    ppppuVar7 = &pppuStack_d0;
    if (param_4 == 0) goto LAB_10a0d9900;
  }
  else {
    ppppuVar8 = (undefined8 ****)0x19;
    if ((param_4 | 7) != 0x17) {
      ppppuVar8 = (undefined8 ****)((param_4 | 7) + 1);
    }
    ppppuVar7 = ppppuVar8;
    __Znwm();
    uStack_c0 = (ulong)ppppuVar8 | 0x8000000000000000;
    pppuStack_d0 = ppppuVar7;
    uStack_c8 = param_4;
  }
  _memmove(ppppuVar7,param_3,param_4);
LAB_10a0d9900:
  *(undefined1 *)((long)ppppuVar7 + param_4) = 0;
  ppppuVar8 = &pppuStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar8,&UNK_10f6399df,9);
  ppuStack_100 = *ppppuVar8;
  uStack_f0 = (undefined7)((ulong)*(undefined8 *)((long)ppppuVar8 + 0xf) >> 8);
  uStack_f8 = SUB87(ppppuVar8[1],0);
  uStack_f1 = (undefined1)((ulong)ppppuVar8[1] >> 0x38);
  cStack_e9 = *(char *)((long)ppppuVar8 + 0x17);
  ppppuVar8[1] = (undefined8 ***)0x0;
  ppppuVar8[2] = (undefined8 ***)0x0;
  *ppppuVar8 = (undefined8 ***)0x0;
  uStack_e8 = 0;
  func_0x000107c2b080(&ppuStack_100);
  FUN_10a0d9bd4(uVar12,&ppuStack_100,&fStack_d4);
  if (cStack_e9 < '\0') {
    __ZdlPv(ppuStack_100);
  }
  if ((long)uStack_c0 < 0) {
    __ZdlPv(pppuStack_d0);
  }
  func_0x00010a0c9b2c(auStack_b0[0]);
  return;
}



/* Entry: 10a0d95f4; end: 10a0d9a1b;  */

void FUN_10a0d95f4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  double dVar6;
  undefined8 *puStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  char cStack_99;
  undefined8 uStack_98;
  float fStack_84;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 auStack_60 [2];
  
  FUN_10a0c9838(&uStack_68,param_1 + 0x58);
  func_0x000107c2b054(&puStack_b0,&DAT_10f63975c);
  puVar3 = &uStack_68;
  FUN_10a0cd368(puVar3,&puStack_b0);
  if (cStack_99 < '\0') {
    __ZdlPv(puStack_b0);
  }
  uVar1 = (undefined1)param_4;
  if (auStack_60 != puVar3) {
    if (0x7ffffffffffffff7 < param_4) {
      func_0x000109ffde50();
      goto LAB_10a0d99b0;
    }
    if (param_4 < 0x17) {
      uStack_70 = CONCAT17(uVar1,(undefined7)uStack_70);
      pppuVar4 = &ppuStack_80;
      if (param_4 != 0) goto LAB_10a0d96bc;
    }
    else {
      pppuVar5 = (undefined8 ***)0x19;
      if ((param_4 | 7) != 0x17) {
        pppuVar5 = (undefined8 ***)((param_4 | 7) + 1);
      }
      pppuVar4 = pppuVar5;
      __Znwm();
      uStack_70 = (ulong)pppuVar5 | 0x8000000000000000;
      ppuStack_80 = pppuVar4;
      uStack_78 = param_4;
LAB_10a0d96bc:
      _memmove(pppuVar4,param_3,param_4);
    }
    *(undefined1 *)((long)pppuVar4 + param_4) = 0;
    pppuVar5 = &ppuStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppuVar5,&UNK_10f6399d0,7);
    puStack_b0 = *pppuVar5;
    uStack_a0 = SUB87(pppuVar5[2],0);
    cStack_99 = (char)((ulong)pppuVar5[2] >> 0x38);
    uStack_a8 = SUB87(pppuVar5[1],0);
    uStack_a1 = (undefined1)((ulong)pppuVar5[1] >> 0x38);
    pppuVar5[1] = (undefined8 **)0x0;
    pppuVar5[2] = (undefined8 **)0x0;
    *pppuVar5 = (undefined8 **)0x0;
    FUN_10a0da340(puVar3 + 7,param_2,&puStack_b0,0);
    if (cStack_99 < '\0') {
      __ZdlPv(puStack_b0);
    }
    if ((long)uStack_70 < 0) {
      __ZdlPv(ppuStack_80);
    }
  }
  func_0x000107c2b054(&puStack_b0,"scale");
  puVar3 = &uStack_68;
  FUN_10a0cd368(puVar3,&puStack_b0);
  if (cStack_99 < '\0') {
    __ZdlPv(puStack_b0);
  }
  if (auStack_60 != puVar3) {
    if (0x7ffffffffffffff7 < param_4) {
      func_0x000109ffde50();
      goto LAB_10a0d99b0;
    }
    if (param_4 < 0x17) {
      uStack_70 = CONCAT17(uVar1,(undefined7)uStack_70);
      pppuVar4 = &ppuStack_80;
      if (param_4 != 0) goto LAB_10a0d97b0;
    }
    else {
      pppuVar5 = (undefined8 ***)0x19;
      if ((param_4 | 7) != 0x17) {
        pppuVar5 = (undefined8 ***)((param_4 | 7) + 1);
      }
      pppuVar4 = pppuVar5;
      __Znwm();
      uStack_70 = (ulong)pppuVar5 | 0x8000000000000000;
      ppuStack_80 = pppuVar4;
      uStack_78 = param_4;
LAB_10a0d97b0:
      _memmove(pppuVar4,param_3,param_4);
    }
    *(undefined1 *)((long)pppuVar4 + param_4) = 0;
    pppuVar5 = &ppuStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppuVar5,&UNK_10f6399d8,6);
    puStack_b0 = *pppuVar5;
    uStack_a0 = SUB87(pppuVar5[2],0);
    cStack_99 = (char)((ulong)pppuVar5[2] >> 0x38);
    uStack_a8 = SUB87(pppuVar5[1],0);
    uStack_a1 = (undefined1)((ulong)pppuVar5[1] >> 0x38);
    pppuVar5[1] = (undefined8 **)0x0;
    pppuVar5[2] = (undefined8 **)0x0;
    *pppuVar5 = (undefined8 **)0x0;
    FUN_10a0da340(puVar3 + 7,param_2,&puStack_b0,0x3f8000003f800000);
    if (cStack_99 < '\0') {
      __ZdlPv(puStack_b0);
    }
    if ((long)uStack_70 < 0) {
      __ZdlPv(ppuStack_80);
    }
  }
  fStack_84 = 0.0;
  func_0x000107c2b054(&puStack_b0,&DAT_10f2c46ae);
  puVar3 = &uStack_68;
  FUN_10a0cd368(puVar3,&puStack_b0);
  if (cStack_99 < '\0') {
    __ZdlPv(puStack_b0);
  }
  if ((auStack_60 != puVar3) && (*(int *)(puVar3 + 7) - 1U < 2)) {
    if (*(int *)(puVar3 + 7) == 2) {
      dVar6 = (double)*(int *)((long)puVar3 + 0x3c);
    }
    else {
      dVar6 = (double)puVar3[8];
    }
    fStack_84 = (float)((dVar6 / 3.141592653589793) * 180.0);
  }
  if (0x7ffffffffffffff7 < param_4) {
    func_0x000109ffde50();
LAB_10a0d99b0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0d99b4);
    (*pcVar2)();
  }
  if (param_4 < 0x17) {
    uStack_70 = CONCAT17(uVar1,(undefined7)uStack_70);
    pppuVar4 = &ppuStack_80;
    if (param_4 == 0) goto LAB_10a0d9900;
  }
  else {
    pppuVar5 = (undefined8 ***)0x19;
    if ((param_4 | 7) != 0x17) {
      pppuVar5 = (undefined8 ***)((param_4 | 7) + 1);
    }
    pppuVar4 = pppuVar5;
    __Znwm();
    uStack_70 = (ulong)pppuVar5 | 0x8000000000000000;
    ppuStack_80 = pppuVar4;
    uStack_78 = param_4;
  }
  _memmove(pppuVar4,param_3,param_4);
LAB_10a0d9900:
  *(undefined1 *)((long)pppuVar4 + param_4) = 0;
  pppuVar5 = &ppuStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar5,&UNK_10f6399df,9);
  puStack_b0 = *pppuVar5;
  uStack_a0 = (undefined7)((ulong)*(undefined8 *)((long)pppuVar5 + 0xf) >> 8);
  uStack_a8 = SUB87(pppuVar5[1],0);
  uStack_a1 = (undefined1)((ulong)pppuVar5[1] >> 0x38);
  cStack_99 = *(char *)((long)pppuVar5 + 0x17);
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  uStack_98 = 0;
  func_0x000107c2b080(&puStack_b0);
  FUN_10a0d9bd4(param_2,&puStack_b0,&fStack_84);
  if (cStack_99 < '\0') {
    __ZdlPv(puStack_b0);
  }
  if ((long)uStack_70 < 0) {
    __ZdlPv(ppuStack_80);
  }
  func_0x00010a0c9b2c(auStack_60[0]);
  return;
}



/* Entry: 10a0d9a1c; end: 10a0d9bd3;  */

void FUN_10a0d9a1c(undefined8 param_1,float param_2,float param_3,float param_4,long param_5,
                  long *param_6,undefined8 *param_7)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined2 uVar8;
  ushort uVar9;
  undefined2 uVar10;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined1 uStack_40;
  undefined1 uStack_31;
  
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  uVar8 = (undefined2)param_1;
  lVar3 = *(long *)(param_5 + 0x1b8);
  plVar4 = (long *)(lVar3 + 8);
  plVar6 = (long *)*plVar4;
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar4;
    do {
      lVar5 = 8;
      if ((ulong)param_6[3] <= (ulong)plVar6[7]) {
        lVar5 = 0;
        plVar7 = plVar6;
      }
      plVar6 = *(long **)((long)plVar6 + lVar5);
    } while (plVar6 != (long *)0x0);
    if ((((plVar7 != plVar4) && ((ulong)plVar7[7] <= (ulong)param_6[3])) &&
        (lVar5 = plVar7[8], lVar5 != 0)) && (*(short *)(lVar5 + 0x20) == 9)) {
      FUN_10a0dad84(lVar5);
      uVar9 = NEON_uminv(CONCAT26(-(ushort)(param_4 == (float)((ulong)param_7[1] >> 0x20)),
                                  CONCAT24(-(ushort)(param_3 == (float)param_7[1]),
                                           CONCAT22(-(ushort)(param_2 ==
                                                             (float)((ulong)*param_7 >> 0x20)),
                                                    -(ushort)((float)CONCAT22(uVar10,uVar8) ==
                                                             (float)*param_7)))),2);
      if ((uVar9 & 1) != 0) {
        return;
      }
      lVar3 = *(long *)(param_5 + 0x1b8);
    }
  }
  do {
    lVar5 = lRam0000000113301700;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam0000000113301700 = lRam0000000113301700 + 1;
    }
  } while (cVar1 != '\0');
  *(long *)(param_5 + 0x1c8) = lVar5;
  uStack_40 = 0;
  plStack_58 = param_6;
  plStack_48 = (long *)(param_5 + 0x1b8);
  FUN_10a0da6b4(lVar3,param_6,&UNK_10dd5b8f9,&plStack_58,&uStack_31);
  lVar5 = *(long *)(lVar3 + 0x40);
  if ((lVar5 == 0) || (*(short *)(lVar5 + 0x20) != 9)) {
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar6 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a0dae70(plVar6,param_6,param_7);
    plStack_58 = plVar6;
    plStack_50 = plVar4;
    func_0x00010a0da650((long *)(lVar3 + 0x40),&plStack_58);
    plVar4 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar6 = plStack_50 + 1;
      do {
        lVar3 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    FUN_10a0dadb0(lVar5,param_7);
  }
  FUN_10a0daab8(&plStack_48);
  return;
}



/* Entry: 10a0d9bd4; end: 10a0d9d6b;  */

void FUN_10a0d9bd4(long param_1,long *param_2,float *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  undefined1 uStack_40;
  undefined1 uStack_31;
  
  lVar3 = *(long *)(param_1 + 0x1b8);
  plVar4 = (long *)(lVar3 + 8);
  plVar7 = (long *)*plVar4;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar4;
    do {
      lVar5 = 8;
      if ((ulong)param_2[3] <= (ulong)plVar7[7]) {
        lVar5 = 0;
        plVar6 = plVar7;
      }
      plVar7 = *(long **)((long)plVar7 + lVar5);
    } while (plVar7 != (long *)0x0);
    if ((((plVar6 != plVar4) && ((ulong)plVar6[7] <= (ulong)param_2[3])) &&
        (lVar5 = plVar6[8], lVar5 != 0)) &&
       ((*(short *)(lVar5 + 0x20) == 3 && (*(float *)(lVar5 + 0x24) == *param_3)))) {
      return;
    }
  }
  lStack_48 = param_1 + 0x1b8;
  do {
    lVar5 = lRam0000000113301700;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam0000000113301700 = lRam0000000113301700 + 1;
    }
  } while (cVar1 != '\0');
  *(long *)(param_1 + 0x1c8) = lVar5;
  uStack_40 = 0;
  plStack_58 = param_2;
  FUN_10a0da6b4(lVar3,param_2,&UNK_10dd5b8f9,&plStack_58,&uStack_31);
  lVar5 = *(long *)(lVar3 + 0x40);
  if ((lVar5 == 0) || (*(short *)(lVar5 + 0x20) != 3)) {
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar7 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a0daf68(plVar7,param_2,param_3);
    plStack_58 = plVar7;
    plStack_50 = plVar4;
    func_0x00010a0da650((long *)(lVar3 + 0x40),&plStack_58);
    plVar4 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar7 = plStack_50 + 1;
      do {
        lVar3 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    FUN_10a0daef4(lVar5,param_3);
  }
  FUN_10a0daab8(&lStack_48);
  return;
}



/* Entry: 10a0d9d6c; end: 10a0d9f13;  */

void FUN_10a0d9d6c(long param_1,long *param_2,float *param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  undefined1 uStack_40;
  undefined1 uStack_31;
  
  lVar4 = *(long *)(param_1 + 0x1b8);
  plVar5 = (long *)(lVar4 + 8);
  plVar8 = (long *)*plVar5;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar5;
    do {
      lVar6 = 8;
      if ((ulong)param_2[3] <= (ulong)plVar8[7]) {
        lVar6 = 0;
        plVar7 = plVar8;
      }
      plVar8 = *(long **)((long)plVar8 + lVar6);
    } while (plVar8 != (long *)0x0);
    if ((((plVar7 != plVar5) && ((ulong)plVar7[7] <= (ulong)param_2[3])) &&
        (lVar6 = plVar7[8], lVar6 != 0)) && (*(short *)(lVar6 + 0x20) == 8)) {
      bVar2 = false;
      if ((*(float *)(lVar6 + 0x24) == *param_3) &&
         (bVar2 = false, !NAN(*(float *)(lVar6 + 0x28)) && !NAN(param_3[1]))) {
        bVar2 = *(float *)(lVar6 + 0x28) == param_3[1];
      }
      bVar3 = false;
      if ((bVar2) && (bVar3 = false, !NAN(*(float *)(lVar6 + 0x2c)) && !NAN(param_3[2]))) {
        bVar3 = *(float *)(lVar6 + 0x2c) == param_3[2];
      }
      if (bVar3) {
        return;
      }
    }
  }
  lStack_48 = param_1 + 0x1b8;
  do {
    lVar6 = lRam0000000113301700;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam0000000113301700 = lRam0000000113301700 + 1;
    }
  } while (cVar1 != '\0');
  *(long *)(param_1 + 0x1c8) = lVar6;
  uStack_40 = 0;
  plStack_58 = param_2;
  FUN_10a0da6b4(lVar4,param_2,&UNK_10dd5b8f9,&plStack_58,&uStack_31);
  lVar6 = *(long *)(lVar4 + 0x40);
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x20) != 8)) {
    plVar5 = (long *)0x80;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar8 = plVar5 + 3;
    *plVar5 = (long)&PTR_DAT_110ba1f48;
    FUN_10a0db098(plVar8,param_2,param_3);
    plStack_58 = plVar8;
    plStack_50 = plVar5;
    func_0x00010a0da650((long *)(lVar4 + 0x40),&plStack_58);
    plVar5 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar8 = plStack_50 + 1;
      do {
        lVar4 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  else {
    FUN_10a0dafe0(lVar6,param_3);
  }
  FUN_10a0daab8(&lStack_48);
  return;
}



/* Entry: 10a0d9f14; end: 10a0d9f8f;  */

undefined8 * FUN_10a0d9f14(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  param_1[2] = 0;
  *param_1 = puVar1;
  if (param_3 != 0) {
    param_3 = param_3 << 5;
    do {
      FUN_10a0d9f90(param_1,puVar1,param_2,param_2);
      param_2 = param_2 + 0x20;
      param_3 = param_3 + -0x20;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 10a0d9f90; end: 10a0da00f;  */

undefined1  [16]
FUN_10a0d9f90(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_10a0da010(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_10a047948(alStack_58,param_1,param_4);
    FUN_10a0479ec(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10a0da010; end: 10a0da1b7;  */

long * FUN_10a0da010(undefined8 *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1 + 1;
  if (plVar3 != param_2) {
    uVar4 = *(ulong *)(param_5 + 0x18);
    if ((ulong)param_2[7] <= uVar4) {
      if (uVar4 <= (ulong)param_2[7]) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar6 = (long *)param_2[1];
      plVar7 = param_2;
      plVar5 = plVar6;
      if (plVar6 == (long *)0x0) {
        do {
          plVar2 = (long *)plVar7[2];
          bVar1 = (long *)*plVar2 != plVar7;
          plVar7 = plVar2;
        } while (bVar1);
      }
      else {
        do {
          plVar2 = plVar5;
          plVar5 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
      if ((plVar2 == plVar3) || (uVar4 < (ulong)plVar2[7])) {
        if (plVar6 != (long *)0x0) {
          *param_3 = (long)plVar2;
          return plVar2;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      plVar7 = (long *)*plVar3;
      while (plVar5 = plVar3, plVar7 != (long *)0x0) {
        while (plVar5 = plVar7, (ulong)plVar5[7] <= uVar4) {
          if (uVar4 <= (ulong)plVar5[7]) goto LAB_10a0da1b0;
          plVar3 = plVar5 + 1;
          plVar7 = (long *)*plVar3;
          if ((long *)*plVar3 == (long *)0x0) goto LAB_10a0da1b0;
        }
        plVar3 = plVar5;
        plVar7 = (long *)*plVar5;
      }
LAB_10a0da1b0:
      *param_3 = (long)plVar5;
      return plVar3;
    }
  }
  plVar5 = (long *)*param_2;
  plVar7 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar6 = param_2;
    plVar2 = plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar1 = (long *)*plVar7 == plVar6;
        plVar6 = plVar7;
      } while (bVar1);
    }
    else {
      do {
        plVar7 = plVar2;
        plVar2 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
    }
    uVar4 = *(ulong *)(param_5 + 0x18);
    if (uVar4 <= (ulong)plVar7[7]) {
      plVar7 = (long *)*plVar3;
      while (plVar5 = plVar3, plVar7 != (long *)0x0) {
        while (plVar5 = plVar7, (ulong)plVar5[7] <= uVar4) {
          if (uVar4 <= (ulong)plVar5[7]) goto LAB_10a0da118;
          plVar3 = plVar5 + 1;
          plVar7 = (long *)*plVar3;
          if ((long *)*plVar3 == (long *)0x0) goto LAB_10a0da118;
        }
        plVar3 = plVar5;
        plVar7 = (long *)*plVar5;
      }
LAB_10a0da118:
      *param_3 = (long)plVar5;
      return plVar3;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar7;
    param_2 = plVar7 + 1;
  }
  return param_2;
}



/* Entry: 10a0da1b8; end: 10a0da207;  */

void FUN_10a0da1b8(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a0da1b8(param_1,*param_2);
    FUN_10a0da1b8(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      __ZdlPv(param_2[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a0da208; end: 10a0da28b;  */

long * FUN_10a0da208(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a0da274;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a0da274:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a0da28c; end: 10a0da29f;  */

long * FUN_10a0da28c(undefined8 param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar6 = (long *)&UNK_10f63805b;
  FUN_109ffdddc();
  uVar2 = plVar6[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*plVar6 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a0da2a0; end: 10a0da33f;  */

long * FUN_10a0da2a0(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a0da340; end: 10a0da42f;  */

void FUN_10a0da340(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int *piVar2;
  undefined8 uVar3;
  bool bVar4;
  float *pfVar5;
  double dVar6;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_48;
  
  uStack_48 = param_4;
  if ((*param_1 == 5) && (*(long *)(param_1 + 0x12) - *(long *)(param_1 + 0x10) == 0xf0)) {
    uVar3 = 0;
    pfVar5 = (float *)&uStack_48;
    bVar1 = true;
    do {
      bVar4 = bVar1;
      piVar2 = param_1;
      func_0x00010a0b4fbc(param_1,uVar3);
      dVar6 = (double)piVar2[1];
      if (*piVar2 != 2) {
        dVar6 = *(double *)(piVar2 + 2);
      }
      *pfVar5 = (float)dVar6;
      uVar3 = 1;
      pfVar5 = (float *)((ulong)&uStack_48 | 4);
      bVar1 = false;
    } while (bVar4);
  }
  FUN_10a0d09b4(auStack_68,param_3);
  FUN_10a0da430(param_2,auStack_68,&uStack_48);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  return;
}



/* Entry: 10a0da430; end: 10a0da5cb;  */

void FUN_10a0da430(long param_1,long *param_2,float *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  undefined1 uStack_40;
  undefined1 uStack_31;
  
  lVar3 = *(long *)(param_1 + 0x1b8);
  plVar4 = (long *)(lVar3 + 8);
  plVar7 = (long *)*plVar4;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar4;
    do {
      lVar5 = 8;
      if ((ulong)param_2[3] <= (ulong)plVar7[7]) {
        lVar5 = 0;
        plVar6 = plVar7;
      }
      plVar7 = *(long **)((long)plVar7 + lVar5);
    } while (plVar7 != (long *)0x0);
    if ((((plVar6 != plVar4) && ((ulong)plVar6[7] <= (ulong)param_2[3])) &&
        (lVar5 = plVar6[8], lVar5 != 0)) && (*(short *)(lVar5 + 0x20) == 7)) {
      bVar2 = false;
      if ((*(float *)(lVar5 + 0x24) == *param_3) &&
         (bVar2 = false, !NAN(*(float *)(lVar5 + 0x28)) && !NAN(param_3[1]))) {
        bVar2 = *(float *)(lVar5 + 0x28) == param_3[1];
      }
      if (bVar2) {
        return;
      }
    }
  }
  lStack_48 = param_1 + 0x1b8;
  do {
    lVar5 = lRam0000000113301700;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam0000000113301700 = lRam0000000113301700 + 1;
    }
  } while (cVar1 != '\0');
  *(long *)(param_1 + 0x1c8) = lVar5;
  uStack_40 = 0;
  plStack_58 = param_2;
  FUN_10a0da6b4(lVar3,param_2,&UNK_10dd5b8f9,&plStack_58,&uStack_31);
  lVar5 = *(long *)(lVar3 + 0x40);
  if ((lVar5 == 0) || (*(short *)(lVar5 + 0x20) != 7)) {
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar7 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a0da984(plVar7,param_2,param_3);
    plStack_58 = plVar7;
    plStack_50 = plVar4;
    func_0x00010a0da650((long *)(lVar3 + 0x40),&plStack_58);
    plVar4 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar7 = plStack_50 + 1;
      do {
        lVar3 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    FUN_10a0da5cc(lVar5,param_3);
  }
  FUN_10a0daab8(&lStack_48);
  return;
}



/* Entry: 10a0da5cc; end: 10a0da6b3;  */

float * FUN_10a0da5cc(long param_1,float *param_2)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(short *)(param_1 + 0x20) != 7) {
    pfVar5 = (float *)&UNK_10f6399e9;
    FUN_10a00946c();
    uVar9 = *(undefined8 *)(param_2 + 2);
    uVar8 = *(undefined8 *)param_2;
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    plVar7 = *(long **)(pfVar5 + 2);
    *(undefined8 *)(pfVar5 + 2) = uVar9;
    *(undefined8 *)pfVar5 = uVar8;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    return pfVar5;
  }
  pfVar5 = (float *)(param_1 + 0x24);
  bVar4 = false;
  if ((*pfVar5 == *param_2) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x28)) && !NAN(param_2[1]))
     ) {
    bVar4 = *(float *)(param_1 + 0x28) == param_2[1];
  }
  if (!bVar4) {
    if (0x10 < (ulong)*(byte *)(param_1 + 100)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0da644);
      (*pcVar3)();
    }
    (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(param_1 + 100)])();
    *(undefined1 *)(param_1 + 100) = 0x10;
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 100) = 3;
  }
  return pfVar5;
}



/* Entry: 10a0da6b4; end: 10a0da76b;  */

undefined1  [16]
FUN_10a0da6b4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  long *aplStack_48 [3];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[7] <= *(ulong *)(param_2 + 0x18)) {
        if (*(ulong *)(param_2 + 0x18) <= (ulong)plVar3[7]) {
          uVar2 = 0;
          goto LAB_10a0da754;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_10a0da718;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_10a0da718:
  FUN_10a0da76c(aplStack_48,param_1,param_3,param_4,param_5);
  FUN_10a0da7d4(param_1,plVar3,plVar4,aplStack_48[0]);
  uVar2 = 1;
  plVar3 = aplStack_48[0];
LAB_10a0da754:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 10a0da76c; end: 10a0da7d3;  */

void FUN_10a0da76c(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = 0x50;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010a0da828(lVar1 + 0x20,*param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a0da7d4; end: 10a0da903;  */

void FUN_10a0da7d4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a0da904; end: 10a0da957;  */

void FUN_10a0da904(void)

{
  return;
}



/* Entry: 10a0da958; end: 10a0da977;  */

void FUN_10a0da958(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ba1f48;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0da978; end: 10a0da983;  */

void FUN_10a0da978(long param_1)

{
  code *pcVar1;
  
  if (0x10 < (ulong)*(byte *)(param_1 + 0x7c)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0daa60);
    (*pcVar1)();
  }
  (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(param_1 + 0x7c)])(param_1 + 0x3c);
  if (-1 < *(char *)(param_1 + 0x2f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a0da984; end: 10a0daa07;  */

undefined8 * FUN_10a0da984(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 7;
  *(undefined1 *)((long)param_1 + 100) = 0x10;
  *(undefined8 *)((long)param_1 + 0x24) = *param_3;
  *(undefined1 *)((long)param_1 + 100) = 3;
  return param_1;
}



/* Entry: 10a0daa08; end: 10a0daab7;  */

void FUN_10a0daa08(undefined8 *param_1)

{
  code *pcVar1;
  
  if (0x10 < (ulong)*(byte *)((long)param_1 + 100)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0daa60);
    (*pcVar1)();
  }
  (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)((long)param_1 + 100)])((long)param_1 + 0x24);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a0daab8; end: 10a0daaeb;  */

long FUN_10a0daab8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10a0daaec(param_1);
  }
  return param_1;
}



/* Entry: 10a0daaec; end: 10a0dad0b;  */

void FUN_10a0daaec(long *param_1)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar2 = 0;
    lVar4 = *param_1 - (ulong)uRam00000001132ffd50;
    uVar1 = *(ushort *)(lVar4 + 0x129);
    if ((((uVar1 >> 8 & 1) == 0) &&
        (((*(long *)(lVar4 + 0x100) != 0 || ((uVar1 >> 9 & 1) != 0)) ||
         (*(long *)(lVar4 + 0x120) != 0)))) || ((*(ushort *)(lVar4 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110ba2010;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar4 = *param_1 - (ulong)uRam00000001132ffd50;
        uVar1 = *(ushort *)(lVar4 + 0x70);
        if (((uVar1 & 0x7f) == 0) && ((*(ushort *)(lVar4 + 0x129) & 0x7f) == 0)) {
          if ((uVar1 >> 8 & 1) == 0) {
            uVar2 = lVar4 + 0x40;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar1 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x80) = uStack_a0;
            *(ushort *)(lVar4 + 0x70) = uVar1 | 0x80;
          }
          uVar2 = lVar4 + 0x80;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar4 = *param_1;
        uVar3 = (ulong)uRam00000001132ffd50;
        if ((*(ushort *)((lVar4 - uVar3) + 0x129) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar4 = *param_1;
          uVar3 = (ulong)uRam00000001132ffd50;
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar4 = *param_1;
            uVar3 = (ulong)uRam00000001132ffd50;
          }
        }
        FUN_10a1c054c((lVar4 - uVar3) + 0xd0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar4 + 0x129) >> 8 & 1) == 0) {
        *(long *)(lVar4 + 0xe0) = *(long *)(lVar4 + 0xe0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar4 + 0x130);
      ppuVar5 = *(undefined ***)(lVar4 + 0x78);
      if ((ppuVar6 != &PTR_DAT_110ba2010 || ppuVar5 != &PTR_DAT_110ba2010) &&
         (FUN_10a1bd5e0(), param_1 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110ba2010) {
          FUN_10a1bd648(param_1,lVar4 + 0xd0,&PTR_DAT_110ba2010);
          *(undefined ***)(lVar4 + 0x130) = &PTR_DAT_110ba2010;
        }
        if (ppuVar5 != &PTR_DAT_110ba2010) {
          FUN_10a1bd7d8(param_1,lVar4 + 0x40,&PTR_DAT_110ba2010);
          *(undefined ***)(lVar4 + 0x78) = &PTR_DAT_110ba2010;
        }
      }
    }
  }
  return;
}



/* Entry: 10a0dad0c; end: 10a0dad83;  */

float * FUN_10a0dad0c(float *param_1,undefined8 *param_2)

{
  code *pcVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *(ulong *)(param_1 + 0x10);
  if (uVar7 < 8) {
    *(undefined8 *)(param_1 + uVar7 * 2) = *param_2;
    *(ulong *)(param_1 + 0x10) = uVar7 + 1;
    return param_1;
  }
  pfVar2 = (float *)0x10;
  ___cxa_allocate_exception();
  FUN_109ffdeb4();
  pfVar3 = pfVar2;
  pfVar5 = (float *)PTR___ZTISt12length_error_110352238;
  puVar6 = (undefined8 *)PTR___ZNSt12length_errorD1Ev_110346170;
  ___cxa_throw();
  ___cxa_free_exception(pfVar2);
  __Unwind_Resume();
  if (*(short *)(pfVar3 + 8) != 9) {
    pfVar3 = (float *)&UNK_10f6399e9;
    FUN_10a00946c();
    if (*(short *)(pfVar3 + 8) != 9) {
      pfVar3 = (float *)&UNK_10f6399e9;
      FUN_10a00946c();
      if (*(char *)((long)pfVar5 + 0x17) < '\0') {
        func_0x000107c3192c(pfVar3,*(undefined8 *)pfVar5,*(undefined8 *)(pfVar5 + 2));
      }
      else {
        uVar9 = *(undefined8 *)(pfVar5 + 2);
        uVar8 = *(undefined8 *)pfVar5;
        *(undefined8 *)(pfVar3 + 4) = *(undefined8 *)(pfVar5 + 4);
        *(undefined8 *)(pfVar3 + 2) = uVar9;
        *(undefined8 *)pfVar3 = uVar8;
      }
      *(undefined8 *)(pfVar3 + 6) = *(undefined8 *)(pfVar5 + 6);
      *(undefined2 *)(pfVar3 + 8) = 9;
      *(undefined1 *)(pfVar3 + 0x19) = 0x10;
      uVar8 = *puVar6;
      *(undefined8 *)(pfVar3 + 0xb) = puVar6[1];
      *(undefined8 *)(pfVar3 + 9) = uVar8;
      *(undefined1 *)(pfVar3 + 0x19) = 5;
      return pfVar3;
    }
    pfVar2 = pfVar3 + 9;
    if ((((*pfVar2 != *pfVar5) || (pfVar3[10] != pfVar5[1])) || (pfVar3[0xb] != pfVar5[2])) ||
       (pfVar4 = pfVar3, pfVar3[0xc] != pfVar5[3])) {
      if (0x10 < (ulong)*(byte *)(pfVar3 + 0x19)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0dae64);
        (*pcVar1)();
      }
      pfVar4 = pfVar2;
      (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(pfVar3 + 0x19)])(pfVar2);
      *(undefined1 *)(pfVar3 + 0x19) = 0x10;
      uVar8 = *(undefined8 *)pfVar5;
      *(undefined8 *)(pfVar3 + 0xb) = *(undefined8 *)(pfVar5 + 2);
      *(undefined8 *)pfVar2 = uVar8;
      *(undefined1 *)(pfVar3 + 0x19) = 5;
    }
    return pfVar4;
  }
  return pfVar3;
}



/* Entry: 10a0dad84; end: 10a0dadaf;  */

float * FUN_10a0dad84(float *param_1,float *param_2,undefined8 *param_3)

{
  code *pcVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(short *)(param_1 + 8) == 9) {
    return param_1;
  }
  pfVar2 = (float *)&UNK_10f6399e9;
  FUN_10a00946c();
  if (*(short *)(pfVar2 + 8) == 9) {
    pfVar4 = pfVar2 + 9;
    if ((((*pfVar4 != *param_2) || (pfVar2[10] != param_2[1])) || (pfVar2[0xb] != param_2[2])) ||
       (pfVar3 = pfVar2, pfVar2[0xc] != param_2[3])) {
      if (0x10 < (ulong)*(byte *)(pfVar2 + 0x19)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0dae64);
        (*pcVar1)();
      }
      pfVar3 = pfVar4;
      (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(pfVar2 + 0x19)])(pfVar4);
      *(undefined1 *)(pfVar2 + 0x19) = 0x10;
      uVar5 = *(undefined8 *)param_2;
      *(undefined8 *)(pfVar2 + 0xb) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)pfVar4 = uVar5;
      *(undefined1 *)(pfVar2 + 0x19) = 5;
    }
    return pfVar3;
  }
  pfVar2 = (float *)&UNK_10f6399e9;
  FUN_10a00946c();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(pfVar2,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 2));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 2);
    uVar5 = *(undefined8 *)param_2;
    *(undefined8 *)(pfVar2 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(pfVar2 + 2) = uVar6;
    *(undefined8 *)pfVar2 = uVar5;
  }
  *(undefined8 *)(pfVar2 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined2 *)(pfVar2 + 8) = 9;
  *(undefined1 *)(pfVar2 + 0x19) = 0x10;
  uVar5 = *param_3;
  *(undefined8 *)(pfVar2 + 0xb) = param_3[1];
  *(undefined8 *)(pfVar2 + 9) = uVar5;
  *(undefined1 *)(pfVar2 + 0x19) = 5;
  return pfVar2;
}



/* Entry: 10a0dadb0; end: 10a0dae6f;  */

float * FUN_10a0dadb0(float *param_1,float *param_2,undefined8 *param_3)

{
  code *pcVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(short *)(param_1 + 8) != 9) {
    pfVar3 = (float *)&UNK_10f6399e9;
    FUN_10a00946c();
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(pfVar3,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 2));
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 2);
      uVar4 = *(undefined8 *)param_2;
      *(undefined8 *)(pfVar3 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(pfVar3 + 2) = uVar5;
      *(undefined8 *)pfVar3 = uVar4;
    }
    *(undefined8 *)(pfVar3 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined2 *)(pfVar3 + 8) = 9;
    *(undefined1 *)(pfVar3 + 0x19) = 0x10;
    uVar4 = *param_3;
    *(undefined8 *)(pfVar3 + 0xb) = param_3[1];
    *(undefined8 *)(pfVar3 + 9) = uVar4;
    *(undefined1 *)(pfVar3 + 0x19) = 5;
    return pfVar3;
  }
  pfVar3 = param_1 + 9;
  if ((((*pfVar3 != *param_2) || (param_1[10] != param_2[1])) || (param_1[0xb] != param_2[2])) ||
     (pfVar2 = param_1, param_1[0xc] != param_2[3])) {
    if (0x10 < (ulong)*(byte *)(param_1 + 0x19)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0dae64);
      (*pcVar1)();
    }
    pfVar2 = pfVar3;
    (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(param_1 + 0x19)])(pfVar3);
    *(undefined1 *)(param_1 + 0x19) = 0x10;
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)pfVar3 = uVar4;
    *(undefined1 *)(param_1 + 0x19) = 5;
  }
  return pfVar2;
}



/* Entry: 10a0dae70; end: 10a0daef3;  */

undefined8 * FUN_10a0dae70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 9;
  *(undefined1 *)((long)param_1 + 100) = 0x10;
  uVar1 = *param_3;
  *(undefined8 *)((long)param_1 + 0x2c) = param_3[1];
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined1 *)((long)param_1 + 100) = 5;
  return param_1;
}



/* Entry: 10a0daef4; end: 10a0daf67;  */

float * FUN_10a0daef4(long param_1,float *param_2,float *param_3)

{
  code *pcVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(short *)(param_1 + 0x20) != 3) {
    pfVar2 = (float *)&UNK_10f6399e9;
    FUN_10a00946c();
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(pfVar2,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 2));
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 2);
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)(pfVar2 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(pfVar2 + 2) = uVar4;
      *(undefined8 *)pfVar2 = uVar3;
    }
    *(undefined8 *)(pfVar2 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined2 *)(pfVar2 + 8) = 3;
    pfVar2[9] = *param_3;
    *(undefined1 *)(pfVar2 + 0x19) = 0;
    return pfVar2;
  }
  pfVar2 = (float *)(param_1 + 0x24);
  if (*pfVar2 != *param_2) {
    if (0x10 < (ulong)*(byte *)(param_1 + 100)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0daf5c);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(param_1 + 100)])();
    *(float *)(param_1 + 0x24) = *param_2;
    *(undefined1 *)(param_1 + 100) = 0;
  }
  return pfVar2;
}



/* Entry: 10a0daf68; end: 10a0dafdf;  */

undefined8 * FUN_10a0daf68(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 3;
  *(undefined4 *)((long)param_1 + 0x24) = *param_3;
  *(undefined1 *)((long)param_1 + 100) = 0;
  return param_1;
}



/* Entry: 10a0dafe0; end: 10a0db097;  */

float * FUN_10a0dafe0(float *param_1,float *param_2,undefined8 *param_3)

{
  code *pcVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(short *)(param_1 + 8) != 8) {
    pfVar3 = (float *)&UNK_10f6399e9;
    FUN_10a00946c();
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(pfVar3,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 2));
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 2);
      uVar4 = *(undefined8 *)param_2;
      *(undefined8 *)(pfVar3 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(pfVar3 + 2) = uVar5;
      *(undefined8 *)pfVar3 = uVar4;
    }
    *(undefined8 *)(pfVar3 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined2 *)(pfVar3 + 8) = 8;
    *(undefined1 *)(pfVar3 + 0x19) = 0x10;
    uVar4 = *param_3;
    pfVar3[0xb] = *(float *)(param_3 + 1);
    *(undefined8 *)(pfVar3 + 9) = uVar4;
    *(undefined1 *)(pfVar3 + 0x19) = 4;
    return pfVar3;
  }
  pfVar3 = param_1 + 9;
  if (((*pfVar3 != *param_2) || (param_1[10] != param_2[1])) ||
     (pfVar2 = param_1, param_1[0xb] != param_2[2])) {
    if (0x10 < (ulong)*(byte *)(param_1 + 0x19)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0db08c);
      (*pcVar1)();
    }
    pfVar2 = pfVar3;
    (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(param_1 + 0x19)])(pfVar3);
    *(undefined1 *)(param_1 + 0x19) = 0x10;
    uVar4 = *(undefined8 *)param_2;
    param_1[0xb] = param_2[2];
    *(undefined8 *)pfVar3 = uVar4;
    *(undefined1 *)(param_1 + 0x19) = 4;
  }
  return pfVar2;
}



/* Entry: 10a0db098; end: 10a0db123;  */

undefined8 * FUN_10a0db098(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 8;
  *(undefined1 *)((long)param_1 + 100) = 0x10;
  uVar1 = *param_3;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined1 *)((long)param_1 + 100) = 4;
  return param_1;
}



/* Entry: 10a0db124; end: 10a0db293;  */

void FUN_10a0db124(int *param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined8 ***pppuVar6;
  undefined8 *puVar7;
  undefined8 ***pppuVar8;
  undefined8 **ppuVar9;
  undefined4 uVar10;
  undefined1 **ppuVar11;
  ulong uVar12;
  double dVar13;
  undefined1 *puStack_270;
  ulong uStack_268;
  byte bStack_259;
  undefined8 **ppuStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 **ppuStack_240;
  undefined5 uStack_238;
  undefined2 uStack_233;
  undefined1 uStack_231;
  undefined5 uStack_230;
  undefined1 uStack_22b;
  undefined1 uStack_22a;
  byte bStack_229;
  undefined8 uStack_228;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1e8;
  undefined8 auStack_1e0 [2];
  int aiStack_1d0 [22];
  undefined1 auStack_178 [32];
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  long lStack_148;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  float fStack_bc;
  int iStack_b8;
  int iStack_b4;
  double dStack_b0;
  
  ppuVar5 = &puStack_e0;
  ppuVar11 = &puStack_e0;
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      uStack_d0 = (long *)CONCAT17((char)param_4,(undefined7)uStack_d0);
      if (param_4 == 0) goto LAB_10a0db1a8;
    }
    else {
      puVar1 = (undefined1 *)0x19;
      if ((param_4 | 7) != 0x17) {
        puVar1 = (undefined1 *)((param_4 | 7) + 1);
      }
      ppuVar5 = (undefined1 **)puVar1;
      __Znwm();
      uStack_d0 = (long *)((ulong)puVar1 | 0x8000000000000000);
      puStack_e0 = (undefined1 *)ppuVar5;
      uStack_d8 = param_4;
    }
    _memmove(ppuVar5,param_3,param_4);
    ppuVar11 = ppuVar5;
LAB_10a0db1a8:
    *(undefined1 *)((long)ppuVar11 + param_4) = 0;
    func_0x00010a0b4efc(param_1,&puStack_e0);
    FUN_10a0c9578(&iStack_b8,param_1);
    if ((long)uStack_d0 < 0) {
      __ZdlPv(puStack_e0);
    }
    fStack_bc = 0.0;
    if (iStack_b8 - 1U < 2) {
      dVar13 = (double)iStack_b4;
      if (iStack_b8 != 2) {
        dVar13 = dStack_b0;
      }
      fStack_bc = (float)dVar13;
    }
    FUN_10a0db864(&puStack_e0,param_3,param_4);
    FUN_10a0d9bd4(param_2,&puStack_e0,&fStack_bc);
    if ((long)uStack_d0 < 0) {
      __ZdlPv(puStack_e0);
    }
    func_0x00010a0c9b7c(&iStack_b8);
    return;
  }
  func_0x000109ffde50();
  if ((long)uStack_d0 < 0) {
    __ZdlPv(puStack_e0);
  }
  func_0x00010a0c9b7c(&iStack_b8);
  __Unwind_Resume(param_1);
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0x7ffffffffffffff7 < param_5) {
    func_0x000109ffde50();
    goto LAB_10a0db760;
  }
  bVar3 = (byte)param_5;
  if (param_5 < 0x17) {
    pppuVar6 = &ppuStack_240;
    bStack_229 = bVar3;
    if (param_5 != 0) goto LAB_10a0db32c;
  }
  else {
    pppuVar8 = (undefined8 ***)0x19;
    if ((param_5 | 7) != 0x17) {
      pppuVar8 = (undefined8 ***)((param_5 | 7) + 1);
    }
    pppuVar6 = pppuVar8;
    __Znwm();
    bStack_229 = (byte)((ulong)pppuVar8 >> 0x38) | 0x80;
    uStack_238 = (undefined5)param_5;
    uStack_233 = (undefined2)(param_5 >> 0x28);
    uStack_231 = (undefined1)(param_5 >> 0x38);
    uStack_230 = SUB85(pppuVar8,0);
    uStack_22b = (undefined1)((ulong)pppuVar8 >> 0x28);
    uStack_22a = (undefined1)((ulong)pppuVar8 >> 0x30);
    ppuStack_240 = pppuVar6;
LAB_10a0db32c:
    _memmove(pppuVar6,param_4,param_5);
  }
  *(undefined1 *)((long)pppuVar6 + param_5) = 0;
  func_0x00010a0b4efc(param_2,&ppuStack_240);
  FUN_10a0c9578(aiStack_1d0,param_2);
  if ((char)bStack_229 < '\0') {
    __ZdlPv(ppuStack_240);
  }
  if (aiStack_1d0[0] == 7) {
    FUN_10a0c9838(&uStack_1e8,auStack_178);
    func_0x000107c2b054(&ppuStack_240,&DAT_10f2c4679);
    puVar7 = &uStack_1e8;
    FUN_10a0cd368(puVar7,&ppuStack_240);
    if ((char)bStack_229 < '\0') {
      __ZdlPv(ppuStack_240);
    }
    if ((auStack_1e0 != puVar7) && (*(int *)(puVar7 + 7) == 2)) {
      uVar12 = (ulong)*(int *)((long)puVar7 + 0x3c);
      FUN_10a0db864(&puStack_210,param_4,param_5);
      lVar2 = *uStack_d0;
      if ((ulong)(uStack_d0[1] - lVar2 >> 4) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0db75c);
        (*pcVar4)();
      }
      FUN_10a0d94a0(&ppuStack_240,param_1,uVar12);
      FUN_10a3368d0(param_3,&puStack_210,lVar2 + uVar12 * 0x10,&ppuStack_240,0xd);
      if (uStack_200._7_1_ < '\0') {
        __ZdlPv(puStack_210);
      }
      FUN_10a0db864(&ppuStack_240,param_6,param_7);
      FUN_10a047898(param_3 + 0x200,&ppuStack_240,&ppuStack_240);
      if ((char)bStack_229 < '\0') {
        __ZdlPv(ppuStack_240);
      }
      func_0x000107c2b054(&ppuStack_240,&UNK_10f41520a);
      puVar7 = &uStack_1e8;
      FUN_10a0cd368(puVar7,&ppuStack_240);
      if ((char)bStack_229 < '\0') {
        __ZdlPv(ppuStack_240);
      }
      if ((auStack_1e0 == puVar7) || (*(int *)(puVar7 + 7) != 2)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)((long)puVar7 + 0x3c);
      }
      if (param_5 < 0x17) {
        uStack_248 = CONCAT17(bVar3,(undefined7)uStack_248);
        pppuVar6 = &ppuStack_258;
        if (param_5 != 0) goto LAB_10a0db4f0;
      }
      else {
        pppuVar8 = (undefined8 ***)0x19;
        if ((param_5 | 7) != 0x17) {
          pppuVar8 = (undefined8 ***)((param_5 | 7) + 1);
        }
        pppuVar6 = pppuVar8;
        __Znwm();
        uStack_248 = (ulong)pppuVar8 | 0x8000000000000000;
        ppuStack_258 = pppuVar6;
        uStack_250 = param_5;
LAB_10a0db4f0:
        _memmove(pppuVar6,param_4,param_5);
      }
      *(undefined1 *)((long)pppuVar6 + param_5) = 0;
      pppuVar8 = &ppuStack_258;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar8,&UNK_10f639b11,3);
      puStack_208 = pppuVar8[1];
      puStack_210 = *pppuVar8;
      uStack_200 = pppuVar8[2];
      pppuVar8[1] = (undefined8 **)0x0;
      pppuVar8[2] = (undefined8 **)0x0;
      *pppuVar8 = (undefined8 **)0x0;
      __ZNSt3__19to_stringEi(&puStack_270,uVar10);
      ppuVar5 = (undefined1 **)puStack_270;
      if (-1 < (char)bStack_259) {
        uStack_268 = (ulong)bStack_259;
        ppuVar5 = &puStack_270;
      }
      ppuVar9 = &puStack_210;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar9,ppuVar5,uStack_268);
      ppuStack_240 = (undefined8 **)*ppuVar9;
      uStack_158 = SUB87(ppuVar9[1],0);
      uStack_151 = (undefined1)*(undefined8 *)((long)ppuVar9 + 0xf);
      uStack_150 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar9 + 0xf) >> 8);
      bStack_229 = *(byte *)((long)ppuVar9 + 0x17);
      ppuVar9[1] = (undefined8 *)0x0;
      ppuVar9[2] = (undefined8 *)0x0;
      *ppuVar9 = (undefined8 *)0x0;
      uStack_230 = (undefined5)uStack_150;
      uStack_22b = (undefined1)((uint7)uStack_150 >> 0x28);
      uStack_22a = (undefined1)((uint7)uStack_150 >> 0x30);
      uStack_238 = (undefined5)uStack_158;
      uStack_233 = (undefined2)((uint7)uStack_158 >> 0x28);
      uStack_231 = uStack_151;
      uStack_228 = 0;
      func_0x000107c2b080(&ppuStack_240);
      FUN_10a047898(param_3 + 0x200,&ppuStack_240,&ppuStack_240);
      if ((char)bStack_229 < '\0') {
        __ZdlPv(ppuStack_240);
      }
      if ((char)bStack_259 < '\0') {
        __ZdlPv(puStack_270);
      }
      if ((long)uStack_200 < 0) {
        __ZdlPv(puStack_210);
      }
      if ((long)uStack_248 < 0) {
        __ZdlPv(ppuStack_258);
      }
      func_0x000107c2b054(&ppuStack_240,&DAT_10f6372be);
      puVar7 = &uStack_1e8;
      FUN_10a0cd368(puVar7,&ppuStack_240);
      if ((char)bStack_229 < '\0') {
        __ZdlPv(ppuStack_240);
      }
      if ((auStack_1e0 != puVar7) && (*(int *)(puVar7 + 7) == 7)) {
        FUN_10a0c9838(&puStack_210,puVar7 + 0x12);
        bStack_229 = 0x15;
        uStack_238 = 0x745f657275;
        ppuStack_240 = (undefined8 ***)0x747865745f52484b;
        uStack_233 = 0x6172;
        uStack_231 = 0x6e;
        uStack_230 = 0x6d726f6673;
        uStack_22b = 0;
        ppuVar9 = &puStack_210;
        FUN_10a0cd368(ppuVar9,&ppuStack_240);
        if ((char)bStack_229 < '\0') {
          __ZdlPv(ppuStack_240);
        }
        if (&puStack_208 != ppuVar9) {
          FUN_10a0d95f4(ppuVar9 + 7,param_3,param_4,param_5);
          FUN_10a0db864(&ppuStack_240,puStack_e0,uStack_d8);
          FUN_10a047898(param_3 + 0x200,&ppuStack_240,&ppuStack_240);
          if ((char)bStack_229 < '\0') {
            __ZdlPv(ppuStack_240);
          }
          FUN_10a0db864(&ppuStack_240,&UNK_10f6399b7,0x18);
          FUN_10a047898(param_3 + 0x200,&ppuStack_240,&ppuStack_240);
          if ((char)bStack_229 < '\0') {
            __ZdlPv(ppuStack_240);
          }
        }
        func_0x00010a0c9b2c(puStack_208);
      }
    }
    func_0x00010a0c9b2c(auStack_1e0[0]);
  }
  param_1 = aiStack_1d0;
  func_0x00010a0c9b7c(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
LAB_10a0db760:
  ___stack_chk_fail();
  if ((char)bStack_229 < '\0') {
    __ZdlPv(ppuStack_240);
  }
  func_0x00010a0c9b2c(puStack_208);
  func_0x00010a0c9b2c(auStack_1e0[0]);
  do {
    func_0x00010a0c9b7c(aiStack_1d0);
    __Unwind_Resume(param_1);
  } while( true );
}



/* Entry: 10a0db294; end: 10a0db863;  */

void FUN_10a0db294(int *param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,long *param_11)

{
  long lVar1;
  byte bVar2;
  undefined1 **ppuVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  undefined8 *puVar6;
  undefined8 ***pppuVar7;
  undefined8 **ppuVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined1 *puStack_190;
  ulong uStack_188;
  byte bStack_179;
  undefined8 **ppuStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined5 uStack_158;
  undefined2 uStack_153;
  undefined1 uStack_151;
  undefined5 uStack_150;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  byte bStack_149;
  undefined8 uStack_148;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_108;
  undefined8 auStack_100 [2];
  int aiStack_f0 [22];
  undefined1 auStack_98 [32];
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0x7ffffffffffffff7 < param_5) {
    func_0x000109ffde50();
    goto LAB_10a0db760;
  }
  bVar2 = (byte)param_5;
  if (param_5 < 0x17) {
    pppuVar5 = &ppuStack_160;
    bStack_149 = bVar2;
    if (param_5 != 0) goto LAB_10a0db32c;
  }
  else {
    pppuVar7 = (undefined8 ***)0x19;
    if ((param_5 | 7) != 0x17) {
      pppuVar7 = (undefined8 ***)((param_5 | 7) + 1);
    }
    pppuVar5 = pppuVar7;
    __Znwm();
    bStack_149 = (byte)((ulong)pppuVar7 >> 0x38) | 0x80;
    uStack_158 = (undefined5)param_5;
    uStack_153 = (undefined2)(param_5 >> 0x28);
    uStack_151 = (undefined1)(param_5 >> 0x38);
    uStack_150 = SUB85(pppuVar7,0);
    uStack_14b = (undefined1)((ulong)pppuVar7 >> 0x28);
    uStack_14a = (undefined1)((ulong)pppuVar7 >> 0x30);
    ppuStack_160 = pppuVar5;
LAB_10a0db32c:
    _memmove(pppuVar5,param_4,param_5);
  }
  *(undefined1 *)((long)pppuVar5 + param_5) = 0;
  func_0x00010a0b4efc(param_2,&ppuStack_160);
  FUN_10a0c9578(aiStack_f0,param_2);
  if ((char)bStack_149 < '\0') {
    __ZdlPv(ppuStack_160);
  }
  if (aiStack_f0[0] == 7) {
    FUN_10a0c9838(&uStack_108,auStack_98);
    func_0x000107c2b054(&ppuStack_160,&DAT_10f2c4679);
    puVar6 = &uStack_108;
    FUN_10a0cd368(puVar6,&ppuStack_160);
    if ((char)bStack_149 < '\0') {
      __ZdlPv(ppuStack_160);
    }
    if ((auStack_100 != puVar6) && (*(int *)(puVar6 + 7) == 2)) {
      uVar10 = (ulong)*(int *)((long)puVar6 + 0x3c);
      FUN_10a0db864(&puStack_130,param_4,param_5);
      lVar1 = *param_11;
      if ((ulong)(param_11[1] - lVar1 >> 4) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0db75c);
        (*pcVar4)();
      }
      FUN_10a0d94a0(&ppuStack_160,param_1,uVar10);
      FUN_10a3368d0(param_3,&puStack_130,lVar1 + uVar10 * 0x10,&ppuStack_160,0xd);
      if (uStack_120._7_1_ < '\0') {
        __ZdlPv(puStack_130);
      }
      FUN_10a0db864(&ppuStack_160,param_6,param_7);
      FUN_10a047898(param_3 + 0x200,&ppuStack_160,&ppuStack_160);
      if ((char)bStack_149 < '\0') {
        __ZdlPv(ppuStack_160);
      }
      func_0x000107c2b054(&ppuStack_160,&UNK_10f41520a);
      puVar6 = &uStack_108;
      FUN_10a0cd368(puVar6,&ppuStack_160);
      if ((char)bStack_149 < '\0') {
        __ZdlPv(ppuStack_160);
      }
      if ((auStack_100 == puVar6) || (*(int *)(puVar6 + 7) != 2)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)((long)puVar6 + 0x3c);
      }
      if (param_5 < 0x17) {
        uStack_168 = CONCAT17(bVar2,(undefined7)uStack_168);
        pppuVar5 = &ppuStack_178;
        if (param_5 != 0) goto LAB_10a0db4f0;
      }
      else {
        pppuVar7 = (undefined8 ***)0x19;
        if ((param_5 | 7) != 0x17) {
          pppuVar7 = (undefined8 ***)((param_5 | 7) + 1);
        }
        pppuVar5 = pppuVar7;
        __Znwm();
        uStack_168 = (ulong)pppuVar7 | 0x8000000000000000;
        ppuStack_178 = pppuVar5;
        uStack_170 = param_5;
LAB_10a0db4f0:
        _memmove(pppuVar5,param_4,param_5);
      }
      *(undefined1 *)((long)pppuVar5 + param_5) = 0;
      pppuVar7 = &ppuStack_178;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar7,&UNK_10f639b11,3);
      puStack_128 = pppuVar7[1];
      puStack_130 = *pppuVar7;
      uStack_120 = pppuVar7[2];
      pppuVar7[1] = (undefined8 **)0x0;
      pppuVar7[2] = (undefined8 **)0x0;
      *pppuVar7 = (undefined8 **)0x0;
      __ZNSt3__19to_stringEi(&puStack_190,uVar9);
      ppuVar3 = (undefined1 **)puStack_190;
      if (-1 < (char)bStack_179) {
        uStack_188 = (ulong)bStack_179;
        ppuVar3 = &puStack_190;
      }
      ppuVar8 = &puStack_130;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar8,ppuVar3,uStack_188);
      ppuStack_160 = (undefined8 **)*ppuVar8;
      uStack_78 = SUB87(ppuVar8[1],0);
      uStack_71 = (undefined1)*(undefined8 *)((long)ppuVar8 + 0xf);
      uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar8 + 0xf) >> 8);
      bStack_149 = *(byte *)((long)ppuVar8 + 0x17);
      ppuVar8[1] = (undefined8 *)0x0;
      ppuVar8[2] = (undefined8 *)0x0;
      *ppuVar8 = (undefined8 *)0x0;
      uStack_150 = (undefined5)uStack_70;
      uStack_14b = (undefined1)((uint7)uStack_70 >> 0x28);
      uStack_14a = (undefined1)((uint7)uStack_70 >> 0x30);
      uStack_158 = (undefined5)uStack_78;
      uStack_153 = (undefined2)((uint7)uStack_78 >> 0x28);
      uStack_151 = uStack_71;
      uStack_148 = 0;
      func_0x000107c2b080(&ppuStack_160);
      FUN_10a047898(param_3 + 0x200,&ppuStack_160,&ppuStack_160);
      if ((char)bStack_149 < '\0') {
        __ZdlPv(ppuStack_160);
      }
      if ((char)bStack_179 < '\0') {
        __ZdlPv(puStack_190);
      }
      if ((long)uStack_120 < 0) {
        __ZdlPv(puStack_130);
      }
      if ((long)uStack_168 < 0) {
        __ZdlPv(ppuStack_178);
      }
      func_0x000107c2b054(&ppuStack_160,&DAT_10f6372be);
      puVar6 = &uStack_108;
      FUN_10a0cd368(puVar6,&ppuStack_160);
      if ((char)bStack_149 < '\0') {
        __ZdlPv(ppuStack_160);
      }
      if ((auStack_100 != puVar6) && (*(int *)(puVar6 + 7) == 7)) {
        FUN_10a0c9838(&puStack_130,puVar6 + 0x12);
        bStack_149 = 0x15;
        uStack_158 = 0x745f657275;
        ppuStack_160 = (undefined8 ***)0x747865745f52484b;
        uStack_153 = 0x6172;
        uStack_151 = 0x6e;
        uStack_150 = 0x6d726f6673;
        uStack_14b = 0;
        ppuVar8 = &puStack_130;
        FUN_10a0cd368(ppuVar8,&ppuStack_160);
        if ((char)bStack_149 < '\0') {
          __ZdlPv(ppuStack_160);
        }
        if (&puStack_128 != ppuVar8) {
          FUN_10a0d95f4(ppuVar8 + 7,param_3,param_4,param_5);
          FUN_10a0db864(&ppuStack_160,param_9,param_10);
          FUN_10a047898(param_3 + 0x200,&ppuStack_160,&ppuStack_160);
          if ((char)bStack_149 < '\0') {
            __ZdlPv(ppuStack_160);
          }
          FUN_10a0db864(&ppuStack_160,&UNK_10f6399b7,0x18);
          FUN_10a047898(param_3 + 0x200,&ppuStack_160,&ppuStack_160);
          if ((char)bStack_149 < '\0') {
            __ZdlPv(ppuStack_160);
          }
        }
        func_0x00010a0c9b2c(puStack_128);
      }
    }
    func_0x00010a0c9b2c(auStack_100[0]);
  }
  param_1 = aiStack_f0;
  func_0x00010a0c9b7c(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_10a0db760:
  ___stack_chk_fail();
  if ((char)bStack_149 < '\0') {
    __ZdlPv(ppuStack_160);
  }
  func_0x00010a0c9b2c(puStack_128);
  func_0x00010a0c9b2c(auStack_100[0]);
  do {
    func_0x00010a0c9b7c(aiStack_f0);
    __Unwind_Resume(param_1);
  } while( true );
}



/* Entry: 10a0db864; end: 10a0db927;  */

ulong * FUN_10a0db864(ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0db924);
    (*pcVar2)();
  }
  if (param_3 < 0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    pppuVar3 = &ppuStack_58;
    if (param_3 == 0) goto LAB_10a0db8e4;
  }
  else {
    pppuVar1 = (undefined8 ***)0x19;
    if ((param_3 | 7) != 0x17) {
      pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
    }
    pppuVar3 = pppuVar1;
    __Znwm();
    uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
    ppuStack_58 = pppuVar3;
    uStack_50 = param_3;
  }
  _memmove(pppuVar3,param_2,param_3);
LAB_10a0db8e4:
  *(undefined1 *)((long)pppuVar3 + param_3) = 0;
  param_1[1] = uStack_50;
  *param_1 = (ulong)ppuStack_58;
  param_1[2] = uStack_48;
  param_1[3] = 0;
  func_0x000107c2b080(param_1);
  return param_1;
}



/* Entry: 10a0db928; end: 10a0dba7f;  */

void FUN_10a0db928(undefined8 *param_1,ulong param_2,ulong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 **ppuVar1;
  undefined1 *puVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 auStack_130 [9];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 **ppuStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_3;
  uStack_88 = param_2;
  if (param_2 == 0) {
    uStack_a0 = 0;
    FUN_10a015a04(&uStack_80,&uStack_a0);
    param_1[1] = ppuStack_78;
    *param_1 = uStack_80;
    if (ppuStack_78 != (undefined8 **)0x0) {
      ppuVar9 = ppuStack_78 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar7) {
          *ppuVar9 = (undefined8 *)((long)*ppuVar9 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    FUN_10a044790(auStack_70);
    ppuVar9 = apuStack_68;
    (*(code *)*apuStack_68[0])();
    if (ppuStack_78 == (undefined8 **)0x0) goto LAB_10a0dba38;
    ppuVar1 = ppuStack_78 + 1;
    do {
      puVar15 = *ppuVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar7) {
        *ppuVar1 = (undefined8 *)((long)puVar15 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
      ppuVar10 = ppuStack_78;
    } while (cVar6 != '\0');
  }
  else {
    puStack_98 = *(undefined8 **)(param_2 + 0x858);
    ppuStack_90 = *(undefined8 ***)(param_2 + 0x860);
    if (ppuStack_90 != (undefined8 **)0x0) {
      ppuVar9 = ppuStack_90 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar7) {
          *ppuVar9 = (undefined8 *)((long)*ppuVar9 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    ppuVar9 = &puStack_98;
    param_3 = &uStack_88;
    FUN_10a0dbd2c(param_1);
    if (ppuStack_90 == (undefined8 **)0x0) goto LAB_10a0dba38;
    ppuVar1 = ppuStack_90 + 1;
    do {
      puVar15 = *ppuVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar7) {
        *ppuVar1 = (undefined8 *)((long)puVar15 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
      ppuVar10 = ppuStack_90;
    } while (cVar6 != '\0');
  }
  if (puVar15 == (undefined8 *)0x0) {
    (*(code *)(*ppuVar10)[2])(ppuVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar9 = ppuVar10;
  }
LAB_10a0dba38:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    __Unwind_Resume();
    uStack_b0 = param_5;
    uStack_a8 = param_6;
    uStack_b4 = param_7;
    if (*puVar11 != 0) {
      uVar14 = 0;
      do {
        uVar17 = puVar11[1];
        lVar16 = puVar11[3] + puVar11[2] * uVar14;
        uVar3 = uVar17 & 0xfffffffffffffff0;
        if (uVar3 != 0) {
          uVar18 = 0;
          do {
            lVar12 = 0;
            puVar2 = (undefined1 *)(lVar16 + uVar18 * 3);
            uStack_e8 = CONCAT17(puVar2[0x2d],
                                 CONCAT16(puVar2[0x2a],
                                          CONCAT15(puVar2[0x27],
                                                   CONCAT14(puVar2[0x24],
                                                            CONCAT13(puVar2[0x21],
                                                                     CONCAT12(puVar2[0x1e],
                                                                              CONCAT11(puVar2[0x1b],
                                                                                       puVar2[0x18])
                                                                             ))))));
            auStack_130[8] =
                 CONCAT17(puVar2[0x15],
                          CONCAT16(puVar2[0x12],
                                   CONCAT15(puVar2[0xf],
                                            CONCAT14(puVar2[0xc],
                                                     CONCAT13(puVar2[9],
                                                              CONCAT12(puVar2[6],
                                                                       CONCAT11(puVar2[3],*puVar2)))
                                                    ))));
            uStack_d8 = CONCAT17(puVar2[0x2e],
                                 CONCAT16(puVar2[0x2b],
                                          CONCAT15(puVar2[0x28],
                                                   CONCAT14(puVar2[0x25],
                                                            CONCAT13(puVar2[0x22],
                                                                     CONCAT12(puVar2[0x1f],
                                                                              CONCAT11(puVar2[0x1c],
                                                                                       puVar2[0x19])
                                                                             ))))));
            uStack_e0 = CONCAT17(puVar2[0x16],
                                 CONCAT16(puVar2[0x13],
                                          CONCAT15(puVar2[0x10],
                                                   CONCAT14(puVar2[0xd],
                                                            CONCAT13(puVar2[10],
                                                                     CONCAT12(puVar2[7],
                                                                              CONCAT11(puVar2[4],
                                                                                       puVar2[1]))))
                                                  )));
            uStack_c8 = CONCAT17(puVar2[0x2f],
                                 CONCAT16(puVar2[0x2c],
                                          CONCAT15(puVar2[0x29],
                                                   CONCAT14(puVar2[0x26],
                                                            CONCAT13(puVar2[0x23],
                                                                     CONCAT12(puVar2[0x20],
                                                                              CONCAT11(puVar2[0x1d],
                                                                                       puVar2[0x1a])
                                                                             ))))));
            uStack_d0 = CONCAT17(puVar2[0x17],
                                 CONCAT16(puVar2[0x14],
                                          CONCAT15(puVar2[0x11],
                                                   CONCAT14(puVar2[0xe],
                                                            CONCAT13(puVar2[0xb],
                                                                     CONCAT12(puVar2[8],
                                                                              CONCAT11(puVar2[5],
                                                                                       puVar2[2]))))
                                                  )));
            do {
              iVar5 = *(int *)((long)&uStack_b0 + lVar12 * 4);
              if (iVar5 == 3) {
                uVar8 = *(undefined1 *)((long)&uStack_b4 + lVar12);
                uVar19 = CONCAT17(uVar8,CONCAT16(uVar8,CONCAT15(uVar8,CONCAT14(uVar8,CONCAT13(uVar8,
                                                  CONCAT12(uVar8,CONCAT11(uVar8,uVar8)))))));
                uVar20 = CONCAT17(uVar8,CONCAT16(uVar8,CONCAT15(uVar8,CONCAT14(uVar8,CONCAT13(uVar8,
                                                  CONCAT12(uVar8,CONCAT11(uVar8,uVar8)))))));
              }
              else {
                uVar20 = auStack_130[(long)iVar5 * 2 + 9];
                uVar19 = auStack_130[(long)iVar5 * 2 + 8];
              }
              auStack_130[lVar12 * 2 + 1] = uVar20;
              auStack_130[lVar12 * 2] = uVar19;
              lVar12 = lVar12 + 1;
            } while (lVar12 != 4);
            puVar2 = (undefined1 *)((long)param_3 + uVar18 * 4 + uVar14 * (long)ppuVar9);
            *puVar2 = (char)auStack_130[0];
            puVar2[1] = (char)auStack_130[2];
            puVar2[2] = (char)auStack_130[4];
            puVar2[3] = (char)auStack_130[6];
            puVar2[4] = (char)((ulong)auStack_130[0] >> 8);
            puVar2[5] = (char)((ulong)auStack_130[2] >> 8);
            puVar2[6] = (char)((ulong)auStack_130[4] >> 8);
            puVar2[7] = (char)((ulong)auStack_130[6] >> 8);
            puVar2[8] = (char)((ulong)auStack_130[0] >> 0x10);
            puVar2[9] = (char)((ulong)auStack_130[2] >> 0x10);
            puVar2[10] = (char)((ulong)auStack_130[4] >> 0x10);
            puVar2[0xb] = (char)((ulong)auStack_130[6] >> 0x10);
            puVar2[0xc] = (char)((ulong)auStack_130[0] >> 0x18);
            puVar2[0xd] = (char)((ulong)auStack_130[2] >> 0x18);
            puVar2[0xe] = (char)((ulong)auStack_130[4] >> 0x18);
            puVar2[0xf] = (char)((ulong)auStack_130[6] >> 0x18);
            puVar2[0x10] = (char)((ulong)auStack_130[0] >> 0x20);
            puVar2[0x11] = (char)((ulong)auStack_130[2] >> 0x20);
            puVar2[0x12] = (char)((ulong)auStack_130[4] >> 0x20);
            puVar2[0x13] = (char)((ulong)auStack_130[6] >> 0x20);
            puVar2[0x14] = (char)((ulong)auStack_130[0] >> 0x28);
            puVar2[0x15] = (char)((ulong)auStack_130[2] >> 0x28);
            puVar2[0x16] = (char)((ulong)auStack_130[4] >> 0x28);
            puVar2[0x17] = (char)((ulong)auStack_130[6] >> 0x28);
            puVar2[0x18] = (char)((ulong)auStack_130[0] >> 0x30);
            puVar2[0x19] = (char)((ulong)auStack_130[2] >> 0x30);
            puVar2[0x1a] = (char)((ulong)auStack_130[4] >> 0x30);
            puVar2[0x1b] = (char)((ulong)auStack_130[6] >> 0x30);
            puVar2[0x1c] = (char)((ulong)auStack_130[0] >> 0x38);
            puVar2[0x1d] = (char)((ulong)auStack_130[2] >> 0x38);
            puVar2[0x1e] = (char)((ulong)auStack_130[4] >> 0x38);
            puVar2[0x1f] = (char)((ulong)auStack_130[6] >> 0x38);
            puVar2[0x20] = (char)auStack_130[1];
            puVar2[0x21] = (char)auStack_130[3];
            puVar2[0x22] = (char)auStack_130[5];
            puVar2[0x23] = (char)auStack_130[7];
            puVar2[0x24] = (char)((ulong)auStack_130[1] >> 8);
            puVar2[0x25] = (char)((ulong)auStack_130[3] >> 8);
            puVar2[0x26] = (char)((ulong)auStack_130[5] >> 8);
            puVar2[0x27] = (char)((ulong)auStack_130[7] >> 8);
            puVar2[0x28] = (char)((ulong)auStack_130[1] >> 0x10);
            puVar2[0x29] = (char)((ulong)auStack_130[3] >> 0x10);
            puVar2[0x2a] = (char)((ulong)auStack_130[5] >> 0x10);
            puVar2[0x2b] = (char)((ulong)auStack_130[7] >> 0x10);
            puVar2[0x2c] = (char)((ulong)auStack_130[1] >> 0x18);
            puVar2[0x2d] = (char)((ulong)auStack_130[3] >> 0x18);
            puVar2[0x2e] = (char)((ulong)auStack_130[5] >> 0x18);
            puVar2[0x2f] = (char)((ulong)auStack_130[7] >> 0x18);
            puVar2[0x30] = (char)((ulong)auStack_130[1] >> 0x20);
            puVar2[0x31] = (char)((ulong)auStack_130[3] >> 0x20);
            puVar2[0x32] = (char)((ulong)auStack_130[5] >> 0x20);
            puVar2[0x33] = (char)((ulong)auStack_130[7] >> 0x20);
            puVar2[0x34] = (char)((ulong)auStack_130[1] >> 0x28);
            puVar2[0x35] = (char)((ulong)auStack_130[3] >> 0x28);
            puVar2[0x36] = (char)((ulong)auStack_130[5] >> 0x28);
            puVar2[0x37] = (char)((ulong)auStack_130[7] >> 0x28);
            puVar2[0x38] = (char)((ulong)auStack_130[1] >> 0x30);
            puVar2[0x39] = (char)((ulong)auStack_130[3] >> 0x30);
            puVar2[0x3a] = (char)((ulong)auStack_130[5] >> 0x30);
            puVar2[0x3b] = (char)((ulong)auStack_130[7] >> 0x30);
            puVar2[0x3c] = (char)((ulong)auStack_130[1] >> 0x38);
            puVar2[0x3d] = (char)((ulong)auStack_130[3] >> 0x38);
            puVar2[0x3e] = (char)((ulong)auStack_130[5] >> 0x38);
            puVar2[0x3f] = (char)((ulong)auStack_130[7] >> 0x38);
            uVar18 = uVar18 + 0x10;
          } while (uVar18 < uVar3);
        }
        uVar17 = uVar17 & 0xf;
        if (uVar17 != 0) {
          uVar18 = 0;
          lVar12 = (long)param_3 + uVar3 * 4 + uVar14 * (long)ppuVar9;
          do {
            lVar13 = 0;
            do {
              uVar4 = *(uint *)((long)&uStack_b0 + lVar13 * 4);
              puVar2 = (undefined1 *)((long)&uStack_b4 + lVar13);
              if (uVar4 != 3) {
                puVar2 = (undefined1 *)(lVar16 + (uVar18 + uVar3) * 3 + (ulong)uVar4);
              }
              *(undefined1 *)(lVar12 + lVar13) = *puVar2;
              lVar13 = lVar13 + 1;
            } while (lVar13 != 4);
            lVar12 = lVar12 + 4;
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar17);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *puVar11);
    }
    return;
  }
  return;
}



/* Entry: 10a0dba80; end: 10a0dbc77;  */

void FUN_10a0dba80(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5,
                  undefined4 param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 auStack_90 [9];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_10 = param_4;
  uStack_8 = param_5;
  uStack_14 = param_6;
  if (*param_3 != 0) {
    uVar7 = 0;
    do {
      uVar10 = param_3[1];
      lVar8 = param_3[3] + param_3[2] * uVar7;
      lVar9 = param_2 + uVar7 * param_1;
      uVar2 = uVar10 & 0xfffffffffffffff0;
      if (uVar2 != 0) {
        uVar11 = 0;
        do {
          lVar6 = 0;
          puVar1 = (undefined1 *)(lVar8 + uVar11 * 3);
          uStack_48 = CONCAT17(puVar1[0x2d],
                               CONCAT16(puVar1[0x2a],
                                        CONCAT15(puVar1[0x27],
                                                 CONCAT14(puVar1[0x24],
                                                          CONCAT13(puVar1[0x21],
                                                                   CONCAT12(puVar1[0x1e],
                                                                            CONCAT11(puVar1[0x1b],
                                                                                     puVar1[0x18])))
                                                         ))));
          auStack_90[8] =
               CONCAT17(puVar1[0x15],
                        CONCAT16(puVar1[0x12],
                                 CONCAT15(puVar1[0xf],
                                          CONCAT14(puVar1[0xc],
                                                   CONCAT13(puVar1[9],
                                                            CONCAT12(puVar1[6],
                                                                     CONCAT11(puVar1[3],*puVar1)))))
                                ));
          uStack_38 = CONCAT17(puVar1[0x2e],
                               CONCAT16(puVar1[0x2b],
                                        CONCAT15(puVar1[0x28],
                                                 CONCAT14(puVar1[0x25],
                                                          CONCAT13(puVar1[0x22],
                                                                   CONCAT12(puVar1[0x1f],
                                                                            CONCAT11(puVar1[0x1c],
                                                                                     puVar1[0x19])))
                                                         ))));
          uStack_40 = CONCAT17(puVar1[0x16],
                               CONCAT16(puVar1[0x13],
                                        CONCAT15(puVar1[0x10],
                                                 CONCAT14(puVar1[0xd],
                                                          CONCAT13(puVar1[10],
                                                                   CONCAT12(puVar1[7],
                                                                            CONCAT11(puVar1[4],
                                                                                     puVar1[1]))))))
                              );
          uStack_28 = CONCAT17(puVar1[0x2f],
                               CONCAT16(puVar1[0x2c],
                                        CONCAT15(puVar1[0x29],
                                                 CONCAT14(puVar1[0x26],
                                                          CONCAT13(puVar1[0x23],
                                                                   CONCAT12(puVar1[0x20],
                                                                            CONCAT11(puVar1[0x1d],
                                                                                     puVar1[0x1a])))
                                                         ))));
          uStack_30 = CONCAT17(puVar1[0x17],
                               CONCAT16(puVar1[0x14],
                                        CONCAT15(puVar1[0x11],
                                                 CONCAT14(puVar1[0xe],
                                                          CONCAT13(puVar1[0xb],
                                                                   CONCAT12(puVar1[8],
                                                                            CONCAT11(puVar1[5],
                                                                                     puVar1[2]))))))
                              );
          do {
            iVar4 = *(int *)((long)&uStack_10 + lVar6 * 4);
            if (iVar4 == 3) {
              uVar5 = *(undefined1 *)((long)&uStack_14 + lVar6);
              uVar12 = CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,
                                                  CONCAT12(uVar5,CONCAT11(uVar5,uVar5)))))));
              uVar13 = CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,
                                                  CONCAT12(uVar5,CONCAT11(uVar5,uVar5)))))));
            }
            else {
              uVar13 = auStack_90[(long)iVar4 * 2 + 9];
              uVar12 = auStack_90[(long)iVar4 * 2 + 8];
            }
            auStack_90[lVar6 * 2 + 1] = uVar13;
            auStack_90[lVar6 * 2] = uVar12;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 4);
          puVar1 = (undefined1 *)(lVar9 + uVar11 * 4);
          *puVar1 = (char)auStack_90[0];
          puVar1[1] = (char)auStack_90[2];
          puVar1[2] = (char)auStack_90[4];
          puVar1[3] = (char)auStack_90[6];
          puVar1[4] = (char)((ulong)auStack_90[0] >> 8);
          puVar1[5] = (char)((ulong)auStack_90[2] >> 8);
          puVar1[6] = (char)((ulong)auStack_90[4] >> 8);
          puVar1[7] = (char)((ulong)auStack_90[6] >> 8);
          puVar1[8] = (char)((ulong)auStack_90[0] >> 0x10);
          puVar1[9] = (char)((ulong)auStack_90[2] >> 0x10);
          puVar1[10] = (char)((ulong)auStack_90[4] >> 0x10);
          puVar1[0xb] = (char)((ulong)auStack_90[6] >> 0x10);
          puVar1[0xc] = (char)((ulong)auStack_90[0] >> 0x18);
          puVar1[0xd] = (char)((ulong)auStack_90[2] >> 0x18);
          puVar1[0xe] = (char)((ulong)auStack_90[4] >> 0x18);
          puVar1[0xf] = (char)((ulong)auStack_90[6] >> 0x18);
          puVar1[0x10] = (char)((ulong)auStack_90[0] >> 0x20);
          puVar1[0x11] = (char)((ulong)auStack_90[2] >> 0x20);
          puVar1[0x12] = (char)((ulong)auStack_90[4] >> 0x20);
          puVar1[0x13] = (char)((ulong)auStack_90[6] >> 0x20);
          puVar1[0x14] = (char)((ulong)auStack_90[0] >> 0x28);
          puVar1[0x15] = (char)((ulong)auStack_90[2] >> 0x28);
          puVar1[0x16] = (char)((ulong)auStack_90[4] >> 0x28);
          puVar1[0x17] = (char)((ulong)auStack_90[6] >> 0x28);
          puVar1[0x18] = (char)((ulong)auStack_90[0] >> 0x30);
          puVar1[0x19] = (char)((ulong)auStack_90[2] >> 0x30);
          puVar1[0x1a] = (char)((ulong)auStack_90[4] >> 0x30);
          puVar1[0x1b] = (char)((ulong)auStack_90[6] >> 0x30);
          puVar1[0x1c] = (char)((ulong)auStack_90[0] >> 0x38);
          puVar1[0x1d] = (char)((ulong)auStack_90[2] >> 0x38);
          puVar1[0x1e] = (char)((ulong)auStack_90[4] >> 0x38);
          puVar1[0x1f] = (char)((ulong)auStack_90[6] >> 0x38);
          puVar1[0x20] = (char)auStack_90[1];
          puVar1[0x21] = (char)auStack_90[3];
          puVar1[0x22] = (char)auStack_90[5];
          puVar1[0x23] = (char)auStack_90[7];
          puVar1[0x24] = (char)((ulong)auStack_90[1] >> 8);
          puVar1[0x25] = (char)((ulong)auStack_90[3] >> 8);
          puVar1[0x26] = (char)((ulong)auStack_90[5] >> 8);
          puVar1[0x27] = (char)((ulong)auStack_90[7] >> 8);
          puVar1[0x28] = (char)((ulong)auStack_90[1] >> 0x10);
          puVar1[0x29] = (char)((ulong)auStack_90[3] >> 0x10);
          puVar1[0x2a] = (char)((ulong)auStack_90[5] >> 0x10);
          puVar1[0x2b] = (char)((ulong)auStack_90[7] >> 0x10);
          puVar1[0x2c] = (char)((ulong)auStack_90[1] >> 0x18);
          puVar1[0x2d] = (char)((ulong)auStack_90[3] >> 0x18);
          puVar1[0x2e] = (char)((ulong)auStack_90[5] >> 0x18);
          puVar1[0x2f] = (char)((ulong)auStack_90[7] >> 0x18);
          puVar1[0x30] = (char)((ulong)auStack_90[1] >> 0x20);
          puVar1[0x31] = (char)((ulong)auStack_90[3] >> 0x20);
          puVar1[0x32] = (char)((ulong)auStack_90[5] >> 0x20);
          puVar1[0x33] = (char)((ulong)auStack_90[7] >> 0x20);
          puVar1[0x34] = (char)((ulong)auStack_90[1] >> 0x28);
          puVar1[0x35] = (char)((ulong)auStack_90[3] >> 0x28);
          puVar1[0x36] = (char)((ulong)auStack_90[5] >> 0x28);
          puVar1[0x37] = (char)((ulong)auStack_90[7] >> 0x28);
          puVar1[0x38] = (char)((ulong)auStack_90[1] >> 0x30);
          puVar1[0x39] = (char)((ulong)auStack_90[3] >> 0x30);
          puVar1[0x3a] = (char)((ulong)auStack_90[5] >> 0x30);
          puVar1[0x3b] = (char)((ulong)auStack_90[7] >> 0x30);
          puVar1[0x3c] = (char)((ulong)auStack_90[1] >> 0x38);
          puVar1[0x3d] = (char)((ulong)auStack_90[3] >> 0x38);
          puVar1[0x3e] = (char)((ulong)auStack_90[5] >> 0x38);
          puVar1[0x3f] = (char)((ulong)auStack_90[7] >> 0x38);
          uVar11 = uVar11 + 0x10;
        } while (uVar11 < uVar2);
      }
      uVar10 = uVar10 & 0xf;
      if (uVar10 != 0) {
        uVar11 = 0;
        lVar9 = lVar9 + uVar2 * 4;
        do {
          lVar6 = 0;
          do {
            uVar3 = *(uint *)((long)&uStack_10 + lVar6 * 4);
            puVar1 = (undefined1 *)((long)&uStack_14 + lVar6);
            if (uVar3 != 3) {
              puVar1 = (undefined1 *)(lVar8 + (uVar11 + uVar2) * 3 + (ulong)uVar3);
            }
            *(undefined1 *)(lVar9 + lVar6) = *puVar1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 4);
          lVar9 = lVar9 + 4;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar10);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *param_3);
  }
  return;
}



/* Entry: 10a0dbc78; end: 10a0dbcdf;  */

void FUN_10a0dbc78(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2d0;
  __Znwm();
  FUN_10a0dbce0();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a0dbce0; end: 10a0dbd2b;  */

undefined8 * FUN_10a0dbce0(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b9fcf0;
  FUN_10a1db5e8(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10a0dbd2c; end: 10a0dbf13;  */

void FUN_10a0dbd2c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a0dbf14(param_3,param_4);
  lStack_60 = *param_2;
  plStack_58 = (long *)param_2[1];
  lStack_70 = lStack_60;
  plStack_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
  }
  FUN_10a05b208(auStack_50,param_3,&lStack_60);
  FUN_10a05b04c(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
    plStack_78 = (long *)param_1[1];
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa88c30(lVar5,&lStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a0dbf14; end: 10a0dbfe7;  */

undefined8 FUN_10a0dbf14(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = 0x2a8;
  puVar6 = param_2;
  __Znwm(0x2a8);
  uVar9 = *param_1;
  plVar8 = (long *)param_2[1];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = uVar4;
  func_0x00010a0fda30();
  FUN_10ab6a888(uVar4,uVar9,&uStack_40,uVar5,puVar6);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return uVar4;
}



/* Entry: 10a0dbfe8; end: 10a0dc01f;  */

void FUN_10a0dbfe8(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 0x209);
    if ((uVar1 & 0x7f) != 0) {
      *(ushort *)(lVar2 + 0x209) = uVar1 & 0xff00 | uVar1 - 1 & 0x7f;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      *(undefined8 *)(lVar2 + 0x218) = 0;
      FUN_10a1cc408(lVar2 + 0x220,(ulong)&uStack_60 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10a0dc020; end: 10a0dc08f;  */

undefined8 * FUN_10a0dc020(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    func_0x000107c2b04c(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2);
    param_1[1] = lVar1 + param_2;
  }
  return param_1;
}



/* Entry: 10a0dc090; end: 10a0dc163;  */

undefined1 (*) [16] FUN_10a0dc090(undefined1 (*param_1) [16],undefined8 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 (*pauVar15) [16];
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  long lVar21;
  undefined1 (*pauVar22) [16];
  undefined1 *puVar23;
  undefined1 auVar25 [15];
  undefined8 uVar24;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte bVar29;
  char cVar30;
  byte bVar31;
  char cVar32;
  byte bVar33;
  char cVar34;
  byte bVar35;
  char cVar36;
  byte bVar37;
  char cVar38;
  byte bVar39;
  char cVar40;
  byte bVar41;
  char cVar42;
  char cVar43;
  byte bVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  undefined8 uVar51;
  
  puVar1 = *(undefined1 **)(*param_1 + 8);
  if (puVar1 < *(undefined1 **)param_1[1]) {
    puVar23 = puVar1 + 1;
    *puVar1 = *(undefined1 *)param_2;
    pauVar15 = param_1;
  }
  else {
    pauVar20 = *(undefined1 (**) [16])*param_1;
    lVar21 = (long)puVar1 - (long)pauVar20;
    pauVar22 = (undefined1 (*) [16])(lVar21 + 1);
    if ((long)pauVar22 < 0) {
      FUN_109ffdf98();
      if (param_3 < 2) {
        if (param_3 != 0) {
          uVar17 = (ulong)(*(uint *)*param_1 & *(uint *)*param_1 >> 1);
          uVar24 = *(undefined8 *)*param_1;
          bVar29 = (byte)uVar24;
          bVar31 = (byte)((ulong)uVar24 >> 8);
          bVar33 = (byte)((ulong)uVar24 >> 0x10);
          bVar35 = (byte)((ulong)uVar24 >> 0x18);
          auVar28._0_8_ =
               CONCAT17(bVar31,CONCAT16(bVar31 >> 2,
                                        CONCAT15(bVar31 >> 4,
                                                 CONCAT14(bVar31 >> 6,
                                                          CONCAT13(bVar29,CONCAT12(bVar29 >> 2,
                                                                                   CONCAT11(bVar29 
                                                  >> 4,bVar29 >> 6))))))) & 0x303030303030303;
          auVar28[8] = bVar33 >> 6;
          auVar28[9] = bVar33 >> 4 & 3;
          auVar28[10] = bVar33 >> 2 & 3;
          auVar28[0xb] = bVar33 & 3;
          auVar28[0xc] = bVar35 >> 6;
          auVar28[0xd] = bVar35 >> 4 & 3;
          auVar28[0xe] = bVar35 >> 2 & 3;
          auVar28[0xf] = bVar35 & 3;
          cVar30 = -((char)auVar28._0_8_ == '\x03');
          cVar32 = -((char)(auVar28._0_8_ >> 8) == '\x03');
          cVar34 = -((char)(auVar28._0_8_ >> 0x10) == '\x03');
          cVar36 = -((char)(auVar28._0_8_ >> 0x18) == '\x03');
          cVar38 = -((char)(auVar28._0_8_ >> 0x20) == '\x03');
          cVar40 = -((char)(auVar28._0_8_ >> 0x28) == '\x03');
          cVar43 = -((char)(auVar28._0_8_ >> 0x30) == '\x03');
          cVar45 = -((char)(auVar28._0_8_ >> 0x38) == '\x03');
          cVar47 = -(bVar33 >> 6 == 3);
          cVar50 = -(bVar35 >> 6 == 3);
          uVar18 = CONCAT17(cVar45,CONCAT16(cVar43,CONCAT15(cVar40,CONCAT14(cVar38,CONCAT13(cVar36,
                                                  CONCAT12(cVar34,CONCAT11(cVar32,cVar30))))))) *
                   0x103070f1f3f80;
          puVar16 = (ulong *)(*param_1 + 4);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = *puVar16;
          uVar24 = a64_TBL(ZEXT816(0),auVar3,*(undefined8 *)((uVar18 >> 0x38) * 8 + 0x1137e99f0));
          auVar7._8_8_ = 0;
          auVar7._0_8_ = *(ulong *)((long)puVar16 + (ulong)*(byte *)((uVar18 >> 0x38) + 0x1137e98f0)
                                   );
          uVar51 = a64_TBL(ZEXT816(0),auVar7,
                           *(undefined8 *)
                            (((ulong)(CONCAT17(-(auVar28[0xf] == 3),
                                               CONCAT16(-(auVar28[0xe] == 3),
                                                        CONCAT15(-(auVar28[0xd] == 3),
                                                                 CONCAT14(cVar50,CONCAT13(-(auVar28[
                                                  0xb] == 3),
                                                  CONCAT12(-(auVar28[10] == 3),
                                                           CONCAT11(-(auVar28[9] == 3),cVar47)))))))
                                     * 0x103070f1f3f80) >> 0x38) * 8 + 0x1137e99f0));
          auVar4._8_8_ = uVar51;
          auVar4._0_8_ = uVar24;
          auVar2[1] = cVar32;
          auVar2[0] = cVar30;
          auVar2[2] = cVar34;
          auVar2[3] = cVar36;
          auVar2[4] = cVar38;
          auVar2[5] = cVar40;
          auVar2[6] = cVar43;
          auVar2[7] = cVar45;
          auVar2[8] = cVar47;
          auVar2[9] = -(auVar28[9] == 3);
          auVar2[10] = -(auVar28[10] == 3);
          auVar2[0xb] = -(auVar28[0xb] == 3);
          auVar2[0xc] = cVar50;
          auVar2[0xd] = -(auVar28[0xd] == 3);
          auVar2[0xe] = -(auVar28[0xe] == 3);
          auVar2[0xf] = -(auVar28[0xf] == 3);
          auVar28 = auVar28 ^ (auVar28 ^ auVar4) & auVar2;
          param_2[1] = auVar28._8_8_;
          *param_2 = auVar28._0_8_;
          return (undefined1 (*) [16])
                 ((long)puVar16 +
                 (((uVar17 | uVar17 << 0x1e) & 0x1111111111111111) * 0x1111111111111111 >> 0x3c));
        }
        auVar26 = ZEXT216(0);
        pauVar22 = param_1;
      }
      else {
        if (param_3 == 2) {
          uVar17 = *(ulong *)*param_1;
          uVar18 = uVar17 & uVar17 >> 1;
          bVar29 = (byte)uVar17 >> 4;
          bVar31 = (byte)(uVar17 >> 8) >> 4;
          bVar33 = (byte)(uVar17 >> 0x10) >> 4;
          bVar35 = (byte)(uVar17 >> 0x18) >> 4;
          bVar37 = (byte)(uVar17 >> 0x20) >> 4;
          bVar39 = (byte)(uVar17 >> 0x28) >> 4;
          bVar41 = (byte)(uVar17 >> 0x30) >> 4;
          bVar44 = (byte)(uVar17 >> 0x3c);
          uVar17 = uVar17 & 0xf0f0f0f0f0f0f0f;
          auVar25._0_4_ = (uint)bVar31 << 0x10;
          auVar25[4] = bVar33;
          auVar25[5] = 0;
          auVar25[6] = bVar35;
          auVar25[7] = 0;
          auVar25[8] = bVar37;
          auVar25[9] = 0;
          auVar25[10] = bVar39;
          auVar25[0xb] = 0;
          auVar25[0xc] = bVar41;
          auVar25[0xd] = 0;
          auVar25[0xe] = bVar44;
          auVar9[1] = (char)uVar17;
          auVar9[0] = bVar29;
          auVar9._2_13_ = auVar25._2_13_;
          cVar30 = (char)(uVar17 >> 8);
          auVar10[3] = cVar30;
          auVar10._0_3_ = auVar9._0_3_;
          auVar10._4_11_ = auVar25._4_11_;
          cVar32 = (char)(uVar17 >> 0x10);
          auVar11[5] = cVar32;
          auVar11._0_5_ = auVar10._0_5_;
          auVar11._6_9_ = auVar25._6_9_;
          cVar34 = (char)(uVar17 >> 0x18);
          auVar12[7] = cVar34;
          auVar12._0_7_ = auVar11._0_7_;
          auVar12._8_7_ = auVar25._8_7_;
          cVar36 = (char)(uVar17 >> 0x20);
          auVar13[9] = cVar36;
          auVar13._0_9_ = auVar12._0_9_;
          auVar13._10_5_ = auVar25._10_5_;
          cVar38 = (char)(uVar17 >> 0x28);
          auVar14[0xb] = cVar38;
          auVar14._0_11_ = auVar13._0_11_;
          auVar14._12_3_ = auVar25._12_3_;
          cVar40 = (char)(uVar17 >> 0x30);
          auVar27._0_13_ = auVar14._0_13_;
          auVar27[0xd] = cVar40;
          auVar27[0xe] = bVar44;
          auVar27[0xf] = 0;
          cVar43 = -(bVar29 == 0xf);
          cVar45 = -((char)uVar17 == '\x0f');
          cVar47 = -(bVar31 == 0xf);
          cVar30 = -(cVar30 == '\x0f');
          cVar50 = -(bVar33 == 0xf);
          cVar32 = -(cVar32 == '\x0f');
          cVar42 = -(bVar35 == 0xf);
          cVar34 = -(cVar34 == '\x0f');
          cVar46 = -(bVar37 == 0xf);
          cVar36 = -(cVar36 == '\x0f');
          cVar48 = -(bVar39 == 0xf);
          cVar38 = -(cVar38 == '\x0f');
          cVar49 = -(bVar41 == 0xf);
          cVar40 = -(cVar40 == '\x0f');
          uVar17 = CONCAT17(cVar34,CONCAT16(cVar42,CONCAT15(cVar32,CONCAT14(cVar50,CONCAT13(cVar30,
                                                  CONCAT12(cVar47,CONCAT11(cVar45,cVar43))))))) *
                   0x103070f1f3f80;
          puVar16 = (ulong *)(*param_1 + 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = *puVar16;
          uVar24 = a64_TBL(ZEXT816(0),auVar5,*(undefined8 *)((uVar17 >> 0x38) * 8 + 0x1137e99f0));
          auVar8._8_8_ = 0;
          auVar8._0_8_ = *(ulong *)((long)puVar16 + (ulong)*(byte *)((uVar17 >> 0x38) + 0x1137e98f0)
                                   );
          uVar51 = a64_TBL(ZEXT816(0),auVar8,
                           *(undefined8 *)
                            (((ulong)CONCAT16(-(bVar44 == 0xf),
                                              CONCAT15(cVar40,CONCAT14(cVar49,CONCAT13(cVar38,
                                                  CONCAT12(cVar48,CONCAT11(cVar36,cVar46)))))) *
                              0x103070f1f3f80 >> 0x38) * 8 + 0x1137e99f0));
          auVar6._8_8_ = uVar51;
          auVar6._0_8_ = uVar24;
          auVar26[1] = cVar45;
          auVar26[0] = cVar43;
          auVar26[2] = cVar47;
          auVar26[3] = cVar30;
          auVar26[4] = cVar50;
          auVar26[5] = cVar32;
          auVar26[6] = cVar42;
          auVar26[7] = cVar34;
          auVar26[8] = cVar46;
          auVar26[9] = cVar36;
          auVar26[10] = cVar48;
          auVar26[0xb] = cVar38;
          auVar26[0xc] = cVar49;
          auVar26[0xd] = cVar40;
          auVar26[0xe] = -(bVar44 == 0xf);
          auVar26[0xf] = 0;
          auVar27 = auVar27 ^ (auVar27 ^ auVar6) & auVar26;
          param_2[1] = auVar27._8_8_;
          *param_2 = auVar27._0_8_;
          return (undefined1 (*) [16])
                 ((long)puVar16 +
                 ((uVar18 & uVar18 >> 2 & 0x1111111111111111) * 0x1111111111111111 >> 0x3c));
        }
        pauVar22 = param_1 + 1;
        auVar26 = *param_1;
      }
      param_2[1] = auVar26._8_8_;
      *param_2 = auVar26._0_8_;
      return pauVar22;
    }
    uVar17 = (long)*(undefined1 **)param_1[1] - (long)pauVar20;
    pauVar19 = (undefined1 (*) [16])(uVar17 * 2);
    if (pauVar19 < pauVar22 || (long)pauVar19 - (long)pauVar22 == 0) {
      pauVar19 = pauVar22;
    }
    if (0x3ffffffffffffffe < uVar17) {
      pauVar19 = (undefined1 (*) [16])0x7fffffffffffffff;
    }
    if (pauVar19 == (undefined1 (*) [16])0x0) {
      pauVar22 = (undefined1 (*) [16])0x0;
    }
    else {
      pauVar22 = pauVar19;
      __Znwm();
    }
    puVar23 = (undefined1 *)((long)pauVar22 + lVar21) + 1;
    *(undefined1 *)((long)pauVar22 + lVar21) = *(undefined1 *)param_2;
    pauVar15 = pauVar22;
    _memcpy(pauVar22,pauVar20,lVar21);
    *(undefined1 (**) [16])*param_1 = pauVar22;
    *(undefined1 **)(*param_1 + 8) = puVar23;
    *(undefined1 **)param_1[1] = *pauVar19 + (long)*pauVar22;
    if (pauVar20 != (undefined1 (*) [16])0x0) {
      __ZdlPv(pauVar20);
      pauVar15 = pauVar20;
    }
  }
  *(undefined1 **)(*param_1 + 8) = puVar23;
  return pauVar15;
}



/* Entry: 10a0dc164; end: 10a0dc2cf;  */

undefined1 (*) [16] FUN_10a0dc164(undefined1 (*param_1) [16],undefined8 *param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  ulong *puVar14;
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar19 [15];
  undefined8 uVar18;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  byte bVar23;
  char cVar24;
  byte bVar25;
  char cVar26;
  byte bVar27;
  char cVar28;
  byte bVar29;
  char cVar30;
  byte bVar31;
  char cVar32;
  byte bVar33;
  char cVar34;
  byte bVar35;
  char cVar36;
  char cVar37;
  byte bVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  undefined8 uVar45;
  
  if (param_3 < 2) {
    if (param_3 != 0) {
      uVar16 = (ulong)(*(uint *)*param_1 & *(uint *)*param_1 >> 1);
      uVar18 = *(undefined8 *)*param_1;
      bVar23 = (byte)uVar18;
      bVar25 = (byte)((ulong)uVar18 >> 8);
      bVar27 = (byte)((ulong)uVar18 >> 0x10);
      bVar29 = (byte)((ulong)uVar18 >> 0x18);
      auVar22._0_8_ =
           CONCAT17(bVar25,CONCAT16(bVar25 >> 2,
                                    CONCAT15(bVar25 >> 4,
                                             CONCAT14(bVar25 >> 6,
                                                      CONCAT13(bVar23,CONCAT12(bVar23 >> 2,
                                                                               CONCAT11(bVar23 >> 4,
                                                                                        bVar23 >> 6)
                                                                              )))))) &
           0x303030303030303;
      auVar22[8] = bVar27 >> 6;
      auVar22[9] = bVar27 >> 4 & 3;
      auVar22[10] = bVar27 >> 2 & 3;
      auVar22[0xb] = bVar27 & 3;
      auVar22[0xc] = bVar29 >> 6;
      auVar22[0xd] = bVar29 >> 4 & 3;
      auVar22[0xe] = bVar29 >> 2 & 3;
      auVar22[0xf] = bVar29 & 3;
      cVar24 = -((char)auVar22._0_8_ == '\x03');
      cVar26 = -((char)(auVar22._0_8_ >> 8) == '\x03');
      cVar28 = -((char)(auVar22._0_8_ >> 0x10) == '\x03');
      cVar30 = -((char)(auVar22._0_8_ >> 0x18) == '\x03');
      cVar32 = -((char)(auVar22._0_8_ >> 0x20) == '\x03');
      cVar34 = -((char)(auVar22._0_8_ >> 0x28) == '\x03');
      cVar37 = -((char)(auVar22._0_8_ >> 0x30) == '\x03');
      cVar39 = -((char)(auVar22._0_8_ >> 0x38) == '\x03');
      cVar41 = -(bVar27 >> 6 == 3);
      cVar44 = -(bVar29 >> 6 == 3);
      uVar17 = CONCAT17(cVar39,CONCAT16(cVar37,CONCAT15(cVar34,CONCAT14(cVar32,CONCAT13(cVar30,
                                                  CONCAT12(cVar28,CONCAT11(cVar26,cVar24))))))) *
               0x103070f1f3f80;
      puVar14 = (ulong *)(*param_1 + 4);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *puVar14;
      uVar18 = a64_TBL(ZEXT816(0),auVar2,*(undefined8 *)((uVar17 >> 0x38) * 8 + 0x1137e99f0));
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(ulong *)((long)puVar14 + (ulong)*(byte *)((uVar17 >> 0x38) + 0x1137e98f0));
      uVar45 = a64_TBL(ZEXT816(0),auVar6,
                       *(undefined8 *)
                        (((ulong)(CONCAT17(-(auVar22[0xf] == 3),
                                           CONCAT16(-(auVar22[0xe] == 3),
                                                    CONCAT15(-(auVar22[0xd] == 3),
                                                             CONCAT14(cVar44,CONCAT13(-(auVar22[0xb]
                                                                                       == 3),
                                                  CONCAT12(-(auVar22[10] == 3),
                                                           CONCAT11(-(auVar22[9] == 3),cVar41)))))))
                                 * 0x103070f1f3f80) >> 0x38) * 8 + 0x1137e99f0));
      auVar3._8_8_ = uVar45;
      auVar3._0_8_ = uVar18;
      auVar1[1] = cVar26;
      auVar1[0] = cVar24;
      auVar1[2] = cVar28;
      auVar1[3] = cVar30;
      auVar1[4] = cVar32;
      auVar1[5] = cVar34;
      auVar1[6] = cVar37;
      auVar1[7] = cVar39;
      auVar1[8] = cVar41;
      auVar1[9] = -(auVar22[9] == 3);
      auVar1[10] = -(auVar22[10] == 3);
      auVar1[0xb] = -(auVar22[0xb] == 3);
      auVar1[0xc] = cVar44;
      auVar1[0xd] = -(auVar22[0xd] == 3);
      auVar1[0xe] = -(auVar22[0xe] == 3);
      auVar1[0xf] = -(auVar22[0xf] == 3);
      auVar22 = auVar22 ^ (auVar22 ^ auVar3) & auVar1;
      param_2[1] = auVar22._8_8_;
      *param_2 = auVar22._0_8_;
      return (undefined1 (*) [16])
             ((long)puVar14 +
             (((uVar16 | uVar16 << 0x1e) & 0x1111111111111111) * 0x1111111111111111 >> 0x3c));
    }
    auVar20 = ZEXT216(0);
    pauVar15 = param_1;
  }
  else {
    if (param_3 == 2) {
      uVar16 = *(ulong *)*param_1;
      uVar17 = uVar16 & uVar16 >> 1;
      bVar23 = (byte)uVar16 >> 4;
      bVar25 = (byte)(uVar16 >> 8) >> 4;
      bVar27 = (byte)(uVar16 >> 0x10) >> 4;
      bVar29 = (byte)(uVar16 >> 0x18) >> 4;
      bVar31 = (byte)(uVar16 >> 0x20) >> 4;
      bVar33 = (byte)(uVar16 >> 0x28) >> 4;
      bVar35 = (byte)(uVar16 >> 0x30) >> 4;
      bVar38 = (byte)(uVar16 >> 0x3c);
      uVar16 = uVar16 & 0xf0f0f0f0f0f0f0f;
      auVar19._0_4_ = (uint)bVar25 << 0x10;
      auVar19[4] = bVar27;
      auVar19[5] = 0;
      auVar19[6] = bVar29;
      auVar19[7] = 0;
      auVar19[8] = bVar31;
      auVar19[9] = 0;
      auVar19[10] = bVar33;
      auVar19[0xb] = 0;
      auVar19[0xc] = bVar35;
      auVar19[0xd] = 0;
      auVar19[0xe] = bVar38;
      auVar8[1] = (char)uVar16;
      auVar8[0] = bVar23;
      auVar8._2_13_ = auVar19._2_13_;
      cVar24 = (char)(uVar16 >> 8);
      auVar9[3] = cVar24;
      auVar9._0_3_ = auVar8._0_3_;
      auVar9._4_11_ = auVar19._4_11_;
      cVar26 = (char)(uVar16 >> 0x10);
      auVar10[5] = cVar26;
      auVar10._0_5_ = auVar9._0_5_;
      auVar10._6_9_ = auVar19._6_9_;
      cVar28 = (char)(uVar16 >> 0x18);
      auVar11[7] = cVar28;
      auVar11._0_7_ = auVar10._0_7_;
      auVar11._8_7_ = auVar19._8_7_;
      cVar30 = (char)(uVar16 >> 0x20);
      auVar12[9] = cVar30;
      auVar12._0_9_ = auVar11._0_9_;
      auVar12._10_5_ = auVar19._10_5_;
      cVar32 = (char)(uVar16 >> 0x28);
      auVar13[0xb] = cVar32;
      auVar13._0_11_ = auVar12._0_11_;
      auVar13._12_3_ = auVar19._12_3_;
      cVar34 = (char)(uVar16 >> 0x30);
      auVar21._0_13_ = auVar13._0_13_;
      auVar21[0xd] = cVar34;
      auVar21[0xe] = bVar38;
      auVar21[0xf] = 0;
      cVar37 = -(bVar23 == 0xf);
      cVar39 = -((char)uVar16 == '\x0f');
      cVar41 = -(bVar25 == 0xf);
      cVar24 = -(cVar24 == '\x0f');
      cVar44 = -(bVar27 == 0xf);
      cVar26 = -(cVar26 == '\x0f');
      cVar36 = -(bVar29 == 0xf);
      cVar28 = -(cVar28 == '\x0f');
      cVar40 = -(bVar31 == 0xf);
      cVar30 = -(cVar30 == '\x0f');
      cVar42 = -(bVar33 == 0xf);
      cVar32 = -(cVar32 == '\x0f');
      cVar43 = -(bVar35 == 0xf);
      cVar34 = -(cVar34 == '\x0f');
      uVar16 = CONCAT17(cVar28,CONCAT16(cVar36,CONCAT15(cVar26,CONCAT14(cVar44,CONCAT13(cVar24,
                                                  CONCAT12(cVar41,CONCAT11(cVar39,cVar37))))))) *
               0x103070f1f3f80;
      puVar14 = (ulong *)(*param_1 + 8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *puVar14;
      uVar18 = a64_TBL(ZEXT816(0),auVar4,*(undefined8 *)((uVar16 >> 0x38) * 8 + 0x1137e99f0));
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *(ulong *)((long)puVar14 + (ulong)*(byte *)((uVar16 >> 0x38) + 0x1137e98f0));
      uVar45 = a64_TBL(ZEXT816(0),auVar7,
                       *(undefined8 *)
                        (((ulong)CONCAT16(-(bVar38 == 0xf),
                                          CONCAT15(cVar34,CONCAT14(cVar43,CONCAT13(cVar32,CONCAT12(
                                                  cVar42,CONCAT11(cVar30,cVar40)))))) *
                          0x103070f1f3f80 >> 0x38) * 8 + 0x1137e99f0));
      auVar5._8_8_ = uVar45;
      auVar5._0_8_ = uVar18;
      auVar20[1] = cVar39;
      auVar20[0] = cVar37;
      auVar20[2] = cVar41;
      auVar20[3] = cVar24;
      auVar20[4] = cVar44;
      auVar20[5] = cVar26;
      auVar20[6] = cVar36;
      auVar20[7] = cVar28;
      auVar20[8] = cVar40;
      auVar20[9] = cVar30;
      auVar20[10] = cVar42;
      auVar20[0xb] = cVar32;
      auVar20[0xc] = cVar43;
      auVar20[0xd] = cVar34;
      auVar20[0xe] = -(bVar38 == 0xf);
      auVar20[0xf] = 0;
      auVar21 = auVar21 ^ (auVar21 ^ auVar5) & auVar20;
      param_2[1] = auVar21._8_8_;
      *param_2 = auVar21._0_8_;
      return (undefined1 (*) [16])
             ((long)puVar14 +
             ((uVar17 & uVar17 >> 2 & 0x1111111111111111) * 0x1111111111111111 >> 0x3c));
    }
    pauVar15 = param_1 + 1;
    auVar20 = *param_1;
  }
  param_2[1] = auVar20._8_8_;
  *param_2 = auVar20._0_8_;
  return pauVar15;
}



/* Entry: 10a0dc2d0; end: 10a0dc3c7;  */

long * FUN_10a0dc2d0(long param_1,undefined8 param_2)

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
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a0dc3c8; end: 10a0dc54f;  */

long FUN_10a0dc3c8(long param_1)

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



/* Entry: 10a0dc550; end: 10a0dc623;  */

long * FUN_10a0dc550(long *param_1,int param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = param_1 + 1;
  plVar2 = (long *)*plVar1;
  do {
    plVar3 = plVar1;
    if (plVar2 == (long *)0x0) {
LAB_10a0dc5b4:
      plVar2 = (long *)0x40;
      __Znwm();
      *(undefined4 *)(plVar2 + 4) = *param_3;
      plVar2[6] = 0;
      plVar2[7] = 0;
      plVar2[5] = 0;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar1;
      *plVar3 = (long)plVar2;
      plVar1 = plVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        plVar1 = (long *)*plVar3;
      }
      func_0x000107c2b058(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
      return plVar2;
    }
    while (plVar1 = plVar2, (int)plVar1[4] <= param_2) {
      if (param_2 <= (int)plVar1[4]) {
        return plVar1;
      }
      plVar2 = (long *)plVar1[1];
      if ((long *)plVar1[1] == (long *)0x0) {
        plVar3 = plVar1 + 1;
        goto LAB_10a0dc5b4;
      }
    }
    plVar2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 10a0dc624; end: 10a0dc807;  */

void FUN_10a0dc624(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a0dc9fc(param_3);
  lStack_60 = *param_2;
  plStack_58 = (long *)param_2[1];
  lStack_70 = lStack_60;
  plStack_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
  }
  FUN_10a0dccac(auStack_50,param_3,&lStack_60);
  FUN_10a0dc898(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
    plStack_78 = (long *)param_1[1];
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa88c30(lVar5,&lStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a0dc808; end: 10a0dc897;  */

void FUN_10a0dc808(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a0dcef0(auStack_38,&uStack_21,&uStack_39,param_2);
  FUN_10a0dc898(param_1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 10a0dc898; end: 10a0dc9fb;  */

void FUN_10a0dc898(long *param_1,long *param_2)

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



/* Entry: 10a0dc9fc; end: 10a0dca43;  */

undefined8 FUN_10a0dc9fc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x178;
  __Znwm(0x178);
  FUN_10aa75f28();
  return uVar1;
}



/* Entry: 10a0dca44; end: 10a0dccab;  */

void FUN_10a0dca44(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a0dca44(param_1,*param_2);
    FUN_10a0dca44(param_1,param_2[1]);
    func_0x00010a0dca8c(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a0dccac; end: 10a0dcd4b;  */

long * FUN_10a0dccac(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar2 = &PTR_DAT_110ba1cf8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0dcd4c(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0dcd4c; end: 10a0dce6f;  */

void FUN_10a0dcd4c(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a0dce70; end: 10a0dceaf;  */

void FUN_10a0dce70(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a0dceb0; end: 10a0dceeb;  */

long FUN_10a0dceb0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba1d38);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0dceec; end: 10a0dceef;  */

void FUN_10a0dceec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0dcef0; end: 10a0dcf57;  */

void FUN_10a0dcef0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 400;
  __Znwm();
  FUN_10a0dcf58();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a0dcf58; end: 10a0dcfa3;  */

undefined8 * FUN_10a0dcf58(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba1d58;
  FUN_10aa75f28(param_1 + 3,0);
  return param_1;
}



/* Entry: 10a0dcfa4; end: 10a0dcfb3;  */

void FUN_10a0dcfa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba1d58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0dcfb4; end: 10a0dcfd3;  */

void FUN_10a0dcfb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba1d58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0dcfd4; end: 10a0dcfdf;  */

undefined8 * FUN_10a0dcfd4(long param_1)

{
  FUN_10a0dca44(param_1 + 0x178,*(undefined8 *)(param_1 + 0x180));
  func_0x00010a0dcb20(param_1 + 0x160,*(undefined8 *)(param_1 + 0x168));
  func_0x00010a0dcba4(param_1 + 0x148);
  func_0x00010a0dcbfc(param_1 + 0x138);
  func_0x00010a0dcc54(param_1 + 0x128);
  func_0x00010a0cbf1c(param_1 + 0x118);
  func_0x00010a0cc684(param_1 + 0x108);
  func_0x00010a0cbf1c(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110c3ec18;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110c3ecb8;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  if (*(long *)(param_1 + 0x90) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x30);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a0dcfe0; end: 10a0dd047;  */

undefined8 * FUN_10a0dcfe0(undefined8 *param_1)

{
  FUN_10a0dca44(param_1 + 0x2c,param_1[0x2d]);
  func_0x00010a0dcb20(param_1 + 0x29,param_1[0x2a]);
  func_0x00010a0dcba4(param_1 + 0x26);
  func_0x00010a0dcbfc(param_1 + 0x24);
  func_0x00010a0dcc54(param_1 + 0x22);
  func_0x00010a0cbf1c(param_1 + 0x20);
  func_0x00010a0cc684(param_1 + 0x1e);
  func_0x00010a0cbf1c(param_1 + 0x1c);
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



/* Entry: 10a0dd048; end: 10a0dd22b;  */

void FUN_10a0dd048(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a0dd420(param_3);
  lStack_60 = *param_2;
  plStack_58 = (long *)param_2[1];
  lStack_70 = lStack_60;
  plStack_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
  }
  FUN_10a0dd570(auStack_50,param_3,&lStack_60);
  FUN_10a0dd2bc(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
    plStack_78 = (long *)param_1[1];
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa88c30(lVar5,&lStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a0dd22c; end: 10a0dd2bb;  */

void FUN_10a0dd22c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a0dd7b4(auStack_38,&uStack_21,&uStack_39,param_2);
  FUN_10a0dd2bc(param_1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 10a0dd2bc; end: 10a0dd41f;  */

void FUN_10a0dd2bc(long *param_1,long *param_2)

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



/* Entry: 10a0dd420; end: 10a0dd467;  */

undefined8 FUN_10a0dd420(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x120;
  __Znwm(0x120);
  FUN_10aa71b20();
  return uVar1;
}



/* Entry: 10a0dd468; end: 10a0dd56f;  */

long FUN_10a0dd468(long param_1)

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



/* Entry: 10a0dd570; end: 10a0dd60f;  */

long * FUN_10a0dd570(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar2 = &PTR_DAT_110ba1bf8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0dd610(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0dd610; end: 10a0dd733;  */

void FUN_10a0dd610(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a0dd734; end: 10a0dd773;  */

void FUN_10a0dd734(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a0dd774; end: 10a0dd7af;  */

long FUN_10a0dd774(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba1c38);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0dd7b0; end: 10a0dd7b3;  */

void FUN_10a0dd7b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0dd7b4; end: 10a0dd81b;  */

void FUN_10a0dd7b4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x138;
  __Znwm();
  FUN_10a0dd81c();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a0dd81c; end: 10a0dd867;  */

undefined8 * FUN_10a0dd81c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba1c58;
  FUN_10aa71b20(param_1 + 3,0);
  return param_1;
}



/* Entry: 10a0dd868; end: 10a0dd877;  */

void FUN_10a0dd868(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba1c58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0dd878; end: 10a0dd897;  */

void FUN_10a0dd878(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba1c58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0dd898; end: 10a0dd8c7;  */

undefined8 * FUN_10a0dd898(long param_1)

{
  FUN_10a0dd468(param_1 + 0x128);
  func_0x00010a0dd4c0(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110c3ec18;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110c3ecb8;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  if (*(long *)(param_1 + 0x90) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x30);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a0dd8c8; end: 10a0dd8cb;  */

void FUN_10a0dd8c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0dd8cc; end: 10a0dd9e7;  */

long FUN_10a0dd8cc(long param_1)

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



/* Entry: 10a0dd9e8; end: 10a0dd9f7;  */

void FUN_10a0dd9e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba1ca8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0dd9f8; end: 10a0dda17;  */

void FUN_10a0dd9f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba1ca8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


