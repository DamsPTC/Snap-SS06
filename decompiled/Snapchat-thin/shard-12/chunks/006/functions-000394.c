/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092e9278; end: 1092e92bf;  */

void FUN_1092e9278(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092e92c0; end: 1092e9387;  */

void FUN_1092e92c0(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  int iStack_48;
  int iStack_44;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar3 = (ulong)*(uint *)(param_2 + 4);
    if ((int)*(uint *)(param_2 + 4) < 3) {
      lVar4 = (long)*(int *)(param_2 + 0xc) * (long)*(int *)(param_2 + 8);
    }
    else {
      lVar4 = 1;
      piVar5 = *(int **)(param_2 + 0x40);
      do {
        lVar4 = lVar4 * *piVar5;
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 1;
      } while (uVar3 != 0);
    }
    if (lVar4 != 0) {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 < iVar1) {
    iStack_48 = 0;
    iStack_44 = param_3;
    if (iVar1 != 0) {
      iStack_48 = (iVar2 * param_3) / iVar1;
    }
  }
  else {
    iStack_44 = 0;
    iStack_48 = param_3;
    if (iVar2 != 0) {
      iStack_44 = (iVar1 * param_3) / iVar2;
    }
  }
  uStack_18 = 0;
  auStack_28[0] = 0x1010000;
  uStack_30 = 0;
  auStack_40[0] = 0x2010000;
  lStack_38 = param_2;
  lStack_20 = param_1;
  FUN_109b0f718(0x4008000000000000,0,auStack_28,auStack_40,&iStack_48,1);
  return;
}



/* Entry: 1092e9388; end: 1092e9d3f;  */

/* WARNING: Removing unreachable block (ram,0x0001092e9454) */
/* WARNING: Removing unreachable block (ram,0x0001092e9458) */
/* WARNING: Removing unreachable block (ram,0x0001092e9460) */
/* WARNING: Removing unreachable block (ram,0x0001092e9468) */
/* WARNING: Removing unreachable block (ram,0x0001092e946c) */
/* WARNING: Removing unreachable block (ram,0x0001092e9490) */
/* WARNING: Removing unreachable block (ram,0x0001092e9498) */
/* WARNING: Removing unreachable block (ram,0x0001092e94ac) */
/* WARNING: Removing unreachable block (ram,0x0001092e94bc) */

bool FUN_1092e9388(undefined8 param_1,long *param_2,undefined4 *param_3,undefined8 param_4,
                  long *param_5)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  bool bVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 uStack_3e8;
  int iStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  long lStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined8 uStack_384;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  long lStack_350;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  int iStack_324;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  long lStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_270;
  long lStack_268;
  undefined1 *puStack_260;
  undefined1 auStack_258 [272];
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined4 uStack_13c;
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
  long lStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
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
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  uStack_388 = 0x42ff0000;
  uStack_37c = 0;
  uStack_378 = 0;
  uStack_384 = 0;
  uStack_36c = 0;
  uStack_368 = 0;
  uStack_374 = 0;
  uStack_370 = 0;
  uStack_35c = 0;
  uStack_364 = 0;
  uStack_360 = 0;
  lStack_348 = (long)&uStack_384 + 4;
  lStack_350 = 0;
  uStack_358 = 0;
  uStack_354 = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  puStack_340 = &uStack_338;
  FUN_1092e92c0(param_4,&uStack_388,0x230);
  uStack_3e8 = 0x42ff0000;
  puStack_3a8 = (undefined8 *)&uStack_3e0;
  uStack_3dc = 0;
  uStack_3d8 = 0;
  iStack_3e4 = 0;
  uStack_3e0 = 0;
  uStack_3cc = 0;
  uStack_3c8 = 0;
  uStack_3d4 = 0;
  uStack_3d0 = 0;
  uStack_3bc = 0;
  uStack_3c4 = 0;
  uStack_3c0 = 0;
  lStack_3b0 = 0;
  uStack_3b8 = 0;
  uStack_3b4 = 0;
  uStack_398 = 0;
  uStack_390 = 0;
  puStack_3a0 = &uStack_398;
  if (&uStack_3e8 != param_3) {
    if (*(long *)(param_3 + 0xe) != 0) {
      piVar1 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lStack_3b0 = 0;
    uStack_3d0 = 0;
    uStack_3cc = 0;
    uStack_3d8 = 0;
    uStack_3d4 = 0;
    uStack_3c0 = 0;
    uStack_3bc = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    uStack_3e8 = *param_3;
    if ((int)param_3[1] < 3) {
      uStack_3e0 = (undefined4)*(undefined8 *)(param_3 + 2);
      uStack_3dc = (undefined4)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
      uStack_398 = **(undefined8 **)(param_3 + 0x12);
      uStack_390 = (*(undefined8 **)(param_3 + 0x12))[1];
      iStack_3e4 = param_3[1];
    }
    else {
      func_0x000109a84868(&uStack_3e8,param_3);
    }
    uStack_3d0 = (undefined4)*(undefined8 *)(param_3 + 6);
    uStack_3cc = (undefined4)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
    uStack_3d8 = (undefined4)*(undefined8 *)(param_3 + 4);
    uStack_3d4 = (undefined4)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
    uStack_3c0 = (undefined4)*(undefined8 *)(param_3 + 10);
    uStack_3bc = (undefined4)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
    uStack_3c8 = (undefined4)*(undefined8 *)(param_3 + 8);
    uStack_3c4 = (undefined4)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
    lStack_3b0 = *(long *)(param_3 + 0xe);
    uStack_3b8 = (undefined4)*(undefined8 *)(param_3 + 0xc);
    uStack_3b4 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
  }
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x48))();
  uVar11 = (ulong)(int)param_5[7];
  lVar10 = param_5[3];
  iVar13 = *(int *)(lVar10 + uVar11 * 0x10 + 8);
  lVar16 = (long)iVar13;
  if ((int)plVar12 == 0) {
    if ((((iVar13 != -1) && (*(int *)(lVar10 + lVar16 * 0x10) == -1)) &&
        (plVar12 = (long *)(*param_5 + (long)iVar13 * 0x18), 799 < (ulong)(plVar12[1] - *plVar12)))
       && (uVar4 = *(uint *)(lVar10 + lVar16 * 0x10 + 8), -1 < (int)uVar4)) {
      uVar11 = 0xffffffff;
      iVar13 = 0;
      do {
        uVar19 = (ulong)uVar4;
        plVar12 = (long *)(*param_5 + uVar19 * 0x18);
        iVar14 = (int)((ulong)(plVar12[1] - *plVar12) >> 3);
        iVar18 = iVar13;
        if (iVar13 <= iVar14) {
          iVar18 = iVar14;
        }
        uVar2 = uVar19;
        if (iVar14 <= iVar13) {
          uVar2 = uVar11;
        }
        uVar4 = *(uint *)(lVar10 + uVar19 * 0x10);
        uVar11 = uVar2;
        iVar13 = iVar18;
      } while (-1 < (int)uVar4);
      if (uVar2 != 0xffffffff) {
        uVar4 = *(uint *)(lVar10 + uVar2 * 0x10 + 8);
        if (-1 < (int)uVar4) {
          iVar13 = 0;
          do {
            plVar12 = (long *)(*param_5 + (ulong)uVar4 * 0x18);
            lVar10 = *plVar12;
            lVar16 = plVar12[1];
            plVar12 = param_2;
            (**(code **)(*param_2 + 0x38))();
            if ((ulong)(long)(int)plVar12 < (ulong)(lVar16 - lVar10 >> 3)) {
              plVar12 = param_2;
              (**(code **)(*param_2 + 0x40))();
              if ((int)plVar12 <= iVar13) goto LAB_1092e9690;
              iVar13 = iVar13 + 1;
            }
            uVar4 = *(uint *)(param_5[3] + (ulong)uVar4 * 0x10);
          } while (-1 < (int)uVar4);
        }
        bVar8 = true;
        goto LAB_1092e9694;
      }
    }
  }
  else if (((iVar13 != -1) && (*(int *)(lVar10 + lVar16 * 0x10) == -1)) &&
          (lVar10 = *param_5, plVar12 = (long *)(lVar10 + (long)iVar13 * 0x18),
          799 < (ulong)(plVar12[1] - *plVar12))) {
    uVar19 = 0;
    uVar21 = 0x7fffffff7fffffff;
    uVar23 = 0x8000000080000000;
    while( true ) {
      plVar12 = (long *)(lVar10 + (long)(int)uVar11 * 0x18);
      uStack_2a8 = (long *)0x0;
      plStack_2a0 = (long *)0x0;
      uStack_298 = 0;
      lVar10 = *plVar12;
      lVar3 = plVar12[1];
      FUN_1092c9014(&uStack_2a8,lVar10,lVar3,lVar3 - lVar10 >> 3);
      plVar7 = plStack_2a0;
      plVar12 = uStack_2a8;
      if (uStack_2a8 != (long *)0x0) {
        plStack_2a0 = uStack_2a8;
        __ZdlPv(uStack_2a8);
      }
      if ((ulong)((long)plVar7 - (long)plVar12 >> 3) <= uVar19) break;
      plVar12 = (long *)(*param_5 + (long)(int)param_5[7] * 0x18);
      plStack_2a0 = (long *)0x0;
      uStack_298 = 0;
      uStack_2a8 = (long *)0x0;
      lVar10 = *plVar12;
      lVar3 = plVar12[1];
      FUN_1092c9014(&uStack_2a8,lVar10,lVar3,lVar3 - lVar10 >> 3);
      uVar24 = *(undefined8 *)((long)uStack_2a8 + uVar19 * 8);
      plStack_2a0 = uStack_2a8;
      __ZdlPv();
      uVar21 = NEON_smin(uVar24,uVar21,4);
      uVar23 = NEON_smax(uVar24,uVar23,4);
      uVar19 = uVar19 + 1;
      uVar11 = (ulong)*(uint *)(param_5 + 7);
      lVar10 = *param_5;
    }
    uStack_e8 = 0x42ff0000;
    lStack_a8 = (long)&uStack_e4 + 4;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_e4 = 0;
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
    puStack_a0 = &uStack_98;
    (**(code **)(*param_2 + 0x10))(param_2,&uStack_e8,&uStack_3e8);
    uVar24 = NEON_rev64(*puStack_3a8,4);
    uStack_328 = (undefined4)uVar24;
    iStack_324 = (int)((ulong)uVar24 >> 0x20);
    FUN_109a829e8(&uStack_2a8,&uStack_328,0);
    uStack_148 = 0x42ff0000;
    lStack_108 = (long)&uStack_144 + 4;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_144 = 0;
    lStack_110 = 0;
    uStack_114 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    puStack_100 = &uStack_f8;
    (**(code **)(*uStack_2a8 + 0x18))(uStack_2a8,&uStack_2a8,&uStack_148,0xffffffff);
    puVar9 = &uStack_2a8;
    FUN_10918eb6c(puVar9);
    uStack_328 = 0x3010000;
    uStack_318 = 0;
    uStack_314 = 0;
    uStack_2b0 = 0;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,0x8104000c);
    uStack_2a8 = (long *)0x406fe00000000000;
    plStack_2a0 = (long *)0x0;
    uStack_298 = 0;
    uStack_290 = 0;
    plStack_2b8 = param_5;
    uStack_320 = &uStack_148;
    FUN_109a91d90();
    uStack_2c8 = 0;
    FUN_109af08e8(&uStack_328,&uStack_2c0,lVar16,&uStack_2a8,0xffffffff,8,puVar9,0x7fffffff,
                  &uStack_2c8);
    uStack_2a8 = (long *)CONCAT44(uStack_2a8._4_4_,0x2010000);
    plStack_2a0 = (long *)&uStack_e8;
    uStack_298 = 0;
    uStack_328 = 0x1010000;
    uStack_320 = &uStack_148;
    uStack_318 = 0;
    uStack_314 = 0;
    FUN_109a4813c(&uStack_3e8,&uStack_2a8,&uStack_328);
    plStack_2b8 = (long *)CONCAT44((int)((ulong)uVar23 >> 0x20) - (int)((ulong)uVar21 >> 0x20),
                                   (int)uVar23 - (int)uVar21);
    uStack_2c0 = uVar21;
    FUN_109a852c8(&uStack_2a8,&uStack_e8,&uStack_2c0);
    uStack_328 = 0x42ff0000;
    puStack_2e8 = &uStack_320;
    dVar20 = 0.0;
    uStack_30c = 0;
    uStack_308 = 0;
    uStack_314 = 0;
    uStack_310 = 0;
    uStack_2fc = 0;
    uStack_304 = 0;
    uStack_300 = 0;
    lStack_2f0 = 0;
    uStack_2f8 = 0;
    uStack_2f4 = 0;
    uStack_320._4_4_ = 0;
    uStack_318 = 0;
    iStack_324 = 0;
    uStack_320._0_4_ = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    plVar12 = param_2;
    puStack_2e0 = &uStack_2d8;
    (**(code **)(*param_2 + 0x20))(param_2);
    FUN_1092e92c0(&uStack_2a8,&uStack_328,plVar12);
    iVar13 = (int)uStack_320;
    iVar18 = uStack_320._4_4_;
    if ((int)uStack_320 < 1) {
      dVar22 = 0.0;
    }
    else {
      iVar14 = 0;
      iVar17 = 0;
      do {
        if (0 < iVar18) {
          iVar15 = 0;
          dVar22 = dVar20;
          do {
            (**(code **)(*param_2 + 0x18))(param_2,iVar14,iVar15,&uStack_328);
            dVar20 = dVar22;
            (**(code **)(*param_2 + 0x28))(param_2);
            if (dVar22 < dVar20) {
              iVar17 = iVar17 + 1;
            }
            iVar15 = iVar15 + 1;
            dVar22 = dVar20;
            iVar13 = (int)uStack_320;
            iVar18 = uStack_320._4_4_;
          } while (iVar15 < uStack_320._4_4_);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar13);
      dVar22 = (double)iVar17;
    }
    (**(code **)(*param_2 + 0x30))(param_2);
    bVar8 = dVar22 / (double)(iVar13 * iVar18) < dVar20;
    if (lStack_2f0 != 0) {
      piVar1 = (int *)(lStack_2f0 + 0x14);
      do {
        iVar13 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 == 0) {
        func_0x000109a848d4(&uStack_328);
      }
    }
    lStack_2f0 = 0;
    uStack_310 = 0;
    uStack_30c = 0;
    uStack_318 = 0;
    uStack_314 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    uStack_308 = 0;
    uStack_304 = 0;
    if (0 < iStack_324) {
      lVar10 = 0;
      do {
        *(undefined4 *)((long)puStack_2e8 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iStack_324);
    }
    if (puStack_2e0 != &uStack_2d8 && puStack_2e0 != (undefined8 *)0x0) {
      _free(puStack_2e0[-1]);
    }
    if (lStack_270 != 0) {
      piVar1 = (int *)(lStack_270 + 0x14);
      do {
        iVar13 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 == 0) {
        func_0x000109a848d4(&uStack_2a8);
      }
    }
    lStack_270 = 0;
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_280 = 0;
    uStack_288 = 0;
    if (0 < uStack_2a8._4_4_) {
      lVar10 = 0;
      do {
        *(undefined4 *)(lStack_268 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < uStack_2a8._4_4_);
    }
    if (puStack_260 != auStack_258 && puStack_260 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_260 + -8));
    }
    if (lStack_110 != 0) {
      piVar1 = (int *)(lStack_110 + 0x14);
      do {
        iVar13 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 == 0) {
        func_0x000109a848d4(&uStack_148);
      }
    }
    lStack_110 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    if (0 < (int)uStack_144) {
      lVar10 = 0;
      do {
        *(undefined4 *)(lStack_108 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uStack_144);
    }
    if (puStack_100 != &uStack_f8 && puStack_100 != (undefined8 *)0x0) {
      _free(puStack_100[-1]);
    }
    if (lStack_b0 != 0) {
      piVar1 = (int *)(lStack_b0 + 0x14);
      do {
        iVar13 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
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
    if (0 < (int)uStack_e4) {
      lVar10 = 0;
      do {
        *(undefined4 *)(lStack_a8 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uStack_e4);
    }
    if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
      _free(puStack_a0[-1]);
    }
    goto LAB_1092e9694;
  }
LAB_1092e9690:
  bVar8 = false;
LAB_1092e9694:
  if (lStack_3b0 != 0) {
    piVar1 = (int *)(lStack_3b0 + 0x14);
    do {
      iVar13 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      func_0x000109a848d4(&uStack_3e8);
    }
  }
  lStack_3b0 = 0;
  uStack_3d0 = 0;
  uStack_3cc = 0;
  uStack_3d8 = 0;
  uStack_3d4 = 0;
  uStack_3c0 = 0;
  uStack_3bc = 0;
  uStack_3c8 = 0;
  uStack_3c4 = 0;
  if (0 < iStack_3e4) {
    lVar10 = 0;
    do {
      *(undefined4 *)((long)puStack_3a8 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iStack_3e4);
  }
  if (puStack_3a0 != &uStack_398 && puStack_3a0 != (undefined8 *)0x0) {
    _free(puStack_3a0[-1]);
  }
  if (lStack_350 != 0) {
    piVar1 = (int *)(lStack_350 + 0x14);
    do {
      iVar13 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      func_0x000109a848d4(&uStack_388);
    }
  }
  lStack_350 = 0;
  uStack_370 = 0;
  uStack_36c = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  uStack_360 = 0;
  uStack_35c = 0;
  uStack_368 = 0;
  uStack_364 = 0;
  if (0 < (int)uStack_384) {
    lVar10 = 0;
    do {
      *(undefined4 *)(lStack_348 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)uStack_384);
  }
  if (puStack_340 != &uStack_338 && puStack_340 != (undefined8 *)0x0) {
    _free(puStack_340[-1]);
  }
  return bVar8;
}



/* Entry: 1092e9d40; end: 1092e9da3;  */

void FUN_1092e9d40(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1092e9da4; end: 1092e9fd3;  */

void FUN_1092e9da4(undefined8 param_1,ulong *param_2,undefined1 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_38;
  
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  iVar2 = *(int *)((long)param_2 + 4);
  uStack_60 = (ulong)&uStack_a0 | 8;
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_50 = 0;
  uStack_48 = 0;
  if (param_2[7] != 0) {
    piVar1 = (int *)(param_2[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)((long)param_2 + 4);
  }
  puStack_58 = &uStack_50;
  if (iVar2 < 3) {
    uStack_50 = *(undefined8 *)param_2[9];
    uStack_48 = ((undefined8 *)param_2[9])[1];
  }
  else {
    uStack_a0 = uStack_a0 & 0xffffffff;
    func_0x000109a84868(&uStack_a0);
  }
  FUN_1092e9fd4(&plStack_38,&uStack_a0);
  if (uStack_68 != 0) {
    piVar1 = (int *)(uStack_68 + 0x14);
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
      func_0x000109a848d4(&uStack_a0);
    }
  }
  uStack_68 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (0 < uStack_a0._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_60 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_a0._4_4_);
  }
  if (puStack_58 != &uStack_50 && puStack_58 != (undefined8 *)0x0) {
    _free(puStack_58[-1]);
  }
  if (plStack_38 != (long *)0x0) {
    *param_3 = 1;
    *(undefined4 *)(param_3 + 4) = 1;
    plVar6 = (long *)plStack_38[2];
    if (plVar6 != (long *)0x0) {
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_3 + 0x10,plVar6 + 2);
    iVar2 = (int)plVar6[1] + -1;
    *(int *)(plVar6 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(plVar6 + 1) = 0xdeadf001;
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    if ((plStack_38 != (long *)0x0) &&
       (iVar2 = (int)plStack_38[1] + -1, *(int *)(plStack_38 + 1) = iVar2, iVar2 == 0)) {
      *(undefined4 *)(plStack_38 + 1) = 0xdeadf001;
      (**(code **)(*plStack_38 + 8))();
    }
  }
  return;
}



/* Entry: 1092e9fd4; end: 1092ea47f;  */

void FUN_1092e9fd4(undefined8 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 auStack_90 [2];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  undefined4 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  *param_1 = 0;
  plVar2 = (long *)0x20;
  __Znwm();
  uVar5 = NEON_rev64(*(undefined8 *)(param_2 + 8),4);
  *(undefined8 *)((long)plVar2 + 0xc) = uVar5;
  *plVar2 = (long)&PTR_DAT_110ae9c88;
  plVar2[3] = param_2;
  *(undefined4 *)(plVar2 + 1) = 1;
  plVar3 = (long *)0x58;
  __Znwm();
  *(undefined4 *)(plVar2 + 1) = 2;
  plStack_58 = plVar2;
  FUN_1092ef288();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar4 = (long *)0x18;
  __Znwm();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  *(undefined4 *)(plVar4 + 1) = 0;
  *plVar4 = (long)&PTR_DAT_110aea480;
  plVar4[2] = 0;
  func_0x0001092ea59c(plVar4 + 2,plVar3);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  uStack_68 = 0;
  ppuStack_70 = &PTR_DAT_110aeab48;
  FUN_1092fca38(&plStack_60);
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  plStack_88 = (long *)0x0;
  auStack_90[0] = 0x1000;
  plStack_80 = plVar4;
  FUN_1092f42ec(&plStack_78,&ppuStack_70,&plStack_80,auStack_90);
  FUN_1092e9d40(param_1,plStack_78);
  if ((plStack_78 != (long *)0x0) &&
     (iVar1 = (int)plStack_78[1] + -1, *(int *)(plStack_78 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_78 + 1) = 0xdeadf001;
    (**(code **)(*plStack_78 + 8))();
  }
  if ((plStack_88 != (long *)0x0) &&
     (iVar1 = (int)plStack_88[1] + -1, *(int *)(plStack_88 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_88 + 1) = 0xdeadf001;
    (**(code **)(*plStack_88 + 8))();
  }
  if ((plStack_80 != (long *)0x0) &&
     (iVar1 = (int)plStack_80[1] + -1, *(int *)(plStack_80 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_80 + 1) = 0xdeadf001;
    (**(code **)(*plStack_80 + 8))();
  }
  ppuStack_70 = &PTR_DAT_110aeab48;
  if ((plStack_60 != (long *)0x0) &&
     (iVar1 = (int)plStack_60[1] + -1, *(int *)(plStack_60 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_60 + 1) = 0xdeadf001;
    (**(code **)(*plStack_60 + 8))();
  }
  iVar1 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}



/* Entry: 1092ea480; end: 1092ea5ff;  */

void FUN_1092ea480(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1092ea600; end: 1092ea643;  */

undefined8 * FUN_1092ea600(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110aea520;
  func_0x0001092ea740();
  *param_1 = &PTR_DAT_110aea4f8;
  param_1[1] = param_2;
  return param_1;
}



/* Entry: 1092ea644; end: 1092ea647;  */

void FUN_1092ea644(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aea520;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1092ea648; end: 1092ea65b;  */

void FUN_1092ea648(void)

{
  FUN_1092ea6a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092ea65c; end: 1092ea677;  */

char * FUN_1092ea65c(long param_1)

{
  char *pcVar1;
  
  pcVar1 = "";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



/* Entry: 1092ea678; end: 1092ea68b;  */

void FUN_1092ea678(void)

{
  FUN_1092ea6a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092ea68c; end: 1092ea68f;  */

void FUN_1092ea68c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aea520;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1092ea690; end: 1092ea6a3;  */

void FUN_1092ea690(void)

{
  FUN_1092ea6a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092ea6a4; end: 1092ea77f;  */

void FUN_1092ea6a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aea520;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1092ea780; end: 1092ea783;  */

void FUN_1092ea780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aea520;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1092ea784; end: 1092ea797;  */

void FUN_1092ea784(void)

{
  FUN_1092ea6a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092ea798; end: 1092ea90f;  */

void FUN_1092ea798(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined **ppuStack_60;
  undefined4 uStack_58;
  long *plStack_50;
  undefined **appuStack_48 [2];
  long *plStack_38;
  
  plVar3 = *(long **)(param_2 + 0x18);
  uStack_58 = 0;
  ppuStack_60 = &PTR_FUN_110ae9d40;
  plStack_50 = *(long **)(param_4 + 0x10);
  if (plStack_50 != (long *)0x0) {
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
  }
  (**(code **)(*plVar3 + 0x10))(appuStack_48,plVar3,param_3,&ppuStack_60);
  func_0x0001092ead38(param_4,plStack_38);
  appuStack_48[0] = &PTR_FUN_110ae9d40;
  if ((plStack_38 != (long *)0x0) &&
     (iVar2 = (int)plStack_38[1] + -1, *(int *)(plStack_38 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plStack_38 + 1) = 0xdeadf001;
    (**(code **)(*plStack_38 + 8))();
  }
  plStack_38 = (long *)0x0;
  ppuStack_60 = &PTR_FUN_110ae9d40;
  if ((plStack_50 != (long *)0x0) &&
     (iVar2 = (int)plStack_50[1] + -1, *(int *)(plStack_50 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plStack_50 + 1) = 0xdeadf001;
    (**(code **)(*plStack_50 + 8))();
  }
  plStack_50 = (long *)0x0;
  uVar1 = *(uint *)(param_2 + 0xc);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
      *(byte *)(lVar5 + uVar4) = ~*(byte *)(lVar5 + uVar4);
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110ae9d40;
  param_1[2] = 0;
  func_0x0001092ead38(param_1,*(undefined8 *)(param_4 + 0x10));
  return;
}



/* Entry: 1092ea910; end: 1092eaa17;  */

void FUN_1092ea910(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined **appuStack_38 [2];
  long *plStack_28;
  
  (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(appuStack_38);
  uVar1 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0xc);
  FUN_1092ead9c(param_1,(ulong)uVar1);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      *(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + uVar3) =
           ~*(byte *)(plStack_28[2] + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  appuStack_38[0] = &PTR_FUN_110ae9d40;
  if ((plStack_28 != (long *)0x0) &&
     (iVar2 = (int)plStack_28[1] + -1, *(int *)(plStack_28 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plStack_28 + 1) = 0xdeadf001;
    (**(code **)(*plStack_28 + 8))();
  }
  return;
}



/* Entry: 1092eaa18; end: 1092eaa27;  */

void FUN_1092eaa18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092eaa24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}



/* Entry: 1092eaa28; end: 1092eab5b;  */

void FUN_1092eaa28(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  long *plStack_58;
  
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  (**(code **)(**(long **)(param_2 + 0x18) + 0x28))
            (&plStack_58,*(long **)(param_2 + 0x18),param_3,param_4,param_5,param_6);
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined8 *)((long)puVar2 + 0xc) = *(undefined8 *)((long)plStack_58 + 0xc);
  *puVar2 = &PTR_FUN_110aea588;
  puVar2[3] = 0;
  FUN_1092ea480();
  *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  *param_1 = puVar2;
  if ((plStack_58 != (long *)0x0) &&
     (iVar1 = (int)plStack_58[1] + -1, *(int *)(plStack_58 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_58 + 1) = 0xdeadf001;
    (**(code **)(*plStack_58 + 8))();
  }
  return;
}



/* Entry: 1092eab5c; end: 1092eab7b;  */

void FUN_1092eab5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092eab68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}



/* Entry: 1092eab7c; end: 1092eac7f;  */

void FUN_1092eab7c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plStack_38;
  
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  (**(code **)(**(long **)(param_2 + 0x18) + 0x40))(&plStack_38);
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined8 *)((long)puVar2 + 0xc) = *(undefined8 *)((long)plStack_38 + 0xc);
  *puVar2 = &PTR_FUN_110aea588;
  puVar2[3] = 0;
  FUN_1092ea480();
  *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  *param_1 = puVar2;
  if ((plStack_38 != (long *)0x0) &&
     (iVar1 = (int)plStack_38[1] + -1, *(int *)(plStack_38 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_38 + 1) = 0xdeadf001;
    (**(code **)(*plStack_38 + 8))();
  }
  return;
}



/* Entry: 1092eac80; end: 1092ead9b;  */

undefined8 * FUN_1092eac80(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aea588;
  plVar2 = (long *)param_1[3];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092ead9c; end: 1092eae63;  */

undefined8 * FUN_1092ead9c(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 uStack_31;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110ae9d40;
  param_1[2] = 0;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR_DAT_110ae9cf8;
  uStack_31 = 0;
  FUN_109274888(puVar2 + 2,(long)param_2,&uStack_31);
  *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))();
  }
  param_1[2] = puVar2;
  return param_1;
}



/* Entry: 1092eae64; end: 1092eae6b;  */

undefined8 FUN_1092eae64(void)

{
  return 0;
}



/* Entry: 1092eae6c; end: 1092eae9b;  */

undefined8 FUN_1092eae6c(void)

{
  ___cxa_allocate_exception(0x10);
  FUN_1092efc84();
  ___cxa_throw();
  return 0;
}



/* Entry: 1092eae9c; end: 1092eaea3;  */

undefined8 FUN_1092eae9c(void)

{
  return 0;
}



/* Entry: 1092eaea4; end: 1092eaed3;  */

void FUN_1092eaea4(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  
  plVar2 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_1092efc84();
  ___cxa_throw();
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
  *(undefined4 *)(puVar3 + 1) = 0;
  *(undefined8 *)((long)puVar3 + 0xc) = *(undefined8 *)((long)plVar2 + 0xc);
  *puVar3 = &PTR_FUN_110aea588;
  puVar3[3] = 0;
  FUN_1092ea480(puVar3 + 3,plVar2);
  *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  *extraout_x8 = puVar3;
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x0001092eaf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2);
  return;
}



/* Entry: 1092eaed4; end: 1092eaf87;  */

void FUN_1092eaed4(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  if (param_2 != (long *)0x0) {
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  }
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined8 *)((long)puVar2 + 0xc) = *(undefined8 *)((long)param_2 + 0xc);
  *puVar2 = &PTR_FUN_110aea588;
  puVar2[3] = 0;
  FUN_1092ea480(puVar2 + 3,param_2);
  *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  *param_1 = puVar2;
  iVar1 = (int)param_2[1] + -1;
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  *(undefined4 *)(param_2 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x0001092eaf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2);
  return;
}



/* Entry: 1092eaf88; end: 1092eb0ab;  */

void FUN_1092eaf88(long *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 auStack_38 [2];
  long *plStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)*param_2;
  if (plStack_28 != (long *)0x0) {
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
  }
  plStack_30 = (long *)0x0;
  auStack_38[0] = 0x1bbfe;
  (**(code **)(*param_1 + 0x18))(param_1,&plStack_28,auStack_38);
  if ((plStack_30 != (long *)0x0) &&
     (iVar1 = (int)plStack_30[1] + -1, *(int *)(plStack_30 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_30 + 1) = 0xdeadf001;
    (**(code **)(*plStack_30 + 8))();
  }
  if ((plStack_28 != (long *)0x0) &&
     (iVar1 = (int)plStack_28[1] + -1, *(int *)(plStack_28 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_28 + 1) = 0xdeadf001;
    (**(code **)(*plStack_28 + 8))();
  }
  return;
}



/* Entry: 1092eb0ac; end: 1092eb13f;  */

undefined8 *
FUN_1092eb0ac(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,undefined4 param_5)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110aea628;
  param_1[2] = 0;
  FUN_1092eb294(param_1 + 2,*param_2);
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = &PTR_FUN_110ae9d40;
  param_1[5] = 0;
  func_0x0001092ead38(param_1 + 3,*(undefined8 *)(param_3 + 0x10));
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[6] = &PTR_DAT_110aea660;
  param_1[8] = 0;
  func_0x0001092eb2f8(param_1 + 6,*(undefined8 *)(param_4 + 0x10));
  *(undefined4 *)(param_1 + 9) = param_5;
  return param_1;
}



/* Entry: 1092eb140; end: 1092eb27b;  */

undefined8 * FUN_1092eb140(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aea628;
  param_1[6] = &PTR_DAT_110aea660;
  plVar2 = (long *)param_1[8];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[8] = 0;
  param_1[3] = &PTR_FUN_110ae9d40;
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[5] = 0;
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092eb27c; end: 1092eb27f;  */

undefined8 * FUN_1092eb27c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aea628;
  param_1[6] = &PTR_DAT_110aea660;
  plVar2 = (long *)param_1[8];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[8] = 0;
  param_1[3] = &PTR_FUN_110ae9d40;
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[5] = 0;
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092eb280; end: 1092eb293;  */

void FUN_1092eb280(void)

{
  FUN_1092eb140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092eb294; end: 1092eb3b7;  */

void FUN_1092eb294(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1092eb3b8; end: 1092eb3c7;  */

undefined4 FUN_1092eb3b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1092eb3c8; end: 1092eb55f;  */

void FUN_1092eb3c8(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1092eb560; end: 1092eb627;  */

undefined8 * FUN_1092eb560(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 uStack_34;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_DAT_110aea6e8;
  param_1[2] = 0;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR_DAT_110aea720;
  uStack_34 = 0;
  FUN_1092cd11c(puVar2 + 2,(long)param_2,&uStack_34);
  *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))();
  }
  param_1[2] = puVar2;
  return param_1;
}



/* Entry: 1092eb628; end: 1092eb7c3;  */

void FUN_1092eb628(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  *(long *)(param_1 + 0x10) = param_2;
  return;
}



/* Entry: 1092eb7c4; end: 1092eb857;  */

undefined8 * FUN_1092eb7c4(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110aea758;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = &PTR_DAT_110aea6e8;
  param_1[5] = 0;
  FUN_1092eb858(param_1,param_2,param_2);
  return param_1;
}



/* Entry: 1092eb858; end: 1092eb95f;  */

long * FUN_1092eb858(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined **appuStack_38 [2];
  long *plStack_28;
  
  if ((0 < param_2) && (0 < param_3)) {
    *(int *)(param_1 + 0xc) = param_2;
    *(int *)(param_1 + 0x10) = param_3;
    uVar1 = param_2 + 0x1fU >> 5;
    *(uint *)(param_1 + 0x14) = uVar1;
    FUN_1092eb560(appuStack_38,uVar1 * param_3);
    FUN_1092eb628(param_1 + 0x18,plStack_28);
    appuStack_38[0] = &PTR_DAT_110aea6e8;
    if ((plStack_28 != (long *)0x0) &&
       (iVar2 = (int)plStack_28[1] + -1, *(int *)(plStack_28 + 1) = iVar2, iVar2 == 0)) {
      *(undefined4 *)(plStack_28 + 1) = 0xdeadf001;
      (**(code **)(*plStack_28 + 8))();
    }
    return plStack_28;
  }
  plVar3 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_1092efc84();
  ___cxa_throw();
  appuStack_38[0] = &PTR_DAT_110aea6e8;
  if ((plStack_28 != (long *)0x0) &&
     (iVar2 = (int)plStack_28[1] + -1, *(int *)(plStack_28 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plStack_28 + 1) = 0xdeadf001;
    (**(code **)(*plStack_28 + 8))();
  }
  __Unwind_Resume();
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (long)&PTR_FUN_110aea758;
  *(undefined4 *)(plVar3 + 4) = 0;
  plVar3[3] = (long)&PTR_DAT_110aea6e8;
  plVar3[5] = 0;
  FUN_1092eb858();
  return plVar3;
}



/* Entry: 1092eb960; end: 1092eb9ef;  */

undefined8 * FUN_1092eb960(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110aea758;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = &PTR_DAT_110aea6e8;
  param_1[5] = 0;
  FUN_1092eb858();
  return param_1;
}



/* Entry: 1092eb9f0; end: 1092ebac3;  */

undefined8 * FUN_1092eb9f0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aea758;
  param_1[3] = &PTR_DAT_110aea6e8;
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[5] = 0;
  return param_1;
}



/* Entry: 1092ebac4; end: 1092ebb9f;  */

ulong FUN_1092ebac4(ulong param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  byte *pbVar12;
  undefined8 **appuStack_168 [2];
  char cStack_151;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [263];
  undefined1 uStack_41;
  
  if ((int)(param_3 | param_2) < 0) {
    lVar10 = 0x10;
    ___cxa_allocate_exception();
  }
  else if ((param_4 < 1) || (param_5 < 1)) {
    lVar10 = 0x10;
    ___cxa_allocate_exception();
  }
  else {
    param_5 = param_5 + param_3;
    if ((param_5 <= *(int *)(param_1 + 0x10)) &&
       ((int)(param_4 + param_2) <= *(int *)(param_1 + 0xc))) {
      lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
      do {
        iVar11 = *(int *)(param_1 + 0x14);
        uVar5 = param_2;
        do {
          iVar9 = iVar11 * param_3 + (uVar5 >> 5);
          *(uint *)(lVar10 + (long)iVar9 * 4) =
               1 << (ulong)(uVar5 & 0x1f) | *(uint *)(lVar10 + (long)iVar9 * 4);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)(param_4 + param_2));
        param_3 = param_3 + 1;
      } while ((int)param_3 < param_5);
      return param_1;
    }
    lVar10 = 0x10;
    ___cxa_allocate_exception();
  }
  FUN_1092efc84();
  ppuVar6 = &PTR_DAT_110aea950;
  ___cxa_throw();
  uVar5 = (uint)ppuVar6;
  if (uVar5 < 0x21) {
    lVar8 = *(long *)(*(long *)(lVar10 + 0x20) + 0x10);
    iVar11 = *(int *)(lVar10 + 0x28);
    iVar9 = *(int *)(lVar10 + 0x2c);
    if ((int)uVar5 <=
        ((*(int *)(*(long *)(lVar10 + 0x20) + 0x18) - (int)lVar8) - iVar11) * 8 - iVar9) {
      if (iVar9 < 1) {
        uVar7 = 0;
      }
      else {
        uVar2 = 8 - iVar9;
        uVar1 = uVar2;
        if ((int)uVar5 <= (int)uVar2) {
          uVar1 = uVar5;
        }
        uVar7 = (ulong)(uint)((int)((0xffU >> (ulong)(8 - uVar1 & 0x1f)) <<
                                    (ulong)(uVar2 - uVar1 & 0x1f) & (int)*(char *)(lVar8 + iVar11))
                             >> (uVar2 - uVar1 & 0x1f));
        ppuVar6 = (undefined **)(ulong)(uVar5 - uVar1);
        iVar9 = uVar1 + iVar9;
        *(int *)(lVar10 + 0x2c) = iVar9;
        if (iVar9 == 8) {
          iVar9 = 0;
          iVar11 = iVar11 + 1;
          *(int *)(lVar10 + 0x28) = iVar11;
          *(undefined4 *)(lVar10 + 0x2c) = 0;
        }
      }
      uVar5 = (uint)ppuVar6;
      if (0 < (int)uVar5) {
        if (7 < uVar5) {
          pbVar12 = (byte *)(lVar8 + iVar11);
          do {
            uVar7 = (ulong)((uint)*pbVar12 | (int)uVar7 << 8);
            iVar11 = iVar11 + 1;
            *(int *)(lVar10 + 0x28) = iVar11;
            uVar5 = (int)ppuVar6 - 8;
            ppuVar6 = (undefined **)(ulong)uVar5;
            pbVar12 = pbVar12 + 1;
          } while (7 < uVar5);
          if (uVar5 == 0) {
            return uVar7;
          }
        }
        uVar7 = (ulong)((-1 << (ulong)(8 - uVar5 & 0x1f) & (uint)*(byte *)(lVar8 + iVar11)) >>
                        (ulong)(8 - uVar5 & 0x1f) | (int)uVar7 << (ulong)(uVar5 & 0x1f));
        *(uint *)(lVar10 + 0x2c) = uVar5 + iVar9;
      }
      return uVar7;
    }
  }
  FUN_10926db08(auStack_150);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(auStack_150,ppuVar6);
  uVar4 = 0x10;
  ___cxa_allocate_exception(0x10);
  FUN_10926dc5c(appuStack_168,auStack_148,&uStack_41);
  if (-1 < cStack_151) {
    appuStack_168[0] = appuStack_168;
  }
  FUN_1092efc40(uVar4,appuStack_168[0]);
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1092ebd28);
  (*pcVar3)();
}



/* Entry: 1092ebba0; end: 1092ebd63;  */

uint FUN_1092ebba0(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined8 **appuStack_158 [2];
  char cStack_141;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [263];
  undefined1 uStack_31;
  
  uVar4 = (uint)param_2;
  if (uVar4 < 0x21) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    iVar8 = *(int *)(param_1 + 0x28);
    iVar7 = *(int *)(param_1 + 0x2c);
    if ((int)uVar4 <=
        ((*(int *)(*(long *)(param_1 + 0x20) + 0x18) - (int)lVar6) - iVar8) * 8 - iVar7) {
      if (iVar7 < 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 8 - iVar7;
        uVar1 = uVar5;
        if ((int)uVar4 <= (int)uVar5) {
          uVar1 = uVar4;
        }
        uVar5 = (int)((0xffU >> (ulong)(8 - uVar1 & 0x1f)) << (ulong)(uVar5 - uVar1 & 0x1f) &
                     (int)*(char *)(lVar6 + iVar8)) >> (uVar5 - uVar1 & 0x1f);
        param_2 = (ulong)(uVar4 - uVar1);
        iVar7 = uVar1 + iVar7;
        *(int *)(param_1 + 0x2c) = iVar7;
        if (iVar7 == 8) {
          iVar7 = 0;
          iVar8 = iVar8 + 1;
          *(int *)(param_1 + 0x28) = iVar8;
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
      }
      uVar4 = (uint)param_2;
      if (0 < (int)uVar4) {
        if (7 < uVar4) {
          pbVar9 = (byte *)(lVar6 + iVar8);
          do {
            uVar5 = (uint)*pbVar9 | uVar5 << 8;
            iVar8 = iVar8 + 1;
            *(int *)(param_1 + 0x28) = iVar8;
            uVar4 = (int)param_2 - 8;
            param_2 = (ulong)uVar4;
            pbVar9 = pbVar9 + 1;
          } while (7 < uVar4);
          if (uVar4 == 0) {
            return uVar5;
          }
        }
        uVar5 = (-1 << (ulong)(8 - uVar4 & 0x1f) & (uint)*(byte *)(lVar6 + iVar8)) >>
                (ulong)(8 - uVar4 & 0x1f) | uVar5 << (ulong)(uVar4 & 0x1f);
        *(uint *)(param_1 + 0x2c) = uVar4 + iVar7;
      }
      return uVar5;
    }
  }
  FUN_10926db08(auStack_140);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(auStack_140,param_2);
  uVar3 = 0x10;
  ___cxa_allocate_exception(0x10);
  FUN_10926dc5c(appuStack_158,auStack_138,&uStack_31);
  if (-1 < cStack_141) {
    appuStack_158[0] = appuStack_158;
  }
  FUN_1092efc40(uVar3,appuStack_158[0]);
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1092ebd28);
  (*pcVar2)();
}



/* Entry: 1092ebd64; end: 1092ed607;  */

void FUN_1092ebd64(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined **ppuVar5;
  int *piVar6;
  undefined1 uStack_59;
  int *piStack_58;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cef58;
  iVar1 = iRam00000001132cef58;
  puVar2[3] = &PTR_DAT_1132cef80;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iVar1 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ebe6c:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132cef58;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ebe6c;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cef64;
  iVar1 = iRam00000001132cef64;
  puVar2[3] = &PTR_DAT_1132cefa0;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iVar1 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ebf48:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132cef64;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ebf48;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cee98;
  puVar2[3] = &PTR_DAT_1132cefb8;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132cee98 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ec024:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132cee98;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ec024;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132ceea0;
  puVar2[3] = &PTR_DAT_1132cefd0;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132ceea0 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ec100:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132ceea0;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ec100;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132ceea8;
  puVar2[3] = &PTR_DAT_1132cefe8;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132ceea8 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ec1dc:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132ceea8;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ec1dc;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132ceeb0;
  puVar2[3] = &PTR_DAT_1132cf000;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132ceeb0 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ec2b8:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132ceeb0;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ec2b8;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132ceeb8;
  puVar2[3] = &PTR_DAT_1132cf018;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132ceeb8 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ec394:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132ceeb8;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ec394;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132ceec0;
  puVar2[3] = &PTR_DAT_1132cf030;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132ceec0 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ec470:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132ceec0;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ec470;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132ceec8;
  puVar2[3] = &PTR_DAT_1132cf048;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132ceec8 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ec54c:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132ceec8;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ec54c;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132ceed0;
  puVar2[3] = &PTR_DAT_1132cf060;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132ceed0 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ec628:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132ceed0;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ec628;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132ceed8;
  puVar2[3] = &PTR_DAT_1132cf078;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132ceed8 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ec704:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132ceed8;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ec704;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132ceee0;
  puVar2[3] = &PTR_DAT_1132cf090;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132ceee0 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ec7e0:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132ceee0;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ec7e0;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132ceee8;
  puVar2[3] = &PTR_DAT_1132cf0a8;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132ceee8 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ec8bc:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132ceee8;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ec8bc;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132ceef0;
  puVar2[3] = &PTR_DAT_1132cf0c0;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132ceef0 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ec998:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132ceef0;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ec998;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132ceef8;
  puVar2[3] = &PTR_DAT_1132cf0d8;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132ceef8 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092eca74:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132ceef8;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092eca74;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cef00;
  puVar2[3] = &PTR_DAT_1132cf0f0;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132cef00 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ecb50:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132cef00;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ecb50;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cef08;
  puVar2[3] = &PTR_DAT_1132cf108;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132cef08 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ecc2c:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132cef08;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ecc2c;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cef10;
  puVar2[3] = &PTR_DAT_1132cf120;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132cef10 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ecd08:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132cef10;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ecd08;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cef18;
  puVar2[3] = &PTR_DAT_1132cf138;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132cef18 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ecde4:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132cef18;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ecde4;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cef20;
  puVar2[3] = &PTR_DAT_1132cf150;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132cef20 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ecec0:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132cef20;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ecec0;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cef28;
  puVar2[3] = &PTR_DAT_1132cf168;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132cef28 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ecf9c:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132cef28;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ecf9c;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cef30;
  puVar2[3] = &PTR_DAT_1132cf1c8;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132cef30 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ed078:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132cef30;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ed078;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cef38;
  puVar2[3] = &PTR_DAT_1132cf180;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132cef38 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ed154:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132cef38;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ed154;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cef70;
  puVar2[3] = &PTR_DAT_1132cf198;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132cef70 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ed230:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132cef70;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ed230;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cef40;
  iVar1 = iRam00000001132cef40;
  puVar2[3] = &PTR_DAT_1132cef90;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iVar1 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
LAB_1092ed30c:
    *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
    (*(code *)ppuVar5[1])(puVar2);
  }
  else {
    piVar6 = (int *)0x1132cef40;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      ppuVar5 = (undefined **)*puVar2;
      goto LAB_1092ed30c;
    }
  }
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cef48;
  puVar2[3] = &PTR_DAT_1132cf1e8;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132cef48 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
  }
  else {
    piVar6 = (int *)0x1132cef48;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 != 0) goto LAB_1092ed3f8;
    ppuVar5 = (undefined **)*puVar2;
  }
  *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
  (*(code *)ppuVar5[1])(puVar2);
LAB_1092ed3f8:
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110aea790;
  puVar2[2] = 0x1132cef50;
  puVar2[3] = &PTR_DAT_1132cf1b0;
  *(undefined4 *)(puVar2 + 1) = 1;
  if (iRam00000001132cef50 == -1) {
    *(undefined4 *)(puVar2 + 1) = 0;
    ppuVar5 = &PTR_FUN_110aea790;
  }
  else {
    piVar6 = (int *)0x1132cef50;
    do {
      puVar3 = param_1;
      piStack_58 = piVar6;
      FUN_1092ed7ec(param_1,piVar6,&UNK_10dd5b8f9,&piStack_58,&uStack_59);
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      plVar4 = (long *)puVar3[5];
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      puVar3[5] = puVar2;
      piVar6 = piVar6 + 1;
    } while (*piVar6 != -1);
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar2 + 1) = iVar1 + -1;
    if (iVar1 + -1 != 0) {
      return;
    }
    ppuVar5 = (undefined **)*puVar2;
  }
  *(undefined4 *)(puVar2 + 1) = 0xdeadf001;
  (*(code *)ppuVar5[1])(puVar2);
  return;
}



/* Entry: 1092ed608; end: 1092ed62f;  */

long FUN_1092ed608(long param_1)

{
  FUN_1092ed77c(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1092ed630; end: 1092ed6c7;  */

undefined8 * FUN_1092ed630(undefined8 *param_1)

{
  int iVar1;
  
  if ((bRam0000000113829c08 & 1) == 0) {
    iVar1 = 0x13829c08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1092ebd64(0x113829bf0);
      ___cxa_atexit(FUN_1092ed608,0x113829bf0,0x100000000);
      ___cxa_guard_release(0x113829c08);
    }
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_1092ed954(param_1,uRam0000000113829bf0,0x113829bf8);
  return param_1;
}



/* Entry: 1092ed6c8; end: 1092ed773;  */

undefined8 * FUN_1092ed6c8(uint param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  uint uStack_30;
  undefined1 uStack_29;
  uint *puStack_28;
  
  uStack_30 = param_1;
  if (param_1 < 900) {
    FUN_1092ed630(auStack_48);
    puStack_28 = &uStack_30;
    puVar1 = auStack_48;
    FUN_1092ed7ec(puVar1,&uStack_30,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
    puVar2 = *(undefined8 **)(puVar1 + 0x28);
    FUN_1092ed77c(auStack_48,uStack_40);
    return puVar2;
  }
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  *puVar2 = &PTR_FUN_110aea548;
  puVar2[1] = 0;
  ___cxa_throw();
  FUN_1092ed77c(auStack_48,uStack_40);
  __Unwind_Resume(puVar2);
  return puVar2;
}



/* Entry: 1092ed774; end: 1092ed77b;  */

void FUN_1092ed774(void)

{
  return;
}



/* Entry: 1092ed77c; end: 1092ed7eb;  */

void FUN_1092ed77c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_1092ed77c(param_1,*param_2);
    FUN_1092ed77c(param_1,param_2[1]);
    plVar2 = (long *)param_2[5];
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
      (**(code **)(*plVar2 + 8))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 1092ed7ec; end: 1092ed8ab;  */

undefined1  [16] FUN_1092ed7ec(long param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (int)plVar3[4] <= *param_2) {
        if (*param_2 <= (int)plVar3[4]) {
          uVar2 = 0;
          goto LAB_1092ed894;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_1092ed854;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_1092ed854:
  plVar1 = (long *)0x30;
  __Znwm();
  *(undefined4 *)(plVar1 + 4) = *(undefined4 *)*param_4;
  plVar1[5] = 0;
  FUN_1092ed8ac(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_1092ed894:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 1092ed8ac; end: 1092ed8ff;  */

void FUN_1092ed8ac(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1092ed900; end: 1092ed953;  */

undefined8 * FUN_1092ed900(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_1092ed954(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 1092ed954; end: 1092ed9d3;  */

void FUN_1092ed954(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_2 != param_3) {
    FUN_1092ed9d4(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
    plVar1 = (long *)param_2[1];
    plVar3 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar3[2];
        bVar2 = (long *)*param_2 != plVar3;
        plVar3 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 1092ed9d4; end: 1092edbcf;  */

undefined1  [16] FUN_1092ed9d4(undefined8 *param_1,long *param_2,int *param_3,undefined4 *param_4)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  iVar2 = *param_3;
  plVar1 = param_1 + 1;
  plVar10 = param_2;
  if ((plVar1 == param_2) || (iVar2 < (int)param_2[4])) {
    plVar6 = (long *)*param_2;
    plVar7 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar9 = param_2;
      plVar8 = plVar6;
      if (plVar6 == (long *)0x0) {
        do {
          plVar7 = (long *)plVar9[2];
          bVar4 = (long *)*plVar7 == plVar9;
          plVar9 = plVar7;
        } while (bVar4);
      }
      else {
        do {
          plVar7 = plVar8;
          plVar8 = (long *)plVar7[1];
        } while ((long *)plVar7[1] != (long *)0x0);
      }
      if (iVar2 <= (int)plVar7[4]) {
        plVar7 = (long *)*plVar1;
        param_2 = plVar1;
        while (plVar10 = param_2, plVar9 = param_2, plVar7 != (long *)0x0) {
          while (param_2 = plVar7, (int)param_2[4] <= iVar2) {
            if (iVar2 <= (int)param_2[4]) goto LAB_1092edbc4;
            plVar7 = (long *)param_2[1];
            if ((long *)param_2[1] == (long *)0x0) goto LAB_1092edaec;
          }
          plVar7 = (long *)*param_2;
        }
        goto LAB_1092edb68;
      }
    }
    plVar9 = param_2;
    if (plVar6 != (long *)0x0) {
      plVar9 = plVar7 + 1;
      plVar10 = plVar7;
    }
    param_2 = (long *)*plVar9;
    if (param_2 == (long *)0x0) goto LAB_1092edb68;
  }
  else if ((int)param_2[4] < iVar2) {
    plVar6 = (long *)param_2[1];
    plVar7 = param_2;
    if (plVar6 == (long *)0x0) {
      do {
        plVar8 = (long *)plVar7[2];
        bVar4 = (long *)*plVar8 != plVar7;
        plVar7 = plVar8;
        plVar9 = param_2 + 1;
      } while (bVar4);
    }
    else {
      do {
        plVar8 = plVar6;
        plVar6 = (long *)*plVar8;
        plVar10 = plVar8;
        plVar9 = plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
    if ((plVar8 != plVar1) && ((int)plVar8[4] <= iVar2)) {
      plVar7 = (long *)*plVar1;
      plVar10 = plVar1;
      while (plVar9 = plVar10, plVar7 != (long *)0x0) {
        while (param_2 = plVar7, (int)param_2[4] <= iVar2) {
          if (iVar2 <= (int)param_2[4]) goto LAB_1092edbc4;
          plVar7 = (long *)param_2[1];
          if ((long *)param_2[1] == (long *)0x0) goto LAB_1092edaec;
        }
        plVar10 = param_2;
        plVar7 = (long *)*param_2;
      }
    }
    goto LAB_1092edb68;
  }
  uVar5 = 0;
LAB_1092edbac:
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = param_2;
  return auVar12;
LAB_1092edbc4:
  uVar5 = 0;
  goto LAB_1092edbac;
LAB_1092edaec:
  plVar10 = param_2;
  plVar9 = param_2 + 1;
LAB_1092edb68:
  uVar3 = *param_4;
  lVar11 = *(long *)(param_4 + 2);
  param_2 = (long *)0x30;
  __Znwm();
  *(undefined4 *)(param_2 + 4) = uVar3;
  if (lVar11 != 0) {
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
  }
  param_2[5] = lVar11;
  FUN_1092ed8ac(param_1,plVar10,plVar9,param_2);
  uVar5 = 1;
  goto LAB_1092edbac;
}



/* Entry: 1092edbd0; end: 1092edd4b;  */

undefined8 *
FUN_1092edbd0(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4,undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_DAT_110aea7c8;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = &PTR_FUN_110ae9d40;
  param_1[4] = 0;
  func_0x0001092ead38(param_1 + 2,*(undefined8 *)(param_2 + 0x10));
  param_1[5] = 0;
  FUN_1092eb294(param_1 + 5,*param_3);
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[6] = &PTR_FUN_110aea800;
  param_1[8] = 0;
  lVar1 = *(long *)(param_4 + 0x10);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  param_1[8] = lVar1;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 9,*param_5,param_5[1]);
  }
  else {
    uVar3 = param_5[1];
    uVar2 = *param_5;
    param_1[0xb] = param_5[2];
    param_1[10] = uVar3;
    param_1[9] = uVar2;
  }
  return param_1;
}



/* Entry: 1092edd4c; end: 1092ee177;  */

undefined8 * FUN_1092edd4c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aea800;
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[2] = 0;
  return param_1;
}



/* Entry: 1092ee178; end: 1092ee2c3;  */

undefined8 * FUN_1092ee178(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_DAT_110aea430;
  param_1[2] = 0;
  FUN_1092ea480(param_1 + 2,plVar2);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  *param_1 = &PTR_FUN_110aea870;
  FUN_1092ead9c(param_1 + 3,0);
  FUN_1092eb560(param_1 + 6,0x20);
  return param_1;
}



/* Entry: 1092ee2c4; end: 1092ee3ab;  */

undefined8 * FUN_1092ee2c4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aea870;
  param_1[6] = &PTR_DAT_110aea6e8;
  plVar2 = (long *)param_1[8];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[8] = 0;
  param_1[3] = &PTR_FUN_110ae9d40;
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[5] = 0;
  *param_1 = &PTR_DAT_110aea430;
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092ee3ac; end: 1092ee3af;  */

undefined8 * FUN_1092ee3ac(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aea870;
  param_1[6] = &PTR_DAT_110aea6e8;
  plVar2 = (long *)param_1[8];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[8] = 0;
  param_1[3] = &PTR_FUN_110ae9d40;
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[5] = 0;
  *param_1 = &PTR_DAT_110aea430;
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092ee3b0; end: 1092ee3c3;  */

void FUN_1092ee3b0(void)

{
  FUN_1092ee2c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092ee3c4; end: 1092ee46b;  */

void FUN_1092ee3c4(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined **appuStack_38 [2];
  long *plStack_28;
  
  if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) - *(int *)(*(long *)(param_1 + 0x28) + 0x10) <
      param_2) {
    FUN_1092ead9c(appuStack_38);
    func_0x0001092ead38(param_1 + 0x18,plStack_28);
    appuStack_38[0] = &PTR_FUN_110ae9d40;
    if ((plStack_28 != (long *)0x0) &&
       (iVar1 = (int)plStack_28[1] + -1, *(int *)(plStack_28 + 1) = iVar1, iVar1 == 0)) {
      *(undefined4 *)(plStack_28 + 1) = 0xdeadf001;
      (**(code **)(*plStack_28 + 8))();
    }
  }
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x40) + 0x10);
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  return;
}



/* Entry: 1092ee46c; end: 1092ee7cf;  */

void FUN_1092ee46c(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined **ppuStack_80;
  undefined4 uStack_78;
  long *plStack_70;
  undefined **appuStack_68 [2];
  long *plStack_58;
  
  plVar14 = *(long **)(param_2 + 0x10);
  if ((plVar14 != (long *)0x0) && ((int)plVar14[1] == 0)) {
    *(undefined4 *)(plVar14 + 1) = 0xdeadf001;
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  uVar1 = *(uint *)((long)plVar14 + 0xc);
  uVar13 = (ulong)uVar1;
  lVar8 = *param_4;
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0xc) < (int)uVar1)) {
    puVar6 = (undefined8 *)0x28;
    __Znwm();
    *puVar6 = &PTR_DAT_110aea6b0;
    *(undefined4 *)(puVar6 + 1) = 0;
    *(uint *)((long)puVar6 + 0xc) = uVar1;
    FUN_1092eb560(puVar6 + 2,(int)(uVar1 + 0x1f) >> 5);
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    plVar7 = (long *)*param_4;
    if ((plVar7 != (long *)0x0) &&
       (iVar3 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plVar7 + 1) = 0xdeadf001;
      (**(code **)(*plVar7 + 8))();
    }
    *param_4 = (long)puVar6;
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar8 + 0x20) + 0x10);
    uVar9 = *(long *)(*(long *)(lVar8 + 0x20) + 0x18) - lVar11;
    if (0 < (int)(uVar9 >> 2)) {
      _bzero(lVar11,uVar9 & 0x1fffffffc);
    }
  }
  FUN_1092ee3c4(param_2,uVar13);
  uStack_78 = 0;
  ppuStack_80 = &PTR_FUN_110ae9d40;
  plStack_70 = *(long **)(param_2 + 0x28);
  if (plStack_70 != (long *)0x0) {
    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
  }
  (**(code **)(*plVar14 + 0x10))(appuStack_68,plVar14,param_3,&ppuStack_80);
  ppuStack_80 = &PTR_FUN_110ae9d40;
  if ((plStack_70 != (long *)0x0) &&
     (iVar3 = (int)plStack_70[1] + -1, *(int *)(plStack_70 + 1) = iVar3, iVar3 == 0)) {
    *(undefined4 *)(plStack_70 + 1) = 0xdeadf001;
    (**(code **)(*plStack_70 + 8))();
  }
  plStack_70 = (long *)0x0;
  plVar14 = *(long **)(param_2 + 0x40);
  if (plVar14 != (long *)0x0) {
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
  }
  if ((int)uVar1 < 1) {
    lVar8 = plVar14[2];
  }
  else {
    lVar8 = plVar14[2];
    pbVar10 = (byte *)plStack_58[2];
    do {
      uVar9 = (ulong)(*pbVar10 >> 1) & 0x7c;
      *(int *)(lVar8 + uVar9) = *(int *)(lVar8 + uVar9) + 1;
      uVar13 = uVar13 - 1;
      pbVar10 = pbVar10 + 1;
    } while (uVar13 != 0);
  }
  FUN_1092ee7d0(lVar8,plVar14[3]);
  if ((int)uVar1 < 3) {
    *param_1 = 0;
    func_0x0001092eb760(param_1,*param_4);
  }
  else {
    pbVar10 = (byte *)plStack_58[2];
    uVar13 = 0;
    bVar2 = pbVar10[1];
    bVar5 = *pbVar10;
    do {
      bVar4 = bVar2;
      uVar9 = uVar13 + 1;
      bVar2 = pbVar10[uVar13 + 2];
      if ((int)(((uint)bVar4 * 4 - (uint)bVar5) - (uint)bVar2) >> 1 < (int)lVar8) {
        uVar12 = uVar9 >> 5 & 0x7ffffff;
        lVar11 = *(long *)(*(long *)(*param_4 + 0x20) + 0x10);
        *(uint *)(lVar11 + uVar12 * 4) =
             *(uint *)(lVar11 + uVar12 * 4) | 1 << (ulong)((int)uVar13 + 1U & 0x1f);
      }
      uVar13 = uVar9;
      bVar5 = bVar4;
    } while ((ulong)(uVar1 - 1) - 1 != uVar9);
    *param_1 = 0;
    func_0x0001092eb760(param_1,*param_4);
    if (plVar14 == (long *)0x0) goto LAB_1092ee708;
  }
  iVar3 = (int)plVar14[1] + -1;
  *(int *)(plVar14 + 1) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(plVar14 + 1) = 0xdeadf001;
    (**(code **)(*plVar14 + 8))(plVar14);
  }
LAB_1092ee708:
  appuStack_68[0] = &PTR_FUN_110ae9d40;
  if ((plStack_58 != (long *)0x0) &&
     (iVar3 = (int)plStack_58[1] + -1, *(int *)(plStack_58 + 1) = iVar3, iVar3 == 0)) {
    *(undefined4 *)(plStack_58 + 1) = 0xdeadf001;
    (**(code **)(*plStack_58 + 8))();
  }
  return;
}



/* Entry: 1092ee7d0; end: 1092ee907;  */

long * FUN_1092ee7d0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  long *extraout_x8;
  long lVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  undefined **ppuStack_a0;
  undefined4 uStack_98;
  long *plStack_90;
  undefined **appuStack_88 [2];
  long *plStack_78;
  
  iVar8 = (int)((ulong)(param_2 - param_1) >> 2);
  if (iVar8 < 1) {
    iVar6 = 0;
    iVar12 = 0;
    iVar18 = 0;
  }
  else {
    uVar17 = 0;
    iVar18 = 0;
    uVar14 = (ulong)(param_2 - param_1) >> 2 & 0x7fffffff;
    iVar11 = 0;
    iVar16 = 0;
    do {
      iVar6 = *(int *)(param_1 + uVar17 * 4);
      iVar12 = (int)uVar17;
      iVar3 = iVar6;
      if (iVar6 <= iVar18) {
        iVar12 = iVar11;
        iVar3 = iVar18;
      }
      iVar18 = iVar3;
      if (iVar6 <= iVar16) {
        iVar6 = iVar16;
      }
      uVar17 = uVar17 + 1;
      iVar11 = iVar12;
      iVar16 = iVar6;
    } while (uVar14 != uVar17);
    uVar17 = 0;
    iVar11 = 0;
    iVar16 = 0;
    do {
      iVar18 = (int)uVar17 - iVar12;
      iVar3 = iVar18 * iVar18 * *(int *)(param_1 + uVar17 * 4);
      iVar18 = (int)uVar17;
      if (iVar3 <= iVar11) {
        iVar18 = iVar16;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
      uVar17 = uVar17 + 1;
      iVar16 = iVar18;
    } while (uVar14 != uVar17);
  }
  iVar16 = iVar12 - iVar18;
  iVar11 = iVar12;
  if (iVar16 == 0 || iVar12 < iVar18) {
    iVar11 = iVar18;
  }
  iVar3 = iVar12;
  if (iVar18 <= iVar12) {
    iVar3 = iVar18;
  }
  if (iVar16 == 0 || iVar12 < iVar18) {
    iVar16 = iVar18 - iVar12;
  }
  if (iVar8 >> 4 < iVar16) {
    iVar11 = iVar11 + -1;
    if (iVar3 < iVar11) {
      lVar13 = (long)iVar11;
      iVar8 = 1;
      iVar12 = -1;
      do {
        iVar18 = (int)lVar13 - iVar3;
        iVar18 = iVar18 * iVar18 * iVar8 * (iVar6 - *(int *)(param_1 + lVar13 * 4));
        iVar16 = (int)lVar13;
        if (iVar18 <= iVar12) {
          iVar18 = iVar12;
          iVar16 = iVar11;
        }
        iVar11 = iVar16;
        lVar13 = lVar13 + -1;
        iVar8 = iVar8 + 1;
        iVar12 = iVar18;
      } while (iVar3 < lVar13);
    }
    return (long *)(ulong)(uint)(iVar11 << 3);
  }
  puVar4 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  *puVar4 = &PTR_FUN_110aea8c0;
  puVar4[1] = 0;
  ___cxa_throw();
  plVar20 = (long *)puVar4[2];
  if ((plVar20 != (long *)0x0) && ((int)plVar20[1] == 0)) {
    *(undefined4 *)(plVar20 + 1) = 0xdeadf001;
    (**(code **)(*plVar20 + 8))(plVar20);
  }
  uVar1 = *(uint *)((long)plVar20 + 0xc);
  uVar2 = *(uint *)(plVar20 + 2);
  lVar13 = 0x30;
  __Znwm();
  FUN_1092eb960();
  *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
  *extraout_x8 = lVar13;
  FUN_1092ee3c4(puVar4,(ulong)uVar1);
  plVar9 = (long *)puVar4[8];
  if (plVar9 != (long *)0x0) {
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  }
  iVar12 = (int)(uVar1 << 2) / 5;
  iVar6 = (int)uVar1 / 5;
  iVar8 = 1;
  do {
    uStack_98 = 0;
    ppuStack_a0 = &PTR_FUN_110ae9d40;
    plStack_90 = (long *)puVar4[5];
    if (plStack_90 != (long *)0x0) {
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    }
    (**(code **)(*plVar20 + 0x10))(appuStack_88,plVar20,(int)(iVar8 * uVar2) / 5,&ppuStack_a0);
    ppuStack_a0 = &PTR_FUN_110ae9d40;
    if ((plStack_90 != (long *)0x0) &&
       (iVar18 = (int)plStack_90[1] + -1, *(int *)(plStack_90 + 1) = iVar18, iVar18 == 0)) {
      *(undefined4 *)(plStack_90 + 1) = 0xdeadf001;
      (**(code **)(*plStack_90 + 8))();
    }
    plStack_90 = (long *)0x0;
    if (iVar6 < iVar12) {
      lVar7 = plVar9[2];
      pbVar10 = (byte *)(plStack_78[2] + (long)iVar6);
      lVar5 = (long)iVar12 - (long)iVar6;
      do {
        uVar17 = (ulong)(*pbVar10 >> 1) & 0x7c;
        *(int *)(lVar7 + uVar17) = *(int *)(lVar7 + uVar17) + 1;
        lVar5 = lVar5 + -1;
        pbVar10 = pbVar10 + 1;
      } while (lVar5 != 0);
LAB_1092eeac0:
      appuStack_88[0] = &PTR_FUN_110ae9d40;
      iVar18 = (int)plStack_78[1] + -1;
      *(int *)(plStack_78 + 1) = iVar18;
      if (iVar18 == 0) {
        *(undefined4 *)(plStack_78 + 1) = 0xdeadf001;
        (**(code **)(*plStack_78 + 8))();
      }
    }
    else {
      appuStack_88[0] = &PTR_FUN_110ae9d40;
      if (plStack_78 != (long *)0x0) goto LAB_1092eeac0;
    }
    iVar8 = iVar8 + 1;
    if (iVar8 == 5) {
      lVar5 = plVar9[2];
      FUN_1092ee7d0(lVar5,plVar9[3]);
      (**(code **)(*plVar20 + 0x18))(appuStack_88,plVar20);
      if (0 < (int)uVar2) {
        uVar14 = 0;
        uVar17 = 0;
        do {
          if (0 < (int)uVar1) {
            uVar15 = 0;
            lVar7 = plStack_78[2];
            do {
              if ((int)(uint)*(byte *)(lVar7 + uVar14 + uVar15) < (int)lVar5) {
                iVar8 = *(int *)(lVar13 + 0x14) * (int)uVar17 + ((uint)uVar15 >> 5);
                lVar19 = *(long *)(*(long *)(lVar13 + 0x28) + 0x10);
                *(uint *)(lVar19 + (long)iVar8 * 4) =
                     *(uint *)(lVar19 + (long)iVar8 * 4) | 1 << (ulong)((uint)uVar15 & 0x1f);
              }
              uVar15 = uVar15 + 1;
            } while (uVar1 != uVar15);
          }
          uVar17 = uVar17 + 1;
          uVar14 = (ulong)((int)uVar14 + uVar1);
        } while (uVar17 != uVar2);
      }
      appuStack_88[0] = &PTR_FUN_110ae9d40;
      if ((plStack_78 != (long *)0x0) &&
         (iVar8 = (int)plStack_78[1] + -1, *(int *)(plStack_78 + 1) = iVar8, iVar8 == 0)) {
        *(undefined4 *)(plStack_78 + 1) = 0xdeadf001;
        (**(code **)(*plStack_78 + 8))();
      }
      if ((plVar9 != (long *)0x0) &&
         (iVar8 = (int)plVar9[1] + -1, *(int *)(plVar9 + 1) = iVar8, iVar8 == 0)) {
        *(undefined4 *)(plVar9 + 1) = 0xdeadf001;
        (**(code **)(*plVar9 + 8))(plVar9);
        plStack_78 = plVar9;
      }
      return plStack_78;
    }
  } while( true );
}



/* Entry: 1092ee908; end: 1092eece7;  */

void FUN_1092ee908(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  undefined **ppuStack_90;
  undefined4 uStack_88;
  long *plStack_80;
  undefined **appuStack_78 [2];
  long *plStack_68;
  
  plVar15 = *(long **)(param_2 + 0x10);
  if ((plVar15 != (long *)0x0) && ((int)plVar15[1] == 0)) {
    *(undefined4 *)(plVar15 + 1) = 0xdeadf001;
    (**(code **)(*plVar15 + 8))(plVar15);
  }
  uVar1 = *(uint *)((long)plVar15 + 0xc);
  uVar2 = *(uint *)(plVar15 + 2);
  lVar6 = 0x30;
  __Znwm();
  FUN_1092eb960();
  *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
  *param_1 = lVar6;
  FUN_1092ee3c4(param_2,(ulong)uVar1);
  plVar9 = *(long **)(param_2 + 0x40);
  if (plVar9 != (long *)0x0) {
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  }
  iVar4 = (int)(uVar1 << 2) / 5;
  iVar5 = (int)uVar1 / 5;
  iVar16 = 1;
  do {
    uStack_88 = 0;
    ppuStack_90 = &PTR_FUN_110ae9d40;
    plStack_80 = *(long **)(param_2 + 0x28);
    if (plStack_80 != (long *)0x0) {
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    }
    (**(code **)(*plVar15 + 0x10))(appuStack_78,plVar15,(int)(iVar16 * uVar2) / 5,&ppuStack_90);
    ppuStack_90 = &PTR_FUN_110ae9d40;
    if ((plStack_80 != (long *)0x0) &&
       (iVar3 = (int)plStack_80[1] + -1, *(int *)(plStack_80 + 1) = iVar3, iVar3 == 0)) {
      *(undefined4 *)(plStack_80 + 1) = 0xdeadf001;
      (**(code **)(*plStack_80 + 8))();
    }
    plStack_80 = (long *)0x0;
    if (iVar5 < iVar4) {
      lVar8 = plVar9[2];
      pbVar10 = (byte *)(plStack_68[2] + (long)iVar5);
      lVar7 = (long)iVar4 - (long)iVar5;
      do {
        uVar12 = (ulong)(*pbVar10 >> 1) & 0x7c;
        *(int *)(lVar8 + uVar12) = *(int *)(lVar8 + uVar12) + 1;
        lVar7 = lVar7 + -1;
        pbVar10 = pbVar10 + 1;
      } while (lVar7 != 0);
LAB_1092eeac0:
      appuStack_78[0] = &PTR_FUN_110ae9d40;
      iVar3 = (int)plStack_68[1] + -1;
      *(int *)(plStack_68 + 1) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(plStack_68 + 1) = 0xdeadf001;
        (**(code **)(*plStack_68 + 8))();
      }
    }
    else {
      appuStack_78[0] = &PTR_FUN_110ae9d40;
      if (plStack_68 != (long *)0x0) goto LAB_1092eeac0;
    }
    iVar16 = iVar16 + 1;
    if (iVar16 == 5) {
      lVar7 = plVar9[2];
      FUN_1092ee7d0(lVar7,plVar9[3]);
      (**(code **)(*plVar15 + 0x18))(appuStack_78,plVar15);
      if (0 < (int)uVar2) {
        uVar11 = 0;
        uVar12 = 0;
        do {
          if (0 < (int)uVar1) {
            uVar13 = 0;
            lVar8 = plStack_68[2];
            do {
              if ((int)(uint)*(byte *)(lVar8 + uVar11 + uVar13) < (int)lVar7) {
                iVar16 = *(int *)(lVar6 + 0x14) * (int)uVar12 + ((uint)uVar13 >> 5);
                lVar14 = *(long *)(*(long *)(lVar6 + 0x28) + 0x10);
                *(uint *)(lVar14 + (long)iVar16 * 4) =
                     *(uint *)(lVar14 + (long)iVar16 * 4) | 1 << (ulong)((uint)uVar13 & 0x1f);
              }
              uVar13 = uVar13 + 1;
            } while (uVar1 != uVar13);
          }
          uVar12 = uVar12 + 1;
          uVar11 = (ulong)((int)uVar11 + uVar1);
        } while (uVar12 != uVar2);
      }
      appuStack_78[0] = &PTR_FUN_110ae9d40;
      if ((plStack_68 != (long *)0x0) &&
         (iVar16 = (int)plStack_68[1] + -1, *(int *)(plStack_68 + 1) = iVar16, iVar16 == 0)) {
        *(undefined4 *)(plStack_68 + 1) = 0xdeadf001;
        (**(code **)(*plStack_68 + 8))();
      }
      if ((plVar9 != (long *)0x0) &&
         (iVar16 = (int)plVar9[1] + -1, *(int *)(plVar9 + 1) = iVar16, iVar16 == 0)) {
        *(undefined4 *)(plVar9 + 1) = 0xdeadf001;
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      return;
    }
  } while( true );
}



/* Entry: 1092eece8; end: 1092eeceb;  */

void FUN_1092eece8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aea520;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1092eecec; end: 1092eeddf;  */

void FUN_1092eecec(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plStack_38;
  
  lVar2 = 0x48;
  __Znwm();
  plVar3 = (long *)*param_3;
  if (plVar3 != (long *)0x0) {
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  }
  plStack_38 = plVar3;
  FUN_1092ee178(lVar2,&plStack_38);
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  *param_1 = lVar2;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x0001092eed98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}



/* Entry: 1092eede0; end: 1092eedf3;  */

void FUN_1092eede0(void)

{
  FUN_1092ea6a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092eedf4; end: 1092ef1bf;  */

void FUN_1092eedf4(long *param_1,undefined8 param_2,long *param_3,uint param_4,undefined8 *param_5)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  float fVar19;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 ***apppuStack_1a0 [2];
  char cStack_189;
  undefined4 auStack_188 [2];
  undefined1 auStack_180 [263];
  undefined1 auStack_79 [9];
  
  lVar5 = 0x30;
  __Znwm();
  FUN_1092eb7c4();
  *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
  *param_1 = lVar5;
  auStack_188[0] = 0;
  FUN_1092ef208(&lStack_1b8,(long)(int)(param_4 << 1),auStack_188);
  if (0 < (int)param_4) {
    uVar18 = 0;
    do {
      uVar17 = (ulong)(lStack_1b0 - lStack_1b8) >> 2 & 0x7fffffff;
      iVar13 = (int)((ulong)(lStack_1b0 - lStack_1b8) >> 2);
      if (0 < iVar13) {
        uVar7 = 0;
        uVar8 = 0;
        do {
          pfVar1 = (float *)(lStack_1b8 + uVar8 * 4);
          *pfVar1 = (float)uVar7 + 0.5;
          pfVar1[1] = (float)uVar18 + 0.5;
          uVar8 = uVar8 + 2;
          uVar7 = uVar7 + 1;
        } while (uVar8 < uVar17);
      }
      FUN_1092f0128(*param_5,&lStack_1b8);
      plVar14 = (long *)*param_3;
      if (plVar14 != (long *)0x0) {
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      }
      if (lStack_1b0 - lStack_1b8 == 0) {
LAB_1092eef80:
        iVar2 = (int)plVar14[1] + -1;
        *(int *)(plVar14 + 1) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(plVar14 + 1) = 0xdeadf001;
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      else {
        uVar8 = 0;
        iVar2 = *(int *)((long)plVar14 + 0xc);
        iVar3 = (int)plVar14[2];
        do {
          pfVar1 = (float *)(lStack_1b8 + uVar8 * 4);
          iVar16 = (int)*pfVar1;
          iVar15 = (int)pfVar1[1];
          if (((iVar16 < -1 || iVar2 < iVar16) || iVar15 < -1) || iVar3 < iVar15) {
            FUN_10926db08(auStack_188);
            FUN_1092b4db8(auStack_188,&UNK_10f566444,0x23);
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            uVar6 = 0x10;
            ___cxa_allocate_exception(0x10);
            FUN_10926dc5c(apppuStack_1a0,auStack_180,auStack_79);
            if (-1 < cStack_189) {
              apppuStack_1a0[0] = apppuStack_1a0;
            }
            FUN_1092ea600(uVar6,apppuStack_1a0[0]);
            ___cxa_throw();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1092ef0f8);
            (*pcVar4)();
          }
          if (iVar16 == -1) {
            fVar19 = 0.0;
LAB_1092eef4c:
            *pfVar1 = fVar19;
          }
          else {
            fVar19 = (float)(iVar2 + -1);
            if (iVar2 == iVar16) goto LAB_1092eef4c;
          }
          if (iVar15 == -1) {
            fVar19 = 0.0;
LAB_1092eef6c:
            pfVar1[1] = fVar19;
          }
          else {
            fVar19 = (float)(iVar3 + -1);
            if (iVar3 == iVar15) goto LAB_1092eef6c;
          }
          uVar8 = uVar8 + 2;
        } while (uVar8 < (ulong)(lStack_1b0 - lStack_1b8 >> 2));
        if (plVar14 != (long *)0x0) goto LAB_1092eef80;
      }
      if (0 < iVar13) {
        uVar7 = 0;
        uVar8 = 0;
        lVar9 = *param_3;
        lVar10 = *(long *)(*(long *)(lVar9 + 0x28) + 0x10);
        do {
          pfVar1 = (float *)(lStack_1b8 + uVar8 * 4);
          uVar11 = (uint)*pfVar1;
          if ((*(uint *)(lVar10 + (long)(*(int *)(lVar9 + 0x14) * (int)pfVar1[1] +
                                        ((int)uVar11 >> 5)) * 4) >> (ulong)(uVar11 & 0x1f) & 1) != 0
             ) {
            iVar13 = *(int *)(lVar5 + 0x14) * uVar18 + ((uint)uVar8 >> 6);
            lVar12 = *(long *)(*(long *)(lVar5 + 0x28) + 0x10);
            *(uint *)(lVar12 + (long)iVar13 * 4) =
                 *(uint *)(lVar12 + (long)iVar13 * 4) | 1 << (ulong)(uVar7 & 0x1f);
          }
          uVar8 = uVar8 + 2;
          uVar7 = uVar7 + 1;
        } while (uVar8 < uVar17);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != param_4);
  }
  if (lStack_1b8 != 0) {
    lStack_1b0 = lStack_1b8;
    __ZdlPv();
  }
  return;
}



/* Entry: 1092ef1c0; end: 1092ef207;  */

undefined8 FUN_1092ef1c0(void)

{
  int iVar1;
  
  if ((bRam0000000113829c18 & 1) == 0) {
    iVar1 = 0x13829c18;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_guard_release(0x113829c18);
    }
  }
  return 0x113829c10;
}



/* Entry: 1092ef208; end: 1092ef287;  */

undefined8 * FUN_1092ef208(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1092cc154(param_1);
    puVar1 = (undefined4 *)param_1[1];
    lVar3 = param_2 << 2;
    uVar4 = *param_3;
    puVar2 = puVar1;
    do {
      *puVar2 = uVar4;
      lVar3 = lVar3 + -4;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
    param_1[1] = puVar1 + param_2;
  }
  return param_1;
}



/* Entry: 1092ef288; end: 1092ef34f;  */

undefined8 * FUN_1092ef288(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  long *plStack_28;
  
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
  plStack_28 = plVar2;
  FUN_1092ee178(param_1,&plStack_28);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  *param_1 = &PTR_FUN_110aea8e8;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



/* Entry: 1092ef350; end: 1092ef3db;  */

undefined8 * FUN_1092ef350(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aea8e8;
  plVar2 = (long *)param_1[10];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[9];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = &PTR_FUN_110aea870;
  param_1[6] = &PTR_DAT_110aea6e8;
  plVar2 = (long *)param_1[8];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[8] = 0;
  param_1[3] = &PTR_FUN_110ae9d40;
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[5] = 0;
  *param_1 = &PTR_DAT_110aea430;
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092ef3dc; end: 1092ef3df;  */

undefined8 * FUN_1092ef3dc(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aea8e8;
  plVar2 = (long *)param_1[10];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[9];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = &PTR_FUN_110aea870;
  param_1[6] = &PTR_DAT_110aea6e8;
  plVar2 = (long *)param_1[8];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[8] = 0;
  param_1[3] = &PTR_FUN_110ae9d40;
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[5] = 0;
  *param_1 = &PTR_DAT_110aea430;
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092ef3e0; end: 1092ef3f3;  */

void FUN_1092ef3e0(void)

{
  FUN_1092ef350();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092ef3f4; end: 1092ef4e7;  */

void FUN_1092ef3f4(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plStack_38;
  
  lVar2 = 0x58;
  __Znwm();
  plVar3 = (long *)*param_3;
  if (plVar3 != (long *)0x0) {
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  }
  plStack_38 = plVar3;
  FUN_1092ef288(lVar2,&plStack_38);
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  *param_1 = lVar2;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x0001092ef4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}



/* Entry: 1092ef4e8; end: 1092efbc3;  */

void FUN_1092ef4e8(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  bool bVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  undefined *puVar20;
  ulong uVar21;
  uint uVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  int iVar31;
  long *plStack_98;
  undefined **appuStack_90 [2];
  long *plStack_80;
  undefined **appuStack_78 [2];
  undefined **ppuStack_68;
  
  plVar23 = (long *)(param_2 + 0x48);
  lVar12 = *plVar23;
  if (lVar12 != 0) {
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    *param_1 = lVar12;
    return;
  }
  plVar26 = *(long **)(param_2 + 0x10);
  if ((plVar26 != (long *)0x0) && ((int)plVar26[1] == 0)) {
    *(undefined4 *)(plVar26 + 1) = 0xdeadf001;
    (**(code **)(*plVar26 + 8))(plVar26);
  }
  uVar19 = *(uint *)((long)plVar26 + 0xc);
  uVar24 = (ulong)uVar19;
  if (0x27 < (int)uVar19) {
    uVar15 = *(uint *)(plVar26 + 2);
    if (0x27 < (int)uVar15) {
      (**(code **)(*plVar26 + 0x18))(appuStack_78,plVar26);
      ppuVar7 = ppuStack_68;
      uVar30 = uVar24 + 7 >> 3;
      uVar13 = (ulong)uVar15 + 7 >> 3;
      if (ppuStack_68 != (undefined **)0x0) {
        *(int *)(ppuStack_68 + 1) = *(int *)(ppuStack_68 + 1) + 1;
      }
      uVar10 = (uint)uVar13;
      uVar29 = (uint)uVar30;
      FUN_1092eb560(appuStack_90,uVar10 * uVar29);
      iVar14 = 0;
      uVar27 = 0;
      iVar5 = uVar15 - 8;
      iVar6 = uVar19 - 8;
LAB_1092ef5e8:
      iVar31 = 0;
      uVar25 = 0;
      iVar2 = iVar14;
      if (iVar5 <= iVar14) {
        iVar2 = iVar5;
      }
LAB_1092ef620:
      uVar15 = 0;
      uVar22 = 0;
      iVar11 = 0;
      iVar16 = iVar31;
      if (iVar6 <= iVar31) {
        iVar16 = iVar6;
      }
      iVar18 = uVar19 + uVar19 * iVar2 + iVar16;
      puVar20 = ppuVar7[2] + (int)(uVar19 * iVar2 + iVar16);
      uVar28 = 0xff;
LAB_1092ef648:
      lVar12 = 0;
      do {
        bVar4 = puVar20[lVar12];
        iVar11 = iVar11 + (uint)bVar4;
        if (bVar4 <= uVar28) {
          uVar28 = (uint)bVar4;
        }
        if (uVar22 <= bVar4) {
          uVar22 = (uint)bVar4;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 8);
      if ((int)(uVar22 - uVar28) < 0x19) goto code_r0x0001092ef67c;
      if (uVar15 < 7) {
        iVar16 = uVar15 + 1;
        puVar20 = ppuVar7[2] + iVar18;
        do {
          uVar21 = 0;
          do {
            iVar11 = iVar11 + (uint)(byte)puVar20[uVar21] + (uint)(byte)(puVar20 + uVar21)[1];
            bVar8 = uVar21 < 6;
            uVar21 = uVar21 + 2;
          } while (bVar8);
          iVar16 = iVar16 + 1;
          puVar20 = puVar20 + uVar24;
        } while (iVar16 != 8);
      }
      uVar15 = iVar11 >> 6;
      goto LAB_1092ef76c;
    }
  }
  FUN_1092ee908(appuStack_78,param_2);
  func_0x0001092ee114(plVar23,appuStack_78[0]);
  ppuStack_68 = appuStack_78[0];
joined_r0x0001092efa94:
  if ((ppuStack_68 != (undefined **)0x0) &&
     (iVar14 = *(int *)(ppuStack_68 + 1), *(int *)(ppuStack_68 + 1) = iVar14 + -1, iVar14 + -1 == 0)
     ) {
    *(undefined4 *)(ppuStack_68 + 1) = 0xdeadf001;
    (**(code **)(*ppuStack_68 + 8))();
  }
  *param_1 = 0;
  func_0x0001092ee114(param_1,*plVar23);
  return;
code_r0x0001092ef67c:
  uVar15 = uVar15 + 1;
  puVar20 = puVar20 + uVar24;
  iVar18 = iVar18 + uVar19;
  if (uVar15 == 8) goto code_r0x0001092ef690;
  goto LAB_1092ef648;
code_r0x0001092ef690:
  uVar22 = uVar28 >> 1;
  uVar15 = uVar22;
  if ((uVar27 != 0) && (uVar25 != 0)) {
    if (plStack_80 == (long *)0x0) {
      iVar11 = iRam0000000000000008 + -1;
    }
    else {
      iVar11 = (int)plStack_80[1];
      *(int *)(plStack_80 + 1) = iVar11 + 1;
    }
    lVar12 = plStack_80[2] + uVar25 * 4;
    piVar17 = (int *)(lVar12 + (uVar27 - 1) * uVar30 * 4);
    iVar16 = piVar17[-1];
    iVar18 = *piVar17;
    iVar3 = *(int *)(lVar12 + uVar27 * uVar30 * 4 + -4);
    *(int *)(plStack_80 + 1) = iVar11;
    if (iVar11 == 0) {
      *(undefined4 *)(plStack_80 + 1) = 0xdeadf001;
      (**(code **)(*plStack_80 + 8))();
    }
    uVar15 = iVar18 + iVar3 * 2 + iVar16 >> 2;
    if ((int)uVar15 <= (int)uVar28) {
      uVar15 = uVar22;
    }
  }
LAB_1092ef76c:
  *(uint *)(plStack_80[2] + uVar25 * 4 + uVar27 * uVar30 * 4) = uVar15;
  uVar25 = uVar25 + 1;
  iVar31 = iVar31 + 8;
  if (uVar25 == uVar30) goto code_r0x0001092ef78c;
  goto LAB_1092ef620;
code_r0x0001092ef78c:
  uVar27 = uVar27 + 1;
  iVar14 = iVar14 + 8;
  if (uVar27 == uVar13) goto code_r0x0001092ef7a4;
  goto LAB_1092ef5e8;
code_r0x0001092ef7a4:
  if ((ppuVar7 != (undefined **)0x0) &&
     (iVar14 = *(int *)(ppuVar7 + 1), *(int *)(ppuVar7 + 1) = iVar14 + -1, iVar14 + -1 == 0)) {
    *(undefined4 *)(ppuVar7 + 1) = 0xdeadf001;
    (**(code **)(*ppuVar7 + 8))(ppuVar7);
  }
  plVar9 = (long *)0x30;
  __Znwm();
  FUN_1092eb960();
  ppuVar7 = ppuStack_68;
  plVar26 = plStack_80;
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  if (ppuStack_68 != (undefined **)0x0) {
    *(int *)(ppuStack_68 + 1) = *(int *)(ppuStack_68 + 1) + 1;
  }
  if (plStack_80 != (long *)0x0) {
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
  }
  uVar19 = 0;
  plStack_98 = plVar9;
  do {
    uVar15 = 0;
    iVar14 = uVar19 * 8;
    if (iVar5 <= (int)(uVar19 * 8)) {
      iVar14 = iVar5;
    }
    uVar22 = uVar19;
    if ((int)(uVar10 - 3) <= (int)uVar19) {
      uVar22 = uVar10 - 3;
    }
    uVar28 = 2;
    if (1 < uVar19) {
      uVar28 = uVar22;
    }
    do {
      iVar31 = 0;
      uVar22 = uVar15;
      if ((int)(uVar29 - 3) <= (int)uVar15) {
        uVar22 = uVar29 - 3;
      }
      uVar1 = 2;
      if (1 < uVar15) {
        uVar1 = uVar22;
      }
      piVar17 = (int *)(plVar26[2] + uVar30 * 4 * ((long)(int)uVar28 + -2) + (long)(int)uVar1 * 4 +
                       8);
      lVar12 = 5;
      do {
        iVar31 = (int)*(undefined8 *)(piVar17 + -4) +
                 (int)((ulong)*(undefined8 *)(piVar17 + -4) >> 0x20) +
                 (int)*(undefined8 *)(piVar17 + -2) +
                 (int)((ulong)*(undefined8 *)(piVar17 + -2) >> 0x20) + *piVar17 + iVar31;
        piVar17 = piVar17 + uVar30;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      iVar2 = uVar15 * 8;
      if (iVar6 <= (int)(uVar15 * 8)) {
        iVar2 = iVar6;
      }
      if (ppuVar7 == (undefined **)0x0) {
        FUN_1092efbc4(uRam0000000000000010,iVar2,iVar14,iVar31 / 0x19,uVar24,&plStack_98);
      }
      else {
        *(int *)(ppuVar7 + 1) = *(int *)(ppuVar7 + 1) + 1;
        FUN_1092efbc4(ppuVar7[2],iVar2,iVar14,iVar31 / 0x19,uVar24,&plStack_98);
        iVar31 = *(int *)(ppuVar7 + 1);
        *(int *)(ppuVar7 + 1) = iVar31 + -1;
        if (iVar31 + -1 == 0) {
          *(undefined4 *)(ppuVar7 + 1) = 0xdeadf001;
          (**(code **)(*ppuVar7 + 8))(ppuVar7);
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar29);
    uVar19 = uVar19 + 1;
  } while (uVar19 != uVar10);
  iVar14 = (int)plVar26[1] + -1;
  *(int *)(plVar26 + 1) = iVar14;
  if (iVar14 == 0) {
    *(undefined4 *)(plVar26 + 1) = 0xdeadf001;
    (**(code **)(*plVar26 + 8))(plVar26);
  }
  if ((ppuVar7 != (undefined **)0x0) &&
     (iVar14 = *(int *)(ppuVar7 + 1), *(int *)(ppuVar7 + 1) = iVar14 + -1, iVar14 + -1 == 0)) {
    *(undefined4 *)(ppuVar7 + 1) = 0xdeadf001;
    (**(code **)(*ppuVar7 + 8))(ppuVar7);
  }
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  plVar26 = (long *)*plVar23;
  if ((plVar26 != (long *)0x0) &&
     (iVar14 = (int)plVar26[1] + -1, *(int *)(plVar26 + 1) = iVar14, iVar14 == 0)) {
    *(undefined4 *)(plVar26 + 1) = 0xdeadf001;
    (**(code **)(*plVar26 + 8))();
  }
  *plVar23 = (long)plVar9;
  iVar14 = (int)plVar9[1] + -1;
  *(int *)(plVar9 + 1) = iVar14;
  if (iVar14 == 0) {
    *(undefined4 *)(plVar9 + 1) = 0xdeadf001;
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  appuStack_90[0] = &PTR_DAT_110aea6e8;
  if ((plStack_80 != (long *)0x0) &&
     (iVar14 = (int)plStack_80[1] + -1, *(int *)(plStack_80 + 1) = iVar14, iVar14 == 0)) {
    *(undefined4 *)(plStack_80 + 1) = 0xdeadf001;
    (**(code **)(*plStack_80 + 8))();
  }
  appuStack_78[0] = &PTR_FUN_110ae9d40;
  goto joined_r0x0001092efa94;
}



/* Entry: 1092efbc4; end: 1092efc3f;  */

void FUN_1092efbc4(long param_1,uint param_2,int param_3,int param_4,uint param_5,long *param_6)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  iVar3 = 0;
  lVar4 = (long)(int)(param_2 + param_5 * param_3);
  do {
    lVar5 = *param_6;
    lVar8 = 8;
    lVar6 = param_1;
    uVar7 = param_2;
    do {
      if ((int)(uint)*(byte *)(lVar6 + lVar4) <= param_4) {
        iVar1 = *(int *)(lVar5 + 0x14) * (iVar3 + param_3) + ((int)uVar7 >> 5);
        lVar2 = *(long *)(*(long *)(lVar5 + 0x28) + 0x10);
        *(uint *)(lVar2 + (long)iVar1 * 4) =
             *(uint *)(lVar2 + (long)iVar1 * 4) | 1 << (ulong)(uVar7 & 0x1f);
      }
      lVar6 = lVar6 + 1;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + (ulong)param_5;
  } while (iVar3 != 8);
  return;
}



/* Entry: 1092efc40; end: 1092efc83;  */

undefined8 * FUN_1092efc40(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110aea520;
  func_0x0001092ea740();
  *param_1 = &PTR_DAT_110aea938;
  param_1[1] = param_2;
  return param_1;
}



/* Entry: 1092efc84; end: 1092efc8b;  */

undefined8 * FUN_1092efc84(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110aea520;
  func_0x0001092ea740();
  *param_1 = &PTR_DAT_110aea938;
  param_1[1] = param_2;
  return param_1;
}



/* Entry: 1092efc8c; end: 1092efc9f;  */

void FUN_1092efc8c(void)

{
  FUN_1092ea6a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092efca0; end: 1092efff7;  */

void FUN_1092efca0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  float fVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  long *plStack_88;
  
  FUN_1092efff8(&plStack_88);
  plVar2 = plStack_88;
  plVar3 = (long *)0x30;
  __Znwm();
  fVar5 = *(float *)((long)plVar2 + 0x24);
  fVar8 = *(float *)(plVar2 + 3);
  fVar10 = *(float *)((long)plVar2 + 0xc);
  fVar22 = (float)((ulong)*(undefined8 *)((long)plVar2 + 0x1c) >> 0x20);
  fVar13 = (float)plVar2[5];
  fVar18 = (float)((ulong)plVar2[5] >> 0x20);
  fVar7 = (float)*(undefined8 *)((long)plVar2 + 0x1c);
  fVar23 = fVar13 * -fVar22 + fVar18 * fVar7;
  fVar24 = fVar18 * -fVar8 + fVar5 * fVar22;
  fVar25 = -(fVar7 * fVar5) + fVar13 * fVar8;
  fVar9 = (float)plVar2[2];
  fVar11 = (float)((ulong)plVar2[2] >> 0x20);
  fVar16 = fVar18 * -fVar9 + fVar13 * fVar11;
  fVar18 = fVar5 * -fVar11 + fVar18 * fVar10;
  fVar13 = -fVar10 * fVar13 + fVar5 * fVar9;
  fVar21 = fVar7 * -fVar11 + fVar22 * fVar9;
  fVar22 = fVar22 * -fVar10 + fVar8 * fVar11;
  fVar5 = fVar8 * -fVar9 + fVar7 * fVar10;
  *plVar3 = (long)&PTR_DAT_110aea978;
  *(float *)((long)plVar3 + 0xc) = fVar23;
  *(float *)(plVar3 + 2) = fVar16;
  *(ulong *)((long)plVar3 + 0x1c) = CONCAT44(fVar22,fVar18);
  *(ulong *)((long)plVar3 + 0x14) = CONCAT44(fVar24,fVar21);
  *(float *)((long)plVar3 + 0x24) = fVar25;
  *(float *)(plVar3 + 5) = fVar13;
  *(float *)((long)plVar3 + 0x2c) = fVar5;
  *(undefined4 *)(plVar3 + 1) = 1;
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  FUN_1092efff8(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                in_stack_00000010,in_stack_00000014,in_stack_00000018,in_stack_0000001c,&plStack_88)
  ;
  *(undefined4 *)(plVar3 + 1) = 2;
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  fVar11 = *(float *)((long)plStack_88 + 0xc);
  fVar9 = *(float *)(plStack_88 + 2);
  fVar12 = *(float *)((long)plStack_88 + 0x1c);
  *puVar4 = &PTR_DAT_110aea978;
  fVar8 = *(float *)(plStack_88 + 3);
  fVar17 = *(float *)((long)plStack_88 + 0x24);
  lVar6 = plStack_88[5];
  fVar10 = (float)lVar6;
  *(float *)(puVar4 + 2) = fVar16 * fVar12 + fVar23 * fVar9 + fVar21 * fVar10;
  uVar15 = *(undefined8 *)((long)plStack_88 + 0x14);
  lVar20 = plStack_88[4];
  fVar19 = (float)lVar20;
  fVar14 = (float)uVar15;
  fVar7 = (float)((ulong)lVar6 >> 0x20);
  *(float *)((long)puVar4 + 0xc) = fVar8 * fVar16 + fVar23 * fVar11 + fVar21 * fVar17;
  *(ulong *)((long)puVar4 + 0x14) =
       CONCAT44(fVar18 * (float)((ulong)uVar15 >> 0x20) + fVar24 * fVar11 +
                fVar22 * (float)((ulong)lVar20 >> 0x20),
                fVar16 * fVar19 + fVar23 * fVar14 + fVar21 * fVar7);
  *(ulong *)((long)puVar4 + 0x1c) =
       CONCAT44(fVar19 * fVar18 + fVar14 * fVar24 + fVar7 * fVar22,
                fVar12 * fVar18 + fVar9 * fVar24 + fVar10 * fVar22);
  *(float *)((long)puVar4 + 0x24) = fVar8 * fVar13 + fVar25 * fVar11 + fVar5 * fVar17;
  puVar4[5] = CONCAT44(fVar19 * fVar13 + fVar14 * fVar25 + fVar7 * fVar5,
                       fVar12 * fVar13 + fVar9 * fVar25 + fVar10 * fVar5);
  *(undefined4 *)(puVar4 + 1) = 1;
  *param_1 = puVar4;
  *(undefined4 *)(plVar3 + 1) = 1;
  iVar1 = (int)plStack_88[1] + -1;
  *(int *)(plStack_88 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plStack_88 + 1) = 0xdeadf001;
    (**(code **)(*plStack_88 + 8))(plStack_88);
  }
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x0001092eff58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))(plVar3);
  return;
}



/* Entry: 1092efff8; end: 1092f0127;  */

void FUN_1092efff8(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,undefined8 *param_9)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = ((param_1 - param_3) + param_5) - param_7;
  fVar3 = ((param_2 - param_4) + param_6) - param_8;
  if ((fVar2 == 0.0) && (fVar3 == 0.0)) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
    fVar2 = param_3 - param_1;
    param_5 = param_5 - param_3;
    fVar3 = param_4 - param_2;
    param_6 = param_6 - param_4;
    fVar5 = 0.0;
    fVar4 = 0.0;
  }
  else {
    fVar4 = -((param_7 - param_5) * (param_4 - param_6)) + (param_8 - param_6) * (param_3 - param_5)
    ;
    fVar5 = (-((param_7 - param_5) * fVar3) + (param_8 - param_6) * fVar2) / fVar4;
    fVar4 = (-(fVar2 * (param_4 - param_6)) + fVar3 * (param_3 - param_5)) / fVar4;
    puVar1 = (undefined8 *)0x30;
    __Znwm();
    fVar2 = (param_3 - param_1) + param_3 * fVar5;
    param_5 = (param_7 - param_1) + param_7 * fVar4;
    fVar3 = (param_4 - param_2) + param_4 * fVar5;
    param_6 = (param_8 - param_2) + param_8 * fVar4;
  }
  *puVar1 = &PTR_DAT_110aea978;
  *(float *)((long)puVar1 + 0xc) = fVar2;
  *(float *)(puVar1 + 2) = fVar3;
  *(float *)((long)puVar1 + 0x14) = fVar5;
  *(float *)(puVar1 + 3) = param_5;
  *(float *)((long)puVar1 + 0x1c) = param_6;
  *(float *)(puVar1 + 4) = fVar4;
  *(float *)((long)puVar1 + 0x24) = param_1;
  *(float *)(puVar1 + 5) = param_2;
  *(undefined4 *)((long)puVar1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(puVar1 + 1) = 1;
  *param_9 = puVar1;
  return;
}



/* Entry: 1092f0128; end: 1092f01b3;  */

void FUN_1092f0128(long param_1,long *param_2)

{
  float *pfVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = *param_2;
  uVar4 = param_2[1] - lVar2;
  if (0 < (int)(uVar4 >> 2)) {
    uVar3 = 0;
    do {
      pfVar1 = (float *)(lVar2 + uVar3 * 4);
      fVar5 = *pfVar1;
      fVar6 = pfVar1[1];
      fVar7 = *(float *)(param_1 + 0x2c) +
              fVar6 * *(float *)(param_1 + 0x20) + fVar5 * *(float *)(param_1 + 0x14);
      *pfVar1 = (*(float *)(param_1 + 0x24) +
                fVar6 * *(float *)(param_1 + 0x18) + fVar5 * *(float *)(param_1 + 0xc)) / fVar7;
      pfVar1[1] = (*(float *)(param_1 + 0x28) +
                  fVar6 * *(float *)(param_1 + 0x1c) + fVar5 * *(float *)(param_1 + 0x10)) / fVar7;
      uVar3 = uVar3 + 2;
    } while (uVar3 < (uVar4 >> 2 & 0x7fffffff));
  }
  return;
}



/* Entry: 1092f01b4; end: 1092f022b;  */

undefined8 * FUN_1092f01b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aea9b0;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 1092f022c; end: 1092f05e7;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010002d558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

undefined1  [16] FUN_1092f022c(long *param_1,char *param_2,ulong param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  int iVar11;
  undefined *puVar12;
  undefined *puVar13;
  long *plVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long *plVar20;
  int iVar21;
  int iVar22;
  long *plVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  uint uVar29;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long lVar30;
  long lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  plVar14 = (long *)(param_4 + 8);
  plVar23 = (long *)*plVar14;
  plVar20 = plVar14;
  if (plVar23 != (long *)0x0) {
    do {
      lVar30 = 8;
      if (*(uint *)(plVar23 + 4) >> 0x1e != 0) {
        lVar30 = 0;
        plVar20 = plVar23;
      }
      plVar23 = *(long **)((long)plVar23 + lVar30);
    } while (plVar23 != (long *)0x0);
    if ((plVar20 != plVar14) && (*(uint *)(plVar20 + 4) < 0x40000001)) {
      if (-1 < *(char *)((long)plVar20 + 0x3f)) {
        lVar31 = plVar20[6];
        lVar30 = plVar20[5];
        param_1[2] = plVar20[7];
        param_1[1] = lVar31;
        *param_1 = lVar30;
        auVar35._8_8_ = param_3;
        auVar35._0_8_ = param_2;
        return auVar35;
      }
      puVar13 = (undefined *)plVar20[5];
      uVar15 = plVar20[6];
      if (0x16 < uVar15) {
        if (uVar15 < 0x7ffffffffffffff7) {
          puVar13 = (undefined *)0x19;
          if ((uVar15 | 7) != 0x17) {
            puVar13 = (undefined *)((uVar15 | 7) + 1);
          }
        }
        else {
          func_0x000104bd47d4();
        }
        puVar10 = puVar13;
        func_0x000107c60e20(puVar13);
        auVar34._8_8_ = puVar13;
        auVar34._0_8_ = puVar10;
        return auVar34;
      }
      *(char *)((long)param_1 + 0x17) = (char)uVar15;
      puVar10 = (undefined *)(uVar15 + 1);
      goto code_r0x000107c610b8;
    }
  }
  iVar11 = (int)param_3;
  if (iVar11 < 4) {
    if (0 < iVar11) goto LAB_1092f02ec;
    iVar25 = 0;
    iVar24 = 0;
    iVar21 = 0;
    bVar7 = false;
    iVar19 = 0;
    bVar1 = false;
    iVar26 = 0;
    bVar9 = true;
    bVar5 = true;
LAB_1092f0534:
    if (0 < iVar24 + iVar25 + iVar21) goto LAB_1092f0598;
LAB_1092f0544:
    if (bVar9) {
      if (((bool)(2 < iVar19 | bVar1)) || (!bVar5)) {
        puVar10 = &UNK_10f566468;
      }
      else {
        puVar13 = &UNK_10f566472;
        if (iVar11 <= iVar26) {
          puVar13 = &UNK_10f566468;
        }
        puVar10 = &UNK_10f566468;
        if (!(bool)(iVar19 == 2 & bVar7)) {
          puVar10 = puVar13;
        }
      }
    }
    else {
      if (!bVar5) goto LAB_1092f0598;
      puVar10 = &UNK_10f566472;
    }
  }
  else {
    if ((*param_2 == -0x11) && (param_2[1] == -0x45)) {
      bVar8 = param_2[2] == -0x41;
    }
    else {
LAB_1092f02ec:
      bVar8 = false;
    }
    uVar15 = 0;
    iVar26 = 0;
    iVar27 = 0;
    iVar19 = 0;
    iVar16 = 0;
    iVar17 = 0;
    iVar28 = 0;
    bVar6 = false;
    iVar21 = 0;
    iVar24 = 0;
    iVar25 = 0;
    iVar18 = 0;
    bVar5 = true;
    bVar7 = true;
    bVar1 = true;
    do {
      bVar4 = param_2[uVar15];
      uVar29 = (uint)bVar4;
      iVar22 = iVar21;
      if (bVar7) {
        if (0 < iVar18) {
          bVar7 = (char)bVar4 < 0;
          iVar18 = iVar18 + ((int)(char)bVar4 >> 7);
          goto LAB_1092f036c;
        }
        if ((char)bVar4 < '\0') {
          if ((bVar4 >> 6 & 1) == 0) {
            bVar7 = false;
            iVar18 = 0;
          }
          else if ((bVar4 >> 5 & 1) == 0) {
            iVar25 = iVar25 + 1;
            bVar7 = true;
            iVar18 = 1;
          }
          else {
            bVar9 = (bVar4 & 0x10) == 0;
            bVar7 = bVar9 || (bVar4 & 8) == 0;
            iVar18 = 3;
            iVar22 = ((uVar29 & 8) >> 3 ^ 1) + iVar21;
            if (bVar9) {
              iVar18 = 2;
              iVar24 = iVar24 + 1;
              iVar22 = iVar21;
            }
          }
          goto LAB_1092f036c;
        }
        iVar18 = 0;
        bVar7 = true;
        if (!bVar1) goto LAB_1092f03dc;
LAB_1092f03ac:
        if (bVar6) {
          bVar9 = (uVar29 - 0x40 & 0xff) < 0xbd;
          bVar1 = uVar29 != 0x7f && bVar9;
          bVar6 = uVar29 == 0x7f || !bVar9;
        }
        else {
          bVar1 = false;
          if ((uVar29 < 0xf0) && ((uVar29 & 0xffffffdf) != 0x80)) {
            if ((uVar29 + 0x5f & 0xff) < 0x3f) {
              bVar6 = false;
              iVar28 = iVar28 + 1;
              if (iVar19 <= iVar17 + 1) {
                iVar19 = iVar17 + 1;
              }
              bVar1 = true;
              iVar17 = iVar17 + 1;
              iVar16 = 0;
            }
            else if ((char)bVar4 < '\0') {
              iVar17 = 0;
              if (iVar27 <= iVar16 + 1) {
                iVar27 = iVar16 + 1;
              }
              bVar1 = true;
              bVar6 = true;
              iVar16 = iVar16 + 1;
            }
            else {
              bVar6 = false;
              iVar17 = 0;
              bVar1 = true;
              iVar16 = 0;
            }
          }
          else {
            bVar6 = false;
          }
        }
      }
      else {
        bVar7 = false;
LAB_1092f036c:
        bVar5 = (bool)(bVar5 & -0x61 < (char)bVar4);
        iVar21 = iVar26;
        if (bVar4 < 0xc0 || (bVar4 & 0xdf) == 0xd7) {
          iVar21 = iVar26 + 1;
        }
        iVar3 = iVar26;
        bVar9 = bVar5;
        if (0x9f < bVar4) {
          bVar9 = true;
          iVar3 = iVar21;
        }
        if (bVar5) {
          iVar26 = iVar3;
          bVar5 = bVar9;
        }
        iVar21 = iVar22;
        if (bVar1) goto LAB_1092f03ac;
LAB_1092f03dc:
        bVar1 = false;
      }
      uVar15 = uVar15 + 1;
    } while ((uVar15 < (param_3 & 0xffffffff)) && (bVar5 || (bVar1 || bVar7)));
    bVar2 = false;
    if (iVar18 < 1) {
      bVar2 = bVar7;
    }
    bVar9 = false;
    if (!bVar6) {
      bVar9 = bVar1;
    }
    bVar1 = 2 < iVar27;
    bVar7 = iVar28 == 2;
    iVar26 = iVar26 * 10;
    if (!bVar2) goto LAB_1092f0544;
    if (!bVar8) goto LAB_1092f0534;
LAB_1092f0598:
    puVar10 = &DAT_10f51a5f5;
  }
  while( true ) {
    puVar13 = puVar10;
    plVar20 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar10 = puVar13;
    puVar12 = puVar13;
    func_0x000107c613d0();
    if (puVar10 < (undefined *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x58) = plVar20;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_10002d57c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    if ((bRam00000001132dfb00 & 1) != 0) {
code_r0x00010002d5ec:
      auVar33._8_8_ = puVar12;
      auVar33._0_8_ = puVar10;
      return auVar33;
    }
    puVar10 = (undefined *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)puVar10 == 0) goto code_r0x00010002d5ec;
    unaff_x30 = &UNK_10002d5bc;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = (long *)0x1132dfae8;
    puVar10 = &UNK_10f5738ce;
    unaff_x19 = plVar20;
    unaff_x21 = puVar13;
  }
  if (puVar10 < (undefined *)0x17) {
    *(char *)((long)plVar20 + 0x17) = (char)puVar10;
    param_1 = plVar20;
    if (puVar10 == (undefined *)0x0) {
      *(undefined1 *)plVar20 = 0;
      auVar32._8_8_ = puVar12;
      auVar32._0_8_ = plVar20;
      return auVar32;
    }
  }
  else {
    plVar14 = (long *)0x19;
    if (((ulong)puVar10 | 7) != 0x17) {
      plVar14 = (long *)(((ulong)puVar10 | 7) + 1);
    }
    param_1 = plVar14;
    func_0x000107c60e20();
    plVar20[1] = (long)puVar10;
    plVar20[2] = (ulong)plVar14 | 0x8000000000000000;
    *plVar20 = (long)param_1;
  }
code_r0x000107c610b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,puVar13,puVar10);
  auVar36._8_8_ = puVar13;
  auVar36._0_8_ = param_1;
  return auVar36;
}



/* Entry: 1092f05e8; end: 1092f06c3;  */

/* WARNING: Possible PIC construction at 0x0001092f067c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001092f0680) */

void FUN_1092f05e8(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar6 = &stack0xfffffffffffffff0;
  if ((bRam0000000113829c28 & 1) == 0) {
    iVar2 = 0x13829c28;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      puVar3 = (undefined8 *)0x60;
      __Znwm();
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = &PTR_FUN_110aea9e8;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[10] = 0x11d00000100;
      *(undefined4 *)(puVar3 + 0xb) = 0;
      *(undefined1 *)((long)puVar3 + 0x5c) = 0;
      plVar4 = (long *)0x113829c20;
      puRam0000000113829c20 = (undefined8 *)0x0;
      unaff_x30 = 0x1092f0680;
      goto SUB_1092f0fc4;
    }
  }
  *param_1 = 0;
  puVar1 = (undefined1 *)register0x00000008;
  plVar4 = param_1;
  puVar3 = puRam0000000113829c20;
  param_1 = unaff_x19;
  puVar6 = unaff_x29;
SUB_1092f0fc4:
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar6;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  if (puVar3 != (undefined8 *)0x0) {
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  }
  plVar5 = (long *)*plVar4;
  if ((plVar5 != (long *)0x0) &&
     (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
    (**(code **)(*plVar5 + 8))();
  }
  *plVar4 = (long)puVar3;
  return;
}



/* Entry: 1092f06c4; end: 1092f0713;  */

long * FUN_1092f06c4(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092f0714; end: 1092f0a9f;  */

void FUN_1092f0714(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined **ppuStack_78;
  undefined4 uStack_70;
  long *plStack_68;
  undefined **ppuStack_60;
  undefined4 uStack_58;
  long *plStack_50;
  undefined4 uStack_44;
  
  func_0x000108a5942c(param_1 + 0x10,(long)*(int *)(param_1 + 0x50));
  func_0x000108a5942c(param_1 + 0x28,(long)*(int *)(param_1 + 0x50));
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar6 = 0;
    lVar5 = *(long *)(param_1 + 0x10);
    uVar7 = 1;
    do {
      *(uint *)(lVar5 + lVar6 * 4) = uVar7;
      uVar7 = uVar7 * 2;
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 <= (int)uVar7) {
        uVar7 = (*(uint *)(param_1 + 0x54) ^ uVar7) & iVar1 - 1U;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    if (1 < iVar1) {
      lVar6 = 0;
      lVar8 = *(long *)(param_1 + 0x28);
      do {
        *(int *)(lVar8 + (long)*(int *)(lVar5 + lVar6 * 4) * 4) = (int)lVar6;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (long)*(int *)(param_1 + 0x50) + -1);
    }
  }
  plVar2 = (long *)0x30;
  __Znwm();
  plVar3 = (long *)0x28;
  __Znwm();
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (long)&PTR_DAT_110aea720;
  uStack_44 = 0;
  FUN_1092cd11c(plVar3 + 2,1,&uStack_44);
  uStack_58 = 0;
  ppuStack_60 = &PTR_DAT_110aea6e8;
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  plStack_50 = plVar3;
  FUN_1092f108c(plVar2,param_1,&ppuStack_60);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 2;
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) &&
     (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))();
  }
  *(long **)(param_1 + 0x40) = plVar2;
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0x28);
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
  *(undefined4 *)plVar2[2] = 0;
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)0x30;
  __Znwm();
  plVar3 = (long *)0x28;
  __Znwm();
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (long)&PTR_DAT_110aea720;
  uStack_44 = 0;
  FUN_1092cd11c(plVar3 + 2,1,&uStack_44);
  uStack_70 = 0;
  ppuStack_78 = &PTR_DAT_110aea6e8;
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  plStack_68 = plVar3;
  FUN_1092f108c(plVar2,param_1,&ppuStack_78);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 2;
  plVar4 = *(long **)(param_1 + 0x48);
  if ((plVar4 != (long *)0x0) &&
     (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))();
  }
  *(long **)(param_1 + 0x48) = plVar2;
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x48) + 0x28);
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
  *(undefined4 *)plVar2[2] = 1;
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined1 *)(param_1 + 0x5c) = 1;
  return;
}



/* Entry: 1092f0aa0; end: 1092f0b17;  */

void FUN_1092f0aa0(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(byte *)(param_2 + 0x5c) & 1) == 0) {
    FUN_1092f0714(param_2);
  }
  *param_1 = 0;
  lVar3 = *(long *)(param_2 + 0x40);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = lVar3;
  return;
}



