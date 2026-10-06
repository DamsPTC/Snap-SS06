/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096decd8; end: 1096ded53;  */

undefined8 * FUN_1096decd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b09938;
  param_1[1] = puVar1;
  FUN_1096ded54(param_1);
  return param_1;
}



/* Entry: 1096ded54; end: 1096dee57;  */

void FUN_1096ded54(undefined8 *param_1)

{
  func_0x000107c2acd0(param_1,0x98);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_DAT_110b00de0;
  *(undefined2 *)(param_1 + 1) = 6;
  FUN_109683098(param_1 + 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_1096b6920(param_1 + 0x10);
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_110b09a60;
  return;
}



/* Entry: 1096dee58; end: 1096deeab;  */

void FUN_1096dee58(long param_1)

{
  long *plVar1;
  long lStack_28;
  undefined8 **ppuStack_20;
  long *plStack_18;
  
  plVar1 = (long *)(*(long *)(param_1 + 8) + 0x90);
  if (*plVar1 != -1) {
    plStack_18 = &lStack_28;
    ppuStack_20 = &plStack_18;
    lStack_28 = param_1;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(plVar1,&ppuStack_20,FUN_1096e0de0);
  }
  return;
}



/* Entry: 1096deeac; end: 1096dfbdf;  */

void FUN_1096deeac(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  bool bVar1;
  long *plVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  int *piVar13;
  long lVar14;
  undefined4 *puVar15;
  float *pfVar16;
  undefined4 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined **ppuStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if (*(short *)(*(long *)(param_1 + 8) + 8) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = 0 < *(int *)(*(long *)(param_1 + 8) + 0x20);
  }
  puVar23 = param_3;
  ___dynamic_cast(param_3,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0);
  if (puVar23 == (undefined8 *)0x0) {
    func_0x000107c2acdc();
  }
  lStack_b8 = puVar23[1];
  if (lStack_b8 != 0) {
    piVar13 = (int *)(lStack_b8 + -8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar8) {
        *piVar13 = *piVar13 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plStack_c8 = (long *)0x0;
  ppuStack_c0 = &PTR_FUN_110b051b8;
  lStack_d8 = 0;
  plStack_d0 = (long *)0x0;
  uVar6 = *(ushort *)(*(long *)(param_1 + 8) + 8);
  FUN_1096cae08(&uStack_110,&ppuStack_c0,uVar6 < 2);
  FUN_1096cb6e0(&lStack_d8,&uStack_110);
  plVar10 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar11 = plStack_e0 + 1;
    do {
      lVar18 = *plVar11;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (CONCAT44(uStack_100._4_4_,(int)uStack_100) != 0) {
    uStack_f8._0_4_ = (int)uStack_100;
    uStack_f8._4_4_ = uStack_100._4_4_;
    __ZdlPv();
  }
  FUN_1096cb19c(&uStack_110,param_2,&ppuStack_c0,uVar6 < 2);
  lVar21 = CONCAT44(uStack_108._4_4_,(int)uStack_108);
  for (lVar18 = CONCAT44(uStack_110._4_4_,(int)uStack_110); lVar18 != lVar21; lVar18 = lVar18 + 0x38
      ) {
    FUN_1096814dc(&lStack_d8,lVar18);
  }
  uStack_150 = (int *)&uStack_110;
  FUN_109682a18(&uStack_150);
  if (bVar1) {
    plVar10 = *(long **)(param_4 + 0x18);
    FUN_1096dfbe0(plVar10,*(undefined8 *)(param_1 + 8));
    lVar18 = *plVar10;
    lVar21 = plVar10[1];
    if (lVar18 == lVar21) {
      lVar19 = *(long *)(param_1 + 8);
      if (0 < *(int *)(lVar19 + 0x20)) {
        uVar20 = *(long *)(lVar19 + 0x30) - *(long *)(lVar19 + 0x28);
        lVar18 = (long)((int)(uVar20 >> 4) - *(int *)(lVar19 + 0x20));
        do {
          plVar11 = (long *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + lVar18 * 0x10);
          lVar21 = *plVar11;
          lVar19 = *(long *)(lVar21 + 0x20) +
                   (long)**(int **)(*(long *)(lVar21 + 8) + (long)(int)plVar11[1] * 0x40 + 0x28) *
                   0x38;
          uStack_148 = (int *)0x0;
          uStack_140 = 0;
          uStack_150 = (int *)0x0;
          lVar21 = *(long *)(lVar19 + 0x10);
          lVar19 = *(long *)(lVar19 + 0x18);
          FUN_109285684(&uStack_150,lVar21,lVar19,lVar19 - lVar21 >> 2);
          uVar24 = 1;
          for (piVar13 = uStack_150; piVar13 != uStack_148; piVar13 = piVar13 + 1) {
            uVar24 = (ulong)(uint)(*piVar13 * (int)uVar24);
          }
          lVar21 = ((-(uVar24 >> 0x1f) & 0xfffffffc00000000 | uVar24 << 2) - 4 | 0xc) + 4;
          func_0x000109699314(lVar21,0x10);
          lStack_138 = lVar21;
          if (0 < (int)uVar24) {
            _bzero();
          }
          uStack_110._0_4_ = 0x18;
          uStack_108._0_4_ = 0;
          uStack_108._4_4_ = 0;
          uStack_f8._0_4_ = 0;
          uStack_f8._4_4_ = 0;
          uStack_f0._0_4_ = 0;
          uStack_f0._4_4_ = 0;
          uStack_100._0_4_ = 0;
          uStack_100._4_4_ = 0;
          FUN_109683e94(&uStack_100,uStack_150,uStack_148,(long)uStack_148 - (long)uStack_150 >> 2);
          uStack_e8 = 0;
          uStack_e4 = 0;
          plStack_e0 = (long *)0x0;
          FUN_10967fc88(&uStack_110);
          lVar21 = lStack_138;
          uVar27 = CONCAT44(uStack_108._4_4_,(int)uStack_108);
          puVar23 = &uStack_110;
          FUN_10967fc04(puVar23);
          _memcpy(uVar27,lVar21,(long)(int)puVar23);
          FUN_1096cb6e0(plVar10,&uStack_110);
          plVar11 = plStack_e0;
          if (plStack_e0 != (long *)0x0) {
            plVar2 = plStack_e0 + 1;
            do {
              lVar21 = *plVar2;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar21 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar21 == 0) {
              (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          if (CONCAT44(uStack_100._4_4_,(int)uStack_100) != 0) {
            uStack_f8._0_4_ = (int)uStack_100;
            uStack_f8._4_4_ = uStack_100._4_4_;
            __ZdlPv();
          }
          lVar21 = lStack_138;
          lStack_138 = 0;
          if (lVar21 != 0) {
            _free(*(undefined8 *)(lVar21 + -8));
          }
          if (uStack_150 != (int *)0x0) {
            uStack_148 = uStack_150;
            __ZdlPv();
          }
          lVar18 = lVar18 + 1;
        } while (lVar18 < (long)(uVar20 * 0x10000000) >> 0x20);
        lVar18 = *plVar10;
        lVar21 = plVar10[1];
      }
    }
    plVar10 = plStack_d0;
    lVar19 = lVar21 - lVar18;
    if (0 < lVar19) {
      if ((long)plStack_c8 - (long)plStack_d0 < lVar19) {
        lVar21 = (long)plStack_d0 - lStack_d8;
        uVar20 = (lVar19 >> 3) * 0x6db6db6db6db6db7 + (lVar21 >> 3) * 0x6db6db6db6db6db7;
        if (0x492492492492492 < uVar20) {
          FUN_109682680();
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1096dfa74);
          (*pcVar9)();
        }
        lVar14 = (long)plStack_c8 - lStack_d8 >> 3;
        uVar24 = lVar14 * -0x2492492492492492;
        if (uVar24 < uVar20 || uVar24 - uVar20 == 0) {
          uVar24 = uVar20;
        }
        if (0x249249249249248 < (ulong)(lVar14 * 0x6db6db6db6db6db7)) {
          uVar24 = 0x492492492492492;
        }
        uStack_f0 = &lStack_d8;
        if (uVar24 == 0) {
          plVar11 = (long *)0x0;
        }
        else {
          plVar11 = &lStack_d8;
          FUN_109682694();
        }
        lVar21 = (long)plVar11 + lVar21;
        uStack_110._0_4_ = (int)plVar11;
        uStack_110._4_4_ = (undefined4)((ulong)plVar11 >> 0x20);
        uStack_f8 = plVar11 + uVar24 * 7;
        lVar14 = lVar21 + lVar19;
        uStack_108 = lVar21;
        uStack_100 = (long *)lVar21;
        do {
          FUN_1096829ac(lVar21,lVar18);
          lVar21 = lVar21 + 0x38;
          lVar18 = lVar18 + 0x38;
          lVar19 = lVar19 + -0x38;
        } while (lVar19 != 0);
        uStack_100 = (long *)lVar14;
        func_0x0001096826dc(&lStack_d8,plVar10,plStack_d0,lVar14);
        uStack_100 = (long *)((long)plStack_d0 + ((long)uStack_100 - (long)plVar10));
        lVar18 = uStack_108 + (lStack_d8 - (long)plVar10);
        plStack_d0 = plVar10;
        func_0x0001096826dc(&lStack_d8,lStack_d8,plVar10,lVar18);
        plVar10 = uStack_f8;
        plStack_d0 = uStack_100;
        uStack_100._0_4_ = (int)lStack_d8;
        uStack_100._4_4_ = (undefined4)((ulong)lStack_d8 >> 0x20);
        uStack_f8._0_4_ = (int)plStack_c8;
        uStack_f8._4_4_ = (undefined4)((ulong)plStack_c8 >> 0x20);
        uStack_110._0_4_ = (int)uStack_100;
        uStack_110._4_4_ = uStack_100._4_4_;
        uStack_108._0_4_ = (int)uStack_100;
        uStack_108._4_4_ = uStack_100._4_4_;
        lStack_d8 = lVar18;
        plStack_c8 = plVar10;
        func_0x00010968279c(&uStack_110);
      }
      else {
        plVar10 = &lStack_d8;
        FUN_109682928(plVar10,lVar18,lVar21,plStack_d0);
        plStack_d0 = plVar10;
      }
    }
  }
  lVar18 = *(long *)(param_1 + 8);
  pbVar3 = (byte *)(lVar18 + 0x58);
  do {
    bVar5 = *pbVar3;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(pbVar3,0x10);
    if (bVar8) {
      *pbVar3 = 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while ((cVar7 != '\0') || ((bVar5 & 1) != 0));
  plVar10 = (long *)(lVar18 + 0x60);
  puVar23 = (undefined8 *)*plVar10;
  if (puVar23 == (undefined8 *)0x0) {
    *pbVar3 = 0;
    puVar23 = (undefined8 *)0x18;
    __Znwm();
    FUN_1096906b4();
    *puVar23 = &PTR_FUN_110b09b18;
    puVar23[2] = 0;
  }
  else {
    lVar21 = puVar23[2];
    *plVar10 = lVar21;
    puVar23[2] = 0;
    if (lVar21 == 0) {
      *(undefined8 *)(lVar18 + 0x68) = 0;
    }
    *pbVar3 = 0;
  }
  lVar19 = *(long *)(param_1 + 8);
  lVar21 = *(long *)(lVar19 + 0x28);
  if (*(long *)(lVar19 + 0x30) != lVar21) {
    lVar22 = 0;
    lVar14 = 0;
    uVar20 = 0;
    do {
      puVar25 = (undefined8 *)(lVar21 + lVar22);
      if (*(int *)(puVar25 + 1) != -1) {
        FUN_1096909cc(puVar23,*puVar25,puVar25[1],lStack_d8 + lVar14);
        lVar19 = *(long *)(param_1 + 8);
      }
      uVar20 = uVar20 + 1;
      lVar21 = *(long *)(lVar19 + 0x28);
      lVar14 = lVar14 + 0x38;
      lVar22 = lVar22 + 0x10;
    } while (uVar20 < (ulong)(*(long *)(lVar19 + 0x30) - lVar21 >> 4));
  }
  FUN_109692a10(puVar23,lVar19 + 0x40);
  FUN_1096ba870(&ppuStack_120);
  FUN_1096ba9b0(&ppuStack_120,*(long *)(param_1 + 8) + 0x80);
  lVar21 = *(long *)(*(long *)(puVar23[1] + 0x28) +
                    (long)**(int **)(*(long *)(*(long *)(puVar23[1] + 8) + 8) +
                                     (long)*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x40) + 8) *
                                     0x40 + 0x28) * 0x18);
  puVar17 = *(undefined4 **)(lVar21 + 8);
  piVar13 = *(int **)(lVar21 + 0x10);
  lVar21 = *(long *)(lVar21 + 0x18);
  FUN_1096baa30(&ppuStack_120);
  puVar15 = *(undefined4 **)(lStack_118 + 0x18);
  uVar20 = lVar21 - (long)piVar13;
  if ((uVar20 & 0x3fffffffc) == 0) {
    uVar20 = 1;
LAB_1096df4cc:
    do {
      *puVar15 = *puVar17;
      uVar20 = uVar20 - 1;
      puVar15 = puVar15 + 1;
      puVar17 = puVar17 + 1;
    } while (uVar20 != 0);
  }
  else {
    lVar21 = ((long)(uVar20 * 0x40000000) >> 0x20) << 2;
    uVar20 = 1;
    do {
      uVar12 = *piVar13 * (int)uVar20;
      uVar20 = (ulong)uVar12;
      lVar21 = lVar21 + -4;
      piVar13 = piVar13 + 1;
    } while (lVar21 != 0);
    if (0 < (int)uVar12) goto LAB_1096df4cc;
  }
  lVar21 = *(long *)(param_1 + 8);
  if (*(ushort *)(lVar21 + 8) < 2) {
    lVar19 = *(long *)(lVar21 + 0x40);
    if (*(long *)(lVar21 + 0x48) - lVar19 == 0x90) {
      lVar14 = *(long *)(*(long *)(puVar23[1] + 8) + 8);
      lVar21 = *(long *)(puVar23[1] + 0x28);
      fVar29 = **(float **)
                 (*(long *)(lVar21 + (long)**(int **)(lVar14 + (long)*(int *)(lVar19 + 0x18) * 0x40
                                                     + 0x28) * 0x18) + 8);
      fVar26 = **(float **)
                 (*(long *)(lVar21 + (long)**(int **)(lVar14 + (long)*(int *)(lVar19 + 0x38) * 0x40
                                                     + 0x28) * 0x18) + 8) * 0.5;
      fVar31 = **(float **)
                 (*(long *)(lVar21 + (long)**(int **)(lVar14 + (long)*(int *)(lVar19 + 0x28) * 0x40
                                                     + 0x28) * 0x18) + 8) * 0.5;
      fVar32 = fVar29 * 0.5;
      ___sincosf_stret();
      fVar30 = fVar29;
      ___sincosf_stret();
      fVar28 = fVar30;
      ___sincosf_stret();
      uStack_150 = (int *)CONCAT44(fVar32 * fVar30 * fVar26 + fVar28 * fVar31 * fVar29,
                                   -(fVar31 * fVar29 * fVar32) + fVar28 * fVar30 * fVar26);
      uStack_148 = (int *)CONCAT44(fVar32 * fVar31 * fVar26 + fVar28 * fVar30 * fVar29,
                                   -(fVar31 * fVar26 * fVar28) + fVar32 * fVar30 * fVar29);
      uStack_a8 = CONCAT44(**(undefined4 **)
                             (*(long *)(lVar21 + (long)**(int **)(lVar14 + (long)*(int *)(lVar19 + 
                                                  0x58) * 0x40 + 0x28) * 0x18) + 8),
                           **(undefined4 **)
                             (*(long *)(lVar21 + (long)**(int **)(lVar14 + (long)*(int *)(lVar19 + 
                                                  0x48) * 0x40 + 0x28) * 0x18) + 8));
      uStack_a0 = CONCAT44(uStack_a0._4_4_,
                           **(undefined4 **)
                             (*(long *)(lVar21 + (long)**(int **)(lVar14 + (long)*(int *)(lVar19 + 
                                                  0x68) * 0x40 + 0x28) * 0x18) + 8));
      FUN_1096bb950(&uStack_110,&uStack_150,&uStack_a8);
      FUN_1096baa30(&ppuStack_120);
      *(ulong *)(lStack_118 + 0x38) = CONCAT44(uStack_108._4_4_,(int)uStack_108);
      *(ulong *)(lStack_118 + 0x30) = CONCAT44(uStack_110._4_4_,(int)uStack_110);
      *(ulong *)(lStack_118 + 0x48) = CONCAT44(uStack_f8._4_4_,(int)uStack_f8);
      *(ulong *)(lStack_118 + 0x40) = CONCAT44(uStack_100._4_4_,(int)uStack_100);
      *(ulong *)(lStack_118 + 0x58) = CONCAT44(uStack_e4,uStack_e8);
      *(long **)(lStack_118 + 0x50) = uStack_f0;
      uVar12 = 7;
      goto LAB_1096df824;
    }
LAB_1096df690:
    lVar14 = *(long *)(*(long *)(puVar23[1] + 8) + 8);
    lVar21 = *(long *)(puVar23[1] + 0x28);
    pfVar16 = *(float **)
               (*(long *)(lVar21 + (long)**(int **)(lVar14 + (long)*(int *)(lVar19 + 0x18) * 0x40 +
                                                   0x28) * 0x18) + 8);
    puVar25 = *(undefined8 **)
               (*(long *)(lVar21 + (long)**(int **)(lVar14 + (long)*(int *)(lVar19 + 0x28) * 0x40 +
                                                   0x28) * 0x18) + 8);
    fVar29 = pfVar16[1];
    fVar26 = pfVar16[2] * 0.5;
    fVar31 = fVar29 * 0.5;
    fVar32 = *pfVar16 * 0.5;
    ___sincosf_stret();
    fVar30 = fVar29;
    ___sincosf_stret();
    fVar28 = fVar30;
    ___sincosf_stret();
    uStack_150 = (int *)CONCAT44(fVar26 * fVar30 * fVar32 + fVar28 * fVar29 * fVar31,
                                 -(fVar29 * fVar31 * fVar32) + fVar28 * fVar26 * fVar30);
    uStack_148 = (int *)CONCAT44(fVar26 * fVar31 * fVar32 + fVar28 * fVar29 * fVar30,
                                 -(fVar26 * fVar31 * fVar28) + fVar32 * fVar29 * fVar30);
    uStack_a8 = *puVar25;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)(puVar25 + 1));
    FUN_1096bb950(&uStack_110,&uStack_150,&uStack_a8);
    FUN_1096baa30(&ppuStack_120);
  }
  else {
    lVar19 = *(long *)(lVar21 + 0x40);
    if (*(ushort *)(lVar21 + 8) < 5) goto LAB_1096df690;
    lVar14 = *(long *)(*(long *)(puVar23[1] + 8) + 8);
    lVar21 = *(long *)(puVar23[1] + 0x28);
    puVar17 = *(undefined4 **)
               (*(long *)(lVar21 + (long)**(int **)(lVar14 + (long)*(int *)(lVar19 + 0x28) * 0x40 +
                                                   0x28) * 0x18) + 8);
    uStack_108._4_4_ = *puVar17;
    uStack_f8._4_4_ = puVar17[1];
    uStack_e4 = puVar17[2];
    uStack_f0._0_4_ = 0;
    uStack_f8._0_4_ = 0;
    uStack_100._0_4_ = 0;
    uStack_110._4_4_ = 0;
    uStack_108._0_4_ = 0;
    uStack_f0._4_4_ = 0;
    uStack_e8 = 0x3f800000;
    uStack_110._0_4_ = 0x3f800000;
    uStack_100._4_4_ = 0x3f800000;
    FUN_1096e103c(&uStack_110,
                  *(undefined8 *)
                   (*(long *)(lVar21 + (long)**(int **)(lVar14 + (long)*(int *)(lVar19 + 0x18) *
                                                                 0x40 + 0x28) * 0x18) + 8));
    FUN_1096baa30(&ppuStack_120);
  }
  *(ulong *)(lStack_118 + 0x38) = CONCAT44(uStack_108._4_4_,(int)uStack_108);
  *(ulong *)(lStack_118 + 0x30) = CONCAT44(uStack_110._4_4_,(int)uStack_110);
  *(ulong *)(lStack_118 + 0x48) = CONCAT44(uStack_f8._4_4_,(int)uStack_f8);
  *(ulong *)(lStack_118 + 0x40) = CONCAT44(uStack_100._4_4_,(int)uStack_100);
  *(ulong *)(lStack_118 + 0x58) = CONCAT44(uStack_e4,uStack_e8);
  *(long **)(lStack_118 + 0x50) = uStack_f0;
  uVar12 = 3;
LAB_1096df824:
  uVar6 = *(ushort *)(*(long *)(param_1 + 8) + 8);
  uVar4 = uVar12 + 2;
  if (3 < uVar6) {
    uVar4 = uVar12;
  }
  if (uVar6 < 6) {
    FUN_1096baa30(&ppuStack_120);
    lVar21 = 0;
    do {
      uVar27 = *(undefined8 *)(lStack_118 + 0x34 + lVar21);
      *(ulong *)(lStack_118 + 0x34 + lVar21) =
           CONCAT44(-(float)((ulong)uVar27 >> 0x20),-(float)uVar27);
      lVar21 = lVar21 + 0x10;
    } while (lVar21 != 0x30);
    fVar28 = -(float)((ulong)*(undefined8 *)(lStack_118 + 0x48) >> 0x20);
    fVar30 = -(float)((ulong)*(undefined8 *)(lStack_118 + 0x58) >> 0x20);
    *(ulong *)(lStack_118 + 0x48) = CONCAT44(fVar28,-(float)*(undefined8 *)(lStack_118 + 0x48));
    *(ulong *)(lStack_118 + 0x40) =
         CONCAT44(-(float)((ulong)*(undefined8 *)(lStack_118 + 0x40) >> 0x20),
                  -(float)*(undefined8 *)(lStack_118 + 0x40));
    *(ulong *)(lStack_118 + 0x58) = CONCAT44(fVar30,-(float)*(undefined8 *)(lStack_118 + 0x58));
    *(ulong *)(lStack_118 + 0x50) =
         CONCAT44(-(float)((ulong)*(undefined8 *)(lStack_118 + 0x50) >> 0x20),
                  -(float)*(undefined8 *)(lStack_118 + 0x50));
    *(float *)(lStack_118 + 0x4c) = fVar28 + 0.0;
    *(float *)(lStack_118 + 0x5c) = fVar30 + 0.0;
  }
  uVar24 = *(ulong *)(lStack_b8 + 8);
  uVar20 = uVar24;
  _hypotf(uVar24,uVar24 >> 0x20);
  uStack_a8 = CONCAT44((float)(uVar24 >> 0x20) / (float)uVar20,(float)uVar24 / (float)uVar20);
  uStack_a0 = 0;
  FUN_1096b9e2c(&uStack_150,&uStack_a8);
  FUN_1096b985c(&uStack_110,&uStack_150,lStack_118 + 0x30);
  FUN_1096baa30(&ppuStack_120);
  *(ulong *)(lStack_118 + 0x38) = CONCAT44(uStack_108._4_4_,(int)uStack_108);
  *(ulong *)(lStack_118 + 0x30) = CONCAT44(uStack_110._4_4_,(int)uStack_110);
  *(ulong *)(lStack_118 + 0x48) = CONCAT44(uStack_f8._4_4_,(int)uStack_f8);
  *(ulong *)(lStack_118 + 0x40) = CONCAT44(uStack_100._4_4_,(int)uStack_100);
  *(ulong *)(lStack_118 + 0x58) = CONCAT44(uStack_e4,uStack_e8);
  *(long **)(lStack_118 + 0x50) = uStack_f0;
  if (param_3[1] != lStack_118) {
    func_0x000107c2acd4(param_3);
    param_3[1] = lStack_118;
    *param_3 = ppuStack_120;
    if (param_3[1] != 0) {
      piVar13 = (int *)(param_3[1] + -8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar8) {
          *piVar13 = *piVar13 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  if (bVar1) {
    plVar11 = *(long **)(param_4 + 0x18);
    FUN_1096dfbe0(plVar11,*(undefined8 *)(param_1 + 8));
    lVar21 = plVar11[1];
    if (*plVar11 != lVar21) {
      uVar20 = (ulong)uVar4 << 4 | 8;
      lVar19 = *plVar11 + 0x10;
      do {
        puVar25 = *(undefined8 **)
                   (*(long *)(puVar23[1] + 0x28) +
                   (long)**(int **)(*(long *)(*(long *)(puVar23[1] + 8) + 8) +
                                    (long)*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x40) + uVar20
                                                  ) * 0x40 + 0x28) * 0x18);
        uVar27 = *puVar25;
        *(undefined8 *)(lVar19 + -8) = puVar25[1];
        *(undefined8 *)(lVar19 + -0x10) = uVar27;
        if ((undefined8 *)(lVar19 + -0x10) != puVar25) {
          FUN_10928555c(lVar19,puVar25[2],puVar25[3],(long)(puVar25[3] - puVar25[2]) >> 2);
        }
        FUN_1096822fc(lVar19 + 0x18,puVar25 + 5);
        lVar14 = lVar19 + 0x28;
        uVar20 = uVar20 + 0x10;
        lVar19 = lVar19 + 0x38;
      } while (lVar14 != lVar21);
    }
  }
  ppuStack_120 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_120);
  do {
    bVar5 = *pbVar3;
    cVar7 = '\x01';
    bVar1 = (bool)ExclusiveMonitorPass(pbVar3,0x10);
    if (bVar1) {
      *pbVar3 = 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while ((cVar7 != '\0') || ((bVar5 & 1) != 0));
  if (*(long *)(lVar18 + 0x68) != 0) {
    plVar10 = (long *)(*(long *)(lVar18 + 0x68) + 0x10);
  }
  *plVar10 = (long)puVar23;
  *(undefined8 **)(lVar18 + 0x68) = puVar23;
  *(undefined1 *)(lVar18 + 0x58) = 0;
  uStack_110 = &lStack_d8;
  FUN_109682a18(&uStack_110);
  ppuStack_c0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_c0);
  return;
}



/* Entry: 1096dfbe0; end: 1096dfd53;  */

/* WARNING: Removing unreachable block (ram,0x0001096dfcc4) */
/* WARNING: Removing unreachable block (ram,0x0001096dfcc8) */
/* WARNING: Removing unreachable block (ram,0x0001096dfcd0) */
/* WARNING: Removing unreachable block (ram,0x0001096dfcd8) */
/* WARNING: Removing unreachable block (ram,0x0001096dfcdc) */

long * FUN_1096dfbe0(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  lVar5 = param_1 + 0x28;
  uStack_28 = param_2;
  FUN_1096bd5b4(lVar5,&uStack_28);
  if (lVar5 == 0) {
    plVar6 = (long *)0x30;
    __Znwm();
    plVar4 = plVar6 + 1;
    *plVar4 = 0;
    plStack_48 = plVar6 + 3;
    *plStack_48 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b09ac8;
    plVar6[4] = 0;
    plVar6[5] = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_50 = uStack_28;
    plStack_40 = plVar6;
    plStack_38 = plStack_48;
    plStack_30 = plVar6;
    FUN_1096bd704(param_1 + 0x28,&uStack_50,&uStack_50);
    plVar6 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar4 = plStack_40 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar4 = plStack_30;
    plVar6 = plStack_38;
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    plVar6 = *(long **)(lVar5 + 0x18);
  }
  return plVar6;
}



/* Entry: 1096dfd54; end: 1096e01df;  */

void FUN_1096dfd54(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte bStack_41;
  
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 8,2,1);
  (**(code **)(*param_3 + 0x20))(param_3,param_2,*(long *)(param_1 + 8) + 0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x20);
  uVar7 = (ulong)(int)uVar2;
  uVar6 = uVar7;
  if (0x7f < uVar2) {
    do {
      bStack_41 = (byte)uVar6 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
      uVar7 = uVar6 >> 7;
      uVar4 = uVar6 >> 0xe;
      uVar6 = uVar7;
    } while (uVar4 != 0);
  }
  bStack_41 = (byte)uVar7;
  (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
  uVar7 = *(long *)(*(long *)(param_1 + 8) + 0x30) - *(long *)(*(long *)(param_1 + 8) + 0x28) >> 4;
  uVar6 = uVar7;
  if (0x7f < uVar7) {
    do {
      bStack_41 = (byte)uVar6 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
      uVar7 = uVar6 >> 7;
      uVar4 = uVar6 >> 0xe;
      uVar6 = uVar7;
    } while (uVar4 != 0);
  }
  bStack_41 = (byte)uVar7;
  (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
  lVar3 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar1 = *(long *)(lVar3 + 0x30);
  if (lVar5 != lVar1) {
    do {
      uVar7 = (long)*(int *)(lVar5 + 8) << 1 ^ (long)*(int *)(lVar5 + 8) >> 0x3f;
      uVar6 = uVar7;
      if (0x7f < uVar7) {
        do {
          bStack_41 = (byte)uVar6 | 0x80;
          (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
          uVar7 = uVar6 >> 7;
          uVar4 = uVar6 >> 0xe;
          uVar6 = uVar7;
        } while (uVar4 != 0);
      }
      bStack_41 = (byte)uVar7;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != lVar1);
    lVar3 = *(long *)(param_1 + 8);
  }
  uVar7 = *(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40) >> 4;
  uVar6 = uVar7;
  if (0x7f < uVar7) {
    do {
      bStack_41 = (byte)uVar6 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
      uVar7 = uVar6 >> 7;
      uVar4 = uVar6 >> 0xe;
      uVar6 = uVar7;
    } while (uVar4 != 0);
  }
  bStack_41 = (byte)uVar7;
  (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
  lVar3 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(lVar3 + 0x40);
  lVar1 = *(long *)(lVar3 + 0x48);
  if (lVar5 != lVar1) {
    do {
      uVar7 = (long)*(int *)(lVar5 + 8) << 1 ^ (long)*(int *)(lVar5 + 8) >> 0x3f;
      uVar6 = uVar7;
      if (0x7f < uVar7) {
        do {
          bStack_41 = (byte)uVar6 | 0x80;
          (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
          uVar7 = uVar6 >> 7;
          uVar4 = uVar6 >> 0xe;
          uVar6 = uVar7;
        } while (uVar4 != 0);
      }
      bStack_41 = (byte)uVar7;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != lVar1);
    lVar3 = *(long *)(param_1 + 8);
  }
  uVar7 = (ulong)(int)*(uint *)(lVar3 + 0x70);
  uVar6 = uVar7;
  if (0x7f < *(uint *)(lVar3 + 0x70)) {
    do {
      bStack_41 = (byte)uVar6 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
      uVar7 = uVar6 >> 7;
      uVar4 = uVar6 >> 0xe;
      uVar6 = uVar7;
    } while (uVar4 != 0);
  }
  bStack_41 = (byte)uVar7;
  (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
  uVar7 = (ulong)(int)*(uint *)(lVar3 + 0x74);
  uVar6 = uVar7;
  if (0x7f < *(uint *)(lVar3 + 0x74)) {
    do {
      bStack_41 = (byte)uVar6 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
      uVar7 = uVar6 >> 7;
      uVar4 = uVar6 >> 0xe;
      uVar6 = uVar7;
    } while (uVar4 != 0);
  }
  bStack_41 = (byte)uVar7;
  (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(lVar5 + 0x78);
  uVar7 = (ulong)(int)uVar2;
  uVar6 = uVar7;
  if (0x7f < uVar2) {
    do {
      bStack_41 = (byte)uVar6 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
      uVar7 = uVar6 >> 7;
      uVar4 = uVar6 >> 0xe;
      uVar6 = uVar7;
    } while (uVar4 != 0);
  }
  bStack_41 = (byte)uVar7;
  (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
  uVar2 = *(uint *)(lVar5 + 0x7c);
  uVar7 = (ulong)(int)uVar2;
  uVar6 = uVar7;
  if (0x7f < uVar2) {
    do {
      bStack_41 = (byte)uVar6 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
      uVar7 = uVar6 >> 7;
      uVar4 = uVar6 >> 0xe;
      uVar6 = uVar7;
    } while (uVar4 != 0);
  }
  bStack_41 = (byte)uVar7;
  (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
  return;
}



/* Entry: 1096e01e0; end: 1096e0abb;  */

undefined8 * FUN_1096e01e0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  code *pcVar5;
  long *plVar6;
  undefined ***pppuVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined **ppuVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  byte bStack_91;
  undefined **ppuStack_90;
  uint uStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 8,2,1);
  lVar17 = *(long *)(param_1 + 8);
  if ((int)plVar6 == 1) {
    (**(code **)(*param_3 + 0x28))(&ppuStack_90,param_3,param_2);
    pppuVar7 = &ppuStack_90;
    ___dynamic_cast(pppuVar7,&PTR_DAT_110b01d40,&PTR_DAT_110b00b58,0);
    if (pppuVar7 == (undefined ***)0x0) {
      func_0x000107c2acdc();
    }
    ppuVar21 = pppuVar7[1];
    if (ppuVar21 != (undefined **)0x0) {
      ppuVar13 = ppuVar21 + -1;
      do {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
        if (bVar11) {
          *(int *)ppuVar13 = *(int *)ppuVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppuStack_a8 = *(undefined ***)(lVar17 + 0x18);
    *(undefined ***)(lVar17 + 0x18) = ppuVar21;
    *(undefined ***)(lVar17 + 0x10) = &PTR_FUN_110b00b38;
    ppuStack_b0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_b0);
    ppuStack_90 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_90);
    lVar8 = param_3[1] + -0x20;
    func_0x0001096966c0(lVar8,uRam000000011382aa08);
    lVar17 = *(long *)(param_1 + 8);
    uVar3 = *(ushort *)(lVar17 + 8);
    if (uVar3 == 0) {
      if (lVar8 == 0) goto LAB_1096e03ac;
    }
    else {
      if (uVar3 < 3) {
        if (lVar8 == 0) {
          plVar6 = param_2;
          (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
          if ((int)plVar6 == 1) {
            uVar15 = 0;
            uVar18 = 0;
            do {
              uVar15 = ((ulong)ppuStack_b0 & 0x7f) << (uVar18 & 0x3f) | uVar15;
              if (-1 < (char)ppuStack_b0) {
                uVar12 = 0;
                if (uVar15 != 0) {
                  uVar12 = 2;
                }
                *(undefined4 *)(*(long *)(param_1 + 8) + 0x20) = uVar12;
                goto LAB_1096e03ac;
              }
              plVar6 = param_2;
              (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
              uVar18 = uVar18 + 7;
            } while ((int)plVar6 == 1);
          }
          lVar17 = *(long *)(param_1 + 8);
        }
        goto LAB_1096e0390;
      }
      if (uVar3 == 3) {
        ppuStack_b0 = (undefined **)0x0;
        ppuStack_a8 = (undefined **)0x0;
        uStack_a0 = 0;
        if ((lVar8 == 0) &&
           (plVar6 = param_2, (**(code **)(*param_2 + 0x40))(param_2,&bStack_91,1,1),
           (int)plVar6 == 1)) {
          uVar15 = 0;
          uVar18 = 0;
          do {
            uVar15 = ((ulong)bStack_91 & 0x7f) << (uVar18 & 0x3f) | uVar15;
            if (-1 < (char)bStack_91) {
              FUN_1096b7d10(&ppuStack_b0,uVar15);
              ppuVar13 = ppuStack_a8;
              ppuVar21 = ppuStack_b0;
              goto LAB_1096e093c;
            }
            plVar6 = param_2;
            (**(code **)(*param_2 + 0x40))(param_2,&bStack_91,1,1);
            uVar18 = uVar18 + 7;
          } while ((int)plVar6 == 1);
        }
        goto LAB_1096e04a4;
      }
      if ((lVar8 == 0) &&
         (plVar6 = param_2, (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1),
         (int)plVar6 == 1)) {
        uVar15 = 0;
        uVar18 = 0;
        do {
          uVar15 = ((ulong)ppuStack_b0 & 0x7f) << (uVar18 & 0x3f) | uVar15;
          if (-1 < (char)ppuStack_b0) {
            *(int *)(lVar17 + 0x20) = (int)uVar15;
            goto LAB_1096e03ac;
          }
          plVar6 = param_2;
          (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
          uVar18 = uVar18 + 7;
        } while ((int)plVar6 == 1);
      }
    }
    goto LAB_1096e0524;
  }
  uVar3 = *(ushort *)(lVar17 + 8);
  if (uVar3 == 0) {
    uVar15 = 0;
    bVar11 = false;
  }
  else {
    if (2 < uVar3) {
      if (uVar3 == 3) {
        ppuStack_b0 = (undefined **)0x0;
        ppuStack_a8 = (undefined **)0x0;
        uStack_a0 = 0;
LAB_1096e04a4:
        ppuStack_90 = (undefined **)&ppuStack_b0;
        FUN_1096b7bf0(&ppuStack_90);
      }
      goto LAB_1096e0524;
    }
LAB_1096e0390:
    uVar15 = 0;
    bVar11 = false;
    *(undefined4 *)(lVar17 + 0x20) = 0;
  }
  goto LAB_1096e052c;
LAB_1096e093c:
  if (ppuVar21 == ppuVar13) goto LAB_1096e0964;
  plVar6 = param_2;
  FUN_109697d7c(param_2,ppuVar21);
  if (((ulong)plVar6 & 1) == 0) goto LAB_1096e04a4;
  ppuVar21 = ppuVar21 + 2;
  goto LAB_1096e093c;
LAB_1096e0964:
  ppuStack_90 = (undefined **)&ppuStack_b0;
  FUN_1096b7bf0(&ppuStack_90);
LAB_1096e03ac:
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
  if ((int)plVar6 == 1) {
    uVar15 = 0;
    uVar18 = 0;
    do {
      uVar15 = ((ulong)ppuStack_b0 & 0x7f) << (uVar18 & 0x3f) | uVar15;
      if (-1 < (char)ppuStack_b0) {
        bVar11 = true;
        goto LAB_1096e052c;
      }
      plVar6 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
      uVar18 = uVar18 + 7;
    } while ((int)plVar6 == 1);
  }
LAB_1096e0524:
  uVar15 = 0;
  bVar11 = false;
LAB_1096e052c:
  if (*(short *)(*(long *)(param_1 + 8) + 8) == 3) {
    *(int *)(*(long *)(param_1 + 8) + 0x20) = (int)uVar15 + -3;
  }
  if (uVar15 != 0) {
    uVar18 = 0;
    do {
      if ((bVar11) &&
         (plVar6 = param_2, (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1),
         (int)plVar6 == 1)) {
        uVar16 = 0;
        uVar19 = 0;
        do {
          uVar16 = ((ulong)ppuStack_b0 & 0x7f) << (uVar19 & 0x3f) | uVar16;
          if (-1 < (char)ppuStack_b0) {
            uVar2 = (uint)(uVar16 >> 1) ^ -((uint)uVar16 & 1);
            lVar17 = *(long *)(param_1 + 8);
            if ((int)uVar2 < 0) {
              ppuStack_b0 = (undefined **)0x0;
              ppuStack_a8 = (undefined **)0xffffffff;
            }
            else {
              ppuStack_90 = (undefined **)(*(long *)(lVar17 + 0x18) + 8);
              uStack_88 = uVar2;
              FUN_109683f04(&ppuStack_b0,&ppuStack_90);
            }
            plVar6 = *(long **)(lVar17 + 0x30);
            if (plVar6 < *(long **)(lVar17 + 0x38)) {
              plVar6[1] = (long)ppuStack_a8;
              *plVar6 = (long)ppuStack_b0;
              plVar6 = plVar6 + 2;
            }
            else {
              lVar8 = *(long *)(lVar17 + 0x28);
              lVar20 = (long)plVar6 - lVar8;
              uVar19 = (lVar20 >> 4) + 1;
              if (uVar19 >> 0x3c != 0) {
                FUN_1096e0b24();
LAB_1096e0a74:
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1096e0a78);
                (*pcVar5)();
              }
              uVar14 = (long)*(long **)(lVar17 + 0x38) - lVar8;
              uVar16 = (long)uVar14 >> 3;
              if (uVar16 <= uVar19) {
                uVar16 = uVar19;
              }
              if (0x7fffffffffffffef < uVar14) {
                uVar16 = 0xfffffffffffffff;
              }
              if (uVar16 >> 0x3c != 0) {
                func_0x000104c4f740();
                goto LAB_1096e0a74;
              }
              lVar9 = uVar16 << 4;
              __Znwm();
              plVar1 = (long *)(lVar9 + lVar20);
              plVar1[1] = (long)ppuStack_a8;
              *plVar1 = (long)ppuStack_b0;
              plVar6 = plVar1 + 2;
              _memcpy(plVar1 + (lVar20 >> 4) * -2,lVar8,lVar20);
              *(long **)(lVar17 + 0x28) = plVar1 + (lVar20 >> 4) * -2;
              *(long **)(lVar17 + 0x30) = plVar6;
              *(ulong *)(lVar17 + 0x38) = lVar9 + uVar16 * 0x10;
              if (lVar8 != 0) {
                __ZdlPv(lVar8);
              }
            }
            *(long **)(lVar17 + 0x30) = plVar6;
            bVar11 = true;
            goto LAB_1096e05bc;
          }
          plVar6 = param_2;
          (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
          uVar19 = uVar19 + 7;
        } while ((int)plVar6 == 1);
      }
      bVar11 = false;
LAB_1096e05bc:
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar15);
  }
  if ((bVar11) &&
     (plVar6 = param_2, (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1), (int)plVar6 == 1))
  {
    uVar15 = 0;
    uVar18 = 0;
    while( true ) {
      uVar15 = ((ulong)ppuStack_b0 & 0x7f) << (uVar18 & 0x3f) | uVar15;
      if (-1 < (char)ppuStack_b0) break;
      plVar6 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
      uVar18 = uVar18 + 7;
      if ((int)plVar6 != 1) goto LAB_1096e0724;
    }
    if (uVar15 != 0) {
      uVar18 = 0;
      bVar11 = true;
LAB_1096e076c:
      do {
        if ((bVar11) &&
           (plVar6 = param_2, (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1),
           (int)plVar6 == 1)) {
          uVar16 = 0;
          uVar19 = 0;
          do {
            uVar16 = ((ulong)ppuStack_b0 & 0x7f) << (uVar19 & 0x3f) | uVar16;
            if (-1 < (char)ppuStack_b0) {
              ppuStack_b0 = (undefined **)(*(long *)(*(long *)(param_1 + 8) + 0x18) + 8);
              ppuStack_a8 = (undefined **)
                            CONCAT44(ppuStack_a8._4_4_,(uint)(uVar16 >> 1) ^ -((uint)uVar16 & 1));
              FUN_109683298(*(long *)(param_1 + 8) + 0x40,&ppuStack_b0);
              uVar18 = uVar18 + 1;
              bVar11 = true;
              if (uVar18 != uVar15) goto LAB_1096e076c;
              goto LAB_1096e082c;
            }
            plVar6 = param_2;
            (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
            uVar19 = uVar19 + 7;
          } while ((int)plVar6 == 1);
        }
        bVar11 = false;
        puVar10 = (undefined8 *)0x0;
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar15);
      goto LAB_1096e0728;
    }
LAB_1096e082c:
    lVar17 = *(long *)(param_1 + 8);
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
    if ((int)plVar6 == 1) {
      uVar15 = 0;
      uVar18 = 0;
      do {
        uVar15 = ((ulong)ppuStack_b0 & 0x7f) << (uVar18 & 0x3f) | uVar15;
        if (-1 < (char)ppuStack_b0) {
          *(int *)(lVar17 + 0x70) = (int)uVar15;
          plVar6 = param_2;
          (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
          if ((int)plVar6 == 1) {
            uVar15 = 0;
            uVar18 = 0;
            goto LAB_1096e08ec;
          }
          break;
        }
        plVar6 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
        uVar18 = uVar18 + 7;
      } while ((int)plVar6 == 1);
    }
  }
  goto LAB_1096e0724;
  while( true ) {
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
    uVar18 = uVar18 + 7;
    if ((int)plVar6 != 1) break;
LAB_1096e08ec:
    uVar15 = ((ulong)ppuStack_b0 & 0x7f) << (uVar18 & 0x3f) | uVar15;
    if (-1 < (char)ppuStack_b0) {
      *(int *)(lVar17 + 0x74) = (int)uVar15;
      lVar17 = *(long *)(param_1 + 8);
      plVar6 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
      if ((int)plVar6 == 1) {
        uVar15 = 0;
        uVar18 = 0;
        goto LAB_1096e09ac;
      }
      break;
    }
  }
  goto LAB_1096e0724;
  while( true ) {
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
    uVar18 = uVar18 + 7;
    if ((int)plVar6 != 1) break;
LAB_1096e09ac:
    uVar15 = ((ulong)ppuStack_b0 & 0x7f) << (uVar18 & 0x3f) | uVar15;
    if (-1 < (char)ppuStack_b0) {
      *(int *)(lVar17 + 0x78) = (int)uVar15;
      plVar6 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
      if ((int)plVar6 == 1) {
        uVar15 = 0;
        uVar18 = 0;
        goto LAB_1096e0a1c;
      }
      break;
    }
  }
  goto LAB_1096e0724;
  while( true ) {
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_b0,1,1);
    uVar18 = uVar18 + 7;
    if ((int)plVar6 != 1) break;
LAB_1096e0a1c:
    uVar15 = ((ulong)ppuStack_b0 & 0x7f) << (uVar18 & 0x3f) | uVar15;
    if (-1 < (char)ppuStack_b0) {
      *(int *)(lVar17 + 0x7c) = (int)uVar15;
      puVar10 = (undefined8 *)0x1;
      goto LAB_1096e0728;
    }
  }
LAB_1096e0724:
  puVar10 = (undefined8 *)0x0;
LAB_1096e0728:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    ppuStack_90 = (undefined **)&ppuStack_b0;
    FUN_1096b7bf0(&ppuStack_90);
    __Unwind_Resume();
    *puVar10 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    return puVar10;
  }
  return puVar10;
}



/* Entry: 1096e0abc; end: 1096e0aef;  */

undefined8 * FUN_1096e0abc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096e0af0; end: 1096e0b23;  */

void FUN_1096e0af0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096e0b24; end: 1096e0b37;  */

void FUN_1096e0b24(void)

{
  func_0x000104c4f6cc(&DAT_10f62a4d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096e0b38; end: 1096e0b53;  */

void FUN_1096e0b38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096e0b54; end: 1096e0b9b;  */

void FUN_1096e0b54(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096e0b9c; end: 1096e0bf3;  */

undefined8 * FUN_1096e0b9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096e0bf4; end: 1096e0c4b;  */

void FUN_1096e0bf4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b09970;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096e0c4c; end: 1096e0c97;  */

void FUN_1096e0c4c(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096decd8(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096e0c98; end: 1096e0cc7;  */

bool FUN_1096e0c98(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b09970,0);
  return param_1 != 0;
}



/* Entry: 1096e0cc8; end: 1096e0d53;  */

long FUN_1096e0cc8(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)(param_1 + 0x80) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  plVar1 = *(long **)(param_1 + 0x60);
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)plVar1[2];
    (**(code **)(*plVar1 + 8))();
    plVar1 = plVar2;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096e0d54; end: 1096e0ddf;  */

void FUN_1096e0d54(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)(param_1 + 0x80) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  plVar1 = *(long **)(param_1 + 0x60);
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)plVar1[2];
    (**(code **)(*plVar1 + 8))();
    plVar1 = plVar2;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096e0de0; end: 1096e0f1f;  */

undefined *** FUN_1096e0de0(undefined8 *param_1)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **appuStack_70 [2];
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined **appuStack_50 [5];
  long lStack_28;
  
  pppuVar4 = appuStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(**(long **)*param_1 + 8);
  FUN_1096b72bc(appuStack_50,3,1,*(undefined4 *)(lVar8 + 0x78),*(undefined4 *)(lVar8 + 0x7c));
  FUN_1096b7480(appuStack_70,appuStack_50);
  iVar5 = 0x10b01d40;
  ___dynamic_cast(appuStack_70,&PTR_DAT_110b01d40,&PTR_DAT_110b04bf8,0);
  if (pppuVar4 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  lVar10 = *(long *)((long)pppuVar4 + 8);
  if (lVar10 != 0) {
    piVar6 = (int *)(lVar10 + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_58 = *(undefined8 *)(lVar8 + 0x88);
  *(long *)(lVar8 + 0x88) = lVar10;
  *(undefined ***)(lVar8 + 0x80) = &PTR_FUN_110b04b98;
  ppuStack_60 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_60);
  appuStack_70[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_70);
  appuStack_50[0] = &PTR_FUN_110b01d60;
  pppuVar4 = appuStack_50;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(appuStack_50);
  }
  __Unwind_Resume();
  ppuVar9 = pppuVar4[1];
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar1 = ppuVar9 + 1;
    do {
      puVar7 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
    }
  }
  return pppuVar4;
}



/* Entry: 1096e0f20; end: 1096e0f77;  */

long FUN_1096e0f20(long param_1)

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



/* Entry: 1096e0f78; end: 1096e0f87;  */

void FUN_1096e0f78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b09ac8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1096e0f88; end: 1096e0fcf;  */

void FUN_1096e0f88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b09ac8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096e0fd0; end: 1096e0fd3;  */

void FUN_1096e0fd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096e0fd4; end: 1096e1007;  */

undefined8 * FUN_1096e0fd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096e1008; end: 1096e103b;  */

void FUN_1096e1008(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096e103c; end: 1096e10df;  */

void FUN_1096e103c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    lVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)((long)param_1 + lVar3 * 4) = *(undefined4 *)((long)param_2 + lVar3);
        lVar3 = lVar3 + 4;
      } while (lVar3 != 0xc);
      lVar2 = lVar2 + 1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = (undefined8 *)((long)param_1 + 4);
    } while (lVar2 != 3);
    return;
  }
  puVar1 = (undefined8 *)0x24;
  __Znam();
  if (puVar1 != param_1) {
    uVar4 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar4;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  FUN_1096e103c(param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(puVar1);
  return;
}



/* Entry: 1096e10e0; end: 1096e1173;  */

undefined8 * FUN_1096e10e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b09b60;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x28);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[1] = &PTR_FUN_110b01d60;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b09bc0;
  return param_1;
}



/* Entry: 1096e1174; end: 1096e1183;  */

void FUN_1096e1174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001096e1180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x20))();
  return;
}



/* Entry: 1096e1184; end: 1096e14e7;  */

void FUN_1096e1184(int *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined **ppuStack_80;
  long lStack_78;
  
  FUN_1096b9ea0(&ppuStack_80);
  lVar13 = *(long *)(param_3 + 8);
  FUN_1096b9f58(&ppuStack_80);
  uVar21 = *(undefined8 *)(lVar13 + 8);
  *(undefined8 *)(lStack_78 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
  *(undefined8 *)(lStack_78 + 8) = uVar21;
  iVar14 = *(int *)(*(long *)(param_1 + 2) + 0x20);
  iVar10 = (int)((ulong)(*(long *)(*(long *)(param_3 + 8) + 0x20) -
                        *(long *)(*(long *)(param_3 + 8) + 0x18)) >> 3);
  iVar12 = 0;
  if (iVar10 <= iVar14) {
    iVar14 = iVar10;
  }
  if (iVar14 != 0) {
    lVar13 = (long)iVar14;
    pbVar6 = *(byte **)(*(long *)(param_1 + 2) + 0x18);
    do {
      iVar12 = iVar12 + (uint)*pbVar6;
      lVar13 = lVar13 + -1;
      pbVar6 = pbVar6 + 1;
    } while (lVar13 != 0);
  }
  FUN_1096b9f58(&ppuStack_80);
  FUN_1096b9118(lStack_78 + 0x18,(long)iVar12);
  FUN_1096b9f58(param_3);
  lVar13 = *(long *)(*(long *)(param_3 + 8) + 0x18);
  FUN_1096b9f58(&ppuStack_80);
  puVar8 = *(undefined8 **)(lStack_78 + 0x18);
  uVar2 = (*(long *)(lStack_78 + 0x20) - (long)puVar8) * 0x20000000 & 0xffffffff00000000;
  if (uVar2 != 0) {
    lVar11 = 0;
    puVar9 = puVar8;
    do {
      lVar11 = (long)(int)lVar11;
      do {
        pcVar1 = (char *)(*(long *)(*(long *)(param_1 + 2) + 0x18) + lVar11);
        lVar11 = lVar11 + 1;
      } while (*pcVar1 != '\x01');
      puVar7 = puVar9 + 1;
      *puVar9 = *(undefined8 *)(lVar13 + -8 + lVar11 * 8);
      puVar9 = puVar7;
    } while (puVar7 != (undefined8 *)((long)puVar8 + ((long)uVar2 >> 0x1d)));
  }
  piVar5 = param_1;
  FUN_1096a7580(param_1,0x113735d80);
  iVar14 = *piVar5;
  if (0 < iVar14) {
    do {
      (**(code **)(*(long *)(*(long *)(param_1 + 2) + 8) + 0x30))
                ((long *)(*(long *)(param_1 + 2) + 8),param_2,&ppuStack_80,param_4);
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  lVar13 = *(long *)(*(long *)(param_3 + 8) + 0x18);
  lVar3 = *(long *)(*(long *)(param_3 + 8) + 0x20);
  lVar11 = *(long *)(lStack_78 + 0x18);
  lVar4 = *(long *)(lStack_78 + 0x20);
  FUN_1096b9f58(param_3);
  FUN_1096b9118(*(long *)(param_3 + 8) + 0x18,
                (long)(((int)((ulong)(lVar3 - lVar13) >> 3) - iVar12) +
                      (int)((ulong)(lVar4 - lVar11) >> 3)));
  lVar13 = *(long *)(param_3 + 8);
  fVar20 = *(float *)(lVar13 + 8);
  fVar25 = *(float *)(lVar13 + 0xc);
  fVar15 = *(float *)(lVar13 + 0x10);
  fVar16 = *(float *)(lVar13 + 0x14);
  fVar23 = *(float *)(lStack_78 + 8);
  fVar24 = *(float *)(lStack_78 + 0xc);
  fVar17 = *(float *)(lStack_78 + 0x10);
  fVar18 = *(float *)(lStack_78 + 0x14);
  FUN_1096b9f58(&ppuStack_80);
  uVar2 = (*(long *)(lStack_78 + 0x20) - (long)*(undefined8 **)(lStack_78 + 0x18)) * 0x20000000 &
          0xffffffff00000000;
  if (uVar2 != 0) {
    fVar19 = 1.0 / (fVar25 * fVar25 + fVar20 * fVar20);
    fVar20 = fVar20 * fVar19;
    fVar19 = -fVar25 * fVar19;
    uVar21 = NEON_ext(CONCAT44(fVar19,fVar20),CONCAT44(-fVar19,-fVar20),4,1);
    fVar25 = -(fVar19 * fVar24) + fVar23 * fVar20;
    fVar23 = fVar24 * fVar20 + fVar23 * fVar19;
    uVar22 = NEON_ext(CONCAT44(-fVar19,-fVar20),CONCAT44(fVar19,fVar20),4,1);
    lVar13 = (long)uVar2 >> 0x1d;
    puVar8 = *(undefined8 **)(lStack_78 + 0x18);
    do {
      fVar24 = (float)*puVar8;
      *puVar8 = CONCAT44(((float)((ulong)uVar21 >> 0x20) * fVar16 - fVar19 * fVar15) +
                         (float)((ulong)uVar22 >> 0x20) * fVar18 + fVar19 * fVar17 +
                         fVar24 * fVar23 + (float)((ulong)*puVar8 >> 0x20) * fVar25,
                         ((float)uVar21 * fVar16 - fVar20 * fVar15) +
                         (float)uVar22 * fVar18 + fVar20 * fVar17 +
                         -*(float *)((long)puVar8 + 4) * fVar23 + fVar24 * fVar25);
      lVar13 = lVar13 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar13 != 0);
  }
  FUN_1096b9f58(param_3);
  lVar13 = *(long *)(*(long *)(param_3 + 8) + 0x18);
  FUN_1096b9f58(&ppuStack_80);
  puVar8 = *(undefined8 **)(lStack_78 + 0x18);
  uVar2 = (*(long *)(lStack_78 + 0x20) - (long)puVar8) * 0x20000000 & 0xffffffff00000000;
  if (uVar2 != 0) {
    iVar12 = 0;
    puVar9 = puVar8;
    do {
      iVar14 = *(int *)(*(long *)(param_1 + 2) + 0x20);
      iVar10 = iVar12;
      if (iVar12 < iVar14) {
        lVar11 = (long)iVar14 - (long)iVar12;
        pbVar6 = (byte *)(*(long *)(*(long *)(param_1 + 2) + 0x18) + (long)iVar12);
        do {
          iVar10 = iVar12;
          if ((*pbVar6 & 1) != 0) break;
          iVar12 = iVar12 + 1;
          lVar11 = lVar11 + -1;
          pbVar6 = pbVar6 + 1;
          iVar10 = iVar14;
        } while (lVar11 != 0);
      }
      puVar7 = puVar9 + 1;
      *(undefined8 *)(lVar13 + (long)iVar10 * 8) = *puVar9;
      iVar12 = iVar10 + 1;
      puVar9 = puVar7;
    } while (puVar7 != (undefined8 *)((long)puVar8 + ((long)uVar2 >> 0x1d)));
  }
  ppuStack_80 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_80);
  return;
}



/* Entry: 1096e14e8; end: 1096e158b;  */

void FUN_1096e14e8(long param_1,long *param_2,long *param_3)

{
  undefined4 uStack_24;
  
  (**(code **)(*param_3 + 0x20))(param_3,param_2,*(long *)(param_1 + 8) + 8);
  uStack_24 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_24,4,1);
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0x20,4,1);
  (**(code **)(*param_2 + 0x48))
            (param_2,*(undefined8 *)(*(long *)(param_1 + 8) + 0x18),1,
             (long)*(int *)(*(long *)(param_1 + 8) + 0x20));
  return;
}



/* Entry: 1096e158c; end: 1096e1753;  */

undefined8 * FUN_1096e158c(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined **appuStack_70 [2];
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_1 + 8);
  (**(code **)(*param_3 + 0x28))(appuStack_70,param_3);
  FUN_1093e0930(&ppuStack_60,appuStack_70);
  uVar8 = *(undefined8 *)(lVar10 + 0x10);
  *(undefined8 *)(lVar10 + 0x10) = uStack_58;
  *(undefined ***)(lVar10 + 8) = ppuStack_60;
  ppuStack_60 = &PTR_FUN_110b01d60;
  uStack_58 = uVar8;
  func_0x000107c2acd4(&ppuStack_60);
  appuStack_70[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_70);
  lVar3 = param_3[1] + -0x20;
  uVar8 = uRam000000011382aa08;
  func_0x0001096966c0();
  iVar6 = (int)uVar8;
  lVar10 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    pppuVar7 = &ppuStack_60;
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,pppuVar7,4,1);
    iVar6 = (int)pppuVar7;
    if ((int)plVar4 == 1) {
      lVar10 = lVar10 + 0x20;
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,lVar10,4,1);
      iVar6 = (int)lVar10;
      bVar2 = (int)plVar4 == 1;
    }
    else {
      bVar2 = false;
    }
    lVar9 = *(long *)(param_1 + 8);
    lVar10 = (long)*(int *)(lVar9 + 0x20);
    __Znam();
    lVar3 = *(long *)(lVar9 + 0x18);
    *(long *)(lVar9 + 0x18) = lVar10;
    if (lVar3 != 0) {
      __ZdaPv();
    }
    if (bVar2) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
      iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x20);
      (**(code **)(*param_2 + 0x40))(param_2,uVar8,1,(long)iVar1);
      iVar6 = (int)uVar8;
      puVar5 = (undefined8 *)(ulong)(iVar1 == (int)param_2);
      goto LAB_1096e16f4;
    }
  }
  else {
    lVar3 = (long)*(int *)(lVar10 + 0x20);
    __Znam();
    lVar9 = *(long *)(lVar10 + 0x18);
    *(long *)(lVar10 + 0x18) = lVar3;
    if (lVar9 != 0) {
      __ZdaPv(lVar9);
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_1096e16f4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x000104bd46a0();
    FUN_10969664c(appuStack_70);
  }
  __Unwind_Resume();
  *puVar5 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return puVar5;
}



/* Entry: 1096e1754; end: 1096e1787;  */

undefined8 * FUN_1096e1754(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096e1788; end: 1096e17bb;  */

void FUN_1096e1788(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096e17bc; end: 1096e1803;  */

long FUN_1096e17bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096e1804; end: 1096e184b;  */

void FUN_1096e1804(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096e184c; end: 1096e186b;  */

void FUN_1096e184c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(4);
  return;
}



/* Entry: 1096e186c; end: 1096e18af;  */

bool FUN_1096e186c(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c051);
  return (int)plVar1 == 1;
}



/* Entry: 1096e18b0; end: 1096e18cf;  */

undefined8 FUN_1096e18b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096e18d0; end: 1096e1927;  */

void FUN_1096e18d0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b09b98;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096e1928; end: 1096e1973;  */

void FUN_1096e1928(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096e10e0(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096e1974; end: 1096e19a3;  */

bool FUN_1096e1974(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b09b98,0);
  return param_1 != 0;
}



/* Entry: 1096e19a4; end: 1096e1a33;  */

undefined8 * FUN_1096e19a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b09cf0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b09e18;
  return param_1;
}



/* Entry: 1096e1a34; end: 1096e1d27;  */

void FUN_1096e1a34(byte *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  byte bVar4;
  code *pcVar5;
  byte *pbVar6;
  long *plVar7;
  undefined8 ***pppuVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 ***pppuVar14;
  int iVar15;
  ulong uVar16;
  undefined8 ***pppuVar17;
  float fVar18;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  
  pbVar6 = param_1;
  FUN_10969e0b4(param_1,0x113735d88);
  if (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0) {
    bVar4 = *pbVar6;
    plVar7 = param_3;
    (**(code **)(*param_3 + 0x28))();
    if ((int)plVar7 != 0) {
      FUN_1096b9f58(param_3);
      lVar10 = param_3[1];
      lVar13 = *(long *)(lVar10 + 0x18);
      uVar11 = *(long *)(lVar10 + 0x20) - lVar13;
      iVar15 = (int)(uVar11 >> 3);
      if ((bVar4 & 1) == 0) {
        if (iVar15 < 1) {
          iVar15 = 0;
        }
        else {
          uVar16 = 0;
          iVar15 = 0;
          do {
            if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + uVar16) & 1) == 0) {
              *(undefined8 *)(lVar13 + (long)iVar15 * 8) = *(undefined8 *)(lVar13 + uVar16 * 8);
              iVar15 = iVar15 + 1;
            }
            uVar16 = uVar16 + 1;
          } while ((uVar11 >> 3 & 0x7fffffff) != uVar16);
        }
      }
      else {
        ppuStack_78 = (undefined8 ***)0x0;
        ppuStack_70 = (undefined8 ***)0x0;
        ppuStack_68 = (undefined8 ***)0x0;
        if (iVar15 < 1) {
          iVar15 = 0;
        }
        else {
          uVar16 = 0;
          iVar15 = 0;
          do {
            if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + uVar16) & 1) == 0) {
              *(undefined8 *)(lVar13 + (long)iVar15 * 8) = *(undefined8 *)(lVar13 + uVar16 * 8);
              iVar15 = iVar15 + 1;
            }
            else if (ppuStack_70 < ppuStack_68) {
              *ppuStack_70 = *(undefined8 ***)(lVar13 + uVar16 * 8);
              ppuStack_70 = ppuStack_70 + 1;
            }
            else {
              lVar10 = (long)ppuStack_70 - (long)ppuStack_78;
              uVar1 = (lVar10 >> 3) + 1;
              if (uVar1 >> 0x3d != 0) {
                FUN_1096a5d04();
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1096e1d04);
                (*pcVar5)();
              }
              uVar12 = (long)ppuStack_68 - (long)ppuStack_78 >> 2;
              if (uVar12 <= uVar1) {
                uVar12 = uVar1;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_68 - (long)ppuStack_78)) {
                uVar12 = 0x1fffffffffffffff;
              }
              pppuVar8 = &ppuStack_78;
              FUN_1096a5d18();
              puVar2 = (undefined8 *)((long)pppuVar8 + lVar10);
              pppuVar17 = (undefined8 ***)(puVar2 + 1);
              *puVar2 = *(undefined8 *)(lVar13 + uVar16 * 8);
              pppuVar14 = (undefined8 ***)((long)puVar2 - ((long)ppuStack_70 - (long)ppuStack_78));
              _memcpy(pppuVar14);
              bVar3 = (undefined8 ***)ppuStack_78 != (undefined8 ***)0x0;
              ppuStack_78 = pppuVar14;
              ppuStack_70 = pppuVar17;
              ppuStack_68 = pppuVar8 + uVar12;
              if (bVar3) {
                __ZdlPv();
                ppuStack_70 = pppuVar17;
              }
            }
            uVar16 = uVar16 + 1;
          } while ((uVar11 >> 3 & 0x7fffffff) != uVar16);
          lVar10 = param_3[1];
        }
        uVar11 = ((long)ppuStack_70 - (long)ppuStack_78) * 0x20000000 & 0xffffffff00000000;
        if (uVar11 != 0) {
          lVar13 = (long)uVar11 >> 0x1d;
          pppuVar8 = (undefined8 ***)ppuStack_78;
          do {
            fVar18 = SUB84(*pppuVar8,0);
            *pppuVar8 = (undefined8 **)
                        CONCAT44((float)((ulong)*(undefined8 *)(lVar10 + 0x10) >> 0x20) +
                                 fVar18 * *(float *)(lVar10 + 0xc) +
                                 (float)((ulong)*pppuVar8 >> 0x20) * *(float *)(lVar10 + 8),
                                 (float)*(undefined8 *)(lVar10 + 0x10) +
                                 -*(float *)((long)pppuVar8 + 4) * *(float *)(lVar10 + 0xc) +
                                 fVar18 * *(float *)(lVar10 + 8));
            lVar13 = lVar13 + -8;
            pppuVar8 = pppuVar8 + 1;
          } while (lVar13 != 0);
        }
        lVar10 = lVar10 + -0x20;
        func_0x0001096966c0(lVar10,puRam000000011382aac0);
        puVar2 = puRam000000011382aac0;
        if ((lVar10 == 0) || (*(undefined8 ****)(lVar10 + 8) == (undefined8 ***)0x0)) {
          lVar13 = param_3[1];
          puVar9 = puRam000000011382aac0;
          (**(code **)*puRam000000011382aac0)();
          lVar13 = lVar13 + -0x20;
          FUN_109696718(lVar13,puVar2);
          *(undefined8 **)(lVar13 + 8) = puVar9;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          FUN_1096d53a0(puVar9,ppuStack_78,ppuStack_70,(long)ppuStack_70 - (long)ppuStack_78 >> 3);
        }
        else if (*(undefined8 ****)(lVar10 + 8) != &ppuStack_78) {
          FUN_1096b8d6c();
        }
        if ((undefined8 ***)ppuStack_78 != (undefined8 ***)0x0) {
          ppuStack_70 = ppuStack_78;
          __ZdlPv();
        }
      }
      FUN_1096b9f58(param_3);
      FUN_1096b9118(param_3[1] + 0x18,(long)iVar15);
    }
  }
  return;
}



