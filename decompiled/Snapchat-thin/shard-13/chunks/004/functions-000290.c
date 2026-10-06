/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a5bd90c; end: 10a5bd9f3;  */

void FUN_10a5bd90c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5bd9c8);
    (*pcVar4)();
  }
  lVar6 = param_1[3];
  param_1[3] = 0;
  lStack_28 = lVar6;
  FUN_10a3d0da0(*(undefined8 *)(*param_1 + 0x108));
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
        goto LAB_10a5bd980;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a5bd980:
      if ((char)param_1[2] == '\x01') {
        *(undefined1 *)(param_1 + 2) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a5bd9f4; end: 10a5bdb3b;  */

undefined8 * FUN_10a5bd9f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf7ad0;
  if (param_1[0x17] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a5bdb3c; end: 10a5bdbc3;  */

void FUN_10a5bdb3c(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  cVar1 = param_1[0x158];
  if (cVar1 == param_2[0x158]) {
    if (cVar1 != '\0') {
      puVar8 = (ulong *)(param_2 + 0xb0);
      puVar9 = (ulong *)(param_1 + 0xb0);
      *param_1 = *param_2;
      FUN_10a5bdbc4(param_1 + 8,param_2 + 8);
      if (puVar9 != puVar8) {
        puVar6 = (undefined8 *)(param_1 + 0xb8);
        uVar4 = *puVar9;
        puVar7 = (undefined8 *)(param_2 + 0xb8);
        uVar5 = *puVar8;
        uVar2 = uVar4;
        if (uVar5 <= uVar4) {
          uVar2 = uVar5;
        }
        lVar3 = 0;
        if (uVar4 <= uVar5) {
          lVar3 = uVar5 - uVar4;
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          uVar10 = *puVar7;
          puVar6[1] = puVar7[1];
          *puVar6 = uVar10;
          uVar11 = puVar7[3];
          uVar10 = puVar7[2];
          uVar13 = puVar7[5];
          uVar12 = puVar7[4];
          uVar14 = puVar7[6];
          uVar16 = puVar7[9];
          uVar15 = puVar7[8];
          puVar6[7] = puVar7[7];
          puVar6[6] = uVar14;
          puVar6[9] = uVar16;
          puVar6[8] = uVar15;
          puVar6[3] = uVar11;
          puVar6[2] = uVar10;
          puVar6[5] = uVar13;
          puVar6[4] = uVar12;
          puVar6 = puVar6 + 10;
          puVar7 = puVar7 + 10;
        }
        if (uVar4 < uVar5) {
          do {
            uVar10 = *puVar7;
            puVar6[1] = puVar7[1];
            *puVar6 = uVar10;
            uVar11 = puVar7[3];
            uVar10 = puVar7[2];
            uVar13 = puVar7[5];
            uVar12 = puVar7[4];
            uVar14 = puVar7[6];
            uVar16 = puVar7[9];
            uVar15 = puVar7[8];
            puVar6[7] = puVar7[7];
            puVar6[6] = uVar14;
            puVar6[9] = uVar16;
            puVar6[8] = uVar15;
            puVar6[3] = uVar11;
            puVar6[2] = uVar10;
            puVar6[5] = uVar13;
            puVar6[4] = uVar12;
            puVar6 = puVar6 + 10;
            puVar7 = puVar7 + 10;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
        *puVar9 = *puVar8;
      }
      return;
    }
  }
  else if (cVar1 == '\0') {
    func_0x00010a5bdc68(param_1);
    param_1[0x158] = 1;
  }
  else {
    param_1[0x158] = 0;
  }
  return;
}



/* Entry: 10a5bdbc4; end: 10a5bdcf3;  */

void FUN_10a5bdbc4(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 1;
    uVar4 = *param_1;
    puVar2 = param_2 + 1;
    uVar5 = *param_2;
    uVar7 = uVar4;
    if (uVar5 <= uVar4) {
      uVar7 = uVar5;
    }
    lVar1 = 0;
    if (uVar4 <= uVar5) {
      lVar1 = uVar5 - uVar4;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      uVar6 = *puVar2;
      puVar3[1] = puVar2[1];
      *puVar3 = uVar6;
      uVar8 = puVar2[3];
      uVar6 = puVar2[2];
      uVar10 = puVar2[5];
      uVar9 = puVar2[4];
      uVar11 = puVar2[6];
      uVar13 = puVar2[9];
      uVar12 = puVar2[8];
      puVar3[7] = puVar2[7];
      puVar3[6] = uVar11;
      puVar3[9] = uVar13;
      puVar3[8] = uVar12;
      puVar3[3] = uVar8;
      puVar3[2] = uVar6;
      puVar3[5] = uVar10;
      puVar3[4] = uVar9;
      puVar3 = puVar3 + 10;
      puVar2 = puVar2 + 10;
    }
    if (uVar4 < uVar5) {
      do {
        uVar7 = *puVar2;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar7;
        uVar4 = puVar2[3];
        uVar7 = puVar2[2];
        uVar6 = puVar2[5];
        uVar5 = puVar2[4];
        uVar8 = puVar2[6];
        uVar10 = puVar2[9];
        uVar9 = puVar2[8];
        puVar3[7] = puVar2[7];
        puVar3[6] = uVar8;
        puVar3[9] = uVar10;
        puVar3[8] = uVar9;
        puVar3[3] = uVar4;
        puVar3[2] = uVar7;
        puVar3[5] = uVar6;
        puVar3[4] = uVar5;
        puVar3 = puVar3 + 10;
        puVar2 = puVar2 + 10;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
    *param_1 = *param_2;
  }
  return;
}



/* Entry: 10a5bdcf4; end: 10a5bdf1b;  */

void FUN_10a5bdcf4(char *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined1 uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  if ((param_1[1] & 1U) == 0) {
    param_1[1] = '\x01';
    if (*param_1 == '\x01') {
      *param_1 = '\0';
      puVar6 = PTR___tlv_bootstrap_11340d750;
      ppuVar11 = &PTR___tlv_bootstrap_11340d750;
      ppuVar8 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d750)();
      ppuVar9 = &PTR___tlv_bootstrap_11340d738;
      if (((ulong)*ppuVar8 & 1) == 0) {
        ppuVar8 = ppuVar9;
        (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
        __tlv_atexit(0x10a132a8c,ppuVar8,0x100000000);
        (*(code *)puVar6)();
        *(undefined1 *)ppuVar11 = 1;
      }
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      lVar16 = lRam00000001137eb468;
      plVar14 = (long *)ppuVar9[2];
      if (plVar14 != (long *)0x0) {
        if (*(long *)(param_1 + 8) != 0) {
          lVar13 = plVar14[1];
          bVar5 = *(byte *)(lVar13 + 0x42) | *(byte *)(lVar13 + 0x43);
          if ((((bVar5 & 1) != 0) || ((*(byte *)(lVar13 + 0x40) & 1) != 0)) ||
             (*(char *)(lVar13 + 0x3f) == '\x01')) {
            uVar17 = cntfrq_el0;
            InstructionSynchronizationBarrier();
            uVar15 = cntvct_el0;
            if (uVar17 != 1000000000) {
              uVar3 = 0;
              if (uVar17 != 0) {
                uVar3 = uVar15 / uVar17;
              }
              uVar4 = 0;
              if (uVar17 != 0) {
                uVar4 = ((uVar15 - uVar3 * uVar17) * 1000000000) / uVar17;
              }
              uVar15 = uVar4 + uVar3 * 1000000000;
            }
            if ((bVar5 & 1) != 0) {
              uVar1 = *(undefined4 *)(param_1 + 4);
              uVar2 = *(undefined2 *)(param_1 + 2);
              plVar10 = plVar14;
              FUN_10a1333cc();
              if (plVar10 != (long *)0x0) {
                uVar12 = 6;
                if (lRam00000001137eb468 != lVar16) {
                  uVar12 = 8;
                }
                lVar13 = 0;
                if (lRam00000001137eb468 != lVar16) {
                  lVar13 = lVar16;
                }
                *plVar10 = (long)&DAT_10f666beb;
                plVar10[1] = lVar13;
                plVar10[2] = uVar15;
                *(undefined4 *)(plVar10 + 3) = uVar1;
                *(undefined2 *)((long)plVar10 + 0x1c) = uVar2;
                *(undefined1 *)((long)plVar10 + 0x1e) = uVar12;
                if ((*(byte *)(plVar14 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a5bdf18);
                  (*pcVar7)();
                }
                plVar14[0x18] = plVar14[0x18] + 1;
              }
            }
            if (*(char *)(plVar14[1] + 0x40) == '\x01') {
              uVar17 = *(ulong *)(param_1 + 8);
              if (uVar17 <= uVar15) {
                lVar16 = *plVar14;
                __ZNSt3__15mutex4lockEv(lVar16 + 0x500);
                FUN_10a15387c((double)(uVar15 - uVar17),lVar16,lVar16 + 0x500,uVar17,uVar15);
                __ZNSt3__15mutex6unlockEv(lVar16 + 0x500);
              }
            }
          }
        }
        if (((*(char *)(plVar14[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
           (plVar14 = (long *)plVar14[0xb], plVar14 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010a5bdec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar14 + 0x30))(plVar14,*(undefined8 *)(param_1 + 0x10));
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10a5bdf1c; end: 10a5bdf87;  */

undefined8 * FUN_10a5bdf1c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_10a002568(*param_1,puVar2,uVar1);
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    uVar5 = *param_1;
    lVar3 = lVar4;
    _strlen(lVar4);
    FUN_10a002568(uVar5,lVar4,lVar3);
  }
  return param_1;
}



/* Entry: 10a5bdf88; end: 10a5bee03;  */

void FUN_10a5bdf88(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  
LAB_10a5bdfb4:
  do {
    plVar22 = param_1;
    uVar13 = (long)param_2 - (long)plVar22 >> 3;
    if (uVar13 - 2 == 0 || (long)uVar13 < 2) {
      if (uVar13 < 2) {
        return;
      }
      if (uVar13 == 2) {
        lVar11 = param_2[-1];
        lVar14 = *plVar22;
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (!bVar2) {
          return;
        }
        *plVar22 = lVar11;
        param_2[-1] = lVar14;
        return;
      }
    }
    else {
      if (uVar13 == 3) {
        lVar11 = *plVar22;
        lVar14 = plVar22[1];
        iVar3 = *(int *)(lVar14 + 0x184);
        iVar4 = *(int *)(lVar11 + 0x184);
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar3 != iVar4) {
          bVar2 = iVar4 < iVar3;
        }
        lVar17 = param_2[-1];
        bVar7 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar17 + 0x184) != iVar3) {
          bVar7 = iVar3 < *(int *)(lVar17 + 0x184);
        }
        if (bVar2) {
          if (bVar7) {
            *plVar22 = lVar17;
          }
          else {
            *plVar22 = lVar14;
            plVar22[1] = lVar11;
            lVar14 = param_2[-1];
            bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
            if (*(int *)(lVar14 + 0x184) != iVar4) {
              bVar2 = iVar4 < *(int *)(lVar14 + 0x184);
            }
            if (!bVar2) {
              return;
            }
            plVar22[1] = lVar14;
          }
          param_2[-1] = lVar11;
          return;
        }
        if (!bVar7) {
          return;
        }
        plVar22[1] = lVar17;
        param_2[-1] = lVar14;
        lVar11 = *plVar22;
        lVar14 = plVar22[1];
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (*(int *)(lVar14 + 0x184) != *(int *)(lVar11 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar14 + 0x184);
        }
        if (!bVar2) {
          return;
        }
        *plVar22 = lVar14;
        plVar22[1] = lVar11;
        return;
      }
      if (uVar13 == 4) {
        plVar9 = plVar22 + 1;
        plVar10 = plVar22 + 2;
        lVar11 = *plVar9;
        lVar14 = *plVar22;
        iVar3 = *(int *)(lVar11 + 0x184);
        iVar4 = *(int *)(lVar14 + 0x184);
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (iVar3 != iVar4) {
          bVar2 = iVar4 < iVar3;
        }
        lVar17 = *plVar10;
        bVar7 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (*(int *)(lVar17 + 0x184) != iVar3) {
          bVar7 = iVar3 < *(int *)(lVar17 + 0x184);
        }
        if (bVar2) {
          if (bVar7) {
            *plVar22 = lVar17;
          }
          else {
            *plVar22 = lVar11;
            *plVar9 = lVar14;
            lVar17 = *plVar10;
            bVar2 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar14 + 0x188);
            if (*(int *)(lVar17 + 0x184) != iVar4) {
              bVar2 = iVar4 < *(int *)(lVar17 + 0x184);
            }
            if (!bVar2) goto LAB_10a5beef8;
            *plVar9 = lVar17;
          }
          *plVar10 = lVar14;
          lVar17 = lVar14;
        }
        else if (bVar7) {
          *plVar9 = lVar17;
          *plVar10 = lVar11;
          lVar14 = *plVar9;
          lVar16 = *plVar22;
          bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar16 + 0x188);
          if (*(int *)(lVar14 + 0x184) != *(int *)(lVar16 + 0x184)) {
            bVar2 = *(int *)(lVar16 + 0x184) < *(int *)(lVar14 + 0x184);
          }
          lVar17 = lVar11;
          if (bVar2) {
            *plVar22 = lVar14;
            *plVar9 = lVar16;
            lVar17 = *plVar10;
          }
        }
LAB_10a5beef8:
        lVar11 = param_2[-1];
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar17 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar17 + 0x184)) {
          bVar2 = *(int *)(lVar17 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (bVar2) {
          *plVar10 = lVar11;
          param_2[-1] = lVar17;
          lVar11 = *plVar10;
          lVar14 = *plVar9;
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
          if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
            bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
          }
          if (bVar2) {
            *plVar9 = lVar11;
            *plVar10 = lVar14;
            lVar11 = *plVar9;
            lVar14 = *plVar22;
            bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
            if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
              bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
            }
            if (bVar2) {
              *plVar22 = lVar11;
              *plVar9 = lVar14;
            }
          }
        }
        return;
      }
      if (uVar13 == 5) {
        FUN_10a5bee04(plVar22,plVar22 + 1,plVar22 + 2,plVar22 + 3);
        lVar11 = param_2[-1];
        lVar14 = plVar22[3];
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (!bVar2) {
          return;
        }
        plVar22[3] = lVar11;
        param_2[-1] = lVar14;
        lVar11 = plVar22[2];
        lVar14 = plVar22[3];
        iVar3 = *(int *)(lVar14 + 0x184);
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar3 != *(int *)(lVar11 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < iVar3;
        }
        if (!bVar2) {
          return;
        }
        plVar22[2] = lVar14;
        plVar22[3] = lVar11;
        lVar11 = plVar22[1];
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar3 != *(int *)(lVar11 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < iVar3;
        }
        if (!bVar2) {
          return;
        }
        plVar22[1] = lVar14;
        plVar22[2] = lVar11;
        lVar11 = *plVar22;
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar3 != *(int *)(lVar11 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < iVar3;
        }
        if (!bVar2) {
          return;
        }
        *plVar22 = lVar14;
        plVar22[1] = lVar11;
        return;
      }
    }
    if ((long)uVar13 < 0x18) {
      plVar9 = plVar22 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar22 == param_2 || plVar9 == param_2) {
          return;
        }
        lVar11 = 0;
        lVar14 = 8;
        do {
          lVar17 = *(long *)((long)plVar22 + lVar11);
          lVar11 = *plVar9;
          iVar3 = *(int *)(lVar11 + 0x184);
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar17 + 0x188);
          if (iVar3 != *(int *)(lVar17 + 0x184)) {
            bVar2 = *(int *)(lVar17 + 0x184) < iVar3;
          }
          lVar16 = lVar14;
          if (bVar2) {
            do {
              *(long *)((long)plVar22 + lVar16) = lVar17;
              if (lVar16 == 0) goto LAB_10a5bedb0;
              lVar17 = ((long *)((long)plVar22 + lVar16))[-2];
              bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar17 + 0x188);
              if (iVar3 != *(int *)(lVar17 + 0x184)) {
                bVar2 = *(int *)(lVar17 + 0x184) < iVar3;
              }
              lVar16 = lVar16 + -8;
            } while (bVar2);
            *(long *)((long)plVar22 + lVar16) = lVar11;
          }
          plVar9 = (long *)((long)plVar22 + lVar14 + 8);
          lVar11 = lVar14;
          lVar14 = lVar14 + 8;
          if (plVar9 == param_2) {
            return;
          }
        } while( true );
      }
      if (plVar22 == param_2 || plVar9 == param_2) {
        return;
      }
      lVar11 = 0;
      plVar10 = plVar22;
      do {
        lVar14 = *plVar10;
        lVar17 = plVar10[1];
        iVar3 = *(int *)(lVar17 + 0x184);
        bVar2 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (iVar3 != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar14 + 0x184) < iVar3;
        }
        lVar16 = lVar11;
        if (bVar2) {
          do {
            lVar19 = lVar16;
            *(long *)((long)plVar22 + lVar19 + 8) = lVar14;
            plVar10 = plVar22;
            if (lVar19 == 0) goto LAB_10a5bea1c;
            lVar14 = *(long *)((long)plVar22 + lVar19 + -8);
            bVar2 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar14 + 0x188);
            if (iVar3 != *(int *)(lVar14 + 0x184)) {
              bVar2 = *(int *)(lVar14 + 0x184) < iVar3;
            }
            lVar16 = lVar19 + -8;
          } while (bVar2);
          plVar10 = (long *)((long)plVar22 + lVar19);
LAB_10a5bea1c:
          *plVar10 = lVar17;
        }
        plVar18 = plVar9 + 1;
        lVar11 = lVar11 + 8;
        plVar10 = plVar9;
        plVar9 = plVar18;
        if (plVar18 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar22 == param_2) {
        return;
      }
      uVar12 = uVar13 - 2 >> 1;
      uVar15 = uVar12;
      do {
        if ((long)uVar15 <= (long)uVar12) {
          uVar20 = uVar15 << 1 | 1;
          plVar9 = plVar22 + uVar20;
          uVar1 = uVar15 * 2 + 2;
          lVar14 = *plVar9;
          plVar10 = plVar9;
          lVar11 = lVar14;
          uVar21 = uVar20;
          if ((long)uVar1 < (long)uVar13) {
            lVar11 = plVar9[1];
            bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
            if (*(int *)(lVar14 + 0x184) != *(int *)(lVar11 + 0x184)) {
              bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar14 + 0x184);
            }
            plVar10 = plVar9 + 1;
            uVar21 = uVar1;
            if (!bVar2) {
              plVar10 = plVar9;
              lVar11 = lVar14;
              uVar21 = uVar20;
            }
          }
          lVar14 = plVar22[uVar15];
          iVar3 = *(int *)(lVar14 + 0x184);
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
          if (*(int *)(lVar11 + 0x184) != iVar3) {
            bVar2 = iVar3 < *(int *)(lVar11 + 0x184);
          }
          plVar9 = plVar22 + uVar15;
          if (!bVar2) {
            do {
              plVar18 = plVar10;
              *plVar9 = lVar11;
              if ((long)uVar12 < (long)uVar21) break;
              uVar20 = uVar21 << 1 | 1;
              plVar9 = plVar22 + uVar20;
              uVar1 = uVar21 * 2 + 2;
              lVar17 = *plVar9;
              plVar10 = plVar9;
              lVar11 = lVar17;
              uVar21 = uVar20;
              if ((long)uVar1 < (long)uVar13) {
                lVar11 = plVar9[1];
                bVar2 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar11 + 0x188);
                if (*(int *)(lVar17 + 0x184) != *(int *)(lVar11 + 0x184)) {
                  bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar17 + 0x184);
                }
                plVar10 = plVar9 + 1;
                uVar21 = uVar1;
                if (!bVar2) {
                  plVar10 = plVar9;
                  lVar11 = lVar17;
                  uVar21 = uVar20;
                }
              }
              bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
              if (*(int *)(lVar11 + 0x184) != iVar3) {
                bVar2 = iVar3 < *(int *)(lVar11 + 0x184);
              }
              plVar9 = plVar18;
            } while (!bVar2);
            *plVar18 = lVar14;
          }
        }
        bVar2 = uVar15 != 0;
        uVar15 = uVar15 - 1;
      } while (bVar2);
      do {
        lVar11 = *plVar22;
        plVar9 = plVar22;
        uVar15 = 0;
        do {
          plVar18 = plVar9 + uVar15 + 1;
          lVar17 = *plVar18;
          uVar1 = uVar15 << 1 | 1;
          uVar12 = uVar15 * 2 + 2;
          plVar10 = plVar18;
          lVar14 = lVar17;
          uVar20 = uVar1;
          if ((long)uVar12 < (long)uVar13) {
            lVar14 = plVar9[uVar15 + 2];
            bVar2 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar14 + 0x188);
            if (*(int *)(lVar17 + 0x184) != *(int *)(lVar14 + 0x184)) {
              bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar17 + 0x184);
            }
            plVar10 = plVar9 + uVar15 + 2;
            uVar20 = uVar12;
            if (!bVar2) {
              plVar10 = plVar18;
              lVar14 = lVar17;
              uVar20 = uVar1;
            }
          }
          *plVar9 = lVar14;
          plVar9 = plVar10;
          uVar15 = uVar20;
        } while ((long)uVar20 <= (long)(uVar13 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar10 == param_2) {
          *plVar10 = lVar11;
        }
        else {
          *plVar10 = *param_2;
          *param_2 = lVar11;
          lVar11 = (long)plVar10 + (8 - (long)plVar22) >> 3;
          if (1 < lVar11) {
            uVar15 = lVar11 - 2U >> 1;
            lVar14 = plVar22[uVar15];
            lVar11 = *plVar10;
            iVar3 = *(int *)(lVar11 + 0x184);
            bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
            if (*(int *)(lVar14 + 0x184) != iVar3) {
              bVar2 = iVar3 < *(int *)(lVar14 + 0x184);
            }
            plVar9 = plVar22 + uVar15;
            if (bVar2) {
              do {
                plVar18 = plVar9;
                *plVar10 = lVar14;
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1 >> 1;
                lVar14 = plVar22[uVar15];
                bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
                if (*(int *)(lVar14 + 0x184) != iVar3) {
                  bVar2 = iVar3 < *(int *)(lVar14 + 0x184);
                }
                plVar10 = plVar18;
                plVar9 = plVar22 + uVar15;
              } while (bVar2);
              *plVar18 = lVar11;
            }
          }
        }
        bVar2 = (long)uVar13 < 3;
        uVar13 = uVar13 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    plVar9 = plVar22 + (uVar13 >> 1);
    lVar11 = param_2[-1];
    iVar3 = *(int *)(lVar11 + 0x184);
    if (uVar13 < 0x81) {
      lVar17 = *plVar22;
      lVar14 = *plVar9;
      iVar4 = *(int *)(lVar17 + 0x184);
      iVar5 = *(int *)(lVar14 + 0x184);
      bVar2 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (iVar4 != iVar5) {
        bVar2 = iVar5 < iVar4;
      }
      bVar7 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar17 + 0x188);
      if (iVar3 != iVar4) {
        bVar7 = iVar4 < iVar3;
      }
      if (bVar2) {
        if (bVar7) {
          *plVar9 = lVar11;
        }
        else {
          *plVar9 = lVar17;
          *plVar22 = lVar14;
          lVar11 = param_2[-1];
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
          if (*(int *)(lVar11 + 0x184) != iVar5) {
            bVar2 = iVar5 < *(int *)(lVar11 + 0x184);
          }
          if (!bVar2) goto LAB_10a5be468;
          *plVar22 = lVar11;
        }
        param_2[-1] = lVar14;
      }
      else if (bVar7) {
        *plVar22 = lVar11;
        param_2[-1] = lVar17;
        lVar11 = *plVar22;
        lVar14 = *plVar9;
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (bVar2) {
          *plVar9 = lVar11;
          *plVar22 = lVar14;
        }
      }
    }
    else {
      lVar17 = *plVar9;
      lVar14 = *plVar22;
      iVar4 = *(int *)(lVar17 + 0x184);
      iVar5 = *(int *)(lVar14 + 0x184);
      bVar2 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (iVar4 != iVar5) {
        bVar2 = iVar5 < iVar4;
      }
      bVar7 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar17 + 0x188);
      if (iVar3 != iVar4) {
        bVar7 = iVar4 < iVar3;
      }
      if (bVar2) {
        if (bVar7) {
          *plVar22 = lVar11;
        }
        else {
          *plVar22 = lVar17;
          *plVar9 = lVar14;
          lVar11 = param_2[-1];
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
          if (*(int *)(lVar11 + 0x184) != iVar5) {
            bVar2 = iVar5 < *(int *)(lVar11 + 0x184);
          }
          if (!bVar2) goto LAB_10a5be18c;
          *plVar9 = lVar11;
        }
        param_2[-1] = lVar14;
      }
      else if (bVar7) {
        *plVar9 = lVar11;
        param_2[-1] = lVar17;
        lVar11 = *plVar9;
        lVar14 = *plVar22;
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (bVar2) {
          *plVar22 = lVar11;
          *plVar9 = lVar14;
        }
      }
LAB_10a5be18c:
      lVar14 = plVar9[-1];
      lVar11 = plVar22[1];
      iVar3 = *(int *)(lVar14 + 0x184);
      iVar4 = *(int *)(lVar11 + 0x184);
      bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
      if (iVar3 != iVar4) {
        bVar2 = iVar4 < iVar3;
      }
      lVar17 = param_2[-2];
      bVar7 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (*(int *)(lVar17 + 0x184) != iVar3) {
        bVar7 = iVar3 < *(int *)(lVar17 + 0x184);
      }
      if (bVar2) {
        if (bVar7) {
          plVar22[1] = lVar17;
        }
        else {
          plVar22[1] = lVar14;
          plVar9[-1] = lVar11;
          lVar14 = param_2[-2];
          bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (*(int *)(lVar14 + 0x184) != iVar4) {
            bVar2 = iVar4 < *(int *)(lVar14 + 0x184);
          }
          if (!bVar2) goto LAB_10a5be2b0;
          plVar9[-1] = lVar14;
        }
        param_2[-2] = lVar11;
      }
      else if (bVar7) {
        plVar9[-1] = lVar17;
        param_2[-2] = lVar14;
        lVar11 = plVar9[-1];
        lVar14 = plVar22[1];
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (bVar2) {
          plVar22[1] = lVar11;
          plVar9[-1] = lVar14;
        }
      }
LAB_10a5be2b0:
      lVar14 = plVar9[1];
      lVar11 = plVar22[2];
      iVar3 = *(int *)(lVar14 + 0x184);
      iVar4 = *(int *)(lVar11 + 0x184);
      bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
      if (iVar3 != iVar4) {
        bVar2 = iVar4 < iVar3;
      }
      lVar17 = param_2[-3];
      bVar7 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (*(int *)(lVar17 + 0x184) != iVar3) {
        bVar7 = iVar3 < *(int *)(lVar17 + 0x184);
      }
      if (bVar2) {
        if (bVar7) {
          plVar22[2] = lVar17;
        }
        else {
          plVar22[2] = lVar14;
          plVar9[1] = lVar11;
          lVar14 = param_2[-3];
          bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (*(int *)(lVar14 + 0x184) != iVar4) {
            bVar2 = iVar4 < *(int *)(lVar14 + 0x184);
          }
          if (!bVar2) goto LAB_10a5be394;
          plVar9[1] = lVar14;
        }
        param_2[-3] = lVar11;
      }
      else if (bVar7) {
        plVar9[1] = lVar17;
        param_2[-3] = lVar14;
        lVar11 = plVar9[1];
        lVar14 = plVar22[2];
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (bVar2) {
          plVar22[2] = lVar11;
          plVar9[1] = lVar14;
        }
      }