/* Entry: 1092f0b18; end: 1092f0d1f;  */

long * FUN_1092f0b18(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long *unaff_x19;
  undefined4 uStack_44;
  
  if ((*(byte *)(param_2 + 0x5c) & 1) == 0) {
    FUN_1092f0714(param_2);
  }
  if (-1 < param_3) {
    if ((int)param_4 != 0) {
      plVar2 = (long *)0x28;
      __Znwm();
      *(undefined4 *)(plVar2 + 1) = 0;
      *plVar2 = (long)&PTR_DAT_110aea720;
      uStack_44 = 0;
      FUN_1092cd11c(plVar2 + 2,param_3 + 1,&uStack_44);
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      *(int *)plVar2[2] = (int)param_4;
      plVar3 = (long *)0x30;
      __Znwm();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      plVar4 = plVar3;
      FUN_1092f108c();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      *param_1 = (long)plVar3;
      iVar7 = (int)plVar2[1] + -1;
      *(int *)(plVar2 + 1) = iVar7;
      if (iVar7 == 0) {
        *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
        plVar4 = plVar2;
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar7 = (int)plVar2[1];
      }
      *(int *)(plVar2 + 1) = iVar7 + -1;
      if (iVar7 + -1 == 0) {
        *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
        (**(code **)(*plVar2 + 8))(plVar2);
        plVar4 = plVar2;
      }
      return plVar4;
    }
    *param_1 = 0;
    lVar5 = *(long *)(param_2 + 0x40);
    if (lVar5 != 0) {
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    }
    plVar4 = (long *)*param_1;
    if ((plVar4 != (long *)0x0) &&
       (iVar7 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar7, iVar7 == 0)) {
      *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
      (**(code **)(*plVar4 + 8))();
    }
    *param_1 = lVar5;
    return plVar4;
  }
  lVar5 = 0x10;
  ___cxa_allocate_exception();
  FUN_1092efc84();
  iVar7 = 0x10aea950;
  ___cxa_throw();
  iVar6 = (int)unaff_x19[1] + -1;
  *(int *)(unaff_x19 + 1) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)(unaff_x19 + 1) = 0xdeadf001;
    (**(code **)(*unaff_x19 + 8))();
  }
  __ZdlPv(param_4);
  iVar6 = (int)unaff_x19[1] + -1;
  *(int *)(unaff_x19 + 1) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)(unaff_x19 + 1) = 0xdeadf001;
    (**(code **)(*unaff_x19 + 8))();
  }
  __Unwind_Resume();
  if ((*(byte *)(lVar5 + 0x5c) & 1) == 0) {
    FUN_1092f0714(lVar5);
  }
  if (iVar7 != 0) {
    return (long *)(ulong)*(uint *)(*(long *)(lVar5 + 0x28) + (long)iVar7 * 4);
  }
  lVar5 = 0x10;
  ___cxa_allocate_exception();
  FUN_1092efc84();
  iVar7 = 0x10aea950;
  ___cxa_throw();
  if ((*(byte *)(lVar5 + 0x5c) & 1) == 0) {
    FUN_1092f0714(lVar5);
  }
  if (iVar7 != 0) {
    return (long *)(ulong)*(uint *)(*(long *)(lVar5 + 0x10) +
                                   (long)(int)(*(int *)(lVar5 + 0x50) +
                                              ~*(uint *)(*(long *)(lVar5 + 0x28) + (long)iVar7 * 4))
                                   * 4);
  }
  lVar5 = 0x10;
  ___cxa_allocate_exception();
  FUN_1092efc84();
  iVar7 = 0x10aea950;
  iVar6 = 0x92efc88;
  ___cxa_throw();
  if ((*(byte *)(lVar5 + 0x5c) & 1) == 0) {
    FUN_1092f0714(lVar5);
  }
  plVar4 = (long *)0x0;
  if ((iVar7 != 0) && (iVar6 != 0)) {
    iVar7 = *(int *)(*(long *)(lVar5 + 0x28) + (long)iVar6 * 4) +
            *(int *)(*(long *)(lVar5 + 0x28) + (long)iVar7 * 4);
    iVar1 = *(int *)(lVar5 + 0x50) + -1;
    iVar6 = 0;
    if (iVar1 != 0) {
      iVar6 = iVar7 / iVar1;
    }
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(lVar5 + 0x10) + (long)(iVar7 - iVar6 * iVar1) * 4);
  }
  return plVar4;
}



