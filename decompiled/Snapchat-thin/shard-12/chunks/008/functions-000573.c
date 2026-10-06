/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109a46f6c; end: 109a46fbf;  */

long * FUN_109a46f6c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109a46fc0; end: 109a46fc7;  */

void FUN_109a46fc0(void)

{
  return;
}



/* Entry: 109a46fc8; end: 109a47003;  */

void FUN_109a46fc8(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109a47000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109a47004; end: 109a4799f;  */

void FUN_109a47004(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  int *param_7)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  int iVar59;
  ulong uVar60;
  
  iVar59 = param_7[1];
  if (iVar59 != 0) {
    iVar1 = *param_7;
    do {
      if (iVar1 < 0x10) {
        uVar60 = 0;
      }
      else {
        uVar60 = 0;
        do {
          pcVar2 = (char *)(param_3 + uVar60);
          cVar6 = *pcVar2;
          cVar7 = pcVar2[1];
          cVar8 = pcVar2[2];
          cVar9 = pcVar2[3];
          cVar10 = pcVar2[4];
          cVar11 = pcVar2[5];
          cVar12 = pcVar2[6];
          cVar13 = pcVar2[7];
          cVar14 = pcVar2[9];
          cVar15 = pcVar2[10];
          cVar16 = pcVar2[0xb];
          cVar17 = pcVar2[0xc];
          cVar18 = pcVar2[0xd];
          cVar19 = pcVar2[0xe];
          cVar20 = pcVar2[0xf];
          pbVar3 = (byte *)(param_5 + uVar60);
          bVar36 = *pbVar3;
          bVar37 = pbVar3[1];
          bVar38 = pbVar3[2];
          bVar39 = pbVar3[3];
          bVar40 = pbVar3[4];
          bVar41 = pbVar3[5];
          bVar42 = pbVar3[6];
          bVar43 = pbVar3[7];
          pbVar4 = (byte *)(param_1 + uVar60);
          bVar21 = *pbVar4;
          bVar22 = pbVar4[1];
          bVar23 = pbVar4[2];
          bVar24 = pbVar4[3];
          bVar25 = pbVar4[4];
          bVar26 = pbVar4[5];
          bVar27 = pbVar4[6];
          bVar28 = pbVar4[7];
          bVar29 = pbVar4[9];
          bVar30 = pbVar4[10];
          bVar31 = pbVar4[0xb];
          bVar32 = pbVar4[0xc];
          bVar33 = pbVar4[0xd];
          bVar34 = pbVar4[0xe];
          bVar35 = pbVar4[0xf];
          bVar44 = *pbVar4;
          bVar45 = pbVar4[1];
          bVar46 = pbVar4[2];
          bVar47 = pbVar4[3];
          bVar48 = pbVar4[4];
          bVar49 = pbVar4[5];
          bVar50 = pbVar4[6];
          bVar51 = pbVar4[7];
          bVar52 = pbVar4[9];
          bVar53 = pbVar4[10];
          bVar54 = pbVar4[0xb];
          bVar55 = pbVar4[0xc];
          bVar56 = pbVar4[0xd];
          bVar57 = pbVar4[0xe];
          bVar58 = pbVar4[0xf];
          pbVar5 = (byte *)(param_5 + uVar60);
          pbVar5[8] = pbVar4[8] ^ (pbVar4[8] ^ pbVar3[8]) & -(pcVar2[8] == '\0');
          pbVar5[9] = bVar29 ^ (bVar52 ^ pbVar3[9]) & -(cVar14 == '\0');
          pbVar5[10] = bVar30 ^ (bVar53 ^ pbVar3[10]) & -(cVar15 == '\0');
          pbVar5[0xb] = bVar31 ^ (bVar54 ^ pbVar3[0xb]) & -(cVar16 == '\0');
          pbVar5[0xc] = bVar32 ^ (bVar55 ^ pbVar3[0xc]) & -(cVar17 == '\0');
          pbVar5[0xd] = bVar33 ^ (bVar56 ^ pbVar3[0xd]) & -(cVar18 == '\0');
          pbVar5[0xe] = bVar34 ^ (bVar57 ^ pbVar3[0xe]) & -(cVar19 == '\0');
          pbVar5[0xf] = bVar35 ^ (bVar58 ^ pbVar3[0xf]) & -(cVar20 == '\0');
          *pbVar5 = bVar21 ^ (bVar44 ^ bVar36) & -(cVar6 == '\0');
          pbVar5[1] = bVar22 ^ (bVar45 ^ bVar37) & -(cVar7 == '\0');
          pbVar5[2] = bVar23 ^ (bVar46 ^ bVar38) & -(cVar8 == '\0');
          pbVar5[3] = bVar24 ^ (bVar47 ^ bVar39) & -(cVar9 == '\0');
          pbVar5[4] = bVar25 ^ (bVar48 ^ bVar40) & -(cVar10 == '\0');
          pbVar5[5] = bVar26 ^ (bVar49 ^ bVar41) & -(cVar11 == '\0');
          pbVar5[6] = bVar27 ^ (bVar50 ^ bVar42) & -(cVar12 == '\0');
          pbVar5[7] = bVar28 ^ (bVar51 ^ bVar43) & -(cVar13 == '\0');
          uVar60 = uVar60 + 0x10;
        } while ((long)uVar60 <= (long)iVar1 + -0x10);
        uVar60 = uVar60 & 0xffffffff;
      }
      if ((int)uVar60 < iVar1) {
        do {
          if (*(char *)(param_3 + uVar60) != '\0') {
            *(undefined1 *)(param_5 + uVar60) = *(undefined1 *)(param_1 + uVar60);
          }
          uVar60 = uVar60 + 1;
        } while ((long)uVar60 < (long)iVar1);
      }
      param_3 = param_3 + param_4;
      param_1 = param_1 + param_2;
      param_5 = param_5 + param_6;
      iVar59 = iVar59 + -1;
    } while (iVar59 != 0);
  }
  return;
}



/* Entry: 109a479a0; end: 109a4813b;  */

/* WARNING: Removing unreachable block (ram,0x000109a418c0) */

void FUN_109a479a0(uint *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  code *pcVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  uint *puVar25;
  int iVar26;
  long unaff_x28;
  ulong unaff_d9;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong auStack_2a0 [3];
  undefined4 uStack_288;
  ulong uStack_280;
  long lStack_278;
  undefined4 uStack_270;
  undefined8 uStack_268;
  int aiStack_1b8 [2];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  int *piStack_160;
  ulong *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  uint uStack_110;
  undefined8 uStack_10c;
  uint uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_60;
  long lStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  do {
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar25 = param_2;
    FUN_109a8b904(param_2,0xffffffff);
    if (-1 < (int)*param_2) {
LAB_109a479f8:
      if (*(long *)(param_1 + 4) == 0) goto LAB_109a47a98;
      uVar7 = param_1[1];
      uVar11 = (ulong)uVar7;
      if ((int)uVar7 < 3) {
        lVar15 = (long)(int)param_1[3] * (long)(int)param_1[2];
      }
      else {
        lVar15 = 1;
        piVar17 = *(int **)(param_1 + 0x10);
        uVar21 = uVar11;
        do {
          lVar15 = lVar15 * *piVar17;
          uVar21 = uVar21 - 1;
          piVar17 = piVar17 + 1;
        } while (uVar21 != 0);
      }
      if (lVar15 == 0) {
LAB_109a47a98:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          uVar7 = *param_2;
          if ((uVar7 >> 0x1e & 1) == 0) {
            uVar13 = uVar7 >> 0x10 & 0x1f;
            if (uVar13 < 7) {
              if (uVar13 < 3) {
                if (uVar13 == 0) {
                  return;
                }
                if (uVar13 == 1) {
                  lVar15 = *(long *)(param_2 + 2);
                  if (*(long *)(lVar15 + 0x38) != 0) {
                    piVar17 = (int *)(*(long *)(lVar15 + 0x38) + 0x14);
                    do {
                      iVar26 = *piVar17;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                      if (bVar2) {
                        *piVar17 = iVar26 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                    if (iVar26 + -1 == 0) {
                      func_0x000109a848d4(lVar15);
                    }
                  }
                  *(undefined8 *)(lVar15 + 0x38) = 0;
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  *(undefined8 *)(lVar15 + 0x10) = 0;
                  *(undefined8 *)(lVar15 + 0x28) = 0;
                  *(undefined8 *)(lVar15 + 0x20) = 0;
                  if (*(int *)(lVar15 + 4) < 1) {
                    return;
                  }
                  lVar16 = 0;
                  lVar18 = *(long *)(lVar15 + 0x40);
                  do {
                    *(undefined4 *)(lVar18 + lVar16 * 4) = 0;
                    lVar16 = lVar16 + 1;
                  } while (lVar16 < *(int *)(lVar15 + 4));
                  return;
                }
              }
              else {
                if (uVar13 == 3) {
                  puStack_40 = (undefined8 *)0x0;
                  FUN_109a8ee3c(param_2,&puStack_40,uVar7 & 0xfff,0xffffffff,0,0);
                  return;
                }
                if (uVar13 == 4) {
                  plVar10 = *(long **)(param_2 + 2);
                  plVar23 = (long *)*plVar10;
                  plVar24 = (long *)plVar10[1];
                  while (plVar5 = plVar24, plVar5 != plVar23) {
                    plVar24 = plVar5 + -3;
                    if (*plVar24 != 0) {
                      plVar5[-2] = *plVar24;
                      __ZdlPv();
                    }
                  }
                  plVar10[1] = (long)plVar23;
                  return;
                }
                if (uVar13 == 5) {
                  plVar23 = *(long **)(param_2 + 2);
                  lVar15 = *plVar23;
                  lVar16 = plVar23[1];
                  while (lVar16 != lVar15) {
                    lVar16 = lVar16 + -0x60;
                    FUN_109370334(lVar16);
                  }
                  plVar23[1] = lVar15;
                  return;
                }
              }
            }
            else {
              if (uVar13 < 10) {
                return;
              }
              if (uVar13 == 10) {
                lVar15 = *(long *)(param_2 + 2);
                if (*(long *)(lVar15 + 0x20) != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0x20) + 0x10);
                  do {
                    iVar26 = *piVar17;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                    if (bVar2) {
                      *piVar17 = iVar26 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (iVar26 + -1 == 0) {
                    (**(code **)(**(long **)(*(long *)(lVar15 + 0x20) + 8) + 0x20))();
                    *(undefined8 *)(lVar15 + 0x20) = 0;
                  }
                }
                if (0 < *(int *)(lVar15 + 4)) {
                  lVar16 = 0;
                  lVar18 = *(long *)(lVar15 + 0x30);
                  do {
                    *(undefined4 *)(lVar18 + lVar16 * 4) = 0;
                    lVar16 = lVar16 + 1;
                  } while (lVar16 < *(int *)(lVar15 + 4));
                }
                *(undefined8 *)(lVar15 + 0x20) = 0;
                return;
              }
              if (uVar13 == 0xb) {
                plVar23 = *(long **)(param_2 + 2);
                lVar15 = *plVar23;
                lVar16 = plVar23[1];
                while (lVar16 != lVar15) {
                  lVar16 = lVar16 + -0x50;
                  FUN_109ac5638();
                }
                plVar23[1] = lVar15;
                return;
              }
              if (uVar13 == 0xd) {
                (*(undefined8 **)(param_2 + 2))[1] = **(undefined8 **)(param_2 + 2);
                return;
              }
            }
            puVar9 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar9 = 1;
            puStack_40 = (undefined8 *)(puVar9 + 1);
            uStack_38 = 0x1e;
            *(undefined1 *)((long)puVar9 + 0x22) = 0;
            *(undefined8 *)(puVar9 + 3) = 0x726f707075736e75;
            *(undefined8 *)(puVar9 + 1) = 0x2f6e776f6e6b6e55;
            *(undefined8 *)((long)puVar9 + 0x1a) = 0x6570797420796172;
            *(undefined8 *)((long)puVar9 + 0x12) = 0x726120646574726f;
            FUN_109ac3188(0xffffff2b,&puStack_40,&DAT_10f598457,&UNK_10f597913,0xa4b);
          }
          else {
            puVar9 = (undefined4 *)0x14;
            func_0x000107c2ae8c();
            *puVar9 = 1;
            puStack_40 = (undefined8 *)(puVar9 + 1);
            *puStack_40 = 0x6953646578696621;
            uStack_38 = 0xc;
            *(undefined1 *)(puVar9 + 4) = 0;
            puVar9[3] = 0x2928657a;
            FUN_109ac3188(0xffffff29,&puStack_40,&DAT_10f598457,&UNK_10f597913,0xa0a);
          }
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
          (*pcVar6)();
        }
      }
      else {
        if ((*param_2 & 0x1f0000) == 0xa0000) {
          FUN_109a8727c(param_2,uVar11,*(undefined8 *)(param_1 + 0x10),*param_1 & 0xfff,0xffffffff,0
                        ,0);
          FUN_109a8bd24(&uStack_98,param_2,0xffffffff);
          uVar7 = param_1[1];
          uVar11 = (ulong)uVar7;
          if ((int)uVar7 < 1) {
            lVar15 = 0;
            uVar21 = (long)(int)uVar7;
            if (uVar7 != 0) goto LAB_109a47c64;
          }
          else {
            lVar15 = *(long *)(*(long *)(param_1 + 0x12) + uVar11 * 8 + -8);
            uVar21 = uVar11;
LAB_109a47c64:
            piVar17 = *(int **)(param_1 + 0x10);
            plVar23 = &uStack_1a0;
            do {
              *plVar23 = (long)*piVar17;
              uVar21 = uVar21 - 1;
              piVar17 = piVar17 + 1;
              plVar23 = plVar23 + 1;
            } while (uVar21 != 0);
          }
          lVar16 = (long)(int)uVar7 - 1;
          (&uStack_1a0)[lVar16] = (&uStack_1a0)[lVar16] * lVar15;
          uVar21 = (ulong)uStack_98._4_4_;
          if (0 < (int)uStack_98._4_4_) {
            lVar18 = 0;
            uVar19 = uStack_70;
            do {
              uVar22 = *(ulong *)(lStack_60 + lVar18);
              uVar3 = 0;
              if (uVar22 != 0) {
                uVar3 = uVar19 / uVar22;
              }
              *(ulong *)((long)auStack_2a0 + lVar18) = uVar3;
              uVar19 = uVar19 - uVar3 * uVar22;
              lVar18 = lVar18 + 8;
            } while (uVar21 * 8 - lVar18 != 0);
          }
          auStack_2a0[lVar16] = auStack_2a0[lVar16] * lVar15;
          (**(code **)(**(long **)(lStack_78 + 8) + 0x40))
                    (*(long **)(lStack_78 + 8),lStack_78,*(undefined8 *)(param_1 + 4),uVar11,
                     &uStack_1a0,auStack_2a0,lStack_60,*(undefined8 *)(param_1 + 0x12));
          FUN_109ac5638(&uStack_98);
        }
        else {
          if ((int)uVar7 < 3) {
            FUN_109a8f64c(param_2,param_1[2],param_1[3],*param_1 & 0xfff,0xffffffff,0,0);
            if ((*param_2 & 0x1f0000) == 0x10000) {
              puVar12 = *(ulong **)(param_2 + 2);
              piStack_160 = (int *)((ulong)&uStack_1a0 | 8);
              uStack_198 = puVar12[1];
              uStack_1a0 = (undefined4 *)*puVar12;
              uStack_188 = puVar12[3];
              uStack_190 = puVar12[2];
              uStack_178 = puVar12[5];
              uStack_180 = puVar12[4];
              uStack_168 = puVar12[7];
              uStack_170 = (undefined8 *)puVar12[6];
              puStack_158 = &uStack_150;
              uStack_150 = 0;
              uStack_148 = 0;
              if (puVar12[7] != 0) {
                piVar17 = (int *)(puVar12[7] + 0x14);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                  if (bVar2) {
                    *piVar17 = *piVar17 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              if (*(int *)((long)puVar12 + 4) < 3) {
                uStack_150 = *(ulong *)puVar12[9];
                uStack_148 = ((ulong *)puVar12[9])[1];
              }
              else {
                uStack_1a0 = (undefined4 *)((ulong)uStack_1a0 & 0xffffffff);
                func_0x000109a84868(&uStack_1a0);
              }
            }
            else {
              FUN_109a8a180(&uStack_1a0,param_2,0xffffffff);
            }
            uVar11 = *(ulong *)(param_1 + 4);
            if (((uVar11 != uStack_190) && (uVar7 = param_1[2], 0 < (int)uVar7)) &&
               (uVar13 = param_1[3], 0 < (int)uVar13)) {
              if (((*param_2 & 0x1f0000) == 0xc0000) || ((*param_2 & 0x1f0000) == 0x30000)) {
                uVar11 = (ulong)uStack_1a0._4_4_;
                if ((int)uStack_1a0._4_4_ < 3) {
                  iVar26 = uStack_198._4_4_ * (int)uStack_198;
                }
                else {
                  iVar26 = 1;
                  piVar17 = piStack_160;
                  do {
                    iVar26 = *piVar17 * iVar26;
                    uVar11 = uVar11 - 1;
                    piVar17 = piVar17 + 1;
                  } while (uVar11 != 0);
                }
                FUN_109a890bc(auStack_2a0,&uStack_1a0,0,iVar26);
                FUN_109143cc8(&uStack_1a0,auStack_2a0);
                func_0x00010567aa40(auStack_2a0);
                uVar11 = *(ulong *)(param_1 + 4);
                uVar7 = param_1[2];
                uVar13 = param_1[3];
              }
              uVar20 = (uint)((long)(int)uVar7 * (long)(int)uVar13);
              uVar14 = uVar7;
              uVar4 = uVar13;
              if ((long)(int)uVar20 == (long)(int)uVar7 * (long)(int)uVar13) {
                uVar14 = 1;
                uVar4 = uVar20;
              }
              if ((*param_1 & (uint)uStack_1a0 & 0x4000) != 0) {
                uVar7 = uVar14;
                uVar13 = uVar4;
              }
              if ((int)param_1[1] < 1) {
                lVar15 = 0;
              }
              else {
                lVar15 = *(long *)(*(long *)(param_1 + 0x12) + (ulong)param_1[1] * 8 + -8);
              }
              if (uVar7 != 0) {
                uVar21 = uStack_190;
                do {
                  uVar7 = uVar7 - 1;
                  _memcpy(uVar21,uVar11,lVar15 * (int)uVar13);
                  uVar11 = uVar11 + *(long *)(param_1 + 0x14);
                  uVar21 = uVar21 + uStack_150;
                } while (uVar7 != 0);
              }
            }
            if (uStack_168 != 0) {
              piVar17 = (int *)(uStack_168 + 0x14);
              do {
                iVar26 = *piVar17;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar2) {
                  *piVar17 = iVar26 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (iVar26 + -1 == 0) {
                func_0x000109a848d4(&uStack_1a0);
              }
            }
            if (0 < (int)uStack_1a0._4_4_) {
              lVar15 = 0;
              do {
                piStack_160[lVar15] = 0;
                lVar15 = lVar15 + 1;
              } while (lVar15 < (int)uStack_1a0._4_4_);
            }
          }
          else {
            FUN_109a8727c(param_2,uVar11,*(undefined8 *)(param_1 + 0x10),*param_1 & 0xfff,0xffffffff
                          ,0,0);
            if ((*param_2 & 0x1f0000) == 0x10000) {
              puVar12 = *(ulong **)(param_2 + 2);
              piStack_160 = (int *)((ulong)&uStack_1a0 | 8);
              uStack_198 = puVar12[1];
              uStack_1a0 = (undefined4 *)*puVar12;
              uStack_188 = puVar12[3];
              uStack_190 = puVar12[2];
              uStack_178 = puVar12[5];
              uStack_180 = puVar12[4];
              uStack_168 = puVar12[7];
              uStack_170 = (undefined8 *)puVar12[6];
              puStack_158 = &uStack_150;
              uStack_150 = 0;
              uStack_148 = 0;
              if (puVar12[7] != 0) {
                piVar17 = (int *)(puVar12[7] + 0x14);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                  if (bVar2) {
                    *piVar17 = *piVar17 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              if (*(int *)((long)puVar12 + 4) < 3) {
                uStack_150 = *(ulong *)puVar12[9];
                uStack_148 = ((ulong *)puVar12[9])[1];
              }
              else {
                uStack_1a0 = (undefined4 *)((ulong)uStack_1a0 & 0xffffffff);
                func_0x000109a84868(&uStack_1a0);
              }
            }
            else {
              FUN_109a8a180(&uStack_1a0,param_2,0xffffffff);
            }
            if (*(ulong *)(param_1 + 4) != uStack_190) {
              uVar11 = (ulong)param_1[1];
              if ((int)param_1[1] < 3) {
                lVar15 = (long)(int)param_1[3] * (long)(int)param_1[2];
              }
              else {
                lVar15 = 1;
                piVar17 = *(int **)(param_1 + 0x10);
                do {
                  lVar15 = lVar15 * *piVar17;
                  uVar11 = uVar11 - 1;
                  piVar17 = piVar17 + 1;
                } while (uVar11 != 0);
              }
              if (lVar15 != 0) {
                puStack_90 = &uStack_1a0;
                uStack_268 = 0;
                auStack_2a0[1] = 0;
                auStack_2a0[2] = 0;
                auStack_2a0[0] = 0;
                uStack_288 = 0;
                uStack_280 = 0;
                lStack_278 = 0;
                uStack_270 = 0;
                uStack_98 = param_1;
                FUN_109a9b368(auStack_2a0,&uStack_98,0,&uStack_2b0,2);
                if ((int)param_1[1] < 1) {
                  lVar15 = 0;
                }
                else {
                  lVar15 = *(long *)(*(long *)(param_1 + 0x12) + (ulong)param_1[1] * 8 + -8);
                }
                lVar15 = lVar15 * lStack_278;
                uVar11 = 0xffffffffffffffff;
                while (uVar11 = uVar11 + 1, uVar11 < uStack_280) {
                  _memcpy(uStack_2a8,uStack_2b0,lVar15);
                  FUN_109a8350c(auStack_2a0);
                }
              }
            }
            if (uStack_168 != 0) {
              piVar17 = (int *)(uStack_168 + 0x14);
              do {
                iVar26 = *piVar17;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar2) {
                  *piVar17 = iVar26 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (iVar26 + -1 == 0) {
                func_0x000109a848d4(&uStack_1a0);
              }
            }
            if (0 < (int)uStack_1a0._4_4_) {
              lVar15 = 0;
              do {
                piStack_160[lVar15] = 0;
                lVar15 = lVar15 + 1;
              } while (lVar15 < (int)uStack_1a0._4_4_);
            }
          }
          uStack_168 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          if (puStack_158 != &uStack_150 && puStack_158 != (ulong *)0x0) {
            _free(puStack_158[-1]);
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return;
        }
      }
LAB_109a48058:
      ___stack_chk_fail();
LAB_109a4805c:
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      uStack_1a0 = puVar9 + 1;
      uStack_198 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x5643203d3d202928;
      *(undefined8 *)(puVar9 + 1) = 0x736c656e6e616863;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x296570797464284e;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x435f54414d5f5643;
      FUN_109ac3188(0xffffff29,&uStack_1a0,&UNK_10f595fe6,&UNK_10f595fed,0x101);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109a480bc);
      (*pcVar6)();
    }
    uVar7 = (uint)puVar25;
    if (uVar7 == (*param_1 & 0xfff)) goto LAB_109a479f8;
    if (((*param_1 ^ uVar7) & 0xff8) != 0) goto LAB_109a4805c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) goto LAB_109a48058;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_70 = unaff_d9;
    lStack_60 = unaff_x28;
    if ((int)uVar7 < 0) {
      if ((int)*param_2 < 0) {
        puVar25 = param_2;
        FUN_109a8b904(param_2,0xffffffff);
        uVar13 = *param_1;
      }
      else {
        uVar13 = *param_1;
        puVar25 = (uint *)(ulong)(uVar13 & 0xfff);
      }
    }
    else {
      uVar13 = *param_1;
      puVar25 = (uint *)(ulong)(uVar13 & 0xff8 | uVar7 & 7);
    }
    uVar7 = (uint)puVar25 & 7;
    if ((uVar13 & 7) != uVar7) {
      uStack_10c = *(ulong *)(param_1 + 1);
      lStack_d0 = (long)&uStack_10c + 4;
      uVar14 = param_1[1];
      uStack_104 = param_1[3];
      uStack_f8 = *(undefined8 *)(param_1 + 6);
      uStack_100 = *(undefined8 *)(param_1 + 4);
      uStack_e8 = *(undefined8 *)(param_1 + 10);
      uStack_f0 = *(undefined8 *)(param_1 + 8);
      lStack_d8 = *(long *)(param_1 + 0xe);
      uStack_e0 = *(undefined8 *)(param_1 + 0xc);
      uStack_c0 = 0;
      uStack_b8 = 0;
      if (*(long *)(param_1 + 0xe) != 0) {
        piVar17 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar2) {
            *piVar17 = *piVar17 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar14 = param_1[1];
      }
      uStack_110 = uVar13;
      puStack_c8 = &uStack_c0;
      if ((int)uVar14 < 3) {
        uStack_c0 = **(undefined8 **)(param_1 + 0x12);
        uStack_b8 = (*(undefined8 **)(param_1 + 0x12))[1];
      }
      else {
        uStack_10c = uStack_10c & 0xffffffff00000000;
        func_0x000109a84868(&uStack_110,param_1);
      }
      pcVar6 = (code *)(&PTR_FUN_110b21620)[(ulong)uVar7 * 8 + (ulong)(uVar13 & 7)];
      uStack_88 = 0x3ff0000000000000;
      uStack_80 = 0;
      if (pcVar6 == (code *)0x0) goto LAB_109a41e44;
      iVar26 = (*param_1 >> 3 & 0x1ff) + 1;
      if ((int)param_1[1] < 3) {
        uStack_170 = (undefined8 *)NEON_rev64(**(undefined8 **)(param_1 + 0x10),4);
        FUN_109a8ee3c(param_2,&uStack_170,puVar25,0xffffffff,0,0);
        if ((*param_2 & 0x1f0000) == 0x10000) {
          puVar12 = *(ulong **)(param_2 + 2);
          uStack_130 = (ulong)&uStack_170 | 8;
          uStack_168 = puVar12[1];
          uStack_170 = (undefined8 *)*puVar12;
          puStack_158 = (ulong *)puVar12[3];
          piStack_160 = (int *)puVar12[2];
          uStack_148 = puVar12[5];
          uStack_150 = puVar12[4];
          uStack_138 = puVar12[7];
          uStack_140 = puVar12[6];
          puStack_128 = &uStack_120;
          uStack_120 = 0;
          uStack_118 = 0;
          if (puVar12[7] != 0) {
            piVar17 = (int *)(puVar12[7] + 0x14);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar2) {
                *piVar17 = *piVar17 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (*(int *)((long)puVar12 + 4) < 3) {
            uStack_120 = *(undefined8 *)puVar12[9];
            uStack_118 = ((undefined8 *)puVar12[9])[1];
          }
          else {
            uStack_170 = (undefined8 *)((ulong)uStack_170 & 0xffffffff);
            func_0x000109a84868(&uStack_170);
          }
        }
        else {
          FUN_109a8a180(&uStack_170,param_2,0xffffffff);
        }
        if ((((uStack_110 & (uint)uStack_170) >> 0xe & 1) == 0) ||
           (uVar11 = (long)(int)uStack_104 * (long)iVar26 * (long)uStack_10c._4_4_,
           uVar11 - (long)(int)uVar11 != 0)) {
          uVar11 = (ulong)(uStack_104 * iVar26);
          iVar26 = uStack_10c._4_4_;
        }
        else {
          iVar26 = 1;
        }
        uStack_1b0 = CONCAT44(iVar26,(int)uVar11);
        (*pcVar6)(uStack_100,uStack_c0,0,0,piStack_160,uStack_120,&uStack_1b0,&uStack_88);
        if (uStack_138 != 0) {
          piVar17 = (int *)(uStack_138 + 0x14);
          do {
            iVar26 = *piVar17;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar2) {
              *piVar17 = iVar26 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar26 + -1 == 0) {
            func_0x000109a848d4(&uStack_170);
          }
        }
        uStack_138 = 0;
        puStack_158 = (ulong *)0x0;
        piStack_160 = (int *)0x0;
        uStack_148 = 0;
        uStack_150 = 0;
        if (0 < uStack_170._4_4_) {
          lVar15 = 0;
          do {
            *(undefined4 *)(uStack_130 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < uStack_170._4_4_);
        }
        if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
          uVar8 = puStack_128[-1];
LAB_109a41d8c:
          uStack_138 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          puStack_158 = (ulong *)0x0;
          piStack_160 = (int *)0x0;
          _free(uVar8);
        }
      }
      else {
        FUN_109a8727c(param_2,param_1[1],*(undefined8 *)(param_1 + 0x10),puVar25,0xffffffff,0,0);
        if ((*param_2 & 0x1f0000) == 0x10000) {
          puVar12 = *(ulong **)(param_2 + 2);
          uStack_130 = (ulong)&uStack_170 | 8;
          uStack_168 = puVar12[1];
          uStack_170 = (undefined8 *)*puVar12;
          puStack_158 = (ulong *)puVar12[3];
          piStack_160 = (int *)puVar12[2];
          uStack_148 = puVar12[5];
          uStack_150 = puVar12[4];
          uStack_138 = puVar12[7];
          uStack_140 = puVar12[6];
          puStack_128 = &uStack_120;
          uStack_120 = 0;
          uStack_118 = 0;
          if (puVar12[7] != 0) {
            piVar17 = (int *)(puVar12[7] + 0x14);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar2) {
                *piVar17 = *piVar17 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (*(int *)((long)puVar12 + 4) < 3) {
            uStack_120 = *(undefined8 *)puVar12[9];
            uStack_118 = ((undefined8 *)puVar12[9])[1];
          }
          else {
            uStack_170 = (undefined8 *)((ulong)uStack_170 & 0xffffffff);
            func_0x000109a84868(&uStack_170);
          }
        }
        else {
          FUN_109a8a180(&uStack_170,param_2,0xffffffff);
        }
        puStack_a0 = &uStack_110;
        uStack_98 = (uint *)&uStack_170;
        puStack_90 = (undefined8 *)0x0;
        uStack_178 = 0;
        uStack_1a8 = 0;
        uStack_1a0 = (undefined4 *)0x0;
        uStack_1b0 = 0;
        uStack_198 = (ulong)uStack_198._4_4_ << 0x20;
        uStack_190 = 0;
        uStack_188 = 0;
        uStack_180 = (ulong)uStack_180._4_4_ << 0x20;
        FUN_109a9b368(&uStack_1b0,&puStack_a0,0,&uStack_b0,0xffffffff);
        iVar26 = iVar26 * (int)uStack_188;
        uVar11 = 0xffffffffffffffff;
        while (uVar11 = uVar11 + 1, uVar11 < uStack_190) {
          aiStack_1b8[1] = 1;
          aiStack_1b8[0] = iVar26;
          (*pcVar6)(uStack_b0,1,0,0,uStack_a8,1,aiStack_1b8,&uStack_88);
          FUN_109a8350c(&uStack_1b0);
        }
        if (uStack_138 != 0) {
          piVar17 = (int *)(uStack_138 + 0x14);
          do {
            iVar26 = *piVar17;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar2) {
              *piVar17 = iVar26 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar26 + -1 == 0) {
            func_0x000109a848d4(&uStack_170);
          }
        }
        uStack_138 = 0;
        puStack_158 = (ulong *)0x0;
        piStack_160 = (int *)0x0;
        uStack_148 = 0;
        uStack_150 = 0;
        if (0 < uStack_170._4_4_) {
          lVar15 = 0;
          do {
            *(undefined4 *)(uStack_130 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < uStack_170._4_4_);
        }
        if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
          uVar8 = puStack_128[-1];
          goto LAB_109a41d8c;
        }
      }
      if (lStack_d8 != 0) {
        piVar17 = (int *)(lStack_d8 + 0x14);
        do {
          iVar26 = *piVar17;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar2) {
            *piVar17 = iVar26 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      lStack_d8 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      if (0 < (int)uStack_10c) {
        lVar15 = 0;
        do {
          *(undefined4 *)(lStack_d0 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)uStack_10c);
      }
      if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
        _free(puStack_c8[-1]);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return;
      }
LAB_109a41e40:
      ___stack_chk_fail();
LAB_109a41e44:
      puVar9 = (undefined4 *)0x10;
      func_0x000107c2ae8c();
      uStack_170 = (undefined8 *)(puVar9 + 1);
      *uStack_170 = 0x203d2120636e7566;
      *puVar9 = 1;
      uStack_168 = 9;
      *(undefined2 *)(puVar9 + 3) = 0x30;
      FUN_109ac3188(0xffffff29,&uStack_170,&UNK_10f595ee3,&UNK_10f595cf9,0x12dc);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109a41ea0);
      (*pcVar6)();
    }
    unaff_x28 = lStack_60;
    unaff_d9 = uStack_70;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) goto LAB_109a41e40;
  } while( true );
}



/* Entry: 109a4813c; end: 109a4887f;  */

void FUN_109a4813c(uint *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  int aiStack_198 [2];
  undefined4 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  int *piStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_3 + 2);
    piStack_a0 = (int *)((ulong)&uStack_e0 | 8);
    uStack_d8 = puVar6[1];
    uStack_e0 = *puVar6;
    uStack_c8 = puVar6[3];
    uStack_d0 = puVar6[2];
    uStack_b8 = puVar6[5];
    uStack_c0 = puVar6[4];
    uStack_a8 = puVar6[7];
    uStack_b0 = puVar6[6];
    puStack_98 = &uStack_90;
    uStack_90 = 0;
    uStack_88 = 0;
    if (puVar6[7] != 0) {
      piVar1 = (int *)(puVar6[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_90 = *(undefined8 *)puVar6[9];
      uStack_88 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_e0 = uStack_e0 & 0xffffffff;
      func_0x000109a84868(&uStack_e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_e0,param_3,0xffffffff);
  }
  if (uStack_d0 == 0) {
    FUN_109a479a0(param_1,param_2);
LAB_109a4864c:
    if (uStack_a8 != 0) {
      piVar1 = (int *)(uStack_a8 + 0x14);
      do {
        iVar13 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 + -1 == 0) {
        func_0x000109a848d4(&uStack_e0);
      }
    }
    uStack_a8 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    if (0 < uStack_e0._4_4_) {
      lVar11 = 0;
      do {
        piStack_a0[lVar11] = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < uStack_e0._4_4_);
    }
    if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
      _free(puStack_98[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
LAB_109a4876c:
    puVar5 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    puStack_190 = puVar5 + 1;
    uStack_188 = 0x15;
    *(undefined1 *)((long)puVar5 + 0x19) = 0;
    *(undefined8 *)(puVar5 + 3) = 0x732e6b73616d203d;
    *(undefined8 *)(puVar5 + 1) = 0x3d202928657a6973;
    *(undefined8 *)((long)puVar5 + 0x11) = 0x2928657a69732e6b;
    FUN_109ac3188(0xffffff29,&puStack_190,&UNK_10f595fe6,&UNK_10f595fed,0x167);
  }
  else {
    if ((uStack_e0 & 7) == 0) {
      uVar8 = (uint)uStack_e0 >> 3 & 0x1ff;
      if ((uVar8 == 0) || (uVar8 == (*param_1 >> 3 & 0x1ff))) {
        if (uVar8 == 0) {
          if ((int)param_1[1] < 1) {
            uStack_e8 = 0;
            goto LAB_109a48250;
          }
          uStack_e8 = *(ulong *)(*(long *)(param_1 + 0x12) + (ulong)param_1[1] * 8 + -8);
          if (uStack_e8 < 0x21) goto LAB_109a48250;
          pcVar4 = (code *)0x109a47910;
        }
        else {
          uStack_e8 = (ulong)(0x88442211 >> (((ulong)*param_1 & 7) << 2)) & 0xf;
LAB_109a48250:
          pcVar9 = *(code **)(uStack_e8 * 8 + 0x1132e8de8);
          pcVar4 = (code *)0x109a47910;
          if (pcVar9 != (code *)0x0) {
            pcVar4 = pcVar9;
          }
        }
        if ((*param_2 & 0x1f0000) == 0x10000) {
          puVar7 = *(undefined8 **)(param_2 + 2);
          uStack_110 = (ulong)&uStack_150 | 8;
          uStack_148 = puVar7[1];
          uStack_150 = (undefined4 *)*puVar7;
          uStack_138 = puVar7[3];
          lStack_140 = puVar7[2];
          uStack_128 = puVar7[5];
          uStack_130 = puVar7[4];
          lStack_118 = puVar7[7];
          uStack_120 = puVar7[6];
          puStack_108 = &uStack_100;
          uStack_100 = 0;
          uStack_f8 = 0;
          if (puVar7[7] != 0) {
            piVar1 = (int *)(puVar7[7] + 0x14);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (*(int *)((long)puVar7 + 4) < 3) {
            uStack_100 = *(undefined8 *)puVar7[9];
            uStack_f8 = ((undefined8 *)puVar7[9])[1];
          }
          else {
            uStack_150 = (undefined4 *)((ulong)uStack_150 & 0xffffffff);
            func_0x000109a84868(&uStack_150);
          }
        }
        else {
          FUN_109a8a180(&uStack_150,param_2,0xffffffff);
        }
        lVar11 = lStack_140;
        if (lStack_118 != 0) {
          piVar1 = (int *)(lStack_118 + 0x14);
          do {
            iVar13 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar13 + -1 == 0) {
            func_0x000109a848d4(&uStack_150);
          }
        }
        lStack_118 = 0;
        uStack_138 = 0;
        lStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        if (0 < uStack_150._4_4_) {
          lVar10 = 0;
          do {
            *(undefined4 *)(uStack_110 + lVar10 * 4) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < uStack_150._4_4_);
        }
        if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
          _free(puStack_108[-1]);
        }
        FUN_109a8727c(param_2,param_1[1],*(undefined8 *)(param_1 + 0x10),*param_1 & 0xfff,0xffffffff
                      ,0,0);
        if ((*param_2 & 0x1f0000) == 0x10000) {
          puVar7 = *(undefined8 **)(param_2 + 2);
          uStack_110 = (ulong)&uStack_150 | 8;
          uStack_148 = puVar7[1];
          uStack_150 = (undefined4 *)*puVar7;
          uStack_138 = puVar7[3];
          lStack_140 = puVar7[2];
          uStack_128 = puVar7[5];
          uStack_130 = puVar7[4];
          lStack_118 = puVar7[7];
          uStack_120 = puVar7[6];
          puStack_108 = &uStack_100;
          uStack_100 = 0;
          uStack_f8 = 0;
          if (puVar7[7] != 0) {
            piVar1 = (int *)(puVar7[7] + 0x14);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (*(int *)((long)puVar7 + 4) < 3) {
            uStack_100 = *(undefined8 *)puVar7[9];
            uStack_f8 = ((undefined8 *)puVar7[9])[1];
          }
          else {
            uStack_150 = (undefined4 *)((ulong)uStack_150 & 0xffffffff);
            func_0x000109a84868(&uStack_150);
          }
        }
        else {
          FUN_109a8a180(&uStack_150,param_2,0xffffffff);
        }
        if (lStack_140 != lVar11) {
          uStack_188 = 0;
          puStack_190 = (undefined4 *)0x0;
          uStack_178 = 0;
          uStack_180 = 0;
          FUN_109a48880(&uStack_150,&puStack_190);
        }
        iVar13 = uVar8 + 1;
        if (2 < (int)param_1[1]) {
          puStack_60 = &uStack_150;
          puStack_58 = &uStack_e0;
          uStack_50 = 0;
          uStack_158 = 0;
          uStack_188 = 0;
          uStack_180 = 0;
          puStack_190 = (undefined4 *)0x0;
          uStack_178 = uStack_178 & 0xffffffff00000000;
          uStack_170 = 0;
          uStack_168 = 0;
          uStack_160 = 0;
          puStack_68 = param_1;
          FUN_109a9b368(&puStack_190,&puStack_68,0,&uStack_80,0xffffffff);
          iVar13 = iVar13 * (int)uStack_168;
          uVar12 = 0xffffffffffffffff;
          while (uVar12 = uVar12 + 1, uVar12 < uStack_170) {
            aiStack_198[1] = 1;
            aiStack_198[0] = iVar13;
            (*pcVar4)(uStack_80,0,uStack_70,0,uStack_78,0,aiStack_198,&uStack_e8);
            FUN_109a8350c(&puStack_190);
          }
LAB_109a485cc:
          if (lStack_118 != 0) {
            piVar1 = (int *)(lStack_118 + 0x14);
            do {
              iVar13 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar13 + -1 == 0) {
              func_0x000109a848d4(&uStack_150);
            }
          }
          lStack_118 = 0;
          uStack_138 = 0;
          lStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          if (0 < uStack_150._4_4_) {
            lVar11 = 0;
            do {
              *(undefined4 *)(uStack_110 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < uStack_150._4_4_);
          }
          if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
            _free(puStack_108[-1]);
          }
          goto LAB_109a4864c;
        }
        if ((*(int **)(param_1 + 0x10))[1] == piStack_a0[1] &&
            **(int **)(param_1 + 0x10) == *piStack_a0) {
          uVar8 = param_1[2];
          if ((((*param_1 & (uint)uStack_150 & (uint)uStack_e0) >> 0xe & 1) == 0) ||
             (uVar12 = (long)(int)param_1[3] * (long)iVar13 * (long)(int)uVar8,
             uVar12 - (long)(int)uVar12 != 0)) {
            uVar12 = (ulong)(param_1[3] * iVar13);
          }
          else {
            uVar8 = 1;
          }
          puStack_190 = (undefined4 *)CONCAT44(uVar8,(int)uVar12);
          (*pcVar4)(*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 0x14),uStack_d0,uStack_90
                    ,lStack_140,uStack_100,&puStack_190,&uStack_e8);
          goto LAB_109a485cc;
        }
        goto LAB_109a4876c;
      }
    }
    puVar5 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    uStack_150 = puVar5 + 1;
    uStack_148 = 0x30;
    *(undefined1 *)(puVar5 + 0xd) = 0;
    *(undefined8 *)(puVar5 + 3) = 0x203d3d2029286874;
    *(undefined8 *)(puVar5 + 1) = 0x7065642e6b73616d;
    *(undefined8 *)(puVar5 + 7) = 0x3d3d206e636d2820;
    *(undefined8 *)(puVar5 + 5) = 0x26262055385f5643;
    *(undefined8 *)(puVar5 + 0xb) = 0x296e63203d3d206e;
    *(undefined8 *)(puVar5 + 9) = 0x636d207c7c203120;
    FUN_109ac3188(0xffffff29,&uStack_150,&UNK_10f595fe6,&UNK_10f595fed,0x158);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109a487cc);
  (*pcVar4)();
}



/* Entry: 109a48880; end: 109a48a3f;  */

code ****** FUN_109a48880(code ******param_1,code ******param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  long lVar12;
  uint uVar13;
  code *pcVar14;
  undefined4 *puVar15;
  code ******ppppppcVar16;
  code ******ppppppcVar17;
  code ******ppppppcVar18;
  code *****pppppcVar19;
  code ******ppppppcVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  code ****ppppcVar24;
  long lVar25;
  int *piVar26;
  int iVar27;
  code ******ppppppcVar28;
  code ******unaff_x22;
  code ******unaff_x23;
  ulong unaff_x24;
  int iVar29;
  ulong unaff_x27;
  undefined8 unaff_x28;
  long lVar30;
  long lVar31;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  code ***pppcStack_7e8;
  code *****pppppcStack_7e0;
  code ***pppcStack_7d8;
  code ***pppcStack_7d0;
  code ***pppcStack_7c8;
  code ***pppcStack_7c0;
  code ***pppcStack_7b8;
  undefined8 *puStack_7b0;
  code **ppcStack_7a8;
  code **ppcStack_7a0;
  code **ppcStack_798;
  undefined8 uStack_790;
  code ***pppcStack_788;
  code *****pppppcStack_780;
  code ***pppcStack_778;
  code ***pppcStack_770;
  code ***pppcStack_768;
  code ***pppcStack_760;
  code ***pppcStack_758;
  uint *puStack_750;
  code **ppcStack_748;
  code **ppcStack_740;
  code **ppcStack_738;
  int iStack_728;
  int iStack_724;
  undefined8 uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  code *****pppppcStack_708;
  code *****pppppcStack_700;
  code *****pppppcStack_6f8;
  code *****pppppcStack_6f0;
  code *****pppppcStack_6e8;
  undefined1 **ppuStack_6e0;
  code *pcStack_6d8;
  code *****pppppcStack_6c8;
  int aiStack_6c0 [2];
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined4 uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  undefined4 uStack_688;
  undefined8 uStack_680;
  code ***pppcStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  code ***pppcStack_660;
  code ***pppcStack_658;
  code ***pppcStack_650;
  code ***pppcStack_648;
  code ***pppcStack_640;
  code ***pppcStack_638;
  int *piStack_630;
  code **ppcStack_628;
  code **ppcStack_620;
  code **ppcStack_618;
  undefined8 uStack_610;
  code ***pppcStack_608;
  code ***pppcStack_600;
  code ***pppcStack_5f8;
  code ***pppcStack_5f0;
  code ***pppcStack_5e8;
  code ***pppcStack_5e0;
  code ***pppcStack_5d8;
  int *piStack_5d0;
  code **ppcStack_5c8;
  code **ppcStack_5c0;
  code **ppcStack_5b8;
  code *****pppppcStack_5b0;
  code *****pppppcStack_5a8;
  code ****appppcStack_5a0 [129];
  code *pcStack_198;
  code *****pppppcStack_190;
  code *****pppppcStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined1 *puStack_110;
  code *pcStack_108;
  code ****ppppcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  code *****pppppcStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  code *****pppppcStack_b8;
  code ****appppcStack_b0 [12];
  code *****pppppcStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  ppppcStack_f8 = (code ****)0x0;
  uStack_e0 = 0;
  pppppcStack_d8 = (code *****)0x0;
  lStack_d0 = 0;
  uStack_c8 = 0;
  ppppppcVar17 = (code ******)&ppppcStack_f8;
  ppppppcVar18 = &pppppcStack_50;
  ppppppcVar20 = (code ******)0x0;
  pppppcStack_50 = (code *****)param_1;
  FUN_109a9b368();
  if ((int)*(uint *)((long)param_1 + 4) < 1) {
    ppppcVar24 = (code ****)0x0;
  }
  else {
    ppppcVar24 = param_1[9][(ulong)*(uint *)((long)param_1 + 4) - 1];
  }
  ppppppcVar28 = (code ******)((long)ppppcVar24 * lStack_d0);
  lVar25 = -(ulong)(param_2[2] == (code *****)0x0);
  lVar12 = -(ulong)(param_2[3] == (code *****)0x0);
  lVar30 = -(ulong)(*param_2 == (code *****)0x0);
  lVar31 = -(ulong)(param_2[1] == (code *****)0x0);
  auVar10[1] = ~(byte)((ulong)lVar30 >> 8);
  auVar10[0] = ~(byte)lVar30;
  auVar10[2] = ~(byte)((ulong)lVar30 >> 0x10);
  auVar10[3] = ~(byte)((ulong)lVar30 >> 0x18);
  auVar10[4] = ~(byte)lVar31;
  auVar10[5] = ~(byte)((ulong)lVar31 >> 8);
  auVar10[6] = ~(byte)((ulong)lVar31 >> 0x10);
  auVar10[7] = ~(byte)((ulong)lVar31 >> 0x18);
  auVar10[8] = ~(byte)lVar25;
  auVar10[9] = ~(byte)((ulong)lVar25 >> 8);
  auVar10[10] = ~(byte)((ulong)lVar25 >> 0x10);
  auVar10[0xb] = ~(byte)((ulong)lVar25 >> 0x18);
  auVar10[0xc] = ~(byte)lVar12;
  auVar10[0xd] = ~(byte)((ulong)lVar12 >> 8);
  auVar10[0xe] = ~(byte)((ulong)lVar12 >> 0x10);
  auVar10[0xf] = ~(byte)((ulong)lVar12 >> 0x18);
  uVar11 = NEON_umaxv(auVar10,4);
  if ((uVar11 & 1) == 0) {
    if ((code ******)pppppcStack_d8 != (code ******)0x0) {
      param_2 = (code ******)0x0;
      do {
        ppppppcVar18 = ppppppcVar28;
        _bzero(pppppcStack_b8);
        param_2 = (code ******)((long)param_2 + 1);
        ppppppcVar17 = (code ******)&ppppcStack_f8;
        FUN_109a8350c();
      } while (param_2 < pppppcStack_d8);
    }
  }
  else if ((code ******)pppppcStack_d8 != (code ******)0x0) {
    ppppppcVar18 = (code ******)appppcStack_b0;
    ppppppcVar20 = (code ******)(ulong)(*(uint *)param_1 & 0xfff);
    ppppppcVar17 = param_2;
    FUN_109a89dc8();
    if (ppppppcVar28 != (code ******)0x0) {
      param_2 = (code ******)0x0;
      uVar22 = (ulong)(0x88442211 >> (((ulong)*(uint *)param_1 & 7) << 2)) & 0xf;
      unaff_x22 = (code ******)(uVar22 * 0xc);
      ppppppcVar16 = ppppppcVar28;
      do {
        unaff_x23 = (code ******)((long)ppppppcVar16 + uVar22 * -0xc);
        ppppppcVar20 = unaff_x22;
        if (ppppppcVar16 < unaff_x22 || unaff_x23 == (code ******)0x0) {
          ppppppcVar20 = ppppppcVar16;
        }
        ppppppcVar17 = (code ******)((long)pppppcStack_b8 + (long)param_2);
        ppppppcVar18 = (code ******)appppcStack_b0;
        _memcpy();
        param_2 = (code ******)((long)param_2 + (long)unaff_x22);
        ppppppcVar16 = unaff_x23;
      } while (param_2 < ppppppcVar28);
    }
    if ((code ******)0x1 < pppppcStack_d8) {
      param_2 = (code ******)0x1;
      do {
        FUN_109a8350c(&ppppcStack_f8);
        ppppppcVar18 = (code ******)param_1[2];
        ppppppcVar17 = (code ******)pppppcStack_b8;
        ppppppcVar20 = ppppppcVar28;
        _memcpy();
        param_2 = (code ******)((long)param_2 + 1);
      } while (param_2 < pppppcStack_d8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  puStack_110 = &stack0xfffffffffffffff0;
  pcStack_108 = FUN_109a48a40;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppcVar16 = ppppppcVar17;
  if (ppppppcVar17[2] == (code *****)0x0) goto LAB_109a49080;
  uVar22 = (ulong)*(uint *)((long)ppppppcVar17 + 4);
  if ((int)*(uint *)((long)ppppppcVar17 + 4) < 3) {
    lVar25 = (long)(int)*(uint *)((long)ppppppcVar17 + 0xc) * (long)(int)*(uint *)(ppppppcVar17 + 1)
    ;
  }
  else {
    lVar25 = 1;
    pppppcVar19 = ppppppcVar17[8];
    do {
      lVar25 = lVar25 * *(int *)pppppcVar19;
      uVar22 = uVar22 - 1;
      pppppcVar19 = (code *****)((long)pppppcVar19 + 4);
    } while (uVar22 != 0);
  }
  ppppppcVar28 = ppppppcVar20;
  if (lVar25 == 0) goto LAB_109a49080;
  if (((ulong)*ppppppcVar18 & 0x1f0000) == 0x10000) {
    pppppcVar19 = ppppppcVar18[1];
    uStack_610 = (code *****)*pppppcVar19;
    pppcStack_608 = (code ***)pppppcVar19[1];
    pppcStack_5f8 = (code ***)pppppcVar19[3];
    pppcStack_600 = (code ***)pppppcVar19[2];
    pppcStack_5e8 = (code ***)pppppcVar19[5];
    pppcStack_5f0 = (code ***)pppppcVar19[4];
    pppcStack_5d8 = (code ***)pppppcVar19[7];
    pppcStack_5e0 = (code ***)pppppcVar19[6];
    piStack_5d0 = (int *)((ulong)&uStack_610 | 8);
    ppcStack_5c8 = (code **)&ppcStack_5c0;
    ppcStack_5c0 = (code **)0x0;
    ppcStack_5b8 = (code **)0x0;
    if (pppppcVar19[7] != (code ****)0x0) {
      piVar26 = (int *)((long)pppppcVar19[7] + 0x14);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar9) {
          *piVar26 = *piVar26 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (*(int *)((long)pppppcVar19 + 4) < 3) {
      ppcStack_5c0 = (code **)*pppppcVar19[9];
      ppcStack_5b8 = (code **)pppppcVar19[9][1];
    }
    else {
      uStack_610 = (code *****)((ulong)uStack_610 & 0xffffffff);
      func_0x000109a84868(&uStack_610);
    }
  }
  else {
    FUN_109a8a180(&uStack_610,ppppppcVar18,0xffffffff);
  }
  if (((ulong)*ppppppcVar20 & 0x1f0000) == 0x10000) {
    pppppcVar19 = ppppppcVar20[1];
    uStack_670 = (code *****)*pppppcVar19;
    uStack_668 = pppppcVar19[1];
    pppcStack_658 = (code ***)pppppcVar19[3];
    pppcStack_660 = (code ***)pppppcVar19[2];
    pppcStack_648 = (code ***)pppppcVar19[5];
    pppcStack_650 = (code ***)pppppcVar19[4];
    pppcStack_638 = (code ***)pppppcVar19[7];
    pppcStack_640 = (code ***)pppppcVar19[6];
    piStack_630 = (int *)((ulong)&uStack_670 | 8);
    ppcStack_628 = (code **)&ppcStack_620;
    ppcStack_620 = (code **)0x0;
    ppcStack_618 = (code **)0x0;
    if (pppppcVar19[7] != (code ****)0x0) {
      piVar26 = (int *)((long)pppppcVar19[7] + 0x14);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar9) {
          *piVar26 = *piVar26 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (*(int *)((long)pppppcVar19 + 4) < 3) {
      ppcStack_620 = (code **)*pppppcVar19[9];
      ppcStack_618 = (code **)pppppcVar19[9][1];
    }
    else {
      uStack_670 = (code *****)((ulong)uStack_670 & 0xffffffff);
      func_0x000109a84868(&uStack_670);
    }
  }
  else {
    FUN_109a8a180(&uStack_670,ppppppcVar20,0xffffffff);
  }
  if ((uStack_610._4_4_ < 3) && (((uint)uStack_610 >> 0xe & 1) != 0)) {
    iVar23 = *piStack_5d0;
    iVar27 = piStack_5d0[1];
    if (iVar27 == 1 || iVar23 == 1) {
      uVar11 = *(uint *)ppppppcVar17 >> 3 & 0x1ff;
      iVar29 = uVar11 + 1;
      if (((iVar27 == 1 && (iVar23 == iVar29 || iVar23 == 1)) || (iVar23 == 1 && iVar27 == iVar29))
         || ((iVar27 == 1 && (((iVar23 == 4 && (uVar11 < 4)) && (((uint)uStack_610 & 0xfff) == 6))))
            )) {
        if ((code ****)pppcStack_660 != (code ****)0x0) {
          uVar22 = (ulong)uStack_670._4_4_;
          if ((int)uStack_670._4_4_ < 3) {
            lVar25 = (long)uStack_668._4_4_ * (long)(int)uStack_668;
          }
          else {
            lVar25 = 1;
            piVar26 = piStack_630;
            do {
              lVar25 = lVar25 * *piVar26;
              uVar22 = uVar22 - 1;
              piVar26 = piVar26 + 1;
            } while (uVar22 != 0);
          }
          if (lVar25 != 0) {
            if (((ulong)uStack_670 & 0xfff) == 0) {
              pppppcVar19 = ppppppcVar17[8];
              uVar11 = *(uint *)((long)pppppcVar19 + -4);
              uVar22 = (ulong)uVar11;
              if (uVar11 == piStack_630[-1]) {
                if (uVar11 == 2) {
                  if ((*(int *)pppppcVar19 != *piStack_630) ||
                     (*(int *)((long)pppppcVar19 + 4) != piStack_630[1])) goto LAB_109a48cf8;
                }
                else {
                  piVar26 = piStack_630;
                  if (0 < (int)uVar11) {
                    do {
                      if (*(int *)pppppcVar19 != *piVar26) goto LAB_109a48cf8;
                      uVar22 = uVar22 - 1;
                      pppppcVar19 = (code *****)((long)pppppcVar19 + 4);
                      piVar26 = piVar26 + 1;
                    } while (uVar22 != 0);
                  }
                }
                goto LAB_109a48d84;
              }
            }
LAB_109a48cf8:
            puVar15 = (undefined4 *)0x40;
            func_0x000107c2ae8c();
            *puVar15 = 1;
            pppppcStack_5b0 = (code *****)(puVar15 + 1);
            pppppcStack_5a8 = (code *****)0x3b;
            *(undefined8 *)(puVar15 + 3) = 0x207c7c2029287974;
            *(undefined8 *)(puVar15 + 1) = 0x706d652e6b73616d;
            *(undefined1 *)((long)puVar15 + 0x3f) = 0;
            *(undefined8 *)(puVar15 + 7) = 0x203d3d2029286570;
            *(undefined8 *)(puVar15 + 5) = 0x79742e6b73616d28;
            *(undefined8 *)(puVar15 + 0xb) = 0x3d3d20657a697320;
            *(undefined8 *)(puVar15 + 9) = 0x26262055385f5643;
            *(undefined8 *)((long)puVar15 + 0x37) = 0x29657a69732e6b73;
            *(undefined8 *)((long)puVar15 + 0x2f) = 0x616d203d3d20657a;
            FUN_109ac3188(0xffffff29,&pppppcStack_5b0,&UNK_10f5960ed,&UNK_10f595fed,0x212);
            goto LAB_109a49124;
          }
        }
LAB_109a48d84:
        if ((int)*(uint *)((long)ppppppcVar17 + 4) < 1) {
          pppcStack_678 = (code ***)0x0;
LAB_109a48dbc:
          ppppppcVar18 = *(code *******)((long)pppcStack_678 * 8 + 0x1132e8de8);
          unaff_x22 = (code ******)0x109a47910;
          if (ppppppcVar18 != (code ******)0x0) {
            unaff_x22 = ppppppcVar18;
          }
        }
        else {
          pppcStack_678 = (code ***)ppppppcVar17[9][(ulong)*(uint *)((long)ppppppcVar17 + 4) - 1];
          if (pppcStack_678 < (code ****)0x21) goto LAB_109a48dbc;
          unaff_x22 = (code ******)0x109a47910;
        }
        puStack_180 = (undefined8 *)0x0;
        if ((code ****)pppcStack_660 != (code ****)0x0) {
          uVar22 = (ulong)uStack_670._4_4_;
          if ((int)uStack_670._4_4_ < 3) {
            lVar25 = (long)uStack_668._4_4_ * (long)(int)uStack_668;
          }
          else {
            lVar25 = 1;
            piVar26 = piStack_630;
            do {
              lVar25 = lVar25 * *piVar26;
              uVar22 = uVar22 - 1;
              piVar26 = piVar26 + 1;
            } while (uVar22 != 0);
          }
          puStack_180 = (undefined8 *)0x0;
          if (lVar25 != 0) {
            puStack_180 = &uStack_670;
          }
        }
        uStack_178 = 0;
        pcStack_198 = (code *)0x0;
        pppppcStack_190 = (code *****)0x0;
        uStack_680 = 0;
        uStack_6b0 = 0;
        uStack_6a8 = 0;
        uStack_6b8 = 0;
        uStack_6a0 = 0;
        uStack_698 = 0;
        uStack_690 = 0;
        uStack_688 = 0;
        pppppcStack_188 = (code *****)ppppppcVar17;
        FUN_109a9b368(&uStack_6b8,&pppppcStack_188,0,&pcStack_198,0xffffffff);
        iVar27 = (int)uStack_690;
        unaff_x24 = uStack_690 & 0xffffffff;
        iVar23 = 0;
        if ((code ****)pppcStack_678 != (code ****)0x0) {
          iVar23 = (int)(((long)pppcStack_678 + 0x3ffU) / (ulong)pppcStack_678);
        }
        if ((int)uStack_690 <= iVar23) {
          iVar23 = (int)uStack_690;
        }
        ppppppcVar28 = (code ******)(long)iVar23;
        param_2 = (code ******)((long)pppcStack_678 * (long)ppppppcVar28 + 0x20);
        unaff_x23 = (code ******)appppcStack_5a0;
        pppppcStack_5b0 = (code *****)unaff_x23;
        ppppppcVar16 = unaff_x23;
        if ((code ******)0x408 < param_2) {
          ppppppcVar16 = param_2;
          __Znam();
          pppppcStack_5b0 = (code *****)ppppppcVar16;
        }
        pppppcStack_5a8 = (code *****)param_2;
        uVar22 = (long)ppppppcVar16 + 7;
        pppppcStack_6c8 = (code *****)ppppppcVar17;
        ppppppcVar18 = (code ******)(ulong)(*(uint *)ppppppcVar17 & 0xfff);
        ppppppcVar20 = (code ******)(uVar22 & 0xfffffffffffffff8);
        pppppcStack_5b0 = (code *****)ppppppcVar16;
        FUN_109a27738(&uStack_610,ppppppcVar18,ppppppcVar20,ppppppcVar28);
        unaff_x28 = 1;
        for (unaff_x27 = 0; unaff_x27 < uStack_698; unaff_x27 = unaff_x27 + 1) {
          if (0 < iVar27) {
            iVar29 = 0;
            do {
              iVar4 = iVar27 - iVar29;
              if (iVar23 <= iVar27 - iVar29) {
                iVar4 = iVar23;
              }
              param_2 = (code ******)((long)pppcStack_678 * (long)iVar4);
              if ((code ******)pppppcStack_190 == (code ******)0x0) {
                ppppppcVar18 = (code ******)(uVar22 & 0xfffffffffffffff8);
                ppppppcVar20 = param_2;
                _memcpy(pcStack_198);
              }
              else {
                aiStack_6c0[1] = 1;
                ppppppcVar18 = (code ******)0x0;
                ppppppcVar20 = (code ******)pppppcStack_190;
                aiStack_6c0[0] = iVar4;
                (*(code *)unaff_x22)
                          (uVar22 & 0xfffffffffffffff8,0,pppppcStack_190,0,pcStack_198,0,aiStack_6c0
                           ,&pppcStack_678);
                pppppcStack_190 = (code *****)((long)pppppcStack_190 + (long)iVar4);
              }
              pcStack_198 = pcStack_198 + (long)param_2;
              iVar29 = iVar29 + iVar23;
            } while (iVar29 < iVar27);
          }
          FUN_109a8350c(&uStack_6b8);
        }
        ppppppcVar17 = (code ******)pppppcStack_5b0;
        if ((code ******)pppppcStack_5b0 != unaff_x23 &&
            (code ******)pppppcStack_5b0 != (code ******)0x0) {
          __ZdaPv();
        }
        ppppppcVar16 = (code ******)pppppcStack_6c8;
        if ((code ****)pppcStack_638 != (code ****)0x0) {
          piVar26 = (int *)((long)pppcStack_638 + 0x14);
          do {
            iVar23 = *piVar26;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar9) {
              *piVar26 = iVar23 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar23 + -1 == 0) {
            ppppppcVar17 = (code ******)&uStack_670;
            func_0x000109a848d4();
          }
        }
        pppcStack_638 = (code ***)0x0;
        pppcStack_658 = (code ***)0x0;
        pppcStack_660 = (code ***)0x0;
        pppcStack_648 = (code ***)0x0;
        pppcStack_650 = (code ***)0x0;
        if (0 < (int)uStack_670._4_4_) {
          lVar25 = 0;
          do {
            piStack_630[lVar25] = 0;
            lVar25 = lVar25 + 1;
          } while (lVar25 < (int)uStack_670._4_4_);
        }
        if ((code ***)ppcStack_628 != &ppcStack_620 && (code ***)ppcStack_628 != (code ***)0x0) {
          ppppppcVar17 = (code ******)ppcStack_628[-1];
          _free();
        }
        if ((code ****)pppcStack_5d8 != (code ****)0x0) {
          piVar26 = (int *)((long)pppcStack_5d8 + 0x14);
          do {
            iVar23 = *piVar26;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar9) {
              *piVar26 = iVar23 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar23 + -1 == 0) {
            ppppppcVar17 = (code ******)&uStack_610;
            func_0x000109a848d4();
          }
        }
        pppcStack_5d8 = (code ***)0x0;
        pppcStack_5f8 = (code ***)0x0;
        pppcStack_600 = (code ***)0x0;
        pppcStack_5e8 = (code ***)0x0;
        pppcStack_5f0 = (code ***)0x0;
        if (0 < uStack_610._4_4_) {
          lVar25 = 0;
          do {
            piStack_5d0[lVar25] = 0;
            lVar25 = lVar25 + 1;
          } while (lVar25 < uStack_610._4_4_);
        }
        if ((code ***)ppcStack_5c8 != &ppcStack_5c0 && (code ***)ppcStack_5c8 != (code ***)0x0) {
          ppppppcVar17 = (code ******)ppcStack_5c8[-1];
          _free();
        }
LAB_109a49080:
        iVar23 = (int)ppppppcVar20;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
          return ppppppcVar16;
        }
        ___stack_chk_fail();
        if ((int)ppppppcVar18 != 0) {
          func_0x000104bd46a0();
          func_0x00010567aa40(&uStack_670);
          func_0x00010567aa40(&uStack_610);
        }
        ppppppcVar20 = ppppppcVar17;
        __Unwind_Resume();
        pcStack_6d8 = FUN_109a491e0;
        ppppppcVar16 = ppppppcVar20;
        uStack_720 = unaff_x28;
        uStack_718 = unaff_x27;
        uStack_710 = unaff_x24;
        pppppcStack_708 = (code *****)unaff_x23;
        pppppcStack_700 = (code *****)unaff_x22;
        pppppcStack_6f8 = (code *****)param_2;
        pppppcStack_6f0 = (code *****)ppppppcVar28;
        pppppcStack_6e8 = (code *****)ppppppcVar17;
        ppuStack_6e0 = &puStack_110;
        FUN_109a8d7e8();
        if ((int)ppppppcVar16 < 3) {
          FUN_109a8b004(&iStack_728,ppppppcVar20,0xffffffff);
          iVar27 = iVar23;
          if (iVar23 < 0) {
            iVar27 = 0;
            if (iStack_728 != 1) {
              iVar27 = iVar23;
            }
            if (iStack_724 == 1) {
              iVar27 = 1;
            }
          }
          if ((((iStack_728 == 1 && iVar27 != 0) && (iStack_728 != 1 || -1 < iVar27)) ||
              ((iVar27 == 0 && (iStack_724 == 1)))) ||
             ((iVar27 < 0 && ((iStack_728 == 1 && (iStack_724 == 1)))))) {
            FUN_109a8e5e8(ppppppcVar20,ppppppcVar18);
          }
          else {
            if (((ulong)*ppppppcVar20 & 0x1f0000) == 0x10000) {
              pppppcVar19 = ppppppcVar20[1];
              puStack_750 = (uint *)((ulong)&uStack_790 | 8);
              pppcStack_788 = (code ***)pppppcVar19[1];
              uStack_790 = (code *****)*pppppcVar19;
              pppcStack_778 = (code ***)pppppcVar19[3];
              pppppcStack_780 = (code *****)pppppcVar19[2];
              pppcStack_768 = (code ***)pppppcVar19[5];
              pppcStack_770 = (code ***)pppppcVar19[4];
              pppcStack_758 = (code ***)pppppcVar19[7];
              pppcStack_760 = (code ***)pppppcVar19[6];
              ppcStack_748 = (code **)&ppcStack_740;
              ppcStack_740 = (code **)0x0;
              ppcStack_738 = (code **)0x0;
              if (pppppcVar19[7] != (code ****)0x0) {
                piVar26 = (int *)((long)pppppcVar19[7] + 0x14);
                do {
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar26,0x10);
                  if (bVar9) {
                    *piVar26 = *piVar26 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              if (*(int *)((long)pppppcVar19 + 4) < 3) {
                ppcStack_740 = (code **)*pppppcVar19[9];
                ppcStack_738 = (code **)pppppcVar19[9][1];
              }
              else {
                uStack_790 = (code *****)((ulong)uStack_790 & 0xffffffff);
                func_0x000109a84868(&uStack_790);
              }
            }
            else {
              FUN_109a8a180(&uStack_790,ppppppcVar20,0xffffffff);
            }
            uVar13 = (uint)uStack_790;
            uVar11 = (uint)uStack_790 & 0xfff;
            uStack_7f0 = (code *****)CONCAT44(iStack_724,iStack_728);
            FUN_109a8ee3c(ppppppcVar18,&uStack_7f0,uVar11,0xffffffff,0,0);
            if (((ulong)*ppppppcVar18 & 0x1f0000) == 0x10000) {
              pppppcVar19 = ppppppcVar18[1];
              puStack_7b0 = (undefined8 *)((ulong)&uStack_7f0 | 8);
              pppcStack_7e8 = (code ***)pppppcVar19[1];
              uStack_7f0 = (code *****)*pppppcVar19;
              pppcStack_7d8 = (code ***)pppppcVar19[3];
              pppppcStack_7e0 = (code *****)pppppcVar19[2];
              pppcStack_7c8 = (code ***)pppppcVar19[5];
              pppcStack_7d0 = (code ***)pppppcVar19[4];
              pppcStack_7b8 = (code ***)pppppcVar19[7];
              pppcStack_7c0 = (code ***)pppppcVar19[6];
              ppcStack_7a8 = (code **)&ppcStack_7a0;
              ppcStack_7a0 = (code **)0x0;
              ppcStack_798 = (code **)0x0;
              if (pppppcVar19[7] != (code ****)0x0) {
                piVar26 = (int *)((long)pppppcVar19[7] + 0x14);
                do {
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar26,0x10);
                  if (bVar9) {
                    *piVar26 = *piVar26 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              if (*(int *)((long)pppppcVar19 + 4) < 3) {
                ppcStack_7a0 = (code **)*pppppcVar19[9];
                ppcStack_798 = (code **)pppppcVar19[9][1];
              }
              else {
                uStack_7f0 = (code *****)((ulong)uStack_7f0 & 0xffffffff);
                func_0x000109a84868(&uStack_7f0);
              }
            }
            else {
              FUN_109a8a180(&uStack_7f0,ppppppcVar18,0xffffffff);
            }
            if (iVar27 < 1) {
              uVar5 = *puStack_750;
              if (0 < (int)uVar5) {
                uVar21 = 0;
                lVar25 = (long)(int)puStack_750[1] *
                         (long)(int)((uVar11 >> 3) + 1 <<
                                    (ulong)(0xfa50U >> (ulong)((uVar13 & 7) << 1) & 3));
                ppppppcVar28 = (code ******)
                               ((long)pppppcStack_7e0 + (long)ppcStack_7a0 * (ulong)(uVar5 - 1));
                ppppppcVar17 = (code ******)
                               ((long)pppppcStack_780 + (long)ppcStack_740 * (ulong)(uVar5 - 1));
                uVar5 = uVar5 + 1 >> 1;
                iVar23 = (int)lVar25;
                ppppppcVar20 = (code ******)pppppcStack_7e0;
                ppppppcVar18 = (code ******)pppppcStack_780;
                do {
                  if ((((uint)ppppppcVar20 | (uint)ppppppcVar18 |
                       (uint)ppppppcVar17 | (uint)ppppppcVar28) & 3) == 0) {
                    if (iVar23 < 0x10) {
                      uVar22 = 0;
                    }
                    else {
                      uVar22 = 0;
                      do {
                        puVar15 = (undefined4 *)((long)ppppppcVar18 + uVar22);
                        uVar6 = *puVar15;
                        puVar1 = (undefined4 *)((long)ppppppcVar17 + uVar22);
                        puVar2 = (undefined4 *)((long)ppppppcVar20 + uVar22);
                        *puVar2 = *puVar1;
                        puVar3 = (undefined4 *)((long)ppppppcVar28 + uVar22);
                        *puVar3 = uVar6;
                        uVar6 = puVar15[1];
                        puVar2[1] = puVar1[1];
                        puVar3[1] = uVar6;
                        uVar6 = puVar15[2];
                        puVar2[2] = puVar1[2];
                        puVar3[2] = uVar6;
                        uVar6 = puVar15[3];
                        puVar2[3] = puVar1[3];
                        puVar3[3] = uVar6;
                        uVar22 = uVar22 + 0x10;
                      } while ((long)uVar22 <= lVar25 + -0x10);
                      uVar22 = uVar22 & 0xffffffff;
                    }
                    if ((int)uVar22 <= iVar23 + -4) {
                      do {
                        uVar6 = *(undefined4 *)((long)ppppppcVar18 + uVar22);
                        *(undefined4 *)((long)ppppppcVar20 + uVar22) =
                             *(undefined4 *)((long)ppppppcVar17 + uVar22);
                        *(undefined4 *)((long)ppppppcVar28 + uVar22) = uVar6;
                        uVar22 = uVar22 + 4;
                      } while ((long)uVar22 <= (long)(iVar23 + -4));
                      uVar22 = uVar22 & 0xffffffff;
                    }
                  }
                  else {
                    uVar22 = 0;
                  }
                  if ((int)uVar22 < iVar23) {
                    do {
                      uVar7 = *(undefined1 *)((long)ppppppcVar18 + uVar22);
                      *(undefined1 *)((long)ppppppcVar20 + uVar22) =
                           *(undefined1 *)((long)ppppppcVar17 + uVar22);
                      *(undefined1 *)((long)ppppppcVar28 + uVar22) = uVar7;
                      uVar22 = uVar22 + 1;
                    } while ((long)uVar22 < (long)iVar23);
                  }
                  uVar21 = uVar21 + 1;
                  ppppppcVar18 = (code ******)((long)ppppppcVar18 + (long)ppcStack_740);
                  ppppppcVar17 = (code ******)((long)ppppppcVar17 - (long)ppcStack_740);
                  ppppppcVar20 = (code ******)((long)ppppppcVar20 + (long)ppcStack_7a0);
                  ppppppcVar28 = (code ******)((long)ppppppcVar28 - (long)ppcStack_7a0);
                } while (uVar21 != uVar5);
              }
              ppppppcVar20 = (code ******)(ulong)uVar5;
              if (iVar27 < 0) {
                uStack_7f8 = NEON_rev64(*puStack_7b0,4);
                ppppppcVar20 = (code ******)pppppcStack_7e0;
                FUN_109a4977c(pppppcStack_7e0,ppcStack_7a0,pppppcStack_7e0,ppcStack_7a0,&uStack_7f8)
                ;
              }
            }
            else {
              uStack_7f8 = NEON_rev64(*(undefined8 *)puStack_750,4);
              ppppppcVar20 = (code ******)pppppcStack_780;
              FUN_109a4977c(pppppcStack_780,ppcStack_740,pppppcStack_7e0,ppcStack_7a0,&uStack_7f8);
            }
            if ((code ****)pppcStack_7b8 != (code ****)0x0) {
              piVar26 = (int *)((long)pppcStack_7b8 + 0x14);
              do {
                iVar23 = *piVar26;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar26,0x10);
                if (bVar9) {
                  *piVar26 = iVar23 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar23 + -1 == 0) {
                ppppppcVar20 = (code ******)&uStack_7f0;
                func_0x000109a848d4(ppppppcVar20);
              }
            }
            pppcStack_7b8 = (code ***)0x0;
            pppcStack_7d8 = (code ***)0x0;
            pppppcStack_7e0 = (code *****)0x0;
            pppcStack_7c8 = (code ***)0x0;
            pppcStack_7d0 = (code ***)0x0;
            if (0 < uStack_7f0._4_4_) {
              lVar25 = 0;
              do {
                *(undefined4 *)((long)puStack_7b0 + lVar25 * 4) = 0;
                lVar25 = lVar25 + 1;
              } while (lVar25 < uStack_7f0._4_4_);
            }
            if ((code ***)ppcStack_7a8 != &ppcStack_7a0 && (code ***)ppcStack_7a8 != (code ***)0x0)
            {
              ppppppcVar20 = (code ******)ppcStack_7a8[-1];
              _free(ppppppcVar20);
            }
            if ((code ****)pppcStack_758 != (code ****)0x0) {
              piVar26 = (int *)((long)pppcStack_758 + 0x14);
              do {
                iVar23 = *piVar26;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar26,0x10);
                if (bVar9) {
                  *piVar26 = iVar23 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar23 + -1 == 0) {
                ppppppcVar20 = (code ******)&uStack_790;
                func_0x000109a848d4(ppppppcVar20);
              }
            }
            pppcStack_758 = (code ***)0x0;
            pppcStack_778 = (code ***)0x0;
            pppppcStack_780 = (code *****)0x0;
            pppcStack_768 = (code ***)0x0;
            pppcStack_770 = (code ***)0x0;
            if (0 < uStack_790._4_4_) {
              lVar25 = 0;
              do {
                puStack_750[lVar25] = 0;
                lVar25 = lVar25 + 1;
              } while (lVar25 < uStack_790._4_4_);
            }
            if ((code ***)ppcStack_748 != &ppcStack_740 && (code ***)ppcStack_748 != (code ***)0x0)
            {
              ppppppcVar20 = (code ******)ppcStack_748[-1];
              _free(ppppppcVar20);
            }
          }
          return ppppppcVar20;
        }
        puVar15 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar15 = 1;
        uStack_790 = (code *****)(puVar15 + 1);
        pppcStack_788 = (code ***)0x10;
        *(undefined1 *)(puVar15 + 5) = 0;
        *(undefined8 *)(puVar15 + 3) = 0x32203d3c20292873;
        *(undefined8 *)(puVar15 + 1) = 0x6d69642e6372735f;
        FUN_109ac3188(0xffffff29,&uStack_790,&DAT_10f4909f0,&UNK_10f595fed,0x30a);
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x109a49724);
        (*pcVar14)();
      }
    }
  }
  puVar15 = (undefined4 *)0x44;
  func_0x000107c2ae8c();
  *puVar15 = 1;
  pppppcStack_5b0 = (code *****)(puVar15 + 1);
  pppppcStack_5a8 = (code *****)0x3c;
  *(undefined8 *)(puVar15 + 3) = 0x756c61762872616c;
  *(undefined8 *)(puVar15 + 1) = 0x6163536b63656863;
  *(undefined1 *)(puVar15 + 0x10) = 0;
  *(undefined8 *)(puVar15 + 7) = 0x756c61765f202c29;
  *(undefined8 *)(puVar15 + 5) = 0x2865707974202c65;
  *(undefined8 *)(puVar15 + 0xb) = 0x7475706e495f202c;
  *(undefined8 *)(puVar15 + 9) = 0x2928646e696b2e65;
  *(undefined8 *)(puVar15 + 0xe) = 0x292054414d3a3a79;
  *(undefined8 *)(puVar15 + 0xc) = 0x617272417475706e;
  FUN_109ac3188(0xffffff29,&pppppcStack_5b0,&UNK_10f5960ed,&UNK_10f595fed,0x211);
LAB_109a49124:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x109a49128);
  (*pcVar14)();
}



/* Entry: 109a48a40; end: 109a491df;  */

uint * FUN_109a48a40(uint *param_1,uint *param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  undefined4 *puVar13;
  uint *puVar14;
  ulong *puVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  int *piVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  int iVar25;
  uint *unaff_x20;
  uint *unaff_x21;
  code *unaff_x22;
  uint *unaff_x23;
  ulong unaff_x24;
  int iVar26;
  ulong unaff_x27;
  undefined8 unaff_x28;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  ulong uStack_6e8;
  uint *puStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  undefined8 *puStack_6b0;
  long *plStack_6a8;
  long lStack_6a0;
  long lStack_698;
  undefined8 uStack_690;
  ulong uStack_688;
  uint *puStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  uint *puStack_650;
  long *plStack_648;
  long lStack_640;
  long lStack_638;
  int iStack_628;
  int iStack_624;
  undefined8 uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  uint *puStack_608;
  code *pcStack_600;
  uint *puStack_5f8;
  uint *puStack_5f0;
  uint *puStack_5e8;
  undefined1 *puStack_5e0;
  code *pcStack_5d8;
  uint *puStack_5c8;
  int aiStack_5c0 [2];
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined4 uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  undefined4 uStack_588;
  undefined8 uStack_580;
  ulong uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  int *piStack_530;
  undefined8 *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  int *piStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  uint *puStack_4b0;
  uint *puStack_4a8;
  uint auStack_4a0 [258];
  long lStack_98;
  uint *puStack_90;
  uint *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_1;
  if (*(long *)(param_1 + 4) == 0) goto LAB_109a49080;
  uVar17 = (ulong)param_1[1];
  if ((int)param_1[1] < 3) {
    lVar19 = (long)(int)param_1[3] * (long)(int)param_1[2];
  }
  else {
    lVar19 = 1;
    piVar20 = *(int **)(param_1 + 0x10);
    do {
      lVar19 = lVar19 * *piVar20;
      uVar17 = uVar17 - 1;
      piVar20 = piVar20 + 1;
    } while (uVar17 != 0);
  }
  unaff_x20 = param_3;
  if (lVar19 == 0) goto LAB_109a49080;
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar15 = *(ulong **)(param_2 + 2);
    piStack_4d0 = (int *)((ulong)&uStack_510 | 8);
    uStack_508 = puVar15[1];
    uStack_510 = *puVar15;
    uStack_4f8 = puVar15[3];
    uStack_500 = puVar15[2];
    uStack_4e8 = puVar15[5];
    uStack_4f0 = puVar15[4];
    uStack_4d8 = puVar15[7];
    uStack_4e0 = puVar15[6];
    puStack_4c8 = &uStack_4c0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    if (puVar15[7] != 0) {
      piVar20 = (int *)(puVar15[7] + 0x14);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar9) {
          *piVar20 = *piVar20 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (*(int *)((long)puVar15 + 4) < 3) {
      uStack_4c0 = *(undefined8 *)puVar15[9];
      uStack_4b8 = ((undefined8 *)puVar15[9])[1];
    }
    else {
      uStack_510 = uStack_510 & 0xffffffff;
      func_0x000109a84868(&uStack_510);
    }
  }
  else {
    FUN_109a8a180(&uStack_510,param_2,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar15 = *(ulong **)(param_3 + 2);
    piStack_530 = (int *)((ulong)&uStack_570 | 8);
    uStack_568 = puVar15[1];
    uStack_570 = *puVar15;
    uStack_558 = puVar15[3];
    uStack_560 = puVar15[2];
    uStack_548 = puVar15[5];
    uStack_550 = puVar15[4];
    uStack_538 = puVar15[7];
    uStack_540 = puVar15[6];
    puStack_528 = &uStack_520;
    uStack_520 = 0;
    uStack_518 = 0;
    if (puVar15[7] != 0) {
      piVar20 = (int *)(puVar15[7] + 0x14);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar9) {
          *piVar20 = *piVar20 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (*(int *)((long)puVar15 + 4) < 3) {
      uStack_520 = *(undefined8 *)puVar15[9];
      uStack_518 = ((undefined8 *)puVar15[9])[1];
    }
    else {
      uStack_570 = uStack_570 & 0xffffffff;
      func_0x000109a84868(&uStack_570);
    }
  }
  else {
    FUN_109a8a180(&uStack_570,param_3,0xffffffff);
  }
  if ((uStack_510._4_4_ < 3) && (((uint)uStack_510 >> 0xe & 1) != 0)) {
    iVar18 = *piStack_4d0;
    iVar25 = piStack_4d0[1];
    if (iVar25 == 1 || iVar18 == 1) {
      uVar10 = *param_1 >> 3 & 0x1ff;
      iVar26 = uVar10 + 1;
      if (((iVar25 == 1 && (iVar18 == iVar26 || iVar18 == 1)) || (iVar18 == 1 && iVar25 == iVar26))
         || ((iVar25 == 1 && (((iVar18 == 4 && (uVar10 < 4)) && (((uint)uStack_510 & 0xfff) == 6))))
            )) {
        if (uStack_560 != 0) {
          uVar17 = (ulong)uStack_570._4_4_;
          if ((int)uStack_570._4_4_ < 3) {
            lVar19 = (long)uStack_568._4_4_ * (long)(int)uStack_568;
          }
          else {
            lVar19 = 1;
            piVar20 = piStack_530;
            do {
              lVar19 = lVar19 * *piVar20;
              uVar17 = uVar17 - 1;
              piVar20 = piVar20 + 1;
            } while (uVar17 != 0);
          }
          if (lVar19 != 0) {
            if ((uStack_570 & 0xfff) == 0) {
              piVar20 = *(int **)(param_1 + 0x10);
              uVar10 = piVar20[-1];
              uVar17 = (ulong)uVar10;
              if (uVar10 == piStack_530[-1]) {
                if (uVar10 == 2) {
                  if ((*piVar20 != *piStack_530) || (piVar20[1] != piStack_530[1]))
                  goto LAB_109a48cf8;
                }
                else {
                  piVar21 = piStack_530;
                  if (0 < (int)uVar10) {
                    do {
                      if (*piVar20 != *piVar21) goto LAB_109a48cf8;
                      uVar17 = uVar17 - 1;
                      piVar20 = piVar20 + 1;
                      piVar21 = piVar21 + 1;
                    } while (uVar17 != 0);
                  }
                }
                goto LAB_109a48d84;
              }
            }
LAB_109a48cf8:
            puVar13 = (undefined4 *)0x40;
            func_0x000107c2ae8c();
            *puVar13 = 1;
            puStack_4b0 = puVar13 + 1;
            puStack_4a8 = (uint *)0x3b;
            *(undefined8 *)(puVar13 + 3) = 0x207c7c2029287974;
            *(undefined8 *)(puVar13 + 1) = 0x706d652e6b73616d;
            *(undefined1 *)((long)puVar13 + 0x3f) = 0;
            *(undefined8 *)(puVar13 + 7) = 0x203d3d2029286570;
            *(undefined8 *)(puVar13 + 5) = 0x79742e6b73616d28;
            *(undefined8 *)(puVar13 + 0xb) = 0x3d3d20657a697320;
            *(undefined8 *)(puVar13 + 9) = 0x26262055385f5643;
            *(undefined8 *)((long)puVar13 + 0x37) = 0x29657a69732e6b73;
            *(undefined8 *)((long)puVar13 + 0x2f) = 0x616d203d3d20657a;
            FUN_109ac3188(0xffffff29,&puStack_4b0,&UNK_10f5960ed,&UNK_10f595fed,0x212);
            goto LAB_109a49124;
          }
        }
LAB_109a48d84:
        if ((int)param_1[1] < 1) {
          uStack_578 = 0;
LAB_109a48dbc:
          pcVar12 = *(code **)(uStack_578 * 8 + 0x1132e8de8);
          unaff_x22 = (code *)0x109a47910;
          if (pcVar12 != (code *)0x0) {
            unaff_x22 = pcVar12;
          }
        }
        else {
          uStack_578 = *(ulong *)(*(long *)(param_1 + 0x12) + (ulong)param_1[1] * 8 + -8);
          if (uStack_578 < 0x21) goto LAB_109a48dbc;
          unaff_x22 = (code *)0x109a47910;
        }
        puStack_80 = (undefined8 *)0x0;
        if (uStack_560 != 0) {
          uVar17 = (ulong)uStack_570._4_4_;
          if ((int)uStack_570._4_4_ < 3) {
            lVar19 = (long)uStack_568._4_4_ * (long)(int)uStack_568;
          }
          else {
            lVar19 = 1;
            piVar20 = piStack_530;
            do {
              lVar19 = lVar19 * *piVar20;
              uVar17 = uVar17 - 1;
              piVar20 = piVar20 + 1;
            } while (uVar17 != 0);
          }
          puStack_80 = (undefined8 *)0x0;
          if (lVar19 != 0) {
            puStack_80 = &uStack_570;
          }
        }
        uStack_78 = 0;
        lStack_98 = 0;
        puStack_90 = (uint *)0x0;
        uStack_580 = 0;
        uStack_5b0 = 0;
        uStack_5a8 = 0;
        uStack_5b8 = 0;
        uStack_5a0 = 0;
        uStack_598 = 0;
        uStack_590 = 0;
        uStack_588 = 0;
        puStack_88 = param_1;
        FUN_109a9b368(&uStack_5b8,&puStack_88,0,&lStack_98,0xffffffff);
        iVar25 = (int)uStack_590;
        unaff_x24 = uStack_590 & 0xffffffff;
        iVar18 = 0;
        if (uStack_578 != 0) {
          iVar18 = (int)((uStack_578 + 0x3ff) / uStack_578);
        }
        if ((int)uStack_590 <= iVar18) {
          iVar18 = (int)uStack_590;
        }
        unaff_x20 = (uint *)(long)iVar18;
        unaff_x21 = (uint *)(uStack_578 * (long)unaff_x20 + 0x20);
        unaff_x23 = auStack_4a0;
        puVar14 = unaff_x23;
        if ((uint *)0x408 < unaff_x21) {
          puVar14 = unaff_x21;
          puStack_4b0 = unaff_x23;
          __Znam();
        }
        uVar17 = (long)puVar14 + 7;
        param_2 = (uint *)(ulong)(*param_1 & 0xfff);
        param_3 = (uint *)(uVar17 & 0xfffffffffffffff8);
        puStack_5c8 = param_1;
        puStack_4b0 = puVar14;
        puStack_4a8 = unaff_x21;
        FUN_109a27738(&uStack_510,param_2,param_3,unaff_x20);
        unaff_x28 = 1;
        for (unaff_x27 = 0; unaff_x27 < uStack_598; unaff_x27 = unaff_x27 + 1) {
          if (0 < iVar25) {
            iVar26 = 0;
            do {
              iVar4 = iVar25 - iVar26;
              if (iVar18 <= iVar25 - iVar26) {
                iVar4 = iVar18;
              }
              unaff_x21 = (uint *)(uStack_578 * (long)iVar4);
              if (puStack_90 == (uint *)0x0) {
                param_2 = (uint *)(uVar17 & 0xfffffffffffffff8);
                param_3 = unaff_x21;
                _memcpy(lStack_98);
              }
              else {
                aiStack_5c0[1] = 1;
                param_2 = (uint *)0x0;
                param_3 = puStack_90;
                aiStack_5c0[0] = iVar4;
                (*unaff_x22)(uVar17 & 0xfffffffffffffff8,0,puStack_90,0,lStack_98,0,aiStack_5c0,
                             &uStack_578);
                puStack_90 = (uint *)((long)puStack_90 + (long)iVar4);
              }
              lStack_98 = lStack_98 + (long)unaff_x21;
              iVar26 = iVar26 + iVar18;
            } while (iVar26 < iVar25);
          }
          FUN_109a8350c(&uStack_5b8);
        }
        param_1 = puStack_4b0;
        if (puStack_4b0 != unaff_x23 && puStack_4b0 != (uint *)0x0) {
          __ZdaPv();
        }
        puVar14 = puStack_5c8;
        if (uStack_538 != 0) {
          piVar20 = (int *)(uStack_538 + 0x14);
          do {
            iVar18 = *piVar20;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar9) {
              *piVar20 = iVar18 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar18 + -1 == 0) {
            param_1 = (uint *)&uStack_570;
            func_0x000109a848d4();
          }
        }
        uStack_538 = 0;
        uStack_558 = 0;
        uStack_560 = 0;
        uStack_548 = 0;
        uStack_550 = 0;
        if (0 < (int)uStack_570._4_4_) {
          lVar19 = 0;
          do {
            piStack_530[lVar19] = 0;
            lVar19 = lVar19 + 1;
          } while (lVar19 < (int)uStack_570._4_4_);
        }
        if (puStack_528 != &uStack_520 && puStack_528 != (undefined8 *)0x0) {
          param_1 = (uint *)puStack_528[-1];
          _free();
        }
        if (uStack_4d8 != 0) {
          piVar20 = (int *)(uStack_4d8 + 0x14);
          do {
            iVar18 = *piVar20;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar9) {
              *piVar20 = iVar18 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar18 + -1 == 0) {
            param_1 = (uint *)&uStack_510;
            func_0x000109a848d4();
          }
        }
        uStack_4d8 = 0;
        uStack_4f8 = 0;
        uStack_500 = 0;
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        if (0 < uStack_510._4_4_) {
          lVar19 = 0;
          do {
            piStack_4d0[lVar19] = 0;
            lVar19 = lVar19 + 1;
          } while (lVar19 < uStack_510._4_4_);
        }
        if (puStack_4c8 != &uStack_4c0 && puStack_4c8 != (undefined8 *)0x0) {
          param_1 = (uint *)puStack_4c8[-1];
          _free();
        }
LAB_109a49080:
        iVar18 = (int)param_3;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          return puVar14;
        }
        ___stack_chk_fail();
        if ((int)param_2 != 0) {
          func_0x000104bd46a0();
          func_0x00010567aa40(&uStack_570);
          func_0x00010567aa40(&uStack_510);
        }
        puVar14 = param_1;
        __Unwind_Resume();
        pcStack_5d8 = FUN_109a491e0;
        puVar24 = puVar14;
        uStack_620 = unaff_x28;
        uStack_618 = unaff_x27;
        uStack_610 = unaff_x24;
        puStack_608 = unaff_x23;
        pcStack_600 = unaff_x22;
        puStack_5f8 = unaff_x21;
        puStack_5f0 = unaff_x20;
        puStack_5e8 = param_1;
        puStack_5e0 = &stack0xfffffffffffffff0;
        FUN_109a8d7e8();
        if ((int)puVar24 < 3) {
          FUN_109a8b004(&iStack_628,puVar14,0xffffffff);
          iVar25 = iVar18;
          if (iVar18 < 0) {
            iVar25 = 0;
            if (iStack_628 != 1) {
              iVar25 = iVar18;
            }
            if (iStack_624 == 1) {
              iVar25 = 1;
            }
          }
          if ((((iStack_628 == 1 && iVar25 != 0) && (iStack_628 != 1 || -1 < iVar25)) ||
              ((iVar25 == 0 && (iStack_624 == 1)))) ||
             ((iVar25 < 0 && ((iStack_628 == 1 && (iStack_624 == 1)))))) {
            FUN_109a8e5e8(puVar14,param_2);
          }
          else {
            if ((*puVar14 & 0x1f0000) == 0x10000) {
              puVar15 = *(ulong **)(puVar14 + 2);
              puStack_650 = (uint *)((ulong)&uStack_690 | 8);
              uStack_688 = puVar15[1];
              uStack_690 = (undefined4 *)*puVar15;
              uStack_678 = puVar15[3];
              puStack_680 = (uint *)puVar15[2];
              uStack_668 = puVar15[5];
              uStack_670 = puVar15[4];
              uStack_658 = puVar15[7];
              uStack_660 = puVar15[6];
              plStack_648 = &lStack_640;
              lStack_640 = 0;
              lStack_638 = 0;
              if (puVar15[7] != 0) {
                piVar20 = (int *)(puVar15[7] + 0x14);
                do {
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                  if (bVar9) {
                    *piVar20 = *piVar20 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              if (*(int *)((long)puVar15 + 4) < 3) {
                lStack_640 = *(long *)puVar15[9];
                lStack_638 = ((long *)puVar15[9])[1];
              }
              else {
                uStack_690 = (undefined4 *)((ulong)uStack_690 & 0xffffffff);
                func_0x000109a84868(&uStack_690);
              }
            }
            else {
              FUN_109a8a180(&uStack_690,puVar14,0xffffffff);
            }
            uVar11 = (uint)uStack_690;
            uVar10 = (uint)uStack_690 & 0xfff;
            uStack_6f0 = CONCAT44(iStack_624,iStack_628);
            FUN_109a8ee3c(param_2,&uStack_6f0,uVar10,0xffffffff,0,0);
            if ((*param_2 & 0x1f0000) == 0x10000) {
              puVar15 = *(ulong **)(param_2 + 2);
              puStack_6b0 = (undefined8 *)((ulong)&uStack_6f0 | 8);
              uStack_6e8 = puVar15[1];
              uStack_6f0 = *puVar15;
              uStack_6d8 = puVar15[3];
              puStack_6e0 = (uint *)puVar15[2];
              uStack_6c8 = puVar15[5];
              uStack_6d0 = puVar15[4];
              uStack_6b8 = puVar15[7];
              uStack_6c0 = puVar15[6];
              plStack_6a8 = &lStack_6a0;
              lStack_6a0 = 0;
              lStack_698 = 0;
              if (puVar15[7] != 0) {
                piVar20 = (int *)(puVar15[7] + 0x14);
                do {
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                  if (bVar9) {
                    *piVar20 = *piVar20 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              if (*(int *)((long)puVar15 + 4) < 3) {
                lStack_6a0 = *(long *)puVar15[9];
                lStack_698 = ((long *)puVar15[9])[1];
              }
              else {
                uStack_6f0 = uStack_6f0 & 0xffffffff;
                func_0x000109a84868(&uStack_6f0);
              }
            }
            else {
              FUN_109a8a180(&uStack_6f0,param_2,0xffffffff);
            }
            if (iVar25 < 1) {
              uVar5 = *puStack_650;
              if (0 < (int)uVar5) {
                uVar16 = 0;
                lVar19 = (long)(int)puStack_650[1] *
                         (long)(int)((uVar10 >> 3) + 1 <<
                                    (ulong)(0xfa50U >> (ulong)((uVar11 & 7) << 1) & 3));
                puVar23 = (uint *)((long)puStack_6e0 + lStack_6a0 * (ulong)(uVar5 - 1));
                puVar24 = (uint *)((long)puStack_680 + lStack_640 * (ulong)(uVar5 - 1));
                uVar5 = uVar5 + 1 >> 1;
                iVar18 = (int)lVar19;
                puVar22 = puStack_6e0;
                puVar14 = puStack_680;
                do {
                  if ((((uint)puVar22 | (uint)puVar14 | (uint)puVar24 | (uint)puVar23) & 3) == 0) {
                    if (iVar18 < 0x10) {
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = 0;
                      do {
                        puVar13 = (undefined4 *)((long)puVar14 + uVar17);
                        uVar6 = *puVar13;
                        puVar1 = (undefined4 *)((long)puVar24 + uVar17);
                        puVar2 = (undefined4 *)((long)puVar22 + uVar17);
                        *puVar2 = *puVar1;
                        puVar3 = (undefined4 *)((long)puVar23 + uVar17);
                        *puVar3 = uVar6;
                        uVar6 = puVar13[1];
                        puVar2[1] = puVar1[1];
                        puVar3[1] = uVar6;
                        uVar6 = puVar13[2];
                        puVar2[2] = puVar1[2];
                        puVar3[2] = uVar6;
                        uVar6 = puVar13[3];
                        puVar2[3] = puVar1[3];
                        puVar3[3] = uVar6;
                        uVar17 = uVar17 + 0x10;
                      } while ((long)uVar17 <= lVar19 + -0x10);
                      uVar17 = uVar17 & 0xffffffff;
                    }
                    if ((int)uVar17 <= iVar18 + -4) {
                      do {
                        uVar6 = *(undefined4 *)((long)puVar14 + uVar17);
                        *(undefined4 *)((long)puVar22 + uVar17) =
                             *(undefined4 *)((long)puVar24 + uVar17);
                        *(undefined4 *)((long)puVar23 + uVar17) = uVar6;
                        uVar17 = uVar17 + 4;
                      } while ((long)uVar17 <= (long)(iVar18 + -4));
                      uVar17 = uVar17 & 0xffffffff;
                    }
                  }
                  else {
                    uVar17 = 0;
                  }
                  if ((int)uVar17 < iVar18) {
                    do {
                      uVar7 = *(undefined1 *)((long)puVar14 + uVar17);
                      *(undefined1 *)((long)puVar22 + uVar17) =
                           *(undefined1 *)((long)puVar24 + uVar17);
                      *(undefined1 *)((long)puVar23 + uVar17) = uVar7;
                      uVar17 = uVar17 + 1;
                    } while ((long)uVar17 < (long)iVar18);
                  }
                  uVar16 = uVar16 + 1;
                  puVar14 = (uint *)((long)puVar14 + lStack_640);
                  puVar24 = (uint *)((long)puVar24 - lStack_640);
                  puVar22 = (uint *)((long)puVar22 + lStack_6a0);
                  puVar23 = (uint *)((long)puVar23 - lStack_6a0);
                } while (uVar16 != uVar5);
              }
              puVar14 = (uint *)(ulong)uVar5;
              if (iVar25 < 0) {
                uStack_6f8 = NEON_rev64(*puStack_6b0,4);
                puVar14 = puStack_6e0;
                FUN_109a4977c(puStack_6e0,lStack_6a0,puStack_6e0,lStack_6a0,&uStack_6f8);
              }
            }
            else {
              uStack_6f8 = NEON_rev64(*(undefined8 *)puStack_650,4);
              puVar14 = puStack_680;
              FUN_109a4977c(puStack_680,lStack_640,puStack_6e0,lStack_6a0,&uStack_6f8);
            }
            if (uStack_6b8 != 0) {
              piVar20 = (int *)(uStack_6b8 + 0x14);
              do {
                iVar18 = *piVar20;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                if (bVar9) {
                  *piVar20 = iVar18 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar18 + -1 == 0) {
                puVar14 = (uint *)&uStack_6f0;
                func_0x000109a848d4(puVar14);
              }
            }
            uStack_6b8 = 0;
            uStack_6d8 = 0;
            puStack_6e0 = (uint *)0x0;
            uStack_6c8 = 0;
            uStack_6d0 = 0;
            if (0 < uStack_6f0._4_4_) {
              lVar19 = 0;
              do {
                *(undefined4 *)((long)puStack_6b0 + lVar19 * 4) = 0;
                lVar19 = lVar19 + 1;
              } while (lVar19 < uStack_6f0._4_4_);
            }
            if (plStack_6a8 != &lStack_6a0 && plStack_6a8 != (long *)0x0) {
              puVar14 = (uint *)plStack_6a8[-1];
              _free(puVar14);
            }
            if (uStack_658 != 0) {
              piVar20 = (int *)(uStack_658 + 0x14);
              do {
                iVar18 = *piVar20;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                if (bVar9) {
                  *piVar20 = iVar18 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar18 + -1 == 0) {
                puVar14 = (uint *)&uStack_690;
                func_0x000109a848d4(puVar14);
              }
            }
            uStack_658 = 0;
            uStack_678 = 0;
            puStack_680 = (uint *)0x0;
            uStack_668 = 0;
            uStack_670 = 0;
            if (0 < uStack_690._4_4_) {
              lVar19 = 0;
              do {
                puStack_650[lVar19] = 0;
                lVar19 = lVar19 + 1;
              } while (lVar19 < uStack_690._4_4_);
            }
            if (plStack_648 != &lStack_640 && plStack_648 != (long *)0x0) {
              puVar14 = (uint *)plStack_648[-1];
              _free(puVar14);
            }
          }
          return puVar14;
        }
        puVar13 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar13 = 1;
        uStack_690 = puVar13 + 1;
        uStack_688 = 0x10;
        *(undefined1 *)(puVar13 + 5) = 0;
        *(undefined8 *)(puVar13 + 3) = 0x32203d3c20292873;
        *(undefined8 *)(puVar13 + 1) = 0x6d69642e6372735f;
        FUN_109ac3188(0xffffff29,&uStack_690,&DAT_10f4909f0,&UNK_10f595fed,0x30a);
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x109a49724);
        (*pcVar12)();
      }
    }
  }
  puVar13 = (undefined4 *)0x44;
  func_0x000107c2ae8c();
  *puVar13 = 1;
  puStack_4b0 = puVar13 + 1;
  puStack_4a8 = (uint *)0x3c;
  *(undefined8 *)(puVar13 + 3) = 0x756c61762872616c;
  *(undefined8 *)(puVar13 + 1) = 0x6163536b63656863;
  *(undefined1 *)(puVar13 + 0x10) = 0;
  *(undefined8 *)(puVar13 + 7) = 0x756c61765f202c29;
  *(undefined8 *)(puVar13 + 5) = 0x2865707974202c65;
  *(undefined8 *)(puVar13 + 0xb) = 0x7475706e495f202c;
  *(undefined8 *)(puVar13 + 9) = 0x2928646e696b2e65;
  *(undefined8 *)(puVar13 + 0xe) = 0x292054414d3a3a79;
  *(undefined8 *)(puVar13 + 0xc) = 0x617272417475706e;
  FUN_109ac3188(0xffffff29,&puStack_4b0,&UNK_10f5960ed,&UNK_10f595fed,0x211);
LAB_109a49124:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x109a49128);
  (*pcVar12)();
}



/* Entry: 109a491e0; end: 109a4977b;  */

void FUN_109a491e0(uint *param_1,uint *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  code *pcVar12;
  uint *puVar13;
  undefined4 *puVar14;
  ulong *puVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  int *piStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  int iStack_58;
  int iStack_54;
  
  puVar13 = param_1;
  FUN_109a8d7e8(param_1,0xffffffff);
  if ((int)puVar13 < 3) {
    FUN_109a8b004(&iStack_58,param_1,0xffffffff);
    iVar24 = param_3;
    if (param_3 < 0) {
      iVar24 = 0;
      if (iStack_58 != 1) {
        iVar24 = param_3;
      }
      if (iStack_54 == 1) {
        iVar24 = 1;
      }
    }
    if ((((iStack_58 == 1 && iVar24 != 0) && (iStack_58 != 1 || -1 < iVar24)) ||
        ((iVar24 == 0 && (iStack_54 == 1)))) ||
       ((iVar24 < 0 && ((iStack_58 == 1 && (iStack_54 == 1)))))) {
      FUN_109a8e5e8(param_1,param_2);
    }
    else {
      if ((*param_1 & 0x1f0000) == 0x10000) {
        puVar15 = *(ulong **)(param_1 + 2);
        piStack_80 = (int *)((ulong)&uStack_c0 | 8);
        uStack_b8 = puVar15[1];
        uStack_c0 = (undefined4 *)*puVar15;
        uStack_a8 = puVar15[3];
        uStack_b0 = puVar15[2];
        uStack_98 = puVar15[5];
        uStack_a0 = puVar15[4];
        uStack_88 = puVar15[7];
        uStack_90 = puVar15[6];
        plStack_78 = &lStack_70;
        lStack_70 = 0;
        lStack_68 = 0;
        if (puVar15[7] != 0) {
          piVar1 = (int *)(puVar15[7] + 0x14);
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = *piVar1 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        if (*(int *)((long)puVar15 + 4) < 3) {
          lStack_70 = *(long *)puVar15[9];
          lStack_68 = ((long *)puVar15[9])[1];
        }
        else {
          uStack_c0 = (undefined4 *)((ulong)uStack_c0 & 0xffffffff);
          func_0x000109a84868(&uStack_c0);
        }
      }
      else {
        FUN_109a8a180(&uStack_c0,param_1,0xffffffff);
      }
      uVar11 = (uint)uStack_c0;
      uVar5 = (uint)uStack_c0 & 0xfff;
      uStack_120 = CONCAT44(iStack_54,iStack_58);
      FUN_109a8ee3c(param_2,&uStack_120,uVar5,0xffffffff,0,0);
      if ((*param_2 & 0x1f0000) == 0x10000) {
        puVar15 = *(ulong **)(param_2 + 2);
        puStack_e0 = (undefined8 *)((ulong)&uStack_120 | 8);
        uStack_118 = puVar15[1];
        uStack_120 = *puVar15;
        uStack_108 = puVar15[3];
        uStack_110 = puVar15[2];
        uStack_f8 = puVar15[5];
        uStack_100 = puVar15[4];
        uStack_e8 = puVar15[7];
        uStack_f0 = puVar15[6];
        plStack_d8 = &lStack_d0;
        lStack_d0 = 0;
        lStack_c8 = 0;
        if (puVar15[7] != 0) {
          piVar1 = (int *)(puVar15[7] + 0x14);
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = *piVar1 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        if (*(int *)((long)puVar15 + 4) < 3) {
          lStack_d0 = *(long *)puVar15[9];
          lStack_c8 = ((long *)puVar15[9])[1];
        }
        else {
          uStack_120 = uStack_120 & 0xffffffff;
          func_0x000109a84868(&uStack_120);
        }
      }
      else {
        FUN_109a8a180(&uStack_120,param_2,0xffffffff);
      }
      if (iVar24 < 1) {
        iVar6 = *piStack_80;
        if (0 < iVar6) {
          uVar17 = 0;
          lVar20 = (long)piStack_80[1] *
                   (long)(int)((uVar5 >> 3) + 1 <<
                              (ulong)(0xfa50U >> (ulong)((uVar11 & 7) << 1) & 3));
          lVar23 = uStack_110 + lStack_d0 * (ulong)(iVar6 - 1);
          lVar18 = uStack_b0 + lStack_70 * (ulong)(iVar6 - 1);
          iVar19 = (int)lVar20;
          uVar21 = uStack_110;
          uVar22 = uStack_b0;
          do {
            if ((((uint)uVar21 | (uint)uVar22 | (uint)lVar18 | (uint)lVar23) & 3) == 0) {
              if (iVar19 < 0x10) {
                uVar16 = 0;
              }
              else {
                uVar16 = 0;
                do {
                  puVar14 = (undefined4 *)(uVar22 + uVar16);
                  uVar7 = *puVar14;
                  puVar2 = (undefined4 *)(lVar18 + uVar16);
                  puVar3 = (undefined4 *)(uVar21 + uVar16);
                  *puVar3 = *puVar2;
                  puVar4 = (undefined4 *)(lVar23 + uVar16);
                  *puVar4 = uVar7;
                  uVar7 = puVar14[1];
                  puVar3[1] = puVar2[1];
                  puVar4[1] = uVar7;
                  uVar7 = puVar14[2];
                  puVar3[2] = puVar2[2];
                  puVar4[2] = uVar7;
                  uVar7 = puVar14[3];
                  puVar3[3] = puVar2[3];
                  puVar4[3] = uVar7;
                  uVar16 = uVar16 + 0x10;
                } while ((long)uVar16 <= lVar20 + -0x10);
                uVar16 = uVar16 & 0xffffffff;
              }
              if ((int)uVar16 <= iVar19 + -4) {
                do {
                  uVar7 = *(undefined4 *)(uVar22 + uVar16);
                  *(undefined4 *)(uVar21 + uVar16) = *(undefined4 *)(lVar18 + uVar16);
                  *(undefined4 *)(lVar23 + uVar16) = uVar7;
                  uVar16 = uVar16 + 4;
                } while ((long)uVar16 <= (long)(iVar19 + -4));
                uVar16 = uVar16 & 0xffffffff;
              }
            }
            else {
              uVar16 = 0;
            }
            if ((int)uVar16 < iVar19) {
              do {
                uVar8 = *(undefined1 *)(uVar22 + uVar16);
                *(undefined1 *)(uVar21 + uVar16) = *(undefined1 *)(lVar18 + uVar16);
                *(undefined1 *)(lVar23 + uVar16) = uVar8;
                uVar16 = uVar16 + 1;
              } while ((long)uVar16 < (long)iVar19);
            }
            uVar17 = uVar17 + 1;
            uVar22 = uVar22 + lStack_70;
            lVar18 = lVar18 - lStack_70;
            uVar21 = uVar21 + lStack_d0;
            lVar23 = lVar23 - lStack_d0;
          } while (uVar17 != iVar6 + 1U >> 1);
        }
        if (iVar24 < 0) {
          uStack_128 = NEON_rev64(*puStack_e0,4);
          FUN_109a4977c(uStack_110,lStack_d0,uStack_110,lStack_d0,&uStack_128);
        }
      }
      else {
        uStack_128 = NEON_rev64(*(undefined8 *)piStack_80,4);
        FUN_109a4977c(uStack_b0,lStack_70,uStack_110,lStack_d0,&uStack_128);
      }
      if (uStack_e8 != 0) {
        piVar1 = (int *)(uStack_e8 + 0x14);
        do {
          iVar24 = *piVar1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar24 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar24 + -1 == 0) {
          func_0x000109a848d4(&uStack_120);
        }
      }
      uStack_e8 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      if (0 < uStack_120._4_4_) {
        lVar18 = 0;
        do {
          *(undefined4 *)((long)puStack_e0 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < uStack_120._4_4_);
      }
      if (plStack_d8 != &lStack_d0 && plStack_d8 != (long *)0x0) {
        _free(plStack_d8[-1]);
      }
      if (uStack_88 != 0) {
        piVar1 = (int *)(uStack_88 + 0x14);
        do {
          iVar24 = *piVar1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar24 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar24 + -1 == 0) {
          func_0x000109a848d4(&uStack_c0);
        }
      }
      uStack_88 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      if (0 < uStack_c0._4_4_) {
        lVar18 = 0;
        do {
          piStack_80[lVar18] = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < uStack_c0._4_4_);
      }
      if (plStack_78 != &lStack_70 && plStack_78 != (long *)0x0) {
        _free(plStack_78[-1]);
      }
    }
    return;
  }
  puVar14 = (undefined4 *)0x18;
  func_0x000107c2ae8c();
  *puVar14 = 1;
  uStack_c0 = puVar14 + 1;
  uStack_b8 = 0x10;
  *(undefined1 *)(puVar14 + 5) = 0;
  *(undefined8 *)(puVar14 + 3) = 0x32203d3c20292873;
  *(undefined8 *)(puVar14 + 1) = 0x6d69642e6372735f;
  FUN_109ac3188(0xffffff29,&uStack_c0,&DAT_10f4909f0,&UNK_10f595fed,0x30a);
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x109a49724);
  (*pcVar12)();
}



/* Entry: 109a4977c; end: 109a498cf;  */

void FUN_109a4977c(long param_1,long param_2,long param_3,long param_4,int *param_5,long param_6)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  int aiStack_480 [264];
  
  iVar3 = *param_5;
  uVar13 = param_6 * iVar3;
  piVar5 = aiStack_480;
  if (0x108 < uVar13) {
    piVar5 = (int *)(uVar13 * 4);
    if (uVar13 >> 0x3e != 0) {
      piVar5 = (int *)0xffffffffffffffff;
    }
    __Znam();
  }
  iVar12 = (int)param_6;
  if (0 < iVar3) {
    lVar6 = 0;
    iVar9 = (iVar3 + -1) * iVar12;
    piVar10 = piVar5;
    lVar11 = param_6;
    iVar7 = iVar9;
    piVar8 = piVar5;
    do {
      do {
        *piVar10 = iVar9;
        iVar9 = iVar9 + 1;
        lVar11 = lVar11 + -1;
        piVar10 = piVar10 + 1;
      } while (lVar11 != 0);
      lVar6 = lVar6 + 1;
      piVar10 = piVar8 + param_6;
      iVar9 = iVar7 - iVar12;
      lVar11 = param_6;
      iVar7 = iVar9;
      piVar8 = piVar10;
    } while (lVar6 != iVar3);
  }
  iVar9 = param_5[1];
  iVar7 = iVar9 + -1;
  param_5[1] = iVar7;
  if (iVar9 != 0) {
    uVar4 = ((iVar3 + 1) / 2) * iVar12;
    do {
      if (0 < (int)uVar4) {
        uVar13 = 0;
        do {
          iVar3 = piVar5[uVar13];
          uVar2 = *(undefined1 *)(param_1 + uVar13);
          *(undefined1 *)(param_3 + uVar13) = *(undefined1 *)(param_1 + iVar3);
          *(undefined1 *)(param_3 + iVar3) = uVar2;
          uVar13 = uVar13 + 1;
        } while (uVar4 != uVar13);
        iVar7 = param_5[1];
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5[1] = iVar7 + -1;
      bVar1 = iVar7 != 0;
      iVar7 = iVar7 + -1;
    } while (bVar1);
  }
  if (piVar5 != aiStack_480) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109a498d0; end: 109a49d9f;  */

void FUN_109a498d0(uint *param_1,int param_2,int param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  uint *puVar7;
  undefined4 *puVar8;
  ulong *puVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  uint *puStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  int iStack_48;
  int iStack_44;
  
  puVar7 = param_1;
  FUN_109a8d7e8(param_1,0xffffffff);
  if ((int)puVar7 < 3) {
    if ((0 < param_2) && (0 < param_3)) {
      FUN_109a8b004(&iStack_48,param_1,0xffffffff);
      param_2 = iStack_44 * param_2;
      param_3 = iStack_48 * param_3;
      puVar7 = param_1;
      FUN_109a8b904(param_1,0xffffffff);
      FUN_109a8f64c(param_4,param_2,param_3,puVar7,0xffffffff,0,0);
      if ((*param_1 & 0x1f0000) == 0x10000) {
        puVar9 = *(ulong **)(param_1 + 2);
        uStack_70 = (ulong)&uStack_b0 | 8;
        uStack_a8 = puVar9[1];
        uStack_b0 = (undefined4 *)*puVar9;
        uStack_98 = puVar9[3];
        uStack_a0 = puVar9[2];
        uStack_88 = puVar9[5];
        uStack_90 = puVar9[4];
        uStack_78 = puVar9[7];
        uStack_80 = puVar9[6];
        plStack_68 = &lStack_60;
        lStack_60 = 0;
        lStack_58 = 0;
        if (puVar9[7] != 0) {
          piVar1 = (int *)(puVar9[7] + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (*(int *)((long)puVar9 + 4) < 3) {
          lStack_60 = *(long *)puVar9[9];
          lStack_58 = ((long *)puVar9[9])[1];
        }
        else {
          uStack_b0 = (undefined4 *)((ulong)uStack_b0 & 0xffffffff);
          func_0x000109a84868(&uStack_b0);
        }
      }
      else {
        FUN_109a8a180(&uStack_b0,param_1,0xffffffff);
      }
      if ((*param_4 & 0x1f0000) == 0x10000) {
        puVar9 = *(ulong **)(param_4 + 2);
        puStack_d0 = (uint *)((ulong)&uStack_110 | 8);
        uStack_108 = puVar9[1];
        uStack_110 = *puVar9;
        uStack_f8 = puVar9[3];
        uStack_100 = puVar9[2];
        uStack_e8 = puVar9[5];
        uStack_f0 = puVar9[4];
        uStack_d8 = puVar9[7];
        uStack_e0 = puVar9[6];
        plStack_c8 = &lStack_c0;
        lStack_c0 = 0;
        lStack_b8 = 0;
        if (puVar9[7] != 0) {
          piVar1 = (int *)(puVar9[7] + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (*(int *)((long)puVar9 + 4) < 3) {
          lStack_c0 = *(long *)puVar9[9];
          lStack_b8 = ((long *)puVar9[9])[1];
        }
        else {
          uStack_110 = uStack_110 & 0xffffffff;
          func_0x000109a84868(&uStack_110);
        }
      }
      else {
        FUN_109a8a180(&uStack_110,param_4,0xffffffff);
      }
      uVar2 = *puStack_d0;
      uVar3 = puStack_d0[1];
      if ((int)uStack_b0._4_4_ < 1) {
        iVar13 = 0;
      }
      else {
        iVar13 = (int)plStack_68[(ulong)uStack_b0._4_4_ - 1];
      }
      iStack_48 = iStack_48 * iVar13;
      if (iStack_44 < 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        iVar12 = iStack_44;
        iVar10 = iStack_48;
        do {
          iVar14 = (int)((long)(int)uVar3 * (long)iVar13);
          if (0 < iVar14) {
            iVar16 = 0;
            do {
              _memcpy(uStack_100 + *plStack_c8 * uVar15 + (long)iVar16,
                      uStack_a0 + *plStack_68 * uVar15,(long)iVar10);
              iVar16 = iStack_48 + iVar16;
              iVar12 = iStack_44;
              iVar10 = iStack_48;
            } while (iVar16 < iVar14);
          }
          uVar15 = uVar15 + 1;
        } while ((long)uVar15 < (long)iVar12);
      }
      if ((int)uVar15 < (int)uVar2) {
        uVar15 = uVar15 & 0xffffffff;
        do {
          _memcpy(uStack_100 + *plStack_c8 * uVar15,
                  uStack_100 + *plStack_c8 * (long)((int)uVar15 - iStack_44),
                  (long)(int)uVar3 * (long)iVar13);
          uVar15 = uVar15 + 1;
        } while (uVar2 != uVar15);
      }
      if (uStack_d8 != 0) {
        piVar1 = (int *)(uStack_d8 + 0x14);
        do {
          iVar13 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      uStack_d8 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      if (0 < uStack_110._4_4_) {
        lVar11 = 0;
        do {
          puStack_d0[lVar11] = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < uStack_110._4_4_);
      }
      if (plStack_c8 != &lStack_c0 && plStack_c8 != (long *)0x0) {
        _free(plStack_c8[-1]);
      }
      if (uStack_78 != 0) {
        piVar1 = (int *)(uStack_78 + 0x14);
        do {
          iVar13 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          func_0x000109a848d4(&uStack_b0);
        }
      }
      uStack_78 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      if (0 < (int)uStack_b0._4_4_) {
        lVar11 = 0;
        do {
          *(undefined4 *)(uStack_70 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < (int)uStack_b0._4_4_);
      }
      if (plStack_68 != &lStack_60 && plStack_68 != (long *)0x0) {
        _free(plStack_68[-1]);
      }
      return;
    }
    puVar8 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    uStack_b0 = puVar8 + 1;
    uStack_a8 = 0x10;
    *(undefined1 *)(puVar8 + 5) = 0;
    *(undefined8 *)(puVar8 + 3) = 0x30203e20786e2026;
    *(undefined8 *)(puVar8 + 1) = 0x262030203e20796e;
    FUN_109ac3188(0xffffff29,&uStack_b0,&DAT_10f57e834,&UNK_10f595fed,0x351);
  }
  else {
    puVar8 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    uStack_b0 = puVar8 + 1;
    uStack_a8 = 0x10;
    *(undefined1 *)(puVar8 + 5) = 0;
    *(undefined8 *)(puVar8 + 3) = 0x32203d3c20292873;
    *(undefined8 *)(puVar8 + 1) = 0x6d69642e6372735f;
    FUN_109ac3188(0xffffff29,&uStack_b0,&DAT_10f57e834,&UNK_10f595fed,0x350);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109a49d40);
  (*pcVar6)();
}



/* Entry: 109a49da0; end: 109a49ec3;  */

void FUN_109a49da0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 auStack_50 [2];
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 auStack_38 [2];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  if (((int)param_3 == 1) && ((int)param_4 == 1)) {
    uVar12 = *param_2;
    uVar14 = param_2[3];
    uVar13 = param_2[2];
    iVar9 = *(int *)((long)param_2 + 4);
    param_1[1] = param_2[1];
    *param_1 = uVar12;
    param_1[3] = uVar14;
    param_1[2] = uVar13;
    lVar11 = param_2[7];
    uVar14 = param_2[4];
    uVar13 = param_2[7];
    uVar12 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar14;
    param_1[7] = uVar13;
    param_1[6] = uVar12;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      iVar9 = *(int *)((long)param_2 + 4);
    }
    if (2 < iVar9) {
      *(undefined4 *)((long)param_1 + 4) = 0;
      FUN_109a844cc(param_1,*(undefined4 *)((long)param_2 + 4),0,0,0);
      if (0 < *(int *)((long)param_1 + 4)) {
        lVar11 = 0;
        lVar2 = param_2[8];
        lVar4 = param_2[9];
        lVar3 = param_1[8];
        lVar5 = param_1[9];
        do {
          *(undefined4 *)(lVar3 + lVar11 * 4) = *(undefined4 *)(lVar2 + lVar11 * 4);
          *(undefined8 *)(lVar5 + lVar11 * 8) = *(undefined8 *)(lVar4 + lVar11 * 8);
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)((long)param_1 + 4));
      }
      return;
    }
    puVar8 = (undefined8 *)param_2[9];
    puVar10 = (undefined8 *)param_1[9];
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
  }
  else {
    *(undefined4 *)param_1 = 0x42ff0000;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    uStack_28 = 0;
    auStack_38[0] = 0x1010000;
    auStack_50[0] = 0x2010000;
    uStack_40 = 0;
    puStack_48 = param_1;
    puStack_30 = param_2;
    FUN_109a498d0(auStack_38,param_3,param_4,auStack_50);
  }
  return;
}



/* Entry: 109a49ec4; end: 109a4a0a3;  */

ulong FUN_109a49ec4(ulong param_1,uint param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  uVar3 = (uint)param_1;
  if (uVar3 < param_2) {
    return param_1;
  }
  if (param_3 < 2) {
    if (param_3 == 0) {
      return 0xffffffff;
    }
    if (param_3 == 1) {
      uVar1 = 0;
      if (-1 < (int)uVar3) {
        uVar1 = param_2 - 1;
      }
      return (ulong)uVar1;
    }
  }
  else {
    if (param_3 == 2) {
LAB_109a49f0c:
      if (param_2 == 1) {
        param_1 = 0;
      }
      else {
        do {
          uVar3 = param_2 * 2 + ~((uint)param_1 + (uint)(param_3 == 4));
          if ((param_1 & 0x80000000) != 0) {
            uVar3 = ~(uint)param_1 + (uint)(param_3 == 4);
          }
          param_1 = (ulong)uVar3;
        } while (param_2 <= uVar3);
      }
      return param_1;
    }
    if (param_3 == 3) {
      if (0 < (int)param_2) {
        if ((int)uVar3 < 0) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = (param_2 + ~uVar3) / param_2;
          }
          param_1 = (ulong)(param_2 + ~((param_2 + ~uVar3) - uVar1 * param_2));
        }
        uVar3 = (uint)param_1;
        if ((int)uVar3 < (int)param_2) {
          return param_1;
        }
        uVar1 = 0;
        if (param_2 != 0) {
          uVar1 = uVar3 / param_2;
        }
        return (ulong)(uVar3 - uVar1 * param_2);
      }
      FUN_109a38ed8(&puStack_30,&UNK_10f596151);
      FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f596159,&UNK_10f595fed,0x397);
      goto LAB_109a4a03c;
    }
    if (param_3 == 4) goto LAB_109a49f0c;
  }
  puVar4 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_30 = puVar4 + 1;
  uStack_28 = 0x1f;
  *(undefined1 *)((long)puVar4 + 0x23) = 0;
  *(undefined8 *)(puVar4 + 3) = 0x726f707075736e75;
  *(undefined8 *)(puVar4 + 1) = 0x2f6e776f6e6b6e55;
  *(undefined8 *)((long)puVar4 + 0x1b) = 0x6570797420726564;
  *(undefined8 *)((long)puVar4 + 0x13) = 0x726f622064657472;
  FUN_109ac3188(0xfffffffb,&puStack_30,&UNK_10f596159,&UNK_10f595fed,0x3a0);
LAB_109a4a03c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a4a040);
  (*pcVar2)();
}



/* Entry: 109a4a0a4; end: 109a4ad2f;  */

void FUN_109a4a0a4(uint *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,double *param_8)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  ulong *puVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  int *piVar24;
  undefined4 *puVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  ulong uVar29;
  ulong uVar30;
  undefined4 *puVar31;
  undefined1 *puVar32;
  int iVar33;
  undefined1 *puVar34;
  long lVar35;
  double dVar36;
  undefined8 uStack_9a0;
  undefined8 *puStack_998;
  int aiStack_990 [272];
  undefined8 uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  int *piStack_510;
  long *plStack_508;
  long lStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  int *piStack_4b0;
  long *plStack_4a8;
  long lStack_4a0;
  long lStack_498;
  undefined8 uStack_488;
  undefined4 *puStack_480;
  undefined4 auStack_478 [258];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)(param_4 | param_3 | param_5 | param_6) < 0) {
    puVar10 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    uStack_9a0 = puVar10 + 1;
    puStack_998 = (undefined8 *)0x32;
    *(undefined8 *)(puVar10 + 3) = 0x74746f6220262620;
    *(undefined8 *)(puVar10 + 1) = 0x30203d3e20706f74;
    *(undefined2 *)(puVar10 + 0xd) = 0x3020;
    *(undefined1 *)((long)puVar10 + 0x36) = 0;
    *(undefined8 *)(puVar10 + 7) = 0x207466656c202626;
    *(undefined8 *)(puVar10 + 5) = 0x2030203d3e206d6f;
    *(undefined8 *)(puVar10 + 0xb) = 0x3d3e207468676972;
    *(undefined8 *)(puVar10 + 9) = 0x2026262030203d3e;
    FUN_109ac3188(0xffffff29,&uStack_9a0,&UNK_10f5961be,&UNK_10f595fed,0x468);
    goto LAB_109a4ac44;
  }
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar11 = *(ulong **)(param_1 + 2);
    piStack_4b0 = (int *)((ulong)&uStack_4f0 | 8);
    uStack_4e8 = puVar11[1];
    uStack_4f0 = *puVar11;
    uStack_4d8 = puVar11[3];
    uStack_4e0 = puVar11[2];
    uStack_4c8 = puVar11[5];
    uStack_4d0 = puVar11[4];
    uStack_4b8 = puVar11[7];
    uStack_4c0 = puVar11[6];
    plStack_4a8 = &lStack_4a0;
    lStack_498 = 0;
    lStack_4a0 = 0;
    if (puVar11[7] != 0) {
      piVar14 = (int *)(puVar11[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = *piVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      lStack_4a0 = *(long *)puVar11[9];
      lStack_498 = ((long *)puVar11[9])[1];
    }
    else {
      uStack_4f0 = uStack_4f0 & 0xffffffff;
      func_0x000109a84868(&uStack_4f0);
    }
  }
  else {
    FUN_109a8a180(&uStack_4f0,param_1,0xffffffff);
  }
  uVar18 = (uint)uStack_4f0;
  if (((param_7 >> 4 & 1) == 0) && (((uint)uStack_4f0 >> 0xf & 1) != 0)) {
    uStack_9a0 = (int *)0x0;
    uStack_488 = (undefined4 *)0x0;
    FUN_109a86b88(&uStack_4f0,&uStack_9a0,&uStack_488);
    uVar12 = uStack_488._4_4_;
    if ((int)param_3 <= (int)uStack_488._4_4_) {
      uVar12 = param_3;
    }
    uVar5 = uStack_9a0._4_4_ - (uStack_488._4_4_ + (int)uStack_4e8);
    if ((int)param_4 <= (int)uVar5) {
      uVar5 = param_4;
    }
    uVar19 = (uint)uStack_488;
    if ((int)param_5 <= (int)(uint)uStack_488) {
      uVar19 = param_5;
    }
    uVar6 = (int)uStack_9a0 - ((uint)uStack_488 + uStack_4e8._4_4_);
    if ((int)param_6 <= (int)uVar6) {
      uVar6 = param_6;
    }
    FUN_109a86cdc(&uStack_4f0,uVar12,uVar5,uVar19,uVar6);
    param_3 = param_3 - uVar12;
    param_5 = param_5 - uVar19;
    param_4 = param_4 - uVar5;
    param_6 = param_6 - uVar6;
  }
  FUN_109a8f64c(param_2,param_3 + param_4 + (int)uStack_4e8,param_5 + param_6 + uStack_4e8._4_4_,
                uVar18 & 0xfff,0xffffffff,0,0);
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar11 = *(ulong **)(param_2 + 2);
    piStack_510 = (int *)((ulong)&uStack_550 | 8);
    uStack_548 = puVar11[1];
    uStack_550 = *puVar11;
    uStack_538 = puVar11[3];
    uStack_540 = puVar11[2];
    uStack_528 = puVar11[5];
    uStack_530 = puVar11[4];
    uStack_518 = puVar11[7];
    uStack_520 = puVar11[6];
    plStack_508 = &lStack_500;
    lStack_4f8 = 0;
    lStack_500 = 0;
    if (puVar11[7] != 0) {
      piVar14 = (int *)(puVar11[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = *piVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      lStack_500 = *(long *)puVar11[9];
      lStack_4f8 = ((long *)puVar11[9])[1];
    }
    else {
      uStack_550 = uStack_550 & 0xffffffff;
      func_0x000109a84868(&uStack_550);
    }
  }
  else {
    FUN_109a8a180(&uStack_550,param_2,0xffffffff);
  }
  lVar27 = lStack_4a0;
  uVar30 = uStack_4e0;
  lVar17 = lStack_500;
  uVar7 = uStack_540;
  if ((param_5 == 0 && param_6 == 0) && (param_4 == 0 && param_3 == 0)) {
    if ((uStack_4e0 != uStack_540) || (lStack_4a0 != lStack_500)) {
      uStack_9a0 = (int *)CONCAT44(uStack_9a0._4_4_,0x2010000);
      puStack_998 = &uStack_550;
      aiStack_990[0] = 0;
      aiStack_990[1] = 0;
      FUN_109a479a0(&uStack_4f0,&uStack_9a0);
    }
LAB_109a4aa28:
    if (uStack_518 != 0) {
      piVar14 = (int *)(uStack_518 + 0x14);
      do {
        iVar1 = *piVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = iVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_550);
      }
    }
    uStack_518 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    if (0 < uStack_550._4_4_) {
      lVar17 = 0;
      do {
        piStack_510[lVar17] = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_550._4_4_);
    }
    if (plStack_508 != &lStack_500 && plStack_508 != (long *)0x0) {
      _free(plStack_508[-1]);
    }
    if (uStack_4b8 != 0) {
      piVar14 = (int *)(uStack_4b8 + 0x14);
      do {
        iVar1 = *piVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = iVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_4f0);
      }
    }
    uStack_4b8 = 0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    if (0 < (int)uStack_4f0._4_4_) {
      lVar17 = 0;
      do {
        piStack_4b0[lVar17] = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)uStack_4f0._4_4_);
    }
    if (plStack_4a8 != &lStack_4a0 && plStack_4a8 != (long *)0x0) {
      _free(plStack_4a8[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if ((param_7 & 0xffffffef) != 0) {
      iVar1 = piStack_4b0[1];
      iVar33 = piStack_510[1];
      if ((int)uStack_4f0._4_4_ < 1) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(uint *)(plStack_4a8 + ((ulong)uStack_4f0._4_4_ - 1));
      }
      iVar2 = *piStack_4b0;
      iVar9 = *piStack_510;
      uVar5 = (uint)uStack_4e0 | (uint)uStack_540 | uVar18 | (uint)lStack_4a0 | (uint)lStack_500;
      uVar12 = uVar18 + 3;
      if (-1 < (int)uVar18) {
        uVar12 = uVar18;
      }
      uVar12 = (int)uVar12 >> 2;
      if ((uVar5 & 3) != 0) {
        uVar12 = uVar18;
      }
      uVar26 = (ulong)uVar12;
      uVar18 = uVar12 * (iVar33 - iVar1);
      puVar28 = (undefined8 *)(long)(int)uVar18;
      uStack_9a0 = aiStack_990;
      piVar14 = uStack_9a0;
      if (0x108 < uVar18) {
        piVar14 = (int *)((long)puVar28 << 2);
        if ((int)uVar18 < 0) {
          piVar14 = (int *)0xffffffffffffffff;
        }
        __Znam();
      }
      uStack_9a0 = piVar14;
      puStack_998 = puVar28;
      if (0 < (int)param_5) {
        uVar29 = 0;
        piVar16 = piVar14;
        do {
          iVar13 = (int)uVar29 - param_5;
          FUN_109a49ec4(iVar13,iVar1,param_7 & 0xffffffef);
          if (0 < (int)uVar12) {
            iVar13 = iVar13 * uVar12;
            uVar20 = uVar26;
            piVar24 = piVar16;
            do {
              *piVar24 = iVar13;
              iVar13 = iVar13 + 1;
              uVar20 = uVar20 - 1;
              piVar24 = piVar24 + 1;
            } while (uVar20 != 0);
          }
          uVar29 = uVar29 + 1;
          piVar16 = piVar16 + uVar26;
        } while (uVar29 != param_5);
      }
      uVar18 = iVar33 - (iVar1 + param_5);
      if (0 < (int)uVar18) {
        uVar29 = 0;
        piVar16 = piVar14 + (long)(int)uVar12 * (long)(int)param_5;
        do {
          iVar13 = iVar1 + (int)uVar29;
          FUN_109a49ec4(iVar13,iVar1,param_7 & 0xffffffef);
          if (0 < (int)uVar12) {
            iVar13 = iVar13 * uVar12;
            uVar20 = uVar26;
            piVar24 = piVar16;
            do {
              *piVar24 = iVar13;
              iVar13 = iVar13 + 1;
              uVar20 = uVar20 - 1;
              piVar24 = piVar24 + 1;
            } while (uVar20 != 0);
          }
          uVar29 = uVar29 + 1;
          piVar16 = (int *)((long)piVar16 +
                           (-(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar26 << 2));
        } while (uVar29 != uVar18);
      }
      lVar15 = lVar17 * (int)param_3;
      lVar35 = uVar7 + lVar15;
      uVar19 = 2;
      if ((uVar5 & 3) != 0) {
        uVar19 = 0;
      }
      if (0 < iVar2) {
        iVar13 = 0;
        param_5 = uVar12 * param_5;
        uVar26 = lVar35 + (int)(param_5 << (ulong)uVar19);
        iVar1 = uVar12 * iVar1;
        uVar18 = uVar12 * uVar18;
        lVar15 = lVar15 + (int)(param_5 << (ulong)uVar19);
        puVar34 = (undefined1 *)(uVar7 + (lVar15 - (int)param_5));
        puVar32 = (undefined1 *)(uVar7 + lVar15 + iVar1);
        puVar10 = (undefined4 *)(uVar7 + lVar15 + (long)(int)param_5 * -4);
        puVar31 = (undefined4 *)(uVar7 + lVar15 + (long)iVar1 * 4);
        do {
          if (uVar26 != uVar30) {
            _memcpy(uVar26,uVar30,(long)(iVar1 << (ulong)uVar19));
          }
          if ((uVar5 & 3) == 0) {
            piVar16 = piVar14;
            puVar22 = puVar10;
            uVar29 = (ulong)param_5;
            if (0 < (int)param_5) {
              do {
                *puVar22 = *(undefined4 *)(uVar30 + (long)*piVar16 * 4);
                uVar29 = uVar29 - 1;
                piVar16 = piVar16 + 1;
                puVar22 = puVar22 + 1;
              } while (uVar29 != 0);
            }
            uVar29 = (ulong)uVar18;
            piVar16 = piVar14 + (int)param_5;
            puVar22 = puVar31;
            if (0 < (int)uVar18) {
              do {
                *puVar22 = *(undefined4 *)(uVar30 + (long)*piVar16 * 4);
                uVar29 = uVar29 - 1;
                piVar16 = piVar16 + 1;
                puVar22 = puVar22 + 1;
              } while (uVar29 != 0);
            }
          }
          else {
            piVar16 = piVar14;
            puVar21 = puVar34;
            uVar29 = (ulong)param_5;
            if (0 < (int)param_5) {
              do {
                *puVar21 = *(undefined1 *)(uVar30 + (long)*piVar16);
                uVar29 = uVar29 - 1;
                piVar16 = piVar16 + 1;
                puVar21 = puVar21 + 1;
              } while (uVar29 != 0);
            }
            uVar29 = (ulong)uVar18;
            piVar16 = piVar14 + (int)param_5;
            puVar21 = puVar32;
            if (0 < (int)uVar18) {
              do {
                *puVar21 = *(undefined1 *)(uVar30 + (long)*piVar16);
                uVar29 = uVar29 - 1;
                piVar16 = piVar16 + 1;
                puVar21 = puVar21 + 1;
              } while (uVar29 != 0);
            }
          }
          iVar13 = iVar13 + 1;
          uVar26 = uVar26 + lVar17;
          uVar30 = uVar30 + lVar27;
          puVar34 = puVar34 + lVar17;
          puVar32 = puVar32 + lVar17;
          puVar10 = (undefined4 *)((long)puVar10 + lVar17);
          puVar31 = (undefined4 *)((long)puVar31 + lVar17);
        } while (iVar13 != iVar2);
      }
      iVar1 = uVar12 * iVar33 << (ulong)uVar19;
      if (0 < (int)param_3) {
        iVar33 = -param_3;
        uVar26 = (ulong)param_3;
        uVar30 = uVar7;
        do {
          iVar13 = iVar33;
          FUN_109a49ec4(iVar33,iVar2,param_7 & 0xffffffef);
          _memcpy(uVar30,lVar35 + lVar17 * iVar13,(long)iVar1);
          uVar30 = uVar30 + lVar17;
          iVar33 = iVar33 + 1;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      uVar18 = iVar9 - (iVar2 + param_3);
      uVar30 = (ulong)uVar18;
      if (0 < (int)uVar18) {
        lVar27 = uVar7 + lVar17 * ((long)(int)param_3 + (long)iVar2);
        iVar33 = iVar2;
        do {
          iVar9 = iVar33;
          FUN_109a49ec4(iVar33,iVar2,param_7 & 0xffffffef);
          _memcpy(lVar27,lVar35 + lVar17 * iVar9,(long)iVar1);
          lVar27 = lVar27 + lVar17;
          iVar33 = iVar33 + 1;
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
      }
LAB_109a4aa18:
      if (uStack_9a0 != aiStack_990 && uStack_9a0 != (int *)0x0) {
        __ZdaPv();
      }
      goto LAB_109a4aa28;
    }
    uVar18 = (uint)uStack_4f0;
    uVar30 = (ulong)((uint)uStack_4f0 >> 3) & 0x1ff;
    puVar28 = (undefined8 *)(uVar30 + 1);
    uStack_9a0 = aiStack_990;
    uVar12 = (uint)uVar30;
    puStack_998 = puVar28;
    if (uVar12 < 0x88) {
      puVar23 = puVar28;
      if (3 < uVar12) goto LAB_109a4a7d0;
LAB_109a4a7f8:
      FUN_109a89dc8(param_8,uStack_9a0,(uVar18 & 7 | (int)puVar23 << 3) - 8,puVar28);
      lVar27 = lStack_4a0;
      uVar30 = uStack_4e0;
      lVar17 = lStack_500;
      uVar7 = uStack_540;
      piVar14 = uStack_9a0;
      uVar18 = piStack_510[1];
      if ((int)uStack_4f0._4_4_ < 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(plStack_4a8 + ((ulong)uStack_4f0._4_4_ - 1));
      }
      iVar1 = *piStack_4b0;
      iVar33 = piStack_4b0[1];
      iVar2 = *piStack_510;
      puVar31 = (undefined4 *)(long)(int)(uVar12 * uVar18);
      puVar10 = auStack_478;
      if (0x408 < uVar12 * uVar18) {
        puVar10 = puVar31;
        uStack_488 = auStack_478;
        __Znam();
      }
      if (0 < (int)uVar18) {
        uVar26 = 0;
        puVar22 = puVar10;
        do {
          piVar16 = piVar14;
          uVar29 = (ulong)uVar12;
          puVar25 = puVar22;
          if (0 < (int)uVar12) {
            do {
              *(char *)puVar25 = (char)*piVar16;
              uVar29 = uVar29 - 1;
              piVar16 = (int *)((long)piVar16 + 1);
              puVar25 = (undefined4 *)((long)puVar25 + 1);
            } while (uVar29 != 0);
          }
          uVar26 = uVar26 + 1;
          puVar22 = (undefined4 *)((long)puVar22 + (ulong)uVar12);
        } while (uVar26 != uVar18);
      }
      uStack_488 = puVar10;
      puStack_480 = puVar31;
      if (0 < iVar1) {
        lVar15 = uVar7 + lVar17 * (int)param_3;
        uVar26 = lVar15 + (int)(uVar12 * param_5);
        lVar35 = (long)(int)(uVar12 * iVar33);
        iVar9 = iVar1;
        do {
          if (uVar30 != uVar26) {
            _memcpy(uVar26,uVar30,lVar35);
          }
          _memcpy(lVar15,puVar10,(long)(int)(uVar12 * param_5));
          _memcpy(uVar26 + lVar35,puVar10,(long)(int)(uVar12 * (uVar18 - (iVar33 + param_5))));
          uVar26 = uVar26 + lVar17;
          uVar30 = uVar30 + lVar27;
          lVar15 = lVar15 + lVar17;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      uVar18 = iVar2 - (iVar1 + param_3);
      uVar30 = (ulong)uVar18;
      if (0 < (int)param_3) {
        uVar29 = (ulong)param_3;
        uVar26 = uVar7;
        do {
          _memcpy(uVar26,puVar10,puVar31);
          uVar26 = uVar26 + lVar17;
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
      }
      if (0 < (int)uVar18) {
        lVar27 = uVar7 + lVar17 * ((long)(int)param_3 + (long)iVar1);
        do {
          _memcpy(lVar27,puVar10,puVar31);
          lVar27 = lVar27 + lVar17;
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
      }
      if (uStack_488 != auStack_478 && uStack_488 != (undefined4 *)0x0) {
        __ZdaPv();
      }
      goto LAB_109a4aa18;
    }
    piVar14 = (int *)((long)puVar28 * 8);
    __Znam();
    uStack_9a0 = piVar14;
LAB_109a4a7d0:
    dVar36 = *param_8;
    if (((dVar36 == param_8[1]) && (dVar36 == param_8[2])) && (dVar36 == param_8[3])) {
      puVar23 = (undefined8 *)0x1;
      goto LAB_109a4a7f8;
    }
  }
  puVar10 = (undefined4 *)0x4c;
  func_0x000107c2ae8c();
  *puVar10 = 1;
  uStack_488 = puVar10 + 1;
  puStack_480 = (undefined4 *)0x44;
  *(undefined8 *)(puVar10 + 3) = 0x756c6176203d3d20;
  *(undefined8 *)(puVar10 + 1) = 0x5d305b65756c6176;
  *(undefined8 *)(puVar10 + 7) = 0x5d305b65756c6176;
  *(undefined8 *)(puVar10 + 5) = 0x202626205d315b65;
  *(undefined8 *)(puVar10 + 0xb) = 0x202626205d325b65;
  *(undefined8 *)(puVar10 + 9) = 0x756c6176203d3d20;
  *(undefined1 *)(puVar10 + 0x12) = 0;
  puVar10[0x11] = 0x5d335b65;
  *(undefined8 *)(puVar10 + 0xf) = 0x756c6176203d3d20;
  *(undefined8 *)(puVar10 + 0xd) = 0x5d305b65756c6176;
  FUN_109ac3188(0xffffff29,&uStack_488,&UNK_10f5961be,&UNK_10f595fed,0x509);
LAB_109a4ac44:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109a4ac48);
  (*pcVar8)();
}



/* Entry: 109a4ad30; end: 109a4b50f;  */

void FUN_109a4ad30(uint *param_1,int *param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 auStack_198 [2];
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined4 auStack_180 [2];
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_130;
  int *piStack_128;
  undefined1 *puStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  uint *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  int *piStack_c8;
  undefined1 *puStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((((param_1 == (uint *)0x0) || (param_2 == (int *)0x0)) ||
      (*(short *)((long)param_1 + 2) != 0x4244)) || (*(short *)((long)param_2 + 2) != 0x4244)) {
    FUN_109a85f44(&uStack_108,param_1,0,1,1,0);
    FUN_109a85f44(&uStack_168,param_2,0,1,1,0);
    if ((((uint)uStack_168 ^ (uint)uStack_108) & 7) == 0) {
      uVar1 = piStack_c8[-1];
      uVar11 = (ulong)uVar1;
      if (uVar1 == piStack_128[-1]) {
        if (uVar1 == 2) {
          if ((*piStack_c8 != *piStack_128) || (piStack_c8[1] != piStack_128[1]))
          goto LAB_109a4af84;
        }
        else {
          piVar8 = piStack_c8;
          piVar10 = piStack_128;
          if (0 < (int)uVar1) {
            do {
              if (*piVar8 != *piVar10) goto LAB_109a4af84;
              uVar11 = uVar11 - 1;
              piVar8 = piVar8 + 1;
              piVar10 = piVar10 + 1;
            } while (uVar11 != 0);
          }
        }
        if ((param_1 == (uint *)0x0) || (*param_1 != 0x90)) {
          iVar7 = 0;
          iVar9 = 0;
          if (param_2 != (int *)0x0) goto LAB_109a4b044;
LAB_109a4b068:
          iVar9 = 0;
        }
        else {
          iVar7 = 0;
          if (*(long *)(param_1 + 0x16) != 0) {
            iVar7 = 0;
            if (*(int **)(param_1 + 0xc) != (int *)0x0) {
              iVar7 = **(int **)(param_1 + 0xc);
            }
          }
          iVar9 = iVar7;
          if (param_2 == (int *)0x0) goto LAB_109a4b068;
LAB_109a4b044:
          iVar7 = iVar9;
          if (*param_2 != 0x90) goto LAB_109a4b068;
          iVar9 = 0;
          if (*(long *)(param_2 + 0x16) != 0) {
            iVar9 = 0;
            if (*(int **)(param_2 + 0xc) != (int *)0x0) {
              iVar9 = **(int **)(param_2 + 0xc);
            }
          }
        }
        if (iVar7 == 0 && iVar9 == 0) {
          if ((((uint)uStack_168 ^ (uint)uStack_108) & 0xff8) != 0) {
            puVar6 = (undefined4 *)0x28;
            func_0x000107c2ae8c();
            *puVar6 = 1;
            uStack_a8 = puVar6 + 1;
            puStack_a0 = (undefined8 *)0x20;
            *(undefined1 *)(puVar6 + 9) = 0;
            *(undefined8 *)(puVar6 + 3) = 0x3d202928736c656e;
            *(undefined8 *)(puVar6 + 1) = 0x6e6168632e637273;
            *(undefined8 *)(puVar6 + 7) = 0x2928736c656e6e61;
            *(undefined8 *)(puVar6 + 5) = 0x68632e747364203d;
            FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f59621f,&UNK_10f595fed,0x54d);
            goto LAB_109a4b41c;
          }
          if (param_3 == 0) {
            uStack_a8 = (undefined4 *)CONCAT44(uStack_a8._4_4_,0x2010000);
            puStack_a0 = &uStack_168;
            uStack_98 = 0;
            FUN_109a479a0(&uStack_108,&uStack_a8);
          }
          else {
            auStack_180[0] = 0x2010000;
            puStack_178 = &uStack_168;
            uStack_170 = 0;
            FUN_109a85f44(&uStack_a8,param_3,0,1,0,0);
            uStack_188 = 0;
            auStack_198[0] = 0x1010000;
            puStack_190 = &uStack_a8;
            FUN_109a4813c(&uStack_108,auStack_180,auStack_198);
            if (lStack_70 != 0) {
              piVar8 = (int *)(lStack_70 + 0x14);
              do {
                iVar7 = *piVar8;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
                if (bVar3) {
                  *piVar8 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                func_0x000109a848d4(&uStack_a8);
              }
            }
            lStack_70 = 0;
            uStack_90 = 0;
            uStack_98 = 0;
            uStack_80 = 0;
            uStack_88 = 0;
            if (0 < uStack_a8._4_4_) {
              lVar12 = 0;
              do {
                *(undefined4 *)(lStack_68 + lVar12 * 4) = 0;
                lVar12 = lVar12 + 1;
              } while (lVar12 < uStack_a8._4_4_);
            }
            if (puStack_60 != auStack_58 && puStack_60 != (undefined1 *)0x0) {
              _free(*(undefined8 *)(puStack_60 + -8));
            }
          }
LAB_109a4b1bc:
          if (lStack_130 != 0) {
            piVar8 = (int *)(lStack_130 + 0x14);
            do {
              iVar7 = *piVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar3) {
                *piVar8 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 == 0) {
              func_0x000109a848d4(&uStack_168);
            }
          }
          lStack_130 = 0;
          uStack_150 = 0;
          uStack_158 = 0;
          uStack_140 = 0;
          uStack_148 = 0;
          if (0 < uStack_168._4_4_) {
            lVar12 = 0;
            do {
              piStack_128[lVar12] = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_168._4_4_);
          }
          if (puStack_120 != auStack_118 && puStack_120 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_120 + -8));
          }
          if (lStack_d0 != 0) {
            piVar8 = (int *)(lStack_d0 + 0x14);
            do {
              iVar7 = *piVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar3) {
                *piVar8 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 == 0) {
              func_0x000109a848d4(&uStack_108);
            }
          }
          lStack_d0 = 0;
          uStack_f0 = 0;
          uStack_f8 = 0;
          uStack_e0 = 0;
          uStack_e8 = 0;
          if (0 < uStack_108._4_4_) {
            lVar12 = 0;
            do {
              piStack_c8[lVar12] = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_108._4_4_);
          }
          if (puStack_c0 != auStack_b8 && puStack_c0 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_c0 + -8));
          }
          goto LAB_109a4b2bc;
        }
        if (((((ulong)uStack_108 & 0xff8) == 0) || (iVar7 != 0)) &&
           ((((ulong)uStack_168 & 0xff8) == 0 || (iVar9 != 0)))) {
          uVar13 = NEON_smax(CONCAT44(iVar9,iVar7),0x100000001,4);
          uStack_a8 = (undefined4 *)CONCAT44((int)((ulong)uVar13 >> 0x20) + -1,(int)uVar13 + -1);
          FUN_109a3e710(&uStack_108,1,&uStack_168,1,&uStack_a8,1);
          goto LAB_109a4b1bc;
        }
        goto LAB_109a4b2f0;
      }
    }
LAB_109a4af84:
    puVar6 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    uStack_a8 = puVar6 + 1;
    puStack_a0 = (undefined8 *)0x32;
    *(undefined8 *)(puVar6 + 3) = 0x64203d3d20292868;
    *(undefined8 *)(puVar6 + 1) = 0x747065642e637273;
    *(undefined2 *)(puVar6 + 0xd) = 0x657a;
    *(undefined1 *)((long)puVar6 + 0x36) = 0;
    *(undefined8 *)(puVar6 + 7) = 0x7273202626202928;
    *(undefined8 *)(puVar6 + 5) = 0x68747065642e7473;
    *(undefined8 *)(puVar6 + 0xb) = 0x69732e747364203d;
    *(undefined8 *)(puVar6 + 9) = 0x3d20657a69732e63;
    FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f59621f,&UNK_10f595fed,0x53b);
  }
  else {
    if (param_3 != 0) {
      puVar6 = (undefined4 *)0x14;
      func_0x000107c2ae8c();
      *puVar6 = 1;
      uStack_108 = (undefined8 *)(puVar6 + 1);
      *uStack_108 = 0x207272616b73616d;
      puStack_100 = (uint *)0xc;
      *(undefined1 *)(puVar6 + 4) = 0;
      puVar6[3] = 0x30203d3d;
      FUN_109ac3188(0xffffff29,&uStack_108,&UNK_10f59621f,&UNK_10f595fed,0x519);
      goto LAB_109a4b41c;
    }
    uVar1 = param_1[1];
    param_2[1] = uVar1;
    _memcpy(param_2 + 0xd,param_1 + 0xd,(long)(int)uVar1 << 2);
    *(undefined8 *)(param_2 + 0xb) = *(undefined8 *)(param_1 + 0xb);
    lVar12 = *(long *)(param_2 + 6);
    FUN_109a4e18c(lVar12);
    *(undefined8 *)(lVar12 + 0x60) = 0;
    *(undefined4 *)(lVar12 + 0x68) = 0;
    if (param_2[10] * 3 <= *(int *)(*(long *)(param_1 + 6) + 0x68)) {
      if (*(long *)(param_2 + 8) != 0) {
        _free(*(undefined8 *)(*(long *)(param_2 + 8) + -8));
      }
      param_2[8] = 0;
      param_2[9] = 0;
      uVar1 = param_1[10];
      param_2[10] = uVar1;
      lVar12 = (long)(int)uVar1 << 3;
      func_0x000107c2ae8c();
      *(long *)(param_2 + 8) = lVar12;
    }
    _bzero();
    FUN_109a3b1dc(param_1,&uStack_108);
    puVar4 = puStack_100;
    if (param_1 != (uint *)0x0) {
      while( true ) {
        do {
          puStack_100 = puVar4;
          lVar12 = *(long *)(param_2 + 6);
          uStack_168 = *(uint **)(lVar12 + 0x60);
          if (uStack_168 == (uint *)0x0) {
            FUN_109a4f6dc(lVar12,0,&uStack_168);
            lVar12 = *(long *)(param_2 + 6);
          }
          else {
            *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)(uStack_168 + 2);
            *uStack_168 = *uStack_168 & 0x3ffffff;
            *(int *)(lVar12 + 0x68) = *(int *)(lVar12 + 0x68) + 1;
          }
          puVar4 = uStack_168;
          uVar1 = param_2[10] - 1U & *param_1;
          _memcpy(uStack_168,param_1,(long)*(int *)(lVar12 + 0x2c));
          lVar12 = *(long *)(param_2 + 8);
          *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8);
          *(uint **)(lVar12 + (long)(int)uVar1 * 8) = puVar4;
          param_1 = *(uint **)(puStack_100 + 2);
          puVar4 = param_1;
        } while (param_1 != (uint *)0x0);
        lVar12 = (long)(int)(uint)uStack_f8;
        if (*(int *)(uStack_108 + 5) <= (int)((uint)uStack_f8 + 1)) break;
        iVar7 = ~(uint)uStack_f8 + *(int *)(uStack_108 + 5);
        while( true ) {
          lVar12 = lVar12 + 1;
          param_1 = *(uint **)(uStack_108[4] + lVar12 * 8);
          if (param_1 != (uint *)0x0) break;
          iVar7 = iVar7 + -1;
          if (iVar7 == 0) goto LAB_109a4b2bc;
        }
        uStack_f8 = CONCAT44(uStack_f8._4_4_,(int)lVar12);
        puVar4 = param_1;
      }
    }
LAB_109a4b2bc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
LAB_109a4b2f0:
    puVar6 = (undefined4 *)0x50;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    uStack_a8 = puVar6 + 1;
    puStack_a0 = (undefined8 *)0x48;
    *(undefined8 *)(puVar6 + 7) = 0x203d3d202928736c;
    *(undefined8 *)(puVar6 + 5) = 0x656e6e6168632e63;
    *(undefined8 *)(puVar6 + 0xb) = 0x30203d212032696f;
    *(undefined8 *)(puVar6 + 9) = 0x6328202626202931;
    *(undefined8 *)(puVar6 + 0xf) = 0x736c656e6e616863;
    *(undefined8 *)(puVar6 + 0xd) = 0x2e747364207c7c20;
    *(undefined1 *)(puVar6 + 0x13) = 0;
    *(undefined8 *)(puVar6 + 0x11) = 0x2931203d3d202928;
    *(undefined8 *)(puVar6 + 3) = 0x7273207c7c203020;
    *(undefined8 *)(puVar6 + 1) = 0x3d212031696f6328;
    FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f59621f,&UNK_10f595fed,0x546);
  }
LAB_109a4b41c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a4b420);
  (*pcVar5)();
}



/* Entry: 109a4b510; end: 109a4b71b;  */

void FUN_109a4b510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_128;
  long lStack_120;
  undefined1 *puStack_118;
  undefined1 auStack_110 [16];
  undefined4 auStack_100 [2];
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 auStack_60 [16];
  
  FUN_109a85f44(auStack_b0,param_5,0,1,0,0);
  if (param_6 == 0) {
    uStack_160 = param_1;
    uStack_158 = param_2;
    uStack_150 = param_3;
    uStack_148 = param_4;
    FUN_109a48880(auStack_b0,&uStack_160);
  }
  else {
    auStack_c8[0] = 0xc1020006;
    puStack_c0 = &uStack_e8;
    uStack_b8 = 0x400000001;
    uStack_e8 = param_1;
    uStack_e0 = param_2;
    uStack_d8 = param_3;
    uStack_d0 = param_4;
    FUN_109a85f44(&uStack_160,param_6,0,1,0,0);
    uStack_f0 = 0;
    auStack_100[0] = 0x1010000;
    puStack_f8 = (undefined1 *)&uStack_160;
    FUN_109a48a40(auStack_b0,auStack_c8,auStack_100);
    if (lStack_128 != 0) {
      piVar1 = (int *)(lStack_128 + 0x14);
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
        func_0x000109a848d4(&uStack_160);
      }
    }
    lStack_128 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    if (0 < uStack_160._4_4_) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_120 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < uStack_160._4_4_);
    }
    if (puStack_118 != auStack_110 && puStack_118 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_118 + -8));
    }
  }
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
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
      func_0x000109a848d4(auStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < iStack_ac) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_ac);
  }
  if (puStack_68 != auStack_60 && puStack_68 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_68 + -8));
  }
  return;
}



/* Entry: 109a4b71c; end: 109a4b84b;  */

void FUN_109a4b71c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  undefined1 auStack_30 [16];
  
  if ((param_1 == 0) || (*(short *)(param_1 + 2) != 0x4244)) {
    FUN_109a85f44(auStack_80,param_1,0,1,0,0);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_109a48880(auStack_80,&uStack_a0);
    if (lStack_48 != 0) {
      piVar1 = (int *)(lStack_48 + 0x14);
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
        func_0x000109a848d4(auStack_80);
      }
    }
    lStack_48 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (0 < iStack_7c) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iStack_7c);
    }
    if (puStack_38 != auStack_30 && puStack_38 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_38 + -8));
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x18);
    FUN_109a4e18c(lVar5);
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined4 *)(lVar5 + 0x68) = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)(*(long *)(param_1 + 0x20),(long)*(int *)(param_1 + 0x28) << 3)
      ;
      return;
    }
  }
  return;
}



/* Entry: 109a4b84c; end: 109a4b8eb;  */

void FUN_109a4b84c(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined4 *)0x34;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar2 + 3) = 0x6320736920797261;
  *(undefined8 *)(puVar2 + 1) = 0x7262696c20656854;
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x2c;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 7) = 0x2074756f68746977;
  *(undefined8 *)(puVar2 + 5) = 0x2064656c69706d6f;
  *(undefined8 *)(puVar2 + 10) = 0x74726f7070757320;
  *(undefined8 *)(puVar2 + 8) = 0x414455432074756f;
  FUN_109ac3188(0xffffff28,&puStack_30,&UNK_10f5962f0,&UNK_10f5962fe,0x61);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a4b8c0);
  (*pcVar1)();
}



/* Entry: 109a4b8ec; end: 109a4b98b;  */

void FUN_109a4b8ec(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined4 *)0x34;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar2 + 3) = 0x6320736920797261;
  *(undefined8 *)(puVar2 + 1) = 0x7262696c20656854;
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x2c;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 7) = 0x2074756f68746977;
  *(undefined8 *)(puVar2 + 5) = 0x2064656c69706d6f;
  *(undefined8 *)(puVar2 + 10) = 0x74726f7070757320;
  *(undefined8 *)(puVar2 + 8) = 0x414455432074756f;
  FUN_109ac3188(0xffffff28,&puStack_30,&UNK_10f5962f0,&UNK_10f5962fe,0x61);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a4b960);
  (*pcVar1)();
}



/* Entry: 109a4b98c; end: 109a4ba2b;  */

void FUN_109a4b98c(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined4 *)0x34;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar2 + 3) = 0x6320736920797261;
  *(undefined8 *)(puVar2 + 1) = 0x7262696c20656854;
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x2c;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 7) = 0x2074756f68746977;
  *(undefined8 *)(puVar2 + 5) = 0x2064656c69706d6f;
  *(undefined8 *)(puVar2 + 10) = 0x74726f7070757320;
  *(undefined8 *)(puVar2 + 8) = 0x414455432074756f;
  FUN_109ac3188(0xffffff28,&puStack_30,&UNK_10f5963c8,&UNK_10f5963d6,0x61);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a4ba00);
  (*pcVar1)();
}



/* Entry: 109a4ba2c; end: 109a4bacb;  */

void FUN_109a4ba2c(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined4 *)0x34;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar2 + 3) = 0x6320736920797261;
  *(undefined8 *)(puVar2 + 1) = 0x7262696c20656854;
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x2c;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 7) = 0x2074756f68746977;
  *(undefined8 *)(puVar2 + 5) = 0x2064656c69706d6f;
  *(undefined8 *)(puVar2 + 10) = 0x74726f7070757320;
  *(undefined8 *)(puVar2 + 8) = 0x414455432074756f;
  FUN_109ac3188(0xffffff28,&puStack_30,&UNK_10f596498,&UNK_10f5964a6,0x61);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a4baa0);
  (*pcVar1)();
}



/* Entry: 109a4bacc; end: 109a4bb9f;  */

void FUN_109a4bacc(int param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  puVar3 = (undefined8 *)0x28;
  func_0x000107c2ae8c();
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = 0xff80;
    if (0 < param_1) {
      uVar1 = param_1 + 7U & 0xfffffff8;
    }
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *(undefined4 *)puVar3 = 0x42890000;
    *(uint *)(puVar3 + 4) = uVar1;
    return;
  }
  puVar4 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_30 = puVar4 + 1;
  *(undefined1 *)puStack_30 = 0;
  uStack_28 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596a7a,&UNK_10f596553,0x5c);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a4bb6c);
  (*pcVar2)();
}



/* Entry: 109a4bba0; end: 109a4bc4b;  */

void FUN_109a4bba0(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
    uVar2 = (ulong)*(uint *)(param_1 + 0x20);
    FUN_109a4bacc();
    *(long *)(uVar2 + 0x18) = param_1;
    return;
  }
  puVar3 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar3 = 1;
  puStack_30 = puVar3 + 1;
  *(undefined1 *)puStack_30 = 0;
  uStack_28 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f59653b,&UNK_10f596553,0x79);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a4bc18);
  (*pcVar1)();
}



/* Entry: 109a4bc4c; end: 109a4bd0f;  */

void FUN_109a4bc4c(long *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (long *)0x0) {
    puVar2 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f5965d6,&UNK_10f596553,0xb7);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109a4bcdc);
    (*pcVar1)();
  }
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_109a4bd10(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar3 + -8));
    return;
  }
  return;
}



/* Entry: 109a4bd10; end: 109a4be2f;  */

void FUN_109a4bd10(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x18) + 0x10);
    }
    puVar6 = *(undefined8 **)(param_1 + 8);
    while (puVar1 = puVar6, puVar1 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)puVar1[1];
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == 0) {
        _free(puVar1[-1]);
      }
      else if (puVar7 == (undefined8 *)0x0) {
        *(undefined8 **)(lVar4 + 8) = puVar1;
        *(undefined8 **)(lVar4 + 0x10) = puVar1;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20) + -0x10;
        puVar7 = puVar1;
      }
      else {
        puVar5 = (undefined8 *)puVar7[1];
        *puVar1 = puVar7;
        puVar1[1] = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = puVar1;
        }
        puVar7[1] = puVar1;
        puVar7 = puVar1;
      }
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  puVar3 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar3 = 1;
  puStack_40 = puVar3 + 1;
  *(undefined1 *)puStack_40 = 0;
  uStack_38 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_40,&UNK_10f596a8c,&UNK_10f596553,0x8c);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a4be04);
  (*pcVar2)();
}



/* Entry: 109a4be30; end: 109a4befb;  */

void FUN_109a4be30(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puStack_40;
  undefined4 *puStack_38;
  
  if (param_1 == 0) {
    puVar3 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    *(undefined1 *)(puVar3 + 1) = 0;
    puStack_38 = puVar3;
    FUN_109ac3188(0xffffffe5,&stack0xffffffffffffffd0,&UNK_10f5965ea,&UNK_10f596553,200);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109a4bec8);
    (*pcVar2)();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    if (param_1 != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x18) + 0x10);
      }
      puVar7 = *(undefined8 **)(param_1 + 8);
      while (puVar1 = puVar7, puVar1 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)puVar1[1];
        lVar5 = *(long *)(param_1 + 0x18);
        if (lVar5 == 0) {
          _free(puVar1[-1]);
        }
        else if (puVar8 == (undefined8 *)0x0) {
          *(undefined8 **)(lVar5 + 8) = puVar1;
          *(undefined8 **)(lVar5 + 0x10) = puVar1;
          *puVar1 = 0;
          puVar1[1] = 0;
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20) + -0x10;
          puVar8 = puVar1;
        }
        else {
          puVar6 = (undefined8 *)puVar8[1];
          *puVar1 = puVar8;
          puVar1[1] = puVar6;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = puVar1;
          }
          puVar8[1] = puVar1;
          puVar8 = puVar1;
        }
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      return;
    }
    puVar3 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_40 = puVar3 + 1;
    *(undefined1 *)puStack_40 = 0;
    puStack_38 = (undefined4 *)0x0;
    FUN_109ac3188(0xffffffe5,&puStack_40,&UNK_10f596a8c,&UNK_10f596553,0x8c);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109a4be04);
    (*pcVar2)();
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
  iVar4 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    iVar4 = *(int *)(param_1 + 0x20) + -0x10;
  }
  *(int *)(param_1 + 0x24) = iVar4;
  return;
}



/* Entry: 109a4befc; end: 109a4bfab;  */

void FUN_109a4befc(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    *param_2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x24);
    return;
  }
  puVar2 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  *(undefined1 *)puStack_30 = 0;
  uStack_28 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f5965fc,&UNK_10f596553,0x114);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a4bf78);
  (*pcVar1)();
}



/* Entry: 109a4bfac; end: 109a4c0e7;  */

void FUN_109a4bfac(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if ((param_1 == 0) || (param_2 == (long *)0x0)) {
    puVar4 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_30 = puVar4 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596610,&UNK_10f596553,0x120);
  }
  else {
    lVar2 = param_2[1];
    if ((int)lVar2 <= *(int *)(param_1 + 0x20)) {
      lVar5 = *param_2;
      *(long *)(param_1 + 0x10) = lVar5;
      *(int *)(param_1 + 0x24) = (int)lVar2;
      if (lVar5 == 0) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
        iVar1 = 0;
        if (*(long *)(param_1 + 8) != 0) {
          iVar1 = *(int *)(param_1 + 0x20) + -0x10;
        }
        *(int *)(param_1 + 0x24) = iVar1;
      }
      return;
    }
    puVar4 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_30 = puVar4 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffff37,&puStack_30,&UNK_10f596610,&UNK_10f596553,0x122);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a4c094);
  (*pcVar3)();
}



/* Entry: 109a4c0e8; end: 109a4c30f;  */

long FUN_109a4c0e8(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == 0) {
    puVar2 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    uStack_28 = 0x14;
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[5] = 0x7265746e;
    *(undefined8 *)(puVar2 + 3) = 0x696f702065676172;
    *(undefined8 *)(puVar2 + 1) = 0x6f7473204c4c554e;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f59663c,&UNK_10f596553,0x147);
  }
  else {
    if (param_2 >> 0x1f == 0) {
      iVar3 = *(int *)(param_1 + 0x24);
      if ((ulong)(long)iVar3 < param_2) {
        if ((ulong)(long)(int)((*(uint *)(param_1 + 0x20) & 0xfffffff8) - 0x10) < param_2) {
          puVar2 = (undefined4 *)0x2c;
          func_0x000107c2ae8c();
          *(undefined8 *)(puVar2 + 3) = 0x6920657a69732064;
          *(undefined8 *)(puVar2 + 1) = 0x6574736575716572;
          *puVar2 = 1;
          puStack_30 = puVar2 + 1;
          uStack_28 = 0x25;
          *(undefined1 *)((long)puVar2 + 0x29) = 0;
          *(undefined8 *)(puVar2 + 7) = 0x6f7420726f206576;
          *(undefined8 *)(puVar2 + 5) = 0x69746167656e2073;
          *(undefined8 *)((long)puVar2 + 0x21) = 0x676962206f6f7420;
          FUN_109ac3188(0xffffff2d,&puStack_30,&UNK_10f59663c,&UNK_10f596553,0x152);
          goto LAB_109a4c29c;
        }
        FUN_109a4c310(param_1);
        iVar3 = *(int *)(param_1 + 0x24);
      }
      *(uint *)(param_1 + 0x24) = iVar3 - (int)param_2 & 0xfffffff8;
      return (*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x20)) - (long)iVar3;
    }
    puVar2 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar2 + 3) = 0x79726f6d656d2065;
    *(undefined8 *)(puVar2 + 1) = 0x6772616c206f6f54;
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    uStack_28 = 0x23;
    *(undefined1 *)((long)puVar2 + 0x27) = 0;
    *(undefined4 *)((long)puVar2 + 0x23) = 0x64657473;
    *(undefined8 *)(puVar2 + 7) = 0x7365757165722073;
    *(undefined8 *)(puVar2 + 5) = 0x69206b636f6c6220;
    FUN_109ac3188(0xffffff2d,&puStack_30,&UNK_10f59663c,&UNK_10f596553,0x14a);
  }
LAB_109a4c29c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a4c2a0);
  (*pcVar1)();
}



/* Entry: 109a4c310; end: 109a4c44f;  */

void FUN_109a4c310(long param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 8), plVar6 == (long *)0x0)) {
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == 0) {
        plVar6 = (long *)(long)*(int *)(param_1 + 0x20);
        func_0x000107c2ae8c();
      }
      else {
        puStack_40 = *(undefined4 **)(lVar7 + 0x10);
        uStack_38 = CONCAT44(uStack_38._4_4_,*(undefined4 *)(lVar7 + 0x24));
        FUN_109a4c310(lVar7);
        plVar6 = *(long **)(lVar7 + 0x10);
        FUN_109a4bfac(lVar7,&puStack_40);
        plVar3 = *(long **)(lVar7 + 0x10);
        if (plVar6 == plVar3) {
          *(undefined4 *)(lVar7 + 0x24) = 0;
          *(undefined8 *)(lVar7 + 8) = 0;
          *(undefined8 *)(lVar7 + 0x10) = 0;
        }
        else {
          plVar5 = (long *)plVar6[1];
          plVar3[1] = (long)plVar5;
          if (plVar5 != (long *)0x0) {
            *plVar5 = (long)plVar3;
          }
        }
      }
      plVar6[1] = 0;
      lVar4 = *(long *)(param_1 + 0x10);
      *plVar6 = lVar4;
      lVar7 = param_1;
      if (lVar4 != 0) {
        lVar7 = lVar4;
      }
      *(long **)(lVar7 + 8) = plVar6;
    }
    *(long **)(param_1 + 0x10) = plVar6;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20) + -0x10;
    return;
  }
  puVar2 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_40 = puVar2 + 1;
  *(undefined1 *)puStack_40 = 0;
  uStack_38 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_40,&UNK_10f596aa1,&UNK_10f596553,0xda);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a4c424);
  (*pcVar1)();
}



/* Entry: 109a4c450; end: 109a4c4b7;  */

int FUN_109a4c450(long param_1,int param_2,int param_3)

{
  if (param_3 < 0) {
    param_3 = param_2;
    _strlen();
  }
  FUN_109a4c0e8(param_1,(long)(param_3 + 1));
  _memcpy();
  *(undefined1 *)(param_1 + param_3) = 0;
  return param_3;
}



/* Entry: 109a4c4b8; end: 109a4c6e7;  */

uint * FUN_109a4c4b8(uint param_1,ulong param_2,ulong param_3,uint *param_4)

{
  ulong uVar1;
  code *pcVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  if (param_4 == (uint *)0x0) {
    puVar4 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_50 = puVar4 + 1;
    *(undefined1 *)puStack_50 = 0;
    uStack_48 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_50,&UNK_10f596698,&UNK_10f596553,0x179);
  }
  else if ((param_2 < 0x60) || (param_3 == 0)) {
    puVar4 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_50 = puVar4 + 1;
    *(undefined1 *)puStack_50 = 0;
    uStack_48 = 0;
    FUN_109ac3188(0xffffff37,&puStack_50,&UNK_10f596698,&UNK_10f596553,0x17b);
  }
  else {
    puVar3 = param_4;
    FUN_109a4c0e8(param_4,param_2);
    _bzero();
    *puVar3 = param_1 & 0xffff | 0x42990000;
    puVar3[1] = (uint)param_2;
    if ((((param_1 & 0xfff) == 0) || ((param_1 & 0xfff) == 7)) ||
       ((param_1 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((param_1 & 7) << 1) & 3) ==
        (uint)param_3)) {
      puVar3[0xb] = (uint)param_3;
      *(uint **)(puVar3 + 0x12) = param_4;
      uVar1 = 0;
      if (param_3 != 0) {
        uVar1 = 0x400 / param_3;
      }
      FUN_109a4c6e8(puVar3,uVar1);
      return puVar3;
    }
    puVar4 = (undefined4 *)0x74;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar4 + 0xf) = 0x6569666963657073;
    *(undefined8 *)(puVar4 + 0xd) = 0x2065687420666f20;
    *(undefined8 *)(puVar4 + 0x13) = 0x2820657079742074;
    *(undefined8 *)(puVar4 + 0x11) = 0x6e656d656c652064;
    *(undefined8 *)(puVar4 + 0x17) = 0x726f662030206573;
    *(undefined8 *)(puVar4 + 0x15) = 0x75206f7420797274;
    *(undefined8 *)((long)puVar4 + 0x6a) = 0x296570797420746e;
    *(undefined8 *)((long)puVar4 + 0x62) = 0x656d656c6520726f;
    *(undefined8 *)(puVar4 + 3) = 0x6e656d656c652064;
    *(undefined8 *)(puVar4 + 1) = 0x6569666963657053;
    *(undefined8 *)(puVar4 + 7) = 0x6d2074276e73656f;
    *(undefined8 *)(puVar4 + 5) = 0x6420657a69732074;
    *puVar4 = 1;
    puStack_50 = puVar4 + 1;
    uStack_48 = 0x6e;
    *(undefined1 *)((long)puVar4 + 0x72) = 0;
    *(undefined8 *)(puVar4 + 0xb) = 0x657a697320656874;
    *(undefined8 *)(puVar4 + 9) = 0x206f742068637461;
    FUN_109ac3188(0xffffff37,&puStack_50,&UNK_10f596698,&UNK_10f596553,0x18b);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a4c680);
  (*pcVar2)();
}



/* Entry: 109a4c6e8; end: 109a4c8b7;  */

void FUN_109a4c6e8(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x48) == 0)) {
    puVar4 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_30 = puVar4 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596713,&UNK_10f596553,0x19f);
  }
  else {
    if (-1 < param_2) {
      iVar1 = *(int *)(param_1 + 0x2c);
      if (param_2 == 0) {
        param_2 = 0;
        if (iVar1 != 0) {
          param_2 = 0x400 / iVar1;
        }
        if (param_2 < 2) {
          param_2 = 1;
        }
      }
      iVar2 = (*(uint *)(*(long *)(param_1 + 0x48) + 0x20) & 0xfffffff8) - 0x30;
      if (iVar2 < param_2 * iVar1) {
        param_2 = 0;
        if (iVar1 != 0) {
          param_2 = iVar2 / iVar1;
        }
        if (param_2 == 0) {
          puVar4 = (undefined4 *)0x44;
          func_0x000107c2ae8c();
          *(undefined8 *)(puVar4 + 3) = 0x6973206b636f6c62;
          *(undefined8 *)(puVar4 + 1) = 0x20656761726f7453;
          *puVar4 = 1;
          puStack_30 = puVar4 + 1;
          uStack_28 = 0x3c;
          *(undefined1 *)(puVar4 + 0x10) = 0;
          *(undefined8 *)(puVar4 + 7) = 0x206c6c616d73206f;
          *(undefined8 *)(puVar4 + 5) = 0x6f7420736920657a;
          *(undefined8 *)(puVar4 + 0xb) = 0x6575716573206568;
          *(undefined8 *)(puVar4 + 9) = 0x7420746966206f74;
          *(undefined8 *)(puVar4 + 0xe) = 0x73746e656d656c65;
          *(undefined8 *)(puVar4 + 0xc) = 0x2065636e65757165;
          FUN_109ac3188(0xffffff2d,&puStack_30,&UNK_10f596713,&UNK_10f596553,0x1b1);
          goto LAB_109a4c844;
        }
      }
      *(int *)(param_1 + 0x40) = param_2;
      return;
    }
    puVar4 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_30 = puVar4 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffff2d,&puStack_30,&UNK_10f596713,&UNK_10f596553,0x1a1);
  }
LAB_109a4c844:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a4c848);
  (*pcVar3)();
}



/* Entry: 109a4c8b8; end: 109a4c987;  */

long FUN_109a4c8b8(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  if (uVar4 <= param_2) {
    iVar1 = (uVar4 & (int)param_2 >> 0x1f) + param_2;
    param_2 = 0;
    if ((int)uVar4 <= iVar1) {
      param_2 = uVar4;
    }
    param_2 = iVar1 - param_2;
    if (uVar4 <= param_2) {
      return 0;
    }
  }
  plVar3 = *(long **)(param_1 + 0x58);
  if ((int)uVar4 < (int)(param_2 * 2)) {
    do {
      plVar3 = (long *)*plVar3;
      uVar4 = uVar4 - *(int *)((long)plVar3 + 0x14);
      uVar2 = param_2 - uVar4;
    } while ((int)param_2 < (int)uVar4);
  }
  else {
    for (; uVar2 = param_2, *(int *)((long)plVar3 + 0x14) <= (int)param_2;
        plVar3 = (long *)plVar3[1]) {
      param_2 = param_2 - *(int *)((long)plVar3 + 0x14);
    }
  }
  return plVar3[3] + (long)*(int *)(param_1 + 0x2c) * (long)(int)uVar2;
}



/* Entry: 109a4c988; end: 109a4cb13;  */

long FUN_109a4c988(long param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined4 *puStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  long lStack_78;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar3 = *(int *)(param_1 + 0x2c);
    uVar6 = param_3;
    func_0x000109a4c934(param_3,param_1);
    iVar12 = (int)uVar6 * iVar3;
    if (iVar12 == 0) {
      param_2 = 0;
    }
    else {
      auStack_80[0] = 0x40;
      plStack_70 = *(long **)(param_1 + 0x58);
      if (plStack_70 == (long *)0x0) {
        lStack_48 = 0;
        uStack_50 = 0;
        plStack_70 = (long *)0x0;
        lStack_58 = 0;
        lStack_60 = 0;
      }
      else {
        lStack_60 = plStack_70[3];
        lStack_48 = *(long *)(*plStack_70 + 0x18) +
                    ((long)*(int *)(*plStack_70 + 0x14) + -1) * (long)iVar3;
        uStack_50 = (undefined4)plStack_70[2];
        lStack_58 = lStack_60 + (long)*(int *)((long)plStack_70 + 0x14) * (long)iVar3;
      }
      lStack_78 = param_1;
      lStack_68 = lStack_60;
      FUN_109a4cc44(auStack_80,param_3,0);
      lVar8 = lStack_68;
      lVar9 = lStack_58;
      lVar10 = param_2;
      plVar11 = plStack_70;
      do {
        iVar4 = (int)lVar9 - (int)lVar8;
        iVar2 = iVar12;
        if (iVar4 <= iVar12) {
          iVar2 = iVar4;
        }
        _memcpy(lVar10,lVar8,(long)iVar2);
        lVar10 = lVar10 + iVar2;
        plVar11 = (long *)plVar11[1];
        lVar8 = plVar11[3];
        lVar9 = lVar8 + (long)*(int *)((long)plVar11 + 0x14) * (long)iVar3;
        iVar4 = iVar12 - iVar2;
        bVar1 = iVar2 <= iVar12;
        iVar12 = iVar4;
      } while (iVar4 != 0 && bVar1);
    }
    return param_2;
  }
  puVar7 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar7 = 1;
  puStack_90 = puVar7 + 1;
  *(undefined1 *)puStack_90 = 0;
  uStack_88 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_90,&UNK_10f596762,&UNK_10f596553,0x227);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a4cae8);
  (*pcVar5)();
}



/* Entry: 109a4cb14; end: 109a4cc43;  */

void FUN_109a4cb14(long param_1,undefined4 *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_2 != (undefined4 *)0x0) {
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    if (param_1 != 0) {
      *param_2 = 0x40;
      *(long *)(param_2 + 2) = param_1;
      plVar7 = *(long **)(param_1 + 0x58);
      if (plVar7 == (long *)0x0) {
        *(undefined8 *)(param_2 + 0xe) = 0;
        *(undefined8 *)(param_2 + 6) = 0;
        *(undefined8 *)(param_2 + 4) = 0;
        *(undefined8 *)(param_2 + 10) = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        param_2[0xc] = 0;
      }
      else {
        plVar8 = (long *)*plVar7;
        lVar5 = plVar7[3];
        *(long *)(param_2 + 6) = lVar5;
        lVar9 = plVar8[3];
        iVar6 = *(int *)((long)plVar8 + 0x14);
        iVar2 = *(int *)(param_1 + 0x2c);
        lVar1 = lVar9 + (iVar6 + -1) * iVar2;
        *(long *)(param_2 + 0xe) = lVar1;
        param_2[0xc] = (int)plVar7[2];
        if (param_3 == 0) {
          iVar6 = *(int *)((long)plVar7 + 0x14);
        }
        else {
          *(long *)(param_2 + 6) = lVar1;
          *(long *)(param_2 + 0xe) = lVar5;
          lVar5 = lVar9;
          plVar7 = plVar8;
        }
        *(long **)(param_2 + 4) = plVar7;
        *(long *)(param_2 + 8) = lVar5;
        *(long *)(param_2 + 10) = lVar5 + iVar6 * iVar2;
      }
      return;
    }
  }
  puVar4 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_30 = puVar4 + 1;
  *(undefined1 *)puStack_30 = 0;
  uStack_28 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596848,&UNK_10f596553,0x3b1);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a4cc10);
  (*pcVar3)();
}



/* Entry: 109a4cc44; end: 109a4ceef;  */

void FUN_109a4cc44(long param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if ((param_1 == 0) || (lVar7 = *(long *)(param_1 + 8), lVar7 == 0)) {
    puVar3 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_30 = puVar3 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596869,&UNK_10f596553,0x415);
    goto LAB_109a4ce7c;
  }
  iVar1 = *(int *)(lVar7 + 0x2c);
  if (param_3 == 0) {
    iVar10 = *(int *)(lVar7 + 0x28);
    if (param_2 < 0) {
      if (param_2 + iVar10 < 0 != SCARRY4(param_2,iVar10)) {
        puVar3 = (undefined4 *)0x8;
        func_0x000107c2ae8c();
        *puVar3 = 1;
        puStack_30 = puVar3 + 1;
        *(undefined1 *)puStack_30 = 0;
        uStack_28 = 0;
        FUN_109ac3188(0xffffff2d,&puStack_30,&UNK_10f596869,&UNK_10f596553,0x41f);
        goto LAB_109a4ce7c;
      }
      iVar4 = iVar10 + param_2;
    }
    else {
      iVar4 = param_2;
      if ((iVar10 <= param_2) && (iVar4 = param_2 - iVar10, iVar10 <= param_2 - iVar10)) {
        puVar3 = (undefined4 *)0x8;
        func_0x000107c2ae8c();
        *puVar3 = 1;
        puStack_30 = puVar3 + 1;
        *(undefined1 *)puStack_30 = 0;
        uStack_28 = 0;
        FUN_109ac3188(0xffffff2d,&puStack_30,&UNK_10f596869,&UNK_10f596553,0x426);
LAB_109a4ce7c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109a4ce80);
        (*pcVar2)();
      }
    }
    plVar9 = *(long **)(lVar7 + 0x58);
    iVar8 = *(int *)((long)plVar9 + 0x14);
    iVar5 = iVar4;
    if (iVar8 <= iVar4) {
      if (iVar10 < iVar4 * 2) {
        do {
          plVar9 = (long *)*plVar9;
          iVar8 = *(int *)((long)plVar9 + 0x14);
          iVar10 = iVar10 - iVar8;
          iVar5 = iVar4 - iVar10;
        } while (iVar4 < iVar10);
      }
      else {
        do {
          plVar9 = (long *)plVar9[1];
          iVar5 = iVar5 - iVar8;
          iVar8 = *(int *)((long)plVar9 + 0x14);
        } while (iVar8 <= iVar5);
      }
    }
    lVar7 = plVar9[3];
    *(long *)(param_1 + 0x18) = lVar7 + iVar5 * iVar1;
    if (*(long **)(param_1 + 0x10) != plVar9) {
      *(long **)(param_1 + 0x10) = plVar9;
      *(long *)(param_1 + 0x20) = lVar7;
      *(long *)(param_1 + 0x28) = lVar7 + iVar8 * iVar1;
    }
  }
  else {
    uVar6 = iVar1 * param_2;
    plVar9 = *(long **)(param_1 + 0x10);
    lVar7 = *(long *)(param_1 + 0x18);
    if ((int)uVar6 < 1) {
      uVar11 = *(ulong *)(param_1 + 0x20);
      uVar12 = lVar7 + (int)uVar6;
      if (uVar12 < uVar11) {
        do {
          uVar6 = uVar6 + ((int)lVar7 - (int)uVar11);
          plVar9 = (long *)*plVar9;
          uVar11 = plVar9[3];
          lVar7 = uVar11 + (long)*(int *)((long)plVar9 + 0x14) * (long)iVar1;
        } while ((long)*(int *)((long)plVar9 + 0x14) * (long)iVar1 + (long)(int)uVar6 < 0);
        *(long **)(param_1 + 0x10) = plVar9;
        uVar12 = lVar7 + (int)uVar6;
        *(ulong *)(param_1 + 0x20) = uVar11;
        *(long *)(param_1 + 0x28) = lVar7;
      }
    }
    else {
      uVar11 = *(ulong *)(param_1 + 0x28);
      uVar12 = lVar7 + (ulong)uVar6;
      if (uVar11 <= uVar12) {
        do {
          uVar6 = uVar6 + ((int)lVar7 - (int)uVar11);
          plVar9 = (long *)plVar9[1];
          lVar7 = plVar9[3];
          uVar11 = lVar7 + (long)*(int *)((long)plVar9 + 0x14) * (long)iVar1;
        } while (*(int *)((long)plVar9 + 0x14) * iVar1 <= (int)uVar6);
        *(long **)(param_1 + 0x10) = plVar9;
        uVar12 = lVar7 + (int)uVar6;
        *(long *)(param_1 + 0x20) = lVar7;
        *(ulong *)(param_1 + 0x28) = uVar11;
      }
    }
    *(ulong *)(param_1 + 0x18) = uVar12;
  }
  return;
}



/* Entry: 109a4cef0; end: 109a4d147;  */

uint * FUN_109a4cef0(uint param_1,uint param_2,uint param_3,long param_4,uint param_5,uint *param_6,
                    long param_7)

{
  long lVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  if ((((int)param_2 < 0x60) || ((int)param_3 < 1)) || ((int)param_5 < 0)) {
    puVar3 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_60 = puVar3 + 1;
    *(undefined1 *)puStack_60 = 0;
    uStack_58 = 0;
    FUN_109ac3188(0xffffff37,&puStack_60,&UNK_10f596772,&UNK_10f596553,0x24e);
  }
  else {
    if (param_6 != (uint *)0x0) {
      if ((param_5 == 0) || (param_4 != 0 && param_7 != 0)) {
        _bzero(param_6,param_2);
        *param_6 = param_1 & 0xffff | 0x42990000;
        param_6[1] = param_2;
        if (((param_1 & 0xfff) == 0) ||
           ((param_1 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((param_1 & 7) << 1) & 3) ==
            param_3)) {
          param_6[10] = param_5;
          param_6[0xb] = param_3;
          lVar1 = param_4 + (ulong)(param_5 * param_3);
          *(long *)(param_6 + 0xc) = lVar1;
          *(long *)(param_6 + 0xe) = lVar1;
          if (param_5 != 0) {
            *(long *)(param_6 + 0x16) = param_7;
            *(long *)param_7 = param_7;
            *(long *)(param_7 + 8) = param_7;
            *(undefined4 *)(param_7 + 0x10) = 0;
            *(uint *)(param_7 + 0x14) = param_5;
            *(long *)(param_7 + 0x18) = param_4;
          }
          return param_6;
        }
        puVar3 = (undefined4 *)0x70;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar3 + 0xf) = 0x70797420746e656d;
        *(undefined8 *)(puVar3 + 0xd) = 0x656c652064656e69;
        *(undefined8 *)(puVar3 + 0x13) = 0x203020657375206f;
        *(undefined8 *)(puVar3 + 0x11) = 0x7420797274282065;
        *(undefined8 *)(puVar3 + 0x17) = 0x656c652065636e65;
        *(undefined8 *)(puVar3 + 0x15) = 0x7571657320726f66;
        *(undefined8 *)((long)puVar3 + 0x66) = 0x296570797420746e;
        *(undefined8 *)((long)puVar3 + 0x5e) = 0x656d656c65206563;
        *(undefined8 *)(puVar3 + 3) = 0x656f6420657a6973;
        *(undefined8 *)(puVar3 + 1) = 0x20746e656d656c45;
        *(undefined8 *)(puVar3 + 7) = 0x6874206f74206863;
        *(undefined8 *)(puVar3 + 5) = 0x74616d2074276e73;
        *puVar3 = 1;
        puStack_60 = puVar3 + 1;
        uStack_58 = 0x6a;
        *(undefined1 *)((long)puVar3 + 0x6e) = 0;
        *(undefined8 *)(puVar3 + 0xb) = 0x6665646572702066;
        *(undefined8 *)(puVar3 + 9) = 0x6f20657a69732065;
        FUN_109ac3188(0xffffff37,&puStack_60,&UNK_10f596772,&UNK_10f596553,0x25f);
        goto LAB_109a4d0dc;
      }
    }
    puVar3 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_60 = puVar3 + 1;
    *(undefined1 *)puStack_60 = 0;
    uStack_58 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_60,&UNK_10f596772,&UNK_10f596553,0x251);
  }
LAB_109a4d0dc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a4d0e0);
  (*pcVar2)();
}



/* Entry: 109a4d148; end: 109a4d217;  */

void FUN_109a4d148(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    *(undefined4 *)param_2 = 0x30;
    param_2[1] = param_1;
    uVar5 = 0;
    if (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0) {
      uVar5 = **(undefined8 **)(param_1 + 0x58);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    param_2[2] = uVar5;
    param_2[3] = uVar2;
    param_2[5] = uVar1;
    return;
  }
  puVar4 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_30 = puVar4 + 1;
  *(undefined1 *)puStack_30 = 0;
  uStack_28 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f5967f5,&UNK_10f596553,0x334);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a4d1e4);
  (*pcVar3)();
}



/* Entry: 109a4d218; end: 109a4d2cb;  */

void FUN_109a4d218(long param_1,int param_2,int param_3,long param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if ((param_4 == 0) || (param_5 == (undefined8 *)0x0)) {
    puVar4 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_30 = puVar4 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596808,&UNK_10f596553,0x346);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109a4d298);
    (*pcVar3)();
  }
  FUN_109a4c4b8(param_1,(long)param_2,(long)param_3);
  if ((param_1 != 0) && (param_5 != (undefined8 *)0x0)) {
    param_5[3] = 0;
    param_5[2] = 0;
    param_5[5] = 0;
    param_5[4] = 0;
    param_5[1] = 0;
    *param_5 = 0;
    *(undefined4 *)param_5 = 0x30;
    param_5[1] = param_1;
    uVar5 = 0;
    if (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0) {
      uVar5 = **(undefined8 **)(param_1 + 0x58);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    param_5[2] = uVar5;
    param_5[3] = uVar2;
    param_5[5] = uVar1;
    return;
  }
  puVar4 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_30 = puVar4 + 1;
  *(undefined1 *)puStack_30 = 0;
  uStack_28 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f5967f5,&UNK_10f596553,0x334);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a4d1e4);
  (*pcVar3)();
}



/* Entry: 109a4d2cc; end: 109a4d3af;  */

void FUN_109a4d2cc(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(param_1 + 8);
    *(long *)(lVar5 + 0x38) = lVar1;
    if (lVar8 != 0) {
      iVar6 = 0;
      lVar7 = *(long *)(lVar5 + 0x58);
      uVar2 = 0;
      if ((long)*(int *)(lVar5 + 0x2c) != 0) {
        uVar2 = (undefined4)((lVar1 - *(long *)(lVar8 + 0x18)) / (long)*(int *)(lVar5 + 0x2c));
      }
      *(undefined4 *)(lVar8 + 0x14) = uVar2;
      lVar8 = lVar7;
      do {
        iVar6 = *(int *)(lVar8 + 0x14) + iVar6;
        lVar8 = *(long *)(lVar8 + 8);
      } while (lVar8 != lVar7);
      *(int *)(lVar5 + 0x28) = iVar6;
    }
    return;
  }
  puVar4 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_30 = puVar4 + 1;
  *(undefined1 *)puStack_30 = 0;
  uStack_28 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596818,&UNK_10f596553,0x352);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a4d37c);
  (*pcVar3)();
}



/* Entry: 109a4d3b0; end: 109a4d49f;  */

void FUN_109a4d3b0(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
    FUN_109a4d2cc();
    lVar1 = *(long *)(param_1 + 8);
    if (((*(long *)(param_1 + 0x10) != 0) && (lVar4 = *(long *)(lVar1 + 0x48), lVar4 != 0)) &&
       (iVar5 = (int)*(undefined8 *)(lVar4 + 0x10) + *(int *)(lVar4 + 0x20),
       ((iVar5 - *(int *)(lVar4 + 0x24)) - *(int *)(lVar1 + 0x30) & 0xfffffff8U) == 0)) {
      uVar6 = *(undefined8 *)(lVar1 + 0x38);
      *(uint *)(lVar4 + 0x24) = iVar5 - (int)uVar6 & 0xfffffff8;
      *(undefined8 *)(lVar1 + 0x30) = uVar6;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
  }
  puVar3 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar3 = 1;
  puStack_30 = puVar3 + 1;
  *(undefined1 *)puStack_30 = 0;
  uStack_28 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596829,&UNK_10f596553,0x371);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a4d46c);
  (*pcVar2)();
}



/* Entry: 109a4d4a0; end: 109a4d56b;  */

void FUN_109a4d4a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if ((param_1 != 0) && (lVar5 = *(long *)(param_1 + 8), lVar5 != 0)) {
    FUN_109a4d2cc(param_1);
    FUN_109a4d56c(lVar5,0);
    uVar1 = *(undefined8 *)(lVar5 + 0x30);
    uVar2 = *(undefined8 *)(lVar5 + 0x38);
    *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(lVar5 + 0x58);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    return;
  }
  puVar4 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_30 = puVar4 + 1;
  *(undefined1 *)puStack_30 = 0;
  uStack_28 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596837,&UNK_10f596553,0x390);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a4d53c);
  (*pcVar3)();
}



/* Entry: 109a4d56c; end: 109a4d86f;  */

void FUN_109a4d56c(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    puVar7 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar7 = 1;
    puStack_50 = puVar7 + 1;
    *(undefined1 *)puStack_50 = 0;
    uStack_48 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_50,&UNK_10f596ab3,&UNK_10f596553,0x27d);
LAB_109a4d824:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109a4d828);
    (*pcVar5)();
  }
  puVar6 = *(undefined8 **)(param_1 + 0x50);
  if (puVar6 == (undefined8 *)0x0) {
    iVar3 = *(int *)(param_1 + 0x40);
    puVar6 = *(undefined8 **)(param_1 + 0x48);
    iVar8 = *(int *)(param_1 + 0x2c);
    if (iVar3 * 4 <= *(int *)(param_1 + 0x28)) {
      FUN_109a4c6e8(param_1,iVar3 << 1);
    }
    if (puVar6 == (undefined8 *)0x0) {
      puVar7 = (undefined4 *)0x2c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar7 + 3) = 0x7361682065636e65;
      *(undefined8 *)(puVar7 + 1) = 0x7571657320656854;
      *puVar7 = 1;
      puStack_50 = puVar7 + 1;
      uStack_48 = 0x25;
      *(undefined1 *)((long)puVar7 + 0x29) = 0;
      *(undefined8 *)(puVar7 + 7) = 0x6f7020656761726f;
      *(undefined8 *)(puVar7 + 5) = 0x7473204c4c554e20;
      *(undefined8 *)((long)puVar7 + 0x21) = 0x7265746e696f7020;
      FUN_109ac3188(0xffffffe5,&puStack_50,&UNK_10f596ab3,&UNK_10f596553,0x28a);
      goto LAB_109a4d824;
    }
    lVar10 = puVar6[2];
    iVar13 = *(int *)(puVar6 + 4);
    iVar2 = *(int *)((long)puVar6 + 0x24);
    if ((((ulong)(((lVar10 + iVar13) - (long)iVar2) - *(long *)(param_1 + 0x30)) < 8) &&
        (param_2 == 0)) && (*(int *)(param_1 + 0x2c) <= iVar2)) {
      iVar4 = 0;
      if (iVar8 != 0) {
        iVar4 = iVar2 / iVar8;
      }
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
      lVar1 = *(long *)(param_1 + 0x30) + (long)(iVar4 * iVar8);
      *(long *)(param_1 + 0x30) = lVar1;
      *(uint *)((long)puVar6 + 0x24) = (int)(lVar10 + iVar13) - (int)lVar1 & 0xfffffff8;
      return;
    }
    iVar13 = iVar3 * iVar8 + 0x20;
    if (iVar2 < iVar13) {
      iVar4 = iVar3 / 3;
      if (iVar3 < 6) {
        iVar4 = 1;
      }
      if (iVar2 < iVar4 * iVar8 + 0x28) {
        FUN_109a4c310(puVar6);
      }
      else {
        iVar8 = *(int *)(param_1 + 0x2c);
        iVar3 = 0;
        if (iVar8 != 0) {
          iVar3 = (iVar2 + -0x20) / iVar8;
        }
        iVar13 = iVar3 * iVar8 + 0x20;
      }
    }
    FUN_109a4c0e8(puVar6,(long)iVar13);
    puVar6[3] = (long)puVar6 + 0x27U & 0xfffffffffffffff8;
    *(int *)((long)puVar6 + 0x14) = iVar13 + -0x20;
    *puVar6 = 0;
    puVar6[1] = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x50) = puVar6[1];
  }
  puVar9 = *(undefined8 **)(param_1 + 0x58);
  if (puVar9 == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x58) = puVar6;
    puVar9 = puVar6;
    puVar11 = puVar6;
    puVar12 = puVar6;
  }
  else {
    *puVar6 = *puVar9;
    *puVar9 = puVar6;
    puVar11 = (undefined8 *)*puVar6;
    puVar12 = (undefined8 *)*puVar6 + 1;
  }
  puVar6[1] = puVar9;
  *puVar12 = puVar6;
  if (param_2 == 0) {
    lVar10 = puVar6[3];
    *(long *)(param_1 + 0x38) = lVar10;
    *(long *)(param_1 + 0x30) = lVar10 + *(int *)((long)puVar6 + 0x14);
    if (puVar6 == puVar11) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)((long)puVar11 + 0x14) + *(int *)(puVar11 + 2);
    }
    *(int *)(puVar6 + 2) = iVar8;
  }
  else {
    iVar3 = *(int *)((long)puVar6 + 0x14);
    iVar8 = *(int *)(param_1 + 0x2c);
    lVar10 = puVar6[3] + (long)iVar3;
    puVar6[3] = lVar10;
    if (puVar6 == puVar11) {
      *(long *)(param_1 + 0x30) = lVar10;
      *(long *)(param_1 + 0x38) = lVar10;
    }
    else {
      *(undefined8 **)(param_1 + 0x58) = puVar6;
      puVar9 = puVar6;
    }
    *(undefined4 *)(puVar6 + 2) = 0;
    iVar13 = 0;
    if (iVar8 != 0) {
      iVar13 = iVar3 / iVar8;
    }
    do {
      *(int *)(puVar6 + 2) = *(int *)(puVar6 + 2) + iVar13;
      puVar6 = (undefined8 *)puVar6[1];
    } while (puVar6 != puVar9);
  }
  *(undefined4 *)((long)puVar6 + 0x14) = 0;
  return;
}



/* Entry: 109a4d870; end: 109a4d977;  */

int FUN_109a4d870(long param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    puVar2 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596857,&UNK_10f596553,0x3fc);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109a4d944);
    (*pcVar1)();
  }
  iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x2c);
  lVar5 = (long)iVar3;
  if ((iVar3 < 0x21) && ((1L << (lVar5 - 1U & 0x3f) & 0x8000808bU) != 0)) {
    iVar3 = (int)(lVar4 - *(long *)(param_1 + 0x20) >> ((long)(char)(&UNK_10e02adde)[lVar5] & 0x3fU)
                 );
  }
  else {
    iVar3 = 0;
    if (lVar5 != 0) {
      iVar3 = (int)((lVar4 - *(long *)(param_1 + 0x20)) / lVar5);
    }
  }
  return (*(int *)(*(long *)(param_1 + 0x10) + 0x10) + iVar3) - *(int *)(param_1 + 0x30);
}



/* Entry: 109a4d978; end: 109a4da7f;  */

ulong FUN_109a4d978(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    uVar4 = *(ulong *)(param_1 + 0x38);
    if (*(ulong *)(param_1 + 0x30) <= uVar4) {
      FUN_109a4d56c(param_1,0);
      uVar4 = *(ulong *)(param_1 + 0x38);
    }
    if (param_2 != 0) {
      _memcpy(uVar4,param_2,(long)iVar1);
    }
    *(int *)(**(long **)(param_1 + 0x58) + 0x14) = *(int *)(**(long **)(param_1 + 0x58) + 0x14) + 1;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(ulong *)(param_1 + 0x38) = uVar4 + (long)iVar1;
    return uVar4;
  }
  puVar3 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar3 = 1;
  puStack_40 = puVar3 + 1;
  *(undefined1 *)puStack_40 = 0;
  uStack_38 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_40,&UNK_10f59687b,&UNK_10f596553,0x472);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a4da50);
  (*pcVar2)();
}



/* Entry: 109a4da80; end: 109a4dbeb;  */

/* WARNING: Removing unreachable block (ram,0x000109a4dc00) */
/* WARNING: Removing unreachable block (ram,0x000109a4dc20) */
/* WARNING: Removing unreachable block (ram,0x000109a4dc38) */

void FUN_109a4da80(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == 0) {
    puVar3 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_30 = puVar3 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596885,&UNK_10f596553,0x491);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x28);
    if (0 < iVar4) {
      lVar8 = *(long *)(param_1 + 0x38) - (long)*(int *)(param_1 + 0x2c);
      *(long *)(param_1 + 0x38) = lVar8;
      if (param_2 != 0) {
        _memcpy(param_2,lVar8);
        iVar4 = *(int *)(param_1 + 0x28);
      }
      *(long *)(param_1 + 0x38) = lVar8;
      *(int *)(param_1 + 0x28) = iVar4 + -1;
      iVar4 = *(int *)(**(long **)(param_1 + 0x58) + 0x14) + -1;
      *(int *)(**(long **)(param_1 + 0x58) + 0x14) = iVar4;
      if (iVar4 == 0) {
        plVar6 = *(long **)(param_1 + 0x58);
        plVar5 = (long *)*plVar6;
        if (plVar6 == plVar5) {
          lVar8 = *(long *)(param_1 + 0x30);
          iVar4 = ((int)lVar8 - (int)plVar6[3]) + *(int *)(param_1 + 0x2c) * (int)plVar6[2];
          *(int *)((long)plVar6 + 0x14) = iVar4;
          plVar6[3] = lVar8 - iVar4;
          *(undefined8 *)(param_1 + 0x58) = 0;
          *(undefined4 *)(param_1 + 0x28) = 0;
          *(undefined8 *)(param_1 + 0x30) = 0;
          *(undefined8 *)(param_1 + 0x38) = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x2c);
          *(int *)((long)plVar5 + 0x14) = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x38);
          lVar8 = *plVar5;
          lVar1 = plVar5[1];
          lVar7 = *(long *)(lVar8 + 0x18) + (long)iVar4 * (long)*(int *)(lVar8 + 0x14);
          *(long *)(param_1 + 0x30) = lVar7;
          *(long *)(param_1 + 0x38) = lVar7;
          *(long *)(lVar8 + 8) = lVar1;
          *(long *)plVar5[1] = lVar8;
          plVar6 = plVar5;
        }
        plVar6[1] = *(long *)(param_1 + 0x50);
        *(long **)(param_1 + 0x50) = plVar6;
        return;
      }
      return;
    }
    puVar3 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_30 = puVar3 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffff37,&puStack_30,&UNK_10f596885,&UNK_10f596553,0x493);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a4db9c);
  (*pcVar2)();
}



/* Entry: 109a4dbec; end: 109a4dcbf;  */

void FUN_109a4dbec(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_1 + 0x58);
  plVar3 = (long *)*plVar5;
  if (plVar5 == plVar3) {
    lVar4 = *(long *)(param_1 + 0x30);
    iVar1 = ((int)lVar4 - (int)plVar5[3]) + *(int *)(param_1 + 0x2c) * (int)plVar5[2];
    *(int *)((long)plVar5 + 0x14) = iVar1;
    plVar5[3] = lVar4 - iVar1;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    if (param_2 == 0) {
      iVar1 = *(int *)(param_1 + 0x2c);
      *(int *)((long)plVar3 + 0x14) = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x38);
      lVar4 = *plVar3;
      lVar6 = plVar3[1];
      lVar7 = *(long *)(lVar4 + 0x18) + (long)iVar1 * (long)*(int *)(lVar4 + 0x14);
      *(long *)(param_1 + 0x30) = lVar7;
      *(long *)(param_1 + 0x38) = lVar7;
    }
    else {
      iVar1 = (int)plVar5[2];
      iVar2 = *(int *)(param_1 + 0x2c);
      *(int *)((long)plVar5 + 0x14) = iVar2 * iVar1;
      plVar5[3] = plVar5[3] - (long)iVar2 * (long)iVar1;
      plVar3 = plVar5;
      do {
        *(int *)(plVar3 + 2) = (int)plVar3[2] - iVar1;
        plVar3 = (long *)plVar3[1];
      } while (plVar3 != plVar5);
      lVar4 = *plVar3;
      lVar6 = plVar3[1];
      *(long *)(param_1 + 0x58) = lVar6;
    }
    *(long *)(lVar4 + 8) = lVar6;
    *(long *)plVar3[1] = lVar4;
    plVar5 = plVar3;
  }
  plVar5[1] = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar5;
  return;
}



/* Entry: 109a4dcc0; end: 109a4df17;  */

void FUN_109a4dcc0(long param_1,long param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  long lVar7;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    puVar5 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    puStack_50 = puVar5 + 1;
    uStack_48 = 0x15;
    *(undefined1 *)((long)puVar5 + 0x19) = 0;
    *(undefined8 *)(puVar5 + 3) = 0x6f702065636e6575;
    *(undefined8 *)(puVar5 + 1) = 0x716573204c4c554e;
    *(undefined8 *)((long)puVar5 + 0x11) = 0x7265746e696f7020;
    FUN_109ac3188(0xffffffe5,&puStack_50,&UNK_10f5968a4,&UNK_10f596553,0x5b3);
  }
  else {
    if (-1 < (int)param_3) {
      iVar2 = *(int *)(param_1 + 0x2c);
      if (param_4 == 0) {
        if (param_3 != 0) {
          do {
            lVar7 = *(long *)(param_1 + 0x38);
            uVar6 = 0;
            if ((long)iVar2 != 0) {
              uVar6 = (uint)((*(long *)(param_1 + 0x30) - lVar7) / (long)iVar2);
            }
            if (0 < (int)uVar6) {
              uVar1 = param_3;
              if (uVar6 <= param_3) {
                uVar1 = uVar6;
              }
              *(uint *)(**(long **)(param_1 + 0x58) + 0x14) =
                   *(int *)(**(long **)(param_1 + 0x58) + 0x14) + uVar1;
              *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + uVar1;
              lVar4 = (long)iVar2 * (long)(int)uVar1;
              if (param_2 != 0) {
                _memcpy(lVar7,param_2,lVar4);
                param_2 = param_2 + lVar4;
                lVar7 = *(long *)(param_1 + 0x38);
              }
              param_3 = param_3 - uVar1;
              *(long *)(param_1 + 0x38) = lVar7 + lVar4;
              if ((int)param_3 < 1) {
                return;
              }
            }
            FUN_109a4d56c(param_1,0);
          } while( true );
        }
      }
      else if (param_3 != 0) {
        lVar7 = *(long *)(param_1 + 0x58);
        do {
          if ((lVar7 == 0) || (uVar6 = *(uint *)(lVar7 + 0x10), uVar6 == 0)) {
            FUN_109a4d56c(param_1,1);
            lVar7 = *(long *)(param_1 + 0x58);
            uVar6 = *(uint *)(lVar7 + 0x10);
          }
          uVar1 = uVar6;
          if ((int)param_3 <= (int)uVar6) {
            uVar1 = param_3;
          }
          param_3 = param_3 - uVar1;
          *(uint *)(lVar7 + 0x10) = uVar6 - uVar1;
          *(uint *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + uVar1;
          *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + uVar1;
          lVar4 = *(long *)(lVar7 + 0x18) - (long)(int)(uVar1 * iVar2);
          *(long *)(lVar7 + 0x18) = lVar4;
          if (param_2 != 0) {
            _memcpy(lVar4,param_2 + (int)(param_3 * iVar2),(long)(int)(uVar1 * iVar2));
          }
        } while (0 < (int)param_3);
      }
      return;
    }
    puVar5 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar5 + 3) = 0x65766f6d65722066;
    *(undefined8 *)(puVar5 + 1) = 0x6f207265626d756e;
    *puVar5 = 1;
    puStack_50 = puVar5 + 1;
    uStack_48 = 0x26;
    *(undefined1 *)((long)puVar5 + 0x2a) = 0;
    *(undefined8 *)(puVar5 + 7) = 0x656e207369207374;
    *(undefined8 *)(puVar5 + 5) = 0x6e656d656c652064;
    *(undefined8 *)((long)puVar5 + 0x22) = 0x657669746167656e;
    FUN_109ac3188(0xffffff37,&puStack_50,&UNK_10f5968a4,&UNK_10f596553,0x5b5);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a4ded0);
  (*pcVar3)();
}



/* Entry: 109a4df18; end: 109a4e18b;  */

void FUN_109a4df18(long param_1,long param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    puVar5 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    puStack_50 = puVar5 + 1;
    uStack_48 = 0x15;
    *(undefined1 *)((long)puVar5 + 0x19) = 0;
    *(undefined8 *)(puVar5 + 3) = 0x6f702065636e6575;
    *(undefined8 *)(puVar5 + 1) = 0x716573204c4c554e;
    *(undefined8 *)((long)puVar5 + 0x11) = 0x7265746e696f7020;
    FUN_109ac3188(0xffffffe5,&puStack_50,&UNK_10f5968da,&UNK_10f596553,0x5f8);
  }
  else {
    if (-1 < param_3) {
      iVar7 = *(int *)(param_1 + 0x28);
      if (param_3 <= *(int *)(param_1 + 0x28)) {
        iVar7 = param_3;
      }
      if (param_4 == 0) {
        if (param_2 != 0) {
          param_2 = param_2 + (long)*(int *)(param_1 + 0x2c) * (long)iVar7;
        }
        if (0 < iVar7) {
          do {
            iVar8 = *(int *)(**(long **)(param_1 + 0x58) + 0x14);
            iVar2 = iVar8;
            if (iVar7 <= iVar8) {
              iVar2 = iVar7;
            }
            iVar8 = iVar8 - iVar2;
            *(int *)(**(long **)(param_1 + 0x58) + 0x14) = iVar8;
            iVar3 = *(int *)(param_1 + 0x2c);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - iVar2;
            lVar6 = *(long *)(param_1 + 0x38) - (long)iVar3 * (long)iVar2;
            *(long *)(param_1 + 0x38) = lVar6;
            if (param_2 != 0) {
              param_2 = param_2 - (long)iVar3 * (long)iVar2;
              _memcpy(param_2,lVar6,(long)iVar3 * (long)iVar2);
              iVar8 = *(int *)(**(long **)(param_1 + 0x58) + 0x14);
            }
            if (iVar8 == 0) {
              FUN_109a4dbec(param_1,0);
            }
            iVar8 = iVar7 - iVar2;
            bVar1 = iVar2 <= iVar7;
            iVar7 = iVar8;
          } while (iVar8 != 0 && bVar1);
        }
      }
      else if (0 < iVar7) {
        do {
          lVar6 = *(long *)(param_1 + 0x58);
          iVar8 = *(int *)(lVar6 + 0x14);
          iVar2 = iVar8;
          if (iVar7 <= iVar8) {
            iVar2 = iVar7;
          }
          iVar8 = iVar8 - iVar2;
          *(int *)(lVar6 + 0x14) = iVar8;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - iVar2;
          *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + iVar2;
          lVar9 = (long)*(int *)(param_1 + 0x2c) * (long)iVar2;
          if (param_2 != 0) {
            iVar8 = (int)lVar9;
            lVar9 = (long)iVar8;
            _memcpy(param_2,*(undefined8 *)(lVar6 + 0x18),lVar9);
            param_2 = param_2 + iVar8;
            lVar6 = *(long *)(param_1 + 0x58);
            iVar8 = *(int *)(lVar6 + 0x14);
          }
          *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + lVar9;
          if (iVar8 == 0) {
            FUN_109a4dbec(param_1,1);
          }
          iVar8 = iVar7 - iVar2;
          bVar1 = iVar2 <= iVar7;
          iVar7 = iVar8;
        } while (iVar8 != 0 && bVar1);
      }
      return;
    }
    puVar5 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar5 + 3) = 0x65766f6d65722066;
    *(undefined8 *)(puVar5 + 1) = 0x6f207265626d756e;
    *puVar5 = 1;
    puStack_50 = puVar5 + 1;
    uStack_48 = 0x26;
    *(undefined1 *)((long)puVar5 + 0x2a) = 0;
    *(undefined8 *)(puVar5 + 7) = 0x656e207369207374;
    *(undefined8 *)(puVar5 + 5) = 0x6e656d656c652064;
    *(undefined8 *)((long)puVar5 + 0x22) = 0x657669746167656e;
    FUN_109ac3188(0xffffff37,&puStack_50,&UNK_10f5968da,&UNK_10f596553,0x5fa);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109a4e144);
  (*pcVar4)();
}



/* Entry: 109a4e18c; end: 109a4e233;  */

/* WARNING: Removing unreachable block (ram,0x000109a4df50) */
/* WARNING: Removing unreachable block (ram,0x000109a4df58) */
/* WARNING: Removing unreachable block (ram,0x000109a4df64) */
/* WARNING: Removing unreachable block (ram,0x000109a4df94) */
/* WARNING: Removing unreachable block (ram,0x000109a4dfb8) */
/* WARNING: Removing unreachable block (ram,0x000109a4dfc8) */
/* WARNING: Removing unreachable block (ram,0x000109a4dfd4) */
/* WARNING: Removing unreachable block (ram,0x000109a4dfdc) */
/* WARNING: Removing unreachable block (ram,0x000109a4dfe4) */

void FUN_109a4e18c(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    puVar6 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    *(undefined1 *)(puVar6 + 1) = 0;
    FUN_109ac3188(0xffffffe5,&stack0xffffffffffffffd0,&UNK_10f5968e8,&UNK_10f596553,0x63c);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109a4e200);
    (*pcVar5)();
  }
  iVar4 = *(int *)(param_1 + 0x28);
  if (param_1 == 0) {
    puVar6 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_50 = puVar6 + 1;
    uStack_48 = 0x15;
    *(undefined1 *)((long)puVar6 + 0x19) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x6f702065636e6575;
    *(undefined8 *)(puVar6 + 1) = 0x716573204c4c554e;
    *(undefined8 *)((long)puVar6 + 0x11) = 0x7265746e696f7020;
    FUN_109ac3188(0xffffffe5,&puStack_50,&UNK_10f5968da,&UNK_10f596553,0x5f8);
  }
  else {
    if (-1 < iVar4) {
      iVar9 = *(int *)(param_1 + 0x28);
      if (iVar4 <= *(int *)(param_1 + 0x28)) {
        iVar9 = iVar4;
      }
      lVar8 = 0;
      if (0 < iVar9) {
        do {
          iVar3 = *(int *)(**(long **)(param_1 + 0x58) + 0x14);
          iVar4 = iVar3;
          if (iVar9 <= iVar3) {
            iVar4 = iVar9;
          }
          iVar3 = iVar3 - iVar4;
          *(int *)(**(long **)(param_1 + 0x58) + 0x14) = iVar3;
          iVar2 = *(int *)(param_1 + 0x2c);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - iVar4;
          lVar7 = *(long *)(param_1 + 0x38) - (long)iVar2 * (long)iVar4;
          *(long *)(param_1 + 0x38) = lVar7;
          if (lVar8 != 0) {
            lVar8 = lVar8 - (long)iVar2 * (long)iVar4;
            _memcpy(lVar8,lVar7,(long)iVar2 * (long)iVar4);
            iVar3 = *(int *)(**(long **)(param_1 + 0x58) + 0x14);
          }
          if (iVar3 == 0) {
            FUN_109a4dbec(param_1,0);
          }
          iVar3 = iVar9 - iVar4;
          bVar1 = iVar4 <= iVar9;
          iVar9 = iVar3;
        } while (iVar3 != 0 && bVar1);
      }
      return;
    }
    puVar6 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar6 + 3) = 0x65766f6d65722066;
    *(undefined8 *)(puVar6 + 1) = 0x6f207265626d756e;
    *puVar6 = 1;
    puStack_50 = puVar6 + 1;
    uStack_48 = 0x26;
    *(undefined1 *)((long)puVar6 + 0x2a) = 0;
    *(undefined8 *)(puVar6 + 7) = 0x656e207369207374;
    *(undefined8 *)(puVar6 + 5) = 0x6e656d656c652064;
    *(undefined8 *)((long)puVar6 + 0x22) = 0x657669746167656e;
    FUN_109ac3188(0xffffff37,&puStack_50,&UNK_10f5968da,&UNK_10f596553,0x5fa);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a4e144);
  (*pcVar5)();
}



/* Entry: 109a4e234; end: 109a4e5a3;  */

ulong FUN_109a4e234(uint *param_1,ulong param_2,long *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  long *plVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined4 *puStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  uint *puStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  if ((param_1 == (uint *)0x0) || (uVar11 = (ulong)*param_1, *param_1 >> 0x10 != 0x4299)) {
    puVar6 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_b0 = puVar6 + 1;
    uStack_a8 = 0x17;
    *(undefined1 *)((long)puVar6 + 0x1b) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x65636e6575716573;
    *(undefined8 *)(puVar6 + 1) = 0x2064696c61766e49;
    *(undefined8 *)((long)puVar6 + 0x13) = 0x7265646165682065;
    FUN_109ac3188(0xfffffffb,&puStack_b0,&UNK_10f59690b,&UNK_10f596553,0x64a);
  }
  else if ((param_3 == (long *)0x0) &&
          (param_3 = *(long **)(param_1 + 0x12), param_3 == (long *)0x0)) {
    puVar6 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_b0 = puVar6 + 1;
    uStack_a8 = 0x14;
    *(undefined1 *)(puVar6 + 6) = 0;
    puVar6[5] = 0x7265746e;
    *(undefined8 *)(puVar6 + 3) = 0x696f702065676172;
    *(undefined8 *)(puVar6 + 1) = 0x6f7473204c4c554e;
    FUN_109ac3188(0xffffffe5,&puStack_b0,&UNK_10f59690b,&UNK_10f596553,0x650);
  }
  else {
    lVar12 = (long)(int)param_1[0xb];
    uVar10 = param_2;
    func_0x000109a4c934(param_2,param_1);
    uVar2 = param_1[10];
    iVar14 = (int)param_2;
    uVar4 = 0;
    if ((int)uVar2 <= iVar14) {
      uVar4 = uVar2;
    }
    uVar1 = uVar2;
    if (-1 < iVar14) {
      uVar1 = -uVar4;
    }
    uVar4 = (uint)uVar10;
    if ((uVar4 <= uVar2) && ((uVar4 == 0 || (uVar1 + iVar14 < uVar2)))) {
      FUN_109a4c4b8(uVar11,(long)(int)param_1[1],lVar12,param_3);
      if (0 < (int)uVar4) {
        auStack_a0[0] = 0x40;
        plStack_90 = *(long **)(param_1 + 0x16);
        if (plStack_90 == (long *)0x0) {
          lStack_68 = 0;
          uStack_70 = 0;
          plStack_90 = (long *)0x0;
          lStack_78 = 0;
          lStack_80 = 0;
        }
        else {
          lStack_68 = *(long *)(*plStack_90 + 0x18) +
                      ((long)*(int *)(*plStack_90 + 0x14) + -1) * (long)(int)param_1[0xb];
          uStack_70 = (undefined4)plStack_90[2];
          lStack_80 = plStack_90[3];
          lStack_78 = lStack_80 + (long)*(int *)((long)plStack_90 + 0x14) * (long)(int)param_1[0xb];
        }
        puStack_98 = param_1;
        lStack_88 = lStack_80;
        FUN_109a4cc44(auStack_a0,uVar1 + iVar14,0);
        plVar15 = (long *)0x0;
        plVar17 = (long *)0x0;
        uVar8 = 0;
        lVar13 = lStack_88;
        plVar16 = plStack_90;
        if (lVar12 != 0) {
          uVar8 = (lStack_78 - lStack_88) / lVar12;
        }
        do {
          iVar9 = (int)uVar10;
          iVar14 = (int)uVar8;
          if (iVar9 <= (int)uVar8) {
            iVar14 = iVar9;
          }
          if (param_4 == 0) {
            plVar5 = param_3;
            FUN_109a4c0e8(param_3,0x20);
            if (plVar15 == (long *)0x0) {
              iVar7 = 0;
              *plVar5 = (long)plVar5;
              plVar5[1] = (long)plVar5;
              *(long **)(uVar11 + 0x58) = plVar5;
              plVar15 = plVar5;
            }
            else {
              *plVar5 = (long)plVar17;
              plVar5[1] = (long)plVar15;
              *plVar15 = (long)plVar5;
              plVar17[1] = (long)plVar5;
              iVar7 = *(int *)((long)plVar17 + 0x14) + (int)plVar17[2];
            }
            plVar5[3] = lVar13;
            *(int *)(plVar5 + 2) = iVar7;
            *(int *)((long)plVar5 + 0x14) = iVar14;
            *(int *)(uVar11 + 0x28) = *(int *)(uVar11 + 0x28) + iVar14;
          }
          else {
            FUN_109a4dcc0(uVar11,lVar13,iVar14,0);
            plVar5 = plVar17;
          }
          plVar16 = (long *)plVar16[1];
          uVar8 = (ulong)*(uint *)((long)plVar16 + 0x14);
          uVar10 = (ulong)(uint)(iVar9 - iVar14);
          lVar13 = plVar16[3];
          plVar17 = plVar5;
        } while (iVar9 - iVar14 != 0 && iVar14 <= iVar9);
      }
      return uVar11;
    }
    puVar6 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_b0 = puVar6 + 1;
    uStack_a8 = 0x12;
    *(undefined1 *)((long)puVar6 + 0x16) = 0;
    *(undefined2 *)(puVar6 + 5) = 0x6563;
    *(undefined8 *)(puVar6 + 3) = 0x696c732065636e65;
    *(undefined8 *)(puVar6 + 1) = 0x7571657320646142;
    FUN_109ac3188(0xffffff2d,&puStack_b0,&UNK_10f59690b,&UNK_10f596553,0x65b);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a4e540);
  (*pcVar3)();
}



/* Entry: 109a4e5a4; end: 109a4f5af;  */

void FUN_109a4e5a4(undefined4 **param_1,undefined4 **param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 **ppuVar10;
  undefined4 **ppuVar11;
  undefined4 *puVar12;
  undefined4 **ppuVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  undefined4 ***pppuVar21;
  undefined4 **ppuVar22;
  long *plVar23;
  undefined4 **ppuVar24;
  long lVar25;
  undefined4 **ppuVar26;
  long lVar27;
  ulong uVar28;
  undefined4 *puStack_ef0;
  undefined8 uStack_ee8;
  undefined4 **ppuStack_ee0;
  undefined4 **ppuStack_ed8;
  undefined1 *puStack_ed0;
  code *pcStack_ec8;
  undefined4 ***pppuStack_eb8;
  undefined4 ***pppuStack_eb0;
  ulong uStack_ea8;
  undefined4 **ppuStack_ea0;
  int iStack_e94;
  undefined4 **ppuStack_e90;
  undefined4 **ppuStack_e88;
  long *plStack_e80;
  undefined4 **ppuStack_e78;
  undefined4 *puStack_e70;
  undefined4 **ppuStack_e68;
  long *plStack_e60;
  undefined4 **ppuStack_e58;
  undefined4 **ppuStack_e50;
  undefined4 **ppuStack_e48;
  long lStack_e40;
  long lStack_e38;
  undefined4 *puStack_e30;
  undefined4 **ppuStack_e28;
  long *plStack_e20;
  undefined4 **ppuStack_e18;
  undefined4 **ppuStack_e10;
  undefined4 **ppuStack_e08;
  long lStack_e00;
  long lStack_df8;
  undefined4 *puStack_df0;
  undefined4 **ppuStack_de8;
  long *plStack_de0;
  undefined4 **ppuStack_dd8;
  undefined4 **ppuStack_dd0;
  undefined4 **ppuStack_dc8;
  long lStack_dc0;
  long lStack_db8;
  undefined4 *puStack_db0;
  undefined4 **ppuStack_da8;
  long *plStack_da0;
  undefined4 **ppuStack_d98;
  undefined4 **ppuStack_d90;
  undefined4 **ppuStack_d88;
  long lStack_d80;
  long lStack_d78;
  undefined4 *puStack_d70;
  undefined4 **ppuStack_d68;
  long *plStack_d60;
  undefined4 **ppuStack_d58;
  undefined4 **ppuStack_d50;
  undefined4 **ppuStack_d48;
  long lStack_d40;
  long lStack_d38;
  undefined4 *puStack_d30;
  undefined4 **ppuStack_d28;
  long *plStack_d20;
  undefined4 **ppuStack_d18;
  undefined4 **ppuStack_d10;
  undefined4 **ppuStack_d08;
  long lStack_d00;
  long lStack_cf8;
  undefined4 *puStack_cf0;
  undefined4 **ppuStack_ce8;
  long *plStack_ce0;
  undefined4 **ppuStack_cd8;
  undefined4 **ppuStack_cd0;
  undefined4 **ppuStack_cc8;
  long lStack_cc0;
  long lStack_cb8;
  undefined4 *puStack_cb0;
  undefined4 **ppuStack_ca8;
  long *plStack_ca0;
  undefined4 **ppuStack_c98;
  undefined4 **ppuStack_c90;
  undefined4 **ppuStack_c88;
  undefined8 uStack_c80;
  long lStack_c78;
  long *plStack_c70;
  ulong auStack_c68 [2];
  undefined4 **ppuStack_c58;
  long *plStack_c50;
  ulong auStack_c48 [2];
  undefined4 **ppuStack_c38;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == (undefined4 **)0x0) {
    uVar15 = 0xffffffe5;
  }
  else {
    if (*(short *)((long)param_1 + 2) == 0x4299) {
      if (param_2 != (undefined4 **)0x0) {
        ppuVar13 = param_2;
        uVar15 = param_3;
        ppuStack_ea0 = param_1;
        if (1 < *(int *)(param_1 + 5)) {
          uVar14 = *(uint *)((long)param_1 + 0x2c);
          uVar28 = (ulong)uVar14;
          lVar25 = (long)(int)uVar14;
          puStack_cb0 = (undefined4 *)CONCAT44(puStack_cb0._4_4_,0x40);
          plStack_c70 = (long *)param_1[0xb];
          if (plStack_c70 == (long *)0x0) {
            lStack_cb8 = 0;
            uStack_c80 = (ulong)uStack_c80._4_4_ << 0x20;
            plStack_ca0 = (long *)0x0;
            ppuStack_c88 = (undefined4 **)0x0;
            ppuStack_c90 = (undefined4 **)0x0;
          }
          else {
            ppuStack_c90 = (undefined4 **)plStack_c70[3];
            lStack_cb8 = *(long *)(*plStack_c70 + 0x18) +
                         ((long)*(int *)(*plStack_c70 + 0x14) + -1) * lVar25;
            uStack_c80 = CONCAT44(uStack_c80._4_4_,(int)plStack_c70[2]);
            ppuStack_c88 = (undefined4 **)
                           ((long)ppuStack_c90 +
                           (long)*(int *)((long)plStack_c70 + 0x14) * (long)(int)uVar14);
            plStack_ca0 = plStack_c70;
          }
          puStack_cf0 = puStack_cb0;
          lStack_cc0 = uStack_c80;
          auStack_c68[0] = (ulong)ppuStack_c90;
          pppuStack_eb0 = &ppuStack_c88;
          auStack_c68[1] = (ulong)ppuStack_c90;
          ppuStack_c58 = ppuStack_c88;
          auStack_c48[0] = (long)ppuStack_c90 - lVar25;
          if (auStack_c48[0] < ppuStack_c90) {
            plStack_ca0 = (long *)*plStack_ca0;
            ppuStack_c90 = (undefined4 **)plStack_ca0[3];
            auStack_c48[0] =
                 (long)ppuStack_c90 +
                 (long)(*(int *)((long)param_1 + 0x2c) * (*(int *)((long)plStack_ca0 + 0x14) + -1));
            ppuStack_c88 = (undefined4 **)
                           ((long)ppuStack_c90 +
                           (long)(*(int *)((long)param_1 + 0x2c) *
                                 *(int *)((long)plStack_ca0 + 0x14)));
          }
          iStack_e94 = uVar14 * 7;
          lVar27 = -lVar25;
          plStack_c50 = plStack_ca0;
          pppuStack_eb8 = &ppuStack_cc8;
          uStack_ea8 = 0;
          auStack_c48[1] = (ulong)ppuStack_c90;
          ppuStack_c38 = ppuStack_c88;
          ppuVar22 = param_2;
          ppuStack_ce8 = param_1;
          ppuStack_ca8 = param_1;
          lStack_c78 = lStack_cb8;
          do {
            uVar18 = uStack_ea8 & 0xffffffff;
            ppuStack_c98 = (undefined4 **)auStack_c68[uVar18 * 8];
            plStack_ca0 = (&plStack_c70)[uVar18 * 8];
            ppuStack_c88 = (undefined4 **)auStack_c68[uVar18 * 8 + 2];
            ppuStack_c90 = (undefined4 **)auStack_c68[uVar18 * 8 + 1];
            ppuStack_cd8 = (undefined4 **)auStack_c48[uVar18 * 8];
            plStack_ce0 = (&plStack_c50)[uVar18 * 8];
            ppuStack_cc8 = (undefined4 **)auStack_c48[uVar18 * 8 + 2];
            ppuStack_cd0 = (undefined4 **)auStack_c48[uVar18 * 8 + 1];
            uStack_ea8 = (ulong)((int)uStack_ea8 - 1);
            while( true ) {
              if (plStack_ca0 == plStack_ce0) {
                iVar19 = (int)ppuStack_cd8 - (int)ppuStack_c98;
              }
              else {
                iVar19 = (int)&puStack_cf0;
                FUN_109a4d870();
                param_1 = &puStack_cb0;
                FUN_109a4d870();
                iVar19 = uVar14 * (iVar19 - (int)param_1);
              }
              ppuVar13 = ppuStack_c98;
              if ((int)(uVar14 + iVar19) <= iStack_e94) break;
              ppuStack_e28 = ppuStack_ca8;
              puStack_e30 = puStack_cb0;
              ppuStack_e18 = ppuStack_c98;
              plStack_e20 = plStack_ca0;
              ppuStack_e08 = ppuStack_c88;
              ppuStack_e10 = ppuStack_c90;
              lStack_df8 = lStack_c78;
              lStack_e00 = uStack_c80;
              ppuStack_d08 = ppuStack_c88;
              ppuStack_d10 = ppuStack_c90;
              lStack_cf8 = lStack_c78;
              lStack_d00 = uStack_c80;
              ppuStack_d28 = ppuStack_ca8;
              puStack_d30 = puStack_cb0;
              ppuStack_d18 = ppuStack_c98;
              plStack_d20 = plStack_ca0;
              ppuStack_dc8 = ppuStack_cc8;
              ppuStack_dd0 = ppuStack_cd0;
              lStack_db8 = lStack_cb8;
              lStack_dc0 = lStack_cc0;
              ppuStack_de8 = ppuStack_ce8;
              puStack_df0 = puStack_cf0;
              ppuStack_dd8 = ppuStack_cd8;
              plStack_de0 = plStack_ce0;
              ppuStack_d88 = ppuStack_cc8;
              ppuStack_d90 = ppuStack_cd0;
              lStack_d78 = lStack_cb8;
              lStack_d80 = lStack_cc0;
              uVar2 = 0;
              if (uVar14 != 0) {
                uVar2 = (int)(uVar14 + iVar19) / (int)uVar14;
              }
              ppuStack_da8 = ppuStack_ce8;
              puStack_db0 = puStack_cf0;
              ppuStack_d98 = ppuStack_cd8;
              plStack_da0 = plStack_ce0;
              if ((int)uVar2 < 0x29) {
                ppuStack_e78 = ppuStack_c98;
                FUN_109a4cc44(&puStack_e30,(int)uVar2 / 2,1);
                ppuVar24 = ppuStack_e18;
                FUN_109a4cc44(&puStack_e30,uVar2 + ~((int)uVar2 / 2),1);
                ppuVar22 = ppuStack_e18;
              }
              else {
                plStack_e80 = (long *)CONCAT44(plStack_e80._4_4_,uVar2);
                uVar2 = uVar2 >> 3;
                FUN_109a4cc44(&puStack_e30,uVar2,1);
                ppuStack_e78 = ppuStack_e18;
                FUN_109a4cc44(&puStack_e30,uVar2,1);
                ppuVar22 = ppuStack_e18;
                ppuVar24 = ppuVar13;
                (*(code *)param_2)(ppuVar13,ppuStack_e78,param_3);
                ppuVar10 = ppuStack_e78;
                (*(code *)param_2)(ppuStack_e78,ppuVar22,param_3);
                if (((ulong)ppuVar24 >> 0x1f & 1) == 0) {
                  if (((int)ppuVar10 < 1) &&
                     (ppuVar24 = ppuVar13, (*(code *)param_2)(ppuVar13,ppuVar22,param_3),
                     ppuStack_e78 = ppuVar13, -1 < (int)ppuVar24)) {
                    ppuStack_e78 = ppuVar22;
                  }
                }
                else if ((-1 < (int)ppuVar10) &&
                        (ppuVar24 = ppuVar13, (*(code *)param_2)(ppuVar13,ppuVar22,param_3),
                        ppuStack_e78 = ppuVar22, -1 < (int)ppuVar24)) {
                  ppuStack_e78 = ppuVar13;
                }
                ppuStack_e88 = (undefined4 **)CONCAT44(ppuStack_e88._4_4_,(uint)plStack_e80 >> 1);
                ppuStack_e90 = (undefined4 **)CONCAT44(ppuStack_e90._4_4_,uVar2 * 3);
                FUN_109a4cc44(&puStack_e30,((uint)plStack_e80 >> 1) + uVar2 * -3,1);
                ppuVar13 = ppuStack_e18;
                FUN_109a4cc44(&puStack_e30,uVar2,1);
                ppuVar24 = ppuStack_e18;
                FUN_109a4cc44(&puStack_e30,uVar2,1);
                ppuVar22 = ppuStack_e18;
                ppuVar10 = ppuVar13;
                (*(code *)param_2)(ppuVar13,ppuVar24,param_3);
                ppuVar26 = ppuVar24;
                (*(code *)param_2)(ppuVar24,ppuVar22,param_3);
                if (((ulong)ppuVar10 >> 0x1f & 1) == 0) {
                  if (((int)ppuVar26 < 1) &&
                     (ppuVar10 = ppuVar13, (*(code *)param_2)(ppuVar13,ppuVar22,param_3),
                     ppuVar24 = ppuVar13, -1 < (int)ppuVar10)) {
                    ppuVar24 = ppuVar22;
                  }
                }
                else if ((-1 < (int)ppuVar26) &&
                        (ppuVar10 = ppuVar13, (*(code *)param_2)(ppuVar13,ppuVar22,param_3),
                        ppuVar24 = ppuVar22, -1 < (int)ppuVar10)) {
                  ppuVar24 = ppuVar13;
                }
                FUN_109a4cc44(&puStack_e30,
                              ((uint)plStack_e80 - (int)ppuStack_e88) + ~(uint)ppuStack_e90,1);
                ppuVar13 = ppuStack_e18;
                FUN_109a4cc44(&puStack_e30,uVar2,1);
                ppuVar22 = ppuStack_e18;
                FUN_109a4cc44(&puStack_e30,uVar2,1);
                ppuVar10 = ppuStack_e18;
                ppuVar26 = ppuVar13;
                (*(code *)param_2)(ppuVar13,ppuVar22,param_3);
                ppuVar11 = ppuVar22;
                (*(code *)param_2)(ppuVar22,ppuVar10,param_3);
                if (((ulong)ppuVar26 >> 0x1f & 1) == 0) {
                  if (((int)ppuVar11 < 1) &&
                     (ppuVar26 = ppuVar13, (*(code *)param_2)(ppuVar13,ppuVar10,param_3),
                     ppuVar22 = ppuVar13, -1 < (int)ppuVar26)) {
                    ppuVar22 = ppuVar10;
                  }
                }
                else if ((-1 < (int)ppuVar11) &&
                        (ppuVar26 = ppuVar13, (*(code *)param_2)(ppuVar13,ppuVar10,param_3),
                        ppuVar22 = ppuVar10, -1 < (int)ppuVar26)) {
                  ppuVar22 = ppuVar13;
                }
              }
              ppuVar10 = ppuStack_e78;
              (*(code *)param_2)(ppuStack_e78,ppuVar24,param_3);
              ppuVar26 = ppuVar24;
              ppuVar13 = ppuVar22;
              uVar15 = param_3;
              (*(code *)param_2)();
              if (((ulong)ppuVar10 >> 0x1f & 1) == 0) {
                if (((int)ppuVar26 < 1) &&
                   (ppuVar10 = ppuStack_e78, ppuVar13 = ppuVar22, uVar15 = param_3,
                   (*(code *)param_2)(), ppuVar24 = ppuStack_e78, -1 < (int)ppuVar10)) {
                  ppuVar24 = ppuVar22;
                }
              }
              else if ((-1 < (int)ppuVar26) &&
                      (ppuVar10 = ppuStack_e78, ppuVar13 = ppuVar22, uVar15 = param_3,
                      (*(code *)param_2)(), ppuVar24 = ppuVar22, -1 < (int)ppuVar10)) {
                ppuVar24 = ppuStack_e78;
              }
              ppuVar22 = ppuStack_d18;
              ppuStack_ca8 = ppuStack_d28;
              puStack_cb0 = puStack_d30;
              plStack_ca0 = plStack_d20;
              ppuStack_c88 = ppuStack_d08;
              ppuStack_c90 = ppuStack_d10;
              lStack_c78 = lStack_cf8;
              uStack_c80 = lStack_d00;
              if ((ppuVar24 != ppuStack_d18) && (0 < (int)uVar14)) {
                uVar18 = 0;
                do {
                  bVar1 = *(byte *)((long)ppuVar24 + uVar18);
                  *(byte *)((long)ppuVar24 + uVar18) = *(byte *)((long)ppuStack_d18 + uVar18);
                  *(byte *)((long)ppuStack_d18 + uVar18) = bVar1;
                  uVar18 = uVar18 + 1;
                } while (uVar28 != uVar18);
              }
              ppuStack_d58 = (undefined4 **)((long)ppuStack_d18 + lVar25);
              if (ppuStack_d08 <= ppuStack_d58) {
                plStack_ca0 = (long *)plStack_d20[1];
                ppuStack_d58 = (undefined4 **)plStack_ca0[3];
                ppuStack_c88 = (undefined4 **)
                               ((long)ppuStack_d58 +
                               (long)*(int *)((long)ppuStack_d28 + 0x2c) *
                               (long)*(int *)((long)plStack_ca0 + 0x14));
                ppuStack_c90 = ppuStack_d58;
              }
              bVar4 = false;
              ppuStack_d68 = ppuStack_d28;
              puStack_d70 = puStack_d30;
              plStack_d60 = plStack_ca0;
              ppuStack_d48 = ppuStack_c88;
              ppuStack_d50 = ppuStack_c90;
              lStack_d38 = lStack_cf8;
              lStack_d40 = lStack_d00;
              ppuStack_c98 = ppuStack_d58;
LAB_109a4eb80:
              if (ppuStack_c98 != ppuStack_cd8) {
                ppuVar24 = ppuStack_c98;
                ppuVar13 = ppuVar22;
                uVar15 = param_3;
                (*(code *)param_2)();
                if ((int)ppuVar24 < 1) {
                  if ((int)ppuVar24 == 0) {
                    ppuVar24 = ppuStack_c98;
                    ppuVar10 = ppuStack_d58;
                    uVar18 = uVar28;
                    if (ppuStack_d58 != ppuStack_c98 && 0 < (int)uVar14) {
                      do {
                        bVar1 = *(byte *)ppuVar10;
                        *(byte *)ppuVar10 = *(byte *)ppuVar24;
                        *(byte *)ppuVar24 = bVar1;
                        uVar18 = uVar18 - 1;
                        ppuVar24 = (undefined4 **)((long)ppuVar24 + 1);
                        ppuVar10 = (undefined4 **)((long)ppuVar10 + 1);
                      } while (uVar18 != 0);
                    }
                    ppuStack_d58 = (undefined4 **)((long)ppuStack_d58 + lVar25);
                    if (ppuStack_d48 <= ppuStack_d58) {
                      plStack_d60 = (long *)plStack_d60[1];
                      ppuStack_d58 = (undefined4 **)plStack_d60[3];
                      ppuStack_d48 = (undefined4 **)
                                     ((long)ppuStack_d58 +
                                     (long)*(int *)((long)ppuStack_d68 + 0x2c) *
                                     (long)*(int *)((long)plStack_d60 + 0x14));
                      ppuStack_d50 = ppuStack_d58;
                    }
                    bVar4 = true;
                  }
                  ppuStack_c98 = (undefined4 **)((long)ppuStack_c98 + lVar25);
                  if (ppuStack_c88 <= ppuStack_c98) {
                    plStack_ca0 = (long *)plStack_ca0[1];
                    ppuStack_c98 = (undefined4 **)plStack_ca0[3];
                    ppuStack_c88 = (undefined4 **)
                                   ((long)ppuStack_c98 +
                                   (long)*(int *)((long)ppuStack_ca8 + 0x2c) *
                                   (long)*(int *)((long)plStack_ca0 + 0x14));
                    ppuStack_c90 = ppuStack_c98;
                  }
                  goto LAB_109a4eb80;
                }
              }
              while (ppuStack_c98 != ppuStack_cd8) {
                ppuVar24 = ppuStack_cd8;
                ppuVar13 = ppuVar22;
                uVar15 = param_3;
                (*(code *)param_2)();
                if ((int)ppuVar24 < 0) break;
                if ((int)ppuVar24 == 0) {
                  ppuVar24 = ppuStack_dd8;
                  ppuVar10 = ppuStack_cd8;
                  uVar18 = uVar28;
                  if (ppuStack_dd8 != ppuStack_cd8 && 0 < (int)uVar14) {
                    do {
                      bVar1 = *(byte *)ppuVar24;
                      *(byte *)ppuVar24 = *(byte *)ppuVar10;
                      *(byte *)ppuVar10 = bVar1;
                      uVar18 = uVar18 - 1;
                      ppuVar24 = (undefined4 **)((long)ppuVar24 + 1);
                      ppuVar10 = (undefined4 **)((long)ppuVar10 + 1);
                    } while (uVar18 != 0);
                  }
                  ppuStack_dd8 = (undefined4 **)((long)ppuStack_dd8 + lVar27);
                  if (ppuStack_dd8 < ppuStack_dd0) {
                    plStack_de0 = (long *)*plStack_de0;
                    ppuStack_dd0 = (undefined4 **)plStack_de0[3];
                    ppuStack_dd8 = (undefined4 **)
                                   ((long)ppuStack_dd0 +
                                   (long)(*(int *)((long)ppuStack_de8 + 0x2c) *
                                         (*(int *)((long)plStack_de0 + 0x14) + -1)));
                    ppuStack_dc8 = (undefined4 **)
                                   ((long)ppuStack_dd0 +
                                   (long)(*(int *)((long)ppuStack_de8 + 0x2c) *
                                         *(int *)((long)plStack_de0 + 0x14)));
                  }
                  bVar4 = true;
                }
                ppuStack_cd8 = (undefined4 **)((long)ppuStack_cd8 + lVar27);
                if (ppuStack_cd8 < ppuStack_cd0) {
                  plStack_ce0 = (long *)*plStack_ce0;
                  ppuStack_cd0 = (undefined4 **)plStack_ce0[3];
                  ppuStack_cd8 = (undefined4 **)
                                 ((long)ppuStack_cd0 +
                                 (long)(*(int *)((long)ppuStack_ce8 + 0x2c) *
                                       (*(int *)((long)plStack_ce0 + 0x14) + -1)));
                  ppuStack_cc8 = (undefined4 **)
                                 ((long)ppuStack_cd0 +
                                 (long)(*(int *)((long)ppuStack_ce8 + 0x2c) *
                                       *(int *)((long)plStack_ce0 + 0x14)));
                }
              }
              if (ppuStack_c98 != ppuStack_cd8) goto code_r0x000109a4eca4;
              param_1 = ppuStack_c98;
              uVar15 = param_3;
              (*(code *)param_2)();
              if ((int)param_1 != 0) {
                if ((int)param_1 < 1) goto LAB_109a4ef00;
                ppuStack_cd8 = (undefined4 **)((long)ppuStack_cd8 + lVar27);
                if (ppuStack_cd0 <= ppuStack_cd8) goto LAB_109a4ef4c;
                plStack_ce0 = (long *)*plStack_ce0;
                ppuVar13 = (undefined4 **)plStack_ce0[3];
                ppuStack_cd8 = (undefined4 **)
                               ((long)ppuVar13 +
                               (long)(*(int *)((long)ppuStack_ce8 + 0x2c) *
                                     (*(int *)((long)plStack_ce0 + 0x14) + -1)));
                iVar19 = *(int *)((long)ppuStack_ce8 + 0x2c) * *(int *)((long)plStack_ce0 + 0x14);
                pppuVar21 = pppuStack_eb8;
                ppuStack_cd0 = ppuVar13;
                goto LAB_109a4ef44;
              }
              if ((ppuStack_d58 != ppuStack_c98) &&
                 (ppuVar13 = ppuStack_c98, ppuVar24 = ppuStack_d58, uVar18 = uVar28, 0 < (int)uVar14
                 )) {
                do {
                  bVar1 = *(byte *)ppuVar24;
                  *(byte *)ppuVar24 = *(byte *)ppuVar13;
                  *(byte *)ppuVar13 = bVar1;
                  uVar18 = uVar18 - 1;
                  ppuVar13 = (undefined4 **)((long)ppuVar13 + 1);
                  ppuVar24 = (undefined4 **)((long)ppuVar24 + 1);
                } while (uVar18 != 0);
              }
              ppuStack_d58 = (undefined4 **)((long)ppuStack_d58 + lVar25);
              if (ppuStack_d48 <= ppuStack_d58) {
                plStack_d60 = (long *)plStack_d60[1];
                ppuStack_d58 = (undefined4 **)plStack_d60[3];
                ppuStack_d48 = (undefined4 **)
                               ((long)ppuStack_d58 +
                               (long)*(int *)((long)ppuStack_d68 + 0x2c) *
                               (long)*(int *)((long)plStack_d60 + 0x14));
                ppuStack_d50 = ppuStack_d58;
              }
              bVar4 = true;
LAB_109a4ef00:
              ppuStack_c98 = (undefined4 **)((long)ppuStack_c98 + lVar25);
              if (ppuStack_c88 <= ppuStack_c98) {
                plStack_ca0 = (long *)plStack_ca0[1];
                ppuVar13 = (undefined4 **)plStack_ca0[3];
                iVar19 = *(int *)((long)ppuStack_ca8 + 0x2c) * *(int *)((long)plStack_ca0 + 0x14);
                pppuVar21 = pppuStack_eb0;
                ppuStack_c98 = ppuVar13;
                ppuStack_c90 = ppuVar13;
LAB_109a4ef44:
                *pppuVar21 = (undefined4 **)((long)ppuVar13 + (long)iVar19);
              }
LAB_109a4ef4c:
              ppuVar13 = ppuVar22;
              if (!bVar4) {
                ppuStack_ca8 = ppuStack_d28;
                puStack_cb0 = puStack_d30;
                ppuStack_c98 = ppuStack_d18;
                plStack_ca0 = plStack_d20;
                ppuStack_c88 = ppuStack_d08;
                ppuStack_c90 = ppuStack_d10;
                lStack_c78 = lStack_cf8;
                uStack_c80 = lStack_d00;
                ppuStack_ce8 = ppuStack_da8;
                puStack_cf0 = puStack_db0;
                ppuStack_cd8 = ppuStack_d98;
                plStack_ce0 = plStack_da0;
                ppuStack_cc8 = ppuStack_d88;
                ppuStack_cd0 = ppuStack_d90;
                lStack_cb8 = lStack_d78;
                lStack_cc0 = lStack_d80;
                break;
              }
LAB_109a4ef50:
              iVar19 = (int)&puStack_cb0;
              FUN_109a4d870();
              if (iVar19 == 0) {
                iVar19 = *(int *)(ppuStack_ea0 + 5);
              }
              iVar8 = (int)&puStack_d30;
              FUN_109a4d870();
              iVar9 = (int)&puStack_d70;
              FUN_109a4d870();
              if (iVar9 == 0) {
                iVar9 = *(int *)(ppuStack_ea0 + 5);
              }
              uVar5 = iVar19 - iVar9;
              uVar2 = uVar5;
              if (iVar9 - iVar8 <= (int)uVar5) {
                uVar2 = iVar9 - iVar8;
              }
              if (0 < (int)uVar2) {
                ppuStack_e28 = ppuStack_d28;
                puStack_e30 = puStack_d30;
                ppuStack_e18 = ppuStack_d18;
                plStack_e20 = plStack_d20;
                ppuStack_e08 = ppuStack_d08;
                ppuStack_e10 = ppuStack_d10;
                lStack_df8 = lStack_cf8;
                lStack_e00 = lStack_d00;
                ppuStack_e68 = ppuStack_ca8;
                puStack_e70 = puStack_cb0;
                ppuStack_e58 = ppuStack_c98;
                plStack_e60 = plStack_ca0;
                ppuVar13 = (undefined4 **)(ulong)-uVar2;
                ppuStack_e48 = ppuStack_c88;
                ppuStack_e50 = ppuStack_c90;
                lStack_e38 = lStack_c78;
                lStack_e40 = uStack_c80;
                uVar15 = 1;
                FUN_109a4cc44(&puStack_e70);
                uVar16 = 0;
                plVar20 = plStack_e20;
                ppuVar22 = ppuStack_e08;
                plVar23 = plStack_e60;
                ppuVar24 = ppuStack_e48;
                do {
                  ppuVar10 = ppuStack_e18;
                  ppuVar26 = ppuStack_e58;
                  uVar18 = uVar28;
                  if (0 < (int)uVar14) {
                    do {
                      bVar1 = *(byte *)ppuVar10;
                      ppuVar13 = (undefined4 **)(ulong)*(byte *)ppuVar26;
                      *(byte *)ppuVar10 = *(byte *)ppuVar26;
                      *(byte *)ppuVar26 = bVar1;
                      uVar18 = uVar18 - 1;
                      ppuVar10 = (undefined4 **)((long)ppuVar10 + 1);
                      ppuVar26 = (undefined4 **)((long)ppuVar26 + 1);
                    } while (uVar18 != 0);
                  }
                  ppuStack_e18 = (undefined4 **)((long)ppuStack_e18 + lVar25);
                  if (ppuVar22 <= ppuStack_e18) {
                    plVar20 = (long *)plVar20[1];
                    ppuStack_e18 = (undefined4 **)plVar20[3];
                    ppuVar22 = (undefined4 **)
                               ((long)ppuStack_e18 +
                               (long)*(int *)((long)ppuStack_e28 + 0x2c) *
                               (long)*(int *)((long)plVar20 + 0x14));
                  }
                  ppuStack_e58 = (undefined4 **)((long)ppuStack_e58 + lVar25);
                  if (ppuVar24 <= ppuStack_e58) {
                    plVar23 = (long *)plVar23[1];
                    ppuStack_e58 = (undefined4 **)plVar23[3];
                    ppuVar24 = (undefined4 **)
                               ((long)ppuStack_e58 +
                               (long)*(int *)((long)ppuStack_e68 + 0x2c) *
                               (long)*(int *)((long)plVar23 + 0x14));
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 != uVar2);
              }
              iVar19 = (int)&puStack_cf0;
              FUN_109a4d870();
              iVar8 = (int)&puStack_db0;
              FUN_109a4d870();
              param_1 = &puStack_df0;
              FUN_109a4d870();
              uVar2 = iVar8 - (int)param_1;
              uVar16 = (int)param_1 - iVar19;
              if ((int)uVar16 <= (int)uVar2) {
                uVar2 = uVar16;
              }
              if (0 < (int)uVar2) {
                ppuStack_e28 = ppuStack_ca8;
                puStack_e30 = puStack_cb0;
                ppuStack_e18 = ppuStack_c98;
                plStack_e20 = plStack_ca0;
                ppuStack_e08 = ppuStack_c88;
                ppuStack_e10 = ppuStack_c90;
                lStack_df8 = lStack_c78;
                lStack_e00 = uStack_c80;
                ppuStack_e68 = ppuStack_da8;
                puStack_e70 = puStack_db0;
                ppuStack_e58 = ppuStack_d98;
                plStack_e60 = plStack_da0;
                ppuVar13 = (undefined4 **)(ulong)(1 - uVar2);
                ppuStack_e48 = ppuStack_d88;
                ppuStack_e50 = ppuStack_d90;
                lStack_e38 = lStack_d78;
                lStack_e40 = lStack_d80;
                param_1 = &puStack_e70;
                uVar15 = 1;
                FUN_109a4cc44();
                uVar17 = 0;
                do {
                  ppuVar22 = ppuStack_e18;
                  ppuVar24 = ppuStack_e58;
                  uVar18 = uVar28;
                  if (0 < (int)uVar14) {
                    do {
                      bVar1 = *(byte *)ppuVar22;
                      param_1 = (undefined4 **)(ulong)bVar1;
                      ppuVar13 = (undefined4 **)(ulong)*(byte *)ppuVar24;
                      *(byte *)ppuVar22 = *(byte *)ppuVar24;
                      *(byte *)ppuVar24 = bVar1;
                      uVar18 = uVar18 - 1;
                      ppuVar22 = (undefined4 **)((long)ppuVar22 + 1);
                      ppuVar24 = (undefined4 **)((long)ppuVar24 + 1);
                    } while (uVar18 != 0);
                  }
                  ppuStack_e18 = (undefined4 **)((long)ppuStack_e18 + lVar25);
                  if (ppuStack_e08 <= ppuStack_e18) {
                    plStack_e20 = (long *)plStack_e20[1];
                    ppuStack_e18 = (undefined4 **)plStack_e20[3];
                    ppuStack_e08 = (undefined4 **)
                                   ((long)ppuStack_e18 +
                                   (long)*(int *)((long)ppuStack_e28 + 0x2c) *
                                   (long)*(int *)((long)plStack_e20 + 0x14));
                  }
                  ppuStack_e58 = (undefined4 **)((long)ppuStack_e58 + lVar25);
                  if (ppuStack_e48 <= ppuStack_e58) {
                    plStack_e60 = (long *)plStack_e60[1];
                    ppuStack_e58 = (undefined4 **)plStack_e60[3];
                    ppuStack_e48 = (undefined4 **)
                                   ((long)ppuStack_e58 +
                                   (long)*(int *)((long)ppuStack_e68 + 0x2c) *
                                   (long)*(int *)((long)plStack_e60 + 0x14));
                  }
                  uVar17 = uVar17 + 1;
                } while (uVar17 != uVar2);
              }
              ppuVar22 = (undefined4 **)(ulong)(uVar5 - 1);
              if (uVar5 - 1 == 0 || (int)uVar5 < 1) {
                if ((int)uVar16 < 2) goto LAB_109a4f450;
                ppuStack_ce8 = ppuStack_da8;
                puStack_cf0 = puStack_db0;
                ppuStack_cd8 = ppuStack_d98;
                plStack_ce0 = plStack_da0;
                ppuStack_cc8 = ppuStack_d88;
                ppuStack_cd0 = ppuStack_d90;
                lStack_cb8 = lStack_d78;
                lStack_cc0 = lStack_d80;
                ppuStack_ca8 = ppuStack_da8;
                puStack_cb0 = puStack_db0;
                ppuStack_c98 = ppuStack_d98;
                plStack_ca0 = plStack_da0;
                ppuVar22 = (undefined4 **)(ulong)(1 - uVar16);
                ppuStack_c88 = ppuStack_d88;
                ppuStack_c90 = ppuStack_d90;
                lStack_c78 = lStack_d78;
                uStack_c80 = lStack_d80;
                param_1 = &puStack_cb0;
                uVar15 = 1;
                FUN_109a4cc44();
              }
              else if ((int)uVar16 < 2) {
                ppuStack_ce8 = ppuStack_d28;
                puStack_cf0 = puStack_d30;
                ppuStack_cd8 = ppuStack_d18;
                plStack_ce0 = plStack_d20;
                ppuStack_cc8 = ppuStack_d08;
                ppuStack_cd0 = ppuStack_d10;
                lStack_cb8 = lStack_cf8;
                lStack_cc0 = lStack_d00;
                ppuStack_ca8 = ppuStack_d28;
                puStack_cb0 = puStack_d30;
                ppuStack_c98 = ppuStack_d18;
                plStack_ca0 = plStack_d20;
                ppuStack_c88 = ppuStack_d08;
                ppuStack_c90 = ppuStack_d10;
                lStack_c78 = lStack_cf8;
                uStack_c80 = lStack_d00;
                param_1 = &puStack_cf0;
                uVar15 = 1;
                FUN_109a4cc44();
              }
              else {
                uVar18 = (long)(int)uStack_ea8 + 1;
                uStack_ea8 = uVar18;
                if (uVar16 < uVar5) {
                  auStack_c68[uVar18 * 8] = (ulong)ppuStack_d18;
                  (&plStack_c70)[uVar18 * 8] = plStack_d20;
                  auStack_c68[uVar18 * 8 + 2] = (ulong)ppuStack_d08;
                  auStack_c68[uVar18 * 8 + 1] = (ulong)ppuStack_d10;
                  FUN_109a4cc44(&puStack_d30,ppuVar22,1);
                  auStack_c48[uVar18 * 8] = (ulong)ppuStack_d18;
                  (&plStack_c50)[uVar18 * 8] = plStack_d20;
                  auStack_c48[uVar18 * 8 + 2] = (ulong)ppuStack_d08;
                  auStack_c48[uVar18 * 8 + 1] = (ulong)ppuStack_d10;
                  ppuStack_ce8 = ppuStack_da8;
                  puStack_cf0 = puStack_db0;
                  ppuStack_cd8 = ppuStack_d98;
                  plStack_ce0 = plStack_da0;
                  ppuStack_cc8 = ppuStack_d88;
                  ppuStack_cd0 = ppuStack_d90;
                  lStack_cb8 = lStack_d78;
                  lStack_cc0 = lStack_d80;
                  ppuStack_c88 = ppuStack_d88;
                  ppuStack_c90 = ppuStack_d90;
                  lStack_c78 = lStack_d78;
                  uStack_c80 = lStack_d80;
                  ppuVar22 = (undefined4 **)(ulong)(1 - uVar16);
                  ppuStack_ca8 = ppuStack_da8;
                  puStack_cb0 = puStack_db0;
                  ppuStack_c98 = ppuStack_d98;
                  plStack_ca0 = plStack_da0;
                  param_1 = &puStack_cb0;
                  uVar15 = 1;
                  FUN_109a4cc44();
                }
                else {
                  auStack_c48[uVar18 * 8] = (ulong)ppuStack_d98;
                  (&plStack_c50)[uVar18 * 8] = plStack_da0;
                  auStack_c48[uVar18 * 8 + 2] = (ulong)ppuStack_d88;
                  auStack_c48[uVar18 * 8 + 1] = (ulong)ppuStack_d90;
                  FUN_109a4cc44(&puStack_db0,1 - uVar16,1);
                  auStack_c68[uVar18 * 8] = (ulong)ppuStack_d98;
                  (&plStack_c70)[uVar18 * 8] = plStack_da0;
                  auStack_c68[uVar18 * 8 + 2] = (ulong)ppuStack_d88;
                  auStack_c68[uVar18 * 8 + 1] = (ulong)ppuStack_d90;
                  ppuStack_ce8 = ppuStack_d28;
                  puStack_cf0 = puStack_d30;
                  ppuStack_cd8 = ppuStack_d18;
                  plStack_ce0 = plStack_d20;
                  ppuStack_cc8 = ppuStack_d08;
                  ppuStack_cd0 = ppuStack_d10;
                  lStack_cb8 = lStack_cf8;
                  lStack_cc0 = lStack_d00;
                  ppuStack_c88 = ppuStack_d08;
                  ppuStack_c90 = ppuStack_d10;
                  lStack_c78 = lStack_cf8;
                  uStack_c80 = lStack_d00;
                  ppuStack_ca8 = ppuStack_d28;
                  puStack_cb0 = puStack_d30;
                  ppuStack_c98 = ppuStack_d18;
                  plStack_ca0 = plStack_d20;
                  param_1 = &puStack_cf0;
                  uVar15 = 1;
                  FUN_109a4cc44();
                }
              }
            }
            ppuVar10 = ppuStack_ca8;
            ppuVar24 = (undefined4 **)((long)ppuStack_c98 + lVar25);
            ppuStack_e88 = ppuStack_c88;
            plVar20 = plStack_ca0;
            ppuVar26 = ppuStack_c90;
            if (ppuStack_c88 <= ppuVar24) {
              plVar20 = (long *)plStack_ca0[1];
              ppuVar24 = (undefined4 **)plVar20[3];
              ppuStack_e88 = (undefined4 **)
                             ((long)ppuVar24 +
                             (long)*(int *)((long)ppuStack_ca8 + 0x2c) *
                             (long)*(int *)((long)plVar20 + 0x14));
              ppuVar26 = ppuVar24;
            }
            ppuStack_cd8 = (undefined4 **)((long)ppuStack_cd8 + lVar25);
            ppuVar13 = ppuVar22;
            plVar23 = plStack_ca0;
            ppuVar22 = ppuStack_c90;
            if (ppuStack_cc8 <= ppuStack_cd8) {
              plStack_ce0 = (long *)plStack_ce0[1];
              ppuStack_cd8 = (undefined4 **)plStack_ce0[3];
              ppuStack_cc8 = (undefined4 **)
                             ((long)ppuStack_cd8 +
                             (long)*(int *)((long)ppuStack_ce8 + 0x2c) *
                             (long)*(int *)((long)plStack_ce0 + 0x14));
              ppuStack_cd0 = ppuStack_cd8;
            }
            while (ppuVar24 != ppuStack_cd8) {
              if (plVar23 != plVar20) {
                ppuVar22 = ppuVar26;
              }
              plVar23 = plVar20;
              ppuStack_e90 = ppuVar26;
              plStack_e80 = plVar20;
              ppuStack_e78 = ppuVar24;
              if (ppuVar24 != ppuStack_c98) {
                do {
                  ppuVar26 = (undefined4 **)((long)ppuVar24 + lVar27);
                  if (ppuVar26 < ppuVar22) {
                    plVar23 = (long *)*plVar23;
                    ppuVar22 = (undefined4 **)plVar23[3];
                    ppuVar26 = (undefined4 **)
                               ((long)ppuVar22 +
                               (long)*(int *)((long)ppuVar10 + 0x2c) *
                               ((long)*(int *)((long)plVar23 + 0x14) + -1));
                  }
                  param_1 = ppuVar26;
                  ppuVar13 = ppuVar24;
                  uVar15 = param_3;
                  (*(code *)param_2)();
                  if ((int)param_1 < 1) break;
                  ppuVar11 = ppuVar26;
                  uVar18 = uVar28;
                  if (0 < (int)uVar14) {
                    do {
                      bVar1 = *(byte *)ppuVar11;
                      *(byte *)ppuVar11 = *(byte *)ppuVar24;
                      *(byte *)ppuVar24 = bVar1;
                      uVar18 = uVar18 - 1;
                      ppuVar11 = (undefined4 **)((long)ppuVar11 + 1);
                      ppuVar24 = (undefined4 **)((long)ppuVar24 + 1);
                    } while (uVar18 != 0);
                  }
                  ppuVar24 = ppuVar26;
                } while (ppuVar26 != ppuStack_c98);
              }
              ppuVar24 = (undefined4 **)((long)ppuStack_e78 + lVar25);
              plVar20 = plStack_e80;
              ppuVar26 = ppuStack_e90;
              if (ppuStack_e88 <= ppuVar24) {
                plVar20 = (long *)plStack_e80[1];
                ppuVar24 = (undefined4 **)plVar20[3];
                ppuStack_e88 = (undefined4 **)
                               ((long)ppuVar24 +
                               (long)*(int *)((long)ppuVar10 + 0x2c) *
                               (long)*(int *)((long)plVar20 + 0x14));
                ppuVar26 = ppuVar24;
              }
            }
LAB_109a4f450:
            ppuVar22 = ppuVar13;
          } while (-1 < (int)uStack_ea8);
        }
        uVar14 = (uint)uVar15;
        iVar19 = (int)ppuVar13;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          return;
        }
        ___stack_chk_fail();
        puStack_d30 = (undefined4 *)0x0;
        ppuStack_d28 = (undefined4 **)0x0;
        do {
          iVar8 = *(int *)param_2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar4) {
            *(int *)param_2 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          _free(param_2[-1]);
        }
        ppuVar13 = param_1;
        __Unwind_Resume();
        pcStack_ec8 = FUN_109a4f5b0;
        ppuStack_ee0 = param_2;
        ppuStack_ed8 = param_1;
        puStack_ed0 = &stack0xfffffffffffffff0;
        if (param_4 == 0) {
          puVar12 = (undefined4 *)0x8;
          func_0x000107c2ae8c();
          *puVar12 = 1;
          puStack_ef0 = puVar12 + 1;
          *(undefined1 *)puStack_ef0 = 0;
          uStack_ee8 = 0;
          FUN_109ac3188(0xffffffe5,&puStack_ef0,&UNK_10f59695c,&UNK_10f596553,0x9b6);
        }
        else {
          if (((0x6f < iVar19) && (0xf < (int)uVar14)) && ((uVar14 & 7) == 0)) {
            FUN_109a4c4b8();
            ((byte *)((long)ppuVar13 + 2U))[0] = 0x98;
            ((byte *)((long)ppuVar13 + 2U))[1] = 0x42;
            return;
          }
          puVar12 = (undefined4 *)0x8;
          func_0x000107c2ae8c();
          *puVar12 = 1;
          puStack_ef0 = puVar12 + 1;
          *(undefined1 *)puStack_ef0 = 0;
          uStack_ee8 = 0;
          FUN_109ac3188(0xffffff37,&puStack_ef0,&UNK_10f59695c,&UNK_10f596553,0x9ba);
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x109a4f688);
        (*pcVar6)();
      }
      puVar12 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      *puVar12 = 1;
      puStack_d30 = puVar12 + 1;
      ppuStack_d28 = (undefined4 **)0x15;
      *(undefined1 *)((long)puVar12 + 0x19) = 0;
      *(undefined8 *)(puVar12 + 3) = 0x6e75662065726170;
      *(undefined8 *)(puVar12 + 1) = 0x6d6f63206c6c754e;
      *(undefined8 *)((long)puVar12 + 0x11) = 0x6e6f6974636e7566;
      FUN_109ac3188(0xffffffe5,&puStack_d30,&UNK_10f59693c,&UNK_10f596553,0x784);
      goto LAB_109a4f558;
    }
    uVar15 = 0xfffffffb;
  }
  puVar12 = (undefined4 *)0x18;
  func_0x000107c2ae8c();
  *puVar12 = 1;
  puStack_d30 = puVar12 + 1;
  ppuStack_d28 = (undefined4 **)0x12;
  *(undefined1 *)((long)puVar12 + 0x16) = 0;
  *(undefined2 *)(puVar12 + 5) = 0x6563;
  *(undefined8 *)(puVar12 + 3) = 0x6e65757165732074;
  *(undefined8 *)(puVar12 + 1) = 0x75706e6920646142;
  FUN_109ac3188(uVar15,&puStack_d30,&UNK_10f59693c,&UNK_10f596553,0x781);
LAB_109a4f558:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109a4f55c);
  (*pcVar6)();
code_r0x000109a4eca4:
  if (0 < (int)uVar14) {
    uVar18 = 0;
    do {
      bVar1 = *(byte *)((long)ppuStack_c98 + uVar18);
      *(byte *)((long)ppuStack_c98 + uVar18) = *(byte *)((long)ppuStack_cd8 + uVar18);
      *(byte *)((long)ppuStack_cd8 + uVar18) = bVar1;
      uVar18 = uVar18 + 1;
    } while (uVar28 != uVar18);
  }
  ppuStack_c98 = (undefined4 **)((long)ppuStack_c98 + lVar25);
  if (ppuStack_c88 <= ppuStack_c98) {
    plStack_ca0 = (long *)plStack_ca0[1];
    ppuStack_c98 = (undefined4 **)plStack_ca0[3];
    ppuStack_c88 = (undefined4 **)
                   ((long)ppuStack_c98 +
                   (long)*(int *)((long)ppuStack_ca8 + 0x2c) *
                   (long)*(int *)((long)plStack_ca0 + 0x14));
    ppuStack_c90 = ppuStack_c98;
  }
  ppuVar24 = (undefined4 **)((long)ppuStack_cd8 + lVar27);
  if (ppuVar24 < ppuStack_cd0) {
    plStack_ce0 = (long *)*plStack_ce0;
    ppuStack_cd0 = (undefined4 **)plStack_ce0[3];
    ppuVar24 = (undefined4 **)
               ((long)ppuStack_cd0 +
               (long)(*(int *)((long)ppuStack_ce8 + 0x2c) *
                     (*(int *)((long)plStack_ce0 + 0x14) + -1)));
    ppuStack_cc8 = (undefined4 **)
                   ((long)ppuStack_cd0 +
                   (long)(*(int *)((long)ppuStack_ce8 + 0x2c) * *(int *)((long)plStack_ce0 + 0x14)))
    ;
  }
  bVar4 = true;
  bVar7 = ppuStack_c98 == ppuStack_cd8;
  ppuStack_cd8 = ppuVar24;
  if (bVar7) goto LAB_109a4ef50;
  goto LAB_109a4eb80;
}



/* Entry: 109a4f5b0; end: 109a4f6db;  */

void FUN_109a4f5b0(long param_1,int param_2,uint param_3,long param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_4 == 0) {
    puVar2 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f59695c,&UNK_10f596553,0x9b6);
  }
  else {
    if (((0x6f < param_2) && (0xf < (int)param_3)) && ((param_3 & 7) == 0)) {
      FUN_109a4c4b8(param_1,param_2,param_3);
      *(undefined2 *)(param_1 + 2) = 0x4298;
      return;
    }
    puVar2 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffff37,&puStack_30,&UNK_10f59695c,&UNK_10f596553,0x9ba);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a4f688);
  (*pcVar1)();
}



/* Entry: 109a4f6dc; end: 109a4f85b;  */

uint FUN_109a4f6dc(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint *puVar6;
  long lVar7;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  if (param_1 != 0) {
    puVar6 = *(uint **)(param_1 + 0x60);
    if (puVar6 == (uint *)0x0) {
      uVar1 = *(uint *)(param_1 + 0x28);
      lVar7 = (long)*(int *)(param_1 + 0x2c);
      FUN_109a4d56c(param_1,0);
      uVar2 = *(ulong *)(param_1 + 0x30);
      puVar6 = *(uint **)(param_1 + 0x38);
      *(uint **)(param_1 + 0x60) = puVar6;
      puVar3 = puVar6;
      while ((ulong)((long)puVar3 + lVar7) <= uVar2) {
        *puVar3 = uVar1 | 0x80000000;
        *(uint **)(puVar3 + 2) = (uint *)((long)puVar3 + lVar7);
        uVar1 = uVar1 + 1;
        puVar3 = (uint *)((long)puVar3 + lVar7);
      }
      *(undefined8 *)((long)puVar3 + (8 - lVar7)) = 0;
      *(uint *)(**(long **)(param_1 + 0x58) + 0x14) =
           (uVar1 - *(int *)(param_1 + 0x28)) + *(int *)(**(long **)(param_1 + 0x58) + 0x14);
      *(uint *)(param_1 + 0x28) = uVar1;
      *(ulong *)(param_1 + 0x38) = uVar2;
    }
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(puVar6 + 2);
    uVar1 = *puVar6;
    if (param_2 != 0) {
      _memcpy(puVar6,param_2,(long)*(int *)(param_1 + 0x2c));
    }
    *puVar6 = uVar1 & 0x3ffffff;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = puVar6;
    }
    return uVar1 & 0x3ffffff;
  }
  puVar5 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar5 = 1;
  puStack_50 = puVar5 + 1;
  *(undefined1 *)puStack_50 = 0;
  uStack_48 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_50,&UNK_10f596968,&UNK_10f596553,0x9cb);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109a4f830);
  (*pcVar4)();
}



/* Entry: 109a4f85c; end: 109a4f93f;  */

long FUN_109a4f85c(long param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  if (((0xf < param_3) && (0x77 < param_2)) && (0x27 < (int)param_4)) {
    FUN_109a4f5b0();
    uVar2 = 0;
    FUN_109a4f5b0(0,0x70,param_4,param_5);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    return param_1;
  }
  puVar3 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar3 = 1;
  puStack_40 = puVar3 + 1;
  *(undefined1 *)puStack_40 = 0;
  uStack_38 = 0;
  FUN_109ac3188(0xffffff37,&puStack_40,&UNK_10f596971,&UNK_10f596553,0xa19);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a4f910);
  (*pcVar1)();
}



/* Entry: 109a4f940; end: 109a4fa63;  */

uint FUN_109a4f940(long param_1,long param_2,undefined8 *param_3)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puStack_40;
  undefined8 uStack_38;
  
  if (param_1 == 0) {
    puVar4 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_40 = puVar4 + 1;
    *(undefined1 *)puStack_40 = 0;
    uStack_38 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_40,&UNK_10f59697f,&UNK_10f596553,0xa3b);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109a4fa38);
    (*pcVar2)();
  }
  puStack_40 = *(uint **)(param_1 + 0x60);
  if (puStack_40 == (uint *)0x0) {
    FUN_109a4f6dc(param_1,0,&puStack_40);
    if (puStack_40 == (uint *)0x0) {
      uVar3 = 0xffffffff;
      puVar1 = puStack_40;
      goto joined_r0x000109a4f9ec;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(puStack_40 + 2);
    *puStack_40 = *puStack_40 & 0x3ffffff;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  }
  puVar1 = puStack_40;
  if (param_2 != 0) {
    _memcpy(puStack_40 + 4,param_2 + 0x10,(long)*(int *)(param_1 + 0x2c) + -0x10);
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar3 = *puVar1;
joined_r0x000109a4f9ec:
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = puVar1;
  }
  return uVar3;
}



/* Entry: 109a4fa64; end: 109a4fd6b;  */

undefined8 FUN_109a4fa64(uint *param_1,uint *param_2,uint *param_3,long param_4,undefined8 *param_5)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puStack_60;
  undefined8 uStack_58;
  
  if (param_1 == (uint *)0x0) {
    puVar5 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    puStack_60 = puVar5 + 1;
    uStack_58 = 0x15;
    *(undefined1 *)((long)puVar5 + 0x19) = 0;
    *(undefined8 *)(puVar5 + 3) = 0x7369207265746e69;
    *(undefined8 *)(puVar5 + 1) = 0x6f70206870617267;
    *(undefined8 *)((long)puVar5 + 0x11) = 0x4c4c554e20736920;
    FUN_109ac3188(0xffffffe5,&puStack_60,&UNK_10f5969b8,&UNK_10f596553,0xac9);
  }
  else {
    puVar8 = param_3;
    puVar9 = param_2;
    if (((*param_1 >> 0xe & 1) == 0) &&
       (puVar8 = param_2, puVar9 = param_3, (*param_2 & 0x3ffffff) <= (*param_3 & 0x3ffffff))) {
      puVar8 = param_3;
      puVar9 = param_2;
    }
    if ((puVar8 == (uint *)0x0) || (puVar9 == (uint *)0x0)) {
      puVar5 = (undefined4 *)0x8;
      func_0x000107c2ae8c();
      *puVar5 = 1;
      puStack_60 = puVar5 + 1;
      *(undefined1 *)puStack_60 = 0;
      uStack_58 = 0;
      FUN_109ac3188(0xffffffe5,&puStack_60,&UNK_10f59698d,&UNK_10f596553,0xa90);
    }
    else {
      if (puVar9 != puVar8) {
        puVar6 = puVar8;
        puVar7 = puVar9;
        if (((*param_1 >> 0xe & 1) == 0) &&
           (puVar6 = puVar9, puVar7 = puVar8, (*puVar9 & 0x3ffffff) <= (*puVar8 & 0x3ffffff))) {
          puVar6 = puVar8;
          puVar7 = puVar9;
        }
        for (puVar10 = *(uint **)(puVar7 + 2); puVar10 != (uint *)0x0;
            puVar10 = *(uint **)(puVar10 + (ulong)(puVar7 == *(uint **)(puVar10 + 8)) * 2 + 2)) {
          if (*(uint **)(puVar10 + 8) == puVar6) {
            uVar4 = 0;
            if (param_5 == (undefined8 *)0x0) {
              return 0;
            }
            goto LAB_109a4fbd4;
          }
        }
      }
      if (param_2 != param_3) {
        lVar3 = *(long *)(param_1 + 0x1c);
        puStack_60 = *(uint **)(lVar3 + 0x60);
        if (puStack_60 == (uint *)0x0) {
          FUN_109a4f6dc(lVar3,0,&puStack_60);
        }
        else {
          *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)(puStack_60 + 2);
          *puStack_60 = *puStack_60 & 0x3ffffff;
          *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + 1;
        }
        puVar10 = puStack_60;
        *(uint **)(puStack_60 + 6) = puVar9;
        *(uint **)(puStack_60 + 8) = puVar8;
        *(undefined8 *)(puStack_60 + 2) = *(undefined8 *)(puVar9 + 2);
        *(undefined8 *)(puStack_60 + 4) = *(undefined8 *)(puVar8 + 2);
        *(uint **)(puVar8 + 2) = puStack_60;
        *(uint **)(puVar9 + 2) = puStack_60;
        iVar1 = *(int *)(*(long *)(param_1 + 0x1c) + 0x2c) + -0x28;
        if (param_4 == 0) {
          uVar11 = 0x3f800000;
          if (0 < iVar1) {
            _bzero(puStack_60 + 10,iVar1);
          }
        }
        else {
          if (0 < iVar1) {
            _memcpy(puStack_60 + 10,param_4 + 0x28);
          }
          uVar11 = *(uint *)(param_4 + 4);
        }
        puVar10[1] = uVar11;
        uVar4 = 1;
        if (param_5 != (undefined8 *)0x0) {
LAB_109a4fbd4:
          *param_5 = puVar10;
        }
        return uVar4;
      }
      puVar5 = (undefined4 *)0x30;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar5 + 3) = 0x20737265746e696f;
      *(undefined8 *)(puVar5 + 1) = 0x7020786574726576;
      *puVar5 = 1;
      puStack_60 = puVar5 + 1;
      uStack_58 = 0x29;
      *(undefined1 *)((long)puVar5 + 0x2d) = 0;
      *(undefined8 *)(puVar5 + 7) = 0x74657320726f2820;
      *(undefined8 *)(puVar5 + 5) = 0x656469736e696f63;
      *(undefined8 *)((long)puVar5 + 0x25) = 0x294c4c554e206f74;
      *(undefined8 *)((long)puVar5 + 0x1d) = 0x2074657320726f28;
      FUN_109ac3188(0xfffffffb,&puStack_60,&UNK_10f5969b8,&UNK_10f596553,0xadd);
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a4fd08);
  (*pcVar2)();
}



/* Entry: 109a4fd6c; end: 109a5019b;  */

ulong FUN_109a4fd6c(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  int *piVar16;
  int *piStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  uint *puStack_98;
  long *plStack_90;
  int *piStack_88;
  int *piStack_80;
  int *piStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  if ((param_1 == (uint *)0x0) || ((*param_1 & 0xffff3000) != 0x42981000)) {
    puVar9 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    piStack_b0 = puVar9 + 1;
    uStack_a8 = 0x15;
    *(undefined1 *)((long)puVar9 + 0x19) = 0;
    *(undefined8 *)(puVar9 + 3) = 0x6f70206870617267;
    *(undefined8 *)(puVar9 + 1) = 0x2064696c61766e49;
    *(undefined8 *)((long)puVar9 + 0x11) = 0x7265746e696f7020;
    FUN_109ac3188(0xfffffffb,&piStack_b0,&UNK_10f596a0c,&UNK_10f596553,0xcbd);
  }
  else {
    if ((param_2 != 0) || (param_2 = *(long *)(param_1 + 0x12), param_2 != 0)) {
      iVar12 = *(int *)(*(long *)(param_1 + 0x1c) + 0x2c);
      uVar2 = param_1[0xb];
      lVar6 = (long)(int)param_1[10] << 2;
      func_0x000107c2ae8c();
      lVar7 = (long)(int)param_1[10] << 3;
      func_0x000107c2ae8c();
      uVar8 = (ulong)*param_1;
      FUN_109a4f85c(uVar8,param_1[1],uVar2,iVar12,param_2);
      _memcpy(uVar8 + 0x3840,param_1 + 0xe10,(long)(int)param_1[1] + -0x78);
      auStack_a0[0] = 0x40;
      plVar15 = *(long **)(param_1 + 0x16);
      if (plVar15 == (long *)0x0) {
        lStack_68 = 0;
        uStack_70 = 0;
        plStack_90 = (long *)0x0;
        piStack_78 = (int *)0x0;
        piStack_80 = (int *)0x0;
      }
      else {
        lStack_68 = *(long *)(*plVar15 + 0x18) +
                    ((long)*(int *)(*plVar15 + 0x14) + -1) * (long)(int)param_1[0xb];
        uStack_70 = (undefined4)plVar15[2];
        piStack_80 = (int *)plVar15[3];
        piStack_78 = (int *)((long)piStack_80 +
                            (long)*(int *)((long)plVar15 + 0x14) * (long)(int)param_1[0xb]);
        plStack_90 = plVar15;
      }
      puStack_98 = param_1;
      piStack_88 = piStack_80;
      if (0 < (int)param_1[10]) {
        iVar14 = 0;
        iVar13 = 0;
        piVar16 = piStack_78;
        do {
          piVar11 = piStack_88;
          if (-1 < *piStack_88) {
            piStack_b0 = (int *)0x0;
            FUN_109a4f940(uVar8,piStack_88,&piStack_b0);
            iVar3 = *piVar11;
            *piStack_b0 = iVar3;
            *(int *)(lVar6 + (long)iVar13 * 4) = iVar3;
            *piVar11 = iVar13;
            *(int **)(lVar7 + (long)iVar13 * 8) = piStack_b0;
            iVar13 = iVar13 + 1;
          }
          piStack_88 = (int *)((long)piVar11 + (long)(int)uVar2);
          if (piVar16 <= piStack_88) {
            plVar15 = (long *)plVar15[1];
            piStack_88 = (int *)plVar15[3];
            piVar16 = (int *)((long)piStack_88 +
                             (long)(int)param_1[0xb] * (long)*(int *)((long)plVar15 + 0x14));
            plStack_90 = plVar15;
            piStack_80 = piStack_88;
            piStack_78 = piVar16;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)param_1[10]);
      }
      FUN_109a4cb14(*(undefined8 *)(param_1 + 0x1c),auStack_a0,0);
      puVar4 = puStack_98;
      iVar13 = *(int *)(*(long *)(param_1 + 0x1c) + 0x28);
      if (0 < iVar13) {
        iVar14 = 0;
        piVar16 = piStack_78;
        plVar15 = plStack_90;
        do {
          piVar11 = piStack_88;
          if (-1 < *piStack_88) {
            piStack_b0 = (int *)0x0;
            FUN_109a4fa64(uVar8,*(undefined8 *)(lVar7 + (long)**(int **)(piStack_88 + 6) * 8),
                          *(undefined8 *)(lVar7 + (long)**(int **)(piStack_88 + 8) * 8),piStack_88,
                          &piStack_b0);
            *piStack_b0 = *piVar11;
          }
          piStack_88 = (int *)((long)piVar11 + (long)iVar12);
          if (piVar16 <= piStack_88) {
            plVar15 = (long *)plVar15[1];
            piStack_88 = (int *)plVar15[3];
            piVar16 = (int *)((long)piStack_88 +
                             (long)(int)puVar4[0xb] * (long)*(int *)((long)plVar15 + 0x14));
            plStack_90 = plVar15;
            piStack_80 = piStack_88;
            piStack_78 = piVar16;
          }
          iVar14 = iVar14 + 1;
          iVar13 = *(int *)(*(long *)(param_1 + 0x1c) + 0x28);
        } while (iVar14 < iVar13);
      }
      lVar10 = *(long *)(param_1 + 0x16);
      if (lVar10 == 0) {
        piVar11 = (int *)0x0;
        piVar16 = (int *)0x0;
        uStack_70 = 0;
      }
      else {
        piVar16 = *(int **)(lVar10 + 0x18);
        piVar11 = (int *)((long)piVar16 + (long)*(int *)(lVar10 + 0x14) * (long)(int)param_1[0xb]);
      }
      piStack_78 = (int *)0x0;
      piStack_80 = (int *)0x0;
      piStack_88 = (int *)0x0;
      plStack_90 = (long *)0x0;
      if (0 < iVar13) {
        iVar12 = 0;
        do {
          if (-1 < *piVar16) {
            lVar1 = (long)iVar12;
            iVar12 = iVar12 + 1;
            *piVar16 = *(int *)(lVar6 + lVar1 * 4);
          }
          piVar16 = (int *)((long)piVar16 + (long)(int)uVar2);
          if (piVar11 <= piVar16) {
            lVar10 = *(long *)(lVar10 + 8);
            piVar16 = *(int **)(lVar10 + 0x18);
            piVar11 = (int *)((long)piVar16 +
                             (long)(int)param_1[0xb] * (long)*(int *)(lVar10 + 0x14));
          }
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      if (lVar6 != 0) {
        _free(*(undefined8 *)(lVar6 + -8));
      }
      if (lVar7 != 0) {
        _free(*(undefined8 *)(lVar7 + -8));
      }
      return uVar8;
    }
    puVar9 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    piStack_b0 = puVar9 + 1;
    uStack_a8 = 0x14;
    *(undefined1 *)(puVar9 + 6) = 0;
    puVar9[5] = 0x7265746e;
    *(undefined8 *)(puVar9 + 3) = 0x696f702065676172;
    *(undefined8 *)(puVar9 + 1) = 0x6f7473204c4c554e;
    FUN_109ac3188(0xffffffe5,&piStack_b0,&UNK_10f596a0c,&UNK_10f596553,0xcc3);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a50154);
  (*pcVar5)();
}



/* Entry: 109a5019c; end: 109a502a7;  */

undefined8 FUN_109a5019c(long param_1,int param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 *puVar4;
  long *plStack_40;
  undefined8 uStack_38;
  long alStack_30 [2];
  
  if (param_3 != 0) {
    uVar2 = 0;
    FUN_109a4c4b8(0,(long)param_2,8,param_3);
    if (param_1 != 0) {
      alStack_30[1] = 0x7ff8000000000000;
      alStack_30[0] = param_1;
      while( true ) {
        plVar3 = alStack_30;
        FUN_109a503b8();
        if (plVar3 == (long *)0x0) break;
        plStack_40 = plVar3;
        FUN_109a4d978(uVar2,&plStack_40);
      }
    }
    return uVar2;
  }
  puVar4 = (undefined4 *)0x1c;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  plStack_40 = (long *)(puVar4 + 1);
  uStack_38 = 0x14;
  *(undefined1 *)(puVar4 + 6) = 0;
  puVar4[5] = 0x7265746e;
  *(undefined8 *)(puVar4 + 3) = 0x696f702065676172;
  *(undefined8 *)(puVar4 + 1) = 0x6f7473204c4c554e;
  FUN_109ac3188(0xffffffe5,&plStack_40,&UNK_10f596a19,&UNK_10f596553,0xd11);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a50278);
  (*pcVar1)();
}



/* Entry: 109a502a8; end: 109a503b7;  */

void FUN_109a502a8(long *param_1,long param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    puVar2 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596a3e,&UNK_10f596553,0xd72);
  }
  else {
    if (-1 < param_3) {
      *param_1 = param_2;
      *(undefined4 *)(param_1 + 1) = 0;
      *(int *)((long)param_1 + 0xc) = param_3;
      return;
    }
    puVar2 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffff2d,&puStack_30,&UNK_10f596a3e,&UNK_10f596553,0xd75);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a50364);
  (*pcVar1)();
}



/* Entry: 109a503b8; end: 109a504db;  */

long FUN_109a503b8(long *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (long *)0x0) {
    puVar3 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_30 = puVar3 + 1;
    uStack_28 = 0x15;
    *(undefined1 *)((long)puVar3 + 0x19) = 0;
    *(undefined8 *)(puVar3 + 3) = 0x6f7020726f746172;
    *(undefined8 *)(puVar3 + 1) = 0x657469204c4c554e;
    *(undefined8 *)((long)puVar3 + 0x11) = 0x7265746e696f7020;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596a6b,&UNK_10f596553,0xd85);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109a504ac);
    (*pcVar2)();
  }
  lVar4 = *param_1;
  uVar5 = *(uint *)(param_1 + 1);
  if (lVar4 == 0) {
    lVar7 = 0;
    uVar6 = uVar5;
  }
  else {
    lVar7 = *(long *)(lVar4 + 0x20);
    if ((lVar7 == 0) || (uVar6 = uVar5 + 1, *(int *)((long)param_1 + 0xc) <= (int)uVar6)) {
      uVar6 = (uVar5 & (int)uVar5 >> 0x1f) - 1;
      lVar8 = lVar4;
      do {
        if (*(long *)(lVar8 + 0x10) != 0) {
          lVar7 = 0;
          uVar6 = uVar5;
          if (*(int *)((long)param_1 + 0xc) != 0) {
            lVar7 = *(long *)(lVar8 + 0x10);
          }
          goto LAB_109a50430;
        }
        lVar8 = *(long *)(lVar8 + 0x18);
        bVar1 = 0 < (int)uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar1);
      lVar7 = 0;
    }
  }
LAB_109a50430:
  *param_1 = lVar7;
  *(uint *)(param_1 + 1) = uVar6;
  return lVar4;
}



/* Entry: 109a504dc; end: 109a50597;  */

void FUN_109a504dc(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar4 = *(long *)(param_2 + 0x20);
    lVar1 = 0;
    if (param_2 != param_3) {
      lVar1 = param_2;
    }
    *(long *)(param_1 + 0x10) = lVar4;
    *(long *)(param_1 + 0x18) = lVar1;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 8) = param_1;
    }
    *(long *)(param_2 + 0x20) = param_1;
    return;
  }
  puVar3 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar3 = 1;
  puStack_30 = puVar3 + 1;
  *(undefined1 *)puStack_30 = 0;
  uStack_28 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596a29,&UNK_10f596553,0xd3f);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a50564);
  (*pcVar2)();
}



/* Entry: 109a50598; end: 109a52193;  */

void FUN_109a50598(uint *param_1,uint *param_2,uint param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  double dVar11;
  undefined8 *puVar12;
  int *piVar13;
  bool bVar14;
  bool bVar15;
  int *piVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  int *piVar19;
  undefined4 *puVar20;
  ulong *puVar21;
  uint *puVar22;
  undefined8 uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  ulong uVar28;
  code *pcVar29;
  int *piVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  undefined4 *puVar39;
  double *pdVar40;
  float *pfVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  undefined8 *puVar45;
  undefined8 *puVar46;
  double *pdVar47;
  float *pfVar48;
  undefined8 *puVar49;
  ulong uVar50;
  int *piVar51;
  undefined8 *puVar52;
  undefined4 *puVar53;
  uint uVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  ulong uVar57;
  undefined8 *puVar58;
  undefined8 *puVar59;
  ulong uVar60;
  ulong uVar61;
  undefined8 *puVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  uint uStack_814;
  ulong uStack_808;
  uint uStack_7ac;
  ulong uStack_798;
  undefined8 *puStack_790;
  undefined8 uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong *puStack_728;
  ulong uStack_720;
  ulong uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  undefined8 *puStack_6d0;
  ulong *puStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  undefined8 uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong *puStack_668;
  ulong uStack_660;
  undefined8 uStack_658;
  uint auStack_650 [34];
  int *piStack_5c8;
  int *piStack_5c0;
  int aiStack_5b8 [257];
  int aiStack_1b4 [4];
  int aiStack_1a4 [31];
  undefined8 uStack_128;
  int aiStack_120 [32];
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piStack_5c0 = (int *)0x408;
  piStack_5c8 = aiStack_5b8;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar21 = *(ulong **)(param_1 + 2);
    uStack_670 = (ulong)&uStack_6b0 | 8;
    uStack_6a8 = puVar21[1];
    uStack_6b0 = *puVar21;
    uStack_698 = puVar21[3];
    uStack_6a0 = puVar21[2];
    uStack_688 = puVar21[5];
    uStack_690 = puVar21[4];
    uStack_678 = puVar21[7];
    uStack_680 = puVar21[6];
    puStack_668 = &uStack_660;
    uStack_658 = 0;
    uStack_660 = 0;
    if (puVar21[7] != 0) {
      piVar16 = (int *)(puVar21[7] + 0x14);
      do {
        cVar10 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar14) {
          *piVar16 = *piVar16 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    if (*(int *)((long)puVar21 + 4) < 3) {
      uStack_660 = *(ulong *)puVar21[9];
      uStack_658 = ((ulong *)puVar21[9])[1];
    }
    else {
      uStack_6b0 = uStack_6b0 & 0xffffffff;
      func_0x000109a84868(&uStack_6b0);
    }
  }
  else {
    FUN_109a8a180(&uStack_6b0,param_1,0xffffffff);
  }
  puStack_6d0 = (undefined8 *)((ulong)&uStack_710 | 8);
  uStack_708 = uStack_6a8;
  uStack_710 = uStack_6b0;
  uStack_6f8 = uStack_698;
  uStack_700 = uStack_6a0;
  uStack_6e8 = uStack_688;
  uStack_6f0 = uStack_690;
  uStack_6d8 = uStack_678;
  uStack_6e0 = uStack_680;
  uStack_6b8 = 0;
  uStack_6c0 = 0;
  if (uStack_678 != 0) {
    piVar16 = (int *)(uStack_678 + 0x14);
    do {
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar14) {
        *piVar16 = *piVar16 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  puStack_6c8 = &uStack_6c0;
  if (uStack_6b0._4_4_ < 3) {
    uStack_6c0 = *puStack_668;
    uStack_6b8 = puStack_668[1];
  }
  else {
    uStack_710 = uStack_6b0 & 0xffffffff;
    func_0x000109a84868(&uStack_710,&uStack_6b0);
  }
  uVar36 = uStack_710;
  uVar33 = (uint)(((param_3 ^ 0xffffffff) & 0x21) == 0);
  if ((uStack_710 & 0xff8) == 0) {
    uVar33 = 1;
  }
  if ((((uint)uStack_710 & 0xfff) < 0xf) && ((1 << (ulong)((uint)uStack_710 & 0x1f) & 0x6060U) != 0)
     ) {
    uVar42 = (uint)uStack_710 & 7;
    uVar2 = param_3 & 1;
    if ((param_3 & 1) == 0) {
      if (((param_3 >> 4 & 1) == 0) || ((uStack_710 & 0xff8) != 0)) goto LAB_109a507e0;
      uStack_128 = (undefined4 *)NEON_rev64(*puStack_6d0,4);
      FUN_109a8ee3c(param_2,&uStack_128,uVar42 | 8,0xffffffff,0,0);
    }
    else if (((param_3 >> 5 & 1) == 0) || (((uint)uStack_710 & 0xff8) != 8)) {
LAB_109a507e0:
      uStack_128 = (undefined4 *)NEON_rev64(*puStack_6d0,4);
      FUN_109a8ee3c(param_2,&uStack_128,(uint)uStack_710 & 0xfff,0xffffffff,0,0);
    }
    else {
      uStack_128 = (undefined4 *)NEON_rev64(*puStack_6d0,4);
      FUN_109a8ee3c(param_2,&uStack_128,uVar42,0xffffffff,0,0);
    }
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar21 = *(ulong **)(param_2 + 2);
      uStack_730 = (ulong)&uStack_770 | 8;
      uStack_768 = puVar21[1];
      uStack_770 = *puVar21;
      uStack_758 = puVar21[3];
      uStack_760 = puVar21[2];
      uStack_748 = puVar21[5];
      uStack_750 = puVar21[4];
      uStack_738 = puVar21[7];
      uStack_740 = puVar21[6];
      puStack_728 = &uStack_720;
      uStack_718 = 0;
      uStack_720 = 0;
      if (puVar21[7] != 0) {
        piVar16 = (int *)(puVar21[7] + 0x14);
        do {
          cVar10 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar14) {
            *piVar16 = *piVar16 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      if (*(int *)((long)puVar21 + 4) < 3) {
        uStack_720 = *(ulong *)puVar21[9];
        uStack_718 = ((ulong *)puVar21[9])[1];
      }
      else {
        uStack_770 = uStack_770 & 0xffffffff;
        func_0x000109a84868(&uStack_770);
      }
    }
    else {
      FUN_109a8a180(&uStack_770,param_2,0xffffffff);
    }
    uVar36 = (ulong)(0x88442211 >> ((uVar36 & 7) << 2)) & 0xf;
    uVar34 = (uint)uVar36;
    uVar8 = uVar34 * 2;
    uVar61 = (ulong)uVar8;
    uVar5 = uVar34;
    if (uVar33 == 0) {
      uVar5 = uVar8;
    }
    if (((int)param_4 < 1) || (uStack_708._4_4_ != 1)) {
      uStack_814 = 0;
      if (((param_3 >> 2 & 1) == 0) && (1 < (int)(uint)uStack_708)) {
        if (uStack_708._4_4_ == 1) {
          if (((uStack_710._1_1_ >> 6 & 1) != 0) && ((uStack_770._1_1_ >> 6 & 1) != 0)) {
            uStack_814 = 0;
            goto LAB_109a50940;
          }
        }
        else {
          uStack_814 = 0;
          uVar3 = 0;
          if (1 < uStack_708._4_4_) {
            uVar3 = uVar33;
          }
          if (((param_3 & 1) == 0) || (uVar3 == 0)) goto LAB_109a50940;
        }
        uStack_814 = 1;
      }
LAB_109a50940:
      uVar57 = 0;
      uVar28 = (ulong)(uVar34 * 4);
      uVar3 = uVar2 & uVar33;
      lVar32 = 3;
      if (uVar42 != 6) {
        lVar32 = 0;
      }
      lVar4 = 1;
      if ((param_3 & 1) != 0) {
        lVar4 = 2;
      }
      if (uVar33 == 0) {
        lVar4 = 0;
      }
      uStack_808 = param_4;
      do {
        uVar42 = (uint)uStack_768;
        if (uStack_814 == 0) {
          bVar14 = (param_3 & 4) == 0;
          bVar15 = (param_3 & 1) == 0;
          puVar59 = &uStack_770;
          if (bVar15) {
            puVar59 = &uStack_710;
          }
          uVar44 = *(uint *)((ulong)puVar59 | 0xc);
          if (bVar15) {
            uVar42 = (uint)uStack_708;
          }
          if (!bVar14 || uVar44 != 1) {
            uVar42 = uVar44;
          }
          uVar50 = (ulong)uVar42;
          uVar54 = (uint)uStack_708;
          if (bVar14 && uVar44 == 1) {
            uVar54 = 1;
          }
          uVar44 = uVar33 & uVar42;
          iVar26 = 0;
        }
        else {
          uVar44 = 0;
          uVar50 = uStack_768 & 0xffffffff;
          puVar59 = &uStack_770;
          if ((param_3 & 1) == 0) {
            puVar59 = &uStack_6b0;
          }
          uVar54 = *(uint *)((ulong)puVar59 | 0xc);
          iVar26 = (uint)uStack_768 * uVar34 * 4;
        }
        uVar27 = (uint)uVar50;
        if (uVar42 != 0) {
          if ((int)uVar27 < 6) {
            auStack_650[0] = uVar27;
            uVar57 = 1;
          }
          else {
            uVar42 = uVar27 - 1 ^ uVar27;
            if (uVar42 == 1) {
              uVar57 = 0;
              uVar60 = uVar50;
LAB_109a50aec:
              uVar42 = 3;
              do {
                uVar25 = 0;
                uVar35 = (uint)uVar60;
                if (uVar42 != 0) {
                  uVar25 = (int)uVar35 / (int)uVar42;
                }
                iVar43 = (int)uVar57;
                if (uVar25 * uVar42 == uVar35) {
                  auStack_650[iVar43] = uVar42;
                  uVar57 = (ulong)(iVar43 + 1);
                  uVar60 = (ulong)uVar25;
                }
                else {
                  uVar42 = uVar42 + 2;
                  if (uVar35 < uVar42 * uVar42) {
                    auStack_650[iVar43] = uVar35;
                    uVar57 = (ulong)(iVar43 + 1);
                    break;
                  }
                }
              } while (1 < (int)uVar60);
            }
            else {
              auStack_650[0] = uVar42 + 1 >> 1;
              if (auStack_650[0] == uVar27) {
                uVar57 = 1;
              }
              else {
                uVar42 = 0;
                if (auStack_650[0] != 0) {
                  uVar42 = uVar27 / auStack_650[0];
                }
                uVar60 = (ulong)uVar42;
                uVar57 = 1;
                if (1 < uVar42) goto LAB_109a50aec;
              }
            }
            uVar60 = (ulong)~auStack_650[0] & 1;
            iVar43 = (int)uVar57;
            uVar42 = ((int)uVar60 + iVar43) / 2;
            if ((int)uVar60 < (int)uVar42) {
              lVar37 = uVar42 - uVar60;
              puVar22 = auStack_650 + uVar60;
              do {
                iVar43 = iVar43 + -1;
                uVar42 = *puVar22;
                *puVar22 = auStack_650[iVar43];
                auStack_650[iVar43] = uVar42;
                lVar37 = lVar37 + -1;
                puVar22 = puVar22 + 1;
              } while (lVar37 != 0);
            }
          }
        }
        uVar35 = auStack_650[0];
        iVar43 = (int)uVar57;
        uVar25 = *(uint *)((long)&uStack_658 + (long)iVar43 * 4 + 4);
        uVar42 = auStack_650[1];
        if ((auStack_650[0] & 1) != 0 || iVar43 < 2) {
          uVar42 = auStack_650[0];
        }
        iVar24 = uVar8 + uVar8 * uVar42;
        if ((5 < (int)uVar42 & uVar42) == 0) {
          iVar24 = 0;
        }
        iVar24 = iVar26 + uVar27 * (uVar8 + 4) + iVar24;
        if (uStack_814 == 0) {
          if (((uStack_700 == uStack_760) && (auStack_650[0] != uVar25)) || (uVar44 != 0))
          goto LAB_109a50c28;
LAB_109a50c38:
          bVar14 = true;
        }
        else {
          if (auStack_650[0] == uVar25) goto LAB_109a50c38;
LAB_109a50c28:
          bVar14 = false;
          iVar24 = iVar24 + uVar27 * uVar8;
        }
        uVar42 = iVar24 + 0x20;
        if (piStack_5c0 < (int *)(long)(int)uVar42) {
          if (piStack_5c8 != aiStack_5b8) {
            if (piStack_5c8 != (int *)0x0) {
              __ZdaPv();
            }
            piStack_5c8 = aiStack_5b8;
            piStack_5c0 = (int *)0x408;
          }
          if (0x408 < uVar42) {
            piVar16 = (int *)(long)(int)uVar42;
            __Znam();
            piStack_5c8 = piVar16;
            goto LAB_109a50c8c;
          }
        }
        else {
LAB_109a50c8c:
          piStack_5c0 = (int *)(long)(int)uVar42;
        }
        piVar13 = piStack_5c8;
        uVar6 = auStack_650[0];
        piVar16 = (int *)((long)piStack_5c8 + (long)(int)(uVar27 * uVar8));
        uVar42 = 0;
        if (uVar35 != uVar25) {
          uVar42 = uVar3;
        }
        if ((uVar27 != 0) || (uVar42 != 0)) {
          uVar42 = 0;
          if (uStack_814 == 0) {
            uVar42 = uVar3;
          }
          if ((int)uVar27 < 6) {
            *piVar16 = 0;
            uVar42 = uVar27 - 1;
            piVar16[(int)uVar42] = uVar42;
            if (uVar27 != 4) {
              if (2 < (int)uVar27) {
                uVar60 = 1;
                do {
                  piVar16[uVar60] = (int)uVar60;
                  uVar60 = uVar60 + 1;
                } while (uVar42 != uVar60);
                if (uVar27 == 5) {
                  if (uVar34 == 8) {
                    piVar13[2] = 0;
                    piVar13[3] = 0;
                    piVar13[0] = 0;
                    piVar13[1] = 0x3ff00000;
                  }
                  else {
                    piVar13[0] = 0x3f800000;
                    piVar13[1] = 0;
                  }
                }
              }
              goto LAB_109a50cb0;
            }
            piVar16[1] = 2;
            piVar16[2] = 1;
            uVar42 = 2;
          }
          else {
            lVar37 = (long)iVar43;
            uVar60 = (ulong)(int)auStack_650[0];
            aiStack_1b4[lVar37 + 1] = 1;
            aiStack_120[lVar37 + -2] = 0;
            if (0 < iVar43) {
              _bzero(&uStack_128,uVar57 << 2);
              iVar26 = aiStack_1b4[lVar37 + 1];
              piVar30 = (int *)((long)&uStack_658 + lVar37 * 4 + 4);
              piVar19 = aiStack_1b4 + lVar37;
              uVar38 = uVar57;
              do {
                iVar26 = *piVar30 * iVar26;
                *piVar19 = iVar26;
                uVar38 = uVar38 - 1;
                piVar30 = piVar30 + -1;
                piVar19 = piVar19 + -1;
              } while (uVar38 != 0);
            }
            piVar30 = piVar16;
            if ((uVar42 != 0) && (uVar6 != *(uint *)((long)&uStack_658 + lVar37 * 4 + 4))) {
              piVar30 = piVar13;
            }
            if ((uVar60 & 1) == 0) {
              uVar25 = 0;
              do {
                uVar42 = uVar25;
                uVar25 = uVar42 + 1;
              } while ((uint)(1 << (ulong)(uVar42 & 0x1f)) < uVar6);
              iVar26 = (int)(aiStack_1b4[2] * uVar6) >> 1;
              if ((int)uVar6 < 3) {
                *piVar30 = 0;
                piVar30[1] = iVar26;
              }
              else {
                iVar24 = (int)(aiStack_1b4[2] * uVar6) >> 2;
                if (uVar6 < 0x101) {
                  lVar37 = 1;
                  pbVar17 = &UNK_10e02c80c;
                  piVar19 = piVar30 + 2;
                  do {
                    iVar9 = (uint)(*pbVar17 >> (ulong)(0xb - uVar25 & 0x1f)) * aiStack_1b4[2];
                    piVar19[-2] = iVar9;
                    piVar19[-1] = iVar9 + iVar26;
                    *piVar19 = iVar9 + iVar24;
                    piVar19[1] = iVar26 + iVar24 + iVar9;
                    uVar38 = lVar37 + 3;
                    lVar37 = lVar37 + 4;
                    pbVar17 = pbVar17 + 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar38 <= uVar6 - 4);
                }
                else {
                  uVar38 = 0;
                  lVar37 = 1;
                  piVar19 = piVar30 + 2;
                  do {
                    uVar31 = lVar37 - 1;
                    iVar9 = (((uint)(byte)(&UNK_10e02c80c)[uVar38 & 0xff] << 0x18 |
                              (uint)(byte)(&UNK_10e02c80c)[uVar31 >> 10 & 0xff] << 0x10 |
                              (uint)(byte)(&UNK_10e02c80c)[uVar31 >> 0x12 & 0xff] << 8 |
                             (uint)(byte)(&UNK_10e02c80c)[uVar31 >> 0x1a]) >>
                            (ulong)(0x23 - uVar25 & 0x1f)) * aiStack_1b4[2];
                    piVar19[-2] = iVar9;
                    piVar19[-1] = iVar9 + iVar26;
                    uVar31 = lVar37 + 3;
                    lVar37 = lVar37 + 4;
                    *piVar19 = iVar9 + iVar24;
                    piVar19[1] = iVar26 + iVar24 + iVar9;
                    uVar38 = uVar38 + 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar31 < uVar6);
                }
              }
              uStack_128 = (undefined4 *)CONCAT44(uStack_128._4_4_ + 1,(int)uStack_128);
              if ((1 < iVar43) && ((int)uVar6 < (int)uVar27)) {
                lVar37 = uVar60 * 4;
                uVar38 = uVar60;
                iVar26 = aiStack_1b4[3];
                while( true ) {
                  uVar31 = (ulong)uVar6;
                  piVar19 = piVar30;
                  if (0 < (int)uVar6) {
                    do {
                      *(int *)((long)piVar19 + lVar37) = *piVar19 + iVar26;
                      uVar31 = uVar31 - 1;
                      piVar19 = piVar19 + 1;
                    } while (uVar31 != 0);
                  }
                  uVar38 = uVar38 + uVar60;
                  if ((long)uVar50 <= (long)uVar38) break;
                  iVar26 = iVar26 + aiStack_1b4[3];
                  iVar43 = uStack_128._4_4_ + 1;
                  uStack_128 = (undefined4 *)CONCAT44(iVar43,(int)uStack_128);
                  piVar19 = aiStack_120;
                  puVar22 = auStack_650 + 2;
                  piVar51 = aiStack_1b4 + 4;
                  if ((int)auStack_650[1] <= iVar43) {
                    do {
                      iVar26 = (*piVar51 + iVar26) - piVar51[-2];
                      iVar43 = *piVar19;
                      piVar19[-1] = 0;
                      *piVar19 = iVar43 + 1;
                      uVar25 = *puVar22;
                      piVar19 = piVar19 + 1;
                      puVar22 = puVar22 + 1;
                      piVar51 = piVar51 + 1;
                    } while ((int)uVar25 <= iVar43 + 1);
                  }
                  lVar37 = lVar37 + uVar60 * 4;
                }
              }
            }
            else {
              iVar26 = 0;
              *piVar30 = 0;
              uVar60 = 1;
              do {
                iVar26 = iVar26 + aiStack_1b4[2];
                iVar43 = (int)uStack_128 + 1;
                uStack_128 = (undefined4 *)CONCAT44(uStack_128._4_4_,iVar43);
                piVar19 = aiStack_1b4 + 3;
                piVar51 = (int *)((long)&uStack_128 + 4);
                puVar22 = auStack_650;
                if ((int)auStack_650[0] <= iVar43) {
                  do {
                    puVar22 = puVar22 + 1;
                    iVar26 = (*piVar19 + iVar26) - piVar19[-2];
                    iVar43 = *piVar51;
                    piVar51[-1] = 0;
                    *piVar51 = iVar43 + 1;
                    piVar19 = piVar19 + 1;
                    piVar51 = piVar51 + 1;
                  } while ((int)*puVar22 <= iVar43 + 1);
                }
                piVar30[uVar60] = iVar26;
                uVar60 = uVar60 + 1;
              } while (uVar60 != uVar50);
              uVar42 = 0;
            }
            if (piVar30 != piVar16) {
              *piVar16 = 0;
              uVar60 = (ulong)(uVar27 & 1);
              do {
                iVar26 = (piVar30 + uVar60)[1];
                piVar16[piVar30[uVar60]] = (int)uVar60;
                piVar16[iVar26] = (int)uVar60 + 1;
                uVar60 = uVar60 + 2;
              } while (uVar60 < uVar50);
            }
          }
          if ((uVar27 & uVar27 - 1) == 0) {
            dVar63 = *(double *)(&UNK_10e02c910 + (long)(int)uVar42 * 0x10);
            dVar66 = -*(double *)(&UNK_10e02c918 + (long)(int)uVar42 * 0x10);
          }
          else {
            dVar66 = -6.283185307179586 / (double)(int)uVar27;
            _sin();
            dVar63 = SQRT(1.0 - dVar66 * dVar66);
          }
          uVar42 = (int)(uVar27 + 1) / 2;
          if (uVar34 == 8) {
            piVar13[2] = 0;
            piVar13[3] = 0;
            piVar13[0] = 0;
            piVar13[1] = 0x3ff00000;
            if ((uVar50 & 1) == 0) {
              piVar30 = piVar13 + (long)(int)uVar42 * 4;
              piVar30[2] = 0;
              piVar30[3] = 0;
              piVar30[0] = 0;
              piVar30[1] = -0x40100000;
            }
            if (2 < (int)uVar27) {
              if ((int)uVar42 < 3) {
                uVar42 = 2;
              }
              lVar37 = (ulong)uVar42 - 1;
              pdVar40 = (double *)(piVar13 + 6);
              pdVar47 = (double *)(piVar13 + uVar50 * 4 + -2);
              dVar64 = dVar66;
              dVar65 = dVar63;
              do {
                pdVar40[-1] = dVar65;
                *pdVar40 = dVar64;
                pdVar47[-1] = dVar65;
                *pdVar47 = -dVar64;
                dVar11 = dVar64 * dVar66;
                dVar64 = dVar63 * dVar64 + dVar66 * dVar65;
                dVar65 = -dVar11 + dVar63 * dVar65;
                pdVar40 = pdVar40 + 2;
                pdVar47 = pdVar47 + -2;
                lVar37 = lVar37 + -1;
              } while (lVar37 != 0);
            }
          }
          else {
            piVar13[0] = 0x3f800000;
            piVar13[1] = 0;
            if ((uVar50 & 1) == 0) {
              (piVar13 + (long)(int)uVar42 * 2)[0] = -0x40800000;
              (piVar13 + (long)(int)uVar42 * 2)[1] = 0;
            }
            if (2 < (int)uVar27) {
              if ((int)uVar42 < 3) {
                uVar42 = 2;
              }
              lVar37 = (ulong)uVar42 - 1;
              pfVar41 = (float *)(piVar13 + 3);
              pfVar48 = (float *)(piVar13 + uVar50 * 2 + -1);
              dVar64 = dVar66;
              dVar65 = dVar63;
              do {
                pfVar41[-1] = (float)dVar65;
                *pfVar41 = (float)dVar64;
                pfVar48[-1] = (float)dVar65;
                *pfVar48 = -(float)dVar64;
                dVar11 = dVar64 * dVar66;
                dVar64 = dVar63 * dVar64 + dVar66 * dVar65;
                dVar65 = -dVar11 + dVar63 * dVar65;
                pfVar41 = pfVar41 + 2;
                pfVar48 = pfVar48 + -2;
                lVar37 = lVar37 + -1;
              } while (lVar37 != 0);
            }
          }
        }
LAB_109a50cb0:
        uStack_798 = uStack_700;
        uVar60 = uStack_760;
        lVar37 = (long)(int)(uVar27 * uVar8);
        puVar59 = (undefined8 *)((long)piVar16 + (long)(int)uVar27 * 4 + 0xf & 0xfffffffffffffff0);
        if (uStack_814 == 0) {
          uVar42 = ((uint)uStack_770 ^ (uint)uStack_710) & 0xff8;
          uVar25 = 0;
          if (uVar42 != 0) {
            uVar25 = 0x200;
          }
          if (bVar14) {
            puStack_790 = (undefined8 *)0x0;
            puVar55 = puVar59;
LAB_109a50e90:
            uVar38 = 0;
          }
          else {
            puVar55 = (undefined8 *)((long)puVar59 + lVar37);
            puStack_790 = puVar59;
            if ((param_3 & 1) != 0) goto LAB_109a50e90;
            uVar35 = uVar5;
            if (uVar42 != 0) {
              uVar35 = 0;
            }
            uVar60 = 0;
            if (uVar44 != 0) {
              uVar60 = (ulong)uVar35;
            }
            uVar38 = 0;
            if (1 < (int)uVar27) {
              uVar38 = uVar60;
            }
          }
          uVar35 = param_3 >> 2 & 1;
          uVar44 = uVar2;
          if (uVar42 == 0) {
            uVar44 = 1;
          }
          uVar42 = uVar8;
          if ((uVar50 & 1) != 0) {
            uVar42 = uVar5;
          }
          uVar6 = 0;
          if (uVar44 == 0) {
            uVar6 = uVar42;
          }
          if ((int)uVar54 < 2) {
            uVar35 = 1;
          }
          uVar35 = uVar3 | uVar35;
          uStack_814 = uVar35 ^ 1;
          dVar66 = 1.0;
          if (((param_3 >> 1 & 1) != 0) && (uVar35 != 0)) {
            uStack_814 = 0;
            uVar42 = uVar54;
            if ((param_3 & 4) != 0) {
              uVar42 = 1;
            }
            dVar66 = 1.0 / (double)(int)(uVar42 * uVar27);
          }
          iVar26 = uVar6 + uVar27 * uVar5;
          uVar44 = (uint)uStack_808;
          uVar42 = uVar44;
          if ((int)uVar54 <= (int)uVar44) {
            uVar42 = uVar54;
          }
          uVar27 = uVar54;
          if (0 < (int)uVar44) {
            uVar27 = uVar42;
          }
          uStack_808 = (ulong)uVar27;
          if ((int)uVar27 < 1) {
            uVar27 = 0;
          }
          else {
            uVar60 = 0;
            pcVar29 = (code *)(&PTR_FUN_110b21ba0)[lVar4 + lVar32];
            do {
              puVar52 = (undefined8 *)(uStack_760 + *puStack_728 * uVar60);
              puVar59 = puVar52;
              if (puStack_790 != (undefined8 *)0x0) {
                puVar59 = puStack_790;
              }
              (*pcVar29)(dVar66,uStack_700 + *puStack_6c8 * uVar60,puVar59,uVar50,uVar57,auStack_650
                         ,piVar16,piVar13,uVar50,0,puVar55,uVar25 | uVar2);
              if (puVar59 != puVar52) {
                _memcpy(puVar52,(long)puVar59 + uVar38,(long)iVar26);
              }
              uVar60 = uVar60 + 1;
            } while (uStack_808 != uVar60);
          }
          if ((int)uVar27 < (int)uVar54) {
            uVar50 = (ulong)uVar27;
            do {
              _bzero(uStack_760 + *puStack_728 * uVar50,(long)iVar26);
              uVar50 = uVar50 + 1;
            } while (uVar54 != uVar50);
          }
          if (uVar35 != 0) {
            uVar42 = 0;
            if ((param_3 & 1) == 0) {
              uVar42 = uVar33;
            }
            if ((uVar42 != 1) || (((uint)uStack_770 & 0xff8) != 8)) goto LAB_109a51dc4;
            uVar23 = 1;
            goto LAB_109a51dc0;
          }
          if (uStack_738 != 0) {
            piVar16 = (int *)(uStack_738 + 0x14);
            do {
              cVar10 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar14) {
                *piVar16 = *piVar16 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          if (uStack_6d8 != 0) {
            piVar16 = (int *)(uStack_6d8 + 0x14);
            do {
              iVar26 = *piVar16;
              cVar10 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar14) {
                *piVar16 = iVar26 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar26 + -1 == 0) {
              func_0x000109a848d4(&uStack_710);
            }
          }
          uStack_6d8 = 0;
          uStack_6f8 = 0;
          uStack_700 = 0;
          uStack_6e8 = 0;
          uStack_6f0 = 0;
          if (uStack_710._4_4_ < 1) {
            uStack_710._0_4_ = (uint)uStack_770;
            if (2 < uStack_770._4_4_) goto LAB_109a511f4;
          }
          else {
            lVar37 = 0;
            do {
              *(undefined4 *)((long)puStack_6d0 + lVar37 * 4) = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 < uStack_710._4_4_);
            uStack_710._0_4_ = (uint)uStack_770;
            if (2 < uStack_710._4_4_ || 2 < uStack_770._4_4_) {
LAB_109a511f4:
              uStack_710 = CONCAT44(uStack_710._4_4_,(uint)uStack_770);
              func_0x000109a84868(&uStack_710,&uStack_770);
              goto LAB_109a51a64;
            }
          }
LAB_109a51a40:
          uStack_710 = CONCAT44(uStack_770._4_4_,(uint)uStack_710);
          uStack_708 = uStack_768;
          *puStack_6c8 = *puStack_728;
          puStack_6c8[1] = puStack_728[1];
        }
        else {
          puVar55 = (undefined8 *)((long)puVar59 + lVar37);
          lVar1 = 0;
          if (!bVar14) {
            lVar1 = lVar37;
          }
          lVar1 = (long)puVar55 + lVar37 + lVar1;
          puVar52 = puVar55;
          puVar12 = puVar59;
          if (!bVar14) {
            puVar52 = (undefined8 *)((long)puVar55 + lVar37);
            puVar12 = puVar55;
          }
          pcVar29 = (code *)(&PTR_FUN_110b21ba0)[lVar32];
          if (((uVar33 == 0) || ((param_3 & 1) == 0)) || (uStack_708._4_4_ < 2)) {
            dVar66 = 1.0;
            if ((param_3 >> 1 & 1) != 0) {
              dVar66 = 1.0 / (double)(int)(uVar54 * uVar27);
            }
            if (uVar33 != 0) {
              uStack_7ac = (int)(uVar54 + 1) / 2;
              if ((param_3 & 1) != 0) {
                bVar14 = false;
                uStack_814 = 1;
                goto LAB_109a50e08;
              }
              _bzero(puVar59,lVar37);
              func_0x000109a52e9c(uStack_798,uStack_6c0,puVar59,uVar61,uVar50,uVar36);
              uStack_798 = uStack_798 + (uVar34 + uVar34 * ((uint)uStack_770 >> 3 & 0x1ff));
              if ((uVar54 & 1) == 0) {
                _bzero(puVar55,lVar37);
                func_0x000109a52e9c(uStack_798 + ((long)(int)uVar54 + -2) * uVar36,uStack_6c0,
                                    puVar55,uVar61,uVar50,uVar36);
                bVar14 = false;
                uStack_814 = 1;
                goto LAB_109a513d4;
              }
              bVar14 = false;
              bVar15 = false;
              uStack_814 = 1;
              goto LAB_109a514a0;
            }
            bVar14 = false;
            iVar26 = 0;
            uStack_814 = 1;
          }
          else {
            uStack_814 = 0;
            uStack_7ac = (int)(uVar54 + 1) / 2;
            bVar14 = true;
            dVar66 = 1.0;
LAB_109a50e08:
            bVar15 = (uVar54 & 1) == 0;
            if ((uStack_710 & 0xff8) == 0) {
              func_0x000109a52e9c(uStack_700,uStack_6c0,puVar59,uVar36,uVar50,uVar36);
              func_0x000109a52f50(puVar59,uVar50,uVar36);
              if (bVar15) {
                func_0x000109a52e9c(uStack_798 + ((long)(int)uVar54 + -1) * uVar36,uStack_6c0,
                                    puVar55,uVar36,uVar50,uVar36);
                func_0x000109a52f50(puVar55,uVar50,uVar36);
                uStack_798 = uStack_798 + uVar36;
                goto LAB_109a513d4;
              }
              uStack_798 = uStack_798 + uVar36;
            }
            else {
              func_0x000109a52e9c(uStack_700,uStack_6c0,puVar59,uVar61,uVar50,uVar61);
              if (bVar15) {
                func_0x000109a52e9c(uStack_798 + (long)(int)uVar8 * (long)(int)uStack_7ac,uStack_6c0
                                    ,puVar55,uVar61,uVar50,uVar61);
                uStack_798 = uStack_798 + uVar61;
LAB_109a513d4:
                (*pcVar29)(dVar66,puVar55,puVar52,uVar50,uVar57,auStack_650,piVar16,piVar13,uVar50,0
                           ,lVar1,uVar2);
                bVar15 = true;
              }
              else {
                uStack_798 = uStack_798 + uVar61;
              }
            }
LAB_109a514a0:
            (*pcVar29)(dVar66,puVar59,puVar12,uVar50,uVar57,auStack_650,piVar16,piVar13,uVar50,0,
                       lVar1,uVar2);
            if ((uStack_770 & 0xff8) == 0) {
              if ((param_3 & 1) == 0) {
                _memcpy((long)puVar12 + uVar36,puVar12,uVar36);
                func_0x000109a52e9c((long)puVar12 + uVar36,uVar36,uVar60,uStack_720,uVar50,uVar36);
                if (bVar15) {
                  _memcpy((long)puVar52 + uVar36,puVar52,uVar36);
                  puVar18 = (undefined8 *)((long)puVar52 + uVar36);
                  uVar38 = uVar36;
                  goto LAB_109a515ec;
                }
              }
              else {
                func_0x000109a52e9c(puVar12,uVar61,uVar60,uStack_720,uVar50,uVar36);
                puVar18 = puVar52;
                uVar38 = uVar61;
                if (bVar15) {
LAB_109a515ec:
                  func_0x000109a52e9c(puVar18,uVar38,uVar60 + ((long)(int)uVar54 + -1) * uVar36,
                                      uStack_720,uVar50,uVar36);
                }
              }
              iVar26 = 1;
              uVar60 = uVar60 + uVar36;
              uVar54 = uStack_7ac;
            }
            else {
              func_0x000109a52e9c(puVar12,uVar61,uVar60,uStack_720,uVar50,uVar61);
              if (bVar15) {
                func_0x000109a52e9c(puVar52,uVar61,uVar60 + (long)(int)uVar8 * (long)(int)uStack_7ac
                                    ,uStack_720,uVar50,uVar61);
              }
              iVar26 = 1;
              uVar60 = uVar60 + uVar61;
              uVar54 = uStack_7ac;
            }
          }
          if (iVar26 < (int)uVar54) {
            puVar18 = (undefined8 *)(uStack_798 + 0x10);
            puVar56 = (undefined8 *)(uStack_798 + 8);
            puVar20 = (undefined4 *)(uStack_798 + 4);
            puVar58 = (undefined8 *)(uVar60 + 0x10);
            puVar62 = (undefined8 *)(uVar60 + 8);
            puVar53 = (undefined4 *)(uVar60 + 4);
            do {
              if (iVar26 + 1 < (int)uVar54) {
                uVar38 = uStack_6c0 >> 2;
                if (uVar34 == 2) {
                  puVar39 = puVar20;
                  puVar46 = puVar59;
                  uVar31 = uVar50;
                  if (0 < (int)uVar27) {
                    do {
                      uVar7 = *puVar39;
                      *(undefined4 *)puVar46 = puVar39[-1];
                      *(undefined4 *)((long)puVar46 + lVar37) = uVar7;
                      uVar31 = uVar31 - 1;
                      puVar39 = puVar39 + uVar38;
                      puVar46 = (undefined8 *)((long)puVar46 + 4);
                    } while (uVar31 != 0);
                  }
                }
                else if (uVar34 == 4) {
                  if (0 < (int)uVar27) {
                    uVar31 = 0;
                    puVar45 = puVar56;
                    puVar46 = puVar59;
                    do {
                      *puVar46 = puVar45[-1];
                      *(undefined8 *)((long)puVar46 + lVar37) = *puVar45;
                      uVar31 = uVar31 + 2;
                      puVar46 = puVar46 + 1;
                      puVar45 = (undefined8 *)((long)puVar45 + uVar38 * 4);
                    } while (uVar31 < uVar27 << 1);
                  }
                }
                else if ((uVar34 == 8) && (0 < (int)uVar27)) {
                  uVar31 = 0;
                  puVar45 = puVar59 + 1;
                  puVar49 = (undefined8 *)((long)(puVar59 + 1) + lVar37);
                  puVar46 = puVar18;
                  do {
                    puVar45[-1] = puVar46[-2];
                    *puVar45 = puVar46[-1];
                    puVar49[-1] = *puVar46;
                    uVar31 = uVar31 + 4;
                    *puVar49 = puVar46[1];
                    puVar46 = (undefined8 *)((long)puVar46 + uVar38 * 4);
                    puVar45 = puVar45 + 2;
                    puVar49 = puVar49 + 2;
                  } while (uVar31 < uVar27 << 2);
                }
                (*pcVar29)(dVar66,puVar55,puVar52,uVar50,uVar57,auStack_650,piVar16,piVar13,uVar50,0
                           ,lVar1,uVar2);
              }
              else {
                func_0x000109a52e9c(uStack_798,uStack_6c0,puVar59,uVar61,uVar50,uVar61);
              }
              (*pcVar29)(dVar66,puVar59,puVar12,uVar50,uVar57,auStack_650,piVar16,piVar13,uVar50,0,
                         lVar1,uVar2);
              if (iVar26 + 1 < (int)uVar54) {
                uVar38 = uStack_720 >> 2;
                if (uVar34 == 2) {
                  puVar39 = puVar53;
                  puVar46 = puVar12;
                  puVar45 = puVar52;
                  uVar31 = uVar50;
                  if (0 < (int)uVar27) {
                    do {
                      uVar7 = *(undefined4 *)puVar45;
                      puVar39[-1] = *(undefined4 *)puVar46;
                      *puVar39 = uVar7;
                      uVar31 = uVar31 - 1;
                      puVar39 = puVar39 + uVar38;
                      puVar46 = (undefined8 *)((long)puVar46 + 4);
                      puVar45 = (undefined8 *)((long)puVar45 + 4);
                    } while (uVar31 != 0);
                  }
                }
                else if (uVar34 == 4) {
                  if (0 < (int)uVar27) {
                    uVar31 = 0;
                    puVar46 = puVar62;
                    puVar45 = puVar12;
                    puVar49 = puVar52;
                    do {
                      puVar46[-1] = *puVar45;
                      *puVar46 = *puVar49;
                      uVar31 = uVar31 + 2;
                      puVar46 = (undefined8 *)((long)puVar46 + uVar38 * 4);
                      puVar45 = puVar45 + 1;
                      puVar49 = puVar49 + 1;
                    } while (uVar31 < uVar27 << 1);
                  }
                }
                else if ((uVar34 == 8) && (0 < (int)uVar27)) {
                  uVar31 = 0;
                  puVar45 = puVar12 + 1;
                  puVar49 = puVar52 + 1;
                  puVar46 = puVar58;
                  do {
                    puVar46[-2] = puVar45[-1];
                    puVar46[-1] = *puVar45;
                    *puVar46 = puVar49[-1];
                    uVar31 = uVar31 + 4;
                    puVar46[1] = *puVar49;
                    puVar46 = (undefined8 *)((long)puVar46 + uVar38 * 4);
                    puVar45 = puVar45 + 2;
                    puVar49 = puVar49 + 2;
                  } while (uVar31 < uVar27 << 2);
                }
              }
              else {
                func_0x000109a52e9c(puVar12,uVar61,uVar60,uStack_720,uVar50,uVar61);
              }
              uStack_798 = uStack_798 + uVar28;
              uVar60 = uVar60 + uVar28;
              iVar26 = iVar26 + 2;
              puVar18 = (undefined8 *)((long)puVar18 + uVar28);
              puVar56 = (undefined8 *)((long)puVar56 + uVar28);
              puVar20 = (undefined4 *)((long)puVar20 + uVar28);
              puVar58 = (undefined8 *)((long)puVar58 + uVar28);
              puVar62 = (undefined8 *)((long)puVar62 + uVar28);
              puVar53 = (undefined4 *)((long)puVar53 + uVar28);
            } while (iVar26 < (int)uVar54);
          }
          if (!bVar14) goto LAB_109a51d4c;
          if (uStack_738 != 0) {
            piVar16 = (int *)(uStack_738 + 0x14);
            do {
              cVar10 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar14) {
                *piVar16 = *piVar16 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          if (uStack_6d8 != 0) {
            piVar16 = (int *)(uStack_6d8 + 0x14);
            do {
              iVar26 = *piVar16;
              cVar10 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar14) {
                *piVar16 = iVar26 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar26 + -1 == 0) {
              func_0x000109a848d4(&uStack_710);
            }
          }
          uStack_6d8 = 0;
          uStack_6f8 = 0;
          uStack_700 = 0;
          uStack_6e8 = 0;
          uStack_6f0 = 0;
          if (uStack_710._4_4_ < 1) {
            uStack_710._0_4_ = (uint)uStack_770;
            if (uStack_770._4_4_ < 3) goto LAB_109a51a40;
          }
          else {
            lVar37 = 0;
            do {
              *(undefined4 *)((long)puStack_6d0 + lVar37 * 4) = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 < uStack_710._4_4_);
            uStack_710._0_4_ = (uint)uStack_770;
            if (uStack_710._4_4_ < 3 && uStack_770._4_4_ < 3) goto LAB_109a51a40;
          }
          uStack_710 = CONCAT44(uStack_710._4_4_,(uint)uStack_770);
          func_0x000109a84868(&uStack_710,&uStack_770);
        }
LAB_109a51a64:
        uStack_6f8 = uStack_758;
        uStack_700 = uStack_760;
        uStack_6e8 = uStack_748;
        uStack_6f0 = uStack_750;
        uStack_6d8 = uStack_738;
        uStack_6e0 = uStack_740;
      } while( true );
    }
    puVar20 = (undefined4 *)0xc4;
    func_0x000107c2ae8c();
    *puVar20 = 1;
    uStack_128 = puVar20 + 1;
    aiStack_120[0] = 0xbe;
    aiStack_120[1] = 0;
    *(undefined8 *)(puVar20 + 0x23) = 0x7375206e6f697461;
    *(undefined8 *)(puVar20 + 0x21) = 0x6c6572726f632f6e;
    *(undefined8 *)(puVar20 + 0x27) = 0x697274616d206e6d;
    *(undefined8 *)(puVar20 + 0x25) = 0x756c6f632d322065;
    *(undefined8 *)(puVar20 + 0x2b) = 0x20776f722d656c67;
    *(undefined8 *)(puVar20 + 0x29) = 0x6e697320726f2078;
    *(undefined8 *)((long)puVar20 + 0xba) = 0x64616574736e6920;
    *(undefined8 *)((long)puVar20 + 0xb2) = 0x78697274616d2077;
    *(undefined8 *)(puVar20 + 0x13) = 0x73276e6f6974636e;
    *(undefined8 *)(puVar20 + 0x11) = 0x7566206568742073;
    *(undefined8 *)(puVar20 + 0x17) = 0x7369207469206f73;
    *(undefined8 *)(puVar20 + 0x15) = 0x202c6369676f6c20;
    *(undefined8 *)(puVar20 + 0x1b) = 0x726f460a2e646574;
    *(undefined8 *)(puVar20 + 0x19) = 0x696269686f727020;
    *(undefined8 *)(puVar20 + 0x1f) = 0x6f6974756c6f766e;
    *(undefined8 *)(puVar20 + 0x1d) = 0x6f63207473616620;
    *(undefined8 *)(puVar20 + 3) = 0x676e697375282065;
    *(undefined8 *)(puVar20 + 1) = 0x646f6d2073696854;
    *(undefined8 *)(puVar20 + 7) = 0x69772073776f725f;
    *(undefined8 *)(puVar20 + 5) = 0x6f72657a6e6f6e20;
    *(undefined8 *)(puVar20 + 0xb) = 0x756c6f632d656c67;
    *(undefined8 *)(puVar20 + 9) = 0x6e69732061206874;
    *(undefined1 *)((long)puVar20 + 0xc2) = 0;
    *(undefined8 *)(puVar20 + 0xf) = 0x6b61657262202978;
    *(undefined8 *)(puVar20 + 0xd) = 0x697274616d206e6d;
    FUN_109ac3188(0xffffff2b,&uStack_128,&UNK_10f596b31,&UNK_10f596b35,0xa0e);
    goto LAB_109a520ac;
  }
  goto LAB_109a5203c;
LAB_109a51d4c:
  uVar42 = 0;
  if ((param_3 & 1) == 0) {
    uVar42 = uVar33;
  }
  if (((uVar42 == 1) && (1 < (int)uVar27)) && (((uint)uStack_770 & 0xff8) == 8)) {
    uVar23 = 2;
    uStack_808 = uVar50;
LAB_109a51dc0:
    func_0x000109a52d30(&uStack_770,uStack_808,uVar23);
  }
LAB_109a51dc4:
  if (uStack_738 != 0) {
    piVar16 = (int *)(uStack_738 + 0x14);
    do {
      iVar26 = *piVar16;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar14) {
        *piVar16 = iVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar26 + -1 == 0) {
      func_0x000109a848d4(&uStack_770);
    }
  }
  uStack_738 = 0;
  uStack_758 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  uStack_750 = 0;
  if (0 < uStack_770._4_4_) {
    lVar32 = 0;
    do {
      *(undefined4 *)(uStack_730 + lVar32 * 4) = 0;
      lVar32 = lVar32 + 1;
    } while (lVar32 < uStack_770._4_4_);
  }
  if (puStack_728 != &uStack_720 && puStack_728 != (ulong *)0x0) {
    _free(puStack_728[-1]);
  }
  if (uStack_6d8 != 0) {
    piVar16 = (int *)(uStack_6d8 + 0x14);
    do {
      iVar26 = *piVar16;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar14) {
        *piVar16 = iVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar26 + -1 == 0) {
      func_0x000109a848d4(&uStack_710);
    }
  }
  uStack_6d8 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  if (0 < uStack_710._4_4_) {
    lVar32 = 0;
    do {
      *(undefined4 *)((long)puStack_6d0 + lVar32 * 4) = 0;
      lVar32 = lVar32 + 1;
    } while (lVar32 < uStack_710._4_4_);
  }
  if (puStack_6c8 != &uStack_6c0 && puStack_6c8 != (ulong *)0x0) {
    _free(puStack_6c8[-1]);
  }
  if (uStack_678 != 0) {
    piVar16 = (int *)(uStack_678 + 0x14);
    do {
      iVar26 = *piVar16;
      cVar10 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar14) {
        *piVar16 = iVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar26 + -1 == 0) {
      func_0x000109a848d4(&uStack_6b0);
    }
  }
  uStack_678 = 0;
  uStack_698 = 0;
  uStack_6a0 = 0;
  uStack_688 = 0;
  uStack_690 = 0;
  if (0 < uStack_6b0._4_4_) {
    lVar32 = 0;
    do {
      *(undefined4 *)(uStack_670 + lVar32 * 4) = 0;
      lVar32 = lVar32 + 1;
    } while (lVar32 < uStack_6b0._4_4_);
  }
  if (puStack_668 != &uStack_660 && puStack_668 != (ulong *)0x0) {
    _free(puStack_668[-1]);
  }
  if (piStack_5c8 != aiStack_5b8 && piStack_5c8 != (int *)0x0) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
LAB_109a5203c:
  puVar20 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *puVar20 = 1;
  uStack_128 = puVar20 + 1;
  aiStack_120[0] = 0x4c;
  aiStack_120[1] = 0;
  *(undefined8 *)(puVar20 + 7) = 0x335f5643203d3d20;
  *(undefined8 *)(puVar20 + 5) = 0x65707974207c7c20;
  *(undefined8 *)(puVar20 + 0xb) = 0x203d3d2065707974;
  *(undefined8 *)(puVar20 + 9) = 0x207c7c2032434632;
  *(undefined8 *)(puVar20 + 0xf) = 0x65707974207c7c20;
  *(undefined8 *)(puVar20 + 0xd) = 0x31434634365f5643;
  *(undefined8 *)(puVar20 + 0x12) = 0x32434634365f5643;
  *(undefined8 *)(puVar20 + 0x10) = 0x203d3d2065707974;
  *(undefined1 *)(puVar20 + 0x14) = 0;
  *(undefined8 *)(puVar20 + 3) = 0x31434632335f5643;
  *(undefined8 *)(puVar20 + 1) = 0x203d3d2065707974;
  FUN_109ac3188(0xffffff29,&uStack_128,&UNK_10f596b31,&UNK_10f596b35,0x9c8);
LAB_109a520ac:
                    /* WARNING: Does not return */
  pcVar29 = (code *)SoftwareBreakpoint(1,0x109a520b0);
  (*pcVar29)();
}



/* Entry: 109a52194; end: 109a521a7;  */

void FUN_109a52194(double param_1,float *param_2,float *param_3,uint param_4,uint param_5,
                  uint *param_6,int *param_7,undefined8 *param_8,ulong param_9,undefined4 param_10,
                  undefined4 param_11,undefined4 param_12,undefined4 param_13,uint param_14)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  float *pfVar16;
  long lVar17;
  float *pfVar18;
  ulong uVar19;
  float *pfVar20;
  float *pfVar21;
  undefined8 *puVar22;
  float *pfVar23;
  long lVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  ulong uVar29;
  uint uVar30;
  float *pfVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  int iVar41;
  int iVar42;
  long lVar43;
  undefined8 *puVar44;
  undefined8 uVar45;
  undefined8 *puVar46;
  int iVar47;
  ulong uVar48;
  ulong uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  ulong uStack_108;
  float *pfStack_e8;
  undefined8 *puStack_e0;
  float *pfStack_d8;
  float *pfStack_d0;
  long lStack_c8;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  
  _param_10 = (undefined8 *)CONCAT44(param_13,param_12);
  uVar30 = (uint)param_9;
  if (uVar30 == param_4) {
    uVar34 = 1;
  }
  else {
    uVar32 = 0;
    if (param_4 != 0) {
      uVar32 = (int)uVar30 / (int)param_4;
    }
    uVar6 = 2;
    if (uVar30 != param_4 * 2) {
      uVar6 = uVar32;
    }
    uVar34 = (ulong)uVar6;
  }
  uVar32 = (uint)uVar34;
  if (param_3 == param_2) {
    if ((param_14 >> 8 & 1) == 0) {
      if (*param_6 != param_6[(long)(int)param_5 + -1]) {
        puVar14 = (undefined4 *)0x20;
        func_0x000107c2ae8c();
        *puVar14 = 1;
        puStack_88 = puVar14 + 1;
        uStack_80 = 0x1b;
        *(undefined1 *)((long)puVar14 + 0x1f) = 0;
        *(undefined8 *)(puVar14 + 3) = 0x6166203d3d205d30;
        *(undefined8 *)(puVar14 + 1) = 0x5b73726f74636166;
        *(undefined8 *)((long)puVar14 + 0x17) = 0x5d312d666e5b7372;
        *(undefined8 *)((long)puVar14 + 0xf) = 0x6f74636166203d3d;
        FUN_109ac3188(0xffffff29,&puStack_88,&UNK_10f596cca,&UNK_10f596b35,0x266);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x109a54a40);
        (*pcVar9)();
      }
      if (param_5 == 1) {
        if (((param_4 & 3) == 0) && (0 < (int)param_4 >> 1)) {
          lVar43 = 0;
          lVar36 = (long)((ulong)param_4 << 0x20) >> 0x21;
          do {
            lVar35 = (long)*param_7;
            uVar45 = *(undefined8 *)(param_3 + lVar43 * 2 + 2);
            pfVar23 = param_3 + (long)((int)param_4 >> 1) * 2 + lVar35 * 2;
            *(undefined8 *)(param_3 + lVar43 * 2 + 2) = *(undefined8 *)pfVar23;
            *(undefined8 *)pfVar23 = uVar45;
            if (lVar43 < lVar35) {
              uVar45 = *(undefined8 *)(param_3 + lVar43 * 2);
              *(undefined8 *)(param_3 + lVar43 * 2) = *(undefined8 *)(param_3 + lVar35 * 2);
              *(undefined8 *)(param_3 + lVar35 * 2) = uVar45;
              uVar45 = *(undefined8 *)(param_3 + lVar36 * 2 + lVar43 * 2 + 2);
              *(undefined8 *)(param_3 + lVar36 * 2 + lVar43 * 2 + 2) = *(undefined8 *)(pfVar23 + 2);
              *(undefined8 *)(pfVar23 + 2) = uVar45;
            }
            lVar43 = lVar43 + 2;
            param_7 = (int *)((long)param_7 +
                             (-(ulong)((uVar32 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                             (ulong)(uVar32 << 1) << 2));
          } while (lVar43 < lVar36);
        }
      }
      else if (0 < (int)param_4) {
        uVar37 = 0;
        do {
          lVar43 = (long)*param_7;
          if ((long)uVar37 < lVar43) {
            uVar45 = *(undefined8 *)(param_3 + uVar37 * 2);
            *(undefined8 *)(param_3 + uVar37 * 2) = *(undefined8 *)(param_3 + lVar43 * 2);
            *(undefined8 *)(param_3 + lVar43 * 2) = uVar45;
          }
          uVar37 = uVar37 + 1;
          param_7 = (int *)((long)param_7 + (-(uVar34 >> 0x1f) & 0xfffffffc00000000 | uVar34 << 2));
        } while (param_4 != uVar37);
      }
    }
    if ((param_14 & 1) != 0) {
      if ((int)param_4 < 2) {
        uVar34 = 0;
      }
      else {
        uVar34 = 0;
        pfVar23 = param_3 + 3;
        do {
          pfVar23[-2] = -pfVar23[-2];
          *pfVar23 = -*pfVar23;
          uVar34 = uVar34 + 2;
          pfVar23 = pfVar23 + 4;
        } while (uVar34 <= param_4 - 2);
      }
      if ((int)uVar34 < (int)param_4) {
        param_3[(ulong)param_4 * 2 + -1] = -param_3[(ulong)param_4 * 2 + -1];
      }
    }
  }
  else if ((param_14 & 1) == 0) {
    if ((int)param_4 < 2) {
      uVar34 = 0;
    }
    else {
      uVar34 = 0;
      do {
        iVar42 = param_7[(int)uVar32];
        *(undefined8 *)(param_3 + uVar34 * 2) = *(undefined8 *)(param_2 + (long)*param_7 * 2);
        *(undefined8 *)(param_3 + uVar34 * 2 + 2) = *(undefined8 *)(param_2 + (long)iVar42 * 2);
        uVar34 = uVar34 + 2;
        param_7 = (int *)((long)param_7 +
                         (-(ulong)((uVar32 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                         (ulong)(uVar32 << 1) << 2));
      } while (uVar34 <= param_4 - 2);
    }
    if ((int)uVar34 < (int)param_4) {
      *(undefined8 *)(param_3 + (ulong)(param_4 - 1) * 2) =
           *(undefined8 *)(param_2 + (ulong)(param_4 - 1) * 2);
    }
  }
  else {
    if ((int)param_4 < 2) {
      uVar34 = 0;
    }
    else {
      uVar34 = 0;
      pfVar23 = param_3 + 2;
      do {
        iVar42 = param_7[(int)uVar32];
        fVar50 = (param_2 + (long)*param_7 * 2)[1];
        pfVar23[-2] = param_2[(long)*param_7 * 2];
        pfVar23[-1] = -fVar50;
        fVar50 = (param_2 + (long)iVar42 * 2)[1];
        *pfVar23 = param_2[(long)iVar42 * 2];
        pfVar23[1] = -fVar50;
        uVar34 = uVar34 + 2;
        pfVar23 = pfVar23 + 4;
        param_7 = (int *)((long)param_7 +
                         (-(ulong)((uVar32 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                         (ulong)(uVar32 << 1) << 2));
      } while (uVar34 <= param_4 - 2);
    }
    if ((int)uVar34 < (int)param_4) {
      fVar50 = param_2[(ulong)param_4 * 2 + -1];
      param_3[(uVar34 & 0xffffffff) * 2] = param_2[(ulong)param_4 * 2 + -2];
      (param_3 + (uVar34 & 0xffffffff) * 2)[1] = -fVar50;
    }
  }
  uVar32 = *param_6;
  if ((uVar32 & 1) != 0) {
    uVar34 = 1;
    uStack_108 = param_9;
    goto LAB_109a541fc;
  }
  if ((int)uVar32 < 4) {
LAB_109a53ebc:
    uVar34 = 1;
  }
  else {
    FUN_109ac28d8();
    uVar32 = *param_6;
    if ((int)uVar32 < 4) goto LAB_109a53ebc;
    uVar37 = 1;
    uVar19 = 4;
    do {
      uVar34 = uVar19;
      iVar41 = (int)param_9;
      iVar42 = iVar41 + 3;
      if (-1 < iVar41) {
        iVar42 = iVar41;
      }
      uVar6 = iVar42 >> 2;
      param_9 = (ulong)uVar6;
      if (0 < (int)param_4) {
        lVar35 = 0;
        iVar42 = (int)uVar37;
        uVar19 = -(uVar34 >> 0x1f) & 0xfffffff800000000 | uVar34 << 3;
        pfVar23 = param_3 + (long)iVar42 * 2;
        pfVar25 = param_3 + (long)iVar42 * 4;
        lVar36 = (long)param_3 +
                 (-(uVar37 >> 0x1f) & 0xfffffff800000000 | uVar37 << 3) + (long)iVar42 * 0x10;
        lVar43 = (-(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | param_9 << 1) + (long)(int)uVar6;
        pfVar31 = param_3;
        do {
          pfVar18 = param_3 + lVar35 * 2;
          pfVar12 = pfVar18 + (-(uVar37 >> 0x1f) & 0xfffffffe00000000 | uVar37 << 1) * 2;
          pfVar21 = pfVar12 + (long)iVar42 * 2;
          fVar55 = *pfVar12 + *pfVar21;
          fVar63 = pfVar12[1] + pfVar21[1];
          fVar51 = pfVar12[1] - pfVar21[1];
          fVar50 = *pfVar21 - *pfVar12;
          pfVar20 = pfVar18 + (long)iVar42 * 2;
          fVar61 = *pfVar18 + *pfVar20;
          fVar57 = pfVar18[1] + pfVar20[1];
          fVar52 = *pfVar18 - *pfVar20;
          fVar53 = pfVar18[1] - pfVar20[1];
          *pfVar18 = fVar55 + fVar61;
          pfVar18[1] = fVar63 + fVar57;
          *pfVar12 = fVar61 - fVar55;
          pfVar12[1] = fVar57 - fVar63;
          *pfVar20 = fVar51 + fVar52;
          pfVar20[1] = fVar50 + fVar53;
          *pfVar21 = fVar52 - fVar51;
          pfVar21[1] = fVar53 - fVar50;
          if (1 < iVar42) {
            lVar24 = 0;
            pfVar18 = (float *)((long)param_8 + (long)(int)uVar6 * 0x10 + 4);
            pfVar21 = (float *)((long)param_8 + lVar43 * 8 + 4);
            pfVar12 = (float *)((long)param_8 + (long)(int)uVar6 * 8 + 4);
            do {
              fVar50 = *(float *)((long)pfVar23 + lVar24 + 8);
              fVar51 = *(float *)((long)pfVar23 + lVar24 + 0xc);
              fVar63 = -(fVar51 * *pfVar18) + pfVar18[-1] * fVar50;
              fVar50 = pfVar18[-1] * fVar51 + *pfVar18 * fVar50;
              fVar51 = *(float *)((long)pfVar25 + lVar24 + 8);
              fVar52 = *(float *)((long)pfVar25 + lVar24 + 0xc);
              fVar57 = fVar52 * pfVar12[-1] + *pfVar12 * fVar51;
              fVar51 = -(fVar52 * *pfVar12) + pfVar12[-1] * fVar51;
              lVar17 = lVar36 + lVar24;
              fVar53 = *(float *)(lVar17 + 0xc) * pfVar21[-1] + *pfVar21 * *(float *)(lVar17 + 8);
              fVar52 = -(*(float *)(lVar17 + 0xc) * *pfVar21) + pfVar21[-1] * *(float *)(lVar17 + 8)
              ;
              fVar55 = fVar51 + fVar52;
              fVar61 = fVar57 + fVar53;
              fVar57 = fVar57 - fVar53;
              fVar52 = fVar52 - fVar51;
              fVar53 = *(float *)((long)pfVar31 + lVar24 + 8);
              fVar51 = *(float *)((long)pfVar31 + lVar24 + 0xc);
              fVar58 = fVar63 + fVar53;
              fVar60 = fVar50 + fVar51;
              fVar53 = fVar53 - fVar63;
              fVar51 = fVar51 - fVar50;
              *(float *)((long)pfVar31 + lVar24 + 8) = fVar58 + fVar55;
              *(float *)((long)pfVar31 + lVar24 + 0xc) = fVar60 + fVar61;
              *(float *)((long)pfVar25 + lVar24 + 8) = fVar58 - fVar55;
              *(float *)((long)pfVar25 + lVar24 + 0xc) = fVar60 - fVar61;
              *(float *)((long)pfVar23 + lVar24 + 8) = fVar53 + fVar57;
              *(float *)((long)pfVar23 + lVar24 + 0xc) = fVar52 + fVar51;
              lVar24 = lVar24 + 8;
              *(float *)(lVar17 + 8) = fVar53 - fVar57;
              *(float *)(lVar17 + 0xc) = fVar51 - fVar52;
              pfVar18 = (float *)((long)pfVar18 +
                                 (-(ulong)(uVar6 >> 0x1f) & 0xfffffff000000000 | param_9 << 4));
              pfVar12 = (float *)((long)pfVar12 +
                                 (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | param_9 << 3));
              pfVar21 = pfVar21 + lVar43 * 2;
            } while (uVar37 * 8 + -8 != lVar24);
          }
          lVar35 = lVar35 + (int)uVar34;
          pfVar31 = (float *)((long)pfVar31 + uVar19);
          pfVar23 = (float *)((long)pfVar23 + uVar19);
          pfVar25 = (float *)((long)pfVar25 + uVar19);
          lVar36 = lVar36 + uVar19;
        } while (lVar35 < (int)param_4);
      }
      uVar6 = (int)uVar34 * 4;
      uVar37 = uVar34;
      uVar19 = (ulong)uVar6;
    } while ((int)uVar6 <= (int)uVar32);
  }
  uStack_108 = param_9;
  if ((int)uVar34 < (int)uVar32) {
    uVar37 = uVar34;
    do {
      uVar33 = (uint)uVar37;
      uVar8 = uVar33 * 2;
      uVar34 = (ulong)uVar8;
      uVar6 = (int)param_9 / 2;
      param_9 = (ulong)uVar6;
      if (0 < (int)param_4) {
        lVar43 = 0;
        uVar19 = -(uVar37 >> 0x1f) & 0xfffffff800000000 | uVar37 << 3;
        pfVar23 = param_3;
        do {
          pfVar25 = param_3 + lVar43 * 2;
          pfVar31 = pfVar25 + (long)(int)uVar33 * 2;
          fVar50 = *pfVar25;
          fVar51 = pfVar25[1];
          fVar52 = *pfVar31;
          fVar53 = pfVar31[1];
          *pfVar25 = fVar50 + fVar52;
          pfVar25[1] = fVar51 + fVar53;
          *pfVar31 = fVar50 - fVar52;
          pfVar31[1] = fVar51 - fVar53;
          pfVar25 = (float *)((long)param_8 + (long)(int)uVar6 * 8 + 4);
          lVar36 = uVar37 - 1;
          pfVar31 = pfVar23;
          if (1 < (int)uVar33) {
            do {
              fVar50 = *(float *)((long)pfVar31 + uVar19 + 8);
              fVar51 = *(float *)((long)pfVar31 + uVar19 + 0xc);
              fVar53 = -(fVar51 * *pfVar25) + pfVar25[-1] * fVar50;
              fVar50 = fVar50 * *pfVar25 + pfVar25[-1] * fVar51;
              pfVar18 = pfVar31 + 2;
              fVar51 = *pfVar18;
              fVar52 = pfVar31[3];
              *pfVar18 = fVar51 + fVar53;
              pfVar31[3] = fVar52 + fVar50;
              *(float *)((long)pfVar31 + uVar19 + 8) = fVar51 - fVar53;
              *(float *)((long)pfVar31 + uVar19 + 0xc) = fVar52 - fVar50;
              lVar36 = lVar36 + -1;
              pfVar25 = (float *)((long)pfVar25 +
                                 (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | param_9 << 3));
              pfVar31 = pfVar18;
            } while (lVar36 != 0);
          }
          lVar43 = lVar43 + (int)uVar8;
          pfVar23 = (float *)((long)pfVar23 +
                             (-(ulong)((uVar33 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                             uVar34 << 3));
        } while (lVar43 < (int)param_4);
      }
      uVar37 = uVar34;
      uStack_108 = param_9;
    } while ((int)uVar8 < (int)uVar32);
  }
LAB_109a541fc:
  fVar50 = (float)param_1;
  uVar32 = (uVar32 ^ 0xffffffff) & 1;
  uVar37 = (ulong)uVar32;
  if ((int)uVar32 < (int)param_5) {
    lVar43 = (long)(int)param_4;
    pfVar23 = (float *)((long)param_8 + 4);
    pfVar25 = param_3 + 1;
    pfVar31 = (float *)((long)_param_10 + 4);
    do {
      uVar32 = param_6[uVar37];
      iVar42 = (int)uVar34;
      uVar6 = uVar32 * iVar42;
      uVar19 = (ulong)uVar6;
      uVar8 = 0;
      if (uVar32 != 0) {
        uVar8 = (int)uStack_108 / (int)uVar32;
      }
      uStack_108 = (ulong)uVar8;
      if (uVar32 == 3) {
        if (0 < (int)param_4) {
          lVar36 = 0;
          uVar38 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3;
          pfVar18 = param_3 + (long)iVar42 * 4;
          pfVar12 = param_3 + (long)iVar42 * 2;
          pfVar21 = param_3;
          do {
            pfVar20 = param_3 + lVar36 * 2;
            pfVar16 = pfVar20 + (long)iVar42 * 2;
            pfVar27 = pfVar20 + (-(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1) * 2;
            fVar63 = *pfVar16 + *pfVar27;
            fVar61 = pfVar16[1] + pfVar27[1];
            fVar53 = *pfVar20;
            fVar55 = pfVar20[1];
            fVar52 = (pfVar16[1] - pfVar27[1]) * 0.8660254;
            fVar51 = (*pfVar27 - *pfVar16) * 0.8660254;
            *pfVar20 = fVar63 + fVar53;
            pfVar20[1] = fVar61 + fVar55;
            fVar53 = fVar53 + fVar63 * -0.5;
            fVar55 = fVar55 + fVar61 * -0.5;
            *pfVar16 = fVar53 + fVar52;
            pfVar16[1] = fVar51 + fVar55;
            *pfVar27 = fVar53 - fVar52;
            pfVar27[1] = fVar55 - fVar51;
            if (1 < iVar42) {
              lVar35 = 0;
              pfVar16 = pfVar23 + (long)(int)uVar8 * 4;
              pfVar20 = pfVar23 + (long)(int)uVar8 * 2;
              do {
                fVar51 = *(float *)((long)pfVar12 + lVar35 + 8);
                fVar52 = *(float *)((long)pfVar12 + lVar35 + 0xc);
                fVar53 = -(fVar52 * *pfVar20) + pfVar20[-1] * fVar51;
                fVar55 = *(float *)((long)pfVar18 + lVar35 + 8);
                fVar63 = *(float *)((long)pfVar18 + lVar35 + 0xc);
                fVar51 = pfVar20[-1] * fVar52 + *pfVar20 * fVar51;
                fVar52 = -(fVar63 * *pfVar16) + pfVar16[-1] * fVar55;
                fVar55 = pfVar16[-1] * fVar63 + *pfVar16 * fVar55;
                fVar57 = fVar53 + fVar52;
                fVar58 = fVar51 + fVar55;
                fVar51 = (fVar51 - fVar55) * 0.8660254;
                fVar55 = *(float *)((long)pfVar21 + lVar35 + 8);
                fVar63 = *(float *)((long)pfVar21 + lVar35 + 0xc);
                fVar52 = (fVar52 - fVar53) * 0.8660254;
                fVar53 = fVar55 + fVar57 * -0.5;
                fVar61 = fVar63 + fVar58 * -0.5;
                *(float *)((long)pfVar21 + lVar35 + 8) = fVar55 + fVar57;
                *(float *)((long)pfVar21 + lVar35 + 0xc) = fVar63 + fVar58;
                *(float *)((long)pfVar12 + lVar35 + 8) = fVar51 + fVar53;
                *(float *)((long)pfVar12 + lVar35 + 0xc) = fVar61 + fVar52;
                *(float *)((long)pfVar18 + lVar35 + 8) = fVar53 - fVar51;
                *(float *)((long)pfVar18 + lVar35 + 0xc) = fVar61 - fVar52;
                lVar35 = lVar35 + 8;
                pfVar20 = (float *)((long)pfVar20 +
                                   (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uStack_108 << 3))
                ;
                pfVar16 = (float *)((long)pfVar16 +
                                   (-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | uStack_108 << 4))
                ;
              } while (uVar34 * 8 + -8 != lVar35);
            }
            lVar36 = lVar36 + (int)uVar6;
            pfVar21 = (float *)((long)pfVar21 + uVar38);
            pfVar18 = (float *)((long)pfVar18 + uVar38);
            pfVar12 = (float *)((long)pfVar12 + uVar38);
          } while (lVar36 < lVar43);
        }
      }
      else if (uVar32 == 5) {
        if (0 < (int)param_4) {
          lVar35 = 0;
          iVar41 = iVar42 << 1;
          uVar38 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3;
          pfVar18 = pfVar25 + (long)iVar42 * 2;
          pfVar12 = pfVar25 + (long)iVar41 * 2;
          lVar36 = (long)pfVar25 +
                   (-(uVar34 >> 0x1f) & 0xfffffff800000000 | uVar34 << 3) + (long)iVar41 * 8;
          pfVar21 = pfVar25 + (long)iVar41 * 4;
          pfVar20 = pfVar25;
          do {
            if (0 < iVar42) {
              lVar24 = 0;
              pfVar26 = pfVar23;
              pfVar28 = pfVar23;
              pfVar27 = pfVar23;
              pfVar16 = pfVar23;
              do {
                pfVar1 = (float *)((long)pfVar20 + lVar24);
                pfVar2 = (float *)((long)pfVar12 + lVar24);
                pfVar3 = (float *)((long)pfVar21 + lVar24);
                pfVar4 = (float *)((long)pfVar18 + lVar24);
                fVar57 = -(*pfVar4 * *pfVar16) + pfVar16[-1] * pfVar4[-1];
                fVar51 = pfVar16[-1] * *pfVar4 + *pfVar16 * pfVar4[-1];
                fVar53 = -(*pfVar3 * *pfVar27) + pfVar27[-1] * pfVar3[-1];
                fVar52 = pfVar27[-1] * *pfVar3 + *pfVar27 * pfVar3[-1];
                fVar55 = fVar57 + fVar53;
                pfVar5 = (float *)(lVar36 + lVar24);
                fVar58 = fVar51 + fVar52;
                fVar64 = -(*pfVar5 * *pfVar28) + pfVar28[-1] * pfVar5[-1];
                fVar57 = fVar57 - fVar53;
                fVar53 = pfVar28[-1] * *pfVar5 + *pfVar28 * pfVar5[-1];
                fVar51 = fVar51 - fVar52;
                fVar63 = -(*pfVar2 * *pfVar26) + pfVar26[-1] * pfVar2[-1];
                fVar52 = pfVar26[-1] * *pfVar2 + *pfVar26 * pfVar2[-1];
                fVar60 = fVar64 + fVar63;
                fVar62 = fVar53 + fVar52;
                fVar64 = fVar64 - fVar63;
                fVar53 = fVar53 - fVar52;
                fVar65 = fVar55 + fVar60;
                fVar66 = fVar58 + fVar62;
                fVar63 = pfVar1[-1] + fVar65 * -0.25;
                fVar61 = *pfVar1 + fVar66 * -0.25;
                fVar55 = (fVar55 - fVar60) * 0.559017;
                fVar58 = (fVar58 - fVar62) * 0.559017;
                fVar52 = (fVar51 + fVar53) * 0.95105654;
                fVar60 = (fVar57 + fVar64) * -0.95105654;
                pfVar1[-1] = pfVar1[-1] + fVar65;
                *pfVar1 = *pfVar1 + fVar66;
                fVar51 = fVar52 - fVar51 * 0.36327127;
                fVar57 = fVar57 * 0.36327127 + fVar60;
                fVar52 = fVar52 - fVar53 * 1.5388417;
                fVar60 = fVar64 * 1.5388417 + fVar60;
                fVar53 = fVar63 + fVar55;
                fVar62 = fVar61 + fVar58;
                fVar63 = fVar63 - fVar55;
                fVar61 = fVar61 - fVar58;
                pfVar4[-1] = fVar52 + fVar53;
                *pfVar4 = fVar62 + fVar60;
                pfVar3[-1] = fVar53 - fVar52;
                *pfVar3 = fVar62 - fVar60;
                lVar24 = lVar24 + 8;
                pfVar16 = (float *)((long)pfVar16 +
                                   (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uStack_108 << 3))
                ;
                pfVar2[-1] = fVar51 + fVar63;
                *pfVar2 = fVar61 + fVar57;
                pfVar5[-1] = fVar63 - fVar51;
                *pfVar5 = fVar61 - fVar57;
                pfVar27 = (float *)((long)pfVar27 +
                                   (-(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 | uStack_108 << 5))
                ;
                pfVar28 = pfVar28 + ((-(ulong)(uVar8 >> 0x1f) & 0xfffffffe00000000 | uStack_108 << 1
                                     ) + (long)(int)uVar8) * 2;
                pfVar26 = (float *)((long)pfVar26 +
                                   (-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | uStack_108 << 4))
                ;
              } while (uVar34 << 3 != lVar24);
            }
            lVar35 = lVar35 + (int)uVar6;
            pfVar20 = (float *)((long)pfVar20 + uVar38);
            pfVar18 = (float *)((long)pfVar18 + uVar38);
            pfVar12 = (float *)((long)pfVar12 + uVar38);
            lVar36 = lVar36 + uVar38;
            pfVar21 = (float *)((long)pfVar21 + uVar38);
          } while (lVar35 < lVar43);
        }
      }
      else if (0 < (int)param_4) {
        iVar41 = uVar32 - 1;
        lVar36 = (long)((ulong)(uint)(iVar41 - (iVar41 >> 0x1f)) << 0x20) >> 0x21;
        uVar33 = iVar41 / 2;
        if ((int)uVar33 < 2) {
          uVar33 = 1;
        }
        uVar38 = (ulong)uVar33;
        uVar48 = -(uVar34 >> 0x1f) & 0xfffffff800000000 | uVar34 << 3;
        uVar39 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3;
        lVar35 = uVar39 + (long)iVar42 * -8;
        pfStack_d0 = (float *)((long)pfVar25 + lVar35);
        pfStack_d8 = pfVar25 + (long)iVar42 * 2;
        iVar41 = 0;
        if (uVar32 != 0) {
          iVar41 = (int)uVar30 / (int)uVar32;
        }
        lStack_c8 = 0;
        uVar40 = -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uStack_108 << 3;
        puStack_e0 = (undefined8 *)((long)param_3 + lVar35);
        pfStack_e8 = param_3 + (long)iVar42 * 2;
        do {
          if (0 < iVar42) {
            lVar35 = 0;
            lVar24 = 0;
            uVar49 = 0;
            puVar22 = param_8;
            puVar44 = puStack_e0;
            puVar46 = param_8;
            pfVar21 = pfStack_e8;
            pfVar12 = pfStack_d0;
            pfVar18 = pfStack_d8;
            do {
              pfVar20 = param_3 + lStack_c8 * 2 + uVar49 * 2;
              uVar54 = *(undefined8 *)pfVar20;
              uVar45 = uVar54;
              if (uVar49 == 0) {
                puVar13 = puVar44;
                pfVar16 = pfVar31 + lVar36 * 2;
                pfVar27 = pfVar21;
                uVar29 = uVar38;
                pfVar28 = pfVar31;
                if (2 < (int)uVar32) {
                  do {
                    fVar51 = (float)*(undefined8 *)pfVar27;
                    fVar63 = (float)*puVar13;
                    fVar53 = (float)((ulong)*(undefined8 *)pfVar27 >> 0x20);
                    fVar61 = (float)((ulong)*puVar13 >> 0x20);
                    fVar52 = fVar51 + fVar63;
                    fVar55 = fVar53 + fVar61;
                    uVar45 = CONCAT44((float)((ulong)uVar45 >> 0x20) + fVar55,(float)uVar45 + fVar52
                                     );
                    *(ulong *)(pfVar28 + -1) = CONCAT44(fVar53 - fVar61,fVar52);
                    *(ulong *)(pfVar16 + -1) = CONCAT44(fVar55,fVar51 - fVar63);
                    uVar29 = uVar29 - 1;
                    puVar13 = puVar13 + -(long)iVar42;
                    pfVar16 = pfVar16 + 2;
                    pfVar27 = (float *)((long)pfVar27 + uVar48);
                    pfVar28 = pfVar28 + 2;
                  } while (uVar29 != 0);
                  goto LAB_109a547f0;
                }
              }
              else {
                puVar13 = puVar22;
                puVar15 = puVar46;
                pfVar16 = pfVar31;
                pfVar27 = pfVar31 + lVar36 * 2;
                pfVar28 = pfVar18;
                pfVar26 = pfVar12;
                uVar29 = uVar38;
                if (2 < (int)uVar32) {
                  do {
                    fVar51 = (float)*puVar15;
                    fVar52 = (float)((ulong)*puVar15 >> 0x20);
                    uVar56 = NEON_rev64(CONCAT44(fVar52 * -*pfVar28,fVar51 * *pfVar28),4);
                    fVar53 = (float)uVar56 + fVar51 * pfVar28[-1];
                    fVar55 = (float)((ulong)uVar56 >> 0x20) + fVar52 * pfVar28[-1];
                    fVar51 = (float)*puVar13;
                    fVar52 = (float)((ulong)*puVar13 >> 0x20);
                    uVar56 = NEON_rev64(CONCAT44(fVar52 * -*pfVar26,fVar51 * *pfVar26),4);
                    fVar63 = (float)uVar56 + fVar51 * pfVar26[-1];
                    fVar61 = (float)((ulong)uVar56 >> 0x20) + fVar52 * pfVar26[-1];
                    fVar51 = fVar53 + fVar63;
                    fVar52 = fVar55 + fVar61;
                    *pfVar16 = fVar55 - fVar61;
                    pfVar16[-1] = fVar51;
                    pfVar27[-1] = fVar53 - fVar63;
                    *pfVar27 = fVar52;
                    uVar45 = CONCAT44((float)((ulong)uVar45 >> 0x20) + fVar52,(float)uVar45 + fVar51
                                     );
                    uVar29 = uVar29 - 1;
                    puVar13 = (undefined8 *)((long)puVar13 + lVar24);
                    puVar15 = (undefined8 *)((long)puVar15 + lVar35);
                    pfVar16 = pfVar16 + 2;
                    pfVar27 = pfVar27 + 2;
                    pfVar28 = (float *)((long)pfVar28 + uVar48);
                    pfVar26 = pfVar26 + (long)iVar42 * -2;
                  } while (uVar29 != 0);
LAB_109a547f0:
                  *(undefined8 *)pfVar20 = uVar45;
                  uVar11 = 1;
                  lVar17 = (long)iVar42;
                  do {
                    puVar13 = _param_10;
                    uVar29 = uVar38;
                    uVar45 = uVar54;
                    uVar56 = uVar54;
                    iVar47 = uVar11 * iVar41;
                    do {
                      uVar59 = NEON_ext(*puVar13,puVar13[lVar36],4,1);
                      fVar51 = *(float *)(param_8 + iVar47);
                      fVar55 = *(float *)((long)(param_8 + iVar47) + 4);
                      fVar52 = (float)*puVar13 * fVar51;
                      fVar51 = (float)((ulong)puVar13[lVar36] >> 0x20) * fVar51;
                      fVar53 = (float)uVar59 * fVar55;
                      fVar55 = (float)((ulong)uVar59 >> 0x20) * fVar55;
                      uVar45 = CONCAT44((float)((ulong)uVar45 >> 0x20) + (fVar51 - fVar55),
                                        (float)uVar45 + fVar52 + fVar53);
                      uVar56 = CONCAT44((float)((ulong)uVar56 >> 0x20) + fVar51 + fVar55,
                                        (float)uVar56 + (fVar52 - fVar53));
                      iVar47 = iVar47 + uVar11 * iVar41;
                      uVar7 = 0;
                      if ((int)uVar30 <= iVar47) {
                        uVar7 = uVar30;
                      }
                      iVar47 = iVar47 - uVar7;
                      uVar29 = uVar29 - 1;
                      puVar13 = puVar13 + 1;
                    } while (uVar29 != 0);
                    *(undefined8 *)(pfVar20 + lVar17 * 2) = uVar56;
                    *(undefined8 *)(pfVar20 + ((int)uVar6 - lVar17) * 2) = uVar45;
                    lVar17 = lVar17 + iVar42;
                    bVar10 = uVar11 != uVar33;
                    uVar11 = uVar11 + 1;
                  } while (bVar10);
                }
              }
              uVar49 = uVar49 + 1;
              pfVar18 = pfVar18 + 2;
              pfVar12 = pfVar12 + 2;
              puVar22 = (undefined8 *)
                        ((long)puVar22 + ((long)(int)uVar32 * 8 + -8) * (long)(int)uVar8);
              lVar24 = lVar24 - uVar40;
              puVar46 = (undefined8 *)((long)puVar46 + uVar40);
              lVar35 = lVar35 + uVar40;
              pfVar21 = pfVar21 + 2;
              puVar44 = puVar44 + 1;
            } while (uVar49 != uVar34);
          }
          lStack_c8 = lStack_c8 + (int)uVar6;
          pfStack_d8 = (float *)((long)pfStack_d8 + uVar39);
          pfStack_d0 = (float *)((long)pfStack_d0 + uVar39);
          pfStack_e8 = (float *)((long)pfStack_e8 + uVar39);
          puStack_e0 = (undefined8 *)((long)puStack_e0 + uVar39);
        } while (lStack_c8 < lVar43);
      }
      uVar37 = uVar37 + 1;
      uVar34 = uVar19;
    } while (uVar37 != param_5);
  }
  if (fVar50 == 1.0) {
    if ((param_14 & 1) != 0) {
      if ((int)param_4 < 2) {
        uVar34 = 0;
      }
      else {
        uVar34 = 0;
        pfVar23 = param_3 + 3;
        do {
          pfVar23[-2] = -pfVar23[-2];
          *pfVar23 = -*pfVar23;
          uVar34 = uVar34 + 2;
          pfVar23 = pfVar23 + 4;
        } while (uVar34 <= param_4 - 2);
      }
      if ((int)uVar34 < (int)param_4) {
        param_3[(ulong)param_4 * 2 + -1] = -param_3[(ulong)param_4 * 2 + -1];
      }
    }
  }
  else if (0 < (int)param_4) {
    fVar51 = fVar50;
    if ((param_14 & 1) != 0) {
      fVar51 = -fVar50;
    }
    uVar34 = (ulong)param_4;
    do {
      *(ulong *)param_3 =
           CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar51,
                    (float)*(undefined8 *)param_3 * fVar50);
      uVar34 = uVar34 - 1;
      param_3 = param_3 + 2;
    } while (uVar34 != 0);
  }
  return;
}



/* Entry: 109a521a8; end: 109a5244b;  */

void FUN_109a521a8(double param_1,float *param_2,float *param_3,ulong param_4,undefined8 param_5,
                  int *param_6,int *param_7,long param_8,undefined8 param_9,undefined4 param_10,
                  undefined4 param_11,undefined8 param_12,uint param_13)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar4 = param_13 >> 9 & 1;
  fVar23 = (float)param_1;
  pfVar11 = param_3 + uVar4;
  iVar8 = (int)param_4;
  if (iVar8 == 1) {
    *pfVar11 = *param_2 * fVar23;
  }
  else if (iVar8 == 2) {
    fVar16 = *param_2;
    fVar17 = param_2[1];
    *pfVar11 = (fVar16 + fVar17) * fVar23;
    pfVar11[1] = (fVar16 - fVar17) * fVar23;
  }
  else {
    if ((param_4 & 1) != 0) {
      *param_3 = *param_2 * fVar23;
      param_3[1] = 0.0;
      if (1 < iVar8) {
        uVar13 = 1;
        pfVar11 = param_3 + 5;
        piVar6 = param_7;
        do {
          fVar16 = param_2[piVar6[2]];
          pfVar11[-3] = param_2[piVar6[1]] * fVar23;
          pfVar11[-2] = 0.0;
          pfVar11[-1] = fVar16 * fVar23;
          *pfVar11 = 0.0;
          uVar13 = uVar13 + 2;
          pfVar11 = pfVar11 + 4;
          piVar6 = piVar6 + 2;
        } while (uVar13 < (param_4 & 0xffffffff));
      }
      FUN_109a53bd0(0x3ff0000000000000,param_3,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,param_12,0x100);
      if ((param_13 & 0x200) == 0) {
        param_3[1] = *param_3;
        return;
      }
      bVar7 = false;
      goto LAB_109a52228;
    }
    iVar2 = iVar8 >> 1;
    iVar3 = *param_6;
    *param_6 = iVar3 >> 1;
    uVar9 = (uint)(iVar3 >> 1 == 1);
    FUN_109a53bd0(0x3ff0000000000000,param_2,pfVar11,iVar2,(int)param_5 - uVar9,param_6 + uVar9,
                  param_7,param_8,param_9,param_12,0);
    *param_6 = *param_6 << 1;
    fVar18 = (*pfVar11 - pfVar11[1]) * fVar23;
    *pfVar11 = (*pfVar11 + pfVar11[1]) * fVar23;
    pfVar11[1] = fVar18;
    pfVar1 = pfVar11 + iVar2;
    fVar16 = *pfVar1;
    fVar17 = pfVar11[(long)iVar8 + -1];
    pfVar11[(long)iVar8 + -1] = fVar18;
    if (iVar2 < 3) {
      lVar10 = 2;
    }
    else {
      fVar18 = fVar23 * 0.5;
      pfVar12 = (float *)(param_8 + 0xc);
      pfVar14 = param_3 + uVar4 + (long)iVar8 + -3;
      lVar10 = 2;
      pfVar5 = param_3 + uVar4;
      do {
        pfVar15 = pfVar5 + 2;
        fVar21 = fVar18 * (fVar17 + pfVar5[3]);
        fVar19 = pfVar5[3] - fVar17;
        fVar17 = *pfVar14;
        fVar22 = fVar18 * (pfVar14[1] - *pfVar15);
        fVar24 = -(fVar22 * *pfVar12) + pfVar12[-1] * fVar21;
        fVar20 = fVar18 * (pfVar14[1] + *pfVar15);
        fVar19 = fVar18 * fVar19;
        fVar21 = pfVar12[-1] * fVar22 + *pfVar12 * fVar21;
        pfVar5[1] = fVar20 + fVar24;
        *pfVar14 = fVar20 - fVar24;
        *pfVar15 = fVar19 + fVar21;
        lVar10 = lVar10 + 2;
        pfVar14[1] = fVar21 - fVar19;
        pfVar12 = pfVar12 + 2;
        pfVar14 = pfVar14 + -2;
        pfVar5 = pfVar15;
      } while (lVar10 < iVar2);
    }
    if ((int)lVar10 <= iVar2) {
      pfVar1[-1] = fVar16 * fVar23;
      *pfVar1 = -(fVar17 * fVar23);
    }
  }
  if ((param_13 & 0x200) == 0) {
    return;
  }
  bVar7 = (param_4 & 1) == 0;
  param_3 = pfVar11;
LAB_109a52228:
  if (((iVar8 == 1) || (bVar7)) && (*(ulong *)(param_3 + -1) = (ulong)(uint)*param_3, 1 < iVar8)) {
    param_3[param_4 & 0xffffffff] = 0.0;
  }
  return;
}



/* Entry: 109a5244c; end: 109a52763;  */

void FUN_109a5244c(double param_1,float *param_2,float *param_3,ulong param_4,undefined8 param_5,
                  int *param_6,int *param_7,long param_8)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  float *pfVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint in_stack_00000010;
  
  fVar24 = 0.0;
  if ((in_stack_00000010 >> 9 & 1) != 0) {
    fVar17 = *param_2;
    param_2 = param_2 + 1;
    fVar24 = *param_2;
    *param_2 = fVar17;
  }
  fVar17 = (float)param_1;
  iVar14 = (int)param_4;
  if (iVar14 == 2) {
    fVar15 = *param_2 + param_2[1];
    param_3[1] = (*param_2 - param_2[1]) * fVar17;
  }
  else {
    if (iVar14 != 1) {
      uVar5 = iVar14 + 1 >> 1;
      uVar4 = (ulong)uVar5;
      if ((param_4 & 1) == 0) {
        fVar18 = *param_2;
        fVar15 = param_2[1];
        fVar19 = param_2[(long)iVar14 + -1];
        *param_3 = fVar18 + fVar19;
        param_3[1] = fVar19 - fVar18;
        if ((int)uVar5 < 3) {
          uVar9 = 2;
        }
        else {
          lVar8 = (long)iVar14;
          pfVar6 = (float *)(param_8 + 0xc);
          piVar7 = param_7 + uVar5;
          pfVar11 = param_3 + 3;
          pfVar12 = param_2 + lVar8 + -3;
          pfVar13 = param_2 + 3;
          uVar9 = 2;
          piVar10 = param_7;
          do {
            lVar8 = lVar8 + -2;
            piVar10 = piVar10 + 1;
            piVar7 = piVar7 + -1;
            fVar18 = fVar15 + *pfVar12;
            fVar21 = fVar15 - *pfVar12;
            fVar15 = *pfVar13;
            fVar19 = pfVar13[-1] - pfVar12[1];
            fVar22 = pfVar13[-1] + pfVar12[1];
            fVar20 = fVar22 * *pfVar6 + pfVar6[-1] * fVar21;
            fVar21 = -(fVar21 * *pfVar6) + pfVar6[-1] * fVar22;
            fVar22 = fVar18 - fVar21;
            fVar23 = -fVar19 - fVar20;
            if (param_2 == param_3) {
              pfVar11[-1] = fVar22;
              *pfVar11 = fVar23;
              lVar3 = lVar8;
            }
            else {
              iVar2 = *piVar10;
              param_3[iVar2] = fVar22;
              (param_3 + iVar2)[1] = fVar23;
              lVar3 = (long)*piVar7;
            }
            pfVar6 = pfVar6 + 2;
            pfVar12 = pfVar12 + -2;
            pfVar13 = pfVar13 + 2;
            param_3[lVar3] = fVar18 + fVar21;
            (param_3 + 1)[lVar3] = fVar19 - fVar20;
            uVar9 = uVar9 + 2;
            pfVar11 = pfVar11 + 2;
          } while (uVar9 < uVar4);
        }
        if ((int)uVar9 <= (int)uVar5) {
          lVar8 = (long)(int)uVar5;
          fVar18 = param_2[(int)uVar5];
          if (param_2 != param_3) {
            lVar8 = (long)param_7[lVar8] << 1;
          }
          param_3[lVar8] = fVar15 + fVar15;
          (param_3 + lVar8)[1] = fVar18 + fVar18;
        }
        iVar2 = *param_6;
        *param_6 = iVar2 >> 1;
        uVar5 = (uint)(iVar2 >> 1 == 1);
        FUN_109a53bd0(0x3ff0000000000000,param_3,param_3,uVar4,(int)param_5 - uVar5,param_6 + uVar5)
        ;
        *param_6 = *param_6 << 1;
        if (0 < iVar14) {
          uVar4 = 0;
          do {
            *(ulong *)param_3 =
                 CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) * -fVar17,
                          (float)*(undefined8 *)param_3 * fVar17);
            uVar4 = uVar4 + 2;
            param_3 = param_3 + 2;
          } while (uVar4 < (param_4 & 0xffffffff));
        }
      }
      else {
        *(ulong *)param_3 = (ulong)(uint)*param_2;
        if (1 < (int)uVar5) {
          lVar8 = uVar4 - 1;
          piVar7 = param_7 + iVar14;
          pfVar6 = param_2 + 1;
          do {
            param_7 = param_7 + 1;
            piVar7 = piVar7 + -1;
            iVar2 = *param_7;
            iVar1 = *piVar7;
            uVar16 = *(undefined8 *)pfVar6;
            param_3[(long)iVar2 * 2] = (float)uVar16;
            (param_3 + (long)iVar2 * 2)[1] = -(float)((ulong)uVar16 >> 0x20);
            *(undefined8 *)(param_3 + (long)iVar1 * 2) = uVar16;
            lVar8 = lVar8 + -1;
            pfVar6 = pfVar6 + 2;
          } while (lVar8 != 0);
        }
        FUN_109a53bd0(0x3ff0000000000000,param_3,param_3,param_4,param_5,param_6);
        *param_3 = *param_3 * fVar17;
        if (1 < iVar14) {
          uVar4 = 1;
          pfVar6 = param_3;
          do {
            fVar15 = param_3[4];
            pfVar6[1] = param_3[2] * fVar17;
            pfVar6[2] = fVar15 * fVar17;
            uVar4 = uVar4 + 2;
            param_3 = param_3 + 4;
            pfVar6 = pfVar6 + 2;
          } while (uVar4 < (param_4 & 0xffffffff));
        }
      }
      goto LAB_109a524c8;
    }
    fVar15 = *param_2;
  }
  *param_3 = fVar15 * fVar17;
LAB_109a524c8:
  if ((in_stack_00000010 >> 9 & 1) != 0) {
    *param_2 = fVar24;
  }
  return;
}



/* Entry: 109a52764; end: 109a52777;  */

void FUN_109a52764(double param_1,double *param_2,double *param_3,uint param_4,uint param_5,
                  uint *param_6,int *param_7,double *param_8,ulong param_9,undefined4 param_10,
                  undefined4 param_11,undefined4 param_12,undefined4 param_13,uint param_14)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  bool bVar7;
  double *pdVar8;
  double *pdVar9;
  undefined4 *puVar10;
  uint uVar11;
  double *pdVar12;
  ulong uVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  long lVar18;
  double *pdVar19;
  double *pdVar20;
  undefined1 (*pauVar21) [16];
  double *pdVar22;
  double *pdVar23;
  ulong uVar24;
  uint uVar25;
  double *pdVar26;
  double *pdVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  int iVar37;
  int iVar38;
  double *pdVar39;
  long lVar40;
  double *pdVar41;
  int iVar42;
  double *pdVar43;
  long lVar44;
  ulong uVar45;
  ulong uVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  ulong uStack_100;
  double *pdStack_e0;
  double *pdStack_d8;
  double *pdStack_d0;
  double *pdStack_c8;
  long lStack_c0;
  undefined4 *puStack_78;
  undefined8 uStack_70;
  
  _param_10 = (undefined1 (*) [16])CONCAT44(param_13,param_12);
  uVar25 = (uint)param_9;
  if (uVar25 == param_4) {
    uVar30 = 1;
  }
  else {
    uVar28 = 0;
    if (param_4 != 0) {
      uVar28 = (int)uVar25 / (int)param_4;
    }
    uVar2 = 2;
    if (uVar25 != param_4 * 2) {
      uVar2 = uVar28;
    }
    uVar30 = (ulong)uVar2;
  }
  uVar28 = (uint)uVar30;
  if (param_3 == param_2) {
    if ((param_14 >> 8 & 1) == 0) {
      if (*param_6 != param_6[(long)(int)param_5 + -1]) {
        puVar10 = (undefined4 *)0x20;
        func_0x000107c2ae8c();
        *puVar10 = 1;
        puStack_78 = puVar10 + 1;
        uStack_70 = 0x1b;
        *(undefined1 *)((long)puVar10 + 0x1f) = 0;
        *(undefined8 *)(puVar10 + 3) = 0x6166203d3d205d30;
        *(undefined8 *)(puVar10 + 1) = 0x5b73726f74636166;
        *(undefined8 *)((long)puVar10 + 0x17) = 0x5d312d666e5b7372;
        *(undefined8 *)((long)puVar10 + 0xf) = 0x6f74636166203d3d;
        FUN_109ac3188(0xffffff29,&puStack_78,&UNK_10f596cca,&UNK_10f596b35,0x266);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x109a558e8);
        (*pcVar6)();
      }
      if (param_5 == 1) {
        if (((param_4 & 3) == 0) && (0 < (int)param_4 >> 1)) {
          lVar40 = 0;
          lVar32 = (long)((ulong)param_4 << 0x20) >> 0x21;
          pdVar17 = param_3 + 2;
          do {
            lVar31 = (long)*param_7;
            pdVar19 = param_3 + (long)((int)param_4 >> 1) * 2 + lVar31 * 2;
            dVar48 = pdVar17[1];
            dVar47 = *pdVar17;
            dVar49 = *pdVar19;
            pdVar17[1] = pdVar19[1];
            *pdVar17 = dVar49;
            pdVar19[1] = dVar48;
            *pdVar19 = dVar47;
            if (lVar40 < lVar31) {
              dVar48 = pdVar17[-1];
              dVar47 = pdVar17[-2];
              dVar49 = param_3[lVar31 * 2];
              pdVar17[-1] = (param_3 + lVar31 * 2)[1];
              pdVar17[-2] = dVar49;
              (param_3 + lVar31 * 2)[1] = dVar48;
              param_3[lVar31 * 2] = dVar47;
              dVar48 = (pdVar17 + lVar32 * 2)[1];
              dVar47 = pdVar17[lVar32 * 2];
              dVar49 = pdVar19[2];
              (pdVar17 + lVar32 * 2)[1] = pdVar19[3];
              pdVar17[lVar32 * 2] = dVar49;
              pdVar19[3] = dVar48;
              pdVar19[2] = dVar47;
            }
            lVar40 = lVar40 + 2;
            pdVar17 = pdVar17 + 4;
            param_7 = (int *)((long)param_7 +
                             (-(ulong)((uVar28 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                             (ulong)(uVar28 << 1) << 2));
          } while (lVar40 < lVar32);
        }
      }
      else if (0 < (int)param_4) {
        uVar33 = 0;
        pdVar17 = param_3;
        do {
          lVar40 = (long)*param_7;
          if ((long)uVar33 < lVar40) {
            dVar48 = pdVar17[1];
            dVar47 = *pdVar17;
            dVar49 = param_3[lVar40 * 2];
            pdVar17[1] = (param_3 + lVar40 * 2)[1];
            *pdVar17 = dVar49;
            (param_3 + lVar40 * 2)[1] = dVar48;
            param_3[lVar40 * 2] = dVar47;
          }
          uVar33 = uVar33 + 1;
          pdVar17 = pdVar17 + 2;
          param_7 = (int *)((long)param_7 + (-(uVar30 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2));
        } while (param_4 != uVar33);
      }
    }
    if ((param_14 & 1) != 0) {
      if ((int)param_4 < 2) {
        uVar30 = 0;
      }
      else {
        uVar30 = 0;
        pdVar17 = param_3 + 3;
        do {
          pdVar17[-2] = -pdVar17[-2];
          *pdVar17 = -*pdVar17;
          uVar30 = uVar30 + 2;
          pdVar17 = pdVar17 + 4;
        } while (uVar30 <= param_4 - 2);
      }
      if ((int)uVar30 < (int)param_4) {
        param_3[(ulong)param_4 * 2 + -1] = -param_3[(ulong)param_4 * 2 + -1];
      }
    }
  }
  else if ((param_14 & 1) == 0) {
    if ((int)param_4 < 2) {
      uVar30 = 0;
    }
    else {
      uVar30 = 0;
      pdVar17 = param_3 + 2;
      do {
        iVar38 = param_7[(int)uVar28];
        dVar47 = param_2[(long)*param_7 * 2];
        pdVar17[-1] = (param_2 + (long)*param_7 * 2)[1];
        pdVar17[-2] = dVar47;
        dVar47 = param_2[(long)iVar38 * 2];
        pdVar17[1] = (param_2 + (long)iVar38 * 2)[1];
        *pdVar17 = dVar47;
        uVar30 = uVar30 + 2;
        param_7 = (int *)((long)param_7 +
                         (-(ulong)((uVar28 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                         (ulong)(uVar28 << 1) << 2));
        pdVar17 = pdVar17 + 4;
      } while (uVar30 <= param_4 - 2);
    }
    if ((int)uVar30 < (int)param_4) {
      dVar47 = param_2[(ulong)(param_4 - 1) * 2];
      (param_3 + (ulong)(param_4 - 1) * 2)[1] = (param_2 + (ulong)(param_4 - 1) * 2)[1];
      param_3[(ulong)(param_4 - 1) * 2] = dVar47;
    }
  }
  else {
    if ((int)param_4 < 2) {
      uVar30 = 0;
    }
    else {
      uVar30 = 0;
      pdVar17 = param_3 + 2;
      do {
        iVar38 = param_7[(int)uVar28];
        dVar47 = (param_2 + (long)*param_7 * 2)[1];
        pdVar17[-2] = param_2[(long)*param_7 * 2];
        pdVar17[-1] = -dVar47;
        dVar47 = (param_2 + (long)iVar38 * 2)[1];
        *pdVar17 = param_2[(long)iVar38 * 2];
        pdVar17[1] = -dVar47;
        uVar30 = uVar30 + 2;
        param_7 = (int *)((long)param_7 +
                         (-(ulong)((uVar28 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                         (ulong)(uVar28 << 1) << 2));
        pdVar17 = pdVar17 + 4;
      } while (uVar30 <= param_4 - 2);
    }
    if ((int)uVar30 < (int)param_4) {
      dVar47 = param_2[(ulong)param_4 * 2 + -1];
      param_3[(uVar30 & 0xffffffff) * 2] = param_2[(ulong)param_4 * 2 + -2];
      (param_3 + (uVar30 & 0xffffffff) * 2)[1] = -dVar47;
    }
  }
  uVar28 = *param_6;
  if ((uVar28 & 1) == 0) {
    if ((int)uVar28 < 4) {
      uVar30 = 1;
    }
    else {
      FUN_109ac28d8();
      uVar28 = *param_6;
      if ((int)uVar28 < 4) {
        uVar30 = 1;
      }
      else {
        uVar33 = 1;
        uVar13 = 4;
        do {
          uVar30 = uVar13;
          iVar37 = (int)param_9;
          iVar38 = iVar37 + 3;
          if (-1 < iVar37) {
            iVar38 = iVar37;
          }
          uVar2 = iVar38 >> 2;
          param_9 = (ulong)uVar2;
          if (0 < (int)param_4) {
            lVar31 = 0;
            iVar38 = (int)uVar33;
            lVar18 = (long)iVar38;
            uVar13 = -(uVar30 >> 0x1f) & 0xfffffff000000000 | uVar30 << 4;
            pdVar17 = param_3 + (long)iVar38 * 2;
            pdVar19 = param_3 + lVar18 * 4;
            lVar32 = (long)param_3 +
                     (-(uVar33 >> 0x1f) & 0xffffffe000000000 | uVar33 << 5) + (long)iVar38 * 0x10;
            lVar40 = (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | param_9 << 1) +
                     (long)(int)uVar2;
            pdVar26 = param_3;
            do {
              pdVar8 = param_3 + lVar31 * 2;
              pdVar41 = pdVar8 + (-(uVar33 >> 0x1f) & 0xfffffffe00000000 | uVar33 << 1) * 2;
              pdVar15 = pdVar41 + lVar18 * 2;
              dVar58 = *pdVar41 + *pdVar15;
              dVar56 = pdVar41[1] + pdVar15[1];
              dVar48 = pdVar41[1] - pdVar15[1];
              dVar47 = *pdVar15 - *pdVar41;
              pdVar14 = pdVar8 + lVar18 * 2;
              dVar53 = *pdVar8 + *pdVar14;
              dVar54 = pdVar8[1] + pdVar14[1];
              dVar49 = *pdVar8 - *pdVar14;
              dVar50 = pdVar8[1] - pdVar14[1];
              *pdVar8 = dVar58 + dVar53;
              pdVar8[1] = dVar56 + dVar54;
              *pdVar41 = dVar53 - dVar58;
              pdVar41[1] = dVar54 - dVar56;
              *pdVar14 = dVar48 + dVar49;
              pdVar14[1] = dVar47 + dVar50;
              *pdVar15 = dVar49 - dVar48;
              pdVar15[1] = dVar50 - dVar47;
              if (1 < iVar38) {
                lVar44 = 0;
                pdVar8 = param_8 + (long)(int)uVar2 * 4 + 1;
                pdVar15 = param_8 + lVar40 * 2 + 1;
                pdVar41 = param_8 + (long)(int)uVar2 * 2 + 1;
                do {
                  dVar47 = *(double *)((long)pdVar17 + lVar44 + 0x10);
                  dVar48 = *(double *)((long)pdVar17 + lVar44 + 0x18);
                  dVar56 = -(dVar48 * *pdVar8) + pdVar8[-1] * dVar47;
                  dVar47 = pdVar8[-1] * dVar48 + *pdVar8 * dVar47;
                  dVar48 = *(double *)((long)pdVar19 + lVar44 + 0x10);
                  dVar49 = *(double *)((long)pdVar19 + lVar44 + 0x18);
                  dVar54 = dVar49 * pdVar41[-1] + *pdVar41 * dVar48;
                  dVar48 = -(dVar49 * *pdVar41) + pdVar41[-1] * dVar48;
                  lVar1 = lVar32 + lVar44;
                  dVar50 = *(double *)(lVar1 + 0x18) * pdVar15[-1] +
                           *pdVar15 * *(double *)(lVar1 + 0x10);
                  dVar49 = -(*(double *)(lVar1 + 0x18) * *pdVar15) +
                           pdVar15[-1] * *(double *)(lVar1 + 0x10);
                  dVar58 = dVar48 + dVar49;
                  dVar53 = dVar54 + dVar50;
                  dVar54 = dVar54 - dVar50;
                  dVar49 = dVar49 - dVar48;
                  dVar50 = *(double *)((long)pdVar26 + lVar44 + 0x10);
                  dVar48 = *(double *)((long)pdVar26 + lVar44 + 0x18);
                  dVar55 = dVar56 + dVar50;
                  dVar57 = dVar47 + dVar48;
                  dVar50 = dVar50 - dVar56;
                  dVar48 = dVar48 - dVar47;
                  *(double *)((long)pdVar26 + lVar44 + 0x10) = dVar55 + dVar58;
                  *(double *)((long)pdVar26 + lVar44 + 0x18) = dVar57 + dVar53;
                  *(double *)((long)pdVar19 + lVar44 + 0x10) = dVar55 - dVar58;
                  *(double *)((long)pdVar19 + lVar44 + 0x18) = dVar57 - dVar53;
                  *(double *)((long)pdVar17 + lVar44 + 0x10) = dVar50 + dVar54;
                  *(double *)((long)pdVar17 + lVar44 + 0x18) = dVar49 + dVar48;
                  lVar44 = lVar44 + 0x10;
                  *(double *)(lVar1 + 0x10) = dVar50 - dVar54;
                  *(double *)(lVar1 + 0x18) = dVar48 - dVar49;
                  pdVar8 = (double *)
                           ((long)pdVar8 +
                           (-(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | param_9 << 5));
                  pdVar41 = (double *)
                            ((long)pdVar41 +
                            (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | param_9 << 4));
                  pdVar15 = pdVar15 + lVar40 * 2;
                } while (uVar33 * 0x10 + -0x10 != lVar44);
              }
              lVar31 = lVar31 + (int)uVar30;
              pdVar26 = (double *)((long)pdVar26 + uVar13);
              pdVar17 = (double *)((long)pdVar17 + uVar13);
              pdVar19 = (double *)((long)pdVar19 + uVar13);
              lVar32 = lVar32 + uVar13;
            } while (lVar31 < (int)param_4);
          }
          uVar2 = (int)uVar30 * 4;
          uVar33 = uVar30;
          uVar13 = (ulong)uVar2;
        } while ((int)uVar2 <= (int)uVar28);
      }
    }
    uStack_100 = param_9;
    if ((int)uVar30 < (int)uVar28) {
      uVar33 = uVar30;
      do {
        uVar29 = (uint)uVar33;
        uVar4 = uVar29 * 2;
        uVar30 = (ulong)uVar4;
        uVar2 = (int)param_9 / 2;
        param_9 = (ulong)uVar2;
        if (0 < (int)param_4) {
          lVar40 = 0;
          uVar13 = -(uVar33 >> 0x1f) & 0xfffffff000000000 | uVar33 << 4;
          pdVar17 = param_3;
          do {
            pdVar19 = param_3 + lVar40 * 2;
            pdVar26 = pdVar19 + (long)(int)uVar29 * 2;
            dVar47 = *pdVar19;
            dVar48 = pdVar19[1];
            dVar49 = *pdVar26;
            dVar50 = pdVar26[1];
            *pdVar19 = dVar47 + dVar49;
            pdVar19[1] = dVar48 + dVar50;
            *pdVar26 = dVar47 - dVar49;
            pdVar26[1] = dVar48 - dVar50;
            pdVar19 = param_8 + (long)(int)uVar2 * 2 + 1;
            lVar32 = uVar33 - 1;
            pdVar26 = pdVar17;
            if (1 < (int)uVar29) {
              do {
                dVar47 = *(double *)((long)pdVar26 + uVar13 + 0x10);
                dVar48 = *(double *)((long)pdVar26 + uVar13 + 0x18);
                dVar50 = -(dVar48 * *pdVar19) + pdVar19[-1] * dVar47;
                dVar47 = dVar47 * *pdVar19 + pdVar19[-1] * dVar48;
                pdVar8 = pdVar26 + 2;
                dVar48 = *pdVar8;
                dVar49 = pdVar26[3];
                *pdVar8 = dVar48 + dVar50;
                pdVar26[3] = dVar49 + dVar47;
                *(double *)((long)pdVar26 + uVar13 + 0x10) = dVar48 - dVar50;
                *(double *)((long)pdVar26 + uVar13 + 0x18) = dVar49 - dVar47;
                lVar32 = lVar32 + -1;
                pdVar19 = (double *)
                          ((long)pdVar19 +
                          (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | param_9 << 4));
                pdVar26 = pdVar8;
              } while (lVar32 != 0);
            }
            lVar40 = lVar40 + (int)uVar4;
            pdVar17 = (double *)
                      ((long)pdVar17 +
                      (-(ulong)((uVar29 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 | uVar30 << 4));
          } while (lVar40 < (int)param_4);
        }
        uVar33 = uVar30;
        uStack_100 = param_9;
      } while ((int)uVar4 < (int)uVar28);
    }
  }
  else {
    uVar30 = 1;
    uStack_100 = param_9;
  }
  uVar28 = (uVar28 ^ 0xffffffff) & 1;
  uVar33 = (ulong)uVar28;
  if ((int)uVar28 < (int)param_5) {
    lVar40 = (long)(int)param_4;
    pdVar17 = param_8 + 1;
    pdVar19 = param_3 + 1;
    pdVar26 = (double *)(*_param_10 + 8);
    do {
      uVar28 = param_6[uVar33];
      iVar38 = (int)uVar30;
      uVar2 = uVar28 * iVar38;
      uVar13 = (ulong)uVar2;
      uVar4 = 0;
      if (uVar28 != 0) {
        uVar4 = (int)uStack_100 / (int)uVar28;
      }
      uStack_100 = (ulong)uVar4;
      if (uVar28 == 3) {
        if (0 < (int)param_4) {
          lVar32 = 0;
          uVar34 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar13 << 4;
          pdVar41 = param_3 + (long)iVar38 * 4;
          pdVar8 = param_3 + (long)iVar38 * 2;
          pdVar15 = param_3;
          do {
            pdVar14 = param_3 + lVar32 * 2;
            pdVar9 = pdVar14 + (long)iVar38 * 2;
            pdVar27 = pdVar14 + (-(uVar30 >> 0x1f) & 0xfffffffe00000000 | uVar30 << 1) * 2;
            dVar58 = *pdVar9 + *pdVar27;
            dVar56 = pdVar9[1] + pdVar27[1];
            dVar49 = *pdVar14;
            dVar50 = pdVar14[1];
            dVar48 = (pdVar9[1] - pdVar27[1]) * 0.8660254037844386;
            dVar47 = (*pdVar27 - *pdVar9) * 0.8660254037844386;
            *pdVar14 = dVar58 + dVar49;
            pdVar14[1] = dVar56 + dVar50;
            dVar49 = dVar49 + dVar58 * -0.5;
            dVar50 = dVar50 + dVar56 * -0.5;
            *pdVar9 = dVar49 + dVar48;
            pdVar9[1] = dVar47 + dVar50;
            *pdVar27 = dVar49 - dVar48;
            pdVar27[1] = dVar50 - dVar47;
            if (1 < iVar38) {
              lVar31 = 0;
              pdVar9 = pdVar17 + (long)(int)uVar4 * 4;
              pdVar14 = pdVar17 + (long)(int)uVar4 * 2;
              do {
                dVar47 = *(double *)((long)pdVar8 + lVar31 + 0x10);
                dVar48 = *(double *)((long)pdVar8 + lVar31 + 0x18);
                dVar49 = -(dVar48 * *pdVar14) + pdVar14[-1] * dVar47;
                dVar50 = *(double *)((long)pdVar41 + lVar31 + 0x10);
                dVar58 = *(double *)((long)pdVar41 + lVar31 + 0x18);
                dVar47 = pdVar14[-1] * dVar48 + *pdVar14 * dVar47;
                dVar48 = -(dVar58 * *pdVar9) + pdVar9[-1] * dVar50;
                dVar50 = pdVar9[-1] * dVar58 + *pdVar9 * dVar50;
                dVar53 = dVar49 + dVar48;
                dVar54 = dVar47 + dVar50;
                dVar47 = (dVar47 - dVar50) * 0.8660254037844386;
                dVar50 = *(double *)((long)pdVar15 + lVar31 + 0x10);
                dVar58 = *(double *)((long)pdVar15 + lVar31 + 0x18);
                dVar48 = (dVar48 - dVar49) * 0.8660254037844386;
                dVar49 = dVar50 + dVar53 * -0.5;
                dVar56 = dVar58 + dVar54 * -0.5;
                *(double *)((long)pdVar15 + lVar31 + 0x10) = dVar50 + dVar53;
                *(double *)((long)pdVar15 + lVar31 + 0x18) = dVar58 + dVar54;
                *(double *)((long)pdVar8 + lVar31 + 0x10) = dVar47 + dVar49;
                *(double *)((long)pdVar8 + lVar31 + 0x18) = dVar56 + dVar48;
                *(double *)((long)pdVar41 + lVar31 + 0x10) = dVar49 - dVar47;
                *(double *)((long)pdVar41 + lVar31 + 0x18) = dVar56 - dVar48;
                lVar31 = lVar31 + 0x10;
                pdVar14 = (double *)
                          ((long)pdVar14 +
                          (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | uStack_100 << 4));
                pdVar9 = (double *)
                         ((long)pdVar9 +
                         (-(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | uStack_100 << 5));
              } while (uVar30 * 0x10 + -0x10 != lVar31);
            }
            lVar32 = lVar32 + (int)uVar2;
            pdVar15 = (double *)((long)pdVar15 + uVar34);
            pdVar41 = (double *)((long)pdVar41 + uVar34);
            pdVar8 = (double *)((long)pdVar8 + uVar34);
          } while (lVar32 < lVar40);
        }
      }
      else if (uVar28 == 5) {
        if (0 < (int)param_4) {
          lVar31 = 0;
          iVar37 = iVar38 << 1;
          uVar34 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar13 << 4;
          pdVar8 = pdVar19 + (long)iVar38 * 2;
          pdVar41 = pdVar19 + (long)iVar37 * 2;
          lVar32 = (long)pdVar19 +
                   (-(uVar30 >> 0x1f) & 0xfffffff000000000 | uVar30 << 4) + (long)iVar37 * 0x10;
          pdVar15 = pdVar19 + (long)iVar37 * 4;
          pdVar14 = pdVar19;
          do {
            if (0 < iVar38) {
              lVar18 = 0;
              pdVar12 = pdVar17;
              pdVar22 = pdVar17;
              pdVar27 = pdVar17;
              pdVar9 = pdVar17;
              do {
                pdVar16 = (double *)((long)pdVar14 + lVar18);
                pdVar20 = (double *)((long)pdVar41 + lVar18);
                pdVar23 = (double *)((long)pdVar15 + lVar18);
                pdVar39 = (double *)((long)pdVar8 + lVar18);
                dVar53 = -(*pdVar39 * *pdVar9) + pdVar9[-1] * pdVar39[-1];
                dVar47 = pdVar9[-1] * *pdVar39 + *pdVar9 * pdVar39[-1];
                dVar49 = -(*pdVar23 * *pdVar27) + pdVar27[-1] * pdVar23[-1];
                dVar48 = pdVar27[-1] * *pdVar23 + *pdVar27 * pdVar23[-1];
                dVar50 = dVar53 + dVar49;
                pdVar43 = (double *)(lVar32 + lVar18);
                dVar54 = dVar47 + dVar48;
                dVar59 = -(*pdVar43 * *pdVar22) + pdVar22[-1] * pdVar43[-1];
                dVar53 = dVar53 - dVar49;
                dVar49 = pdVar22[-1] * *pdVar43 + *pdVar22 * pdVar43[-1];
                dVar47 = dVar47 - dVar48;
                dVar58 = -(*pdVar20 * *pdVar12) + pdVar12[-1] * pdVar20[-1];
                dVar48 = pdVar12[-1] * *pdVar20 + *pdVar12 * pdVar20[-1];
                dVar55 = dVar59 + dVar58;
                dVar57 = dVar49 + dVar48;
                dVar59 = dVar59 - dVar58;
                dVar49 = dVar49 - dVar48;
                dVar60 = dVar50 + dVar55;
                dVar61 = dVar54 + dVar57;
                dVar58 = pdVar16[-1] + dVar60 * -0.25;
                dVar56 = *pdVar16 + dVar61 * -0.25;
                dVar50 = (dVar50 - dVar55) * 0.5590169943749475;
                dVar54 = (dVar54 - dVar57) * 0.5590169943749475;
                dVar48 = (dVar47 + dVar49) * 0.9510565162951535;
                dVar55 = (dVar53 + dVar59) * -0.9510565162951535;
                pdVar16[-1] = pdVar16[-1] + dVar60;
                *pdVar16 = *pdVar16 + dVar61;
                dVar47 = dVar48 - dVar47 * 0.36327126400268045;
                dVar53 = dVar53 * 0.36327126400268045 + dVar55;
                dVar48 = dVar48 - dVar49 * 1.5388417685876268;
                dVar55 = dVar59 * 1.5388417685876268 + dVar55;
                dVar49 = dVar58 + dVar50;
                dVar57 = dVar56 + dVar54;
                dVar58 = dVar58 - dVar50;
                dVar56 = dVar56 - dVar54;
                pdVar39[-1] = dVar48 + dVar49;
                *pdVar39 = dVar57 + dVar55;
                pdVar23[-1] = dVar49 - dVar48;
                *pdVar23 = dVar57 - dVar55;
                lVar18 = lVar18 + 0x10;
                pdVar9 = (double *)
                         ((long)pdVar9 +
                         (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | uStack_100 << 4));
                pdVar20[-1] = dVar47 + dVar58;
                *pdVar20 = dVar56 + dVar53;
                pdVar43[-1] = dVar58 - dVar47;
                *pdVar43 = dVar56 - dVar53;
                pdVar27 = (double *)
                          ((long)pdVar27 +
                          (-(ulong)(uVar4 >> 0x1f) & 0xffffffc000000000 | uStack_100 << 6));
                pdVar22 = pdVar22 + ((-(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | uStack_100 << 1
                                     ) + (long)(int)uVar4) * 2;
                pdVar12 = (double *)
                          ((long)pdVar12 +
                          (-(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | uStack_100 << 5));
              } while (uVar30 << 4 != lVar18);
            }
            lVar31 = lVar31 + (int)uVar2;
            pdVar14 = (double *)((long)pdVar14 + uVar34);
            pdVar8 = (double *)((long)pdVar8 + uVar34);
            pdVar41 = (double *)((long)pdVar41 + uVar34);
            lVar32 = lVar32 + uVar34;
            pdVar15 = (double *)((long)pdVar15 + uVar34);
          } while (lVar31 < lVar40);
        }
      }
      else if (0 < (int)param_4) {
        iVar37 = uVar28 - 1;
        lVar32 = (long)((ulong)(uint)(iVar37 - (iVar37 >> 0x1f)) << 0x20) >> 0x21;
        uVar29 = iVar37 / 2;
        if ((int)uVar29 < 2) {
          uVar29 = 1;
        }
        uVar34 = (ulong)uVar29;
        uVar45 = -(uVar30 >> 0x1f) & 0xfffffff000000000 | uVar30 << 4;
        uVar35 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar13 << 4;
        lVar31 = uVar35 + (long)iVar38 * -0x10;
        pdStack_c8 = (double *)((long)pdVar19 + lVar31);
        pdStack_d0 = pdVar19 + (long)iVar38 * 2;
        iVar37 = 0;
        if (uVar28 != 0) {
          iVar37 = (int)uVar25 / (int)uVar28;
        }
        lStack_c0 = 0;
        uVar36 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | uStack_100 << 4;
        pdStack_d8 = (double *)((long)param_3 + lVar31);
        pdStack_e0 = param_3 + (long)iVar38 * 2;
        do {
          if (0 < iVar38) {
            lVar31 = 0;
            lVar18 = 0;
            uVar46 = 0;
            pdVar9 = param_8;
            pdVar15 = pdStack_e0;
            pdVar27 = param_8;
            pdVar14 = pdStack_d8;
            pdVar41 = pdStack_c8;
            pdVar8 = pdStack_d0;
            do {
              pdVar22 = param_3 + lStack_c0 * 2 + uVar46 * 2;
              dVar56 = pdVar22[1];
              dVar58 = *pdVar22;
              dVar47 = *pdVar22;
              dVar48 = pdVar22[1];
              dVar49 = dVar58;
              dVar50 = dVar56;
              if (uVar46 == 0) {
                pdVar12 = pdVar14;
                pdVar16 = pdVar26 + lVar32 * 2;
                pdVar20 = pdVar15;
                uVar24 = uVar34;
                pdVar23 = pdVar26;
                if (2 < (int)uVar28) {
                  do {
                    dVar53 = *pdVar20;
                    dVar54 = *pdVar12;
                    dVar55 = dVar53 + dVar54;
                    dVar57 = pdVar20[1] + pdVar12[1];
                    dVar49 = dVar49 + dVar55;
                    dVar50 = dVar50 + dVar57;
                    *pdVar23 = pdVar20[1] - pdVar12[1];
                    *(double *)*(undefined1 (*) [16])(pdVar23 + -1) = dVar55;
                    *pdVar16 = dVar57;
                    *(double *)*(undefined1 (*) [16])(pdVar16 + -1) = dVar53 - dVar54;
                    uVar24 = uVar24 - 1;
                    pdVar12 = pdVar12 + (long)iVar38 * -2;
                    pdVar16 = pdVar16 + 2;
                    pdVar20 = (double *)((long)pdVar20 + uVar45);
                    pdVar23 = pdVar23 + 2;
                  } while (uVar24 != 0);
                  goto LAB_109a5569c;
                }
              }
              else {
                pdVar12 = pdVar27;
                pdVar16 = pdVar9;
                pdVar20 = pdVar26;
                pdVar23 = pdVar26 + lVar32 * 2;
                pdVar39 = pdVar8;
                pdVar43 = pdVar41;
                uVar24 = uVar34;
                if (2 < (int)uVar28) {
                  do {
                    auVar51._0_8_ = *pdVar12 * *pdVar39;
                    auVar51._8_8_ = pdVar12[1] * -*pdVar39;
                    auVar52 = NEON_ext(auVar51,auVar51,8,1);
                    dVar53 = *pdVar16 * *pdVar43;
                    dVar54 = pdVar16[1] * -*pdVar43;
                    dVar59 = auVar52._0_8_ + *pdVar12 * pdVar39[-1];
                    dVar60 = auVar52._8_8_ + pdVar12[1] * pdVar39[-1];
                    auVar52._8_8_ = dVar54;
                    auVar52._0_8_ = dVar53;
                    auVar5._8_8_ = dVar54;
                    auVar5._0_8_ = dVar53;
                    auVar52 = NEON_ext(auVar52,auVar5,8,1);
                    dVar53 = auVar52._0_8_ + *pdVar16 * pdVar43[-1];
                    dVar55 = auVar52._8_8_ + pdVar16[1] * pdVar43[-1];
                    dVar54 = dVar59 + dVar53;
                    dVar57 = dVar60 + dVar55;
                    *pdVar20 = dVar60 - dVar55;
                    *(double *)*(undefined1 (*) [16])(pdVar20 + -1) = dVar54;
                    *(double *)*(undefined1 (*) [16])(pdVar23 + -1) = dVar59 - dVar53;
                    *pdVar23 = dVar57;
                    dVar49 = dVar49 + dVar54;
                    dVar50 = dVar50 + dVar57;
                    uVar24 = uVar24 - 1;
                    pdVar12 = (double *)((long)pdVar12 + lVar31);
                    pdVar16 = (double *)((long)pdVar16 + lVar18);
                    pdVar20 = pdVar20 + 2;
                    pdVar23 = pdVar23 + 2;
                    pdVar39 = (double *)((long)pdVar39 + uVar45);
                    pdVar43 = pdVar43 + (long)iVar38 * -2;
                  } while (uVar24 != 0);
LAB_109a5569c:
                  pdVar22[1] = dVar50;
                  *pdVar22 = dVar49;
                  uVar11 = 1;
                  lVar44 = (long)iVar38;
                  do {
                    pauVar21 = _param_10;
                    uVar24 = uVar34;
                    dVar49 = dVar58;
                    dVar50 = dVar56;
                    iVar42 = uVar11 * iVar37;
                    dVar53 = dVar47;
                    dVar54 = dVar48;
                    do {
                      auVar52 = NEON_ext(*pauVar21,pauVar21[lVar32],8,1);
                      dVar55 = param_8[(long)iVar42 * 2];
                      dVar60 = (param_8 + (long)iVar42 * 2)[1];
                      dVar57 = *(double *)*pauVar21 * dVar55;
                      dVar55 = SUB168(pauVar21[lVar32],8) * dVar55;
                      dVar59 = auVar52._0_8_ * dVar60;
                      dVar60 = auVar52._8_8_ * dVar60;
                      dVar49 = dVar49 + dVar57 + dVar59;
                      dVar50 = dVar50 + (dVar55 - dVar60);
                      dVar53 = dVar53 + (dVar57 - dVar59);
                      dVar54 = dVar54 + dVar55 + dVar60;
                      iVar42 = iVar42 + uVar11 * iVar37;
                      uVar3 = 0;
                      if ((int)uVar25 <= iVar42) {
                        uVar3 = uVar25;
                      }
                      iVar42 = iVar42 - uVar3;
                      uVar24 = uVar24 - 1;
                      pauVar21 = pauVar21 + 1;
                    } while (uVar24 != 0);
                    (pdVar22 + lVar44 * 2)[1] = dVar54;
                    pdVar22[lVar44 * 2] = dVar53;
                    (pdVar22 + ((int)uVar2 - lVar44) * 2)[1] = dVar50;
                    pdVar22[((int)uVar2 - lVar44) * 2] = dVar49;
                    lVar44 = lVar44 + iVar38;
                    bVar7 = uVar11 != uVar29;
                    uVar11 = uVar11 + 1;
                  } while (bVar7);
                }
              }
              uVar46 = uVar46 + 1;
              pdVar8 = pdVar8 + 2;
              pdVar41 = pdVar41 + 2;
              pdVar9 = (double *)
                       ((long)pdVar9 + ((long)(int)uVar28 * 0x10 + -0x10) * (long)(int)uVar4);
              lVar18 = lVar18 - uVar36;
              pdVar27 = (double *)((long)pdVar27 + uVar36);
              lVar31 = lVar31 + uVar36;
              pdVar15 = pdVar15 + 2;
              pdVar14 = pdVar14 + 2;
            } while (uVar46 != uVar30);
          }
          lStack_c0 = lStack_c0 + (int)uVar2;
          pdStack_d0 = (double *)((long)pdStack_d0 + uVar35);
          pdStack_c8 = (double *)((long)pdStack_c8 + uVar35);
          pdStack_e0 = (double *)((long)pdStack_e0 + uVar35);
          pdStack_d8 = (double *)((long)pdStack_d8 + uVar35);
        } while (lStack_c0 < lVar40);
      }
      uVar33 = uVar33 + 1;
      uVar30 = uVar13;
    } while (uVar33 != param_5);
  }
  if (param_1 == 1.0) {
    if ((param_14 & 1) != 0) {
      if ((int)param_4 < 2) {
        uVar30 = 0;
      }
      else {
        uVar30 = 0;
        pdVar17 = param_3 + 3;
        do {
          pdVar17[-2] = -pdVar17[-2];
          *pdVar17 = -*pdVar17;
          uVar30 = uVar30 + 2;
          pdVar17 = pdVar17 + 4;
        } while (uVar30 <= param_4 - 2);
      }
      if ((int)uVar30 < (int)param_4) {
        param_3[(ulong)param_4 * 2 + -1] = -param_3[(ulong)param_4 * 2 + -1];
      }
    }
  }
  else if (0 < (int)param_4) {
    dVar47 = param_1;
    if ((param_14 & 1) != 0) {
      dVar47 = -param_1;
    }
    uVar30 = (ulong)param_4;
    do {
      param_3[1] = dVar47 * param_3[1];
      *param_3 = param_1 * *param_3;
      uVar30 = uVar30 - 1;
      param_3 = param_3 + 2;
    } while (uVar30 != 0);
  }
  return;
}



/* Entry: 109a52778; end: 109a52a1b;  */

void FUN_109a52778(double param_1,double *param_2,double *param_3,ulong param_4,undefined8 param_5,
                  int *param_6,int *param_7,long param_8,undefined8 param_9,undefined4 param_10,
                  undefined4 param_11,undefined8 param_12,uint param_13)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  double *pdVar11;
  double *pdVar12;
  ulong uVar13;
  double *pdVar14;
  double *pdVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  uVar4 = param_13 >> 9 & 1;
  pdVar11 = param_3 + uVar4;
  iVar8 = (int)param_4;
  if (iVar8 == 1) {
    *pdVar11 = param_1 * *param_2;
  }
  else if (iVar8 == 2) {
    dVar16 = *param_2;
    dVar17 = param_2[1];
    *pdVar11 = param_1 * (dVar16 + dVar17);
    pdVar11[1] = param_1 * (dVar16 - dVar17);
  }
  else {
    if ((param_4 & 1) != 0) {
      *param_3 = param_1 * *param_2;
      param_3[1] = 0.0;
      if (1 < iVar8) {
        uVar13 = 1;
        pdVar11 = param_3 + 5;
        piVar6 = param_7;
        do {
          dVar16 = param_2[piVar6[2]];
          pdVar11[-3] = param_1 * param_2[piVar6[1]];
          pdVar11[-2] = 0.0;
          pdVar11[-1] = param_1 * dVar16;
          *pdVar11 = 0.0;
          uVar13 = uVar13 + 2;
          pdVar11 = pdVar11 + 4;
          piVar6 = piVar6 + 2;
        } while (uVar13 < (param_4 & 0xffffffff));
      }
      FUN_109a54a6c(0x3ff0000000000000,param_3,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,param_12,0x100);
      if ((param_13 & 0x200) == 0) {
        param_3[1] = *param_3;
        return;
      }
      bVar7 = false;
      goto LAB_109a527f8;
    }
    iVar2 = iVar8 >> 1;
    iVar3 = *param_6;
    *param_6 = iVar3 >> 1;
    uVar9 = (uint)(iVar3 >> 1 == 1);
    FUN_109a54a6c(0x3ff0000000000000,param_2,pdVar11,iVar2,(int)param_5 - uVar9,param_6 + uVar9,
                  param_7,param_8,param_9,param_12,0);
    *param_6 = *param_6 << 1;
    dVar18 = param_1 * (*pdVar11 - pdVar11[1]);
    *pdVar11 = param_1 * (*pdVar11 + pdVar11[1]);
    pdVar11[1] = dVar18;
    pdVar1 = pdVar11 + iVar2;
    dVar16 = *pdVar1;
    dVar17 = pdVar11[(long)iVar8 + -1];
    pdVar11[(long)iVar8 + -1] = dVar18;
    if (iVar2 < 3) {
      lVar10 = 2;
    }
    else {
      dVar18 = param_1 * 0.5;
      pdVar12 = (double *)(param_8 + 0x18);
      pdVar14 = param_3 + uVar4 + (long)iVar8 + -3;
      lVar10 = 2;
      pdVar5 = param_3 + uVar4;
      do {
        pdVar15 = pdVar5 + 2;
        dVar21 = dVar18 * (dVar17 + pdVar5[3]);
        dVar19 = pdVar5[3] - dVar17;
        dVar17 = *pdVar14;
        dVar22 = dVar18 * (pdVar14[1] - *pdVar15);
        dVar23 = -(dVar22 * *pdVar12) + pdVar12[-1] * dVar21;
        dVar20 = dVar18 * (pdVar14[1] + *pdVar15);
        dVar19 = dVar18 * dVar19;
        dVar21 = pdVar12[-1] * dVar22 + *pdVar12 * dVar21;
        pdVar5[1] = dVar20 + dVar23;
        *pdVar14 = dVar20 - dVar23;
        *pdVar15 = dVar19 + dVar21;
        lVar10 = lVar10 + 2;
        pdVar14[1] = dVar21 - dVar19;
        pdVar12 = pdVar12 + 2;
        pdVar14 = pdVar14 + -2;
        pdVar5 = pdVar15;
      } while (lVar10 < iVar2);
    }
    if ((int)lVar10 <= iVar2) {
      pdVar1[-1] = param_1 * dVar16;
      *pdVar1 = -(dVar17 * param_1);
    }
  }
  if ((param_13 & 0x200) == 0) {
    return;
  }
  bVar7 = (param_4 & 1) == 0;
  param_3 = pdVar11;
LAB_109a527f8:
  if ((iVar8 == 1) || (bVar7)) {
    dVar16 = *param_3;
    *param_3 = 0.0;
    param_3[-1] = dVar16;
    if (1 < iVar8) {
      param_3[param_4 & 0xffffffff] = 0.0;
    }
  }
  return;
}



/* Entry: 109a52a1c; end: 109a52d2f;  */

void FUN_109a52a1c(double param_1,double *param_2,double *param_3,ulong param_4,undefined8 param_5,
                  int *param_6,int *param_7,long param_8)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  double *pdVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  uint in_stack_00000010;
  
  dVar21 = 0.0;
  if ((in_stack_00000010 >> 9 & 1) != 0) {
    dVar15 = *param_2;
    param_2 = param_2 + 1;
    dVar21 = *param_2;
    *param_2 = dVar15;
  }
  iVar14 = (int)param_4;
  if (iVar14 == 2) {
    dVar15 = *param_2 + param_2[1];
    param_3[1] = param_1 * (*param_2 - param_2[1]);
  }
  else {
    if (iVar14 != 1) {
      uVar5 = iVar14 + 1 >> 1;
      uVar4 = (ulong)uVar5;
      if ((param_4 & 1) == 0) {
        dVar15 = *param_2;
        dVar22 = param_2[1];
        dVar16 = param_2[(long)iVar14 + -1];
        *param_3 = dVar15 + dVar16;
        param_3[1] = dVar16 - dVar15;
        if ((int)uVar5 < 3) {
          uVar9 = 2;
        }
        else {
          lVar8 = (long)iVar14;
          pdVar6 = (double *)(param_8 + 0x18);
          piVar7 = param_7 + uVar5;
          pdVar11 = param_3 + 3;
          pdVar12 = param_2 + lVar8 + -3;
          pdVar13 = param_2 + 3;
          uVar9 = 2;
          piVar10 = param_7;
          do {
            lVar8 = lVar8 + -2;
            piVar10 = piVar10 + 1;
            piVar7 = piVar7 + -1;
            dVar15 = dVar22 + *pdVar12;
            dVar18 = dVar22 - *pdVar12;
            dVar22 = *pdVar13;
            dVar16 = pdVar13[-1] - pdVar12[1];
            dVar19 = pdVar13[-1] + pdVar12[1];
            dVar17 = dVar19 * *pdVar6 + pdVar6[-1] * dVar18;
            dVar18 = -(dVar18 * *pdVar6) + pdVar6[-1] * dVar19;
            dVar19 = dVar15 - dVar18;
            dVar20 = -dVar16 - dVar17;
            if (param_2 == param_3) {
              pdVar11[-1] = dVar19;
              *pdVar11 = dVar20;
              lVar3 = lVar8;
            }
            else {
              iVar2 = *piVar10;
              param_3[iVar2] = dVar19;
              (param_3 + iVar2)[1] = dVar20;
              lVar3 = (long)*piVar7;
            }
            pdVar6 = pdVar6 + 2;
            pdVar12 = pdVar12 + -2;
            pdVar13 = pdVar13 + 2;
            param_3[lVar3] = dVar15 + dVar18;
            (param_3 + 1)[lVar3] = dVar16 - dVar17;
            uVar9 = uVar9 + 2;
            pdVar11 = pdVar11 + 2;
          } while (uVar9 < uVar4);
        }
        if ((int)uVar9 <= (int)uVar5) {
          lVar8 = (long)(int)uVar5;
          dVar15 = param_2[(int)uVar5];
          if (param_2 != param_3) {
            lVar8 = (long)param_7[lVar8] << 1;
          }
          param_3[lVar8] = dVar22 + dVar22;
          (param_3 + lVar8)[1] = dVar15 + dVar15;
        }
        iVar2 = *param_6;
        *param_6 = iVar2 >> 1;
        uVar5 = (uint)(iVar2 >> 1 == 1);
        FUN_109a54a6c(0x3ff0000000000000,param_3,param_3,uVar4,(int)param_5 - uVar5,param_6 + uVar5)
        ;
        *param_6 = *param_6 << 1;
        if (0 < iVar14) {
          uVar4 = 0;
          do {
            param_3[1] = param_3[1] * -param_1;
            *param_3 = *param_3 * param_1;
            uVar4 = uVar4 + 2;
            param_3 = param_3 + 2;
          } while (uVar4 < (param_4 & 0xffffffff));
        }
      }
      else {
        dVar15 = *param_2;
        param_3[1] = 0.0;
        *param_3 = dVar15;
        if (1 < (int)uVar5) {
          lVar8 = uVar4 - 1;
          piVar7 = param_7 + iVar14;
          pdVar6 = param_2 + 1;
          do {
            param_7 = param_7 + 1;
            piVar7 = piVar7 + -1;
            iVar2 = *param_7;
            iVar1 = *piVar7;
            dVar16 = pdVar6[1];
            dVar15 = *pdVar6;
            param_3[(long)iVar2 * 2] = dVar15;
            (param_3 + (long)iVar2 * 2)[1] = -dVar16;
            (param_3 + (long)iVar1 * 2)[1] = dVar16;
            param_3[(long)iVar1 * 2] = dVar15;
            lVar8 = lVar8 + -1;
            pdVar6 = pdVar6 + 2;
          } while (lVar8 != 0);
        }
        FUN_109a54a6c(0x3ff0000000000000,param_3,param_3,param_4,param_5,param_6);
        *param_3 = param_1 * *param_3;
        if (1 < iVar14) {
          uVar4 = 1;
          pdVar6 = param_3;
          do {
            dVar15 = param_3[4];
            pdVar6[1] = param_1 * param_3[2];
            pdVar6[2] = param_1 * dVar15;
            uVar4 = uVar4 + 2;
            param_3 = param_3 + 4;
            pdVar6 = pdVar6 + 2;
          } while (uVar4 < (param_4 & 0xffffffff));
        }
      }
      goto LAB_109a52a94;
    }
    dVar15 = *param_2;
  }
  *param_3 = param_1 * dVar15;
LAB_109a52a94:
  if ((in_stack_00000010 >> 9 & 1) != 0) {
    *param_2 = dVar21;
  }
  return;
}



/* Entry: 109a52d30; end: 109a5306f;  */

void FUN_109a52d30(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float *pfVar4;
  double *pdVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  double *pdVar11;
  float *pfVar12;
  double *pdVar13;
  long lVar14;
  
  uVar3 = param_1[3];
  lVar6 = *(long *)(param_1 + 4);
  if ((0x88442211U >> (((ulong)*param_1 & 7) << 2) & 0xf) == 4) {
    if (0 < (int)param_2) {
      uVar7 = 0;
      uVar8 = *(ulong *)(param_1 + 0x14) >> 2;
      uVar1 = (int)(uVar3 + 1) / 2;
      if ((int)uVar1 < 3) {
        uVar1 = 2;
      }
      uVar9 = (ulong)param_2;
      pfVar10 = (float *)(lVar6 + (ulong)uVar3 * 8 + -4);
      do {
        uVar2 = uVar7;
        if ((uVar7 * 2 - uVar9 != 0 && uVar7 != 0) && param_3 != 1) {
          uVar2 = uVar9 - uVar7;
        }
        if (2 < (int)uVar3) {
          pfVar4 = pfVar10;
          pfVar12 = (float *)(lVar6 + uVar2 * uVar8 * 4 + 0xc);
          lVar14 = (ulong)uVar1 - 1;
          do {
            pfVar4[-1] = pfVar12[-1];
            *pfVar4 = -*pfVar12;
            lVar14 = lVar14 + -1;
            pfVar4 = pfVar4 + -2;
            pfVar12 = pfVar12 + 2;
          } while (lVar14 != 0);
        }
        uVar7 = uVar7 + 1;
        pfVar10 = pfVar10 + uVar8;
      } while (uVar7 != uVar9);
    }
  }
  else if (0 < (int)param_2) {
    uVar7 = 0;
    uVar8 = *(ulong *)(param_1 + 0x14) >> 3;
    uVar1 = (int)(uVar3 + 1) / 2;
    if ((int)uVar1 < 3) {
      uVar1 = 2;
    }
    uVar9 = (ulong)param_2;
    pdVar11 = (double *)(lVar6 + (ulong)uVar3 * 0x10 + -8);
    do {
      uVar2 = uVar7;
      if ((uVar7 * 2 - uVar9 != 0 && uVar7 != 0) && param_3 != 1) {
        uVar2 = uVar9 - uVar7;
      }
      if (2 < (int)uVar3) {
        pdVar5 = pdVar11;
        pdVar13 = (double *)(lVar6 + uVar2 * uVar8 * 8 + 0x18);
        lVar14 = (ulong)uVar1 - 1;
        do {
          pdVar5[-1] = pdVar13[-1];
          *pdVar5 = -*pdVar13;
          lVar14 = lVar14 + -1;
          pdVar5 = pdVar5 + -2;
          pdVar13 = pdVar13 + 2;
        } while (lVar14 != 0);
      }
      uVar7 = uVar7 + 1;
      pdVar11 = pdVar11 + uVar8;
    } while (uVar7 != uVar9);
  }
  return;
}



/* Entry: 109a53070; end: 109a53bcf;  */

void FUN_109a53070(uint *param_1,uint *param_2,uint *param_3,uint param_4,ulong param_5)

{
  int *piVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  code *pcVar18;
  bool bVar19;
  long lVar20;
  undefined4 *puVar21;
  ulong *puVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  byte bVar30;
  ulong uVar31;
  ulong uVar32;
  double *pdVar33;
  float *pfVar34;
  double *pdVar35;
  double *pdVar36;
  long lVar37;
  double *pdVar38;
  double *pdVar39;
  double *pdVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  float *pfVar44;
  float fVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  float fVar50;
  undefined8 uVar51;
  double dVar52;
  undefined8 uStack_190;
  ulong uStack_188;
  double *pdStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  double *pdStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  int *piStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double *pdStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  int *piStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar22 = *(ulong **)(param_1 + 2);
    piStack_90 = (int *)((ulong)&uStack_d0 | 8);
    uStack_c8 = puVar22[1];
    uStack_d0 = *puVar22;
    uStack_b8 = puVar22[3];
    pdStack_c0 = (double *)puVar22[2];
    uStack_a8 = puVar22[5];
    uStack_b0 = puVar22[4];
    uStack_98 = puVar22[7];
    uStack_a0 = puVar22[6];
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    if (puVar22[7] != 0) {
      piVar1 = (int *)(puVar22[7] + 0x14);
      do {
        cVar13 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = *piVar1 + 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
    }
    if (*(int *)((long)puVar22 + 4) < 3) {
      uStack_80 = *(ulong *)puVar22[9];
      uStack_78 = ((ulong *)puVar22[9])[1];
    }
    else {
      uStack_d0 = uStack_d0 & 0xffffffff;
      func_0x000109a84868(&uStack_d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_d0,param_1,0xffffffff);
  }
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar22 = *(ulong **)(param_2 + 2);
    piStack_f0 = (int *)((ulong)&uStack_130 | 8);
    uStack_128 = puVar22[1];
    uStack_130 = *puVar22;
    uStack_118 = puVar22[3];
    pdStack_120 = (double *)puVar22[2];
    uStack_108 = puVar22[5];
    uStack_110 = puVar22[4];
    uStack_f8 = puVar22[7];
    uStack_100 = puVar22[6];
    puStack_e8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    if (puVar22[7] != 0) {
      piVar1 = (int *)(puVar22[7] + 0x14);
      do {
        cVar13 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = *piVar1 + 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
    }
    if (*(int *)((long)puVar22 + 4) < 3) {
      uStack_e0 = *(ulong *)puVar22[9];
      uStack_d8 = ((ulong *)puVar22[9])[1];
    }
    else {
      uStack_130 = uStack_130 & 0xffffffff;
      func_0x000109a84868(&uStack_130);
    }
  }
  else {
    FUN_109a8a180(&uStack_130,param_2,0xffffffff);
  }
  uVar17 = (uint)uStack_d0;
  uVar9 = (uint)uStack_d0 & 0xfff;
  if ((uVar9 == ((uint)uStack_130 & 0xfff)) &&
     (piStack_90[1] == piStack_f0[1] && *piStack_90 == *piStack_f0)) {
    if ((uVar9 < 0xf) && ((1 << (ulong)((uint)uStack_d0 & 0x1f) & 0x6060U) != 0)) {
      uVar29 = (uint)uStack_c8;
      iVar14 = uStack_c8._4_4_;
      FUN_109a8f64c(param_3,uStack_c8 & 0xffffffff,uStack_c8._4_4_,uVar9,0xffffffff,0,0);
      if ((*param_3 & 0x1f0000) == 0x10000) {
        puVar22 = *(ulong **)(param_3 + 2);
        uStack_150 = (ulong)&uStack_190 | 8;
        uStack_188 = puVar22[1];
        uStack_190 = (undefined4 *)*puVar22;
        uStack_178 = puVar22[3];
        pdStack_180 = (double *)puVar22[2];
        uStack_168 = puVar22[5];
        uStack_170 = puVar22[4];
        uStack_158 = puVar22[7];
        uStack_160 = puVar22[6];
        puStack_148 = &uStack_140;
        uStack_140 = 0;
        uStack_138 = 0;
        if (puVar22[7] != 0) {
          piVar1 = (int *)(puVar22[7] + 0x14);
          do {
            cVar13 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = *piVar1 + 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
        if (*(int *)((long)puVar22 + 4) < 3) {
          uStack_140 = *(ulong *)puVar22[9];
          uStack_138 = ((ulong *)puVar22[9])[1];
        }
        else {
          uStack_190 = (undefined4 *)((ulong)uStack_190 & 0xffffffff);
          func_0x000109a84868(&uStack_190);
        }
      }
      else {
        FUN_109a8a180(&uStack_190,param_3,0xffffffff);
      }
      uVar9 = uVar17 >> 3 & 0x1ff;
      bVar30 = 1;
      if (((param_4 >> 2 & 1) == 0) && (uVar29 != 1)) {
        if ((iVar14 == 1) &&
           (((uStack_d0._1_1_ >> 6 & 1) != 0 && ((uStack_130._1_1_ >> 6 & 1) != 0)))) {
          bVar30 = uStack_190._1_1_ >> 6 & 1;
        }
        else {
          bVar30 = 0;
        }
      }
      bVar12 = bVar30 ^ 1;
      bVar19 = (param_4 & 4) == 0;
      iVar24 = 0;
      if (bVar12 == 0 && bVar19) {
        iVar24 = uVar29 - 1;
      }
      uVar2 = iVar24 + iVar14;
      if (bVar12 == 0 && bVar19) {
        uVar29 = 1;
      }
      uVar10 = uVar2 & 1;
      iVar14 = uVar2 * (uVar9 + 1) - (uint)(uVar10 == 0 && uVar9 == 0);
      bVar19 = uVar9 == 0;
      bVar11 = 0;
      if (bVar19) {
        bVar11 = bVar12;
      }
      if ((uVar17 & 7) == 5) {
        uVar32 = uStack_80 >> 2;
        uVar26 = uStack_e0 >> 2;
        uVar42 = uStack_140 >> 2;
        lVar41 = uVar42 * 4;
        lVar20 = uVar26 * 4;
        lVar23 = uVar32 * 4;
        pdVar36 = pdStack_c0;
        pdVar39 = pdStack_120;
        pdVar40 = pdStack_180;
        if (bVar11 != 0) {
          lVar43 = (long)(int)(uVar29 - 1);
          iVar24 = 0;
          do {
            lVar25 = (long)(int)(uVar2 - 1);
            if (iVar24 != 1) {
              lVar25 = 0;
            }
            pfVar3 = (float *)((long)pdVar40 + lVar25 * 4);
            pfVar4 = (float *)((long)pdVar39 + lVar25 * 4);
            pfVar5 = (float *)((long)pdVar36 + lVar25 * 4);
            *pfVar3 = *pfVar5 * *pfVar4;
            if ((uVar29 & 1) == 0) {
              pfVar3[uVar42 * lVar43] = pfVar5[uVar32 * lVar43] * pfVar4[uVar26 * lVar43];
            }
            if ((param_5 & 1) == 0) {
              if (2 < (int)uVar29) {
                pfVar44 = (float *)((long)pdVar40 + lVar41);
                lVar37 = (long)pdVar39 + lVar20;
                pfVar34 = (float *)((long)pdVar36 + lVar23);
                lVar27 = 1;
                do {
                  pdVar40 = pdVar40 + uVar42;
                  pdVar39 = pdVar39 + uVar26;
                  pdVar36 = pdVar36 + uVar32;
                  fVar45 = pfVar34[lVar25];
                  fVar47 = *(float *)(lVar37 + lVar25 * 4);
                  fVar48 = *(float *)((long)pdVar36 + lVar25 * 4);
                  fVar50 = *(float *)((long)pdVar39 + lVar25 * 4);
                  pfVar44[lVar25] = -(fVar48 * fVar50) + fVar47 * fVar45;
                  *(float *)((long)pdVar40 + lVar25 * 4) = fVar47 * fVar48 + fVar50 * fVar45;
                  lVar27 = lVar27 + 2;
                  pfVar44 = pfVar44 + uVar42 * 2;
                  lVar37 = lVar37 + uVar26 * 8;
                  pfVar34 = pfVar34 + uVar32 * 2;
                } while (lVar27 <= (int)(uVar29 - 2));
              }
            }
            else if (2 < (int)uVar29) {
              pfVar44 = (float *)((long)pdVar40 + lVar41);
              lVar37 = (long)pdVar39 + lVar20;
              pfVar34 = (float *)((long)pdVar36 + lVar23);
              lVar27 = 1;
              do {
                pdVar40 = pdVar40 + uVar42;
                pdVar39 = pdVar39 + uVar26;
                pdVar36 = pdVar36 + uVar32;
                fVar45 = pfVar34[lVar25];
                fVar47 = *(float *)(lVar37 + lVar25 * 4);
                fVar48 = *(float *)((long)pdVar36 + lVar25 * 4);
                fVar50 = *(float *)((long)pdVar39 + lVar25 * 4);
                pfVar44[lVar25] = fVar48 * fVar50 + fVar47 * fVar45;
                *(float *)((long)pdVar40 + lVar25 * 4) = -(fVar45 * fVar50) + fVar47 * fVar48;
                lVar27 = lVar27 + 2;
                pfVar44 = pfVar44 + uVar42 * 2;
                lVar37 = lVar37 + uVar26 * 8;
                pfVar34 = pfVar34 + uVar32 * 2;
              } while (lVar27 <= (int)(uVar29 - 2));
            }
            lVar25 = -(long)(int)(uVar2 - 1);
            if (iVar24 != 1) {
              lVar25 = 0;
            }
            pdVar40 = (double *)(pfVar3 + lVar25);
            pdVar39 = (double *)(pfVar4 + lVar25);
            pdVar36 = (double *)(pfVar5 + lVar25);
            bVar16 = iVar24 == 0;
            iVar24 = iVar24 + 1;
          } while (bVar16 && uVar10 == 0);
        }
        if (uVar29 != 0) {
          uVar26 = (ulong)(uVar9 == 0);
          bVar12 = 0;
          if (uVar9 == 0) {
            bVar12 = bVar30;
          }
          lVar43 = (long)iVar14;
          do {
            if ((bVar12 != 0) &&
               (*(float *)pdVar40 = *(float *)pdVar36 * *(float *)pdVar39, uVar10 == 0)) {
              *(float *)((long)pdVar40 + lVar43 * 4) =
                   *(float *)((long)pdVar36 + lVar43 * 4) * *(float *)((long)pdVar39 + lVar43 * 4);
            }
            if ((param_5 & 1) == 0) {
              lVar25 = uVar26 << 2;
              uVar32 = uVar26;
              if ((int)(uint)bVar19 < iVar14) {
                do {
                  fVar47 = *(float *)((long)pdVar39 + lVar25);
                  fVar48 = ((float *)((long)pdVar39 + lVar25))[1];
                  uVar51 = *(undefined8 *)((long)pdVar36 + lVar25);
                  fVar45 = (float)uVar51;
                  *(ulong *)((long)pdVar40 + lVar25) =
                       CONCAT44(fVar45 * fVar48 + (float)((ulong)uVar51 >> 0x20) * fVar47,
                                -*(float *)((long)pdVar36 + lVar25 + 4) * fVar48 + fVar45 * fVar47);
                  uVar32 = uVar32 + 2;
                  lVar25 = lVar25 + 8;
                } while ((long)uVar32 < lVar43);
              }
            }
            else {
              lVar25 = uVar26 << 2;
              uVar32 = uVar26;
              if ((int)(uint)bVar19 < iVar14) {
                do {
                  fVar48 = *(float *)((long)pdVar39 + lVar25);
                  fVar50 = ((float *)((long)pdVar39 + lVar25))[1];
                  fVar45 = (float)*(undefined8 *)((long)pdVar36 + lVar25);
                  fVar47 = (float)((ulong)*(undefined8 *)((long)pdVar36 + lVar25) >> 0x20);
                  *(ulong *)((long)pdVar40 + lVar25) =
                       CONCAT44(-fVar45 * fVar50 + fVar47 * fVar48,fVar47 * fVar50 + fVar45 * fVar48
                               );
                  uVar32 = uVar32 + 2;
                  lVar25 = lVar25 + 8;
                } while ((long)uVar32 < lVar43);
              }
            }
            pdVar36 = (double *)((long)pdVar36 + lVar23);
            pdVar39 = (double *)((long)pdVar39 + lVar20);
            pdVar40 = (double *)((long)pdVar40 + lVar41);
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
        }
      }
      else {
        uVar32 = uStack_80 >> 3;
        uVar26 = uStack_e0 >> 3;
        uVar42 = uStack_140 >> 3;
        pdVar36 = pdStack_c0;
        pdVar39 = pdStack_120;
        pdVar40 = pdStack_180;
        if (bVar11 != 0) {
          lVar20 = (long)(int)(uVar29 - 1);
          iVar24 = 0;
          do {
            lVar23 = (long)(int)(uVar2 - 1);
            if (iVar24 != 1) {
              lVar23 = 0;
            }
            pdVar8 = pdVar40 + lVar23;
            pdVar6 = pdVar39 + lVar23;
            pdVar7 = pdVar36 + lVar23;
            *pdVar8 = *pdVar7 * *pdVar6;
            if ((uVar29 & 1) == 0) {
              pdVar8[uVar42 * lVar20] = pdVar7[uVar32 * lVar20] * pdVar6[uVar26 * lVar20];
            }
            if ((param_5 & 1) == 0) {
              if (2 < (int)uVar29) {
                pdVar33 = pdVar40 + uVar42;
                pdVar38 = pdVar39 + uVar26;
                pdVar35 = pdVar36 + uVar32;
                lVar41 = 1;
                do {
                  pdVar36 = pdVar36 + uVar32 * 2;
                  pdVar39 = pdVar39 + uVar26 * 2;
                  pdVar40 = pdVar40 + uVar42 * 2;
                  dVar46 = pdVar35[lVar23];
                  dVar15 = pdVar38[lVar23];
                  dVar49 = pdVar36[lVar23];
                  dVar52 = pdVar39[lVar23];
                  pdVar33[lVar23] = -(dVar49 * dVar52) + dVar15 * dVar46;
                  pdVar40[lVar23] = dVar15 * dVar49 + dVar52 * dVar46;
                  lVar41 = lVar41 + 2;
                  pdVar33 = pdVar33 + uVar42 * 2;
                  pdVar38 = pdVar38 + uVar26 * 2;
                  pdVar35 = pdVar35 + uVar32 * 2;
                } while (lVar41 <= (int)(uVar29 - 2));
              }
            }
            else if (2 < (int)uVar29) {
              pdVar33 = pdVar40 + uVar42;
              pdVar38 = pdVar39 + uVar26;
              pdVar35 = pdVar36 + uVar32;
              lVar41 = 1;
              do {
                pdVar36 = pdVar36 + uVar32 * 2;
                pdVar39 = pdVar39 + uVar26 * 2;
                pdVar40 = pdVar40 + uVar42 * 2;
                dVar46 = pdVar35[lVar23];
                dVar15 = pdVar38[lVar23];
                dVar49 = pdVar36[lVar23];
                dVar52 = pdVar39[lVar23];
                pdVar33[lVar23] = dVar49 * dVar52 + dVar15 * dVar46;
                pdVar40[lVar23] = -(dVar46 * dVar52) + dVar15 * dVar49;
                lVar41 = lVar41 + 2;
                pdVar33 = pdVar33 + uVar42 * 2;
                pdVar38 = pdVar38 + uVar26 * 2;
                pdVar35 = pdVar35 + uVar32 * 2;
              } while (lVar41 <= (int)(uVar29 - 2));
            }
            lVar23 = -(long)(int)(uVar2 - 1);
            if (iVar24 != 1) {
              lVar23 = 0;
            }
            pdVar40 = pdVar8 + lVar23;
            pdVar39 = pdVar6 + lVar23;
            pdVar36 = pdVar7 + lVar23;
            bVar16 = iVar24 == 0;
            iVar24 = iVar24 + 1;
          } while (bVar16 && uVar10 == 0);
        }
        if (uVar29 != 0) {
          uVar31 = (ulong)(uVar9 == 0);
          bVar12 = 0;
          if (uVar9 == 0) {
            bVar12 = bVar30;
          }
          lVar20 = (long)iVar14;
          do {
            if ((bVar12 != 0) && (*pdVar40 = *pdVar36 * *pdVar39, uVar10 == 0)) {
              pdVar40[lVar20] = pdVar36[lVar20] * pdVar39[lVar20];
            }
            if ((param_5 & 1) == 0) {
              lVar23 = uVar31 << 3;
              uVar28 = uVar31;
              if ((int)(uint)bVar19 < iVar14) {
                do {
                  pdVar8 = (double *)((long)pdVar36 + lVar23);
                  dVar46 = *(double *)((long)pdVar39 + lVar23);
                  dVar15 = ((double *)((long)pdVar39 + lVar23))[1];
                  dVar49 = pdVar8[1];
                  dVar52 = *pdVar8;
                  ((double *)((long)pdVar40 + lVar23))[1] = dVar52 * dVar15 + pdVar8[1] * dVar46;
                  *(double *)((long)pdVar40 + lVar23) = -dVar49 * dVar15 + dVar52 * dVar46;
                  uVar28 = uVar28 + 2;
                  lVar23 = lVar23 + 0x10;
                } while ((long)uVar28 < lVar20);
              }
            }
            else {
              lVar23 = uVar31 << 3;
              uVar28 = uVar31;
              if ((int)(uint)bVar19 < iVar14) {
                do {
                  dVar46 = *(double *)((long)pdVar39 + lVar23);
                  dVar15 = ((double *)((long)pdVar39 + lVar23))[1];
                  dVar52 = ((double *)((long)pdVar36 + lVar23))[1];
                  dVar49 = *(double *)((long)pdVar36 + lVar23);
                  ((double *)((long)pdVar40 + lVar23))[1] = -dVar49 * dVar15 + dVar52 * dVar46;
                  *(double *)((long)pdVar40 + lVar23) = dVar52 * dVar15 + dVar49 * dVar46;
                  uVar28 = uVar28 + 2;
                  lVar23 = lVar23 + 0x10;
                } while ((long)uVar28 < lVar20);
              }
            }
            pdVar36 = pdVar36 + uVar32;
            pdVar39 = pdVar39 + uVar26;
            pdVar40 = pdVar40 + uVar42;
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
        }
      }
      if (uStack_158 != 0) {
        piVar1 = (int *)(uStack_158 + 0x14);
        do {
          iVar14 = *piVar1;
          cVar13 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = iVar14 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (iVar14 + -1 == 0) {
          func_0x000109a848d4(&uStack_190);
        }
      }
      uStack_158 = 0;
      uStack_178 = 0;
      pdStack_180 = (double *)0x0;
      uStack_168 = 0;
      uStack_170 = 0;
      if (0 < uStack_190._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)(uStack_150 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_190._4_4_);
      }
      if (puStack_148 != &uStack_140 && puStack_148 != (ulong *)0x0) {
        _free(puStack_148[-1]);
      }
      if (uStack_f8 != 0) {
        piVar1 = (int *)(uStack_f8 + 0x14);
        do {
          iVar14 = *piVar1;
          cVar13 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = iVar14 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (iVar14 + -1 == 0) {
          func_0x000109a848d4(&uStack_130);
        }
      }
      uStack_f8 = 0;
      uStack_118 = 0;
      pdStack_120 = (double *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      if (0 < uStack_130._4_4_) {
        lVar20 = 0;
        do {
          piStack_f0[lVar20] = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_130._4_4_);
      }
      if (puStack_e8 != &uStack_e0 && puStack_e8 != (ulong *)0x0) {
        _free(puStack_e8[-1]);
      }
      if (uStack_98 != 0) {
        piVar1 = (int *)(uStack_98 + 0x14);
        do {
          iVar14 = *piVar1;
          cVar13 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = iVar14 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (iVar14 + -1 == 0) {
          func_0x000109a848d4(&uStack_d0);
        }
      }
      uStack_98 = 0;
      uStack_b8 = 0;
      pdStack_c0 = (double *)0x0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      if (0 < uStack_d0._4_4_) {
        lVar20 = 0;
        do {
          piStack_90[lVar20] = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_d0._4_4_);
      }
      if (puStack_88 != &uStack_80 && puStack_88 != (ulong *)0x0) {
        _free(puStack_88[-1]);
      }
      return;
    }
    puVar21 = (undefined4 *)0x54;
    func_0x000107c2ae8c();
    *puVar21 = 1;
    uStack_190 = puVar21 + 1;
    uStack_188 = 0x4c;
    *(undefined8 *)(puVar21 + 7) = 0x335f5643203d3d20;
    *(undefined8 *)(puVar21 + 5) = 0x65707974207c7c20;
    *(undefined8 *)(puVar21 + 0xb) = 0x203d3d2065707974;
    *(undefined8 *)(puVar21 + 9) = 0x207c7c2032434632;
    *(undefined8 *)(puVar21 + 0xf) = 0x65707974207c7c20;
    *(undefined8 *)(puVar21 + 0xd) = 0x31434634365f5643;
    *(undefined8 *)(puVar21 + 0x12) = 0x32434634365f5643;
    *(undefined8 *)(puVar21 + 0x10) = 0x203d3d2065707974;
    *(undefined1 *)(puVar21 + 0x14) = 0;
    *(undefined8 *)(puVar21 + 3) = 0x31434632335f5643;
    *(undefined8 *)(puVar21 + 1) = 0x203d3d2065707974;
    FUN_109ac3188(0xffffff29,&uStack_190,&UNK_10f596ca1,&UNK_10f596b35,0xb8d);
  }
  else {
    puVar21 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *puVar21 = 1;
    uStack_190 = puVar21 + 1;
    uStack_188 = 0x31;
    *(undefined8 *)(puVar21 + 3) = 0x7079742e42637273;
    *(undefined8 *)(puVar21 + 1) = 0x203d3d2065707974;
    *(undefined2 *)(puVar21 + 0xd) = 0x29;
    *(undefined8 *)(puVar21 + 7) = 0x657a69732e416372;
    *(undefined8 *)(puVar21 + 5) = 0x7320262620292865;
    *(undefined8 *)(puVar21 + 0xb) = 0x28657a69732e4263;
    *(undefined8 *)(puVar21 + 9) = 0x7273203d3d202928;
    FUN_109ac3188(0xffffff29,&uStack_190,&UNK_10f596ca1,&UNK_10f596b35,0xb8c);
  }
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x109a53b50);
  (*pcVar18)();
}



/* Entry: 109a53bd0; end: 109a54a6b;  */

void FUN_109a53bd0(double param_1,float *param_2,float *param_3,uint param_4,uint param_5,
                  uint *param_6,int *param_7,undefined8 *param_8,ulong param_9,undefined8 *param_10,
                  uint param_11)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  float *pfVar16;
  long lVar17;
  float *pfVar18;
  ulong uVar19;
  float *pfVar20;
  float *pfVar21;
  undefined8 *puVar22;
  float *pfVar23;
  long lVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  ulong uVar29;
  uint uVar30;
  float *pfVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  int iVar41;
  int iVar42;
  long lVar43;
  undefined8 *puVar44;
  undefined8 uVar45;
  undefined8 *puVar46;
  int iVar47;
  ulong uVar48;
  ulong uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  ulong uStack_108;
  float *pfStack_e8;
  undefined8 *puStack_e0;
  float *pfStack_d8;
  float *pfStack_d0;
  long lStack_c8;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  
  uVar30 = (uint)param_9;
  if (uVar30 == param_4) {
    uVar34 = 1;
  }
  else {
    uVar32 = 0;
    if (param_4 != 0) {
      uVar32 = (int)uVar30 / (int)param_4;
    }
    uVar6 = 2;
    if (uVar30 != param_4 * 2) {
      uVar6 = uVar32;
    }
    uVar34 = (ulong)uVar6;
  }
  uVar32 = (uint)uVar34;
  if (param_3 == param_2) {
    if ((param_11 >> 8 & 1) == 0) {
      if (*param_6 != param_6[(long)(int)param_5 + -1]) {
        puVar14 = (undefined4 *)0x20;
        func_0x000107c2ae8c();
        *puVar14 = 1;
        puStack_88 = puVar14 + 1;
        uStack_80 = 0x1b;
        *(undefined1 *)((long)puVar14 + 0x1f) = 0;
        *(undefined8 *)(puVar14 + 3) = 0x6166203d3d205d30;
        *(undefined8 *)(puVar14 + 1) = 0x5b73726f74636166;
        *(undefined8 *)((long)puVar14 + 0x17) = 0x5d312d666e5b7372;
        *(undefined8 *)((long)puVar14 + 0xf) = 0x6f74636166203d3d;
        FUN_109ac3188(0xffffff29,&puStack_88,&UNK_10f596cca,&UNK_10f596b35,0x266);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x109a54a40);
        (*pcVar9)();
      }
      if (param_5 == 1) {
        if (((param_4 & 3) == 0) && (0 < (int)param_4 >> 1)) {
          lVar43 = 0;
          lVar36 = (long)((ulong)param_4 << 0x20) >> 0x21;
          do {
            lVar35 = (long)*param_7;
            uVar45 = *(undefined8 *)(param_3 + lVar43 * 2 + 2);
            pfVar23 = param_3 + (long)((int)param_4 >> 1) * 2 + lVar35 * 2;
            *(undefined8 *)(param_3 + lVar43 * 2 + 2) = *(undefined8 *)pfVar23;
            *(undefined8 *)pfVar23 = uVar45;
            if (lVar43 < lVar35) {
              uVar45 = *(undefined8 *)(param_3 + lVar43 * 2);
              *(undefined8 *)(param_3 + lVar43 * 2) = *(undefined8 *)(param_3 + lVar35 * 2);
              *(undefined8 *)(param_3 + lVar35 * 2) = uVar45;
              uVar45 = *(undefined8 *)(param_3 + lVar36 * 2 + lVar43 * 2 + 2);
              *(undefined8 *)(param_3 + lVar36 * 2 + lVar43 * 2 + 2) = *(undefined8 *)(pfVar23 + 2);
              *(undefined8 *)(pfVar23 + 2) = uVar45;
            }
            lVar43 = lVar43 + 2;
            param_7 = (int *)((long)param_7 +
                             (-(ulong)((uVar32 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                             (ulong)(uVar32 << 1) << 2));
          } while (lVar43 < lVar36);
        }
      }
      else if (0 < (int)param_4) {
        uVar37 = 0;
        do {
          lVar43 = (long)*param_7;
          if ((long)uVar37 < lVar43) {
            uVar45 = *(undefined8 *)(param_3 + uVar37 * 2);
            *(undefined8 *)(param_3 + uVar37 * 2) = *(undefined8 *)(param_3 + lVar43 * 2);
            *(undefined8 *)(param_3 + lVar43 * 2) = uVar45;
          }
          uVar37 = uVar37 + 1;
          param_7 = (int *)((long)param_7 + (-(uVar34 >> 0x1f) & 0xfffffffc00000000 | uVar34 << 2));
        } while (param_4 != uVar37);
      }
    }
    if ((param_11 & 1) != 0) {
      if ((int)param_4 < 2) {
        uVar34 = 0;
      }
      else {
        uVar34 = 0;
        pfVar23 = param_3 + 3;
        do {
          pfVar23[-2] = -pfVar23[-2];
          *pfVar23 = -*pfVar23;
          uVar34 = uVar34 + 2;
          pfVar23 = pfVar23 + 4;
        } while (uVar34 <= param_4 - 2);
      }
      if ((int)uVar34 < (int)param_4) {
        param_3[(ulong)param_4 * 2 + -1] = -param_3[(ulong)param_4 * 2 + -1];
      }
    }
  }
  else if ((param_11 & 1) == 0) {
    if ((int)param_4 < 2) {
      uVar34 = 0;
    }
    else {
      uVar34 = 0;
      do {
        iVar42 = param_7[(int)uVar32];
        *(undefined8 *)(param_3 + uVar34 * 2) = *(undefined8 *)(param_2 + (long)*param_7 * 2);
        *(undefined8 *)(param_3 + uVar34 * 2 + 2) = *(undefined8 *)(param_2 + (long)iVar42 * 2);
        uVar34 = uVar34 + 2;
        param_7 = (int *)((long)param_7 +
                         (-(ulong)((uVar32 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                         (ulong)(uVar32 << 1) << 2));
      } while (uVar34 <= param_4 - 2);
    }
    if ((int)uVar34 < (int)param_4) {
      *(undefined8 *)(param_3 + (ulong)(param_4 - 1) * 2) =
           *(undefined8 *)(param_2 + (ulong)(param_4 - 1) * 2);
    }
  }
  else {
    if ((int)param_4 < 2) {
      uVar34 = 0;
    }
    else {
      uVar34 = 0;
      pfVar23 = param_3 + 2;
      do {
        iVar42 = param_7[(int)uVar32];
        fVar50 = (param_2 + (long)*param_7 * 2)[1];
        pfVar23[-2] = param_2[(long)*param_7 * 2];
        pfVar23[-1] = -fVar50;
        fVar50 = (param_2 + (long)iVar42 * 2)[1];
        *pfVar23 = param_2[(long)iVar42 * 2];
        pfVar23[1] = -fVar50;
        uVar34 = uVar34 + 2;
        pfVar23 = pfVar23 + 4;
        param_7 = (int *)((long)param_7 +
                         (-(ulong)((uVar32 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                         (ulong)(uVar32 << 1) << 2));
      } while (uVar34 <= param_4 - 2);
    }
    if ((int)uVar34 < (int)param_4) {
      fVar50 = param_2[(ulong)param_4 * 2 + -1];
      param_3[(uVar34 & 0xffffffff) * 2] = param_2[(ulong)param_4 * 2 + -2];
      (param_3 + (uVar34 & 0xffffffff) * 2)[1] = -fVar50;
    }
  }
  uVar32 = *param_6;
  if ((uVar32 & 1) != 0) {
    uVar34 = 1;
    uStack_108 = param_9;
    goto LAB_109a541fc;
  }
  if ((int)uVar32 < 4) {
LAB_109a53ebc:
    uVar34 = 1;
  }
  else {
    FUN_109ac28d8();
    uVar32 = *param_6;
    if ((int)uVar32 < 4) goto LAB_109a53ebc;
    uVar37 = 1;
    uVar19 = 4;
    do {
      uVar34 = uVar19;
      iVar41 = (int)param_9;
      iVar42 = iVar41 + 3;
      if (-1 < iVar41) {
        iVar42 = iVar41;
      }
      uVar6 = iVar42 >> 2;
      param_9 = (ulong)uVar6;
      if (0 < (int)param_4) {
        lVar35 = 0;
        iVar42 = (int)uVar37;
        uVar19 = -(uVar34 >> 0x1f) & 0xfffffff800000000 | uVar34 << 3;
        pfVar23 = param_3 + (long)iVar42 * 2;
        pfVar25 = param_3 + (long)iVar42 * 4;
        lVar36 = (long)param_3 +
                 (-(uVar37 >> 0x1f) & 0xfffffff800000000 | uVar37 << 3) + (long)iVar42 * 0x10;
        lVar43 = (-(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | param_9 << 1) + (long)(int)uVar6;
        pfVar31 = param_3;
        do {
          pfVar18 = param_3 + lVar35 * 2;
          pfVar12 = pfVar18 + (-(uVar37 >> 0x1f) & 0xfffffffe00000000 | uVar37 << 1) * 2;
          pfVar21 = pfVar12 + (long)iVar42 * 2;
          fVar55 = *pfVar12 + *pfVar21;
          fVar63 = pfVar12[1] + pfVar21[1];
          fVar51 = pfVar12[1] - pfVar21[1];
          fVar50 = *pfVar21 - *pfVar12;
          pfVar20 = pfVar18 + (long)iVar42 * 2;
          fVar61 = *pfVar18 + *pfVar20;
          fVar57 = pfVar18[1] + pfVar20[1];
          fVar52 = *pfVar18 - *pfVar20;
          fVar53 = pfVar18[1] - pfVar20[1];
          *pfVar18 = fVar55 + fVar61;
          pfVar18[1] = fVar63 + fVar57;
          *pfVar12 = fVar61 - fVar55;
          pfVar12[1] = fVar57 - fVar63;
          *pfVar20 = fVar51 + fVar52;
          pfVar20[1] = fVar50 + fVar53;
          *pfVar21 = fVar52 - fVar51;
          pfVar21[1] = fVar53 - fVar50;
          if (1 < iVar42) {
            lVar24 = 0;
            pfVar18 = (float *)((long)param_8 + (long)(int)uVar6 * 0x10 + 4);
            pfVar21 = (float *)((long)param_8 + lVar43 * 8 + 4);
            pfVar12 = (float *)((long)param_8 + (long)(int)uVar6 * 8 + 4);
            do {
              fVar50 = *(float *)((long)pfVar23 + lVar24 + 8);
              fVar51 = *(float *)((long)pfVar23 + lVar24 + 0xc);
              fVar63 = -(fVar51 * *pfVar18) + pfVar18[-1] * fVar50;
              fVar50 = pfVar18[-1] * fVar51 + *pfVar18 * fVar50;
              fVar51 = *(float *)((long)pfVar25 + lVar24 + 8);
              fVar52 = *(float *)((long)pfVar25 + lVar24 + 0xc);
              fVar57 = fVar52 * pfVar12[-1] + *pfVar12 * fVar51;
              fVar51 = -(fVar52 * *pfVar12) + pfVar12[-1] * fVar51;
              lVar17 = lVar36 + lVar24;
              fVar53 = *(float *)(lVar17 + 0xc) * pfVar21[-1] + *pfVar21 * *(float *)(lVar17 + 8);
              fVar52 = -(*(float *)(lVar17 + 0xc) * *pfVar21) + pfVar21[-1] * *(float *)(lVar17 + 8)
              ;
              fVar55 = fVar51 + fVar52;
              fVar61 = fVar57 + fVar53;
              fVar57 = fVar57 - fVar53;
              fVar52 = fVar52 - fVar51;
              fVar53 = *(float *)((long)pfVar31 + lVar24 + 8);
              fVar51 = *(float *)((long)pfVar31 + lVar24 + 0xc);
              fVar58 = fVar63 + fVar53;
              fVar60 = fVar50 + fVar51;
              fVar53 = fVar53 - fVar63;
              fVar51 = fVar51 - fVar50;
              *(float *)((long)pfVar31 + lVar24 + 8) = fVar58 + fVar55;
              *(float *)((long)pfVar31 + lVar24 + 0xc) = fVar60 + fVar61;
              *(float *)((long)pfVar25 + lVar24 + 8) = fVar58 - fVar55;
              *(float *)((long)pfVar25 + lVar24 + 0xc) = fVar60 - fVar61;
              *(float *)((long)pfVar23 + lVar24 + 8) = fVar53 + fVar57;
              *(float *)((long)pfVar23 + lVar24 + 0xc) = fVar52 + fVar51;
              lVar24 = lVar24 + 8;
              *(float *)(lVar17 + 8) = fVar53 - fVar57;
              *(float *)(lVar17 + 0xc) = fVar51 - fVar52;
              pfVar18 = (float *)((long)pfVar18 +
                                 (-(ulong)(uVar6 >> 0x1f) & 0xfffffff000000000 | param_9 << 4));
              pfVar12 = (float *)((long)pfVar12 +
                                 (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | param_9 << 3));
              pfVar21 = pfVar21 + lVar43 * 2;
            } while (uVar37 * 8 + -8 != lVar24);
          }
          lVar35 = lVar35 + (int)uVar34;
          pfVar31 = (float *)((long)pfVar31 + uVar19);
          pfVar23 = (float *)((long)pfVar23 + uVar19);
          pfVar25 = (float *)((long)pfVar25 + uVar19);
          lVar36 = lVar36 + uVar19;
        } while (lVar35 < (int)param_4);
      }
      uVar6 = (int)uVar34 * 4;
      uVar37 = uVar34;
      uVar19 = (ulong)uVar6;
    } while ((int)uVar6 <= (int)uVar32);
  }
  uStack_108 = param_9;
  if ((int)uVar34 < (int)uVar32) {
    uVar37 = uVar34;
    do {
      uVar33 = (uint)uVar37;
      uVar8 = uVar33 * 2;
      uVar34 = (ulong)uVar8;
      uVar6 = (int)param_9 / 2;
      param_9 = (ulong)uVar6;
      if (0 < (int)param_4) {
        lVar43 = 0;
        uVar19 = -(uVar37 >> 0x1f) & 0xfffffff800000000 | uVar37 << 3;
        pfVar23 = param_3;
        do {
          pfVar25 = param_3 + lVar43 * 2;
          pfVar31 = pfVar25 + (long)(int)uVar33 * 2;
          fVar50 = *pfVar25;
          fVar51 = pfVar25[1];
          fVar52 = *pfVar31;
          fVar53 = pfVar31[1];
          *pfVar25 = fVar50 + fVar52;
          pfVar25[1] = fVar51 + fVar53;
          *pfVar31 = fVar50 - fVar52;
          pfVar31[1] = fVar51 - fVar53;
          pfVar25 = (float *)((long)param_8 + (long)(int)uVar6 * 8 + 4);
          lVar36 = uVar37 - 1;
          pfVar31 = pfVar23;
          if (1 < (int)uVar33) {
            do {
              fVar50 = *(float *)((long)pfVar31 + uVar19 + 8);
              fVar51 = *(float *)((long)pfVar31 + uVar19 + 0xc);
              fVar53 = -(fVar51 * *pfVar25) + pfVar25[-1] * fVar50;
              fVar50 = fVar50 * *pfVar25 + pfVar25[-1] * fVar51;
              pfVar18 = pfVar31 + 2;
              fVar51 = *pfVar18;
              fVar52 = pfVar31[3];
              *pfVar18 = fVar51 + fVar53;
              pfVar31[3] = fVar52 + fVar50;
              *(float *)((long)pfVar31 + uVar19 + 8) = fVar51 - fVar53;
              *(float *)((long)pfVar31 + uVar19 + 0xc) = fVar52 - fVar50;
              lVar36 = lVar36 + -1;
              pfVar25 = (float *)((long)pfVar25 +
                                 (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | param_9 << 3));
              pfVar31 = pfVar18;
            } while (lVar36 != 0);
          }
          lVar43 = lVar43 + (int)uVar8;
          pfVar23 = (float *)((long)pfVar23 +
                             (-(ulong)((uVar33 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                             uVar34 << 3));
        } while (lVar43 < (int)param_4);
      }
      uVar37 = uVar34;
      uStack_108 = param_9;
    } while ((int)uVar8 < (int)uVar32);
  }
LAB_109a541fc:
  fVar50 = (float)param_1;
  uVar32 = (uVar32 ^ 0xffffffff) & 1;
  uVar37 = (ulong)uVar32;
  if ((int)uVar32 < (int)param_5) {
    lVar43 = (long)(int)param_4;
    pfVar23 = (float *)((long)param_8 + 4);
    pfVar25 = param_3 + 1;
    pfVar31 = (float *)((long)param_10 + 4);
    do {
      uVar32 = param_6[uVar37];
      iVar42 = (int)uVar34;
      uVar6 = uVar32 * iVar42;
      uVar19 = (ulong)uVar6;
      uVar8 = 0;
      if (uVar32 != 0) {
        uVar8 = (int)uStack_108 / (int)uVar32;
      }
      uStack_108 = (ulong)uVar8;
      if (uVar32 == 3) {
        if (0 < (int)param_4) {
          lVar36 = 0;
          uVar38 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3;
          pfVar18 = param_3 + (long)iVar42 * 4;
          pfVar12 = param_3 + (long)iVar42 * 2;
          pfVar21 = param_3;
          do {
            pfVar20 = param_3 + lVar36 * 2;
            pfVar16 = pfVar20 + (long)iVar42 * 2;
            pfVar27 = pfVar20 + (-(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1) * 2;
            fVar63 = *pfVar16 + *pfVar27;
            fVar61 = pfVar16[1] + pfVar27[1];
            fVar53 = *pfVar20;
            fVar55 = pfVar20[1];
            fVar52 = (pfVar16[1] - pfVar27[1]) * 0.8660254;
            fVar51 = (*pfVar27 - *pfVar16) * 0.8660254;
            *pfVar20 = fVar63 + fVar53;
            pfVar20[1] = fVar61 + fVar55;
            fVar53 = fVar53 + fVar63 * -0.5;
            fVar55 = fVar55 + fVar61 * -0.5;
            *pfVar16 = fVar53 + fVar52;
            pfVar16[1] = fVar51 + fVar55;
            *pfVar27 = fVar53 - fVar52;
            pfVar27[1] = fVar55 - fVar51;
            if (1 < iVar42) {
              lVar35 = 0;
              pfVar16 = pfVar23 + (long)(int)uVar8 * 4;
              pfVar20 = pfVar23 + (long)(int)uVar8 * 2;
              do {
                fVar51 = *(float *)((long)pfVar12 + lVar35 + 8);
                fVar52 = *(float *)((long)pfVar12 + lVar35 + 0xc);
                fVar53 = -(fVar52 * *pfVar20) + pfVar20[-1] * fVar51;
                fVar55 = *(float *)((long)pfVar18 + lVar35 + 8);
                fVar63 = *(float *)((long)pfVar18 + lVar35 + 0xc);
                fVar51 = pfVar20[-1] * fVar52 + *pfVar20 * fVar51;
                fVar52 = -(fVar63 * *pfVar16) + pfVar16[-1] * fVar55;
                fVar55 = pfVar16[-1] * fVar63 + *pfVar16 * fVar55;
                fVar57 = fVar53 + fVar52;
                fVar58 = fVar51 + fVar55;
                fVar51 = (fVar51 - fVar55) * 0.8660254;
                fVar55 = *(float *)((long)pfVar21 + lVar35 + 8);
                fVar63 = *(float *)((long)pfVar21 + lVar35 + 0xc);
                fVar52 = (fVar52 - fVar53) * 0.8660254;
                fVar53 = fVar55 + fVar57 * -0.5;
                fVar61 = fVar63 + fVar58 * -0.5;
                *(float *)((long)pfVar21 + lVar35 + 8) = fVar55 + fVar57;
                *(float *)((long)pfVar21 + lVar35 + 0xc) = fVar63 + fVar58;
                *(float *)((long)pfVar12 + lVar35 + 8) = fVar51 + fVar53;
                *(float *)((long)pfVar12 + lVar35 + 0xc) = fVar61 + fVar52;
                *(float *)((long)pfVar18 + lVar35 + 8) = fVar53 - fVar51;
                *(float *)((long)pfVar18 + lVar35 + 0xc) = fVar61 - fVar52;
                lVar35 = lVar35 + 8;
                pfVar20 = (float *)((long)pfVar20 +
                                   (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uStack_108 << 3))
                ;
                pfVar16 = (float *)((long)pfVar16 +
                                   (-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | uStack_108 << 4))
                ;
              } while (uVar34 * 8 + -8 != lVar35);
            }
            lVar36 = lVar36 + (int)uVar6;
            pfVar21 = (float *)((long)pfVar21 + uVar38);
            pfVar18 = (float *)((long)pfVar18 + uVar38);
            pfVar12 = (float *)((long)pfVar12 + uVar38);
          } while (lVar36 < lVar43);
        }
      }
      else if (uVar32 == 5) {
        if (0 < (int)param_4) {
          lVar35 = 0;
          iVar41 = iVar42 << 1;
          uVar38 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3;
          pfVar18 = pfVar25 + (long)iVar42 * 2;
          pfVar12 = pfVar25 + (long)iVar41 * 2;
          lVar36 = (long)pfVar25 +
                   (-(uVar34 >> 0x1f) & 0xfffffff800000000 | uVar34 << 3) + (long)iVar41 * 8;
          pfVar21 = pfVar25 + (long)iVar41 * 4;
          pfVar20 = pfVar25;
          do {
            if (0 < iVar42) {
              lVar24 = 0;
              pfVar26 = pfVar23;
              pfVar28 = pfVar23;
              pfVar27 = pfVar23;
              pfVar16 = pfVar23;
              do {
                pfVar1 = (float *)((long)pfVar20 + lVar24);
                pfVar2 = (float *)((long)pfVar12 + lVar24);
                pfVar3 = (float *)((long)pfVar21 + lVar24);
                pfVar4 = (float *)((long)pfVar18 + lVar24);
                fVar57 = -(*pfVar4 * *pfVar16) + pfVar16[-1] * pfVar4[-1];
                fVar51 = pfVar16[-1] * *pfVar4 + *pfVar16 * pfVar4[-1];
                fVar53 = -(*pfVar3 * *pfVar27) + pfVar27[-1] * pfVar3[-1];
                fVar52 = pfVar27[-1] * *pfVar3 + *pfVar27 * pfVar3[-1];
                fVar55 = fVar57 + fVar53;
                pfVar5 = (float *)(lVar36 + lVar24);
                fVar58 = fVar51 + fVar52;
                fVar64 = -(*pfVar5 * *pfVar28) + pfVar28[-1] * pfVar5[-1];
                fVar57 = fVar57 - fVar53;
                fVar53 = pfVar28[-1] * *pfVar5 + *pfVar28 * pfVar5[-1];
                fVar51 = fVar51 - fVar52;
                fVar63 = -(*pfVar2 * *pfVar26) + pfVar26[-1] * pfVar2[-1];
                fVar52 = pfVar26[-1] * *pfVar2 + *pfVar26 * pfVar2[-1];
                fVar60 = fVar64 + fVar63;
                fVar62 = fVar53 + fVar52;
                fVar64 = fVar64 - fVar63;
                fVar53 = fVar53 - fVar52;
                fVar65 = fVar55 + fVar60;
                fVar66 = fVar58 + fVar62;
                fVar63 = pfVar1[-1] + fVar65 * -0.25;
                fVar61 = *pfVar1 + fVar66 * -0.25;
                fVar55 = (fVar55 - fVar60) * 0.559017;
                fVar58 = (fVar58 - fVar62) * 0.559017;
                fVar52 = (fVar51 + fVar53) * 0.95105654;
                fVar60 = (fVar57 + fVar64) * -0.95105654;
                pfVar1[-1] = pfVar1[-1] + fVar65;
                *pfVar1 = *pfVar1 + fVar66;
                fVar51 = fVar52 - fVar51 * 0.36327127;
                fVar57 = fVar57 * 0.36327127 + fVar60;
                fVar52 = fVar52 - fVar53 * 1.5388417;
                fVar60 = fVar64 * 1.5388417 + fVar60;
                fVar53 = fVar63 + fVar55;
                fVar62 = fVar61 + fVar58;
                fVar63 = fVar63 - fVar55;
                fVar61 = fVar61 - fVar58;
                pfVar4[-1] = fVar52 + fVar53;
                *pfVar4 = fVar62 + fVar60;
                pfVar3[-1] = fVar53 - fVar52;
                *pfVar3 = fVar62 - fVar60;
                lVar24 = lVar24 + 8;
                pfVar16 = (float *)((long)pfVar16 +
                                   (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uStack_108 << 3))
                ;
                pfVar2[-1] = fVar51 + fVar63;
                *pfVar2 = fVar61 + fVar57;
                pfVar5[-1] = fVar63 - fVar51;
                *pfVar5 = fVar61 - fVar57;
                pfVar27 = (float *)((long)pfVar27 +
                                   (-(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 | uStack_108 << 5))
                ;
                pfVar28 = pfVar28 + ((-(ulong)(uVar8 >> 0x1f) & 0xfffffffe00000000 | uStack_108 << 1
                                     ) + (long)(int)uVar8) * 2;
                pfVar26 = (float *)((long)pfVar26 +
                                   (-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | uStack_108 << 4))
                ;
              } while (uVar34 << 3 != lVar24);
            }
            lVar35 = lVar35 + (int)uVar6;
            pfVar20 = (float *)((long)pfVar20 + uVar38);
            pfVar18 = (float *)((long)pfVar18 + uVar38);
            pfVar12 = (float *)((long)pfVar12 + uVar38);
            lVar36 = lVar36 + uVar38;
            pfVar21 = (float *)((long)pfVar21 + uVar38);
          } while (lVar35 < lVar43);
        }
      }
      else if (0 < (int)param_4) {
        iVar41 = uVar32 - 1;
        lVar36 = (long)((ulong)(uint)(iVar41 - (iVar41 >> 0x1f)) << 0x20) >> 0x21;
        uVar33 = iVar41 / 2;
        if ((int)uVar33 < 2) {
          uVar33 = 1;
        }
        uVar38 = (ulong)uVar33;
        uVar48 = -(uVar34 >> 0x1f) & 0xfffffff800000000 | uVar34 << 3;
        uVar39 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3;
        lVar35 = uVar39 + (long)iVar42 * -8;
        pfStack_d0 = (float *)((long)pfVar25 + lVar35);
        pfStack_d8 = pfVar25 + (long)iVar42 * 2;
        iVar41 = 0;
        if (uVar32 != 0) {
          iVar41 = (int)uVar30 / (int)uVar32;
        }
        lStack_c8 = 0;
        uVar40 = -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uStack_108 << 3;
        puStack_e0 = (undefined8 *)((long)param_3 + lVar35);
        pfStack_e8 = param_3 + (long)iVar42 * 2;
        do {
          if (0 < iVar42) {
            lVar35 = 0;
            lVar24 = 0;
            uVar49 = 0;
            puVar22 = param_8;
            puVar44 = puStack_e0;
            puVar46 = param_8;
            pfVar21 = pfStack_e8;
            pfVar12 = pfStack_d0;
            pfVar18 = pfStack_d8;
            do {
              pfVar20 = param_3 + lStack_c8 * 2 + uVar49 * 2;
              uVar54 = *(undefined8 *)pfVar20;
              uVar45 = uVar54;
              if (uVar49 == 0) {
                puVar13 = puVar44;
                pfVar16 = pfVar31 + lVar36 * 2;
                pfVar27 = pfVar21;
                uVar29 = uVar38;
                pfVar28 = pfVar31;
                if (2 < (int)uVar32) {
                  do {
                    fVar51 = (float)*(undefined8 *)pfVar27;
                    fVar63 = (float)*puVar13;
                    fVar53 = (float)((ulong)*(undefined8 *)pfVar27 >> 0x20);
                    fVar61 = (float)((ulong)*puVar13 >> 0x20);
                    fVar52 = fVar51 + fVar63;
                    fVar55 = fVar53 + fVar61;
                    uVar45 = CONCAT44((float)((ulong)uVar45 >> 0x20) + fVar55,(float)uVar45 + fVar52
                                     );
                    *(ulong *)(pfVar28 + -1) = CONCAT44(fVar53 - fVar61,fVar52);
                    *(ulong *)(pfVar16 + -1) = CONCAT44(fVar55,fVar51 - fVar63);
                    uVar29 = uVar29 - 1;
                    puVar13 = puVar13 + -(long)iVar42;
                    pfVar16 = pfVar16 + 2;
                    pfVar27 = (float *)((long)pfVar27 + uVar48);
                    pfVar28 = pfVar28 + 2;
                  } while (uVar29 != 0);
                  goto LAB_109a547f0;
                }
              }
              else {
                puVar13 = puVar22;
                puVar15 = puVar46;
                pfVar16 = pfVar31;
                pfVar27 = pfVar31 + lVar36 * 2;
                pfVar28 = pfVar18;
                pfVar26 = pfVar12;
                uVar29 = uVar38;
                if (2 < (int)uVar32) {
                  do {
                    fVar51 = (float)*puVar15;
                    fVar52 = (float)((ulong)*puVar15 >> 0x20);
                    uVar56 = NEON_rev64(CONCAT44(fVar52 * -*pfVar28,fVar51 * *pfVar28),4);
                    fVar53 = (float)uVar56 + fVar51 * pfVar28[-1];
                    fVar55 = (float)((ulong)uVar56 >> 0x20) + fVar52 * pfVar28[-1];
                    fVar51 = (float)*puVar13;
                    fVar52 = (float)((ulong)*puVar13 >> 0x20);
                    uVar56 = NEON_rev64(CONCAT44(fVar52 * -*pfVar26,fVar51 * *pfVar26),4);
                    fVar63 = (float)uVar56 + fVar51 * pfVar26[-1];
                    fVar61 = (float)((ulong)uVar56 >> 0x20) + fVar52 * pfVar26[-1];
                    fVar51 = fVar53 + fVar63;
                    fVar52 = fVar55 + fVar61;
                    *pfVar16 = fVar55 - fVar61;
                    pfVar16[-1] = fVar51;
                    pfVar27[-1] = fVar53 - fVar63;
                    *pfVar27 = fVar52;
                    uVar45 = CONCAT44((float)((ulong)uVar45 >> 0x20) + fVar52,(float)uVar45 + fVar51
                                     );
                    uVar29 = uVar29 - 1;
                    puVar13 = (undefined8 *)((long)puVar13 + lVar24);
                    puVar15 = (undefined8 *)((long)puVar15 + lVar35);
                    pfVar16 = pfVar16 + 2;
                    pfVar27 = pfVar27 + 2;
                    pfVar28 = (float *)((long)pfVar28 + uVar48);
                    pfVar26 = pfVar26 + (long)iVar42 * -2;
                  } while (uVar29 != 0);
LAB_109a547f0:
                  *(undefined8 *)pfVar20 = uVar45;
                  uVar11 = 1;
                  lVar17 = (long)iVar42;
                  do {
                    puVar13 = param_10;
                    uVar29 = uVar38;
                    uVar45 = uVar54;
                    uVar56 = uVar54;
                    iVar47 = uVar11 * iVar41;
                    do {
                      uVar59 = NEON_ext(*puVar13,puVar13[lVar36],4,1);
                      fVar51 = *(float *)(param_8 + iVar47);
                      fVar55 = *(float *)((long)(param_8 + iVar47) + 4);
                      fVar52 = (float)*puVar13 * fVar51;
                      fVar51 = (float)((ulong)puVar13[lVar36] >> 0x20) * fVar51;
                      fVar53 = (float)uVar59 * fVar55;
                      fVar55 = (float)((ulong)uVar59 >> 0x20) * fVar55;
                      uVar45 = CONCAT44((float)((ulong)uVar45 >> 0x20) + (fVar51 - fVar55),
                                        (float)uVar45 + fVar52 + fVar53);
                      uVar56 = CONCAT44((float)((ulong)uVar56 >> 0x20) + fVar51 + fVar55,
                                        (float)uVar56 + (fVar52 - fVar53));
                      iVar47 = iVar47 + uVar11 * iVar41;
                      uVar7 = 0;
                      if ((int)uVar30 <= iVar47) {
                        uVar7 = uVar30;
                      }
                      iVar47 = iVar47 - uVar7;
                      uVar29 = uVar29 - 1;
                      puVar13 = puVar13 + 1;
                    } while (uVar29 != 0);
                    *(undefined8 *)(pfVar20 + lVar17 * 2) = uVar56;
                    *(undefined8 *)(pfVar20 + ((int)uVar6 - lVar17) * 2) = uVar45;
                    lVar17 = lVar17 + iVar42;
                    bVar10 = uVar11 != uVar33;
                    uVar11 = uVar11 + 1;
                  } while (bVar10);
                }
              }
              uVar49 = uVar49 + 1;
              pfVar18 = pfVar18 + 2;
              pfVar12 = pfVar12 + 2;
              puVar22 = (undefined8 *)
                        ((long)puVar22 + ((long)(int)uVar32 * 8 + -8) * (long)(int)uVar8);
              lVar24 = lVar24 - uVar40;
              puVar46 = (undefined8 *)((long)puVar46 + uVar40);
              lVar35 = lVar35 + uVar40;
              pfVar21 = pfVar21 + 2;
              puVar44 = puVar44 + 1;
            } while (uVar49 != uVar34);
          }
          lStack_c8 = lStack_c8 + (int)uVar6;
          pfStack_d8 = (float *)((long)pfStack_d8 + uVar39);
          pfStack_d0 = (float *)((long)pfStack_d0 + uVar39);
          pfStack_e8 = (float *)((long)pfStack_e8 + uVar39);
          puStack_e0 = (undefined8 *)((long)puStack_e0 + uVar39);
        } while (lStack_c8 < lVar43);
      }
      uVar37 = uVar37 + 1;
      uVar34 = uVar19;
    } while (uVar37 != param_5);
  }
  if (fVar50 == 1.0) {
    if ((param_11 & 1) != 0) {
      if ((int)param_4 < 2) {
        uVar34 = 0;
      }
      else {
        uVar34 = 0;
        pfVar23 = param_3 + 3;
        do {
          pfVar23[-2] = -pfVar23[-2];
          *pfVar23 = -*pfVar23;
          uVar34 = uVar34 + 2;
          pfVar23 = pfVar23 + 4;
        } while (uVar34 <= param_4 - 2);
      }
      if ((int)uVar34 < (int)param_4) {
        param_3[(ulong)param_4 * 2 + -1] = -param_3[(ulong)param_4 * 2 + -1];
      }
    }
  }
  else if (0 < (int)param_4) {
    fVar51 = fVar50;
    if ((param_11 & 1) != 0) {
      fVar51 = -fVar50;
    }
    uVar34 = (ulong)param_4;
    do {
      *(ulong *)param_3 =
           CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar51,
                    (float)*(undefined8 *)param_3 * fVar50);
      uVar34 = uVar34 - 1;
      param_3 = param_3 + 2;
    } while (uVar34 != 0);
  }
  return;
}



/* Entry: 109a54a6c; end: 109a55913;  */

void FUN_109a54a6c(double param_1,double *param_2,double *param_3,uint param_4,uint param_5,
                  uint *param_6,int *param_7,double *param_8,ulong param_9,
                  undefined1 (*param_10) [16],uint param_11)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  bool bVar7;
  double *pdVar8;
  double *pdVar9;
  undefined4 *puVar10;
  uint uVar11;
  double *pdVar12;
  ulong uVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  long lVar18;
  double *pdVar19;
  double *pdVar20;
  undefined1 (*pauVar21) [16];
  double *pdVar22;
  double *pdVar23;
  ulong uVar24;
  uint uVar25;
  double *pdVar26;
  double *pdVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  int iVar37;
  int iVar38;
  double *pdVar39;
  long lVar40;
  double *pdVar41;
  int iVar42;
  double *pdVar43;
  long lVar44;
  ulong uVar45;
  ulong uVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  ulong uStack_100;
  double *pdStack_e0;
  double *pdStack_d8;
  double *pdStack_d0;
  double *pdStack_c8;
  long lStack_c0;
  undefined4 *puStack_78;
  undefined8 uStack_70;
  
  uVar25 = (uint)param_9;
  if (uVar25 == param_4) {
    uVar30 = 1;
  }
  else {
    uVar28 = 0;
    if (param_4 != 0) {
      uVar28 = (int)uVar25 / (int)param_4;
    }
    uVar2 = 2;
    if (uVar25 != param_4 * 2) {
      uVar2 = uVar28;
    }
    uVar30 = (ulong)uVar2;
  }
  uVar28 = (uint)uVar30;
  if (param_3 == param_2) {
    if ((param_11 >> 8 & 1) == 0) {
      if (*param_6 != param_6[(long)(int)param_5 + -1]) {
        puVar10 = (undefined4 *)0x20;
        func_0x000107c2ae8c();
        *puVar10 = 1;
        puStack_78 = puVar10 + 1;
        uStack_70 = 0x1b;
        *(undefined1 *)((long)puVar10 + 0x1f) = 0;
        *(undefined8 *)(puVar10 + 3) = 0x6166203d3d205d30;
        *(undefined8 *)(puVar10 + 1) = 0x5b73726f74636166;
        *(undefined8 *)((long)puVar10 + 0x17) = 0x5d312d666e5b7372;
        *(undefined8 *)((long)puVar10 + 0xf) = 0x6f74636166203d3d;
        FUN_109ac3188(0xffffff29,&puStack_78,&UNK_10f596cca,&UNK_10f596b35,0x266);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x109a558e8);
        (*pcVar6)();
      }
      if (param_5 == 1) {
        if (((param_4 & 3) == 0) && (0 < (int)param_4 >> 1)) {
          lVar40 = 0;
          lVar32 = (long)((ulong)param_4 << 0x20) >> 0x21;
          pdVar17 = param_3 + 2;
          do {
            lVar31 = (long)*param_7;
            pdVar19 = param_3 + (long)((int)param_4 >> 1) * 2 + lVar31 * 2;
            dVar48 = pdVar17[1];
            dVar47 = *pdVar17;
            dVar49 = *pdVar19;
            pdVar17[1] = pdVar19[1];
            *pdVar17 = dVar49;
            pdVar19[1] = dVar48;
            *pdVar19 = dVar47;
            if (lVar40 < lVar31) {
              dVar48 = pdVar17[-1];
              dVar47 = pdVar17[-2];
              dVar49 = param_3[lVar31 * 2];
              pdVar17[-1] = (param_3 + lVar31 * 2)[1];
              pdVar17[-2] = dVar49;
              (param_3 + lVar31 * 2)[1] = dVar48;
              param_3[lVar31 * 2] = dVar47;
              dVar48 = (pdVar17 + lVar32 * 2)[1];
              dVar47 = pdVar17[lVar32 * 2];
              dVar49 = pdVar19[2];
              (pdVar17 + lVar32 * 2)[1] = pdVar19[3];
              pdVar17[lVar32 * 2] = dVar49;
              pdVar19[3] = dVar48;
              pdVar19[2] = dVar47;
            }
            lVar40 = lVar40 + 2;
            pdVar17 = pdVar17 + 4;
            param_7 = (int *)((long)param_7 +
                             (-(ulong)((uVar28 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                             (ulong)(uVar28 << 1) << 2));
          } while (lVar40 < lVar32);
        }
      }
      else if (0 < (int)param_4) {
        uVar33 = 0;
        pdVar17 = param_3;
        do {
          lVar40 = (long)*param_7;
          if ((long)uVar33 < lVar40) {
            dVar48 = pdVar17[1];
            dVar47 = *pdVar17;
            dVar49 = param_3[lVar40 * 2];
            pdVar17[1] = (param_3 + lVar40 * 2)[1];
            *pdVar17 = dVar49;
            (param_3 + lVar40 * 2)[1] = dVar48;
            param_3[lVar40 * 2] = dVar47;
          }
          uVar33 = uVar33 + 1;
          pdVar17 = pdVar17 + 2;
          param_7 = (int *)((long)param_7 + (-(uVar30 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2));
        } while (param_4 != uVar33);
      }
    }
    if ((param_11 & 1) != 0) {
      if ((int)param_4 < 2) {
        uVar30 = 0;
      }
      else {
        uVar30 = 0;
        pdVar17 = param_3 + 3;
        do {
          pdVar17[-2] = -pdVar17[-2];
          *pdVar17 = -*pdVar17;
          uVar30 = uVar30 + 2;
          pdVar17 = pdVar17 + 4;
        } while (uVar30 <= param_4 - 2);
      }
      if ((int)uVar30 < (int)param_4) {
        param_3[(ulong)param_4 * 2 + -1] = -param_3[(ulong)param_4 * 2 + -1];
      }
    }
  }
  else if ((param_11 & 1) == 0) {
    if ((int)param_4 < 2) {
      uVar30 = 0;
    }
    else {
      uVar30 = 0;
      pdVar17 = param_3 + 2;
      do {
        iVar38 = param_7[(int)uVar28];
        dVar47 = param_2[(long)*param_7 * 2];
        pdVar17[-1] = (param_2 + (long)*param_7 * 2)[1];
        pdVar17[-2] = dVar47;
        dVar47 = param_2[(long)iVar38 * 2];
        pdVar17[1] = (param_2 + (long)iVar38 * 2)[1];
        *pdVar17 = dVar47;
        uVar30 = uVar30 + 2;
        param_7 = (int *)((long)param_7 +
                         (-(ulong)((uVar28 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                         (ulong)(uVar28 << 1) << 2));
        pdVar17 = pdVar17 + 4;
      } while (uVar30 <= param_4 - 2);
    }
    if ((int)uVar30 < (int)param_4) {
      dVar47 = param_2[(ulong)(param_4 - 1) * 2];
      (param_3 + (ulong)(param_4 - 1) * 2)[1] = (param_2 + (ulong)(param_4 - 1) * 2)[1];
      param_3[(ulong)(param_4 - 1) * 2] = dVar47;
    }
  }
  else {
    if ((int)param_4 < 2) {
      uVar30 = 0;
    }
    else {
      uVar30 = 0;
      pdVar17 = param_3 + 2;
      do {
        iVar38 = param_7[(int)uVar28];
        dVar47 = (param_2 + (long)*param_7 * 2)[1];
        pdVar17[-2] = param_2[(long)*param_7 * 2];
        pdVar17[-1] = -dVar47;
        dVar47 = (param_2 + (long)iVar38 * 2)[1];
        *pdVar17 = param_2[(long)iVar38 * 2];
        pdVar17[1] = -dVar47;
        uVar30 = uVar30 + 2;
        param_7 = (int *)((long)param_7 +
                         (-(ulong)((uVar28 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                         (ulong)(uVar28 << 1) << 2));
        pdVar17 = pdVar17 + 4;
      } while (uVar30 <= param_4 - 2);
    }
    if ((int)uVar30 < (int)param_4) {
      dVar47 = param_2[(ulong)param_4 * 2 + -1];
      param_3[(uVar30 & 0xffffffff) * 2] = param_2[(ulong)param_4 * 2 + -2];
      (param_3 + (uVar30 & 0xffffffff) * 2)[1] = -dVar47;
    }
  }
  uVar28 = *param_6;
  if ((uVar28 & 1) == 0) {
    if ((int)uVar28 < 4) {
      uVar30 = 1;
    }
    else {
      FUN_109ac28d8();
      uVar28 = *param_6;
      if ((int)uVar28 < 4) {
        uVar30 = 1;
      }
      else {
        uVar33 = 1;
        uVar13 = 4;
        do {
          uVar30 = uVar13;
          iVar37 = (int)param_9;
          iVar38 = iVar37 + 3;
          if (-1 < iVar37) {
            iVar38 = iVar37;
          }
          uVar2 = iVar38 >> 2;
          param_9 = (ulong)uVar2;
          if (0 < (int)param_4) {
            lVar31 = 0;
            iVar38 = (int)uVar33;
            lVar18 = (long)iVar38;
            uVar13 = -(uVar30 >> 0x1f) & 0xfffffff000000000 | uVar30 << 4;
            pdVar17 = param_3 + (long)iVar38 * 2;
            pdVar19 = param_3 + lVar18 * 4;
            lVar32 = (long)param_3 +
                     (-(uVar33 >> 0x1f) & 0xffffffe000000000 | uVar33 << 5) + (long)iVar38 * 0x10;
            lVar40 = (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | param_9 << 1) +
                     (long)(int)uVar2;
            pdVar26 = param_3;
            do {
              pdVar8 = param_3 + lVar31 * 2;
              pdVar41 = pdVar8 + (-(uVar33 >> 0x1f) & 0xfffffffe00000000 | uVar33 << 1) * 2;
              pdVar15 = pdVar41 + lVar18 * 2;
              dVar58 = *pdVar41 + *pdVar15;
              dVar56 = pdVar41[1] + pdVar15[1];
              dVar48 = pdVar41[1] - pdVar15[1];
              dVar47 = *pdVar15 - *pdVar41;
              pdVar14 = pdVar8 + lVar18 * 2;
              dVar53 = *pdVar8 + *pdVar14;
              dVar54 = pdVar8[1] + pdVar14[1];
              dVar49 = *pdVar8 - *pdVar14;
              dVar50 = pdVar8[1] - pdVar14[1];
              *pdVar8 = dVar58 + dVar53;
              pdVar8[1] = dVar56 + dVar54;
              *pdVar41 = dVar53 - dVar58;
              pdVar41[1] = dVar54 - dVar56;
              *pdVar14 = dVar48 + dVar49;
              pdVar14[1] = dVar47 + dVar50;
              *pdVar15 = dVar49 - dVar48;
              pdVar15[1] = dVar50 - dVar47;
              if (1 < iVar38) {
                lVar44 = 0;
                pdVar8 = param_8 + (long)(int)uVar2 * 4 + 1;
                pdVar15 = param_8 + lVar40 * 2 + 1;
                pdVar41 = param_8 + (long)(int)uVar2 * 2 + 1;
                do {
                  dVar47 = *(double *)((long)pdVar17 + lVar44 + 0x10);
                  dVar48 = *(double *)((long)pdVar17 + lVar44 + 0x18);
                  dVar56 = -(dVar48 * *pdVar8) + pdVar8[-1] * dVar47;
                  dVar47 = pdVar8[-1] * dVar48 + *pdVar8 * dVar47;
                  dVar48 = *(double *)((long)pdVar19 + lVar44 + 0x10);
                  dVar49 = *(double *)((long)pdVar19 + lVar44 + 0x18);
                  dVar54 = dVar49 * pdVar41[-1] + *pdVar41 * dVar48;
                  dVar48 = -(dVar49 * *pdVar41) + pdVar41[-1] * dVar48;
                  lVar1 = lVar32 + lVar44;
                  dVar50 = *(double *)(lVar1 + 0x18) * pdVar15[-1] +
                           *pdVar15 * *(double *)(lVar1 + 0x10);
                  dVar49 = -(*(double *)(lVar1 + 0x18) * *pdVar15) +
                           pdVar15[-1] * *(double *)(lVar1 + 0x10);
                  dVar58 = dVar48 + dVar49;
                  dVar53 = dVar54 + dVar50;
                  dVar54 = dVar54 - dVar50;
                  dVar49 = dVar49 - dVar48;
                  dVar50 = *(double *)((long)pdVar26 + lVar44 + 0x10);
                  dVar48 = *(double *)((long)pdVar26 + lVar44 + 0x18);
                  dVar55 = dVar56 + dVar50;
                  dVar57 = dVar47 + dVar48;
                  dVar50 = dVar50 - dVar56;
                  dVar48 = dVar48 - dVar47;
                  *(double *)((long)pdVar26 + lVar44 + 0x10) = dVar55 + dVar58;
                  *(double *)((long)pdVar26 + lVar44 + 0x18) = dVar57 + dVar53;
                  *(double *)((long)pdVar19 + lVar44 + 0x10) = dVar55 - dVar58;
                  *(double *)((long)pdVar19 + lVar44 + 0x18) = dVar57 - dVar53;
                  *(double *)((long)pdVar17 + lVar44 + 0x10) = dVar50 + dVar54;
                  *(double *)((long)pdVar17 + lVar44 + 0x18) = dVar49 + dVar48;
                  lVar44 = lVar44 + 0x10;
                  *(double *)(lVar1 + 0x10) = dVar50 - dVar54;
                  *(double *)(lVar1 + 0x18) = dVar48 - dVar49;
                  pdVar8 = (double *)
                           ((long)pdVar8 +
                           (-(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | param_9 << 5));
                  pdVar41 = (double *)
                            ((long)pdVar41 +
                            (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | param_9 << 4));
                  pdVar15 = pdVar15 + lVar40 * 2;
                } while (uVar33 * 0x10 + -0x10 != lVar44);
              }
              lVar31 = lVar31 + (int)uVar30;
              pdVar26 = (double *)((long)pdVar26 + uVar13);
              pdVar17 = (double *)((long)pdVar17 + uVar13);
              pdVar19 = (double *)((long)pdVar19 + uVar13);
              lVar32 = lVar32 + uVar13;
            } while (lVar31 < (int)param_4);
          }
          uVar2 = (int)uVar30 * 4;
          uVar33 = uVar30;
          uVar13 = (ulong)uVar2;
        } while ((int)uVar2 <= (int)uVar28);
      }
    }
    uStack_100 = param_9;
    if ((int)uVar30 < (int)uVar28) {
      uVar33 = uVar30;
      do {
        uVar29 = (uint)uVar33;
        uVar4 = uVar29 * 2;
        uVar30 = (ulong)uVar4;
        uVar2 = (int)param_9 / 2;
        param_9 = (ulong)uVar2;
        if (0 < (int)param_4) {
          lVar40 = 0;
          uVar13 = -(uVar33 >> 0x1f) & 0xfffffff000000000 | uVar33 << 4;
          pdVar17 = param_3;
          do {
            pdVar19 = param_3 + lVar40 * 2;
            pdVar26 = pdVar19 + (long)(int)uVar29 * 2;
            dVar47 = *pdVar19;
            dVar48 = pdVar19[1];
            dVar49 = *pdVar26;
            dVar50 = pdVar26[1];
            *pdVar19 = dVar47 + dVar49;
            pdVar19[1] = dVar48 + dVar50;
            *pdVar26 = dVar47 - dVar49;
            pdVar26[1] = dVar48 - dVar50;
            pdVar19 = param_8 + (long)(int)uVar2 * 2 + 1;
            lVar32 = uVar33 - 1;
            pdVar26 = pdVar17;
            if (1 < (int)uVar29) {
              do {
                dVar47 = *(double *)((long)pdVar26 + uVar13 + 0x10);
                dVar48 = *(double *)((long)pdVar26 + uVar13 + 0x18);
                dVar50 = -(dVar48 * *pdVar19) + pdVar19[-1] * dVar47;
                dVar47 = dVar47 * *pdVar19 + pdVar19[-1] * dVar48;
                pdVar8 = pdVar26 + 2;
                dVar48 = *pdVar8;
                dVar49 = pdVar26[3];
                *pdVar8 = dVar48 + dVar50;
                pdVar26[3] = dVar49 + dVar47;
                *(double *)((long)pdVar26 + uVar13 + 0x10) = dVar48 - dVar50;
                *(double *)((long)pdVar26 + uVar13 + 0x18) = dVar49 - dVar47;
                lVar32 = lVar32 + -1;
                pdVar19 = (double *)
                          ((long)pdVar19 +
                          (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | param_9 << 4));
                pdVar26 = pdVar8;
              } while (lVar32 != 0);
            }
            lVar40 = lVar40 + (int)uVar4;
            pdVar17 = (double *)
                      ((long)pdVar17 +
                      (-(ulong)((uVar29 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 | uVar30 << 4));
          } while (lVar40 < (int)param_4);
        }
        uVar33 = uVar30;
        uStack_100 = param_9;
      } while ((int)uVar4 < (int)uVar28);
    }
  }
  else {
    uVar30 = 1;
    uStack_100 = param_9;
  }
  uVar28 = (uVar28 ^ 0xffffffff) & 1;
  uVar33 = (ulong)uVar28;
  if ((int)uVar28 < (int)param_5) {
    lVar40 = (long)(int)param_4;
    pdVar17 = param_8 + 1;
    pdVar19 = param_3 + 1;
    pdVar26 = (double *)(*param_10 + 8);
    do {
      uVar28 = param_6[uVar33];
      iVar38 = (int)uVar30;
      uVar2 = uVar28 * iVar38;
      uVar13 = (ulong)uVar2;
      uVar4 = 0;
      if (uVar28 != 0) {
        uVar4 = (int)uStack_100 / (int)uVar28;
      }
      uStack_100 = (ulong)uVar4;
      if (uVar28 == 3) {
        if (0 < (int)param_4) {
          lVar32 = 0;
          uVar34 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar13 << 4;
          pdVar41 = param_3 + (long)iVar38 * 4;
          pdVar8 = param_3 + (long)iVar38 * 2;
          pdVar15 = param_3;
          do {
            pdVar14 = param_3 + lVar32 * 2;
            pdVar9 = pdVar14 + (long)iVar38 * 2;
            pdVar27 = pdVar14 + (-(uVar30 >> 0x1f) & 0xfffffffe00000000 | uVar30 << 1) * 2;
            dVar58 = *pdVar9 + *pdVar27;
            dVar56 = pdVar9[1] + pdVar27[1];
            dVar49 = *pdVar14;
            dVar50 = pdVar14[1];
            dVar48 = (pdVar9[1] - pdVar27[1]) * 0.8660254037844386;
            dVar47 = (*pdVar27 - *pdVar9) * 0.8660254037844386;
            *pdVar14 = dVar58 + dVar49;
            pdVar14[1] = dVar56 + dVar50;
            dVar49 = dVar49 + dVar58 * -0.5;
            dVar50 = dVar50 + dVar56 * -0.5;
            *pdVar9 = dVar49 + dVar48;
            pdVar9[1] = dVar47 + dVar50;
            *pdVar27 = dVar49 - dVar48;
            pdVar27[1] = dVar50 - dVar47;
            if (1 < iVar38) {
              lVar31 = 0;
              pdVar9 = pdVar17 + (long)(int)uVar4 * 4;
              pdVar14 = pdVar17 + (long)(int)uVar4 * 2;
              do {
                dVar47 = *(double *)((long)pdVar8 + lVar31 + 0x10);
                dVar48 = *(double *)((long)pdVar8 + lVar31 + 0x18);
                dVar49 = -(dVar48 * *pdVar14) + pdVar14[-1] * dVar47;
                dVar50 = *(double *)((long)pdVar41 + lVar31 + 0x10);
                dVar58 = *(double *)((long)pdVar41 + lVar31 + 0x18);
                dVar47 = pdVar14[-1] * dVar48 + *pdVar14 * dVar47;
                dVar48 = -(dVar58 * *pdVar9) + pdVar9[-1] * dVar50;
                dVar50 = pdVar9[-1] * dVar58 + *pdVar9 * dVar50;
                dVar53 = dVar49 + dVar48;
                dVar54 = dVar47 + dVar50;
                dVar47 = (dVar47 - dVar50) * 0.8660254037844386;
                dVar50 = *(double *)((long)pdVar15 + lVar31 + 0x10);
                dVar58 = *(double *)((long)pdVar15 + lVar31 + 0x18);
                dVar48 = (dVar48 - dVar49) * 0.8660254037844386;
                dVar49 = dVar50 + dVar53 * -0.5;
                dVar56 = dVar58 + dVar54 * -0.5;
                *(double *)((long)pdVar15 + lVar31 + 0x10) = dVar50 + dVar53;
                *(double *)((long)pdVar15 + lVar31 + 0x18) = dVar58 + dVar54;
                *(double *)((long)pdVar8 + lVar31 + 0x10) = dVar47 + dVar49;
                *(double *)((long)pdVar8 + lVar31 + 0x18) = dVar56 + dVar48;
                *(double *)((long)pdVar41 + lVar31 + 0x10) = dVar49 - dVar47;
                *(double *)((long)pdVar41 + lVar31 + 0x18) = dVar56 - dVar48;
                lVar31 = lVar31 + 0x10;
                pdVar14 = (double *)
                          ((long)pdVar14 +
                          (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | uStack_100 << 4));
                pdVar9 = (double *)
                         ((long)pdVar9 +
                         (-(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | uStack_100 << 5));
              } while (uVar30 * 0x10 + -0x10 != lVar31);
            }
            lVar32 = lVar32 + (int)uVar2;
            pdVar15 = (double *)((long)pdVar15 + uVar34);
            pdVar41 = (double *)((long)pdVar41 + uVar34);
            pdVar8 = (double *)((long)pdVar8 + uVar34);
          } while (lVar32 < lVar40);
        }
      }
      else if (uVar28 == 5) {
        if (0 < (int)param_4) {
          lVar31 = 0;
          iVar37 = iVar38 << 1;
          uVar34 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar13 << 4;
          pdVar8 = pdVar19 + (long)iVar38 * 2;
          pdVar41 = pdVar19 + (long)iVar37 * 2;
          lVar32 = (long)pdVar19 +
                   (-(uVar30 >> 0x1f) & 0xfffffff000000000 | uVar30 << 4) + (long)iVar37 * 0x10;
          pdVar15 = pdVar19 + (long)iVar37 * 4;
          pdVar14 = pdVar19;
          do {
            if (0 < iVar38) {
              lVar18 = 0;
              pdVar12 = pdVar17;
              pdVar22 = pdVar17;
              pdVar27 = pdVar17;
              pdVar9 = pdVar17;
              do {
                pdVar16 = (double *)((long)pdVar14 + lVar18);
                pdVar20 = (double *)((long)pdVar41 + lVar18);
                pdVar23 = (double *)((long)pdVar15 + lVar18);
                pdVar39 = (double *)((long)pdVar8 + lVar18);
                dVar53 = -(*pdVar39 * *pdVar9) + pdVar9[-1] * pdVar39[-1];
                dVar47 = pdVar9[-1] * *pdVar39 + *pdVar9 * pdVar39[-1];
                dVar49 = -(*pdVar23 * *pdVar27) + pdVar27[-1] * pdVar23[-1];
                dVar48 = pdVar27[-1] * *pdVar23 + *pdVar27 * pdVar23[-1];
                dVar50 = dVar53 + dVar49;
                pdVar43 = (double *)(lVar32 + lVar18);
                dVar54 = dVar47 + dVar48;
                dVar59 = -(*pdVar43 * *pdVar22) + pdVar22[-1] * pdVar43[-1];
                dVar53 = dVar53 - dVar49;
                dVar49 = pdVar22[-1] * *pdVar43 + *pdVar22 * pdVar43[-1];
                dVar47 = dVar47 - dVar48;
                dVar58 = -(*pdVar20 * *pdVar12) + pdVar12[-1] * pdVar20[-1];
                dVar48 = pdVar12[-1] * *pdVar20 + *pdVar12 * pdVar20[-1];
                dVar55 = dVar59 + dVar58;
                dVar57 = dVar49 + dVar48;
                dVar59 = dVar59 - dVar58;
                dVar49 = dVar49 - dVar48;
                dVar60 = dVar50 + dVar55;
                dVar61 = dVar54 + dVar57;
                dVar58 = pdVar16[-1] + dVar60 * -0.25;
                dVar56 = *pdVar16 + dVar61 * -0.25;
                dVar50 = (dVar50 - dVar55) * 0.5590169943749475;
                dVar54 = (dVar54 - dVar57) * 0.5590169943749475;
                dVar48 = (dVar47 + dVar49) * 0.9510565162951535;
                dVar55 = (dVar53 + dVar59) * -0.9510565162951535;
                pdVar16[-1] = pdVar16[-1] + dVar60;
                *pdVar16 = *pdVar16 + dVar61;
                dVar47 = dVar48 - dVar47 * 0.36327126400268045;
                dVar53 = dVar53 * 0.36327126400268045 + dVar55;
                dVar48 = dVar48 - dVar49 * 1.5388417685876268;
                dVar55 = dVar59 * 1.5388417685876268 + dVar55;
                dVar49 = dVar58 + dVar50;
                dVar57 = dVar56 + dVar54;
                dVar58 = dVar58 - dVar50;
                dVar56 = dVar56 - dVar54;
                pdVar39[-1] = dVar48 + dVar49;
                *pdVar39 = dVar57 + dVar55;
                pdVar23[-1] = dVar49 - dVar48;
                *pdVar23 = dVar57 - dVar55;
                lVar18 = lVar18 + 0x10;
                pdVar9 = (double *)
                         ((long)pdVar9 +
                         (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | uStack_100 << 4));
                pdVar20[-1] = dVar47 + dVar58;
                *pdVar20 = dVar56 + dVar53;
                pdVar43[-1] = dVar58 - dVar47;
                *pdVar43 = dVar56 - dVar53;
                pdVar27 = (double *)
                          ((long)pdVar27 +
                          (-(ulong)(uVar4 >> 0x1f) & 0xffffffc000000000 | uStack_100 << 6));
                pdVar22 = pdVar22 + ((-(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | uStack_100 << 1
                                     ) + (long)(int)uVar4) * 2;
                pdVar12 = (double *)
                          ((long)pdVar12 +
                          (-(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | uStack_100 << 5));
              } while (uVar30 << 4 != lVar18);
            }
            lVar31 = lVar31 + (int)uVar2;
            pdVar14 = (double *)((long)pdVar14 + uVar34);
            pdVar8 = (double *)((long)pdVar8 + uVar34);
            pdVar41 = (double *)((long)pdVar41 + uVar34);
            lVar32 = lVar32 + uVar34;
            pdVar15 = (double *)((long)pdVar15 + uVar34);
          } while (lVar31 < lVar40);
        }
      }
      else if (0 < (int)param_4) {
        iVar37 = uVar28 - 1;
        lVar32 = (long)((ulong)(uint)(iVar37 - (iVar37 >> 0x1f)) << 0x20) >> 0x21;
        uVar29 = iVar37 / 2;
        if ((int)uVar29 < 2) {
          uVar29 = 1;
        }
        uVar34 = (ulong)uVar29;
        uVar45 = -(uVar30 >> 0x1f) & 0xfffffff000000000 | uVar30 << 4;
        uVar35 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar13 << 4;
        lVar31 = uVar35 + (long)iVar38 * -0x10;
        pdStack_c8 = (double *)((long)pdVar19 + lVar31);
        pdStack_d0 = pdVar19 + (long)iVar38 * 2;
        iVar37 = 0;
        if (uVar28 != 0) {
          iVar37 = (int)uVar25 / (int)uVar28;
        }
        lStack_c0 = 0;
        uVar36 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | uStack_100 << 4;
        pdStack_d8 = (double *)((long)param_3 + lVar31);
        pdStack_e0 = param_3 + (long)iVar38 * 2;
        do {
          if (0 < iVar38) {
            lVar31 = 0;
            lVar18 = 0;
            uVar46 = 0;
            pdVar9 = param_8;
            pdVar15 = pdStack_e0;
            pdVar27 = param_8;
            pdVar14 = pdStack_d8;
            pdVar41 = pdStack_c8;
            pdVar8 = pdStack_d0;
            do {
              pdVar22 = param_3 + lStack_c0 * 2 + uVar46 * 2;
              dVar56 = pdVar22[1];
              dVar58 = *pdVar22;
              dVar47 = *pdVar22;
              dVar48 = pdVar22[1];
              dVar49 = dVar58;
              dVar50 = dVar56;
              if (uVar46 == 0) {
                pdVar12 = pdVar14;
                pdVar16 = pdVar26 + lVar32 * 2;
                pdVar20 = pdVar15;
                uVar24 = uVar34;
                pdVar23 = pdVar26;
                if (2 < (int)uVar28) {
                  do {
                    dVar53 = *pdVar20;
                    dVar54 = *pdVar12;
                    dVar55 = dVar53 + dVar54;
                    dVar57 = pdVar20[1] + pdVar12[1];
                    dVar49 = dVar49 + dVar55;
                    dVar50 = dVar50 + dVar57;
                    *pdVar23 = pdVar20[1] - pdVar12[1];
                    *(double *)*(undefined1 (*) [16])(pdVar23 + -1) = dVar55;
                    *pdVar16 = dVar57;
                    *(double *)*(undefined1 (*) [16])(pdVar16 + -1) = dVar53 - dVar54;
                    uVar24 = uVar24 - 1;
                    pdVar12 = pdVar12 + (long)iVar38 * -2;
                    pdVar16 = pdVar16 + 2;
                    pdVar20 = (double *)((long)pdVar20 + uVar45);
                    pdVar23 = pdVar23 + 2;
                  } while (uVar24 != 0);
                  goto LAB_109a5569c;
                }
              }
              else {
                pdVar12 = pdVar27;
                pdVar16 = pdVar9;
                pdVar20 = pdVar26;
                pdVar23 = pdVar26 + lVar32 * 2;
                pdVar39 = pdVar8;
                pdVar43 = pdVar41;
                uVar24 = uVar34;
                if (2 < (int)uVar28) {
                  do {
                    auVar51._0_8_ = *pdVar12 * *pdVar39;
                    auVar51._8_8_ = pdVar12[1] * -*pdVar39;
                    auVar52 = NEON_ext(auVar51,auVar51,8,1);
                    dVar53 = *pdVar16 * *pdVar43;
                    dVar54 = pdVar16[1] * -*pdVar43;
                    dVar59 = auVar52._0_8_ + *pdVar12 * pdVar39[-1];
                    dVar60 = auVar52._8_8_ + pdVar12[1] * pdVar39[-1];
                    auVar52._8_8_ = dVar54;
                    auVar52._0_8_ = dVar53;
                    auVar5._8_8_ = dVar54;
                    auVar5._0_8_ = dVar53;
                    auVar52 = NEON_ext(auVar52,auVar5,8,1);
                    dVar53 = auVar52._0_8_ + *pdVar16 * pdVar43[-1];
                    dVar55 = auVar52._8_8_ + pdVar16[1] * pdVar43[-1];
                    dVar54 = dVar59 + dVar53;
                    dVar57 = dVar60 + dVar55;
                    *pdVar20 = dVar60 - dVar55;
                    *(double *)*(undefined1 (*) [16])(pdVar20 + -1) = dVar54;
                    *(double *)*(undefined1 (*) [16])(pdVar23 + -1) = dVar59 - dVar53;
                    *pdVar23 = dVar57;
                    dVar49 = dVar49 + dVar54;
                    dVar50 = dVar50 + dVar57;
                    uVar24 = uVar24 - 1;
                    pdVar12 = (double *)((long)pdVar12 + lVar31);
                    pdVar16 = (double *)((long)pdVar16 + lVar18);
                    pdVar20 = pdVar20 + 2;
                    pdVar23 = pdVar23 + 2;
                    pdVar39 = (double *)((long)pdVar39 + uVar45);
                    pdVar43 = pdVar43 + (long)iVar38 * -2;
                  } while (uVar24 != 0);
LAB_109a5569c:
                  pdVar22[1] = dVar50;
                  *pdVar22 = dVar49;
                  uVar11 = 1;
                  lVar44 = (long)iVar38;
                  do {
                    pauVar21 = param_10;
                    uVar24 = uVar34;
                    dVar49 = dVar58;
                    dVar50 = dVar56;
                    iVar42 = uVar11 * iVar37;
                    dVar53 = dVar47;
                    dVar54 = dVar48;
                    do {
                      auVar52 = NEON_ext(*pauVar21,pauVar21[lVar32],8,1);
                      dVar55 = param_8[(long)iVar42 * 2];
                      dVar60 = (param_8 + (long)iVar42 * 2)[1];
                      dVar57 = *(double *)*pauVar21 * dVar55;
                      dVar55 = SUB168(pauVar21[lVar32],8) * dVar55;
                      dVar59 = auVar52._0_8_ * dVar60;
                      dVar60 = auVar52._8_8_ * dVar60;
                      dVar49 = dVar49 + dVar57 + dVar59;
                      dVar50 = dVar50 + (dVar55 - dVar60);
                      dVar53 = dVar53 + (dVar57 - dVar59);
                      dVar54 = dVar54 + dVar55 + dVar60;
                      iVar42 = iVar42 + uVar11 * iVar37;
                      uVar3 = 0;
                      if ((int)uVar25 <= iVar42) {
                        uVar3 = uVar25;
                      }
                      iVar42 = iVar42 - uVar3;
                      uVar24 = uVar24 - 1;
                      pauVar21 = pauVar21 + 1;
                    } while (uVar24 != 0);
                    (pdVar22 + lVar44 * 2)[1] = dVar54;
                    pdVar22[lVar44 * 2] = dVar53;
                    (pdVar22 + ((int)uVar2 - lVar44) * 2)[1] = dVar50;
                    pdVar22[((int)uVar2 - lVar44) * 2] = dVar49;
                    lVar44 = lVar44 + iVar38;
                    bVar7 = uVar11 != uVar29;
                    uVar11 = uVar11 + 1;
                  } while (bVar7);
                }
              }
              uVar46 = uVar46 + 1;
              pdVar8 = pdVar8 + 2;
              pdVar41 = pdVar41 + 2;
              pdVar9 = (double *)
                       ((long)pdVar9 + ((long)(int)uVar28 * 0x10 + -0x10) * (long)(int)uVar4);
              lVar18 = lVar18 - uVar36;
              pdVar27 = (double *)((long)pdVar27 + uVar36);
              lVar31 = lVar31 + uVar36;
              pdVar15 = pdVar15 + 2;
              pdVar14 = pdVar14 + 2;
            } while (uVar46 != uVar30);
          }
          lStack_c0 = lStack_c0 + (int)uVar2;
          pdStack_d0 = (double *)((long)pdStack_d0 + uVar35);
          pdStack_c8 = (double *)((long)pdStack_c8 + uVar35);
          pdStack_e0 = (double *)((long)pdStack_e0 + uVar35);
          pdStack_d8 = (double *)((long)pdStack_d8 + uVar35);
        } while (lStack_c0 < lVar40);
      }
      uVar33 = uVar33 + 1;
      uVar30 = uVar13;
    } while (uVar33 != param_5);
  }
  if (param_1 == 1.0) {
    if ((param_11 & 1) != 0) {
      if ((int)param_4 < 2) {
        uVar30 = 0;
      }
      else {
        uVar30 = 0;
        pdVar17 = param_3 + 3;
        do {
          pdVar17[-2] = -pdVar17[-2];
          *pdVar17 = -*pdVar17;
          uVar30 = uVar30 + 2;
          pdVar17 = pdVar17 + 4;
        } while (uVar30 <= param_4 - 2);
      }
      if ((int)uVar30 < (int)param_4) {
        param_3[(ulong)param_4 * 2 + -1] = -param_3[(ulong)param_4 * 2 + -1];
      }
    }
  }
  else if (0 < (int)param_4) {
    dVar47 = param_1;
    if ((param_11 & 1) != 0) {
      dVar47 = -param_1;
    }
    uVar30 = (ulong)param_4;
    do {
      param_3[1] = dVar47 * param_3[1];
      *param_3 = param_1 * *param_3;
      uVar30 = uVar30 - 1;
      param_3 = param_3 + 2;
    } while (uVar30 != 0);
  }
  return;
}



/* Entry: 109a55914; end: 109a573cf;  */

double FUN_109a55914(uint *param_1,uint param_2,uint *param_3,ulong param_4,double param_5,
                    int param_6,uint param_7,long param_8)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  unkuint9 Var6;
  uint **ppuVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  long *plVar22;
  undefined8 uVar23;
  code *pcVar24;
  bool bVar25;
  undefined **ppuVar26;
  uint **ppuVar27;
  undefined8 *puVar28;
  float *pfVar29;
  uint *puVar30;
  undefined4 *puVar31;
  int iVar32;
  ulong *puVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  float *pfVar36;
  int iVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined **ppuVar41;
  uint **ppuVar42;
  undefined **ppuVar43;
  undefined8 *puVar44;
  uint *puVar45;
  long lVar46;
  uint *puVar47;
  float *pfVar48;
  uint uVar49;
  uint uVar50;
  long lVar51;
  undefined **ppuVar52;
  float *pfVar53;
  int iVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  long lVar59;
  float *pfVar60;
  double dVar61;
  double dVar62;
  float fVar63;
  float fVar64;
  uint *puVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dStack_4f8;
  undefined **ppuStack_448;
  uint **ppuStack_440;
  uint **ppuStack_438;
  undefined8 uStack_430;
  uint *puStack_428;
  uint *puStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  uint *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  uint uStack_3b0;
  undefined8 uStack_3ac;
  uint uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  long lStack_378;
  long lStack_370;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined **ppuStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_318;
  long lStack_310;
  ulong *puStack_308;
  ulong auStack_300 [2];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong *puStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined4 uStack_288;
  uint uStack_284;
  undefined4 uStack_280;
  uint uStack_27c;
  long lStack_278;
  undefined8 uStack_268;
  undefined **ppuStack_260;
  uint *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  float *pfStack_238;
  undefined **ppuStack_230;
  float *pfStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  long lStack_210;
  long lStack_208;
  float **ppfStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  uint uStack_1e0;
  undefined8 uStack_1dc;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint uStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  long lStack_148;
  ulong uStack_140;
  long *plStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar33 = *(ulong **)(param_1 + 2);
    uStack_2b0 = (ulong)&uStack_2f0 | 8;
    uStack_2e8 = puVar33[1];
    uStack_2f0 = *puVar33;
    uStack_2d8 = puVar33[3];
    uStack_2e0 = puVar33[2];
    uStack_2c8 = puVar33[5];
    uStack_2d0 = puVar33[4];
    uStack_2b8 = puVar33[7];
    uStack_2c0 = puVar33[6];
    puStack_2a8 = &uStack_2a0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    if (puVar33[7] != 0) {
      piVar1 = (int *)(puVar33[7] + 0x14);
      do {
        cVar5 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)((long)puVar33 + 4) < 3) {
      uStack_2a0 = *(ulong *)puVar33[9];
      uStack_298 = ((ulong *)puVar33[9])[1];
    }
    else {
      uStack_2f0 = uStack_2f0 & 0xffffffff;
      func_0x000109a84868(&uStack_2f0);
    }
  }
  else {
    FUN_109a8a180(&uStack_2f0,param_1,0xffffffff);
  }
  uVar2 = uStack_2e8._4_4_;
  if ((uint)uStack_2e8 != 1) {
    uVar2 = (uint)uStack_2e8;
  }
  ppuStack_448 = (undefined **)(ulong)uVar2;
  uVar4 = uStack_2e8._4_4_;
  if ((uint)uStack_2e8 == 1) {
    uVar4 = 1;
  }
  if ((((int)param_2 < 1) || (2 < uStack_2f0._4_4_)) || (((uint)uStack_2f0 & 7) != 5)) {
    puVar31 = (undefined4 *)0x30;
    func_0x000107c2ae8c();
    *puVar31 = 1;
    uStack_350 = puVar31 + 1;
    uStack_348 = 0x2a;
    *(undefined1 *)((long)puVar31 + 0x2e) = 0;
    *(undefined8 *)(puVar31 + 3) = 0x2032203d3c20736d;
    *(undefined8 *)(puVar31 + 1) = 0x69642e3061746164;
    *(undefined8 *)(puVar31 + 7) = 0x32335f5643203d3d;
    *(undefined8 *)(puVar31 + 5) = 0x2065707974202626;
    *(undefined8 *)((long)puVar31 + 0x26) = 0x30203e204b202626;
    *(undefined8 *)((long)puVar31 + 0x1e) = 0x204632335f564320;
    FUN_109ac3188(0xffffff29,&uStack_350,&UNK_10f596cf9,&UNK_10f596d00,0xe6);
  }
  else {
    if ((int)param_2 <= (int)uVar2) {
      uVar4 = uVar4 + uVar4 * ((uint)uStack_2f0 >> 3 & 0x1ff);
      uVar57 = (ulong)uVar4;
      uVar38 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar57 << 2;
      if ((uint)uStack_2e8 != 1) {
        uVar38 = uStack_2a0;
      }
      FUN_10936ff7c(&uStack_350,ppuStack_448,uVar57,5,uStack_2e0,uVar38);
      FUN_109a8f64c(param_3,ppuStack_448,1,4,0xffffffff,1,0);
      uStack_3b0 = 0x42ff0000;
      lStack_370 = (long)&uStack_3ac + 4;
      uStack_3a4 = 0;
      uStack_3a0 = 0;
      uStack_3ac = 0;
      uStack_394 = 0;
      uStack_390 = 0;
      uStack_39c = 0;
      uStack_398 = 0;
      uStack_384 = 0;
      uStack_38c = 0;
      uStack_388 = 0;
      lStack_378 = 0;
      uStack_380 = 0;
      uStack_37c = 0;
      uStack_360 = 0;
      uStack_358 = 0;
      puStack_368 = &uStack_360;
      if ((*param_3 & 0x1f0000) == 0x10000) {
        puVar33 = *(ulong **)(param_3 + 2);
        puStack_3d0 = (uint *)((ulong)&uStack_410 | 8);
        uStack_408 = puVar33[1];
        uStack_410 = *puVar33;
        uStack_3f8 = puVar33[3];
        uStack_400 = puVar33[2];
        uStack_3e8 = puVar33[5];
        uStack_3f0 = puVar33[4];
        uStack_3d8 = puVar33[7];
        uStack_3e0 = puVar33[6];
        puStack_3c8 = &uStack_3c0;
        uStack_3c0 = 0;
        uStack_3b8 = 0;
        if (puVar33[7] != 0) {
          piVar1 = (int *)(puVar33[7] + 0x14);
          do {
            cVar5 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar25) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (*(int *)((long)puVar33 + 4) < 3) {
          uStack_3c0 = *(undefined8 *)puVar33[9];
          uStack_3b8 = ((undefined8 *)puVar33[9])[1];
        }
        else {
          uStack_410 = uStack_410 & 0xffffffff;
          func_0x000109a84868(&uStack_410);
        }
      }
      else {
        FUN_109a8a180(&uStack_410,param_3,0xffffffff);
      }
      bVar25 = (uint)uStack_408 * uStack_408._4_4_ != uVar2;
      if ((param_7 & 1) == 0) {
        if (((uStack_408._4_4_ != 1 && (uint)uStack_408 != 1 || bVar25) ||
            (((uint)(float)uStack_410 & 0x4fff) != 0x4004)) &&
           ((uStack_408._4_4_ != 1 ||
            ((((2 < uStack_410._4_4_ || ((uint)uStack_408 != uVar2)) ||
              (((uint)(float)uStack_410 & 0xfff) != 4)) || (uStack_400 == 0)))))) {
          uStack_120._4_4_ = 1;
          uStack_120._0_4_ = uVar2;
          FUN_109a83fd0(&uStack_410,2,&uStack_120,4);
        }
        uStack_120._0_4_ = *puStack_3d0;
        uStack_120._4_4_ = puStack_3d0[1];
        if (((2 < (int)uStack_3ac) || (uStack_3ac._4_4_ != (uint)uStack_120)) ||
           ((uStack_3a4 != uStack_120._4_4_ ||
            (((uStack_3b0 & 0xfff) != ((uint)(float)uStack_410 & 0xfff) ||
             (CONCAT44(uStack_39c,uStack_3a0) == 0)))))) {
          FUN_109a83fd0(&uStack_3b0,2,&uStack_120);
        }
      }
      else {
        if ((uStack_408._4_4_ != 1 && (uint)uStack_408 != 1 || bVar25) ||
           (((uint)(float)uStack_410 & 0x4fff) != 0x4004)) {
          puVar31 = (undefined4 *)0xa0;
          func_0x000107c2ae8c();
          *puVar31 = 1;
          uStack_120 = puVar31 + 1;
          uStack_118._0_4_ = 0x98;
          uStack_118._4_4_ = 0;
          *(undefined8 *)(puVar31 + 0x1b) = 0x2928657079742e73;
          *(undefined8 *)(puVar31 + 0x19) = 0x6c6562616c5f7473;
          *(undefined8 *)(puVar31 + 0x1f) = 0x6562202626205332;
          *(undefined8 *)(puVar31 + 0x1d) = 0x335f5643203d3d20;
          *(undefined8 *)(puVar31 + 0x23) = 0x746e6f4373692e73;
          *(undefined8 *)(puVar31 + 0x21) = 0x6c6562616c5f7473;
          *(undefined8 *)(puVar31 + 0xb) = 0x2931203d3d207377;
          *(undefined8 *)(puVar31 + 9) = 0x6f722e736c656261;
          *(undefined8 *)(puVar31 + 0xf) = 0x2e736c6562616c5f;
          *(undefined8 *)(puVar31 + 0xd) = 0x7473656220262620;
          *(undefined8 *)(puVar31 + 0x13) = 0x736c6562616c5f74;
          *(undefined8 *)(puVar31 + 0x11) = 0x7365622a736c6f63;
          *(undefined8 *)(puVar31 + 0x17) = 0x6562202626204e20;
          *(undefined8 *)(puVar31 + 0x15) = 0x3d3d2073776f722e;
          *(undefined8 *)(puVar31 + 3) = 0x6c6f632e736c6562;
          *(undefined8 *)(puVar31 + 1) = 0x616c5f7473656228;
          *(undefined1 *)(puVar31 + 0x27) = 0;
          *(undefined8 *)(puVar31 + 0x25) = 0x292873756f756e69;
          *(undefined8 *)(puVar31 + 7) = 0x6c5f74736562207c;
          *(undefined8 *)(puVar31 + 5) = 0x7c2031203d3d2073;
          FUN_109ac3188(0xffffff29,&uStack_120,&UNK_10f596cf9,&UNK_10f596d00,0xf3);
          goto LAB_109a56e94;
        }
        uStack_120._0_4_ = 0x2010000;
        uStack_118 = &uStack_3b0;
        uStack_110 = 0;
        uStack_10c = 0;
        FUN_109a479a0(&uStack_410,&uStack_120);
      }
      puVar30 = (uint *)CONCAT44(uStack_39c,uStack_3a0);
      uStack_120._0_4_ = 0x42ff0000;
      uStack_118._4_4_ = 0;
      uStack_110 = 0;
      uStack_120._4_4_ = 0;
      uStack_118._0_4_ = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_10c = 0;
      uStack_108 = 0;
      uStack_f4 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      lStack_e8 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_c8 = 0;
      lStack_d0 = 0;
      uStack_180 = param_2;
      uStack_17c = uVar4;
      uStack_e0 = (ulong)&uStack_120 | 8;
      plStack_d8 = &lStack_d0;
      FUN_109a83fd0(&uStack_120,2,&uStack_180,5);
      uStack_180 = 0x42ff0000;
      uStack_174 = 0;
      uStack_170 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      uStack_164 = 0;
      uStack_160 = 0;
      uStack_16c = 0;
      uStack_168 = 0;
      uStack_154 = 0;
      uStack_15c = 0;
      uStack_158 = 0;
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_128 = 0;
      lStack_130 = 0;
      uStack_1dc = CONCAT44(uStack_1dc._4_4_,uVar4);
      uStack_1e0 = param_2;
      uStack_140 = (ulong)&uStack_180 | 8;
      plStack_138 = &lStack_130;
      FUN_109a83fd0(&uStack_180,2,&uStack_1e0,5);
      uStack_1e0 = 0x42ff0000;
      lStack_1a0 = (long)&uStack_1dc + 4;
      uStack_1d4 = 0;
      uStack_1d0 = 0;
      uStack_1dc = 0;
      uStack_1c4 = 0;
      uStack_1c0 = 0;
      uStack_1cc = 0;
      uStack_1c8 = 0;
      uStack_1b4 = 0;
      uStack_1bc = 0;
      uStack_1b8 = 0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_240 = (undefined **)CONCAT44(uVar4,1);
      puStack_198 = &uStack_190;
      FUN_109a83fd0(&uStack_1e0,2,&uStack_240,5);
      ppuVar52 = (undefined **)(ulong)param_2;
      ppuVar27 = &puStack_428;
      ppuVar34 = ppuVar52;
      FUN_10925b8c4();
      ppuStack_440 = (uint **)0x0;
      ppuStack_438 = (uint **)0x0;
      uStack_430 = 0;
      if (uVar4 != 0) {
        lVar59 = (long)(int)uVar4;
        func_0x00010963799c(&ppuStack_440,lVar59);
        ppuVar7 = ppuStack_438;
        ppuVar34 = (undefined **)(lVar59 << 3);
        _bzero();
        ppuVar27 = ppuStack_438;
        ppuStack_438 = ppuVar7 + lVar59;
      }
      ppuVar7 = ppuStack_440;
      FUN_109ac3f0c();
      FUN_109ac3ae8();
      dVar67 = 0.0;
      if (0.0 <= param_5) {
        dVar67 = param_5;
      }
      dVar61 = 1.1920928955078125e-07;
      if ((param_4 & 2) != 0) {
        dVar61 = dVar67;
      }
      iVar37 = (int)(param_4 >> 0x20);
      if (iVar37 < 3) {
        iVar37 = 2;
      }
      if (99 < iVar37) {
        iVar37 = 100;
      }
      iVar3 = 100;
      if ((param_4 & 1) != 0) {
        iVar3 = iVar37;
      }
      if (param_2 == 1) {
        iVar3 = 2;
      }
      if (0 < (int)uVar4) {
        lVar59 = uVar57 << 3;
        ppuVar26 = ppuStack_340;
        ppuVar42 = ppuVar7;
        do {
          uVar50 = *(uint *)ppuVar26;
          ppuVar26 = (undefined **)((long)ppuVar26 + 4);
          *ppuVar42 = (uint *)CONCAT44(uVar50,uVar50);
          lVar59 = lVar59 + -8;
          ppuVar42 = ppuVar42 + 1;
        } while (lVar59 != 0);
      }
      if (uVar2 < 2) {
        ppuStack_448 = (undefined **)0x1;
      }
      else {
        uVar38 = *puStack_308;
        ppuVar26 = (undefined **)0x1;
        ppuVar43 = ppuStack_340;
        do {
          ppuVar43 = (undefined **)((long)ppuVar43 + uVar38);
          ppuVar41 = ppuVar43;
          ppuVar42 = ppuVar7;
          lVar59 = uVar57 << 3;
          if (0 < (int)uVar4) {
            do {
              fVar63 = *(float *)ppuVar41;
              puVar65 = *ppuVar42;
              *ppuVar42 = (uint *)((ulong)puVar65 ^
                                  ((ulong)puVar65 ^ CONCAT44(fVar63,fVar63)) &
                                  CONCAT44(-(uint)((float)((ulong)puVar65 >> 0x20) < fVar63),
                                           -(uint)(fVar63 < SUB84(puVar65,0))));
              lVar59 = lVar59 + -8;
              ppuVar41 = (undefined **)((long)ppuVar41 + 4);
              ppuVar42 = ppuVar42 + 1;
            } while (lVar59 != 0);
          }
          ppuVar26 = (undefined **)((long)ppuVar26 + 1);
        } while (ppuVar26 != ppuStack_448);
      }
      puVar44 = (undefined8 *)((ulong)&uStack_240 | 4);
      dVar67 = 0.0;
      dStack_4f8 = 1.79769313486232e+308;
      iVar37 = 0;
LAB_109a55fa8:
      iVar54 = 0;
      dVar68 = 1.79769313486232e+308;
      do {
        uVar23 = uStack_c8;
        lVar46 = lStack_d0;
        plVar22 = plStack_d8;
        uVar55 = uStack_e0;
        lVar59 = lStack_e8;
        uVar21 = uStack_ec;
        uVar20 = uStack_f0;
        uVar19 = uStack_f4;
        uVar18 = uStack_f8;
        uVar17 = uStack_fc;
        uVar16 = uStack_100;
        plStack_d8 = plStack_138;
        uVar15 = uStack_164;
        uVar14 = uStack_168;
        uVar13 = uStack_16c;
        uVar12 = uStack_170;
        uVar11 = uStack_174;
        uVar10 = uStack_178;
        uVar49 = uStack_17c;
        uVar50 = uStack_180;
        uVar38 = auStack_300[0];
        ppuVar26 = ppuStack_340;
        pfVar48 = (float *)CONCAT44(uStack_16c,uStack_170);
        uStack_178 = (undefined4)uStack_118;
        uStack_174 = uStack_118._4_4_;
        uStack_180 = (uint)uStack_120;
        uStack_17c = uStack_120._4_4_;
        uStack_168 = uStack_108;
        uStack_164 = uStack_104;
        uStack_170 = uStack_110;
        uStack_16c = uStack_10c;
        uStack_f8 = uStack_158;
        uStack_f4 = uStack_154;
        uStack_100 = uStack_160;
        uStack_fc = uStack_15c;
        lStack_e8 = lStack_148;
        uStack_f0 = uStack_150;
        uStack_ec = uStack_14c;
        uStack_158 = uVar18;
        uStack_154 = uVar19;
        uStack_160 = uVar16;
        uStack_15c = uVar17;
        lStack_148 = lVar59;
        uStack_150 = uVar20;
        uStack_14c = uVar21;
        uStack_e0 = uStack_140;
        uStack_c8 = uStack_128;
        lStack_d0 = lStack_130;
        uStack_118._0_4_ = uVar10;
        uStack_118._4_4_ = uVar11;
        uStack_120._0_4_ = uVar50;
        uStack_120._4_4_ = uVar49;
        uStack_108 = uVar14;
        uStack_104 = uVar15;
        uStack_110 = uVar12;
        uStack_10c = uVar13;
        plStack_138 = plVar22;
        uStack_140 = uVar55;
        uStack_128 = uVar23;
        lStack_130 = lVar46;
        if (plStack_d8 == &lStack_130) {
          plStack_d8 = &lStack_d0;
          uStack_e0 = (ulong)&uStack_120 | 8;
        }
        if (plVar22 == &lStack_d0) {
          plStack_138 = &lStack_130;
          uStack_140 = (ulong)&uStack_180 | 8;
        }
        if (iVar54 == 0 && ((param_7 & 1) == 0 || iVar37 != 0)) {
          if ((param_7 >> 1 & 1) == 0) {
            ppuVar26 = (undefined **)0x0;
            puVar65 = *ppuVar27;
            lVar59 = *plStack_d8;
            uVar38 = (long)ppuStack_438 - (long)ppuStack_440 >> 3;
            Var6 = (unkuint9)uVar38;
            if (uVar38 < 2) {
              uVar38 = 1;
            }
            do {
              uVar55 = uVar38;
              pfVar29 = (float *)((long)ppuStack_440 + 4);
              pfVar36 = pfVar48;
              if (ppuStack_438 != ppuStack_440) {
                do {
                  ppuVar34 = (undefined **)((ulong)puVar65 >> 0x20);
                  puVar65 = (uint *)((long)ppuVar34 + ((ulong)puVar65 & 0xffffffff) * 0xf83f630a);
                  *pfVar36 = pfVar29[-1] +
                             (*pfVar29 - pfVar29[-1]) *
                             (-(1.0 / (float)(unkint9)Var6) +
                             ((1.0 / (float)(unkint9)Var6) * 2.0 + 1.0) *
                             ((float)((ulong)puVar65 & 0xffffffff) / 4.2949673e+09));
                  uVar55 = uVar55 - 1;
                  pfVar29 = pfVar29 + 2;
                  pfVar36 = pfVar36 + 1;
                } while (uVar55 != 0);
                *ppuVar27 = puVar65;
              }
              ppuVar26 = (undefined **)((long)ppuVar26 + 1);
              pfVar48 = (float *)((long)pfVar48 + lVar59);
            } while (ppuVar26 != ppuVar52);
          }
          else {
            uVar9 = uStack_348._4_4_;
            uVar55 = (ulong)uStack_348._4_4_;
            uVar8 = (uint)uStack_348;
            uVar58 = uStack_348 & 0xffffffff;
            FUN_10925b8c4(&uStack_268,ppuVar52);
            ppuVar43 = uStack_268;
            lVar59 = (long)(int)uVar8;
            ppuVar34 = (undefined **)(lVar59 * 3);
            FUN_109367d10(&uStack_280);
            uVar38 = uVar38 >> 2;
            pfVar48 = (float *)CONCAT44(uStack_27c,uStack_280);
            puVar65 = (uint *)(((ulong)*ppuVar27 >> 0x20) +
                              ((ulong)*ppuVar27 & 0xffffffff) * 0xf83f630a);
            *ppuVar27 = puVar65;
            uVar49 = 0;
            uVar50 = (uint)puVar65;
            if (uVar8 != 0) {
              uVar49 = uVar50 / uVar8;
            }
            uVar50 = uVar50 - uVar49 * uVar8;
            *(uint *)ppuVar43 = uVar50;
            if ((int)uVar8 < 1) {
              dVar66 = 0.0;
            }
            else {
              uVar39 = 0;
              dVar66 = 0.0;
              ppuVar41 = ppuVar26;
              do {
                if ((int)uVar9 < 1) {
                  fVar63 = 0.0;
                }
                else {
                  lVar46 = 0;
                  fVar63 = 0.0;
                  ppuVar35 = ppuVar41;
                  uVar40 = uVar55;
                  do {
                    fVar64 = *(float *)ppuVar35 -
                             *(float *)((long)ppuVar26 + lVar46 * 4 + uVar38 * uVar50 * 4);
                    fVar63 = fVar63 + fVar64 * fVar64;
                    lVar46 = lVar46 + 1;
                    uVar40 = uVar40 - 1;
                    ppuVar35 = (undefined **)((long)ppuVar35 + 4);
                  } while (uVar40 != 0);
                }
                pfVar48[uVar39] = fVar63;
                dVar66 = dVar66 + (double)fVar63;
                uVar39 = uVar39 + 1;
                ppuVar41 = (undefined **)((long)ppuVar41 + uVar38 * 4);
              } while (uVar39 != uVar58);
            }
            if (1 < (int)param_2) {
              pfVar29 = pfVar48 + lVar59 + lVar59;
              ppuVar41 = (undefined **)0x1;
              pfVar36 = pfVar48 + lVar59;
              do {
                iVar32 = 0;
                uVar39 = 0xffffffff;
                dVar69 = 1.79769313486232e+308;
                pfVar53 = pfVar29;
                pfVar60 = pfVar36;
                do {
                  uVar40 = ((ulong)*ppuVar27 >> 0x20) + ((ulong)*ppuVar27 & 0xffffffff) * 0xf83f630a
                  ;
                  puVar65 = (uint *)((uVar40 >> 0x20) + (uVar40 & 0xffffffff) * 0xf83f630a);
                  *ppuVar27 = puVar65;
                  if ((int)uVar8 < 2) {
                    uVar40 = 0;
                  }
                  else {
                    uVar56 = 0;
                    dVar62 = dVar66 * ((double)((ulong)puVar65 & 0xffffffff | uVar40 << 0x20) / 1.0)
                    ;
                    do {
                      dVar62 = dVar62 - (double)pfVar48[uVar56];
                      uVar40 = uVar56;
                      if (dVar62 <= 0.0) break;
                      uVar56 = uVar56 + 1;
                      uVar40 = (ulong)(uVar8 - 1);
                    } while (uVar8 - 1 != uVar56);
                  }
                  uStack_288 = 0;
                  uStack_284 = uVar8;
                  lStack_210 = uVar38 * (uVar40 & 0xffffffff);
                  uStack_240 = &PTR_DAT_110b21be0;
                  ppuStack_230 = ppuVar26;
                  uStack_220 = CONCAT44(uStack_220._4_4_,uVar9);
                  ppuVar34 = (undefined **)&uStack_240;
                  pfStack_238 = pfVar53;
                  pfStack_228 = pfVar48;
                  uStack_218 = uVar38;
                  func_0x000109aa87cc(0xbff0000000000000,&uStack_288);
                  dVar62 = 0.0;
                  pfVar29 = pfVar53;
                  uVar56 = uVar58;
                  if (0 < (int)uVar8) {
                    do {
                      dVar62 = dVar62 + (double)*pfVar29;
                      uVar56 = uVar56 - 1;
                      pfVar29 = pfVar29 + 1;
                    } while (uVar56 != 0);
                  }
                  pfVar29 = pfVar53;
                  if (dVar62 < dVar69) {
                    pfVar29 = pfVar60;
                    uVar39 = uVar40;
                    pfVar60 = pfVar53;
                    dVar69 = dVar62;
                  }
                  iVar32 = iVar32 + 1;
                  pfVar53 = pfVar29;
                } while (iVar32 != 3);
                *(uint *)((long)ppuVar43 + (long)ppuVar41 * 4) = (uint)uVar39;
                ppuVar41 = (undefined **)((long)ppuVar41 + 1);
                pfVar36 = pfVar48;
                pfVar48 = pfVar60;
                dVar66 = dVar69;
              } while (ppuVar41 != ppuVar52);
            }
            ppuVar41 = (undefined **)0x0;
            puVar65 = (uint *)CONCAT44(uStack_10c,uStack_110);
            lVar59 = *plStack_d8;
            do {
              if (0 < (int)uVar9) {
                puVar45 = (uint *)((long)ppuVar26 +
                                  uVar38 * (long)(int)*(uint *)((long)ppuVar43 + (long)ppuVar41 * 4)
                                  * 4);
                puVar47 = puVar65;
                uVar58 = uVar55;
                do {
                  *puVar47 = *puVar45;
                  uVar58 = uVar58 - 1;
                  puVar45 = puVar45 + 1;
                  puVar47 = puVar47 + 1;
                } while (uVar58 != 0);
              }
              ppuVar41 = (undefined **)((long)ppuVar41 + 1);
              puVar65 = (uint *)((long)puVar65 + lVar59);
            } while (ppuVar41 != ppuVar52);
            if (CONCAT44(uStack_27c,uStack_280) != 0) {
              lStack_278 = CONCAT44(uStack_27c,uStack_280);
              __ZdlPv();
            }
            if (uStack_268 != (undefined **)0x0) {
              ppuStack_260 = uStack_268;
              __ZdlPv();
            }
          }
        }
        else {
          if (((param_7 & 1) != 0) &&
             (puVar65 = puVar30, ppuVar34 = ppuStack_448, iVar54 == 0 && iVar37 == 0)) {
            do {
              if (param_2 <= *puVar65) {
                puVar31 = (undefined4 *)0x28;
                func_0x000107c2ae8c();
                *puVar31 = 1;
                uStack_240 = (undefined **)(puVar31 + 1);
                pfStack_238 = (float *)0x21;
                *(undefined2 *)(puVar31 + 9) = 0x4b;
                *(undefined8 *)(puVar31 + 3) = 0x736c6562616c2964;
                *(undefined8 *)(puVar31 + 1) = 0x656e6769736e7528;
                *(undefined8 *)(puVar31 + 7) = 0x2964656e6769736e;
                *(undefined8 *)(puVar31 + 5) = 0x7528203c205d695b;
                FUN_109ac3188(0xffffff29,&uStack_240,&UNK_10f596cf9,&UNK_10f596d00,0x13f);
                goto LAB_109a56e94;
              }
              ppuVar34 = (undefined **)((long)ppuVar34 + -1);
              puVar65 = puVar65 + 1;
            } while (ppuVar34 != (undefined **)0x0);
          }
          pfStack_238 = (float *)0x0;
          uStack_240 = (undefined **)0x0;
          pfStack_228 = (float *)0x0;
          ppuStack_230 = (undefined **)0x0;
          FUN_109a48880(&uStack_120,&uStack_240);
          puVar65 = puStack_428;
          ppuVar34 = (undefined **)((long)ppuVar52 << 2);
          _bzero(puStack_428);
          ppuVar43 = (undefined **)0x0;
          uVar38 = *puStack_308;
          lVar59 = *plStack_d8;
          ppuVar26 = ppuStack_340 + 1;
          ppuVar41 = ppuStack_340;
          do {
            lVar46 = (long)(int)puVar30[(long)ppuVar43];
            if ((int)uVar4 < 4) {
              uVar55 = 0;
            }
            else {
              uVar55 = 0;
              puVar28 = (undefined8 *)(CONCAT44(uStack_10c,uStack_110) + 8 + lVar59 * lVar46);
              ppuVar35 = ppuVar26;
              do {
                puVar28[-1] = CONCAT44((float)((ulong)puVar28[-1] >> 0x20) +
                                       (float)((ulong)ppuVar35[-1] >> 0x20),
                                       (float)puVar28[-1] + SUB84(ppuVar35[-1],0));
                ppuVar34 = ppuVar35 + 2;
                *puVar28 = CONCAT44((float)((ulong)*puVar28 >> 0x20) +
                                    (float)((ulong)*ppuVar35 >> 0x20),
                                    (float)*puVar28 + SUB84(*ppuVar35,0));
                uVar55 = uVar55 + 4;
                puVar28 = puVar28 + 2;
                ppuVar35 = ppuVar34;
              } while ((long)uVar55 <= (long)(int)(uVar4 - 4));
              uVar55 = uVar55 & 0xffffffff;
            }
            if ((int)uVar55 < (int)uVar4) {
              lVar51 = uVar57 - uVar55;
              pfVar48 = (float *)((long)ppuVar41 + uVar55 * 4);
              pfVar29 = (float *)(CONCAT44(uStack_10c,uStack_110) + lVar59 * lVar46 + uVar55 * 4);
              do {
                *pfVar29 = *pfVar48 + *pfVar29;
                lVar51 = lVar51 + -1;
                pfVar48 = pfVar48 + 1;
                pfVar29 = pfVar29 + 1;
              } while (lVar51 != 0);
            }
            puVar65[lVar46] = puVar65[lVar46] + 1;
            ppuVar43 = (undefined **)((long)ppuVar43 + 1);
            ppuVar26 = (undefined **)((long)ppuVar26 + uVar38);
            ppuVar41 = (undefined **)((long)ppuVar41 + uVar38);
          } while (ppuVar43 != ppuStack_448);
          ppuVar26 = (undefined **)0x0;
          lVar59 = CONCAT44(uStack_10c,uStack_110);
          do {
            if (puVar65[(long)ppuVar26] == 0) {
              if ((int)param_2 < 2) {
                uVar50 = 0;
              }
              else {
                ppuVar34 = (undefined **)0x1;
                uVar49 = 0;
                do {
                  uVar50 = (uint)ppuVar34;
                  if ((int)puVar65[(long)ppuVar34] <= (int)puVar65[(int)uVar49]) {
                    uVar50 = uVar49;
                  }
                  ppuVar34 = (undefined **)((long)ppuVar34 + 1);
                  uVar49 = uVar50;
                } while (ppuVar52 != ppuVar34);
              }
              lVar46 = *plStack_d8;
              pfVar48 = (float *)(lVar59 + lVar46 * (int)uVar50);
              uVar49 = puVar65[(int)uVar50];
              if (0 < (int)uVar4) {
                pfVar29 = pfVar48;
                pfVar36 = (float *)CONCAT44(uStack_1cc,uStack_1d0);
                uVar38 = uVar57;
                do {
                  *pfVar36 = (1.0 / (float)(int)uVar49) * *pfVar29;
                  uVar38 = uVar38 - 1;
                  pfVar29 = pfVar29 + 1;
                  pfVar36 = pfVar36 + 1;
                } while (uVar38 != 0);
              }
              ppuVar34 = (undefined **)0x0;
              dVar66 = 0.0;
              iVar32 = -1;
              do {
                if (puVar30[(long)ppuVar34] == uVar50) {
                  if ((int)uVar4 < 1) {
                    dVar69 = 0.0;
                  }
                  else {
                    fVar63 = 0.0;
                    ppuVar43 = (undefined **)((long)ppuStack_340 + *puStack_308 * (long)ppuVar34);
                    pfVar29 = (float *)CONCAT44(uStack_1cc,uStack_1d0);
                    uVar38 = uVar57;
                    do {
                      fVar63 = fVar63 + (*(float *)ppuVar43 - *pfVar29) *
                                        (*(float *)ppuVar43 - *pfVar29);
                      uVar38 = uVar38 - 1;
                      ppuVar43 = (undefined **)((long)ppuVar43 + 4);
                      pfVar29 = pfVar29 + 1;
                    } while (uVar38 != 0);
                    dVar69 = (double)fVar63;
                  }
                  if (dVar66 <= dVar69) {
                    iVar32 = (int)ppuVar34;
                    dVar66 = dVar69;
                  }
                }
                ppuVar34 = (undefined **)((long)ppuVar34 + 1);
              } while (ppuVar34 != ppuStack_448);
              puVar65[(int)uVar50] = uVar49 - 1;
              puVar65[(long)ppuVar26] = puVar65[(long)ppuVar26] + 1;
              puVar30[iVar32] = (uint)ppuVar26;
              if (0 < (int)uVar4) {
                pfVar29 = (float *)(lVar59 + lVar46 * (long)ppuVar26);
                ppuVar43 = (undefined **)((long)ppuStack_340 + *puStack_308 * (long)iVar32);
                uVar38 = uVar57;
                do {
                  *pfVar48 = *pfVar48 - *(float *)ppuVar43;
                  *pfVar29 = *(float *)ppuVar43 + *pfVar29;
                  uVar38 = uVar38 - 1;
                  pfVar48 = pfVar48 + 1;
                  pfVar29 = pfVar29 + 1;
                  ppuVar43 = (undefined **)((long)ppuVar43 + 4);
                } while (uVar38 != 0);
              }
            }
            ppuVar26 = (undefined **)((long)ppuVar26 + 1);
          } while (ppuVar26 != ppuVar52);
          ppuVar26 = (undefined **)0x0;
          if (iVar54 != 0) {
            dVar68 = 0.0;
          }
          lVar46 = *plStack_d8;
          dVar66 = dVar68;
          do {
            uVar50 = puVar65[(long)ppuVar26];
            if (uVar50 == 0) {
              puVar31 = (undefined4 *)0x18;
              func_0x000107c2ae8c();
              *puVar31 = 1;
              uStack_240 = (undefined **)(puVar31 + 1);
              pfStack_238 = (float *)0x10;
              *(undefined1 *)(puVar31 + 5) = 0;
              *(undefined8 *)(puVar31 + 3) = 0x30203d21205d6b5b;
              *(undefined8 *)(puVar31 + 1) = 0x737265746e756f63;
              FUN_109ac3188(0xffffff29,&uStack_240,&UNK_10f596cf9,&UNK_10f596d00,0x19b);
              goto LAB_109a56e94;
            }
            dVar68 = dVar66;
            if ((int)uVar4 < 1) {
              dVar69 = 0.0;
              if (iVar54 != 0) goto LAB_109a5642c;
            }
            else {
              uVar38 = 0;
              do {
                *(float *)(lVar59 + uVar38 * 4) =
                     (1.0 / (float)(int)uVar50) * *(float *)(lVar59 + uVar38 * 4);
                uVar38 = uVar38 + 1;
              } while (uVar57 != uVar38);
              if (iVar54 != 0) {
                uVar38 = 0;
                dVar69 = 0.0;
                do {
                  dVar68 = (double)(*(float *)(lVar59 + uVar38 * 4) -
                                   *(float *)(CONCAT44(uStack_16c,uStack_170) +
                                              *plStack_138 * (long)ppuVar26 + uVar38 * 4));
                  dVar69 = dVar69 + dVar68 * dVar68;
                  uVar38 = uVar38 + 1;
                } while (uVar57 != uVar38);
LAB_109a5642c:
                dVar68 = dVar69;
                if (dVar69 <= dVar66) {
                  dVar68 = dVar66;
                }
              }
            }
            ppuVar26 = (undefined **)((long)ppuVar26 + 1);
            lVar59 = lVar59 + lVar46;
            dVar66 = dVar68;
          } while (ppuVar26 != ppuVar52);
        }
        iVar54 = iVar54 + 1;
        if ((iVar54 == iVar3) || (dVar68 <= dVar61 * dVar61)) goto LAB_109a56854;
        uStack_240 = (undefined **)CONCAT44(uStack_240._4_4_,0x42ff0000);
        puVar44[1] = 0;
        *puVar44 = 0;
        puVar44[3] = 0;
        puVar44[2] = 0;
        puVar44[5] = 0;
        puVar44[4] = 0;
        *(undefined8 *)((long)puVar44 + 0x34) = 0;
        *(undefined8 *)((long)puVar44 + 0x2c) = 0;
        uStack_1f0 = 0;
        uStack_1e8 = 0;
        uStack_268 = (undefined **)CONCAT44(uVar2,1);
        ppfStack_200 = &pfStack_238;
        puStack_1f8 = &uStack_1f0;
        FUN_109a83fd0(&uStack_240,2,&uStack_268,6);
        ppuVar43 = ppuStack_230;
        uStack_280 = 0;
        uStack_268 = &PTR_FUN_110b21c20;
        ppuStack_260 = ppuStack_230;
        puStack_250 = &uStack_350;
        ppuVar34 = (undefined **)&uStack_268;
        uStack_27c = uVar2;
        puStack_258 = puVar30;
        puStack_248 = &uStack_120;
        func_0x000109aa87cc(0xbff0000000000000,&uStack_280);
        dVar67 = 0.0;
        ppuVar26 = ppuStack_448;
        do {
          dVar67 = dVar67 + (double)*ppuVar43;
          ppuVar26 = (undefined **)((long)ppuVar26 + -1);
          ppuVar43 = ppuVar43 + 1;
        } while (ppuVar26 != (undefined **)0x0);
        if (lStack_208 != 0) {
          piVar1 = (int *)(lStack_208 + 0x14);
          do {
            iVar32 = *piVar1;
            cVar5 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar25) {
              *piVar1 = iVar32 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar32 + -1 == 0) {
            func_0x000109a848d4(&uStack_240);
          }
        }
        lStack_208 = 0;
        pfStack_228 = (float *)0x0;
        ppuStack_230 = (undefined **)0x0;
        uStack_218 = 0;
        uStack_220 = 0;
        if (0 < uStack_240._4_4_) {
          lVar59 = 0;
          do {
            *(undefined4 *)((long)ppfStack_200 + lVar59 * 4) = 0;
            lVar59 = lVar59 + 1;
          } while (lVar59 < uStack_240._4_4_);
        }
        if (puStack_1f8 != &uStack_1f0 && puStack_1f8 != (undefined8 *)0x0) {
          _free(puStack_1f8[-1]);
        }
      } while( true );
    }
    puVar44 = (undefined8 *)0xc;
    func_0x000107c2ae8c();
    *puVar44 = 0x3d3e204e00000001;
    uStack_350 = (undefined4 *)((long)puVar44 + 4);
    uStack_348 = 6;
    *(undefined1 *)((long)puVar44 + 10) = 0;
    *(undefined2 *)(puVar44 + 1) = 0x4b20;
    FUN_109ac3188(0xffffff29,&uStack_350,&UNK_10f596cf9,&UNK_10f596d00,0xe7);
  }
LAB_109a56e94:
                    /* WARNING: Does not return */
  pcVar24 = (code *)SoftwareBreakpoint(1,0x109a56e98);
  (*pcVar24)();
LAB_109a56854:
  if (dVar67 < dStack_4f8) {
    if ((*(byte *)(param_8 + 2) & 0x1f) != 0) {
      FUN_109a479a0(&uStack_120);
    }
    uStack_240 = (undefined **)CONCAT44(uStack_240._4_4_,0x2010000);
    ppuStack_230 = (undefined **)0x0;
    pfStack_238 = (float *)&uStack_410;
    ppuVar34 = (undefined **)&uStack_240;
    FUN_109a479a0(&uStack_3b0);
    dStack_4f8 = dVar67;
  }
  iVar54 = (int)ppuVar34;
  if ((param_2 == 1) || (iVar37 = iVar37 + 1, param_6 <= iVar37)) {
    if (ppuStack_440 != (uint **)0x0) {
      ppuStack_438 = ppuStack_440;
      __ZdlPv();
    }
    puVar30 = puStack_428;
    if (puStack_428 != (uint *)0x0) {
      puStack_420 = puStack_428;
      __ZdlPv();
      puVar30 = puStack_428;
    }
    if (lStack_1a8 != 0) {
      piVar1 = (int *)(lStack_1a8 + 0x14);
      do {
        iVar37 = *piVar1;
        cVar5 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = iVar37 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar37 + -1 == 0) {
        puVar30 = &uStack_1e0;
        func_0x000109a848d4(puVar30);
      }
    }
    lStack_1a8 = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    if (0 < (int)uStack_1dc) {
      lVar59 = 0;
      do {
        *(undefined4 *)(lStack_1a0 + lVar59 * 4) = 0;
        lVar59 = lVar59 + 1;
      } while (lVar59 < (int)uStack_1dc);
    }
    if (puStack_198 != &uStack_190 && puStack_198 != (undefined8 *)0x0) {
      puVar30 = (uint *)puStack_198[-1];
      _free(puVar30);
    }
    if (lStack_148 != 0) {
      piVar1 = (int *)(lStack_148 + 0x14);
      do {
        iVar37 = *piVar1;
        cVar5 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = iVar37 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar37 + -1 == 0) {
        puVar30 = &uStack_180;
        func_0x000109a848d4(puVar30);
      }
    }
    lStack_148 = 0;
    uStack_168 = 0;
    uStack_164 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    if (0 < (int)uStack_17c) {
      lVar59 = 0;
      do {
        *(undefined4 *)(uStack_140 + lVar59 * 4) = 0;
        lVar59 = lVar59 + 1;
      } while (lVar59 < (int)uStack_17c);
    }
    if (plStack_138 != &lStack_130 && plStack_138 != (long *)0x0) {
      puVar30 = (uint *)plStack_138[-1];
      _free(puVar30);
    }
    if (lStack_e8 != 0) {
      piVar1 = (int *)(lStack_e8 + 0x14);
      do {
        iVar37 = *piVar1;
        cVar5 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = iVar37 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar37 + -1 == 0) {
        puVar30 = (uint *)&uStack_120;
        func_0x000109a848d4(puVar30);
      }
    }
    lStack_e8 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    if (0 < (int)uStack_120._4_4_) {
      lVar59 = 0;
      do {
        *(undefined4 *)(uStack_e0 + lVar59 * 4) = 0;
        lVar59 = lVar59 + 1;
      } while (lVar59 < (int)uStack_120._4_4_);
    }
    if (plStack_d8 != &lStack_d0 && plStack_d8 != (long *)0x0) {
      puVar30 = (uint *)plStack_d8[-1];
      _free(puVar30);
    }
    if (uStack_3d8 != 0) {
      piVar1 = (int *)(uStack_3d8 + 0x14);
      do {
        iVar37 = *piVar1;
        cVar5 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = iVar37 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar37 + -1 == 0) {
        puVar30 = (uint *)&uStack_410;
        func_0x000109a848d4(puVar30);
      }
    }
    uStack_3d8 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    if (0 < uStack_410._4_4_) {
      lVar59 = 0;
      do {
        puStack_3d0[lVar59] = 0;
        lVar59 = lVar59 + 1;
      } while (lVar59 < uStack_410._4_4_);
    }
    if (puStack_3c8 != &uStack_3c0 && puStack_3c8 != (undefined8 *)0x0) {
      puVar30 = (uint *)puStack_3c8[-1];
      _free(puVar30);
    }
    if (lStack_378 != 0) {
      piVar1 = (int *)(lStack_378 + 0x14);
      do {
        iVar37 = *piVar1;
        cVar5 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = iVar37 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar37 + -1 == 0) {
        puVar30 = &uStack_3b0;
        func_0x000109a848d4(puVar30);
      }
    }
    lStack_378 = 0;
    uStack_398 = 0;
    uStack_394 = 0;
    uStack_3a0 = 0;
    uStack_39c = 0;
    uStack_388 = 0;
    uStack_384 = 0;
    uStack_390 = 0;
    uStack_38c = 0;
    if (0 < (int)uStack_3ac) {
      lVar59 = 0;
      do {
        *(undefined4 *)(lStack_370 + lVar59 * 4) = 0;
        lVar59 = lVar59 + 1;
      } while (lVar59 < (int)uStack_3ac);
    }
    if (puStack_368 != &uStack_360 && puStack_368 != (undefined8 *)0x0) {
      puVar30 = (uint *)puStack_368[-1];
      _free(puVar30);
    }
    if (lStack_318 != 0) {
      piVar1 = (int *)(lStack_318 + 0x14);
      do {
        iVar37 = *piVar1;
        cVar5 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = iVar37 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar37 + -1 == 0) {
        puVar30 = (uint *)&uStack_350;
        func_0x000109a848d4(puVar30);
      }
    }
    lStack_318 = 0;
    uStack_338 = 0;
    ppuStack_340 = (undefined **)0x0;
    uStack_328 = 0;
    uStack_330 = 0;
    if (0 < uStack_350._4_4_) {
      lVar59 = 0;
      do {
        *(undefined4 *)(lStack_310 + lVar59 * 4) = 0;
        lVar59 = lVar59 + 1;
      } while (lVar59 < uStack_350._4_4_);
    }
    if (puStack_308 != auStack_300 && puStack_308 != (ulong *)0x0) {
      puVar30 = (uint *)puStack_308[-1];
      _free(puVar30);
    }
    if (uStack_2b8 != 0) {
      piVar1 = (int *)(uStack_2b8 + 0x14);
      do {
        iVar37 = *piVar1;
        cVar5 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = iVar37 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar37 + -1 == 0) {
        puVar30 = (uint *)&uStack_2f0;
        func_0x000109a848d4(puVar30);
      }
    }
    uStack_2b8 = 0;
    dVar67 = 0.0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    if (0 < uStack_2f0._4_4_) {
      lVar59 = 0;
      do {
        *(undefined4 *)(uStack_2b0 + lVar59 * 4) = 0;
        lVar59 = lVar59 + 1;
      } while (lVar59 < uStack_2f0._4_4_);
    }
    if (puStack_2a8 != &uStack_2a0 && puStack_2a8 != (ulong *)0x0) {
      puVar30 = (uint *)puStack_2a8[-1];
      _free(puVar30);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      if (iVar54 == 0) {
        __Unwind_Resume(puVar30);
      }
      func_0x000104bd46a0(puVar30);
      return dVar67;
    }
    return dStack_4f8;
  }
  goto LAB_109a55fa8;
}



/* Entry: 109a573d0; end: 109a5752f;  */

void FUN_109a573d0(void)

{
  return;
}



/* Entry: 109a57530; end: 109a57c7b;  */

double FUN_109a57530(double *param_1,undefined8 param_2,int param_3)

{
  float *pfVar1;
  double *pdVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  double *pdVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  double *pdVar19;
  ulong *puVar20;
  long lVar21;
  int *piVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  float fVar43;
  double dVar44;
  float fVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined4 uStack_c20;
  undefined4 uStack_c1c;
  undefined4 uStack_c18;
  undefined4 uStack_c14;
  undefined4 uStack_c10;
  undefined4 uStack_c0c;
  undefined4 uStack_c08;
  undefined4 uStack_c04;
  undefined4 uStack_c00;
  undefined4 uStack_bfc;
  long lStack_bf8;
  undefined8 *puStack_bf0;
  undefined8 *puStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined4 auStack_bd0 [2];
  undefined8 *puStack_bc8;
  undefined8 uStack_bc0;
  undefined4 auStack_bb8 [2];
  undefined8 *puStack_bb0;
  undefined8 uStack_ba8;
  undefined4 auStack_ba0 [2];
  undefined8 *puStack_b98;
  undefined8 uStack_b90;
  undefined4 auStack_b88 [2];
  undefined8 *puStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  long lStack_b60;
  long lStack_b58;
  long lStack_b50;
  long lStack_b48;
  undefined8 uStack_b40;
  long lStack_b38;
  undefined8 *puStack_b30;
  long *plStack_b28;
  long lStack_b20;
  long lStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  double *pdStack_b00;
  double *pdStack_af8;
  undefined8 *puStack_af0;
  undefined8 *puStack_ae8;
  undefined8 uStack_ae0;
  long lStack_ad8;
  undefined8 *puStack_ad0;
  long *plStack_ac8;
  long lStack_ac0;
  long lStack_ab8;
  undefined8 uStack_ab0;
  ulong uStack_aa8;
  double *pdStack_aa0;
  double *pdStack_a98;
  double *pdStack_a90;
  double *pdStack_a88;
  ulong uStack_a80;
  ulong uStack_a78;
  ulong *puStack_a70;
  long *plStack_a68;
  long lStack_a60;
  long lStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  double *pdStack_a40;
  ulong uStack_a38;
  ulong uStack_a30;
  ulong uStack_a28;
  ulong uStack_a20;
  ulong uStack_a18;
  ulong uStack_a10;
  long *plStack_a08;
  long lStack_a00;
  long lStack_9f8;
  undefined8 *puStack_9f0;
  undefined8 *puStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  long lStack_5d0;
  int *piStack_550;
  undefined4 auStack_548 [2];
  undefined8 *puStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  int iStack_528;
  int iStack_524;
  double *pdStack_520;
  double *pdStack_518;
  double *pdStack_510;
  double *pdStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  int *piStack_4f0;
  double **ppdStack_4e8;
  double *pdStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  double *pdStack_4c0;
  double dStack_4b8;
  double dStack_4b0;
  double dStack_4a8;
  double dStack_4a0;
  double dStack_498;
  int *piStack_490;
  long *plStack_488;
  long lStack_480;
  long lStack_478;
  double *pdStack_470;
  double *pdStack_468;
  double adStack_460 [129];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)*param_1 & 0x1f0000) == 0x10000) {
    pdVar19 = (double *)param_1[1];
    uStack_4c8 = pdVar19[1];
    uStack_4d0 = *pdVar19;
    dStack_4b8 = pdVar19[3];
    pdStack_4c0 = (double *)pdVar19[2];
    dStack_4a8 = pdVar19[5];
    dStack_4b0 = pdVar19[4];
    dStack_498 = pdVar19[7];
    dStack_4a0 = pdVar19[6];
    piStack_490 = (int *)((ulong)&uStack_4d0 | 8);
    plStack_488 = &lStack_480;
    lStack_480 = 0;
    lStack_478 = 0;
    if (pdVar19[7] != 0.0) {
      piVar22 = (int *)((long)pdVar19[7] + 0x14);
      do {
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar13) {
          *piVar22 = *piVar22 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if ((int)*(uint *)((long)pdVar19 + 4) < 3) {
      lStack_480 = *(long *)pdVar19[9];
      lStack_478 = ((long *)pdVar19[9])[1];
    }
    else {
      uStack_4d0 = (double)((ulong)uStack_4d0 & 0xffffffff);
      param_1 = (double *)&uStack_4d0;
      func_0x000109a84868();
    }
  }
  else {
    pdVar19 = (double *)0xffffffff;
    FUN_109a8a180(&uStack_4d0);
  }
  if (pdStack_4c0 != (double *)0x0) {
    uVar24 = (ulong)uStack_4d0._4_4_;
    iVar14 = (int)uStack_4c8;
    uVar26 = (ulong)uStack_4c8 & 0xffffffff;
    lVar25 = (long)(int)uStack_4c8;
    if ((int)uStack_4d0._4_4_ < 3) {
      lVar21 = (long)uStack_4c8._4_4_ * (long)(int)uStack_4c8;
    }
    else {
      lVar21 = 1;
      piVar22 = piStack_490;
      do {
        lVar21 = lVar21 * *piVar22;
        uVar24 = uVar24 - 1;
        piVar22 = piVar22 + 1;
      } while (uVar24 != 0);
    }
    if (lVar21 != 0) {
      if ((int)uStack_4c8 != uStack_4c8._4_4_ || 1 < ((uint)uStack_4d0 & 0xfff) - 5) {
        puVar17 = (undefined4 *)0x40;
        func_0x000107c2ae8c();
        *puVar17 = 1;
        pdStack_470 = (double *)(puVar17 + 1);
        pdStack_468 = (double *)0x3a;
        *(undefined8 *)(puVar17 + 3) = 0x2e74616d203d3d20;
        *(undefined8 *)(puVar17 + 1) = 0x73776f722e74616d;
        *(undefined1 *)((long)puVar17 + 0x3e) = 0;
        *(undefined8 *)(puVar17 + 7) = 0x3d3d206570797428;
        *(undefined8 *)(puVar17 + 5) = 0x20262620736c6f63;
        *(undefined8 *)(puVar17 + 0xb) = 0x2065707974207c7c;
        *(undefined8 *)(puVar17 + 9) = 0x204632335f564320;
        *(undefined8 *)((long)puVar17 + 0x36) = 0x294634365f564320;
        *(undefined8 *)((long)puVar17 + 0x2e) = 0x3d3d206570797420;
        FUN_109ac3188(0xffffff29,&pdStack_470,&UNK_10f49168a,&UNK_10f596e57,0x2d3);
        goto LAB_109a57bb4;
      }
      if (((uint)uStack_4d0 & 0xfff) == 5) {
        if ((int)uStack_4c8 == 1) {
          dVar42 = (double)*(float *)pdStack_4c0;
        }
        else if ((int)uStack_4c8 == 3) {
          pfVar3 = (float *)((long)pdStack_4c0 + lStack_480);
          pfVar1 = (float *)((long)pdStack_4c0 + lStack_480 * 2);
          dVar42 = -((-((double)pfVar3[2] * (double)*pfVar1) + (double)pfVar1[2] * (double)*pfVar3)
                    * (double)*(float *)((long)pdStack_4c0 + 4)) +
                   (-((double)pfVar3[2] * (double)pfVar1[1]) + (double)pfVar1[2] * (double)pfVar3[1]
                   ) * (double)*(float *)pdStack_4c0;
          dVar8 = (double)*(float *)(pdStack_4c0 + 1);
          dVar28 = -((double)pfVar3[1] * (double)*pfVar1) + (double)pfVar1[1] * (double)*pfVar3;
LAB_109a57770:
          dVar42 = dVar42 + dVar28 * dVar8;
        }
        else {
          if ((int)uStack_4c8 == 2) {
            dVar28 = (double)*(float *)pdStack_4c0;
            dVar8 = (double)((float *)((long)pdStack_4c0 + lStack_480))[1];
            dVar42 = (double)*(float *)((long)pdStack_4c0 + 4);
            dVar36 = (double)*(float *)((long)pdStack_4c0 + lStack_480);
            goto LAB_109a576bc;
          }
          pdVar19 = (double *)((ulong)(uint)((int)uStack_4c8 * (int)uStack_4c8) << 2);
          pdStack_470 = adStack_460;
          pdVar15 = pdStack_470;
          if (0x102 < (uint)((int)uStack_4c8 * (int)uStack_4c8)) {
            pdVar15 = pdVar19;
            __Znam();
          }
          puStack_540 = &uStack_530;
          piStack_4f0 = &iStack_528;
          iStack_528 = iVar14;
          iStack_524 = iVar14;
          uStack_500 = 0;
          lStack_4f8 = 0;
          ppdStack_4e8 = &pdStack_4e0;
          pdStack_4e0 = (double *)(lVar25 * 4);
          uStack_530 = 0x242ff4005;
          uStack_4d8 = 4;
          pdStack_510 = (double *)((long)pdVar15 + (long)pdStack_4e0 * lVar25);
          auStack_548[0] = 0x2010000;
          uStack_538 = 0;
          pdStack_520 = pdVar15;
          pdStack_518 = pdVar15;
          pdStack_508 = pdStack_510;
          pdStack_470 = pdVar15;
          pdStack_468 = pdVar19;
          FUN_109a479a0(&uStack_4d0,auStack_548);
          pdVar15 = pdStack_520;
          pdVar19 = pdStack_4e0;
          uVar24 = uVar26;
          FUN_109aa4d88();
          param_3 = (int)uVar24;
          dVar42 = (double)(int)pdVar15;
          if ((int)pdVar15 != 0) {
            if (0 < iVar14) {
              pdVar15 = pdStack_520;
              do {
                dVar42 = dVar42 * (double)*(float *)pdVar15;
                pdVar15 = (double *)((long)pdVar15 + (long)*ppdStack_4e8 + 4);
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
            dVar42 = 1.0 / dVar42;
          }
          if (lStack_4f8 != 0) {
            piVar22 = (int *)(lStack_4f8 + 0x14);
            do {
              iVar14 = *piVar22;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar13) {
                *piVar22 = iVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_530);
            }
          }
          if (0 < uStack_530._4_4_) {
            lVar25 = 0;
            do {
              piStack_4f0[lVar25] = 0;
              lVar25 = lVar25 + 1;
            } while (lVar25 < uStack_530._4_4_);
          }
LAB_109a57a04:
          lStack_4f8 = 0;
          pdStack_508 = (double *)0x0;
          pdStack_510 = (double *)0x0;
          pdStack_518 = (double *)0x0;
          pdStack_520 = (double *)0x0;
          if (ppdStack_4e8 != &pdStack_4e0 && ppdStack_4e8 != (double **)0x0) {
            _free(ppdStack_4e8[-1]);
          }
          param_1 = pdStack_470;
          if (pdStack_470 != adStack_460 && pdStack_470 != (double *)0x0) {
            __ZdaPv();
          }
        }
      }
      else if ((int)uStack_4c8 == 1) {
        dVar42 = *pdStack_4c0;
      }
      else {
        if ((int)uStack_4c8 == 3) {
          pdVar15 = (double *)((long)pdStack_4c0 + lStack_480);
          pdVar2 = (double *)((long)pdStack_4c0 + lStack_480 * 2);
          dVar42 = -(pdStack_4c0[1] * (-(pdVar15[2] * *pdVar2) + pdVar2[2] * *pdVar15)) +
                   (-(pdVar15[2] * pdVar2[1]) + pdVar2[2] * pdVar15[1]) * *pdStack_4c0;
          dVar8 = pdStack_4c0[2];
          dVar28 = -(pdVar15[1] * *pdVar2) + pdVar2[1] * *pdVar15;
          goto LAB_109a57770;
        }
        if ((int)uStack_4c8 != 2) {
          pdVar19 = (double *)((ulong)(uint)((int)uStack_4c8 * (int)uStack_4c8) << 3);
          pdStack_470 = adStack_460;
          pdVar15 = pdStack_470;
          if (0x81 < (uint)((int)uStack_4c8 * (int)uStack_4c8)) {
            pdVar15 = pdVar19;
            __Znam();
          }
          puStack_540 = &uStack_530;
          piStack_4f0 = &iStack_528;
          iStack_528 = iVar14;
          iStack_524 = iVar14;
          uStack_500 = 0;
          lStack_4f8 = 0;
          ppdStack_4e8 = &pdStack_4e0;
          pdStack_4e0 = (double *)(lVar25 * 8);
          uStack_530 = 0x242ff4006;
          uStack_4d8 = 8;
          pdStack_510 = (double *)((long)pdVar15 + (long)pdStack_4e0 * lVar25);
          auStack_548[0] = 0x2010000;
          uStack_538 = 0;
          pdStack_520 = pdVar15;
          pdStack_518 = pdVar15;
          pdStack_508 = pdStack_510;
          pdStack_470 = pdVar15;
          pdStack_468 = pdVar19;
          FUN_109a479a0(&uStack_4d0,auStack_548);
          pdVar15 = pdStack_520;
          pdVar19 = pdStack_4e0;
          uVar24 = uVar26;
          func_0x000109aa506c();
          param_3 = (int)uVar24;
          dVar42 = (double)(int)pdVar15;
          if ((int)pdVar15 != 0) {
            if (0 < iVar14) {
              pdVar15 = pdStack_520;
              do {
                dVar42 = dVar42 * *pdVar15;
                pdVar15 = (double *)((long)pdVar15 + (long)(*ppdStack_4e8 + 1));
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
            dVar42 = 1.0 / dVar42;
          }
          if (lStack_4f8 != 0) {
            piVar22 = (int *)(lStack_4f8 + 0x14);
            do {
              iVar14 = *piVar22;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar13) {
                *piVar22 = iVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_530);
            }
          }
          if (0 < uStack_530._4_4_) {
            lVar25 = 0;
            do {
              piStack_4f0[lVar25] = 0;
              lVar25 = lVar25 + 1;
            } while (lVar25 < uStack_530._4_4_);
          }
          goto LAB_109a57a04;
        }
        dVar28 = *pdStack_4c0;
        dVar42 = pdStack_4c0[1];
        dVar36 = *(double *)((long)pdStack_4c0 + lStack_480);
        dVar8 = ((double *)((long)pdStack_4c0 + lStack_480))[1];
LAB_109a576bc:
        dVar42 = -(dVar42 * dVar36) + dVar8 * dVar28;
      }
      if (dStack_498 != 0.0) {
        piVar22 = (int *)((long)dStack_498 + 0x14);
        do {
          iVar14 = *piVar22;
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar13) {
            *piVar22 = iVar14 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar14 + -1 == 0) {
          param_1 = (double *)&uStack_4d0;
          func_0x000109a848d4();
        }
      }
      dStack_498 = 0.0;
      dStack_4b8 = 0.0;
      pdStack_4c0 = (double *)0x0;
      dStack_4a8 = 0.0;
      dStack_4b0 = 0.0;
      if (0 < (int)uStack_4d0._4_4_) {
        lVar25 = 0;
        do {
          piStack_490[lVar25] = 0;
          lVar25 = lVar25 + 1;
        } while (lVar25 < (int)uStack_4d0._4_4_);
      }
      if (plStack_488 != &lStack_480 && plStack_488 != (long *)0x0) {
        param_1 = (double *)plStack_488[-1];
        _free();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return dVar42;
      }
      ___stack_chk_fail();
      if ((int)pdVar19 != 0) {
        func_0x000104bd46a0();
        pdStack_470 = (double *)0x0;
        pdStack_468 = (double *)0x0;
        do {
          iVar14 = *piStack_550;
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piStack_550,0x10);
          if (bVar13) {
            *piStack_550 = iVar14 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar14 + -1 == 0) {
          _free(*(undefined8 *)(piStack_550 + -2));
        }
        func_0x00010567aa40(&uStack_4d0);
      }
      __Unwind_Resume();
      lStack_5d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if (((ulong)*param_1 & 0x1f0000) == 0x10000) {
        puVar20 = (ulong *)param_1[1];
        uStack_a10 = (ulong)&uStack_a50 | 8;
        uStack_a48 = puVar20[1];
        uStack_a50 = *puVar20;
        uStack_a38 = puVar20[3];
        pdStack_a40 = (double *)puVar20[2];
        uStack_a28 = puVar20[5];
        uStack_a30 = puVar20[4];
        uStack_a18 = puVar20[7];
        uStack_a20 = puVar20[6];
        plStack_a08 = &lStack_a00;
        lStack_9f8 = 0;
        lStack_a00 = 0;
        if (puVar20[7] != 0) {
          piVar22 = (int *)(puVar20[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar13) {
              *piVar22 = *piVar22 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(int *)((long)puVar20 + 4) < 3) {
          lStack_a00 = *(long *)puVar20[9];
          lStack_9f8 = ((long *)puVar20[9])[1];
        }
        else {
          uStack_a50 = uStack_a50 & 0xffffffff;
          func_0x000109a84868(&uStack_a50);
        }
      }
      else {
        FUN_109a8a180(&uStack_a50);
      }
      uVar23 = (uint)(uStack_a50 & 0xfff);
      if (1 < uVar23 - 5) {
        puVar17 = (undefined4 *)0x28;
        func_0x000107c2ae8c();
        *puVar17 = 1;
        puStack_9f0 = (undefined8 *)(puVar17 + 1);
        puStack_9e8 = (undefined8 *)0x20;
        *(undefined1 *)(puVar17 + 9) = 0;
        *(undefined8 *)(puVar17 + 3) = 0x7c204632335f5643;
        *(undefined8 *)(puVar17 + 1) = 0x203d3d2065707974;
        *(undefined8 *)(puVar17 + 7) = 0x4634365f5643203d;
        *(undefined8 *)(puVar17 + 5) = 0x3d2065707974207c;
        FUN_109ac3188(0xffffff29,&puStack_9f0,&UNK_10f596f31,&UNK_10f596e57,0x31e);
        goto LAB_109a59068;
      }
      uVar26 = 0xfa50UL >> ((uStack_a50 & 0x1f) << 1) & 3;
      lVar25 = 1L << uVar26;
      iVar14 = (int)uStack_a48;
      uVar24 = uStack_a48 & 0xffffffff;
      iVar11 = uStack_a48._4_4_;
      lVar21 = (long)(int)uStack_a48;
      if (param_3 == 1) {
        iVar4 = uStack_a48._4_4_;
        if ((int)uStack_a48 <= uStack_a48._4_4_) {
          iVar4 = (int)uStack_a48;
        }
        puVar18 = (undefined8 *)
                  (((long)(iVar4 + iVar4 * ((int)uStack_a48 + uStack_a48._4_4_)) << uVar26) + 8);
        puVar16 = &uStack_9e0;
        if ((undefined8 *)0x408 < puVar18) {
          puVar16 = puVar18;
          puStack_9f0 = &uStack_9e0;
          __Znam();
        }
        uVar5 = uVar23 | 0x42ff0000;
        uStack_ab0 = CONCAT44(2,uVar5);
        pdStack_aa0 = (double *)((long)puVar16 + lVar25 + -1 & (long)-(int)lVar25);
        puStack_a70 = &uStack_aa8;
        uStack_aa8 = CONCAT44(iVar4,iVar14);
        pdStack_a88 = (double *)0x0;
        pdStack_a90 = (double *)0x0;
        uStack_a78 = 0;
        uStack_a80 = 0;
        lStack_a60 = 0;
        lStack_a58 = 0;
        pdStack_a98 = pdStack_aa0;
        plStack_a68 = &lStack_a60;
        puStack_9f0 = puVar16;
        puStack_9e8 = puVar18;
        if (((long)iVar14 * (long)iVar4 == 0) || (pdStack_aa0 != (double *)0x0)) {
          uVar6 = uVar23 | 0x42ff4000;
          uStack_ab0 = CONCAT44(2,uVar6);
          lStack_a60 = (long)iVar4 << uVar26;
          pdStack_a90 = (double *)((long)pdStack_aa0 + lStack_a60 * lVar21);
          pdStack_b00 = (double *)((long)pdStack_aa0 + ((long)(iVar4 * iVar14) << uVar26));
          uStack_b10 = (undefined4 *)CONCAT44(2,uVar5);
          puStack_ad0 = &uStack_b08;
          uStack_b08 = CONCAT44(1,iVar4);
          puStack_ae8 = (undefined8 *)0x0;
          puStack_af0 = (undefined8 *)0x0;
          lStack_ad8 = 0;
          uStack_ae0 = 0;
          lStack_ac0 = 0;
          lStack_ab8 = 0;
          pdStack_af8 = pdStack_b00;
          plStack_ac8 = &lStack_ac0;
          pdStack_a88 = pdStack_a90;
          if ((iVar4 != 0) && (pdStack_aa0 == (double *)0x0)) {
            puVar17 = (undefined4 *)0x24;
            lStack_a58 = lVar25;
            func_0x000107c2ae8c();
            *puVar17 = 1;
            uStack_b70 = puVar17 + 1;
            uStack_b68 = (undefined8 *)0x1c;
            *(undefined1 *)(puVar17 + 8) = 0;
            *(undefined8 *)(puVar17 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar17 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar17 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar17 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&uStack_b70,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
            goto LAB_109a59068;
          }
          uStack_b10 = (undefined4 *)CONCAT44(2,uVar6);
          lVar21 = (long)iVar11;
          lStack_b60 = (long)pdStack_b00 + lStack_a60;
          uStack_b70 = (undefined4 *)CONCAT44(2,uVar5);
          puStack_b30 = &uStack_b68;
          uStack_b68 = (undefined8 *)CONCAT44(iVar11,iVar4);
          lStack_b48 = 0;
          lStack_b50 = 0;
          lStack_b38 = 0;
          uStack_b40 = 0;
          lStack_b20 = 0;
          lStack_b18 = 0;
          lStack_b58 = lStack_b60;
          plStack_b28 = &lStack_b20;
          puStack_af0 = (undefined8 *)lStack_b60;
          puStack_ae8 = (undefined8 *)lStack_b60;
          if (((long)iVar4 * (long)iVar11 != 0) && (pdStack_aa0 == (double *)0x0)) {
            puVar17 = (undefined4 *)0x24;
            lStack_ac0 = lVar25;
            lStack_ab8 = lVar25;
            lStack_a58 = lVar25;
            func_0x000107c2ae8c();
            *puVar17 = 1;
            uStack_c30 = puVar17 + 1;
            uStack_c28._0_4_ = 0x1c;
            uStack_c28._4_4_ = 0;
            *(undefined1 *)(puVar17 + 8) = 0;
            *(undefined8 *)(puVar17 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar17 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar17 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar17 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&uStack_c30,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
            goto LAB_109a59068;
          }
          uStack_b70 = (undefined4 *)CONCAT44(2,uVar6);
          lStack_b20 = lVar21 << uVar26;
          lStack_b50 = lStack_b60 + lStack_b20 * iVar4;
          uStack_c30._0_4_ = 0x1010000;
          uStack_c28 = &uStack_a50;
          uStack_c20 = 0;
          uStack_c1c = 0;
          auStack_b88[0] = 0x2010000;
          uStack_b78 = 0;
          auStack_ba0[0] = 0x2010000;
          uStack_b90 = 0;
          auStack_bb8[0] = 0x2010000;
          uStack_ba8 = 0;
          puStack_bb0 = &uStack_b70;
          puStack_b98 = &uStack_ab0;
          puStack_b80 = &uStack_b10;
          lStack_b48 = lStack_b50;
          lStack_b18 = lVar25;
          lStack_ac0 = lVar25;
          lStack_ab8 = lVar25;
          lStack_a58 = lVar25;
          FUN_109a5c9ac(&uStack_c30,auStack_b88,auStack_ba0,auStack_bb8,0);
          uStack_b78 = 0;
          auStack_b88[0] = 0x1010000;
          uStack_b90 = 0;
          auStack_ba0[0] = 0x1010000;
          uStack_ba8 = 0;
          auStack_bb8[0] = 0x1010000;
          puStack_bb0 = &uStack_b70;
          uStack_c30._0_4_ = 0x42ff0000;
          puStack_bf0 = &uStack_c28;
          uStack_c28._4_4_ = 0;
          uStack_c20 = 0;
          uStack_c30._4_4_ = 0;
          uStack_c28._0_4_ = 0;
          uStack_c14 = 0;
          uStack_c10 = 0;
          uStack_c1c = 0;
          uStack_c18 = 0;
          uStack_c04 = 0;
          uStack_c0c = 0;
          uStack_c08 = 0;
          lStack_bf8 = 0;
          uStack_c00 = 0;
          uStack_bfc = 0;
          uStack_be0 = 0;
          uStack_bd8 = 0;
          uStack_bc0 = 0;
          auStack_bd0[0] = 0x1010000;
          puStack_be8 = &uStack_be0;
          puStack_bc8 = &uStack_c30;
          puStack_b98 = &uStack_ab0;
          puStack_b80 = &uStack_b10;
          FUN_109a59288(auStack_b88,auStack_ba0,auStack_bb8,auStack_bd0,pdVar19);
          if (lStack_bf8 != 0) {
            piVar22 = (int *)(lStack_bf8 + 0x14);
            do {
              iVar14 = *piVar22;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar13) {
                *piVar22 = iVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_c30);
            }
          }
          lStack_bf8 = 0;
          uStack_c18 = 0;
          uStack_c14 = 0;
          uStack_c20 = 0;
          uStack_c1c = 0;
          uStack_c08 = 0;
          uStack_c04 = 0;
          uStack_c10 = 0;
          uStack_c0c = 0;
          if (0 < uStack_c30._4_4_) {
            lVar25 = 0;
            do {
              *(undefined4 *)((long)puStack_bf0 + lVar25 * 4) = 0;
              lVar25 = lVar25 + 1;
            } while (lVar25 < uStack_c30._4_4_);
          }
          if (puStack_be8 != &uStack_be0 && puStack_be8 != (undefined8 *)0x0) {
            _free(puStack_be8[-1]);
          }
          if (uVar23 == 5) {
            dVar42 = 0.0;
            if (1.1920929e-07 <= *(float *)pdStack_b00) {
              dVar42 = (double)(*(float *)((long)pdStack_b00 + lVar21 * 4 + -4) /
                               *(float *)pdStack_b00);
            }
          }
          else {
            dVar42 = 0.0;
            if (2.220446049250313e-16 <= *pdStack_b00) {
              dVar42 = pdStack_b00[lVar21 + -1] / *pdStack_b00;
            }
          }
          if (lStack_b38 != 0) {
            piVar22 = (int *)(lStack_b38 + 0x14);
            do {
              iVar14 = *piVar22;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar13) {
                *piVar22 = iVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_b70);
            }
          }
          lStack_b38 = 0;
          lStack_b58 = 0;
          lStack_b60 = 0;
          lStack_b48 = 0;
          lStack_b50 = 0;
          if (0 < uStack_b70._4_4_) {
            lVar25 = 0;
            do {
              *(undefined4 *)((long)puStack_b30 + lVar25 * 4) = 0;
              lVar25 = lVar25 + 1;
            } while (lVar25 < uStack_b70._4_4_);
          }
          if (plStack_b28 != &lStack_b20 && plStack_b28 != (long *)0x0) {
            _free(plStack_b28[-1]);
          }
          if (lStack_ad8 != 0) {
            piVar22 = (int *)(lStack_ad8 + 0x14);
            do {
              iVar14 = *piVar22;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar13) {
                *piVar22 = iVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_b10);
            }
          }
          lStack_ad8 = 0;
          pdStack_af8 = (double *)0x0;
          pdStack_b00 = (double *)0x0;
          puStack_ae8 = (undefined8 *)0x0;
          puStack_af0 = (undefined8 *)0x0;
          if (0 < uStack_b10._4_4_) {
            lVar25 = 0;
            do {
              *(undefined4 *)((long)puStack_ad0 + lVar25 * 4) = 0;
              lVar25 = lVar25 + 1;
            } while (lVar25 < uStack_b10._4_4_);
          }
          if (plStack_ac8 != &lStack_ac0 && plStack_ac8 != (long *)0x0) {
            _free(plStack_ac8[-1]);
          }
          if (uStack_a78 != 0) {
            piVar22 = (int *)(uStack_a78 + 0x14);
            do {
              iVar14 = *piVar22;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar13) {
                *piVar22 = iVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_ab0);
            }
          }
          uStack_a78 = 0;
          pdStack_a98 = (double *)0x0;
          pdStack_aa0 = (double *)0x0;
          pdStack_a88 = (double *)0x0;
          pdStack_a90 = (double *)0x0;
          if (0 < uStack_ab0._4_4_) {
            lVar25 = 0;
            do {
              *(undefined4 *)((long)puStack_a70 + lVar25 * 4) = 0;
              lVar25 = lVar25 + 1;
            } while (lVar25 < uStack_ab0._4_4_);
          }
          if (plStack_a68 != &lStack_a60 && plStack_a68 != (long *)0x0) {
            _free(plStack_a68[-1]);
          }
          bVar13 = puStack_9f0 == &uStack_9e0;
LAB_109a5871c:
          if (!bVar13 && puStack_9f0 != (undefined8 *)0x0) {
            __ZdaPv();
          }
          goto LAB_109a58d08;
        }
      }
      else {
        if ((int)uStack_a48 != uStack_a48._4_4_) {
          puVar18 = (undefined8 *)0xc;
          func_0x000107c2ae8c();
          *puVar18 = 0x3d3d206d00000001;
          puStack_9f0 = (undefined8 *)((long)puVar18 + 4);
          puStack_9e8 = (undefined8 *)0x6;
          *(undefined1 *)((long)puVar18 + 10) = 0;
          *(undefined2 *)(puVar18 + 1) = 0x6e20;
          FUN_109ac3188(0xffffff29,&puStack_9f0,&UNK_10f596f31,&UNK_10f596e57,0x336);
          goto LAB_109a59068;
        }
        if (param_3 == 2) {
          uVar5 = (int)uStack_a48 * (int)uStack_a48;
          puVar18 = (undefined8 *)(((long)(int)((int)uStack_a48 + uVar5 * 2) << uVar26) + 8);
          puVar16 = &uStack_9e0;
          if ((undefined8 *)0x408 < puVar18) {
            puVar16 = puVar18;
            puStack_9f0 = &uStack_9e0;
            __Znam();
          }
          uStack_ab0 = CONCAT44(2,uVar23 | 0x42ff0000);
          pdStack_aa0 = (double *)((long)puVar16 + lVar25 + -1 & (long)-(int)lVar25);
          uStack_aa8 = CONCAT44(iVar14,iVar14);
          puStack_a70 = &uStack_aa8;
          pdStack_a88 = (double *)0x0;
          pdStack_a90 = (double *)0x0;
          uStack_a78 = 0;
          uStack_a80 = 0;
          lStack_a60 = 0;
          lStack_a58 = 0;
          pdStack_a98 = pdStack_aa0;
          plStack_a68 = &lStack_a60;
          puStack_9f0 = puVar16;
          puStack_9e8 = puVar18;
          if ((iVar14 != 0) && (pdStack_aa0 == (double *)0x0)) {
            puVar17 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar17 = 1;
            uStack_b10 = puVar17 + 1;
            uStack_b08 = 0x1c;
            *(undefined1 *)(puVar17 + 8) = 0;
            *(undefined8 *)(puVar17 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar17 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar17 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar17 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&uStack_b10,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
            goto LAB_109a59068;
          }
          uStack_ab0 = CONCAT44(2,uVar23 | 0x42ff4000);
          lStack_b20 = lVar21 << uVar26;
          pdStack_a90 = (double *)((long)pdStack_aa0 + lStack_b20 * lVar21);
          pdStack_b00 = (double *)((long)pdStack_aa0 + ((ulong)uVar5 << uVar26));
          puStack_b80 = &uStack_b10;
          puStack_ad0 = &uStack_b08;
          uStack_b08 = CONCAT44(1,iVar14);
          uStack_ae0 = 0;
          lStack_ad8 = 0;
          uStack_b10 = (undefined4 *)(CONCAT44(2,uVar23) | 0x42ff4000);
          lStack_b60 = (long)pdStack_b00 + lStack_b20;
          puStack_b30 = &uStack_b68;
          uStack_b68 = (undefined8 *)CONCAT44(iVar14,iVar14);
          uStack_b40 = 0;
          lStack_b38 = 0;
          uStack_b70 = (undefined4 *)CONCAT44(2,uVar23 | 0x42ff4000);
          lStack_b50 = lStack_b60 + lStack_b20 * lVar21;
          uStack_c30._0_4_ = 0x1010000;
          uStack_c28 = &uStack_a50;
          uStack_c20 = 0;
          uStack_c1c = 0;
          auStack_b88[0] = 0x2010000;
          uStack_b78 = 0;
          auStack_ba0[0] = 0x2010000;
          uStack_b90 = 0;
          puStack_b98 = &uStack_b70;
          lStack_b58 = lStack_b60;
          lStack_b48 = lStack_b50;
          plStack_b28 = &lStack_b20;
          lStack_b18 = lVar25;
          pdStack_af8 = pdStack_b00;
          puStack_af0 = (undefined8 *)lStack_b60;
          puStack_ae8 = (undefined8 *)lStack_b60;
          plStack_ac8 = &lStack_ac0;
          lStack_ac0 = lVar25;
          lStack_ab8 = lVar25;
          pdStack_a88 = pdStack_a90;
          lStack_a60 = lStack_b20;
          lStack_a58 = lVar25;
          FUN_109a59d88(&uStack_c30,auStack_b88,auStack_ba0);
          uStack_c20 = 0;
          uStack_c1c = 0;
          uStack_c30._0_4_ = 0x1010000;
          auStack_b88[0] = 0x2010000;
          uStack_b78 = 0;
          puStack_b80 = &uStack_ab0;
          uStack_c28 = &uStack_b70;
          FUN_109a895d0(&uStack_c30,auStack_b88);
          uStack_b78 = 0;
          auStack_b88[0] = 0x1010000;
          puStack_b80 = &uStack_b10;
          uStack_b90 = 0;
          auStack_ba0[0] = 0x1010000;
          uStack_ba8 = 0;
          auStack_bb8[0] = 0x1010000;
          puStack_bb0 = &uStack_b70;
          uStack_c30._0_4_ = 0x42ff0000;
          puStack_bf0 = &uStack_c28;
          uStack_c28._4_4_ = 0;
          uStack_c20 = 0;
          uStack_c30._4_4_ = 0;
          uStack_c28._0_4_ = 0;
          uStack_c14 = 0;
          uStack_c10 = 0;
          uStack_c1c = 0;
          uStack_c18 = 0;
          uStack_c04 = 0;
          uStack_c0c = 0;
          uStack_c08 = 0;
          lStack_bf8 = 0;
          uStack_c00 = 0;
          uStack_bfc = 0;
          uStack_be0 = 0;
          uStack_bd8 = 0;
          uStack_bc0 = 0;
          auStack_bd0[0] = 0x1010000;
          puStack_be8 = &uStack_be0;
          puStack_bc8 = &uStack_c30;
          puStack_b98 = &uStack_ab0;
          FUN_109a59288(auStack_b88,auStack_ba0,auStack_bb8,auStack_bd0,pdVar19);
          if (lStack_bf8 != 0) {
            piVar22 = (int *)(lStack_bf8 + 0x14);
            do {
              iVar14 = *piVar22;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar13) {
                *piVar22 = iVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_c30);
            }
          }
          lStack_bf8 = 0;
          uStack_c18 = 0;
          uStack_c14 = 0;
          uStack_c20 = 0;
          uStack_c1c = 0;
          uStack_c08 = 0;
          uStack_c04 = 0;
          uStack_c10 = 0;
          uStack_c0c = 0;
          if (0 < uStack_c30._4_4_) {
            lVar25 = 0;
            do {
              *(undefined4 *)((long)puStack_bf0 + lVar25 * 4) = 0;
              lVar25 = lVar25 + 1;
            } while (lVar25 < uStack_c30._4_4_);
          }
          if (puStack_be8 != &uStack_be0 && puStack_be8 != (undefined8 *)0x0) {
            _free(puStack_be8[-1]);
          }
          if (uVar23 == 5) {
            dVar42 = 0.0;
            if (1.1920929e-07 <= *(float *)pdStack_b00) {
              dVar42 = (double)(*(float *)((long)pdStack_b00 + lVar21 * 4 + -4) /
                               *(float *)pdStack_b00);
            }
          }
          else {
            dVar42 = 0.0;
            if (2.220446049250313e-16 <= *pdStack_b00) {
              dVar42 = pdStack_b00[lVar21 + -1] / *pdStack_b00;
            }
          }
          if (lStack_b38 != 0) {
            piVar22 = (int *)(lStack_b38 + 0x14);
            do {
              iVar14 = *piVar22;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar13) {
                *piVar22 = iVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_b70);
            }
          }
          lStack_b38 = 0;
          lStack_b58 = 0;
          lStack_b60 = 0;
          lStack_b48 = 0;
          lStack_b50 = 0;
          if (0 < uStack_b70._4_4_) {
            lVar25 = 0;
            do {
              *(undefined4 *)((long)puStack_b30 + lVar25 * 4) = 0;
              lVar25 = lVar25 + 1;
            } while (lVar25 < uStack_b70._4_4_);
          }
          if (plStack_b28 != &lStack_b20 && plStack_b28 != (long *)0x0) {
            _free(plStack_b28[-1]);
          }
          if (lStack_ad8 != 0) {
            piVar22 = (int *)(lStack_ad8 + 0x14);
            do {
              iVar14 = *piVar22;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar13) {
                *piVar22 = iVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_b10);
            }
          }
          lStack_ad8 = 0;
          pdStack_af8 = (double *)0x0;
          pdStack_b00 = (double *)0x0;
          puStack_ae8 = (undefined8 *)0x0;
          puStack_af0 = (undefined8 *)0x0;
          if (0 < uStack_b10._4_4_) {
            lVar25 = 0;
            do {
              *(undefined4 *)((long)puStack_ad0 + lVar25 * 4) = 0;
              lVar25 = lVar25 + 1;
            } while (lVar25 < uStack_b10._4_4_);
          }
          if (plStack_ac8 != &lStack_ac0 && plStack_ac8 != (long *)0x0) {
            _free(plStack_ac8[-1]);
          }
          if (uStack_a78 != 0) {
            piVar22 = (int *)(uStack_a78 + 0x14);
            do {
              iVar14 = *piVar22;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar13) {
                *piVar22 = iVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_ab0);
            }
          }
          uStack_a78 = 0;
          pdStack_a98 = (double *)0x0;
          pdStack_aa0 = (double *)0x0;
          pdStack_a88 = (double *)0x0;
          pdStack_a90 = (double *)0x0;
          if (0 < uStack_ab0._4_4_) {
            lVar25 = 0;
            do {
              *(undefined4 *)((long)puStack_a70 + lVar25 * 4) = 0;
              lVar25 = lVar25 + 1;
            } while (lVar25 < uStack_ab0._4_4_);
          }
          if (plStack_a68 != &lStack_a60 && plStack_a68 != (long *)0x0) {
            _free(plStack_a68[-1]);
          }
          bVar13 = puStack_9f0 == &uStack_9e0;
          goto LAB_109a5871c;
        }
        if ((param_3 != 0) && (param_3 != 3)) {
          puVar17 = (undefined4 *)0x38;
          func_0x000107c2ae8c();
          *puVar17 = 1;
          puStack_9f0 = (undefined8 *)(puVar17 + 1);
          puStack_9e8 = (undefined8 *)0x30;
          *(undefined1 *)(puVar17 + 0xd) = 0;
          *(undefined8 *)(puVar17 + 3) = 0x504d4f434544203d;
          *(undefined8 *)(puVar17 + 1) = 0x3d20646f6874656d;
          *(undefined8 *)(puVar17 + 7) = 0x3d3d20646f687465;
          *(undefined8 *)(puVar17 + 5) = 0x6d207c7c20554c5f;
          *(undefined8 *)(puVar17 + 0xb) = 0x594b53454c4f4843;
          *(undefined8 *)(puVar17 + 9) = 0x5f504d4f43454420;
          FUN_109ac3188(0xffffff29,&puStack_9f0,&UNK_10f596f31,&UNK_10f596e57,0x34a);
          goto LAB_109a59068;
        }
        FUN_109a8f64c(pdVar19,uVar24,uVar24,uStack_a50 & 0xfff,0xffffffff,0,0);
        if (((ulong)*pdVar19 & 0x1f0000) == 0x10000) {
          puVar20 = (ulong *)pdVar19[1];
          puStack_a70 = (ulong *)((ulong)&uStack_ab0 | 8);
          uStack_aa8 = puVar20[1];
          uStack_ab0 = *puVar20;
          pdStack_a98 = (double *)puVar20[3];
          pdStack_aa0 = (double *)puVar20[2];
          pdStack_a88 = (double *)puVar20[5];
          pdStack_a90 = (double *)puVar20[4];
          uStack_a78 = puVar20[7];
          uStack_a80 = puVar20[6];
          plStack_a68 = &lStack_a60;
          lStack_a60 = 0;
          lStack_a58 = 0;
          if (puVar20[7] != 0) {
            piVar22 = (int *)(puVar20[7] + 0x14);
            do {
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar13) {
                *piVar22 = *piVar22 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          if (*(int *)((long)puVar20 + 4) < 3) {
            lStack_a60 = *(long *)puVar20[9];
            lStack_a58 = ((long *)puVar20[9])[1];
          }
          else {
            uStack_ab0 = uStack_ab0 & 0xffffffff;
            func_0x000109a84868(&uStack_ab0);
          }
        }
        else {
          FUN_109a8a180(&uStack_ab0,pdVar19,0xffffffff);
        }
        if (iVar14 < 4) {
          if (iVar14 == 3) {
            pdVar19 = (double *)((long)pdStack_a40 + lStack_a00 * 2);
            if (uVar23 == 5) {
              fVar27 = *(float *)pdStack_a40;
              fVar30 = *(float *)((long)pdStack_a40 + 4);
              pfVar3 = (float *)((long)pdStack_a40 + lStack_a00);
              fVar43 = *pfVar3;
              fVar32 = pfVar3[1];
              fVar33 = *(float *)(pdVar19 + 1);
              fVar34 = pfVar3[2];
              fVar45 = *(float *)pdVar19;
              fVar35 = *(float *)((long)pdVar19 + 4);
              fVar29 = -(fVar34 * fVar35) + fVar33 * fVar32;
              fVar31 = *(float *)(pdStack_a40 + 1);
              fVar10 = -(fVar32 * fVar45) + fVar35 * fVar43;
              fVar9 = -((-(fVar34 * fVar45) + fVar33 * fVar43) * fVar30) + fVar29 * fVar27 +
                      fVar10 * fVar31;
              if (fVar9 == 0.0) {
LAB_109a58bbc:
                puStack_9e8 = (undefined8 *)0x0;
                puStack_9f0 = (undefined8 *)0x0;
                uStack_9d8 = 0;
                uStack_9e0 = 0;
                FUN_109a48880(&uStack_ab0,&puStack_9f0);
                dVar42 = 0.0;
                uStack_c28 = (undefined8 *)CONCAT44(uStack_c28._4_4_,(undefined4)uStack_c28);
              }
              else {
                dVar42 = 1.0;
                fVar9 = 1.0 / fVar9;
                *pdStack_aa0 = (double)CONCAT44((-(fVar30 * fVar33) + fVar35 * fVar31) * fVar9,
                                                fVar29 * fVar9);
                *(float *)(pdStack_aa0 + 1) = (-(fVar31 * fVar32) + fVar34 * fVar30) * fVar9;
                pfVar3 = (float *)((long)pdStack_aa0 + lStack_a60);
                *pfVar3 = (-(fVar43 * fVar33) + fVar45 * fVar34) * fVar9;
                pfVar3[1] = (-(fVar31 * fVar45) + fVar33 * fVar27) * fVar9;
                pfVar3[2] = (-(fVar27 * fVar34) + fVar43 * fVar31) * fVar9;
                puVar18 = (undefined8 *)((long)pdStack_aa0 + lStack_a60 * 2);
                *puVar18 = CONCAT44((-(fVar27 * fVar35) + fVar45 * fVar30) * fVar9,fVar10 * fVar9);
                *(float *)(puVar18 + 1) = (-(fVar30 * fVar43) + fVar32 * fVar27) * fVar9;
                uStack_c28 = (undefined8 *)CONCAT44(uStack_c28._4_4_,(undefined4)uStack_c28);
              }
            }
            else {
              pdVar15 = (double *)((long)pdStack_a40 + lStack_a00);
              dVar36 = pdVar19[1];
              dVar37 = pdVar19[2];
              dVar8 = pdVar15[1];
              dVar28 = pdVar15[2];
              dVar38 = *pdVar19;
              dVar39 = *pdVar15;
              dVar47 = -(dVar28 * dVar36) + dVar37 * dVar8;
              dVar40 = *pdStack_a40;
              dVar41 = pdStack_a40[1];
              dVar44 = pdStack_a40[2];
              dVar46 = -(dVar8 * dVar38) + dVar36 * dVar39;
              dVar48 = -(dVar41 * (-(dVar28 * dVar38) + dVar37 * dVar39)) + dVar47 * dVar40 +
                       dVar46 * dVar44;
              if (dVar48 == 0.0) goto LAB_109a58bbc;
              dVar42 = 1.0;
              dVar48 = 1.0 / dVar48;
              *pdStack_aa0 = dVar47 * dVar48;
              pdStack_aa0[1] = (dVar37 * -dVar41 + dVar36 * dVar44) * dVar48;
              pdStack_aa0[2] = (-(dVar44 * dVar8) + dVar28 * dVar41) * dVar48;
              pdVar19 = (double *)((long)pdStack_aa0 + lStack_a60);
              *pdVar19 = (-(dVar39 * dVar37) + dVar38 * dVar28) * dVar48;
              pdVar19[1] = (-(dVar44 * dVar38) + dVar37 * dVar40) * dVar48;
              pdVar19[2] = (-(dVar40 * dVar28) + dVar39 * dVar44) * dVar48;
              pdVar19 = (double *)((long)pdStack_aa0 + lStack_a60 * 2);
              *pdVar19 = dVar46 * dVar48;
              pdVar19[1] = (-(dVar40 * dVar36) + dVar38 * dVar41) * dVar48;
              pdVar19[2] = (dVar39 * -dVar41 + dVar8 * dVar40) * dVar48;
            }
          }
          else if (iVar14 == 2) {
            if (uVar23 == 5) {
              pfVar3 = (float *)((long)pdStack_a40 + lStack_a00);
              fVar29 = pfVar3[1];
              fVar9 = -(*(float *)((long)pdStack_a40 + 4) * *pfVar3) +
                      fVar29 * *(float *)pdStack_a40;
              if (fVar9 == 0.0) goto LAB_109a58bbc;
              dVar42 = 1.0;
              fVar9 = 1.0 / fVar9;
              ((float *)((long)pdStack_aa0 + lStack_a60))[1] = fVar9 * *(float *)pdStack_a40;
              *(float *)pdStack_aa0 = fVar9 * fVar29;
              fVar29 = *pfVar3;
              *(float *)((long)pdStack_aa0 + 4) = fVar9 * -*(float *)((long)pdStack_a40 + 4);
              *(float *)((long)pdStack_aa0 + lStack_a60) = fVar9 * -fVar29;
              uStack_c28 = (undefined8 *)CONCAT44(uStack_c28._4_4_,(undefined4)uStack_c28);
            }
            else {
              pdVar19 = (double *)((long)pdStack_a40 + lStack_a00);
              dVar8 = pdVar19[1];
              dVar28 = -(pdStack_a40[1] * *pdVar19) + dVar8 * *pdStack_a40;
              if (dVar28 == 0.0) goto LAB_109a58bbc;
              dVar42 = 1.0;
              dVar28 = 1.0 / dVar28;
              ((double *)((long)pdStack_aa0 + lStack_a60))[1] = *pdStack_a40 * dVar28;
              *pdStack_aa0 = dVar8 * dVar28;
              dVar8 = *pdVar19;
              pdStack_aa0[1] = -(pdStack_a40[1] * dVar28);
              *(double *)((long)pdStack_aa0 + lStack_a60) = -(dVar8 * dVar28);
              uStack_c28 = (undefined8 *)CONCAT44(uStack_c28._4_4_,(undefined4)uStack_c28);
            }
          }
          else if (uVar23 == 5) {
            if (*(float *)pdStack_a40 == 0.0) goto LAB_109a58bbc;
            *(float *)pdStack_aa0 = 1.0 / *(float *)pdStack_a40;
            dVar42 = 1.0;
            uStack_c28 = (undefined8 *)CONCAT44(uStack_c28._4_4_,(undefined4)uStack_c28);
          }
          else {
            if (*pdStack_a40 == 0.0) goto LAB_109a58bbc;
            dVar42 = 1.0;
            *pdStack_aa0 = 1.0 / *pdStack_a40;
            uStack_c28 = (undefined8 *)CONCAT44(uStack_c28._4_4_,(undefined4)uStack_c28);
          }
        }
        else {
          uVar5 = iVar14 * iVar14 << uVar26;
          puVar18 = &uStack_9e0;
          if (0x408 < uVar5) {
            puVar18 = (undefined8 *)(ulong)uVar5;
            puStack_9f0 = &uStack_9e0;
            __Znam();
          }
          uStack_b68 = &uStack_b10;
          puStack_ad0 = &uStack_b08;
          uStack_b08 = CONCAT44(iVar14,iVar14);
          uStack_ae0 = 0;
          lStack_ad8 = 0;
          lStack_ac0 = uVar24 << uVar26;
          uStack_b10 = (undefined4 *)(CONCAT44(2,uVar23) | 0x42ff4000);
          puStack_af0 = (undefined8 *)((long)puVar18 + lStack_ac0 * uVar24);
          uStack_b70 = (undefined4 *)CONCAT44(uStack_b70._4_4_,0x2010000);
          lStack_b60 = 0;
          pdStack_b00 = (double *)puVar18;
          pdStack_af8 = (double *)puVar18;
          puStack_ae8 = puStack_af0;
          plStack_ac8 = &lStack_ac0;
          lStack_ab8 = lVar25;
          puStack_9f0 = puVar18;
          puStack_9e8 = (undefined8 *)(ulong)uVar5;
          FUN_109a479a0(&uStack_a50,&uStack_b70);
          uStack_c30._0_4_ = 0x3010000;
          uStack_c28 = &uStack_ab0;
          uStack_c20 = 0;
          uStack_c1c = 0;
          uStack_b70 = (undefined4 *)0x3ff0000000000000;
          uStack_b68 = (undefined8 *)0x0;
          lStack_b60 = 0;
          lStack_b58 = 0;
          FUN_109a92964(&uStack_c30,&uStack_b70);
          if ((param_3 == 0) && (uVar23 == 5)) {
            pdVar19 = pdStack_b00;
            FUN_109aa4d88(pdStack_b00,lStack_ac0,uVar24,pdStack_aa0,lStack_a60,uVar24);
            iVar14 = (int)pdVar19;
LAB_109a588f8:
            dVar42 = 1.0;
            if (iVar14 == 0) {
LAB_109a58bec:
              uStack_b68 = (undefined8 *)0x0;
              uStack_b70 = (undefined4 *)0x0;
              lStack_b58 = 0;
              lStack_b60 = 0;
              FUN_109a48880(&uStack_ab0,&uStack_b70);
              dVar42 = 0.0;
            }
          }
          else {
            if ((param_3 == 0) && (uVar23 == 6)) {
              pdVar19 = pdStack_b00;
              func_0x000109aa506c(pdStack_b00,lStack_ac0,uVar24,pdStack_aa0,lStack_a60,uVar24);
              iVar14 = (int)pdVar19;
              goto LAB_109a588f8;
            }
            pdVar19 = pdStack_b00;
            if ((param_3 == 3) && (uVar23 == 5)) {
              FUN_109aa5350(pdStack_b00,lStack_ac0,uVar24,pdStack_aa0,lStack_a60,uVar24);
            }
            else {
              func_0x000109aa55c4(pdStack_b00,lStack_ac0,uVar24,pdStack_aa0,lStack_a60,uVar24);
            }
            dVar42 = 1.0;
            if (((ulong)pdVar19 & 1) == 0) goto LAB_109a58bec;
          }
          if (lStack_ad8 != 0) {
            piVar22 = (int *)(lStack_ad8 + 0x14);
            do {
              iVar14 = *piVar22;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar13) {
                *piVar22 = iVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_b10);
            }
          }
          lStack_ad8 = 0;
          pdStack_af8 = (double *)0x0;
          pdStack_b00 = (double *)0x0;
          puStack_ae8 = (undefined8 *)0x0;
          puStack_af0 = (undefined8 *)0x0;
          if (0 < uStack_b10._4_4_) {
            lVar25 = 0;
            do {
              *(undefined4 *)((long)puStack_ad0 + lVar25 * 4) = 0;
              lVar25 = lVar25 + 1;
            } while (lVar25 < uStack_b10._4_4_);
          }
          if (plStack_ac8 != &lStack_ac0 && plStack_ac8 != (long *)0x0) {
            _free(plStack_ac8[-1]);
          }
          if (puStack_9f0 != &uStack_9e0 && puStack_9f0 != (undefined8 *)0x0) {
            __ZdaPv();
          }
        }
        if (uStack_a78 != 0) {
          piVar22 = (int *)(uStack_a78 + 0x14);
          do {
            iVar14 = *piVar22;
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar13) {
              *piVar22 = iVar14 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar14 + -1 == 0) {
            func_0x000109a848d4(&uStack_ab0);
          }
        }
        uStack_a78 = 0;
        pdStack_a98 = (double *)0x0;
        pdStack_aa0 = (double *)0x0;
        pdStack_a88 = (double *)0x0;
        pdStack_a90 = (double *)0x0;
        if (0 < uStack_ab0._4_4_) {
          lVar25 = 0;
          do {
            *(undefined4 *)((long)puStack_a70 + lVar25 * 4) = 0;
            lVar25 = lVar25 + 1;
          } while (lVar25 < uStack_ab0._4_4_);
        }
        if (plStack_a68 != &lStack_a60 && plStack_a68 != (long *)0x0) {
          _free(plStack_a68[-1]);
        }
LAB_109a58d08:
        if (uStack_a18 != 0) {
          piVar22 = (int *)(uStack_a18 + 0x14);
          do {
            iVar14 = *piVar22;
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar13) {
              *piVar22 = iVar14 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar14 + -1 == 0) {
            func_0x000109a848d4(&uStack_a50);
          }
        }
        uStack_a18 = 0;
        uStack_a38 = 0;
        pdStack_a40 = (double *)0x0;
        uStack_a28 = 0;
        uStack_a30 = 0;
        if (0 < uStack_a50._4_4_) {
          lVar25 = 0;
          do {
            *(undefined4 *)(uStack_a10 + lVar25 * 4) = 0;
            lVar25 = lVar25 + 1;
          } while (lVar25 < uStack_a50._4_4_);
        }
        if (plStack_a08 != &lStack_a00 && plStack_a08 != (long *)0x0) {
          _free(plStack_a08[-1]);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5d0) {
          return dVar42;
        }
        ___stack_chk_fail();
      }
      puVar17 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar17 = 1;
      uStack_b10 = puVar17 + 1;
      uStack_b08 = 0x1c;
      *(undefined1 *)(puVar17 + 8) = 0;
      *(undefined8 *)(puVar17 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar17 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar17 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar17 + 4) = 0x61746164207c7c20;
      FUN_109ac3188(0xffffff29,&uStack_b10,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
LAB_109a59068:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x109a5906c);
      (*pcVar12)();
    }
  }
  puVar17 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar17 = 1;
  pdStack_470 = (double *)(puVar17 + 1);
  *pdStack_470 = 3.6509313655188923e+233;
  pdStack_468 = (double *)0xc;
  *(undefined1 *)(puVar17 + 4) = 0;
  puVar17[3] = 0x29287974;
  FUN_109ac3188(0xffffff29,&pdStack_470,&UNK_10f49168a,&UNK_10f596e57,0x2d2);
LAB_109a57bb4:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x109a57bb8);
  (*pcVar12)();
}



/* Entry: 109a57c7c; end: 109a59287;  */

double FUN_109a57c7c(uint *param_1,uint *param_2,int param_3)

{
  int *piVar1;
  float *pfVar2;
  double *pdVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  code *pcVar13;
  bool bVar14;
  int iVar15;
  undefined8 *puVar16;
  double *pdVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  float fVar41;
  double dVar42;
  float fVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined4 auStack_680 [2];
  undefined8 *puStack_678;
  undefined8 uStack_670;
  undefined4 auStack_668 [2];
  undefined8 *puStack_660;
  undefined8 uStack_658;
  undefined4 auStack_650 [2];
  undefined8 *puStack_648;
  undefined8 uStack_640;
  undefined4 auStack_638 [2];
  undefined8 *puStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  long lStack_610;
  long lStack_608;
  long lStack_600;
  long lStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  long *plStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  double *pdStack_5b0;
  double *pdStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 uStack_590;
  long lStack_588;
  undefined8 *puStack_580;
  long *plStack_578;
  long lStack_570;
  long lStack_568;
  undefined8 uStack_560;
  ulong uStack_558;
  double *pdStack_550;
  double *pdStack_548;
  double *pdStack_540;
  double *pdStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong *puStack_520;
  long *plStack_518;
  long lStack_510;
  long lStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  double *pdStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  long *plStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar20 = *(ulong **)(param_1 + 2);
    uStack_4c0 = (ulong)&uStack_500 | 8;
    uStack_4f8 = puVar20[1];
    uStack_500 = *puVar20;
    uStack_4e8 = puVar20[3];
    pdStack_4f0 = (double *)puVar20[2];
    uStack_4d8 = puVar20[5];
    uStack_4e0 = puVar20[4];
    uStack_4c8 = puVar20[7];
    uStack_4d0 = puVar20[6];
    plStack_4b8 = &lStack_4b0;
    lStack_4a8 = 0;
    lStack_4b0 = 0;
    if (puVar20[7] != 0) {
      piVar1 = (int *)(puVar20[7] + 0x14);
      do {
        cVar7 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (*(int *)((long)puVar20 + 4) < 3) {
      lStack_4b0 = *(long *)puVar20[9];
      lStack_4a8 = ((long *)puVar20[9])[1];
    }
    else {
      uStack_500 = uStack_500 & 0xffffffff;
      func_0x000109a84868(&uStack_500);
    }
  }
  else {
    FUN_109a8a180(&uStack_500,param_1,0xffffffff);
  }
  uVar21 = (uint)(uStack_500 & 0xfff);
  if (1 < uVar21 - 5) {
    puVar18 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar18 = 1;
    puStack_4a0 = (undefined8 *)(puVar18 + 1);
    puStack_498 = (undefined8 *)0x20;
    *(undefined1 *)(puVar18 + 9) = 0;
    *(undefined8 *)(puVar18 + 3) = 0x7c204632335f5643;
    *(undefined8 *)(puVar18 + 1) = 0x203d3d2065707974;
    *(undefined8 *)(puVar18 + 7) = 0x4634365f5643203d;
    *(undefined8 *)(puVar18 + 5) = 0x3d2065707974207c;
    FUN_109ac3188(0xffffff29,&puStack_4a0,&UNK_10f596f31,&UNK_10f596e57,0x31e);
    goto LAB_109a59068;
  }
  uVar25 = 0xfa50UL >> ((uStack_500 & 0x1f) << 1) & 3;
  lVar23 = 1L << uVar25;
  iVar15 = (int)uStack_4f8;
  uVar22 = uStack_4f8 & 0xffffffff;
  iVar12 = uStack_4f8._4_4_;
  lVar24 = (long)(int)uStack_4f8;
  if (param_3 == 1) {
    iVar4 = uStack_4f8._4_4_;
    if ((int)uStack_4f8 <= uStack_4f8._4_4_) {
      iVar4 = (int)uStack_4f8;
    }
    puVar19 = (undefined8 *)
              (((long)(iVar4 + iVar4 * ((int)uStack_4f8 + uStack_4f8._4_4_)) << uVar25) + 8);
    puVar16 = &uStack_490;
    if ((undefined8 *)0x408 < puVar19) {
      puVar16 = puVar19;
      puStack_4a0 = &uStack_490;
      __Znam();
    }
    uVar5 = uVar21 | 0x42ff0000;
    uStack_560 = CONCAT44(2,uVar5);
    pdStack_550 = (double *)((long)puVar16 + lVar23 + -1 & (long)-(int)lVar23);
    puStack_520 = &uStack_558;
    uStack_558 = CONCAT44(iVar4,iVar15);
    pdStack_538 = (double *)0x0;
    pdStack_540 = (double *)0x0;
    uStack_528 = 0;
    uStack_530 = 0;
    lStack_510 = 0;
    lStack_508 = 0;
    pdStack_548 = pdStack_550;
    plStack_518 = &lStack_510;
    puStack_4a0 = puVar16;
    puStack_498 = puVar19;
    if (((long)iVar15 * (long)iVar4 == 0) || (pdStack_550 != (double *)0x0)) {
      uVar6 = uVar21 | 0x42ff4000;
      uStack_560 = CONCAT44(2,uVar6);
      lStack_510 = (long)iVar4 << uVar25;
      pdStack_540 = (double *)((long)pdStack_550 + lStack_510 * lVar24);
      pdStack_5b0 = (double *)((long)pdStack_550 + ((long)(iVar4 * iVar15) << uVar25));
      uStack_5c0 = (undefined4 *)CONCAT44(2,uVar5);
      puStack_580 = &uStack_5b8;
      uStack_5b8 = CONCAT44(1,iVar4);
      puStack_598 = (undefined8 *)0x0;
      puStack_5a0 = (undefined8 *)0x0;
      lStack_588 = 0;
      uStack_590 = 0;
      lStack_570 = 0;
      lStack_568 = 0;
      pdStack_5a8 = pdStack_5b0;
      plStack_578 = &lStack_570;
      pdStack_538 = pdStack_540;
      if ((iVar4 != 0) && (pdStack_550 == (double *)0x0)) {
        puVar18 = (undefined4 *)0x24;
        lStack_508 = lVar23;
        func_0x000107c2ae8c();
        *puVar18 = 1;
        uStack_620 = puVar18 + 1;
        uStack_618 = (undefined8 *)0x1c;
        *(undefined1 *)(puVar18 + 8) = 0;
        *(undefined8 *)(puVar18 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar18 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar18 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar18 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_620,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
        goto LAB_109a59068;
      }
      uStack_5c0 = (undefined4 *)CONCAT44(2,uVar6);
      lVar24 = (long)iVar12;
      lStack_610 = (long)pdStack_5b0 + lStack_510;
      uStack_620 = (undefined4 *)CONCAT44(2,uVar5);
      puStack_5e0 = &uStack_618;
      uStack_618 = (undefined8 *)CONCAT44(iVar12,iVar4);
      lStack_5f8 = 0;
      lStack_600 = 0;
      lStack_5e8 = 0;
      uStack_5f0 = 0;
      lStack_5d0 = 0;
      lStack_5c8 = 0;
      lStack_608 = lStack_610;
      plStack_5d8 = &lStack_5d0;
      puStack_5a0 = (undefined8 *)lStack_610;
      puStack_598 = (undefined8 *)lStack_610;
      if (((long)iVar4 * (long)iVar12 != 0) && (pdStack_550 == (double *)0x0)) {
        puVar18 = (undefined4 *)0x24;
        lStack_570 = lVar23;
        lStack_568 = lVar23;
        lStack_508 = lVar23;
        func_0x000107c2ae8c();
        *puVar18 = 1;
        uStack_6e0 = puVar18 + 1;
        uStack_6d8._0_4_ = 0x1c;
        uStack_6d8._4_4_ = 0;
        *(undefined1 *)(puVar18 + 8) = 0;
        *(undefined8 *)(puVar18 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar18 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar18 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar18 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_6e0,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
        goto LAB_109a59068;
      }
      uStack_620 = (undefined4 *)CONCAT44(2,uVar6);
      lStack_5d0 = lVar24 << uVar25;
      lStack_600 = lStack_610 + lStack_5d0 * iVar4;
      uStack_6e0._0_4_ = 0x1010000;
      uStack_6d8 = &uStack_500;
      uStack_6d0 = 0;
      uStack_6cc = 0;
      auStack_638[0] = 0x2010000;
      uStack_628 = 0;
      auStack_650[0] = 0x2010000;
      uStack_640 = 0;
      auStack_668[0] = 0x2010000;
      uStack_658 = 0;
      puStack_660 = &uStack_620;
      puStack_648 = &uStack_560;
      puStack_630 = &uStack_5c0;
      lStack_5f8 = lStack_600;
      lStack_5c8 = lVar23;
      lStack_570 = lVar23;
      lStack_568 = lVar23;
      lStack_508 = lVar23;
      FUN_109a5c9ac(&uStack_6e0,auStack_638,auStack_650,auStack_668,0);
      uStack_628 = 0;
      auStack_638[0] = 0x1010000;
      uStack_640 = 0;
      auStack_650[0] = 0x1010000;
      uStack_658 = 0;
      auStack_668[0] = 0x1010000;
      puStack_660 = &uStack_620;
      uStack_6e0._0_4_ = 0x42ff0000;
      puStack_6a0 = &uStack_6d8;
      uStack_6d8._4_4_ = 0;
      uStack_6d0 = 0;
      uStack_6e0._4_4_ = 0;
      uStack_6d8._0_4_ = 0;
      uStack_6c4 = 0;
      uStack_6c0 = 0;
      uStack_6cc = 0;
      uStack_6c8 = 0;
      uStack_6b4 = 0;
      uStack_6bc = 0;
      uStack_6b8 = 0;
      lStack_6a8 = 0;
      uStack_6b0 = 0;
      uStack_6ac = 0;
      uStack_690 = 0;
      uStack_688 = 0;
      uStack_670 = 0;
      auStack_680[0] = 0x1010000;
      puStack_698 = &uStack_690;
      puStack_678 = &uStack_6e0;
      puStack_648 = &uStack_560;
      puStack_630 = &uStack_5c0;
      FUN_109a59288(auStack_638,auStack_650,auStack_668,auStack_680,param_2);
      if (lStack_6a8 != 0) {
        piVar1 = (int *)(lStack_6a8 + 0x14);
        do {
          iVar15 = *piVar1;
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_6e0);
        }
      }
      lStack_6a8 = 0;
      uStack_6c8 = 0;
      uStack_6c4 = 0;
      uStack_6d0 = 0;
      uStack_6cc = 0;
      uStack_6b8 = 0;
      uStack_6b4 = 0;
      uStack_6c0 = 0;
      uStack_6bc = 0;
      if (0 < uStack_6e0._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)((long)puStack_6a0 + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_6e0._4_4_);
      }
      if (puStack_698 != &uStack_690 && puStack_698 != (undefined8 *)0x0) {
        _free(puStack_698[-1]);
      }
      if (uVar21 == 5) {
        dVar40 = 0.0;
        if (1.1920929e-07 <= *(float *)pdStack_5b0) {
          dVar40 = (double)(*(float *)((long)pdStack_5b0 + lVar24 * 4 + -4) / *(float *)pdStack_5b0)
          ;
        }
      }
      else {
        dVar40 = 0.0;
        if (2.220446049250313e-16 <= *pdStack_5b0) {
          dVar40 = pdStack_5b0[lVar24 + -1] / *pdStack_5b0;
        }
      }
      if (lStack_5e8 != 0) {
        piVar1 = (int *)(lStack_5e8 + 0x14);
        do {
          iVar15 = *piVar1;
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_620);
        }
      }
      lStack_5e8 = 0;
      lStack_608 = 0;
      lStack_610 = 0;
      lStack_5f8 = 0;
      lStack_600 = 0;
      if (0 < uStack_620._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)((long)puStack_5e0 + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_620._4_4_);
      }
      if (plStack_5d8 != &lStack_5d0 && plStack_5d8 != (long *)0x0) {
        _free(plStack_5d8[-1]);
      }
      if (lStack_588 != 0) {
        piVar1 = (int *)(lStack_588 + 0x14);
        do {
          iVar15 = *piVar1;
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_5c0);
        }
      }
      lStack_588 = 0;
      pdStack_5a8 = (double *)0x0;
      pdStack_5b0 = (double *)0x0;
      puStack_598 = (undefined8 *)0x0;
      puStack_5a0 = (undefined8 *)0x0;
      if (0 < uStack_5c0._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)((long)puStack_580 + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_5c0._4_4_);
      }
      if (plStack_578 != &lStack_570 && plStack_578 != (long *)0x0) {
        _free(plStack_578[-1]);
      }
      if (uStack_528 != 0) {
        piVar1 = (int *)(uStack_528 + 0x14);
        do {
          iVar15 = *piVar1;
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_560);
        }
      }
      uStack_528 = 0;
      pdStack_548 = (double *)0x0;
      pdStack_550 = (double *)0x0;
      pdStack_538 = (double *)0x0;
      pdStack_540 = (double *)0x0;
      if (0 < uStack_560._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)((long)puStack_520 + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_560._4_4_);
      }
      if (plStack_518 != &lStack_510 && plStack_518 != (long *)0x0) {
        _free(plStack_518[-1]);
      }
      bVar14 = puStack_4a0 == &uStack_490;
LAB_109a5871c:
      if (!bVar14 && puStack_4a0 != (undefined8 *)0x0) {
        __ZdaPv();
      }
      goto LAB_109a58d08;
    }
  }
  else {
    if ((int)uStack_4f8 != uStack_4f8._4_4_) {
      puVar19 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar19 = 0x3d3d206d00000001;
      puStack_4a0 = (undefined8 *)((long)puVar19 + 4);
      puStack_498 = (undefined8 *)0x6;
      *(undefined1 *)((long)puVar19 + 10) = 0;
      *(undefined2 *)(puVar19 + 1) = 0x6e20;
      FUN_109ac3188(0xffffff29,&puStack_4a0,&UNK_10f596f31,&UNK_10f596e57,0x336);
      goto LAB_109a59068;
    }
    if (param_3 == 2) {
      uVar5 = (int)uStack_4f8 * (int)uStack_4f8;
      puVar19 = (undefined8 *)(((long)(int)((int)uStack_4f8 + uVar5 * 2) << uVar25) + 8);
      puVar16 = &uStack_490;
      if ((undefined8 *)0x408 < puVar19) {
        puVar16 = puVar19;
        puStack_4a0 = &uStack_490;
        __Znam();
      }
      uStack_560 = CONCAT44(2,uVar21 | 0x42ff0000);
      pdStack_550 = (double *)((long)puVar16 + lVar23 + -1 & (long)-(int)lVar23);
      uStack_558 = CONCAT44(iVar15,iVar15);
      puStack_520 = &uStack_558;
      pdStack_538 = (double *)0x0;
      pdStack_540 = (double *)0x0;
      uStack_528 = 0;
      uStack_530 = 0;
      lStack_510 = 0;
      lStack_508 = 0;
      pdStack_548 = pdStack_550;
      plStack_518 = &lStack_510;
      puStack_4a0 = puVar16;
      puStack_498 = puVar19;
      if ((iVar15 != 0) && (pdStack_550 == (double *)0x0)) {
        puVar18 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar18 = 1;
        uStack_5c0 = puVar18 + 1;
        uStack_5b8 = 0x1c;
        *(undefined1 *)(puVar18 + 8) = 0;
        *(undefined8 *)(puVar18 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar18 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar18 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar18 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_5c0,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
        goto LAB_109a59068;
      }
      uStack_560 = CONCAT44(2,uVar21 | 0x42ff4000);
      lStack_5d0 = lVar24 << uVar25;
      pdStack_540 = (double *)((long)pdStack_550 + lStack_5d0 * lVar24);
      pdStack_5b0 = (double *)((long)pdStack_550 + ((ulong)uVar5 << uVar25));
      puStack_630 = &uStack_5c0;
      puStack_580 = &uStack_5b8;
      uStack_5b8 = CONCAT44(1,iVar15);
      uStack_590 = 0;
      lStack_588 = 0;
      uStack_5c0 = (undefined4 *)(CONCAT44(2,uVar21) | 0x42ff4000);
      lStack_610 = (long)pdStack_5b0 + lStack_5d0;
      puStack_5e0 = &uStack_618;
      uStack_618 = (undefined8 *)CONCAT44(iVar15,iVar15);
      uStack_5f0 = 0;
      lStack_5e8 = 0;
      uStack_620 = (undefined4 *)CONCAT44(2,uVar21 | 0x42ff4000);
      lStack_600 = lStack_610 + lStack_5d0 * lVar24;
      uStack_6e0._0_4_ = 0x1010000;
      uStack_6d8 = &uStack_500;
      uStack_6d0 = 0;
      uStack_6cc = 0;
      auStack_638[0] = 0x2010000;
      uStack_628 = 0;
      auStack_650[0] = 0x2010000;
      uStack_640 = 0;
      puStack_648 = &uStack_620;
      lStack_608 = lStack_610;
      lStack_5f8 = lStack_600;
      plStack_5d8 = &lStack_5d0;
      lStack_5c8 = lVar23;
      pdStack_5a8 = pdStack_5b0;
      puStack_5a0 = (undefined8 *)lStack_610;
      puStack_598 = (undefined8 *)lStack_610;
      plStack_578 = &lStack_570;
      lStack_570 = lVar23;
      lStack_568 = lVar23;
      pdStack_538 = pdStack_540;
      lStack_510 = lStack_5d0;
      lStack_508 = lVar23;
      FUN_109a59d88(&uStack_6e0,auStack_638,auStack_650);
      uStack_6d0 = 0;
      uStack_6cc = 0;
      uStack_6e0._0_4_ = 0x1010000;
      auStack_638[0] = 0x2010000;
      uStack_628 = 0;
      puStack_630 = &uStack_560;
      uStack_6d8 = &uStack_620;
      FUN_109a895d0(&uStack_6e0,auStack_638);
      uStack_628 = 0;
      auStack_638[0] = 0x1010000;
      puStack_630 = &uStack_5c0;
      uStack_640 = 0;
      auStack_650[0] = 0x1010000;
      uStack_658 = 0;
      auStack_668[0] = 0x1010000;
      puStack_660 = &uStack_620;
      uStack_6e0._0_4_ = 0x42ff0000;
      puStack_6a0 = &uStack_6d8;
      uStack_6d8._4_4_ = 0;
      uStack_6d0 = 0;
      uStack_6e0._4_4_ = 0;
      uStack_6d8._0_4_ = 0;
      uStack_6c4 = 0;
      uStack_6c0 = 0;
      uStack_6cc = 0;
      uStack_6c8 = 0;
      uStack_6b4 = 0;
      uStack_6bc = 0;
      uStack_6b8 = 0;
      lStack_6a8 = 0;
      uStack_6b0 = 0;
      uStack_6ac = 0;
      uStack_690 = 0;
      uStack_688 = 0;
      uStack_670 = 0;
      auStack_680[0] = 0x1010000;
      puStack_698 = &uStack_690;
      puStack_678 = &uStack_6e0;
      puStack_648 = &uStack_560;
      FUN_109a59288(auStack_638,auStack_650,auStack_668,auStack_680,param_2);
      if (lStack_6a8 != 0) {
        piVar1 = (int *)(lStack_6a8 + 0x14);
        do {
          iVar15 = *piVar1;
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_6e0);
        }
      }
      lStack_6a8 = 0;
      uStack_6c8 = 0;
      uStack_6c4 = 0;
      uStack_6d0 = 0;
      uStack_6cc = 0;
      uStack_6b8 = 0;
      uStack_6b4 = 0;
      uStack_6c0 = 0;
      uStack_6bc = 0;
      if (0 < uStack_6e0._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)((long)puStack_6a0 + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_6e0._4_4_);
      }
      if (puStack_698 != &uStack_690 && puStack_698 != (undefined8 *)0x0) {
        _free(puStack_698[-1]);
      }
      if (uVar21 == 5) {
        dVar40 = 0.0;
        if (1.1920929e-07 <= *(float *)pdStack_5b0) {
          dVar40 = (double)(*(float *)((long)pdStack_5b0 + lVar24 * 4 + -4) / *(float *)pdStack_5b0)
          ;
        }
      }
      else {
        dVar40 = 0.0;
        if (2.220446049250313e-16 <= *pdStack_5b0) {
          dVar40 = pdStack_5b0[lVar24 + -1] / *pdStack_5b0;
        }
      }
      if (lStack_5e8 != 0) {
        piVar1 = (int *)(lStack_5e8 + 0x14);
        do {
          iVar15 = *piVar1;
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_620);
        }
      }
      lStack_5e8 = 0;
      lStack_608 = 0;
      lStack_610 = 0;
      lStack_5f8 = 0;
      lStack_600 = 0;
      if (0 < uStack_620._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)((long)puStack_5e0 + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_620._4_4_);
      }
      if (plStack_5d8 != &lStack_5d0 && plStack_5d8 != (long *)0x0) {
        _free(plStack_5d8[-1]);
      }
      if (lStack_588 != 0) {
        piVar1 = (int *)(lStack_588 + 0x14);
        do {
          iVar15 = *piVar1;
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_5c0);
        }
      }
      lStack_588 = 0;
      pdStack_5a8 = (double *)0x0;
      pdStack_5b0 = (double *)0x0;
      puStack_598 = (undefined8 *)0x0;
      puStack_5a0 = (undefined8 *)0x0;
      if (0 < uStack_5c0._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)((long)puStack_580 + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_5c0._4_4_);
      }
      if (plStack_578 != &lStack_570 && plStack_578 != (long *)0x0) {
        _free(plStack_578[-1]);
      }
      if (uStack_528 != 0) {
        piVar1 = (int *)(uStack_528 + 0x14);
        do {
          iVar15 = *piVar1;
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_560);
        }
      }
      uStack_528 = 0;
      pdStack_548 = (double *)0x0;
      pdStack_550 = (double *)0x0;
      pdStack_538 = (double *)0x0;
      pdStack_540 = (double *)0x0;
      if (0 < uStack_560._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)((long)puStack_520 + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_560._4_4_);
      }
      if (plStack_518 != &lStack_510 && plStack_518 != (long *)0x0) {
        _free(plStack_518[-1]);
      }
      bVar14 = puStack_4a0 == &uStack_490;
      goto LAB_109a5871c;
    }
    if ((param_3 != 0) && (param_3 != 3)) {
      puVar18 = (undefined4 *)0x38;
      func_0x000107c2ae8c();
      *puVar18 = 1;
      puStack_4a0 = (undefined8 *)(puVar18 + 1);
      puStack_498 = (undefined8 *)0x30;
      *(undefined1 *)(puVar18 + 0xd) = 0;
      *(undefined8 *)(puVar18 + 3) = 0x504d4f434544203d;
      *(undefined8 *)(puVar18 + 1) = 0x3d20646f6874656d;
      *(undefined8 *)(puVar18 + 7) = 0x3d3d20646f687465;
      *(undefined8 *)(puVar18 + 5) = 0x6d207c7c20554c5f;
      *(undefined8 *)(puVar18 + 0xb) = 0x594b53454c4f4843;
      *(undefined8 *)(puVar18 + 9) = 0x5f504d4f43454420;
      FUN_109ac3188(0xffffff29,&puStack_4a0,&UNK_10f596f31,&UNK_10f596e57,0x34a);
      goto LAB_109a59068;
    }
    FUN_109a8f64c(param_2,uVar22,uVar22,uStack_500 & 0xfff,0xffffffff,0,0);
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar20 = *(ulong **)(param_2 + 2);
      puStack_520 = (ulong *)((ulong)&uStack_560 | 8);
      uStack_558 = puVar20[1];
      uStack_560 = *puVar20;
      pdStack_548 = (double *)puVar20[3];
      pdStack_550 = (double *)puVar20[2];
      pdStack_538 = (double *)puVar20[5];
      pdStack_540 = (double *)puVar20[4];
      uStack_528 = puVar20[7];
      uStack_530 = puVar20[6];
      plStack_518 = &lStack_510;
      lStack_510 = 0;
      lStack_508 = 0;
      if (puVar20[7] != 0) {
        piVar1 = (int *)(puVar20[7] + 0x14);
        do {
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (*(int *)((long)puVar20 + 4) < 3) {
        lStack_510 = *(long *)puVar20[9];
        lStack_508 = ((long *)puVar20[9])[1];
      }
      else {
        uStack_560 = uStack_560 & 0xffffffff;
        func_0x000109a84868(&uStack_560);
      }
    }
    else {
      FUN_109a8a180(&uStack_560,param_2,0xffffffff);
    }
    if (iVar15 < 4) {
      if (iVar15 == 3) {
        pdVar17 = (double *)((long)pdStack_4f0 + lStack_4b0 * 2);
        if (uVar21 == 5) {
          fVar26 = *(float *)pdStack_4f0;
          fVar29 = *(float *)((long)pdStack_4f0 + 4);
          pfVar2 = (float *)((long)pdStack_4f0 + lStack_4b0);
          fVar41 = *pfVar2;
          fVar31 = pfVar2[1];
          fVar32 = *(float *)(pdVar17 + 1);
          fVar33 = pfVar2[2];
          fVar43 = *(float *)pdVar17;
          fVar34 = *(float *)((long)pdVar17 + 4);
          fVar28 = -(fVar33 * fVar34) + fVar32 * fVar31;
          fVar30 = *(float *)(pdStack_4f0 + 1);
          fVar11 = -(fVar31 * fVar43) + fVar34 * fVar41;
          fVar10 = -((-(fVar33 * fVar43) + fVar32 * fVar41) * fVar29) + fVar28 * fVar26 +
                   fVar11 * fVar30;
          if (fVar10 == 0.0) {
LAB_109a58bbc:
            puStack_498 = (undefined8 *)0x0;
            puStack_4a0 = (undefined8 *)0x0;
            uStack_488 = 0;
            uStack_490 = 0;
            FUN_109a48880(&uStack_560,&puStack_4a0);
            dVar40 = 0.0;
            uStack_6d8 = (undefined8 *)CONCAT44(uStack_6d8._4_4_,(undefined4)uStack_6d8);
          }
          else {
            dVar40 = 1.0;
            fVar10 = 1.0 / fVar10;
            *pdStack_550 = (double)CONCAT44((-(fVar29 * fVar32) + fVar34 * fVar30) * fVar10,
                                            fVar28 * fVar10);
            *(float *)(pdStack_550 + 1) = (-(fVar30 * fVar31) + fVar33 * fVar29) * fVar10;
            pfVar2 = (float *)((long)pdStack_550 + lStack_510);
            *pfVar2 = (-(fVar41 * fVar32) + fVar43 * fVar33) * fVar10;
            pfVar2[1] = (-(fVar30 * fVar43) + fVar32 * fVar26) * fVar10;
            pfVar2[2] = (-(fVar26 * fVar33) + fVar41 * fVar30) * fVar10;
            puVar19 = (undefined8 *)((long)pdStack_550 + lStack_510 * 2);
            *puVar19 = CONCAT44((-(fVar26 * fVar34) + fVar43 * fVar29) * fVar10,fVar11 * fVar10);
            *(float *)(puVar19 + 1) = (-(fVar29 * fVar41) + fVar31 * fVar26) * fVar10;
            uStack_6d8 = (undefined8 *)CONCAT44(uStack_6d8._4_4_,(undefined4)uStack_6d8);
          }
        }
        else {
          pdVar3 = (double *)((long)pdStack_4f0 + lStack_4b0);
          dVar27 = pdVar17[1];
          dVar35 = pdVar17[2];
          dVar8 = pdVar3[1];
          dVar9 = pdVar3[2];
          dVar36 = *pdVar17;
          dVar37 = *pdVar3;
          dVar45 = -(dVar9 * dVar27) + dVar35 * dVar8;
          dVar38 = *pdStack_4f0;
          dVar39 = pdStack_4f0[1];
          dVar42 = pdStack_4f0[2];
          dVar44 = -(dVar8 * dVar36) + dVar27 * dVar37;
          dVar46 = -(dVar39 * (-(dVar9 * dVar36) + dVar35 * dVar37)) + dVar45 * dVar38 +
                   dVar44 * dVar42;
          if (dVar46 == 0.0) goto LAB_109a58bbc;
          dVar40 = 1.0;
          dVar46 = 1.0 / dVar46;
          *pdStack_550 = dVar45 * dVar46;
          pdStack_550[1] = (dVar35 * -dVar39 + dVar27 * dVar42) * dVar46;
          pdStack_550[2] = (-(dVar42 * dVar8) + dVar9 * dVar39) * dVar46;
          pdVar17 = (double *)((long)pdStack_550 + lStack_510);
          *pdVar17 = (-(dVar37 * dVar35) + dVar36 * dVar9) * dVar46;
          pdVar17[1] = (-(dVar42 * dVar36) + dVar35 * dVar38) * dVar46;
          pdVar17[2] = (-(dVar38 * dVar9) + dVar37 * dVar42) * dVar46;
          pdVar17 = (double *)((long)pdStack_550 + lStack_510 * 2);
          *pdVar17 = dVar44 * dVar46;
          pdVar17[1] = (-(dVar38 * dVar27) + dVar36 * dVar39) * dVar46;
          pdVar17[2] = (dVar37 * -dVar39 + dVar8 * dVar38) * dVar46;
        }
      }
      else if (iVar15 == 2) {
        if (uVar21 == 5) {
          pfVar2 = (float *)((long)pdStack_4f0 + lStack_4b0);
          fVar28 = pfVar2[1];
          fVar10 = -(*(float *)((long)pdStack_4f0 + 4) * *pfVar2) + fVar28 * *(float *)pdStack_4f0;
          if (fVar10 == 0.0) goto LAB_109a58bbc;
          dVar40 = 1.0;
          fVar10 = 1.0 / fVar10;
          ((float *)((long)pdStack_550 + lStack_510))[1] = fVar10 * *(float *)pdStack_4f0;
          *(float *)pdStack_550 = fVar10 * fVar28;
          fVar28 = *pfVar2;
          *(float *)((long)pdStack_550 + 4) = fVar10 * -*(float *)((long)pdStack_4f0 + 4);
          *(float *)((long)pdStack_550 + lStack_510) = fVar10 * -fVar28;
          uStack_6d8 = (undefined8 *)CONCAT44(uStack_6d8._4_4_,(undefined4)uStack_6d8);
        }
        else {
          pdVar17 = (double *)((long)pdStack_4f0 + lStack_4b0);
          dVar8 = pdVar17[1];
          dVar9 = -(pdStack_4f0[1] * *pdVar17) + dVar8 * *pdStack_4f0;
          if (dVar9 == 0.0) goto LAB_109a58bbc;
          dVar40 = 1.0;
          dVar9 = 1.0 / dVar9;
          ((double *)((long)pdStack_550 + lStack_510))[1] = *pdStack_4f0 * dVar9;
          *pdStack_550 = dVar8 * dVar9;
          dVar8 = *pdVar17;
          pdStack_550[1] = -(pdStack_4f0[1] * dVar9);
          *(double *)((long)pdStack_550 + lStack_510) = -(dVar8 * dVar9);
          uStack_6d8 = (undefined8 *)CONCAT44(uStack_6d8._4_4_,(undefined4)uStack_6d8);
        }
      }
      else if (uVar21 == 5) {
        if (*(float *)pdStack_4f0 == 0.0) goto LAB_109a58bbc;
        *(float *)pdStack_550 = 1.0 / *(float *)pdStack_4f0;
        dVar40 = 1.0;
        uStack_6d8 = (undefined8 *)CONCAT44(uStack_6d8._4_4_,(undefined4)uStack_6d8);
      }
      else {
        if (*pdStack_4f0 == 0.0) goto LAB_109a58bbc;
        dVar40 = 1.0;
        *pdStack_550 = 1.0 / *pdStack_4f0;
        uStack_6d8 = (undefined8 *)CONCAT44(uStack_6d8._4_4_,(undefined4)uStack_6d8);
      }
    }
    else {
      uVar5 = iVar15 * iVar15 << uVar25;
      puVar19 = &uStack_490;
      if (0x408 < uVar5) {
        puVar19 = (undefined8 *)(ulong)uVar5;
        puStack_4a0 = &uStack_490;
        __Znam();
      }
      uStack_618 = &uStack_5c0;
      puStack_580 = &uStack_5b8;
      uStack_5b8 = CONCAT44(iVar15,iVar15);
      uStack_590 = 0;
      lStack_588 = 0;
      lStack_570 = uVar22 << uVar25;
      uStack_5c0 = (undefined4 *)(CONCAT44(2,uVar21) | 0x42ff4000);
      puStack_5a0 = (undefined8 *)((long)puVar19 + lStack_570 * uVar22);
      uStack_620 = (undefined4 *)CONCAT44(uStack_620._4_4_,0x2010000);
      lStack_610 = 0;
      pdStack_5b0 = (double *)puVar19;
      pdStack_5a8 = (double *)puVar19;
      puStack_598 = puStack_5a0;
      plStack_578 = &lStack_570;
      lStack_568 = lVar23;
      puStack_4a0 = puVar19;
      puStack_498 = (undefined8 *)(ulong)uVar5;
      FUN_109a479a0(&uStack_500,&uStack_620);
      uStack_6e0._0_4_ = 0x3010000;
      uStack_6d8 = &uStack_560;
      uStack_6d0 = 0;
      uStack_6cc = 0;
      uStack_620 = (undefined4 *)0x3ff0000000000000;
      uStack_618 = (undefined8 *)0x0;
      lStack_610 = 0;
      lStack_608 = 0;
      FUN_109a92964(&uStack_6e0,&uStack_620);
      if ((param_3 == 0) && (uVar21 == 5)) {
        pdVar17 = pdStack_5b0;
        FUN_109aa4d88(pdStack_5b0,lStack_570,uVar22,pdStack_550,lStack_510,uVar22);
        iVar15 = (int)pdVar17;
LAB_109a588f8:
        dVar40 = 1.0;
        if (iVar15 == 0) {
LAB_109a58bec:
          uStack_618 = (undefined8 *)0x0;
          uStack_620 = (undefined4 *)0x0;
          lStack_608 = 0;
          lStack_610 = 0;
          FUN_109a48880(&uStack_560,&uStack_620);
          dVar40 = 0.0;
        }
      }
      else {
        if ((param_3 == 0) && (uVar21 == 6)) {
          pdVar17 = pdStack_5b0;
          func_0x000109aa506c(pdStack_5b0,lStack_570,uVar22,pdStack_550,lStack_510,uVar22);
          iVar15 = (int)pdVar17;
          goto LAB_109a588f8;
        }
        pdVar17 = pdStack_5b0;
        if ((param_3 == 3) && (uVar21 == 5)) {
          FUN_109aa5350(pdStack_5b0,lStack_570,uVar22,pdStack_550,lStack_510,uVar22);
        }
        else {
          func_0x000109aa55c4(pdStack_5b0,lStack_570,uVar22,pdStack_550,lStack_510,uVar22);
        }
        dVar40 = 1.0;
        if (((ulong)pdVar17 & 1) == 0) goto LAB_109a58bec;
      }
      if (lStack_588 != 0) {
        piVar1 = (int *)(lStack_588 + 0x14);
        do {
          iVar15 = *piVar1;
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_5c0);
        }
      }
      lStack_588 = 0;
      pdStack_5a8 = (double *)0x0;
      pdStack_5b0 = (double *)0x0;
      puStack_598 = (undefined8 *)0x0;
      puStack_5a0 = (undefined8 *)0x0;
      if (0 < uStack_5c0._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)((long)puStack_580 + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_5c0._4_4_);
      }
      if (plStack_578 != &lStack_570 && plStack_578 != (long *)0x0) {
        _free(plStack_578[-1]);
      }
      if (puStack_4a0 != &uStack_490 && puStack_4a0 != (undefined8 *)0x0) {
        __ZdaPv();
      }
    }
    if (uStack_528 != 0) {
      piVar1 = (int *)(uStack_528 + 0x14);
      do {
        iVar15 = *piVar1;
        cVar7 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = iVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar15 + -1 == 0) {
        func_0x000109a848d4(&uStack_560);
      }
    }
    uStack_528 = 0;
    pdStack_548 = (double *)0x0;
    pdStack_550 = (double *)0x0;
    pdStack_538 = (double *)0x0;
    pdStack_540 = (double *)0x0;
    if (0 < uStack_560._4_4_) {
      lVar23 = 0;
      do {
        *(undefined4 *)((long)puStack_520 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_560._4_4_);
    }
    if (plStack_518 != &lStack_510 && plStack_518 != (long *)0x0) {
      _free(plStack_518[-1]);
    }
LAB_109a58d08:
    if (uStack_4c8 != 0) {
      piVar1 = (int *)(uStack_4c8 + 0x14);
      do {
        iVar15 = *piVar1;
        cVar7 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = iVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar15 + -1 == 0) {
        func_0x000109a848d4(&uStack_500);
      }
    }
    uStack_4c8 = 0;
    uStack_4e8 = 0;
    pdStack_4f0 = (double *)0x0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    if (0 < uStack_500._4_4_) {
      lVar23 = 0;
      do {
        *(undefined4 *)(uStack_4c0 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_500._4_4_);
    }
    if (plStack_4b8 != &lStack_4b0 && plStack_4b8 != (long *)0x0) {
      _free(plStack_4b8[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return dVar40;
    }
    ___stack_chk_fail();
  }
  puVar18 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar18 = 1;
  uStack_5c0 = puVar18 + 1;
  uStack_5b8 = 0x1c;
  *(undefined1 *)(puVar18 + 8) = 0;
  *(undefined8 *)(puVar18 + 3) = 0x207c7c2030203d3d;
  *(undefined8 *)(puVar18 + 1) = 0x2029286c61746f74;
  *(undefined8 *)(puVar18 + 6) = 0x4c4c554e203d2120;
  *(undefined8 *)(puVar18 + 4) = 0x61746164207c7c20;
  FUN_109ac3188(0xffffff29,&uStack_5c0,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
LAB_109a59068:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x109a5906c);
  (*pcVar13)();
}



/* Entry: 109a59288; end: 109a59d87;  */

void FUN_109a59288(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  undefined1 *puVar16;
  undefined4 *puVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  undefined4 *puStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  long lStack_638;
  ulong uStack_630;
  undefined8 *puStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  undefined8 *puStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  undefined8 *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  uint *puStack_4b0;
  long *plStack_4a8;
  long lStack_4a0;
  long lStack_498;
  undefined1 *puStack_488;
  undefined1 *puStack_480;
  undefined1 auStack_478 [1032];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar18 = *(ulong **)(param_1 + 2);
    puStack_4b0 = (uint *)((ulong)&uStack_4f0 | 8);
    uStack_4e8 = puVar18[1];
    uStack_4f0 = *puVar18;
    uStack_4d8 = puVar18[3];
    uStack_4e0 = puVar18[2];
    uStack_4c8 = puVar18[5];
    uStack_4d0 = puVar18[4];
    uStack_4b8 = puVar18[7];
    uStack_4c0 = puVar18[6];
    plStack_4a8 = &lStack_4a0;
    lStack_498 = 0;
    lStack_4a0 = 0;
    if (puVar18[7] != 0) {
      piVar1 = (int *)(puVar18[7] + 0x14);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    if (*(int *)((long)puVar18 + 4) < 3) {
      lStack_4a0 = *(long *)puVar18[9];
      lStack_498 = ((long *)puVar18[9])[1];
    }
    else {
      uStack_4f0 = uStack_4f0 & 0xffffffff;
      func_0x000109a84868(&uStack_4f0);
    }
  }
  else {
    FUN_109a8a180(&uStack_4f0,param_1,0xffffffff);
  }
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar18 = *(ulong **)(param_2 + 2);
    uStack_510 = (ulong)&uStack_550 | 8;
    uStack_548 = puVar18[1];
    uStack_550 = *puVar18;
    uStack_538 = puVar18[3];
    uStack_540 = puVar18[2];
    uStack_528 = puVar18[5];
    uStack_530 = puVar18[4];
    uStack_518 = puVar18[7];
    uStack_520 = puVar18[6];
    puStack_508 = &uStack_500;
    uStack_500 = 0;
    uStack_4f8 = 0;
    if (puVar18[7] != 0) {
      piVar1 = (int *)(puVar18[7] + 0x14);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    if (*(int *)((long)puVar18 + 4) < 3) {
      uStack_500 = *(undefined8 *)puVar18[9];
      uStack_4f8 = ((undefined8 *)puVar18[9])[1];
    }
    else {
      uStack_550 = uStack_550 & 0xffffffff;
      func_0x000109a84868(&uStack_550);
    }
  }
  else {
    FUN_109a8a180(&uStack_550,param_2,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar18 = *(ulong **)(param_3 + 2);
    uStack_570 = (ulong)&uStack_5b0 | 8;
    uStack_5a8 = puVar18[1];
    uStack_5b0 = *puVar18;
    uStack_598 = puVar18[3];
    uStack_5a0 = puVar18[2];
    uStack_588 = puVar18[5];
    uStack_590 = puVar18[4];
    uStack_578 = puVar18[7];
    uStack_580 = puVar18[6];
    puStack_568 = &uStack_560;
    uStack_560 = 0;
    uStack_558 = 0;
    if (puVar18[7] != 0) {
      piVar1 = (int *)(puVar18[7] + 0x14);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    if (*(int *)((long)puVar18 + 4) < 3) {
      uStack_560 = *(undefined8 *)puVar18[9];
      uStack_558 = ((undefined8 *)puVar18[9])[1];
    }
    else {
      uStack_5b0 = uStack_5b0 & 0xffffffff;
      func_0x000109a84868(&uStack_5b0);
    }
  }
  else {
    FUN_109a8a180(&uStack_5b0,param_3,0xffffffff);
  }
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar18 = *(ulong **)(param_4 + 2);
    uStack_5d0 = (ulong)&uStack_610 | 8;
    uStack_608 = puVar18[1];
    uStack_610 = *puVar18;
    uStack_5f8 = puVar18[3];
    uStack_600 = puVar18[2];
    uStack_5e8 = puVar18[5];
    uStack_5f0 = puVar18[4];
    uStack_5d8 = puVar18[7];
    uStack_5e0 = puVar18[6];
    puStack_5c8 = &uStack_5c0;
    uStack_5c0 = 0;
    uStack_5b8 = 0;
    if (puVar18[7] != 0) {
      piVar1 = (int *)(puVar18[7] + 0x14);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    if (*(int *)((long)puVar18 + 4) < 3) {
      uStack_5c0 = *(undefined8 *)puVar18[9];
      uStack_5b8 = ((undefined8 *)puVar18[9])[1];
    }
    else {
      uStack_610 = uStack_610 & 0xffffffff;
      func_0x000109a84868(&uStack_610);
    }
  }
  else {
    FUN_109a8a180(&uStack_610,param_4,0xffffffff);
  }
  uVar12 = uStack_600;
  if ((int)uStack_4f0._4_4_ < 1) {
    lVar20 = 0;
  }
  else {
    lVar20 = (long)(int)plStack_4a8[(ulong)uStack_4f0._4_4_ - 1];
  }
  uVar14 = (uint)uStack_548;
  uVar21 = uStack_548 & 0xffffffff;
  uVar13 = uStack_5a8._4_4_;
  uVar4 = (uint)uStack_548;
  if (uStack_600 != 0) {
    uVar4 = uStack_608._4_4_;
  }
  uVar5 = uStack_5a8._4_4_;
  if ((int)(uint)uStack_548 <= (int)uStack_5a8._4_4_) {
    uVar5 = (uint)uStack_548;
  }
  if ((int)uStack_4e8 != 1) {
    lVar6 = 0;
    if (uStack_4e8._4_4_ != 1) {
      lVar6 = lVar20;
    }
    lVar20 = lVar6 + lStack_4a0;
  }
  uVar3 = (uint)uStack_4f0;
  puVar2 = (undefined1 *)((-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3) + 0x10)
  ;
  puStack_488 = auStack_478;
  if ((undefined1 *)0x408 < puVar2) {
    puVar16 = puVar2;
    __Znam();
    puStack_488 = puVar16;
  }
  uVar3 = uVar3 & 0xfff;
  puStack_480 = puVar2;
  if ((((uVar3 == ((uint)uStack_550 & 0xfff)) && (uVar3 == ((uint)uStack_5b0 & 0xfff))) &&
      (uStack_540 != 0)) && ((uStack_5a0 != 0 && (uStack_4e0 != 0)))) {
    if (((int)uVar5 <= (int)uStack_548._4_4_) && ((int)uVar5 <= (int)(uint)uStack_5a8)) {
      uVar8 = *puStack_4b0;
      uVar9 = puStack_4b0[1];
      if ((((uVar9 == uVar5) && (uVar8 == 1)) || ((uVar9 == 1 && (uVar8 == uVar5)))) ||
         ((uVar9 == (uint)uStack_5a8 && (uVar8 == uStack_548._4_4_)))) {
        if ((uVar12 == 0) || ((((uint)uStack_610 & 0xfff) == uVar3 && ((uint)uStack_608 == uVar14)))
           ) {
          FUN_109a8f64c(param_5,uVar13,(ulong)uVar4,uVar3,0xffffffff,0,0);
          if ((*param_5 & 0x1f0000) == 0x10000) {
            puVar19 = *(undefined8 **)(param_5 + 2);
            uStack_630 = (ulong)&uStack_670 | 8;
            uStack_668 = puVar19[1];
            uStack_670 = (undefined4 *)*puVar19;
            uStack_658 = puVar19[3];
            uStack_660 = puVar19[2];
            uStack_648 = puVar19[5];
            uStack_650 = puVar19[4];
            lStack_638 = puVar19[7];
            uStack_640 = puVar19[6];
            puStack_628 = &uStack_620;
            uStack_620 = 0;
            uStack_618 = 0;
            if (puVar19[7] != 0) {
              piVar1 = (int *)(puVar19[7] + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (*(int *)((long)puVar19 + 4) < 3) {
              uStack_620 = *(undefined8 *)puVar19[9];
              uStack_618 = ((undefined8 *)puVar19[9])[1];
            }
            else {
              uStack_670 = (undefined4 *)((ulong)uStack_670 & 0xffffffff);
              func_0x000109a84868(&uStack_670);
            }
          }
          else {
            FUN_109a8a180(&uStack_670,param_5,0xffffffff);
          }
          if (uVar3 == 6) {
            func_0x000109a5c67c(uVar21,uVar13,uStack_4e0,lVar20,uStack_540,uStack_500,0,uStack_5a0,
                                uStack_560,uStack_600,uStack_5c0,uVar4);
          }
          else {
            if (uVar3 != 5) {
              puVar17 = (undefined4 *)0x8;
              func_0x000107c2ae8c();
              *puVar17 = 1;
              puStack_680 = puVar17 + 1;
              *(undefined1 *)puStack_680 = 0;
              uStack_678 = 0;
              FUN_109ac3188(0xffffff2e,&puStack_680,&UNK_10f59706a,&UNK_10f596e57,0x5bc);
              goto LAB_109a59c54;
            }
            FUN_109a5c228(uVar21,uVar13,uStack_4e0,lVar20,uStack_540,uStack_500,0,uStack_5a0,
                          uStack_560,uStack_600,uStack_5c0,uVar4);
          }
          if (lStack_638 != 0) {
            piVar1 = (int *)(lStack_638 + 0x14);
            do {
              iVar7 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar7 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar7 + -1 == 0) {
              func_0x000109a848d4(&uStack_670);
            }
          }
          lStack_638 = 0;
          uStack_658 = 0;
          uStack_660 = 0;
          uStack_648 = 0;
          uStack_650 = 0;
          if (0 < uStack_670._4_4_) {
            lVar20 = 0;
            do {
              *(undefined4 *)(uStack_630 + lVar20 * 4) = 0;
              lVar20 = lVar20 + 1;
            } while (lVar20 < uStack_670._4_4_);
          }
          if (puStack_628 != &uStack_620 && puStack_628 != (undefined8 *)0x0) {
            _free(puStack_628[-1]);
          }
          if (puStack_488 != auStack_478 && puStack_488 != (undefined1 *)0x0) {
            __ZdaPv();
          }
          if (uStack_5d8 != 0) {
            piVar1 = (int *)(uStack_5d8 + 0x14);
            do {
              iVar7 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar7 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar7 + -1 == 0) {
              func_0x000109a848d4(&uStack_610);
            }
          }
          uStack_5d8 = 0;
          uStack_5f8 = 0;
          uStack_600 = 0;
          uStack_5e8 = 0;
          uStack_5f0 = 0;
          if (0 < uStack_610._4_4_) {
            lVar20 = 0;
            do {
              *(undefined4 *)(uStack_5d0 + lVar20 * 4) = 0;
              lVar20 = lVar20 + 1;
            } while (lVar20 < uStack_610._4_4_);
          }
          if (puStack_5c8 != &uStack_5c0 && puStack_5c8 != (undefined8 *)0x0) {
            _free(puStack_5c8[-1]);
          }
          if (uStack_578 != 0) {
            piVar1 = (int *)(uStack_578 + 0x14);
            do {
              iVar7 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar7 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar7 + -1 == 0) {
              func_0x000109a848d4(&uStack_5b0);
            }
          }
          uStack_578 = 0;
          uStack_598 = 0;
          uStack_5a0 = 0;
          uStack_588 = 0;
          uStack_590 = 0;
          if (0 < uStack_5b0._4_4_) {
            lVar20 = 0;
            do {
              *(undefined4 *)(uStack_570 + lVar20 * 4) = 0;
              lVar20 = lVar20 + 1;
            } while (lVar20 < uStack_5b0._4_4_);
          }
          if (puStack_568 != &uStack_560 && puStack_568 != (undefined8 *)0x0) {
            _free(puStack_568[-1]);
          }
          if (uStack_518 != 0) {
            piVar1 = (int *)(uStack_518 + 0x14);
            do {
              iVar7 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar7 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar7 + -1 == 0) {
              func_0x000109a848d4(&uStack_550);
            }
          }
          uStack_518 = 0;
          uStack_538 = 0;
          uStack_540 = 0;
          uStack_528 = 0;
          uStack_530 = 0;
          if (0 < uStack_550._4_4_) {
            lVar20 = 0;
            do {
              *(undefined4 *)(uStack_510 + lVar20 * 4) = 0;
              lVar20 = lVar20 + 1;
            } while (lVar20 < uStack_550._4_4_);
          }
          if (puStack_508 != &uStack_500 && puStack_508 != (undefined8 *)0x0) {
            _free(puStack_508[-1]);
          }
          if (uStack_4b8 != 0) {
            piVar1 = (int *)(uStack_4b8 + 0x14);
            do {
              iVar7 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar7 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar7 + -1 == 0) {
              func_0x000109a848d4(&uStack_4f0);
            }
          }
          uStack_4b8 = 0;
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          uStack_4c8 = 0;
          uStack_4d0 = 0;
          if (0 < (int)uStack_4f0._4_4_) {
            lVar20 = 0;
            do {
              puStack_4b0[lVar20] = 0;
              lVar20 = lVar20 + 1;
            } while (lVar20 < (int)uStack_4f0._4_4_);
          }
          if (plStack_4a8 != &lStack_4a0 && plStack_4a8 != (long *)0x0) {
            _free(plStack_4a8[-1]);
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
            return;
          }
          ___stack_chk_fail();
        }
        puVar17 = (undefined4 *)0x3c;
        func_0x000107c2ae8c();
        *puVar17 = 1;
        uStack_670 = puVar17 + 1;
        uStack_668 = 0x36;
        *(undefined8 *)(puVar17 + 3) = 0x7c7c2030203d3d20;
        *(undefined8 *)(puVar17 + 1) = 0x617461642e736872;
        *(undefined1 *)((long)puVar17 + 0x3a) = 0;
        *(undefined8 *)(puVar17 + 7) = 0x203d3d2029286570;
        *(undefined8 *)(puVar17 + 5) = 0x79742e7368722820;
        *(undefined8 *)(puVar17 + 0xb) = 0x73776f722e736872;
        *(undefined8 *)(puVar17 + 9) = 0x2026262065707974;
        *(undefined8 *)((long)puVar17 + 0x32) = 0x296d203d3d207377;
        FUN_109ac3188(0xffffff29,&uStack_670,&UNK_10f59706a,&UNK_10f596e57,0x5af);
        goto LAB_109a59c54;
      }
    }
    puVar17 = (undefined4 *)0x80;
    func_0x000107c2ae8c();
    *puVar17 = 1;
    uStack_670 = puVar17 + 1;
    uStack_668 = 0x7a;
    *(undefined8 *)(puVar17 + 0x13) = 0x2c3128657a695320;
    *(undefined8 *)(puVar17 + 0x11) = 0x3d3d202928657a69;
    *(undefined8 *)(puVar17 + 0x17) = 0x2928657a69732e77;
    *(undefined8 *)(puVar17 + 0x15) = 0x207c7c20296d6e20;
    *(undefined8 *)(puVar17 + 0x1b) = 0x73776f722e747628;
    *(undefined8 *)(puVar17 + 0x19) = 0x657a6953203d3d20;
    *(undefined8 *)((long)puVar17 + 0x76) = 0x2929736c6f632e75;
    *(undefined8 *)((long)puVar17 + 0x6e) = 0x202c73776f722e74;
    *(undefined8 *)(puVar17 + 3) = 0x202626206d6e203d;
    *(undefined8 *)(puVar17 + 1) = 0x3e20736c6f632e75;
    *(undefined8 *)(puVar17 + 7) = 0x2626206d6e203d3e;
    *(undefined8 *)(puVar17 + 5) = 0x2073776f722e7476;
    *(undefined8 *)(puVar17 + 0xb) = 0x6953203d3d202928;
    *(undefined8 *)(puVar17 + 9) = 0x657a69732e772820;
    *(undefined1 *)((long)puVar17 + 0x7e) = 0;
    *(undefined8 *)(puVar17 + 0xf) = 0x732e77207c7c2029;
    *(undefined8 *)(puVar17 + 0xd) = 0x31202c6d6e28657a;
    FUN_109ac3188(0xffffff29,&uStack_670,&UNK_10f59706a,&UNK_10f596e57,0x5ae);
  }
  else {
    puVar17 = (undefined4 *)0x54;
    func_0x000107c2ae8c();
    *puVar17 = 1;
    uStack_670 = puVar17 + 1;
    uStack_668 = 0x4c;
    *(undefined8 *)(puVar17 + 7) = 0x2928657079742e75;
    *(undefined8 *)(puVar17 + 5) = 0x2026262029286570;
    *(undefined8 *)(puVar17 + 0xb) = 0x2626202928657079;
    *(undefined8 *)(puVar17 + 9) = 0x742e7476203d3d20;
    *(undefined8 *)(puVar17 + 0xf) = 0x61642e7476202626;
    *(undefined8 *)(puVar17 + 0xd) = 0x20617461642e7520;
    *(undefined8 *)(puVar17 + 0x12) = 0x617461642e772026;
    *(undefined8 *)(puVar17 + 0x10) = 0x2620617461642e74;
    *(undefined1 *)(puVar17 + 0x14) = 0;
    *(undefined8 *)(puVar17 + 3) = 0x79742e75203d3d20;
    *(undefined8 *)(puVar17 + 1) = 0x2928657079742e77;
    FUN_109ac3188(0xffffff29,&uStack_670,&UNK_10f59706a,&UNK_10f596e57,0x5ac);
  }
LAB_109a59c54:
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x109a59c58);
  (*pcVar15)();
}



/* Entry: 109a59d88; end: 109a5a63b;  */

undefined8 FUN_109a59d88(uint *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  float *pfVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  double **ppdVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  int iVar17;
  long *plVar18;
  double **ppdVar19;
  code *pcVar20;
  int iVar21;
  ulong *puVar22;
  double **ppdVar23;
  undefined4 *puVar24;
  ulong *puVar25;
  uint *puVar26;
  undefined8 *puVar27;
  uint *puVar28;
  int iVar29;
  long lVar30;
  undefined8 *puVar31;
  long lVar32;
  ulong uVar33;
  uint uVar34;
  undefined8 uVar35;
  ulong uVar36;
  ulong uVar37;
  uint *puVar38;
  uint uVar39;
  ulong uVar40;
  ulong uVar41;
  long lVar42;
  double *pdVar43;
  long lVar44;
  float fVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  float fVar50;
  double dVar51;
  float fVar52;
  float fVar53;
  double dVar54;
  float fVar55;
  float fVar56;
  double dVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  float fVar69;
  double dVar70;
  float fVar71;
  double dVar72;
  float fVar73;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined4 uStack_e08;
  undefined4 uStack_e04;
  undefined4 uStack_e00;
  undefined4 uStack_dfc;
  undefined4 uStack_df8;
  undefined4 uStack_df4;
  undefined4 uStack_df0;
  undefined4 uStack_dec;
  undefined4 uStack_de8;
  undefined4 uStack_de4;
  long lStack_de0;
  undefined8 *puStack_dd8;
  undefined8 *puStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined4 auStack_db8 [2];
  uint *puStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined4 uStack_d70;
  undefined4 uStack_d6c;
  long lStack_d68;
  undefined8 *puStack_d60;
  long *plStack_d58;
  long lStack_d50;
  long lStack_d48;
  undefined4 auStack_d40 [2];
  undefined8 *puStack_d38;
  undefined8 uStack_d30;
  undefined4 auStack_d28 [2];
  uint *puStack_d20;
  undefined8 uStack_d18;
  uint uStack_d10;
  int iStack_d0c;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined4 uStack_ce0;
  undefined4 uStack_cdc;
  long lStack_cd8;
  undefined8 *puStack_cd0;
  long *plStack_cc8;
  long lStack_cc0;
  long lStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  ulong uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  long lStack_c78;
  undefined8 *puStack_c70;
  long *plStack_c68;
  long alStack_c60 [2];
  undefined8 uStack_c50;
  ulong uStack_c48;
  ulong uStack_c40;
  ulong uStack_c38;
  ulong uStack_c30;
  ulong uStack_c28;
  ulong uStack_c20;
  ulong uStack_c18;
  ulong uStack_c10;
  undefined8 *puStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  uint uStack_bf0;
  int iStack_bec;
  int iStack_be8;
  int iStack_be4;
  double *pdStack_be0;
  double *pdStack_bd8;
  double *pdStack_bd0;
  double *pdStack_bc8;
  undefined8 uStack_bc0;
  long lStack_bb8;
  int *piStack_bb0;
  long *plStack_ba8;
  long lStack_ba0;
  long lStack_b98;
  uint uStack_b90;
  int iStack_b8c;
  int iStack_b88;
  int iStack_b84;
  double *pdStack_b80;
  double *pdStack_b78;
  double *pdStack_b70;
  double *pdStack_b68;
  undefined8 uStack_b60;
  long lStack_b58;
  ulong uStack_b50;
  long *plStack_b48;
  long lStack_b40;
  long lStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  double *pdStack_b20;
  ulong uStack_b18;
  ulong uStack_b10;
  ulong uStack_b08;
  ulong uStack_b00;
  ulong uStack_af8;
  ulong uStack_af0;
  long *plStack_ae8;
  long lStack_ae0;
  long lStack_ad8;
  undefined8 uStack_ad0;
  double **ppdStack_ac8;
  double *pdStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  long lStack_a98;
  ulong uStack_a90;
  long *plStack_a88;
  long lStack_a80;
  long lStack_a78;
  long lStack_6b8;
  long lStack_6a0;
  uint *puStack_698;
  uint *puStack_690;
  uint *puStack_688;
  undefined4 *puStack_680;
  long *plStack_678;
  undefined1 *puStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong *puStack_658;
  undefined1 *puStack_650;
  code *pcStack_648;
  undefined8 *puStack_638;
  ulong *puStack_630;
  undefined4 *puStack_628;
  undefined1 *puStack_620;
  undefined8 uStack_618;
  uint uStack_610;
  int iStack_60c;
  int iStack_608;
  undefined4 uStack_604;
  uint *puStack_600;
  uint *puStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  int *piStack_5d0;
  long *plStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  undefined1 auStack_5b0 [4];
  int iStack_5ac;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long lStack_578;
  long lStack_570;
  undefined8 *puStack_568;
  undefined8 auStack_560 [2];
  undefined8 uStack_550;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  ulong uStack_518;
  ulong uStack_510;
  undefined8 *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  ulong *puStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  undefined8 *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar25 = *(ulong **)(param_1 + 2);
    uStack_4b0 = (ulong)&uStack_4f0 | 8;
    uStack_4e8 = puVar25[1];
    uStack_4f0 = *puVar25;
    uStack_4d8 = puVar25[3];
    uStack_4e0 = puVar25[2];
    uStack_4c8 = puVar25[5];
    uStack_4d0 = puVar25[4];
    uStack_4b8 = puVar25[7];
    uStack_4c0 = puVar25[6];
    puStack_4a8 = &uStack_4a0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    if (puVar25[7] != 0) {
      piVar1 = (int *)(puVar25[7] + 0x14);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    if (*(int *)((long)puVar25 + 4) < 3) {
      uStack_4a0 = *(undefined8 *)puVar25[9];
      uStack_498 = ((undefined8 *)puVar25[9])[1];
    }
    else {
      uStack_4f0 = uStack_4f0 & 0xffffffff;
      func_0x000109a84868(&uStack_4f0);
    }
  }
  else {
    FUN_109a8a180(&uStack_4f0,param_1,0xffffffff);
  }
  uVar33 = uStack_4f0;
  iVar21 = (int)uStack_4e8;
  uVar36 = uStack_4e8 & 0xffffffff;
  if ((int)uStack_4e8 != uStack_4e8._4_4_) {
    puVar24 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar24 = 1;
    uStack_490 = (ulong *)(puVar24 + 1);
    puStack_488 = (ulong *)0x14;
    *(undefined1 *)(puVar24 + 6) = 0;
    puVar24[5] = 0x736c6f63;
    *(undefined8 *)(puVar24 + 3) = 0x2e637273203d3d20;
    *(undefined8 *)(puVar24 + 1) = 0x73776f722e637273;
    FUN_109ac3188(0xffffff29,&uStack_490,&UNK_10f597017,&UNK_10f596e57,0x534);
LAB_109a5a520:
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x109a5a524);
    (*pcVar20)();
  }
  uVar37 = uStack_4f0 & 0xfff;
  uVar34 = (uint)uVar37;
  if (1 < uVar34 - 5) {
    puVar24 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar24 = 1;
    uStack_490 = (ulong *)(puVar24 + 1);
    puStack_488 = (ulong *)0x20;
    *(undefined1 *)(puVar24 + 9) = 0;
    *(undefined8 *)(puVar24 + 3) = 0x7c204632335f5643;
    *(undefined8 *)(puVar24 + 1) = 0x203d3d2065707974;
    *(undefined8 *)(puVar24 + 7) = 0x4634365f5643203d;
    *(undefined8 *)(puVar24 + 5) = 0x3d2065707974207c;
    FUN_109ac3188(0xffffff29,&uStack_490,&UNK_10f597017,&UNK_10f596e57,0x535);
    goto LAB_109a5a520;
  }
  uStack_550._0_4_ = 0x42ff0000;
  uVar41 = (ulong)&uStack_550 | 8;
  uStack_544 = 0;
  uStack_540 = 0;
  uStack_550._4_4_ = 0;
  uStack_548 = 0;
  uStack_534 = 0;
  uStack_530 = 0;
  uStack_53c = 0;
  uStack_538 = 0;
  uStack_524 = 0;
  uStack_52c = 0;
  uStack_528 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_51c = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_510 = uVar41;
  puStack_508 = &uStack_500;
  if ((*param_3 & 0x1f0000) != 0) {
    FUN_109a8f64c(param_3,uVar36,uVar36,uVar37,0xffffffff,0,0);
    if ((*param_3 & 0x1f0000) == 0x10000) {
      puVar25 = *(ulong **)(param_3 + 2);
      uStack_450 = (ulong)&uStack_490 | 8;
      puStack_488 = (ulong *)puVar25[1];
      uStack_490 = (ulong *)*puVar25;
      uStack_478 = puVar25[3];
      uStack_480 = puVar25[2];
      uStack_468 = puVar25[5];
      uStack_470 = puVar25[4];
      uStack_458 = puVar25[7];
      uStack_460 = puVar25[6];
      puStack_448 = &uStack_440;
      uStack_438 = 0;
      uStack_440 = 0;
      if (puVar25[7] != 0) {
        piVar1 = (int *)(puVar25[7] + 0x14);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = *piVar1 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      if (*(int *)((long)puVar25 + 4) < 3) {
        uStack_440 = *(undefined8 *)puVar25[9];
        uStack_438 = ((undefined8 *)puVar25[9])[1];
      }
      else {
        uStack_490 = (ulong *)((ulong)uStack_490 & 0xffffffff);
        func_0x000109a84868(&uStack_490);
      }
    }
    else {
      FUN_109a8a180(&uStack_490,param_3,0xffffffff);
    }
    if (uStack_518 != 0) {
      piVar1 = (int *)(uStack_518 + 0x14);
      do {
        iVar29 = *piVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar29 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar29 + -1 == 0) {
        func_0x000109a848d4(&uStack_550);
      }
    }
    if (0 < uStack_550._4_4_) {
      lVar30 = 0;
      do {
        *(undefined4 *)(uStack_510 + lVar30 * 4) = 0;
        lVar30 = lVar30 + 1;
      } while (lVar30 < uStack_550._4_4_);
    }
    uStack_548 = SUB84(puStack_488,0);
    uStack_544 = (undefined4)((ulong)puStack_488 >> 0x20);
    uStack_550._0_4_ = SUB84(uStack_490,0);
    uStack_538 = (undefined4)uStack_478;
    uStack_534 = (undefined4)(uStack_478 >> 0x20);
    uStack_540 = (undefined4)uStack_480;
    uStack_53c = (undefined4)(uStack_480 >> 0x20);
    uStack_528 = (undefined4)uStack_468;
    uStack_524 = (undefined4)(uStack_468 >> 0x20);
    uStack_530 = (undefined4)uStack_470;
    uStack_52c = (undefined4)(uStack_470 >> 0x20);
    uStack_518 = uStack_458;
    uStack_520 = (undefined4)uStack_460;
    uStack_51c = (undefined4)(uStack_460 >> 0x20);
    iVar29 = uStack_490._4_4_;
    uStack_550._4_4_ = uStack_490._4_4_;
    uVar40 = uStack_510;
    puVar27 = puStack_508;
    if ((puStack_508 != &uStack_500) &&
       (uVar40 = uVar41, puVar27 = &uStack_500, puStack_508 != (undefined8 *)0x0)) {
      _free(puStack_508[-1]);
      iVar29 = uStack_490._4_4_;
    }
    puStack_508 = puVar27;
    uStack_510 = uVar40;
    puVar27 = puStack_448;
    if (iVar29 < 3) {
      puVar31 = (undefined8 *)((ulong)&uStack_490 | 4);
      *puStack_508 = *puStack_448;
      puStack_508[1] = puVar27[1];
      uStack_490 = (ulong *)CONCAT44(uStack_490._4_4_,0x42ff0000);
      puVar31[1] = 0;
      *puVar31 = 0;
      puVar31[3] = 0;
      puVar31[2] = 0;
      puVar31[5] = 0;
      puVar31[4] = 0;
      *(undefined8 *)((long)puVar31 + 0x34) = 0;
      *(undefined8 *)((long)puVar31 + 0x2c) = 0;
      if (puVar27 != &uStack_440) {
        _free(puVar27[-1]);
      }
    }
    else {
      uStack_510 = uStack_450;
      puStack_508 = puStack_448;
    }
  }
  lVar30 = (long)iVar21;
  if ((int)uStack_4f0._4_4_ < 1) {
    lVar32 = 0;
  }
  else {
    lVar32 = puStack_4a8[(ulong)uStack_4f0._4_4_ - 1];
  }
  lVar44 = lVar32 * lVar30;
  uVar41 = lVar44 + 0xfU & 0xfffffffffffffff0;
  lVar42 = uVar41 * lVar30;
  puVar25 = (ulong *)(lVar30 * lVar32 * 5 + lVar42 + 0x20);
  puStack_630 = &uStack_480;
  puVar22 = puStack_630;
  if ((ulong *)0x408 < puVar25) {
    puVar22 = puVar25;
    uStack_490 = puStack_630;
    __Znam();
  }
  uVar40 = (long)puVar22 + 0xfU & 0xfffffffffffffff0;
  puStack_638 = &uStack_500;
  uStack_490 = puVar22;
  puStack_488 = puVar25;
  FUN_10936ff7c(auStack_5b0,uVar36,uVar36,uVar37,uVar40,uVar41);
  uStack_610 = uVar34 | 0x42ff0000;
  iStack_60c = 2;
  puVar38 = (uint *)(uVar40 + lVar42);
  piStack_5d0 = &iStack_608;
  iStack_608 = iVar21;
  uStack_604 = 1;
  lStack_5e8 = 0;
  lStack_5f0 = 0;
  lStack_5d8 = 0;
  uStack_5e0 = 0;
  lStack_5c0 = 0;
  lStack_5b8 = 0;
  puStack_600 = puVar38;
  puStack_5f8 = puVar38;
  plStack_5c8 = &lStack_5c0;
  if ((iVar21 != 0) && (uVar40 == 0)) {
    puVar24 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar24 = 1;
    puStack_628 = puVar24 + 1;
    puStack_620 = (undefined1 *)0x1c;
    *(undefined1 *)(puVar24 + 8) = 0;
    *(undefined8 *)(puVar24 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar24 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar24 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar24 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&puStack_628,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
    goto LAB_109a5a520;
  }
  uStack_610 = uVar34 | 0x42ff4000;
  uVar33 = 0xfa50UL >> ((uVar33 & 0x1f) << 1) & 3;
  lStack_5c0 = 1L << uVar33;
  lStack_5f0 = (long)puVar38 + (lVar30 << uVar33);
  puStack_628 = (undefined4 *)CONCAT44(puStack_628._4_4_,0x2010000);
  uStack_618 = 0;
  puStack_620 = auStack_5b0;
  lStack_5e8 = lStack_5f0;
  lStack_5b8 = lStack_5c0;
  FUN_109a479a0(&uStack_4f0,&puStack_628);
  uVar33 = CONCAT44(uStack_53c,uStack_540);
  puVar28 = puStack_600;
  if (uVar34 == 5) {
    FUN_109a5ed38();
  }
  else {
    func_0x000109a5f33c(uStack_5a0,auStack_560[0],puStack_600,uVar33,uStack_500,uVar36,
                        (uint *)((long)puVar38 + lVar44));
  }
  puVar26 = param_2;
  FUN_109a479a0(&uStack_610);
  if (lStack_5d8 != 0) {
    piVar1 = (int *)(lStack_5d8 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar21 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar21 + -1 == 0) {
      func_0x000109a848d4(&uStack_610);
    }
  }
  puVar27 = puStack_638;
  lStack_5d8 = 0;
  puStack_5f8 = (uint *)0x0;
  puStack_600 = (uint *)0x0;
  lStack_5e8 = 0;
  lStack_5f0 = 0;
  if (0 < iStack_60c) {
    lVar30 = 0;
    do {
      piStack_5d0[lVar30] = 0;
      lVar30 = lVar30 + 1;
    } while (lVar30 < iStack_60c);
  }
  if (plStack_5c8 != &lStack_5c0 && plStack_5c8 != (long *)0x0) {
    _free(plStack_5c8[-1]);
  }
  if (lStack_578 != 0) {
    piVar1 = (int *)(lStack_578 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar21 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar21 + -1 == 0) {
      func_0x000109a848d4(auStack_5b0);
    }
  }
  lStack_578 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  uStack_588 = 0;
  uStack_590 = 0;
  if (0 < iStack_5ac) {
    lVar30 = 0;
    do {
      *(undefined4 *)(lStack_570 + lVar30 * 4) = 0;
      lVar30 = lVar30 + 1;
    } while (lVar30 < iStack_5ac);
  }
  if (puStack_568 != auStack_560 && puStack_568 != (undefined8 *)0x0) {
    _free(puStack_568[-1]);
  }
  puVar25 = uStack_490;
  if (uStack_490 != puStack_630 && uStack_490 != (ulong *)0x0) {
    __ZdaPv();
  }
  if (uStack_518 != 0) {
    piVar1 = (int *)(uStack_518 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar21 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar21 + -1 == 0) {
      puVar25 = &uStack_550;
      func_0x000109a848d4();
    }
  }
  uStack_518 = 0;
  uStack_538 = 0;
  uStack_534 = 0;
  uStack_540 = 0;
  uStack_53c = 0;
  uStack_528 = 0;
  uStack_524 = 0;
  uStack_530 = 0;
  uStack_52c = 0;
  if (0 < uStack_550._4_4_) {
    lVar30 = 0;
    do {
      *(undefined4 *)(uStack_510 + lVar30 * 4) = 0;
      lVar30 = lVar30 + 1;
    } while (lVar30 < uStack_550._4_4_);
  }
  if (puStack_508 != puVar27 && puStack_508 != (undefined8 *)0x0) {
    puVar25 = (ulong *)puStack_508[-1];
    _free();
  }
  if (uStack_4b8 != 0) {
    piVar1 = (int *)(uStack_4b8 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar21 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar21 + -1 == 0) {
      puVar25 = &uStack_4f0;
      func_0x000109a848d4();
    }
  }
  uStack_4b8 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  if (0 < (int)uStack_4f0._4_4_) {
    lVar30 = 0;
    do {
      *(undefined4 *)(uStack_4b0 + lVar30 * 4) = 0;
      lVar30 = lVar30 + 1;
    } while (lVar30 < (int)uStack_4f0._4_4_);
  }
  if (puStack_4a8 != &uStack_4a0 && puStack_4a8 != (undefined8 *)0x0) {
    puVar25 = (ulong *)puStack_4a8[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return 1;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_490);
  func_0x00010567aa40(&uStack_550);
  func_0x00010567aa40(&uStack_4f0);
  puVar22 = puVar25;
  __Unwind_Resume();
  lStack_6a0 = lVar44;
  puStack_698 = &uStack_610;
  puStack_690 = param_2;
  puStack_688 = puVar38;
  puStack_680 = (undefined4 *)&uStack_550;
  plStack_678 = &lStack_5c0;
  puStack_670 = auStack_5b0;
  uStack_668 = uVar37;
  uStack_660 = uVar36;
  puStack_658 = puVar25;
  puStack_650 = &stack0xfffffffffffffff0;
  pcStack_648 = FUN_109a5a63c;
  lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*puVar22 & 0x1f0000) == 0x10000) {
    puVar25 = (ulong *)puVar22[1];
    uStack_af0 = (ulong)&uStack_b30 | 8;
    uStack_b28 = puVar25[1];
    uStack_b30 = *puVar25;
    uStack_b18 = puVar25[3];
    pdStack_b20 = (double *)puVar25[2];
    uStack_b08 = puVar25[5];
    uStack_b10 = puVar25[4];
    uStack_af8 = puVar25[7];
    uStack_b00 = puVar25[6];
    plStack_ae8 = &lStack_ae0;
    lStack_ad8 = 0;
    lStack_ae0 = 0;
    if (puVar25[7] != 0) {
      piVar1 = (int *)(puVar25[7] + 0x14);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    if (*(int *)((long)puVar25 + 4) < 3) {
      lStack_ae0 = *(long *)puVar25[9];
      lStack_ad8 = ((long *)puVar25[9])[1];
    }
    else {
      uStack_b30 = uStack_b30 & 0xffffffff;
      func_0x000109a84868(&uStack_b30);
    }
  }
  else {
    FUN_109a8a180(&uStack_b30);
  }
  if ((*puVar26 & 0x1f0000) == 0x10000) {
    puVar27 = *(undefined8 **)(puVar26 + 2);
    uStack_b50 = (ulong)&uStack_b90 | 8;
    pdStack_b78 = (double *)puVar27[3];
    pdStack_b80 = (double *)puVar27[2];
    iStack_b88 = (int)puVar27[1];
    iStack_b84 = (int)((ulong)puVar27[1] >> 0x20);
    uStack_b90 = (uint)*puVar27;
    iStack_b8c = (int)((ulong)*puVar27 >> 0x20);
    pdStack_b68 = (double *)puVar27[5];
    pdStack_b70 = (double *)puVar27[4];
    lStack_b58 = puVar27[7];
    uStack_b60 = puVar27[6];
    plStack_b48 = &lStack_b40;
    lStack_b38 = 0;
    lStack_b40 = 0;
    if (puVar27[7] != 0) {
      piVar1 = (int *)(puVar27[7] + 0x14);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    if (*(int *)((long)puVar27 + 4) < 3) {
      lStack_b40 = *(long *)puVar27[9];
      lStack_b38 = ((long *)puVar27[9])[1];
    }
    else {
      iStack_b8c = 0;
      func_0x000109a84868(&uStack_b90);
    }
  }
  else {
    FUN_109a8a180(&uStack_b90,puVar26,0xffffffff);
  }
  iVar21 = iStack_b84;
  uVar36 = uStack_b30 & 0xfff;
  uVar34 = (uint)uVar36;
  if (uVar34 != (uStack_b90 & 0xfff) || 1 < uVar34 - 5) {
    puVar24 = (undefined4 *)0x40;
    func_0x000107c2ae8c();
    *puVar24 = 1;
    uStack_ad0 = (double **)(puVar24 + 1);
    ppdStack_ac8 = (double **)0x3a;
    *(undefined8 *)(puVar24 + 3) = 0x79742e326372735f;
    *(undefined8 *)(puVar24 + 1) = 0x203d3d2065707974;
    *(undefined1 *)((long)puVar24 + 0x3e) = 0;
    *(undefined8 *)(puVar24 + 7) = 0x3d3d206570797428;
    *(undefined8 *)(puVar24 + 5) = 0x2026262029286570;
    *(undefined8 *)(puVar24 + 0xb) = 0x2065707974207c7c;
    *(undefined8 *)(puVar24 + 9) = 0x204632335f564320;
    *(undefined8 *)((long)puVar24 + 0x36) = 0x294634365f564320;
    *(undefined8 *)((long)puVar24 + 0x2e) = 0x3d3d206570797420;
    FUN_109ac3188(0xffffff29,&uStack_ad0,&UNK_10f596fa4,&UNK_10f596e57,0x421);
    goto LAB_109a5c038;
  }
  uVar39 = (uint)uVar33;
  iVar29 = (int)uStack_b28;
  iVar17 = uStack_b28._4_4_;
  if ((uVar39 < 0x14) && ((1 << (ulong)(uVar39 & 0x1f) & 0x90009U) != 0)) {
    if (((uVar39 >> 4 & 1) == 0) && ((int)uStack_b28 != uStack_b28._4_4_)) {
      puVar24 = (undefined4 *)0x5c;
      func_0x000107c2ae8c();
      *puVar24 = 1;
      uStack_ad0 = (double **)(puVar24 + 1);
      ppdStack_ac8 = (double **)0x57;
      *(undefined8 *)(puVar24 + 0xb) = 0x4b53454c4f48435f;
      *(undefined8 *)(puVar24 + 9) = 0x504d4f434544203d;
      *(undefined8 *)(puVar24 + 0xf) = 0x206c616d726f6e5f;
      *(undefined8 *)(puVar24 + 0xd) = 0x7369207c7c202959;
      *(undefined8 *)(puVar24 + 0x13) = 0x73203d3d2073776f;
      *(undefined8 *)(puVar24 + 0x11) = 0x722e637273207c7c;
      *(undefined8 *)(puVar24 + 3) = 0x4d4f434544203d21;
      *(undefined8 *)(puVar24 + 1) = 0x20646f6874656d28;
      *(undefined1 *)((long)puVar24 + 0x5b) = 0;
      *(undefined8 *)((long)puVar24 + 0x53) = 0x736c6f632e637273;
      *(undefined8 *)(puVar24 + 7) = 0x2120646f6874656d;
      *(undefined8 *)(puVar24 + 5) = 0x20262620554c5f50;
      FUN_109ac3188(0xffffff29,&uStack_ad0,&UNK_10f596fa4,&UNK_10f596e57,0x425);
      goto LAB_109a5c038;
    }
    if (((((0x13 < uVar39) || ((1 << (ulong)(uVar39 & 0x1f) & 0x90009U) == 0)) ||
         ((uVar39 >> 4 & 1) != 0)) ||
        ((3 < (int)uStack_b28 || ((int)uStack_b28 != uStack_b28._4_4_)))) || (iStack_b84 != 1))
    goto LAB_109a5a8fc;
    FUN_109a8f64c(puVar28,uStack_b28 & 0xffffffff,1,uVar36,0xffffffff,0,0);
    if ((*puVar28 & 0x1f0000) == 0x10000) {
      puVar27 = *(undefined8 **)(puVar28 + 2);
      uStack_a90 = (ulong)&uStack_ad0 | 8;
      ppdStack_ac8 = (double **)puVar27[1];
      uStack_ad0 = (double **)*puVar27;
      uStack_ab8 = puVar27[3];
      pdStack_ac0 = (double *)puVar27[2];
      uStack_aa8 = puVar27[5];
      uStack_ab0 = puVar27[4];
      lStack_a98 = puVar27[7];
      uStack_aa0 = puVar27[6];
      plStack_a88 = &lStack_a80;
      lStack_a78 = 0;
      lStack_a80 = 0;
      if (puVar27[7] != 0) {
        piVar1 = (int *)(puVar27[7] + 0x14);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = *piVar1 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      if (*(int *)((long)puVar27 + 4) < 3) {
        lStack_a80 = *(long *)puVar27[9];
        lStack_a78 = ((long *)puVar27[9])[1];
      }
      else {
        uStack_ad0 = (double **)((ulong)uStack_ad0 & 0xffffffff);
        func_0x000109a84868(&uStack_ad0);
      }
    }
    else {
      FUN_109a8a180(&uStack_ad0,puVar28,0xffffffff);
    }
    if ((int)uStack_b28 == 3) {
      pdVar43 = (double *)((long)pdStack_b20 + lStack_ae0 * 2);
      if (uVar34 != 5) {
        pdVar3 = (double *)((long)pdStack_b20 + lStack_ae0);
        dVar46 = pdVar43[1];
        dVar62 = pdVar43[2];
        dVar49 = pdVar3[1];
        dVar51 = pdVar3[2];
        dVar57 = *pdVar43;
        dVar54 = *pdVar3;
        dVar66 = -(dVar51 * dVar46) + dVar62 * dVar49;
        dVar61 = *pdStack_b20;
        dVar63 = pdStack_b20[1];
        dVar65 = pdStack_b20[2];
        dVar64 = -(dVar49 * dVar57) + dVar46 * dVar54;
        dVar67 = -(dVar63 * (-(dVar51 * dVar57) + dVar62 * dVar54)) + dVar66 * dVar61 +
                 dVar64 * dVar65;
        if (dVar67 == 0.0) goto LAB_109a5bd9c;
        dVar67 = 1.0 / dVar67;
        dVar68 = *pdStack_b80;
        dVar70 = *(double *)((long)pdStack_b80 + lStack_b40);
        dVar72 = *(double *)((long)pdStack_b80 + lStack_b40 * 2);
        *pdStack_ac0 = dVar67 * ((dVar62 * -dVar63 + dVar46 * dVar65) * dVar70 + dVar68 * dVar66 +
                                dVar72 * (-(dVar65 * dVar49) + dVar51 * dVar63));
        *(double *)((long)pdStack_ac0 + lStack_a80) =
             dVar67 * ((-(dVar65 * dVar57) + dVar62 * dVar61) * dVar70 +
                       dVar68 * (-(dVar54 * dVar62) + dVar57 * dVar51) +
                      dVar72 * (-(dVar61 * dVar51) + dVar54 * dVar65));
        *(double *)((long)pdStack_ac0 + lStack_a80 * 2) =
             dVar67 * ((-(dVar61 * dVar46) + dVar57 * dVar63) * dVar70 + dVar68 * dVar64 +
                      dVar72 * (dVar54 * -dVar63 + dVar49 * dVar61));
        goto LAB_109a5bd94;
      }
      fVar52 = *(float *)pdStack_b20;
      fVar50 = *(float *)((long)pdStack_b20 + 4);
      pfVar2 = (float *)((long)pdStack_b20 + lStack_ae0);
      fVar56 = *pfVar2;
      fVar55 = pfVar2[1];
      fVar53 = *(float *)(pdVar43 + 1);
      fVar58 = pfVar2[2];
      fVar59 = *(float *)pdVar43;
      fVar48 = *(float *)((long)pdVar43 + 4);
      fVar47 = -(fVar58 * fVar48) + fVar53 * fVar55;
      fVar60 = *(float *)(pdStack_b20 + 1);
      fVar45 = -(fVar55 * fVar59) + fVar48 * fVar56;
      fVar12 = -((-(fVar58 * fVar59) + fVar53 * fVar56) * fVar50) + fVar47 * fVar52 +
               fVar45 * fVar60;
      if (fVar12 != 0.0) {
        fVar12 = 1.0 / fVar12;
        fVar69 = *(float *)pdStack_b80;
        fVar71 = *(float *)((long)pdStack_b80 + lStack_b40);
        fVar73 = *(float *)((long)pdStack_b80 + lStack_b40 * 2);
        fVar13 = -(fVar71 * fVar59) + fVar73 * fVar56;
        *(float *)pdStack_ac0 =
             fVar12 * (-((-fVar58 * fVar73 + fVar53 * fVar71) * fVar50) + fVar47 * fVar69 +
                      (-fVar55 * fVar73 + fVar48 * fVar71) * fVar60);
        *(float *)((long)pdStack_ac0 + lStack_a80) =
             fVar12 * ((-(fVar56 * fVar53) - -(fVar58 * fVar59)) * fVar69 +
                       (fVar53 * fVar71 + fVar73 * -fVar58) * fVar52 + fVar13 * fVar60);
        *(float *)((long)pdStack_ac0 + lStack_a80 * 2) =
             fVar12 * (-(fVar13 * fVar50) + (-(fVar71 * fVar48) + fVar73 * fVar55) * fVar52 +
                      fVar45 * fVar69);
        goto LAB_109a5bd94;
      }
LAB_109a5bd9c:
      uVar35 = 0;
    }
    else {
      if ((int)uStack_b28 == 2) {
        if (uVar34 == 5) {
          fVar45 = *(float *)((long)pdStack_b20 + 4);
          fVar52 = *(float *)((long)pdStack_b20 + lStack_ae0);
          fVar47 = ((float *)((long)pdStack_b20 + lStack_ae0))[1];
          fVar12 = -(fVar45 * fVar52) + fVar47 * *(float *)pdStack_b20;
          if (fVar12 == 0.0) goto LAB_109a5bd9c;
          fVar12 = 1.0 / fVar12;
          fVar55 = *(float *)pdStack_b80;
          fVar58 = *(float *)((long)pdStack_b80 + lStack_b40);
          *(float *)((long)pdStack_ac0 + lStack_a80) =
               fVar12 * (-(fVar55 * fVar52) + *(float *)pdStack_b20 * fVar58);
          *(float *)pdStack_ac0 = fVar12 * (-(fVar58 * fVar45) + fVar47 * fVar55);
        }
        else {
          dVar51 = pdStack_b20[1];
          dVar46 = *(double *)((long)pdStack_b20 + lStack_ae0);
          dVar49 = ((double *)((long)pdStack_b20 + lStack_ae0))[1];
          dVar54 = -(dVar51 * dVar46) + dVar49 * *pdStack_b20;
          if (dVar54 == 0.0) goto LAB_109a5bd9c;
          dVar54 = 1.0 / dVar54;
          dVar57 = *pdStack_b80;
          dVar61 = *(double *)((long)pdStack_b80 + lStack_b40);
          *(double *)((long)pdStack_ac0 + lStack_a80) =
               dVar54 * (-(dVar57 * dVar46) + *pdStack_b20 * dVar61);
          *pdStack_ac0 = dVar54 * (-(dVar61 * dVar51) + dVar49 * dVar57);
        }
      }
      else if (uVar34 == 5) {
        if (*(float *)pdStack_b20 == 0.0) goto LAB_109a5bd9c;
        *(float *)pdStack_ac0 = *(float *)pdStack_b80 / *(float *)pdStack_b20;
      }
      else {
        if (*pdStack_b20 == 0.0) goto LAB_109a5bd9c;
        *pdStack_ac0 = *pdStack_b80 / *pdStack_b20;
      }
LAB_109a5bd94:
      uVar35 = 1;
    }
    if (lStack_a98 != 0) {
      piVar1 = (int *)(lStack_a98 + 0x14);
      do {
        iVar21 = *piVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar21 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar21 + -1 == 0) {
        func_0x000109a848d4(&uStack_ad0);
      }
    }
    lStack_a98 = 0;
    uStack_ab8 = 0;
    pdStack_ac0 = (double *)0x0;
    uStack_aa8 = 0;
    uStack_ab0 = 0;
    if (0 < uStack_ad0._4_4_) {
      lVar30 = 0;
      do {
        *(undefined4 *)(uStack_a90 + lVar30 * 4) = 0;
        lVar30 = lVar30 + 1;
      } while (lVar30 < uStack_ad0._4_4_);
    }
    if (plStack_a88 != &lStack_a80 && plStack_a88 != (long *)0x0) {
      _free(plStack_a88[-1]);
    }
LAB_109a5b920:
    if (lStack_b58 != 0) {
      piVar1 = (int *)(lStack_b58 + 0x14);
      do {
        iVar21 = *piVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar21 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar21 + -1 == 0) {
        func_0x000109a848d4(&uStack_b90);
      }
    }
    lStack_b58 = 0;
    pdStack_b78 = (double *)0x0;
    pdStack_b80 = (double *)0x0;
    pdStack_b68 = (double *)0x0;
    pdStack_b70 = (double *)0x0;
    if (0 < iStack_b8c) {
      lVar30 = 0;
      do {
        *(undefined4 *)(uStack_b50 + lVar30 * 4) = 0;
        lVar30 = lVar30 + 1;
      } while (lVar30 < iStack_b8c);
    }
    if (plStack_b48 != &lStack_b40 && plStack_b48 != (long *)0x0) {
      _free(plStack_b48[-1]);
    }
    if (uStack_af8 != 0) {
      piVar1 = (int *)(uStack_af8 + 0x14);
      do {
        iVar21 = *piVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar21 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar21 + -1 == 0) {
        func_0x000109a848d4(&uStack_b30);
      }
    }
    uStack_af8 = 0;
    uStack_b18 = 0;
    pdStack_b20 = (double *)0x0;
    uStack_b08 = 0;
    uStack_b10 = 0;
    if (0 < uStack_b30._4_4_) {
      lVar30 = 0;
      do {
        *(undefined4 *)(uStack_af0 + lVar30 * 4) = 0;
        lVar30 = lVar30 + 1;
      } while (lVar30 < uStack_b30._4_4_);
    }
    if (plStack_ae8 != &lStack_ae0 && plStack_ae8 != (long *)0x0) {
      _free(plStack_ae8[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6b8) {
      return uVar35;
    }
    ___stack_chk_fail();
  }
  else {
LAB_109a5a8fc:
    uVar4 = uVar39 & 0xffffffef;
    if (uVar4 == 4) {
      uVar4 = 1;
    }
    ppdStack_ac8 = (double **)0x408;
    lVar30 = (long)uStack_b28._4_4_;
    uVar40 = 0xfa50UL >> ((uStack_b30 & 0x1f) << 1) & 3;
    iStack_bec = iStack_b8c;
    iStack_be8 = iStack_b88;
    uVar41 = (lVar30 << uVar40) + 0xfU & 0xfffffffffffffff0;
    uStack_bf0 = uStack_b90;
    iStack_be4 = iStack_b84;
    uVar37 = ((long)(int)uStack_b28 << uVar40) + 0xfU & 0xfffffffffffffff0;
    if (uVar4 != 1 || (uVar33 & 0x10) != 0) {
      uVar37 = uVar41;
    }
    piStack_bb0 = &iStack_be8;
    pdStack_bd8 = pdStack_b78;
    pdStack_be0 = pdStack_b80;
    pdStack_bc8 = pdStack_b68;
    pdStack_bd0 = pdStack_b70;
    lStack_bb8 = lStack_b58;
    uStack_bc0 = uStack_b60;
    lStack_b98 = 0;
    lStack_ba0 = 0;
    if (lStack_b58 != 0) {
      piVar1 = (int *)(lStack_b58 + 0x14);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    plStack_ba8 = &lStack_ba0;
    uStack_ad0 = &pdStack_ac0;
    if (iStack_b8c < 3) {
      lStack_ba0 = *plStack_b48;
      lStack_b98 = plStack_b48[1];
    }
    else {
      iStack_bec = 0;
      func_0x000109a84868(&uStack_bf0,&uStack_b90);
    }
    FUN_109a8f64c(puVar28,uStack_b28._4_4_,iStack_be4,(uint)uStack_b30 & 0xfff,0xffffffff,0,0);
    if ((*puVar28 & 0x1f0000) == 0x10000) {
      puVar25 = *(ulong **)(puVar28 + 2);
      uStack_c10 = (ulong)&uStack_c50 | 8;
      uStack_c48 = puVar25[1];
      uStack_c50 = *puVar25;
      uStack_c38 = puVar25[3];
      uStack_c40 = puVar25[2];
      uStack_c28 = puVar25[5];
      uStack_c30 = puVar25[4];
      uStack_c18 = puVar25[7];
      uStack_c20 = puVar25[6];
      puStack_c08 = &uStack_c00;
      uStack_bf8 = 0;
      uStack_c00 = 0;
      if (puVar25[7] != 0) {
        piVar1 = (int *)(puVar25[7] + 0x14);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = *piVar1 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      if (*(int *)((long)puVar25 + 4) < 3) {
        uStack_c00 = *(undefined8 *)puVar25[9];
        uStack_bf8 = ((undefined8 *)puVar25[9])[1];
      }
      else {
        uStack_c50 = uStack_c50 & 0xffffffff;
        func_0x000109a84868(&uStack_c50);
      }
    }
    else {
      FUN_109a8a180(&uStack_c50,puVar28,0xffffffff);
    }
    if (iVar17 <= iVar29) {
      uVar11 = uVar39 >> 4 & 1;
      uVar39 = 2;
      if (uVar4 != 1) {
        uVar39 = uVar4;
      }
      uVar5 = uVar4;
      iVar7 = iVar29;
      if ((uVar33 & 0x10) != 0) {
        uVar11 = 1;
        uVar5 = uVar39;
        iVar7 = iVar17;
      }
      iVar6 = iVar29;
      if (iVar29 != iVar17) {
        iVar6 = iVar7;
      }
      uVar39 = 0;
      if (iVar29 != iVar17) {
        uVar4 = uVar5;
        uVar39 = uVar11;
      }
      uVar11 = uVar39;
      if (uVar4 == 1) {
        uVar11 = 1;
      }
      iVar7 = iVar17;
      if (uVar11 == 0) {
        iVar7 = iVar29;
      }
      lVar44 = uVar37 * (long)iVar7;
      lVar42 = (long)(iVar21 * iVar17) << uVar40;
      lVar32 = lVar42 + 0x20;
      if (uVar39 == 0) {
        lVar32 = 0x20;
      }
      ppdVar8 = (double **)(lVar44 + lVar32);
      if (uVar4 - 1 < 2) {
        ppdVar8 = (double **)
                  (lVar44 + lVar32 +
                  (lVar30 * 5 << uVar40) + (long)iVar21 * 8 + uVar41 * lVar30 + 0x20);
      }
      ppdVar23 = uStack_ad0;
      ppdVar19 = ppdVar8;
      if (ppdStack_ac8 < ppdVar8) {
        if (uStack_ad0 != &pdStack_ac0) {
          if (uStack_ad0 != (double **)0x0) {
            __ZdaPv();
          }
          ppdStack_ac8 = (double **)0x408;
          uStack_ad0 = &pdStack_ac0;
        }
        ppdVar23 = &pdStack_ac0;
        ppdVar19 = ppdStack_ac8;
        if ((double **)0x408 < ppdVar8) {
          ppdVar23 = ppdVar8;
          __Znam();
          uStack_ad0 = ppdVar23;
          ppdVar19 = ppdVar8;
        }
      }
      ppdStack_ac8 = ppdVar19;
      uVar33 = (long)ppdVar23 + 0xfU & 0xfffffffffffffff0;
      puVar27 = &uStack_cb0;
      FUN_10936ff7c(puVar27,iVar6,iVar17,uVar36,uVar33,uVar37);
      lVar32 = 1L << uVar40;
      if (uVar39 == 0) {
        if (uVar4 != 1) {
          uStack_d10 = 0x2010000;
          uStack_d08 = &uStack_cb0;
          uStack_d00._0_4_ = 0;
          uStack_d00._4_4_ = 0;
          FUN_109a479a0(&uStack_b30,&uStack_d10);
          pdVar43 = (double *)(uVar33 + lVar44);
          if ((uVar4 == 3) || (puVar27 = uStack_d08, uVar4 == 0)) {
            uStack_d10 = 0x2010000;
            uStack_d08 = &uStack_c50;
            uStack_d00._0_4_ = 0;
            uStack_d00._4_4_ = 0;
            FUN_109a479a0(&uStack_bf0,&uStack_d10);
            puVar27 = uStack_d08;
          }
          goto LAB_109a5b218;
        }
        FUN_10936ff7c(&uStack_d10,iVar17,iVar6,uVar36,uVar33,uVar37);
        if (lStack_c78 != 0) {
          piVar1 = (int *)(lStack_c78 + 0x14);
          do {
            iVar29 = *piVar1;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = iVar29 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar29 + -1 == 0) {
            func_0x000109a848d4(&uStack_cb0);
          }
        }
        if (0 < uStack_cb0._4_4_) {
          lVar42 = 0;
          do {
            *(undefined4 *)((long)puStack_c70 + lVar42 * 4) = 0;
            lVar42 = lVar42 + 1;
          } while (lVar42 < uStack_cb0._4_4_);
        }
        uStack_ca8 = CONCAT44(uStack_d08._4_4_,(int)uStack_d08);
        uStack_cb0 = (undefined4 *)CONCAT44(iStack_d0c,uStack_d10);
        uStack_c98 = CONCAT44(uStack_cf8._4_4_,(undefined4)uStack_cf8);
        uStack_ca0 = CONCAT44(uStack_d00._4_4_,(undefined4)uStack_d00);
        uStack_c88 = CONCAT44(uStack_ce8._4_4_,(undefined4)uStack_ce8);
        uStack_c90 = CONCAT44(uStack_cf0._4_4_,(undefined4)uStack_cf0);
        lStack_c78 = lStack_cd8;
        plVar18 = plStack_c68;
        if ((plStack_c68 != alStack_c60) &&
           (puStack_c70 = (undefined8 *)((ulong)&uStack_cb0 | 8), plVar18 = alStack_c60,
           plStack_c68 != (long *)0x0)) {
          _free(plStack_c68[-1]);
        }
        plStack_c68 = plVar18;
        if (iStack_d0c < 3) {
          puVar27 = (undefined8 *)((ulong)&uStack_d10 | 4);
          *plStack_c68 = *plStack_cc8;
          plStack_c68[1] = plStack_cc8[1];
          uStack_d10 = 0x42ff0000;
          puVar27[1] = 0;
          *puVar27 = 0;
          puVar27[3] = 0;
          puVar27[2] = 0;
          puVar27[5] = 0;
          puVar27[4] = 0;
          *(undefined8 *)((long)puVar27 + 0x34) = 0;
          *(undefined8 *)((long)puVar27 + 0x2c) = 0;
          if (plStack_cc8 != &lStack_cc0) {
            _free(plStack_cc8[-1]);
          }
        }
        else {
          plStack_c68 = plStack_cc8;
          puStack_c70 = puStack_cd0;
        }
        uStack_d10 = 0x1010000;
        uStack_d08 = &uStack_b30;
        uStack_d00._0_4_ = 0;
        uStack_d00._4_4_ = 0;
        uStack_da0._0_4_ = 0x2010000;
        uStack_d98 = &uStack_cb0;
        uStack_d90._0_4_ = 0;
        uStack_d90._4_4_ = 0;
        FUN_109a895d0(&uStack_d10,&uStack_da0);
        pdVar43 = (double *)(uVar33 + lVar44);
LAB_109a5b250:
        uVar33 = (long)pdVar43 + 0xfU & 0xfffffffffffffff0;
        FUN_10936ff7c(&uStack_d10,iVar17,iVar17,uVar36,uVar33,uVar41);
        uStack_da0._0_4_ = uVar34 | 0x42ff0000;
        uStack_da0._4_4_ = 2;
        uStack_d90 = uVar33 + uVar41 * lVar30;
        puStack_d60 = &uStack_d98;
        uStack_d98._0_4_ = iVar17;
        uStack_d98._4_4_ = 1;
        uStack_d78._0_4_ = 0;
        uStack_d78._4_4_ = 0;
        uStack_d80._0_4_ = 0;
        uStack_d80._4_4_ = 0;
        lStack_d68 = 0;
        uStack_d70 = 0;
        uStack_d6c = 0;
        lStack_d50 = 0;
        lStack_d48 = 0;
        plStack_d58 = &lStack_d50;
        uStack_d88 = uStack_d90;
        if ((iVar17 != 0) && (uVar33 == 0)) {
          puVar24 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar24 = 1;
          uStack_e18 = puVar24 + 1;
          uStack_e10._0_4_ = 0x1c;
          uStack_e10._4_4_ = 0;
          *(undefined1 *)(puVar24 + 8) = 0;
          *(undefined8 *)(puVar24 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar24 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar24 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar24 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&uStack_e18,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
          goto LAB_109a5c038;
        }
        uStack_da0._0_4_ = uVar34 | 0x42ff4000;
        uStack_d80 = uStack_d90 + (lVar30 << uVar40);
        uStack_e18._0_4_ = 0x42ff0000;
        puStack_dd8 = &uStack_e10;
        uStack_e10._4_4_ = 0;
        uStack_e08 = 0;
        uStack_e18._4_4_ = 0;
        uStack_e10._0_4_ = 0;
        uStack_dfc = 0;
        uStack_df8 = 0;
        uStack_e04 = 0;
        uStack_e00 = 0;
        uStack_dec = 0;
        uStack_df4 = 0;
        uStack_df0 = 0;
        lStack_de0 = 0;
        uStack_de8 = 0;
        uStack_de4 = 0;
        uStack_dc8 = 0;
        uStack_dc0 = 0;
        puStack_dd0 = &uStack_dc8;
        lStack_d50 = lVar32;
        lStack_d48 = lVar32;
        uStack_d78 = uStack_d80;
        if (uVar4 == 2) {
          if (uVar34 == 5) {
            FUN_109a5ed38();
          }
          else {
            func_0x000109a5f33c();
          }
          if (lStack_cd8 != 0) {
            piVar1 = (int *)(lStack_cd8 + 0x14);
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = *piVar1 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          if (lStack_de0 != 0) {
            piVar1 = (int *)(lStack_de0 + 0x14);
            do {
              iVar29 = *piVar1;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar29 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar29 + -1 == 0) {
              func_0x000109a848d4(&uStack_e18);
            }
          }
          lStack_de0 = 0;
          uStack_e00 = 0;
          uStack_dfc = 0;
          uStack_e08 = 0;
          uStack_e04 = 0;
          uStack_df0 = 0;
          uStack_dec = 0;
          uStack_df8 = 0;
          uStack_df4 = 0;
          if (uStack_e18._4_4_ < 1) {
            if (iStack_d0c < 3) goto LAB_109a5b540;
          }
          else {
            lVar30 = 0;
            do {
              *(undefined4 *)((long)puStack_dd8 + lVar30 * 4) = 0;
              lVar30 = lVar30 + 1;
            } while (lVar30 < uStack_e18._4_4_);
            if (uStack_e18._4_4_ < 3 && iStack_d0c < 3) {
LAB_109a5b540:
              uStack_e18._0_4_ = uStack_d10;
              puVar38 = &uStack_d10;
              uStack_e18._4_4_ = iStack_d0c;
LAB_109a5b560:
              uStack_e10._0_4_ = puVar38[2];
              uStack_e10._4_4_ = puVar38[3];
              puVar27 = *(undefined8 **)(puVar38 + 0x12);
              *puStack_dd0 = *puVar27;
              puStack_dd0[1] = puVar27[1];
              goto LAB_109a5b584;
            }
          }
          uStack_e18._0_4_ = uStack_d10;
          puVar38 = &uStack_d10;
          func_0x000109a84868(&uStack_e18,&uStack_d10);
        }
        else {
          iVar29 = 0;
          if (CONCAT44(uStack_d00._4_4_,(undefined4)uStack_d00) != 0) {
            iVar29 = iVar17;
          }
          if (uVar34 == 5) {
            func_0x000109a5f944();
          }
          else {
            func_0x000109a6002c(uStack_ca0,alStack_c60[0],uStack_d90,
                                CONCAT44(uStack_d00._4_4_,(undefined4)uStack_d00),lStack_cc0,iVar6,
                                iVar17,iVar29);
          }
          if (lStack_c78 != 0) {
            piVar1 = (int *)(lStack_c78 + 0x14);
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = *piVar1 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          if (lStack_de0 != 0) {
            piVar1 = (int *)(lStack_de0 + 0x14);
            do {
              iVar29 = *piVar1;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar29 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar29 + -1 == 0) {
              func_0x000109a848d4(&uStack_e18);
            }
          }
          lStack_de0 = 0;
          uStack_e00 = 0;
          uStack_dfc = 0;
          uStack_e08 = 0;
          uStack_e04 = 0;
          uStack_df0 = 0;
          uStack_dec = 0;
          uStack_df8 = 0;
          uStack_df4 = 0;
          if (uStack_e18._4_4_ < 1) {
            if (uStack_cb0._4_4_ < 3) goto LAB_109a5b55c;
          }
          else {
            lVar30 = 0;
            do {
              *(undefined4 *)((long)puStack_dd8 + lVar30 * 4) = 0;
              lVar30 = lVar30 + 1;
            } while (lVar30 < uStack_e18._4_4_);
            if (uStack_e18._4_4_ < 3 && uStack_cb0._4_4_ < 3) {
LAB_109a5b55c:
              uStack_e18._0_4_ = (uint)uStack_cb0;
              puVar38 = (uint *)&uStack_cb0;
              uStack_e18._4_4_ = uStack_cb0._4_4_;
              goto LAB_109a5b560;
            }
          }
          uStack_e18._0_4_ = (uint)uStack_cb0;
          puVar38 = (uint *)&uStack_cb0;
          func_0x000109a84868(&uStack_e18,&uStack_cb0);
        }
LAB_109a5b584:
        uVar35 = *(undefined8 *)(puVar38 + 4);
        uStack_e08 = (undefined4)uVar35;
        uStack_e04 = (undefined4)((ulong)uVar35 >> 0x20);
        uStack_df8 = (undefined4)*(undefined8 *)(puVar38 + 8);
        uStack_df4 = (undefined4)((ulong)*(undefined8 *)(puVar38 + 8) >> 0x20);
        uStack_e00 = (undefined4)*(undefined8 *)(puVar38 + 6);
        uStack_dfc = (undefined4)((ulong)*(undefined8 *)(puVar38 + 6) >> 0x20);
        uStack_de8 = (undefined4)*(undefined8 *)(puVar38 + 0xc);
        uStack_de4 = (undefined4)((ulong)*(undefined8 *)(puVar38 + 0xc) >> 0x20);
        uStack_df0 = (undefined4)*(undefined8 *)(puVar38 + 10);
        uStack_dec = (undefined4)((ulong)*(undefined8 *)(puVar38 + 10) >> 0x20);
        lStack_de0 = *(long *)(puVar38 + 0xe);
        if (uVar34 == 5) {
          FUN_109a5c228(iVar6,iVar17,uStack_d90,0,uVar35,uStack_dc8,1,
                        CONCAT44(uStack_d00._4_4_,(undefined4)uStack_d00),lStack_cc0,pdStack_be0,
                        lStack_ba0,iVar21);
        }
        else {
          func_0x000109a5c67c(iVar6,iVar17,uStack_d90,0,uVar35,uStack_dc8,1,
                              CONCAT44(uStack_d00._4_4_,(undefined4)uStack_d00),lStack_cc0,
                              pdStack_be0,lStack_ba0,iVar21);
        }
        if (lStack_de0 != 0) {
          piVar1 = (int *)(lStack_de0 + 0x14);
          do {
            iVar21 = *piVar1;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = iVar21 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar21 + -1 == 0) {
            func_0x000109a848d4(&uStack_e18);
          }
        }
        lStack_de0 = 0;
        uStack_e00 = 0;
        uStack_dfc = 0;
        uStack_e08 = 0;
        uStack_e04 = 0;
        uStack_df0 = 0;
        uStack_dec = 0;
        uStack_df8 = 0;
        uStack_df4 = 0;
        if (0 < uStack_e18._4_4_) {
          lVar30 = 0;
          do {
            *(undefined4 *)((long)puStack_dd8 + lVar30 * 4) = 0;
            lVar30 = lVar30 + 1;
          } while (lVar30 < uStack_e18._4_4_);
        }
        if (puStack_dd0 != &uStack_dc8 && puStack_dd0 != (undefined8 *)0x0) {
          _free(puStack_dd0[-1]);
        }
        if (lStack_d68 != 0) {
          piVar1 = (int *)(lStack_d68 + 0x14);
          do {
            iVar21 = *piVar1;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = iVar21 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar21 + -1 == 0) {
            func_0x000109a848d4(&uStack_da0);
          }
        }
        lStack_d68 = 0;
        uStack_d88._0_4_ = 0;
        uStack_d88._4_4_ = 0;
        uStack_d90._0_4_ = 0;
        uStack_d90._4_4_ = 0;
        uStack_d78._0_4_ = 0;
        uStack_d78._4_4_ = 0;
        uStack_d80._0_4_ = 0;
        uStack_d80._4_4_ = 0;
        if (0 < uStack_da0._4_4_) {
          lVar30 = 0;
          do {
            *(undefined4 *)((long)puStack_d60 + lVar30 * 4) = 0;
            lVar30 = lVar30 + 1;
          } while (lVar30 < uStack_da0._4_4_);
        }
        if (plStack_d58 != &lStack_d50 && plStack_d58 != (long *)0x0) {
          _free(plStack_d58[-1]);
        }
        if (lStack_cd8 != 0) {
          piVar1 = (int *)(lStack_cd8 + 0x14);
          do {
            iVar21 = *piVar1;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = iVar21 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar21 + -1 == 0) {
            func_0x000109a848d4(&uStack_d10);
          }
        }
        lStack_cd8 = 0;
        uStack_cf8._0_4_ = 0;
        uStack_cf8._4_4_ = 0;
        uStack_d00._0_4_ = 0;
        uStack_d00._4_4_ = 0;
        uStack_ce8._0_4_ = 0;
        uStack_ce8._4_4_ = 0;
        uStack_cf0._0_4_ = 0;
        uStack_cf0._4_4_ = 0;
        if (0 < iStack_d0c) {
          lVar30 = 0;
          do {
            *(undefined4 *)((long)puStack_cd0 + lVar30 * 4) = 0;
            lVar30 = lVar30 + 1;
          } while (lVar30 < iStack_d0c);
        }
        if (plStack_cc8 != &lStack_cc0 && plStack_cc8 != (long *)0x0) {
          _free(plStack_cc8[-1]);
        }
LAB_109a5b790:
        uVar35 = 1;
      }
      else {
        uStack_d10 = 0x1010000;
        uStack_d08 = &uStack_b30;
        uStack_d00._0_4_ = 0;
        uStack_d00._4_4_ = 0;
        uStack_da0._0_4_ = 0x2010000;
        uStack_d98 = &uStack_cb0;
        uStack_d90._0_4_ = 0;
        uStack_d90._4_4_ = 0;
        FUN_109a91d90();
        FUN_109a6dab4(0x3ff0000000000000,&uStack_d10,&uStack_da0,1,puVar27,0xffffffff);
        pdVar43 = (double *)(uVar33 + lVar44);
        if ((uVar4 == 3) || (uVar4 == 0)) {
          uStack_d90._0_4_ = 0;
          uStack_d90._4_4_ = 0;
          uStack_da0._0_4_ = 0x1010000;
          uStack_d98 = &uStack_b30;
          uStack_e08 = 0;
          uStack_e04 = 0;
          uStack_e18._0_4_ = 0x1010000;
          uStack_e10 = &uStack_bf0;
          uStack_d10 = 0x42ff0000;
          puStack_d20 = &uStack_d10;
          puStack_cd0 = &uStack_d08;
          uStack_d08._4_4_ = 0;
          uStack_d00._0_4_ = 0;
          iStack_d0c = 0;
          uStack_d08._0_4_ = 0;
          uStack_cf8._4_4_ = 0;
          uStack_cf0._0_4_ = 0;
          uStack_d00._4_4_ = 0;
          uStack_cf8._0_4_ = 0;
          uStack_ce8._4_4_ = 0;
          uStack_cf0._4_4_ = 0;
          uStack_ce8._0_4_ = 0;
          lStack_cd8 = 0;
          uStack_ce0 = 0;
          uStack_cdc = 0;
          lStack_cc0 = 0;
          lStack_cb8 = 0;
          uStack_d18 = 0;
          auStack_d28[0] = 0x1010000;
          auStack_d40[0] = 0x2010000;
          puStack_d38 = &uStack_c50;
          uStack_d30 = 0;
          plStack_cc8 = &lStack_cc0;
          FUN_109a64f8c(0x3ff0000000000000,0,&uStack_da0,&uStack_e18,auStack_d28,auStack_d40,1);
          if (lStack_cd8 != 0) {
            piVar1 = (int *)(lStack_cd8 + 0x14);
            do {
              iVar29 = *piVar1;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar29 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar29 + -1 == 0) {
              func_0x000109a848d4(&uStack_d10);
            }
          }
          puVar27 = (undefined8 *)CONCAT44(uStack_d08._4_4_,(int)uStack_d08);
          lStack_cd8 = 0;
          uStack_cf8._0_4_ = 0;
          uStack_cf8._4_4_ = 0;
          uStack_d00._0_4_ = 0;
          uStack_d00._4_4_ = 0;
          uStack_ce8._0_4_ = 0;
          uStack_ce8._4_4_ = 0;
          uStack_cf0._0_4_ = 0;
          uStack_cf0._4_4_ = 0;
          if (0 < iStack_d0c) {
            lVar42 = 0;
            do {
              *(undefined4 *)((long)puStack_cd0 + lVar42 * 4) = 0;
              lVar42 = lVar42 + 1;
            } while (lVar42 < iStack_d0c);
          }
          if (plStack_cc8 == &lStack_cc0 || plStack_cc8 == (long *)0x0) goto LAB_109a5b218;
        }
        else {
          uStack_d10 = uVar34 | 0x42ff0000;
          iStack_d0c = 2;
          puStack_cd0 = &uStack_d08;
          uStack_d08._0_4_ = iVar17;
          uStack_d08._4_4_ = iVar21;
          uStack_ce8._0_4_ = 0;
          uStack_ce8._4_4_ = 0;
          uStack_cf0._0_4_ = 0;
          uStack_cf0._4_4_ = 0;
          lStack_cd8 = 0;
          uStack_ce0 = 0;
          uStack_cdc = 0;
          lStack_cc0 = 0;
          lStack_cb8 = 0;
          plStack_cc8 = &lStack_cc0;
          uStack_d00 = pdVar43;
          uStack_cf8 = pdVar43;
          if (((long)iVar21 * (long)iVar17 != 0) && (uVar33 == 0)) {
            puVar24 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar24 = 1;
            uStack_da0 = puVar24 + 1;
            uStack_d98._0_4_ = 0x1c;
            uStack_d98._4_4_ = 0;
            *(undefined1 *)(puVar24 + 8) = 0;
            *(undefined8 *)(puVar24 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar24 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar24 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar24 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&uStack_da0,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
            goto LAB_109a5c038;
          }
          uStack_d10 = uVar34 | 0x42ff4000;
          lStack_cc0 = (long)iVar21 << uVar40;
          uStack_cf0 = (double *)((long)pdVar43 + lStack_cc0 * lVar30);
          uStack_e08 = 0;
          uStack_e04 = 0;
          uStack_e18._0_4_ = 0x1010000;
          uStack_e10 = (uint *)&uStack_b30;
          uStack_d18 = 0;
          auStack_d28[0] = 0x1010000;
          puStack_d20 = &uStack_bf0;
          uStack_da0._0_4_ = 0x42ff0000;
          puStack_d38 = &uStack_da0;
          puStack_d60 = &uStack_d98;
          uStack_d98._4_4_ = 0;
          uStack_d90._0_4_ = 0;
          uStack_da0._4_4_ = 0;
          uStack_d98._0_4_ = 0;
          uStack_d88._4_4_ = 0;
          uStack_d80._0_4_ = 0;
          uStack_d90._4_4_ = 0;
          uStack_d88._0_4_ = 0;
          uStack_d78._4_4_ = 0;
          uStack_d80._4_4_ = 0;
          uStack_d78._0_4_ = 0;
          lStack_d68 = 0;
          uStack_d70 = 0;
          uStack_d6c = 0;
          lStack_d50 = 0;
          lStack_d48 = 0;
          uStack_d30 = 0;
          auStack_d40[0] = 0x1010000;
          auStack_db8[0] = 0x2010000;
          uStack_da8 = 0;
          puStack_db0 = &uStack_d10;
          plStack_d58 = &lStack_d50;
          lStack_cb8 = lVar32;
          uStack_ce8 = uStack_cf0;
          FUN_109a64f8c(0x3ff0000000000000,0,&uStack_e18,auStack_d28,auStack_d40,auStack_db8,1);
          pdVar3 = uStack_cf0;
          pdVar14 = uStack_d00;
          pdVar15 = uStack_ce8;
          pdVar16 = uStack_cf8;
          if (lStack_d68 != 0) {
            piVar1 = (int *)(lStack_d68 + 0x14);
            do {
              iVar29 = *piVar1;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar29 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar29 + -1 == 0) {
              func_0x000109a848d4(&uStack_da0);
              pdVar3 = uStack_cf0;
              pdVar14 = uStack_d00;
              pdVar15 = uStack_ce8;
              pdVar16 = uStack_cf8;
            }
          }
          lStack_d68 = 0;
          uStack_d88._0_4_ = 0;
          uStack_d88._4_4_ = 0;
          uStack_d90._0_4_ = 0;
          uStack_d90._4_4_ = 0;
          uStack_d78._0_4_ = 0;
          uStack_d78._4_4_ = 0;
          uStack_d80._0_4_ = 0;
          uStack_d80._4_4_ = 0;
          if (0 < uStack_da0._4_4_) {
            lVar44 = 0;
            do {
              *(undefined4 *)((long)puStack_d60 + lVar44 * 4) = 0;
              lVar44 = lVar44 + 1;
            } while (lVar44 < uStack_da0._4_4_);
          }
          uStack_cf0 = pdVar3;
          uStack_d00 = pdVar14;
          uStack_ce8 = pdVar15;
          uStack_cf8 = pdVar16;
          if (plStack_d58 != &lStack_d50 && plStack_d58 != (long *)0x0) {
            _free(plStack_d58[-1]);
          }
          if (lStack_cd8 != 0) {
            piVar1 = (int *)(lStack_cd8 + 0x14);
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = *piVar1 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          if (lStack_bb8 != 0) {
            piVar1 = (int *)(lStack_bb8 + 0x14);
            do {
              iVar29 = *piVar1;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar29 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar29 + -1 == 0) {
              func_0x000109a848d4(&uStack_bf0);
            }
          }
          lStack_bb8 = 0;
          pdStack_bd8 = (double *)0x0;
          pdStack_be0 = (double *)0x0;
          pdStack_bc8 = (double *)0x0;
          pdStack_bd0 = (double *)0x0;
          if (iStack_bec < 1) {
LAB_109a5b148:
            uStack_bf0 = uStack_d10;
            if (2 < iStack_d0c) goto LAB_109a5b17c;
            iStack_bec = iStack_d0c;
            iStack_be8 = (int)uStack_d08;
            iStack_be4 = uStack_d08._4_4_;
            *plStack_ba8 = *plStack_cc8;
            plStack_ba8[1] = plStack_cc8[1];
            pdStack_bd0 = uStack_cf0;
            pdStack_be0 = uStack_d00;
            pdStack_bc8 = uStack_ce8;
            pdStack_bd8 = uStack_cf8;
          }
          else {
            lVar44 = 0;
            do {
              piStack_bb0[lVar44] = 0;
              lVar44 = lVar44 + 1;
            } while (lVar44 < iStack_bec);
            if (iStack_bec < 3) goto LAB_109a5b148;
LAB_109a5b17c:
            uStack_bf0 = uStack_d10;
            func_0x000109a84868(&uStack_bf0,&uStack_d10);
            pdStack_bd0 = uStack_cf0;
            pdStack_be0 = uStack_d00;
            pdStack_bc8 = uStack_ce8;
            pdStack_bd8 = uStack_cf8;
          }
          uStack_bc0 = CONCAT44(uStack_cdc,uStack_ce0);
          lStack_bb8 = lStack_cd8;
          if (lStack_cd8 != 0) {
            piVar1 = (int *)(lStack_cd8 + 0x14);
            do {
              iVar29 = *piVar1;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar29 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar29 + -1 == 0) {
              uStack_cf0 = pdStack_bd0;
              uStack_d00 = pdStack_be0;
              uStack_ce8 = pdStack_bc8;
              uStack_cf8 = pdStack_bd8;
              func_0x000109a848d4(&uStack_d10);
            }
          }
          lStack_cd8 = 0;
          uStack_cf8._0_4_ = 0;
          uStack_cf8._4_4_ = 0;
          uStack_d00._0_4_ = 0;
          uStack_d00._4_4_ = 0;
          uStack_ce8._0_4_ = 0;
          uStack_ce8._4_4_ = 0;
          uStack_cf0._0_4_ = 0;
          uStack_cf0._4_4_ = 0;
          if (0 < iStack_d0c) {
            lVar44 = 0;
            do {
              *(undefined4 *)((long)puStack_cd0 + lVar44 * 4) = 0;
              lVar44 = lVar44 + 1;
            } while (lVar44 < iStack_d0c);
          }
          pdVar43 = (double *)((long)pdVar43 + lVar42);
          puVar27 = (undefined8 *)CONCAT44(uStack_d08._4_4_,(int)uStack_d08);
          if (plStack_cc8 == &lStack_cc0 || plStack_cc8 == (long *)0x0) goto LAB_109a5b218;
        }
        lStack_cd8 = 0;
        uStack_ce8._4_4_ = 0;
        uStack_ce8._0_4_ = 0;
        uStack_cf0._4_4_ = 0;
        uStack_cf0._0_4_ = 0;
        uStack_cf8._4_4_ = 0;
        uStack_cf8._0_4_ = 0;
        uStack_d00._4_4_ = 0;
        uStack_d00._0_4_ = 0;
        _free(plStack_cc8[-1]);
        puVar27 = (undefined8 *)CONCAT44(uStack_d08._4_4_,(int)uStack_d08);
LAB_109a5b218:
        uStack_d08 = puVar27;
        if (uVar4 != 3) {
          if (uVar4 == 0) {
            if (uVar34 == 5) {
              FUN_109aa4d88();
              iVar21 = (int)uStack_ca0;
            }
            else {
              func_0x000109aa506c(uStack_ca0,alStack_c60[0],iVar17,uStack_c40,uStack_c00,iVar21);
              iVar21 = (int)uStack_ca0;
            }
            if (iVar21 != 0) goto LAB_109a5b790;
            goto LAB_109a5b3b0;
          }
          goto LAB_109a5b250;
        }
        if (uVar34 == 5) {
          FUN_109aa5350();
          if ((uStack_ca0 & 1) == 0) goto LAB_109a5b3b0;
          goto LAB_109a5b790;
        }
        func_0x000109aa55c4(uStack_ca0,alStack_c60[0],iVar17,uStack_c40,uStack_c00,iVar21);
        if ((uStack_ca0 & 1) != 0) goto LAB_109a5b790;
LAB_109a5b3b0:
        uStack_d08._0_4_ = 0;
        uStack_d08._4_4_ = 0;
        uStack_d10 = 0;
        iStack_d0c = 0;
        uStack_cf8._0_4_ = 0;
        uStack_cf8._4_4_ = 0;
        uStack_d00._0_4_ = 0;
        uStack_d00._4_4_ = 0;
        FUN_109a48880(&uStack_c50,&uStack_d10);
        uVar35 = 0;
      }
      if (lStack_c78 != 0) {
        piVar1 = (int *)(lStack_c78 + 0x14);
        do {
          iVar21 = *piVar1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar21 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar21 + -1 == 0) {
          func_0x000109a848d4(&uStack_cb0);
        }
      }
      lStack_c78 = 0;
      uStack_c98 = 0;
      uStack_ca0 = 0;
      uStack_c88 = 0;
      uStack_c90 = 0;
      if (0 < uStack_cb0._4_4_) {
        lVar30 = 0;
        do {
          *(undefined4 *)((long)puStack_c70 + lVar30 * 4) = 0;
          lVar30 = lVar30 + 1;
        } while (lVar30 < uStack_cb0._4_4_);
      }
      if (plStack_c68 != alStack_c60 && plStack_c68 != (long *)0x0) {
        _free(plStack_c68[-1]);
      }
      if (uStack_c18 != 0) {
        piVar1 = (int *)(uStack_c18 + 0x14);
        do {
          iVar21 = *piVar1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar21 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar21 + -1 == 0) {
          func_0x000109a848d4(&uStack_c50);
        }
      }
      uStack_c18 = 0;
      uStack_c38 = 0;
      uStack_c40 = 0;
      uStack_c28 = 0;
      uStack_c30 = 0;
      if (0 < uStack_c50._4_4_) {
        lVar30 = 0;
        do {
          *(undefined4 *)(uStack_c10 + lVar30 * 4) = 0;
          lVar30 = lVar30 + 1;
        } while (lVar30 < uStack_c50._4_4_);
      }
      if (puStack_c08 != &uStack_c00 && puStack_c08 != (undefined8 *)0x0) {
        _free(puStack_c08[-1]);
      }
      if (lStack_bb8 != 0) {
        piVar1 = (int *)(lStack_bb8 + 0x14);
        do {
          iVar21 = *piVar1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar21 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar21 + -1 == 0) {
          func_0x000109a848d4(&uStack_bf0);
        }
      }
      lStack_bb8 = 0;
      pdStack_bd8 = (double *)0x0;
      pdStack_be0 = (double *)0x0;
      pdStack_bc8 = (double *)0x0;
      pdStack_bd0 = (double *)0x0;
      if (0 < iStack_bec) {
        lVar30 = 0;
        do {
          piStack_bb0[lVar30] = 0;
          lVar30 = lVar30 + 1;
        } while (lVar30 < iStack_bec);
      }
      if (plStack_ba8 != &lStack_ba0 && plStack_ba8 != (long *)0x0) {
        _free(plStack_ba8[-1]);
      }
      if (uStack_ad0 != &pdStack_ac0 && uStack_ad0 != (double **)0x0) {
        __ZdaPv();
      }
      goto LAB_109a5b920;
    }
  }
  puVar24 = (undefined4 *)0x40;
  func_0x000107c2ae8c();
  *puVar24 = 1;
  uStack_cb0 = puVar24 + 1;
  uStack_ca8 = 0x3a;
  *(undefined8 *)(puVar24 + 3) = 0x6e6163206e6f6974;
  *(undefined8 *)(puVar24 + 1) = 0x636e756620656854;
  *(undefined1 *)((long)puVar24 + 0x3e) = 0;
  *(undefined8 *)(puVar24 + 7) = 0x7265646e75206576;
  *(undefined8 *)(puVar24 + 5) = 0x6c6f7320746f6e20;
  *(undefined8 *)(puVar24 + 0xb) = 0x656e696c2064656e;
  *(undefined8 *)(puVar24 + 9) = 0x696d72657465642d;
  *(undefined8 *)((long)puVar24 + 0x36) = 0x736d657473797320;
  *(undefined8 *)((long)puVar24 + 0x2e) = 0x7261656e696c2064;
  FUN_109ac3188(0xfffffffb,&uStack_cb0,&UNK_10f596fa4,&UNK_10f596e57,0x4ba);
LAB_109a5c038:
                    /* WARNING: Does not return */
  pcVar20 = (code *)SoftwareBreakpoint(1,0x109a5c03c);
  (*pcVar20)();
}



/* Entry: 109a5a63c; end: 109a5c227;  */

undefined8 FUN_109a5a63c(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  int *piVar1;
  float *pfVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  double **ppdVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  int iVar19;
  long *plVar20;
  double **ppdVar21;
  code *pcVar22;
  int iVar23;
  double **ppdVar24;
  undefined4 *puVar25;
  ulong *puVar26;
  undefined8 *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  undefined8 uVar34;
  ulong uVar35;
  uint *puVar36;
  ulong uVar37;
  ulong uVar38;
  double *pdVar39;
  long lVar40;
  float fVar41;
  double dVar42;
  float fVar43;
  float fVar44;
  double dVar45;
  float fVar46;
  double dVar47;
  float fVar48;
  float fVar49;
  double dVar50;
  float fVar51;
  float fVar52;
  double dVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  float fVar65;
  double dVar66;
  float fVar67;
  double dVar68;
  float fVar69;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  long lStack_7a0;
  undefined8 *puStack_798;
  undefined8 *puStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined4 auStack_778 [2];
  uint *puStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  long lStack_728;
  undefined8 *puStack_720;
  long *plStack_718;
  long lStack_710;
  long lStack_708;
  undefined4 auStack_700 [2];
  undefined8 *puStack_6f8;
  undefined8 uStack_6f0;
  undefined4 auStack_6e8 [2];
  uint *puStack_6e0;
  undefined8 uStack_6d8;
  uint uStack_6d0;
  int iStack_6cc;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  long lStack_698;
  undefined8 *puStack_690;
  long *plStack_688;
  long lStack_680;
  long lStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  ulong uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long lStack_638;
  undefined8 *puStack_630;
  long *plStack_628;
  long alStack_620 [2];
  undefined8 uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  uint uStack_5b0;
  int iStack_5ac;
  int iStack_5a8;
  int iStack_5a4;
  double *pdStack_5a0;
  double *pdStack_598;
  double *pdStack_590;
  double *pdStack_588;
  undefined8 uStack_580;
  long lStack_578;
  int *piStack_570;
  long *plStack_568;
  long lStack_560;
  long lStack_558;
  uint uStack_550;
  int iStack_54c;
  int iStack_548;
  int iStack_544;
  double *pdStack_540;
  double *pdStack_538;
  double *pdStack_530;
  double *pdStack_528;
  undefined8 uStack_520;
  long lStack_518;
  ulong uStack_510;
  long *plStack_508;
  long lStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  double *pdStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  long *plStack_4a8;
  long lStack_4a0;
  long lStack_498;
  undefined8 uStack_490;
  double **ppdStack_488;
  double *pdStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_458;
  ulong uStack_450;
  long *plStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar26 = *(ulong **)(param_1 + 2);
    uStack_4b0 = (ulong)&uStack_4f0 | 8;
    uStack_4e8 = puVar26[1];
    uStack_4f0 = *puVar26;
    uStack_4d8 = puVar26[3];
    pdStack_4e0 = (double *)puVar26[2];
    uStack_4c8 = puVar26[5];
    uStack_4d0 = puVar26[4];
    uStack_4b8 = puVar26[7];
    uStack_4c0 = puVar26[6];
    plStack_4a8 = &lStack_4a0;
    lStack_498 = 0;
    lStack_4a0 = 0;
    if (puVar26[7] != 0) {
      piVar1 = (int *)(puVar26[7] + 0x14);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (*(int *)((long)puVar26 + 4) < 3) {
      lStack_4a0 = *(long *)puVar26[9];
      lStack_498 = ((long *)puVar26[9])[1];
    }
    else {
      uStack_4f0 = uStack_4f0 & 0xffffffff;
      func_0x000109a84868(&uStack_4f0);
    }
  }
  else {
    FUN_109a8a180(&uStack_4f0,param_1,0xffffffff);
  }
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar27 = *(undefined8 **)(param_2 + 2);
    uStack_510 = (ulong)&uStack_550 | 8;
    pdStack_538 = (double *)puVar27[3];
    pdStack_540 = (double *)puVar27[2];
    iStack_548 = (int)puVar27[1];
    iStack_544 = (int)((ulong)puVar27[1] >> 0x20);
    uStack_550 = (uint)*puVar27;
    iStack_54c = (int)((ulong)*puVar27 >> 0x20);
    pdStack_528 = (double *)puVar27[5];
    pdStack_530 = (double *)puVar27[4];
    lStack_518 = puVar27[7];
    uStack_520 = puVar27[6];
    plStack_508 = &lStack_500;
    lStack_4f8 = 0;
    lStack_500 = 0;
    if (puVar27[7] != 0) {
      piVar1 = (int *)(puVar27[7] + 0x14);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (*(int *)((long)puVar27 + 4) < 3) {
      lStack_500 = *(long *)puVar27[9];
      lStack_4f8 = ((long *)puVar27[9])[1];
    }
    else {
      iStack_54c = 0;
      func_0x000109a84868(&uStack_550);
    }
  }
  else {
    FUN_109a8a180(&uStack_550,param_2,0xffffffff);
  }
  iVar23 = iStack_544;
  uVar33 = uStack_4f0 & 0xfff;
  uVar32 = (uint)uVar33;
  if (uVar32 != (uStack_550 & 0xfff) || 1 < uVar32 - 5) {
    puVar25 = (undefined4 *)0x40;
    func_0x000107c2ae8c();
    *puVar25 = 1;
    uStack_490 = (double **)(puVar25 + 1);
    ppdStack_488 = (double **)0x3a;
    *(undefined8 *)(puVar25 + 3) = 0x79742e326372735f;
    *(undefined8 *)(puVar25 + 1) = 0x203d3d2065707974;
    *(undefined1 *)((long)puVar25 + 0x3e) = 0;
    *(undefined8 *)(puVar25 + 7) = 0x3d3d206570797428;
    *(undefined8 *)(puVar25 + 5) = 0x2026262029286570;
    *(undefined8 *)(puVar25 + 0xb) = 0x2065707974207c7c;
    *(undefined8 *)(puVar25 + 9) = 0x204632335f564320;
    *(undefined8 *)((long)puVar25 + 0x36) = 0x294634365f564320;
    *(undefined8 *)((long)puVar25 + 0x2e) = 0x3d3d206570797420;
    FUN_109ac3188(0xffffff29,&uStack_490,&UNK_10f596fa4,&UNK_10f596e57,0x421);
    goto LAB_109a5c038;
  }
  iVar10 = (int)uStack_4e8;
  iVar19 = uStack_4e8._4_4_;
  if ((param_4 < 0x14) && ((1 << (ulong)(param_4 & 0x1f) & 0x90009U) != 0)) {
    if (((param_4 >> 4 & 1) == 0) && ((int)uStack_4e8 != uStack_4e8._4_4_)) {
      puVar25 = (undefined4 *)0x5c;
      func_0x000107c2ae8c();
      *puVar25 = 1;
      uStack_490 = (double **)(puVar25 + 1);
      ppdStack_488 = (double **)0x57;
      *(undefined8 *)(puVar25 + 0xb) = 0x4b53454c4f48435f;
      *(undefined8 *)(puVar25 + 9) = 0x504d4f434544203d;
      *(undefined8 *)(puVar25 + 0xf) = 0x206c616d726f6e5f;
      *(undefined8 *)(puVar25 + 0xd) = 0x7369207c7c202959;
      *(undefined8 *)(puVar25 + 0x13) = 0x73203d3d2073776f;
      *(undefined8 *)(puVar25 + 0x11) = 0x722e637273207c7c;
      *(undefined8 *)(puVar25 + 3) = 0x4d4f434544203d21;
      *(undefined8 *)(puVar25 + 1) = 0x20646f6874656d28;
      *(undefined1 *)((long)puVar25 + 0x5b) = 0;
      *(undefined8 *)((long)puVar25 + 0x53) = 0x736c6f632e637273;
      *(undefined8 *)(puVar25 + 7) = 0x2120646f6874656d;
      *(undefined8 *)(puVar25 + 5) = 0x20262620554c5f50;
      FUN_109ac3188(0xffffff29,&uStack_490,&UNK_10f596fa4,&UNK_10f596e57,0x425);
      goto LAB_109a5c038;
    }
    if (((((0x13 < param_4) || ((1 << (ulong)(param_4 & 0x1f) & 0x90009U) == 0)) ||
         ((param_4 >> 4 & 1) != 0)) ||
        ((3 < (int)uStack_4e8 || ((int)uStack_4e8 != uStack_4e8._4_4_)))) || (iStack_544 != 1))
    goto LAB_109a5a8fc;
    FUN_109a8f64c(param_3,uStack_4e8 & 0xffffffff,1,uVar33,0xffffffff,0,0);
    if ((*param_3 & 0x1f0000) == 0x10000) {
      puVar27 = *(undefined8 **)(param_3 + 2);
      uStack_450 = (ulong)&uStack_490 | 8;
      ppdStack_488 = (double **)puVar27[1];
      uStack_490 = (double **)*puVar27;
      uStack_478 = puVar27[3];
      pdStack_480 = (double *)puVar27[2];
      uStack_468 = puVar27[5];
      uStack_470 = puVar27[4];
      lStack_458 = puVar27[7];
      uStack_460 = puVar27[6];
      plStack_448 = &lStack_440;
      lStack_438 = 0;
      lStack_440 = 0;
      if (puVar27[7] != 0) {
        piVar1 = (int *)(puVar27[7] + 0x14);
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = *piVar1 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      if (*(int *)((long)puVar27 + 4) < 3) {
        lStack_440 = *(long *)puVar27[9];
        lStack_438 = ((long *)puVar27[9])[1];
      }
      else {
        uStack_490 = (double **)((ulong)uStack_490 & 0xffffffff);
        func_0x000109a84868(&uStack_490);
      }
    }
    else {
      FUN_109a8a180(&uStack_490,param_3,0xffffffff);
    }
    if ((int)uStack_4e8 == 3) {
      pdVar39 = (double *)((long)pdStack_4e0 + lStack_4a0 * 2);
      if (uVar32 != 5) {
        pdVar3 = (double *)((long)pdStack_4e0 + lStack_4a0);
        dVar42 = pdVar39[1];
        dVar58 = pdVar39[2];
        dVar45 = pdVar3[1];
        dVar47 = pdVar3[2];
        dVar53 = *pdVar39;
        dVar50 = *pdVar3;
        dVar62 = -(dVar47 * dVar42) + dVar58 * dVar45;
        dVar57 = *pdStack_4e0;
        dVar59 = pdStack_4e0[1];
        dVar61 = pdStack_4e0[2];
        dVar60 = -(dVar45 * dVar53) + dVar42 * dVar50;
        dVar63 = -(dVar59 * (-(dVar47 * dVar53) + dVar58 * dVar50)) + dVar62 * dVar57 +
                 dVar60 * dVar61;
        if (dVar63 == 0.0) goto LAB_109a5bd9c;
        dVar63 = 1.0 / dVar63;
        dVar64 = *pdStack_540;
        dVar66 = *(double *)((long)pdStack_540 + lStack_500);
        dVar68 = *(double *)((long)pdStack_540 + lStack_500 * 2);
        *pdStack_480 = dVar63 * ((dVar58 * -dVar59 + dVar42 * dVar61) * dVar66 + dVar64 * dVar62 +
                                dVar68 * (-(dVar61 * dVar45) + dVar47 * dVar59));
        *(double *)((long)pdStack_480 + lStack_440) =
             dVar63 * ((-(dVar61 * dVar53) + dVar58 * dVar57) * dVar66 +
                       dVar64 * (-(dVar50 * dVar58) + dVar53 * dVar47) +
                      dVar68 * (-(dVar57 * dVar47) + dVar50 * dVar61));
        *(double *)((long)pdStack_480 + lStack_440 * 2) =
             dVar63 * ((-(dVar57 * dVar42) + dVar53 * dVar59) * dVar66 + dVar64 * dVar60 +
                      dVar68 * (dVar50 * -dVar59 + dVar45 * dVar57));
        goto LAB_109a5bd94;
      }
      fVar48 = *(float *)pdStack_4e0;
      fVar46 = *(float *)((long)pdStack_4e0 + 4);
      pfVar2 = (float *)((long)pdStack_4e0 + lStack_4a0);
      fVar52 = *pfVar2;
      fVar51 = pfVar2[1];
      fVar49 = *(float *)(pdVar39 + 1);
      fVar54 = pfVar2[2];
      fVar55 = *(float *)pdVar39;
      fVar44 = *(float *)((long)pdVar39 + 4);
      fVar43 = -(fVar54 * fVar44) + fVar49 * fVar51;
      fVar56 = *(float *)(pdStack_4e0 + 1);
      fVar41 = -(fVar51 * fVar55) + fVar44 * fVar52;
      fVar14 = -((-(fVar54 * fVar55) + fVar49 * fVar52) * fVar46) + fVar43 * fVar48 +
               fVar41 * fVar56;
      if (fVar14 != 0.0) {
        fVar14 = 1.0 / fVar14;
        fVar65 = *(float *)pdStack_540;
        fVar67 = *(float *)((long)pdStack_540 + lStack_500);
        fVar69 = *(float *)((long)pdStack_540 + lStack_500 * 2);
        fVar15 = -(fVar67 * fVar55) + fVar69 * fVar52;
        *(float *)pdStack_480 =
             fVar14 * (-((-fVar54 * fVar69 + fVar49 * fVar67) * fVar46) + fVar43 * fVar65 +
                      (-fVar51 * fVar69 + fVar44 * fVar67) * fVar56);
        *(float *)((long)pdStack_480 + lStack_440) =
             fVar14 * ((-(fVar52 * fVar49) - -(fVar54 * fVar55)) * fVar65 +
                       (fVar49 * fVar67 + fVar69 * -fVar54) * fVar48 + fVar15 * fVar56);
        *(float *)((long)pdStack_480 + lStack_440 * 2) =
             fVar14 * (-(fVar15 * fVar46) + (-(fVar67 * fVar44) + fVar69 * fVar51) * fVar48 +
                      fVar41 * fVar65);
        goto LAB_109a5bd94;
      }
LAB_109a5bd9c:
      uVar34 = 0;
    }
    else {
      if ((int)uStack_4e8 == 2) {
        if (uVar32 == 5) {
          fVar41 = *(float *)((long)pdStack_4e0 + 4);
          fVar48 = *(float *)((long)pdStack_4e0 + lStack_4a0);
          fVar43 = ((float *)((long)pdStack_4e0 + lStack_4a0))[1];
          fVar14 = -(fVar41 * fVar48) + fVar43 * *(float *)pdStack_4e0;
          if (fVar14 == 0.0) goto LAB_109a5bd9c;
          fVar14 = 1.0 / fVar14;
          fVar51 = *(float *)pdStack_540;
          fVar54 = *(float *)((long)pdStack_540 + lStack_500);
          *(float *)((long)pdStack_480 + lStack_440) =
               fVar14 * (-(fVar51 * fVar48) + *(float *)pdStack_4e0 * fVar54);
          *(float *)pdStack_480 = fVar14 * (-(fVar54 * fVar41) + fVar43 * fVar51);
        }
        else {
          dVar47 = pdStack_4e0[1];
          dVar42 = *(double *)((long)pdStack_4e0 + lStack_4a0);
          dVar45 = ((double *)((long)pdStack_4e0 + lStack_4a0))[1];
          dVar50 = -(dVar47 * dVar42) + dVar45 * *pdStack_4e0;
          if (dVar50 == 0.0) goto LAB_109a5bd9c;
          dVar50 = 1.0 / dVar50;
          dVar53 = *pdStack_540;
          dVar57 = *(double *)((long)pdStack_540 + lStack_500);
          *(double *)((long)pdStack_480 + lStack_440) =
               dVar50 * (-(dVar53 * dVar42) + *pdStack_4e0 * dVar57);
          *pdStack_480 = dVar50 * (-(dVar57 * dVar47) + dVar45 * dVar53);
        }
      }
      else if (uVar32 == 5) {
        if (*(float *)pdStack_4e0 == 0.0) goto LAB_109a5bd9c;
        *(float *)pdStack_480 = *(float *)pdStack_540 / *(float *)pdStack_4e0;
      }
      else {
        if (*pdStack_4e0 == 0.0) goto LAB_109a5bd9c;
        *pdStack_480 = *pdStack_540 / *pdStack_4e0;
      }
LAB_109a5bd94:
      uVar34 = 1;
    }
    if (lStack_458 != 0) {
      piVar1 = (int *)(lStack_458 + 0x14);
      do {
        iVar23 = *piVar1;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar23 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_490);
      }
    }
    lStack_458 = 0;
    uStack_478 = 0;
    pdStack_480 = (double *)0x0;
    uStack_468 = 0;
    uStack_470 = 0;
    if (0 < uStack_490._4_4_) {
      lVar30 = 0;
      do {
        *(undefined4 *)(uStack_450 + lVar30 * 4) = 0;
        lVar30 = lVar30 + 1;
      } while (lVar30 < uStack_490._4_4_);
    }
    if (plStack_448 != &lStack_440 && plStack_448 != (long *)0x0) {
      _free(plStack_448[-1]);
    }
LAB_109a5b920:
    if (lStack_518 != 0) {
      piVar1 = (int *)(lStack_518 + 0x14);
      do {
        iVar23 = *piVar1;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar23 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_550);
      }
    }
    lStack_518 = 0;
    pdStack_538 = (double *)0x0;
    pdStack_540 = (double *)0x0;
    pdStack_528 = (double *)0x0;
    pdStack_530 = (double *)0x0;
    if (0 < iStack_54c) {
      lVar30 = 0;
      do {
        *(undefined4 *)(uStack_510 + lVar30 * 4) = 0;
        lVar30 = lVar30 + 1;
      } while (lVar30 < iStack_54c);
    }
    if (plStack_508 != &lStack_500 && plStack_508 != (long *)0x0) {
      _free(plStack_508[-1]);
    }
    if (uStack_4b8 != 0) {
      piVar1 = (int *)(uStack_4b8 + 0x14);
      do {
        iVar23 = *piVar1;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar23 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_4f0);
      }
    }
    uStack_4b8 = 0;
    uStack_4d8 = 0;
    pdStack_4e0 = (double *)0x0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    if (0 < uStack_4f0._4_4_) {
      lVar30 = 0;
      do {
        *(undefined4 *)(uStack_4b0 + lVar30 * 4) = 0;
        lVar30 = lVar30 + 1;
      } while (lVar30 < uStack_4f0._4_4_);
    }
    if (plStack_4a8 != &lStack_4a0 && plStack_4a8 != (long *)0x0) {
      _free(plStack_4a8[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return uVar34;
    }
    ___stack_chk_fail();
  }
  else {
LAB_109a5a8fc:
    uVar4 = param_4 & 0xffffffef;
    if (uVar4 == 4) {
      uVar4 = 1;
    }
    ppdStack_488 = (double **)0x408;
    lVar30 = (long)uStack_4e8._4_4_;
    uVar35 = 0xfa50UL >> ((uStack_4f0 & 0x1f) << 1) & 3;
    iStack_5ac = iStack_54c;
    iStack_5a8 = iStack_548;
    uVar31 = (lVar30 << uVar35) + 0xfU & 0xfffffffffffffff0;
    uStack_5b0 = uStack_550;
    iStack_5a4 = iStack_544;
    uVar38 = ((long)(int)uStack_4e8 << uVar35) + 0xfU & 0xfffffffffffffff0;
    if (uVar4 != 1 || (param_4 & 0x10) != 0) {
      uVar38 = uVar31;
    }
    piStack_570 = &iStack_5a8;
    pdStack_598 = pdStack_538;
    pdStack_5a0 = pdStack_540;
    pdStack_588 = pdStack_528;
    pdStack_590 = pdStack_530;
    lStack_578 = lStack_518;
    uStack_580 = uStack_520;
    lStack_558 = 0;
    lStack_560 = 0;
    if (lStack_518 != 0) {
      piVar1 = (int *)(lStack_518 + 0x14);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    plStack_568 = &lStack_560;
    uStack_490 = &pdStack_480;
    if (iStack_54c < 3) {
      lStack_560 = *plStack_508;
      lStack_558 = plStack_508[1];
    }
    else {
      iStack_5ac = 0;
      func_0x000109a84868(&uStack_5b0,&uStack_550);
    }
    FUN_109a8f64c(param_3,uStack_4e8._4_4_,iStack_5a4,(uint)uStack_4f0 & 0xfff,0xffffffff,0,0);
    if ((*param_3 & 0x1f0000) == 0x10000) {
      puVar26 = *(ulong **)(param_3 + 2);
      uStack_5d0 = (ulong)&uStack_610 | 8;
      uStack_608 = puVar26[1];
      uStack_610 = *puVar26;
      uStack_5f8 = puVar26[3];
      uStack_600 = puVar26[2];
      uStack_5e8 = puVar26[5];
      uStack_5f0 = puVar26[4];
      uStack_5d8 = puVar26[7];
      uStack_5e0 = puVar26[6];
      puStack_5c8 = &uStack_5c0;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      if (puVar26[7] != 0) {
        piVar1 = (int *)(puVar26[7] + 0x14);
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = *piVar1 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      if (*(int *)((long)puVar26 + 4) < 3) {
        uStack_5c0 = *(undefined8 *)puVar26[9];
        uStack_5b8 = ((undefined8 *)puVar26[9])[1];
      }
      else {
        uStack_610 = uStack_610 & 0xffffffff;
        func_0x000109a84868(&uStack_610);
      }
    }
    else {
      FUN_109a8a180(&uStack_610,param_3,0xffffffff);
    }
    if (iVar19 <= iVar10) {
      uVar13 = param_4 >> 4 & 1;
      uVar5 = 2;
      if (uVar4 != 1) {
        uVar5 = uVar4;
      }
      uVar6 = uVar4;
      iVar8 = iVar10;
      if ((param_4 & 0x10) != 0) {
        uVar13 = 1;
        uVar6 = uVar5;
        iVar8 = iVar19;
      }
      iVar7 = iVar10;
      if (iVar10 != iVar19) {
        iVar7 = iVar8;
      }
      uVar5 = 0;
      if (iVar10 != iVar19) {
        uVar4 = uVar6;
        uVar5 = uVar13;
      }
      uVar13 = uVar5;
      if (uVar4 == 1) {
        uVar13 = 1;
      }
      iVar8 = iVar19;
      if (uVar13 == 0) {
        iVar8 = iVar10;
      }
      lVar40 = uVar38 * (long)iVar8;
      lVar29 = (long)(iVar23 * iVar19) << uVar35;
      lVar28 = lVar29 + 0x20;
      if (uVar5 == 0) {
        lVar28 = 0x20;
      }
      ppdVar9 = (double **)(lVar40 + lVar28);
      if (uVar4 - 1 < 2) {
        ppdVar9 = (double **)
                  (lVar40 + lVar28 +
                  (lVar30 * 5 << uVar35) + (long)iVar23 * 8 + uVar31 * lVar30 + 0x20);
      }
      ppdVar24 = uStack_490;
      ppdVar21 = ppdVar9;
      if (ppdStack_488 < ppdVar9) {
        if (uStack_490 != &pdStack_480) {
          if (uStack_490 != (double **)0x0) {
            __ZdaPv();
          }
          ppdStack_488 = (double **)0x408;
          uStack_490 = &pdStack_480;
        }
        ppdVar24 = &pdStack_480;
        ppdVar21 = ppdStack_488;
        if ((double **)0x408 < ppdVar9) {
          ppdVar24 = ppdVar9;
          __Znam();
          uStack_490 = ppdVar24;
          ppdVar21 = ppdVar9;
        }
      }
      ppdStack_488 = ppdVar21;
      uVar37 = (long)ppdVar24 + 0xfU & 0xfffffffffffffff0;
      puVar27 = &uStack_670;
      FUN_10936ff7c(puVar27,iVar7,iVar19,uVar33,uVar37,uVar38);
      lVar28 = 1L << uVar35;
      if (uVar5 == 0) {
        if (uVar4 != 1) {
          uStack_6d0 = 0x2010000;
          uStack_6c8 = &uStack_670;
          uStack_6c0._0_4_ = 0;
          uStack_6c0._4_4_ = 0;
          FUN_109a479a0(&uStack_4f0,&uStack_6d0);
          pdVar39 = (double *)(uVar37 + lVar40);
          if ((uVar4 == 3) || (puVar27 = uStack_6c8, uVar4 == 0)) {
            uStack_6d0 = 0x2010000;
            uStack_6c8 = &uStack_610;
            uStack_6c0._0_4_ = 0;
            uStack_6c0._4_4_ = 0;
            FUN_109a479a0(&uStack_5b0,&uStack_6d0);
            puVar27 = uStack_6c8;
          }
          goto LAB_109a5b218;
        }
        FUN_10936ff7c(&uStack_6d0,iVar19,iVar7,uVar33,uVar37,uVar38);
        if (lStack_638 != 0) {
          piVar1 = (int *)(lStack_638 + 0x14);
          do {
            iVar10 = *piVar1;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar10 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar10 + -1 == 0) {
            func_0x000109a848d4(&uStack_670);
          }
        }
        if (0 < uStack_670._4_4_) {
          lVar29 = 0;
          do {
            *(undefined4 *)((long)puStack_630 + lVar29 * 4) = 0;
            lVar29 = lVar29 + 1;
          } while (lVar29 < uStack_670._4_4_);
        }
        uStack_668 = CONCAT44(uStack_6c8._4_4_,(int)uStack_6c8);
        uStack_670 = (undefined4 *)CONCAT44(iStack_6cc,uStack_6d0);
        uStack_658 = CONCAT44(uStack_6b8._4_4_,(undefined4)uStack_6b8);
        uStack_660 = CONCAT44(uStack_6c0._4_4_,(undefined4)uStack_6c0);
        uStack_648 = CONCAT44(uStack_6a8._4_4_,(undefined4)uStack_6a8);
        uStack_650 = CONCAT44(uStack_6b0._4_4_,(undefined4)uStack_6b0);
        lStack_638 = lStack_698;
        plVar20 = plStack_628;
        if ((plStack_628 != alStack_620) &&
           (puStack_630 = (undefined8 *)((ulong)&uStack_670 | 8), plVar20 = alStack_620,
           plStack_628 != (long *)0x0)) {
          _free(plStack_628[-1]);
        }
        plStack_628 = plVar20;
        if (iStack_6cc < 3) {
          puVar27 = (undefined8 *)((ulong)&uStack_6d0 | 4);
          *plStack_628 = *plStack_688;
          plStack_628[1] = plStack_688[1];
          uStack_6d0 = 0x42ff0000;
          puVar27[1] = 0;
          *puVar27 = 0;
          puVar27[3] = 0;
          puVar27[2] = 0;
          puVar27[5] = 0;
          puVar27[4] = 0;
          *(undefined8 *)((long)puVar27 + 0x34) = 0;
          *(undefined8 *)((long)puVar27 + 0x2c) = 0;
          if (plStack_688 != &lStack_680) {
            _free(plStack_688[-1]);
          }
        }
        else {
          plStack_628 = plStack_688;
          puStack_630 = puStack_690;
        }
        uStack_6d0 = 0x1010000;
        uStack_6c8 = &uStack_4f0;
        uStack_6c0._0_4_ = 0;
        uStack_6c0._4_4_ = 0;
        uStack_760._0_4_ = 0x2010000;
        uStack_758 = &uStack_670;
        uStack_750._0_4_ = 0;
        uStack_750._4_4_ = 0;
        FUN_109a895d0(&uStack_6d0,&uStack_760);
        pdVar39 = (double *)(uVar37 + lVar40);
LAB_109a5b250:
        uVar38 = (long)pdVar39 + 0xfU & 0xfffffffffffffff0;
        FUN_10936ff7c(&uStack_6d0,iVar19,iVar19,uVar33,uVar38,uVar31);
        uStack_760._0_4_ = uVar32 | 0x42ff0000;
        uStack_760._4_4_ = 2;
        uStack_750 = uVar38 + uVar31 * lVar30;
        puStack_720 = &uStack_758;
        uStack_758._0_4_ = iVar19;
        uStack_758._4_4_ = 1;
        uStack_738._0_4_ = 0;
        uStack_738._4_4_ = 0;
        uStack_740._0_4_ = 0;
        uStack_740._4_4_ = 0;
        lStack_728 = 0;
        uStack_730 = 0;
        uStack_72c = 0;
        lStack_710 = 0;
        lStack_708 = 0;
        plStack_718 = &lStack_710;
        uStack_748 = uStack_750;
        if ((iVar19 != 0) && (uVar38 == 0)) {
          puVar25 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar25 = 1;
          uStack_7d8 = puVar25 + 1;
          uStack_7d0._0_4_ = 0x1c;
          uStack_7d0._4_4_ = 0;
          *(undefined1 *)(puVar25 + 8) = 0;
          *(undefined8 *)(puVar25 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar25 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar25 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar25 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&uStack_7d8,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
          goto LAB_109a5c038;
        }
        uStack_760._0_4_ = uVar32 | 0x42ff4000;
        uStack_740 = uStack_750 + (lVar30 << uVar35);
        uStack_7d8._0_4_ = 0x42ff0000;
        puStack_798 = &uStack_7d0;
        uStack_7d0._4_4_ = 0;
        uStack_7c8 = 0;
        uStack_7d8._4_4_ = 0;
        uStack_7d0._0_4_ = 0;
        uStack_7bc = 0;
        uStack_7b8 = 0;
        uStack_7c4 = 0;
        uStack_7c0 = 0;
        uStack_7ac = 0;
        uStack_7b4 = 0;
        uStack_7b0 = 0;
        lStack_7a0 = 0;
        uStack_7a8 = 0;
        uStack_7a4 = 0;
        uStack_788 = 0;
        uStack_780 = 0;
        puStack_790 = &uStack_788;
        lStack_710 = lVar28;
        lStack_708 = lVar28;
        uStack_738 = uStack_740;
        if (uVar4 == 2) {
          if (uVar32 == 5) {
            FUN_109a5ed38();
          }
          else {
            func_0x000109a5f33c();
          }
          if (lStack_698 != 0) {
            piVar1 = (int *)(lStack_698 + 0x14);
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar12) {
                *piVar1 = *piVar1 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          if (lStack_7a0 != 0) {
            piVar1 = (int *)(lStack_7a0 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar12) {
                *piVar1 = iVar10 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_7d8);
            }
          }
          lStack_7a0 = 0;
          uStack_7c0 = 0;
          uStack_7bc = 0;
          uStack_7c8 = 0;
          uStack_7c4 = 0;
          uStack_7b0 = 0;
          uStack_7ac = 0;
          uStack_7b8 = 0;
          uStack_7b4 = 0;
          if (uStack_7d8._4_4_ < 1) {
            if (iStack_6cc < 3) goto LAB_109a5b540;
          }
          else {
            lVar30 = 0;
            do {
              *(undefined4 *)((long)puStack_798 + lVar30 * 4) = 0;
              lVar30 = lVar30 + 1;
            } while (lVar30 < uStack_7d8._4_4_);
            if (uStack_7d8._4_4_ < 3 && iStack_6cc < 3) {
LAB_109a5b540:
              uStack_7d8._0_4_ = uStack_6d0;
              puVar36 = &uStack_6d0;
              uStack_7d8._4_4_ = iStack_6cc;
LAB_109a5b560:
              uStack_7d0._0_4_ = puVar36[2];
              uStack_7d0._4_4_ = puVar36[3];
              puVar27 = *(undefined8 **)(puVar36 + 0x12);
              *puStack_790 = *puVar27;
              puStack_790[1] = puVar27[1];
              goto LAB_109a5b584;
            }
          }
          uStack_7d8._0_4_ = uStack_6d0;
          puVar36 = &uStack_6d0;
          func_0x000109a84868(&uStack_7d8,&uStack_6d0);
        }
        else {
          iVar10 = 0;
          if (CONCAT44(uStack_6c0._4_4_,(undefined4)uStack_6c0) != 0) {
            iVar10 = iVar19;
          }
          if (uVar32 == 5) {
            func_0x000109a5f944();
          }
          else {
            func_0x000109a6002c(uStack_660,alStack_620[0],uStack_750,
                                CONCAT44(uStack_6c0._4_4_,(undefined4)uStack_6c0),lStack_680,iVar7,
                                iVar19,iVar10);
          }
          if (lStack_638 != 0) {
            piVar1 = (int *)(lStack_638 + 0x14);
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar12) {
                *piVar1 = *piVar1 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          if (lStack_7a0 != 0) {
            piVar1 = (int *)(lStack_7a0 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar12) {
                *piVar1 = iVar10 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_7d8);
            }
          }
          lStack_7a0 = 0;
          uStack_7c0 = 0;
          uStack_7bc = 0;
          uStack_7c8 = 0;
          uStack_7c4 = 0;
          uStack_7b0 = 0;
          uStack_7ac = 0;
          uStack_7b8 = 0;
          uStack_7b4 = 0;
          if (uStack_7d8._4_4_ < 1) {
            if (uStack_670._4_4_ < 3) goto LAB_109a5b55c;
          }
          else {
            lVar30 = 0;
            do {
              *(undefined4 *)((long)puStack_798 + lVar30 * 4) = 0;
              lVar30 = lVar30 + 1;
            } while (lVar30 < uStack_7d8._4_4_);
            if (uStack_7d8._4_4_ < 3 && uStack_670._4_4_ < 3) {
LAB_109a5b55c:
              uStack_7d8._0_4_ = (uint)uStack_670;
              puVar36 = (uint *)&uStack_670;
              uStack_7d8._4_4_ = uStack_670._4_4_;
              goto LAB_109a5b560;
            }
          }
          uStack_7d8._0_4_ = (uint)uStack_670;
          puVar36 = (uint *)&uStack_670;
          func_0x000109a84868(&uStack_7d8,&uStack_670);
        }
LAB_109a5b584:
        uVar34 = *(undefined8 *)(puVar36 + 4);
        uStack_7c8 = (undefined4)uVar34;
        uStack_7c4 = (undefined4)((ulong)uVar34 >> 0x20);
        uStack_7b8 = (undefined4)*(undefined8 *)(puVar36 + 8);
        uStack_7b4 = (undefined4)((ulong)*(undefined8 *)(puVar36 + 8) >> 0x20);
        uStack_7c0 = (undefined4)*(undefined8 *)(puVar36 + 6);
        uStack_7bc = (undefined4)((ulong)*(undefined8 *)(puVar36 + 6) >> 0x20);
        uStack_7a8 = (undefined4)*(undefined8 *)(puVar36 + 0xc);
        uStack_7a4 = (undefined4)((ulong)*(undefined8 *)(puVar36 + 0xc) >> 0x20);
        uStack_7b0 = (undefined4)*(undefined8 *)(puVar36 + 10);
        uStack_7ac = (undefined4)((ulong)*(undefined8 *)(puVar36 + 10) >> 0x20);
        lStack_7a0 = *(long *)(puVar36 + 0xe);
        if (uVar32 == 5) {
          FUN_109a5c228(iVar7,iVar19,uStack_750,0,uVar34,uStack_788,1,
                        CONCAT44(uStack_6c0._4_4_,(undefined4)uStack_6c0),lStack_680,pdStack_5a0,
                        lStack_560,iVar23);
        }
        else {
          func_0x000109a5c67c(iVar7,iVar19,uStack_750,0,uVar34,uStack_788,1,
                              CONCAT44(uStack_6c0._4_4_,(undefined4)uStack_6c0),lStack_680,
                              pdStack_5a0,lStack_560,iVar23);
        }
        if (lStack_7a0 != 0) {
          piVar1 = (int *)(lStack_7a0 + 0x14);
          do {
            iVar23 = *piVar1;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar23 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar23 + -1 == 0) {
            func_0x000109a848d4(&uStack_7d8);
          }
        }
        lStack_7a0 = 0;
        uStack_7c0 = 0;
        uStack_7bc = 0;
        uStack_7c8 = 0;
        uStack_7c4 = 0;
        uStack_7b0 = 0;
        uStack_7ac = 0;
        uStack_7b8 = 0;
        uStack_7b4 = 0;
        if (0 < uStack_7d8._4_4_) {
          lVar30 = 0;
          do {
            *(undefined4 *)((long)puStack_798 + lVar30 * 4) = 0;
            lVar30 = lVar30 + 1;
          } while (lVar30 < uStack_7d8._4_4_);
        }
        if (puStack_790 != &uStack_788 && puStack_790 != (undefined8 *)0x0) {
          _free(puStack_790[-1]);
        }
        if (lStack_728 != 0) {
          piVar1 = (int *)(lStack_728 + 0x14);
          do {
            iVar23 = *piVar1;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar23 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar23 + -1 == 0) {
            func_0x000109a848d4(&uStack_760);
          }
        }
        lStack_728 = 0;
        uStack_748._0_4_ = 0;
        uStack_748._4_4_ = 0;
        uStack_750._0_4_ = 0;
        uStack_750._4_4_ = 0;
        uStack_738._0_4_ = 0;
        uStack_738._4_4_ = 0;
        uStack_740._0_4_ = 0;
        uStack_740._4_4_ = 0;
        if (0 < uStack_760._4_4_) {
          lVar30 = 0;
          do {
            *(undefined4 *)((long)puStack_720 + lVar30 * 4) = 0;
            lVar30 = lVar30 + 1;
          } while (lVar30 < uStack_760._4_4_);
        }
        if (plStack_718 != &lStack_710 && plStack_718 != (long *)0x0) {
          _free(plStack_718[-1]);
        }
        if (lStack_698 != 0) {
          piVar1 = (int *)(lStack_698 + 0x14);
          do {
            iVar23 = *piVar1;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar23 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar23 + -1 == 0) {
            func_0x000109a848d4(&uStack_6d0);
          }
        }
        lStack_698 = 0;
        uStack_6b8._0_4_ = 0;
        uStack_6b8._4_4_ = 0;
        uStack_6c0._0_4_ = 0;
        uStack_6c0._4_4_ = 0;
        uStack_6a8._0_4_ = 0;
        uStack_6a8._4_4_ = 0;
        uStack_6b0._0_4_ = 0;
        uStack_6b0._4_4_ = 0;
        if (0 < iStack_6cc) {
          lVar30 = 0;
          do {
            *(undefined4 *)((long)puStack_690 + lVar30 * 4) = 0;
            lVar30 = lVar30 + 1;
          } while (lVar30 < iStack_6cc);
        }
        if (plStack_688 != &lStack_680 && plStack_688 != (long *)0x0) {
          _free(plStack_688[-1]);
        }
LAB_109a5b790:
        uVar34 = 1;
      }
      else {
        uStack_6d0 = 0x1010000;
        uStack_6c8 = &uStack_4f0;
        uStack_6c0._0_4_ = 0;
        uStack_6c0._4_4_ = 0;
        uStack_760._0_4_ = 0x2010000;
        uStack_758 = &uStack_670;
        uStack_750._0_4_ = 0;
        uStack_750._4_4_ = 0;
        FUN_109a91d90();
        FUN_109a6dab4(0x3ff0000000000000,&uStack_6d0,&uStack_760,1,puVar27,0xffffffff);
        pdVar39 = (double *)(uVar37 + lVar40);
        if ((uVar4 == 3) || (uVar4 == 0)) {
          uStack_750._0_4_ = 0;
          uStack_750._4_4_ = 0;
          uStack_760._0_4_ = 0x1010000;
          uStack_758 = &uStack_4f0;
          uStack_7c8 = 0;
          uStack_7c4 = 0;
          uStack_7d8._0_4_ = 0x1010000;
          uStack_7d0 = &uStack_5b0;
          uStack_6d0 = 0x42ff0000;
          puStack_6e0 = &uStack_6d0;
          puStack_690 = &uStack_6c8;
          uStack_6c8._4_4_ = 0;
          uStack_6c0._0_4_ = 0;
          iStack_6cc = 0;
          uStack_6c8._0_4_ = 0;
          uStack_6b8._4_4_ = 0;
          uStack_6b0._0_4_ = 0;
          uStack_6c0._4_4_ = 0;
          uStack_6b8._0_4_ = 0;
          uStack_6a8._4_4_ = 0;
          uStack_6b0._4_4_ = 0;
          uStack_6a8._0_4_ = 0;
          lStack_698 = 0;
          uStack_6a0 = 0;
          uStack_69c = 0;
          lStack_680 = 0;
          lStack_678 = 0;
          uStack_6d8 = 0;
          auStack_6e8[0] = 0x1010000;
          auStack_700[0] = 0x2010000;
          puStack_6f8 = &uStack_610;
          uStack_6f0 = 0;
          plStack_688 = &lStack_680;
          FUN_109a64f8c(0x3ff0000000000000,0,&uStack_760,&uStack_7d8,auStack_6e8,auStack_700,1);
          if (lStack_698 != 0) {
            piVar1 = (int *)(lStack_698 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar12) {
                *piVar1 = iVar10 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_6d0);
            }
          }
          puVar27 = (undefined8 *)CONCAT44(uStack_6c8._4_4_,(int)uStack_6c8);
          lStack_698 = 0;
          uStack_6b8._0_4_ = 0;
          uStack_6b8._4_4_ = 0;
          uStack_6c0._0_4_ = 0;
          uStack_6c0._4_4_ = 0;
          uStack_6a8._0_4_ = 0;
          uStack_6a8._4_4_ = 0;
          uStack_6b0._0_4_ = 0;
          uStack_6b0._4_4_ = 0;
          if (0 < iStack_6cc) {
            lVar29 = 0;
            do {
              *(undefined4 *)((long)puStack_690 + lVar29 * 4) = 0;
              lVar29 = lVar29 + 1;
            } while (lVar29 < iStack_6cc);
          }
          if (plStack_688 == &lStack_680 || plStack_688 == (long *)0x0) goto LAB_109a5b218;
        }
        else {
          uStack_6d0 = uVar32 | 0x42ff0000;
          iStack_6cc = 2;
          puStack_690 = &uStack_6c8;
          uStack_6c8._0_4_ = iVar19;
          uStack_6c8._4_4_ = iVar23;
          uStack_6a8._0_4_ = 0;
          uStack_6a8._4_4_ = 0;
          uStack_6b0._0_4_ = 0;
          uStack_6b0._4_4_ = 0;
          lStack_698 = 0;
          uStack_6a0 = 0;
          uStack_69c = 0;
          lStack_680 = 0;
          lStack_678 = 0;
          plStack_688 = &lStack_680;
          uStack_6c0 = pdVar39;
          uStack_6b8 = pdVar39;
          if (((long)iVar23 * (long)iVar19 != 0) && (uVar37 == 0)) {
            puVar25 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar25 = 1;
            uStack_760 = puVar25 + 1;
            uStack_758._0_4_ = 0x1c;
            uStack_758._4_4_ = 0;
            *(undefined1 *)(puVar25 + 8) = 0;
            *(undefined8 *)(puVar25 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar25 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar25 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar25 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&uStack_760,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
            goto LAB_109a5c038;
          }
          uStack_6d0 = uVar32 | 0x42ff4000;
          lStack_680 = (long)iVar23 << uVar35;
          uStack_6b0 = (double *)((long)pdVar39 + lStack_680 * lVar30);
          uStack_7c8 = 0;
          uStack_7c4 = 0;
          uStack_7d8._0_4_ = 0x1010000;
          uStack_7d0 = (uint *)&uStack_4f0;
          uStack_6d8 = 0;
          auStack_6e8[0] = 0x1010000;
          puStack_6e0 = &uStack_5b0;
          uStack_760._0_4_ = 0x42ff0000;
          puStack_6f8 = &uStack_760;
          puStack_720 = &uStack_758;
          uStack_758._4_4_ = 0;
          uStack_750._0_4_ = 0;
          uStack_760._4_4_ = 0;
          uStack_758._0_4_ = 0;
          uStack_748._4_4_ = 0;
          uStack_740._0_4_ = 0;
          uStack_750._4_4_ = 0;
          uStack_748._0_4_ = 0;
          uStack_738._4_4_ = 0;
          uStack_740._4_4_ = 0;
          uStack_738._0_4_ = 0;
          lStack_728 = 0;
          uStack_730 = 0;
          uStack_72c = 0;
          lStack_710 = 0;
          lStack_708 = 0;
          uStack_6f0 = 0;
          auStack_700[0] = 0x1010000;
          auStack_778[0] = 0x2010000;
          uStack_768 = 0;
          puStack_770 = &uStack_6d0;
          plStack_718 = &lStack_710;
          lStack_678 = lVar28;
          uStack_6a8 = uStack_6b0;
          FUN_109a64f8c(0x3ff0000000000000,0,&uStack_7d8,auStack_6e8,auStack_700,auStack_778,1);
          pdVar3 = uStack_6b0;
          pdVar16 = uStack_6c0;
          pdVar17 = uStack_6a8;
          pdVar18 = uStack_6b8;
          if (lStack_728 != 0) {
            piVar1 = (int *)(lStack_728 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar12) {
                *piVar1 = iVar10 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_760);
              pdVar3 = uStack_6b0;
              pdVar16 = uStack_6c0;
              pdVar17 = uStack_6a8;
              pdVar18 = uStack_6b8;
            }
          }
          lStack_728 = 0;
          uStack_748._0_4_ = 0;
          uStack_748._4_4_ = 0;
          uStack_750._0_4_ = 0;
          uStack_750._4_4_ = 0;
          uStack_738._0_4_ = 0;
          uStack_738._4_4_ = 0;
          uStack_740._0_4_ = 0;
          uStack_740._4_4_ = 0;
          if (0 < uStack_760._4_4_) {
            lVar40 = 0;
            do {
              *(undefined4 *)((long)puStack_720 + lVar40 * 4) = 0;
              lVar40 = lVar40 + 1;
            } while (lVar40 < uStack_760._4_4_);
          }
          uStack_6b0 = pdVar3;
          uStack_6c0 = pdVar16;
          uStack_6a8 = pdVar17;
          uStack_6b8 = pdVar18;
          if (plStack_718 != &lStack_710 && plStack_718 != (long *)0x0) {
            _free(plStack_718[-1]);
          }
          if (lStack_698 != 0) {
            piVar1 = (int *)(lStack_698 + 0x14);
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar12) {
                *piVar1 = *piVar1 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          if (lStack_578 != 0) {
            piVar1 = (int *)(lStack_578 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar12) {
                *piVar1 = iVar10 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_5b0);
            }
          }
          lStack_578 = 0;
          pdStack_598 = (double *)0x0;
          pdStack_5a0 = (double *)0x0;
          pdStack_588 = (double *)0x0;
          pdStack_590 = (double *)0x0;
          if (iStack_5ac < 1) {
LAB_109a5b148:
            uStack_5b0 = uStack_6d0;
            if (2 < iStack_6cc) goto LAB_109a5b17c;
            iStack_5ac = iStack_6cc;
            iStack_5a8 = (int)uStack_6c8;
            iStack_5a4 = uStack_6c8._4_4_;
            *plStack_568 = *plStack_688;
            plStack_568[1] = plStack_688[1];
            pdStack_590 = uStack_6b0;
            pdStack_5a0 = uStack_6c0;
            pdStack_588 = uStack_6a8;
            pdStack_598 = uStack_6b8;
          }
          else {
            lVar40 = 0;
            do {
              piStack_570[lVar40] = 0;
              lVar40 = lVar40 + 1;
            } while (lVar40 < iStack_5ac);
            if (iStack_5ac < 3) goto LAB_109a5b148;
LAB_109a5b17c:
            uStack_5b0 = uStack_6d0;
            func_0x000109a84868(&uStack_5b0,&uStack_6d0);
            pdStack_590 = uStack_6b0;
            pdStack_5a0 = uStack_6c0;
            pdStack_588 = uStack_6a8;
            pdStack_598 = uStack_6b8;
          }
          uStack_580 = CONCAT44(uStack_69c,uStack_6a0);
          lStack_578 = lStack_698;
          if (lStack_698 != 0) {
            piVar1 = (int *)(lStack_698 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar12) {
                *piVar1 = iVar10 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar10 + -1 == 0) {
              uStack_6b0 = pdStack_590;
              uStack_6c0 = pdStack_5a0;
              uStack_6a8 = pdStack_588;
              uStack_6b8 = pdStack_598;
              func_0x000109a848d4(&uStack_6d0);
            }
          }
          lStack_698 = 0;
          uStack_6b8._0_4_ = 0;
          uStack_6b8._4_4_ = 0;
          uStack_6c0._0_4_ = 0;
          uStack_6c0._4_4_ = 0;
          uStack_6a8._0_4_ = 0;
          uStack_6a8._4_4_ = 0;
          uStack_6b0._0_4_ = 0;
          uStack_6b0._4_4_ = 0;
          if (0 < iStack_6cc) {
            lVar40 = 0;
            do {
              *(undefined4 *)((long)puStack_690 + lVar40 * 4) = 0;
              lVar40 = lVar40 + 1;
            } while (lVar40 < iStack_6cc);
          }
          pdVar39 = (double *)((long)pdVar39 + lVar29);
          puVar27 = (undefined8 *)CONCAT44(uStack_6c8._4_4_,(int)uStack_6c8);
          if (plStack_688 == &lStack_680 || plStack_688 == (long *)0x0) goto LAB_109a5b218;
        }
        lStack_698 = 0;
        uStack_6a8._4_4_ = 0;
        uStack_6a8._0_4_ = 0;
        uStack_6b0._4_4_ = 0;
        uStack_6b0._0_4_ = 0;
        uStack_6b8._4_4_ = 0;
        uStack_6b8._0_4_ = 0;
        uStack_6c0._4_4_ = 0;
        uStack_6c0._0_4_ = 0;
        _free(plStack_688[-1]);
        puVar27 = (undefined8 *)CONCAT44(uStack_6c8._4_4_,(int)uStack_6c8);
LAB_109a5b218:
        uStack_6c8 = puVar27;
        if (uVar4 != 3) {
          if (uVar4 == 0) {
            if (uVar32 == 5) {
              FUN_109aa4d88();
              iVar23 = (int)uStack_660;
            }
            else {
              func_0x000109aa506c(uStack_660,alStack_620[0],iVar19,uStack_600,uStack_5c0,iVar23);
              iVar23 = (int)uStack_660;
            }
            if (iVar23 != 0) goto LAB_109a5b790;
            goto LAB_109a5b3b0;
          }
          goto LAB_109a5b250;
        }
        if (uVar32 == 5) {
          FUN_109aa5350();
          if ((uStack_660 & 1) == 0) goto LAB_109a5b3b0;
          goto LAB_109a5b790;
        }
        func_0x000109aa55c4(uStack_660,alStack_620[0],iVar19,uStack_600,uStack_5c0,iVar23);
        if ((uStack_660 & 1) != 0) goto LAB_109a5b790;
LAB_109a5b3b0:
        uStack_6c8._0_4_ = 0;
        uStack_6c8._4_4_ = 0;
        uStack_6d0 = 0;
        iStack_6cc = 0;
        uStack_6b8._0_4_ = 0;
        uStack_6b8._4_4_ = 0;
        uStack_6c0._0_4_ = 0;
        uStack_6c0._4_4_ = 0;
        FUN_109a48880(&uStack_610,&uStack_6d0);
        uVar34 = 0;
      }
      if (lStack_638 != 0) {
        piVar1 = (int *)(lStack_638 + 0x14);
        do {
          iVar23 = *piVar1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar23 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_670);
        }
      }
      lStack_638 = 0;
      uStack_658 = 0;
      uStack_660 = 0;
      uStack_648 = 0;
      uStack_650 = 0;
      if (0 < uStack_670._4_4_) {
        lVar30 = 0;
        do {
          *(undefined4 *)((long)puStack_630 + lVar30 * 4) = 0;
          lVar30 = lVar30 + 1;
        } while (lVar30 < uStack_670._4_4_);
      }
      if (plStack_628 != alStack_620 && plStack_628 != (long *)0x0) {
        _free(plStack_628[-1]);
      }
      if (uStack_5d8 != 0) {
        piVar1 = (int *)(uStack_5d8 + 0x14);
        do {
          iVar23 = *piVar1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar23 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_610);
        }
      }
      uStack_5d8 = 0;
      uStack_5f8 = 0;
      uStack_600 = 0;
      uStack_5e8 = 0;
      uStack_5f0 = 0;
      if (0 < uStack_610._4_4_) {
        lVar30 = 0;
        do {
          *(undefined4 *)(uStack_5d0 + lVar30 * 4) = 0;
          lVar30 = lVar30 + 1;
        } while (lVar30 < uStack_610._4_4_);
      }
      if (puStack_5c8 != &uStack_5c0 && puStack_5c8 != (undefined8 *)0x0) {
        _free(puStack_5c8[-1]);
      }
      if (lStack_578 != 0) {
        piVar1 = (int *)(lStack_578 + 0x14);
        do {
          iVar23 = *piVar1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar23 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_5b0);
        }
      }
      lStack_578 = 0;
      pdStack_598 = (double *)0x0;
      pdStack_5a0 = (double *)0x0;
      pdStack_588 = (double *)0x0;
      pdStack_590 = (double *)0x0;
      if (0 < iStack_5ac) {
        lVar30 = 0;
        do {
          piStack_570[lVar30] = 0;
          lVar30 = lVar30 + 1;
        } while (lVar30 < iStack_5ac);
      }
      if (plStack_568 != &lStack_560 && plStack_568 != (long *)0x0) {
        _free(plStack_568[-1]);
      }
      if (uStack_490 != &pdStack_480 && uStack_490 != (double **)0x0) {
        __ZdaPv();
      }
      goto LAB_109a5b920;
    }
  }
  puVar25 = (undefined4 *)0x40;
  func_0x000107c2ae8c();
  *puVar25 = 1;
  uStack_670 = puVar25 + 1;
  uStack_668 = 0x3a;
  *(undefined8 *)(puVar25 + 3) = 0x6e6163206e6f6974;
  *(undefined8 *)(puVar25 + 1) = 0x636e756620656854;
  *(undefined1 *)((long)puVar25 + 0x3e) = 0;
  *(undefined8 *)(puVar25 + 7) = 0x7265646e75206576;
  *(undefined8 *)(puVar25 + 5) = 0x6c6f7320746f6e20;
  *(undefined8 *)(puVar25 + 0xb) = 0x656e696c2064656e;
  *(undefined8 *)(puVar25 + 9) = 0x696d72657465642d;
  *(undefined8 *)((long)puVar25 + 0x36) = 0x736d657473797320;
  *(undefined8 *)((long)puVar25 + 0x2e) = 0x7261656e696c2064;
  FUN_109ac3188(0xfffffffb,&uStack_670,&UNK_10f596fa4,&UNK_10f596e57,0x4ba);
LAB_109a5c038:
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x109a5c03c);
  (*pcVar22)();
}



/* Entry: 109a5c228; end: 109a5c9ab;  */

void FUN_109a5c228(uint param_1,uint param_2,float *param_3,long param_4,float *param_5,long param_6
                  ,int param_7,long param_8,long param_9,float *param_10,long param_11,uint param_12
                  ,undefined4 param_13,float *param_14,ulong param_15,long param_16)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  double *pdVar8;
  long lVar9;
  float *pfVar10;
  int iVar11;
  ulong uVar12;
  float *pfVar13;
  double *pdVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  
  uVar1 = param_2;
  if ((int)param_1 <= (int)param_2) {
    uVar1 = param_1;
  }
  uVar2 = param_1;
  if (param_10 != (float *)0x0) {
    uVar2 = param_12;
  }
  uVar17 = (ulong)uVar2;
  if (0 < (int)param_2) {
    lVar15 = 0;
    uVar16 = (ulong)param_2;
    do {
      if (0 < (int)uVar2) {
        _bzero((long)param_14 + (lVar15 >> 0x1e),uVar17 << 2);
      }
      lVar15 = lVar15 + ((param_15 >> 2) << 0x20);
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  if (0 < (int)uVar1) {
    pdVar14 = (double *)(param_16 + 7U & 0xfffffffffffffff8);
    lVar15 = (param_4 << 0x1e) >> 0x20;
    lVar4 = (param_6 << 0x1e) >> 0x20;
    if (param_4 == 0) {
      lVar15 = 1;
    }
    dVar19 = 0.0;
    pfVar10 = param_3;
    uVar16 = (ulong)uVar1;
    do {
      dVar19 = dVar19 + (double)*pfVar10;
      pfVar10 = pfVar10 + lVar15;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    uVar16 = 0;
    lVar5 = (param_11 << 0x1e) >> 0x20;
    iVar11 = (int)(param_15 >> 2);
    lVar3 = lVar4;
    if (param_7 != 0) {
      lVar3 = 1;
    }
    if (param_7 == 0) {
      lVar4 = 1;
    }
    do {
      if (dVar19 * 4.440892098500626e-16 < ABS((double)param_3[uVar16 * lVar15])) {
        dVar24 = 1.0 / (double)param_3[uVar16 * lVar15];
        if (uVar2 == 1) {
          if (param_10 == (float *)0x0) {
            dVar20 = (double)*param_5;
          }
          else {
            dVar20 = 0.0;
            pfVar6 = param_5;
            pfVar10 = param_10;
            uVar7 = (ulong)param_1;
            do {
              dVar20 = dVar20 + (double)(*pfVar6 * *pfVar10);
              pfVar10 = pfVar10 + lVar5;
              pfVar6 = pfVar6 + lVar3;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          lVar9 = 0;
          pfVar10 = param_14;
          do {
            *pfVar10 = (float)((double)*pfVar10 +
                              (double)*(float *)(param_8 + lVar9) * dVar24 * dVar20);
            lVar9 = lVar9 + 4;
            pfVar10 = pfVar10 + iVar11;
          } while ((ulong)param_2 << 2 != lVar9);
        }
        else {
          if (param_10 == (float *)0x0) {
            pfVar10 = param_5;
            pdVar8 = pdVar14;
            uVar7 = uVar17;
            if (0 < (int)uVar2) {
              do {
                *pdVar8 = dVar24 * (double)*pfVar10;
                uVar7 = uVar7 - 1;
                pfVar10 = pfVar10 + lVar3;
                pdVar8 = pdVar8 + 1;
              } while (uVar7 != 0);
            }
          }
          else {
            if (0 < (int)uVar2) {
              _bzero(pdVar14,uVar17 << 3);
            }
            uVar7 = 0;
            pfVar6 = param_10;
            pfVar10 = param_10 + 2;
            do {
              fVar18 = param_5[uVar7 * lVar3];
              if ((int)uVar2 < 4) {
                uVar12 = 0;
              }
              else {
                uVar12 = 0;
                pdVar8 = pdVar14 + 2;
                pfVar13 = pfVar10;
                do {
                  uVar21 = *(undefined8 *)(pfVar13 + -2);
                  uVar22 = *(undefined8 *)pfVar13;
                  pdVar8[-1] = pdVar8[-1] + (double)((float)((ulong)uVar21 >> 0x20) * fVar18);
                  pdVar8[-2] = pdVar8[-2] + (double)((float)uVar21 * fVar18);
                  pdVar8[1] = pdVar8[1] + (double)((float)((ulong)uVar22 >> 0x20) * fVar18);
                  *pdVar8 = *pdVar8 + (double)((float)uVar22 * fVar18);
                  uVar12 = uVar12 + 4;
                  pfVar13 = pfVar13 + 4;
                  pdVar8 = pdVar8 + 4;
                } while ((long)uVar12 <= (long)(int)(uVar2 - 4));
                uVar12 = uVar12 & 0xffffffff;
              }
              if ((int)uVar12 < (int)uVar2) {
                do {
                  pdVar14[uVar12] = pdVar14[uVar12] + (double)(fVar18 * pfVar6[uVar12]);
                  uVar12 = uVar12 + 1;
                } while (uVar17 != uVar12);
              }
              uVar7 = uVar7 + 1;
              pfVar10 = pfVar10 + lVar5;
              pfVar6 = pfVar6 + lVar5;
            } while (uVar7 != param_1);
            pdVar8 = pdVar14;
            uVar7 = uVar17;
            if (0 < (int)uVar2) {
              do {
                *pdVar8 = dVar24 * *pdVar8;
                uVar7 = uVar7 - 1;
                pdVar8 = pdVar8 + 1;
              } while (uVar7 != 0);
            }
          }
          uVar7 = 0;
          pfVar10 = param_14;
          do {
            fVar18 = *(float *)(param_8 + uVar7 * 4);
            if ((int)uVar2 < 4) {
              uVar12 = 0;
            }
            else {
              uVar12 = 0;
              dVar24 = (double)fVar18;
              pfVar6 = pfVar10;
              pdVar8 = pdVar14;
              do {
                dVar23 = pdVar8[1];
                dVar20 = *pdVar8;
                *(ulong *)(pfVar6 + 2) =
                     CONCAT44((float)((double)(float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) +
                                     pdVar8[3] * dVar24),
                              (float)((double)(float)*(undefined8 *)(pfVar6 + 2) +
                                     pdVar8[2] * dVar24));
                *(ulong *)pfVar6 =
                     CONCAT44((float)((double)(float)((ulong)*(undefined8 *)pfVar6 >> 0x20) +
                                     dVar23 * dVar24),
                              (float)((double)(float)*(undefined8 *)pfVar6 + dVar20 * dVar24));
                uVar12 = uVar12 + 4;
                pfVar6 = pfVar6 + 4;
                pdVar8 = pdVar8 + 4;
              } while ((long)uVar12 <= (long)(int)(uVar2 - 4));
              uVar12 = uVar12 & 0xffffffff;
            }
            if ((int)uVar12 < (int)uVar2) {
              do {
                pfVar10[uVar12] =
                     (float)((double)pfVar10[uVar12] + pdVar14[uVar12] * (double)fVar18);
                uVar12 = uVar12 + 1;
              } while (uVar17 != uVar12);
            }
            uVar7 = uVar7 + 1;
            pfVar10 = pfVar10 + iVar11;
          } while (uVar7 != param_2);
        }
      }
      uVar16 = uVar16 + 1;
      param_5 = param_5 + lVar4;
      param_8 = param_8 + ((param_9 << 0x1e) >> 0x20) * 4;
    } while (uVar16 != uVar1);
  }
  return;
}



/* Entry: 109a5c9ac; end: 109a5d39b;  */

double FUN_109a5c9ac(uint *param_1,undefined8 param_2,uint *param_3,uint *param_4,uint param_5)

{
  int *piVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  code *pcVar14;
  bool bVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 *puVar18;
  ulong *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  double *pdVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  long lStack_790;
  long lStack_788;
  undefined1 *puStack_780;
  undefined1 auStack_778 [16];
  undefined4 auStack_768 [2];
  undefined8 *puStack_760;
  undefined8 uStack_758;
  undefined4 auStack_6e8 [2];
  undefined8 *puStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  long lStack_698;
  ulong uStack_690;
  undefined8 *puStack_688;
  undefined8 auStack_680 [2];
  undefined8 uStack_670;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  long lStack_638;
  ulong uStack_630;
  undefined8 *puStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long lStack_5d8;
  long lStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 auStack_5c0 [2];
  uint uStack_5b0;
  int iStack_5ac;
  int aiStack_5a8 [2];
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  undefined8 uStack_580;
  long lStack_578;
  int *piStack_570;
  long *plStack_568;
  long lStack_560;
  long lStack_558;
  undefined8 uStack_550;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_518;
  long lStack_510;
  undefined1 *puStack_508;
  undefined1 auStack_500 [16];
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  uint *puStack_490;
  uint *puStack_488;
  uint auStack_480 [258];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar19 = *(ulong **)(param_1 + 2);
    uStack_4b0 = (ulong)&uStack_4f0 | 8;
    uStack_4e8 = puVar19[1];
    uStack_4f0 = *puVar19;
    uStack_4d8 = puVar19[3];
    uStack_4e0 = puVar19[2];
    uStack_4c8 = puVar19[5];
    uStack_4d0 = puVar19[4];
    uStack_4b8 = puVar19[7];
    uStack_4c0 = puVar19[6];
    puStack_4a8 = &uStack_4a0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    if (puVar19[7] != 0) {
      piVar1 = (int *)(puVar19[7] + 0x14);
      do {
        cVar11 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = *piVar1 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (*(int *)((long)puVar19 + 4) < 3) {
      uStack_4a0 = *(undefined8 *)puVar19[9];
      uStack_498 = ((undefined8 *)puVar19[9])[1];
    }
    else {
      uStack_4f0 = uStack_4f0 & 0xffffffff;
      func_0x000109a84868(&uStack_4f0);
    }
  }
  else {
    FUN_109a8a180(&uStack_4f0,param_1,0xffffffff);
  }
  uVar21 = uStack_4f0;
  uVar26 = uStack_4f0 & 0xfff;
  bVar15 = ((*param_3 | *param_4) & 0x1f0000) != 0;
  uVar25 = (uint)uVar26;
  if (1 < uVar25 - 5) {
    puVar18 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar18 = 1;
    puStack_490 = puVar18 + 1;
    puStack_488 = (uint *)0x20;
    *(undefined1 *)(puVar18 + 9) = 0;
    *(undefined8 *)(puVar18 + 3) = 0x7c204632335f5643;
    *(undefined8 *)(puVar18 + 1) = 0x203d3d2065707974;
    *(undefined8 *)(puVar18 + 7) = 0x4634365f5643203d;
    *(undefined8 *)(puVar18 + 5) = 0x3d2065707974207c;
    FUN_109ac3188(0xffffff29,&puStack_490,&UNK_10f5972be,&UNK_10f596e57,0x558);
LAB_109a5d27c:
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x109a5d280);
    (*pcVar14)();
  }
  iVar9 = (int)uStack_4e8;
  iVar13 = uStack_4e8._4_4_;
  if ((param_5 >> 1 & 1) == 0) {
    iVar7 = (int)uStack_4e8;
    if ((int)uStack_4e8 <= uStack_4e8._4_4_) {
      iVar7 = uStack_4e8._4_4_;
    }
    iVar27 = (int)uStack_4e8;
    if (uStack_4e8._4_4_ <= (int)uStack_4e8) {
      iVar27 = uStack_4e8._4_4_;
    }
    iVar28 = iVar27;
    if ((param_5 & 4) != 0) {
      iVar28 = iVar7;
    }
  }
  else {
    FUN_109a8e944(param_3);
    FUN_109a8e944(param_4);
    bVar15 = false;
    iVar7 = iVar9;
    if (iVar9 <= iVar13) {
      iVar7 = iVar13;
    }
    iVar27 = iVar9;
    iVar28 = iVar9;
    if (iVar13 <= iVar9) {
      iVar27 = iVar13;
      iVar28 = iVar13;
    }
  }
  if ((int)uStack_4f0._4_4_ < 1) {
    lVar20 = 0;
  }
  else {
    lVar20 = puStack_4a8[(ulong)uStack_4f0._4_4_ - 1];
  }
  uVar30 = lVar20 * iVar7 + 0xfU & 0xfffffffffffffff0;
  lVar24 = (long)iVar27;
  lVar20 = lVar20 * lVar24;
  uVar29 = lVar20 + 0xfU & 0xfffffffffffffff0;
  puVar17 = (uint *)(lVar20 + uVar29 * lVar24 + uVar30 * (long)iVar28 + 0x20);
  puVar16 = auStack_480;
  if ((uint *)0x408 < puVar17) {
    puVar16 = puVar17;
    puStack_490 = auStack_480;
    __Znam();
  }
  uVar31 = (long)puVar16 + 0xfU & 0xfffffffffffffff0;
  puStack_490 = puVar16;
  puStack_488 = puVar17;
  FUN_10936ff7c(&uStack_550,iVar27,iVar7,uVar26,uVar31,uVar30);
  uStack_5b0 = uVar25 | 0x42ff0000;
  iStack_5ac = 2;
  lVar2 = uVar31 + uVar30 * (long)iVar28;
  piStack_570 = aiStack_5a8;
  aiStack_5a8[1] = 1;
  lStack_588 = 0;
  lStack_590 = 0;
  lStack_578 = 0;
  uStack_580 = 0;
  lStack_560 = 0;
  lStack_558 = 0;
  aiStack_5a8[0] = iVar27;
  lStack_5a0 = lVar2;
  lStack_598 = lVar2;
  plStack_568 = &lStack_560;
  if ((iVar27 != 0) && (uVar31 == 0)) {
    puVar18 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar18 = 1;
    uStack_610 = puVar18 + 1;
    uStack_608 = 0x1c;
    *(undefined1 *)(puVar18 + 8) = 0;
    *(undefined8 *)(puVar18 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar18 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar18 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar18 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&uStack_610,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
    goto LAB_109a5d27c;
  }
  uVar21 = 0xfa50UL >> ((uVar21 & 0x1f) << 1) & 3;
  lStack_560 = 1L << uVar21;
  uStack_5b0 = uVar25 | 0x42ff4000;
  lStack_590 = lVar2 + (lVar24 << uVar21);
  lStack_588 = lStack_590;
  lStack_558 = lStack_560;
  FUN_10936ff7c(&uStack_610,iVar28,iVar7,uVar26,uVar31,uVar30);
  uStack_670._0_4_ = 0x42ff0000;
  uStack_664 = 0;
  uStack_660 = 0;
  uStack_670._4_4_ = 0;
  uStack_668 = 0;
  uVar21 = (ulong)&uStack_670 | 8;
  uStack_654 = 0;
  uStack_650 = 0;
  uStack_65c = 0;
  uStack_658 = 0;
  uStack_644 = 0;
  uStack_64c = 0;
  uStack_648 = 0;
  lStack_638 = 0;
  uStack_640 = 0;
  uStack_63c = 0;
  uStack_620 = 0;
  uStack_618 = 0;
  uStack_630 = uVar21;
  puStack_628 = &uStack_620;
  if (bVar15) {
    FUN_10936ff7c(&uStack_6d0,iVar27,iVar27,uVar26,lVar2 + lVar20 + 0xfU & 0xfffffffffffffff0,uVar29
                 );
    if (lStack_638 != 0) {
      piVar1 = (int *)(lStack_638 + 0x14);
      do {
        iVar8 = *piVar1;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar8 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar8 + -1 == 0) {
        func_0x000109a848d4(&uStack_670);
      }
    }
    if (0 < uStack_670._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)(uStack_630 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_670._4_4_);
    }
    uStack_668 = SUB84(puStack_6c8,0);
    uStack_664 = (undefined4)((ulong)puStack_6c8 >> 0x20);
    uStack_670._0_4_ = (undefined4)uStack_6d0;
    uStack_658 = (undefined4)uStack_6b8;
    uStack_654 = (undefined4)((ulong)uStack_6b8 >> 0x20);
    uStack_660 = (undefined4)uStack_6c0;
    uStack_65c = (undefined4)((ulong)uStack_6c0 >> 0x20);
    uStack_648 = (undefined4)uStack_6a8;
    uStack_644 = (undefined4)((ulong)uStack_6a8 >> 0x20);
    uStack_650 = (undefined4)uStack_6b0;
    uStack_64c = (undefined4)((ulong)uStack_6b0 >> 0x20);
    lStack_638 = lStack_698;
    uStack_640 = (undefined4)uStack_6a0;
    uStack_63c = (undefined4)((ulong)uStack_6a0 >> 0x20);
    uStack_670._4_4_ = uStack_6d0._4_4_;
    uVar26 = uStack_630;
    puVar22 = puStack_628;
    if ((puStack_628 != &uStack_620) &&
       (uVar26 = uVar21, puVar22 = &uStack_620, puStack_628 != (undefined8 *)0x0)) {
      _free(puStack_628[-1]);
    }
    puStack_628 = puVar22;
    uStack_630 = uVar26;
    if (uStack_6d0._4_4_ < 3) {
      puVar22 = (undefined8 *)((ulong)&uStack_6d0 | 4);
      *puStack_628 = *puStack_688;
      puStack_628[1] = puStack_688[1];
      uStack_6d0 = CONCAT44(uStack_6d0._4_4_,0x42ff0000);
      puVar22[1] = 0;
      *puVar22 = 0;
      puVar22[3] = 0;
      puVar22[2] = 0;
      puVar22[5] = 0;
      puVar22[4] = 0;
      *(undefined8 *)((long)puVar22 + 0x34) = 0;
      *(undefined8 *)((long)puVar22 + 0x2c) = 0;
      if (puStack_688 != auStack_680) {
        _free(puStack_688[-1]);
      }
    }
    else {
      uStack_630 = uStack_690;
      puStack_628 = puStack_688;
    }
  }
  if (iVar27 < iVar28) {
    puStack_6c8 = (undefined8 *)0x0;
    uStack_6d0 = 0;
    uStack_6b8 = 0;
    uStack_6c0 = 0;
    FUN_109a48880(&uStack_610,&uStack_6d0);
  }
  if (iVar9 < iVar13) {
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,0x2010000);
    puStack_6c8 = &uStack_550;
    uStack_6c0 = 0;
    FUN_109a479a0(&uStack_4f0,&uStack_6d0);
  }
  else {
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,0x1010000);
    puStack_6c8 = &uStack_4f0;
    uStack_6c0 = 0;
    auStack_6e8[0] = 0x2010000;
    puStack_6e0 = &uStack_550;
    uStack_6d8 = 0;
    FUN_109a895d0(&uStack_6d0,auStack_6e8);
  }
  if (!bVar15) {
    iVar28 = 0;
  }
  iVar8 = iVar27;
  if (-1 < iVar28) {
    iVar8 = iVar28;
  }
  iVar28 = 0;
  if (CONCAT44(uStack_65c,uStack_660) != 0) {
    iVar28 = iVar8;
  }
  if (uVar25 == 5) {
    func_0x000109a5f944();
  }
  else {
    func_0x000109a6002c(uStack_540,auStack_5c0[0],lStack_5a0,CONCAT44(uStack_65c,uStack_660),
                        uStack_620,iVar7,iVar27,iVar28);
  }
  FUN_109a479a0(&uStack_5b0,param_2);
  if (bVar15) {
    if (iVar9 < iVar13) {
      if ((*param_3 & 0x1f0000) != 0) {
        uStack_6d0 = CONCAT44(uStack_6d0._4_4_,0x1010000);
        puStack_6c8 = &uStack_670;
        uStack_6c0 = 0;
        FUN_109a895d0(&uStack_6d0,param_3);
      }
      if ((*param_4 & 0x1f0000) != 0) {
        puVar22 = &uStack_610;
LAB_109a5cefc:
        FUN_109a479a0(puVar22,param_4);
      }
    }
    else {
      if ((*param_3 & 0x1f0000) != 0) {
        uStack_6d0 = CONCAT44(uStack_6d0._4_4_,0x1010000);
        puStack_6c8 = &uStack_610;
        uStack_6c0 = 0;
        FUN_109a895d0(&uStack_6d0,param_3);
      }
      if ((*param_4 & 0x1f0000) != 0) {
        puVar22 = &uStack_670;
        goto LAB_109a5cefc;
      }
    }
  }
  if (lStack_638 != 0) {
    piVar1 = (int *)(lStack_638 + 0x14);
    do {
      iVar9 = *piVar1;
      cVar11 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar15) {
        *piVar1 = iVar9 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_670);
    }
  }
  lStack_638 = 0;
  uStack_658 = 0;
  uStack_654 = 0;
  uStack_660 = 0;
  uStack_65c = 0;
  uStack_648 = 0;
  uStack_644 = 0;
  uStack_650 = 0;
  uStack_64c = 0;
  if (0 < uStack_670._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(uStack_630 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_670._4_4_);
  }
  if (puStack_628 != &uStack_620 && puStack_628 != (undefined8 *)0x0) {
    _free(puStack_628[-1]);
  }
  if (lStack_5d8 != 0) {
    piVar1 = (int *)(lStack_5d8 + 0x14);
    do {
      iVar9 = *piVar1;
      cVar11 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar15) {
        *piVar1 = iVar9 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_610);
    }
  }
  lStack_5d8 = 0;
  uStack_5f8 = 0;
  uStack_600 = 0;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  if (0 < uStack_610._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(lStack_5d0 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_610._4_4_);
  }
  if (puStack_5c8 != auStack_5c0 && puStack_5c8 != (undefined8 *)0x0) {
    _free(puStack_5c8[-1]);
  }
  if (lStack_578 != 0) {
    piVar1 = (int *)(lStack_578 + 0x14);
    do {
      iVar9 = *piVar1;
      cVar11 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar15) {
        *piVar1 = iVar9 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_5b0);
    }
  }
  lStack_578 = 0;
  lStack_598 = 0;
  lStack_5a0 = 0;
  lStack_588 = 0;
  lStack_590 = 0;
  if (0 < iStack_5ac) {
    lVar20 = 0;
    do {
      piStack_570[lVar20] = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iStack_5ac);
  }
  if (plStack_568 != &lStack_560 && plStack_568 != (long *)0x0) {
    _free(plStack_568[-1]);
  }
  if (lStack_518 != 0) {
    piVar1 = (int *)(lStack_518 + 0x14);
    do {
      iVar9 = *piVar1;
      cVar11 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar15) {
        *piVar1 = iVar9 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_550);
    }
  }
  lStack_518 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  if (0 < uStack_550._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(lStack_510 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_550._4_4_);
  }
  if (puStack_508 != auStack_500 && puStack_508 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_508 + -8));
  }
  puVar17 = puStack_490;
  if (puStack_490 != auStack_480 && puStack_490 != (uint *)0x0) {
    __ZdaPv();
  }
  if (uStack_4b8 != 0) {
    piVar1 = (int *)(uStack_4b8 + 0x14);
    do {
      iVar9 = *piVar1;
      cVar11 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar15) {
        *piVar1 = iVar9 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar9 + -1 == 0) {
      puVar17 = (uint *)&uStack_4f0;
      func_0x000109a848d4();
    }
  }
  uStack_4b8 = 0;
  dVar32 = 0.0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  if (0 < (int)uStack_4f0._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(uStack_4b0 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < (int)uStack_4f0._4_4_);
  }
  if (puStack_4a8 != &uStack_4a0 && puStack_4a8 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_4a8[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return dVar32;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_670);
  func_0x00010567aa40(&uStack_610);
  func_0x00010567aa40(&uStack_5b0);
  func_0x00010567aa40(&uStack_550);
  if (puStack_490 != auStack_480 && puStack_490 != (uint *)0x0) {
    __ZdaPv();
  }
  func_0x00010567aa40(&uStack_4f0);
  __Unwind_Resume();
  if ((((puVar17 != (uint *)0x0) && (*puVar17 >> 0x10 == 0x4242)) &&
      (uVar25 = puVar17[9], 0 < (int)uVar25)) &&
     (((uVar10 = puVar17[8], 0 < (int)uVar10 && (uVar10 < 4)) &&
      (pdVar23 = *(double **)(puVar17 + 6), pdVar23 != (double *)0x0)))) {
    if (uVar10 != uVar25) {
      puVar18 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar18 = 1;
      uStack_7c8 = puVar18 + 1;
      uStack_7c0 = 0x11;
      *(undefined2 *)(puVar18 + 5) = 0x73;
      *(undefined8 *)(puVar18 + 3) = 0x6c6f633e2d74616d;
      *(undefined8 *)(puVar18 + 1) = 0x203d3d2073776f72;
      FUN_109ac3188(0xffffff29,&uStack_7c8,&UNK_10f597138,&UNK_10f596e57,0x5e4);
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x109a5d63c);
      (*pcVar14)();
    }
    lVar20 = (long)(int)puVar17[1];
    uVar10 = *puVar17 & 0xfff;
    if (uVar10 == 6) {
      if (uVar25 == 3) {
        pdVar5 = (double *)((long)pdVar23 + lVar20);
        pdVar6 = (double *)((long)pdVar23 + lVar20 * 2);
        dVar32 = -(pdVar23[1] * (-(pdVar5[2] * *pdVar6) + pdVar6[2] * *pdVar5)) +
                 (-(pdVar5[2] * pdVar6[1]) + pdVar6[2] * pdVar5[1]) * *pdVar23;
        dVar33 = pdVar23[2];
        dVar34 = -(pdVar5[1] * *pdVar6) + pdVar6[1] * *pdVar5;
LAB_109a5d5d8:
        return dVar32 + dVar34 * dVar33;
      }
      if (uVar25 == 2) {
        dVar32 = *pdVar23;
        dVar33 = pdVar23[1];
        dVar35 = *(double *)((long)pdVar23 + lVar20);
        dVar34 = ((double *)((long)pdVar23 + lVar20))[1];
LAB_109a5d458:
        return -(dVar33 * dVar35) + dVar34 * dVar32;
      }
    }
    else if (uVar10 == 5) {
      if (uVar25 == 3) {
        pfVar3 = (float *)((long)pdVar23 + lVar20);
        pfVar4 = (float *)((long)pdVar23 + lVar20 * 2);
        dVar32 = -((-((double)pfVar3[2] * (double)*pfVar4) + (double)pfVar4[2] * (double)*pfVar3) *
                  (double)*(float *)((long)pdVar23 + 4)) +
                 (-((double)pfVar3[2] * (double)pfVar4[1]) + (double)pfVar4[2] * (double)pfVar3[1])
                 * (double)*(float *)pdVar23;
        dVar33 = (double)*(float *)(pdVar23 + 1);
        dVar34 = -((double)pfVar3[1] * (double)*pfVar4) + (double)pfVar4[1] * (double)*pfVar3;
        goto LAB_109a5d5d8;
      }
      if (uVar25 == 2) {
        dVar32 = (double)*(float *)pdVar23;
        dVar34 = (double)((float *)((long)pdVar23 + lVar20))[1];
        dVar33 = (double)*(float *)((long)pdVar23 + 4);
        dVar35 = (double)*(float *)((long)pdVar23 + lVar20);
        goto LAB_109a5d458;
      }
    }
  }
  FUN_109a85f44(&uStack_7c8);
  uStack_758 = 0;
  auStack_768[0] = 0x1010000;
  puStack_760 = &uStack_7c8;
  FUN_109a57530(auStack_768);
  if (lStack_790 != 0) {
    piVar1 = (int *)(lStack_790 + 0x14);
    do {
      iVar9 = *piVar1;
      cVar11 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar15) {
        *piVar1 = iVar9 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_7c8);
    }
  }
  lStack_790 = 0;
  uStack_7b0 = 0;
  uStack_7b8 = 0;
  uStack_7a0 = 0;
  uStack_7a8 = 0;
  if (0 < uStack_7c8._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(lStack_788 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_7c8._4_4_);
  }
  if (puStack_780 != auStack_778 && puStack_780 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_780 + -8));
  }
  return dVar32;
}



/* Entry: 109a5d39c; end: 109a5d683;  */

double FUN_109a5d39c(double param_1,uint *param_2)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  undefined4 *puVar12;
  double *pdVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [16];
  undefined4 auStack_48 [2];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  if ((((param_2 != (uint *)0x0) && (*param_2 >> 0x10 == 0x4242)) &&
      (uVar7 = param_2[9], 0 < (int)uVar7)) &&
     (((uVar8 = param_2[8], 0 < (int)uVar8 && (uVar8 < 4)) &&
      (pdVar13 = *(double **)(param_2 + 6), pdVar13 != (double *)0x0)))) {
    if (uVar8 != uVar7) {
      puVar12 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar12 = 1;
      uStack_a8 = puVar12 + 1;
      uStack_a0 = 0x11;
      *(undefined2 *)(puVar12 + 5) = 0x73;
      *(undefined8 *)(puVar12 + 3) = 0x6c6f633e2d74616d;
      *(undefined8 *)(puVar12 + 1) = 0x203d3d2073776f72;
      FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f597138,&UNK_10f596e57,0x5e4);
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x109a5d63c);
      (*pcVar11)();
    }
    lVar14 = (long)(int)param_2[1];
    uVar8 = *param_2 & 0xfff;
    if (uVar8 == 6) {
      if (uVar7 == 3) {
        pdVar4 = (double *)((long)pdVar13 + lVar14);
        pdVar5 = (double *)((long)pdVar13 + lVar14 * 2);
        dVar15 = -(pdVar13[1] * (-(pdVar4[2] * *pdVar5) + pdVar5[2] * *pdVar4)) +
                 (-(pdVar4[2] * pdVar5[1]) + pdVar5[2] * pdVar4[1]) * *pdVar13;
        dVar16 = pdVar13[2];
        dVar17 = -(pdVar4[1] * *pdVar5) + pdVar5[1] * *pdVar4;
LAB_109a5d5d8:
        return dVar15 + dVar17 * dVar16;
      }
      if (uVar7 == 2) {
        dVar15 = *pdVar13;
        dVar16 = pdVar13[1];
        dVar18 = *(double *)((long)pdVar13 + lVar14);
        dVar17 = ((double *)((long)pdVar13 + lVar14))[1];
LAB_109a5d458:
        return -(dVar16 * dVar18) + dVar17 * dVar15;
      }
    }
    else if (uVar8 == 5) {
      if (uVar7 == 3) {
        pfVar2 = (float *)((long)pdVar13 + lVar14);
        pfVar3 = (float *)((long)pdVar13 + lVar14 * 2);
        dVar15 = -((-((double)pfVar2[2] * (double)*pfVar3) + (double)pfVar3[2] * (double)*pfVar2) *
                  (double)*(float *)((long)pdVar13 + 4)) +
                 (-((double)pfVar2[2] * (double)pfVar3[1]) + (double)pfVar3[2] * (double)pfVar2[1])
                 * (double)*(float *)pdVar13;
        dVar16 = (double)*(float *)(pdVar13 + 1);
        dVar17 = -((double)pfVar2[1] * (double)*pfVar3) + (double)pfVar3[1] * (double)*pfVar2;
        goto LAB_109a5d5d8;
      }
      if (uVar7 == 2) {
        dVar15 = (double)*(float *)pdVar13;
        dVar17 = (double)((float *)((long)pdVar13 + lVar14))[1];
        dVar16 = (double)*(float *)((long)pdVar13 + 4);
        dVar18 = (double)*(float *)((long)pdVar13 + lVar14);
        goto LAB_109a5d458;
      }
    }
  }
  FUN_109a85f44(&uStack_a8,param_2,0,1,0,0);
  uStack_38 = 0;
  auStack_48[0] = 0x1010000;
  puStack_40 = &uStack_a8;
  FUN_109a57530(auStack_48);
  if (lStack_70 != 0) {
    piVar1 = (int *)(lStack_70 + 0x14);
    do {
      iVar6 = *piVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar6 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar6 + -1 == 0) {
      func_0x000109a848d4(&uStack_a8);
    }
  }
  lStack_70 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  if (0 < uStack_a8._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(lStack_68 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_a8._4_4_);
  }
  if (puStack_60 != auStack_58 && puStack_60 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_60 + -8));
  }
  return param_1;
}



/* Entry: 109a5d684; end: 109a5d937;  */

undefined8 FUN_109a5d684(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 auStack_130 [2];
  uint *puStack_128;
  undefined8 uStack_120;
  undefined4 *puStack_118;
  uint *puStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  
  FUN_109a85f44(&uStack_a0,param_2,0,1,0,0);
  FUN_109a85f44(&uStack_100,param_3,0,1,0,0);
  if (((((uStack_100 ^ uStack_a0) & 0xfff) == 0) && (iStack_98 == iStack_f4)) &&
     (iStack_94 == iStack_f8)) {
    puStack_118 = (undefined4 *)CONCAT44(puStack_118._4_4_,0x1010000);
    puStack_110 = &uStack_a0;
    uStack_108 = 0;
    auStack_130[0] = 0x2010000;
    uVar2 = param_4;
    if (param_4 != 2) {
      uVar2 = 0;
    }
    puStack_128 = &uStack_100;
    if ((param_4 | 2) != 3) {
      param_4 = uVar2;
    }
    uStack_120 = 0;
    FUN_109a57c7c(&puStack_118,auStack_130,param_4);
    if (lStack_c8 != 0) {
      piVar1 = (int *)(lStack_c8 + 0x14);
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
        func_0x000109a848d4(&uStack_100);
      }
    }
    lStack_c8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    if (0 < iStack_fc) {
      lVar8 = 0;
      do {
        *(undefined4 *)(lStack_c0 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iStack_fc);
    }
    if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_b8 + -8));
    }
    if (lStack_68 != 0) {
      piVar1 = (int *)(lStack_68 + 0x14);
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
        func_0x000109a848d4(&uStack_a0);
      }
    }
    lStack_68 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (0 < iStack_9c) {
      lVar8 = 0;
      do {
        *(undefined4 *)(lStack_60 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iStack_9c);
    }
    if (puStack_58 != auStack_50 && puStack_58 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_58 + -8));
    }
    return param_1;
  }
  puVar7 = (undefined4 *)0x50;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar7 + 7) = 0x2e63727320262620;
  *(undefined8 *)(puVar7 + 5) = 0x2928657079742e74;
  *(undefined8 *)(puVar7 + 0xb) = 0x736c6f632e747364;
  *(undefined8 *)(puVar7 + 9) = 0x203d3d2073776f72;
  *(undefined8 *)(puVar7 + 0xf) = 0x203d3d20736c6f63;
  *(undefined8 *)(puVar7 + 0xd) = 0x2e63727320262620;
  *puVar7 = 1;
  puStack_118 = puVar7 + 1;
  puStack_110 = (uint *)0x48;
  *(undefined1 *)(puVar7 + 0x13) = 0;
  *(undefined8 *)(puVar7 + 0x11) = 0x73776f722e747364;
  *(undefined8 *)(puVar7 + 3) = 0x7364203d3d202928;
  *(undefined8 *)(puVar7 + 1) = 0x657079742e637273;
  FUN_109ac3188(0xffffff29,&puStack_118,&UNK_10f597187,&UNK_10f596e57,0x601);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109a5d8d8);
  (*pcVar6)();
}



/* Entry: 109a5d938; end: 109a5dcc3;  */

undefined4 ** FUN_109a5d938(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 **ppuVar7;
  undefined4 *puVar8;
  uint uVar9;
  long lVar10;
  undefined4 auStack_198 [2];
  uint *puStack_190;
  undefined8 uStack_188;
  undefined4 auStack_180 [2];
  undefined1 *puStack_178;
  undefined8 uStack_170;
  undefined4 *puStack_168;
  uint *puStack_160;
  undefined8 uStack_158;
  uint uStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  long lStack_110;
  undefined1 *puStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [4];
  int iStack_ec;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  long lStack_50;
  undefined1 *puStack_48;
  undefined1 auStack_40 [16];
  
  FUN_109a85f44(&uStack_90,param_1,0,1,0,0);
  FUN_109a85f44(auStack_f0,param_2,0,1,0,0);
  FUN_109a85f44(&uStack_150,param_3,0,1,0,0);
  if (((((uStack_150 ^ uStack_90) & 0xfff) == 0) && (iStack_84 == iStack_148)) &&
     (iStack_144 == iStack_e4)) {
    uStack_158 = 0;
    puStack_168 = (undefined4 *)CONCAT44(puStack_168._4_4_,0x1010000);
    puStack_160 = &uStack_90;
    uStack_170 = 0;
    auStack_180[0] = 0x1010000;
    puStack_178 = auStack_f0;
    auStack_198[0] = 0x2010000;
    puStack_190 = &uStack_150;
    uStack_188 = 0;
    uVar9 = 4;
    if (iStack_88 <= iStack_84) {
      uVar9 = 0;
    }
    uVar2 = param_4 & 0xffffffef;
    if (2 < (param_4 & 0xffffffef) - 1) {
      uVar2 = uVar9;
    }
    ppuVar7 = &puStack_168;
    FUN_109a5a63c(ppuVar7,auStack_180,auStack_198,uVar2 | param_4 & 0x10);
    if (lStack_118 != 0) {
      piVar1 = (int *)(lStack_118 + 0x14);
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
        func_0x000109a848d4(&uStack_150);
      }
    }
    lStack_118 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    if (0 < iStack_14c) {
      lVar10 = 0;
      do {
        *(undefined4 *)(lStack_110 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iStack_14c);
    }
    if (puStack_108 != auStack_100 && puStack_108 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_108 + -8));
    }
    if (lStack_b8 != 0) {
      piVar1 = (int *)(lStack_b8 + 0x14);
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
        func_0x000109a848d4(auStack_f0);
      }
    }
    lStack_b8 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    if (0 < iStack_ec) {
      lVar10 = 0;
      do {
        *(undefined4 *)(lStack_b0 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iStack_ec);
    }
    if (puStack_a8 != auStack_a0 && puStack_a8 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_a8 + -8));
    }
    if (lStack_58 != 0) {
      piVar1 = (int *)(lStack_58 + 0x14);
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
        func_0x000109a848d4(&uStack_90);
      }
    }
    lStack_58 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    if (0 < iStack_8c) {
      lVar10 = 0;
      do {
        *(undefined4 *)(lStack_50 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iStack_8c);
    }
    if (puStack_48 != auStack_40 && puStack_48 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_48 + -8));
    }
    return ppuVar7;
  }
  puVar8 = (undefined4 *)0x44;
  func_0x000107c2ae8c();
  *puVar8 = 1;
  puStack_168 = puVar8 + 1;
  puStack_160 = (uint *)0x3c;
  *(undefined8 *)(puVar8 + 3) = 0x79742e78203d3d20;
  *(undefined8 *)(puVar8 + 1) = 0x2928657079742e41;
  *(undefined1 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 7) = 0x3d20736c6f632e41;
  *(undefined8 *)(puVar8 + 5) = 0x2026262029286570;
  *(undefined8 *)(puVar8 + 0xb) = 0x6f632e7820262620;
  *(undefined8 *)(puVar8 + 9) = 0x73776f722e78203d;
  *(undefined8 *)(puVar8 + 0xe) = 0x736c6f632e62203d;
  *(undefined8 *)(puVar8 + 0xc) = 0x3d20736c6f632e78;
  FUN_109ac3188(0xffffff29,&puStack_168,&UNK_10f5971cd,&UNK_10f596e57,0x60d);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109a5dc50);
  (*pcVar6)();
}



/* Entry: 109a5dcc4; end: 109a5ed37;  */

/* WARNING: Removing unreachable block (ram,0x000109a5df50) */
/* WARNING: Removing unreachable block (ram,0x000109a5df54) */
/* WARNING: Removing unreachable block (ram,0x000109a5df5c) */
/* WARNING: Removing unreachable block (ram,0x000109a5df64) */
/* WARNING: Removing unreachable block (ram,0x000109a5df68) */
/* WARNING: Removing unreachable block (ram,0x000109a5df88) */
/* WARNING: Removing unreachable block (ram,0x000109a5df90) */
/* WARNING: Removing unreachable block (ram,0x000109a5dfa4) */
/* WARNING: Removing unreachable block (ram,0x000109a5dfb4) */

void FUN_109a5dcc4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  code *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  int *piVar17;
  int *piVar18;
  undefined4 auStack_3b8 [2];
  uint *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  int *piStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  int iStack_338;
  int iStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  long lStack_308;
  int *piStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  uint uStack_2e0;
  int iStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  long lStack_2a8;
  int *piStack_2a0;
  ulong *puStack_298;
  ulong uStack_290;
  ulong uStack_288;
  uint uStack_280;
  uint uStack_27c;
  int iStack_278;
  int iStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  long lStack_248;
  int *piStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  uint uStack_220;
  uint uStack_21c;
  int iStack_218;
  int iStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long lStack_1e8;
  int *piStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  long lStack_188;
  int *piStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint uStack_160;
  int iStack_15c;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  int *piStack_120;
  ulong *puStack_118;
  ulong auStack_110 [2];
  uint uStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined4 auStack_a0 [2];
  uint *puStack_98;
  undefined8 uStack_90;
  undefined4 *puStack_88;
  uint *puStack_80;
  undefined8 uStack_78;
  
  FUN_109a85f44(&uStack_100,param_1,0,1,0,0);
  FUN_109a85f44(&uStack_160,param_2,0,1,0,0);
  uStack_1c0 = 0x42ff0000;
  iStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1bc = 0;
  iStack_1b8 = 0;
  piVar17 = (int *)((ulong)&uStack_1c0 | 8);
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_194 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_220 = 0x42ff0000;
  piVar18 = (int *)((ulong)&uStack_220 | 8);
  iStack_214 = 0;
  uStack_210 = 0;
  uStack_21c = 0;
  iStack_218 = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  uStack_1f4 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uVar15 = uStack_100 & 0xfff;
  iVar2 = iStack_f4;
  iVar8 = iStack_f8;
  if (iStack_f8 <= iStack_f4) {
    iVar2 = iStack_f8;
    iVar8 = iStack_f4;
  }
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  piStack_1e0 = piVar18;
  puStack_1d8 = &uStack_1d0;
  piStack_180 = piVar17;
  puStack_178 = &uStack_170;
  if ((uStack_160 & 0xfff) == uVar15) {
    iVar3 = *piStack_120;
    iVar4 = piStack_120[1];
    if ((((iVar4 == iVar2) && (iVar3 == 1)) || ((iVar4 == iVar2 || iVar4 == 1 && (iVar3 == iVar2))))
       || ((iVar4 == iStack_f4 && (iVar3 == iStack_f8)))) {
      uStack_340._0_4_ = 0x42ff0000;
      iStack_334 = 0;
      uStack_330 = 0;
      uStack_340._4_4_ = 0;
      iStack_338 = 0;
      piStack_300 = &iStack_338;
      uStack_324 = 0;
      uStack_320 = 0;
      uStack_32c = 0;
      uStack_328 = 0;
      uStack_314 = 0;
      uStack_31c = 0;
      uStack_318 = 0;
      lStack_308 = 0;
      uStack_310 = 0;
      uStack_30c = 0;
      puStack_2f8 = &uStack_2f0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      uStack_2e0 = 0x42ff0000;
      piStack_2a0 = &iStack_2d8;
      uStack_2d4 = 0;
      uStack_2d0 = 0;
      iStack_2dc = 0;
      iStack_2d8 = 0;
      uStack_2c4 = 0;
      uStack_2c0._0_4_ = 0;
      uStack_2cc = 0;
      uStack_2c8 = 0;
      uStack_2b8._4_4_ = 0;
      uStack_2c0._4_4_ = 0;
      uStack_2b8._0_4_ = 0;
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2ac = 0;
      puStack_298 = &uStack_290;
      uStack_290 = 0;
      uStack_288 = 0;
      uStack_280 = 0x42ff0000;
      piStack_240 = &iStack_278;
      lStack_248 = 0;
      uStack_24c = 0;
      uStack_254 = 0;
      uStack_250 = 0;
      uStack_25c = 0;
      uStack_258 = 0;
      uStack_264 = 0;
      uStack_260 = 0;
      uStack_26c = 0;
      uStack_268 = 0;
      iStack_274 = 0;
      uStack_270 = 0;
      uStack_27c = 0;
      iStack_278 = 0;
      puStack_238 = &uStack_230;
      uStack_230 = 0;
      uStack_228 = 0;
      if ((piStack_120[1] == iVar2) && (*piStack_120 == 1)) {
        uStack_3a0 = (undefined4 *)CONCAT44(2,uVar15 | 0x42ff0000);
        piStack_360 = (int *)&uStack_398;
        uStack_398 = (uint *)CONCAT44(1,iVar2);
        lStack_390 = lStack_150;
        lStack_388 = lStack_150;
        uStack_378 = 0;
        uStack_380 = 0;
        lStack_368 = 0;
        uStack_370 = 0;
        puStack_358 = &uStack_350;
        uStack_350 = 0;
        uStack_348 = 0;
        if ((iVar2 != 0) && (lStack_150 == 0)) {
          puVar10 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar10 = 1;
          puStack_88 = puVar10 + 1;
          puStack_80 = (uint *)0x1c;
          *(undefined1 *)(puVar10 + 8) = 0;
          *(undefined8 *)(puVar10 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar10 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar10 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar10 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&puStack_88,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
          goto LAB_109a5ebc8;
        }
        uStack_2e0 = uVar15 | 0x42ff4000;
        iStack_2dc = 2;
        uVar11 = (uVar15 >> 3) + 1 << (ulong)(0xfa50U >> (ulong)((uStack_100 & 7) << 1) & 3);
        uStack_290 = (ulong)uVar11;
        uStack_2d4 = 1;
        uStack_2c0 = lStack_150 + (long)(int)uVar11 * (long)iVar2;
        uStack_2d0 = (undefined4)lStack_150;
        uStack_2cc = (undefined4)((ulong)lStack_150 >> 0x20);
        uStack_2b0 = 0;
        uStack_2ac = 0;
        lStack_2a8 = 0;
        iStack_2d8 = iVar2;
        uStack_2c8 = uStack_2d0;
        uStack_2c4 = uStack_2cc;
        uStack_288 = uStack_290;
        uStack_2b8 = uStack_2c0;
      }
      else {
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        if ((uStack_160 >> 0xe & 1) != 0) {
          if (lStack_128 != 0) {
            piVar1 = (int *)(lStack_128 + 0x14);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lStack_2a8 = 0;
          uStack_2c8 = 0;
          uStack_2c4 = 0;
          uStack_2d0 = 0;
          uStack_2cc = 0;
          uStack_2b8._0_4_ = 0;
          uStack_2b8._4_4_ = 0;
          uStack_2c0._0_4_ = 0;
          uStack_2c0._4_4_ = 0;
          uStack_2e0 = uStack_160;
          if (iStack_15c < 3) {
            iStack_2dc = iStack_15c;
            iStack_2d8 = (int)uStack_158;
            uStack_2d4 = (undefined4)((ulong)uStack_158 >> 0x20);
            uStack_290 = *puStack_118;
            uStack_288 = puStack_118[1];
          }
          else {
            func_0x000109a84868(&uStack_2e0,&uStack_160);
          }
          uStack_2c8 = (undefined4)uStack_148;
          uStack_2c4 = (undefined4)((ulong)uStack_148 >> 0x20);
          uStack_2d0 = (undefined4)lStack_150;
          uStack_2cc = (undefined4)((ulong)lStack_150 >> 0x20);
          uStack_2b0 = (undefined4)uStack_130;
          uStack_2ac = (undefined4)((ulong)uStack_130 >> 0x20);
          lStack_2a8 = lStack_128;
          uStack_2c0 = lStack_140;
          uStack_2b8 = lStack_138;
        }
      }
      if (param_3 != 0) {
        FUN_109a85f44(&uStack_3a0,param_3,0,1,0,0);
        if (lStack_188 != 0) {
          piVar1 = (int *)(lStack_188 + 0x14);
          do {
            iVar2 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar2 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_1c0);
          }
        }
        if (0 < (int)uStack_1bc) {
          lVar12 = 0;
          do {
            piStack_180[lVar12] = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < (int)uStack_1bc);
        }
        iStack_1b8 = (int)uStack_398;
        iStack_1b4 = (int)((ulong)uStack_398 >> 0x20);
        uStack_1c0 = (uint)uStack_3a0;
        uStack_1a8 = (undefined4)lStack_388;
        uStack_1a4 = (undefined4)((ulong)lStack_388 >> 0x20);
        uStack_1b0 = (undefined4)lStack_390;
        uStack_1ac = (undefined4)((ulong)lStack_390 >> 0x20);
        uStack_198 = (undefined4)uStack_378;
        uStack_194 = (undefined4)((ulong)uStack_378 >> 0x20);
        uStack_1a0 = (undefined4)uStack_380;
        uStack_19c = (undefined4)((ulong)uStack_380 >> 0x20);
        lStack_188 = lStack_368;
        uStack_190 = (undefined4)uStack_370;
        uStack_18c = (undefined4)((ulong)uStack_370 >> 0x20);
        uStack_1bc = uStack_3a0._4_4_;
        piVar1 = piStack_180;
        puVar13 = puStack_178;
        if ((puStack_178 != &uStack_170) &&
           (piVar1 = piVar17, puVar13 = &uStack_170, puStack_178 != (undefined8 *)0x0)) {
          _free(puStack_178[-1]);
        }
        puStack_178 = puVar13;
        piStack_180 = piVar1;
        if ((int)uStack_3a0._4_4_ < 3) {
          puVar13 = (undefined8 *)((ulong)&uStack_3a0 | 4);
          *puStack_178 = *puStack_358;
          puStack_178[1] = puStack_358[1];
          uStack_3a0 = (undefined4 *)CONCAT44(uStack_3a0._4_4_,0x42ff0000);
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13[3] = 0;
          puVar13[2] = 0;
          puVar13[5] = 0;
          puVar13[4] = 0;
          *(undefined8 *)((long)puVar13 + 0x34) = 0;
          *(undefined8 *)((long)puVar13 + 0x2c) = 0;
          if (puStack_358 != &uStack_350) {
            _free(puStack_358[-1]);
          }
        }
        else {
          puStack_178 = puStack_358;
          piStack_180 = piStack_360;
        }
        if ((uStack_1c0 & 0xfff) != uVar15) {
          puVar10 = (undefined4 *)0x18;
          func_0x000107c2ae8c();
          *puVar10 = 1;
          uStack_3a0 = puVar10 + 1;
          uStack_398 = (uint *)0x10;
          *(undefined1 *)(puVar10 + 5) = 0;
          *(undefined8 *)(puVar10 + 3) = 0x65707974203d3d20;
          *(undefined8 *)(puVar10 + 1) = 0x2928657079742e75;
          FUN_109ac3188(0xffffff29,&uStack_3a0,&UNK_10f597263,&UNK_10f596e57,0x64b);
          goto LAB_109a5ebc8;
        }
        if (lStack_188 != 0) {
          piVar17 = (int *)(lStack_188 + 0x14);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = *piVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (lStack_308 != 0) {
          piVar17 = (int *)(lStack_308 + 0x14);
          do {
            iVar2 = *piVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = iVar2 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_340);
          }
        }
        puVar13 = puStack_178;
        lStack_308 = 0;
        uStack_328 = 0;
        uStack_324 = 0;
        uStack_330 = 0;
        uStack_32c = 0;
        uStack_318 = 0;
        uStack_314 = 0;
        uStack_320 = 0;
        uStack_31c = 0;
        if ((int)uStack_340._4_4_ < 1) {
LAB_109a5e1cc:
          uStack_340._0_4_ = uStack_1c0;
          if (2 < (int)uStack_1bc) goto LAB_109a5e200;
          uStack_340._4_4_ = uStack_1bc;
          iStack_338 = iStack_1b8;
          iStack_334 = iStack_1b4;
          *puStack_2f8 = *puStack_178;
          puStack_2f8[1] = puVar13[1];
        }
        else {
          lVar12 = 0;
          do {
            piStack_300[lVar12] = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < (int)uStack_340._4_4_);
          if ((int)uStack_340._4_4_ < 3) goto LAB_109a5e1cc;
LAB_109a5e200:
          uStack_340._0_4_ = uStack_1c0;
          func_0x000109a84868(&uStack_340,&uStack_1c0);
        }
        uStack_328 = uStack_1a8;
        uStack_324 = uStack_1a4;
        uStack_330 = uStack_1b0;
        uStack_32c = uStack_1ac;
        uStack_318 = uStack_198;
        uStack_314 = uStack_194;
        uStack_320 = uStack_1a0;
        uStack_31c = uStack_19c;
        lStack_308 = lStack_188;
        uStack_310 = uStack_190;
        uStack_30c = uStack_18c;
      }
      if (param_4 == 0) {
        lVar12 = CONCAT44(uStack_26c,uStack_270);
      }
      else {
        FUN_109a85f44(&uStack_3a0,param_4,0,1,0,0);
        if (lStack_1e8 != 0) {
          piVar17 = (int *)(lStack_1e8 + 0x14);
          do {
            iVar2 = *piVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = iVar2 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_220);
          }
        }
        if (0 < (int)uStack_21c) {
          lVar12 = 0;
          do {
            piStack_1e0[lVar12] = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < (int)uStack_21c);
        }
        iStack_218 = (int)uStack_398;
        iStack_214 = (int)((ulong)uStack_398 >> 0x20);
        uStack_220 = (uint)uStack_3a0;
        uStack_208 = (undefined4)lStack_388;
        uStack_204 = (undefined4)((ulong)lStack_388 >> 0x20);
        uStack_210 = (undefined4)lStack_390;
        uStack_20c = (undefined4)((ulong)lStack_390 >> 0x20);
        uStack_1f8 = (undefined4)uStack_378;
        uStack_1f4 = (undefined4)((ulong)uStack_378 >> 0x20);
        uStack_200 = (undefined4)uStack_380;
        uStack_1fc = (undefined4)((ulong)uStack_380 >> 0x20);
        lStack_1e8 = lStack_368;
        uStack_1f0 = (undefined4)uStack_370;
        uStack_1ec = (undefined4)((ulong)uStack_370 >> 0x20);
        uStack_21c = uStack_3a0._4_4_;
        piVar17 = piStack_1e0;
        puVar13 = puStack_1d8;
        if ((puStack_1d8 != &uStack_1d0) &&
           (piVar17 = piVar18, puVar13 = &uStack_1d0, puStack_1d8 != (undefined8 *)0x0)) {
          _free(puStack_1d8[-1]);
        }
        puStack_1d8 = puVar13;
        piStack_1e0 = piVar17;
        if ((int)uStack_3a0._4_4_ < 3) {
          puVar13 = (undefined8 *)((ulong)&uStack_3a0 | 4);
          *puStack_1d8 = *puStack_358;
          puStack_1d8[1] = puStack_358[1];
          uStack_3a0 = (undefined4 *)CONCAT44(uStack_3a0._4_4_,0x42ff0000);
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13[3] = 0;
          puVar13[2] = 0;
          puVar13[5] = 0;
          puVar13[4] = 0;
          *(undefined8 *)((long)puVar13 + 0x34) = 0;
          *(undefined8 *)((long)puVar13 + 0x2c) = 0;
          if (puStack_358 != &uStack_350) {
            _free(puStack_358[-1]);
          }
        }
        else {
          puStack_1d8 = puStack_358;
          piStack_1e0 = piStack_360;
        }
        if ((uStack_220 & 0xfff) != uVar15) {
          puVar10 = (undefined4 *)0x18;
          func_0x000107c2ae8c();
          *puVar10 = 1;
          uStack_3a0 = puVar10 + 1;
          uStack_398 = (uint *)0x10;
          *(undefined1 *)(puVar10 + 5) = 0;
          *(undefined8 *)(puVar10 + 3) = 0x65707974203d3d20;
          *(undefined8 *)(puVar10 + 1) = 0x2928657079742e76;
          FUN_109ac3188(0xffffff29,&uStack_3a0,&UNK_10f597263,&UNK_10f596e57,0x652);
          goto LAB_109a5ebc8;
        }
        if (lStack_1e8 != 0) {
          piVar17 = (int *)(lStack_1e8 + 0x14);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = *piVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (lStack_248 != 0) {
          piVar17 = (int *)(lStack_248 + 0x14);
          do {
            iVar2 = *piVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = iVar2 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_280);
          }
        }
        puVar13 = puStack_1d8;
        lStack_248 = 0;
        uStack_268 = 0;
        uStack_264 = 0;
        uStack_270 = 0;
        uStack_26c = 0;
        uStack_258 = 0;
        uStack_254 = 0;
        uStack_260 = 0;
        uStack_25c = 0;
        if ((int)uStack_27c < 1) {
LAB_109a5e3e0:
          uStack_280 = uStack_220;
          if (2 < (int)uStack_21c) goto LAB_109a5e414;
          uStack_27c = uStack_21c;
          iStack_278 = iStack_218;
          iStack_274 = iStack_214;
          *puStack_238 = *puStack_1d8;
          puStack_238[1] = puVar13[1];
        }
        else {
          lVar12 = 0;
          do {
            piStack_240[lVar12] = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < (int)uStack_27c);
          if ((int)uStack_27c < 3) goto LAB_109a5e3e0;
LAB_109a5e414:
          uStack_280 = uStack_220;
          func_0x000109a84868(&uStack_280,&uStack_220);
        }
        lVar12 = CONCAT44(uStack_20c,uStack_210);
        uStack_268 = uStack_208;
        uStack_264 = uStack_204;
        uStack_270 = uStack_210;
        uStack_26c = uStack_20c;
        uStack_258 = uStack_1f8;
        uStack_254 = uStack_1f4;
        uStack_260 = uStack_200;
        uStack_25c = uStack_1fc;
        lStack_248 = lStack_1e8;
        uStack_250 = uStack_1f0;
        uStack_24c = uStack_1ec;
      }
      uVar11 = 0;
      auStack_3b8[0] = 0x1010000;
      puStack_3b0 = &uStack_100;
      uStack_3a8 = 0;
      uVar15 = 2;
      if (CONCAT44(uStack_32c,uStack_330) != 0 || lVar12 != 0) {
        uVar15 = 0;
      }
      if (((iStack_f8 != iStack_f4) &&
          (uVar11 = 4, piStack_300[1] != iVar8 || *piStack_300 != iVar8)) &&
         (uVar11 = 4, *piStack_240 != iVar8 || piStack_240[1] != iVar8)) {
        uVar11 = 0;
      }
      uStack_3a0._0_4_ = 0x2010000;
      lStack_390 = 0;
      puStack_88 = (undefined4 *)CONCAT44(puStack_88._4_4_,0x2010000);
      puStack_80 = (uint *)&uStack_340;
      uStack_78 = 0;
      auStack_a0[0] = 0x2010000;
      uStack_90 = 0;
      uStack_398 = &uStack_2e0;
      puStack_98 = &uStack_280;
      FUN_109a5c9ac(auStack_3b8,&uStack_3a0,&puStack_88,auStack_a0,uVar15 | param_5 & 1 | uVar11);
      if (CONCAT44(uStack_1ac,uStack_1b0) != 0) {
        uVar16 = (ulong)uStack_1bc;
        if ((int)uStack_1bc < 3) {
          lVar12 = (long)iStack_1b4 * (long)iStack_1b8;
        }
        else {
          lVar12 = 1;
          piVar17 = piStack_180;
          do {
            lVar12 = lVar12 * *piVar17;
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 1;
          } while (uVar16 != 0);
        }
        if (lVar12 != 0) {
          if ((param_5 >> 1 & 1) == 0) {
            if (CONCAT44(uStack_1ac,uStack_1b0) != CONCAT44(uStack_32c,uStack_330)) {
              if (piStack_180[1] != piStack_300[1] || *piStack_180 != *piStack_300) {
                puVar10 = (undefined4 *)0x20;
                func_0x000107c2ae8c();
                *puVar10 = 1;
                uStack_3a0 = puVar10 + 1;
                uStack_398 = (uint *)0x18;
                *(undefined1 *)(puVar10 + 7) = 0;
                *(undefined8 *)(puVar10 + 3) = 0x2e647673203d3d20;
                *(undefined8 *)(puVar10 + 1) = 0x2928657a69732e75;
                *(undefined8 *)(puVar10 + 5) = 0x2928657a69732e75;
                FUN_109ac3188(0xffffff29,&uStack_3a0,&UNK_10f597263,&UNK_10f596e57,0x661);
                goto LAB_109a5ebc8;
              }
              uStack_3a0._0_4_ = 0x2010000;
              uStack_398 = &uStack_1c0;
              lStack_390 = 0;
              FUN_109a479a0(&uStack_340,&uStack_3a0);
            }
          }
          else {
            uStack_3a0._0_4_ = 0x1010000;
            uStack_398 = (uint *)&uStack_340;
            lStack_390 = 0;
            puStack_88 = (undefined4 *)CONCAT44(puStack_88._4_4_,0x2010000);
            puStack_80 = &uStack_1c0;
            uStack_78 = 0;
            FUN_109a895d0(&uStack_3a0,&puStack_88);
          }
        }
      }
      if (CONCAT44(uStack_20c,uStack_210) == 0) {
LAB_109a5e650:
        if (lStack_150 != CONCAT44(uStack_2cc,uStack_2d0)) {
          if (piStack_120[1] == piStack_2a0[1] && *piStack_120 == *piStack_2a0) {
            uStack_3a0._0_4_ = 0x2010000;
            uStack_398 = &uStack_160;
            lStack_390 = 0;
            FUN_109a479a0(&uStack_2e0,&uStack_3a0);
          }
          else {
            uStack_398 = (uint *)0x0;
            uStack_3a0._0_4_ = 0;
            uStack_3a0._4_4_ = 0;
            lStack_388 = 0;
            lStack_390 = 0;
            FUN_109a48880(&uStack_160,&uStack_3a0);
            FUN_109a856e8(&uStack_3a0,&uStack_160,0);
            puStack_88 = (undefined4 *)CONCAT44(puStack_88._4_4_,0x2010000);
            uStack_78 = 0;
            puStack_80 = (uint *)&uStack_3a0;
            FUN_109a479a0(&uStack_2e0,&puStack_88);
            lVar12 = uStack_2c0;
            lVar7 = uStack_2b8;
            if (lStack_368 != 0) {
              piVar17 = (int *)(lStack_368 + 0x14);
              do {
                iVar2 = *piVar17;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar6) {
                  *piVar17 = iVar2 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar2 + -1 == 0) {
                func_0x000109a848d4(&uStack_3a0);
                lVar12 = uStack_2c0;
                lVar7 = uStack_2b8;
              }
            }
            lStack_368 = 0;
            lStack_388 = 0;
            lStack_390 = 0;
            uStack_378 = 0;
            uStack_380 = 0;
            if (0 < (int)uStack_3a0._4_4_) {
              lVar14 = 0;
              do {
                piStack_360[lVar14] = 0;
                lVar14 = lVar14 + 1;
              } while (lVar14 < (int)uStack_3a0._4_4_);
            }
            uStack_2c0 = lVar12;
            uStack_2b8 = lVar7;
            if (puStack_358 != &uStack_350 && puStack_358 != (undefined8 *)0x0) {
              _free(puStack_358[-1]);
            }
          }
        }
        FUN_109a60768(&uStack_340);
        lVar12 = uStack_2c0;
        lVar7 = uStack_2b8;
        if (lStack_1e8 != 0) {
          piVar17 = (int *)(lStack_1e8 + 0x14);
          do {
            iVar2 = *piVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = iVar2 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_220);
            lVar12 = uStack_2c0;
            lVar7 = uStack_2b8;
          }
        }
        lStack_1e8 = 0;
        uStack_208 = 0;
        uStack_204 = 0;
        uStack_210 = 0;
        uStack_20c = 0;
        uStack_1f8 = 0;
        uStack_1f4 = 0;
        uStack_200 = 0;
        uStack_1fc = 0;
        if (0 < (int)uStack_21c) {
          lVar14 = 0;
          do {
            piStack_1e0[lVar14] = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < (int)uStack_21c);
        }
        uStack_2c0 = lVar12;
        uStack_2b8 = lVar7;
        if (puStack_1d8 != &uStack_1d0 && puStack_1d8 != (undefined8 *)0x0) {
          _free(puStack_1d8[-1]);
        }
        if (lStack_188 != 0) {
          piVar17 = (int *)(lStack_188 + 0x14);
          do {
            iVar2 = *piVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = iVar2 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_1c0);
          }
        }
        lStack_188 = 0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        uStack_198 = 0;
        uStack_194 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        if (0 < (int)uStack_1bc) {
          lVar12 = 0;
          do {
            piStack_180[lVar12] = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < (int)uStack_1bc);
        }
        if (puStack_178 != &uStack_170 && puStack_178 != (undefined8 *)0x0) {
          _free(puStack_178[-1]);
        }
        if (lStack_128 != 0) {
          piVar17 = (int *)(lStack_128 + 0x14);
          do {
            iVar2 = *piVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = iVar2 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_160);
          }
        }
        lStack_128 = 0;
        uStack_148 = 0;
        lStack_150 = 0;
        lStack_138 = 0;
        lStack_140 = 0;
        if (0 < iStack_15c) {
          lVar12 = 0;
          do {
            piStack_120[lVar12] = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < iStack_15c);
        }
        if (puStack_118 != auStack_110 && puStack_118 != (ulong *)0x0) {
          _free(puStack_118[-1]);
        }
        if (lStack_c8 != 0) {
          piVar17 = (int *)(lStack_c8 + 0x14);
          do {
            iVar2 = *piVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = iVar2 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_100);
          }
        }
        lStack_c8 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        if (0 < iStack_fc) {
          lVar12 = 0;
          do {
            *(undefined4 *)(lStack_c0 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < iStack_fc);
        }
        if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_b8 + -8));
        }
        return;
      }
      uVar16 = (ulong)uStack_21c;
      if ((int)uStack_21c < 3) {
        lVar12 = (long)iStack_214 * (long)iStack_218;
      }
      else {
        lVar12 = 1;
        piVar17 = piStack_1e0;
        do {
          lVar12 = lVar12 * *piVar17;
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 1;
        } while (uVar16 != 0);
      }
      if (lVar12 == 0) goto LAB_109a5e650;
      if ((param_5 >> 2 & 1) == 0) {
        lStack_390 = 0;
        uStack_3a0._0_4_ = 0x1010000;
        puStack_88 = (undefined4 *)CONCAT44(puStack_88._4_4_,0x2010000);
        puStack_80 = &uStack_220;
        uStack_78 = 0;
        uStack_398 = &uStack_280;
        FUN_109a895d0(&uStack_3a0,&puStack_88);
        goto LAB_109a5e650;
      }
      if (CONCAT44(uStack_20c,uStack_210) == CONCAT44(uStack_26c,uStack_270)) goto LAB_109a5e650;
      if (piStack_1e0[1] == piStack_240[1] && *piStack_1e0 == *piStack_240) {
        uStack_3a0._0_4_ = 0x2010000;
        uStack_398 = &uStack_220;
        lStack_390 = 0;
        FUN_109a479a0(&uStack_280,&uStack_3a0);
        goto LAB_109a5e650;
      }
      puVar10 = (undefined4 *)0x20;
      func_0x000107c2ae8c();
      *puVar10 = 1;
      uStack_3a0 = puVar10 + 1;
      uStack_398 = (uint *)0x19;
      *(undefined1 *)((long)puVar10 + 0x1d) = 0;
      *(undefined8 *)(puVar10 + 3) = 0x2e647673203d3d20;
      *(undefined8 *)(puVar10 + 1) = 0x2928657a69732e76;
      *(undefined8 *)((long)puVar10 + 0x15) = 0x2928657a69732e74;
      *(undefined8 *)((long)puVar10 + 0xd) = 0x762e647673203d3d;
      FUN_109ac3188(0xffffff29,&uStack_3a0,&UNK_10f597263,&UNK_10f596e57,0x66c);
      goto LAB_109a5ebc8;
    }
  }
  puVar10 = (undefined4 *)0x94;
  func_0x000107c2ae8c();
  *puVar10 = 1;
  uStack_340 = puVar10 + 1;
  iStack_338 = 0x8d;
  iStack_334 = 0;
  *(undefined8 *)(puVar10 + 0x17) = 0x7663203d3d202928;
  *(undefined8 *)(puVar10 + 0x15) = 0x657a69732e77207c;
  *(undefined8 *)(puVar10 + 0x1b) = 0x7c20296d6e202c6d;
  *(undefined8 *)(puVar10 + 0x19) = 0x6e28657a69533a3a;
  *(undefined8 *)(puVar10 + 0x1f) = 0x7663203d3d202928;
  *(undefined8 *)(puVar10 + 0x1d) = 0x657a69732e77207c;
  *(undefined8 *)((long)puVar10 + 0x89) = 0x29296d202c6e2865;
  *(undefined8 *)((long)puVar10 + 0x81) = 0x7a69533a3a766320;
  *(undefined8 *)(puVar10 + 7) = 0x3d3d202928657a69;
  *(undefined8 *)(puVar10 + 5) = 0x732e772820262620;
  *(undefined8 *)(puVar10 + 0xb) = 0x2029312c6d6e2865;
  *(undefined8 *)(puVar10 + 9) = 0x7a69533a3a766320;
  *(undefined8 *)(puVar10 + 0xf) = 0x63203d3d20292865;
  *(undefined8 *)(puVar10 + 0xd) = 0x7a69732e77207c7c;
  *(undefined8 *)(puVar10 + 0x13) = 0x7c20296d6e202c31;
  *(undefined8 *)(puVar10 + 0x11) = 0x28657a69533a3a76;
  *(undefined1 *)((long)puVar10 + 0x91) = 0;
  *(undefined8 *)(puVar10 + 3) = 0x65707974203d3d20;
  *(undefined8 *)(puVar10 + 1) = 0x2928657079742e77;
  FUN_109ac3188(0xffffff29,&uStack_340,&UNK_10f597263,&UNK_10f596e57,0x63f);
LAB_109a5ebc8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109a5ebcc);
  (*pcVar9)();
}



/* Entry: 109a5ed38; end: 109a606ab;  */

void FUN_109a5ed38(long param_1,ulong param_2,long param_3,undefined4 *param_4,ulong param_5,
                  uint param_6,long param_7)

{
  float *pfVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  int *piVar22;
  int *piVar23;
  long lVar24;
  undefined4 *puVar25;
  ulong uVar26;
  undefined4 *puVar27;
  uint uVar28;
  undefined4 *puVar29;
  ulong uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  if (param_4 == (undefined4 *)0x0) {
    if ((int)param_6 < 1) {
      return;
    }
    piVar22 = (int *)(param_7 + 3U & 0xfffffffffffffffc);
    piVar23 = piVar22 + param_6;
  }
  else {
    if ((int)param_6 < 1) {
      return;
    }
    puVar29 = param_4;
    puVar25 = param_4;
    uVar26 = (ulong)param_6;
    do {
      _bzero(puVar25,(ulong)param_6 << 2);
      *puVar29 = 0x3f800000;
      puVar29 = (undefined4 *)((long)puVar29 + (param_5 & 0xfffffffffffffffc) + 4);
      puVar25 = (undefined4 *)((long)puVar25 + (param_5 & 0xfffffffffffffffc));
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
    piVar22 = (int *)(param_7 + 3U & 0xfffffffffffffffc);
    piVar23 = piVar22 + param_6;
    param_5 = param_5 >> 2;
  }
  uVar30 = (ulong)param_6;
  uVar26 = 0;
  param_2 = param_2 >> 2;
  uVar21 = (ulong)(param_6 - 1);
  pfVar7 = (float *)(param_1 + 8);
  lVar24 = param_2 * 4;
  pfVar1 = (float *)(param_1 + param_2 * 4);
  uVar6 = 2;
  pfVar8 = pfVar1;
  do {
    *(undefined4 *)(param_3 + uVar26 * 4) = *(undefined4 *)(param_1 + uVar26 * (param_2 + 1) * 4);
    if (uVar26 < uVar21) {
      uVar12 = uVar26 + 1;
      if ((int)uVar26 + 2 < (int)param_6) {
        fVar31 = ABS(*(float *)(param_1 + uVar26 * param_2 * 4 + uVar12 * 4));
        pfVar16 = pfVar7;
        uVar19 = uVar6;
        do {
          uVar5 = (uint)uVar19;
          fVar33 = ABS(*pfVar16);
          if (ABS(*pfVar16) <= fVar31) {
            uVar5 = (uint)uVar12;
            fVar33 = fVar31;
          }
          fVar31 = fVar33;
          uVar12 = (ulong)uVar5;
          uVar19 = uVar19 + 1;
          pfVar16 = pfVar16 + 1;
        } while (uVar30 != uVar19);
      }
      piVar22[uVar26] = (int)uVar12;
    }
    if (uVar26 != 0) {
      if (uVar26 == 1) {
        iVar11 = 0;
      }
      else {
        fVar31 = ABS(*(float *)(param_1 + uVar26 * 4));
        uVar12 = 1;
        pfVar16 = pfVar8;
        iVar10 = 0;
        do {
          iVar11 = (int)uVar12;
          fVar33 = ABS(*pfVar16);
          if (ABS(*pfVar16) <= fVar31) {
            iVar11 = iVar10;
            fVar33 = fVar31;
          }
          fVar31 = fVar33;
          uVar12 = uVar12 + 1;
          pfVar16 = pfVar16 + param_2;
          iVar10 = iVar11;
        } while (uVar26 != uVar12);
      }
      piVar23[uVar26] = iVar11;
    }
    uVar26 = uVar26 + 1;
    uVar6 = uVar6 + 1;
    pfVar7 = pfVar7 + param_2 + 1;
    pfVar8 = pfVar8 + 1;
  } while (uVar26 != uVar30);
  if ((param_6 - 1 == 0) || (iVar10 = param_6 * param_6 * 0x1e, iVar10 == 0)) {
    if (param_6 == 1) {
      return;
    }
  }
  else {
    iVar11 = 0;
    do {
      uVar26 = (ulong)*piVar22;
      fVar31 = ABS(*(float *)(param_1 + uVar26 * 4));
      if (param_6 < 3) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        uVar26 = 1;
        pfVar7 = pfVar1;
        do {
          uVar5 = (uint)uVar26;
          fVar33 = ABS(pfVar7[piVar22[uVar26]]);
          if (ABS(pfVar7[piVar22[uVar26]]) <= fVar31) {
            uVar5 = (uint)uVar6;
            fVar33 = fVar31;
          }
          fVar31 = fVar33;
          uVar6 = (ulong)uVar5;
          uVar26 = uVar26 + 1;
          pfVar7 = pfVar7 + param_2;
        } while (uVar21 != uVar26);
        uVar26 = (ulong)(uint)piVar22[(int)uVar5];
      }
      uVar12 = 1;
      do {
        uVar28 = piVar23[uVar12];
        fVar33 = ABS(*(float *)(param_1 + lVar24 * (int)uVar28 + uVar12 * 4));
        bVar4 = fVar33 <= fVar31;
        uVar5 = (uint)uVar12;
        if (bVar4) {
          uVar5 = (uint)uVar26;
          fVar33 = fVar31;
        }
        fVar31 = fVar33;
        uVar26 = (ulong)uVar5;
        if (bVar4) {
          uVar28 = (uint)uVar6;
        }
        uVar6 = (ulong)uVar28;
        uVar12 = uVar12 + 1;
      } while (uVar30 != uVar12);
      lVar9 = (long)(int)uVar28;
      lVar17 = param_1 + param_2 * lVar9 * 4;
      fVar33 = *(float *)(lVar17 + (long)(int)uVar5 * 4);
      fVar31 = ABS(fVar33);
      if (fVar31 <= 1.1920929e-07) break;
      lVar13 = (long)(int)uVar5;
      fVar34 = (*(float *)(param_3 + lVar13 * 4) - *(float *)(param_3 + lVar9 * 4)) * 0.5;
      fVar35 = ABS(fVar34);
      if (fVar31 <= fVar35) {
        fVar36 = 0.0;
        if ((fVar34 != 0.0) && (!NAN(fVar34))) {
          fVar36 = fVar35 * SQRT((fVar31 / fVar35) * (fVar31 / fVar35) + 1.0);
        }
      }
      else {
        fVar36 = fVar31 * SQRT((fVar35 / fVar31) * (fVar35 / fVar31) + 1.0);
      }
      fVar35 = fVar35 + fVar36;
      fVar36 = ABS(fVar35);
      if (fVar31 <= fVar36) {
        fVar37 = 0.0;
        if ((fVar35 != 0.0) && (!NAN(fVar35))) {
          fVar37 = fVar36 * SQRT((fVar31 / fVar36) * (fVar31 / fVar36) + 1.0);
        }
      }
      else {
        fVar37 = fVar31 * SQRT((fVar36 / fVar31) * (fVar36 / fVar31) + 1.0);
      }
      fVar36 = fVar35 / fVar37;
      fVar31 = -(fVar33 * (fVar33 / fVar35));
      if (0.0 <= fVar34) {
        fVar31 = fVar33 * (fVar33 / fVar35);
      }
      *(undefined4 *)(lVar17 + lVar13 * 4) = 0;
      fVar35 = -(fVar33 / fVar37);
      if (0.0 <= fVar34) {
        fVar35 = fVar33 / fVar37;
      }
      *(float *)(param_3 + lVar9 * 4) = *(float *)(param_3 + lVar9 * 4) - fVar31;
      *(float *)(param_3 + lVar13 * 4) = fVar31 + *(float *)(param_3 + lVar13 * 4);
      lVar17 = param_1;
      if (0 < (int)uVar28) {
        do {
          fVar31 = *(float *)(lVar17 + lVar9 * 4);
          fVar33 = *(float *)(lVar17 + lVar13 * 4);
          *(float *)(lVar17 + lVar9 * 4) = -(fVar33 * fVar35) + fVar36 * fVar31;
          *(float *)(lVar17 + lVar13 * 4) = fVar36 * fVar33 + fVar35 * fVar31;
          uVar6 = uVar6 - 1;
          lVar17 = lVar17 + lVar24;
        } while (uVar6 != 0);
      }
      iVar15 = uVar28 + 1;
      if (iVar15 < (int)uVar5) {
        iVar14 = ~uVar28 + uVar5;
        pfVar7 = (float *)(param_1 + lVar24 * iVar15 + lVar13 * 4);
        pfVar8 = (float *)(param_1 + lVar24 * lVar9 + (long)iVar15 * 4);
        do {
          fVar31 = *pfVar8;
          fVar33 = *pfVar7;
          *pfVar8 = -(fVar33 * fVar35) + fVar36 * fVar31;
          *pfVar7 = fVar36 * fVar33 + fVar35 * fVar31;
          pfVar7 = pfVar7 + param_2;
          iVar14 = iVar14 + -1;
          pfVar8 = pfVar8 + 1;
        } while (iVar14 != 0);
      }
      iVar15 = uVar5 + 1;
      if (iVar15 < (int)param_6) {
        iVar14 = (param_6 - 1) - uVar5;
        pfVar7 = (float *)(param_1 + lVar24 * lVar13 + (long)iVar15 * 4);
        pfVar8 = (float *)(param_1 + lVar24 * lVar9 + (long)iVar15 * 4);
        do {
          fVar31 = *pfVar8;
          fVar33 = *pfVar7;
          *pfVar8 = -(fVar33 * fVar35) + fVar36 * fVar31;
          *pfVar7 = fVar36 * fVar33 + fVar35 * fVar31;
          iVar14 = iVar14 + -1;
          pfVar7 = pfVar7 + 1;
          pfVar8 = pfVar8 + 1;
        } while (iVar14 != 0);
      }
      if (param_4 != (undefined4 *)0x0) {
        pfVar7 = (float *)(param_4 + param_5 * lVar9);
        pfVar8 = (float *)(param_4 + param_5 * lVar13);
        uVar26 = uVar30;
        do {
          fVar31 = *pfVar7;
          fVar33 = *pfVar8;
          *pfVar7 = -(fVar33 * fVar35) + fVar36 * fVar31;
          *pfVar8 = fVar36 * fVar33 + fVar35 * fVar31;
          uVar26 = uVar26 - 1;
          pfVar7 = pfVar7 + 1;
          pfVar8 = pfVar8 + 1;
        } while (uVar26 != 0);
      }
      bVar4 = true;
      do {
        bVar3 = bVar4;
        uVar2 = uVar28;
        if (!bVar3) {
          uVar2 = uVar5;
        }
        uVar26 = (ulong)uVar2;
        if ((int)uVar2 < (int)(param_6 - 1)) {
          lVar17 = (long)(int)uVar2;
          uVar6 = lVar17 + 1;
          uVar20 = uVar2 + 2;
          if ((int)uVar20 < (int)param_6) {
            fVar31 = ABS(*(float *)(param_1 + param_2 * lVar17 * 4 + uVar6 * 4));
            pfVar7 = (float *)(param_1 + lVar24 * lVar17 + (long)(int)uVar20 * 4);
            do {
              uVar18 = uVar20;
              fVar33 = ABS(*pfVar7);
              if (ABS(*pfVar7) <= fVar31) {
                uVar18 = (uint)uVar6;
                fVar33 = fVar31;
              }
              fVar31 = fVar33;
              uVar6 = (ulong)uVar18;
              uVar20 = uVar20 + 1;
              pfVar7 = pfVar7 + 1;
            } while (param_6 != uVar20);
          }
          piVar22[lVar17] = (int)uVar6;
        }
        if (0 < (int)uVar2) {
          if (uVar2 == 1) {
            iVar14 = 0;
          }
          else {
            fVar31 = ABS(*(float *)(param_1 + uVar26 * 4));
            pfVar7 = pfVar1 + uVar26;
            uVar6 = 1;
            iVar15 = 0;
            do {
              iVar14 = (int)uVar6;
              fVar33 = ABS(*pfVar7);
              if (ABS(*pfVar7) <= fVar31) {
                iVar14 = iVar15;
                fVar33 = fVar31;
              }
              fVar31 = fVar33;
              uVar6 = uVar6 + 1;
              pfVar7 = pfVar7 + param_2;
              iVar15 = iVar14;
            } while (uVar26 != uVar6);
          }
          piVar23[uVar26] = iVar14;
        }
        bVar4 = false;
      } while (bVar3);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar10);
  }
  uVar6 = 0;
  uVar26 = 1;
  puVar29 = param_4;
  uVar12 = uVar26;
  uVar19 = uVar6;
  do {
    do {
      uVar5 = (uint)uVar26;
      if (*(float *)(param_3 + uVar26 * 4) <= *(float *)(param_3 + (long)(int)(uint)uVar6 * 4)) {
        uVar5 = (uint)uVar6;
      }
      uVar6 = (ulong)uVar5;
      uVar26 = uVar26 + 1;
    } while (uVar30 != uVar26);
    if (uVar19 != uVar6) {
      uVar32 = *(undefined4 *)(param_3 + (long)(int)uVar5 * 4);
      *(undefined4 *)(param_3 + (long)(int)uVar5 * 4) = *(undefined4 *)(param_3 + uVar19 * 4);
      *(undefined4 *)(param_3 + uVar19 * 4) = uVar32;
      if (param_4 != (undefined4 *)0x0) {
        puVar25 = param_4 + param_5 * (long)(int)uVar5;
        puVar27 = puVar29;
        uVar26 = uVar30;
        do {
          uVar32 = *puVar25;
          *puVar25 = *puVar27;
          *puVar27 = uVar32;
          uVar26 = uVar26 - 1;
          puVar25 = puVar25 + 1;
          puVar27 = puVar27 + 1;
        } while (uVar26 != 0);
      }
    }
    uVar6 = uVar19 + 1;
    uVar26 = uVar12 + 1;
    puVar29 = puVar29 + param_5;
    uVar12 = uVar26;
    uVar19 = uVar6;
  } while (uVar6 != uVar21);
  return;
}



/* Entry: 109a606ac; end: 109a60767;  */

void FUN_109a606ac(uint param_1,uint param_2,long param_3,ulong param_4,long param_5,int param_6,
                  long param_7,ulong param_8)

{
  double *pdVar1;
  double *pdVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  if (0 < (int)param_1) {
    uVar3 = 0;
    do {
      dVar6 = *(double *)(param_5 + uVar3 * (long)param_6 * 8);
      if ((int)param_2 < 4) {
        uVar4 = 0;
      }
      else {
        lVar5 = 0;
        uVar4 = 0;
        do {
          pdVar1 = (double *)(param_7 + lVar5);
          pdVar2 = (double *)(param_3 + lVar5);
          dVar7 = *pdVar2;
          pdVar1[1] = pdVar1[1] + pdVar2[1] * dVar6;
          *pdVar1 = *pdVar1 + dVar7 * dVar6;
          dVar7 = pdVar2[2];
          pdVar1[3] = pdVar1[3] + pdVar2[3] * dVar6;
          pdVar1[2] = pdVar1[2] + dVar7 * dVar6;
          uVar4 = uVar4 + 4;
          lVar5 = lVar5 + 0x20;
        } while ((long)uVar4 <= (long)(int)(param_2 - 4));
        uVar4 = uVar4 & 0xffffffff;
      }
      if ((int)uVar4 < (int)param_2) {
        do {
          *(double *)(param_7 + uVar4 * 8) =
               *(double *)(param_7 + uVar4 * 8) + *(double *)(param_3 + uVar4 * 8) * dVar6;
          uVar4 = uVar4 + 1;
        } while (param_2 != uVar4);
      }
      uVar3 = uVar3 + 1;
      param_3 = param_3 + (-(param_4 >> 0x1f & 1) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3
                          );
      param_7 = param_7 + (-(param_8 >> 0x1f & 1) & 0xfffffff800000000 | (param_8 & 0xffffffff) << 3
                          );
    } while (uVar3 != param_1);
  }
  return;
}



/* Entry: 109a60768; end: 109a608fb;  */

long FUN_109a60768(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0xf8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xf8) + 0x14);
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
      func_0x000109a848d4(param_1 + 0xc0);
    }
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x100);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc4));
  }
  lVar5 = *(long *)(param_1 + 0x108);
  if (lVar5 != param_1 + 0x110 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109a608fc; end: 109a60a83;  */

float FUN_109a608fc(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ABS(param_2);
  fVar2 = ABS(param_1);
  if (fVar2 <= fVar1) {
    fVar2 = fVar2 / (fVar1 + 2.220446e-16);
    fVar1 = fVar2 * fVar2;
    fVar2 = fVar2 * (fVar1 * (fVar1 * (fVar1 * -2.5397246 + 8.9140005) + -18.667446) + 57.283627);
  }
  else {
    fVar1 = fVar1 / (fVar2 + 2.220446e-16);
    fVar2 = fVar1 * fVar1;
    fVar2 = 90.0 - fVar1 * (fVar2 * (fVar2 * (fVar2 * -2.5397246 + 8.9140005) + -18.667446) +
                           57.283627);
  }
  fVar1 = 180.0 - fVar2;
  if (0.0 <= param_2) {
    fVar1 = fVar2;
  }
  fVar2 = 360.0 - fVar1;
  if (0.0 <= param_1) {
    fVar2 = fVar1;
  }
  return fVar2;
}



/* Entry: 109a60a84; end: 109a60ed3;  */

/* WARNING: Removing unreachable block (ram,0x000109a8e898) */
/* WARNING: Removing unreachable block (ram,0x000109a8e89c) */
/* WARNING: Removing unreachable block (ram,0x000109a8e8a4) */
/* WARNING: Removing unreachable block (ram,0x000109a8e8ac) */
/* WARNING: Removing unreachable block (ram,0x000109a8e8b0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109a60a84(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  double *******pppppppdVar4;
  undefined8 *puVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 *puVar18;
  undefined8 **ppuVar19;
  long *plVar20;
  undefined8 **ppuVar21;
  long *plVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  uint *extraout_x8;
  double *pdVar30;
  long lVar31;
  int *piVar32;
  ulong uVar33;
  ulong uVar34;
  ulong *puVar35;
  ulong uVar36;
  ulong uVar37;
  long *plVar38;
  undefined8 **ppuVar39;
  double *******pppppppdVar40;
  double *pdVar41;
  int iVar42;
  undefined1 *unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  uint uVar43;
  undefined8 unaff_x28;
  float fVar44;
  float fVar45;
  double dVar46;
  double ******ppppppdVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  double *******pppppppdStack_740;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined4 uStack_718;
  ulong uStack_710;
  undefined8 uStack_708;
  undefined4 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  double *******pppppppdStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  undefined8 *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  double *******pppppppdStack_630;
  double *******pppppppdStack_628;
  double *******pppppppdStack_620;
  double *******pppppppdStack_618;
  undefined4 *puStack_588;
  undefined8 uStack_580;
  undefined8 *puStack_578;
  undefined8 uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long alStack_4c0 [33];
  ulong auStack_3b8 [31];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  double *******pppppppdStack_218;
  double *pdStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined4 auStack_1f8 [12];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar17 = (uint *)&uStack_170;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_1;
  FUN_109a8b904(param_1,0xffffffff);
  puVar16 = param_1;
  FUN_109a8b904(param_1,0xffffffff);
  uVar27 = (uint)puVar16 & 7;
  puVar16 = param_1;
  FUN_109a8b904(param_1,0xffffffff);
  if (1 < uVar27 - 5) {
    puVar18 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar18 = 1;
    uStack_d0 = puVar18 + 1;
    uStack_c8 = 0x22;
    *(undefined8 *)(puVar18 + 3) = 0x204632335f564320;
    *(undefined8 *)(puVar18 + 1) = 0x3d3d206874706564;
    *(undefined1 *)((long)puVar18 + 0x26) = 0;
    *(undefined2 *)(puVar18 + 9) = 0x4634;
    *(undefined8 *)(puVar18 + 7) = 0x365f5643203d3d20;
    *(undefined8 *)(puVar18 + 5) = 0x6874706564207c7c;
    FUN_109ac3188(0xffffff29,&uStack_d0,"exp",&UNK_10f5972ca,0x317);
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x109a60e60);
    (*pcVar11)();
  }
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar23 = *(ulong **)(param_1 + 2);
    uStack_90 = (ulong)&uStack_d0 | 8;
    uStack_d0 = (undefined4 *)*puVar23;
    uStack_c8 = puVar23[1];
    uStack_b8 = puVar23[3];
    uStack_c0 = puVar23[2];
    uStack_b0 = puVar23[4];
    uStack_a8 = puVar23[5];
    uStack_98 = puVar23[7];
    uStack_a0 = puVar23[6];
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    if (puVar23[7] != 0) {
      piVar32 = (int *)(puVar23[7] + 0x14);
      do {
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
        if (bVar12) {
          *piVar32 = *piVar32 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (*(int *)((long)puVar23 + 4) < 3) {
      uStack_80 = *(undefined8 *)puVar23[9];
      uStack_78 = ((undefined8 *)puVar23[9])[1];
    }
    else {
      uStack_d0 = (undefined4 *)((ulong)uStack_d0 & 0xffffffff);
      func_0x000109a84868(&uStack_d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_d0,param_1,0xffffffff);
  }
  FUN_109a8727c(param_2,uStack_d0._4_4_,uStack_90,puVar15,0xffffffff,0,0);
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar23 = *(ulong **)(param_2 + 2);
    uStack_f0 = (ulong)&uStack_130 | 8;
    uStack_130 = *puVar23;
    uStack_128 = puVar23[1];
    uStack_118 = puVar23[3];
    uStack_120 = puVar23[2];
    uStack_110 = puVar23[4];
    uStack_108 = puVar23[5];
    uStack_f8 = puVar23[7];
    uStack_100 = puVar23[6];
    puStack_e8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    if (puVar23[7] != 0) {
      piVar32 = (int *)(puVar23[7] + 0x14);
      do {
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
        if (bVar12) {
          *piVar32 = *piVar32 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (*(int *)((long)puVar23 + 4) < 3) {
      uStack_e0 = *(undefined8 *)puVar23[9];
      uStack_d8 = ((undefined8 *)puVar23[9])[1];
    }
    else {
      uStack_130 = uStack_130 & 0xffffffff;
      func_0x000109a84868(&uStack_130);
    }
  }
  else {
    FUN_109a8a180(&uStack_130,param_2,0xffffffff);
  }
  puStack_60 = &uStack_d0;
  puStack_58 = &uStack_130;
  uStack_50 = 0;
  uStack_138 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  ppuVar19 = &puStack_60;
  FUN_109a9b368(&uStack_170,ppuVar19,0,&uStack_70,0xffffffff);
  iVar42 = (((uint)puVar16 >> 3 & 0x1ff) + 1) * (int)uStack_148;
  uVar37 = 0xffffffffffffffff;
  while (uVar37 = uVar37 + 1, uVar37 < uStack_150) {
    ppuVar19 = ppuStack_68;
    if (uVar27 == 5) {
      func_0x000109a64384(uStack_70,ppuStack_68,iVar42);
    }
    else {
      func_0x000109a64688(uStack_70,ppuStack_68,iVar42);
    }
    puVar17 = (uint *)&uStack_170;
    FUN_109a8350c();
  }
  if (uStack_f8 != 0) {
    piVar32 = (int *)(uStack_f8 + 0x14);
    do {
      iVar42 = *piVar32;
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar12) {
        *piVar32 = iVar42 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar42 + -1 == 0) {
      puVar17 = (uint *)&uStack_130;
      func_0x000109a848d4();
    }
  }
  uStack_f8 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (0 < uStack_130._4_4_) {
    lVar28 = 0;
    do {
      *(undefined4 *)(uStack_f0 + lVar28 * 4) = 0;
      lVar28 = lVar28 + 1;
    } while (lVar28 < uStack_130._4_4_);
  }
  if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_e8[-1];
    _free();
  }
  if (uStack_98 != 0) {
    piVar32 = (int *)(uStack_98 + 0x14);
    do {
      iVar42 = *piVar32;
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar12) {
        *piVar32 = iVar42 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar42 + -1 == 0) {
      puVar17 = (uint *)&uStack_d0;
      func_0x000109a848d4();
    }
  }
  uStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (0 < uStack_d0._4_4_) {
    lVar28 = 0;
    do {
      *(undefined4 *)(uStack_90 + lVar28 * 4) = 0;
      lVar28 = lVar28 + 1;
    } while (lVar28 < uStack_d0._4_4_);
  }
  if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
    puVar17 = (uint *)puStack_88[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar19 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_d0);
  }
  dVar46 = (double)__Unwind_Resume();
  auStack_1f8[6] = (undefined4)unaff_d9;
  auStack_1f8[7] = (undefined4)((ulong)unaff_d9 >> 0x20);
  auStack_1f8[8] = (undefined4)unaff_d8;
  auStack_1f8[9] = (undefined4)((ulong)unaff_d8 >> 0x20);
  auStack_1f8[10] = (undefined4)unaff_x28;
  auStack_1f8[0xb] = (undefined4)((ulong)unaff_x28 >> 0x20);
  auStack_1f8[2] = (undefined4)*(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  auStack_1f8[3] = (undefined4)((ulong)*(undefined8 *)PTR____stack_chk_guard_11034bdc0 >> 0x20);
  puVar15 = puVar17;
  FUN_109a8b904();
  uVar13 = (uint)puVar15;
  uVar27 = uVar13 & 7;
  iVar42 = (int)(long)(double)(long)dVar46;
  if (2.220446049250313e-16 <= ABS((double)iVar42 - dVar46)) {
    if (uVar27 - 5 < 2) {
LAB_109a60fd8:
      if ((*puVar17 & 0x1f0000) == 0x10000) {
        puVar23 = *(ulong **)(puVar17 + 2);
        uStack_650 = (ulong)&uStack_690 | 8;
        uStack_690 = *puVar23;
        pppppppdStack_688 = (double *******)puVar23[1];
        uStack_678 = puVar23[3];
        uStack_680 = puVar23[2];
        uStack_670 = puVar23[4];
        uStack_668 = puVar23[5];
        uStack_658 = puVar23[7];
        uStack_660 = puVar23[6];
        puStack_648 = &uStack_640;
        uStack_640 = 0;
        uStack_638 = 0;
        if (puVar23[7] != 0) {
          piVar32 = (int *)(puVar23[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
            if (bVar12) {
              *piVar32 = *piVar32 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(int *)((long)puVar23 + 4) < 3) {
          uStack_640 = *(undefined8 *)puVar23[9];
          uStack_638 = ((undefined8 *)puVar23[9])[1];
        }
        else {
          uStack_690 = uStack_690 & 0xffffffff;
          func_0x000109a84868(&uStack_690);
        }
      }
      else {
        FUN_109a8a180(&uStack_690,puVar17,0xffffffff);
      }
      FUN_109a8727c(ppuVar19,uStack_690._4_4_,uStack_650,puVar15,0xffffffff,0,0);
      if (((ulong)*ppuVar19 & 0x1f0000) == 0x10000) {
        puVar23 = ppuVar19[1];
        uStack_6b0 = (ulong)&uStack_6f0 | 8;
        uStack_6f0 = *puVar23;
        uStack_6e8 = puVar23[1];
        uStack_6d8 = puVar23[3];
        uStack_6e0 = puVar23[2];
        uStack_6d0 = puVar23[4];
        uStack_6c8 = puVar23[5];
        uStack_6b8 = puVar23[7];
        uStack_6c0 = puVar23[6];
        puStack_6a8 = &uStack_6a0;
        uStack_6a0 = 0;
        uStack_698 = 0;
        if (puVar23[7] != 0) {
          piVar32 = (int *)(puVar23[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
            if (bVar12) {
              *piVar32 = *piVar32 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(int *)((long)puVar23 + 4) < 3) {
          uStack_6a0 = *(undefined8 *)puVar23[9];
          uStack_698 = ((undefined8 *)puVar23[9])[1];
        }
        else {
          uStack_6f0 = uStack_6f0 & 0xffffffff;
          func_0x000109a84868(&uStack_6f0);
        }
      }
      else {
        FUN_109a8a180(&uStack_6f0,ppuVar19,0xffffffff);
      }
      puStack_208 = &uStack_690;
      uStack_200 = &uStack_6f0;
      auStack_1f8[0] = 0;
      auStack_1f8[1] = 0;
      uStack_6f8 = 0;
      uStack_728 = 0;
      uStack_720 = 0;
      uStack_730 = 0;
      uStack_718 = 0;
      uStack_710 = 0;
      uStack_708 = 0;
      uStack_700 = 0;
      FUN_109a9b368(&uStack_730,&puStack_208,0,&pppppppdStack_218,0xffffffff);
      uVar8 = uVar13 >> 3 & 0x1ff;
      uVar14 = uVar8 + 1;
      uVar6 = uVar14 * (int)uStack_708;
      if (2.220446049250313e-16 <= ABS((double)iVar42 - dVar46)) {
        if (2.220446049250313e-16 <= ABS(ABS(dVar46) + -0.5)) {
          uVar8 = uVar8 | 0x400;
          uVar43 = 0;
          if (uVar14 != 0) {
            uVar43 = uVar8 / uVar14;
          }
          uVar1 = uVar43 * uVar14;
          if ((int)uVar6 <= (int)(uVar43 * uVar14)) {
            uVar1 = uVar6;
          }
          uVar43 = 0x88442211U >> ((uStack_690 & 7) << 2) & 0xf;
          pppppppdStack_628 = (double *******)0x408;
          pppppppdStack_630 = (double *******)&pppppppdStack_620;
          if (uStack_680 == uStack_6e0) {
            pppppppdVar40 = (double *******)((long)(int)uVar43 * (long)(int)uVar1);
            pppppppdStack_740 = (double *******)&pppppppdStack_620;
            if ((double *******)0x408 < pppppppdVar40) {
              pppppppdStack_740 = pppppppdVar40;
              __Znam();
              pppppppdStack_630 = pppppppdStack_740;
            }
          }
          else {
            pppppppdStack_740 = (double *******)0x0;
            pppppppdVar40 = pppppppdStack_628;
          }
          pppppppdStack_628 = pppppppdVar40;
          uVar37 = 0;
          uVar13 = uVar13 >> 3 & 0x1ff | 0x400;
          uVar9 = 0;
          if (uVar14 != 0) {
            uVar9 = uVar13 / uVar14;
          }
          uVar13 = uVar13 - uVar9 * uVar14;
          uVar14 = uVar8 - uVar13;
          uVar8 = uVar8 - (uVar13 & 0xffff);
          uVar13 = uVar6;
          if ((int)uVar14 <= (int)uVar6) {
            uVar13 = uVar14;
          }
          for (; uVar37 < uStack_710; uVar37 = uVar37 + 1) {
            if (0 < (int)uVar6) {
              iVar42 = 0;
              uVar14 = uVar6;
              do {
                pdVar41 = pdStack_210;
                pppppppdVar40 = pppppppdStack_218;
                uVar9 = uVar1;
                if ((int)(uVar6 - iVar42) <= (int)uVar1) {
                  uVar9 = uVar6 - iVar42;
                }
                pppppppdVar4 = pppppppdStack_218;
                if (pppppppdStack_740 != (double *******)0x0) {
                  pppppppdVar4 = pppppppdStack_740;
                }
                if (uVar27 == 5) {
                  if (pppppppdVar4 != pppppppdStack_218) {
                    _memcpy(pppppppdVar4,pppppppdStack_218,(long)(int)uVar43 * (long)(int)uVar9);
                  }
                  func_0x000109a649e8(pppppppdVar4,pdVar41,uVar9);
                  if (0 < (int)uVar9) {
                    uVar2 = uVar14;
                    if ((int)uVar6 <= (int)uVar14) {
                      uVar2 = uVar6;
                    }
                    if ((int)uVar8 <= (int)uVar2) {
                      uVar2 = uVar8;
                    }
                    lVar28 = (ulong)uVar2 << 2;
                    pdVar30 = pdVar41;
                    do {
                      *(float *)pdVar30 = (float)(dVar46 * (double)*(float *)pdVar30);
                      lVar28 = lVar28 + -4;
                      pdVar30 = (double *)((long)pdVar30 + 4);
                    } while (lVar28 != 0);
                  }
                  func_0x000109a64384(pdVar41,pdVar41,uVar9);
                  if (0 < (int)uVar9) {
                    uVar2 = uVar14;
                    if ((int)uVar6 <= (int)uVar14) {
                      uVar2 = uVar6;
                    }
                    if ((int)uVar8 <= (int)uVar2) {
                      uVar2 = uVar8;
                    }
                    lVar28 = (ulong)uVar2 << 2;
                    do {
                      fVar44 = *(float *)pppppppdVar40;
                      if ((fVar44 <= 0.0) && ((dVar46 < 0.0 || (fVar44 != 0.0)))) {
                        fVar45 = NAN;
                        if (fVar44 == 0.0) {
                          fVar45 = INFINITY;
                        }
                        *(float *)pdVar41 = fVar45;
                      }
                      pdVar41 = (double *)((long)pdVar41 + 4);
                      lVar28 = lVar28 + -4;
                      pppppppdVar40 = (double *******)((long)pppppppdVar40 + 4);
                    } while (lVar28 != 0);
                  }
                }
                else {
                  if (pppppppdVar4 != pppppppdStack_218) {
                    _memcpy(pppppppdVar4,pppppppdStack_218,(long)(int)uVar43 * (long)(int)uVar9);
                  }
                  FUN_109a64c3c(pppppppdVar4,pdVar41,uVar9);
                  if (0 < (int)uVar9) {
                    uVar2 = uVar14;
                    if ((int)uVar6 <= (int)uVar14) {
                      uVar2 = uVar6;
                    }
                    if ((int)uVar8 <= (int)uVar2) {
                      uVar2 = uVar8;
                    }
                    lVar28 = (ulong)uVar2 << 3;
                    pdVar30 = pdVar41;
                    do {
                      *pdVar30 = dVar46 * *pdVar30;
                      lVar28 = lVar28 + -8;
                      pdVar30 = pdVar30 + 1;
                    } while (lVar28 != 0);
                  }
                  func_0x000109a64688(pdVar41,pdVar41,uVar9);
                  if (0 < (int)uVar9) {
                    uVar2 = uVar14;
                    if ((int)uVar6 <= (int)uVar14) {
                      uVar2 = uVar6;
                    }
                    if ((int)uVar8 <= (int)uVar2) {
                      uVar2 = uVar8;
                    }
                    lVar28 = (ulong)uVar2 << 3;
                    do {
                      ppppppdVar47 = *pppppppdVar40;
                      if (((double)ppppppdVar47 <= 0.0) &&
                         ((dVar46 < 0.0 || ((double)ppppppdVar47 != 0.0)))) {
                        dVar48 = NAN;
                        if ((double)ppppppdVar47 == 0.0) {
                          dVar48 = INFINITY;
                        }
                        *pdVar41 = dVar48;
                      }
                      pdVar41 = pdVar41 + 1;
                      lVar28 = lVar28 + -8;
                      pppppppdVar40 = pppppppdVar40 + 1;
                    } while (lVar28 != 0);
                  }
                }
                pppppppdStack_218 =
                     (double *******)
                     ((long)pppppppdStack_218 + (long)(int)uVar43 * (long)(int)uVar9);
                pdStack_210 = (double *)((long)pdStack_210 + (long)(int)uVar43 * (long)(int)uVar9);
                iVar42 = iVar42 + uVar1;
                uVar14 = uVar14 - uVar13;
              } while (iVar42 < (int)uVar6);
            }
            FUN_109a8350c(&uStack_730);
          }
          if ((double ********)pppppppdStack_630 != &pppppppdStack_620 &&
              pppppppdStack_630 != (double *******)0x0) {
            __ZdaPv();
          }
        }
        else {
          pcVar11 = FUN_109a61878;
          if (uVar27 != 5) {
            pcVar11 = (code *)0x109a6187c;
          }
          pcVar3 = (code *)0x109a618a8;
          if (uVar27 != 5) {
            pcVar3 = (code *)0x109a618ac;
          }
          if (0.0 <= dVar46) {
            pcVar11 = pcVar3;
          }
          uVar37 = 0xffffffffffffffff;
          while (uVar37 = uVar37 + 1, uVar37 < uStack_710) {
            (*pcVar11)(pppppppdStack_218,pdStack_210,uVar6);
            FUN_109a8350c(&uStack_730);
          }
        }
      }
      else {
        if (uVar27 == 7) {
          puVar18 = (undefined4 *)0x10;
          func_0x000107c2ae8c();
          pppppppdStack_630 = (double *******)(puVar18 + 1);
          *pppppppdStack_630 = (double ******)0x203d2120636e7566;
          *puVar18 = 1;
          pppppppdStack_628 = (double *******)0x9;
          *(undefined2 *)(puVar18 + 3) = 0x30;
          FUN_109ac3188(0xffffff29,&pppppppdStack_630,&DAT_10f3dd8e0,&UNK_10f5972ca,0x582);
          goto LAB_109a617a4;
        }
        pcVar11 = (code *)(&PTR_FUN_110b21c50)[uVar27];
        uVar37 = 0xffffffffffffffff;
        while (uVar37 = uVar37 + 1, uVar37 < uStack_710) {
          (*pcVar11)(pppppppdStack_218,pdStack_210,uVar6,(long)(double)(long)dVar46);
          FUN_109a8350c(&uStack_730);
        }
      }
      if (uStack_6b8 != 0) {
        piVar32 = (int *)(uStack_6b8 + 0x14);
        do {
          iVar42 = *piVar32;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
          if (bVar12) {
            *piVar32 = iVar42 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar42 + -1 == 0) {
          func_0x000109a848d4(&uStack_6f0);
        }
      }
      uStack_6b8 = 0;
      uStack_6d8 = 0;
      uStack_6e0 = 0;
      uStack_6c8 = 0;
      uStack_6d0 = 0;
      if (0 < (int)uStack_6f0._4_4_) {
        lVar28 = 0;
        do {
          *(undefined4 *)(uStack_6b0 + lVar28 * 4) = 0;
          lVar28 = lVar28 + 1;
        } while (lVar28 < (int)uStack_6f0._4_4_);
      }
      if (puStack_6a8 != &uStack_6a0 && puStack_6a8 != (undefined8 *)0x0) {
        _free(puStack_6a8[-1]);
      }
      if (uStack_658 != 0) {
        piVar32 = (int *)(uStack_658 + 0x14);
        do {
          iVar42 = *piVar32;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
          if (bVar12) {
            *piVar32 = iVar42 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar42 + -1 == 0) {
          func_0x000109a848d4(&uStack_690);
        }
      }
      uStack_658 = 0;
      uStack_678 = 0;
      uStack_680 = 0;
      uStack_668 = 0;
      uStack_670 = 0;
      if (0 < uStack_690._4_4_) {
        lVar28 = 0;
        do {
          *(undefined4 *)(uStack_650 + lVar28 * 4) = 0;
          lVar28 = lVar28 + 1;
        } while (lVar28 < uStack_690._4_4_);
      }
      if (puStack_648 != &uStack_640 && puStack_648 != (undefined8 *)0x0) {
        _free(puStack_648[-1]);
      }
      goto LAB_109a616a8;
    }
  }
  else {
    if (iVar42 == 2) {
      pppppppdStack_630 = (double *******)0x3ff0000000000000;
      FUN_109a91d90();
      FUN_109a293c4(puVar17,puVar17,ppuVar19,puVar15,0xffffffff,&PTR_FUN_1132e8c90,1,
                    &pppppppdStack_630);
LAB_109a616a8:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == CONCAT44(auStack_1f8[3],auStack_1f8[2])) {
        return;
      }
    }
    else {
      if (iVar42 != 1) {
        if (iVar42 != 0) goto LAB_109a60fd8;
        FUN_109a8d1f0(puVar17,&pppppppdStack_630,0xffffffff);
        FUN_109a8727c(ppuVar19,puVar17,&pppppppdStack_630,puVar15,0xffffffff,0,0);
        auVar49 = NEON_fmov(0x3ff0000000000000,8);
        pppppppdStack_628 = auVar49._8_8_;
        pppppppdStack_630 = auVar49._0_8_;
        uStack_690 = CONCAT44(uStack_690._4_4_,0xc1020006);
        uStack_680 = 0x400000001;
        uStack_6f0 = (ulong)uStack_6f0._4_4_ << 0x20;
        uStack_6e8 = 0;
        uStack_6e0 = 0;
        pppppppdStack_688 = (double *******)&pppppppdStack_630;
        pppppppdStack_620 = pppppppdStack_630;
        pppppppdStack_618 = pppppppdStack_628;
        FUN_109a9168c(ppuVar19,&uStack_690,&uStack_6f0);
        goto LAB_109a616a8;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == CONCAT44(auStack_1f8[3],auStack_1f8[2])) {
        uVar27 = *puVar17 & 0x1f0000;
        if (uVar27 == 0) {
FUN_109a8e944:
          uVar27 = *(uint *)ppuVar19;
          if ((uVar27 >> 0x1e & 1) == 0) {
            uVar13 = uVar27 >> 0x10 & 0x1f;
            if (uVar13 < 7) {
              if (uVar13 < 3) {
                if (uVar13 == 0) {
                  return;
                }
                if (uVar13 == 1) {
                  puVar24 = ppuVar19[1];
                  if (puVar24[7] != 0) {
                    piVar32 = (int *)(puVar24[7] + 0x14);
                    do {
                      iVar42 = *piVar32;
                      cVar7 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
                      if (bVar12) {
                        *piVar32 = iVar42 + -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (iVar42 + -1 == 0) {
                      func_0x000109a848d4(puVar24);
                    }
                  }
                  puVar24[7] = 0;
                  puVar24[3] = 0;
                  puVar24[2] = 0;
                  puVar24[5] = 0;
                  puVar24[4] = 0;
                  if (*(int *)((long)puVar24 + 4) < 1) {
                    return;
                  }
                  lVar28 = 0;
                  lVar29 = puVar24[8];
                  do {
                    *(undefined4 *)(lVar29 + lVar28 * 4) = 0;
                    lVar28 = lVar28 + 1;
                  } while (lVar28 < *(int *)((long)puVar24 + 4));
                  return;
                }
              }
              else {
                if (uVar13 == 3) {
                  FUN_109a8ee3c(ppuVar19,&stack0xfffffffffffffe50,uVar27 & 0xfff,0xffffffff,0,0);
                  return;
                }
                if (uVar13 == 4) {
                  plVar20 = ppuVar19[1];
                  plVar22 = (long *)*plVar20;
                  plVar38 = (long *)plVar20[1];
                  while (plVar10 = plVar38, plVar10 != plVar22) {
                    plVar38 = plVar10 + -3;
                    if (*plVar38 != 0) {
                      plVar10[-2] = *plVar38;
                      __ZdlPv();
                    }
                  }
                  plVar20[1] = (long)plVar22;
                  return;
                }
                if (uVar13 == 5) {
                  plVar22 = ppuVar19[1];
                  lVar28 = *plVar22;
                  lVar29 = plVar22[1];
                  while (lVar29 != lVar28) {
                    lVar29 = lVar29 + -0x60;
                    FUN_109370334(lVar29);
                  }
                  plVar22[1] = lVar28;
                  return;
                }
              }
            }
            else {
              if (uVar13 < 10) {
                return;
              }
              if (uVar13 == 10) {
                puVar24 = ppuVar19[1];
                if (puVar24[4] != 0) {
                  piVar32 = (int *)(puVar24[4] + 0x10);
                  do {
                    iVar42 = *piVar32;
                    cVar7 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
                    if (bVar12) {
                      *piVar32 = iVar42 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar42 + -1 == 0) {
                    (**(code **)(**(long **)(puVar24[4] + 8) + 0x20))();
                    puVar24[4] = 0;
                  }
                }
                if (0 < *(int *)((long)puVar24 + 4)) {
                  lVar28 = 0;
                  lVar29 = puVar24[6];
                  do {
                    *(undefined4 *)(lVar29 + lVar28 * 4) = 0;
                    lVar28 = lVar28 + 1;
                  } while (lVar28 < *(int *)((long)puVar24 + 4));
                }
                puVar24[4] = 0;
                return;
              }
              if (uVar13 == 0xb) {
                plVar22 = ppuVar19[1];
                lVar28 = *plVar22;
                lVar29 = plVar22[1];
                while (lVar29 != lVar28) {
                  lVar29 = lVar29 + -0x50;
                  FUN_109ac5638();
                }
                plVar22[1] = lVar28;
                return;
              }
              if (uVar13 == 0xd) {
                ppuVar19[1][1] = *ppuVar19[1];
                return;
              }
            }
            puVar18 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar18 = 1;
            *(undefined1 *)((long)puVar18 + 0x22) = 0;
            *(undefined8 *)(puVar18 + 3) = 0x726f707075736e75;
            *(undefined8 *)(puVar18 + 1) = 0x2f6e776f6e6b6e55;
            *(undefined8 *)((long)puVar18 + 0x1a) = 0x6570797420796172;
            *(undefined8 *)((long)puVar18 + 0x12) = 0x726120646574726f;
            FUN_109ac3188(0xffffff2b,&stack0xfffffffffffffe50,&DAT_10f598457,&UNK_10f597913,0xa4b);
          }
          else {
            puVar18 = (undefined4 *)0x14;
            func_0x000107c2ae8c();
            *puVar18 = 1;
            *(undefined8 *)(puVar18 + 1) = 0x6953646578696621;
            *(undefined1 *)(puVar18 + 4) = 0;
            puVar18[3] = 0x2928657a;
            FUN_109ac3188(0xffffff29,&stack0xfffffffffffffe50,&DAT_10f598457,&UNK_10f597913,0xa0a);
          }
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
          (*pcVar11)();
        }
        if ((*puVar17 & 0x1d0000) != 0x10000) {
          uVar13 = uVar27 - 0x20000 >> 0x11 | uVar27 << 0xf;
          if ((int)uVar13 < 4) {
            if (uVar13 != 0) {
              if (uVar13 != 2) goto LAB_109a8e730;
              puVar24 = *(undefined8 **)(puVar17 + 2);
              if (((ulong)*ppuVar19 & 0x1f0000) == 0x10000) {
                FUN_109a8ec3c(ppuVar19,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x000109a8e70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*(long *)*puVar24 + 0x18))
                          ((long *)*puVar24,puVar24,ppuVar19,0xffffffff);
                return;
              }
              uStack_200._0_4_ = 0x42ff0000;
              auStack_1f8[1] = 0;
              auStack_1f8[2] = 0;
              uStack_200._4_4_ = 0;
              auStack_1f8[0] = 0;
              auStack_1f8[0xb] = 0;
              auStack_1f8[9] = 0;
              auStack_1f8[10] = 0;
              auStack_1f8[7] = 0;
              auStack_1f8[8] = 0;
              auStack_1f8[5] = 0;
              auStack_1f8[6] = 0;
              auStack_1f8[3] = 0;
              auStack_1f8[4] = 0;
              unaff_x25 = &stack0xfffffffffffffe50;
              (**(code **)(*(long *)*puVar24 + 0x18))
                        ((long *)*puVar24,puVar24,&uStack_200,0xffffffff);
              FUN_109a479a0(&uStack_200,ppuVar19);
              if (0 < uStack_200._4_4_) {
                lVar28 = 0;
                do {
                  auStack_1f8[lVar28] = 0;
                  lVar28 = lVar28 + 1;
                } while (lVar28 < uStack_200._4_4_);
              }
              bVar12 = true;
              goto LAB_109a8e7f8;
            }
          }
          else {
            if (uVar13 == 4) {
              puVar17 = *(uint **)(puVar17 + 2);
              lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
              do {
                uVar27 = 0xffffffff;
                ppuVar21 = ppuVar19;
                FUN_109a8b904(ppuVar19,0xffffffff);
                if (-1 < (int)*(uint *)ppuVar19) {
LAB_109ac61c8:
                  if (*(long *)(puVar17 + 8) != 0) {
                    uVar13 = puVar17[1];
                    uVar37 = (ulong)uVar13;
                    if ((int)uVar13 < 3) {
                      lVar29 = (long)(int)puVar17[3] * (long)(int)puVar17[2];
                    }
                    else {
                      lVar29 = 1;
                      piVar32 = *(int **)(puVar17 + 0xc);
                      uVar25 = uVar37;
                      do {
                        lVar29 = lVar29 * *piVar32;
                        uVar25 = uVar25 - 1;
                        piVar32 = piVar32 + 1;
                      } while (uVar25 != 0);
                    }
                    if (lVar29 != 0) {
                      uVar25 = (ulong)(int)uVar13;
                      if ((int)uVar13 < 1) {
                        lVar29 = 0;
                        uVar34 = uVar25;
                        if (uVar13 != 0) goto LAB_109ac6268;
                        uStack_2c0 = 0;
                        lVar26 = *(long *)(puVar17 + 0xc);
                        lVar31 = -1;
                      }
                      else {
                        lVar29 = *(long *)(*(long *)(puVar17 + 0xe) + uVar37 * 8 + -8);
                        uVar34 = uVar37;
LAB_109ac6268:
                        uVar33 = 0;
                        lVar26 = *(long *)(puVar17 + 0xc);
                        do {
                          (&uStack_2b8)[uVar33] = (long)*(int *)(lVar26 + uVar33 * 4);
                          uVar33 = uVar33 + 1;
                        } while (uVar34 != uVar33);
                        lVar31 = uVar25 - 1;
                        (&uStack_2b8)[lVar31] = (&uStack_2b8)[lVar31] * lVar29;
                        if (0 < (int)uVar13) {
                          uVar34 = *(ulong *)(puVar17 + 10);
                          puVar23 = *(ulong **)(puVar17 + 0xe);
                          puVar35 = auStack_3b8;
                          do {
                            uVar36 = *puVar23;
                            uVar33 = 0;
                            if (uVar36 != 0) {
                              uVar33 = uVar34 / uVar36;
                            }
                            *puVar35 = uVar33;
                            uVar34 = uVar34 - uVar33 * uVar36;
                            uVar37 = uVar37 - 1;
                            puVar23 = puVar23 + 1;
                            puVar35 = puVar35 + 1;
                          } while (uVar37 != 0);
                        }
                      }
                      auStack_3b8[lVar31] = auStack_3b8[lVar31] * lVar29;
                      FUN_109a8727c(ppuVar19,uVar25,lVar26,*puVar17 & 0xfff,0xffffffff,0,0);
                      uVar27 = *(uint *)ppuVar19;
                      if ((uVar27 & 0x1f0000) != 0xa0000) {
LAB_109ac6360:
                        if ((uVar27 & 0x1f0000) == 0x10000) {
                          puVar23 = ppuVar19[1];
                          uStack_4e0 = (ulong)&uStack_520 | 8;
                          uStack_520 = (undefined8 *)*puVar23;
                          uStack_518 = puVar23[1];
                          uStack_508 = puVar23[3];
                          uStack_510 = puVar23[2];
                          uStack_500 = puVar23[4];
                          uStack_4f8 = puVar23[5];
                          uStack_4e8 = puVar23[7];
                          uStack_4f0 = puVar23[6];
                          puStack_4d8 = &uStack_4d0;
                          uStack_4d0 = 0;
                          uStack_4c8 = 0;
                          if (puVar23[7] != 0) {
                            piVar32 = (int *)(puVar23[7] + 0x14);
                            do {
                              cVar7 = '\x01';
                              bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
                              if (bVar12) {
                                *piVar32 = *piVar32 + 1;
                                cVar7 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar7 != '\0');
                          }
                          if (*(int *)((long)puVar23 + 4) < 3) {
                            uStack_4d0 = *(undefined8 *)puVar23[9];
                            uStack_4c8 = ((undefined8 *)puVar23[9])[1];
                          }
                          else {
                            uStack_520 = (undefined8 *)((ulong)uStack_520 & 0xffffffff);
                            func_0x000109a84868(&uStack_520);
                          }
                        }
                        else {
                          FUN_109a8a180(&uStack_520,ppuVar19,0xffffffff);
                        }
                        lVar29 = *(long *)(puVar17 + 8);
                        ppuVar21 = *(undefined8 ***)(lVar29 + 8);
                        (*(code *)(*ppuVar21)[7])
                                  (ppuVar21,lVar29,uStack_510,puVar17[1],&uStack_2b8,auStack_3b8,
                                   *(undefined8 *)(puVar17 + 0xe),puStack_4d8);
                        uVar27 = (uint)lVar29;
                        if (uStack_4e8 != 0) {
                          piVar32 = (int *)(uStack_4e8 + 0x14);
                          do {
                            iVar42 = *piVar32;
                            cVar7 = '\x01';
                            bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
                            if (bVar12) {
                              *piVar32 = iVar42 + -1;
                              cVar7 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar7 != '\0');
                          if (iVar42 + -1 == 0) {
                            ppuVar21 = (undefined8 **)&uStack_520;
                            func_0x000109a848d4();
                          }
                        }
                        uStack_4e8 = 0;
                        uStack_508 = 0;
                        uStack_510 = 0;
                        uStack_4f8 = 0;
                        uStack_500 = 0;
                        if (0 < (int)uStack_520._4_4_) {
                          lVar29 = 0;
                          do {
                            *(undefined4 *)(uStack_4e0 + lVar29 * 4) = 0;
                            lVar29 = lVar29 + 1;
                          } while (lVar29 < (int)uStack_520._4_4_);
                        }
                        puVar24 = &uStack_520;
                        puStack_270 = puStack_4d8;
                        goto LAB_109ac648c;
                      }
                      FUN_109a8bd24(&uStack_520,ppuVar19,0xffffffff);
                      uVar37 = *(ulong *)(puVar17 + 8);
                      if ((uVar37 != uStack_500) || (uStack_4f8 != *(ulong *)(puVar17 + 10))) {
                        plVar22 = *(long **)(uVar37 + 8);
                        if (plVar22 != *(long **)(uStack_500 + 8)) {
                          FUN_109ac5638(&uStack_520);
                          uVar27 = *(uint *)ppuVar19;
                          goto LAB_109ac6360;
                        }
                        if (0 < (int)uStack_520._4_4_) {
                          lVar26 = 0;
                          uVar25 = uStack_4f8;
                          do {
                            uVar33 = *(ulong *)(uStack_4e8 + lVar26);
                            uVar34 = 0;
                            if (uVar33 != 0) {
                              uVar34 = uVar25 / uVar33;
                            }
                            *(ulong *)((long)alStack_4c0 + lVar26 + 8) = uVar34;
                            uVar25 = uVar25 - uVar34 * uVar33;
                            lVar26 = lVar26 + 8;
                          } while ((ulong)uStack_520._4_4_ * 8 - lVar26 != 0);
                        }
                        alStack_4c0[(int)puVar17[1]] = alStack_4c0[(int)puVar17[1]] * lVar29;
                        (**(code **)(*plVar22 + 0x48))();
                      }
                      uVar27 = (uint)uVar37;
                      ppuVar21 = (undefined8 **)&uStack_520;
                      FUN_109ac5638();
                      goto LAB_109ac64a4;
                    }
                  }
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) goto FUN_109a8e944;
                  goto LAB_109ac65c4;
                }
                uVar13 = *puVar17;
                uVar14 = (uint)ppuVar21;
                if (uVar14 == (uVar13 & 0xfff)) goto LAB_109ac61c8;
                if (((uVar13 ^ uVar14) & 0xff8) != 0) {
                  puVar18 = (undefined4 *)0x24;
                  func_0x000107c2ae8c();
                  *puVar18 = 1;
                  uStack_2b8 = (undefined8 *)(puVar18 + 1);
                  uStack_2b0 = 0x1e;
                  *(undefined1 *)((long)puVar18 + 0x22) = 0;
                  *(undefined8 *)(puVar18 + 3) = 0x5643203d3d202928;
                  *(undefined8 *)(puVar18 + 1) = 0x736c656e6e616863;
                  *(undefined8 *)((long)puVar18 + 0x1a) = 0x296570797464284e;
                  *(undefined8 *)((long)puVar18 + 0x12) = 0x435f54414d5f5643;
                  FUN_109ac3188(0xffffff29,&uStack_2b8,&UNK_10f595fe6,&UNK_10f59b211,0x308);
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x109ac65c4);
                  (*pcVar11)();
                }
                if ((int)uVar14 < 0) {
                  ppuVar39 = ppuVar19;
                  FUN_109a8b904(ppuVar19,0xffffffff);
                }
                else {
                  ppuVar39 = (undefined8 **)(ulong)(uVar13 & 0xff8 | uVar14 & 7);
                }
              } while ((((uint)ppuVar39 ^ uVar13) & 7) == 0);
              FUN_109ac6640(&uStack_2b8,puVar17,0x1000000);
              ppuVar21 = (undefined8 **)&uStack_2b8;
              FUN_109a41858(0x3ff0000000000000,0,ppuVar21,ppuVar19,ppuVar39);
              uVar27 = (uint)ppuVar19;
              if (lStack_280 != 0) {
                piVar32 = (int *)(lStack_280 + 0x14);
                do {
                  iVar42 = *piVar32;
                  cVar7 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
                  if (bVar12) {
                    *piVar32 = iVar42 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar42 + -1 == 0) {
                  ppuVar21 = (undefined8 **)&uStack_2b8;
                  func_0x000109a848d4();
                }
              }
              lStack_280 = 0;
              uStack_2a0 = 0;
              uStack_2a8 = 0;
              uStack_290 = 0;
              uStack_298 = 0;
              if (0 < uStack_2b8._4_4_) {
                lVar29 = 0;
                do {
                  *(undefined4 *)(lStack_278 + lVar29 * 4) = 0;
                  lVar29 = lVar29 + 1;
                } while (lVar29 < uStack_2b8._4_4_);
              }
              puVar24 = &uStack_2b8;
LAB_109ac648c:
              if (puStack_270 != puVar24 + 10 && puStack_270 != (undefined8 *)0x0) {
                ppuVar21 = (undefined8 **)puStack_270[-1];
                _free();
              }
LAB_109ac64a4:
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
                return;
              }
LAB_109ac65c4:
              ___stack_chk_fail();
              FUN_109ac5638(&uStack_520);
              __Unwind_Resume();
              puVar24 = ppuVar21[4];
              if (puVar24 == (undefined8 *)0x0) {
                *extraout_x8 = 0x42ff0000;
                extraout_x8[3] = 0;
                extraout_x8[4] = 0;
                extraout_x8[1] = 0;
                extraout_x8[2] = 0;
                extraout_x8[7] = 0;
                extraout_x8[8] = 0;
                extraout_x8[5] = 0;
                extraout_x8[6] = 0;
                extraout_x8[0xb] = 0;
                extraout_x8[0xc] = 0;
                extraout_x8[9] = 0;
                extraout_x8[10] = 0;
                extraout_x8[0xe] = 0;
                extraout_x8[0xf] = 0;
                extraout_x8[0xc] = 0;
                extraout_x8[0xd] = 0;
                puVar17 = extraout_x8 + 0x14;
                puVar17[0] = 0;
                puVar17[1] = 0;
                *(uint **)(extraout_x8 + 0x10) = extraout_x8 + 2;
                *(uint **)(extraout_x8 + 0x12) = puVar17;
                extraout_x8[0x16] = 0;
                extraout_x8[0x17] = 0;
              }
              else {
                puStack_578 = puVar24;
                FUN_109ac437c();
                _pthread_mutex_lock(*(undefined8 *)(((ulong)puVar24 % 0x1f) * 8 + 0x11374c830));
                piVar32 = (int *)((long)ppuVar21[4] + 0x14);
                do {
                  iVar42 = *piVar32;
                  cVar7 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
                  if (bVar12) {
                    *piVar32 = iVar42 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar42 == 0) {
                  plVar22 = (long *)ppuVar21[4][1];
                  (**(code **)(*plVar22 + 0x28))(plVar22,ppuVar21[4],uVar27 | 0x3000000);
                }
                lVar28 = ppuVar21[4][3];
                if (lVar28 == 0) {
                  piVar32 = (int *)((long)ppuVar21[4] + 0x14);
                  do {
                    cVar7 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
                    if (bVar12) {
                      *piVar32 = *piVar32 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (ppuVar21[4][3] == 0) {
                    puVar18 = (undefined4 *)0x3c;
                    func_0x000107c2ae8c();
                    *(undefined8 *)(puVar18 + 3) = 0x2026262030203d21;
                    *(undefined8 *)(puVar18 + 1) = 0x20617461643e2d75;
                    *puVar18 = 1;
                    puStack_588 = puVar18 + 1;
                    uStack_580 = 0x37;
                    *(undefined1 *)((long)puVar18 + 0x3b) = 0;
                    *(undefined8 *)(puVar18 + 7) = 0x6f20676e69707061;
                    *(undefined8 *)(puVar18 + 5) = 0x6d20726f72724522;
                    *(undefined8 *)(puVar18 + 0xb) = 0x6d2074736f68206f;
                    *(undefined8 *)(puVar18 + 9) = 0x742074614d552066;
                    *(undefined8 *)((long)puVar18 + 0x33) = 0x222e79726f6d656d;
                    FUN_109ac3188(0xffffff29,&puStack_588,&UNK_10f59b2f8,&UNK_10f59b211,0x2e0);
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x109ac686c);
                    (*pcVar11)();
                  }
                  *extraout_x8 = 0x42ff0000;
                  extraout_x8[3] = 0;
                  extraout_x8[4] = 0;
                  extraout_x8[1] = 0;
                  extraout_x8[2] = 0;
                  extraout_x8[7] = 0;
                  extraout_x8[8] = 0;
                  extraout_x8[5] = 0;
                  extraout_x8[6] = 0;
                  extraout_x8[0xb] = 0;
                  extraout_x8[0xc] = 0;
                  extraout_x8[9] = 0;
                  extraout_x8[10] = 0;
                  extraout_x8[0xe] = 0;
                  extraout_x8[0xf] = 0;
                  extraout_x8[0xc] = 0;
                  extraout_x8[0xd] = 0;
                  puVar17 = extraout_x8 + 0x14;
                  puVar17[0] = 0;
                  puVar17[1] = 0;
                  *(uint **)(extraout_x8 + 0x10) = extraout_x8 + 2;
                  *(uint **)(extraout_x8 + 0x12) = puVar17;
                  extraout_x8[0x16] = 0;
                  extraout_x8[0x17] = 0;
                }
                else {
                  FUN_109a855e4(extraout_x8,*(uint *)((long)ppuVar21 + 4),ppuVar21[6],
                                *(uint *)ppuVar21 & 0xfff,lVar28 + (long)ppuVar21[5],ppuVar21[7]);
                  *extraout_x8 = *(uint *)ppuVar21;
                  puVar24 = ppuVar21[4];
                  puVar5 = ppuVar21[5];
                  *(undefined8 **)(extraout_x8 + 0xe) = puVar24;
                  lVar29 = puVar24[3];
                  *(long *)(extraout_x8 + 4) = lVar29 + (long)puVar5;
                  *(long *)(extraout_x8 + 6) = lVar29;
                  lVar28 = puVar24[5];
                  *(long *)(extraout_x8 + 8) = lVar29 + lVar28;
                  *(long *)(extraout_x8 + 10) = lVar29 + lVar28;
                }
                puVar24 = puStack_578;
                FUN_109ac437c();
                _pthread_mutex_unlock(*(undefined8 *)(((ulong)puVar24 % 0x1f) * 8 + 0x11374c830));
              }
              return;
            }
            if (uVar13 != 5) {
LAB_109a8e730:
              puVar18 = (undefined4 *)0x8;
              func_0x000107c2ae8c();
              *puVar18 = 1;
              uStack_200 = (undefined8 *)(puVar18 + 1);
              *(undefined1 *)uStack_200 = 0;
              auStack_1f8[0] = 0;
              auStack_1f8[1] = 0;
              FUN_109ac3188(0xffffff2b,&uStack_200,&UNK_10f595fe6,&UNK_10f597913,0x86b);
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x109a8e774);
              (*pcVar11)();
            }
          }
        }
        if (uVar27 == 0x10000) {
          puVar24 = *(undefined8 **)(puVar17 + 2);
          unaff_x26 = (ulong)&uStack_200 | 8;
          auStack_1f8[0] = (undefined4)puVar24[1];
          auStack_1f8[1] = (undefined4)((ulong)puVar24[1] >> 0x20);
          uStack_200._0_4_ = (undefined4)*puVar24;
          uStack_200._4_4_ = (int)((ulong)*puVar24 >> 0x20);
          auStack_1f8[4] = (undefined4)puVar24[3];
          auStack_1f8[5] = (undefined4)((ulong)puVar24[3] >> 0x20);
          auStack_1f8[2] = (undefined4)puVar24[2];
          auStack_1f8[3] = (undefined4)((ulong)puVar24[2] >> 0x20);
          unaff_x27 = puVar24[7];
          auStack_1f8[8] = (undefined4)puVar24[5];
          auStack_1f8[9] = (undefined4)((ulong)puVar24[5] >> 0x20);
          auStack_1f8[6] = (undefined4)puVar24[4];
          auStack_1f8[7] = (undefined4)((ulong)puVar24[4] >> 0x20);
          auStack_1f8[10] = (undefined4)puVar24[6];
          auStack_1f8[0xb] = (undefined4)((ulong)puVar24[6] >> 0x20);
          unaff_x25 = &stack0xfffffffffffffe50;
          if (puVar24[7] != 0) {
            piVar32 = (int *)(puVar24[7] + 0x14);
            do {
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
              if (bVar12) {
                *piVar32 = *piVar32 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          if (2 < *(int *)((long)puVar24 + 4)) {
            uStack_200._4_4_ = 0;
            func_0x000109a84868(&uStack_200);
          }
        }
        else {
          FUN_109a8a180(&uStack_200,puVar17,0xffffffff);
        }
        FUN_109a479a0(&uStack_200,ppuVar19);
        if (unaff_x27 != 0) {
          piVar32 = (int *)(unaff_x27 + 0x14);
          do {
            iVar42 = *piVar32;
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
            if (bVar12) {
              *piVar32 = iVar42 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar42 + -1 == 0) {
            func_0x000109a848d4(&uStack_200);
          }
        }
        if (0 < uStack_200._4_4_) {
          lVar28 = 0;
          do {
            *(undefined4 *)(unaff_x26 + lVar28 * 4) = 0;
            lVar28 = lVar28 + 1;
          } while (lVar28 < uStack_200._4_4_);
        }
        bVar12 = unaff_x25 == &stack0xfffffffffffffe50;
LAB_109a8e7f8:
        auStack_1f8[9] = 0;
        auStack_1f8[8] = 0;
        auStack_1f8[7] = 0;
        auStack_1f8[6] = 0;
        auStack_1f8[5] = 0;
        auStack_1f8[4] = 0;
        auStack_1f8[3] = 0;
        auStack_1f8[2] = 0;
        if (!bVar12 && unaff_x25 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(unaff_x25 + -8));
        }
        return;
      }
    }
    ___stack_chk_fail();
  }
  puVar18 = (undefined4 *)0x28;
  func_0x000107c2ae8c();
  *puVar18 = 1;
  pppppppdStack_630 = (double *******)(puVar18 + 1);
  pppppppdStack_628 = (double *******)0x22;
  *(undefined8 *)(puVar18 + 3) = 0x204632335f564320;
  *(undefined8 *)(puVar18 + 1) = 0x3d3d206874706564;
  *(undefined1 *)((long)puVar18 + 0x26) = 0;
  *(undefined2 *)(puVar18 + 9) = 0x4634;
  *(undefined8 *)(puVar18 + 7) = 0x365f5643203d3d20;
  *(undefined8 *)(puVar18 + 5) = 0x6874706564207c7c;
  FUN_109ac3188(0xffffff29,&pppppppdStack_630,&DAT_10f3dd8e0,&UNK_10f5972ca,0x572);
LAB_109a617a4:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x109a617a8);
  (*pcVar11)();
}



/* Entry: 109a60ed4; end: 109a61877;  */

/* WARNING: Removing unreachable block (ram,0x000109a8e898) */
/* WARNING: Removing unreachable block (ram,0x000109a8e89c) */
/* WARNING: Removing unreachable block (ram,0x000109a8e8a4) */
/* WARNING: Removing unreachable block (ram,0x000109a8e8ac) */
/* WARNING: Removing unreachable block (ram,0x000109a8e8b0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109a60ed4(double param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  double *******pppppppdVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  long *plVar16;
  uint *puVar17;
  long *plVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  uint *extraout_x8;
  double *pdVar26;
  long lVar27;
  int *piVar28;
  ulong uVar29;
  ulong uVar30;
  ulong *puVar31;
  ulong uVar32;
  ulong uVar33;
  long *plVar34;
  uint *puVar35;
  double *******pppppppdVar36;
  double *pdVar37;
  int iVar38;
  undefined1 *unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  uint uVar39;
  undefined8 unaff_x28;
  float fVar40;
  float fVar41;
  double ******ppppppdVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  double *******pppppppdStack_5d0;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined4 uStack_5a8;
  ulong uStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  undefined8 *puStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  double *******pppppppdStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  double *******pppppppdStack_4c0;
  double *******pppppppdStack_4b8;
  double *******pppppppdStack_4b0;
  double *******pppppppdStack_4a8;
  undefined4 *puStack_418;
  undefined8 uStack_410;
  ulong uStack_408;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long alStack_350 [33];
  ulong auStack_248 [31];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  double *******pppppppdStack_a8;
  double *pdStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [12];
  
  auStack_88[6] = (undefined4)unaff_d9;
  auStack_88[7] = (undefined4)((ulong)unaff_d9 >> 0x20);
  auStack_88[8] = (undefined4)unaff_d8;
  auStack_88[9] = (undefined4)((ulong)unaff_d8 >> 0x20);
  auStack_88[10] = (undefined4)unaff_x28;
  auStack_88[0xb] = (undefined4)((ulong)unaff_x28 >> 0x20);
  auStack_88[2] = (undefined4)*(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  auStack_88[3] = (undefined4)((ulong)*(undefined8 *)PTR____stack_chk_guard_11034bdc0 >> 0x20);
  puVar15 = param_2;
  FUN_109a8b904(param_2,0xffffffff);
  uVar12 = (uint)puVar15;
  uVar23 = uVar12 & 7;
  iVar38 = (int)(long)(double)(long)param_1;
  if (2.220446049250313e-16 <= ABS((double)iVar38 - param_1)) {
    if (uVar23 - 5 < 2) {
LAB_109a60fd8:
      if ((*param_2 & 0x1f0000) == 0x10000) {
        puVar19 = *(ulong **)(param_2 + 2);
        uStack_4e0 = (ulong)&uStack_520 | 8;
        uStack_520 = *puVar19;
        pppppppdStack_518 = (double *******)puVar19[1];
        uStack_508 = puVar19[3];
        uStack_510 = puVar19[2];
        uStack_500 = puVar19[4];
        uStack_4f8 = puVar19[5];
        uStack_4e8 = puVar19[7];
        uStack_4f0 = puVar19[6];
        puStack_4d8 = &uStack_4d0;
        uStack_4d0 = 0;
        uStack_4c8 = 0;
        if (puVar19[7] != 0) {
          piVar28 = (int *)(puVar19[7] + 0x14);
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar28,0x10);
            if (bVar11) {
              *piVar28 = *piVar28 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (*(int *)((long)puVar19 + 4) < 3) {
          uStack_4d0 = *(undefined8 *)puVar19[9];
          uStack_4c8 = ((undefined8 *)puVar19[9])[1];
        }
        else {
          uStack_520 = uStack_520 & 0xffffffff;
          func_0x000109a84868(&uStack_520);
        }
      }
      else {
        FUN_109a8a180(&uStack_520,param_2,0xffffffff);
      }
      FUN_109a8727c(param_3,uStack_520._4_4_,uStack_4e0,puVar15,0xffffffff,0,0);
      if ((*param_3 & 0x1f0000) == 0x10000) {
        puVar19 = *(ulong **)(param_3 + 2);
        uStack_540 = (ulong)&uStack_580 | 8;
        uStack_580 = *puVar19;
        uStack_578 = puVar19[1];
        uStack_568 = puVar19[3];
        uStack_570 = puVar19[2];
        uStack_560 = puVar19[4];
        uStack_558 = puVar19[5];
        uStack_548 = puVar19[7];
        uStack_550 = puVar19[6];
        puStack_538 = &uStack_530;
        uStack_530 = 0;
        uStack_528 = 0;
        if (puVar19[7] != 0) {
          piVar28 = (int *)(puVar19[7] + 0x14);
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar28,0x10);
            if (bVar11) {
              *piVar28 = *piVar28 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (*(int *)((long)puVar19 + 4) < 3) {
          uStack_530 = *(undefined8 *)puVar19[9];
          uStack_528 = ((undefined8 *)puVar19[9])[1];
        }
        else {
          uStack_580 = uStack_580 & 0xffffffff;
          func_0x000109a84868(&uStack_580);
        }
      }
      else {
        FUN_109a8a180(&uStack_580,param_3,0xffffffff);
      }
      puStack_98 = &uStack_520;
      uStack_90 = &uStack_580;
      auStack_88[0] = 0;
      auStack_88[1] = 0;
      uStack_588 = 0;
      uStack_5b8 = 0;
      uStack_5b0 = 0;
      uStack_5c0 = 0;
      uStack_5a8 = 0;
      uStack_5a0 = 0;
      uStack_598 = 0;
      uStack_590 = 0;
      FUN_109a9b368(&uStack_5c0,&puStack_98,0,&pppppppdStack_a8,0xffffffff);
      uVar7 = uVar12 >> 3 & 0x1ff;
      uVar13 = uVar7 + 1;
      uVar5 = uVar13 * (int)uStack_598;
      if (2.220446049250313e-16 <= ABS((double)iVar38 - param_1)) {
        if (2.220446049250313e-16 <= ABS(ABS(param_1) + -0.5)) {
          uVar7 = uVar7 | 0x400;
          uVar39 = 0;
          if (uVar13 != 0) {
            uVar39 = uVar7 / uVar13;
          }
          uVar1 = uVar39 * uVar13;
          if ((int)uVar5 <= (int)(uVar39 * uVar13)) {
            uVar1 = uVar5;
          }
          uVar39 = 0x88442211U >> ((uStack_520 & 7) << 2) & 0xf;
          pppppppdStack_4b8 = (double *******)0x408;
          pppppppdStack_4c0 = (double *******)&pppppppdStack_4b0;
          if (uStack_510 == uStack_570) {
            pppppppdVar36 = (double *******)((long)(int)uVar39 * (long)(int)uVar1);
            pppppppdStack_5d0 = (double *******)&pppppppdStack_4b0;
            if ((double *******)0x408 < pppppppdVar36) {
              pppppppdStack_5d0 = pppppppdVar36;
              __Znam();
              pppppppdStack_4c0 = pppppppdStack_5d0;
            }
          }
          else {
            pppppppdStack_5d0 = (double *******)0x0;
            pppppppdVar36 = pppppppdStack_4b8;
          }
          pppppppdStack_4b8 = pppppppdVar36;
          uVar33 = 0;
          uVar12 = uVar12 >> 3 & 0x1ff | 0x400;
          uVar8 = 0;
          if (uVar13 != 0) {
            uVar8 = uVar12 / uVar13;
          }
          uVar12 = uVar12 - uVar8 * uVar13;
          uVar13 = uVar7 - uVar12;
          uVar7 = uVar7 - (uVar12 & 0xffff);
          uVar12 = uVar5;
          if ((int)uVar13 <= (int)uVar5) {
            uVar12 = uVar13;
          }
          for (; uVar33 < uStack_5a0; uVar33 = uVar33 + 1) {
            if (0 < (int)uVar5) {
              iVar38 = 0;
              uVar13 = uVar5;
              do {
                pdVar37 = pdStack_a0;
                pppppppdVar36 = pppppppdStack_a8;
                uVar8 = uVar1;
                if ((int)(uVar5 - iVar38) <= (int)uVar1) {
                  uVar8 = uVar5 - iVar38;
                }
                pppppppdVar4 = pppppppdStack_a8;
                if (pppppppdStack_5d0 != (double *******)0x0) {
                  pppppppdVar4 = pppppppdStack_5d0;
                }
                if (uVar23 == 5) {
                  if (pppppppdVar4 != pppppppdStack_a8) {
                    _memcpy(pppppppdVar4,pppppppdStack_a8,(long)(int)uVar39 * (long)(int)uVar8);
                  }
                  func_0x000109a649e8(pppppppdVar4,pdVar37,uVar8);
                  if (0 < (int)uVar8) {
                    uVar2 = uVar13;
                    if ((int)uVar5 <= (int)uVar13) {
                      uVar2 = uVar5;
                    }
                    if ((int)uVar7 <= (int)uVar2) {
                      uVar2 = uVar7;
                    }
                    lVar24 = (ulong)uVar2 << 2;
                    pdVar26 = pdVar37;
                    do {
                      *(float *)pdVar26 = (float)(param_1 * (double)*(float *)pdVar26);
                      lVar24 = lVar24 + -4;
                      pdVar26 = (double *)((long)pdVar26 + 4);
                    } while (lVar24 != 0);
                  }
                  func_0x000109a64384(pdVar37,pdVar37,uVar8);
                  if (0 < (int)uVar8) {
                    uVar2 = uVar13;
                    if ((int)uVar5 <= (int)uVar13) {
                      uVar2 = uVar5;
                    }
                    if ((int)uVar7 <= (int)uVar2) {
                      uVar2 = uVar7;
                    }
                    lVar24 = (ulong)uVar2 << 2;
                    do {
                      fVar40 = *(float *)pppppppdVar36;
                      if ((fVar40 <= 0.0) && ((param_1 < 0.0 || (fVar40 != 0.0)))) {
                        fVar41 = NAN;
                        if (fVar40 == 0.0) {
                          fVar41 = INFINITY;
                        }
                        *(float *)pdVar37 = fVar41;
                      }
                      pdVar37 = (double *)((long)pdVar37 + 4);
                      lVar24 = lVar24 + -4;
                      pppppppdVar36 = (double *******)((long)pppppppdVar36 + 4);
                    } while (lVar24 != 0);
                  }
                }
                else {
                  if (pppppppdVar4 != pppppppdStack_a8) {
                    _memcpy(pppppppdVar4,pppppppdStack_a8,(long)(int)uVar39 * (long)(int)uVar8);
                  }
                  FUN_109a64c3c(pppppppdVar4,pdVar37,uVar8);
                  if (0 < (int)uVar8) {
                    uVar2 = uVar13;
                    if ((int)uVar5 <= (int)uVar13) {
                      uVar2 = uVar5;
                    }
                    if ((int)uVar7 <= (int)uVar2) {
                      uVar2 = uVar7;
                    }
                    lVar24 = (ulong)uVar2 << 3;
                    pdVar26 = pdVar37;
                    do {
                      *pdVar26 = param_1 * *pdVar26;
                      lVar24 = lVar24 + -8;
                      pdVar26 = pdVar26 + 1;
                    } while (lVar24 != 0);
                  }
                  func_0x000109a64688(pdVar37,pdVar37,uVar8);
                  if (0 < (int)uVar8) {
                    uVar2 = uVar13;
                    if ((int)uVar5 <= (int)uVar13) {
                      uVar2 = uVar5;
                    }
                    if ((int)uVar7 <= (int)uVar2) {
                      uVar2 = uVar7;
                    }
                    lVar24 = (ulong)uVar2 << 3;
                    do {
                      ppppppdVar42 = *pppppppdVar36;
                      if (((double)ppppppdVar42 <= 0.0) &&
                         ((param_1 < 0.0 || ((double)ppppppdVar42 != 0.0)))) {
                        dVar43 = NAN;
                        if ((double)ppppppdVar42 == 0.0) {
                          dVar43 = INFINITY;
                        }
                        *pdVar37 = dVar43;
                      }
                      pdVar37 = pdVar37 + 1;
                      lVar24 = lVar24 + -8;
                      pppppppdVar36 = pppppppdVar36 + 1;
                    } while (lVar24 != 0);
                  }
                }
                pppppppdStack_a8 =
                     (double *******)((long)pppppppdStack_a8 + (long)(int)uVar39 * (long)(int)uVar8)
                ;
                pdStack_a0 = (double *)((long)pdStack_a0 + (long)(int)uVar39 * (long)(int)uVar8);
                iVar38 = iVar38 + uVar1;
                uVar13 = uVar13 - uVar12;
              } while (iVar38 < (int)uVar5);
            }
            FUN_109a8350c(&uStack_5c0);
          }
          if ((double ********)pppppppdStack_4c0 != &pppppppdStack_4b0 &&
              pppppppdStack_4c0 != (double *******)0x0) {
            __ZdaPv();
          }
        }
        else {
          pcVar10 = FUN_109a61878;
          if (uVar23 != 5) {
            pcVar10 = (code *)0x109a6187c;
          }
          pcVar3 = (code *)0x109a618a8;
          if (uVar23 != 5) {
            pcVar3 = (code *)0x109a618ac;
          }
          if (0.0 <= param_1) {
            pcVar10 = pcVar3;
          }
          uVar33 = 0xffffffffffffffff;
          while (uVar33 = uVar33 + 1, uVar33 < uStack_5a0) {
            (*pcVar10)(pppppppdStack_a8,pdStack_a0,uVar5);
            FUN_109a8350c(&uStack_5c0);
          }
        }
      }
      else {
        if (uVar23 == 7) {
          puVar14 = (undefined4 *)0x10;
          func_0x000107c2ae8c();
          pppppppdStack_4c0 = (double *******)(puVar14 + 1);
          *pppppppdStack_4c0 = (double ******)0x203d2120636e7566;
          *puVar14 = 1;
          pppppppdStack_4b8 = (double *******)0x9;
          *(undefined2 *)(puVar14 + 3) = 0x30;
          FUN_109ac3188(0xffffff29,&pppppppdStack_4c0,&DAT_10f3dd8e0,&UNK_10f5972ca,0x582);
          goto LAB_109a617a4;
        }
        pcVar10 = (code *)(&PTR_FUN_110b21c50)[uVar23];
        uVar33 = 0xffffffffffffffff;
        while (uVar33 = uVar33 + 1, uVar33 < uStack_5a0) {
          (*pcVar10)(pppppppdStack_a8,pdStack_a0,uVar5,(long)(double)(long)param_1);
          FUN_109a8350c(&uStack_5c0);
        }
      }
      if (uStack_548 != 0) {
        piVar28 = (int *)(uStack_548 + 0x14);
        do {
          iVar38 = *piVar28;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar28,0x10);
          if (bVar11) {
            *piVar28 = iVar38 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar38 + -1 == 0) {
          func_0x000109a848d4(&uStack_580);
        }
      }
      uStack_548 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
      if (0 < (int)uStack_580._4_4_) {
        lVar24 = 0;
        do {
          *(undefined4 *)(uStack_540 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < (int)uStack_580._4_4_);
      }
      if (puStack_538 != &uStack_530 && puStack_538 != (undefined8 *)0x0) {
        _free(puStack_538[-1]);
      }
      if (uStack_4e8 != 0) {
        piVar28 = (int *)(uStack_4e8 + 0x14);
        do {
          iVar38 = *piVar28;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar28,0x10);
          if (bVar11) {
            *piVar28 = iVar38 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar38 + -1 == 0) {
          func_0x000109a848d4(&uStack_520);
        }
      }
      uStack_4e8 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      if (0 < uStack_520._4_4_) {
        lVar24 = 0;
        do {
          *(undefined4 *)(uStack_4e0 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < uStack_520._4_4_);
      }
      if (puStack_4d8 != &uStack_4d0 && puStack_4d8 != (undefined8 *)0x0) {
        _free(puStack_4d8[-1]);
      }
      goto LAB_109a616a8;
    }
  }
  else {
    if (iVar38 == 2) {
      pppppppdStack_4c0 = (double *******)0x3ff0000000000000;
      FUN_109a91d90();
      FUN_109a293c4(param_2,param_2,param_3,puVar15,0xffffffff,&PTR_FUN_1132e8c90,1,
                    &pppppppdStack_4c0);
LAB_109a616a8:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == CONCAT44(auStack_88[3],auStack_88[2])) {
        return;
      }
    }
    else {
      if (iVar38 != 1) {
        if (iVar38 != 0) goto LAB_109a60fd8;
        FUN_109a8d1f0(param_2,&pppppppdStack_4c0,0xffffffff);
        FUN_109a8727c(param_3,param_2,&pppppppdStack_4c0,puVar15,0xffffffff,0,0);
        auVar44 = NEON_fmov(0x3ff0000000000000,8);
        pppppppdStack_4b8 = auVar44._8_8_;
        pppppppdStack_4c0 = auVar44._0_8_;
        uStack_520 = CONCAT44(uStack_520._4_4_,0xc1020006);
        uStack_510 = 0x400000001;
        uStack_580 = (ulong)uStack_580._4_4_ << 0x20;
        uStack_578 = 0;
        uStack_570 = 0;
        pppppppdStack_518 = (double *******)&pppppppdStack_4c0;
        pppppppdStack_4b0 = pppppppdStack_4c0;
        pppppppdStack_4a8 = pppppppdStack_4b8;
        FUN_109a9168c(param_3,&uStack_520,&uStack_580);
        goto LAB_109a616a8;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == CONCAT44(auStack_88[3],auStack_88[2])) {
        uVar23 = *param_2 & 0x1f0000;
        if (uVar23 == 0) {
FUN_109a8e944:
          uVar23 = *param_3;
          if ((uVar23 >> 0x1e & 1) == 0) {
            uVar12 = uVar23 >> 0x10 & 0x1f;
            if (uVar12 < 7) {
              if (uVar12 < 3) {
                if (uVar12 == 0) {
                  return;
                }
                if (uVar12 == 1) {
                  lVar24 = *(long *)(param_3 + 2);
                  if (*(long *)(lVar24 + 0x38) != 0) {
                    piVar28 = (int *)(*(long *)(lVar24 + 0x38) + 0x14);
                    do {
                      iVar38 = *piVar28;
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(piVar28,0x10);
                      if (bVar11) {
                        *piVar28 = iVar38 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (iVar38 + -1 == 0) {
                      func_0x000109a848d4(lVar24);
                    }
                  }
                  *(undefined8 *)(lVar24 + 0x38) = 0;
                  *(undefined8 *)(lVar24 + 0x18) = 0;
                  *(undefined8 *)(lVar24 + 0x10) = 0;
                  *(undefined8 *)(lVar24 + 0x28) = 0;
                  *(undefined8 *)(lVar24 + 0x20) = 0;
                  if (*(int *)(lVar24 + 4) < 1) {
                    return;
                  }
                  lVar25 = 0;
                  lVar22 = *(long *)(lVar24 + 0x40);
                  do {
                    *(undefined4 *)(lVar22 + lVar25 * 4) = 0;
                    lVar25 = lVar25 + 1;
                  } while (lVar25 < *(int *)(lVar24 + 4));
                  return;
                }
              }
              else {
                if (uVar12 == 3) {
                  FUN_109a8ee3c(param_3,&stack0xffffffffffffffc0,uVar23 & 0xfff,0xffffffff,0,0);
                  return;
                }
                if (uVar12 == 4) {
                  plVar16 = *(long **)(param_3 + 2);
                  plVar18 = (long *)*plVar16;
                  plVar34 = (long *)plVar16[1];
                  while (plVar9 = plVar34, plVar9 != plVar18) {
                    plVar34 = plVar9 + -3;
                    if (*plVar34 != 0) {
                      plVar9[-2] = *plVar34;
                      __ZdlPv();
                    }
                  }
                  plVar16[1] = (long)plVar18;
                  return;
                }
                if (uVar12 == 5) {
                  plVar18 = *(long **)(param_3 + 2);
                  lVar24 = *plVar18;
                  lVar25 = plVar18[1];
                  while (lVar25 != lVar24) {
                    lVar25 = lVar25 + -0x60;
                    FUN_109370334(lVar25);
                  }
                  plVar18[1] = lVar24;
                  return;
                }
              }
            }
            else {
              if (uVar12 < 10) {
                return;
              }
              if (uVar12 == 10) {
                lVar24 = *(long *)(param_3 + 2);
                if (*(long *)(lVar24 + 0x20) != 0) {
                  piVar28 = (int *)(*(long *)(lVar24 + 0x20) + 0x10);
                  do {
                    iVar38 = *piVar28;
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(piVar28,0x10);
                    if (bVar11) {
                      *piVar28 = iVar38 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar38 + -1 == 0) {
                    (**(code **)(**(long **)(*(long *)(lVar24 + 0x20) + 8) + 0x20))();
                    *(undefined8 *)(lVar24 + 0x20) = 0;
                  }
                }
                if (0 < *(int *)(lVar24 + 4)) {
                  lVar25 = 0;
                  lVar22 = *(long *)(lVar24 + 0x30);
                  do {
                    *(undefined4 *)(lVar22 + lVar25 * 4) = 0;
                    lVar25 = lVar25 + 1;
                  } while (lVar25 < *(int *)(lVar24 + 4));
                }
                *(undefined8 *)(lVar24 + 0x20) = 0;
                return;
              }
              if (uVar12 == 0xb) {
                plVar18 = *(long **)(param_3 + 2);
                lVar24 = *plVar18;
                lVar25 = plVar18[1];
                while (lVar25 != lVar24) {
                  lVar25 = lVar25 + -0x50;
                  FUN_109ac5638();
                }
                plVar18[1] = lVar24;
                return;
              }
              if (uVar12 == 0xd) {
                (*(undefined8 **)(param_3 + 2))[1] = **(undefined8 **)(param_3 + 2);
                return;
              }
            }
            puVar14 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar14 = 1;
            *(undefined1 *)((long)puVar14 + 0x22) = 0;
            *(undefined8 *)(puVar14 + 3) = 0x726f707075736e75;
            *(undefined8 *)(puVar14 + 1) = 0x2f6e776f6e6b6e55;
            *(undefined8 *)((long)puVar14 + 0x1a) = 0x6570797420796172;
            *(undefined8 *)((long)puVar14 + 0x12) = 0x726120646574726f;
            FUN_109ac3188(0xffffff2b,&stack0xffffffffffffffc0,&DAT_10f598457,&UNK_10f597913,0xa4b);
          }
          else {
            puVar14 = (undefined4 *)0x14;
            func_0x000107c2ae8c();
            *puVar14 = 1;
            *(undefined8 *)(puVar14 + 1) = 0x6953646578696621;
            *(undefined1 *)(puVar14 + 4) = 0;
            puVar14[3] = 0x2928657a;
            FUN_109ac3188(0xffffff29,&stack0xffffffffffffffc0,&DAT_10f598457,&UNK_10f597913,0xa0a);
          }
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
          (*pcVar10)();
        }
        if ((*param_2 & 0x1d0000) != 0x10000) {
          uVar12 = uVar23 - 0x20000 >> 0x11 | uVar23 << 0xf;
          if ((int)uVar12 < 4) {
            if (uVar12 != 0) {
              if (uVar12 != 2) goto LAB_109a8e730;
              puVar20 = *(undefined8 **)(param_2 + 2);
              if ((*param_3 & 0x1f0000) == 0x10000) {
                FUN_109a8ec3c(param_3,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x000109a8e70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*(long *)*puVar20 + 0x18))((long *)*puVar20,puVar20,param_3,0xffffffff)
                ;
                return;
              }
              uStack_90._0_4_ = 0x42ff0000;
              auStack_88[1] = 0;
              auStack_88[2] = 0;
              uStack_90._4_4_ = 0;
              auStack_88[0] = 0;
              auStack_88[0xb] = 0;
              auStack_88[9] = 0;
              auStack_88[10] = 0;
              auStack_88[7] = 0;
              auStack_88[8] = 0;
              auStack_88[5] = 0;
              auStack_88[6] = 0;
              auStack_88[3] = 0;
              auStack_88[4] = 0;
              unaff_x25 = &stack0xffffffffffffffc0;
              (**(code **)(*(long *)*puVar20 + 0x18))
                        ((long *)*puVar20,puVar20,&uStack_90,0xffffffff);
              FUN_109a479a0(&uStack_90,param_3);
              if (0 < uStack_90._4_4_) {
                lVar24 = 0;
                do {
                  auStack_88[lVar24] = 0;
                  lVar24 = lVar24 + 1;
                } while (lVar24 < uStack_90._4_4_);
              }
              bVar11 = true;
              goto LAB_109a8e7f8;
            }
          }
          else {
            if (uVar12 == 4) {
              puVar15 = *(uint **)(param_2 + 2);
              lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
              do {
                uVar23 = 0xffffffff;
                puVar17 = param_3;
                FUN_109a8b904(param_3,0xffffffff);
                if (-1 < (int)*param_3) {
LAB_109ac61c8:
                  if (*(long *)(puVar15 + 8) != 0) {
                    uVar12 = puVar15[1];
                    uVar33 = (ulong)uVar12;
                    if ((int)uVar12 < 3) {
                      lVar25 = (long)(int)puVar15[3] * (long)(int)puVar15[2];
                    }
                    else {
                      lVar25 = 1;
                      piVar28 = *(int **)(puVar15 + 0xc);
                      uVar21 = uVar33;
                      do {
                        lVar25 = lVar25 * *piVar28;
                        uVar21 = uVar21 - 1;
                        piVar28 = piVar28 + 1;
                      } while (uVar21 != 0);
                    }
                    if (lVar25 != 0) {
                      uVar21 = (ulong)(int)uVar12;
                      if ((int)uVar12 < 1) {
                        lVar25 = 0;
                        uVar30 = uVar21;
                        if (uVar12 != 0) goto LAB_109ac6268;
                        uStack_150 = 0;
                        lVar22 = *(long *)(puVar15 + 0xc);
                        lVar27 = -1;
                      }
                      else {
                        lVar25 = *(long *)(*(long *)(puVar15 + 0xe) + uVar33 * 8 + -8);
                        uVar30 = uVar33;
LAB_109ac6268:
                        uVar29 = 0;
                        lVar22 = *(long *)(puVar15 + 0xc);
                        do {
                          (&uStack_148)[uVar29] = (long)*(int *)(lVar22 + uVar29 * 4);
                          uVar29 = uVar29 + 1;
                        } while (uVar30 != uVar29);
                        lVar27 = uVar21 - 1;
                        (&uStack_148)[lVar27] = (&uStack_148)[lVar27] * lVar25;
                        if (0 < (int)uVar12) {
                          uVar30 = *(ulong *)(puVar15 + 10);
                          puVar19 = *(ulong **)(puVar15 + 0xe);
                          puVar31 = auStack_248;
                          do {
                            uVar32 = *puVar19;
                            uVar29 = 0;
                            if (uVar32 != 0) {
                              uVar29 = uVar30 / uVar32;
                            }
                            *puVar31 = uVar29;
                            uVar30 = uVar30 - uVar29 * uVar32;
                            uVar33 = uVar33 - 1;
                            puVar19 = puVar19 + 1;
                            puVar31 = puVar31 + 1;
                          } while (uVar33 != 0);
                        }
                      }
                      auStack_248[lVar27] = auStack_248[lVar27] * lVar25;
                      FUN_109a8727c(param_3,uVar21,lVar22,*puVar15 & 0xfff,0xffffffff,0,0);
                      uVar23 = *param_3;
                      if ((uVar23 & 0x1f0000) != 0xa0000) {
LAB_109ac6360:
                        if ((uVar23 & 0x1f0000) == 0x10000) {
                          puVar19 = *(ulong **)(param_3 + 2);
                          uStack_370 = (ulong)&uStack_3b0 | 8;
                          uStack_3b0 = *puVar19;
                          uStack_3a8 = puVar19[1];
                          uStack_398 = puVar19[3];
                          uStack_3a0 = puVar19[2];
                          uStack_390 = puVar19[4];
                          uStack_388 = puVar19[5];
                          uStack_378 = puVar19[7];
                          uStack_380 = puVar19[6];
                          puStack_368 = &uStack_360;
                          uStack_360 = 0;
                          uStack_358 = 0;
                          if (puVar19[7] != 0) {
                            piVar28 = (int *)(puVar19[7] + 0x14);
                            do {
                              cVar6 = '\x01';
                              bVar11 = (bool)ExclusiveMonitorPass(piVar28,0x10);
                              if (bVar11) {
                                *piVar28 = *piVar28 + 1;
                                cVar6 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar6 != '\0');
                          }
                          if (*(int *)((long)puVar19 + 4) < 3) {
                            uStack_360 = *(undefined8 *)puVar19[9];
                            uStack_358 = ((undefined8 *)puVar19[9])[1];
                          }
                          else {
                            uStack_3b0 = uStack_3b0 & 0xffffffff;
                            func_0x000109a84868(&uStack_3b0);
                          }
                        }
                        else {
                          FUN_109a8a180(&uStack_3b0,param_3,0xffffffff);
                        }
                        lVar25 = *(long *)(puVar15 + 8);
                        puVar17 = *(uint **)(lVar25 + 8);
                        (**(code **)(*(long *)puVar17 + 0x38))
                                  (puVar17,lVar25,uStack_3a0,puVar15[1],&uStack_148,auStack_248,
                                   *(undefined8 *)(puVar15 + 0xe),puStack_368);
                        uVar23 = (uint)lVar25;
                        if (uStack_378 != 0) {
                          piVar28 = (int *)(uStack_378 + 0x14);
                          do {
                            iVar38 = *piVar28;
                            cVar6 = '\x01';
                            bVar11 = (bool)ExclusiveMonitorPass(piVar28,0x10);
                            if (bVar11) {
                              *piVar28 = iVar38 + -1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                          if (iVar38 + -1 == 0) {
                            puVar17 = (uint *)&uStack_3b0;
                            func_0x000109a848d4();
                          }
                        }
                        uStack_378 = 0;
                        uStack_398 = 0;
                        uStack_3a0 = 0;
                        uStack_388 = 0;
                        uStack_390 = 0;
                        if (0 < (int)uStack_3b0._4_4_) {
                          lVar25 = 0;
                          do {
                            *(undefined4 *)(uStack_370 + lVar25 * 4) = 0;
                            lVar25 = lVar25 + 1;
                          } while (lVar25 < (int)uStack_3b0._4_4_);
                        }
                        puVar20 = &uStack_3b0;
                        puStack_100 = puStack_368;
                        goto LAB_109ac648c;
                      }
                      FUN_109a8bd24(&uStack_3b0,param_3,0xffffffff);
                      uVar33 = *(ulong *)(puVar15 + 8);
                      if ((uVar33 != uStack_390) || (uStack_388 != *(ulong *)(puVar15 + 10))) {
                        plVar18 = *(long **)(uVar33 + 8);
                        if (plVar18 != *(long **)(uStack_390 + 8)) {
                          FUN_109ac5638(&uStack_3b0);
                          uVar23 = *param_3;
                          goto LAB_109ac6360;
                        }
                        if (0 < (int)uStack_3b0._4_4_) {
                          lVar22 = 0;
                          uVar21 = uStack_388;
                          do {
                            uVar29 = *(ulong *)(uStack_378 + lVar22);
                            uVar30 = 0;
                            if (uVar29 != 0) {
                              uVar30 = uVar21 / uVar29;
                            }
                            *(ulong *)((long)alStack_350 + lVar22 + 8) = uVar30;
                            uVar21 = uVar21 - uVar30 * uVar29;
                            lVar22 = lVar22 + 8;
                          } while ((ulong)uStack_3b0._4_4_ * 8 - lVar22 != 0);
                        }
                        alStack_350[(int)puVar15[1]] = alStack_350[(int)puVar15[1]] * lVar25;
                        (**(code **)(*plVar18 + 0x48))();
                      }
                      uVar23 = (uint)uVar33;
                      puVar17 = (uint *)&uStack_3b0;
                      FUN_109ac5638();
                      goto LAB_109ac64a4;
                    }
                  }
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) goto FUN_109a8e944;
                  goto LAB_109ac65c4;
                }
                uVar12 = *puVar15;
                uVar13 = (uint)puVar17;
                if (uVar13 == (uVar12 & 0xfff)) goto LAB_109ac61c8;
                if (((uVar12 ^ uVar13) & 0xff8) != 0) {
                  puVar14 = (undefined4 *)0x24;
                  func_0x000107c2ae8c();
                  *puVar14 = 1;
                  uStack_148 = puVar14 + 1;
                  uStack_140 = 0x1e;
                  *(undefined1 *)((long)puVar14 + 0x22) = 0;
                  *(undefined8 *)(puVar14 + 3) = 0x5643203d3d202928;
                  *(undefined8 *)(puVar14 + 1) = 0x736c656e6e616863;
                  *(undefined8 *)((long)puVar14 + 0x1a) = 0x296570797464284e;
                  *(undefined8 *)((long)puVar14 + 0x12) = 0x435f54414d5f5643;
                  FUN_109ac3188(0xffffff29,&uStack_148,&UNK_10f595fe6,&UNK_10f59b211,0x308);
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x109ac65c4);
                  (*pcVar10)();
                }
                if ((int)uVar13 < 0) {
                  puVar35 = param_3;
                  FUN_109a8b904(param_3,0xffffffff);
                }
                else {
                  puVar35 = (uint *)(ulong)(uVar12 & 0xff8 | uVar13 & 7);
                }
              } while ((((uint)puVar35 ^ uVar12) & 7) == 0);
              FUN_109ac6640(&uStack_148,puVar15,0x1000000);
              puVar17 = (uint *)&uStack_148;
              FUN_109a41858(0x3ff0000000000000,0,puVar17,param_3,puVar35);
              uVar23 = (uint)param_3;
              if (lStack_110 != 0) {
                piVar28 = (int *)(lStack_110 + 0x14);
                do {
                  iVar38 = *piVar28;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar28,0x10);
                  if (bVar11) {
                    *piVar28 = iVar38 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar38 + -1 == 0) {
                  puVar17 = (uint *)&uStack_148;
                  func_0x000109a848d4();
                }
              }
              lStack_110 = 0;
              uStack_130 = 0;
              uStack_138 = 0;
              uStack_120 = 0;
              uStack_128 = 0;
              if (0 < uStack_148._4_4_) {
                lVar25 = 0;
                do {
                  *(undefined4 *)(lStack_108 + lVar25 * 4) = 0;
                  lVar25 = lVar25 + 1;
                } while (lVar25 < uStack_148._4_4_);
              }
              puVar20 = &uStack_148;
LAB_109ac648c:
              if (puStack_100 != puVar20 + 10 && puStack_100 != (undefined8 *)0x0) {
                puVar17 = (uint *)puStack_100[-1];
                _free();
              }
LAB_109ac64a4:
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
                return;
              }
LAB_109ac65c4:
              ___stack_chk_fail();
              FUN_109ac5638(&uStack_3b0);
              __Unwind_Resume();
              uVar33 = *(ulong *)(puVar17 + 8);
              if (uVar33 == 0) {
                *extraout_x8 = 0x42ff0000;
                extraout_x8[3] = 0;
                extraout_x8[4] = 0;
                extraout_x8[1] = 0;
                extraout_x8[2] = 0;
                extraout_x8[7] = 0;
                extraout_x8[8] = 0;
                extraout_x8[5] = 0;
                extraout_x8[6] = 0;
                extraout_x8[0xb] = 0;
                extraout_x8[0xc] = 0;
                extraout_x8[9] = 0;
                extraout_x8[10] = 0;
                extraout_x8[0xe] = 0;
                extraout_x8[0xf] = 0;
                extraout_x8[0xc] = 0;
                extraout_x8[0xd] = 0;
                puVar15 = extraout_x8 + 0x14;
                puVar15[0] = 0;
                puVar15[1] = 0;
                *(uint **)(extraout_x8 + 0x10) = extraout_x8 + 2;
                *(uint **)(extraout_x8 + 0x12) = puVar15;
                extraout_x8[0x16] = 0;
                extraout_x8[0x17] = 0;
              }
              else {
                uStack_408 = uVar33;
                FUN_109ac437c();
                _pthread_mutex_lock(*(undefined8 *)((uVar33 % 0x1f) * 8 + 0x11374c830));
                piVar28 = (int *)(*(long *)(puVar17 + 8) + 0x14);
                do {
                  iVar38 = *piVar28;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar28,0x10);
                  if (bVar11) {
                    *piVar28 = iVar38 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar38 == 0) {
                  plVar18 = *(long **)(*(long *)(puVar17 + 8) + 8);
                  (**(code **)(*plVar18 + 0x28))(plVar18,*(long *)(puVar17 + 8),uVar23 | 0x3000000);
                }
                lVar24 = *(long *)(*(long *)(puVar17 + 8) + 0x18);
                if (lVar24 == 0) {
                  piVar28 = (int *)(*(long *)(puVar17 + 8) + 0x14);
                  do {
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(piVar28,0x10);
                    if (bVar11) {
                      *piVar28 = *piVar28 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (*(long *)(*(long *)(puVar17 + 8) + 0x18) == 0) {
                    puVar14 = (undefined4 *)0x3c;
                    func_0x000107c2ae8c();
                    *(undefined8 *)(puVar14 + 3) = 0x2026262030203d21;
                    *(undefined8 *)(puVar14 + 1) = 0x20617461643e2d75;
                    *puVar14 = 1;
                    puStack_418 = puVar14 + 1;
                    uStack_410 = 0x37;
                    *(undefined1 *)((long)puVar14 + 0x3b) = 0;
                    *(undefined8 *)(puVar14 + 7) = 0x6f20676e69707061;
                    *(undefined8 *)(puVar14 + 5) = 0x6d20726f72724522;
                    *(undefined8 *)(puVar14 + 0xb) = 0x6d2074736f68206f;
                    *(undefined8 *)(puVar14 + 9) = 0x742074614d552066;
                    *(undefined8 *)((long)puVar14 + 0x33) = 0x222e79726f6d656d;
                    FUN_109ac3188(0xffffff29,&puStack_418,&UNK_10f59b2f8,&UNK_10f59b211,0x2e0);
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x109ac686c);
                    (*pcVar10)();
                  }
                  *extraout_x8 = 0x42ff0000;
                  extraout_x8[3] = 0;
                  extraout_x8[4] = 0;
                  extraout_x8[1] = 0;
                  extraout_x8[2] = 0;
                  extraout_x8[7] = 0;
                  extraout_x8[8] = 0;
                  extraout_x8[5] = 0;
                  extraout_x8[6] = 0;
                  extraout_x8[0xb] = 0;
                  extraout_x8[0xc] = 0;
                  extraout_x8[9] = 0;
                  extraout_x8[10] = 0;
                  extraout_x8[0xe] = 0;
                  extraout_x8[0xf] = 0;
                  extraout_x8[0xc] = 0;
                  extraout_x8[0xd] = 0;
                  puVar15 = extraout_x8 + 0x14;
                  puVar15[0] = 0;
                  puVar15[1] = 0;
                  *(uint **)(extraout_x8 + 0x10) = extraout_x8 + 2;
                  *(uint **)(extraout_x8 + 0x12) = puVar15;
                  extraout_x8[0x16] = 0;
                  extraout_x8[0x17] = 0;
                }
                else {
                  FUN_109a855e4(extraout_x8,puVar17[1],*(undefined8 *)(puVar17 + 0xc),
                                *puVar17 & 0xfff,lVar24 + *(long *)(puVar17 + 10),
                                *(undefined8 *)(puVar17 + 0xe));
                  *extraout_x8 = *puVar17;
                  lVar25 = *(long *)(puVar17 + 8);
                  lVar22 = *(long *)(puVar17 + 10);
                  *(long *)(extraout_x8 + 0xe) = lVar25;
                  lVar24 = *(long *)(lVar25 + 0x18);
                  *(long *)(extraout_x8 + 4) = lVar24 + lVar22;
                  *(long *)(extraout_x8 + 6) = lVar24;
                  lVar24 = lVar24 + *(long *)(lVar25 + 0x28);
                  *(long *)(extraout_x8 + 8) = lVar24;
                  *(long *)(extraout_x8 + 10) = lVar24;
                }
                uVar33 = uStack_408;
                FUN_109ac437c();
                _pthread_mutex_unlock(*(undefined8 *)((uVar33 % 0x1f) * 8 + 0x11374c830));
              }
              return;
            }
            if (uVar12 != 5) {
LAB_109a8e730:
              puVar14 = (undefined4 *)0x8;
              func_0x000107c2ae8c();
              *puVar14 = 1;
              uStack_90 = (undefined8 *)(puVar14 + 1);
              *(undefined1 *)uStack_90 = 0;
              auStack_88[0] = 0;
              auStack_88[1] = 0;
              FUN_109ac3188(0xffffff2b,&uStack_90,&UNK_10f595fe6,&UNK_10f597913,0x86b);
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x109a8e774);
              (*pcVar10)();
            }
          }
        }
        if (uVar23 == 0x10000) {
          puVar20 = *(undefined8 **)(param_2 + 2);
          unaff_x26 = (ulong)&uStack_90 | 8;
          auStack_88[0] = (undefined4)puVar20[1];
          auStack_88[1] = (undefined4)((ulong)puVar20[1] >> 0x20);
          uStack_90._0_4_ = (undefined4)*puVar20;
          uStack_90._4_4_ = (int)((ulong)*puVar20 >> 0x20);
          auStack_88[4] = (undefined4)puVar20[3];
          auStack_88[5] = (undefined4)((ulong)puVar20[3] >> 0x20);
          auStack_88[2] = (undefined4)puVar20[2];
          auStack_88[3] = (undefined4)((ulong)puVar20[2] >> 0x20);
          unaff_x27 = puVar20[7];
          auStack_88[8] = (undefined4)puVar20[5];
          auStack_88[9] = (undefined4)((ulong)puVar20[5] >> 0x20);
          auStack_88[6] = (undefined4)puVar20[4];
          auStack_88[7] = (undefined4)((ulong)puVar20[4] >> 0x20);
          auStack_88[10] = (undefined4)puVar20[6];
          auStack_88[0xb] = (undefined4)((ulong)puVar20[6] >> 0x20);
          unaff_x25 = &stack0xffffffffffffffc0;
          if (puVar20[7] != 0) {
            piVar28 = (int *)(puVar20[7] + 0x14);
            do {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar28,0x10);
              if (bVar11) {
                *piVar28 = *piVar28 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          if (2 < *(int *)((long)puVar20 + 4)) {
            uStack_90._4_4_ = 0;
            func_0x000109a84868(&uStack_90);
          }
        }
        else {
          FUN_109a8a180(&uStack_90,param_2,0xffffffff);
        }
        FUN_109a479a0(&uStack_90,param_3);
        if (unaff_x27 != 0) {
          piVar28 = (int *)(unaff_x27 + 0x14);
          do {
            iVar38 = *piVar28;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar28,0x10);
            if (bVar11) {
              *piVar28 = iVar38 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar38 + -1 == 0) {
            func_0x000109a848d4(&uStack_90);
          }
        }
        if (0 < uStack_90._4_4_) {
          lVar24 = 0;
          do {
            *(undefined4 *)(unaff_x26 + lVar24 * 4) = 0;
            lVar24 = lVar24 + 1;
          } while (lVar24 < uStack_90._4_4_);
        }
        bVar11 = unaff_x25 == &stack0xffffffffffffffc0;
LAB_109a8e7f8:
        auStack_88[9] = 0;
        auStack_88[8] = 0;
        auStack_88[7] = 0;
        auStack_88[6] = 0;
        auStack_88[5] = 0;
        auStack_88[4] = 0;
        auStack_88[3] = 0;
        auStack_88[2] = 0;
        if (!bVar11 && unaff_x25 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(unaff_x25 + -8));
        }
        return;
      }
    }
    ___stack_chk_fail();
  }
  puVar14 = (undefined4 *)0x28;
  func_0x000107c2ae8c();
  *puVar14 = 1;
  pppppppdStack_4c0 = (double *******)(puVar14 + 1);
  pppppppdStack_4b8 = (double *******)0x22;
  *(undefined8 *)(puVar14 + 3) = 0x204632335f564320;
  *(undefined8 *)(puVar14 + 1) = 0x3d3d206874706564;
  *(undefined1 *)((long)puVar14 + 0x26) = 0;
  *(undefined2 *)(puVar14 + 9) = 0x4634;
  *(undefined8 *)(puVar14 + 7) = 0x365f5643203d3d20;
  *(undefined8 *)(puVar14 + 5) = 0x6874706564207c7c;
  FUN_109ac3188(0xffffff29,&pppppppdStack_4c0,&DAT_10f3dd8e0,&UNK_10f5972ca,0x572);
LAB_109a617a4:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109a617a8);
  (*pcVar10)();
}



/* Entry: 109a61878; end: 109a618cf;  */

void FUN_109a61878(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if ((int)param_3 < 8) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    pfVar2 = (float *)(param_2 + 0x10);
    pauVar5 = (undefined1 (*) [16])(param_1 + 0x10);
    do {
      auVar6 = pauVar5[-1];
      auVar7 = *pauVar5;
      auVar8 = NEON_frsqrte(auVar6,4);
      auVar12._0_4_ = auVar6._0_4_ * auVar8._0_4_;
      auVar12._4_4_ = auVar6._4_4_ * auVar8._4_4_;
      auVar12._8_4_ = auVar6._8_4_ * auVar8._8_4_;
      auVar12._12_4_ = auVar6._12_4_ * auVar8._12_4_;
      auVar13 = NEON_frsqrts(auVar12,auVar8,4);
      auVar9._0_4_ = auVar8._0_4_ * auVar13._0_4_;
      auVar9._4_4_ = auVar8._4_4_ * auVar13._4_4_;
      auVar9._8_4_ = auVar8._8_4_ * auVar13._8_4_;
      auVar9._12_4_ = auVar8._12_4_ * auVar13._12_4_;
      auVar8._0_4_ = auVar6._0_4_ * auVar9._0_4_;
      auVar8._4_4_ = auVar6._4_4_ * auVar9._4_4_;
      auVar8._8_4_ = auVar6._8_4_ * auVar9._8_4_;
      auVar8._12_4_ = auVar6._12_4_ * auVar9._12_4_;
      auVar6 = NEON_frsqrts(auVar8,auVar9,4);
      auVar13 = NEON_frsqrte(auVar7,4);
      auVar10._0_4_ = auVar7._0_4_ * auVar13._0_4_;
      auVar10._4_4_ = auVar7._4_4_ * auVar13._4_4_;
      auVar10._8_4_ = auVar7._8_4_ * auVar13._8_4_;
      auVar10._12_4_ = auVar7._12_4_ * auVar13._12_4_;
      auVar8 = NEON_frsqrts(auVar10,auVar13,4);
      auVar11._0_4_ = auVar13._0_4_ * auVar8._0_4_;
      auVar11._4_4_ = auVar13._4_4_ * auVar8._4_4_;
      auVar11._8_4_ = auVar13._8_4_ * auVar8._8_4_;
      auVar11._12_4_ = auVar13._12_4_ * auVar8._12_4_;
      auVar13._0_4_ = auVar7._0_4_ * auVar11._0_4_;
      auVar13._4_4_ = auVar7._4_4_ * auVar11._4_4_;
      auVar13._8_4_ = auVar7._8_4_ * auVar11._8_4_;
      auVar13._12_4_ = auVar7._12_4_ * auVar11._12_4_;
      auVar7 = NEON_frsqrts(auVar13,auVar11,4);
      pfVar2[-2] = auVar6._8_4_ * auVar9._8_4_;
      pfVar2[-1] = auVar6._12_4_ * auVar9._12_4_;
      pfVar2[-4] = auVar6._0_4_ * auVar9._0_4_;
      pfVar2[-3] = auVar6._4_4_ * auVar9._4_4_;
      pfVar2[2] = auVar7._8_4_ * auVar11._8_4_;
      pfVar2[3] = auVar7._12_4_ * auVar11._12_4_;
      *pfVar2 = auVar7._0_4_ * auVar11._0_4_;
      pfVar2[1] = auVar7._4_4_ * auVar11._4_4_;
      uVar1 = uVar1 + 8;
      pfVar2 = pfVar2 + 8;
      pauVar5 = pauVar5 + 2;
    } while (uVar1 <= param_3 - 8);
  }
  if ((int)uVar1 < (int)param_3) {
    lVar3 = (ulong)param_3 - (uVar1 & 0xffffffff);
    pfVar2 = (float *)(param_1 + (uVar1 & 0xffffffff) * 4);
    pfVar4 = (float *)(param_2 + (uVar1 & 0xffffffff) * 4);
    do {
      *pfVar4 = 1.0 / SQRT(*pfVar2);
      lVar3 = lVar3 + -1;
      pfVar2 = pfVar2 + 1;
      pfVar4 = pfVar4 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 109a618d0; end: 109a61a5b;  */

bool FUN_109a618d0(uint *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  uint uStack_98;
  uint uStack_94;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  long alStack_50 [2];
  
  if ((param_3 < 0) && (0xff < param_4)) {
    bVar9 = true;
  }
  else if ((param_4 < param_3) || ((0xff < param_3 || (param_4 < 0)))) {
    bVar9 = false;
    param_2[0] = 0;
    param_2[1] = 0;
  }
  else {
    bVar9 = true;
    FUN_109a890bc(auStack_a0,param_1,1,0);
    if (0 < (int)uStack_98) {
      uVar10 = 0;
      bVar9 = false;
      do {
        if (0 < (int)uStack_94) {
          uVar12 = 0;
          do {
            bVar4 = *(byte *)(lStack_90 + *plStack_58 * uVar10 + uVar12);
            bVar7 = true;
            bVar8 = false;
            if (param_3 <= (int)(uint)bVar4) {
              bVar8 = SBORROW4(param_4,(uint)bVar4);
              bVar7 = (int)(param_4 - (uint)bVar4) < 0;
            }
            if (bVar7 != bVar8) {
              uVar1 = (*param_1 >> 3 & 0x1ff) + 1;
              uVar6 = 0;
              if (uVar1 != 0) {
                uVar6 = (uint)uVar12 / uVar1;
              }
              *param_2 = uVar6;
              param_2[1] = (uint)uVar10;
              goto LAB_109a619c0;
            }
            uVar12 = uVar12 + 1;
          } while (uStack_94 != uVar12);
        }
        uVar10 = uVar10 + 1;
        bVar9 = uStack_98 <= uVar10;
      } while (uVar10 != uStack_98);
      bVar9 = true;
    }
LAB_109a619c0:
    if (lStack_68 != 0) {
      piVar2 = (int *)(lStack_68 + 0x14);
      do {
        iVar3 = *piVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(auStack_a0);
      }
    }
    lStack_68 = 0;
    uStack_88 = 0;
    lStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (0 < iStack_9c) {
      lVar11 = 0;
      do {
        *(undefined4 *)(lStack_60 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iStack_9c);
    }
    if (plStack_58 != alStack_50 && plStack_58 != (long *)0x0) {
      _free(plStack_58[-1]);
    }
  }
  return bVar9;
}



/* Entry: 109a61a5c; end: 109a61bef;  */

bool FUN_109a61a5c(uint *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  uint uStack_98;
  uint uStack_94;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  long alStack_50 [2];
  
  if ((param_3 < -0x80) && (0x7f < param_4)) {
    bVar8 = true;
  }
  else if ((param_4 < param_3) || ((0x7f < param_3 || (param_4 < -0x80)))) {
    bVar8 = false;
    param_2[0] = 0;
    param_2[1] = 0;
  }
  else {
    bVar8 = true;
    FUN_109a890bc(auStack_a0,param_1,1,0);
    if (0 < (int)uStack_98) {
      uVar9 = 0;
      bVar8 = false;
      do {
        if (0 < (int)uStack_94) {
          uVar11 = 0;
          do {
            cVar4 = *(char *)(lStack_90 + *plStack_58 * uVar9 + uVar11);
            bVar6 = true;
            bVar7 = false;
            if (param_3 <= cVar4) {
              bVar7 = SBORROW4(param_4,(int)cVar4);
              bVar6 = param_4 - cVar4 < 0;
            }
            if (bVar6 != bVar7) {
              uVar1 = (*param_1 >> 3 & 0x1ff) + 1;
              uVar5 = 0;
              if (uVar1 != 0) {
                uVar5 = (uint)uVar11 / uVar1;
              }
              *param_2 = uVar5;
              param_2[1] = (uint)uVar9;
              goto LAB_109a61b54;
            }
            uVar11 = uVar11 + 1;
          } while (uStack_94 != uVar11);
        }
        uVar9 = uVar9 + 1;
        bVar8 = uStack_98 <= uVar9;
      } while (uVar9 != uStack_98);
      bVar8 = true;
    }
LAB_109a61b54:
    if (lStack_68 != 0) {
      piVar2 = (int *)(lStack_68 + 0x14);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(auStack_a0);
      }
    }
    lStack_68 = 0;
    uStack_88 = 0;
    lStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (0 < iStack_9c) {
      lVar10 = 0;
      do {
        *(undefined4 *)(lStack_60 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iStack_9c);
    }
    if (plStack_58 != alStack_50 && plStack_58 != (long *)0x0) {
      _free(plStack_58[-1]);
    }
  }
  return bVar8;
}



/* Entry: 109a61bf0; end: 109a61d7b;  */

bool FUN_109a61bf0(uint *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  uint uStack_98;
  uint uStack_94;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  long alStack_50 [2];
  
  if ((param_3 < 0) && (0xffff < param_4)) {
    bVar9 = true;
  }
  else if ((param_4 < param_3) || ((0xffff < param_3 || (param_4 < 0)))) {
    bVar9 = false;
    param_2[0] = 0;
    param_2[1] = 0;
  }
  else {
    bVar9 = true;
    FUN_109a890bc(auStack_a0,param_1,1,0);
    if (0 < (int)uStack_98) {
      uVar10 = 0;
      bVar9 = false;
      do {
        if (0 < (int)uStack_94) {
          uVar12 = 0;
          do {
            uVar4 = *(ushort *)(lStack_90 + *plStack_58 * uVar10 + uVar12 * 2);
            bVar7 = true;
            bVar8 = false;
            if (param_3 <= (int)(uint)uVar4) {
              bVar8 = SBORROW4(param_4,(uint)uVar4);
              bVar7 = (int)(param_4 - (uint)uVar4) < 0;
            }
            if (bVar7 != bVar8) {
              uVar1 = (*param_1 >> 3 & 0x1ff) + 1;
              uVar6 = 0;
              if (uVar1 != 0) {
                uVar6 = (uint)uVar12 / uVar1;
              }
              *param_2 = uVar6;
              param_2[1] = (uint)uVar10;
              goto LAB_109a61ce0;
            }
            uVar12 = uVar12 + 1;
          } while (uStack_94 != uVar12);
        }
        uVar10 = uVar10 + 1;
        bVar9 = uStack_98 <= uVar10;
      } while (uVar10 != uStack_98);
      bVar9 = true;
    }
LAB_109a61ce0:
    if (lStack_68 != 0) {
      piVar2 = (int *)(lStack_68 + 0x14);
      do {
        iVar3 = *piVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(auStack_a0);
      }
    }
    lStack_68 = 0;
    uStack_88 = 0;
    lStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (0 < iStack_9c) {
      lVar11 = 0;
      do {
        *(undefined4 *)(lStack_60 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iStack_9c);
    }
    if (plStack_58 != alStack_50 && plStack_58 != (long *)0x0) {
      _free(plStack_58[-1]);
    }
  }
  return bVar9;
}



/* Entry: 109a61d7c; end: 109a61f0f;  */

bool FUN_109a61d7c(uint *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  uint uStack_98;
  uint uStack_94;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  long alStack_50 [2];
  
  if ((param_3 < -0x8000) && (0x7fff < param_4)) {
    bVar9 = true;
  }
  else if ((param_4 < param_3) || ((0x7fff < param_3 || (param_4 < -0x8000)))) {
    bVar9 = false;
    param_2[0] = 0;
    param_2[1] = 0;
  }
  else {
    bVar9 = true;
    FUN_109a890bc(auStack_a0,param_1,1,0);
    if (0 < (int)uStack_98) {
      uVar10 = 0;
      bVar9 = false;
      do {
        if (0 < (int)uStack_94) {
          uVar12 = 0;
          do {
            sVar4 = *(short *)(lStack_90 + *plStack_58 * uVar10 + uVar12 * 2);
            bVar7 = true;
            bVar8 = false;
            if (param_3 <= sVar4) {
              bVar8 = SBORROW4(param_4,(int)sVar4);
              bVar7 = param_4 - sVar4 < 0;
            }
            if (bVar7 != bVar8) {
              uVar1 = (*param_1 >> 3 & 0x1ff) + 1;
              uVar6 = 0;
              if (uVar1 != 0) {
                uVar6 = (uint)uVar12 / uVar1;
              }
              *param_2 = uVar6;
              param_2[1] = (uint)uVar10;
              goto LAB_109a61e74;
            }
            uVar12 = uVar12 + 1;
          } while (uStack_94 != uVar12);
        }
        uVar10 = uVar10 + 1;
        bVar9 = uStack_98 <= uVar10;
      } while (uVar10 != uStack_98);
      bVar9 = true;
    }
LAB_109a61e74:
    if (lStack_68 != 0) {
      piVar2 = (int *)(lStack_68 + 0x14);
      do {
        iVar3 = *piVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(auStack_a0);
      }
    }
    lStack_68 = 0;
    uStack_88 = 0;
    lStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (0 < iStack_9c) {
      lVar11 = 0;
      do {
        *(undefined4 *)(lStack_60 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iStack_9c);
    }
    if (plStack_58 != alStack_50 && plStack_58 != (long *)0x0) {
      _free(plStack_58[-1]);
    }
  }
  return bVar9;
}



/* Entry: 109a61f10; end: 109a62077;  */

bool FUN_109a61f10(uint *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  uint uStack_98;
  uint uStack_94;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  long alStack_50 [2];
  
  if (param_4 < param_3) {
    bVar7 = false;
    param_2[0] = 0;
    param_2[1] = 0;
  }
  else {
    bVar7 = true;
    FUN_109a890bc(auStack_a0,param_1,1,0);
    if (0 < (int)uStack_98) {
      uVar8 = 0;
      bVar7 = false;
      do {
        if (0 < (int)uStack_94) {
          uVar10 = 0;
          do {
            iVar3 = *(int *)(lStack_90 + *plStack_58 * uVar8 + uVar10 * 4);
            if (iVar3 < param_3 || param_4 < iVar3) {
              uVar1 = (*param_1 >> 3 & 0x1ff) + 1;
              uVar6 = 0;
              if (uVar1 != 0) {
                uVar6 = (uint)uVar10 / uVar1;
              }
              *param_2 = uVar6;
              param_2[1] = (uint)uVar8;
              goto LAB_109a61fdc;
            }
            uVar10 = uVar10 + 1;
          } while (uStack_94 != uVar10);
        }
        uVar8 = uVar8 + 1;
        bVar7 = uStack_98 <= uVar8;
      } while (uVar8 != uStack_98);
      bVar7 = true;
    }
LAB_109a61fdc:
    if (lStack_68 != 0) {
      piVar2 = (int *)(lStack_68 + 0x14);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(auStack_a0);
      }
    }
    lStack_68 = 0;
    uStack_88 = 0;
    lStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (0 < iStack_9c) {
      lVar9 = 0;
      do {
        *(undefined4 *)(lStack_60 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_9c);
    }
    if (plStack_58 != alStack_50 && plStack_58 != (long *)0x0) {
      _free(plStack_58[-1]);
    }
  }
  return bVar7;
}



/* Entry: 109a62078; end: 109a62a53;  */

bool FUN_109a62078(double param_1,double param_2,uint *param_3,ulong param_4,int *param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  long *plVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  double dVar23;
  double dVar24;
  long lStack_220;
  undefined8 uStack_218;
  uint uStack_210;
  int iStack_20c;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong *puStack_1d0;
  ulong *puStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined4 *puStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  undefined4 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar10 = *(ulong **)(param_3 + 2);
    uStack_110 = (ulong)&uStack_150 | 8;
    uStack_148 = puVar10[1];
    uStack_150 = *puVar10;
    uStack_138 = puVar10[3];
    uStack_140 = puVar10[2];
    uStack_128 = puVar10[5];
    uStack_130 = puVar10[4];
    uStack_118 = puVar10[7];
    uStack_120 = puVar10[6];
    puStack_108 = &uStack_100;
    uStack_100 = 0;
    uStack_f8 = 0;
    if (puVar10[7] != 0) {
      piVar16 = (int *)(puVar10[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar5) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar10 + 4) < 3) {
      uStack_100 = *(ulong *)puVar10[9];
      uStack_f8 = ((ulong *)puVar10[9])[1];
    }
    else {
      uStack_150 = uStack_150 & 0xffffffff;
      func_0x000109a84868(&uStack_150);
    }
  }
  else {
    FUN_109a8a180(&uStack_150,param_3,0xffffffff);
  }
  if (uStack_150._4_4_ < 3) {
    uStack_1b0 = 0xffffffffffffffff;
    uVar18 = (uint)(uStack_150 & 7);
    if (uVar18 < 5) {
      iVar13 = -0x80000000;
      if (-2147483648.0 < param_1) {
        iVar13 = (int)param_1 - (uint)(param_1 < (double)(int)param_1);
      }
      iVar15 = (int)param_2;
      pcVar4 = (code *)(&PTR_FUN_110b21c90)[uStack_150 & 7];
      uStack_210 = (uint)uStack_150;
      iStack_20c = uStack_150._4_4_;
      if ((double)iVar15 < param_2) {
        iVar15 = iVar15 + 1;
      }
      uStack_208 = uStack_148;
      iVar17 = 0x7fffffff;
      if (param_2 <= 2147483647.0) {
        iVar17 = iVar15 + -1;
      }
      puStack_1d0 = &uStack_208;
      uStack_1f8 = uStack_138;
      uStack_200 = uStack_140;
      uStack_1e8 = uStack_128;
      uStack_1f0 = uStack_130;
      uStack_1d8 = uStack_118;
      uStack_1e0 = uStack_120;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      puStack_1c8 = &uStack_1c0;
      if (uStack_118 == 0) {
LAB_109a62510:
        uStack_1c0 = *puStack_108;
        uStack_1b8 = puStack_108[1];
      }
      else {
        piVar16 = (int *)(uStack_118 + 0x14);
        do {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar5) {
            *piVar16 = *piVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uStack_150._4_4_ < 3) goto LAB_109a62510;
        iStack_20c = 0;
        func_0x000109a84868(&uStack_210,&uStack_150);
      }
      (*pcVar4)(&uStack_210,&uStack_1b0,iVar13,iVar17);
      if (uStack_1d8 != 0) {
        piVar16 = (int *)(uStack_1d8 + 0x14);
        do {
          iVar13 = *piVar16;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar5) {
            *piVar16 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 + -1 == 0) {
          func_0x000109a848d4(&uStack_210);
        }
      }
      uStack_1d8 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      if (0 < iStack_20c) {
        lVar14 = 0;
        do {
          *(undefined4 *)((long)puStack_1d0 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_20c);
      }
      if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (ulong *)0x0) {
        _free(puStack_1c8[-1]);
      }
      iVar19 = (int)uStack_1b0;
      if ((int)uStack_1b0 < 0) {
LAB_109a625e0:
        bVar5 = true;
        goto LAB_109a625e4;
      }
    }
    else {
      iVar13 = ((uint)uStack_150 >> 3 & 0x1ff) + 1;
      if ((((uint)uStack_150 >> 0xe & 1) == 0) ||
         (uVar22 = (long)uStack_148._4_4_ * (long)iVar13 * (long)(int)uStack_148,
         uVar22 - (long)(int)uVar22 != 0)) {
        uVar22 = (ulong)(uint)(uStack_148._4_4_ * iVar13);
        iVar15 = (int)uStack_148;
      }
      else {
        iVar15 = 1;
      }
      iVar17 = (int)uVar22;
      if (uVar18 == 5) {
        iVar20 = 0;
        dVar23 = -3.4028234663852886e+38;
        if (-3.4028234663852886e+38 <= param_1) {
          dVar23 = param_1;
        }
        dVar24 = 3.4028234663852886e+38;
        if (param_2 <= 3.4028234663852886e+38) {
          dVar24 = param_2;
        }
        iVar19 = -1;
        uVar21 = uStack_140;
        do {
          if (iVar15 == 0) goto LAB_109a625e0;
          if (0 < iVar17) {
            uVar11 = 0;
            do {
              uVar18 = *(uint *)(uVar21 + uVar11 * 4);
              uVar18 = (int)uVar18 >> 0x1f & 0x7fffffffU ^ uVar18;
              if ((int)uVar18 <
                  (int)((int)(float)dVar23 >> 0x1f & 0x7fffffffU ^ (uint)(float)dVar23) ||
                  (int)((int)(float)dVar24 >> 0x1f & 0x7fffffffU ^ (uint)(float)dVar24) <=
                  (int)uVar18) {
                iVar19 = 0;
                if (iVar13 != 0) {
                  iVar19 = ((int)uVar11 - iVar20) / iVar13;
                }
                iVar1 = 0;
                if (uStack_148._4_4_ != 0) {
                  iVar1 = iVar19 / uStack_148._4_4_;
                }
                iVar19 = iVar19 - iVar1 * uStack_148._4_4_;
                uStack_1b0 = CONCAT44(iVar1,iVar19);
                break;
              }
              uVar11 = uVar11 + 1;
            } while ((uVar22 & 0xffffffff) != uVar11);
          }
          iVar15 = iVar15 + -1;
          iVar20 = iVar20 - iVar17;
          uVar21 = uVar21 + (uStack_100 & 0xfffffffffffffffc);
        } while (iVar19 < 0);
      }
      else {
        iVar20 = 0;
        iVar19 = -1;
        uVar21 = uStack_140;
        do {
          if (iVar15 == 0) goto LAB_109a625e0;
          if (0 < iVar17) {
            uVar11 = 0;
            do {
              uVar12 = *(ulong *)(uVar21 + uVar11 * 8);
              uVar12 = (long)uVar12 >> 0x3f & 0x7fffffffffffffffU ^ uVar12;
              if ((long)uVar12 <
                  (long)((long)param_1 >> 0x3f & 0x7fffffffffffffffU ^ (ulong)param_1) ||
                  (long)((long)param_2 >> 0x3f & 0x7fffffffffffffffU ^ (ulong)param_2) <=
                  (long)uVar12) {
                iVar19 = 0;
                if (iVar13 != 0) {
                  iVar19 = ((int)uVar11 - iVar20) / iVar13;
                }
                iVar1 = 0;
                if (uStack_148._4_4_ != 0) {
                  iVar1 = iVar19 / uStack_148._4_4_;
                }
                iVar19 = iVar19 - iVar1 * uStack_148._4_4_;
                uStack_1b0 = CONCAT44(iVar1,iVar19);
                break;
              }
              uVar11 = uVar11 + 1;
            } while ((uVar22 & 0xffffffff) != uVar11);
          }
          iVar15 = iVar15 + -1;
          iVar20 = iVar20 - iVar17;
          uVar21 = uVar21 + (uStack_100 & 0xfffffffffffffff8);
        } while (iVar19 < 0);
      }
    }
    if (param_5 != (int *)0x0) {
      *param_5 = iVar19;
      param_5[1] = uStack_1b0._4_4_;
    }
    if ((param_4 & 1) == 0) {
      lStack_220 = 0;
      uStack_218 = 0;
      puStack_190 = (undefined4 *)CONCAT44(uStack_1b0._4_4_ + 1,uStack_1b0._4_4_);
      uStack_1a8 = CONCAT44(iVar19 + 1,iVar19);
      FUN_109a84930(&uStack_e8,&uStack_150,&puStack_190,&uStack_1a8);
      FUN_109aa6644(&puStack_88,0);
      (**(code **)(*plStack_80 + 0x10))(&uStack_1a8,plStack_80,&uStack_e8);
      (**(code **)(*plStack_1a0 + 8))();
      plVar8 = plStack_1a0;
      (**(code **)*plStack_1a0)();
      while (plVar8 != (long *)0x0) {
        puStack_190 = (undefined4 *)0x0;
        plStack_188 = (long *)0x0;
        plVar9 = plVar8;
        _strlen();
        puVar7 = (undefined4 *)(((ulong)plVar9 & 0xfffffffffffffffc) + 8);
        func_0x000107c2ae8c();
        puStack_190 = puVar7 + 1;
        *puVar7 = 1;
        *(undefined1 *)((long)puStack_190 + (long)plVar9) = 0;
        _memcpy(puStack_190,plVar8,plVar9);
        FUN_109a640a8(&lStack_220,&puStack_190);
        puVar7 = puStack_190;
        puStack_190 = (undefined4 *)0x0;
        plStack_188 = (long *)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          piVar16 = puVar7 + -1;
          do {
            iVar13 = *piVar16;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar5) {
              *piVar16 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar13 + -1 == 0) {
            _free(*(undefined8 *)(puVar7 + -3));
          }
        }
        plVar8 = plStack_1a0;
        (**(code **)*plStack_1a0)();
      }
      FUN_109a64180(&uStack_1a8);
      FUN_109a641d4(&puStack_88);
      if (lStack_b0 != 0) {
        piVar16 = (int *)(lStack_b0 + 0x14);
        do {
          iVar13 = *piVar16;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar5) {
            *piVar16 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 + -1 == 0) {
          func_0x000109a848d4(&uStack_e8);
        }
      }
      lStack_b0 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      if (0 < uStack_e8._4_4_) {
        lVar14 = 0;
        do {
          puStack_a8[lVar14] = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < uStack_e8._4_4_);
      }
      if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
        _free(puStack_a0[-1]);
      }
      FUN_109ac2700(&uStack_e8,&UNK_10f597384);
      FUN_109ac3188(0xffffff2d,&uStack_e8,&UNK_10f597379,&UNK_10f5972ca,0x6bb);
      goto LAB_109a62868;
    }
    bVar5 = false;
LAB_109a625e4:
    if (uStack_118 != 0) {
      piVar16 = (int *)(uStack_118 + 0x14);
      do {
        iVar13 = *piVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 + -1 == 0) {
        func_0x000109a848d4(&uStack_150);
      }
    }
    uStack_118 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    if (0 < uStack_150._4_4_) {
      lVar14 = 0;
      do {
        *(undefined4 *)(uStack_110 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < uStack_150._4_4_);
    }
    if (puStack_108 != &uStack_100 && puStack_108 != (ulong *)0x0) {
      _free(puStack_108[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return bVar5;
    }
    ___stack_chk_fail();
  }
  else if (param_5 == (int *)0x0) {
    puStack_88 = &uStack_150;
    plStack_80 = (long *)0x0;
    uStack_e8._0_4_ = 0x42ff0000;
    puStack_a8 = &uStack_e0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_e8._4_4_ = 0;
    uStack_e0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_bc = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    lStack_b0 = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_158 = 0;
    plStack_188 = (long *)0x0;
    uStack_180 = 0;
    puStack_190 = (undefined4 *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    puStack_a0 = &uStack_98;
    FUN_109a9b368(&puStack_190,&puStack_88,&uStack_e8,0,0xffffffff);
    uVar22 = 0xffffffffffffffff;
    while( true ) {
      uVar22 = uVar22 + 1;
      bVar5 = uStack_170 <= uVar22;
      if (bVar5) break;
      plStack_1a0 = plStack_188;
      uStack_198 = 0;
      uStack_1a8 = CONCAT44(uStack_1a8._4_4_,0x1010000);
      puVar6 = &uStack_1a8;
      FUN_109a62078(param_1,param_2,puVar6,param_4,0);
      if (((ulong)puVar6 & 1) == 0) break;
      FUN_109a8350c(&puStack_190);
    }
    if (lStack_b0 != 0) {
      piVar16 = (int *)(lStack_b0 + 0x14);
      do {
        iVar13 = *piVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 + -1 == 0) {
        func_0x000109a848d4(&uStack_e8);
      }
    }
    lStack_b0 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    if (0 < uStack_e8._4_4_) {
      lVar14 = 0;
      do {
        puStack_a8[lVar14] = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < uStack_e8._4_4_);
    }
    if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
      _free(puStack_a0[-1]);
    }
    goto LAB_109a625e4;
  }
  puVar7 = (undefined4 *)0x10;
  func_0x000107c2ae8c();
  *puVar7 = 1;
  uStack_e8 = (undefined8 *)(puVar7 + 1);
  *uStack_e8 = 0x554e203d3d207470;
  uStack_e0 = 10;
  uStack_dc = 0;
  *(undefined1 *)((long)puVar7 + 0xe) = 0;
  *(undefined2 *)(puVar7 + 3) = 0x4c4c;
  FUN_109ac3188(0xffffff29,&uStack_e8,&UNK_10f597379,&UNK_10f5972ca,0x656);
LAB_109a62868:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109a6286c);
  (*pcVar4)();
}


