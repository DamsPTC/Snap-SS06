/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a9f8270; end: 10a9f82df;  */

void FUN_10a9f8270(long param_1,undefined8 *param_2)

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



/* Entry: 10a9f82e0; end: 10a9f84db;  */

void FUN_10a9f82e0(code **param_1,code **param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  code *pcVar6;
  code *pcVar7;
  code **ppcVar8;
  code **ppcVar9;
  long lVar10;
  long *plVar11;
  code **unaff_x21;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  int aiStack_110 [2];
  undefined8 *puStack_108;
  undefined8 **ppuStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  int **ppiStack_e8;
  int *piStack_e0;
  undefined8 uStack_d8;
  code **ppcStack_d0;
  code **ppcStack_c8;
  code **ppcStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code **ppcStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar5 = param_1;
  ppcVar8 = param_2;
  FUN_10a688b40();
  if (ppcVar5 == (code **)0x0) {
    ppcVar9 = (code **)0x0;
    pcVar6 = (code *)0x0;
    if (ppcVar8 != (code **)0x0) {
      pcStack_98 = param_1[1];
      pcStack_a0 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar6 = param_1[1] + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
          if (bVar3) {
            *(long *)pcVar6 = *(long *)pcVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_90 = (code *)0x0;
      pcStack_88 = (code *)0x0;
      uStack_80 = 0;
      FUN_10a05151c(&pcStack_90,*param_2,param_2[1],(long)param_2[1] - (long)*param_2);
      pcStack_78 = FUN_10a9f86a8;
      ppuStack_70 = &PTR_FUN_110c37660;
      param_2 = (code **)0x28;
      __Znwm();
      param_2[1] = pcStack_98;
      *param_2 = pcStack_a0;
      pcStack_a0 = (code *)0x0;
      pcStack_98 = (code *)0x0;
      param_2[3] = (code *)0x0;
      param_2[4] = (code *)0x0;
      param_2[2] = (code *)0x0;
      FUN_10a05151c();
      unaff_x21 = &pcStack_78;
      ppcVar9 = &pcStack_78;
      ppcStack_68 = param_2;
      FUN_10a4634ec(ppcVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
      pcVar6 = pcStack_90;
      if (pcStack_90 != (code *)0x0) {
        pcStack_88 = pcStack_90;
        __ZdlPv();
      }
      pcVar7 = pcStack_98;
      if (pcStack_98 != (code *)0x0) {
        pcVar1 = pcStack_98 + 8;
        do {
          lVar10 = *(long *)pcVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar3) {
            *(long *)pcVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*(long *)pcStack_98 + 0x10))(pcStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pcVar6 = pcVar7;
        }
      }
    }
  }
  else {
    *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
    pcVar6 = *param_1;
    ppcVar9 = param_2;
    FUN_10a9f84dc();
    iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
    *(int *)((long)ppcVar5 + 4) = iVar4;
    unaff_x21 = ppcVar5;
    if (iVar4 == 0) {
      *(undefined4 *)ppcVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x21 + 1);
  FUN_10a9f8678(&pcStack_a0);
  pcVar7 = pcVar6;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a9f84dc;
  ppcStack_d0 = param_1;
  ppcStack_c8 = unaff_x21;
  ppcStack_c0 = param_2;
  pcStack_b8 = pcVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&ppuStack_100,pcVar7 + 8,*(undefined8 *)pcVar7);
  func_0x000109884820(&puStack_128,&ppuStack_100,*(undefined8 *)pcVar7);
  if (ppuStack_100 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_100)();
  }
  (**(code **)(**(long **)pcVar7 + 0x30))(&puStack_130);
  plVar11 = *(long **)pcVar7;
  FUN_10a4c24b8(aiStack_110,plVar11,*ppcVar9,(long)ppcVar9[1] - (long)*ppcVar9);
  uStack_d8 = 1;
  piStack_e0 = aiStack_110;
  (**(code **)(*plVar11 + 0x58))(plVar11);
  ppuStack_100 = &puStack_128;
  ppiStack_e8 = &piStack_e0;
  plStack_f8 = plVar11;
  puStack_f0 = (undefined1 *)&puStack_130;
  func_0x0001098960c0(aiStack_120);
  if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
    (**(code **)*puStack_118)();
  }
  if ((3 < aiStack_110[0]) && (puStack_108 != (undefined8 *)0x0)) {
    (**(code **)*puStack_108)();
  }
  if (puStack_130 != (undefined8 *)0x0) {
    (**(code **)*puStack_130)();
  }
  if (puStack_128 != (undefined8 *)0x0) {
    (**(code **)*puStack_128)();
  }
  return;
}



/* Entry: 10a9f84dc; end: 10a9f8677;  */

void FUN_10a9f84dc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  FUN_10a4c24b8(aiStack_70,plVar1,*param_2,param_2[1] - *param_2);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9f8678; end: 10a9f86a7;  */

long FUN_10a9f8678(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
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



/* Entry: 10a9f86a8; end: 10a9f86b3;  */

void FUN_10a9f86a8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)*puVar2;
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar3 = (long *)*puVar1;
  FUN_10a4c24b8(aiStack_70,plVar3,puVar2[2],puVar2[3] - puVar2[2]);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar3 + 0x58))(plVar3);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar3;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9f86b4; end: 10a9f86f7;  */

void FUN_10a9f86b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x10) != 0) {
      *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x10);
      __ZdlPv();
    }
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a9f86f8; end: 10a9f870f;  */

void FUN_10a9f86f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a9f8710; end: 10a9f8773;  */

float * FUN_10a9f8710(float param_1,float param_2,float param_3,float *param_4)

{
  undefined1 auStack_28 [8];
  
  if (((*param_4 != param_1) || (param_4[1] != param_2)) || (param_4[2] != param_3)) {
    *param_4 = param_1;
    param_4[1] = param_2;
    param_4[2] = param_3;
    func_0x00010a1bd170(auStack_28);
    func_0x00010a350c24(param_4);
  }
  return param_4;
}



/* Entry: 10a9f8774; end: 10a9f8807;  */

undefined8 * FUN_10a9f8774(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    do {
      bVar3 = *(byte *)((long)param_1 + 0x17);
      uVar2 = param_1[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        puVar5 = (undefined8 *)*param_1;
        if (-1 < (char)bVar3) {
          puVar5 = param_1;
        }
        _memcmp(puVar5,puVar1,uVar4);
        if ((int)puVar5 == 0) {
          return param_1;
        }
      }
      param_1 = param_1 + 5;
      puVar5 = param_2;
    } while (param_1 != param_2);
  }
  return puVar5;
}



/* Entry: 10a9f8808; end: 10a9f885f;  */

long FUN_10a9f8808(long param_1)

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



/* Entry: 10a9f8860; end: 10a9f887b;  */

void FUN_10a9f8860(void)

{
  return;
}



/* Entry: 10a9f887c; end: 10a9f888f;  */