/* Entry: 1096e1d28; end: 1096e1dcb;  */

void FUN_1096e1d28(long param_1,long *param_2)

{
  char cStack_21;
  
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 8,4,1);
  cStack_21 = *(long *)(*(long *)(param_1 + 8) + 0x10) != 0;
  (**(code **)(*param_2 + 0x48))(param_2,&cStack_21,1,1);
  if (cStack_21 == '\x01') {
    (**(code **)(*param_2 + 0x48))
              (param_2,*(undefined8 *)(*(long *)(param_1 + 8) + 0x10),1,
               (long)*(int *)(*(long *)(param_1 + 8) + 8));
  }
  return;
}



/* Entry: 1096e1dcc; end: 1096e1ebb;  */

bool FUN_1096e1dcc(long param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cStack_31;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 8,4,1);
  if (((int)plVar2 == 1) &&
     (plVar2 = param_2, (**(code **)(*param_2 + 0x40))(param_2,&cStack_31,1,1), (int)plVar2 == 1)) {
    if (cStack_31 == '\x01') {
      lVar6 = *(long *)(param_1 + 8);
      lVar5 = (long)*(int *)(lVar6 + 8);
      lVar4 = lVar5;
      __Znam();
      lVar3 = *(long *)(lVar6 + 0x10);
      *(long *)(lVar6 + 0x10) = lVar4;
      if (lVar3 != 0) {
        __ZdaPv();
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10);
        lVar5 = (long)*(int *)(*(long *)(param_1 + 8) + 8);
      }
      (**(code **)(*param_2 + 0x40))(param_2,lVar4,1,lVar5);
      bVar1 = *(int *)(*(long *)(param_1 + 8) + 8) == (int)param_2;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1096e1ebc; end: 1096e1f0b;  */

void FUN_1096e1ebc(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096e1f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 1096e1f0c; end: 1096e1f3f;  */

undefined8 * FUN_1096e1f0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096e1f40; end: 1096e1f73;  */

void FUN_1096e1f40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096e1f74; end: 1096e1f8f;  */

void FUN_1096e1f74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096e1f90; end: 1096e1fd7;  */

void FUN_1096e1f90(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096e1fd8; end: 1096e202f;  */

undefined8 * FUN_1096e1fd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096e2030; end: 1096e2087;  */

void FUN_1096e2030(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b09d28;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096e2088; end: 1096e20d3;  */

void FUN_1096e2088(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096e19a4(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096e20d4; end: 1096e2103;  */

bool FUN_1096e20d4(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b09d28,0);
  return param_1 != 0;
}



/* Entry: 1096e2104; end: 1096e2163;  */

long FUN_1096e2104(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 1096e2164; end: 1096e21eb;  */

void FUN_1096e2164(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096e21ec; end: 1096e2243;  */

void FUN_1096e21ec(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b09d28;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096e2244; end: 1096e2257;  */

void FUN_1096e2244(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x18);
  return;
}



/* Entry: 1096e2258; end: 1096e2287;  */

void FUN_1096e2258(undefined8 param_1,long *param_2)

{
  if (*param_2 != 0) {
    param_2[1] = *param_2;
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096e2288; end: 1096e22d7;  */

void FUN_1096e2288(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x31;
  __Znam();
  lVar6 = 0x18;
  pcVar4 = (char *)(lVar3 + 1);
  do {
    bVar2 = *param_3;
    cVar5 = '0';
    cVar1 = '0';
    if (9 < (bVar2 & 0xf)) {
      cVar1 = '7';
    }
    pcVar4[-1] = cVar1 + (bVar2 & 0xf);
    if (0x9f < bVar2) {
      cVar5 = '7';
    }
    *pcVar4 = cVar5 + (bVar2 >> 4);
    lVar6 = lVar6 + -1;
    pcVar4 = pcVar4 + 2;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  *(undefined1 *)(lVar3 + 0x30) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096e22d8; end: 1096e232f;  */

void FUN_1096e22d8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b09d28;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096e2330; end: 1096e235b;  */

void FUN_1096e2330(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1096e235c; end: 1096e23ef;  */

undefined8 * FUN_1096e235c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b0a038;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x28);
  puVar1[2] = 0;
  puVar1[3] = &PTR_FUN_110b01d60;
  puVar1[4] = 0;
  *puVar1 = &PTR_FUN_110b0a160;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096e23f0; end: 1096e27b7;  */

void FUN_1096e23f0(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 8) + 8);
  lVar12 = (long)(int)uVar3;
  uVar14 = (ulong)uVar3;
  if (*(long *)(*(long *)(param_1 + 8) + 0x20) == 0) {
    lVar7 = param_3[1];
    uVar15 = *(long *)(lVar7 + 0x20) - *(long *)(lVar7 + 0x18);
    uVar14 = uVar15 >> 3;
    puStack_78 = (undefined8 *)0x0;
    puStack_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    iVar13 = uVar3 - (int)uVar14;
    if (iVar13 != 0) {
      FUN_1096a5ccc(&puStack_78,(long)iVar13);
      uVar15 = (lVar12 * 8 + ((long)(uVar15 * 0x20000000) >> 0x20) * -8) - 8U >> 2;
      if (uVar15 != 0xfffffffffffffffe) {
        uVar10 = 0;
        do {
          *(undefined4 *)((long)puStack_70 + uVar10 * 4) = 0x7fc00000;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar15 + 2);
      }
      puStack_70 = (undefined8 *)((long)puStack_70 + (long)iVar13 * 8);
      lVar7 = param_3[1];
    }
    lVar7 = lVar7 + -0x20;
    func_0x0001096966c0(lVar7,uRam000000011382aac0);
    if (lVar7 != 0) {
      lVar7 = param_3[1];
      fVar19 = *(float *)(lVar7 + 8);
      fVar21 = *(float *)(lVar7 + 0xc);
      fVar16 = *(float *)(lVar7 + 0x10);
      fVar17 = *(float *)(lVar7 + 0x14);
      plVar6 = param_3;
      FUN_1096e1ebc(param_3,0x11382aac0);
      uVar15 = plVar6[1] - *plVar6;
      if (0 < (int)(uVar15 >> 3)) {
        fVar18 = 1.0 / (fVar21 * fVar21 + fVar19 * fVar19);
        fVar19 = fVar19 * fVar18;
        fVar18 = -fVar21 * fVar18;
        uVar20 = NEON_ext(CONCAT44(fVar18,fVar19),CONCAT44(-fVar18,-fVar19),4,1);
        uVar15 = uVar15 >> 3 & 0x7fffffff;
        pfVar9 = (float *)(*plVar6 + 4);
        puVar8 = puStack_78;
        do {
          fVar21 = (float)*(undefined8 *)(pfVar9 + -1);
          *puVar8 = CONCAT44(((float)((ulong)uVar20 >> 0x20) * fVar17 - fVar18 * fVar16) +
                             fVar21 * fVar18 +
                             (float)((ulong)*(undefined8 *)(pfVar9 + -1) >> 0x20) * fVar19,
                             ((float)uVar20 * fVar17 - fVar19 * fVar16) +
                             -*pfVar9 * fVar18 + fVar21 * fVar19);
          pfVar9 = pfVar9 + 2;
          uVar15 = uVar15 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar15 != 0);
      }
    }
    FUN_1096b9f58(param_3);
    FUN_1096b9118(param_3[1] + 0x18,lVar12);
    FUN_1096b9f58(param_3);
    lVar12 = *(long *)(param_3[1] + 0x18);
    uVar15 = *(long *)(param_3[1] + 0x20) - lVar12;
    puStack_70 = puStack_78;
    if (0 < (int)(uVar15 >> 3)) {
      uVar15 = uVar15 >> 3 & 0x7fffffff;
      do {
        uVar10 = uVar15 - 1;
        uVar4 = (uint)uVar14 - 1;
        bVar5 = *(char *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + uVar10) == '\0';
        uVar3 = (uint)uVar14;
        puVar8 = puStack_78 + (iVar13 + -1);
        if (bVar5) {
          uVar3 = uVar4;
          puVar8 = (undefined8 *)(lVar12 + (long)(int)uVar4 * 8);
        }
        uVar14 = (ulong)uVar3;
        iVar1 = iVar13 + -1;
        if (bVar5) {
          iVar1 = iVar13;
        }
        *(undefined8 *)(lVar12 + uVar10 * 8) = *puVar8;
        bVar5 = 1 < uVar15;
        iVar13 = iVar1;
        uVar15 = uVar10;
      } while (bVar5);
    }
  }
  else {
    FUN_1096ba0d4(&puStack_78,param_3);
    if (puStack_70 != puStack_78) {
      FUN_1096a5c58(&lStack_90,lVar12 + 2);
      puVar8 = puStack_78;
      plVar11 = (long *)(*(long *)(param_1 + 8) + 0x18);
      plVar6 = plVar11;
      (**(code **)(*plVar11 + 0x20))(plVar11);
      (**(code **)(*plVar11 + 0x30))
                (plVar11,(ulong)plVar6 & 0xffffffff,puVar8,
                 (ulong)(lStack_88 - lStack_90) >> 3 & 0xffffffff);
      puVar8 = (undefined8 *)(lStack_90 + lVar12 * 8);
      uVar20 = *puVar8;
      uVar2 = puVar8[1];
      FUN_1096b9f58(param_3);
      lVar7 = param_3[1];
      *(undefined8 *)(lVar7 + 8) = uVar2;
      *(undefined8 *)(lVar7 + 0x10) = uVar20;
      FUN_1096b9f58(param_3);
      FUN_1096b9118(param_3[1] + 0x18,lVar12);
      lVar12 = lStack_90;
      lVar7 = param_3[1];
      fVar19 = *(float *)(lVar7 + 8);
      fVar21 = *(float *)(lVar7 + 0xc);
      fVar16 = *(float *)(lVar7 + 0x10);
      fVar17 = *(float *)(lVar7 + 0x14);
      FUN_1096b9f58(param_3);
      if (0 < (int)uVar3) {
        fVar18 = 1.0 / (fVar21 * fVar21 + fVar19 * fVar19);
        fVar19 = fVar19 * fVar18;
        fVar18 = -fVar21 * fVar18;
        uVar20 = NEON_ext(CONCAT44(fVar18,fVar19),CONCAT44(-fVar18,-fVar19),4,1);
        pfVar9 = (float *)(lVar12 + 4);
        puVar8 = *(undefined8 **)(param_3[1] + 0x18);
        do {
          fVar21 = (float)*(undefined8 *)(pfVar9 + -1);
          *puVar8 = CONCAT44(((float)((ulong)uVar20 >> 0x20) * fVar17 - fVar18 * fVar16) +
                             fVar21 * fVar18 +
                             (float)((ulong)*(undefined8 *)(pfVar9 + -1) >> 0x20) * fVar19,
                             ((float)uVar20 * fVar17 - fVar19 * fVar16) +
                             -*pfVar9 * fVar18 + fVar21 * fVar19);
          pfVar9 = pfVar9 + 2;
          uVar14 = uVar14 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar14 != 0);
      }
      puStack_70 = puStack_78;
      if (lStack_90 != 0) {
        lStack_88 = lStack_90;
        __ZdlPv();
        puStack_70 = puStack_78;
      }
    }
  }
  if (puStack_70 != (undefined8 *)0x0) {
    puStack_70 = puStack_78;
    __ZdlPv();
  }
  return;
}



/* Entry: 1096e27b8; end: 1096e2883;  */

void FUN_1096e27b8(long param_1,long *param_2,long *param_3)

{
  char cStack_31;
  
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 8,4,1);
  cStack_31 = *(long *)(*(long *)(param_1 + 8) + 0x10) != 0;
  (**(code **)(*param_2 + 0x48))(param_2,&cStack_31,1,1);
  if (cStack_31 == '\x01') {
    (**(code **)(*param_2 + 0x48))
              (param_2,*(undefined8 *)(*(long *)(param_1 + 8) + 0x10),1,
               (long)*(int *)(*(long *)(param_1 + 8) + 8));
  }
  (**(code **)(*param_3 + 0x20))(param_3,param_2,*(long *)(param_1 + 8) + 0x18);
  return;
}



/* Entry: 1096e2884; end: 1096e2a97;  */

undefined8 * FUN_1096e2884(long param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  char cStack_81;
  undefined **ppuStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 8,4,1);
  if (((int)plVar3 == 1) &&
     (plVar3 = param_2, (**(code **)(*param_2 + 0x40))(param_2,&cStack_81,1,1), (int)plVar3 == 1)) {
    lVar10 = *(long *)(param_1 + 8);
    if (cStack_81 == '\x01') {
      lVar9 = (long)*(int *)(lVar10 + 8);
      lVar7 = lVar9;
      __Znam();
      lVar4 = *(long *)(lVar10 + 0x10);
      *(long *)(lVar10 + 0x10) = lVar7;
      if (lVar4 != 0) {
        __ZdaPv();
        lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10);
        lVar9 = (long)*(int *)(*(long *)(param_1 + 8) + 8);
      }
      plVar3 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,lVar7,1,lVar9);
      lVar10 = *(long *)(param_1 + 8);
      if (*(int *)(lVar10 + 8) != (int)plVar3) goto LAB_1096e2a28;
    }
    (**(code **)(*param_3 + 0x28))(&ppuStack_80,param_3,param_2);
    ppuStack_70 = &PTR_FUN_110b01d60;
    lStack_68 = 0;
    pppuVar5 = &ppuStack_80;
    ___dynamic_cast(pppuVar5,&PTR_DAT_110b01d40,&PTR_DAT_110b036e0,0);
    if ((pppuVar5 != (undefined ***)0x0) && (lStack_78 != 0)) {
      func_0x000107c2acd4(&ppuStack_70);
      lStack_68 = lStack_78;
      ppuStack_70 = ppuStack_80;
      if (lStack_78 != 0) {
        piVar8 = (int *)(lStack_78 + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    uVar11 = *(undefined8 *)(lVar10 + 0x20);
    *(long *)(lVar10 + 0x20) = lStack_68;
    *(undefined ***)(lVar10 + 0x18) = ppuStack_70;
    ppuStack_70 = &PTR_FUN_110b01d60;
    lStack_68 = uVar11;
    func_0x000107c2acd4(&ppuStack_70);
    ppuStack_80 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_80);
    lVar10 = param_3[1] + -0x20;
    func_0x0001096966c0(lVar10,uRam000000011382aa08);
    puVar6 = (undefined8 *)(ulong)(lVar10 == 0);
  }
  else {
LAB_1096e2a28:
    puVar6 = (undefined8 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  FUN_10969664c(&ppuStack_70);
  FUN_10969664c(&ppuStack_80);
  __Unwind_Resume();
  *puVar6 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return puVar6;
}



/* Entry: 1096e2a98; end: 1096e2acb;  */

undefined8 * FUN_1096e2a98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096e2acc; end: 1096e2aff;  */

void FUN_1096e2acc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096e2b00; end: 1096e2b1b;  */

void FUN_1096e2b00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096e2b1c; end: 1096e2b63;  */

void FUN_1096e2b1c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096e2b64; end: 1096e2bbb;  */

undefined8 * FUN_1096e2b64(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096e2bbc; end: 1096e2c13;  */

void FUN_1096e2bbc(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b0a070;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096e2c14; end: 1096e2c5f;  */

void FUN_1096e2c14(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096e235c(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096e2c60; end: 1096e2c8f;  */

bool FUN_1096e2c60(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b0a070,0);
  return param_1 != 0;
}



/* Entry: 1096e2c90; end: 1096e2cd3;  */

long FUN_1096e2c90(long param_1)

{
  long lVar1;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 1096e2cd4; end: 1096e2d17;  */

void FUN_1096e2cd4(long param_1)

{
  long lVar1;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096e2d18; end: 1096e2d93;  */

undefined8 * FUN_1096e2d18(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b0a1c8;
  param_1[1] = puVar1;
  FUN_1096e2d94(param_1);
  return param_1;
}



/* Entry: 1096e2d94; end: 1096e2e9b;  */

void FUN_1096e2d94(undefined8 *param_1)

{
  undefined4 uStack_34;
  
  func_0x000107c2acd0(param_1,0xe0);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_DAT_110b00de0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1096b81dc(param_1 + 4);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  uStack_34 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_1092d1c20(param_1 + 0xd,&uStack_34,&stack0xffffffffffffffd0,1);
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_110b0a2f0;
  return;
}



/* Entry: 1096e2e9c; end: 1096e2eef;  */

void FUN_1096e2e9c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uStack_30;
  long lStack_28;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&uStack_30;
  plVar1 = (long *)(*(long *)(param_1 + 8) + 0x60);
  if (*plVar1 != -1) {
    ppuStack_20 = &puStack_18;
    uStack_30 = param_2;
    lStack_28 = param_1;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(plVar1,&ppuStack_20,FUN_1096e3e58);
  }
  return;
}



/* Entry: 1096e2ef0; end: 1096e3433;  */

void FUN_1096e2ef0(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  float afStack_b0 [4];
  undefined8 uStack_a0;
  undefined4 uStack_98;
  float afStack_90 [4];
  float afStack_80 [6];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(*(long *)(param_4 + 8) + 8);
  if ((lVar6 != 0) && (___dynamic_cast(lVar6,&PTR_DAT_110b01d40,&PTR_DAT_110b053a0,0), lVar6 != 0))
  {
    lVar21 = *(long *)(lVar6 + 8);
    FUN_1096e2e9c(param_2,lVar21 + 8);
    lVar11 = *(long *)(lVar21 + 0x10);
    uStack_e0 = 0;
    FUN_1092ef208(&puStack_c8,(long)*(int *)(lVar11 + 0x14) + (long)*(int *)(lVar11 + 0x10),
                  &uStack_e0);
    iVar23 = *(int *)(*(long *)(lVar21 + 0x10) + 0x14);
    lVar11 = (long)iVar23;
    if (0 < iVar23) {
      lVar14 = *(long *)(lVar6 + 8);
      puVar15 = (undefined4 *)
                (*(long *)(lVar14 + 0x18) +
                 (long)(int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 2) * 4
                + (long)*(int *)(*(long *)(lVar14 + 0x10) + 0x14) * -4);
      puVar16 = (undefined4 *)
                (puStack_c8 +
                lVar11 * -4 + (long)(int)((ulong)((long)puStack_c0 - (long)puStack_c8) >> 2) * 4);
      do {
        *puVar16 = *puVar15;
        lVar11 = lVar11 + -1;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      } while (lVar11 != 0);
    }
    FUN_109367d10(&uStack_e0,(long)*(int *)(*(long *)(param_2 + 8) + 0x4c) * 3);
    plVar7 = (long *)(*(long *)(lVar21 + 0x10) + 0x18);
    (**(code **)(*plVar7 + 0x38))
              (plVar7,(ulong)((long)puStack_c0 - (long)puStack_c8) >> 2 & 0xffffffff,puStack_c8,
               (ulong)(lStack_d8 - CONCAT44(uStack_dc,uStack_e0)) >> 2 & 0xffffffff,
               CONCAT44(uStack_dc,uStack_e0),*(int *)(*(long *)(param_2 + 8) + 0x48) * 3);
    FUN_1096e3434((ulong)(lStack_d8 - CONCAT44(uStack_dc,uStack_e0)) >> 2 & 0xffffffff,
                  CONCAT44(uStack_dc,uStack_e0),afStack_80);
    lVar11 = 0;
    afStack_90[2] = 1.0;
    afStack_90[0] = 1.0;
    afStack_90[1] = 1.0;
    lVar21 = *(long *)(param_2 + 8);
    do {
      pfVar8 = (float *)(lVar21 + 0xd4 + lVar11);
      fVar24 = pfVar8[-0x21] *
               ((*(float *)((long)afStack_80 + lVar11 + 0xc) - *(float *)((long)afStack_80 + lVar11)
                ) / (*pfVar8 - pfVar8[-3]) + -1.0);
      _tanhf();
      *(float *)((long)afStack_90 + lVar11) = fVar24 + 1.0;
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0xc);
    FUN_1096b9358(&ppuStack_f0);
    lVar21 = *(long *)(param_2 + 8);
    FUN_1096b9498(&ppuStack_f0);
    lVar11 = lStack_e8;
    if (*(long *)(lStack_e8 + 0x10) != *(long *)(lVar21 + 0x28)) {
      func_0x000107c2acd4(lStack_e8 + 8);
      uVar25 = *(undefined8 *)(lVar21 + 0x20);
      *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar21 + 0x28);
      *(undefined8 *)(lVar11 + 8) = uVar25;
      if (*(long *)(lVar11 + 0x10) != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0x10) + -8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar3) {
            *piVar12 = *piVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    lVar11 = *(long *)(lVar6 + 8);
    FUN_1096b9498(&ppuStack_f0);
    uVar28 = *(undefined8 *)(lVar11 + 0x48);
    uVar27 = *(undefined8 *)(lVar11 + 0x40);
    uVar26 = *(undefined8 *)(lVar11 + 0x58);
    uVar25 = *(undefined8 *)(lVar11 + 0x50);
    uVar29 = *(undefined8 *)(lVar11 + 0x30);
    *(undefined8 *)(lStack_e8 + 0x38) = *(undefined8 *)(lVar11 + 0x38);
    *(undefined8 *)(lStack_e8 + 0x30) = uVar29;
    *(undefined8 *)(lStack_e8 + 0x48) = uVar28;
    *(undefined8 *)(lStack_e8 + 0x40) = uVar27;
    *(undefined8 *)(lStack_e8 + 0x58) = uVar26;
    *(undefined8 *)(lStack_e8 + 0x50) = uVar25;
    lVar11 = *(long *)(*(long *)(lVar6 + 8) + 0x10);
    lVar21 = *(long *)(lVar11 + 0x48);
    if (lVar21 == 0) {
      iVar23 = 0;
    }
    else {
      iVar23 = (int)((ulong)(*(long *)(lVar21 + 0x10) - *(long *)(lVar21 + 8)) >> 2);
    }
    lVar21 = *(long *)(*(long *)(param_2 + 8) + 8);
    lVar14 = *(long *)(*(long *)(param_2 + 8) + 0x10);
    iVar1 = *(int *)(lVar11 + 0xc);
    FUN_1096b9498(&ppuStack_f0);
    uVar22 = (lVar14 - lVar21 >> 2) * -0x5555555555555555;
    iVar20 = (int)uVar22;
    FUN_1096b5198(lStack_e8 + 0x18,(long)(iVar1 + iVar20 + iVar23));
    FUN_1096b9498(&ppuStack_f0);
    lVar11 = *(long *)(*(long *)(lVar6 + 8) + 0x10);
    lVar21 = *(long *)(lVar11 + 0x48);
    iVar23 = 0;
    if (lVar21 != 0) {
      iVar23 = (int)((ulong)(*(long *)(lVar21 + 0x10) - *(long *)(lVar21 + 8)) >> 2);
    }
    FUN_1096bacd0(lVar6,iVar23 + *(int *)(lVar11 + 0xc),*(undefined8 *)(lStack_e8 + 0x18));
    FUN_1096b9498(&ppuStack_f0);
    if (0 < iVar20) {
      uVar13 = 0;
      lVar6 = *(long *)(lStack_e8 + 0x18);
      lVar11 = *(long *)(lStack_e8 + 0x20);
      do {
        lVar14 = *(long *)(param_2 + 8);
        lVar19 = *(long *)(lVar14 + 0x80);
        piVar12 = (int *)(*(long *)(lVar14 + 0x68) + uVar13 * 4);
        iVar23 = *piVar12;
        uVar4 = piVar12[1] - iVar23;
        lVar21 = *(long *)(lVar14 + 0x98);
        puVar17 = (undefined8 *)(*(long *)(lVar14 + 8) + uVar13 * 0xc);
        uStack_a0 = *puVar17;
        uStack_98 = *(undefined4 *)(puVar17 + 1);
        if (0 < (int)uVar4) {
          uVar18 = 0;
          puVar17 = (undefined8 *)
                    (lVar6 + (long)((int)((ulong)(lVar11 - lVar6) >> 2) * -0x55555555) * 0xc +
                     (long)iVar20 * -0xc + uVar13 * 0xc);
          do {
            lVar14 = 0;
            lVar9 = *(long *)(*(long *)(param_2 + 8) + 0xb0);
            lVar10 = (long)*(int *)(lVar19 + (long)iVar23 * 4 + uVar18 * 4);
            pfVar8 = afStack_b0;
            do {
              *pfVar8 = (*(float *)((long)&uStack_a0 + lVar14) -
                        *(float *)(lVar9 + lVar10 * 0xc + lVar14)) *
                        *(float *)((long)afStack_90 + lVar14) +
                        *(float *)(CONCAT44(uStack_dc,uStack_e0) + lVar10 * 0xc + lVar14);
              lVar14 = lVar14 + 4;
              pfVar8 = pfVar8 + 1;
            } while (lVar14 != 0xc);
            fVar24 = *(float *)(lVar21 + (long)iVar23 * 4 + uVar18 * 4);
            *puVar17 = CONCAT44(SUB84(afStack_b0._0_8_,4) * fVar24 +
                                (float)((ulong)*puVar17 >> 0x20),
                                (float)afStack_b0._0_8_ * fVar24 + (float)*puVar17);
            *(float *)(puVar17 + 1) = fVar24 * afStack_b0[2] + *(float *)(puVar17 + 1);
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar4);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != (uVar22 & 0x7fffffff));
    }
    func_0x000107c2acec(param_1);
    *param_1 = &PTR_FUN_110afd8b8;
    FUN_1096985c0(param_1[1] + 8,&ppuStack_f0);
    ppuStack_f0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_f0);
    if (CONCAT44(uStack_dc,uStack_e0) != 0) {
      lStack_d8 = CONCAT44(uStack_dc,uStack_e0);
      __ZdlPv();
    }
    if (puStack_c8 != (undefined *)0x0) {
      puStack_c0 = puStack_c8;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  puStack_c8 = &UNK_10f57d0c1;
  puStack_c0 = &UNK_10f57d0c5;
  uStack_b8 = 0x55;
  FUN_109699380(&puStack_c8);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1096e33b4);
  (*pcVar5)();
}



/* Entry: 1096e3434; end: 1096e34c7;  */

void FUN_1096e3434(uint param_1,long param_2,float *param_3)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  param_3[0] = 3.4028235e+38;
  param_3[1] = 3.4028235e+38;
  param_3[2] = 3.4028235e+38;
  param_3[3] = -3.4028235e+38;
  param_3[4] = -3.4028235e+38;
  param_3[5] = -3.4028235e+38;
  if (0 < (int)param_1) {
    uVar1 = 0;
    do {
      lVar2 = 0;
      pfVar3 = param_3;
      do {
        fVar5 = *(float *)(param_2 + lVar2);
        if (*(float *)((long)param_3 + lVar2) <= *(float *)(param_2 + lVar2)) {
          fVar5 = *(float *)((long)param_3 + lVar2);
        }
        *pfVar3 = fVar5;
        lVar2 = lVar2 + 4;
        pfVar3 = pfVar3 + 1;
      } while (lVar2 != 0xc);
      lVar2 = 0;
      pfVar3 = param_3 + 3;
      do {
        fVar4 = *(float *)((long)(param_3 + 3) + lVar2);
        fVar5 = *(float *)(param_2 + lVar2);
        if (*(float *)(param_2 + lVar2) <= fVar4) {
          fVar5 = fVar4;
        }
        *pfVar3 = fVar5;
        lVar2 = lVar2 + 4;
        pfVar3 = pfVar3 + 1;
      } while (lVar2 != 0xc);
      uVar1 = uVar1 + 3;
      param_2 = param_2 + 0xc;
    } while (uVar1 < ((ulong)param_1 & 0x7fffffff));
  }
  return;
}



/* Entry: 1096e34c8; end: 1096e37a7;  */

void FUN_1096e34c8(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uStack_49;
  undefined1 uStack_48;
  byte bStack_47;
  undefined1 uStack_46;
  byte bStack_45;
  undefined1 uStack_44;
  byte bStack_43;
  undefined1 uStack_42;
  byte bStack_41;
  
  uStack_49 = 1;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_49,1,1);
  lVar6 = *(long *)(param_1 + 8);
  uVar5 = (*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8) >> 2) * -0x5555555555555555;
  uVar4 = uVar5;
  if (0x7f < uVar5) {
    do {
      bStack_47 = (byte)uVar4 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_47,1,1);
      uVar5 = uVar4 >> 7;
      uVar3 = uVar4 >> 0xe;
      uVar4 = uVar5;
    } while (uVar3 != 0);
  }
  uStack_48 = (undefined1)uVar5;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_48,1,1);
  lVar1 = *(long *)(lVar6 + 0x10);
  for (lVar6 = *(long *)(lVar6 + 8); lVar6 != lVar1; lVar6 = lVar6 + 0xc) {
    (**(code **)(*param_2 + 0x48))(param_2,lVar6,0xc,1);
  }
  (**(code **)(*param_3 + 0x20))(param_3,param_2,*(long *)(param_1 + 8) + 0x20);
  lVar6 = *(long *)(param_1 + 8);
  uVar5 = *(long *)(lVar6 + 0x38) - *(long *)(lVar6 + 0x30) >> 4;
  uVar4 = uVar5;
  if (0x7f < uVar5) {
    do {
      bStack_45 = (byte)uVar4 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_45,1,1);
      uVar5 = uVar4 >> 7;
      uVar3 = uVar4 >> 0xe;
      uVar4 = uVar5;
    } while (uVar3 != 0);
  }
  uStack_46 = (undefined1)uVar5;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_46,1,1);
  lVar1 = *(long *)(lVar6 + 0x38);
  for (lVar6 = *(long *)(lVar6 + 0x30); lVar6 != lVar1; lVar6 = lVar6 + 0x10) {
    (**(code **)(*param_2 + 0x48))(param_2,lVar6,8,1);
    (**(code **)(*param_2 + 0x48))(param_2,lVar6 + 8,8,1);
  }
  lVar6 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(lVar6 + 0x48);
  uVar5 = (ulong)(int)uVar2;
  uVar4 = uVar5;
  if (0x7f < uVar2) {
    do {
      bStack_43 = (byte)uVar4 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_43,1,1);
      uVar5 = uVar4 >> 7;
      uVar3 = uVar4 >> 0xe;
      uVar4 = uVar5;
    } while (uVar3 != 0);
  }
  uStack_44 = (undefined1)uVar5;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_44,1,1);
  uVar2 = *(uint *)(lVar6 + 0x4c);
  uVar5 = (ulong)(int)uVar2;
  uVar4 = uVar5;
  if (0x7f < uVar2) {
    do {
      bStack_41 = (byte)uVar4 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
      uVar5 = uVar4 >> 7;
      uVar3 = uVar4 >> 0xe;
      uVar4 = uVar5;
    } while (uVar3 != 0);
  }
  uStack_42 = (undefined1)uVar5;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_42,1,1);
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0x50,4,3);
  return;
}



/* Entry: 1096e37a8; end: 1096e3b63;  */

bool FUN_1096e37a8(long param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_60;
  undefined4 uStack_58;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,&uStack_60,1,1);
  if ((int)plVar2 == 1) {
    uVar8 = 0;
    uVar6 = 0;
    do {
      uVar8 = (uStack_60 & 0x7f) << (uVar6 & 0x3f) | uVar8;
      if (-1 < (char)uStack_60) {
        lVar3 = *(long *)(param_1 + 8);
        plVar2 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,&uStack_60,1,1);
        if ((int)plVar2 == 1) {
          uVar7 = 0;
          uVar6 = 0;
          goto LAB_1096e3874;
        }
        break;
      }
      uVar6 = uVar6 + 7;
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&uStack_60,1,1);
    } while ((int)plVar2 == 1);
  }
  else {
    uVar8 = 0;
  }
  goto LAB_1096e3ac8;
  while( true ) {
    uVar6 = uVar6 + 7;
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&uStack_60,1,1);
    if ((int)plVar2 != 1) break;
LAB_1096e3874:
    uVar7 = (uStack_60 & 0x7f) << (uVar6 & 0x3f) | uVar7;
    if (-1 < (char)uStack_60) {
      FUN_1096b5198(lVar3 + 8,uVar7);
      lVar5 = *(long *)(lVar3 + 8);
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_1096e38c4;
    }
  }
  goto LAB_1096e3ac8;
