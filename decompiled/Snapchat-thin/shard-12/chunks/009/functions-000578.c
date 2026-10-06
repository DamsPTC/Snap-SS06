/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109a813dc; end: 109a8159f;  */

void FUN_109a813dc(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined4 auStack_110 [2];
  undefined4 *puStack_108;
  undefined8 uStack_100;
  undefined4 auStack_f8 [2];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_e0 [2];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_b0 = 0x42ff0000;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lStack_70 = (long)&uStack_ac + 4;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  plVar1 = (long *)(param_3 + 4);
  uStack_60 = 0;
  uStack_58 = 0;
  puVar7 = param_3;
  plVar8 = plVar1;
  if (((uint)param_4 != 0xffffffff) && ((*(uint *)(param_2 + 0x10) & 0xfff) != (uint)param_4)) {
    puVar7 = &uStack_b0;
    plVar8 = (long *)&uStack_a0;
  }
  uStack_b8 = 0;
  puStack_c0 = (undefined4 *)(param_2 + 0x10);
  auStack_c8[0] = 0x1010000;
  lStack_d8 = param_2 + 0x70;
  uStack_d0 = 0;
  auStack_e0[0] = 0x1010000;
  lStack_f0 = param_2 + 0xd0;
  uStack_e8 = 0;
  auStack_f8[0] = 0x1010000;
  auStack_110[0] = 0x2010000;
  uStack_100 = 0;
  puStack_108 = puVar7;
  puStack_68 = &uStack_60;
  FUN_109a64f8c(*(undefined8 *)(param_2 + 0x130),*(undefined8 *)(param_2 + 0x138),auStack_c8,
                auStack_e0,auStack_f8,auStack_110,*(undefined4 *)(param_2 + 8));
  if (*plVar8 != *plVar1) {
    auStack_c8[0] = 0x2010000;
    uStack_b8 = 0;
    puStack_c0 = param_3;
    FUN_109a41858(0x3ff0000000000000,0,puVar7,auStack_c8,param_4);
  }
  if (lStack_78 != 0) {
    piVar2 = (int *)(lStack_78 + 0x14);
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
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (0 < (int)uStack_ac) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_ac);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return;
}



/* Entry: 109a815a0; end: 109a81817;  */

/* WARNING: Removing unreachable block (ram,0x000109a79488) */
/* WARNING: Removing unreachable block (ram,0x000109a7948c) */
/* WARNING: Removing unreachable block (ram,0x000109a79494) */
/* WARNING: Removing unreachable block (ram,0x000109a7949c) */
/* WARNING: Removing unreachable block (ram,0x000109a794a0) */
/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000109a81748 */
/* WARNING: Removing unreachable block (ram,0x000109a794c0) */
/* WARNING: Removing unreachable block (ram,0x000109a794c8) */
/* WARNING: Removing unreachable block (ram,0x000109a794dc) */
/* WARNING: Removing unreachable block (ram,0x000109a794ec) */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_109a815a0(undefined **param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined **ppuVar12;
  byte in_b0;
  byte in_register_00005001;
  byte in_register_00005002;
  byte in_register_00005003;
  byte in_register_00005004;
  byte in_register_00005005;
  byte in_register_00005006;
  byte in_register_00005007;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [64];
  undefined4 uStack_140;
  int iStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long lStack_108;
  undefined4 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  int iStack_dc;
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
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined4 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  ppuVar12 = (undefined **)*param_2;
  ppuVar8 = (undefined **)*param_3;
  uVar16 = 0x3ff0000000000000;
  if (ppuVar12 != &PTR_PTR_1132e8ef0) {
    uVar16 = param_2[0x26];
  }
  uVar13 = 0x3ff0000000000000;
  if (ppuVar8 != &PTR_PTR_1132e8ef0) {
    uVar13 = param_3[0x26];
  }
  if ((ppuVar12 == &PTR_PTR_1132e8f10) && ((param_2[0x1c] == 0 || ((double)param_2[0x27] == 0.0))))
  {
    if (ppuVar8 != &PTR_PTR_1132e8ef0) {
      if (ppuVar8 == &PTR_PTR_1132e8ef8) {
        if ((param_3[0x10] == 0) || ((double)param_3[0x27] == 0.0)) {
          lVar14 = -(ulong)((double)param_3[0x2a] == 0.0);
          lVar15 = -(ulong)((double)param_3[0x2b] == 0.0);
          lVar9 = -(ulong)((double)param_3[0x28] == 0.0);
          lVar7 = -(ulong)((double)param_3[0x29] == 0.0);
          in_b0 = ~(byte)lVar9;
          in_register_00005001 = ~(byte)((ulong)lVar9 >> 8);
          in_register_00005002 = ~(byte)((ulong)lVar9 >> 0x10);
          in_register_00005003 = ~(byte)((ulong)lVar9 >> 0x18);
          in_register_00005004 = ~(byte)lVar7;
          in_register_00005005 = ~(byte)((ulong)lVar7 >> 8);
          in_register_00005006 = ~(byte)((ulong)lVar7 >> 0x10);
          in_register_00005007 = ~(byte)((ulong)lVar7 >> 0x18);
          auVar5[1] = in_register_00005001;
          auVar5[0] = in_b0;
          auVar5[2] = in_register_00005002;
          auVar5[3] = in_register_00005003;
          auVar5[4] = in_register_00005004;
          auVar5[5] = in_register_00005005;
          auVar5[6] = in_register_00005006;
          auVar5[7] = in_register_00005007;
          auVar5[8] = ~(byte)lVar14;
          auVar5[9] = ~(byte)((ulong)lVar14 >> 8);
          auVar5[10] = ~(byte)((ulong)lVar14 >> 0x10);
          auVar5[0xb] = ~(byte)((ulong)lVar14 >> 0x18);
          auVar5[0xc] = ~(byte)lVar15;
          auVar5[0xd] = ~(byte)((ulong)lVar15 >> 8);
          auVar5[0xe] = ~(byte)((ulong)lVar15 >> 0x10);
          auVar5[0xf] = ~(byte)((ulong)lVar15 >> 0x18);
          uVar11 = NEON_umaxv(auVar5,4);
          if ((uVar11 & 1) == 0) goto LAB_109a816f8;
        }
        goto LAB_109a81628;
      }
      if (ppuVar8 != &PTR_PTR_1132e8f20) goto LAB_109a8160c;
    }
LAB_109a816f8:
    uVar11 = 4;
    if (ppuVar8 != &PTR_PTR_1132e8f20) {
      uVar11 = 0;
    }
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    FUN_109a82eb0(CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0))))))),uVar13,
                  auStack_180,&PTR_PTR_1132e8f10,*(uint *)(param_2 + 1) & 0xfffffffb | uVar11,
                  param_2 + 2,param_2 + 0xe,param_3 + 2,&uStack_1a0);
    FUN_109a77b50(param_4,auStack_180);
    goto LAB_109a817e8;
  }
LAB_109a8160c:
  if ((ppuVar8 == &PTR_PTR_1132e8f10) && ((param_3[0x1c] == 0 || ((double)param_3[0x27] == 0.0)))) {
    if (ppuVar12 == &PTR_PTR_1132e8ef0) {
LAB_109a81790:
      uVar11 = 4;
      if (ppuVar12 != &PTR_PTR_1132e8f20) {
        uVar11 = 0;
      }
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      FUN_109a82eb0(CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0))))))),uVar16,
                    auStack_180,&PTR_PTR_1132e8f10,*(uint *)(param_3 + 1) & 0xfffffffb | uVar11,
                    param_3 + 2,param_3 + 0xe,param_2 + 2,&uStack_1a0);
      FUN_109a77b50(param_4,auStack_180);
LAB_109a817e8:
      FUN_10918eb6c(auStack_180);
      return;
    }
    if (ppuVar12 == &PTR_PTR_1132e8ef8) {
      if ((param_2[0x10] == 0) || ((double)param_2[0x27] == 0.0)) {
        lVar14 = -(ulong)((double)param_2[0x2a] == 0.0);
        lVar15 = -(ulong)((double)param_2[0x2b] == 0.0);
        lVar9 = -(ulong)((double)param_2[0x28] == 0.0);
        lVar7 = -(ulong)((double)param_2[0x29] == 0.0);
        auVar6[1] = ~(byte)((ulong)lVar9 >> 8);
        auVar6[0] = ~(byte)lVar9;
        auVar6[2] = ~(byte)((ulong)lVar9 >> 0x10);
        auVar6[3] = ~(byte)((ulong)lVar9 >> 0x18);
        auVar6[4] = ~(byte)lVar7;
        auVar6[5] = ~(byte)((ulong)lVar7 >> 8);
        auVar6[6] = ~(byte)((ulong)lVar7 >> 0x10);
        auVar6[7] = ~(byte)((ulong)lVar7 >> 0x18);
        auVar6[8] = ~(byte)lVar14;
        auVar6[9] = ~(byte)((ulong)lVar14 >> 8);
        auVar6[10] = ~(byte)((ulong)lVar14 >> 0x10);
        auVar6[0xb] = ~(byte)((ulong)lVar14 >> 0x18);
        auVar6[0xc] = ~(byte)lVar15;
        auVar6[0xd] = ~(byte)((ulong)lVar15 >> 8);
        auVar6[0xe] = ~(byte)((ulong)lVar15 >> 0x10);
        auVar6[0xf] = ~(byte)((ulong)lVar15 >> 0x18);
        uVar11 = NEON_umaxv(auVar6,4);
        if ((uVar11 & 1) == 0) goto LAB_109a81790;
      }
    }
    else if (ppuVar12 == &PTR_PTR_1132e8f20) goto LAB_109a81790;
  }
LAB_109a81628:
  if (ppuVar8 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x000109a8164c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*ppuVar8 + 0x68))(ppuVar8,param_2,param_3,param_4);
    return;
  }
  ppuVar8 = (undefined **)*param_3;
  if (ppuVar8 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x000109a79250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*ppuVar8 + 0x68))(ppuVar8,param_2,param_3,param_4);
    return;
  }
  dStack_78 = 0.0;
  dStack_80 = 0.0;
  dStack_68 = 0.0;
  dStack_70 = 0.0;
  uStack_e0 = 0x42ff0000;
  puStack_a0 = &uStack_d8;
  uStack_d4 = 0;
  uStack_d0 = 0;
  iStack_dc = 0;
  uStack_d8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_b4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_140 = 0x42ff0000;
  puStack_100 = &uStack_138;
  uStack_134 = 0;
  uStack_130 = 0;
  iStack_13c = 0;
  uStack_138 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_114 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  ppuVar8 = (undefined **)*param_2;
  puStack_f8 = &uStack_f0;
  puStack_98 = &uStack_90;
  if ((ppuVar8 == &PTR_PTR_1132e8ef8) && ((param_2[0x10] == 0 || ((double)param_2[0x27] == 0.0)))) {
    puVar10 = param_2 + 2;
    if ((undefined8 *)&uStack_e0 != puVar10) {
      if (param_2[9] != 0) {
        piVar1 = (int *)(param_2[9] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_a8 = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_e0 = *(undefined4 *)puVar10;
      if (*(int *)((long)param_2 + 0x14) < 3) {
        uStack_d8 = (undefined4)param_2[3];
        uStack_d4 = (undefined4)((ulong)param_2[3] >> 0x20);
        uStack_90 = *(undefined8 *)param_2[0xb];
        uStack_88 = ((undefined8 *)param_2[0xb])[1];
        iStack_dc = *(int *)((long)param_2 + 0x14);
      }
      else {
        func_0x000109a84868(&uStack_e0,puVar10);
      }
      uStack_c8 = (undefined4)param_2[5];
      uStack_c4 = (undefined4)((ulong)param_2[5] >> 0x20);
      uStack_d0 = (undefined4)param_2[4];
      uStack_cc = (undefined4)((ulong)param_2[4] >> 0x20);
      uStack_b8 = (undefined4)param_2[7];
      uStack_b4 = (undefined4)((ulong)param_2[7] >> 0x20);
      uStack_c0 = (undefined4)param_2[6];
      uStack_bc = (undefined4)((ulong)param_2[6] >> 0x20);
      lStack_a8 = param_2[9];
      uStack_b0 = (undefined4)param_2[8];
      uStack_ac = (undefined4)((ulong)param_2[8] >> 0x20);
    }
    dStack_78 = (double)param_2[0x29];
    dStack_80 = (double)param_2[0x28];
    dStack_68 = (double)param_2[0x2b];
    dStack_70 = (double)param_2[0x2a];
  }
  else {
    (**(code **)(*ppuVar8 + 0x18))(ppuVar8,param_2,&uStack_e0,0xffffffff);
  }
  ppuVar8 = (undefined **)*param_3;
  if ((ppuVar8 != &PTR_PTR_1132e8ef8) || ((param_3[0x10] != 0 && ((double)param_3[0x27] != 0.0)))) {
    uVar16 = 0x3ff0000000000000;
    (**(code **)(*ppuVar8 + 0x18))(ppuVar8,param_3,&uStack_140,0xffffffff);
    goto LAB_109a79330;
  }
  puVar10 = param_3 + 2;
  if ((undefined8 *)&uStack_140 != puVar10) {
    if (param_3[9] != 0) {
      piVar1 = (int *)(param_3[9] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lStack_108 != 0) {
      piVar1 = (int *)(lStack_108 + 0x14);
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
        func_0x000109a848d4(&uStack_140);
      }
    }
    lStack_108 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    if (iStack_13c < 1) {
      uStack_140 = *(undefined4 *)puVar10;
LAB_109a795fc:
      iVar2 = *(int *)((long)param_3 + 0x14);
      if (2 < iVar2) goto LAB_109a79630;
      uStack_138 = (undefined4)param_3[3];
      uStack_134 = (undefined4)((ulong)param_3[3] >> 0x20);
      puVar10 = (undefined8 *)param_3[0xb];
      *puStack_f8 = *puVar10;
      puStack_f8[1] = puVar10[1];
      iStack_13c = iVar2;
    }
    else {
      lVar9 = 0;
      do {
        puStack_100[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_13c);
      uStack_140 = *(undefined4 *)puVar10;
      if (iStack_13c < 3) goto LAB_109a795fc;
LAB_109a79630:
      func_0x000109a84868(&uStack_140,puVar10);
    }
    uStack_128 = (undefined4)param_3[5];
    uStack_124 = (undefined4)((ulong)param_3[5] >> 0x20);
    uStack_130 = (undefined4)param_3[4];
    uStack_12c = (undefined4)((ulong)param_3[4] >> 0x20);
    uStack_118 = (undefined4)param_3[7];
    uStack_114 = (undefined4)((ulong)param_3[7] >> 0x20);
    uStack_120 = (undefined4)param_3[6];
    uStack_11c = (undefined4)((ulong)param_3[6] >> 0x20);
    lStack_108 = param_3[9];
    uStack_110 = (undefined4)param_3[8];
    uStack_10c = (undefined4)((ulong)param_3[8] >> 0x20);
  }
  uVar16 = param_3[0x26];
  dStack_80 = (double)param_3[0x28] + dStack_80;
  dStack_78 = (double)param_3[0x29] + dStack_78;
  dStack_70 = (double)param_3[0x2a] + dStack_70;
  dStack_68 = (double)param_3[0x2b] + dStack_68;
LAB_109a79330:
  FUN_109a7968c(CONCAT17(in_register_00005007,
                         CONCAT16(in_register_00005006,
                                  CONCAT15(in_register_00005005,
                                           CONCAT14(in_register_00005004,
                                                    CONCAT13(in_register_00005003,
                                                             CONCAT12(in_register_00005002,
                                                                      CONCAT11(in_register_00005001,
                                                                               in_b0))))))),uVar16,
                param_4,&uStack_e0,&uStack_140,&dStack_80);
  if (lStack_108 != 0) {
    piVar1 = (int *)(lStack_108 + 0x14);
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
      func_0x000109a848d4(&uStack_140);
    }
  }
  lStack_108 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  if (0 < iStack_13c) {
    lVar9 = 0;
    do {
      puStack_100[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_13c);
  }
  if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
    _free(puStack_f8[-1]);
  }
  if (lStack_a8 != 0) {
    piVar1 = (int *)(lStack_a8 + 0x14);
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
      func_0x000109a848d4(&uStack_e0);
    }
  }
  lStack_a8 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (0 < iStack_dc) {
    lVar9 = 0;
    do {
      puStack_a0[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_dc);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  return;
}



/* Entry: 109a81818; end: 109a81a93;  */

/* WARNING: Removing unreachable block (ram,0x000109a79c34) */
/* WARNING: Removing unreachable block (ram,0x000109a79c38) */
/* WARNING: Removing unreachable block (ram,0x000109a79c40) */
/* WARNING: Removing unreachable block (ram,0x000109a79c48) */
/* WARNING: Removing unreachable block (ram,0x000109a79c4c) */
/* WARNING: Removing unreachable block (ram,0x000109a79c6c) */
/* WARNING: Removing unreachable block (ram,0x000109a79c74) */
/* WARNING: Removing unreachable block (ram,0x000109a79c88) */
/* WARNING: Removing unreachable block (ram,0x000109a79c98) */

void FUN_109a81818(undefined **param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  long lVar6;
  undefined1 auVar7 [16];
  undefined **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [64];
  undefined4 uStack_140;
  int iStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long lStack_108;
  undefined4 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  int iStack_dc;
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
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined4 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  ppuVar12 = (undefined **)*param_2;
  ppuVar8 = (undefined **)*param_3;
  if ((ppuVar12 == &PTR_PTR_1132e8f10) && ((param_2[0x1c] == 0 || ((double)param_2[0x27] == 0.0))))
  {
    if (ppuVar8 != &PTR_PTR_1132e8ef0) {
      if (ppuVar8 == &PTR_PTR_1132e8ef8) {
        if ((param_3[0x10] == 0) || ((double)param_3[0x27] == 0.0)) {
          lVar13 = -(ulong)((double)param_3[0x2a] == 0.0);
          lVar14 = -(ulong)((double)param_3[0x2b] == 0.0);
          lVar9 = -(ulong)((double)param_3[0x28] == 0.0);
          lVar6 = -(ulong)((double)param_3[0x29] == 0.0);
          auVar7[1] = ~(byte)((ulong)lVar9 >> 8);
          auVar7[0] = ~(byte)lVar9;
          auVar7[2] = ~(byte)((ulong)lVar9 >> 0x10);
          auVar7[3] = ~(byte)((ulong)lVar9 >> 0x18);
          auVar7[4] = ~(byte)lVar6;
          auVar7[5] = ~(byte)((ulong)lVar6 >> 8);
          auVar7[6] = ~(byte)((ulong)lVar6 >> 0x10);
          auVar7[7] = ~(byte)((ulong)lVar6 >> 0x18);
          auVar7[8] = ~(byte)lVar13;
          auVar7[9] = ~(byte)((ulong)lVar13 >> 8);
          auVar7[10] = ~(byte)((ulong)lVar13 >> 0x10);
          auVar7[0xb] = ~(byte)((ulong)lVar13 >> 0x18);
          auVar7[0xc] = ~(byte)lVar14;
          auVar7[0xd] = ~(byte)((ulong)lVar14 >> 8);
          auVar7[0xe] = ~(byte)((ulong)lVar14 >> 0x10);
          auVar7[0xf] = ~(byte)((ulong)lVar14 >> 0x18);
          uVar11 = NEON_umaxv(auVar7,4);
          if ((uVar11 & 1) == 0) goto LAB_109a81968;
        }
        goto LAB_109a81898;
      }
      if (ppuVar8 != &PTR_PTR_1132e8f20) goto LAB_109a8187c;
    }
LAB_109a81968:
    uVar11 = 4;
    if (ppuVar8 != &PTR_PTR_1132e8f20) {
      uVar11 = 0;
    }
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    FUN_109a82eb0(auStack_180,&PTR_PTR_1132e8f10,*(uint *)(param_2 + 1) & 0xfffffffb | uVar11,
                  param_2 + 2,param_2 + 0xe,param_3 + 2,&uStack_1a0);
    FUN_109a77b50(param_4,auStack_180);
    goto LAB_109a81a64;
  }
LAB_109a8187c:
  if ((ppuVar8 == &PTR_PTR_1132e8f10) && ((param_3[0x1c] == 0 || ((double)param_3[0x27] == 0.0)))) {
    if (ppuVar12 == &PTR_PTR_1132e8ef0) {
LAB_109a81a08:
      uVar11 = 4;
      if (ppuVar12 != &PTR_PTR_1132e8f20) {
        uVar11 = 0;
      }
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      FUN_109a82eb0(auStack_180,&PTR_PTR_1132e8f10,*(uint *)(param_3 + 1) & 0xfffffffb | uVar11,
                    param_3 + 2,param_3 + 0xe,param_2 + 2,&uStack_1a0);
      FUN_109a77b50(param_4,auStack_180);
LAB_109a81a64:
      FUN_10918eb6c(auStack_180);
      return;
    }
    if (ppuVar12 == &PTR_PTR_1132e8ef8) {
      if ((param_2[0x10] == 0) || ((double)param_2[0x27] == 0.0)) {
        lVar13 = -(ulong)((double)param_2[0x2a] == 0.0);
        lVar14 = -(ulong)((double)param_2[0x2b] == 0.0);
        lVar9 = -(ulong)((double)param_2[0x28] == 0.0);
        lVar6 = -(ulong)((double)param_2[0x29] == 0.0);
        auVar5[1] = ~(byte)((ulong)lVar9 >> 8);
        auVar5[0] = ~(byte)lVar9;
        auVar5[2] = ~(byte)((ulong)lVar9 >> 0x10);
        auVar5[3] = ~(byte)((ulong)lVar9 >> 0x18);
        auVar5[4] = ~(byte)lVar6;
        auVar5[5] = ~(byte)((ulong)lVar6 >> 8);
        auVar5[6] = ~(byte)((ulong)lVar6 >> 0x10);
        auVar5[7] = ~(byte)((ulong)lVar6 >> 0x18);
        auVar5[8] = ~(byte)lVar13;
        auVar5[9] = ~(byte)((ulong)lVar13 >> 8);
        auVar5[10] = ~(byte)((ulong)lVar13 >> 0x10);
        auVar5[0xb] = ~(byte)((ulong)lVar13 >> 0x18);
        auVar5[0xc] = ~(byte)lVar14;
        auVar5[0xd] = ~(byte)((ulong)lVar14 >> 8);
        auVar5[0xe] = ~(byte)((ulong)lVar14 >> 0x10);
        auVar5[0xf] = ~(byte)((ulong)lVar14 >> 0x18);
        uVar11 = NEON_umaxv(auVar5,4);
        if ((uVar11 & 1) == 0) goto LAB_109a81a08;
      }
    }
    else if (ppuVar12 == &PTR_PTR_1132e8f20) goto LAB_109a81a08;
  }
LAB_109a81898:
  if (ppuVar8 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x000109a818bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*ppuVar8 + 0x78))(ppuVar8,param_2,param_3,param_4);
    return;
  }
  ppuVar8 = (undefined **)*param_3;
  if (ppuVar8 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x000109a799fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*ppuVar8 + 0x78))(ppuVar8,param_2,param_3,param_4);
    return;
  }
  dStack_78 = 0.0;
  dStack_80 = 0.0;
  dStack_68 = 0.0;
  dStack_70 = 0.0;
  uStack_e0 = 0x42ff0000;
  puStack_a0 = &uStack_d8;
  uStack_d4 = 0;
  uStack_d0 = 0;
  iStack_dc = 0;
  uStack_d8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_b4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_140 = 0x42ff0000;
  puStack_100 = &uStack_138;
  uStack_134 = 0;
  uStack_130 = 0;
  iStack_13c = 0;
  uStack_138 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_114 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  ppuVar8 = (undefined **)*param_2;
  puStack_f8 = &uStack_f0;
  puStack_98 = &uStack_90;
  if ((ppuVar8 == &PTR_PTR_1132e8ef8) && ((param_2[0x10] == 0 || ((double)param_2[0x27] == 0.0)))) {
    puVar10 = param_2 + 2;
    if ((undefined8 *)&uStack_e0 != puVar10) {
      if (param_2[9] != 0) {
        piVar1 = (int *)(param_2[9] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_a8 = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_e0 = *(undefined4 *)puVar10;
      if (*(int *)((long)param_2 + 0x14) < 3) {
        uStack_d8 = (undefined4)param_2[3];
        uStack_d4 = (undefined4)((ulong)param_2[3] >> 0x20);
        uStack_90 = *(undefined8 *)param_2[0xb];
        uStack_88 = ((undefined8 *)param_2[0xb])[1];
        iStack_dc = *(int *)((long)param_2 + 0x14);
      }
      else {
        func_0x000109a84868(&uStack_e0,puVar10);
      }
      uStack_c8 = (undefined4)param_2[5];
      uStack_c4 = (undefined4)((ulong)param_2[5] >> 0x20);
      uStack_d0 = (undefined4)param_2[4];
      uStack_cc = (undefined4)((ulong)param_2[4] >> 0x20);
      uStack_b8 = (undefined4)param_2[7];
      uStack_b4 = (undefined4)((ulong)param_2[7] >> 0x20);
      uStack_c0 = (undefined4)param_2[6];
      uStack_bc = (undefined4)((ulong)param_2[6] >> 0x20);
      lStack_a8 = param_2[9];
      uStack_b0 = (undefined4)param_2[8];
      uStack_ac = (undefined4)((ulong)param_2[8] >> 0x20);
    }
    dStack_78 = (double)param_2[0x29];
    dStack_80 = (double)param_2[0x28];
    dStack_68 = (double)param_2[0x2b];
    dStack_70 = (double)param_2[0x2a];
  }
  else {
    (**(code **)(*ppuVar8 + 0x18))(ppuVar8,param_2,&uStack_e0,0xffffffff);
  }
  ppuVar8 = (undefined **)*param_3;
  if ((ppuVar8 != &PTR_PTR_1132e8ef8) || ((param_3[0x10] != 0 && ((double)param_3[0x27] != 0.0)))) {
    (**(code **)(*ppuVar8 + 0x18))(ppuVar8,param_3,&uStack_140,0xffffffff);
    goto LAB_109a79adc;
  }
  puVar10 = param_3 + 2;
  if ((undefined8 *)&uStack_140 != puVar10) {
    if (param_3[9] != 0) {
      piVar1 = (int *)(param_3[9] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lStack_108 != 0) {
      piVar1 = (int *)(lStack_108 + 0x14);
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
        func_0x000109a848d4(&uStack_140);
      }
    }
    lStack_108 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    if (iStack_13c < 1) {
      uStack_140 = *(undefined4 *)puVar10;
LAB_109a79da8:
      iVar2 = *(int *)((long)param_3 + 0x14);
      if (2 < iVar2) goto LAB_109a79ddc;
      uStack_138 = (undefined4)param_3[3];
      uStack_134 = (undefined4)((ulong)param_3[3] >> 0x20);
      puVar10 = (undefined8 *)param_3[0xb];
      *puStack_f8 = *puVar10;
      puStack_f8[1] = puVar10[1];
      iStack_13c = iVar2;
    }
    else {
      lVar9 = 0;
      do {
        puStack_100[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_13c);
      uStack_140 = *(undefined4 *)puVar10;
      if (iStack_13c < 3) goto LAB_109a79da8;
LAB_109a79ddc:
      func_0x000109a84868(&uStack_140,puVar10);
    }
    uStack_128 = (undefined4)param_3[5];
    uStack_124 = (undefined4)((ulong)param_3[5] >> 0x20);
    uStack_130 = (undefined4)param_3[4];
    uStack_12c = (undefined4)((ulong)param_3[4] >> 0x20);
    uStack_118 = (undefined4)param_3[7];
    uStack_114 = (undefined4)((ulong)param_3[7] >> 0x20);
    uStack_120 = (undefined4)param_3[6];
    uStack_11c = (undefined4)((ulong)param_3[6] >> 0x20);
    lStack_108 = param_3[9];
    uStack_110 = (undefined4)param_3[8];
    uStack_10c = (undefined4)((ulong)param_3[8] >> 0x20);
  }
  dStack_80 = dStack_80 - (double)param_3[0x28];
  dStack_78 = dStack_78 - (double)param_3[0x29];
  dStack_70 = dStack_70 - (double)param_3[0x2a];
  dStack_68 = dStack_68 - (double)param_3[0x2b];
LAB_109a79adc:
  FUN_109a7968c(param_4,&uStack_e0,&uStack_140,&dStack_80);
  if (lStack_108 != 0) {
    piVar1 = (int *)(lStack_108 + 0x14);
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
      func_0x000109a848d4(&uStack_140);
    }
  }
  lStack_108 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  if (0 < iStack_13c) {
    lVar9 = 0;
    do {
      puStack_100[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_13c);
  }
  if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
    _free(puStack_f8[-1]);
  }
  if (lStack_a8 != 0) {
    piVar1 = (int *)(lStack_a8 + 0x14);
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
      func_0x000109a848d4(&uStack_e0);
    }
  }
  lStack_a8 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (0 < iStack_dc) {
    lVar9 = 0;
    do {
      puStack_a0[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_dc);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  return;
}



/* Entry: 109a81a94; end: 109a81ac7;  */

void FUN_109a81a94(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000109a7fe24();
  *(double *)(param_4 + 0x138) = *(double *)(param_4 + 0x138) * param_1;
  *(double *)(param_4 + 0x130) = *(double *)(param_4 + 0x130) * param_1;
  return;
}



/* Entry: 109a81ac8; end: 109a81b13;  */

void FUN_109a81ac8(undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  func_0x000109a7fe24(param_3);
  uVar2 = ~*(uint *)(param_2 + 8);
  *(uint *)(param_3 + 8) =
       (*(uint *)(param_2 + 8) & 4 | ((uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1) & 3) ^
       4;
  uVar1 = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_3 + 0x70);
  *(undefined4 *)(param_3 + 0x70) = uVar1;
  uVar1 = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_3 + 0x74);
  *(undefined4 *)(param_3 + 0x74) = uVar1;
  puVar4 = (undefined4 *)(param_3 + 0x18);
  uVar1 = *puVar4;
  puVar3 = (undefined4 *)(param_3 + 0x78);
  *puVar4 = *puVar3;
  *puVar3 = uVar1;
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_3 + 0x7c);
  *(undefined4 *)(param_3 + 0x7c) = uVar1;
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_3 + 0x80);
  *(undefined8 *)(param_3 + 0x80) = uVar5;
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_3 + 0x88);
  *(undefined8 *)(param_3 + 0x88) = uVar5;
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_3 + 0x90);
  *(undefined8 *)(param_3 + 0x90) = uVar5;
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)(param_3 + 0x98) = uVar5;
  uVar5 = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0xa0) = uVar5;
  uVar5 = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_3 + 0xa8);
  *(undefined8 *)(param_3 + 0xa8) = uVar5;
  uVar5 = *(undefined8 *)(param_3 + 0x50);
  *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = uVar5;
  puVar8 = *(undefined8 **)(param_3 + 0x58);
  *(undefined8 *)(param_3 + 0x58) = *(undefined8 *)(param_3 + 0xb8);
  puVar7 = (undefined8 *)(param_3 + 0x60);
  uVar5 = *puVar7;
  *(undefined8 **)(param_3 + 0xb8) = puVar8;
  puVar6 = (undefined8 *)(param_3 + 0xc0);
  *puVar7 = *puVar6;
  *puVar6 = uVar5;
  uVar5 = *(undefined8 *)(param_3 + 0x68);
  *(undefined8 *)(param_3 + 0x68) = *(undefined8 *)(param_3 + 200);
  *(undefined8 *)(param_3 + 200) = uVar5;
  if (*(undefined8 **)(param_3 + 0x58) == puVar6) {
    *(undefined4 **)(param_3 + 0x50) = puVar4;
    *(undefined8 **)(param_3 + 0x58) = puVar7;
    puVar8 = *(undefined8 **)(param_3 + 0xb8);
  }
  if (puVar8 != puVar7) {
    return;
  }
  *(undefined4 **)(param_3 + 0xb0) = puVar3;
  *(undefined8 **)(param_3 + 0xb8) = puVar6;
  return;
}



/* Entry: 109a81b14; end: 109a81ca7;  */

void FUN_109a81b14(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined4 auStack_e0 [2];
  undefined4 *puStack_d8;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_b0 = 0x42ff0000;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lStack_70 = (long)&uStack_ac + 4;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  plVar1 = (long *)(param_3 + 4);
  uStack_60 = 0;
  uStack_58 = 0;
  puVar7 = param_3;
  plVar8 = plVar1;
  if (((uint)param_4 != 0xffffffff) && ((*(uint *)(param_2 + 0x10) & 0xfff) != (uint)param_4)) {
    puVar7 = &uStack_b0;
    plVar8 = (long *)&uStack_a0;
  }
  puStack_c0 = (undefined4 *)(param_2 + 0x10);
  uStack_b8 = 0;
  auStack_c8[0] = 0x1010000;
  auStack_e0[0] = 0x2010000;
  uStack_d0 = 0;
  puStack_d8 = puVar7;
  puStack_68 = &uStack_60;
  FUN_109a57c7c(auStack_c8,auStack_e0,*(undefined4 *)(param_2 + 8));
  if (*plVar8 != *plVar1) {
    auStack_c8[0] = 0x2010000;
    uStack_b8 = 0;
    puStack_c0 = param_3;
    FUN_109a41858(0x3ff0000000000000,0,puVar7,auStack_c8,param_4);
  }
  if (lStack_78 != 0) {
    piVar2 = (int *)(lStack_78 + 0x14);
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
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (0 < (int)uStack_ac) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_ac);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return;
}



/* Entry: 109a81ca8; end: 109a81e53;  */

/* WARNING: Removing unreachable block (ram,0x000109a7be14) */
/* WARNING: Removing unreachable block (ram,0x000109a7be18) */
/* WARNING: Removing unreachable block (ram,0x000109a7be20) */
/* WARNING: Removing unreachable block (ram,0x000109a7be28) */
/* WARNING: Removing unreachable block (ram,0x000109a7be2c) */
/* WARNING: Removing unreachable block (ram,0x000109a7b998) */
/* WARNING: Removing unreachable block (ram,0x000109a7b99c) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9a4) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9ac) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9b0) */
/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000109a81d74 */
/* WARNING: Removing unreachable block (ram,0x000109a7be4c) */
/* WARNING: Removing unreachable block (ram,0x000109a7be54) */
/* WARNING: Removing unreachable block (ram,0x000109a7be68) */
/* WARNING: Removing unreachable block (ram,0x000109a7be74) */
/* WARNING: Removing unreachable block (ram,0x000109a7be78) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9d0) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9d8) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9ec) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9f8) */
/* WARNING: Removing unreachable block (ram,0x000109a7b9fc) */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_109a81ca8(undefined **param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined **ppuVar11;
  uint uVar12;
  byte in_b0;
  byte in_register_00005001;
  byte in_register_00005002;
  byte in_register_00005003;
  byte in_register_00005004;
  byte in_register_00005005;
  byte in_register_00005006;
  byte in_register_00005007;
  long lVar13;
  long lVar14;
  undefined4 uStack_310;
  undefined8 uStack_30c;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  int iStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  long lStack_278;
  undefined4 *puStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  int iStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  undefined4 *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  undefined4 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [288];
  
  ppuVar11 = (undefined **)*param_3;
  if ((undefined **)*param_2 == &PTR_PTR_1132e8f18 && ppuVar11 == &PTR_PTR_1132e8ef0) {
    uStack_1f0 = 0x42ff0000;
    puStack_1b0 = &uStack_1e8;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    iStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1c4 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    puStack_208 = (undefined8 *)0x0;
    puStack_210 = (undefined4 *)0x0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    puStack_1a8 = &uStack_1a0;
    FUN_109a82eb0(CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0))))))),
                  0x3ff0000000000000,auStack_190,&PTR_PTR_1132e8f28,*(undefined4 *)(param_2 + 1),
                  param_2 + 2,param_3 + 2,&uStack_1f0,&puStack_210);
    FUN_109a77b50(param_4,auStack_190);
    FUN_10918eb6c(auStack_190);
    if (lStack_1b8 != 0) {
      piVar1 = (int *)(lStack_1b8 + 0x14);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        func_0x000109a848d4(&uStack_1f0);
      }
    }
    lStack_1b8 = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    if (0 < iStack_1ec) {
      lVar10 = 0;
      do {
        puStack_1b0[lVar10] = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iStack_1ec);
    }
    if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
      _free(puStack_1a8[-1]);
    }
    return;
  }
  if (ppuVar11 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x000109a81d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*ppuVar11 + 0xb8))(ppuVar11,param_2,param_3,param_4);
    return;
  }
  ppuVar11 = (undefined **)*param_3;
  if (ppuVar11 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x000109a7b88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*ppuVar11 + 0xb8))(ppuVar11,param_2,param_3,param_4);
    return;
  }
  uStack_250 = 0x42ff0000;
  uStack_244 = 0;
  uStack_240 = 0;
  iStack_24c = 0;
  uStack_248 = 0;
  puStack_210 = &uStack_248;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_224 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_2b0 = 0x42ff0000;
  puStack_270 = &uStack_2a8;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  iStack_2ac = 0;
  uStack_2a8 = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_284 = 0;
  uStack_28c = 0;
  uStack_288 = 0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  ppuVar11 = (undefined **)*param_2;
  puStack_268 = &uStack_260;
  puStack_208 = &uStack_200;
  if (ppuVar11 == &PTR_PTR_1132e8f20) {
    if ((undefined8 *)&uStack_250 == param_2 + 2) {
      uVar12 = 1;
    }
    else {
      if (param_2[9] != 0) {
        piVar1 = (int *)(param_2[9] + 0x14);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_218 = 0;
      uStack_238 = 0;
      uStack_234 = 0;
      uStack_240 = 0;
      uStack_23c = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      uStack_230 = 0;
      uStack_22c = 0;
      uStack_250 = *(undefined4 *)(param_2 + 2);
      if (*(int *)((long)param_2 + 0x14) < 3) {
        uVar12 = 1;
        iStack_24c = *(int *)((long)param_2 + 0x14);
LAB_109a7ba30:
        uStack_248 = (undefined4)param_2[3];
        uStack_244 = (undefined4)((ulong)param_2[3] >> 0x20);
        uStack_200 = *(undefined8 *)param_2[0xb];
        uStack_1f8 = ((undefined8 *)param_2[0xb])[1];
      }
      else {
        func_0x000109a84868(&uStack_250,param_2 + 2);
        uVar12 = 1;
      }
LAB_109a7ba54:
      uStack_230 = (undefined4)param_2[6];
      uStack_22c = (undefined4)((ulong)param_2[6] >> 0x20);
      uStack_238 = (undefined4)param_2[5];
      uStack_234 = (undefined4)((ulong)param_2[5] >> 0x20);
      uStack_220 = (undefined4)param_2[8];
      uStack_21c = (undefined4)((ulong)param_2[8] >> 0x20);
      uStack_228 = (undefined4)param_2[7];
      uStack_224 = (undefined4)((ulong)param_2[7] >> 0x20);
      lStack_218 = param_2[9];
      uStack_240 = (undefined4)param_2[4];
      uStack_23c = (undefined4)((ulong)param_2[4] >> 0x20);
    }
  }
  else {
    if ((ppuVar11 == &PTR_PTR_1132e8ef8) && ((param_2[0x10] == 0 || ((double)param_2[0x27] == 0.0)))
       ) {
      lVar13 = -(ulong)((double)param_2[0x2a] == 0.0);
      lVar14 = -(ulong)((double)param_2[0x2b] == 0.0);
      lVar10 = -(ulong)((double)param_2[0x28] == 0.0);
      lVar7 = -(ulong)((double)param_2[0x29] == 0.0);
      in_b0 = ~(byte)lVar10;
      in_register_00005001 = ~(byte)((ulong)lVar10 >> 8);
      in_register_00005002 = ~(byte)((ulong)lVar10 >> 0x10);
      in_register_00005003 = ~(byte)((ulong)lVar10 >> 0x18);
      in_register_00005004 = ~(byte)lVar7;
      in_register_00005005 = ~(byte)((ulong)lVar7 >> 8);
      in_register_00005006 = ~(byte)((ulong)lVar7 >> 0x10);
      in_register_00005007 = ~(byte)((ulong)lVar7 >> 0x18);
      auVar4[1] = in_register_00005001;
      auVar4[0] = in_b0;
      auVar4[2] = in_register_00005002;
      auVar4[3] = in_register_00005003;
      auVar4[4] = in_register_00005004;
      auVar4[5] = in_register_00005005;
      auVar4[6] = in_register_00005006;
      auVar4[7] = in_register_00005007;
      auVar4[8] = ~(byte)lVar13;
      auVar4[9] = ~(byte)((ulong)lVar13 >> 8);
      auVar4[10] = ~(byte)((ulong)lVar13 >> 0x10);
      auVar4[0xb] = ~(byte)((ulong)lVar13 >> 0x18);
      auVar4[0xc] = ~(byte)lVar14;
      auVar4[0xd] = ~(byte)((ulong)lVar14 >> 8);
      auVar4[0xe] = ~(byte)((ulong)lVar14 >> 0x10);
      auVar4[0xf] = ~(byte)((ulong)lVar14 >> 0x18);
      uVar12 = NEON_umaxv(auVar4,4);
      if ((uVar12 & 1) == 0) {
        if ((undefined8 *)&uStack_250 != param_2 + 2) {
          if (param_2[9] != 0) {
            piVar1 = (int *)(param_2[9] + 0x14);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          lStack_218 = 0;
          uStack_238 = 0;
          uStack_234 = 0;
          uStack_240 = 0;
          uStack_23c = 0;
          uStack_228 = 0;
          uStack_224 = 0;
          uStack_230 = 0;
          uStack_22c = 0;
          uStack_250 = *(undefined4 *)(param_2 + 2);
          if (*(int *)((long)param_2 + 0x14) < 3) {
            uVar12 = 0;
            iStack_24c = *(int *)((long)param_2 + 0x14);
            goto LAB_109a7ba30;
          }
          func_0x000109a84868(&uStack_250,param_2 + 2);
          uVar12 = 0;
          goto LAB_109a7ba54;
        }
        uVar12 = 0;
        goto LAB_109a7ba74;
      }
    }
    (**(code **)(*ppuVar11 + 0x18))(ppuVar11,param_2,&uStack_250,0xffffffff);
    uVar12 = 0;
  }
LAB_109a7ba74:
  ppuVar11 = (undefined **)*param_3;
  if (ppuVar11 == &PTR_PTR_1132e8f20) {
    uVar12 = uVar12 | 2;
    if ((undefined8 *)&uStack_2b0 == param_3 + 2) goto LAB_109a7bbe8;
    if (param_3[9] != 0) {
      piVar1 = (int *)(param_3[9] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lStack_278 != 0) {
      piVar1 = (int *)(lStack_278 + 0x14);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        func_0x000109a848d4(&uStack_2b0);
      }
    }
    lStack_278 = 0;
    uStack_298 = 0;
    uStack_294 = 0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    uStack_288 = 0;
    uStack_284 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    if (iStack_2ac < 1) {
      uStack_2b0 = *(undefined4 *)(param_3 + 2);
      iVar8 = *(int *)((long)param_3 + 0x14);
      if (2 < iVar8) goto LAB_109a7bbbc;
    }
    else {
      lVar10 = 0;
      do {
        puStack_270[lVar10] = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iStack_2ac);
      uStack_2b0 = *(undefined4 *)(param_3 + 2);
      iVar8 = *(int *)((long)param_3 + 0x14);
      if (2 < iStack_2ac || 2 < iVar8) {
LAB_109a7bbbc:
        func_0x000109a84868(&uStack_2b0,param_3 + 2);
        goto LAB_109a7bbc8;
      }
    }
LAB_109a7bb94:
    uStack_2a8 = (undefined4)param_3[3];
    uStack_2a4 = (undefined4)((ulong)param_3[3] >> 0x20);
    puVar9 = (undefined8 *)param_3[0xb];
    *puStack_268 = *puVar9;
    puStack_268[1] = puVar9[1];
    iStack_2ac = iVar8;
LAB_109a7bbc8:
    uStack_2a0 = (undefined4)param_3[4];
    uStack_29c = (undefined4)((ulong)param_3[4] >> 0x20);
    uStack_290 = (undefined4)param_3[6];
    uStack_28c = (undefined4)((ulong)param_3[6] >> 0x20);
    uStack_298 = (undefined4)param_3[5];
    uStack_294 = (undefined4)((ulong)param_3[5] >> 0x20);
    uStack_280 = (undefined4)param_3[8];
    uStack_27c = (undefined4)((ulong)param_3[8] >> 0x20);
    uStack_288 = (undefined4)param_3[7];
    uStack_284 = (undefined4)((ulong)param_3[7] >> 0x20);
    lStack_278 = param_3[9];
  }
  else {
    if ((ppuVar11 == &PTR_PTR_1132e8ef8) && ((param_3[0x10] == 0 || ((double)param_3[0x27] == 0.0)))
       ) {
      lVar13 = -(ulong)((double)param_3[0x2a] == 0.0);
      lVar14 = -(ulong)((double)param_3[0x2b] == 0.0);
      lVar10 = -(ulong)((double)param_3[0x28] == 0.0);
      lVar7 = -(ulong)((double)param_3[0x29] == 0.0);
      in_b0 = ~(byte)lVar10;
      in_register_00005001 = ~(byte)((ulong)lVar10 >> 8);
      in_register_00005002 = ~(byte)((ulong)lVar10 >> 0x10);
      in_register_00005003 = ~(byte)((ulong)lVar10 >> 0x18);
      in_register_00005004 = ~(byte)lVar7;
      in_register_00005005 = ~(byte)((ulong)lVar7 >> 8);
      in_register_00005006 = ~(byte)((ulong)lVar7 >> 0x10);
      in_register_00005007 = ~(byte)((ulong)lVar7 >> 0x18);
      auVar5[1] = in_register_00005001;
      auVar5[0] = in_b0;
      auVar5[2] = in_register_00005002;
      auVar5[3] = in_register_00005003;
      auVar5[4] = in_register_00005004;
      auVar5[5] = in_register_00005005;
      auVar5[6] = in_register_00005006;
      auVar5[7] = in_register_00005007;
      auVar5[8] = ~(byte)lVar13;
      auVar5[9] = ~(byte)((ulong)lVar13 >> 8);
      auVar5[10] = ~(byte)((ulong)lVar13 >> 0x10);
      auVar5[0xb] = ~(byte)((ulong)lVar13 >> 0x18);
      auVar5[0xc] = ~(byte)lVar14;
      auVar5[0xd] = ~(byte)((ulong)lVar14 >> 8);
      auVar5[0xe] = ~(byte)((ulong)lVar14 >> 0x10);
      auVar5[0xf] = ~(byte)((ulong)lVar14 >> 0x18);
      uVar6 = NEON_umaxv(auVar5,4);
      if ((uVar6 & 1) == 0) {
        if ((undefined8 *)&uStack_2b0 == param_3 + 2) goto LAB_109a7bbe8;
        if (param_3[9] != 0) {
          piVar1 = (int *)(param_3[9] + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (lStack_278 != 0) {
          piVar1 = (int *)(lStack_278 + 0x14);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            func_0x000109a848d4(&uStack_2b0);
          }
        }
        lStack_278 = 0;
        uStack_298 = 0;
        uStack_294 = 0;
        uStack_2a0 = 0;
        uStack_29c = 0;
        uStack_288 = 0;
        uStack_284 = 0;
        uStack_290 = 0;
        uStack_28c = 0;
        if (iStack_2ac < 1) {
          uStack_2b0 = *(undefined4 *)(param_3 + 2);
          iVar8 = *(int *)((long)param_3 + 0x14);
          if (iVar8 < 3) goto LAB_109a7bb94;
        }
        else {
          lVar10 = 0;
          do {
            puStack_270[lVar10] = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < iStack_2ac);
          uStack_2b0 = *(undefined4 *)(param_3 + 2);
          iVar8 = *(int *)((long)param_3 + 0x14);
          if (iStack_2ac < 3 && iVar8 < 3) goto LAB_109a7bb94;
        }
        func_0x000109a84868(&uStack_2b0,param_3 + 2);
        goto LAB_109a7bbc8;
      }
    }
    (**(code **)(*ppuVar11 + 0x18))(ppuVar11,param_3,&uStack_2b0,0xffffffff);
  }
LAB_109a7bbe8:
  uStack_310 = 0x42ff0000;
  uStack_304 = 0;
  uStack_300 = 0;
  uStack_30c = 0;
  lStack_2d0 = (long)&uStack_30c + 4;
  uStack_2f4 = 0;
  uStack_2f0 = 0;
  uStack_2fc = 0;
  uStack_2f8 = 0;
  uStack_2e4 = 0;
  uStack_2ec = 0;
  uStack_2e8 = 0;
  lStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1f0 = 0;
  iStack_1ec = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  puStack_2c8 = &uStack_2c0;
  FUN_109a82eb0(CONCAT17(in_register_00005007,
                         CONCAT16(in_register_00005006,
                                  CONCAT15(in_register_00005005,
                                           CONCAT14(in_register_00005004,
                                                    CONCAT13(in_register_00005003,
                                                             CONCAT12(in_register_00005002,
                                                                      CONCAT11(in_register_00005001,
                                                                               in_b0))))))),
                0x3ff0000000000000,&uStack_1d0,&PTR_PTR_1132e8f10,uVar12,&uStack_250,&uStack_2b0,
                &uStack_310,&uStack_1f0);
  FUN_109a77b50(param_4,&uStack_1d0);
  FUN_10918eb6c(&uStack_1d0);
  if (lStack_2d8 != 0) {
    piVar1 = (int *)(lStack_2d8 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_310);
    }
  }
  lStack_2d8 = 0;
  uStack_2f8 = 0;
  uStack_2f4 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  if (0 < (int)uStack_30c) {
    lVar10 = 0;
    do {
      *(undefined4 *)(lStack_2d0 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)uStack_30c);
  }
  if (puStack_2c8 != &uStack_2c0 && puStack_2c8 != (undefined8 *)0x0) {
    _free(puStack_2c8[-1]);
  }
  if (lStack_278 != 0) {
    piVar1 = (int *)(lStack_278 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_2b0);
    }
  }
  lStack_278 = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  if (0 < iStack_2ac) {
    lVar10 = 0;
    do {
      puStack_270[lVar10] = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iStack_2ac);
  }
  if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
    _free(puStack_268[-1]);
  }
  if (lStack_218 != 0) {
    piVar1 = (int *)(lStack_218 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_250);
    }
  }
  lStack_218 = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  if (0 < iStack_24c) {
    lVar10 = 0;
    do {
      puStack_210[lVar10] = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iStack_24c);
  }
  if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
    _free(puStack_208[-1]);
  }
  return;
}



/* Entry: 109a81e54; end: 109a81fff;  */

void FUN_109a81e54(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined4 auStack_f8 [2];
  undefined4 *puStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_e0 [2];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_b0 = 0x42ff0000;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lStack_70 = (long)&uStack_ac + 4;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  plVar1 = (long *)(param_3 + 4);
  uStack_60 = 0;
  uStack_58 = 0;
  puVar7 = param_3;
  plVar8 = plVar1;
  if (((uint)param_4 != 0xffffffff) && ((*(uint *)(param_2 + 0x10) & 0xfff) != (uint)param_4)) {
    puVar7 = &uStack_b0;
    plVar8 = (long *)&uStack_a0;
  }
  uStack_b8 = 0;
  puStack_c0 = (undefined4 *)(param_2 + 0x10);
  auStack_c8[0] = 0x1010000;
  lStack_d8 = param_2 + 0x70;
  uStack_d0 = 0;
  auStack_e0[0] = 0x1010000;
  auStack_f8[0] = 0x2010000;
  uStack_e8 = 0;
  puStack_f0 = puVar7;
  puStack_68 = &uStack_60;
  FUN_109a5a63c(auStack_c8,auStack_e0,auStack_f8,*(undefined4 *)(param_2 + 8));
  if (*plVar8 != *plVar1) {
    auStack_c8[0] = 0x2010000;
    uStack_b8 = 0;
    puStack_c0 = param_3;
    FUN_109a41858(0x3ff0000000000000,0,puVar7,auStack_c8,param_4);
  }
  if (lStack_78 != 0) {
    piVar2 = (int *)(lStack_78 + 0x14);
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
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (0 < (int)uStack_ac) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_ac);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return;
}



/* Entry: 109a82000; end: 109a821df;  */

void FUN_109a82000(undefined8 param_1,long param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 auStack_68 [2];
  uint *puStack_60;
  undefined8 uStack_58;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_2 + 0x10) & 0xfff;
  if (param_4 != 0xffffffff) {
    uVar1 = param_4;
  }
  puVar5 = *(uint **)(param_2 + 0x50);
  if (*(int *)(param_2 + 0x14) < 3) {
    if (((2 < (int)param_3[1] || param_3[2] != *puVar5) || param_3[3] != puVar5[1]) ||
       ((*param_3 & 0xfff) != (uVar1 & 0xfff) || *(long *)(param_3 + 4) == 0)) {
      puStack_50 = *(undefined4 **)puVar5;
      FUN_109a83fd0(param_3,2,&puStack_50);
    }
  }
  else {
    FUN_109a83fd0(param_3);
  }
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 == 0x49 && *(int *)(param_2 + 0x14) < 3) {
    auStack_68[0] = 0x3010000;
    uStack_58 = 0;
    puStack_50 = *(undefined4 **)(param_2 + 0x130);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    puStack_60 = param_3;
    FUN_109a92964(auStack_68,&puStack_50);
  }
  else if (iVar2 == 0x31) {
    puStack_50 = *(undefined4 **)(param_2 + 0x130);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    FUN_109a48880(param_3,&puStack_50);
  }
  else {
    if (iVar2 != 0x30) goto LAB_109a8214c;
    uStack_48 = 0;
    puStack_50 = (undefined4 *)0x0;
    uStack_38 = 0;
    uStack_40 = 0;
    FUN_109a48880(param_3,&puStack_50);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
LAB_109a8214c:
  puVar4 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_50 = puVar4 + 1;
  uStack_48 = 0x1f;
  *(undefined1 *)((long)puVar4 + 0x23) = 0;
  *(undefined8 *)(puVar4 + 3) = 0x692078697274616d;
  *(undefined8 *)(puVar4 + 1) = 0x2064696c61766e49;
  *(undefined8 *)((long)puVar4 + 0x1b) = 0x657079742072657a;
  *(undefined8 *)((long)puVar4 + 0x13) = 0x696c616974696e69;
  FUN_109ac3188(0xfffffffe,&puStack_50,&UNK_10f57bc20,&UNK_10f59784b,0x627);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a821ac);
  (*pcVar3)();
}



/* Entry: 109a821e0; end: 109a8220f;  */

void FUN_109a821e0(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000109a7fe24();
  *(double *)(param_4 + 0x130) = param_1 * *(double *)(param_4 + 0x130);
  return;
}



/* Entry: 109a82210; end: 109a822d7;  */

void FUN_109a82210(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_109a7b638(0x3ff0000000000000,param_1,param_2);
  return;
}



/* Entry: 109a822d8; end: 109a8239b;  */

void FUN_109a822d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  FUN_109a7c0d4(param_1,param_3,param_2);
  return;
}



/* Entry: 109a8239c; end: 109a8261b;  */

void FUN_109a8239c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  uVar3 = *param_4;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  if ((uVar3 & 0x1f0000) == 0x60000) {
    puVar8 = *(undefined8 **)(param_4 + 2);
    plVar9 = (long *)*puVar8;
    FUN_109a7c3f4(&uStack_1b0,param_3);
    (**(code **)(*plVar9 + 0x88))(param_2,plVar9,&uStack_1b0,puVar8,param_1);
    FUN_10918eb6c(&uStack_1b0);
  }
  else {
    if ((uVar3 & 0x1f0000) == 0x10000) {
      puVar6 = *(ulong **)(param_4 + 2);
      uStack_170 = (ulong)&uStack_1b0 | 8;
      uStack_1a8 = puVar6[1];
      uStack_1b0 = *puVar6;
      uStack_198 = puVar6[3];
      uStack_1a0 = puVar6[2];
      uStack_188 = puVar6[5];
      uStack_190 = puVar6[4];
      uStack_178 = puVar6[7];
      uStack_180 = puVar6[6];
      puStack_168 = &uStack_160;
      uStack_160 = 0;
      uStack_158 = 0;
      if (puVar6[7] != 0) {
        piVar1 = (int *)(puVar6[7] + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(int *)((long)puVar6 + 4) < 3) {
        uStack_160 = *(undefined8 *)puVar6[9];
        uStack_158 = ((undefined8 *)puVar6[9])[1];
      }
      else {
        uStack_1b0 = uStack_1b0 & 0xffffffff;
        func_0x000109a84868(&uStack_1b0);
      }
    }
    else {
      FUN_109a8a180(&uStack_1b0,param_4,0xffffffff);
    }
    FUN_109a7a7c8(param_2,param_1,0x2a,param_3,&uStack_1b0);
    if (uStack_178 != 0) {
      piVar1 = (int *)(uStack_178 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_1b0);
      }
    }
    uStack_178 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    if (0 < uStack_1b0._4_4_) {
      lVar7 = 0;
      do {
        *(undefined4 *)(uStack_170 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < uStack_1b0._4_4_);
    }
    if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
      _free(puStack_168[-1]);
    }
  }
  return;
}



/* Entry: 109a8261c; end: 109a826f7;  */

void FUN_109a8261c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_28 = param_3;
  uStack_24 = param_2;
  FUN_109a826f8(0x3ff0000000000000,param_1,0x30,&uStack_28,param_4);
  return;
}



/* Entry: 109a826f8; end: 109a829e7;  */

void FUN_109a826f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  uint param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined8 uStack_2dc;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined8 uStack_27c;
  undefined4 uStack_274;
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
  long lStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  uint uStack_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  int *piStack_1e0;
  long *plStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  undefined1 auStack_1c0 [352];
  
  uVar6 = param_2;
  FUN_109a830cc();
  iStack_214 = *param_4;
  iStack_218 = param_4[1];
  piStack_1e0 = &iStack_218;
  uStack_210 = 0xeeeeeeee;
  uStack_208 = 0xeeeeeeee;
  uStack_1f0 = 0;
  lStack_1e8 = 0;
  uVar3 = (param_5 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((param_5 & 7) << 1) & 3);
  uStack_1c8 = (ulong)uVar3;
  lStack_1d0 = (long)iStack_214 * (long)(int)uVar3;
  uStack_220 = param_5 & 0xfff | 0x42ff4000;
  iStack_21c = 2;
  lStack_200 = lStack_1d0 * iStack_218 + 0xeeeeeeee;
  uStack_280 = 0x42ff0000;
  lStack_240 = (long)&uStack_27c + 4;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_27c = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  uStack_254 = 0;
  uStack_25c = 0;
  uStack_258 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_2e0 = 0x42ff0000;
  lStack_2a0 = (long)&uStack_2dc + 4;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2dc = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  uStack_2b4 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  puStack_298 = &uStack_290;
  puStack_238 = &uStack_230;
  lStack_1f8 = lStack_200;
  plStack_1d8 = &lStack_1d0;
  FUN_109a82eb0(param_1,0,auStack_1c0,uVar6,param_3,&uStack_220,&uStack_280,&uStack_2e0,&uStack_300)
  ;
  FUN_109a77b50(param_2,auStack_1c0);
  FUN_10918eb6c(auStack_1c0);
  if (lStack_2a8 != 0) {
    piVar1 = (int *)(lStack_2a8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_2e0);
    }
  }
  lStack_2a8 = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  if (0 < (int)uStack_2dc) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_2a0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_2dc);
  }
  if (puStack_298 != &uStack_290 && puStack_298 != (undefined8 *)0x0) {
    _free(puStack_298[-1]);
  }
  if (lStack_248 != 0) {
    piVar1 = (int *)(lStack_248 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_280);
    }
  }
  lStack_248 = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  uStack_258 = 0;
  uStack_254 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  if (0 < (int)uStack_27c) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_240 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_27c);
  }
  if (puStack_238 != &uStack_230 && puStack_238 != (undefined8 *)0x0) {
    _free(puStack_238[-1]);
  }
  if (lStack_1e8 != 0) {
    piVar1 = (int *)(lStack_1e8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_220);
    }
  }
  lStack_1e8 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lStack_1f8 = 0;
  lStack_200 = 0;
  if (0 < iStack_21c) {
    lVar7 = 0;
    do {
      piStack_1e0[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_21c);
  }
  if (plStack_1d8 != &lStack_1d0 && plStack_1d8 != (long *)0x0) {
    _free(plStack_1d8[-1]);
  }
  return;
}



/* Entry: 109a829e8; end: 109a82ac7;  */

void FUN_109a829e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_28 = *param_2;
  FUN_109a826f8(0x3ff0000000000000,param_1,0x30,&uStack_28,param_3);
  return;
}



/* Entry: 109a82ac8; end: 109a82ba3;  */

void FUN_109a82ac8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_28 = param_3;
  uStack_24 = param_2;
  FUN_109a826f8(0x3ff0000000000000,param_1,0x31,&uStack_28,param_4);
  return;
}



/* Entry: 109a82ba4; end: 109a82c83;  */

void FUN_109a82ba4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_28 = *param_2;
  FUN_109a826f8(0x3ff0000000000000,param_1,0x31,&uStack_28,param_3);
  return;
}



/* Entry: 109a82c84; end: 109a82d5f;  */

void FUN_109a82c84(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_28 = param_3;
  uStack_24 = param_2;
  FUN_109a826f8(0x3ff0000000000000,param_1,0x49,&uStack_28,param_4);
  return;
}



/* Entry: 109a82d60; end: 109a82e3f;  */

void FUN_109a82d60(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_1 + 3;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0xf;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42ff0000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x22] = param_1 + 0x1b;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  uStack_28 = *param_2;
  FUN_109a826f8(0x3ff0000000000000,param_1,0x49,&uStack_28,param_3);
  return;
}



/* Entry: 109a82e40; end: 109a82eaf;  */

void FUN_109a82e40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a82eb0; end: 109a830cb;  */

undefined8 *
FUN_109a82eb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_3 = param_4;
  *(undefined4 *)(param_3 + 1) = param_5;
  uVar8 = param_6[1];
  uVar7 = *param_6;
  uVar9 = param_6[2];
  param_3[5] = param_6[3];
  param_3[4] = uVar9;
  uVar9 = param_6[4];
  param_3[7] = param_6[5];
  param_3[6] = uVar9;
  lVar4 = param_6[7];
  uVar10 = param_6[7];
  uVar9 = param_6[6];
  param_3[0xc] = 0;
  param_3[9] = uVar10;
  param_3[8] = uVar9;
  param_3[10] = param_3 + 3;
  param_3[0xb] = param_3 + 0xc;
  param_3[0xd] = 0;
  param_3[3] = uVar8;
  param_3[2] = uVar7;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_6 + 4) < 3) {
    puVar5 = (undefined8 *)param_6[9];
    puVar6 = (undefined8 *)param_3[0xb];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_3 + 0x14) = 0;
    func_0x000109a84868(param_3 + 2,param_6);
  }
  uVar8 = param_7[1];
  uVar7 = *param_7;
  uVar9 = param_7[2];
  param_3[0x11] = param_7[3];
  param_3[0x10] = uVar9;
  uVar9 = param_7[4];
  param_3[0x13] = param_7[5];
  param_3[0x12] = uVar9;
  lVar4 = param_7[7];
  uVar10 = param_7[7];
  uVar9 = param_7[6];
  param_3[0x18] = 0;
  param_3[0x15] = uVar10;
  param_3[0x14] = uVar9;
  param_3[0x16] = param_3 + 0xf;
  param_3[0x17] = param_3 + 0x18;
  param_3[0x19] = 0;
  param_3[0xf] = uVar8;
  param_3[0xe] = uVar7;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_7 + 4) < 3) {
    puVar5 = (undefined8 *)param_7[9];
    puVar6 = (undefined8 *)param_3[0x17];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_3 + 0x74) = 0;
    func_0x000109a84868(param_3 + 0xe,param_7);
  }
  uVar7 = *param_8;
  uVar9 = param_8[3];
  uVar8 = param_8[2];
  param_3[0x1b] = param_8[1];
  param_3[0x1a] = uVar7;
  param_3[0x1d] = uVar9;
  param_3[0x1c] = uVar8;
  uVar7 = param_8[4];
  param_3[0x1f] = param_8[5];
  param_3[0x1e] = uVar7;
  lVar4 = param_8[7];
  uVar7 = param_8[6];
  param_3[0x21] = param_8[7];
  param_3[0x20] = uVar7;
  param_3[0x22] = param_3 + 0x1b;
  param_3[0x23] = param_3 + 0x24;
  param_3[0x24] = 0;
  param_3[0x25] = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_8 + 4) < 3) {
    puVar5 = (undefined8 *)param_8[9];
    puVar6 = (undefined8 *)param_3[0x23];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_3 + 0xd4) = 0;
    func_0x000109a84868(param_3 + 0x1a,param_8);
  }
  param_3[0x26] = param_1;
  param_3[0x27] = param_2;
  lVar4 = 0x28;
  do {
    param_3[lVar4] = *param_9;
    lVar4 = lVar4 + 1;
    param_9 = param_9 + 1;
  } while (lVar4 != 0x2c);
  return param_3;
}



/* Entry: 109a830cc; end: 109a83147;  */

undefined8 * FUN_109a830cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (puRam000000011382bb78 == (undefined8 *)0x0) {
    FUN_109ac2220();
    _pthread_mutex_lock(*param_1);
    if (puRam000000011382bb78 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x8;
      __Znwm();
      *puVar1 = &PTR_DAT_110b22688;
      puRam000000011382bb78 = puVar1;
    }
    _pthread_mutex_unlock(*param_1);
  }
  return puRam000000011382bb78;
}



/* Entry: 109a83148; end: 109a8316b;  */

void FUN_109a83148(void)

{
  return;
}



/* Entry: 109a8316c; end: 109a8350b;  */

void FUN_109a8316c(long *param_1,undefined8 **param_2,undefined8 param_3,ulong param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined4 *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long alStack_208 [3];
  undefined4 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [4];
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  long lStack_190;
  undefined1 *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  long lStack_130;
  undefined4 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 **ppuStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 auStack_e8 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != (undefined8 **)0x0) {
    puVar15 = param_2[3];
    if (0 < (int)param_4) {
      uVar16 = 0;
      do {
        uVar18 = *(ulong *)(param_5 + uVar16 * 8);
        if (uVar18 >> 0x1f != 0) {
          puVar10 = (undefined4 *)0x20;
          func_0x000107c2ae8c();
          *puVar10 = 1;
          uStack_168 = puVar10 + 1;
          uStack_160 = 0x18;
          uStack_15c = 0;
          *(undefined1 *)(puVar10 + 7) = 0;
          *(undefined8 *)(puVar10 + 3) = 0x745f657a69732820;
          *(undefined8 *)(puVar10 + 1) = 0x3d3c205d695b7a73;
          *(undefined8 *)(puVar10 + 5) = 0x58414d5f544e4929;
          FUN_109ac3188(0xffffff29,&uStack_168,&DAT_10f321296,&UNK_10f597913,0x4e);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x109a834a0);
          (*pcVar7)();
        }
        if (uVar18 == 0) goto LAB_109a83408;
        if (param_6 != 0) {
          if ((long)((int)param_4 + -2) < (long)uVar16) {
            lVar19 = 1;
          }
          else {
            lVar19 = *(long *)(param_7 + uVar16 * 8);
          }
          puVar15 = (undefined8 *)((long)puVar15 + lVar19 * *(long *)(param_6 + uVar16 * 8));
        }
        auStack_e8[uVar16] = (int)uVar18;
        uVar16 = uVar16 + 1;
      } while ((param_4 & 0xffffffff) != uVar16);
    }
    uStack_148 = 0;
    uStack_15c = 0;
    uStack_168._4_4_ = 0;
    uStack_160 = 0;
    puStack_128 = &uStack_160;
    lStack_130 = 0;
    uStack_134 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_168._0_4_ = 0x42ff0000;
    uStack_158 = SUB84(puVar15,0);
    uStack_154 = (undefined4)((ulong)puVar15 >> 0x20);
    uStack_150 = uStack_158;
    uStack_14c = uStack_154;
    puStack_120 = &uStack_118;
    FUN_109a844cc(&uStack_168,param_4,auStack_e8,param_7,1);
    FUN_109a847b0(&uStack_168);
    uStack_1a8 = 0;
    puStack_188 = auStack_1c0;
    uStack_1bc = 0;
    stack0xfffffffffffffe3c = 0;
    lStack_190 = 0;
    uStack_194 = 0;
    uStack_19c = 0;
    uStack_198 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    auStack_1c8._0_4_ = 0x42ff0000;
    uStack_1b8 = (undefined4)param_3;
    uStack_1b4 = (undefined4)((ulong)param_3 >> 0x20);
    uStack_1b0 = uStack_1b8;
    uStack_1ac = uStack_1b4;
    puStack_180 = &uStack_178;
    FUN_109a844cc(auStack_1c8,param_4,auStack_e8,param_8,1);
    FUN_109a847b0(auStack_1c8);
    uStack_1d0 = 0;
    alStack_208[1] = 0;
    alStack_208[2] = 0;
    alStack_208[0] = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    param_1 = alStack_208;
    param_2 = &puStack_f8;
    puStack_f8 = &uStack_168;
    puStack_f0 = auStack_1c8;
    FUN_109a9b368(param_1,param_2,0,&ppuStack_108,2);
    uVar6 = uStack_1e0;
    if (uStack_1e8 != 0) {
      uVar16 = 0;
      do {
        param_2 = ppuStack_108;
        _memcpy(uStack_100,ppuStack_108,uVar6);
        uVar16 = uVar16 + 1;
        param_1 = alStack_208;
        FUN_109a8350c();
      } while (uVar16 < uStack_1e8);
    }
    if (lStack_190 != 0) {
      piVar1 = (int *)(lStack_190 + 0x14);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        param_1 = (long *)auStack_1c8;
        func_0x000109a848d4();
      }
    }
    lStack_190 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    if (0 < (int)auStack_1c8._4_4_) {
      lVar19 = 0;
      do {
        *(undefined4 *)(puStack_188 + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < (int)auStack_1c8._4_4_);
    }
    if (puStack_180 != &uStack_178 && puStack_180 != (undefined8 *)0x0) {
      param_1 = (long *)puStack_180[-1];
      _free();
    }
    if (lStack_130 != 0) {
      piVar1 = (int *)(lStack_130 + 0x14);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        param_1 = &uStack_168;
        func_0x000109a848d4();
      }
    }
    lStack_130 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    if (0 < uStack_168._4_4_) {
      lVar19 = 0;
      do {
        puStack_128[lVar19] = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < uStack_168._4_4_);
    }
    if (puStack_120 != &uStack_118 && puStack_120 != (undefined8 *)0x0) {
      param_1 = (long *)puStack_120[-1];
      _free();
    }
  }
LAB_109a83408:
  iVar11 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (iVar11 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(auStack_1c8);
    func_0x00010567aa40(&uStack_168);
  }
  __Unwind_Resume();
  if ((ulong)param_1[7] < param_1[4] - 1U) {
    uVar16 = param_1[7] + 1;
    param_1[7] = uVar16;
    uVar2 = *(uint *)(param_1 + 6);
    if (uVar2 == 1) {
      if ((param_1[2] != 0) && (uVar2 = *(uint *)(param_1 + 3), 0 < (int)uVar2)) {
        lVar19 = 0;
        do {
          if (*(long *)(param_1[2] + lVar19) != 0) {
            *(ulong *)(param_1[2] + lVar19) =
                 *(long *)(*(long *)(*param_1 + lVar19) + 0x10) +
                 **(long **)(*(long *)(*param_1 + lVar19) + 0x48) * uVar16;
          }
          lVar19 = lVar19 + 8;
        } while ((ulong)uVar2 * 8 - lVar19 != 0);
      }
      if ((param_1[1] != 0) && (uVar2 = *(uint *)(param_1 + 3), 0 < (int)uVar2)) {
        lVar19 = 0;
        plVar17 = (long *)(param_1[1] + 0x10);
        do {
          if (*plVar17 != 0) {
            *plVar17 = *(long *)(*(long *)(*param_1 + lVar19) + 0x10) +
                       **(long **)(*(long *)(*param_1 + lVar19) + 0x48) * uVar16;
          }
          lVar19 = lVar19 + 8;
          plVar17 = plVar17 + 0xc;
        } while ((ulong)uVar2 * 8 - lVar19 != 0);
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 3);
      if (0 < (int)uVar3) {
        uVar18 = 0;
        bVar9 = false;
        bVar8 = true;
        if (0 < (int)uVar2) {
          bVar9 = (int)uVar16 < 0;
          bVar8 = (int)uVar16 == 0;
        }
        lVar19 = *param_1;
        do {
          lVar21 = *(long *)(lVar19 + uVar18 * 8);
          lVar20 = *(long *)(lVar21 + 0x10);
          if (lVar20 != 0) {
            if (!bVar8 && !bVar9) {
              uVar12 = (ulong)uVar2;
              uVar13 = uVar16;
              do {
                iVar11 = *(int *)(*(long *)(lVar21 + 0x40) + -4 + uVar12 * 4);
                uVar4 = 0;
                iVar14 = (int)uVar13;
                if (iVar11 != 0) {
                  uVar4 = iVar14 / iVar11;
                }
                uVar13 = (ulong)uVar4;
                lVar20 = lVar20 + *(long *)(*(long *)(lVar21 + 0x48) + -8 + uVar12 * 8) *
                                  (long)(int)(iVar14 - uVar4 * iVar11);
              } while ((1 < (long)uVar12) && (uVar12 = uVar12 - 1, 0 < (int)uVar4));
            }
            if (param_1[2] != 0) {
              *(long *)(param_1[2] + uVar18 * 8) = lVar20;
              lVar19 = *param_1;
            }
            if (param_1[1] != 0) {
              *(long *)(param_1[1] + uVar18 * 0x60 + 0x10) = lVar20;
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar3);
      }
    }
  }
  return;
}



/* Entry: 109a8350c; end: 109a83683;  */

void FUN_109a8350c(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  if ((ulong)param_1[7] < param_1[4] - 1U) {
    uVar1 = param_1[7] + 1;
    param_1[7] = uVar1;
    uVar2 = *(uint *)(param_1 + 6);
    if (uVar2 == 1) {
      if ((param_1[2] != 0) && (uVar2 = *(uint *)(param_1 + 3), 0 < (int)uVar2)) {
        lVar11 = 0;
        do {
          if (*(long *)(param_1[2] + lVar11) != 0) {
            *(ulong *)(param_1[2] + lVar11) =
                 *(long *)(*(long *)(*param_1 + lVar11) + 0x10) +
                 **(long **)(*(long *)(*param_1 + lVar11) + 0x48) * uVar1;
          }
          lVar11 = lVar11 + 8;
        } while ((ulong)uVar2 * 8 - lVar11 != 0);
      }
      if ((param_1[1] != 0) && (uVar2 = *(uint *)(param_1 + 3), 0 < (int)uVar2)) {
        lVar11 = 0;
        plVar12 = (long *)(param_1[1] + 0x10);
        do {
          if (*plVar12 != 0) {
            *plVar12 = *(long *)(*(long *)(*param_1 + lVar11) + 0x10) +
                       **(long **)(*(long *)(*param_1 + lVar11) + 0x48) * uVar1;
          }
          lVar11 = lVar11 + 8;
          plVar12 = plVar12 + 0xc;
        } while ((ulong)uVar2 * 8 - lVar11 != 0);
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 3);
      if (0 < (int)uVar3) {
        uVar13 = 0;
        bVar7 = false;
        bVar6 = true;
        if (0 < (int)uVar2) {
          bVar7 = (int)uVar1 < 0;
          bVar6 = (int)uVar1 == 0;
        }
        lVar11 = *param_1;
        do {
          lVar15 = *(long *)(lVar11 + uVar13 * 8);
          lVar14 = *(long *)(lVar15 + 0x10);
          if (lVar14 != 0) {
            if (!bVar6 && !bVar7) {
              uVar8 = (ulong)uVar2;
              uVar9 = uVar1;
              do {
                iVar4 = *(int *)(*(long *)(lVar15 + 0x40) + -4 + uVar8 * 4);
                uVar5 = 0;
                iVar10 = (int)uVar9;
                if (iVar4 != 0) {
                  uVar5 = iVar10 / iVar4;
                }
                uVar9 = (ulong)uVar5;
                lVar14 = lVar14 + *(long *)(*(long *)(lVar15 + 0x48) + -8 + uVar8 * 8) *
                                  (long)(int)(iVar10 - uVar5 * iVar4);
              } while ((1 < (long)uVar8) && (uVar8 = uVar8 - 1, 0 < (int)uVar5));
            }
            if (param_1[2] != 0) {
              *(long *)(param_1[2] + uVar13 * 8) = lVar14;
              lVar11 = *param_1;
            }
            if (param_1[1] != 0) {
              *(long *)(param_1[1] + uVar13 * 0x60 + 0x10) = lVar14;
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar3);
      }
    }
  }
  return;
}



/* Entry: 109a83684; end: 109a83a1f;  */

undefined8 *
FUN_109a83684(undefined8 *param_1,undefined8 **param_2,long param_3,undefined8 ***param_4,
             long param_5,long param_6,long param_7,long param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined4 uStack_400;
  ulong uStack_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 auStack_3d8 [8];
  undefined1 auStack_3d0 [4];
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  long lStack_3a0;
  undefined1 *puStack_398;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  long lStack_340;
  undefined4 *puStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 **ppuStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined1 *puStack_300;
  undefined4 auStack_2f8 [32];
  long lStack_278;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [4];
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  long lStack_190;
  undefined1 *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  long lStack_130;
  undefined4 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 **ppuStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 auStack_e8 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != (undefined8 **)0x0) {
    puVar13 = param_2[3];
    if (0 < (int)param_4) {
      uVar8 = 0;
      do {
        uVar10 = *(ulong *)(param_5 + uVar8 * 8);
        if (uVar10 >> 0x1f != 0) {
          puVar6 = (undefined4 *)0x20;
          func_0x000107c2ae8c();
          *puVar6 = 1;
          uStack_168 = puVar6 + 1;
          uStack_160 = 0x18;
          uStack_15c = 0;
          *(undefined1 *)(puVar6 + 7) = 0;
          *(undefined8 *)(puVar6 + 3) = 0x745f657a69732820;
          *(undefined8 *)(puVar6 + 1) = 0x3d3c205d695b7a73;
          *(undefined8 *)(puVar6 + 5) = 0x58414d5f544e4929;
          FUN_109ac3188(0xffffff29,&uStack_168,&DAT_10f2ded2d,&UNK_10f597913,0x6d);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109a839b4);
          (*pcVar5)();
        }
        if (uVar10 == 0) goto LAB_109a8391c;
        if (param_6 != 0) {
          if ((long)((int)param_4 + -2) < (long)uVar8) {
            lVar11 = 1;
          }
          else {
            lVar11 = *(long *)(param_7 + uVar8 * 8);
          }
          puVar13 = (undefined8 *)((long)puVar13 + lVar11 * *(long *)(param_6 + uVar8 * 8));
        }
        auStack_e8[uVar8] = (int)uVar10;
        uVar8 = uVar8 + 1;
      } while (((ulong)param_4 & 0xffffffff) != uVar8);
    }
    uStack_148 = 0;
    uStack_15c = 0;
    uStack_168._4_4_ = 0;
    uStack_160 = 0;
    puStack_128 = &uStack_160;
    lStack_130 = 0;
    uStack_134 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_168._0_4_ = 0x42ff0000;
    uStack_158 = (undefined4)param_3;
    uStack_154 = (undefined4)((ulong)param_3 >> 0x20);
    lVar9 = param_7;
    uStack_150 = uStack_158;
    uStack_14c = uStack_154;
    puStack_120 = &uStack_118;
    FUN_109a844cc(&uStack_168,param_4,auStack_e8,param_8,1);
    FUN_109a847b0(&uStack_168);
    uStack_1a8 = 0;
    puStack_188 = auStack_1c0;
    uStack_1bc = 0;
    stack0xfffffffffffffe3c = 0;
    lStack_190 = 0;
    uStack_194 = 0;
    uStack_19c = 0;
    uStack_198 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    auStack_1c8._0_4_ = 0x42ff0000;
    uStack_1b8 = SUB84(puVar13,0);
    uStack_1b4 = (undefined4)((ulong)puVar13 >> 0x20);
    uStack_1b0 = uStack_1b8;
    uStack_1ac = uStack_1b4;
    puStack_180 = &uStack_178;
    FUN_109a844cc(auStack_1c8,param_4,auStack_e8,param_7,1);
    FUN_109a847b0(auStack_1c8);
    uStack_1d0 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_208 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    lStack_1e0 = 0;
    uStack_1d8 = 0;
    param_1 = &uStack_208;
    param_2 = &puStack_f8;
    param_4 = &ppuStack_108;
    param_3 = 0;
    param_5 = 2;
    puStack_f8 = &uStack_168;
    puStack_f0 = auStack_1c8;
    FUN_109a9b368();
    lVar11 = lStack_1e0;
    param_7 = lVar9;
    if (uStack_1e8 != 0) {
      uVar8 = 0;
      do {
        param_2 = ppuStack_108;
        param_3 = lVar11;
        _memcpy(uStack_100);
        uVar8 = uVar8 + 1;
        param_1 = &uStack_208;
        FUN_109a8350c();
      } while (uVar8 < uStack_1e8);
    }
    if (lStack_190 != 0) {
      piVar1 = (int *)(lStack_190 + 0x14);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        param_1 = (undefined8 *)auStack_1c8;
        func_0x000109a848d4();
      }
    }
    lStack_190 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    if (0 < (int)auStack_1c8._4_4_) {
      lVar11 = 0;
      do {
        *(undefined4 *)(puStack_188 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)auStack_1c8._4_4_);
    }
    if (puStack_180 != &uStack_178 && puStack_180 != (undefined8 *)0x0) {
      param_1 = (undefined8 *)puStack_180[-1];
      _free();
    }
    if (lStack_130 != 0) {
      piVar1 = (int *)(lStack_130 + 0x14);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        param_1 = &uStack_168;
        func_0x000109a848d4();
      }
    }
    lStack_130 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    if (0 < uStack_168._4_4_) {
      lVar11 = 0;
      do {
        puStack_128[lVar11] = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < uStack_168._4_4_);
    }
    if (puStack_120 != &uStack_118 && puStack_120 != (undefined8 *)0x0) {
      param_1 = (undefined8 *)puStack_120[-1];
      _free();
    }
  }
LAB_109a8391c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(auStack_1c8);
    func_0x00010567aa40(&uStack_168);
  }
  __Unwind_Resume(param_1);
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2 != (undefined8 **)0x0) && (param_3 != 0)) {
    puVar13 = param_2[3];
    lVar11 = *(long *)(param_3 + 0x18);
    if (0 < (int)param_4) {
      uVar8 = 0;
      lVar9 = (long)((int)param_4 + -2);
      do {
        uVar10 = *(ulong *)(param_5 + uVar8 * 8);
        if (uVar10 >> 0x1f != 0) {
          puVar6 = (undefined4 *)0x20;
          func_0x000107c2ae8c();
          *puVar6 = 1;
          uStack_378 = puVar6 + 1;
          uStack_370 = 0x18;
          uStack_36c = 0;
          *(undefined1 *)(puVar6 + 7) = 0;
          *(undefined8 *)(puVar6 + 3) = 0x745f657a69732820;
          *(undefined8 *)(puVar6 + 1) = 0x3d3c205d695b7a73;
          *(undefined8 *)(puVar6 + 5) = 0x58414d5f544e4929;
          FUN_109ac3188(0xffffff29,&uStack_378,&UNK_10f597991,&UNK_10f597913,0x8c);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109a83d78);
          (*pcVar5)();
        }
        if (uVar10 == 0) goto LAB_109a83ce0;
        if (param_6 != 0) {
          if (lVar9 < (long)uVar8) {
            lVar12 = 1;
          }
          else {
            lVar12 = *(long *)(param_7 + uVar8 * 8);
          }
          puVar13 = (undefined8 *)((long)puVar13 + lVar12 * *(long *)(param_6 + uVar8 * 8));
        }
        if (param_8 != 0) {
          if (lVar9 < (long)uVar8) {
            lVar12 = 1;
          }
          else {
            lVar12 = *(long *)(lStack_210 + uVar8 * 8);
          }
          lVar11 = lVar11 + lVar12 * *(long *)(param_8 + uVar8 * 8);
        }
        auStack_2f8[uVar8] = (int)uVar10;
        uVar8 = uVar8 + 1;
      } while (((ulong)param_4 & 0xffffffff) != uVar8);
    }
    uStack_358 = 0;
    uStack_36c = 0;
    uStack_378._4_4_ = 0;
    uStack_370 = 0;
    puStack_338 = &uStack_370;
    lStack_340 = 0;
    uStack_344 = 0;
    uStack_34c = 0;
    uStack_348 = 0;
    uStack_354 = 0;
    uStack_350 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_378._0_4_ = 0x42ff0000;
    uStack_368 = SUB84(puVar13,0);
    uStack_364 = (undefined4)((ulong)puVar13 >> 0x20);
    uStack_360 = uStack_368;
    uStack_35c = uStack_364;
    puStack_330 = &uStack_328;
    FUN_109a844cc(&uStack_378,param_4,auStack_2f8,param_7,1);
    FUN_109a847b0(&uStack_378);
    uStack_3b8 = 0;
    puStack_398 = auStack_3d0;
    uStack_3cc = 0;
    stack0xfffffffffffffc2c = 0;
    lStack_3a0 = 0;
    uStack_3a4 = 0;
    uStack_3ac = 0;
    uStack_3a8 = 0;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_388 = 0;
    uStack_380 = 0;
    auStack_3d8._0_4_ = 0x42ff0000;
    uStack_3c8 = (undefined4)lVar11;
    uStack_3c4 = (undefined4)((ulong)lVar11 >> 0x20);
    uStack_3c0 = uStack_3c8;
    uStack_3bc = uStack_3c4;
    puStack_390 = &uStack_388;
    FUN_109a844cc(auStack_3d8,param_4,auStack_2f8,lStack_210,1);
    FUN_109a847b0(auStack_3d8);
    uStack_3e0 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_418 = 0;
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    param_1 = &uStack_418;
    param_2 = &puStack_308;
    puStack_308 = &uStack_378;
    puStack_300 = auStack_3d8;
    FUN_109a9b368(param_1,param_2,0,&ppuStack_318,2);
    uVar4 = uStack_3f0;
    if (uStack_3f8 != 0) {
      uVar8 = 0;
      do {
        param_2 = ppuStack_318;
        _memcpy(uStack_310,ppuStack_318,uVar4);
        uVar8 = uVar8 + 1;
        param_1 = &uStack_418;
        FUN_109a8350c(param_1);
      } while (uVar8 < uStack_3f8);
    }
    if (lStack_3a0 != 0) {
      piVar1 = (int *)(lStack_3a0 + 0x14);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        param_1 = (undefined8 *)auStack_3d8;
        func_0x000109a848d4(param_1);
      }
    }
    lStack_3a0 = 0;
    uStack_3c0 = 0;
    uStack_3bc = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    if (0 < (int)auStack_3d8._4_4_) {
      lVar11 = 0;
      do {
        *(undefined4 *)(puStack_398 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)auStack_3d8._4_4_);
    }
    if (puStack_390 != &uStack_388 && puStack_390 != (undefined8 *)0x0) {
      param_1 = (undefined8 *)puStack_390[-1];
      _free(param_1);
    }
    if (lStack_340 != 0) {
      piVar1 = (int *)(lStack_340 + 0x14);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        param_1 = &uStack_378;
        func_0x000109a848d4(param_1);
      }
    }
    lStack_340 = 0;
    uStack_360 = 0;
    uStack_35c = 0;
    uStack_368 = 0;
    uStack_364 = 0;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_358 = 0;
    uStack_354 = 0;
    if (0 < uStack_378._4_4_) {
      lVar11 = 0;
      do {
        puStack_338[lVar11] = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < uStack_378._4_4_);
    }
    if (puStack_330 != &uStack_328 && puStack_330 != (undefined8 *)0x0) {
      param_1 = (undefined8 *)puStack_330[-1];
      _free(param_1);
    }
  }
LAB_109a83ce0:
  iVar7 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    func_0x000104bd46a0(param_1);
    func_0x00010567aa40(auStack_3d8);
    func_0x00010567aa40(&uStack_378);
  }
  __Unwind_Resume(param_1);
  if ((bRam000000011374c7d0 & 1) == 0) {
    iVar7 = 0x1374c7d0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      ppuRam000000011374c7c8 = &PTR_FUN_110b229e8;
      ___cxa_guard_release(0x11374c7d0);
    }
  }
  return (undefined8 *)0x11374c7c8;
}



/* Entry: 109a83a20; end: 109a83de3;  */

undefined8 *
FUN_109a83a20(undefined8 *param_1,undefined8 **param_2,long param_3,ulong param_4,long param_5,
             long param_6,long param_7,long param_8,long param_9)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [4];
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  long lStack_190;
  undefined1 *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  long lStack_130;
  undefined4 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 **ppuStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 auStack_e8 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2 != (undefined8 **)0x0) && (param_3 != 0)) {
    puVar8 = param_2[3];
    lVar13 = *(long *)(param_3 + 0x18);
    if (0 < (int)param_4) {
      uVar9 = 0;
      lVar10 = (long)((int)param_4 + -2);
      do {
        uVar11 = *(ulong *)(param_5 + uVar9 * 8);
        if (uVar11 >> 0x1f != 0) {
          puVar6 = (undefined4 *)0x20;
          func_0x000107c2ae8c();
          *puVar6 = 1;
          uStack_168 = puVar6 + 1;
          uStack_160 = 0x18;
          uStack_15c = 0;
          *(undefined1 *)(puVar6 + 7) = 0;
          *(undefined8 *)(puVar6 + 3) = 0x745f657a69732820;
          *(undefined8 *)(puVar6 + 1) = 0x3d3c205d695b7a73;
          *(undefined8 *)(puVar6 + 5) = 0x58414d5f544e4929;
          FUN_109ac3188(0xffffff29,&uStack_168,&UNK_10f597991,&UNK_10f597913,0x8c);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109a83d78);
          (*pcVar5)();
        }
        if (uVar11 == 0) goto LAB_109a83ce0;
        if (param_6 != 0) {
          if (lVar10 < (long)uVar9) {
            lVar12 = 1;
          }
          else {
            lVar12 = *(long *)(param_7 + uVar9 * 8);
          }
          puVar8 = (undefined8 *)((long)puVar8 + lVar12 * *(long *)(param_6 + uVar9 * 8));
        }
        if (param_8 != 0) {
          if (lVar10 < (long)uVar9) {
            lVar12 = 1;
          }
          else {
            lVar12 = *(long *)(param_9 + uVar9 * 8);
          }
          lVar13 = lVar13 + lVar12 * *(long *)(param_8 + uVar9 * 8);
        }
        auStack_e8[uVar9] = (int)uVar11;
        uVar9 = uVar9 + 1;
      } while ((param_4 & 0xffffffff) != uVar9);
    }
    uStack_148 = 0;
    uStack_15c = 0;
    uStack_168._4_4_ = 0;
    uStack_160 = 0;
    puStack_128 = &uStack_160;
    lStack_130 = 0;
    uStack_134 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_168._0_4_ = 0x42ff0000;
    uStack_158 = SUB84(puVar8,0);
    uStack_154 = (undefined4)((ulong)puVar8 >> 0x20);
    uStack_150 = uStack_158;
    uStack_14c = uStack_154;
    puStack_120 = &uStack_118;
    FUN_109a844cc(&uStack_168,param_4,auStack_e8,param_7,1);
    FUN_109a847b0(&uStack_168);
    uStack_1a8 = 0;
    puStack_188 = auStack_1c0;
    uStack_1bc = 0;
    stack0xfffffffffffffe3c = 0;
    lStack_190 = 0;
    uStack_194 = 0;
    uStack_19c = 0;
    uStack_198 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    auStack_1c8._0_4_ = 0x42ff0000;
    uStack_1b8 = (undefined4)lVar13;
    uStack_1b4 = (undefined4)((ulong)lVar13 >> 0x20);
    uStack_1b0 = uStack_1b8;
    uStack_1ac = uStack_1b4;
    puStack_180 = &uStack_178;
    FUN_109a844cc(auStack_1c8,param_4,auStack_e8,param_9,1);
    FUN_109a847b0(auStack_1c8);
    uStack_1d0 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_208 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    param_1 = &uStack_208;
    param_2 = &puStack_f8;
    puStack_f8 = &uStack_168;
    puStack_f0 = auStack_1c8;
    FUN_109a9b368(param_1,param_2,0,&ppuStack_108,2);
    uVar4 = uStack_1e0;
    if (uStack_1e8 != 0) {
      uVar9 = 0;
      do {
        param_2 = ppuStack_108;
        _memcpy(uStack_100,ppuStack_108,uVar4);
        uVar9 = uVar9 + 1;
        param_1 = &uStack_208;
        FUN_109a8350c(param_1);
      } while (uVar9 < uStack_1e8);
    }
    if (lStack_190 != 0) {
      piVar1 = (int *)(lStack_190 + 0x14);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        param_1 = (undefined8 *)auStack_1c8;
        func_0x000109a848d4(param_1);
      }
    }
    lStack_190 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    if (0 < (int)auStack_1c8._4_4_) {
      lVar13 = 0;
      do {
        *(undefined4 *)(puStack_188 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)auStack_1c8._4_4_);
    }
    if (puStack_180 != &uStack_178 && puStack_180 != (undefined8 *)0x0) {
      param_1 = (undefined8 *)puStack_180[-1];
      _free(param_1);
    }
    if (lStack_130 != 0) {
      piVar1 = (int *)(lStack_130 + 0x14);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        param_1 = &uStack_168;
        func_0x000109a848d4(param_1);
      }
    }
    lStack_130 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    if (0 < uStack_168._4_4_) {
      lVar13 = 0;
      do {
        puStack_128[lVar13] = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < uStack_168._4_4_);
    }
    if (puStack_120 != &uStack_118 && puStack_120 != (undefined8 *)0x0) {
      param_1 = (undefined8 *)puStack_120[-1];
      _free(param_1);
    }
  }
LAB_109a83ce0:
  iVar7 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    func_0x000104bd46a0(param_1);
    func_0x00010567aa40(auStack_1c8);
    func_0x00010567aa40(&uStack_168);
  }
  __Unwind_Resume(param_1);
  if ((bRam000000011374c7d0 & 1) == 0) {
    iVar7 = 0x1374c7d0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      ppuRam000000011374c7c8 = &PTR_FUN_110b229e8;
      ___cxa_guard_release(0x11374c7d0);
    }
  }
  return (undefined8 *)0x11374c7c8;
}



/* Entry: 109a83de4; end: 109a83e37;  */

undefined8 FUN_109a83de4(void)

{
  int iVar1;
  
  if ((bRam000000011374c7d0 & 1) == 0) {
    iVar1 = 0x1374c7d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam000000011374c7c8 = &PTR_FUN_110b229e8;
      ___cxa_guard_release(0x11374c7d0);
    }
  }
  return 0x11374c7c8;
}



/* Entry: 109a83e38; end: 109a83e3b;  */

void FUN_109a83e38(void)

{
  return;
}



/* Entry: 109a83e3c; end: 109a83eb7;  */

undefined8 * FUN_109a83e3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (puRam000000011382bb88 == (undefined8 *)0x0) {
    FUN_109ac2220();
    _pthread_mutex_lock(*param_1);
    if (puRam000000011382bb88 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x8;
      __Znwm();
      *puVar1 = &PTR_DAT_110b22a50;
      puRam000000011382bb88 = puVar1;
    }
    _pthread_mutex_unlock(*param_1);
  }
  return puRam000000011382bb88;
}



/* Entry: 109a83eb8; end: 109a83fcf;  */

void FUN_109a83eb8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  puVar3 = param_1 + 2;
  uVar1 = *puVar3;
  puVar2 = param_2 + 2;
  *puVar3 = *puVar2;
  *puVar2 = uVar1;
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = uVar1;
  uVar4 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0xc) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0xe) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  puVar7 = *(undefined8 **)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  puVar6 = (undefined8 *)(param_1 + 0x14);
  uVar4 = *puVar6;
  *(undefined8 **)(param_2 + 0x12) = puVar7;
  puVar5 = (undefined8 *)(param_2 + 0x14);
  *puVar6 = *puVar5;
  *puVar5 = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x16);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_2 + 0x16) = uVar4;
  if (*(undefined8 **)(param_1 + 0x12) == puVar5) {
    *(undefined4 **)(param_1 + 0x10) = puVar3;
    *(undefined8 **)(param_1 + 0x12) = puVar6;
    puVar7 = *(undefined8 **)(param_2 + 0x12);
  }
  if (puVar7 != puVar6) {
    return;
  }
  *(undefined4 **)(param_2 + 0x10) = puVar2;
  *(undefined8 **)(param_2 + 0x12) = puVar5;
  return;
}



/* Entry: 109a83fd0; end: 109a844cb;  */

void FUN_109a83fd0(uint *param_1,ulong param_2,uint *param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  uint *puVar16;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  uVar9 = (uint)param_2;
  if ((0x20 < uVar9) || (param_3 == (uint *)0x0)) {
    puVar7 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar7 = 1;
    puStack_50 = puVar7 + 1;
    uStack_48 = 0x23;
    *(undefined8 *)(puVar7 + 3) = 0x43203d3c20642026;
    *(undefined8 *)(puVar7 + 1) = 0x262064203d3c2030;
    *(undefined1 *)((long)puVar7 + 0x27) = 0;
    *(undefined4 *)((long)puVar7 + 0x23) = 0x73657a69;
    *(undefined8 *)(puVar7 + 7) = 0x69735f202626204d;
    *(undefined8 *)(puVar7 + 5) = 0x49445f58414d5f56;
    FUN_109ac3188(0xffffff29,&puStack_50,&DAT_10f68efec,&UNK_10f597913,0x182);
    goto LAB_109a84454;
  }
  param_4 = param_4 & 0xfff;
  puVar6 = param_1 + 4;
  if (*(long *)puVar6 != 0) {
    if (param_1[1] == uVar9) {
      if (param_4 == (*param_1 & 0xfff)) {
        uVar10 = param_2;
        if (uVar9 != 0) {
          if (((uVar9 == 2) && (param_1[2] == *param_3)) && (param_1[3] == param_3[1])) {
            return;
          }
          goto LAB_109a84080;
        }
LAB_109a840ac:
        if ((uint)uVar10 == uVar9) goto LAB_109a840b4;
      }
    }
    else if (((uVar9 == 1) && ((int)param_1[1] < 3)) && (param_4 == (*param_1 & 0xfff))) {
LAB_109a84080:
      uVar10 = 0;
      do {
        if (*(uint *)(*(long *)(param_1 + 0x10) + uVar10 * 4) != param_3[uVar10])
        goto LAB_109a840ac;
        uVar10 = uVar10 + 1;
      } while ((param_2 & 0xffffffff) != uVar10);
LAB_109a840b4:
      if (1 < (int)uVar9) {
        return;
      }
      if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 1) {
        return;
      }
    }
  }
  if (*(long *)(param_1 + 0xe) != 0) {
    piVar12 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar6[0] = 0;
  puVar6[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (0 < (int)param_1[1]) {
    lVar11 = 0;
    lVar13 = *(long *)(param_1 + 0x10);
    do {
      *(undefined4 *)(lVar13 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[1]);
  }
  if (uVar9 == 0) {
    return;
  }
  *param_1 = param_4 | 0x42ff0000;
  puVar6 = param_1;
  FUN_109a844cc(param_1,param_2,param_3,0,1);
  uVar10 = (ulong)param_1[1];
  if ((int)param_1[1] < 3) {
    lVar11 = (long)(int)param_1[3] * (long)(int)param_1[2];
  }
  else {
    lVar11 = 1;
    piVar12 = *(int **)(param_1 + 0x10);
    uVar14 = uVar10;
    do {
      lVar11 = lVar11 * *piVar12;
      uVar14 = uVar14 - 1;
      piVar12 = piVar12 + 1;
    } while (uVar14 != 0);
  }
  if (lVar11 == 0) {
LAB_109a8422c:
    if (*(long *)(param_1 + 0xe) != 0) {
      piVar12 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_109a85650();
    uVar9 = param_1[1];
    if (2 < (int)uVar9) {
      param_1[2] = 0xffffffff;
      param_1[3] = 0xffffffff;
    }
    if (*(long *)(param_1 + 0xe) == 0) {
      lVar11 = *(long *)(param_1 + 4);
    }
    else {
      lVar11 = *(long *)(*(long *)(param_1 + 0xe) + 0x18);
      *(long *)(param_1 + 4) = lVar11;
      *(long *)(param_1 + 6) = lVar11;
    }
    if (lVar11 == 0) {
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    else {
      piVar12 = *(int **)(param_1 + 0x10);
      plVar15 = *(long **)(param_1 + 0x12);
      iVar1 = *piVar12;
      lVar13 = *(long *)(param_1 + 6) + *plVar15 * (long)iVar1;
      *(long *)(param_1 + 10) = lVar13;
      if (iVar1 < 1) {
        *(long *)(param_1 + 8) = lVar13;
      }
      else {
        uVar4 = uVar9 - 1;
        uVar10 = (ulong)uVar4;
        lVar11 = lVar11 + plVar15[(int)uVar4] * (long)piVar12[(int)uVar4];
        *(long *)(param_1 + 8) = lVar11;
        if (1 < (int)uVar9) {
          do {
            lVar11 = lVar11 + *plVar15 * ((long)*piVar12 + -1);
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 1;
            plVar15 = plVar15 + 1;
          } while (uVar10 != 0);
          *(long *)(param_1 + 8) = lVar11;
        }
      }
    }
    return;
  }
  puVar16 = *(uint **)(param_1 + 0xc);
  if (puRam000000011382bb80 == (uint *)0x0) {
    FUN_109a83e3c();
    uVar10 = (ulong)param_1[1];
    puRam000000011382bb80 = puVar6;
  }
  puVar6 = puRam000000011382bb80;
  if (puVar16 != (uint *)0x0) {
    puVar6 = puVar16;
  }
  (**(code **)(*(long *)puVar6 + 0x10))
            (puVar6,uVar10,*(undefined8 *)(param_1 + 0x10),param_4,0,*(undefined8 *)(param_1 + 0x12)
             ,0,0);
  *(uint **)(param_1 + 0xe) = puVar6;
  if (puVar6 == (uint *)0x0) {
    puVar8 = (undefined8 *)0xc;
    func_0x000107c2ae8c();
    *puVar8 = 0x3d21207500000001;
    puStack_50 = (undefined4 *)((long)puVar8 + 4);
    uStack_48 = 6;
    *(undefined1 *)((long)puVar8 + 10) = 0;
    *(undefined2 *)(puVar8 + 1) = 0x3020;
    FUN_109ac3188(0xffffff29,&puStack_50,&DAT_10f68efec,&UNK_10f597913,0x1a2);
  }
  else {
    if (*(ulong *)(*(long *)(param_1 + 0x12) + (long)(int)param_1[1] * 8 + -8) ==
        (ulong)((*param_1 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((*param_1 & 7) << 1) & 3))
       ) goto LAB_109a8422c;
    puVar7 = (undefined4 *)0x30;
    func_0x000107c2ae8c();
    *puVar7 = 1;
    puStack_50 = puVar7 + 1;
    uStack_48 = 0x2b;
    *(undefined8 *)(puVar7 + 3) = 0x203d3d205d312d73;
    *(undefined8 *)(puVar7 + 1) = 0x6d69645b70657473;
    *(undefined1 *)((long)puVar7 + 0x2f) = 0;
    *(undefined8 *)(puVar7 + 7) = 0x5f4d454c455f5643;
    *(undefined8 *)(puVar7 + 5) = 0x29745f657a697328;
    *(undefined8 *)((long)puVar7 + 0x27) = 0x297367616c662845;
    *(undefined8 *)((long)puVar7 + 0x1f) = 0x5a49535f4d454c45;
    FUN_109ac3188(0xffffff29,&puStack_50,&DAT_10f68efec,&UNK_10f597913,0x1aa);
  }
LAB_109a84454:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a84458);
  (*pcVar5)();
}



/* Entry: 109a844cc; end: 109a847af;  */

void FUN_109a844cc(uint *param_1,uint param_2,long param_3,long param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  if (0x20 < param_2) {
    puVar9 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    puStack_50 = puVar9 + 1;
    uStack_48 = 0x21;
    *(undefined2 *)(puVar9 + 9) = 0x4d;
    *(undefined8 *)(puVar9 + 3) = 0x645f20262620736d;
    *(undefined8 *)(puVar9 + 1) = 0x69645f203d3c2030;
    *(undefined8 *)(puVar9 + 7) = 0x49445f58414d5f56;
    *(undefined8 *)(puVar9 + 5) = 0x43203d3c20736d69;
    FUN_109ac3188(0xffffff29,&puStack_50,&UNK_10f598a4e,&UNK_10f597913,0x117);
LAB_109a84748:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109a8474c);
    (*pcVar6)();
  }
  if (param_1[1] != param_2) {
    puVar10 = *(uint **)(param_1 + 0x12);
    if (puVar10 != param_1 + 0x14) {
      if (puVar10 != (uint *)0x0) {
        _free(*(undefined8 *)(puVar10 + -2));
      }
      *(uint **)(param_1 + 0x10) = param_1 + 2;
      *(uint **)(param_1 + 0x12) = param_1 + 0x14;
    }
    if (2 < param_2) {
      lVar7 = (ulong)(param_2 * 4 + 4) + (ulong)param_2 * 8;
      func_0x000107c2ae8c();
      *(long *)(param_1 + 0x12) = lVar7;
      puVar10 = (uint *)(lVar7 + (ulong)param_2 * 8);
      *puVar10 = param_2;
      *(uint **)(param_1 + 0x10) = puVar10 + 1;
      param_1[2] = 0xffffffff;
      param_1[3] = 0xffffffff;
    }
  }
  param_1[1] = param_2;
  if ((param_3 != 0) && (param_2 != 0)) {
    uVar13 = (ulong)*param_1 & 7;
    uVar11 = (ulong)((*param_1 >> 3 & 0x1ff) + 1 <<
                    (ulong)(0xfa50U >> (ulong)(uint)((int)uVar13 << 1) & 3));
    uVar5 = 0x88442211 >> (uVar13 << 2);
    uVar12 = (ulong)uVar5 & 0xf;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x12);
    uVar13 = (ulong)(param_2 - 1);
    uVar14 = uVar11;
    do {
      uVar3 = *(uint *)(param_3 + uVar13 * 4);
      if ((int)uVar3 < 0) {
        puVar8 = (undefined8 *)0xc;
        func_0x000107c2ae8c();
        *puVar8 = 0x3d3e207300000001;
        puStack_50 = (undefined4 *)((long)puVar8 + 4);
        uStack_48 = 6;
        *(undefined1 *)((long)puVar8 + 10) = 0;
        *(undefined2 *)(puVar8 + 1) = 0x3020;
        FUN_109ac3188(0xffffff29,&puStack_50,&UNK_10f598a4e,&UNK_10f597913,0x132);
        goto LAB_109a84748;
      }
      *(uint *)(lVar7 + uVar13 * 4) = uVar3;
      if (param_4 == 0) {
        if (param_5 != 0) {
          *(ulong *)(lVar2 + uVar13 * 8) = uVar14;
          uVar14 = uVar14 * uVar3;
        }
      }
      else {
        uVar15 = *(ulong *)(param_4 + uVar13 * 8);
        uVar4 = 0;
        if ((uVar5 & 0xf) != 0) {
          uVar4 = uVar15 / uVar12;
        }
        if (uVar15 != uVar4 * uVar12) {
          puVar9 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar9 = 1;
          puStack_50 = puVar9 + 1;
          uStack_48 = 0x1f;
          *(undefined1 *)((long)puVar9 + 0x23) = 0;
          *(undefined8 *)(puVar9 + 3) = 0x6d20612065622074;
          *(undefined8 *)(puVar9 + 1) = 0x73756d2070657453;
          *(undefined8 *)((long)puVar9 + 0x1b) = 0x317a736520666f20;
          *(undefined8 *)((long)puVar9 + 0x13) = 0x656c7069746c756d;
          FUN_109ac3188(0xfffffff3,&puStack_50,&UNK_10f598a4e,&UNK_10f597913,0x139);
          goto LAB_109a84748;
        }
        if ((long)(ulong)(param_2 - 1) <= (long)uVar13) {
          uVar15 = uVar11;
        }
        *(ulong *)(lVar2 + uVar13 * 8) = uVar15;
      }
      bVar1 = 0 < (long)uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar1);
    if (param_2 == 1) {
      param_1[1] = 2;
      param_1[3] = 1;
      *(ulong *)(*(long *)(param_1 + 0x12) + 8) = uVar11;
    }
  }
  return;
}



/* Entry: 109a847b0; end: 109a8492f;  */

void FUN_109a847b0(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  FUN_109a85650();
  iVar1 = *(int *)(param_1 + 4);
  if (2 < iVar1) {
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar8 = *(long *)(param_1 + 0x10);
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
    *(long *)(param_1 + 0x10) = lVar8;
    *(long *)(param_1 + 0x18) = lVar8;
  }
  if (lVar8 == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    piVar4 = *(int **)(param_1 + 0x40);
    plVar5 = *(long **)(param_1 + 0x48);
    iVar2 = *piVar4;
    lVar6 = *(long *)(param_1 + 0x18) + *plVar5 * (long)iVar2;
    *(long *)(param_1 + 0x28) = lVar6;
    if (iVar2 < 1) {
      *(long *)(param_1 + 0x20) = lVar6;
    }
    else {
      uVar3 = iVar1 - 1;
      uVar7 = (ulong)uVar3;
      lVar8 = lVar8 + plVar5[(int)uVar3] * (long)piVar4[(int)uVar3];
      *(long *)(param_1 + 0x20) = lVar8;
      if (1 < iVar1) {
        do {
          lVar8 = lVar8 + *plVar5 * ((long)*piVar4 + -1);
          uVar7 = uVar7 - 1;
          piVar4 = piVar4 + 1;
          plVar5 = plVar5 + 1;
        } while (uVar7 != 0);
        *(long *)(param_1 + 0x20) = lVar8;
      }
    }
  }
  return;
}



/* Entry: 109a84930; end: 109a852c7;  */

/* WARNING: Removing unreachable block (ram,0x000109a84b68) */
/* WARNING: Removing unreachable block (ram,0x000109a84b6c) */
/* WARNING: Removing unreachable block (ram,0x000109a84b74) */
/* WARNING: Removing unreachable block (ram,0x000109a84b7c) */
/* WARNING: Removing unreachable block (ram,0x000109a84b80) */
/* WARNING: Removing unreachable block (ram,0x000109a84ba0) */
/* WARNING: Removing unreachable block (ram,0x000109a84ba8) */
/* WARNING: Removing unreachable block (ram,0x000109a84bbc) */
/* WARNING: Removing unreachable block (ram,0x000109a84bcc) */

uint * FUN_109a84930(uint *param_1,uint *param_2,ulong *param_3,ulong *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong *puVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  ulong *puVar22;
  uint *puVar23;
  undefined8 uVar24;
  uint uStack_530;
  uint uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined8 uStack_520;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 uStack_4f8;
  int *piStack_4f0;
  long *plStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  ulong *puStack_4c8;
  ulong uStack_4c0;
  ulong auStack_4b8 [136];
  undefined4 *puStack_78;
  undefined8 uStack_70;
  
  *param_1 = 0x42ff0000;
  lVar8 = 0;
  puVar14 = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar14[0] = 0;
  puVar14[1] = 0;
  puVar1 = param_1 + 2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar23 = param_1 + 0x14;
  puVar23[0] = 0;
  puVar23[1] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(uint **)(param_1 + 0x10) = puVar1;
  *(uint **)(param_1 + 0x12) = puVar23;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar3 = param_2[1];
  uVar21 = (ulong)uVar3;
  if ((int)uVar3 < 2) {
    puVar7 = (undefined4 *)0x10;
    func_0x000107c2ae8c();
    *puVar7 = 1;
    puStack_4c8 = (ulong *)(puVar7 + 1);
    *puStack_4c8 = 0x3e20736d69642e6d;
    uStack_4c0 = 0xb;
    *(undefined1 *)((long)puVar7 + 0xf) = 0;
    *(undefined4 *)((long)puVar7 + 0xb) = 0x32203d3e;
    FUN_109ac3188(0xffffff29,&puStack_4c8,&UNK_10f2e8162,&UNK_10f597913,0x1c6);
    goto LAB_109a851ec;
  }
  if (uVar3 != 2) {
    _bzero(auStack_4b8,0x440);
    puVar22 = auStack_4b8;
    if (0x88 < uVar3) {
      puVar22 = (ulong *)(uVar21 << 3);
      puStack_4c8 = auStack_4b8;
      __Znam();
      _bzero();
    }
    uVar13 = *param_4;
    *puVar22 = *param_3;
    puVar22[1] = uVar13;
    lVar8 = 2;
    do {
      puVar22[lVar8] = 0x7fffffff80000000;
      lVar8 = lVar8 + 1;
      uVar3 = param_2[1];
      lVar12 = (long)(int)uVar3;
    } while (lVar8 < lVar12);
    uStack_530 = 0x42ff0000;
    piStack_4f0 = (int *)((ulong)&uStack_530 | 8);
    lVar8 = 0;
    uStack_524 = 0;
    uStack_520._0_4_ = 0;
    uStack_52c = 0;
    uStack_528 = 0;
    uStack_514 = 0;
    uStack_510 = 0;
    uStack_520._4_4_ = 0;
    uStack_518 = 0;
    uStack_504 = 0;
    uStack_50c = 0;
    uStack_508 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4fc = 0;
    lStack_4e0 = 0;
    lStack_4d8 = 0;
    plStack_4e8 = &lStack_4e0;
    puStack_4c8 = puVar22;
    uStack_4c0 = uVar21;
    if (puVar22 != (ulong *)0x0) {
      if (0 < (int)uVar3) {
        piVar9 = *(int **)(param_2 + 0x10);
        puVar17 = puVar22;
        lVar18 = lVar12;
        do {
          uVar21 = *puVar17;
          iVar20 = (int)uVar21;
          if ((iVar20 != -0x80000000 || uVar21 >> 0x20 != 0x7fffffff) &&
             (((iVar20 < 0 || (iVar19 = (int)(uVar21 >> 0x20), iVar19 <= iVar20)) ||
              (*piVar9 < iVar19)))) {
            puVar7 = (undefined4 *)0x54;
            func_0x000107c2ae8c();
            *(undefined8 *)(puVar7 + 7) = 0x6174732e72203d3c;
            *(undefined8 *)(puVar7 + 5) = 0x203028207c7c2029;
            *(undefined8 *)(puVar7 + 0xb) = 0x203c207472617473;
            *(undefined8 *)(puVar7 + 9) = 0x2e72202626207472;
            *(undefined8 *)(puVar7 + 0xf) = 0x3c20646e652e7220;
            *(undefined8 *)(puVar7 + 0xd) = 0x262620646e652e72;
            *(undefined8 *)(puVar7 + 0x12) = 0x295d695b657a6973;
            *(undefined8 *)(puVar7 + 0x10) = 0x2e6d203d3c20646e;
            *puVar7 = 1;
            puStack_78 = puVar7 + 1;
            uStack_70 = 0x4c;
            *(undefined1 *)(puVar7 + 0x14) = 0;
            *(undefined8 *)(puVar7 + 3) = 0x286c6c613a3a6567;
            *(undefined8 *)(puVar7 + 1) = 0x6e6152203d3d2072;
            FUN_109ac3188(0xffffff29,&puStack_78,&UNK_10f2e8162,&UNK_10f597913,0x221);
            goto LAB_109a851ec;
          }
          piVar9 = piVar9 + 1;
          lVar18 = lVar18 + -1;
          puVar17 = puVar17 + 1;
        } while (lVar18 != 0);
      }
      if (&uStack_530 != param_2) {
        if (*(long *)(param_2 + 0xe) != 0) {
          piVar9 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar5) {
              *piVar9 = *piVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_4f8 = 0;
        uStack_518 = 0;
        uStack_514 = 0;
        uStack_520._0_4_ = 0;
        uStack_520._4_4_ = 0;
        uStack_508 = 0;
        uStack_504 = 0;
        uStack_510 = 0;
        uStack_50c = 0;
        uStack_530 = *param_2;
        if ((int)param_2[1] < 3) {
          uStack_528 = (undefined4)*(undefined8 *)(param_2 + 2);
          uStack_524 = (undefined4)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
          lStack_4e0 = **(long **)(param_2 + 0x12);
          lStack_4d8 = (*(long **)(param_2 + 0x12))[1];
          uStack_52c = param_2[1];
        }
        else {
          func_0x000109a84868(&uStack_530,param_2);
        }
        lVar8 = *(long *)(param_2 + 4);
        uStack_518 = (undefined4)*(undefined8 *)(param_2 + 6);
        uStack_514 = (undefined4)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
        uStack_520._0_4_ = (undefined4)lVar8;
        uStack_520._4_4_ = (undefined4)((ulong)lVar8 >> 0x20);
        uStack_508 = (undefined4)*(undefined8 *)(param_2 + 10);
        uStack_504 = (undefined4)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
        uStack_510 = (undefined4)*(undefined8 *)(param_2 + 8);
        uStack_50c = (undefined4)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
        uStack_4f8 = *(undefined8 *)(param_2 + 0xe);
        uStack_500 = (undefined4)*(undefined8 *)(param_2 + 0xc);
        uStack_4fc = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
      }
      piVar9 = piStack_4f0;
      plVar16 = plStack_4e8;
      if (0 < (int)uVar3) {
        do {
          uVar21 = *puVar22;
          iVar20 = (int)uVar21;
          if ((iVar20 != -0x80000000 || uVar21 >> 0x20 != 0x7fffffff) &&
             (iVar19 = (int)(uVar21 >> 0x20), iVar20 != 0 || *piVar9 != iVar19)) {
            *piVar9 = iVar19 - iVar20;
            lVar8 = lVar8 + *plVar16 * (long)iVar20;
            uStack_530 = uStack_530 | 0x8000;
            uStack_520 = lVar8;
          }
          lVar12 = lVar12 + -1;
          piVar9 = piVar9 + 1;
          plVar16 = plVar16 + 1;
          puVar22 = puVar22 + 1;
        } while (lVar12 != 0);
      }
      FUN_109a85650(&uStack_530);
      if (*(long *)(param_1 + 0xe) != 0) {
        piVar9 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
        do {
          iVar20 = *piVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar5) {
            *piVar9 = iVar20 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar20 + -1 == 0) {
          func_0x000109a848d4(param_1);
        }
      }
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      if (0 < (int)param_1[1]) {
        lVar8 = 0;
        lVar12 = *(long *)(param_1 + 0x10);
        do {
          *(undefined4 *)(lVar12 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)*puVar14);
      }
      *(ulong *)(param_1 + 2) = CONCAT44(uStack_524,uStack_528);
      *(ulong *)param_1 = CONCAT44(uStack_52c,uStack_530);
      *(ulong *)(param_1 + 6) = CONCAT44(uStack_514,uStack_518);
      *(long *)(param_1 + 4) = uStack_520;
      *(ulong *)(param_1 + 10) = CONCAT44(uStack_504,uStack_508);
      *(ulong *)(param_1 + 8) = CONCAT44(uStack_50c,uStack_510);
      *(undefined8 *)(param_1 + 0xe) = uStack_4f8;
      *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_4fc,uStack_500);
      puVar14 = *(uint **)(param_1 + 0x12);
      if (puVar14 != puVar23) {
        if (puVar14 != (uint *)0x0) {
          _free(*(undefined8 *)(puVar14 + -2));
        }
        *(uint **)(param_1 + 0x10) = puVar1;
        *(uint **)(param_1 + 0x12) = puVar23;
        puVar14 = puVar23;
      }
      if ((int)uStack_52c < 3) {
        puVar10 = (undefined8 *)((ulong)&uStack_530 | 4);
        *(long *)puVar14 = *plStack_4e8;
        *(long *)(puVar14 + 2) = plStack_4e8[1];
        uStack_530 = 0x42ff0000;
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        puVar10[5] = 0;
        puVar10[4] = 0;
        *(undefined8 *)((long)puVar10 + 0x34) = 0;
        *(undefined8 *)((long)puVar10 + 0x2c) = 0;
        if (plStack_4e8 != &lStack_4e0) {
          _free(plStack_4e8[-1]);
        }
      }
      else {
        *(int **)(param_1 + 0x10) = piStack_4f0;
        *(long **)(param_1 + 0x12) = plStack_4e8;
      }
      if (puStack_4c8 == auStack_4b8) {
        return param_1;
      }
      if (puStack_4c8 == (ulong *)0x0) {
        return param_1;
      }
      __ZdaPv();
      return param_1;
    }
    puVar10 = (undefined8 *)0xc;
    func_0x000107c2ae8c();
    *puVar10 = 0x676e617200000001;
    puStack_78 = (undefined4 *)((long)puVar10 + 4);
    uStack_70 = 6;
    *(undefined1 *)((long)puVar10 + 10) = 0;
    *(undefined2 *)(puVar10 + 1) = 0x7365;
    FUN_109ac3188(0xffffff29,&puStack_78,&UNK_10f2e8162,&UNK_10f597913,0x21d);
    goto LAB_109a851ec;
  }
  if (param_1 == param_2) {
    lVar12 = 0;
  }
  else {
    if (*(long *)(param_2 + 0xe) != 0) {
      piVar9 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = *piVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (*(long *)(param_1 + 0xe) != 0) {
        piVar9 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
        do {
          iVar20 = *piVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar5) {
            *piVar9 = iVar20 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar20 + -1 == 0) {
          func_0x000109a848d4(param_1);
        }
      }
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    if ((int)param_1[1] < 1) {
      *param_1 = *param_2;
LAB_109a84bec:
      if (2 < (int)param_2[1]) goto LAB_109a84c20;
      param_1[1] = param_2[1];
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      puVar10 = *(undefined8 **)(param_2 + 0x12);
      puVar15 = *(undefined8 **)(param_1 + 0x12);
      *puVar15 = *puVar10;
      puVar15[1] = puVar10[1];
    }
    else {
      lVar8 = 0;
      lVar12 = *(long *)(param_1 + 0x10);
      do {
        *(undefined4 *)(lVar12 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)*puVar14);
      *param_1 = *param_2;
      if ((int)*puVar14 < 3) goto LAB_109a84bec;
LAB_109a84c20:
      func_0x000109a84868(param_1,param_2);
    }
    lVar8 = *(long *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(long *)(param_1 + 4) = lVar8;
    uVar24 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar24;
    lVar12 = *(long *)(param_2 + 0xe);
    uVar24 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0xc) = uVar24;
  }
  uVar3 = (uint)*param_3;
  uVar2 = *(uint *)((long)param_3 + 4);
  if (((uVar3 != 0x80000000) || (uVar2 != 0x7fffffff)) && ((uVar3 != 0 || (uVar2 != *puVar1)))) {
    if ((((int)uVar3 < 0) || ((int)uVar2 < (int)uVar3)) || ((int)param_2[2] < (int)uVar2)) {
      puVar7 = (undefined4 *)0x58;
      func_0x000107c2ae8c();
      *puVar7 = 1;
      puStack_4c8 = (ulong *)(puVar7 + 1);
      uStack_4c0 = 0x53;
      *(undefined8 *)(puVar7 + 7) = 0x676e6152776f725f;
      *(undefined8 *)(puVar7 + 5) = 0x2026262074726174;
      *(undefined8 *)(puVar7 + 0xb) = 0x52776f725f203d3c;
      *(undefined8 *)(puVar7 + 9) = 0x2074726174732e65;
      *(undefined4 *)((long)puVar7 + 0x53) = 0x73776f72;
      *(undefined8 *)(puVar7 + 0xf) = 0x776f725f20262620;
      *(undefined8 *)(puVar7 + 0xd) = 0x646e652e65676e61;
      *(undefined8 *)(puVar7 + 0x13) = 0x722e6d203d3c2064;
      *(undefined8 *)(puVar7 + 0x11) = 0x6e652e65676e6152;
      *(undefined1 *)((long)puVar7 + 0x57) = 0;
      *(undefined8 *)(puVar7 + 3) = 0x732e65676e615277;
      *(undefined8 *)(puVar7 + 1) = 0x6f725f203d3c2030;
      FUN_109ac3188(0xffffff29,&puStack_4c8,&UNK_10f2e8162,&UNK_10f597913,0x1d5);
      goto LAB_109a851ec;
    }
    param_1[2] = uVar2 - uVar3;
    lVar8 = lVar8 + *(long *)(param_1 + 0x14) * (ulong)uVar3;
    *(long *)(param_1 + 4) = lVar8;
    *param_1 = *param_1 | 0x8000;
  }
  uVar3 = (uint)*param_4;
  uVar2 = *(uint *)((long)param_4 + 4);
  if (((uVar3 != 0x80000000) || (uVar2 != 0x7fffffff)) && ((uVar3 != 0 || (uVar2 != param_1[3])))) {
    if ((((int)uVar3 < 0) || ((int)uVar2 < (int)uVar3)) || ((int)param_2[3] < (int)uVar2)) {
      puVar7 = (undefined4 *)0x58;
      func_0x000107c2ae8c();
      *puVar7 = 1;
      puStack_4c8 = (ulong *)(puVar7 + 1);
      uStack_4c0 = 0x53;
      *(undefined8 *)(puVar7 + 7) = 0x676e61526c6f635f;
      *(undefined8 *)(puVar7 + 5) = 0x2026262074726174;
      *(undefined8 *)(puVar7 + 0xb) = 0x526c6f635f203d3c;
      *(undefined8 *)(puVar7 + 9) = 0x2074726174732e65;
      *(undefined4 *)((long)puVar7 + 0x53) = 0x736c6f63;
      *(undefined8 *)(puVar7 + 0xf) = 0x6c6f635f20262620;
      *(undefined8 *)(puVar7 + 0xd) = 0x646e652e65676e61;
      *(undefined8 *)(puVar7 + 0x13) = 0x632e6d203d3c2064;
      *(undefined8 *)(puVar7 + 0x11) = 0x6e652e65676e6152;
      *(undefined1 *)((long)puVar7 + 0x57) = 0;
      *(undefined8 *)(puVar7 + 3) = 0x732e65676e61526c;
      *(undefined8 *)(puVar7 + 1) = 0x6f635f203d3c2030;
      FUN_109ac3188(0xffffff29,&puStack_4c8,&UNK_10f2e8162,&UNK_10f597913,0x1dd);
LAB_109a851ec:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109a851f0);
      (*pcVar6)();
    }
    param_1[3] = uVar2 - uVar3;
    if ((int)param_1[1] < 1) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(*(long *)(param_1 + 0x12) + (ulong)param_1[1] * 8 + -8);
    }
    *(ulong *)(param_1 + 4) = lVar8 + lVar18 * (ulong)uVar3;
    uVar11 = 0xffff3fff;
    if ((int)param_2[3] <= (int)(uVar2 - uVar3)) {
      uVar11 = 0xffff7fff;
    }
    *param_1 = uVar11 & *param_1 | 0x8000;
  }
  if (*puVar1 == 1) {
    *param_1 = *param_1 | 0x4000;
  }
  else if ((int)*puVar1 < 1) goto LAB_109a84f4c;
  if (0 < (int)param_1[3]) {
    return param_1;
  }
LAB_109a84f4c:
  if (lVar12 != 0) {
    piVar9 = (int *)(lVar12 + 0x14);
    do {
      iVar20 = *piVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar5) {
        *piVar9 = iVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar20 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (0 < (int)param_1[1]) {
    lVar8 = 0;
    lVar12 = *(long *)(param_1 + 0x10);
    do {
      *(undefined4 *)(lVar12 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)*puVar14);
  }
  puVar1[0] = 0;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 109a852c8; end: 109a855e3;  */

uint * FUN_109a852c8(uint *param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 *puVar8;
  long lVar9;
  int iVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  undefined8 uVar19;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  param_1[1] = 2;
  uVar19 = NEON_rev64(*(undefined8 *)(param_3 + 2),4);
  puVar17 = param_1 + 2;
  *(undefined8 *)puVar17 = uVar19;
  lVar14 = *(long *)(param_2 + 4) + **(long **)(param_2 + 0x12) * (long)param_3[1];
  puVar18 = param_1 + 4;
  *(long *)puVar18 = lVar14;
  uVar19 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar19;
  uVar19 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar19;
  lVar9 = *(long *)(param_2 + 0xe);
  puVar11 = param_1 + 0x14;
  puVar11[0] = 0;
  puVar11[1] = 0;
  *(long *)(param_1 + 0xe) = lVar9;
  *(uint **)(param_1 + 0x10) = puVar17;
  *(uint **)(param_1 + 0x12) = puVar11;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if ((int)param_2[1] < 3) {
    uVar13 = param_2[3];
    iVar10 = param_3[2];
    iVar2 = param_3[3];
    uVar15 = 0xffffbfff;
    if ((int)uVar13 <= iVar10) {
      uVar15 = 0xffffffff;
    }
    uVar16 = 0x4000;
    if (iVar2 != 1) {
      uVar16 = 0;
    }
    *param_1 = uVar16 | uVar15 & uVar3;
    uVar3 = (uVar3 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar3 & 7) << 1) & 3);
    iVar4 = *param_3;
    *(long *)(param_1 + 4) = lVar14 + (long)iVar4 * (long)(int)uVar3;
    if (((((-1 < iVar4) && (-1 < iVar10)) && (iVar4 + iVar10 <= (int)uVar13)) &&
        ((-1 < param_3[1] && (-1 < iVar2)))) && (param_3[1] + iVar2 <= (int)param_2[2])) {
      if (lVar9 != 0) {
        piVar1 = (int *)(lVar9 + 0x14);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        iVar10 = param_3[2];
        uVar13 = param_2[3];
      }
      if ((iVar10 < (int)uVar13) || (param_3[3] < (int)param_2[2])) {
        *param_1 = *param_1 | 0x8000;
      }
      puVar12 = *(undefined8 **)(param_1 + 0x12);
      *puVar12 = **(undefined8 **)(param_2 + 0x12);
      puVar12[1] = (ulong)uVar3;
      if (((int)param_1[2] < 1) || ((int)param_1[3] < 1)) {
        if (*(long *)(param_1 + 0xe) != 0) {
          piVar1 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
          do {
            iVar10 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 + -1 == 0) {
            func_0x000109a848d4(param_1);
          }
        }
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        puVar18[0] = 0;
        puVar18[1] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        if (0 < (int)param_1[1]) {
          lVar9 = 0;
          lVar14 = *(long *)(param_1 + 0x10);
          do {
            *(undefined4 *)(lVar14 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < (int)param_1[1]);
        }
        puVar17[0] = 0;
        puVar17[1] = 0;
      }
      return param_1;
    }
    puVar8 = (undefined4 *)0x84;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar8 + 0x13) = 0x3c20302026262079;
    *(undefined8 *)(puVar8 + 0x11) = 0x2e696f72203d3c20;
    *(undefined8 *)(puVar8 + 0x17) = 0x2026262074686769;
    *(undefined8 *)(puVar8 + 0x15) = 0x65682e696f72203d;
    *(undefined8 *)(puVar8 + 0x1b) = 0x676965682e696f72;
    *(undefined8 *)(puVar8 + 0x19) = 0x202b20792e696f72;
    *(undefined8 *)(puVar8 + 0x1e) = 0x73776f722e6d203d;
    *(undefined8 *)(puVar8 + 0x1c) = 0x3c20746867696568;
    *(undefined8 *)(puVar8 + 3) = 0x203020262620782e;
    *(undefined8 *)(puVar8 + 1) = 0x696f72203d3c2030;
    *(undefined8 *)(puVar8 + 7) = 0x2026262068746469;
    *(undefined8 *)(puVar8 + 5) = 0x772e696f72203d3c;
    *(undefined8 *)(puVar8 + 0xb) = 0x746469772e696f72;
    *(undefined8 *)(puVar8 + 9) = 0x202b20782e696f72;
    *puVar8 = 1;
    puStack_40 = (undefined8 *)(puVar8 + 1);
    uStack_38 = 0x7c;
    *(undefined1 *)(puVar8 + 0x20) = 0;
    *(undefined8 *)(puVar8 + 0xf) = 0x3020262620736c6f;
    *(undefined8 *)(puVar8 + 0xd) = 0x632e6d203d3c2068;
    FUN_109ac3188(0xffffff29,&puStack_40,&UNK_10f2e8162,&UNK_10f597913,0x1fc);
  }
  else {
    puVar8 = (undefined4 *)0x10;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    puStack_40 = (undefined8 *)(puVar8 + 1);
    *puStack_40 = 0x3c20736d69642e6d;
    uStack_38 = 0xb;
    *(undefined1 *)((long)puVar8 + 0xf) = 0;
    *(undefined4 *)((long)puVar8 + 0xb) = 0x32203d3c;
    FUN_109ac3188(0xffffff29,&puStack_40,&UNK_10f2e8162,&UNK_10f597913,0x1f5);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109a8559c);
  (*pcVar7)();
}



/* Entry: 109a855e4; end: 109a8564f;  */

uint * FUN_109a855e4(uint *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                    undefined8 param_5)

{
  uint *puVar1;
  
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar1 = param_1 + 0x14;
  puVar1[0] = 0;
  puVar1[1] = 0;
  *(uint **)(param_1 + 0x10) = param_1 + 2;
  *(uint **)(param_1 + 0x12) = puVar1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = param_4 & 0xfff | 0x42ff0000;
  *(undefined8 *)(param_1 + 4) = param_5;
  *(undefined8 *)(param_1 + 6) = param_5;
  FUN_109a844cc();
  FUN_109a847b0(param_1);
  return param_1;
}



/* Entry: 109a85650; end: 109a856e7;  */

void FUN_109a85650(uint *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  
  uVar1 = param_1[1];
  lVar2 = (long)(int)uVar1;
  if ((int)uVar1 < 1) {
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar5 = uVar4;
      if (1 < *(int *)(*(long *)(param_1 + 0x10) + uVar4 * 4)) break;
      uVar4 = uVar4 + 1;
      uVar5 = (ulong)uVar1;
    } while (uVar1 != uVar4);
    lVar3 = (long)(int)uVar5;
  }
  puVar6 = (ulong *)(*(long *)(param_1 + 0x12) + lVar2 * 8 + -8);
  do {
    lVar2 = lVar2 + -1;
    if (lVar2 <= lVar3) {
      uVar1 = 0x4000;
      goto LAB_109a856d4;
    }
    uVar4 = *puVar6;
    puVar6 = puVar6 + -1;
  } while (*puVar6 <= uVar4 * (long)*(int *)(*(long *)(param_1 + 0x10) + lVar2 * 4));
  uVar1 = 0;
LAB_109a856d4:
  *param_1 = *param_1 & 0xffffbfff | uVar1;
  return;
}



/* Entry: 109a856e8; end: 109a85913;  */

void FUN_109a856e8(uint *param_1,uint *param_2,uint param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uVar7 = param_2[1];
  if (2 < (int)uVar7) {
    puVar6 = (undefined4 *)0x10;
    func_0x000107c2ae8c();
    puStack_40 = (undefined8 *)(puVar6 + 1);
    *puStack_40 = 0x203d3c20736d6964;
    *puVar6 = 1;
    uStack_38 = 9;
    *(undefined2 *)(puVar6 + 3) = 0x32;
    FUN_109ac3188(0xffffff29,&puStack_40,&UNK_10f597b81,&UNK_10f597913,0x2ac);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109a858e8);
    (*pcVar5)();
  }
  *param_1 = *param_2;
  param_1[1] = uVar7;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  uVar12 = *(undefined8 *)(param_2 + 4);
  uVar14 = *(undefined8 *)(param_2 + 10);
  uVar13 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar12;
  *(undefined8 *)(param_1 + 10) = uVar14;
  *(undefined8 *)(param_1 + 8) = uVar13;
  lVar9 = *(long *)(param_2 + 0xe);
  uVar12 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar12;
  puVar8 = param_1 + 0x14;
  puVar8[0] = 0;
  puVar8[1] = 0;
  *(uint **)(param_1 + 0x10) = param_1 + 2;
  *(uint **)(param_1 + 0x12) = puVar8;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar7 = param_2[1];
    if (2 < (int)uVar7) {
      param_1[1] = 0;
      func_0x000109a84868(param_1,param_2);
      uVar7 = param_2[1];
      goto LAB_109a857a0;
    }
    puVar8 = *(uint **)(param_1 + 0x12);
  }
  puVar10 = *(undefined8 **)(param_2 + 0x12);
  *(undefined8 *)puVar8 = *puVar10;
  *(undefined8 *)(puVar8 + 2) = puVar10[1];
LAB_109a857a0:
  if ((int)uVar7 < 1) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)(param_2 + 0x12) + (ulong)uVar7 * 8 + -8);
  }
  if ((int)param_3 < 0) {
    uVar7 = param_2[3];
    if ((int)(param_2[2] + param_3) <= (int)param_2[3]) {
      uVar7 = param_2[2] + param_3;
    }
    lVar11 = *(long *)(param_1 + 4) - **(long **)(param_2 + 0x12) * (long)(int)param_3;
  }
  else {
    uVar7 = param_2[2];
    if ((int)(param_2[3] - param_3) <= (int)param_2[2]) {
      uVar7 = param_2[3] - param_3;
    }
    lVar11 = *(long *)(param_1 + 4) + lVar9 * (ulong)param_3;
  }
  param_1[2] = uVar7;
  puVar8 = *(uint **)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x12);
  *puVar8 = uVar7;
  param_1[3] = 1;
  puVar8[1] = 1;
  *(long *)(param_1 + 4) = lVar11;
  if ((int)uVar7 < 2) {
    lVar9 = 0;
  }
  *plVar2 = *plVar2 + lVar9;
  uVar7 = 0;
  if ((int)param_1[2] < 2) {
    uVar7 = 0x4000;
  }
  uVar7 = *param_1 & 0xffffbfff | uVar7;
  *param_1 = uVar7;
  if (((*(int **)(param_2 + 0x10))[1] != 1) || (**(int **)(param_2 + 0x10) != 1)) {
    *param_1 = uVar7 | 0x8000;
  }
  return;
}



/* Entry: 109a85914; end: 109a859ef;  */

void FUN_109a85914(uint *param_1,undefined8 param_2)

{
  int iVar1;
  ulong *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar3 = **(int **)(param_1 + 0x10);
  if ((*(char *)((long)param_1 + 1) < '\0') ||
     (plVar4 = *(long **)(param_1 + 0x12),
     *(ulong *)(param_1 + 10) < (ulong)(*(long *)(param_1 + 8) + *plVar4))) {
    iVar1 = (iVar3 + 1 + iVar3 * 2) / 2;
    if (iVar1 < iVar3 + 1) {
      iVar1 = iVar3 + 1;
    }
    FUN_109a859f0(param_1,(long)iVar1);
    plVar4 = *(long **)(param_1 + 0x12);
  }
  if ((int)param_1[1] < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = plVar4[(ulong)param_1[1] - 1];
  }
  _memcpy(*(long *)(param_1 + 4) + *plVar4 * (long)iVar3,param_2,uVar6);
  puVar2 = *(ulong **)(param_1 + 0x12);
  **(int **)(param_1 + 0x10) = iVar3 + 1;
  uVar5 = *puVar2;
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar5;
  if (uVar6 < uVar5) {
    *param_1 = *param_1 & 0xffffbfff;
  }
  return;
}



/* Entry: 109a859f0; end: 109a85e2f;  */

void FUN_109a859f0(uint *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  undefined8 *puVar15;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined1 *puStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [4];
  int iStack_114;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long lStack_80;
  undefined4 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar8 = (uint)param_2;
  if ((int)uVar8 < 0) {
    puVar7 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar7 = 1;
    uStack_b8 = puVar7 + 1;
    uStack_b0 = 0x10;
    uStack_ac = 0;
    *(undefined1 *)(puVar7 + 5) = 0;
    *(undefined8 *)(puVar7 + 3) = 0x30203d3e20736d65;
    *(undefined8 *)(puVar7 + 1) = 0x6c656e29746e6928;
    FUN_109ac3188(0xffffff29,&uStack_b8,&UNK_10f597b97,&UNK_10f597913,0x2f3);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109a85dd4);
    (*pcVar6)();
  }
  if ((-1 < *(char *)((long)param_1 + 1)) &&
     (*(long *)(param_1 + 4) + **(long **)(param_1 + 0x12) * param_2 <= *(ulong *)(param_1 + 10))) {
    return;
  }
  puVar9 = *(uint **)(param_1 + 0x10);
  uVar3 = *puVar9;
  if (param_2 <= (ulong)(long)(int)uVar3) {
    return;
  }
  if (uVar8 < 2) {
    uVar8 = 1;
  }
  *puVar9 = uVar8;
  uVar8 = param_1[1];
  uVar10 = (ulong)uVar8;
  if ((int)uVar8 < 3) {
    lVar11 = (long)(int)param_1[3] * (long)(int)param_1[2];
    if (0 < (int)uVar8) goto LAB_109a85a94;
    lVar13 = 0;
  }
  else {
    lVar11 = 1;
    puVar14 = puVar9;
    uVar12 = uVar10;
    do {
      lVar11 = lVar11 * (int)*puVar14;
      uVar12 = uVar12 - 1;
      puVar14 = puVar14 + 1;
    } while (uVar12 != 0);
LAB_109a85a94:
    lVar13 = *(long *)(*(long *)(param_1 + 0x12) + uVar10 * 8 + -8);
  }
  uVar12 = lVar13 * lVar11;
  if (uVar12 < 0x40) {
    uVar8 = 0;
    if (uVar12 != 0) {
      uVar8 = (uint)(((uVar12 + 0x3f) * param_2) / uVar12);
    }
    *puVar9 = uVar8;
    uVar10 = (ulong)param_1[1];
  }
  uStack_b8._0_4_ = 0x42ff0000;
  puStack_78 = &uStack_b0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b8._4_4_ = 0;
  uStack_b0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_8c = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  lStack_80 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &uStack_68;
  FUN_109a83fd0(&uStack_b8,uVar10,puVar9,*param_1 & 0xfff);
  **(uint **)(param_1 + 0x10) = uVar3;
  if (0 < (int)uVar3) {
    uStack_130 = 0;
    uStack_58 = 0x7fffffff80000000;
    uStack_12c = uVar3;
    FUN_109a84930(auStack_118,&uStack_b8,&uStack_130,&uStack_58);
    uStack_130 = 0x2010000;
    uStack_120 = 0;
    puStack_128 = auStack_118;
    FUN_109a479a0(param_1,&uStack_130);
    if (lStack_e0 != 0) {
      piVar1 = (int *)(lStack_e0 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(auStack_118);
      }
    }
    lStack_e0 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    if (0 < iStack_114) {
      lVar11 = 0;
      do {
        *(undefined4 *)(lStack_d8 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iStack_114);
    }
    if (puStack_d0 != auStack_c8 && puStack_d0 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_d0 + -8));
    }
  }
  if ((uint *)&uStack_b8 == param_1) {
    lVar11 = *(long *)(param_1 + 4);
    goto LAB_109a85cd4;
  }
  if (lStack_80 != 0) {
    piVar1 = (int *)(lStack_80 + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(long *)(param_1 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((int)param_1[1] < 1) {
    *param_1 = (uint)uStack_b8;
LAB_109a85c7c:
    if (2 < (int)uStack_b8._4_4_) goto LAB_109a85cb0;
    param_1[1] = uStack_b8._4_4_;
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_ac,uStack_b0);
    puVar15 = *(undefined8 **)(param_1 + 0x12);
    *puVar15 = *puStack_70;
    puVar15[1] = puStack_70[1];
  }
  else {
    lVar11 = 0;
    lVar13 = *(long *)(param_1 + 0x10);
    do {
      *(undefined4 *)(lVar13 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[1]);
    *param_1 = (uint)uStack_b8;
    if ((int)param_1[1] < 3) goto LAB_109a85c7c;
LAB_109a85cb0:
    func_0x000109a84868(param_1,&uStack_b8);
  }
  lVar11 = CONCAT44(uStack_a4,uStack_a8);
  *(ulong *)(param_1 + 6) = CONCAT44(uStack_9c,uStack_a0);
  *(long *)(param_1 + 4) = lVar11;
  *(ulong *)(param_1 + 10) = CONCAT44(uStack_8c,uStack_90);
  *(ulong *)(param_1 + 8) = CONCAT44(uStack_94,uStack_98);
  *(long *)(param_1 + 0xe) = lStack_80;
  *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_84,uStack_88);
LAB_109a85cd4:
  **(uint **)(param_1 + 0x10) = uVar3;
  *(long *)(param_1 + 8) = lVar11 + **(long **)(param_1 + 0x12) * (long)(int)uVar3;
  if (lStack_80 != 0) {
    piVar1 = (int *)(lStack_80 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_b8);
    }
  }
  lStack_80 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  if (0 < (int)uStack_b8._4_4_) {
    lVar11 = 0;
    do {
      puStack_78[lVar11] = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_b8._4_4_);
  }
  if (puStack_70 != &uStack_68 && puStack_70 != (undefined8 *)0x0) {
    _free(puStack_70[-1]);
  }
  return;
}



/* Entry: 109a85e30; end: 109a85f43;  */

void FUN_109a85e30(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  piVar4 = *(int **)(param_1 + 0x40);
  iVar1 = *piVar4;
  iVar6 = (int)param_2;
  if (iVar6 - iVar1 != 0) {
    if (iVar6 < 0) {
      puVar3 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar3 = 1;
      puStack_40 = puVar3 + 1;
      uStack_38 = 0x10;
      *(undefined1 *)(puVar3 + 5) = 0;
      *(undefined8 *)(puVar3 + 3) = 0x30203d3e20736d65;
      *(undefined8 *)(puVar3 + 1) = 0x6c656e29746e6928;
      FUN_109ac3188(0xffffff29,&puStack_40,&UNK_10f597b9f,&UNK_10f597913,0x315);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109a85f18);
      (*pcVar2)();
    }
    if ((*(char *)(param_1 + 1) < '\0') ||
       (lVar5 = **(long **)(param_1 + 0x48),
       *(ulong *)(param_1 + 0x28) < (ulong)(*(long *)(param_1 + 0x10) + lVar5 * param_2))) {
      FUN_109a859f0(param_1,param_2);
      piVar4 = *(int **)(param_1 + 0x40);
      lVar5 = **(long **)(param_1 + 0x48);
    }
    *piVar4 = iVar6;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar5 * (iVar6 - iVar1);
  }
  return;
}



/* Entry: 109a85f44; end: 109a86b87;  */

/* WARNING: Removing unreachable block (ram,0x00010936fff8) */
/* WARNING: Removing unreachable block (ram,0x000109370010) */
/* WARNING: Removing unreachable block (ram,0x000109370014) */
/* WARNING: Removing unreachable block (ram,0x0001093700c8) */
/* WARNING: Removing unreachable block (ram,0x000109370020) */
/* WARNING: Removing unreachable block (ram,0x000109370028) */

void FUN_109a85f44(ulong *param_1,uint *param_2,uint param_3,undefined8 param_4,int param_5,
                  ulong *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ulong *puVar10;
  undefined4 *puVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  ulong *puVar15;
  long *plVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  uint *puVar25;
  undefined4 auStack_268 [2];
  ulong *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  ulong *puStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  uint auStack_e8 [2];
  ulong *puStack_e0;
  undefined8 uStack_d8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (uint *)0x0) {
LAB_109a862e8:
    *(uint *)param_1 = 0x42ff0000;
    ((uint *)((long)param_1 + 0xc))[0] = 0;
    ((uint *)((long)param_1 + 0xc))[1] = 0;
    ((uint *)((long)param_1 + 4))[0] = 0;
    ((uint *)((long)param_1 + 4))[1] = 0;
    ((uint *)((long)param_1 + 0x1c))[0] = 0;
    ((uint *)((long)param_1 + 0x1c))[1] = 0;
    ((uint *)((long)param_1 + 0x14))[0] = 0;
    ((uint *)((long)param_1 + 0x14))[1] = 0;
    ((uint *)((long)param_1 + 0x2c))[0] = 0;
    ((uint *)((long)param_1 + 0x2c))[1] = 0;
    ((uint *)((long)param_1 + 0x24))[0] = 0;
    ((uint *)((long)param_1 + 0x24))[1] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[8] = (ulong)(param_1 + 1);
    param_1[9] = (ulong)(param_1 + 10);
    param_1[0xb] = 0;
LAB_109a867e4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
LAB_109a8681c:
    ___stack_chk_fail();
  }
  else {
    uVar4 = *param_2;
    uVar2 = uVar4 & 0xffff0000;
    if (uVar2 == 0x42430000) {
      uVar19 = *(ulong *)(param_2 + 6);
      if (uVar19 == 0) goto LAB_109a86820;
      puVar25 = (uint *)((long)param_1 + 4);
      ((uint *)((long)param_1 + 0xc))[0] = 0;
      ((uint *)((long)param_1 + 0xc))[1] = 0;
      puVar25[0] = 0;
      puVar25[1] = 0;
      ((uint *)((long)param_1 + 0x1c))[0] = 0;
      ((uint *)((long)param_1 + 0x1c))[1] = 0;
      ((uint *)((long)param_1 + 0x14))[0] = 0;
      ((uint *)((long)param_1 + 0x14))[1] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      ((uint *)((long)param_1 + 0x2c))[0] = 0;
      ((uint *)((long)param_1 + 0x2c))[1] = 0;
      ((uint *)((long)param_1 + 0x24))[0] = 0;
      ((uint *)((long)param_1 + 0x24))[1] = 0;
      param_1[10] = 0;
      param_1[8] = (ulong)(param_1 + 1);
      param_1[9] = (ulong)(param_1 + 10);
      param_1[0xb] = 0;
      param_1[2] = uVar19;
      param_1[3] = uVar19;
      *(uint *)param_1 = uVar4 & 0xfff | 0x42ff0000;
      uVar2 = param_2[1];
      if (0 < (int)uVar2) {
        param_2 = param_2 + 9;
        plVar16 = &uStack_1e8;
        puVar18 = auStack_e8;
        uVar19 = (ulong)uVar2;
        do {
          uVar4 = *param_2;
          *puVar18 = param_2[-1];
          *plVar16 = (long)(int)uVar4;
          param_2 = param_2 + 2;
          uVar19 = uVar19 - 1;
          plVar16 = plVar16 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar19 != 0);
      }
      FUN_109a844cc(param_1,(ulong)uVar2,auStack_e8,&uStack_1e8,0);
      func_0x000109a847b0(param_1);
      if (param_3 == 0) goto LAB_109a867e4;
      uStack_248 = param_1[1];
      uStack_250 = *param_1;
      uStack_238 = param_1[3];
      uStack_240 = param_1[2];
      uStack_210 = (ulong)&uStack_250 | 8;
      uVar2 = *(uint *)((long)param_1 + 4);
      uStack_228 = param_1[5];
      uStack_230 = param_1[4];
      uStack_218 = param_1[7];
      uStack_220 = param_1[6];
      puVar10 = &uStack_200;
      uStack_200 = 0;
      uStack_1f8 = 0;
      if (param_1[7] != 0) {
        piVar13 = (int *)(param_1[7] + 0x14);
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar8) {
            *piVar13 = *piVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar2 = *puVar25;
      }
      puStack_208 = puVar10;
      if ((int)uVar2 < 3) {
        uStack_200 = *(ulong *)param_1[9];
        uStack_1f8 = ((ulong *)param_1[9])[1];
      }
      else {
        uStack_250 = uStack_250 & 0xffffffff;
        func_0x000109a84868(&uStack_250,param_1);
      }
      if (param_1[7] != 0) {
        piVar13 = (int *)(param_1[7] + 0x14);
        do {
          iVar3 = *piVar13;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar8) {
            *piVar13 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(param_1);
        }
      }
      param_1[7] = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      if (0 < (int)*(uint *)((long)param_1 + 4)) {
        lVar12 = 0;
        uVar19 = param_1[8];
        do {
          *(undefined4 *)(uVar19 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)*puVar25);
      }
      auStack_268[0] = 0x2010000;
      uStack_258 = 0;
      puStack_260 = param_1;
      FUN_109a479a0(&uStack_250,auStack_268);
      if (uStack_218 != 0) {
        piVar13 = (int *)(uStack_218 + 0x14);
        do {
          iVar3 = *piVar13;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar8) {
            *piVar13 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_250);
        }
      }
      uStack_218 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      puVar15 = puStack_208;
      if (0 < uStack_250._4_4_) {
        lVar12 = 0;
        do {
          *(undefined4 *)(uStack_210 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < uStack_250._4_4_);
      }
LAB_109a86680:
      bVar8 = puVar15 == puVar10;
LAB_109a86684:
      if (!bVar8 && puVar15 != (ulong *)0x0) {
        _free(puVar15[-1]);
      }
      goto LAB_109a867e4;
    }
    if (uVar2 != 0x42420000) {
      if (uVar4 == 0x90) {
        uVar19 = *(ulong *)(param_2 + 0x16);
        if (uVar19 != 0) {
          piVar13 = *(int **)(param_2 + 0xc);
          if (((param_5 == 0) && (piVar13 != (int *)0x0)) && (0 < *piVar13)) {
            FUN_109a38ed8(&uStack_1e8,&UNK_10f597ba6);
            FUN_109ac3188(0xffffffe8,&uStack_1e8,&UNK_10f597bcb,&UNK_10f597913,0x365);
            goto LAB_109a86a40;
          }
          param_1[6] = 0;
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[3] = 0;
          param_1[2] = 0;
          param_1[1] = 0;
          param_1[7] = 0;
          param_1[8] = (ulong)(param_1 + 1);
          uVar9 = param_2[0x18];
          uVar14 = (ulong)(int)uVar9;
          param_1[10] = uVar14;
          param_1[9] = (ulong)(param_1 + 10);
          param_1[0xb] = 0;
          *param_1 = 0x242ff0000;
          uVar2 = 0x43160520U >>
                  (ulong)((param_2[4] >> 2 & 0x3c) + ((int)param_2[4] >> 0x1f & 0x14U) & 0x1f) & 7;
          uVar4 = param_2[7];
          if (piVar13 == (int *)0x0) {
            if (uVar4 != 0) {
              puVar11 = (undefined4 *)0x2c;
              func_0x000107c2ae8c();
              *puVar11 = 1;
              uStack_1e8 = puVar11 + 1;
              uStack_1e0 = 0x26;
              *(undefined1 *)((long)puVar11 + 0x2a) = 0;
              *(undefined8 *)(puVar11 + 3) = 0x3d20726564724f61;
              *(undefined8 *)(puVar11 + 1) = 0x7461643e2d676d69;
              *(undefined8 *)(puVar11 + 7) = 0x524544524f5f4154;
              *(undefined8 *)(puVar11 + 5) = 0x41445f4c5049203d;
              *(undefined8 *)((long)puVar11 + 0x22) = 0x4c455849505f5245;
              FUN_109ac3188(0xffffff29,&uStack_1e8,&UNK_10f598a7d,&UNK_10f597913,0x280);
              goto LAB_109a86a40;
            }
            uVar6 = param_2[2] * 8 - 8;
            uVar1 = uVar6 | uVar2;
            uVar22 = param_2[10];
            uVar21 = param_2[0xb];
            *(uint *)(param_1 + 1) = uVar21;
            *(uint *)((long)param_1 + 0xc) = uVar22;
            param_1[2] = uVar19;
            param_1[3] = uVar19;
            uVar2 = (uVar6 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)(uVar2 << 1) & 3);
          }
          else {
            iVar3 = *piVar13;
            if (uVar4 == 0) {
LAB_109a86468:
              bVar8 = false;
              iVar20 = param_2[2] * 8 + -8;
            }
            else {
              if (iVar3 == 0) {
                puVar11 = (undefined4 *)0x44;
                func_0x000107c2ae8c();
                *puVar11 = 1;
                uStack_1e8 = puVar11 + 1;
                uStack_1e0 = 0x3c;
                *(undefined8 *)(puVar11 + 3) = 0x3d20726564724f61;
                *(undefined8 *)(puVar11 + 1) = 0x7461643e2d676d69;
                *(undefined1 *)(puVar11 + 0x10) = 0;
                *(undefined8 *)(puVar11 + 7) = 0x524544524f5f4154;
                *(undefined8 *)(puVar11 + 5) = 0x41445f4c5049203d;
                *(undefined8 *)(puVar11 + 0xb) = 0x723e2d676d69207c;
                *(undefined8 *)(puVar11 + 9) = 0x7c204c455849505f;
                *(undefined8 *)(puVar11 + 0xe) = 0x30203d2120696f63;
                *(undefined8 *)(puVar11 + 0xc) = 0x3e2d696f723e2d67;
                FUN_109ac3188(0xffffff29,&uStack_1e8,&UNK_10f598a7d,&UNK_10f597913,0x289);
                goto LAB_109a86a40;
              }
              if (uVar4 != 1) goto LAB_109a86468;
              iVar20 = 0;
              bVar8 = true;
            }
            uVar1 = iVar20 + uVar2;
            uVar21 = piVar13[4];
            *(uint *)(param_1 + 1) = uVar21;
            uVar22 = piVar13[3];
            *(uint *)((long)param_1 + 0xc) = uVar22;
            uVar2 = (uVar1 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar1 & 7) << 1) & 3);
            if (bVar8) {
              lVar12 = ((long)iVar3 + -1) * uVar14 * (long)(int)param_2[0xb];
            }
            else {
              lVar12 = 0;
            }
            uVar19 = uVar19 + lVar12 + (long)piVar13[2] * (long)(int)uVar9 +
                     (long)piVar13[1] * (long)(int)uVar2;
            param_1[2] = uVar19;
            param_1[3] = uVar19;
          }
          uVar17 = (ulong)uVar2;
          uVar23 = uVar19 + (long)(int)uVar9 * (long)(int)uVar21;
          uVar24 = uVar19 + (long)(int)uVar9 * (long)(int)(uVar21 - 1) +
                   (long)(int)uVar2 * (long)(int)uVar22;
          param_1[4] = uVar24;
          param_1[5] = uVar23;
          uVar9 = 0x4000;
          if (uVar21 - 1 != 0 && (long)(int)uVar2 * (long)(int)uVar22 - uVar14 != 0) {
            uVar9 = 0;
          }
          uVar9 = uVar9 | uVar1 + 0x42ff0000;
          *(uint *)param_1 = uVar9;
          param_1[0xb] = uVar17;
          if (param_3 == 0) goto LAB_109a867e4;
          uStack_1e8 = (undefined4 *)CONCAT44(2,uVar9);
          puStack_1a8 = &uStack_1e0;
          uStack_1e0 = CONCAT44(uVar22,uVar21);
          uStack_1b8 = 0;
          lStack_1b0 = 0;
          puVar10 = &uStack_198;
          param_1[7] = 0;
          param_1[3] = 0;
          param_1[2] = 0;
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[1] = 0;
          uStack_1d8 = uVar19;
          uStack_1d0 = uVar19;
          uStack_1c8 = uVar24;
          uStack_1c0 = uVar23;
          puStack_1a0 = puVar10;
          uStack_198 = uVar14;
          uStack_190 = uVar17;
          if (((piVar13 == (int *)0x0) || (*piVar13 == 0)) || (uVar4 == 1)) {
            auStack_e8[0] = 0x2010000;
            uStack_d8 = 0;
            puStack_e0 = param_1;
            FUN_109a479a0(&uStack_1e8,auStack_e8);
          }
          else {
            uStack_250 = (ulong)(*piVar13 - 1);
            if ((((uint)param_1[1] != uVar21) || (*(uint *)((long)param_1 + 0xc) != uVar22)) ||
               (param_1[2] == 0)) {
              auStack_e8[0] = uVar21;
              auStack_e8[1] = uVar22;
              FUN_109a83fd0(param_1,2,auStack_e8,uVar1 + 0x42ff0000 & 0xfff);
            }
            FUN_109a3e710(&uStack_1e8,1,param_1,1,&uStack_250,1);
          }
          if (lStack_1b0 != 0) {
            piVar13 = (int *)(lStack_1b0 + 0x14);
            do {
              iVar3 = *piVar13;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar8) {
                *piVar13 = iVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(&uStack_1e8);
            }
          }
          lStack_1b0 = 0;
          uStack_1d0 = 0;
          uStack_1d8 = 0;
          uStack_1c0 = 0;
          uStack_1c8 = 0;
          puVar15 = puStack_1a0;
          if (0 < uStack_1e8._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_1a8 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_1e8._4_4_);
          }
          goto LAB_109a86680;
        }
        goto LAB_109a86820;
      }
      if (uVar2 != 0x42990000) goto LAB_109a86820;
      uVar2 = param_2[10];
      if (uVar2 == 0) goto LAB_109a862e8;
      if ((int)uVar2 < 1) {
LAB_109a86880:
        puVar11 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_1e8 = puVar11 + 1;
        uStack_1e0 = 0x2c;
        *(undefined8 *)(puVar11 + 3) = 0x5f56432026262030;
        *(undefined8 *)(puVar11 + 1) = 0x203e206c61746f74;
        *(undefined1 *)(puVar11 + 0xc) = 0;
        *(undefined8 *)(puVar11 + 7) = 0x663e2d7165732845;
        *(undefined8 *)(puVar11 + 5) = 0x5a49535f4d454c45;
        *(undefined8 *)(puVar11 + 10) = 0x7a7365203d3d2029;
        *(undefined8 *)(puVar11 + 8) = 0x7367616c663e2d71;
        FUN_109ac3188(0xffffff29,&uStack_1e8,&UNK_10f597bcb,&UNK_10f597913,0x36e);
        goto LAB_109a86a40;
      }
      uVar9 = 0xfa50U >> (ulong)((uVar4 & 7) << 1) & 3;
      uVar1 = (uVar4 >> 3 & 0x1ff) + 1 << (ulong)uVar9;
      if (uVar1 != param_2[0xb]) goto LAB_109a86880;
      uVar22 = uVar4 & 0xfff;
      if (((param_3 & 1) != 0) ||
         (lVar12 = *(long *)(param_2 + 0x16), *(long *)(lVar12 + 8) != lVar12)) {
        if (param_6 == (ulong *)0x0) {
          *(uint *)param_1 = 0x42ff0000;
          ((uint *)((long)param_1 + 0xc))[0] = 0;
          ((uint *)((long)param_1 + 0xc))[1] = 0;
          ((uint *)((long)param_1 + 4))[0] = 0;
          ((uint *)((long)param_1 + 4))[1] = 0;
          ((uint *)((long)param_1 + 0x1c))[0] = 0;
          ((uint *)((long)param_1 + 0x1c))[1] = 0;
          ((uint *)((long)param_1 + 0x14))[0] = 0;
          ((uint *)((long)param_1 + 0x14))[1] = 0;
          ((uint *)((long)param_1 + 0x2c))[0] = 0;
          ((uint *)((long)param_1 + 0x2c))[1] = 0;
          ((uint *)((long)param_1 + 0x24))[0] = 0;
          ((uint *)((long)param_1 + 0x24))[1] = 0;
          param_1[7] = 0;
          param_1[6] = 0;
          param_1[10] = 0;
          param_1[8] = (ulong)(param_1 + 1);
          param_1[9] = (ulong)(param_1 + 10);
          param_1[0xb] = 0;
          uStack_1e8 = (undefined4 *)CONCAT44(1,uVar2);
          FUN_109a83fd0(param_1,2,&uStack_1e8,uVar22);
          FUN_109a4c988(param_2,param_1[2],0x3fffffff00000000);
          goto LAB_109a867e4;
        }
        uVar14 = (ulong)uVar2 * (ulong)uVar1;
        uVar19 = uVar14 + 7;
        puVar10 = (ulong *)*param_6;
        if (param_6[1] < uVar19 >> 3) {
          puVar15 = param_6 + 2;
          if (puVar10 != puVar15) {
            if (puVar10 != (ulong *)0x0) {
              __ZdaPv();
            }
            *param_6 = (ulong)puVar15;
            param_6[1] = 0x88;
            puVar10 = puVar15;
          }
          if (0x440 < uVar14) {
            puVar10 = (ulong *)(uVar19 & 0x3ffffffffff8);
            __Znam();
            *param_6 = (ulong)puVar10;
            goto LAB_109a86760;
          }
        }
        else {
LAB_109a86760:
          param_6[1] = uVar19 >> 3;
        }
        FUN_109a4c988(param_2,puVar10,0x3fffffff00000000);
        *(uint *)param_1 = uVar22 | 0x42ff0000;
        *(uint *)((long)param_1 + 4) = 2;
        *(uint *)(param_1 + 1) = uVar2;
        *(uint *)((long)param_1 + 0xc) = 1;
        param_1[2] = (ulong)puVar10;
        param_1[3] = (ulong)puVar10;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[10] = 0;
        param_1[8] = (ulong)(param_1 + 1);
        param_1[9] = (ulong)(param_1 + 10);
        param_1[0xb] = 0;
        if (puVar10 == (ulong *)0x0) {
          puVar11 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar11 = 1;
          uStack_1e8 = puVar11 + 1;
          uStack_1e0 = 0x1c;
          *(undefined1 *)(puVar11 + 8) = 0;
          *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&uStack_1e8,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
          goto LAB_109a86a40;
        }
        uVar19 = (ulong)((uVar22 >> 3) + 1 << (ulong)uVar9);
        *(uint *)param_1 = uVar22 | 0x42ff4000;
        param_1[10] = uVar19;
        param_1[0xb] = uVar19;
        puVar10 = (ulong *)((long)puVar10 + uVar2 * uVar19);
        param_1[4] = (ulong)puVar10;
        param_1[5] = (ulong)puVar10;
        goto LAB_109a867e4;
      }
      uVar19 = *(ulong *)(lVar12 + 0x18);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        *(uint *)param_1 = uVar22 | 0x42ff0000;
        *(uint *)((long)param_1 + 4) = 2;
        *(uint *)(param_1 + 1) = uVar2;
        *(uint *)((long)param_1 + 0xc) = 1;
        param_1[2] = uVar19;
        param_1[3] = uVar19;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[10] = 0;
        param_1[8] = (ulong)(param_1 + 1);
        param_1[9] = (ulong)(param_1 + 10);
        param_1[0xb] = 0;
        if ((uVar2 != 0) && (uVar19 == 0)) {
          puVar11 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar11 = 1;
          *(undefined1 *)(puVar11 + 8) = 0;
          *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x109370128);
          (*pcVar7)();
        }
        uVar4 = (uVar22 >> 3) + 1 << (ulong)(0xfa50U >> (ulong)((uVar4 & 7) << 1) & 3);
        *(uint *)param_1 = uVar22 | 0x42ff4000;
        param_1[10] = (long)(int)uVar4;
        param_1[0xb] = (ulong)uVar4;
        uVar19 = uVar19 + (long)(int)uVar4 * (long)(int)uVar2;
        param_1[4] = uVar19;
        param_1[5] = uVar19;
        return;
      }
      goto LAB_109a8681c;
    }
    uVar2 = param_2[9];
    if (-1 < (int)uVar2) {
      uVar9 = param_2[8];
      if (-1 < (int)uVar9) {
        *(uint *)param_1 = 0x42ff0000;
        ((uint *)((long)param_1 + 0xc))[0] = 0;
        ((uint *)((long)param_1 + 0xc))[1] = 0;
        ((uint *)((long)param_1 + 4))[0] = 0;
        ((uint *)((long)param_1 + 4))[1] = 0;
        ((uint *)((long)param_1 + 0x1c))[0] = 0;
        ((uint *)((long)param_1 + 0x1c))[1] = 0;
        ((uint *)((long)param_1 + 0x14))[0] = 0;
        ((uint *)((long)param_1 + 0x14))[1] = 0;
        ((uint *)((long)param_1 + 0x2c))[0] = 0;
        ((uint *)((long)param_1 + 0x2c))[1] = 0;
        ((uint *)((long)param_1 + 0x24))[0] = 0;
        ((uint *)((long)param_1 + 0x24))[1] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[10] = 0;
        param_1[8] = (ulong)(param_1 + 1);
        param_1[9] = (ulong)(param_1 + 10);
        param_1[0xb] = 0;
        if ((param_3 & 1) == 0) {
          *(uint *)param_1 = uVar4 & 0x4fff | 0x42ff0000;
          *(uint *)((long)param_1 + 4) = 2;
          *(uint *)(param_1 + 1) = uVar9;
          *(uint *)((long)param_1 + 0xc) = uVar2;
          uVar14 = *(ulong *)(param_2 + 6);
          param_1[2] = uVar14;
          param_1[3] = uVar14;
          uVar17 = (ulong)((uVar4 >> 3 & 0x1ff) + 1 <<
                          (ulong)(0xfa50U >> (ulong)((uVar4 & 7) << 1) & 3));
          uVar19 = uVar2 * uVar17;
          if (param_2[1] != 0) {
            uVar19 = (long)(int)param_2[1];
          }
          uVar14 = uVar14 + uVar19 * uVar9;
          param_1[4] = (uVar14 - uVar19) + uVar2 * uVar17;
          param_1[5] = uVar14;
          param_1[10] = uVar19;
          param_1[0xb] = uVar17;
          goto LAB_109a867e4;
        }
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        FUN_10936ff7c(&uStack_1e8);
        auStack_e8[0] = 0x2010000;
        uStack_d8 = 0;
        puStack_e0 = param_1;
        FUN_109a479a0(&uStack_1e8,auStack_e8);
        if (lStack_1b0 != 0) {
          piVar13 = (int *)(lStack_1b0 + 0x14);
          do {
            iVar3 = *piVar13;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar8) {
              *piVar13 = iVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(&uStack_1e8);
          }
        }
        lStack_1b0 = 0;
        uStack_1d0 = 0;
        uStack_1d8 = 0;
        uStack_1c0 = 0;
        uStack_1c8 = 0;
        if (0 < uStack_1e8._4_4_) {
          lVar12 = 0;
          do {
            *(undefined4 *)((long)puStack_1a8 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < uStack_1e8._4_4_);
        }
        bVar8 = puStack_1a0 == &uStack_198;
        puVar15 = puStack_1a0;
        goto LAB_109a86684;
      }
    }
  }
LAB_109a86820:
  puVar11 = (undefined4 *)0x18;
  func_0x000107c2ae8c();
  *puVar11 = 1;
  uStack_1e8 = puVar11 + 1;
  uStack_1e0 = 0x12;
  *(undefined1 *)((long)puVar11 + 0x16) = 0;
  *(undefined2 *)(puVar11 + 5) = 0x6570;
  *(undefined8 *)(puVar11 + 3) = 0x7974207961727261;
  *(undefined8 *)(puVar11 + 1) = 0x206e776f6e6b6e55;
  FUN_109ac3188(0xfffffffb,&uStack_1e8,&UNK_10f597bcb,&UNK_10f597913,0x37d);
LAB_109a86a40:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109a86a44);
  (*pcVar7)();
}



/* Entry: 109a86b88; end: 109a86cdb;  */

void FUN_109a86b88(long param_1,int *param_2,int *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(uint *)(param_1 + 4);
  if ((int)uVar2 < 3) {
    uVar6 = **(ulong **)(param_1 + 0x48);
    if (uVar6 != 0) {
      if ((int)uVar2 < 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = (*(ulong **)(param_1 + 0x48))[(ulong)uVar2 - 1];
      }
      lVar1 = *(long *)(param_1 + 0x18);
      lVar10 = *(long *)(param_1 + 0x20);
      uVar3 = *(long *)(param_1 + 0x10) - lVar1;
      if (uVar3 == 0) {
        iVar8 = 0;
        iVar11 = 0;
      }
      else {
        iVar8 = 0;
        if (uVar6 != 0) {
          iVar8 = (int)(uVar3 / uVar6);
        }
        iVar11 = 0;
        if (uVar7 != 0) {
          iVar11 = (int)((uVar3 - (long)iVar8 * uVar6) / uVar7);
        }
      }
      *param_3 = iVar11;
      param_3[1] = iVar8;
      lVar10 = lVar10 - lVar1;
      lVar1 = (long)*(int *)(param_1 + 0xc) + (long)iVar11;
      iVar11 = 0;
      if (uVar6 != 0) {
        iVar11 = (int)((lVar10 - uVar7 * lVar1) / uVar6);
      }
      iVar8 = *(int *)(param_1 + 8) + iVar8;
      if (iVar8 < iVar11 + 1) {
        iVar8 = iVar11 + 1;
      }
      iVar11 = 0;
      if (uVar7 != 0) {
        iVar11 = (int)((ulong)(lVar10 - *(long *)(param_1 + 0x50) * (long)(iVar8 + -1)) / uVar7);
      }
      iVar9 = (int)lVar1;
      if (iVar9 <= iVar11) {
        iVar9 = iVar11;
      }
      *param_2 = iVar9;
      param_2[1] = iVar8;
      return;
    }
  }
  puVar5 = (undefined4 *)0x20;
  func_0x000107c2ae8c();
  *puVar5 = 1;
  puStack_30 = puVar5 + 1;
  uStack_28 = 0x18;
  *(undefined1 *)(puVar5 + 7) = 0;
  *(undefined8 *)(puVar5 + 3) = 0x6574732026262032;
  *(undefined8 *)(puVar5 + 1) = 0x203d3c20736d6964;
  *(undefined8 *)(puVar5 + 5) = 0x30203e205d305b70;
  FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f597c2f,&UNK_10f597913,899);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109a86cac);
  (*pcVar4)();
}



/* Entry: 109a86cdc; end: 109a86eab;  */

uint * FUN_109a86cdc(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = param_1[1];
  if (((int)uVar5 < 3) && (**(long **)(param_1 + 0x12) != 0)) {
    uStack_58 = 0;
    uStack_50 = (undefined4 *)0x0;
    if ((int)uVar5 < 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = (*(long **)(param_1 + 0x12))[(ulong)uVar5 - 1];
    }
    FUN_109a86b88(param_1,&uStack_50,&uStack_58);
    iVar1 = uStack_58._4_4_ + param_3 + param_1[2];
    if (iVar1 <= uStack_50._4_4_) {
      uStack_50._4_4_ = iVar1;
    }
    uVar5 = uStack_58._4_4_ - param_2 & (uStack_58._4_4_ - param_2 >> 0x1f ^ 0xffffffffU);
    uVar2 = (int)uStack_58 - param_4 & ((int)uStack_58 - param_4 >> 0x1f ^ 0xffffffffU);
    iVar1 = (int)uStack_58 + param_5 + param_1[3];
    if (iVar1 <= (int)uStack_50) {
      uStack_50._0_4_ = iVar1;
    }
    *(long *)(param_1 + 4) =
         *(long *)(param_1 + 4) + *(long *)(param_1 + 0x14) * (long)(int)(uVar5 - uStack_58._4_4_) +
         lVar7 * (int)(uVar2 - (int)uStack_58);
    uVar5 = uStack_50._4_4_ - uVar5;
    param_1[2] = uVar5;
    param_1[3] = (int)uStack_50 - uVar2;
    puVar6 = *(uint **)(param_1 + 0x10);
    *puVar6 = uVar5;
    uVar5 = param_1[3];
    puVar6[1] = uVar5;
    if ((lVar7 * (int)uVar5 - **(long **)(param_1 + 0x12) == 0) || (param_1[2] == 1)) {
      uVar5 = *param_1 | 0x4000;
    }
    else {
      uVar5 = *param_1 & 0xffffbfff;
    }
    *param_1 = uVar5;
    return param_1;
  }
  puVar4 = (undefined4 *)0x20;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  uStack_50 = puVar4 + 1;
  uStack_48 = 0x18;
  *(undefined1 *)(puVar4 + 7) = 0;
  *(undefined8 *)(puVar4 + 3) = 0x6574732026262032;
  *(undefined8 *)(puVar4 + 1) = 0x203d3c20736d6964;
  *(undefined8 *)(puVar4 + 5) = 0x30203e205d305b70;
  FUN_109ac3188(0xffffff29,&uStack_50,&UNK_10f597c39,&UNK_10f597913,0x398);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a86e80);
  (*pcVar3)();
}



/* Entry: 109a86eac; end: 109a8727b;  */

void FUN_109a86eac(int *param_1,uint *param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint uStack_a8;
  int iStack_a4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar6 = (uint *)&uStack_110;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109a85f44(&uStack_a8,param_1,0,param_3,1,0);
  FUN_109a8727c(param_2,iStack_a4,lStack_68,uStack_a8 & 7,0xffffffff,0,0);
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar10 = *(ulong **)(param_2 + 2);
    uStack_d0 = (ulong)&uStack_110 | 8;
    uStack_108 = puVar10[1];
    uStack_110 = *puVar10;
    uStack_f8 = puVar10[3];
    uStack_100 = puVar10[2];
    uStack_e8 = puVar10[5];
    uStack_f0 = puVar10[4];
    uStack_d8 = puVar10[7];
    uStack_e0 = puVar10[6];
    puStack_c8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    if (puVar10[7] != 0) {
      piVar1 = (int *)(puVar10[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar10 + 4) < 3) {
      uStack_c0 = *(undefined8 *)puVar10[9];
      uStack_b8 = ((undefined8 *)puVar10[9])[1];
    }
    else {
      uStack_110 = uStack_110 & 0xffffffff;
      func_0x000109a84868(&uStack_110);
    }
  }
  else {
    FUN_109a8a180(&uStack_110,param_2,0xffffffff);
  }
  if ((int)param_3 < 0) {
    if (((param_1 == (int *)0x0) || (*param_1 != 0x90)) || (*(long *)(param_1 + 0x16) == 0)) {
      puVar8 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar8 = 1;
      puStack_48 = puVar8 + 1;
      uStack_40 = 0x10;
      *(undefined1 *)(puVar8 + 5) = 0;
      *(undefined8 *)(puVar8 + 3) = 0x2972726128454741;
      *(undefined8 *)(puVar8 + 1) = 0x4d495f53495f5643;
      FUN_109ac3188(0xffffff29,&puStack_48,&UNK_10f597c54,&UNK_10f597913,0x3b1);
      goto LAB_109a871e4;
    }
    if ((*(int **)(param_1 + 0xc) != (int *)0x0) &&
       (iVar9 = **(int **)(param_1 + 0xc), param_3 = (ulong)(iVar9 - 1), 0 < iVar9))
    goto LAB_109a86fdc;
  }
  else {
LAB_109a86fdc:
    if ((uint)param_3 <= (uStack_a8 >> 3 & 0x1ff)) {
      puStack_48 = (undefined4 *)(param_3 & 0xffffffff);
      puVar7 = &uStack_a8;
      iVar9 = 1;
      FUN_109a3e710(puVar7,1,&uStack_110,1,&puStack_48,1);
      if (uStack_d8 != 0) {
        piVar1 = (int *)(uStack_d8 + 0x14);
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
          func_0x000109a848d4(&uStack_110);
          puVar7 = puVar6;
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
          *(undefined4 *)(uStack_d0 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < uStack_110._4_4_);
      }
      if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
        puVar7 = (uint *)puStack_c8[-1];
        _free(puVar7);
      }
      if (lStack_70 != 0) {
        piVar1 = (int *)(lStack_70 + 0x14);
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
          puVar7 = &uStack_a8;
          func_0x000109a848d4(puVar7);
        }
      }
      lStack_70 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      if (0 < iStack_a4) {
        lVar11 = 0;
        do {
          *(undefined4 *)(lStack_68 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iStack_a4);
      }
      if (puStack_60 != auStack_58 && puStack_60 != (undefined1 *)0x0) {
        puVar7 = *(uint **)(puStack_60 + -8);
        _free(puVar7);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      ___stack_chk_fail();
      if (iVar9 != 0) {
        func_0x000104bd46a0(puVar7);
        puStack_48 = (undefined4 *)0x0;
        uStack_40 = 0;
        do {
          iVar9 = *param_1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar4) {
            *param_1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          _free(*(undefined8 *)(param_1 + -2));
        }
        func_0x00010567aa40(&uStack_110);
        func_0x00010567aa40(&uStack_a8);
      }
      do {
        __Unwind_Resume(puVar7);
      } while( true );
    }
  }
  puVar8 = (undefined4 *)0x28;
  func_0x000107c2ae8c();
  *puVar8 = 1;
  puStack_48 = puVar8 + 1;
  uStack_40 = 0x20;
  *(undefined1 *)(puVar8 + 9) = 0;
  *(undefined8 *)(puVar8 + 3) = 0x20696f6320262620;
  *(undefined8 *)(puVar8 + 1) = 0x696f63203d3c2030;
  *(undefined8 *)(puVar8 + 7) = 0x2928736c656e6e61;
  *(undefined8 *)(puVar8 + 5) = 0x68632e74616d203c;
  FUN_109ac3188(0xffffff29,&puStack_48,&UNK_10f597c54,&UNK_10f597913,0x3b4);
LAB_109a871e4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a871e8);
  (*pcVar5)();
}



/* Entry: 109a8727c; end: 109a890bb;  */

/* WARNING: Removing unreachable block (ram,0x000109a85ec0) */
/* WARNING: Type propagation algorithm not settling */

ulong *******
FUN_109a8727c(ulong *******param_1,ulong param_2,uint *param_3,ulong param_4,ulong param_5,
             int param_6,uint param_7)

{
  ulong ******ppppppuVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong *****pppppuVar11;
  code *pcVar12;
  undefined1 *puVar13;
  bool bVar14;
  ulong *******pppppppuVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  ulong *******pppppppuVar18;
  ulong *******pppppppuVar19;
  ulong *******pppppppuVar20;
  long *plVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  ulong *******extraout_x8;
  undefined4 *puVar26;
  ulong uVar27;
  int iVar28;
  ulong *****pppppuVar29;
  ulong ******ppppppuVar30;
  ulong uVar31;
  int *piVar32;
  ulong ******ppppppuVar33;
  undefined4 *puVar34;
  uint *puVar35;
  ulong ******ppppppuVar36;
  long lVar37;
  uint uVar38;
  ulong uVar39;
  ulong ****ppppuVar40;
  ulong *******unaff_x19;
  ulong ******ppppppuVar41;
  uint uVar42;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  uint uVar43;
  ulong *******pppppppuVar44;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined4 *unaff_x24;
  undefined4 *unaff_x25;
  ulong *******pppppppuVar45;
  undefined8 unaff_x26;
  ulong *****pppppuVar46;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint uVar47;
  ulong ******ppppppuVar48;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  ulong uStack_a0;
  ulong *****pppppuStack_98;
  ulong ******ppppppuStack_90;
  ulong ******ppppppuStack_88;
  ulong ******ppppppuStack_80;
  ulong *******pppppppuStack_78;
  ulong ******ppppppuStack_70;
  ulong *******pppppppuStack_68;
  
  uVar2 = *(uint *)param_1;
  uVar42 = uVar2 & 0x1f0000;
  uVar22 = (uint)param_4;
  uVar47 = uVar22 & 0xfff;
  iVar23 = (int)param_5;
  uVar43 = (uint)param_2;
  if (uVar42 == 0xa0000) {
    if (-1 < iVar23) {
      puVar17 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar17 = 0x203c206900000001;
      ppppppuStack_88 = (ulong ******)((long)puVar17 + 4);
      ppppppuStack_80 = (ulong ******)0x5;
      *(undefined2 *)(puVar17 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x907);
      goto LAB_109a88b8c;
    }
    pppppppuVar45 = (ulong *******)param_1[1];
    if (param_6 != 0) {
      pppppppuVar18 = param_1;
      if ((*(byte *)((long)pppppppuVar45 + 1) >> 6 & 1) == 0) {
        if (uVar2 >> 0x1e != 0) {
          puVar16 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar16 = 1;
          ppppppuStack_88 = (ulong ******)(puVar16 + 1);
          ppppppuStack_80 = (ulong ******)0x1c;
          *(undefined1 *)(puVar16 + 8) = 0;
          *(undefined8 *)(puVar16 + 3) = 0x2026262029286570;
          *(undefined8 *)(puVar16 + 1) = 0x7954646578696621;
          *(undefined8 *)(puVar16 + 6) = 0x2928657a69536465;
          *(undefined8 *)(puVar16 + 4) = 0x7869662120262620;
          FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x90d);
          goto LAB_109a88b8c;
        }
        if (pppppppuVar45[4] != (ulong ******)0x0) {
          ppppppuVar30 = pppppppuVar45[4] + 2;
          do {
            iVar23 = *(int *)ppppppuVar30;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(ppppppuVar30,0x10);
            if (bVar14) {
              *(int *)ppppppuVar30 = iVar23 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar23 + -1 == 0) {
            pppppppuVar18 = (ulong *******)pppppppuVar45[4][1];
            (*(code *)(*pppppppuVar18)[4])();
            pppppppuVar45[4] = (ulong ******)0x0;
          }
        }
        if (0 < (int)*(uint *)((long)pppppppuVar45 + 4)) {
          lVar24 = 0;
          ppppppuVar30 = pppppppuVar45[6];
          do {
            *(undefined4 *)((long)ppppppuVar30 + lVar24 * 4) = 0;
            lVar24 = lVar24 + 1;
          } while (lVar24 < (int)*(uint *)((long)pppppppuVar45 + 4));
        }
        pppppppuVar45[4] = (ulong ******)0x0;
      }
      if (((uVar43 == 2) && (*(uint *)((long)pppppppuVar45 + 4) == 2)) &&
         (pppppppuVar45[4] != (ulong ******)0x0)) {
        if ((((long)(int)*(uint *)((long)pppppppuVar45 + 0xc) *
              (long)(int)*(uint *)(pppppppuVar45 + 1) != 0) &&
            ((*(uint *)pppppppuVar45 & 0xfff) == uVar47)) &&
           ((*(uint *)(pppppppuVar45 + 1) == param_3[1] &&
            (*(uint *)((long)pppppppuVar45 + 0xc) == *param_3)))) {
          return pppppppuVar18;
        }
      }
    }
    uVar42 = *(uint *)param_1;
    if ((int)uVar42 < 0) {
      uVar2 = *(uint *)pppppppuVar45;
      if ((((uVar2 ^ uVar22) & 0xff8) == 0) && ((param_7 >> (ulong)(uVar42 & 0x1f) & 1) != 0)) {
        uVar47 = uVar2 & 0xfff;
      }
      else if (uVar47 != (uVar2 & 0xfff)) {
        puVar16 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar16 = 1;
        ppppppuStack_88 = (ulong ******)(puVar16 + 1);
        ppppppuStack_80 = (ulong ******)0x1e;
        *(undefined1 *)((long)puVar16 + 0x22) = 0;
        *(undefined8 *)(puVar16 + 3) = 0x7079746d28455059;
        *(undefined8 *)(puVar16 + 1) = 0x545f54414d5f5643;
        *(undefined8 *)((long)puVar16 + 0x1a) = 0x2928657079742e6d;
        *(undefined8 *)((long)puVar16 + 0x12) = 0x203d3d2029657079;
        FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x91b);
        goto LAB_109a88b8c;
      }
    }
    if ((uVar42 >> 0x1e & 1) != 0) {
      if (*(uint *)((long)pppppppuVar45 + 4) != uVar43) {
        puVar16 = (undefined4 *)0x10;
        func_0x000107c2ae8c();
        *puVar16 = 1;
        ppppppuStack_88 = (ulong ******)(puVar16 + 1);
        *ppppppuStack_88 = (ulong *****)0x3d20736d69642e6d;
        ppppppuStack_80 = (ulong ******)0xb;
        *(undefined1 *)((long)puVar16 + 0xf) = 0;
        *(undefined4 *)((long)puVar16 + 0xb) = 0x64203d3d;
        FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x91f);
        goto LAB_109a88b8c;
      }
      if (0 < (int)uVar43) {
        uVar25 = param_2 & 0xffffffff;
        ppppppuVar30 = pppppppuVar45[6];
        puVar35 = param_3;
        do {
          if (*(uint *)ppppppuVar30 != *puVar35) {
            puVar16 = (undefined4 *)0x1c;
            func_0x000107c2ae8c();
            *puVar16 = 1;
            ppppppuStack_88 = (ulong ******)(puVar16 + 1);
            ppppppuStack_80 = (ulong ******)0x15;
            *(undefined1 *)((long)puVar16 + 0x19) = 0;
            *(undefined8 *)(puVar16 + 3) = 0x7a6973203d3d205d;
            *(undefined8 *)(puVar16 + 1) = 0x6a5b657a69732e6d;
            *(undefined8 *)((long)puVar16 + 0x11) = 0x5d6a5b73657a6973;
            FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x921);
            goto LAB_109a88b8c;
          }
          uVar25 = uVar25 - 1;
          ppppppuVar30 = (ulong ******)((long)ppppppuVar30 + 4);
          puVar35 = puVar35 + 1;
        } while (uVar25 != 0);
      }
    }
LAB_109a875dc:
    *(uint *)(pppppppuVar45 + 3) = 0;
    if ((0x20 < uVar43) || (param_3 == (uint *)0x0)) {
      puVar16 = (undefined4 *)0x28;
      func_0x000107c2ae8c();
      *puVar16 = 1;
      *(undefined8 *)(puVar16 + 3) = 0x43203d3c20642026;
      *(undefined8 *)(puVar16 + 1) = 0x262064203d3c2030;
      *(undefined1 *)((long)puVar16 + 0x27) = 0;
      *(undefined4 *)((long)puVar16 + 0x23) = 0x73657a69;
      *(undefined8 *)(puVar16 + 7) = 0x69735f202626204d;
      *(undefined8 *)(puVar16 + 5) = 0x49445f58414d5f56;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffb0,&DAT_10f68efec,&UNK_10f59b211,0x153);
      goto LAB_109ac5554;
    }
    pppppppuVar18 = pppppppuVar45;
    if (pppppppuVar45[4] != (ulong ******)0x0) {
      if (*(uint *)((long)pppppppuVar45 + 4) == uVar43) {
        if (uVar47 == (*(uint *)pppppppuVar45 & 0xfff)) {
          uVar25 = param_2;
          if (uVar43 != 0) {
            if (((uVar43 == 2) && (*(uint *)(pppppppuVar45 + 1) == *param_3)) &&
               (*(uint *)((long)pppppppuVar45 + 0xc) == param_3[1])) {
              return pppppppuVar45;
            }
            goto LAB_109ac5170;
          }
LAB_109ac519c:
          if ((uint)uVar25 == uVar43) goto LAB_109ac51a4;
        }
      }
      else if (((uVar43 == 1) && ((int)*(uint *)((long)pppppppuVar45 + 4) < 3)) &&
              (uVar47 == (*(uint *)pppppppuVar45 & 0xfff))) {
LAB_109ac5170:
        uVar25 = 0;
        do {
          if (*(uint *)((long)pppppppuVar45[6] + uVar25 * 4) != param_3[uVar25]) goto LAB_109ac519c;
          uVar25 = uVar25 + 1;
        } while ((param_2 & 0xffffffff) != uVar25);
LAB_109ac51a4:
        if (1 < (int)uVar43) {
          return pppppppuVar45;
        }
        if (*(int *)((long)pppppppuVar45[6] + 4) == 1) {
          return pppppppuVar45;
        }
      }
      ppppppuVar30 = pppppppuVar45[4] + 2;
      do {
        iVar23 = *(int *)ppppppuVar30;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(ppppppuVar30,0x10);
        if (bVar14) {
          *(int *)ppppppuVar30 = iVar23 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar23 + -1 == 0) {
        pppppppuVar18 = (ulong *******)pppppppuVar45[4][1];
        (*(code *)(*pppppppuVar18)[4])();
      }
    }
    if (0 < (int)*(uint *)((long)pppppppuVar45 + 4)) {
      lVar24 = 0;
      ppppppuVar30 = pppppppuVar45[6];
      do {
        *(undefined4 *)((long)ppppppuVar30 + lVar24 * 4) = 0;
        lVar24 = lVar24 + 1;
      } while (lVar24 < (int)*(uint *)((long)pppppppuVar45 + 4));
    }
    pppppppuVar45[4] = (ulong ******)0x0;
    if (uVar43 != 0) {
      *(uint *)pppppppuVar45 = uVar47 | 0x42ff0000;
      pppppppuVar18 = pppppppuVar45;
      FUN_109ac4594(pppppppuVar45,param_2,param_3,0,1);
      pppppppuVar45[5] = (ulong ******)0x0;
      uVar25 = (ulong)*(uint *)((long)pppppppuVar45 + 4);
      if ((int)*(uint *)((long)pppppppuVar45 + 4) < 3) {
        lVar24 = (long)(int)*(uint *)((long)pppppppuVar45 + 0xc) *
                 (long)(int)*(uint *)(pppppppuVar45 + 1);
      }
      else {
        lVar24 = 1;
        ppppppuVar30 = pppppppuVar45[6];
        do {
          lVar24 = lVar24 * *(int *)ppppppuVar30;
          uVar25 = uVar25 - 1;
          ppppppuVar30 = (ulong ******)((long)ppppppuVar30 + 4);
        } while (uVar25 != 0);
      }
      if (lVar24 != 0) {
        pppppppuVar44 = (ulong *******)pppppppuVar45[2];
        if (pppppppuRam000000011382bb80 == (ulong *******)0x0) {
          FUN_109a83e3c();
          pppppppuRam000000011382bb80 = pppppppuVar18;
        }
        if ((pppppppuVar44 == (ulong *******)0x0) &&
           (pppppppuVar44 = pppppppuRam000000011382bb80,
           pppppppuRam000000011382bb80 == (ulong *******)0x0)) {
          FUN_109a83e3c();
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x109ac5488);
          (*pcVar12)();
        }
        (*(code *)(*pppppppuVar44)[2])
                  (pppppppuVar44,*(uint *)((long)pppppppuVar45 + 4),pppppppuVar45[6],uVar47,0,
                   pppppppuVar45[7],0,*(uint *)(pppppppuVar45 + 3));
        pppppppuVar45[4] = (ulong ******)pppppppuVar44;
        if (pppppppuVar44 == (ulong *******)0x0) {
          puVar17 = (undefined8 *)0xc;
          func_0x000107c2ae8c();
          *puVar17 = 0x3d21207500000001;
          *(undefined1 *)((long)puVar17 + 10) = 0;
          *(undefined2 *)(puVar17 + 1) = 0x3020;
          FUN_109ac3188(0xffffff29,&stack0xffffffffffffffb0,&DAT_10f68efec,&UNK_10f59b211,0x173);
LAB_109ac5554:
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x109ac5558);
          (*pcVar12)();
        }
        if (pppppppuVar45[7][(long)(int)*(uint *)((long)pppppppuVar45 + 4) + -1] !=
            (ulong *****)
            (ulong)((*(uint *)pppppppuVar45 >> 3 & 0x1ff) + 1 <<
                   (ulong)(0xfa50U >> (ulong)((*(uint *)pppppppuVar45 & 7) << 1) & 3))) {
          puVar16 = (undefined4 *)0x30;
          func_0x000107c2ae8c();
          *puVar16 = 1;
          *(undefined8 *)(puVar16 + 3) = 0x203d3d205d312d73;
          *(undefined8 *)(puVar16 + 1) = 0x6d69645b70657473;
          *(undefined1 *)((long)puVar16 + 0x2f) = 0;
          *(undefined8 *)(puVar16 + 7) = 0x5f4d454c455f5643;
          *(undefined8 *)(puVar16 + 5) = 0x29745f657a697328;
          *(undefined8 *)((long)puVar16 + 0x27) = 0x297367616c662845;
          *(undefined8 *)((long)puVar16 + 0x1f) = 0x5a49535f4d454c45;
          FUN_109ac3188(0xffffff29,&stack0xffffffffffffffb0,&DAT_10f68efec,&UNK_10f59b211,0x17b);
          goto LAB_109ac5554;
        }
      }
      pppppppuVar18 = pppppppuVar45;
      FUN_109ac47dc(pppppppuVar45);
      if (2 < (int)*(uint *)((long)pppppppuVar45 + 4)) {
        pppppppuVar45[1] = (ulong ******)0xffffffffffffffff;
      }
      if (pppppppuVar45[4] != (ulong ******)0x0) {
        ppppppuVar30 = pppppppuVar45[4] + 2;
        do {
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(ppppppuVar30,0x10);
          if (bVar14) {
            *(int *)ppppppuVar30 = *(int *)ppppppuVar30 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    return pppppppuVar18;
  }
  if (uVar42 == 0x20000) {
    if (iVar23 < 0) {
      if ((uVar47 == (uVar2 & 0xfff)) ||
         (((param_4 & 0xff8) == 0 && ((param_7 >> (ulong)(uVar2 & 0x1f) & 1) != 0)))) {
        if (uVar43 == 2) {
          if ((*param_3 == *(uint *)((long)param_1 + 0x14)) &&
             (param_3[1] == *(uint *)(param_1 + 2))) {
            return param_1;
          }
          if (((param_6 != 0) && (*param_3 == *(uint *)(param_1 + 2))) &&
             (param_3[1] == *(uint *)((long)param_1 + 0x14))) {
            return param_1;
          }
        }
        puVar16 = (undefined4 *)0x88;
        func_0x000107c2ae8c();
        *puVar16 = 1;
        ppppppuStack_88 = (ulong ******)(puVar16 + 1);
        ppppppuStack_80 = (ulong ******)0x81;
        *(undefined8 *)(puVar16 + 0x13) = 0x26206465736f7073;
        *(undefined8 *)(puVar16 + 0x11) = 0x6e617254776f6c6c;
        *(undefined8 *)(puVar16 + 0x17) = 0x7a73203d3d205d30;
        *(undefined8 *)(puVar16 + 0x15) = 0x5b73657a69732026;
        *(undefined8 *)(puVar16 + 0x1b) = 0x5b73657a69732026;
        *(undefined8 *)(puVar16 + 0x19) = 0x262068746469772e;
        *(undefined8 *)(puVar16 + 0x1f) = 0x297468676965682e;
        *(undefined8 *)(puVar16 + 0x1d) = 0x7a73203d3d205d31;
        *(undefined8 *)(puVar16 + 3) = 0x657a697328282026;
        *(undefined8 *)(puVar16 + 1) = 0x262032203d3d2064;
        *(undefined8 *)(puVar16 + 7) = 0x68676965682e7a73;
        *(undefined8 *)(puVar16 + 5) = 0x203d3d205d305b73;
        *(undefined8 *)(puVar16 + 0xb) = 0x3d3d205d315b7365;
        *(undefined8 *)(puVar16 + 9) = 0x7a69732026262074;
        *(undefined2 *)(puVar16 + 0x21) = 0x29;
        *(undefined8 *)(puVar16 + 0xf) = 0x6128207c7c202968;
        *(undefined8 *)(puVar16 + 0xd) = 0x746469772e7a7320;
        FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x92d);
      }
      else {
        puVar16 = (undefined4 *)0x58;
        func_0x000107c2ae8c();
        *puVar16 = 1;
        ppppppuStack_88 = (ulong ******)(puVar16 + 1);
        ppppppuStack_80 = (ulong ******)0x51;
        *(undefined8 *)(puVar16 + 7) = 0x79746d284e435f54;
        *(undefined8 *)(puVar16 + 5) = 0x414d5f564328207c;
        *(undefined8 *)(puVar16 + 0xb) = 0x2031282820262620;
        *(undefined8 *)(puVar16 + 9) = 0x31203d3d20296570;
        *(undefined8 *)(puVar16 + 0xf) = 0x6578696620262029;
        *(undefined8 *)(puVar16 + 0xd) = 0x3065707974203c3c;
        *(undefined8 *)(puVar16 + 0x13) = 0x30203d2120296b73;
        *(undefined8 *)(puVar16 + 0x11) = 0x614d687470654464;
        *(undefined2 *)(puVar16 + 0x15) = 0x29;
        *(undefined8 *)(puVar16 + 3) = 0x7c20306570797420;
        *(undefined8 *)(puVar16 + 1) = 0x3d3d20657079746d;
        FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x92b);
      }
    }
    else {
      puVar17 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar17 = 0x203c206900000001;
      ppppppuStack_88 = (ulong ******)((long)puVar17 + 4);
      ppppppuStack_80 = (ulong ******)0x5;
      *(undefined2 *)(puVar17 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x929);
    }
    goto LAB_109a88b8c;
  }
  if (uVar42 == 0x10000) {
    if (-1 < iVar23) {
      puVar17 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar17 = 0x203c206900000001;
      ppppppuStack_88 = (ulong ******)((long)puVar17 + 4);
      ppppppuStack_80 = (ulong ******)0x5;
      *(undefined2 *)(puVar17 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x8e5);
      goto LAB_109a88b8c;
    }
    pppppppuVar45 = (ulong *******)param_1[1];
    if (param_6 != 0) {
      pppppppuVar18 = param_1;
      if ((*(byte *)((long)pppppppuVar45 + 1) >> 6 & 1) == 0) {
        if (uVar2 >> 0x1e != 0) {
          puVar16 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar16 = 1;
          ppppppuStack_88 = (ulong ******)(puVar16 + 1);
          ppppppuStack_80 = (ulong ******)0x1c;
          *(undefined1 *)(puVar16 + 8) = 0;
          *(undefined8 *)(puVar16 + 3) = 0x2026262029286570;
          *(undefined8 *)(puVar16 + 1) = 0x7954646578696621;
          *(undefined8 *)(puVar16 + 6) = 0x2928657a69536465;
          *(undefined8 *)(puVar16 + 4) = 0x7869662120262620;
          FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x8eb);
          goto LAB_109a88b8c;
        }
        if (pppppppuVar45[7] != (ulong ******)0x0) {
          piVar32 = (int *)((long)pppppppuVar45[7] + 0x14);
          do {
            iVar23 = *piVar32;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar32,0x10);
            if (bVar14) {
              *piVar32 = iVar23 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar23 + -1 == 0) {
            pppppppuVar18 = pppppppuVar45;
            func_0x000109a848d4(pppppppuVar45);
          }
        }
        pppppppuVar45[7] = (ulong ******)0x0;
        pppppppuVar45[3] = (ulong ******)0x0;
        pppppppuVar45[2] = (ulong ******)0x0;
        pppppppuVar45[5] = (ulong ******)0x0;
        pppppppuVar45[4] = (ulong ******)0x0;
        if (0 < (int)*(uint *)((long)pppppppuVar45 + 4)) {
          lVar24 = 0;
          ppppppuVar30 = pppppppuVar45[8];
          do {
            *(undefined4 *)((long)ppppppuVar30 + lVar24 * 4) = 0;
            lVar24 = lVar24 + 1;
          } while (lVar24 < (int)*(uint *)((long)pppppppuVar45 + 4));
        }
      }
      if ((((uVar43 == 2) && (*(uint *)((long)pppppppuVar45 + 4) == 2)) &&
          ((pppppppuVar45[2] != (ulong ******)0x0 &&
           (((*(uint *)pppppppuVar45 & 0xfff) == uVar47 &&
            (*(uint *)(pppppppuVar45 + 1) == param_3[1])))))) &&
         (*(uint *)((long)pppppppuVar45 + 0xc) == *param_3)) {
        return pppppppuVar18;
      }
    }
    uVar42 = *(uint *)param_1;
    if ((int)uVar42 < 0) {
      uVar2 = *(uint *)pppppppuVar45;
      if ((((uVar2 ^ uVar22) & 0xff8) == 0) && ((param_7 >> (ulong)(uVar42 & 0x1f) & 1) != 0)) {
        uVar47 = uVar2 & 0xfff;
      }
      else if (uVar47 != (uVar2 & 0xfff)) {
        puVar16 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar16 = 1;
        ppppppuStack_88 = (ulong ******)(puVar16 + 1);
        ppppppuStack_80 = (ulong ******)0x1e;
        *(undefined1 *)((long)puVar16 + 0x22) = 0;
        *(undefined8 *)(puVar16 + 3) = 0x7079746d28455059;
        *(undefined8 *)(puVar16 + 1) = 0x545f54414d5f5643;
        *(undefined8 *)((long)puVar16 + 0x1a) = 0x2928657079742e6d;
        *(undefined8 *)((long)puVar16 + 0x12) = 0x203d3d2029657079;
        FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x8f9);
        goto LAB_109a88b8c;
      }
    }
    if ((uVar42 >> 0x1e & 1) != 0) {
      if (*(uint *)((long)pppppppuVar45 + 4) != uVar43) {
        puVar16 = (undefined4 *)0x10;
        func_0x000107c2ae8c();
        *puVar16 = 1;
        ppppppuStack_88 = (ulong ******)(puVar16 + 1);
        *ppppppuStack_88 = (ulong *****)0x3d20736d69642e6d;
        ppppppuStack_80 = (ulong ******)0xb;
        *(undefined1 *)((long)puVar16 + 0xf) = 0;
        *(undefined4 *)((long)puVar16 + 0xb) = 0x64203d3d;
        FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x8fd);
        goto LAB_109a88b8c;
      }
      if (0 < (int)uVar43) {
        uVar25 = param_2 & 0xffffffff;
        ppppppuVar30 = pppppppuVar45[8];
        puVar35 = param_3;
        do {
          if (*(uint *)ppppppuVar30 != *puVar35) {
            puVar16 = (undefined4 *)0x1c;
            func_0x000107c2ae8c();
            *puVar16 = 1;
            ppppppuStack_88 = (ulong ******)(puVar16 + 1);
            ppppppuStack_80 = (ulong ******)0x15;
            *(undefined1 *)((long)puVar16 + 0x19) = 0;
            *(undefined8 *)(puVar16 + 3) = 0x7a6973203d3d205d;
            *(undefined8 *)(puVar16 + 1) = 0x6a5b657a69732e6d;
            *(undefined8 *)((long)puVar16 + 0x11) = 0x5d6a5b73657a6973;
            FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x8ff);
            goto LAB_109a88b8c;
          }
          uVar25 = uVar25 - 1;
          ppppppuVar30 = (ulong ******)((long)ppppppuVar30 + 4);
          puVar35 = puVar35 + 1;
        } while (uVar25 != 0);
      }
    }
FUN_109a83fd0:
    if ((0x20 < uVar43) || (param_3 == (uint *)0x0)) {
      puVar16 = (undefined4 *)0x28;
      func_0x000107c2ae8c();
      *puVar16 = 1;
      *(undefined8 *)(puVar16 + 3) = 0x43203d3c20642026;
      *(undefined8 *)(puVar16 + 1) = 0x262064203d3c2030;
      *(undefined1 *)((long)puVar16 + 0x27) = 0;
      *(undefined4 *)((long)puVar16 + 0x23) = 0x73657a69;
      *(undefined8 *)(puVar16 + 7) = 0x69735f202626204d;
      *(undefined8 *)(puVar16 + 5) = 0x49445f58414d5f56;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffb0,&DAT_10f68efec,&UNK_10f597913,0x182);
      goto LAB_109a84454;
    }
    if (pppppppuVar45[2] != (ulong ******)0x0) {
      if (*(uint *)((long)pppppppuVar45 + 4) == uVar43) {
        if (uVar47 == (*(uint *)pppppppuVar45 & 0xfff)) {
          uVar25 = param_2;
          if (uVar43 != 0) {
            if (((uVar43 == 2) && (*(uint *)(pppppppuVar45 + 1) == *param_3)) &&
               (*(uint *)((long)pppppppuVar45 + 0xc) == param_3[1])) {
              return pppppppuVar45;
            }
            goto LAB_109a84080;
          }
LAB_109a840ac:
          if ((uint)uVar25 == uVar43) goto LAB_109a840b4;
        }
      }
      else if (((uVar43 == 1) && ((int)*(uint *)((long)pppppppuVar45 + 4) < 3)) &&
              (uVar47 == (*(uint *)pppppppuVar45 & 0xfff))) {
LAB_109a84080:
        uVar25 = 0;
        do {
          if (*(uint *)((long)pppppppuVar45[8] + uVar25 * 4) != param_3[uVar25]) goto LAB_109a840ac;
          uVar25 = uVar25 + 1;
        } while ((param_2 & 0xffffffff) != uVar25);
LAB_109a840b4:
        if (1 < (int)uVar43) {
          return pppppppuVar45;
        }
        if (*(int *)((long)pppppppuVar45[8] + 4) == 1) {
          return pppppppuVar45;
        }
      }
    }
    pppppppuVar18 = pppppppuVar45;
    if (pppppppuVar45[7] != (ulong ******)0x0) {
      piVar32 = (int *)((long)pppppppuVar45[7] + 0x14);
      do {
        iVar23 = *piVar32;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar32,0x10);
        if (bVar14) {
          *piVar32 = iVar23 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(pppppppuVar45);
      }
    }
    pppppppuVar45[7] = (ulong ******)0x0;
    pppppppuVar45[3] = (ulong ******)0x0;
    pppppppuVar45[2] = (ulong ******)0x0;
    pppppppuVar45[5] = (ulong ******)0x0;
    pppppppuVar45[4] = (ulong ******)0x0;
    if (0 < (int)*(uint *)((long)pppppppuVar45 + 4)) {
      lVar24 = 0;
      ppppppuVar30 = pppppppuVar45[8];
      do {
        *(undefined4 *)((long)ppppppuVar30 + lVar24 * 4) = 0;
        lVar24 = lVar24 + 1;
      } while (lVar24 < (int)*(uint *)((long)pppppppuVar45 + 4));
    }
    if (uVar43 == 0) {
      return pppppppuVar18;
    }
    *(uint *)pppppppuVar45 = uVar47 | 0x42ff0000;
    pppppppuVar18 = pppppppuVar45;
    FUN_109a844cc(pppppppuVar45,param_2,param_3,0,1);
    uVar25 = (ulong)*(uint *)((long)pppppppuVar45 + 4);
    if ((int)*(uint *)((long)pppppppuVar45 + 4) < 3) {
      lVar24 = (long)(int)*(uint *)((long)pppppppuVar45 + 0xc) *
               (long)(int)*(uint *)(pppppppuVar45 + 1);
    }
    else {
      lVar24 = 1;
      ppppppuVar30 = pppppppuVar45[8];
      uVar27 = uVar25;
      do {
        lVar24 = lVar24 * *(int *)ppppppuVar30;
        uVar27 = uVar27 - 1;
        ppppppuVar30 = (ulong ******)((long)ppppppuVar30 + 4);
      } while (uVar27 != 0);
    }
    if (lVar24 == 0) {
LAB_109a8422c:
      if (pppppppuVar45[7] != (ulong ******)0x0) {
        piVar32 = (int *)((long)pppppppuVar45[7] + 0x14);
        do {
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar32,0x10);
          if (bVar14) {
            *piVar32 = *piVar32 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      pppppppuVar18 = pppppppuVar45;
      FUN_109a85650();
      uVar42 = *(uint *)((long)pppppppuVar45 + 4);
      if (2 < (int)uVar42) {
        pppppppuVar45[1] = (ulong ******)0xffffffffffffffff;
      }
      if (pppppppuVar45[7] == (ulong ******)0x0) {
        ppppppuVar30 = pppppppuVar45[2];
      }
      else {
        ppppppuVar30 = (ulong ******)pppppppuVar45[7][3];
        pppppppuVar45[2] = ppppppuVar30;
        pppppppuVar45[3] = ppppppuVar30;
      }
      if (ppppppuVar30 == (ulong ******)0x0) {
        pppppppuVar45[4] = (ulong ******)0x0;
        pppppppuVar45[5] = (ulong ******)0x0;
      }
      else {
        ppppppuVar33 = pppppppuVar45[8];
        ppppppuVar48 = pppppppuVar45[9];
        iVar23 = *(int *)ppppppuVar33;
        ppppppuVar36 = (ulong ******)((long)pppppppuVar45[3] + (long)*ppppppuVar48 * (long)iVar23);
        pppppppuVar45[5] = ppppppuVar36;
        if (iVar23 < 1) {
          pppppppuVar45[4] = ppppppuVar36;
        }
        else {
          uVar47 = uVar42 - 1;
          uVar25 = (ulong)uVar47;
          ppppppuVar30 = (ulong ******)
                         ((long)ppppppuVar30 +
                         (long)ppppppuVar48[(int)uVar47] *
                         (long)*(int *)((long)ppppppuVar33 + (long)(int)uVar47 * 4));
          pppppppuVar45[4] = ppppppuVar30;
          if (1 < (int)uVar42) {
            do {
              ppppppuVar30 = (ulong ******)
                             ((long)ppppppuVar30 +
                             (long)*ppppppuVar48 * ((long)*(int *)ppppppuVar33 + -1));
              uVar25 = uVar25 - 1;
              ppppppuVar33 = (ulong ******)((long)ppppppuVar33 + 4);
              ppppppuVar48 = ppppppuVar48 + 1;
            } while (uVar25 != 0);
            pppppppuVar45[4] = ppppppuVar30;
          }
        }
      }
      return pppppppuVar18;
    }
    pppppppuVar44 = (ulong *******)pppppppuVar45[6];
    if (pppppppuRam000000011382bb80 == (ulong *******)0x0) {
      FUN_109a83e3c();
      uVar25 = (ulong)*(uint *)((long)pppppppuVar45 + 4);
      pppppppuRam000000011382bb80 = pppppppuVar18;
    }
    pppppppuVar18 = pppppppuRam000000011382bb80;
    if (pppppppuVar44 != (ulong *******)0x0) {
      pppppppuVar18 = pppppppuVar44;
    }
    (*(code *)(*pppppppuVar18)[2])
              (pppppppuVar18,uVar25,pppppppuVar45[8],uVar47,0,pppppppuVar45[9],0,0);
    pppppppuVar45[7] = (ulong ******)pppppppuVar18;
    if (pppppppuVar18 == (ulong *******)0x0) {
      puVar17 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar17 = 0x3d21207500000001;
      *(undefined1 *)((long)puVar17 + 10) = 0;
      *(undefined2 *)(puVar17 + 1) = 0x3020;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffb0,&DAT_10f68efec,&UNK_10f597913,0x1a2);
    }
    else {
      if (pppppppuVar45[9][(long)(int)*(uint *)((long)pppppppuVar45 + 4) + -1] ==
          (ulong *****)
          (ulong)((*(uint *)pppppppuVar45 >> 3 & 0x1ff) + 1 <<
                 (ulong)(0xfa50U >> (ulong)((*(uint *)pppppppuVar45 & 7) << 1) & 3)))
      goto LAB_109a8422c;
      puVar16 = (undefined4 *)0x30;
      func_0x000107c2ae8c();
      *puVar16 = 1;
      *(undefined8 *)(puVar16 + 3) = 0x203d3d205d312d73;
      *(undefined8 *)(puVar16 + 1) = 0x6d69645b70657473;
      *(undefined1 *)((long)puVar16 + 0x2f) = 0;
      *(undefined8 *)(puVar16 + 7) = 0x5f4d454c455f5643;
      *(undefined8 *)(puVar16 + 5) = 0x29745f657a697328;
      *(undefined8 *)((long)puVar16 + 0x27) = 0x297367616c662845;
      *(undefined8 *)((long)puVar16 + 0x1f) = 0x5a49535f4d454c45;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffb0,&DAT_10f68efec,&UNK_10f597913,0x1aa);
    }
LAB_109a84454:
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x109a84458);
    (*pcVar12)();
  }
  uVar3 = uVar42 >> 0x10;
  if (4 < uVar3) {
    if (uVar3 == 5) {
      pppppppuVar45 = (ulong *******)param_1[1];
      if (iVar23 < 0) {
        if (uVar43 == 2) {
          uVar42 = *param_3;
          uVar47 = param_3[1];
          uVar22 = uVar47;
          if (((uVar42 == 1) || (uVar22 = uVar47 * uVar42, uVar47 == 1)) || (uVar22 == 0)) {
            iVar23 = uVar42 + uVar47 + -1;
            if ((int)uVar22 < 1) {
              iVar23 = 0;
            }
            uVar27 = (ulong)iVar23;
            uVar25 = ((long)pppppppuVar45[1] - (long)*pppppppuVar45 >> 5) * -0x5555555555555555;
            if (((uVar2 >> 0x1e & 1) == 0) || (uVar25 - uVar27 == 0)) {
              pppppppuVar18 = pppppppuVar45;
              func_0x000109516d68(pppppppuVar45,uVar27);
              if (-1 < (int)*(uint *)param_1) {
                return pppppppuVar18;
              }
              if (uVar27 <= uVar25) {
                return pppppppuVar18;
              }
              uVar42 = *(uint *)param_1 & 0xfff;
              ppppppuVar30 = *pppppppuVar45;
              do {
                ppppppuVar33 = ppppppuVar30 + uVar25 * 0xc;
                if ((*(uint *)ppppppuVar33 & 0xfff) != uVar42) {
                  if (ppppppuVar33[2] != (ulong *****)0x0) {
                    uVar39 = (ulong)*(uint *)((long)ppppppuVar33 + 4);
                    if ((int)*(uint *)((long)ppppppuVar33 + 4) < 3) {
                      lVar24 = (long)(int)*(uint *)((long)ppppppuVar33 + 0xc) *
                               (long)(int)*(uint *)(ppppppuVar33 + 1);
                    }
                    else {
                      lVar24 = 1;
                      pppppuVar29 = ppppppuVar33[8];
                      do {
                        lVar24 = lVar24 * *(int *)pppppuVar29;
                        uVar39 = uVar39 - 1;
                        pppppuVar29 = (ulong *****)((long)pppppuVar29 + 4);
                      } while (uVar39 != 0);
                    }
                    if (lVar24 != 0) {
                      puVar16 = (undefined4 *)0x14;
                      func_0x000107c2ae8c();
                      *puVar16 = 1;
                      ppppppuStack_88 = (ulong ******)(puVar16 + 1);
                      *ppppppuStack_88 = (ulong *****)0x706d652e5d6a5b76;
                      ppppppuStack_80 = (ulong ******)0xc;
                      *(undefined1 *)(puVar16 + 4) = 0;
                      puVar16[3] = 0x29287974;
                      FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x99b)
                      ;
                      goto LAB_109a88b8c;
                    }
                  }
                  *(uint *)ppppppuVar33 = *(uint *)ppppppuVar33 & 0xfffff000 | uVar42;
                }
                uVar25 = uVar25 + 1;
                if (uVar25 == uVar27) {
                  return pppppppuVar18;
                }
              } while( true );
            }
            FUN_109a38ed8(&ppppppuStack_88,&UNK_10f59840f);
            FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x992);
            goto LAB_109a88b8c;
          }
        }
        FUN_109a38ed8(&ppppppuStack_88,&UNK_10f598287);
        FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x98f);
        goto LAB_109a88b8c;
      }
      if ((int)((ulong)((long)pppppppuVar45[1] - (long)*pppppppuVar45) >> 5) * -0x55555555 <= iVar23
         ) {
        FUN_109a38ed8(&ppppppuStack_88,&UNK_10f598438);
        FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x9a2);
        goto LAB_109a88b8c;
      }
      pppppppuVar45 = (ulong *******)(*pppppppuVar45 + (param_5 & 0xffffffff) * 0xc);
      if (param_6 != 0) {
        pppppppuVar18 = param_1;
        if ((*(byte *)((long)pppppppuVar45 + 1) >> 6 & 1) == 0) {
          if (uVar2 >> 0x1e != 0) {
            FUN_109a38ed8(&ppppppuStack_88,&UNK_10f598155);
            FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x9a9);
            goto LAB_109a88b8c;
          }
          pppppppuVar18 = pppppppuVar45;
          func_0x00010570628c(pppppppuVar45);
        }
        if (((uVar43 == 2) &&
            (*(uint *)((long)pppppppuVar45 + 4) == 2 && pppppppuVar45[2] != (ulong ******)0x0)) &&
           (((*(uint *)pppppppuVar45 & 0xfff) == uVar47 &&
            ((*(uint *)(pppppppuVar45 + 1) == param_3[1] &&
             (*(uint *)((long)pppppppuVar45 + 0xc) == *param_3)))))) {
          return pppppppuVar18;
        }
      }
      uVar42 = *(uint *)param_1;
      if ((int)uVar42 < 0) {
        uVar2 = *(uint *)pppppppuVar45;
        if ((((uVar2 ^ uVar22) & 0xff8) == 0) && ((param_7 >> (ulong)(uVar42 & 0x1f) & 1) != 0)) {
          uVar47 = uVar2 & 0xfff;
        }
        else if (uVar47 != (uVar2 & 0xfff)) {
          FUN_109a38ed8(&ppppppuStack_88,&UNK_10f598172);
          FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x9b7);
          goto LAB_109a88b8c;
        }
      }
      if ((uVar42 >> 0x1e & 1) != 0) {
        if (*(uint *)((long)pppppppuVar45 + 4) != uVar43) {
          FUN_109a38ed8(&ppppppuStack_88,&UNK_10f598191);
          FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x9bb);
          goto LAB_109a88b8c;
        }
        if (0 < (int)uVar43) {
          uVar25 = param_2 & 0xffffffff;
          ppppppuVar30 = pppppppuVar45[8];
          puVar35 = param_3;
          do {
            if (*(uint *)ppppppuVar30 != *puVar35) {
              puVar16 = (undefined4 *)0x1c;
              func_0x000107c2ae8c();
              *puVar16 = 1;
              ppppppuStack_88 = (ulong ******)(puVar16 + 1);
              ppppppuStack_80 = (ulong ******)0x15;
              *(undefined1 *)((long)puVar16 + 0x19) = 0;
              *(undefined8 *)(puVar16 + 3) = 0x7a6973203d3d205d;
              *(undefined8 *)(puVar16 + 1) = 0x6a5b657a69732e6d;
              *(undefined8 *)((long)puVar16 + 0x11) = 0x5d6a5b73657a6973;
              FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x9bd);
              goto LAB_109a88b8c;
            }
            uVar25 = uVar25 - 1;
            ppppppuVar30 = (ulong ******)((long)ppppppuVar30 + 4);
            puVar35 = puVar35 + 1;
          } while (uVar25 != 0);
        }
      }
      goto FUN_109a83fd0;
    }
    if (uVar3 != 0xb) goto LAB_109a88678;
    ppppppuVar30 = param_1[1];
    if (-1 < iVar23) {
      if ((int)((ulong)((long)ppppppuVar30[1] - (long)*ppppppuVar30) >> 4) * -0x33333333 <= iVar23)
      {
        FUN_109a38ed8(&ppppppuStack_88,&UNK_10f598438);
        FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x9dd);
        goto LAB_109a88b8c;
      }
      pppppppuVar45 = (ulong *******)(*ppppppuVar30 + (param_5 & 0xffffffff) * 10);
      if (param_6 != 0) {
        pppppppuVar18 = param_1;
        if ((*(byte *)((long)pppppppuVar45 + 1) >> 6 & 1) == 0) {
          if (uVar2 >> 0x1e != 0) {
            FUN_109a38ed8(&ppppppuStack_88,&UNK_10f598155);
            FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x9e4);
            goto LAB_109a88b8c;
          }
          pppppppuVar18 = pppppppuVar45;
          FUN_109a8fe24(pppppppuVar45);
        }
        if (((uVar43 == 2) &&
            (*(uint *)((long)pppppppuVar45 + 4) == 2 && pppppppuVar45[4] != (ulong ******)0x0)) &&
           (((*(uint *)pppppppuVar45 & 0xfff) == uVar47 &&
            ((*(uint *)(pppppppuVar45 + 1) == param_3[1] &&
             (*(uint *)((long)pppppppuVar45 + 0xc) == *param_3)))))) {
          return pppppppuVar18;
        }
      }
      uVar42 = *(uint *)param_1;
      if ((int)uVar42 < 0) {
        uVar2 = *(uint *)pppppppuVar45;
        if ((((uVar2 ^ uVar22) & 0xff8) == 0) && ((param_7 >> (ulong)(uVar42 & 0x1f) & 1) != 0)) {
          uVar47 = uVar2 & 0xfff;
        }
        else if (uVar47 != (uVar2 & 0xfff)) {
          FUN_109a38ed8(&ppppppuStack_88,&UNK_10f598172);
          FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x9f2);
          goto LAB_109a88b8c;
        }
      }
      if ((uVar42 >> 0x1e & 1) != 0) {
        if (*(uint *)((long)pppppppuVar45 + 4) != uVar43) {
          FUN_109a38ed8(&ppppppuStack_88,&UNK_10f598191);
          FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x9f6);
          goto LAB_109a88b8c;
        }
        if (0 < (int)uVar43) {
          uVar25 = param_2 & 0xffffffff;
          ppppppuVar30 = pppppppuVar45[6];
          puVar35 = param_3;
          do {
            if (*(uint *)ppppppuVar30 != *puVar35) {
              puVar16 = (undefined4 *)0x1c;
              func_0x000107c2ae8c();
              *puVar16 = 1;
              ppppppuStack_88 = (ulong ******)(puVar16 + 1);
              ppppppuStack_80 = (ulong ******)0x15;
              *(undefined1 *)((long)puVar16 + 0x19) = 0;
              *(undefined8 *)(puVar16 + 3) = 0x7a6973203d3d205d;
              *(undefined8 *)(puVar16 + 1) = 0x6a5b657a69732e6d;
              *(undefined8 *)((long)puVar16 + 0x11) = 0x5d6a5b73657a6973;
              FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x9f8);
              goto LAB_109a88b8c;
            }
            uVar25 = uVar25 - 1;
            ppppppuVar30 = (ulong ******)((long)ppppppuVar30 + 4);
            puVar35 = puVar35 + 1;
          } while (uVar25 != 0);
        }
      }
      goto LAB_109a875dc;
    }
    if (uVar43 == 2) {
      uVar42 = *param_3;
      uVar47 = param_3[1];
      uVar22 = uVar47;
      if (((uVar42 == 1) || (uVar22 = uVar47 * uVar42, uVar47 == 1)) || (uVar22 == 0)) {
        iVar23 = uVar42 + uVar47 + -1;
        if ((int)uVar22 < 1) {
          iVar23 = 0;
        }
        uVar27 = (ulong)iVar23;
        pppppuVar29 = *ppppppuVar30;
        pppppppuVar45 = (ulong *******)ppppppuVar30[1];
        lVar24 = (long)pppppppuVar45 - (long)pppppuVar29;
        uVar25 = (lVar24 >> 4) * -0x3333333333333333;
        if (((uVar2 >> 0x1e & 1) != 0) && (uVar27 != uVar25)) {
          FUN_109a38ed8(&ppppppuStack_88,&UNK_10f59840f);
          FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x9cd);
          goto LAB_109a88b8c;
        }
        uVar39 = uVar27 + (lVar24 >> 4) * 0x3333333333333333;
        if (uVar27 < uVar25 || uVar39 == 0) {
          if (uVar27 >= uVar25) {
            return pppppppuVar45;
          }
          while (pppppppuVar45 != (ulong *******)(pppppuVar29 + (long)iVar23 * 10)) {
            pppppppuVar45 = pppppppuVar45 + -10;
            FUN_109ac5638();
          }
          ppppppuVar30[1] = pppppuVar29 + (long)iVar23 * 10;
          return pppppppuVar45;
        }
        if (uVar39 <= (ulong)(((long)ppppppuVar30[2] - (long)pppppppuVar45 >> 4) *
                             -0x3333333333333333)) {
          pppppppuVar18 = pppppppuVar45 + uVar39 * 10;
          do {
            *(uint *)pppppppuVar45 = 0x42ff0000;
            pppppppuVar45[4] = (ulong ******)0x0;
            pppppppuVar45[5] = (ulong ******)0x0;
            ((uint *)((long)pppppppuVar45 + 4))[0] = 0;
            ((uint *)((long)pppppppuVar45 + 4))[1] = 0;
            ((uint *)((long)pppppppuVar45 + 0x14))[0] = 0;
            ((uint *)((long)pppppppuVar45 + 0x14))[1] = 0;
            pppppppuVar45[8] = (ulong ******)0x0;
            ((uint *)((long)pppppppuVar45 + 0xc))[0] = 0;
            ((uint *)((long)pppppppuVar45 + 0xc))[1] = 0;
            pppppppuVar45[6] = (ulong ******)(pppppppuVar45 + 1);
            pppppppuVar45[7] = (ulong ******)(pppppppuVar45 + 8);
            pppppppuVar45[9] = (ulong ******)0x0;
            pppppppuVar45 = pppppppuVar45 + 10;
          } while (pppppppuVar45 != pppppppuVar18);
          ppppppuVar30[1] = (ulong *****)pppppppuVar18;
LAB_109a87f0c:
          if ((int)*(uint *)param_1 < 0) {
            uVar42 = *(uint *)param_1 & 0xfff;
            pppppuVar29 = *ppppppuVar30;
            do {
              pppppuVar46 = pppppuVar29 + uVar25 * 10;
              if ((*(uint *)pppppuVar46 & 0xfff) != uVar42) {
                if (pppppuVar46[4] != (ulong ****)0x0) {
                  uVar39 = (ulong)*(uint *)((long)pppppuVar46 + 4);
                  if ((int)*(uint *)((long)pppppuVar46 + 4) < 3) {
                    lVar24 = (long)(int)*(uint *)((long)pppppuVar46 + 0xc) *
                             (long)(int)*(uint *)(pppppuVar46 + 1);
                  }
                  else {
                    lVar24 = 1;
                    ppppuVar40 = pppppuVar46[6];
                    do {
                      lVar24 = lVar24 * *(int *)ppppuVar40;
                      uVar39 = uVar39 - 1;
                      ppppuVar40 = (ulong ****)((long)ppppuVar40 + 4);
                    } while (uVar39 != 0);
                  }
                  if (lVar24 != 0) {
                    puVar16 = (undefined4 *)0x14;
                    func_0x000107c2ae8c();
                    *puVar16 = 1;
                    ppppppuStack_88 = (ulong ******)(puVar16 + 1);
                    *ppppppuStack_88 = (ulong *****)0x706d652e5d6a5b76;
                    ppppppuStack_80 = (ulong ******)0xc;
                    *(undefined1 *)(puVar16 + 4) = 0;
                    puVar16[3] = 0x29287974;
                    FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x9d6);
                    goto LAB_109a88b8c;
                  }
                }
                *(uint *)pppppuVar46 = *(uint *)pppppuVar46 & 0xfffff000 | uVar42;
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 != uVar27);
          }
          return pppppppuVar45;
        }
        if (-1 < iVar23) {
          lVar37 = (long)ppppppuVar30[2] - (long)pppppuVar29 >> 4;
          uVar31 = lVar37 * -0x6666666666666666;
          if (uVar31 < uVar27 || uVar31 - uVar27 == 0) {
            uVar31 = uVar27;
          }
          if (0x199999999999998 < (ulong)(lVar37 * -0x3333333333333333)) {
            uVar31 = 0x333333333333333;
          }
          ppppppuVar48 = ppppppuVar30;
          pppppppuStack_68 = (ulong *******)ppppppuVar30;
          FUN_109a433b0();
          ppppppuStack_80 = (ulong ******)((long)ppppppuVar48 + lVar24);
          ppppppuVar33 = ppppppuVar48 + uVar31 * 10;
          pppppuVar46 = (ulong *****)(ppppppuStack_80 + uVar39 * 10);
          pppppuVar29 = (ulong *****)ppppppuStack_80;
          do {
            *(undefined4 *)pppppuVar29 = 0x42ff0000;
            pppppuVar29[4] = (ulong ****)0x0;
            pppppuVar29[5] = (ulong ****)0x0;
            *(undefined8 *)((long)pppppuVar29 + 4) = 0;
            *(undefined8 *)((long)pppppuVar29 + 0x14) = 0;
            pppppuVar29[8] = (ulong ****)0x0;
            *(undefined8 *)((long)pppppuVar29 + 0xc) = 0;
            pppppuVar29[6] = (ulong ****)(pppppuVar29 + 1);
            pppppuVar29[7] = (ulong ****)(pppppuVar29 + 8);
            pppppuVar29[9] = (ulong ****)0x0;
            pppppuVar29 = pppppuVar29 + 10;
          } while (pppppuVar29 != pppppuVar46);
          ppppppuVar41 = (ulong ******)*ppppppuVar30;
          ppppppuVar1 = (ulong ******)ppppppuVar30[1];
          pppppuVar29 = (ulong *****)
                        ((long)ppppppuStack_80 + ((long)ppppppuVar41 - (long)ppppppuVar1));
          ppppppuVar36 = ppppppuVar41;
          pppppuVar11 = pppppuVar29;
          ppppppuStack_88 = ppppppuVar48;
          pppppppuStack_78 = (ulong *******)pppppuVar46;
          ppppppuStack_70 = ppppppuVar33;
          if ((long)ppppppuVar41 - (long)ppppppuVar1 != 0) {
            do {
              ppppppuStack_90 = ppppppuVar33;
              pppppuStack_98 = pppppuVar11;
              func_0x000109a433f4(pppppuVar29,ppppppuVar36);
              ppppppuVar33 = ppppppuStack_90;
              ppppppuVar36 = ppppppuVar36 + 10;
              pppppuVar29 = pppppuVar29 + 10;
              pppppuVar11 = pppppuStack_98;
            } while (ppppppuVar36 != ppppppuVar1);
            do {
              FUN_109ac5638(ppppppuVar41);
              ppppppuVar41 = ppppppuVar41 + 10;
            } while (ppppppuVar41 != ppppppuVar1);
            ppppppuVar41 = (ulong ******)*ppppppuVar30;
            pppppuVar29 = pppppuStack_98;
          }
          *ppppppuVar30 = pppppuVar29;
          ppppppuVar30[1] = pppppuVar46;
          ppppppuStack_70 = (ulong ******)ppppppuVar30[2];
          ppppppuVar30[2] = (ulong *****)ppppppuVar33;
          pppppppuVar45 = &ppppppuStack_88;
          ppppppuStack_88 = ppppppuVar41;
          ppppppuStack_80 = ppppppuVar41;
          pppppppuStack_78 = (ulong *******)ppppppuVar41;
          FUN_109a9c104(pppppppuVar45);
          goto LAB_109a87f0c;
        }
        uVar39 = param_2;
        FUN_109a4339c();
        ppppppuVar30 = ppppppuStack_88;
        uVar42 = (uint)param_3;
        iVar23 = (int)uVar39;
        ppppppuStack_88 = (ulong ******)0x0;
        ppppppuStack_80 = (ulong ******)0x0;
        if (ppppppuVar30 != (ulong ******)0x0) {
          piVar32 = (int *)((long)ppppppuVar30 + -4);
          do {
            iVar28 = *piVar32;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar32,0x10);
            if (bVar14) {
              *piVar32 = iVar28 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar28 + -1 == 0) {
            _free(*(undefined8 *)((long)ppppppuVar30 + -0xc));
          }
        }
        pppppppuVar18 = pppppppuVar45;
        __Unwind_Resume();
        pcStack_a8 = FUN_109a890bc;
        ppppppuVar33 = *pppppppuVar18;
        ppppppuVar48 = pppppppuVar18[3];
        ppppppuVar30 = pppppppuVar18[2];
        extraout_x8[1] = pppppppuVar18[1];
        *extraout_x8 = ppppppuVar33;
        extraout_x8[3] = ppppppuVar48;
        extraout_x8[2] = ppppppuVar30;
        ppppppuVar30 = pppppppuVar18[7];
        ppppppuVar48 = pppppppuVar18[4];
        ppppppuVar41 = pppppppuVar18[7];
        ppppppuVar36 = pppppppuVar18[6];
        extraout_x8[5] = pppppppuVar18[5];
        extraout_x8[4] = ppppppuVar48;
        extraout_x8[7] = ppppppuVar41;
        extraout_x8[6] = ppppppuVar36;
        extraout_x8[10] = (ulong ******)0x0;
        extraout_x8[8] = (ulong ******)(extraout_x8 + 1);
        extraout_x8[9] = (ulong ******)(extraout_x8 + 10);
        extraout_x8[0xb] = (ulong ******)0x0;
        if (ppppppuVar30 == (ulong ******)0x0) {
          uVar47 = (uint)((ulong)ppppppuVar33 >> 0x20);
        }
        else {
          piVar32 = (int *)((long)ppppppuVar30 + 0x14);
          do {
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar32,0x10);
            if (bVar14) {
              *piVar32 = *piVar32 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          uVar47 = *(uint *)((long)pppppppuVar18 + 4);
        }
        iVar28 = ((uint)ppppppuVar33 >> 3 & 0x1ff) + 1;
        uStack_e0 = uVar25;
        uStack_d8 = uVar27;
        uStack_d0 = param_2;
        lStack_c8 = lVar24;
        pppppppuStack_c0 = param_1;
        pppppppuStack_b8 = pppppppuVar45;
        puStack_b0 = &stack0xfffffffffffffff0;
        if (2 < (int)uVar47) {
          *(uint *)((long)extraout_x8 + 4) = 0;
          pppppppuVar45 = extraout_x8;
          func_0x000109a84868(extraout_x8,pppppppuVar18);
          uVar47 = *(uint *)((long)pppppppuVar18 + 4);
          if (((uVar42 == 0) && (iVar23 != 0)) && (2 < (int)uVar47)) {
            uVar25 = (ulong)(uVar47 - 1);
            iVar4 = *(int *)((long)pppppppuVar18[8] + uVar25 * 4) * iVar28;
            iVar5 = 0;
            if (iVar23 != 0) {
              iVar5 = iVar4 / iVar23;
            }
            if (iVar4 - iVar5 * iVar23 == 0) {
              uVar42 = *(uint *)extraout_x8;
              uVar47 = iVar23 * 8 - 8;
              *(uint *)extraout_x8 = uVar42 & 0xfffff007 | uVar47;
              extraout_x8[9][uVar25] =
                   (ulong *****)
                   (ulong)((uVar47 >> 3 & 0x1ff) + 1 <<
                          (ulong)(0xfa50U >> (ulong)((uVar42 & 7) << 1) & 3));
              iVar4 = 0;
              if (iVar23 != 0) {
                iVar4 = (*(int *)((long)extraout_x8[8] + uVar25 * 4) * iVar28) / iVar23;
              }
              *(int *)((long)extraout_x8[8] + uVar25 * 4) = iVar4;
              return pppppppuVar45;
            }
          }
          else if ((int)uVar47 < 3) goto LAB_109a8920c;
          puVar16 = (undefined4 *)0x10;
          func_0x000107c2ae8c();
          puStack_f0 = (undefined8 *)(puVar16 + 1);
          *puStack_f0 = 0x203d3c20736d6964;
          *puVar16 = 1;
          uStack_e8 = 9;
          *(undefined2 *)(puVar16 + 3) = 0x32;
          FUN_109ac3188(0xffffff29,&puStack_f0,&UNK_10f596393,&UNK_10f597913,0x3d6);
          goto LAB_109a89510;
        }
        ppppppuVar30 = pppppppuVar18[9];
        ppppppuVar33 = extraout_x8[9];
        *ppppppuVar33 = *ppppppuVar30;
        ppppppuVar33[1] = ppppppuVar30[1];
        pppppppuVar45 = pppppppuVar18;
LAB_109a8920c:
        iVar4 = iVar28;
        if (iVar23 != 0) {
          iVar4 = iVar23;
        }
        iVar28 = *(uint *)((long)pppppppuVar18 + 0xc) * iVar28;
        if (iVar28 < iVar4) {
          if (uVar42 == 0) {
LAB_109a89240:
            uVar42 = 0;
            if (iVar4 != 0) {
              uVar42 = (int)(*(uint *)(pppppppuVar18 + 1) * iVar28) / iVar4;
            }
            goto LAB_109a8924c;
          }
LAB_109a89250:
          if (uVar42 != *(uint *)(pppppppuVar18 + 1)) {
            uVar47 = *(uint *)pppppppuVar18;
            if ((uVar47 >> 0xe & 1) == 0) {
              puVar16 = (undefined4 *)0x50;
              func_0x000107c2ae8c();
              *(undefined8 *)(puVar16 + 7) = 0x6874202c73756f75;
              *(undefined8 *)(puVar16 + 5) = 0x6e69746e6f632074;
              *(undefined8 *)(puVar16 + 0xb) = 0x666f207265626d75;
              *(undefined8 *)(puVar16 + 9) = 0x6e20737469207375;
              *(undefined8 *)(puVar16 + 0xf) = 0x656220746f6e206e;
              *(undefined8 *)(puVar16 + 0xd) = 0x61632073776f7220;
              *puVar16 = 1;
              puStack_f0 = (undefined8 *)(puVar16 + 1);
              uStack_e8 = 0x48;
              *(undefined1 *)(puVar16 + 0x13) = 0;
              *(undefined8 *)(puVar16 + 0x11) = 0x6465676e61686320;
              *(undefined8 *)(puVar16 + 3) = 0x6f6e207369207869;
              *(undefined8 *)(puVar16 + 1) = 0x7274616d20656854;
              FUN_109ac3188(0xfffffff3,&puStack_f0,&UNK_10f596393,&UNK_10f597913,0x3e5);
              goto LAB_109a89510;
            }
            uVar2 = *(uint *)(pppppppuVar18 + 1) * iVar28;
            if (uVar2 < uVar42) {
              puVar16 = (undefined4 *)0x1c;
              func_0x000107c2ae8c();
              *puVar16 = 1;
              puStack_f0 = (undefined8 *)(puVar16 + 1);
              uStack_e8 = 0x16;
              *(undefined1 *)((long)puVar16 + 0x1a) = 0;
              *(undefined8 *)(puVar16 + 3) = 0x6f207265626d756e;
              *(undefined8 *)(puVar16 + 1) = 0x2077656e20646142;
              *(undefined8 *)((long)puVar16 + 0x12) = 0x73776f7220666f20;
              FUN_109ac3188(0xffffff2d,&puStack_f0,&UNK_10f596393,&UNK_10f597913,1000);
              goto LAB_109a89510;
            }
            iVar28 = 0;
            if (uVar42 != 0) {
              iVar28 = (int)uVar2 / (int)uVar42;
            }
            if (iVar28 * uVar42 != uVar2) {
              puVar16 = (undefined4 *)0x54;
              func_0x000107c2ae8c();
              *(undefined8 *)(puVar16 + 7) = 0x656d656c65207869;
              *(undefined8 *)(puVar16 + 5) = 0x7274616d20666f20;
              *(undefined8 *)(puVar16 + 0xb) = 0x736976696420746f;
              *(undefined8 *)(puVar16 + 9) = 0x6e2073692073746e;
              *(undefined8 *)(puVar16 + 0xf) = 0x2077656e20656874;
              *(undefined8 *)(puVar16 + 0xd) = 0x20796220656c6269;
              *(undefined8 *)((long)puVar16 + 0x4a) = 0x73776f7220666f20;
              *(undefined8 *)((long)puVar16 + 0x42) = 0x7265626d756e2077;
              *puVar16 = 1;
              puStack_f0 = (undefined8 *)(puVar16 + 1);
              uStack_e8 = 0x4e;
              *(undefined1 *)((long)puVar16 + 0x52) = 0;
              *(undefined8 *)(puVar16 + 3) = 0x7265626d756e206c;
              *(undefined8 *)(puVar16 + 1) = 0x61746f7420656854;
              FUN_109ac3188(0xfffffffb,&puStack_f0,&UNK_10f596393,&UNK_10f597913,0x3ee);
              goto LAB_109a89510;
            }
            *(uint *)(extraout_x8 + 1) = uVar42;
            *extraout_x8[9] =
                 (ulong *****)
                 ((long)(int)(0x88442211U >> (((ulong)uVar47 & 7) << 2) & 0xf) * (long)iVar28);
          }
        }
        else {
          iVar23 = 0;
          if (iVar4 != 0) {
            iVar23 = iVar28 / iVar4;
          }
          if (iVar28 - iVar23 * iVar4 != 0 && uVar42 == 0) goto LAB_109a89240;
LAB_109a8924c:
          if (uVar42 != 0) goto LAB_109a89250;
        }
        uVar42 = 0;
        if (iVar4 != 0) {
          uVar42 = iVar28 / iVar4;
        }
        if (uVar42 * iVar4 == iVar28) {
          *(uint *)((long)extraout_x8 + 0xc) = uVar42;
          uVar42 = *(uint *)extraout_x8;
          uVar47 = iVar4 * 8 - 8;
          *(uint *)extraout_x8 = uVar42 & 0xfffff007 | uVar47;
          extraout_x8[9][1] =
               (ulong *****)
               (ulong)((uVar47 >> 3 & 0x1ff) + 1 <<
                      (ulong)(0xfa50U >> (ulong)((uVar42 & 7) << 1) & 3));
          return pppppppuVar45;
        }
        puVar16 = (undefined4 *)0x44;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar16 + 3) = 0x206874646977206c;
        *(undefined8 *)(puVar16 + 1) = 0x61746f7420656854;
        *puVar16 = 1;
        puStack_f0 = (undefined8 *)(puVar16 + 1);
        uStack_e8 = 0x3e;
        *(undefined1 *)((long)puVar16 + 0x42) = 0;
        *(undefined8 *)(puVar16 + 7) = 0x656c626973697669;
        *(undefined8 *)(puVar16 + 5) = 0x6420746f6e207369;
        *(undefined8 *)(puVar16 + 0xb) = 0x626d756e2077656e;
        *(undefined8 *)(puVar16 + 9) = 0x2065687420796220;
        *(undefined8 *)((long)puVar16 + 0x3a) = 0x736c656e6e616863;
        *(undefined8 *)((long)puVar16 + 0x32) = 0x20666f207265626d;
        FUN_109ac3188(0xfffffff1,&puStack_f0,&UNK_10f596393,&UNK_10f597913,0x3f8);
LAB_109a89510:
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x109a89514);
        (*pcVar12)();
      }
    }
    FUN_109a38ed8(&ppppppuStack_88,&UNK_10f598287);
    FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x9ca);
    goto LAB_109a88b8c;
  }
  if (1 < uVar3 - 3) {
    if (uVar3 == 0) {
      puVar16 = (undefined4 *)0x34;
      func_0x000107c2ae8c();
      *puVar16 = 1;
      ppppppuStack_88 = (ulong ******)(puVar16 + 1);
      ppppppuStack_80 = (ulong ******)0x2c;
      *(undefined8 *)(puVar16 + 3) = 0x2064656c6c616320;
      *(undefined8 *)(puVar16 + 1) = 0x2928657461657263;
      *(undefined1 *)(puVar16 + 0xc) = 0;
      *(undefined8 *)(puVar16 + 7) = 0x20676e697373696d;
      *(undefined8 *)(puVar16 + 5) = 0x2065687420726f66;
      *(undefined8 *)(puVar16 + 10) = 0x7961727261207475;
      *(undefined8 *)(puVar16 + 8) = 0x7074756f20676e69;
      FUN_109ac3188(0xffffffe5,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x985);
      goto LAB_109a88b8c;
    }
LAB_109a88678:
    puVar16 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar16 = 1;
    ppppppuStack_88 = (ulong ******)(puVar16 + 1);
    ppppppuStack_80 = (ulong ******)0x1e;
    *(undefined1 *)((long)puVar16 + 0x22) = 0;
    *(undefined8 *)(puVar16 + 3) = 0x726f707075736e75;
    *(undefined8 *)(puVar16 + 1) = 0x2f6e776f6e6b6e55;
    *(undefined8 *)((long)puVar16 + 0x1a) = 0x6570797420796172;
    *(undefined8 *)((long)puVar16 + 0x12) = 0x726120646574726f;
    FUN_109ac3188(0xffffff2b,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x9ff);
    goto LAB_109a88b8c;
  }
  if (uVar43 == 2) {
    uVar43 = *param_3;
    uVar3 = param_3[1];
    uVar38 = uVar3;
    if (((uVar43 == 1) || (uVar38 = uVar3 * uVar43, uVar3 == 1)) || (uVar38 == 0)) {
      iVar28 = uVar43 + uVar3 + -1;
      if ((int)uVar38 < 1) {
        iVar28 = 0;
      }
      puVar16 = (undefined4 *)(long)iVar28;
      pppppppuVar45 = (ulong *******)param_1[1];
      if (uVar42 == 0x40000) {
        if (iVar23 < 0) {
          if (((uVar2 >> 0x1e & 1) == 0) ||
             (((long)pppppppuVar45[1] - (long)*pppppppuVar45 >> 3) * -0x5555555555555555 -
              (long)puVar16 == 0)) {
            lVar24 = (long)pppppppuVar45[1] - (long)*pppppppuVar45 >> 3;
            bVar14 = puVar16 < (undefined4 *)(lVar24 * -0x5555555555555555);
            puVar17 = (undefined8 *)((long)puVar16 + lVar24 * 0x5555555555555555);
            if (bVar14 || puVar17 == (undefined8 *)0x0) {
              pppppppuVar18 = pppppppuVar45;
              if (bVar14) {
                ppppppuVar33 = *pppppppuVar45 + (long)puVar16 * 3;
                ppppppuVar30 = pppppppuVar45[1];
                while (ppppppuVar48 = ppppppuVar30, ppppppuVar48 != ppppppuVar33) {
                  ppppppuVar30 = ppppppuVar48 + -3;
                  pppppppuVar18 = (ulong *******)*ppppppuVar30;
                  if (pppppppuVar18 != (ulong *******)0x0) {
                    ppppppuVar48[-2] = (ulong *****)pppppppuVar18;
                    __ZdlPv();
                  }
                }
                pppppppuVar45[1] = ppppppuVar33;
              }
              return pppppppuVar18;
            }
            pppppppuVar18 = (ulong *******)pppppppuVar45[1];
            if ((undefined8 *)
                (((long)pppppppuVar45[2] - (long)pppppppuVar18 >> 3) * -0x5555555555555555) <
                puVar17) {
              lVar24 = (long)pppppppuVar18 - (long)*pppppppuVar45;
              uVar25 = (long)puVar17 + (lVar24 >> 3) * -0x5555555555555555;
              if (0xaaaaaaaaaaaaaaa < uVar25) {
                FUN_1092a9b50();
                pppppppuStack_78 = (ulong *******)FUN_109a9c2b4;
                pppppppuVar45 = (ulong *******)&DAT_10f62a4d8;
                ppppppuStack_80 = (ulong ******)&stack0xfffffffffffffff0;
                func_0x000104c4f6cc();
                ppppppuVar30 = *pppppppuVar45;
                ppppppuVar48 = pppppppuVar45[1];
                ppppppuVar33 = (ulong ******)
                               ((long)ppppppuVar30 + (puVar17[1] - (long)ppppppuVar48));
                ppppppuVar36 = ppppppuVar33;
                if (ppppppuVar48 != ppppppuVar30) {
                  do {
                    lVar24 = 0;
                    do {
                      *(undefined1 *)((long)ppppppuVar36 + lVar24) =
                           *(undefined1 *)((long)ppppppuVar30 + lVar24);
                      lVar24 = lVar24 + 1;
                    } while (lVar24 != 3);
                    ppppppuVar30 = (ulong ******)((long)ppppppuVar30 + 3);
                    ppppppuVar36 = (ulong ******)((long)ppppppuVar36 + 3);
                  } while (ppppppuVar30 != ppppppuVar48);
                  ppppppuVar30 = *pppppppuVar45;
                }
                puVar17[1] = ppppppuVar33;
                *pppppppuVar45 = ppppppuVar33;
                pppppppuVar45[1] = ppppppuVar30;
                puVar17[1] = ppppppuVar30;
                ppppppuVar30 = pppppppuVar45[1];
                pppppppuVar45[1] = (ulong ******)puVar17[2];
                puVar17[2] = ppppppuVar30;
                ppppppuVar30 = pppppppuVar45[2];
                pppppppuVar45[2] = (ulong ******)puVar17[3];
                puVar17[3] = ppppppuVar30;
                *puVar17 = puVar17[1];
                return pppppppuVar45;
              }
              lVar37 = (long)pppppppuVar45[2] - (long)*pppppppuVar45 >> 3;
              uVar27 = lVar37 * 0x5555555555555556;
              if (uVar27 < uVar25 || uVar27 - uVar25 == 0) {
                uVar27 = uVar25;
              }
              if (0x555555555555554 < (ulong)(lVar37 * -0x5555555555555555)) {
                uVar27 = 0xaaaaaaaaaaaaaaa;
              }
              if (uVar27 == 0) {
                pppppppuVar18 = (ulong *******)0x0;
              }
              else {
                pppppppuVar18 = pppppppuVar45;
                FUN_1092a9b64();
              }
              lVar24 = (long)pppppppuVar18 + lVar24;
              lVar37 = (((long)puVar17 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
              _bzero(lVar24,lVar37);
              ppppppuVar30 = (ulong ******)
                             (lVar24 - ((long)pppppppuVar45[1] - (long)*pppppppuVar45));
              _memcpy(ppppppuVar30);
              pppppppuStack_68 = (ulong *******)*pppppppuVar45;
              *pppppppuVar45 = ppppppuVar30;
              pppppppuVar45[1] = (ulong ******)(lVar24 + lVar37);
              pppppppuVar45[2] = (ulong ******)(pppppppuVar18 + uVar27 * 3);
              pppppppuVar44 = (ulong *******)&pppppppuStack_68;
              func_0x00010528d5a4(pppppppuVar44);
            }
            else {
              pppppppuVar44 = pppppppuVar45;
              if (puVar17 != (undefined8 *)0x0) {
                uVar25 = ((long)puVar17 * 0x18 - 0x18U) / 0x18;
                pppppppuVar44 = pppppppuVar18;
                _bzero(pppppppuVar18,uVar25 * 0x18 + 0x18);
                pppppppuVar18 = pppppppuVar18 + uVar25 * 3 + 3;
              }
              pppppppuVar45[1] = (ulong ******)pppppppuVar18;
            }
            return pppppppuVar44;
          }
          FUN_109a38ed8(&ppppppuStack_88,&UNK_10f5982cc);
          FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x93c);
          goto LAB_109a88b8c;
        }
        if ((int)((ulong)((long)pppppppuVar45[1] - (long)*pppppppuVar45) >> 3) * -0x55555555 <=
            iVar23) {
          FUN_109a38ed8(&ppppppuStack_88,&UNK_10f597d9f);
          FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x940);
          goto LAB_109a88b8c;
        }
        pppppppuVar45 = (ulong *******)(*pppppppuVar45 + (param_5 & 0xffffffff) * 3);
      }
      else if (-1 < iVar23) {
        puVar17 = (undefined8 *)0xc;
        func_0x000107c2ae8c();
        *puVar17 = 0x203c206900000001;
        ppppppuStack_88 = (ulong ******)((long)puVar17 + 4);
        ppppppuStack_80 = (ulong ******)0x5;
        *(undefined2 *)(puVar17 + 1) = 0x30;
        FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x944);
        goto LAB_109a88b8c;
      }
      if ((uVar47 != (uVar2 & 0xfff)) &&
         ((((uVar2 ^ uVar22) & 0xff8) != 0 || ((param_7 >> (ulong)(uVar2 & 0x1f) & 1) == 0)))) {
        puVar16 = (undefined4 *)0x68;
        func_0x000107c2ae8c();
        *puVar16 = 1;
        ppppppuStack_88 = (ulong ******)(puVar16 + 1);
        ppppppuStack_80 = (ulong ******)0x60;
        *(undefined8 *)(puVar16 + 0xb) = 0x4e435f54414d5f56;
        *(undefined8 *)(puVar16 + 9) = 0x43203d3d20296570;
        *(undefined8 *)(puVar16 + 0xf) = 0x3c20312828202626;
        *(undefined8 *)(puVar16 + 0xd) = 0x2029306570797428;
        *(undefined8 *)(puVar16 + 0x13) = 0x6465786966202620;
        *(undefined8 *)(puVar16 + 0x11) = 0x293065707974203c;
        *(undefined8 *)(puVar16 + 0x17) = 0x2930203d2120296b;
        *(undefined8 *)(puVar16 + 0x15) = 0x73614d6874706544;
        *(undefined8 *)(puVar16 + 3) = 0x7c20306570797420;
        *(undefined8 *)(puVar16 + 1) = 0x3d3d20657079746d;
        *(undefined1 *)(puVar16 + 0x19) = 0;
        *(undefined8 *)(puVar16 + 7) = 0x79746d284e435f54;
        *(undefined8 *)(puVar16 + 5) = 0x414d5f564328207c;
        FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x947);
        goto LAB_109a88b8c;
      }
      uVar42 = (uVar2 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar2 & 7) << 1) & 3);
      uVar25 = (ulong)uVar42;
      if ((uVar2 >> 0x1e & 1) != 0) {
        puVar26 = (undefined4 *)0x0;
        if (uVar25 != 0) {
          puVar26 = (undefined4 *)((ulong)((long)pppppppuVar45[1] - (long)*pppppppuVar45) / uVar25);
        }
        if (puVar26 != puVar16) {
          FUN_109a38ed8(&ppppppuStack_88,&UNK_10f59834e);
          FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x94a);
          goto LAB_109a88b8c;
        }
      }
      if ((int)uVar42 < 0x18) {
        if ((int)uVar42 < 6) {
          pppppppuVar18 = pppppppuVar45;
          if ((int)uVar42 < 3) {
            if (uVar42 == 1) {
              puVar26 = (undefined4 *)((long)pppppppuVar45[1] - (long)*pppppppuVar45);
              ppppppuStack_70 = (ulong ******)((long)puVar16 - (long)puVar26);
              if (puVar16 < puVar26 || ppppppuStack_70 == (ulong ******)0x0) {
                if (puVar16 < puVar26) {
                  pppppppuVar45[1] = (ulong ******)((long)*pppppppuVar45 + (long)puVar16);
                }
                return pppppppuVar45;
              }
              pppppppuVar18 = (ulong *******)pppppppuVar45[1];
              if (ppppppuStack_70 <= (long *)((long)pppppppuVar45[2] - (long)pppppppuVar18)) {
                pppppppuVar44 = pppppppuVar18;
                if (ppppppuStack_70 != (ulong ******)0x0) {
                  pppppppuVar44 = (ulong *******)((long)pppppppuVar18 + (long)ppppppuStack_70);
                  func_0x000107c60ee4(pppppppuVar18,ppppppuStack_70);
                }
                pppppppuVar45[1] = (ulong ******)pppppppuVar44;
                return pppppppuVar44;
              }
              unaff_x20 = (ulong *******)*pppppppuVar45;
              lVar24 = (long)pppppppuVar18 - (long)unaff_x20;
              pppppppuVar44 = (ulong *******)(lVar24 + (long)ppppppuStack_70);
              if ((long)pppppppuVar44 < 0) {
                plVar21 = (long *)ppppppuStack_70;
                func_0x000104c591bc();
                *plVar21 = 0;
                if ((param_5 & 3) != 0) {
                  return (ulong *******)0x0;
                }
                if (param_3 < (uint *)((param_5 >> 1) + (param_5 >> 2))) {
code_r0x000100651ecc:
                  pppppppuVar45 = (ulong *******)0x0;
                }
                else {
                  if (param_5 == 0) {
                    pcVar12 = (code *)0x0;
                  }
                  else {
                    pcVar12 = (code *)0x0;
                    uVar25 = 0;
                    ppppppuStack_80 = (ulong ******)lVar24;
                    pppppppuStack_78 = unaff_x20;
                    pppppppuStack_68 = pppppppuVar45;
                    do {
                      pppppppuVar45 = pppppppuVar18;
                      func_0x0001004cc780(pppppppuVar18,&pcStack_a8,param_4 + uVar25);
                      if ((int)pppppppuVar45 == 0) {
                        return pppppppuVar45;
                      }
                      if ((param_5 - 4 != uVar25) && (pcStack_a8 != (code *)0x3))
                      goto code_r0x000100651ecc;
                      pppppppuVar18 = (ulong *******)((long)pppppppuVar18 + (long)pcStack_a8);
                      pcVar12 = pcStack_a8 + (long)pcVar12;
                      uVar25 = uVar25 + 4;
                    } while (uVar25 < param_5);
                  }
                  *plVar21 = (long)pcVar12;
                  pppppppuVar45 = (ulong *******)0x1;
                }
                return pppppppuVar45;
              }
              uVar25 = (long)pppppppuVar45[2] - (long)unaff_x20;
              pppppppuVar18 = (ulong *******)(uVar25 * 2);
              if (pppppppuVar18 < pppppppuVar44 || (long)pppppppuVar18 - (long)pppppppuVar44 == 0) {
                pppppppuVar18 = pppppppuVar44;
              }
              if (0x3ffffffffffffffe < uVar25) {
                pppppppuVar18 = (ulong *******)0x7fffffffffffffff;
              }
              if (pppppppuVar18 == (ulong *******)0x0) {
                pppppppuVar44 = (ulong *******)0x0;
              }
              else {
                pppppppuVar44 = pppppppuVar18;
                func_0x000107c60e20();
              }
              func_0x000107c60ee4((long)pppppppuVar44 + lVar24,ppppppuStack_70);
              pppppppuVar15 = pppppppuVar44;
              func_0x000107c610b4(pppppppuVar44,unaff_x20,lVar24);
              *pppppppuVar45 = (ulong ******)pppppppuVar44;
              pppppppuVar45[1] =
                   (ulong ******)((long)pppppppuVar44 + lVar24 + (long)ppppppuStack_70);
              pppppppuVar45[2] = (ulong ******)((long)pppppppuVar44 + (long)pppppppuVar18);
              if (unaff_x20 == (ulong *******)0x0) {
                return pppppppuVar15;
              }
              goto code_r0x00010bdbd7ac;
            }
            if (uVar42 == 2) {
              unaff_x29 = &stack0xfffffffffffffff0;
              unaff_x20 = (ulong *******)*pppppppuVar45;
              unaff_x21 = (ulong *******)pppppppuVar45[1];
              unaff_x22 = (long)unaff_x21 - (long)unaff_x20;
              unaff_x24 = (undefined4 *)((long)unaff_x22 >> 1);
              if (puVar16 <= unaff_x24) {
                if (unaff_x24 <= puVar16) {
                  return pppppppuVar45;
                }
                ppppppuVar30 = (ulong ******)((long)unaff_x20 + (long)puVar16 * 2);
LAB_109a90038:
                pppppppuVar45[1] = ppppppuVar30;
                return pppppppuVar18;
              }
              unaff_x23 = (long)puVar16 - (long)unaff_x24;
              if (unaff_x23 <= (ulong)((long)pppppppuVar45[2] - (long)unaff_x21 >> 1)) {
                pppppppuVar18 = unaff_x21;
                _bzero(unaff_x21,unaff_x23 * 2);
                ppppppuVar30 = (ulong ******)((long)unaff_x21 + unaff_x23 * 2);
                goto LAB_109a90038;
              }
              if ((long)puVar16 < 0) {
                FUN_109a9c2b4();
              }
              else {
                puVar26 = (undefined4 *)((long)pppppppuVar45[2] - (long)unaff_x20);
                unaff_x25 = puVar26;
                if (puVar26 <= puVar16) {
                  unaff_x25 = puVar16;
                }
                if ((undefined4 *)0x7ffffffffffffffd < puVar26) {
                  unaff_x25 = (undefined4 *)0x7fffffffffffffff;
                }
                if (-1 < (long)unaff_x25) {
                  lVar24 = (long)unaff_x25 << 1;
                  __Znwm();
                  pppppppuVar44 = (ulong *******)(lVar24 + unaff_x22);
                  pppppppuVar15 = pppppppuVar44;
                  _bzero(pppppppuVar44,unaff_x23 * 2);
                  ppppppuVar33 = (ulong ******)((long)pppppppuVar44 + (long)unaff_x24 * -2);
                  ppppppuVar30 = ppppppuVar33;
                  for (pppppppuVar18 = unaff_x20; pppppppuVar18 != unaff_x21;
                      pppppppuVar18 = (ulong *******)((long)pppppppuVar18 + 2)) {
                    *(undefined1 *)ppppppuVar30 = *(undefined1 *)pppppppuVar18;
                    *(undefined1 *)((long)ppppppuVar30 + 1) =
                         *(undefined1 *)((long)pppppppuVar18 + 1);
                    ppppppuVar30 = (ulong ******)((long)ppppppuVar30 + 2);
                  }
                  *pppppppuVar45 = ppppppuVar33;
                  pppppppuVar45[1] = (ulong ******)((long)pppppppuVar44 + unaff_x23 * 2);
                  pppppppuVar45[2] = (ulong ******)(lVar24 + (long)unaff_x25 * 2);
                  if (unaff_x20 == (ulong *******)0x0) {
                    return pppppppuVar15;
                  }
                  goto code_r0x00010bdbd7ac;
                }
              }
              unaff_x30 = FUN_109a9005c;
              func_0x000104c4f740();
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
              unaff_x19 = pppppppuVar45;
              goto code_r0x000109a9005c;
            }
          }
          else {
            if (uVar42 == 3) {
code_r0x000109a9005c:
              *(undefined4 **)((long)register0x00000008 + -0x40) = unaff_x24;
              *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
              *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
              *(ulong ********)((long)register0x00000008 + -0x28) = unaff_x21;
              *(ulong ********)((long)register0x00000008 + -0x20) = unaff_x20;
              *(ulong ********)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(code **)((long)register0x00000008 + -8) = unaff_x30;
              unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
              ppppppuVar30 = *pppppppuVar18;
              unaff_x20 = (ulong *******)pppppppuVar18[1];
              unaff_x21 = (ulong *******)((long)unaff_x20 - (long)ppppppuVar30);
              bVar14 = (undefined4 *)((long)unaff_x21 * -0x5555555555555555) <= puVar16;
              unaff_x22 = (long)puVar16 + (long)unaff_x21 * 0x5555555555555555;
              if (!bVar14 || unaff_x22 == 0) {
                if (bVar14) {
                  return pppppppuVar18;
                }
                ppppppuVar30 = (ulong ******)((long)ppppppuVar30 + (long)puVar16 * 3);
                pppppppuVar45 = pppppppuVar18;
LAB_109a901dc:
                pppppppuVar18[1] = ppppppuVar30;
                return pppppppuVar45;
              }
              if (unaff_x22 <=
                  (ulong)(((long)pppppppuVar18[2] - (long)unaff_x20) * -0x5555555555555555)) {
                uVar25 = unaff_x22 * 3 - 3;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar25;
                lVar24 = (SUB168(auVar9 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) +
                         uVar25 / 3 + 3;
                pppppppuVar45 = unaff_x20;
                _bzero(unaff_x20,lVar24);
                ppppppuVar30 = (ulong ******)((long)unaff_x20 + lVar24);
                goto LAB_109a901dc;
              }
              if (puVar16 < (undefined4 *)0x5555555555555556) {
                lVar24 = (long)pppppppuVar18[2] - (long)ppppppuVar30;
                unaff_x23 = 0xaaaaaaaaaaaaaaab;
                puVar26 = (undefined4 *)(lVar24 * 0x5555555555555556);
                if (puVar26 < puVar16 || (long)puVar26 - (long)puVar16 == 0) {
                  puVar26 = puVar16;
                }
                if (0x2aaaaaaaaaaaaaa9 < (ulong)(lVar24 * -0x5555555555555555)) {
                  puVar26 = (undefined4 *)0x5555555555555555;
                }
                *(ulong ********)((long)register0x00000008 + -0x48) = pppppppuVar18;
                if (puVar26 < (undefined4 *)0x5555555555555556) {
                  lVar24 = (long)puVar26 * 3;
                  __Znwm();
                  lVar37 = lVar24 + (long)unaff_x21;
                  *(long *)((long)register0x00000008 + -0x68) = lVar24;
                  *(long *)((long)register0x00000008 + -0x60) = lVar37;
                  *(long *)((long)register0x00000008 + -0x50) = lVar24 + (long)puVar26 * 3;
                  uVar25 = unaff_x22 * 3 - 3;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = uVar25;
                  lVar24 = (SUB168(auVar7 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) +
                           uVar25 / 3 + 3;
                  _bzero(lVar37,lVar24);
                  *(long *)((long)register0x00000008 + -0x58) = lVar37 + lVar24;
                  FUN_109a9c2c8(pppppppuVar18,(undefined1 *)((long)register0x00000008 + -0x68));
                  lVar24 = *(long *)((long)register0x00000008 + -0x58) -
                           *(long *)((long)register0x00000008 + -0x60);
                  if (lVar24 != 0) {
                    uVar25 = lVar24 - 3;
                    auVar8._8_8_ = 0;
                    auVar8._0_8_ = uVar25;
                    *(ulong *)((long)register0x00000008 + -0x58) =
                         (*(long *)((long)register0x00000008 + -0x58) -
                         ((SUB168(auVar8 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) +
                         uVar25 / 3)) + -3;
                  }
                  pppppppuVar45 = *(ulong ********)((long)register0x00000008 + -0x68);
                  if (pppppppuVar45 == (ulong *******)0x0) {
                    return (ulong *******)0x0;
                  }
                  __ZdlPv();
                  return pppppppuVar45;
                }
              }
              else {
                func_0x000109a9c348();
              }
              func_0x000104c4f740();
              lVar24 = *(long *)((long)register0x00000008 + -0x58) -
                       *(long *)((long)register0x00000008 + -0x60);
              if (lVar24 != 0) {
                uVar25 = lVar24 - 3;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = uVar25;
                *(ulong *)((long)register0x00000008 + -0x58) =
                     (*(long *)((long)register0x00000008 + -0x58) -
                     ((SUB168(auVar10 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) +
                     uVar25 / 3)) + -3;
              }
              if (*(long *)((long)register0x00000008 + -0x68) != 0) {
                __ZdlPv();
              }
              unaff_x30 = FUN_109a90254;
              pppppppuVar45 = pppppppuVar18;
              __Unwind_Resume();
              puVar13 = (undefined1 *)((long)register0x00000008 + -0x70);
              unaff_x19 = pppppppuVar18;
code_r0x000109a90254:
              register0x00000008 = (BADSPACEBASE *)(puVar13 + -0x50);
              *(undefined8 *)(puVar13 + -0x50) = unaff_x26;
              *(undefined4 **)(puVar13 + -0x48) = unaff_x25;
              *(undefined4 **)(puVar13 + -0x40) = unaff_x24;
              *(ulong *)(puVar13 + -0x38) = unaff_x23;
              *(ulong *)(puVar13 + -0x30) = unaff_x22;
              *(ulong ********)(puVar13 + -0x28) = unaff_x21;
              *(ulong ********)(puVar13 + -0x20) = unaff_x20;
              *(ulong ********)(puVar13 + -0x18) = unaff_x19;
              *(undefined1 **)(puVar13 + -0x10) = unaff_x29;
              *(code **)(puVar13 + -8) = unaff_x30;
              unaff_x29 = puVar13 + -0x10;
              unaff_x20 = (ulong *******)*pppppppuVar45;
              pppppppuVar18 = (ulong *******)pppppppuVar45[1];
              unaff_x23 = (long)pppppppuVar18 - (long)unaff_x20;
              bVar14 = (undefined4 *)(((long)unaff_x23 >> 1) * -0x5555555555555555) <= puVar16;
              unaff_x24 = (undefined4 *)
                          ((long)puVar16 + ((long)unaff_x23 >> 1) * 0x5555555555555555);
              if (!bVar14 || unaff_x24 == (undefined4 *)0x0) {
                if (bVar14) {
                  return pppppppuVar45;
                }
                ppppppuVar30 = (ulong ******)((long)unaff_x20 + (long)puVar16 * 6);
                pppppppuVar44 = pppppppuVar45;
LAB_109a903d8:
                pppppppuVar45[1] = ppppppuVar30;
                return pppppppuVar44;
              }
              if (unaff_x24 <=
                  (undefined4 *)
                  (((long)pppppppuVar45[2] - (long)pppppppuVar18 >> 1) * -0x5555555555555555)) {
                lVar24 = (((long)unaff_x24 * 6 - 6U) / 6) * 6 + 6;
                pppppppuVar44 = pppppppuVar18;
                _bzero(pppppppuVar18,lVar24);
                ppppppuVar30 = (ulong ******)((long)pppppppuVar18 + lVar24);
                goto LAB_109a903d8;
              }
              pppppppuVar44 = pppppppuVar45;
              if (puVar16 < (undefined4 *)0x2aaaaaaaaaaaaaab) {
                lVar24 = (long)pppppppuVar45[2] - (long)unaff_x20 >> 1;
                unaff_x26 = 0xaaaaaaaaaaaaaaab;
                puVar26 = (undefined4 *)(lVar24 * 0x5555555555555556);
                if (puVar26 < puVar16 || (long)puVar26 - (long)puVar16 == 0) {
                  puVar26 = puVar16;
                }
                if (0x1555555555555554 < (ulong)(lVar24 * -0x5555555555555555)) {
                  puVar26 = (undefined4 *)0x2aaaaaaaaaaaaaaa;
                }
                if (puVar26 < (undefined4 *)0x2aaaaaaaaaaaaaab) {
                  ppppppuVar33 = (ulong ******)((long)puVar26 * 6);
                  __Znwm();
                  pppppppuVar15 = (ulong *******)((long)ppppppuVar33 + unaff_x23);
                  lVar24 = (((long)unaff_x24 * 6 - 6U) / 6) * 6 + 6;
                  pppppppuVar19 = pppppppuVar15;
                  _bzero(pppppppuVar15,lVar24);
                  ppppppuVar30 = ppppppuVar33;
                  for (pppppppuVar44 = unaff_x20; pppppppuVar44 != pppppppuVar18;
                      pppppppuVar44 = (ulong *******)((long)pppppppuVar44 + 6)) {
                    lVar37 = 0;
                    do {
                      *(undefined2 *)((long)ppppppuVar30 + lVar37) =
                           *(undefined2 *)((long)pppppppuVar44 + lVar37);
                      lVar37 = lVar37 + 2;
                    } while (lVar37 != 6);
                    ppppppuVar30 = (ulong ******)((long)ppppppuVar30 + 6);
                  }
                  *pppppppuVar45 = ppppppuVar33;
                  pppppppuVar45[1] = (ulong ******)((long)pppppppuVar15 + lVar24);
                  pppppppuVar45[2] = (ulong ******)((long)ppppppuVar33 + (long)puVar26 * 6);
                  if (unaff_x20 == (ulong *******)0x0) {
                    return pppppppuVar19;
                  }
                  goto code_r0x00010bdbd7ac;
                }
              }
              else {
                func_0x000109a9c35c();
              }
              unaff_x30 = (code *)0x109a903fc;
              func_0x000104c4f740();
              unaff_x19 = pppppppuVar45;
              unaff_x21 = unaff_x20;
              goto LAB_109a903fc;
            }
            if (uVar42 == 4) {
              puVar26 = (undefined4 *)((long)pppppppuVar45[1] - (long)*pppppppuVar45 >> 2);
              if (puVar16 <= puVar26) {
                if (puVar16 < puVar26) {
                  pppppppuVar45[1] = (ulong ******)((long)*pppppppuVar45 + (long)puVar16 * 4);
                }
                return pppppppuVar45;
              }
              uVar25 = (long)puVar16 - (long)puVar26;
              if ((ulong)((long)pppppppuVar45[2] - (long)pppppppuVar45[1] >> 2) < uVar25) {
                func_0x000100161a40(pppppppuVar45,
                                    uVar25 + ((long)pppppppuVar45[1] - (long)*pppppppuVar45 >> 2));
                func_0x000100161bec(&stack0xffffffffffffffa8,pppppppuVar18,
                                    (long)pppppppuVar45[1] - (long)*pppppppuVar45 >> 2,
                                    pppppppuVar45 + 2);
                for (lVar24 = uVar25 * 4; lVar24 != 0; lVar24 = lVar24 + -4) {
                  *unaff_x25 = 0;
                  unaff_x25 = unaff_x25 + 1;
                }
                func_0x000100161c3c(pppppppuVar45,&stack0xffffffffffffffa8);
                pppppppuVar45 = (ulong *******)&stack0xffffffffffffffa8;
                func_0x000100161cc4(pppppppuVar45);
                return pppppppuVar45;
              }
              ppppppuVar33 = pppppppuVar45[1];
              ppppppuVar30 = (ulong ******)((long)ppppppuVar33 + uVar25 * 4);
              for (lVar24 = uVar25 * 4; lVar24 != 0; lVar24 = lVar24 + -4) {
                *(undefined4 *)ppppppuVar33 = 0;
                ppppppuVar33 = (ulong ******)((long)ppppppuVar33 + 4);
              }
              pppppppuVar45[1] = ppppppuVar30;
              return pppppppuVar45;
            }
          }
LAB_109a88b58:
          uStack_a0 = uVar25;
          FUN_109ac2700(&ppppppuStack_88,&UNK_10f59838c);
          FUN_109ac3188(0xfffffffb,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x97e);
          goto LAB_109a88b8c;
        }
        if ((int)uVar42 < 0xc) {
          puVar13 = (undefined1 *)register0x00000008;
          if (uVar42 == 6) goto code_r0x000109a90254;
          pppppppuVar44 = pppppppuVar45;
          pppppppuVar18 = unaff_x20;
          if (uVar42 != 8) goto LAB_109a88b58;
LAB_109a903fc:
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
          *(undefined4 **)((long)register0x00000008 + -0x48) = unaff_x25;
          *(undefined4 **)((long)register0x00000008 + -0x40) = unaff_x24;
          *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
          *(ulong ********)((long)register0x00000008 + -0x28) = unaff_x21;
          *(ulong ********)((long)register0x00000008 + -0x20) = pppppppuVar18;
          *(ulong ********)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(code **)((long)register0x00000008 + -8) = unaff_x30;
          unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
          unaff_x20 = (ulong *******)*pppppppuVar44;
          unaff_x21 = (ulong *******)pppppppuVar44[1];
          unaff_x22 = (long)unaff_x21 - (long)unaff_x20;
          unaff_x24 = (undefined4 *)((long)unaff_x22 >> 3);
          if (puVar16 <= unaff_x24) {
            if (unaff_x24 <= puVar16) {
              return pppppppuVar44;
            }
            pppppppuVar45 = unaff_x20 + (long)puVar16;
            pppppppuVar18 = pppppppuVar44;
LAB_109a9050c:
            pppppppuVar44[1] = (ulong ******)pppppppuVar45;
            return pppppppuVar18;
          }
          unaff_x23 = (long)puVar16 - (long)unaff_x24;
          if (unaff_x23 <= (ulong)((long)pppppppuVar44[2] - (long)unaff_x21 >> 3)) {
            pppppppuVar18 = unaff_x21;
            _bzero(unaff_x21,unaff_x23 * 8);
            pppppppuVar45 = unaff_x21 + unaff_x23;
            goto LAB_109a9050c;
          }
          pppppppuVar45 = pppppppuVar44;
          if ((ulong)puVar16 >> 0x3d == 0) {
            uVar25 = (long)pppppppuVar44[2] - (long)unaff_x20;
            unaff_x25 = (undefined4 *)((long)uVar25 >> 2);
            if (unaff_x25 <= puVar16) {
              unaff_x25 = puVar16;
            }
            if (0x7ffffffffffffff7 < uVar25) {
              unaff_x25 = (undefined4 *)0x1fffffffffffffff;
            }
            if ((ulong)unaff_x25 >> 0x3d == 0) {
              lVar24 = (long)unaff_x25 << 3;
              __Znwm();
              pppppppuVar15 = (ulong *******)(lVar24 + unaff_x22);
              pppppppuVar19 = pppppppuVar15;
              _bzero(pppppppuVar15,unaff_x23 * 8);
              pppppppuVar18 = pppppppuVar15 + -(long)unaff_x24;
              for (pppppppuVar45 = unaff_x20; pppppppuVar45 != unaff_x21;
                  pppppppuVar45 = pppppppuVar45 + 1) {
                *(undefined4 *)pppppppuVar18 = *(undefined4 *)pppppppuVar45;
                *(undefined4 *)((long)pppppppuVar18 + 4) = *(undefined4 *)((long)pppppppuVar45 + 4);
                pppppppuVar18 = pppppppuVar18 + 1;
              }
              *pppppppuVar44 = (ulong ******)(pppppppuVar15 + -(long)unaff_x24);
              pppppppuVar44[1] = (ulong ******)(pppppppuVar15 + unaff_x23);
              pppppppuVar44[2] = (ulong ******)(lVar24 + (long)unaff_x25 * 8);
              if (unaff_x20 == (ulong *******)0x0) {
                return pppppppuVar19;
              }
              goto code_r0x00010bdbd7ac;
            }
          }
          else {
            func_0x000109a9c370();
          }
          unaff_x30 = FUN_109a90530;
          func_0x000104c4f740();
          puVar13 = (undefined1 *)((long)register0x00000008 + -0x50);
          unaff_x19 = pppppppuVar44;
code_r0x000109a90530:
          register0x00000008 = (BADSPACEBASE *)(puVar13 + -0x70);
          *(undefined4 **)(puVar13 + -0x40) = unaff_x24;
          *(ulong *)(puVar13 + -0x38) = unaff_x23;
          *(ulong *)(puVar13 + -0x30) = unaff_x22;
          *(ulong ********)(puVar13 + -0x28) = unaff_x21;
          *(ulong ********)(puVar13 + -0x20) = unaff_x20;
          *(ulong ********)(puVar13 + -0x18) = unaff_x19;
          *(undefined1 **)(puVar13 + -0x10) = unaff_x29;
          *(code **)(puVar13 + -8) = unaff_x30;
          unaff_x29 = puVar13 + -0x10;
          ppppppuVar30 = *pppppppuVar45;
          unaff_x20 = (ulong *******)pppppppuVar45[1];
          unaff_x22 = (long)unaff_x20 - (long)ppppppuVar30;
          bVar14 = (undefined4 *)(((long)unaff_x22 >> 2) * -0x5555555555555555) <= puVar16;
          unaff_x21 = (ulong *******)((long)puVar16 + ((long)unaff_x22 >> 2) * 0x5555555555555555);
          if (!bVar14 || unaff_x21 == (ulong *******)0x0) {
            if (bVar14) {
              return pppppppuVar45;
            }
            ppppppuVar30 = (ulong ******)((long)ppppppuVar30 + (long)puVar16 * 0xc);
            pppppppuVar18 = pppppppuVar45;
LAB_109a906a8:
            pppppppuVar45[1] = ppppppuVar30;
            return pppppppuVar18;
          }
          if (unaff_x21 <=
              (ulong *******)(((long)pppppppuVar45[2] - (long)unaff_x20 >> 2) * -0x5555555555555555)
             ) {
            lVar24 = (((long)unaff_x21 * 0xc - 0xcU) / 0xc) * 0xc + 0xc;
            pppppppuVar18 = unaff_x20;
            _bzero(unaff_x20,lVar24);
            ppppppuVar30 = (ulong ******)((long)unaff_x20 + lVar24);
            goto LAB_109a906a8;
          }
          if (puVar16 < (undefined4 *)0x1555555555555556) {
            lVar24 = (long)pppppppuVar45[2] - (long)ppppppuVar30 >> 2;
            puVar26 = (undefined4 *)(lVar24 * 0x5555555555555556);
            if (puVar26 < puVar16 || (long)puVar26 - (long)puVar16 == 0) {
              puVar26 = puVar16;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar24 * -0x5555555555555555)) {
              puVar26 = (undefined4 *)0x1555555555555555;
            }
            *(ulong ********)(puVar13 + -0x48) = pppppppuVar45;
            pppppppuVar18 = pppppppuVar45;
            FUN_1096379e8();
            lVar24 = (long)pppppppuVar18 + unaff_x22;
            *(ulong ********)(puVar13 + -0x68) = pppppppuVar18;
            *(long *)(puVar13 + -0x60) = lVar24;
            *(long *)(puVar13 + -0x50) = (long)pppppppuVar18 + (long)puVar26 * 0xc;
            lVar37 = (((long)unaff_x21 * 0xc - 0xcU) / 0xc) * 0xc + 0xc;
            _bzero(lVar24,lVar37);
            *(long *)(puVar13 + -0x58) = lVar24 + lVar37;
            FUN_109637fbc(pppppppuVar45,puVar13 + -0x68);
            lVar24 = *(long *)(puVar13 + -0x58) - *(long *)(puVar13 + -0x60);
            if (lVar24 != 0) {
              *(ulong *)(puVar13 + -0x58) =
                   *(long *)(puVar13 + -0x58) + ((lVar24 - 0xcU) / 0xc) * -0xc + -0xc;
            }
            pppppppuVar45 = *(ulong ********)(puVar13 + -0x68);
            if (pppppppuVar45 == (ulong *******)0x0) {
              return (ulong *******)0x0;
            }
            __ZdlPv();
            return pppppppuVar45;
          }
          FUN_1096379d4();
          lVar24 = *(long *)(puVar13 + -0x58) - *(long *)(puVar13 + -0x60);
          if (lVar24 != 0) {
            *(ulong *)(puVar13 + -0x58) =
                 *(long *)(puVar13 + -0x58) + ((lVar24 - 0xcU) / 0xc) * -0xc + -0xc;
          }
          if (*(long *)(puVar13 + -0x68) != 0) {
            __ZdlPv();
          }
          unaff_x30 = FUN_109a90718;
          pppppppuVar18 = pppppppuVar45;
          __Unwind_Resume();
          unaff_x19 = pppppppuVar45;
        }
        else {
          puVar13 = (undefined1 *)register0x00000008;
          if (uVar42 == 0xc) goto code_r0x000109a90530;
          pppppppuVar18 = pppppppuVar45;
          if (uVar42 != 0x10) goto LAB_109a88b58;
        }
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(ulong ********)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong ********)((long)register0x00000008 + -0x20) = unaff_x20;
        *(ulong ********)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        ppppppuVar30 = *pppppppuVar18;
        unaff_x20 = (ulong *******)pppppppuVar18[1];
        unaff_x22 = (long)unaff_x20 - (long)ppppppuVar30;
        puVar26 = (undefined4 *)((long)unaff_x22 >> 4);
        if (puVar16 <= puVar26) {
          if (puVar26 <= puVar16) {
            return pppppppuVar18;
          }
          pppppppuVar45 = (ulong *******)(ppppppuVar30 + (long)puVar16 * 2);
          pppppppuVar44 = pppppppuVar18;
LAB_109a9080c:
          pppppppuVar18[1] = (ulong ******)pppppppuVar45;
          return pppppppuVar44;
        }
        unaff_x21 = (ulong *******)((long)puVar16 - (long)puVar26);
        if (unaff_x21 <= (ulong *******)((long)pppppppuVar18[2] - (long)unaff_x20 >> 4)) {
          pppppppuVar44 = unaff_x20;
          _bzero(unaff_x20,(long)unaff_x21 * 0x10);
          pppppppuVar45 = unaff_x20 + (long)unaff_x21 * 2;
          goto LAB_109a9080c;
        }
        if ((ulong)puVar16 >> 0x3c == 0) {
          uVar25 = (long)pppppppuVar18[2] - (long)ppppppuVar30;
          puVar26 = (undefined4 *)((long)uVar25 >> 3);
          if (puVar26 <= puVar16) {
            puVar26 = puVar16;
          }
          if (0x7fffffffffffffef < uVar25) {
            puVar26 = (undefined4 *)0xfffffffffffffff;
          }
          *(ulong ********)((long)register0x00000008 + -0x38) = pppppppuVar18;
          pppppppuVar45 = pppppppuVar18;
          FUN_1092e8fac();
          lVar24 = (long)pppppppuVar45 + unaff_x22;
          *(ulong ********)((long)register0x00000008 + -0x58) = pppppppuVar45;
          *(long *)((long)register0x00000008 + -0x50) = lVar24;
          *(ulong ********)((long)register0x00000008 + -0x40) = pppppppuVar45 + (long)puVar26 * 2;
          _bzero(lVar24,(long)unaff_x21 * 0x10);
          *(long *)((long)register0x00000008 + -0x48) = lVar24 + (long)unaff_x21 * 0x10;
          FUN_1092e8f14(pppppppuVar18,(undefined1 *)((long)register0x00000008 + -0x58));
          lVar24 = *(long *)((long)register0x00000008 + -0x48);
          if (lVar24 != *(long *)((long)register0x00000008 + -0x50)) {
            *(ulong *)((long)register0x00000008 + -0x48) =
                 lVar24 + ((*(long *)((long)register0x00000008 + -0x50) - lVar24) + 0xfU &
                          0xfffffffffffffff0);
          }
          pppppppuVar45 = *(ulong ********)((long)register0x00000008 + -0x58);
          if (pppppppuVar45 == (ulong *******)0x0) {
            return (ulong *******)0x0;
          }
          __ZdlPv();
          return pppppppuVar45;
        }
        FUN_1092e8f98();
        lVar24 = *(long *)((long)register0x00000008 + -0x48);
        if (lVar24 != *(long *)((long)register0x00000008 + -0x50)) {
          *(ulong *)((long)register0x00000008 + -0x48) =
               lVar24 + ((*(long *)((long)register0x00000008 + -0x50) - lVar24) + 0xfU &
                        0xfffffffffffffff0);
        }
        if (*(long *)((long)register0x00000008 + -0x58) != 0) {
          __ZdlPv();
        }
        unaff_x30 = FUN_109a90860;
        pppppppuVar45 = pppppppuVar18;
        __Unwind_Resume();
        puVar13 = (undefined1 *)((long)register0x00000008 + -0x60);
        unaff_x19 = pppppppuVar18;
code_r0x000109a90860:
        register0x00000008 = (BADSPACEBASE *)(puVar13 + -0x50);
        *(undefined8 *)(puVar13 + -0x50) = unaff_x26;
        *(undefined4 **)(puVar13 + -0x48) = unaff_x25;
        *(undefined4 **)(puVar13 + -0x40) = unaff_x24;
        *(ulong *)(puVar13 + -0x38) = unaff_x23;
        *(ulong *)(puVar13 + -0x30) = unaff_x22;
        *(ulong ********)(puVar13 + -0x28) = unaff_x21;
        *(ulong ********)(puVar13 + -0x20) = unaff_x20;
        *(ulong ********)(puVar13 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar13 + -0x10) = unaff_x29;
        *(code **)(puVar13 + -8) = unaff_x30;
        unaff_x29 = puVar13 + -0x10;
        unaff_x20 = (ulong *******)*pppppppuVar45;
        pppppppuVar18 = (ulong *******)pppppppuVar45[1];
        unaff_x23 = (long)pppppppuVar18 - (long)unaff_x20;
        bVar14 = (undefined4 *)(((long)unaff_x23 >> 3) * -0x5555555555555555) <= puVar16;
        unaff_x24 = (undefined4 *)((long)puVar16 + ((long)unaff_x23 >> 3) * 0x5555555555555555);
        if (!bVar14 || unaff_x24 == (undefined4 *)0x0) {
          if (bVar14) {
            return pppppppuVar45;
          }
          pppppppuVar18 = unaff_x20 + (long)puVar16 * 3;
          pppppppuVar44 = pppppppuVar45;
LAB_109a909e4:
          pppppppuVar45[1] = (ulong ******)pppppppuVar18;
          return pppppppuVar44;
        }
        if (unaff_x24 <=
            (undefined4 *)
            (((long)pppppppuVar45[2] - (long)pppppppuVar18 >> 3) * -0x5555555555555555)) {
          uVar25 = ((long)unaff_x24 * 0x18 - 0x18U) / 0x18;
          pppppppuVar44 = pppppppuVar18;
          _bzero(pppppppuVar18,uVar25 * 0x18 + 0x18);
          pppppppuVar18 = pppppppuVar18 + uVar25 * 3 + 3;
          goto LAB_109a909e4;
        }
        pppppppuVar44 = pppppppuVar45;
        if (puVar16 < (undefined4 *)0xaaaaaaaaaaaaaab) {
          lVar24 = (long)pppppppuVar45[2] - (long)unaff_x20 >> 3;
          unaff_x26 = 0xaaaaaaaaaaaaaaab;
          puVar26 = (undefined4 *)(lVar24 * 0x5555555555555556);
          if (puVar26 < puVar16 || (long)puVar26 - (long)puVar16 == 0) {
            puVar26 = puVar16;
          }
          if (0x555555555555554 < (ulong)(lVar24 * -0x5555555555555555)) {
            puVar26 = (undefined4 *)0xaaaaaaaaaaaaaaa;
          }
          if (puVar26 < (undefined4 *)0xaaaaaaaaaaaaaab) {
            ppppppuVar33 = (ulong ******)((long)puVar26 * 0x18);
            __Znwm();
            pppppppuVar15 = (ulong *******)((long)ppppppuVar33 + unaff_x23);
            uVar25 = ((long)unaff_x24 * 0x18 - 0x18U) / 0x18;
            pppppppuVar19 = pppppppuVar15;
            _bzero(pppppppuVar15,uVar25 * 0x18 + 0x18);
            ppppppuVar30 = ppppppuVar33;
            for (pppppppuVar44 = unaff_x20; pppppppuVar44 != pppppppuVar18;
                pppppppuVar44 = pppppppuVar44 + 3) {
              lVar24 = 0;
              do {
                *(undefined4 *)((long)ppppppuVar30 + lVar24) =
                     *(undefined4 *)((long)pppppppuVar44 + lVar24);
                lVar24 = lVar24 + 4;
              } while (lVar24 != 0x18);
              ppppppuVar30 = ppppppuVar30 + 3;
            }
            *pppppppuVar45 = ppppppuVar33;
            pppppppuVar45[1] = (ulong ******)(pppppppuVar15 + uVar25 * 3 + 3);
            pppppppuVar45[2] = ppppppuVar33 + (long)puVar26 * 3;
            if (unaff_x20 == (ulong *******)0x0) {
              return pppppppuVar19;
            }
            goto code_r0x00010bdbd7ac;
          }
        }
        else {
          func_0x000109a9c384();
        }
        unaff_x30 = (code *)0x109a90a08;
        func_0x000104c4f740();
        unaff_x19 = pppppppuVar45;
        unaff_x21 = unaff_x20;
LAB_109a90a08:
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined4 **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined4 **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(ulong ********)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong ********)((long)register0x00000008 + -0x20) = pppppppuVar18;
        *(ulong ********)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        unaff_x20 = (ulong *******)*pppppppuVar44;
        unaff_x21 = (ulong *******)pppppppuVar44[1];
        unaff_x22 = (long)unaff_x21 - (long)unaff_x20;
        unaff_x24 = (undefined4 *)((long)unaff_x22 >> 5);
        if (puVar16 <= unaff_x24) {
          if (unaff_x24 <= puVar16) {
            return pppppppuVar44;
          }
          pppppppuVar45 = unaff_x20 + (long)puVar16 * 4;
          pppppppuVar18 = pppppppuVar44;
LAB_109a90b20:
          pppppppuVar44[1] = (ulong ******)pppppppuVar45;
          return pppppppuVar18;
        }
        unaff_x23 = (long)puVar16 - (long)unaff_x24;
        if (unaff_x23 <= (ulong)((long)pppppppuVar44[2] - (long)unaff_x21 >> 5)) {
          pppppppuVar18 = unaff_x21;
          _bzero(unaff_x21,unaff_x23 * 0x20);
          pppppppuVar45 = unaff_x21 + unaff_x23 * 4;
          goto LAB_109a90b20;
        }
        pppppppuVar18 = pppppppuVar44;
        if ((ulong)puVar16 >> 0x3b == 0) {
          uVar25 = (long)pppppppuVar44[2] - (long)unaff_x20;
          unaff_x25 = (undefined4 *)((long)uVar25 >> 4);
          if (unaff_x25 <= puVar16) {
            unaff_x25 = puVar16;
          }
          if (0x7fffffffffffffdf < uVar25) {
            unaff_x25 = (undefined4 *)0x7ffffffffffffff;
          }
          if ((ulong)unaff_x25 >> 0x3b == 0) {
            lVar24 = (long)unaff_x25 << 5;
            __Znwm();
            pppppppuVar15 = (ulong *******)(lVar24 + unaff_x22);
            pppppppuVar19 = pppppppuVar15;
            _bzero(pppppppuVar15,unaff_x23 * 0x20);
            pppppppuVar18 = pppppppuVar15 + (long)unaff_x24 * -4;
            for (pppppppuVar45 = unaff_x20; pppppppuVar45 != unaff_x21;
                pppppppuVar45 = pppppppuVar45 + 4) {
              lVar37 = 0;
              do {
                *(undefined4 *)((long)pppppppuVar18 + lVar37) =
                     *(undefined4 *)((long)pppppppuVar45 + lVar37);
                lVar37 = lVar37 + 4;
              } while (lVar37 != 0x20);
              pppppppuVar18 = pppppppuVar18 + 4;
            }
            *pppppppuVar44 = (ulong ******)(pppppppuVar15 + (long)unaff_x24 * -4);
            pppppppuVar44[1] = (ulong ******)(pppppppuVar15 + unaff_x23 * 4);
            pppppppuVar44[2] = (ulong ******)(lVar24 + (long)unaff_x25 * 0x20);
            if (unaff_x20 == (ulong *******)0x0) {
              return pppppppuVar19;
            }
            goto code_r0x00010bdbd7ac;
          }
        }
        else {
          func_0x000109a9c398();
        }
        unaff_x30 = (code *)0x109a90b44;
        func_0x000104c4f740();
        puVar13 = (undefined1 *)((long)register0x00000008 + -0x50);
        unaff_x19 = pppppppuVar44;
LAB_109a90b44:
        register0x00000008 = (BADSPACEBASE *)(puVar13 + -0x50);
        *(undefined8 *)(puVar13 + -0x50) = unaff_x26;
        *(undefined4 **)(puVar13 + -0x48) = unaff_x25;
        *(undefined4 **)(puVar13 + -0x40) = unaff_x24;
        *(ulong *)(puVar13 + -0x38) = unaff_x23;
        *(ulong *)(puVar13 + -0x30) = unaff_x22;
        *(ulong ********)(puVar13 + -0x28) = unaff_x21;
        *(ulong ********)(puVar13 + -0x20) = unaff_x20;
        *(ulong ********)(puVar13 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar13 + -0x10) = unaff_x29;
        *(code **)(puVar13 + -8) = unaff_x30;
        unaff_x29 = puVar13 + -0x10;
        unaff_x20 = (ulong *******)*pppppppuVar18;
        pppppppuVar44 = (ulong *******)pppppppuVar18[1];
        unaff_x23 = (long)pppppppuVar44 - (long)unaff_x20;
        bVar14 = (undefined4 *)(((long)unaff_x23 >> 2) * -0x71c71c71c71c71c7) <= puVar16;
        unaff_x24 = (undefined4 *)((long)puVar16 + ((long)unaff_x23 >> 2) * 0x71c71c71c71c71c7);
        if (!bVar14 || unaff_x24 == (undefined4 *)0x0) {
          if (bVar14) {
            return pppppppuVar18;
          }
          ppppppuVar30 = (ulong ******)((long)unaff_x20 + (long)puVar16 * 0x24);
          pppppppuVar45 = pppppppuVar18;
LAB_109a90cf0:
          pppppppuVar18[1] = ppppppuVar30;
          return pppppppuVar45;
        }
        if (unaff_x24 <=
            (undefined4 *)
            (((long)pppppppuVar18[2] - (long)pppppppuVar44 >> 2) * -0x71c71c71c71c71c7)) {
          lVar24 = (((long)unaff_x24 * 0x24 - 0x24U) / 0x24) * 0x24 + 0x24;
          pppppppuVar45 = pppppppuVar44;
          _bzero(pppppppuVar44,lVar24);
          ppppppuVar30 = (ulong ******)((long)pppppppuVar44 + lVar24);
          goto LAB_109a90cf0;
        }
        pppppppuVar45 = pppppppuVar18;
        if (puVar16 < (undefined4 *)0x71c71c71c71c71d) {
          lVar24 = (long)pppppppuVar18[2] - (long)unaff_x20 >> 2;
          puVar26 = (undefined4 *)(lVar24 * 0x1c71c71c71c71c72);
          if (puVar26 < puVar16 || (long)puVar26 - (long)puVar16 == 0) {
            puVar26 = puVar16;
          }
          if (0x38e38e38e38e38d < (ulong)(lVar24 * -0x71c71c71c71c71c7)) {
            puVar26 = (undefined4 *)0x71c71c71c71c71c;
          }
          if (puVar26 < (undefined4 *)0x71c71c71c71c71d) {
            ppppppuVar33 = (ulong ******)((long)puVar26 * 0x24);
            __Znwm();
            pppppppuVar15 = (ulong *******)((long)ppppppuVar33 + unaff_x23);
            lVar24 = (((long)unaff_x24 * 0x24 - 0x24U) / 0x24) * 0x24 + 0x24;
            pppppppuVar19 = pppppppuVar15;
            _bzero(pppppppuVar15,lVar24);
            ppppppuVar30 = ppppppuVar33;
            for (pppppppuVar45 = unaff_x20; pppppppuVar45 != pppppppuVar44;
                pppppppuVar45 = (ulong *******)((long)pppppppuVar45 + 0x24)) {
              lVar37 = 0;
              do {
                *(undefined4 *)((long)ppppppuVar30 + lVar37) =
                     *(undefined4 *)((long)pppppppuVar45 + lVar37);
                lVar37 = lVar37 + 4;
              } while (lVar37 != 0x24);
              ppppppuVar30 = (ulong ******)((long)ppppppuVar30 + 0x24);
            }
            *pppppppuVar18 = ppppppuVar33;
            pppppppuVar18[1] = (ulong ******)((long)pppppppuVar15 + lVar24);
            pppppppuVar18[2] = (ulong ******)((long)ppppppuVar33 + (long)puVar26 * 0x24);
            if (unaff_x20 == (ulong *******)0x0) {
              return pppppppuVar19;
            }
            goto code_r0x00010bdbd7ac;
          }
        }
        else {
          func_0x000109a9c3ac();
        }
        unaff_x30 = (code *)0x109a90d14;
        func_0x000104c4f740();
        unaff_x19 = pppppppuVar18;
        unaff_x21 = unaff_x20;
LAB_109a90d14:
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined4 **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined4 **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(ulong ********)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong ********)((long)register0x00000008 + -0x20) = pppppppuVar44;
        *(ulong ********)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        unaff_x20 = (ulong *******)*pppppppuVar45;
        pppppppuVar18 = (ulong *******)pppppppuVar45[1];
        unaff_x23 = (long)pppppppuVar18 - (long)unaff_x20;
        bVar14 = (undefined4 *)(((long)unaff_x23 >> 4) * -0x5555555555555555) <= puVar16;
        unaff_x24 = (undefined4 *)((long)puVar16 + ((long)unaff_x23 >> 4) * 0x5555555555555555);
        if (!bVar14 || unaff_x24 == (undefined4 *)0x0) {
          if (bVar14) {
            return pppppppuVar45;
          }
          pppppppuVar18 = unaff_x20 + (long)puVar16 * 6;
          pppppppuVar44 = pppppppuVar45;
LAB_109a90e98:
          pppppppuVar45[1] = (ulong ******)pppppppuVar18;
          return pppppppuVar44;
        }
        if (unaff_x24 <=
            (undefined4 *)
            (((long)pppppppuVar45[2] - (long)pppppppuVar18 >> 4) * -0x5555555555555555)) {
          uVar25 = ((long)unaff_x24 * 0x30 - 0x30U) / 0x30;
          pppppppuVar44 = pppppppuVar18;
          _bzero(pppppppuVar18,uVar25 * 0x30 + 0x30);
          pppppppuVar18 = pppppppuVar18 + uVar25 * 6 + 6;
          goto LAB_109a90e98;
        }
        pppppppuVar44 = pppppppuVar45;
        if (puVar16 < (undefined4 *)0x555555555555556) {
          lVar24 = (long)pppppppuVar45[2] - (long)unaff_x20 >> 4;
          unaff_x26 = 0xaaaaaaaaaaaaaaab;
          puVar26 = (undefined4 *)(lVar24 * 0x5555555555555556);
          if (puVar26 < puVar16 || (long)puVar26 - (long)puVar16 == 0) {
            puVar26 = puVar16;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar24 * -0x5555555555555555)) {
            puVar26 = (undefined4 *)0x555555555555555;
          }
          if (puVar26 < (undefined4 *)0x555555555555556) {
            ppppppuVar33 = (ulong ******)((long)puVar26 * 0x30);
            __Znwm();
            pppppppuVar15 = (ulong *******)((long)ppppppuVar33 + unaff_x23);
            uVar25 = ((long)unaff_x24 * 0x30 - 0x30U) / 0x30;
            pppppppuVar19 = pppppppuVar15;
            _bzero(pppppppuVar15,uVar25 * 0x30 + 0x30);
            ppppppuVar30 = ppppppuVar33;
            for (pppppppuVar44 = unaff_x20; pppppppuVar44 != pppppppuVar18;
                pppppppuVar44 = pppppppuVar44 + 6) {
              lVar24 = 0;
              do {
                *(undefined4 *)((long)ppppppuVar30 + lVar24) =
                     *(undefined4 *)((long)pppppppuVar44 + lVar24);
                lVar24 = lVar24 + 4;
              } while (lVar24 != 0x30);
              ppppppuVar30 = ppppppuVar30 + 6;
            }
            *pppppppuVar45 = ppppppuVar33;
            pppppppuVar45[1] = (ulong ******)(pppppppuVar15 + uVar25 * 6 + 6);
            pppppppuVar45[2] = ppppppuVar33 + (long)puVar26 * 6;
            if (unaff_x20 == (ulong *******)0x0) {
              return pppppppuVar19;
            }
            goto code_r0x00010bdbd7ac;
          }
        }
        else {
          func_0x000109a9c3c0();
        }
        unaff_x30 = (code *)0x109a90ebc;
        func_0x000104c4f740();
        puVar13 = (undefined1 *)((long)register0x00000008 + -0x50);
        unaff_x19 = pppppppuVar45;
        unaff_x21 = unaff_x20;
LAB_109a90ebc:
        register0x00000008 = (BADSPACEBASE *)(puVar13 + -0x50);
        *(undefined8 *)(puVar13 + -0x50) = unaff_x26;
        *(undefined4 **)(puVar13 + -0x48) = unaff_x25;
        *(undefined4 **)(puVar13 + -0x40) = unaff_x24;
        *(ulong *)(puVar13 + -0x38) = unaff_x23;
        *(ulong *)(puVar13 + -0x30) = unaff_x22;
        *(ulong ********)(puVar13 + -0x28) = unaff_x21;
        *(ulong ********)(puVar13 + -0x20) = pppppppuVar18;
        *(ulong ********)(puVar13 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar13 + -0x10) = unaff_x29;
        *(code **)(puVar13 + -8) = unaff_x30;
        unaff_x29 = puVar13 + -0x10;
        unaff_x20 = (ulong *******)*pppppppuVar44;
        unaff_x21 = (ulong *******)pppppppuVar44[1];
        unaff_x22 = (long)unaff_x21 - (long)unaff_x20;
        unaff_x24 = (undefined4 *)((long)unaff_x22 >> 6);
        if (puVar16 <= unaff_x24) {
          if (unaff_x24 <= puVar16) {
            return pppppppuVar44;
          }
          pppppppuVar45 = unaff_x20 + (long)puVar16 * 8;
          pppppppuVar18 = pppppppuVar44;
LAB_109a90fd4:
          pppppppuVar44[1] = (ulong ******)pppppppuVar45;
          return pppppppuVar18;
        }
        unaff_x23 = (long)puVar16 - (long)unaff_x24;
        if (unaff_x23 <= (ulong)((long)pppppppuVar44[2] - (long)unaff_x21 >> 6)) {
          pppppppuVar18 = unaff_x21;
          _bzero(unaff_x21,unaff_x23 * 0x40);
          pppppppuVar45 = unaff_x21 + unaff_x23 * 8;
          goto LAB_109a90fd4;
        }
        pppppppuVar45 = pppppppuVar44;
        if ((ulong)puVar16 >> 0x3a == 0) {
          uVar25 = (long)pppppppuVar44[2] - (long)unaff_x20;
          unaff_x25 = (undefined4 *)((long)uVar25 >> 5);
          if (unaff_x25 <= puVar16) {
            unaff_x25 = puVar16;
          }
          if (0x7fffffffffffffbf < uVar25) {
            unaff_x25 = (undefined4 *)0x3ffffffffffffff;
          }
          if ((ulong)unaff_x25 >> 0x3a == 0) {
            lVar24 = (long)unaff_x25 << 6;
            __Znwm();
            pppppppuVar15 = (ulong *******)(lVar24 + unaff_x22);
            pppppppuVar19 = pppppppuVar15;
            _bzero(pppppppuVar15,unaff_x23 * 0x40);
            pppppppuVar18 = pppppppuVar15 + (long)unaff_x24 * -8;
            for (pppppppuVar45 = unaff_x20; pppppppuVar45 != unaff_x21;
                pppppppuVar45 = pppppppuVar45 + 8) {
              lVar37 = 0;
              do {
                *(undefined4 *)((long)pppppppuVar18 + lVar37) =
                     *(undefined4 *)((long)pppppppuVar45 + lVar37);
                lVar37 = lVar37 + 4;
              } while (lVar37 != 0x40);
              pppppppuVar18 = pppppppuVar18 + 8;
            }
            *pppppppuVar44 = (ulong ******)(pppppppuVar15 + (long)unaff_x24 * -8);
            pppppppuVar44[1] = (ulong ******)(pppppppuVar15 + unaff_x23 * 8);
            pppppppuVar44[2] = (ulong ******)(lVar24 + (long)unaff_x25 * 0x40);
            if (unaff_x20 == (ulong *******)0x0) {
              return pppppppuVar19;
            }
            goto code_r0x00010bdbd7ac;
          }
        }
        else {
          func_0x000109a9c3d4();
        }
        unaff_x30 = (code *)0x109a90ff8;
        func_0x000104c4f740();
        unaff_x19 = pppppppuVar44;
LAB_109a90ff8:
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined4 **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined4 **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(ulong ********)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong ********)((long)register0x00000008 + -0x20) = unaff_x20;
        *(ulong ********)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        unaff_x20 = (ulong *******)*pppppppuVar45;
        unaff_x21 = (ulong *******)pppppppuVar45[1];
        unaff_x22 = (long)unaff_x21 - (long)unaff_x20;
        unaff_x24 = (undefined4 *)((long)unaff_x22 >> 7);
        if (puVar16 <= unaff_x24) {
          if (unaff_x24 <= puVar16) {
            return pppppppuVar45;
          }
          pppppppuVar18 = unaff_x20 + (long)puVar16 * 0x10;
          pppppppuVar44 = pppppppuVar45;
LAB_109a91110:
          pppppppuVar45[1] = (ulong ******)pppppppuVar18;
          return pppppppuVar44;
        }
        unaff_x23 = (long)puVar16 - (long)unaff_x24;
        if (unaff_x23 <= (ulong)((long)pppppppuVar45[2] - (long)unaff_x21 >> 7)) {
          pppppppuVar44 = unaff_x21;
          _bzero(unaff_x21,unaff_x23 * 0x80);
          pppppppuVar18 = unaff_x21 + unaff_x23 * 0x10;
          goto LAB_109a91110;
        }
        pppppppuVar18 = pppppppuVar45;
        if ((ulong)puVar16 >> 0x39 == 0) {
          uVar25 = (long)pppppppuVar45[2] - (long)unaff_x20;
          unaff_x25 = (undefined4 *)((long)uVar25 >> 6);
          if (unaff_x25 <= puVar16) {
            unaff_x25 = puVar16;
          }
          if (0x7fffffffffffff7f < uVar25) {
            unaff_x25 = (undefined4 *)0x1ffffffffffffff;
          }
          if ((ulong)unaff_x25 >> 0x39 == 0) {
            lVar24 = (long)unaff_x25 << 7;
            __Znwm();
            pppppppuVar15 = (ulong *******)(lVar24 + unaff_x22);
            pppppppuVar19 = pppppppuVar15;
            _bzero(pppppppuVar15,unaff_x23 * 0x80);
            pppppppuVar44 = pppppppuVar15 + (long)unaff_x24 * -0x10;
            for (pppppppuVar18 = unaff_x20; pppppppuVar18 != unaff_x21;
                pppppppuVar18 = pppppppuVar18 + 0x10) {
              lVar37 = 0;
              do {
                *(undefined4 *)((long)pppppppuVar44 + lVar37) =
                     *(undefined4 *)((long)pppppppuVar18 + lVar37);
                lVar37 = lVar37 + 4;
              } while (lVar37 != 0x80);
              pppppppuVar44 = pppppppuVar44 + 0x10;
            }
            *pppppppuVar45 = (ulong ******)(pppppppuVar15 + (long)unaff_x24 * -0x10);
            pppppppuVar45[1] = (ulong ******)(pppppppuVar15 + unaff_x23 * 0x10);
            pppppppuVar45[2] = (ulong ******)(lVar24 + (long)unaff_x25 * 0x80);
            if (unaff_x20 == (ulong *******)0x0) {
              return pppppppuVar19;
            }
            goto code_r0x00010bdbd7ac;
          }
        }
        else {
          func_0x000109a9c3e8();
        }
        unaff_x30 = (code *)0x109a91134;
        func_0x000104c4f740();
        puVar13 = (undefined1 *)((long)register0x00000008 + -0x50);
        unaff_x19 = pppppppuVar45;
LAB_109a91134:
        register0x00000008 = (BADSPACEBASE *)(puVar13 + -0x50);
        *(undefined8 *)(puVar13 + -0x50) = unaff_x26;
        *(undefined4 **)(puVar13 + -0x48) = unaff_x25;
        *(undefined4 **)(puVar13 + -0x40) = unaff_x24;
        *(ulong *)(puVar13 + -0x38) = unaff_x23;
        *(ulong *)(puVar13 + -0x30) = unaff_x22;
        *(ulong ********)(puVar13 + -0x28) = unaff_x21;
        *(ulong ********)(puVar13 + -0x20) = unaff_x20;
        *(ulong ********)(puVar13 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar13 + -0x10) = unaff_x29;
        *(code **)(puVar13 + -8) = unaff_x30;
        unaff_x29 = puVar13 + -0x10;
        unaff_x20 = (ulong *******)*pppppppuVar18;
        unaff_x21 = (ulong *******)pppppppuVar18[1];
        unaff_x22 = (long)unaff_x21 - (long)unaff_x20;
        unaff_x24 = (undefined4 *)((long)unaff_x22 >> 8);
        if (puVar16 <= unaff_x24) {
          if (unaff_x24 <= puVar16) {
            return pppppppuVar18;
          }
          pppppppuVar45 = unaff_x20 + (long)puVar16 * 0x20;
          pppppppuVar44 = pppppppuVar18;
LAB_109a9124c:
          pppppppuVar18[1] = (ulong ******)pppppppuVar45;
          return pppppppuVar44;
        }
        unaff_x23 = (long)puVar16 - (long)unaff_x24;
        if (unaff_x23 <= (ulong)((long)pppppppuVar18[2] - (long)unaff_x21 >> 8)) {
          pppppppuVar44 = unaff_x21;
          _bzero(unaff_x21,unaff_x23 * 0x100);
          pppppppuVar45 = unaff_x21 + unaff_x23 * 0x20;
          goto LAB_109a9124c;
        }
        pppppppuVar45 = pppppppuVar18;
        if ((ulong)puVar16 >> 0x38 == 0) {
          uVar25 = (long)pppppppuVar18[2] - (long)unaff_x20;
          unaff_x25 = (undefined4 *)((long)uVar25 >> 7);
          if (unaff_x25 <= puVar16) {
            unaff_x25 = puVar16;
          }
          if (0x7ffffffffffffeff < uVar25) {
            unaff_x25 = (undefined4 *)0xffffffffffffff;
          }
          if ((ulong)unaff_x25 >> 0x38 == 0) {
            lVar24 = (long)unaff_x25 << 8;
            __Znwm();
            pppppppuVar15 = (ulong *******)(lVar24 + unaff_x22);
            pppppppuVar19 = pppppppuVar15;
            _bzero(pppppppuVar15,unaff_x23 * 0x100);
            pppppppuVar44 = pppppppuVar15 + (long)unaff_x24 * -0x20;
            for (pppppppuVar45 = unaff_x20; pppppppuVar45 != unaff_x21;
                pppppppuVar45 = pppppppuVar45 + 0x20) {
              lVar37 = 0;
              do {
                *(undefined4 *)((long)pppppppuVar44 + lVar37) =
                     *(undefined4 *)((long)pppppppuVar45 + lVar37);
                lVar37 = lVar37 + 4;
              } while (lVar37 != 0x100);
              pppppppuVar44 = pppppppuVar44 + 0x20;
            }
            *pppppppuVar18 = (ulong ******)(pppppppuVar15 + (long)unaff_x24 * -0x20);
            pppppppuVar18[1] = (ulong ******)(pppppppuVar15 + unaff_x23 * 0x20);
            pppppppuVar18[2] = (ulong ******)(lVar24 + (long)unaff_x25 * 0x100);
            if (unaff_x20 == (ulong *******)0x0) {
              return pppppppuVar19;
            }
            goto code_r0x00010bdbd7ac;
          }
        }
        else {
          func_0x000109a9c3fc();
        }
        unaff_x30 = (code *)0x109a91270;
        func_0x000104c4f740();
        unaff_x19 = pppppppuVar18;
      }
      else {
        if ((int)uVar42 < 0x40) {
          if ((int)uVar42 < 0x24) {
            puVar13 = (undefined1 *)register0x00000008;
            if (uVar42 == 0x18) goto code_r0x000109a90860;
            pppppppuVar44 = pppppppuVar45;
            pppppppuVar18 = unaff_x20;
            if (uVar42 != 0x20) goto LAB_109a88b58;
            goto LAB_109a90a08;
          }
          puVar13 = (undefined1 *)register0x00000008;
          pppppppuVar18 = pppppppuVar45;
          if (uVar42 == 0x24) goto LAB_109a90b44;
          pppppppuVar44 = unaff_x20;
          if (uVar42 != 0x30) goto LAB_109a88b58;
          goto LAB_109a90d14;
        }
        if ((int)uVar42 < 0x100) {
          puVar13 = (undefined1 *)register0x00000008;
          pppppppuVar44 = pppppppuVar45;
          pppppppuVar18 = unaff_x20;
          if (uVar42 == 0x40) goto LAB_109a90ebc;
          if (uVar42 != 0x80) goto LAB_109a88b58;
          goto LAB_109a90ff8;
        }
        puVar13 = (undefined1 *)register0x00000008;
        pppppppuVar18 = pppppppuVar45;
        if (uVar42 == 0x100) goto LAB_109a91134;
        if (uVar42 != 0x200) goto LAB_109a88b58;
      }
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined4 **)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined4 **)((long)register0x00000008 + -0x40) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong ********)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong ********)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong ********)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x20 = (ulong *******)*pppppppuVar45;
      pppppppuVar18 = (ulong *******)pppppppuVar45[1];
      lVar24 = (long)pppppppuVar18 - (long)unaff_x20;
      puVar26 = (undefined4 *)(lVar24 >> 9);
      if (puVar26 < puVar16) {
        uVar25 = (long)puVar16 - (long)puVar26;
        if ((ulong)((long)pppppppuVar45[2] - (long)pppppppuVar18 >> 9) < uVar25) {
          pppppppuVar44 = pppppppuVar45;
          if ((ulong)puVar16 >> 0x37 == 0) {
            uVar27 = (long)pppppppuVar45[2] - (long)unaff_x20;
            puVar34 = (undefined4 *)((long)uVar27 >> 8);
            if (puVar34 <= puVar16) {
              puVar34 = puVar16;
            }
            if (0x7ffffffffffffdff < uVar27) {
              puVar34 = (undefined4 *)0x7fffffffffffff;
            }
            if ((ulong)puVar34 >> 0x37 == 0) {
              lVar37 = (long)puVar34 << 9;
              __Znwm();
              pppppppuVar19 = (ulong *******)(lVar37 + lVar24);
              pppppppuVar20 = pppppppuVar19;
              _bzero(pppppppuVar19,uVar25 * 0x200);
              pppppppuVar15 = pppppppuVar19 + (long)puVar26 * -0x40;
              for (pppppppuVar44 = unaff_x20; pppppppuVar44 != pppppppuVar18;
                  pppppppuVar44 = pppppppuVar44 + 0x40) {
                lVar24 = 0;
                do {
                  *(undefined4 *)((long)pppppppuVar15 + lVar24) =
                       *(undefined4 *)((long)pppppppuVar44 + lVar24);
                  lVar24 = lVar24 + 4;
                } while (lVar24 != 0x200);
                pppppppuVar15 = pppppppuVar15 + 0x40;
              }
              *pppppppuVar45 = (ulong ******)(pppppppuVar19 + (long)puVar26 * -0x40);
              pppppppuVar45[1] = (ulong ******)(pppppppuVar19 + uVar25 * 0x40);
              pppppppuVar45[2] = (ulong ******)(lVar37 + (long)puVar34 * 0x200);
              if (unaff_x20 == (ulong *******)0x0) {
                return pppppppuVar20;
              }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)(unaff_x20);
              return unaff_x20;
            }
          }
          else {
            func_0x000109a9c410();
          }
          func_0x000104c4f740();
          *(ulong ********)((long)register0x00000008 + -0x70) = unaff_x20;
          *(ulong ********)((long)register0x00000008 + -0x68) = pppppppuVar45;
          *(undefined1 **)((long)register0x00000008 + -0x60) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(code **)((long)register0x00000008 + -0x58) = FUN_109a913ac;
          if ((*(uint *)pppppppuVar44 & 0x1f0000) == 0x10000) {
            if ((*(uint *)pppppppuVar44 >> 0x1e & 1) != 0) {
              puVar16 = (undefined4 *)0x14;
              func_0x000107c2ae8c();
              *puVar16 = 1;
              *(undefined8 *)(puVar16 + 1) = 0x6953646578696621;
              *(undefined4 **)((long)register0x00000008 + -0x80) = puVar16 + 1;
              *(undefined8 *)((long)register0x00000008 + -0x78) = 0xc;
              *(undefined1 *)(puVar16 + 4) = 0;
              puVar16[3] = 0x2928657a;
              FUN_109ac3188(0xffffff29,(undefined1 *)((long)register0x00000008 + -0x80),
                            &UNK_10f59845f,&UNK_10f597913,0xa54);
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x109a9145c);
              (*pcVar12)();
            }
            pppppppuVar44 = (ulong *******)pppppppuVar44[1];
            *(long *)((long)register0x00000008 + -0x80) = lVar24;
            *(ulong ********)((long)register0x00000008 + -0x78) = pppppppuVar18;
            *(undefined8 *)((long)register0x00000008 + -0x70) =
                 *(undefined8 *)((long)register0x00000008 + -0x70);
            *(undefined8 *)((long)register0x00000008 + -0x68) =
                 *(undefined8 *)((long)register0x00000008 + -0x68);
            *(undefined8 *)((long)register0x00000008 + -0x60) =
                 *(undefined8 *)((long)register0x00000008 + -0x60);
            *(undefined8 *)((long)register0x00000008 + -0x58) =
                 *(undefined8 *)((long)register0x00000008 + -0x58);
            ppppppuVar30 = pppppppuVar44[8];
            iVar23 = *(int *)ppppppuVar30;
            pppppppuVar45 = pppppppuVar44;
            if (-iVar23 != 0) {
              if ((*(char *)((long)pppppppuVar44 + 1) < '\0') ||
                 (pppppuVar29 = *pppppppuVar44[9], pppppppuVar44[5] < pppppppuVar44[2])) {
                FUN_109a859f0(pppppppuVar44,0);
                ppppppuVar30 = pppppppuVar44[8];
                pppppuVar29 = *pppppppuVar44[9];
              }
              *(int *)ppppppuVar30 = 0;
              pppppppuVar44[4] =
                   (ulong ******)((long)pppppppuVar44[4] + (long)pppppuVar29 * (long)-iVar23);
            }
            return pppppppuVar45;
          }
          *(long *)((long)register0x00000008 + -0x80) = lVar24;
          *(ulong ********)((long)register0x00000008 + -0x78) = pppppppuVar18;
          *(undefined8 *)((long)register0x00000008 + -0x70) =
               *(undefined8 *)((long)register0x00000008 + -0x70);
          *(undefined8 *)((long)register0x00000008 + -0x68) =
               *(undefined8 *)((long)register0x00000008 + -0x68);
          *(undefined8 *)((long)register0x00000008 + -0x60) =
               *(undefined8 *)((long)register0x00000008 + -0x60);
          *(undefined8 *)((long)register0x00000008 + -0x58) =
               *(undefined8 *)((long)register0x00000008 + -0x58);
          if ((*(uint *)pppppppuVar44 >> 0x1e & 1) == 0) {
            uVar42 = *(uint *)pppppppuVar44 >> 0x10 & 0x1f;
            if (uVar42 < 7) {
              if (uVar42 < 3) {
                if (uVar42 == 0) {
                  return pppppppuVar44;
                }
                if (uVar42 == 1) {
                  pppppppuVar45 = (ulong *******)pppppppuVar44[1];
                  if (pppppppuVar45[7] != (ulong ******)0x0) {
                    piVar32 = (int *)((long)pppppppuVar45[7] + 0x14);
                    do {
                      iVar23 = *piVar32;
                      cVar6 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(piVar32,0x10);
                      if (bVar14) {
                        *piVar32 = iVar23 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (iVar23 + -1 == 0) {
                      pppppppuVar44 = pppppppuVar45;
                      func_0x000109a848d4(pppppppuVar45);
                    }
                  }
                  pppppppuVar45[7] = (ulong ******)0x0;
                  pppppppuVar45[3] = (ulong ******)0x0;
                  pppppppuVar45[2] = (ulong ******)0x0;
                  pppppppuVar45[5] = (ulong ******)0x0;
                  pppppppuVar45[4] = (ulong ******)0x0;
                  if (*(int *)((long)pppppppuVar45 + 4) < 1) {
                    return pppppppuVar44;
                  }
                  lVar24 = 0;
                  ppppppuVar30 = pppppppuVar45[8];
                  do {
                    *(undefined4 *)((long)ppppppuVar30 + lVar24 * 4) = 0;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 < *(int *)((long)pppppppuVar45 + 4));
                  return pppppppuVar44;
                }
              }
              else {
                if (uVar42 == 3) {
                  *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
                  FUN_109a8ee3c();
                  return pppppppuVar44;
                }
                if (uVar42 == 4) {
                  pppppppuVar18 = (ulong *******)pppppppuVar44[1];
                  *(undefined8 *)((long)register0x00000008 + -0x80) =
                       *(undefined8 *)((long)register0x00000008 + -0x80);
                  *(undefined8 *)((long)register0x00000008 + -0x78) =
                       *(undefined8 *)((long)register0x00000008 + -0x78);
                  *(undefined8 *)((long)register0x00000008 + -0x70) =
                       *(undefined8 *)((long)register0x00000008 + -0x70);
                  *(undefined8 *)((long)register0x00000008 + -0x68) =
                       *(undefined8 *)((long)register0x00000008 + -0x68);
                  *(undefined8 *)((long)register0x00000008 + -0x60) =
                       *(undefined8 *)((long)register0x00000008 + -0x60);
                  *(undefined8 *)((long)register0x00000008 + -0x58) =
                       *(undefined8 *)((long)register0x00000008 + -0x58);
                  ppppppuVar30 = *pppppppuVar18;
                  pppppppuVar45 = pppppppuVar18;
                  ppppppuVar33 = pppppppuVar18[1];
                  while (ppppppuVar48 = ppppppuVar33, ppppppuVar48 != ppppppuVar30) {
                    ppppppuVar33 = ppppppuVar48 + -3;
                    pppppppuVar45 = (ulong *******)*ppppppuVar33;
                    if (pppppppuVar45 != (ulong *******)0x0) {
                      ppppppuVar48[-2] = (ulong *****)pppppppuVar45;
                      __ZdlPv();
                    }
                  }
                  pppppppuVar18[1] = ppppppuVar30;
                  return pppppppuVar45;
                }
                if (uVar42 == 5) {
                  ppppppuVar30 = pppppppuVar44[1];
                  pppppppuVar45 = (ulong *******)*ppppppuVar30;
                  pppppppuVar18 = (ulong *******)ppppppuVar30[1];
                  while (pppppppuVar18 != pppppppuVar45) {
                    pppppppuVar18 = pppppppuVar18 + -0xc;
                    pppppppuVar44 = pppppppuVar18;
                    FUN_109370334(pppppppuVar18);
                  }
                  ppppppuVar30[1] = (ulong *****)pppppppuVar45;
                  return pppppppuVar44;
                }
              }
            }
            else {
              if (uVar42 < 10) {
                return pppppppuVar44;
              }
              if (uVar42 == 10) {
                ppppppuVar30 = pppppppuVar44[1];
                if (ppppppuVar30[4] != (ulong *****)0x0) {
                  pppppuVar29 = ppppppuVar30[4] + 2;
                  do {
                    iVar23 = *(int *)pppppuVar29;
                    cVar6 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(pppppuVar29,0x10);
                    if (bVar14) {
                      *(int *)pppppuVar29 = iVar23 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar23 + -1 == 0) {
                    pppppppuVar44 = (ulong *******)ppppppuVar30[4][1];
                    (*(code *)(*pppppppuVar44)[4])();
                    ppppppuVar30[4] = (ulong *****)0x0;
                  }
                }
                if (0 < *(int *)((long)ppppppuVar30 + 4)) {
                  lVar24 = 0;
                  pppppuVar29 = ppppppuVar30[6];
                  do {
                    *(undefined4 *)((long)pppppuVar29 + lVar24 * 4) = 0;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 < *(int *)((long)ppppppuVar30 + 4));
                }
                ppppppuVar30[4] = (ulong *****)0x0;
                return pppppppuVar44;
              }
              if (uVar42 == 0xb) {
                ppppppuVar30 = pppppppuVar44[1];
                pppppppuVar45 = (ulong *******)*ppppppuVar30;
                pppppppuVar18 = (ulong *******)ppppppuVar30[1];
                while (pppppppuVar18 != pppppppuVar45) {
                  pppppppuVar18 = pppppppuVar18 + -10;
                  FUN_109ac5638();
                }
                ppppppuVar30[1] = (ulong *****)pppppppuVar45;
                return pppppppuVar18;
              }
              if (uVar42 == 0xd) {
                pppppppuVar44[1][1] = *pppppppuVar44[1];
                return pppppppuVar44;
              }
            }
            puVar16 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar16 = 1;
            *(undefined4 **)((long)register0x00000008 + -0x90) = puVar16 + 1;
            *(undefined8 *)((long)register0x00000008 + -0x88) = 0x1e;
            *(undefined1 *)((long)puVar16 + 0x22) = 0;
            *(undefined8 *)(puVar16 + 3) = 0x726f707075736e75;
            *(undefined8 *)(puVar16 + 1) = 0x2f6e776f6e6b6e55;
            *(undefined8 *)((long)puVar16 + 0x1a) = 0x6570797420796172;
            *(undefined8 *)((long)puVar16 + 0x12) = 0x726120646574726f;
            FUN_109ac3188(0xffffff2b,(undefined1 *)((long)register0x00000008 + -0x90),&DAT_10f598457
                          ,&UNK_10f597913,0xa4b);
          }
          else {
            puVar16 = (undefined4 *)0x14;
            func_0x000107c2ae8c();
            *puVar16 = 1;
            *(undefined8 *)(puVar16 + 1) = 0x6953646578696621;
            *(undefined4 **)((long)register0x00000008 + -0x90) = puVar16 + 1;
            *(undefined8 *)((long)register0x00000008 + -0x88) = 0xc;
            *(undefined1 *)(puVar16 + 4) = 0;
            puVar16[3] = 0x2928657a;
            FUN_109ac3188(0xffffff29,(undefined1 *)((long)register0x00000008 + -0x90),&DAT_10f598457
                          ,&UNK_10f597913,0xa0a);
          }
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
          (*pcVar12)();
        }
        pppppppuVar44 = pppppppuVar18;
        _bzero(pppppppuVar18,uVar25 * 0x200);
        pppppppuVar18 = pppppppuVar18 + uVar25 * 0x40;
      }
      else {
        if (puVar26 <= puVar16) {
          return pppppppuVar45;
        }
        pppppppuVar18 = unaff_x20 + (long)puVar16 * 0x40;
        pppppppuVar44 = pppppppuVar45;
      }
      pppppppuVar45[1] = (ulong ******)pppppppuVar18;
      return pppppppuVar44;
    }
  }
  puVar16 = (undefined4 *)0x4c;
  func_0x000107c2ae8c();
  *puVar16 = 1;
  ppppppuStack_88 = (ulong ******)(puVar16 + 1);
  ppppppuStack_80 = (ulong ******)0x44;
  *(undefined8 *)(puVar16 + 3) = 0x73657a6973282026;
  *(undefined8 *)(puVar16 + 1) = 0x262032203d3d2064;
  *(undefined8 *)(puVar16 + 7) = 0x657a6973207c7c20;
  *(undefined8 *)(puVar16 + 5) = 0x31203d3d205d305b;
  *(undefined8 *)(puVar16 + 0xb) = 0x7a6973207c7c2031;
  *(undefined8 *)(puVar16 + 9) = 0x203d3d205d315b73;
  *(undefined1 *)(puVar16 + 0x12) = 0;
  puVar16[0x11] = 0x2930203d;
  *(undefined8 *)(puVar16 + 0xf) = 0x3d205d315b73657a;
  *(undefined8 *)(puVar16 + 0xd) = 0x69732a5d305b7365;
  FUN_109ac3188(0xffffff29,&ppppppuStack_88,&DAT_10f68efec,&UNK_10f597913,0x933);
LAB_109a88b8c:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x109a88b90);
  (*pcVar12)();
}



/* Entry: 109a890bc; end: 109a895cf;  */

void FUN_109a890bc(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uVar15 = *(undefined8 *)param_2;
  uVar18 = *(undefined8 *)(param_2 + 6);
  uVar17 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)param_1 = uVar15;
  *(undefined8 *)(param_1 + 6) = uVar18;
  *(undefined8 *)(param_1 + 4) = uVar17;
  lVar12 = *(long *)(param_2 + 0xe);
  uVar17 = *(undefined8 *)(param_2 + 8);
  uVar19 = *(undefined8 *)(param_2 + 0xe);
  uVar18 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar17;
  *(undefined8 *)(param_1 + 0xe) = uVar19;
  *(undefined8 *)(param_1 + 0xc) = uVar18;
  puVar14 = param_1 + 0x14;
  puVar14[0] = 0;
  puVar14[1] = 0;
  *(uint **)(param_1 + 0x10) = param_1 + 2;
  *(uint **)(param_1 + 0x12) = puVar14;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (lVar12 == 0) {
    uVar16 = (uint)((ulong)uVar15 >> 0x20);
  }
  else {
    piVar1 = (int *)(lVar12 + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar16 = param_2[1];
  }
  iVar11 = ((uint)uVar15 >> 3 & 0x1ff) + 1;
  if (2 < (int)uVar16) {
    param_1[1] = 0;
    func_0x000109a84868(param_1,param_2);
    uVar16 = param_2[1];
    if (((param_4 == 0) && (param_3 != 0)) && (2 < (int)uVar16)) {
      uVar10 = (ulong)(uVar16 - 1);
      iVar2 = *(int *)(*(long *)(param_2 + 0x10) + uVar10 * 4) * iVar11;
      iVar4 = 0;
      if (param_3 != 0) {
        iVar4 = iVar2 / param_3;
      }
      if (iVar2 - iVar4 * param_3 == 0) {
        uVar16 = *param_1;
        uVar3 = param_3 * 8 - 8;
        *param_1 = uVar16 & 0xfffff007 | uVar3;
        *(ulong *)(*(long *)(param_1 + 0x12) + uVar10 * 8) =
             (ulong)((uVar3 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar16 & 7) << 1) & 3))
        ;
        iVar2 = 0;
        if (param_3 != 0) {
          iVar2 = (*(int *)(*(long *)(param_1 + 0x10) + uVar10 * 4) * iVar11) / param_3;
        }
        *(int *)(*(long *)(param_1 + 0x10) + uVar10 * 4) = iVar2;
        return;
      }
    }
    else if ((int)uVar16 < 3) goto LAB_109a8920c;
    puVar8 = (undefined4 *)0x10;
    func_0x000107c2ae8c();
    puStack_50 = (undefined8 *)(puVar8 + 1);
    *puStack_50 = 0x203d3c20736d6964;
    *puVar8 = 1;
    uStack_48 = 9;
    *(undefined2 *)(puVar8 + 3) = 0x32;
    FUN_109ac3188(0xffffff29,&puStack_50,&UNK_10f596393,&UNK_10f597913,0x3d6);
    goto LAB_109a89510;
  }
  puVar9 = *(undefined8 **)(param_2 + 0x12);
  puVar13 = *(undefined8 **)(param_1 + 0x12);
  *puVar13 = *puVar9;
  puVar13[1] = puVar9[1];
LAB_109a8920c:
  iVar2 = iVar11;
  if (param_3 != 0) {
    iVar2 = param_3;
  }
  iVar11 = param_2[3] * iVar11;
  if (iVar11 < iVar2) {
    if (param_4 == 0) {
LAB_109a89240:
      param_4 = 0;
      if (iVar2 != 0) {
        param_4 = (int)(param_2[2] * iVar11) / iVar2;
      }
      goto LAB_109a8924c;
    }
LAB_109a89250:
    if (param_4 != param_2[2]) {
      uVar16 = *param_2;
      if ((uVar16 >> 0xe & 1) == 0) {
        puVar8 = (undefined4 *)0x50;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar8 + 7) = 0x6874202c73756f75;
        *(undefined8 *)(puVar8 + 5) = 0x6e69746e6f632074;
        *(undefined8 *)(puVar8 + 0xb) = 0x666f207265626d75;
        *(undefined8 *)(puVar8 + 9) = 0x6e20737469207375;
        *(undefined8 *)(puVar8 + 0xf) = 0x656220746f6e206e;
        *(undefined8 *)(puVar8 + 0xd) = 0x61632073776f7220;
        *puVar8 = 1;
        puStack_50 = (undefined8 *)(puVar8 + 1);
        uStack_48 = 0x48;
        *(undefined1 *)(puVar8 + 0x13) = 0;
        *(undefined8 *)(puVar8 + 0x11) = 0x6465676e61686320;
        *(undefined8 *)(puVar8 + 3) = 0x6f6e207369207869;
        *(undefined8 *)(puVar8 + 1) = 0x7274616d20656854;
        FUN_109ac3188(0xfffffff3,&puStack_50,&UNK_10f596393,&UNK_10f597913,0x3e5);
        goto LAB_109a89510;
      }
      uVar3 = param_2[2] * iVar11;
      if (uVar3 < param_4) {
        puVar8 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar8 = 1;
        puStack_50 = (undefined8 *)(puVar8 + 1);
        uStack_48 = 0x16;
        *(undefined1 *)((long)puVar8 + 0x1a) = 0;
        *(undefined8 *)(puVar8 + 3) = 0x6f207265626d756e;
        *(undefined8 *)(puVar8 + 1) = 0x2077656e20646142;
        *(undefined8 *)((long)puVar8 + 0x12) = 0x73776f7220666f20;
        FUN_109ac3188(0xffffff2d,&puStack_50,&UNK_10f596393,&UNK_10f597913,1000);
        goto LAB_109a89510;
      }
      iVar11 = 0;
      if (param_4 != 0) {
        iVar11 = (int)uVar3 / (int)param_4;
      }
      if (iVar11 * param_4 != uVar3) {
        puVar8 = (undefined4 *)0x54;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar8 + 7) = 0x656d656c65207869;
        *(undefined8 *)(puVar8 + 5) = 0x7274616d20666f20;
        *(undefined8 *)(puVar8 + 0xb) = 0x736976696420746f;
        *(undefined8 *)(puVar8 + 9) = 0x6e2073692073746e;
        *(undefined8 *)(puVar8 + 0xf) = 0x2077656e20656874;
        *(undefined8 *)(puVar8 + 0xd) = 0x20796220656c6269;
        *(undefined8 *)((long)puVar8 + 0x4a) = 0x73776f7220666f20;
        *(undefined8 *)((long)puVar8 + 0x42) = 0x7265626d756e2077;
        *puVar8 = 1;
        puStack_50 = (undefined8 *)(puVar8 + 1);
        uStack_48 = 0x4e;
        *(undefined1 *)((long)puVar8 + 0x52) = 0;
        *(undefined8 *)(puVar8 + 3) = 0x7265626d756e206c;
        *(undefined8 *)(puVar8 + 1) = 0x61746f7420656854;
        FUN_109ac3188(0xfffffffb,&puStack_50,&UNK_10f596393,&UNK_10f597913,0x3ee);
        goto LAB_109a89510;
      }
      param_1[2] = param_4;
      **(long **)(param_1 + 0x12) =
           (long)(int)(0x88442211U >> (((ulong)uVar16 & 7) << 2) & 0xf) * (long)iVar11;
    }
  }
  else {
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar11 / iVar2;
    }
    if (iVar11 - iVar4 * iVar2 != 0 && param_4 == 0) goto LAB_109a89240;
LAB_109a8924c:
    if (param_4 != 0) goto LAB_109a89250;
  }
  uVar16 = 0;
  if (iVar2 != 0) {
    uVar16 = iVar11 / iVar2;
  }
  if (uVar16 * iVar2 == iVar11) {
    param_1[3] = uVar16;
    uVar16 = *param_1;
    uVar3 = iVar2 * 8 - 8;
    *param_1 = uVar16 & 0xfffff007 | uVar3;
    *(ulong *)(*(long *)(param_1 + 0x12) + 8) =
         (ulong)((uVar3 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar16 & 7) << 1) & 3));
    return;
  }
  puVar8 = (undefined4 *)0x44;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar8 + 3) = 0x206874646977206c;
  *(undefined8 *)(puVar8 + 1) = 0x61746f7420656854;
  *puVar8 = 1;
  puStack_50 = (undefined8 *)(puVar8 + 1);
  uStack_48 = 0x3e;
  *(undefined1 *)((long)puVar8 + 0x42) = 0;
  *(undefined8 *)(puVar8 + 7) = 0x656c626973697669;
  *(undefined8 *)(puVar8 + 5) = 0x6420746f6e207369;
  *(undefined8 *)(puVar8 + 0xb) = 0x626d756e2077656e;
  *(undefined8 *)(puVar8 + 9) = 0x2065687420796220;
  *(undefined8 *)((long)puVar8 + 0x3a) = 0x736c656e6e616863;
  *(undefined8 *)((long)puVar8 + 0x32) = 0x20666f207265626d;
  FUN_109ac3188(0xfffffff1,&puStack_50,&UNK_10f596393,&UNK_10f597913,0x3f8);
LAB_109a89510:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109a89514);
  (*pcVar7)();
}



/* Entry: 109a895d0; end: 109a89cd3;  */

void FUN_109a895d0(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  int *piStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int *piStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar6 = param_1;
  FUN_109a8b904(param_1,0xffffffff);
  puVar7 = param_1;
  FUN_109a8d7e8(param_1,0xffffffff);
  if ((int)puVar7 < 3) {
    uVar2 = ((uint)puVar6 >> 3 & 0x1ff) + 1 <<
            (ulong)(0xfa50U >> (ulong)(((uint)puVar6 & 7) << 1) & 3);
    if (uVar2 < 0x21) {
      if ((*param_1 & 0x1f0000) == 0x10000) {
        puVar9 = *(undefined8 **)(param_1 + 2);
        uStack_88 = puVar9[1];
        uStack_90 = (undefined4 *)*puVar9;
        uStack_78 = puVar9[3];
        uStack_80 = puVar9[2];
        uStack_68 = puVar9[5];
        uStack_70 = puVar9[4];
        lStack_58 = puVar9[7];
        uStack_60 = puVar9[6];
        piStack_50 = (int *)((ulong)&uStack_90 | 8);
        puStack_48 = &uStack_40;
        uStack_40 = 0;
        uStack_38 = 0;
        if (puVar9[7] != 0) {
          piVar13 = (int *)(puVar9[7] + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar4) {
              *piVar13 = *piVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (*(int *)((long)puVar9 + 4) < 3) {
          uStack_40 = *(undefined8 *)puVar9[9];
          uStack_38 = ((undefined8 *)puVar9[9])[1];
        }
        else {
          uStack_90 = (undefined4 *)((ulong)uStack_90 & 0xffffffff);
          func_0x000109a84868(&uStack_90);
        }
      }
      else {
        FUN_109a8a180(&uStack_90,param_1,0xffffffff);
      }
      if (uStack_80 != 0) {
        uVar11 = (ulong)uStack_90._4_4_;
        if ((int)uStack_90._4_4_ < 3) {
          lVar12 = (long)uStack_88._4_4_ * (long)(int)uStack_88;
        }
        else {
          lVar12 = 1;
          piVar13 = piStack_50;
          do {
            lVar12 = lVar12 * *piVar13;
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 1;
          } while (uVar11 != 0);
        }
        if (lVar12 != 0) {
          FUN_109a8f64c(param_2,uStack_88._4_4_,uStack_88 & 0xffffffff,(uint)uStack_90 & 0xfff,
                        0xffffffff,0,0);
          if ((*param_2 & 0x1f0000) == 0x10000) {
            puVar10 = *(ulong **)(param_2 + 2);
            piStack_b0 = (int *)((ulong)&uStack_f0 | 8);
            uStack_e8 = puVar10[1];
            uStack_f0 = *puVar10;
            uStack_d8 = puVar10[3];
            uStack_e0 = puVar10[2];
            uStack_c8 = puVar10[5];
            uStack_d0 = puVar10[4];
            uStack_b8 = puVar10[7];
            uStack_c0 = puVar10[6];
            puStack_a8 = &uStack_a0;
            uStack_a0 = 0;
            uStack_98 = 0;
            if (puVar10[7] != 0) {
              piVar13 = (int *)(puVar10[7] + 0x14);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                if (bVar4) {
                  *piVar13 = *piVar13 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            if (*(int *)((long)puVar10 + 4) < 3) {
              uStack_a0 = *(undefined8 *)puVar10[9];
              uStack_98 = ((undefined8 *)puVar10[9])[1];
            }
            else {
              uStack_f0 = uStack_f0 & 0xffffffff;
              func_0x000109a84868(&uStack_f0);
            }
          }
          else {
            FUN_109a8a180(&uStack_f0,param_2,0xffffffff);
          }
          if (((int)uStack_88 == uStack_e8._4_4_) && (uStack_88._4_4_ == (int)uStack_e8)) {
            uVar11 = 1L << ((ulong)uVar2 & 0x3f) & 0xfefeeea0;
            if (uStack_e0 == uStack_80) {
              if (uVar11 != 0) {
                puVar8 = (undefined4 *)0x10;
                func_0x000107c2ae8c();
                puStack_108 = (undefined8 *)(puVar8 + 1);
                *puStack_108 = 0x203d2120636e7566;
                *puVar8 = 1;
                puStack_100 = (undefined8 *)0x9;
                *(undefined2 *)(puVar8 + 3) = 0x30;
                FUN_109ac3188(0xffffff29,&puStack_108,&UNK_10f49189e,&UNK_10f597913,0xcbf);
                goto LAB_109a89bcc;
              }
              if ((int)uStack_88 != uStack_88._4_4_) {
                puVar8 = (undefined4 *)0x1c;
                func_0x000107c2ae8c();
                *puVar8 = 1;
                puStack_108 = (undefined8 *)(puVar8 + 1);
                puStack_100 = (undefined8 *)0x14;
                *(undefined1 *)(puVar8 + 6) = 0;
                puVar8[5] = 0x73776f72;
                *(undefined8 *)(puVar8 + 3) = 0x2e747364203d3d20;
                *(undefined8 *)(puVar8 + 1) = 0x736c6f632e747364;
                FUN_109ac3188(0xffffff29,&puStack_108,&UNK_10f49189e,&UNK_10f597913,0xcc0);
                goto LAB_109a89bcc;
              }
              (**(code **)(&UNK_110b22778 + (ulong)uVar2 * 8))(uStack_e0,uStack_a0);
            }
            else {
              if (uVar11 != 0) {
                puVar8 = (undefined4 *)0x10;
                func_0x000107c2ae8c();
                puStack_108 = (undefined8 *)(puVar8 + 1);
                *puStack_108 = 0x203d2120636e7566;
                *puVar8 = 1;
                puStack_100 = (undefined8 *)0x9;
                *(undefined2 *)(puVar8 + 3) = 0x30;
                FUN_109ac3188(0xffffff29,&puStack_108,&UNK_10f49189e,&UNK_10f597913,0xcc6);
                goto LAB_109a89bcc;
              }
              puStack_108 = (undefined8 *)NEON_rev64(*(undefined8 *)piStack_50,4);
              (**(code **)(&UNK_110b22880 + (ulong)uVar2 * 8))
                        (uStack_80,uStack_40,uStack_e0,uStack_a0,&puStack_108);
            }
          }
          else {
            if ((piStack_50[1] != piStack_b0[1] || *piStack_50 != *piStack_b0) ||
               (((int)uStack_88 != 1 && (uStack_88._4_4_ != 1)))) {
              puVar8 = (undefined4 *)0x44;
              func_0x000107c2ae8c();
              *puVar8 = 1;
              puStack_108 = (undefined8 *)(puVar8 + 1);
              puStack_100 = (undefined8 *)0x3c;
              *(undefined8 *)(puVar8 + 3) = 0x7364203d3d202928;
              *(undefined8 *)(puVar8 + 1) = 0x657a69732e637273;
              *(undefined1 *)(puVar8 + 0x10) = 0;
              *(undefined8 *)(puVar8 + 7) = 0x6372732820262620;
              *(undefined8 *)(puVar8 + 5) = 0x2928657a69732e74;
              *(undefined8 *)(puVar8 + 0xb) = 0x7273207c7c203120;
              *(undefined8 *)(puVar8 + 9) = 0x3d3d20736c6f632e;
              *(undefined8 *)(puVar8 + 0xe) = 0x2931203d3d207377;
              *(undefined8 *)(puVar8 + 0xc) = 0x6f722e637273207c;
              FUN_109ac3188(0xffffff29,&puStack_108,&UNK_10f49189e,&UNK_10f597913,0xcb5);
              goto LAB_109a89bcc;
            }
            puStack_108 = (undefined8 *)CONCAT44(puStack_108._4_4_,0x2010000);
            puStack_100 = &uStack_f0;
            uStack_f8 = 0;
            FUN_109a479a0(&uStack_90,&puStack_108);
          }
          if (uStack_b8 != 0) {
            piVar13 = (int *)(uStack_b8 + 0x14);
            do {
              iVar1 = *piVar13;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar4) {
                *piVar13 = iVar1 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(&uStack_f0);
            }
          }
          uStack_b8 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          if (0 < uStack_f0._4_4_) {
            lVar12 = 0;
            do {
              piStack_b0[lVar12] = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_f0._4_4_);
          }
          if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
            _free(puStack_a8[-1]);
          }
          goto LAB_109a8991c;
        }
      }
      FUN_109a8e944(param_2);
LAB_109a8991c:
      if (lStack_58 != 0) {
        piVar13 = (int *)(lStack_58 + 0x14);
        do {
          iVar1 = *piVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = iVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_90);
        }
      }
      lStack_58 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      if (0 < (int)uStack_90._4_4_) {
        lVar12 = 0;
        do {
          piStack_50[lVar12] = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)uStack_90._4_4_);
      }
      if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
        _free(puStack_48[-1]);
      }
      return;
    }
  }
  puVar8 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar8 = 1;
  uStack_90 = puVar8 + 1;
  uStack_88 = 0x1d;
  *(undefined1 *)((long)puVar8 + 0x21) = 0;
  *(undefined8 *)(puVar8 + 3) = 0x32203d3c20292873;
  *(undefined8 *)(puVar8 + 1) = 0x6d69642e6372735f;
  *(undefined8 *)((long)puVar8 + 0x19) = 0x3233203d3c207a73;
  *(undefined8 *)((long)puVar8 + 0x11) = 0x652026262032203d;
  FUN_109ac3188(0xffffff29,&uStack_90,&UNK_10f49189e,&UNK_10f597913,0xca3);
LAB_109a89bcc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a89bd0);
  (*pcVar5)();
}



/* Entry: 109a89cd4; end: 109a89dc7;  */

ulong FUN_109a89cd4(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  uint uVar6;
  
  uVar2 = *param_1;
  if (((0 < (int)param_3) && ((uVar2 & 7) != param_3)) ||
     ((param_4 != 0 && ((uVar2 >> 0xe & 1) == 0)))) {
    return 0xffffffff;
  }
  if (param_1[1] == 3) {
    if ((uVar2 & 0xff8) != 0) {
      return 0xffffffff;
    }
    piVar5 = *(int **)(param_1 + 0x10);
    if (piVar5[2] != param_2) {
      return 0xffffffff;
    }
    if ((*piVar5 != 1) && (piVar5[1] != 1)) {
      return 0xffffffff;
    }
    if (((uVar2 >> 0xe & 1) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x12) + 8) !=
        *(long *)(*(long *)(param_1 + 0x12) + 0x10) * (long)(int)param_2)) {
      return 0xffffffff;
    }
    lVar4 = (long)*piVar5 * (long)piVar5[1] * (long)(int)param_2;
  }
  else {
    if (param_1[1] != 2) {
      return 0xffffffff;
    }
    uVar1 = param_1[3];
    if (((param_1[2] != 1) && (uVar1 != 1)) || (uVar6 = uVar1, (uVar2 >> 3 & 0x1ff) + 1 != param_2))
    {
      if ((uVar2 & 0xff8) != 0) {
        return 0xffffffff;
      }
      uVar6 = param_2;
      if (uVar1 != param_2) {
        return 0xffffffff;
      }
    }
    lVar4 = (long)(int)param_1[2] * (long)(int)uVar6;
  }
  uVar3 = 0;
  if ((long)(int)param_2 != 0) {
    uVar3 = (lVar4 + lVar4 * ((ulong)(uVar2 >> 3) & 0x1ff)) / (ulong)(long)(int)param_2;
  }
  return uVar3;
}



/* Entry: 109a89dc8; end: 109a8a17f;  */

void FUN_109a89dc8(double *param_1,double *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  double *pdVar9;
  ulong uVar10;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_3 >> 3 & 0x1ff;
  if (3 < uVar2) {
    puVar4 = (undefined8 *)0xc;
    func_0x000107c2ae8c();
    *puVar4 = 0x3c206e6300000001;
    puStack_30 = (undefined4 *)((long)puVar4 + 4);
    uStack_28 = 7;
    *(undefined1 *)((long)puVar4 + 0xb) = 0;
    *(undefined4 *)((long)puVar4 + 7) = 0x34203d3c;
    FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f597c85,&UNK_10f597913,0x41c);
LAB_109a8a120:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109a8a124);
    (*pcVar3)();
  }
  uVar2 = uVar2 + 1;
  uVar6 = (ulong)uVar2;
  uVar1 = param_3 & 7;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      pdVar9 = param_2;
      uVar10 = uVar6;
      if ((param_3 & 7) == 0) {
        do {
          uVar1 = (uint)(long)(double)(long)*param_1 &
                  ((int)(uint)(long)(double)(long)*param_1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar1) {
            uVar1 = 0xff;
          }
          *(char *)pdVar9 = (char)uVar1;
          uVar10 = uVar10 - 1;
          param_1 = param_1 + 1;
          pdVar9 = (double *)((long)pdVar9 + 1);
        } while (uVar10 != 0);
        if ((int)uVar2 < (int)param_4) {
          lVar8 = 0;
          do {
            *(undefined1 *)((long)param_2 + uVar6) = *(undefined1 *)((long)param_2 + lVar8);
            uVar6 = uVar6 + 1;
            lVar8 = lVar8 + 1;
          } while (uVar6 < param_4);
        }
      }
      else {
        do {
          iVar7 = (int)(long)(double)(long)*param_1;
          if (iVar7 < -0x7f) {
            iVar7 = -0x80;
          }
          if (0x7e < iVar7) {
            iVar7 = 0x7f;
          }
          *(char *)pdVar9 = (char)iVar7;
          uVar10 = uVar10 - 1;
          param_1 = param_1 + 1;
          pdVar9 = (double *)((long)pdVar9 + 1);
        } while (uVar10 != 0);
        if ((int)uVar2 < (int)param_4) {
          lVar8 = 0;
          do {
            *(undefined1 *)((long)param_2 + uVar6) = *(undefined1 *)((long)param_2 + lVar8);
            uVar6 = uVar6 + 1;
            lVar8 = lVar8 + 1;
          } while (uVar6 < param_4);
        }
      }
    }
    else {
      pdVar9 = param_2;
      uVar10 = uVar6;
      if (uVar1 == 2) {
        do {
          uVar1 = (uint)(long)(double)(long)*param_1 &
                  ((int)(uint)(long)(double)(long)*param_1 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar1) {
            uVar1 = 0xffff;
          }
          *(short *)pdVar9 = (short)uVar1;
          uVar10 = uVar10 - 1;
          param_1 = param_1 + 1;
          pdVar9 = (double *)((long)pdVar9 + 2);
        } while (uVar10 != 0);
        if ((int)uVar2 < (int)param_4) {
          lVar8 = 0;
          do {
            *(undefined2 *)((long)param_2 + uVar6 * 2) = *(undefined2 *)((long)param_2 + lVar8);
            uVar6 = uVar6 + 1;
            lVar8 = lVar8 + 2;
          } while (uVar6 < param_4);
        }
      }
      else {
        do {
          iVar7 = (int)(long)(double)(long)*param_1;
          if (iVar7 < -0x7fff) {
            iVar7 = -0x8000;
          }
          if (0x7ffe < iVar7) {
            iVar7 = 0x7fff;
          }
          *(short *)pdVar9 = (short)iVar7;
          uVar10 = uVar10 - 1;
          param_1 = param_1 + 1;
          pdVar9 = (double *)((long)pdVar9 + 2);
        } while (uVar10 != 0);
        if ((int)uVar2 < (int)param_4) {
          lVar8 = 0;
          do {
            *(undefined2 *)((long)param_2 + uVar6 * 2) = *(undefined2 *)((long)param_2 + lVar8);
            uVar6 = uVar6 + 1;
            lVar8 = lVar8 + 2;
          } while (uVar6 < param_4);
        }
      }
    }
  }
  else if (uVar1 < 6) {
    pdVar9 = param_2;
    uVar10 = uVar6;
    if (uVar1 == 4) {
      do {
        *(float *)pdVar9 = (float)(long)(double)(long)*param_1;
        uVar10 = uVar10 - 1;
        param_1 = param_1 + 1;
        pdVar9 = (double *)((long)pdVar9 + 4);
      } while (uVar10 != 0);
      if ((int)uVar2 < (int)param_4) {
        lVar8 = 0;
        do {
          *(float *)((long)param_2 + uVar6 * 4) = *(float *)((long)param_2 + lVar8);
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 4;
        } while (uVar6 < param_4);
      }
    }
    else {
      do {
        *(float *)pdVar9 = (float)*param_1;
        uVar10 = uVar10 - 1;
        param_1 = param_1 + 1;
        pdVar9 = (double *)((long)pdVar9 + 4);
      } while (uVar10 != 0);
      if ((int)uVar2 < (int)param_4) {
        lVar8 = 0;
        do {
          *(float *)((long)param_2 + uVar6 * 4) = *(float *)((long)param_2 + lVar8);
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 4;
        } while (uVar6 < param_4);
      }
    }
  }
  else {
    pdVar9 = param_2;
    uVar10 = uVar6;
    if (uVar1 != 6) {
      puVar5 = (undefined4 *)0x8;
      func_0x000107c2ae8c();
      *puVar5 = 1;
      puStack_30 = puVar5 + 1;
      *(undefined1 *)puStack_30 = 0;
      uStack_28 = 0;
      FUN_109ac3188(0xffffff2e,&puStack_30,&UNK_10f597c85,&UNK_10f597913,0x45f);
      goto LAB_109a8a120;
    }
    do {
      *pdVar9 = *param_1;
      uVar10 = uVar10 - 1;
      param_1 = param_1 + 1;
      pdVar9 = pdVar9 + 1;
    } while (uVar10 != 0);
    if ((int)uVar2 < (int)param_4) {
      lVar8 = 0;
      do {
        param_2[uVar6] = *(double *)((long)param_2 + lVar8);
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 8;
      } while (uVar6 < param_4);
    }
  }
  return;
}



/* Entry: 109a8a180; end: 109a8b003;  */

void FUN_109a8a180(uint *param_1,uint *param_2,ulong param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  undefined4 **ppuStack_60;
  undefined4 *puStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  uVar21 = *param_2;
  iVar19 = (int)param_3;
  switch(uVar21 >> 0x10 & 0x1f) {
  case 0:
    goto code_r0x000109a8a540;
  case 1:
    puVar12 = *(undefined8 **)(param_2 + 2);
    if (iVar19 < 0) {
      uVar22 = *puVar12;
      *(undefined8 *)(param_1 + 2) = puVar12[1];
      *(undefined8 *)param_1 = uVar22;
      uVar22 = puVar12[2];
      *(undefined8 *)(param_1 + 6) = puVar12[3];
      *(undefined8 *)(param_1 + 4) = uVar22;
      uVar22 = puVar12[4];
      *(undefined8 *)(param_1 + 10) = puVar12[5];
      *(undefined8 *)(param_1 + 8) = uVar22;
      lVar15 = puVar12[7];
      uVar22 = puVar12[6];
      *(undefined8 *)(param_1 + 0xe) = puVar12[7];
      *(undefined8 *)(param_1 + 0xc) = uVar22;
      puVar11 = param_1 + 0x14;
      puVar11[0] = 0;
      puVar11[1] = 0;
      *(uint **)(param_1 + 0x10) = param_1 + 2;
      *(uint **)(param_1 + 0x12) = puVar11;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      if (lVar15 != 0) {
        piVar1 = (int *)(lVar15 + 0x14);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = *piVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      goto code_r0x000109a8a79c;
    }
    uStack_a8 = (undefined4 *)CONCAT44(iVar19 + 1,iVar19);
    uStack_b0 = 0x7fffffff80000000;
    FUN_109a84930(param_1,puVar12,&uStack_a8,&uStack_b0);
    break;
  case 2:
    if (-1 < iVar19) {
      puVar12 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar12 = 0x203c206900000001;
      uStack_a8 = (undefined4 *)((long)puVar12 + 4);
      uStack_a0 = 5;
      *(undefined2 *)(puVar12 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f597c9b,&UNK_10f597913,0x485);
      goto LAB_109a8adfc;
    }
    uVar6 = param_2[4];
    uVar5 = param_2[5];
    lVar15 = *(long *)(param_2 + 2);
    *param_1 = uVar21 & 0xfff | 0x42ff0000;
    param_1[1] = 2;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    *(long *)(param_1 + 4) = lVar15;
    *(long *)(param_1 + 6) = lVar15;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    puVar11 = param_1 + 0x14;
    puVar11[0] = 0;
    puVar11[1] = 0;
    *(uint **)(param_1 + 0x10) = param_1 + 2;
    *(uint **)(param_1 + 0x12) = puVar11;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if ((lVar15 == 0) && ((long)(int)uVar5 * (long)(int)uVar6 != 0)) {
      puVar13 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar13 = 1;
      uStack_a8 = puVar13 + 1;
      uStack_a0 = 0x1c;
      *(undefined1 *)(puVar13 + 8) = 0;
      *(undefined8 *)(puVar13 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar13 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar13 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar13 + 4) = 0x61746164207c7c20;
      FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f2e8162,&UNK_10f594bc9,0x1bb);
      goto LAB_109a8adfc;
    }
    uVar7 = (uVar21 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar21 & 7) << 1) & 3);
    lVar16 = (long)(int)uVar6 * (long)(int)uVar7;
    *param_1 = uVar21 & 0xfff | 0x42ff4000;
    *(long *)(param_1 + 0x14) = lVar16;
    *(ulong *)(param_1 + 0x16) = (ulong)uVar7;
    lVar15 = lVar15 + lVar16 * (int)uVar5;
code_r0x000109a8a538:
    *(long *)(param_1 + 8) = lVar15;
    *(long *)(param_1 + 10) = lVar15;
    break;
  case 3:
    if (-1 < iVar19) {
      puVar12 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar12 = 0x203c206900000001;
      uStack_a8 = (undefined4 *)((long)puVar12 + 4);
      uStack_a0 = 5;
      *(undefined2 *)(puVar12 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f597c9b,&UNK_10f597913,0x48b);
      goto LAB_109a8adfc;
    }
    plVar18 = *(long **)(param_2 + 2);
    if (*plVar18 != plVar18[1]) {
      FUN_109a8b004(&uStack_b0,param_2,0xffffffff);
      uVar6 = uVar21 & 0xfff;
      lVar15 = *plVar18;
      *param_1 = uVar6 | 0x42ff0000;
      param_1[1] = 2;
      param_1[2] = uStack_b0._4_4_;
      param_1[3] = (uint)uStack_b0;
      *(long *)(param_1 + 4) = lVar15;
      *(long *)(param_1 + 6) = lVar15;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      puVar11 = param_1 + 0x14;
      puVar11[0] = 0;
      puVar11[1] = 0;
      *(uint **)(param_1 + 0x10) = param_1 + 2;
      *(uint **)(param_1 + 0x12) = puVar11;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      if ((lVar15 == 0) && ((long)(int)(uint)uStack_b0 * (long)(int)uStack_b0._4_4_ != 0)) {
        puVar13 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar13 = 1;
        uStack_a8 = puVar13 + 1;
        uStack_a0 = 0x1c;
        *(undefined1 *)(puVar13 + 8) = 0;
        *(undefined8 *)(puVar13 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar13 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar13 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar13 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f2e8162,&UNK_10f594bc9,0x1bb);
        goto LAB_109a8adfc;
      }
      uVar21 = (uVar6 >> 3) + 1 << (ulong)(0xfa50U >> (ulong)((uVar21 & 7) << 1) & 3);
      lVar16 = (long)(int)(uint)uStack_b0 * (long)(int)uVar21;
      *param_1 = uVar6 | 0x42ff4000;
      *(long *)(param_1 + 0x14) = lVar16;
      *(ulong *)(param_1 + 0x16) = (ulong)uVar21;
      lVar15 = lVar15 + lVar16 * (int)uStack_b0._4_4_;
      goto code_r0x000109a8a538;
    }
    goto code_r0x000109a8a540;
  case 4:
    puVar11 = param_2;
    FUN_109a8b904(param_2,param_3);
    if ((-1 < iVar19) &&
       (lVar15 = **(long **)(param_2 + 2),
       iVar19 < (int)((ulong)((*(long **)(param_2 + 2))[1] - lVar15) >> 3) * -0x55555555)) {
      plVar18 = (long *)(lVar15 + (param_3 & 0xffffffff) * 0x18);
      if (*plVar18 != plVar18[1]) {
        FUN_109a8b004(&uStack_b0,param_2,param_3);
        lVar15 = *plVar18;
        uVar21 = (uint)puVar11;
        *param_1 = uVar21 & 0xfff | 0x42ff0000;
        param_1[1] = 2;
        param_1[2] = uStack_b0._4_4_;
        param_1[3] = (uint)uStack_b0;
        *(long *)(param_1 + 4) = lVar15;
        *(long *)(param_1 + 6) = lVar15;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        puVar11 = param_1 + 0x14;
        puVar11[0] = 0;
        puVar11[1] = 0;
        *(uint **)(param_1 + 0x10) = param_1 + 2;
        *(uint **)(param_1 + 0x12) = puVar11;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        if (lVar15 == 0 && (long)(int)(uint)uStack_b0 * (long)(int)uStack_b0._4_4_ != 0) {
          puVar13 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar13 = 1;
          uStack_a8 = puVar13 + 1;
          uStack_a0 = 0x1c;
          *(undefined1 *)(puVar13 + 8) = 0;
          *(undefined8 *)(puVar13 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar13 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar13 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar13 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f2e8162,&UNK_10f594bc9,0x1bb);
          goto LAB_109a8adfc;
        }
        uVar6 = (uVar21 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar21 & 7) << 1) & 3);
        lVar16 = (long)(int)(uint)uStack_b0 * (long)(int)uVar6;
        *param_1 = uVar21 & 0xfff | 0x42ff4000;
        *(long *)(param_1 + 0x14) = lVar16;
        *(ulong *)(param_1 + 0x16) = (ulong)uVar6;
        lVar15 = lVar15 + lVar16 * (int)uStack_b0._4_4_;
        goto code_r0x000109a8a538;
      }
      goto code_r0x000109a8a540;
    }
    goto code_r0x000109a8a82c;
  case 5:
    if ((iVar19 < 0) ||
       (lVar15 = **(long **)(param_2 + 2),
       (int)((ulong)((*(long **)(param_2 + 2))[1] - lVar15) >> 5) * -0x55555555 <= iVar19)) {
      puVar13 = (undefined4 *)0x20;
      func_0x000107c2ae8c();
      *puVar13 = 1;
      uStack_a8 = puVar13 + 1;
      uStack_a0 = 0x1b;
      *(undefined1 *)((long)puVar13 + 0x1f) = 0;
      *(undefined8 *)(puVar13 + 3) = 0x6928203c20692026;
      *(undefined8 *)(puVar13 + 1) = 0x262069203d3c2030;
      *(undefined8 *)((long)puVar13 + 0x17) = 0x2928657a69732e76;
      *(undefined8 *)((long)puVar13 + 0xf) = 0x29746e6928203c20;
      FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f597c9b,&UNK_10f597913,0x4b1);
      goto LAB_109a8adfc;
    }
    puVar12 = (undefined8 *)(lVar15 + (param_3 & 0xffffffff) * 0x60);
    uVar22 = *puVar12;
    *(undefined8 *)(param_1 + 2) = puVar12[1];
    *(undefined8 *)param_1 = uVar22;
    uVar22 = puVar12[2];
    *(undefined8 *)(param_1 + 6) = puVar12[3];
    *(undefined8 *)(param_1 + 4) = uVar22;
    uVar22 = puVar12[4];
    *(undefined8 *)(param_1 + 10) = puVar12[5];
    *(undefined8 *)(param_1 + 8) = uVar22;
    lVar15 = puVar12[7];
    uVar22 = puVar12[6];
    *(undefined8 *)(param_1 + 0xe) = puVar12[7];
    *(undefined8 *)(param_1 + 0xc) = uVar22;
    puVar11 = param_1 + 0x14;
    puVar11[0] = 0;
    puVar11[1] = 0;
    *(uint **)(param_1 + 0x10) = param_1 + 2;
    *(uint **)(param_1 + 0x12) = puVar11;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (lVar15 != 0) {
      piVar1 = (int *)(lVar15 + 0x14);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
code_r0x000109a8a79c:
    if (*(int *)((long)puVar12 + 4) < 3) {
      puVar12 = (undefined8 *)puVar12[9];
      puVar17 = *(undefined8 **)(param_1 + 0x12);
      *puVar17 = *puVar12;
      puVar17[1] = puVar12[1];
      break;
    }
    param_1[1] = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_48) {
      FUN_109a844cc(param_1,*(undefined4 *)((long)puVar12 + 4),0,0,0);
      if (0 < (int)param_1[1]) {
        lVar15 = 0;
        lVar16 = puVar12[8];
        lVar2 = puVar12[9];
        lVar4 = *(long *)(param_1 + 0x10);
        lVar3 = *(long *)(param_1 + 0x12);
        do {
          *(undefined4 *)(lVar4 + lVar15 * 4) = *(undefined4 *)(lVar16 + lVar15 * 4);
          *(undefined8 *)(lVar3 + lVar15 * 8) = *(undefined8 *)(lVar2 + lVar15 * 8);
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)param_1[1]);
      }
      return;
    }
    goto code_r0x000109a8a828;
  case 6:
    if (-1 < iVar19) {
      puVar12 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar12 = 0x203c206900000001;
      uStack_a8 = (undefined4 *)((long)puVar12 + 4);
      uStack_a0 = 5;
      *(undefined2 *)(puVar12 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f597c9b,&UNK_10f597913,0x47f);
      goto LAB_109a8adfc;
    }
    puVar12 = *(undefined8 **)(param_2 + 2);
    *param_1 = 0x42ff0000;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar11 = param_1 + 0x14;
    puVar11[0] = 0;
    puVar11[1] = 0;
    *(uint **)(param_1 + 0x10) = param_1 + 2;
    *(uint **)(param_1 + 0x12) = puVar11;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    plVar18 = (long *)*puVar12;
    (**(code **)(*plVar18 + 0x18))(plVar18,puVar12,param_1,0xffffffff);
    break;
  case 7:
    if (iVar19 < 0) {
      puVar13 = (undefined4 *)0x50;
      func_0x000107c2ae8c();
      *puVar13 = 1;
      uStack_a8 = puVar13 + 1;
      uStack_a0 = 0x4b;
      *(undefined8 *)(puVar13 + 7) = 0x6f4870616d206c6c;
      *(undefined8 *)(puVar13 + 5) = 0x616320796c746963;
      *(undefined8 *)(puVar13 + 0xb) = 0x74656d2074736f48;
      *(undefined8 *)(puVar13 + 9) = 0x70616d6e752f7473;
      *(undefined8 *)(puVar13 + 0xf) = 0x75423a3a6c676f20;
      *(undefined8 *)(puVar13 + 0xd) = 0x726f662073646f68;
      *(undefined8 *)((long)puVar13 + 0x47) = 0x7463656a626f2072;
      *(undefined8 *)((long)puVar13 + 0x3f) = 0x65666675423a3a6c;
      *(undefined1 *)((long)puVar13 + 0x4f) = 0;
      *(undefined8 *)(puVar13 + 3) = 0x696c70786520646c;
      *(undefined8 *)(puVar13 + 1) = 0x756f687320756f59;
      FUN_109ac3188(0xffffff2b,&uStack_a8,&UNK_10f597c9b,&UNK_10f597913,0x4c1);
    }
    else {
      puVar12 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar12 = 0x203c206900000001;
      uStack_a8 = (undefined4 *)((long)puVar12 + 4);
      uStack_a0 = 5;
      *(undefined2 *)(puVar12 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f597c9b,&UNK_10f597913,0x4c0);
    }
    goto LAB_109a8adfc;
  case 8:
    if (-1 < iVar19) {
      puVar12 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar12 = 0x203c206900000001;
      uStack_a8 = (undefined4 *)((long)puVar12 + 4);
      uStack_a0 = 5;
      *(undefined2 *)(puVar12 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f597c9b,&UNK_10f597913,0x4ce);
      goto LAB_109a8adfc;
    }
    puVar11 = *(uint **)(param_2 + 2);
    uStack_a8 = (undefined4 *)NEON_rev64(*(undefined8 *)(puVar11 + 1),4);
    FUN_1094c84f4(param_1,&uStack_a8,*puVar11 & 0xfff,*(undefined8 *)(puVar11 + 6),
                  *(undefined8 *)(puVar11 + 4));
    break;
  case 9:
    if (iVar19 < 0) {
      puVar13 = (undefined4 *)0x48;
      func_0x000107c2ae8c();
      *puVar13 = 1;
      uStack_a8 = puVar13 + 1;
      uStack_a0 = 0x42;
      *(undefined8 *)(puVar13 + 3) = 0x696c70786520646c;
      *(undefined8 *)(puVar13 + 1) = 0x756f687320756f59;
      *(undefined8 *)(puVar13 + 7) = 0x6c6e776f64206c6c;
      *(undefined8 *)(puVar13 + 5) = 0x616320796c746963;
      *(undefined8 *)(puVar13 + 0xb) = 0x6320726f6620646f;
      *(undefined8 *)(puVar13 + 9) = 0x6874656d2064616f;
      *(undefined1 *)((long)puVar13 + 0x46) = 0;
      *(undefined2 *)(puVar13 + 0x11) = 0x7463;
      *(undefined8 *)(puVar13 + 0xf) = 0x656a626f2074614d;
      *(undefined8 *)(puVar13 + 0xd) = 0x7570473a3a616475;
      FUN_109ac3188(0xffffff2b,&uStack_a8,&UNK_10f597c9b,&UNK_10f597913,0x4c8);
    }
    else {
      puVar12 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar12 = 0x203c206900000001;
      uStack_a8 = (undefined4 *)((long)puVar12 + 4);
      uStack_a0 = 5;
      *(undefined2 *)(puVar12 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f597c9b,&UNK_10f597913,0x4c7);
    }
    goto LAB_109a8adfc;
  case 10:
    puVar11 = *(uint **)(param_2 + 2);
    if (-1 < iVar19) {
      FUN_109ac6640(&uStack_a8,puVar11,uVar21 & 0x3000000);
      uStack_b0 = CONCAT44(iVar19 + 1,iVar19);
      uStack_b8 = 0x7fffffff80000000;
      FUN_109a84930(param_1,&uStack_a8,&uStack_b0,&uStack_b8);
      if (lStack_70 != 0) {
        piVar1 = (int *)(lStack_70 + 0x14);
        do {
          iVar19 = *piVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar19 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar19 + -1 == 0) {
          func_0x000109a848d4(&uStack_a8);
        }
      }
      lStack_70 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      if (0 < uStack_a8._4_4_) {
        lVar15 = 0;
        do {
          *(undefined4 *)(lStack_68 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < uStack_a8._4_4_);
      }
      if (ppuStack_60 != &puStack_58 && ppuStack_60 != (undefined4 **)0x0) {
        _free(ppuStack_60[-1]);
      }
      break;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_48) {
code_r0x000109a8a72c:
      uVar20 = *(ulong *)(puVar11 + 8);
      if (uVar20 == 0) {
        *param_1 = 0x42ff0000;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        puVar11 = param_1 + 0x14;
        puVar11[0] = 0;
        puVar11[1] = 0;
        *(uint **)(param_1 + 0x10) = param_1 + 2;
        *(uint **)(param_1 + 0x12) = puVar11;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
      }
      else {
        uStack_48 = uVar20;
        FUN_109ac437c();
        _pthread_mutex_lock(*(undefined8 *)((uVar20 % 0x1f) * 8 + 0x11374c830));
        piVar1 = (int *)(*(long *)(puVar11 + 8) + 0x14);
        do {
          iVar19 = *piVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar19 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar19 == 0) {
          plVar18 = *(long **)(*(long *)(puVar11 + 8) + 8);
          (**(code **)(*plVar18 + 0x28))(plVar18,*(long *)(puVar11 + 8),0x3000000);
        }
        lVar15 = *(long *)(*(long *)(puVar11 + 8) + 0x18);
        if (lVar15 == 0) {
          piVar1 = (int *)(*(long *)(puVar11 + 8) + 0x14);
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar9) {
              *piVar1 = *piVar1 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (*(long *)(*(long *)(puVar11 + 8) + 0x18) == 0) {
            puVar13 = (undefined4 *)0x3c;
            func_0x000107c2ae8c();
            *(undefined8 *)(puVar13 + 3) = 0x2026262030203d21;
            *(undefined8 *)(puVar13 + 1) = 0x20617461643e2d75;
            *puVar13 = 1;
            puStack_58 = puVar13 + 1;
            uStack_50 = 0x37;
            *(undefined1 *)((long)puVar13 + 0x3b) = 0;
            *(undefined8 *)(puVar13 + 7) = 0x6f20676e69707061;
            *(undefined8 *)(puVar13 + 5) = 0x6d20726f72724522;
            *(undefined8 *)(puVar13 + 0xb) = 0x6d2074736f68206f;
            *(undefined8 *)(puVar13 + 9) = 0x742074614d552066;
            *(undefined8 *)((long)puVar13 + 0x33) = 0x222e79726f6d656d;
            FUN_109ac3188(0xffffff29,&puStack_58,&UNK_10f59b2f8,&UNK_10f59b211,0x2e0);
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x109ac686c);
            (*pcVar10)();
          }
          *param_1 = 0x42ff0000;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[7] = 0;
          param_1[8] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[0xb] = 0;
          param_1[0xc] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          puVar11 = param_1 + 0x14;
          puVar11[0] = 0;
          puVar11[1] = 0;
          *(uint **)(param_1 + 0x10) = param_1 + 2;
          *(uint **)(param_1 + 0x12) = puVar11;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
        }
        else {
          FUN_109a855e4(param_1,puVar11[1],*(undefined8 *)(puVar11 + 0xc),*puVar11 & 0xfff,
                        lVar15 + *(long *)(puVar11 + 10),*(undefined8 *)(puVar11 + 0xe));
          *param_1 = *puVar11;
          lVar16 = *(long *)(puVar11 + 8);
          lVar4 = *(long *)(puVar11 + 10);
          *(long *)(param_1 + 0xe) = lVar16;
          lVar15 = *(long *)(lVar16 + 0x18);
          *(long *)(param_1 + 4) = lVar15 + lVar4;
          *(long *)(param_1 + 6) = lVar15;
          lVar15 = lVar15 + *(long *)(lVar16 + 0x28);
          *(long *)(param_1 + 8) = lVar15;
          *(long *)(param_1 + 10) = lVar15;
        }
        uVar20 = uStack_48;
        FUN_109ac437c();
        _pthread_mutex_unlock(*(undefined8 *)((uVar20 % 0x1f) * 8 + 0x11374c830));
      }
      return;
    }
    goto code_r0x000109a8a828;
  case 0xb:
    if ((iVar19 < 0) ||
       (lVar15 = **(long **)(param_2 + 2),
       (int)((ulong)((*(long **)(param_2 + 2))[1] - lVar15) >> 4) * -0x33333333 <= iVar19)) {
      puVar13 = (undefined4 *)0x20;
      func_0x000107c2ae8c();
      *puVar13 = 1;
      uStack_a8 = puVar13 + 1;
      uStack_a0 = 0x1b;
      *(undefined1 *)((long)puVar13 + 0x1f) = 0;
      *(undefined8 *)(puVar13 + 3) = 0x6928203c20692026;
      *(undefined8 *)(puVar13 + 1) = 0x262069203d3c2030;
      *(undefined8 *)((long)puVar13 + 0x17) = 0x2928657a69732e76;
      *(undefined8 *)((long)puVar13 + 0xf) = 0x29746e6928203c20;
      FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f597c9b,&UNK_10f597913,0x4b9);
      goto LAB_109a8adfc;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_48) {
      puVar11 = (uint *)(lVar15 + (param_3 & 0xffffffff) * 0x50);
      goto code_r0x000109a8a72c;
    }
    goto code_r0x000109a8a828;
  case 0xc:
    if (-1 < iVar19) {
      puVar12 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar12 = 0x203c206900000001;
      uStack_a8 = (undefined4 *)((long)puVar12 + 4);
      uStack_a0 = 5;
      *(undefined2 *)(puVar12 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f597c9b,&UNK_10f597913,0x494);
      goto LAB_109a8adfc;
    }
    plVar18 = *(long **)(param_2 + 2);
    uVar20 = plVar18[1];
    *param_1 = 0x42ff0000;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    puVar11 = param_1 + 0x14;
    puVar11[0] = 0;
    puVar11[1] = 0;
    *(uint **)(param_1 + 0x10) = param_1 + 2;
    *(uint **)(param_1 + 0x12) = puVar11;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    iVar19 = (int)uVar20;
    if (iVar19 != 0) {
      uStack_a8 = (undefined4 *)CONCAT44(iVar19,1);
      FUN_109a83fd0(param_1,2,&uStack_a8,0);
      if (0 < iVar19) {
        uVar14 = 0;
        lVar15 = *(long *)(param_1 + 4);
        do {
          *(byte *)(lVar15 + uVar14) =
               (byte)(*(ulong *)(*plVar18 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f)) & 1;
          uVar14 = uVar14 + 1;
        } while ((uVar20 & 0x7fffffff) != uVar14);
      }
    }
    break;
  default:
    puVar13 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar13 = 1;
    uStack_a8 = puVar13 + 1;
    uStack_a0 = 0x1e;
    *(undefined1 *)((long)puVar13 + 0x22) = 0;
    *(undefined8 *)(puVar13 + 3) = 0x726f707075736e75;
    *(undefined8 *)(puVar13 + 1) = 0x2f6e776f6e6b6e55;
    *(undefined8 *)((long)puVar13 + 0x1a) = 0x6570797420796172;
    *(undefined8 *)((long)puVar13 + 0x12) = 0x726120646574726f;
    FUN_109ac3188(0xffffff2b,&uStack_a8,&UNK_10f597c9b,&UNK_10f597913,0x4d5);
    goto LAB_109a8adfc;
  }
code_r0x000109a8a7c0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_48) {
    return;
  }
code_r0x000109a8a828:
  ___stack_chk_fail();
code_r0x000109a8a82c:
  puVar13 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar13 = 1;
  uStack_a8 = puVar13 + 1;
  uStack_a0 = 0x1c;
  *(undefined1 *)(puVar13 + 8) = 0;
  *(undefined8 *)(puVar13 + 3) = 0x6928203c20692026;
  *(undefined8 *)(puVar13 + 1) = 0x262069203d3c2030;
  *(undefined8 *)(puVar13 + 6) = 0x2928657a69732e76;
  *(undefined8 *)(puVar13 + 4) = 0x7629746e6928203c;
  FUN_109ac3188(0xffffff29,&uStack_a8,&UNK_10f597c9b,&UNK_10f597913,0x4a8);
LAB_109a8adfc:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109a8ae00);
  (*pcVar10)();
code_r0x000109a8a540:
  *param_1 = 0x42ff0000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar11 = param_1 + 0x14;
  puVar11[0] = 0;
  puVar11[1] = 0;
  *(uint **)(param_1 + 0x10) = param_1 + 2;
  *(uint **)(param_1 + 0x12) = puVar11;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  goto code_r0x000109a8a7c0;
}



/* Entry: 109a8b004; end: 109a8b903;  */

void FUN_109a8b004(int *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  uVar1 = *param_2;
  switch(uVar1 >> 0x10 & 0x1f) {
  case 0:
code_r0x000109a8b03c:
    param_1[0] = 0;
    param_1[1] = 0;
    return;
  case 1:
    if (-1 < (int)param_3) {
      puVar5 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar5 = 0x203c206900000001;
      *(undefined2 *)(puVar5 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&DAT_10f68f0dc,&UNK_10f597913,0x5d0);
      goto LAB_109a8b72c;
    }
    lVar9 = *(long *)(param_2 + 2);
    break;
  case 2:
    if (-1 < (int)param_3) {
      puVar5 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar5 = 0x203c206900000001;
      *(undefined2 *)(puVar5 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&DAT_10f68f0dc,&UNK_10f597913,0x5e2);
      goto LAB_109a8b72c;
    }
    uVar15 = *(undefined8 *)(param_2 + 4);
    goto code_r0x000109a8b1fc;
  case 3:
    if (-1 < (int)param_3) {
      puVar5 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar5 = 0x203c206900000001;
      *(undefined2 *)(puVar5 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&DAT_10f68f0dc,&UNK_10f597913,0x5e8);
      goto LAB_109a8b72c;
    }
    plVar10 = *(long **)(param_2 + 2);
    goto code_r0x000109a8b128;
  case 4:
    plVar10 = *(long **)(param_2 + 2);
    if ((int)param_3 < 0) {
      if (*plVar10 == plVar10[1]) goto code_r0x000109a8b03c;
      iVar7 = (int)((ulong)(plVar10[1] - *plVar10) >> 3);
code_r0x000109a8b274:
      iVar8 = -0x55555555;
code_r0x000109a8b27c:
      iVar7 = iVar7 * iVar8;
      goto code_r0x000109a8b298;
    }
    if ((int)((ulong)(plVar10[1] - *plVar10) >> 3) * -0x55555555 <= (int)param_3) {
      puVar6 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar6 = 1;
      *(undefined1 *)((long)puVar6 + 0x16) = 0;
      *(undefined2 *)(puVar6 + 5) = 0x2928;
      *(undefined8 *)(puVar6 + 3) = 0x657a69732e767629;
      *(undefined8 *)(puVar6 + 1) = 0x746e6928203c2069;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&DAT_10f68f0dc,&UNK_10f597913,0x5fe);
      goto LAB_109a8b72c;
    }
    plVar10 = (long *)(*plVar10 + (ulong)param_3 * 0x18);
code_r0x000109a8b128:
    uVar12 = plVar10[1] - *plVar10;
    if (uVar12 == (long)uVar12 >> 2) {
      *param_1 = (int)uVar12;
      param_1[1] = 1;
      return;
    }
    uVar11 = (ulong)((uVar1 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar1 & 7) << 1) & 3));
    iVar7 = 0;
    if (uVar11 != 0) {
      iVar7 = (int)(uVar12 / uVar11);
    }
code_r0x000109a8b298:
    *param_1 = iVar7;
    param_1[1] = 1;
    return;
  case 5:
    plVar10 = *(long **)(param_2 + 2);
    if ((int)param_3 < 0) {
      if (*plVar10 == plVar10[1]) goto code_r0x000109a8b03c;
      iVar7 = (int)((ulong)(plVar10[1] - *plVar10) >> 5);
      goto code_r0x000109a8b274;
    }
    if ((int)((ulong)(plVar10[1] - *plVar10) >> 5) * -0x55555555 <= (int)param_3) {
      puVar6 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar6 = 1;
      *(undefined1 *)((long)puVar6 + 0x16) = 0;
      *(undefined2 *)(puVar6 + 5) = 0x2928;
      *(undefined8 *)(puVar6 + 3) = 0x657a69732e767629;
      *(undefined8 *)(puVar6 + 1) = 0x746e6928203c2069;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&DAT_10f68f0dc,&UNK_10f597913,0x60a);
      goto LAB_109a8b72c;
    }
    lVar9 = *plVar10 + (ulong)param_3 * 0x60;
    break;
  case 6:
    if (-1 < (int)param_3) {
      puVar5 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar5 = 0x203c206900000001;
      *(undefined2 *)(puVar5 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&DAT_10f68f0dc,&UNK_10f597913,0x5d6);
      goto LAB_109a8b72c;
    }
    ppuVar4 = *(undefined ***)(param_2 + 2);
    ppuVar13 = (undefined **)*ppuVar4;
    if (ppuVar13 == &PTR_PTR_1132e8f20 || ppuVar13 == &PTR_PTR_1132e8f18) {
      puVar14 = ppuVar4[3];
LAB_109a7f374:
      *(undefined **)param_1 = puVar14;
    }
    else {
      if (ppuVar13 == &PTR_PTR_1132e8f10) {
        iVar7 = *(int *)((long)ppuVar4 + 0x7c);
        iVar8 = *(int *)(ppuVar4 + 3);
      }
      else {
        if (ppuVar13 != &PTR_PTR_1132e8f28) {
          ppuVar3 = ppuVar4;
          FUN_109a830cc();
          if (ppuVar13 != ppuVar3) {
            plVar10 = (long *)*ppuVar4;
            if (plVar10 == (long *)0x0) {
              param_1[0] = 0;
              param_1[1] = 0;
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x000109a7f3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar10 + 200))(param_1,plVar10,ppuVar4);
            return;
          }
          puVar14 = (undefined *)NEON_rev64(*(undefined8 *)ppuVar4[10],4);
          goto LAB_109a7f374;
        }
        iVar7 = *(int *)((long)ppuVar4 + 0x7c);
        iVar8 = *(int *)((long)ppuVar4 + 0x1c);
      }
      *param_1 = iVar7;
      param_1[1] = iVar8;
    }
    return;
  case 7:
    if (-1 < (int)param_3) {
      puVar5 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar5 = 0x203c206900000001;
      *(undefined2 *)(puVar5 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&DAT_10f68f0dc,&UNK_10f597913,0x624);
      goto LAB_109a8b72c;
    }
    uVar15 = *(undefined8 *)(*(long *)(param_2 + 2) + 0x10);
    goto code_r0x000109a8b1f8;
  case 8:
    if (-1 < (int)param_3) {
      puVar5 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar5 = 0x203c206900000001;
      *(undefined2 *)(puVar5 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&DAT_10f68f0dc,&UNK_10f597913,0x632);
      goto LAB_109a8b72c;
    }
    goto code_r0x000109a8b1f0;
  case 9:
    if (-1 < (int)param_3) {
      puVar5 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar5 = 0x203c206900000001;
      *(undefined2 *)(puVar5 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&DAT_10f68f0dc,&UNK_10f597913,0x62b);
      goto LAB_109a8b72c;
    }
code_r0x000109a8b1f0:
    lVar9 = *(long *)(param_2 + 2);
code_r0x000109a8b1f4:
    uVar15 = *(undefined8 *)(lVar9 + 4);
    goto code_r0x000109a8b1f8;
  case 10:
    if (-1 < (int)param_3) {
      puVar5 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar5 = 0x203c206900000001;
      *(undefined2 *)(puVar5 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&DAT_10f68f0dc,&UNK_10f597913,0x5dc);
      goto LAB_109a8b72c;
    }
    lVar9 = *(long *)(param_2 + 2);
    goto code_r0x000109a8b1e0;
  case 0xb:
    plVar10 = *(long **)(param_2 + 2);
    if ((int)param_3 < 0) {
      if (*plVar10 == plVar10[1]) goto code_r0x000109a8b03c;
      iVar7 = (int)((ulong)(plVar10[1] - *plVar10) >> 4);
      iVar8 = -0x33333333;
      goto code_r0x000109a8b27c;
    }
    if ((int)((ulong)(plVar10[1] - *plVar10) >> 4) * -0x33333333 <= (int)param_3) {
      puVar6 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar6 = 1;
      *(undefined1 *)((long)puVar6 + 0x16) = 0;
      *(undefined2 *)(puVar6 + 5) = 0x2928;
      *(undefined8 *)(puVar6 + 3) = 0x657a69732e767629;
      *(undefined8 *)(puVar6 + 1) = 0x746e6928203c2069;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&DAT_10f68f0dc,&UNK_10f597913,0x61d);
      goto LAB_109a8b72c;
    }
    lVar9 = *plVar10 + (ulong)param_3 * 0x50;
code_r0x000109a8b1e0:
    puVar5 = *(undefined8 **)(lVar9 + 0x30);
    goto code_r0x000109a8b1e4;
  case 0xc:
    if (-1 < (int)param_3) {
      puVar5 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar5 = 0x203c206900000001;
      *(undefined2 *)(puVar5 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&DAT_10f68f0dc,&UNK_10f597913,0x5f1);
      goto LAB_109a8b72c;
    }
    iVar7 = (int)*(undefined8 *)(*(long *)(param_2 + 2) + 8);
    goto code_r0x000109a8b298;
  case 0xd:
    plVar10 = *(long **)(param_2 + 2);
    if ((int)param_3 < 0) {
      if (*plVar10 != plVar10[1]) {
        iVar7 = (int)((ulong)(plVar10[1] - *plVar10) >> 6);
        goto code_r0x000109a8b298;
      }
      goto code_r0x000109a8b03c;
    }
    if ((int)((ulong)(plVar10[1] - *plVar10) >> 6) <= (int)param_3) {
      puVar6 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar6 = 1;
      *(undefined1 *)((long)puVar6 + 0x16) = 0;
      *(undefined2 *)(puVar6 + 5) = 0x2928;
      *(undefined8 *)(puVar6 + 3) = 0x657a69732e767629;
      *(undefined8 *)(puVar6 + 1) = 0x746e6928203c2069;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&DAT_10f68f0dc,&UNK_10f597913,0x614);
      goto LAB_109a8b72c;
    }
    lVar9 = *plVar10 + (ulong)param_3 * 0x40;
    goto code_r0x000109a8b1f4;
  default:
    puVar6 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    *(undefined1 *)((long)puVar6 + 0x22) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x726f707075736e75;
    *(undefined8 *)(puVar6 + 1) = 0x2f6e776f6e6b6e55;
    *(undefined8 *)((long)puVar6 + 0x1a) = 0x6570797420796172;
    *(undefined8 *)((long)puVar6 + 0x12) = 0x726120646574726f;
    FUN_109ac3188(0xffffff2b,&stack0xffffffffffffffd0,&DAT_10f68f0dc,&UNK_10f597913,0x637);
LAB_109a8b72c:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109a8b730);
    (*pcVar2)();
  }
  puVar5 = *(undefined8 **)(lVar9 + 0x40);
code_r0x000109a8b1e4:
  uVar15 = *puVar5;
code_r0x000109a8b1f8:
  uVar15 = NEON_rev64(uVar15,4);
code_r0x000109a8b1fc:
  *(undefined8 *)param_1 = uVar15;
  return;
}



/* Entry: 109a8b904; end: 109a8bd23;  */

undefined ** FUN_109a8b904(uint *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auStack_30 [16];
  
  uVar6 = *param_1;
  uVar1 = uVar6 & 0x1f0000;
  if (uVar1 != 0xa0000) {
    if (uVar1 == 0x60000) {
      puVar5 = *(undefined8 **)(param_1 + 2);
      puVar9 = (undefined8 *)*puVar5;
      puVar3 = puVar5;
      FUN_109a830cc();
      if (puVar9 == puVar3) {
        ppuVar4 = (undefined **)(ulong)(*(uint *)(puVar5 + 2) & 0xfff);
      }
      else {
        ppuVar4 = (undefined **)*puVar5;
        if (ppuVar4 == &PTR_PTR_1132e8f08) {
          ppuVar4 = (undefined **)0x0;
        }
        else {
          if (ppuVar4 != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109a7f45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*ppuVar4 + 0xd0))(ppuVar4,puVar5);
            return ppuVar4;
          }
          ppuVar4 = (undefined **)0xffffffff;
        }
      }
      return ppuVar4;
    }
    if (uVar1 != 0x10000) {
      if (((uVar6 & 0x1e0000) == 0x20000) || ((uVar6 & 0x170000) == 0x40000)) goto LAB_109a8b93c;
      uVar1 = uVar1 >> 0x10;
      if (uVar1 < 8) {
        if (uVar1 == 0) {
          return (undefined **)0xffffffff;
        }
        if (uVar1 == 5) {
          lVar7 = **(long **)(param_1 + 2);
          lVar8 = (*(long **)(param_1 + 2))[1];
          if (lVar7 == lVar8) {
            if ((int)uVar6 < 0) goto LAB_109a8b93c;
            FUN_109a38ed8(auStack_30,&UNK_10f597dbe);
            FUN_109ac3188(0xffffff29,auStack_30,&DAT_10f6389e8,&UNK_10f597913,0x73b);
            goto LAB_109a8bbf8;
          }
          if ((int)((ulong)(lVar8 - lVar7) >> 5) * -0x55555555 <= (int)param_2) {
            FUN_109a38ed8(auStack_30,&UNK_10f597d9f);
            FUN_109ac3188(0xffffff29,auStack_30,&DAT_10f6389e8,&UNK_10f597913,0x73e);
            goto LAB_109a8bbf8;
          }
          lVar8 = 0x60;
LAB_109a8ba44:
          lVar8 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)) * lVar8;
LAB_109a8ba7c:
          uVar6 = *(uint *)(lVar7 + lVar8);
          goto LAB_109a8b93c;
        }
        if (uVar1 == 7) {
          return (undefined **)(ulong)*(uint *)(*(long *)(param_1 + 2) + 0x18);
        }
      }
      else if (uVar1 < 0xb) {
        if ((uVar1 == 8) || (uVar1 == 9)) goto LAB_109a8b934;
      }
      else {
        if (uVar1 == 0xd) {
          lVar7 = **(long **)(param_1 + 2);
          lVar8 = (*(long **)(param_1 + 2))[1];
          if (lVar7 == lVar8) {
            if ((int)uVar6 < 0) goto LAB_109a8b93c;
            FUN_109a38ed8(auStack_30,&UNK_10f597dbe);
            FUN_109ac3188(0xffffff29,auStack_30,&DAT_10f6389e8,&UNK_10f597913,0x747);
            goto LAB_109a8bbf8;
          }
          if ((int)((ulong)(lVar8 - lVar7) >> 6) <= (int)param_2) {
            FUN_109a38ed8(auStack_30,&UNK_10f597d9f);
            FUN_109ac3188(0xffffff29,auStack_30,&DAT_10f6389e8,&UNK_10f597913,0x74a);
            goto LAB_109a8bbf8;
          }
          lVar8 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)) << 6;
          goto LAB_109a8ba7c;
        }
        if (uVar1 == 0xb) {
          lVar7 = **(long **)(param_1 + 2);
          lVar8 = (*(long **)(param_1 + 2))[1];
          if (lVar7 == lVar8) {
            if ((int)uVar6 < 0) goto LAB_109a8b93c;
            FUN_109a38ed8(auStack_30,&UNK_10f597dbe);
            FUN_109ac3188(0xffffff29,auStack_30,&DAT_10f6389e8,&UNK_10f597913,0x72f);
            goto LAB_109a8bbf8;
          }
          if ((int)((ulong)(lVar8 - lVar7) >> 4) * -0x33333333 <= (int)param_2) {
            FUN_109a38ed8(auStack_30,&UNK_10f597d9f);
            FUN_109ac3188(0xffffff29,auStack_30,&DAT_10f6389e8,&UNK_10f597913,0x732);
            goto LAB_109a8bbf8;
          }
          lVar8 = 0x50;
          goto LAB_109a8ba44;
        }
      }
      FUN_109a38ed8(auStack_30,&UNK_10f597d6b);
      FUN_109ac3188(0xffffff2b,auStack_30,&DAT_10f6389e8,&UNK_10f597913,0x757);
LAB_109a8bbf8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109a8bbfc);
      (*pcVar2)();
    }
  }
LAB_109a8b934:
  uVar6 = **(uint **)(param_1 + 2);
LAB_109a8b93c:
  return (undefined **)(ulong)(uVar6 & 0xfff);
}



/* Entry: 109a8bd24; end: 109a8c15b;  */

void FUN_109a8bd24(uint *param_1,uint *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  undefined4 *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  uint uStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  undefined8 uStack_178;
  uint uStack_170;
  long lStack_168;
  long lStack_160;
  long *plStack_150;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined1 *in_stack_ffffffffffffffb8;
  
  uVar20 = *param_2;
  uVar2 = uVar20 & 0x1f0000;
  if (uVar2 == 0x10000) {
    puVar14 = *(uint **)(param_2 + 2);
    if ((int)param_3 < 0) {
      uStack_c8 = 0x42ff0000;
      puVar13 = (undefined8 *)((ulong)&uStack_c8 | 4);
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      puStack_98 = &uStack_c0;
      uStack_90 = &uStack_88;
      if (*(long *)(puVar14 + 4) == 0) {
        *param_1 = 0x42ff0000;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        puVar14 = param_1 + 0x10;
        puVar14[0] = 0;
        puVar14[1] = 0;
        *(uint **)(param_1 + 0xc) = param_1 + 2;
        *(uint **)(param_1 + 0xe) = puVar14;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        *puVar13 = 0;
        puVar13[1] = 0;
        *(undefined4 *)(puVar13 + 2) = 0;
LAB_109ac4dd0:
        FUN_109ac5638(&uStack_c8);
        return;
      }
      uStack_d0 = 0;
      uStack_d8 = 0;
      FUN_109a86b88(puVar14,&uStack_d0,&uStack_d8);
      if ((int)uStack_d8 == 0 && uStack_d8._4_4_ == 0) {
        lVar15 = *(long *)(puVar14 + 4);
        if (lVar15 == *(long *)(puVar14 + 6)) {
          plVar16 = *(long **)(puVar14 + 0xc);
          if (plRam000000011382bb80 == (long *)0x0) {
            FUN_109a83e3c();
            lVar15 = *(long *)(puVar14 + 4);
          }
          plVar19 = plRam000000011382bb80;
          if (plVar16 != (long *)0x0) {
            plVar19 = plVar16;
          }
          (**(code **)(*plVar19 + 0x10))
                    (plVar19,puVar14[1],*(undefined8 *)(puVar14 + 0x10),*puVar14 & 0xfff,lVar15,
                     *(undefined8 *)(puVar14 + 0x12),0x3000000,0);
          if (plRam000000011382bb80 == (long *)0x0) {
            FUN_109a83e3c();
          }
          plVar16 = plRam000000011382bb80;
          (**(code **)(*plRam000000011382bb80 + 0x18))();
          if (((ulong)plVar16 & 1) == 0) {
            if (plRam000000011382bb80 == (long *)0x0) {
              FUN_109a83e3c();
            }
            plVar16 = plRam000000011382bb80;
            (**(code **)(*plRam000000011382bb80 + 0x18))();
            if (((ulong)plVar16 & 1) == 0) {
              puVar11 = (undefined4 *)0x10;
              func_0x000107c2ae8c();
              uStack_138 = (undefined8 *)(puVar11 + 1);
              *uStack_138 = 0x657461636f6c6c61;
              *puVar11 = 1;
              uStack_130 = 9;
              *(undefined2 *)(puVar11 + 3) = 100;
              FUN_109ac3188(0xffffff29,&uStack_138,&UNK_10f597d8a,&UNK_10f59b211,0x137);
              goto LAB_109ac4f94;
            }
          }
          lVar15 = *(long *)(puVar14 + 0xe);
          if (lVar15 != 0) {
            plVar19[10] = lVar15;
            piVar1 = (int *)(lVar15 + 0x14);
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar9) {
                *piVar1 = *piVar1 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            piVar1 = (int *)(*(long *)(puVar14 + 0xe) + 0x10);
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar9) {
                *piVar1 = *piVar1 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          uStack_c8 = *puVar14;
          FUN_109ac4594(&uStack_c8,puVar14[1],*(undefined8 *)(puVar14 + 0x10),
                        *(undefined8 *)(puVar14 + 0x12),0);
          FUN_109ac47dc(&uStack_c8);
          if (2 < (int)uStack_c4) {
            uStack_c0 = 0xffffffff;
            uStack_bc = 0xffffffff;
          }
          if (plVar19 == (long *)0x0) {
            plVar19 = (long *)0x0;
          }
          else {
            plVar16 = plVar19 + 2;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar9) {
                *(int *)plVar16 = (int)*plVar16 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          *param_1 = uStack_c8;
          param_1[1] = uStack_c4;
          *(ulong *)(param_1 + 2) = CONCAT44(uStack_bc,uStack_c0);
          *(ulong *)(param_1 + 4) = CONCAT44(uStack_b4,uStack_b8);
          param_1[6] = uStack_b0;
          puVar14 = param_1 + 0x10;
          puVar14[0] = 0;
          puVar14[1] = 0;
          *(long **)(param_1 + 8) = plVar19;
          param_1[10] = 0;
          param_1[0xb] = 0;
          *(uint **)(param_1 + 0xc) = param_1 + 2;
          *(uint **)(param_1 + 0xe) = puVar14;
          param_1[0x12] = 0;
          param_1[0x13] = 0;
          if ((int)uStack_c4 < 3) {
            *(ulong *)(param_1 + 0x10) = *uStack_90;
            *(ulong *)(param_1 + 0x12) = uStack_90[1];
          }
          else {
            *(undefined4 **)(param_1 + 0xc) = puStack_98;
            *(ulong **)(param_1 + 0xe) = uStack_90;
            puStack_98 = &uStack_c0;
            uStack_90 = &uStack_88;
          }
          uStack_c8 = 0x42ff0000;
          *puVar13 = 0;
          puVar13[1] = 0;
          *(undefined4 *)(puVar13 + 2) = 0;
          uStack_a8 = 0;
          uStack_a0 = 0;
          goto LAB_109ac4dd0;
        }
        puVar11 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_138 = (undefined8 *)(puVar11 + 1);
        uStack_130 = 0x11;
        *(undefined2 *)(puVar11 + 5) = 0x74;
        *(undefined8 *)(puVar11 + 3) = 0x7261747361746164;
        *(undefined8 *)(puVar11 + 1) = 0x203d3d2061746164;
        FUN_109ac3188(0xffffff29,&uStack_138,&UNK_10f597d8a,&UNK_10f59b211,0x121);
      }
      else {
        uVar2 = puVar14[2];
        uVar4 = puVar14[3];
        uStack_130 = *(undefined8 *)(puVar14 + 2);
        uVar21 = puVar14[1];
        uStack_138 = *(undefined8 **)puVar14;
        puStack_f8 = &uStack_130;
        uStack_120 = *(undefined8 *)(puVar14 + 6);
        uStack_128 = *(undefined8 *)(puVar14 + 4);
        uStack_110 = *(undefined8 *)(puVar14 + 10);
        uStack_118 = *(undefined8 *)(puVar14 + 8);
        lStack_100 = *(long *)(puVar14 + 0xe);
        uStack_108 = *(undefined8 *)(puVar14 + 0xc);
        uStack_e8 = 0;
        uStack_e0 = 0;
        if (*(long *)(puVar14 + 0xe) != 0) {
          piVar1 = (int *)(*(long *)(puVar14 + 0xe) + 0x14);
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar9) {
              *piVar1 = *piVar1 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          uVar21 = puVar14[1];
        }
        puStack_f0 = &uStack_e8;
        if ((int)uVar21 < 3) {
          uStack_e8 = **(undefined8 **)(puVar14 + 0x12);
          uStack_e0 = (*(undefined8 **)(puVar14 + 0x12))[1];
        }
        else {
          uStack_138 = (undefined8 *)((ulong)uStack_138 & 0xffffffff);
          func_0x000109a84868(&uStack_138,puVar14);
        }
        FUN_109a86cdc(&uStack_138,uStack_d8._4_4_,
                      uStack_d0._4_4_ - (uStack_d8._4_4_ + (int)uStack_130),uStack_d8 & 0xffffffff,
                      (int)uStack_d0 - ((int)uStack_d8 + uStack_130._4_4_));
        FUN_109ac4874(&uStack_188,&uStack_138,uVar20 & 0x3000000,0);
        *param_1 = uStack_188;
        param_1[1] = 2;
        param_1[2] = uVar2;
        param_1[3] = uVar4;
        *(undefined8 *)(param_1 + 4) = uStack_178;
        param_1[6] = uStack_170;
        *(long *)(param_1 + 8) = lStack_168;
        lStack_160 = lStack_160 + *plStack_150 * (long)uStack_d8._4_4_;
        *(long *)(param_1 + 10) = lStack_160;
        *(uint **)(param_1 + 0xc) = param_1 + 2;
        puVar14 = param_1 + 0x10;
        puVar14[0] = 0;
        puVar14[1] = 0;
        *(uint **)(param_1 + 0xe) = puVar14;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        if (iStack_184 < 3) {
          uVar20 = 0xffffbfff;
          if (iStack_17c <= (int)uVar4) {
            uVar20 = 0xffffffff;
          }
          uVar21 = 0x4000;
          if (uVar2 != 1) {
            uVar21 = 0;
          }
          *param_1 = uVar20 & uStack_188 | uVar21;
          uVar20 = (uStack_188 >> 3 & 0x1ff) + 1 <<
                   (ulong)(0xfa50U >> (ulong)((uStack_188 & 7) << 1) & 3);
          *(long *)(param_1 + 10) = lStack_160 + (long)(int)uVar20 * (long)(int)uStack_d8;
          if (((((-1 < (int)uStack_d8) && (-1 < (int)uVar4)) &&
               ((int)((int)uStack_d8 + uVar4) <= iStack_17c)) &&
              ((-1 < (long)uStack_d8 && (-1 < (int)uVar2)))) &&
             ((int)(uStack_d8._4_4_ + uVar2) <= iStack_180)) {
            if (lStack_168 != 0) {
              piVar1 = (int *)(lStack_168 + 0x10);
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar9) {
                  *piVar1 = *piVar1 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            if ((int)uVar4 < iStack_17c || (int)uVar2 < iStack_180) {
              *param_1 = *param_1 | 0x8000;
            }
            plVar16 = *(long **)(param_1 + 0xe);
            *plVar16 = *plStack_150;
            plVar16[1] = (ulong)uVar20;
            if (((int)param_1[2] < 1) || ((int)param_1[3] < 1)) {
              if (*(long *)(param_1 + 8) != 0) {
                piVar1 = (int *)(*(long *)(param_1 + 8) + 0x10);
                do {
                  iVar3 = *piVar1;
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar9) {
                    *piVar1 = iVar3 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (iVar3 + -1 == 0) {
                  (**(code **)(**(long **)(*(long *)(param_1 + 8) + 8) + 0x20))();
                }
              }
              if (0 < (int)param_1[1]) {
                lVar15 = 0;
                lVar17 = *(long *)(param_1 + 0xc);
                do {
                  *(undefined4 *)(lVar17 + lVar15 * 4) = 0;
                  lVar15 = lVar15 + 1;
                } while (lVar15 < (int)param_1[1]);
              }
              param_1[8] = 0;
              param_1[9] = 0;
              param_1[2] = 0;
              param_1[3] = 0;
            }
            FUN_109ac5638(&uStack_188);
            if (lStack_100 != 0) {
              piVar1 = (int *)(lStack_100 + 0x14);
              do {
                iVar3 = *piVar1;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar9) {
                  *piVar1 = iVar3 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar3 + -1 == 0) {
                func_0x000109a848d4(&uStack_138);
              }
            }
            lStack_100 = 0;
            uStack_120 = 0;
            uStack_128 = 0;
            uStack_110 = 0;
            uStack_118 = 0;
            if (0 < uStack_138._4_4_) {
              lVar15 = 0;
              do {
                *(undefined4 *)((long)puStack_f8 + lVar15 * 4) = 0;
                lVar15 = lVar15 + 1;
              } while (lVar15 < uStack_138._4_4_);
            }
            if (puStack_f0 != &uStack_e8 && puStack_f0 != (undefined8 *)0x0) {
              _free(puStack_f0[-1]);
            }
            goto LAB_109ac4dd0;
          }
          puVar11 = (undefined4 *)0x84;
          func_0x000107c2ae8c();
          *(undefined8 *)(puVar11 + 0x13) = 0x3c20302026262079;
          *(undefined8 *)(puVar11 + 0x11) = 0x2e696f72203d3c20;
          *(undefined8 *)(puVar11 + 0x17) = 0x2026262074686769;
          *(undefined8 *)(puVar11 + 0x15) = 0x65682e696f72203d;
          *(undefined8 *)(puVar11 + 0x1b) = 0x676965682e696f72;
          *(undefined8 *)(puVar11 + 0x19) = 0x202b20792e696f72;
          *(undefined8 *)(puVar11 + 0x1e) = 0x73776f722e6d203d;
          *(undefined8 *)(puVar11 + 0x1c) = 0x3c20746867696568;
          *(undefined8 *)(puVar11 + 3) = 0x203020262620782e;
          *(undefined8 *)(puVar11 + 1) = 0x696f72203d3c2030;
          *(undefined8 *)(puVar11 + 7) = 0x2026262068746469;
          *(undefined8 *)(puVar11 + 5) = 0x772e696f72203d3c;
          *(undefined8 *)(puVar11 + 0xb) = 0x746469772e696f72;
          *(undefined8 *)(puVar11 + 9) = 0x202b20782e696f72;
          *puVar11 = 1;
          puStack_78 = (undefined8 *)(puVar11 + 1);
          uStack_70 = 0x7c;
          *(undefined1 *)(puVar11 + 0x20) = 0;
          *(undefined8 *)(puVar11 + 0xf) = 0x3020262620736c6f;
          *(undefined8 *)(puVar11 + 0xd) = 0x632e6d203d3c2068;
          FUN_109ac3188(0xffffff29,&puStack_78,&UNK_10f59b2bb,&UNK_10f59b211,0x1d2);
        }
        else {
          puVar11 = (undefined4 *)0x10;
          func_0x000107c2ae8c();
          *puVar11 = 1;
          puStack_78 = (undefined8 *)(puVar11 + 1);
          *puStack_78 = 0x3c20736d69642e6d;
          uStack_70 = 0xb;
          *(undefined1 *)((long)puVar11 + 0xf) = 0;
          *(undefined4 *)((long)puVar11 + 0xb) = 0x32203d3c;
          FUN_109ac3188(0xffffff29,&puStack_78,&UNK_10f59b2bb,&UNK_10f59b211,0x1cb);
        }
      }
LAB_109ac4f94:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x109ac4f98);
      (*pcVar10)();
    }
    FUN_109a84930(&uStack_90,puVar14,&stack0xffffffffffffffd8,&stack0xffffffffffffffd0);
    FUN_109ac4874(param_1,&uStack_90,uVar20 & 0x3000000,0);
    if (in_stack_ffffffffffffffa8 != 0) {
      piVar1 = (int *)(in_stack_ffffffffffffffa8 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar3 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_90);
      }
    }
    if (0 < uStack_90._4_4_) {
      lVar15 = 0;
      do {
        *(undefined4 *)(in_stack_ffffffffffffffb0 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < uStack_90._4_4_);
    }
LAB_109a8c068:
    uStack_68 = 0;
    uStack_70 = 0;
    puStack_78 = (undefined8 *)0x0;
    uStack_80 = 0;
    if (in_stack_ffffffffffffffb8 != &stack0xffffffffffffffc0 &&
        in_stack_ffffffffffffffb8 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(in_stack_ffffffffffffffb8 + -8));
    }
  }
  else {
    if (uVar2 == 0xb0000) {
      if (((int)param_3 < 0) ||
         (lVar15 = **(long **)(param_2 + 2),
         (int)((ulong)((*(long **)(param_2 + 2))[1] - lVar15) >> 4) * -0x33333333 <= (int)param_3))
      {
        puVar11 = (undefined4 *)0x20;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_90 = (ulong *)(puVar11 + 1);
        uStack_88 = 0x1b;
        *(undefined1 *)((long)puVar11 + 0x1f) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x6928203c20692026;
        *(undefined8 *)(puVar11 + 1) = 0x262069203d3c2030;
        *(undefined8 *)((long)puVar11 + 0x17) = 0x2928657a69732e76;
        *(undefined8 *)((long)puVar11 + 0xf) = 0x29746e6928203c20;
        FUN_109ac3188(0xffffff29,&uStack_90,&UNK_10f597d8a,&UNK_10f597913,0x4e9);
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x109a8c114);
        (*pcVar10)();
      }
      puVar13 = (undefined8 *)(lVar15 + (ulong)param_3 * 0x50);
      uVar22 = *puVar13;
      *(undefined8 *)(param_1 + 2) = puVar13[1];
      *(undefined8 *)param_1 = uVar22;
      *(undefined8 *)(param_1 + 4) = puVar13[2];
      param_1[6] = *(uint *)(puVar13 + 3);
      lVar15 = puVar13[4];
      *(long *)(param_1 + 8) = lVar15;
      *(undefined8 *)(param_1 + 10) = puVar13[5];
      *(uint **)(param_1 + 0xc) = param_1 + 2;
      puVar14 = param_1 + 0x10;
      puVar14[0] = 0;
      puVar14[1] = 0;
      *(uint **)(param_1 + 0xe) = puVar14;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      if (lVar15 != 0) {
        piVar1 = (int *)(lVar15 + 0x10);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = *piVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      if (2 < *(int *)((long)puVar13 + 4)) {
        param_1[1] = 0;
LAB_109a8c0a4:
        FUN_109ac4594(param_1,*(undefined4 *)((long)puVar13 + 4),0,0,0);
        if (0 < (int)param_1[1]) {
          lVar15 = 0;
          lVar17 = puVar13[6];
          lVar6 = puVar13[7];
          lVar5 = *(long *)(param_1 + 0xc);
          lVar7 = *(long *)(param_1 + 0xe);
          do {
            *(undefined4 *)(lVar5 + lVar15 * 4) = *(undefined4 *)(lVar17 + lVar15 * 4);
            *(undefined8 *)(lVar7 + lVar15 * 8) = *(undefined8 *)(lVar6 + lVar15 * 8);
            lVar15 = lVar15 + 1;
          } while (lVar15 < (int)param_1[1]);
        }
        return;
      }
      puVar13 = (undefined8 *)puVar13[7];
    }
    else {
      if (uVar2 != 0xa0000) {
        if (((int)param_3 < 0) && (uVar2 == 0x10000)) {
          puVar12 = *(ulong **)(param_2 + 2);
          in_stack_ffffffffffffffb0 = (ulong)&uStack_90 | 8;
          uStack_88 = puVar12[1];
          uStack_90 = (ulong *)*puVar12;
          puStack_78 = (undefined8 *)puVar12[3];
          uStack_80 = puVar12[2];
          uStack_68 = puVar12[5];
          uStack_70 = puVar12[4];
          in_stack_ffffffffffffffa8 = puVar12[7];
          in_stack_ffffffffffffffb8 = &stack0xffffffffffffffc0;
          if (puVar12[7] != 0) {
            piVar1 = (int *)(puVar12[7] + 0x14);
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar9) {
                *piVar1 = *piVar1 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          if (2 < *(int *)((long)puVar12 + 4)) {
            uStack_90 = (ulong *)((ulong)uStack_90 & 0xffffffff);
            func_0x000109a84868(&uStack_90);
          }
        }
        else {
          FUN_109a8a180(&uStack_90);
        }
        FUN_109ac4874(param_1,&uStack_90,uVar20 & 0x3000000,0);
        if (in_stack_ffffffffffffffa8 != 0) {
          piVar1 = (int *)(in_stack_ffffffffffffffa8 + 0x14);
          do {
            iVar3 = *piVar1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar9) {
              *piVar1 = iVar3 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(&uStack_90);
          }
        }
        if (0 < uStack_90._4_4_) {
          lVar15 = 0;
          do {
            *(undefined4 *)(in_stack_ffffffffffffffb0 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < uStack_90._4_4_);
        }
        goto LAB_109a8c068;
      }
      puVar13 = *(undefined8 **)(param_2 + 2);
      if (-1 < (int)param_3) {
        uStack_90 = (ulong *)CONCAT44(param_3 + 1,param_3);
        FUN_109ac56d8(param_1,puVar13,&uStack_90,&stack0xffffffffffffffd8);
        return;
      }
      uVar22 = *puVar13;
      *(undefined8 *)(param_1 + 2) = puVar13[1];
      *(undefined8 *)param_1 = uVar22;
      *(undefined8 *)(param_1 + 4) = puVar13[2];
      param_1[6] = *(uint *)(puVar13 + 3);
      lVar15 = puVar13[4];
      *(long *)(param_1 + 8) = lVar15;
      *(undefined8 *)(param_1 + 10) = puVar13[5];
      *(uint **)(param_1 + 0xc) = param_1 + 2;
      puVar14 = param_1 + 0x10;
      puVar14[0] = 0;
      puVar14[1] = 0;
      *(uint **)(param_1 + 0xe) = puVar14;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      if (lVar15 != 0) {
        piVar1 = (int *)(lVar15 + 0x10);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = *piVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      if (2 < *(int *)((long)puVar13 + 4)) {
        param_1[1] = 0;
        goto LAB_109a8c0a4;
      }
      puVar13 = (undefined8 *)puVar13[7];
    }
    puVar18 = *(undefined8 **)(param_1 + 0xe);
    *puVar18 = *puVar13;
    puVar18[1] = puVar13[1];
  }
  return;
}



/* Entry: 109a8c15c; end: 109a8d1ef;  */

void FUN_109a8c15c(uint *param_1,long *param_2)

{
  int *piVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  code *pcVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong *puVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  uint *puVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 auStack_100 [2];
  undefined8 uStack_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  int *piStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_88;
  uint uStack_80;
  int iStack_7c;
  
  uVar5 = *param_1;
  uVar9 = uVar5 >> 0x10 & 0x1f;
  if (uVar9 < 4) {
    if (uVar9 < 2) {
      if (uVar9 == 0) {
        lVar28 = *param_2;
        lVar15 = param_2[1];
        while (lVar15 != lVar28) {
          lVar15 = lVar15 + -0x60;
          FUN_109370334(lVar15);
        }
        param_2[1] = lVar28;
      }
      else {
        if (uVar9 != 1) {
LAB_109a8d0b4:
          puVar11 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar11 = 1;
          uStack_f0 = puVar11 + 1;
          iStack_e8 = 0x1e;
          uStack_e4 = 0;
          *(undefined1 *)((long)puVar11 + 0x22) = 0;
          *(undefined8 *)(puVar11 + 3) = 0x726f707075736e75;
          *(undefined8 *)(puVar11 + 1) = 0x2f6e776f6e6b6e55;
          *(undefined8 *)((long)puVar11 + 0x1a) = 0x6570797420796172;
          *(undefined8 *)((long)puVar11 + 0x12) = 0x726120646574726f;
          FUN_109ac3188(0xffffff2b,&uStack_f0,&UNK_10f597d92,&UNK_10f597913,0x557);
LAB_109a8d110:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x109a8d114);
          (*pcVar10)();
        }
        puVar25 = *(uint **)(param_1 + 2);
        iVar27 = **(int **)(puVar25 + 0x10);
        func_0x000109516d68(param_2,(long)iVar27);
        if (0 < iVar27) {
          lVar28 = 0;
          puVar30 = (undefined8 *)((ulong)&uStack_f0 | 4);
          uVar14 = (ulong)&uStack_f0 | 8;
          do {
            if (puVar25[1] == 2) {
              uStack_e4 = puVar25[3];
              uVar5 = *puVar25;
              uStack_e0 = *(long *)(puVar25 + 4) + **(long **)(puVar25 + 0x12) * lVar28;
              uStack_f0._0_4_ = uVar5 & 0xfff | 0x42ff0000;
              uStack_f0._4_4_ = 2;
              iStack_e8 = 1;
              uStack_c8._0_4_ = 0;
              uStack_c8._4_4_ = 0;
              uStack_d0._0_4_ = 0;
              uStack_d0._4_4_ = 0;
              lStack_b8 = 0;
              uStack_c0 = 0;
              uStack_bc = 0;
              uStack_a0 = 0;
              uStack_98 = 0;
              piStack_b0 = (int *)uVar14;
              puStack_a8 = &uStack_a0;
              uStack_d8 = uStack_e0;
              if ((uStack_e4 != 0) && (*(long *)(puVar25 + 4) == 0)) {
                puVar11 = (undefined4 *)0x24;
                func_0x000107c2ae8c();
                *puVar11 = 1;
                uStack_150 = puVar11 + 1;
                uStack_148 = 0x1c;
                *(undefined1 *)(puVar11 + 8) = 0;
                *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
                *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
                *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
                *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
                FUN_109ac3188(0xffffff29,&uStack_150,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
                goto LAB_109a8d110;
              }
              uVar9 = ((uVar5 & 0xfff) >> 3) + 1 <<
                      (ulong)(0xfa50U >> (ulong)((uVar5 & 7) << 1) & 3);
              uStack_98 = (ulong)uVar9;
              uStack_a0 = (long)(int)uVar9 * (long)(int)uStack_e4;
              uStack_f0._0_4_ = uVar5 & 0xfff | 0x42ff4000;
              uStack_d0 = uStack_e0 + (long)(int)uVar9 * (long)(int)uStack_e4;
              uStack_c8 = uStack_d0;
            }
            else {
              FUN_109a855e4(&uStack_f0,puVar25[1] - 1,*(long *)(puVar25 + 0x10) + 4,*puVar25 & 0xfff
                            ,*(long *)(puVar25 + 4) + **(long **)(puVar25 + 0x12) * lVar28,
                            *(long **)(puVar25 + 0x12) + 1);
            }
            puVar23 = (undefined8 *)(*param_2 + lVar28 * 0x60);
            if (puVar23[7] != 0) {
              piVar1 = (int *)(puVar23[7] + 0x14);
              do {
                iVar13 = *piVar1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = iVar13 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar13 + -1 == 0) {
                func_0x000109a848d4(puVar23);
              }
            }
            puVar23[7] = 0;
            puVar23[3] = 0;
            puVar23[2] = 0;
            puVar23[5] = 0;
            puVar23[4] = 0;
            if (0 < *(int *)((long)puVar23 + 4)) {
              lVar15 = 0;
              lVar18 = puVar23[8];
              do {
                *(undefined4 *)(lVar18 + lVar15 * 4) = 0;
                lVar15 = lVar15 + 1;
              } while (lVar15 < *(int *)((long)puVar23 + 4));
            }
            puVar23[1] = CONCAT44(uStack_e4,iStack_e8);
            *puVar23 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0);
            puVar23[3] = uStack_d8;
            puVar23[2] = uStack_e0;
            puVar23[5] = uStack_c8;
            puVar23[4] = uStack_d0;
            puVar23[7] = lStack_b8;
            puVar23[6] = CONCAT44(uStack_bc,uStack_c0);
            puVar19 = (ulong *)puVar23[9];
            puVar2 = puVar23 + 10;
            if (puVar19 != puVar2) {
              if (puVar19 != (ulong *)0x0) {
                _free(puVar19[-1]);
              }
              puVar23[8] = puVar23 + 1;
              puVar23[9] = puVar2;
              puVar19 = puVar2;
            }
            if (uStack_f0._4_4_ < 3) {
              *puVar19 = *puStack_a8;
              puVar19[1] = puStack_a8[1];
              uStack_f0._0_4_ = 0x42ff0000;
              puVar30[1] = 0;
              *puVar30 = 0;
              puVar30[3] = 0;
              puVar30[2] = 0;
              puVar30[5] = 0;
              puVar30[4] = 0;
              *(undefined8 *)((long)puVar30 + 0x34) = 0;
              *(undefined8 *)((long)puVar30 + 0x2c) = 0;
              if (puStack_a8 != &uStack_a0) {
                _free(puStack_a8[-1]);
              }
            }
            else {
              puVar23[9] = puStack_a8;
              puVar23[8] = piStack_b0;
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 != iVar27);
        }
      }
    }
    else if (uVar9 == 2) {
      uVar9 = param_1[5];
      func_0x000109516d68(param_2,(long)(int)uVar9);
      if (uVar9 != 0) {
        lVar28 = 0;
        puVar30 = (undefined8 *)((ulong)&uStack_f0 | 4);
        uVar14 = (ulong)&uStack_f0 | 8;
        do {
          uStack_e4 = param_1[4];
          uVar12 = *param_1;
          uStack_f0._0_4_ = uVar12 & 0xfff | 0x42ff0000;
          uStack_e0 = *(long *)(param_1 + 2) +
                      lVar28 * (ulong)((uVar5 >> 3 & 0x1ff) + 1 <<
                                      (ulong)(0xfa50U >> (ulong)((uVar5 & 7) << 1) & 3)) *
                      (long)(int)uStack_e4;
          uStack_f0._4_4_ = 2;
          iStack_e8 = 1;
          uStack_c8._0_4_ = 0;
          uStack_c8._4_4_ = 0;
          uStack_d0._0_4_ = 0;
          uStack_d0._4_4_ = 0;
          lStack_b8 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_a0 = 0;
          uStack_98 = 0;
          piStack_b0 = (int *)uVar14;
          puStack_a8 = &uStack_a0;
          uStack_d8 = uStack_e0;
          if ((uStack_e4 != 0) && (*(long *)(param_1 + 2) == 0)) {
            puVar11 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar11 = 1;
            uStack_150 = puVar11 + 1;
            uStack_148 = 0x1c;
            *(undefined1 *)(puVar11 + 8) = 0;
            *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&uStack_150,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
            goto LAB_109a8d110;
          }
          uVar6 = ((uVar12 & 0xfff) >> 3) + 1 << (ulong)(0xfa50U >> (ulong)((uVar12 & 7) << 1) & 3);
          uStack_98 = (ulong)uVar6;
          uStack_a0 = (long)(int)uVar6 * (long)(int)uStack_e4;
          uStack_f0._0_4_ = uVar12 & 0xfff | 0x42ff4000;
          uStack_d0 = uStack_e0 + (long)(int)uVar6 * (long)(int)uStack_e4;
          puVar23 = (undefined8 *)(*param_2 + lVar28 * 0x60);
          uStack_c8 = uStack_d0;
          if (puVar23[7] != 0) {
            piVar1 = (int *)(puVar23[7] + 0x14);
            do {
              iVar27 = *piVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar27 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar27 + -1 == 0) {
              func_0x000109a848d4(puVar23);
            }
          }
          puVar23[7] = 0;
          puVar23[3] = 0;
          puVar23[2] = 0;
          puVar23[5] = 0;
          puVar23[4] = 0;
          if (0 < *(int *)((long)puVar23 + 4)) {
            lVar15 = 0;
            lVar18 = puVar23[8];
            do {
              *(undefined4 *)(lVar18 + lVar15 * 4) = 0;
              lVar15 = lVar15 + 1;
            } while (lVar15 < *(int *)((long)puVar23 + 4));
          }
          puVar23[1] = CONCAT44(uStack_e4,iStack_e8);
          *puVar23 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0);
          puVar23[3] = uStack_d8;
          puVar23[2] = uStack_e0;
          puVar23[5] = uStack_c8;
          puVar23[4] = uStack_d0;
          puVar23[7] = lStack_b8;
          puVar23[6] = CONCAT44(uStack_bc,uStack_c0);
          puVar19 = (ulong *)puVar23[9];
          puVar2 = puVar23 + 10;
          if (puVar19 != puVar2) {
            if (puVar19 != (ulong *)0x0) {
              _free(puVar19[-1]);
            }
            puVar23[8] = puVar23 + 1;
            puVar23[9] = puVar2;
            puVar19 = puVar2;
          }
          if (uStack_f0._4_4_ < 3) {
            *puVar19 = *puStack_a8;
            puVar19[1] = puStack_a8[1];
            uStack_f0._0_4_ = 0x42ff0000;
            puVar30[1] = 0;
            *puVar30 = 0;
            puVar30[3] = 0;
            puVar30[2] = 0;
            puVar30[5] = 0;
            puVar30[4] = 0;
            *(undefined8 *)((long)puVar30 + 0x34) = 0;
            *(undefined8 *)((long)puVar30 + 0x2c) = 0;
            if (puStack_a8 != &uStack_a0) {
              _free(puStack_a8[-1]);
            }
          }
          else {
            puVar23[9] = puStack_a8;
            puVar23[8] = piStack_b0;
          }
          lVar28 = lVar28 + 1;
        } while (lVar28 != (int)uVar9);
      }
    }
    else {
      if (uVar9 != 3) goto LAB_109a8d0b4;
      plVar16 = *(long **)(param_1 + 2);
      lVar28 = *plVar16;
      lVar15 = plVar16[1];
      func_0x000109516d68(param_2,lVar15 - lVar28);
      if (lVar15 != lVar28) {
        lVar18 = 0;
        uVar9 = (uVar5 >> 3 & 0x1ff) + 1;
        uVar14 = 0xfa50UL >> (((ulong)uVar5 & 7) << 1) & 3;
        uVar26 = (ulong)(uVar9 << uVar14);
        puVar30 = (undefined8 *)((ulong)&uStack_f0 | 4);
        uVar22 = (ulong)&uStack_f0 | 8;
        uVar12 = (uint)((ulong)uVar5 & 7);
        lVar24 = 1L << uVar14;
        uVar5 = uVar12 | 0x42ff4000;
        do {
          uStack_e0 = *plVar16 + lVar18 * uVar26;
          uStack_f0._4_4_ = 2;
          iStack_e8 = 1;
          uStack_c8._0_4_ = 0;
          uStack_c8._4_4_ = 0;
          uStack_d0._0_4_ = 0;
          uStack_d0._4_4_ = 0;
          lStack_b8 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_e4 = uVar9;
          piStack_b0 = (int *)uVar22;
          puStack_a8 = &uStack_a0;
          uStack_d8 = uStack_e0;
          if (*plVar16 == 0) {
            puVar11 = (undefined4 *)0x24;
            uStack_f0._0_4_ = uVar12 | 0x42ff0000;
            func_0x000107c2ae8c();
            *puVar11 = 1;
            uStack_150 = puVar11 + 1;
            uStack_148 = 0x1c;
            *(undefined1 *)(puVar11 + 8) = 0;
            *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&uStack_150,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
            goto LAB_109a8d110;
          }
          uStack_d0 = uStack_e0 + uVar26;
          puVar23 = (undefined8 *)(*param_2 + lVar18 * 0x60);
          uStack_f0._0_4_ = uVar5;
          uStack_a0 = uVar26;
          uStack_98 = lVar24;
          uStack_c8 = uStack_d0;
          if (puVar23[7] != 0) {
            piVar1 = (int *)(puVar23[7] + 0x14);
            do {
              iVar27 = *piVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar27 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar27 + -1 == 0) {
              func_0x000109a848d4(puVar23);
            }
          }
          puVar23[7] = 0;
          puVar23[3] = 0;
          puVar23[2] = 0;
          puVar23[5] = 0;
          puVar23[4] = 0;
          if (0 < *(int *)((long)puVar23 + 4)) {
            lVar17 = 0;
            lVar20 = puVar23[8];
            do {
              *(undefined4 *)(lVar20 + lVar17 * 4) = 0;
              lVar17 = lVar17 + 1;
            } while (lVar17 < *(int *)((long)puVar23 + 4));
          }
          puVar23[1] = CONCAT44(uStack_e4,iStack_e8);
          *puVar23 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0);
          puVar23[3] = uStack_d8;
          puVar23[2] = uStack_e0;
          puVar23[5] = uStack_c8;
          puVar23[4] = uStack_d0;
          puVar23[7] = lStack_b8;
          puVar23[6] = CONCAT44(uStack_bc,uStack_c0);
          puVar19 = (ulong *)puVar23[9];
          puVar2 = puVar23 + 10;
          if (puVar19 != puVar2) {
            if (puVar19 != (ulong *)0x0) {
              _free(puVar19[-1]);
            }
            puVar23[8] = puVar23 + 1;
            puVar23[9] = puVar2;
            puVar19 = puVar2;
          }
          if (uStack_f0._4_4_ < 3) {
            *puVar19 = *puStack_a8;
            puVar19[1] = puStack_a8[1];
            uStack_f0._0_4_ = 0x42ff0000;
            puVar30[1] = 0;
            *puVar30 = 0;
            puVar30[3] = 0;
            puVar30[2] = 0;
            puVar30[5] = 0;
            puVar30[4] = 0;
            *(undefined8 *)((long)puVar30 + 0x34) = 0;
            *(undefined8 *)((long)puVar30 + 0x2c) = 0;
            if (puStack_a8 != &uStack_a0) {
              _free(puStack_a8[-1]);
            }
          }
          else {
            puVar23[9] = puStack_a8;
            puVar23[8] = piStack_b0;
          }
          lVar18 = lVar18 + 1;
        } while (lVar18 != lVar15 - lVar28);
      }
    }
  }
  else if (uVar9 < 6) {
    if (uVar9 == 4) {
      plVar16 = *(long **)(param_1 + 2);
      uVar14 = (plVar16[1] - *plVar16 >> 3) * -0x5555555555555555;
      iVar27 = (int)uVar14;
      func_0x000109516d68(param_2,(long)iVar27);
      if (0 < iVar27) {
        uVar22 = 0;
        puVar30 = (undefined8 *)((ulong)&uStack_f0 | 4);
        uVar26 = (ulong)&uStack_f0 | 8;
        uVar12 = (uVar5 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar5 & 7) << 1) & 3);
        uVar29 = (ulong)uVar12;
        uVar9 = uVar5 & 0xfff | 0x42ff4000;
        do {
          lVar28 = *plVar16;
          FUN_109a8b004(&uStack_80,param_1,uVar22);
          lVar28 = *(long *)(lVar28 + uVar22 * 0x18);
          uStack_f0._4_4_ = 2;
          iStack_e8 = iStack_7c;
          uStack_e4 = uStack_80;
          uStack_e0._0_4_ = (undefined4)lVar28;
          uStack_e0._4_4_ = (undefined4)((ulong)lVar28 >> 0x20);
          uStack_c8._0_4_ = 0;
          uStack_c8._4_4_ = 0;
          uStack_d0._0_4_ = 0;
          uStack_d0._4_4_ = 0;
          lStack_b8 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_d8._0_4_ = (undefined4)uStack_e0;
          uStack_d8._4_4_ = uStack_e0._4_4_;
          piStack_b0 = (int *)uVar26;
          puStack_a8 = &uStack_a0;
          if (lVar28 == 0 && (long)(int)uStack_80 * (long)iStack_7c != 0) {
            puVar11 = (undefined4 *)0x24;
            uStack_f0._0_4_ = uVar5 & 0xfff | 0x42ff0000;
            func_0x000107c2ae8c();
            *puVar11 = 1;
            uStack_150 = puVar11 + 1;
            uStack_148 = 0x1c;
            *(undefined1 *)(puVar11 + 8) = 0;
            *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&uStack_150,&UNK_10f2e8162,&UNK_10f594bc9,0x1bb);
            goto LAB_109a8d110;
          }
          uStack_a0 = (long)(int)uStack_80 * (long)(int)uVar12;
          uStack_d0 = lVar28 + uStack_a0 * (long)iStack_7c;
          puVar23 = (undefined8 *)(*param_2 + uVar22 * 0x60);
          uStack_f0._0_4_ = uVar9;
          uStack_98 = uVar29;
          uStack_c8 = uStack_d0;
          if (puVar23[7] != 0) {
            piVar1 = (int *)(puVar23[7] + 0x14);
            do {
              iVar27 = *piVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar27 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar27 + -1 == 0) {
              func_0x000109a848d4(puVar23);
            }
          }
          puVar23[7] = 0;
          puVar23[3] = 0;
          puVar23[2] = 0;
          puVar23[5] = 0;
          puVar23[4] = 0;
          if (0 < *(int *)((long)puVar23 + 4)) {
            lVar28 = 0;
            lVar15 = puVar23[8];
            do {
              *(undefined4 *)(lVar15 + lVar28 * 4) = 0;
              lVar28 = lVar28 + 1;
            } while (lVar28 < *(int *)((long)puVar23 + 4));
          }
          puVar23[1] = CONCAT44(uStack_e4,iStack_e8);
          *puVar23 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0);
          puVar23[3] = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
          puVar23[2] = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
          puVar23[5] = uStack_c8;
          puVar23[4] = uStack_d0;
          puVar23[7] = lStack_b8;
          puVar23[6] = CONCAT44(uStack_bc,uStack_c0);
          puVar19 = (ulong *)puVar23[9];
          puVar2 = puVar23 + 10;
          if (puVar19 != puVar2) {
            if (puVar19 != (ulong *)0x0) {
              _free(puVar19[-1]);
            }
            puVar23[8] = puVar23 + 1;
            puVar23[9] = puVar2;
            puVar19 = puVar2;
          }
          if (uStack_f0._4_4_ < 3) {
            *puVar19 = *puStack_a8;
            puVar19[1] = puStack_a8[1];
            uStack_f0._0_4_ = 0x42ff0000;
            puVar30[1] = 0;
            *puVar30 = 0;
            puVar30[3] = 0;
            puVar30[2] = 0;
            puVar30[5] = 0;
            puVar30[4] = 0;
            *(undefined8 *)((long)puVar30 + 0x34) = 0;
            *(undefined8 *)((long)puVar30 + 0x2c) = 0;
            if (puStack_a8 != &uStack_a0) {
              _free(puStack_a8[-1]);
            }
          }
          else {
            puVar23[9] = puStack_a8;
            puVar23[8] = piStack_b0;
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 != (uVar14 & 0x7fffffff));
      }
    }
    else {
      if (uVar9 != 5) goto LAB_109a8d0b4;
      plVar16 = *(long **)(param_1 + 2);
      lVar28 = *plVar16;
      lVar15 = plVar16[1];
      lVar18 = (lVar15 - lVar28 >> 5) * -0x5555555555555555;
      func_0x000109516d68(param_2,lVar18);
      if (lVar15 != lVar28) {
        lVar28 = 0;
        do {
          lVar15 = *param_2;
          if (lVar15 != *plVar16) {
            puVar11 = (undefined4 *)(*plVar16 + lVar28 * 0x60);
            if (*(long *)(puVar11 + 0xe) != 0) {
              piVar1 = (int *)(*(long *)(puVar11 + 0xe) + 0x14);
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = *piVar1 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            puVar4 = (undefined4 *)(lVar15 + lVar28 * 0x60);
            if (*(long *)(puVar4 + 0xe) != 0) {
              piVar1 = (int *)(*(long *)(puVar4 + 0xe) + 0x14);
              do {
                iVar27 = *piVar1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = iVar27 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar27 + -1 == 0) {
                func_0x000109a848d4(puVar4);
              }
            }
            *(undefined8 *)(puVar4 + 0xe) = 0;
            *(undefined8 *)(puVar4 + 6) = 0;
            *(undefined8 *)(puVar4 + 4) = 0;
            *(undefined8 *)(puVar4 + 10) = 0;
            *(undefined8 *)(puVar4 + 8) = 0;
            if ((int)puVar4[1] < 1) {
              *puVar4 = *puVar11;
LAB_109a8c4c8:
              if (2 < (int)puVar11[1]) goto LAB_109a8c4fc;
              puVar4[1] = puVar11[1];
              *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar11 + 2);
              puVar30 = *(undefined8 **)(puVar11 + 0x12);
              puVar23 = *(undefined8 **)(puVar4 + 0x12);
              *puVar23 = *puVar30;
              puVar23[1] = puVar30[1];
            }
            else {
              lVar15 = 0;
              lVar24 = *(long *)(puVar4 + 0x10);
              do {
                *(undefined4 *)(lVar24 + lVar15 * 4) = 0;
                lVar15 = lVar15 + 1;
              } while (lVar15 < (int)puVar4[1]);
              *puVar4 = *puVar11;
              if ((int)puVar4[1] < 3) goto LAB_109a8c4c8;
LAB_109a8c4fc:
              func_0x000109a84868(puVar4,puVar11);
            }
            uVar31 = *(undefined8 *)(puVar11 + 4);
            *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar11 + 6);
            *(undefined8 *)(puVar4 + 4) = uVar31;
            uVar31 = *(undefined8 *)(puVar11 + 8);
            *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(puVar11 + 10);
            *(undefined8 *)(puVar4 + 8) = uVar31;
            uVar31 = *(undefined8 *)(puVar11 + 0xc);
            *(undefined8 *)(puVar4 + 0xe) = *(undefined8 *)(puVar11 + 0xe);
            *(undefined8 *)(puVar4 + 0xc) = uVar31;
          }
          lVar28 = lVar28 + 1;
        } while (lVar28 != lVar18);
      }
    }
  }
  else if (uVar9 == 6) {
    uStack_f0._0_4_ = 0x42ff0000;
    piStack_b0 = &iStack_e8;
    uStack_e4 = 0;
    uStack_e0._0_4_ = 0;
    uStack_f0._4_4_ = 0;
    iStack_e8 = 0;
    lStack_b8 = 0;
    uStack_bc = 0;
    uStack_c8._4_4_ = 0;
    uStack_c0 = 0;
    uStack_d0._4_4_ = 0;
    uStack_c8._0_4_ = 0;
    uStack_d8._4_4_ = 0;
    uStack_d0._0_4_ = 0;
    uStack_e0._4_4_ = 0;
    uStack_d8._0_4_ = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    plVar16 = (long *)**(undefined8 **)(param_1 + 2);
    puStack_a8 = &uStack_a0;
    (**(code **)(*plVar16 + 0x18))(plVar16,*(undefined8 **)(param_1 + 2),&uStack_f0,0xffffffff);
    iVar27 = *piStack_b0;
    func_0x000109516d68(param_2,(long)iVar27);
    if (0 < iVar27) {
      puVar30 = (undefined8 *)((ulong)&uStack_150 | 4);
      lVar28 = 0;
      do {
        lVar15 = lVar28 + 1;
        uStack_80 = (uint)lVar28;
        iStack_7c = (int)lVar15;
        uStack_88 = 0x7fffffff80000000;
        FUN_109a84930(&uStack_150,&uStack_f0,&uStack_80,&uStack_88);
        puVar23 = (undefined8 *)(*param_2 + lVar28 * 0x60);
        if (puVar23[7] != 0) {
          piVar1 = (int *)(puVar23[7] + 0x14);
          do {
            iVar13 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar13 + -1 == 0) {
            func_0x000109a848d4(puVar23);
          }
        }
        puVar23[7] = 0;
        puVar23[3] = 0;
        puVar23[2] = 0;
        puVar23[5] = 0;
        puVar23[4] = 0;
        if (0 < *(int *)((long)puVar23 + 4)) {
          lVar28 = 0;
          lVar18 = puVar23[8];
          do {
            *(undefined4 *)(lVar18 + lVar28 * 4) = 0;
            lVar28 = lVar28 + 1;
          } while (lVar28 < *(int *)((long)puVar23 + 4));
        }
        puVar23[1] = uStack_148;
        *puVar23 = uStack_150;
        puVar23[3] = uStack_138;
        puVar23[2] = uStack_140;
        puVar23[5] = uStack_128;
        puVar23[4] = uStack_130;
        puVar23[7] = uStack_118;
        puVar23[6] = uStack_120;
        puVar21 = (undefined8 *)puVar23[9];
        puVar3 = puVar23 + 10;
        iVar13 = uStack_150._4_4_;
        if (puVar21 != puVar3) {
          if (puVar21 != (undefined8 *)0x0) {
            _free(puVar21[-1]);
            iVar13 = uStack_150._4_4_;
          }
          puVar23[8] = puVar23 + 1;
          puVar23[9] = puVar3;
          puVar21 = puVar3;
        }
        if (iVar13 < 3) {
          *puVar21 = *puStack_108;
          puVar21[1] = puStack_108[1];
          uStack_150 = (undefined4 *)CONCAT44(uStack_150._4_4_,0x42ff0000);
          puVar30[1] = 0;
          *puVar30 = 0;
          puVar30[3] = 0;
          puVar30[2] = 0;
          puVar30[5] = 0;
          puVar30[4] = 0;
          *(undefined8 *)((long)puVar30 + 0x34) = 0;
          *(undefined8 *)((long)puVar30 + 0x2c) = 0;
          if (puStack_108 != auStack_100) {
            _free(puStack_108[-1]);
          }
        }
        else {
          puVar23[9] = puStack_108;
          puVar23[8] = uStack_110;
        }
        lVar28 = lVar15;
      } while (lVar15 != iVar27);
    }
    if (lStack_b8 != 0) {
      piVar1 = (int *)(lStack_b8 + 0x14);
      do {
        iVar27 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar27 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar27 + -1 == 0) {
        func_0x000109a848d4(&uStack_f0);
      }
    }
    lStack_b8 = 0;
    uStack_d8._0_4_ = 0;
    uStack_d8._4_4_ = 0;
    uStack_e0._0_4_ = 0;
    uStack_e0._4_4_ = 0;
    uStack_c8._0_4_ = 0;
    uStack_c8._4_4_ = 0;
    uStack_d0._0_4_ = 0;
    uStack_d0._4_4_ = 0;
    if (0 < uStack_f0._4_4_) {
      lVar28 = 0;
      do {
        piStack_b0[lVar28] = 0;
        lVar28 = lVar28 + 1;
      } while (lVar28 < uStack_f0._4_4_);
    }
    if (puStack_a8 != &uStack_a0 && puStack_a8 != (ulong *)0x0) {
      _free(puStack_a8[-1]);
    }
  }
  else {
    if (uVar9 != 0xb) goto LAB_109a8d0b4;
    plVar16 = *(long **)(param_1 + 2);
    lVar28 = *plVar16;
    lVar15 = plVar16[1];
    lVar18 = (lVar15 - lVar28 >> 4) * -0x3333333333333333;
    func_0x000109516d68(param_2,lVar18);
    if (lVar15 != lVar28) {
      lVar28 = 0;
      puVar30 = (undefined8 *)((ulong)&uStack_f0 | 4);
      do {
        FUN_109ac6640(&uStack_f0,*plVar16 + lVar28 * 0x50,uVar5 & 0x3000000);
        puVar23 = (undefined8 *)(*param_2 + lVar28 * 0x60);
        if (puVar23[7] != 0) {
          piVar1 = (int *)(puVar23[7] + 0x14);
          do {
            iVar27 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar27 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar27 + -1 == 0) {
            func_0x000109a848d4(puVar23);
          }
        }
        puVar23[7] = 0;
        puVar23[3] = 0;
        puVar23[2] = 0;
        puVar23[5] = 0;
        puVar23[4] = 0;
        if (0 < *(int *)((long)puVar23 + 4)) {
          lVar15 = 0;
          lVar24 = puVar23[8];
          do {
            *(undefined4 *)(lVar24 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < *(int *)((long)puVar23 + 4));
        }
        puVar23[1] = CONCAT44(uStack_e4,iStack_e8);
        *puVar23 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0);
        puVar23[3] = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
        puVar23[2] = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
        puVar23[5] = CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8);
        puVar23[4] = CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
        puVar23[7] = lStack_b8;
        puVar23[6] = CONCAT44(uStack_bc,uStack_c0);
        puVar19 = (ulong *)puVar23[9];
        puVar2 = puVar23 + 10;
        if (puVar19 != puVar2) {
          if (puVar19 != (ulong *)0x0) {
            _free(puVar19[-1]);
          }
          puVar23[8] = puVar23 + 1;
          puVar23[9] = puVar2;
          puVar19 = puVar2;
        }
        if (uStack_f0._4_4_ < 3) {
          *puVar19 = *puStack_a8;
          puVar19[1] = puStack_a8[1];
          uStack_f0._0_4_ = 0x42ff0000;
          puVar30[1] = 0;
          *puVar30 = 0;
          puVar30[3] = 0;
          puVar30[2] = 0;
          puVar30[5] = 0;
          puVar30[4] = 0;
          *(undefined8 *)((long)puVar30 + 0x34) = 0;
          *(undefined8 *)((long)puVar30 + 0x2c) = 0;
          if (puStack_a8 != &uStack_a0) {
            _free(puStack_a8[-1]);
          }
        }
        else {
          puVar23[9] = puStack_a8;
          puVar23[8] = piStack_b0;
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 != lVar18);
    }
  }
  return;
}



/* Entry: 109a8d1f0; end: 109a8d583;  */

ulong FUN_109a8d1f0(uint *param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 & 0x1f0000;
  uVar3 = (ulong)uVar1;
  if ((*param_1 & 0x1f0000) != 0) {
    iVar6 = (int)param_3;
    if (uVar1 == 0xa0000) {
      if (-1 < iVar6) {
        puVar4 = (undefined8 *)0xc;
        func_0x000107c2ae8c();
        *puVar4 = 0x203c206900000001;
        puStack_30 = (undefined4 *)((long)puVar4 + 4);
        uStack_28 = 5;
        *(undefined2 *)(puVar4 + 1) = 0x30;
        FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f597db2,&UNK_10f597913,0x64c);
LAB_109a8d4ec:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109a8d4f0);
        (*pcVar2)();
      }
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + 4);
      uVar3 = (ulong)uVar1;
      if ((param_2 != (undefined8 *)0x0) && (0 < (int)uVar1)) {
        puVar5 = *(undefined4 **)(*(long *)(param_1 + 2) + 0x30);
        uVar8 = uVar3;
        do {
          *(undefined4 *)param_2 = *puVar5;
          uVar8 = uVar8 - 1;
          puVar5 = puVar5 + 1;
          param_2 = (undefined8 *)((long)param_2 + 4);
        } while (uVar8 != 0);
      }
    }
    else if (uVar1 == 0x10000) {
      if (-1 < iVar6) {
        puVar4 = (undefined8 *)0xc;
        func_0x000107c2ae8c();
        *puVar4 = 0x203c206900000001;
        puStack_30 = (undefined4 *)((long)puVar4 + 4);
        uStack_28 = 5;
        *(undefined2 *)(puVar4 + 1) = 0x30;
        FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f597db2,&UNK_10f597913,0x643);
        goto LAB_109a8d4ec;
      }
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + 4);
      uVar3 = (ulong)uVar1;
      if ((param_2 != (undefined8 *)0x0) && (0 < (int)uVar1)) {
        puVar5 = *(undefined4 **)(*(long *)(param_1 + 2) + 0x40);
        uVar8 = uVar3;
        do {
          *(undefined4 *)param_2 = *puVar5;
          uVar8 = uVar8 - 1;
          puVar5 = puVar5 + 1;
          param_2 = (undefined8 *)((long)param_2 + 4);
        } while (uVar8 != 0);
      }
    }
    else if ((iVar6 < 0) || (uVar1 != 0x50000)) {
      if ((iVar6 < 0) || (uVar1 != 0xb0000)) {
        FUN_109a8b004(&puStack_30,param_1,param_3);
        if (param_2 != (undefined8 *)0x0) {
          uVar9 = NEON_rev64(puStack_30,4);
          *param_2 = uVar9;
        }
        uVar3 = 2;
      }
      else {
        lVar7 = **(long **)(param_1 + 2);
        if ((int)((ulong)((*(long **)(param_1 + 2))[1] - lVar7) >> 4) * -0x33333333 <= iVar6) {
          puVar5 = (undefined4 *)0x18;
          func_0x000107c2ae8c();
          *puVar5 = 1;
          puStack_30 = puVar5 + 1;
          uStack_28 = 0x12;
          *(undefined1 *)((long)puVar5 + 0x16) = 0;
          *(undefined2 *)(puVar5 + 5) = 0x2928;
          *(undefined8 *)(puVar5 + 3) = 0x657a69732e767629;
          *(undefined8 *)(puVar5 + 1) = 0x746e6928203c2069;
          FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f597db2,&UNK_10f597913,0x660);
          goto LAB_109a8d4ec;
        }
        lVar7 = lVar7 + (param_3 & 0xffffffff) * 0x50;
        uVar1 = *(uint *)(lVar7 + 4);
        uVar3 = (ulong)uVar1;
        if ((param_2 != (undefined8 *)0x0) && (0 < (int)uVar1)) {
          puVar5 = *(undefined4 **)(lVar7 + 0x30);
          uVar8 = uVar3;
          do {
            *(undefined4 *)param_2 = *puVar5;
            uVar8 = uVar8 - 1;
            puVar5 = puVar5 + 1;
            param_2 = (undefined8 *)((long)param_2 + 4);
          } while (uVar8 != 0);
        }
      }
    }
    else {
      lVar7 = **(long **)(param_1 + 2);
      if ((int)((ulong)((*(long **)(param_1 + 2))[1] - lVar7) >> 5) * -0x55555555 <= iVar6) {
        puVar5 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar5 = 1;
        puStack_30 = puVar5 + 1;
        uStack_28 = 0x12;
        *(undefined1 *)((long)puVar5 + 0x16) = 0;
        *(undefined2 *)(puVar5 + 5) = 0x2928;
        *(undefined8 *)(puVar5 + 3) = 0x657a69732e767629;
        *(undefined8 *)(puVar5 + 1) = 0x746e6928203c2069;
        FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f597db2,&UNK_10f597913,0x656);
        goto LAB_109a8d4ec;
      }
      lVar7 = lVar7 + (param_3 & 0xffffffff) * 0x60;
      uVar1 = *(uint *)(lVar7 + 4);
      uVar3 = (ulong)uVar1;
      if ((param_2 != (undefined8 *)0x0) && (0 < (int)uVar1)) {
        puVar5 = *(undefined4 **)(lVar7 + 0x40);
        uVar8 = uVar3;
        do {
          *(undefined4 *)param_2 = *puVar5;
          uVar8 = uVar8 - 1;
          puVar5 = puVar5 + 1;
          param_2 = (undefined8 *)((long)param_2 + 4);
        } while (uVar8 != 0);
      }
    }
  }
  return uVar3;
}



/* Entry: 109a8d584; end: 109a8d7e7;  */

bool FUN_109a8d584(uint *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iStack_38;
  int iStack_34;
  
  uVar1 = *param_2 & 0x1f0000;
  if ((*param_1 & 0x1f0000) == 0xa0000) {
    lVar5 = *(long *)(param_1 + 2);
    if (uVar1 == 0xa0000) {
      piVar4 = *(int **)(lVar5 + 0x30);
      uVar1 = piVar4[-1];
      uVar7 = (ulong)uVar1;
      piVar6 = *(int **)(*(long *)(param_2 + 2) + 0x30);
      if (uVar1 != piVar6[-1]) {
        return false;
      }
      if (uVar1 != 2) {
        if ((int)uVar1 < 1) {
          return true;
        }
        do {
          uVar7 = uVar7 - 1;
          bVar2 = *piVar4 == *piVar6;
          if (!bVar2) {
            return bVar2;
          }
          piVar4 = piVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (uVar7 != 0);
        return bVar2;
      }
LAB_109a8d718:
      if (*piVar4 != *piVar6) {
        return false;
      }
      return piVar4[1] == piVar6[1];
    }
    if (uVar1 == 0x10000) {
      piVar4 = *(int **)(lVar5 + 0x30);
      uVar1 = piVar4[-1];
      uVar7 = (ulong)uVar1;
      piVar6 = *(int **)(*(long *)(param_2 + 2) + 0x40);
      if (uVar1 != piVar6[-1]) {
        return false;
      }
      if (uVar1 != 2) {
        if ((int)uVar1 < 1) {
          return true;
        }
        do {
          uVar7 = uVar7 - 1;
          bVar2 = *piVar4 == *piVar6;
          if (!bVar2) {
            return bVar2;
          }
          piVar4 = piVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (uVar7 != 0);
        return bVar2;
      }
      goto LAB_109a8d718;
    }
    if (2 < *(int *)(lVar5 + 4)) {
      return false;
    }
    piVar4 = *(int **)(lVar5 + 0x30);
  }
  else {
    if ((*param_1 & 0x1f0000) != 0x10000) {
      FUN_109a8b004(&iStack_38,param_1,0xffffffff);
      iVar8 = iStack_38;
      iVar9 = iStack_34;
      goto LAB_109a8d760;
    }
    lVar5 = *(long *)(param_1 + 2);
    if (uVar1 == 0xa0000) {
      piVar4 = *(int **)(lVar5 + 0x40);
      uVar1 = piVar4[-1];
      uVar7 = (ulong)uVar1;
      piVar6 = *(int **)(*(long *)(param_2 + 2) + 0x30);
      if (uVar1 != piVar6[-1]) {
        return false;
      }
      if (uVar1 != 2) {
        if ((int)uVar1 < 1) {
          return true;
        }
        do {
          uVar7 = uVar7 - 1;
          bVar2 = *piVar4 == *piVar6;
          if (!bVar2) {
            return bVar2;
          }
          piVar4 = piVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (uVar7 != 0);
        return bVar2;
      }
      goto LAB_109a8d718;
    }
    if (uVar1 == 0x10000) {
      piVar4 = *(int **)(lVar5 + 0x40);
      uVar1 = piVar4[-1];
      uVar7 = (ulong)uVar1;
      piVar6 = *(int **)(*(long *)(param_2 + 2) + 0x40);
      if (uVar1 != piVar6[-1]) {
        return false;
      }
      if (uVar1 != 2) {
        if ((int)uVar1 < 1) {
          return true;
        }
        do {
          uVar7 = uVar7 - 1;
          bVar2 = *piVar4 == *piVar6;
          if (!bVar2) {
            return bVar2;
          }
          piVar4 = piVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (uVar7 != 0);
        return bVar2;
      }
      goto LAB_109a8d718;
    }
    if (2 < *(int *)(lVar5 + 4)) {
      return false;
    }
    piVar4 = *(int **)(lVar5 + 0x40);
  }
  iVar8 = piVar4[1];
  iVar9 = *piVar4;
LAB_109a8d760:
  puVar3 = param_2;
  FUN_109a8d7e8(param_2,0xffffffff);
  if (2 < (int)puVar3) {
    return false;
  }
  FUN_109a8b004(&iStack_38,param_2,0xffffffff);
  if (iVar8 == iStack_38) {
    return iVar9 == iStack_34;
  }
  return false;
}



/* Entry: 109a8d7e8; end: 109a8de53;  */

undefined4 FUN_109a8d7e8(uint *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long alStack_30 [2];
  
  uVar1 = (*param_1 & 0x1f0000) - 0x10000 >> 0x10;
  if (uVar1 < 5) {
    if (uVar1 == 0) {
      if (-1 < (int)param_2) {
        puVar3 = (undefined8 *)0xc;
        func_0x000107c2ae8c();
        *puVar3 = 0x203c206900000001;
        alStack_30[0] = (long)puVar3 + 4;
        alStack_30[1] = 5;
        *(undefined2 *)(puVar3 + 1) = 0x30;
        FUN_109ac3188(0xffffff29,alStack_30,&DAT_10f597db9,&UNK_10f597913,0x69d);
        goto LAB_109a8dc80;
      }
LAB_109a8d8c8:
      lVar4 = *(long *)(param_1 + 2);
      goto LAB_109a8d8cc;
    }
    if (uVar1 == 1) {
      if ((int)param_2 < 0) {
        return 2;
      }
      puVar3 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar3 = 0x203c206900000001;
      alStack_30[0] = (long)puVar3 + 4;
      alStack_30[1] = 5;
      *(undefined2 *)(puVar3 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,alStack_30,&DAT_10f597db9,&UNK_10f597913,0x6af);
      goto LAB_109a8dc80;
    }
  }
  else {
    if (uVar1 == 5) {
      if ((int)param_2 < 0) {
        return *(undefined4 *)(*(long *)(param_1 + 2) + 0x14);
      }
      puVar3 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar3 = 0x203c206900000001;
      alStack_30[0] = (long)puVar3 + 4;
      alStack_30[1] = 5;
      *(undefined2 *)(puVar3 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,alStack_30,&DAT_10f597db9,&UNK_10f597913,0x6a3);
      goto LAB_109a8dc80;
    }
    if (uVar1 == 9) {
      if (-1 < (int)param_2) {
        puVar3 = (undefined8 *)0xc;
        func_0x000107c2ae8c();
        *puVar3 = 0x203c206900000001;
        alStack_30[0] = (long)puVar3 + 4;
        alStack_30[1] = 5;
        *(undefined2 *)(puVar3 + 1) = 0x30;
        FUN_109ac3188(0xffffff29,alStack_30,&DAT_10f597db9,&UNK_10f597913,0x6a9);
        goto LAB_109a8dc80;
      }
      goto LAB_109a8d8c8;
    }
  }
  uVar1 = (*param_1 & 0x1f0000) >> 0x10;
  if (uVar1 < 7) {
    if (uVar1 < 4) {
      if (uVar1 == 0) {
        return 0;
      }
      if (uVar1 == 3) {
LAB_109a8d904:
        if ((int)param_2 < 0) {
          return 2;
        }
        puVar3 = (undefined8 *)0xc;
        func_0x000107c2ae8c();
        *puVar3 = 0x203c206900000001;
        alStack_30[0] = (long)puVar3 + 4;
        alStack_30[1] = 5;
        *(undefined2 *)(puVar3 + 1) = 0x30;
        FUN_109ac3188(0xffffff29,alStack_30,&DAT_10f597db9,&UNK_10f597913,0x6b5);
        goto LAB_109a8dc80;
      }
    }
    else {
      if (uVar1 == 4) {
        if ((int)param_2 < 0) {
          return 1;
        }
        if ((int)param_2 <
            (int)((ulong)((*(long **)(param_1 + 2))[1] - **(long **)(param_1 + 2)) >> 3) *
            -0x55555555) {
          return 2;
        }
        FUN_109a38ed8(alStack_30,&UNK_10f597d9f);
        FUN_109ac3188(0xffffff29,alStack_30,&DAT_10f597db9,&UNK_10f597913,0x6c1);
        goto LAB_109a8dc80;
      }
      if (uVar1 == 5) {
        if ((int)param_2 < 0) {
          return 1;
        }
        lVar4 = **(long **)(param_1 + 2);
        if ((int)((ulong)((*(long **)(param_1 + 2))[1] - lVar4) >> 5) * -0x55555555 <= (int)param_2)
        {
          FUN_109a38ed8(alStack_30,&UNK_10f597d9f);
          FUN_109ac3188(0xffffff29,alStack_30,&DAT_10f597db9,&UNK_10f597913,0x6ca);
          goto LAB_109a8dc80;
        }
        lVar5 = 0x60;
        goto LAB_109a8dadc;
      }
    }
  }
  else if (uVar1 < 9) {
    if (uVar1 == 7) {
      if ((int)param_2 < 0) {
        return 2;
      }
      FUN_109a38ed8(alStack_30,&UNK_10f597c95);
      FUN_109ac3188(0xffffff29,alStack_30,&DAT_10f597db9,&UNK_10f597913,0x6db);
      goto LAB_109a8dc80;
    }
    if (uVar1 == 8) {
      if ((int)param_2 < 0) {
        return 2;
      }
      FUN_109a38ed8(alStack_30,&UNK_10f597c95);
      FUN_109ac3188(0xffffff29,alStack_30,&DAT_10f597db9,&UNK_10f597913,0x6e7);
      goto LAB_109a8dc80;
    }
  }
  else {
    if (uVar1 == 9) {
      if ((int)param_2 < 0) {
        return 2;
      }
      FUN_109a38ed8(alStack_30,&UNK_10f597c95);
      FUN_109ac3188(0xffffff29,alStack_30,&DAT_10f597db9,&UNK_10f597913,0x6e1);
      goto LAB_109a8dc80;
    }
    if (uVar1 == 0xb) {
      if ((int)param_2 < 0) {
        return 1;
      }
      lVar4 = **(long **)(param_1 + 2);
      if ((int)((ulong)((*(long **)(param_1 + 2))[1] - lVar4) >> 4) * -0x33333333 <= (int)param_2) {
        FUN_109a38ed8(alStack_30,&UNK_10f597d9f);
        FUN_109ac3188(0xffffff29,alStack_30,&DAT_10f597db9,&UNK_10f597913,0x6d4);
        goto LAB_109a8dc80;
      }
      lVar5 = 0x50;
LAB_109a8dadc:
      lVar4 = lVar4 + (ulong)param_2 * lVar5;
LAB_109a8d8cc:
      return *(undefined4 *)(lVar4 + 4);
    }
    if (uVar1 == 0xc) goto LAB_109a8d904;
  }
  FUN_109a38ed8(alStack_30,&UNK_10f597d6b);
  FUN_109ac3188(0xffffff2b,alStack_30,&DAT_10f597db9,&UNK_10f597913,0x6eb);
LAB_109a8dc80:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a8dc84);
  (*pcVar2)();
}



/* Entry: 109a8de54; end: 109a8e1c3;  */

long FUN_109a8de54(uint *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 & 0x1f0000;
  if (uVar1 < 0xa0000) {
    if (uVar1 == 0x10000) {
      if (-1 < (int)param_2) {
        puVar4 = (undefined8 *)0xc;
        func_0x000107c2ae8c();
        *puVar4 = 0x203c206900000001;
        uStack_30 = (undefined4 *)((long)puVar4 + 4);
        uStack_28 = 5;
        *(undefined2 *)(puVar4 + 1) = 0x30;
        FUN_109ac3188(0xffffff29,&uStack_30,"total",&UNK_10f597913,0x6f5);
LAB_109a8e12c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109a8e130);
        (*pcVar2)();
      }
      lVar7 = *(long *)(param_1 + 2);
      uVar6 = (ulong)*(uint *)(lVar7 + 4);
      if (2 < (int)*(uint *)(lVar7 + 4)) {
        lVar3 = 1;
        piVar8 = *(int **)(lVar7 + 0x40);
        do {
          lVar3 = lVar3 * *piVar8;
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 1;
        } while (uVar6 != 0);
        return lVar3;
      }
    }
    else {
      if (uVar1 != 0x50000) {
LAB_109a8df40:
        FUN_109a8b004(&uStack_30);
        goto LAB_109a8df98;
      }
      lVar7 = **(long **)(param_1 + 2);
      lVar3 = ((*(long **)(param_1 + 2))[1] - lVar7 >> 5) * -0x5555555555555555;
      if ((int)param_2 < 0) {
        return lVar3;
      }
      if ((int)lVar3 <= (int)param_2) {
        puVar5 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar5 = 1;
        uStack_30 = puVar5 + 1;
        uStack_28 = 0x12;
        *(undefined1 *)((long)puVar5 + 0x16) = 0;
        *(undefined2 *)(puVar5 + 5) = 0x2928;
        *(undefined8 *)(puVar5 + 3) = 0x657a69732e767629;
        *(undefined8 *)(puVar5 + 1) = 0x746e6928203c2069;
        FUN_109ac3188(0xffffff29,&uStack_30,"total",&UNK_10f597913,0x705);
        goto LAB_109a8e12c;
      }
      lVar7 = lVar7 + (ulong)param_2 * 0x60;
      uVar6 = (ulong)*(uint *)(lVar7 + 4);
      if (2 < (int)*(uint *)(lVar7 + 4)) {
        lVar3 = 1;
        piVar8 = *(int **)(lVar7 + 0x40);
        do {
          lVar3 = lVar3 * *piVar8;
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 1;
        } while (uVar6 != 0);
        return lVar3;
      }
    }
  }
  else if (uVar1 == 0xa0000) {
    if (-1 < (int)param_2) {
      puVar4 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      *puVar4 = 0x203c206900000001;
      uStack_30 = (undefined4 *)((long)puVar4 + 4);
      uStack_28 = 5;
      *(undefined2 *)(puVar4 + 1) = 0x30;
      FUN_109ac3188(0xffffff29,&uStack_30,"total",&UNK_10f597913,0x6fb);
      goto LAB_109a8e12c;
    }
    lVar7 = *(long *)(param_1 + 2);
    uVar6 = (ulong)*(uint *)(lVar7 + 4);
    if (2 < (int)*(uint *)(lVar7 + 4)) {
      lVar3 = 1;
      piVar8 = *(int **)(lVar7 + 0x30);
      do {
        lVar3 = lVar3 * *piVar8;
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 1;
      } while (uVar6 != 0);
      return lVar3;
    }
  }
  else {
    if (uVar1 != 0xb0000) goto LAB_109a8df40;
    lVar7 = **(long **)(param_1 + 2);
    lVar3 = ((*(long **)(param_1 + 2))[1] - lVar7 >> 4) * -0x3333333333333333;
    if ((int)param_2 < 0) {
      return lVar3;
    }
    if ((int)lVar3 <= (int)param_2) {
      puVar5 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar5 = 1;
      uStack_30 = puVar5 + 1;
      uStack_28 = 0x12;
      *(undefined1 *)((long)puVar5 + 0x16) = 0;
      *(undefined2 *)(puVar5 + 5) = 0x2928;
      *(undefined8 *)(puVar5 + 3) = 0x657a69732e767629;
      *(undefined8 *)(puVar5 + 1) = 0x746e6928203c2069;
      FUN_109ac3188(0xffffff29,&uStack_30,"total",&UNK_10f597913,0x710);
      goto LAB_109a8e12c;
    }
    lVar7 = lVar7 + (ulong)param_2 * 0x50;
    uVar6 = (ulong)*(uint *)(lVar7 + 4);
    if (2 < (int)*(uint *)(lVar7 + 4)) {
      lVar3 = 1;
      piVar8 = *(int **)(lVar7 + 0x30);
      do {
        lVar3 = lVar3 * *piVar8;
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 1;
      } while (uVar6 != 0);
      return lVar3;
    }
  }
  uStack_30._0_4_ = *(int *)(lVar7 + 8);
  uStack_30._4_4_ = *(int *)(lVar7 + 0xc);
LAB_109a8df98:
  return (long)uStack_30._4_4_ * (long)(int)uStack_30;
}



/* Entry: 109a8e1c4; end: 109a8e367;  */

bool FUN_109a8e1c4(long param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  bVar2 = false;
  switch(*(ushort *)(param_1 + 2) & 0x1f) {
  case 0:
    break;
  case 1:
    lVar5 = *(long *)(param_1 + 8);
    if (*(long *)(lVar5 + 0x10) != 0) {
      uVar4 = (ulong)*(uint *)(lVar5 + 4);
      if (2 < (int)*(uint *)(lVar5 + 4)) {
        lVar6 = 1;
        piVar7 = *(int **)(lVar5 + 0x40);
        do {
          lVar6 = lVar6 * *piVar7;
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 1;
        } while (uVar4 != 0);
        goto code_r0x000109a8e2c0;
      }
code_r0x000109a8e284:
      lVar6 = (long)*(int *)(lVar5 + 0xc) * (long)*(int *)(lVar5 + 8);
code_r0x000109a8e2c0:
      return lVar6 == 0;
    }
    break;
  case 2:
  case 6:
    goto code_r0x000109a8e2c8;
  case 3:
  case 4:
  case 5:
  case 0xb:
  case 0xd:
    return **(long **)(param_1 + 8) == (*(long **)(param_1 + 8))[1];
  case 7:
    if (*(int *)(*(long *)(param_1 + 8) + 0x10) != 0) {
      return *(int *)(*(long *)(param_1 + 8) + 0x14) == 0;
    }
    break;
  case 8:
  case 9:
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x18);
    goto code_r0x000109a8e2a0;
  case 10:
    lVar5 = *(long *)(param_1 + 8);
    if (*(long *)(lVar5 + 0x20) != 0) {
      uVar4 = (ulong)*(uint *)(lVar5 + 4);
      if (2 < (int)*(uint *)(lVar5 + 4)) {
        lVar6 = 1;
        piVar7 = *(int **)(lVar5 + 0x30);
        do {
          lVar6 = lVar6 * *piVar7;
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 1;
        } while (uVar4 != 0);
        goto code_r0x000109a8e2c0;
      }
      goto code_r0x000109a8e284;
    }
    break;
  case 0xc:
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 8);
code_r0x000109a8e2a0:
    return lVar5 == 0;
  default:
    puVar3 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_30 = puVar3 + 1;
    uStack_28 = 0x1e;
    *(undefined1 *)((long)puVar3 + 0x22) = 0;
    *(undefined8 *)(puVar3 + 3) = 0x726f707075736e75;
    *(undefined8 *)(puVar3 + 1) = 0x2f6e776f6e6b6e55;
    *(undefined8 *)((long)puVar3 + 0x1a) = 0x6570797420796172;
    *(undefined8 *)((long)puVar3 + 0x12) = 0x726120646574726f;
    FUN_109ac3188(0xffffff2b,&puStack_30,"empty",&UNK_10f597913,0x7a5);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109a8e338);
    (*pcVar1)();
  }
  bVar2 = true;
code_r0x000109a8e2c8:
  return bVar2;
}



/* Entry: 109a8e368; end: 109a8e5e7;  */

byte FUN_109a8e368(uint *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 & 0x1f0000;
  if ((uVar1 == 0xa0000) || (uVar1 == 0x10000)) {
    if (-1 < param_2) {
      return 1;
    }
    lVar4 = *(long *)(param_1 + 2);
    goto LAB_109a8e49c;
  }
  if ((*param_1 & 0x190000) == 0) {
    return 1;
  }
  uVar1 = uVar1 - 0x30000 >> 0x10;
  if (uVar1 < 8) {
    if (uVar1 == 0) {
      return 1;
    }
    if (uVar1 != 2) {
LAB_109a8e410:
      puVar3 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar3 = 1;
      puStack_30 = puVar3 + 1;
      uStack_28 = 0x1e;
      *(undefined1 *)((long)puVar3 + 0x22) = 0;
      *(undefined8 *)(puVar3 + 3) = 0x726f707075736e75;
      *(undefined8 *)(puVar3 + 1) = 0x2f6e776f6e6b6e55;
      *(undefined8 *)((long)puVar3 + 0x1a) = 0x6570797420796172;
      *(undefined8 *)((long)puVar3 + 0x12) = 0x726120646574726f;
      FUN_109ac3188(0xffffff2b,&puStack_30,&UNK_10f597dee,&UNK_10f597913,0x7c5);
LAB_109a8e570:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109a8e574);
      (*pcVar2)();
    }
    lVar4 = **(long **)(param_1 + 2);
    uVar6 = ((*(long **)(param_1 + 2))[1] - lVar4 >> 5) * -0x5555555555555555;
    if (uVar6 < (ulong)(long)param_2 || uVar6 - (long)param_2 == 0) {
      puVar3 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      *puVar3 = 1;
      puStack_30 = puVar3 + 1;
      uStack_28 = 0x15;
      *(undefined1 *)((long)puVar3 + 0x19) = 0;
      *(undefined8 *)(puVar3 + 3) = 0x732e7676203c2069;
      *(undefined8 *)(puVar3 + 1) = 0x29745f657a697328;
      *(undefined8 *)((long)puVar3 + 0x11) = 0x2928657a69732e76;
      FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f597dee,&UNK_10f597913,0x7ba);
      goto LAB_109a8e570;
    }
    iVar5 = 0x60;
  }
  else {
    if (uVar1 != 8) {
      if (uVar1 == 9) {
        return 1;
      }
      goto LAB_109a8e410;
    }
    lVar4 = **(long **)(param_1 + 2);
    uVar6 = ((*(long **)(param_1 + 2))[1] - lVar4 >> 4) * -0x3333333333333333;
    if (uVar6 < (ulong)(long)param_2 || uVar6 - (long)param_2 == 0) {
      puVar3 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      *puVar3 = 1;
      puStack_30 = puVar3 + 1;
      uStack_28 = 0x15;
      *(undefined1 *)((long)puVar3 + 0x19) = 0;
      *(undefined8 *)(puVar3 + 3) = 0x732e7676203c2069;
      *(undefined8 *)(puVar3 + 1) = 0x29745f657a697328;
      *(undefined8 *)((long)puVar3 + 0x11) = 0x2928657a69732e76;
      FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f597dee,&UNK_10f597913,0x7c1);
      goto LAB_109a8e570;
    }
    iVar5 = 0x50;
  }
  lVar4 = lVar4 + (long)param_2 * (long)iVar5;
LAB_109a8e49c:
  return *(byte *)(lVar4 + 1) >> 6 & 1;
}



/* Entry: 109a8e5e8; end: 109a8e943;  */

void FUN_109a8e5e8(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  long *plVar10;
  uint *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  uint *extraout_x8;
  long lVar19;
  int *piVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  long *plVar25;
  uint *puVar26;
  ulong uVar27;
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
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  undefined4 *puStack_50;
  undefined1 *puStack_48;
  
  uVar17 = *param_1 & 0x1f0000;
  if (uVar17 == 0) {
FUN_109a8e944:
    uVar17 = *param_2;
    if ((uVar17 >> 0x1e & 1) == 0) {
      uVar2 = uVar17 >> 0x10 & 0x1f;
      if (uVar2 < 7) {
        if (uVar2 < 3) {
          if (uVar2 == 0) {
            return;
          }
          if (uVar2 == 1) {
            lVar18 = *(long *)(param_2 + 2);
            if (*(long *)(lVar18 + 0x38) != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0x38) + 0x14);
              do {
                iVar1 = *piVar20;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                if (bVar6) {
                  *piVar20 = iVar1 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar1 + -1 == 0) {
                func_0x000109a848d4(lVar18);
              }
            }
            *(undefined8 *)(lVar18 + 0x38) = 0;
            *(undefined8 *)(lVar18 + 0x18) = 0;
            *(undefined8 *)(lVar18 + 0x10) = 0;
            *(undefined8 *)(lVar18 + 0x28) = 0;
            *(undefined8 *)(lVar18 + 0x20) = 0;
            if (*(int *)(lVar18 + 4) < 1) {
              return;
            }
            lVar16 = 0;
            lVar19 = *(long *)(lVar18 + 0x40);
            do {
              *(undefined4 *)(lVar19 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < *(int *)(lVar18 + 4));
            return;
          }
        }
        else {
          if (uVar2 == 3) {
            FUN_109a8ee3c(param_2,&stack0xffffffffffffffc0,uVar17 & 0xfff,0xffffffff,0,0);
            return;
          }
          if (uVar2 == 4) {
            plVar10 = *(long **)(param_2 + 2);
            plVar12 = (long *)*plVar10;
            plVar25 = (long *)plVar10[1];
            while (plVar4 = plVar25, plVar4 != plVar12) {
              plVar25 = plVar4 + -3;
              if (*plVar25 != 0) {
                plVar4[-2] = *plVar25;
                __ZdlPv();
              }
            }
            plVar10[1] = (long)plVar12;
            return;
          }
          if (uVar2 == 5) {
            plVar12 = *(long **)(param_2 + 2);
            lVar18 = *plVar12;
            lVar16 = plVar12[1];
            while (lVar16 != lVar18) {
              lVar16 = lVar16 + -0x60;
              FUN_109370334(lVar16);
            }
            plVar12[1] = lVar18;
            return;
          }
        }
      }
      else {
        if (uVar2 < 10) {
          return;
        }
        if (uVar2 == 10) {
          lVar18 = *(long *)(param_2 + 2);
          if (*(long *)(lVar18 + 0x20) != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0x20) + 0x10);
            do {
              iVar1 = *piVar20;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar6) {
                *piVar20 = iVar1 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar1 + -1 == 0) {
              (**(code **)(**(long **)(*(long *)(lVar18 + 0x20) + 8) + 0x20))();
              *(undefined8 *)(lVar18 + 0x20) = 0;
            }
          }
          if (0 < *(int *)(lVar18 + 4)) {
            lVar16 = 0;
            lVar19 = *(long *)(lVar18 + 0x30);
            do {
              *(undefined4 *)(lVar19 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < *(int *)(lVar18 + 4));
          }
          *(undefined8 *)(lVar18 + 0x20) = 0;
          return;
        }
        if (uVar2 == 0xb) {
          plVar12 = *(long **)(param_2 + 2);
          lVar18 = *plVar12;
          lVar16 = plVar12[1];
          while (lVar16 != lVar18) {
            lVar16 = lVar16 + -0x50;
            FUN_109ac5638();
          }
          plVar12[1] = lVar18;
          return;
        }
        if (uVar2 == 0xd) {
          (*(undefined8 **)(param_2 + 2))[1] = **(undefined8 **)(param_2 + 2);
          return;
        }
      }
      puVar8 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar8 = 1;
      *(undefined1 *)((long)puVar8 + 0x22) = 0;
      *(undefined8 *)(puVar8 + 3) = 0x726f707075736e75;
      *(undefined8 *)(puVar8 + 1) = 0x2f6e776f6e6b6e55;
      *(undefined8 *)((long)puVar8 + 0x1a) = 0x6570797420796172;
      *(undefined8 *)((long)puVar8 + 0x12) = 0x726120646574726f;
      FUN_109ac3188(0xffffff2b,&stack0xffffffffffffffc0,&DAT_10f598457,&UNK_10f597913,0xa4b);
    }
    else {
      puVar8 = (undefined4 *)0x14;
      func_0x000107c2ae8c();
      *puVar8 = 1;
      *(undefined8 *)(puVar8 + 1) = 0x6953646578696621;
      *(undefined1 *)(puVar8 + 4) = 0;
      puVar8[3] = 0x2928657a;
      FUN_109ac3188(0xffffff29,&stack0xffffffffffffffc0,&DAT_10f598457,&UNK_10f597913,0xa0a);
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
    (*pcVar5)();
  }
  if ((*param_1 & 0x1d0000) != 0x10000) {
    uVar2 = uVar17 - 0x20000 >> 0x11 | uVar17 << 0xf;
    if ((int)uVar2 < 4) {
      if (uVar2 != 0) {
        if (uVar2 != 2) goto LAB_109a8e730;
        puVar13 = *(undefined8 **)(param_1 + 2);
        if ((*param_2 & 0x1f0000) == 0x10000) {
          FUN_109a8ec3c(param_2,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x000109a8e70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)*puVar13 + 0x18))((long *)*puVar13,puVar13,param_2,0xffffffff);
          return;
        }
        uStack_90._0_4_ = 0x42ff0000;
        puStack_50 = &uStack_88;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_90._4_4_ = 0;
        uStack_88 = 0;
        lStack_58 = 0;
        uStack_5c = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_7c = 0;
        uStack_78 = 0;
        puStack_48 = &stack0xffffffffffffffc0;
        (**(code **)(*(long *)*puVar13 + 0x18))((long *)*puVar13,puVar13,&uStack_90,0xffffffff);
        FUN_109a479a0(&uStack_90,param_2);
        if (lStack_58 != 0) {
          piVar20 = (int *)(lStack_58 + 0x14);
          do {
            iVar1 = *piVar20;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar6) {
              *piVar20 = iVar1 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar1 + -1 == 0) {
            func_0x000109a848d4(&uStack_90);
          }
        }
        if (0 < uStack_90._4_4_) {
          lVar18 = 0;
          do {
            puStack_50[lVar18] = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < uStack_90._4_4_);
        }
        bVar6 = puStack_48 == &stack0xffffffffffffffc0;
        goto LAB_109a8e7f8;
      }
    }
    else {
      if (uVar2 == 4) {
        puVar9 = *(uint **)(param_1 + 2);
        puStack_48 = *(undefined1 **)PTR____stack_chk_guard_11034bdc0;
        do {
          uVar17 = 0xffffffff;
          puVar11 = param_2;
          FUN_109a8b904(param_2,0xffffffff);
          if (-1 < (int)*param_2) {
LAB_109ac61c8:
            if (*(long *)(puVar9 + 8) != 0) {
              uVar2 = puVar9[1];
              uVar27 = (ulong)uVar2;
              if ((int)uVar2 < 3) {
                lVar18 = (long)(int)puVar9[3] * (long)(int)puVar9[2];
              }
              else {
                lVar18 = 1;
                piVar20 = *(int **)(puVar9 + 0xc);
                uVar14 = uVar27;
                do {
                  lVar18 = lVar18 * *piVar20;
                  uVar14 = uVar14 - 1;
                  piVar20 = piVar20 + 1;
                } while (uVar14 != 0);
              }
              if (lVar18 != 0) {
                uVar14 = (ulong)(int)uVar2;
                if ((int)uVar2 < 1) {
                  lVar18 = 0;
                  uVar22 = uVar14;
                  if (uVar2 != 0) goto LAB_109ac6268;
                  uStack_150 = 0;
                  lVar16 = *(long *)(puVar9 + 0xc);
                  lVar19 = -1;
                }
                else {
                  lVar18 = *(long *)(*(long *)(puVar9 + 0xe) + uVar27 * 8 + -8);
                  uVar22 = uVar27;
LAB_109ac6268:
                  uVar21 = 0;
                  lVar16 = *(long *)(puVar9 + 0xc);
                  do {
                    (&uStack_148)[uVar21] = (long)*(int *)(lVar16 + uVar21 * 4);
                    uVar21 = uVar21 + 1;
                  } while (uVar22 != uVar21);
                  lVar19 = uVar14 - 1;
                  (&uStack_148)[lVar19] = (&uStack_148)[lVar19] * lVar18;
                  if (0 < (int)uVar2) {
                    uVar22 = *(ulong *)(puVar9 + 10);
                    puVar15 = *(ulong **)(puVar9 + 0xe);
                    puVar23 = auStack_248;
                    do {
                      uVar24 = *puVar15;
                      uVar21 = 0;
                      if (uVar24 != 0) {
                        uVar21 = uVar22 / uVar24;
                      }
                      *puVar23 = uVar21;
                      uVar22 = uVar22 - uVar21 * uVar24;
                      uVar27 = uVar27 - 1;
                      puVar15 = puVar15 + 1;
                      puVar23 = puVar23 + 1;
                    } while (uVar27 != 0);
                  }
                }
                auStack_248[lVar19] = auStack_248[lVar19] * lVar18;
                FUN_109a8727c(param_2,uVar14,lVar16,*puVar9 & 0xfff,0xffffffff,0,0);
                uVar17 = *param_2;
                if ((uVar17 & 0x1f0000) != 0xa0000) {
LAB_109ac6360:
                  if ((uVar17 & 0x1f0000) == 0x10000) {
                    puVar15 = *(ulong **)(param_2 + 2);
                    uStack_370 = (ulong)&uStack_3b0 | 8;
                    uStack_3a8 = puVar15[1];
                    uStack_3b0 = *puVar15;
                    uStack_398 = puVar15[3];
                    uStack_3a0 = puVar15[2];
                    uStack_388 = puVar15[5];
                    uStack_390 = puVar15[4];
                    uStack_378 = puVar15[7];
                    uStack_380 = puVar15[6];
                    puStack_368 = &uStack_360;
                    uStack_360 = 0;
                    uStack_358 = 0;
                    if (puVar15[7] != 0) {
                      piVar20 = (int *)(puVar15[7] + 0x14);
                      do {
                        cVar3 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                        if (bVar6) {
                          *piVar20 = *piVar20 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    if (*(int *)((long)puVar15 + 4) < 3) {
                      uStack_360 = *(undefined8 *)puVar15[9];
                      uStack_358 = ((undefined8 *)puVar15[9])[1];
                    }
                    else {
                      uStack_3b0 = uStack_3b0 & 0xffffffff;
                      func_0x000109a84868(&uStack_3b0);
                    }
                  }
                  else {
                    FUN_109a8a180(&uStack_3b0,param_2,0xffffffff);
                  }
                  lVar18 = *(long *)(puVar9 + 8);
                  puVar11 = *(uint **)(lVar18 + 8);
                  (**(code **)(*(long *)puVar11 + 0x38))
                            (puVar11,lVar18,uStack_3a0,puVar9[1],&uStack_148,auStack_248,
                             *(undefined8 *)(puVar9 + 0xe),puStack_368);
                  uVar17 = (uint)lVar18;
                  if (uStack_378 != 0) {
                    piVar20 = (int *)(uStack_378 + 0x14);
                    do {
                      iVar1 = *piVar20;
                      cVar3 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                      if (bVar6) {
                        *piVar20 = iVar1 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar1 + -1 == 0) {
                      puVar11 = (uint *)&uStack_3b0;
                      func_0x000109a848d4();
                    }
                  }
                  uStack_378 = 0;
                  uStack_398 = 0;
                  uStack_3a0 = 0;
                  uStack_388 = 0;
                  uStack_390 = 0;
                  if (0 < (int)uStack_3b0._4_4_) {
                    lVar18 = 0;
                    do {
                      *(undefined4 *)(uStack_370 + lVar18 * 4) = 0;
                      lVar18 = lVar18 + 1;
                    } while (lVar18 < (int)uStack_3b0._4_4_);
                  }
                  puVar13 = &uStack_3b0;
                  puStack_100 = puStack_368;
                  goto LAB_109ac648c;
                }
                FUN_109a8bd24(&uStack_3b0,param_2,0xffffffff);
                uVar27 = *(ulong *)(puVar9 + 8);
                if ((uVar27 != uStack_390) || (uStack_388 != *(ulong *)(puVar9 + 10))) {
                  plVar12 = *(long **)(uVar27 + 8);
                  if (plVar12 != *(long **)(uStack_390 + 8)) {
                    FUN_109ac5638(&uStack_3b0);
                    uVar17 = *param_2;
                    goto LAB_109ac6360;
                  }
                  if (0 < (int)uStack_3b0._4_4_) {
                    lVar16 = 0;
                    uVar14 = uStack_388;
                    do {
                      uVar21 = *(ulong *)(uStack_378 + lVar16);
                      uVar22 = 0;
                      if (uVar21 != 0) {
                        uVar22 = uVar14 / uVar21;
                      }
                      *(ulong *)((long)alStack_350 + lVar16 + 8) = uVar22;
                      uVar14 = uVar14 - uVar22 * uVar21;
                      lVar16 = lVar16 + 8;
                    } while ((ulong)uStack_3b0._4_4_ * 8 - lVar16 != 0);
                  }
                  alStack_350[(int)puVar9[1]] = alStack_350[(int)puVar9[1]] * lVar18;
                  (**(code **)(*plVar12 + 0x48))();
                }
                uVar17 = (uint)uVar27;
                puVar11 = (uint *)&uStack_3b0;
                FUN_109ac5638();
                goto LAB_109ac64a4;
              }
            }
            if (*(undefined1 **)PTR____stack_chk_guard_11034bdc0 == puStack_48) goto FUN_109a8e944;
            goto LAB_109ac65c4;
          }
          uVar2 = *puVar9;
          uVar7 = (uint)puVar11;
          if (uVar7 == (uVar2 & 0xfff)) goto LAB_109ac61c8;
          if (((uVar2 ^ uVar7) & 0xff8) != 0) {
            puVar8 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar8 = 1;
            uStack_148 = puVar8 + 1;
            uStack_140 = 0x1e;
            *(undefined1 *)((long)puVar8 + 0x22) = 0;
            *(undefined8 *)(puVar8 + 3) = 0x5643203d3d202928;
            *(undefined8 *)(puVar8 + 1) = 0x736c656e6e616863;
            *(undefined8 *)((long)puVar8 + 0x1a) = 0x296570797464284e;
            *(undefined8 *)((long)puVar8 + 0x12) = 0x435f54414d5f5643;
            FUN_109ac3188(0xffffff29,&uStack_148,&UNK_10f595fe6,&UNK_10f59b211,0x308);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x109ac65c4);
            (*pcVar5)();
          }
          if ((int)uVar7 < 0) {
            puVar26 = param_2;
            FUN_109a8b904(param_2,0xffffffff);
          }
          else {
            puVar26 = (uint *)(ulong)(uVar2 & 0xff8 | uVar7 & 7);
          }
        } while ((((uint)puVar26 ^ uVar2) & 7) == 0);
        FUN_109ac6640(&uStack_148,puVar9,0x1000000);
        puVar11 = (uint *)&uStack_148;
        FUN_109a41858(0x3ff0000000000000,0,puVar11,param_2,puVar26);
        uVar17 = (uint)param_2;
        if (lStack_110 != 0) {
          piVar20 = (int *)(lStack_110 + 0x14);
          do {
            iVar1 = *piVar20;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar6) {
              *piVar20 = iVar1 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar1 + -1 == 0) {
            puVar11 = (uint *)&uStack_148;
            func_0x000109a848d4();
          }
        }
        lStack_110 = 0;
        uStack_130 = 0;
        uStack_138 = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        if (0 < uStack_148._4_4_) {
          lVar18 = 0;
          do {
            *(undefined4 *)(lStack_108 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < uStack_148._4_4_);
        }
        puVar13 = &uStack_148;
LAB_109ac648c:
        if (puStack_100 != puVar13 + 10 && puStack_100 != (undefined8 *)0x0) {
          puVar11 = (uint *)puStack_100[-1];
          _free();
        }
LAB_109ac64a4:
        if (*(undefined1 **)PTR____stack_chk_guard_11034bdc0 == puStack_48) {
          return;
        }
LAB_109ac65c4:
        ___stack_chk_fail();
        FUN_109ac5638(&uStack_3b0);
        __Unwind_Resume();
        uVar27 = *(ulong *)(puVar11 + 8);
        if (uVar27 == 0) {
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
          puVar9 = extraout_x8 + 0x14;
          puVar9[0] = 0;
          puVar9[1] = 0;
          *(uint **)(extraout_x8 + 0x10) = extraout_x8 + 2;
          *(uint **)(extraout_x8 + 0x12) = puVar9;
          extraout_x8[0x16] = 0;
          extraout_x8[0x17] = 0;
        }
        else {
          uStack_408 = uVar27;
          FUN_109ac437c();
          _pthread_mutex_lock(*(undefined8 *)((uVar27 % 0x1f) * 8 + 0x11374c830));
          piVar20 = (int *)(*(long *)(puVar11 + 8) + 0x14);
          do {
            iVar1 = *piVar20;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar6) {
              *piVar20 = iVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar1 == 0) {
            plVar12 = *(long **)(*(long *)(puVar11 + 8) + 8);
            (**(code **)(*plVar12 + 0x28))(plVar12,*(long *)(puVar11 + 8),uVar17 | 0x3000000);
          }
          lVar18 = *(long *)(*(long *)(puVar11 + 8) + 0x18);
          if (lVar18 == 0) {
            piVar20 = (int *)(*(long *)(puVar11 + 8) + 0x14);
            do {
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar6) {
                *piVar20 = *piVar20 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (*(long *)(*(long *)(puVar11 + 8) + 0x18) == 0) {
              puVar8 = (undefined4 *)0x3c;
              func_0x000107c2ae8c();
              *(undefined8 *)(puVar8 + 3) = 0x2026262030203d21;
              *(undefined8 *)(puVar8 + 1) = 0x20617461643e2d75;
              *puVar8 = 1;
              puStack_418 = puVar8 + 1;
              uStack_410 = 0x37;
              *(undefined1 *)((long)puVar8 + 0x3b) = 0;
              *(undefined8 *)(puVar8 + 7) = 0x6f20676e69707061;
              *(undefined8 *)(puVar8 + 5) = 0x6d20726f72724522;
              *(undefined8 *)(puVar8 + 0xb) = 0x6d2074736f68206f;
              *(undefined8 *)(puVar8 + 9) = 0x742074614d552066;
              *(undefined8 *)((long)puVar8 + 0x33) = 0x222e79726f6d656d;
              FUN_109ac3188(0xffffff29,&puStack_418,&UNK_10f59b2f8,&UNK_10f59b211,0x2e0);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x109ac686c);
              (*pcVar5)();
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
            puVar9 = extraout_x8 + 0x14;
            puVar9[0] = 0;
            puVar9[1] = 0;
            *(uint **)(extraout_x8 + 0x10) = extraout_x8 + 2;
            *(uint **)(extraout_x8 + 0x12) = puVar9;
            extraout_x8[0x16] = 0;
            extraout_x8[0x17] = 0;
          }
          else {
            FUN_109a855e4(extraout_x8,puVar11[1],*(undefined8 *)(puVar11 + 0xc),*puVar11 & 0xfff,
                          lVar18 + *(long *)(puVar11 + 10),*(undefined8 *)(puVar11 + 0xe));
            *extraout_x8 = *puVar11;
            lVar16 = *(long *)(puVar11 + 8);
            lVar19 = *(long *)(puVar11 + 10);
            *(long *)(extraout_x8 + 0xe) = lVar16;
            lVar18 = *(long *)(lVar16 + 0x18);
            *(long *)(extraout_x8 + 4) = lVar18 + lVar19;
            *(long *)(extraout_x8 + 6) = lVar18;
            lVar18 = lVar18 + *(long *)(lVar16 + 0x28);
            *(long *)(extraout_x8 + 8) = lVar18;
            *(long *)(extraout_x8 + 10) = lVar18;
          }
          uVar27 = uStack_408;
          FUN_109ac437c();
          _pthread_mutex_unlock(*(undefined8 *)((uVar27 % 0x1f) * 8 + 0x11374c830));
        }
        return;
      }
      if (uVar2 != 5) {
LAB_109a8e730:
        puVar8 = (undefined4 *)0x8;
        func_0x000107c2ae8c();
        *puVar8 = 1;
        uStack_90 = puVar8 + 1;
        *(undefined1 *)uStack_90 = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        FUN_109ac3188(0xffffff2b,&uStack_90,&UNK_10f595fe6,&UNK_10f597913,0x86b);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109a8e774);
        (*pcVar5)();
      }
    }
  }
  if (uVar17 == 0x10000) {
    puVar13 = *(undefined8 **)(param_1 + 2);
    puStack_50 = (undefined4 *)((ulong)&uStack_90 | 8);
    uStack_88 = (undefined4)puVar13[1];
    uStack_84 = (undefined4)((ulong)puVar13[1] >> 0x20);
    uStack_90._0_4_ = (undefined4)*puVar13;
    uStack_90._4_4_ = (int)((ulong)*puVar13 >> 0x20);
    uStack_78 = (undefined4)puVar13[3];
    uStack_74 = (undefined4)((ulong)puVar13[3] >> 0x20);
    uStack_80 = (undefined4)puVar13[2];
    uStack_7c = (undefined4)((ulong)puVar13[2] >> 0x20);
    lStack_58 = puVar13[7];
    uStack_68 = (undefined4)puVar13[5];
    uStack_64 = (undefined4)((ulong)puVar13[5] >> 0x20);
    uStack_70 = (undefined4)puVar13[4];
    uStack_6c = (undefined4)((ulong)puVar13[4] >> 0x20);
    uStack_60 = (undefined4)puVar13[6];
    uStack_5c = (undefined4)((ulong)puVar13[6] >> 0x20);
    puStack_48 = &stack0xffffffffffffffc0;
    if (puVar13[7] != 0) {
      piVar20 = (int *)(puVar13[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar6) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (2 < *(int *)((long)puVar13 + 4)) {
      uStack_90._4_4_ = 0;
      func_0x000109a84868(&uStack_90);
    }
  }
  else {
    FUN_109a8a180(&uStack_90,param_1,0xffffffff);
  }
  FUN_109a479a0(&uStack_90,param_2);
  if (lStack_58 != 0) {
    piVar20 = (int *)(lStack_58 + 0x14);
    do {
      iVar1 = *piVar20;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar6) {
        *piVar20 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_90);
    }
  }
  if (0 < uStack_90._4_4_) {
    lVar18 = 0;
    do {
      puStack_50[lVar18] = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < uStack_90._4_4_);
  }
  bVar6 = puStack_48 == &stack0xffffffffffffffc0;
LAB_109a8e7f8:
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_74 = 0;
  uStack_78 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  lStack_58 = 0;
  if (!bVar6 && puStack_48 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_48 + -8));
  }
  return;
}



/* Entry: 109a8e944; end: 109a8ec3b;  */

void FUN_109a8e944(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *param_1;
  if ((uVar3 >> 0x1e & 1) == 0) {
    uVar6 = uVar3 >> 0x10 & 0x1f;
    if (uVar6 < 7) {
      if (uVar6 < 3) {
        if (uVar6 == 0) {
          return;
        }
        if (uVar6 == 1) {
          lVar14 = *(long *)(param_1 + 2);
          if (*(long *)(lVar14 + 0x38) != 0) {
            piVar1 = (int *)(*(long *)(lVar14 + 0x38) + 0x14);
            do {
              iVar2 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(lVar14);
            }
          }
          *(undefined8 *)(lVar14 + 0x38) = 0;
          *(undefined8 *)(lVar14 + 0x18) = 0;
          *(undefined8 *)(lVar14 + 0x10) = 0;
          *(undefined8 *)(lVar14 + 0x28) = 0;
          *(undefined8 *)(lVar14 + 0x20) = 0;
          if (*(int *)(lVar14 + 4) < 1) {
            return;
          }
          lVar9 = 0;
          lVar12 = *(long *)(lVar14 + 0x40);
          do {
            *(undefined4 *)(lVar12 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(lVar14 + 4));
          return;
        }
      }
      else {
        if (uVar6 == 3) {
          puStack_40 = (undefined8 *)0x0;
          FUN_109a8ee3c(param_1,&puStack_40,uVar3 & 0xfff,0xffffffff,0,0);
          return;
        }
        if (uVar6 == 4) {
          plVar10 = *(long **)(param_1 + 2);
          plVar13 = (long *)*plVar10;
          plVar15 = (long *)plVar10[1];
          while (plVar7 = plVar15, plVar7 != plVar13) {
            plVar15 = plVar7 + -3;
            if (*plVar15 != 0) {
              plVar7[-2] = *plVar15;
              __ZdlPv();
            }
          }
          plVar10[1] = (long)plVar13;
          return;
        }
        if (uVar6 == 5) {
          plVar13 = *(long **)(param_1 + 2);
          lVar14 = *plVar13;
          lVar9 = plVar13[1];
          while (lVar9 != lVar14) {
            lVar9 = lVar9 + -0x60;
            FUN_109370334(lVar9);
          }
          plVar13[1] = lVar14;
          return;
        }
      }
    }
    else {
      if (uVar6 < 10) {
        return;
      }
      if (uVar6 == 10) {
        lVar14 = *(long *)(param_1 + 2);
        if (*(long *)(lVar14 + 0x20) != 0) {
          piVar1 = (int *)(*(long *)(lVar14 + 0x20) + 0x10);
          do {
            iVar2 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 == 0) {
            (**(code **)(**(long **)(*(long *)(lVar14 + 0x20) + 8) + 0x20))();
            *(undefined8 *)(lVar14 + 0x20) = 0;
          }
        }
        if (0 < *(int *)(lVar14 + 4)) {
          lVar9 = 0;
          lVar12 = *(long *)(lVar14 + 0x30);
          do {
            *(undefined4 *)(lVar12 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(lVar14 + 4));
        }
        *(undefined8 *)(lVar14 + 0x20) = 0;
        return;
      }
      if (uVar6 == 0xb) {
        plVar13 = *(long **)(param_1 + 2);
        lVar14 = *plVar13;
        lVar9 = plVar13[1];
        while (lVar9 != lVar14) {
          lVar9 = lVar9 + -0x50;
          FUN_109ac5638();
        }
        plVar13[1] = lVar14;
        return;
      }
      if (uVar6 == 0xd) {
        (*(undefined8 **)(param_1 + 2))[1] = **(undefined8 **)(param_1 + 2);
        return;
      }
    }
    puVar11 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    puStack_40 = (undefined8 *)(puVar11 + 1);
    uStack_38 = 0x1e;
    *(undefined1 *)((long)puVar11 + 0x22) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x726f707075736e75;
    *(undefined8 *)(puVar11 + 1) = 0x2f6e776f6e6b6e55;
    *(undefined8 *)((long)puVar11 + 0x1a) = 0x6570797420796172;
    *(undefined8 *)((long)puVar11 + 0x12) = 0x726120646574726f;
    FUN_109ac3188(0xffffff2b,&puStack_40,&DAT_10f598457,&UNK_10f597913,0xa4b);
  }
  else {
    puVar11 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    puStack_40 = (undefined8 *)(puVar11 + 1);
    *puStack_40 = 0x6953646578696621;
    uStack_38 = 0xc;
    *(undefined1 *)(puVar11 + 4) = 0;
    puVar11[3] = 0x2928657a;
    FUN_109ac3188(0xffffff29,&puStack_40,&DAT_10f598457,&UNK_10f597913,0xa0a);
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
  (*pcVar8)();
}



/* Entry: 109a8ec3c; end: 109a8ee3b;  */

long FUN_109a8ec3c(uint *param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  if ((int)param_2 < 0) {
    if ((*param_1 & 0x1f0000) == 0x10000) {
      return *(long *)(param_1 + 2);
    }
    puVar3 = (undefined4 *)0x10;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_30 = (undefined8 *)(puVar3 + 1);
    *puStack_30 = 0x54414d203d3d206b;
    uStack_28 = 8;
    *(undefined1 *)(puVar3 + 3) = 0;
    FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f598465,&UNK_10f597913,0xa66);
  }
  else if ((*param_1 & 0x1f0000) == 0x50000) {
    lVar1 = **(long **)(param_1 + 2);
    if ((int)param_2 < (int)((ulong)((*(long **)(param_1 + 2))[1] - lVar1) >> 5) * -0x55555555) {
      return lVar1 + (ulong)param_2 * 0x60;
    }
    puVar3 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_30 = (undefined8 *)(puVar3 + 1);
    uStack_28 = 0x11;
    *(undefined2 *)(puVar3 + 5) = 0x29;
    *(undefined8 *)(puVar3 + 3) = 0x28657a69732e7629;
    *(undefined8 *)(puVar3 + 1) = 0x746e6928203c2069;
    FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f598465,&UNK_10f597913,0xa6d);
  }
  else {
    puVar3 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_30 = (undefined8 *)(puVar3 + 1);
    uStack_28 = 0x13;
    *(undefined1 *)((long)puVar3 + 0x17) = 0;
    *(undefined4 *)((long)puVar3 + 0x13) = 0x54414d5f;
    *(undefined8 *)(puVar3 + 3) = 0x5f524f544345565f;
    *(undefined8 *)(puVar3 + 1) = 0x445453203d3d206b;
    FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f598465,&UNK_10f597913,0xa6b);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a8edc8);
  (*pcVar2)();
}



/* Entry: 109a8ee3c; end: 109a8f64b;  */

void FUN_109a8ee3c(uint *param_1,uint *param_2,undefined8 param_3,uint param_4,uint param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 uStack_38;
  undefined4 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *param_1;
  uVar1 = uVar3 & 0x1f0000;
  if (param_6 != 0) {
    param_5 = 1;
  }
  uVar7 = (uint)param_3;
  if ((((param_5 & 1) == 0) && ((int)param_4 < 0)) && (uVar1 == 0x10000)) {
    if (((uVar3 >> 0x1e & 1) == 0) ||
       ((*(uint **)(*(long *)(param_1 + 2) + 0x40))[1] == *param_2 &&
        **(uint **)(*(long *)(param_1 + 2) + 0x40) == param_2[1])) {
      puVar5 = *(uint **)(param_1 + 2);
      if (((int)uVar3 < 0) && ((*puVar5 & 0xfff) != uVar7)) {
        puVar6 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar6 = 1;
        uStack_38 = puVar6 + 1;
        puStack_30 = (undefined4 *)0x2c;
        *(undefined8 *)(puVar6 + 3) = 0x207c7c2029286570;
        *(undefined8 *)(puVar6 + 1) = 0x7954646578696621;
        *(undefined1 *)(puVar6 + 0xc) = 0;
        *(undefined8 *)(puVar6 + 7) = 0x7079743e2d296a62;
        *(undefined8 *)(puVar6 + 5) = 0x6f292a74614d2828;
        *(undefined8 *)(puVar6 + 10) = 0x657079746d203d3d;
        *(undefined8 *)(puVar6 + 8) = 0x202928657079743e;
        FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x88f);
        goto LAB_109a8f4bc;
      }
      if ((((2 < (int)puVar5[1]) || (puVar5[2] != param_2[1])) || (puVar5[3] != *param_2)) ||
         (((*puVar5 & 0xfff) != (uVar7 & 0xfff) || (*(long *)(puVar5 + 4) == 0)))) {
        uStack_38 = (undefined4 *)CONCAT44(*param_2,param_2[1]);
        FUN_109a83fd0(puVar5,2,&uStack_38);
      }
LAB_109a8f018:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        return;
      }
      goto LAB_109a8f170;
    }
  }
  else {
    uVar2 = param_5;
    if (param_4 < 0x80000000 || uVar1 != 0xa0000) {
      uVar2 = 1;
    }
    if ((uVar2 & 1) == 0) {
      if (((uVar3 >> 0x1e & 1) != 0) &&
         ((*(uint **)(*(long *)(param_1 + 2) + 0x30))[1] != *param_2 ||
          **(uint **)(*(long *)(param_1 + 2) + 0x30) != param_2[1])) {
        puVar6 = (undefined4 *)0x3c;
        func_0x000107c2ae8c();
        *puVar6 = 1;
        uStack_38 = puVar6 + 1;
        puStack_30 = (undefined4 *)0x36;
        *(undefined8 *)(puVar6 + 3) = 0x207c7c202928657a;
        *(undefined8 *)(puVar6 + 1) = 0x6953646578696621;
        *(undefined1 *)((long)puVar6 + 0x3a) = 0;
        *(undefined8 *)(puVar6 + 7) = 0x69733e2d296a626f;
        *(undefined8 *)(puVar6 + 5) = 0x292a74614d552828;
        *(undefined8 *)(puVar6 + 0xb) = 0x2029282928726f74;
        *(undefined8 *)(puVar6 + 9) = 0x617265706f2e657a;
        *(undefined8 *)((long)puVar6 + 0x32) = 0x7a735f203d3d2029;
        FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x895);
        goto LAB_109a8f4bc;
      }
      puVar5 = *(uint **)(param_1 + 2);
      if (((int)uVar3 < 0) && ((*puVar5 & 0xfff) != uVar7)) {
        puVar6 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar6 = 1;
        uStack_38 = puVar6 + 1;
        puStack_30 = (undefined4 *)0x2d;
        *(undefined8 *)(puVar6 + 3) = 0x207c7c2029286570;
        *(undefined8 *)(puVar6 + 1) = 0x7954646578696621;
        *(undefined1 *)((long)puVar6 + 0x31) = 0;
        *(undefined8 *)(puVar6 + 7) = 0x79743e2d296a626f;
        *(undefined8 *)(puVar6 + 5) = 0x292a74614d552828;
        *(undefined8 *)((long)puVar6 + 0x29) = 0x657079746d203d3d;
        *(undefined8 *)((long)puVar6 + 0x21) = 0x202928657079743e;
        FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x896);
        goto LAB_109a8f4bc;
      }
      if ((((2 < (int)puVar5[1]) || (puVar5[2] != param_2[1])) || (puVar5[3] != *param_2)) ||
         (((*puVar5 & 0xfff) != (uVar7 & 0xfff) || (*(long *)(puVar5 + 8) == 0)))) {
        uStack_38 = (undefined4 *)CONCAT44(*param_2,param_2[1]);
        FUN_109ac50c0(puVar5,2,&uStack_38,uVar7 & 0xfff,0);
      }
      goto LAB_109a8f018;
    }
    uVar2 = param_5;
    if (param_4 < 0x80000000 || uVar1 != 0x90000) {
      uVar2 = 1;
    }
    if ((uVar2 & 1) == 0) {
      if (((uVar3 >> 0x1e & 1) != 0) &&
         (*(uint *)(*(long *)(param_1 + 2) + 8) != *param_2 ||
          *(uint *)(*(long *)(param_1 + 2) + 4) != param_2[1])) {
        puVar6 = (undefined4 *)0x38;
        func_0x000107c2ae8c();
        *puVar6 = 1;
        uStack_38 = puVar6 + 1;
        puStack_30 = (undefined4 *)0x33;
        *(undefined8 *)(puVar6 + 3) = 0x207c7c202928657a;
        *(undefined8 *)(puVar6 + 1) = 0x6953646578696621;
        *(undefined4 *)((long)puVar6 + 0x33) = 0x7a735f20;
        *(undefined1 *)((long)puVar6 + 0x37) = 0;
        *(undefined8 *)(puVar6 + 7) = 0x292a74614d757047;
        *(undefined8 *)(puVar6 + 5) = 0x3a3a616475632828;
        *(undefined8 *)(puVar6 + 0xb) = 0x203d3d202928657a;
        *(undefined8 *)(puVar6 + 9) = 0x69733e2d296a626f;
        FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x89c);
        goto LAB_109a8f4bc;
      }
      if (((int)uVar3 < 0) && ((**(uint **)(param_1 + 2) & 0xfff) != uVar7)) {
        puVar6 = (undefined4 *)0x3c;
        func_0x000107c2ae8c();
        *puVar6 = 1;
        uStack_38 = puVar6 + 1;
        puStack_30 = (undefined4 *)0x35;
        *(undefined8 *)(puVar6 + 3) = 0x207c7c2029286570;
        *(undefined8 *)(puVar6 + 1) = 0x7954646578696621;
        *(undefined1 *)((long)puVar6 + 0x39) = 0;
        *(undefined8 *)(puVar6 + 7) = 0x292a74614d757047;
        *(undefined8 *)(puVar6 + 5) = 0x3a3a616475632828;
        *(undefined8 *)(puVar6 + 0xb) = 0x203d3d2029286570;
        *(undefined8 *)(puVar6 + 9) = 0x79743e2d296a626f;
        *(undefined8 *)((long)puVar6 + 0x31) = 0x657079746d203d3d;
        FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x89d);
        goto LAB_109a8f4bc;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        puVar6 = (undefined4 *)0x34;
        func_0x000107c2ae8c(0x34,param_2[1],*param_2);
        *(undefined8 *)(puVar6 + 3) = 0x6320736920797261;
        *(undefined8 *)(puVar6 + 1) = 0x7262696c20656854;
        *puVar6 = 1;
        puStack_30 = puVar6 + 1;
        lStack_28 = 0x2c;
        *(undefined1 *)(puVar6 + 0xc) = 0;
        *(undefined8 *)(puVar6 + 7) = 0x2074756f68746977;
        *(undefined8 *)(puVar6 + 5) = 0x2064656c69706d6f;
        *(undefined8 *)(puVar6 + 10) = 0x74726f7070757320;
        *(undefined8 *)(puVar6 + 8) = 0x414455432074756f;
        FUN_109ac3188(0xffffff28,&puStack_30,&UNK_10f5962f0,&UNK_10f5962fe,0x61);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x109a4b8c0);
        (*pcVar4)();
      }
    }
    else {
      uVar2 = param_5;
      if (param_4 < 0x80000000 || uVar1 != 0x70000) {
        uVar2 = 1;
      }
      if ((uVar2 & 1) == 0) {
        if (((uVar3 >> 0x1e & 1) != 0) &&
           (*(uint *)(*(long *)(param_1 + 2) + 0x14) != *param_2 ||
            *(uint *)(*(long *)(param_1 + 2) + 0x10) != param_2[1])) {
          FUN_109a38ed8(&uStack_38,&UNK_10f597f2d);
          FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x8a3);
          goto LAB_109a8f4bc;
        }
        if (((int)uVar3 < 0) && (*(uint *)(*(long *)(param_1 + 2) + 0x18) != uVar7)) {
          FUN_109a38ed8(&uStack_38,&UNK_10f597f60);
          FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x8a4);
          goto LAB_109a8f4bc;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
          puVar6 = (undefined4 *)0x34;
          func_0x000107c2ae8c(0x34,param_2[1],*param_2,param_3,0x8892,0);
          *(undefined8 *)(puVar6 + 3) = 0x6320736920797261;
          *(undefined8 *)(puVar6 + 1) = 0x7262696c20656854;
          *puVar6 = 1;
          puStack_30 = puVar6 + 1;
          lStack_28 = 0x2e;
          *(undefined1 *)((long)puVar6 + 0x32) = 0;
          *(undefined8 *)(puVar6 + 7) = 0x2074756f68746977;
          *(undefined8 *)(puVar6 + 5) = 0x2064656c69706d6f;
          *(undefined8 *)((long)puVar6 + 0x2a) = 0x74726f7070757320;
          *(undefined8 *)((long)puVar6 + 0x22) = 0x4c476e65704f2074;
          FUN_109ac3188(0xffffff26,&puStack_30,&UNK_10f598c75,&UNK_10f598bc8,0x3c);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x109aa6618);
          (*pcVar4)();
        }
      }
      else {
        if (param_4 < 0x80000000 || uVar1 != 0x80000) {
          param_5 = 1;
        }
        if ((param_5 & 1) != 0) {
          uStack_38 = (undefined4 *)NEON_rev64(*(undefined8 *)param_2,4);
          FUN_109a8727c(param_1,2,&uStack_38);
          goto LAB_109a8f018;
        }
        if (((uVar3 >> 0x1e & 1) != 0) &&
           ((*(uint *)(*(long *)(param_1 + 2) + 8) != *param_2 ||
            (*(uint *)(*(long *)(param_1 + 2) + 4) != param_2[1])))) {
          FUN_109a38ed8(&uStack_38,&UNK_10f597f95);
          FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x8aa);
          goto LAB_109a8f4bc;
        }
        if (((int)uVar3 < 0) && ((**(uint **)(param_1 + 2) & 0xfff) != uVar7)) {
          FUN_109a38ed8(&uStack_38,&UNK_10f597fca);
          FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x8ab);
          goto LAB_109a8f4bc;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
          puVar6 = (undefined4 *)0x34;
          func_0x000107c2ae8c(0x34,param_2[1],*param_2);
          *(undefined8 *)(puVar6 + 3) = 0x6320736920797261;
          *(undefined8 *)(puVar6 + 1) = 0x7262696c20656854;
          *puVar6 = 1;
          puStack_30 = puVar6 + 1;
          lStack_28 = 0x2c;
          *(undefined1 *)(puVar6 + 0xc) = 0;
          *(undefined8 *)(puVar6 + 7) = 0x2074756f68746977;
          *(undefined8 *)(puVar6 + 5) = 0x2064656c69706d6f;
          *(undefined8 *)(puVar6 + 10) = 0x74726f7070757320;
          *(undefined8 *)(puVar6 + 8) = 0x414455432074756f;
          FUN_109ac3188(0xffffff28,&puStack_30,&UNK_10f5963c8,&UNK_10f5963d6,0x61);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x109a4ba00);
          (*pcVar4)();
        }
      }
    }
LAB_109a8f170:
    ___stack_chk_fail();
  }
  puVar6 = (undefined4 *)0x3c;
  func_0x000107c2ae8c();
  *puVar6 = 1;
  uStack_38 = puVar6 + 1;
  puStack_30 = (undefined4 *)0x35;
  *(undefined8 *)(puVar6 + 3) = 0x207c7c202928657a;
  *(undefined8 *)(puVar6 + 1) = 0x6953646578696621;
  *(undefined1 *)((long)puVar6 + 0x39) = 0;
  *(undefined8 *)(puVar6 + 7) = 0x7a69733e2d296a62;
  *(undefined8 *)(puVar6 + 5) = 0x6f292a74614d2828;
  *(undefined8 *)(puVar6 + 0xb) = 0x3d2029282928726f;
  *(undefined8 *)(puVar6 + 9) = 0x74617265706f2e65;
  *(undefined8 *)((long)puVar6 + 0x31) = 0x7a735f203d3d2029;
  FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x88e);
LAB_109a8f4bc:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109a8f4c0);
  (*pcVar4)();
}



/* Entry: 109a8f64c; end: 109a8fe23;  */

void FUN_109a8f64c(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined8 uStack_38;
  undefined4 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *param_1;
  uVar1 = uVar3 & 0x1f0000;
  if (param_7 != 0) {
    param_6 = 1;
  }
  if ((((param_6 & 1) == 0) && ((int)param_5 < 0)) && (uVar1 == 0x10000)) {
    if (((uVar3 >> 0x1e & 1) == 0) ||
       ((*(uint **)(*(long *)(param_1 + 2) + 0x40))[1] == param_3 &&
        **(uint **)(*(long *)(param_1 + 2) + 0x40) == param_2)) {
      puVar5 = *(uint **)(param_1 + 2);
      if (((int)uVar3 < 0) && ((*puVar5 & 0xfff) != param_4)) {
        puVar6 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar6 = 1;
        uStack_38 = puVar6 + 1;
        puStack_30 = (undefined4 *)0x2c;
        *(undefined8 *)(puVar6 + 3) = 0x207c7c2029286570;
        *(undefined8 *)(puVar6 + 1) = 0x7954646578696621;
        *(undefined1 *)(puVar6 + 0xc) = 0;
        *(undefined8 *)(puVar6 + 7) = 0x7079743e2d296a62;
        *(undefined8 *)(puVar6 + 5) = 0x6f292a74614d2828;
        *(undefined8 *)(puVar6 + 10) = 0x657079746d203d3d;
        *(undefined8 *)(puVar6 + 8) = 0x202928657079743e;
        FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x8b9);
        goto LAB_109a8fc94;
      }
      if ((((2 < (int)puVar5[1]) || (puVar5[2] != param_2)) || (puVar5[3] != param_3)) ||
         (((*puVar5 & 0xfff) != (param_4 & 0xfff) || (*(long *)(puVar5 + 4) == 0)))) {
        uStack_38 = (undefined4 *)CONCAT44(param_3,param_2);
        FUN_109a83fd0(puVar5,2,&uStack_38);
      }
LAB_109a8f800:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        return;
      }
      goto LAB_109a8f93c;
    }
  }
  else {
    uVar2 = param_6;
    if (param_5 < 0x80000000 || uVar1 != 0xa0000) {
      uVar2 = 1;
    }
    if ((uVar2 & 1) == 0) {
      if (((uVar3 >> 0x1e & 1) != 0) &&
         ((*(uint **)(*(long *)(param_1 + 2) + 0x30))[1] != param_3 ||
          **(uint **)(*(long *)(param_1 + 2) + 0x30) != param_2)) {
        puVar6 = (undefined4 *)0x4c;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar6 + 7) = 0x69733e2d296a626f;
        *(undefined8 *)(puVar6 + 5) = 0x292a74614d552828;
        *(undefined8 *)(puVar6 + 0xb) = 0x2029282928726f74;
        *(undefined8 *)(puVar6 + 9) = 0x617265706f2e657a;
        *(undefined8 *)(puVar6 + 0xf) = 0x5f202c736c6f635f;
        *(undefined8 *)(puVar6 + 0xd) = 0x28657a6953203d3d;
        *puVar6 = 1;
        uStack_38 = puVar6 + 1;
        puStack_30 = (undefined4 *)0x45;
        *(undefined1 *)((long)puVar6 + 0x49) = 0;
        *(undefined8 *)((long)puVar6 + 0x41) = 0x2973776f725f202c;
        *(undefined8 *)(puVar6 + 3) = 0x207c7c202928657a;
        *(undefined8 *)(puVar6 + 1) = 0x6953646578696621;
        FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x8bf);
        goto LAB_109a8fc94;
      }
      puVar5 = *(uint **)(param_1 + 2);
      if (((int)uVar3 < 0) && ((*puVar5 & 0xfff) != param_4)) {
        puVar6 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar6 = 1;
        uStack_38 = puVar6 + 1;
        puStack_30 = (undefined4 *)0x2d;
        *(undefined8 *)(puVar6 + 3) = 0x207c7c2029286570;
        *(undefined8 *)(puVar6 + 1) = 0x7954646578696621;
        *(undefined1 *)((long)puVar6 + 0x31) = 0;
        *(undefined8 *)(puVar6 + 7) = 0x79743e2d296a626f;
        *(undefined8 *)(puVar6 + 5) = 0x292a74614d552828;
        *(undefined8 *)((long)puVar6 + 0x29) = 0x657079746d203d3d;
        *(undefined8 *)((long)puVar6 + 0x21) = 0x202928657079743e;
        FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x8c0);
        goto LAB_109a8fc94;
      }
      if ((((2 < (int)puVar5[1]) || (puVar5[2] != param_2)) || (puVar5[3] != param_3)) ||
         (((*puVar5 & 0xfff) != (param_4 & 0xfff) || (*(long *)(puVar5 + 8) == 0)))) {
        uStack_38 = (undefined4 *)CONCAT44(param_3,param_2);
        FUN_109ac50c0(puVar5,2,&uStack_38,param_4 & 0xfff,0);
      }
      goto LAB_109a8f800;
    }
    uVar2 = param_6;
    if (param_5 < 0x80000000 || uVar1 != 0x90000) {
      uVar2 = 1;
    }
    if ((uVar2 & 1) == 0) {
      if (((uVar3 >> 0x1e & 1) != 0) &&
         (*(uint *)(*(long *)(param_1 + 2) + 8) != param_3 ||
          *(uint *)(*(long *)(param_1 + 2) + 4) != param_2)) {
        puVar6 = (undefined4 *)0x48;
        func_0x000107c2ae8c();
        *puVar6 = 1;
        uStack_38 = puVar6 + 1;
        puStack_30 = (undefined4 *)0x42;
        *(undefined8 *)(puVar6 + 3) = 0x207c7c202928657a;
        *(undefined8 *)(puVar6 + 1) = 0x6953646578696621;
        *(undefined8 *)(puVar6 + 7) = 0x292a74614d757047;
        *(undefined8 *)(puVar6 + 5) = 0x3a3a616475632828;
        *(undefined8 *)(puVar6 + 0xb) = 0x203d3d202928657a;
        *(undefined8 *)(puVar6 + 9) = 0x69733e2d296a626f;
        *(undefined1 *)((long)puVar6 + 0x46) = 0;
        *(undefined2 *)(puVar6 + 0x11) = 0x2973;
        *(undefined8 *)(puVar6 + 0xf) = 0x776f725f202c736c;
        *(undefined8 *)(puVar6 + 0xd) = 0x6f635f28657a6953;
        FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x8c6);
        goto LAB_109a8fc94;
      }
      if (((int)uVar3 < 0) && ((**(uint **)(param_1 + 2) & 0xfff) != param_4)) {
        puVar6 = (undefined4 *)0x3c;
        func_0x000107c2ae8c();
        *puVar6 = 1;
        uStack_38 = puVar6 + 1;
        puStack_30 = (undefined4 *)0x35;
        *(undefined8 *)(puVar6 + 3) = 0x207c7c2029286570;
        *(undefined8 *)(puVar6 + 1) = 0x7954646578696621;
        *(undefined1 *)((long)puVar6 + 0x39) = 0;
        *(undefined8 *)(puVar6 + 7) = 0x292a74614d757047;
        *(undefined8 *)(puVar6 + 5) = 0x3a3a616475632828;
        *(undefined8 *)(puVar6 + 0xb) = 0x203d3d2029286570;
        *(undefined8 *)(puVar6 + 9) = 0x79743e2d296a626f;
        *(undefined8 *)((long)puVar6 + 0x31) = 0x657079746d203d3d;
        FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x8c7);
        goto LAB_109a8fc94;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        puVar6 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar6 + 3) = 0x6320736920797261;
        *(undefined8 *)(puVar6 + 1) = 0x7262696c20656854;
        *puVar6 = 1;
        puStack_30 = puVar6 + 1;
        lStack_28 = 0x2c;
        *(undefined1 *)(puVar6 + 0xc) = 0;
        *(undefined8 *)(puVar6 + 7) = 0x2074756f68746977;
        *(undefined8 *)(puVar6 + 5) = 0x2064656c69706d6f;
        *(undefined8 *)(puVar6 + 10) = 0x74726f7070757320;
        *(undefined8 *)(puVar6 + 8) = 0x414455432074756f;
        FUN_109ac3188(0xffffff28,&puStack_30,&UNK_10f5962f0,&UNK_10f5962fe,0x61);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x109a4b8c0);
        (*pcVar4)();
      }
    }
    else {
      uVar2 = param_6;
      if (param_5 < 0x80000000 || uVar1 != 0x70000) {
        uVar2 = 1;
      }
      if ((uVar2 & 1) == 0) {
        if (((uVar3 >> 0x1e & 1) != 0) &&
           (*(uint *)(*(long *)(param_1 + 2) + 0x14) != param_3 ||
            *(uint *)(*(long *)(param_1 + 2) + 0x10) != param_2)) {
          FUN_109a38ed8(&uStack_38,&UNK_10f5980cf);
          FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x8cd);
          goto LAB_109a8fc94;
        }
        if (((int)uVar3 < 0) && (*(uint *)(*(long *)(param_1 + 2) + 0x18) != param_4)) {
          FUN_109a38ed8(&uStack_38,&UNK_10f597f60);
          FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x8ce);
          goto LAB_109a8fc94;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
          puVar6 = (undefined4 *)0x34;
          func_0x000107c2ae8c();
          *(undefined8 *)(puVar6 + 3) = 0x6320736920797261;
          *(undefined8 *)(puVar6 + 1) = 0x7262696c20656854;
          *puVar6 = 1;
          puStack_30 = puVar6 + 1;
          lStack_28 = 0x2e;
          *(undefined1 *)((long)puVar6 + 0x32) = 0;
          *(undefined8 *)(puVar6 + 7) = 0x2074756f68746977;
          *(undefined8 *)(puVar6 + 5) = 0x2064656c69706d6f;
          *(undefined8 *)((long)puVar6 + 0x2a) = 0x74726f7070757320;
          *(undefined8 *)((long)puVar6 + 0x22) = 0x4c476e65704f2074;
          FUN_109ac3188(0xffffff26,&puStack_30,&UNK_10f598c75,&UNK_10f598bc8,0x3c);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x109aa6618);
          (*pcVar4)();
        }
      }
      else {
        if (param_5 < 0x80000000 || uVar1 != 0x80000) {
          param_6 = 1;
        }
        if ((param_6 & 1) != 0) {
          uStack_38 = (undefined4 *)CONCAT44(param_3,param_2);
          FUN_109a8727c(param_1,2,&uStack_38);
          goto LAB_109a8f800;
        }
        if (((uVar3 >> 0x1e & 1) != 0) &&
           ((*(uint *)(*(long *)(param_1 + 2) + 8) != param_3 ||
            (*(uint *)(*(long *)(param_1 + 2) + 4) != param_2)))) {
          FUN_109a38ed8(&uStack_38,&UNK_10f598111);
          FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x8d4);
          goto LAB_109a8fc94;
        }
        if (((int)uVar3 < 0) && ((**(uint **)(param_1 + 2) & 0xfff) != param_4)) {
          FUN_109a38ed8(&uStack_38,&UNK_10f597fca);
          FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x8d5);
          goto LAB_109a8fc94;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
          puVar6 = (undefined4 *)0x34;
          func_0x000107c2ae8c();
          *(undefined8 *)(puVar6 + 3) = 0x6320736920797261;
          *(undefined8 *)(puVar6 + 1) = 0x7262696c20656854;
          *puVar6 = 1;
          puStack_30 = puVar6 + 1;
          lStack_28 = 0x2c;
          *(undefined1 *)(puVar6 + 0xc) = 0;
          *(undefined8 *)(puVar6 + 7) = 0x2074756f68746977;
          *(undefined8 *)(puVar6 + 5) = 0x2064656c69706d6f;
          *(undefined8 *)(puVar6 + 10) = 0x74726f7070757320;
          *(undefined8 *)(puVar6 + 8) = 0x414455432074756f;
          FUN_109ac3188(0xffffff28,&puStack_30,&UNK_10f5963c8,&UNK_10f5963d6,0x61);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x109a4ba00);
          (*pcVar4)();
        }
      }
    }
LAB_109a8f93c:
    ___stack_chk_fail();
  }
  puVar6 = (undefined4 *)0x4c;
  func_0x000107c2ae8c();
  *puVar6 = 1;
  uStack_38 = puVar6 + 1;
  puStack_30 = (undefined4 *)0x44;
  *(undefined8 *)(puVar6 + 3) = 0x207c7c202928657a;
  *(undefined8 *)(puVar6 + 1) = 0x6953646578696621;
  *(undefined8 *)(puVar6 + 7) = 0x7a69733e2d296a62;
  *(undefined8 *)(puVar6 + 5) = 0x6f292a74614d2828;
  *(undefined8 *)(puVar6 + 0xb) = 0x3d2029282928726f;
  *(undefined8 *)(puVar6 + 9) = 0x74617265706f2e65;
  *(undefined1 *)(puVar6 + 0x12) = 0;
  puVar6[0x11] = 0x2973776f;
  *(undefined8 *)(puVar6 + 0xf) = 0x725f202c736c6f63;
  *(undefined8 *)(puVar6 + 0xd) = 0x5f28657a6953203d;
  FUN_109ac3188(0xffffff29,&uStack_38,&DAT_10f68efec,&UNK_10f597913,0x8b8);
LAB_109a8fc94:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109a8fc98);
  (*pcVar4)();
}



/* Entry: 109a8fe24; end: 109a8fe9f;  */

void FUN_109a8fe24(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x20) + 0x10);
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
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 8) + 0x20))();
    }
  }
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x30);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 109a8fea0; end: 109a8ff33;  */

void FUN_109a8fea0(long *param_1,ulong param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar5 = param_1[1] - *param_1 >> 3;
  bVar2 = param_2 < (ulong)(lVar5 * -0x5555555555555555);
  puVar4 = (undefined8 *)(param_2 + lVar5 * 0x5555555555555555);
  if (bVar2 || puVar4 == (undefined8 *)0x0) {
    if (bVar2) {
      plVar11 = (long *)(*param_1 + param_2 * 0x18);
      plVar3 = (long *)param_1[1];
      while (plVar1 = plVar3, plVar1 != plVar11) {
        plVar3 = plVar1 + -3;
        if (*plVar3 != 0) {
          plVar1[-2] = *plVar3;
          __ZdlPv();
        }
      }
      param_1[1] = (long)plVar11;
    }
    return;
  }
  lVar5 = param_1[1];
  if ((undefined8 *)((param_1[2] - lVar5 >> 3) * -0x5555555555555555) < puVar4) {
    lVar5 = lVar5 - *param_1;
    uVar7 = (long)puVar4 + (lVar5 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar7) {
      FUN_1092a9b50();
      plVar3 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      lVar5 = *plVar3;
      lVar12 = plVar3[1];
      lVar6 = puVar4[1] + (lVar5 - lVar12);
      lVar9 = lVar6;
      if (lVar12 != lVar5) {
        do {
          lVar10 = 0;
          do {
            *(undefined1 *)(lVar9 + lVar10) = *(undefined1 *)(lVar5 + lVar10);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 3);
          lVar5 = lVar5 + 3;
          lVar9 = lVar9 + 3;
        } while (lVar5 != lVar12);
        lVar5 = *plVar3;
      }
      puVar4[1] = lVar6;
      *plVar3 = lVar6;
      plVar3[1] = lVar5;
      puVar4[1] = lVar5;
      lVar5 = plVar3[1];
      plVar3[1] = puVar4[2];
      puVar4[2] = lVar5;
      lVar5 = plVar3[2];
      plVar3[2] = puVar4[3];
      puVar4[3] = lVar5;
      *puVar4 = puVar4[1];
      return;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar6 * 0x5555555555555556;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (uVar8 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_1092a9b64();
    }
    lVar5 = (long)plVar3 + lVar5;
    lVar6 = (((long)puVar4 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
    _bzero(lVar5,lVar6);
    lVar12 = lVar5 - (param_1[1] - *param_1);
    _memcpy(lVar12);
    lStack_68 = *param_1;
    *param_1 = lVar12;
    param_1[1] = lVar5 + lVar6;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar3 + uVar8 * 3);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x00010528d5a4(&lStack_68);
  }
  else {
    if (puVar4 != (undefined8 *)0x0) {
      lVar6 = (((long)puVar4 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
      _bzero(lVar5,lVar6);
      lVar5 = lVar5 + lVar6;
    }
    param_1[1] = lVar5;
  }
  return;
}



/* Entry: 109a8ff34; end: 109a9005b;  */

/* WARNING: Removing unreachable block (ram,0x000109a85ec0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109a8ff34(uint *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long *plVar10;
  code *pcVar11;
  bool bVar12;
  long *plVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  undefined4 *puVar18;
  int *piVar19;
  ulong uVar20;
  long lVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined1 *puVar24;
  undefined4 *puVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  undefined8 *puVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar35;
  undefined8 *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined4 *puStack_4d8;
  undefined4 *puStack_4d0;
  uint *puStack_4c8;
  undefined8 *******pppppppuStack_4c0;
  code *pcStack_4b8;
  undefined8 uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  long lStack_490;
  undefined4 *puStack_488;
  undefined4 *puStack_480;
  uint *puStack_478;
  undefined8 *******pppppppuStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  long lStack_440;
  undefined4 *puStack_438;
  undefined4 *puStack_430;
  uint *puStack_428;
  undefined8 *******pppppppuStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  long lStack_3f0;
  undefined4 *puStack_3e8;
  undefined4 *puStack_3e0;
  uint *puStack_3d8;
  undefined8 *******pppppppuStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined4 *puStack_398;
  undefined4 *puStack_390;
  uint *puStack_388;
  undefined8 *******pppppppuStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  long lStack_358;
  long lStack_350;
  undefined4 *puStack_348;
  undefined4 *puStack_340;
  uint *puStack_338;
  undefined8 *******pppppppuStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  long lStack_300;
  undefined4 *puStack_2f8;
  undefined4 *puStack_2f0;
  uint *puStack_2e8;
  undefined8 *******pppppppuStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined4 *puStack_2a8;
  undefined4 *puStack_2a0;
  uint *puStack_298;
  undefined1 *******pppppppuStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  long lStack_260;
  ulong uStack_258;
  long lStack_250;
  uint *puStack_248;
  undefined1 ******ppppppuStack_240;
  code *pcStack_238;
  uint *puStack_228;
  long lStack_220;
  long lStack_218;
  uint *puStack_210;
  uint *puStack_208;
  long lStack_200;
  ulong uStack_1f8;
  long lStack_1f0;
  uint *puStack_1e8;
  undefined1 *****pppppuStack_1e0;
  code *pcStack_1d8;
  uint *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  uint *puStack_1b0;
  uint *puStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  undefined4 *puStack_188;
  undefined4 *puStack_180;
  uint *puStack_178;
  undefined1 ****ppppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined4 *puStack_138;
  undefined4 *puStack_130;
  uint *puStack_128;
  undefined1 ***pppuStack_120;
  undefined8 uStack_118;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  uint *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  uint *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar18 = *(undefined4 **)param_1;
  puVar23 = *(undefined4 **)(param_1 + 2);
  lVar30 = (long)puVar23 - (long)puVar18;
  uVar34 = lVar30 >> 1;
  if (param_2 <= uVar34) {
    if (uVar34 <= param_2) {
      return;
    }
    lVar30 = (long)puVar18 + param_2 * 2;
LAB_109a90038:
    *(long *)(param_1 + 2) = lVar30;
    return;
  }
  uVar32 = param_2 - uVar34;
  if (uVar32 <= (ulong)(*(long *)(param_1 + 4) - (long)puVar23 >> 1)) {
    _bzero(puVar23,uVar32 * 2);
    lVar30 = (long)puVar23 + uVar32 * 2;
    goto LAB_109a90038;
  }
  puVar15 = param_1;
  if ((long)param_2 < 0) {
    FUN_109a9c2b4();
  }
  else {
    uVar20 = *(long *)(param_1 + 4) - (long)puVar18;
    unaff_x25 = uVar20;
    if (uVar20 <= param_2) {
      unaff_x25 = param_2;
    }
    if (0x7ffffffffffffffd < uVar20) {
      unaff_x25 = 0x7fffffffffffffff;
    }
    if (-1 < (long)unaff_x25) {
      lVar14 = unaff_x25 << 1;
      __Znwm();
      lVar30 = lVar14 + lVar30;
      _bzero(lVar30,uVar32 * 2);
      puVar24 = (undefined1 *)(lVar30 + uVar34 * -2);
      puVar1 = puVar24;
      for (puVar22 = puVar18; puVar22 != puVar23; puVar22 = (undefined4 *)((long)puVar22 + 2)) {
        *puVar1 = *(undefined1 *)puVar22;
        puVar1[1] = *(undefined1 *)((long)puVar22 + 1);
        puVar1 = puVar1 + 2;
      }
      *(undefined1 **)param_1 = puVar24;
      *(ulong *)(param_1 + 2) = lVar30 + uVar32 * 2;
      *(ulong *)(param_1 + 4) = lVar14 + unaff_x25 * 2;
      if (puVar18 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  func_0x000104c4f740();
  pcStack_58 = FUN_109a9005c;
  lVar21 = *(long *)puVar15;
  lVar16 = *(long *)(puVar15 + 2);
  lVar14 = lVar16 - lVar21;
  bVar12 = (ulong)(lVar14 * -0x5555555555555555) <= param_2;
  uVar20 = param_2 + lVar14 * 0x5555555555555555;
  if (!bVar12 || uVar20 == 0) {
    if (bVar12) {
      return;
    }
    lVar16 = lVar21 + param_2 * 3;
LAB_109a901dc:
    *(long *)(puVar15 + 2) = lVar16;
    return;
  }
  uStack_90 = uVar34;
  uStack_88 = uVar32;
  lStack_80 = lVar30;
  puStack_78 = puVar23;
  puStack_70 = puVar18;
  puStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if (uVar20 <= (ulong)((*(long *)(puVar15 + 4) - lVar16) * -0x5555555555555555)) {
    uVar34 = uVar20 * 3 - 3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar34;
    lVar30 = (SUB168(auVar8 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar34 / 3 + 3;
    _bzero(lVar16,lVar30);
    lVar16 = lVar16 + lVar30;
    goto LAB_109a901dc;
  }
  if (param_2 < 0x5555555555555556) {
    lVar21 = *(long *)(puVar15 + 4) - lVar21;
    uVar34 = lVar21 * 0x5555555555555556;
    if (uVar34 < param_2 || uVar34 - param_2 == 0) {
      uVar34 = param_2;
    }
    if (0x2aaaaaaaaaaaaaa9 < (ulong)(lVar21 * -0x5555555555555555)) {
      uVar34 = 0x5555555555555555;
    }
    puStack_98 = puVar15;
    if (uVar34 < 0x5555555555555556) {
      lVar16 = uVar34 * 3;
      __Znwm();
      lVar14 = lVar16 + lVar14;
      lStack_a0 = lVar16 + uVar34 * 3;
      uVar34 = uVar20 * 3 - 3;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar34;
      lVar30 = (SUB168(auVar6 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar34 / 3 +
               3;
      lStack_b8 = lVar16;
      lStack_b0 = lVar14;
      _bzero(lVar14,lVar30);
      lStack_a8 = lVar14 + lVar30;
      FUN_109a9c2c8(puVar15,&lStack_b8);
      if (lStack_a8 - lStack_b0 != 0) {
        uVar34 = (lStack_a8 - lStack_b0) - 3;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar34;
        lStack_a8 = (lStack_a8 -
                    ((SUB168(auVar7 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) +
                    uVar34 / 3)) + -3;
      }
      if (lStack_b8 == 0) {
        return;
      }
      __ZdlPv();
      return;
    }
  }
  else {
    func_0x000109a9c348();
  }
  func_0x000104c4f740();
  if (lStack_a8 - lStack_b0 != 0) {
    uVar34 = (lStack_a8 - lStack_b0) - 3;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar34;
    lStack_a8 = (lStack_a8 -
                ((SUB168(auVar9 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar34 / 3)
                ) + -3;
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_c8 = FUN_109a90254;
  puVar18 = *(undefined4 **)puVar15;
  puVar23 = *(undefined4 **)(puVar15 + 2);
  lVar30 = (long)puVar23 - (long)puVar18;
  bVar12 = (ulong)((lVar30 >> 1) * -0x5555555555555555) <= param_2;
  uVar34 = param_2 + (lVar30 >> 1) * 0x5555555555555555;
  if (!bVar12 || uVar34 == 0) {
    if (bVar12) {
      return;
    }
    lVar30 = (long)puVar18 + param_2 * 6;
LAB_109a903d8:
    *(long *)(puVar15 + 2) = lVar30;
    return;
  }
  ppuStack_d0 = &puStack_60;
  if (uVar34 <= (ulong)((*(long *)(puVar15 + 4) - (long)puVar23 >> 1) * -0x5555555555555555)) {
    lVar30 = ((uVar34 * 6 - 6) / 6) * 6 + 6;
    _bzero(puVar23,lVar30);
    lVar30 = (long)puVar23 + lVar30;
    goto LAB_109a903d8;
  }
  puVar17 = puVar15;
  if (param_2 < 0x2aaaaaaaaaaaaaab) {
    lVar14 = *(long *)(puVar15 + 4) - (long)puVar18 >> 1;
    unaff_x26 = 0xaaaaaaaaaaaaaaab;
    uVar32 = lVar14 * 0x5555555555555556;
    if (uVar32 < param_2 || uVar32 - param_2 == 0) {
      uVar32 = param_2;
    }
    if (0x1555555555555554 < (ulong)(lVar14 * -0x5555555555555555)) {
      uVar32 = 0x2aaaaaaaaaaaaaaa;
    }
    if (uVar32 < 0x2aaaaaaaaaaaaaab) {
      lVar16 = uVar32 * 6;
      __Znwm();
      lVar21 = ((uVar34 * 6 - 6) / 6) * 6 + 6;
      _bzero(lVar16 + lVar30,lVar21);
      lVar14 = lVar16;
      for (puVar22 = puVar18; puVar22 != puVar23; puVar22 = (undefined4 *)((long)puVar22 + 6)) {
        lVar27 = 0;
        do {
          *(undefined2 *)(lVar14 + lVar27) = *(undefined2 *)((long)puVar22 + lVar27);
          lVar27 = lVar27 + 2;
        } while (lVar27 != 6);
        lVar14 = lVar14 + 6;
      }
      *(long *)puVar15 = lVar16;
      *(long *)(puVar15 + 2) = lVar16 + lVar30 + lVar21;
      *(ulong *)(puVar15 + 4) = lVar16 + uVar32 * 6;
      if (puVar18 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c35c();
  }
  func_0x000104c4f740();
  uStack_118 = 0x109a903fc;
  puVar22 = *(undefined4 **)puVar17;
  puVar2 = *(undefined4 **)(puVar17 + 2);
  lVar14 = (long)puVar2 - (long)puVar22;
  uVar32 = lVar14 >> 3;
  if (param_2 <= uVar32) {
    if (uVar32 <= param_2) {
      return;
    }
    puVar22 = puVar22 + param_2 * 2;
LAB_109a9050c:
    *(undefined4 **)(puVar17 + 2) = puVar22;
    return;
  }
  uVar33 = param_2 - uVar32;
  uStack_160 = unaff_x26;
  uStack_158 = unaff_x25;
  uStack_150 = uVar34;
  lStack_148 = lVar30;
  uStack_140 = uVar20;
  puStack_138 = puVar18;
  puStack_130 = puVar23;
  puStack_128 = puVar15;
  pppuStack_120 = &ppuStack_d0;
  if (uVar33 <= (ulong)(*(long *)(puVar17 + 4) - (long)puVar2 >> 3)) {
    _bzero(puVar2,uVar33 * 8);
    puVar22 = puVar2 + uVar33 * 2;
    goto LAB_109a9050c;
  }
  puVar15 = puVar17;
  if (param_2 >> 0x3d == 0) {
    uVar20 = *(long *)(puVar17 + 4) - (long)puVar22;
    uVar34 = (long)uVar20 >> 2;
    if (uVar34 <= param_2) {
      uVar34 = param_2;
    }
    if (0x7ffffffffffffff7 < uVar20) {
      uVar34 = 0x1fffffffffffffff;
    }
    if (uVar34 >> 0x3d == 0) {
      lVar30 = uVar34 << 3;
      __Znwm();
      lVar14 = lVar30 + lVar14;
      _bzero(lVar14,uVar33 * 8);
      puVar25 = (undefined4 *)(lVar14 + uVar32 * -8);
      puVar23 = puVar25;
      for (puVar18 = puVar22; puVar18 != puVar2; puVar18 = puVar18 + 2) {
        *puVar23 = *puVar18;
        puVar23[1] = puVar18[1];
        puVar23 = puVar23 + 2;
      }
      *(undefined4 **)puVar17 = puVar25;
      *(ulong *)(puVar17 + 2) = lVar14 + uVar33 * 8;
      *(ulong *)(puVar17 + 4) = lVar30 + uVar34 * 8;
      puVar18 = puVar22;
      if (puVar22 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c370();
    uVar34 = unaff_x25;
  }
  func_0x000104c4f740();
  pcStack_168 = FUN_109a90530;
  lVar21 = *(long *)puVar15;
  lVar16 = *(long *)(puVar15 + 2);
  lVar30 = lVar16 - lVar21;
  bVar12 = (ulong)((lVar30 >> 2) * -0x5555555555555555) <= param_2;
  uVar20 = param_2 + (lVar30 >> 2) * 0x5555555555555555;
  if (!bVar12 || uVar20 == 0) {
    if (bVar12) {
      return;
    }
    lVar16 = lVar21 + param_2 * 0xc;
LAB_109a906a8:
    *(long *)(puVar15 + 2) = lVar16;
    return;
  }
  uStack_1a0 = uVar32;
  uStack_198 = uVar33;
  lStack_190 = lVar14;
  puStack_188 = puVar2;
  puStack_180 = puVar22;
  puStack_178 = puVar17;
  ppppuStack_170 = &pppuStack_120;
  if (uVar20 <= (ulong)((*(long *)(puVar15 + 4) - lVar16 >> 2) * -0x5555555555555555)) {
    lVar30 = ((uVar20 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar16,lVar30);
    lVar16 = lVar16 + lVar30;
    goto LAB_109a906a8;
  }
  if (param_2 < 0x1555555555555556) {
    lVar14 = *(long *)(puVar15 + 4) - lVar21 >> 2;
    uVar34 = lVar14 * 0x5555555555555556;
    if (uVar34 < param_2 || uVar34 - param_2 == 0) {
      uVar34 = param_2;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar14 * -0x5555555555555555)) {
      uVar34 = 0x1555555555555555;
    }
    puVar17 = puVar15;
    puStack_1a8 = puVar15;
    FUN_1096379e8();
    lVar30 = (long)puVar17 + lVar30;
    puStack_1b0 = puVar17 + uVar34 * 3;
    lVar14 = ((uVar20 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    puStack_1c8 = puVar17;
    lStack_1c0 = lVar30;
    _bzero(lVar30,lVar14);
    lStack_1b8 = lVar30 + lVar14;
    FUN_109637fbc(puVar15,&puStack_1c8);
    if (lStack_1b8 - lStack_1c0 != 0) {
      lStack_1b8 = lStack_1b8 + (((lStack_1b8 - lStack_1c0) - 0xcU) / 0xc) * -0xc + -0xc;
    }
    if (puStack_1c8 == (uint *)0x0) {
      return;
    }
    __ZdlPv();
    return;
  }
  FUN_1096379d4();
  if (lStack_1b8 - lStack_1c0 != 0) {
    lStack_1b8 = lStack_1b8 + (((lStack_1b8 - lStack_1c0) - 0xcU) / 0xc) * -0xc + -0xc;
  }
  if (puStack_1c8 != (uint *)0x0) {
    __ZdlPv();
  }
  puVar17 = puVar15;
  __Unwind_Resume();
  pcStack_1d8 = FUN_109a90718;
  lVar27 = *(long *)puVar17;
  lVar21 = *(long *)(puVar17 + 2);
  lVar14 = lVar21 - lVar27;
  uVar26 = lVar14 >> 4;
  if (param_2 <= uVar26) {
    if (uVar26 <= param_2) {
      return;
    }
    lVar21 = lVar27 + param_2 * 0x10;
LAB_109a9080c:
    *(long *)(puVar17 + 2) = lVar21;
    return;
  }
  uVar26 = param_2 - uVar26;
  lStack_200 = lVar30;
  uStack_1f8 = uVar20;
  lStack_1f0 = lVar16;
  puStack_1e8 = puVar15;
  pppppuStack_1e0 = &ppppuStack_170;
  if (uVar26 <= (ulong)(*(long *)(puVar17 + 4) - lVar21 >> 4)) {
    _bzero(lVar21,uVar26 * 0x10);
    lVar21 = lVar21 + uVar26 * 0x10;
    goto LAB_109a9080c;
  }
  if (param_2 >> 0x3c == 0) {
    uVar32 = *(long *)(puVar17 + 4) - lVar27;
    uVar34 = (long)uVar32 >> 3;
    if (uVar34 <= param_2) {
      uVar34 = param_2;
    }
    if (0x7fffffffffffffef < uVar32) {
      uVar34 = 0xfffffffffffffff;
    }
    puVar15 = puVar17;
    puStack_208 = puVar17;
    FUN_1092e8fac();
    lVar14 = (long)puVar15 + lVar14;
    puStack_210 = puVar15 + uVar34 * 4;
    puStack_228 = puVar15;
    lStack_220 = lVar14;
    _bzero(lVar14,uVar26 * 0x10);
    lStack_218 = lVar14 + uVar26 * 0x10;
    FUN_1092e8f14(puVar17,&puStack_228);
    if (lStack_218 != lStack_220) {
      lStack_218 = lStack_218 + ((lStack_220 - lStack_218) + 0xfU & 0xfffffffffffffff0);
    }
    if (puStack_228 == (uint *)0x0) {
      return;
    }
    __ZdlPv();
    return;
  }
  FUN_1092e8f98();
  if (lStack_218 != lStack_220) {
    lStack_218 = lStack_218 + ((lStack_220 - lStack_218) + 0xfU & 0xfffffffffffffff0);
  }
  if (puStack_228 != (uint *)0x0) {
    __ZdlPv();
  }
  puVar15 = puVar17;
  __Unwind_Resume();
  pcStack_238 = FUN_109a90860;
  puVar18 = *(undefined4 **)puVar15;
  puVar23 = *(undefined4 **)(puVar15 + 2);
  lVar30 = (long)puVar23 - (long)puVar18;
  bVar12 = (ulong)((lVar30 >> 3) * -0x5555555555555555) <= param_2;
  uVar20 = param_2 + (lVar30 >> 3) * 0x5555555555555555;
  if (!bVar12 || uVar20 == 0) {
    if (bVar12) {
      return;
    }
    puVar18 = puVar18 + param_2 * 6;
LAB_109a909e4:
    *(undefined4 **)(puVar15 + 2) = puVar18;
    return;
  }
  uStack_280 = unaff_x26;
  uStack_278 = uVar34;
  uStack_270 = uVar32;
  uStack_268 = uVar33;
  lStack_260 = lVar14;
  uStack_258 = uVar26;
  lStack_250 = lVar21;
  puStack_248 = puVar17;
  ppppppuStack_240 = &pppppuStack_1e0;
  if (uVar20 <= (ulong)((*(long *)(puVar15 + 4) - (long)puVar23 >> 3) * -0x5555555555555555)) {
    uVar34 = (uVar20 * 0x18 - 0x18) / 0x18;
    _bzero(puVar23,uVar34 * 0x18 + 0x18);
    puVar18 = puVar23 + uVar34 * 6 + 6;
    goto LAB_109a909e4;
  }
  puVar17 = puVar15;
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar16 = *(long *)(puVar15 + 4) - (long)puVar18 >> 3;
    uVar32 = lVar16 * 0x5555555555555556;
    if (uVar32 < param_2 || uVar32 - param_2 == 0) {
      uVar32 = param_2;
    }
    if (0x555555555555554 < (ulong)(lVar16 * -0x5555555555555555)) {
      uVar32 = 0xaaaaaaaaaaaaaaa;
    }
    uVar35 = 0xaaaaaaaaaaaaaaab;
    if (uVar32 < 0xaaaaaaaaaaaaaab) {
      lVar16 = uVar32 * 0x18;
      __Znwm();
      lVar21 = ((uVar20 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar16 + lVar30,lVar21);
      lVar14 = lVar16;
      for (puVar22 = puVar18; puVar22 != puVar23; puVar22 = puVar22 + 6) {
        lVar27 = 0;
        do {
          *(undefined4 *)(lVar14 + lVar27) = *(undefined4 *)((long)puVar22 + lVar27);
          lVar27 = lVar27 + 4;
        } while (lVar27 != 0x18);
        lVar14 = lVar14 + 0x18;
      }
      *(long *)puVar15 = lVar16;
      *(long *)(puVar15 + 2) = lVar16 + lVar30 + lVar21;
      *(ulong *)(puVar15 + 4) = lVar16 + uVar32 * 0x18;
      if (puVar18 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c384();
    uVar35 = unaff_x26;
  }
  func_0x000104c4f740();
  uStack_288 = 0x109a90a08;
  puVar22 = *(undefined4 **)puVar17;
  puVar2 = *(undefined4 **)(puVar17 + 2);
  lVar16 = (long)puVar2 - (long)puVar22;
  uVar32 = lVar16 >> 5;
  if (param_2 <= uVar32) {
    if (uVar32 <= param_2) {
      return;
    }
    puVar22 = puVar22 + param_2 * 8;
LAB_109a90b20:
    *(undefined4 **)(puVar17 + 2) = puVar22;
    return;
  }
  uVar33 = param_2 - uVar32;
  uStack_2d0 = uVar35;
  uStack_2c8 = uVar34;
  uStack_2c0 = uVar20;
  lStack_2b8 = lVar30;
  lStack_2b0 = lVar14;
  puStack_2a8 = puVar18;
  puStack_2a0 = puVar23;
  puStack_298 = puVar15;
  pppppppuStack_290 = &ppppppuStack_240;
  if (uVar33 <= (ulong)(*(long *)(puVar17 + 4) - (long)puVar2 >> 5)) {
    _bzero(puVar2,uVar33 * 0x20);
    puVar22 = puVar2 + uVar33 * 8;
    goto LAB_109a90b20;
  }
  puVar15 = puVar17;
  if (param_2 >> 0x3b == 0) {
    uVar20 = *(long *)(puVar17 + 4) - (long)puVar22;
    uVar34 = (long)uVar20 >> 4;
    if (uVar34 <= param_2) {
      uVar34 = param_2;
    }
    if (0x7fffffffffffffdf < uVar20) {
      uVar34 = 0x7ffffffffffffff;
    }
    if (uVar34 >> 0x3b == 0) {
      lVar14 = uVar34 << 5;
      __Znwm();
      lVar16 = lVar14 + lVar16;
      _bzero(lVar16,uVar33 * 0x20);
      lVar21 = lVar16 + uVar32 * -0x20;
      lVar30 = lVar21;
      for (puVar18 = puVar22; puVar18 != puVar2; puVar18 = puVar18 + 8) {
        lVar27 = 0;
        do {
          *(undefined4 *)(lVar30 + lVar27) = *(undefined4 *)((long)puVar18 + lVar27);
          lVar27 = lVar27 + 4;
        } while (lVar27 != 0x20);
        lVar30 = lVar30 + 0x20;
      }
      *(long *)puVar17 = lVar21;
      *(ulong *)(puVar17 + 2) = lVar16 + uVar33 * 0x20;
      *(ulong *)(puVar17 + 4) = lVar14 + uVar34 * 0x20;
      puVar18 = puVar22;
      if (puVar22 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c398();
  }
  func_0x000104c4f740();
  uStack_2d8 = 0x109a90b44;
  puVar18 = *(undefined4 **)puVar15;
  puVar23 = *(undefined4 **)(puVar15 + 2);
  lVar30 = (long)puVar23 - (long)puVar18;
  bVar12 = (ulong)((lVar30 >> 2) * -0x71c71c71c71c71c7) <= param_2;
  uVar20 = param_2 + (lVar30 >> 2) * 0x71c71c71c71c71c7;
  if (!bVar12 || uVar20 == 0) {
    if (bVar12) {
      return;
    }
    puVar18 = puVar18 + param_2 * 9;
LAB_109a90cf0:
    *(undefined4 **)(puVar15 + 2) = puVar18;
    return;
  }
  uStack_320 = uVar35;
  uStack_318 = uVar34;
  uStack_310 = uVar32;
  uStack_308 = uVar33;
  lStack_300 = lVar16;
  puStack_2f8 = puVar2;
  puStack_2f0 = puVar22;
  puStack_2e8 = puVar17;
  pppppppuStack_2e0 = &pppppppuStack_290;
  if (uVar20 <= (ulong)((*(long *)(puVar15 + 4) - (long)puVar23 >> 2) * -0x71c71c71c71c71c7)) {
    uVar34 = (uVar20 * 0x24 - 0x24) / 0x24;
    _bzero(puVar23,uVar34 * 0x24 + 0x24);
    puVar18 = puVar23 + uVar34 * 9 + 9;
    goto LAB_109a90cf0;
  }
  puVar17 = puVar15;
  if (param_2 < 0x71c71c71c71c71d) {
    lVar14 = *(long *)(puVar15 + 4) - (long)puVar18 >> 2;
    uVar32 = lVar14 * 0x1c71c71c71c71c72;
    if (uVar32 < param_2 || uVar32 - param_2 == 0) {
      uVar32 = param_2;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar14 * -0x71c71c71c71c71c7)) {
      uVar32 = 0x71c71c71c71c71c;
    }
    if (uVar32 < 0x71c71c71c71c71d) {
      lVar16 = uVar32 * 0x24;
      __Znwm();
      lVar21 = ((uVar20 * 0x24 - 0x24) / 0x24) * 0x24 + 0x24;
      _bzero(lVar16 + lVar30,lVar21);
      lVar14 = lVar16;
      for (puVar22 = puVar18; puVar22 != puVar23; puVar22 = puVar22 + 9) {
        lVar27 = 0;
        do {
          *(undefined4 *)(lVar14 + lVar27) = *(undefined4 *)((long)puVar22 + lVar27);
          lVar27 = lVar27 + 4;
        } while (lVar27 != 0x24);
        lVar14 = lVar14 + 0x24;
      }
      *(long *)puVar15 = lVar16;
      *(long *)(puVar15 + 2) = lVar16 + lVar30 + lVar21;
      *(ulong *)(puVar15 + 4) = lVar16 + uVar32 * 0x24;
      if (puVar18 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3ac();
  }
  func_0x000104c4f740();
  uStack_328 = 0x109a90d14;
  puVar22 = *(undefined4 **)puVar17;
  puVar2 = *(undefined4 **)(puVar17 + 2);
  lVar14 = (long)puVar2 - (long)puVar22;
  bVar12 = (ulong)((lVar14 >> 4) * -0x5555555555555555) <= param_2;
  uVar32 = param_2 + (lVar14 >> 4) * 0x5555555555555555;
  if (!bVar12 || uVar32 == 0) {
    if (bVar12) {
      return;
    }
    puVar22 = puVar22 + param_2 * 0xc;
LAB_109a90e98:
    *(undefined4 **)(puVar17 + 2) = puVar22;
    return;
  }
  uStack_370 = uVar35;
  uStack_368 = uVar34;
  uStack_360 = uVar20;
  lStack_358 = lVar30;
  lStack_350 = lVar16;
  puStack_348 = puVar18;
  puStack_340 = puVar23;
  puStack_338 = puVar15;
  pppppppuStack_330 = &pppppppuStack_2e0;
  if (uVar32 <= (ulong)((*(long *)(puVar17 + 4) - (long)puVar2 >> 4) * -0x5555555555555555)) {
    uVar34 = (uVar32 * 0x30 - 0x30) / 0x30;
    _bzero(puVar2,uVar34 * 0x30 + 0x30);
    puVar22 = puVar2 + uVar34 * 0xc + 0xc;
    goto LAB_109a90e98;
  }
  puVar15 = puVar17;
  if (param_2 < 0x555555555555556) {
    lVar30 = *(long *)(puVar17 + 4) - (long)puVar22 >> 4;
    uVar20 = lVar30 * 0x5555555555555556;
    if (uVar20 < param_2 || uVar20 - param_2 == 0) {
      uVar20 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar30 * -0x5555555555555555)) {
      uVar20 = 0x555555555555555;
    }
    uVar35 = 0xaaaaaaaaaaaaaaab;
    if (uVar20 < 0x555555555555556) {
      lVar16 = uVar20 * 0x30;
      __Znwm();
      lVar21 = ((uVar32 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
      _bzero(lVar16 + lVar14,lVar21);
      lVar30 = lVar16;
      for (puVar18 = puVar22; puVar18 != puVar2; puVar18 = puVar18 + 0xc) {
        lVar27 = 0;
        do {
          *(undefined4 *)(lVar30 + lVar27) = *(undefined4 *)((long)puVar18 + lVar27);
          lVar27 = lVar27 + 4;
        } while (lVar27 != 0x30);
        lVar30 = lVar30 + 0x30;
      }
      *(long *)puVar17 = lVar16;
      *(long *)(puVar17 + 2) = lVar16 + lVar14 + lVar21;
      *(ulong *)(puVar17 + 4) = lVar16 + uVar20 * 0x30;
      puVar18 = puVar22;
      if (puVar22 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3c0();
  }
  func_0x000104c4f740();
  uStack_378 = 0x109a90ebc;
  puVar18 = *(undefined4 **)puVar15;
  puVar23 = *(undefined4 **)(puVar15 + 2);
  lVar30 = (long)puVar23 - (long)puVar18;
  uVar20 = lVar30 >> 6;
  if (param_2 <= uVar20) {
    if (uVar20 <= param_2) {
      return;
    }
    puVar18 = puVar18 + param_2 * 0x10;
LAB_109a90fd4:
    *(undefined4 **)(puVar15 + 2) = puVar18;
    return;
  }
  uVar33 = param_2 - uVar20;
  uStack_3c0 = uVar35;
  uStack_3b8 = uVar34;
  uStack_3b0 = uVar32;
  lStack_3a8 = lVar14;
  lStack_3a0 = lVar16;
  puStack_398 = puVar22;
  puStack_390 = puVar2;
  puStack_388 = puVar17;
  pppppppuStack_380 = &pppppppuStack_330;
  if (uVar33 <= (ulong)(*(long *)(puVar15 + 4) - (long)puVar23 >> 6)) {
    _bzero(puVar23,uVar33 * 0x40);
    puVar18 = puVar23 + uVar33 * 0x10;
    goto LAB_109a90fd4;
  }
  puVar17 = puVar15;
  if (param_2 >> 0x3a == 0) {
    uVar32 = *(long *)(puVar15 + 4) - (long)puVar18;
    uVar34 = (long)uVar32 >> 5;
    if (uVar34 <= param_2) {
      uVar34 = param_2;
    }
    if (0x7fffffffffffffbf < uVar32) {
      uVar34 = 0x3ffffffffffffff;
    }
    if (uVar34 >> 0x3a == 0) {
      lVar16 = uVar34 << 6;
      __Znwm();
      lVar30 = lVar16 + lVar30;
      _bzero(lVar30,uVar33 * 0x40);
      lVar21 = lVar30 + uVar20 * -0x40;
      lVar14 = lVar21;
      for (puVar22 = puVar18; puVar22 != puVar23; puVar22 = puVar22 + 0x10) {
        lVar27 = 0;
        do {
          *(undefined4 *)(lVar14 + lVar27) = *(undefined4 *)((long)puVar22 + lVar27);
          lVar27 = lVar27 + 4;
        } while (lVar27 != 0x40);
        lVar14 = lVar14 + 0x40;
      }
      *(long *)puVar15 = lVar21;
      *(ulong *)(puVar15 + 2) = lVar30 + uVar33 * 0x40;
      *(ulong *)(puVar15 + 4) = lVar16 + uVar34 * 0x40;
      if (puVar18 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3d4();
  }
  func_0x000104c4f740();
  uStack_3c8 = 0x109a90ff8;
  puVar22 = *(undefined4 **)puVar17;
  puVar2 = *(undefined4 **)(puVar17 + 2);
  lVar14 = (long)puVar2 - (long)puVar22;
  uVar32 = lVar14 >> 7;
  if (param_2 <= uVar32) {
    if (uVar32 <= param_2) {
      return;
    }
    puVar22 = puVar22 + param_2 * 0x20;
LAB_109a91110:
    *(undefined4 **)(puVar17 + 2) = puVar22;
    return;
  }
  uVar26 = param_2 - uVar32;
  uStack_410 = uVar35;
  uStack_408 = uVar34;
  uStack_400 = uVar20;
  uStack_3f8 = uVar33;
  lStack_3f0 = lVar30;
  puStack_3e8 = puVar23;
  puStack_3e0 = puVar18;
  puStack_3d8 = puVar15;
  pppppppuStack_3d0 = &pppppppuStack_380;
  if (uVar26 <= (ulong)(*(long *)(puVar17 + 4) - (long)puVar2 >> 7)) {
    _bzero(puVar2,uVar26 * 0x80);
    puVar22 = puVar2 + uVar26 * 0x20;
    goto LAB_109a91110;
  }
  puVar15 = puVar17;
  if (param_2 >> 0x39 == 0) {
    uVar20 = *(long *)(puVar17 + 4) - (long)puVar22;
    uVar34 = (long)uVar20 >> 6;
    if (uVar34 <= param_2) {
      uVar34 = param_2;
    }
    if (0x7fffffffffffff7f < uVar20) {
      uVar34 = 0x1ffffffffffffff;
    }
    if (uVar34 >> 0x39 == 0) {
      lVar16 = uVar34 << 7;
      __Znwm();
      lVar14 = lVar16 + lVar14;
      _bzero(lVar14,uVar26 * 0x80);
      lVar21 = lVar14 + uVar32 * -0x80;
      lVar30 = lVar21;
      for (puVar18 = puVar22; puVar18 != puVar2; puVar18 = puVar18 + 0x20) {
        lVar27 = 0;
        do {
          *(undefined4 *)(lVar30 + lVar27) = *(undefined4 *)((long)puVar18 + lVar27);
          lVar27 = lVar27 + 4;
        } while (lVar27 != 0x80);
        lVar30 = lVar30 + 0x80;
      }
      *(long *)puVar17 = lVar21;
      *(ulong *)(puVar17 + 2) = lVar14 + uVar26 * 0x80;
      *(ulong *)(puVar17 + 4) = lVar16 + uVar34 * 0x80;
      puVar18 = puVar22;
      if (puVar22 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3e8();
  }
  func_0x000104c4f740();
  uStack_418 = 0x109a91134;
  puVar23 = *(undefined4 **)puVar15;
  puVar25 = *(undefined4 **)(puVar15 + 2);
  lVar30 = (long)puVar25 - (long)puVar23;
  uVar20 = lVar30 >> 8;
  if (param_2 <= uVar20) {
    if (uVar20 <= param_2) {
      return;
    }
    puVar23 = puVar23 + param_2 * 0x40;
LAB_109a9124c:
    *(undefined4 **)(puVar15 + 2) = puVar23;
    return;
  }
  uVar33 = param_2 - uVar20;
  uStack_460 = uVar35;
  uStack_458 = uVar34;
  uStack_450 = uVar32;
  uStack_448 = uVar26;
  lStack_440 = lVar14;
  puStack_438 = puVar2;
  puStack_430 = puVar22;
  puStack_428 = puVar17;
  pppppppuStack_420 = &pppppppuStack_3d0;
  if (uVar33 <= (ulong)(*(long *)(puVar15 + 4) - (long)puVar25 >> 8)) {
    _bzero(puVar25,uVar33 * 0x100);
    puVar23 = puVar25 + uVar33 * 0x40;
    goto LAB_109a9124c;
  }
  puVar17 = puVar15;
  if (param_2 >> 0x38 == 0) {
    uVar32 = *(long *)(puVar15 + 4) - (long)puVar23;
    uVar34 = (long)uVar32 >> 7;
    if (uVar34 <= param_2) {
      uVar34 = param_2;
    }
    if (0x7ffffffffffffeff < uVar32) {
      uVar34 = 0xffffffffffffff;
    }
    if (uVar34 >> 0x38 == 0) {
      lVar16 = uVar34 << 8;
      __Znwm();
      lVar30 = lVar16 + lVar30;
      _bzero(lVar30,uVar33 * 0x100);
      lVar21 = lVar30 + uVar20 * -0x100;
      lVar14 = lVar21;
      for (puVar18 = puVar23; puVar18 != puVar25; puVar18 = puVar18 + 0x40) {
        lVar27 = 0;
        do {
          *(undefined4 *)(lVar14 + lVar27) = *(undefined4 *)((long)puVar18 + lVar27);
          lVar27 = lVar27 + 4;
        } while (lVar27 != 0x100);
        lVar14 = lVar14 + 0x100;
      }
      *(long *)puVar15 = lVar21;
      *(ulong *)(puVar15 + 2) = lVar30 + uVar33 * 0x100;
      *(ulong *)(puVar15 + 4) = lVar16 + uVar34 * 0x100;
      puVar18 = puVar23;
      if (puVar23 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3fc();
  }
  func_0x000104c4f740();
  uStack_468 = 0x109a91270;
  puVar18 = *(undefined4 **)puVar17;
  puVar22 = *(undefined4 **)(puVar17 + 2);
  puVar31 = (undefined8 *)((long)puVar22 - (long)puVar18);
  uVar32 = (long)puVar31 >> 9;
  if (uVar32 < param_2) {
    uVar26 = param_2 - uVar32;
    uStack_4b0 = uVar35;
    uStack_4a8 = uVar34;
    uStack_4a0 = uVar20;
    uStack_498 = uVar33;
    lStack_490 = lVar30;
    puStack_488 = puVar25;
    puStack_480 = puVar23;
    puStack_478 = puVar15;
    pppppppuStack_470 = &pppppppuStack_420;
    if ((ulong)(*(long *)(puVar17 + 4) - (long)puVar22 >> 9) < uVar26) {
      puVar15 = puVar17;
      if (param_2 >> 0x37 == 0) {
        uVar20 = *(long *)(puVar17 + 4) - (long)puVar18;
        uVar34 = (long)uVar20 >> 8;
        if (uVar34 <= param_2) {
          uVar34 = param_2;
        }
        if (0x7ffffffffffffdff < uVar20) {
          uVar34 = 0x7fffffffffffff;
        }
        if (uVar34 >> 0x37 == 0) {
          lVar16 = uVar34 << 9;
          __Znwm();
          lVar14 = lVar16 + (long)puVar31;
          _bzero(lVar14,uVar26 * 0x200);
          lVar21 = lVar14 + uVar32 * -0x200;
          lVar30 = lVar21;
          for (puVar23 = puVar18; puVar23 != puVar22; puVar23 = puVar23 + 0x80) {
            lVar27 = 0;
            do {
              *(undefined4 *)(lVar30 + lVar27) = *(undefined4 *)((long)puVar23 + lVar27);
              lVar27 = lVar27 + 4;
            } while (lVar27 != 0x200);
            lVar30 = lVar30 + 0x200;
          }
          *(long *)puVar17 = lVar21;
          *(ulong *)(puVar17 + 2) = lVar14 + uVar26 * 0x200;
          *(ulong *)(puVar17 + 4) = lVar16 + uVar34 * 0x200;
          if (puVar18 == (undefined4 *)0x0) {
            return;
          }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(puVar18);
          return;
        }
      }
      else {
        func_0x000109a9c410();
      }
      func_0x000104c4f740();
      pcStack_4b8 = FUN_109a913ac;
      puStack_4e0 = puVar31;
      puStack_4d8 = puVar22;
      puStack_4d0 = puVar18;
      puStack_4c8 = puVar17;
      pppppppuStack_4c0 = &pppppppuStack_470;
      if ((*puVar15 & 0x1f0000) == 0x10000) {
        if ((*puVar15 >> 0x1e & 1) == 0) {
          lVar30 = *(long *)(puVar15 + 2);
          piVar19 = *(int **)(lVar30 + 0x40);
          iVar3 = *piVar19;
          if (-iVar3 != 0) {
            if ((*(char *)(lVar30 + 1) < '\0') ||
               (lVar14 = **(long **)(lVar30 + 0x48),
               *(ulong *)(lVar30 + 0x28) < *(ulong *)(lVar30 + 0x10))) {
              FUN_109a859f0(lVar30,0);
              piVar19 = *(int **)(lVar30 + 0x40);
              lVar14 = **(long **)(lVar30 + 0x48);
            }
            *piVar19 = 0;
            *(long *)(lVar30 + 0x20) = *(long *)(lVar30 + 0x20) + lVar14 * -iVar3;
          }
          return;
        }
        puVar18 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar18 = 1;
        puStack_4e0 = (undefined8 *)(puVar18 + 1);
        *puStack_4e0 = 0x6953646578696621;
        puStack_4d8 = (undefined4 *)0xc;
        *(undefined1 *)(puVar18 + 4) = 0;
        puVar18[3] = 0x2928657a;
        FUN_109ac3188(0xffffff29,&puStack_4e0,&UNK_10f59845f,&UNK_10f597913,0xa54);
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x109a9145c);
        (*pcVar11)();
      }
      if ((*puVar15 >> 0x1e & 1) == 0) {
        uVar5 = *puVar15 >> 0x10 & 0x1f;
        if (uVar5 < 7) {
          if (uVar5 < 3) {
            if (uVar5 == 0) {
              return;
            }
            if (uVar5 == 1) {
              lVar30 = *(long *)(puVar15 + 2);
              if (*(long *)(lVar30 + 0x38) != 0) {
                piVar19 = (int *)(*(long *)(lVar30 + 0x38) + 0x14);
                do {
                  iVar3 = *piVar19;
                  cVar4 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar12) {
                    *piVar19 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  func_0x000109a848d4(lVar30);
                }
              }
              *(undefined8 *)(lVar30 + 0x38) = 0;
              *(undefined8 *)(lVar30 + 0x18) = 0;
              *(undefined8 *)(lVar30 + 0x10) = 0;
              *(undefined8 *)(lVar30 + 0x28) = 0;
              *(undefined8 *)(lVar30 + 0x20) = 0;
              if (*(int *)(lVar30 + 4) < 1) {
                return;
              }
              lVar14 = 0;
              lVar16 = *(long *)(lVar30 + 0x40);
              do {
                *(undefined4 *)(lVar16 + lVar14 * 4) = 0;
                lVar14 = lVar14 + 1;
              } while (lVar14 < *(int *)(lVar30 + 4));
              return;
            }
          }
          else {
            if (uVar5 == 3) {
              puStack_4f0 = (undefined8 *)0x0;
              FUN_109a8ee3c();
              return;
            }
            if (uVar5 == 4) {
              plVar13 = *(long **)(puVar15 + 2);
              plVar28 = (long *)*plVar13;
              plVar29 = (long *)plVar13[1];
              while (plVar10 = plVar29, plVar10 != plVar28) {
                plVar29 = plVar10 + -3;
                if (*plVar29 != 0) {
                  plVar10[-2] = *plVar29;
                  __ZdlPv();
                }
              }
              plVar13[1] = (long)plVar28;
              return;
            }
            if (uVar5 == 5) {
              plVar28 = *(long **)(puVar15 + 2);
              lVar30 = *plVar28;
              lVar14 = plVar28[1];
              while (lVar14 != lVar30) {
                lVar14 = lVar14 + -0x60;
                FUN_109370334(lVar14);
              }
              plVar28[1] = lVar30;
              return;
            }
          }
        }
        else {
          if (uVar5 < 10) {
            return;
          }
          if (uVar5 == 10) {
            lVar30 = *(long *)(puVar15 + 2);
            if (*(long *)(lVar30 + 0x20) != 0) {
              piVar19 = (int *)(*(long *)(lVar30 + 0x20) + 0x10);
              do {
                iVar3 = *piVar19;
                cVar4 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                if (bVar12) {
                  *piVar19 = iVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar3 + -1 == 0) {
                (**(code **)(**(long **)(*(long *)(lVar30 + 0x20) + 8) + 0x20))();
                *(undefined8 *)(lVar30 + 0x20) = 0;
              }
            }
            if (0 < *(int *)(lVar30 + 4)) {
              lVar14 = 0;
              lVar16 = *(long *)(lVar30 + 0x30);
              do {
                *(undefined4 *)(lVar16 + lVar14 * 4) = 0;
                lVar14 = lVar14 + 1;
              } while (lVar14 < *(int *)(lVar30 + 4));
            }
            *(undefined8 *)(lVar30 + 0x20) = 0;
            return;
          }
          if (uVar5 == 0xb) {
            plVar28 = *(long **)(puVar15 + 2);
            lVar30 = *plVar28;
            lVar14 = plVar28[1];
            while (lVar14 != lVar30) {
              lVar14 = lVar14 + -0x50;
              FUN_109ac5638();
            }
            plVar28[1] = lVar30;
            return;
          }
          if (uVar5 == 0xd) {
            (*(undefined8 **)(puVar15 + 2))[1] = **(undefined8 **)(puVar15 + 2);
            return;
          }
        }
        puVar18 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar18 = 1;
        puStack_4f0 = (undefined8 *)(puVar18 + 1);
        uStack_4e8 = 0x1e;
        *(undefined1 *)((long)puVar18 + 0x22) = 0;
        *(undefined8 *)(puVar18 + 3) = 0x726f707075736e75;
        *(undefined8 *)(puVar18 + 1) = 0x2f6e776f6e6b6e55;
        *(undefined8 *)((long)puVar18 + 0x1a) = 0x6570797420796172;
        *(undefined8 *)((long)puVar18 + 0x12) = 0x726120646574726f;
        FUN_109ac3188(0xffffff2b,&puStack_4f0,&DAT_10f598457,&UNK_10f597913,0xa4b);
      }
      else {
        puVar18 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar18 = 1;
        puStack_4f0 = (undefined8 *)(puVar18 + 1);
        *puStack_4f0 = 0x6953646578696621;
        uStack_4e8 = 0xc;
        *(undefined1 *)(puVar18 + 4) = 0;
        puVar18[3] = 0x2928657a;
        FUN_109ac3188(0xffffff29,&puStack_4f0,&DAT_10f598457,&UNK_10f597913,0xa0a);
      }
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
      (*pcVar11)();
    }
    _bzero(puVar22,uVar26 * 0x200);
    puVar18 = puVar22 + uVar26 * 0x80;
  }
  else {
    if (uVar32 <= param_2) {
      return;
    }
    puVar18 = puVar18 + param_2 * 0x80;
  }
  *(undefined4 **)(puVar17 + 2) = puVar18;
  return;
}



/* Entry: 109a9005c; end: 109a90253;  */

/* WARNING: Removing unreachable block (ram,0x000109a85ec0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109a9005c(uint *param_1,ulong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plVar9;
  code *pcVar10;
  bool bVar11;
  long *plVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long lVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long lVar32;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar33;
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  undefined8 *puStack_490;
  undefined4 *puStack_488;
  undefined4 *puStack_480;
  uint *puStack_478;
  undefined8 *******pppppppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  long lStack_440;
  undefined4 *puStack_438;
  undefined4 *puStack_430;
  uint *puStack_428;
  undefined8 *******pppppppuStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  long lStack_3f0;
  undefined4 *puStack_3e8;
  undefined4 *puStack_3e0;
  uint *puStack_3d8;
  undefined8 *******pppppppuStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  long lStack_3a0;
  undefined4 *puStack_398;
  undefined4 *puStack_390;
  uint *puStack_388;
  undefined8 *******pppppppuStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  long lStack_358;
  long lStack_350;
  undefined4 *puStack_348;
  undefined4 *puStack_340;
  uint *puStack_338;
  undefined8 *******pppppppuStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  long lStack_308;
  long lStack_300;
  undefined4 *puStack_2f8;
  undefined4 *puStack_2f0;
  uint *puStack_2e8;
  undefined8 *******pppppppuStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  long lStack_2b0;
  undefined4 *puStack_2a8;
  undefined4 *puStack_2a0;
  uint *puStack_298;
  undefined1 *******pppppppuStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  long lStack_268;
  long lStack_260;
  undefined4 *puStack_258;
  undefined4 *puStack_250;
  uint *puStack_248;
  undefined1 ******ppppppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  long lStack_210;
  ulong uStack_208;
  long lStack_200;
  uint *puStack_1f8;
  undefined1 *****pppppuStack_1f0;
  code *pcStack_1e8;
  uint *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  uint *puStack_1c0;
  uint *puStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  uint *puStack_198;
  undefined1 ****ppppuStack_190;
  code *pcStack_188;
  uint *puStack_178;
  long lStack_170;
  long lStack_168;
  uint *puStack_160;
  uint *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  long lStack_140;
  undefined4 *puStack_138;
  undefined4 *puStack_130;
  uint *puStack_128;
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined1 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  uint *puStack_48;
  
  lVar18 = *(long *)param_1;
  lVar13 = *(long *)(param_1 + 2);
  lVar29 = lVar13 - lVar18;
  bVar11 = (ulong)(lVar29 * -0x5555555555555555) <= param_2;
  uVar19 = param_2 + lVar29 * 0x5555555555555555;
  if (!bVar11 || uVar19 == 0) {
    if (bVar11) {
      return;
    }
    lVar13 = lVar18 + param_2 * 3;
LAB_109a901dc:
    *(long *)(param_1 + 2) = lVar13;
    return;
  }
  if (uVar19 <= (ulong)((*(long *)(param_1 + 4) - lVar13) * -0x5555555555555555)) {
    uVar19 = uVar19 * 3 - 3;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar19;
    lVar29 = (SUB168(auVar7 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar19 / 3 + 3;
    _bzero(lVar13,lVar29);
    lVar13 = lVar13 + lVar29;
    goto LAB_109a901dc;
  }
  if (param_2 < 0x5555555555555556) {
    lVar18 = *(long *)(param_1 + 4) - lVar18;
    uVar25 = lVar18 * 0x5555555555555556;
    if (uVar25 < param_2 || uVar25 - param_2 == 0) {
      uVar25 = param_2;
    }
    if (0x2aaaaaaaaaaaaaa9 < (ulong)(lVar18 * -0x5555555555555555)) {
      uVar25 = 0x5555555555555555;
    }
    puStack_48 = param_1;
    if (uVar25 < 0x5555555555555556) {
      lVar18 = uVar25 * 3;
      __Znwm();
      lVar29 = lVar18 + lVar29;
      lStack_50 = lVar18 + uVar25 * 3;
      uVar19 = uVar19 * 3 - 3;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar19;
      lVar13 = (SUB168(auVar5 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar19 / 3 +
               3;
      lStack_68 = lVar18;
      lStack_60 = lVar29;
      _bzero(lVar29,lVar13);
      lStack_58 = lVar29 + lVar13;
      FUN_109a9c2c8(param_1,&lStack_68);
      if (lStack_58 - lStack_60 != 0) {
        uVar19 = (lStack_58 - lStack_60) - 3;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar19;
        lStack_58 = (lStack_58 -
                    ((SUB168(auVar6 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) +
                    uVar19 / 3)) + -3;
      }
      if (lStack_68 == 0) {
        return;
      }
      __ZdlPv();
      return;
    }
  }
  else {
    func_0x000109a9c348();
  }
  func_0x000104c4f740();
  if (lStack_58 - lStack_60 != 0) {
    uVar19 = (lStack_58 - lStack_60) - 3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    lStack_58 = (lStack_58 -
                ((SUB168(auVar8 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar19 / 3)
                ) + -3;
  }
  if (lStack_68 != 0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_78 = FUN_109a90254;
  puVar16 = *(undefined4 **)param_1;
  puVar22 = *(undefined4 **)(param_1 + 2);
  lVar29 = (long)puVar22 - (long)puVar16 >> 1;
  bVar11 = (ulong)(lVar29 * -0x5555555555555555) <= param_2;
  uVar19 = param_2 + lVar29 * 0x5555555555555555;
  if (!bVar11 || uVar19 == 0) {
    if (bVar11) {
      return;
    }
    lVar29 = (long)puVar16 + param_2 * 6;
LAB_109a903d8:
    *(long *)(param_1 + 2) = lVar29;
    return;
  }
  puStack_80 = &stack0xfffffffffffffff0;
  if (uVar19 <= (ulong)((*(long *)(param_1 + 4) - (long)puVar22 >> 1) * -0x5555555555555555)) {
    lVar29 = ((uVar19 * 6 - 6) / 6) * 6 + 6;
    _bzero(puVar22,lVar29);
    lVar29 = (long)puVar22 + lVar29;
    goto LAB_109a903d8;
  }
  if (param_2 < 0x2aaaaaaaaaaaaaab) {
    lVar29 = *(long *)(param_1 + 4) - (long)puVar16 >> 1;
    unaff_x26 = 0xaaaaaaaaaaaaaaab;
    uVar25 = lVar29 * 0x5555555555555556;
    if (uVar25 < param_2 || uVar25 - param_2 == 0) {
      uVar25 = param_2;
    }
    if (0x1555555555555554 < (ulong)(lVar29 * -0x5555555555555555)) {
      uVar25 = 0x2aaaaaaaaaaaaaaa;
    }
    if (uVar25 < 0x2aaaaaaaaaaaaaab) {
      lVar18 = uVar25 * 6;
      __Znwm();
      lVar13 = lVar18 + ((long)puVar22 - (long)puVar16);
      lVar32 = ((uVar19 * 6 - 6) / 6) * 6 + 6;
      _bzero(lVar13,lVar32);
      lVar29 = lVar18;
      for (puVar21 = puVar16; puVar21 != puVar22; puVar21 = (undefined4 *)((long)puVar21 + 6)) {
        lVar26 = 0;
        do {
          *(undefined2 *)(lVar29 + lVar26) = *(undefined2 *)((long)puVar21 + lVar26);
          lVar26 = lVar26 + 2;
        } while (lVar26 != 6);
        lVar29 = lVar29 + 6;
      }
      *(long *)param_1 = lVar18;
      *(long *)(param_1 + 2) = lVar13 + lVar32;
      *(ulong *)(param_1 + 4) = lVar18 + uVar25 * 6;
      if (puVar16 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c35c();
  }
  func_0x000104c4f740();
  uStack_c8 = 0x109a903fc;
  puVar16 = *(undefined4 **)param_1;
  puVar22 = *(undefined4 **)(param_1 + 2);
  lVar29 = (long)puVar22 - (long)puVar16;
  uVar19 = lVar29 >> 3;
  if (param_2 <= uVar19) {
    if (uVar19 <= param_2) {
      return;
    }
    puVar16 = puVar16 + param_2 * 2;
LAB_109a9050c:
    *(undefined4 **)(param_1 + 2) = puVar16;
    return;
  }
  uVar25 = param_2 - uVar19;
  uStack_110 = unaff_x26;
  ppuStack_d0 = &puStack_80;
  if (uVar25 <= (ulong)(*(long *)(param_1 + 4) - (long)puVar22 >> 3)) {
    _bzero(puVar22,uVar25 * 8);
    puVar16 = puVar22 + uVar25 * 2;
    goto LAB_109a9050c;
  }
  puVar14 = param_1;
  if (param_2 >> 0x3d == 0) {
    uVar20 = *(long *)(param_1 + 4) - (long)puVar16;
    unaff_x25 = (long)uVar20 >> 2;
    if (unaff_x25 <= param_2) {
      unaff_x25 = param_2;
    }
    if (0x7ffffffffffffff7 < uVar20) {
      unaff_x25 = 0x1fffffffffffffff;
    }
    if (unaff_x25 >> 0x3d == 0) {
      lVar13 = unaff_x25 << 3;
      __Znwm();
      lVar29 = lVar13 + lVar29;
      _bzero(lVar29,uVar25 * 8);
      puVar23 = (undefined4 *)(lVar29 + uVar19 * -8);
      puVar1 = puVar23;
      for (puVar21 = puVar16; puVar21 != puVar22; puVar21 = puVar21 + 2) {
        *puVar1 = *puVar21;
        puVar1[1] = puVar21[1];
        puVar1 = puVar1 + 2;
      }
      *(undefined4 **)param_1 = puVar23;
      *(ulong *)(param_1 + 2) = lVar29 + uVar25 * 8;
      *(ulong *)(param_1 + 4) = lVar13 + unaff_x25 * 8;
      if (puVar16 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c370();
  }
  func_0x000104c4f740();
  pcStack_118 = FUN_109a90530;
  lVar32 = *(long *)puVar14;
  lVar18 = *(long *)(puVar14 + 2);
  lVar13 = lVar18 - lVar32;
  bVar11 = (ulong)((lVar13 >> 2) * -0x5555555555555555) <= param_2;
  uVar20 = param_2 + (lVar13 >> 2) * 0x5555555555555555;
  if (!bVar11 || uVar20 == 0) {
    if (bVar11) {
      return;
    }
    lVar18 = lVar32 + param_2 * 0xc;
LAB_109a906a8:
    *(long *)(puVar14 + 2) = lVar18;
    return;
  }
  uStack_150 = uVar19;
  uStack_148 = uVar25;
  lStack_140 = lVar29;
  puStack_138 = puVar22;
  puStack_130 = puVar16;
  puStack_128 = param_1;
  pppuStack_120 = &ppuStack_d0;
  if (uVar20 <= (ulong)((*(long *)(puVar14 + 4) - lVar18 >> 2) * -0x5555555555555555)) {
    lVar29 = ((uVar20 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar18,lVar29);
    lVar18 = lVar18 + lVar29;
    goto LAB_109a906a8;
  }
  if (param_2 < 0x1555555555555556) {
    lVar29 = *(long *)(puVar14 + 4) - lVar32 >> 2;
    uVar19 = lVar29 * 0x5555555555555556;
    if (uVar19 < param_2 || uVar19 - param_2 == 0) {
      uVar19 = param_2;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar29 * -0x5555555555555555)) {
      uVar19 = 0x1555555555555555;
    }
    puVar15 = puVar14;
    puStack_158 = puVar14;
    FUN_1096379e8();
    lVar13 = (long)puVar15 + lVar13;
    puStack_160 = puVar15 + uVar19 * 3;
    lVar29 = ((uVar20 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    puStack_178 = puVar15;
    lStack_170 = lVar13;
    _bzero(lVar13,lVar29);
    lStack_168 = lVar13 + lVar29;
    FUN_109637fbc(puVar14,&puStack_178);
    if (lStack_168 - lStack_170 != 0) {
      lStack_168 = lStack_168 + (((lStack_168 - lStack_170) - 0xcU) / 0xc) * -0xc + -0xc;
    }
    if (puStack_178 == (uint *)0x0) {
      return;
    }
    __ZdlPv();
    return;
  }
  FUN_1096379d4();
  if (lStack_168 - lStack_170 != 0) {
    lStack_168 = lStack_168 + (((lStack_168 - lStack_170) - 0xcU) / 0xc) * -0xc + -0xc;
  }
  if (puStack_178 != (uint *)0x0) {
    __ZdlPv();
  }
  puVar15 = puVar14;
  __Unwind_Resume();
  pcStack_188 = FUN_109a90718;
  lVar26 = *(long *)puVar15;
  lVar32 = *(long *)(puVar15 + 2);
  lVar29 = lVar32 - lVar26;
  uVar24 = lVar29 >> 4;
  if (param_2 <= uVar24) {
    if (uVar24 <= param_2) {
      return;
    }
    lVar32 = lVar26 + param_2 * 0x10;
LAB_109a9080c:
    *(long *)(puVar15 + 2) = lVar32;
    return;
  }
  uVar24 = param_2 - uVar24;
  lStack_1b0 = lVar13;
  uStack_1a8 = uVar20;
  lStack_1a0 = lVar18;
  puStack_198 = puVar14;
  ppppuStack_190 = &pppuStack_120;
  if (uVar24 <= (ulong)(*(long *)(puVar15 + 4) - lVar32 >> 4)) {
    _bzero(lVar32,uVar24 * 0x10);
    lVar32 = lVar32 + uVar24 * 0x10;
    goto LAB_109a9080c;
  }
  if (param_2 >> 0x3c == 0) {
    uVar25 = *(long *)(puVar15 + 4) - lVar26;
    uVar19 = (long)uVar25 >> 3;
    if (uVar19 <= param_2) {
      uVar19 = param_2;
    }
    if (0x7fffffffffffffef < uVar25) {
      uVar19 = 0xfffffffffffffff;
    }
    puVar14 = puVar15;
    puStack_1b8 = puVar15;
    FUN_1092e8fac();
    lVar29 = (long)puVar14 + lVar29;
    puStack_1c0 = puVar14 + uVar19 * 4;
    puStack_1d8 = puVar14;
    lStack_1d0 = lVar29;
    _bzero(lVar29,uVar24 * 0x10);
    lStack_1c8 = lVar29 + uVar24 * 0x10;
    FUN_1092e8f14(puVar15,&puStack_1d8);
    if (lStack_1c8 != lStack_1d0) {
      lStack_1c8 = lStack_1c8 + ((lStack_1d0 - lStack_1c8) + 0xfU & 0xfffffffffffffff0);
    }
    if (puStack_1d8 == (uint *)0x0) {
      return;
    }
    __ZdlPv();
    return;
  }
  FUN_1092e8f98();
  if (lStack_1c8 != lStack_1d0) {
    lStack_1c8 = lStack_1c8 + ((lStack_1d0 - lStack_1c8) + 0xfU & 0xfffffffffffffff0);
  }
  if (puStack_1d8 != (uint *)0x0) {
    __ZdlPv();
  }
  puVar14 = puVar15;
  __Unwind_Resume();
  pcStack_1e8 = FUN_109a90860;
  puVar16 = *(undefined4 **)puVar14;
  puVar22 = *(undefined4 **)(puVar14 + 2);
  lVar13 = (long)puVar22 - (long)puVar16;
  bVar11 = (ulong)((lVar13 >> 3) * -0x5555555555555555) <= param_2;
  uVar20 = param_2 + (lVar13 >> 3) * 0x5555555555555555;
  if (!bVar11 || uVar20 == 0) {
    if (bVar11) {
      return;
    }
    puVar16 = puVar16 + param_2 * 6;
LAB_109a909e4:
    *(undefined4 **)(puVar14 + 2) = puVar16;
    return;
  }
  uStack_230 = unaff_x26;
  uStack_228 = unaff_x25;
  uStack_220 = uVar19;
  uStack_218 = uVar25;
  lStack_210 = lVar29;
  uStack_208 = uVar24;
  lStack_200 = lVar32;
  puStack_1f8 = puVar15;
  pppppuStack_1f0 = &ppppuStack_190;
  if (uVar20 <= (ulong)((*(long *)(puVar14 + 4) - (long)puVar22 >> 3) * -0x5555555555555555)) {
    uVar19 = (uVar20 * 0x18 - 0x18) / 0x18;
    _bzero(puVar22,uVar19 * 0x18 + 0x18);
    puVar16 = puVar22 + uVar19 * 6 + 6;
    goto LAB_109a909e4;
  }
  puVar15 = puVar14;
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar18 = *(long *)(puVar14 + 4) - (long)puVar16 >> 3;
    uVar19 = lVar18 * 0x5555555555555556;
    if (uVar19 < param_2 || uVar19 - param_2 == 0) {
      uVar19 = param_2;
    }
    if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
      uVar19 = 0xaaaaaaaaaaaaaaa;
    }
    uVar33 = 0xaaaaaaaaaaaaaaab;
    if (uVar19 < 0xaaaaaaaaaaaaaab) {
      lVar18 = uVar19 * 0x18;
      __Znwm();
      lVar32 = ((uVar20 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar18 + lVar13,lVar32);
      lVar29 = lVar18;
      for (puVar21 = puVar16; puVar21 != puVar22; puVar21 = puVar21 + 6) {
        lVar26 = 0;
        do {
          *(undefined4 *)(lVar29 + lVar26) = *(undefined4 *)((long)puVar21 + lVar26);
          lVar26 = lVar26 + 4;
        } while (lVar26 != 0x18);
        lVar29 = lVar29 + 0x18;
      }
      *(long *)puVar14 = lVar18;
      *(long *)(puVar14 + 2) = lVar18 + lVar13 + lVar32;
      *(ulong *)(puVar14 + 4) = lVar18 + uVar19 * 0x18;
      if (puVar16 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c384();
    uVar33 = unaff_x26;
  }
  func_0x000104c4f740();
  uStack_238 = 0x109a90a08;
  puVar21 = *(undefined4 **)puVar15;
  puVar1 = *(undefined4 **)(puVar15 + 2);
  lVar18 = (long)puVar1 - (long)puVar21;
  uVar19 = lVar18 >> 5;
  if (param_2 <= uVar19) {
    if (uVar19 <= param_2) {
      return;
    }
    puVar21 = puVar21 + param_2 * 8;
LAB_109a90b20:
    *(undefined4 **)(puVar15 + 2) = puVar21;
    return;
  }
  uVar25 = param_2 - uVar19;
  uStack_280 = uVar33;
  uStack_278 = unaff_x25;
  uStack_270 = uVar20;
  lStack_268 = lVar13;
  lStack_260 = lVar29;
  puStack_258 = puVar16;
  puStack_250 = puVar22;
  puStack_248 = puVar14;
  ppppppuStack_240 = &pppppuStack_1f0;
  if (uVar25 <= (ulong)(*(long *)(puVar15 + 4) - (long)puVar1 >> 5)) {
    _bzero(puVar1,uVar25 * 0x20);
    puVar21 = puVar1 + uVar25 * 8;
    goto LAB_109a90b20;
  }
  puVar14 = puVar15;
  if (param_2 >> 0x3b == 0) {
    uVar24 = *(long *)(puVar15 + 4) - (long)puVar21;
    uVar20 = (long)uVar24 >> 4;
    if (uVar20 <= param_2) {
      uVar20 = param_2;
    }
    if (0x7fffffffffffffdf < uVar24) {
      uVar20 = 0x7ffffffffffffff;
    }
    if (uVar20 >> 0x3b == 0) {
      lVar13 = uVar20 << 5;
      __Znwm();
      lVar18 = lVar13 + lVar18;
      _bzero(lVar18,uVar25 * 0x20);
      lVar32 = lVar18 + uVar19 * -0x20;
      lVar29 = lVar32;
      for (puVar16 = puVar21; puVar16 != puVar1; puVar16 = puVar16 + 8) {
        lVar26 = 0;
        do {
          *(undefined4 *)(lVar29 + lVar26) = *(undefined4 *)((long)puVar16 + lVar26);
          lVar26 = lVar26 + 4;
        } while (lVar26 != 0x20);
        lVar29 = lVar29 + 0x20;
      }
      *(long *)puVar15 = lVar32;
      *(ulong *)(puVar15 + 2) = lVar18 + uVar25 * 0x20;
      *(ulong *)(puVar15 + 4) = lVar13 + uVar20 * 0x20;
      puVar16 = puVar21;
      if (puVar21 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c398();
    uVar20 = unaff_x25;
  }
  func_0x000104c4f740();
  uStack_288 = 0x109a90b44;
  puVar16 = *(undefined4 **)puVar14;
  puVar22 = *(undefined4 **)(puVar14 + 2);
  lVar29 = (long)puVar22 - (long)puVar16;
  bVar11 = (ulong)((lVar29 >> 2) * -0x71c71c71c71c71c7) <= param_2;
  uVar24 = param_2 + (lVar29 >> 2) * 0x71c71c71c71c71c7;
  if (!bVar11 || uVar24 == 0) {
    if (bVar11) {
      return;
    }
    puVar16 = puVar16 + param_2 * 9;
LAB_109a90cf0:
    *(undefined4 **)(puVar14 + 2) = puVar16;
    return;
  }
  uStack_2d0 = uVar33;
  uStack_2c8 = uVar20;
  uStack_2c0 = uVar19;
  uStack_2b8 = uVar25;
  lStack_2b0 = lVar18;
  puStack_2a8 = puVar1;
  puStack_2a0 = puVar21;
  puStack_298 = puVar15;
  pppppppuStack_290 = &ppppppuStack_240;
  if (uVar24 <= (ulong)((*(long *)(puVar14 + 4) - (long)puVar22 >> 2) * -0x71c71c71c71c71c7)) {
    uVar19 = (uVar24 * 0x24 - 0x24) / 0x24;
    _bzero(puVar22,uVar19 * 0x24 + 0x24);
    puVar16 = puVar22 + uVar19 * 9 + 9;
    goto LAB_109a90cf0;
  }
  puVar15 = puVar14;
  if (param_2 < 0x71c71c71c71c71d) {
    lVar13 = *(long *)(puVar14 + 4) - (long)puVar16 >> 2;
    uVar19 = lVar13 * 0x1c71c71c71c71c72;
    if (uVar19 < param_2 || uVar19 - param_2 == 0) {
      uVar19 = param_2;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar13 * -0x71c71c71c71c71c7)) {
      uVar19 = 0x71c71c71c71c71c;
    }
    if (uVar19 < 0x71c71c71c71c71d) {
      lVar18 = uVar19 * 0x24;
      __Znwm();
      lVar32 = ((uVar24 * 0x24 - 0x24) / 0x24) * 0x24 + 0x24;
      _bzero(lVar18 + lVar29,lVar32);
      lVar13 = lVar18;
      for (puVar21 = puVar16; puVar21 != puVar22; puVar21 = puVar21 + 9) {
        lVar26 = 0;
        do {
          *(undefined4 *)(lVar13 + lVar26) = *(undefined4 *)((long)puVar21 + lVar26);
          lVar26 = lVar26 + 4;
        } while (lVar26 != 0x24);
        lVar13 = lVar13 + 0x24;
      }
      *(long *)puVar14 = lVar18;
      *(long *)(puVar14 + 2) = lVar18 + lVar29 + lVar32;
      *(ulong *)(puVar14 + 4) = lVar18 + uVar19 * 0x24;
      if (puVar16 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3ac();
  }
  func_0x000104c4f740();
  uStack_2d8 = 0x109a90d14;
  puVar21 = *(undefined4 **)puVar15;
  puVar1 = *(undefined4 **)(puVar15 + 2);
  lVar13 = (long)puVar1 - (long)puVar21;
  bVar11 = (ulong)((lVar13 >> 4) * -0x5555555555555555) <= param_2;
  uVar19 = param_2 + (lVar13 >> 4) * 0x5555555555555555;
  if (!bVar11 || uVar19 == 0) {
    if (bVar11) {
      return;
    }
    puVar21 = puVar21 + param_2 * 0xc;
LAB_109a90e98:
    *(undefined4 **)(puVar15 + 2) = puVar21;
    return;
  }
  uStack_320 = uVar33;
  uStack_318 = uVar20;
  uStack_310 = uVar24;
  lStack_308 = lVar29;
  lStack_300 = lVar18;
  puStack_2f8 = puVar16;
  puStack_2f0 = puVar22;
  puStack_2e8 = puVar14;
  pppppppuStack_2e0 = &pppppppuStack_290;
  if (uVar19 <= (ulong)((*(long *)(puVar15 + 4) - (long)puVar1 >> 4) * -0x5555555555555555)) {
    uVar19 = (uVar19 * 0x30 - 0x30) / 0x30;
    _bzero(puVar1,uVar19 * 0x30 + 0x30);
    puVar21 = puVar1 + uVar19 * 0xc + 0xc;
    goto LAB_109a90e98;
  }
  puVar14 = puVar15;
  if (param_2 < 0x555555555555556) {
    lVar29 = *(long *)(puVar15 + 4) - (long)puVar21 >> 4;
    uVar25 = lVar29 * 0x5555555555555556;
    if (uVar25 < param_2 || uVar25 - param_2 == 0) {
      uVar25 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar29 * -0x5555555555555555)) {
      uVar25 = 0x555555555555555;
    }
    uVar33 = 0xaaaaaaaaaaaaaaab;
    if (uVar25 < 0x555555555555556) {
      lVar18 = uVar25 * 0x30;
      __Znwm();
      lVar32 = ((uVar19 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
      _bzero(lVar18 + lVar13,lVar32);
      lVar29 = lVar18;
      for (puVar16 = puVar21; puVar16 != puVar1; puVar16 = puVar16 + 0xc) {
        lVar26 = 0;
        do {
          *(undefined4 *)(lVar29 + lVar26) = *(undefined4 *)((long)puVar16 + lVar26);
          lVar26 = lVar26 + 4;
        } while (lVar26 != 0x30);
        lVar29 = lVar29 + 0x30;
      }
      *(long *)puVar15 = lVar18;
      *(long *)(puVar15 + 2) = lVar18 + lVar13 + lVar32;
      *(ulong *)(puVar15 + 4) = lVar18 + uVar25 * 0x30;
      puVar16 = puVar21;
      if (puVar21 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3c0();
  }
  func_0x000104c4f740();
  uStack_328 = 0x109a90ebc;
  puVar16 = *(undefined4 **)puVar14;
  puVar22 = *(undefined4 **)(puVar14 + 2);
  lVar29 = (long)puVar22 - (long)puVar16;
  uVar25 = lVar29 >> 6;
  if (param_2 <= uVar25) {
    if (uVar25 <= param_2) {
      return;
    }
    puVar16 = puVar16 + param_2 * 0x10;
LAB_109a90fd4:
    *(undefined4 **)(puVar14 + 2) = puVar16;
    return;
  }
  uVar24 = param_2 - uVar25;
  uStack_370 = uVar33;
  uStack_368 = uVar20;
  uStack_360 = uVar19;
  lStack_358 = lVar13;
  lStack_350 = lVar18;
  puStack_348 = puVar21;
  puStack_340 = puVar1;
  puStack_338 = puVar15;
  pppppppuStack_330 = &pppppppuStack_2e0;
  if (uVar24 <= (ulong)(*(long *)(puVar14 + 4) - (long)puVar22 >> 6)) {
    _bzero(puVar22,uVar24 * 0x40);
    puVar16 = puVar22 + uVar24 * 0x10;
    goto LAB_109a90fd4;
  }
  puVar15 = puVar14;
  if (param_2 >> 0x3a == 0) {
    uVar19 = *(long *)(puVar14 + 4) - (long)puVar16;
    uVar20 = (long)uVar19 >> 5;
    if (uVar20 <= param_2) {
      uVar20 = param_2;
    }
    if (0x7fffffffffffffbf < uVar19) {
      uVar20 = 0x3ffffffffffffff;
    }
    if (uVar20 >> 0x3a == 0) {
      lVar18 = uVar20 << 6;
      __Znwm();
      lVar29 = lVar18 + lVar29;
      _bzero(lVar29,uVar24 * 0x40);
      lVar32 = lVar29 + uVar25 * -0x40;
      lVar13 = lVar32;
      for (puVar21 = puVar16; puVar21 != puVar22; puVar21 = puVar21 + 0x10) {
        lVar26 = 0;
        do {
          *(undefined4 *)(lVar13 + lVar26) = *(undefined4 *)((long)puVar21 + lVar26);
          lVar26 = lVar26 + 4;
        } while (lVar26 != 0x40);
        lVar13 = lVar13 + 0x40;
      }
      *(long *)puVar14 = lVar32;
      *(ulong *)(puVar14 + 2) = lVar29 + uVar24 * 0x40;
      *(ulong *)(puVar14 + 4) = lVar18 + uVar20 * 0x40;
      if (puVar16 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3d4();
  }
  func_0x000104c4f740();
  uStack_378 = 0x109a90ff8;
  puVar21 = *(undefined4 **)puVar15;
  puVar1 = *(undefined4 **)(puVar15 + 2);
  lVar13 = (long)puVar1 - (long)puVar21;
  uVar19 = lVar13 >> 7;
  if (param_2 <= uVar19) {
    if (uVar19 <= param_2) {
      return;
    }
    puVar21 = puVar21 + param_2 * 0x20;
LAB_109a91110:
    *(undefined4 **)(puVar15 + 2) = puVar21;
    return;
  }
  uVar31 = param_2 - uVar19;
  uStack_3c0 = uVar33;
  uStack_3b8 = uVar20;
  uStack_3b0 = uVar25;
  uStack_3a8 = uVar24;
  lStack_3a0 = lVar29;
  puStack_398 = puVar22;
  puStack_390 = puVar16;
  puStack_388 = puVar14;
  pppppppuStack_380 = &pppppppuStack_330;
  if (uVar31 <= (ulong)(*(long *)(puVar15 + 4) - (long)puVar1 >> 7)) {
    _bzero(puVar1,uVar31 * 0x80);
    puVar21 = puVar1 + uVar31 * 0x20;
    goto LAB_109a91110;
  }
  puVar14 = puVar15;
  if (param_2 >> 0x39 == 0) {
    uVar25 = *(long *)(puVar15 + 4) - (long)puVar21;
    uVar20 = (long)uVar25 >> 6;
    if (uVar20 <= param_2) {
      uVar20 = param_2;
    }
    if (0x7fffffffffffff7f < uVar25) {
      uVar20 = 0x1ffffffffffffff;
    }
    if (uVar20 >> 0x39 == 0) {
      lVar18 = uVar20 << 7;
      __Znwm();
      lVar13 = lVar18 + lVar13;
      _bzero(lVar13,uVar31 * 0x80);
      lVar32 = lVar13 + uVar19 * -0x80;
      lVar29 = lVar32;
      for (puVar16 = puVar21; puVar16 != puVar1; puVar16 = puVar16 + 0x20) {
        lVar26 = 0;
        do {
          *(undefined4 *)(lVar29 + lVar26) = *(undefined4 *)((long)puVar16 + lVar26);
          lVar26 = lVar26 + 4;
        } while (lVar26 != 0x80);
        lVar29 = lVar29 + 0x80;
      }
      *(long *)puVar15 = lVar32;
      *(ulong *)(puVar15 + 2) = lVar13 + uVar31 * 0x80;
      *(ulong *)(puVar15 + 4) = lVar18 + uVar20 * 0x80;
      puVar16 = puVar21;
      if (puVar21 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3e8();
  }
  func_0x000104c4f740();
  uStack_3c8 = 0x109a91134;
  puVar22 = *(undefined4 **)puVar14;
  puVar23 = *(undefined4 **)(puVar14 + 2);
  lVar29 = (long)puVar23 - (long)puVar22;
  uVar25 = lVar29 >> 8;
  if (param_2 <= uVar25) {
    if (uVar25 <= param_2) {
      return;
    }
    puVar22 = puVar22 + param_2 * 0x40;
LAB_109a9124c:
    *(undefined4 **)(puVar14 + 2) = puVar22;
    return;
  }
  uVar24 = param_2 - uVar25;
  uStack_410 = uVar33;
  uStack_408 = uVar20;
  uStack_400 = uVar19;
  uStack_3f8 = uVar31;
  lStack_3f0 = lVar13;
  puStack_3e8 = puVar1;
  puStack_3e0 = puVar21;
  puStack_3d8 = puVar15;
  pppppppuStack_3d0 = &pppppppuStack_380;
  if (uVar24 <= (ulong)(*(long *)(puVar14 + 4) - (long)puVar23 >> 8)) {
    _bzero(puVar23,uVar24 * 0x100);
    puVar22 = puVar23 + uVar24 * 0x40;
    goto LAB_109a9124c;
  }
  puVar15 = puVar14;
  if (param_2 >> 0x38 == 0) {
    uVar19 = *(long *)(puVar14 + 4) - (long)puVar22;
    uVar20 = (long)uVar19 >> 7;
    if (uVar20 <= param_2) {
      uVar20 = param_2;
    }
    if (0x7ffffffffffffeff < uVar19) {
      uVar20 = 0xffffffffffffff;
    }
    if (uVar20 >> 0x38 == 0) {
      lVar18 = uVar20 << 8;
      __Znwm();
      lVar29 = lVar18 + lVar29;
      _bzero(lVar29,uVar24 * 0x100);
      lVar32 = lVar29 + uVar25 * -0x100;
      lVar13 = lVar32;
      for (puVar16 = puVar22; puVar16 != puVar23; puVar16 = puVar16 + 0x40) {
        lVar26 = 0;
        do {
          *(undefined4 *)(lVar13 + lVar26) = *(undefined4 *)((long)puVar16 + lVar26);
          lVar26 = lVar26 + 4;
        } while (lVar26 != 0x100);
        lVar13 = lVar13 + 0x100;
      }
      *(long *)puVar14 = lVar32;
      *(ulong *)(puVar14 + 2) = lVar29 + uVar24 * 0x100;
      *(ulong *)(puVar14 + 4) = lVar18 + uVar20 * 0x100;
      puVar16 = puVar22;
      if (puVar22 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3fc();
  }
  func_0x000104c4f740();
  uStack_418 = 0x109a91270;
  puVar16 = *(undefined4 **)puVar15;
  puVar21 = *(undefined4 **)(puVar15 + 2);
  puVar30 = (undefined8 *)((long)puVar21 - (long)puVar16);
  uVar19 = (long)puVar30 >> 9;
  if (uVar19 < param_2) {
    uVar31 = param_2 - uVar19;
    uStack_460 = uVar33;
    uStack_458 = uVar20;
    uStack_450 = uVar25;
    uStack_448 = uVar24;
    lStack_440 = lVar29;
    puStack_438 = puVar23;
    puStack_430 = puVar22;
    puStack_428 = puVar14;
    pppppppuStack_420 = &pppppppuStack_3d0;
    if ((ulong)(*(long *)(puVar15 + 4) - (long)puVar21 >> 9) < uVar31) {
      puVar14 = puVar15;
      if (param_2 >> 0x37 == 0) {
        uVar20 = *(long *)(puVar15 + 4) - (long)puVar16;
        uVar25 = (long)uVar20 >> 8;
        if (uVar25 <= param_2) {
          uVar25 = param_2;
        }
        if (0x7ffffffffffffdff < uVar20) {
          uVar25 = 0x7fffffffffffff;
        }
        if (uVar25 >> 0x37 == 0) {
          lVar18 = uVar25 << 9;
          __Znwm();
          lVar13 = lVar18 + (long)puVar30;
          _bzero(lVar13,uVar31 * 0x200);
          lVar32 = lVar13 + uVar19 * -0x200;
          lVar29 = lVar32;
          for (puVar22 = puVar16; puVar22 != puVar21; puVar22 = puVar22 + 0x80) {
            lVar26 = 0;
            do {
              *(undefined4 *)(lVar29 + lVar26) = *(undefined4 *)((long)puVar22 + lVar26);
              lVar26 = lVar26 + 4;
            } while (lVar26 != 0x200);
            lVar29 = lVar29 + 0x200;
          }
          *(long *)puVar15 = lVar32;
          *(ulong *)(puVar15 + 2) = lVar13 + uVar31 * 0x200;
          *(ulong *)(puVar15 + 4) = lVar18 + uVar25 * 0x200;
          if (puVar16 == (undefined4 *)0x0) {
            return;
          }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(puVar16);
          return;
        }
      }
      else {
        func_0x000109a9c410();
      }
      func_0x000104c4f740();
      pcStack_468 = FUN_109a913ac;
      puStack_490 = puVar30;
      puStack_488 = puVar21;
      puStack_480 = puVar16;
      puStack_478 = puVar15;
      pppppppuStack_470 = &pppppppuStack_420;
      if ((*puVar14 & 0x1f0000) == 0x10000) {
        if ((*puVar14 >> 0x1e & 1) == 0) {
          lVar29 = *(long *)(puVar14 + 2);
          piVar17 = *(int **)(lVar29 + 0x40);
          iVar2 = *piVar17;
          if (-iVar2 != 0) {
            if ((*(char *)(lVar29 + 1) < '\0') ||
               (lVar13 = **(long **)(lVar29 + 0x48),
               *(ulong *)(lVar29 + 0x28) < *(ulong *)(lVar29 + 0x10))) {
              FUN_109a859f0(lVar29,0);
              piVar17 = *(int **)(lVar29 + 0x40);
              lVar13 = **(long **)(lVar29 + 0x48);
            }
            *piVar17 = 0;
            *(long *)(lVar29 + 0x20) = *(long *)(lVar29 + 0x20) + lVar13 * -iVar2;
          }
          return;
        }
        puVar16 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar16 = 1;
        puStack_490 = (undefined8 *)(puVar16 + 1);
        *puStack_490 = 0x6953646578696621;
        puStack_488 = (undefined4 *)0xc;
        *(undefined1 *)(puVar16 + 4) = 0;
        puVar16[3] = 0x2928657a;
        FUN_109ac3188(0xffffff29,&puStack_490,&UNK_10f59845f,&UNK_10f597913,0xa54);
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x109a9145c);
        (*pcVar10)();
      }
      if ((*puVar14 >> 0x1e & 1) == 0) {
        uVar4 = *puVar14 >> 0x10 & 0x1f;
        if (uVar4 < 7) {
          if (uVar4 < 3) {
            if (uVar4 == 0) {
              return;
            }
            if (uVar4 == 1) {
              lVar29 = *(long *)(puVar14 + 2);
              if (*(long *)(lVar29 + 0x38) != 0) {
                piVar17 = (int *)(*(long *)(lVar29 + 0x38) + 0x14);
                do {
                  iVar2 = *piVar17;
                  cVar3 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                  if (bVar11) {
                    *piVar17 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar2 + -1 == 0) {
                  func_0x000109a848d4(lVar29);
                }
              }
              *(undefined8 *)(lVar29 + 0x38) = 0;
              *(undefined8 *)(lVar29 + 0x18) = 0;
              *(undefined8 *)(lVar29 + 0x10) = 0;
              *(undefined8 *)(lVar29 + 0x28) = 0;
              *(undefined8 *)(lVar29 + 0x20) = 0;
              if (*(int *)(lVar29 + 4) < 1) {
                return;
              }
              lVar13 = 0;
              lVar18 = *(long *)(lVar29 + 0x40);
              do {
                *(undefined4 *)(lVar18 + lVar13 * 4) = 0;
                lVar13 = lVar13 + 1;
              } while (lVar13 < *(int *)(lVar29 + 4));
              return;
            }
          }
          else {
            if (uVar4 == 3) {
              puStack_4a0 = (undefined8 *)0x0;
              FUN_109a8ee3c();
              return;
            }
            if (uVar4 == 4) {
              plVar12 = *(long **)(puVar14 + 2);
              plVar27 = (long *)*plVar12;
              plVar28 = (long *)plVar12[1];
              while (plVar9 = plVar28, plVar9 != plVar27) {
                plVar28 = plVar9 + -3;
                if (*plVar28 != 0) {
                  plVar9[-2] = *plVar28;
                  __ZdlPv();
                }
              }
              plVar12[1] = (long)plVar27;
              return;
            }
            if (uVar4 == 5) {
              plVar27 = *(long **)(puVar14 + 2);
              lVar29 = *plVar27;
              lVar13 = plVar27[1];
              while (lVar13 != lVar29) {
                lVar13 = lVar13 + -0x60;
                FUN_109370334(lVar13);
              }
              plVar27[1] = lVar29;
              return;
            }
          }
        }
        else {
          if (uVar4 < 10) {
            return;
          }
          if (uVar4 == 10) {
            lVar29 = *(long *)(puVar14 + 2);
            if (*(long *)(lVar29 + 0x20) != 0) {
              piVar17 = (int *)(*(long *)(lVar29 + 0x20) + 0x10);
              do {
                iVar2 = *piVar17;
                cVar3 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar11) {
                  *piVar17 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                (**(code **)(**(long **)(*(long *)(lVar29 + 0x20) + 8) + 0x20))();
                *(undefined8 *)(lVar29 + 0x20) = 0;
              }
            }
            if (0 < *(int *)(lVar29 + 4)) {
              lVar13 = 0;
              lVar18 = *(long *)(lVar29 + 0x30);
              do {
                *(undefined4 *)(lVar18 + lVar13 * 4) = 0;
                lVar13 = lVar13 + 1;
              } while (lVar13 < *(int *)(lVar29 + 4));
            }
            *(undefined8 *)(lVar29 + 0x20) = 0;
            return;
          }
          if (uVar4 == 0xb) {
            plVar27 = *(long **)(puVar14 + 2);
            lVar29 = *plVar27;
            lVar13 = plVar27[1];
            while (lVar13 != lVar29) {
              lVar13 = lVar13 + -0x50;
              FUN_109ac5638();
            }
            plVar27[1] = lVar29;
            return;
          }
          if (uVar4 == 0xd) {
            (*(undefined8 **)(puVar14 + 2))[1] = **(undefined8 **)(puVar14 + 2);
            return;
          }
        }
        puVar16 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar16 = 1;
        puStack_4a0 = (undefined8 *)(puVar16 + 1);
        uStack_498 = 0x1e;
        *(undefined1 *)((long)puVar16 + 0x22) = 0;
        *(undefined8 *)(puVar16 + 3) = 0x726f707075736e75;
        *(undefined8 *)(puVar16 + 1) = 0x2f6e776f6e6b6e55;
        *(undefined8 *)((long)puVar16 + 0x1a) = 0x6570797420796172;
        *(undefined8 *)((long)puVar16 + 0x12) = 0x726120646574726f;
        FUN_109ac3188(0xffffff2b,&puStack_4a0,&DAT_10f598457,&UNK_10f597913,0xa4b);
      }
      else {
        puVar16 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar16 = 1;
        puStack_4a0 = (undefined8 *)(puVar16 + 1);
        *puStack_4a0 = 0x6953646578696621;
        uStack_498 = 0xc;
        *(undefined1 *)(puVar16 + 4) = 0;
        puVar16[3] = 0x2928657a;
        FUN_109ac3188(0xffffff29,&puStack_4a0,&DAT_10f598457,&UNK_10f597913,0xa0a);
      }
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
      (*pcVar10)();
    }
    _bzero(puVar21,uVar31 * 0x200);
    puVar16 = puVar21 + uVar31 * 0x80;
  }
  else {
    if (uVar19 <= param_2) {
      return;
    }
    puVar16 = puVar16 + param_2 * 0x80;
  }
  *(undefined4 **)(puVar15 + 2) = puVar16;
  return;
}



/* Entry: 109a90254; end: 109a9052f;  */

/* WARNING: Removing unreachable block (ram,0x000109a85ec0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109a90254(uint *param_1,ulong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  code *pcVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined4 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar29;
  undefined8 *puStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined4 *puStack_418;
  undefined4 *puStack_410;
  uint *puStack_408;
  undefined8 *******pppppppuStack_400;
  code *pcStack_3f8;
  undefined8 uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  long lStack_3d0;
  undefined4 *puStack_3c8;
  undefined4 *puStack_3c0;
  uint *puStack_3b8;
  undefined8 *******pppppppuStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  long lStack_380;
  undefined4 *puStack_378;
  undefined4 *puStack_370;
  uint *puStack_368;
  undefined8 *******pppppppuStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  long lStack_330;
  undefined4 *puStack_328;
  undefined4 *puStack_320;
  uint *puStack_318;
  undefined8 *******pppppppuStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined4 *puStack_2d8;
  undefined4 *puStack_2d0;
  uint *puStack_2c8;
  undefined8 *******pppppppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined4 *puStack_288;
  undefined4 *puStack_280;
  uint *puStack_278;
  undefined1 *******pppppppuStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  long lStack_240;
  undefined4 *puStack_238;
  undefined4 *puStack_230;
  uint *puStack_228;
  undefined1 ******ppppppuStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined4 *puStack_1e8;
  undefined4 *puStack_1e0;
  uint *puStack_1d8;
  undefined1 *****pppppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  long lStack_190;
  uint *puStack_188;
  undefined1 ****ppppuStack_180;
  code *pcStack_178;
  uint *puStack_168;
  long lStack_160;
  long lStack_158;
  uint *puStack_150;
  uint *puStack_148;
  long lStack_140;
  ulong uStack_138;
  long lStack_130;
  uint *puStack_128;
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  uint *puStack_108;
  long lStack_100;
  long lStack_f8;
  uint *puStack_f0;
  uint *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined4 *puStack_c8;
  undefined4 *puStack_c0;
  uint *puStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puVar13 = *(undefined4 **)param_1;
  puVar17 = *(undefined4 **)(param_1 + 2);
  lVar18 = (long)puVar17 - (long)puVar13 >> 1;
  bVar7 = (ulong)(lVar18 * -0x5555555555555555) <= param_2;
  uVar28 = param_2 + lVar18 * 0x5555555555555555;
  if (!bVar7 || uVar28 == 0) {
    if (bVar7) {
      return;
    }
    lVar18 = (long)puVar13 + param_2 * 6;
LAB_109a903d8:
    *(long *)(param_1 + 2) = lVar18;
    return;
  }
  if (uVar28 <= (ulong)((*(long *)(param_1 + 4) - (long)puVar17 >> 1) * -0x5555555555555555)) {
    lVar18 = ((uVar28 * 6 - 6) / 6) * 6 + 6;
    _bzero(puVar17,lVar18);
    lVar18 = (long)puVar17 + lVar18;
    goto LAB_109a903d8;
  }
  if (param_2 < 0x2aaaaaaaaaaaaaab) {
    lVar18 = *(long *)(param_1 + 4) - (long)puVar13 >> 1;
    unaff_x26 = 0xaaaaaaaaaaaaaaab;
    uVar21 = lVar18 * 0x5555555555555556;
    if (uVar21 < param_2 || uVar21 - param_2 == 0) {
      uVar21 = param_2;
    }
    if (0x1555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
      uVar21 = 0x2aaaaaaaaaaaaaaa;
    }
    if (uVar21 < 0x2aaaaaaaaaaaaaab) {
      lVar9 = uVar21 * 6;
      __Znwm();
      lVar10 = lVar9 + ((long)puVar17 - (long)puVar13);
      lVar27 = ((uVar28 * 6 - 6) / 6) * 6 + 6;
      _bzero(lVar10,lVar27);
      lVar18 = lVar9;
      for (puVar16 = puVar13; puVar16 != puVar17; puVar16 = (undefined4 *)((long)puVar16 + 6)) {
        lVar22 = 0;
        do {
          *(undefined2 *)(lVar18 + lVar22) = *(undefined2 *)((long)puVar16 + lVar22);
          lVar22 = lVar22 + 2;
        } while (lVar22 != 6);
        lVar18 = lVar18 + 6;
      }
      *(long *)param_1 = lVar9;
      *(long *)(param_1 + 2) = lVar10 + lVar27;
      *(ulong *)(param_1 + 4) = lVar9 + uVar21 * 6;
      if (puVar13 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c35c();
  }
  func_0x000104c4f740();
  uStack_58 = 0x109a903fc;
  puVar13 = *(undefined4 **)param_1;
  puVar17 = *(undefined4 **)(param_1 + 2);
  lVar18 = (long)puVar17 - (long)puVar13;
  uVar28 = lVar18 >> 3;
  if (param_2 <= uVar28) {
    if (uVar28 <= param_2) {
      return;
    }
    puVar13 = puVar13 + param_2 * 2;
LAB_109a9050c:
    *(undefined4 **)(param_1 + 2) = puVar13;
    return;
  }
  uVar21 = param_2 - uVar28;
  uStack_a0 = unaff_x26;
  puStack_60 = &stack0xfffffffffffffff0;
  if (uVar21 <= (ulong)(*(long *)(param_1 + 4) - (long)puVar17 >> 3)) {
    _bzero(puVar17,uVar21 * 8);
    puVar13 = puVar17 + uVar21 * 2;
    goto LAB_109a9050c;
  }
  puVar11 = param_1;
  if (param_2 >> 0x3d == 0) {
    uVar15 = *(long *)(param_1 + 4) - (long)puVar13;
    unaff_x25 = (long)uVar15 >> 2;
    if (unaff_x25 <= param_2) {
      unaff_x25 = param_2;
    }
    if (0x7ffffffffffffff7 < uVar15) {
      unaff_x25 = 0x1fffffffffffffff;
    }
    if (unaff_x25 >> 0x3d == 0) {
      lVar10 = unaff_x25 << 3;
      __Znwm();
      lVar18 = lVar10 + lVar18;
      _bzero(lVar18,uVar21 * 8);
      puVar19 = (undefined4 *)(lVar18 + uVar28 * -8);
      puVar1 = puVar19;
      for (puVar16 = puVar13; puVar16 != puVar17; puVar16 = puVar16 + 2) {
        *puVar1 = *puVar16;
        puVar1[1] = puVar16[1];
        puVar1 = puVar1 + 2;
      }
      *(undefined4 **)param_1 = puVar19;
      *(ulong *)(param_1 + 2) = lVar18 + uVar21 * 8;
      *(ulong *)(param_1 + 4) = lVar10 + unaff_x25 * 8;
      if (puVar13 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c370();
  }
  func_0x000104c4f740();
  pcStack_a8 = FUN_109a90530;
  lVar27 = *(long *)puVar11;
  lVar9 = *(long *)(puVar11 + 2);
  lVar10 = lVar9 - lVar27;
  bVar7 = (ulong)((lVar10 >> 2) * -0x5555555555555555) <= param_2;
  uVar15 = param_2 + (lVar10 >> 2) * 0x5555555555555555;
  if (!bVar7 || uVar15 == 0) {
    if (bVar7) {
      return;
    }
    lVar9 = lVar27 + param_2 * 0xc;
LAB_109a906a8:
    *(long *)(puVar11 + 2) = lVar9;
    return;
  }
  uStack_e0 = uVar28;
  uStack_d8 = uVar21;
  lStack_d0 = lVar18;
  puStack_c8 = puVar17;
  puStack_c0 = puVar13;
  puStack_b8 = param_1;
  ppuStack_b0 = &puStack_60;
  if (uVar15 <= (ulong)((*(long *)(puVar11 + 4) - lVar9 >> 2) * -0x5555555555555555)) {
    lVar18 = ((uVar15 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar9,lVar18);
    lVar9 = lVar9 + lVar18;
    goto LAB_109a906a8;
  }
  if (param_2 < 0x1555555555555556) {
    lVar18 = *(long *)(puVar11 + 4) - lVar27 >> 2;
    uVar28 = lVar18 * 0x5555555555555556;
    if (uVar28 < param_2 || uVar28 - param_2 == 0) {
      uVar28 = param_2;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar18 * -0x5555555555555555)) {
      uVar28 = 0x1555555555555555;
    }
    puVar12 = puVar11;
    puStack_e8 = puVar11;
    FUN_1096379e8();
    lVar10 = (long)puVar12 + lVar10;
    puStack_f0 = puVar12 + uVar28 * 3;
    lVar18 = ((uVar15 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    puStack_108 = puVar12;
    lStack_100 = lVar10;
    _bzero(lVar10,lVar18);
    lStack_f8 = lVar10 + lVar18;
    FUN_109637fbc(puVar11,&puStack_108);
    if (lStack_f8 - lStack_100 != 0) {
      lStack_f8 = lStack_f8 + (((lStack_f8 - lStack_100) - 0xcU) / 0xc) * -0xc + -0xc;
    }
    if (puStack_108 == (uint *)0x0) {
      return;
    }
    __ZdlPv();
    return;
  }
  FUN_1096379d4();
  if (lStack_f8 - lStack_100 != 0) {
    lStack_f8 = lStack_f8 + (((lStack_f8 - lStack_100) - 0xcU) / 0xc) * -0xc + -0xc;
  }
  if (puStack_108 != (uint *)0x0) {
    __ZdlPv();
  }
  puVar12 = puVar11;
  __Unwind_Resume();
  pcStack_118 = FUN_109a90718;
  lVar22 = *(long *)puVar12;
  lVar27 = *(long *)(puVar12 + 2);
  lVar18 = lVar27 - lVar22;
  uVar20 = lVar18 >> 4;
  if (param_2 <= uVar20) {
    if (uVar20 <= param_2) {
      return;
    }
    lVar27 = lVar22 + param_2 * 0x10;
LAB_109a9080c:
    *(long *)(puVar12 + 2) = lVar27;
    return;
  }
  uVar20 = param_2 - uVar20;
  lStack_140 = lVar10;
  uStack_138 = uVar15;
  lStack_130 = lVar9;
  puStack_128 = puVar11;
  pppuStack_120 = &ppuStack_b0;
  if (uVar20 <= (ulong)(*(long *)(puVar12 + 4) - lVar27 >> 4)) {
    _bzero(lVar27,uVar20 * 0x10);
    lVar27 = lVar27 + uVar20 * 0x10;
    goto LAB_109a9080c;
  }
  if (param_2 >> 0x3c == 0) {
    uVar21 = *(long *)(puVar12 + 4) - lVar22;
    uVar28 = (long)uVar21 >> 3;
    if (uVar28 <= param_2) {
      uVar28 = param_2;
    }
    if (0x7fffffffffffffef < uVar21) {
      uVar28 = 0xfffffffffffffff;
    }
    puVar11 = puVar12;
    puStack_148 = puVar12;
    FUN_1092e8fac();
    lVar18 = (long)puVar11 + lVar18;
    puStack_150 = puVar11 + uVar28 * 4;
    puStack_168 = puVar11;
    lStack_160 = lVar18;
    _bzero(lVar18,uVar20 * 0x10);
    lStack_158 = lVar18 + uVar20 * 0x10;
    FUN_1092e8f14(puVar12,&puStack_168);
    if (lStack_158 != lStack_160) {
      lStack_158 = lStack_158 + ((lStack_160 - lStack_158) + 0xfU & 0xfffffffffffffff0);
    }
    if (puStack_168 == (uint *)0x0) {
      return;
    }
    __ZdlPv();
    return;
  }
  FUN_1092e8f98();
  if (lStack_158 != lStack_160) {
    lStack_158 = lStack_158 + ((lStack_160 - lStack_158) + 0xfU & 0xfffffffffffffff0);
  }
  if (puStack_168 != (uint *)0x0) {
    __ZdlPv();
  }
  puVar11 = puVar12;
  __Unwind_Resume();
  pcStack_178 = FUN_109a90860;
  puVar13 = *(undefined4 **)puVar11;
  puVar17 = *(undefined4 **)(puVar11 + 2);
  lVar10 = (long)puVar17 - (long)puVar13;
  bVar7 = (ulong)((lVar10 >> 3) * -0x5555555555555555) <= param_2;
  uVar15 = param_2 + (lVar10 >> 3) * 0x5555555555555555;
  if (!bVar7 || uVar15 == 0) {
    if (bVar7) {
      return;
    }
    puVar13 = puVar13 + param_2 * 6;
LAB_109a909e4:
    *(undefined4 **)(puVar11 + 2) = puVar13;
    return;
  }
  uStack_1c0 = unaff_x26;
  uStack_1b8 = unaff_x25;
  uStack_1b0 = uVar28;
  uStack_1a8 = uVar21;
  lStack_1a0 = lVar18;
  uStack_198 = uVar20;
  lStack_190 = lVar27;
  puStack_188 = puVar12;
  ppppuStack_180 = &pppuStack_120;
  if (uVar15 <= (ulong)((*(long *)(puVar11 + 4) - (long)puVar17 >> 3) * -0x5555555555555555)) {
    uVar28 = (uVar15 * 0x18 - 0x18) / 0x18;
    _bzero(puVar17,uVar28 * 0x18 + 0x18);
    puVar13 = puVar17 + uVar28 * 6 + 6;
    goto LAB_109a909e4;
  }
  puVar12 = puVar11;
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar9 = *(long *)(puVar11 + 4) - (long)puVar13 >> 3;
    uVar28 = lVar9 * 0x5555555555555556;
    if (uVar28 < param_2 || uVar28 - param_2 == 0) {
      uVar28 = param_2;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar28 = 0xaaaaaaaaaaaaaaa;
    }
    uVar29 = 0xaaaaaaaaaaaaaaab;
    if (uVar28 < 0xaaaaaaaaaaaaaab) {
      lVar9 = uVar28 * 0x18;
      __Znwm();
      lVar27 = ((uVar15 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar9 + lVar10,lVar27);
      lVar18 = lVar9;
      for (puVar16 = puVar13; puVar16 != puVar17; puVar16 = puVar16 + 6) {
        lVar22 = 0;
        do {
          *(undefined4 *)(lVar18 + lVar22) = *(undefined4 *)((long)puVar16 + lVar22);
          lVar22 = lVar22 + 4;
        } while (lVar22 != 0x18);
        lVar18 = lVar18 + 0x18;
      }
      *(long *)puVar11 = lVar9;
      *(long *)(puVar11 + 2) = lVar9 + lVar10 + lVar27;
      *(ulong *)(puVar11 + 4) = lVar9 + uVar28 * 0x18;
      if (puVar13 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c384();
    uVar29 = unaff_x26;
  }
  func_0x000104c4f740();
  uStack_1c8 = 0x109a90a08;
  puVar16 = *(undefined4 **)puVar12;
  puVar1 = *(undefined4 **)(puVar12 + 2);
  lVar9 = (long)puVar1 - (long)puVar16;
  uVar28 = lVar9 >> 5;
  if (param_2 <= uVar28) {
    if (uVar28 <= param_2) {
      return;
    }
    puVar16 = puVar16 + param_2 * 8;
LAB_109a90b20:
    *(undefined4 **)(puVar12 + 2) = puVar16;
    return;
  }
  uVar21 = param_2 - uVar28;
  uStack_210 = uVar29;
  uStack_208 = unaff_x25;
  uStack_200 = uVar15;
  lStack_1f8 = lVar10;
  lStack_1f0 = lVar18;
  puStack_1e8 = puVar13;
  puStack_1e0 = puVar17;
  puStack_1d8 = puVar11;
  pppppuStack_1d0 = &ppppuStack_180;
  if (uVar21 <= (ulong)(*(long *)(puVar12 + 4) - (long)puVar1 >> 5)) {
    _bzero(puVar1,uVar21 * 0x20);
    puVar16 = puVar1 + uVar21 * 8;
    goto LAB_109a90b20;
  }
  puVar11 = puVar12;
  if (param_2 >> 0x3b == 0) {
    uVar20 = *(long *)(puVar12 + 4) - (long)puVar16;
    uVar15 = (long)uVar20 >> 4;
    if (uVar15 <= param_2) {
      uVar15 = param_2;
    }
    if (0x7fffffffffffffdf < uVar20) {
      uVar15 = 0x7ffffffffffffff;
    }
    if (uVar15 >> 0x3b == 0) {
      lVar10 = uVar15 << 5;
      __Znwm();
      lVar9 = lVar10 + lVar9;
      _bzero(lVar9,uVar21 * 0x20);
      lVar27 = lVar9 + uVar28 * -0x20;
      lVar18 = lVar27;
      for (puVar13 = puVar16; puVar13 != puVar1; puVar13 = puVar13 + 8) {
        lVar22 = 0;
        do {
          *(undefined4 *)(lVar18 + lVar22) = *(undefined4 *)((long)puVar13 + lVar22);
          lVar22 = lVar22 + 4;
        } while (lVar22 != 0x20);
        lVar18 = lVar18 + 0x20;
      }
      *(long *)puVar12 = lVar27;
      *(ulong *)(puVar12 + 2) = lVar9 + uVar21 * 0x20;
      *(ulong *)(puVar12 + 4) = lVar10 + uVar15 * 0x20;
      puVar13 = puVar16;
      if (puVar16 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c398();
    uVar15 = unaff_x25;
  }
  func_0x000104c4f740();
  uStack_218 = 0x109a90b44;
  puVar13 = *(undefined4 **)puVar11;
  puVar17 = *(undefined4 **)(puVar11 + 2);
  lVar18 = (long)puVar17 - (long)puVar13;
  bVar7 = (ulong)((lVar18 >> 2) * -0x71c71c71c71c71c7) <= param_2;
  uVar20 = param_2 + (lVar18 >> 2) * 0x71c71c71c71c71c7;
  if (!bVar7 || uVar20 == 0) {
    if (bVar7) {
      return;
    }
    puVar13 = puVar13 + param_2 * 9;
LAB_109a90cf0:
    *(undefined4 **)(puVar11 + 2) = puVar13;
    return;
  }
  uStack_260 = uVar29;
  uStack_258 = uVar15;
  uStack_250 = uVar28;
  uStack_248 = uVar21;
  lStack_240 = lVar9;
  puStack_238 = puVar1;
  puStack_230 = puVar16;
  puStack_228 = puVar12;
  ppppppuStack_220 = &pppppuStack_1d0;
  if (uVar20 <= (ulong)((*(long *)(puVar11 + 4) - (long)puVar17 >> 2) * -0x71c71c71c71c71c7)) {
    uVar28 = (uVar20 * 0x24 - 0x24) / 0x24;
    _bzero(puVar17,uVar28 * 0x24 + 0x24);
    puVar13 = puVar17 + uVar28 * 9 + 9;
    goto LAB_109a90cf0;
  }
  puVar12 = puVar11;
  if (param_2 < 0x71c71c71c71c71d) {
    lVar10 = *(long *)(puVar11 + 4) - (long)puVar13 >> 2;
    uVar28 = lVar10 * 0x1c71c71c71c71c72;
    if (uVar28 < param_2 || uVar28 - param_2 == 0) {
      uVar28 = param_2;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar10 * -0x71c71c71c71c71c7)) {
      uVar28 = 0x71c71c71c71c71c;
    }
    if (uVar28 < 0x71c71c71c71c71d) {
      lVar9 = uVar28 * 0x24;
      __Znwm();
      lVar27 = ((uVar20 * 0x24 - 0x24) / 0x24) * 0x24 + 0x24;
      _bzero(lVar9 + lVar18,lVar27);
      lVar10 = lVar9;
      for (puVar16 = puVar13; puVar16 != puVar17; puVar16 = puVar16 + 9) {
        lVar22 = 0;
        do {
          *(undefined4 *)(lVar10 + lVar22) = *(undefined4 *)((long)puVar16 + lVar22);
          lVar22 = lVar22 + 4;
        } while (lVar22 != 0x24);
        lVar10 = lVar10 + 0x24;
      }
      *(long *)puVar11 = lVar9;
      *(long *)(puVar11 + 2) = lVar9 + lVar18 + lVar27;
      *(ulong *)(puVar11 + 4) = lVar9 + uVar28 * 0x24;
      if (puVar13 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3ac();
  }
  func_0x000104c4f740();
  uStack_268 = 0x109a90d14;
  puVar16 = *(undefined4 **)puVar12;
  puVar1 = *(undefined4 **)(puVar12 + 2);
  lVar10 = (long)puVar1 - (long)puVar16;
  bVar7 = (ulong)((lVar10 >> 4) * -0x5555555555555555) <= param_2;
  uVar28 = param_2 + (lVar10 >> 4) * 0x5555555555555555;
  if (!bVar7 || uVar28 == 0) {
    if (bVar7) {
      return;
    }
    puVar16 = puVar16 + param_2 * 0xc;
LAB_109a90e98:
    *(undefined4 **)(puVar12 + 2) = puVar16;
    return;
  }
  uStack_2b0 = uVar29;
  uStack_2a8 = uVar15;
  uStack_2a0 = uVar20;
  lStack_298 = lVar18;
  lStack_290 = lVar9;
  puStack_288 = puVar13;
  puStack_280 = puVar17;
  puStack_278 = puVar11;
  pppppppuStack_270 = &ppppppuStack_220;
  if (uVar28 <= (ulong)((*(long *)(puVar12 + 4) - (long)puVar1 >> 4) * -0x5555555555555555)) {
    uVar28 = (uVar28 * 0x30 - 0x30) / 0x30;
    _bzero(puVar1,uVar28 * 0x30 + 0x30);
    puVar16 = puVar1 + uVar28 * 0xc + 0xc;
    goto LAB_109a90e98;
  }
  puVar11 = puVar12;
  if (param_2 < 0x555555555555556) {
    lVar18 = *(long *)(puVar12 + 4) - (long)puVar16 >> 4;
    uVar21 = lVar18 * 0x5555555555555556;
    if (uVar21 < param_2 || uVar21 - param_2 == 0) {
      uVar21 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar18 * -0x5555555555555555)) {
      uVar21 = 0x555555555555555;
    }
    uVar29 = 0xaaaaaaaaaaaaaaab;
    if (uVar21 < 0x555555555555556) {
      lVar9 = uVar21 * 0x30;
      __Znwm();
      lVar27 = ((uVar28 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
      _bzero(lVar9 + lVar10,lVar27);
      lVar18 = lVar9;
      for (puVar13 = puVar16; puVar13 != puVar1; puVar13 = puVar13 + 0xc) {
        lVar22 = 0;
        do {
          *(undefined4 *)(lVar18 + lVar22) = *(undefined4 *)((long)puVar13 + lVar22);
          lVar22 = lVar22 + 4;
        } while (lVar22 != 0x30);
        lVar18 = lVar18 + 0x30;
      }
      *(long *)puVar12 = lVar9;
      *(long *)(puVar12 + 2) = lVar9 + lVar10 + lVar27;
      *(ulong *)(puVar12 + 4) = lVar9 + uVar21 * 0x30;
      puVar13 = puVar16;
      if (puVar16 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3c0();
  }
  func_0x000104c4f740();
  uStack_2b8 = 0x109a90ebc;
  puVar13 = *(undefined4 **)puVar11;
  puVar17 = *(undefined4 **)(puVar11 + 2);
  lVar18 = (long)puVar17 - (long)puVar13;
  uVar21 = lVar18 >> 6;
  if (param_2 <= uVar21) {
    if (uVar21 <= param_2) {
      return;
    }
    puVar13 = puVar13 + param_2 * 0x10;
LAB_109a90fd4:
    *(undefined4 **)(puVar11 + 2) = puVar13;
    return;
  }
  uVar20 = param_2 - uVar21;
  uStack_300 = uVar29;
  uStack_2f8 = uVar15;
  uStack_2f0 = uVar28;
  lStack_2e8 = lVar10;
  lStack_2e0 = lVar9;
  puStack_2d8 = puVar16;
  puStack_2d0 = puVar1;
  puStack_2c8 = puVar12;
  pppppppuStack_2c0 = &pppppppuStack_270;
  if (uVar20 <= (ulong)(*(long *)(puVar11 + 4) - (long)puVar17 >> 6)) {
    _bzero(puVar17,uVar20 * 0x40);
    puVar13 = puVar17 + uVar20 * 0x10;
    goto LAB_109a90fd4;
  }
  puVar12 = puVar11;
  if (param_2 >> 0x3a == 0) {
    uVar28 = *(long *)(puVar11 + 4) - (long)puVar13;
    uVar15 = (long)uVar28 >> 5;
    if (uVar15 <= param_2) {
      uVar15 = param_2;
    }
    if (0x7fffffffffffffbf < uVar28) {
      uVar15 = 0x3ffffffffffffff;
    }
    if (uVar15 >> 0x3a == 0) {
      lVar9 = uVar15 << 6;
      __Znwm();
      lVar18 = lVar9 + lVar18;
      _bzero(lVar18,uVar20 * 0x40);
      lVar27 = lVar18 + uVar21 * -0x40;
      lVar10 = lVar27;
      for (puVar16 = puVar13; puVar16 != puVar17; puVar16 = puVar16 + 0x10) {
        lVar22 = 0;
        do {
          *(undefined4 *)(lVar10 + lVar22) = *(undefined4 *)((long)puVar16 + lVar22);
          lVar22 = lVar22 + 4;
        } while (lVar22 != 0x40);
        lVar10 = lVar10 + 0x40;
      }
      *(long *)puVar11 = lVar27;
      *(ulong *)(puVar11 + 2) = lVar18 + uVar20 * 0x40;
      *(ulong *)(puVar11 + 4) = lVar9 + uVar15 * 0x40;
      if (puVar13 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3d4();
  }
  func_0x000104c4f740();
  uStack_308 = 0x109a90ff8;
  puVar16 = *(undefined4 **)puVar12;
  puVar1 = *(undefined4 **)(puVar12 + 2);
  lVar10 = (long)puVar1 - (long)puVar16;
  uVar28 = lVar10 >> 7;
  if (param_2 <= uVar28) {
    if (uVar28 <= param_2) {
      return;
    }
    puVar16 = puVar16 + param_2 * 0x20;
LAB_109a91110:
    *(undefined4 **)(puVar12 + 2) = puVar16;
    return;
  }
  uVar26 = param_2 - uVar28;
  uStack_350 = uVar29;
  uStack_348 = uVar15;
  uStack_340 = uVar21;
  uStack_338 = uVar20;
  lStack_330 = lVar18;
  puStack_328 = puVar17;
  puStack_320 = puVar13;
  puStack_318 = puVar11;
  pppppppuStack_310 = &pppppppuStack_2c0;
  if (uVar26 <= (ulong)(*(long *)(puVar12 + 4) - (long)puVar1 >> 7)) {
    _bzero(puVar1,uVar26 * 0x80);
    puVar16 = puVar1 + uVar26 * 0x20;
    goto LAB_109a91110;
  }
  puVar11 = puVar12;
  if (param_2 >> 0x39 == 0) {
    uVar21 = *(long *)(puVar12 + 4) - (long)puVar16;
    uVar15 = (long)uVar21 >> 6;
    if (uVar15 <= param_2) {
      uVar15 = param_2;
    }
    if (0x7fffffffffffff7f < uVar21) {
      uVar15 = 0x1ffffffffffffff;
    }
    if (uVar15 >> 0x39 == 0) {
      lVar9 = uVar15 << 7;
      __Znwm();
      lVar10 = lVar9 + lVar10;
      _bzero(lVar10,uVar26 * 0x80);
      lVar27 = lVar10 + uVar28 * -0x80;
      lVar18 = lVar27;
      for (puVar13 = puVar16; puVar13 != puVar1; puVar13 = puVar13 + 0x20) {
        lVar22 = 0;
        do {
          *(undefined4 *)(lVar18 + lVar22) = *(undefined4 *)((long)puVar13 + lVar22);
          lVar22 = lVar22 + 4;
        } while (lVar22 != 0x80);
        lVar18 = lVar18 + 0x80;
      }
      *(long *)puVar12 = lVar27;
      *(ulong *)(puVar12 + 2) = lVar10 + uVar26 * 0x80;
      *(ulong *)(puVar12 + 4) = lVar9 + uVar15 * 0x80;
      puVar13 = puVar16;
      if (puVar16 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3e8();
  }
  func_0x000104c4f740();
  uStack_358 = 0x109a91134;
  puVar17 = *(undefined4 **)puVar11;
  puVar19 = *(undefined4 **)(puVar11 + 2);
  lVar18 = (long)puVar19 - (long)puVar17;
  uVar21 = lVar18 >> 8;
  if (param_2 <= uVar21) {
    if (uVar21 <= param_2) {
      return;
    }
    puVar17 = puVar17 + param_2 * 0x40;
LAB_109a9124c:
    *(undefined4 **)(puVar11 + 2) = puVar17;
    return;
  }
  uVar20 = param_2 - uVar21;
  uStack_3a0 = uVar29;
  uStack_398 = uVar15;
  uStack_390 = uVar28;
  uStack_388 = uVar26;
  lStack_380 = lVar10;
  puStack_378 = puVar1;
  puStack_370 = puVar16;
  puStack_368 = puVar12;
  pppppppuStack_360 = &pppppppuStack_310;
  if (uVar20 <= (ulong)(*(long *)(puVar11 + 4) - (long)puVar19 >> 8)) {
    _bzero(puVar19,uVar20 * 0x100);
    puVar17 = puVar19 + uVar20 * 0x40;
    goto LAB_109a9124c;
  }
  puVar12 = puVar11;
  if (param_2 >> 0x38 == 0) {
    uVar28 = *(long *)(puVar11 + 4) - (long)puVar17;
    uVar15 = (long)uVar28 >> 7;
    if (uVar15 <= param_2) {
      uVar15 = param_2;
    }
    if (0x7ffffffffffffeff < uVar28) {
      uVar15 = 0xffffffffffffff;
    }
    if (uVar15 >> 0x38 == 0) {
      lVar9 = uVar15 << 8;
      __Znwm();
      lVar18 = lVar9 + lVar18;
      _bzero(lVar18,uVar20 * 0x100);
      lVar27 = lVar18 + uVar21 * -0x100;
      lVar10 = lVar27;
      for (puVar13 = puVar17; puVar13 != puVar19; puVar13 = puVar13 + 0x40) {
        lVar22 = 0;
        do {
          *(undefined4 *)(lVar10 + lVar22) = *(undefined4 *)((long)puVar13 + lVar22);
          lVar22 = lVar22 + 4;
        } while (lVar22 != 0x100);
        lVar10 = lVar10 + 0x100;
      }
      *(long *)puVar11 = lVar27;
      *(ulong *)(puVar11 + 2) = lVar18 + uVar20 * 0x100;
      *(ulong *)(puVar11 + 4) = lVar9 + uVar15 * 0x100;
      puVar13 = puVar17;
      if (puVar17 == (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3fc();
  }
  func_0x000104c4f740();
  uStack_3a8 = 0x109a91270;
  puVar13 = *(undefined4 **)puVar12;
  puVar16 = *(undefined4 **)(puVar12 + 2);
  puVar25 = (undefined8 *)((long)puVar16 - (long)puVar13);
  uVar28 = (long)puVar25 >> 9;
  if (uVar28 < param_2) {
    uVar26 = param_2 - uVar28;
    uStack_3f0 = uVar29;
    uStack_3e8 = uVar15;
    uStack_3e0 = uVar21;
    uStack_3d8 = uVar20;
    lStack_3d0 = lVar18;
    puStack_3c8 = puVar19;
    puStack_3c0 = puVar17;
    puStack_3b8 = puVar11;
    pppppppuStack_3b0 = &pppppppuStack_360;
    if ((ulong)(*(long *)(puVar12 + 4) - (long)puVar16 >> 9) < uVar26) {
      puVar11 = puVar12;
      if (param_2 >> 0x37 == 0) {
        uVar15 = *(long *)(puVar12 + 4) - (long)puVar13;
        uVar21 = (long)uVar15 >> 8;
        if (uVar21 <= param_2) {
          uVar21 = param_2;
        }
        if (0x7ffffffffffffdff < uVar15) {
          uVar21 = 0x7fffffffffffff;
        }
        if (uVar21 >> 0x37 == 0) {
          lVar9 = uVar21 << 9;
          __Znwm();
          lVar10 = lVar9 + (long)puVar25;
          _bzero(lVar10,uVar26 * 0x200);
          lVar27 = lVar10 + uVar28 * -0x200;
          lVar18 = lVar27;
          for (puVar17 = puVar13; puVar17 != puVar16; puVar17 = puVar17 + 0x80) {
            lVar22 = 0;
            do {
              *(undefined4 *)(lVar18 + lVar22) = *(undefined4 *)((long)puVar17 + lVar22);
              lVar22 = lVar22 + 4;
            } while (lVar22 != 0x200);
            lVar18 = lVar18 + 0x200;
          }
          *(long *)puVar12 = lVar27;
          *(ulong *)(puVar12 + 2) = lVar10 + uVar26 * 0x200;
          *(ulong *)(puVar12 + 4) = lVar9 + uVar21 * 0x200;
          if (puVar13 == (undefined4 *)0x0) {
            return;
          }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(puVar13);
          return;
        }
      }
      else {
        func_0x000109a9c410();
      }
      func_0x000104c4f740();
      pcStack_3f8 = FUN_109a913ac;
      puStack_420 = puVar25;
      puStack_418 = puVar16;
      puStack_410 = puVar13;
      puStack_408 = puVar12;
      pppppppuStack_400 = &pppppppuStack_3b0;
      if ((*puVar11 & 0x1f0000) == 0x10000) {
        if ((*puVar11 >> 0x1e & 1) == 0) {
          lVar18 = *(long *)(puVar11 + 2);
          piVar14 = *(int **)(lVar18 + 0x40);
          iVar2 = *piVar14;
          if (-iVar2 != 0) {
            if ((*(char *)(lVar18 + 1) < '\0') ||
               (lVar10 = **(long **)(lVar18 + 0x48),
               *(ulong *)(lVar18 + 0x28) < *(ulong *)(lVar18 + 0x10))) {
              FUN_109a859f0(lVar18,0);
              piVar14 = *(int **)(lVar18 + 0x40);
              lVar10 = **(long **)(lVar18 + 0x48);
            }
            *piVar14 = 0;
            *(long *)(lVar18 + 0x20) = *(long *)(lVar18 + 0x20) + lVar10 * -iVar2;
          }
          return;
        }
        puVar13 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar13 = 1;
        puStack_420 = (undefined8 *)(puVar13 + 1);
        *puStack_420 = 0x6953646578696621;
        puStack_418 = (undefined4 *)0xc;
        *(undefined1 *)(puVar13 + 4) = 0;
        puVar13[3] = 0x2928657a;
        FUN_109ac3188(0xffffff29,&puStack_420,&UNK_10f59845f,&UNK_10f597913,0xa54);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x109a9145c);
        (*pcVar6)();
      }
      if ((*puVar11 >> 0x1e & 1) == 0) {
        uVar4 = *puVar11 >> 0x10 & 0x1f;
        if (uVar4 < 7) {
          if (uVar4 < 3) {
            if (uVar4 == 0) {
              return;
            }
            if (uVar4 == 1) {
              lVar18 = *(long *)(puVar11 + 2);
              if (*(long *)(lVar18 + 0x38) != 0) {
                piVar14 = (int *)(*(long *)(lVar18 + 0x38) + 0x14);
                do {
                  iVar2 = *piVar14;
                  cVar3 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                  if (bVar7) {
                    *piVar14 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar2 + -1 == 0) {
                  func_0x000109a848d4(lVar18);
                }
              }
              *(undefined8 *)(lVar18 + 0x38) = 0;
              *(undefined8 *)(lVar18 + 0x18) = 0;
              *(undefined8 *)(lVar18 + 0x10) = 0;
              *(undefined8 *)(lVar18 + 0x28) = 0;
              *(undefined8 *)(lVar18 + 0x20) = 0;
              if (*(int *)(lVar18 + 4) < 1) {
                return;
              }
              lVar10 = 0;
              lVar9 = *(long *)(lVar18 + 0x40);
              do {
                *(undefined4 *)(lVar9 + lVar10 * 4) = 0;
                lVar10 = lVar10 + 1;
              } while (lVar10 < *(int *)(lVar18 + 4));
              return;
            }
          }
          else {
            if (uVar4 == 3) {
              puStack_430 = (undefined8 *)0x0;
              FUN_109a8ee3c();
              return;
            }
            if (uVar4 == 4) {
              plVar8 = *(long **)(puVar11 + 2);
              plVar23 = (long *)*plVar8;
              plVar24 = (long *)plVar8[1];
              while (plVar5 = plVar24, plVar5 != plVar23) {
                plVar24 = plVar5 + -3;
                if (*plVar24 != 0) {
                  plVar5[-2] = *plVar24;
                  __ZdlPv();
                }
              }
              plVar8[1] = (long)plVar23;
              return;
            }
            if (uVar4 == 5) {
              plVar23 = *(long **)(puVar11 + 2);
              lVar18 = *plVar23;
              lVar10 = plVar23[1];
              while (lVar10 != lVar18) {
                lVar10 = lVar10 + -0x60;
                FUN_109370334(lVar10);
              }
              plVar23[1] = lVar18;
              return;
            }
          }
        }
        else {
          if (uVar4 < 10) {
            return;
          }
          if (uVar4 == 10) {
            lVar18 = *(long *)(puVar11 + 2);
            if (*(long *)(lVar18 + 0x20) != 0) {
              piVar14 = (int *)(*(long *)(lVar18 + 0x20) + 0x10);
              do {
                iVar2 = *piVar14;
                cVar3 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                if (bVar7) {
                  *piVar14 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                (**(code **)(**(long **)(*(long *)(lVar18 + 0x20) + 8) + 0x20))();
                *(undefined8 *)(lVar18 + 0x20) = 0;
              }
            }
            if (0 < *(int *)(lVar18 + 4)) {
              lVar10 = 0;
              lVar9 = *(long *)(lVar18 + 0x30);
              do {
                *(undefined4 *)(lVar9 + lVar10 * 4) = 0;
                lVar10 = lVar10 + 1;
              } while (lVar10 < *(int *)(lVar18 + 4));
            }
            *(undefined8 *)(lVar18 + 0x20) = 0;
            return;
          }
          if (uVar4 == 0xb) {
            plVar23 = *(long **)(puVar11 + 2);
            lVar18 = *plVar23;
            lVar10 = plVar23[1];
            while (lVar10 != lVar18) {
              lVar10 = lVar10 + -0x50;
              FUN_109ac5638();
            }
            plVar23[1] = lVar18;
            return;
          }
          if (uVar4 == 0xd) {
            (*(undefined8 **)(puVar11 + 2))[1] = **(undefined8 **)(puVar11 + 2);
            return;
          }
        }
        puVar13 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar13 = 1;
        puStack_430 = (undefined8 *)(puVar13 + 1);
        uStack_428 = 0x1e;
        *(undefined1 *)((long)puVar13 + 0x22) = 0;
        *(undefined8 *)(puVar13 + 3) = 0x726f707075736e75;
        *(undefined8 *)(puVar13 + 1) = 0x2f6e776f6e6b6e55;
        *(undefined8 *)((long)puVar13 + 0x1a) = 0x6570797420796172;
        *(undefined8 *)((long)puVar13 + 0x12) = 0x726120646574726f;
        FUN_109ac3188(0xffffff2b,&puStack_430,&DAT_10f598457,&UNK_10f597913,0xa4b);
      }
      else {
        puVar13 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar13 = 1;
        puStack_430 = (undefined8 *)(puVar13 + 1);
        *puStack_430 = 0x6953646578696621;
        uStack_428 = 0xc;
        *(undefined1 *)(puVar13 + 4) = 0;
        puVar13[3] = 0x2928657a;
        FUN_109ac3188(0xffffff29,&puStack_430,&DAT_10f598457,&UNK_10f597913,0xa0a);
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
      (*pcVar6)();
    }
    _bzero(puVar16,uVar26 * 0x200);
    puVar13 = puVar16 + uVar26 * 0x80;
  }
  else {
    if (uVar28 <= param_2) {
      return;
    }
    puVar13 = puVar13 + param_2 * 0x80;
  }
  *(undefined4 **)(puVar12 + 2) = puVar13;
  return;
}



/* Entry: 109a90530; end: 109a90717;  */

/* WARNING: Removing unreachable block (ram,0x000109a85ec0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109a90530(uint *param_1,ulong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  undefined4 *puVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar28;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  long lStack_378;
  long lStack_370;
  uint *puStack_368;
  undefined8 *******pppppppuStack_360;
  code *pcStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  uint *puStack_318;
  undefined8 *******pppppppuStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  uint *puStack_2c8;
  undefined8 *******pppppppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  uint *puStack_278;
  undefined1 *******pppppppuStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  uint *puStack_228;
  undefined1 ******ppppppuStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  uint *puStack_1d8;
  undefined1 *****pppppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  uint *puStack_188;
  undefined1 ****ppppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 ***pppuStack_130;
  undefined8 uStack_128;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  uint *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  uint *puStack_b0;
  uint *puStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  uint *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  uint *puStack_68;
  long lStack_60;
  long lStack_58;
  uint *puStack_50;
  uint *puStack_48;
  
  lVar18 = *(long *)param_1;
  lVar14 = *(long *)(param_1 + 2);
  lVar24 = lVar14 - lVar18;
  bVar6 = (ulong)((lVar24 >> 2) * -0x5555555555555555) <= param_2;
  uVar17 = param_2 + (lVar24 >> 2) * 0x5555555555555555;
  if (!bVar6 || uVar17 == 0) {
    if (bVar6) {
      return;
    }
    lVar14 = lVar18 + param_2 * 0xc;
LAB_109a906a8:
    *(long *)(param_1 + 2) = lVar14;
    return;
  }
  if (uVar17 <= (ulong)((*(long *)(param_1 + 4) - lVar14 >> 2) * -0x5555555555555555)) {
    lVar24 = ((uVar17 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar14,lVar24);
    lVar14 = lVar14 + lVar24;
    goto LAB_109a906a8;
  }
  if (param_2 < 0x1555555555555556) {
    lVar14 = *(long *)(param_1 + 4) - lVar18 >> 2;
    uVar20 = lVar14 * 0x5555555555555556;
    if (uVar20 < param_2 || uVar20 - param_2 == 0) {
      uVar20 = param_2;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar14 * -0x5555555555555555)) {
      uVar20 = 0x1555555555555555;
    }
    puVar8 = param_1;
    puStack_48 = param_1;
    FUN_1096379e8();
    lVar24 = (long)puVar8 + lVar24;
    puStack_50 = puVar8 + uVar20 * 3;
    lVar14 = ((uVar17 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    puStack_68 = puVar8;
    lStack_60 = lVar24;
    _bzero(lVar24,lVar14);
    lStack_58 = lVar24 + lVar14;
    FUN_109637fbc(param_1,&puStack_68);
    if (lStack_58 - lStack_60 != 0) {
      lStack_58 = lStack_58 + (((lStack_58 - lStack_60) - 0xcU) / 0xc) * -0xc + -0xc;
    }
    if (puStack_68 == (uint *)0x0) {
      return;
    }
    __ZdlPv();
    return;
  }
  FUN_1096379d4();
  if (lStack_58 - lStack_60 != 0) {
    lStack_58 = lStack_58 + (((lStack_58 - lStack_60) - 0xcU) / 0xc) * -0xc + -0xc;
  }
  if (puStack_68 != (uint *)0x0) {
    __ZdlPv();
  }
  puVar8 = param_1;
  __Unwind_Resume();
  pcStack_78 = FUN_109a90718;
  lVar19 = *(long *)puVar8;
  lVar18 = *(long *)(puVar8 + 2);
  uVar20 = lVar18 - lVar19 >> 4;
  if (param_2 <= uVar20) {
    if (uVar20 <= param_2) {
      return;
    }
    lVar18 = lVar19 + param_2 * 0x10;
LAB_109a9080c:
    *(long *)(puVar8 + 2) = lVar18;
    return;
  }
  uVar20 = param_2 - uVar20;
  lStack_a0 = lVar24;
  uStack_98 = uVar17;
  lStack_90 = lVar14;
  puStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  if (uVar20 <= (ulong)(*(long *)(puVar8 + 4) - lVar18 >> 4)) {
    _bzero(lVar18,uVar20 * 0x10);
    lVar18 = lVar18 + uVar20 * 0x10;
    goto LAB_109a9080c;
  }
  if (param_2 >> 0x3c == 0) {
    uVar15 = *(long *)(puVar8 + 4) - lVar19;
    uVar17 = (long)uVar15 >> 3;
    if (uVar17 <= param_2) {
      uVar17 = param_2;
    }
    if (0x7fffffffffffffef < uVar15) {
      uVar17 = 0xfffffffffffffff;
    }
    puVar10 = puVar8;
    puStack_a8 = puVar8;
    FUN_1092e8fac();
    lVar24 = (long)puVar10 + (lVar18 - lVar19);
    puStack_b0 = puVar10 + uVar17 * 4;
    puStack_c8 = puVar10;
    lStack_c0 = lVar24;
    _bzero(lVar24,uVar20 * 0x10);
    lStack_b8 = lVar24 + uVar20 * 0x10;
    FUN_1092e8f14(puVar8,&puStack_c8);
    if (lStack_b8 != lStack_c0) {
      lStack_b8 = lStack_b8 + ((lStack_c0 - lStack_b8) + 0xfU & 0xfffffffffffffff0);
    }
    if (puStack_c8 == (uint *)0x0) {
      return;
    }
    __ZdlPv();
    return;
  }
  FUN_1092e8f98();
  if (lStack_b8 != lStack_c0) {
    lStack_b8 = lStack_b8 + ((lStack_c0 - lStack_b8) + 0xfU & 0xfffffffffffffff0);
  }
  if (puStack_c8 != (uint *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_d8 = FUN_109a90860;
  lVar14 = *(long *)puVar8;
  lVar24 = *(long *)(puVar8 + 2);
  lVar18 = lVar24 - lVar14 >> 3;
  bVar6 = (ulong)(lVar18 * -0x5555555555555555) <= param_2;
  uVar17 = param_2 + lVar18 * 0x5555555555555555;
  if (!bVar6 || uVar17 == 0) {
    if (bVar6) {
      return;
    }
    lVar24 = lVar14 + param_2 * 0x18;
LAB_109a909e4:
    *(long *)(puVar8 + 2) = lVar24;
    return;
  }
  ppuStack_e0 = &puStack_80;
  if (uVar17 <= (ulong)((*(long *)(puVar8 + 4) - lVar24 >> 3) * -0x5555555555555555)) {
    lVar14 = ((uVar17 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar24,lVar14);
    lVar24 = lVar24 + lVar14;
    goto LAB_109a909e4;
  }
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar18 = *(long *)(puVar8 + 4) - lVar14 >> 3;
    unaff_x26 = 0xaaaaaaaaaaaaaaab;
    uVar20 = lVar18 * 0x5555555555555556;
    if (uVar20 < param_2 || uVar20 - param_2 == 0) {
      uVar20 = param_2;
    }
    if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
      uVar20 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar20 < 0xaaaaaaaaaaaaaab) {
      lVar9 = uVar20 * 0x18;
      __Znwm();
      lVar11 = lVar9 + (lVar24 - lVar14);
      lVar27 = ((uVar17 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar11,lVar27);
      lVar19 = lVar9;
      for (lVar18 = lVar14; lVar18 != lVar24; lVar18 = lVar18 + 0x18) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar19 + lVar21) = *(undefined4 *)(lVar18 + lVar21);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x18);
        lVar19 = lVar19 + 0x18;
      }
      *(long *)puVar8 = lVar9;
      *(long *)(puVar8 + 2) = lVar11 + lVar27;
      *(ulong *)(puVar8 + 4) = lVar9 + uVar20 * 0x18;
      if (lVar14 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c384();
  }
  func_0x000104c4f740();
  uStack_128 = 0x109a90a08;
  lVar14 = *(long *)puVar8;
  lVar18 = *(long *)(puVar8 + 2);
  lVar24 = lVar18 - lVar14;
  uVar17 = lVar24 >> 5;
  if (param_2 <= uVar17) {
    if (uVar17 <= param_2) {
      return;
    }
    lVar18 = lVar14 + param_2 * 0x20;
LAB_109a90b20:
    *(long *)(puVar8 + 2) = lVar18;
    return;
  }
  uVar20 = param_2 - uVar17;
  uStack_170 = unaff_x26;
  pppuStack_130 = &ppuStack_e0;
  if (uVar20 <= (ulong)(*(long *)(puVar8 + 4) - lVar18 >> 5)) {
    _bzero(lVar18,uVar20 * 0x20);
    lVar18 = lVar18 + uVar20 * 0x20;
    goto LAB_109a90b20;
  }
  puVar10 = puVar8;
  if (param_2 >> 0x3b == 0) {
    uVar15 = *(long *)(puVar8 + 4) - lVar14;
    unaff_x25 = (long)uVar15 >> 4;
    if (unaff_x25 <= param_2) {
      unaff_x25 = param_2;
    }
    if (0x7fffffffffffffdf < uVar15) {
      unaff_x25 = 0x7ffffffffffffff;
    }
    if (unaff_x25 >> 0x3b == 0) {
      lVar9 = unaff_x25 << 5;
      __Znwm();
      lVar24 = lVar9 + lVar24;
      _bzero(lVar24,uVar20 * 0x20);
      lVar27 = lVar24 + uVar17 * -0x20;
      lVar11 = lVar27;
      for (lVar19 = lVar14; lVar19 != lVar18; lVar19 = lVar19 + 0x20) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar11 + lVar21) = *(undefined4 *)(lVar19 + lVar21);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x20);
        lVar11 = lVar11 + 0x20;
      }
      *(long *)puVar8 = lVar27;
      *(ulong *)(puVar8 + 2) = lVar24 + uVar20 * 0x20;
      *(ulong *)(puVar8 + 4) = lVar9 + unaff_x25 * 0x20;
      if (lVar14 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c398();
  }
  func_0x000104c4f740();
  uStack_178 = 0x109a90b44;
  lVar11 = *(long *)puVar10;
  lVar19 = *(long *)(puVar10 + 2);
  lVar9 = lVar19 - lVar11;
  bVar6 = (ulong)((lVar9 >> 2) * -0x71c71c71c71c71c7) <= param_2;
  uVar15 = param_2 + (lVar9 >> 2) * 0x71c71c71c71c71c7;
  if (!bVar6 || uVar15 == 0) {
    if (bVar6) {
      return;
    }
    lVar19 = lVar11 + param_2 * 0x24;
LAB_109a90cf0:
    *(long *)(puVar10 + 2) = lVar19;
    return;
  }
  uStack_1c0 = unaff_x26;
  uStack_1b8 = unaff_x25;
  uStack_1b0 = uVar17;
  uStack_1a8 = uVar20;
  lStack_1a0 = lVar24;
  lStack_198 = lVar18;
  lStack_190 = lVar14;
  puStack_188 = puVar8;
  ppppuStack_180 = &pppuStack_130;
  if (uVar15 <= (ulong)((*(long *)(puVar10 + 4) - lVar19 >> 2) * -0x71c71c71c71c71c7)) {
    lVar24 = ((uVar15 * 0x24 - 0x24) / 0x24) * 0x24 + 0x24;
    _bzero(lVar19,lVar24);
    lVar19 = lVar19 + lVar24;
    goto LAB_109a90cf0;
  }
  puVar8 = puVar10;
  if (param_2 < 0x71c71c71c71c71d) {
    lVar14 = *(long *)(puVar10 + 4) - lVar11 >> 2;
    uVar17 = lVar14 * 0x1c71c71c71c71c72;
    if (uVar17 < param_2 || uVar17 - param_2 == 0) {
      uVar17 = param_2;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar14 * -0x71c71c71c71c71c7)) {
      uVar17 = 0x71c71c71c71c71c;
    }
    if (uVar17 < 0x71c71c71c71c71d) {
      lVar18 = uVar17 * 0x24;
      __Znwm();
      lVar27 = ((uVar15 * 0x24 - 0x24) / 0x24) * 0x24 + 0x24;
      _bzero(lVar18 + lVar9,lVar27);
      lVar14 = lVar18;
      for (lVar24 = lVar11; lVar24 != lVar19; lVar24 = lVar24 + 0x24) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar14 + lVar21) = *(undefined4 *)(lVar24 + lVar21);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x24);
        lVar14 = lVar14 + 0x24;
      }
      *(long *)puVar10 = lVar18;
      *(long *)(puVar10 + 2) = lVar18 + lVar9 + lVar27;
      *(ulong *)(puVar10 + 4) = lVar18 + uVar17 * 0x24;
      lVar14 = lVar11;
      if (lVar11 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3ac();
  }
  func_0x000104c4f740();
  uStack_1c8 = 0x109a90d14;
  lVar14 = *(long *)puVar8;
  lVar18 = *(long *)(puVar8 + 2);
  lVar27 = lVar18 - lVar14;
  bVar6 = (ulong)((lVar27 >> 4) * -0x5555555555555555) <= param_2;
  uVar17 = param_2 + (lVar27 >> 4) * 0x5555555555555555;
  if (!bVar6 || uVar17 == 0) {
    if (bVar6) {
      return;
    }
    lVar18 = lVar14 + param_2 * 0x30;
LAB_109a90e98:
    *(long *)(puVar8 + 2) = lVar18;
    return;
  }
  uStack_210 = unaff_x26;
  uStack_208 = unaff_x25;
  uStack_200 = uVar15;
  lStack_1f8 = lVar9;
  lStack_1f0 = lVar24;
  lStack_1e8 = lVar11;
  lStack_1e0 = lVar19;
  puStack_1d8 = puVar10;
  pppppuStack_1d0 = &ppppuStack_180;
  if (uVar17 <= (ulong)((*(long *)(puVar8 + 4) - lVar18 >> 4) * -0x5555555555555555)) {
    lVar24 = ((uVar17 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
    _bzero(lVar18,lVar24);
    lVar18 = lVar18 + lVar24;
    goto LAB_109a90e98;
  }
  puVar10 = puVar8;
  if (param_2 < 0x555555555555556) {
    lVar19 = *(long *)(puVar8 + 4) - lVar14 >> 4;
    uVar20 = lVar19 * 0x5555555555555556;
    if (uVar20 < param_2 || uVar20 - param_2 == 0) {
      uVar20 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar19 * -0x5555555555555555)) {
      uVar20 = 0x555555555555555;
    }
    uVar28 = 0xaaaaaaaaaaaaaaab;
    if (uVar20 < 0x555555555555556) {
      lVar11 = uVar20 * 0x30;
      __Znwm();
      lVar9 = ((uVar17 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
      _bzero(lVar11 + lVar27,lVar9);
      lVar19 = lVar11;
      for (lVar24 = lVar14; lVar24 != lVar18; lVar24 = lVar24 + 0x30) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar19 + lVar21) = *(undefined4 *)(lVar24 + lVar21);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x30);
        lVar19 = lVar19 + 0x30;
      }
      *(long *)puVar8 = lVar11;
      *(long *)(puVar8 + 2) = lVar11 + lVar27 + lVar9;
      *(ulong *)(puVar8 + 4) = lVar11 + uVar20 * 0x30;
      if (lVar14 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3c0();
    uVar28 = unaff_x26;
  }
  func_0x000104c4f740();
  uStack_218 = 0x109a90ebc;
  lVar9 = *(long *)puVar10;
  lVar11 = *(long *)(puVar10 + 2);
  lVar19 = lVar11 - lVar9;
  uVar20 = lVar19 >> 6;
  if (param_2 <= uVar20) {
    if (uVar20 <= param_2) {
      return;
    }
    lVar11 = lVar9 + param_2 * 0x40;
LAB_109a90fd4:
    *(long *)(puVar10 + 2) = lVar11;
    return;
  }
  uVar15 = param_2 - uVar20;
  uStack_260 = uVar28;
  uStack_258 = unaff_x25;
  uStack_250 = uVar17;
  lStack_248 = lVar27;
  lStack_240 = lVar24;
  lStack_238 = lVar14;
  lStack_230 = lVar18;
  puStack_228 = puVar8;
  ppppppuStack_220 = &pppppuStack_1d0;
  if (uVar15 <= (ulong)(*(long *)(puVar10 + 4) - lVar11 >> 6)) {
    _bzero(lVar11,uVar15 * 0x40);
    lVar11 = lVar11 + uVar15 * 0x40;
    goto LAB_109a90fd4;
  }
  puVar8 = puVar10;
  if (param_2 >> 0x3a == 0) {
    uVar16 = *(long *)(puVar10 + 4) - lVar9;
    uVar17 = (long)uVar16 >> 5;
    if (uVar17 <= param_2) {
      uVar17 = param_2;
    }
    if (0x7fffffffffffffbf < uVar16) {
      uVar17 = 0x3ffffffffffffff;
    }
    if (uVar17 >> 0x3a == 0) {
      lVar18 = uVar17 << 6;
      __Znwm();
      lVar19 = lVar18 + lVar19;
      _bzero(lVar19,uVar15 * 0x40);
      lVar27 = lVar19 + uVar20 * -0x40;
      lVar14 = lVar27;
      for (lVar24 = lVar9; lVar24 != lVar11; lVar24 = lVar24 + 0x40) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar14 + lVar21) = *(undefined4 *)(lVar24 + lVar21);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x40);
        lVar14 = lVar14 + 0x40;
      }
      *(long *)puVar10 = lVar27;
      *(ulong *)(puVar10 + 2) = lVar19 + uVar15 * 0x40;
      *(ulong *)(puVar10 + 4) = lVar18 + uVar17 * 0x40;
      lVar14 = lVar9;
      if (lVar9 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3d4();
    uVar17 = unaff_x25;
  }
  func_0x000104c4f740();
  uStack_268 = 0x109a90ff8;
  lVar14 = *(long *)puVar8;
  lVar18 = *(long *)(puVar8 + 2);
  lVar24 = lVar18 - lVar14;
  uVar16 = lVar24 >> 7;
  if (param_2 <= uVar16) {
    if (uVar16 <= param_2) {
      return;
    }
    lVar18 = lVar14 + param_2 * 0x80;
LAB_109a91110:
    *(long *)(puVar8 + 2) = lVar18;
    return;
  }
  uVar26 = param_2 - uVar16;
  uStack_2b0 = uVar28;
  uStack_2a8 = uVar17;
  uStack_2a0 = uVar20;
  uStack_298 = uVar15;
  lStack_290 = lVar19;
  lStack_288 = lVar11;
  lStack_280 = lVar9;
  puStack_278 = puVar10;
  pppppppuStack_270 = &ppppppuStack_220;
  if (uVar26 <= (ulong)(*(long *)(puVar8 + 4) - lVar18 >> 7)) {
    _bzero(lVar18,uVar26 * 0x80);
    lVar18 = lVar18 + uVar26 * 0x80;
    goto LAB_109a91110;
  }
  puVar10 = puVar8;
  if (param_2 >> 0x39 == 0) {
    uVar20 = *(long *)(puVar8 + 4) - lVar14;
    uVar17 = (long)uVar20 >> 6;
    if (uVar17 <= param_2) {
      uVar17 = param_2;
    }
    if (0x7fffffffffffff7f < uVar20) {
      uVar17 = 0x1ffffffffffffff;
    }
    if (uVar17 >> 0x39 == 0) {
      lVar9 = uVar17 << 7;
      __Znwm();
      lVar24 = lVar9 + lVar24;
      _bzero(lVar24,uVar26 * 0x80);
      lVar27 = lVar24 + uVar16 * -0x80;
      lVar11 = lVar27;
      for (lVar19 = lVar14; lVar19 != lVar18; lVar19 = lVar19 + 0x80) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar11 + lVar21) = *(undefined4 *)(lVar19 + lVar21);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x80);
        lVar11 = lVar11 + 0x80;
      }
      *(long *)puVar8 = lVar27;
      *(ulong *)(puVar8 + 2) = lVar24 + uVar26 * 0x80;
      *(ulong *)(puVar8 + 4) = lVar9 + uVar17 * 0x80;
      if (lVar14 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3e8();
  }
  func_0x000104c4f740();
  uStack_2b8 = 0x109a91134;
  lVar9 = *(long *)puVar10;
  lVar11 = *(long *)(puVar10 + 2);
  lVar19 = lVar11 - lVar9;
  uVar20 = lVar19 >> 8;
  if (param_2 <= uVar20) {
    if (uVar20 <= param_2) {
      return;
    }
    lVar11 = lVar9 + param_2 * 0x100;
LAB_109a9124c:
    *(long *)(puVar10 + 2) = lVar11;
    return;
  }
  uVar15 = param_2 - uVar20;
  uStack_300 = uVar28;
  uStack_2f8 = uVar17;
  uStack_2f0 = uVar16;
  uStack_2e8 = uVar26;
  lStack_2e0 = lVar24;
  lStack_2d8 = lVar18;
  lStack_2d0 = lVar14;
  puStack_2c8 = puVar8;
  pppppppuStack_2c0 = &pppppppuStack_270;
  if (uVar15 <= (ulong)(*(long *)(puVar10 + 4) - lVar11 >> 8)) {
    _bzero(lVar11,uVar15 * 0x100);
    lVar11 = lVar11 + uVar15 * 0x100;
    goto LAB_109a9124c;
  }
  puVar8 = puVar10;
  if (param_2 >> 0x38 == 0) {
    uVar16 = *(long *)(puVar10 + 4) - lVar9;
    uVar17 = (long)uVar16 >> 7;
    if (uVar17 <= param_2) {
      uVar17 = param_2;
    }
    if (0x7ffffffffffffeff < uVar16) {
      uVar17 = 0xffffffffffffff;
    }
    if (uVar17 >> 0x38 == 0) {
      lVar18 = uVar17 << 8;
      __Znwm();
      lVar19 = lVar18 + lVar19;
      _bzero(lVar19,uVar15 * 0x100);
      lVar27 = lVar19 + uVar20 * -0x100;
      lVar14 = lVar27;
      for (lVar24 = lVar9; lVar24 != lVar11; lVar24 = lVar24 + 0x100) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar14 + lVar21) = *(undefined4 *)(lVar24 + lVar21);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x100);
        lVar14 = lVar14 + 0x100;
      }
      *(long *)puVar10 = lVar27;
      *(ulong *)(puVar10 + 2) = lVar19 + uVar15 * 0x100;
      *(ulong *)(puVar10 + 4) = lVar18 + uVar17 * 0x100;
      lVar14 = lVar9;
      if (lVar9 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3fc();
  }
  func_0x000104c4f740();
  uStack_308 = 0x109a91270;
  lVar14 = *(long *)puVar8;
  lVar24 = *(long *)(puVar8 + 2);
  puVar25 = (undefined8 *)(lVar24 - lVar14);
  uVar16 = (long)puVar25 >> 9;
  if (uVar16 < param_2) {
    uVar26 = param_2 - uVar16;
    uStack_350 = uVar28;
    uStack_348 = uVar17;
    uStack_340 = uVar20;
    uStack_338 = uVar15;
    lStack_330 = lVar19;
    lStack_328 = lVar11;
    lStack_320 = lVar9;
    puStack_318 = puVar10;
    pppppppuStack_310 = &pppppppuStack_2c0;
    if ((ulong)(*(long *)(puVar8 + 4) - lVar24 >> 9) < uVar26) {
      puVar10 = puVar8;
      if (param_2 >> 0x37 == 0) {
        uVar20 = *(long *)(puVar8 + 4) - lVar14;
        uVar17 = (long)uVar20 >> 8;
        if (uVar17 <= param_2) {
          uVar17 = param_2;
        }
        if (0x7ffffffffffffdff < uVar20) {
          uVar17 = 0x7fffffffffffff;
        }
        if (uVar17 >> 0x37 == 0) {
          lVar9 = uVar17 << 9;
          __Znwm();
          lVar11 = lVar9 + (long)puVar25;
          _bzero(lVar11,uVar26 * 0x200);
          lVar27 = lVar11 + uVar16 * -0x200;
          lVar19 = lVar27;
          for (lVar18 = lVar14; lVar18 != lVar24; lVar18 = lVar18 + 0x200) {
            lVar21 = 0;
            do {
              *(undefined4 *)(lVar19 + lVar21) = *(undefined4 *)(lVar18 + lVar21);
              lVar21 = lVar21 + 4;
            } while (lVar21 != 0x200);
            lVar19 = lVar19 + 0x200;
          }
          *(long *)puVar8 = lVar27;
          *(ulong *)(puVar8 + 2) = lVar11 + uVar26 * 0x200;
          *(ulong *)(puVar8 + 4) = lVar9 + uVar17 * 0x200;
          if (lVar14 == 0) {
            return;
          }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(lVar14);
          return;
        }
      }
      else {
        func_0x000109a9c410();
      }
      func_0x000104c4f740();
      pcStack_358 = FUN_109a913ac;
      puStack_380 = puVar25;
      lStack_378 = lVar24;
      lStack_370 = lVar14;
      puStack_368 = puVar8;
      pppppppuStack_360 = &pppppppuStack_310;
      if ((*puVar10 & 0x1f0000) == 0x10000) {
        if ((*puVar10 >> 0x1e & 1) == 0) {
          lVar24 = *(long *)(puVar10 + 2);
          piVar13 = *(int **)(lVar24 + 0x40);
          iVar1 = *piVar13;
          if (-iVar1 != 0) {
            if ((*(char *)(lVar24 + 1) < '\0') ||
               (lVar14 = **(long **)(lVar24 + 0x48),
               *(ulong *)(lVar24 + 0x28) < *(ulong *)(lVar24 + 0x10))) {
              FUN_109a859f0(lVar24,0);
              piVar13 = *(int **)(lVar24 + 0x40);
              lVar14 = **(long **)(lVar24 + 0x48);
            }
            *piVar13 = 0;
            *(long *)(lVar24 + 0x20) = *(long *)(lVar24 + 0x20) + lVar14 * -iVar1;
          }
          return;
        }
        puVar12 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        puStack_380 = (undefined8 *)(puVar12 + 1);
        *puStack_380 = 0x6953646578696621;
        lStack_378 = 0xc;
        *(undefined1 *)(puVar12 + 4) = 0;
        puVar12[3] = 0x2928657a;
        FUN_109ac3188(0xffffff29,&puStack_380,&UNK_10f59845f,&UNK_10f597913,0xa54);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109a9145c);
        (*pcVar5)();
      }
      if ((*puVar10 >> 0x1e & 1) == 0) {
        uVar3 = *puVar10 >> 0x10 & 0x1f;
        if (uVar3 < 7) {
          if (uVar3 < 3) {
            if (uVar3 == 0) {
              return;
            }
            if (uVar3 == 1) {
              lVar24 = *(long *)(puVar10 + 2);
              if (*(long *)(lVar24 + 0x38) != 0) {
                piVar13 = (int *)(*(long *)(lVar24 + 0x38) + 0x14);
                do {
                  iVar1 = *piVar13;
                  cVar2 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                  if (bVar6) {
                    *piVar13 = iVar1 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar1 + -1 == 0) {
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
              lVar14 = 0;
              lVar18 = *(long *)(lVar24 + 0x40);
              do {
                *(undefined4 *)(lVar18 + lVar14 * 4) = 0;
                lVar14 = lVar14 + 1;
              } while (lVar14 < *(int *)(lVar24 + 4));
              return;
            }
          }
          else {
            if (uVar3 == 3) {
              puStack_390 = (undefined8 *)0x0;
              FUN_109a8ee3c();
              return;
            }
            if (uVar3 == 4) {
              plVar7 = *(long **)(puVar10 + 2);
              plVar22 = (long *)*plVar7;
              plVar23 = (long *)plVar7[1];
              while (plVar4 = plVar23, plVar4 != plVar22) {
                plVar23 = plVar4 + -3;
                if (*plVar23 != 0) {
                  plVar4[-2] = *plVar23;
                  __ZdlPv();
                }
              }
              plVar7[1] = (long)plVar22;
              return;
            }
            if (uVar3 == 5) {
              plVar22 = *(long **)(puVar10 + 2);
              lVar24 = *plVar22;
              lVar14 = plVar22[1];
              while (lVar14 != lVar24) {
                lVar14 = lVar14 + -0x60;
                FUN_109370334(lVar14);
              }
              plVar22[1] = lVar24;
              return;
            }
          }
        }
        else {
          if (uVar3 < 10) {
            return;
          }
          if (uVar3 == 10) {
            lVar24 = *(long *)(puVar10 + 2);
            if (*(long *)(lVar24 + 0x20) != 0) {
              piVar13 = (int *)(*(long *)(lVar24 + 0x20) + 0x10);
              do {
                iVar1 = *piVar13;
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                if (bVar6) {
                  *piVar13 = iVar1 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar1 + -1 == 0) {
                (**(code **)(**(long **)(*(long *)(lVar24 + 0x20) + 8) + 0x20))();
                *(undefined8 *)(lVar24 + 0x20) = 0;
              }
            }
            if (0 < *(int *)(lVar24 + 4)) {
              lVar14 = 0;
              lVar18 = *(long *)(lVar24 + 0x30);
              do {
                *(undefined4 *)(lVar18 + lVar14 * 4) = 0;
                lVar14 = lVar14 + 1;
              } while (lVar14 < *(int *)(lVar24 + 4));
            }
            *(undefined8 *)(lVar24 + 0x20) = 0;
            return;
          }
          if (uVar3 == 0xb) {
            plVar22 = *(long **)(puVar10 + 2);
            lVar24 = *plVar22;
            lVar14 = plVar22[1];
            while (lVar14 != lVar24) {
              lVar14 = lVar14 + -0x50;
              FUN_109ac5638();
            }
            plVar22[1] = lVar24;
            return;
          }
          if (uVar3 == 0xd) {
            (*(undefined8 **)(puVar10 + 2))[1] = **(undefined8 **)(puVar10 + 2);
            return;
          }
        }
        puVar12 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        puStack_390 = (undefined8 *)(puVar12 + 1);
        uStack_388 = 0x1e;
        *(undefined1 *)((long)puVar12 + 0x22) = 0;
        *(undefined8 *)(puVar12 + 3) = 0x726f707075736e75;
        *(undefined8 *)(puVar12 + 1) = 0x2f6e776f6e6b6e55;
        *(undefined8 *)((long)puVar12 + 0x1a) = 0x6570797420796172;
        *(undefined8 *)((long)puVar12 + 0x12) = 0x726120646574726f;
        FUN_109ac3188(0xffffff2b,&puStack_390,&DAT_10f598457,&UNK_10f597913,0xa4b);
      }
      else {
        puVar12 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        puStack_390 = (undefined8 *)(puVar12 + 1);
        *puStack_390 = 0x6953646578696621;
        uStack_388 = 0xc;
        *(undefined1 *)(puVar12 + 4) = 0;
        puVar12[3] = 0x2928657a;
        FUN_109ac3188(0xffffff29,&puStack_390,&DAT_10f598457,&UNK_10f597913,0xa0a);
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
      (*pcVar5)();
    }
    _bzero(lVar24,uVar26 * 0x200);
    lVar24 = lVar24 + uVar26 * 0x200;
  }
  else {
    if (uVar16 <= param_2) {
      return;
    }
    lVar24 = lVar14 + param_2 * 0x200;
  }
  *(long *)(puVar8 + 2) = lVar24;
  return;
}



/* Entry: 109a90718; end: 109a9085f;  */

/* WARNING: Removing unreachable block (ram,0x000109a85ec0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109a90718(uint *param_1,ulong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  undefined4 *puVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar28;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined8 *puStack_310;
  long lStack_308;
  long lStack_300;
  uint *puStack_2f8;
  undefined8 *******pppppppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  uint *puStack_2a8;
  undefined8 *******pppppppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  uint *puStack_258;
  undefined1 *******pppppppuStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  uint *puStack_208;
  undefined1 ******ppppppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  uint *puStack_1b8;
  undefined1 *****pppppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  uint *puStack_168;
  undefined1 ****ppppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  uint *puStack_118;
  undefined1 ***pppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_70;
  code *pcStack_68;
  uint *puStack_58;
  long lStack_50;
  long lStack_48;
  uint *puStack_40;
  uint *puStack_38;
  
  lVar20 = *(long *)param_1;
  lVar24 = *(long *)(param_1 + 2);
  uVar16 = lVar24 - lVar20 >> 4;
  if (param_2 <= uVar16) {
    if (uVar16 <= param_2) {
      return;
    }
    lVar24 = lVar20 + param_2 * 0x10;
LAB_109a9080c:
    *(long *)(param_1 + 2) = lVar24;
    return;
  }
  uVar16 = param_2 - uVar16;
  if (uVar16 <= (ulong)(*(long *)(param_1 + 4) - lVar24 >> 4)) {
    _bzero(lVar24,uVar16 * 0x10);
    lVar24 = lVar24 + uVar16 * 0x10;
    goto LAB_109a9080c;
  }
  if (param_2 >> 0x3c == 0) {
    uVar14 = *(long *)(param_1 + 4) - lVar20;
    uVar17 = (long)uVar14 >> 3;
    if (uVar17 <= param_2) {
      uVar17 = param_2;
    }
    if (0x7fffffffffffffef < uVar14) {
      uVar17 = 0xfffffffffffffff;
    }
    puVar9 = param_1;
    puStack_38 = param_1;
    FUN_1092e8fac();
    lVar24 = (long)puVar9 + (lVar24 - lVar20);
    puStack_40 = puVar9 + uVar17 * 4;
    puStack_58 = puVar9;
    lStack_50 = lVar24;
    _bzero(lVar24,uVar16 * 0x10);
    lStack_48 = lVar24 + uVar16 * 0x10;
    FUN_1092e8f14(param_1,&puStack_58);
    if (lStack_48 != lStack_50) {
      lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 0xfU & 0xfffffffffffffff0);
    }
    if (puStack_58 == (uint *)0x0) {
      return;
    }
    __ZdlPv();
    return;
  }
  FUN_1092e8f98();
  if (lStack_48 != lStack_50) {
    lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 0xfU & 0xfffffffffffffff0);
  }
  if (puStack_58 != (uint *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_68 = FUN_109a90860;
  lVar20 = *(long *)param_1;
  lVar24 = *(long *)(param_1 + 2);
  lVar18 = lVar24 - lVar20 >> 3;
  bVar6 = (ulong)(lVar18 * -0x5555555555555555) <= param_2;
  uVar16 = param_2 + lVar18 * 0x5555555555555555;
  if (!bVar6 || uVar16 == 0) {
    if (bVar6) {
      return;
    }
    lVar24 = lVar20 + param_2 * 0x18;
LAB_109a909e4:
    *(long *)(param_1 + 2) = lVar24;
    return;
  }
  puStack_70 = &stack0xfffffffffffffff0;
  if (uVar16 <= (ulong)((*(long *)(param_1 + 4) - lVar24 >> 3) * -0x5555555555555555)) {
    lVar20 = ((uVar16 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar24,lVar20);
    lVar24 = lVar24 + lVar20;
    goto LAB_109a909e4;
  }
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar18 = *(long *)(param_1 + 4) - lVar20 >> 3;
    unaff_x26 = 0xaaaaaaaaaaaaaaab;
    uVar17 = lVar18 * 0x5555555555555556;
    if (uVar17 < param_2 || uVar17 - param_2 == 0) {
      uVar17 = param_2;
    }
    if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
      uVar17 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar17 < 0xaaaaaaaaaaaaaab) {
      lVar8 = uVar17 * 0x18;
      __Znwm();
      lVar11 = lVar8 + (lVar24 - lVar20);
      lVar27 = ((uVar16 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar11,lVar27);
      lVar19 = lVar8;
      for (lVar18 = lVar20; lVar18 != lVar24; lVar18 = lVar18 + 0x18) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar19 + lVar21) = *(undefined4 *)(lVar18 + lVar21);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x18);
        lVar19 = lVar19 + 0x18;
      }
      *(long *)param_1 = lVar8;
      *(long *)(param_1 + 2) = lVar11 + lVar27;
      *(ulong *)(param_1 + 4) = lVar8 + uVar17 * 0x18;
      if (lVar20 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c384();
  }
  func_0x000104c4f740();
  uStack_b8 = 0x109a90a08;
  lVar20 = *(long *)param_1;
  lVar18 = *(long *)(param_1 + 2);
  lVar24 = lVar18 - lVar20;
  uVar16 = lVar24 >> 5;
  if (param_2 <= uVar16) {
    if (uVar16 <= param_2) {
      return;
    }
    lVar18 = lVar20 + param_2 * 0x20;
LAB_109a90b20:
    *(long *)(param_1 + 2) = lVar18;
    return;
  }
  uVar17 = param_2 - uVar16;
  uStack_100 = unaff_x26;
  ppuStack_c0 = &puStack_70;
  if (uVar17 <= (ulong)(*(long *)(param_1 + 4) - lVar18 >> 5)) {
    _bzero(lVar18,uVar17 * 0x20);
    lVar18 = lVar18 + uVar17 * 0x20;
    goto LAB_109a90b20;
  }
  puVar9 = param_1;
  if (param_2 >> 0x3b == 0) {
    uVar14 = *(long *)(param_1 + 4) - lVar20;
    unaff_x25 = (long)uVar14 >> 4;
    if (unaff_x25 <= param_2) {
      unaff_x25 = param_2;
    }
    if (0x7fffffffffffffdf < uVar14) {
      unaff_x25 = 0x7ffffffffffffff;
    }
    if (unaff_x25 >> 0x3b == 0) {
      lVar8 = unaff_x25 << 5;
      __Znwm();
      lVar24 = lVar8 + lVar24;
      _bzero(lVar24,uVar17 * 0x20);
      lVar27 = lVar24 + uVar16 * -0x20;
      lVar11 = lVar27;
      for (lVar19 = lVar20; lVar19 != lVar18; lVar19 = lVar19 + 0x20) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar11 + lVar21) = *(undefined4 *)(lVar19 + lVar21);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x20);
        lVar11 = lVar11 + 0x20;
      }
      *(long *)param_1 = lVar27;
      *(ulong *)(param_1 + 2) = lVar24 + uVar17 * 0x20;
      *(ulong *)(param_1 + 4) = lVar8 + unaff_x25 * 0x20;
      if (lVar20 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c398();
  }
  func_0x000104c4f740();
  uStack_108 = 0x109a90b44;
  lVar11 = *(long *)puVar9;
  lVar19 = *(long *)(puVar9 + 2);
  lVar8 = lVar19 - lVar11;
  bVar6 = (ulong)((lVar8 >> 2) * -0x71c71c71c71c71c7) <= param_2;
  uVar14 = param_2 + (lVar8 >> 2) * 0x71c71c71c71c71c7;
  if (!bVar6 || uVar14 == 0) {
    if (bVar6) {
      return;
    }
    lVar19 = lVar11 + param_2 * 0x24;
LAB_109a90cf0:
    *(long *)(puVar9 + 2) = lVar19;
    return;
  }
  uStack_150 = unaff_x26;
  uStack_148 = unaff_x25;
  uStack_140 = uVar16;
  uStack_138 = uVar17;
  lStack_130 = lVar24;
  lStack_128 = lVar18;
  lStack_120 = lVar20;
  puStack_118 = param_1;
  pppuStack_110 = &ppuStack_c0;
  if (uVar14 <= (ulong)((*(long *)(puVar9 + 4) - lVar19 >> 2) * -0x71c71c71c71c71c7)) {
    lVar24 = ((uVar14 * 0x24 - 0x24) / 0x24) * 0x24 + 0x24;
    _bzero(lVar19,lVar24);
    lVar19 = lVar19 + lVar24;
    goto LAB_109a90cf0;
  }
  puVar10 = puVar9;
  if (param_2 < 0x71c71c71c71c71d) {
    lVar20 = *(long *)(puVar9 + 4) - lVar11 >> 2;
    uVar16 = lVar20 * 0x1c71c71c71c71c72;
    if (uVar16 < param_2 || uVar16 - param_2 == 0) {
      uVar16 = param_2;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar20 * -0x71c71c71c71c71c7)) {
      uVar16 = 0x71c71c71c71c71c;
    }
    if (uVar16 < 0x71c71c71c71c71d) {
      lVar18 = uVar16 * 0x24;
      __Znwm();
      lVar27 = ((uVar14 * 0x24 - 0x24) / 0x24) * 0x24 + 0x24;
      _bzero(lVar18 + lVar8,lVar27);
      lVar20 = lVar18;
      for (lVar24 = lVar11; lVar24 != lVar19; lVar24 = lVar24 + 0x24) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar20 + lVar21) = *(undefined4 *)(lVar24 + lVar21);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x24);
        lVar20 = lVar20 + 0x24;
      }
      *(long *)puVar9 = lVar18;
      *(long *)(puVar9 + 2) = lVar18 + lVar8 + lVar27;
      *(ulong *)(puVar9 + 4) = lVar18 + uVar16 * 0x24;
      lVar20 = lVar11;
      if (lVar11 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3ac();
  }
  func_0x000104c4f740();
  uStack_158 = 0x109a90d14;
  lVar20 = *(long *)puVar10;
  lVar18 = *(long *)(puVar10 + 2);
  lVar27 = lVar18 - lVar20;
  bVar6 = (ulong)((lVar27 >> 4) * -0x5555555555555555) <= param_2;
  uVar16 = param_2 + (lVar27 >> 4) * 0x5555555555555555;
  if (!bVar6 || uVar16 == 0) {
    if (bVar6) {
      return;
    }
    lVar18 = lVar20 + param_2 * 0x30;
LAB_109a90e98:
    *(long *)(puVar10 + 2) = lVar18;
    return;
  }
  uStack_1a0 = unaff_x26;
  uStack_198 = unaff_x25;
  uStack_190 = uVar14;
  lStack_188 = lVar8;
  lStack_180 = lVar24;
  lStack_178 = lVar11;
  lStack_170 = lVar19;
  puStack_168 = puVar9;
  ppppuStack_160 = &pppuStack_110;
  if (uVar16 <= (ulong)((*(long *)(puVar10 + 4) - lVar18 >> 4) * -0x5555555555555555)) {
    lVar24 = ((uVar16 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
    _bzero(lVar18,lVar24);
    lVar18 = lVar18 + lVar24;
    goto LAB_109a90e98;
  }
  puVar9 = puVar10;
  if (param_2 < 0x555555555555556) {
    lVar19 = *(long *)(puVar10 + 4) - lVar20 >> 4;
    uVar17 = lVar19 * 0x5555555555555556;
    if (uVar17 < param_2 || uVar17 - param_2 == 0) {
      uVar17 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar19 * -0x5555555555555555)) {
      uVar17 = 0x555555555555555;
    }
    uVar28 = 0xaaaaaaaaaaaaaaab;
    if (uVar17 < 0x555555555555556) {
      lVar11 = uVar17 * 0x30;
      __Znwm();
      lVar8 = ((uVar16 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
      _bzero(lVar11 + lVar27,lVar8);
      lVar19 = lVar11;
      for (lVar24 = lVar20; lVar24 != lVar18; lVar24 = lVar24 + 0x30) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar19 + lVar21) = *(undefined4 *)(lVar24 + lVar21);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x30);
        lVar19 = lVar19 + 0x30;
      }
      *(long *)puVar10 = lVar11;
      *(long *)(puVar10 + 2) = lVar11 + lVar27 + lVar8;
      *(ulong *)(puVar10 + 4) = lVar11 + uVar17 * 0x30;
      if (lVar20 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3c0();
    uVar28 = unaff_x26;
  }
  func_0x000104c4f740();
  uStack_1a8 = 0x109a90ebc;
  lVar8 = *(long *)puVar9;
  lVar11 = *(long *)(puVar9 + 2);
  lVar19 = lVar11 - lVar8;
  uVar17 = lVar19 >> 6;
  if (param_2 <= uVar17) {
    if (uVar17 <= param_2) {
      return;
    }
    lVar11 = lVar8 + param_2 * 0x40;
LAB_109a90fd4:
    *(long *)(puVar9 + 2) = lVar11;
    return;
  }
  uVar14 = param_2 - uVar17;
  uStack_1f0 = uVar28;
  uStack_1e8 = unaff_x25;
  uStack_1e0 = uVar16;
  lStack_1d8 = lVar27;
  lStack_1d0 = lVar24;
  lStack_1c8 = lVar20;
  lStack_1c0 = lVar18;
  puStack_1b8 = puVar10;
  pppppuStack_1b0 = &ppppuStack_160;
  if (uVar14 <= (ulong)(*(long *)(puVar9 + 4) - lVar11 >> 6)) {
    _bzero(lVar11,uVar14 * 0x40);
    lVar11 = lVar11 + uVar14 * 0x40;
    goto LAB_109a90fd4;
  }
  puVar10 = puVar9;
  if (param_2 >> 0x3a == 0) {
    uVar15 = *(long *)(puVar9 + 4) - lVar8;
    uVar16 = (long)uVar15 >> 5;
    if (uVar16 <= param_2) {
      uVar16 = param_2;
    }
    if (0x7fffffffffffffbf < uVar15) {
      uVar16 = 0x3ffffffffffffff;
    }
    if (uVar16 >> 0x3a == 0) {
      lVar18 = uVar16 << 6;
      __Znwm();
      lVar19 = lVar18 + lVar19;
      _bzero(lVar19,uVar14 * 0x40);
      lVar27 = lVar19 + uVar17 * -0x40;
      lVar20 = lVar27;
      for (lVar24 = lVar8; lVar24 != lVar11; lVar24 = lVar24 + 0x40) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar20 + lVar21) = *(undefined4 *)(lVar24 + lVar21);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x40);
        lVar20 = lVar20 + 0x40;
      }
      *(long *)puVar9 = lVar27;
      *(ulong *)(puVar9 + 2) = lVar19 + uVar14 * 0x40;
      *(ulong *)(puVar9 + 4) = lVar18 + uVar16 * 0x40;
      lVar20 = lVar8;
      if (lVar8 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3d4();
    uVar16 = unaff_x25;
  }
  func_0x000104c4f740();
  uStack_1f8 = 0x109a90ff8;
  lVar20 = *(long *)puVar10;
  lVar18 = *(long *)(puVar10 + 2);
  lVar24 = lVar18 - lVar20;
  uVar15 = lVar24 >> 7;
  if (param_2 <= uVar15) {
    if (uVar15 <= param_2) {
      return;
    }
    lVar18 = lVar20 + param_2 * 0x80;
LAB_109a91110:
    *(long *)(puVar10 + 2) = lVar18;
    return;
  }
  uVar26 = param_2 - uVar15;
  uStack_240 = uVar28;
  uStack_238 = uVar16;
  uStack_230 = uVar17;
  uStack_228 = uVar14;
  lStack_220 = lVar19;
  lStack_218 = lVar11;
  lStack_210 = lVar8;
  puStack_208 = puVar9;
  ppppppuStack_200 = &pppppuStack_1b0;
  if (uVar26 <= (ulong)(*(long *)(puVar10 + 4) - lVar18 >> 7)) {
    _bzero(lVar18,uVar26 * 0x80);
    lVar18 = lVar18 + uVar26 * 0x80;
    goto LAB_109a91110;
  }
  puVar9 = puVar10;
  if (param_2 >> 0x39 == 0) {
    uVar17 = *(long *)(puVar10 + 4) - lVar20;
    uVar16 = (long)uVar17 >> 6;
    if (uVar16 <= param_2) {
      uVar16 = param_2;
    }
    if (0x7fffffffffffff7f < uVar17) {
      uVar16 = 0x1ffffffffffffff;
    }
    if (uVar16 >> 0x39 == 0) {
      lVar8 = uVar16 << 7;
      __Znwm();
      lVar24 = lVar8 + lVar24;
      _bzero(lVar24,uVar26 * 0x80);
      lVar27 = lVar24 + uVar15 * -0x80;
      lVar11 = lVar27;
      for (lVar19 = lVar20; lVar19 != lVar18; lVar19 = lVar19 + 0x80) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar11 + lVar21) = *(undefined4 *)(lVar19 + lVar21);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x80);
        lVar11 = lVar11 + 0x80;
      }
      *(long *)puVar10 = lVar27;
      *(ulong *)(puVar10 + 2) = lVar24 + uVar26 * 0x80;
      *(ulong *)(puVar10 + 4) = lVar8 + uVar16 * 0x80;
      if (lVar20 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3e8();
  }
  func_0x000104c4f740();
  uStack_248 = 0x109a91134;
  lVar8 = *(long *)puVar9;
  lVar11 = *(long *)(puVar9 + 2);
  lVar19 = lVar11 - lVar8;
  uVar17 = lVar19 >> 8;
  if (param_2 <= uVar17) {
    if (uVar17 <= param_2) {
      return;
    }
    lVar11 = lVar8 + param_2 * 0x100;
LAB_109a9124c:
    *(long *)(puVar9 + 2) = lVar11;
    return;
  }
  uVar14 = param_2 - uVar17;
  uStack_290 = uVar28;
  uStack_288 = uVar16;
  uStack_280 = uVar15;
  uStack_278 = uVar26;
  lStack_270 = lVar24;
  lStack_268 = lVar18;
  lStack_260 = lVar20;
  puStack_258 = puVar10;
  pppppppuStack_250 = &ppppppuStack_200;
  if (uVar14 <= (ulong)(*(long *)(puVar9 + 4) - lVar11 >> 8)) {
    _bzero(lVar11,uVar14 * 0x100);
    lVar11 = lVar11 + uVar14 * 0x100;
    goto LAB_109a9124c;
  }
  puVar10 = puVar9;
  if (param_2 >> 0x38 == 0) {
    uVar15 = *(long *)(puVar9 + 4) - lVar8;
    uVar16 = (long)uVar15 >> 7;
    if (uVar16 <= param_2) {
      uVar16 = param_2;
    }
    if (0x7ffffffffffffeff < uVar15) {
      uVar16 = 0xffffffffffffff;
    }
    if (uVar16 >> 0x38 == 0) {
      lVar18 = uVar16 << 8;
      __Znwm();
      lVar19 = lVar18 + lVar19;
      _bzero(lVar19,uVar14 * 0x100);
      lVar27 = lVar19 + uVar17 * -0x100;
      lVar20 = lVar27;
      for (lVar24 = lVar8; lVar24 != lVar11; lVar24 = lVar24 + 0x100) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar20 + lVar21) = *(undefined4 *)(lVar24 + lVar21);
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x100);
        lVar20 = lVar20 + 0x100;
      }
      *(long *)puVar9 = lVar27;
      *(ulong *)(puVar9 + 2) = lVar19 + uVar14 * 0x100;
      *(ulong *)(puVar9 + 4) = lVar18 + uVar16 * 0x100;
      lVar20 = lVar8;
      if (lVar8 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3fc();
  }
  func_0x000104c4f740();
  uStack_298 = 0x109a91270;
  lVar20 = *(long *)puVar10;
  lVar24 = *(long *)(puVar10 + 2);
  puVar25 = (undefined8 *)(lVar24 - lVar20);
  uVar15 = (long)puVar25 >> 9;
  if (uVar15 < param_2) {
    uVar26 = param_2 - uVar15;
    uStack_2e0 = uVar28;
    uStack_2d8 = uVar16;
    uStack_2d0 = uVar17;
    uStack_2c8 = uVar14;
    lStack_2c0 = lVar19;
    lStack_2b8 = lVar11;
    lStack_2b0 = lVar8;
    puStack_2a8 = puVar9;
    pppppppuStack_2a0 = &pppppppuStack_250;
    if ((ulong)(*(long *)(puVar10 + 4) - lVar24 >> 9) < uVar26) {
      puVar9 = puVar10;
      if (param_2 >> 0x37 == 0) {
        uVar17 = *(long *)(puVar10 + 4) - lVar20;
        uVar16 = (long)uVar17 >> 8;
        if (uVar16 <= param_2) {
          uVar16 = param_2;
        }
        if (0x7ffffffffffffdff < uVar17) {
          uVar16 = 0x7fffffffffffff;
        }
        if (uVar16 >> 0x37 == 0) {
          lVar8 = uVar16 << 9;
          __Znwm();
          lVar11 = lVar8 + (long)puVar25;
          _bzero(lVar11,uVar26 * 0x200);
          lVar27 = lVar11 + uVar15 * -0x200;
          lVar19 = lVar27;
          for (lVar18 = lVar20; lVar18 != lVar24; lVar18 = lVar18 + 0x200) {
            lVar21 = 0;
            do {
              *(undefined4 *)(lVar19 + lVar21) = *(undefined4 *)(lVar18 + lVar21);
              lVar21 = lVar21 + 4;
            } while (lVar21 != 0x200);
            lVar19 = lVar19 + 0x200;
          }
          *(long *)puVar10 = lVar27;
          *(ulong *)(puVar10 + 2) = lVar11 + uVar26 * 0x200;
          *(ulong *)(puVar10 + 4) = lVar8 + uVar16 * 0x200;
          if (lVar20 == 0) {
            return;
          }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(lVar20);
          return;
        }
      }
      else {
        func_0x000109a9c410();
      }
      func_0x000104c4f740();
      pcStack_2e8 = FUN_109a913ac;
      puStack_310 = puVar25;
      lStack_308 = lVar24;
      lStack_300 = lVar20;
      puStack_2f8 = puVar10;
      pppppppuStack_2f0 = &pppppppuStack_2a0;
      if ((*puVar9 & 0x1f0000) == 0x10000) {
        if ((*puVar9 >> 0x1e & 1) == 0) {
          lVar24 = *(long *)(puVar9 + 2);
          piVar13 = *(int **)(lVar24 + 0x40);
          iVar1 = *piVar13;
          if (-iVar1 != 0) {
            if ((*(char *)(lVar24 + 1) < '\0') ||
               (lVar20 = **(long **)(lVar24 + 0x48),
               *(ulong *)(lVar24 + 0x28) < *(ulong *)(lVar24 + 0x10))) {
              FUN_109a859f0(lVar24,0);
              piVar13 = *(int **)(lVar24 + 0x40);
              lVar20 = **(long **)(lVar24 + 0x48);
            }
            *piVar13 = 0;
            *(long *)(lVar24 + 0x20) = *(long *)(lVar24 + 0x20) + lVar20 * -iVar1;
          }
          return;
        }
        puVar12 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        puStack_310 = (undefined8 *)(puVar12 + 1);
        *puStack_310 = 0x6953646578696621;
        lStack_308 = 0xc;
        *(undefined1 *)(puVar12 + 4) = 0;
        puVar12[3] = 0x2928657a;
        FUN_109ac3188(0xffffff29,&puStack_310,&UNK_10f59845f,&UNK_10f597913,0xa54);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109a9145c);
        (*pcVar5)();
      }
      if ((*puVar9 >> 0x1e & 1) == 0) {
        uVar3 = *puVar9 >> 0x10 & 0x1f;
        if (uVar3 < 7) {
          if (uVar3 < 3) {
            if (uVar3 == 0) {
              return;
            }
            if (uVar3 == 1) {
              lVar24 = *(long *)(puVar9 + 2);
              if (*(long *)(lVar24 + 0x38) != 0) {
                piVar13 = (int *)(*(long *)(lVar24 + 0x38) + 0x14);
                do {
                  iVar1 = *piVar13;
                  cVar2 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                  if (bVar6) {
                    *piVar13 = iVar1 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar1 + -1 == 0) {
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
              lVar20 = 0;
              lVar18 = *(long *)(lVar24 + 0x40);
              do {
                *(undefined4 *)(lVar18 + lVar20 * 4) = 0;
                lVar20 = lVar20 + 1;
              } while (lVar20 < *(int *)(lVar24 + 4));
              return;
            }
          }
          else {
            if (uVar3 == 3) {
              puStack_320 = (undefined8 *)0x0;
              FUN_109a8ee3c();
              return;
            }
            if (uVar3 == 4) {
              plVar7 = *(long **)(puVar9 + 2);
              plVar22 = (long *)*plVar7;
              plVar23 = (long *)plVar7[1];
              while (plVar4 = plVar23, plVar4 != plVar22) {
                plVar23 = plVar4 + -3;
                if (*plVar23 != 0) {
                  plVar4[-2] = *plVar23;
                  __ZdlPv();
                }
              }
              plVar7[1] = (long)plVar22;
              return;
            }
            if (uVar3 == 5) {
              plVar22 = *(long **)(puVar9 + 2);
              lVar24 = *plVar22;
              lVar20 = plVar22[1];
              while (lVar20 != lVar24) {
                lVar20 = lVar20 + -0x60;
                FUN_109370334(lVar20);
              }
              plVar22[1] = lVar24;
              return;
            }
          }
        }
        else {
          if (uVar3 < 10) {
            return;
          }
          if (uVar3 == 10) {
            lVar24 = *(long *)(puVar9 + 2);
            if (*(long *)(lVar24 + 0x20) != 0) {
              piVar13 = (int *)(*(long *)(lVar24 + 0x20) + 0x10);
              do {
                iVar1 = *piVar13;
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                if (bVar6) {
                  *piVar13 = iVar1 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar1 + -1 == 0) {
                (**(code **)(**(long **)(*(long *)(lVar24 + 0x20) + 8) + 0x20))();
                *(undefined8 *)(lVar24 + 0x20) = 0;
              }
            }
            if (0 < *(int *)(lVar24 + 4)) {
              lVar20 = 0;
              lVar18 = *(long *)(lVar24 + 0x30);
              do {
                *(undefined4 *)(lVar18 + lVar20 * 4) = 0;
                lVar20 = lVar20 + 1;
              } while (lVar20 < *(int *)(lVar24 + 4));
            }
            *(undefined8 *)(lVar24 + 0x20) = 0;
            return;
          }
          if (uVar3 == 0xb) {
            plVar22 = *(long **)(puVar9 + 2);
            lVar24 = *plVar22;
            lVar20 = plVar22[1];
            while (lVar20 != lVar24) {
              lVar20 = lVar20 + -0x50;
              FUN_109ac5638();
            }
            plVar22[1] = lVar24;
            return;
          }
          if (uVar3 == 0xd) {
            (*(undefined8 **)(puVar9 + 2))[1] = **(undefined8 **)(puVar9 + 2);
            return;
          }
        }
        puVar12 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        puStack_320 = (undefined8 *)(puVar12 + 1);
        uStack_318 = 0x1e;
        *(undefined1 *)((long)puVar12 + 0x22) = 0;
        *(undefined8 *)(puVar12 + 3) = 0x726f707075736e75;
        *(undefined8 *)(puVar12 + 1) = 0x2f6e776f6e6b6e55;
        *(undefined8 *)((long)puVar12 + 0x1a) = 0x6570797420796172;
        *(undefined8 *)((long)puVar12 + 0x12) = 0x726120646574726f;
        FUN_109ac3188(0xffffff2b,&puStack_320,&DAT_10f598457,&UNK_10f597913,0xa4b);
      }
      else {
        puVar12 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        puStack_320 = (undefined8 *)(puVar12 + 1);
        *puStack_320 = 0x6953646578696621;
        uStack_318 = 0xc;
        *(undefined1 *)(puVar12 + 4) = 0;
        puVar12[3] = 0x2928657a;
        FUN_109ac3188(0xffffff29,&puStack_320,&DAT_10f598457,&UNK_10f597913,0xa0a);
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
      (*pcVar5)();
    }
    _bzero(lVar24,uVar26 * 0x200);
    lVar24 = lVar24 + uVar26 * 0x200;
  }
  else {
    if (uVar15 <= param_2) {
      return;
    }
    lVar24 = lVar20 + param_2 * 0x200;
  }
  *(long *)(puVar10 + 2) = lVar24;
  return;
}



/* Entry: 109a90860; end: 109a913ab;  */

/* WARNING: Removing unreachable block (ram,0x000109a85ec0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109a90860(uint *param_1,ulong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  undefined4 *puVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar28;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *puStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  uint *puStack_298;
  undefined8 *******pppppppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  uint *puStack_248;
  undefined1 *******pppppppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  uint *puStack_1f8;
  undefined1 ******ppppppuStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  uint *puStack_1a8;
  undefined1 *****pppppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  uint *puStack_158;
  undefined1 ****ppppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  uint *puStack_108;
  undefined1 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  uint *puStack_b8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  lVar19 = *(long *)param_1;
  lVar23 = *(long *)(param_1 + 2);
  lVar16 = lVar23 - lVar19 >> 3;
  bVar6 = (ulong)(lVar16 * -0x5555555555555555) <= param_2;
  uVar27 = param_2 + lVar16 * 0x5555555555555555;
  if (!bVar6 || uVar27 == 0) {
    if (bVar6) {
      return;
    }
    lVar23 = lVar19 + param_2 * 0x18;
LAB_109a909e4:
    *(long *)(param_1 + 2) = lVar23;
    return;
  }
  if (uVar27 <= (ulong)((*(long *)(param_1 + 4) - lVar23 >> 3) * -0x5555555555555555)) {
    lVar19 = ((uVar27 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar23,lVar19);
    lVar23 = lVar23 + lVar19;
    goto LAB_109a909e4;
  }
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar16 = *(long *)(param_1 + 4) - lVar19 >> 3;
    unaff_x26 = 0xaaaaaaaaaaaaaaab;
    uVar18 = lVar16 * 0x5555555555555556;
    if (uVar18 < param_2 || uVar18 - param_2 == 0) {
      uVar18 = param_2;
    }
    if (0x555555555555554 < (ulong)(lVar16 * -0x5555555555555555)) {
      uVar18 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar18 < 0xaaaaaaaaaaaaaab) {
      lVar8 = uVar18 * 0x18;
      __Znwm();
      lVar11 = lVar8 + (lVar23 - lVar19);
      lVar26 = ((uVar27 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar11,lVar26);
      lVar17 = lVar8;
      for (lVar16 = lVar19; lVar16 != lVar23; lVar16 = lVar16 + 0x18) {
        lVar20 = 0;
        do {
          *(undefined4 *)(lVar17 + lVar20) = *(undefined4 *)(lVar16 + lVar20);
          lVar20 = lVar20 + 4;
        } while (lVar20 != 0x18);
        lVar17 = lVar17 + 0x18;
      }
      *(long *)param_1 = lVar8;
      *(long *)(param_1 + 2) = lVar11 + lVar26;
      *(ulong *)(param_1 + 4) = lVar8 + uVar18 * 0x18;
      if (lVar19 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c384();
  }
  func_0x000104c4f740();
  uStack_58 = 0x109a90a08;
  lVar19 = *(long *)param_1;
  lVar16 = *(long *)(param_1 + 2);
  lVar23 = lVar16 - lVar19;
  uVar27 = lVar23 >> 5;
  if (param_2 <= uVar27) {
    if (uVar27 <= param_2) {
      return;
    }
    lVar16 = lVar19 + param_2 * 0x20;
LAB_109a90b20:
    *(long *)(param_1 + 2) = lVar16;
    return;
  }
  uVar18 = param_2 - uVar27;
  uStack_a0 = unaff_x26;
  puStack_60 = &stack0xfffffffffffffff0;
  if (uVar18 <= (ulong)(*(long *)(param_1 + 4) - lVar16 >> 5)) {
    _bzero(lVar16,uVar18 * 0x20);
    lVar16 = lVar16 + uVar18 * 0x20;
    goto LAB_109a90b20;
  }
  puVar9 = param_1;
  if (param_2 >> 0x3b == 0) {
    uVar14 = *(long *)(param_1 + 4) - lVar19;
    unaff_x25 = (long)uVar14 >> 4;
    if (unaff_x25 <= param_2) {
      unaff_x25 = param_2;
    }
    if (0x7fffffffffffffdf < uVar14) {
      unaff_x25 = 0x7ffffffffffffff;
    }
    if (unaff_x25 >> 0x3b == 0) {
      lVar8 = unaff_x25 << 5;
      __Znwm();
      lVar23 = lVar8 + lVar23;
      _bzero(lVar23,uVar18 * 0x20);
      lVar26 = lVar23 + uVar27 * -0x20;
      lVar11 = lVar26;
      for (lVar17 = lVar19; lVar17 != lVar16; lVar17 = lVar17 + 0x20) {
        lVar20 = 0;
        do {
          *(undefined4 *)(lVar11 + lVar20) = *(undefined4 *)(lVar17 + lVar20);
          lVar20 = lVar20 + 4;
        } while (lVar20 != 0x20);
        lVar11 = lVar11 + 0x20;
      }
      *(long *)param_1 = lVar26;
      *(ulong *)(param_1 + 2) = lVar23 + uVar18 * 0x20;
      *(ulong *)(param_1 + 4) = lVar8 + unaff_x25 * 0x20;
      if (lVar19 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c398();
  }
  func_0x000104c4f740();
  uStack_a8 = 0x109a90b44;
  lVar11 = *(long *)puVar9;
  lVar17 = *(long *)(puVar9 + 2);
  lVar8 = lVar17 - lVar11;
  bVar6 = (ulong)((lVar8 >> 2) * -0x71c71c71c71c71c7) <= param_2;
  uVar14 = param_2 + (lVar8 >> 2) * 0x71c71c71c71c71c7;
  if (!bVar6 || uVar14 == 0) {
    if (bVar6) {
      return;
    }
    lVar17 = lVar11 + param_2 * 0x24;
LAB_109a90cf0:
    *(long *)(puVar9 + 2) = lVar17;
    return;
  }
  uStack_f0 = unaff_x26;
  uStack_e8 = unaff_x25;
  uStack_e0 = uVar27;
  uStack_d8 = uVar18;
  lStack_d0 = lVar23;
  lStack_c8 = lVar16;
  lStack_c0 = lVar19;
  puStack_b8 = param_1;
  ppuStack_b0 = &puStack_60;
  if (uVar14 <= (ulong)((*(long *)(puVar9 + 4) - lVar17 >> 2) * -0x71c71c71c71c71c7)) {
    lVar23 = ((uVar14 * 0x24 - 0x24) / 0x24) * 0x24 + 0x24;
    _bzero(lVar17,lVar23);
    lVar17 = lVar17 + lVar23;
    goto LAB_109a90cf0;
  }
  puVar10 = puVar9;
  if (param_2 < 0x71c71c71c71c71d) {
    lVar19 = *(long *)(puVar9 + 4) - lVar11 >> 2;
    uVar27 = lVar19 * 0x1c71c71c71c71c72;
    if (uVar27 < param_2 || uVar27 - param_2 == 0) {
      uVar27 = param_2;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar19 * -0x71c71c71c71c71c7)) {
      uVar27 = 0x71c71c71c71c71c;
    }
    if (uVar27 < 0x71c71c71c71c71d) {
      lVar16 = uVar27 * 0x24;
      __Znwm();
      lVar26 = ((uVar14 * 0x24 - 0x24) / 0x24) * 0x24 + 0x24;
      _bzero(lVar16 + lVar8,lVar26);
      lVar19 = lVar16;
      for (lVar23 = lVar11; lVar23 != lVar17; lVar23 = lVar23 + 0x24) {
        lVar20 = 0;
        do {
          *(undefined4 *)(lVar19 + lVar20) = *(undefined4 *)(lVar23 + lVar20);
          lVar20 = lVar20 + 4;
        } while (lVar20 != 0x24);
        lVar19 = lVar19 + 0x24;
      }
      *(long *)puVar9 = lVar16;
      *(long *)(puVar9 + 2) = lVar16 + lVar8 + lVar26;
      *(ulong *)(puVar9 + 4) = lVar16 + uVar27 * 0x24;
      lVar19 = lVar11;
      if (lVar11 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3ac();
  }
  func_0x000104c4f740();
  uStack_f8 = 0x109a90d14;
  lVar19 = *(long *)puVar10;
  lVar16 = *(long *)(puVar10 + 2);
  lVar26 = lVar16 - lVar19;
  bVar6 = (ulong)((lVar26 >> 4) * -0x5555555555555555) <= param_2;
  uVar27 = param_2 + (lVar26 >> 4) * 0x5555555555555555;
  if (!bVar6 || uVar27 == 0) {
    if (bVar6) {
      return;
    }
    lVar16 = lVar19 + param_2 * 0x30;
LAB_109a90e98:
    *(long *)(puVar10 + 2) = lVar16;
    return;
  }
  uStack_140 = unaff_x26;
  uStack_138 = unaff_x25;
  uStack_130 = uVar14;
  lStack_128 = lVar8;
  lStack_120 = lVar23;
  lStack_118 = lVar11;
  lStack_110 = lVar17;
  puStack_108 = puVar9;
  pppuStack_100 = &ppuStack_b0;
  if (uVar27 <= (ulong)((*(long *)(puVar10 + 4) - lVar16 >> 4) * -0x5555555555555555)) {
    lVar23 = ((uVar27 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
    _bzero(lVar16,lVar23);
    lVar16 = lVar16 + lVar23;
    goto LAB_109a90e98;
  }
  puVar9 = puVar10;
  if (param_2 < 0x555555555555556) {
    lVar17 = *(long *)(puVar10 + 4) - lVar19 >> 4;
    uVar18 = lVar17 * 0x5555555555555556;
    if (uVar18 < param_2 || uVar18 - param_2 == 0) {
      uVar18 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar17 * -0x5555555555555555)) {
      uVar18 = 0x555555555555555;
    }
    uVar28 = 0xaaaaaaaaaaaaaaab;
    if (uVar18 < 0x555555555555556) {
      lVar11 = uVar18 * 0x30;
      __Znwm();
      lVar8 = ((uVar27 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
      _bzero(lVar11 + lVar26,lVar8);
      lVar17 = lVar11;
      for (lVar23 = lVar19; lVar23 != lVar16; lVar23 = lVar23 + 0x30) {
        lVar20 = 0;
        do {
          *(undefined4 *)(lVar17 + lVar20) = *(undefined4 *)(lVar23 + lVar20);
          lVar20 = lVar20 + 4;
        } while (lVar20 != 0x30);
        lVar17 = lVar17 + 0x30;
      }
      *(long *)puVar10 = lVar11;
      *(long *)(puVar10 + 2) = lVar11 + lVar26 + lVar8;
      *(ulong *)(puVar10 + 4) = lVar11 + uVar18 * 0x30;
      if (lVar19 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3c0();
    uVar28 = unaff_x26;
  }
  func_0x000104c4f740();
  uStack_148 = 0x109a90ebc;
  lVar8 = *(long *)puVar9;
  lVar11 = *(long *)(puVar9 + 2);
  lVar17 = lVar11 - lVar8;
  uVar18 = lVar17 >> 6;
  if (param_2 <= uVar18) {
    if (uVar18 <= param_2) {
      return;
    }
    lVar11 = lVar8 + param_2 * 0x40;
LAB_109a90fd4:
    *(long *)(puVar9 + 2) = lVar11;
    return;
  }
  uVar14 = param_2 - uVar18;
  uStack_190 = uVar28;
  uStack_188 = unaff_x25;
  uStack_180 = uVar27;
  lStack_178 = lVar26;
  lStack_170 = lVar23;
  lStack_168 = lVar19;
  lStack_160 = lVar16;
  puStack_158 = puVar10;
  ppppuStack_150 = &pppuStack_100;
  if (uVar14 <= (ulong)(*(long *)(puVar9 + 4) - lVar11 >> 6)) {
    _bzero(lVar11,uVar14 * 0x40);
    lVar11 = lVar11 + uVar14 * 0x40;
    goto LAB_109a90fd4;
  }
  puVar10 = puVar9;
  if (param_2 >> 0x3a == 0) {
    uVar15 = *(long *)(puVar9 + 4) - lVar8;
    uVar27 = (long)uVar15 >> 5;
    if (uVar27 <= param_2) {
      uVar27 = param_2;
    }
    if (0x7fffffffffffffbf < uVar15) {
      uVar27 = 0x3ffffffffffffff;
    }
    if (uVar27 >> 0x3a == 0) {
      lVar16 = uVar27 << 6;
      __Znwm();
      lVar17 = lVar16 + lVar17;
      _bzero(lVar17,uVar14 * 0x40);
      lVar26 = lVar17 + uVar18 * -0x40;
      lVar19 = lVar26;
      for (lVar23 = lVar8; lVar23 != lVar11; lVar23 = lVar23 + 0x40) {
        lVar20 = 0;
        do {
          *(undefined4 *)(lVar19 + lVar20) = *(undefined4 *)(lVar23 + lVar20);
          lVar20 = lVar20 + 4;
        } while (lVar20 != 0x40);
        lVar19 = lVar19 + 0x40;
      }
      *(long *)puVar9 = lVar26;
      *(ulong *)(puVar9 + 2) = lVar17 + uVar14 * 0x40;
      *(ulong *)(puVar9 + 4) = lVar16 + uVar27 * 0x40;
      lVar19 = lVar8;
      if (lVar8 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3d4();
    uVar27 = unaff_x25;
  }
  func_0x000104c4f740();
  uStack_198 = 0x109a90ff8;
  lVar19 = *(long *)puVar10;
  lVar16 = *(long *)(puVar10 + 2);
  lVar23 = lVar16 - lVar19;
  uVar15 = lVar23 >> 7;
  if (param_2 <= uVar15) {
    if (uVar15 <= param_2) {
      return;
    }
    lVar16 = lVar19 + param_2 * 0x80;
LAB_109a91110:
    *(long *)(puVar10 + 2) = lVar16;
    return;
  }
  uVar25 = param_2 - uVar15;
  uStack_1e0 = uVar28;
  uStack_1d8 = uVar27;
  uStack_1d0 = uVar18;
  uStack_1c8 = uVar14;
  lStack_1c0 = lVar17;
  lStack_1b8 = lVar11;
  lStack_1b0 = lVar8;
  puStack_1a8 = puVar9;
  pppppuStack_1a0 = &ppppuStack_150;
  if (uVar25 <= (ulong)(*(long *)(puVar10 + 4) - lVar16 >> 7)) {
    _bzero(lVar16,uVar25 * 0x80);
    lVar16 = lVar16 + uVar25 * 0x80;
    goto LAB_109a91110;
  }
  puVar9 = puVar10;
  if (param_2 >> 0x39 == 0) {
    uVar18 = *(long *)(puVar10 + 4) - lVar19;
    uVar27 = (long)uVar18 >> 6;
    if (uVar27 <= param_2) {
      uVar27 = param_2;
    }
    if (0x7fffffffffffff7f < uVar18) {
      uVar27 = 0x1ffffffffffffff;
    }
    if (uVar27 >> 0x39 == 0) {
      lVar8 = uVar27 << 7;
      __Znwm();
      lVar23 = lVar8 + lVar23;
      _bzero(lVar23,uVar25 * 0x80);
      lVar26 = lVar23 + uVar15 * -0x80;
      lVar11 = lVar26;
      for (lVar17 = lVar19; lVar17 != lVar16; lVar17 = lVar17 + 0x80) {
        lVar20 = 0;
        do {
          *(undefined4 *)(lVar11 + lVar20) = *(undefined4 *)(lVar17 + lVar20);
          lVar20 = lVar20 + 4;
        } while (lVar20 != 0x80);
        lVar11 = lVar11 + 0x80;
      }
      *(long *)puVar10 = lVar26;
      *(ulong *)(puVar10 + 2) = lVar23 + uVar25 * 0x80;
      *(ulong *)(puVar10 + 4) = lVar8 + uVar27 * 0x80;
      if (lVar19 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3e8();
  }
  func_0x000104c4f740();
  uStack_1e8 = 0x109a91134;
  lVar8 = *(long *)puVar9;
  lVar11 = *(long *)(puVar9 + 2);
  lVar17 = lVar11 - lVar8;
  uVar18 = lVar17 >> 8;
  if (param_2 <= uVar18) {
    if (uVar18 <= param_2) {
      return;
    }
    lVar11 = lVar8 + param_2 * 0x100;
LAB_109a9124c:
    *(long *)(puVar9 + 2) = lVar11;
    return;
  }
  uVar14 = param_2 - uVar18;
  uStack_230 = uVar28;
  uStack_228 = uVar27;
  uStack_220 = uVar15;
  uStack_218 = uVar25;
  lStack_210 = lVar23;
  lStack_208 = lVar16;
  lStack_200 = lVar19;
  puStack_1f8 = puVar10;
  ppppppuStack_1f0 = &pppppuStack_1a0;
  if (uVar14 <= (ulong)(*(long *)(puVar9 + 4) - lVar11 >> 8)) {
    _bzero(lVar11,uVar14 * 0x100);
    lVar11 = lVar11 + uVar14 * 0x100;
    goto LAB_109a9124c;
  }
  puVar10 = puVar9;
  if (param_2 >> 0x38 == 0) {
    uVar15 = *(long *)(puVar9 + 4) - lVar8;
    uVar27 = (long)uVar15 >> 7;
    if (uVar27 <= param_2) {
      uVar27 = param_2;
    }
    if (0x7ffffffffffffeff < uVar15) {
      uVar27 = 0xffffffffffffff;
    }
    if (uVar27 >> 0x38 == 0) {
      lVar16 = uVar27 << 8;
      __Znwm();
      lVar17 = lVar16 + lVar17;
      _bzero(lVar17,uVar14 * 0x100);
      lVar26 = lVar17 + uVar18 * -0x100;
      lVar19 = lVar26;
      for (lVar23 = lVar8; lVar23 != lVar11; lVar23 = lVar23 + 0x100) {
        lVar20 = 0;
        do {
          *(undefined4 *)(lVar19 + lVar20) = *(undefined4 *)(lVar23 + lVar20);
          lVar20 = lVar20 + 4;
        } while (lVar20 != 0x100);
        lVar19 = lVar19 + 0x100;
      }
      *(long *)puVar9 = lVar26;
      *(ulong *)(puVar9 + 2) = lVar17 + uVar14 * 0x100;
      *(ulong *)(puVar9 + 4) = lVar16 + uVar27 * 0x100;
      lVar19 = lVar8;
      if (lVar8 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    func_0x000109a9c3fc();
  }
  func_0x000104c4f740();
  uStack_238 = 0x109a91270;
  lVar19 = *(long *)puVar10;
  lVar23 = *(long *)(puVar10 + 2);
  puVar24 = (undefined8 *)(lVar23 - lVar19);
  uVar15 = (long)puVar24 >> 9;
  if (uVar15 < param_2) {
    uVar25 = param_2 - uVar15;
    uStack_280 = uVar28;
    uStack_278 = uVar27;
    uStack_270 = uVar18;
    uStack_268 = uVar14;
    lStack_260 = lVar17;
    lStack_258 = lVar11;
    lStack_250 = lVar8;
    puStack_248 = puVar9;
    pppppppuStack_240 = &ppppppuStack_1f0;
    if ((ulong)(*(long *)(puVar10 + 4) - lVar23 >> 9) < uVar25) {
      puVar9 = puVar10;
      if (param_2 >> 0x37 == 0) {
        uVar18 = *(long *)(puVar10 + 4) - lVar19;
        uVar27 = (long)uVar18 >> 8;
        if (uVar27 <= param_2) {
          uVar27 = param_2;
        }
        if (0x7ffffffffffffdff < uVar18) {
          uVar27 = 0x7fffffffffffff;
        }
        if (uVar27 >> 0x37 == 0) {
          lVar8 = uVar27 << 9;
          __Znwm();
          lVar11 = lVar8 + (long)puVar24;
          _bzero(lVar11,uVar25 * 0x200);
          lVar26 = lVar11 + uVar15 * -0x200;
          lVar17 = lVar26;
          for (lVar16 = lVar19; lVar16 != lVar23; lVar16 = lVar16 + 0x200) {
            lVar20 = 0;
            do {
              *(undefined4 *)(lVar17 + lVar20) = *(undefined4 *)(lVar16 + lVar20);
              lVar20 = lVar20 + 4;
            } while (lVar20 != 0x200);
            lVar17 = lVar17 + 0x200;
          }
          *(long *)puVar10 = lVar26;
          *(ulong *)(puVar10 + 2) = lVar11 + uVar25 * 0x200;
          *(ulong *)(puVar10 + 4) = lVar8 + uVar27 * 0x200;
          if (lVar19 == 0) {
            return;
          }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(lVar19);
          return;
        }
      }
      else {
        func_0x000109a9c410();
      }
      func_0x000104c4f740();
      pcStack_288 = FUN_109a913ac;
      puStack_2b0 = puVar24;
      lStack_2a8 = lVar23;
      lStack_2a0 = lVar19;
      puStack_298 = puVar10;
      pppppppuStack_290 = &pppppppuStack_240;
      if ((*puVar9 & 0x1f0000) == 0x10000) {
        if ((*puVar9 >> 0x1e & 1) == 0) {
          lVar23 = *(long *)(puVar9 + 2);
          piVar13 = *(int **)(lVar23 + 0x40);
          iVar1 = *piVar13;
          if (-iVar1 != 0) {
            if ((*(char *)(lVar23 + 1) < '\0') ||
               (lVar19 = **(long **)(lVar23 + 0x48),
               *(ulong *)(lVar23 + 0x28) < *(ulong *)(lVar23 + 0x10))) {
              FUN_109a859f0(lVar23,0);
              piVar13 = *(int **)(lVar23 + 0x40);
              lVar19 = **(long **)(lVar23 + 0x48);
            }
            *piVar13 = 0;
            *(long *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + lVar19 * -iVar1;
          }
          return;
        }
        puVar12 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        puStack_2b0 = (undefined8 *)(puVar12 + 1);
        *puStack_2b0 = 0x6953646578696621;
        lStack_2a8 = 0xc;
        *(undefined1 *)(puVar12 + 4) = 0;
        puVar12[3] = 0x2928657a;
        FUN_109ac3188(0xffffff29,&puStack_2b0,&UNK_10f59845f,&UNK_10f597913,0xa54);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109a9145c);
        (*pcVar5)();
      }
      if ((*puVar9 >> 0x1e & 1) == 0) {
        uVar3 = *puVar9 >> 0x10 & 0x1f;
        if (uVar3 < 7) {
          if (uVar3 < 3) {
            if (uVar3 == 0) {
              return;
            }
            if (uVar3 == 1) {
              lVar23 = *(long *)(puVar9 + 2);
              if (*(long *)(lVar23 + 0x38) != 0) {
                piVar13 = (int *)(*(long *)(lVar23 + 0x38) + 0x14);
                do {
                  iVar1 = *piVar13;
                  cVar2 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                  if (bVar6) {
                    *piVar13 = iVar1 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar1 + -1 == 0) {
                  func_0x000109a848d4(lVar23);
                }
              }
              *(undefined8 *)(lVar23 + 0x38) = 0;
              *(undefined8 *)(lVar23 + 0x18) = 0;
              *(undefined8 *)(lVar23 + 0x10) = 0;
              *(undefined8 *)(lVar23 + 0x28) = 0;
              *(undefined8 *)(lVar23 + 0x20) = 0;
              if (*(int *)(lVar23 + 4) < 1) {
                return;
              }
              lVar19 = 0;
              lVar16 = *(long *)(lVar23 + 0x40);
              do {
                *(undefined4 *)(lVar16 + lVar19 * 4) = 0;
                lVar19 = lVar19 + 1;
              } while (lVar19 < *(int *)(lVar23 + 4));
              return;
            }
          }
          else {
            if (uVar3 == 3) {
              puStack_2c0 = (undefined8 *)0x0;
              FUN_109a8ee3c();
              return;
            }
            if (uVar3 == 4) {
              plVar7 = *(long **)(puVar9 + 2);
              plVar21 = (long *)*plVar7;
              plVar22 = (long *)plVar7[1];
              while (plVar4 = plVar22, plVar4 != plVar21) {
                plVar22 = plVar4 + -3;
                if (*plVar22 != 0) {
                  plVar4[-2] = *plVar22;
                  __ZdlPv();
                }
              }
              plVar7[1] = (long)plVar21;
              return;
            }
            if (uVar3 == 5) {
              plVar21 = *(long **)(puVar9 + 2);
              lVar23 = *plVar21;
              lVar19 = plVar21[1];
              while (lVar19 != lVar23) {
                lVar19 = lVar19 + -0x60;
                FUN_109370334(lVar19);
              }
              plVar21[1] = lVar23;
              return;
            }
          }
        }
        else {
          if (uVar3 < 10) {
            return;
          }
          if (uVar3 == 10) {
            lVar23 = *(long *)(puVar9 + 2);
            if (*(long *)(lVar23 + 0x20) != 0) {
              piVar13 = (int *)(*(long *)(lVar23 + 0x20) + 0x10);
              do {
                iVar1 = *piVar13;
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                if (bVar6) {
                  *piVar13 = iVar1 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar1 + -1 == 0) {
                (**(code **)(**(long **)(*(long *)(lVar23 + 0x20) + 8) + 0x20))();
                *(undefined8 *)(lVar23 + 0x20) = 0;
              }
            }
            if (0 < *(int *)(lVar23 + 4)) {
              lVar19 = 0;
              lVar16 = *(long *)(lVar23 + 0x30);
              do {
                *(undefined4 *)(lVar16 + lVar19 * 4) = 0;
                lVar19 = lVar19 + 1;
              } while (lVar19 < *(int *)(lVar23 + 4));
            }
            *(undefined8 *)(lVar23 + 0x20) = 0;
            return;
          }
          if (uVar3 == 0xb) {
            plVar21 = *(long **)(puVar9 + 2);
            lVar23 = *plVar21;
            lVar19 = plVar21[1];
            while (lVar19 != lVar23) {
              lVar19 = lVar19 + -0x50;
              FUN_109ac5638();
            }
            plVar21[1] = lVar23;
            return;
          }
          if (uVar3 == 0xd) {
            (*(undefined8 **)(puVar9 + 2))[1] = **(undefined8 **)(puVar9 + 2);
            return;
          }
        }
        puVar12 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        puStack_2c0 = (undefined8 *)(puVar12 + 1);
        uStack_2b8 = 0x1e;
        *(undefined1 *)((long)puVar12 + 0x22) = 0;
        *(undefined8 *)(puVar12 + 3) = 0x726f707075736e75;
        *(undefined8 *)(puVar12 + 1) = 0x2f6e776f6e6b6e55;
        *(undefined8 *)((long)puVar12 + 0x1a) = 0x6570797420796172;
        *(undefined8 *)((long)puVar12 + 0x12) = 0x726120646574726f;
        FUN_109ac3188(0xffffff2b,&puStack_2c0,&DAT_10f598457,&UNK_10f597913,0xa4b);
      }
      else {
        puVar12 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        puStack_2c0 = (undefined8 *)(puVar12 + 1);
        *puStack_2c0 = 0x6953646578696621;
        uStack_2b8 = 0xc;
        *(undefined1 *)(puVar12 + 4) = 0;
        puVar12[3] = 0x2928657a;
        FUN_109ac3188(0xffffff29,&puStack_2c0,&DAT_10f598457,&UNK_10f597913,0xa0a);
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
      (*pcVar5)();
    }
    _bzero(lVar23,uVar25 * 0x200);
    lVar23 = lVar23 + uVar25 * 0x200;
  }
  else {
    if (uVar15 <= param_2) {
      return;
    }
    lVar23 = lVar19 + param_2 * 0x200;
  }
  *(long *)(puVar10 + 2) = lVar23;
  return;
}



/* Entry: 109a913ac; end: 109a9148b;  */

/* WARNING: Removing unreachable block (ram,0x000109a85ec0) */

void FUN_109a913ac(uint *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    if ((*param_1 >> 0x1e & 1) == 0) {
      lVar9 = *(long *)(param_1 + 2);
      piVar11 = *(int **)(lVar9 + 0x40);
      iVar1 = *piVar11;
      if (-iVar1 != 0) {
        if ((*(char *)(lVar9 + 1) < '\0') ||
           (lVar12 = **(long **)(lVar9 + 0x48), *(ulong *)(lVar9 + 0x28) < *(ulong *)(lVar9 + 0x10))
           ) {
          FUN_109a859f0(lVar9,0);
          piVar11 = *(int **)(lVar9 + 0x40);
          lVar12 = **(long **)(lVar9 + 0x48);
        }
        *piVar11 = 0;
        *(long *)(lVar9 + 0x20) = *(long *)(lVar9 + 0x20) + lVar12 * -iVar1;
      }
      return;
    }
    puVar10 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    *(undefined8 *)(puVar10 + 1) = 0x6953646578696621;
    *(undefined1 *)(puVar10 + 4) = 0;
    puVar10[3] = 0x2928657a;
    FUN_109ac3188(0xffffff29,&stack0xffffffffffffffd0,&UNK_10f59845f,&UNK_10f597913,0xa54);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x109a9145c);
    (*pcVar7)();
  }
  uVar2 = *param_1;
  if ((uVar2 >> 0x1e & 1) == 0) {
    uVar5 = uVar2 >> 0x10 & 0x1f;
    if (uVar5 < 7) {
      if (uVar5 < 3) {
        if (uVar5 == 0) {
          return;
        }
        if (uVar5 == 1) {
          lVar9 = *(long *)(param_1 + 2);
          if (*(long *)(lVar9 + 0x38) != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0x38) + 0x14);
            do {
              iVar1 = *piVar11;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar4) {
                *piVar11 = iVar1 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(lVar9);
            }
          }
          *(undefined8 *)(lVar9 + 0x38) = 0;
          *(undefined8 *)(lVar9 + 0x18) = 0;
          *(undefined8 *)(lVar9 + 0x10) = 0;
          *(undefined8 *)(lVar9 + 0x28) = 0;
          *(undefined8 *)(lVar9 + 0x20) = 0;
          if (*(int *)(lVar9 + 4) < 1) {
            return;
          }
          lVar12 = 0;
          lVar13 = *(long *)(lVar9 + 0x40);
          do {
            *(undefined4 *)(lVar13 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar9 + 4));
          return;
        }
      }
      else {
        if (uVar5 == 3) {
          puStack_40 = (undefined8 *)0x0;
          FUN_109a8ee3c(param_1,&puStack_40,uVar2 & 0xfff,0xffffffff,0,0);
          return;
        }
        if (uVar5 == 4) {
          plVar8 = *(long **)(param_1 + 2);
          plVar14 = (long *)*plVar8;
          plVar15 = (long *)plVar8[1];
          while (plVar6 = plVar15, plVar6 != plVar14) {
            plVar15 = plVar6 + -3;
            if (*plVar15 != 0) {
              plVar6[-2] = *plVar15;
              __ZdlPv();
            }
          }
          plVar8[1] = (long)plVar14;
          return;
        }
        if (uVar5 == 5) {
          plVar14 = *(long **)(param_1 + 2);
          lVar9 = *plVar14;
          lVar12 = plVar14[1];
          while (lVar12 != lVar9) {
            lVar12 = lVar12 + -0x60;
            FUN_109370334(lVar12);
          }
          plVar14[1] = lVar9;
          return;
        }
      }
    }
    else {
      if (uVar5 < 10) {
        return;
      }
      if (uVar5 == 10) {
        lVar9 = *(long *)(param_1 + 2);
        if (*(long *)(lVar9 + 0x20) != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0x20) + 0x10);
          do {
            iVar1 = *piVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar4) {
              *piVar11 = iVar1 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar1 + -1 == 0) {
            (**(code **)(**(long **)(*(long *)(lVar9 + 0x20) + 8) + 0x20))();
            *(undefined8 *)(lVar9 + 0x20) = 0;
          }
        }
        if (0 < *(int *)(lVar9 + 4)) {
          lVar12 = 0;
          lVar13 = *(long *)(lVar9 + 0x30);
          do {
            *(undefined4 *)(lVar13 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar9 + 4));
        }
        *(undefined8 *)(lVar9 + 0x20) = 0;
        return;
      }
      if (uVar5 == 0xb) {
        plVar14 = *(long **)(param_1 + 2);
        lVar9 = *plVar14;
        lVar12 = plVar14[1];
        while (lVar12 != lVar9) {
          lVar12 = lVar12 + -0x50;
          FUN_109ac5638();
        }
        plVar14[1] = lVar9;
        return;
      }
      if (uVar5 == 0xd) {
        (*(undefined8 **)(param_1 + 2))[1] = **(undefined8 **)(param_1 + 2);
        return;
      }
    }
    puVar10 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    puStack_40 = (undefined8 *)(puVar10 + 1);
    uStack_38 = 0x1e;
    *(undefined1 *)((long)puVar10 + 0x22) = 0;
    *(undefined8 *)(puVar10 + 3) = 0x726f707075736e75;
    *(undefined8 *)(puVar10 + 1) = 0x2f6e776f6e6b6e55;
    *(undefined8 *)((long)puVar10 + 0x1a) = 0x6570797420796172;
    *(undefined8 *)((long)puVar10 + 0x12) = 0x726120646574726f;
    FUN_109ac3188(0xffffff2b,&puStack_40,&DAT_10f598457,&UNK_10f597913,0xa4b);
  }
  else {
    puVar10 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    puStack_40 = (undefined8 *)(puVar10 + 1);
    *puStack_40 = 0x6953646578696621;
    uStack_38 = 0xc;
    *(undefined1 *)(puVar10 + 4) = 0;
    puVar10[3] = 0x2928657a;
    FUN_109ac3188(0xffffff29,&puStack_40,&DAT_10f598457,&UNK_10f597913,0xa0a);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
  (*pcVar7)();
}



/* Entry: 109a9148c; end: 109a9168b;  */

long FUN_109a9148c(uint *param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  if ((int)param_2 < 0) {
    if ((*param_1 & 0x1f0000) == 0xa0000) {
      return *(long *)(param_1 + 2);
    }
    puVar3 = (undefined4 *)0x10;
    func_0x000107c2ae8c();
    puStack_30 = (undefined8 *)(puVar3 + 1);
    *puStack_30 = 0x414d55203d3d206b;
    *puVar3 = 1;
    uStack_28 = 9;
    *(undefined2 *)(puVar3 + 3) = 0x54;
    FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f59848d,&UNK_10f597913,0xa77);
  }
  else if ((*param_1 & 0x1f0000) == 0xb0000) {
    lVar1 = **(long **)(param_1 + 2);
    if ((int)param_2 < (int)((ulong)((*(long **)(param_1 + 2))[1] - lVar1) >> 4) * -0x33333333) {
      return lVar1 + (ulong)param_2 * 0x50;
    }
    puVar3 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_30 = (undefined8 *)(puVar3 + 1);
    uStack_28 = 0x11;
    *(undefined2 *)(puVar3 + 5) = 0x29;
    *(undefined8 *)(puVar3 + 3) = 0x28657a69732e7629;
    *(undefined8 *)(puVar3 + 1) = 0x746e6928203c2069;
    FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f59848d,&UNK_10f597913,0xa7e);
  }
  else {
    puVar3 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_30 = (undefined8 *)(puVar3 + 1);
    uStack_28 = 0x14;
    *(undefined1 *)(puVar3 + 6) = 0;
    puVar3[5] = 0x54414d55;
    *(undefined8 *)(puVar3 + 3) = 0x5f524f544345565f;
    *(undefined8 *)(puVar3 + 1) = 0x445453203d3d206b;
    FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f59848d,&UNK_10f597913,0xa7c);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a91618);
  (*pcVar2)();
}



/* Entry: 109a9168c; end: 109a91b03;  */

uint * FUN_109a9168c(uint *param_1,uint *param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  long lVar16;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  int *piStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined4 *puStack_50;
  undefined1 *puStack_48;
  undefined1 auStack_40 [16];
  
  puVar9 = (uint *)&uStack_b0;
  puVar10 = (uint *)&uStack_b0;
  puVar11 = (uint *)&uStack_b0;
  uVar3 = *param_1 & 0x1f0000;
  if (uVar3 == 0) {
    return param_1;
  }
  if (((*param_1 & 0x1d0000) != 0x10000) && (uVar3 != 0x20000)) {
    if (uVar3 == 0x90000) {
      if ((*param_2 & 0x1f0000) == 0x10000) {
        puVar14 = *(undefined8 **)(param_2 + 2);
        piStack_70 = (int *)((ulong)&uStack_b0 | 8);
        uStack_a8 = puVar14[1];
        uStack_b0 = (undefined4 *)*puVar14;
        uStack_98 = puVar14[3];
        uStack_a0 = puVar14[2];
        uStack_88 = puVar14[5];
        uStack_90 = puVar14[4];
        lStack_78 = puVar14[7];
        uStack_80 = puVar14[6];
        puStack_68 = &uStack_60;
        uStack_60 = 0;
        lStack_58 = 0;
        if (puVar14[7] != 0) {
          piVar2 = (int *)(puVar14[7] + 0x14);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = *piVar2 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (*(int *)((long)puVar14 + 4) < 3) {
          uStack_60 = *(undefined8 *)puVar14[9];
          lStack_58 = ((undefined8 *)puVar14[9])[1];
        }
        else {
          uStack_b0 = (undefined4 *)((ulong)uStack_b0 & 0xffffffff);
          func_0x000109a84868(&uStack_b0);
        }
      }
      else {
        FUN_109a8a180(&uStack_b0,param_2,0xffffffff);
      }
      puVar10 = param_1;
      FUN_109a8b904(param_1,0xffffffff);
      if ((uStack_b0._4_4_ < 3) && (((uint)uStack_b0 >> 0xe & 1) != 0)) {
        iVar4 = *piStack_70;
        iVar5 = piStack_70[1];
        if (iVar5 == 1 || iVar4 == 1) {
          uVar3 = (uint)puVar10 >> 3 & 0x1ff;
          iVar1 = uVar3 + 1;
          if (((iVar5 == 1 && (iVar4 == iVar1 || iVar4 == 1)) || (iVar4 == 1 && iVar5 == iVar1)) ||
             ((iVar5 == 1 && (((iVar4 == 4 && (uVar3 < 4)) && (((uint)uStack_b0 & 0xfff) == 6))))))
          {
            puVar9 = *(uint **)(param_1 + 2);
            FUN_109a4ba2c();
            FUN_109a4b8ec(puVar9,&puStack_50,param_3,puVar10);
            if (lStack_78 != 0) {
              piVar2 = (int *)(lStack_78 + 0x14);
              do {
                iVar4 = *piVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar7) {
                  *piVar2 = iVar4 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar4 + -1 == 0) {
                func_0x000109a848d4(&uStack_b0);
                puVar9 = puVar11;
              }
            }
            if (0 < uStack_b0._4_4_) {
              lVar16 = 0;
              do {
                piStack_70[lVar16] = 0;
                lVar16 = lVar16 + 1;
              } while (lVar16 < uStack_b0._4_4_);
            }
            goto LAB_109a919a8;
          }
        }
      }
      puVar12 = (undefined4 *)0x48;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar12 + 3) = 0x756c61762872616c;
      *(undefined8 *)(puVar12 + 1) = 0x6163536b63656863;
      *(undefined8 *)(puVar12 + 7) = 0x6b2e727261202c29;
      *(undefined8 *)(puVar12 + 5) = 0x2865707974202c65;
      *(undefined8 *)(puVar12 + 0xb) = 0x7272417475706e49;
      *(undefined8 *)(puVar12 + 9) = 0x5f202c2928646e69;
      *puVar12 = 1;
      puStack_50 = puVar12 + 1;
      puStack_48 = (undefined1 *)0x41;
      *(undefined2 *)(puVar12 + 0x11) = 0x29;
      *(undefined8 *)(puVar12 + 0xf) = 0x54414d5f5550475f;
      *(undefined8 *)(puVar12 + 0xd) = 0x414455433a3a7961;
      FUN_109ac3188(0xffffff29,&puStack_50,&UNK_10f5960ed,&UNK_10f597913,0xaae);
    }
    else {
      if (uVar3 == 0xa0000) {
        puVar9 = *(uint **)(param_1 + 2);
        uVar13 = param_3;
        FUN_109a8e1c4();
        uVar15 = 0x2000000;
        if ((int)uVar13 == 0) {
          uVar15 = 0x3000000;
        }
        FUN_109ac6640(&uStack_90,puVar9,uVar15);
        FUN_109a48a40(&uStack_90,param_2,param_3);
        if (lStack_58 != 0) {
          piVar2 = (int *)(lStack_58 + 0x14);
          do {
            iVar4 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = iVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_90);
          }
        }
        lStack_58 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
        puStack_68 = (undefined8 *)0x0;
        piStack_70 = (int *)0x0;
        if (0 < uStack_90._4_4_) {
          lVar16 = 0;
          do {
            puStack_50[lVar16] = 0;
            lVar16 = lVar16 + 1;
          } while (lVar16 < uStack_90._4_4_);
        }
        if (puStack_48 != auStack_40 && puStack_48 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_48 + -8));
        }
        return puVar9;
      }
      puVar12 = (undefined4 *)0x8;
      func_0x000107c2ae8c();
      *puVar12 = 1;
      uStack_b0 = puVar12 + 1;
      *(undefined1 *)uStack_b0 = 0;
      uStack_a8 = 0;
      FUN_109ac3188(0xffffff2b,&uStack_b0,&UNK_10f5960ed,&UNK_10f597913,0xab2);
    }
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x109a91a8c);
    (*pcVar8)();
  }
  if (uVar3 == 0x10000) {
    puVar14 = *(undefined8 **)(param_1 + 2);
    piStack_70 = (int *)((ulong)&uStack_b0 | 8);
    uStack_a8 = puVar14[1];
    uStack_b0 = (undefined4 *)*puVar14;
    uStack_98 = puVar14[3];
    uStack_a0 = puVar14[2];
    uStack_88 = puVar14[5];
    uStack_90 = puVar14[4];
    lStack_78 = puVar14[7];
    uStack_80 = puVar14[6];
    puStack_68 = &uStack_60;
    uStack_60 = 0;
    lStack_58 = 0;
    if (puVar14[7] != 0) {
      piVar2 = (int *)(puVar14[7] + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = *piVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(int *)((long)puVar14 + 4) < 3) {
      uStack_60 = *(undefined8 *)puVar14[9];
      lStack_58 = ((undefined8 *)puVar14[9])[1];
    }
    else {
      uStack_b0 = (undefined4 *)((ulong)uStack_b0 & 0xffffffff);
      func_0x000109a84868(&uStack_b0);
    }
  }
  else {
    FUN_109a8a180(&uStack_b0,param_1,0xffffffff);
  }
  FUN_109a48a40(&uStack_b0,param_2,param_3);
  if (lStack_78 != 0) {
    piVar2 = (int *)(lStack_78 + 0x14);
    do {
      iVar4 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
      puVar9 = puVar10;
    }
  }
  if (0 < uStack_b0._4_4_) {
    lVar16 = 0;
    do {
      piStack_70[lVar16] = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_b0._4_4_);
  }
LAB_109a919a8:
  lStack_78 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    puVar9 = (uint *)puStack_68[-1];
    _free(puVar9);
  }
  return puVar9;
}



/* Entry: 109a91b04; end: 109a91d8f;  */

void FUN_109a91b04(uint *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *param_1 & 0x1f0000;
  if (uVar2 != 0x10000) {
    if (uVar2 != 0x20000) {
      if (uVar2 == 0xa0000) {
        uStack_90 = *(undefined8 *)(param_1 + 2);
        uStack_98 = (undefined4 *)CONCAT44(uStack_98._4_4_,0x20a0000);
        uStack_88 = 0;
        FUN_109a479a0(param_2,&uStack_98);
        return;
      }
      puVar7 = (undefined4 *)0x8;
      func_0x000107c2ae8c();
      *puVar7 = 1;
      uStack_98 = puVar7 + 1;
      *(undefined1 *)uStack_98 = 0;
      uStack_90 = 0;
      FUN_109ac3188(0xffffff2b,&uStack_98,&UNK_10f57bc20,&UNK_10f597913,0xadd);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109a91d50);
      (*pcVar6)();
    }
    FUN_109a8a180(&uStack_98,param_1,0xffffffff);
    auStack_38[0] = 0xc2010000;
    uStack_28 = 0;
    puStack_30 = &uStack_98;
    FUN_109a479a0(param_2,auStack_38);
    if (lStack_60 != 0) {
      piVar1 = (int *)(lStack_60 + 0x14);
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
        func_0x000109a848d4(&uStack_98);
      }
    }
    lStack_60 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    if (0 < uStack_98._4_4_) {
      lVar8 = 0;
      do {
        *(undefined4 *)(lStack_58 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < uStack_98._4_4_);
    }
    if (puStack_50 == auStack_48 || puStack_50 == (undefined1 *)0x0) {
      return;
    }
    _free(*(undefined8 *)(puStack_50 + -8));
    return;
  }
  puVar7 = *(undefined4 **)(param_1 + 2);
  if (puVar7 == param_2) {
    return;
  }
  if (*(long *)(param_2 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(long *)(puVar7 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(puVar7 + 0xe) + 0x14);
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
      func_0x000109a848d4(puVar7);
    }
  }
  *(undefined8 *)(puVar7 + 0xe) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 10) = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  if ((int)puVar7[1] < 1) {
    *puVar7 = *param_2;
LAB_109a91ca4:
    if ((int)param_2[1] < 3) {
      puVar7[1] = param_2[1];
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(param_2 + 2);
      puVar9 = *(undefined8 **)(param_2 + 0x12);
      puVar11 = *(undefined8 **)(puVar7 + 0x12);
      *puVar11 = *puVar9;
      puVar11[1] = puVar9[1];
      goto LAB_109a91ce4;
    }
  }
  else {
    lVar8 = 0;
    lVar10 = *(long *)(puVar7 + 0x10);
    do {
      *(undefined4 *)(lVar10 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)puVar7[1]);
    *puVar7 = *param_2;
    if ((int)puVar7[1] < 3) goto LAB_109a91ca4;
  }
  func_0x000109a84868(puVar7,param_2);
LAB_109a91ce4:
  uVar12 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(puVar7 + 4) = uVar12;
  uVar12 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar7 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(puVar7 + 8) = uVar12;
  uVar12 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(puVar7 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(puVar7 + 0xc) = uVar12;
  return;
}



/* Entry: 109a91d90; end: 109a91deb;  */

undefined8 FUN_109a91d90(void)

{
  int iVar1;
  
  if ((bRam000000011382bba8 & 1) == 0) {
    iVar1 = 0x1382bba8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011382bb90 = 0x3000000;
      uRam000000011382bb98 = 0;
      uRam000000011382bba0 = 0;
      ___cxa_guard_release(0x11382bba8);
    }
  }
  return 0x11382bb90;
}



/* Entry: 109a91dec; end: 109a923a7;  */

void FUN_109a91dec(uint *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  ulong *puVar7;
  undefined4 *puVar8;
  ulong *puVar9;
  uint *puVar10;
  double *pdVar11;
  uint *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  bool bVar18;
  ulong *puVar19;
  float *pfVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  double dVar25;
  double dVar26;
  undefined8 uStack_550;
  undefined8 uStack_548;
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
  float *pfStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong *puStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  undefined4 uStack_418;
  int iStack_414;
  undefined8 *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3c8;
  long lStack_3c0;
  undefined1 *puStack_3b8;
  undefined1 auStack_3b0 [16];
  undefined8 uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulong uStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  long lStack_278;
  uint auStack_208 [2];
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
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
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_1 + 2);
    uStack_130 = *puVar9;
    uStack_128 = puVar9[1];
    uStack_118 = puVar9[3];
    uStack_120 = puVar9[2];
    uStack_108 = puVar9[5];
    uStack_110 = puVar9[4];
    uStack_f8 = puVar9[7];
    uStack_100 = puVar9[6];
    uStack_f0 = (ulong)&uStack_130 | 8;
    puStack_e8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar18) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_e0 = *(undefined8 *)puVar9[9];
      uStack_d8 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_130 = uStack_130 & 0xffffffff;
      func_0x000109a84868(&uStack_130);
    }
  }
  else {
    FUN_109a8a180(&uStack_130,param_1,0xffffffff);
  }
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_2 + 2);
    uStack_d0 = *puVar9;
    uStack_c8 = puVar9[1];
    uStack_b8 = puVar9[3];
    uStack_c0 = puVar9[2];
    uStack_a8 = puVar9[5];
    uStack_b0 = puVar9[4];
    uStack_98 = puVar9[7];
    uStack_a0 = puVar9[6];
    puStack_90 = &uStack_c8;
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar18) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_80 = *(undefined8 *)puVar9[9];
      uStack_78 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_d0 = uStack_d0 & 0xffffffff;
      func_0x000109a84868(&uStack_d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_d0,param_2,0xffffffff);
  }
  iVar22 = 0;
  puVar9 = &uStack_130;
  bVar18 = false;
  do {
    if (((2 < (int)*(uint *)((long)puVar9 + 4)) || ((uint)puVar9[1] != (uint)uStack_128)) ||
       ((((uint)uStack_130 ^ (uint)*puVar9) & 0xfff) != 0)) {
      puVar8 = (undefined4 *)0x58;
      func_0x000107c2ae8c(0x58,uStack_128 & 0xffffffff,iVar22);
      *puVar8 = 1;
      uStack_190 = puVar8 + 1;
      uStack_188 = 0x50;
      *(undefined8 *)(puVar8 + 7) = 0x2073776f722e5d69;
      *(undefined8 *)(puVar8 + 5) = 0x5b63727320262620;
      *(undefined8 *)(puVar8 + 0xb) = 0x262073776f722e5d;
      *(undefined8 *)(puVar8 + 9) = 0x305b637273203d3d;
      *(undefined8 *)(puVar8 + 0xf) = 0x202928657079742e;
      *(undefined8 *)(puVar8 + 0xd) = 0x5d695b6372732026;
      *(undefined8 *)(puVar8 + 0x13) = 0x2928657079742e5d;
      *(undefined8 *)(puVar8 + 0x11) = 0x305b637273203d3d;
      *(undefined1 *)(puVar8 + 0x15) = 0;
      *(undefined8 *)(puVar8 + 3) = 0x32203d3c20736d69;
      *(undefined8 *)(puVar8 + 1) = 0x642e5d695b637273;
      FUN_109ac3188(0xffffff29,&uStack_190,&UNK_10f598540,&UNK_10f597913,0xafb);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109a92308);
      (*pcVar6)();
    }
    iVar22 = *(uint *)((long)puVar9 + 0xc) + iVar22;
    bVar5 = !bVar18;
    puVar9 = &uStack_d0;
    bVar18 = true;
  } while (bVar5);
  FUN_109a8f64c(param_3,uStack_128 & 0xffffffff,iVar22,(uint)uStack_130 & 0xfff,0xffffffff,0,0);
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_3 + 2);
    uStack_190 = (undefined4 *)*puVar9;
    uStack_188 = puVar9[1];
    uStack_178 = puVar9[3];
    uStack_180 = puVar9[2];
    uStack_168 = puVar9[5];
    uStack_170 = puVar9[4];
    uStack_158 = puVar9[7];
    uStack_160 = puVar9[6];
    uStack_150 = (ulong)&uStack_190 | 8;
    puStack_148 = &uStack_140;
    uStack_140 = 0;
    uStack_138 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar18) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_140 = *(undefined8 *)puVar9[9];
      uStack_138 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_190 = (undefined4 *)((ulong)uStack_190 & 0xffffffff);
      func_0x000109a84868(&uStack_190);
    }
  }
  else {
    FUN_109a8a180(&uStack_190,param_3,0xffffffff);
  }
  uVar21 = 0;
  puVar9 = &uStack_130;
  bVar18 = false;
  do {
    auStack_208[0] = uVar21;
    auStack_208[1] = 0;
    puStack_200 = (undefined8 *)NEON_rev64(puVar9[1],4);
    puVar12 = auStack_208;
    FUN_109a852c8(&uStack_1f0,&uStack_190);
    auStack_208[0] = 0x2010000;
    uStack_1f8 = 0;
    puVar10 = auStack_208;
    puVar7 = puVar9;
    puStack_200 = &uStack_1f0;
    FUN_109a479a0();
    uVar3 = *(uint *)((long)puVar9 + 0xc);
    if (lStack_1b8 != 0) {
      piVar1 = (int *)(lStack_1b8 + 0x14);
      do {
        iVar22 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar22 + -1 == 0) {
        puVar7 = &uStack_1f0;
        func_0x000109a848d4();
      }
    }
    lStack_1b8 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    if (0 < uStack_1f0._4_4_) {
      lVar13 = 0;
      do {
        *(undefined4 *)(lStack_1b0 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < uStack_1f0._4_4_);
    }
    if (puStack_1a8 != auStack_1a0 && puStack_1a8 != (undefined1 *)0x0) {
      puVar7 = *(ulong **)(puStack_1a8 + -8);
      _free();
    }
    uVar21 = uVar3 + uVar21;
    bVar5 = !bVar18;
    puVar9 = &uStack_d0;
    bVar18 = true;
  } while (bVar5);
  if (uStack_158 != 0) {
    piVar1 = (int *)(uStack_158 + 0x14);
    do {
      iVar22 = *piVar1;
      cVar4 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar18) {
        *piVar1 = iVar22 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar22 + -1 == 0) {
      puVar7 = &uStack_190;
      func_0x000109a848d4();
    }
  }
  uStack_158 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  if (0 < uStack_190._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(uStack_150 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_190._4_4_);
  }
  if (puStack_148 != &uStack_140 && puStack_148 != (undefined8 *)0x0) {
    puVar7 = (ulong *)puStack_148[-1];
    _free();
  }
  puVar9 = &uStack_70;
  do {
    puVar19 = puVar9 + -0xc;
    if (puVar9[-5] != 0) {
      piVar1 = (int *)(puVar9[-5] + 0x14);
      do {
        iVar22 = *piVar1;
        cVar4 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar18) {
          *piVar1 = iVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar22 + -1 == 0) {
        puVar7 = puVar19;
        func_0x000109a848d4();
      }
    }
    puVar9[-5] = 0;
    puVar9[-9] = 0;
    puVar9[-10] = 0;
    puVar9[-7] = 0;
    puVar9[-8] = 0;
    if (0 < (int)*(uint *)((long)puVar9 + -0x5c)) {
      lVar13 = 0;
      uVar16 = puVar9[-4];
      do {
        *(undefined4 *)(uVar16 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)*(uint *)((long)puVar9 + -0x5c));
    }
    puVar14 = (ulong *)puVar9[-3];
    if (puVar14 != puVar9 + -2 && puVar14 != (ulong *)0x0) {
      puVar7 = (ulong *)puVar14[-1];
      _free();
    }
    puVar9 = puVar19;
  } while (puVar19 != &uStack_130);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar10 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_190);
    lVar13 = -0xc0;
    do {
      func_0x00010567aa40(puVar19);
      puVar19 = puVar19 + -0xc;
      lVar13 = lVar13 + 0x60;
    } while (lVar13 != 0);
  }
  __Unwind_Resume();
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*puVar7 & 0x1f0000) == 0x10000) {
    puVar9 = (ulong *)puVar7[1];
    uStack_340 = *puVar9;
    uStack_338 = puVar9[1];
    uStack_328 = puVar9[3];
    uStack_330 = puVar9[2];
    uStack_318 = puVar9[5];
    uStack_320 = puVar9[4];
    uStack_308 = puVar9[7];
    uStack_310 = puVar9[6];
    uStack_300 = (ulong)&uStack_340 | 8;
    puStack_2f8 = &uStack_2f0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar18) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_2f0 = *(undefined8 *)puVar9[9];
      uStack_2e8 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_340 = uStack_340 & 0xffffffff;
      func_0x000109a84868(&uStack_340);
    }
  }
  else {
    FUN_109a8a180(&uStack_340);
  }
  if ((*puVar10 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(puVar10 + 2);
    uStack_2e0 = *puVar9;
    uStack_2d8 = puVar9[1];
    uStack_2c8 = puVar9[3];
    uStack_2d0 = puVar9[2];
    uStack_2b8 = puVar9[5];
    uStack_2c0 = puVar9[4];
    uStack_2a8 = puVar9[7];
    uStack_2b0 = puVar9[6];
    puStack_2a0 = &uStack_2d8;
    puStack_298 = &uStack_290;
    uStack_290 = 0;
    uStack_288 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar18) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_290 = *(undefined8 *)puVar9[9];
      uStack_288 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_2e0 = uStack_2e0 & 0xffffffff;
      func_0x000109a84868(&uStack_2e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_2e0,puVar10,0xffffffff);
  }
  iVar22 = 0;
  puVar9 = &uStack_340;
  bVar18 = false;
  do {
    if (((2 < (int)*(uint *)((long)puVar9 + 4)) ||
        (*(uint *)((long)puVar9 + 0xc) != uStack_338._4_4_)) ||
       ((((uint)uStack_340 ^ (uint)*puVar9) & 0xfff) != 0)) {
      puVar8 = (undefined4 *)0x58;
      func_0x000107c2ae8c(0x58,iVar22);
      *puVar8 = 1;
      uStack_3a0 = puVar8 + 1;
      uStack_398 = 0x50;
      *(undefined8 *)(puVar8 + 7) = 0x20736c6f632e5d69;
      *(undefined8 *)(puVar8 + 5) = 0x5b63727320262620;
      *(undefined8 *)(puVar8 + 0xb) = 0x2620736c6f632e5d;
      *(undefined8 *)(puVar8 + 9) = 0x305b637273203d3d;
      *(undefined8 *)(puVar8 + 0xf) = 0x202928657079742e;
      *(undefined8 *)(puVar8 + 0xd) = 0x5d695b6372732026;
      *(undefined8 *)(puVar8 + 0x13) = 0x2928657079742e5d;
      *(undefined8 *)(puVar8 + 0x11) = 0x305b637273203d3d;
      *(undefined1 *)(puVar8 + 0x15) = 0;
      *(undefined8 *)(puVar8 + 3) = 0x32203d3c20736d69;
      *(undefined8 *)(puVar8 + 1) = 0x642e5d695b637273;
      FUN_109ac3188(0xffffff29,&uStack_3a0,&UNK_10f598599,&UNK_10f597913,0xb23);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109a928c4);
      (*pcVar6)();
    }
    iVar22 = (uint)puVar9[1] + iVar22;
    bVar5 = !bVar18;
    puVar9 = &uStack_2e0;
    bVar18 = true;
  } while (bVar5);
  FUN_109a8f64c(puVar12,iVar22,uStack_338._4_4_,(uint)uStack_340 & 0xfff,0xffffffff,0,0);
  if ((*puVar12 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(puVar12 + 2);
    uStack_3a0 = (undefined4 *)*puVar9;
    uStack_398 = puVar9[1];
    uStack_388 = puVar9[3];
    uStack_390 = puVar9[2];
    uStack_378 = puVar9[5];
    uStack_380 = puVar9[4];
    uStack_368 = puVar9[7];
    uStack_370 = puVar9[6];
    uStack_360 = (ulong)&uStack_3a0 | 8;
    puStack_358 = &uStack_350;
    uStack_350 = 0;
    uStack_348 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar18) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_350 = *(undefined8 *)puVar9[9];
      uStack_348 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_3a0 = (undefined4 *)((ulong)uStack_3a0 & 0xffffffff);
      func_0x000109a84868(&uStack_3a0);
    }
  }
  else {
    FUN_109a8a180(&uStack_3a0,puVar12,0xffffffff);
  }
  iVar22 = 0;
  puVar9 = &uStack_340;
  bVar18 = false;
  do {
    uStack_418 = 0;
    iStack_414 = iVar22;
    puStack_410 = (undefined8 *)NEON_rev64(puVar9[1],4);
    FUN_109a852c8(&uStack_400,&uStack_3a0,&uStack_418);
    uStack_418 = 0x2010000;
    uStack_408 = 0;
    pdVar11 = (double *)&uStack_418;
    puVar7 = puVar9;
    puStack_410 = &uStack_400;
    FUN_109a479a0();
    uVar16 = puVar9[1];
    if (lStack_3c8 != 0) {
      piVar1 = (int *)(lStack_3c8 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        puVar7 = &uStack_400;
        func_0x000109a848d4();
      }
    }
    lStack_3c8 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    if (0 < uStack_400._4_4_) {
      lVar13 = 0;
      do {
        *(undefined4 *)(lStack_3c0 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < uStack_400._4_4_);
    }
    if (puStack_3b8 != auStack_3b0 && puStack_3b8 != (undefined1 *)0x0) {
      puVar7 = *(ulong **)(puStack_3b8 + -8);
      _free();
    }
    iVar22 = (uint)uVar16 + iVar22;
    bVar5 = !bVar18;
    puVar9 = &uStack_2e0;
    bVar18 = true;
  } while (bVar5);
  if (uStack_368 != 0) {
    piVar1 = (int *)(uStack_368 + 0x14);
    do {
      iVar22 = *piVar1;
      cVar4 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar18) {
        *piVar1 = iVar22 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar22 + -1 == 0) {
      puVar7 = &uStack_3a0;
      func_0x000109a848d4();
    }
  }
  uStack_368 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  if (0 < uStack_3a0._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(uStack_360 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_3a0._4_4_);
  }
  if (puStack_358 != &uStack_350 && puStack_358 != (undefined8 *)0x0) {
    puVar7 = (ulong *)puStack_358[-1];
    _free();
  }
  puVar9 = &uStack_280;
  do {
    puVar19 = puVar9 + -0xc;
    if (puVar9[-5] != 0) {
      piVar1 = (int *)(puVar9[-5] + 0x14);
      do {
        iVar22 = *piVar1;
        cVar4 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar18) {
          *piVar1 = iVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar22 + -1 == 0) {
        puVar7 = puVar19;
        func_0x000109a848d4();
      }
    }
    puVar9[-5] = 0;
    puVar9[-9] = 0;
    puVar9[-10] = 0;
    puVar9[-7] = 0;
    puVar9[-8] = 0;
    if (0 < (int)*(uint *)((long)puVar9 + -0x5c)) {
      lVar13 = 0;
      uVar16 = puVar9[-4];
      do {
        *(undefined4 *)(uVar16 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)*(uint *)((long)puVar9 + -0x5c));
    }
    puVar14 = (ulong *)puVar9[-3];
    if (puVar14 != puVar9 + -2 && puVar14 != (ulong *)0x0) {
      puVar7 = (ulong *)puVar14[-1];
      _free();
    }
    puVar9 = puVar19;
  } while (puVar19 != &uStack_340);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pdVar11 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_3a0);
    lVar13 = -0xc0;
    do {
      func_0x00010567aa40(puVar19);
      puVar19 = puVar19 + -0xc;
      lVar13 = lVar13 + 0x60;
    } while (lVar13 != 0);
  }
  __Unwind_Resume();
  puVar9 = puVar7;
  FUN_109a8d7e8();
  if ((int)puVar9 < 3) {
    if ((*puVar7 & 0x1f0000) == 0x10000) {
      puVar9 = (ulong *)puVar7[1];
      uStack_4b0 = (ulong)&uStack_4f0 | 8;
      uStack_4e8 = puVar9[1];
      uStack_4f0 = (undefined8 *)*puVar9;
      uStack_4d8 = puVar9[3];
      pfStack_4e0 = (float *)puVar9[2];
      uStack_4c8 = puVar9[5];
      uStack_4d0 = puVar9[4];
      uStack_4b8 = puVar9[7];
      uStack_4c0 = puVar9[6];
      puStack_4a8 = &uStack_4a0;
      uStack_4a0 = 0;
      uStack_498 = 0;
      if (puVar9[7] != 0) {
        piVar1 = (int *)(puVar9[7] + 0x14);
        do {
          cVar4 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar18) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(int *)((long)puVar9 + 4) < 3) {
        uStack_4a0 = *(ulong *)puVar9[9];
        uStack_498 = ((ulong *)puVar9[9])[1];
      }
      else {
        uStack_4f0 = (undefined8 *)((ulong)uStack_4f0 & 0xffffffff);
        func_0x000109a84868(&uStack_4f0);
      }
    }
    else {
      FUN_109a8a180(&uStack_4f0,puVar7,0xffffffff);
    }
    uVar16 = uStack_4e8 & 0xffffffff;
    uVar21 = uStack_4e8._4_4_;
    uVar15 = (ulong)uStack_4e8._4_4_;
    lVar13 = (long)(int)uStack_4e8._4_4_;
    if (((uint)uStack_4f0 & 0xfff) == 6) {
      if (0 < (int)uStack_4e8) {
        uVar15 = 0;
        dVar25 = *pdVar11;
        pfVar17 = pfStack_4e0;
        do {
          if (0 < (int)uStack_4e8._4_4_) {
            uVar23 = 0;
            do {
              dVar26 = dVar25;
              if (uVar15 != uVar23) {
                dVar26 = 0.0;
              }
              *(double *)(pfVar17 + uVar23 * 2) = dVar26;
              uVar23 = uVar23 + 1;
            } while (uStack_4e8._4_4_ != uVar23);
          }
          uVar15 = uVar15 + 1;
          pfVar17 = (float *)((long)pfVar17 + (uStack_4a0 & 0xfffffffffffffff8));
        } while (uVar15 != uVar16);
      }
    }
    else if (((uint)uStack_4f0 & 0xfff) == 5) {
      if (0 < (int)uStack_4e8) {
        uVar23 = 0;
        dVar25 = *pdVar11;
        uVar24 = uStack_4a0 & 0xfffffffffffffffc;
        pfVar20 = pfStack_4e0;
        pfVar17 = pfStack_4e0;
        do {
          if (0 < (int)uVar21) {
            _bzero(pfVar20,uVar15 << 2);
          }
          if ((long)uVar23 < lVar13) {
            *pfVar17 = (float)dVar25;
          }
          uVar23 = uVar23 + 1;
          pfVar17 = (float *)((long)pfVar17 + uVar24 + 4);
          pfVar20 = (float *)((long)pfVar20 + uVar24);
        } while (uVar16 != uVar23);
      }
    }
    else {
      uStack_548 = 0;
      uStack_550 = 0;
      uStack_538 = 0;
      uStack_540 = 0;
      FUN_109a48880(&uStack_4f0,&uStack_550);
      FUN_109a856e8(&uStack_550,&uStack_4f0,0);
      FUN_109a48880(&uStack_550,pdVar11);
      if (lStack_518 != 0) {
        piVar1 = (int *)(lStack_518 + 0x14);
        do {
          iVar22 = *piVar1;
          cVar4 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar18) {
            *piVar1 = iVar22 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar22 + -1 == 0) {
          func_0x000109a848d4(&uStack_550);
        }
      }
      lStack_518 = 0;
      uStack_538 = 0;
      uStack_540 = 0;
      uStack_528 = 0;
      uStack_530 = 0;
      if (0 < uStack_550._4_4_) {
        lVar13 = 0;
        do {
          *(undefined4 *)(lStack_510 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < uStack_550._4_4_);
      }
      if (puStack_508 != auStack_500 && puStack_508 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_508 + -8));
      }
    }
    if (uStack_4b8 != 0) {
      piVar1 = (int *)(uStack_4b8 + 0x14);
      do {
        iVar22 = *piVar1;
        cVar4 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar18) {
          *piVar1 = iVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar22 + -1 == 0) {
        func_0x000109a848d4(&uStack_4f0);
      }
    }
    uStack_4b8 = 0;
    uStack_4d8 = 0;
    pfStack_4e0 = (float *)0x0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    if (0 < uStack_4f0._4_4_) {
      lVar13 = 0;
      do {
        *(undefined4 *)(uStack_4b0 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < uStack_4f0._4_4_);
    }
    if (puStack_4a8 != &uStack_4a0 && puStack_4a8 != (ulong *)0x0) {
      _free(puStack_4a8[-1]);
    }
    return;
  }
  puVar8 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar8 = 1;
  uStack_4f0 = (undefined8 *)(puVar8 + 1);
  *uStack_4f0 = 0x28736d69642e6d5f;
  uStack_4e8 = 0xe;
  *(undefined1 *)((long)puVar8 + 0x12) = 0;
  *(undefined8 *)((long)puVar8 + 10) = 0x32203d3c20292873;
  FUN_109ac3188(0xffffff29,&uStack_4f0,&UNK_10f5985b0,&UNK_10f597913,0xb69);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109a92cd0);
  (*pcVar6)();
}



/* Entry: 109a923a8; end: 109a92963;  */

void FUN_109a923a8(uint *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  code *pcVar6;
  ulong *puVar7;
  undefined4 *puVar8;
  ulong *puVar9;
  double *pdVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  bool bVar16;
  ulong *puVar17;
  float *pfVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_308;
  long lStack_300;
  undefined1 *puStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  float *pfStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong *puStack_298;
  ulong uStack_290;
  ulong uStack_288;
  undefined4 uStack_208;
  int iStack_204;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
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
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_1 + 2);
    uStack_130 = *puVar9;
    uStack_128 = puVar9[1];
    uStack_118 = puVar9[3];
    uStack_120 = puVar9[2];
    uStack_108 = puVar9[5];
    uStack_110 = puVar9[4];
    uStack_f8 = puVar9[7];
    uStack_100 = puVar9[6];
    uStack_f0 = (ulong)&uStack_130 | 8;
    puStack_e8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar16) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_e0 = *(undefined8 *)puVar9[9];
      uStack_d8 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_130 = uStack_130 & 0xffffffff;
      func_0x000109a84868(&uStack_130);
    }
  }
  else {
    FUN_109a8a180(&uStack_130,param_1,0xffffffff);
  }
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_2 + 2);
    uStack_d0 = *puVar9;
    uStack_c8 = puVar9[1];
    uStack_b8 = puVar9[3];
    uStack_c0 = puVar9[2];
    uStack_a8 = puVar9[5];
    uStack_b0 = puVar9[4];
    uStack_98 = puVar9[7];
    uStack_a0 = puVar9[6];
    puStack_90 = &uStack_c8;
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar16) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_80 = *(undefined8 *)puVar9[9];
      uStack_78 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_d0 = uStack_d0 & 0xffffffff;
      func_0x000109a84868(&uStack_d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_d0,param_2,0xffffffff);
  }
  iVar19 = 0;
  puVar9 = &uStack_130;
  bVar16 = false;
  do {
    if (((2 < (int)*(uint *)((long)puVar9 + 4)) ||
        (*(uint *)((long)puVar9 + 0xc) != uStack_128._4_4_)) ||
       ((((uint)uStack_130 ^ (uint)*puVar9) & 0xfff) != 0)) {
      puVar8 = (undefined4 *)0x58;
      func_0x000107c2ae8c(0x58,iVar19);
      *puVar8 = 1;
      uStack_190 = puVar8 + 1;
      uStack_188 = 0x50;
      *(undefined8 *)(puVar8 + 7) = 0x20736c6f632e5d69;
      *(undefined8 *)(puVar8 + 5) = 0x5b63727320262620;
      *(undefined8 *)(puVar8 + 0xb) = 0x2620736c6f632e5d;
      *(undefined8 *)(puVar8 + 9) = 0x305b637273203d3d;
      *(undefined8 *)(puVar8 + 0xf) = 0x202928657079742e;
      *(undefined8 *)(puVar8 + 0xd) = 0x5d695b6372732026;
      *(undefined8 *)(puVar8 + 0x13) = 0x2928657079742e5d;
      *(undefined8 *)(puVar8 + 0x11) = 0x305b637273203d3d;
      *(undefined1 *)(puVar8 + 0x15) = 0;
      *(undefined8 *)(puVar8 + 3) = 0x32203d3c20736d69;
      *(undefined8 *)(puVar8 + 1) = 0x642e5d695b637273;
      FUN_109ac3188(0xffffff29,&uStack_190,&UNK_10f598599,&UNK_10f597913,0xb23);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109a928c4);
      (*pcVar6)();
    }
    iVar19 = (uint)puVar9[1] + iVar19;
    bVar4 = !bVar16;
    puVar9 = &uStack_d0;
    bVar16 = true;
  } while (bVar4);
  FUN_109a8f64c(param_3,iVar19,uStack_128._4_4_,(uint)uStack_130 & 0xfff,0xffffffff,0,0);
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_3 + 2);
    uStack_190 = (undefined4 *)*puVar9;
    uStack_188 = puVar9[1];
    uStack_178 = puVar9[3];
    uStack_180 = puVar9[2];
    uStack_168 = puVar9[5];
    uStack_170 = puVar9[4];
    uStack_158 = puVar9[7];
    uStack_160 = puVar9[6];
    uStack_150 = (ulong)&uStack_190 | 8;
    puStack_148 = &uStack_140;
    uStack_140 = 0;
    uStack_138 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar16) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_140 = *(undefined8 *)puVar9[9];
      uStack_138 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_190 = (undefined4 *)((ulong)uStack_190 & 0xffffffff);
      func_0x000109a84868(&uStack_190);
    }
  }
  else {
    FUN_109a8a180(&uStack_190,param_3,0xffffffff);
  }
  iVar19 = 0;
  puVar9 = &uStack_130;
  bVar16 = false;
  do {
    uStack_208 = 0;
    iStack_204 = iVar19;
    puStack_200 = (undefined8 *)NEON_rev64(puVar9[1],4);
    FUN_109a852c8(&uStack_1f0,&uStack_190,&uStack_208);
    uStack_208 = 0x2010000;
    uStack_1f8 = 0;
    pdVar10 = (double *)&uStack_208;
    puVar7 = puVar9;
    puStack_200 = &uStack_1f0;
    FUN_109a479a0();
    uVar14 = puVar9[1];
    if (lStack_1b8 != 0) {
      piVar1 = (int *)(lStack_1b8 + 0x14);
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
        puVar7 = &uStack_1f0;
        func_0x000109a848d4();
      }
    }
    lStack_1b8 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    if (0 < uStack_1f0._4_4_) {
      lVar11 = 0;
      do {
        *(undefined4 *)(lStack_1b0 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < uStack_1f0._4_4_);
    }
    if (puStack_1a8 != auStack_1a0 && puStack_1a8 != (undefined1 *)0x0) {
      puVar7 = *(ulong **)(puStack_1a8 + -8);
      _free();
    }
    iVar19 = (uint)uVar14 + iVar19;
    bVar4 = !bVar16;
    puVar9 = &uStack_d0;
    bVar16 = true;
  } while (bVar4);
  if (uStack_158 != 0) {
    piVar1 = (int *)(uStack_158 + 0x14);
    do {
      iVar19 = *piVar1;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar16) {
        *piVar1 = iVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar19 + -1 == 0) {
      puVar7 = &uStack_190;
      func_0x000109a848d4();
    }
  }
  uStack_158 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  if (0 < uStack_190._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_150 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_190._4_4_);
  }
  if (puStack_148 != &uStack_140 && puStack_148 != (undefined8 *)0x0) {
    puVar7 = (ulong *)puStack_148[-1];
    _free();
  }
  puVar9 = &uStack_70;
  do {
    puVar17 = puVar9 + -0xc;
    if (puVar9[-5] != 0) {
      piVar1 = (int *)(puVar9[-5] + 0x14);
      do {
        iVar19 = *piVar1;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar16) {
          *piVar1 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar19 + -1 == 0) {
        puVar7 = puVar17;
        func_0x000109a848d4();
      }
    }
    puVar9[-5] = 0;
    puVar9[-9] = 0;
    puVar9[-10] = 0;
    puVar9[-7] = 0;
    puVar9[-8] = 0;
    if (0 < (int)*(uint *)((long)puVar9 + -0x5c)) {
      lVar11 = 0;
      uVar14 = puVar9[-4];
      do {
        *(undefined4 *)(uVar14 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)*(uint *)((long)puVar9 + -0x5c));
    }
    puVar12 = (ulong *)puVar9[-3];
    if (puVar12 != puVar9 + -2 && puVar12 != (ulong *)0x0) {
      puVar7 = (ulong *)puVar12[-1];
      _free();
    }
    puVar9 = puVar17;
  } while (puVar17 != &uStack_130);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pdVar10 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_190);
    lVar11 = -0xc0;
    do {
      func_0x00010567aa40(puVar17);
      puVar17 = puVar17 + -0xc;
      lVar11 = lVar11 + 0x60;
    } while (lVar11 != 0);
  }
  __Unwind_Resume();
  puVar9 = puVar7;
  FUN_109a8d7e8();
  if ((int)puVar9 < 3) {
    if ((*puVar7 & 0x1f0000) == 0x10000) {
      puVar9 = (ulong *)puVar7[1];
      uStack_2a0 = (ulong)&uStack_2e0 | 8;
      uStack_2d8 = puVar9[1];
      uStack_2e0 = (undefined8 *)*puVar9;
      uStack_2c8 = puVar9[3];
      pfStack_2d0 = (float *)puVar9[2];
      uStack_2b8 = puVar9[5];
      uStack_2c0 = puVar9[4];
      uStack_2a8 = puVar9[7];
      uStack_2b0 = puVar9[6];
      puStack_298 = &uStack_290;
      uStack_290 = 0;
      uStack_288 = 0;
      if (puVar9[7] != 0) {
        piVar1 = (int *)(puVar9[7] + 0x14);
        do {
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar16) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)puVar9 + 4) < 3) {
        uStack_290 = *(ulong *)puVar9[9];
        uStack_288 = ((ulong *)puVar9[9])[1];
      }
      else {
        uStack_2e0 = (undefined8 *)((ulong)uStack_2e0 & 0xffffffff);
        func_0x000109a84868(&uStack_2e0);
      }
    }
    else {
      FUN_109a8a180(&uStack_2e0,puVar7,0xffffffff);
    }
    uVar14 = uStack_2d8 & 0xffffffff;
    uVar5 = uStack_2d8._4_4_;
    uVar13 = (ulong)uStack_2d8._4_4_;
    lVar11 = (long)(int)uStack_2d8._4_4_;
    if (((uint)uStack_2e0 & 0xfff) == 6) {
      if (0 < (int)uStack_2d8) {
        uVar13 = 0;
        dVar22 = *pdVar10;
        pfVar15 = pfStack_2d0;
        do {
          if (0 < (int)uStack_2d8._4_4_) {
            uVar20 = 0;
            do {
              dVar23 = dVar22;
              if (uVar13 != uVar20) {
                dVar23 = 0.0;
              }
              *(double *)(pfVar15 + uVar20 * 2) = dVar23;
              uVar20 = uVar20 + 1;
            } while (uStack_2d8._4_4_ != uVar20);
          }
          uVar13 = uVar13 + 1;
          pfVar15 = (float *)((long)pfVar15 + (uStack_290 & 0xfffffffffffffff8));
        } while (uVar13 != uVar14);
      }
    }
    else if (((uint)uStack_2e0 & 0xfff) == 5) {
      if (0 < (int)uStack_2d8) {
        uVar20 = 0;
        dVar22 = *pdVar10;
        uVar21 = uStack_290 & 0xfffffffffffffffc;
        pfVar18 = pfStack_2d0;
        pfVar15 = pfStack_2d0;
        do {
          if (0 < (int)uVar5) {
            _bzero(pfVar18,uVar13 << 2);
          }
          if ((long)uVar20 < lVar11) {
            *pfVar15 = (float)dVar22;
          }
          uVar20 = uVar20 + 1;
          pfVar15 = (float *)((long)pfVar15 + uVar21 + 4);
          pfVar18 = (float *)((long)pfVar18 + uVar21);
        } while (uVar14 != uVar20);
      }
    }
    else {
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      FUN_109a48880(&uStack_2e0,&uStack_340);
      FUN_109a856e8(&uStack_340,&uStack_2e0,0);
      FUN_109a48880(&uStack_340,pdVar10);
      if (lStack_308 != 0) {
        piVar1 = (int *)(lStack_308 + 0x14);
        do {
          iVar19 = *piVar1;
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar16) {
            *piVar1 = iVar19 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar19 + -1 == 0) {
          func_0x000109a848d4(&uStack_340);
        }
      }
      lStack_308 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      if (0 < uStack_340._4_4_) {
        lVar11 = 0;
        do {
          *(undefined4 *)(lStack_300 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < uStack_340._4_4_);
      }
      if (puStack_2f8 != auStack_2f0 && puStack_2f8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_2f8 + -8));
      }
    }
    if (uStack_2a8 != 0) {
      piVar1 = (int *)(uStack_2a8 + 0x14);
      do {
        iVar19 = *piVar1;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar16) {
          *piVar1 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar19 + -1 == 0) {
        func_0x000109a848d4(&uStack_2e0);
      }
    }
    uStack_2a8 = 0;
    uStack_2c8 = 0;
    pfStack_2d0 = (float *)0x0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    if (0 < uStack_2e0._4_4_) {
      lVar11 = 0;
      do {
        *(undefined4 *)(uStack_2a0 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < uStack_2e0._4_4_);
    }
    if (puStack_298 != &uStack_290 && puStack_298 != (ulong *)0x0) {
      _free(puStack_298[-1]);
    }
    return;
  }
  puVar8 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar8 = 1;
  uStack_2e0 = (undefined8 *)(puVar8 + 1);
  *uStack_2e0 = 0x28736d69642e6d5f;
  uStack_2d8 = 0xe;
  *(undefined1 *)((long)puVar8 + 0x12) = 0;
  *(undefined8 *)((long)puVar8 + 10) = 0x32203d3c20292873;
  FUN_109ac3188(0xffffff29,&uStack_2e0,&UNK_10f5985b0,&UNK_10f597913,0xb69);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109a92cd0);
  (*pcVar6)();
}



/* Entry: 109a92964; end: 109a92d2b;  */

void FUN_109a92964(uint *param_1,double *param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  uint *puVar8;
  undefined4 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float *pfStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  puVar8 = param_1;
  FUN_109a8d7e8(param_1,0xffffffff);
  if ((int)puVar8 < 3) {
    if ((*param_1 & 0x1f0000) == 0x10000) {
      puVar10 = *(ulong **)(param_1 + 2);
      uStack_90 = (ulong)&uStack_d0 | 8;
      uStack_c8 = puVar10[1];
      uStack_d0 = (undefined8 *)*puVar10;
      uStack_b8 = puVar10[3];
      pfStack_c0 = (float *)puVar10[2];
      uStack_a8 = puVar10[5];
      uStack_b0 = puVar10[4];
      uStack_98 = puVar10[7];
      uStack_a0 = puVar10[6];
      puStack_88 = &uStack_80;
      uStack_80 = 0;
      uStack_78 = 0;
      if (puVar10[7] != 0) {
        piVar1 = (int *)(puVar10[7] + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(int *)((long)puVar10 + 4) < 3) {
        uStack_80 = *(ulong *)puVar10[9];
        uStack_78 = ((ulong *)puVar10[9])[1];
      }
      else {
        uStack_d0 = (undefined8 *)((ulong)uStack_d0 & 0xffffffff);
        func_0x000109a84868(&uStack_d0);
      }
    }
    else {
      FUN_109a8a180(&uStack_d0,param_1,0xffffffff);
    }
    uVar3 = uStack_c8 & 0xffffffff;
    uVar6 = uStack_c8._4_4_;
    uVar11 = (ulong)uStack_c8._4_4_;
    lVar14 = (long)(int)uStack_c8._4_4_;
    if (((uint)uStack_d0 & 0xfff) == 6) {
      if (0 < (int)uStack_c8) {
        uVar11 = 0;
        dVar17 = *param_2;
        pfVar12 = pfStack_c0;
        do {
          if (0 < (int)uStack_c8._4_4_) {
            uVar15 = 0;
            do {
              dVar18 = dVar17;
              if (uVar11 != uVar15) {
                dVar18 = 0.0;
              }
              *(double *)(pfVar12 + uVar15 * 2) = dVar18;
              uVar15 = uVar15 + 1;
            } while (uStack_c8._4_4_ != uVar15);
          }
          uVar11 = uVar11 + 1;
          pfVar12 = (float *)((long)pfVar12 + (uStack_80 & 0xfffffffffffffff8));
        } while (uVar11 != uVar3);
      }
    }
    else if (((uint)uStack_d0 & 0xfff) == 5) {
      if (0 < (int)uStack_c8) {
        uVar15 = 0;
        dVar17 = *param_2;
        uVar16 = uStack_80 & 0xfffffffffffffffc;
        pfVar13 = pfStack_c0;
        pfVar12 = pfStack_c0;
        do {
          if (0 < (int)uVar6) {
            _bzero(pfVar13,uVar11 << 2);
          }
          if ((long)uVar15 < lVar14) {
            *pfVar12 = (float)dVar17;
          }
          uVar15 = uVar15 + 1;
          pfVar12 = (float *)((long)pfVar12 + uVar16 + 4);
          pfVar13 = (float *)((long)pfVar13 + uVar16);
        } while (uVar3 != uVar15);
      }
    }
    else {
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      FUN_109a48880(&uStack_d0,&uStack_130);
      FUN_109a856e8(&uStack_130,&uStack_d0,0);
      FUN_109a48880(&uStack_130,param_2);
      if (lStack_f8 != 0) {
        piVar1 = (int *)(lStack_f8 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_130);
        }
      }
      lStack_f8 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      if (0 < uStack_130._4_4_) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lStack_f0 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < uStack_130._4_4_);
      }
      if (puStack_e8 != auStack_e0 && puStack_e8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_e8 + -8));
      }
    }
    if (uStack_98 != 0) {
      piVar1 = (int *)(uStack_98 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_d0);
      }
    }
    uStack_98 = 0;
    uStack_b8 = 0;
    pfStack_c0 = (float *)0x0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    if (0 < uStack_d0._4_4_) {
      lVar14 = 0;
      do {
        *(undefined4 *)(uStack_90 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < uStack_d0._4_4_);
    }
    if (puStack_88 != &uStack_80 && puStack_88 != (ulong *)0x0) {
      _free(puStack_88[-1]);
    }
    return;
  }
  puVar9 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  uStack_d0 = (undefined8 *)(puVar9 + 1);
  *uStack_d0 = 0x28736d69642e6d5f;
  uStack_c8 = 0xe;
  *(undefined1 *)((long)puVar9 + 0x12) = 0;
  *(undefined8 *)((long)puVar9 + 10) = 0x32203d3c20292873;
  FUN_109ac3188(0xffffff29,&uStack_d0,&UNK_10f5985b0,&UNK_10f597913,0xb69);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109a92cd0);
  (*pcVar7)();
}



/* Entry: 109a92d2c; end: 109a92fe3;  */

void FUN_109a92d2c(uint *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 *puVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined4 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  ulong uVar15;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_1 + 2);
    uStack_80 = (ulong)&uStack_c0 | 8;
    uStack_b8 = puVar8[1];
    uStack_c0 = *puVar8;
    uStack_a8 = puVar8[3];
    uStack_b0 = puVar8[2];
    uStack_98 = puVar8[5];
    uStack_a0 = puVar8[4];
    uStack_88 = puVar8[7];
    uStack_90 = puVar8[6];
    plStack_78 = &lStack_70;
    lStack_70 = 0;
    lStack_68 = 0;
    if (puVar8[7] != 0) {
      piVar1 = (int *)(puVar8[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      lStack_70 = *(long *)puVar8[9];
      lStack_68 = ((long *)puVar8[9])[1];
    }
    else {
      uStack_c0 = uStack_c0 & 0xffffffff;
      func_0x000109a84868(&uStack_c0);
    }
  }
  else {
    FUN_109a8a180(&uStack_c0,param_1,0xffffffff);
  }
  lVar9 = lStack_70;
  if ((int)uStack_c0._4_4_ < 1) {
    lVar11 = 0;
  }
  else {
    if (2 < uStack_c0._4_4_) goto LAB_109a92f44;
    lVar11 = plStack_78[(ulong)uStack_c0._4_4_ - 1];
  }
  uVar3 = uStack_b8 & 0xffffffff;
  if ((int)uStack_b8 == uStack_b8._4_4_) {
    if (0 < (int)uStack_b8) {
      uVar18 = 0;
      uVar15 = uVar3;
      uVar17 = uStack_b0;
      uVar19 = uStack_b0;
      iVar16 = 0;
      do {
        uVar14 = (uint)uVar15;
        if (param_2 == 0) {
          uVar14 = (uint)uVar18;
        }
        uVar15 = (ulong)uVar14;
        uVar18 = uVar18 + 1;
        iVar2 = (int)uVar18;
        if (param_2 == 0) {
          iVar2 = iVar16;
        }
        if (iVar2 < (int)uVar14) {
          lVar10 = (long)(int)uVar14 - (long)iVar2;
          lVar12 = uVar19 + lVar9 * iVar2;
          lVar13 = uVar17 + lVar11 * iVar2;
          do {
            _memcpy(lVar13,lVar12,lVar11);
            lVar12 = lVar12 + lVar9;
            lVar13 = lVar13 + lVar11;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        uVar19 = uVar19 + lVar11;
        uVar17 = uVar17 + lVar9;
        iVar16 = iVar2;
      } while (uVar18 != uVar3);
    }
    if (uStack_88 != 0) {
      piVar1 = (int *)(uStack_88 + 0x14);
      do {
        iVar16 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 + -1 == 0) {
        func_0x000109a848d4(&uStack_c0);
      }
    }
    uStack_88 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    if (0 < (int)uStack_c0._4_4_) {
      lVar9 = 0;
      do {
        *(undefined4 *)(uStack_80 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uStack_c0._4_4_);
    }
    if (plStack_78 != &lStack_70 && plStack_78 != (long *)0x0) {
      _free(plStack_78[-1]);
    }
    return;
  }
LAB_109a92f44:
  puVar7 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar7 = 1;
  puStack_d0 = puVar7 + 1;
  uStack_c8 = 0x1f;
  *(undefined1 *)((long)puVar7 + 0x23) = 0;
  *(undefined8 *)(puVar7 + 3) = 0x6d2026262032203d;
  *(undefined8 *)(puVar7 + 1) = 0x3c20736d69642e6d;
  *(undefined8 *)((long)puVar7 + 0x1b) = 0x736c6f632e6d203d;
  *(undefined8 *)((long)puVar7 + 0x13) = 0x3d2073776f722e6d;
  FUN_109ac3188(0xffffff29,&puStack_d0,&UNK_10f59864c,&UNK_10f597913,0xcd2);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109a92fa4);
  (*pcVar6)();
}



/* Entry: 109a92fe4; end: 109a93443;  */

void FUN_109a92fe4(uint *param_1,uint *param_2,uint *param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  ulong *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  float *pfVar18;
  double *pdVar19;
  long lVar20;
  undefined4 uVar21;
  float *pfVar22;
  double *pdVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_b0;
  ulong uStack_a8;
  double *pdStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  int *piStack_70;
  ulong *puStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar8 = (uint *)&uStack_b0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar12 = *(ulong **)(param_3 + 2);
    piStack_70 = (int *)((ulong)&uStack_b0 | 8);
    uStack_a8 = puVar12[1];
    uStack_b0 = *puVar12;
    uStack_98 = puVar12[3];
    pdStack_a0 = (double *)puVar12[2];
    uStack_88 = puVar12[5];
    uStack_90 = puVar12[4];
    uStack_78 = puVar12[7];
    uStack_80 = puVar12[6];
    puStack_68 = &uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    if (puVar12[7] != 0) {
      piVar1 = (int *)(puVar12[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar12 + 4) < 3) {
      uStack_60 = *(ulong *)puVar12[9];
      uStack_58 = ((ulong *)puVar12[9])[1];
    }
    else {
      uStack_b0 = uStack_b0 & 0xffffffff;
      func_0x000109a84868(&uStack_b0);
    }
  }
  else {
    FUN_109a8a180(&uStack_b0,param_3,0xffffffff);
  }
  if ((((2 < (int)param_2[1]) || (2 < uStack_b0._4_4_)) ||
      ((*(int **)(param_2 + 0x10))[1] != piStack_70[1])) ||
     (**(int **)(param_2 + 0x10) != *piStack_70)) {
LAB_109a93360:
    puVar11 = (undefined4 *)0x8c;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar11 + 0x17) = 0x7c7c202931203d3d;
    *(undefined8 *)(puVar11 + 0x15) = 0x20736c6f63202626;
    *(undefined8 *)(puVar11 + 0x1b) = 0x28736c656e6e6168;
    *(undefined8 *)(puVar11 + 0x19) = 0x632a736c6f632820;
    *(undefined8 *)(puVar11 + 0x1f) = 0x3d2073776f722026;
    *(undefined8 *)(puVar11 + 0x1d) = 0x262033203d3d2029;
    *(undefined8 *)(puVar11 + 7) = 0x657a697320262620;
    *(undefined8 *)(puVar11 + 5) = 0x32203d3c20736d69;
    *(undefined8 *)(puVar11 + 0xb) = 0x26202928657a6973;
    *(undefined8 *)(puVar11 + 9) = 0x2e6d203d3d202928;
    *(undefined8 *)(puVar11 + 0xf) = 0x2928657079742e6d;
    *(undefined8 *)(puVar11 + 0xd) = 0x203d3d2070742026;
    *(undefined8 *)(puVar11 + 0x13) = 0x2033203d3d207377;
    *(undefined8 *)(puVar11 + 0x11) = 0x6f72282820262620;
    *puVar11 = 1;
    uStack_48 = puVar11 + 1;
    uStack_40 = 0x85;
    *(undefined1 *)((long)puVar11 + 0x89) = 0;
    *(undefined8 *)((long)puVar11 + 0x81) = 0x292931203d3d2073;
    *(undefined8 *)(puVar11 + 3) = 0x642e6d2026262032;
    *(undefined8 *)(puVar11 + 1) = 0x203d3c20736d6964;
    FUN_109ac3188(0xffffff29,&uStack_48,&UNK_10f491684,&UNK_10f597913,0xce6);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x109a933e8);
    (*pcVar7)();
  }
  uVar26 = *param_2;
  uVar16 = uVar26 & 0xfff;
  if (uVar16 != ((uint)uStack_b0 & 0xfff)) goto LAB_109a93360;
  uVar27 = param_2[3];
  if ((param_2[2] == 3) && (uVar27 == 1)) {
    uVar21 = 3;
  }
  else {
    if ((param_2[2] != 1) || (uVar27 + uVar27 * (uVar26 >> 3 & 0x1ff) != 3)) goto LAB_109a93360;
    uVar21 = 1;
  }
  *param_1 = 0x42ff0000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar9 = param_1 + 0x14;
  puVar9[0] = 0;
  puVar9[1] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint **)(param_1 + 0x10) = param_1 + 2;
  *(uint **)(param_1 + 0x12) = puVar9;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uStack_48 = (undefined4 *)CONCAT44(uVar27,uVar21);
  iVar15 = (int)&uStack_48;
  puVar13 = (uint *)0x2;
  puVar9 = param_1;
  FUN_109a83fd0();
  if ((uVar26 & 7) == 6) {
    pdVar19 = *(double **)(param_2 + 4);
    pdVar23 = *(double **)(param_1 + 4);
    if ((int)param_2[2] < 2) {
      uVar24 = 1;
      uVar25 = 1;
    }
    else {
      uVar24 = *(ulong *)(param_2 + 0x14) >> 3;
      uVar25 = uStack_60 >> 3;
    }
    *pdVar23 = -(pdVar19[uVar24 * 2] * pdStack_a0[uVar25]) +
               pdStack_a0[uVar25 * 2] * pdVar19[uVar24];
    pdVar23[1] = -(*pdVar19 * pdStack_a0[uVar25 * 2]) + *pdStack_a0 * pdVar19[uVar24 * 2];
    pdVar23[2] = -(pdVar19[uVar24] * *pdStack_a0) + pdStack_a0[uVar25] * *pdVar19;
  }
  else if ((uVar26 & 7) == 5) {
    pfVar18 = *(float **)(param_2 + 4);
    pfVar22 = *(float **)(param_1 + 4);
    if ((int)param_2[2] < 2) {
      uVar24 = 1;
      uVar25 = 1;
    }
    else {
      uVar24 = *(ulong *)(param_2 + 0x14) >> 2;
      uVar25 = uStack_60 >> 2;
    }
    *pfVar22 = -(pfVar18[uVar24 * 2] * *(float *)((long)pdStack_a0 + uVar25 * 4)) +
               *(float *)(pdStack_a0 + uVar25) * pfVar18[uVar24];
    pfVar22[1] = -(*pfVar18 * *(float *)(pdStack_a0 + uVar25)) +
                 *(float *)pdStack_a0 * pfVar18[uVar24 * 2];
    pfVar22[2] = -(pfVar18[uVar24] * *(float *)pdStack_a0) +
                 *(float *)((long)pdStack_a0 + uVar25 * 4) * *pfVar18;
  }
  if (uStack_78 != 0) {
    piVar1 = (int *)(uStack_78 + 0x14);
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
      func_0x000109a848d4();
      puVar9 = puVar8;
    }
  }
  uStack_78 = 0;
  uStack_98 = 0;
  pdStack_a0 = (double *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < uStack_b0._4_4_) {
    lVar20 = 0;
    do {
      piStack_70[lVar20] = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_b0._4_4_);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (ulong *)0x0) {
    puVar9 = (uint *)puStack_68[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar13 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  FUN_109a8d7e8();
  if (2 < (int)puVar8) {
    puVar11 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    uStack_180 = puVar11 + 1;
    uStack_178 = 0x10;
    *(undefined1 *)(puVar11 + 5) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x32203d3c20292873;
    *(undefined8 *)(puVar11 + 1) = 0x6d69642e6372735f;
    FUN_109ac3188(0xffffff29,&uStack_180,&UNK_10f5986df,&UNK_10f597913,0xe75);
    goto LAB_109a93ecc;
  }
  puVar8 = puVar9;
  FUN_109a8b904(puVar9,0xffffffff);
  uVar26 = (uint)puVar8;
  if (((int)param_6 < 0) && (param_6 = uVar26, (int)*puVar13 < 0)) {
    puVar10 = puVar13;
    FUN_109a8b904(puVar13,0xffffffff);
    param_6 = (uint)puVar10;
  }
  uVar27 = uVar26;
  if (-1 < (int)param_6) {
    uVar27 = param_6;
  }
  if (3 < uVar16) {
    puVar11 = (undefined4 *)0x60;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    uStack_180 = puVar11 + 1;
    uStack_178 = 0x58;
    *(undefined8 *)(puVar11 + 0xb) = 0x706f207c7c205841;
    *(undefined8 *)(puVar11 + 9) = 0x4d5f454355444552;
    *(undefined8 *)(puVar11 + 0xf) = 0x494d5f4543554445;
    *(undefined8 *)(puVar11 + 0xd) = 0x525f5643203d3d20;
    *(undefined8 *)(puVar11 + 0x13) = 0x45525f5643203d3d;
    *(undefined8 *)(puVar11 + 0x11) = 0x20706f207c7c204e;
    *(undefined8 *)(puVar11 + 3) = 0x5f4543554445525f;
    *(undefined8 *)(puVar11 + 1) = 0x5643203d3d20706f;
    *(undefined1 *)(puVar11 + 0x17) = 0;
    *(undefined8 *)(puVar11 + 0x15) = 0x4756415f45435544;
    *(undefined8 *)(puVar11 + 7) = 0x5f5643203d3d2070;
    *(undefined8 *)(puVar11 + 5) = 0x6f207c7c204d5553;
    FUN_109ac3188(0xffffff29,&uStack_180,&UNK_10f5986df,&UNK_10f597913,0xe7f);
    goto LAB_109a93ecc;
  }
  if ((*puVar9 & 0x1f0000) == 0x10000) {
    puVar14 = *(undefined8 **)(puVar9 + 2);
    uStack_140 = (ulong)&uStack_180 | 8;
    uStack_178 = puVar14[1];
    uStack_180 = (undefined4 *)*puVar14;
    uStack_168 = puVar14[3];
    uStack_170 = puVar14[2];
    uStack_158 = puVar14[5];
    uStack_160 = puVar14[4];
    lStack_148 = puVar14[7];
    uStack_150 = puVar14[6];
    puStack_138 = &uStack_130;
    uStack_130 = 0;
    uStack_128 = 0;
    if (puVar14[7] != 0) {
      piVar1 = (int *)(puVar14[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar14 + 4) < 3) {
      uStack_130 = *(undefined8 *)puVar14[9];
      uStack_128 = ((undefined8 *)puVar14[9])[1];
    }
    else {
      uStack_180 = (undefined4 *)((ulong)uStack_180 & 0xffffffff);
      func_0x000109a84868(&uStack_180);
    }
  }
  else {
    FUN_109a8a180(&uStack_180,puVar9,0xffffffff);
  }
  uVar27 = uVar27 & 7;
  if (iVar15 == 0) {
    uVar21 = uStack_178._4_4_;
    uVar6 = 1;
  }
  else {
    uVar21 = 1;
    uVar6 = (undefined4)uStack_178;
  }
  FUN_109a8f64c(puVar13,uVar6,uVar21,uVar27 | uVar26 & 0xff8,0xffffffff,0,0);
  if ((*puVar13 & 0x1f0000) == 0x10000) {
    puVar12 = *(ulong **)(puVar13 + 2);
    uStack_1a0 = (ulong)&uStack_1e0 | 8;
    uStack_1d8 = (undefined4 *)puVar12[1];
    uStack_1e0 = *puVar12;
    uStack_1c8 = puVar12[3];
    uStack_1d0 = puVar12[2];
    uStack_1b8 = puVar12[5];
    uStack_1c0 = puVar12[4];
    uStack_1a8 = puVar12[7];
    uStack_1b0 = puVar12[6];
    puStack_198 = &uStack_190;
    uStack_190 = 0;
    uStack_188 = 0;
    if (puVar12[7] != 0) {
      piVar1 = (int *)(puVar12[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar12 + 4) < 3) {
      uStack_190 = *(undefined8 *)puVar12[9];
      uStack_188 = ((undefined8 *)puVar12[9])[1];
    }
    else {
      uStack_1e0 = uStack_1e0 & 0xffffffff;
      func_0x000109a84868(&uStack_1e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_1e0,puVar13,0xffffffff);
  }
  uStack_200 = (ulong)&uStack_240 | 8;
  uStack_238 = uStack_1d8;
  uStack_240 = uStack_1e0;
  uStack_228 = uStack_1c8;
  uStack_230 = uStack_1d0;
  uStack_218 = uStack_1b8;
  uStack_220 = uStack_1c0;
  uStack_208 = uStack_1a8;
  uStack_210 = uStack_1b0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  if (uStack_1a8 != 0) {
    piVar1 = (int *)(uStack_1a8 + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puStack_1f8 = &uStack_1f0;
  if (uStack_1e0._4_4_ < 3) {
    uStack_1f0 = *puStack_198;
    uStack_1e8 = puStack_198[1];
  }
  else {
    uStack_240 = uStack_1e0 & 0xffffffff;
    func_0x000109a84868(&uStack_240,&uStack_1e0);
  }
  uVar2 = uVar26 & 7;
  uVar17 = uVar16;
  if (((uVar16 == 1) && (uVar17 = 0, uVar2 < 4)) && (uVar27 < 4)) {
    if (((2 < uStack_240._4_4_) || ((int)uStack_238 != (int)uStack_1d8)) ||
       ((uStack_238._4_4_ != uStack_1d8._4_4_ ||
        ((((uint)uStack_240 & 0xfff) != (uVar26 & 0xff8 | 4) || (uStack_230 == 0)))))) {
      puStack_120 = uStack_1d8;
      FUN_109a83fd0(&uStack_240,2,&puStack_120);
    }
    uVar27 = 4;
    uVar17 = 0;
  }
  if (iVar15 == 0) {
    if (uVar17 == 3) {
      if (((ulong)puVar8 & 7) == 0 && uVar27 == 0) {
        pcVar7 = FUN_109a95808;
      }
      else if ((uVar2 == 2) && (uVar27 == 2)) {
        pcVar7 = FUN_109a95a24;
      }
      else if ((uVar2 == 3) && (uVar27 == 3)) {
        pcVar7 = (code *)0x109a95bf0;
      }
      else if ((uVar2 == 5) && (uVar27 == 5)) {
        pcVar7 = (code *)0x109a95dbc;
      }
      else {
        if ((uVar2 != 6) || (uVar27 != 6)) goto LAB_109a93e64;
        pcVar7 = (code *)0x109a95f54;
      }
    }
    else if (uVar17 == 2) {
      if (((ulong)puVar8 & 7) == 0 && uVar27 == 0) {
        pcVar7 = FUN_109a94f24;
      }
      else if ((uVar2 == 2) && (uVar27 == 2)) {
        pcVar7 = FUN_109a95140;
      }
      else if ((uVar2 == 3) && (uVar27 == 3)) {
        pcVar7 = (code *)0x109a9530c;
      }
      else if ((uVar2 == 5) && (uVar27 == 5)) {
        pcVar7 = (code *)0x109a954d8;
      }
      else {
        if ((uVar2 != 6) || (uVar27 != 6)) goto LAB_109a93e64;
        pcVar7 = (code *)0x109a95670;
      }
    }
    else {
      if (uVar17 != 0) goto LAB_109a93e64;
      if ((((ulong)puVar8 & 7) == 0) && (uVar27 == 4)) {
        pcVar7 = FUN_109a93fa0;
      }
      else if ((((ulong)puVar8 & 7) == 0) && (uVar27 == 5)) {
        pcVar7 = (code *)0x109a94128;
      }
      else if ((((ulong)puVar8 & 7) == 0) && (uVar27 == 6)) {
        pcVar7 = (code *)0x109a942b4;
      }
      else if ((uVar2 == 2) && (uVar27 == 5)) {
        pcVar7 = (code *)0x109a94440;
      }
      else if ((uVar2 == 2) && (uVar27 == 6)) {
        pcVar7 = (code *)0x109a945c4;
      }
      else if ((uVar2 == 3) && (uVar27 == 5)) {
        pcVar7 = (code *)0x109a94758;
      }
      else if ((uVar2 == 3) && (uVar27 == 6)) {
        pcVar7 = (code *)0x109a948dc;
      }
      else if ((uVar2 == 5) && (uVar27 == 5)) {
        pcVar7 = (code *)0x109a94a70;
      }
      else if ((uVar2 == 5) && (uVar27 == 6)) {
        pcVar7 = (code *)0x109a94bfc;
      }
      else {
        if ((uVar2 != 6) || (uVar27 != 6)) goto LAB_109a93e64;
        pcVar7 = (code *)0x109a94d98;
      }
    }
LAB_109a93b8c:
    (*pcVar7)(&uStack_180,&uStack_240);
    if (uVar16 == 1) {
      puStack_120 = (undefined4 *)CONCAT44(puStack_120._4_4_,0x2010000);
      puStack_118 = &uStack_1e0;
      uStack_110 = 0;
      piVar1 = (int *)((ulong)&uStack_180 | 8);
      if (iVar15 != 0) {
        piVar1 = (int *)((ulong)&uStack_180 | 0xc);
      }
      FUN_109a41858(1.0 / (double)*piVar1,0,&uStack_240,&puStack_120,(uint)uStack_1e0 & 0xfff);
    }
    if (uStack_208 != 0) {
      piVar1 = (int *)(uStack_208 + 0x14);
      do {
        iVar15 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar15 + -1 == 0) {
        func_0x000109a848d4(&uStack_240);
      }
    }
    uStack_208 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    if (0 < uStack_240._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)(uStack_200 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_240._4_4_);
    }
    if (puStack_1f8 != &uStack_1f0 && puStack_1f8 != (undefined8 *)0x0) {
      _free(puStack_1f8[-1]);
    }
    if (uStack_1a8 != 0) {
      piVar1 = (int *)(uStack_1a8 + 0x14);
      do {
        iVar15 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar15 + -1 == 0) {
        func_0x000109a848d4(&uStack_1e0);
      }
    }
    uStack_1a8 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    if (0 < uStack_1e0._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)(uStack_1a0 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_1e0._4_4_);
    }
    if (puStack_198 != &uStack_190 && puStack_198 != (undefined8 *)0x0) {
      _free(puStack_198[-1]);
    }
    if (lStack_148 != 0) {
      piVar1 = (int *)(lStack_148 + 0x14);
      do {
        iVar15 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar15 + -1 == 0) {
        func_0x000109a848d4(&uStack_180);
      }
    }
    lStack_148 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    if (0 < uStack_180._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)(uStack_140 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_180._4_4_);
    }
    if (puStack_138 != &uStack_130 && puStack_138 != (undefined8 *)0x0) {
      _free(puStack_138[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (uVar17 == 3) {
      if (((ulong)puVar8 & 7) == 0 && uVar27 == 0) {
        pcVar7 = FUN_109a97e04;
      }
      else if ((uVar2 == 2) && (uVar27 == 2)) {
        pcVar7 = FUN_109a97ff0;
      }
      else if ((uVar2 == 3) && (uVar27 == 3)) {
        pcVar7 = FUN_109a98204;
      }
      else if ((uVar2 == 5) && (uVar27 == 5)) {
        pcVar7 = FUN_109a98420;
      }
      else {
        if ((uVar2 != 6) || (uVar27 != 6)) goto LAB_109a93e64;
        pcVar7 = FUN_109a98614;
      }
      goto LAB_109a93b8c;
    }
    if (uVar17 == 2) {
      if (((ulong)puVar8 & 7) == 0 && uVar27 == 0) {
        pcVar7 = FUN_109a9740c;
      }
      else if ((uVar2 == 2) && (uVar27 == 2)) {
        pcVar7 = FUN_109a975e4;
      }
      else if ((uVar2 == 3) && (uVar27 == 3)) {
        pcVar7 = FUN_109a977f8;
      }
      else if ((uVar2 == 5) && (uVar27 == 5)) {
        pcVar7 = FUN_109a97a14;
      }
      else {
        if ((uVar2 != 6) || (uVar27 != 6)) goto LAB_109a93e64;
        pcVar7 = FUN_109a97c08;
      }
      goto LAB_109a93b8c;
    }
    if (uVar17 == 0) {
      if ((((ulong)puVar8 & 7) == 0) && (uVar27 == 4)) {
        pcVar7 = FUN_109a960ec;
      }
      else if ((((ulong)puVar8 & 7) == 0) && (uVar27 == 5)) {
        pcVar7 = FUN_109a962c0;
      }
      else if ((((ulong)puVar8 & 7) == 0) && (uVar27 == 6)) {
        pcVar7 = FUN_109a9649c;
      }
      else if ((uVar2 == 2) && (uVar27 == 5)) {
        pcVar7 = FUN_109a96678;
      }
      else if ((uVar2 == 2) && (uVar27 == 6)) {
        pcVar7 = FUN_109a96870;
      }
      else if ((uVar2 == 3) && (uVar27 == 5)) {
        pcVar7 = FUN_109a96a68;
      }
      else if ((uVar2 == 3) && (uVar27 == 6)) {
        pcVar7 = FUN_109a96c5c;
      }
      else if ((uVar2 == 5) && (uVar27 == 5)) {
        pcVar7 = FUN_109a96e50;
      }
      else if ((uVar2 == 5) && (uVar27 == 6)) {
        pcVar7 = FUN_109a9702c;
      }
      else {
        if ((uVar2 != 6) || (uVar27 != 6)) goto LAB_109a93e64;
        pcVar7 = FUN_109a97228;
      }
      goto LAB_109a93b8c;
    }
  }
LAB_109a93e64:
  puVar11 = (undefined4 *)0x40;
  func_0x000107c2ae8c();
  *puVar11 = 1;
  puStack_120 = puVar11 + 1;
  puStack_118 = (undefined8 *)0x39;
  *(undefined8 *)(puVar11 + 3) = 0x626d6f6320646574;
  *(undefined8 *)(puVar11 + 1) = 0x726f707075736e55;
  *(undefined1 *)((long)puVar11 + 0x3d) = 0;
  *(undefined8 *)(puVar11 + 7) = 0x7475706e6920666f;
  *(undefined8 *)(puVar11 + 5) = 0x206e6f6974616e69;
  *(undefined8 *)(puVar11 + 0xb) = 0x6172726120747570;
  *(undefined8 *)(puVar11 + 9) = 0x74756f20646e6120;
  *(undefined8 *)((long)puVar11 + 0x35) = 0x7374616d726f6620;
  *(undefined8 *)((long)puVar11 + 0x2d) = 0x7961727261207475;
  FUN_109ac3188(0xffffff2e,&puStack_120,&UNK_10f5986df,&UNK_10f597913,0xefe);
LAB_109a93ecc:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109a93ed0);
  (*pcVar7)();
}



/* Entry: 109a93444; end: 109a93f9f;  */

void FUN_109a93444(uint *param_1,uint *param_2,int param_3,uint param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  code *pcVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_1;
  FUN_109a8d7e8(param_1,0xffffffff);
  if (2 < (int)puVar9) {
    puVar11 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    uStack_d0 = puVar11 + 1;
    uStack_c8 = 0x10;
    *(undefined1 *)(puVar11 + 5) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x32203d3c20292873;
    *(undefined8 *)(puVar11 + 1) = 0x6d69642e6372735f;
    FUN_109ac3188(0xffffff29,&uStack_d0,&UNK_10f5986df,&UNK_10f597913,0xe75);
    goto LAB_109a93ecc;
  }
  puVar9 = param_1;
  FUN_109a8b904(param_1,0xffffffff);
  uVar16 = (uint)puVar9;
  if (((int)param_5 < 0) && (param_5 = uVar16, (int)*param_2 < 0)) {
    puVar10 = param_2;
    FUN_109a8b904(param_2,0xffffffff);
    param_5 = (uint)puVar10;
  }
  uVar17 = uVar16;
  if (-1 < (int)param_5) {
    uVar17 = param_5;
  }
  if (3 < param_4) {
    puVar11 = (undefined4 *)0x60;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    uStack_d0 = puVar11 + 1;
    uStack_c8 = 0x58;
    *(undefined8 *)(puVar11 + 0xb) = 0x706f207c7c205841;
    *(undefined8 *)(puVar11 + 9) = 0x4d5f454355444552;
    *(undefined8 *)(puVar11 + 0xf) = 0x494d5f4543554445;
    *(undefined8 *)(puVar11 + 0xd) = 0x525f5643203d3d20;
    *(undefined8 *)(puVar11 + 0x13) = 0x45525f5643203d3d;
    *(undefined8 *)(puVar11 + 0x11) = 0x20706f207c7c204e;
    *(undefined8 *)(puVar11 + 3) = 0x5f4543554445525f;
    *(undefined8 *)(puVar11 + 1) = 0x5643203d3d20706f;
    *(undefined1 *)(puVar11 + 0x17) = 0;
    *(undefined8 *)(puVar11 + 0x15) = 0x4756415f45435544;
    *(undefined8 *)(puVar11 + 7) = 0x5f5643203d3d2070;
    *(undefined8 *)(puVar11 + 5) = 0x6f207c7c204d5553;
    FUN_109ac3188(0xffffff29,&uStack_d0,&UNK_10f5986df,&UNK_10f597913,0xe7f);
    goto LAB_109a93ecc;
  }
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar12 = *(undefined8 **)(param_1 + 2);
    uStack_90 = (ulong)&uStack_d0 | 8;
    uStack_c8 = puVar12[1];
    uStack_d0 = (undefined4 *)*puVar12;
    uStack_b8 = puVar12[3];
    uStack_c0 = puVar12[2];
    uStack_a8 = puVar12[5];
    uStack_b0 = puVar12[4];
    lStack_98 = puVar12[7];
    uStack_a0 = puVar12[6];
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    if (puVar12[7] != 0) {
      piVar1 = (int *)(puVar12[7] + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)((long)puVar12 + 4) < 3) {
      uStack_80 = *(undefined8 *)puVar12[9];
      uStack_78 = ((undefined8 *)puVar12[9])[1];
    }
    else {
      uStack_d0 = (undefined4 *)((ulong)uStack_d0 & 0xffffffff);
      func_0x000109a84868(&uStack_d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_d0,param_1,0xffffffff);
  }
  uVar17 = uVar17 & 7;
  if (param_3 == 0) {
    uVar3 = uStack_c8._4_4_;
    uVar7 = 1;
  }
  else {
    uVar3 = 1;
    uVar7 = (undefined4)uStack_c8;
  }
  FUN_109a8f64c(param_2,uVar7,uVar3,uVar17 | uVar16 & 0xff8,0xffffffff,0,0);
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(param_2 + 2);
    uStack_f0 = (ulong)&uStack_130 | 8;
    uStack_128 = (undefined4 *)puVar13[1];
    uStack_130 = *puVar13;
    uStack_118 = puVar13[3];
    uStack_120 = puVar13[2];
    uStack_108 = puVar13[5];
    uStack_110 = puVar13[4];
    uStack_f8 = puVar13[7];
    uStack_100 = puVar13[6];
    puStack_e8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    if (puVar13[7] != 0) {
      piVar1 = (int *)(puVar13[7] + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      uStack_e0 = *(undefined8 *)puVar13[9];
      uStack_d8 = ((undefined8 *)puVar13[9])[1];
    }
    else {
      uStack_130 = uStack_130 & 0xffffffff;
      func_0x000109a84868(&uStack_130);
    }
  }
  else {
    FUN_109a8a180(&uStack_130,param_2,0xffffffff);
  }
  uStack_150 = (ulong)&uStack_190 | 8;
  uStack_188 = uStack_128;
  uStack_190 = uStack_130;
  uStack_178 = uStack_118;
  uStack_180 = uStack_120;
  uStack_168 = uStack_108;
  uStack_170 = uStack_110;
  uStack_158 = uStack_f8;
  uStack_160 = uStack_100;
  uStack_140 = 0;
  uStack_138 = 0;
  if (uStack_f8 != 0) {
    piVar1 = (int *)(uStack_f8 + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puStack_148 = &uStack_140;
  if (uStack_130._4_4_ < 3) {
    uStack_140 = *puStack_e8;
    uStack_138 = puStack_e8[1];
  }
  else {
    uStack_190 = uStack_130 & 0xffffffff;
    func_0x000109a84868(&uStack_190,&uStack_130);
  }
  uVar2 = uVar16 & 7;
  uVar14 = param_4;
  if (((param_4 == 1) && (uVar14 = 0, uVar2 < 4)) && (uVar17 < 4)) {
    if (((2 < uStack_190._4_4_) || ((int)uStack_188 != (int)uStack_128)) ||
       ((uStack_188._4_4_ != uStack_128._4_4_ ||
        ((((uint)uStack_190 & 0xfff) != (uVar16 & 0xff8 | 4) || (uStack_180 == 0)))))) {
      puStack_70 = uStack_128;
      FUN_109a83fd0(&uStack_190,2,&puStack_70);
    }
    uVar17 = 4;
    uVar14 = 0;
  }
  if (param_3 == 0) {
    if (uVar14 == 3) {
      if (((ulong)puVar9 & 7) == 0 && uVar17 == 0) {
        pcVar8 = FUN_109a95808;
      }
      else if ((uVar2 == 2) && (uVar17 == 2)) {
        pcVar8 = FUN_109a95a24;
      }
      else if ((uVar2 == 3) && (uVar17 == 3)) {
        pcVar8 = (code *)0x109a95bf0;
      }
      else if ((uVar2 == 5) && (uVar17 == 5)) {
        pcVar8 = (code *)0x109a95dbc;
      }
      else {
        if ((uVar2 != 6) || (uVar17 != 6)) goto LAB_109a93e64;
        pcVar8 = (code *)0x109a95f54;
      }
    }
    else if (uVar14 == 2) {
      if (((ulong)puVar9 & 7) == 0 && uVar17 == 0) {
        pcVar8 = FUN_109a94f24;
      }
      else if ((uVar2 == 2) && (uVar17 == 2)) {
        pcVar8 = FUN_109a95140;
      }
      else if ((uVar2 == 3) && (uVar17 == 3)) {
        pcVar8 = (code *)0x109a9530c;
      }
      else if ((uVar2 == 5) && (uVar17 == 5)) {
        pcVar8 = (code *)0x109a954d8;
      }
      else {
        if ((uVar2 != 6) || (uVar17 != 6)) goto LAB_109a93e64;
        pcVar8 = (code *)0x109a95670;
      }
    }
    else {
      if (uVar14 != 0) goto LAB_109a93e64;
      if ((((ulong)puVar9 & 7) == 0) && (uVar17 == 4)) {
        pcVar8 = FUN_109a93fa0;
      }
      else if ((((ulong)puVar9 & 7) == 0) && (uVar17 == 5)) {
        pcVar8 = (code *)0x109a94128;
      }
      else if ((((ulong)puVar9 & 7) == 0) && (uVar17 == 6)) {
        pcVar8 = (code *)0x109a942b4;
      }
      else if ((uVar2 == 2) && (uVar17 == 5)) {
        pcVar8 = (code *)0x109a94440;
      }
      else if ((uVar2 == 2) && (uVar17 == 6)) {
        pcVar8 = (code *)0x109a945c4;
      }
      else if ((uVar2 == 3) && (uVar17 == 5)) {
        pcVar8 = (code *)0x109a94758;
      }
      else if ((uVar2 == 3) && (uVar17 == 6)) {
        pcVar8 = (code *)0x109a948dc;
      }
      else if ((uVar2 == 5) && (uVar17 == 5)) {
        pcVar8 = (code *)0x109a94a70;
      }
      else if ((uVar2 == 5) && (uVar17 == 6)) {
        pcVar8 = (code *)0x109a94bfc;
      }
      else {
        if ((uVar2 != 6) || (uVar17 != 6)) goto LAB_109a93e64;
        pcVar8 = (code *)0x109a94d98;
      }
    }
LAB_109a93b8c:
    (*pcVar8)(&uStack_d0,&uStack_190);
    if (param_4 == 1) {
      puStack_70 = (undefined4 *)CONCAT44(puStack_70._4_4_,0x2010000);
      puStack_68 = &uStack_130;
      uStack_60 = 0;
      piVar1 = (int *)((ulong)&uStack_d0 | 8);
      if (param_3 != 0) {
        piVar1 = (int *)((ulong)&uStack_d0 | 0xc);
      }
      FUN_109a41858(1.0 / (double)*piVar1,0,&uStack_190,&puStack_70,(uint)uStack_130 & 0xfff);
    }
    if (uStack_158 != 0) {
      piVar1 = (int *)(uStack_158 + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(&uStack_190);
      }
    }
    uStack_158 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    if (0 < uStack_190._4_4_) {
      lVar15 = 0;
      do {
        *(undefined4 *)(uStack_150 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < uStack_190._4_4_);
    }
    if (puStack_148 != &uStack_140 && puStack_148 != (undefined8 *)0x0) {
      _free(puStack_148[-1]);
    }
    if (uStack_f8 != 0) {
      piVar1 = (int *)(uStack_f8 + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(&uStack_130);
      }
    }
    uStack_f8 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    if (0 < uStack_130._4_4_) {
      lVar15 = 0;
      do {
        *(undefined4 *)(uStack_f0 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < uStack_130._4_4_);
    }
    if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
      _free(puStack_e8[-1]);
    }
    if (lStack_98 != 0) {
      piVar1 = (int *)(lStack_98 + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(&uStack_d0);
      }
    }
    lStack_98 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    if (0 < uStack_d0._4_4_) {
      lVar15 = 0;
      do {
        *(undefined4 *)(uStack_90 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < uStack_d0._4_4_);
    }
    if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
      _free(puStack_88[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (uVar14 == 3) {
      if (((ulong)puVar9 & 7) == 0 && uVar17 == 0) {
        pcVar8 = FUN_109a97e04;
      }
      else if ((uVar2 == 2) && (uVar17 == 2)) {
        pcVar8 = FUN_109a97ff0;
      }
      else if ((uVar2 == 3) && (uVar17 == 3)) {
        pcVar8 = FUN_109a98204;
      }
      else if ((uVar2 == 5) && (uVar17 == 5)) {
        pcVar8 = FUN_109a98420;
      }
      else {
        if ((uVar2 != 6) || (uVar17 != 6)) goto LAB_109a93e64;
        pcVar8 = FUN_109a98614;
      }
      goto LAB_109a93b8c;
    }
    if (uVar14 == 2) {
      if (((ulong)puVar9 & 7) == 0 && uVar17 == 0) {
        pcVar8 = FUN_109a9740c;
      }
      else if ((uVar2 == 2) && (uVar17 == 2)) {
        pcVar8 = FUN_109a975e4;
      }
      else if ((uVar2 == 3) && (uVar17 == 3)) {
        pcVar8 = FUN_109a977f8;
      }
      else if ((uVar2 == 5) && (uVar17 == 5)) {
        pcVar8 = FUN_109a97a14;
      }
      else {
        if ((uVar2 != 6) || (uVar17 != 6)) goto LAB_109a93e64;
        pcVar8 = FUN_109a97c08;
      }
      goto LAB_109a93b8c;
    }
    if (uVar14 == 0) {
      if ((((ulong)puVar9 & 7) == 0) && (uVar17 == 4)) {
        pcVar8 = FUN_109a960ec;
      }
      else if ((((ulong)puVar9 & 7) == 0) && (uVar17 == 5)) {
        pcVar8 = FUN_109a962c0;
      }
      else if ((((ulong)puVar9 & 7) == 0) && (uVar17 == 6)) {
        pcVar8 = FUN_109a9649c;
      }
      else if ((uVar2 == 2) && (uVar17 == 5)) {
        pcVar8 = FUN_109a96678;
      }
      else if ((uVar2 == 2) && (uVar17 == 6)) {
        pcVar8 = FUN_109a96870;
      }
      else if ((uVar2 == 3) && (uVar17 == 5)) {
        pcVar8 = FUN_109a96a68;
      }
      else if ((uVar2 == 3) && (uVar17 == 6)) {
        pcVar8 = FUN_109a96c5c;
      }
      else if ((uVar2 == 5) && (uVar17 == 5)) {
        pcVar8 = FUN_109a96e50;
      }
      else if ((uVar2 == 5) && (uVar17 == 6)) {
        pcVar8 = FUN_109a9702c;
      }
      else {
        if ((uVar2 != 6) || (uVar17 != 6)) goto LAB_109a93e64;
        pcVar8 = FUN_109a97228;
      }
      goto LAB_109a93b8c;
    }
  }
LAB_109a93e64:
  puVar11 = (undefined4 *)0x40;
  func_0x000107c2ae8c();
  *puVar11 = 1;
  puStack_70 = puVar11 + 1;
  puStack_68 = (undefined8 *)0x39;
  *(undefined8 *)(puVar11 + 3) = 0x626d6f6320646574;
  *(undefined8 *)(puVar11 + 1) = 0x726f707075736e55;
  *(undefined1 *)((long)puVar11 + 0x3d) = 0;
  *(undefined8 *)(puVar11 + 7) = 0x7475706e6920666f;
  *(undefined8 *)(puVar11 + 5) = 0x206e6f6974616e69;
  *(undefined8 *)(puVar11 + 0xb) = 0x6172726120747570;
  *(undefined8 *)(puVar11 + 9) = 0x74756f20646e6120;
  *(undefined8 *)((long)puVar11 + 0x35) = 0x7374616d726f6620;
  *(undefined8 *)((long)puVar11 + 0x2d) = 0x7961727261207475;
  FUN_109ac3188(0xffffff2e,&puStack_70,&UNK_10f5986df,&UNK_10f597913,0xefe);
LAB_109a93ecc:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109a93ed0);
  (*pcVar8)();
}



/* Entry: 109a93fa0; end: 109a94f23;  */

void FUN_109a93fa0(uint *param_1,long param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  uint *puVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint auStack_460 [264];
  
  iVar4 = **(int **)(param_1 + 0x10);
  iVar1 = (*(int **)(param_1 + 0x10))[1];
  uVar11 = (long)iVar1 + (long)iVar1 * (long)(int)(*param_1 >> 3 & 0x1ff);
  uVar10 = (uint)uVar11;
  puVar2 = auStack_460;
  if (0x108 < uVar10) {
    puVar2 = (uint *)(uVar11 * 4);
    if ((int)uVar10 < 0) {
      puVar2 = (uint *)0xffffffffffffffff;
    }
    __Znam();
  }
  pbVar8 = *(byte **)(param_1 + 4);
  if (0 < (int)uVar10) {
    lVar6 = (uVar11 & 0xffffffff) << 2;
    pbVar5 = pbVar8;
    puVar3 = puVar2;
    do {
      *puVar3 = (uint)*pbVar5;
      lVar6 = lVar6 + -4;
      pbVar5 = pbVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar6 != 0);
  }
  puVar3 = *(uint **)(param_2 + 0x10);
  iVar4 = iVar4 + -1;
  if (iVar4 != 0) {
    lVar6 = *(long *)(param_1 + 0x14);
    do {
      pbVar8 = pbVar8 + lVar6;
      if ((int)uVar10 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        puVar7 = puVar2 + 2;
        do {
          pbVar5 = pbVar8 + uVar9;
          *(ulong *)(puVar7 + -2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar7 + -2) >> 0x20) + (uint)pbVar5[1],
                        (int)*(undefined8 *)(puVar7 + -2) + (uint)*pbVar5);
          *(ulong *)puVar7 =
               CONCAT44((int)((ulong)*(undefined8 *)puVar7 >> 0x20) + (uint)pbVar5[3],
                        (int)*(undefined8 *)puVar7 + (uint)pbVar5[2]);
          uVar9 = uVar9 + 4;
          puVar7 = puVar7 + 4;
        } while ((long)uVar9 <= (long)(int)(uVar10 - 4));
        uVar9 = uVar9 & 0xffffffff;
      }
      if ((int)uVar9 < (int)uVar10) {
        do {
          puVar2[uVar9] = puVar2[uVar9] + (uint)pbVar8[uVar9];
          uVar9 = uVar9 + 1;
        } while ((uVar11 & 0xffffffff) != uVar9);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (0 < (int)uVar10) {
    lVar6 = (uVar11 & 0xffffffff) << 2;
    puVar7 = puVar2;
    do {
      *puVar3 = *puVar7;
      lVar6 = lVar6 + -4;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
  }
  if (puVar2 != auStack_460) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109a94f24; end: 109a9513f;  */

void FUN_109a94f24(uint *param_1,ulong param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  uint *puVar19;
  undefined2 *puVar20;
  ushort *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  byte *pbVar25;
  ushort *puVar26;
  uint uVar27;
  uint *puVar28;
  undefined2 auStack_8b0 [520];
  uint auStack_450 [258];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar15 = **(int **)(param_1 + 0x10);
  iVar3 = (*(int **)(param_1 + 0x10))[1];
  puVar28 = (uint *)((long)iVar3 + (long)iVar3 * (long)(int)(*param_1 >> 3 & 0x1ff));
  uVar27 = (uint)puVar28;
  puVar8 = auStack_450;
  uVar9 = param_2;
  if (0x408 < uVar27) {
    puVar8 = puVar28;
    __Znam();
  }
  puVar12 = *(undefined1 **)(param_1 + 4);
  if (0 < (int)uVar27) {
    lVar18 = -((ulong)puVar28 & 0xffffffff);
    puVar17 = puVar12;
    puVar19 = puVar8;
    do {
      *(undefined1 *)puVar19 = *puVar17;
      bVar7 = lVar18 != -1;
      lVar18 = lVar18 + 1;
      puVar17 = puVar17 + 1;
      puVar19 = (uint *)((long)puVar19 + 1);
    } while (bVar7);
  }
  iVar15 = iVar15 + -1;
  if (iVar15 != 0) {
    lVar18 = *(long *)(param_1 + 0x14);
    puVar17 = puVar12 + lVar18 + 1;
    do {
      if ((int)uVar27 < 4) {
        uVar24 = 0;
      }
      else {
        uVar24 = 0;
        do {
          pbVar25 = (byte *)((long)puVar8 + uVar24);
          pbVar2 = puVar17 + uVar24;
          cVar4 = (&UNK_10e02ecdc)[(ulong)*pbVar2 - (ulong)pbVar25[1]];
          *pbVar25 = (&UNK_10e02ecdc)[(ulong)pbVar2[-1] - (ulong)*pbVar25] + *pbVar25;
          pbVar25[1] = cVar4 + pbVar25[1];
          uVar1 = (uint)(byte)(&UNK_10e02ecdc)[(ulong)pbVar2[2] - (ulong)pbVar25[3]] +
                  (uint)pbVar25[3];
          uVar9 = (ulong)uVar1;
          pbVar25[2] = (&UNK_10e02ecdc)[(ulong)pbVar2[1] - (ulong)pbVar25[2]] + pbVar25[2];
          pbVar25[3] = (byte)uVar1;
          uVar24 = uVar24 + 4;
        } while ((long)uVar24 <= (long)(int)(uVar27 - 4));
        uVar24 = uVar24 & 0xffffffff;
      }
      if ((int)uVar24 < (int)uVar27) {
        lVar22 = ((ulong)puVar28 & 0xffffffff) - uVar24;
        lVar23 = lVar18 + uVar24;
        pbVar25 = (byte *)((long)puVar8 + uVar24);
        do {
          uVar1 = (uint)(byte)(&UNK_10e02ecdc)[(ulong)(byte)puVar12[lVar23] - (ulong)*pbVar25] +
                  (uint)*pbVar25;
          uVar9 = (ulong)uVar1;
          *pbVar25 = (byte)uVar1;
          lVar23 = lVar23 + 1;
          lVar22 = lVar22 + -1;
          pbVar25 = pbVar25 + 1;
        } while (lVar22 != 0);
      }
      puVar12 = puVar12 + lVar18;
      puVar17 = puVar17 + lVar18;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  if (0 < (int)uVar27) {
    lVar18 = -((ulong)puVar28 & 0xffffffff);
    puVar28 = puVar8;
    puVar12 = *(undefined1 **)(param_2 + 0x10);
    do {
      *puVar12 = (char)*puVar28;
      bVar7 = lVar18 != -1;
      lVar18 = lVar18 + 1;
      puVar28 = (uint *)((long)puVar28 + 1);
      puVar12 = puVar12 + 1;
    } while (bVar7);
  }
  if (puVar8 != auStack_450 && puVar8 != (uint *)0x0) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  iVar15 = **(int **)(puVar8 + 0x10);
  iVar3 = (*(int **)(puVar8 + 0x10))[1];
  uVar24 = (long)iVar3 + (long)iVar3 * (long)(int)(*puVar8 >> 3 & 0x1ff);
  uVar27 = (uint)uVar24;
  puVar13 = auStack_8b0;
  if (0x208 < uVar27) {
    puVar13 = (undefined2 *)(uVar24 * 2);
    if (0x7fffffff < uVar27) {
      puVar13 = (undefined2 *)0xffffffffffffffff;
    }
    __Znam();
  }
  puVar14 = *(undefined2 **)(puVar8 + 4);
  if (0 < (int)uVar27) {
    lVar18 = (uVar24 & 0xffffffff) << 1;
    puVar16 = puVar14;
    puVar20 = puVar13;
    do {
      *puVar20 = *puVar16;
      lVar18 = lVar18 + -2;
      puVar16 = puVar16 + 1;
      puVar20 = puVar20 + 1;
    } while (lVar18 != 0);
  }
  puVar16 = *(undefined2 **)(uVar9 + 0x10);
  iVar15 = iVar15 + -1;
  if (iVar15 != 0) {
    uVar9 = *(ulong *)(puVar8 + 0x14) >> 1;
    puVar21 = puVar14 + uVar9 + 2;
    do {
      if ((int)uVar27 < 4) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        puVar11 = puVar21;
        puVar26 = puVar13 + 2;
        do {
          uVar5 = puVar26[-2];
          if (puVar26[-2] <= puVar11[-2]) {
            uVar5 = puVar11[-2];
          }
          uVar6 = puVar26[-1];
          if (puVar26[-1] <= puVar11[-1]) {
            uVar6 = puVar11[-1];
          }
          puVar26[-2] = uVar5;
          puVar26[-1] = uVar6;
          uVar5 = *puVar26;
          if (*puVar26 <= *puVar11) {
            uVar5 = *puVar11;
          }
          uVar6 = puVar26[1];
          if (puVar26[1] <= puVar11[1]) {
            uVar6 = puVar11[1];
          }
          *puVar26 = uVar5;
          puVar26[1] = uVar6;
          uVar10 = uVar10 + 4;
          puVar11 = puVar11 + 4;
          puVar26 = puVar26 + 4;
        } while ((long)uVar10 <= (long)(int)(uVar27 - 4));
        uVar10 = uVar10 & 0xffffffff;
      }
      if ((int)uVar10 < (int)uVar27) {
        lVar23 = (uVar24 & 0xffffffff) - uVar10;
        lVar18 = uVar9 * 2 + uVar10 * 2;
        puVar11 = puVar13 + uVar10;
        do {
          uVar5 = *puVar11;
          if (*puVar11 <= *(ushort *)((long)puVar14 + lVar18)) {
            uVar5 = *(ushort *)((long)puVar14 + lVar18);
          }
          *puVar11 = uVar5;
          lVar18 = lVar18 + 2;
          lVar23 = lVar23 + -1;
          puVar11 = puVar11 + 1;
        } while (lVar23 != 0);
      }
      puVar21 = puVar21 + uVar9;
      puVar14 = puVar14 + uVar9;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  if (0 < (int)uVar27) {
    lVar18 = (uVar24 & 0xffffffff) << 1;
    puVar14 = puVar13;
    do {
      *puVar16 = *puVar14;
      lVar18 = lVar18 + -2;
      puVar16 = puVar16 + 1;
      puVar14 = puVar14 + 1;
    } while (lVar18 != 0);
  }
  if (puVar13 != auStack_8b0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109a95140; end: 109a95807;  */

void FUN_109a95140(uint *param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  ulong uVar12;
  ushort *puVar13;
  long lVar14;
  ushort *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined2 auStack_450 [520];
  
  iVar10 = **(int **)(param_1 + 0x10);
  iVar1 = (*(int **)(param_1 + 0x10))[1];
  uVar17 = (long)iVar1 + (long)iVar1 * (long)(int)(*param_1 >> 3 & 0x1ff);
  uVar16 = (uint)uVar17;
  puVar6 = auStack_450;
  if (0x208 < uVar16) {
    puVar6 = (undefined2 *)(uVar17 * 2);
    if (0x7fffffff < uVar16) {
      puVar6 = (undefined2 *)0xffffffffffffffff;
    }
    __Znam();
  }
  puVar7 = *(undefined2 **)(param_1 + 4);
  if (0 < (int)uVar16) {
    lVar8 = (uVar17 & 0xffffffff) << 1;
    puVar9 = puVar7;
    puVar11 = puVar6;
    do {
      *puVar11 = *puVar9;
      lVar8 = lVar8 + -2;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar8 != 0);
  }
  puVar9 = *(undefined2 **)(param_2 + 0x10);
  iVar10 = iVar10 + -1;
  if (iVar10 != 0) {
    uVar12 = *(ulong *)(param_1 + 0x14) >> 1;
    puVar13 = puVar7 + uVar12 + 2;
    do {
      if ((int)uVar16 < 4) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        puVar5 = puVar13;
        puVar15 = puVar6 + 2;
        do {
          uVar2 = puVar15[-2];
          if (puVar15[-2] <= puVar5[-2]) {
            uVar2 = puVar5[-2];
          }
          uVar3 = puVar15[-1];
          if (puVar15[-1] <= puVar5[-1]) {
            uVar3 = puVar5[-1];
          }
          puVar15[-2] = uVar2;
          puVar15[-1] = uVar3;
          uVar2 = *puVar15;
          if (*puVar15 <= *puVar5) {
            uVar2 = *puVar5;
          }
          uVar3 = puVar15[1];
          if (puVar15[1] <= puVar5[1]) {
            uVar3 = puVar5[1];
          }
          *puVar15 = uVar2;
          puVar15[1] = uVar3;
          uVar4 = uVar4 + 4;
          puVar5 = puVar5 + 4;
          puVar15 = puVar15 + 4;
        } while ((long)uVar4 <= (long)(int)(uVar16 - 4));
        uVar4 = uVar4 & 0xffffffff;
      }
      if ((int)uVar4 < (int)uVar16) {
        lVar14 = (uVar17 & 0xffffffff) - uVar4;
        lVar8 = uVar12 * 2 + uVar4 * 2;
        puVar5 = puVar6 + uVar4;
        do {
          uVar2 = *puVar5;
          if (*puVar5 <= *(ushort *)((long)puVar7 + lVar8)) {
            uVar2 = *(ushort *)((long)puVar7 + lVar8);
          }
          *puVar5 = uVar2;
          lVar8 = lVar8 + 2;
          lVar14 = lVar14 + -1;
          puVar5 = puVar5 + 1;
        } while (lVar14 != 0);
      }
      puVar13 = puVar13 + uVar12;
      puVar7 = puVar7 + uVar12;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (0 < (int)uVar16) {
    lVar8 = (uVar17 & 0xffffffff) << 1;
    puVar7 = puVar6;
    do {
      *puVar9 = *puVar7;
      lVar8 = lVar8 + -2;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
  }
  if (puVar6 != auStack_450) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109a95808; end: 109a95a23;  */

void FUN_109a95808(uint *param_1,ulong param_2)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  uint *puVar19;
  undefined2 *puVar20;
  ushort *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  byte *pbVar25;
  ushort *puVar26;
  uint uVar27;
  uint *puVar28;
  undefined2 auStack_8b0 [520];
  uint auStack_450 [258];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar15 = **(int **)(param_1 + 0x10);
  iVar4 = (*(int **)(param_1 + 0x10))[1];
  puVar28 = (uint *)((long)iVar4 + (long)iVar4 * (long)(int)(*param_1 >> 3 & 0x1ff));
  uVar27 = (uint)puVar28;
  puVar8 = auStack_450;
  uVar9 = param_2;
  if (0x408 < uVar27) {
    puVar8 = puVar28;
    __Znam();
  }
  puVar12 = *(undefined1 **)(param_1 + 4);
  if (0 < (int)uVar27) {
    lVar18 = -((ulong)puVar28 & 0xffffffff);
    puVar17 = puVar12;
    puVar19 = puVar8;
    do {
      *(undefined1 *)puVar19 = *puVar17;
      bVar7 = lVar18 != -1;
      lVar18 = lVar18 + 1;
      puVar17 = puVar17 + 1;
      puVar19 = (uint *)((long)puVar19 + 1);
    } while (bVar7);
  }
  iVar15 = iVar15 + -1;
  if (iVar15 != 0) {
    lVar18 = *(long *)(param_1 + 0x14);
    puVar17 = puVar12 + lVar18 + 1;
    do {
      if ((int)uVar27 < 4) {
        uVar24 = 0;
      }
      else {
        uVar24 = 0;
        do {
          pbVar25 = (byte *)((long)puVar8 + uVar24);
          pbVar1 = puVar17 + uVar24;
          cVar5 = (&UNK_10e02ebdc)[((ulong)pbVar25[1] | 0x100) - (ulong)*pbVar1];
          *pbVar25 = *pbVar25 - (&UNK_10e02ebdc)[((ulong)*pbVar25 | 0x100) - (ulong)pbVar1[-1]];
          pbVar25[1] = pbVar25[1] - cVar5;
          uVar6 = (uint)pbVar25[3] -
                  (uint)(byte)(&UNK_10e02ebdc)[((ulong)pbVar25[3] | 0x100) - (ulong)pbVar1[2]];
          uVar9 = (ulong)uVar6;
          pbVar25[2] = pbVar25[2] - (&UNK_10e02ebdc)[((ulong)pbVar25[2] | 0x100) - (ulong)pbVar1[1]]
          ;
          pbVar25[3] = (byte)uVar6;
          uVar24 = uVar24 + 4;
        } while ((long)uVar24 <= (long)(int)(uVar27 - 4));
        uVar24 = uVar24 & 0xffffffff;
      }
      if ((int)uVar24 < (int)uVar27) {
        lVar22 = ((ulong)puVar28 & 0xffffffff) - uVar24;
        lVar23 = lVar18 + uVar24;
        pbVar25 = (byte *)((long)puVar8 + uVar24);
        do {
          uVar6 = (uint)*pbVar25 -
                  (uint)(byte)(&UNK_10e02ebdc)
                              [((ulong)*pbVar25 | 0x100) - (ulong)(byte)puVar12[lVar23]];
          uVar9 = (ulong)uVar6;
          *pbVar25 = (byte)uVar6;
          lVar23 = lVar23 + 1;
          lVar22 = lVar22 + -1;
          pbVar25 = pbVar25 + 1;
        } while (lVar22 != 0);
      }
      puVar12 = puVar12 + lVar18;
      puVar17 = puVar17 + lVar18;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  if (0 < (int)uVar27) {
    lVar18 = -((ulong)puVar28 & 0xffffffff);
    puVar28 = puVar8;
    puVar12 = *(undefined1 **)(param_2 + 0x10);
    do {
      *puVar12 = (char)*puVar28;
      bVar7 = lVar18 != -1;
      lVar18 = lVar18 + 1;
      puVar28 = (uint *)((long)puVar28 + 1);
      puVar12 = puVar12 + 1;
    } while (bVar7);
  }
  if (puVar8 != auStack_450 && puVar8 != (uint *)0x0) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  iVar15 = **(int **)(puVar8 + 0x10);
  iVar4 = (*(int **)(puVar8 + 0x10))[1];
  uVar24 = (long)iVar4 + (long)iVar4 * (long)(int)(*puVar8 >> 3 & 0x1ff);
  uVar27 = (uint)uVar24;
  puVar13 = auStack_8b0;
  if (0x208 < uVar27) {
    puVar13 = (undefined2 *)(uVar24 * 2);
    if (0x7fffffff < uVar27) {
      puVar13 = (undefined2 *)0xffffffffffffffff;
    }
    __Znam();
  }
  puVar14 = *(undefined2 **)(puVar8 + 4);
  if (0 < (int)uVar27) {
    lVar18 = (uVar24 & 0xffffffff) << 1;
    puVar16 = puVar14;
    puVar20 = puVar13;
    do {
      *puVar20 = *puVar16;
      lVar18 = lVar18 + -2;
      puVar16 = puVar16 + 1;
      puVar20 = puVar20 + 1;
    } while (lVar18 != 0);
  }
  puVar16 = *(undefined2 **)(uVar9 + 0x10);
  iVar15 = iVar15 + -1;
  if (iVar15 != 0) {
    uVar9 = *(ulong *)(puVar8 + 0x14) >> 1;
    puVar21 = puVar14 + uVar9 + 2;
    do {
      if ((int)uVar27 < 4) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        puVar11 = puVar21;
        puVar26 = puVar13 + 2;
        do {
          uVar2 = puVar11[-2];
          if (puVar26[-2] <= puVar11[-2]) {
            uVar2 = puVar26[-2];
          }
          uVar3 = puVar11[-1];
          if (puVar26[-1] <= puVar11[-1]) {
            uVar3 = puVar26[-1];
          }
          puVar26[-2] = uVar2;
          puVar26[-1] = uVar3;
          uVar2 = *puVar11;
          if (*puVar26 <= *puVar11) {
            uVar2 = *puVar26;
          }
          uVar3 = puVar11[1];
          if (puVar26[1] <= puVar11[1]) {
            uVar3 = puVar26[1];
          }
          *puVar26 = uVar2;
          puVar26[1] = uVar3;
          uVar10 = uVar10 + 4;
          puVar11 = puVar11 + 4;
          puVar26 = puVar26 + 4;
        } while ((long)uVar10 <= (long)(int)(uVar27 - 4));
        uVar10 = uVar10 & 0xffffffff;
      }
      if ((int)uVar10 < (int)uVar27) {
        lVar23 = (uVar24 & 0xffffffff) - uVar10;
        lVar18 = uVar9 * 2 + uVar10 * 2;
        puVar11 = puVar13 + uVar10;
        do {
          uVar2 = *(ushort *)((long)puVar14 + lVar18);
          if (*puVar11 <= *(ushort *)((long)puVar14 + lVar18)) {
            uVar2 = *puVar11;
          }
          *puVar11 = uVar2;
          lVar18 = lVar18 + 2;
          lVar23 = lVar23 + -1;
          puVar11 = puVar11 + 1;
        } while (lVar23 != 0);
      }
      puVar21 = puVar21 + uVar9;
      puVar14 = puVar14 + uVar9;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  if (0 < (int)uVar27) {
    lVar18 = (uVar24 & 0xffffffff) << 1;
    puVar14 = puVar13;
    do {
      *puVar16 = *puVar14;
      lVar18 = lVar18 + -2;
      puVar16 = puVar16 + 1;
      puVar14 = puVar14 + 1;
    } while (lVar18 != 0);
  }
  if (puVar13 != auStack_8b0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109a95a24; end: 109a960eb;  */

void FUN_109a95a24(uint *param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  ulong uVar12;
  ushort *puVar13;
  long lVar14;
  ushort *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined2 auStack_450 [520];
  
  iVar10 = **(int **)(param_1 + 0x10);
  iVar3 = (*(int **)(param_1 + 0x10))[1];
  uVar17 = (long)iVar3 + (long)iVar3 * (long)(int)(*param_1 >> 3 & 0x1ff);
  uVar16 = (uint)uVar17;
  puVar6 = auStack_450;
  if (0x208 < uVar16) {
    puVar6 = (undefined2 *)(uVar17 * 2);
    if (0x7fffffff < uVar16) {
      puVar6 = (undefined2 *)0xffffffffffffffff;
    }
    __Znam();
  }
  puVar7 = *(undefined2 **)(param_1 + 4);
  if (0 < (int)uVar16) {
    lVar8 = (uVar17 & 0xffffffff) << 1;
    puVar9 = puVar7;
    puVar11 = puVar6;
    do {
      *puVar11 = *puVar9;
      lVar8 = lVar8 + -2;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar8 != 0);
  }
  puVar9 = *(undefined2 **)(param_2 + 0x10);
  iVar10 = iVar10 + -1;
  if (iVar10 != 0) {
    uVar12 = *(ulong *)(param_1 + 0x14) >> 1;
    puVar13 = puVar7 + uVar12 + 2;
    do {
      if ((int)uVar16 < 4) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        puVar5 = puVar13;
        puVar15 = puVar6 + 2;
        do {
          uVar1 = puVar5[-2];
          if (puVar15[-2] <= puVar5[-2]) {
            uVar1 = puVar15[-2];
          }
          uVar2 = puVar5[-1];
          if (puVar15[-1] <= puVar5[-1]) {
            uVar2 = puVar15[-1];
          }
          puVar15[-2] = uVar1;
          puVar15[-1] = uVar2;
          uVar1 = *puVar5;
          if (*puVar15 <= *puVar5) {
            uVar1 = *puVar15;
          }
          uVar2 = puVar5[1];
          if (puVar15[1] <= puVar5[1]) {
            uVar2 = puVar15[1];
          }
          *puVar15 = uVar1;
          puVar15[1] = uVar2;
          uVar4 = uVar4 + 4;
          puVar5 = puVar5 + 4;
          puVar15 = puVar15 + 4;
        } while ((long)uVar4 <= (long)(int)(uVar16 - 4));
        uVar4 = uVar4 & 0xffffffff;
      }
      if ((int)uVar4 < (int)uVar16) {
        lVar14 = (uVar17 & 0xffffffff) - uVar4;
        lVar8 = uVar12 * 2 + uVar4 * 2;
        puVar5 = puVar6 + uVar4;
        do {
          uVar1 = *(ushort *)((long)puVar7 + lVar8);
          if (*puVar5 <= *(ushort *)((long)puVar7 + lVar8)) {
            uVar1 = *puVar5;
          }
          *puVar5 = uVar1;
          lVar8 = lVar8 + 2;
          lVar14 = lVar14 + -1;
          puVar5 = puVar5 + 1;
        } while (lVar14 != 0);
      }
      puVar13 = puVar13 + uVar12;
      puVar7 = puVar7 + uVar12;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (0 < (int)uVar16) {
    lVar8 = (uVar17 & 0xffffffff) << 1;
    puVar7 = puVar6;
    do {
      *puVar9 = *puVar7;
      lVar8 = lVar8 + -2;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
  }
  if (puVar6 != auStack_450) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109a960ec; end: 109a962bf;  */

void FUN_109a960ec(uint *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  byte *pbVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  
  uVar4 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar4) {
    uVar15 = 0;
    uVar30 = (*(uint **)(param_1 + 0x10))[1];
    uVar21 = (ulong)(*param_1 >> 3) & 0x1ff;
    lVar1 = uVar21 + 1;
    iVar16 = (int)lVar1;
    iVar5 = iVar16 * uVar30;
    lVar13 = *(long *)(param_1 + 4);
    lVar19 = **(long **)(param_1 + 0x12);
    lVar11 = *(long *)(param_2 + 0x10);
    iVar6 = iVar16 * (uVar30 - 4);
    lVar23 = **(long **)(param_2 + 0x48);
    lVar2 = uVar21 * 2 + 2;
    lVar3 = uVar21 * 4 + 4;
    lVar7 = uVar21 * 5 + lVar13 + 5;
    lVar8 = lVar13 + lVar3;
    lVar9 = lVar13 + (ulong)(uint)(iVar16 * 3);
    lVar10 = lVar13 + lVar2;
    lVar12 = lVar11;
    lVar14 = lVar13;
    do {
      if (iVar5 == iVar16) {
        lVar17 = 0;
        do {
          *(uint *)(lVar12 + lVar17 * 4) = (uint)*(byte *)(lVar14 + lVar17);
          lVar17 = lVar17 + 1;
        } while (lVar1 != lVar17);
      }
      else {
        lVar17 = 0;
        lVar24 = lVar13 + uVar15 * lVar19;
        lVar25 = lVar14;
        lVar26 = lVar10;
        lVar27 = lVar9;
        lVar28 = lVar8;
        lVar29 = lVar7;
        do {
          uVar30 = (uint)*(byte *)(lVar24 + lVar17);
          uVar31 = (uint)*(byte *)(lVar24 + lVar1 + lVar17);
          uVar20 = iVar16 * 2;
          if (iVar16 * 2 <= iVar6) {
            lVar22 = 0;
            do {
              uVar30 = uVar30 + *(byte *)(lVar26 + lVar22) + (uint)*(byte *)(lVar28 + lVar22);
              uVar31 = uVar31 + *(byte *)(lVar27 + lVar22) + (uint)*(byte *)(lVar29 + lVar22);
              lVar22 = lVar22 + lVar3;
            } while (lVar2 + lVar22 <= (long)iVar6);
            uVar20 = (int)lVar2 + (int)lVar22;
          }
          if ((int)uVar20 < iVar5) {
            pbVar18 = (byte *)(lVar25 + (ulong)uVar20);
            do {
              uVar30 = uVar30 + *pbVar18;
              uVar20 = uVar20 + iVar16;
              pbVar18 = pbVar18 + lVar1;
            } while ((int)uVar20 < iVar5);
          }
          *(uint *)(lVar11 + uVar15 * lVar23 + lVar17 * 4) = uVar30 + uVar31;
          lVar17 = lVar17 + 1;
          lVar29 = lVar29 + 1;
          lVar28 = lVar28 + 1;
          lVar27 = lVar27 + 1;
          lVar26 = lVar26 + 1;
          lVar25 = lVar25 + 1;
        } while (lVar17 != lVar1);
      }
      uVar15 = uVar15 + 1;
      lVar7 = lVar7 + lVar19;
      lVar8 = lVar8 + lVar19;
      lVar9 = lVar9 + lVar19;
      lVar10 = lVar10 + lVar19;
      lVar14 = lVar14 + lVar19;
      lVar12 = lVar12 + lVar23;
    } while (uVar15 != uVar4);
  }
  return;
}



/* Entry: 109a962c0; end: 109a9649b;  */

void FUN_109a962c0(uint *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  byte *pbVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  undefined4 uVar32;
  
  uVar4 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar4) {
    uVar15 = 0;
    uVar30 = (*(uint **)(param_1 + 0x10))[1];
    uVar21 = (ulong)(*param_1 >> 3) & 0x1ff;
    lVar1 = uVar21 + 1;
    iVar16 = (int)lVar1;
    iVar5 = iVar16 * uVar30;
    lVar13 = *(long *)(param_1 + 4);
    lVar19 = **(long **)(param_1 + 0x12);
    lVar11 = *(long *)(param_2 + 0x10);
    iVar6 = iVar16 * (uVar30 - 4);
    lVar23 = **(long **)(param_2 + 0x48);
    lVar2 = uVar21 * 2 + 2;
    lVar3 = uVar21 * 4 + 4;
    lVar7 = uVar21 * 5 + lVar13 + 5;
    lVar8 = lVar13 + lVar3;
    lVar9 = lVar13 + (ulong)(uint)(iVar16 * 3);
    lVar10 = lVar13 + lVar2;
    lVar12 = lVar11;
    lVar14 = lVar13;
    do {
      if (iVar5 == iVar16) {
        lVar17 = 0;
        do {
          uVar32 = NEON_ucvtf((uint)*(byte *)(lVar14 + lVar17));
          *(undefined4 *)(lVar12 + lVar17 * 4) = uVar32;
          lVar17 = lVar17 + 1;
        } while (lVar1 != lVar17);
      }
      else {
        lVar17 = 0;
        lVar24 = lVar13 + uVar15 * lVar19;
        lVar25 = lVar14;
        lVar26 = lVar10;
        lVar27 = lVar9;
        lVar28 = lVar8;
        lVar29 = lVar7;
        do {
          uVar30 = (uint)*(byte *)(lVar24 + lVar17);
          uVar31 = (uint)*(byte *)(lVar24 + lVar1 + lVar17);
          uVar20 = iVar16 * 2;
          if (iVar16 * 2 <= iVar6) {
            lVar22 = 0;
            do {
              uVar30 = uVar30 + *(byte *)(lVar26 + lVar22) + (uint)*(byte *)(lVar28 + lVar22);
              uVar31 = uVar31 + *(byte *)(lVar27 + lVar22) + (uint)*(byte *)(lVar29 + lVar22);
              lVar22 = lVar22 + lVar3;
            } while (lVar2 + lVar22 <= (long)iVar6);
            uVar20 = (int)lVar2 + (int)lVar22;
          }
          if ((int)uVar20 < iVar5) {
            pbVar18 = (byte *)(lVar25 + (ulong)uVar20);
            do {
              uVar30 = uVar30 + *pbVar18;
              uVar20 = uVar20 + iVar16;
              pbVar18 = pbVar18 + lVar1;
            } while ((int)uVar20 < iVar5);
          }
          *(float *)(lVar11 + uVar15 * lVar23 + lVar17 * 4) = (float)(int)(uVar30 + uVar31);
          lVar17 = lVar17 + 1;
          lVar29 = lVar29 + 1;
          lVar28 = lVar28 + 1;
          lVar27 = lVar27 + 1;
          lVar26 = lVar26 + 1;
          lVar25 = lVar25 + 1;
        } while (lVar17 != lVar1);
      }
      uVar15 = uVar15 + 1;
      lVar7 = lVar7 + lVar19;
      lVar8 = lVar8 + lVar19;
      lVar9 = lVar9 + lVar19;
      lVar10 = lVar10 + lVar19;
      lVar14 = lVar14 + lVar19;
      lVar12 = lVar12 + lVar23;
    } while (uVar15 != uVar4);
  }
  return;
}



/* Entry: 109a9649c; end: 109a96677;  */

void FUN_109a9649c(uint *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  byte *pbVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  undefined8 uVar32;
  
  uVar4 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar4) {
    uVar15 = 0;
    uVar30 = (*(uint **)(param_1 + 0x10))[1];
    uVar21 = (ulong)(*param_1 >> 3) & 0x1ff;
    lVar1 = uVar21 + 1;
    iVar16 = (int)lVar1;
    iVar5 = iVar16 * uVar30;
    lVar13 = *(long *)(param_1 + 4);
    lVar19 = **(long **)(param_1 + 0x12);
    lVar11 = *(long *)(param_2 + 0x10);
    iVar6 = iVar16 * (uVar30 - 4);
    lVar23 = **(long **)(param_2 + 0x48);
    lVar2 = uVar21 * 2 + 2;
    lVar3 = uVar21 * 4 + 4;
    lVar7 = uVar21 * 5 + lVar13 + 5;
    lVar8 = lVar13 + lVar3;
    lVar9 = lVar13 + (ulong)(uint)(iVar16 * 3);
    lVar10 = lVar13 + lVar2;
    lVar12 = lVar11;
    lVar14 = lVar13;
    do {
      if (iVar5 == iVar16) {
        lVar17 = 0;
        do {
          uVar32 = NEON_ucvtf((ulong)*(byte *)(lVar14 + lVar17));
          *(undefined8 *)(lVar12 + lVar17 * 8) = uVar32;
          lVar17 = lVar17 + 1;
        } while (lVar1 != lVar17);
      }
      else {
        lVar17 = 0;
        lVar24 = lVar13 + uVar15 * lVar19;
        lVar25 = lVar14;
        lVar26 = lVar10;
        lVar27 = lVar9;
        lVar28 = lVar8;
        lVar29 = lVar7;
        do {
          uVar30 = (uint)*(byte *)(lVar24 + lVar17);
          uVar31 = (uint)*(byte *)(lVar24 + lVar1 + lVar17);
          uVar20 = iVar16 * 2;
          if (iVar16 * 2 <= iVar6) {
            lVar22 = 0;
            do {
              uVar30 = uVar30 + *(byte *)(lVar26 + lVar22) + (uint)*(byte *)(lVar28 + lVar22);
              uVar31 = uVar31 + *(byte *)(lVar27 + lVar22) + (uint)*(byte *)(lVar29 + lVar22);
              lVar22 = lVar22 + lVar3;
            } while (lVar2 + lVar22 <= (long)iVar6);
            uVar20 = (int)lVar2 + (int)lVar22;
          }
          if ((int)uVar20 < iVar5) {
            pbVar18 = (byte *)(lVar25 + (ulong)uVar20);
            do {
              uVar30 = uVar30 + *pbVar18;
              uVar20 = uVar20 + iVar16;
              pbVar18 = pbVar18 + lVar1;
            } while ((int)uVar20 < iVar5);
          }
          *(double *)(lVar11 + uVar15 * lVar23 + lVar17 * 8) = (double)(int)(uVar30 + uVar31);
          lVar17 = lVar17 + 1;
          lVar29 = lVar29 + 1;
          lVar28 = lVar28 + 1;
          lVar27 = lVar27 + 1;
          lVar26 = lVar26 + 1;
          lVar25 = lVar25 + 1;
        } while (lVar17 != lVar1);
      }
      uVar15 = uVar15 + 1;
      lVar7 = lVar7 + lVar19;
      lVar8 = lVar8 + lVar19;
      lVar9 = lVar9 + lVar19;
      lVar10 = lVar10 + lVar19;
      lVar14 = lVar14 + lVar19;
      lVar12 = lVar12 + lVar23;
    } while (uVar15 != uVar4);
  }
  return;
}



/* Entry: 109a96678; end: 109a9686f;  */

void FUN_109a96678(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  ushort *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  
  uVar4 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar4) {
    uVar21 = 0;
    uVar5 = (*(uint **)(param_1 + 0x10))[1];
    uVar16 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar16 + 1;
    uVar22 = (ulong)uVar1;
    uVar6 = uVar1 * uVar5;
    lVar23 = *(long *)(param_1 + 4);
    lVar24 = **(long **)(param_1 + 0x12);
    lVar19 = *(long *)(param_2 + 0x10);
    lVar28 = **(long **)(param_2 + 0x48);
    iVar7 = uVar1 * (uVar5 - 4);
    lVar2 = uVar16 * 4 + 4;
    lVar14 = lVar23 + uVar16 * 10 + 10;
    lVar3 = uVar16 * 8 + 8;
    lVar15 = lVar23 + lVar3;
    lVar17 = lVar23 + uVar16 * 6 + 6;
    lVar18 = lVar23 + lVar2;
    lVar20 = lVar19;
    lVar29 = lVar23;
    do {
      if (uVar6 == uVar1) {
        uVar25 = 0;
        do {
          uVar8 = NEON_ucvtf((uint)*(ushort *)(lVar29 + uVar25 * 2));
          *(undefined4 *)(lVar20 + uVar25 * 4) = uVar8;
          uVar25 = uVar25 + 1;
        } while (uVar22 != uVar25);
      }
      else {
        uVar25 = 0;
        lVar30 = lVar23 + uVar21 * lVar24;
        lVar31 = lVar29;
        lVar32 = lVar18;
        lVar33 = lVar17;
        lVar34 = lVar15;
        lVar35 = lVar14;
        do {
          fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar30 + uVar25 * 2));
          fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar30 + uVar22 * 2 + uVar25 * 2));
          uVar36 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar7) {
            lVar26 = 0;
            uVar36 = uVar16 * 2 + 2;
            do {
              fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar32 + lVar26));
              fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar33 + lVar26));
              fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar34 + lVar26));
              fVar9 = fVar9 + fVar13 + fVar12;
              fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar35 + lVar26));
              fVar10 = fVar10 + fVar11 + fVar13;
              uVar36 = uVar36 + lVar2;
              lVar26 = lVar26 + lVar3;
            } while ((long)uVar36 <= (long)iVar7);
          }
          if ((int)uVar36 < (int)uVar6) {
            puVar27 = (ushort *)(lVar31 + (uVar36 & 0xffffffff) * 2);
            do {
              fVar13 = (float)NEON_ucvtf((uint)*puVar27);
              fVar9 = fVar9 + fVar13;
              uVar5 = (int)uVar36 + uVar1;
              uVar36 = (ulong)uVar5;
              puVar27 = puVar27 + uVar16 + 1;
            } while ((int)uVar5 < (int)uVar6);
          }
          *(float *)(lVar19 + uVar21 * lVar28 + uVar25 * 4) = fVar10 + fVar9;
          uVar25 = uVar25 + 1;
          lVar35 = lVar35 + 2;
          lVar34 = lVar34 + 2;
          lVar33 = lVar33 + 2;
          lVar32 = lVar32 + 2;
          lVar31 = lVar31 + 2;
        } while (uVar25 != uVar22);
      }
      uVar21 = uVar21 + 1;
      lVar14 = lVar14 + lVar24;
      lVar15 = lVar15 + lVar24;
      lVar17 = lVar17 + lVar24;
      lVar18 = lVar18 + lVar24;
      lVar29 = lVar29 + lVar24;
      lVar20 = lVar20 + lVar28;
    } while (uVar21 != uVar4);
  }
  return;
}



/* Entry: 109a96870; end: 109a96a67;  */

void FUN_109a96870(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ushort *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  
  uVar4 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar4) {
    uVar15 = 0;
    uVar5 = (*(uint **)(param_1 + 0x10))[1];
    uVar10 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar10 + 1;
    uVar16 = (ulong)uVar1;
    uVar6 = uVar1 * uVar5;
    lVar17 = *(long *)(param_1 + 4);
    lVar18 = **(long **)(param_1 + 0x12);
    lVar13 = *(long *)(param_2 + 0x10);
    lVar22 = **(long **)(param_2 + 0x48);
    iVar7 = uVar1 * (uVar5 - 4);
    lVar2 = uVar10 * 4 + 4;
    lVar8 = lVar17 + uVar10 * 10 + 10;
    lVar3 = uVar10 * 8 + 8;
    lVar9 = lVar17 + lVar3;
    lVar11 = lVar17 + uVar10 * 6 + 6;
    lVar12 = lVar17 + lVar2;
    lVar14 = lVar13;
    lVar23 = lVar17;
    do {
      if (uVar6 == uVar1) {
        uVar19 = 0;
        do {
          uVar31 = NEON_ucvtf((ulong)*(ushort *)(lVar23 + uVar19 * 2));
          *(undefined8 *)(lVar14 + uVar19 * 8) = uVar31;
          uVar19 = uVar19 + 1;
        } while (uVar16 != uVar19);
      }
      else {
        uVar19 = 0;
        lVar24 = lVar17 + uVar15 * lVar18;
        lVar25 = lVar23;
        lVar26 = lVar12;
        lVar27 = lVar11;
        lVar28 = lVar9;
        lVar29 = lVar8;
        do {
          dVar32 = (double)NEON_ucvtf((ulong)*(ushort *)(lVar24 + uVar19 * 2));
          dVar33 = (double)NEON_ucvtf((ulong)*(ushort *)(lVar24 + uVar16 * 2 + uVar19 * 2));
          uVar30 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar7) {
            lVar20 = 0;
            uVar30 = uVar10 * 2 + 2;
            do {
              dVar36 = (double)NEON_ucvtf((ulong)*(ushort *)(lVar26 + lVar20));
              dVar34 = (double)NEON_ucvtf((ulong)*(ushort *)(lVar27 + lVar20));
              dVar35 = (double)NEON_ucvtf((ulong)*(ushort *)(lVar28 + lVar20));
              dVar32 = dVar32 + dVar36 + dVar35;
              dVar36 = (double)NEON_ucvtf((ulong)*(ushort *)(lVar29 + lVar20));
              dVar33 = dVar33 + dVar34 + dVar36;
              uVar30 = uVar30 + lVar2;
              lVar20 = lVar20 + lVar3;
            } while ((long)uVar30 <= (long)iVar7);
          }
          if ((int)uVar30 < (int)uVar6) {
            puVar21 = (ushort *)(lVar25 + (uVar30 & 0xffffffff) * 2);
            do {
              dVar36 = (double)NEON_ucvtf((ulong)*puVar21);
              dVar32 = dVar32 + dVar36;
              uVar5 = (int)uVar30 + uVar1;
              uVar30 = (ulong)uVar5;
              puVar21 = puVar21 + uVar10 + 1;
            } while ((int)uVar5 < (int)uVar6);
          }
          *(double *)(lVar13 + uVar15 * lVar22 + uVar19 * 8) = dVar33 + dVar32;
          uVar19 = uVar19 + 1;
          lVar29 = lVar29 + 2;
          lVar28 = lVar28 + 2;
          lVar27 = lVar27 + 2;
          lVar26 = lVar26 + 2;
          lVar25 = lVar25 + 2;
        } while (uVar19 != uVar16);
      }
      uVar15 = uVar15 + 1;
      lVar8 = lVar8 + lVar18;
      lVar9 = lVar9 + lVar18;
      lVar11 = lVar11 + lVar18;
      lVar12 = lVar12 + lVar18;
      lVar23 = lVar23 + lVar18;
      lVar14 = lVar14 + lVar22;
    } while (uVar15 != uVar4);
  }
  return;
}



/* Entry: 109a96a68; end: 109a96c5b;  */

void FUN_109a96a68(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  short *psVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  
  uVar4 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar4) {
    uVar15 = 0;
    uVar5 = (*(uint **)(param_1 + 0x10))[1];
    uVar10 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar10 + 1;
    uVar16 = (ulong)uVar1;
    uVar6 = uVar1 * uVar5;
    lVar22 = *(long *)(param_1 + 4);
    lVar17 = **(long **)(param_1 + 0x12);
    lVar13 = *(long *)(param_2 + 0x10);
    lVar21 = **(long **)(param_2 + 0x48);
    iVar7 = uVar1 * (uVar5 - 4);
    lVar2 = uVar10 * 4 + 4;
    lVar8 = lVar22 + uVar10 * 10 + 10;
    lVar3 = uVar10 * 8 + 8;
    lVar9 = lVar22 + lVar3;
    lVar11 = lVar22 + uVar10 * 6 + 6;
    lVar12 = lVar22 + lVar2;
    lVar14 = lVar13;
    lVar23 = lVar22;
    do {
      if (uVar6 == uVar1) {
        uVar18 = 0;
        do {
          *(float *)(lVar14 + uVar18 * 4) = (float)(int)*(short *)(lVar23 + uVar18 * 2);
          uVar18 = uVar18 + 1;
        } while (uVar16 != uVar18);
      }
      else {
        uVar18 = 0;
        lVar24 = lVar22 + uVar15 * lVar17;
        lVar25 = lVar23;
        lVar26 = lVar12;
        lVar27 = lVar11;
        lVar28 = lVar9;
        lVar29 = lVar8;
        do {
          fVar32 = (float)(int)*(short *)(lVar24 + uVar18 * 2);
          fVar31 = (float)(int)*(short *)(lVar24 + uVar16 * 2 + uVar18 * 2);
          uVar30 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar7) {
            lVar19 = 0;
            uVar30 = uVar10 * 2 + 2;
            do {
              fVar32 = fVar32 + (float)(int)*(short *)(lVar26 + lVar19) +
                       (float)(int)*(short *)(lVar28 + lVar19);
              fVar31 = fVar31 + (float)(int)*(short *)(lVar27 + lVar19) +
                       (float)(int)*(short *)(lVar29 + lVar19);
              uVar30 = uVar30 + lVar2;
              lVar19 = lVar19 + lVar3;
            } while ((long)uVar30 <= (long)iVar7);
          }
          if ((int)uVar30 < (int)uVar6) {
            psVar20 = (short *)(lVar25 + (uVar30 & 0xffffffff) * 2);
            do {
              fVar32 = fVar32 + (float)(int)*psVar20;
              uVar5 = (int)uVar30 + uVar1;
              uVar30 = (ulong)uVar5;
              psVar20 = psVar20 + uVar10 + 1;
            } while ((int)uVar5 < (int)uVar6);
          }
          *(float *)(lVar13 + uVar15 * lVar21 + uVar18 * 4) = fVar31 + fVar32;
          uVar18 = uVar18 + 1;
          lVar29 = lVar29 + 2;
          lVar28 = lVar28 + 2;
          lVar27 = lVar27 + 2;
          lVar26 = lVar26 + 2;
          lVar25 = lVar25 + 2;
        } while (uVar18 != uVar16);
      }
      uVar15 = uVar15 + 1;
      lVar8 = lVar8 + lVar17;
      lVar9 = lVar9 + lVar17;
      lVar11 = lVar11 + lVar17;
      lVar12 = lVar12 + lVar17;
      lVar23 = lVar23 + lVar17;
      lVar14 = lVar14 + lVar21;
    } while (uVar15 != uVar4);
  }
  return;
}



/* Entry: 109a96c5c; end: 109a96e4f;  */

void FUN_109a96c5c(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  short *psVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  double dVar31;
  double dVar32;
  
  uVar4 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar4) {
    uVar15 = 0;
    uVar5 = (*(uint **)(param_1 + 0x10))[1];
    uVar10 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar10 + 1;
    uVar16 = (ulong)uVar1;
    uVar6 = uVar1 * uVar5;
    lVar22 = *(long *)(param_1 + 4);
    lVar17 = **(long **)(param_1 + 0x12);
    lVar13 = *(long *)(param_2 + 0x10);
    lVar21 = **(long **)(param_2 + 0x48);
    iVar7 = uVar1 * (uVar5 - 4);
    lVar2 = uVar10 * 4 + 4;
    lVar8 = lVar22 + uVar10 * 10 + 10;
    lVar3 = uVar10 * 8 + 8;
    lVar9 = lVar22 + lVar3;
    lVar11 = lVar22 + uVar10 * 6 + 6;
    lVar12 = lVar22 + lVar2;
    lVar14 = lVar13;
    lVar23 = lVar22;
    do {
      if (uVar6 == uVar1) {
        uVar18 = 0;
        do {
          *(double *)(lVar14 + uVar18 * 8) = (double)(int)*(short *)(lVar23 + uVar18 * 2);
          uVar18 = uVar18 + 1;
        } while (uVar16 != uVar18);
      }
      else {
        uVar18 = 0;
        lVar24 = lVar22 + uVar15 * lVar17;
        lVar25 = lVar23;
        lVar26 = lVar12;
        lVar27 = lVar11;
        lVar28 = lVar9;
        lVar29 = lVar8;
        do {
          dVar32 = (double)(int)*(short *)(lVar24 + uVar18 * 2);
          dVar31 = (double)(int)*(short *)(lVar24 + uVar16 * 2 + uVar18 * 2);
          uVar30 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar7) {
            lVar19 = 0;
            uVar30 = uVar10 * 2 + 2;
            do {
              dVar32 = dVar32 + (double)(int)*(short *)(lVar26 + lVar19) +
                       (double)(int)*(short *)(lVar28 + lVar19);
              dVar31 = dVar31 + (double)(int)*(short *)(lVar27 + lVar19) +
                       (double)(int)*(short *)(lVar29 + lVar19);
              uVar30 = uVar30 + lVar2;
              lVar19 = lVar19 + lVar3;
            } while ((long)uVar30 <= (long)iVar7);
          }
          if ((int)uVar30 < (int)uVar6) {
            psVar20 = (short *)(lVar25 + (uVar30 & 0xffffffff) * 2);
            do {
              dVar32 = dVar32 + (double)(int)*psVar20;
              uVar5 = (int)uVar30 + uVar1;
              uVar30 = (ulong)uVar5;
              psVar20 = psVar20 + uVar10 + 1;
            } while ((int)uVar5 < (int)uVar6);
          }
          *(double *)(lVar13 + uVar15 * lVar21 + uVar18 * 8) = dVar31 + dVar32;
          uVar18 = uVar18 + 1;
          lVar29 = lVar29 + 2;
          lVar28 = lVar28 + 2;
          lVar27 = lVar27 + 2;
          lVar26 = lVar26 + 2;
          lVar25 = lVar25 + 2;
        } while (uVar18 != uVar16);
      }
      uVar15 = uVar15 + 1;
      lVar8 = lVar8 + lVar17;
      lVar9 = lVar9 + lVar17;
      lVar11 = lVar11 + lVar17;
      lVar12 = lVar12 + lVar17;
      lVar23 = lVar23 + lVar17;
      lVar14 = lVar14 + lVar21;
    } while (uVar15 != uVar4);
  }
  return;
}



/* Entry: 109a96e50; end: 109a9702b;  */

void FUN_109a96e50(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  
  uVar4 = **(uint **)(param_1 + 0x10);
  if (0 < (int)uVar4) {
    uVar15 = 0;
    uVar5 = (*(uint **)(param_1 + 0x10))[1];
    uVar11 = (ulong)(*param_1 >> 3) & 0x1ff;
    uVar1 = (int)uVar11 + 1;
    uVar6 = uVar1 * uVar5;
    lVar16 = *(long *)(param_1 + 4);
    lVar17 = **(long **)(param_1 + 0x12);
    lVar13 = *(long *)(param_2 + 0x10);
    lVar21 = **(long **)(param_2 + 0x48);
    iVar7 = uVar1 * (uVar5 - 4);
    lVar2 = uVar11 * 4 + 4;
    lVar8 = lVar16 + uVar11 * 0x14 + 0x14;
    lVar3 = uVar11 * 0x10 + 0x10;
    lVar9 = lVar16 + lVar3;
    lVar10 = lVar16 + uVar11 * 0xc + 0xc;
    lVar12 = lVar16 + uVar11 * 8 + 8;
    lVar14 = lVar13;
    lVar22 = lVar16;
    do {
      if (uVar6 == uVar1) {
        lVar18 = 0;
        do {
          *(undefined4 *)(lVar14 + lVar18) = *(undefined4 *)(lVar22 + lVar18);
          lVar18 = lVar18 + 4;
        } while (lVar2 != lVar18);
      }
      else {
        uVar23 = 0;
        lVar24 = lVar16 + uVar15 * lVar17;
        lVar25 = lVar22;
        lVar26 = lVar12;
        lVar27 = lVar10;
        lVar28 = lVar9;
        lVar18 = lVar8;
        do {
          fVar30 = *(float *)(lVar24 + uVar23 * 4);
          fVar31 = *(float *)(lVar24 + (ulong)uVar1 * 4 + uVar23 * 4);
          uVar29 = (ulong)(uVar1 * 2);
          if ((int)(uVar1 * 2) <= iVar7) {
            lVar19 = 0;
            uVar29 = uVar11 * 2 + 2;
            do {
              fVar30 = fVar30 + *(float *)(lVar26 + lVar19) + *(float *)(lVar28 + lVar19);
              fVar31 = fVar31 + *(float *)(lVar27 + lVar19) + *(float *)(lVar18 + lVar19);
              uVar29 = uVar29 + lVar2;
              lVar19 = lVar19 + lVar3;
            } while ((long)uVar29 <= (long)iVar7);
          }
          if ((int)uVar29 < (int)uVar6) {
            pfVar20 = (float *)(lVar25 + (uVar29 & 0xffffffff) * 4);
            do {
              fVar30 = fVar30 + *pfVar20;
              uVar5 = (int)uVar29 + uVar1;
              uVar29 = (ulong)uVar5;
              pfVar20 = pfVar20 + uVar11 + 1;
            } while ((int)uVar5 < (int)uVar6);
          }
          *(float *)(lVar13 + uVar15 * lVar21 + uVar23 * 4) = fVar31 + fVar30;
          uVar23 = uVar23 + 1;
          lVar18 = lVar18 + 4;
          lVar28 = lVar28 + 4;
          lVar27 = lVar27 + 4;
          lVar26 = lVar26 + 4;
          lVar25 = lVar25 + 4;
        } while (uVar23 != uVar1);
      }
      uVar15 = uVar15 + 1;
      lVar8 = lVar8 + lVar17;
      lVar9 = lVar9 + lVar17;
      lVar10 = lVar10 + lVar17;
      lVar12 = lVar12 + lVar17;
      lVar22 = lVar22 + lVar17;
      lVar14 = lVar14 + lVar21;
    } while (uVar15 != uVar4);
  }
  return;
}