LAB_10a5be394:
      lVar11 = plVar9[-1];
      lVar14 = *plVar9;
      iVar3 = *(int *)(lVar14 + 0x184);
      iVar4 = *(int *)(lVar11 + 0x184);
      bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
      if (iVar3 != iVar4) {
        bVar2 = iVar4 < iVar3;
      }
      lVar17 = plVar9[1];
      iVar5 = *(int *)(lVar17 + 0x184);
      bVar7 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (iVar5 != iVar3) {
        bVar7 = iVar3 < iVar5;
      }
      if (bVar2) {
        if (bVar7) {
          plVar9[-1] = lVar17;
          plVar9[1] = lVar11;
        }
        else {
          plVar9[-1] = lVar14;
          *plVar9 = lVar11;
          bVar2 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (iVar5 != iVar4) {
            bVar2 = iVar4 < iVar5;
          }
          lVar14 = lVar11;
          if (bVar2) {
            *plVar9 = lVar17;
            plVar9[1] = lVar11;
            lVar14 = lVar17;
          }
        }
      }
      else if (bVar7) {
        *plVar9 = lVar17;
        plVar9[1] = lVar14;
        bVar2 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar5 != iVar4) {
          bVar2 = iVar4 < iVar5;
        }
        lVar14 = lVar17;
        if (bVar2) {
          plVar9[-1] = lVar17;
          *plVar9 = lVar11;
          lVar14 = lVar11;
        }
      }
      lVar11 = *plVar22;
      *plVar22 = lVar14;
      *plVar9 = lVar11;
    }
LAB_10a5be468:
    param_3 = param_3 + -1;
    lVar11 = *plVar22;
    param_1 = plVar22;
    if ((param_4 & 1) == 0) {
      iVar3 = *(int *)(plVar22[-1] + 0x184);
      iVar4 = *(int *)(lVar11 + 0x184);
      uVar6 = *(uint *)(lVar11 + 0x188);
      bVar2 = *(uint *)(plVar22[-1] + 0x188) < uVar6;
      if (iVar3 != iVar4) {
        bVar2 = iVar4 < iVar3;
      }
      if (!bVar2) {
        iVar3 = *(int *)(param_2[-1] + 0x184);
        bVar2 = uVar6 < *(uint *)(param_2[-1] + 0x188);
        if (iVar4 != iVar3) {
          bVar2 = iVar3 < iVar4;
        }
        if (bVar2) {
          do {
            param_1 = param_1 + 1;
            if (param_1 == param_2) goto LAB_10a5bedb0;
            iVar3 = *(int *)(*param_1 + 0x184);
            bVar2 = uVar6 < *(uint *)(*param_1 + 0x188);
            if (iVar4 != iVar3) {
              bVar2 = iVar3 < iVar4;
            }
          } while (!bVar2);
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
            iVar3 = *(int *)(*param_1 + 0x184);
            bVar2 = uVar6 < *(uint *)(*param_1 + 0x188);
            if (iVar4 != iVar3) {
              bVar2 = iVar3 < iVar4;
            }
          } while (!bVar2);
        }
        plVar9 = param_2;
        if (param_1 < param_2) {
          do {
            if (plVar9 == plVar22) goto LAB_10a5bedb0;
            plVar9 = plVar9 + -1;
            iVar3 = *(int *)(*plVar9 + 0x184);
            bVar2 = uVar6 < *(uint *)(*plVar9 + 0x188);
            if (iVar4 != iVar3) {
              bVar2 = iVar3 < iVar4;
            }
          } while (bVar2);
        }
        if (param_1 < plVar9) {
          lVar14 = *param_1;
          lVar17 = *plVar9;
          do {
            *param_1 = lVar17;
            *plVar9 = lVar14;
            do {
              param_1 = param_1 + 1;
              if (param_1 == param_2) goto LAB_10a5bedb0;
              lVar14 = *param_1;
              bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
              if (iVar4 != *(int *)(lVar14 + 0x184)) {
                bVar2 = *(int *)(lVar14 + 0x184) < iVar4;
              }
            } while (!bVar2);
            do {
              if (plVar9 == plVar22) goto LAB_10a5bedb0;
              plVar9 = plVar9 + -1;
              lVar17 = *plVar9;
              bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar17 + 0x188);
              if (iVar4 != *(int *)(lVar17 + 0x184)) {
                bVar2 = *(int *)(lVar17 + 0x184) < iVar4;
              }
            } while (bVar2);
          } while (param_1 < plVar9);
        }
        plVar9 = param_1 + -1;
        if (plVar9 != plVar22) {
          *plVar22 = *plVar9;
        }
        param_4 = 0;
        *plVar9 = lVar11;
        goto LAB_10a5bdfb4;
      }
    }
    lVar14 = 0;
    do {
      plVar9 = (long *)((long)plVar22 + lVar14 + 8);
      if (plVar9 == param_2) goto LAB_10a5bedb0;
      lVar17 = *plVar9;
      iVar3 = *(int *)(lVar11 + 0x184);
      uVar6 = *(uint *)(lVar11 + 0x188);
      bVar2 = *(uint *)(lVar17 + 0x188) < uVar6;
      if (*(int *)(lVar17 + 0x184) != iVar3) {
        bVar2 = iVar3 < *(int *)(lVar17 + 0x184);
      }
      lVar14 = lVar14 + 8;
    } while (bVar2);
    plVar9 = (long *)((long)plVar22 + lVar14);
    plVar10 = param_2;
    if (lVar14 == 8) {
      do {
        if (plVar10 <= plVar9) break;
        plVar10 = plVar10 + -1;
        iVar4 = *(int *)(*plVar10 + 0x184);
        bVar2 = *(uint *)(*plVar10 + 0x188) < uVar6;
        if (iVar4 != iVar3) {
          bVar2 = iVar3 < iVar4;
        }
      } while (!bVar2);
    }
    else {
      do {
        if (plVar10 == plVar22) {
LAB_10a5bedb0:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a5bedb4);
          (*pcVar8)();
        }
        plVar10 = plVar10 + -1;
        iVar4 = *(int *)(*plVar10 + 0x184);
        bVar2 = *(uint *)(*plVar10 + 0x188) < uVar6;
        if (iVar4 != iVar3) {
          bVar2 = iVar3 < iVar4;
        }
      } while (!bVar2);
    }
    param_1 = plVar9;
    if (plVar9 < plVar10) {
      lVar14 = *plVar10;
      plVar18 = plVar10;
      do {
        *param_1 = lVar14;
        *plVar18 = lVar17;
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10a5bedb0;
          lVar17 = *param_1;
          bVar2 = *(uint *)(lVar17 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (*(int *)(lVar17 + 0x184) != iVar3) {
            bVar2 = iVar3 < *(int *)(lVar17 + 0x184);
          }
        } while (bVar2);
        do {
          if (plVar18 == plVar22) goto LAB_10a5bedb0;
          plVar18 = plVar18 + -1;
          lVar14 = *plVar18;
          bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (*(int *)(lVar14 + 0x184) != iVar3) {
            bVar2 = iVar3 < *(int *)(lVar14 + 0x184);
          }
        } while (!bVar2);
      } while (param_1 < plVar18);
    }
    plVar18 = param_1 + -1;
    if (plVar18 != plVar22) {
      *plVar22 = *plVar18;
    }
    *plVar18 = lVar11;
    if (plVar9 < plVar10) {
LAB_10a5be634:
      FUN_10a5bdf88(plVar22,plVar18,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      plVar9 = plVar22;
      FUN_10a5befac(plVar22,plVar18);
      plVar10 = param_1;
      FUN_10a5befac(param_1,param_2);
      if ((int)plVar10 == 0) {
        if (((ulong)plVar9 & 1) == 0) goto LAB_10a5be634;
      }
      else {
        param_1 = plVar22;
        param_2 = plVar18;
        if (((ulong)plVar9 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10a5bee04; end: 10a5befab;  */

void FUN_10a5bee04(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *param_2;
  lVar6 = *param_1;
  iVar1 = *(int *)(lVar5 + 0x184);
  iVar2 = *(int *)(lVar6 + 0x184);
  bVar3 = *(uint *)(lVar5 + 0x188) < *(uint *)(lVar6 + 0x188);
  if (iVar1 != iVar2) {
    bVar3 = iVar2 < iVar1;
  }
  lVar8 = *param_3;
  bVar4 = *(uint *)(lVar8 + 0x188) < *(uint *)(lVar5 + 0x188);
  if (*(int *)(lVar8 + 0x184) != iVar1) {
    bVar4 = iVar1 < *(int *)(lVar8 + 0x184);
  }
  if (bVar3) {
    if (bVar4) {
      *param_1 = lVar8;
    }
    else {
      *param_1 = lVar5;
      *param_2 = lVar6;
      lVar8 = *param_3;
      bVar3 = *(uint *)(lVar8 + 0x188) < *(uint *)(lVar6 + 0x188);
      if (*(int *)(lVar8 + 0x184) != iVar2) {
        bVar3 = iVar2 < *(int *)(lVar8 + 0x184);
      }
      if (!bVar3) goto LAB_10a5beef8;
      *param_2 = lVar8;
    }
    *param_3 = lVar6;
    lVar8 = lVar6;
  }
  else if (bVar4) {
    *param_2 = lVar8;
    *param_3 = lVar5;
    lVar6 = *param_2;
    lVar7 = *param_1;
    bVar3 = *(uint *)(lVar6 + 0x188) < *(uint *)(lVar7 + 0x188);
    if (*(int *)(lVar6 + 0x184) != *(int *)(lVar7 + 0x184)) {
      bVar3 = *(int *)(lVar7 + 0x184) < *(int *)(lVar6 + 0x184);
    }
    lVar8 = lVar5;
    if (bVar3) {
      *param_1 = lVar6;
      *param_2 = lVar7;
      lVar8 = *param_3;
    }
  }
LAB_10a5beef8:
  lVar5 = *param_4;
  bVar3 = *(uint *)(lVar5 + 0x188) < *(uint *)(lVar8 + 0x188);
  if (*(int *)(lVar5 + 0x184) != *(int *)(lVar8 + 0x184)) {
    bVar3 = *(int *)(lVar8 + 0x184) < *(int *)(lVar5 + 0x184);
  }
  if (bVar3) {
    *param_3 = lVar5;
    *param_4 = lVar8;
    lVar5 = *param_3;
    lVar6 = *param_2;
    bVar3 = *(uint *)(lVar5 + 0x188) < *(uint *)(lVar6 + 0x188);
    if (*(int *)(lVar5 + 0x184) != *(int *)(lVar6 + 0x184)) {
      bVar3 = *(int *)(lVar6 + 0x184) < *(int *)(lVar5 + 0x184);
    }
    if (bVar3) {
      *param_2 = lVar5;
      *param_3 = lVar6;
      lVar5 = *param_2;
      lVar6 = *param_1;
      bVar3 = *(uint *)(lVar5 + 0x188) < *(uint *)(lVar6 + 0x188);
      if (*(int *)(lVar5 + 0x184) != *(int *)(lVar6 + 0x184)) {
        bVar3 = *(int *)(lVar6 + 0x184) < *(int *)(lVar5 + 0x184);
      }
      if (bVar3) {
        *param_1 = lVar5;
        *param_2 = lVar6;
      }
    }
  }
  return;
}



/* Entry: 10a5befac; end: 10a5bf3a3;  */

bool FUN_10a5befac(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  
  uVar7 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar7 < 3) {
    if (uVar7 < 2) {
      return true;
    }
    if (uVar7 == 2) {
      lVar8 = param_2[-1];
      lVar10 = *param_1;
      bVar5 = *(uint *)(lVar8 + 0x188) < *(uint *)(lVar10 + 0x188);
      if (*(int *)(lVar8 + 0x184) != *(int *)(lVar10 + 0x184)) {
        bVar5 = *(int *)(lVar10 + 0x184) < *(int *)(lVar8 + 0x184);
      }
      if (!bVar5) {
        return true;
      }
      *param_1 = lVar8;
      param_2[-1] = lVar10;
      return true;
    }
  }
  else {
    if (uVar7 == 3) {
      lVar8 = *param_1;
      lVar10 = param_1[1];
      iVar12 = *(int *)(lVar10 + 0x184);
      iVar2 = *(int *)(lVar8 + 0x184);
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar12 != iVar2) {
        bVar5 = iVar2 < iVar12;
      }
      lVar13 = param_2[-1];
      bVar6 = *(uint *)(lVar13 + 0x188) < *(uint *)(lVar10 + 0x188);
      if (*(int *)(lVar13 + 0x184) != iVar12) {
        bVar6 = iVar12 < *(int *)(lVar13 + 0x184);
      }
      if (bVar5) {
        if (bVar6) {
          *param_1 = lVar13;
        }
        else {
          *param_1 = lVar10;
          param_1[1] = lVar8;
          lVar10 = param_2[-1];
          bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
          if (*(int *)(lVar10 + 0x184) != iVar2) {
            bVar5 = iVar2 < *(int *)(lVar10 + 0x184);
          }
          if (!bVar5) {
            return true;
          }
          param_1[1] = lVar10;
        }
        param_2[-1] = lVar8;
        return true;
      }
      if (!bVar6) {
        return true;
      }
      param_1[1] = lVar13;
      param_2[-1] = lVar10;
      lVar8 = *param_1;
      lVar10 = param_1[1];
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (*(int *)(lVar10 + 0x184) != *(int *)(lVar8 + 0x184)) {
        bVar5 = *(int *)(lVar8 + 0x184) < *(int *)(lVar10 + 0x184);
      }
      if (!bVar5) {
        return true;
      }
      *param_1 = lVar10;
      param_1[1] = lVar8;
      return true;
    }
    if (uVar7 == 4) {
      FUN_10a5bee04(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
      return true;
    }
    if (uVar7 == 5) {
      FUN_10a5bee04(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
      lVar8 = param_2[-1];
      lVar10 = param_1[3];
      bVar5 = *(uint *)(lVar8 + 0x188) < *(uint *)(lVar10 + 0x188);
      if (*(int *)(lVar8 + 0x184) != *(int *)(lVar10 + 0x184)) {
        bVar5 = *(int *)(lVar10 + 0x184) < *(int *)(lVar8 + 0x184);
      }
      if (!bVar5) {
        return true;
      }
      param_1[3] = lVar8;
      param_2[-1] = lVar10;
      lVar8 = param_1[2];
      lVar10 = param_1[3];
      iVar12 = *(int *)(lVar10 + 0x184);
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar12 != *(int *)(lVar8 + 0x184)) {
        bVar5 = *(int *)(lVar8 + 0x184) < iVar12;
      }
      if (!bVar5) {
        return true;
      }
      param_1[2] = lVar10;
      param_1[3] = lVar8;
      lVar8 = param_1[1];
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar12 != *(int *)(lVar8 + 0x184)) {
        bVar5 = *(int *)(lVar8 + 0x184) < iVar12;
      }
      if (!bVar5) {
        return true;
      }
      param_1[1] = lVar10;
      param_1[2] = lVar8;
      lVar8 = *param_1;
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar12 != *(int *)(lVar8 + 0x184)) {
        bVar5 = *(int *)(lVar8 + 0x184) < iVar12;
      }
      if (!bVar5) {
        return true;
      }
      *param_1 = lVar10;
      param_1[1] = lVar8;
      return true;
    }
  }
  lVar13 = param_1[2];
  lVar8 = *param_1;
  lVar10 = param_1[1];
  iVar12 = *(int *)(lVar10 + 0x184);
  iVar2 = *(int *)(lVar8 + 0x184);
  bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
  if (iVar12 != iVar2) {
    bVar5 = iVar2 < iVar12;
  }
  iVar3 = *(int *)(lVar13 + 0x184);
  bVar6 = *(uint *)(lVar13 + 0x188) < *(uint *)(lVar10 + 0x188);
  if (iVar3 != iVar12) {
    bVar6 = iVar12 < iVar3;
  }
  if (bVar5) {
    if (bVar6) {
      *param_1 = lVar13;
    }
    else {
      *param_1 = lVar10;
      param_1[1] = lVar8;
      bVar5 = *(uint *)(lVar13 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar3 != iVar2) {
        bVar5 = iVar2 < iVar3;
      }
      if (!bVar5) goto LAB_10a5bf2cc;
      param_1[1] = lVar13;
    }
    param_1[2] = lVar8;
  }
  else if (bVar6) {
    param_1[1] = lVar13;
    param_1[2] = lVar10;
    bVar5 = *(uint *)(lVar13 + 0x188) < *(uint *)(lVar8 + 0x188);
    if (iVar3 != iVar2) {
      bVar5 = iVar2 < iVar3;
    }
    if (bVar5) {
      *param_1 = lVar13;
      param_1[1] = lVar8;
    }
  }
LAB_10a5bf2cc:
  if (param_1 + 3 != param_2) {
    iVar12 = 0;
    lVar8 = 0x18;
    plVar9 = param_1 + 2;
    plVar11 = param_1 + 3;
    do {
      lVar10 = *plVar11;
      lVar13 = *plVar9;
      iVar2 = *(int *)(lVar10 + 0x184);
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar13 + 0x188);
      if (iVar2 != *(int *)(lVar13 + 0x184)) {
        bVar5 = *(int *)(lVar13 + 0x184) < iVar2;
      }
      lVar14 = lVar8;
      if (bVar5) {
        do {
          *(long *)((long)param_1 + lVar14) = lVar13;
          lVar4 = lVar14 + -8;
          plVar9 = param_1;
          if (lVar4 == 0) goto LAB_10a5bf360;
          lVar13 = *(long *)((long)param_1 + lVar14 + -0x10);
          bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar13 + 0x188);
          if (iVar2 != *(int *)(lVar13 + 0x184)) {
            bVar5 = *(int *)(lVar13 + 0x184) < iVar2;
          }
          lVar14 = lVar4;
        } while (bVar5);
        plVar9 = (long *)((long)param_1 + lVar4);
LAB_10a5bf360:
        *plVar9 = lVar10;
        iVar12 = iVar12 + 1;
        if (iVar12 == 8) {
          return plVar11 + 1 == param_2;
        }
      }
      plVar1 = plVar11 + 1;
      lVar8 = lVar8 + 8;
      plVar9 = plVar11;
      plVar11 = plVar1;
    } while (plVar1 != param_2);
  }
  return true;
}



/* Entry: 10a5bf3a4; end: 10a5bf457;  */

void FUN_10a5bf3a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar2 = *(long **)**(undefined8 **)*param_1;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  lStack_28 = -0x7fffffffffffffd0;
  uStack_30 = 0x2f;
  *(undefined8 *)((long)puVar1 + 0x27) = 0x44454c42414e455f;
  *(undefined8 *)((long)puVar1 + 0x1f) = 0x54524154535f544e;
  puVar1[1] = 0x52465f454d41535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x4e454e4f504d4f43;
  puVar1[2] = 0x5f57454e5f454d41;
  *(undefined1 *)((long)puVar1 + 0x2f) = 0;
  puStack_38 = puVar1;
  (**(code **)(*plVar2 + 0x50))(plVar2,&puStack_38,1);
  uRam00000001133028c0 = SUB81(plVar2,0);
  if (lStack_28 < 0) {
    __ZdlPv(puStack_38);
  }
  return;
}



/* Entry: 10a5bf458; end: 10a5bf46b;  */

void FUN_10a5bf458(void)

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
        lVar2 = lVar2 + -8;
        __ZNSt13exception_ptrD1Ev();
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



/* Entry: 10a5bf46c; end: 10a5bf4c7;  */

void FUN_10a5bf46c(long *param_1)

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
        lVar1 = lVar1 + -8;
        __ZNSt13exception_ptrD1Ev();
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



/* Entry: 10a5bf4c8; end: 10a5c034b;  */

void FUN_10a5bf4c8(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  
LAB_10a5bf4f4:
  do {
    plVar22 = param_1;
    uVar13 = (long)param_2 - (long)plVar22 >> 3;
    if (uVar13 - 2 == 0 || (long)uVar13 < 2) {
      if (uVar13 < 2) {
        return;
      }
      if (uVar13 == 2) {
        lVar11 = param_2[-1];
        lVar14 = *plVar22;
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar14 + 0x184);
        }
        if (!bVar2) {
          return;
        }
        *plVar22 = lVar11;
        param_2[-1] = lVar14;
        return;
      }
    }
    else {
      if (uVar13 == 3) {
        lVar11 = *plVar22;
        lVar14 = plVar22[1];
        iVar3 = *(int *)(lVar14 + 0x184);
        iVar4 = *(int *)(lVar11 + 0x184);
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar3 != iVar4) {
          bVar2 = iVar3 < iVar4;
        }
        lVar16 = param_2[-1];
        bVar7 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar16 + 0x184) != iVar3) {
          bVar7 = *(int *)(lVar16 + 0x184) < iVar3;
        }
        if (bVar2) {
          if (bVar7) {
            *plVar22 = lVar16;
          }
          else {
            *plVar22 = lVar14;
            plVar22[1] = lVar11;
            lVar14 = param_2[-1];
            bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
            if (*(int *)(lVar14 + 0x184) != iVar4) {
              bVar2 = *(int *)(lVar14 + 0x184) < iVar4;
            }
            if (!bVar2) {
              return;
            }
            plVar22[1] = lVar14;
          }
          param_2[-1] = lVar11;
          return;
        }
        if (!bVar7) {
          return;
        }
        plVar22[1] = lVar16;
        param_2[-1] = lVar14;
        lVar11 = *plVar22;
        lVar14 = plVar22[1];
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (*(int *)(lVar14 + 0x184) != *(int *)(lVar11 + 0x184)) {
          bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (!bVar2) {
          return;
        }
        *plVar22 = lVar14;
        plVar22[1] = lVar11;
        return;
      }
      if (uVar13 == 4) {
        plVar9 = plVar22 + 1;
        plVar10 = plVar22 + 2;
        lVar11 = *plVar9;
        lVar14 = *plVar22;
        iVar3 = *(int *)(lVar11 + 0x184);
        iVar4 = *(int *)(lVar14 + 0x184);
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (iVar3 != iVar4) {
          bVar2 = iVar3 < iVar4;
        }
        lVar16 = *plVar10;
        bVar7 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (*(int *)(lVar16 + 0x184) != iVar3) {
          bVar7 = *(int *)(lVar16 + 0x184) < iVar3;
        }
        if (bVar2) {
          if (bVar7) {
            *plVar22 = lVar16;
          }
          else {
            *plVar22 = lVar11;
            *plVar9 = lVar14;
            lVar16 = *plVar10;
            bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
            if (*(int *)(lVar16 + 0x184) != iVar4) {
              bVar2 = *(int *)(lVar16 + 0x184) < iVar4;
            }
            if (!bVar2) goto LAB_10a5c0440;
            *plVar9 = lVar16;
          }
          *plVar10 = lVar14;
          lVar16 = lVar14;
        }
        else if (bVar7) {
          *plVar9 = lVar16;
          *plVar10 = lVar11;
          lVar14 = *plVar9;
          lVar19 = *plVar22;
          bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar19 + 0x188);
          if (*(int *)(lVar14 + 0x184) != *(int *)(lVar19 + 0x184)) {
            bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar19 + 0x184);
          }
          lVar16 = lVar11;
          if (bVar2) {
            *plVar22 = lVar14;
            *plVar9 = lVar19;
            lVar16 = *plVar10;
          }
        }
LAB_10a5c0440:
        lVar11 = param_2[-1];
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar16 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar16 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar16 + 0x184);
        }
        if (bVar2) {
          *plVar10 = lVar11;
          param_2[-1] = lVar16;
          lVar11 = *plVar10;
          lVar14 = *plVar9;
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
          if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
            bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar14 + 0x184);
          }
          if (bVar2) {
            *plVar9 = lVar11;
            *plVar10 = lVar14;
            lVar11 = *plVar9;
            lVar14 = *plVar22;
            bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
            if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
              bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar14 + 0x184);
            }
            if (bVar2) {
              *plVar22 = lVar11;
              *plVar9 = lVar14;
            }
          }
        }
        return;
      }
      if (uVar13 == 5) {
        FUN_10a5c034c(plVar22,plVar22 + 1,plVar22 + 2,plVar22 + 3);
        lVar11 = param_2[-1];
        lVar14 = plVar22[3];
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar14 + 0x184);
        }
        if (!bVar2) {
          return;
        }
        plVar22[3] = lVar11;
        param_2[-1] = lVar14;
        lVar11 = plVar22[2];
        lVar14 = plVar22[3];
        iVar3 = *(int *)(lVar14 + 0x184);
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar3 != *(int *)(lVar11 + 0x184)) {
          bVar2 = iVar3 < *(int *)(lVar11 + 0x184);
        }
        if (!bVar2) {
          return;
        }
        plVar22[2] = lVar14;
        plVar22[3] = lVar11;
        lVar11 = plVar22[1];
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar3 != *(int *)(lVar11 + 0x184)) {
          bVar2 = iVar3 < *(int *)(lVar11 + 0x184);
        }
        if (!bVar2) {
          return;
        }
        plVar22[1] = lVar14;
        plVar22[2] = lVar11;
        lVar11 = *plVar22;
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar3 != *(int *)(lVar11 + 0x184)) {
          bVar2 = iVar3 < *(int *)(lVar11 + 0x184);
        }
        if (!bVar2) {
          return;
        }
        *plVar22 = lVar14;
        plVar22[1] = lVar11;
        return;
      }
    }
    if ((long)uVar13 < 0x18) {
      plVar9 = plVar22 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar22 == param_2 || plVar9 == param_2) {
          return;
        }
        lVar11 = 0;
        lVar14 = 8;
        do {
          lVar16 = *(long *)((long)plVar22 + lVar11);
          lVar11 = *plVar9;
          iVar3 = *(int *)(lVar11 + 0x184);
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar16 + 0x188);
          if (iVar3 != *(int *)(lVar16 + 0x184)) {
            bVar2 = iVar3 < *(int *)(lVar16 + 0x184);
          }
          if (bVar2) {
            lVar19 = 0;
            do {
              *(long *)((long)plVar9 + lVar19) = lVar16;
              if (lVar14 + lVar19 == 0) goto LAB_10a5c02f8;
              lVar16 = ((long *)((long)plVar9 + lVar19))[-2];
              bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar16 + 0x188);
              if (iVar3 != *(int *)(lVar16 + 0x184)) {
                bVar2 = iVar3 < *(int *)(lVar16 + 0x184);
              }
              lVar19 = lVar19 + -8;
            } while (bVar2);
            *(long *)((long)plVar9 + lVar19) = lVar11;
          }
          plVar9 = plVar9 + 1;
          lVar11 = lVar14;
          lVar14 = lVar14 + 8;
          if (plVar9 == param_2) {
            return;
          }
        } while( true );
      }
      if (plVar22 == param_2 || plVar9 == param_2) {
        return;
      }
      lVar11 = 0;
      plVar10 = plVar22;
      do {
        plVar17 = plVar9;
        lVar16 = *plVar10;
        lVar14 = *plVar17;
        iVar3 = *(int *)(lVar14 + 0x184);
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar16 + 0x188);
        if (iVar3 != *(int *)(lVar16 + 0x184)) {
          bVar2 = iVar3 < *(int *)(lVar16 + 0x184);
        }
        lVar19 = lVar11;
        if (bVar2) {
          do {
            lVar18 = lVar19;
            *(long *)((long)plVar22 + lVar18 + 8) = lVar16;
            plVar9 = plVar22;
            if (lVar18 == 0) goto LAB_10a5bff60;
            lVar16 = *(long *)((long)plVar22 + lVar18 + -8);
            bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar16 + 0x188);
            if (iVar3 != *(int *)(lVar16 + 0x184)) {
              bVar2 = iVar3 < *(int *)(lVar16 + 0x184);
            }
            lVar19 = lVar18 + -8;
          } while (bVar2);
          plVar9 = (long *)((long)plVar22 + lVar18);
