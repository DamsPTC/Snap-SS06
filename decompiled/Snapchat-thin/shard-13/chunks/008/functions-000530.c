/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad12ca8; end: 10ad12e03;  */

long FUN_10ad12ca8(long *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    lVar13 = 0;
    puVar14 = (undefined4 *)param_2[2];
    lVar19 = *param_3;
    lVar16 = param_3[2];
    puVar17 = *(undefined8 **)(param_4 + 0x10);
    lVar18 = *(long *)(param_4 + 0x28);
    lVar8 = lVar1;
    puVar6 = puVar17;
    lVar21 = lVar18;
    puVar15 = puVar14;
    do {
      for (; lVar8 != 0; lVar8 = lVar8 + -1) {
        if (lVar21 == 0) {
LAB_10ad12df0:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad12df4);
          (*pcVar7)();
        }
        uVar22 = *puVar14;
        *(undefined8 *)((long)puVar6 + 4) = *puVar6;
        *(undefined4 *)((long)puVar6 + 0xc) = *(undefined4 *)(puVar6 + 1);
        *(undefined4 *)puVar6 = uVar22;
        puVar6 = puVar6 + 2;
        lVar21 = lVar21 + -1;
        puVar14 = puVar14 + 1;
      }
      lVar8 = *param_1;
      *param_1 = lVar8 + 1;
      iVar3 = (int)param_1[0xe];
      iVar5 = 0;
      if ((long)*(int *)((long)param_1 + 0x74) != 0) {
        iVar5 = (int)((ulong)((lVar8 + 1) * (long)iVar3) /
                     (ulong)(long)*(int *)((long)param_1 + 0x74));
      }
      iVar9 = (int)param_1[1];
      if (iVar9 != iVar5) {
        pfVar10 = (float *)(lVar16 + lVar19 * 4 * lVar12);
        do {
          iVar9 = iVar9 + 1;
          if (lVar1 != 0) {
            iVar4 = 0;
            if (iVar3 != 0) {
              iVar4 = iVar9 / iVar3;
            }
            fVar23 = *(float *)(param_1 + 0xf) * (float)(iVar9 - iVar4 * iVar3);
            fVar23 = (float)(int)fVar23 - fVar23;
            pfVar11 = (float *)(puVar17 + 1);
            lVar8 = lVar18;
            pfVar20 = pfVar10;
            lVar21 = lVar1;
            do {
              if (lVar8 == 0) goto LAB_10ad12df0;
              fVar24 = pfVar11[-1];
              fVar25 = (pfVar11[-2] - *pfVar11) * 0.5;
              fVar26 = *pfVar11 - fVar24;
              fVar27 = fVar25 + (fVar24 - pfVar11[1]) * 0.5 + fVar26 * 2.0;
              *pfVar20 = fVar24 + fVar23 * (((fVar25 + fVar26 + fVar27) - fVar23 * fVar27) * fVar23
                                           - fVar25);
              lVar8 = lVar8 + -1;
              lVar21 = lVar21 + -1;
              pfVar11 = pfVar11 + 4;
              pfVar20 = pfVar20 + 1;
            } while (lVar21 != 0);
          }
          *(int *)(param_1 + 1) = iVar9;
          lVar12 = lVar12 + 1;
          pfVar10 = pfVar10 + lVar19;
        } while (iVar9 != iVar5);
      }
      lVar13 = lVar13 + 1;
      puVar14 = puVar15 + lVar1;
      lVar8 = lVar1;
      puVar6 = puVar17;
      lVar21 = lVar18;
      puVar15 = puVar14;
    } while (lVar13 != lVar2);
  }
  return lVar12 * lVar1;
}



/* Entry: 10ad12e04; end: 10ad12e4b;  */

void FUN_10ad12e04(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad12e4c; end: 10ad12f6b;  */

void FUN_10ad12e4c(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long lStack_50;
  code *pcStack_48;
  long *plStack_40;
  long lStack_38;
  
  lVar1 = param_2 + 0x10;
  plVar4 = *(long **)(param_2 + 0x20);
  lStack_38 = lVar1;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x18;
    __Znwm();
    *plVar4 = param_2;
    plVar4[2] = 0x10ad15574;
    pcStack_48 = FUN_10ad15514;
    plStack_40 = plVar4;
    (*(code *)**(undefined8 **)(param_2 + 0x10))(lVar1,&pcStack_48);
  }
  else {
    lStack_50 = 0;
    (**(code **)(*plVar4 + 0x28))(plVar4,0,&lStack_50);
    if (lStack_50 != 0) {
      func_0x0001092af97c(&lStack_50);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad12f54);
      (*pcVar2)();
    }
    plVar3 = (long *)0x20;
    __Znwm();
    *plVar3 = param_2;
    plVar3[2] = (long)FUN_10ad15568;
    plVar3[3] = (long)plVar4;
    pcStack_48 = FUN_10ad154e4;
    plStack_40 = plVar3;
    (*(code *)**(undefined8 **)(param_2 + 0x10))(lVar1,&pcStack_48);
    __ZNSt13exception_ptrD1Ev(&lStack_50);
  }
  lStack_50 = 0;
  __ZNSt13exception_ptrD1Ev(&lStack_50);
  FUN_109d1918c(param_1,lVar1);
  return;
}



/* Entry: 10ad12f6c; end: 10ad138ff;  */