void FUN_10a9f887c(undefined8 param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  char cVar4;
  code *pcVar5;
  undefined8 **ppuVar6;
  char **ppcVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  ushort uVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  long *plVar16;
  long unaff_x20;
  undefined8 *puVar17;
  long lStack_130;
  undefined8 **ppuStack_128;
  char acStack_120 [8];
  long lStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 **ppuStack_d0;
  char *pcStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  plVar16 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_128 = (undefined8 **)plVar16[1];
  lVar13 = *plVar16;
  *plVar16 = 0;
  plVar16[1] = 0;
  ppuVar6 = *(undefined8 ***)(param_2 + 0x18);
  lStack_130 = lVar13;
  if ((ppuVar6 == (undefined8 **)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), unaff_x20 = param_2, ppuStack_d0 = ppuVar6,
     ppuVar6 == (undefined8 **)0x0)) goto LAB_10a9f8b90;
  unaff_x20 = *(long *)(param_2 + 0x10);
  lStack_d8 = unaff_x20;
  if (unaff_x20 != 0) {
    puStack_f0 = (undefined8 *)0x0;
    puStack_e8 = (undefined8 *)0x0;
    uStack_e0 = 0;
    __ZNSt3__15mutex4lockEv(unaff_x20 + 0x18);
    puVar15 = (ushort *)(unaff_x20 + 0x10);
    *puVar15 = 0x100;
    puVar17 = *(undefined8 **)(unaff_x20 + 0x58);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x68);
    puVar14 = *(undefined8 **)(unaff_x20 + 0x60);
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    puStack_f0 = puVar17;
    puStack_e8 = puVar14;
    if (*(int *)(lVar13 + 0x28) == 1) {
      if (*(char *)(lVar13 + 0x6f) < '\0') {
        func_0x000107c3192c(&uStack_110,*(undefined8 *)(lVar13 + 0x58),
                            *(undefined8 *)(lVar13 + 0x60));
      }
      else {
        uStack_108 = *(ulong *)(lVar13 + 0x60);
        uStack_110 = *(undefined8 *)(lVar13 + 0x58);
        uStack_100 = *(undefined8 *)(lVar13 + 0x68);
      }
      uVar12 = (uint)(char)uStack_100._7_1_;
      uVar3 = uStack_108;
      if (-1 < (int)uVar12) {
        uVar3 = (ulong)uStack_100._7_1_;
      }
      if (uVar3 != 0) {
        plStack_60 = (long *)0x0;
        func_0x0001094749d8(acStack_120,&uStack_110,alStack_78,1,0);
        if (plStack_60 == alStack_78) {
          lVar13 = 0x20;
LAB_10a9f89b8:
          (**(code **)(*plStack_60 + lVar13))();
        }
        else if (plStack_60 != (long *)0x0) {
          lVar13 = 0x28;
          goto LAB_10a9f89b8;
        }
        puStack_88 = &DAT_10f503e67;
        uStack_80 = 9;
        pcStack_a8 = acStack_120;
        lStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0x8000000000000000;
        if (acStack_120[0] == '\x01') {
          lVar13 = lStack_118;
          FUN_109d21b74(lStack_118,&puStack_88);
          lStack_a0 = lVar13;
LAB_10a9f8a38:
          lStack_c0 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0x8000000000000000;
          if (acStack_120[0] == '\x01') {
            lStack_c0 = lStack_118 + 8;
          }
          else {
            if (acStack_120[0] == '\x02') {
              uStack_b8 = *(undefined8 *)(lStack_118 + 8);
              goto LAB_10a9f8a60;
            }
            uStack_b0 = 1;
          }
        }
        else {
          if (acStack_120[0] != '\x02') {
            uStack_90 = 1;
            goto LAB_10a9f8a38;
          }
          uStack_b8 = *(undefined8 *)(lStack_118 + 8);
          uStack_98 = uStack_b8;
LAB_10a9f8a60:
          uStack_b0 = 0x8000000000000000;
          lStack_c0 = 0;
        }
        pcStack_c8 = acStack_120;
        ppcVar7 = &pcStack_a8;
        func_0x00010937c708(ppcVar7,&pcStack_c8);
        bVar2 = ((ulong)ppcVar7 & 1) == 0;
        if (bVar2) {
          func_0x00010937c560(&pcStack_a8);
          func_0x00010938cf68(&pcStack_a8);
          func_0x00010938d198();
          uVar11 = (ushort)(byte)pcStack_c8;
        }
        else {
          uVar11 = 0;
        }
        *puVar15 = uVar11 | (ushort)bVar2 << 8;
        func_0x000109380ffc(&lStack_118,acStack_120[0]);
        uVar12 = (uint)uStack_100._7_1_;
      }
      if ((uVar12 >> 7 & 1) != 0) {
        __ZdlPv(uStack_110);
      }
    }
    __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x18);
    for (; puVar17 != puVar14; puVar17 = puVar17 + 2) {
      if ((*(byte *)(unaff_x20 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9f8bfc);
        (*pcVar5)();
      }
      FUN_10a087a3c(*puVar17,puVar15);
    }
    plVar16 = *(long **)(unaff_x20 + 0x78);
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
    *(undefined8 *)(unaff_x20 + 0x78) = 0;
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 1;
      do {
        lVar13 = *plVar1;
        cVar4 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar2) {
          *plVar1 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    ppuVar6 = &puStack_f0;
    FUN_10a9f8c90();
    if (ppuStack_d0 == (undefined8 **)0x0) goto LAB_10a9f8b90;
  }
  ppuVar8 = ppuStack_d0;
  ppuVar9 = ppuStack_d0 + 1;
  do {
    puVar17 = *ppuVar9;
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
    if (bVar2) {
      *ppuVar9 = (undefined8 *)((long)puVar17 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (puVar17 == (undefined8 *)0x0) {
    (*(code *)(*ppuStack_d0)[2])(ppuStack_d0);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar6 = ppuVar8;
  }
LAB_10a9f8b90:
  ppuVar9 = ppuStack_128;
  if (ppuStack_128 != (undefined8 **)0x0) {
    ppuVar8 = ppuStack_128 + 1;
    do {
      puVar17 = *ppuVar8;
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar2) {
        *ppuVar8 = (undefined8 *)((long)puVar17 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar17 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_128)[2])(ppuStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar6 = ppuVar9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x18);
    FUN_10a9f8c90(&puStack_f0);
    FUN_10a9f8808(&lStack_d8);
    func_0x00010a083f00(&lStack_130);
    __Unwind_Resume();
    puVar17 = *ppuVar6;
    if (puVar17 == (undefined8 *)0x0) {
      return;
    }
    puVar10 = ppuVar6[1];
    puVar14 = puVar17;
    if (puVar10 != puVar17) {
      do {
        puVar10 = puVar10 + -2;
        FUN_10a352ff8();
      } while (puVar10 != puVar17);
      puVar14 = *ppuVar6;
    }
    ppuVar6[1] = puVar17;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar14);
    return;
  }
  return;
}



/* Entry: 10a9f8890; end: 10a9f8c8f;  */

void FUN_10a9f8890(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  char cVar4;
  code *pcVar5;
  undefined8 **ppuVar6;
  char **ppcVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  ushort uVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  long *plVar16;
  long unaff_x20;
  undefined8 *puVar17;
  long lStack_120;
  undefined8 **ppuStack_118;
  char acStack_110 [8];
  long lStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 **ppuStack_c0;
  char *pcStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_118 = (undefined8 **)param_1[1];
  lVar13 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  ppuVar6 = *(undefined8 ***)(param_2 + 0x18);
  lStack_120 = lVar13;
  if ((ppuVar6 == (undefined8 **)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), unaff_x20 = param_2, ppuStack_c0 = ppuVar6,
     ppuVar6 == (undefined8 **)0x0)) goto LAB_10a9f8b90;
  unaff_x20 = *(long *)(param_2 + 0x10);
  lStack_c8 = unaff_x20;
  if (unaff_x20 != 0) {
    puStack_e0 = (undefined8 *)0x0;
    puStack_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    __ZNSt3__15mutex4lockEv(unaff_x20 + 0x18);
    puVar15 = (ushort *)(unaff_x20 + 0x10);
    *puVar15 = 0x100;
    puVar17 = *(undefined8 **)(unaff_x20 + 0x58);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x68);
    puVar14 = *(undefined8 **)(unaff_x20 + 0x60);
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    puStack_e0 = puVar17;
    puStack_d8 = puVar14;
    if (*(int *)(lVar13 + 0x28) == 1) {
      if (*(char *)(lVar13 + 0x6f) < '\0') {
        func_0x000107c3192c(&uStack_100,*(undefined8 *)(lVar13 + 0x58),
                            *(undefined8 *)(lVar13 + 0x60));
      }
      else {
        uStack_f8 = *(ulong *)(lVar13 + 0x60);
        uStack_100 = *(undefined8 *)(lVar13 + 0x58);
        uStack_f0 = *(undefined8 *)(lVar13 + 0x68);
      }
      uVar12 = (uint)(char)uStack_f0._7_1_;
      uVar3 = uStack_f8;
      if (-1 < (int)uVar12) {
        uVar3 = (ulong)uStack_f0._7_1_;
      }
      if (uVar3 != 0) {
        plStack_50 = (long *)0x0;
        func_0x0001094749d8(acStack_110,&uStack_100,alStack_68,1,0);
        if (plStack_50 == alStack_68) {
          lVar13 = 0x20;
LAB_10a9f89b8:
          (**(code **)(*plStack_50 + lVar13))();
        }
        else if (plStack_50 != (long *)0x0) {
          lVar13 = 0x28;
          goto LAB_10a9f89b8;
        }
        puStack_78 = &DAT_10f503e67;
        uStack_70 = 9;
        pcStack_98 = acStack_110;
        lStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0x8000000000000000;
        if (acStack_110[0] == '\x01') {
          lVar13 = lStack_108;
          FUN_109d21b74(lStack_108,&puStack_78);
          lStack_90 = lVar13;
LAB_10a9f8a38:
          lStack_b0 = 0;
          uStack_a8 = 0;
          uStack_a0 = 0x8000000000000000;
          if (acStack_110[0] == '\x01') {
            lStack_b0 = lStack_108 + 8;
          }
          else {
            if (acStack_110[0] == '\x02') {
              uStack_a8 = *(undefined8 *)(lStack_108 + 8);
              goto LAB_10a9f8a60;
            }
            uStack_a0 = 1;
          }
        }
        else {
          if (acStack_110[0] != '\x02') {
            uStack_80 = 1;
            goto LAB_10a9f8a38;
          }
          uStack_a8 = *(undefined8 *)(lStack_108 + 8);
          uStack_88 = uStack_a8;
LAB_10a9f8a60:
          uStack_a0 = 0x8000000000000000;
          lStack_b0 = 0;
        }
        pcStack_b8 = acStack_110;
        ppcVar7 = &pcStack_98;
        func_0x00010937c708(ppcVar7,&pcStack_b8);
        bVar2 = ((ulong)ppcVar7 & 1) == 0;
        if (bVar2) {
          func_0x00010937c560(&pcStack_98);
          func_0x00010938cf68(&pcStack_98);
          func_0x00010938d198();
          uVar11 = (ushort)(byte)pcStack_b8;
        }
        else {
          uVar11 = 0;
        }
        *puVar15 = uVar11 | (ushort)bVar2 << 8;
        func_0x000109380ffc(&lStack_108,acStack_110[0]);
        uVar12 = (uint)uStack_f0._7_1_;
      }
      if ((uVar12 >> 7 & 1) != 0) {
        __ZdlPv(uStack_100);
      }
    }
    __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x18);
    for (; puVar17 != puVar14; puVar17 = puVar17 + 2) {
      if ((*(byte *)(unaff_x20 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9f8bfc);
        (*pcVar5)();
      }
      FUN_10a087a3c(*puVar17,puVar15);
    }
    plVar16 = *(long **)(unaff_x20 + 0x78);
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
    *(undefined8 *)(unaff_x20 + 0x78) = 0;
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 1;
      do {
        lVar13 = *plVar1;
        cVar4 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar2) {
          *plVar1 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    ppuVar6 = &puStack_e0;
    FUN_10a9f8c90();
    if (ppuStack_c0 == (undefined8 **)0x0) goto LAB_10a9f8b90;
  }
  ppuVar8 = ppuStack_c0;
  ppuVar9 = ppuStack_c0 + 1;
  do {
    puVar17 = *ppuVar9;
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
    if (bVar2) {
      *ppuVar9 = (undefined8 *)((long)puVar17 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (puVar17 == (undefined8 *)0x0) {
    (*(code *)(*ppuStack_c0)[2])(ppuStack_c0);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar6 = ppuVar8;
  }
LAB_10a9f8b90:
  ppuVar9 = ppuStack_118;
  if (ppuStack_118 != (undefined8 **)0x0) {
    ppuVar8 = ppuStack_118 + 1;
    do {
      puVar17 = *ppuVar8;
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar2) {
        *ppuVar8 = (undefined8 *)((long)puVar17 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar17 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_118)[2])(ppuStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar6 = ppuVar9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x18);
    FUN_10a9f8c90(&puStack_e0);
    FUN_10a9f8808(&lStack_c8);
    func_0x00010a083f00(&lStack_120);
    __Unwind_Resume();
    puVar17 = *ppuVar6;
    if (puVar17 == (undefined8 *)0x0) {
      return;
    }
    puVar10 = ppuVar6[1];
    puVar14 = puVar17;
    if (puVar10 != puVar17) {
      do {
        puVar10 = puVar10 + -2;
        FUN_10a352ff8();
      } while (puVar10 != puVar17);
      puVar14 = *ppuVar6;
    }
    ppuVar6[1] = puVar17;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar14);
    return;
  }
  return;
}



/* Entry: 10a9f8c90; end: 10a9f8ceb;  */

void FUN_10a9f8c90(long *param_1)

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
        FUN_10a352ff8();
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



/* Entry: 10a9f8cec; end: 10a9f8d4b;  */

void FUN_10a9f8cec(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a9f8d4c; end: 10a9f8dbf;  */

undefined8 * FUN_10a9f8d4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[4] = param_3[1];
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



/* Entry: 10a9f8dc0; end: 10a9f8e2f;  */

void FUN_10a9f8dc0(long *param_1)

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
        func_0x00010aa099d4();
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



/* Entry: 10a9f8e30; end: 10a9f8e43;  */

void FUN_10a9f8e30(void)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3c == 0) {
    __Znwm((long)puVar1 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar2 = *(long **)(puVar1 + 0x48);
  FUN_10a9f8ea8();
                    /* WARNING: Could not recover jumptable at 0x00010a9f8ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0);
  return;
}



/* Entry: 10a9f8e44; end: 10a9f8ea7;  */

void FUN_10a9f8e44(ulong param_1)

{
  long *plVar1;
  
  if (param_1 >> 0x3c == 0) {
    __Znwm(param_1 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar1 = *(long **)(param_1 + 0x48);
  FUN_10a9f8ea8();
                    /* WARNING: Could not recover jumptable at 0x00010a9f8ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a9f8ea8; end: 10a9f8ff7;  */

void FUN_10a9f8ea8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9f8fac);
    (*pcVar4)();
  }
  lVar6 = param_1[8];
  param_1[8] = 0;
  lStack_50 = lVar6;
  FUN_10a09d9a0(auStack_48,param_1,0);
  FUN_10a1775dc(param_1 + 3,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a9f8f40;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a9f8f40:
      if (*(char *)(param_1 + 7) == '\x01') {
        if (*(char *)((long)param_1 + 0x2f) < '\0') {
          __ZdlPv(param_1[3]);
        }
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          __ZdlPv(*param_1);
        }
        *(undefined1 *)(param_1 + 7) = 0;
      }
      lStack_50 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_50,lVar6), lStack_50 != 0)) {
        func_0x0001092b4274(&lStack_50);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a9f8ff8; end: 10a9f91ef;  */

undefined8 * FUN_10a9f8ff8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c376c0;
  if (param_1[0x1c] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    if (*(char *)((long)param_1 + 0xcf) < '\0') {
      __ZdlPv(param_1[0x17]);
    }
    if (*(char *)((long)param_1 + 0xb7) < '\0') {
      __ZdlPv(param_1[0x14]);
    }
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a9f91f0; end: 10a9f9203;  */

void FUN_10a9f91f0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a35da9c();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a9f9204; end: 10a9f92eb;  */

void FUN_10a9f9204(long *param_1)

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
        func_0x00010a35da9c();
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



/* Entry: 10a9f92ec; end: 10a9f94bf;  */

long FUN_10a9f92ec(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = param_2;
  func_0x00010a9f93c8();
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = uVar6 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar5 <= uVar2) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar2 / uVar5;
        }
        uVar7 = uVar2 - uVar7 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar3[1];
        if (uVar4 == uVar2) {
          uVar4 = (ulong)(plVar3 + 2);
          FUN_10a9f94c0(uVar4,param_2);
          if ((uVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar4 = uVar4 & uVar6;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a9f94c0; end: 10a9f9537;  */

int * FUN_10a9f94c0(int *param_1,int *param_2)

{
  undefined *puStack_18;
  
  if ((((((char)param_1[8] == (char)param_2[8]) &&
        (*(long *)(param_1 + 10) == *(long *)(param_2 + 10))) && (param_1[0xc] == param_2[0xc])) &&
      ((ABS((float)param_1[0xd] - (float)param_2[0xd]) < 1e-06 &&
       ((char)param_1[0xe] == (char)param_2[0xe])))) &&
     (*(char *)((long)param_1 + 0x39) == *(char *)((long)param_2 + 0x39))) {
    if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
      puStack_18 = &UNK_10e49e72c;
      param_1 = param_1 + 2;
      FUN_10a20651c(param_1,param_2 + 2,&puStack_18);
      return param_1;
    }
    return (int *)0x0;
  }
  return (int *)0x0;
}



/* Entry: 10a9f9538; end: 10a9f967f;  */

void FUN_10a9f9538(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a9f9580(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a9f9680; end: 10a9f9697;  */

void FUN_10a9f9680(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if (*param_2 == 0) {
    return;
  }
  plVar3 = *(long **)(*param_1 + 0x18);
  plVar5 = (long *)plVar3[1];
  if (plVar5 < (long *)plVar3[2]) {
    plVar12 = plVar5 + 1;
    *plVar5 = *param_2;
  }
  else {
    lVar11 = (long)plVar5 - *plVar3;
    uVar1 = (lVar11 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      plVar5 = param_2;
      FUN_10a9f9828();
      pcStack_38 = FUN_10a9f9828;
      puVar10 = (undefined8 *)&DAT_10f62a4d8;
      puStack_40 = &stack0xfffffffffffffff0;
      FUN_109ffde64();
      pcStack_48 = FUN_10a9f983c;
      plStack_60 = param_2;
      plStack_58 = plVar3;
      if ((ulong)plVar5 >> 0x3d == 0) {
        puStack_50 = (undefined1 *)&puStack_40;
        __Znwm((long)plVar5 << 3);
        return;
      }
      puStack_50 = (undefined1 *)&puStack_40;
      func_0x000109ffded8();
      uStack_68 = 0x10a9f9870;
      lVar11 = *plVar5;
      if (lVar11 != 0) {
        puVar10 = (undefined8 *)*puVar10;
        uStack_88 = *(ulong *)(lVar11 + 0x60);
        lStack_90 = *(long *)(lVar11 + 0x58);
        if (-1 < (char)*(byte *)(lVar11 + 0x6f)) {
          uStack_88 = (ulong)*(byte *)(lVar11 + 0x6f);
          lStack_90 = lVar11 + 0x58;
        }
        plVar4 = (long *)puVar10[1];
        puVar8 = (undefined8 *)puVar10[2];
        plStack_80 = param_2;
        plStack_78 = plVar3;
        ppuStack_70 = &puStack_50;
        if ((*(byte *)(plVar4 + 3) & 1) == 0) {
          FUN_10a04f808();
          puVar10 = (undefined8 *)*plVar5;
          if (puVar10 != (undefined8 *)0x0) {
            puVar8 = (undefined8 *)*puVar8;
            plVar5 = (long *)puVar8[1];
            if ((*(byte *)(plVar5 + 3) & 1) == 0) {
              FUN_10a04f808();
              plVar5 = (long *)*plVar5;
              if (plVar5 != (long *)0x0) {
                puVar10 = (undefined8 *)*puVar10;
                lVar11 = puVar10[1];
                if ((*(byte *)(lVar11 + 0x18) & 1) == 0) {
                  FUN_10a04f808();
                  lVar9 = 8;
                  __Znwm();
                  *plVar5 = lVar9;
                  plVar5[1] = lVar9;
                  plVar5[2] = lVar9 + 8;
                  if (lVar11 != param_3) {
                    lVar2 = ((param_3 - lVar11) - 8U & 0xfffffffffffffff8) + 8;
                    _memcpy(lVar9,lVar11,lVar2);
                    lVar9 = lVar9 + lVar2;
                  }
                  plVar5[1] = lVar9;
                  return;
                }
                func_0x00010ab1bedc();
                *(long **)*puVar10 = plVar5;
              }
              return;
            }
            func_0x00010ab1bfb8();
            *(undefined8 **)*puVar8 = puVar10;
          }
          return;
        }
        lStack_98 = (long)*(char *)((long)plVar4 + 0x17);
        lStack_a0 = (long)plVar4;
        if (lStack_98 < 0) {
          lStack_a0 = *plVar4;
          lStack_98 = plVar4[1];
        }
        FUN_10a15aadc(puVar8,&lStack_90,&lStack_a0);
        if ((int)puVar8 != 0) {
          *(long *)*puVar10 = *plVar5;
        }
      }
      return;
    }
    uVar6 = plVar3[2] - *plVar3;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    plVar4 = plVar3;
    FUN_10a9f983c();
    plVar5 = (long *)((long)plVar4 + lVar11);
    plVar12 = plVar5 + 1;
    *plVar5 = *param_2;
    lVar9 = (long)plVar5 - (plVar3[1] - *plVar3);
    _memcpy(lVar9);
    lVar11 = *plVar3;
    *plVar3 = lVar9;
    plVar3[1] = (long)plVar12;
    plVar3[2] = (long)(plVar4 + uVar7);
    if (lVar11 != 0) {
      __ZdlPv();
    }
  }
  plVar3[1] = (long)plVar12;
  return;
}



/* Entry: 10a9f9698; end: 10a9f9763;  */

void FUN_10a9f9698(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_28;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    param_1 = (undefined8 *)*param_1;
    uStack_28._0_5_ = CONCAT14(*(undefined1 *)param_1[1],*(undefined4 *)*param_1);
    lVar1 = lVar2 + 0x1b0;
    FUN_10ab2b1e0(lVar1,&uStack_28);
    if ((lVar2 + 0x1b8 != lVar1) && (uStack_28 = *(long *)(lVar1 + 0x28), uStack_28 != 0)) {
      FUN_10a9f9764(param_1[3],&uStack_28);
    }
  }
  return;
}



/* Entry: 10a9f9764; end: 10a9f9827;  */

void FUN_10a9f9764(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 < (long *)param_1[2]) {
    plVar11 = plVar4 + 1;
    *plVar4 = *param_2;
  }
  else {
    lVar10 = (long)plVar4 - *param_1;
    uVar1 = (lVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      plVar4 = param_2;
      FUN_10a9f9828();
      pcStack_38 = FUN_10a9f9828;
      puVar9 = (undefined8 *)&DAT_10f62a4d8;
      puStack_40 = &stack0xfffffffffffffff0;
      FUN_109ffde64();
      pcStack_48 = FUN_10a9f983c;
      plStack_60 = param_2;
      plStack_58 = param_1;
      if ((ulong)plVar4 >> 0x3d == 0) {
        puStack_50 = (undefined1 *)&puStack_40;
        __Znwm((long)plVar4 << 3);
        return;
      }
      puStack_50 = (undefined1 *)&puStack_40;
      func_0x000109ffded8();
      uStack_68 = 0x10a9f9870;
      lVar10 = *plVar4;
      if (lVar10 != 0) {
        puVar9 = (undefined8 *)*puVar9;
        uStack_88 = *(ulong *)(lVar10 + 0x60);
        lStack_90 = *(long *)(lVar10 + 0x58);
        if (-1 < (char)*(byte *)(lVar10 + 0x6f)) {
          uStack_88 = (ulong)*(byte *)(lVar10 + 0x6f);
          lStack_90 = lVar10 + 0x58;
        }
        plVar3 = (long *)puVar9[1];
        puVar7 = (undefined8 *)puVar9[2];
        plStack_80 = param_2;
        plStack_78 = param_1;
        ppuStack_70 = &puStack_50;
        if ((*(byte *)(plVar3 + 3) & 1) == 0) {
          FUN_10a04f808();
          puVar9 = (undefined8 *)*plVar4;
          if (puVar9 != (undefined8 *)0x0) {
            puVar7 = (undefined8 *)*puVar7;
            plVar4 = (long *)puVar7[1];
            if ((*(byte *)(plVar4 + 3) & 1) == 0) {
              FUN_10a04f808();
              plVar4 = (long *)*plVar4;
              if (plVar4 != (long *)0x0) {
                puVar9 = (undefined8 *)*puVar9;
                lVar10 = puVar9[1];
                if ((*(byte *)(lVar10 + 0x18) & 1) == 0) {
                  FUN_10a04f808();
                  lVar8 = 8;
                  __Znwm();
                  *plVar4 = lVar8;
                  plVar4[1] = lVar8;
                  plVar4[2] = lVar8 + 8;
                  if (lVar10 != param_3) {
                    lVar2 = ((param_3 - lVar10) - 8U & 0xfffffffffffffff8) + 8;
                    _memcpy(lVar8,lVar10,lVar2);
                    lVar8 = lVar8 + lVar2;
                  }
                  plVar4[1] = lVar8;
                  return;
                }
                func_0x00010ab1bedc();
                *(long **)*puVar9 = plVar4;
              }
              return;
            }
            func_0x00010ab1bfb8();
            *(undefined8 **)*puVar7 = puVar9;
          }
          return;
        }
        lStack_98 = (long)*(char *)((long)plVar3 + 0x17);
        lStack_a0 = (long)plVar3;
        if (lStack_98 < 0) {
          lStack_a0 = *plVar3;
          lStack_98 = plVar3[1];
        }
        FUN_10a15aadc(puVar7,&lStack_90,&lStack_a0);
        if ((int)puVar7 != 0) {
          *(long *)*puVar9 = *plVar4;
        }
      }
      return;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a9f983c();
    plVar4 = (long *)((long)plVar3 + lVar10);
    plVar11 = plVar4 + 1;
    *plVar4 = *param_2;
    lVar8 = (long)plVar4 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar10 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)plVar11;
    param_1[2] = (long)(plVar3 + uVar6);
    if (lVar10 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar11;
  return;
}



/* Entry: 10a9f9828; end: 10a9f983b;  */

void FUN_10a9f9828(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  ulong uStack_58;
  
  puVar6 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar4 = *param_2;
  if (lVar4 != 0) {
    puVar6 = (undefined8 *)*puVar6;
    uStack_58 = *(ulong *)(lVar4 + 0x60);
    lStack_60 = *(long *)(lVar4 + 0x58);
    if (-1 < (char)*(byte *)(lVar4 + 0x6f)) {
      uStack_58 = (ulong)*(byte *)(lVar4 + 0x6f);
      lStack_60 = lVar4 + 0x58;
    }
    plVar3 = (long *)puVar6[1];
    puVar5 = (undefined8 *)puVar6[2];
    if ((*(byte *)(plVar3 + 3) & 1) == 0) {
      FUN_10a04f808();
      puVar6 = (undefined8 *)*param_2;
      if (puVar6 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar5;
        plVar3 = (long *)puVar5[1];
        if ((*(byte *)(plVar3 + 3) & 1) == 0) {
          FUN_10a04f808();
          plVar3 = (long *)*plVar3;
          if (plVar3 != (long *)0x0) {
            puVar6 = (undefined8 *)*puVar6;
            lVar4 = puVar6[1];
            if ((*(byte *)(lVar4 + 0x18) & 1) == 0) {
              FUN_10a04f808();
              lVar2 = 8;
              __Znwm();
              *plVar3 = lVar2;
              plVar3[1] = lVar2;
              plVar3[2] = lVar2 + 8;
              if (lVar4 != param_3) {
                lVar1 = ((param_3 - lVar4) - 8U & 0xfffffffffffffff8) + 8;
                _memcpy(lVar2,lVar4,lVar1);
                lVar2 = lVar2 + lVar1;
              }
              plVar3[1] = lVar2;
              return;
            }
            func_0x00010ab1bedc();
            *(long **)*puVar6 = plVar3;
          }
          return;
        }
        func_0x00010ab1bfb8();
        *(undefined8 **)*puVar5 = puVar6;
      }
      return;
    }
    lStack_68 = (long)*(char *)((long)plVar3 + 0x17);
    lStack_70 = (long)plVar3;
    if (lStack_68 < 0) {
      lStack_70 = *plVar3;
      lStack_68 = plVar3[1];
    }
    FUN_10a15aadc(puVar5,&lStack_60,&lStack_70);
    if ((int)puVar5 != 0) {
      *(long *)*puVar6 = *param_2;
    }
  }
  return;
}



/* Entry: 10a9f983c; end: 10a9f9983;  */

void FUN_10a9f983c(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  ulong uStack_48;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar5 = *param_2;
  if (lVar5 != 0) {
    param_1 = (undefined8 *)*param_1;
    uStack_48 = *(ulong *)(lVar5 + 0x60);
    lStack_50 = *(long *)(lVar5 + 0x58);
    if (-1 < (char)*(byte *)(lVar5 + 0x6f)) {
      uStack_48 = (ulong)*(byte *)(lVar5 + 0x6f);
      lStack_50 = lVar5 + 0x58;
    }
    plVar4 = (long *)param_1[1];
    puVar6 = (undefined8 *)param_1[2];
    if ((*(byte *)(plVar4 + 3) & 1) == 0) {
      FUN_10a04f808();
      puVar2 = (undefined8 *)*param_2;
      if (puVar2 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar6;
        plVar4 = (long *)puVar6[1];
        if ((*(byte *)(plVar4 + 3) & 1) == 0) {
          FUN_10a04f808();
          plVar4 = (long *)*plVar4;
          if (plVar4 != (long *)0x0) {
            puVar2 = (undefined8 *)*puVar2;
            lVar5 = puVar2[1];
            if ((*(byte *)(lVar5 + 0x18) & 1) == 0) {
              FUN_10a04f808();
              lVar3 = 8;
              __Znwm();
              *plVar4 = lVar3;
              plVar4[1] = lVar3;
              plVar4[2] = lVar3 + 8;
              if (lVar5 != param_3) {
                lVar1 = ((param_3 - lVar5) - 8U & 0xfffffffffffffff8) + 8;
                _memcpy(lVar3,lVar5,lVar1);
                lVar3 = lVar3 + lVar1;
              }
              plVar4[1] = lVar3;
              return;
            }
            func_0x00010ab1bedc();
            *(long **)*puVar2 = plVar4;
          }
          return;
        }
        func_0x00010ab1bfb8();
        *(undefined8 **)*puVar6 = puVar2;
      }
      return;
    }
    lStack_58 = (long)*(char *)((long)plVar4 + 0x17);
    lStack_60 = (long)plVar4;
    if (lStack_58 < 0) {
      lStack_60 = *plVar4;
      lStack_58 = plVar4[1];
    }
    FUN_10a15aadc(puVar6,&lStack_50,&lStack_60);
    if ((int)puVar6 != 0) {
      *(long *)*param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10a9f9984; end: 10a9f9a13;  */

void FUN_10a9f9984(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 8;
  __Znwm();
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + 8;
  if (param_2 != param_3) {
    lVar1 = ((param_3 - param_2) - 8U & 0xfffffffffffffff8) + 8;
    _memcpy(lVar2,param_2,lVar1);
    lVar2 = lVar2 + lVar1;
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10a9f9a14; end: 10a9f9a17;  */

void FUN_10a9f9a14(void)

{
  return;
}



/* Entry: 10a9f9a18; end: 10a9f9b2f;  */

/* WARNING: Removing unreachable block (ram,0x00010a9f9b70) */

long * FUN_10a9f9a18(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)*param_1;
    param_1 = (long *)puVar4[4];
    uStack_28 = *(ulong *)(lVar2 + 0x1a0);
    uStack_30 = *(long *)(lVar2 + 0x198);
    if (-1 < (char)*(byte *)(lVar2 + 0x1af)) {
      uStack_28 = (ulong)*(byte *)(lVar2 + 0x1af);
      uStack_30 = lVar2 + 0x198;
    }
    puVar3 = (undefined8 *)puVar4[1];
    if ((*(byte *)(puVar3 + 3) & 1) == 0) {
      FUN_10a04f808();
      param_2 = (long *)*param_2;
      if (param_2 != (long *)0x0) {
        puVar4 = (undefined8 *)*param_1;
        if ((*(byte *)(puVar4[1] + 0x18) & 1) == 0) {
          FUN_10a04f808();
          plVar1 = (long *)&DAT_10f62a4d8;
          FUN_109ffde64();
          lVar2 = plVar1[2];
          while (lVar2 != plVar1[1]) {
            lVar2 = lVar2 + -0x20;
            plVar1[2] = lVar2;
          }
          if (*plVar1 != 0) {
            __ZdlPv();
          }
          return plVar1;
        }
        FUN_10ab1c090(param_2,puVar4[1],*(undefined4 *)puVar4[2],*(undefined1 *)puVar4[3]);
        *(long **)*puVar4 = param_2;
      }
      return param_2;
    }
    lStack_38 = (long)*(char *)((long)puVar3 + 0x17);
    puStack_40 = puVar3;
    if (lStack_38 < 0) {
      puStack_40 = (undefined8 *)*puVar3;
      lStack_38 = puVar3[1];
    }
    FUN_10a15aadc(param_1,&uStack_30,&puStack_40);
    if ((int)param_1 != 0) {
      lVar2 = *param_2;
      uStack_30._0_5_ = CONCAT14(*(undefined1 *)puVar4[3],*(undefined4 *)puVar4[2]);
      param_1 = (long *)(lVar2 + 0x1b0);
      FUN_10ab2b1e0(param_1,&uStack_30);
      if (((long *)(lVar2 + 0x1b8) == param_1) || (lVar2 = param_1[5], lVar2 == 0)) {
        lVar2 = 0;
      }
      *(long *)*puVar4 = lVar2;
    }
  }
  return param_1;
}



/* Entry: 10a9f9b30; end: 10a9f9b43;  */

/* WARNING: Removing unreachable block (ram,0x00010a9f9b70) */

long * FUN_10a9f9b30(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x20;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a9f9b44; end: 10a9f9ba3;  */

/* WARNING: Removing unreachable block (ram,0x00010a9f9b70) */

long * FUN_10a9f9b44(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x20;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a9f9ba4; end: 10a9f9bc7;  */

undefined1  [16] FUN_10a9f9ba4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = puVar2;
  return auVar3;
}



/* Entry: 10a9f9bc8; end: 10a9f9ed7;  */

void FUN_10a9f9bc8(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if (0x3ff < param_1[4]) {
    param_1[4] = param_1[4] - 0x400;
    puVar10 = (undefined8 *)param_1[1] + 1;
    uVar3 = *(undefined8 *)param_1[1];
LAB_10a9f9c00:
    param_1[1] = (ulong)puVar10;
    puVar10 = (undefined8 *)param_1[2];
    if (puVar10 == (undefined8 *)param_1[3]) {
      uVar15 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar15 || uVar5 - uVar15 == 0) {
        uVar8 = (long)((long)puVar10 - uVar15) >> 2;
        if ((long)puVar10 - uVar15 == 0) {
          uVar8 = 1;
        }
        uVar15 = uVar8;
        FUN_10a9f9fd4();
        puVar11 = (undefined8 *)(uVar15 + (uVar8 >> 2) * 8);
        lVar12 = param_1[2] - (long)param_1[1];
        puVar10 = puVar11;
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)((long)puVar11 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar11;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar8 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar11;
        param_1[2] = (ulong)puVar10;
        param_1[3] = uVar15 + uVar5 * 8;
        if (uVar8 != 0) {
          __ZdlPv(uVar8);
          puVar10 = (undefined8 *)param_1[2];
        }
      }
      else {
        lVar12 = (((long)(uVar5 - uVar15) >> 3) + 1) / 2;
        lVar13 = uVar5 + lVar12 * -8;
        lVar1 = (long)puVar10 - uVar5;
        if (lVar1 != 0) {
          _memmove(lVar13,uVar5,lVar1);
          uVar5 = param_1[1];
        }
        puVar10 = (undefined8 *)(lVar13 + lVar1);
        param_1[1] = uVar5 + lVar12 * -8;
        param_1[2] = (ulong)puVar10;
      }
    }
    *puVar10 = uVar3;
    param_1[2] = param_1[2] + 8;
    return;
  }
  puVar11 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar11 - (long)puVar10;
  if (uVar15 < (ulong)((long)puVar9 - (long)puVar7)) {
    uVar3 = 0x1000;
    __Znwm();
    if (puVar9 == puVar11) {
      if (puVar10 == puVar7) {
        uVar15 = (long)puVar9 - (long)puVar10 >> 2;
        if (puVar11 == puVar10) {
          uVar15 = 1;
        }
        lVar12 = uVar15 * 2;
        FUN_10a9f9fd4();
        puVar10 = (undefined8 *)(uVar15 + (lVar12 + 6U & 0xfffffffffffffff8));
        lVar12 = param_1[2] - (long)param_1[1];
        puVar11 = puVar10;
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)((long)puVar10 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar10;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar5 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)puVar11;
        param_1[3] = uVar15 + (long)param_2 * 8;
        if (uVar5 != 0) {
          __ZdlPv(uVar5);
          puVar10 = (undefined8 *)param_1[1];
        }
      }
      puVar10[-1] = uVar3;
      puVar10 = (undefined8 *)param_1[1];
      param_1[1] = (ulong)(puVar10 + -1);
      uVar3 = puVar10[-1];
      goto LAB_10a9f9c00;
    }
    *puVar11 = uVar3;
    param_1[2] = param_1[2] + 8;
  }
  else {
    puVar6 = (undefined8 *)((long)puVar9 - (long)puVar7 >> 2);
    if (puVar9 == puVar7) {
      puVar6 = (undefined8 *)0x1;
    }
    FUN_10a9f9fd4();
    uVar3 = 0x1000;
    puVar4 = param_2;
    __Znwm();
    puVar7 = (undefined8 *)((long)puVar6 + uVar15);
    puVar9 = puVar6 + (long)param_2;
    puVar2 = puVar6;
    if (uVar15 == (long)param_2 * 8) {
      if ((long)uVar15 < 1) {
        puVar7 = (undefined8 *)((long)puVar7 - (long)puVar6 >> 2);
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar2 = puVar7;
        FUN_10a9f9fd4();
        puVar7 = puVar2 + ((ulong)puVar7 >> 2);
        puVar9 = puVar2 + (long)puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        lVar12 = ((long)puVar7 - (long)puVar6 >> 3) + 1;
        puVar7 = puVar7 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar10 = puVar7 + 1;
    *puVar7 = uVar3;
    puVar11 = (undefined8 *)param_1[2];
    puVar6 = puVar2;
    if (puVar11 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar6;
        puVar14 = puVar7;
        if (puVar7 == puVar6) {
          if (puVar10 < puVar9) {
            lVar12 = ((long)puVar9 - (long)puVar10 >> 3) + 1;
            lVar1 = (long)puVar10 - (long)puVar6;
            lVar13 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar10 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar10 - lVar1);
            if (lVar13 != 0) {
              _memmove(puVar14,puVar7,lVar13);
              puVar4 = puVar7;
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar9 - (long)puVar6 >> 2);
            if ((long)puVar9 - (long)puVar6 == 0) {
              puVar14 = (undefined8 *)0x1;
            }
            puVar2 = puVar14;
            FUN_10a9f9fd4();
            puVar14 = (undefined8 *)((long)puVar2 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar14;
            if (lVar12 != 0) {
              puVar10 = (undefined8 *)((long)puVar14 + lVar12);
              puVar9 = puVar14;
              do {
                *puVar9 = *puVar7;
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (lVar12 != 0);
            }
            puVar9 = puVar2 + (long)puVar4;
            if (puVar6 != (undefined8 *)0x0) {
              __ZdlPv(puVar6);
            }
          }
        }
        puVar11 = puVar11 + -1;
        puVar7 = puVar14 + -1;
        *puVar7 = *puVar11;
        puVar6 = puVar2;
      } while (puVar11 != (undefined8 *)param_1[1]);
    }
    uVar15 = *param_1;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar10;
    param_1[3] = (ulong)puVar9;
    if (uVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a9f9ed8; end: 10a9f9fd3;  */

void FUN_10a9f9ed8(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10a9f9fd4();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a9f9fd4; end: 10a9fa08b;  */

void FUN_10a9f9fd4(long *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  cVar1 = (char)param_1[3];
  if (cVar1 == (char)param_2[3]) {
    if (cVar1 != '\0') {
      func_0x000107479ce4(param_1);
      func_0x000107471510();
      func_0x00010747a468();
      return;
    }
  }
  else if (cVar1 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
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
}



/* Entry: 10a9fa08c; end: 10a9fa09f;  */

void FUN_10a9fa08c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *puVar2 = *param_2;
  uVar3 = param_2[1];
  param_2[1] = 0;
  puVar2[1] = uVar3;
  puVar2[2] = param_2[2];
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_2 + 3);
  uVar9 = param_2[5];
  uVar3 = param_2[4];
  puVar2[6] = param_2[6];
  puVar2[5] = uVar9;
  puVar2[4] = uVar3;
  param_2[4] = 0;
  param_2[5] = 0;
  lVar4 = param_2[7];
  param_2[6] = 0;
  param_2[7] = 0;
  puVar2[7] = lVar4;
  lVar6 = param_2[9];
  uVar3 = param_2[8];
  puVar2[9] = param_2[9];
  puVar2[8] = uVar3;
  param_2[8] = 0;
  lVar5 = param_2[10];
  puVar2[10] = lVar5;
  *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  if (lVar5 != 0) {
    uVar7 = *(ulong *)(lVar6 + 8);
    uVar8 = puVar2[8];
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar7 = uVar8 - 1 & uVar7;
    }
    else if (uVar8 <= uVar7) {
      uVar1 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar7 / uVar8;
      }
      uVar7 = uVar7 - uVar1 * uVar8;
    }
    *(undefined8 **)(lVar4 + uVar7 * 8) = puVar2 + 9;
    param_2[9] = 0;
    param_2[10] = 0;
  }
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  uVar3 = param_2[0xc];
  puVar2[0xd] = param_2[0xd];
  puVar2[0xc] = uVar3;
  puVar2[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  uVar3 = param_2[0xf];
  puVar2[0x10] = param_2[0x10];
  puVar2[0xf] = uVar3;
  puVar2[0x11] = param_2[0x11];
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  uVar3 = param_2[0x13];
  puVar2[0x14] = param_2[0x14];
  puVar2[0x13] = uVar3;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  uVar3 = param_2[0x15];
  *(undefined1 *)(puVar2 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  puVar2[0x15] = uVar3;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x17] = 0;
  uVar3 = param_2[0x17];
  puVar2[0x18] = param_2[0x18];
  puVar2[0x17] = uVar3;
  puVar2[0x19] = param_2[0x19];
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  return;
}



/* Entry: 10a9fa0a0; end: 10a9fa1cb;  */

void FUN_10a9fa0a0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  uVar2 = param_2[1];
  param_2[1] = 0;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar8 = param_2[5];
  uVar2 = param_2[4];
  param_1[6] = param_2[6];
  param_1[5] = uVar8;
  param_1[4] = uVar2;
  param_2[4] = 0;
  param_2[5] = 0;
  lVar3 = param_2[7];
  param_2[6] = 0;
  param_2[7] = 0;
  param_1[7] = lVar3;
  lVar5 = param_2[9];
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_2[8] = 0;
  lVar4 = param_2[10];
  param_1[10] = lVar4;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  if (lVar4 != 0) {
    uVar6 = *(ulong *)(lVar5 + 8);
    uVar7 = param_1[8];
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar6 = uVar7 - 1 & uVar6;
    }
    else if (uVar7 <= uVar6) {
      uVar1 = 0;
      if (uVar7 != 0) {
        uVar1 = uVar6 / uVar7;
      }
      uVar6 = uVar6 - uVar1 * uVar7;
    }
    *(undefined8 **)(lVar3 + uVar6 * 8) = param_1 + 9;
    param_2[9] = 0;
    param_2[10] = 0;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar2 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar2;
  param_1[0x11] = param_2[0x11];
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xf] = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  uVar2 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar2;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  uVar2 = param_2[0x15];
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  param_1[0x15] = uVar2;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  uVar2 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar2;
  param_1[0x19] = param_2[0x19];
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  return;
}



/* Entry: 10a9fa1cc; end: 10a9fa1df;  */

undefined * FUN_10a9fa1cc(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (*(long *)(puVar1 + 0xb8) != 0) {
    *(long *)(puVar1 + 0xc0) = *(long *)(puVar1 + 0xb8);
    __ZdlPv();
  }
  FUN_10a1d37cc(puVar1 + 0x98);
  if (*(long *)(puVar1 + 0x78) != 0) {
    *(long *)(puVar1 + 0x80) = *(long *)(puVar1 + 0x78);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x60) != 0) {
    *(long *)(puVar1 + 0x68) = *(long *)(puVar1 + 0x60);
    __ZdlPv();
  }
  func_0x0001093a61d8(puVar1 + 0x38);
  if ((char)puVar1[0x37] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x20));
  }
  lVar2 = *(long *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = 0;
  if (lVar2 != 0) {
    (**(code **)(puVar1 + 0x10))();
  }
  return puVar1;
}



/* Entry: 10a9fa1e0; end: 10a9fa267;  */

long FUN_10a9fa1e0(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb8);
    __ZdlPv();
  }
  FUN_10a1d37cc(param_1 + 0x98);
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  func_0x0001093a61d8(param_1 + 0x38);
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x10))();
  }
  return param_1;
}



/* Entry: 10a9fa268; end: 10a9fa2c3;  */

void FUN_10a9fa268(long *param_1)

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
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a9fa2c4; end: 10a9fa38b;  */

long * FUN_10a9fa2c4(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_10a9fa334;
    lVar3 = 0x400;
  }
  param_1[4] = lVar3;
LAB_10a9fa334:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a9fa38c; end: 10a9fa3e7;  */

void FUN_10a9fa38c(long *param_1)

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
        lVar1 = lVar1 + -0xd0;
        FUN_10a9fa1e0();
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



/* Entry: 10a9fa3e8; end: 10a9fa457;  */

/* WARNING: Removing unreachable block (ram,0x00010a9fa420) */

void FUN_10a9fa3e8(long *param_1)

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
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a9fa458; end: 10a9fa46b;  */

undefined1  [16] FUN_10a9fa458(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (-1 < (long)param_2) {
    lVar2 = (long)param_2 << 1;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  *puVar1 = *param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a0ca588();
  puVar1[4] = param_2[4];
  FUN_10a9fa504(puVar1 + 5,param_3);
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10a9fa46c; end: 10a9fa49b;  */

undefined1  [16] FUN_10a9fa46c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (-1 < (long)param_2) {
    lVar1 = (long)param_2 << 1;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  *param_1 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  FUN_10a0ca588();
  param_1[4] = param_2[4];
  FUN_10a9fa504(param_1 + 5,param_3);
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a9fa49c; end: 10a9fa503;  */

undefined8 * FUN_10a9fa49c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  FUN_10a0ca588();
  param_1[4] = param_2[4];
  FUN_10a9fa504(param_1 + 5,param_3);
  return param_1;
}



/* Entry: 10a9fa504; end: 10a9fa5b7;  */

void FUN_10a9fa504(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_2[3] = 0;
  param_2[4] = 0;
  uVar2 = param_2[6];
  uVar1 = param_2[5];
  uVar4 = param_2[8];
  uVar3 = param_2[7];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar4;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar1 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar1;
    param_2[10] = 0;
    param_2[0xb] = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar1;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  uVar2 = param_2[0x10];
  uVar1 = param_2[0xf];
  uVar4 = param_2[0x12];
  uVar3 = param_2[0x11];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x12] = uVar4;
  param_1[0x11] = uVar3;
  param_1[0x10] = uVar2;
  param_1[0xf] = uVar1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  if (*(char *)(param_2 + 0x16) == '\x01') {
    uVar1 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar1;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  param_1[0x17] = param_2[0x17];
  return;
}



/* Entry: 10a9fa5b8; end: 10a9fa637;  */

void FUN_10a9fa5b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  *(undefined1 *)(param_1 + 4) = 1;
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == 0) {
    return;
  }
  plVar4 = (long *)0x10;
  __Znwm();
  lVar5 = *(long *)(param_1 + 0x10);
  *plVar4 = lVar7;
  plVar4[1] = lVar5;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 == 0) goto LAB_10a9fa610;
  }
  *(undefined1 *)(lVar7 + 0xaa) = 1;
LAB_10a9fa610:
  plVar6 = *(long **)(param_1 + 0x18);
  *(long **)(param_1 + 0x18) = plVar4;
  if (plVar6 == (long *)0x0) {
    return;
  }
  plVar4 = (long *)plVar6[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x68))();
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plVar6[1] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 10a9fa638; end: 10a9fa6eb;  */

void FUN_10a9fa638(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if ((long *)*param_1 != (long *)0x0) {
        (**(code **)(*(long *)*param_1 + 0x68))();
      }
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[1] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a9fa6ec; end: 10a9fac2b;  */

void FUN_10a9fa6ec(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010a9fa740(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10a9fac2c; end: 10a9fac97;  */

undefined8 * FUN_10a9fac2c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  FUN_10a9fac98(param_1 + 4,param_3);
  return param_1;
}



/* Entry: 10a9fac98; end: 10a9fad6f;  */

void FUN_10a9fac98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = param_2[4];
  param_2[4] = 0;
  param_1[4] = uVar1;
  param_1[5] = param_2[5];
  uVar2 = param_2[6];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[8] = uVar1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_1[0xb] = param_2[0xb];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xf] = 0;
  param_1[0x12] = uVar1;
  param_2[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  uVar1 = param_2[0x14];
  param_2[0x14] = 0;
  param_1[0x14] = uVar1;
  uVar2 = param_2[0x16];
  uVar1 = param_2[0x15];
  param_2[0x16] = 0;
  param_1[0x16] = uVar2;
  param_1[0x15] = uVar1;
  uVar2 = param_2[0x18];
  uVar1 = param_2[0x17];
  param_2[0x18] = 0;
  param_1[0x18] = uVar2;
  param_1[0x17] = uVar1;
  param_1[0x19] = param_2[0x19];
  return;
}



/* Entry: 10a9fad70; end: 10a9fae87;  */

long FUN_10a9fad70(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (lVar4 != 0) {
    (**(code **)(param_1 + 200))();
  }
  lVar4 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar4 != 0) {
    (**(code **)(param_1 + 0xb8))();
  }
  lVar4 = *(long *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (lVar4 != 0) {
    (**(code **)(param_1 + 0xa8))();
  }
  FUN_10aa10ef8(param_1 + 0x90);
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  lVar4 = *(long *)(param_1 + 0x60);
  if (lVar4 != 0) {
    lVar7 = *(long *)(param_1 + 0x68);
    lVar5 = lVar4;
    if (lVar7 != lVar4) {
      do {
        lVar7 = lVar7 + -0x30;
        func_0x00010a9fab24(lVar7);
      } while (lVar7 != lVar4);
      lVar5 = *(long *)(param_1 + 0x60);
    }
    *(long *)(param_1 + 0x68) = lVar4;
    __ZdlPv(lVar5);
  }
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 != 0) {
    lVar7 = *(long *)(param_1 + 0x50);
    lVar5 = lVar4;
    if (lVar7 != lVar4) {
      do {
        lVar7 = lVar7 + -0x40;
        func_0x00010a9faba8(lVar7);
      } while (lVar7 != lVar4);
      lVar5 = *(long *)(param_1 + 0x48);
    }
    *(long *)(param_1 + 0x50) = lVar4;
    __ZdlPv(lVar5);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar4 != 0) {
    (**(code **)(param_1 + 0x28))();
  }
  FUN_10a12cb8c(param_1 + 0x10);
  plVar6 = *(long **)(param_1 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return param_1;
}



/* Entry: 10a9fae88; end: 10a9faefb;  */

undefined8 * FUN_10a9fae88(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a9faefc(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 10a9faefc; end: 10a9faf3b;  */

void FUN_10a9faefc(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  int aiStack_f0 [2];
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 **ppuStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  undefined ***pppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar5 = (long)param_2 << 3;
    __Znwm();
    *param_1 = lVar5;
    param_1[1] = lVar5;
    param_1[2] = lVar5 + (long)param_2 * 8;
    return;
  }
  FUN_10a9faf3c();
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar6 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar6 >> 0x3d == 0) {
    __Znwm((long)puVar6 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar7 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  func_0x000109884c0c(&ppuStack_d0,puVar7 + 1,*puVar7);
  func_0x000109884820(&puStack_f8,&ppuStack_d0,*puVar7);
  if (ppuStack_d0 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_d0)();
  }
  (**(code **)(*(long *)*puVar7 + 0x30))(&puStack_100);
  plVar8 = (long *)*puVar7;
  plStack_c8 = (long *)param_2[1];
  ppuStack_d0 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_b0 = &PTR_DAT_110c020c0;
  func_0x000109899de4(&puStack_e0,plVar8,&ppuStack_d0,&ppuStack_b0,0,0);
  plVar1 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar2 = plStack_c8 + 1;
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
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_a8 = 1;
  ppuStack_b0 = &puStack_e0;
  (**(code **)(*plVar8 + 0x58))(plVar8);
  ppuStack_d0 = &puStack_f8;
  plStack_c8 = plVar8;
  puStack_c0 = (undefined1 *)&puStack_100;
  pppuStack_b8 = &ppuStack_b0;
  func_0x0001098960c0(aiStack_f0);
  if ((3 < aiStack_f0[0]) && (puStack_e8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_e8)();
  }
  if ((3 < (int)puStack_e0) && (puStack_d8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_d8)();
  }
  if (puStack_100 != (undefined8 *)0x0) {
    (**(code **)*puStack_100)();
  }
  if (puStack_f8 != (undefined8 *)0x0) {
    (**(code **)*puStack_f8)();
  }
  return;
}



/* Entry: 10a9faf3c; end: 10a9faf63;  */

void FUN_10a9faf3c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  int aiStack_d0 [2];
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 **ppuStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  undefined ***pppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar5 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar5 >> 0x3d == 0) {
    __Znwm((long)puVar5 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar6 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  func_0x000109884c0c(&ppuStack_b0,puVar6 + 1,*puVar6);
  func_0x000109884820(&puStack_d8,&ppuStack_b0,*puVar6);
  if (ppuStack_b0 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_b0)();
  }
  (**(code **)(*(long *)*puVar6 + 0x30))(&puStack_e0);
  plVar8 = (long *)*puVar6;
  plStack_a8 = (long *)param_2[1];
  ppuStack_b0 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_90 = &PTR_DAT_110c020c0;
  func_0x000109899de4(&puStack_c0,plVar8,&ppuStack_b0,&ppuStack_90,0,0);
  plVar1 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar2 = plStack_a8 + 1;
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
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_88 = 1;
  ppuStack_90 = &puStack_c0;
  (**(code **)(*plVar8 + 0x58))(plVar8);
  ppuStack_b0 = &puStack_d8;
  plStack_a8 = plVar8;
  puStack_a0 = (undefined1 *)&puStack_e0;
  pppuStack_98 = &ppuStack_90;
  func_0x0001098960c0(aiStack_d0);
  if ((3 < aiStack_d0[0]) && (puStack_c8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_c8)();
  }
  if ((3 < (int)puStack_c0) && (puStack_b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_b8)();
  }
  if (puStack_e0 != (undefined8 *)0x0) {
    (**(code **)*puStack_e0)();
  }
  if (puStack_d8 != (undefined8 *)0x0) {
    (**(code **)*puStack_d8)();
  }
  return;
}



/* Entry: 10a9faf64; end: 10a9faf97;  */

void FUN_10a9faf64(ulong param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 **ppuStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  undefined ***pppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar5 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  func_0x000109884c0c(&ppuStack_90,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_b8,&ppuStack_90,*puVar5);
  if (ppuStack_90 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_90)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_c0);
  plVar7 = (long *)*puVar5;
  plStack_88 = (long *)param_2[1];
  ppuStack_90 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_70 = &PTR_DAT_110c020c0;
  func_0x000109899de4(&puStack_a0,plVar7,&ppuStack_90,&ppuStack_70,0,0);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_68 = 1;
  ppuStack_70 = &puStack_a0;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_90 = &puStack_b8;
  plStack_88 = plVar7;
  puStack_80 = (undefined1 *)&puStack_c0;
  pppuStack_78 = &ppuStack_70;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  if ((3 < (int)puStack_a0) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a9faf98; end: 10a9fafab;  */

void FUN_10a9faf98(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined ***pppuStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  func_0x000109884c0c(&ppuStack_70,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_98,&ppuStack_70,*puVar5);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_a0);
  plVar7 = (long *)*puVar5;
  plStack_68 = (long *)param_2[1];
  ppuStack_70 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_50 = &PTR_DAT_110c020c0;
  func_0x000109899de4(&puStack_80,plVar7,&ppuStack_70,&ppuStack_50,0,0);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_48 = 1;
  ppuStack_50 = &puStack_80;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_70 = &puStack_98;
  plStack_68 = plVar7;
  puStack_60 = (undefined1 *)&puStack_a0;
  pppuStack_58 = &ppuStack_50;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a9fafac; end: 10a9fb1af;  */

void FUN_10a9fafac(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c020c0;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9fb1b0; end: 10a9fb1bf;  */

void FUN_10a9fb1b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c020c0;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9fb1c0; end: 10a9fb1e7;  */

long FUN_10a9fb1c0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a9fb268(param_1 + 0x18);
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



/* Entry: 10a9fb1e8; end: 10a9fb237;  */

void FUN_10a9fb1e8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c37778;
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



/* Entry: 10a9fb238; end: 10a9fb257;  */

void FUN_10a9fb238(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c377a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9fb258; end: 10a9fb267;  */

void FUN_10a9fb258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9fb260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9fb268; end: 10a9fb2bf;  */

long FUN_10a9fb268(long param_1)

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



/* Entry: 10a9fb2c0; end: 10a9fb4c3;  */

void FUN_10a9fb2c0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c020d8;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9fb4c4; end: 10a9fb4d3;  */

void FUN_10a9fb4c4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c020d8;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9fb4d4; end: 10a9fb4fb;  */

long FUN_10a9fb4d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a9fb57c(param_1 + 0x18);
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



/* Entry: 10a9fb4fc; end: 10a9fb54b;  */

void FUN_10a9fb4fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c377e0;
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



/* Entry: 10a9fb54c; end: 10a9fb56b;  */

void FUN_10a9fb54c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c37808;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9fb56c; end: 10a9fb57b;  */

void FUN_10a9fb56c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9fb574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9fb57c; end: 10a9fb5d3;  */

long FUN_10a9fb57c(long param_1)

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



/* Entry: 10a9fb5d4; end: 10a9fb5e7;  */

void FUN_10a9fb5d4(undefined8 param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  
  piVar2 = (int *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)piVar2 >> 0x3d == 0) {
    __Znwm((long)piVar2 << 3);
    return;
  }
  func_0x000109ffded8();
  if (param_2 != 0) {
    for (lVar4 = *(long *)(param_2 + 0x158); lVar4 != param_2 + 0x150; lVar4 = *(long *)(lVar4 + 8))
    {
      if (*(long *)(lVar4 + 0x10) != 0) {
        plVar3 = (long *)(*(long *)(lVar4 + 0x10) + 0xb0);
        (**(code **)(*plVar3 + 0x18))(plVar3,0xc2c0ac5e4c065340);
        if (plVar3 != (long *)0x0) {
          iVar1 = *piVar2;
          *piVar2 = iVar1 + 1;
          *(int *)(plVar3 + 0x7a) = iVar1;
          break;
        }
      }
    }
    for (lVar4 = *(long *)(param_2 + 0x198); lVar4 != param_2 + 400; lVar4 = *(long *)(lVar4 + 8)) {
      FUN_10a9fb61c(piVar2,*(undefined8 *)(lVar4 + 0x10));
    }
  }
  return;
}



/* Entry: 10a9fb5e8; end: 10a9fb61b;  */

void FUN_10a9fb5e8(int *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  if (param_2 != 0) {
    for (lVar3 = *(long *)(param_2 + 0x158); lVar3 != param_2 + 0x150; lVar3 = *(long *)(lVar3 + 8))
    {
      if (*(long *)(lVar3 + 0x10) != 0) {
        plVar2 = (long *)(*(long *)(lVar3 + 0x10) + 0xb0);
        (**(code **)(*plVar2 + 0x18))(plVar2,0xc2c0ac5e4c065340);
        if (plVar2 != (long *)0x0) {
          iVar1 = *param_1;
          *param_1 = iVar1 + 1;
          *(int *)(plVar2 + 0x7a) = iVar1;
          break;
        }
      }
    }
    for (lVar3 = *(long *)(param_2 + 0x198); lVar3 != param_2 + 400; lVar3 = *(long *)(lVar3 + 8)) {
      FUN_10a9fb61c(param_1,*(undefined8 *)(lVar3 + 0x10));
    }
  }
  return;
}



/* Entry: 10a9fb61c; end: 10a9fb6cf;  */

void FUN_10a9fb61c(int *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 != 0) {
    for (lVar3 = *(long *)(param_2 + 0x158); lVar3 != param_2 + 0x150; lVar3 = *(long *)(lVar3 + 8))
    {
      if (*(long *)(lVar3 + 0x10) != 0) {
        plVar2 = (long *)(*(long *)(lVar3 + 0x10) + 0xb0);
        (**(code **)(*plVar2 + 0x18))(plVar2,0xc2c0ac5e4c065340);
        if (plVar2 != (long *)0x0) {
          iVar1 = *param_1;
          *param_1 = iVar1 + 1;
          *(int *)(plVar2 + 0x7a) = iVar1;
          break;
        }
      }
    }
    for (lVar3 = *(long *)(param_2 + 0x198); lVar3 != param_2 + 400; lVar3 = *(long *)(lVar3 + 8)) {
      FUN_10a9fb61c(param_1,*(undefined8 *)(lVar3 + 0x10));
    }
  }
  return;
}



/* Entry: 10a9fb6d0; end: 10a9fb717;  */

long * FUN_10a9fb6d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a9fb718; end: 10a9fb84f;  */

void FUN_10a9fb718(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float afStack_78 [2];
  undefined8 uStack_70;
  char cStack_68;
  
  plVar6 = (long *)*param_1;
  while (plVar6 != param_1 + 1) {
    if (4 < *(uint *)(plVar6 + 4) || (1 << (ulong)(*(uint *)(plVar6 + 4) & 0x1f) & 0x1aU) == 0) {
      puVar8 = (undefined8 *)**(undefined8 **)(param_2 + 0x10);
      puVar4 = (undefined8 *)((long)plVar6 + 0x24);
      uVar9 = *(undefined4 *)puVar4;
      uVar10 = *(undefined4 *)(plVar6 + 5);
      lVar5 = puVar8[5];
      lVar3 = lVar5;
      FUN_10a9fb850(uVar9,uVar10);
      if (lVar3 == 0) {
        FUN_10a9fb924(uVar9,uVar10,lVar5,*puVar4);
        FUN_10a6014b4(afStack_78,puVar8[2],*(undefined8 *)puVar8[3],((undefined8 *)puVar8[3])[1],
                      puVar4,puVar8[4]);
        if ((cStack_68 == '\x01') && (afStack_78[0] < *(float *)puVar8[1])) {
          *(float *)puVar8[1] = afStack_78[0];
          *(undefined8 *)*puVar8 = uStack_70;
        }
      }
    }
    plVar1 = (long *)plVar6[1];
    plVar7 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar2 = (long *)*plVar6 != plVar7;
        plVar7 = plVar6;
      } while (bVar2);
    }
    else {
      do {
        plVar6 = plVar1;
        plVar1 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a9fb850; end: 10a9fb923;  */

long * FUN_10a9fb850(float param_1,float param_2,long *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = 0x9e3779b9;
  if (param_1 != 0.0) {
    uVar4 = (ulong)(uint)param_1 + 0x9e3779b9;
  }
  uVar5 = 0x9e3779b9;
  if (param_2 != 0.0) {
    uVar5 = (ulong)(uint)param_2 + 0x9e3779b9;
  }
  uVar3 = param_3[1];
  if (uVar3 != 0) {
    uVar4 = uVar5 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_3 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar4 == uVar8) {
          bVar2 = false;
          if ((*(float *)(plVar7 + 2) == param_1) &&
             (bVar2 = false, !NAN(*(float *)((long)plVar7 + 0x14)) && !NAN(param_2))) {
            bVar2 = *(float *)((long)plVar7 + 0x14) == param_2;
          }
          if (bVar2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a9fb924; end: 10a9fbcf3;  */

void FUN_10a9fb924(float param_1,float param_2,long *param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  
  uVar14 = 0x9e3779b9;
  if (param_1 != 0.0) {
    uVar14 = (ulong)(uint)param_1 + 0x9e3779b9;
  }
  uVar15 = 0x9e3779b9;
  if (param_2 != 0.0) {
    uVar15 = (ulong)(uint)param_2 + 0x9e3779b9;
  }
  uVar14 = uVar15 + uVar14 * 0x40 + (uVar14 >> 2) ^ uVar14;
  uVar15 = param_3[1];
  if (uVar15 != 0) {
    uVar6 = uVar15 - 1;
    if ((uVar15 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar14;
    }
    else {
      unaff_x24 = uVar14;
      if (uVar15 <= uVar14) {
        uVar10 = 0;
        if (uVar15 != 0) {
          uVar10 = uVar14 / uVar15;
        }
        unaff_x24 = uVar14 - uVar10 * uVar15;
      }
    }
    plVar8 = *(long **)(*param_3 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10a9fba04;
          uVar10 = plVar8[1];
          if (uVar10 != uVar14) break;
          bVar3 = false;
          if ((*(float *)(plVar8 + 2) == param_1) &&
             (bVar3 = false, !NAN(*(float *)((long)plVar8 + 0x14)) && !NAN(param_2))) {
            bVar3 = *(float *)((long)plVar8 + 0x14) == param_2;
          }
          if (bVar3) {
            return;
          }
        }
        if ((uVar15 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (uVar15 <= uVar10) {
          uVar7 = 0;
          if (uVar15 != 0) {
            uVar7 = uVar10 / uVar15;
          }
          uVar10 = uVar10 - uVar7 * uVar15;
        }
      } while (uVar10 == unaff_x24);
    }
  }
LAB_10a9fba04:
  plVar8 = (long *)0x18;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar14;
  plVar8[2] = param_4;
  if ((uVar15 == 0) || (*(float *)(param_3 + 4) * (float)uVar15 < (float)(param_3[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar15) {
      uVar6 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar6 = uVar6 | uVar15 << 1;
    uVar10 = (ulong)((float)(param_3[3] + 1) / *(float *)(param_3 + 4));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar15 = param_3[1];
    }
    if (uVar15 < uVar6) {
LAB_10a9fba9c:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9fbce0);
        (*pcVar2)();
      }
      lVar4 = uVar6 << 3;
      __Znwm();
      lVar5 = *param_3;
      *param_3 = lVar4;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar15 = 0;
      param_3[1] = uVar6;
      do {
        *(undefined8 *)(*param_3 + uVar15 * 8) = 0;
        uVar15 = uVar15 + 1;
      } while (uVar6 != uVar15);
      plVar9 = (long *)param_3[2];
      uVar15 = uVar6;
      if (plVar9 != (long *)0x0) {
        uVar10 = plVar9[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar6 <= uVar10) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar13 * uVar6;
        }
        *(long **)(*param_3 + uVar10 * 8) = param_3 + 2;
        plVar11 = (long *)*plVar9;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar6 & uVar7) == 0) {
            uVar13 = uVar13 & uVar7;
          }
          else if (uVar6 <= uVar13) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar13 / uVar6;
            }
            uVar13 = uVar13 - uVar1 * uVar6;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar10) {
            lVar4 = *param_3;
            if (*(long *)(lVar4 + uVar13 * 8) == 0) {
              *(long **)(lVar4 + uVar13 * 8) = plVar9;
              uVar10 = uVar13;
            }
            else {
              *plVar9 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar4 + uVar13 * 8);
              **(long **)(lVar4 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar9;
            }
          }
          plVar9 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar6 < uVar15) {
      uVar10 = (ulong)((float)(ulong)param_3[3] / *(float *)(param_3 + 4));
      if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar10) {
        uVar6 = uVar10;
      }
      if (uVar6 < uVar15) {
        if (uVar6 != 0) goto LAB_10a9fba9c;
        lVar4 = *param_3;
        *param_3 = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        param_3[1] = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = param_3[1];
      }
    }
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x24 = uVar15 - 1 & uVar14;
    }
    else {
      unaff_x24 = uVar14;
      if (uVar15 <= uVar14) {
        uVar6 = 0;
        if (uVar15 != 0) {
          uVar6 = uVar14 / uVar15;
        }
        unaff_x24 = uVar14 - uVar6 * uVar15;
      }
    }
  }
  lVar4 = *param_3;
  plVar9 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_3 + 2;
    *plVar8 = *plVar9;
    *plVar9 = (long)plVar8;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar9;
    if (*plVar8 == 0) goto LAB_10a9fbc7c;
    uVar14 = *(ulong *)(*plVar8 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar14 = uVar14 & uVar15 - 1;
    }
    else if (uVar15 <= uVar14) {
      uVar6 = 0;
      if (uVar15 != 0) {
        uVar6 = uVar14 / uVar15;
      }
      uVar14 = uVar14 - uVar6 * uVar15;
    }
    plVar9 = (long *)(*param_3 + uVar14 * 8);
  }
  else {
    *plVar8 = *plVar9;
  }
  *plVar9 = (long)plVar8;
LAB_10a9fbc7c:
  param_3[3] = param_3[3] + 1;
  return;
}



/* Entry: 10a9fbcf4; end: 10a9fbd27;  */

void FUN_10a9fbcf4(void)

{
  return;
}



/* Entry: 10a9fbd28; end: 10a9fbdf3;  */

void FUN_10a9fbd28(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uStack_60;
  float afStack_58 [2];
  undefined8 uStack_50;
  char cStack_48;
  
  if (2 < *(int *)(param_1 + 0x10) - 1U) {
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    uVar2 = *(ulong *)(param_1 + 0x14);
    lVar3 = puVar4[5];
    lVar1 = lVar3;
    uStack_60 = uVar2;
    FUN_10a9fb850(uVar2 & 0xffffffff,uVar2 >> 0x20);
    if (lVar1 == 0) {
      FUN_10a9fb924(uVar2 & 0xffffffff,uVar2 >> 0x20,lVar3,uVar2);
      FUN_10a6014b4(afStack_58,puVar4[2],*(undefined8 *)puVar4[3],((undefined8 *)puVar4[3])[1],
                    &uStack_60,puVar4[4]);
      if ((cStack_48 == '\x01') && (afStack_58[0] < *(float *)puVar4[1])) {
        *(float *)puVar4[1] = afStack_58[0];
        *(undefined8 *)*puVar4 = uStack_50;
      }
    }
  }
  return;
}



/* Entry: 10a9fbdf4; end: 10a9fbe27;  */

void FUN_10a9fbdf4(void)

{
  return;
}



/* Entry: 10a9fbe28; end: 10a9fc08b;  */

void FUN_10a9fbe28(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uStack_60;
  float afStack_58 [2];
  undefined8 uStack_50;
  char cStack_48;
  
  if (2 < *(int *)(param_1 + 0x10) - 1U) {
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    uVar2 = *(ulong *)(param_1 + 0x14);
    lVar3 = puVar4[5];
    lVar1 = lVar3;
    uStack_60 = uVar2;
    FUN_10a9fb850(uVar2 & 0xffffffff,uVar2 >> 0x20);
    if (lVar1 == 0) {
      FUN_10a9fb924(uVar2 & 0xffffffff,uVar2 >> 0x20,lVar3,uVar2);
      FUN_10a6014b4(afStack_58,puVar4[2],*(undefined8 *)puVar4[3],((undefined8 *)puVar4[3])[1],
                    &uStack_60,puVar4[4]);
      if ((cStack_48 == '\x01') && (afStack_58[0] < *(float *)puVar4[1])) {
        *(float *)puVar4[1] = afStack_58[0];
        *(undefined8 *)*puVar4 = uStack_50;
      }
    }
  }
  return;
}



/* Entry: 10a9fc08c; end: 10a9fc163;  */

void FUN_10a9fc08c(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_50;
  long *plStack_48;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_10a6014b4(auStack_38,*(undefined8 *)(param_2 + 0x18),**(undefined8 **)(param_2 + 0x20),
                (*(undefined8 **)(param_2 + 0x20))[1],param_1 + 0x14,0);
  if (cStack_28 == '\x01') {
    FUN_10a2d1b5c(&uStack_50,uStack_30);
    puVar5 = *(undefined8 **)(param_2 + 0x10);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar4 = puVar5[1];
    puVar5[1] = plStack_48;
    *puVar5 = uStack_50;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plStack_48 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_48 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 != 0) {
      return;
    }
    (**(code **)(*plStack_48 + 0x10))(plStack_48);
  }
  else {
    puVar5 = *(undefined8 **)(param_2 + 0x10);
    plStack_48 = (long *)puVar5[1];
    *puVar5 = 0;
    puVar5[1] = 0;
    if (plStack_48 == (long *)0x0) {
      return;
    }
  }
  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
  return;
}



/* Entry: 10a9fc164; end: 10a9fc1a7;  */

void FUN_10a9fc164(void)

{
  return;
}



/* Entry: 10a9fc1a8; end: 10a9fc1ef;  */

long * FUN_10a9fc1a8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a9fc1f0; end: 10a9fc283;  */

void FUN_10a9fc1f0(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  while (plVar3 != param_1 + 1) {
    if (*(int *)(plVar3 + 4) - 3U < 2) {
      func_0x0001077f9f4c();
    }
    else {
      func_0x000107426fd8(*(undefined8 *)(param_2 + 0x10),(long)plVar3 + 0x1c,(long)plVar3 + 0x1c);
    }
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a9fc284; end: 10a9fc2b7;  */

void FUN_10a9fc284(void)

{
  return;
}



/* Entry: 10a9fc2b8; end: 10a9fc4bb;  */

void FUN_10a9fc2b8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c020f0;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9fc4bc; end: 10a9fc4cb;  */

void FUN_10a9fc4bc(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c020f0;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9fc4cc; end: 10a9fc4f3;  */

long FUN_10a9fc4cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a9fc574(param_1 + 0x18);
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



/* Entry: 10a9fc4f4; end: 10a9fc543;  */

void FUN_10a9fc4f4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c378c8;
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



/* Entry: 10a9fc544; end: 10a9fc563;  */

void FUN_10a9fc544(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c378f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9fc564; end: 10a9fc573;  */

void FUN_10a9fc564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9fc56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9fc574; end: 10a9fc5cb;  */

long FUN_10a9fc574(long param_1)

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