LAB_10a5bff60:
          *plVar9 = lVar14;
        }
        lVar11 = lVar11 + 8;
        plVar9 = plVar17 + 1;
        plVar10 = plVar17;
        if (plVar17 + 1 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar22 == param_2) {
        return;
      }
      uVar12 = uVar13 - 2 >> 1;
      uVar15 = uVar12;
      do {
        if ((long)uVar15 <= (long)uVar12) {
          uVar20 = uVar15 << 1 | 1;
          plVar9 = plVar22 + uVar20;
          uVar1 = uVar15 * 2 + 2;
          lVar14 = *plVar9;
          plVar10 = plVar9;
          lVar11 = lVar14;
          uVar21 = uVar20;
          if ((long)uVar1 < (long)uVar13) {
            lVar11 = plVar9[1];
            bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
            if (*(int *)(lVar14 + 0x184) != *(int *)(lVar11 + 0x184)) {
              bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
            }
            plVar10 = plVar9 + 1;
            uVar21 = uVar1;
            if (!bVar2) {
              plVar10 = plVar9;
              lVar11 = lVar14;
              uVar21 = uVar20;
            }
          }
          lVar14 = plVar22[uVar15];
          iVar3 = *(int *)(lVar14 + 0x184);
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
          if (*(int *)(lVar11 + 0x184) != iVar3) {
            bVar2 = *(int *)(lVar11 + 0x184) < iVar3;
          }
          plVar9 = plVar22 + uVar15;
          if (!bVar2) {
            do {
              plVar17 = plVar10;
              *plVar9 = lVar11;
              if ((long)uVar12 < (long)uVar21) break;
              uVar20 = uVar21 << 1 | 1;
              plVar9 = plVar22 + uVar20;
              uVar1 = uVar21 * 2 + 2;
              lVar16 = *plVar9;
              plVar10 = plVar9;
              lVar11 = lVar16;
              uVar21 = uVar20;
              if ((long)uVar1 < (long)uVar13) {
                lVar11 = plVar9[1];
                bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar11 + 0x188);
                if (*(int *)(lVar16 + 0x184) != *(int *)(lVar11 + 0x184)) {
                  bVar2 = *(int *)(lVar16 + 0x184) < *(int *)(lVar11 + 0x184);
                }
                plVar10 = plVar9 + 1;
                uVar21 = uVar1;
                if (!bVar2) {
                  plVar10 = plVar9;
                  lVar11 = lVar16;
                  uVar21 = uVar20;
                }
              }
              bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
              if (*(int *)(lVar11 + 0x184) != iVar3) {
                bVar2 = *(int *)(lVar11 + 0x184) < iVar3;
              }
              plVar9 = plVar17;
            } while (!bVar2);
            *plVar17 = lVar14;
          }
        }
        bVar2 = uVar15 != 0;
        uVar15 = uVar15 - 1;
      } while (bVar2);
      do {
        lVar11 = *plVar22;
        plVar9 = plVar22;
        uVar15 = 0;
        do {
          plVar17 = plVar9 + uVar15 + 1;
          lVar16 = *plVar17;
          uVar1 = uVar15 << 1 | 1;
          uVar12 = uVar15 * 2 + 2;
          plVar10 = plVar17;
          lVar14 = lVar16;
          uVar20 = uVar1;
          if ((long)uVar12 < (long)uVar13) {
            lVar14 = plVar9[uVar15 + 2];
            bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
            if (*(int *)(lVar16 + 0x184) != *(int *)(lVar14 + 0x184)) {
              bVar2 = *(int *)(lVar16 + 0x184) < *(int *)(lVar14 + 0x184);
            }
            plVar10 = plVar9 + uVar15 + 2;
            uVar20 = uVar12;
            if (!bVar2) {
              plVar10 = plVar17;
              lVar14 = lVar16;
              uVar20 = uVar1;
            }
          }
          *plVar9 = lVar14;
          plVar9 = plVar10;
          uVar15 = uVar20;
        } while ((long)uVar20 <= (long)(uVar13 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar10 == param_2) {
          *plVar10 = lVar11;
        }
        else {
          *plVar10 = *param_2;
          *param_2 = lVar11;
          lVar11 = (long)plVar10 + (8 - (long)plVar22) >> 3;
          if (1 < lVar11) {
            uVar15 = lVar11 - 2U >> 1;
            lVar14 = plVar22[uVar15];
            lVar11 = *plVar10;
            iVar3 = *(int *)(lVar11 + 0x184);
            bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
            if (*(int *)(lVar14 + 0x184) != iVar3) {
              bVar2 = *(int *)(lVar14 + 0x184) < iVar3;
            }
            plVar9 = plVar22 + uVar15;
            if (bVar2) {
              do {
                plVar17 = plVar9;
                *plVar10 = lVar14;
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1 >> 1;
                lVar14 = plVar22[uVar15];
                bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
                if (*(int *)(lVar14 + 0x184) != iVar3) {
                  bVar2 = *(int *)(lVar14 + 0x184) < iVar3;
                }
                plVar10 = plVar17;
                plVar9 = plVar22 + uVar15;
              } while (bVar2);
              *plVar17 = lVar11;
            }
          }
        }
        bVar2 = (long)uVar13 < 3;
        uVar13 = uVar13 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    plVar9 = plVar22 + (uVar13 >> 1);
    lVar11 = param_2[-1];
    iVar3 = *(int *)(lVar11 + 0x184);
    if (uVar13 < 0x81) {
      lVar16 = *plVar22;
      lVar14 = *plVar9;
      iVar4 = *(int *)(lVar16 + 0x184);
      iVar5 = *(int *)(lVar14 + 0x184);
      bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (iVar4 != iVar5) {
        bVar2 = iVar4 < iVar5;
      }
      bVar7 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar16 + 0x188);
      if (iVar3 != iVar4) {
        bVar7 = iVar3 < iVar4;
      }
      if (bVar2) {
        if (bVar7) {
          *plVar9 = lVar11;
        }
        else {
          *plVar9 = lVar16;
          *plVar22 = lVar14;
          lVar11 = param_2[-1];
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
          if (*(int *)(lVar11 + 0x184) != iVar5) {
            bVar2 = *(int *)(lVar11 + 0x184) < iVar5;
          }
          if (!bVar2) goto LAB_10a5bf9a8;
          *plVar22 = lVar11;
        }
        param_2[-1] = lVar14;
      }
      else if (bVar7) {
        *plVar22 = lVar11;
        param_2[-1] = lVar16;
        lVar11 = *plVar22;
        lVar14 = *plVar9;
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar14 + 0x184);
        }
        if (bVar2) {
          *plVar9 = lVar11;
          *plVar22 = lVar14;
        }
      }
    }
    else {
      lVar16 = *plVar9;
      lVar14 = *plVar22;
      iVar4 = *(int *)(lVar16 + 0x184);
      iVar5 = *(int *)(lVar14 + 0x184);
      bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (iVar4 != iVar5) {
        bVar2 = iVar4 < iVar5;
      }
      bVar7 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar16 + 0x188);
      if (iVar3 != iVar4) {
        bVar7 = iVar3 < iVar4;
      }
      if (bVar2) {
        if (bVar7) {
          *plVar22 = lVar11;
        }
        else {
          *plVar22 = lVar16;
          *plVar9 = lVar14;
          lVar11 = param_2[-1];
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
          if (*(int *)(lVar11 + 0x184) != iVar5) {
            bVar2 = *(int *)(lVar11 + 0x184) < iVar5;
          }
          if (!bVar2) goto LAB_10a5bf6cc;
          *plVar9 = lVar11;
        }
        param_2[-1] = lVar14;
      }
      else if (bVar7) {
        *plVar9 = lVar11;
        param_2[-1] = lVar16;
        lVar11 = *plVar9;
        lVar14 = *plVar22;
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar14 + 0x184);
        }
        if (bVar2) {
          *plVar22 = lVar11;
          *plVar9 = lVar14;
        }
      }
LAB_10a5bf6cc:
      lVar14 = plVar9[-1];
      lVar11 = plVar22[1];
      iVar3 = *(int *)(lVar14 + 0x184);
      iVar4 = *(int *)(lVar11 + 0x184);
      bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
      if (iVar3 != iVar4) {
        bVar2 = iVar3 < iVar4;
      }
      lVar16 = param_2[-2];
      bVar7 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (*(int *)(lVar16 + 0x184) != iVar3) {
        bVar7 = *(int *)(lVar16 + 0x184) < iVar3;
      }
      if (bVar2) {
        if (bVar7) {
          plVar22[1] = lVar16;
        }
        else {
          plVar22[1] = lVar14;
          plVar9[-1] = lVar11;
          lVar14 = param_2[-2];
          bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (*(int *)(lVar14 + 0x184) != iVar4) {
            bVar2 = *(int *)(lVar14 + 0x184) < iVar4;
          }
          if (!bVar2) goto LAB_10a5bf7f0;
          plVar9[-1] = lVar14;
        }
        param_2[-2] = lVar11;
      }
      else if (bVar7) {
        plVar9[-1] = lVar16;
        param_2[-2] = lVar14;
        lVar11 = plVar9[-1];
        lVar14 = plVar22[1];
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar14 + 0x184);
        }
        if (bVar2) {
          plVar22[1] = lVar11;
          plVar9[-1] = lVar14;
        }
      }
LAB_10a5bf7f0:
      lVar14 = plVar9[1];
      lVar11 = plVar22[2];
      iVar3 = *(int *)(lVar14 + 0x184);
      iVar4 = *(int *)(lVar11 + 0x184);
      bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
      if (iVar3 != iVar4) {
        bVar2 = iVar3 < iVar4;
      }
      lVar16 = param_2[-3];
      bVar7 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (*(int *)(lVar16 + 0x184) != iVar3) {
        bVar7 = *(int *)(lVar16 + 0x184) < iVar3;
      }
      if (bVar2) {
        if (bVar7) {
          plVar22[2] = lVar16;
        }
        else {
          plVar22[2] = lVar14;
          plVar9[1] = lVar11;
          lVar14 = param_2[-3];
          bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (*(int *)(lVar14 + 0x184) != iVar4) {
            bVar2 = *(int *)(lVar14 + 0x184) < iVar4;
          }
          if (!bVar2) goto LAB_10a5bf8d4;
          plVar9[1] = lVar14;
        }
        param_2[-3] = lVar11;
      }
      else if (bVar7) {
        plVar9[1] = lVar16;
        param_2[-3] = lVar14;
        lVar11 = plVar9[1];
        lVar14 = plVar22[2];
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar14 + 0x184);
        }
        if (bVar2) {
          plVar22[2] = lVar11;
          plVar9[1] = lVar14;
        }
      }
LAB_10a5bf8d4:
      lVar11 = plVar9[-1];
      lVar14 = *plVar9;
      iVar3 = *(int *)(lVar14 + 0x184);
      iVar4 = *(int *)(lVar11 + 0x184);
      bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
      if (iVar3 != iVar4) {
        bVar2 = iVar3 < iVar4;
      }
      lVar16 = plVar9[1];
      iVar5 = *(int *)(lVar16 + 0x184);
      bVar7 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (iVar5 != iVar3) {
        bVar7 = iVar5 < iVar3;
      }
      if (bVar2) {
        if (bVar7) {
          plVar9[-1] = lVar16;
          plVar9[1] = lVar11;
        }
        else {
          plVar9[-1] = lVar14;
          *plVar9 = lVar11;
          bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (iVar5 != iVar4) {
            bVar2 = iVar5 < iVar4;
          }
          lVar14 = lVar11;
          if (bVar2) {
            *plVar9 = lVar16;
            plVar9[1] = lVar11;
            lVar14 = lVar16;
          }
        }
      }
      else if (bVar7) {
        *plVar9 = lVar16;
        plVar9[1] = lVar14;
        bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar5 != iVar4) {
          bVar2 = iVar5 < iVar4;
        }
        lVar14 = lVar16;
        if (bVar2) {
          plVar9[-1] = lVar16;
          *plVar9 = lVar11;
          lVar14 = lVar11;
        }
      }
      lVar11 = *plVar22;
      *plVar22 = lVar14;
      *plVar9 = lVar11;
    }
LAB_10a5bf9a8:
    param_3 = param_3 + -1;
    lVar11 = *plVar22;
    param_1 = plVar22;
    if ((param_4 & 1) == 0) {
      iVar3 = *(int *)(plVar22[-1] + 0x184);
      iVar4 = *(int *)(lVar11 + 0x184);
      uVar6 = *(uint *)(lVar11 + 0x188);
      bVar2 = *(uint *)(plVar22[-1] + 0x188) < uVar6;
      if (iVar3 != iVar4) {
        bVar2 = iVar3 < iVar4;
      }
      if (!bVar2) {
        iVar3 = *(int *)(param_2[-1] + 0x184);
        bVar2 = uVar6 < *(uint *)(param_2[-1] + 0x188);
        if (iVar4 != iVar3) {
          bVar2 = iVar4 < iVar3;
        }
        if (bVar2) {
          do {
            param_1 = param_1 + 1;
            if (param_1 == param_2) goto LAB_10a5c02f8;
            iVar3 = *(int *)(*param_1 + 0x184);
            bVar2 = uVar6 < *(uint *)(*param_1 + 0x188);
            if (iVar4 != iVar3) {
              bVar2 = iVar4 < iVar3;
            }
          } while (!bVar2);
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
            iVar3 = *(int *)(*param_1 + 0x184);
            bVar2 = uVar6 < *(uint *)(*param_1 + 0x188);
            if (iVar4 != iVar3) {
              bVar2 = iVar4 < iVar3;
            }
          } while (!bVar2);
        }
        plVar9 = param_2;
        if (param_1 < param_2) {
          do {
            if (plVar9 == plVar22) goto LAB_10a5c02f8;
            plVar9 = plVar9 + -1;
            iVar3 = *(int *)(*plVar9 + 0x184);
            bVar2 = uVar6 < *(uint *)(*plVar9 + 0x188);
            if (iVar4 != iVar3) {
              bVar2 = iVar4 < iVar3;
            }
          } while (bVar2);
        }
        if (param_1 < plVar9) {
          lVar14 = *param_1;
          lVar16 = *plVar9;
          do {
            *param_1 = lVar16;
            *plVar9 = lVar14;
            do {
              param_1 = param_1 + 1;
              if (param_1 == param_2) goto LAB_10a5c02f8;
              lVar14 = *param_1;
              bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
              if (iVar4 != *(int *)(lVar14 + 0x184)) {
                bVar2 = iVar4 < *(int *)(lVar14 + 0x184);
              }
            } while (!bVar2);
            do {
              if (plVar9 == plVar22) goto LAB_10a5c02f8;
              plVar9 = plVar9 + -1;
              lVar16 = *plVar9;
              bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar16 + 0x188);
              if (iVar4 != *(int *)(lVar16 + 0x184)) {
                bVar2 = iVar4 < *(int *)(lVar16 + 0x184);
              }
            } while (bVar2);
          } while (param_1 < plVar9);
        }
        plVar9 = param_1 + -1;
        if (plVar9 != plVar22) {
          *plVar22 = *plVar9;
        }
        param_4 = 0;
        *plVar9 = lVar11;
        goto LAB_10a5bf4f4;
      }
    }
    lVar14 = 0;
    do {
      plVar9 = (long *)((long)plVar22 + lVar14 + 8);
      if (plVar9 == param_2) goto LAB_10a5c02f8;
      lVar16 = *plVar9;
      iVar3 = *(int *)(lVar11 + 0x184);
      uVar6 = *(uint *)(lVar11 + 0x188);
      bVar2 = *(uint *)(lVar16 + 0x188) < uVar6;
      if (*(int *)(lVar16 + 0x184) != iVar3) {
        bVar2 = *(int *)(lVar16 + 0x184) < iVar3;
      }
      lVar14 = lVar14 + 8;
    } while (bVar2);
    plVar9 = (long *)((long)plVar22 + lVar14);
    plVar10 = param_2;
    if (lVar14 == 8) {
      do {
        if (plVar10 <= plVar9) break;
        plVar10 = plVar10 + -1;
        iVar4 = *(int *)(*plVar10 + 0x184);
        bVar2 = *(uint *)(*plVar10 + 0x188) < uVar6;
        if (iVar4 != iVar3) {
          bVar2 = iVar4 < iVar3;
        }
      } while (!bVar2);
    }
    else {
      do {
        if (plVar10 == plVar22) {
LAB_10a5c02f8:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a5c02fc);
          (*pcVar8)();
        }
        plVar10 = plVar10 + -1;
        iVar4 = *(int *)(*plVar10 + 0x184);
        bVar2 = *(uint *)(*plVar10 + 0x188) < uVar6;
        if (iVar4 != iVar3) {
          bVar2 = iVar4 < iVar3;
        }
      } while (!bVar2);
    }
    param_1 = plVar9;
    if (plVar9 < plVar10) {
      lVar14 = *plVar10;
      plVar17 = plVar10;
      do {
        *param_1 = lVar14;
        *plVar17 = lVar16;
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10a5c02f8;
          lVar16 = *param_1;
          bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (*(int *)(lVar16 + 0x184) != iVar3) {
            bVar2 = *(int *)(lVar16 + 0x184) < iVar3;
          }
        } while (bVar2);
        do {
          if (plVar17 == plVar22) goto LAB_10a5c02f8;
          plVar17 = plVar17 + -1;
          lVar14 = *plVar17;
          bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (*(int *)(lVar14 + 0x184) != iVar3) {
            bVar2 = *(int *)(lVar14 + 0x184) < iVar3;
          }
        } while (!bVar2);
      } while (param_1 < plVar17);
    }
    plVar17 = param_1 + -1;
    if (plVar17 != plVar22) {
      *plVar22 = *plVar17;
    }
    *plVar17 = lVar11;
    if (plVar9 < plVar10) {
LAB_10a5bfb74:
      FUN_10a5bf4c8(plVar22,plVar17,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      plVar9 = plVar22;
      FUN_10a5c04f4(plVar22,plVar17);
      plVar10 = param_1;
      FUN_10a5c04f4(param_1,param_2);
      if ((int)plVar10 == 0) {
        if (((ulong)plVar9 & 1) == 0) goto LAB_10a5bfb74;
      }
      else {
        param_1 = plVar22;
        param_2 = plVar17;
        if (((ulong)plVar9 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10a5c034c; end: 10a5c04f3;  */

void FUN_10a5c034c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *param_2;
  lVar6 = *param_1;
  iVar1 = *(int *)(lVar5 + 0x184);
  iVar2 = *(int *)(lVar6 + 0x184);
  bVar3 = *(uint *)(lVar5 + 0x188) < *(uint *)(lVar6 + 0x188);
  if (iVar1 != iVar2) {
    bVar3 = iVar1 < iVar2;
  }
  lVar8 = *param_3;
  bVar4 = *(uint *)(lVar8 + 0x188) < *(uint *)(lVar5 + 0x188);
  if (*(int *)(lVar8 + 0x184) != iVar1) {
    bVar4 = *(int *)(lVar8 + 0x184) < iVar1;
  }
  if (bVar3) {
    if (bVar4) {
      *param_1 = lVar8;
    }
    else {
      *param_1 = lVar5;
      *param_2 = lVar6;
      lVar8 = *param_3;
      bVar3 = *(uint *)(lVar8 + 0x188) < *(uint *)(lVar6 + 0x188);
      if (*(int *)(lVar8 + 0x184) != iVar2) {
        bVar3 = *(int *)(lVar8 + 0x184) < iVar2;
      }
      if (!bVar3) goto LAB_10a5c0440;
      *param_2 = lVar8;
    }
    *param_3 = lVar6;
    lVar8 = lVar6;
  }
  else if (bVar4) {
    *param_2 = lVar8;
    *param_3 = lVar5;
    lVar6 = *param_2;
    lVar7 = *param_1;
    bVar3 = *(uint *)(lVar6 + 0x188) < *(uint *)(lVar7 + 0x188);
    if (*(int *)(lVar6 + 0x184) != *(int *)(lVar7 + 0x184)) {
      bVar3 = *(int *)(lVar6 + 0x184) < *(int *)(lVar7 + 0x184);
    }
    lVar8 = lVar5;
    if (bVar3) {
      *param_1 = lVar6;
      *param_2 = lVar7;
      lVar8 = *param_3;
    }
  }
LAB_10a5c0440:
  lVar5 = *param_4;
  bVar3 = *(uint *)(lVar5 + 0x188) < *(uint *)(lVar8 + 0x188);
  if (*(int *)(lVar5 + 0x184) != *(int *)(lVar8 + 0x184)) {
    bVar3 = *(int *)(lVar5 + 0x184) < *(int *)(lVar8 + 0x184);
  }
  if (bVar3) {
    *param_3 = lVar5;
    *param_4 = lVar8;
    lVar5 = *param_3;
    lVar6 = *param_2;
    bVar3 = *(uint *)(lVar5 + 0x188) < *(uint *)(lVar6 + 0x188);
    if (*(int *)(lVar5 + 0x184) != *(int *)(lVar6 + 0x184)) {
      bVar3 = *(int *)(lVar5 + 0x184) < *(int *)(lVar6 + 0x184);
    }
    if (bVar3) {
      *param_2 = lVar5;
      *param_3 = lVar6;
      lVar5 = *param_2;
      lVar6 = *param_1;
      bVar3 = *(uint *)(lVar5 + 0x188) < *(uint *)(lVar6 + 0x188);
      if (*(int *)(lVar5 + 0x184) != *(int *)(lVar6 + 0x184)) {
        bVar3 = *(int *)(lVar5 + 0x184) < *(int *)(lVar6 + 0x184);
      }
      if (bVar3) {
        *param_1 = lVar5;
        *param_2 = lVar6;
      }
    }
  }
  return;
}



/* Entry: 10a5c04f4; end: 10a5c08eb;  */

bool FUN_10a5c04f4(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  
  uVar7 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar7 < 3) {
    if (uVar7 < 2) {
      return true;
    }
    if (uVar7 == 2) {
      lVar8 = param_2[-1];
      lVar10 = *param_1;
      bVar5 = *(uint *)(lVar8 + 0x188) < *(uint *)(lVar10 + 0x188);
      if (*(int *)(lVar8 + 0x184) != *(int *)(lVar10 + 0x184)) {
        bVar5 = *(int *)(lVar8 + 0x184) < *(int *)(lVar10 + 0x184);
      }
      if (!bVar5) {
        return true;
      }
      *param_1 = lVar8;
      param_2[-1] = lVar10;
      return true;
    }
  }
  else {
    if (uVar7 == 3) {
      lVar8 = *param_1;
      lVar10 = param_1[1];
      iVar12 = *(int *)(lVar10 + 0x184);
      iVar2 = *(int *)(lVar8 + 0x184);
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar12 != iVar2) {
        bVar5 = iVar12 < iVar2;
      }
      lVar13 = param_2[-1];
      bVar6 = *(uint *)(lVar13 + 0x188) < *(uint *)(lVar10 + 0x188);
      if (*(int *)(lVar13 + 0x184) != iVar12) {
        bVar6 = *(int *)(lVar13 + 0x184) < iVar12;
      }
      if (bVar5) {
        if (bVar6) {
          *param_1 = lVar13;
        }
        else {
          *param_1 = lVar10;
          param_1[1] = lVar8;
          lVar10 = param_2[-1];
          bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
          if (*(int *)(lVar10 + 0x184) != iVar2) {
            bVar5 = *(int *)(lVar10 + 0x184) < iVar2;
          }
          if (!bVar5) {
            return true;
          }
          param_1[1] = lVar10;
        }
        param_2[-1] = lVar8;
        return true;
      }
      if (!bVar6) {
        return true;
      }
      param_1[1] = lVar13;
      param_2[-1] = lVar10;
      lVar8 = *param_1;
      lVar10 = param_1[1];
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (*(int *)(lVar10 + 0x184) != *(int *)(lVar8 + 0x184)) {
        bVar5 = *(int *)(lVar10 + 0x184) < *(int *)(lVar8 + 0x184);
      }
      if (!bVar5) {
        return true;
      }
      *param_1 = lVar10;
      param_1[1] = lVar8;
      return true;
    }
    if (uVar7 == 4) {
      FUN_10a5c034c(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
      return true;
    }
    if (uVar7 == 5) {
      FUN_10a5c034c(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
      lVar8 = param_2[-1];
      lVar10 = param_1[3];
      bVar5 = *(uint *)(lVar8 + 0x188) < *(uint *)(lVar10 + 0x188);
      if (*(int *)(lVar8 + 0x184) != *(int *)(lVar10 + 0x184)) {
        bVar5 = *(int *)(lVar8 + 0x184) < *(int *)(lVar10 + 0x184);
      }
      if (!bVar5) {
        return true;
      }
      param_1[3] = lVar8;
      param_2[-1] = lVar10;
      lVar8 = param_1[2];
      lVar10 = param_1[3];
      iVar12 = *(int *)(lVar10 + 0x184);
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar12 != *(int *)(lVar8 + 0x184)) {
        bVar5 = iVar12 < *(int *)(lVar8 + 0x184);
      }
      if (!bVar5) {
        return true;
      }
      param_1[2] = lVar10;
      param_1[3] = lVar8;
      lVar8 = param_1[1];
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar12 != *(int *)(lVar8 + 0x184)) {
        bVar5 = iVar12 < *(int *)(lVar8 + 0x184);
      }
      if (!bVar5) {
        return true;
      }
      param_1[1] = lVar10;
      param_1[2] = lVar8;
      lVar8 = *param_1;
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar12 != *(int *)(lVar8 + 0x184)) {
        bVar5 = iVar12 < *(int *)(lVar8 + 0x184);
      }
      if (!bVar5) {
        return true;
      }
      *param_1 = lVar10;
      param_1[1] = lVar8;
      return true;
    }
  }
  lVar13 = param_1[2];
  lVar8 = *param_1;
  lVar10 = param_1[1];
  iVar12 = *(int *)(lVar10 + 0x184);
  iVar2 = *(int *)(lVar8 + 0x184);
  bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
  if (iVar12 != iVar2) {
    bVar5 = iVar12 < iVar2;
  }
  iVar3 = *(int *)(lVar13 + 0x184);
  bVar6 = *(uint *)(lVar13 + 0x188) < *(uint *)(lVar10 + 0x188);
  if (iVar3 != iVar12) {
    bVar6 = iVar3 < iVar12;
  }
  if (bVar5) {
    if (bVar6) {
      *param_1 = lVar13;
    }
    else {
      *param_1 = lVar10;
      param_1[1] = lVar8;
      bVar5 = *(uint *)(lVar13 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar3 != iVar2) {
        bVar5 = iVar3 < iVar2;
      }
      if (!bVar5) goto LAB_10a5c0814;
      param_1[1] = lVar13;
    }
    param_1[2] = lVar8;
  }
  else if (bVar6) {
    param_1[1] = lVar13;
    param_1[2] = lVar10;
    bVar5 = *(uint *)(lVar13 + 0x188) < *(uint *)(lVar8 + 0x188);
    if (iVar3 != iVar2) {
      bVar5 = iVar3 < iVar2;
    }
    if (bVar5) {
      *param_1 = lVar13;
      param_1[1] = lVar8;
    }
  }
LAB_10a5c0814:
  if (param_1 + 3 != param_2) {
    iVar12 = 0;
    lVar8 = 0x18;
    plVar9 = param_1 + 2;
    plVar11 = param_1 + 3;
    do {
      lVar10 = *plVar11;
      lVar13 = *plVar9;
      iVar2 = *(int *)(lVar10 + 0x184);
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar13 + 0x188);
      if (iVar2 != *(int *)(lVar13 + 0x184)) {
        bVar5 = iVar2 < *(int *)(lVar13 + 0x184);
      }
      lVar14 = lVar8;
      if (bVar5) {
        do {
          *(long *)((long)param_1 + lVar14) = lVar13;
          lVar4 = lVar14 + -8;
          plVar9 = param_1;
          if (lVar4 == 0) goto LAB_10a5c08a8;
          lVar13 = *(long *)((long)param_1 + lVar14 + -0x10);
          bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar13 + 0x188);
          if (iVar2 != *(int *)(lVar13 + 0x184)) {
            bVar5 = iVar2 < *(int *)(lVar13 + 0x184);
          }
          lVar14 = lVar4;
        } while (bVar5);
        plVar9 = (long *)((long)param_1 + lVar4);
LAB_10a5c08a8:
        *plVar9 = lVar10;
        iVar12 = iVar12 + 1;
        if (iVar12 == 8) {
          return plVar11 + 1 == param_2;
        }
      }
      plVar1 = plVar11 + 1;
      lVar8 = lVar8 + 8;
      plVar9 = plVar11;
      plVar11 = plVar1;
    } while (plVar1 != param_2);
  }
  return true;
}