long * FUN_10ad12f6c(long *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  long *plVar12;
  int *piVar13;
  undefined *puVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lStack_1f8;
  long *plStack_1f0;
  undefined1 uStack_1e1;
  undefined8 *puStack_1e0;
  undefined **ppuStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 *apuStack_c0 [7];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_1;
  FUN_109d1ba5c();
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  puStack_170 = (undefined8 *)&UNK_1053a6a3c;
  ppuStack_168 = &PTR_DAT_110ae9180;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  puStack_1b0 = &UNK_1053a6a3c;
  ppuStack_1a8 = &PTR_DAT_110ae9180;
  FUN_109d1b72c(&puStack_130,&UNK_10f6a4572,0xb,(int)plVar8[3],&puStack_170,&puStack_1b0,0);
  puStack_1e0 = (undefined8 *)0x68e0f066500;
  lStack_1f8 = 1;
  lStack_1b8 = 1;
  FUN_109d1d1f0(&lStack_1d0,&uStack_1e1,&puStack_130,&lStack_1f8,&lStack_1b8,&puStack_1e0);
  param_1[1] = lStack_1c8;
  *param_1 = lStack_1d0;
  (*(code *)*apuStack_c0[0])(apuStack_c0);
  (*(code *)*puStack_100)(&puStack_100);
  if (uStack_110._7_1_ < '\0') {
    __ZdlPv(ppuStack_120);
  }
  (*(code *)*ppuStack_1a8)(&ppuStack_1a8);
  (*(code *)*ppuStack_168)(&ppuStack_168);
  puStack_130 = (undefined *)*param_1;
  uStack_110 = param_1[1];
  if (uStack_110 != 0) {
    plVar8 = (long *)(uStack_110 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppuStack_128 = (undefined **)&UNK_109896774;
  ppuStack_120 = &PTR_DAT_110b17068;
  puStack_118 = puStack_130;
  func_0x000109d18d1c(param_1 + 2,&UNK_10f6a457e,0x10,&puStack_130);
  func_0x0001092ba41c(&puStack_130);
  plVar16 = param_1 + 0x1f;
  *plVar16 = (long)&PTR_DAT_110950c70;
  param_1[0x19] = 0xac440000ac44;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  plVar17 = param_1 + 0x1c;
  param_1[0x1d] = 0;
  *plVar17 = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1e] = (long)FUN_10ad166d4;
  param_1[0x426] = 0;
  param_1[0x428] = 0;
  param_1[0x427] = 0;
  param_1[0x429] = param_2;
  *(undefined1 *)(param_1 + 0x43d) = 0;
  param_1[0x43e] = 0;
  *(undefined4 *)((long)param_1 + 0x21f7) = 0;
  param_1[0x42a] = 0;
  param_1[0x42c] = 0;
  param_1[0x42b] = 0;
  *(undefined1 *)(param_1 + 0x42d) = 0;
  *(undefined4 *)((long)param_1 + 0x21fc) = 0x3a83126f;
  param_1[0x440] = 0x3f8000003a83126f;
  *(undefined4 *)((long)param_1 + 0x2217) = 0;
  param_1[0x442] = 0;
  param_1[0x441] = 0;
  *(undefined4 *)((long)param_1 + 0x221c) = 0x3f800000;
  lVar20 = NEON_fmov(0x3f800000,4);
  param_1[0x444] = lVar20;
  *(undefined1 *)(param_1 + 0x445) = 0;
  *(bool *)((long)param_1 + 0x2229) = 0x145 < *(int *)(*(long *)(param_2 + 0xa20) + 0x18);
  plVar8 = *(long **)(*(long *)(param_2 + 0x100) + 0x1c8);
  (**(code **)(*plVar8 + 0xf0))();
  plVar18 = (long *)plVar8[1];
  if (plVar18 == (long *)0x0) {
    lStack_1f8 = 0;
    plStack_1f0 = (long *)0x0;
  }
  else {
    lVar19 = *plVar8;
    plVar8 = plVar18 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lStack_1f8 = 0;
    plVar8 = plVar18;
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_1f0 = plVar8;
    if ((plVar8 != (long *)0x0) && (lStack_1f8 = lVar19, lVar19 != 0)) {
      puVar9 = (undefined8 *)0x4028;
      __Znwm();
      *puVar9 = &PTR_FUN_110c6e648;
      puVar10 = (undefined8 *)0x50;
      __Znwm();
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0x800;
      *puVar10 = 0x800;
      puVar9[1] = puVar10;
      *(undefined1 *)(puVar9 + 2) = 1;
      puVar9[0x803] = lVar20;
      *(undefined1 *)(puVar9 + 0x804) = 0;
      *(undefined4 *)((long)puVar9 + 0x14) = 0xac44;
      lStack_1b8 = 0;
      puVar14 = *(undefined **)(lVar19 + 0x78);
      ppuVar4 = *(undefined ***)(lVar19 + 0x80);
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar11 = ppuVar4 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar6) {
            *ppuVar11 = *ppuVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppuStack_120 = (undefined **)((ulong)ppuStack_120 & 0xffffffffffff0000);
      ppuVar11 = (undefined **)0x38;
      puStack_170 = puVar9;
      puStack_130 = puVar14;
      ppuStack_128 = ppuVar4;
      __Znwm();
      puStack_130 = (undefined *)0x0;
      ppuStack_128 = (undefined **)0x0;
      *ppuVar11 = (undefined *)&PTR_FUN_110c6e330;
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      ppuVar11[3] = (undefined *)puVar9;
      ppuVar11[4] = puVar14;
      ppuVar11[5] = (undefined *)ppuVar4;
      *(undefined2 *)(ppuVar11 + 6) = ppuStack_120._0_2_;
      *(undefined4 *)((long)ppuVar11 + 0x32) = 0;
      *(undefined2 *)((long)ppuVar11 + 0x36) = 0;
      piVar13 = *(int **)(lVar19 + 0x78);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar6) {
          *piVar13 = *piVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar1 = (undefined4 *)(*(long *)(lVar19 + 0x78) + 4);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar1 = (undefined4 *)(*(long *)(lVar19 + 0x78) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar4 = ppuVar11 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
          if (bVar6) {
            *ppuVar4 = *ppuVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar14 = *(undefined **)(lVar19 + 0x58);
      ppuVar4 = *(undefined ***)(lVar19 + 0x60);
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar2 = ppuVar4 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar6) {
            *ppuVar2 = *ppuVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lStack_1d0 = 0;
      lStack_1c8 = 0;
      puStack_1b0 = puVar14;
      ppuStack_1a8 = ppuVar4;
      ppuStack_168 = ppuVar11;
      __ZNSt3__15mutex4lockEv(puVar14);
      puVar9 = puStack_170;
      FUN_10ad18f24(puStack_170,lVar19 + 0x68);
      puStack_1e0 = puVar9;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar2 = ppuVar11 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar6) {
            *ppuVar2 = *ppuVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppuStack_1d8 = ppuVar11;
      FUN_10a2b7e7c(lVar19 + 0x18,&puStack_1e0,&puStack_1e0);
      if (ppuStack_1d8 != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      __ZNSt3__15mutex6unlockEv(puVar14);
      puVar10 = (undefined8 *)0x38;
      __Znwm();
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_FUN_110c6e390;
      puVar10[3] = puVar14;
      puVar10[4] = ppuVar4;
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar2 = ppuVar4 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar6) {
            *ppuVar2 = *ppuVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar10[5] = puVar9;
      puVar10[6] = ppuVar11;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar2 = ppuVar11 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar6) {
            *ppuVar2 = *ppuVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar2 = ppuVar4 + 1;
        do {
          puVar14 = *ppuVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar6) {
            *ppuVar2 = puVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar14 == (undefined *)0x0) {
          (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar4);
        }
      }
      if (ppuVar11 != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
      }
      ppuVar4 = ppuStack_168;
      if (ppuStack_168 != (undefined **)0x0) {
        ppuVar11 = ppuStack_168 + 1;
        do {
          puVar14 = *ppuVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar6) {
            *ppuVar11 = puVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar14 == (undefined *)0x0) {
          (**(code **)(*ppuStack_168 + 0x10))(ppuStack_168);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar4);
        }
      }
      lVar20 = lStack_1b8;
      if (lStack_1b8 != 0) {
        FUN_10ad14c08(lStack_1b8 + 8,0);
        __ZdlPv(lVar20);
      }
      param_1[0x427] = (long)(puVar10 + 3);
      plVar8 = (long *)param_1[0x428];
      param_1[0x428] = (long)puVar10;
      if (plVar8 != (long *)0x0) {
        plVar12 = plVar8 + 1;
        do {
          lVar20 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_1f0;
      if (plStack_1f0 != (long *)0x0) {
        plVar12 = plStack_1f0 + 1;
        do {
          lVar20 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = *(long **)(*(long *)(param_1[0x429] + 0x100) + 0x1c8);
      (**(code **)(*plVar8 + 0x98))();
      puStack_170 = (undefined8 *)*plVar8;
      ppuStack_168 = (undefined **)plVar8[1];
      if (ppuStack_168 != (undefined **)0x0) {
        ppuVar4 = ppuStack_168 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
          if (bVar6) {
            *ppuVar4 = *ppuVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      puStack_100 = (undefined8 *)0x0;
      puStack_118 = (undefined *)0x0;
      ppuStack_120 = (undefined **)0x0;
      puStack_130 = &UNK_1053a6a3c;
      ppuStack_128 = &PTR_DAT_110950c70;
      (**(code **)*puStack_170)(&puStack_1b0,puStack_170,param_1,2,&puStack_130);
      FUN_10ad13900(plVar17,&puStack_1b0);
      ppuVar4 = ppuStack_1a8;
      if (ppuStack_1a8 != (undefined **)0x0) {
        ppuVar11 = ppuStack_1a8 + 1;
        do {
          puVar14 = *ppuVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar6) {
            *ppuVar11 = puVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar14 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1a8 + 0x10))(ppuStack_1a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar4);
        }
      }
      (*(code *)*ppuStack_128)(&ppuStack_128);
      (**(code **)(*(long *)*plVar17 + 0x18))((long *)*plVar17,0xac44);
      (**(code **)(*(long *)*plVar17 + 0x10))((long *)*plVar17,1);
      plVar8 = (long *)0x1;
      (**(code **)(*(long *)*plVar17 + 0xa0))();
      param_1[0x1e] = (long)FUN_10ad155dc;
      (**(code **)param_1[0x1f])(plVar16);
      param_1[0x1f] = (long)&PTR_FUN_110c6e440;
      param_1[0x20] = (long)param_1;
      *(undefined4 *)((long)param_1 + 0xcc) = 0xac44;
      FUN_10ad13964(0x472c4400,param_1);
      ppuVar4 = ppuStack_168;
      if (ppuStack_168 != (undefined **)0x0) {
        ppuVar11 = ppuStack_168 + 1;
        do {
          puVar14 = *ppuVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar6) {
            *ppuVar11 = puVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar14 == (undefined *)0x0) {
          (**(code **)(*ppuStack_168 + 0x10))(ppuStack_168);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar4);
        }
      }
      plVar12 = plVar18;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return param_1;
      }
      ___stack_chk_fail();
      (*(code *)*ppuStack_128)(ppuVar4 + 1);
      FUN_10a7ab6f8(&puStack_170);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      plVar18 = (long *)param_1[0x442];
      if (plVar18 != (long *)0x0) {
        puVar3 = (ulong *)(plVar18 + 1);
        do {
          uVar15 = *puVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar15 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar15 & 0x1fffffffc) == 4) {
          do {
            uVar15 = *puVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar15 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar15 - 1 == 0) {
            (**(code **)(*plVar18 + 8))();
          }
        }
      }
      FUN_10ac471b8(param_1 + 0x42d);
      if (param_1[0x42a] != 0) {
        param_1[0x42b] = param_1[0x42a];
        __ZdlPv();
      }
      func_0x00010ac47208(param_1 + 0x427);
      (**(code **)param_1[0x1f])(plVar16);
      func_0x00010ac47260(plVar17);
      func_0x00010ac472b8(param_1 + 0x1a);
      func_0x000109d18f34(param_1 + 2);
      func_0x00010a06e274(param_1);
      __Unwind_Resume();
      lVar19 = plVar8[1];
      lVar20 = *plVar8;
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar8 = (long *)plVar12[1];
      plVar12[1] = lVar19;
      *plVar12 = lVar20;
      if (plVar8 != (long *)0x0) {
        plVar16 = plVar8 + 1;
        do {
          lVar20 = *plVar16;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *plVar16 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      return plVar12;
    }
  }
  FUN_10a00946c(&UNK_10f6a458f);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad137a0);
  (*pcVar7)();
}



/* Entry: 10ad13900; end: 10ad13963;  */

undefined8 * FUN_10ad13900(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
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



/* Entry: 10ad13964; end: 10ad13a4b;  */

void FUN_10ad13964(float param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_58 [8];
  double dStack_50;
  undefined4 *puStack_48;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    dStack_50 = (double)param_1;
    func_0x00010ae06f08(1,8,&UNK_10f6a45bc,&UNK_10f6a45f3,0x59,&UNK_10f6a4625);
  }
  iVar5 = (int)param_1;
  *(int *)(param_2 + 200) = iVar5;
  if ((iVar5 == 0) || (*(int *)(param_2 + 0xcc) == iVar5)) {
    return;
  }
  func_0x00010ad14ef4(param_2 + 0x2168);
  FUN_10ad127dc(param_2 + 0x2168,*(undefined4 *)(param_2 + 200),*(undefined4 *)(param_2 + 0xcc),1);
  *(undefined1 *)(param_2 + 0x21e8) = 1;
  uVar1 = 0;
  if ((long)*(int *)(param_2 + 0x21dc) != 0) {
    uVar1 = (ulong)((long)*(int *)(param_2 + 0x21d8) << 0xd) /
            (ulong)(long)*(int *)(param_2 + 0x21dc);
  }
  uVar1 = uVar1 + (long)*(int *)(param_2 + 0x21d8);
  lVar8 = *(long *)(param_2 + 0x2150);
  uVar7 = *(long *)(param_2 + 0x2158) - lVar8 >> 2;
  uVar3 = uVar7 <= uVar1;
  uVar4 = uVar1 == uVar7;
  if ((bool)uVar3 && !(bool)uVar4) {
    func_0x00010742b258((long *)(param_2 + 0x2150),uVar1 - uVar7);
    func_0x00010742bae4();
    if ((bool)uVar3 && !(bool)uVar4) {
      func_0x00010742be60();
      func_0x0001073b5434();
      func_0x00010742b52c();
      func_0x0001073b531c(auStack_58);
      puVar2 = puStack_48;
      for (lVar8 = unaff_x20 << 2; lVar8 != 0; lVar8 = lVar8 + -4) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      puStack_48 = puStack_48 + unaff_x20;
      func_0x00010742bb50();
      func_0x0001073b52fc();
      func_0x0001073b5364(auStack_58);
      return;
    }
    puVar6 = *(undefined4 **)(unaff_x19 + 8);
    puVar2 = puVar6;
    for (lVar8 = unaff_x20 << 2; lVar8 != 0; lVar8 = lVar8 + -4) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)(unaff_x19 + 8) = puVar6 + unaff_x20;
    return;
  }
  if (uVar1 < uVar7) {
    *(ulong *)(param_2 + 0x2158) = lVar8 + uVar1 * 4;
  }
  return;
}



/* Entry: 10ad13a4c; end: 10ad13b57;  */

void FUN_10ad13a4c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  undefined8 uStack_60;
  long *plStack_58;
  
  if ((param_3 == 0) || (*(int *)(param_1 + 200) == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0xcc) == *(int *)(param_1 + 200)) {
    lVar7 = param_1 + 0xf0;
    lVar8 = *(long *)(param_1 + 0x2130);
    uVar10 = lVar8 + (int)param_3;
    if (uVar10 < 0x801) {
      _memcpy(lVar7 + lVar8 * 4 + 0x40,param_2,(param_3 << 0x20) >> 0x1e);
      uVar10 = *(long *)(param_1 + 0x2130) + (long)(int)param_3;
    }
    else {
      lVar1 = param_1 + 0x130;
      _memcpy(lVar1 + lVar8 * 4,param_2,lVar8 * -4 + 0x2000);
      if (*(char *)(*(long *)(param_1 + 0xf8) + 8) == '\x01') {
        FUN_10ad163d0(&uStack_60,lVar7);
        FUN_10ad16488(lVar7,&uStack_60);
        plVar5 = plStack_58;
        if (plStack_58 != (long *)0x0) {
          plVar2 = plStack_58 + 1;
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
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
      }
      lVar8 = 0x800 - *(long *)(param_1 + 0x2130);
      *(undefined8 *)(param_1 + 0x2130) = 0;
      iVar11 = (int)(uVar10 >> 0xb);
      if (1 < iVar11) {
        iVar12 = 1;
        do {
          _memcpy(lVar1,param_2 + lVar8 * 4,0x2000);
          if (*(char *)(*(long *)(param_1 + 0xf8) + 8) == '\x01') {
            FUN_10ad163d0(&uStack_60,lVar7);
            FUN_10ad16488(lVar7,&uStack_60);
            plVar5 = plStack_58;
            if (plStack_58 != (long *)0x0) {
              plVar2 = plStack_58 + 1;
              do {
                lVar9 = *plVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *plVar2 = lVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plStack_58 + 0x10))(plStack_58);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
              }
            }
          }
          lVar8 = lVar8 + 0x800;
          iVar12 = iVar12 + 1;
        } while (iVar12 != iVar11);
      }
      uVar10 = uVar10 & 0x7ff;
      _memcpy(lVar1,param_2 + lVar8 * 4,uVar10 << 2);
    }
    *(ulong *)(param_1 + 0x2130) = uVar10;
    return;
  }
  if ((*(byte *)(param_1 + 0x21e8) & 1) != 0) {
    uVar10 = 0;
    if ((long)*(int *)(param_1 + 0x21dc) != 0) {
      uVar10 = (ulong)(param_3 * *(int *)(param_1 + 0x21d8)) /
               (ulong)(long)*(int *)(param_1 + 0x21dc);
    }
    if ((uVar10 + (long)*(int *)(param_1 + 0x21d8) <=
         (ulong)(*(long *)(param_1 + 0x2158) - *(long *)(param_1 + 0x2150) >> 2)) ||
       (func_0x00010742a308(param_1 + 0x2150), (*(byte *)(param_1 + 0x21e8) & 1) != 0)) {
      plStack_58 = (long *)(*(long *)(param_1 + 0x2158) - *(long *)(param_1 + 0x2150) >> 2);
      uStack_60 = 1;
      lVar7 = param_1 + 0x2168;
      (**(code **)(param_1 + 0x2198))(lVar7,&stack0xffffffffffffffb8,&uStack_60,param_1 + 0x2198);
      FUN_10ad16514(param_1 + 0xf0,*(undefined8 *)(param_1 + 0x2150),lVar7);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ad13b58);
  (*pcVar6)();
}



/* Entry: 10ad13b58; end: 10ad13c7f;  */

void FUN_10ad13b58(undefined4 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long lStack_60;
  code *pcStack_58;
  long *plStack_50;
  long lStack_48;
  
  *(undefined4 *)(param_2 + 0x2220) = param_1;
  lVar1 = param_2 + 0x10;
  plVar4 = *(long **)(param_2 + 0x20);
  lStack_48 = lVar1;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x20;
    __Znwm();
    *plVar4 = param_2;
    *(undefined4 *)(plVar4 + 1) = param_1;
    plVar4[3] = 0x10ad15b20;
    pcStack_58 = FUN_10ad15ac4;
    plStack_50 = plVar4;
    (*(code *)**(undefined8 **)(param_2 + 0x10))(lVar1,&pcStack_58);
  }
  else {
    lStack_60 = 0;
    (**(code **)(*plVar4 + 0x28))(plVar4,0,&lStack_60);
    if (lStack_60 != 0) {
      func_0x0001092af97c(&lStack_60);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad13c68);
      (*pcVar2)();
    }
    plVar3 = (long *)0x28;
    __Znwm();
    *plVar3 = param_2;
    *(undefined4 *)(plVar3 + 1) = param_1;
    plVar3[3] = (long)FUN_10ad15b14;
    plVar3[4] = (long)plVar4;
    pcStack_58 = FUN_10ad15a94;
    plStack_50 = plVar3;
    (*(code *)**(undefined8 **)(param_2 + 0x10))(lVar1,&pcStack_58);
    __ZNSt13exception_ptrD1Ev(&lStack_60);
  }
  lStack_60 = 0;
  __ZNSt13exception_ptrD1Ev(&lStack_60);
  return;
}



/* Entry: 10ad13c80; end: 10ad13e0f;  */

void FUN_10ad13c80(long param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lStack_60;
  code *pcStack_58;
  long *plStack_50;
  long lStack_48;
  
  if ((*(byte *)(param_1 + 0x2219) & 1) == 0) {
    lVar6 = param_1 + 0x10;
    plVar4 = *(long **)(param_1 + 0x20);
    lStack_48 = lVar6;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x18;
      __Znwm();
      *plVar4 = param_1;
      plVar4[2] = 0x10ad15bb8;
      pcStack_58 = FUN_10ad15b5c;
      plStack_50 = plVar4;
      (*(code *)**(undefined8 **)(param_1 + 0x10))(lVar6,&pcStack_58);
    }
    else {
      lStack_60 = 0;
      (**(code **)(*plVar4 + 0x28))(plVar4,0,&lStack_60);
      if (lStack_60 != 0) {
        func_0x0001092af97c(&lStack_60);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad13de8);
        (*pcVar1)();
      }
      plVar2 = (long *)0x20;
      __Znwm();
      *plVar2 = param_1;
      plVar2[2] = (long)FUN_10ad15bac;
      plVar2[3] = (long)plVar4;
      pcStack_58 = FUN_10ad15b2c;
      plStack_50 = plVar2;
      (*(code *)**(undefined8 **)(param_1 + 0x10))(lVar6,&pcStack_58);
      __ZNSt13exception_ptrD1Ev(&lStack_60);
    }
    lStack_60 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_60);
    puVar5 = *(undefined8 **)(param_1 + 0x2138);
    uVar3 = *puVar5;
    __ZNSt3__15mutex4lockEv(uVar3);
    lVar6 = puVar5[2];
    FUN_10ad39030(*(undefined8 *)(lVar6 + 8));
    *(undefined1 *)(lVar6 + 0x10) = 1;
    __ZNSt3__15mutex6unlockEv();
    *(undefined1 *)(param_1 + 0x2219) = 1;
    if (*(char *)(param_1 + 0x21f8) == '\x01') {
      *(undefined1 *)(param_1 + 0x21f9) = 1;
      *(uint *)(param_1 + 0x2204) = *(uint *)(param_1 + 0x2220);
      *(ulong *)(param_1 + 0x2208) = (ulong)*(uint *)(param_1 + 0x2220);
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(undefined8 *)(param_1 + 0x21f0) = uVar3;
    }
  }
  return;
}



/* Entry: 10ad13e10; end: 10ad13f83;  */