LAB_1096e38c4:
  if (lVar5 == lVar3) goto LAB_1096e38f8;
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,lVar5,0xc,1);
  if ((int)plVar2 != 1) goto LAB_1096e3ac8;
  lVar5 = lVar5 + 0xc;
  goto LAB_1096e38c4;
LAB_1096e38f8:
  plVar2 = param_2;
  FUN_1096b7f8c(param_2,param_3,*(long *)(param_1 + 8) + 0x20);
  if ((int)plVar2 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&uStack_60,1,1);
    if ((int)plVar2 == 1) {
      uVar7 = 0;
      uVar6 = 0;
      do {
        uVar7 = (uStack_60 & 0x7f) << (uVar6 & 0x3f) | uVar7;
        if (-1 < (char)uStack_60) {
          FUN_1096e4c2c(lVar3 + 0x30,uVar7);
          lVar5 = *(long *)(lVar3 + 0x30);
          lVar3 = *(long *)(lVar3 + 0x38);
          goto LAB_1096e3990;
        }
        uVar6 = uVar6 + 7;
        plVar2 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,&uStack_60,1,1);
      } while ((int)plVar2 == 1);
    }
  }
  goto LAB_1096e3ac8;
LAB_1096e3990:
  if (lVar5 == lVar3) goto LAB_1096e39ec;
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,lVar5,8,1);
  if (((int)plVar2 != 1) ||
     (plVar2 = param_2, (**(code **)(*param_2 + 0x40))(param_2,lVar5 + 8,8,1), (int)plVar2 != 1))
  goto LAB_1096e3ac8;
  lVar5 = lVar5 + 0x10;
  goto LAB_1096e3990;