/* Entry: 1092f0d20; end: 1092f0dfb;  */

undefined4 FUN_1092f0d20(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
    FUN_1092f0714(param_1);
  }
  if (param_2 != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)param_2 * 4);
  }
  lVar3 = 0x10;
  ___cxa_allocate_exception();
  FUN_1092efc84();
  iVar4 = 0x10aea950;
  ___cxa_throw();
  if ((*(byte *)(lVar3 + 0x5c) & 1) == 0) {
    FUN_1092f0714(lVar3);
  }
  if (iVar4 != 0) {
    return *(undefined4 *)
            (*(long *)(lVar3 + 0x10) +
            (long)(int)(*(int *)(lVar3 + 0x50) +
                       ~*(uint *)(*(long *)(lVar3 + 0x28) + (long)iVar4 * 4)) * 4);
  }
  lVar3 = 0x10;
  ___cxa_allocate_exception();
  FUN_1092efc84();
  iVar4 = 0x10aea950;
  iVar5 = 0x92efc88;
  ___cxa_throw();
  if ((*(byte *)(lVar3 + 0x5c) & 1) == 0) {
    FUN_1092f0714(lVar3);
  }
  uVar2 = 0;
  if ((iVar4 != 0) && (iVar5 != 0)) {
    iVar4 = *(int *)(*(long *)(lVar3 + 0x28) + (long)iVar5 * 4) +
            *(int *)(*(long *)(lVar3 + 0x28) + (long)iVar4 * 4);
    iVar1 = *(int *)(lVar3 + 0x50) + -1;
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = iVar4 / iVar1;
    }
    uVar2 = *(undefined4 *)(*(long *)(lVar3 + 0x10) + (long)(iVar4 - iVar5 * iVar1) * 4);
  }
  return uVar2;
}