void FUN_10ad13e10(long param_1,int param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lStack_50;
  code *pcStack_48;
  long *plStack_40;
  long lStack_38;
  
  puVar8 = *(undefined8 **)(param_1 + 0x2138);
  uVar6 = *puVar8;
  __ZNSt3__15mutex4lockEv(uVar6);
  *(undefined1 *)(puVar8[2] + 0x10) = 0;
  __ZNSt3__15mutex6unlockEv();
  if (param_2 == 0) {
    lVar4 = param_1 + 0x10;
    plVar7 = *(long **)(param_1 + 0x20);
    lStack_38 = lVar4;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x18;
      __Znwm();
      *plVar7 = param_1;
      plVar7[2] = 0x10ad15c4c;
      pcStack_48 = FUN_10ad15bf4;
      plStack_40 = plVar7;
      (*(code *)**(undefined8 **)(param_1 + 0x10))(lVar4,&pcStack_48);
    }
    else {
      lStack_50 = 0;
      (**(code **)(*plVar7 + 0x28))(plVar7,0,&lStack_50);
      if (lStack_50 != 0) {
        func_0x0001092af97c(&lStack_50);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad13f6c);
        (*pcVar1)();
      }
      plVar2 = (long *)0x20;
      __Znwm();
      *plVar2 = param_1;
      plVar2[2] = (long)FUN_10ad15c40;
      plVar2[3] = (long)plVar7;
      pcStack_48 = FUN_10ad15bc4;
      plStack_40 = plVar2;
      (*(code *)**(undefined8 **)(param_1 + 0x10))(lVar4,&pcStack_48);
      __ZNSt13exception_ptrD1Ev(&lStack_50);
    }
    lStack_50 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_50);
    uVar3 = 0;
    lVar4 = 0x221a;
    lVar5 = 0x2219;
  }
  else {
    *(undefined4 *)(param_1 + 0x2204) = *(undefined4 *)(param_1 + 0x2220);
    *(undefined4 *)(param_1 + 0x2208) = 0;
    *(undefined4 *)(param_1 + 0x220c) = *(undefined4 *)(param_1 + 0x2220);
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(undefined8 *)(param_1 + 0x21f0) = uVar6;
    uVar3 = 1;
    lVar4 = 0x21fa;
    lVar5 = 0x21f9;
  }
  *(undefined1 *)(param_1 + lVar5) = 0;
  *(undefined1 *)(param_1 + lVar4) = uVar3;
  return;
}



/* Entry: 10ad13f84; end: 10ad140ab;  */

void FUN_10ad13f84(long param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long lStack_50;
  code *pcStack_48;
  long *plStack_40;
  long lStack_38;
  
  if (*(char *)(param_1 + 0x2219) == '\x01') {
    lVar1 = param_1 + 0x10;
    plVar4 = *(long **)(param_1 + 0x20);
    lStack_38 = lVar1;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x18;
      __Znwm();
      *plVar4 = param_1;
      plVar4[2] = 0x10ad15ce0;
      pcStack_48 = FUN_10ad15c88;
      plStack_40 = plVar4;
      (*(code *)**(undefined8 **)(param_1 + 0x10))(lVar1,&pcStack_48);
    }
    else {
      lStack_50 = 0;
      (**(code **)(*plVar4 + 0x28))(plVar4,0,&lStack_50);
      if (lStack_50 != 0) {
        func_0x0001092af97c(&lStack_50);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad14094);
        (*pcVar2)();
      }
      plVar3 = (long *)0x20;
      __Znwm();
      *plVar3 = param_1;
      plVar3[2] = (long)FUN_10ad15cd4;
      plVar3[3] = (long)plVar4;
      pcStack_48 = FUN_10ad15c58;
      plStack_40 = plVar3;
      (*(code *)**(undefined8 **)(param_1 + 0x10))(lVar1,&pcStack_48);
      __ZNSt13exception_ptrD1Ev(&lStack_50);
    }
    lStack_50 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_50);
    *(undefined1 *)(param_1 + 0x221a) = 1;
  }
  return;
}



/* Entry: 10ad140ac; end: 10ad141db;  */

void FUN_10ad140ac(long param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long lStack_50;
  code *pcStack_48;
  long *plStack_40;
  long lStack_38;
  
  if ((*(char *)(param_1 + 0x221a) == '\x01') && (*(char *)(param_1 + 0x2219) == '\x01')) {
    lVar1 = param_1 + 0x10;
    plVar4 = *(long **)(param_1 + 0x20);
    lStack_38 = lVar1;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x18;
      __Znwm();
      *plVar4 = param_1;
      plVar4[2] = 0x10ad15d74;
      pcStack_48 = FUN_10ad15d1c;
      plStack_40 = plVar4;
      (*(code *)**(undefined8 **)(param_1 + 0x10))(lVar1,&pcStack_48);
    }
    else {
      lStack_50 = 0;
      (**(code **)(*plVar4 + 0x28))(plVar4,0,&lStack_50);
      if (lStack_50 != 0) {
        func_0x0001092af97c(&lStack_50);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad141c4);
        (*pcVar2)();
      }
      plVar3 = (long *)0x20;
      __Znwm();
      *plVar3 = param_1;
      plVar3[2] = (long)FUN_10ad15d68;
      plVar3[3] = (long)plVar4;
      pcStack_48 = FUN_10ad15cec;
      plStack_40 = plVar3;
      (*(code *)**(undefined8 **)(param_1 + 0x10))(lVar1,&pcStack_48);
      __ZNSt13exception_ptrD1Ev(&lStack_50);
    }
    lStack_50 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_50);
  }
  *(undefined1 *)(param_1 + 0x221a) = 0;
  return;
}



/* Entry: 10ad141dc; end: 10ad1455b;  */

int FUN_10ad141dc(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  int iStack_74;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  code *pcStack_50;
  code *pcStack_48;
  long *plStack_40;
  undefined8 *puStack_38;
  
  iStack_74 = 0;
  plVar8 = *(long **)(param_1 + 0x20);
  plStack_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0xc8;
    __Znwm();
    plVar8[2] = 0;
    plVar8[1] = 0x200000006;
    *(undefined2 *)(plVar8 + 3) = 4;
    plVar8[5] = 0;
    plVar8[4] = 0;
    plVar8[7] = 0;
    plVar8[6] = 0;
    plVar8[9] = 0;
    plVar8[8] = 0;
    plVar8[0xb] = 0;
    plVar8[10] = 0;
    plVar8[0xd] = 0;
    plVar8[0xc] = 0;
    plVar8[0xf] = 0;
    plVar8[0xe] = 0;
    plVar8[0x10] = 0;
    plVar8[0x11] = (long)(plVar8 + 3);
    plVar8[0x12] = 0;
    *(undefined2 *)(plVar8 + 0x13) = 0;
    plStack_68 = plVar8 + 0x14;
    *plStack_68 = param_1;
    *plVar8 = (long)&PTR_DAT_110c6e418;
    plVar8[0x15] = (long)&iStack_74;
    *(undefined1 *)(plVar8 + 0x17) = 1;
    plVar8[0x18] = 0;
    pcStack_50 = FUN_10ad14f74;
    plStack_60 = plVar8;
    plStack_58 = plVar8;
  }
  else {
    pcStack_48 = (code *)0x0;
    (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_48);
    if (pcStack_48 != (code *)0x0) {
      func_0x0001092af97c(&pcStack_48);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad144e8);
      (*pcVar5)();
    }
    plVar6 = (long *)0xd0;
    __Znwm();
    plVar6[2] = 0;
    plVar6[1] = 0x200000006;
    *(undefined2 *)(plVar6 + 3) = 4;
    plVar6[5] = 0;
    plVar6[4] = 0;
    plVar6[7] = 0;
    plVar6[6] = 0;
    plVar6[9] = 0;
    plVar6[8] = 0;
    plVar6[0xb] = 0;
    plVar6[10] = 0;
    plVar6[0xd] = 0;
    plVar6[0xc] = 0;
    plVar6[0xf] = 0;
    plVar6[0xe] = 0;
    plVar6[0x10] = 0;
    plVar6[0x11] = (long)(plVar6 + 3);
    plVar6[0x12] = 0;
    *(undefined2 *)(plVar6 + 0x13) = 0;
    *plVar6 = (long)&PTR_FUN_110c6e3e0;
    plVar6[0x14] = param_1;
    plVar6[0x15] = (long)&iStack_74;
    *(undefined1 *)(plVar6 + 0x17) = 1;
    plVar6[0x18] = 0;
    plVar6[0x19] = (long)plVar8;
    if (plStack_60 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_60 + 1);
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
          (**(code **)(*plStack_60 + 8))();
        }
      }
    }
    plStack_60 = plVar6;
    if (plStack_58 != (long *)0x0) {
      func_0x0001092b4274(&plStack_58);
    }
    pcStack_50 = (code *)0x10ad14f44;
    plStack_68 = plVar6 + 0x14;
    plStack_58 = plVar6;
    __ZNSt13exception_ptrD1Ev(&pcStack_48);
  }
  plVar8 = plStack_68;
  puVar2 = (undefined8 *)(param_1 + 0x10);
  if (plStack_68[4] != 0) {
    func_0x0001092b4274();
  }
  plVar8[4] = (long)plStack_58;
  plStack_58 = (long *)0x0;
  pcStack_48 = pcStack_50;
  plStack_40 = plStack_68;
  puStack_38 = puVar2;
  (**(code **)*puVar2)(puVar2,&pcStack_48);
  plStack_70 = plStack_60;
  plStack_60 = (long *)0x0;
  if (plStack_58 != (long *)0x0) {
    func_0x0001092b4274(&plStack_58);
    if (plStack_60 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_60 + 1);
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
          (**(code **)(*plStack_60 + 8))();
        }
      }
    }
  }
  FUN_109d1a244(&plStack_70);
  FUN_10a09b344(&plStack_70);
  if (plStack_70 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_70 + 1);
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
        (**(code **)(*plStack_70 + 8))();
      }
    }
  }
  fVar9 = 1.0;
  if (*(char *)(param_1 + 0x2229) == '\x01') {
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 200));
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xcc));
    fVar9 = fVar9 / fVar10;
  }
  return (int)(fVar9 * (float)(0x1800U - iStack_74 &
                              ((int)(0x1800U - iStack_74) >> 0x1f ^ 0xffffffffU)) + 0.5);
}



/* Entry: 10ad1455c; end: 10ad149ab;  */

/* WARNING: Removing unreachable block (ram,0x00010ad1467c) */

void FUN_10ad1455c(undefined4 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char cStack_71;
  long lStack_70;
  code *pcStack_68;
  long *plStack_60;
  long lStack_58;
  
  if (((*(byte *)(param_2 + 0x21fa) & 1) != 0) || (*(char *)(param_2 + 0x21f9) == '\x01')) {
    cStack_71 = '\0';
    FUN_10a420138(param_2 + 0x21f0,&cStack_71);
    if (cStack_71 == '\x01') {
      puVar5 = (undefined8 *)0x70;
      __Znwm();
      *puVar5 = FUN_10ad160c0;
      puVar5[1] = FUN_10ad1630c;
      func_0x0001092ba17c(puVar5 + 2);
      lVar13 = puVar5[7];
      if (lVar13 != 0) {
        plVar7 = (long *)(lVar13 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar5[0xb] = param_2;
      puVar5[9] = param_2 + 0x10;
      *(undefined1 *)(puVar5 + 10) = 0;
      *(undefined1 *)(puVar5 + 0xd) = 0;
      puVar6 = puVar5 + 9;
      func_0x0001092ba064(puVar6,puVar5);
      if (((ulong)puVar6 & 1) == 0) {
        FUN_10ad151b4(puVar5 + 0xc,puVar5[0xb]);
        puVar5[9] = puVar5[0xc];
        plVar7 = (long *)(puVar5[0xc] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar5 + 0xd) = 1;
          lVar12 = puVar5[9];
          plVar7 = (long *)(lVar12 + 0x10);
          uVar9 = puVar5[3];
          do {
            lVar11 = *plVar7;
            if (lVar11 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                pcStack_68 = (code *)0x0;
                plStack_60 = puVar5;
                lStack_58 = uVar9;
                func_0x000109d1b588(lVar12 + 0x18,&pcStack_68);
                *(undefined8 *)(lVar12 + 0x10) = 0;
                goto LAB_10ad1476c;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar11 >> 1 & 1) == 0);
        }
        plVar7 = (long *)puVar5[9];
        if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar7 + 0x12);
          goto LAB_10ad148b8;
        }
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
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
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        plVar7 = (long *)puVar5[0xc];
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
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
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar5 + 2);
        func_0x000109d1a1d0(puVar5 + 2);
        __ZdlPv(puVar5);
      }
LAB_10ad1476c:
      plVar7 = *(long **)(param_2 + 0x2210);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
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
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      *(long *)(param_2 + 0x2210) = lVar13;
      *(undefined2 *)(param_2 + 0x2219) = 0;
    }
    lVar13 = param_2 + 0x10;
    plVar7 = *(long **)(param_2 + 0x20);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x20;
      __Znwm();
      *plVar7 = param_2;
      *(undefined4 *)(plVar7 + 1) = param_1;
      plVar7[3] = 0x10ad15e0c;
      pcStack_68 = FUN_10ad15db0;
      plStack_60 = plVar7;
      lStack_58 = lVar13;
      (*(code *)**(undefined8 **)(param_2 + 0x10))(lVar13,&pcStack_68);
    }
    else {
      lStack_70 = 0;
      (**(code **)(*plVar7 + 0x28))(plVar7,0,&lStack_70);
      if (lStack_70 != 0) {
        func_0x0001092af97c(&lStack_70);
LAB_10ad148b8:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad148bc);
        (*pcVar4)();
      }
      plVar8 = (long *)0x28;
      __Znwm();
      *plVar8 = param_2;
      *(undefined4 *)(plVar8 + 1) = param_1;
      plVar8[3] = (long)FUN_10ad15e00;
      plVar8[4] = (long)plVar7;
      pcStack_68 = FUN_10ad15d80;
      plStack_60 = plVar8;
      lStack_58 = lVar13;
      (*(code *)**(undefined8 **)(param_2 + 0x10))(lVar13,&pcStack_68);
      __ZNSt13exception_ptrD1Ev(&lStack_70);
    }
    lStack_70 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_70);
  }
  return;
}



/* Entry: 10ad149ac; end: 10ad14a6f;  */

void FUN_10ad149ac(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    piVar7 = (int *)*param_1;
    if (piVar7 != (int *)0x0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)((long)param_1 + 0x11);
      piVar1 = piVar7 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)(param_1 + 2);
      piVar7 = piVar7 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar2 = plVar6 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10ad14c08(param_2 + 8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10ad14a70; end: 10ad14ae3;  */

void FUN_10ad14a70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e330;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10ad14ae4; end: 10ad14bc7;  */

void FUN_10ad14ae4(long param_1)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x18);
  plVar6 = *(long **)(param_1 + 0x28);
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    piVar7 = *(int **)(param_1 + 0x20);
    if (piVar7 != (int *)0x0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)(param_1 + 0x31);
      piVar1 = piVar7 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)(param_1 + 0x30);
      piVar7 = piVar7 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar2 = plVar6 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (lVar9 != 0) {
    FUN_10ad14c08(lVar9 + 8,0);
    __ZdlPv(lVar9);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ad14bc8; end: 10ad14c03;  */

long FUN_10ad14bc8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c6e370);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ad14c04; end: 10ad14c07;  */