/* Entry: 10a5c08ec; end: 10a5c176f;  */

void FUN_10a5c08ec(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  
LAB_10a5c0918:
  do {
    plVar22 = param_1;
    uVar13 = (long)param_2 - (long)plVar22 >> 3;
    if (uVar13 - 2 == 0 || (long)uVar13 < 2) {
      if (uVar13 < 2) {
        return;
      }
      if (uVar13 == 2) {
        lVar11 = param_2[-1];
        lVar14 = *plVar22;
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (!bVar2) {
          return;
        }
        *plVar22 = lVar11;
        param_2[-1] = lVar14;
        return;
      }
    }
    else {
      if (uVar13 == 3) {
        lVar11 = *plVar22;
        lVar14 = plVar22[1];
        iVar3 = *(int *)(lVar14 + 0x184);
        iVar4 = *(int *)(lVar11 + 0x184);
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar3 != iVar4) {
          bVar2 = iVar4 < iVar3;
        }
        lVar16 = param_2[-1];
        bVar7 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar16 + 0x184) != iVar3) {
          bVar7 = iVar3 < *(int *)(lVar16 + 0x184);
        }
        if (bVar2) {
          if (bVar7) {
            *plVar22 = lVar16;
          }
          else {
            *plVar22 = lVar14;
            plVar22[1] = lVar11;
            lVar14 = param_2[-1];
            bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
            if (*(int *)(lVar14 + 0x184) != iVar4) {
              bVar2 = iVar4 < *(int *)(lVar14 + 0x184);
            }
            if (!bVar2) {
              return;
            }
            plVar22[1] = lVar14;
          }
          param_2[-1] = lVar11;
          return;
        }
        if (!bVar7) {
          return;
        }
        plVar22[1] = lVar16;
        param_2[-1] = lVar14;
        lVar11 = *plVar22;
        lVar14 = plVar22[1];
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (*(int *)(lVar14 + 0x184) != *(int *)(lVar11 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar14 + 0x184);
        }
        if (!bVar2) {
          return;
        }
        *plVar22 = lVar14;
        plVar22[1] = lVar11;
        return;
      }
      if (uVar13 == 4) {
        plVar9 = plVar22 + 1;
        plVar10 = plVar22 + 2;
        lVar11 = *plVar9;
        lVar14 = *plVar22;
        iVar3 = *(int *)(lVar11 + 0x184);
        iVar4 = *(int *)(lVar14 + 0x184);
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (iVar3 != iVar4) {
          bVar2 = iVar4 < iVar3;
        }
        lVar16 = *plVar10;
        bVar7 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (*(int *)(lVar16 + 0x184) != iVar3) {
          bVar7 = iVar3 < *(int *)(lVar16 + 0x184);
        }
        if (bVar2) {
          if (bVar7) {
            *plVar22 = lVar16;
          }
          else {
            *plVar22 = lVar11;
            *plVar9 = lVar14;
            lVar16 = *plVar10;
            bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
            if (*(int *)(lVar16 + 0x184) != iVar4) {
              bVar2 = iVar4 < *(int *)(lVar16 + 0x184);
            }
            if (!bVar2) goto LAB_10a5c1864;
            *plVar9 = lVar16;
          }
          *plVar10 = lVar14;
          lVar16 = lVar14;
        }
        else if (bVar7) {
          *plVar9 = lVar16;
          *plVar10 = lVar11;
          lVar14 = *plVar9;
          lVar19 = *plVar22;
          bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar19 + 0x188);
          if (*(int *)(lVar14 + 0x184) != *(int *)(lVar19 + 0x184)) {
            bVar2 = *(int *)(lVar19 + 0x184) < *(int *)(lVar14 + 0x184);
          }
          lVar16 = lVar11;
          if (bVar2) {
            *plVar22 = lVar14;
            *plVar9 = lVar19;
            lVar16 = *plVar10;
          }
        }
LAB_10a5c1864:
        lVar11 = param_2[-1];
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar16 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar16 + 0x184)) {
          bVar2 = *(int *)(lVar16 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (bVar2) {
          *plVar10 = lVar11;
          param_2[-1] = lVar16;
          lVar11 = *plVar10;
          lVar14 = *plVar9;
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
          if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
            bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
          }
          if (bVar2) {
            *plVar9 = lVar11;
            *plVar10 = lVar14;
            lVar11 = *plVar9;
            lVar14 = *plVar22;
            bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
            if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
              bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
            }
            if (bVar2) {
              *plVar22 = lVar11;
              *plVar9 = lVar14;
            }
          }
        }
        return;
      }
      if (uVar13 == 5) {
        FUN_10a5c1770(plVar22,plVar22 + 1,plVar22 + 2,plVar22 + 3);
        lVar11 = param_2[-1];
        lVar14 = plVar22[3];
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (!bVar2) {
          return;
        }
        plVar22[3] = lVar11;
        param_2[-1] = lVar14;
        lVar11 = plVar22[2];
        lVar14 = plVar22[3];
        iVar3 = *(int *)(lVar14 + 0x184);
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar3 != *(int *)(lVar11 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < iVar3;
        }
        if (!bVar2) {
          return;
        }
        plVar22[2] = lVar14;
        plVar22[3] = lVar11;
        lVar11 = plVar22[1];
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar3 != *(int *)(lVar11 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < iVar3;
        }
        if (!bVar2) {
          return;
        }
        plVar22[1] = lVar14;
        plVar22[2] = lVar11;
        lVar11 = *plVar22;
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar3 != *(int *)(lVar11 + 0x184)) {
          bVar2 = *(int *)(lVar11 + 0x184) < iVar3;
        }
        if (!bVar2) {
          return;
        }
        *plVar22 = lVar14;
        plVar22[1] = lVar11;
        return;
      }
    }
    if ((long)uVar13 < 0x18) {
      plVar9 = plVar22 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar22 == param_2 || plVar9 == param_2) {
          return;
        }
        lVar11 = 0;
        lVar14 = 8;
        do {
          lVar16 = *(long *)((long)plVar22 + lVar11);
          lVar11 = *plVar9;
          iVar3 = *(int *)(lVar11 + 0x184);
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar16 + 0x188);
          if (iVar3 != *(int *)(lVar16 + 0x184)) {
            bVar2 = *(int *)(lVar16 + 0x184) < iVar3;
          }
          if (bVar2) {
            lVar19 = 0;
            do {
              *(long *)((long)plVar9 + lVar19) = lVar16;
              if (lVar14 + lVar19 == 0) goto LAB_10a5c171c;
              lVar16 = ((long *)((long)plVar9 + lVar19))[-2];
              bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar16 + 0x188);
              if (iVar3 != *(int *)(lVar16 + 0x184)) {
                bVar2 = *(int *)(lVar16 + 0x184) < iVar3;
              }
              lVar19 = lVar19 + -8;
            } while (bVar2);
            *(long *)((long)plVar9 + lVar19) = lVar11;
          }
          plVar9 = plVar9 + 1;
          lVar11 = lVar14;
          lVar14 = lVar14 + 8;
          if (plVar9 == param_2) {
            return;
          }
        } while( true );
      }
      if (plVar22 == param_2 || plVar9 == param_2) {
        return;
      }
      lVar11 = 0;
      plVar10 = plVar22;
      do {
        plVar17 = plVar9;
        lVar16 = *plVar10;
        lVar14 = *plVar17;
        iVar3 = *(int *)(lVar14 + 0x184);
        bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar16 + 0x188);
        if (iVar3 != *(int *)(lVar16 + 0x184)) {
          bVar2 = *(int *)(lVar16 + 0x184) < iVar3;
        }
        lVar19 = lVar11;
        if (bVar2) {
          do {
            lVar18 = lVar19;
            *(long *)((long)plVar22 + lVar18 + 8) = lVar16;
            plVar9 = plVar22;
            if (lVar18 == 0) goto LAB_10a5c1384;
            lVar16 = *(long *)((long)plVar22 + lVar18 + -8);
            bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar16 + 0x188);
            if (iVar3 != *(int *)(lVar16 + 0x184)) {
              bVar2 = *(int *)(lVar16 + 0x184) < iVar3;
            }
            lVar19 = lVar18 + -8;
          } while (bVar2);
          plVar9 = (long *)((long)plVar22 + lVar18);
LAB_10a5c1384:
          *plVar9 = lVar14;
        }
        lVar11 = lVar11 + 8;
        plVar9 = plVar17 + 1;
        plVar10 = plVar17;
        if (plVar17 + 1 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar22 == param_2) {
        return;
      }
      uVar12 = uVar13 - 2 >> 1;
      uVar15 = uVar12;
      do {
        if ((long)uVar15 <= (long)uVar12) {
          uVar20 = uVar15 << 1 | 1;
          plVar9 = plVar22 + uVar20;
          uVar1 = uVar15 * 2 + 2;
          lVar14 = *plVar9;
          plVar10 = plVar9;
          lVar11 = lVar14;
          uVar21 = uVar20;
          if ((long)uVar1 < (long)uVar13) {
            lVar11 = plVar9[1];
            bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
            if (*(int *)(lVar14 + 0x184) != *(int *)(lVar11 + 0x184)) {
              bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar14 + 0x184);
            }
            plVar10 = plVar9 + 1;
            uVar21 = uVar1;
            if (!bVar2) {
              plVar10 = plVar9;
              lVar11 = lVar14;
              uVar21 = uVar20;
            }
          }
          lVar14 = plVar22[uVar15];
          iVar3 = *(int *)(lVar14 + 0x184);
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
          if (*(int *)(lVar11 + 0x184) != iVar3) {
            bVar2 = iVar3 < *(int *)(lVar11 + 0x184);
          }
          plVar9 = plVar22 + uVar15;
          if (!bVar2) {
            do {
              plVar17 = plVar10;
              *plVar9 = lVar11;
              if ((long)uVar12 < (long)uVar21) break;
              uVar20 = uVar21 << 1 | 1;
              plVar9 = plVar22 + uVar20;
              uVar1 = uVar21 * 2 + 2;
              lVar16 = *plVar9;
              plVar10 = plVar9;
              lVar11 = lVar16;
              uVar21 = uVar20;
              if ((long)uVar1 < (long)uVar13) {
                lVar11 = plVar9[1];
                bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar11 + 0x188);
                if (*(int *)(lVar16 + 0x184) != *(int *)(lVar11 + 0x184)) {
                  bVar2 = *(int *)(lVar11 + 0x184) < *(int *)(lVar16 + 0x184);
                }
                plVar10 = plVar9 + 1;
                uVar21 = uVar1;
                if (!bVar2) {
                  plVar10 = plVar9;
                  lVar11 = lVar16;
                  uVar21 = uVar20;
                }
              }
              bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
              if (*(int *)(lVar11 + 0x184) != iVar3) {
                bVar2 = iVar3 < *(int *)(lVar11 + 0x184);
              }
              plVar9 = plVar17;
            } while (!bVar2);
            *plVar17 = lVar14;
          }
        }
        bVar2 = uVar15 != 0;
        uVar15 = uVar15 - 1;
      } while (bVar2);
      do {
        lVar11 = *plVar22;
        plVar9 = plVar22;
        uVar15 = 0;
        do {
          plVar17 = plVar9 + uVar15 + 1;
          lVar16 = *plVar17;
          uVar1 = uVar15 << 1 | 1;
          uVar12 = uVar15 * 2 + 2;
          plVar10 = plVar17;
          lVar14 = lVar16;
          uVar20 = uVar1;
          if ((long)uVar12 < (long)uVar13) {
            lVar14 = plVar9[uVar15 + 2];
            bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
            if (*(int *)(lVar16 + 0x184) != *(int *)(lVar14 + 0x184)) {
              bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar16 + 0x184);
            }
            plVar10 = plVar9 + uVar15 + 2;
            uVar20 = uVar12;
            if (!bVar2) {
              plVar10 = plVar17;
              lVar14 = lVar16;
              uVar20 = uVar1;
            }
          }
          *plVar9 = lVar14;
          plVar9 = plVar10;
          uVar15 = uVar20;
        } while ((long)uVar20 <= (long)(uVar13 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar10 == param_2) {
          *plVar10 = lVar11;
        }
        else {
          *plVar10 = *param_2;
          *param_2 = lVar11;
          lVar11 = (long)plVar10 + (8 - (long)plVar22) >> 3;
          if (1 < lVar11) {
            uVar15 = lVar11 - 2U >> 1;
            lVar14 = plVar22[uVar15];
            lVar11 = *plVar10;
            iVar3 = *(int *)(lVar11 + 0x184);
            bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
            if (*(int *)(lVar14 + 0x184) != iVar3) {
              bVar2 = iVar3 < *(int *)(lVar14 + 0x184);
            }
            plVar9 = plVar22 + uVar15;
            if (bVar2) {
              do {
                plVar17 = plVar9;
                *plVar10 = lVar14;
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1 >> 1;
                lVar14 = plVar22[uVar15];
                bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
                if (*(int *)(lVar14 + 0x184) != iVar3) {
                  bVar2 = iVar3 < *(int *)(lVar14 + 0x184);
                }
                plVar10 = plVar17;
                plVar9 = plVar22 + uVar15;
              } while (bVar2);
              *plVar17 = lVar11;
            }
          }
        }
        bVar2 = (long)uVar13 < 3;
        uVar13 = uVar13 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    plVar9 = plVar22 + (uVar13 >> 1);
    lVar11 = param_2[-1];
    iVar3 = *(int *)(lVar11 + 0x184);
    if (uVar13 < 0x81) {
      lVar16 = *plVar22;
      lVar14 = *plVar9;
      iVar4 = *(int *)(lVar16 + 0x184);
      iVar5 = *(int *)(lVar14 + 0x184);
      bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (iVar4 != iVar5) {
        bVar2 = iVar5 < iVar4;
      }
      bVar7 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar16 + 0x188);
      if (iVar3 != iVar4) {
        bVar7 = iVar4 < iVar3;
      }
      if (bVar2) {
        if (bVar7) {
          *plVar9 = lVar11;
        }
        else {
          *plVar9 = lVar16;
          *plVar22 = lVar14;
          lVar11 = param_2[-1];
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
          if (*(int *)(lVar11 + 0x184) != iVar5) {
            bVar2 = iVar5 < *(int *)(lVar11 + 0x184);
          }
          if (!bVar2) goto LAB_10a5c0dcc;
          *plVar22 = lVar11;
        }
        param_2[-1] = lVar14;
      }
      else if (bVar7) {
        *plVar22 = lVar11;
        param_2[-1] = lVar16;
        lVar11 = *plVar22;
        lVar14 = *plVar9;
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (bVar2) {
          *plVar9 = lVar11;
          *plVar22 = lVar14;
        }
      }
    }
    else {
      lVar16 = *plVar9;
      lVar14 = *plVar22;
      iVar4 = *(int *)(lVar16 + 0x184);
      iVar5 = *(int *)(lVar14 + 0x184);
      bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (iVar4 != iVar5) {
        bVar2 = iVar5 < iVar4;
      }
      bVar7 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar16 + 0x188);
      if (iVar3 != iVar4) {
        bVar7 = iVar4 < iVar3;
      }
      if (bVar2) {
        if (bVar7) {
          *plVar22 = lVar11;
        }
        else {
          *plVar22 = lVar16;
          *plVar9 = lVar14;
          lVar11 = param_2[-1];
          bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
          if (*(int *)(lVar11 + 0x184) != iVar5) {
            bVar2 = iVar5 < *(int *)(lVar11 + 0x184);
          }
          if (!bVar2) goto LAB_10a5c0af0;
          *plVar9 = lVar11;
        }
        param_2[-1] = lVar14;
      }
      else if (bVar7) {
        *plVar9 = lVar11;
        param_2[-1] = lVar16;
        lVar11 = *plVar9;
        lVar14 = *plVar22;
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (bVar2) {
          *plVar22 = lVar11;
          *plVar9 = lVar14;
        }
      }
LAB_10a5c0af0:
      lVar14 = plVar9[-1];
      lVar11 = plVar22[1];
      iVar3 = *(int *)(lVar14 + 0x184);
      iVar4 = *(int *)(lVar11 + 0x184);
      bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
      if (iVar3 != iVar4) {
        bVar2 = iVar4 < iVar3;
      }
      lVar16 = param_2[-2];
      bVar7 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (*(int *)(lVar16 + 0x184) != iVar3) {
        bVar7 = iVar3 < *(int *)(lVar16 + 0x184);
      }
      if (bVar2) {
        if (bVar7) {
          plVar22[1] = lVar16;
        }
        else {
          plVar22[1] = lVar14;
          plVar9[-1] = lVar11;
          lVar14 = param_2[-2];
          bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (*(int *)(lVar14 + 0x184) != iVar4) {
            bVar2 = iVar4 < *(int *)(lVar14 + 0x184);
          }
          if (!bVar2) goto LAB_10a5c0c14;
          plVar9[-1] = lVar14;
        }
        param_2[-2] = lVar11;
      }
      else if (bVar7) {
        plVar9[-1] = lVar16;
        param_2[-2] = lVar14;
        lVar11 = plVar9[-1];
        lVar14 = plVar22[1];
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (bVar2) {
          plVar22[1] = lVar11;
          plVar9[-1] = lVar14;
        }
      }
LAB_10a5c0c14:
      lVar14 = plVar9[1];
      lVar11 = plVar22[2];
      iVar3 = *(int *)(lVar14 + 0x184);
      iVar4 = *(int *)(lVar11 + 0x184);
      bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
      if (iVar3 != iVar4) {
        bVar2 = iVar4 < iVar3;
      }
      lVar16 = param_2[-3];
      bVar7 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (*(int *)(lVar16 + 0x184) != iVar3) {
        bVar7 = iVar3 < *(int *)(lVar16 + 0x184);
      }
      if (bVar2) {
        if (bVar7) {
          plVar22[2] = lVar16;
        }
        else {
          plVar22[2] = lVar14;
          plVar9[1] = lVar11;
          lVar14 = param_2[-3];
          bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (*(int *)(lVar14 + 0x184) != iVar4) {
            bVar2 = iVar4 < *(int *)(lVar14 + 0x184);
          }
          if (!bVar2) goto LAB_10a5c0cf8;
          plVar9[1] = lVar14;
        }
        param_2[-3] = lVar11;
      }
      else if (bVar7) {
        plVar9[1] = lVar16;
        param_2[-3] = lVar14;
        lVar11 = plVar9[1];
        lVar14 = plVar22[2];
        bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
        if (*(int *)(lVar11 + 0x184) != *(int *)(lVar14 + 0x184)) {
          bVar2 = *(int *)(lVar14 + 0x184) < *(int *)(lVar11 + 0x184);
        }
        if (bVar2) {
          plVar22[2] = lVar11;
          plVar9[1] = lVar14;
        }
      }
LAB_10a5c0cf8:
      lVar11 = plVar9[-1];
      lVar14 = *plVar9;
      iVar3 = *(int *)(lVar14 + 0x184);
      iVar4 = *(int *)(lVar11 + 0x184);
      bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
      if (iVar3 != iVar4) {
        bVar2 = iVar4 < iVar3;
      }
      lVar16 = plVar9[1];
      iVar5 = *(int *)(lVar16 + 0x184);
      bVar7 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar14 + 0x188);
      if (iVar5 != iVar3) {
        bVar7 = iVar3 < iVar5;
      }
      if (bVar2) {
        if (bVar7) {
          plVar9[-1] = lVar16;
          plVar9[1] = lVar11;
        }
        else {
          plVar9[-1] = lVar14;
          *plVar9 = lVar11;
          bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (iVar5 != iVar4) {
            bVar2 = iVar4 < iVar5;
          }
          lVar14 = lVar11;
          if (bVar2) {
            *plVar9 = lVar16;
            plVar9[1] = lVar11;
            lVar14 = lVar16;
          }
        }
      }
      else if (bVar7) {
        *plVar9 = lVar16;
        plVar9[1] = lVar14;
        bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar11 + 0x188);
        if (iVar5 != iVar4) {
          bVar2 = iVar4 < iVar5;
        }
        lVar14 = lVar16;
        if (bVar2) {
          plVar9[-1] = lVar16;
          *plVar9 = lVar11;
          lVar14 = lVar11;
        }
      }
      lVar11 = *plVar22;
      *plVar22 = lVar14;
      *plVar9 = lVar11;
    }