/* Entry: 1092f0dfc; end: 1092f0e6b;  */

undefined4 FUN_1092f0dfc(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
    FUN_1092f0714(param_1);
  }
  uVar4 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x28) + (long)param_3 * 4) +
            *(int *)(*(long *)(param_1 + 0x28) + (long)param_2 * 4);
    iVar3 = *(int *)(param_1 + 0x50) + -1;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = iVar1 / iVar3;
    }
    uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x10) + (long)(iVar1 - iVar2 * iVar3) * 4);
  }
  return uVar4;
}



/* Entry: 1092f0e6c; end: 1092f108b;  */

undefined8 * FUN_1092f0e6c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aea9e8;
  plVar2 = (long *)param_1[9];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[8];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092f108c; end: 1092f13bb;  */

undefined8 * FUN_1092f108c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  code *pcVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plStack_50;
  undefined4 uStack_44;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110aeaa20;
  param_1[2] = param_2;
  param_1[3] = &PTR_DAT_110aea6e8;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  lVar5 = *(long *)(param_3 + 0x10);
  piVar1 = *(int **)(lVar5 + 0x10);
  uVar9 = *(long *)(lVar5 + 0x18) - (long)piVar1;
  uVar7 = uVar9 >> 2;
  iVar6 = (int)uVar7;
  if (iVar6 == 0) {
    ___cxa_allocate_exception(0x10);
    FUN_1092efc40();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1092f12f4);
    (*pcVar2)();
  }
  if ((iVar6 < 2) || (*piVar1 != 0)) {
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    param_1[5] = lVar5;
  }
  else {
    lVar5 = uVar7 << 0x20;
    uVar7 = 4;
    do {
      iVar6 = iVar6 + -1;
      lVar5 = lVar5 + -0x100000000;
      if (*(int *)((long)piVar1 + uVar7) != 0) {
        if (iVar6 != 0) {
          plVar10 = (long *)0x28;
          __Znwm();
          *(undefined4 *)(plVar10 + 1) = 0;
          *plVar10 = (long)&PTR_DAT_110aea720;
          uStack_44 = 0;
          FUN_1092cd11c(plVar10 + 2,lVar5 >> 0x20,&uStack_44);
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 2;
          plVar3 = (long *)param_1[5];
          if ((plVar3 != (long *)0x0) &&
             (iVar6 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar6, iVar6 == 0)) {
            *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
            (**(code **)(*plVar3 + 8))();
          }
          param_1[5] = plVar10;
          iVar6 = (int)plVar10[1] + -1;
          *(int *)(plVar10 + 1) = iVar6;
          if (iVar6 == 0) {
            *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
            (**(code **)(*plVar10 + 8))(plVar10);
            plVar10 = (long *)param_1[5];
          }
          uVar9 = plVar10[3] - plVar10[2];
          if ((int)(uVar9 >> 2) < 1) {
            return param_1;
          }
          uVar9 = uVar9 >> 2 & 0x7fffffff;
          puVar4 = (undefined4 *)plVar10[2];
          puVar8 = (undefined4 *)(*(long *)(*(long *)(param_3 + 0x10) + 0x10) + uVar7);
          do {
            *puVar4 = *puVar8;
            uVar9 = uVar9 - 1;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar9 != 0);
          return param_1;
        }
        break;
      }
      uVar7 = uVar7 + 4;
    } while ((uVar9 & 0x1fffffffc) != uVar7);
    FUN_1092f0aa0(&plStack_50,param_2);
    plVar10 = (long *)plStack_50[5];
    if (plVar10 != (long *)0x0) {
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    }
    FUN_1092eb628(param_1 + 3,plVar10);
    if ((plVar10 != (long *)0x0) &&
       (iVar6 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar6, iVar6 == 0)) {
      *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    if ((plStack_50 != (long *)0x0) &&
       (iVar6 = (int)plStack_50[1] + -1, *(int *)(plStack_50 + 1) = iVar6, iVar6 == 0)) {
      *(undefined4 *)(plStack_50 + 1) = 0xdeadf001;
      (**(code **)(*plStack_50 + 8))();
    }
  }
  return param_1;
}