void FUN_10ad14c04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad14c08; end: 10ad14c4b;  */

void FUN_10ad14c08(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10ad14c4c(lVar1 + 0x20);
    func_0x00010ad14da8(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ad14c4c; end: 10ad14d5b;  */

long * FUN_10ad14c4c(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar5 = puVar4;
  if ((undefined8 *)param_1[2] != puVar4) {
    uVar3 = param_1[4];
    plVar6 = puVar4 + (uVar3 >> 8);
    lVar2 = *plVar6 + (uVar3 & 0xff) * 0x10;
    lVar1 = puVar4[param_1[5] + uVar3 >> 8] + (param_1[5] + uVar3 & 0xff) * 0x10;
    puVar5 = (undefined8 *)param_1[2];
    if (lVar2 != lVar1) {
      do {
        func_0x00010ad14da8();
        lVar2 = lVar2 + 0x10;
        if (lVar2 - *plVar6 == 0x1000) {
          plVar6 = plVar6 + 1;
          lVar2 = *plVar6;
        }
      } while (lVar2 != lVar1);
      puVar4 = (undefined8 *)param_1[1];
      puVar5 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar2 = (long)puVar5 - (long)puVar4;
  while (uVar3 = lVar2 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar4);
    puVar5 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar2 = (long)puVar5 - (long)puVar4;
  }
  if (uVar3 == 1) {
    lVar2 = 0x80;
  }
  else {
    if (uVar3 != 2) goto LAB_10ad14d3c;
    lVar2 = 0x100;
  }
  param_1[4] = lVar2;
LAB_10ad14d3c:
  for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar2 = param_1[2];
  if (lVar2 != param_1[1]) {
    param_1[2] = lVar2 + ((param_1[1] - lVar2) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ad14d5c; end: 10ad14dff;  */

long * FUN_10ad14d5c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ad14e00; end: 10ad14e0f;  */

void FUN_10ad14e00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e390;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad14e10; end: 10ad14e2f;  */

void FUN_10ad14e10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e390;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad14e30; end: 10ad14e57;  */

long FUN_10ad14e30(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10ad14e5c(param_1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x20);
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
  return param_1 + 0x18;
}



/* Entry: 10ad14e58; end: 10ad14e5b;  */

void FUN_10ad14e58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad14e5c; end: 10ad14f73;  */

long FUN_10ad14e5c(long param_1)

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



/* Entry: 10ad14f74; end: 10ad1506b;  */

void FUN_10ad14f74(long *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad15040);
    (*pcVar3)();
  }
  lVar6 = param_1[4];
  param_1[4] = 0;
  plVar4 = *(long **)(*param_1 + 0xe0);
  lStack_28 = lVar6;
  (**(code **)(*plVar4 + 0x30))();
  *(int *)param_1[1] = (int)plVar4;
  plVar4 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10ad14ff8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10ad14ff8:
      if ((char)param_1[3] == '\x01') {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10ad1506c; end: 10ad151b3;  */

undefined8 * FUN_10ad1506c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e3e0;
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10ad151b4; end: 10ad154e3;  */

/* WARNING: Removing unreachable block (ram,0x00010ad15294) */

void FUN_10ad151b4(long *param_1,long param_2)

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
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x68;
  __Znwm();
  *puVar5 = FUN_10ad15e18;
  puVar5[1] = FUN_10ad16008;
  puVar5[0xb] = param_2;
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
  (**(code **)(**(long **)(param_2 + 0xe0) + 0x28))();
  (**(code **)(**(long **)(param_2 + 0xe0) + 0x88))(puVar5 + 10);
  puVar5[9] = puVar5[10];
  plVar6 = (long *)(puVar5[10] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xc) = 0;
    lVar7 = puVar5[9];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
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
          uStack_48 = 0;
          puStack_40 = puVar5;
          func_0x000109d1b588(lVar7 + 0x18,&uStack_48);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar9 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[9];
  if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)((long)plVar6 + 0x99) & 1) != 0) {
      lVar7 = plVar6[0x13];
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
      plVar6 = (long *)puVar5[10];
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
      if ((char)lVar7 == '\0') {
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f6a45bc,&UNK_10f6a4647,0x117,&UNK_10f6a4694);
        }
      }
      else {
        (**(code **)(*(long *)(*(long *)(puVar5[0xb] + 0xe0) + 8) + 0x20))();
      }
      func_0x0001092ba100(puVar5 + 2);
      func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
  }
  else {
    func_0x0001092af97c(plVar6 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad15408);
  (*pcVar4)();
}



/* Entry: 10ad154e4; end: 10ad15513;  */

void FUN_10ad154e4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10ad15514();
                    /* WARNING: Could not recover jumptable at 0x00010ad15510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10ad15514; end: 10ad15567;  */

void FUN_10ad15514(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(*(long *)(*(long *)(lVar1 + 0xe0) + 8) + 0x20))();
  FUN_10ad15580((long *)(lVar1 + 0xe0));
  (*(code *)param_1[2])(param_1);
  return;
}



/* Entry: 10ad15568; end: 10ad1557f;  */

void FUN_10ad15568(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad15580; end: 10ad155db;  */

void FUN_10ad15580(undefined8 *param_1)

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



/* Entry: 10ad155dc; end: 10ad1590b;  */

void FUN_10ad155dc(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  code *pcVar11;
  code *pcStack_78;
  code *pcStack_70;
  code *pcStack_68;
  long lStack_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  
  pcVar2 = (code *)*param_1;
  pcVar3 = (code *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  pcVar11 = *(code **)(param_2 + 0x10);
  pcVar6 = pcVar11 + 0x10;
  if (pcVar3 != (code *)0x0) {
    pcVar1 = pcVar3 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *(long *)pcVar1 = *(long *)pcVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = *(long **)(pcVar11 + 0x20);
  pcStack_78 = pcVar11;
  pcStack_70 = pcVar2;
  pcStack_68 = pcVar3;
  pcStack_48 = pcVar6;
  if (plVar10 == (long *)0x0) {
    puVar7 = (undefined8 *)0x28;
    __Znwm();
    *puVar7 = pcVar11;
    puVar7[1] = pcVar2;
    puVar7[2] = pcVar3;
    if (pcVar3 != (code *)0x0) {
      pcVar1 = pcVar3 + 8;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar5) {
          *(long *)pcVar1 = *(long *)pcVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar7[4] = 0x10ad15a30;
    pcStack_58 = FUN_10ad1593c;
    pcStack_50 = (code *)puVar7;
    (*(code *)**(undefined8 **)pcVar6)(pcVar6,&pcStack_58);
  }
  else {
    lStack_60 = 0;
    (**(code **)(*plVar10 + 0x28))(plVar10,0,&lStack_60);
    if (lStack_60 != 0) {
      func_0x0001092af97c(&lStack_60);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10ad158bc);
      (*pcVar6)();
    }
    puVar7 = (undefined8 *)0x30;
    __Znwm();
    *puVar7 = pcVar11;
    puVar7[1] = pcVar2;
    puVar7[2] = pcVar3;
    if (pcVar3 != (code *)0x0) {
      pcVar1 = pcVar3 + 8;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar5) {
          *(long *)pcVar1 = *(long *)pcVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar7[4] = FUN_10ad15a00;
    puVar7[5] = plVar10;
    pcStack_58 = FUN_10ad1590c;
    pcStack_50 = (code *)puVar7;
    (*(code *)**(undefined8 **)pcVar6)(pcVar6,&pcStack_58);
    __ZNSt13exception_ptrD1Ev(&lStack_60);
  }
  lStack_60 = 0;
  __ZNSt13exception_ptrD1Ev(&lStack_60);
  if (pcVar3 != (code *)0x0) {
    pcVar6 = pcVar3 + 8;
    do {
      lVar8 = *(long *)pcVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
      if (bVar5) {
        *(long *)pcVar6 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)pcVar3 + 0x10))(pcVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar3);
    }
  }
  puVar7 = *(undefined8 **)(pcVar11 + 0x2138);
  if (pcVar3 != (code *)0x0) {
    pcVar6 = pcVar3 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
      if (bVar5) {
        *(long *)pcVar6 = *(long *)pcVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar9 = *puVar7;
  pcStack_58 = pcVar11;
  pcStack_50 = pcVar2;
  pcStack_48 = pcVar3;
  __ZNSt3__15mutex4lockEv(uVar9);
  if ((*(long *)(pcVar11 + 0x2148) != 0) &&
     (*(char *)(*(long *)(pcVar11 + 0x2148) + 0xe2d) == '\x02')) {
    lVar8 = puVar7[2];
    if (pcVar3 != (code *)0x0) {
      pcVar6 = pcVar3 + 8;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
        if (bVar5) {
          *(long *)pcVar6 = *(long *)pcVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pcStack_78 = pcVar2;
    pcStack_70 = pcVar3;
    if ((*(char *)(lVar8 + 0x10) == '\x01') && (*(char *)(lVar8 + 0x4020) == '\x01')) {
      func_0x00010ad38e44(*(long *)(lVar8 + 8) + 0x20,&pcStack_78);
    }
    pcVar6 = pcStack_70;
    if (pcStack_70 != (code *)0x0) {
      pcVar2 = pcStack_70 + 8;
      do {
        lVar8 = *(long *)pcVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar5) {
          *(long *)pcVar2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*(long *)pcStack_70 + 0x10))(pcStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar6);
      }
    }
  }
  __ZNSt3__15mutex6unlockEv(uVar9);
  pcVar6 = pcStack_48;
  if (pcStack_48 != (code *)0x0) {
    pcVar2 = pcStack_48 + 8;
    do {
      lVar8 = *(long *)pcVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar5) {
        *(long *)pcVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)pcStack_48 + 0x10))(pcStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar6);
    }
  }
  if (pcVar3 != (code *)0x0) {
    pcVar6 = pcVar3 + 8;
    do {
      lVar8 = *(long *)pcVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
      if (bVar5) {
        *(long *)pcVar6 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)pcVar3 + 0x10))(pcVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar3);
    }
  }
  return;
}



/* Entry: 10ad1590c; end: 10ad1593b;  */

void FUN_10ad1590c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  FUN_10ad1593c();
                    /* WARNING: Could not recover jumptable at 0x00010ad15938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10ad1593c; end: 10ad159ff;  */

void FUN_10ad1593c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  plVar4 = *(long **)(*param_1 + 0xe0);
  plStack_28 = (long *)param_1[2];
  lStack_30 = param_1[1];
  if (param_1[2] != 0) {
    plVar1 = (long *)(param_1[2] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar4 + 0x20))(plVar4,&lStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  (*(code *)param_1[4])(param_1);
  return;
}



/* Entry: 10ad15a00; end: 10ad15a5f;  */

void FUN_10ad15a00(long param_1)

{
  if (param_1 != 0) {
    func_0x00010ad14da8(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad15a60; end: 10ad15a93;  */

void FUN_10ad15a60(void)

{
  return;
}



/* Entry: 10ad15a94; end: 10ad15ac3;  */

void FUN_10ad15a94(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  FUN_10ad15ac4();
                    /* WARNING: Could not recover jumptable at 0x00010ad15ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10ad15ac4; end: 10ad15b13;  */

void FUN_10ad15ac4(long *param_1)

{
  (**(code **)(**(long **)(*param_1 + 0xe0) + 0x90))((int)param_1[1]);
  (*(code *)param_1[3])(param_1);
  return;
}



/* Entry: 10ad15b14; end: 10ad15b2b;  */

void FUN_10ad15b14(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad15b2c; end: 10ad15b5b;  */

void FUN_10ad15b2c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10ad15b5c();
                    /* WARNING: Could not recover jumptable at 0x00010ad15b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10ad15b5c; end: 10ad15bab;  */

void FUN_10ad15b5c(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(*param_1 + 0xe0) + 8);
  (**(code **)(*plVar1 + 0x10))(plVar1,1);
  (*(code *)param_1[2])(param_1);
  return;
}



/* Entry: 10ad15bac; end: 10ad15bc3;  */

void FUN_10ad15bac(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad15bc4; end: 10ad15bf3;  */

void FUN_10ad15bc4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10ad15bf4();
                    /* WARNING: Could not recover jumptable at 0x00010ad15bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10ad15bf4; end: 10ad15c3f;  */

void FUN_10ad15bf4(long *param_1)

{
  (**(code **)(*(long *)(*(long *)(*param_1 + 0xe0) + 8) + 0x20))();
  (*(code *)param_1[2])(param_1);
  return;
}



/* Entry: 10ad15c40; end: 10ad15c57;  */

void FUN_10ad15c40(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad15c58; end: 10ad15c87;  */

void FUN_10ad15c58(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10ad15c88();
                    /* WARNING: Could not recover jumptable at 0x00010ad15c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10ad15c88; end: 10ad15cd3;  */

void FUN_10ad15c88(long *param_1)

{
  (**(code **)(*(long *)(*(long *)(*param_1 + 0xe0) + 8) + 0x18))();
  (*(code *)param_1[2])(param_1);
  return;
}



/* Entry: 10ad15cd4; end: 10ad15ceb;  */

void FUN_10ad15cd4(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad15cec; end: 10ad15d1b;  */

void FUN_10ad15cec(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10ad15d1c();
                    /* WARNING: Could not recover jumptable at 0x00010ad15d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10ad15d1c; end: 10ad15d67;  */

void FUN_10ad15d1c(long *param_1)

{
  (**(code **)(*(long *)(*(long *)(*param_1 + 0xe0) + 8) + 0x28))();
  (*(code *)param_1[2])(param_1);
  return;
}



/* Entry: 10ad15d68; end: 10ad15d7f;  */

void FUN_10ad15d68(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad15d80; end: 10ad15daf;  */

void FUN_10ad15d80(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  FUN_10ad15db0();
                    /* WARNING: Could not recover jumptable at 0x00010ad15dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10ad15db0; end: 10ad15dff;  */

void FUN_10ad15db0(long *param_1)

{
  (**(code **)(**(long **)(*param_1 + 0xe0) + 0x90))((int)param_1[1]);
  (*(code *)param_1[3])(param_1);
  return;
}



/* Entry: 10ad15e00; end: 10ad15e17;  */

void FUN_10ad15e00(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad15e18; end: 10ad16007;  */

void FUN_10ad15e18(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar6 = *(long **)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)((long)plVar6 + 0x99) & 1) != 0) {
      lVar4 = plVar6[0x13];
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
      plVar6 = *(long **)(param_1 + 0x50);
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
      if ((char)lVar4 == '\0') {
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f6a45bc,&UNK_10f6a4647,0x117,&UNK_10f6a4694);
        }
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0xe0) + 8) + 0x20))();
      }
      func_0x0001092ba100(param_1 + 0x10);
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(plVar6 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad15f4c);
  (*pcVar5)();
}



/* Entry: 10ad16008; end: 10ad160bf;  */

void FUN_10ad16008(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x48);
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
  plVar4 = *(long **)(param_1 + 0x50);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad160c0; end: 10ad1630b;  */

void FUN_10ad160c0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    FUN_10ad151b4(param_1 + 0x60,*(undefined8 *)(param_1 + 0x58));
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x60);
    plVar5 = (long *)(*(long *)(param_1 + 0x60) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x48);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad16250);
    (*pcVar4)();
  }
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
  plVar5 = *(long **)(param_1 + 0x60);
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
  func_0x0001092ba100(param_1 + 0x10);
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad1630c; end: 10ad163cf;  */

void FUN_10ad1630c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x48);
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
    plVar4 = *(long **)(param_1 + 0x60);
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
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad163d0; end: 10ad16487;  */