LAB_10a5c0dcc:
    param_3 = param_3 + -1;
    lVar11 = *plVar22;
    param_1 = plVar22;
    if ((param_4 & 1) == 0) {
      iVar3 = *(int *)(plVar22[-1] + 0x184);
      iVar4 = *(int *)(lVar11 + 0x184);
      uVar6 = *(uint *)(lVar11 + 0x188);
      bVar2 = *(uint *)(plVar22[-1] + 0x188) < uVar6;
      if (iVar3 != iVar4) {
        bVar2 = iVar4 < iVar3;
      }
      if (!bVar2) {
        iVar3 = *(int *)(param_2[-1] + 0x184);
        bVar2 = uVar6 < *(uint *)(param_2[-1] + 0x188);
        if (iVar4 != iVar3) {
          bVar2 = iVar3 < iVar4;
        }
        if (bVar2) {
          do {
            param_1 = param_1 + 1;
            if (param_1 == param_2) goto LAB_10a5c171c;
            iVar3 = *(int *)(*param_1 + 0x184);
            bVar2 = uVar6 < *(uint *)(*param_1 + 0x188);
            if (iVar4 != iVar3) {
              bVar2 = iVar3 < iVar4;
            }
          } while (!bVar2);
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
            iVar3 = *(int *)(*param_1 + 0x184);
            bVar2 = uVar6 < *(uint *)(*param_1 + 0x188);
            if (iVar4 != iVar3) {
              bVar2 = iVar3 < iVar4;
            }
          } while (!bVar2);
        }
        plVar9 = param_2;
        if (param_1 < param_2) {
          do {
            if (plVar9 == plVar22) goto LAB_10a5c171c;
            plVar9 = plVar9 + -1;
            iVar3 = *(int *)(*plVar9 + 0x184);
            bVar2 = uVar6 < *(uint *)(*plVar9 + 0x188);
            if (iVar4 != iVar3) {
              bVar2 = iVar3 < iVar4;
            }
          } while (bVar2);
        }
        if (param_1 < plVar9) {
          lVar14 = *param_1;
          lVar16 = *plVar9;
          do {
            *param_1 = lVar16;
            *plVar9 = lVar14;
            do {
              param_1 = param_1 + 1;
              if (param_1 == param_2) goto LAB_10a5c171c;
              lVar14 = *param_1;
              bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar14 + 0x188);
              if (iVar4 != *(int *)(lVar14 + 0x184)) {
                bVar2 = *(int *)(lVar14 + 0x184) < iVar4;
              }
            } while (!bVar2);
            do {
              if (plVar9 == plVar22) goto LAB_10a5c171c;
              plVar9 = plVar9 + -1;
              lVar16 = *plVar9;
              bVar2 = *(uint *)(lVar11 + 0x188) < *(uint *)(lVar16 + 0x188);
              if (iVar4 != *(int *)(lVar16 + 0x184)) {
                bVar2 = *(int *)(lVar16 + 0x184) < iVar4;
              }
            } while (bVar2);
          } while (param_1 < plVar9);
        }
        plVar9 = param_1 + -1;
        if (plVar9 != plVar22) {
          *plVar22 = *plVar9;
        }
        param_4 = 0;
        *plVar9 = lVar11;
        goto LAB_10a5c0918;
      }
    }
    lVar14 = 0;
    do {
      plVar9 = (long *)((long)plVar22 + lVar14 + 8);
      if (plVar9 == param_2) goto LAB_10a5c171c;
      lVar16 = *plVar9;
      iVar3 = *(int *)(lVar11 + 0x184);
      uVar6 = *(uint *)(lVar11 + 0x188);
      bVar2 = *(uint *)(lVar16 + 0x188) < uVar6;
      if (*(int *)(lVar16 + 0x184) != iVar3) {
        bVar2 = iVar3 < *(int *)(lVar16 + 0x184);
      }
      lVar14 = lVar14 + 8;
    } while (bVar2);
    plVar9 = (long *)((long)plVar22 + lVar14);
    plVar10 = param_2;
    if (lVar14 == 8) {
      do {
        if (plVar10 <= plVar9) break;
        plVar10 = plVar10 + -1;
        iVar4 = *(int *)(*plVar10 + 0x184);
        bVar2 = *(uint *)(*plVar10 + 0x188) < uVar6;
        if (iVar4 != iVar3) {
          bVar2 = iVar3 < iVar4;
        }
      } while (!bVar2);
    }
    else {
      do {
        if (plVar10 == plVar22) {
LAB_10a5c171c:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a5c1720);
          (*pcVar8)();
        }
        plVar10 = plVar10 + -1;
        iVar4 = *(int *)(*plVar10 + 0x184);
        bVar2 = *(uint *)(*plVar10 + 0x188) < uVar6;
        if (iVar4 != iVar3) {
          bVar2 = iVar3 < iVar4;
        }
      } while (!bVar2);
    }
    param_1 = plVar9;
    if (plVar9 < plVar10) {
      lVar14 = *plVar10;
      plVar17 = plVar10;
      do {
        *param_1 = lVar14;
        *plVar17 = lVar16;
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10a5c171c;
          lVar16 = *param_1;
          bVar2 = *(uint *)(lVar16 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (*(int *)(lVar16 + 0x184) != iVar3) {
            bVar2 = iVar3 < *(int *)(lVar16 + 0x184);
          }
        } while (bVar2);
        do {
          if (plVar17 == plVar22) goto LAB_10a5c171c;
          plVar17 = plVar17 + -1;
          lVar14 = *plVar17;
          bVar2 = *(uint *)(lVar14 + 0x188) < *(uint *)(lVar11 + 0x188);
          if (*(int *)(lVar14 + 0x184) != iVar3) {
            bVar2 = iVar3 < *(int *)(lVar14 + 0x184);
          }
        } while (!bVar2);
      } while (param_1 < plVar17);
    }
    plVar17 = param_1 + -1;
    if (plVar17 != plVar22) {
      *plVar22 = *plVar17;
    }
    *plVar17 = lVar11;
    if (plVar9 < plVar10) {
LAB_10a5c0f98:
      FUN_10a5c08ec(plVar22,plVar17,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      plVar9 = plVar22;
      FUN_10a5c1918(plVar22,plVar17);
      plVar10 = param_1;
      FUN_10a5c1918(param_1,param_2);
      if ((int)plVar10 == 0) {
        if (((ulong)plVar9 & 1) == 0) goto LAB_10a5c0f98;
      }
      else {
        param_1 = plVar22;
        param_2 = plVar17;
        if (((ulong)plVar9 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10a5c1770; end: 10a5c1917;  */

void FUN_10a5c1770(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *param_2;
  lVar6 = *param_1;
  iVar1 = *(int *)(lVar5 + 0x184);
  iVar2 = *(int *)(lVar6 + 0x184);
  bVar3 = *(uint *)(lVar5 + 0x188) < *(uint *)(lVar6 + 0x188);
  if (iVar1 != iVar2) {
    bVar3 = iVar2 < iVar1;
  }
  lVar8 = *param_3;
  bVar4 = *(uint *)(lVar8 + 0x188) < *(uint *)(lVar5 + 0x188);
  if (*(int *)(lVar8 + 0x184) != iVar1) {
    bVar4 = iVar1 < *(int *)(lVar8 + 0x184);
  }
  if (bVar3) {
    if (bVar4) {
      *param_1 = lVar8;
    }
    else {
      *param_1 = lVar5;
      *param_2 = lVar6;
      lVar8 = *param_3;
      bVar3 = *(uint *)(lVar8 + 0x188) < *(uint *)(lVar6 + 0x188);
      if (*(int *)(lVar8 + 0x184) != iVar2) {
        bVar3 = iVar2 < *(int *)(lVar8 + 0x184);
      }
      if (!bVar3) goto LAB_10a5c1864;
      *param_2 = lVar8;
    }
    *param_3 = lVar6;
    lVar8 = lVar6;
  }
  else if (bVar4) {
    *param_2 = lVar8;
    *param_3 = lVar5;
    lVar6 = *param_2;
    lVar7 = *param_1;
    bVar3 = *(uint *)(lVar6 + 0x188) < *(uint *)(lVar7 + 0x188);
    if (*(int *)(lVar6 + 0x184) != *(int *)(lVar7 + 0x184)) {
      bVar3 = *(int *)(lVar7 + 0x184) < *(int *)(lVar6 + 0x184);
    }
    lVar8 = lVar5;
    if (bVar3) {
      *param_1 = lVar6;
      *param_2 = lVar7;
      lVar8 = *param_3;
    }
  }
LAB_10a5c1864:
  lVar5 = *param_4;
  bVar3 = *(uint *)(lVar5 + 0x188) < *(uint *)(lVar8 + 0x188);
  if (*(int *)(lVar5 + 0x184) != *(int *)(lVar8 + 0x184)) {
    bVar3 = *(int *)(lVar8 + 0x184) < *(int *)(lVar5 + 0x184);
  }
  if (bVar3) {
    *param_3 = lVar5;
    *param_4 = lVar8;
    lVar5 = *param_3;
    lVar6 = *param_2;
    bVar3 = *(uint *)(lVar5 + 0x188) < *(uint *)(lVar6 + 0x188);
    if (*(int *)(lVar5 + 0x184) != *(int *)(lVar6 + 0x184)) {
      bVar3 = *(int *)(lVar6 + 0x184) < *(int *)(lVar5 + 0x184);
    }
    if (bVar3) {
      *param_2 = lVar5;
      *param_3 = lVar6;
      lVar5 = *param_2;
      lVar6 = *param_1;
      bVar3 = *(uint *)(lVar5 + 0x188) < *(uint *)(lVar6 + 0x188);
      if (*(int *)(lVar5 + 0x184) != *(int *)(lVar6 + 0x184)) {
        bVar3 = *(int *)(lVar6 + 0x184) < *(int *)(lVar5 + 0x184);
      }
      if (bVar3) {
        *param_1 = lVar5;
        *param_2 = lVar6;
      }
    }
  }
  return;
}



/* Entry: 10a5c1918; end: 10a5c1d0f;  */

bool FUN_10a5c1918(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  
  uVar7 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar7 < 3) {
    if (uVar7 < 2) {
      return true;
    }
    if (uVar7 == 2) {
      lVar8 = param_2[-1];
      lVar10 = *param_1;
      bVar5 = *(uint *)(lVar8 + 0x188) < *(uint *)(lVar10 + 0x188);
      if (*(int *)(lVar8 + 0x184) != *(int *)(lVar10 + 0x184)) {
        bVar5 = *(int *)(lVar10 + 0x184) < *(int *)(lVar8 + 0x184);
      }
      if (!bVar5) {
        return true;
      }
      *param_1 = lVar8;
      param_2[-1] = lVar10;
      return true;
    }
  }
  else {
    if (uVar7 == 3) {
      lVar8 = *param_1;
      lVar10 = param_1[1];
      iVar12 = *(int *)(lVar10 + 0x184);
      iVar2 = *(int *)(lVar8 + 0x184);
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar12 != iVar2) {
        bVar5 = iVar2 < iVar12;
      }
      lVar13 = param_2[-1];
      bVar6 = *(uint *)(lVar13 + 0x188) < *(uint *)(lVar10 + 0x188);
      if (*(int *)(lVar13 + 0x184) != iVar12) {
        bVar6 = iVar12 < *(int *)(lVar13 + 0x184);
      }
      if (bVar5) {
        if (bVar6) {
          *param_1 = lVar13;
        }
        else {
          *param_1 = lVar10;
          param_1[1] = lVar8;
          lVar10 = param_2[-1];
          bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
          if (*(int *)(lVar10 + 0x184) != iVar2) {
            bVar5 = iVar2 < *(int *)(lVar10 + 0x184);
          }
          if (!bVar5) {
            return true;
          }
          param_1[1] = lVar10;
        }
        param_2[-1] = lVar8;
        return true;
      }
      if (!bVar6) {
        return true;
      }
      param_1[1] = lVar13;
      param_2[-1] = lVar10;
      lVar8 = *param_1;
      lVar10 = param_1[1];
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (*(int *)(lVar10 + 0x184) != *(int *)(lVar8 + 0x184)) {
        bVar5 = *(int *)(lVar8 + 0x184) < *(int *)(lVar10 + 0x184);
      }
      if (!bVar5) {
        return true;
      }
      *param_1 = lVar10;
      param_1[1] = lVar8;
      return true;
    }
    if (uVar7 == 4) {
      FUN_10a5c1770(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
      return true;
    }
    if (uVar7 == 5) {
      FUN_10a5c1770(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
      lVar8 = param_2[-1];
      lVar10 = param_1[3];
      bVar5 = *(uint *)(lVar8 + 0x188) < *(uint *)(lVar10 + 0x188);
      if (*(int *)(lVar8 + 0x184) != *(int *)(lVar10 + 0x184)) {
        bVar5 = *(int *)(lVar10 + 0x184) < *(int *)(lVar8 + 0x184);
      }
      if (!bVar5) {
        return true;
      }
      param_1[3] = lVar8;
      param_2[-1] = lVar10;
      lVar8 = param_1[2];
      lVar10 = param_1[3];
      iVar12 = *(int *)(lVar10 + 0x184);
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar12 != *(int *)(lVar8 + 0x184)) {
        bVar5 = *(int *)(lVar8 + 0x184) < iVar12;
      }
      if (!bVar5) {
        return true;
      }
      param_1[2] = lVar10;
      param_1[3] = lVar8;
      lVar8 = param_1[1];
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar12 != *(int *)(lVar8 + 0x184)) {
        bVar5 = *(int *)(lVar8 + 0x184) < iVar12;
      }
      if (!bVar5) {
        return true;
      }
      param_1[1] = lVar10;
      param_1[2] = lVar8;
      lVar8 = *param_1;
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar12 != *(int *)(lVar8 + 0x184)) {
        bVar5 = *(int *)(lVar8 + 0x184) < iVar12;
      }
      if (!bVar5) {
        return true;
      }
      *param_1 = lVar10;
      param_1[1] = lVar8;
      return true;
    }
  }
  lVar13 = param_1[2];
  lVar8 = *param_1;
  lVar10 = param_1[1];
  iVar12 = *(int *)(lVar10 + 0x184);
  iVar2 = *(int *)(lVar8 + 0x184);
  bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar8 + 0x188);
  if (iVar12 != iVar2) {
    bVar5 = iVar2 < iVar12;
  }
  iVar3 = *(int *)(lVar13 + 0x184);
  bVar6 = *(uint *)(lVar13 + 0x188) < *(uint *)(lVar10 + 0x188);
  if (iVar3 != iVar12) {
    bVar6 = iVar12 < iVar3;
  }
  if (bVar5) {
    if (bVar6) {
      *param_1 = lVar13;
    }
    else {
      *param_1 = lVar10;
      param_1[1] = lVar8;
      bVar5 = *(uint *)(lVar13 + 0x188) < *(uint *)(lVar8 + 0x188);
      if (iVar3 != iVar2) {
        bVar5 = iVar2 < iVar3;
      }
      if (!bVar5) goto LAB_10a5c1c38;
      param_1[1] = lVar13;
    }
    param_1[2] = lVar8;
  }
  else if (bVar6) {
    param_1[1] = lVar13;
    param_1[2] = lVar10;
    bVar5 = *(uint *)(lVar13 + 0x188) < *(uint *)(lVar8 + 0x188);
    if (iVar3 != iVar2) {
      bVar5 = iVar2 < iVar3;
    }
    if (bVar5) {
      *param_1 = lVar13;
      param_1[1] = lVar8;
    }
  }
LAB_10a5c1c38:
  if (param_1 + 3 != param_2) {
    iVar12 = 0;
    lVar8 = 0x18;
    plVar9 = param_1 + 2;
    plVar11 = param_1 + 3;
    do {
      lVar10 = *plVar11;
      lVar13 = *plVar9;
      iVar2 = *(int *)(lVar10 + 0x184);
      bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar13 + 0x188);
      if (iVar2 != *(int *)(lVar13 + 0x184)) {
        bVar5 = *(int *)(lVar13 + 0x184) < iVar2;
      }
      lVar14 = lVar8;
      if (bVar5) {
        do {
          *(long *)((long)param_1 + lVar14) = lVar13;
          lVar4 = lVar14 + -8;
          plVar9 = param_1;
          if (lVar4 == 0) goto LAB_10a5c1ccc;
          lVar13 = *(long *)((long)param_1 + lVar14 + -0x10);
          bVar5 = *(uint *)(lVar10 + 0x188) < *(uint *)(lVar13 + 0x188);
          if (iVar2 != *(int *)(lVar13 + 0x184)) {
            bVar5 = *(int *)(lVar13 + 0x184) < iVar2;
          }
          lVar14 = lVar4;
        } while (bVar5);
        plVar9 = (long *)((long)param_1 + lVar4);
LAB_10a5c1ccc:
        *plVar9 = lVar10;
        iVar12 = iVar12 + 1;
        if (iVar12 == 8) {
          return plVar11 + 1 == param_2;
        }
      }
      plVar1 = plVar11 + 1;
      lVar8 = lVar8 + 8;
      plVar9 = plVar11;
      plVar11 = plVar1;
    } while (plVar1 != param_2);
  }
  return true;
}



/* Entry: 10a5c1d10; end: 10a5c1e0b;  */

undefined1  [16] FUN_10a5c1d10(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf8380;
  puVar1 = &UNK_10f66429f;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110bf8380;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a5c1e0c; end: 10a5c1e5f;  */

ulong FUN_10a5c1e0c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a5c1e60,0);
  }
  return param_1;
}



/* Entry: 10a5c1e60; end: 10a5c1f63;  */

void FUN_10a5c1e60(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lVar6 = param_2[3];
      *param_1 = 2;
      *(char *)(param_1 + 2) = (char)lVar6;
      plVar4 = plVar3 + 0x4b;
      lVar6 = plVar3[0x59];
      uVar7 = lVar6 - 1;
      plVar3[0x59] = uVar7;
      if (uVar7 < 8) {
        uVar7 = plVar4[lVar6 + 2];
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      else {
        uVar7 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      lVar6 = *plVar4;
      lVar11 = plVar3[0x4c];
      lVar9 = lVar11 - lVar6;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar7) {
        uVar14 = uVar7 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar7 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar6 >> 3;
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar8 >> 0x3c == 0) {
              lVar2 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar6,lVar9);
              *plVar4 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar8 * 0x10;
              lStack_88 = lVar6;
              lStack_80 = lVar6;
              lStack_78 = lVar6;
              lStack_70 = lVar12;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar11,uVar14 * 0x10);
        plVar3[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar7 < uVar13) {
        lVar6 = lVar6 + uVar7 * 0x10;
        while (lVar11 != lVar6) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar3[0x4c] = lVar6;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar7;
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5c1f50);
  (*pcVar1)();
}



/* Entry: 10a5c1f64; end: 10a5c201f;  */

void FUN_10a5c1f64(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f666998,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5c2020);
  (*pcVar4)();
}



/* Entry: 10a5c2020; end: 10a5c21b3;  */

void FUN_10a5c2020(undefined8 *param_1,byte *param_2)

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
  aiStack_70[0] = 3;
  puStack_68 = (undefined8 *)NEON_ucvtf((ulong)*param_2);
  piStack_40 = aiStack_70;
  uStack_38 = 1;
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



/* Entry: 10a5c21b4; end: 10a5c21ef;  */

void FUN_10a5c21b4(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
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
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  aiStack_70[0] = 3;
  puStack_68 = (undefined8 *)NEON_ucvtf((ulong)*(byte *)(param_1 + 0x20));
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
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



/* Entry: 10a5c21f0; end: 10a5c221f;  */

void FUN_10a5c21f0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  FUN_10a5c2220();
                    /* WARNING: Could not recover jumptable at 0x00010a5c221c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a5c2220; end: 10a5c22eb;  */

void FUN_10a5c2220(long *param_1)

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
      if (*param_1 != 0) {
        lVar5 = 0x4b0;
        if ((int)param_1[2] != 0) {
          lVar5 = 0x4b8;
        }
        if (*(long *)(*param_1 + lVar5) == param_1[3]) {
          FUN_10a5943a4();
        }
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
  }
  (*(code *)param_1[5])(param_1);
  return;
}



/* Entry: 10a5c22ec; end: 10a5c2353;  */

void FUN_10a5c22ec(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a5c2354; end: 10a5c253f;  */

void FUN_10a5c2354(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined8 *apuStack_a0 [2];
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(apuStack_a0,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_b8,apuStack_a0,*param_1);
  if (apuStack_a0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_a0[0])();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_c0);
  plVar2 = (long *)*param_1;
  FUN_10a0881b8(apuStack_a0,plVar2,param_2);
  FUN_10a07a354(auStack_90,plVar2,param_3);
  FUN_10a07aef4(aiStack_80,plVar2,param_4);
  uStack_48 = 3;
  ppuStack_50 = apuStack_a0;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_70 = &puStack_b8;
  pppuStack_58 = &ppuStack_50;
  plStack_68 = plVar2;
  puStack_60 = (undefined1 *)&puStack_c0;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar1)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x30);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a5c2540; end: 10a5c2553;  */

void FUN_10a5c2540(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined8 *apuStack_a0 [2];
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)*puVar2;
  func_0x000109884c0c(apuStack_a0,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_b8,apuStack_a0,*puVar1);
  if (apuStack_a0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_a0[0])();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_c0);
  plVar4 = (long *)*puVar1;
  FUN_10a0881b8(apuStack_a0,plVar4,puVar2 + 2);
  FUN_10a07a354(auStack_90,plVar4,(long)puVar2 + 0x1c);
  FUN_10a07aef4(aiStack_80,plVar4,(long)puVar2 + 0x2c);
  uStack_48 = 3;
  ppuStack_50 = apuStack_a0;
  (**(code **)(*plVar4 + 0x58))(plVar4);
  ppuStack_70 = &puStack_b8;
  pppuStack_58 = &ppuStack_50;
  plStack_68 = plVar4;
  puStack_60 = (undefined1 *)&puStack_c0;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar3)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a5c2554; end: 10a5c2573;  */