/* Entry: 1092f13bc; end: 1092f147f;  */

uint FUN_1092f13bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  puVar3 = *(uint **)(*(long *)(param_1 + 0x28) + 0x10);
  uVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x18) - (long)puVar3;
  if ((int)param_2 == 0) {
    uVar2 = puVar3[(long)(uVar4 * 0x40000000 + -0x100000000) >> 0x20];
  }
  else {
    iVar5 = (int)(uVar4 >> 2);
    if ((int)param_2 == 1) {
      if (iVar5 < 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        uVar4 = uVar4 >> 2 & 0x7fffffff;
        do {
          uVar2 = *puVar3 ^ uVar2;
          uVar4 = uVar4 - 1;
          puVar3 = puVar3 + 1;
        } while (uVar4 != 0);
      }
    }
    else {
      uVar2 = *puVar3;
      if (1 < iVar5) {
        uVar6 = 1;
        do {
          uVar1 = *(undefined8 *)(param_1 + 0x10);
          FUN_1092f0dfc(uVar1,param_2);
          uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + uVar6 * 4) ^ (uint)uVar1;
          uVar6 = uVar6 + 1;
        } while ((uVar4 >> 2 & 0x7fffffff) != uVar6);
      }
    }
  }
  return uVar2;
}



/* Entry: 1092f1480; end: 1092f186f;  */