void FUN_10ad163d0(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar4 = 0x1000;
  __Znam();
  *param_1 = lVar4;
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  lVar6 = 0;
  *puVar5 = &PTR_FUN_110c6e470;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = lVar4;
  param_1[1] = (long)puVar5;
  puVar5 = (undefined8 *)(param_2 + 0x40);
  do {
    uVar3 = puVar5[1];
    uVar2 = *puVar5;
    uVar1 = (ulong)CONCAT24((short)(int)((float)((ulong)puVar5[2] >> 0x20) * 32767.0),
                            (int)((float)puVar5[2] * 32767.0)) & 0xffffffff0000ffff;
    ((undefined8 *)(lVar4 + lVar6))[1] =
         CONCAT26((short)(int)((float)((ulong)puVar5[3] >> 0x20) * 32767.0),
                  CONCAT24((short)(int)((float)puVar5[3] * 32767.0),
                           CONCAT22((short)(uVar1 >> 0x20),(short)uVar1)));
    *(undefined8 *)(lVar4 + lVar6) =
         CONCAT26((short)(int)((float)((ulong)uVar3 >> 0x20) * 32767.0),
                  CONCAT24((short)(int)((float)uVar3 * 32767.0),
                           CONCAT22((short)(int)((float)((ulong)uVar2 >> 0x20) * 32767.0),
                                    (short)(int)((float)uVar2 * 32767.0))));
    lVar6 = lVar6 + 0x10;
    puVar5 = puVar5 + 4;
  } while (lVar6 != 0x1000);
  return;
}



/* Entry: 10ad16488; end: 10ad16513;  */