LAB_1096e39ec:
  lVar3 = *(long *)(param_1 + 8);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,&uStack_60,1,1);
  if ((int)plVar2 == 1) {
    uVar7 = 0;
    uVar6 = 0;
    do {
      uVar7 = (uStack_60 & 0x7f) << (uVar6 & 0x3f) | uVar7;
      if (-1 < (char)uStack_60) {
        *(int *)(lVar3 + 0x48) = (int)uVar7;
        plVar2 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,&uStack_60,1,1);
        if ((int)plVar2 == 1) {
          uVar7 = 0;
          uVar6 = 0;
          goto LAB_1096e3a8c;
        }
        break;
      }
      uVar6 = uVar6 + 7;
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&uStack_60,1,1);
    } while ((int)plVar2 == 1);
  }
  goto LAB_1096e3ac8;
  while( true ) {
    uVar6 = uVar6 + 7;
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&uStack_60,1,1);
    if ((int)plVar2 != 1) break;
LAB_1096e3a8c:
    uVar7 = (uStack_60 & 0x7f) << (uVar6 & 0x3f) | uVar7;
    if (-1 < (char)uStack_60) {
      *(int *)(lVar3 + 0x4c) = (int)uVar7;
      if (uVar8 != 0) {
        (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 0x50,4,3);
        return (int)param_2 == 3;
      }
      bVar1 = true;
      goto LAB_1096e3ad0;
    }
  }