void FUN_10a5c2554(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010a004dac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a5c2574; end: 10a5c258b;  */

void FUN_10a5c2574(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a5c258c; end: 10a5c2bb7;  */

long FUN_10a5c258c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar2 = (long *)(param_1 + 8);
  plVar7 = *(long **)(param_1 + 8);
  do {
    if (plVar7 == (long *)0x0) goto LAB_10a5c25ec;
    plVar6 = plVar7 + 4;
    func_0x00010a003d08(plVar6,param_2);
    plVar8 = plVar7;
    if ((char)plVar6 < '\x01') {
      plVar6 = plVar7 + 4;
      func_0x00010a003d08(plVar6,param_2);
      if (((uint)plVar6 >> 7 & 1) == 0) {
        plVar6 = plVar7;
        for (plVar8 = (long *)*plVar7; plVar8 != (long *)0x0;
            plVar8 = *(long **)((long)plVar8 + (uVar5 >> 4 & 8))) {
          uVar5 = (ulong)(plVar8 + 4);
          func_0x00010a003d08(uVar5,param_2);
          if (-1 < (char)uVar5) {
            plVar6 = plVar8;
          }
        }
        for (plVar7 = (long *)plVar7[1]; plVar7 != (long *)0x0;
            plVar7 = *(long **)((long)plVar7 + lVar4)) {
          plVar8 = plVar7 + 4;
          func_0x00010a003d08(plVar8,param_2);
          lVar4 = 0;
          plVar1 = plVar7;
          if ((char)plVar8 < '\x01') {
            lVar4 = 8;
            plVar1 = plVar2;
          }
          plVar2 = plVar1;
        }
        if (plVar6 == plVar2) {
LAB_10a5c25ec:
          lVar4 = 0;
        }
        else {
          lVar4 = 0;
          do {
            plVar7 = (long *)plVar6[1];
            plVar8 = plVar6;
            if ((long *)plVar6[1] == (long *)0x0) {
              do {
                plVar6 = (long *)plVar8[2];
                bVar3 = (long *)*plVar6 != plVar8;
                plVar8 = plVar6;
              } while (bVar3);
            }
            else {
              do {
                plVar6 = plVar7;
                plVar7 = (long *)*plVar6;
              } while ((long *)*plVar6 != (long *)0x0);
            }
            lVar4 = lVar4 + 1;
          } while (plVar6 != plVar2);
        }
        return lVar4;
      }
      plVar8 = plVar7 + 1;
      plVar7 = plVar2;
    }
    plVar2 = plVar7;
    plVar7 = (long *)*plVar8;
  } while( true );
}



/* Entry: 10a5c2bb8; end: 10a5c2cdb;  */

void FUN_10a5c2bb8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a5c2cdc(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a5971e0(&stack0xffffffffffffffa0,plVar5);
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a5c2cdc; end: 10a5c2d43;  */

void FUN_10a5c2cdc(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  long *plStack_88;
  ulong in_stack_ffffffffffffff80;
  undefined8 in_stack_ffffffffffffff88;
  long in_stack_ffffffffffffff98;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110bf8160;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a5c2cdc(plVar5,param_2);
  FUN_10a0584c8(param_4);
  func_0x000109898570(&stack0xffffffffffffff88,plVar5,param_3);
  FUN_10a597328(&puStack_90,plVar7,&stack0xffffffffffffff88);
  if (in_stack_ffffffffffffff98 < 0) {
    __ZdlPv(in_stack_ffffffffffffff88);
  }
  plVar7 = plStack_88;
  ppuVar1 = (undefined1 **)puStack_90;
  if (-1 < (long)in_stack_ffffffffffffff80) {
    plVar7 = (long *)(in_stack_ffffffffffffff80 >> 0x38);
    ppuVar1 = &puStack_90;
  }
  (**(code **)(*plVar5 + 0x128))(&stack0xffffffffffffff88,plVar5,ppuVar1,plVar7);
  *extraout_x8 = 6;
  *(undefined8 *)(extraout_x8 + 2) = in_stack_ffffffffffffff88;
  if ((long)in_stack_ffffffffffffff80 < 0) {
    __ZdlPv(puStack_90);
  }
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    puVar14 = (undefined1 *)plVar6[0x4d];
    if ((ulong)((long)puVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = (long)puVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          puStack_90 = puVar14;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a5c2d44; end: 10a5c2ea3;  */

void FUN_10a5c2d44(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  long *plStack_68;
  ulong in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a5c2cdc(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a597328(&puStack_70,plVar5,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  plVar5 = plStack_68;
  ppuVar1 = (undefined1 **)puStack_70;
  if (-1 < (long)in_stack_ffffffffffffffa0) {
    plVar5 = (long *)(in_stack_ffffffffffffffa0 >> 0x38);
    ppuVar1 = &puStack_70;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffa8,param_2,ppuVar1,plVar5);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffa8;
  if ((long)in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(puStack_70);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    puVar12 = (undefined1 *)plVar4[0x4d];
    if ((ulong)((long)puVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = (long)puVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          puStack_70 = puVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a5c2ea4; end: 10a5c2fdb;  */

void FUN_10a5c2ea4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a5c2cdc(param_2,param_3);
  FUN_10a076f00(param_5);
  plVar6 = param_2;
  func_0x000109898518(param_2,param_4);
  FUN_10a5976b8(&stack0xffffffffffffffa0,plVar5,plVar6);
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar5;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar5 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a5c2fdc; end: 10a5c3093;  */

void FUN_10a5c2fdc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5c3094(param_1,param_2,FUN_10a59776c,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a5c3094; end: 10a5c31b7;  */

void FUN_10a5c3094(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  int *param_6,undefined8 param_7)

{
  float fVar1;
  undefined1 **ppuVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined1 *puStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 uStack_58;
  
  plVar5 = param_2;
  pcVar3 = param_3;
  uVar8 = param_4;
  FUN_10a5c2cdc(param_2,param_5);
  FUN_10a05ed04(param_7);
  if (*param_6 == 3) {
    fVar1 = (float)*(double *)(param_6 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_6 + 2))) {
      fVar1 = 0.0;
    }
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(*(long *)((long)plVar5 + ((long)param_4 >> 1)) +
                          ((ulong)param_3 & 0xffffffff));
    }
    (*param_3)(&puStack_70,fVar1);
    ppuVar2 = (undefined1 **)puStack_70;
    if (-1 < (char)bStack_59) {
      uStack_68 = (ulong)bStack_59;
      ppuVar2 = &puStack_70;
    }
    (**(code **)(*param_2 + 0x128))(&uStack_58,param_2,ppuVar2,uStack_68);
    *param_1 = 6;
    *(undefined8 *)(param_1 + 2) = uStack_58;
    if ((char)bStack_59 < '\0') {
      __ZdlPv(puStack_70);
    }
    return;
  }
  plVar5 = (long *)&UNK_10f68f550;
  func_0x00010988bd28();
  if ((char)bStack_59 < '\0') {
    __ZdlPv(puStack_70);
  }
  __Unwind_Resume();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a5c3094(extraout_x8,plVar5,FUN_10a597820,0,param_5,pcVar3,uVar8);
  plVar5 = plVar6 + 0x4b;
  lVar7 = plVar6[0x59];
  uVar8 = lVar7 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar7 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar5;
  lVar12 = plVar6[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_d8 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar5 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_f8 = lVar7;
          lStack_f0 = lVar7;
          lStack_e8 = lVar7;
          lStack_e0 = lVar13;
          func_0x00010988c1b8(&lStack_f8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a5c31b8; end: 10a5c326f;  */

void FUN_10a5c31b8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5c3094(param_1,param_2,FUN_10a597820,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a5c3270; end: 10a5c3327;  */

void FUN_10a5c3270(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5c3094(param_1,param_2,FUN_10a5978d4,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a5c3328; end: 10a5c33df;  */

void FUN_10a5c3328(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5c3094(param_1,param_2,FUN_10a597998,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a5c33e0; end: 10a5c3497;  */

void FUN_10a5c33e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5c3498(param_1,param_2,FUN_10a597f00,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a5c3498; end: 10a5c3597;  */

void FUN_10a5c3498(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 **ppuVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puStack_70;
  ulong uStack_68;
  byte bStack_59;
  long *plStack_58;
  
  plVar2 = param_2;
  FUN_10a5c2cdc(param_2,param_5);
  FUN_10a074d28(param_7);
  plVar3 = param_2;
  FUN_10a074d4c(param_2,param_6);
  plVar2 = (long *)((long)plVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar2 + ((ulong)param_3 & 0xffffffff));
  }
  plStack_58 = plVar3;
  (*param_3)(&puStack_70,plVar2,&plStack_58);
  ppuVar1 = (undefined1 **)puStack_70;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuVar1 = &puStack_70;
  }
  (**(code **)(*param_2 + 0x128))(&plStack_58,param_2,ppuVar1,uStack_68);
  *param_1 = 6;
  *(long **)(param_1 + 2) = plStack_58;
  if ((char)bStack_59 < '\0') {
    __ZdlPv(puStack_70);
  }
  return;
}



/* Entry: 10a5c3598; end: 10a5c364f;  */

void FUN_10a5c3598(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5c3498(param_1,param_2,0x10a597f04,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a5c3650; end: 10a5c3707;  */

void FUN_10a5c3650(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5c3498(param_1,param_2,0x10a597ae0,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a5c3708; end: 10a5c37bf;  */

void FUN_10a5c3708(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5c3498(param_1,param_2,0x10a597b28,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a5c37c0; end: 10a5c3877;  */

void FUN_10a5c37c0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5c3498(param_1,param_2,0x10a597b70,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a5c3878; end: 10a5c392f;  */

void FUN_10a5c3878(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5c3498(param_1,param_2,0x10a597bb8,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a5c3930; end: 10a5c39e7;  */

void FUN_10a5c3930(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5c39e8(param_1,param_2,FUN_10a597c00,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a5c39e8; end: 10a5c3ae3;  */

void FUN_10a5c39e8(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 **ppuVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 uStack_58;
  
  plVar2 = param_2;
  FUN_10a5c2cdc(param_2,param_5);
  FUN_10a5c3ae4(param_7);
  plVar3 = param_2;
  func_0x00010a5c3b08(param_2,param_6);
  plVar2 = (long *)((long)plVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar2 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&puStack_70,plVar2,plVar3);
  ppuVar1 = (undefined1 **)puStack_70;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuVar1 = &puStack_70;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_58,param_2,ppuVar1,uStack_68);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = uStack_58;
  if ((char)bStack_59 < '\0') {
    __ZdlPv(puStack_70);
  }
  return;
}



/* Entry: 10a5c3ae4; end: 10a5c3b4b;  */

undefined8 * FUN_10a5c3ae4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return param_1;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  func_0x000109898688();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*puVar1 == &PTR_FUN_110bf8420) {
    return puVar1 + 1;
  }
  func_0x00010988bd28(&UNK_10f685496);
  return (undefined8 *)0x0;
}



/* Entry: 10a5c3b4c; end: 10a5c3b77;  */

undefined8 FUN_10a5c3b4c(void)

{
  return 0;
}



/* Entry: 10a5c3b78; end: 10a5c3c2f;  */

void FUN_10a5c3b78(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5c39e8(param_1,param_2,FUN_10a597cc0,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a5c3c30; end: 10a5c3ce7;  */

void FUN_10a5c3c30(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5c39e8(param_1,param_2,FUN_10a597d80,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a5c3ce8; end: 10a5c3d9f;  */

void FUN_10a5c3ce8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a5c39e8(param_1,param_2,FUN_10a597e40,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a5c3da0; end: 10a5c3ee7;  */

void FUN_10a5c3da0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a053854(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a0584c8(param_5);
      func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
      FUN_10a597218(plVar5,&stack0xffffffffffffffa8);
      if (in_stack_ffffffffffffffb8 < 0) {
        __ZdlPv(in_stack_ffffffffffffffa8);
      }
      *param_1 = 0;
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar8 = lVar7 - 1;
      plVar3[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar12 = plVar3[0x4c];
      lVar10 = lVar12 - lVar7;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar8) {
        uVar15 = uVar8 - uVar14;
        lVar13 = plVar3[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar13 - lVar7 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar9 >> 0x3c == 0) {
              lVar2 = uVar9 << 4;
              __Znwm();
              lVar12 = lVar2 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar7,lVar10);
              *plVar4 = lVar11;
              plVar3[0x4c] = lVar12 + uVar15 * 0x10;
              plVar3[0x4d] = lVar2 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar13;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar3[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar8 < uVar14) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar12 != lVar7) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar8;
      return;
    }
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5c3ebc);
  (*pcVar1)();
}



/* Entry: 10a5c3ee8; end: 10a5c3f97;  */

long * FUN_10a5c3ee8(long *param_1)

{
  long lVar1;
  
  func_0x00010a5c3f20(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5c3f98; end: 10a5c3ff3;  */

long * FUN_10a5c3f98(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a5c3ff4(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5c3ff4; end: 10a5c404b;  */

long FUN_10a5c3ff4(long param_1)

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



/* Entry: 10a5c404c; end: 10a5c42cf;  */

undefined1  [16]
FUN_10a5c404c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  plVar6 = param_1;
  func_0x000107c2b05c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000107c2b068(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10a5c428c;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  plVar3 = (long *)*param_4;
  plVar7 = (long *)0x50;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar6;
  if (*(char *)((long)plVar3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar7 + 2,*plVar3,plVar3[1]);
  }
  else {
    lVar10 = plVar3[1];
    lVar4 = *plVar3;
    plVar7[4] = plVar3[2];
    plVar7[3] = lVar10;
    plVar7[2] = lVar4;
  }
  plVar7[8] = 0;
  plVar7[7] = 0;
  plVar7[6] = 0;
  plVar7[5] = 0;
  *(undefined4 *)(plVar7 + 9) = 0x3f800000;
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_10a5c42d0(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*plVar7 != 0) {
      plVar6 = *(long **)(*plVar7 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_10a5c428c:
  auVar11._8_8_ = uVar1;
  auVar11._0_8_ = plVar7;
  return auVar11;
}



/* Entry: 10a5c42d0; end: 10a5c439f;  */

void FUN_10a5c42d0(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_10a5c4318:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x00010a5c3f5c(uVar7 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_10a5c4318;
  }
  return;
}



/* Entry: 10a5c43a0; end: 10a5c4523;  */

void FUN_10a5c43a0(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x00010a5c3f5c(uVar1 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 10a5c4524; end: 10a5c4607;  */

long FUN_10a5c4524(long *param_1,undefined8 param_2)

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



/* Entry: 10a5c4608; end: 10a5c4a27;  */

undefined1  [16] FUN_10a5c4608(long *param_1,ulong *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong unaff_x24;
  undefined1 auVar19 [16];
  
  uVar7 = *param_2;
  uVar11 = ((ulong)(uint)((int)uVar7 << 3) + 8 ^ uVar7 >> 0x20) * -0x622015f714c7d297;
  uVar11 = (uVar7 >> 0x20 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
  uVar18 = (uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar9 = uVar11 - 1;
    if ((uVar11 & uVar9) == 0) {
      unaff_x24 = uVar18 & uVar9;
    }
    else {
      unaff_x24 = uVar18;
      if (uVar11 <= uVar18) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar18 / uVar11;
        }
        unaff_x24 = uVar18 - uVar13 * uVar11;
      }
    }
    puVar12 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar17 = (long *)*puVar12; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
        uVar13 = plVar17[1];
        if (uVar13 == uVar18) {
          if (plVar17[2] == uVar7) {
            uVar6 = 0;
            goto LAB_10a5c49ac;
          }
        }
        else {
          if ((uVar11 & uVar9) == 0) {
            uVar13 = uVar13 & uVar9;
          }
          else if (uVar11 <= uVar13) {
            uVar16 = 0;
            if (uVar11 != 0) {
              uVar16 = uVar13 / uVar11;
            }
            uVar13 = uVar13 - uVar16 * uVar11;
          }
          if (uVar13 != unaff_x24) break;
        }
      }
    }
  }
  plVar17 = (long *)0x20;
  __Znwm();
  *plVar17 = 0;
  plVar17[1] = uVar18;
  lVar8 = param_3[1];
  lVar5 = *param_3;
  plVar17[3] = param_3[1];
  plVar17[2] = lVar5;
  if (lVar8 != 0) {
    plVar10 = (long *)(lVar8 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar11) {
      uVar7 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar7 = uVar7 | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar11 = param_1[1];
    if (uVar11 < uVar7) {
LAB_10a5c47bc:
      if (uVar7 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5c4a14);
        (*pcVar4)();
      }
      lVar8 = uVar7 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar8;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar11 = 0;
      param_1[1] = uVar7;
      do {
        *(undefined8 *)(*param_1 + uVar11 * 8) = 0;
        uVar11 = uVar11 + 1;
      } while (uVar7 != uVar11);
      plVar10 = (long *)param_1[2];
      uVar11 = uVar7;
      if (plVar10 != (long *)0x0) {
        uVar9 = plVar10[1];
        uVar13 = uVar7 - 1;
        if ((uVar7 & uVar13) == 0) {
          uVar9 = uVar9 & uVar13;
        }
        else if (uVar7 <= uVar9) {
          uVar16 = 0;
          if (uVar7 != 0) {
            uVar16 = uVar9 / uVar7;
          }
          uVar9 = uVar9 - uVar16 * uVar7;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar14 = (long *)*plVar10;
        while (plVar14 != (long *)0x0) {
          uVar16 = plVar14[1];
          if ((uVar7 & uVar13) == 0) {
            uVar16 = uVar16 & uVar13;
          }
          else if (uVar7 <= uVar16) {
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = uVar16 / uVar7;
            }
            uVar16 = uVar16 - uVar3 * uVar7;
          }
          plVar15 = plVar14;
          if (uVar16 != uVar9) {
            lVar8 = *param_1;
            if (*(long *)(lVar8 + uVar16 * 8) == 0) {
              *(long **)(lVar8 + uVar16 * 8) = plVar10;
              uVar9 = uVar16;
            }
            else {
              *plVar10 = *plVar14;
              *plVar14 = **(undefined8 **)(lVar8 + uVar16 * 8);
              **(long **)(lVar8 + uVar16 * 8) = (long)plVar14;
              plVar15 = plVar10;
            }
          }
          plVar10 = plVar15;
          plVar14 = (long *)*plVar15;
        }
      }
    }
    else if (uVar7 < uVar11) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
      if (uVar7 < uVar11) {
        if (uVar7 != 0) goto LAB_10a5c47bc;
        lVar8 = *param_1;
        *param_1 = 0;
        if (lVar8 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar11 = 0;
      }
      else {
        uVar11 = param_1[1];
      }
    }
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x24 = uVar11 - 1 & uVar18;
    }
    else {
      unaff_x24 = uVar18;
      if (uVar11 <= uVar18) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar18 / uVar11;
        }
        unaff_x24 = uVar18 - uVar7 * uVar11;
      }
    }
  }
  lVar8 = *param_1;
  plVar10 = *(long **)(lVar8 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar17 = *plVar10;
    *plVar10 = (long)plVar17;
    *(long **)(lVar8 + unaff_x24 * 8) = plVar10;
    if (*plVar17 == 0) goto LAB_10a5c499c;
    uVar7 = *(ulong *)(*plVar17 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar7 = uVar7 & uVar11 - 1;
    }
    else if (uVar11 <= uVar7) {
      uVar18 = 0;
      if (uVar11 != 0) {
        uVar18 = uVar7 / uVar11;
      }
      uVar7 = uVar7 - uVar18 * uVar11;
    }
    plVar10 = (long *)(*param_1 + uVar7 * 8);
  }
  else {
    *plVar17 = *plVar10;
  }
  *plVar10 = (long)plVar17;
LAB_10a5c499c:
  param_1[3] = param_1[3] + 1;
  uVar6 = 1;
LAB_10a5c49ac:
  auVar19._8_8_ = uVar6;
  auVar19._0_8_ = plVar17;
  return auVar19;
}



/* Entry: 10a5c4a28; end: 10a5c4a6f;  */

void FUN_10a5c4a28(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a5c3ff4(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a5c4a70; end: 10a5c4b6b;  */

undefined1  [16] FUN_10a5c4a70(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf81c8;
  puVar1 = &UNK_10f66429f;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110bf81c8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a5c4b6c; end: 10a5c4bcf;  */

ulong FUN_10a5c4b6c(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5c4bd0);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a5c4bd0,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a5c4bd0; end: 10a5c558f;  */

/* WARNING: Possible PIC construction at 0x00010a5c5584: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a5c5588) */
/* WARNING: Removing unreachable block (ram,0x00010a5c559c) */
/* WARNING: Removing unreachable block (ram,0x00010a5c55e0) */
/* WARNING: Removing unreachable block (ram,0x00010a5c55cc) */
/* WARNING: Removing unreachable block (ram,0x00010a5c55ec) */
/* WARNING: Removing unreachable block (ram,0x00010a5c55fc) */
/* WARNING: Removing unreachable block (ram,0x00010a5c5620) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a5c5618) */
/* WARNING: Removing unreachable block (ram,0x00010a5c5598) */
/* WARNING: Removing unreachable block (ram,0x00010a5c5018) */
/* WARNING: Removing unreachable block (ram,0x00010a5c5030) */
/* WARNING: Removing unreachable block (ram,0x00010a5c5040) */

void FUN_10a5c4bd0(undefined4 *param_1,undefined ***param_2,undefined8 param_3,undefined ***param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined ****ppppuVar6;
  code *pcVar7;
  long lVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined ***pppuVar18;
  undefined **ppuVar19;
  long lVar20;
  undefined *puVar21;
  undefined ***unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  long *unaff_x22;
  undefined ***pppuVar22;
  undefined ***unaff_x23;
  undefined **ppuVar23;
  undefined ***unaff_x24;
  undefined ***pppuVar24;
  undefined **ppuVar25;
  undefined ***unaff_x25;
  ulong uVar26;
  undefined ****unaff_x26;
  undefined ****ppppuVar27;
  undefined ****unaff_x27;
  undefined *puVar28;
  undefined ****ppppuVar29;
  undefined *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined *puStack_230;
  ulong uStack_228;
  undefined ****ppppuStack_220;
  undefined8 uStack_210;
  undefined ***pppuStack_208;
  undefined ****ppppuStack_200;
  undefined ***pppuStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined ***pppuStack_1d0;
  long *plStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined4 uStack_1a8;
  undefined ***pppuStack_1a0;
  long *plStack_198;
  undefined ***apppuStack_190 [7];
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined8 *puStack_140;
  undefined ***pppuStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined ***pppuStack_d0;
  undefined ****ppppuStack_c8;
  undefined ***pppuStack_c0;
  undefined **ppuStack_b8;
  undefined ***pppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_88;
  long lStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppuVar9[0x59] < (undefined **)0x8) {
    pppuVar9[(long)pppuVar9[0x59] + 0x4e] = pppuVar9[0x5a];
    pppuVar9[0x59] = (undefined **)((long)pppuVar9[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppuVar9 + 0x4b);
  }
  pppuVar22 = param_2;
  func_0x000109898688(param_2,param_3);
  if (pppuVar22 == (undefined ***)0x0) {
    puVar28 = &UNK_10f68f52e;
  }
  else {
    pppuVar10 = param_2;
    FUN_10a053854(param_2,pppuVar22);
    if ((pppuVar10 == (undefined ***)0x0) || (___dynamic_cast(), pppuVar10 == (undefined ***)0x0)) {
      puVar28 = &UNK_10f685496;
    }
    else {
      FUN_10a5c5590(param_5);
      if (*(uint *)param_4 < 2) {
        pppuVar22 = (undefined ***)0x0;
      }
      else {
        pppuVar22 = param_2;
        FUN_10a5c55b4(param_2,param_4);
      }
      if (*(uint *)(param_4 + 2) == 7) {
        pppuVar12 = param_2;
        (*(code *)(*param_2)[0x13])(param_2,param_4[3]);
        pppuVar13 = param_2;
        pppuStack_110 = pppuVar12;
        (*(code *)(*param_2)[0x45])(param_2,&pppuStack_110);
        if ((int)pppuVar13 != 0) {
          pppuVar12 = param_2;
          (*(code *)(*param_2)[0xb])();
          ppuVar11 = pppuVar12[0x48];
          if ((ppuVar11 == (undefined **)0x0) ||
             (___dynamic_cast(ppuVar11,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0),
             pppuVar12 = pppuStack_110, ppuVar11 == (undefined **)0x0)) {
            func_0x00010988bd28(&UNK_10f685540);
            goto LAB_10a5c5408;
          }
          pppuStack_110 = (undefined ***)0x0;
          plStack_198 = (long *)CONCAT44(plStack_198._4_4_,7);
          apppuStack_190[0] = pppuVar12;
          pppuStack_1a0 = param_2;
          FUN_10a688ac0(&pppuStack_d0,&pppuStack_1a0,ppuVar11[1]);
          if ((3 < (int)plStack_198) && (apppuStack_190[0] != (undefined ***)0x0)) {
            (*(code *)**apppuStack_190[0])();
          }
        }
        if (pppuStack_110 != (undefined ***)0x0) {
          (*(code *)**pppuStack_110)();
        }
        if (((ulong)pppuVar13 & 1) != 0) {
          pppuVar12 = (undefined ***)0x60;
          __Znwm();
          ppppuVar27 = (undefined ****)(pppuVar12 + 1);
          *ppppuVar27 = (undefined ***)0x0;
          pppuVar12[2] = (undefined **)0x0;
          *pppuVar12 = &PTR_FUN_110bf7b70;
          ppppuVar29 = (undefined ****)(pppuVar12 + 3);
          pppuVar12[4] = (undefined **)ppppuStack_c8;
          *ppppuVar29 = pppuStack_d0;
          if (ppppuStack_c8 != (undefined ****)0x0) {
            ppuVar11 = (undefined **)(ppppuStack_c8 + 1);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar5) {
                *ppuVar11 = *ppuVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          pppuVar12[6] = ppuStack_b8;
          pppuVar12[5] = (undefined **)pppuStack_c0;
          if (ppuStack_b8 != (undefined **)0x0) {
            ppuVar11 = ppuStack_b8 + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
              if (bVar5) {
                *ppuVar11 = *ppuVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          *(undefined1 *)(pppuVar12 + 0xb) = 2;
          ppppuStack_200 = ppppuVar29;
          pppuStack_1f8 = pppuVar12;
          FUN_10a688c1c(&pppuStack_d0);
          pppuVar13 = param_2;
          FUN_10a059354(&uStack_210,param_2,param_4 + 4);
          if (pppuVar22 == (undefined ***)0x0) {
            plVar15 = (long *)0x0;
            puVar28 = unaff_x28;
            if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
              pppuVar13 = (undefined ***)0x1;
              func_0x00010ae06f08(1,4,&UNK_10f664795,&UNK_10f6647d3,0x1f,&UNK_10f664875);
            }
          }
          else {
            pppuVar13 = pppuVar10 + 7;
            pppuVar18 = (undefined ***)*pppuVar13;
            while (pppuVar24 = pppuVar13, pppuVar18 != (undefined ***)0x0) {
              while (pppuVar13 = pppuVar18, pppuVar13[5] <= pppuVar12) {
                if (pppuVar12 <= pppuVar13[5]) goto LAB_10a5c4ef4;
                pppuVar18 = (undefined ***)pppuVar13[1];
                if ((undefined ***)pppuVar13[1] == (undefined ***)0x0) {
                  pppuVar24 = pppuVar13 + 1;
                  goto LAB_10a5c4ea0;
                }
              }
              pppuVar18 = (undefined ***)*pppuVar13;
            }
LAB_10a5c4ea0:
            ppuVar11 = (undefined **)0x30;
            __Znwm();
            ppuVar11[4] = (undefined *)ppppuVar29;
            ppuVar11[5] = (undefined *)pppuVar12;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppuVar27,0x10);
              if (bVar5) {
                *ppppuVar27 = (undefined ***)((long)*ppppuVar27 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            *ppuVar11 = (undefined *)0x0;
            ppuVar11[1] = (undefined *)0x0;
            ppuVar11[2] = (undefined *)pppuVar13;
            *pppuVar24 = ppuVar11;
            if ((undefined **)*pppuVar10[6] != (undefined **)0x0) {
              pppuVar10[6] = (undefined **)*pppuVar10[6];
              ppuVar11 = *pppuVar24;
            }
            func_0x000107c2b058(pppuVar10[7],ppuVar11);
            pppuVar10[8] = (undefined **)((long)pppuVar10[8] + 1);
LAB_10a5c4ef4:
            FUN_10a2ab4f0(pppuVar10 + 9,&uStack_210,&uStack_210);
            pppuVar13 = pppuStack_1f8;
            pppuVar12 = pppuStack_208;
            if (pppuStack_1f8 != (undefined ***)0x0) {
              pppuVar18 = pppuStack_1f8 + 2;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppuVar18,0x10);
                if (bVar5) {
                  *pppuVar18 = (undefined **)((long)*pppuVar18 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            ppppuVar27 = &pppuStack_110;
            if (pppuStack_208 != (undefined ***)0x0) {
              pppuVar18 = pppuStack_208 + 2;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppuVar18,0x10);
                if (bVar5) {
                  *pppuVar18 = (undefined **)((long)*pppuVar18 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            pppuStack_c0 = pppuStack_1f8;
            ppppuStack_c8 = ppppuStack_200;
            if (pppuStack_1f8 != (undefined ***)0x0) {
              pppuVar18 = pppuStack_1f8 + 2;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppuVar18,0x10);
                if (bVar5) {
                  *pppuVar18 = (undefined **)((long)*pppuVar18 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            pppuStack_b0 = pppuStack_208;
            ppuStack_b8 = (undefined **)uStack_210;
            if (pppuStack_208 != (undefined ***)0x0) {
              pppuVar18 = pppuStack_208 + 2;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppuVar18,0x10);
                if (bVar5) {
                  *pppuVar18 = (undefined **)((long)*pppuVar18 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            pppuStack_d0 = pppuVar10;
            if (*(char *)((long)pppuVar22 + 0x2f) < '\0') {
              func_0x000107c3192c(&ppuStack_a8,pppuVar22[3],pppuVar22[4]);
            }
            else {
              ppuStack_a0 = pppuVar22[4];
              ppuStack_a8 = pppuVar22[3];
              ppuStack_98 = pppuVar22[5];
            }
            ppuStack_150 = (undefined **)FUN_10a5c57e0;
            ppuStack_148 = &PTR_FUN_110bf7bc8;
            puVar14 = (undefined8 *)0x40;
            __Znwm();
            puVar14[1] = ppppuStack_c8;
            *puVar14 = pppuStack_d0;
            puVar14[2] = pppuStack_c0;
            *(undefined8 *)((ulong)&pppuStack_d0 | 8) = 0;
            ((undefined8 *)((ulong)&pppuStack_d0 | 8))[1] = 0;
            puVar14[4] = pppuStack_b0;
            puVar14[3] = ppuStack_b8;
            puVar14[6] = ppuStack_a0;
            puVar14[5] = ppuStack_a8;
            puVar14[7] = ppuStack_98;
            pppuStack_b0 = (undefined ***)0x0;
            ppuStack_b8 = (undefined **)0x0;
            puStack_140 = puVar14;
            if (pppuStack_c0 != (undefined ***)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            if (pppuVar12 != (undefined ***)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar12);
            }
            if (pppuVar13 != (undefined ***)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar13);
            }
            param_2 = &ppuStack_150;
            ppuStack_1c0 = &PTR_DAT_110b1b890;
            uStack_1b8 = 0;
            puStack_1b0 = &DAT_11383d918;
            uStack_1a8 = 0;
            func_0x000107c30248(&puStack_1b0,pppuVar22 + 3,0);
            FUN_10a3bf4bc(&pppuStack_1a0,&ppuStack_1c0);
            puVar28 = pppuVar10[3][0x20];
            FUN_10a00ce20(&uStack_1e8,pppuVar10[4],&ppuStack_150);
            plVar15 = (long *)0x138;
            __Znwm();
            pppuStack_d0 = pppuStack_1a0;
            pppuVar12 = (undefined ***)(plVar15 + 1);
            *pppuVar12 = (undefined **)0x0;
            plVar15[2] = 0;
            *plVar15 = (long)&PTR_FUN_110b9f3b0;
            param_4 = (undefined ***)(plVar15 + 3);
            pppuStack_1a0 = (undefined ***)0x0;
            ppppuStack_c8 = (undefined ****)plStack_198;
            (*(code *)apppuStack_190[0][2])(&pppuStack_c0,apppuStack_190);
            uStack_88 = uStack_158;
            uStack_228 = *(ulong *)(puVar28 + 0x210);
            puStack_230 = *(undefined **)(puVar28 + 0x208);
            if (-1 < (char)puVar28[0x21f]) {
              uStack_228 = (ulong)(byte)puVar28[0x21f];
              puStack_230 = puVar28 + 0x208;
            }
            ppppuVar29 = &pppuStack_110;
            pppuStack_110 = (undefined ***)0x10a05c39c;
            ppuStack_108 = &PTR_FUN_110b9f370;
            uStack_100 = uStack_1e8;
            uStack_f0 = uStack_1d8;
            uStack_f8 = uStack_1e0;
            uStack_1e0 = 0;
            uStack_1d8 = 0;
            ppppuStack_220 = ppppuVar29;
            FUN_10a23708c(param_4,&UNK_10e4cd9c4,0x29,&UNK_10f647b45,3,&pppuStack_d0,0);
            (*(code *)*ppuStack_108)(&ppuStack_108);
            FUN_10a042634(&pppuStack_d0);
            pppuStack_1d0 = param_4;
            plStack_1c8 = plVar15;
            func_0x00010a05c07c(&uStack_1e8);
            FUN_10a042634(&pppuStack_1a0);
            plVar16 = *(long **)(pppuVar10[3][0x20] + 0x1c8);
            (**(code **)(*plVar16 + 0x60))();
            pppuStack_d0 = (undefined ***)0x0;
            ppppuStack_c8 = (undefined ****)0x0;
            ppuVar11 = (undefined **)plVar16[1];
            if (((ppuVar11 == (undefined **)0x0) ||
                (__ZNSt3__119__shared_weak_count4lockEv(), ppppuStack_c8 = (undefined ****)ppuVar11,
                ppuVar11 == (undefined **)0x0)) ||
               (pppuStack_d0 = (undefined ***)*plVar16, pppuStack_d0 == (undefined ***)0x0)) {
              if ((bRam000000011330a9e8 & 1) != 0) {
                func_0x00010ae06f08(0,1,&UNK_10f664795,&UNK_10f6647d3,0x2e,&UNK_10f66488a);
              }
            }
            else {
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
                if (bVar5) {
                  *pppuVar12 = (undefined **)((long)*pppuVar12 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              pppuStack_1a0 = param_4;
              plStack_198 = plVar15;
              (*(code *)**pppuStack_d0)(pppuStack_d0,&pppuStack_1a0);
              plVar16 = plStack_198;
              if (plStack_198 != (long *)0x0) {
                plVar2 = plStack_198 + 1;
                do {
                  lVar20 = *plVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *plVar2 = lVar20 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar20 == 0) {
                  (**(code **)(*plStack_198 + 0x10))(plStack_198);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
                }
              }
            }
            ppppuVar6 = ppppuStack_c8;
            if (ppppuStack_c8 != (undefined ****)0x0) {
              ppuVar11 = (undefined **)(ppppuStack_c8 + 1);
              do {
                puVar21 = *ppuVar11;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
                if (bVar5) {
                  *ppuVar11 = puVar21 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (puVar21 == (undefined *)0x0) {
                (**(code **)((long)*ppppuStack_c8 + 0x10))(ppppuStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar6);
              }
            }
            plVar16 = plStack_1c8;
            if (plStack_1c8 != (long *)0x0) {
              plVar2 = plStack_1c8 + 1;
              do {
                lVar20 = *plVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *plVar2 = lVar20 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar20 == 0) {
                (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
              }
            }
            func_0x0001098dd3d4(&ppuStack_1c0);
            pppuVar13 = &ppuStack_148;
            (*(code *)*ppuStack_148)();
            puVar28 = puVar28 + 0x208;
          }
          if (pppuStack_208 != (undefined ***)0x0) {
            pppuVar22 = pppuStack_208 + 1;
            do {
              ppuVar11 = *pppuVar22;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppuVar22,0x10);
              if (bVar5) {
                *pppuVar22 = (undefined **)((long)ppuVar11 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppuVar11 == (undefined **)0x0) {
              (*(code *)(*pppuStack_208)[2])(pppuStack_208);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppuVar13 = pppuStack_208;
            }
          }
          pppuVar22 = pppuStack_1f8;
          if (pppuStack_1f8 != (undefined ***)0x0) {
            pppuVar10 = pppuStack_1f8 + 1;
            do {
              ppuVar11 = *pppuVar10;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
              if (bVar5) {
                *pppuVar10 = (undefined **)((long)ppuVar11 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppuVar11 == (undefined **)0x0) {
              (*(code *)(*pppuStack_1f8)[2])(pppuStack_1f8);
              pppuVar13 = pppuVar22;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          *param_1 = 0;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
            ___stack_chk_fail();
            FUN_10a05bd88(&pppuStack_1a0);
            func_0x00010a05a8c4(&pppuStack_d0);
            FUN_10a05bd88(&pppuStack_1d0);
            func_0x0001098dd3d4(&ppuStack_1c0);
            (*(code *)*ppuStack_148)(param_2 + 1);
            func_0x00010a07a8a8(&uStack_210);
            FUN_10a5c5684(&ppppuStack_200);
            unaff_x30 = 0x10a5c5588;
            register0x00000008 = (BADSPACEBASE *)&puStack_230;
            unaff_x19 = pppuVar9;
            unaff_x20 = pppuVar13;
            unaff_x21 = pppuVar22;
            unaff_x22 = plVar15;
            unaff_x23 = param_4;
            unaff_x24 = param_2;
            unaff_x25 = pppuVar12;
            unaff_x26 = ppppuVar27;
            unaff_x27 = ppppuVar29;
            unaff_x28 = puVar28;
            unaff_x29 = puVar1;
          }
          pppuVar22 = pppuVar9 + 0x4b;
          ppuVar11 = pppuVar9[0x59];
          ppuVar17 = (undefined **)((long)ppuVar11 + -1);
          pppuVar9[0x59] = ppuVar17;
          if (ppuVar17 < (undefined **)0x8) {
            ppuVar11 = pppuVar22[(long)ppuVar11 + 2];
            if (pppuVar9[0x5a] == ppuVar11) {
              return;
            }
          }
          else {
            ppuVar11 = (undefined **)pppuVar9[0x57][-1];
            pppuVar9[0x57] = pppuVar9[0x57] + -1;
            if (pppuVar9[0x5a] == ppuVar11) {
              return;
            }
          }
          *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
          *(undefined *****)((long)register0x00000008 + -0x58) = unaff_x27;
          *(undefined *****)((long)register0x00000008 + -0x50) = unaff_x26;
          *(undefined ****)((long)register0x00000008 + -0x48) = unaff_x25;
          *(undefined ****)((long)register0x00000008 + -0x40) = unaff_x24;
          *(undefined ****)((long)register0x00000008 + -0x38) = unaff_x23;
          *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined ****)((long)register0x00000008 + -0x28) = unaff_x21;
          *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
          *(undefined ****)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          ppuVar17 = *pppuVar22;
          ppuVar19 = pppuVar9[0x4c];
          lVar20 = (long)ppuVar19 - (long)ppuVar17;
          ppuVar25 = (undefined **)(lVar20 >> 4);
          if (ppuVar25 < ppuVar11) {
            uVar26 = (long)ppuVar11 - (long)ppuVar25;
            ppuVar23 = pppuVar9[0x4d];
            if ((ulong)((long)ppuVar23 - (long)ppuVar19 >> 4) < uVar26) {
              if ((ulong)ppuVar11 >> 0x3c == 0) {
                ppuVar19 = (undefined **)((long)ppuVar23 - (long)ppuVar17 >> 3);
                if (ppuVar19 <= ppuVar11) {
                  ppuVar19 = ppuVar11;
                }
                if (0x7fffffffffffffef < (ulong)((long)ppuVar23 - (long)ppuVar17)) {
                  ppuVar19 = (undefined **)0xfffffffffffffff;
                }
                *(undefined ****)((long)register0x00000008 + -0x68) = pppuVar22;
                if ((ulong)ppuVar19 >> 0x3c == 0) {
                  lVar8 = (long)ppuVar19 << 4;
                  __Znwm();
                  lVar3 = lVar8 + lVar20;
                  _bzero(lVar3,uVar26 * 0x10);
                  ppuVar25 = (undefined **)(lVar3 + (long)ppuVar25 * -0x10);
                  _memcpy(ppuVar25,ppuVar17,lVar20);
                  *pppuVar22 = ppuVar25;
                  pppuVar9[0x4c] = (undefined **)(lVar3 + uVar26 * 0x10);
                  pppuVar9[0x4d] = (undefined **)(lVar8 + (long)ppuVar19 * 0x10);
                  *(undefined ***)((long)register0x00000008 + -0x78) = ppuVar17;
                  *(undefined ***)((long)register0x00000008 + -0x70) = ppuVar23;
                  *(undefined ***)((long)register0x00000008 + -0x88) = ppuVar17;
                  *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar17;
                  func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
                  goto code_r0x00010988c138;
                }
                func_0x000104c4f740();
              }
              else {
                func_0x00010988c1a4();
              }
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
              (*pcVar7)();
            }
            _bzero(ppuVar19,uVar26 * 0x10);
            pppuVar9[0x4c] = ppuVar19 + uVar26 * 2;
          }
          else if (ppuVar11 < ppuVar25) {
            while (ppuVar19 != ppuVar17 + (long)ppuVar11 * 2) {
              ppuVar19 = ppuVar19 + -2;
              func_0x00010988c204(ppuVar19);
            }
            pppuVar9[0x4c] = ppuVar17 + (long)ppuVar11 * 2;
          }
code_r0x00010988c138:
          pppuVar9[0x5a] = ppuVar11;
          return;
        }
      }
      puVar28 = &UNK_10f6347ad;
    }
  }
  func_0x00010988bd28(puVar28);
LAB_10a5c5408:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a5c540c);
  (*pcVar7)();
}



/* Entry: 10a5c5590; end: 10a5c55b3;  */

void FUN_10a5c5590(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 ***pppuVar5;
  code *pcVar6;
  undefined8 **ppuStack_20;
  code *pcStack_18;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar2 = (undefined *)0x3;
  FUN_10a052ee0(3,0,param_1);
  puVar1 = &stack0xffffffffffffffd0;
  pcStack_18 = FUN_10a5c55b4;
  pppuVar5 = &ppuStack_20;
  puVar3 = puVar2;
  ppuStack_20 = (undefined8 **)&stack0xfffffffffffffff0;
  func_0x000109898688();
  if (puVar3 == (undefined *)0x0) {
    puVar2 = &UNK_10f68f52e;
    pcVar6 = FUN_10a5c55ec;
    func_0x00010988bd28();
  }
  else {
    puVar1 = &stack0xfffffffffffffff0;
    pppuVar5 = (undefined8 ***)ppuStack_20;
    pcVar6 = pcStack_18;
  }
  *(undefined8 ****)(puVar1 + -0x10) = pppuVar5;
  *(code **)(puVar1 + -8) = pcVar6;
  FUN_10a053854();
  if ((puVar2 != (undefined *)0x0) && (___dynamic_cast(), puVar2 != (undefined *)0x0)) {
    return;
  }
  puVar4 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  *puVar4 = &PTR_FUN_110bf7b70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a5c55b4; end: 10a5c55eb;  */

void FUN_10a5c55b4(undefined *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = param_1;
  func_0x000109898688();
  if (puVar2 == (undefined *)0x0) {
    param_1 = &UNK_10f68f52e;
    unaff_x30 = FUN_10a5c55ec;
    func_0x00010988bd28();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10a053854();
  if ((param_1 != (undefined *)0x0) && (___dynamic_cast(), param_1 != (undefined *)0x0)) {
    return;
  }
  puVar3 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  *puVar3 = &PTR_FUN_110bf7b70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a5c55ec; end: 10a5c562b;  */

void FUN_10a5c55ec(long param_1)

{
  undefined8 *puVar1;
  
  FUN_10a053854();
  if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
    return;
  }
  puVar1 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  *puVar1 = &PTR_FUN_110bf7b70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a5c562c; end: 10a5c563b;  */

void FUN_10a5c562c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf7b70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a5c563c; end: 10a5c565b;  */

void FUN_10a5c563c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf7b70;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5c565c; end: 10a5c5683;  */

undefined1  [16] FUN_10a5c565c(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a5c5680);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a5c5684; end: 10a5c57df;  */

long FUN_10a5c5684(long param_1)

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



/* Entry: 10a5c57e0; end: 10a5c6097;  */

void FUN_10a5c57e0(long *param_1,long param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  code *pcVar6;
  code *pcVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  code ***pppcVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  code **ppcVar14;
  code **ppcVar15;
  code **ppcVar16;
  code **ppcVar17;
  code **unaff_x21;
  code **ppcVar18;
  code *pcVar19;
  code **ppcVar20;
  ulong uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  char cStack_318;
  code *pcStack_310;
  code *pcStack_308;
  code *pcStack_300;
  code *pcStack_2f0;
  code *pcStack_2e8;
  code *pcStack_2e0;
  code *pcStack_2d0;
  code *pcStack_2c8;
  code *pcStack_2c0;
  code *pcStack_2b8;
  code *pcStack_2b0;
  code *pcStack_2a8;
  code *pcStack_2a0;
  code *pcStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  code *pcStack_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  char cStack_251;
  char cStack_250;
  undefined **ppuStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  code **ppcStack_210;
  code *pcStack_208;
  code **ppcStack_200;
  code *pcStack_1f8;
  code *pcStack_1f0;
  code *pcStack_1e8;
  code *pcStack_1e0;
  code *pcStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  code *pcStack_1c0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  undefined1 auStack_1a0 [32];
  code *pcStack_180;
  code **ppcStack_170;
  long lStack_168;
  long lStack_160;
  code **ppcStack_158;
  long lStack_150;
  long lStack_148;
  int iStack_140;
  code *pcStack_138;
  long lStack_130;
  undefined1 auStack_128 [56];
  long lStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [40];
  code *pcStack_b8;
  undefined **ppuStack_b0;
  code **ppcStack_a8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar20 = *(code ***)(param_2 + 0x10);
  ppcVar17 = &pcStack_1f0;
  lStack_168 = param_1[1];
  ppcStack_170 = (code **)*param_1;
  lStack_160 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_150 = param_1[4];
  ppcStack_158 = (code **)param_1[3];
  lStack_148 = param_1[5];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iStack_140 = (int)param_1[6];
  pcStack_138 = (code *)param_1[7];
  lStack_130 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_128,param_1 + 9);
  lStack_f0 = param_1[0x10];
  uStack_e8 = (undefined4)param_1[0x11];
  pppcVar10 = (code ***)(param_1 + 0x12);
  FUN_10a0424c4(auStack_e0);
  pcVar19 = *ppcVar20;
  ppcStack_200 = (code **)0x0;
  pcStack_1f8 = (code *)0x0;
  pcVar6 = ppcVar20[2];
  if ((pcVar6 == (code *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), pcStack_1f8 = pcVar6, pcVar6 == (code *)0x0)) {
    ppcVar16 = (code **)0x0;
    bVar5 = true;
  }
  else {
    ppcVar16 = (code **)ppcVar20[1];
    bVar5 = ppcVar16 == (code **)0x0;
    ppcStack_200 = ppcVar16;
  }
  pcVar6 = pcStack_1f8;
  ppcStack_210 = (code **)0x0;
  pcStack_208 = (code *)0x0;
  pcVar7 = ppcVar20[4];
  if ((pcVar7 != (code *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), pcStack_208 = pcVar7, pcVar7 != (code *)0x0)) {
    ppcVar18 = (code **)ppcVar20[3];
    if (ppcVar18 == (code **)0x0) {
      bVar5 = true;
    }
    unaff_x21 = ppcVar18;
    ppcStack_210 = ppcVar18;
    if (!bVar5) {
      if (iStack_140 - 200U < 100) {
        unaff_x21 = &pcStack_2d0;
        uStack_238 = 0;
        uStack_240 = 0;
        ppuStack_248 = &PTR_DAT_110b1b8e0;
        puStack_230 = &DAT_11383d918;
        puStack_228 = &DAT_11383d918;
        ppuStack_220 = (undefined **)0x0;
        ppuStack_218 = (undefined **)0x0;
        pcStack_1e8 = (code *)(long)(int)lStack_f0;
        pcStack_1f0 = pcStack_138;
        pppuVar8 = &ppuStack_248;
        func_0x000107c30348(pppuVar8,&pcStack_1f0);
        if (((ulong)pppuVar8 & 1) == 0) {
          if ((bRam000000011330a9e8 & 1) != 0) {
            func_0x00010ae06f08(0,1,&UNK_10f664795,&UNK_10f666f82,0x45,&UNK_10f667057);
          }
          ppcVar16 = ppcStack_210;
          func_0x000107c2b054(&pcStack_1f0,&UNK_10f649b8e);
          if ((ppcVar16 == (code **)0x0) || (*(char *)(ppcVar16 + 8) != '\x02')) {
            if ((ppcVar16 != (code **)0x0) && (*(char *)(ppcVar16 + 8) == '\x01')) {
              (**ppcVar16)(&pcStack_1f0,ppcVar16);
            }
          }
          else {
            FUN_10a05aad0(ppcVar16,&pcStack_1f0);
          }
          if ((long)pcStack_1e0 < 0) {
            __ZdlPv(pcStack_1f0);
          }
          FUN_10a5c6098(pcVar19 + 0x30,pcVar6);
          pppcVar10 = &ppcStack_210;
          func_0x00010a2abcd8(pcVar19 + 0x48);
          func_0x0001098dcf78(&ppuStack_248);
          goto LAB_10a5c5e20;
        }
        uStack_268 = 0;
        cStack_250 = '\0';
        lVar12 = (long)*(char *)(((ulong)puStack_228 & 0xfffffffffffffffc) + 0x17);
        if (lVar12 < 0) {
          lVar12 = *(long *)(((ulong)puStack_228 & 0xfffffffffffffffc) + 8);
        }
        if (lVar12 != 0) {
          FUN_10a5404ec(&uStack_268);
        }
        if (*(char *)((long)ppcVar20 + 0x3f) < '\0') {
          func_0x000107c3192c(&pcStack_2f0,ppcVar20[5],ppcVar20[6]);
        }
        else {
          pcStack_2e8 = ppcVar20[6];
          pcStack_2f0 = ppcVar20[5];
          pcStack_2e0 = ppcVar20[7];
        }
        ppuVar2 = &PTR_PTR_1132e31c8;
        if (ppuStack_220 != (undefined **)0x0) {
          ppuVar2 = ppuStack_220;
        }
        pcVar6 = (code *)ppuVar2[2];
        pcVar7 = (code *)ppuVar2[3];
        puVar13 = (undefined8 *)((ulong)puStack_230 & 0xfffffffffffffffc);
        if (*(char *)((long)puVar13 + 0x17) < '\0') {
          func_0x000107c3192c(&pcStack_310,*puVar13,puVar13[1]);
        }
        else {
          pcStack_308 = (code *)puVar13[1];
          pcStack_310 = (code *)*puVar13;
          pcStack_300 = (code *)puVar13[2];
        }
        puVar11 = &uStack_268;
        FUN_10a1ccb30(&uStack_330);
        ppuVar2 = &PTR_PTR_1134046c0;
        if (ppuStack_218 != (undefined **)0x0) {
          ppuVar2 = ppuStack_218;
        }
        puVar9 = ppuVar2[2];
        __ZNSt3__16chrono12system_clock11from_time_tEl();
        pcStack_2c8 = pcStack_2e8;
        pcStack_2d0 = pcStack_2f0;
        pcStack_270 = (code *)((long)puVar9 / 1000);
        pcStack_2c0 = pcStack_2e0;
        pcStack_2f0 = (code *)0x0;
        pcStack_2e8 = (code *)0x0;
        pcStack_2e0 = (code *)0x0;
        pcStack_2a0 = pcStack_308;
        pcStack_2a8 = pcStack_310;
        pcStack_298 = pcStack_300;
        pcStack_310 = (code *)0x0;
        pcStack_308 = (code *)0x0;
        pcStack_300 = (code *)0x0;
        uStack_290 = uStack_290 & 0xffffffffffffff00;
        uStack_278 = cStack_318 == '\x01';
        if ((bool)uStack_278) {
          uStack_288 = uStack_328;
          uStack_290 = uStack_330;
          uStack_280 = uStack_320;
          uStack_328 = 0;
          uStack_320 = 0;
          uStack_330 = 0;
        }
        pcStack_2b8 = pcVar6;
        pcStack_2b0 = pcVar7;
        if ((ppcVar16 == (code **)0x0) || (*(char *)(ppcVar16 + 8) != '\x02')) {
          if ((ppcVar16 != (code **)0x0) && (*(char *)(ppcVar16 + 8) == '\x01')) {
            (**ppcVar16)(&pcStack_2d0,ppcVar16);
          }
        }
        else {
          ppcVar18 = ppcVar16;
          FUN_10a688b40();
          if (ppcVar18 == (code **)0x0) {
            if (puVar11 != (undefined1 *)0x0) {
              pcStack_1e8 = ppcVar16[1];
              pcStack_1f0 = *ppcVar16;
              if (ppcVar16[1] != (code *)0x0) {
                pcVar6 = ppcVar16[1] + 8;
                do {
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
                  if (bVar5) {
                    *(long *)pcVar6 = *(long *)pcVar6 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              ppcVar20 = &pcStack_1f0;
              if ((long)pcStack_2c0 < 0) {
                func_0x000107c3192c(&pcStack_1e0,pcStack_2d0,pcStack_2c8);
              }
              else {
                pcStack_1d8 = pcStack_2c8;
                pcStack_1e0 = pcStack_2d0;
                pcStack_1d0 = pcStack_2c0;
              }
              pcStack_1c0 = pcStack_2b0;
              pcStack_1c8 = pcStack_2b8;
              if ((long)pcStack_298 < 0) {
                func_0x000107c3192c(&pcStack_1b8,pcStack_2a8,pcStack_2a0);
              }
              else {
                pcStack_1b0 = pcStack_2a0;
                pcStack_1b8 = pcStack_2a8;
                pcStack_1a8 = pcStack_298;
              }
              FUN_10a1ccb30(auStack_1a0,&uStack_290);
              pcStack_180 = pcStack_270;
              pcStack_b8 = FUN_10a5c6490;
              ppuStack_b0 = &PTR_FUN_110bf7bb0;
              unaff_x21 = (code **)0x78;
              __Znwm();
              unaff_x21[1] = pcStack_1e8;
              *unaff_x21 = pcStack_1f0;
              pcStack_1f0 = (code *)0x0;
              pcStack_1e8 = (code *)0x0;
              if ((long)pcStack_1d0 < 0) {
                func_0x000107c3192c(unaff_x21 + 2,pcStack_1e0,pcStack_1d8);
              }
              else {
                unaff_x21[3] = pcStack_1d8;
                unaff_x21[2] = pcStack_1e0;
                unaff_x21[4] = pcStack_1d0;
              }
              unaff_x21[6] = pcStack_1c0;
              unaff_x21[5] = pcStack_1c8;
              if ((long)pcStack_1a8 < 0) {
                func_0x000107c3192c(unaff_x21 + 7,pcStack_1b8,pcStack_1b0);
              }
              else {
                unaff_x21[8] = pcStack_1b0;
                unaff_x21[7] = pcStack_1b8;
                unaff_x21[9] = pcStack_1a8;
              }
              FUN_10a1ccb30(unaff_x21 + 10,auStack_1a0);
              ppcVar17 = &pcStack_b8;
              unaff_x21[0xe] = pcStack_180;
              ppcStack_a8 = unaff_x21;
              FUN_10a4634ec(puVar11,&pcStack_b8);
              (*(code *)*ppuStack_b0)(&ppuStack_b0);
              FUN_10a267e58(&pcStack_1e0);
              pcVar6 = pcStack_1e8;
              if (pcStack_1e8 != (code *)0x0) {
                plVar1 = (long *)((long)pcStack_1e8 + 8);
                do {
                  lVar12 = *plVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = lVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar12 == 0) {
                  (**(code **)(*(long *)pcStack_1e8 + 0x10))(pcStack_1e8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar6);
                }
              }
            }
          }
          else {
            *ppcVar18 = (code *)CONCAT44((int)((ulong)*ppcVar18 >> 0x20) + 1,(int)*ppcVar18 + 1);
            FUN_10a5c6164(*ppcVar16,&pcStack_2d0);
            iVar4 = *(int *)((long)ppcVar18 + 4) + -1;
            *(int *)((long)ppcVar18 + 4) = iVar4;
            unaff_x21 = ppcVar18;
            if (iVar4 == 0) {
              *(undefined4 *)ppcVar18 = 0;
            }
          }
        }
        FUN_10a267e58(&pcStack_2d0);
        if ((cStack_250 == '\x01') && (cStack_251 < '\0')) {
          __ZdlPv(CONCAT71(uStack_267,uStack_268));
        }
        func_0x0001098dcf78(&ppuStack_248);
        pcVar6 = pcStack_1f8;
        ppcVar18 = unaff_x21;
      }
      else {
        func_0x000107c2b054(&pcStack_1f0,&UNK_10f6670a1);
        if (*(char *)(ppcVar18 + 8) == '\x01') {
          (**ppcVar18)(&pcStack_1f0,ppcVar18);
        }
        else if (*(char *)(ppcVar18 + 8) == '\x02') {
          FUN_10a05aad0(ppcVar18,&pcStack_1f0);
        }
        if ((long)pcStack_1e0 < 0) {
          __ZdlPv(pcStack_1f0);
        }
      }
      FUN_10a5c6098(pcVar19 + 0x30,pcVar6);
      pppcVar10 = &ppcStack_210;
      func_0x00010a2abcd8(pcVar19 + 0x48);
      unaff_x21 = ppcVar18;
    }
  }
LAB_10a5c5e20:
  pcVar6 = pcStack_208;
  if (pcStack_208 != (code *)0x0) {
    pcVar19 = pcStack_208 + 8;
    do {
      lVar12 = *(long *)pcVar19;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar19,0x10);
      if (bVar5) {
        *(long *)pcVar19 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*(long *)pcStack_208 + 0x10))(pcStack_208);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar6);
    }
  }
  pcVar6 = pcStack_1f8;
  if (pcStack_1f8 != (code *)0x0) {
    pcVar19 = pcStack_1f8 + 8;
    do {
      lVar12 = *(long *)pcVar19;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar19,0x10);
      if (bVar5) {
        *(long *)pcVar19 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*(long *)pcStack_1f8 + 0x10))(pcStack_1f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar6);
    }
  }
  func_0x000104c4f944(auStack_e0);
  ppcVar16 = &pcStack_138;
  FUN_10a042634();
  if (lStack_148 < 0) {
    ppcVar16 = ppcStack_158;
    __ZdlPv();
  }
  if (lStack_160 < 0) {
    ppcVar16 = ppcStack_170;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)((long)unaff_x21 + 0x27) < '\0') {
    __ZdlPv(*ppcVar17);
  }
  func_0x00010a004dac(unaff_x21);
  __ZdlPv();
  FUN_10a267e58(ppcVar20 + 2);
  func_0x00010a004dac(&pcStack_1f0);
  FUN_10a267e58(&pcStack_2d0);
  if ((cStack_250 == '\x01') && (cStack_251 < '\0')) {
    __ZdlPv(CONCAT71(uStack_267,uStack_268));
  }
  func_0x0001098dcf78(&ppuStack_248);
  func_0x00010a07a8a8(&ppcStack_210);
  FUN_10a5c5684(&ppcStack_200);
  FUN_10a05bd10(&ppcStack_170);
  __Unwind_Resume();
  ppcVar14 = ppcVar16 + 1;
  ppcVar18 = (code **)*ppcVar14;
  ppcVar20 = ppcVar18;
  ppcVar17 = ppcVar14;
  if (ppcVar18 != (code **)0x0) {
    do {
      lVar12 = 8;
      if (pppcVar10 <= ppcVar20[5]) {
        lVar12 = 0;
        ppcVar17 = ppcVar20;
      }
      pcVar6 = (code *)((long)ppcVar20 + lVar12);
      ppcVar20 = *(code ***)pcVar6;
    } while (*(code ***)pcVar6 != (code **)0x0);
    if ((ppcVar17 != ppcVar14) && (ppcVar17[5] <= pppcVar10)) {
      ppcVar20 = ppcVar17;
      ppcVar14 = (code **)ppcVar17[1];
      if ((code **)ppcVar17[1] == (code **)0x0) {
        do {
          ppcVar15 = (code **)ppcVar20[2];
          bVar5 = (code **)*ppcVar15 != ppcVar20;
          ppcVar20 = ppcVar15;
        } while (bVar5);
      }
      else {
        do {
          ppcVar15 = ppcVar14;
          ppcVar14 = (code **)*ppcVar15;
        } while ((code **)*ppcVar15 != (code **)0x0);
      }
      if ((code **)*ppcVar16 == ppcVar17) {
        *ppcVar16 = (code *)ppcVar15;
      }
      ppcVar16[2] = ppcVar16[2] + -1;
      FUN_10a04815c(ppcVar18,ppcVar17);
      FUN_10a5c5684(ppcVar17 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(ppcVar17);
      return;
    }
  }
  return;
}



/* Entry: 10a5c6098; end: 10a5c6163;  */

void FUN_10a5c6098(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = param_1 + 1;
  plVar4 = (long *)*plVar5;
  plVar7 = plVar4;
  plVar8 = plVar5;
  if (plVar4 != (long *)0x0) {
    do {
      lVar2 = 8;
      if (param_2 <= (ulong)plVar7[5]) {
        lVar2 = 0;
        plVar8 = plVar7;
      }
      puVar1 = (undefined8 *)((long)plVar7 + lVar2);
      plVar7 = (long *)*puVar1;
    } while ((long *)*puVar1 != (long *)0x0);
    if ((plVar8 != plVar5) && ((ulong)plVar8[5] <= param_2)) {
      plVar7 = plVar8;
      plVar5 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar3 = (long *)*plVar6 != plVar7;
          plVar7 = plVar6;
        } while (bVar3);
      }
      else {
        do {
          plVar6 = plVar5;
          plVar5 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar8) {
        *param_1 = plVar6;
      }
      param_1[2] = param_1[2] + -1;
      FUN_10a04815c(plVar4,plVar8);
      FUN_10a5c5684(plVar8 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar8);
      return;
    }
  }
  return;
}



/* Entry: 10a5c6164; end: 10a5c648f;  */

void FUN_10a5c6164(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined4 **ppuStack_58;
  int *piStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(&ppuStack_70,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_98,&ppuStack_70,*param_1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_a0);
  param_1 = (long *)*param_1;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    puVar3 = (undefined8 *)0x70;
    __ZnwmRKSt9nothrow_t(0x70,PTR___ZSt7nothrow_1103469d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_110bbab10;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(puVar3 + 1,*param_2,param_2[1]);
      }
      else {
        uVar6 = *param_2;
        puVar3[2] = param_2[1];
        puVar3[1] = uVar6;
        puVar3[3] = param_2[2];
      }
      uVar6 = param_2[3];
      puVar3[5] = param_2[4];
      puVar3[4] = uVar6;
      if (*(char *)((long)param_2 + 0x3f) < '\0') {
        func_0x000107c3192c(puVar3 + 6,param_2[5],param_2[6]);
      }
      else {
        uVar6 = param_2[5];
        puVar3[7] = param_2[6];
        puVar3[6] = uVar6;
        puVar3[8] = param_2[7];
      }
      FUN_10a1ccb30(puVar3 + 9,param_2 + 8);
      puVar3[0xd] = param_2[0xc];
    }
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x58))();
    plVar2 = plVar4;
    FUN_10a065534();
    if (plVar2 == (long *)0x0) {
      if ((*(byte *)(plVar4 + 0x3c) & 1) == 0) goto LAB_10a5c63d4;
      plVar2 = plVar4 + 0x1b;
    }
    ppuStack_70 = (undefined8 **)CONCAT44(ppuStack_70._4_4_,7);
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x98))(param_1,*plVar2);
    plStack_68 = plVar5;
    (**(code **)(*param_1 + 0x2f8))(&puStack_78,param_1,puVar3,plVar4,&UNK_10989ba24,&ppuStack_70);
    aiStack_80[0] = 7;
    if ((3 < (int)ppuStack_70) && (plStack_68 != (long *)0x0)) {
      (**(code **)*plStack_68)();
    }
    uStack_48 = 1;
    piStack_50 = aiStack_80;
    (**(code **)(*param_1 + 0x58))(param_1);
    ppuStack_70 = &puStack_98;
    ppuStack_58 = &piStack_50;
    plStack_68 = param_1;
    puStack_60 = (undefined1 *)&puStack_a0;
    func_0x0001098960c0(aiStack_90);
    if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
      (**(code **)*puStack_88)();
    }
    if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
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
LAB_10a5c63d4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5c63d8);
  (*pcVar1)();
}



/* Entry: 10a5c6490; end: 10a5c649b;  */

void FUN_10a5c6490(long param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined4 **ppuStack_58;
  int *piStack_50;
  undefined8 uStack_48;
  
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  plVar6 = (long *)*puVar7;
  func_0x000109884c0c(&ppuStack_70,plVar6 + 1,*plVar6);
  func_0x000109884820(&puStack_98,&ppuStack_70,*plVar6);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*plVar6 + 0x30))(&puStack_a0);
  plVar6 = (long *)*plVar6;
  plVar2 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    puVar3 = (undefined8 *)0x70;
    __ZnwmRKSt9nothrow_t(0x70,PTR___ZSt7nothrow_1103469d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_110bbab10;
      if (*(char *)((long)puVar7 + 0x27) < '\0') {
        func_0x000107c3192c(puVar3 + 1,puVar7[2],puVar7[3]);
      }
      else {
        uVar8 = puVar7[2];
        puVar3[2] = puVar7[3];
        puVar3[1] = uVar8;
        puVar3[3] = puVar7[4];
      }
      uVar8 = puVar7[5];
      puVar3[5] = puVar7[6];
      puVar3[4] = uVar8;
      if (*(char *)((long)puVar7 + 0x4f) < '\0') {
        func_0x000107c3192c(puVar3 + 6,puVar7[7],puVar7[8]);
      }
      else {
        uVar8 = puVar7[7];
        puVar3[7] = puVar7[8];
        puVar3[6] = uVar8;
        puVar3[8] = puVar7[9];
      }
      FUN_10a1ccb30(puVar3 + 9,puVar7 + 10);
      puVar3[0xd] = puVar7[0xe];
    }
    plVar4 = plVar6;
    (**(code **)(*plVar6 + 0x58))();
    plVar2 = plVar4;
    FUN_10a065534();
    if (plVar2 == (long *)0x0) {
      if ((*(byte *)(plVar4 + 0x3c) & 1) == 0) goto LAB_10a5c63d4;
      plVar2 = plVar4 + 0x1b;
    }
    ppuStack_70 = (undefined8 **)CONCAT44(ppuStack_70._4_4_,7);
    plVar5 = plVar6;
    (**(code **)(*plVar6 + 0x98))(plVar6,*plVar2);
    plStack_68 = plVar5;
    (**(code **)(*plVar6 + 0x2f8))(&puStack_78,plVar6,puVar3,plVar4,&UNK_10989ba24,&ppuStack_70);
    aiStack_80[0] = 7;
    if ((3 < (int)ppuStack_70) && (plStack_68 != (long *)0x0)) {
      (**(code **)*plStack_68)();
    }
    uStack_48 = 1;
    piStack_50 = aiStack_80;
    (**(code **)(*plVar6 + 0x58))(plVar6);
    ppuStack_70 = &puStack_98;
    ppuStack_58 = &piStack_50;
    plStack_68 = plVar6;
    puStack_60 = (undefined1 *)&puStack_a0;
    func_0x0001098960c0(aiStack_90);
    if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
      (**(code **)*puStack_88)();
    }
    if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
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
LAB_10a5c63d4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5c63d8);
  (*pcVar1)();
}



/* Entry: 10a5c649c; end: 10a5c64d7;  */

void FUN_10a5c649c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_10a267e58(lVar1 + 0x10);
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a5c64d8; end: 10a5c64ef;  */

void FUN_10a5c64d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a5c64f0; end: 10a5c6547;  */

void FUN_10a5c64f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x28));
    }
    if (*(long *)(lVar1 + 0x20) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)(lVar1 + 0x10) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a5c6548; end: 10a5c662b;  */

void FUN_10a5c6548(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a5c662c; end: 10a5c6853;  */

undefined8 FUN_10a5c662c(long *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (param_2 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  uVar8 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar2 = uVar4 - 1;
    if ((uVar4 & uVar2) == 0) {
      unaff_x24 = uVar2 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar4 <= uVar8) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar8 / uVar4;
        }
        unaff_x24 = uVar8 - uVar7 * uVar4;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_10a5c670c;
          uVar7 = plVar5[1];
          if (uVar7 != uVar8) break;
          if (plVar5[2] == param_2) {
            return 0;
          }
        }
        if ((uVar4 & uVar2) == 0) {
          uVar7 = uVar7 & uVar2;
        }
        else if (uVar4 <= uVar7) {
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = uVar7 / uVar4;
          }
          uVar7 = uVar7 - uVar1 * uVar4;
        }
      } while (uVar7 == unaff_x24);
    }
  }
LAB_10a5c670c:
  plVar5 = (long *)0x18;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = uVar8;
  plVar5[2] = param_3;
  if ((uVar4 == 0) || (*(float *)(param_1 + 4) * (float)uVar4 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar4) {
      uVar2 = (ulong)((uVar4 & uVar4 - 1) != 0);
    }
    uVar2 = uVar2 | uVar4 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    FUN_10a5c6854(param_1,uVar2);
    uVar4 = param_1[1];
    if ((uVar4 & uVar4 - 1) == 0) {
      unaff_x24 = uVar4 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar4 <= uVar8) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar8 / uVar4;
        }
        unaff_x24 = uVar8 - uVar2 * uVar4;
      }
    }
  }
  lVar6 = *param_1;
  plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar5 = *plVar3;
    *plVar3 = (long)plVar5;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar3;
    if (*plVar5 == 0) goto LAB_10a5c6814;
    uVar8 = *(ulong *)(*plVar5 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar2 * uVar4;
    }
    plVar3 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar5 = *plVar3;
  }
  *plVar3 = (long)plVar5;
LAB_10a5c6814:
  param_1[3] = param_1[3] + 1;
  return 1;
}



/* Entry: 10a5c6854; end: 10a5c6a23;  */

long * FUN_10a5c6854(long *param_1,long *param_2)

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
  plVar9 = (long *)plVar3[2];
  while (plVar9 != (long *)0x0) {
    plVar9 = (long *)*plVar9;
    __ZdlPv();
  }
  lVar2 = *plVar3;
  *plVar3 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 10a5c6a24; end: 10a5c6a6b;  */

long * FUN_10a5c6a24(long *param_1)

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



/* Entry: 10a5c6a6c; end: 10a5c6c9b;  */

long * FUN_10a5c6a6c(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (param_2 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  uVar8 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar2 = uVar4 - 1;
    if ((uVar4 & uVar2) == 0) {
      unaff_x24 = uVar2 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar4 <= uVar8) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar8 / uVar4;
        }
        unaff_x24 = uVar8 - uVar6 * uVar4;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar8) {
          if (plVar5[2] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar4 & uVar2) == 0) {
            uVar6 = uVar6 & uVar2;
          }
          else if (uVar4 <= uVar6) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar6 / uVar4;
            }
            uVar6 = uVar6 - uVar1 * uVar4;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = (long *)0x20;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = uVar8;
  plVar5[2] = *param_3;
  *(undefined2 *)(plVar5 + 3) = 0;
  if ((uVar4 == 0) || (*(float *)(param_1 + 4) * (float)uVar4 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar4) {
      uVar2 = (ulong)((uVar4 & uVar4 - 1) != 0);
    }
    uVar2 = uVar2 | uVar4 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    FUN_10a5b95b4(param_1,uVar2);
    uVar4 = param_1[1];
    if ((uVar4 & uVar4 - 1) == 0) {
      unaff_x24 = uVar4 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar4 <= uVar8) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar8 / uVar4;
        }
        unaff_x24 = uVar8 - uVar2 * uVar4;
      }
    }
  }
  lVar7 = *param_1;
  plVar3 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar5 = *plVar3;
    *plVar3 = (long)plVar5;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar3;
    if (*plVar5 == 0) goto LAB_10a5c6c64;
    uVar8 = *(ulong *)(*plVar5 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar2 * uVar4;
    }
    plVar3 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar5 = *plVar3;
  }
  *plVar3 = (long)plVar5;
LAB_10a5c6c64:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 10a5c6c9c; end: 10a5c703b;  */

long * FUN_10a5c6c9c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  ulong unaff_x24;
  
  uVar7 = (uint)((ulong)param_2 >> 0x20);
  iVar6 = (int)param_2;
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar19 = (long *)param_1[1];
  if (plVar19 > param_2 || param_2 == plVar19) {
    if (plVar19 <= param_2) {
      return plVar4;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar19 < (long *)0x3) || (((ulong)plVar19 & (long)plVar19 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar19 <= param_2) {
      return plVar4;
    }
    if (param_2 == (long *)0x0) {
      plVar4 = (long *)*param_1;
      *param_1 = 0;
      if (plVar4 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar4;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    plVar4 = (long *)*param_1;
    *param_1 = lVar3;
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
    plVar19 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar19 * 8) = 0;
      plVar19 = (long *)((long)plVar19 + 1);
    } while (param_2 != plVar19);
    plVar19 = (long *)param_1[2];
    if (plVar19 != (long *)0x0) {
      plVar12 = (long *)plVar19[1];
      uVar8 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar8) == 0) {
        plVar12 = (long *)((ulong)plVar12 & uVar8);
      }
      else if (param_2 <= plVar12) {
        uVar20 = 0;
        if (param_2 != (long *)0x0) {
          uVar20 = (ulong)plVar12 / (ulong)param_2;
        }
        plVar12 = (long *)((long)plVar12 - uVar20 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar12 * 8) = param_1 + 2;
      plVar13 = (long *)*plVar19;
      while (plVar13 != (long *)0x0) {
        plVar16 = (long *)plVar13[1];
        if (((ulong)param_2 & uVar8) == 0) {
          plVar16 = (long *)((ulong)plVar16 & uVar8);
        }
        else if (param_2 <= plVar16) {
          uVar20 = 0;
          if (param_2 != (long *)0x0) {
            uVar20 = (ulong)plVar16 / (ulong)param_2;
          }
          plVar16 = (long *)((long)plVar16 - uVar20 * (long)param_2);
        }
        plVar14 = plVar13;
        if (plVar16 != plVar12) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar16 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar16 * 8) = plVar19;
            plVar12 = plVar16;
          }
          else {
            *plVar19 = *plVar13;
            *plVar13 = **(undefined8 **)(lVar3 + (long)plVar16 * 8);
            **(long **)(lVar3 + (long)plVar16 * 8) = (long)plVar13;
            plVar14 = plVar19;
          }
        }
        plVar19 = plVar14;
        plVar13 = (long *)*plVar14;
      }
    }
    return plVar4;
  }
  func_0x000109ffded8();
  uVar8 = CONCAT44(uVar7,iVar6) - 1;
  plVar19 = plVar4;
  if (uVar8 == 0) {
    plVar12 = (long *)0x2;
  }
  else {
    plVar12 = (long *)CONCAT44(uVar7,iVar6);
    if ((CONCAT44(uVar7,iVar6) & uVar8) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar19 = plVar12;
    }
  }
  plVar13 = (long *)plVar4[1];
  if (plVar13 > plVar12 || plVar12 == plVar13) {
    if (plVar13 <= plVar12) {
      return plVar19;
    }
    plVar19 = (long *)(long)((float)(ulong)plVar4[3] / *(float *)(plVar4 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar19) {
      plVar19 = (long *)(1L << (-LZCOUNT((long)plVar19 + -1) & 0x3fU));
    }
    if (plVar12 <= plVar19) {
      plVar12 = plVar19;
    }
    if (plVar13 <= plVar12) {
      return plVar19;
    }
    if (plVar12 == (long *)0x0) {
      plVar19 = (long *)*plVar4;
      *plVar4 = 0;
      if (plVar19 != (long *)0x0) {
        __ZdlPv();
      }
      plVar4[1] = 0;
      return plVar19;
    }
  }
  if ((ulong)plVar12 >> 0x3d == 0) {
    lVar3 = (long)plVar12 << 3;
    __Znwm();
    plVar19 = (long *)*plVar4;
    *plVar4 = lVar3;
    if (plVar19 != (long *)0x0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    plVar4[1] = (long)plVar12;
    do {
      *(undefined8 *)(*plVar4 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar12 != plVar13);
    plVar13 = (long *)plVar4[2];
    if (plVar13 != (long *)0x0) {
      plVar16 = (long *)plVar13[1];
      uVar8 = (long)plVar12 - 1;
      if (((ulong)plVar12 & uVar8) == 0) {
        plVar16 = (long *)((ulong)plVar16 & uVar8);
      }
      else if (plVar12 <= plVar16) {
        uVar20 = 0;
        if (plVar12 != (long *)0x0) {
          uVar20 = (ulong)plVar16 / (ulong)plVar12;
        }
        plVar16 = (long *)((long)plVar16 - uVar20 * (long)plVar12);
      }
      *(long **)(*plVar4 + (long)plVar16 * 8) = plVar4 + 2;
      plVar14 = (long *)*plVar13;
      while (plVar14 != (long *)0x0) {
        plVar17 = (long *)plVar14[1];
        if (((ulong)plVar12 & uVar8) == 0) {
          plVar17 = (long *)((ulong)plVar17 & uVar8);
        }
        else if (plVar12 <= plVar17) {
          uVar20 = 0;
          if (plVar12 != (long *)0x0) {
            uVar20 = (ulong)plVar17 / (ulong)plVar12;
          }
          plVar17 = (long *)((long)plVar17 - uVar20 * (long)plVar12);
        }
        plVar15 = plVar14;
        if (plVar17 != plVar16) {
          lVar3 = *plVar4;
          if (*(long *)(lVar3 + (long)plVar17 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar17 * 8) = plVar13;
            plVar16 = plVar17;
          }
          else {
            *plVar13 = *plVar14;
            *plVar14 = **(undefined8 **)(lVar3 + (long)plVar17 * 8);
            **(long **)(lVar3 + (long)plVar17 * 8) = (long)plVar14;
            plVar15 = plVar13;
          }
        }
        plVar13 = plVar15;
        plVar14 = (long *)*plVar15;
      }
    }
    return plVar19;
  }
  func_0x000109ffded8();
  uVar8 = ((ulong)(uint)(iVar6 << 3) + 8 ^ (ulong)uVar7) * -0x622015f714c7d297;
  uVar8 = ((ulong)uVar7 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar20 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = plVar19[1];
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      unaff_x24 = uVar9 & uVar20;
    }
    else {
      unaff_x24 = uVar20;
      if (uVar8 <= uVar20) {
        uVar11 = 0;
        if (uVar8 != 0) {
          uVar11 = uVar20 / uVar8;
        }
        unaff_x24 = uVar20 - uVar11 * uVar8;
      }
    }
    plVar4 = *(long **)(*plVar19 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar11 = plVar4[1];
        if (uVar11 == uVar20) {
          if (plVar4[2] == CONCAT44(uVar7,iVar6)) {
            return plVar4;
          }
        }
        else {
          if ((uVar8 & uVar9) == 0) {
            uVar11 = uVar11 & uVar9;
          }
          else if (uVar8 <= uVar11) {
            uVar10 = 0;
            if (uVar8 != 0) {
              uVar10 = uVar11 / uVar8;
            }
            uVar11 = uVar11 - uVar10 * uVar8;
          }
          if (uVar11 != unaff_x24) break;
        }
      }
    }
  }
  plVar4 = (long *)0x40;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = uVar20;
  plVar4[2] = *param_3;
  plVar4[4] = 0;
  plVar4[3] = 0;
  plVar4[6] = 0;
  plVar4[5] = 0;
  *(undefined4 *)(plVar4 + 7) = 0x3f800000;
  if ((uVar8 == 0) || (*(float *)(plVar19 + 4) * (float)uVar8 < (float)(plVar19[3] + 1))) {
    uVar9 = 1;
    if (2 < uVar8) {
      uVar9 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar9 = uVar9 | uVar8 << 1;
    uVar11 = (ulong)((float)(plVar19[3] + 1) / *(float *)(plVar19 + 4));
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar8 = plVar19[1];
    }
    if (uVar8 < uVar9) {
LAB_10a5c71e4:
      if (uVar9 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5c7430);
        (*pcVar2)();
      }
      lVar3 = uVar9 << 3;
      __Znwm();
      lVar5 = *plVar19;
      *plVar19 = lVar3;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar8 = 0;
      plVar19[1] = uVar9;
      do {
        *(undefined8 *)(*plVar19 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
      plVar12 = (long *)plVar19[2];
      uVar8 = uVar9;
      if (plVar12 != (long *)0x0) {
        uVar11 = plVar12[1];
        uVar10 = uVar9 - 1;
        if ((uVar9 & uVar10) == 0) {
          uVar11 = uVar11 & uVar10;
        }
        else if (uVar9 <= uVar11) {
          uVar18 = 0;
          if (uVar9 != 0) {
            uVar18 = uVar11 / uVar9;
          }
          uVar11 = uVar11 - uVar18 * uVar9;
        }
        *(long **)(*plVar19 + uVar11 * 8) = plVar19 + 2;
        plVar13 = (long *)*plVar12;
        while (plVar13 != (long *)0x0) {
          uVar18 = plVar13[1];
          if ((uVar9 & uVar10) == 0) {
            uVar18 = uVar18 & uVar10;
          }
          else if (uVar9 <= uVar18) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar18 / uVar9;
            }
            uVar18 = uVar18 - uVar1 * uVar9;
          }
          plVar16 = plVar13;
          if (uVar18 != uVar11) {
            lVar3 = *plVar19;
            if (*(long *)(lVar3 + uVar18 * 8) == 0) {
              *(long **)(lVar3 + uVar18 * 8) = plVar12;
              uVar11 = uVar18;
            }
            else {
              *plVar12 = *plVar13;
              *plVar13 = **(undefined8 **)(lVar3 + uVar18 * 8);
              **(long **)(lVar3 + uVar18 * 8) = (long)plVar13;
              plVar16 = plVar12;
            }
          }
          plVar12 = plVar16;
          plVar13 = (long *)*plVar16;
        }
      }
    }
    else if (uVar9 < uVar8) {
      uVar11 = (ulong)((float)(ulong)plVar19[3] / *(float *)(plVar19 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar11) {
        uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
      }
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar8) {
        if (uVar9 != 0) goto LAB_10a5c71e4;
        lVar3 = *plVar19;
        *plVar19 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        plVar19[1] = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = plVar19[1];
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar20;
    }
    else {
      unaff_x24 = uVar20;
      if (uVar8 <= uVar20) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar20 / uVar8;
        }
        unaff_x24 = uVar20 - uVar9 * uVar8;
      }
    }
  }
  lVar3 = *plVar19;
  plVar12 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = plVar19 + 2;
    *plVar4 = *plVar12;
    *plVar12 = (long)plVar4;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar12;
    if (*plVar4 == 0) goto LAB_10a5c73c4;
    uVar20 = *(ulong *)(*plVar4 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar20 = uVar20 & uVar8 - 1;
    }
    else if (uVar8 <= uVar20) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar20 / uVar8;
      }
      uVar20 = uVar20 - uVar9 * uVar8;
    }
    plVar12 = (long *)(*plVar19 + uVar20 * 8);
  }
  else {
    *plVar4 = *plVar12;
  }
  *plVar12 = (long)plVar4;
LAB_10a5c73c4:
  plVar19[3] = plVar19[3] + 1;
  return plVar4;
}



/* Entry: 10a5c703c; end: 10a5c7443;  */

long * FUN_10a5c703c(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar8 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar5) * -0x622015f714c7d297;
  uVar8 = ((ulong)uVar5 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar15 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar6 = uVar8 - 1;
    if ((uVar8 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar10 * uVar8;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar15) {
          if (plVar9[2] == param_2) {
            return plVar9;
          }
        }
        else {
          if ((uVar8 & uVar6) == 0) {
            uVar10 = uVar10 & uVar6;
          }
          else if (uVar8 <= uVar10) {
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar7 * uVar8;
          }
          if (uVar10 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x40;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar15;
  plVar9[2] = *param_3;
  plVar9[4] = 0;
  plVar9[3] = 0;
  plVar9[6] = 0;
  plVar9[5] = 0;
  *(undefined4 *)(plVar9 + 7) = 0x3f800000;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar8) {
      uVar6 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar6 = uVar6 | uVar8 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar6) {
LAB_10a5c71e4:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5c7430);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar8 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      plVar11 = (long *)param_1[2];
      uVar8 = uVar6;
      if (plVar11 != (long *)0x0) {
        uVar10 = plVar11[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar6 <= uVar10) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar11;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar7) == 0) {
            uVar14 = uVar14 & uVar7;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar11;
              uVar10 = uVar14;
            }
            else {
              *plVar11 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar11;
            }
          }
          plVar11 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar8) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar10) {
        uVar6 = uVar10;
      }
      if (uVar6 < uVar8) {
        if (uVar6 != 0) goto LAB_10a5c71e4;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = param_1[1];
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar6 * uVar8;
      }
    }
  }
  lVar3 = *param_1;
  plVar11 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 2;
    *plVar9 = *plVar11;
    *plVar11 = (long)plVar9;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar11;
    if (*plVar9 == 0) goto LAB_10a5c73c4;
    uVar15 = *(ulong *)(*plVar9 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar15 = uVar15 & uVar8 - 1;
    }
    else if (uVar8 <= uVar15) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar15 / uVar8;
      }
      uVar15 = uVar15 - uVar6 * uVar8;
    }
    plVar11 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar9 = *plVar11;
  }
  *plVar11 = (long)plVar9;
LAB_10a5c73c4:
  param_1[3] = param_1[3] + 1;
  return plVar9;
}



/* Entry: 10a5c7444; end: 10a5c7633;  */

void FUN_10a5c7444(long *param_1,ulong param_2,undefined1 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong unaff_x24;
  
  param_2 = param_2 & 0xff;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    uVar8 = (uint)uVar9;
    uVar10 = (uint)param_2;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar8 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar9 <= param_2) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = uVar10 / uVar8;
        }
        unaff_x24 = (ulong)(uVar10 - uVar1 * uVar8);
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_10a5c74f4;
          uVar7 = plVar5[1];
          if (uVar7 != param_2) break;
          if (*(byte *)(plVar5 + 2) == uVar10) {
            return;
          }
        }
        if ((uVar9 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (uVar9 <= uVar7) {
          uVar2 = 0;
          if (uVar9 != 0) {
            uVar2 = uVar7 / uVar9;
          }
          uVar7 = uVar7 - uVar2 * uVar9;
        }
      } while (uVar7 == unaff_x24);
    }
  }
LAB_10a5c74f4:
  plVar5 = (long *)0x18;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = param_2;
  *(undefined1 *)(plVar5 + 2) = param_3;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_10a5c7634(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = (int)uVar9 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar9 <= param_2) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = param_2 / uVar9;
        }
        unaff_x24 = param_2 - uVar3 * uVar9;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar5 = *plVar4;
    *plVar4 = (long)plVar5;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar5 == 0) goto LAB_10a5c7600;
    uVar3 = *(ulong *)(*plVar5 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar3 = uVar3 & uVar9 - 1;
    }
    else if (uVar9 <= uVar3) {
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar3 / uVar9;
      }
      uVar3 = uVar3 - uVar7 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar5 = *plVar4;
  }
  *plVar4 = (long)plVar5;