void FUN_10ad16488(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(&uStack_30,param_1);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10ad16514; end: 10ad166d3;  */

void FUN_10ad16514(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  lVar6 = *(long *)(param_1 + 0x2040);
  uVar8 = lVar6 + (int)param_3;
  if (uVar8 < 0x801) {
    _memcpy(param_1 + lVar6 * 4 + 0x40,param_2,(long)((ulong)param_3 << 0x20) >> 0x1e);
    uVar8 = *(long *)(param_1 + 0x2040) + (long)(int)param_3;
  }
  else {
    lVar1 = param_1 + 0x40;
    _memcpy(lVar1 + lVar6 * 4,param_2,lVar6 * -4 + 0x2000);
    if (*(char *)(*(long *)(param_1 + 8) + 8) == '\x01') {
      FUN_10ad163d0(auStack_60,param_1);
      FUN_10ad16488(param_1,auStack_60);
      plVar5 = plStack_58;
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
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    lVar6 = 0x800 - *(long *)(param_1 + 0x2040);
    *(undefined8 *)(param_1 + 0x2040) = 0;
    iVar9 = (int)(uVar8 >> 0xb);
    if (1 < iVar9) {
      iVar10 = 1;
      do {
        _memcpy(lVar1,param_2 + lVar6 * 4,0x2000);
        if (*(char *)(*(long *)(param_1 + 8) + 8) == '\x01') {
          FUN_10ad163d0(auStack_60,param_1);
          FUN_10ad16488(param_1,auStack_60);
          plVar5 = plStack_58;
          if (plStack_58 != (long *)0x0) {
            plVar2 = plStack_58 + 1;
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
              (**(code **)(*plStack_58 + 0x10))(plStack_58);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
        }
        lVar6 = lVar6 + 0x800;
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar9);
    }
    uVar8 = uVar8 & 0x7ff;
    _memcpy(lVar1,param_2 + lVar6 * 4,uVar8 << 2);
  }
  *(ulong *)(param_1 + 0x2040) = uVar8;
  return;
}



/* Entry: 10ad166d4; end: 10ad166e3;  */

void FUN_10ad166d4(undefined8 param_1,undefined8 param_2)

{
  func_0x000105277f8c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad166e4; end: 10ad166e7;  */

void FUN_10ad166e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad166e8; end: 10ad166fb;  */

void FUN_10ad166e8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad166fc; end: 10ad1670b;  */

void FUN_10ad166fc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10ad1670c; end: 10ad16743;  */

undefined8 FUN_10ad1670c(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c6e4b0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ad16744; end: 10ad16747;  */

void FUN_10ad16744(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad16748; end: 10ad16993;  */

void FUN_10ad16748(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  
  (**(code **)**(undefined8 **)(param_2 + 8))(param_1);
  lVar7 = 0x68;
  if (*(char *)(param_2 + 0x30) == '\0') {
    lVar7 = 0x70;
  }
  (**(code **)(*(long *)*param_1 + lVar7))();
  __ZNSt3__15mutex4lockEv(param_2 + 0x38);
  puVar13 = *(undefined8 **)(param_2 + 0x18);
  puVar11 = *(undefined8 **)(param_2 + 0x20);
  if (puVar13 != puVar11) {
LAB_10ad167b8:
    puVar14 = puVar13 + 2;
    if ((puVar13[1] != 0) && (*(long *)(puVar13[1] + 8) != -1)) goto code_r0x00010ad167cc;
    if ((puVar13 != puVar11) && (puVar14 != puVar11)) {
      do {
        lVar7 = puVar14[1];
        if ((lVar7 != 0) && (*(long *)(lVar7 + 8) != -1)) {
          uVar9 = *puVar14;
          *puVar14 = 0;
          puVar14[1] = 0;
          lVar12 = puVar13[1];
          *puVar13 = uVar9;
          puVar13[1] = lVar7;
          if (lVar12 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          puVar13 = puVar13 + 2;
        }
        puVar14 = puVar14 + 2;
      } while (puVar14 != puVar11);
      puVar11 = *(undefined8 **)(param_2 + 0x20);
    }
    if (puVar11 < puVar13) goto LAB_10ad1695c;
    if (puVar13 != puVar11) {
      FUN_10ad16eb8(puVar11,puVar11,puVar13);
      for (puVar13 = *(undefined8 **)(param_2 + 0x20); puVar13 != puVar11; puVar13 = puVar13 + -2) {
        if (puVar13[-1] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      *(undefined8 **)(param_2 + 0x20) = puVar11;
    }
  }
LAB_10ad16878:
  uVar9 = *param_1;
  lVar7 = param_1[1];
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar11 = *(undefined8 **)(param_2 + 0x20);
  }
  if (puVar11 < *(undefined8 **)(param_2 + 0x28)) {
    *puVar11 = uVar9;
    puVar11[1] = lVar7;
    puVar11 = puVar11 + 2;
LAB_10ad16930:
    *(undefined8 **)(param_2 + 0x20) = puVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x38);
    return;
  }
  lVar15 = *(long *)(param_2 + 0x18);
  lVar12 = (long)puVar11 - lVar15;
  uVar2 = (lVar12 >> 4) + 1;
  if (uVar2 >> 0x3c == 0) {
    uVar8 = (long)*(undefined8 **)(param_2 + 0x28) - lVar15;
    uVar10 = (long)uVar8 >> 3;
    if (uVar10 <= uVar2) {
      uVar10 = uVar2;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar10 = 0xfffffffffffffff;
    }
    if (uVar10 >> 0x3c == 0) {
      lVar6 = uVar10 << 4;
      __Znwm();
      puVar13 = (undefined8 *)(lVar6 + lVar12);
      *puVar13 = uVar9;
      puVar13[1] = lVar7;
      puVar11 = puVar13 + 2;
      _memcpy(puVar13 + (lVar12 >> 4) * -2,lVar15,lVar12);
      *(undefined8 **)(param_2 + 0x18) = puVar13 + (lVar12 >> 4) * -2;
      *(undefined8 **)(param_2 + 0x20) = puVar11;
      *(ulong *)(param_2 + 0x28) = lVar6 + uVar10 * 0x10;
      if (lVar15 != 0) {
        __ZdlPv(lVar15);
      }
      goto LAB_10ad16930;
    }
    func_0x000109ffded8();
  }
  else {
    FUN_10ad16f18();
  }
LAB_10ad1695c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad16960);
  (*pcVar5)();
code_r0x00010ad167cc:
  puVar13 = puVar14;
  if (puVar14 == puVar11) goto LAB_10ad16878;
  goto LAB_10ad167b8;
}



/* Entry: 10ad16994; end: 10ad16e27;  */

/* WARNING: Removing unreachable block (ram,0x00010ad16cf8) */
/* WARNING: Removing unreachable block (ram,0x00010ad16cfc) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d04) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d0c) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d10) */
/* WARNING: Removing unreachable block (ram,0x00010ad16ad4) */
/* WARNING: Removing unreachable block (ram,0x00010ad16ad8) */
/* WARNING: Removing unreachable block (ram,0x00010ad16ae0) */
/* WARNING: Removing unreachable block (ram,0x00010ad16ae8) */
/* WARNING: Removing unreachable block (ram,0x00010ad16af4) */
/* WARNING: Removing unreachable block (ram,0x00010ad16afc) */
/* WARNING: Removing unreachable block (ram,0x00010ad16b04) */
/* WARNING: Removing unreachable block (ram,0x00010ad16b08) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c68) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c6c) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c74) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c7c) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c88) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c90) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c98) */
/* WARNING: Removing unreachable block (ram,0x00010ad16c9c) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d30) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d34) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d3c) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d44) */
/* WARNING: Removing unreachable block (ram,0x00010ad16d48) */

void FUN_10ad16994(long param_1,undefined1 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plStack_90;
  long *plStack_88;
  code *pcStack_80;
  code *pcStack_78;
  long *plStack_70;
  long *plStack_68;
  
  *(undefined1 *)(param_1 + 0x30) = param_2;
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  puVar10 = *(undefined8 **)(param_1 + 0x18);
  if (puVar10 != *(undefined8 **)(param_1 + 0x20)) {
    do {
      plVar5 = (long *)puVar10[1];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
LAB_10ad16b4c:
        if (*(undefined8 **)(param_1 + 0x20) == puVar10) {
LAB_10ad16dd8:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad16ddc);
          (*pcVar4)();
        }
        puVar7 = puVar10 + 2;
        FUN_10ad16eb8(puVar7,*(undefined8 **)(param_1 + 0x20),puVar10);
        for (puVar12 = *(undefined8 **)(param_1 + 0x20); puVar12 != puVar7; puVar12 = puVar12 + -2)
        {
          if (puVar12[-1] != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        *(undefined8 **)(param_1 + 0x20) = puVar7;
        if (plVar5 != (long *)0x0) {
          plVar11 = plVar5 + 1;
          do {
            lVar9 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        if ((plVar5 == (long *)0x0) || (plVar11 = (long *)*puVar10, plVar11 == (long *)0x0))
        goto LAB_10ad16b4c;
        plVar6 = plVar11;
        (**(code **)(*plVar11 + 0xa8))();
        plVar14 = (long *)plVar6[2];
        plStack_88 = (long *)0x0;
        if (plVar14 == (long *)0x0) {
          plStack_90 = (long *)0xd0;
          __Znwm();
          plStack_90[2] = 0;
          plStack_90[1] = 0x200000006;
          *(undefined2 *)(plStack_90 + 3) = 4;
          plStack_90[5] = 0;
          plStack_90[4] = 0;
          plStack_90[7] = 0;
          plStack_90[6] = 0;
          plStack_90[9] = 0;
          plStack_90[8] = 0;
          plStack_90[0xb] = 0;
          plStack_90[10] = 0;
          plStack_90[0xd] = 0;
          plStack_90[0xc] = 0;
          plStack_90[0xf] = 0;
          plStack_90[0xe] = 0;
          plStack_90[0x10] = 0;
          plStack_90[0x11] = (long)(plStack_90 + 3);
          plStack_90[0x12] = 0;
          *(undefined2 *)(plStack_90 + 0x13) = 0;
          *plStack_90 = (long)&PTR_DAT_110c6e558;
          plVar13 = plStack_90 + 0x14;
          *plVar13 = (long)plVar11;
          plStack_90[0x15] = (long)plVar5;
          *(undefined1 *)(plStack_90 + 0x16) = param_2;
          *(undefined1 *)(plStack_90 + 0x18) = 1;
          plStack_90[0x19] = 0;
          pcStack_80 = FUN_10ad16fc8;
          plStack_88 = plStack_90;
        }
        else {
          pcStack_78 = (code *)0x0;
          (**(code **)(*plVar14 + 0x28))(plVar14,0,&pcStack_78);
          if (pcStack_78 != (code *)0x0) {
            func_0x0001092af97c(&pcStack_78);
            goto LAB_10ad16dd8;
          }
          plStack_90 = (long *)0xd8;
          __Znwm();
          plStack_90[2] = 0;
          plStack_90[1] = 0x200000006;
          *(undefined2 *)(plStack_90 + 3) = 4;
          plStack_90[5] = 0;
          plStack_90[4] = 0;
          plStack_90[7] = 0;
          plStack_90[6] = 0;
          plStack_90[9] = 0;
          plStack_90[8] = 0;
          plStack_90[0xb] = 0;
          plStack_90[10] = 0;
          plStack_90[0xd] = 0;
          plStack_90[0xc] = 0;
          plStack_90[0xf] = 0;
          plStack_90[0xe] = 0;
          plStack_90[0x10] = 0;
          plStack_90[0x11] = (long)(plStack_90 + 3);
          plStack_90[0x12] = 0;
          *(undefined2 *)(plStack_90 + 0x13) = 0;
          *plStack_90 = (long)&PTR_FUN_110c6e520;
          plVar13 = plStack_90 + 0x14;
          *plVar13 = (long)plVar11;
          plStack_90[0x15] = (long)plVar5;
          *(undefined1 *)(plStack_90 + 0x16) = param_2;
          *(undefined1 *)(plStack_90 + 0x18) = 1;
          plStack_90[0x19] = 0;
          plStack_90[0x1a] = (long)plVar14;
          if (plStack_88 != (long *)0x0) {
            func_0x0001092b4274(&plStack_88);
          }
          pcStack_80 = FUN_10ad16f98;
          plStack_88 = plStack_90;
          __ZNSt13exception_ptrD1Ev(&pcStack_78);
        }
        if (plVar13[5] != 0) {
          func_0x0001092b4274();
        }
        plVar13[5] = (long)plStack_88;
        plStack_88 = (long *)0x0;
        pcStack_78 = pcStack_80;
        plStack_70 = plVar13;
        plStack_68 = plVar6;
        (**(code **)*plVar6)(plVar6,&pcStack_78);
        if (plStack_88 != (long *)0x0) {
          func_0x0001092b4274(&plStack_88);
        }
        if (plStack_90 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_90 + 1);
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
              (**(code **)(*plStack_90 + 8))(plStack_90);
            }
          }
        }
        puVar10 = puVar10 + 2;
      }
    } while (puVar10 != *(undefined8 **)(param_1 + 0x20));
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x38);
  return;
}



/* Entry: 10ad16e28; end: 10ad16eb7;  */

undefined8 * FUN_10ad16e28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e4d0;
  __ZNSt3__15mutexD1Ev(param_1 + 7);
  FUN_10ad16f2c(param_1 + 3);
  FUN_10a7ab6f8(param_1 + 1);
  return param_1;
}



/* Entry: 10ad16eb8; end: 10ad16f17;  */

undefined8 * FUN_10ad16eb8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    uVar3 = param_1[1];
    uVar2 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    lVar1 = param_3[1];
    param_3[1] = uVar3;
    *param_3 = uVar2;
    if (lVar1 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    param_3 = param_3 + 2;
  }
  return param_3;
}



/* Entry: 10ad16f18; end: 10ad16f2b;  */

void FUN_10ad16f18(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    if (lVar4 != lVar3) {
      do {
        if (*(long *)(lVar4 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != lVar3);
      lVar2 = *plVar1;
    }
    plVar1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10ad16f2c; end: 10ad16f97;  */

void FUN_10ad16f2c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ad16f98; end: 10ad16fc7;  */

void FUN_10ad16f98(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  FUN_10ad16fc8();
                    /* WARNING: Could not recover jumptable at 0x00010ad16fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10ad16fc8; end: 10ad170cf;  */

void FUN_10ad16fc8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad170a4);
    (*pcVar4)();
  }
  lVar6 = param_1[5];
  param_1[5] = 0;
  lVar5 = 0x68;
  if (*(char *)(param_1 + 2) == '\0') {
    lVar5 = 0x70;
  }
  lStack_28 = lVar6;
  (**(code **)(*(long *)*param_1 + lVar5))();
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
        goto LAB_10ad17054;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10ad17054:
      if (*(char *)(param_1 + 4) == '\x01') {
        func_0x00010ac47260(param_1);
        *(undefined1 *)(param_1 + 4) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10ad170d0; end: 10ad17277;  */

undefined8 * FUN_10ad170d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e520;
  if (param_1[0x19] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010ac47260(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10ad17278; end: 10ad17367;  */

void FUN_10ad17278(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  plVar4 = *(long **)(param_2 + 0x10);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    puVar6 = *(undefined8 **)(param_2 + 8);
    if (puVar6 == (undefined8 *)0x0) {
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
      if (lVar5 != 0) goto LAB_10ad17338;
    }
    else {
      (**(code **)*puVar6)(param_1,puVar6,param_3,param_4,param_5);
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
      if (lVar5 != 0) {
        return;
      }
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    if (puVar6 != (undefined8 *)0x0) {
      return;
    }
  }
LAB_10ad17338:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10ad17368; end: 10ad173d7;  */

undefined8 * FUN_10ad17368(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e590;
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ad173d8; end: 10ad17573;  */

undefined8 * FUN_10ad173d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c6e5d0;
  *(undefined4 *)(param_1 + 1) = 0xac44;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  _bzero((long)param_1 + 0x7c,0x20c);
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0x3f;
  param_1[0x52] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x205a) = 0;
  *(undefined1 *)(param_1 + 0x205b) = 0;
  *(undefined1 *)(param_1 + 0x206b) = 0;
  param_1[0x206d] = 0;
  param_1[0x206c] = 0;
  param_1[0x206f] = 0;
  param_1[0x206e] = 0;
  _bzero(param_1 + 0x1055,0x8001);
  *(undefined4 *)(param_1 + 0x2070) = 0x3f800000;
  param_1[0x2071] = 0;
  param_1[0x2073] = 0;
  param_1[0x2072] = 0;
  *(undefined4 *)(param_1 + 0x2074) = 1;
  *(undefined1 *)((long)param_1 + 0x103a4) = 0;
  uVar1 = 8;
  __Znwm(8);
  FUN_10ad07d68();
  func_0x00010ad18378(param_1 + 8,uVar1);
  param_1[0x52] = param_1 + 10;
  param_1[0x54] = param_1 + 0xc;
  param_1[0x53] = (long)param_1 + 0x7c;
  *(undefined4 *)(param_1 + 1) = 0xac44;
  return param_1;
}



/* Entry: 10ad17574; end: 10ad17753;  */

void FUN_10ad17574(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f6a46d8,&UNK_10f6a471d,0x21,&UNK_10f6a476a,in_x6,in_x7,param_2[2]
                       );
  }
  *(undefined4 *)(param_1 + 0x103a0) = *param_2;
  FUN_10ad073d4(**(undefined8 **)(param_1 + 0x40),1,param_2[2]);
  iVar3 = param_2[2];
  puVar4 = *(undefined4 **)(param_1 + 0x290);
  puVar5 = *(undefined4 **)(param_1 + 0x2a0);
  puVar5[2] = 0x3f800000;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar5[1] = 0x3f800000;
  puVar4[3] = 0x41f00000;
  fVar6 = -2.2 / ((float)iVar3 * 0.030000001);
  _expf();
  puVar5[6] = fVar6;
  puVar5[5] = 0x3f6e307d;
  *(undefined8 *)(puVar5 + 3) = 0x3f8147ae3c2237c3;
  *(undefined8 *)(*(long *)(param_1 + 0x298) + 0x208) = 0x3f00000000;
  *puVar4 = 1;
  *puVar5 = 1;
  if (*(int *)(param_1 + 0x103a0) == 2) {
    uVar2 = 8;
    __Znwm(8);
    FUN_10ad07d68();
    func_0x00010ad18378(param_1 + 0x48,uVar2);
    FUN_10ad073d4(**(undefined8 **)(param_1 + 0x48),1,param_2[2]);
    uStack_58 = 2;
    uStack_54 = 2;
    FUN_10ad17754(param_1 + 0x102a8,&uStack_54,&uStack_58);
    iVar3 = param_2[2];
  }
  if (iVar3 != *(int *)(param_1 + 8)) {
    func_0x00010ad14ef4(param_1 + 0x102d8);
    FUN_10ad127dc(param_1 + 0x102d8,*(undefined4 *)(param_1 + 8),param_2[2],1);
    *(undefined1 *)(param_1 + 0x10358) = 1;
    uVar1 = 0;
    if ((long)*(int *)(param_1 + 0x1034c) != 0) {
      uVar1 = (ulong)((long)*(int *)(param_1 + 0x10348) << 0xd) /
              (ulong)(long)*(int *)(param_1 + 0x1034c);
    }
    func_0x00010742a308(param_1 + 0x10388,uVar1 + (long)*(int *)(param_1 + 0x10348));
  }
  return;
}



/* Entry: 10ad17754; end: 10ad177b7;  */

void FUN_10ad17754(long *param_1,int *param_2,int *param_3)

{
  if ((char)param_1[5] == '\x01') {
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  FUN_10ad12500(param_1,(long)*param_2,(long)*param_3);
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 10ad177b8; end: 10ad17a67;  */

/* WARNING: Possible PIC construction at 0x00010ad179c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad179c8) */

void FUN_10ad177b8(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float *unaff_x22;
  long *plVar15;
  float *pfVar16;
  long lVar17;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  float *pfStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  pbVar2 = (byte *)(param_1 + 0x102d0);
  if (1 < (int)*(uint *)(param_1 + 0x103a0)) {
    if ((*pbVar2 & 1) == 0) goto LAB_10ad17a64;
    func_0x00010ad12734(param_1 + 0x102a8,param_2,param_3 * (ulong)*(uint *)(param_1 + 0x103a0));
  }
  if (((*(long *)(param_1 + 0x10378) == 0) && (*(long *)(param_1 + 0x28) == 0)) ||
     (*(char *)(param_1 + 0x103a4) != '\x01')) {
    FUN_10ad07008(**(undefined8 **)(param_1 + 0x40),param_2,0,param_2,param_3);
    if (*(int *)(param_1 + 0x103a0) != 2) {
      return;
    }
    lVar17 = param_2 + param_3 * 4;
    FUN_10ad07008(**(undefined8 **)(param_1 + 0x48),lVar17,0,lVar17,param_3);
    if ((*pbVar2 & 1) == 0) goto LAB_10ad17a64;
    iVar4 = *(int *)(param_1 + 0x103a0);
  }
  else {
    unaff_x22 = (float *)(param_1 + 0x82a8);
    _bzero(unaff_x22,param_3 << 2);
    for (plVar15 = *(long **)(param_1 + 0x20); plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      (**(code **)(*(long *)plVar15[3] + 0xb8))((long *)plVar15[3],param_1 + 0x2a8,param_3);
      pfVar16 = unaff_x22;
      for (lVar17 = param_3; lVar17 != 0; lVar17 = lVar17 + -1) {
        *pfVar16 = pfVar16[-0x2000] + *pfVar16;
        pfVar16 = pfVar16 + 1;
      }
    }
    for (plVar15 = *(long **)(param_1 + 0x10370); plVar15 != (long *)0x0; plVar15 = (long *)*plVar15
        ) {
      FUN_10ad396c4(*(undefined8 *)(*(long *)(plVar15[2] + 0x3b8) + 0x20),param_1 + 0x2a8,param_3);
      pfVar16 = unaff_x22;
      for (lVar17 = param_3; lVar17 != 0; lVar17 = lVar17 + -1) {
        *pfVar16 = pfVar16[-0x2000] + *pfVar16;
        pfVar16 = pfVar16 + 1;
      }
    }
    if ((param_3 != 0) && (pfVar16 = unaff_x22, lVar17 = param_3, 1 < *(ulong *)(param_1 + 0x28))) {
      do {
        FUN_10ad0f5ac(param_1 + 0x290,pfVar16,pfVar16);
        lVar17 = lVar17 + -1;
        pfVar16 = pfVar16 + 1;
      } while (lVar17 != 0);
    }
    if (*(char *)(param_1 + 0x10358) == '\x01') {
      lStack_70 = *(long *)(param_1 + 0x10388);
      lStack_78 = *(long *)(param_1 + 0x10390) - lStack_70 >> 2;
      uStack_68 = 1;
      uStack_80 = 1;
      lStack_60 = param_3;
      pfStack_58 = unaff_x22;
      (**(code **)(param_1 + 0x10308))
                (param_1 + 0x102d8,&uStack_68,&uStack_80,(undefined8 *)(param_1 + 0x10308));
      unaff_x22 = *(float **)(param_1 + 0x10388);
    }
    FUN_10ad07008(**(undefined8 **)(param_1 + 0x40),param_2,unaff_x22,param_2,param_3);
    if (*(int *)(param_1 + 0x103a0) != 2) {
      return;
    }
    FUN_10ad07008(**(undefined8 **)(param_1 + 0x48),param_2 + param_3 * 4,0,unaff_x22,param_3);
    if ((*pbVar2 & 1) == 0) {
LAB_10ad17a64:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10ad17a68);
      (*pcVar6)();
    }
    iVar4 = *(int *)(param_1 + 0x103a0);
    unaff_x30 = 0x10ad179c8;
    register0x00000008 = (BADSPACEBASE *)&uStack_80;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x21 = param_3;
    unaff_x29 = puVar1;
  }
  uVar8 = (ulong)iVar4;
  uVar7 = param_3 * uVar8;
  *(float **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  _memcpy(*(long *)(param_1 + 0x102a8),param_2,uVar7 * 4);
  if (uVar8 <= uVar7) {
    uVar9 = 0;
    uVar10 = 0;
    lVar17 = *(long *)(param_1 + 0x102a8);
    lVar3 = *(long *)(param_1 + 0x102b0);
    uVar5 = 0;
    if (uVar8 != 0) {
      uVar5 = uVar7 / uVar8;
    }
    do {
      lVar11 = 0;
      uVar12 = uVar8;
      uVar13 = uVar9;
      do {
        uVar14 = uVar10 + lVar11 * uVar5;
        if (((ulong)(lVar3 - lVar17 >> 2) <= uVar14) || (uVar7 < uVar13 || uVar7 - uVar13 == 0)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10ad12734);
          (*pcVar6)();
        }
        *(undefined4 *)(param_2 + uVar13 * 4) = *(undefined4 *)(lVar17 + uVar14 * 4);
        uVar13 = uVar13 + 1;
        lVar11 = lVar11 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      uVar10 = uVar10 + 1;
      uVar9 = uVar9 + uVar8;
    } while (uVar10 < uVar5);
  }
  return;
}



/* Entry: 10ad17a68; end: 10ad17ad7;  */

undefined * FUN_10ad17a68(double param_1,float param_2,float param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  uint uVar8;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f6a46d8,&UNK_10f6a47b3,0x6d,&UNK_10f6a4800);
  }
  lVar2 = **(long **)(param_4 + 0x40);
  puVar1 = (undefined *)0x1;
  if (0x20 < ((uint)param_5 >> 0x10 & 0xff)) {
    return (undefined *)0x1;
  }
  puVar4 = (undefined *)(param_5 >> 0x10 & 0xff);
  uVar6 = (ulong)(byte)(&UNK_10e50dd78)[(long)puVar4];
  lVar5 = uVar6 * 4 + 0x10ad07798;
  uVar3 = SUB84(puVar4,0);
  fVar7 = SUB84(param_1,0);
  switch(puVar4) {
  default:
    puVar1 = (undefined *)0x0;
    uVar8 = (uint)param_5 - 1;
    if (0xc < uVar8) {
      return (undefined *)0x0;
    }
    lVar5 = 0x10ad077c0;
    uVar6 = (ulong)(byte)(&UNK_10e50dd99)[uVar8];
  case (undefined *)0x9b:
  case (undefined *)0xac:
                    /* WARNING: Could not recover jumptable at 0x00010ad077bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(lVar5 + uVar6 * 4))(puVar1);
    return puVar1;
  case (undefined *)0x1:
  case (undefined *)0x31:
    puVar4 = (undefined *)(lVar2 + 0xa3000);
  case (undefined *)0xaa:
    FUN_10ad11fb8(puVar4 + 0xe30);
  case (undefined *)0x35:
    break;
  case (undefined *)0x2:
    puVar1 = (undefined *)(lVar2 + 0xa3e18);
  case (undefined *)0xf8:
    FUN_10ad11970(puVar1);
    break;
  case (undefined *)0x3:
    puVar4 = (undefined *)(lVar2 + 0xa3000);
  case (undefined *)0x8f:
    FUN_10ad0c938(puVar4 + 0xe00);
  case (undefined *)0x8d:
    break;
  case (undefined *)0x4:
    puVar4 = (undefined *)(lVar2 + 0xa3000);
  case (undefined *)0x37:
    FUN_10ad0ce94(puVar4 + 0xde8);
    break;
  case (undefined *)0x5:
    puVar4 = (undefined *)(lVar2 + 0xa3000);
  case (undefined *)0x2f:
    FUN_10ad11444(puVar4 + 0xe48);
  case (undefined *)0x9c:
    break;
  case (undefined *)0x6:
  case (undefined *)0x33:
  case (undefined *)0x8b:
  case (undefined *)0xf3:
    puVar4 = (undefined *)(lVar2 + 0xa3000);
  case (undefined *)0x5f:
  case (undefined *)0x6b:
  case (undefined *)0x87:
  case (undefined *)0xaf:
  case (undefined *)0xc3:
  case (undefined *)0xcf:
  case (undefined *)0xf7:
  case (undefined *)0xff:
    puVar1 = puVar4 + 0xe60;
  case (undefined *)0x3b:
  case (undefined *)0x6a:
  case (undefined *)0x99:
  case (undefined *)0xa7:
    FUN_10ad0e284(puVar1);
  case (undefined *)0xe7:
    break;
  case (undefined *)0x7:
  case (undefined *)0x6f:
  case (undefined *)0x7f:
  case (undefined *)0x83:
  case (undefined *)0xc7:
  case (undefined *)0xdf:
  case (undefined *)0x34:
    puVar4 = (undefined *)(lVar2 + 0xa3000);
  case (undefined *)0xe3:
  case (undefined *)0xeb:
    func_0x00010ad0bba0(puVar4 + 0xe78);
  case (undefined *)0x38:
    break;
  case (undefined *)0x8:
  case (undefined *)0x44:
    puVar4 = (undefined *)(lVar2 + 0xa3000);
  case (undefined *)0x92:
    puVar1 = puVar4 + 0xe90;
  case (undefined *)0x45:
    FUN_10ad11d1c(puVar1);
    break;
  case (undefined *)0x9:
  case (undefined *)0x42:
    puVar4 = (undefined *)(lVar2 + 0xa3000);
  case (undefined *)0x46:
    FUN_10ad0e540(puVar4 + 0xea8);
  case (undefined *)0x40:
    break;
  case (undefined *)0xa:
  case (undefined *)0x32:
    FUN_10ad0c0c0(lVar2 + 0xa3ec0);
  case (undefined *)0x3a:
  case (undefined *)0x94:
    break;
  case (undefined *)0xb:
    puVar4 = (undefined *)(lVar2 + 0xa3000);
  case (undefined *)0xb2:
    puVar1 = puVar4 + 0xed8;
  case (undefined *)0xab:
    FUN_10ad0c570(puVar1);
    break;
  case (undefined *)0xc:
  case (undefined *)0x30:
    puVar1 = (undefined *)(lVar2 + 0xa3ef0);
  case (undefined *)0x3d:
    FUN_10ad0d164(puVar1);
    break;
  case (undefined *)0xd:
  case (undefined *)0x3c:
    puVar1 = (undefined *)(lVar2 + 0xa3f08);
  case (undefined *)0x39:
    FUN_10ad0d680(puVar1);
    break;
  case (undefined *)0xe:
  case (undefined *)0x4a:
  case (undefined *)0x88:
  case (undefined *)0xde:
    puVar4 = (undefined *)(lVar2 + 0xa3000);
  case (undefined *)0x36:
  case (undefined *)0x43:
    FUN_10ad10934(puVar4 + 0xf20);
  case (undefined *)0x4b:
    break;
  case (undefined *)0xf:
  case (undefined *)0xf2:
  case (undefined *)0xf6:
  case (undefined *)0x48:
    puVar1 = (undefined *)(lVar2 + 0xabfb8);
  case (undefined *)0x41:
  case (undefined *)0xfa:
    FUN_10ad0f0bc(puVar1);
    break;
  case (undefined *)0x10:
  case (undefined *)0x47:
    FUN_10ad0f6dc(lVar2 + 0xac010,param_5,*(undefined4 *)(lVar2 + 4));
    break;
  case (undefined *)0x11:
  case (undefined *)0x12:
  case (undefined *)0x13:
  case (undefined *)0x14:
  case (undefined *)0x15:
  case (undefined *)0x16:
  case (undefined *)0x17:
  case (undefined *)0x18:
  case (undefined *)0x19:
  case (undefined *)0x1a:
  case (undefined *)0x1b:
  case (undefined *)0x1c:
  case (undefined *)0x1d:
  case (undefined *)0x1e:
  case (undefined *)0x1f:
    return puVar1;
  case (undefined *)0x20:
  case (undefined *)0x29:
  case (undefined *)0x2a:
  case (undefined *)0x49:
    puVar1 = (undefined *)(lVar2 + 0xac028);
  case (undefined *)0x2d:
    FUN_10ad0b270(puVar1);
    break;
  case (undefined *)0x22:
    param_1 = param_1 * *(double *)(puVar4 + 0x2d8) * 0.05000000074505806;
  case (undefined *)0xb0:
    param_1 = (double)(ulong)(uint)(float)param_1;
  case (undefined *)0xad:
    uVar3 = SUB84(param_1,0);
    _expf(1);
    *(undefined4 *)(lVar2 + 0x328) = uVar3;
    return (undefined *)0x0;
  case (undefined *)0x3e:
    *(undefined4 *)(lVar2 + 8) = uVar3;
    *(undefined4 *)(lVar2 + 0x324) = uVar3;
    return puVar1;
  case (undefined *)0x7b:
  case (undefined *)0xcb:
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    uVar8 = NEON_fminnm(fVar7,0x44fa0000);
    param_1 = (double)(ulong)uVar8;
    *(uint *)(lVar2 + 0x20) = uVar8;
  case (undefined *)0x7e:
  case (undefined *)0x82:
  case (undefined *)0xc6:
    param_2 = (float)*(int *)(lVar2 + 4);
    puVar4 = &UNK_10ddde000;
  case (undefined *)0x28:
    param_3 = *(float *)(puVar4 + 0x85c);
  case (undefined *)0xf1:
  case (undefined *)0xf5:
    param_1 = (double)(ulong)(uint)(SUB84(param_1,0) * param_3);
  case (undefined *)0xf0:
  case (undefined *)0xf4:
    fVar7 = -2.2 / (SUB84(param_1,0) * param_2);
    _expf(1);
    *(float *)(lVar2 + 0x338) = fVar7;
    return (undefined *)0x0;
  case (undefined *)0x8a:
    *(undefined4 *)(lVar2 + 0x28) = uVar3;
    *(undefined4 *)(lVar2 + 0x340) = uVar3;
    return puVar1;
  case (undefined *)0x93:
    uVar8 = NEON_fminnm(fVar7,uVar3);
    param_1 = (double)(ulong)uVar8;
  case (undefined *)0xfd:
    *(float *)(lVar2 + 0x30) = SUB84(param_1,0);
    param_1 = (double)SUB84(param_1,0);
    puVar4 = &UNK_10e036000;
  case (undefined *)0x25:
    param_1 = (double)(ulong)(uint)(float)(param_1 * *(double *)(puVar4 + 0x2d8) *
                                          0.05000000074505806);
    _expf(1);
    puVar1 = (undefined *)0x0;
  case (undefined *)0xa8:
    *(int *)(lVar2 + 0x34c) = SUB84(param_1,0);
    return puVar1;
  case (undefined *)0x98:
    param_1 = (double)fVar7;
    puVar4 = &UNK_10e036000;
  case (undefined *)0x27:
    param_1 = param_1 * *(double *)(puVar4 + 0x2d8);
    puVar4 = &UNK_10dd8e000;
  case (undefined *)0x8c:
    param_1 = (double)(ulong)(uint)(float)(param_1 * *(double *)(puVar4 + 0x7b0));
    _expf(1);
  case (undefined *)0x67:
    puVar1 = (undefined *)0x0;
  case (undefined *)0xbe:
  case (undefined *)0xca:
    *(int *)(lVar2 + 0x32c) = SUB84(param_1,0);
    return puVar1;
  case (undefined *)0x9a:
    uVar8 = NEON_fminnm(fVar7,uVar3);
    param_1 = (double)(ulong)uVar8;
    *(uint *)(lVar2 + 0x1c) = uVar8;
    param_2 = (float)*(int *)(lVar2 + 4);
    puVar4 = &UNK_10ddde000;
  case (undefined *)0x24:
  case (undefined *)0xfc:
    param_1 = (double)(ulong)(uint)(SUB84(param_1,0) * *(float *)(puVar4 + 0x85c));
  case (undefined *)0x23:
    fVar7 = -2.2 / (SUB84(param_1,0) * param_2);
    _expf(1);
    *(float *)(lVar2 + 0x334) = fVar7;
    return (undefined *)0x0;
  case (undefined *)0xa9:
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    param_1 = (double)(ulong)(uint)fVar7;
    param_2 = 100.0;
  case (undefined *)0x2b:
    uVar8 = NEON_fminnm(SUB84(param_1,0),param_2);
    param_1 = (double)(ulong)uVar8;
    *(uint *)(lVar2 + 0x2c) = uVar8;
    puVar4 = &UNK_10df04000;
  case (undefined *)0x7a:
    fVar7 = *(float *)(puVar4 + 0x748) * SUB84(param_1,0) + 1.0;
    *(float *)(lVar2 + 0x344) = fVar7;
    *(float *)(lVar2 + 0x348) = 1.0 - fVar7;
    return (undefined *)0x1;
  case (undefined *)0xae:
    if (fVar7 <= param_2) {
      fVar7 = param_2;
    }
    param_1 = (double)(ulong)(uint)fVar7;
    param_2 = 2000.0;
  case (undefined *)0xbf:
    uVar8 = NEON_fminnm(SUB84(param_1,0),param_2);
    param_1 = (double)(ulong)uVar8;
  case (undefined *)0x6e:
  case (undefined *)0x86:
  case (undefined *)0x97:
  case (undefined *)0xc2:
  case (undefined *)0xce:
  case (undefined *)0xe9:
    *(int *)(lVar2 + 0x18) = SUB84(param_1,0);
    param_2 = *(float *)(lVar2 + 4);
  case (undefined *)0xfe:
    param_2 = (float)(int)param_2;
  case (undefined *)0x91:
    puVar4 = &UNK_10ddde000;
  case (undefined *)0x26:
    param_3 = *(float *)(puVar4 + 0x85c);
  case (undefined *)0x95:
    param_1 = (double)(ulong)(uint)(SUB84(param_1,0) * param_3);
  case (undefined *)0x8e:
    param_1 = (double)(ulong)(uint)(SUB84(param_1,0) * param_2);
    param_2 = -2.2;
  case (undefined *)0xea:
    param_1 = (double)(ulong)(uint)(param_2 / SUB84(param_1,0));
  case (undefined *)0x96:
    uVar3 = SUB84(param_1,0);
    _expf(1);
    *(undefined4 *)(lVar2 + 0x330) = uVar3;
    return (undefined *)0x0;
  case (undefined *)0xb1:
    if (fVar7 <= param_2) {
      fVar7 = param_2;
    }
    uVar8 = NEON_fminnm(fVar7,0x44fa0000);
    param_1 = (double)(ulong)uVar8;
    *(uint *)(lVar2 + 0x24) = uVar8;
    param_2 = (float)*(int *)(lVar2 + 4);
    puVar4 = &UNK_10ddde000;
  case (undefined *)0x2c:
    param_3 = *(float *)(puVar4 + 0x85c);
  case (undefined *)0xf9:
    param_1 = (double)(ulong)(uint)(SUB84(param_1,0) * param_3);
  case (undefined *)0x5e:
  case (undefined *)0x66:
  case (undefined *)0xa6:
    param_1 = (double)(ulong)(uint)(SUB84(param_1,0) * param_2);
  case (undefined *)0x89:
    fVar7 = -2.2 / SUB84(param_1,0);
    _expf(1);
    *(float *)(lVar2 + 0x33c) = fVar7;
    return (undefined *)0x0;
  case (undefined *)0xb3:
    return (undefined *)0x1;
  case (undefined *)0xe2:
    return (undefined *)0x1;
  case (undefined *)0xe6:
    return (undefined *)0x1;
  case (undefined *)0xfb:
    return (undefined *)0x1;
  }
  return (undefined *)0x0;
}



/* Entry: 10ad17ad8; end: 10ad17c07;  */

undefined4 FUN_10ad17ad8(long param_1,undefined8 param_2)

{
  undefined4 uStack_24;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f6a46d8,&UNK_10f6a4835,0x72,&UNK_10f6a4876);
  }
  uStack_24 = 0;
  FUN_10ad07b8c(**(undefined8 **)(param_1 + 0x40),param_2,&uStack_24);
  return uStack_24;
}



/* Entry: 10ad17c08; end: 10ad17e47;  */

long * FUN_10ad17c08(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined1 uStack_259;
  uint *puStack_258;
  undefined4 uStack_204;
  undefined4 uStack_1d4;
  undefined4 uStack_194;
  undefined4 uStack_164;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined4 uStack_144;
  undefined8 ***pppuStack_140;
  code *pcStack_138;
  undefined4 uStack_124;
  undefined8 ***pppuStack_110;
  code *pcStack_108;
  undefined4 uStack_f4;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_d4;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_b4;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_94;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined4 uStack_74;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined4 uStack_54;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined4 uStack_14;
  
  param_2 = param_2 + 0x10;
  uStack_34 = SUB84(&uStack_14,0);
  uStack_14 = param_3;
  FUN_10ad18408();
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 0x18);
    (**(code **)(*plVar1 + 0x18))();
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uStack_28 = 0x10ad17c50;
  puVar3 = puVar3 + 0x10;
  uStack_54 = SUB84(&uStack_34,0);
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10ad18408();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x20))();
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uStack_48 = 0x10ad17c98;
  puVar3 = puVar3 + 0x10;
  uStack_74 = SUB84(&uStack_54,0);
  ppuStack_50 = &puStack_30;
  FUN_10ad18408();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x28))();
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uStack_68 = 0x10ad17ce0;
  puVar3 = puVar3 + 0x10;
  uStack_94 = SUB84(&uStack_74,0);
  pppuStack_70 = &ppuStack_50;
  FUN_10ad18408();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x98))();
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uStack_88 = 0x10ad17d28;
  puVar3 = puVar3 + 0x10;
  uStack_b4 = SUB84(&uStack_94,0);
  pppuStack_90 = &pppuStack_70;
  FUN_10ad18408();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0xa0))();
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uStack_a8 = 0x10ad17d70;
  puVar3 = puVar3 + 0x10;
  uStack_d4 = SUB84(&uStack_b4,0);
  pppuStack_b0 = &pppuStack_90;
  func_0x00010ad184a8();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x60))();
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uStack_c8 = 0x10ad17db8;
  puVar3 = puVar3 + 0x10;
  uStack_f4 = SUB84(&uStack_d4,0);
  pppuStack_d0 = &pppuStack_b0;
  func_0x00010ad184a8();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x58))();
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uStack_e8 = 0x10ad17e00;
  puVar3 = puVar3 + 0x10;
  uStack_124 = SUB84(&uStack_f4,0);
  pppuStack_f0 = &pppuStack_d0;
  func_0x00010ad184a8();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x38))();
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  pcStack_108 = FUN_10ad17e48;
  puVar3 = puVar3 + 0x10;
  uStack_144 = SUB84(&uStack_124,0);
  uVar2 = param_1;
  pppuStack_110 = &pppuStack_f0;
  FUN_10ad18408();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x30))(param_1);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  pcStack_138 = FUN_10ad17ea0;
  puVar3 = puVar3 + 0x10;
  uStack_164 = SUB84(&uStack_144,0);
  pppuStack_140 = &pppuStack_110;
  func_0x00010ad184a8();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x78))();
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uStack_158 = 0x10ad17ee8;
  puVar3 = puVar3 + 0x10;
  uStack_194 = SUB84(&uStack_164,0);
  pppuStack_160 = &pppuStack_140;
  func_0x00010ad184a8();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x50))();
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  puVar3 = puVar3 + 0x10;
  uStack_1d4 = SUB84(&uStack_194,0);
  uVar5 = uVar2;
  FUN_10ad18408();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x48))(uVar2);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  puVar3 = puVar3 + 0x10;
  uStack_204 = SUB84(&uStack_1d4,0);
  uVar2 = param_4;
  FUN_10ad18408();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x90))(uVar5,plVar1,param_4);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  puVar3 = puVar3 + 0x10;
  FUN_10ad18408(puVar3,&uStack_204);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x88))(plVar1,uVar2);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uVar2 = 0x68;
  __Znwm();
  FUN_10ad2bcbc();
  puVar4 = (uint *)(puVar3 + 0x38);
  *puVar4 = *puVar4 + 1;
  puVar3 = puVar3 + 0x10;
  puStack_258 = puVar4;
  FUN_10ad18738(puVar3,puVar4,&UNK_10dd5b8f9,&puStack_258,&uStack_259);
  plVar1 = *(long **)(puVar3 + 0x18);
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return (long *)(ulong)*puVar4;
}