void FUN_1092f1480(long *param_1,long param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  int *piVar7;
  long *extraout_x8;
  long *extraout_x8_00;
  long lVar8;
  int *piVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  long *unaff_x19;
  long *plVar17;
  ulong uVar18;
  long *unaff_x20;
  long *plVar19;
  ulong uVar20;
  long *unaff_x23;
  long *plVar21;
  undefined4 unaff_w25;
  long *plVar22;
  ulong uVar23;
  undefined8 ****ppppuVar24;
  code *pcVar25;
  undefined4 uStack_154;
  code *pcStack_118;
  undefined1 auStack_110 [8];
  long *plStack_108;
  long *plStack_100;
  ulong uStack_f8;
  undefined **ppuStack_f0;
  undefined4 uStack_e8;
  long *plStack_e0;
  undefined4 uStack_d4;
  undefined8 ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined4 uStack_68;
  long *plStack_60;
  undefined4 uStack_54;
  
  lVar8 = *param_3;
  if (*(long *)(param_2 + 0x10) == *(long *)(lVar8 + 0x10)) {
    plVar21 = *(long **)(param_2 + 0x28);
    piVar7 = (int *)plVar21[2];
    if (*piVar7 == 0) {
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      *param_1 = lVar8;
    }
    else {
      plVar17 = *(long **)(lVar8 + 0x28);
      piVar9 = (int *)plVar17[2];
      if (*piVar9 == 0) {
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
        *param_1 = param_2;
      }
      else {
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        plVar22 = plVar21;
        if ((int)((ulong)(plVar17[3] - (long)piVar9) >> 2) <
            (int)((ulong)(plVar21[3] - (long)piVar7) >> 2)) {
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          iVar13 = (int)plVar21[1];
          *(int *)(plVar21 + 1) = iVar13 + -1;
          if (iVar13 + -1 == 0) {
            *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
            (**(code **)(*plVar21 + 8))(plVar21);
            iVar13 = (int)plVar21[1] + 1;
          }
          *(int *)(plVar21 + 1) = iVar13;
          iVar13 = (int)plVar17[1] + -1;
          *(int *)(plVar17 + 1) = iVar13;
          if (iVar13 == 0) {
            *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
            (**(code **)(*plVar17 + 8))(plVar17);
          }
          iVar13 = (int)plVar21[1] + -1;
          *(int *)(plVar21 + 1) = iVar13;
          plVar22 = plVar17;
          plVar17 = plVar21;
          if (iVar13 == 0) {
            *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
            (**(code **)(*plVar21 + 8))(plVar21);
          }
        }
        plVar21 = (long *)0x28;
        __Znwm();
        lVar8 = plVar17[2];
        lVar12 = plVar17[3];
        *(undefined4 *)(plVar21 + 1) = 0;
        *plVar21 = (long)&PTR_DAT_110aea720;
        uStack_54 = 0;
        FUN_1092cd11c(plVar21 + 2,(lVar12 - lVar8) * 0x40000000 >> 0x20,&uStack_54);
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        puVar1 = (undefined4 *)plVar17[2];
        lVar8 = plVar17[3];
        puVar10 = (uint *)plVar22[2];
        iVar13 = (int)((ulong)(plVar22[3] - (long)puVar10) >> 2);
        uVar3 = (int)((ulong)(lVar8 - (long)puVar1) >> 2) - iVar13;
        uVar11 = (ulong)uVar3;
        if (0 < (int)uVar3) {
          puVar15 = (undefined4 *)plVar21[2];
          puVar16 = puVar1;
          do {
            *puVar15 = *puVar16;
            uVar11 = uVar11 - 1;
            puVar15 = puVar15 + 1;
            puVar16 = puVar16 + 1;
          } while (uVar11 != 0);
        }
        if (0 < iVar13) {
          lVar12 = (long)(int)uVar3;
          lVar14 = plVar21[2];
          do {
            *(uint *)(lVar14 + lVar12 * 4) = puVar1[lVar12] ^ *puVar10;
            lVar12 = lVar12 + 1;
            puVar10 = puVar10 + 1;
          } while (lVar12 < (lVar8 - (long)puVar1) * 0x40000000 >> 0x20);
        }
        lVar8 = 0x30;
        __Znwm();
        uStack_68 = 0;
        ppuStack_70 = &PTR_DAT_110aea6e8;
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        plStack_60 = plVar21;
        FUN_1092f108c();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        *param_1 = lVar8;
        iVar13 = (int)plVar21[1] + -1;
        *(int *)(plVar21 + 1) = iVar13;
        if (iVar13 == 0) {
          *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
          (**(code **)(*plVar21 + 8))(plVar21);
          iVar13 = (int)plVar21[1];
        }
        *(int *)(plVar21 + 1) = iVar13 + -1;
        if (iVar13 + -1 == 0) {
          *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
          (**(code **)(*plVar21 + 8))(plVar21);
        }
        iVar13 = (int)plVar17[1] + -1;
        *(int *)(plVar17 + 1) = iVar13;
        if (iVar13 == 0) {
          *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
          (**(code **)(*plVar17 + 8))(plVar17);
        }
        iVar13 = (int)plVar22[1] + -1;
        *(int *)(plVar22 + 1) = iVar13;
        if (iVar13 == 0) {
          *(undefined4 *)(plVar22 + 1) = 0xdeadf001;
          (**(code **)(*plVar22 + 8))(plVar22);
        }
      }
    }
    return;
  }
  plVar21 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_1092efc84();
  ppuVar6 = &PTR_DAT_110aea950;
  ___cxa_throw();
  iVar13 = (int)unaff_x23[1] + -1;
  *(int *)(unaff_x23 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(unaff_x23 + 1) = unaff_w25;
    (**(code **)(*unaff_x23 + 8))();
  }
  __ZdlPv();
  iVar13 = (int)unaff_x23[1] + -1;
  *(int *)(unaff_x23 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(unaff_x23 + 1) = unaff_w25;
    (**(code **)(*unaff_x23 + 8))();
  }
  iVar13 = (int)unaff_x20[1] + -1;
  *(int *)(unaff_x20 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(unaff_x20 + 1) = unaff_w25;
    (**(code **)(*unaff_x20 + 8))();
  }
  iVar13 = (int)unaff_x19[1] + -1;
  *(int *)(unaff_x19 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(unaff_x19 + 1) = unaff_w25;
    (**(code **)(*unaff_x19 + 8))();
  }
  plVar17 = plVar21;
  __Unwind_Resume();
  pppuVar4 = (undefined ***)auStack_110;
  pppuStack_80 = (undefined8 ***)&stack0xfffffffffffffff0;
  pcStack_78 = FUN_1092f1870;
  ppppuVar24 = &pppuStack_80;
  lVar8 = plVar17[2];
  if (lVar8 == *(long *)(*ppuVar6 + 0x10)) {
    plVar22 = (long *)plVar17[5];
    piVar7 = (int *)plVar22[2];
    plVar21 = extraout_x8;
    ppppuVar24 = (undefined8 ****)pppuStack_80;
    pcVar25 = pcStack_78;
    pppuVar4 = &ppuStack_70;
    if (*piVar7 != 0) {
      plVar19 = *(long **)(*ppuVar6 + 0x28);
      piVar9 = (int *)plVar19[2];
      pppuVar4 = &ppuStack_70;
      if (*piVar9 != 0) {
        *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
        lVar8 = plVar22[3];
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        lVar12 = plVar19[3];
        plVar21 = (long *)0x28;
        __Znwm();
        uVar11 = lVar8 - (long)piVar7;
        uVar20 = lVar12 - (long)piVar9;
        uStack_f8 = uVar20 >> 2;
        iVar13 = (int)(uVar11 >> 2);
        *(undefined4 *)(plVar21 + 1) = 0;
        *plVar21 = (long)&PTR_DAT_110aea720;
        uStack_d4 = 0;
        plStack_108 = extraout_x8;
        plStack_100 = plVar22;
        FUN_1092cd11c(plVar21 + 2,(long)((int)uStack_f8 + iVar13 + -1),&uStack_d4);
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        if (0 < iVar13) {
          lVar8 = 0;
          uVar23 = 0;
          do {
            if (0 < (int)uStack_f8) {
              uVar18 = 0;
              uVar2 = *(undefined4 *)(plStack_100[2] + uVar23 * 4);
              lVar12 = plVar21[2];
              do {
                uVar3 = *(uint *)(lVar12 + lVar8 + uVar18 * 4);
                lVar14 = plVar17[2];
                FUN_1092f0dfc(lVar14,uVar2,*(undefined4 *)(plVar19[2] + uVar18 * 4));
                lVar12 = plVar21[2];
                *(uint *)(lVar12 + lVar8 + uVar18 * 4) = (uint)lVar14 ^ uVar3;
                uVar18 = uVar18 + 1;
              } while ((uVar20 >> 2 & 0x7fffffff) != uVar18);
            }
            uVar23 = uVar23 + 1;
            lVar8 = lVar8 + 4;
          } while (uVar23 != (uVar11 >> 2 & 0x7fffffff));
        }
        lVar8 = 0x30;
        __Znwm();
        uStack_e8 = 0;
        ppuStack_f0 = &PTR_DAT_110aea6e8;
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        plStack_e0 = plVar21;
        FUN_1092f108c();
        plVar17 = plStack_100;
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        *plStack_108 = lVar8;
        iVar13 = (int)plVar21[1] + -1;
        *(int *)(plVar21 + 1) = iVar13;
        if (iVar13 == 0) {
          *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
          (**(code **)(*plVar21 + 8))(plVar21);
          iVar13 = (int)plVar21[1];
        }
        *(int *)(plVar21 + 1) = iVar13 + -1;
        if (iVar13 + -1 == 0) {
          *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
          (**(code **)(*plVar21 + 8))(plVar21);
        }
        iVar13 = (int)plVar19[1] + -1;
        *(int *)(plVar19 + 1) = iVar13;
        if (iVar13 == 0) {
          *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
          (**(code **)(*plVar19 + 8))(plVar19);
        }
        iVar13 = (int)plVar17[1] + -1;
        *(int *)(plVar17 + 1) = iVar13;
        if (iVar13 == 0) {
          *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
          (**(code **)(*plVar17 + 8))(plVar17);
        }
        return;
      }
    }
  }
  else {
    lVar8 = 0x10;
    ___cxa_allocate_exception();
    FUN_1092efc84();
    ppuVar6 = &PTR_DAT_110aea950;
    ___cxa_throw();
    iVar13 = (int)plVar21[1] + -1;
    *(int *)(plVar21 + 1) = iVar13;
    if (iVar13 == 0) {
      *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
      (**(code **)(*plVar21 + 8))(plVar21);
    }
    __ZdlPv();
    iVar13 = (int)plVar21[1] + -1;
    *(int *)(plVar21 + 1) = iVar13;
    if (iVar13 == 0) {
      *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
      (**(code **)(*plVar21 + 8))(plVar21);
    }
    iVar13 = (int)unaff_x20[1] + -1;
    *(int *)(unaff_x20 + 1) = iVar13;
    if (iVar13 == 0) {
      *(undefined4 *)(unaff_x20 + 1) = 0xdeadf001;
      (**(code **)(*unaff_x20 + 8))();
    }
    iVar13 = (int)plStack_100[1] + -1;
    *(int *)(plStack_100 + 1) = iVar13;
    if (iVar13 == 0) {
      *(undefined4 *)(plStack_100 + 1) = 0xdeadf001;
      (**(code **)(*plStack_100 + 8))(plStack_100);
    }
    __Unwind_Resume();
    pcStack_118 = FUN_1092f1c08;
    plVar21 = extraout_x8_00;
    if ((int)ppuVar6 == 1) {
      *extraout_x8_00 = 0;
      goto SUB_1092f1028;
    }
    if ((int)ppuVar6 != 0) {
      uVar11 = *(long *)(*(long *)(lVar8 + 0x28) + 0x18) - *(long *)(*(long *)(lVar8 + 0x28) + 0x10)
      ;
      plVar21 = (long *)0x28;
      __Znwm();
      *(undefined4 *)(plVar21 + 1) = 0;
      *plVar21 = (long)&PTR_DAT_110aea720;
      uStack_154 = 0;
      FUN_1092cd11c(plVar21 + 2,(long)(uVar11 * 0x40000000) >> 0x20,&uStack_154);
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      if (0 < (int)(uVar11 >> 2)) {
        uVar20 = 0;
        do {
          uVar5 = *(undefined8 *)(lVar8 + 0x10);
          FUN_1092f0dfc(uVar5,*(undefined4 *)
                               (*(long *)(*(long *)(lVar8 + 0x28) + 0x10) + uVar20 * 4),ppuVar6);
          *(int *)(plVar21[2] + uVar20 * 4) = (int)uVar5;
          uVar20 = uVar20 + 1;
        } while ((uVar11 >> 2 & 0x7fffffff) != uVar20);
      }
      lVar8 = 0x30;
      __Znwm();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      FUN_1092f108c();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      *extraout_x8_00 = lVar8;
      iVar13 = (int)plVar21[1] + -1;
      *(int *)(plVar21 + 1) = iVar13;
      if (iVar13 == 0) {
        *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
        (**(code **)(*plVar21 + 8))(plVar21);
        iVar13 = (int)plVar21[1];
      }
      *(int *)(plVar21 + 1) = iVar13 + -1;
      if (iVar13 + -1 == 0) {
        *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
        (**(code **)(*plVar21 + 8))(plVar21);
      }
      return;
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    pcVar25 = FUN_1092f1c08;
    pppuVar4 = (undefined ***)auStack_110;
  }
  *(long **)((long)pppuVar4 + -0x20) = unaff_x20;
  *(long **)((long)pppuVar4 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)pppuVar4 + -0x10) = ppppuVar24;
  *(code **)((long)pppuVar4 + -8) = pcVar25;
  if ((*(byte *)(lVar8 + 0x5c) & 1) == 0) {
    FUN_1092f0714(lVar8);
  }
  *plVar21 = 0;
  lVar8 = *(long *)(lVar8 + 0x40);
  ppppuVar24 = *(undefined8 *****)((long)pppuVar4 + -0x10);
  pcStack_118 = *(code **)((long)pppuVar4 + -8);
  unaff_x20 = *(long **)((long)pppuVar4 + -0x20);
  unaff_x19 = *(long **)((long)pppuVar4 + -0x18);
SUB_1092f1028:
  *(long **)((long)pppuVar4 + -0x20) = unaff_x20;
  *(long **)((long)pppuVar4 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)pppuVar4 + -0x10) = ppppuVar24;
  *(code **)((long)pppuVar4 + -8) = pcStack_118;
  if (lVar8 != 0) {
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
  }
  plVar17 = (long *)*plVar21;
  if ((plVar17 != (long *)0x0) &&
     (iVar13 = (int)plVar17[1] + -1, *(int *)(plVar17 + 1) = iVar13, iVar13 == 0)) {
    *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
    (**(code **)(*plVar17 + 8))();
  }
  *plVar21 = lVar8;
  return;
}