LAB_10a5c7600:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a5c7634; end: 10a5c7803;  */

long * FUN_10a5c7634(long *param_1,long *param_2,long param_3)

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
  
  plVar4 = param_1;
  plVar3 = param_2;
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
      return plVar4;
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
      return plVar4;
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
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
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
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
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
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return plVar3;
  }
  func_0x000109ffded8();
  plVar4[1] = 0;
  *plVar4 = 0;
  plVar4[3] = 0;
  plVar4[2] = 0;
  *(undefined4 *)(plVar4 + 4) = 0x3f800000;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_10a5c7874(plVar4,(char)*plVar3,(char)*plVar3);
    plVar3 = (long *)((long)plVar3 + 1);
  }
  return plVar4;
}



/* Entry: 10a5c7804; end: 10a5c7873;  */

undefined8 * FUN_10a5c7804(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_10a5c7874(param_1,*param_2,*param_2);
    param_2 = param_2 + 1;
  }
  return param_1;
}



/* Entry: 10a5c7874; end: 10a5c7a63;  */

void FUN_10a5c7874(long *param_1,ulong param_2,undefined1 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong unaff_x24;
  
  param_2 = param_2 & 0xff;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    uVar8 = (uint)uVar9;
    uVar10 = (uint)param_2;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar8 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar9 <= param_2) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = uVar10 / uVar8;
        }
        unaff_x24 = (ulong)(uVar10 - uVar1 * uVar8);
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_10a5c7924;
          uVar7 = plVar5[1];
          if (uVar7 != param_2) break;
          if (*(byte *)(plVar5 + 2) == uVar10) {
            return;
          }
        }
        if ((uVar9 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (uVar9 <= uVar7) {
          uVar2 = 0;
          if (uVar9 != 0) {
            uVar2 = uVar7 / uVar9;
          }
          uVar7 = uVar7 - uVar2 * uVar9;
        }
      } while (uVar7 == unaff_x24);
    }
  }