/* Entry: 10ad17e48; end: 10ad17e9f;  */

long * FUN_10ad17e48(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined1 uStack_159;
  uint *puStack_158;
  undefined4 uStack_104;
  undefined4 uStack_d4;
  undefined4 uStack_94;
  undefined4 uStack_64;
  undefined1 **ppuStack_60;
  undefined8 uStack_58;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined4 uStack_24;
  
  param_2 = param_2 + 0x10;
  uStack_44 = SUB84(&uStack_24,0);
  uVar2 = param_1;
  uStack_24 = param_3;
  FUN_10ad18408();
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 0x18);
    (**(code **)(*plVar1 + 0x30))(param_1);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  pcStack_38 = FUN_10ad17ea0;
  puVar3 = puVar3 + 0x10;
  uStack_64 = SUB84(&uStack_44,0);
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x00010ad184a8();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x78))();
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uStack_58 = 0x10ad17ee8;
  puVar3 = puVar3 + 0x10;
  uStack_94 = SUB84(&uStack_64,0);
  ppuStack_60 = &puStack_40;
  func_0x00010ad184a8();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x50))();
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  puVar3 = puVar3 + 0x10;
  uStack_d4 = SUB84(&uStack_94,0);
  uVar5 = uVar2;
  FUN_10ad18408();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x48))(uVar2);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  puVar3 = puVar3 + 0x10;
  uStack_104 = SUB84(&uStack_d4,0);
  uVar2 = param_4;
  FUN_10ad18408();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x90))(uVar5,plVar1,param_4);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  puVar3 = puVar3 + 0x10;
  FUN_10ad18408(puVar3,&uStack_104);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x88))(plVar1,uVar2);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uVar2 = 0x68;
  __Znwm();
  FUN_10ad2bcbc();
  puVar4 = (uint *)(puVar3 + 0x38);
  *puVar4 = *puVar4 + 1;
  puVar3 = puVar3 + 0x10;
  puStack_158 = puVar4;
  FUN_10ad18738(puVar3,puVar4,&UNK_10dd5b8f9,&puStack_158,&uStack_159);
  plVar1 = *(long **)(puVar3 + 0x18);
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return (long *)(ulong)*puVar4;
}