LAB_1096e3ac8:
  bVar1 = false;
  if (uVar8 == 0) {
LAB_1096e3ad0:
    lVar3 = 0;
    uStack_60 = 0x3f0000003f800000;
    uStack_58 = 0x3f333333;
    puVar4 = (undefined4 *)(*(long *)(param_1 + 8) + 0x50);
    do {
      *puVar4 = *(undefined4 *)((long)&uStack_60 + lVar3);
      lVar3 = lVar3 + 4;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0xc);
  }
  return bVar1;
}



/* Entry: 1096e3b64; end: 1096e3b97;  */

undefined8 * FUN_1096e3b64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096e3b98; end: 1096e3bcb;  */

void FUN_1096e3b98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096e3bcc; end: 1096e3bdf;  */

void FUN_1096e3bcc(void)

{
  func_0x000104c4f6cc(&DAT_10f62a4d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096e3be0; end: 1096e3bfb;  */

void FUN_1096e3be0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096e3bfc; end: 1096e3c43;  */

void FUN_1096e3bfc(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096e3c44; end: 1096e3c9b;  */

undefined8 * FUN_1096e3c44(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096e3c9c; end: 1096e3cf3;  */

void FUN_1096e3c9c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b0a200;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096e3cf4; end: 1096e3d3f;  */

void FUN_1096e3cf4(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096e2d18(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096e3d40; end: 1096e3d6f;  */

bool FUN_1096e3d40(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b0a200,0);
  return param_1 != 0;
}



/* Entry: 1096e3d70; end: 1096e3dbf;  */

long FUN_1096e3d70(long param_1)

{
  FUN_1096e3dc0(param_1 + 8);
  return param_1;
}



/* Entry: 1096e3dc0; end: 1096e3e57;  */

long * FUN_1096e3dc0(long *param_1)

{
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  param_1[3] = (long)&PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096e3e58; end: 1096e4a1f;  */

void FUN_1096e3e58(undefined8 *param_1)

{
  float *pfVar1;
  undefined **ppuVar2;
  long lVar3;
  float *pfVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  code *pcVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  long lVar16;
  float *pfVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  float *pfVar25;
  int *piVar26;
  undefined **ppuVar27;
  long lVar28;
  ulong uVar29;
  int *piVar30;
  undefined8 *puVar31;
  long lVar32;
  ulong *puVar33;
  undefined **ppuVar34;
  undefined8 *puVar35;
  long lVar36;
  undefined **ppuVar37;
  ulong *puVar38;
  undefined **ppuVar39;
  ulong uVar40;
  ulong *puVar41;
  undefined **ppuVar42;
  undefined **ppuVar43;
  long *plVar44;
  undefined *puVar45;
  undefined *puVar46;
  float fVar47;
  undefined *puVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  float fStack_b8;
  undefined4 auStack_b4 [13];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar44 = *(long **)*param_1;
  lVar3 = plVar44[1];
  lVar32 = *(long *)(*plVar44 + 8);
  FUN_1096b8a3c(&ppuStack_f0,*(long *)(lVar3 + 8) + 0x20);
  lVar16 = *(long *)(*(long *)(lVar32 + 0x48) + 0x20);
  uVar19 = *(long *)(*(long *)(lVar32 + 0x48) + 0x28) - lVar16;
  FUN_1096e4a20((undefined8 *)(lStack_e8 + 0x20),*(undefined8 *)(lStack_e8 + 0x20),lVar16,
                lVar16 + ((long)(uVar19 * 0x40000000) >> 0x20) * 4,
                (long)(uVar19 * 0x40000000) >> 0x20);
  lVar24 = lStack_e8;
  puVar38 = *(ulong **)(*(long *)(lVar32 + 0x48) + 0x38);
  lVar13 = *(long *)(*(long *)(lVar32 + 0x48) + 0x40) - (long)puVar38;
  puVar33 = (ulong *)(lStack_e8 + 0x38);
  puVar35 = (undefined8 *)*puVar33;
  lVar16 = lVar13 * 0x20000000 >> 0x20;
  if (lVar16 < 1) {
LAB_1096e40bc:
    lVar16 = lStack_e8;
    lVar24 = *(long *)(*(long *)(*plVar44 + 8) + 0x48);
    iVar18 = 0;
    if (lVar24 != 0) {
      iVar18 = (int)((ulong)(*(long *)(lVar24 + 0x10) - *(long *)(lVar24 + 8)) >> 2);
    }
    lVar24 = *(long *)(lVar32 + 0x48);
    pfVar25 = *(float **)(*(long *)(lVar3 + 8) + 0x30);
    puVar35 = (undefined8 *)*puVar33;
    uVar7 = (iVar18 + *(int *)(*(long *)(*plVar44 + 8) + 0xc)) -
            (int)((ulong)(*(long *)(lVar24 + 0x10) - *(long *)(lVar24 + 8)) >> 2);
    if (uVar7 != 0) {
      uVar40 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3;
      puVar31 = puVar35;
      do {
        fVar49 = (float)*puVar31;
        *puVar31 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 2) >> 0x20) +
                            fVar49 * pfVar25[1] + (float)((ulong)*puVar31 >> 0x20) * *pfVar25,
                            (float)*(undefined8 *)(pfVar25 + 2) +
                            -*(float *)((long)puVar31 + 4) * pfVar25[1] + fVar49 * *pfVar25);
        uVar40 = uVar40 - 8;
        puVar31 = puVar31 + 1;
      } while (uVar40 != 0);
    }
    uVar8 = (int)((ulong)(*(long *)(lVar24 + 0x40) - *(long *)(lVar24 + 0x38)) >> 3) - uVar7;
    if (uVar8 != 0) {
      lVar13 = -(-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3);
      puVar35 = puVar35 + (int)uVar7;
      do {
        fVar49 = (float)*puVar35;
        *puVar35 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 6) >> 0x20) +
                            fVar49 * pfVar25[5] + (float)((ulong)*puVar35 >> 0x20) * pfVar25[4],
                            (float)*(undefined8 *)(pfVar25 + 6) +
                            -*(float *)((long)puVar35 + 4) * pfVar25[5] + fVar49 * pfVar25[4]);
        lVar13 = lVar13 + 8;
        puVar35 = puVar35 + 1;
      } while (lVar13 != 0);
    }
    puVar38 = *(ulong **)(lVar24 + 0x50);
    lVar13 = *(long *)(lVar24 + 0x58) - (long)puVar38;
    lVar24 = lVar13 * 0x10000000 >> 0x20;
    if (0 < lVar24) {
      ppuVar37 = (undefined **)(lStack_e8 + 0x50);
      ppuVar34 = (undefined **)*ppuVar37;
      ppuVar39 = *(undefined ***)(lStack_e8 + 0x58);
      if (*(long *)(lStack_e8 + 0x60) - (long)ppuVar39 >> 4 < lVar24) {
        uVar40 = lVar24 + ((long)ppuVar39 - (long)ppuVar34 >> 4);
        if (uVar40 >> 0x3c != 0) {
          FUN_1096b795c();
          goto LAB_1096e4994;
        }
        uVar20 = *(long *)(lStack_e8 + 0x60) - (long)ppuVar34;
        uVar29 = (long)uVar20 >> 3;
        if (uVar29 <= uVar40) {
          uVar29 = uVar40;
        }
        if (0x7fffffffffffffef < uVar20) {
          uVar29 = 0xfffffffffffffff;
        }
        ppuStack_c0 = ppuVar37;
        if (uVar29 == 0) {
          ppuVar39 = (undefined **)0x0;
        }
        else {
          ppuVar39 = ppuVar37;
          FUN_1096b7970();
        }
        ppuVar27 = ppuVar39 + uVar29 * 2;
        ppuVar2 = ppuVar39 + lVar24 * 2;
        ppuVar15 = ppuVar39;
        do {
          *ppuVar15 = (undefined *)&PTR_FUN_110b01d60;
          puVar45 = (undefined *)*puVar38;
          ppuVar15[1] = (undefined *)puVar38[1];
          *ppuVar15 = puVar45;
          if (ppuVar15[1] != (undefined *)0x0) {
            piVar26 = (int *)(ppuVar15[1] + -8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar26,0x10);
              if (bVar6) {
                *piVar26 = *piVar26 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          ppuVar11 = ppuVar15 + 2;
          *ppuVar15 = (undefined *)&PTR_FUN_110b00af0;
          puVar38 = puVar38 + 2;
          ppuVar15 = ppuVar11;
        } while (ppuVar11 != ppuVar2);
        ppuVar42 = *(undefined ***)(lVar16 + 0x58);
        ppuVar15 = ppuVar34;
        ppuVar11 = ppuVar2;
        ppuStack_e0 = ppuVar39;
        ppuStack_d8 = ppuVar39;
        ppuStack_d0 = ppuVar39;
        ppuStack_c8 = ppuVar27;
        if (ppuVar34 != ppuVar42) {
          do {
            *ppuVar11 = (undefined *)&PTR_FUN_110b01d60;
            puVar45 = *ppuVar15;
            ppuVar11[1] = ppuVar15[1];
            *ppuVar11 = puVar45;
            ppuVar15[1] = (undefined *)0x0;
            *ppuVar11 = (undefined *)&PTR_FUN_110b00af0;
            ppuVar15 = ppuVar15 + 2;
            ppuVar11 = ppuVar11 + 2;
            ppuVar43 = ppuVar34;
          } while (ppuVar15 != ppuVar42);
          do {
            ppuVar15 = ppuVar43 + 2;
            (**(code **)*ppuVar43)(ppuVar43);
            ppuVar43 = ppuVar15;
          } while (ppuVar15 != ppuVar42);
          ppuVar15 = *(undefined ***)(lVar16 + 0x58);
        }
        *(undefined ***)(lVar16 + 0x58) = ppuVar34;
        ppuVar11 = *(undefined ***)(lVar16 + 0x50);
        puVar38 = (ulong *)((long)ppuVar39 + ((long)ppuVar11 - (long)ppuVar34));
        ppuVar39 = ppuVar11;
        puVar33 = puVar38;
        if ((long)ppuVar11 - (long)ppuVar34 != 0) {
          do {
            *puVar33 = (ulong)&PTR_FUN_110b01d60;
            puVar45 = *ppuVar39;
            puVar33[1] = (ulong)ppuVar39[1];
            *puVar33 = (ulong)puVar45;
            ppuVar39[1] = (undefined *)0x0;
            *puVar33 = (ulong)&PTR_FUN_110b00af0;
            ppuVar39 = ppuVar39 + 2;
            puVar33 = puVar33 + 2;
          } while (ppuVar39 != ppuVar34);
          do {
            ppuVar39 = ppuVar11 + 2;
            (**(code **)*ppuVar11)(ppuVar11);
            ppuVar11 = ppuVar39;
          } while (ppuVar39 != ppuVar34);
          ppuVar11 = (undefined **)*ppuVar37;
        }
        *(ulong **)(lVar16 + 0x50) = puVar38;
        *(long *)(lVar16 + 0x58) = (long)ppuVar2 + ((long)ppuVar15 - (long)ppuVar34);
        ppuStack_c8 = *(undefined ***)(lVar16 + 0x60);
        *(undefined ***)(lVar16 + 0x60) = ppuVar27;
        ppuStack_e0 = ppuVar11;
        ppuStack_d8 = ppuVar11;
        ppuStack_d0 = ppuVar11;
        FUN_1096b7f3c(&ppuStack_e0);
      }
      else {
        uVar40 = lVar13 * 0x10000000 >> 0x1c & 0xfffffffffffffff0;
        puVar33 = (ulong *)((long)puVar38 + uVar40);
        uVar29 = (long)ppuVar39 - (long)ppuVar34;
        if ((long)uVar29 >> 4 < lVar24) {
          puVar21 = (ulong *)((long)puVar38 + uVar29);
          ppuVar37 = ppuVar39;
          ppuVar27 = ppuVar39;
          puVar41 = puVar21;
          if (uVar29 != uVar40) {
            do {
              *ppuVar27 = (undefined *)&PTR_FUN_110b01d60;
              puVar45 = (undefined *)*puVar41;
              ppuVar27[1] = (undefined *)puVar41[1];
              *ppuVar27 = puVar45;
              if (ppuVar27[1] != (undefined *)0x0) {
                piVar26 = (int *)(ppuVar27[1] + -8);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar26,0x10);
                  if (bVar6) {
                    *piVar26 = *piVar26 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              *ppuVar27 = (undefined *)&PTR_FUN_110b00af0;
              puVar41 = puVar41 + 2;
              ppuVar37 = ppuVar27 + 2;
              ppuVar27 = ppuVar27 + 2;
            } while (puVar41 != puVar33);
          }
          *(undefined ***)(lStack_e8 + 0x58) = ppuVar37;
          if (0 < (long)uVar29 >> 4) {
            ppuVar2 = ppuVar37;
            for (ppuVar27 = ppuVar37 + lVar24 * -2; ppuVar27 < ppuVar39; ppuVar27 = ppuVar27 + 2) {
              *ppuVar2 = (undefined *)&PTR_FUN_110b01d60;
              puVar45 = *ppuVar27;
              ppuVar2[1] = ppuVar27[1];
              *ppuVar2 = puVar45;
              ppuVar27[1] = (undefined *)0x0;
              *ppuVar2 = (undefined *)&PTR_FUN_110b00af0;
              ppuVar2 = ppuVar2 + 2;
            }
            *(undefined ***)(lStack_e8 + 0x58) = ppuVar2;
            if (ppuVar37 != ppuVar34 + lVar24 * 2) {
              lVar16 = (long)ppuVar37 - (long)(ppuVar34 + lVar24 * 2);
              do {
                ppuVar27 = ppuVar37 + -2;
                puVar33 = (ulong *)((long)ppuVar34 + lVar16 + -0x10);
                puVar46 = (undefined *)puVar33[1];
                puVar45 = (undefined *)*puVar33;
                puVar48 = *ppuVar27;
                puVar33 = (ulong *)((long)ppuVar34 + lVar16 + -0x10);
                puVar33[1] = (ulong)ppuVar37[-1];
                *puVar33 = (ulong)puVar48;
                ppuVar37[-1] = puVar46;
                *ppuVar27 = puVar45;
                lVar16 = lVar16 + -0x10;
                ppuVar37 = ppuVar27;
              } while (lVar16 != 0);
            }
            if (ppuVar39 != ppuVar34) {
              do {
                if (ppuVar34[1] != (undefined *)puVar38[1]) {
                  func_0x000107c2acd4(ppuVar34);
                  puVar45 = (undefined *)*puVar38;
                  ppuVar34[1] = (undefined *)puVar38[1];
                  *ppuVar34 = puVar45;
                  if (ppuVar34[1] != (undefined *)0x0) {
                    piVar26 = (int *)(ppuVar34[1] + -8);
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar26,0x10);
                      if (bVar6) {
                        *piVar26 = *piVar26 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                }
                puVar38 = puVar38 + 2;
                ppuVar34 = ppuVar34 + 2;
              } while (puVar38 != puVar21);
            }
          }
        }
        else {
          ppuVar27 = ppuVar39;
          for (ppuVar37 = ppuVar39 + lVar24 * -2; ppuVar37 < ppuVar39; ppuVar37 = ppuVar37 + 2) {
            *ppuVar27 = (undefined *)&PTR_FUN_110b01d60;
            puVar45 = *ppuVar37;
            ppuVar27[1] = ppuVar37[1];
            *ppuVar27 = puVar45;
            ppuVar37[1] = (undefined *)0x0;
            *ppuVar27 = (undefined *)&PTR_FUN_110b00af0;
            ppuVar27 = ppuVar27 + 2;
          }
          *(undefined ***)(lStack_e8 + 0x58) = ppuVar27;
          if (ppuVar39 != ppuVar34 + lVar24 * 2) {
            lVar16 = (long)ppuVar39 - (long)(ppuVar34 + lVar24 * 2);
            do {
              ppuVar37 = ppuVar39 + -2;
              puVar41 = (ulong *)((long)ppuVar34 + lVar16 + -0x10);
              puVar46 = (undefined *)puVar41[1];
              puVar45 = (undefined *)*puVar41;
              puVar48 = *ppuVar37;
              puVar41 = (ulong *)((long)ppuVar34 + lVar16 + -0x10);
              puVar41[1] = (ulong)ppuVar39[-1];
              *puVar41 = (ulong)puVar48;
              ppuVar39[-1] = puVar46;
              *ppuVar37 = puVar45;
              lVar16 = lVar16 + -0x10;
              ppuVar39 = ppuVar37;
            } while (lVar16 != 0);
          }
          do {
            if (ppuVar34[1] != (undefined *)puVar38[1]) {
              func_0x000107c2acd4(ppuVar34);
              puVar45 = (undefined *)*puVar38;
              ppuVar34[1] = (undefined *)puVar38[1];
              *ppuVar34 = puVar45;
              if (ppuVar34[1] != (undefined *)0x0) {
                piVar26 = (int *)(ppuVar34[1] + -8);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar26,0x10);
                  if (bVar6) {
                    *piVar26 = *piVar26 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
            }
            puVar38 = puVar38 + 2;
            ppuVar34 = ppuVar34 + 2;
          } while (puVar38 != puVar33);
        }
      }
    }
    piVar26 = *(int **)(lStack_e8 + 0x68);
    uVar40 = *(long *)(lStack_e8 + 0x70) - (long)piVar26;
    if (0 < (int)(uVar40 >> 2)) {
      lVar16 = (long)(uVar40 * 0x40000000) >> 0x20;
      piVar30 = piVar26;
      do {
        *piVar30 = *piVar26 + (int)(uVar19 >> 2);
        lVar16 = lVar16 + -1;
        piVar26 = piVar26 + 1;
        piVar30 = piVar30 + 1;
      } while (lVar16 != 0);
    }
    FUN_1096e4a20();
    FUN_1096b8ba0(&ppuStack_108,&ppuStack_f0);
    pppuVar12 = &ppuStack_108;
    ___dynamic_cast(pppuVar12,&PTR_DAT_110b01d40,&PTR_DAT_110b04e38,0);
    if (pppuVar12 == (undefined ***)0x0) {
      func_0x000107c2acdc();
    }
    ppuVar34 = pppuVar12[1];
    if (ppuVar34 != (undefined **)0x0) {
      ppuVar39 = ppuVar34 + -1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar39,0x10);
        if (bVar6) {
          *(int *)ppuVar39 = *(int *)ppuVar39 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar16 = *(long *)(lVar3 + 8);
    ppuStack_d8 = *(undefined ***)(lVar16 + 0x28);
    *(undefined ***)(lVar16 + 0x28) = ppuVar34;
    *(undefined ***)(lVar16 + 0x20) = &PTR_FUN_110b04dd8;
    ppuStack_e0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_e0);
    ppuStack_108 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_108);
    ppuStack_108 = (undefined **)((ulong)ppuStack_108 & 0xffffffff00000000);
    FUN_1092ef208(&ppuStack_e0,
                  (long)*(int *)(*(long *)(*plVar44 + 8) + 0x14) +
                  (long)*(int *)(*(long *)(*plVar44 + 8) + 0x10),&ppuStack_108);
    func_0x00010742a308(*(long *)(lVar3 + 8) + 0xb0,(long)*(int *)(*(long *)(lVar3 + 8) + 0x4c) * 3)
    ;
    lVar16 = *(long *)(lVar3 + 8);
    plVar44 = (long *)(*(long *)(*plVar44 + 8) + 0x18);
    (**(code **)(*plVar44 + 0x38))
              (plVar44,(ulong)((long)ppuStack_d8 - (long)ppuStack_e0) >> 2 & 0xffffffff,ppuStack_e0,
               (ulong)(*(long *)(lVar16 + 0xb8) - *(long *)(lVar16 + 0xb0)) >> 2 & 0xffffffff,
               *(long *)(lVar16 + 0xb0),*(int *)(lVar16 + 0x48) * 3);
    lVar16 = *(long *)(lVar3 + 8);
    pfVar25 = *(float **)(lVar16 + 8);
    pfVar4 = *(float **)(lVar16 + 0x10);
    if (pfVar25 != pfVar4) {
      do {
        FUN_10923b3a0(*(long *)(lVar3 + 8) + 0x68,*(long *)(*(long *)(lVar3 + 8) + 0x70) + -4);
        FUN_109367d10(&ppuStack_108,(long)*(int *)(*(long *)(lVar3 + 8) + 0x4c));
        ppuVar39 = ppuStack_100;
        ppuVar34 = ppuStack_108;
        lVar16 = *(long *)(lVar3 + 8);
        uVar7 = *(uint *)(lVar16 + 0x4c);
        uVar19 = (ulong)uVar7;
        if (0 < (int)uVar7) {
          pfVar17 = (float *)(*(long *)(lVar16 + 0xb0) + 8);
          ppuVar37 = ppuStack_108;
          do {
            pfVar1 = pfVar17 + -2;
            pfVar9 = pfVar17 + -1;
            fVar49 = *pfVar17;
            fVar50 = ABS(*pfVar25 - *pfVar1);
            if (fVar50 <= 1.8446744e+19) {
              fVar51 = 1.0;
              if (fVar50 < 5.421011e-20) {
                fVar51 = 1.9342813e+25;
              }
            }
            else {
              fVar51 = 5.169879e-26;
            }
            pfVar17 = pfVar17 + 3;
            fVar50 = (*pfVar25 - *pfVar1) * fVar51;
            fVar47 = (pfVar25[1] - *pfVar9) * fVar51;
            fVar49 = (pfVar25[2] - fVar49) * fVar51;
            *(float *)ppuVar37 = SQRT(fVar47 * fVar47 + fVar50 * fVar50 + fVar49 * fVar49) / fVar51;
            uVar19 = uVar19 - 1;
            ppuVar37 = (undefined **)((long)ppuVar37 + 4);
          } while (uVar19 != 0);
        }
        fVar50 = *(float *)ppuStack_108;
        uVar19 = (ulong)((long)ppuStack_100 - (long)ppuStack_108) >> 2 & 0x7fffffff;
        fVar49 = fVar50;
        if (1 < uVar19) {
          lVar24 = uVar19 - 1;
          ppuVar37 = ppuStack_108;
          do {
            ppuVar37 = (undefined **)((long)ppuVar37 + 4);
            fVar51 = *(float *)ppuVar37;
            if (fVar49 <= *(float *)ppuVar37) {
              fVar51 = fVar49;
            }
            fVar49 = fVar51;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        if (ppuStack_108 != ppuStack_100) {
          ppuVar37 = ppuStack_108;
          do {
            fVar50 = 0.0;
            if (*(float *)ppuVar37 < fVar49 * 1.5) {
              fVar50 = -*(float *)ppuVar37;
              _expf();
            }
            ppuVar27 = (undefined **)((long)ppuVar37 + 4);
            *(float *)ppuVar37 = fVar50;
            ppuVar37 = ppuVar27;
          } while (ppuVar27 != ppuVar39);
          fVar50 = *(float *)ppuVar34;
        }
        if (1 < uVar19) {
          lVar24 = uVar19 - 1;
          ppuVar39 = ppuVar34;
          do {
            ppuVar39 = (undefined **)((long)ppuVar39 + 4);
            fVar50 = fVar50 + *(float *)ppuVar39;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        if ((int)uVar7 < 1) {
LAB_1096e48f0:
          ppuStack_100 = ppuVar34;
          __ZdlPv(ppuVar34);
        }
        else {
          lVar24 = 0;
          do {
            fVar49 = *(float *)((long)ppuStack_108 + lVar24 * 4);
            if (0.0 < fVar49) {
              fStack_b8 = fVar49 / fVar50;
              auStack_b4[0] = (undefined4)lVar24;
              *(int *)(*(long *)(lVar16 + 0x70) + -4) = *(int *)(*(long *)(lVar16 + 0x70) + -4) + 1;
              FUN_10923b3a0(lVar16 + 0x80,auStack_b4);
              FUN_1092c9a40(lVar16 + 0x98,&fStack_b8);
              lVar16 = *(long *)(lVar3 + 8);
            }
            lVar24 = lVar24 + 1;
          } while (lVar24 < *(int *)(lVar16 + 0x4c));
          ppuVar34 = ppuStack_108;
          if (ppuStack_108 != (undefined **)0x0) goto LAB_1096e48f0;
        }
        pfVar25 = pfVar25 + 3;
      } while (pfVar25 != pfVar4);
      lVar16 = *(long *)(lVar3 + 8);
    }
    FUN_1096e3434((ulong)(*(long *)(lVar16 + 0xb8) - *(long *)(lVar16 + 0xb0)) >> 2 & 0xffffffff,
                  *(long *)(lVar16 + 0xb0),lVar16 + 200);
    if (ppuStack_e0 != (undefined **)0x0) {
      ppuStack_d8 = ppuStack_e0;
      __ZdlPv();
    }
    ppuStack_f0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_f0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar31 = *(undefined8 **)(lStack_e8 + 0x40);
    uVar40 = (long)puVar31 - (long)puVar35;
    lVar28 = (long)uVar40 >> 3;
    if (lVar16 <= *(long *)(lStack_e8 + 0x48) - (long)puVar31 >> 3) {
      uVar29 = lVar13 * 0x20000000 >> 0x1d & 0xfffffffffffffff8;
      if (lVar28 < lVar16) {
        puVar14 = puVar31;
        puVar23 = puVar31;
        if (uVar40 != uVar29) {
          puVar22 = puVar31;
          do {
            *puVar22 = *(undefined8 *)(((long)puVar38 - (long)puVar35) + (long)puVar14);
            puVar14 = puVar14 + 1;
            puVar23 = puVar22 + 1;
            puVar22 = puVar22 + 1;
          } while ((undefined8 *)((long)puVar35 + uVar29) != puVar14);
        }
        *(undefined8 **)(lStack_e8 + 0x40) = puVar14;
        if (0 < lVar28) {
          puVar22 = puVar14 + -lVar16;
          for (; puVar22 < puVar31; puVar22 = puVar22 + 1) {
            *puVar14 = *puVar22;
            puVar14 = puVar14 + 1;
          }
          *(undefined8 **)(lStack_e8 + 0x40) = puVar14;
          if (puVar23 != puVar35 + lVar16) {
            _memmove(puVar35 + lVar16,puVar35);
          }
          if (puVar31 != puVar35) goto LAB_1096e40b8;
        }
      }
      else {
        puVar14 = puVar31;
        for (puVar23 = puVar31 + -lVar16; puVar23 < puVar31; puVar23 = puVar23 + 1) {
          *puVar14 = *puVar23;
          puVar14 = puVar14 + 1;
        }
        *(undefined8 **)(lStack_e8 + 0x40) = puVar14;
        uVar40 = uVar29;
        if (puVar31 != puVar35 + lVar16) {
          _memmove(puVar35 + lVar16,puVar35);
        }
LAB_1096e40b8:
        _memmove(puVar35,puVar38,uVar40);
      }
      goto LAB_1096e40bc;
    }
    uVar40 = lVar28 + lVar16;
    if (uVar40 >> 0x3d == 0) {
      uVar20 = *(long *)(lStack_e8 + 0x48) - (long)puVar35;
      uVar29 = (long)uVar20 >> 2;
      if (uVar29 <= uVar40) {
        uVar29 = uVar40;
      }
      if (0x7ffffffffffffff7 < uVar20) {
        uVar29 = 0x1fffffffffffffff;
      }
      if (uVar29 == 0) {
        puVar41 = (ulong *)0x0;
      }
      else {
        puVar41 = puVar33;
        FUN_1096a5d18();
      }
      lVar13 = lVar16 << 3;
      puVar21 = puVar41;
      do {
        *puVar21 = *puVar38;
        lVar13 = lVar13 + -8;
        puVar21 = puVar21 + 1;
        puVar38 = puVar38 + 1;
      } while (lVar13 != 0);
      _memcpy(puVar41 + lVar16,puVar35,*(long *)(lVar24 + 0x40) - (long)puVar35);
      lVar13 = *(long *)(lVar24 + 0x40);
      *(undefined8 **)(lVar24 + 0x40) = puVar35;
      lVar36 = (long)puVar41 - ((long)puVar35 - *(long *)(lVar24 + 0x38));
      _memcpy(lVar36);
      lVar28 = *(long *)(lVar24 + 0x38);
      *(long *)(lVar24 + 0x38) = lVar36;
      *(long *)(lVar24 + 0x40) = (long)(puVar41 + lVar16) + (lVar13 - (long)puVar35);
      *(ulong **)(lVar24 + 0x48) = puVar41 + uVar29;
      if (lVar28 != 0) {
        __ZdlPv();
      }
      goto LAB_1096e40bc;
    }
  }
  FUN_1096a5d04();
LAB_1096e4994:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1096e4998);
  (*pcVar10)();
}



/* Entry: 1096e4a20; end: 1096e4c2b;  */

long * FUN_1096e4a20(long *param_1,long *param_2,long *param_3,undefined4 *param_4,long param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  undefined4 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if (0 < param_5) {
    plVar5 = (long *)param_1[1];
    if (param_1[2] - (long)plVar5 >> 2 < param_5) {
      lVar15 = *param_1;
      uVar19 = param_5 + ((long)plVar5 - lVar15 >> 2);
      if (uVar19 >> 0x3e != 0) {
        FUN_10923f788();
        pcStack_48 = FUN_1096e4c2c;
        plVar5 = (long *)*param_1;
        puVar1 = (undefined8 *)param_1[1];
        lVar15 = (long)puVar1 - (long)plVar5;
        plVar4 = (long *)(lVar15 >> 4);
        if (plVar4 < param_2) {
          uVar19 = (long)param_2 - (long)plVar4;
          if ((ulong)(param_1[2] - (long)puVar1 >> 4) < uVar19) {
            plVar7 = param_1;
            plVar12 = param_2;
            puStack_50 = &stack0xfffffffffffffff0;
            if ((ulong)param_2 >> 0x3c == 0) {
              uVar16 = param_1[2] - (long)plVar5;
              plVar14 = (long *)((long)uVar16 >> 3);
              if (plVar14 <= param_2) {
                plVar14 = param_2;
              }
              if (0x7fffffffffffffef < uVar16) {
                plVar14 = (long *)0xfffffffffffffff;
              }
              if ((ulong)plVar14 >> 0x3c == 0) {
                lVar6 = (long)plVar14 << 4;
                __Znwm();
                puVar1 = (undefined8 *)(lVar6 + lVar15);
                lVar18 = (long)param_2 * 0x10 + (long)plVar4 * -0x10;
                puVar10 = puVar1;
                do {
                  puVar10[1] = 0;
                  *puVar10 = 0x3f800000;
                  lVar18 = lVar18 + -0x10;
                  puVar10 = puVar10 + 2;
                } while (lVar18 != 0);
                plVar7 = puVar1 + (long)plVar4 * -2;
                plVar4 = plVar7;
                _memcpy(plVar7,plVar5,lVar15);
                *param_1 = (long)plVar7;
                param_1[1] = (long)(puVar1 + uVar19 * 2);
                param_1[2] = lVar6 + (long)plVar14 * 0x10;
                if (plVar5 == (long *)0x0) {
                  return plVar4;
                }
                goto __ZdlPv;
              }
            }
            else {
              FUN_1096e3bcc();
            }
            iVar8 = (int)plVar12;
            func_0x000104c4f740();
            pcStack_98 = FUN_1096e4d6c;
            lVar18 = *(long *)(plVar7[2] + 8);
            plStack_b0 = plVar5;
            plStack_a8 = param_1;
            ppuStack_a0 = &puStack_50;
            if (iVar8 < (int)((ulong)(*(long *)(plVar7[2] + 0x10) - lVar18) >> 4)) {
              plVar5 = (long *)(lVar18 + (long)iVar8 * 0x10);
              if (plVar5[1] != param_3[1]) {
                plVar7 = plVar5;
                func_0x000107c2acd4(plVar5);
                lVar15 = *param_3;
                plVar5[1] = param_3[1];
                *plVar5 = lVar15;
                if (plVar5[1] != 0) {
                  piVar11 = (int *)(plVar5[1] + -8);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                    if (bVar3) {
                      *piVar11 = *piVar11 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
              }
              return plVar7;
            }
            FUN_109697f18(plVar7 + 1);
            lVar18 = plVar7[2];
            plVar4 = (long *)(lVar18 + 8);
            plVar5 = *(long **)(lVar18 + 0x10);
            if (plVar5 < *(long **)(lVar18 + 0x18)) {
              *plVar5 = (long)&PTR_FUN_110b01d60;
              lVar15 = *param_3;
              plVar5[1] = param_3[1];
              *plVar5 = lVar15;
              if (plVar5[1] != 0) {
                piVar11 = (int *)(plVar5[1] + -8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                  if (bVar3) {
                    *piVar11 = *piVar11 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              plVar5 = plVar5 + 2;
              *(long **)(lVar18 + 0x10) = plVar5;
            }
            else {
              lVar6 = (long)plVar5 - *plVar4;
              uVar19 = (lVar6 >> 4) + 1;
              plStack_c0 = param_2;
              lStack_b8 = lVar15;
              if (uVar19 >> 0x3c != 0) {
                FUN_109698528();
                func_0x000109698570(&uStack_e8);
                __Unwind_Resume(plVar4);
                plVar5 = (long *)0x1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__malloc_11034c5e8)(1);
                return plVar5;
              }
              uVar9 = (long)*(long **)(lVar18 + 0x18) - *plVar4;
              uVar16 = (long)uVar9 >> 3;
              if (uVar16 <= uVar19) {
                uVar16 = uVar19;
              }
              if (0x7fffffffffffffef < uVar9) {
                uVar16 = 0xfffffffffffffff;
              }
              plStack_c8 = plVar4;
              if (uVar16 == 0) {
                plVar5 = (long *)0x0;
              }
              else {
                plVar5 = param_3;
                FUN_10969853c();
              }
              plStack_e0 = (long *)(uVar16 + lVar6);
              lStack_d0 = uVar16 + (long)plVar5 * 0x10;
              *plStack_e0 = (long)&PTR_FUN_110b01d60;
              lVar15 = *param_3;
              plStack_e0[1] = param_3[1];
              *plStack_e0 = lVar15;
              if (plStack_e0[1] != 0) {
                piVar11 = (int *)(plStack_e0[1] + -8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                  if (bVar3) {
                    *piVar11 = *piVar11 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              plStack_d8 = plStack_e0 + 2;
              uStack_e8 = uVar16;
              FUN_109698458(plVar4,&uStack_e8);
              plVar5 = *(long **)(lVar18 + 0x10);
              func_0x000109698570(&uStack_e8);
            }
            *(long **)(lVar18 + 0x10) = plVar5;
            return plVar5 + -2;
          }
          lVar15 = (long)param_2 * 0x10 + (long)plVar4 * -0x10;
          puVar10 = puVar1;
          do {
            puVar10[1] = 0;
            *puVar10 = 0x3f800000;
            lVar15 = lVar15 + -0x10;
            puVar10 = puVar10 + 2;
          } while (lVar15 != 0);
          param_1[1] = (long)(puVar1 + uVar19 * 2);
        }
        else if (param_2 < plVar4) {
          param_1[1] = (long)(plVar5 + (long)param_2 * 2);
        }
        return param_1;
      }
      uVar9 = param_1[2] - lVar15;
      uVar16 = (long)uVar9 >> 1;
      if (uVar16 <= uVar19) {
        uVar16 = uVar19;
      }
      if (0x7ffffffffffffffb < uVar9) {
        uVar16 = 0x3fffffffffffffff;
      }
      if (uVar16 == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = param_1;
        FUN_10923f79c();
      }
      puVar17 = (undefined4 *)((long)plVar4 + ((long)param_2 - lVar15));
      lVar15 = param_5 << 2;
      puVar13 = puVar17;
      do {
        *puVar13 = (int)*param_3;
        lVar15 = lVar15 + -4;
        puVar13 = puVar13 + 1;
        param_3 = (long *)((long)param_3 + 4);
      } while (lVar15 != 0);
      _memcpy(puVar17 + param_5,param_2,param_1[1] - (long)param_2);
      lVar15 = param_1[1];
      param_1[1] = (long)param_2;
      lVar18 = (long)puVar17 - ((long)param_2 - *param_1);
      _memcpy(lVar18);
      plVar5 = (long *)*param_1;
      *param_1 = lVar18;
      param_1[1] = (long)(puVar17 + param_5) + (lVar15 - (long)param_2);
      param_1[2] = (long)plVar4 + uVar16 * 4;
      param_1 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar5);
        return plVar5;
      }
    }
    else {
      lVar15 = (long)plVar5 - (long)param_2;
      if (param_5 <= lVar15 >> 2) {
        plVar4 = (long *)((long)param_2 + param_5 * 4);
        plVar7 = plVar5;
        for (plVar12 = (long *)((long)plVar5 + param_5 * -4); plVar12 < plVar5;
            plVar12 = (long *)((long)plVar12 + 4)) {
          *(int *)plVar7 = (int)*plVar12;
          plVar7 = (long *)((long)plVar7 + 4);
        }
        param_1[1] = (long)plVar7;
        if (plVar5 != plVar4) {
          _memmove(plVar4,param_2);
        }
        lVar15 = param_5 << 2;
LAB_1096e4c00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(param_2,param_3,lVar15);
        return param_2;
      }
      plVar4 = plVar5;
      plVar7 = plVar5;
      for (puVar17 = (undefined4 *)((long)param_3 + lVar15); puVar17 != param_4;
          puVar17 = puVar17 + 1) {
        *(undefined4 *)plVar7 = *puVar17;
        plVar4 = (long *)((long)plVar4 + 4);
        plVar7 = (long *)((long)plVar7 + 4);
      }
      param_1[1] = (long)plVar4;
      if (0 < lVar15 >> 2) {
        plVar12 = (long *)((long)param_2 + param_5 * 4);
        plVar14 = (long *)((long)plVar4 + param_5 * -4);
        for (; plVar14 < plVar5; plVar14 = (long *)((long)plVar14 + 4)) {
          *(int *)plVar4 = (int)*plVar14;
          plVar4 = (long *)((long)plVar4 + 4);
        }
        param_1[1] = (long)plVar4;
        if (plVar7 != plVar12) {
          _memmove(plVar12,param_2);
          param_1 = plVar12;
        }
        if (plVar5 != param_2) goto LAB_1096e4c00;
      }
    }
  }
  return param_1;
}



/* Entry: 1096e4c2c; end: 1096e4d6b;  */

long * FUN_1096e4c2c(long *param_1,ulong param_2,long *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  ulong uStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  plVar13 = (long *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar14 = (long)puVar1 - (long)plVar13;
  uVar16 = lVar14 >> 4;
  if (uVar16 < param_2) {
    uVar17 = param_2 - uVar16;
    if ((ulong)(param_1[2] - (long)puVar1 >> 4) < uVar17) {
      plVar5 = param_1;
      uVar10 = param_2;
      if (param_2 >> 0x3c == 0) {
        uVar7 = param_1[2] - (long)plVar13;
        uVar11 = (long)uVar7 >> 3;
        if (uVar11 <= param_2) {
          uVar11 = param_2;
        }
        if (0x7fffffffffffffef < uVar7) {
          uVar11 = 0xfffffffffffffff;
        }
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          puVar1 = (undefined8 *)(lVar4 + lVar14);
          lVar12 = param_2 * 0x10 + uVar16 * -0x10;
          puVar8 = puVar1;
          do {
            puVar8[1] = 0;
            *puVar8 = 0x3f800000;
            lVar12 = lVar12 + -0x10;
            puVar8 = puVar8 + 2;
          } while (lVar12 != 0);
          plVar15 = puVar1 + uVar16 * -2;
          plVar5 = plVar15;
          _memcpy(plVar15,plVar13,lVar14);
          *param_1 = (long)plVar15;
          param_1[1] = (long)(puVar1 + uVar17 * 2);
          param_1[2] = lVar4 + uVar11 * 0x10;
          if (plVar13 == (long *)0x0) {
            return plVar5;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(plVar13);
          return plVar13;
        }
      }
      else {
        FUN_1096e3bcc();
      }
      iVar6 = (int)uVar10;
      func_0x000104c4f740();
      pcStack_58 = FUN_1096e4d6c;
      lVar12 = *(long *)(plVar5[2] + 8);
      plStack_70 = plVar13;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      if (iVar6 < (int)((ulong)(*(long *)(plVar5[2] + 0x10) - lVar12) >> 4)) {
        plVar13 = (long *)(lVar12 + (long)iVar6 * 0x10);
        if (plVar13[1] != param_3[1]) {
          plVar5 = plVar13;
          func_0x000107c2acd4(plVar13);
          lVar14 = *param_3;
          plVar13[1] = param_3[1];
          *plVar13 = lVar14;
          if (plVar13[1] != 0) {
            piVar9 = (int *)(plVar13[1] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = *piVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        return plVar5;
      }
      FUN_109697f18(plVar5 + 1);
      lVar12 = plVar5[2];
      plVar5 = (long *)(lVar12 + 8);
      plVar13 = *(long **)(lVar12 + 0x10);
      if (plVar13 < *(long **)(lVar12 + 0x18)) {
        *plVar13 = (long)&PTR_FUN_110b01d60;
        lVar14 = *param_3;
        plVar13[1] = param_3[1];
        *plVar13 = lVar14;
        if (plVar13[1] != 0) {
          piVar9 = (int *)(plVar13[1] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = *piVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar13 = plVar13 + 2;
        *(long **)(lVar12 + 0x10) = plVar13;
      }
      else {
        lVar4 = (long)plVar13 - *plVar5;
        uVar16 = (lVar4 >> 4) + 1;
        uStack_80 = param_2;
        lStack_78 = lVar14;
        if (uVar16 >> 0x3c != 0) {
          FUN_109698528();
          func_0x000109698570(&uStack_a8);
          __Unwind_Resume(plVar5);
          plVar13 = (long *)0x1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__malloc_11034c5e8)(1);
          return plVar13;
        }
        uVar10 = (long)*(long **)(lVar12 + 0x18) - *plVar5;
        uVar17 = (long)uVar10 >> 3;
        if (uVar17 <= uVar16) {
          uVar17 = uVar16;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar17 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar17 == 0) {
          plVar13 = (long *)0x0;
        }
        else {
          plVar13 = param_3;
          FUN_10969853c();
        }
        plStack_a0 = (long *)(uVar17 + lVar4);
        lStack_90 = uVar17 + (long)plVar13 * 0x10;
        *plStack_a0 = (long)&PTR_FUN_110b01d60;
        lVar14 = *param_3;
        plStack_a0[1] = param_3[1];
        *plStack_a0 = lVar14;
        if (plStack_a0[1] != 0) {
          piVar9 = (int *)(plStack_a0[1] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = *piVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plStack_98 = plStack_a0 + 2;
        uStack_a8 = uVar17;
        FUN_109698458(plVar5,&uStack_a8);
        plVar13 = *(long **)(lVar12 + 0x10);
        func_0x000109698570(&uStack_a8);
      }
      *(long **)(lVar12 + 0x10) = plVar13;
      return plVar13 + -2;
    }
    lVar14 = param_2 * 0x10 + uVar16 * -0x10;
    puVar8 = puVar1;
    do {
      puVar8[1] = 0;
      *puVar8 = 0x3f800000;
      lVar14 = lVar14 + -0x10;
      puVar8 = puVar8 + 2;
    } while (lVar14 != 0);
    param_1[1] = (long)(puVar1 + uVar17 * 2);
  }
  else if (param_2 < uVar16) {
    param_1[1] = (long)(plVar13 + param_2 * 2);
  }
  return param_1;
}



/* Entry: 1096e4d6c; end: 1096e4e0b;  */

undefined8 * FUN_1096e4d6c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar6 = *(long *)(param_1[2] + 8);
  if ((int)param_2 < (int)((ulong)(*(long *)(param_1[2] + 0x10) - lVar6) >> 4)) {
    puVar9 = (undefined8 *)(lVar6 + (long)(int)param_2 * 0x10);
    if (puVar9[1] != param_3[1]) {
      param_1 = puVar9;
      func_0x000107c2acd4(puVar9);
      uVar11 = *param_3;
      puVar9[1] = param_3[1];
      *puVar9 = uVar11;
      if (puVar9[1] != 0) {
        piVar5 = (int *)(puVar9[1] + -8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    return param_1;
  }
  FUN_109697f18(param_1 + 1,param_2,0x11382a928);
  lVar6 = param_1[2];
  plVar4 = (long *)(lVar6 + 8);
  puVar9 = *(undefined8 **)(lVar6 + 0x10);
  if (puVar9 < *(undefined8 **)(lVar6 + 0x18)) {
    *puVar9 = &PTR_FUN_110b01d60;
    uVar11 = *param_3;
    puVar9[1] = param_3[1];
    *puVar9 = uVar11;
    if (puVar9[1] != 0) {
      piVar5 = (int *)(puVar9[1] + -8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar9 = puVar9 + 2;
    *(undefined8 **)(lVar6 + 0x10) = puVar9;
  }
  else {
    lVar10 = (long)puVar9 - *plVar4;
    uVar1 = (lVar10 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_109698528();
      func_0x000109698570(&uStack_58);
      __Unwind_Resume(plVar4);
      puVar9 = (undefined8 *)0x1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__malloc_11034c5e8)(1);
      return puVar9;
    }
    uVar7 = (long)*(undefined8 **)(lVar6 + 0x18) - *plVar4;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    plStack_38 = plVar4;
    if (uVar8 == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = param_3;
      FUN_10969853c();
    }
    puStack_50 = (undefined8 *)(uVar8 + lVar10);
    lStack_40 = uVar8 + (long)puVar9 * 0x10;
    *puStack_50 = &PTR_FUN_110b01d60;
    uVar11 = *param_3;
    puStack_50[1] = param_3[1];
    *puStack_50 = uVar11;
    if (puStack_50[1] != 0) {
      piVar5 = (int *)(puStack_50[1] + -8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_48 = puStack_50 + 2;
    uStack_58 = uVar8;
    FUN_109698458(plVar4,&uStack_58);
    puVar9 = *(undefined8 **)(lVar6 + 0x10);
    func_0x000109698570(&uStack_58);
  }
  *(undefined8 **)(lVar6 + 0x10) = puVar9;
  return puVar9 + -2;
}



/* Entry: 1096e4e0c; end: 1096e4f2f;  */

undefined8 * FUN_1096e4e0c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 == 0) || (puVar2 = *(undefined8 **)(lVar1 + 8), puVar2 == (undefined8 *)0x0)) {
    param_2 = (undefined8 *)*param_2;
    lVar1 = *(long *)(param_1 + 8) + -0x20;
    puVar2 = param_2;
    (**(code **)*param_2)();
    FUN_109696718(lVar1,param_2);
    *(undefined8 **)(lVar1 + 8) = puVar2;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
  }
  return puVar2;
}



/* Entry: 1096e4f30; end: 1096e505b;  */

long * FUN_1096e4f30(long *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined ***pppuVar6;
  int *piVar7;
  undefined **ppuStack_40;
  long lStack_38;
  
  pppuVar6 = &ppuStack_40;
  lVar4 = param_1[1] + -0x20;
  func_0x0001096966c0(lVar4,uRam000000011382aac8);
  plVar5 = param_1;
  FUN_1096e4e0c(param_1,0x11382aac8);
  if (lVar4 == 0) {
    FUN_1096ae830(param_1,0x11382aa58);
    lStack_38 = param_1[1];
    if (lStack_38 != 0) {
      piVar7 = (int *)(lStack_38 + -8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_40 = &PTR_FUN_110b03dd8;
    FUN_1096e4e0c(&ppuStack_40,0x11382aac8);
    lVar4 = *plVar5;
    *plVar5 = (long)*pppuVar6;
    *pppuVar6 = (undefined **)lVar4;
    lVar4 = plVar5[1];
    plVar5[1] = (long)pppuVar6[1];
    pppuVar6[1] = (undefined **)lVar4;
    lVar4 = plVar5[2];
    plVar5[2] = (long)pppuVar6[2];
    pppuVar6[2] = (undefined **)lVar4;
    ppuStack_40 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_40);
  }
  lVar1 = plVar5[1];
  for (lVar4 = *plVar5; lVar4 != lVar1; lVar4 = lVar4 + 0x50) {
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  }
  return plVar5;
}