/* Entry: 1092f1870; end: 1092f1c07;  */

void FUN_1092f1870(long *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long *extraout_x8;
  undefined8 unaff_x19;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long *plVar11;
  long *unaff_x21;
  int *piVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uStack_e4;
  code *pcStack_a8;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  long *plStack_90;
  ulong uStack_88;
  undefined **ppuStack_80;
  undefined4 uStack_78;
  long *plStack_70;
  undefined4 uStack_64;
  
  puVar3 = auStack_a0;
  puVar18 = &stack0xfffffffffffffff0;
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 == *(long *)(*param_3 + 0x10)) {
    plVar16 = *(long **)(param_2 + 0x28);
    piVar8 = (int *)plVar16[2];
    puVar3 = (undefined1 *)register0x00000008;
    if (*piVar8 != 0) {
      plVar11 = *(long **)(*param_3 + 0x28);
      piVar12 = (int *)plVar11[2];
      if (*piVar12 != 0) {
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        lVar4 = plVar16[3];
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        lVar15 = plVar11[3];
        plVar5 = (long *)0x28;
        __Znwm();
        uVar9 = lVar4 - (long)piVar8;
        uVar13 = lVar15 - (long)piVar12;
        uStack_88 = uVar13 >> 2;
        iVar14 = (int)(uVar9 >> 2);
        *(undefined4 *)(plVar5 + 1) = 0;
        *plVar5 = (long)&PTR_DAT_110aea720;
        uStack_64 = 0;
        plStack_98 = param_1;
        plStack_90 = plVar16;
        FUN_1092cd11c(plVar5 + 2,(long)((int)uStack_88 + iVar14 + -1),&uStack_64);
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        if (0 < iVar14) {
          lVar4 = 0;
          uVar17 = 0;
          do {
            if (0 < (int)uStack_88) {
              uVar10 = 0;
              uVar1 = *(undefined4 *)(plStack_90[2] + uVar17 * 4);
              lVar15 = plVar5[2];
              do {
                uVar2 = *(uint *)(lVar15 + lVar4 + uVar10 * 4);
                uVar6 = *(undefined8 *)(param_2 + 0x10);
                FUN_1092f0dfc(uVar6,uVar1,*(undefined4 *)(plVar11[2] + uVar10 * 4));
                lVar15 = plVar5[2];
                *(uint *)(lVar15 + lVar4 + uVar10 * 4) = (uint)uVar6 ^ uVar2;
                uVar10 = uVar10 + 1;
              } while ((uVar13 >> 2 & 0x7fffffff) != uVar10);
            }
            uVar17 = uVar17 + 1;
            lVar4 = lVar4 + 4;
          } while (uVar17 != (uVar9 >> 2 & 0x7fffffff));
        }
        lVar4 = 0x30;
        __Znwm();
        uStack_78 = 0;
        ppuStack_80 = &PTR_DAT_110aea6e8;
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        plStack_70 = plVar5;
        FUN_1092f108c();
        plVar16 = plStack_90;
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        *plStack_98 = lVar4;
        iVar14 = (int)plVar5[1] + -1;
        *(int *)(plVar5 + 1) = iVar14;
        if (iVar14 == 0) {
          *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
          (**(code **)(*plVar5 + 8))(plVar5);
          iVar14 = (int)plVar5[1];
        }
        *(int *)(plVar5 + 1) = iVar14 + -1;
        if (iVar14 + -1 == 0) {
          *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
          (**(code **)(*plVar5 + 8))(plVar5);
        }
        iVar14 = (int)plVar11[1] + -1;
        *(int *)(plVar11 + 1) = iVar14;
        if (iVar14 == 0) {
          *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
          (**(code **)(*plVar11 + 8))(plVar11);
        }
        iVar14 = (int)plVar16[1] + -1;
        *(int *)(plVar16 + 1) = iVar14;
        if (iVar14 == 0) {
          *(undefined4 *)(plVar16 + 1) = 0xdeadf001;
          (**(code **)(*plVar16 + 8))(plVar16);
        }
        return;
      }
    }
  }
  else {
    lVar4 = 0x10;
    ___cxa_allocate_exception();
    FUN_1092efc84();
    ppuVar7 = &PTR_DAT_110aea950;
    ___cxa_throw();
    iVar14 = (int)unaff_x21[1] + -1;
    *(int *)(unaff_x21 + 1) = iVar14;
    if (iVar14 == 0) {
      *(undefined4 *)(unaff_x21 + 1) = 0xdeadf001;
      (**(code **)(*unaff_x21 + 8))();
    }
    __ZdlPv();
    iVar14 = (int)unaff_x21[1] + -1;
    *(int *)(unaff_x21 + 1) = iVar14;
    if (iVar14 == 0) {
      *(undefined4 *)(unaff_x21 + 1) = 0xdeadf001;
      (**(code **)(*unaff_x21 + 8))();
    }
    iVar14 = (int)unaff_x20[1] + -1;
    *(int *)(unaff_x20 + 1) = iVar14;
    if (iVar14 == 0) {
      *(undefined4 *)(unaff_x20 + 1) = 0xdeadf001;
      (**(code **)(*unaff_x20 + 8))();
    }
    iVar14 = (int)plStack_90[1] + -1;
    *(int *)(plStack_90 + 1) = iVar14;
    if (iVar14 == 0) {
      *(undefined4 *)(plStack_90 + 1) = 0xdeadf001;
      (**(code **)(*plStack_90 + 8))(plStack_90);
    }
    __Unwind_Resume();
    pcStack_a8 = FUN_1092f1c08;
    param_1 = extraout_x8;
    if ((int)ppuVar7 == 1) {
      *extraout_x8 = 0;
      goto SUB_1092f1028;
    }
    if ((int)ppuVar7 != 0) {
      uVar9 = *(long *)(*(long *)(lVar4 + 0x28) + 0x18) - *(long *)(*(long *)(lVar4 + 0x28) + 0x10);
      plVar16 = (long *)0x28;
      __Znwm();
      *(undefined4 *)(plVar16 + 1) = 0;
      *plVar16 = (long)&PTR_DAT_110aea720;
      uStack_e4 = 0;
      FUN_1092cd11c(plVar16 + 2,(long)(uVar9 * 0x40000000) >> 0x20,&uStack_e4);
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      if (0 < (int)(uVar9 >> 2)) {
        uVar13 = 0;
        do {
          uVar6 = *(undefined8 *)(lVar4 + 0x10);
          FUN_1092f0dfc(uVar6,*(undefined4 *)
                               (*(long *)(*(long *)(lVar4 + 0x28) + 0x10) + uVar13 * 4),ppuVar7);
          *(int *)(plVar16[2] + uVar13 * 4) = (int)uVar6;
          uVar13 = uVar13 + 1;
        } while ((uVar9 >> 2 & 0x7fffffff) != uVar13);
      }
      lVar4 = 0x30;
      __Znwm();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      FUN_1092f108c();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      *extraout_x8 = lVar4;
      iVar14 = (int)plVar16[1] + -1;
      *(int *)(plVar16 + 1) = iVar14;
      if (iVar14 == 0) {
        *(undefined4 *)(plVar16 + 1) = 0xdeadf001;
        (**(code **)(*plVar16 + 8))(plVar16);
        iVar14 = (int)plVar16[1];
      }
      *(int *)(plVar16 + 1) = iVar14 + -1;
      if (iVar14 + -1 == 0) {
        *(undefined4 *)(plVar16 + 1) = 0xdeadf001;
        (**(code **)(*plVar16 + 8))(plVar16);
      }
      return;
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    unaff_x30 = FUN_1092f1c08;
    unaff_x29 = puVar18;
    puVar3 = auStack_a0;
  }
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(code **)(puVar3 + -8) = unaff_x30;
  if ((*(byte *)(lVar4 + 0x5c) & 1) == 0) {
    FUN_1092f0714(lVar4);
  }
  *param_1 = 0;
  lVar4 = *(long *)(lVar4 + 0x40);
  puVar18 = *(undefined1 **)(puVar3 + -0x10);
  pcStack_a8 = *(code **)(puVar3 + -8);
  unaff_x20 = *(long **)(puVar3 + -0x20);
  unaff_x19 = *(undefined8 *)(puVar3 + -0x18);
SUB_1092f1028:
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar18;
  *(code **)(puVar3 + -8) = pcStack_a8;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  plVar16 = (long *)*param_1;
  if ((plVar16 != (long *)0x0) &&
     (iVar14 = (int)plVar16[1] + -1, *(int *)(plVar16 + 1) = iVar14, iVar14 == 0)) {
    *(undefined4 *)(plVar16 + 1) = 0xdeadf001;
    (**(code **)(*plVar16 + 8))();
  }
  *param_1 = lVar4;
  return;
}