/* Entry: 10ad17ea0; end: 10ad17f2f;  */

long * FUN_10ad17ea0(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined1 uStack_129;
  uint *puStack_128;
  undefined4 uStack_d4;
  undefined4 uStack_a4;
  undefined4 uStack_64;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined4 uStack_14;
  
  param_2 = param_2 + 0x10;
  uStack_34 = SUB84(&uStack_14,0);
  uStack_14 = param_3;
  func_0x00010ad184a8();
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 0x18);
    (**(code **)(*plVar1 + 0x78))();
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uStack_28 = 0x10ad17ee8;
  puVar3 = puVar3 + 0x10;
  uStack_64 = SUB84(&uStack_34,0);
  puStack_30 = &stack0xfffffffffffffff0;
  func_0x00010ad184a8();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x50))();
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  puVar3 = puVar3 + 0x10;
  uStack_a4 = SUB84(&uStack_64,0);
  uVar2 = param_1;
  func_0x00010ad18408();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x48))(param_1);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  puVar3 = puVar3 + 0x10;
  uStack_d4 = SUB84(&uStack_a4,0);
  uVar4 = param_4;
  func_0x00010ad18408();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x90))(uVar2,plVar1,param_4);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  puVar3 = puVar3 + 0x10;
  func_0x00010ad18408(puVar3,&uStack_d4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x88))(plVar1,uVar4);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uVar2 = 0x68;
  __Znwm();
  FUN_10ad2bcbc();
  puVar5 = (uint *)(puVar3 + 0x38);
  *puVar5 = *puVar5 + 1;
  puVar3 = puVar3 + 0x10;
  puStack_128 = puVar5;
  FUN_10ad18738(puVar3,puVar5,&UNK_10dd5b8f9,&puStack_128,&uStack_129);
  plVar1 = *(long **)(puVar3 + 0x18);
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return (long *)(ulong)*puVar5;
}



/* Entry: 10ad17f30; end: 10ad17f87;  */

long * FUN_10ad17f30(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined1 uStack_e9;
  uint *puStack_e8;
  undefined4 uStack_94;
  undefined4 uStack_64;
  undefined4 uStack_24;
  
  param_2 = param_2 + 0x10;
  uStack_64 = SUB84(&uStack_24,0);
  uVar2 = param_1;
  uStack_24 = param_3;
  FUN_10ad18408();
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 0x18);
    (**(code **)(*plVar1 + 0x48))(param_1);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  puVar3 = puVar3 + 0x10;
  uStack_94 = SUB84(&uStack_64,0);
  uVar4 = param_4;
  FUN_10ad18408();
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x90))(uVar2,plVar1,param_4);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  puVar3 = puVar3 + 0x10;
  FUN_10ad18408(puVar3,&uStack_94);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x88))(plVar1,uVar4);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uVar2 = 0x68;
  __Znwm();
  FUN_10ad2bcbc();
  puVar5 = (uint *)(puVar3 + 0x38);
  *puVar5 = *puVar5 + 1;
  puVar3 = puVar3 + 0x10;
  puStack_e8 = puVar5;
  FUN_10ad18738(puVar3,puVar5,&UNK_10dd5b8f9,&puStack_e8,&uStack_e9);
  plVar1 = *(long **)(puVar3 + 0x18);
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return (long *)(ulong)*puVar5;
}



/* Entry: 10ad17f88; end: 10ad17fef;  */

long * FUN_10ad17f88(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined1 uStack_b9;
  uint *puStack_b8;
  undefined4 uStack_64;
  undefined4 uStack_34;
  
  param_2 = param_2 + 0x10;
  uStack_64 = SUB84(&uStack_34,0);
  uVar2 = param_4;
  uStack_34 = param_3;
  FUN_10ad18408();
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 0x18);
    (**(code **)(*plVar1 + 0x90))(param_1,plVar1,param_4);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  puVar3 = puVar3 + 0x10;
  FUN_10ad18408(puVar3,&uStack_64);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 0x18);
    (**(code **)(*plVar1 + 0x88))(plVar1,uVar2);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uVar2 = 0x68;
  __Znwm();
  FUN_10ad2bcbc();
  puVar4 = (uint *)(puVar3 + 0x38);
  *puVar4 = *puVar4 + 1;
  puVar3 = puVar3 + 0x10;
  puStack_b8 = puVar4;
  FUN_10ad18738(puVar3,puVar4,&UNK_10dd5b8f9,&puStack_b8,&uStack_b9);
  plVar1 = *(long **)(puVar3 + 0x18);
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return (long *)(ulong)*puVar4;
}



/* Entry: 10ad17ff0; end: 10ad18047;  */

long * FUN_10ad17ff0(long param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined1 uStack_79;
  uint *puStack_78;
  undefined4 uStack_24;
  
  param_1 = param_1 + 0x10;
  uStack_24 = param_2;
  FUN_10ad18408(param_1,&uStack_24);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar1 + 0x88))(plVar1,param_3);
    return plVar1;
  }
  puVar3 = &UNK_10f6a48ab;
  FUN_109ffdddc();
  uVar2 = 0x68;
  __Znwm();
  FUN_10ad2bcbc();
  puVar4 = (uint *)(puVar3 + 0x38);
  *puVar4 = *puVar4 + 1;
  puVar3 = puVar3 + 0x10;
  puStack_78 = puVar4;
  FUN_10ad18738(puVar3,puVar4,&UNK_10dd5b8f9,&puStack_78,&uStack_79);
  plVar1 = *(long **)(puVar3 + 0x18);
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return (long *)(ulong)*puVar4;
}



/* Entry: 10ad18048; end: 10ad1811b;  */

int FUN_10ad18048(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  int *piVar3;
  undefined1 uStack_49;
  int *piStack_48;
  
  uVar1 = 0x68;
  __Znwm();
  FUN_10ad2bcbc();
  piVar3 = (int *)(param_1 + 0x38);
  *piVar3 = *piVar3 + 1;
  param_1 = param_1 + 0x10;
  piStack_48 = piVar3;
  FUN_10ad18738(param_1,piVar3,&UNK_10dd5b8f9,&piStack_48,&uStack_49);
  plVar2 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return *piVar3;
}



/* Entry: 10ad1811c; end: 10ad182bf;  */

void FUN_10ad1811c(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uStack_24;
  
  param_1 = param_1 + 0x10;
  uStack_24 = param_2;
  FUN_10ad18408(param_1,&uStack_24);
  if (param_1 == 0) {
    puVar1 = &UNK_10f6a48ab;
    FUN_109ffdddc();
    puVar1[0x103a4] = 1;
    for (plVar2 = *(long **)(puVar1 + 0x20); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      (**(code **)(*(long *)plVar2[3] + 0xa8))();
    }
    for (plVar2 = *(long **)(puVar1 + 0x10370); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      *(undefined1 *)(*(long *)(plVar2[2] + 0x3b8) + 0x51) = 1;
    }
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x80))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10ad182c0; end: 10ad182c3;  */

long FUN_10ad182c0(long param_1)

{
  if (*(long *)(param_1 + 0x10388) != 0) {
    *(long *)(param_1 + 0x10390) = *(long *)(param_1 + 0x10388);
    __ZdlPv();
  }
  func_0x00010ad183c0(param_1 + 0x10360);
  FUN_10ac471b8(param_1 + 0x102d8);
  if ((*(char *)(param_1 + 0x102d0) == '\x01') && (*(long *)(param_1 + 0x102a8) != 0)) {
    *(long *)(param_1 + 0x102b0) = *(long *)(param_1 + 0x102a8);
    __ZdlPv();
  }
  func_0x00010ad18378(param_1 + 0x48,0);
  func_0x00010ad18378(param_1 + 0x40,0);
  func_0x00010ad182f4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ad182c4; end: 10ad182d7;  */

void FUN_10ad182c4(void)

{
  func_0x00010ad18238();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad182d8; end: 10ad182f3;  */

undefined8 FUN_10ad182d8(void)

{
  return 0;
}



/* Entry: 10ad182f4; end: 10ad18407;  */

long * FUN_10ad182f4(long *param_1)

{
  long lVar1;
  
  func_0x00010ad1832c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ad18408; end: 10ad18547;  */

long * FUN_10ad18408(long *param_1,int *param_2)

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
    uVar3 = (ulong)*param_2;
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
          if (*(int *)(plVar6 + 2) == *param_2) {
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