LAB_10a5c7924:
  plVar5 = (long *)0x18;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = param_2;
  *(undefined1 *)(plVar5 + 2) = param_3;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_10a5c7634(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = (int)uVar9 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar9 <= param_2) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = param_2 / uVar9;
        }
        unaff_x24 = param_2 - uVar3 * uVar9;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar5 = *plVar4;
    *plVar4 = (long)plVar5;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar5 == 0) goto LAB_10a5c7a30;
    uVar3 = *(ulong *)(*plVar5 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar3 = uVar3 & uVar9 - 1;
    }
    else if (uVar9 <= uVar3) {
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar3 / uVar9;
      }
      uVar3 = uVar3 - uVar7 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar5 = *plVar4;
  }
  *plVar4 = (long)plVar5;
LAB_10a5c7a30:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a5c7a64; end: 10a5c7cbb;  */

long * FUN_10a5c7a64(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (param_2 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  uVar8 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar2 = uVar4 - 1;
    if ((uVar4 & uVar2) == 0) {
      unaff_x24 = uVar2 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar4 <= uVar8) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar8 / uVar4;
        }
        unaff_x24 = uVar8 - uVar6 * uVar4;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar8) {
          if (plVar5[2] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar4 & uVar2) == 0) {
            uVar6 = uVar6 & uVar2;
          }
          else if (uVar4 <= uVar6) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar6 / uVar4;
            }
            uVar6 = uVar6 - uVar1 * uVar4;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = (long *)0x40;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = uVar8;
  plVar5[2] = *param_3;
  plVar5[4] = 0;
  plVar5[3] = 0;
  plVar5[6] = 0;
  plVar5[5] = 0;
  *(undefined4 *)(plVar5 + 7) = 0x3f800000;
  if ((uVar4 == 0) || (*(float *)(param_1 + 4) * (float)uVar4 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar4) {
      uVar2 = (ulong)((uVar4 & uVar4 - 1) != 0);
    }
    uVar2 = uVar2 | uVar4 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    FUN_10a5c7cbc(param_1,uVar2);
    uVar4 = param_1[1];
    if ((uVar4 & uVar4 - 1) == 0) {
      unaff_x24 = uVar4 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar4 <= uVar8) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar8 / uVar4;
        }
        unaff_x24 = uVar8 - uVar2 * uVar4;
      }
    }
  }
  lVar7 = *param_1;
  plVar3 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar5 = *plVar3;
    *plVar3 = (long)plVar5;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar3;
    if (*plVar5 == 0) goto LAB_10a5c7c7c;
    uVar8 = *(ulong *)(*plVar5 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar2 * uVar4;
    }
    plVar3 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar5 = *plVar3;
  }
  *plVar3 = (long)plVar5;
LAB_10a5c7c7c:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 10a5c7cbc; end: 10a5c7d8b;  */

void FUN_10a5c7cbc(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_10a5c7d04:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x00010a3f8ab8(uVar7 + 0x18);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_10a5c7d04;
  }
  return;
}



/* Entry: 10a5c7d8c; end: 10a5c7f3f;  */

void FUN_10a5c7d8c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x00010a3f8ab8(uVar1 + 0x18);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 10a5c7f40; end: 10a5c814b;  */

undefined1  [16] FUN_10a5c7f40(long *param_1,ushort *param_2,undefined2 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong unaff_x24;
  undefined1 auVar14 [16];
  
  uVar13 = (ulong)*param_2;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar4 = uVar11 - 1;
    uVar10 = (uint)uVar11;
    uVar12 = (uint)*param_2;
    if ((uVar11 & uVar4) == 0) {
      unaff_x24 = uVar10 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar11 <= uVar13) {
        uVar1 = 0;
        if (uVar10 != 0) {
          uVar1 = uVar12 / uVar10;
        }
        unaff_x24 = (ulong)(uVar12 - uVar1 * uVar10);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar6; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar7 = plVar9[1];
        if (uVar7 == uVar13) {
          if (*(ushort *)(plVar9 + 2) == uVar12) {
            uVar3 = 0;
            goto LAB_10a5c8118;
          }
        }
        else {
          if ((uVar11 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar11 <= uVar7) {
            uVar2 = 0;
            if (uVar11 != 0) {
              uVar2 = uVar7 / uVar11;
            }
            uVar7 = uVar7 - uVar2 * uVar11;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x18;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar13;
  *(undefined2 *)(plVar9 + 2) = *param_3;
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar11) {
      uVar4 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar4 = uVar4 | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar11) {
      uVar4 = uVar11;
    }
    FUN_10a5c814c(param_1,uVar4);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x24 = (int)uVar11 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar11 <= uVar13) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = uVar13 / uVar11;
        }
        unaff_x24 = uVar13 - uVar4 * uVar11;
      }
    }
  }
  lVar8 = *param_1;
  plVar5 = *(long **)(lVar8 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar9 = *plVar5;
    *plVar5 = (long)plVar9;
    *(long **)(lVar8 + unaff_x24 * 8) = plVar5;
    if (*plVar9 == 0) goto LAB_10a5c8108;
    uVar13 = *(ulong *)(*plVar9 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar13 = uVar13 & uVar11 - 1;
    }
    else if (uVar11 <= uVar13) {
      uVar4 = 0;
      if (uVar11 != 0) {
        uVar4 = uVar13 / uVar11;
      }
      uVar13 = uVar13 - uVar4 * uVar11;
    }
    plVar5 = (long *)(*param_1 + uVar13 * 8);
  }
  else {
    *plVar9 = *plVar5;
  }
  *plVar5 = (long)plVar9;
LAB_10a5c8108:
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_10a5c8118:
  auVar14._8_8_ = uVar3;
  auVar14._0_8_ = plVar9;
  return auVar14;
}



/* Entry: 10a5c814c; end: 10a5c821b;  */

void FUN_10a5c814c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_10a5c8194:
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
        func_0x000109ffded8();
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_10a5c8194;
  }
  return;
}



/* Entry: 10a5c821c; end: 10a5c8357;  */

void FUN_10a5c821c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
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
      func_0x000109ffded8();
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 10a5c8358; end: 10a5c835f;  */

void FUN_10a5c8358(void)

{
  return;
}


