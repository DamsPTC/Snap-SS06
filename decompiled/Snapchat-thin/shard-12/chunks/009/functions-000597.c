/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109b99420; end: 109b9945b;  */

void FUN_109b99420(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b99458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b9945c; end: 109b994af;  */

long * FUN_109b9945c(long *param_1)

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



/* Entry: 109b994b0; end: 109b99503;  */

long * FUN_109b994b0(long *param_1)

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



/* Entry: 109b99504; end: 109b99557;  */

long * FUN_109b99504(long *param_1)

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



/* Entry: 109b99558; end: 109b9955f;  */

void FUN_109b99558(void)

{
  return;
}



/* Entry: 109b99560; end: 109b9af27;  */

undefined4 * FUN_109b99560(undefined8 param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 *puVar17;
  code *pcVar18;
  bool bVar19;
  int iVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  float *pfVar26;
  undefined8 *puVar27;
  undefined4 **ppuVar28;
  undefined8 *puVar29;
  double *pdVar30;
  float *pfVar31;
  undefined8 *puVar32;
  long lVar33;
  double *pdVar34;
  long lVar35;
  undefined4 *puVar36;
  double dVar37;
  undefined1 *puVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar43;
  undefined1 auVar42 [16];
  float fVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 auVar64 [16];
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  undefined1 auVar72 [16];
  double dVar74;
  undefined1 auVar73 [16];
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  undefined1 auVar79 [16];
  double dStack_d00;
  double dStack_cf8;
  undefined8 uStack_cf0;
  int aiStack_ce8 [2];
  undefined1 *puStack_ce0;
  undefined1 *puStack_cd8;
  undefined1 *puStack_cd0;
  undefined1 *puStack_cc8;
  undefined8 uStack_cc0;
  long lStack_cb8;
  int *piStack_cb0;
  undefined8 *puStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  ulong uStack_c88;
  undefined8 *puStack_c80;
  ulong uStack_c78;
  ulong uStack_c70;
  ulong uStack_c68;
  ulong uStack_c60;
  ulong uStack_c58;
  int *piStack_c50;
  undefined8 *puStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 *puStack_c20;
  ulong uStack_c18;
  ulong uStack_c10;
  ulong uStack_c08;
  ulong uStack_c00;
  ulong uStack_bf8;
  int *piStack_bf0;
  undefined8 *puStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined4 auStack_bc8 [2];
  undefined8 *puStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  double *pdStack_ba0;
  double *pdStack_b98;
  long *plStack_b90;
  long *plStack_b88;
  undefined8 uStack_b80;
  long lStack_b78;
  ulong uStack_b70;
  undefined8 *puStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 **ppuStack_b48;
  undefined4 **ppuStack_b40;
  undefined8 **ppuStack_b38;
  undefined1 *puStack_b30;
  undefined8 **ppuStack_b28;
  double dStack_b20;
  double dStack_b18;
  double dStack_b10;
  undefined8 *puStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  double *pdStack_ae0;
  double *pdStack_ad8;
  double *pdStack_ad0;
  double *pdStack_ac8;
  undefined8 uStack_ac0;
  long lStack_ab8;
  ulong uStack_ab0;
  undefined8 *puStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  double dStack_a88;
  undefined8 *puStack_a80;
  undefined8 uStack_a78;
  undefined4 auStack_a70 [2];
  undefined8 *puStack_a68;
  undefined8 uStack_a60;
  undefined4 auStack_a58 [2];
  undefined8 *puStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  double *pdStack_a30;
  double *pdStack_a28;
  undefined8 *puStack_a20;
  undefined8 *puStack_a18;
  undefined8 uStack_a10;
  long lStack_a08;
  ulong uStack_a00;
  undefined8 *puStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 *puStack_9d8;
  double *pdStack_9d0;
  double *pdStack_9c8;
  undefined8 *puStack_9c0;
  undefined4 *puStack_9b8;
  undefined8 uStack_9b0;
  long lStack_9a8;
  ulong uStack_9a0;
  undefined8 *puStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 **ppuStack_978;
  undefined8 **ppuStack_970;
  undefined8 **ppuStack_968;
  undefined8 **ppuStack_960;
  undefined8 **ppuStack_958;
  double dStack_950;
  double dStack_948;
  ulong uStack_940;
  undefined8 *puStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined1 auStack_918 [216];
  undefined8 uStack_840;
  undefined8 **ppuStack_838;
  double dStack_830;
  undefined8 **ppuStack_828;
  double dStack_820;
  undefined8 **ppuStack_818;
  double adStack_810 [3];
  undefined8 *puStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined4 *puStack_648;
  undefined8 *puStack_640;
  undefined8 uStack_638;
  double dStack_630;
  undefined1 auStack_628 [40];
  double adStack_600 [9];
  undefined1 auStack_5b8 [8];
  undefined8 uStack_5b0;
  undefined1 auStack_3b8 [16];
  double dStack_3a8;
  double dStack_3a0;
  double dStack_398;
  double dStack_390;
  double dStack_388;
  double dStack_380;
  double dStack_378;
  double dStack_370;
  undefined8 **ppuStack_368;
  double dStack_360;
  undefined8 **ppuStack_358;
  double dStack_350;
  undefined8 **ppuStack_348;
  double dStack_340;
  double dStack_338;
  double dStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f0;
  long lStack_2e8;
  undefined1 *puStack_2e0;
  undefined1 auStack_2d8 [424];
  undefined1 auStack_130 [144];
  double dStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long alStack_88 [3];
  
  alStack_88[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar22 = *(ulong **)(param_2 + 2);
    piStack_bf0 = (int *)((ulong)&uStack_c30 | 8);
    uStack_c30 = *puVar22;
    uStack_c28 = puVar22[1];
    uStack_c18 = puVar22[3];
    puStack_c20 = (undefined8 *)puVar22[2];
    uStack_c10 = puVar22[4];
    uStack_c08 = puVar22[5];
    uStack_bf8 = puVar22[7];
    uStack_c00 = puVar22[6];
    puStack_be8 = &uStack_be0;
    uStack_be0 = 0;
    uStack_bd8 = 0;
    if (puVar22[7] != 0) {
      piVar1 = (int *)(puVar22[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar22 + 4) < 3) {
      uStack_be0 = *(undefined8 *)puVar22[9];
      uStack_bd8 = ((undefined8 *)puVar22[9])[1];
    }
    else {
      uStack_c30 = uStack_c30 & 0xffffffff;
      func_0x000109a84868(&uStack_c30);
    }
  }
  else {
    FUN_109a8a180(&uStack_c30,param_2,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar22 = *(ulong **)(param_3 + 2);
    piStack_c50 = (int *)((ulong)&uStack_c90 | 8);
    uStack_c90 = *puVar22;
    uStack_c88 = puVar22[1];
    uStack_c78 = puVar22[3];
    puStack_c80 = (undefined8 *)puVar22[2];
    uStack_c70 = puVar22[4];
    uStack_c68 = puVar22[5];
    uStack_c58 = puVar22[7];
    uStack_c60 = puVar22[6];
    puStack_c48 = &uStack_c40;
    uStack_c40 = 0;
    uStack_c38 = 0;
    if (puVar22[7] != 0) {
      piVar1 = (int *)(puVar22[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar22 + 4) < 3) {
      uStack_c40 = *(undefined8 *)puVar22[9];
      uStack_c38 = ((undefined8 *)puVar22[9])[1];
    }
    else {
      uStack_c90 = uStack_c90 & 0xffffffff;
      func_0x000109a84868(&uStack_c90);
    }
  }
  else {
    FUN_109a8a180(&uStack_c90,param_3,0xffffffff);
  }
  puVar21 = &uStack_c30;
  FUN_109a89cd4(puVar21,2,0xffffffff,1);
  puVar17 = puStack_c20;
  puVar32 = puStack_c80;
  piStack_cb0 = aiStack_ce8;
  puStack_ce0 = auStack_918;
  uStack_cc0 = 0;
  lStack_cb8 = 0;
  uStack_cf0 = 0x242ff4006;
  uStack_c98 = 8;
  uStack_ca0 = 0x18;
  bVar19 = (int)puVar21 != 7;
  aiStack_ce8[0] = 9;
  if (bVar19) {
    aiStack_ce8[0] = 3;
  }
  aiStack_ce8[1] = 3;
  puStack_cd0 = puStack_ce0 + (uint)(aiStack_ce8[0] * 0x18);
  puStack_cd8 = puStack_ce0;
  puStack_cc8 = puStack_cd0;
  puStack_ca8 = &uStack_ca0;
  if (bVar19) {
    if ((((uStack_c28._4_4_ != 1) && ((int)uStack_c28 != 1)) || (piStack_bf0[1] != piStack_c50[1]))
       || (*piStack_bf0 != *piStack_c50)) {
      puVar36 = (undefined4 *)0x44;
      func_0x000107c2ae8c();
      *puVar36 = 1;
      uStack_328 = puVar36 + 1;
      uStack_320 = 0x3c;
      *(undefined8 *)(puVar36 + 3) = 0x7c2031203d3d2073;
      *(undefined8 *)(puVar36 + 1) = 0x6c6f632e316d5f28;
      *(undefined1 *)(puVar36 + 0x10) = 0;
      *(undefined8 *)(puVar36 + 7) = 0x2931203d3d207377;
      *(undefined8 *)(puVar36 + 5) = 0x6f722e316d5f207c;
      *(undefined8 *)(puVar36 + 0xb) = 0x3d202928657a6973;
      *(undefined8 *)(puVar36 + 9) = 0x2e316d5f20262620;
      *(undefined8 *)(puVar36 + 0xe) = 0x2928657a69732e32;
      *(undefined8 *)(puVar36 + 0xc) = 0x6d5f203d3d202928;
      FUN_109ac3188(0xffffff29,&uStack_328,&UNK_10f5a2ac8,&UNK_10f5a2897,0x22b);
      goto LAB_109b9adc4;
    }
    puVar21 = &uStack_c30;
    FUN_109a89cd4(puVar21,2,0xffffffff,1);
    iVar20 = (int)puVar21;
    if (iVar20 < 1) {
      dVar43 = (1.0 / (double)iVar20) * 0.0;
      dVar37 = dVar43;
      dVar39 = dVar43;
      dVar41 = dVar43;
      dStack_d00 = dVar43;
      dStack_cf8 = dVar43;
    }
    else {
      uVar25 = (ulong)puVar21 & 0xffffffff;
      auVar64 = ZEXT216(0);
      uVar48 = 0;
      uVar49 = 0;
      uVar50 = 0;
      uVar51 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar55 = 0;
      uVar56 = 0;
      uVar57 = 0;
      uVar58 = 0;
      uVar59 = 0;
      uVar60 = 0;
      uVar61 = 0;
      uVar62 = 0;
      uVar63 = 0;
      pfVar26 = (float *)((long)puVar17 + 4);
      puVar27 = puVar32;
      uVar24 = uVar25;
      dVar37 = 0.0;
      do {
        dVar65 = (double)CONCAT17(uVar63,CONCAT16(uVar62,CONCAT15(uVar61,CONCAT14(uVar60,CONCAT13(
                                                  uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56)))))
                                                 ));
        dVar47 = (double)CONCAT17(uVar55,CONCAT16(uVar54,CONCAT15(uVar53,CONCAT14(uVar52,CONCAT13(
                                                  uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                                 ));
        pfVar31 = pfVar26 + -1;
        fVar44 = *pfVar26;
        dVar45 = (double)(float)((ulong)*puVar27 >> 0x20);
        dVar39 = auVar64._8_8_;
        auVar64._0_8_ = auVar64._0_8_ + (double)(float)*puVar27;
        auVar64._8_8_ = dVar39 + (double)*pfVar31;
        dVar39 = (double)CONCAT17(uVar55,CONCAT16(uVar54,CONCAT15(uVar53,CONCAT14(uVar52,CONCAT13(
                                                  uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                                 )) + dVar45;
        dVar41 = dVar37 + (double)fVar44;
        uVar48 = SUB81(dVar39,0);
        uVar49 = (undefined1)((ulong)dVar39 >> 8);
        uVar50 = (undefined1)((ulong)dVar39 >> 0x10);
        uVar51 = (undefined1)((ulong)dVar39 >> 0x18);
        uVar52 = (undefined1)((ulong)dVar39 >> 0x20);
        uVar53 = (undefined1)((ulong)dVar39 >> 0x28);
        uVar54 = (undefined1)((ulong)dVar39 >> 0x30);
        uVar55 = (undefined1)((ulong)dVar39 >> 0x38);
        uVar56 = SUB81(auVar64._8_8_,0);
        uVar57 = (undefined1)((ulong)auVar64._8_8_ >> 8);
        uVar58 = (undefined1)((ulong)auVar64._8_8_ >> 0x10);
        uVar59 = (undefined1)((ulong)auVar64._8_8_ >> 0x18);
        uVar60 = (undefined1)((ulong)auVar64._8_8_ >> 0x20);
        uVar61 = (undefined1)((ulong)auVar64._8_8_ >> 0x28);
        uVar62 = (undefined1)((ulong)auVar64._8_8_ >> 0x30);
        uVar63 = (undefined1)((ulong)auVar64._8_8_ >> 0x38);
        uVar24 = uVar24 - 1;
        pfVar26 = pfVar26 + 2;
        puVar27 = puVar27 + 1;
        dVar37 = dVar37 + (double)fVar44;
      } while (uVar24 != 0);
      dVar40 = 1.0 / (double)((ulong)puVar21 & 0xffffffff);
      dVar41 = dVar41 * dVar40;
      auVar66 = ZEXT216(0);
      puVar27 = puVar17;
      puVar29 = puVar32;
      do {
        uVar3 = *puVar27;
        fVar44 = (float)*puVar29;
        dVar43 = (double)fVar44 - auVar64._0_8_ * dVar40;
        dVar68 = (double)(float)(CONCAT17((char)((ulong)uVar3 >> 0x18),
                                          CONCAT16((char)((ulong)uVar3 >> 0x10),
                                                   CONCAT15((char)((ulong)uVar3 >> 8),
                                                            CONCAT14((char)uVar3,fVar44)))) >> 0x20)
                 - auVar64._8_8_ * dVar40;
        dVar37 = (double)(float)((ulong)*puVar29 >> 0x20) - dVar39 * dVar40;
        dVar70 = (double)(float)((ulong)uVar3 >> 0x20) - dVar41;
        dVar69 = auVar66._8_8_;
        auVar66._0_8_ = auVar66._0_8_ + SQRT(dVar37 * dVar37 + dVar43 * dVar43);
        auVar66._8_8_ = dVar69 + SQRT(dVar70 * dVar70 + dVar68 * dVar68);
        uVar25 = uVar25 - 1;
        puVar27 = puVar27 + 1;
        puVar29 = puVar29 + 1;
      } while (uVar25 != 0);
      dVar43 = auVar66._0_8_ * dVar40;
      dVar37 = auVar66._8_8_ * dVar40;
      dVar39 = auVar64._0_8_ * dVar40;
      dStack_d00 = (dVar47 + dVar45) * dVar40;
      dStack_cf8 = (dVar65 + (double)*pfVar31) * dVar40;
    }
    bVar19 = true;
    if ((1.1920928955078125e-07 <= dVar37) && (bVar19 = false, !NAN(dVar43))) {
      bVar19 = dVar43 < 1.1920928955078125e-07;
    }
    if (bVar19) goto LAB_109b9ab20;
    puVar38 = (undefined1 *)(1.4142135623730951 / dVar43);
    puVar36 = (undefined4 *)(1.4142135623730951 / dVar37);
    _bzero(&uStack_328,0x288);
    if (0 < iVar20) {
      uVar24 = 0;
      do {
        lVar23 = 0;
        adStack_810[1] =
             (double)puVar36 * ((double)*(float *)((long)(puVar17 + uVar24) + 4) - dVar41);
        dStack_830 = (double)puVar38 * ((double)*(float *)(puVar32 + uVar24) - dVar39);
        ppuStack_818 = (undefined8 **)
                       ((double)puVar38 *
                       ((double)*(float *)((long)(puVar32 + uVar24) + 4) - dStack_d00));
        adStack_810[0] = (double)puVar36 * ((double)*(float *)(puVar17 + uVar24) - dStack_cf8);
        ppuStack_838 = (undefined8 **)(adStack_810[1] * dStack_830);
        uStack_840 = dStack_830 * adStack_810[0];
        ppuStack_828 = (undefined8 **)((double)ppuStack_818 * adStack_810[0]);
        dStack_820 = adStack_810[1] * (double)ppuStack_818;
        adStack_810[2] = 1.0;
        dStack_948 = adStack_810[1];
        dStack_950 = adStack_810[0];
        uStack_940 = 0x3ff0000000000000;
        ppuStack_968 = (undefined8 **)((double)ppuStack_818 * adStack_810[0]);
        ppuStack_970 = (undefined8 **)dStack_830;
        ppuStack_958 = ppuStack_818;
        ppuStack_960 = (undefined8 **)(adStack_810[1] * (double)ppuStack_818);
        ppuStack_978 = (undefined8 **)(adStack_810[1] * dStack_830);
        uStack_980 = dStack_830 * adStack_810[0];
        puVar27 = &uStack_5b0;
        do {
          lVar35 = 0;
          dVar37 = (double)(&uStack_840)[lVar23];
          do {
            *(double *)((long)puVar27 + lVar35) =
                 *(double *)((long)&uStack_980 + lVar35) * dVar37 + 0.0;
            lVar35 = lVar35 + 8;
          } while (lVar35 != 0x48);
          lVar23 = lVar23 + 1;
          puVar27 = puVar27 + 9;
        } while (lVar23 != 9);
        lVar23 = 0;
        do {
          *(double *)((long)&uStack_328 + lVar23) =
               *(double *)((long)&uStack_328 + lVar23) + *(double *)((long)&uStack_5b0 + lVar23);
          lVar23 = lVar23 + 8;
        } while (lVar23 != 0x288);
        uVar24 = uVar24 + 1;
      } while (uVar24 != ((ulong)puVar21 & 0xffffffff));
    }
    uStack_ab0 = 0;
    pdStack_ac8 = (double *)0x0;
    pdStack_ad0 = (double *)0x0;
    lStack_ab8 = 0;
    uStack_ac0 = 0;
    uStack_ae8 = 0;
    uStack_af0 = 0;
    pdStack_ad8 = (double *)0x0;
    pdStack_ae0 = (double *)0x0;
    _bzero(&uStack_5b0,0x288);
    uStack_840 = (double)CONCAT44(uStack_840._4_4_,0xc1020006);
    dStack_830 = 1.9097962123134e-313;
    uStack_980 = (double)CONCAT44(uStack_980._4_4_,0xc2020006);
    ppuStack_970 = (undefined8 **)0x900000001;
    uStack_9e0 = (undefined4 *)CONCAT44(uStack_9e0._4_4_,0xc2020006);
    pdStack_9d0 = (double *)0x900000009;
    puStack_9d8 = &uStack_5b0;
    ppuStack_978 = (undefined8 **)&uStack_af0;
    ppuStack_838 = (undefined8 **)&uStack_328;
    FUN_109a59d88(&uStack_840,&uStack_980,&uStack_9e0);
    lVar23 = 0;
    do {
      if (ABS(*(double *)((long)&uStack_af0 + lVar23)) < 2.220446049250313e-16) {
        if (lVar23 != 0x40) goto LAB_109b9ab20;
        break;
      }
      lVar23 = lVar23 + 8;
    } while (lVar23 != 0x48);
    ppuStack_b28 = ppuStack_348;
    puStack_b30 = (undefined1 *)dStack_350;
    dStack_b18 = dStack_338;
    dStack_b20 = dStack_340;
    dStack_b10 = dStack_330;
    ppuStack_b48 = ppuStack_368;
    uStack_b50 = dStack_370;
    ppuStack_b38 = ppuStack_358;
    ppuStack_b40 = (undefined4 **)dStack_360;
    puStack_a80 = (undefined8 *)0x0;
    dStack_a88 = 0.0;
    uStack_a78 = 0;
    uStack_b70 = 0;
    plStack_b88 = (long *)0x0;
    plStack_b90 = (long *)0x0;
    lStack_b78 = 0;
    uStack_b80 = 0;
    uStack_ba8 = 0;
    uStack_bb0 = 0;
    pdStack_b98 = (double *)0x0;
    pdStack_ba0 = (double *)0x0;
    adStack_600[8] = 0.0;
    adStack_600[7] = 0.0;
    adStack_600[6] = 0.0;
    adStack_600[5] = 0.0;
    adStack_600[4] = 0.0;
    adStack_600[3] = 0.0;
    adStack_600[2] = 0.0;
    adStack_600[1] = 0.0;
    adStack_600[0] = 0.0;
    puStack_640 = &uStack_840;
    adStack_810[2] = (double)((ulong)puStack_640 | 8);
    ppuStack_838 = (undefined8 **)0x300000003;
    uStack_840 = 4.79933338649701e-314;
    adStack_810[1] = 0.0;
    adStack_810[0] = 0.0;
    uStack_7e8 = 8;
    uStack_7f0 = 0x18;
    dStack_830 = (double)&uStack_b50;
    puStack_a50 = &uStack_980;
    uStack_940 = (ulong)puStack_a50 | 8;
    ppuStack_978 = (undefined8 **)0x300000003;
    uStack_980 = 4.79933338649701e-314;
    dStack_948 = 0.0;
    dStack_950 = 0.0;
    uStack_928 = 8;
    uStack_930 = 0x18;
    ppuStack_960 = &puStack_b68;
    puStack_98 = &uStack_9e0;
    uStack_9a0 = (ulong)puStack_98 | 8;
    puStack_9d8 = (undefined8 *)((long)&MACH_HEADER.magic + 3);
    uStack_9e0 = (undefined4 *)0x242ff4006;
    lStack_9a8 = 0;
    uStack_9b0 = 0;
    uStack_988 = 8;
    uStack_990 = 8;
    puStack_9c0 = (undefined8 *)auStack_a70;
    puStack_a68 = &uStack_a40;
    uStack_a00 = (ulong)puStack_a68 | 8;
    uStack_a38 = 0x300000003;
    uStack_a40 = (undefined1 *)0x242ff4006;
    lStack_a08 = 0;
    uStack_a10 = 0;
    uStack_9e8 = 8;
    uStack_9f0 = 0x18;
    puStack_a20 = (undefined8 *)auStack_5b8;
    uStack_638 = 0;
    puStack_648 = (undefined4 *)CONCAT44(puStack_648._4_4_,0x1010000);
    dStack_a0._0_4_ = 0x2010000;
    uStack_90 = 0;
    auStack_a58[0] = 0x2010000;
    uStack_a48 = 0;
    auStack_a70[0] = 0x2010000;
    uStack_a60 = 0;
    pdStack_a30 = adStack_600;
    pdStack_a28 = adStack_600;
    puStack_a18 = puStack_a20;
    puStack_9f8 = &uStack_9f0;
    pdStack_9d0 = &dStack_a88;
    pdStack_9c8 = &dStack_a88;
    puStack_9b8 = (undefined4 *)puStack_9c0;
    puStack_998 = &uStack_990;
    ppuStack_970 = (undefined8 **)&uStack_bb0;
    ppuStack_968 = (undefined8 **)&uStack_bb0;
    ppuStack_958 = ppuStack_960;
    puStack_938 = &uStack_930;
    ppuStack_828 = (undefined8 **)dStack_830;
    dStack_820 = (double)&puStack_b08;
    ppuStack_818 = &puStack_b08;
    puStack_7f8 = &uStack_7f0;
    FUN_109a5c9ac(&puStack_648,&dStack_a0,auStack_a58,auStack_a70,0);
    if (((pdStack_9d0 == &dStack_a88) && (ppuStack_970 == (undefined8 **)&uStack_bb0)) &&
       (pdStack_a30 == adStack_600)) {
      if (lStack_a08 != 0) {
        piVar1 = (int *)(lStack_a08 + 0x14);
        do {
          iVar20 = *piVar1;
          cVar2 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = iVar20 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar20 + -1 == 0) {
          func_0x000109a848d4(&uStack_a40);
        }
      }
      lStack_a08 = 0;
      pdStack_a28 = (double *)0x0;
      pdStack_a30 = (double *)0x0;
      puStack_a18 = (undefined8 *)0x0;
      puStack_a20 = (undefined8 *)0x0;
      if (0 < uStack_a40._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)(uStack_a00 + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_a40._4_4_);
      }
      if (puStack_9f8 != &uStack_9f0 && puStack_9f8 != (undefined8 *)0x0) {
        _free(puStack_9f8[-1]);
      }
      if (lStack_9a8 != 0) {
        piVar1 = (int *)(lStack_9a8 + 0x14);
        do {
          iVar20 = *piVar1;
          cVar2 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = iVar20 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar20 + -1 == 0) {
          func_0x000109a848d4(&uStack_9e0);
        }
      }
      lStack_9a8 = 0;
      pdStack_9c8 = (double *)0x0;
      pdStack_9d0 = (double *)0x0;
      puStack_9b8 = (undefined4 *)0x0;
      puStack_9c0 = (undefined8 *)0x0;
      if (0 < uStack_9e0._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)(uStack_9a0 + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_9e0._4_4_);
      }
      if (puStack_998 != &uStack_990 && puStack_998 != (undefined8 *)0x0) {
        _free(puStack_998[-1]);
      }
      if (dStack_948 != 0.0) {
        piVar1 = (int *)((long)dStack_948 + 0x14);
        do {
          iVar20 = *piVar1;
          cVar2 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = iVar20 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar20 + -1 == 0) {
          func_0x000109a848d4(&uStack_980);
        }
      }
      dStack_948 = 0.0;
      ppuStack_968 = (undefined8 **)0x0;
      ppuStack_970 = (undefined8 **)0x0;
      ppuStack_958 = (undefined8 **)0x0;
      ppuStack_960 = (undefined8 **)0x0;
      if (0 < uStack_980._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)(uStack_940 + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_980._4_4_);
      }
      if (puStack_938 != &uStack_930 && puStack_938 != (undefined8 *)0x0) {
        _free(puStack_938[-1]);
      }
      if (adStack_810[1] != 0.0) {
        piVar1 = (int *)((long)adStack_810[1] + 0x14);
        do {
          iVar20 = *piVar1;
          cVar2 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = iVar20 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar20 + -1 == 0) {
          func_0x000109a848d4(&uStack_840);
        }
      }
      adStack_810[1] = 0.0;
      ppuStack_828 = (undefined8 **)0x0;
      dStack_830 = 0.0;
      ppuStack_818 = (undefined8 **)0x0;
      dStack_820 = 0.0;
      if (0 < uStack_840._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)((long)adStack_810[2] + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_840._4_4_);
      }
      if (puStack_7f8 != &uStack_7f0 && puStack_7f8 != (undefined8 *)0x0) {
        _free(puStack_7f8[-1]);
      }
      lVar23 = 0;
      uStack_a78 = 0;
      pdStack_9c8 = (double *)0x0;
      uStack_9a0 = 0;
      lStack_9a8 = 0;
      uStack_9b0 = 0;
      puStack_9b8 = (undefined4 *)0x0;
      pdStack_9d0 = (double *)0x0;
      puStack_9d8 = (undefined8 *)0x0;
      uStack_9e0 = (undefined4 *)dStack_a88;
      puStack_9c0 = puStack_a80;
      puVar21 = &uStack_bb0;
      do {
        lVar35 = 0;
        pdVar30 = (double *)&uStack_9e0;
        do {
          lVar33 = 0;
          dVar37 = 0.0;
          pdVar34 = pdVar30;
          do {
            dVar37 = dVar37 + *pdVar34 * *(double *)((long)puVar21 + lVar33);
            lVar33 = lVar33 + 8;
            pdVar34 = pdVar34 + 3;
          } while (lVar33 != 0x18);
          (&uStack_980)[lVar35 + lVar23 * 3] = dVar37;
          lVar35 = lVar35 + 1;
          pdVar30 = pdVar30 + 1;
        } while (lVar35 != 3);
        lVar23 = lVar23 + 1;
        puVar21 = puVar21 + 3;
      } while (lVar23 != 3);
      lVar23 = 0;
      puVar21 = &uStack_980;
      do {
        lVar35 = 0;
        pdVar30 = adStack_600;
        do {
          lVar33 = 0;
          dVar37 = 0.0;
          pdVar34 = pdVar30;
          do {
            dVar37 = dVar37 + *pdVar34 * *(double *)((long)puVar21 + lVar33);
            lVar33 = lVar33 + 8;
            pdVar34 = pdVar34 + 3;
          } while (lVar33 != 0x18);
          (&uStack_840)[lVar35 + lVar23 * 3] = dVar37;
          lVar35 = lVar35 + 1;
          pdVar30 = pdVar30 + 1;
        } while (lVar35 != 3);
        lVar23 = lVar23 + 1;
        puVar21 = puVar21 + 3;
      } while (lVar23 != 3);
      lVar23 = 0;
      ppuStack_b28 = ppuStack_818;
      puStack_b30 = (undefined1 *)dStack_820;
      dStack_b18 = adStack_810[1];
      dStack_b20 = adStack_810[0];
      dStack_b10 = adStack_810[2];
      ppuStack_b48 = ppuStack_838;
      uStack_b50 = uStack_840;
      ppuStack_b38 = ppuStack_828;
      ppuStack_b40 = (undefined4 **)dStack_830;
      uStack_9e0 = puVar36;
      puStack_9d8 = (undefined8 *)0x0;
      pdStack_9d0 = (double *)(-(double)puVar36 * dStack_cf8);
      pdStack_9c8 = (double *)0x0;
      puStack_9c0 = (undefined8 *)puVar36;
      puStack_9b8 = (undefined4 *)-((double)puVar36 * dVar41);
      lStack_9a8 = 0;
      uStack_9b0 = 0;
      uStack_9a0 = 0x3ff0000000000000;
      uStack_a40 = puVar38;
      uStack_a38 = 0;
      pdStack_a30 = (double *)-((double)puVar38 * dVar39);
      pdStack_a28 = (double *)0x0;
      puStack_a20 = (undefined8 *)puVar38;
      puStack_a18 = (undefined8 *)(-(double)puVar38 * dStack_d00);
      uStack_a00 = 0x3ff0000000000000;
      ppuVar28 = &puStack_648;
      puVar21 = &uStack_a40;
      lStack_a08 = 0;
      uStack_a10 = 0;
      do {
        lVar35 = 0;
        puVar32 = puVar21;
        do {
          *(undefined8 *)((long)ppuVar28 + lVar35) = *puVar32;
          lVar35 = lVar35 + 8;
          puVar32 = puVar32 + 3;
        } while (lVar35 != 0x18);
        lVar23 = lVar23 + 1;
        ppuVar28 = ppuVar28 + 3;
        puVar21 = puVar21 + 1;
      } while (lVar23 != 3);
      lVar23 = 0;
      ppuVar28 = &puStack_648;
      do {
        lVar35 = 0;
        pdVar30 = (double *)&uStack_b50;
        do {
          lVar33 = 0;
          dVar37 = 0.0;
          pdVar34 = pdVar30;
          do {
            dVar37 = dVar37 + *pdVar34 * *(double *)((long)ppuVar28 + lVar33);
            lVar33 = lVar33 + 8;
            pdVar34 = pdVar34 + 3;
          } while (lVar33 != 0x18);
          (&uStack_980)[lVar35 + lVar23 * 3] = dVar37;
          lVar35 = lVar35 + 1;
          pdVar30 = pdVar30 + 1;
        } while (lVar35 != 3);
        lVar23 = lVar23 + 1;
        ppuVar28 = ppuVar28 + 3;
      } while (lVar23 != 3);
      lVar23 = 0;
      puVar21 = &uStack_980;
      do {
        lVar35 = 0;
        pdVar30 = (double *)&uStack_9e0;
        do {
          lVar33 = 0;
          dVar37 = 0.0;
          pdVar34 = pdVar30;
          do {
            dVar37 = dVar37 + *pdVar34 * *(double *)((long)puVar21 + lVar33);
            lVar33 = lVar33 + 8;
            pdVar34 = pdVar34 + 3;
          } while (lVar33 != 0x18);
          (&uStack_840)[lVar35 + lVar23 * 3] = dVar37;
          lVar35 = lVar35 + 1;
          pdVar30 = pdVar30 + 1;
        } while (lVar35 != 3);
        lVar23 = lVar23 + 1;
        puVar21 = puVar21 + 3;
      } while (lVar23 != 3);
      dStack_b10 = adStack_810[2];
      ppuStack_b28 = ppuStack_818;
      puStack_b30 = (undefined1 *)dStack_820;
      dStack_b18 = adStack_810[1];
      dStack_b20 = adStack_810[0];
      ppuStack_b48 = ppuStack_838;
      uStack_b50 = uStack_840;
      ppuStack_b38 = ppuStack_828;
      ppuStack_b40 = (undefined4 **)dStack_830;
      if (1.1920928955078125e-07 < ABS(adStack_810[2])) {
        lVar23 = 0;
        do {
          *(double *)((long)&uStack_b50 + lVar23) =
               (1.0 / adStack_810[2]) * *(double *)((long)&uStack_b50 + lVar23);
          lVar23 = lVar23 + 8;
        } while (lVar23 != 0x48);
      }
      puStack_640 = &uStack_980;
      ppuStack_978 = (undefined8 **)0x300000003;
      uStack_980 = 4.79933338649701e-314;
      uStack_940 = (ulong)puStack_640 | 8;
      ppuStack_970 = (undefined8 **)0x0;
      ppuStack_968 = (undefined8 **)0x0;
      ppuStack_960 = (undefined8 **)0x0;
      dStack_950 = 0.0;
      dStack_948 = 0.0;
      uStack_928 = 0;
      uStack_930 = 0;
      adStack_810[2] = (double)((ulong)&uStack_840 | 8);
      dStack_830 = (double)&uStack_b50;
      adStack_810[1] = 0.0;
      adStack_810[0] = 0.0;
      ppuStack_838 = (undefined8 **)0x300000003;
      uStack_840 = 4.79933338649701e-314;
      uStack_7e8 = 8;
      uStack_7f0 = 0x18;
      puStack_648 = (undefined4 *)CONCAT44(puStack_648._4_4_,0x2010000);
      uStack_638 = 0;
      puStack_938 = &uStack_930;
      ppuStack_828 = (undefined8 **)dStack_830;
      dStack_820 = (double)&puStack_b08;
      ppuStack_818 = &puStack_b08;
      puStack_7f8 = &uStack_7f0;
      FUN_109a479a0(&uStack_840,&puStack_648);
      if (adStack_810[1] != 0.0) {
        piVar1 = (int *)((long)adStack_810[1] + 0x14);
        do {
          iVar20 = *piVar1;
          cVar2 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = iVar20 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar20 + -1 == 0) {
          func_0x000109a848d4(&uStack_840);
        }
      }
      adStack_810[1] = 0.0;
      ppuStack_828 = (undefined8 **)0x0;
      dStack_830 = 0.0;
      ppuStack_818 = (undefined8 **)0x0;
      dStack_820 = 0.0;
      if (0 < uStack_840._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)((long)adStack_810[2] + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_840._4_4_);
      }
      if (puStack_7f8 != &uStack_7f0 && puStack_7f8 != (undefined8 *)0x0) {
        _free(puStack_7f8[-1]);
      }
      uStack_840 = (double)CONCAT44(uStack_840._4_4_,0x2010000);
      ppuStack_838 = (undefined8 **)&uStack_cf0;
      dStack_830 = 0.0;
      FUN_109a479a0(&uStack_980,&uStack_840);
      if (dStack_948 != 0.0) {
        piVar1 = (int *)((long)dStack_948 + 0x14);
        do {
          iVar20 = *piVar1;
          cVar2 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = iVar20 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar20 + -1 == 0) {
          func_0x000109a848d4(&uStack_980);
        }
      }
      dStack_948 = 0.0;
      ppuStack_968 = (undefined8 **)0x0;
      ppuStack_970 = (undefined8 **)0x0;
      ppuStack_958 = (undefined8 **)0x0;
      ppuStack_960 = (undefined8 **)0x0;
      if (0 < uStack_980._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)(uStack_940 + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_980._4_4_);
      }
      if (puStack_938 != &uStack_930 && puStack_938 != (undefined8 *)0x0) {
        _free(puStack_938[-1]);
      }
      puVar36 = (undefined4 *)0x1;
      goto LAB_109b9aa5c;
    }
  }
  else {
    lVar23 = 0;
    ppuStack_970 = (undefined8 **)&uStack_840;
    uStack_940 = (ulong)&uStack_980 | 8;
    dStack_948 = 0.0;
    dStack_950 = 0.0;
    uStack_928 = 8;
    uStack_930 = 0x48;
    ppuStack_960 = (undefined8 **)&puStack_648;
    uStack_9a0 = (ulong)&uStack_9e0 | 8;
    pdStack_9d0 = (double *)&uStack_328;
    lStack_9a8 = 0;
    uStack_9b0 = 0;
    uStack_9e8 = 8;
    uStack_9f0 = 0x48;
    puStack_9d8 = (undefined8 *)0x900000007;
    uStack_9e0 = (undefined4 *)0x242ff4006;
    uStack_988 = 8;
    uStack_990 = 0x48;
    ppuStack_978 = (undefined8 **)0x900000007;
    uStack_980 = 4.79933338649701e-314;
    puStack_9c0 = (undefined8 *)auStack_130;
    uStack_a00 = (ulong)&uStack_a40 | 8;
    pdStack_a30 = (double *)&uStack_5b0;
    lStack_a08 = 0;
    uStack_a10 = 0;
    uStack_a38 = 0x900000009;
    uStack_a40 = (undefined1 *)0x242ff4006;
    puStack_a20 = &uStack_328;
    uStack_ab0 = (ulong)&uStack_af0 | 8;
    pdStack_ae0 = adStack_600;
    lStack_ab8 = 0;
    uStack_ac0 = 0;
    uStack_ae8 = 0x100000007;
    uStack_af0 = 0x242ff4006;
    uStack_a98 = 8;
    uStack_aa0 = 8;
    pdStack_ad0 = adStack_600 + 7;
    dStack_b10 = (double)((ulong)&uStack_b50 | 8);
    ppuStack_b40 = &puStack_648;
    dStack_b18 = 0.0;
    dStack_b20 = 0.0;
    uStack_b58 = 8;
    uStack_b60 = 0x18;
    ppuStack_b48 = (undefined8 **)0x400000001;
    uStack_b50 = 4.79933338649701e-314;
    uStack_af8 = 8;
    uStack_b00 = 0x20;
    puStack_b30 = auStack_628;
    uStack_b70 = (ulong)&uStack_bb0 | 8;
    pdStack_ba0 = &dStack_a0;
    uStack_b80 = 0;
    lStack_b78 = 0;
    uStack_ba8 = 0x300000001;
    uStack_bb0 = 0x242ff4006;
    plStack_b90 = alStack_88;
    pfVar26 = (float *)((long)puStack_c80 + 4);
    puVar21 = puStack_c20;
    do {
      dVar37 = (double)pfVar26[-1];
      dVar39 = (double)*pfVar26;
      dVar41 = (double)(float)*puVar21;
      dVar43 = (double)(float)((ulong)*puVar21 >> 0x20);
      *(double *)((long)&ppuStack_838 + lVar23) = dVar43 * dVar37;
      *(double *)((long)ppuStack_970 + lVar23) = dVar41 * dVar37;
      *(double *)((long)&dStack_830 + lVar23) = dVar37;
      *(double *)((long)&dStack_820 + lVar23) = dVar43 * dVar39;
      *(double *)((long)&ppuStack_828 + lVar23) = dVar41 * dVar39;
      *(double *)((long)&ppuStack_818 + lVar23) = dVar39;
      *(double *)((long)adStack_810 + lVar23 + 8) = dVar43;
      *(double *)((long)adStack_810 + lVar23) = dVar41;
      *(undefined8 *)((long)adStack_810 + lVar23 + 0x10) = 0x3ff0000000000000;
      lVar23 = lVar23 + 0x48;
      pfVar26 = pfVar26 + 2;
      puVar21 = puVar21 + 1;
    } while (lVar23 != 0x1f8);
    uStack_a48 = 0;
    auStack_a58[0] = 0x1010000;
    puStack_a50 = &uStack_980;
    auStack_a70[0] = 0x2010000;
    puStack_a68 = &uStack_af0;
    uStack_a60 = 0;
    dStack_a88 = (double)CONCAT44(dStack_a88._4_4_,0x2010000);
    puStack_a80 = &uStack_9e0;
    uStack_a78 = 0;
    auStack_bc8[0] = 0x2010000;
    puStack_bc0 = &uStack_a40;
    uStack_bb8 = 0;
    pdStack_b98 = pdStack_ba0;
    plStack_b88 = plStack_b90;
    puStack_b68 = &uStack_b60;
    ppuStack_b38 = (undefined8 **)ppuStack_b40;
    ppuStack_b28 = (undefined8 **)puStack_b30;
    puStack_b08 = &uStack_b00;
    pdStack_ad8 = pdStack_ae0;
    pdStack_ac8 = pdStack_ad0;
    puStack_aa8 = &uStack_aa0;
    pdStack_a28 = pdStack_a30;
    puStack_a18 = puStack_a20;
    puStack_9f8 = &uStack_9f0;
    pdStack_9c8 = pdStack_9d0;
    puStack_9b8 = (undefined4 *)puStack_9c0;
    puStack_998 = &uStack_990;
    ppuStack_968 = ppuStack_970;
    ppuStack_958 = ppuStack_960;
    puStack_938 = &uStack_930;
    FUN_109a5c9ac(auStack_a58,auStack_a70,&dStack_a88,auStack_bc8,5);
    lVar23 = 0;
    do {
      *(double *)(auStack_3b8 + lVar23) =
           *(double *)(auStack_3b8 + lVar23) - *(double *)((long)&dStack_370 + lVar23);
      lVar23 = lVar23 + 8;
    } while (lVar23 != 0x48);
    auVar15._8_8_ = dStack_340;
    auVar15._0_8_ = ppuStack_348;
    auVar16._8_8_ = dStack_330;
    auVar16._0_8_ = dStack_338;
    auVar14._8_8_ = dStack_350;
    auVar14._0_8_ = ppuStack_358;
    auVar9._8_8_ = dStack_380;
    auVar9._0_8_ = dStack_388;
    auVar13._8_8_ = dStack_370;
    auVar13._0_8_ = dStack_378;
    auVar12._8_8_ = dStack_370;
    auVar12._0_8_ = dStack_378;
    auVar11._8_8_ = dStack_370;
    auVar11._0_8_ = dStack_378;
    auVar10._8_8_ = dStack_370;
    auVar10._0_8_ = dStack_378;
    dVar43 = auStack_3b8._8_8_;
    dVar37 = -(double)ppuStack_368;
    dVar39 = -dVar43;
    uVar48 = (undefined1)((ulong)dVar39 >> 8);
    uVar49 = (undefined1)((ulong)dVar39 >> 0x10);
    uVar50 = (undefined1)((ulong)dVar39 >> 0x18);
    uVar51 = (undefined1)((ulong)dVar39 >> 0x20);
    uVar52 = (undefined1)((ulong)dVar39 >> 0x28);
    uVar53 = (undefined1)((ulong)dVar39 >> 0x30);
    uVar54 = (undefined1)((ulong)dVar39 >> 0x38);
    auVar8._8_8_ = dStack_390;
    auVar8._0_8_ = dStack_398;
    auVar7._8_8_ = dStack_390;
    auVar7._0_8_ = dStack_398;
    auVar64 = NEON_ext(auVar7,auVar15,8,1);
    auVar67 = NEON_ext(auVar10,auVar11,8,1);
    auVar66 = NEON_ext(auVar15,auVar9,8,1);
    auVar4._8_8_ = -auVar64._8_8_;
    auVar4._0_8_ = -auVar64._0_8_;
    auVar5._8_8_ = -auVar64._8_8_;
    auVar5._0_8_ = -auVar64._0_8_;
    auVar72 = NEON_ext(auVar4,auVar5,8,1);
    dVar65 = auVar66._0_8_;
    dVar45 = auVar66._8_8_;
    auVar64 = NEON_ext(auVar14,auVar8,8,1);
    auVar66 = NEON_ext(auVar16,auVar12,8,1);
    dVar75 = auVar66._0_8_;
    dVar76 = auVar66._8_8_;
    dVar69 = dVar65 * auVar72._0_8_ + dVar75 * (double)ppuStack_358;
    dVar70 = dVar45 * auVar72._8_8_ + dVar76 * dStack_3a0;
    dVar40 = auVar64._0_8_;
    dVar68 = auVar64._8_8_;
    dVar71 = dStack_338 * auVar72._0_8_ + dVar75 * dVar40;
    dVar74 = dStack_380 * auVar72._8_8_ + dVar76 * dVar68;
    dVar77 = dVar65 * -dVar40 + dStack_338 * (double)ppuStack_358;
    dVar78 = dVar45 * -dVar68 + dStack_380 * dStack_3a0;
    dStack_630 = dVar69 * dVar37 + dVar71 * dStack_370 + dVar77 * dStack_360;
    auVar72[8] = SUB81(dVar39,0);
    auVar72._0_8_ = dVar37;
    auVar72[9] = uVar48;
    auVar72[10] = uVar49;
    auVar72[0xb] = uVar50;
    auVar72[0xc] = uVar51;
    auVar72[0xd] = uVar52;
    auVar72[0xe] = uVar53;
    auVar72[0xf] = uVar54;
    auVar79[8] = SUB81(dVar39,0);
    auVar79._0_8_ = dVar37;
    auVar79[9] = uVar48;
    auVar79[10] = uVar49;
    auVar79[0xb] = uVar50;
    auVar79[0xc] = uVar51;
    auVar79[0xd] = uVar52;
    auVar79[0xe] = uVar53;
    auVar79[0xf] = uVar54;
    auVar66 = NEON_ext(auVar72,auVar79,8,1);
    auVar72 = NEON_ext(auVar16,auStack_3b8,8,1);
    auVar79 = NEON_ext(auVar13,auStack_3b8,8,1);
    auVar46._0_8_ = -dStack_3a8;
    auVar46._8_8_ = -dStack_360;
    auVar64 = NEON_ext(auVar46,auVar46,8,1);
    dVar41 = auVar64._0_8_;
    dVar47 = auVar64._8_8_;
    auVar73._0_8_ = -(double)ppuStack_358;
    auVar73._8_8_ = -dStack_3a0;
    auVar64 = NEON_ext(auVar73,auVar73,8,1);
    dVar69 = dVar69 * auVar66._0_8_ + dVar71 * auStack_3b8._0_8_ + dVar77 * dStack_3a8 +
             (dStack_338 * dVar41 + dVar75 * (double)ppuStack_368) * auVar64._0_8_ +
             (dVar65 * dVar41 + auVar72._0_8_ * auVar67._0_8_) * dStack_398;
    dVar71 = dVar70 * auVar66._8_8_ + dVar74 * dStack_370 + dVar78 * dStack_360 +
             (dStack_380 * dVar47 + dVar76 * dVar43) * auVar64._8_8_ +
             (dVar45 * dVar47 + auVar72._8_8_ * auVar67._8_8_) * dStack_350;
    dVar75 = auVar79._0_8_;
    dVar76 = auVar79._8_8_;
    auVar42._0_8_ = -dStack_338;
    auVar42._8_8_ = -dStack_380;
    auVar64 = NEON_ext(auVar42,auVar42,8,1);
    dVar37 = (dVar69 - (dVar65 * dVar37 + dStack_338 * dVar75) * dVar69) +
             (dVar40 * dVar41 + (double)ppuStack_348 * (double)ppuStack_368) * dStack_388 +
             ((double)ppuStack_358 * dVar41 + (double)ppuStack_348 * dVar75) * auVar64._0_8_ +
             ((double)ppuStack_358 * dVar37 + dVar40 * dVar75) * dStack_378;
    dVar41 = (dVar71 - (dVar45 * dVar39 + dStack_380 * dVar76) * dVar71) +
             (dVar68 * dVar47 + dStack_390 * dVar43) * dStack_340 +
             (dStack_3a0 * dVar47 + dStack_390 * dVar76) * auVar64._8_8_ +
             (dStack_3a0 * dVar39 + dVar68 * dVar76) * dStack_330;
    auVar67._8_8_ = dVar41;
    auVar67._0_8_ = dVar37;
    auVar6._8_8_ = dVar41;
    auVar6._0_8_ = dVar37;
    auVar64 = NEON_ext(auVar67,auVar6,8,1);
    uStack_638 = auVar64._8_8_;
    puStack_640 = auVar64._0_8_;
    puStack_648 = (undefined4 *)(dVar70 * dVar39 + auStack_3b8._0_8_ * dVar74 + dStack_3a8 * dVar78)
    ;
    uStack_a48 = 0;
    auStack_a58[0] = 0x1010000;
    puStack_a50 = &uStack_b50;
    auStack_a70[0] = 0x2010000;
    puStack_a68 = &uStack_bb0;
    uStack_a60 = 0;
    puVar36 = auStack_a58;
    FUN_109a62ecc(puVar36,auStack_a70);
    if ((int)puVar36 - 1U < 3) {
      uVar24 = 0;
      puVar38 = auStack_918;
      do {
        dVar37 = (&dStack_a0)[uVar24];
        dVar39 = dStack_330 + dVar37 * dStack_378;
        if (ABS(dVar39) <= 2.220446049250313e-16) {
          dVar39 = 1.0;
          uVar48 = 0;
          uVar49 = 0;
        }
        else {
          uVar48 = 0xf0;
          uVar49 = 0x3f;
          dVar39 = 1.0 / dVar39;
          dVar37 = dVar37 * dVar39;
        }
        *(ulong *)(puVar38 + 0x40) = (ulong)CONCAT11(uVar49,uVar48) << 0x30;
        lVar23 = 0x1f8;
        pdVar30 = (double *)auStack_3b8;
        do {
          dVar41 = *pdVar30;
          dVar43 = pdVar30[9];
          *(double *)(puVar38 + lVar23 + -0x1f0) = pdVar30[10] * dVar39 + pdVar30[1] * dVar37;
          *(double *)(puVar38 + lVar23 + -0x1f8) = dVar43 * dVar39 + dVar41 * dVar37;
          lVar23 = lVar23 + 0x10;
          pdVar30 = pdVar30 + 2;
        } while (lVar23 != 0x238);
        uVar24 = uVar24 + 1;
        puVar38 = puVar38 + 0x48;
      } while (uVar24 != ((ulong)puVar36 & 0xffffffff));
    }
    if (lStack_b78 != 0) {
      piVar1 = (int *)(lStack_b78 + 0x14);
      do {
        iVar20 = *piVar1;
        cVar2 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = iVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar20 + -1 == 0) {
        func_0x000109a848d4(&uStack_bb0);
      }
    }
    lStack_b78 = 0;
    pdStack_b98 = (double *)0x0;
    pdStack_ba0 = (double *)0x0;
    plStack_b88 = (long *)0x0;
    plStack_b90 = (long *)0x0;
    if (0 < uStack_bb0._4_4_) {
      lVar23 = 0;
      do {
        *(undefined4 *)(uStack_b70 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_bb0._4_4_);
    }
    if (puStack_b68 != &uStack_b60 && puStack_b68 != (undefined8 *)0x0) {
      _free(puStack_b68[-1]);
    }
    if (dStack_b18 != 0.0) {
      piVar1 = (int *)((long)dStack_b18 + 0x14);
      do {
        iVar20 = *piVar1;
        cVar2 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = iVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar20 + -1 == 0) {
        func_0x000109a848d4(&uStack_b50);
      }
    }
    dStack_b18 = 0.0;
    ppuStack_b38 = (undefined8 **)0x0;
    ppuStack_b40 = (undefined4 **)0x0;
    ppuStack_b28 = (undefined8 **)0x0;
    puStack_b30 = (undefined1 *)0x0;
    if (0 < uStack_b50._4_4_) {
      lVar23 = 0;
      do {
        *(undefined4 *)((long)dStack_b10 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_b50._4_4_);
    }
    if (puStack_b08 != &uStack_b00 && puStack_b08 != (undefined8 *)0x0) {
      _free(puStack_b08[-1]);
    }
    if (lStack_ab8 != 0) {
      piVar1 = (int *)(lStack_ab8 + 0x14);
      do {
        iVar20 = *piVar1;
        cVar2 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = iVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar20 + -1 == 0) {
        func_0x000109a848d4(&uStack_af0);
      }
    }
    lStack_ab8 = 0;
    pdStack_ad8 = (double *)0x0;
    pdStack_ae0 = (double *)0x0;
    pdStack_ac8 = (double *)0x0;
    pdStack_ad0 = (double *)0x0;
    if (0 < uStack_af0._4_4_) {
      lVar23 = 0;
      do {
        *(undefined4 *)(uStack_ab0 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_af0._4_4_);
    }
    if (puStack_aa8 != &uStack_aa0 && puStack_aa8 != (undefined8 *)0x0) {
      _free(puStack_aa8[-1]);
    }
    if (lStack_a08 != 0) {
      piVar1 = (int *)(lStack_a08 + 0x14);
      do {
        iVar20 = *piVar1;
        cVar2 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = iVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar20 + -1 == 0) {
        func_0x000109a848d4(&uStack_a40);
      }
    }
    lStack_a08 = 0;
    pdStack_a28 = (double *)0x0;
    pdStack_a30 = (double *)0x0;
    puStack_a18 = (undefined8 *)0x0;
    puStack_a20 = (undefined8 *)0x0;
    if (0 < uStack_a40._4_4_) {
      lVar23 = 0;
      do {
        *(undefined4 *)(uStack_a00 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_a40._4_4_);
    }
    if (puStack_9f8 != &uStack_9f0 && puStack_9f8 != (undefined8 *)0x0) {
      _free(puStack_9f8[-1]);
    }
    if (lStack_9a8 != 0) {
      piVar1 = (int *)(lStack_9a8 + 0x14);
      do {
        iVar20 = *piVar1;
        cVar2 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = iVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar20 + -1 == 0) {
        func_0x000109a848d4(&uStack_9e0);
      }
    }
    lStack_9a8 = 0;
    pdStack_9c8 = (double *)0x0;
    pdStack_9d0 = (double *)0x0;
    puStack_9b8 = (undefined4 *)0x0;
    puStack_9c0 = (undefined8 *)0x0;
    if (0 < uStack_9e0._4_4_) {
      lVar23 = 0;
      do {
        *(undefined4 *)(uStack_9a0 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_9e0._4_4_);
    }
    if (puStack_998 != &uStack_990 && puStack_998 != (undefined8 *)0x0) {
      _free(puStack_998[-1]);
    }
    if (dStack_948 != 0.0) {
      piVar1 = (int *)((long)dStack_948 + 0x14);
      do {
        iVar20 = *piVar1;
        cVar2 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = iVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar20 + -1 == 0) {
        func_0x000109a848d4(&uStack_980);
      }
    }
    dStack_948 = 0.0;
    ppuStack_968 = (undefined8 **)0x0;
    ppuStack_970 = (undefined8 **)0x0;
    ppuStack_958 = (undefined8 **)0x0;
    ppuStack_960 = (undefined8 **)0x0;
    if (0 < uStack_980._4_4_) {
      lVar23 = 0;
      do {
        *(undefined4 *)(uStack_940 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_980._4_4_);
    }
    if (puStack_938 == &uStack_930 || puStack_938 == (undefined8 *)0x0) {
LAB_109b9aa5c:
      if ((int)puVar36 == 0) goto LAB_109b9ab20;
LAB_109b9aa60:
      uStack_5b0._4_4_ = (int)puVar36 * 3;
      uStack_5b0._0_4_ = 0;
      uStack_840 = NAN;
      FUN_109a84930(&uStack_328,&uStack_cf0,&uStack_5b0,&uStack_840);
      FUN_109a479a0(&uStack_328,param_4);
      if (lStack_2f0 != 0) {
        piVar1 = (int *)(lStack_2f0 + 0x14);
        do {
          iVar20 = *piVar1;
          cVar2 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = iVar20 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar20 + -1 == 0) {
          func_0x000109a848d4(&uStack_328);
        }
      }
      lStack_2f0 = 0;
      uStack_310 = 0;
      uStack_318 = 0;
      uStack_300 = 0;
      uStack_308 = 0;
      if (0 < uStack_328._4_4_) {
        lVar23 = 0;
        do {
          *(undefined4 *)(lStack_2e8 + lVar23 * 4) = 0;
          lVar23 = lVar23 + 1;
        } while (lVar23 < uStack_328._4_4_);
      }
      if (puStack_2e0 != auStack_2d8 && puStack_2e0 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_2e0 + -8));
      }
    }
    else {
      _free(puStack_938[-1]);
      if ((int)puVar36 != 0) goto LAB_109b9aa60;
LAB_109b9ab20:
      FUN_109a8e944(param_4);
      puVar36 = (undefined4 *)0x0;
    }
    if (lStack_cb8 != 0) {
      piVar1 = (int *)(lStack_cb8 + 0x14);
      do {
        iVar20 = *piVar1;
        cVar2 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = iVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar20 + -1 == 0) {
        func_0x000109a848d4(&uStack_cf0);
      }
    }
    lStack_cb8 = 0;
    puStack_cd8 = (undefined1 *)0x0;
    puStack_ce0 = (undefined1 *)0x0;
    puStack_cc8 = (undefined1 *)0x0;
    puStack_cd0 = (undefined1 *)0x0;
    if (0 < uStack_cf0._4_4_) {
      lVar23 = 0;
      do {
        piStack_cb0[lVar23] = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_cf0._4_4_);
    }
    if (puStack_ca8 != &uStack_ca0 && puStack_ca8 != (undefined8 *)0x0) {
      _free(puStack_ca8[-1]);
    }
    if (uStack_c58 != 0) {
      piVar1 = (int *)(uStack_c58 + 0x14);
      do {
        iVar20 = *piVar1;
        cVar2 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = iVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar20 + -1 == 0) {
        func_0x000109a848d4(&uStack_c90);
      }
    }
    uStack_c58 = 0;
    uStack_c78 = 0;
    puStack_c80 = (undefined8 *)0x0;
    uStack_c68 = 0;
    uStack_c70 = 0;
    if (0 < uStack_c90._4_4_) {
      lVar23 = 0;
      do {
        piStack_c50[lVar23] = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_c90._4_4_);
    }
    if (puStack_c48 != &uStack_c40 && puStack_c48 != (undefined8 *)0x0) {
      _free(puStack_c48[-1]);
    }
    if (uStack_bf8 != 0) {
      piVar1 = (int *)(uStack_bf8 + 0x14);
      do {
        iVar20 = *piVar1;
        cVar2 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = iVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar20 + -1 == 0) {
        func_0x000109a848d4(&uStack_c30);
      }
    }
    uStack_bf8 = 0;
    uStack_c18 = 0;
    puStack_c20 = (undefined8 *)0x0;
    uStack_c08 = 0;
    uStack_c10 = 0;
    if (0 < uStack_c30._4_4_) {
      lVar23 = 0;
      do {
        piStack_bf0[lVar23] = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < uStack_c30._4_4_);
    }
    if (puStack_be8 != &uStack_be0 && puStack_be8 != (undefined8 *)0x0) {
      _free(puStack_be8[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_88[0]) {
      return puVar36;
    }
    ___stack_chk_fail();
  }
  puVar36 = (undefined4 *)0x64;
  func_0x000107c2ae8c();
  *puVar36 = 1;
  puStack_648 = puVar36 + 1;
  puStack_640 = (undefined8 *)0x5e;
  *(undefined8 *)(puVar36 + 0xb) = 0x6168637528203d3d;
  *(undefined8 *)(puVar36 + 9) = 0x20617461642e755f;
  *(undefined8 *)(puVar36 + 0xf) = 0x202626205d305b6c;
  *(undefined8 *)(puVar36 + 0xd) = 0x61762e7526292a72;
  *(undefined8 *)(puVar36 + 0x13) = 0x68637528203d3d20;
  *(undefined8 *)(puVar36 + 0x11) = 0x617461642e74765f;
  *(undefined8 *)((long)puVar36 + 0x5a) = 0x5d305b6c61762e74;
  *(undefined8 *)((long)puVar36 + 0x52) = 0x7626292a72616863;
  *(undefined8 *)(puVar36 + 3) = 0x6168637528203d3d;
  *(undefined8 *)(puVar36 + 1) = 0x20617461642e775f;
  *(undefined1 *)((long)puVar36 + 0x62) = 0;
  *(undefined8 *)(puVar36 + 7) = 0x202626205d305b6c;
  *(undefined8 *)(puVar36 + 5) = 0x61762e7726292a72;
  FUN_109ac3188(0xffffff29,&puStack_648,&DAT_10f556389,&UNK_10f5a2b31,0x132);
LAB_109b9adc4:
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x109b9adc8);
  (*pcVar18)();
}



/* Entry: 109b9af28; end: 109b9b533;  */

void FUN_109b9af28(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  float *pfStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  double *pdStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar11 = *(ulong **)(param_2 + 2);
    uStack_70 = (ulong)&uStack_b0 | 8;
    uStack_a8 = puVar11[1];
    uStack_b0 = *puVar11;
    uStack_98 = puVar11[3];
    puStack_a0 = (undefined8 *)puVar11[2];
    uStack_88 = puVar11[5];
    uStack_90 = puVar11[4];
    uStack_78 = puVar11[7];
    uStack_80 = puVar11[6];
    puStack_68 = &uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    if (puVar11[7] != 0) {
      piVar1 = (int *)(puVar11[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      uStack_60 = *(undefined8 *)puVar11[9];
      uStack_58 = ((undefined8 *)puVar11[9])[1];
    }
    else {
      uStack_b0 = uStack_b0 & 0xffffffff;
      func_0x000109a84868(&uStack_b0);
    }
  }
  else {
    FUN_109a8a180(&uStack_b0,param_2,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar11 = *(ulong **)(param_3 + 2);
    uStack_d0 = (ulong)&uStack_110 | 8;
    uStack_108 = puVar11[1];
    uStack_110 = *puVar11;
    uStack_f8 = puVar11[3];
    puStack_100 = (undefined8 *)puVar11[2];
    uStack_e8 = puVar11[5];
    uStack_f0 = puVar11[4];
    uStack_d8 = puVar11[7];
    uStack_e0 = puVar11[6];
    puStack_c8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    if (puVar11[7] != 0) {
      piVar1 = (int *)(puVar11[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      uStack_c0 = *(undefined8 *)puVar11[9];
      uStack_b8 = ((undefined8 *)puVar11[9])[1];
    }
    else {
      uStack_110 = uStack_110 & 0xffffffff;
      func_0x000109a84868(&uStack_110);
    }
  }
  else {
    FUN_109a8a180(&uStack_110,param_3,0xffffffff);
  }
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar11 = *(ulong **)(param_4 + 2);
    uStack_130 = (ulong)&uStack_170 | 8;
    uStack_168 = puVar11[1];
    uStack_170 = *puVar11;
    uStack_158 = puVar11[3];
    pdStack_160 = (double *)puVar11[2];
    uStack_148 = puVar11[5];
    uStack_150 = puVar11[4];
    uStack_138 = puVar11[7];
    uStack_140 = puVar11[6];
    puStack_128 = &uStack_120;
    uStack_120 = 0;
    uStack_118 = 0;
    if (puVar11[7] != 0) {
      piVar1 = (int *)(puVar11[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      uStack_120 = *(undefined8 *)puVar11[9];
      uStack_118 = ((undefined8 *)puVar11[9])[1];
    }
    else {
      uStack_170 = uStack_170 & 0xffffffff;
      func_0x000109a84868(&uStack_170);
    }
  }
  else {
    FUN_109a8a180(&uStack_170,param_4,0xffffffff);
  }
  puVar10 = &uStack_b0;
  FUN_109a89cd4(puVar10,2,0xffffffff,1);
  puVar15 = puStack_a0;
  puVar16 = puStack_100;
  pdVar9 = pdStack_160;
  FUN_109a8f64c(param_5,puVar10,1,5,0xffffffff,0,0);
  if ((*param_5 & 0x1f0000) == 0x10000) {
    puVar11 = *(ulong **)(param_5 + 2);
    uStack_190 = (ulong)&uStack_1d0 | 8;
    uStack_1c8 = puVar11[1];
    uStack_1d0 = *puVar11;
    uStack_1b8 = puVar11[3];
    pfStack_1c0 = (float *)puVar11[2];
    uStack_1a8 = puVar11[5];
    uStack_1b0 = puVar11[4];
    uStack_198 = puVar11[7];
    uStack_1a0 = puVar11[6];
    puStack_188 = &uStack_180;
    uStack_180 = 0;
    uStack_178 = 0;
    if (puVar11[7] != 0) {
      piVar1 = (int *)(puVar11[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      uStack_180 = *(undefined8 *)puVar11[9];
      uStack_178 = ((undefined8 *)puVar11[9])[1];
    }
    else {
      uStack_1d0 = uStack_1d0 & 0xffffffff;
      func_0x000109a84868(&uStack_1d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_1d0,param_5,0xffffffff);
  }
  pfVar14 = pfStack_1c0;
  if (uStack_198 != 0) {
    piVar1 = (int *)(uStack_198 + 0x14);
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
      func_0x000109a848d4(&uStack_1d0);
    }
  }
  uStack_198 = 0;
  uStack_1b8 = 0;
  pfStack_1c0 = (float *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  if (0 < uStack_1d0._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_190 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_1d0._4_4_);
  }
  if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
    _free(puStack_188[-1]);
  }
  if (0 < (int)puVar10) {
    dVar26 = pdVar9[2];
    dVar25 = pdVar9[1];
    dVar7 = pdVar9[6];
    dVar6 = pdVar9[5];
    uVar13 = (ulong)puVar10 & 0xffffffff;
    dVar24 = *pdVar9;
    dVar27 = pdVar9[3];
    dVar8 = pdVar9[7];
    uVar17 = (undefined1)((ulong)dVar8 >> 8);
    uVar18 = (undefined1)((ulong)dVar8 >> 0x10);
    uVar19 = (undefined1)((ulong)dVar8 >> 0x18);
    uVar20 = (undefined1)((ulong)dVar8 >> 0x20);
    uVar21 = (undefined1)((ulong)dVar8 >> 0x28);
    uVar22 = (undefined1)((ulong)dVar8 >> 0x30);
    uVar23 = (undefined1)((ulong)dVar8 >> 0x38);
    auVar28._8_8_ = dVar27;
    auVar28._0_8_ = dVar25;
    auVar34._8_8_ = dVar27;
    auVar34._0_8_ = dVar25;
    auVar28 = NEON_ext(auVar28,auVar34,8,1);
    dVar29 = pdVar9[4];
    dVar5 = pdVar9[8];
    auVar30[8] = SUB81(dVar8,0);
    auVar30._0_8_ = dVar6;
    auVar30[9] = uVar17;
    auVar30[10] = uVar18;
    auVar30[0xb] = uVar19;
    auVar30[0xc] = uVar20;
    auVar30[0xd] = uVar21;
    auVar30[0xe] = uVar22;
    auVar30[0xf] = uVar23;
    auVar31[8] = SUB81(dVar8,0);
    auVar31._0_8_ = dVar6;
    auVar31[9] = uVar17;
    auVar31[10] = uVar18;
    auVar31[0xb] = uVar19;
    auVar31[0xc] = uVar20;
    auVar31[0xd] = uVar21;
    auVar31[0xe] = uVar22;
    auVar31[0xf] = uVar23;
    auVar30 = NEON_ext(auVar30,auVar31,8,1);
    auVar31 = NEON_fmov(0x3ff0000000000000,8);
    do {
      auVar38._0_8_ = (double)(float)*puVar15;
      auVar38._8_8_ = (double)(float)*puVar16;
      auVar33._0_8_ = (double)(float)((ulong)*puVar15 >> 0x20);
      auVar33._8_8_ = (double)(float)((ulong)*puVar16 >> 0x20);
      dVar40 = dVar6 + auVar33._0_8_ * dVar29 + auVar38._0_8_ * auVar28._0_8_;
      dVar41 = dVar8 + auVar33._8_8_ * dVar29 + auVar38._8_8_ * auVar28._8_8_;
      dVar36 = dVar26 + dVar25 * auVar33._0_8_ + auVar38._0_8_ * dVar24;
      dVar37 = dVar7 + dVar27 * auVar33._8_8_ + auVar38._8_8_ * dVar24;
      auVar34 = NEON_ext(auVar33,auVar33,8,1);
      auVar39 = NEON_ext(auVar38,auVar38,8,1);
      dVar32 = dVar5 + auVar30._0_8_ * auVar33._0_8_ + auVar38._0_8_ * dVar7 +
               dVar40 * auVar34._0_8_ + dVar36 * auVar39._0_8_;
      dVar35 = dVar5 + auVar30._8_8_ * auVar33._8_8_ + auVar38._8_8_ * dVar26 +
               dVar41 * auVar34._8_8_ + dVar37 * auVar39._8_8_;
      dVar32 = (auVar31._0_8_ / (dVar40 * dVar40 + dVar36 * dVar36)) * dVar32 * dVar32;
      dVar35 = (auVar31._8_8_ / (dVar41 * dVar41 + dVar37 * dVar37)) * dVar35 * dVar35;
      if (dVar32 <= dVar35) {
        dVar32 = dVar35;
      }
      *pfVar14 = (float)dVar32;
      uVar13 = uVar13 - 1;
      pfVar14 = pfVar14 + 1;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    } while (uVar13 != 0);
  }
  if (uStack_138 != 0) {
    piVar1 = (int *)(uStack_138 + 0x14);
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
      func_0x000109a848d4(&uStack_170);
    }
  }
  uStack_138 = 0;
  uStack_158 = 0;
  pdStack_160 = (double *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  if (0 < uStack_170._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_130 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_170._4_4_);
  }
  if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
    _free(puStack_128[-1]);
  }
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
    }
  }
  uStack_d8 = 0;
  uStack_f8 = 0;
  puStack_100 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (0 < uStack_110._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_d0 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_110._4_4_);
  }
  if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
    _free(puStack_c8[-1]);
  }
  if (uStack_78 != 0) {
    piVar1 = (int *)(uStack_78 + 0x14);
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
      func_0x000109a848d4(&uStack_b0);
    }
  }
  uStack_78 = 0;
  uStack_98 = 0;
  puStack_a0 = (undefined8 *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < uStack_b0._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_70 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_b0._4_4_);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return;
}



/* Entry: 109b9b534; end: 109b9b7d7;  */

uint FUN_109b9b534(undefined8 param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  uint uVar8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_2 + 2);
    uStack_40 = (ulong)&uStack_80 | 8;
    uStack_78 = puVar6[1];
    uStack_80 = *puVar6;
    uStack_68 = puVar6[3];
    uStack_70 = puVar6[2];
    uStack_58 = puVar6[5];
    uStack_60 = puVar6[4];
    uStack_48 = puVar6[7];
    uStack_50 = puVar6[6];
    puStack_38 = &uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    if (puVar6[7] != 0) {
      piVar1 = (int *)(puVar6[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_30 = *(undefined8 *)puVar6[9];
      uStack_28 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_80 = uStack_80 & 0xffffffff;
      func_0x000109a84868(&uStack_80);
    }
  }
  else {
    FUN_109a8a180(&uStack_80,param_2,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_3 + 2);
    uStack_a0 = (ulong)&uStack_e0 | 8;
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
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
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
  uVar5 = uStack_70;
  FUN_109b98a28(uStack_70,param_4);
  if ((uVar5 & 1) == 0) {
    uVar5 = uStack_d0;
    FUN_109b98a28(uStack_d0,param_4);
    uVar8 = (uint)uVar5 ^ 1;
  }
  else {
    uVar8 = 0;
  }
  if (uStack_a8 != 0) {
    piVar1 = (int *)(uStack_a8 + 0x14);
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
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (0 < uStack_e0._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(uStack_a0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_e0._4_4_);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  if (uStack_48 != 0) {
    piVar1 = (int *)(uStack_48 + 0x14);
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
      func_0x000109a848d4(&uStack_80);
    }
  }
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (0 < uStack_80._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(uStack_40 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_80._4_4_);
  }
  if (puStack_38 != &uStack_30 && puStack_38 != (undefined8 *)0x0) {
    _free(puStack_38[-1]);
  }
  return uVar8;
}



/* Entry: 109b9b7d8; end: 109b9b7df;  */

void FUN_109b9b7d8(void)

{
  return;
}



/* Entry: 109b9b7e0; end: 109b9b87b;  */

void FUN_109b9b7e0(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b9b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b9b87c; end: 109b9b91b;  */

void FUN_109b9b87c(undefined8 *param_1,long *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar5 = (undefined8 *)0x30;
  __Znwm();
  uVar2 = *param_3;
  *puVar5 = &PTR_FUN_110b29af8;
  lVar7 = *param_2;
  puVar5[2] = param_2[1];
  puVar5[1] = lVar7;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5[4] = 0x3e80000000000000;
  puVar5[3] = 0x3e80000000000000;
  *(undefined4 *)(puVar5 + 5) = uVar2;
  *(undefined4 *)((long)puVar5 + 0x2c) = 0;
  puVar6 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar6 + 1) = 1;
  *puVar6 = &PTR_FUN_110b29b88;
  puVar6[2] = puVar5;
  *param_1 = puVar6;
  param_1[1] = puVar5;
  return;
}



/* Entry: 109b9b91c; end: 109b9b97b;  */

undefined8 * FUN_109b9b91c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b29af8;
  FUN_109b994b0(param_1 + 1);
  return param_1;
}



/* Entry: 109b9b97c; end: 109b9b9cb;  */

void FUN_109b9b97c(long param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar2;
  *(long *)(param_1 + 0x10) = lVar3;
  FUN_109b994b0(&uStack_20);
  return;
}



/* Entry: 109b9b9cc; end: 109b9ce13;  */

uint FUN_109b9b9cc(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  double *pdVar7;
  code *pcVar8;
  bool bVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  double *pdVar13;
  uint *puVar14;
  undefined4 *puVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  double *pdVar19;
  int *piVar20;
  int *piVar21;
  double *pdVar22;
  uint uVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined4 auStack_5e0 [2];
  uint *puStack_5d8;
  undefined8 uStack_5d0;
  undefined4 auStack_5c8 [2];
  uint *puStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  uint *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long lStack_578;
  long lStack_570;
  undefined1 *puStack_568;
  undefined1 auStack_560 [16];
  undefined8 uStack_550;
  undefined8 uStack_548;
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
  long lStack_518;
  int *piStack_510;
  long *plStack_508;
  long alStack_500 [2];
  uint uStack_4f0;
  undefined8 uStack_4ec;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  long lStack_4b8;
  long lStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  uint uStack_490;
  undefined8 uStack_48c;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  long lStack_458;
  long lStack_450;
  undefined8 *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  uint uStack_430;
  undefined8 uStack_42c;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  long lStack_3f8;
  long lStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  uint uStack_3d0;
  undefined8 uStack_3cc;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  long lStack_398;
  long lStack_390;
  long *plStack_388;
  long alStack_380 [2];
  uint uStack_370;
  undefined8 uStack_36c;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  long lStack_338;
  long lStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  uint uStack_310;
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
  uint uStack_2b0;
  undefined8 uStack_2ac;
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
  long lStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  uint uStack_250;
  undefined8 uStack_24c;
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
  long lStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  uint uStack_1f0;
  undefined8 uStack_1ec;
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
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  uint uStack_190;
  undefined8 uStack_18c;
  int iStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  long lStack_158;
  int *piStack_150;
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
  int *piStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 auStack_c8 [2];
  uint *puStack_c0;
  undefined8 uStack_b8;
  
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar16 = *(ulong **)(param_2 + 2);
    piStack_f0 = (int *)((ulong)&uStack_130 | 8);
    uStack_128 = puVar16[1];
    uStack_130 = *puVar16;
    uStack_118 = puVar16[3];
    uStack_120 = puVar16[2];
    uStack_108 = puVar16[5];
    uStack_110 = puVar16[4];
    uStack_f8 = puVar16[7];
    uStack_100 = puVar16[6];
    puStack_e8 = &uStack_e0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    if (puVar16[7] != 0) {
      piVar20 = (int *)(puVar16[7] + 0x14);
      do {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar9) {
          *piVar20 = *piVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)((long)puVar16 + 4) < 3) {
      uStack_e0 = *(undefined8 *)puVar16[9];
      uStack_d8 = ((undefined8 *)puVar16[9])[1];
    }
    else {
      uStack_130 = uStack_130 & 0xffffffff;
      func_0x000109a84868(&uStack_130);
    }
  }
  else {
    FUN_109a8a180(&uStack_130,param_2,0xffffffff);
  }
  uStack_190 = 0x42ff0000;
  iStack_184 = 0;
  uStack_180 = 0;
  uStack_18c = 0;
  piStack_150 = (int *)((long)&uStack_18c + 4);
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_164 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_1f0 = 0x42ff0000;
  lStack_1b0 = (long)&uStack_1ec + 4;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
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
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_250 = 0x42ff0000;
  lStack_210 = (long)&uStack_24c + 4;
  uStack_244 = 0;
  uStack_240 = 0;
  uStack_24c = 0;
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
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_2b0 = 0x42ff0000;
  lStack_270 = (long)&uStack_2ac + 4;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_2ac = 0;
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
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_310 = 0x42ff0000;
  lStack_2d0 = (long)&uStack_30c + 4;
  uStack_304 = 0;
  uStack_300 = 0;
  uStack_30c = 0;
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
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_370 = 0x42ff0000;
  lStack_330 = (long)&uStack_36c + 4;
  uStack_364 = 0;
  uStack_360 = 0;
  uStack_36c = 0;
  uStack_354 = 0;
  uStack_350 = 0;
  uStack_35c = 0;
  uStack_358 = 0;
  uStack_344 = 0;
  uStack_34c = 0;
  uStack_348 = 0;
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_33c = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_3d0 = 0x42ff0000;
  lStack_390 = (long)&uStack_3cc + 4;
  uStack_3c4 = 0;
  uStack_3c0 = 0;
  uStack_3cc = 0;
  uStack_3b4 = 0;
  uStack_3b0 = 0;
  uStack_3bc = 0;
  uStack_3b8 = 0;
  uStack_3a4 = 0;
  uStack_3ac = 0;
  uStack_3a8 = 0;
  lStack_398 = 0;
  uStack_3a0 = 0;
  uStack_39c = 0;
  alStack_380[1] = 0;
  alStack_380[0] = 0;
  uStack_430 = 0x42ff0000;
  lStack_3f0 = (long)&uStack_42c + 4;
  uStack_424 = 0;
  uStack_420 = 0;
  uStack_42c = 0;
  uStack_414 = 0;
  uStack_410 = 0;
  uStack_41c = 0;
  uStack_418 = 0;
  uStack_404 = 0;
  uStack_40c = 0;
  uStack_408 = 0;
  lStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3fc = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_490 = 0x42ff0000;
  lStack_450 = (long)&uStack_48c + 4;
  uStack_484 = 0;
  uStack_480 = 0;
  uStack_48c = 0;
  uStack_474 = 0;
  uStack_470 = 0;
  uStack_47c = 0;
  uStack_478 = 0;
  uStack_464 = 0;
  uStack_46c = 0;
  uStack_468 = 0;
  lStack_458 = 0;
  uStack_460 = 0;
  uStack_45c = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_4f0 = 0x42ff0000;
  lStack_4b0 = (long)&uStack_4ec + 4;
  uStack_4e4 = 0;
  uStack_4e0 = 0;
  uStack_4ec = 0;
  uStack_4d4 = 0;
  uStack_4d0 = 0;
  uStack_4dc = 0;
  uStack_4d8 = 0;
  uStack_4c4 = 0;
  uStack_4cc = 0;
  uStack_4c8 = 0;
  lStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4bc = 0;
  iVar4 = uStack_128._4_4_;
  iVar3 = (int)uStack_128;
  uStack_4a0 = 0;
  uStack_498 = 0;
  puStack_4a8 = &uStack_4a0;
  puStack_448 = &uStack_440;
  puStack_3e8 = &uStack_3e0;
  plStack_388 = alStack_380;
  puStack_328 = &uStack_320;
  puStack_2c8 = &uStack_2c0;
  puStack_268 = &uStack_260;
  puStack_208 = &uStack_200;
  puStack_1a8 = &uStack_1a0;
  puStack_148 = &uStack_140;
  if ((int)uStack_128 == 1 || uStack_128._4_4_ == 1) {
    uVar1 = (uint)uStack_130 & 0xfff;
    if (uVar1 - 5 < 2) {
      if (*(long *)(param_1 + 0x10) == 0) {
        puVar15 = (undefined4 *)0x8;
        func_0x000107c2ae8c();
        *puVar15 = 1;
        uStack_550 = puVar15 + 1;
        *(undefined2 *)uStack_550 = 0x6263;
        uStack_548._0_4_ = 2;
        uStack_548._4_4_ = 0;
        *(undefined1 *)((long)puVar15 + 6) = 0;
        FUN_109ac3188(0xffffff29,&uStack_550,&UNK_10f55a6e6,&UNK_10f5a2c13,0x62);
        goto LAB_109b9cc84;
      }
      uStack_550._0_4_ = 0x2010000;
      uStack_548 = &uStack_190;
      uStack_540 = 0;
      uStack_53c = 0;
      dVar25 = 1.0;
      FUN_109a41858(0x3ff0000000000000,0,&uStack_130,&uStack_550,6);
      if (iStack_184 != 1) {
        uStack_550._0_4_ = 0x1010000;
        puStack_5a8 = &uStack_190;
        uStack_540 = 0;
        uStack_53c = 0;
        uStack_5b0 = (undefined4 *)CONCAT44(uStack_5b0._4_4_,0x2010000);
        uStack_5a0 = 0;
        uStack_548 = puStack_5a8;
        FUN_109a895d0(&uStack_550,&uStack_5b0);
      }
      plVar10 = *(long **)(param_1 + 0x10);
      uStack_550._0_4_ = 0x1010000;
      uStack_548 = &uStack_190;
      uStack_540 = 0;
      uStack_53c = 0;
      uStack_5b0._0_4_ = 0x2010000;
      puStack_5a8 = &uStack_250;
      uStack_5a0 = 0;
      auStack_c8[0] = 0x2010000;
      puStack_c0 = &uStack_310;
      uStack_b8 = 0;
      (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_550,&uStack_5b0,auStack_c8);
      if (((ulong)plVar10 & 1) == 0) {
        uVar23 = 0xffffffff;
        goto LAB_109b9c5e8;
      }
      uStack_550._0_4_ = 0x1010000;
      uStack_548 = &uStack_250;
      uStack_540 = 0;
      uStack_53c = 0;
      FUN_109a91d90();
      puVar11 = &uStack_550;
      FUN_109ab9654(puVar11,5,plVar10);
      uStack_550._0_4_ = 0x1010000;
      uStack_540 = 0;
      uStack_53c = 0;
      uStack_5b0._0_4_ = 0x2010000;
      puStack_5a8 = &uStack_370;
      uStack_5a0 = 0;
      uStack_548 = &uStack_310;
      FUN_109a91d90();
      puVar12 = &uStack_550;
      FUN_109a6dab4(0x3ff0000000000000,puVar12,&uStack_5b0,1,puVar11,0xffffffff);
      uStack_540 = 0;
      uStack_53c = 0;
      uStack_550._0_4_ = 0x1010000;
      uStack_5a0 = 0;
      uStack_5b0._0_4_ = 0x1010000;
      puStack_5a8 = &uStack_250;
      uStack_548 = &uStack_310;
      FUN_109a91d90();
      auStack_c8[0] = 0x2010000;
      puStack_c0 = &uStack_430;
      uStack_b8 = 0;
      FUN_109a64f8c(0x3ff0000000000000,0,&uStack_550,&uStack_5b0,puVar12,auStack_c8,1);
      FUN_109a856e8(&uStack_5b0,&uStack_370,0);
      uStack_550._0_4_ = 0x42ff0000;
      puStack_c0 = (uint *)&uStack_550;
      uStack_548._4_4_ = 0;
      uStack_540 = 0;
      uStack_550._4_4_ = 0;
      uStack_548._0_4_ = 0;
      piStack_510 = (int *)&uStack_548;
      uStack_534 = 0;
      uStack_530 = 0;
      uStack_53c = 0;
      uStack_538 = 0;
      uStack_524 = 0;
      uStack_52c = 0;
      uStack_528 = 0;
      lStack_518 = 0;
      uStack_520 = 0;
      uStack_51c = 0;
      alStack_500[0] = 0;
      alStack_500[1] = 0;
      auStack_c8[0] = 0x2010000;
      uStack_b8 = 0;
      plStack_508 = alStack_500;
      FUN_109a479a0(&uStack_5b0,auStack_c8);
      if (lStack_578 != 0) {
        piVar20 = (int *)(lStack_578 + 0x14);
        do {
          iVar2 = *piVar20;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = iVar2 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_5b0);
        }
      }
      lStack_578 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      uStack_588 = 0;
      uStack_590 = 0;
      if (0 < uStack_5b0._4_4_) {
        lVar17 = 0;
        do {
          *(undefined4 *)(lStack_570 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < uStack_5b0._4_4_);
      }
      if (puStack_568 != auStack_560 && puStack_568 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_568 + -8));
      }
      uVar6 = (iVar4 + iVar3) - 1;
      if (*(int *)(param_1 + 0x2c) != 0) {
        _puts(&UNK_10f5a2d09);
        _puts(&UNK_10f5a2ce8);
        _puts(&UNK_10f5a2d09);
      }
      dVar29 = 1.0;
      dVar30 = 0.75;
      uVar23 = 0;
      do {
        uVar24 = uVar23;
        if ((uStack_370 & 0xfff) != 6 || uStack_36c._4_4_ != uVar6) {
          puVar15 = (undefined4 *)0x28;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          uStack_5b0 = puVar15 + 1;
          puStack_5a8 = (uint *)0x22;
          *(undefined1 *)((long)puVar15 + 0x26) = 0;
          *(undefined2 *)(puVar15 + 9) = 0x786c;
          *(undefined8 *)(puVar15 + 3) = 0x365f5643203d3d20;
          *(undefined8 *)(puVar15 + 1) = 0x2928657079742e41;
          *(undefined8 *)(puVar15 + 7) = 0x203d3d2073776f72;
          *(undefined8 *)(puVar15 + 5) = 0x2e41202626204634;
          FUN_109ac3188(0xffffff29,&uStack_5b0,&UNK_10f55a6e6,&UNK_10f5a2c13,0x81);
          goto LAB_109b9cc84;
        }
        uStack_5b0._0_4_ = 0x2010000;
        uStack_5a0 = 0;
        puStack_5a8 = &uStack_3d0;
        FUN_109a479a0(&uStack_370,&uStack_5b0);
        if (0 < (int)uVar6) {
          uVar18 = 0;
          pdVar7 = (double *)CONCAT44(uStack_53c,uStack_540);
          pdVar22 = (double *)CONCAT44(uStack_3bc,uStack_3c0);
          lVar17 = *plStack_388;
          pdVar19 = pdVar7;
          do {
            pdVar13 = pdVar19;
            if ((((uint)uStack_550 >> 0xe & 1) == 0) && (*piStack_510 != 1)) {
              if (piStack_510[1] == 1) {
                pdVar13 = (double *)((long)pdVar7 + *plStack_508 * uVar18);
              }
              else {
                iVar3 = 0;
                if (uStack_548._4_4_ != 0) {
                  iVar3 = (int)uVar18 / uStack_548._4_4_;
                }
                pdVar13 = (double *)
                          ((long)pdVar7 +
                          (long)((int)uVar18 + -uStack_548._4_4_ * iVar3) * 8 +
                          *plStack_508 * (long)iVar3);
              }
            }
            *pdVar22 = *pdVar22 + *pdVar13 * dVar29;
            uVar18 = uVar18 + 1;
            pdVar22 = (double *)((long)pdVar22 + lVar17 + 8);
            pdVar19 = pdVar19 + 1;
          } while (uVar6 != uVar18);
        }
        uStack_5a0 = 0;
        uStack_5b0._0_4_ = 0x1010000;
        uStack_b8 = 0;
        auStack_c8[0] = 0x1010000;
        auStack_5c8[0] = 0x2010000;
        uStack_5b8 = 0;
        puVar11 = &uStack_5b0;
        puStack_5c0 = &uStack_4f0;
        puStack_5a8 = &uStack_3d0;
        puStack_c0 = &uStack_430;
        FUN_109a5a63c(puVar11,auStack_c8,auStack_5c8,2);
        dVar26 = 0.0;
        uStack_5a0 = 0;
        uStack_5b0._0_4_ = 0x1010000;
        puStack_5a8 = &uStack_190;
        uStack_b8 = 0;
        auStack_c8[0] = 0x1010000;
        auStack_5c8[0] = 0x2010000;
        uStack_5b8 = 0;
        puStack_5c0 = &uStack_1f0;
        puStack_c0 = &uStack_4f0;
        FUN_109a91d90();
        puVar12 = &uStack_5b0;
        FUN_109a293c4(puVar12,auStack_c8,auStack_5c8,puVar11,0xffffffff,&PTR_DAT_1132e8c10,0,0);
        puStack_5a8 = &uStack_1f0;
        plVar10 = *(long **)(param_1 + 0x10);
        uStack_5a0 = 0;
        uStack_5b0._0_4_ = 0x1010000;
        auStack_c8[0] = 0x2010000;
        puStack_c0 = &uStack_2b0;
        uStack_b8 = 0;
        FUN_109a91d90();
        (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_5b0,auStack_c8,puVar12);
        if (((ulong)plVar10 & 1) == 0) {
LAB_109b9c55c:
          uVar23 = 0xffffffff;
          goto LAB_109b9c568;
        }
        uStack_5b0._0_4_ = 0x1010000;
        puStack_5a8 = &uStack_2b0;
        uStack_5a0 = 0;
        FUN_109a91d90();
        FUN_109ab9654(&uStack_5b0,5,plVar10);
        uStack_5a0 = 0;
        uStack_5b0._0_4_ = 0x1010000;
        puStack_5a8 = &uStack_370;
        uStack_b8 = 0;
        auStack_c8[0] = 0x1010000;
        uStack_5b8 = 0;
        auStack_5c8[0] = 0x1010000;
        auStack_5e0[0] = 0x2010000;
        uStack_5d0 = 0;
        dVar27 = -1.0;
        puStack_5d8 = &uStack_490;
        puStack_5c0 = &uStack_430;
        puStack_c0 = &uStack_4f0;
        FUN_109a64f8c(0xbff0000000000000,0x4000000000000000,&uStack_5b0,auStack_c8,auStack_5c8,
                      auStack_5e0,0);
        uStack_5a0 = 0;
        uStack_5b0._0_4_ = 0x1010000;
        puVar14 = &uStack_4f0;
        puStack_5a8 = &uStack_490;
        FUN_109a73394(puVar14,&uStack_5b0);
        if (ABS(dVar27) <= 2.220446049250313e-16) {
          dVar27 = 1.0;
        }
        dVar27 = (dVar25 - dVar26) / dVar27;
        if (dVar27 <= 0.75) {
          if (dVar27 < 0.25) {
            uStack_5a0 = 0;
            uStack_5b0._0_4_ = 0x1010000;
            puVar14 = &uStack_4f0;
            puStack_5a8 = &uStack_430;
            FUN_109a73394(puVar14,&uStack_5b0);
            if (ABS(dVar27) <= 2.220446049250313e-16) {
              dVar27 = 1.0;
            }
            dVar28 = (dVar26 - dVar25) / dVar27 + 2.0;
            dVar27 = 2.0;
            if (2.0 <= dVar28) {
              dVar27 = dVar28;
            }
            dVar28 = 10.0;
            if (dVar27 <= 10.0) {
              dVar28 = dVar27;
            }
            if (dVar29 == 0.0) {
              uStack_5b0._0_4_ = 0x1010000;
              puStack_5a8 = &uStack_370;
              uStack_5a0 = 0;
              auStack_c8[0] = 0x2010000;
              uStack_b8 = 0;
              puVar14 = (uint *)&uStack_5b0;
              puStack_c0 = &uStack_3d0;
              FUN_109a57c7c(puVar14,auStack_c8,2);
              if ((int)uVar6 < 1) {
                dVar29 = 2.220446049250313e-16;
              }
              else {
                pdVar19 = (double *)CONCAT44(uStack_3bc,uStack_3c0);
                uVar18 = (ulong)uVar6;
                dVar30 = 2.220446049250313e-16;
                do {
                  dVar29 = ABS(*pdVar19);
                  if (ABS(*pdVar19) <= dVar30) {
                    dVar29 = dVar30;
                  }
                  pdVar19 = (double *)((long)pdVar19 + *plStack_388 + 8);
                  uVar18 = uVar18 - 1;
                  dVar30 = dVar29;
                } while (uVar18 != 0);
              }
              dVar29 = 1.0 / dVar29;
              dVar27 = 0.5;
              dVar28 = dVar28 * 0.5;
              dVar30 = dVar29;
            }
            dVar29 = dVar28 * dVar29;
          }
        }
        else {
          dVar27 = 0.5;
          dVar29 = dVar29 * 0.5;
          if (dVar29 < dVar30) {
            dVar29 = 0.0;
          }
        }
        if (dVar26 < dVar25) {
          FUN_10941e804(&uStack_190,&uStack_1f0);
          plVar10 = *(long **)(param_1 + 0x10);
          uStack_5b0._0_4_ = 0x1010000;
          puStack_5a8 = &uStack_190;
          uStack_5a0 = 0;
          auStack_c8[0] = 0x2010000;
          puStack_c0 = &uStack_250;
          uStack_b8 = 0;
          auStack_5c8[0] = 0x2010000;
          uStack_5b8 = 0;
          puStack_5c0 = &uStack_310;
          (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_5b0,auStack_c8,auStack_5c8);
          if (((ulong)plVar10 & 1) == 0) goto LAB_109b9c55c;
          uStack_5a0 = 0;
          uStack_5b0._0_4_ = 0x1010000;
          auStack_c8[0] = 0x2010000;
          puStack_c0 = &uStack_370;
          uStack_b8 = 0;
          puStack_5a8 = &uStack_310;
          FUN_109a91d90();
          puVar11 = &uStack_5b0;
          FUN_109a6dab4(0x3ff0000000000000,puVar11,auStack_c8,1,plVar10,0xffffffff);
          uStack_5a0 = 0;
          uStack_5b0._0_4_ = 0x1010000;
          uStack_b8 = 0;
          auStack_c8[0] = 0x1010000;
          puStack_c0 = &uStack_250;
          puStack_5a8 = &uStack_310;
          FUN_109a91d90();
          auStack_5c8[0] = 0x2010000;
          uStack_5b8 = 0;
          puVar14 = (uint *)&uStack_5b0;
          dVar27 = 1.0;
          puStack_5c0 = &uStack_430;
          FUN_109a64f8c(0x3ff0000000000000,0,puVar14,auStack_c8,puVar11,auStack_5c8,1);
          dVar25 = dVar26;
        }
        uVar23 = uVar24 + 1;
        if ((int)uVar23 < *(int *)(param_1 + 0x28)) {
          uStack_5a0 = 0;
          uStack_5b0._0_4_ = 0x1010000;
          puStack_5a8 = &uStack_4f0;
          FUN_109a91d90();
          puVar11 = &uStack_5b0;
          FUN_109ab9654(puVar11,1,puVar14);
          if (dVar27 < *(double *)(param_1 + 0x18)) goto LAB_109b9c410;
          auStack_c8[0] = 0x1010000;
          puStack_c0 = &uStack_250;
          uStack_b8 = 0;
          FUN_109a91d90();
          FUN_109ab9654(auStack_c8,1,puVar11);
          bVar9 = *(double *)(param_1 + 0x20) <= dVar27;
        }
        else {
LAB_109b9c410:
          bVar9 = false;
        }
        iVar3 = *(int *)(param_1 + 0x2c);
        if (iVar3 != 0) {
          iVar4 = 0;
          if (iVar3 != 0) {
            iVar4 = (int)uVar23 / iVar3;
          }
          if (!(bool)((uVar24 != 0 && uVar23 != iVar4 * iVar3) & bVar9)) {
            _printf(&UNK_10f5a2cb8);
          }
        }
      } while (bVar9);
      uVar6 = piStack_f0[-1];
      uVar18 = (ulong)uVar6;
      if (uVar6 == piStack_150[-1]) {
        if (uVar6 == 2) {
          if ((*piStack_f0 != *piStack_150) || (piStack_f0[1] != piStack_150[1]))
          goto LAB_109b9c4f4;
        }
        else {
          piVar20 = piStack_f0;
          piVar21 = piStack_150;
          if (0 < (int)uVar6) {
            do {
              if (*piVar20 != *piVar21) goto LAB_109b9c4f4;
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 1;
              piVar21 = piVar21 + 1;
            } while (uVar18 != 0);
          }
        }
      }
      else {
LAB_109b9c4f4:
        uStack_5b0._0_4_ = 0x1010000;
        puStack_5a8 = &uStack_190;
        uStack_5a0 = 0;
        auStack_c8[0] = 0x2010000;
        uStack_b8 = 0;
        puStack_c0 = puStack_5a8;
        FUN_109a895d0(&uStack_5b0,auStack_c8);
      }
      uStack_5b0._0_4_ = 0x2010000;
      puStack_5a8 = (uint *)&uStack_130;
      uStack_5a0 = 0;
      FUN_109a41858(0x3ff0000000000000,0,&uStack_190,&uStack_5b0,uVar1);
      if (uVar23 == *(uint *)(param_1 + 0x28)) {
        uVar23 = ~uVar24;
      }
LAB_109b9c568:
      if (lStack_518 != 0) {
        piVar20 = (int *)(lStack_518 + 0x14);
        do {
          iVar3 = *piVar20;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_550);
        }
      }
      lStack_518 = 0;
      uStack_538 = 0;
      uStack_534 = 0;
      uStack_540 = 0;
      uStack_53c = 0;
      uStack_528 = 0;
      uStack_524 = 0;
      uStack_530 = 0;
      uStack_52c = 0;
      if (0 < uStack_550._4_4_) {
        lVar17 = 0;
        do {
          piStack_510[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < uStack_550._4_4_);
      }
      uStack_548 = (uint *)CONCAT44(uStack_548._4_4_,(int)uStack_548);
      if (plStack_508 != alStack_500 && plStack_508 != (long *)0x0) {
        _free(plStack_508[-1]);
      }
LAB_109b9c5e8:
      if (lStack_4b8 != 0) {
        piVar20 = (int *)(lStack_4b8 + 0x14);
        do {
          iVar3 = *piVar20;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_4f0);
        }
      }
      lStack_4b8 = 0;
      uStack_4d8 = 0;
      uStack_4d4 = 0;
      uStack_4e0 = 0;
      uStack_4dc = 0;
      uStack_4c8 = 0;
      uStack_4c4 = 0;
      uStack_4d0 = 0;
      uStack_4cc = 0;
      if (0 < (int)uStack_4ec) {
        lVar17 = 0;
        do {
          *(undefined4 *)(lStack_4b0 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_4ec);
      }
      if (puStack_4a8 != &uStack_4a0 && puStack_4a8 != (undefined8 *)0x0) {
        _free(puStack_4a8[-1]);
      }
      if (lStack_458 != 0) {
        piVar20 = (int *)(lStack_458 + 0x14);
        do {
          iVar3 = *piVar20;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_490);
        }
      }
      lStack_458 = 0;
      uStack_478 = 0;
      uStack_474 = 0;
      uStack_480 = 0;
      uStack_47c = 0;
      uStack_468 = 0;
      uStack_464 = 0;
      uStack_470 = 0;
      uStack_46c = 0;
      if (0 < (int)uStack_48c) {
        lVar17 = 0;
        do {
          *(undefined4 *)(lStack_450 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_48c);
      }
      if (puStack_448 != &uStack_440 && puStack_448 != (undefined8 *)0x0) {
        _free(puStack_448[-1]);
      }
      if (lStack_3f8 != 0) {
        piVar20 = (int *)(lStack_3f8 + 0x14);
        do {
          iVar3 = *piVar20;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_430);
        }
      }
      lStack_3f8 = 0;
      uStack_418 = 0;
      uStack_414 = 0;
      uStack_420 = 0;
      uStack_41c = 0;
      uStack_408 = 0;
      uStack_404 = 0;
      uStack_410 = 0;
      uStack_40c = 0;
      if (0 < (int)uStack_42c) {
        lVar17 = 0;
        do {
          *(undefined4 *)(lStack_3f0 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_42c);
      }
      if (puStack_3e8 != &uStack_3e0 && puStack_3e8 != (undefined8 *)0x0) {
        _free(puStack_3e8[-1]);
      }
      if (lStack_398 != 0) {
        piVar20 = (int *)(lStack_398 + 0x14);
        do {
          iVar3 = *piVar20;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_3d0);
        }
      }
      lStack_398 = 0;
      uStack_3b8 = 0;
      uStack_3b4 = 0;
      uStack_3c0 = 0;
      uStack_3bc = 0;
      uStack_3a8 = 0;
      uStack_3a4 = 0;
      uStack_3b0 = 0;
      uStack_3ac = 0;
      if (0 < (int)uStack_3cc) {
        lVar17 = 0;
        do {
          *(undefined4 *)(lStack_390 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_3cc);
      }
      if (plStack_388 != alStack_380 && plStack_388 != (long *)0x0) {
        _free(plStack_388[-1]);
      }
      if (lStack_338 != 0) {
        piVar20 = (int *)(lStack_338 + 0x14);
        do {
          iVar3 = *piVar20;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_370);
        }
      }
      lStack_338 = 0;
      uStack_358 = 0;
      uStack_354 = 0;
      uStack_360 = 0;
      uStack_35c = 0;
      uStack_348 = 0;
      uStack_344 = 0;
      uStack_350 = 0;
      uStack_34c = 0;
      if (0 < (int)uStack_36c) {
        lVar17 = 0;
        do {
          *(undefined4 *)(lStack_330 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_36c);
      }
      if (puStack_328 != &uStack_320 && puStack_328 != (undefined8 *)0x0) {
        _free(puStack_328[-1]);
      }
      if (lStack_2d8 != 0) {
        piVar20 = (int *)(lStack_2d8 + 0x14);
        do {
          iVar3 = *piVar20;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
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
        lVar17 = 0;
        do {
          *(undefined4 *)(lStack_2d0 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_30c);
      }
      if (puStack_2c8 != &uStack_2c0 && puStack_2c8 != (undefined8 *)0x0) {
        _free(puStack_2c8[-1]);
      }
      if (lStack_278 != 0) {
        piVar20 = (int *)(lStack_278 + 0x14);
        do {
          iVar3 = *piVar20;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
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
      if (0 < (int)uStack_2ac) {
        lVar17 = 0;
        do {
          *(undefined4 *)(lStack_270 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_2ac);
      }
      if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
        _free(puStack_268[-1]);
      }
      if (lStack_218 != 0) {
        piVar20 = (int *)(lStack_218 + 0x14);
        do {
          iVar3 = *piVar20;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
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
      if (0 < (int)uStack_24c) {
        lVar17 = 0;
        do {
          *(undefined4 *)(lStack_210 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_24c);
      }
      if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
        _free(puStack_208[-1]);
      }
      if (lStack_1b8 != 0) {
        piVar20 = (int *)(lStack_1b8 + 0x14);
        do {
          iVar3 = *piVar20;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
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
      if (0 < (int)uStack_1ec) {
        lVar17 = 0;
        do {
          *(undefined4 *)(lStack_1b0 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_1ec);
      }
      if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
        _free(puStack_1a8[-1]);
      }
      if (lStack_158 != 0) {
        piVar20 = (int *)(lStack_158 + 0x14);
        do {
          iVar3 = *piVar20;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_190);
        }
      }
      lStack_158 = 0;
      uStack_178 = 0;
      uStack_174 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      uStack_168 = 0;
      uStack_164 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      if (0 < (int)uStack_18c) {
        lVar17 = 0;
        do {
          piStack_150[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_18c);
      }
      if (puStack_148 != &uStack_140 && puStack_148 != (undefined8 *)0x0) {
        _free(puStack_148[-1]);
      }
      if (uStack_f8 != 0) {
        piVar20 = (int *)(uStack_f8 + 0x14);
        do {
          iVar3 = *piVar20;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_130);
        }
      }
      uStack_f8 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      if (0 < uStack_130._4_4_) {
        lVar17 = 0;
        do {
          piStack_f0[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < uStack_130._4_4_);
      }
      if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
        _free(puStack_e8[-1]);
      }
      return uVar23;
    }
  }
  puVar15 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *puVar15 = 1;
  uStack_550 = puVar15 + 1;
  uStack_548._0_4_ = 0x4e;
  uStack_548._4_4_ = 0;
  *(undefined8 *)(puVar15 + 7) = 0x73776f722e306d61;
  *(undefined8 *)(puVar15 + 5) = 0x726170207c7c2031;
  *(undefined8 *)(puVar15 + 0xb) = 0x6570797470282026;
  *(undefined8 *)(puVar15 + 9) = 0x26202931203d3d20;
  *(undefined8 *)(puVar15 + 0xf) = 0x7470207c7c204632;
  *(undefined8 *)(puVar15 + 0xd) = 0x335f5643203d3d20;
  *(undefined8 *)((long)puVar15 + 0x4a) = 0x294634365f564320;
  *(undefined8 *)((long)puVar15 + 0x42) = 0x3d3d206570797470;
  *(undefined1 *)((long)puVar15 + 0x52) = 0;
  *(undefined8 *)(puVar15 + 3) = 0x203d3d20736c6f63;
  *(undefined8 *)(puVar15 + 1) = 0x2e306d6172617028;
  FUN_109ac3188(0xffffff29,&uStack_550,&UNK_10f55a6e6,&UNK_10f5a2c13,0x61);
LAB_109b9cc84:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109b9cc88);
  (*pcVar8)();
}



/* Entry: 109b9ce14; end: 109b9ce1b;  */

void FUN_109b9ce14(void)

{
  return;
}



/* Entry: 109b9ce1c; end: 109b9ce57;  */

void FUN_109b9ce1c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b9ce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b9ce58; end: 109b9ceab;  */

long * FUN_109b9ce58(long *param_1)

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



/* Entry: 109b9ceac; end: 109b9cf3b;  */

void FUN_109b9ceac(double *param_1,uint *param_2)

{
  double *pdVar1;
  long *plVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  
  pdVar1 = *(double **)(param_2 + 4);
  plVar2 = *(long **)(param_2 + 0x12);
  if ((*param_2 & 7) == 5) {
    dVar4 = (double)*(float *)(pdVar1 + 1);
    lVar3 = *plVar2;
    fVar7 = *(float *)((long)pdVar1 + lVar3 + 4);
    dVar5 = (double)*(float *)((long)pdVar1 + lVar3 + 8);
    param_1[2] = dVar4;
    param_1[3] = dVar5;
    dVar6 = (double)*(float *)pdVar1;
    *param_1 = dVar6;
    dVar8 = (double)fVar7;
  }
  else {
    dVar4 = pdVar1[2];
    param_1[2] = dVar4;
    lVar3 = *plVar2;
    dVar5 = *(double *)((long)pdVar1 + lVar3 + 0x10);
    param_1[3] = dVar5;
    dVar6 = *pdVar1;
    *param_1 = dVar6;
    dVar8 = *(double *)((long)pdVar1 + lVar3 + 8);
  }
  param_1[1] = dVar8;
  param_1[4] = 1.0 / dVar6;
  param_1[5] = 1.0 / dVar8;
  param_1[6] = dVar4 / dVar6;
  param_1[7] = dVar5 / dVar8;
  return;
}



/* Entry: 109b9cf3c; end: 109b9e61f;  */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_109b9cf3c(double *param_1,double param_2,double param_3,uint *param_4,uint *param_5)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  ulong uVar11;
  long lVar12;
  double *pdVar13;
  undefined8 *puVar14;
  ulong uVar15;
  double **ppdVar16;
  double **ppdVar17;
  double *pdVar18;
  double *pdVar19;
  float *pfVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  double *pdVar24;
  long lVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  ulong uVar29;
  double *pdVar30;
  undefined1 **ppuVar31;
  double *pdVar32;
  double *pdVar33;
  long lVar34;
  double *pdVar35;
  double *pdVar36;
  double *pdVar37;
  long lVar38;
  float *pfVar39;
  double *pdVar40;
  double *pdVar41;
  double *pdVar42;
  double *pdVar43;
  ulong uVar44;
  double *pdVar45;
  long lVar46;
  float fVar47;
  double dVar48;
  double *pdVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  undefined1 auVar66 [16];
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  double dVar80;
  double dVar81;
  double dVar82;
  double dVar83;
  double dVar84;
  double dVar85;
  double dVar86;
  double *pdVar87;
  double dVar88;
  double dVar89;
  double dVar90;
  double dVar91;
  double *pdVar92;
  double dVar93;
  double dVar94;
  double dVar95;
  double dVar96;
  double dVar97;
  double dVar98;
  double *pdStack_518;
  double *pdStack_510;
  undefined8 uStack_508;
  double dStack_500;
  double dStack_4f8;
  double dStack_4f0;
  undefined1 auStack_4e8 [8];
  double dStack_4e0;
  double dStack_4d8;
  double *pdStack_4d0;
  double dStack_4c8;
  undefined1 *puStack_4c0;
  double dStack_4b8;
  double dStack_4b0;
  double dStack_4a8;
  double dStack_4a0;
  undefined1 auStack_498 [8];
  double adStack_490 [12];
  undefined8 uStack_430;
  double dStack_428;
  double *pdStack_420;
  double dStack_418;
  undefined1 *puStack_410;
  double adStack_408 [2];
  long lStack_3f8;
  ulong uStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  double adStack_308 [21];
  double adStack_260 [16];
  double *pdStack_1e0;
  double adStack_1d8 [3];
  double *pdStack_1c0;
  double adStack_1b8 [4];
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double adStack_140 [17];
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdStack_518 = (double *)0x0;
  pdStack_510 = (double *)0x0;
  uStack_508 = 0;
  uVar21 = *param_4 & 7;
  if (uVar21 == (*param_5 & 7)) {
    if (uVar21 == 5) {
      func_0x000108a851e4(&pdStack_518,0x14);
      lVar25 = 0;
      lVar28 = 0;
      uVar21 = *param_5;
      uVar22 = *param_4;
      pdVar13 = pdStack_518 + 2;
      uVar6 = param_5[3];
      lVar34 = *(long *)(param_5 + 4);
      piVar2 = *(int **)(param_5 + 0x10);
      plVar4 = *(long **)(param_5 + 0x12);
      lVar12 = *(long *)(param_4 + 4);
      uVar7 = param_4[3];
      ppdVar17 = (double **)(lVar12 + 4);
      piVar3 = *(int **)(param_4 + 0x10);
      plVar5 = *(long **)(param_4 + 0x12);
      lVar46 = lVar34;
      do {
        pfVar20 = (float *)(lVar34 + lVar28 * 8);
        iVar27 = (int)lVar28;
        pfVar39 = pfVar20;
        if (((uVar21 >> 0xe & 1) == 0) && (*piVar2 != 1)) {
          if (piVar2[1] == 1) {
            pfVar39 = (float *)(lVar34 + *plVar4 * lVar28);
          }
          else {
            iVar8 = 0;
            if (uVar6 != 0) {
              iVar8 = iVar27 / (int)uVar6;
            }
            pfVar39 = (float *)(lVar46 + *plVar4 * (long)iVar8 + (long)(int)(iVar8 * uVar6) * -8);
          }
        }
        pdVar13[-2] = param_1[2] + *param_1 * (double)*pfVar39;
        if (((uVar21 >> 0xe & 1) == 0) && (*piVar2 != 1)) {
          if (piVar2[1] == 1) {
            pfVar20 = (float *)(lVar34 + *plVar4 * lVar28);
          }
          else {
            iVar8 = 0;
            if (uVar6 != 0) {
              iVar8 = iVar27 / (int)uVar6;
            }
            pfVar20 = (float *)(lVar46 + *plVar4 * (long)iVar8 + (long)(int)(iVar8 * uVar6) * -8);
          }
        }
        pdVar13[-1] = param_1[3] + param_1[1] * (double)pfVar20[1];
        if (((uVar22 >> 0xe & 1) == 0) && (*piVar3 != 1)) {
          if (piVar3[1] != 1) {
            iVar8 = 0;
            if (uVar7 != 0) {
              iVar8 = iVar27 / (int)uVar7;
            }
            lVar38 = *plVar5 * (long)iVar8 + (long)(int)(iVar8 * uVar7) * -0xc;
            pfVar20 = (float *)(lVar12 + lVar25 + lVar38);
            fVar47 = *(float *)(lVar12 + lVar38 + lVar25);
            goto LAB_109b9d0bc;
          }
          lVar38 = *plVar5 * lVar28;
          pfVar20 = (float *)(lVar12 + lVar38);
          *pdVar13 = (double)*pfVar20;
          ppdVar16 = (double **)((long)ppdVar17 + lVar38);
        }
        else {
          pfVar20 = (float *)(lVar12 + lVar28 * 0xc);
          fVar47 = *(float *)(lVar12 + lVar25);
LAB_109b9d0bc:
          *pdVar13 = (double)fVar47;
          ppdVar16 = (double **)(pfVar20 + 1);
        }
        pdVar13[1] = (double)*(float *)ppdVar16;
        pdVar13[2] = (double)pfVar20[2];
        lVar28 = lVar28 + 1;
        lVar46 = lVar46 + 8;
        lVar25 = lVar25 + 0xc;
        pdVar13 = pdVar13 + 5;
      } while (lVar25 != 0x30);
    }
    else {
      func_0x000108a851e4(&pdStack_518,0x14);
      lVar25 = 0;
      lVar28 = 0;
      uVar21 = *param_5;
      uVar22 = *param_4;
      pdVar13 = pdStack_518 + 2;
      uVar6 = param_5[3];
      lVar34 = *(long *)(param_5 + 4);
      piVar2 = *(int **)(param_5 + 0x10);
      plVar4 = *(long **)(param_5 + 0x12);
      lVar12 = *(long *)(param_4 + 4);
      uVar7 = param_4[3];
      ppdVar17 = (double **)(lVar12 + 8);
      piVar3 = *(int **)(param_4 + 0x10);
      plVar5 = *(long **)(param_4 + 0x12);
      lVar46 = lVar34;
      do {
        pdVar49 = (double *)(lVar34 + lVar28 * 0x10);
        iVar27 = (int)lVar28;
        pdVar87 = pdVar49;
        if (((uVar21 >> 0xe & 1) == 0) && (*piVar2 != 1)) {
          if (piVar2[1] == 1) {
            pdVar87 = (double *)(lVar34 + *plVar4 * lVar28);
          }
          else {
            iVar8 = 0;
            if (uVar6 != 0) {
              iVar8 = iVar27 / (int)uVar6;
            }
            pdVar87 = (double *)
                      (lVar46 + *plVar4 * (long)iVar8 + (long)(int)(iVar8 * uVar6) * -0x10);
          }
        }
        pdVar13[-2] = param_1[2] + *param_1 * *pdVar87;
        if (((uVar21 >> 0xe & 1) == 0) && (*piVar2 != 1)) {
          if (piVar2[1] == 1) {
            pdVar49 = (double *)(lVar34 + *plVar4 * lVar28);
          }
          else {
            iVar8 = 0;
            if (uVar6 != 0) {
              iVar8 = iVar27 / (int)uVar6;
            }
            pdVar49 = (double *)
                      (lVar46 + *plVar4 * (long)iVar8 + (long)(int)(iVar8 * uVar6) * -0x10);
          }
        }
        pdVar13[-1] = param_1[3] + param_1[1] * pdVar49[1];
        if (((uVar22 >> 0xe & 1) == 0) && (*piVar3 != 1)) {
          if (piVar3[1] != 1) {
            iVar8 = 0;
            if (uVar7 != 0) {
              iVar8 = iVar27 / (int)uVar7;
            }
            lVar38 = *plVar5 * (long)iVar8 + (long)(int)(iVar8 * uVar7) * -0x18;
            pdVar49 = (double *)(lVar12 + lVar25 + lVar38);
            dVar71 = *(double *)(lVar12 + lVar38 + lVar25);
            goto LAB_109b9d42c;
          }
          lVar38 = *plVar5 * lVar28;
          pdVar49 = (double *)(lVar12 + lVar38);
          *pdVar13 = *pdVar49;
          ppdVar16 = (double **)((long)ppdVar17 + lVar38);
        }
        else {
          pdVar49 = (double *)(lVar12 + lVar28 * 0x18);
          dVar71 = *(double *)(lVar12 + lVar25);
LAB_109b9d42c:
          *pdVar13 = dVar71;
          ppdVar16 = (double **)(pdVar49 + 1);
        }
        pdVar13[1] = (double)*ppdVar16;
        pdVar13[2] = pdVar49[2];
        lVar28 = lVar28 + 1;
        lVar46 = lVar46 + 0x10;
        lVar25 = lVar25 + 0x18;
        pdVar13 = pdVar13 + 5;
      } while (lVar25 != 0x60);
    }
  }
  else if (uVar21 == 5) {
    func_0x000108a851e4(&pdStack_518,0x14);
    lVar25 = 0;
    lVar28 = 0;
    uVar21 = *param_5;
    uVar22 = *param_4;
    pdVar13 = pdStack_518 + 2;
    uVar6 = param_5[3];
    lVar34 = *(long *)(param_5 + 4);
    piVar2 = *(int **)(param_5 + 0x10);
    plVar4 = *(long **)(param_5 + 0x12);
    lVar12 = *(long *)(param_4 + 4);
    uVar7 = param_4[3];
    ppdVar17 = (double **)(lVar12 + 4);
    piVar3 = *(int **)(param_4 + 0x10);
    plVar5 = *(long **)(param_4 + 0x12);
    lVar46 = lVar34;
    do {
      pdVar49 = (double *)(lVar34 + lVar28 * 0x10);
      iVar27 = (int)lVar28;
      pdVar87 = pdVar49;
      if (((uVar21 >> 0xe & 1) == 0) && (*piVar2 != 1)) {
        if (piVar2[1] == 1) {
          pdVar87 = (double *)(lVar34 + *plVar4 * lVar28);
        }
        else {
          iVar8 = 0;
          if (uVar6 != 0) {
            iVar8 = iVar27 / (int)uVar6;
          }
          pdVar87 = (double *)(lVar46 + *plVar4 * (long)iVar8 + (long)(int)(iVar8 * uVar6) * -0x10);
        }
      }
      pdVar13[-2] = param_1[2] + *param_1 * *pdVar87;
      if (((uVar21 >> 0xe & 1) == 0) && (*piVar2 != 1)) {
        if (piVar2[1] == 1) {
          pdVar49 = (double *)(lVar34 + *plVar4 * lVar28);
        }
        else {
          iVar8 = 0;
          if (uVar6 != 0) {
            iVar8 = iVar27 / (int)uVar6;
          }
          pdVar49 = (double *)(lVar46 + *plVar4 * (long)iVar8 + (long)(int)(iVar8 * uVar6) * -0x10);
        }
      }
      pdVar13[-1] = param_1[3] + param_1[1] * pdVar49[1];
      if (((uVar22 >> 0xe & 1) == 0) && (*piVar3 != 1)) {
        if (piVar3[1] != 1) {
          iVar8 = 0;
          if (uVar7 != 0) {
            iVar8 = iVar27 / (int)uVar7;
          }
          lVar38 = *plVar5 * (long)iVar8 + (long)(int)(iVar8 * uVar7) * -0xc;
          pfVar20 = (float *)(lVar12 + lVar25 + lVar38);
          fVar47 = *(float *)(lVar12 + lVar38 + lVar25);
          goto LAB_109b9d278;
        }
        lVar38 = *plVar5 * lVar28;
        pfVar20 = (float *)(lVar12 + lVar38);
        *pdVar13 = (double)*pfVar20;
        ppdVar16 = (double **)((long)ppdVar17 + lVar38);
      }
      else {
        pfVar20 = (float *)(lVar12 + lVar28 * 0xc);
        fVar47 = *(float *)(lVar12 + lVar25);
LAB_109b9d278:
        *pdVar13 = (double)fVar47;
        ppdVar16 = (double **)(pfVar20 + 1);
      }
      pdVar13[1] = (double)*(float *)ppdVar16;
      pdVar13[2] = (double)pfVar20[2];
      lVar28 = lVar28 + 1;
      lVar46 = lVar46 + 0x10;
      lVar25 = lVar25 + 0xc;
      pdVar13 = pdVar13 + 5;
    } while (lVar25 != 0x30);
  }
  else {
    func_0x000108a851e4(&pdStack_518,0x14);
    lVar25 = 0;
    lVar28 = 0;
    uVar21 = *param_5;
    uVar22 = *param_4;
    pdVar13 = pdStack_518 + 2;
    uVar6 = param_5[3];
    lVar34 = *(long *)(param_5 + 4);
    piVar2 = *(int **)(param_5 + 0x10);
    plVar4 = *(long **)(param_5 + 0x12);
    lVar12 = *(long *)(param_4 + 4);
    uVar7 = param_4[3];
    ppdVar17 = (double **)(lVar12 + 8);
    piVar3 = *(int **)(param_4 + 0x10);
    plVar5 = *(long **)(param_4 + 0x12);
    lVar46 = lVar34;
    do {
      pfVar20 = (float *)(lVar34 + lVar28 * 8);
      iVar27 = (int)lVar28;
      pfVar39 = pfVar20;
      if (((uVar21 >> 0xe & 1) == 0) && (*piVar2 != 1)) {
        if (piVar2[1] == 1) {
          pfVar39 = (float *)(lVar34 + *plVar4 * lVar28);
        }
        else {
          iVar8 = 0;
          if (uVar6 != 0) {
            iVar8 = iVar27 / (int)uVar6;
          }
          pfVar39 = (float *)(lVar46 + *plVar4 * (long)iVar8 + (long)(int)(iVar8 * uVar6) * -8);
        }
      }
      pdVar13[-2] = param_1[2] + *param_1 * (double)*pfVar39;
      if (((uVar21 >> 0xe & 1) == 0) && (*piVar2 != 1)) {
        if (piVar2[1] == 1) {
          pfVar20 = (float *)(lVar34 + *plVar4 * lVar28);
        }
        else {
          iVar8 = 0;
          if (uVar6 != 0) {
            iVar8 = iVar27 / (int)uVar6;
          }
          pfVar20 = (float *)(lVar46 + *plVar4 * (long)iVar8 + (long)(int)(iVar8 * uVar6) * -8);
        }
      }
      pdVar13[-1] = param_1[3] + param_1[1] * (double)pfVar20[1];
      if (((uVar22 >> 0xe & 1) == 0) && (*piVar3 != 1)) {
        if (piVar3[1] != 1) {
          iVar8 = 0;
          if (uVar7 != 0) {
            iVar8 = iVar27 / (int)uVar7;
          }
          lVar38 = *plVar5 * (long)iVar8 + (long)(int)(iVar8 * uVar7) * -0x18;
          pdVar49 = (double *)(lVar12 + lVar25 + lVar38);
          dVar71 = *(double *)(lVar12 + lVar38 + lVar25);
          goto LAB_109b9d5d8;
        }
        lVar38 = *plVar5 * lVar28;
        pdVar49 = (double *)(lVar12 + lVar38);
        *pdVar13 = *pdVar49;
        ppdVar16 = (double **)((long)ppdVar17 + lVar38);
      }
      else {
        pdVar49 = (double *)(lVar12 + lVar28 * 0x18);
        dVar71 = *(double *)(lVar12 + lVar25);
LAB_109b9d5d8:
        *pdVar13 = dVar71;
        ppdVar16 = (double **)(pdVar49 + 1);
      }
      pdVar13[1] = (double)*ppdVar16;
      pdVar13[2] = pdVar49[2];
      lVar28 = lVar28 + 1;
      lVar46 = lVar46 + 8;
      lVar25 = lVar25 + 0x18;
      pdVar13 = pdVar13 + 5;
    } while (lVar25 != 0x60);
  }
  dVar68 = -param_1[6];
  dVar71 = param_1[4];
  dVar82 = param_1[5];
  dVar84 = -param_1[7];
  dVar62 = dVar71 * pdStack_518[5] - param_1[6];
  dVar50 = dVar82 * pdStack_518[6] - param_1[7];
  dVar85 = 1.0 / SQRT(dVar50 * dVar50 + dVar62 * dVar62 + 1.0);
  dVar62 = dVar62 * dVar85;
  dVar50 = dVar50 * dVar85;
  dVar51 = dVar68 + *pdStack_518 * dVar71;
  dVar68 = dVar68 + pdStack_518[10] * dVar71;
  dVar54 = dVar84 + pdStack_518[1] * dVar82;
  dVar84 = dVar84 + pdStack_518[0xb] * dVar82;
  auVar66 = NEON_fmov(0x3ff0000000000000,8);
  dVar72 = auVar66._0_8_ / SQRT(dVar54 * dVar54 + dVar51 * dVar51 + auVar66._0_8_);
  dVar73 = auVar66._8_8_ / SQRT(dVar84 * dVar84 + dVar68 * dVar68 + auVar66._8_8_);
  dVar51 = dVar51 * dVar72;
  dVar68 = dVar68 * dVar73;
  dVar54 = dVar54 * dVar72;
  dVar84 = dVar84 * dVar73;
  dVar52 = dVar54 * dVar84 + dVar51 * dVar68 + dVar72 * dVar73;
  dVar55 = dVar54 * dVar50 + dVar51 * dVar62 + dVar72 * dVar85;
  dVar57 = dVar84 * dVar50 + dVar68 * dVar62 + dVar73 * dVar85;
  dVar52 = dVar52 + dVar52;
  dVar55 = dVar55 + dVar55;
  dVar57 = dVar57 + dVar57;
  dVar95 = dVar52 * dVar52;
  dVar93 = dVar55 * dVar55;
  dVar94 = dVar57 * dVar57;
  dVar53 = dVar55 * dVar57;
  dVar71 = dVar52 * dVar53;
  dVar82 = ((dVar93 + dVar94 + dVar95) - dVar71) + -1.0;
  if (dVar82 == 0.0) {
LAB_109b9d840:
    uVar23 = 0;
  }
  else {
    dVar69 = pdStack_518[2];
    dVar80 = pdStack_518[3];
    dVar81 = pdStack_518[4];
    dVar74 = pdStack_518[7];
    dVar75 = pdStack_518[8];
    dVar76 = pdStack_518[9];
    dVar77 = pdStack_518[0xc];
    dVar78 = pdStack_518[0xd];
    dVar79 = pdStack_518[0xe];
    dVar82 = SQRT((dVar75 - dVar78) * (dVar75 - dVar78) + (dVar74 - dVar77) * (dVar74 - dVar77) +
                  (dVar76 - dVar79) * (dVar76 - dVar79));
    dVar63 = SQRT((dVar80 - dVar78) * (dVar80 - dVar78) + (dVar69 - dVar77) * (dVar69 - dVar77) +
                  (dVar81 - dVar79) * (dVar81 - dVar79));
    dVar70 = SQRT((dVar80 - dVar75) * (dVar80 - dVar75) + (dVar69 - dVar74) * (dVar69 - dVar74) +
                  (dVar81 - dVar76) * (dVar81 - dVar76));
    dVar67 = 1.0 / (dVar70 * dVar70);
    dVar89 = dVar67 * dVar82 * dVar82;
    dVar67 = dVar67 * dVar63 * dVar63;
    dVar96 = dVar89 * dVar89;
    dVar98 = dVar67 * dVar67;
    dVar97 = dVar89 * dVar67;
    dVar63 = dVar89 + dVar89;
    dVar82 = 2.0;
    if (((dVar96 + dVar98 + dVar67 * -2.0 + 1.0 + (2.0 - dVar93) * dVar97) - dVar63 == 0.0) ||
       (dVar58 = (dVar71 + ((dVar89 + -1.0) - dVar67) * dVar93 + (dVar67 + dVar89 + -1.0) * dVar94)
                 - dVar71 * dVar89, dVar58 = dVar58 * dVar67 * dVar58, dVar82 = dVar58,
       dVar58 == 0.0)) goto LAB_109b9d840;
    dVar64 = pdStack_518[0xf];
    dVar59 = pdStack_518[0x10];
    dVar65 = pdStack_518[0x11];
    dVar60 = pdStack_518[0x12];
    dVar61 = pdStack_518[0x13];
    dVar86 = dVar89 * 4.0;
    dVar82 = dVar52 * (dVar86 + (dVar97 - dVar96) + (dVar97 - dVar96) + dVar67 * (dVar94 + -2.0) +
                      -2.0) + (dVar67 + (dVar97 - dVar98)) * dVar53;
    dVar71 = (((dVar95 + (dVar94 + dVar93 + -2.0) * dVar98) - (dVar94 + dVar71) * dVar67) -
             (dVar93 + dVar71) * dVar97) + (dVar95 + 2.0) * (dVar96 - dVar63) + 2.0;
    dVar53 = (dVar97 + (dVar67 - dVar98)) * dVar53 +
             (dVar86 + dVar97 * dVar93 + ((dVar96 + dVar97 + 1.0) - dVar67) * -2.0) * dVar52;
    puVar14 = &uStack_430;
    ppdVar17 = &pdStack_420;
    FUN_109b9e848(puVar14,&dStack_428,ppdVar17,&dStack_418);
    if ((int)puVar14 == 0) goto LAB_109b9d840;
    lVar28 = 0;
    uVar21 = 0;
    dVar82 = dVar57 * dVar93;
    dVar48 = dVar55 * dVar93;
    dVar56 = (dVar97 - dVar89) - dVar67;
    dVar88 = dVar52 * dVar48;
    dVar71 = dVar97 + ((dVar63 - dVar67) - dVar96);
    dVar83 = dVar71 + -1.0;
    do {
      dVar53 = *(double *)((long)&uStack_430 + lVar28);
      if (0.0 < dVar53) {
        dVar90 = dVar53 * dVar53;
        dVar91 = (dVar67 + (((dVar52 * dVar89 - dVar52) * dVar53 +
                             dVar90 * ((1.0 - dVar89) - dVar67) + 1.0) - dVar89)) *
                 (((dVar96 + dVar98 + ((dVar97 - dVar67) - dVar89) * 2.0 + 1.0) * dVar55 * dVar94 +
                   ((((dVar98 - dVar97) * dVar93 + (dVar89 * -2.0 + 1.0 + dVar96) * dVar95) - dVar86
                    ) + (dVar96 - dVar98) * 2.0 + 2.0) * dVar48 +
                  ((dVar86 + ((dVar67 - dVar97) - dVar96) * 2.0 + -2.0) - dVar67 * dVar93) *
                  dVar52 * dVar82) * dVar53 +
                  dVar90 * (dVar82 * (dVar98 + dVar96 + 1.0 + dVar56 * 2.0 +
                                               (dVar67 - dVar98) * dVar93) +
                            (dVar86 + (dVar67 - dVar96) * 2.0 + (dVar93 + -2.0) * dVar97 + -2.0) *
                            dVar88 + dVar53 * (dVar98 + ((dVar96 + (2.0 - dVar93) * dVar97) - dVar63
                                                        ) + dVar67 * -2.0 + 1.0) * dVar48) +
                  dVar83 * (dVar88 + dVar88) +
                  ((dVar95 - dVar86) + (dVar96 - dVar98) * 2.0 + dVar67 * dVar93 +
                   (dVar96 - dVar63) * dVar95 + 2.0) * dVar82 +
                 (((((dVar67 + dVar63) - dVar96) - dVar97) + -1.0) * dVar55 * (dVar52 + dVar52) +
                 (dVar98 + dVar96 + dVar56 * 2.0 + 1.0) * dVar57) * dVar94);
        dVar71 = dVar67;
        if (0.0 < dVar91) {
          dVar91 = (1.0 / dVar58) * dVar91;
          dVar90 = dVar90 + dVar91 * dVar91 + dVar55 * -(dVar53 * dVar91);
          if (0.0 < dVar90) {
            dVar90 = dVar70 / SQRT(dVar90);
            lVar46 = (long)(int)uVar21;
            adStack_308[lVar46 * 3 + 9] = dVar53 * dVar90;
            adStack_308[lVar46 * 3 + 10] = dVar91 * dVar90;
            adStack_308[lVar46 * 3 + 0xb] = dVar90;
            uVar21 = uVar21 + 1;
          }
        }
      }
      dVar53 = 1.0;
      lVar28 = lVar28 + 8;
    } while (((ulong)puVar14 & 0xffffffff) << 3 != lVar28);
    if ((int)uVar21 < 1) goto LAB_109b9d840;
    uVar29 = 0;
    dVar71 = (dVar69 + dVar74 + dVar77) / 3.0;
    dVar82 = (dVar80 + dVar75 + dVar78) / 3.0;
    pdVar13 = &dStack_428;
    pdVar49 = adStack_490;
    dVar52 = (dVar81 + dVar76 + dVar79) / 3.0;
    do {
      lVar28 = 0;
      dVar53 = adStack_308[uVar29 * 3 + 9];
      dVar55 = adStack_308[uVar29 * 3 + 10];
      dVar57 = adStack_308[uVar29 * 3 + 0xb];
      adStack_308[0] = dVar51 * dVar53;
      adStack_308[1] = dVar54 * dVar53;
      adStack_308[2] = dVar72 * dVar53;
      adStack_308[3] = dVar62 * dVar55;
      adStack_308[4] = dVar50 * dVar55;
      adStack_308[5] = dVar85 * dVar55;
      adStack_308[6] = dVar68 * dVar57;
      adStack_308[7] = dVar84 * dVar57;
      adStack_308[8] = dVar73 * dVar57;
      do {
        *(double *)((long)adStack_140 + lVar28 + 0x48) =
             (*(double *)((long)adStack_308 + lVar28) +
              *(double *)((long)adStack_308 + lVar28 + 0x18) +
             *(double *)((long)adStack_308 + lVar28 + 0x30)) / 3.0;
        lVar28 = lVar28 + 8;
      } while (lVar28 != 0x18);
      lVar28 = 0;
      do {
        dVar53 = *(double *)((long)adStack_308 + lVar28 + 0x18);
        dVar55 = *(double *)((long)adStack_308 + lVar28);
        dVar57 = *(double *)((long)adStack_308 + lVar28 + 0x30);
        dVar93 = *(double *)((long)adStack_140 + lVar28 + 0x48);
        *(double *)((long)adStack_140 + lVar28) =
             (dVar74 * dVar53 + dVar55 * dVar69 + dVar57 * dVar77) / 3.0 - dVar71 * dVar93;
        *(double *)((long)adStack_140 + lVar28 + 0x18) =
             (dVar75 * dVar53 + dVar55 * dVar80 + dVar57 * dVar78) / 3.0 - dVar82 * dVar93;
        *(double *)((long)adStack_140 + lVar28 + 0x30) =
             (dVar76 * dVar53 + dVar55 * dVar81 + dVar57 * dVar79) / 3.0 - dVar52 * dVar93;
        lVar28 = lVar28 + 8;
      } while (lVar28 != 0x18);
      uVar22 = 0;
      pdVar87 = (double *)(adStack_140[0] + adStack_140[4] + adStack_140[8]);
      dVar53 = (adStack_140[0] - adStack_140[4]) - adStack_140[8];
      dVar55 = (adStack_140[4] - adStack_140[8]) - adStack_140[0];
      dVar57 = (adStack_140[8] - adStack_140[0]) - adStack_140[4];
      pdStack_1c0 = pdVar87;
      adStack_1b8[0] = adStack_140[5] - adStack_140[7];
      dStack_198 = dVar53;
      adStack_1b8[3] = adStack_140[5] - adStack_140[7];
      adStack_1b8[1] = adStack_140[6] - adStack_140[2];
      adStack_1b8[2] = adStack_140[1] - adStack_140[3];
      dStack_180 = adStack_140[6] - adStack_140[2];
      dStack_178 = adStack_140[1] + adStack_140[3];
      dStack_190 = adStack_140[1] + adStack_140[3];
      dStack_188 = adStack_140[6] + adStack_140[2];
      dStack_160 = adStack_140[1] - adStack_140[3];
      dStack_158 = adStack_140[6] + adStack_140[2];
      dStack_170 = dVar55;
      dStack_168 = adStack_140[5] + adStack_140[7];
      dStack_148 = dVar57;
      dStack_150 = adStack_140[5] + adStack_140[7];
      adStack_260[2] = 0.0;
      adStack_260[1] = 0.0;
      adStack_260[4] = 0.0;
      adStack_260[3] = 0.0;
      adStack_260[0] = 1.0;
      adStack_260[5] = 1.0;
      adStack_260[7] = 0.0;
      adStack_260[6] = 0.0;
      adStack_260[9] = 0.0;
      adStack_260[8] = 0.0;
      adStack_260[0xc] = 0.0;
      adStack_260[0xb] = 0.0;
      adStack_260[0xe] = 0.0;
      adStack_260[0xd] = 0.0;
      adStack_260[10] = 1.0;
      adStack_260[0xf] = 1.0;
      adStack_1d8[0] = dVar53;
      pdStack_1e0 = pdVar87;
      adStack_1d8[2] = dVar57;
      adStack_1d8[1] = dVar55;
      adStack_140[0xd] = 0.0;
      adStack_140[0xc] = 0.0;
      adStack_140[0xf] = 0.0;
      adStack_140[0xe] = 0.0;
      do {
        adStack_140[0xf] = 0.0;
        adStack_140[0xe] = 0.0;
        adStack_140[0xd] = 0.0;
        adStack_140[0xc] = 0.0;
        dVar93 = ABS(adStack_1b8[0]) + ABS(adStack_1b8[1]) + ABS(adStack_1b8[2]) + ABS(dStack_190) +
                 ABS(dStack_188) + ABS(dStack_168);
        pdStack_1e0 = pdVar87;
        adStack_1d8[0] = dVar53;
        adStack_1d8[1] = dVar55;
        adStack_1d8[2] = dVar57;
        if (dVar93 == 0.0) break;
        ppdVar17 = &pdStack_1c0;
        pdVar36 = adStack_260;
        dVar93 = dVar93 * 0.2 * 0.0625;
        if (2 < uVar22) {
          dVar93 = 0.0;
        }
        lVar28 = 2;
        uVar15 = 1;
        pdVar18 = adStack_1b8;
        pdVar19 = adStack_1b8 + 1;
        pdVar41 = &dStack_190;
        pdVar42 = &dStack_198;
        uVar44 = 0;
        pdVar45 = adStack_1b8;
        pdVar40 = adStack_260;
        do {
          pdVar40 = (double *)((long)pdVar40 + 8);
          lVar46 = 0;
          uVar1 = uVar44 + 1;
          pdVar24 = adStack_1b8 + uVar44 * 5;
          lVar25 = lVar28;
          uVar26 = uVar15;
          pdVar32 = pdVar40;
          pdVar33 = pdVar41;
          pdVar35 = pdVar19;
          pdVar37 = pdVar45;
          pdVar43 = pdVar42;
          do {
            dVar94 = *pdVar24;
            dVar95 = ABS(dVar94) * 100.0;
            if (((uVar22 < 4) ||
                (dVar95 + ABS(adStack_1d8[uVar44 - 1]) != ABS(adStack_1d8[uVar44 - 1]))) ||
               (dVar95 + ABS(adStack_1d8[uVar26 - 1]) != ABS(adStack_1d8[uVar26 - 1]))) {
              if (dVar93 < ABS(dVar94)) {
                dVar70 = adStack_1d8[uVar44 - 1];
                dVar89 = adStack_1d8[uVar26 - 1] - dVar70;
                dVar67 = ABS(adStack_1d8[uVar26 - 1] - dVar70);
                dVar96 = (dVar89 * 0.5) / dVar94;
                dVar97 = 1.0 / (ABS(dVar96) + SQRT(dVar96 * dVar96 + 1.0));
                dVar63 = -dVar97;
                if (0.0 <= dVar96) {
                  dVar63 = dVar97;
                }
                if (dVar95 + dVar67 == dVar67) {
                  dVar63 = dVar94 / dVar89;
                }
                dVar94 = dVar94 * dVar63;
                adStack_140[uVar44 + 0xc] = adStack_140[uVar44 + 0xc] - dVar94;
                adStack_140[uVar26 + 0xc] = dVar94 + adStack_140[uVar26 + 0xc];
                adStack_1d8[uVar44 - 1] = dVar70 - dVar94;
                adStack_1d8[uVar26 - 1] = dVar94 + adStack_1d8[uVar26 - 1];
                *pdVar24 = 0.0;
                dVar67 = 1.0 / SQRT(dVar63 * dVar63 + 1.0);
                dVar94 = dVar63 * dVar67;
                dVar95 = dVar94 / (dVar67 + 1.0);
                dVar63 = -(dVar63 * dVar67);
                ppdVar16 = ppdVar17;
                pdVar30 = pdVar37;
                for (uVar11 = uVar44; uVar11 != 0; uVar11 = uVar11 - 1) {
                  pdVar92 = *ppdVar16;
                  dVar67 = *pdVar30;
                  *ppdVar16 = (double *)
                              ((double)pdVar92 + (dVar67 + dVar95 * (double)pdVar92) * dVar63);
                  *pdVar30 = dVar67 + ((double)pdVar92 - dVar95 * dVar67) * dVar94;
                  ppdVar16 = ppdVar16 + 4;
                  pdVar30 = pdVar30 + 4;
                }
                pdVar30 = pdVar18;
                pdVar92 = pdVar43;
                lVar12 = lVar46;
                if (uVar1 < uVar26) {
                  do {
                    dVar67 = *pdVar30;
                    dVar70 = *pdVar92;
                    *pdVar30 = dVar67 + (dVar70 + dVar95 * dVar67) * dVar63;
                    *pdVar92 = dVar70 + (dVar67 - dVar95 * dVar70) * dVar94;
                    lVar12 = lVar12 + -1;
                    pdVar30 = pdVar30 + 1;
                    pdVar92 = pdVar92 + 4;
                  } while (lVar12 != 0);
                }
                pdVar30 = pdVar35;
                pdVar92 = pdVar33;
                lVar12 = lVar25;
                if (uVar26 < 3) {
                  do {
                    dVar67 = *pdVar30;
                    dVar70 = *pdVar92;
                    *pdVar30 = dVar67 + (dVar70 + dVar95 * dVar67) * dVar63;
                    *pdVar92 = dVar70 + (dVar67 - dVar95 * dVar70) * dVar94;
                    lVar12 = lVar12 + -1;
                    pdVar30 = pdVar30 + 1;
                    pdVar92 = pdVar92 + 1;
                  } while (lVar12 != 0);
                }
                lVar12 = 0;
                do {
                  dVar67 = *(double *)((long)pdVar36 + lVar12);
                  dVar70 = *(double *)((long)pdVar32 + lVar12);
                  *(double *)((long)pdVar36 + lVar12) = dVar67 + (dVar70 + dVar95 * dVar67) * dVar63
                  ;
                  *(double *)((long)pdVar32 + lVar12) = dVar70 + (dVar67 - dVar95 * dVar70) * dVar94
                  ;
                  lVar12 = lVar12 + 0x20;
                } while (lVar12 != 0x80);
              }
            }
            else {
              *pdVar24 = 0.0;
            }
            uVar26 = uVar26 + 1;
            pdVar24 = pdVar24 + 1;
            pdVar37 = pdVar37 + 1;
            lVar46 = lVar46 + 1;
            pdVar43 = pdVar43 + 1;
            lVar25 = lVar25 + -1;
            pdVar33 = pdVar33 + 5;
            pdVar35 = pdVar35 + 1;
            pdVar32 = pdVar32 + 1;
          } while (uVar26 != 4);
          uVar15 = uVar15 + 1;
          pdVar45 = pdVar45 + 1;
          ppdVar17 = ppdVar17 + 1;
          pdVar42 = pdVar42 + 5;
          pdVar18 = pdVar18 + 5;
          lVar28 = lVar28 + -1;
          pdVar41 = pdVar41 + 5;
          pdVar19 = pdVar19 + 5;
          pdVar36 = pdVar36 + 1;
          uVar44 = uVar1;
        } while (uVar1 != 3);
        pdVar87 = (double *)(adStack_140[0xc] + (double)pdVar87);
        dVar53 = adStack_140[0xd] + dVar53;
        dVar55 = adStack_140[0xe] + dVar55;
        dVar57 = adStack_140[0xf] + dVar57;
        adStack_1d8[0] = dVar53;
        pdStack_1e0 = pdVar87;
        adStack_1d8[2] = dVar57;
        adStack_1d8[1] = dVar55;
        adStack_140[0xd] = 0.0;
        adStack_140[0xc] = 0.0;
        adStack_140[0xf] = 0.0;
        adStack_140[0xe] = 0.0;
        uVar22 = uVar22 + 1;
      } while (uVar22 != 0x32);
      adStack_140[0xf] = 0.0;
      adStack_140[0xe] = 0.0;
      adStack_140[0xd] = 0.0;
      adStack_140[0xc] = 0.0;
      uVar15 = 0;
      lVar28 = 1;
      pdVar87 = pdStack_1e0;
      do {
        uVar22 = (uint)lVar28;
        pdVar36 = (double *)adStack_1d8[lVar28 + -1];
        if (adStack_1d8[lVar28 + -1] <= (double)pdVar87) {
          uVar22 = (uint)uVar15;
          pdVar36 = pdVar87;
        }
        pdVar87 = pdVar36;
        uVar15 = (ulong)uVar22;
        lVar28 = lVar28 + 1;
      } while (lVar28 != 4);
      lVar28 = 0;
      uVar15 = -(ulong)(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3;
      do {
        *(undefined8 *)((long)adStack_140 + lVar28 + 0x60) =
             *(undefined8 *)((long)adStack_260 + uVar15);
        uVar15 = uVar15 + 0x20;
        lVar28 = lVar28 + 8;
      } while (lVar28 != 0x20);
      lVar28 = 0;
      dVar94 = adStack_140[0xc] * adStack_140[0xc];
      dVar95 = adStack_140[0xd] * adStack_140[0xd];
      dVar70 = adStack_140[0xe] * adStack_140[0xe];
      dVar89 = adStack_140[0xf] * adStack_140[0xf];
      dVar93 = adStack_140[0xc] * adStack_140[0xd];
      dVar96 = adStack_140[0xc] * adStack_140[0xe];
      dVar53 = adStack_140[0xc] * adStack_140[0xf];
      dVar55 = adStack_140[0xd] * adStack_140[0xe];
      dVar57 = adStack_140[0xd] * adStack_140[0xf];
      dVar63 = adStack_140[0xe] * adStack_140[0xf];
      dVar67 = dVar55 - dVar53;
      (&uStack_430)[uVar29 * 9] = ((dVar94 + dVar95) - dVar70) - dVar89;
      (&dStack_428)[uVar29 * 9] = dVar67 + dVar67;
      dVar67 = dVar96 + dVar57;
      dVar55 = dVar55 + dVar53;
      (&pdStack_420)[uVar29 * 9] = (double *)(dVar67 + dVar67);
      (&dStack_418)[uVar29 * 9] = dVar55 + dVar55;
      dVar53 = dVar63 - dVar93;
      (&puStack_410)[uVar29 * 9] = (undefined1 *)(((dVar94 + dVar70) - dVar95) - dVar89);
      adStack_408[uVar29 * 9] = dVar53 + dVar53;
      dVar57 = dVar57 - dVar96;
      dVar93 = dVar93 + dVar63;
      adStack_408[uVar29 * 9 + 1] = dVar57 + dVar57;
      adStack_408[uVar29 * 9 + 2] = dVar93 + dVar93;
      adStack_408[uVar29 * 9 + 3] = ((dVar94 + dVar89) - dVar95) - dVar70;
      pdVar87 = pdVar13;
      do {
        *(double *)((long)pdVar49 + lVar28) =
             *(double *)((long)adStack_140 + lVar28 + 0x48) -
             (dVar82 * *pdVar87 + dVar71 * pdVar87[-1] + dVar52 * pdVar87[1]);
        lVar28 = lVar28 + 8;
        pdVar87 = pdVar87 + 3;
      } while (lVar28 != 0x18);
      uVar29 = uVar29 + 1;
      pdVar49 = pdVar49 + 3;
      pdVar13 = pdVar13 + 9;
    } while (uVar29 != uVar21);
    uVar29 = 0;
    dVar71 = *param_1;
    dVar82 = param_1[1];
    ppuVar31 = &puStack_410;
    dVar50 = 0.0;
    pdVar13 = adStack_490 + 2;
    iVar27 = 0;
    do {
      dVar52 = *pdVar13 +
               dVar60 * (double)ppuVar31[3] + dVar65 * (double)ppuVar31[2] +
               dVar61 * (double)ppuVar31[4];
      dVar51 = (param_1[2] +
               (dVar71 * (pdVar13[-2] +
                         dVar60 * (double)ppuVar31[-3] + dVar65 * (double)ppuVar31[-4] +
                         dVar61 * (double)ppuVar31[-2])) / dVar52) - dVar64;
      dVar52 = (param_1[3] +
               (dVar82 * (pdVar13[-1] +
                         dVar60 * (double)*ppuVar31 + dVar65 * (double)ppuVar31[-1] +
                         dVar61 * (double)ppuVar31[1])) / dVar52) - dVar59;
      dVar51 = dVar52 * dVar52 + dVar51 * dVar51;
      iVar8 = (int)uVar29;
      if (dVar50 <= dVar51 && uVar29 != 0) {
        iVar8 = iVar27;
        dVar51 = dVar50;
      }
      dVar50 = dVar51;
      uVar29 = uVar29 + 1;
      ppuVar31 = ppuVar31 + 9;
      pdVar13 = pdVar13 + 3;
      iVar27 = iVar8;
    } while (uVar21 != uVar29);
    lVar28 = (long)iVar8;
    dStack_4f8 = adStack_490[lVar28 * 3 + 1];
    dStack_500 = adStack_490[lVar28 * 3];
    dStack_4f0 = adStack_490[lVar28 * 3 + 2];
    lVar28 = (long)iVar8;
    dStack_4b8 = adStack_408[lVar28 * 9];
    puStack_4c0 = (&puStack_410)[lVar28 * 9];
    dStack_4a8 = adStack_408[lVar28 * 9 + 2];
    dStack_4b0 = adStack_408[lVar28 * 9 + 1];
    dStack_4a0 = adStack_408[lVar28 * 9 + 3];
    dStack_4d8 = (&dStack_428)[lVar28 * 9];
    dVar53 = (double)(&uStack_430)[lVar28 * 9];
    dStack_4c8 = (&dStack_418)[lVar28 * 9];
    pdStack_4d0 = (&pdStack_420)[lVar28 * 9];
    uVar23 = 1;
    dStack_4e0 = dVar53;
  }
  uStack_3f0 = (ulong)&uStack_430 | 8;
  pdStack_420 = &dStack_500;
  lStack_3f8 = 0;
  adStack_408[1] = 0.0;
  dStack_428 = 2.12199579244747e-314;
  uStack_430 = 0x242ff4006;
  uStack_3d8 = 8;
  uStack_3e0 = 8;
  puStack_410 = auStack_4e8;
  pdStack_1c0 = (double *)CONCAT44(pdStack_1c0._4_4_,0x2010000);
  adStack_1b8[1] = 0.0;
  dStack_418 = (double)pdStack_420;
  adStack_408[0] = (double)puStack_410;
  puStack_3e8 = &uStack_3e0;
  adStack_1b8[0] = param_3;
  FUN_109a479a0(&uStack_430,&pdStack_1c0);
  if (lStack_3f8 != 0) {
    piVar2 = (int *)(lStack_3f8 + 0x14);
    do {
      iVar27 = *piVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar10) {
        *piVar2 = iVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar27 + -1 == 0) {
      func_0x000109a848d4(&uStack_430);
    }
  }
  lStack_3f8 = 0;
  dStack_418 = 0.0;
  pdStack_420 = (double *)0x0;
  adStack_408[0] = 0.0;
  puStack_410 = (undefined1 *)0x0;
  if (0 < uStack_430._4_4_) {
    lVar28 = 0;
    do {
      *(undefined4 *)(uStack_3f0 + lVar28 * 4) = 0;
      lVar28 = lVar28 + 1;
    } while (lVar28 < uStack_430._4_4_);
  }
  if (puStack_3e8 != &uStack_3e0 && puStack_3e8 != (undefined8 *)0x0) {
    _free(puStack_3e8[-1]);
  }
  uStack_3f0 = (ulong)&uStack_430 | 8;
  pdStack_420 = &dStack_4e0;
  lStack_3f8 = 0;
  adStack_408[1] = 0.0;
  dStack_428 = 6.36598737437801e-314;
  uStack_430 = 0x242ff4006;
  uStack_3d8 = 8;
  uStack_3e0 = 0x18;
  puStack_410 = auStack_498;
  pdStack_1c0 = (double *)CONCAT44(pdStack_1c0._4_4_,0x2010000);
  adStack_1b8[1] = 0.0;
  ppdVar16 = &pdStack_1c0;
  dStack_418 = (double)pdStack_420;
  adStack_408[0] = (double)puStack_410;
  puStack_3e8 = &uStack_3e0;
  adStack_1b8[0] = param_2;
  FUN_109a479a0(&uStack_430);
  if (lStack_3f8 != 0) {
    piVar2 = (int *)(lStack_3f8 + 0x14);
    do {
      iVar27 = *piVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar10) {
        *piVar2 = iVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar27 + -1 == 0) {
      func_0x000109a848d4(&uStack_430);
    }
  }
  lStack_3f8 = 0;
  dVar50 = 0.0;
  dStack_418 = 0.0;
  pdStack_420 = (double *)0x0;
  adStack_408[0] = 0.0;
  puStack_410 = (undefined1 *)0x0;
  if (0 < uStack_430._4_4_) {
    lVar28 = 0;
    do {
      *(undefined4 *)(uStack_3f0 + lVar28 * 4) = 0;
      lVar28 = lVar28 + 1;
    } while (lVar28 < uStack_430._4_4_);
  }
  if (puStack_3e8 != &uStack_3e0 && puStack_3e8 != (undefined8 *)0x0) {
    _free(puStack_3e8[-1]);
  }
  pdVar13 = pdStack_518;
  if (pdStack_518 != (double *)0x0) {
    pdStack_510 = pdStack_518;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return uVar23;
  }
  ___stack_chk_fail();
  if ((int)ppdVar16 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_430);
    if (pdStack_518 != (double *)0x0) {
      pdStack_510 = pdStack_518;
      __ZdlPv();
    }
  }
  __Unwind_Resume();
  if (dVar50 == 0.0) {
    if (dVar53 == 0.0) {
      if (dVar71 != 0.0) {
        dVar71 = -dVar82 / dVar71;
        goto LAB_109b9e7b4;
      }
    }
    else {
      *ppdVar17 = (double *)0x0;
      dVar82 = dVar53 * -4.0 * dVar82 + dVar71 * dVar71;
      if (0.0 <= dVar82) {
        dVar53 = 0.5 / dVar53;
        pdVar87 = (double *)(dVar53 * (-dVar71 - SQRT(dVar82)));
        pdVar49 = (double *)(dVar53 * (SQRT(dVar82) - dVar71));
        if (dVar82 == 0.0) {
          pdVar87 = (double *)-(dVar71 * dVar53);
          pdVar49 = (double *)-(dVar71 * dVar53);
        }
        uVar23 = 2;
        if (dVar82 == 0.0) {
          uVar23 = 1;
        }
        *pdVar13 = (double)pdVar49;
        *ppdVar16 = pdVar87;
        return uVar23;
      }
    }
    return 0;
  }
  dVar50 = 1.0 / dVar50;
  dVar53 = dVar50 * dVar53;
  dVar51 = (dVar50 * dVar71 * 3.0 - dVar53 * dVar53) / 9.0;
  dVar71 = (dVar50 * dVar82 * -27.0 + dVar50 * dVar71 * dVar53 * 9.0 +
           dVar53 * dVar53 * dVar53 * -2.0) / 54.0;
  dVar53 = dVar53 * 0.3333333333333333;
  if (dVar51 == 0.0) {
    if (dVar71 == 0.0) {
      pdVar49 = (double *)-dVar53;
      *ppdVar17 = pdVar49;
      *ppdVar16 = pdVar49;
      *pdVar13 = (double)pdVar49;
      return 3;
    }
    dVar71 = dVar71 + dVar71;
    _pow();
  }
  else {
    dVar82 = dVar51 * dVar51 * dVar51;
    dVar50 = dVar82 + dVar71 * dVar71;
    if (dVar50 <= 0.0) {
      dVar71 = dVar71 / SQRT(-dVar82);
      _acos();
      dVar50 = SQRT(-dVar51) + SQRT(-dVar51);
      dVar82 = dVar71 / 3.0;
      _cos();
      *pdVar13 = dVar50 * dVar82 - dVar53;
      dVar82 = (dVar71 + 6.283185307179586) / 3.0;
      _cos();
      *ppdVar16 = (double *)(dVar50 * dVar82 - dVar53);
      dVar71 = (dVar71 + 12.566370614359172) / 3.0;
      _cos();
      *ppdVar17 = (double *)(dVar50 * dVar71 - dVar53);
      return 3;
    }
    dVar82 = ABS(dVar71) + SQRT(dVar50);
    _pow();
    dVar50 = 0.0;
    dVar52 = -1.0;
    if (0.0 <= dVar71) {
      dVar52 = 0.0;
    }
    dVar68 = 1.0;
    if (dVar71 <= 0.0) {
      dVar68 = dVar52;
    }
    dVar68 = dVar68 * dVar82;
    if (dVar68 != 0.0) {
      dVar50 = -dVar51 / dVar68;
    }
    dVar71 = dVar68 + dVar50;
  }
  dVar71 = dVar71 - dVar53;
LAB_109b9e7b4:
  *pdVar13 = dVar71;
  return 1;
}



/* Entry: 109b9e620; end: 109b9e847;  */

undefined4
FUN_109b9e620(double param_1,double param_2,double param_3,double param_4,double *param_5,
             double *param_6,double *param_7)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (param_1 != 0.0) {
    param_1 = 1.0 / param_1;
    param_2 = param_1 * param_2;
    dVar2 = (param_1 * param_3 * 3.0 - param_2 * param_2) / 9.0;
    param_3 = (param_1 * param_4 * -27.0 + param_1 * param_3 * param_2 * 9.0 +
              param_2 * param_2 * param_2 * -2.0) / 54.0;
    param_2 = param_2 * 0.3333333333333333;
    if (dVar2 == 0.0) {
      if (param_3 == 0.0) {
        param_2 = -param_2;
        *param_7 = param_2;
        *param_6 = param_2;
        *param_5 = param_2;
        return 3;
      }
      param_3 = param_3 + param_3;
      _pow();
    }
    else {
      dVar3 = dVar2 * dVar2 * dVar2;
      dVar5 = dVar3 + param_3 * param_3;
      if (dVar5 <= 0.0) {
        param_3 = param_3 / SQRT(-dVar3);
        _acos();
        dVar3 = SQRT(-dVar2) + SQRT(-dVar2);
        dVar2 = param_3 / 3.0;
        _cos();
        *param_5 = dVar3 * dVar2 - param_2;
        dVar2 = (param_3 + 6.283185307179586) / 3.0;
        _cos();
        *param_6 = dVar3 * dVar2 - param_2;
        dVar2 = (param_3 + 12.566370614359172) / 3.0;
        _cos();
        *param_7 = dVar3 * dVar2 - param_2;
        return 3;
      }
      dVar3 = ABS(param_3) + SQRT(dVar5);
      _pow();
      dVar5 = 0.0;
      dVar6 = -1.0;
      if (0.0 <= param_3) {
        dVar6 = 0.0;
      }
      dVar4 = 1.0;
      if (param_3 <= 0.0) {
        dVar4 = dVar6;
      }
      dVar4 = dVar4 * dVar3;
      if (dVar4 != 0.0) {
        dVar5 = -dVar2 / dVar4;
      }
      param_3 = dVar4 + dVar5;
    }
    param_3 = param_3 - param_2;
LAB_109b9e7b4:
    *param_5 = param_3;
    return 1;
  }
  if (param_2 == 0.0) {
    if (param_3 != 0.0) {
      param_3 = -param_4 / param_3;
      goto LAB_109b9e7b4;
    }
  }
  else {
    *param_7 = 0.0;
    dVar2 = param_2 * -4.0 * param_4 + param_3 * param_3;
    if (0.0 <= dVar2) {
      param_2 = 0.5 / param_2;
      dVar5 = param_2 * (-param_3 - SQRT(dVar2));
      dVar3 = param_2 * (SQRT(dVar2) - param_3);
      if (dVar2 == 0.0) {
        dVar5 = -(param_3 * param_2);
        dVar3 = -(param_3 * param_2);
      }
      uVar1 = 2;
      if (dVar2 == 0.0) {
        uVar1 = 1;
      }
      *param_5 = dVar3;
      *param_6 = dVar5;
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 109b9e848; end: 109b9ea6f;  */

double * FUN_109b9e848(double param_1,double param_2,double param_3,double param_4,double param_5,
                      double *param_6,double *param_7,double *param_8,double *param_9)

{
  double *pdVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  double dStack_68;
  
  if (param_1 == 0.0) {
    *param_9 = 0.0;
    if (param_2 != 0.0) {
      param_2 = 1.0 / param_2;
      param_3 = param_2 * param_3;
      dVar3 = (param_2 * param_4 * 3.0 - param_3 * param_3) / 9.0;
      param_4 = (param_2 * param_5 * -27.0 + param_2 * param_4 * param_3 * 9.0 +
                param_3 * param_3 * param_3 * -2.0) / 54.0;
      param_3 = param_3 * 0.3333333333333333;
      if (dVar3 == 0.0) {
        if (param_4 == 0.0) {
          param_3 = -param_3;
          *param_8 = param_3;
          *param_7 = param_3;
          *param_6 = param_3;
          return (double *)0x3;
        }
        param_4 = param_4 + param_4;
        _pow();
      }
      else {
        dVar4 = dVar3 * dVar3 * dVar3;
        dVar6 = dVar4 + param_4 * param_4;
        if (dVar6 <= 0.0) {
          param_4 = param_4 / SQRT(-dVar4);
          _acos();
          dVar4 = SQRT(-dVar3) + SQRT(-dVar3);
          dVar3 = param_4 / 3.0;
          _cos();
          *param_6 = dVar4 * dVar3 - param_3;
          dVar3 = (param_4 + 6.283185307179586) / 3.0;
          _cos();
          *param_7 = dVar4 * dVar3 - param_3;
          dVar3 = (param_4 + 12.566370614359172) / 3.0;
          _cos();
          *param_8 = dVar4 * dVar3 - param_3;
          return (double *)0x3;
        }
        dVar4 = ABS(param_4) + SQRT(dVar6);
        _pow();
        dVar6 = 0.0;
        dVar7 = -1.0;
        if (0.0 <= param_4) {
          dVar7 = 0.0;
        }
        dVar5 = 1.0;
        if (param_4 <= 0.0) {
          dVar5 = dVar7;
        }
        dVar5 = dVar5 * dVar4;
        if (dVar5 != 0.0) {
          dVar6 = -dVar3 / dVar5;
        }
        param_4 = dVar5 + dVar6;
      }
      param_4 = param_4 - param_3;
LAB_109b9e7b4:
      *param_6 = param_4;
      return (double *)0x1;
    }
    if (param_3 == 0.0) {
      if (param_4 != 0.0) {
        param_4 = -param_5 / param_4;
        goto LAB_109b9e7b4;
      }
    }
    else {
      *param_8 = 0.0;
      dVar3 = param_3 * -4.0 * param_5 + param_4 * param_4;
      if (0.0 <= dVar3) {
        param_3 = 0.5 / param_3;
        dVar6 = param_3 * (-param_4 - SQRT(dVar3));
        dVar4 = param_3 * (SQRT(dVar3) - param_4);
        if (dVar3 == 0.0) {
          dVar6 = -(param_4 * param_3);
          dVar4 = -(param_4 * param_3);
        }
        uVar2 = 2;
        if (dVar3 == 0.0) {
          uVar2 = 1;
        }
        *param_6 = dVar4;
        *param_7 = dVar6;
        return (double *)(ulong)uVar2;
      }
    }
    return (double *)0x0;
  }
  param_1 = 1.0 / param_1;
  param_2 = param_1 * param_2;
  dVar4 = param_1 * param_3;
  param_4 = param_1 * param_4;
  param_5 = param_1 * param_5;
  dVar3 = param_2 * param_2;
  pdVar1 = &dStack_68;
  FUN_109b9e620(0x3ff0000000000000,-(param_1 * param_3),param_5 * -4.0 + param_2 * param_4,
                (-(param_4 * param_4) + param_5 * dVar4 * 4.0) - param_5 * dVar3,pdVar1,auStack_70,
                auStack_78);
  if ((int)pdVar1 == 0) {
    return pdVar1;
  }
  dVar6 = -(param_1 * param_3) + dVar3 * 0.25 + dStack_68;
  if (0.0 <= dVar6) {
    dVar7 = SQRT(dVar6);
    if (1e-11 <= dVar7) {
      dVar6 = (dVar4 * -2.0 + dVar3 * 0.75) - dVar6;
      dVar3 = ((param_4 * -8.0 + param_2 * dVar4 * 4.0) - param_2 * dVar3) * (1.0 / dVar7) * 0.25;
      dVar4 = dVar6 + dVar3;
      dVar6 = dVar6 - dVar3;
    }
    else {
      dVar6 = param_5 * -4.0 + dStack_68 * dStack_68;
      if (dVar6 < 0.0) goto LAB_109b9e934;
      dVar6 = SQRT(dVar6);
      dVar4 = dVar4 * -2.0 + dVar3 * 0.75 + dVar6 * 2.0;
      dVar6 = dVar4 + dVar6 * -4.0;
    }
    if (0.0 <= dVar4) {
      dVar3 = (dVar7 * 0.5 + SQRT(dVar4) * 0.5) - param_2 * 0.25;
      *param_6 = dVar3;
      *param_7 = dVar3 - SQRT(dVar4);
      if (dVar6 < 0.0) {
        return (double *)0x2;
      }
      pdVar1 = (double *)0x4;
    }
    else {
      if (dVar6 < 0.0) goto LAB_109b9e934;
      pdVar1 = (double *)0x2;
      param_9 = param_7;
      param_8 = param_6;
    }
    dVar3 = (SQRT(dVar6) * 0.5 - dVar7 * 0.5) - param_2 * 0.25;
    *param_8 = dVar3;
    *param_9 = dVar3 - SQRT(dVar6);
  }
  else {
LAB_109b9e934:
    pdVar1 = (double *)0x0;
  }
  return pdVar1;
}



/* Entry: 109b9ea70; end: 109b9ebd7;  */

long FUN_109b9ea70(double param_1,double param_2,uint param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  if (0 < (int)param_3) {
    dVar6 = 0.0;
    if (0.0 <= param_2) {
      dVar6 = param_2;
    }
    dVar5 = 1.0;
    if (dVar6 <= 1.0) {
      dVar5 = dVar6;
    }
    dVar5 = 1.0 - dVar5;
    _pow(dVar5,(double)param_3);
    dVar5 = 1.0 - dVar5;
    if (2.2250738585072014e-308 <= dVar5) {
      dVar6 = 0.0;
      if (0.0 <= param_1) {
        dVar6 = param_1;
      }
      dVar7 = 1.0;
      if (dVar6 <= 1.0) {
        dVar7 = dVar6;
      }
      dVar6 = 2.2250738585072014e-308;
      if (2.2250738585072014e-308 <= 1.0 - dVar7) {
        dVar6 = 1.0 - dVar7;
      }
      _log();
      _log();
      dVar7 = -dVar6;
      dVar8 = -(dVar5 * (double)(int)param_4);
      bVar2 = false;
      bVar3 = false;
      if (dVar5 < 0.0) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar8) && !NAN(dVar7)) {
          bVar2 = dVar8 == dVar7;
          bVar3 = dVar7 <= dVar8;
        }
      }
      if (bVar3 && !bVar2) {
        param_4 = (long)(double)(long)(dVar6 / dVar5);
      }
    }
    else {
      param_4 = 0;
    }
    return param_4;
  }
  puVar4 = (undefined4 *)0x34;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar4 + 3) = 0x6f6d20666f207265;
  *(undefined8 *)(puVar4 + 1) = 0x626d756e20656874;
  *puVar4 = 1;
  puStack_50 = puVar4 + 1;
  uStack_48 = 0x2d;
  *(undefined1 *)((long)puVar4 + 0x31) = 0;
  *(undefined8 *)(puVar4 + 7) = 0x6c756f6873207374;
  *(undefined8 *)(puVar4 + 5) = 0x6e696f70206c6564;
  *(undefined8 *)((long)puVar4 + 0x29) = 0x6576697469736f70;
  *(undefined8 *)((long)puVar4 + 0x21) = 0x20656220646c756f;
  FUN_109ac3188(0xffffff2d,&puStack_50,&UNK_10f5a2d8c,&UNK_10f5a2da1,0x38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109b9ebac);
  (*pcVar1)();
}



/* Entry: 109b9ebd8; end: 109b9ed53;  */

void FUN_109b9ebd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  *puVar4 = &PTR_FUN_110b29bc8;
  lVar6 = *param_4;
  puVar4[2] = param_4[1];
  puVar4[1] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(puVar4 + 3) = param_5;
  puVar4[4] = param_2;
  puVar4[5] = param_3;
  *(undefined4 *)(puVar4 + 6) = param_6;
  *(undefined1 *)((long)puVar4 + 0x1c) = 0;
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar5 + 1) = 1;
  *puVar5 = &PTR_FUN_110b29cd0;
  puVar5[2] = puVar4;
  *param_1 = puVar5;
  param_1[1] = puVar4;
  return;
}



/* Entry: 109b9ed54; end: 109b9edb3;  */

undefined8 * FUN_109b9ed54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b29bc8;
  FUN_109b98b28(param_1 + 1);
  return param_1;
}



/* Entry: 109b9edb4; end: 109b9ee03;  */

void FUN_109b9edb4(long param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar2;
  *(long *)(param_1 + 0x10) = lVar3;
  FUN_109b98b28(&uStack_20);
  return;
}



/* Entry: 109b9ee04; end: 109ba022b;  */

long * FUN_109b9ee04(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                    ulong *param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  ulong *puVar13;
  uint *puVar14;
  undefined8 *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  long lVar19;
  undefined1 *puVar20;
  uint uVar21;
  long lVar22;
  uint *puVar23;
  float *pfVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  undefined4 *puVar28;
  ulong uVar29;
  int iVar30;
  int iVar31;
  long *plVar32;
  uint *puVar33;
  int *unaff_x22;
  undefined8 *puVar34;
  uint uVar35;
  undefined8 *puVar36;
  int iVar37;
  undefined8 *puVar38;
  ulong uVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  double dVar42;
  undefined1 auVar43 [16];
  float fVar44;
  undefined4 *puStack_ac0;
  undefined8 *puStack_ab8;
  undefined8 uStack_ab0;
  long lStack_aa8;
  uint uStack_a60;
  uint uStack_a40;
  long lStack_a20;
  undefined1 auStack_9e8 [1056];
  undefined8 uStack_5c8;
  uint *puStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 *puStack_580;
  uint *puStack_578;
  int *piStack_570;
  uint *puStack_568;
  uint *puStack_560;
  uint *puStack_558;
  undefined1 *puStack_550;
  code *pcStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  uint *puStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  int iStack_4f8;
  uint uStack_4f4;
  uint auStack_4f0 [2];
  uint *puStack_4e8;
  undefined8 uStack_4e0;
  uint uStack_4d8;
  int iStack_4d4;
  uint *puStack_4d0;
  undefined8 uStack_4c8;
  uint uStack_4c0;
  uint uStack_4bc;
  int iStack_4b8;
  int iStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  long lStack_488;
  int *piStack_480;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_458;
  int iStack_450;
  int iStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  long lStack_420;
  int *piStack_418;
  undefined8 *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  ulong uStack_3f8;
  uint uStack_3f0;
  undefined8 uStack_3ec;
  undefined4 uStack_3e4;
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
  long lStack_3b8;
  long lStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  uint uStack_390;
  undefined8 uStack_38c;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  long lStack_358;
  long lStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  uint uStack_330;
  undefined8 uStack_32c;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  uint uStack_2d0;
  undefined8 uStack_2cc;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  long lStack_298;
  long lStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [4];
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  long lStack_238;
  undefined1 *puStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  uint uStack_210;
  undefined8 uStack_20c;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
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
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  uint *puStack_e8;
  undefined4 *puStack_e0;
  uint *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  int *piStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar23 = param_5;
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(param_2 + 2);
    uStack_110 = (ulong)&uStack_150 | 8;
    uStack_150 = *puVar13;
    uStack_148 = puVar13[1];
    uStack_138 = puVar13[3];
    uStack_140 = puVar13[2];
    uStack_130 = puVar13[4];
    uStack_128 = puVar13[5];
    uStack_118 = puVar13[7];
    uStack_120 = puVar13[6];
    puStack_108 = &uStack_100;
    uStack_f8 = 0;
    uStack_100 = 0;
    if (puVar13[7] != 0) {
      piVar8 = (int *)(puVar13[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = *piVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      uStack_100 = *(undefined8 *)puVar13[9];
      uStack_f8 = ((undefined8 *)puVar13[9])[1];
    }
    else {
      uStack_150 = uStack_150 & 0xffffffff;
      func_0x000109a84868(&uStack_150);
    }
  }
  else {
    FUN_109a8a180(&uStack_150,param_2,0xffffffff);
  }
  puStack_510 = param_4;
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(param_3 + 2);
    uStack_170 = (ulong)&uStack_1b0 | 8;
    uStack_1b0 = *puVar13;
    uStack_1a8 = puVar13[1];
    uStack_198 = puVar13[3];
    uStack_1a0 = puVar13[2];
    uStack_190 = puVar13[4];
    uStack_188 = puVar13[5];
    uStack_178 = puVar13[7];
    uStack_180 = puVar13[6];
    puStack_168 = &uStack_160;
    uStack_158 = 0;
    uStack_160 = 0;
    if (puVar13[7] != 0) {
      piVar8 = (int *)(puVar13[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = *piVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      uStack_160 = *(undefined8 *)puVar13[9];
      uStack_158 = ((undefined8 *)puVar13[9])[1];
    }
    else {
      uStack_1b0 = uStack_1b0 & 0xffffffff;
      func_0x000109a84868(&uStack_1b0);
    }
  }
  else {
    FUN_109a8a180(&uStack_1b0,param_3,0xffffffff);
  }
  uStack_210 = 0x42ff0000;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_20c = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  lStack_1d0 = (long)&uStack_20c + 4;
  uStack_1e4 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  puVar34 = &uStack_1c0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  auStack_270._0_4_ = 0x42ff0000;
  puStack_230 = auStack_268;
  uStack_264 = 0;
  uStack_260 = 0;
  stack0xfffffffffffffd94 = 0;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_25c = 0;
  uStack_258 = 0;
  uStack_244 = 0;
  uStack_24c = 0;
  uStack_248 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  puVar36 = &uStack_220;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_2d0 = 0x42ff0000;
  lStack_290 = (long)&uStack_2cc + 4;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2cc = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2a4 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  puVar38 = &uStack_280;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_330 = 0x42ff0000;
  lStack_2f0 = (long)&uStack_32c + 4;
  uStack_324 = 0;
  uStack_320 = 0;
  uStack_32c = 0;
  uStack_314 = 0;
  uStack_310 = 0;
  uStack_31c = 0;
  uStack_318 = 0;
  uStack_304 = 0;
  uStack_30c = 0;
  uStack_308 = 0;
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  puVar40 = &uStack_2e0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_390 = 0x42ff0000;
  lStack_350 = (long)&uStack_38c + 4;
  uStack_384 = 0;
  uStack_380 = 0;
  uStack_38c = 0;
  uStack_374 = 0;
  uStack_370 = 0;
  uStack_37c = 0;
  uStack_378 = 0;
  uStack_364 = 0;
  uStack_36c = 0;
  uStack_368 = 0;
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_35c = 0;
  puVar41 = &uStack_340;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_3f0 = 0x42ff0000;
  lStack_3b0 = (long)&uStack_3ec + 4;
  uStack_3e4 = 0;
  uStack_3e0 = 0;
  uStack_3ec = 0;
  uStack_3d4 = 0;
  uStack_3d0 = 0;
  uStack_3dc = 0;
  uStack_3d8 = 0;
  uStack_3c4 = 0;
  uStack_3cc = 0;
  uStack_3c8 = 0;
  lStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3bc = 0;
  puStack_500 = &uStack_3a0;
  uVar7 = param_1[0xc];
  if ((int)uVar7 < 2) {
    uVar7 = 1;
  }
  puVar33 = (uint *)(ulong)uVar7;
  uVar7 = (uint)uStack_150 >> 3 & 0x1ff;
  iVar6 = uStack_148._4_4_;
  if (uVar7 != 0) {
    iVar6 = uVar7 + 1;
  }
  uStack_3a0 = 0;
  uStack_398 = 0;
  puVar15 = &uStack_150;
  puStack_3a8 = puStack_500;
  puStack_348 = puVar41;
  puStack_2e8 = puVar40;
  puStack_288 = puVar38;
  puStack_228 = puVar36;
  puStack_1c8 = puVar34;
  FUN_109a89cd4(puVar15,iVar6,0xffffffff,1);
  uStack_4f4 = (uint)puVar15;
  uVar7 = (uint)uStack_1b0 >> 3 & 0x1ff;
  uVar35 = uStack_1a8._4_4_;
  if (uVar7 != 0) {
    uVar35 = uVar7 + 1;
  }
  puVar14 = (uint *)(ulong)uVar35;
  puVar9 = (uint *)&uStack_1b0;
  puVar16 = (uint *)0xffffffff;
  puVar17 = (uint *)0x1;
  FUN_109a89cd4();
  iVar6 = (int)param_7;
  uStack_3f8 = 0xffffffffffffffff;
  if (*(long *)(param_1 + 4) == 0) {
    puVar12 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    uStack_458 = puVar12 + 1;
    *(undefined2 *)uStack_458 = 0x6263;
    iStack_450 = 2;
    iStack_44c = 0;
    *(undefined1 *)((long)puVar12 + 6) = 0;
    FUN_109ac3188(0xffffff29,&uStack_458,&UNK_10f55a6e6,&UNK_10f5a2da1,0xb1);
    goto LAB_109ba0088;
  }
  if ((*(double *)(param_1 + 10) <= 0.0) || (1.0 <= *(double *)(param_1 + 10))) {
    puVar12 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    uStack_458 = puVar12 + 1;
    iStack_450 = 0x20;
    iStack_44c = 0;
    *(undefined1 *)(puVar12 + 9) = 0;
    *(undefined8 *)(puVar12 + 3) = 0x262030203e206563;
    *(undefined8 *)(puVar12 + 1) = 0x6e656469666e6f63;
    *(undefined8 *)(puVar12 + 7) = 0x31203c2065636e65;
    *(undefined8 *)(puVar12 + 5) = 0x6469666e6f632026;
    FUN_109ac3188(0xffffff29,&uStack_458,&UNK_10f55a6e6,&UNK_10f5a2da1,0xb2);
    goto LAB_109ba0088;
  }
  if (((int)uStack_4f4 < 0) || ((uint)puVar9 != uStack_4f4)) {
    puVar12 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    uStack_458 = puVar12 + 1;
    iStack_450 = 0x1d;
    iStack_44c = 0;
    *(undefined1 *)((long)puVar12 + 0x21) = 0;
    *(undefined8 *)(puVar12 + 3) = 0x6f63202626203020;
    *(undefined8 *)(puVar12 + 1) = 0x3d3e20746e756f63;
    *(undefined8 *)((long)puVar12 + 0x19) = 0x746e756f63203d3d;
    *(undefined8 *)((long)puVar12 + 0x11) = 0x2032746e756f6320;
    FUN_109ac3188(0xffffff29,&uStack_458,&UNK_10f55a6e6,&UNK_10f5a2da1,0xb4);
    goto LAB_109ba0088;
  }
  if ((int)uStack_4f4 < (int)param_1[6]) {
    plVar32 = (long *)0x0;
    goto LAB_109b9fb40;
  }
  uStack_458._0_4_ = 0x42ff0000;
  iStack_44c = 0;
  uStack_448 = 0;
  uStack_458._4_4_ = 0;
  iStack_450 = 0;
  piStack_418 = &iStack_450;
  uStack_43c = 0;
  uStack_438 = 0;
  uStack_444 = 0;
  uStack_440 = 0;
  uStack_42c = 0;
  uStack_434 = 0;
  uStack_430 = 0;
  lStack_420 = 0;
  uStack_428 = 0;
  uStack_424 = 0;
  puStack_518 = &uStack_408;
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_4c0 = 0x42ff0000;
  unaff_x22 = (int *)((ulong)&uStack_4c0 | 8);
  iStack_4b4 = 0;
  uStack_4b0 = 0;
  uStack_4bc = 0;
  iStack_4b8 = 0;
  uStack_4a4 = 0;
  uStack_4a0 = 0;
  uStack_4ac = 0;
  uStack_4a8 = 0;
  uStack_494 = 0;
  uStack_49c = 0;
  uStack_498 = 0;
  lStack_488 = 0;
  uStack_490 = 0;
  uStack_48c = 0;
  puStack_508 = &uStack_470;
  uStack_470 = 0;
  uStack_468 = 0;
  piStack_480 = unaff_x22;
  puStack_478 = puStack_508;
  puStack_410 = puStack_518;
  if ((*param_5 & 0x1f0000) == 0) {
    uStack_f0 = (undefined4 *)CONCAT44(1,uStack_4f4);
    FUN_109a83fd0(&uStack_4c0,2,&uStack_f0,0);
    if (lStack_488 != 0) {
      piVar8 = (int *)(lStack_488 + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = *piVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lStack_420 != 0) {
      piVar8 = (int *)(lStack_420 + 0x14);
      do {
        iVar6 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(&uStack_458);
      }
    }
    lStack_420 = 0;
    uStack_440 = 0;
    uStack_43c = 0;
    uStack_448 = 0;
    uStack_444 = 0;
    uStack_430 = 0;
    uStack_42c = 0;
    uStack_438 = 0;
    uStack_434 = 0;
    if ((int)uStack_458._4_4_ < 1) {
LAB_109b9f64c:
      uStack_458._0_4_ = uStack_4c0;
      if (2 < (int)uStack_4bc) goto LAB_109b9f680;
      uStack_458._4_4_ = uStack_4bc;
      iStack_450 = iStack_4b8;
      iStack_44c = iStack_4b4;
      *puStack_410 = *puStack_478;
      puStack_410[1] = puStack_478[1];
    }
    else {
      lVar19 = 0;
      do {
        piStack_418[lVar19] = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < (int)uStack_458._4_4_);
      if ((int)uStack_458._4_4_ < 3) goto LAB_109b9f64c;
LAB_109b9f680:
      uStack_458._0_4_ = uStack_4c0;
      func_0x000109a84868(&uStack_458,&uStack_4c0);
    }
    uStack_440 = uStack_4a8;
    uStack_43c = uStack_4a4;
    uStack_448 = uStack_4b0;
    uStack_444 = uStack_4ac;
    uStack_430 = uStack_498;
    uStack_42c = uStack_494;
    uStack_438 = uStack_4a0;
    uStack_434 = uStack_49c;
    lStack_420 = lStack_488;
    uStack_428 = uStack_490;
    uStack_424 = uStack_48c;
  }
  else {
    puVar23 = (uint *)0xffffffff;
    param_6 = (ulong *)0x1;
    param_7 = 0;
    FUN_109a8f64c(param_5,uStack_4f4,1,0);
    if ((*param_5 & 0x1f0000) == 0x10000) {
      puVar15 = *(undefined8 **)(param_5 + 2);
      piStack_b0 = (int *)((ulong)&uStack_f0 | 8);
      uStack_f0 = (undefined4 *)*puVar15;
      puStack_e8 = (uint *)puVar15[1];
      puStack_d8 = (uint *)puVar15[3];
      puStack_e0 = (undefined4 *)puVar15[2];
      uStack_d0 = puVar15[4];
      uStack_c8 = puVar15[5];
      lStack_b8 = puVar15[7];
      uStack_c0 = puVar15[6];
      puStack_a8 = &uStack_a0;
      uStack_a0 = 0;
      uStack_98 = 0;
      if (puVar15[7] != 0) {
        piVar8 = (int *)(puVar15[7] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = *piVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)puVar15 + 4) < 3) {
        uStack_a0 = *(undefined8 *)puVar15[9];
        uStack_98 = ((undefined8 *)puVar15[9])[1];
      }
      else {
        uStack_f0 = (undefined4 *)((ulong)uStack_f0 & 0xffffffff);
        func_0x000109a84868(&uStack_f0);
      }
    }
    else {
      FUN_109a8a180(&uStack_f0,param_5,0xffffffff);
    }
    if (lStack_488 != 0) {
      piVar8 = (int *)(lStack_488 + 0x14);
      do {
        iVar6 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(&uStack_4c0);
      }
    }
    if (0 < (int)uStack_4bc) {
      lVar19 = 0;
      do {
        piStack_480[lVar19] = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < (int)uStack_4bc);
    }
    iStack_4b8 = (int)puStack_e8;
    iStack_4b4 = (int)((ulong)puStack_e8 >> 0x20);
    uStack_4c0 = (uint)uStack_f0;
    uStack_4a8 = SUB84(puStack_d8,0);
    uStack_4a4 = (undefined4)((ulong)puStack_d8 >> 0x20);
    uStack_4b0 = SUB84(puStack_e0,0);
    uStack_4ac = (undefined4)((ulong)puStack_e0 >> 0x20);
    uStack_498 = (undefined4)uStack_c8;
    uStack_494 = (undefined4)((ulong)uStack_c8 >> 0x20);
    uStack_4a0 = (undefined4)uStack_d0;
    uStack_49c = (undefined4)((ulong)uStack_d0 >> 0x20);
    lStack_488 = lStack_b8;
    uStack_490 = (undefined4)uStack_c0;
    uStack_48c = (undefined4)((ulong)uStack_c0 >> 0x20);
    uVar7 = uStack_f0._4_4_;
    uStack_4bc = uStack_f0._4_4_;
    if (puStack_478 != puStack_508) {
      if (puStack_478 != (undefined8 *)0x0) {
        _free(puStack_478[-1]);
        uVar7 = uStack_f0._4_4_;
      }
      puStack_478 = puStack_508;
      piStack_480 = unaff_x22;
    }
    puVar15 = (undefined8 *)((ulong)&uStack_f0 | 4);
    if ((int)uVar7 < 3) {
      *puStack_478 = *puStack_a8;
      puStack_478[1] = puStack_a8[1];
    }
    else {
      piStack_480 = piStack_b0;
      puStack_478 = puStack_a8;
      puStack_a8 = &uStack_a0;
      piStack_b0 = (int *)((ulong)&uStack_f0 | 8);
    }
    uStack_f0 = (undefined4 *)CONCAT44(uStack_f0._4_4_,0x42ff0000);
    puVar15[1] = 0;
    *puVar15 = 0;
    puVar15[3] = 0;
    puVar15[2] = 0;
    puVar15[5] = 0;
    puVar15[4] = 0;
    *(undefined8 *)((long)puVar15 + 0x34) = 0;
    *(undefined8 *)((long)puVar15 + 0x2c) = 0;
    if (lStack_488 != 0) {
      piVar8 = (int *)(lStack_488 + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = *piVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lStack_420 != 0) {
      piVar8 = (int *)(lStack_420 + 0x14);
      do {
        iVar6 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(&uStack_458);
      }
    }
    lStack_420 = 0;
    uStack_440 = 0;
    uStack_43c = 0;
    uStack_448 = 0;
    uStack_444 = 0;
    uStack_430 = 0;
    uStack_42c = 0;
    uStack_438 = 0;
    uStack_434 = 0;
    if ((int)uStack_458._4_4_ < 1) {
LAB_109b9f4bc:
      uStack_458._0_4_ = uStack_4c0;
      if (2 < (int)uStack_4bc) goto LAB_109b9f4f0;
      uStack_458._4_4_ = uStack_4bc;
      iStack_450 = iStack_4b8;
      iStack_44c = iStack_4b4;
      *puStack_410 = *puStack_478;
      puStack_410[1] = puStack_478[1];
    }
    else {
      lVar19 = 0;
      do {
        piStack_418[lVar19] = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < (int)uStack_458._4_4_);
      if ((int)uStack_458._4_4_ < 3) goto LAB_109b9f4bc;
LAB_109b9f4f0:
      uStack_458._0_4_ = uStack_4c0;
      func_0x000109a84868(&uStack_458,&uStack_4c0);
    }
    uStack_440 = uStack_4a8;
    uStack_43c = uStack_4a4;
    uStack_448 = uStack_4b0;
    uStack_444 = uStack_4ac;
    uStack_430 = uStack_498;
    uStack_42c = uStack_494;
    uStack_438 = uStack_4a0;
    uStack_434 = uStack_49c;
    lStack_420 = lStack_488;
    uStack_428 = uStack_490;
    uStack_424 = uStack_48c;
    if (lStack_b8 != 0) {
      piVar8 = (int *)(lStack_b8 + 0x14);
      do {
        iVar6 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(&uStack_f0);
      }
    }
    lStack_b8 = 0;
    puStack_d8 = (uint *)0x0;
    puStack_e0 = (undefined4 *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    if (0 < (int)uStack_f0._4_4_) {
      lVar19 = 0;
      do {
        piStack_b0[lVar19] = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < (int)uStack_f0._4_4_);
    }
    if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
      _free(puStack_a8[-1]);
    }
    if (iStack_4b4 != 1 && iStack_4b8 != 1) {
LAB_109b9f5d4:
      puVar12 = (undefined4 *)0x54;
      func_0x000107c2ae8c();
      *puVar12 = 1;
      uStack_f0 = puVar12 + 1;
      puStack_e8 = (uint *)0x4c;
      *(undefined8 *)(puVar12 + 7) = 0x2e6b73614d747365;
      *(undefined8 *)(puVar12 + 5) = 0x62207c7c2031203d;
      *(undefined8 *)(puVar12 + 0xb) = 0x6928202626202931;
      *(undefined8 *)(puVar12 + 9) = 0x203d3d2073776f72;
      *(undefined8 *)(puVar12 + 0xf) = 0x61746f742e6b7361;
      *(undefined8 *)(puVar12 + 0xd) = 0x4d7473656229746e;
      *(undefined8 *)(puVar12 + 0x12) = 0x746e756f63203d3d;
      *(undefined8 *)(puVar12 + 0x10) = 0x2029286c61746f74;
      *(undefined1 *)(puVar12 + 0x14) = 0;
      *(undefined8 *)(puVar12 + 3) = 0x3d20736c6f632e6b;
      *(undefined8 *)(puVar12 + 1) = 0x73614d7473656228;
      FUN_109ac3188(0xffffff29,&uStack_f0,&UNK_10f55a6e6,&UNK_10f5a2da1,0xbe);
LAB_109ba0088:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109ba008c);
      (*pcVar5)();
    }
    uVar39 = (ulong)uStack_4bc;
    if ((int)uStack_4bc < 3) {
      uVar7 = iStack_4b8 * iStack_4b4;
    }
    else {
      uVar7 = 1;
      piVar8 = piStack_480;
      do {
        uVar7 = *piVar8 * uVar7;
        uVar39 = uVar39 - 1;
        piVar8 = piVar8 + 1;
      } while (uVar39 != 0);
    }
    if (uStack_4f4 != uVar7) goto LAB_109b9f5d4;
  }
  iVar6 = (int)param_7;
  if (uStack_4f4 == param_1[6]) {
    puVar9 = *(uint **)(param_1 + 4);
    puStack_e0 = (undefined4 *)0x0;
    uStack_f0 = (undefined4 *)CONCAT44(uStack_f0._4_4_,0x1010000);
    puStack_e8 = (uint *)&uStack_150;
    uStack_4c8 = 0;
    uStack_4d8 = 0x1010000;
    puStack_4d0 = (uint *)&uStack_1b0;
    auStack_4f0[0] = 0x2010000;
    puStack_4e8 = &uStack_330;
    uStack_4e0 = 0;
    puVar14 = (uint *)&uStack_f0;
    puVar16 = &uStack_4d8;
    puVar17 = auStack_4f0;
    (**(code **)(*(long *)puVar9 + 0x10))();
    if (0 < (int)puVar9) {
      puVar16 = &uStack_330;
      FUN_109a479a0(puVar16,puStack_510);
      auVar43 = NEON_fmov(0x3ff0000000000000,8);
      puStack_e8 = auVar43._8_8_;
      uStack_f0 = auVar43._0_8_;
      uStack_4d8 = 0xc1020006;
      puStack_4d0 = (uint *)&uStack_f0;
      uStack_4c8 = 0x400000001;
      puStack_e0 = uStack_f0;
      puStack_d8 = puStack_e8;
      FUN_109a91d90();
      puVar9 = &uStack_4c0;
      puVar14 = &uStack_4d8;
      FUN_109a48a40();
      goto LAB_109b9fa20;
    }
LAB_109b9f9f0:
    plVar32 = (long *)0x0;
  }
  else {
    unaff_x22 = (int *)0x0;
    plVar32 = (long *)0x0;
    uVar39 = (ulong)uStack_4f4;
    puStack_540 = puVar41;
    puStack_538 = puVar40;
    puStack_530 = puVar38;
    puStack_528 = puVar36;
    puStack_520 = puVar34;
    do {
      iVar30 = (int)plVar32;
      if ((int)param_1[6] < (int)uStack_4f4) {
        puVar14 = (uint *)&uStack_150;
        puVar16 = (uint *)&uStack_1b0;
        puVar17 = &uStack_390;
        puVar23 = &uStack_3f0;
        param_6 = &uStack_3f8;
        param_7 = 10000;
        puVar9 = param_1;
        FUN_109ba022c();
        iVar6 = (int)param_7;
        if (((ulong)puVar9 & 1) == 0) {
          puVar34 = puStack_520;
          puVar36 = puStack_528;
          puVar38 = puStack_530;
          puVar40 = puStack_538;
          puVar41 = puStack_540;
          if (iVar30 == 0) goto LAB_109b9fa24;
          break;
        }
      }
      param_5 = *(uint **)(param_1 + 4);
      puStack_e0 = (undefined4 *)0x0;
      uStack_f0 = (undefined4 *)CONCAT44(uStack_f0._4_4_,0x1010000);
      puStack_e8 = &uStack_390;
      uStack_4c8 = 0;
      uStack_4d8 = 0x1010000;
      puStack_4d0 = &uStack_3f0;
      auStack_4f0[0] = 0x2010000;
      puStack_4e8 = &uStack_2d0;
      uStack_4e0 = 0;
      puVar14 = (uint *)&uStack_f0;
      puVar16 = &uStack_4d8;
      puVar17 = auStack_4f0;
      (**(code **)(*(long *)param_5 + 0x10))();
      iVar6 = (int)param_5;
      iStack_4f8 = iVar30;
      if (0 < iVar6) {
        iVar30 = 0;
        if (iVar6 != 0) {
          iVar30 = uStack_2cc._4_4_ / iVar6;
        }
        if (uStack_2cc._4_4_ != iVar30 * iVar6) {
          puVar12 = (undefined4 *)0x20;
          func_0x000107c2ae8c();
          *puVar12 = 1;
          uStack_f0 = puVar12 + 1;
          puStack_e8 = (uint *)0x19;
          *(undefined1 *)((long)puVar12 + 0x1d) = 0;
          *(undefined8 *)(puVar12 + 3) = 0x6f6d6e2025207377;
          *(undefined8 *)(puVar12 + 1) = 0x6f722e6c65646f6d;
          *(undefined8 *)((long)puVar12 + 0x15) = 0x30203d3d20736c65;
          *(undefined8 *)((long)puVar12 + 0xd) = 0x646f6d6e20252073;
          FUN_109ac3188(0xffffff29,&uStack_f0,&UNK_10f55a6e6,&UNK_10f5a2da1,0xe0);
          goto LAB_109ba0088;
        }
        iVar37 = 0;
        puVar9 = puVar33;
        do {
          uStack_4d8 = iVar37 * iVar30;
          iVar37 = iVar37 + 1;
          iStack_4d4 = iVar37 * iVar30;
          auStack_4f0[0] = 0x80000000;
          auStack_4f0[1] = 0x7fffffff;
          FUN_109a84930(&uStack_f0,&uStack_2d0,&uStack_4d8,auStack_4f0);
          piVar8 = *(int **)(param_1 + 4);
          puVar14 = (uint *)&uStack_150;
          puVar16 = (uint *)&uStack_1b0;
          puVar17 = (uint *)&uStack_f0;
          puVar23 = &uStack_210;
          param_6 = (ulong *)auStack_270;
          FUN_109ba0854(*(undefined8 *)(param_1 + 8));
          iVar25 = (int)unaff_x22;
          if ((int)unaff_x22 <= (int)(param_1[6] - 1)) {
            iVar25 = param_1[6] - 1;
          }
          puVar33 = puVar9;
          if (iVar25 < (int)piVar8) {
            FUN_10941e804(auStack_270,&uStack_4c0);
            uStack_4d8 = 0x2010000;
            puStack_4d0 = &uStack_330;
            uStack_4c8 = 0;
            FUN_109a479a0(&uStack_f0,&uStack_4d8);
            puVar33 = (uint *)(ulong)param_1[6];
            FUN_109b9ea70(*(undefined8 *)(param_1 + 10),
                          (double)(int)(uStack_4f4 - (int)piVar8) / (double)uVar39);
            puVar14 = puVar9;
            unaff_x22 = piVar8;
          }
          if (lStack_b8 != 0) {
            piVar8 = (int *)(lStack_b8 + 0x14);
            do {
              iVar25 = *piVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar4) {
                *piVar8 = iVar25 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar25 + -1 == 0) {
              func_0x000109a848d4(&uStack_f0);
            }
          }
          lStack_b8 = 0;
          puStack_d8 = (uint *)0x0;
          puStack_e0 = (undefined4 *)0x0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          if (0 < (int)uStack_f0._4_4_) {
            lVar19 = 0;
            do {
              piStack_b0[lVar19] = 0;
              lVar19 = lVar19 + 1;
            } while (lVar19 < (int)uStack_f0._4_4_);
          }
          if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
            _free(puStack_a8[-1]);
          }
          puVar9 = puVar33;
        } while (iVar37 != iVar6);
      }
      iVar6 = (int)param_7;
      plVar32 = (long *)(ulong)(iStack_4f8 + 1U);
    } while ((int)(iStack_4f8 + 1U) < (int)puVar33);
    puVar34 = puStack_520;
    puVar36 = puStack_528;
    puVar38 = puStack_530;
    puVar40 = puStack_538;
    puVar41 = puStack_540;
    if ((int)unaff_x22 < 1) {
      puVar9 = puStack_510;
      FUN_109a8e944();
      puVar34 = puStack_520;
      puVar36 = puStack_528;
      puVar38 = puStack_530;
      puVar40 = puStack_538;
      puVar41 = puStack_540;
      goto LAB_109b9f9f0;
    }
    if (CONCAT44(uStack_4ac,uStack_4b0) != CONCAT44(uStack_444,uStack_448)) {
      if (piStack_480[1] == piStack_418[1] && *piStack_480 == *piStack_418) {
        uStack_f0 = (undefined4 *)CONCAT44(uStack_f0._4_4_,0x2010000);
        puStack_e8 = (uint *)&uStack_458;
        puStack_e0 = (undefined4 *)0x0;
        FUN_109a479a0(&uStack_4c0,&uStack_f0);
      }
      else {
        uStack_f0 = (undefined4 *)CONCAT44(uStack_f0._4_4_,0x1010000);
        puStack_e8 = &uStack_4c0;
        puStack_e0 = (undefined4 *)0x0;
        uStack_4d8 = 0x2010000;
        puStack_4d0 = (uint *)&uStack_458;
        uStack_4c8 = 0;
        FUN_109a895d0(&uStack_f0,&uStack_4d8);
      }
    }
    puVar9 = &uStack_330;
    puVar14 = puStack_510;
    FUN_109a479a0();
LAB_109b9fa20:
    plVar32 = (long *)0x1;
  }
LAB_109b9fa24:
  if (lStack_488 != 0) {
    piVar8 = (int *)(lStack_488 + 0x14);
    do {
      iVar30 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar30 + -1 == 0) {
      puVar9 = &uStack_4c0;
      func_0x000109a848d4();
    }
  }
  lStack_488 = 0;
  uStack_4a8 = 0;
  uStack_4a4 = 0;
  uStack_4b0 = 0;
  uStack_4ac = 0;
  uStack_498 = 0;
  uStack_494 = 0;
  uStack_4a0 = 0;
  uStack_49c = 0;
  if (0 < (int)uStack_4bc) {
    lVar19 = 0;
    do {
      piStack_480[lVar19] = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)uStack_4bc);
  }
  if (puStack_478 != puStack_508 && puStack_478 != (undefined8 *)0x0) {
    puVar9 = (uint *)puStack_478[-1];
    _free();
  }
  if (lStack_420 != 0) {
    piVar8 = (int *)(lStack_420 + 0x14);
    do {
      iVar30 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar30 + -1 == 0) {
      puVar9 = (uint *)&uStack_458;
      func_0x000109a848d4();
    }
  }
  lStack_420 = 0;
  uStack_440 = 0;
  uStack_43c = 0;
  uStack_448 = 0;
  uStack_444 = 0;
  uStack_430 = 0;
  uStack_42c = 0;
  uStack_438 = 0;
  uStack_434 = 0;
  if (0 < (int)uStack_458._4_4_) {
    lVar19 = 0;
    do {
      piStack_418[lVar19] = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)uStack_458._4_4_);
  }
  if (puStack_410 != puStack_518 && puStack_410 != (undefined8 *)0x0) {
    puVar9 = (uint *)puStack_410[-1];
    _free();
  }
  if (lStack_3b8 != 0) {
    piVar8 = (int *)(lStack_3b8 + 0x14);
    do {
      iVar30 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar30 + -1 == 0) {
      puVar9 = &uStack_3f0;
      func_0x000109a848d4();
    }
  }
LAB_109b9fb40:
  lStack_3b8 = 0;
  uStack_3d8 = 0;
  uStack_3d4 = 0;
  uStack_3e0 = 0;
  uStack_3dc = 0;
  uStack_3c8 = 0;
  uStack_3c4 = 0;
  uStack_3d0 = 0;
  uStack_3cc = 0;
  if (0 < (int)uStack_3ec) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_3b0 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)uStack_3ec);
  }
  if (puStack_3a8 != puStack_500 && puStack_3a8 != (undefined8 *)0x0) {
    puVar9 = (uint *)puStack_3a8[-1];
    _free();
  }
  if (lStack_358 != 0) {
    piVar8 = (int *)(lStack_358 + 0x14);
    do {
      iVar30 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar30 + -1 == 0) {
      puVar9 = &uStack_390;
      func_0x000109a848d4();
    }
  }
  lStack_358 = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  uStack_368 = 0;
  uStack_364 = 0;
  uStack_370 = 0;
  uStack_36c = 0;
  if (0 < (int)uStack_38c) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_350 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)uStack_38c);
  }
  if (puStack_348 != puVar41 && puStack_348 != (undefined8 *)0x0) {
    puVar9 = (uint *)puStack_348[-1];
    _free();
  }
  if (lStack_2f8 != 0) {
    piVar8 = (int *)(lStack_2f8 + 0x14);
    do {
      iVar30 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar30 + -1 == 0) {
      puVar9 = &uStack_330;
      func_0x000109a848d4();
    }
  }
  lStack_2f8 = 0;
  uStack_318 = 0;
  uStack_314 = 0;
  uStack_320 = 0;
  uStack_31c = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  if (0 < (int)uStack_32c) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_2f0 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)uStack_32c);
  }
  if (puStack_2e8 != puVar40 && puStack_2e8 != (undefined8 *)0x0) {
    puVar9 = (uint *)puStack_2e8[-1];
    _free();
  }
  if (lStack_298 != 0) {
    piVar8 = (int *)(lStack_298 + 0x14);
    do {
      iVar30 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar30 + -1 == 0) {
      puVar9 = &uStack_2d0;
      func_0x000109a848d4();
    }
  }
  lStack_298 = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  if (0 < (int)uStack_2cc) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_290 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)uStack_2cc);
  }
  if (puStack_288 != puVar38 && puStack_288 != (undefined8 *)0x0) {
    puVar9 = (uint *)puStack_288[-1];
    _free();
  }
  if (lStack_238 != 0) {
    piVar8 = (int *)(lStack_238 + 0x14);
    do {
      iVar30 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar30 + -1 == 0) {
      puVar9 = (uint *)auStack_270;
      func_0x000109a848d4();
    }
  }
  lStack_238 = 0;
  uStack_258 = 0;
  uStack_254 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_248 = 0;
  uStack_244 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  if (0 < (int)auStack_270._4_4_) {
    lVar19 = 0;
    do {
      *(undefined4 *)(puStack_230 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)auStack_270._4_4_);
  }
  if (puStack_228 != puVar36 && puStack_228 != (undefined8 *)0x0) {
    puVar9 = (uint *)puStack_228[-1];
    _free();
  }
  if (lStack_1d8 != 0) {
    piVar8 = (int *)(lStack_1d8 + 0x14);
    do {
      iVar30 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar30 + -1 == 0) {
      puVar9 = &uStack_210;
      func_0x000109a848d4();
    }
  }
  lStack_1d8 = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  if (0 < (int)uStack_20c) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_1d0 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)uStack_20c);
  }
  if (puStack_1c8 != puVar34 && puStack_1c8 != (undefined8 *)0x0) {
    puVar9 = (uint *)puStack_1c8[-1];
    _free();
  }
  if (uStack_178 != 0) {
    piVar8 = (int *)(uStack_178 + 0x14);
    do {
      iVar30 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar30 + -1 == 0) {
      puVar9 = (uint *)&uStack_1b0;
      func_0x000109a848d4();
    }
  }
  uStack_178 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  if (0 < uStack_1b0._4_4_) {
    lVar19 = 0;
    do {
      *(undefined4 *)(uStack_170 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < uStack_1b0._4_4_);
  }
  if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
    puVar9 = (uint *)puStack_168[-1];
    _free();
  }
  if (uStack_118 != 0) {
    piVar8 = (int *)(uStack_118 + 0x14);
    do {
      iVar30 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar30 + -1 == 0) {
      puVar9 = (uint *)&uStack_150;
      func_0x000109a848d4();
    }
  }
  uStack_118 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (0 < uStack_150._4_4_) {
    lVar19 = 0;
    do {
      *(undefined4 *)(uStack_110 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < uStack_150._4_4_);
  }
  if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
    puVar9 = (uint *)puStack_108[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return plVar32;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_4c0);
  func_0x00010567aa40(&uStack_458);
  func_0x00010567aa40(&uStack_3f0);
  func_0x00010567aa40(&uStack_390);
  func_0x00010567aa40(&uStack_330);
  func_0x00010567aa40(&uStack_2d0);
  func_0x00010567aa40(auStack_270);
  func_0x00010567aa40(&uStack_210);
  func_0x00010567aa40(&uStack_1b0);
  func_0x00010567aa40(&uStack_150);
  puVar10 = puVar9;
  __Unwind_Resume();
  puStack_5a0 = puVar41;
  puStack_598 = puVar40;
  puStack_590 = puVar38;
  puStack_588 = puVar36;
  puStack_580 = puVar34;
  puStack_578 = param_5;
  piStack_570 = unaff_x22;
  puStack_568 = puVar33;
  puStack_560 = param_1;
  puStack_558 = puVar9;
  puStack_550 = &stack0xfffffffffffffff0;
  pcStack_548 = FUN_109ba022c;
  lStack_5b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = puVar10[6];
  puVar33 = puVar23;
  puVar13 = param_6;
  puVar20 = auStack_9e8;
  if (0x108 < uVar7) {
    puVar20 = (undefined1 *)((long)(int)uVar7 << 2);
    if ((int)uVar7 < 0) {
      puVar20 = (undefined1 *)0xffffffffffffffff;
    }
    __Znam();
  }
  if ((int)puVar14[1] < 1) {
    uStack_a60 = 0;
  }
  else {
    uStack_a60 = (uint)*(undefined8 *)(*(long *)(puVar14 + 0x12) + (ulong)puVar14[1] * 8 + -8);
  }
  if ((int)puVar16[1] < 1) {
    uStack_a40 = 0;
  }
  else {
    uStack_a40 = (uint)*(undefined8 *)(*(long *)(puVar16 + 0x12) + (ulong)puVar16[1] * 8 + -8);
  }
  uVar18 = *puVar14;
  uVar1 = puVar14[3];
  uVar35 = uVar18 >> 3 & 0x1ff;
  if (uVar35 != 0) {
    uVar1 = uVar35 + 1;
  }
  uVar21 = *puVar16;
  uVar2 = puVar16[3];
  uVar35 = uVar21 >> 3 & 0x1ff;
  if (uVar35 != 0) {
    uVar2 = uVar35 + 1;
  }
  puVar34 = (undefined8 *)(ulong)uVar2;
  puVar9 = puVar14;
  FUN_109a89cd4(puVar14,uVar1,0xffffffff,1);
  puVar11 = puVar16;
  FUN_109a89cd4();
  lVar22 = *(long *)(puVar14 + 4);
  lVar19 = *(long *)(puVar16 + 4);
  if ((((2 < (int)puVar17[1]) || (puVar17[2] != uVar7)) || (puVar17[3] != 1)) ||
     ((*puVar17 & 0xfff) != (uVar1 * 8 + 0xff8 & 0xff8 | uVar18 & 7) || *(long *)(puVar17 + 4) == 0)
     ) {
    uStack_5c8 = (undefined4 *)CONCAT44(1,uVar7);
    puVar34 = (undefined8 *)0x2;
    FUN_109a83fd0(puVar17);
    uVar7 = puVar10[6];
    uVar21 = *puVar16;
  }
  if (((2 < (int)puVar23[1]) || (puVar23[2] != uVar7)) ||
     ((puVar23[3] != 1 ||
      (((*puVar23 & 0xfff) != (uVar2 * 8 + 0xff8 & 0xff8 | uVar21 & 7) ||
       (lStack_a20 = *(long *)(puVar23 + 4), lStack_a20 == 0)))))) {
    uStack_5c8 = (undefined4 *)CONCAT44(1,uVar7);
    puVar34 = (undefined8 *)0x2;
    FUN_109a83fd0(puVar23);
    lStack_a20 = *(long *)(puVar23 + 4);
    uVar7 = puVar10[6];
  }
  uVar35 = (uint)puVar9;
  if (((int)uVar35 < (int)uVar7) || (uVar35 != (uint)puVar11)) {
    puVar12 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    uStack_5c8 = puVar12 + 1;
    puStack_5c0 = (uint *)0x27;
    *(undefined1 *)((long)puVar12 + 0x2b) = 0;
    *(undefined8 *)(puVar12 + 3) = 0x6f506c65646f6d20;
    *(undefined8 *)(puVar12 + 1) = 0x3d3e20746e756f63;
    *(undefined8 *)(puVar12 + 7) = 0x3d3d20746e756f63;
    *(undefined8 *)(puVar12 + 5) = 0x2026262073746e69;
    *(undefined8 *)((long)puVar12 + 0x23) = 0x32746e756f63203d;
    FUN_109ac3188(0xffffff29,&uStack_5c8,&UNK_10f56d25f,&UNK_10f5a2da1,0x7b);
  }
  else {
    if (((uStack_a60 | uStack_a40) & 3) == 0) {
      iVar30 = 0;
      lVar26 = *(long *)(puVar17 + 4);
      do {
        uVar7 = puVar10[6];
        if ((int)uVar7 < 1) {
          uVar39 = 0;
        }
        else {
          uVar39 = 0;
          do {
            iVar37 = (int)uVar39;
            uVar27 = *param_6;
            do {
              if (uVar35 == 0) {
                iVar25 = 0;
              }
              else {
                uVar27 = (uVar27 >> 0x20) + (uVar27 & 0xffffffff) * 0xf83f630a;
                *param_6 = uVar27;
                uVar7 = 0;
                if (uVar35 != 0) {
                  uVar7 = (uint)uVar27 / uVar35;
                }
                iVar25 = (uint)uVar27 - uVar7 * uVar35;
              }
              *(int *)(puVar20 + (long)iVar37 * 4) = iVar25;
              if (iVar37 < 1) {
                uVar29 = 0;
              }
              else {
                uVar29 = 0;
                while (iVar25 != *(int *)(puVar20 + uVar29 * 4)) {
                  uVar29 = uVar29 + 1;
                  if (uVar39 == uVar29) goto LAB_109ba0540;
                }
              }
            } while ((int)uVar29 != iVar37);
LAB_109ba0540:
            iVar31 = (int)((ulong)(long)(int)uStack_a60 >> 2);
            if (0 < iVar31) {
              puVar12 = (undefined4 *)(lVar22 + (long)(iVar25 * iVar31) * 4);
              puVar28 = (undefined4 *)(lVar26 + (long)(iVar37 * iVar31) * 4);
              uVar39 = (ulong)(long)(int)uStack_a60 >> 2 & 0x7fffffff;
              do {
                *puVar28 = *puVar12;
                uVar39 = uVar39 - 1;
                puVar12 = puVar12 + 1;
                puVar28 = puVar28 + 1;
              } while (uVar39 != 0);
            }
            iVar31 = (int)((ulong)(long)(int)uStack_a40 >> 2);
            if (0 < iVar31) {
              puVar12 = (undefined4 *)(lVar19 + (long)(iVar25 * iVar31) * 4);
              puVar28 = (undefined4 *)(lStack_a20 + (long)(iVar37 * iVar31) * 4);
              uVar39 = (ulong)(long)(int)uStack_a40 >> 2 & 0x7fffffff;
              do {
                *puVar28 = *puVar12;
                uVar39 = uVar39 - 1;
                puVar12 = puVar12 + 1;
                puVar28 = puVar28 + 1;
              } while (uVar39 != 0);
            }
            if ((puVar10[7] & 1) == 0) {
              uVar39 = (ulong)(iVar37 + 1);
            }
            else {
              plVar32 = *(long **)(puVar10 + 4);
              uStack_5b8 = 0;
              uStack_5c8 = (undefined4 *)CONCAT44(uStack_5c8._4_4_,0x1010000);
              uVar7 = iVar37 + 1;
              uVar39 = (ulong)uVar7;
              puVar34 = &uStack_5c8;
              puStack_5c0 = puVar17;
              (**(code **)(*plVar32 + 0x20))();
              if (((ulong)plVar32 & 1) == 0) {
                if (uVar7 != 0) {
                  uVar39 = (*param_6 >> 0x20) + (*param_6 & 0xffffffff) * 0xf83f630a;
                  *param_6 = uVar39;
                  uVar1 = 0;
                  uVar18 = (uint)uVar39;
                  if (uVar7 != 0) {
                    uVar1 = uVar18 / uVar7;
                  }
                  uVar39 = (ulong)(uVar18 - uVar1 * uVar7);
                }
                iVar30 = iVar30 + 1;
              }
            }
            uVar7 = puVar10[6];
          } while ((int)uVar39 < (int)uVar7 && iVar30 < iVar6);
        }
        if (((uint)uVar39 != uVar7) || ((puVar10[7] & 1) != 0)) {
LAB_109ba069c:
          uVar7 = puVar10[6];
          if (puVar20 != auStack_9e8 && puVar20 != (undefined1 *)0x0) {
            __ZdaPv();
          }
          plVar32 = (long *)(ulong)((uint)uVar39 == uVar7 && iVar30 < iVar6);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b0) {
            return plVar32;
          }
          ___stack_chk_fail();
          uStack_5c8 = (undefined4 *)0x0;
          puStack_5c0 = (uint *)0x0;
          do {
            uVar7 = *puVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar10,0x10);
            if (bVar4) {
              *puVar10 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            _free(*(undefined8 *)(puVar10 + -2));
          }
          if (puVar20 != auStack_9e8 && puVar20 != (undefined1 *)0x0) {
            __ZdaPv();
          }
          dVar42 = (double)__Unwind_Resume();
          lStack_aa8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uStack_ab0 = 0;
          puStack_ac0 = (undefined4 *)CONCAT44(puStack_ac0._4_4_,0x1010000);
          puStack_ab8 = puVar34;
          (**(code **)(*plVar32 + 0x18))();
          puVar23 = *(uint **)(puVar33 + 0x10);
          if ((((2 < (int)*(uint *)((long)puVar13 + 4)) || ((uint)puVar13[1] != *puVar23)) ||
              (*(uint *)((long)puVar13 + 0xc) != puVar23[1])) ||
             (((*puVar13 & 0xfff) != 0 || (puVar13[2] == 0)))) {
            puStack_ac0 = *(undefined4 **)puVar23;
            FUN_109a83fd0(puVar13,2,&puStack_ac0,0);
          }
          if (((*puVar33 & 0x4fff) == 0x4005) && ((*puVar13 & 0x4fff) == 0x4000)) {
            uVar39 = (ulong)puVar33[1];
            if ((int)puVar33[1] < 3) {
              uVar7 = puVar33[3] * puVar33[2];
            }
            else {
              uVar7 = 1;
              piVar8 = *(int **)(puVar33 + 0x10);
              do {
                uVar7 = *piVar8 * uVar7;
                uVar39 = uVar39 - 1;
                piVar8 = piVar8 + 1;
              } while (uVar39 != 0);
            }
            if ((int)uVar7 < 1) {
              plVar32 = (long *)0x0;
            }
            else {
              plVar32 = (long *)0x0;
              uVar39 = (ulong)uVar7;
              pfVar24 = *(float **)(puVar33 + 4);
              uVar27 = puVar13[2];
              do {
                fVar44 = *pfVar24;
                *(bool *)uVar27 = fVar44 <= (float)(dVar42 * dVar42);
                uVar7 = (uint)plVar32;
                if (fVar44 <= (float)(dVar42 * dVar42)) {
                  uVar7 = uVar7 + 1;
                }
                plVar32 = (long *)(ulong)uVar7;
                uVar39 = uVar39 - 1;
                pfVar24 = pfVar24 + 1;
                uVar27 = uVar27 + 1;
              } while (uVar39 != 0);
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_aa8) {
              return plVar32;
            }
            ___stack_chk_fail();
            puStack_ac0 = (undefined4 *)0x0;
            puStack_ab8 = (undefined8 *)0x0;
            do {
              uVar7 = (uint)*puVar13 - 1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar13,0x10);
              if (bVar4) {
                *(uint *)puVar13 = uVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar7 == 0) {
              _free(puVar13[-1]);
            }
            __Unwind_Resume();
            *plVar32 = (long)&PTR_FUN_110b29bc8;
            FUN_109b98b28(plVar32 + 1);
            return plVar32;
          }
          puVar12 = (undefined4 *)0x60;
          func_0x000107c2ae8c();
          *puVar12 = 1;
          puStack_ac0 = puVar12 + 1;
          puStack_ab8 = (undefined8 *)0x59;
          *(undefined8 *)(puVar12 + 0xb) = 0x616d202626204632;
          *(undefined8 *)(puVar12 + 9) = 0x335f5643203d3d20;
          *(undefined8 *)(puVar12 + 0xf) = 0x2873756f756e6974;
          *(undefined8 *)(puVar12 + 0xd) = 0x6e6f4373692e6b73;
          *(undefined8 *)(puVar12 + 0x13) = 0x2928657079742e6b;
          *(undefined8 *)(puVar12 + 0x11) = 0x73616d2026262029;
          *(undefined8 *)((long)puVar12 + 0x55) = 0x55385f5643203d3d;
          *(undefined8 *)((long)puVar12 + 0x4d) = 0x202928657079742e;
          *(undefined8 *)(puVar12 + 3) = 0x73756f756e69746e;
          *(undefined8 *)(puVar12 + 1) = 0x6f4373692e727265;
          *(undefined1 *)((long)puVar12 + 0x5d) = 0;
          *(undefined8 *)(puVar12 + 7) = 0x2928657079742e72;
          *(undefined8 *)(puVar12 + 5) = 0x7265202626202928;
          FUN_109ac3188(0xffffff29,&puStack_ac0,&UNK_10f56d2fa,&UNK_10f5a2da1,0x5b);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109ba0a70);
          (*pcVar5)();
        }
        plVar32 = *(long **)(puVar10 + 4);
        uStack_5b8 = 0;
        uStack_5c8 = (undefined4 *)CONCAT44(uStack_5c8._4_4_,0x1010000);
        puVar34 = &uStack_5c8;
        puStack_5c0 = puVar17;
        (**(code **)(*plVar32 + 0x20))();
        if ((((ulong)plVar32 & 1) != 0) || (iVar30 = iVar30 + 1, iVar6 <= iVar30))
        goto LAB_109ba069c;
      } while( true );
    }
    puVar12 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    uStack_5c8 = puVar12 + 1;
    puStack_5c0 = (uint *)0x36;
    *(undefined8 *)(puVar12 + 3) = 0x6928666f657a6973;
    *(undefined8 *)(puVar12 + 1) = 0x202520317a736528;
    *(undefined1 *)((long)puVar12 + 0x3a) = 0;
    *(undefined8 *)(puVar12 + 7) = 0x7365282026262030;
    *(undefined8 *)(puVar12 + 5) = 0x203d3d202929746e;
    *(undefined8 *)(puVar12 + 0xb) = 0x29746e6928666f65;
    *(undefined8 *)(puVar12 + 9) = 0x7a6973202520327a;
    *(undefined8 *)((long)puVar12 + 0x32) = 0x30203d3d20292974;
    FUN_109ac3188(0xffffff29,&uStack_5c8,&UNK_10f56d25f,&UNK_10f5a2da1,0x7c);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109ba07d0);
  (*pcVar5)();
}



/* Entry: 109ba022c; end: 109ba0853;  */

long * FUN_109ba022c(double param_1,int *param_2,uint *param_3,uint *param_4,uint *param_5,
                    uint *param_6,ulong *param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint uVar6;
  uint *puVar7;
  long *plVar8;
  undefined4 *puVar9;
  uint *puVar10;
  ulong *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint *puVar17;
  float *pfVar18;
  int iVar19;
  int *piVar20;
  long lVar21;
  ulong uVar22;
  undefined4 *puVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  undefined8 *puVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  float fVar31;
  undefined4 *puStack_580;
  undefined8 *puStack_578;
  undefined8 uStack_570;
  long lStack_568;
  uint uStack_520;
  uint uStack_500;
  long lStack_4e0;
  undefined1 auStack_4a8 [1056];
  undefined8 uStack_88;
  uint *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_2[6];
  puVar10 = param_6;
  puVar11 = param_7;
  puVar13 = auStack_4a8;
  if (0x108 < uVar6) {
    puVar13 = (undefined1 *)((long)(int)uVar6 << 2);
    if ((int)uVar6 < 0) {
      puVar13 = (undefined1 *)0xffffffffffffffff;
    }
    __Znam();
  }
  if ((int)param_3[1] < 1) {
    uStack_520 = 0;
  }
  else {
    uStack_520 = (uint)*(undefined8 *)(*(long *)(param_3 + 0x12) + (ulong)param_3[1] * 8 + -8);
  }
  if ((int)param_4[1] < 1) {
    uStack_500 = 0;
  }
  else {
    uStack_500 = (uint)*(undefined8 *)(*(long *)(param_4 + 0x12) + (ulong)param_4[1] * 8 + -8);
  }
  uVar12 = *param_3;
  uVar1 = param_3[3];
  uVar28 = uVar12 >> 3 & 0x1ff;
  if (uVar28 != 0) {
    uVar1 = uVar28 + 1;
  }
  uVar15 = *param_4;
  uVar2 = param_4[3];
  uVar28 = uVar15 >> 3 & 0x1ff;
  if (uVar28 != 0) {
    uVar2 = uVar28 + 1;
  }
  puVar27 = (undefined8 *)(ulong)uVar2;
  puVar17 = param_3;
  FUN_109a89cd4(param_3,uVar1,0xffffffff,1);
  puVar7 = param_4;
  FUN_109a89cd4();
  lVar16 = *(long *)(param_3 + 4);
  lVar14 = *(long *)(param_4 + 4);
  if ((((2 < (int)param_5[1]) || (param_5[2] != uVar6)) || (param_5[3] != 1)) ||
     ((*param_5 & 0xfff) != (uVar1 * 8 + 0xff8 & 0xff8 | uVar12 & 7) || *(long *)(param_5 + 4) == 0)
     ) {
    uStack_88 = (undefined4 *)CONCAT44(1,uVar6);
    puVar27 = (undefined8 *)0x2;
    FUN_109a83fd0(param_5);
    uVar6 = param_2[6];
    uVar15 = *param_4;
  }
  if (((2 < (int)param_6[1]) || (param_6[2] != uVar6)) ||
     ((param_6[3] != 1 ||
      (((*param_6 & 0xfff) != (uVar2 * 8 + 0xff8 & 0xff8 | uVar15 & 7) ||
       (lStack_4e0 = *(long *)(param_6 + 4), lStack_4e0 == 0)))))) {
    uStack_88 = (undefined4 *)CONCAT44(1,uVar6);
    puVar27 = (undefined8 *)0x2;
    FUN_109a83fd0(param_6);
    lStack_4e0 = *(long *)(param_6 + 4);
    uVar6 = param_2[6];
  }
  uVar28 = (uint)puVar17;
  if (((int)uVar28 < (int)uVar6) || (uVar28 != (uint)puVar7)) {
    puVar9 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    uStack_88 = puVar9 + 1;
    puStack_80 = (uint *)0x27;
    *(undefined1 *)((long)puVar9 + 0x2b) = 0;
    *(undefined8 *)(puVar9 + 3) = 0x6f506c65646f6d20;
    *(undefined8 *)(puVar9 + 1) = 0x3d3e20746e756f63;
    *(undefined8 *)(puVar9 + 7) = 0x3d3d20746e756f63;
    *(undefined8 *)(puVar9 + 5) = 0x2026262073746e69;
    *(undefined8 *)((long)puVar9 + 0x23) = 0x32746e756f63203d;
    FUN_109ac3188(0xffffff29,&uStack_88,&UNK_10f56d25f,&UNK_10f5a2da1,0x7b);
  }
  else {
    if (((uStack_520 | uStack_500) & 3) == 0) {
      iVar26 = 0;
      lVar21 = *(long *)(param_5 + 4);
      do {
        iVar29 = param_2[6];
        if (iVar29 < 1) {
          uVar30 = 0;
        }
        else {
          uVar30 = 0;
          do {
            iVar29 = (int)uVar30;
            uVar22 = *param_7;
            do {
              if (uVar28 == 0) {
                iVar19 = 0;
              }
              else {
                uVar22 = (uVar22 >> 0x20) + (uVar22 & 0xffffffff) * 0xf83f630a;
                *param_7 = uVar22;
                uVar6 = 0;
                if (uVar28 != 0) {
                  uVar6 = (uint)uVar22 / uVar28;
                }
                iVar19 = (uint)uVar22 - uVar6 * uVar28;
              }
              *(int *)(puVar13 + (long)iVar29 * 4) = iVar19;
              if (iVar29 < 1) {
                uVar24 = 0;
              }
              else {
                uVar24 = 0;
                while (iVar19 != *(int *)(puVar13 + uVar24 * 4)) {
                  uVar24 = uVar24 + 1;
                  if (uVar30 == uVar24) goto LAB_109ba0540;
                }
              }
            } while ((int)uVar24 != iVar29);
LAB_109ba0540:
            iVar25 = (int)((ulong)(long)(int)uStack_520 >> 2);
            if (0 < iVar25) {
              puVar9 = (undefined4 *)(lVar16 + (long)(iVar19 * iVar25) * 4);
              puVar23 = (undefined4 *)(lVar21 + (long)(iVar29 * iVar25) * 4);
              uVar30 = (ulong)(long)(int)uStack_520 >> 2 & 0x7fffffff;
              do {
                *puVar23 = *puVar9;
                uVar30 = uVar30 - 1;
                puVar9 = puVar9 + 1;
                puVar23 = puVar23 + 1;
              } while (uVar30 != 0);
            }
            iVar25 = (int)((ulong)(long)(int)uStack_500 >> 2);
            if (0 < iVar25) {
              puVar9 = (undefined4 *)(lVar14 + (long)(iVar19 * iVar25) * 4);
              puVar23 = (undefined4 *)(lStack_4e0 + (long)(iVar29 * iVar25) * 4);
              uVar30 = (ulong)(long)(int)uStack_500 >> 2 & 0x7fffffff;
              do {
                *puVar23 = *puVar9;
                uVar30 = uVar30 - 1;
                puVar9 = puVar9 + 1;
                puVar23 = puVar23 + 1;
              } while (uVar30 != 0);
            }
            if ((*(byte *)(param_2 + 7) & 1) == 0) {
              uVar30 = (ulong)(iVar29 + 1);
            }
            else {
              plVar8 = *(long **)(param_2 + 4);
              param_1 = 0.0;
              uStack_78 = 0;
              uStack_88 = (undefined4 *)CONCAT44(uStack_88._4_4_,0x1010000);
              uVar6 = iVar29 + 1;
              uVar30 = (ulong)uVar6;
              puVar27 = &uStack_88;
              puStack_80 = param_5;
              (**(code **)(*plVar8 + 0x20))();
              if (((ulong)plVar8 & 1) == 0) {
                if (uVar6 != 0) {
                  uVar30 = (*param_7 >> 0x20) + (*param_7 & 0xffffffff) * 0xf83f630a;
                  *param_7 = uVar30;
                  uVar1 = 0;
                  uVar12 = (uint)uVar30;
                  if (uVar6 != 0) {
                    uVar1 = uVar12 / uVar6;
                  }
                  uVar30 = (ulong)(uVar12 - uVar1 * uVar6);
                }
                iVar26 = iVar26 + 1;
              }
            }
            iVar29 = param_2[6];
          } while ((int)uVar30 < iVar29 && iVar26 < param_8);
        }
        if (((int)uVar30 != iVar29) || ((*(byte *)(param_2 + 7) & 1) != 0)) {
LAB_109ba069c:
          iVar29 = param_2[6];
          if (puVar13 != auStack_4a8 && puVar13 != (undefined1 *)0x0) {
            __ZdaPv();
          }
          plVar8 = (long *)(ulong)((int)uVar30 == iVar29 && iVar26 < param_8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
            return plVar8;
          }
          ___stack_chk_fail();
          uStack_88 = (undefined4 *)0x0;
          puStack_80 = (uint *)0x0;
          do {
            iVar26 = *param_2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
            if (bVar4) {
              *param_2 = iVar26 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar26 + -1 == 0) {
            _free(*(undefined8 *)(param_2 + -2));
          }
          if (puVar13 != auStack_4a8 && puVar13 != (undefined1 *)0x0) {
            __ZdaPv();
          }
          __Unwind_Resume();
          lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uStack_570 = 0;
          puStack_580 = (undefined4 *)CONCAT44(puStack_580._4_4_,0x1010000);
          puStack_578 = puVar27;
          (**(code **)(*plVar8 + 0x18))();
          puVar17 = *(uint **)(puVar10 + 0x10);
          if ((((2 < (int)*(uint *)((long)puVar11 + 4)) || ((uint)puVar11[1] != *puVar17)) ||
              (*(uint *)((long)puVar11 + 0xc) != puVar17[1])) ||
             (((*puVar11 & 0xfff) != 0 || (puVar11[2] == 0)))) {
            puStack_580 = *(undefined4 **)puVar17;
            FUN_109a83fd0(puVar11,2,&puStack_580,0);
          }
          if (((*puVar10 & 0x4fff) != 0x4005) || ((*puVar11 & 0x4fff) != 0x4000)) {
            puVar9 = (undefined4 *)0x60;
            func_0x000107c2ae8c();
            *puVar9 = 1;
            puStack_580 = puVar9 + 1;
            puStack_578 = (undefined8 *)0x59;
            *(undefined8 *)(puVar9 + 0xb) = 0x616d202626204632;
            *(undefined8 *)(puVar9 + 9) = 0x335f5643203d3d20;
            *(undefined8 *)(puVar9 + 0xf) = 0x2873756f756e6974;
            *(undefined8 *)(puVar9 + 0xd) = 0x6e6f4373692e6b73;
            *(undefined8 *)(puVar9 + 0x13) = 0x2928657079742e6b;
            *(undefined8 *)(puVar9 + 0x11) = 0x73616d2026262029;
            *(undefined8 *)((long)puVar9 + 0x55) = 0x55385f5643203d3d;
            *(undefined8 *)((long)puVar9 + 0x4d) = 0x202928657079742e;
            *(undefined8 *)(puVar9 + 3) = 0x73756f756e69746e;
            *(undefined8 *)(puVar9 + 1) = 0x6f4373692e727265;
            *(undefined1 *)((long)puVar9 + 0x5d) = 0;
            *(undefined8 *)(puVar9 + 7) = 0x2928657079742e72;
            *(undefined8 *)(puVar9 + 5) = 0x7265202626202928;
            FUN_109ac3188(0xffffff29,&puStack_580,&UNK_10f56d2fa,&UNK_10f5a2da1,0x5b);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x109ba0a70);
            (*pcVar5)();
          }
          uVar30 = (ulong)puVar10[1];
          if ((int)puVar10[1] < 3) {
            uVar6 = puVar10[3] * puVar10[2];
          }
          else {
            uVar6 = 1;
            piVar20 = *(int **)(puVar10 + 0x10);
            do {
              uVar6 = *piVar20 * uVar6;
              uVar30 = uVar30 - 1;
              piVar20 = piVar20 + 1;
            } while (uVar30 != 0);
          }
          if ((int)uVar6 < 1) {
            plVar8 = (long *)0x0;
          }
          else {
            plVar8 = (long *)0x0;
            uVar30 = (ulong)uVar6;
            pfVar18 = *(float **)(puVar10 + 4);
            uVar22 = puVar11[2];
            do {
              fVar31 = *pfVar18;
              *(bool *)uVar22 = fVar31 <= (float)(param_1 * param_1);
              uVar6 = (uint)plVar8;
              if (fVar31 <= (float)(param_1 * param_1)) {
                uVar6 = uVar6 + 1;
              }
              plVar8 = (long *)(ulong)uVar6;
              uVar30 = uVar30 - 1;
              pfVar18 = pfVar18 + 1;
              uVar22 = uVar22 + 1;
            } while (uVar30 != 0);
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
            return plVar8;
          }
          ___stack_chk_fail();
          puStack_580 = (undefined4 *)0x0;
          puStack_578 = (undefined8 *)0x0;
          do {
            uVar6 = (uint)*puVar11 - 1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar11,0x10);
            if (bVar4) {
              *(uint *)puVar11 = uVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar6 == 0) {
            _free(puVar11[-1]);
          }
          __Unwind_Resume();
          *plVar8 = (long)&PTR_FUN_110b29bc8;
          FUN_109b98b28(plVar8 + 1);
          return plVar8;
        }
        plVar8 = *(long **)(param_2 + 4);
        param_1 = 0.0;
        uStack_78 = 0;
        uStack_88 = (undefined4 *)CONCAT44(uStack_88._4_4_,0x1010000);
        puVar27 = &uStack_88;
        puStack_80 = param_5;
        (**(code **)(*plVar8 + 0x20))();
        if ((((ulong)plVar8 & 1) != 0) || (iVar26 = iVar26 + 1, param_8 <= iVar26))
        goto LAB_109ba069c;
      } while( true );
    }
    puVar9 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    uStack_88 = puVar9 + 1;
    puStack_80 = (uint *)0x36;
    *(undefined8 *)(puVar9 + 3) = 0x6928666f657a6973;
    *(undefined8 *)(puVar9 + 1) = 0x202520317a736528;
    *(undefined1 *)((long)puVar9 + 0x3a) = 0;
    *(undefined8 *)(puVar9 + 7) = 0x7365282026262030;
    *(undefined8 *)(puVar9 + 5) = 0x203d3d202929746e;
    *(undefined8 *)(puVar9 + 0xb) = 0x29746e6928666f65;
    *(undefined8 *)(puVar9 + 9) = 0x7a6973202520327a;
    *(undefined8 *)((long)puVar9 + 0x32) = 0x30203d3d20292974;
    FUN_109ac3188(0xffffff29,&uStack_88,&UNK_10f56d25f,&UNK_10f5a2da1,0x7c);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109ba07d0);
  (*pcVar5)();
}



/* Entry: 109ba0854; end: 109ba0aa7;  */

undefined8 *
FUN_109ba0854(double param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             uint *param_6,uint *param_7)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  ulong uVar8;
  float *pfVar9;
  int *piVar10;
  long lVar11;
  float fVar12;
  undefined4 auStack_98 [2];
  uint *puStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  puStack_50 = (undefined4 *)CONCAT44(puStack_50._4_4_,0x1010000);
  uStack_58 = 0;
  auStack_68[0] = 0x1010000;
  uStack_70 = 0;
  auStack_80[0] = 0x1010000;
  auStack_98[0] = 0x2010000;
  uStack_88 = 0;
  puStack_90 = param_6;
  uStack_78 = param_5;
  uStack_60 = param_4;
  uStack_48 = param_3;
  (**(code **)(*param_2 + 0x18))(param_2,&puStack_50,auStack_68,auStack_80,auStack_98);
  puVar7 = *(uint **)(param_6 + 0x10);
  if ((((2 < (int)param_7[1]) || (param_7[2] != *puVar7)) || (param_7[3] != puVar7[1])) ||
     (((*param_7 & 0xfff) != 0 || (*(long *)(param_7 + 4) == 0)))) {
    puStack_50 = *(undefined4 **)puVar7;
    FUN_109a83fd0(param_7,2,&puStack_50,0);
  }
  if (((*param_6 & 0x4fff) != 0x4005) || ((*param_7 & 0x4fff) != 0x4000)) {
    puVar6 = (undefined4 *)0x60;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_50 = puVar6 + 1;
    uStack_48 = 0x59;
    *(undefined8 *)(puVar6 + 0xb) = 0x616d202626204632;
    *(undefined8 *)(puVar6 + 9) = 0x335f5643203d3d20;
    *(undefined8 *)(puVar6 + 0xf) = 0x2873756f756e6974;
    *(undefined8 *)(puVar6 + 0xd) = 0x6e6f4373692e6b73;
    *(undefined8 *)(puVar6 + 0x13) = 0x2928657079742e6b;
    *(undefined8 *)(puVar6 + 0x11) = 0x73616d2026262029;
    *(undefined8 *)((long)puVar6 + 0x55) = 0x55385f5643203d3d;
    *(undefined8 *)((long)puVar6 + 0x4d) = 0x202928657079742e;
    *(undefined8 *)(puVar6 + 3) = 0x73756f756e69746e;
    *(undefined8 *)(puVar6 + 1) = 0x6f4373692e727265;
    *(undefined1 *)((long)puVar6 + 0x5d) = 0;
    *(undefined8 *)(puVar6 + 7) = 0x2928657079742e72;
    *(undefined8 *)(puVar6 + 5) = 0x7265202626202928;
    FUN_109ac3188(0xffffff29,&puStack_50,&UNK_10f56d2fa,&UNK_10f5a2da1,0x5b);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109ba0a70);
    (*pcVar3)();
  }
  uVar8 = (ulong)param_6[1];
  if ((int)param_6[1] < 3) {
    uVar4 = param_6[3] * param_6[2];
  }
  else {
    uVar4 = 1;
    piVar10 = *(int **)(param_6 + 0x10);
    do {
      uVar4 = *piVar10 * uVar4;
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 1;
    } while (uVar8 != 0);
  }
  if ((int)uVar4 < 1) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    uVar8 = (ulong)uVar4;
    pfVar9 = *(float **)(param_6 + 4);
    lVar11 = *(long *)(param_7 + 4);
    do {
      fVar12 = *pfVar9;
      *(bool *)lVar11 = fVar12 <= (float)(param_1 * param_1);
      uVar4 = (uint)puVar5;
      if (fVar12 <= (float)(param_1 * param_1)) {
        uVar4 = uVar4 + 1;
      }
      puVar5 = (undefined8 *)(ulong)uVar4;
      uVar8 = uVar8 - 1;
      pfVar9 = pfVar9 + 1;
      lVar11 = lVar11 + 1;
    } while (uVar8 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  puStack_50 = (undefined4 *)0x0;
  uStack_48 = 0;
  do {
    uVar4 = *param_7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_7,0x10);
    if (bVar2) {
      *param_7 = uVar4 - 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (uVar4 - 1 == 0) {
    _free(*(undefined8 *)(param_7 + -2));
  }
  __Unwind_Resume();
  *puVar5 = &PTR_FUN_110b29bc8;
  FUN_109b98b28(puVar5 + 1);
  return puVar5;
}



/* Entry: 109ba0aa8; end: 109ba0b07;  */

undefined8 * FUN_109ba0aa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b29bc8;
  FUN_109b98b28(param_1 + 1);
  return param_1;
}



/* Entry: 109ba0b08; end: 109ba21e7;  */

bool FUN_109ba0b08(ulong param_1,uint *param_2,uint *param_3,undefined8 param_4,uint *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  float *pfVar21;
  uint uVar22;
  float *pfVar23;
  bool bVar24;
  int *piVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined4 auStack_520 [2];
  uint *puStack_518;
  undefined8 uStack_510;
  undefined4 auStack_508 [2];
  undefined8 *puStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  uint *puStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  uint *puStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  uint *puStack_4b8;
  undefined4 *puStack_4b0;
  uint *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  int *piStack_480;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_458;
  uint uStack_450;
  uint uStack_44c;
  int iStack_448;
  int iStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  long lStack_418;
  int *piStack_410;
  undefined8 *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  uint uStack_3f0;
  uint uStack_3ec;
  int iStack_3e8;
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
  long lStack_3b8;
  int *piStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  uint uStack_390;
  undefined8 uStack_38c;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  long lStack_358;
  long lStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  uint uStack_330;
  undefined8 uStack_32c;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  uint uStack_2d0;
  uint uStack_2cc;
  int iStack_2c8;
  int iStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  long lStack_298;
  int *piStack_290;
  long *plStack_288;
  long alStack_280 [2];
  uint uStack_270;
  uint uStack_26c;
  int iStack_268;
  int iStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  long lStack_238;
  int *piStack_230;
  long *plStack_228;
  long alStack_220 [2];
  uint uStack_210;
  undefined8 uStack_20c;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  uint uStack_1b0;
  undefined8 uStack_1ac;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long lStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
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
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar15 = *(ulong **)(param_2 + 2);
    uStack_b0 = (ulong)&uStack_f0 | 8;
    uStack_f0 = *puVar15;
    uStack_e8 = puVar15[1];
    uStack_d8 = puVar15[3];
    uStack_e0 = puVar15[2];
    uStack_d0 = puVar15[4];
    uStack_c8 = puVar15[5];
    uStack_b8 = puVar15[7];
    uStack_c0 = puVar15[6];
    puStack_a8 = &uStack_a0;
    uStack_a0 = 0;
    uStack_98 = 0;
    if (puVar15[7] != 0) {
      piVar25 = (int *)(puVar15[7] + 0x14);
      do {
        cVar6 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar24) {
          *piVar25 = *piVar25 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(int *)((long)puVar15 + 4) < 3) {
      uStack_a0 = *(undefined8 *)puVar15[9];
      uStack_98 = ((undefined8 *)puVar15[9])[1];
    }
    else {
      uStack_f0 = uStack_f0 & 0xffffffff;
      func_0x000109a84868(&uStack_f0);
    }
  }
  else {
    FUN_109a8a180(&uStack_f0,param_2,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar15 = *(ulong **)(param_3 + 2);
    uStack_110 = (ulong)&uStack_150 | 8;
    uStack_150 = *puVar15;
    uStack_148 = puVar15[1];
    uStack_138 = puVar15[3];
    uStack_140 = puVar15[2];
    uStack_130 = puVar15[4];
    uStack_128 = puVar15[5];
    uStack_118 = puVar15[7];
    uStack_120 = puVar15[6];
    puStack_108 = &uStack_100;
    uStack_f8 = 0;
    uStack_100 = 0;
    if (puVar15[7] != 0) {
      piVar25 = (int *)(puVar15[7] + 0x14);
      do {
        cVar6 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar24) {
          *piVar25 = *piVar25 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(int *)((long)puVar15 + 4) < 3) {
      uStack_100 = *(undefined8 *)puVar15[9];
      uStack_f8 = ((undefined8 *)puVar15[9])[1];
    }
    else {
      uStack_150 = uStack_150 & 0xffffffff;
      func_0x000109a84868(&uStack_150);
    }
  }
  else {
    FUN_109a8a180(&uStack_150,param_3,0xffffffff);
  }
  uStack_1b0 = 0x42ff0000;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_1ac = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  lStack_170 = (long)&uStack_1ac + 4;
  uStack_184 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_210 = 0x42ff0000;
  lStack_1d0 = (long)&uStack_20c + 4;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_20c = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1e4 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_270 = 0x42ff0000;
  piStack_230 = &iStack_268;
  iStack_264 = 0;
  uStack_260 = 0;
  uStack_26c = 0;
  iStack_268 = 0;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_25c = 0;
  uStack_258 = 0;
  uStack_244 = 0;
  uStack_24c = 0;
  uStack_248 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  alStack_220[1] = 0;
  alStack_220[0] = 0;
  uStack_2d0 = 0x42ff0000;
  piStack_290 = &iStack_2c8;
  iStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2cc = 0;
  iStack_2c8 = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2a4 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  alStack_280[1] = 0;
  alStack_280[0] = 0;
  uStack_330 = 0x42ff0000;
  lStack_2f0 = (long)&uStack_32c + 4;
  uStack_324 = 0;
  uStack_320 = 0;
  uStack_32c = 0;
  uStack_314 = 0;
  uStack_310 = 0;
  uStack_31c = 0;
  uStack_318 = 0;
  uStack_304 = 0;
  uStack_30c = 0;
  uStack_308 = 0;
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_390 = 0x42ff0000;
  lStack_350 = (long)&uStack_38c + 4;
  uStack_384 = 0;
  uStack_380 = 0;
  uStack_38c = 0;
  uStack_374 = 0;
  uStack_370 = 0;
  uStack_37c = 0;
  uStack_378 = 0;
  uStack_364 = 0;
  uStack_36c = 0;
  uStack_368 = 0;
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_35c = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_3f0 = 0x42ff0000;
  piVar25 = (int *)((ulong)&uStack_3f0 | 8);
  iStack_3e4 = 0;
  uStack_3e0 = 0;
  uStack_3ec = 0;
  iStack_3e8 = 0;
  uStack_3d4 = 0;
  uStack_3d0 = 0;
  uStack_3dc = 0;
  uStack_3d8 = 0;
  uStack_3c4 = 0;
  uStack_3cc = 0;
  uStack_3c8 = 0;
  lStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3bc = 0;
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_450 = 0x42ff0000;
  piStack_410 = &iStack_448;
  iStack_444 = 0;
  uStack_440 = 0;
  uStack_44c = 0;
  iStack_448 = 0;
  uStack_434 = 0;
  uStack_430 = 0;
  uStack_43c = 0;
  uStack_438 = 0;
  uStack_424 = 0;
  uStack_42c = 0;
  uStack_428 = 0;
  lStack_418 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  uVar27 = (uint)uStack_f0 >> 3 & 0x1ff;
  iVar2 = uStack_e8._4_4_;
  if (uVar27 != 0) {
    iVar2 = uVar27 + 1;
  }
  uStack_400 = 0;
  uStack_3f8 = 0;
  puVar10 = &uStack_f0;
  puStack_408 = &uStack_400;
  piStack_3b0 = piVar25;
  puStack_3a8 = &uStack_3a0;
  puStack_348 = &uStack_340;
  puStack_2e8 = &uStack_2e0;
  plStack_288 = alStack_280;
  plStack_228 = alStack_220;
  puStack_1c8 = &uStack_1c0;
  puStack_168 = &uStack_160;
  FUN_109a89cd4(puVar10,iVar2,0xffffffff,1);
  uVar27 = (uint)uStack_150 >> 3 & 0x1ff;
  iVar2 = uStack_148._4_4_;
  if (uVar27 != 0) {
    iVar2 = uVar27 + 1;
  }
  puVar16 = &uStack_150;
  FUN_109a89cd4(puVar16,iVar2,0xffffffff,1);
  uStack_458 = 0xffffffffffffffff;
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar14 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar14 = 1;
    uStack_4c0 = puVar14 + 1;
    *(undefined2 *)uStack_4c0 = 0x6263;
    puStack_4b8 = (uint *)0x2;
    *(undefined1 *)((long)puVar14 + 6) = 0;
    FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f55a6e6,&UNK_10f5a2da1,0x123);
    goto LAB_109ba2034;
  }
  if ((*(double *)(param_1 + 0x28) <= 0.0) || (1.0 <= *(double *)(param_1 + 0x28))) {
    puVar14 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar14 = 1;
    uStack_4c0 = puVar14 + 1;
    puStack_4b8 = (uint *)0x20;
    *(undefined1 *)(puVar14 + 9) = 0;
    *(undefined8 *)(puVar14 + 3) = 0x262030203e206563;
    *(undefined8 *)(puVar14 + 1) = 0x6e656469666e6f63;
    *(undefined8 *)(puVar14 + 7) = 0x31203c2065636e65;
    *(undefined8 *)(puVar14 + 5) = 0x6469666e6f632026;
    FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f55a6e6,&UNK_10f5a2da1,0x124);
    goto LAB_109ba2034;
  }
  uVar27 = (uint)puVar10;
  if (((int)uVar27 < 0) || ((uint)puVar16 != uVar27)) {
    puVar14 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar14 = 1;
    uStack_4c0 = puVar14 + 1;
    puStack_4b8 = (uint *)0x1d;
    *(undefined1 *)((long)puVar14 + 0x21) = 0;
    *(undefined8 *)(puVar14 + 3) = 0x6f63202626203020;
    *(undefined8 *)(puVar14 + 1) = 0x3d3e20746e756f63;
    *(undefined8 *)((long)puVar14 + 0x19) = 0x746e756f63203d3d;
    *(undefined8 *)((long)puVar14 + 0x11) = 0x2032746e756f6320;
    FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f55a6e6,&UNK_10f5a2da1,0x126);
    goto LAB_109ba2034;
  }
  uVar17 = *(uint *)(param_1 + 0x18);
  if ((int)uVar17 <= (int)uVar27) {
    if ((*param_5 & 0x1f0000) != 0) {
      FUN_109a8f64c(param_5,puVar10,1,0,0xffffffff,1,0);
      if ((*param_5 & 0x1f0000) == 0x10000) {
        puVar16 = *(undefined8 **)(param_5 + 2);
        piStack_480 = (int *)((ulong)&uStack_4c0 | 8);
        uStack_4c0 = (undefined4 *)*puVar16;
        puStack_4b8 = (uint *)puVar16[1];
        puStack_4a8 = (uint *)puVar16[3];
        puStack_4b0 = (undefined4 *)puVar16[2];
        uStack_4a0 = puVar16[4];
        uStack_498 = puVar16[5];
        lStack_488 = puVar16[7];
        uStack_490 = puVar16[6];
        puStack_478 = &uStack_470;
        uStack_470 = 0;
        uStack_468 = 0;
        if (puVar16[7] != 0) {
          piVar1 = (int *)(puVar16[7] + 0x14);
          do {
            cVar6 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar24) {
              *piVar1 = *piVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (*(int *)((long)puVar16 + 4) < 3) {
          uStack_470 = *(undefined8 *)puVar16[9];
          uStack_468 = ((undefined8 *)puVar16[9])[1];
        }
        else {
          uStack_4c0 = (undefined4 *)((ulong)uStack_4c0 & 0xffffffff);
          func_0x000109a84868(&uStack_4c0);
        }
      }
      else {
        FUN_109a8a180(&uStack_4c0,param_5,0xffffffff);
      }
      if (lStack_3b8 != 0) {
        piVar1 = (int *)(lStack_3b8 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar6 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = iVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_3f0);
        }
      }
      if (0 < (int)uStack_3ec) {
        lVar18 = 0;
        do {
          piStack_3b0[lVar18] = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < (int)uStack_3ec);
      }
      iStack_3e8 = (int)puStack_4b8;
      iStack_3e4 = (int)((ulong)puStack_4b8 >> 0x20);
      uStack_3f0 = (uint)uStack_4c0;
      uStack_3d8 = SUB84(puStack_4a8,0);
      uStack_3d4 = (undefined4)((ulong)puStack_4a8 >> 0x20);
      uStack_3e0 = SUB84(puStack_4b0,0);
      uStack_3dc = (undefined4)((ulong)puStack_4b0 >> 0x20);
      uStack_3c8 = (undefined4)uStack_498;
      uStack_3c4 = (undefined4)((ulong)uStack_498 >> 0x20);
      uStack_3d0 = (undefined4)uStack_4a0;
      uStack_3cc = (undefined4)((ulong)uStack_4a0 >> 0x20);
      lStack_3b8 = lStack_488;
      uStack_3c0 = (undefined4)uStack_490;
      uStack_3bc = (undefined4)((ulong)uStack_490 >> 0x20);
      uStack_3ec = uStack_4c0._4_4_;
      piVar1 = piStack_3b0;
      puVar16 = puStack_3a8;
      if ((puStack_3a8 != &uStack_3a0) &&
         (piVar1 = piVar25, puVar16 = &uStack_3a0, puStack_3a8 != (undefined8 *)0x0)) {
        _free(puStack_3a8[-1]);
      }
      puStack_3a8 = puVar16;
      piStack_3b0 = piVar1;
      puVar16 = (undefined8 *)((ulong)&uStack_4c0 | 4);
      if ((int)uStack_4c0._4_4_ < 3) {
        *puStack_3a8 = *puStack_478;
        puStack_3a8[1] = puStack_478[1];
      }
      else {
        piStack_3b0 = piStack_480;
        puStack_3a8 = puStack_478;
        puStack_478 = &uStack_470;
        piStack_480 = (int *)((ulong)&uStack_4c0 | 8);
      }
      uStack_4c0 = (undefined4 *)CONCAT44(uStack_4c0._4_4_,0x42ff0000);
      puVar16[1] = 0;
      *puVar16 = 0;
      puVar16[3] = 0;
      puVar16[2] = 0;
      puVar16[5] = 0;
      puVar16[4] = 0;
      *(undefined8 *)((long)puVar16 + 0x34) = 0;
      *(undefined8 *)((long)puVar16 + 0x2c) = 0;
      if (lStack_3b8 != 0) {
        piVar25 = (int *)(lStack_3b8 + 0x14);
        do {
          cVar6 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar24) {
            *piVar25 = *piVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (lStack_418 != 0) {
        piVar25 = (int *)(lStack_418 + 0x14);
        do {
          iVar2 = *piVar25;
          cVar6 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar24) {
            *piVar25 = iVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_450);
        }
      }
      puVar16 = puStack_3a8;
      lStack_418 = 0;
      uStack_438 = 0;
      uStack_434 = 0;
      uStack_440 = 0;
      uStack_43c = 0;
      uStack_428 = 0;
      uStack_424 = 0;
      uStack_430 = 0;
      uStack_42c = 0;
      if ((int)uStack_44c < 1) {
LAB_109ba15c0:
        uStack_450 = uStack_3f0;
        if (2 < (int)uStack_3ec) goto LAB_109ba15f4;
        uStack_44c = uStack_3ec;
        iStack_448 = iStack_3e8;
        iStack_444 = iStack_3e4;
        *puStack_408 = *puStack_3a8;
        puStack_408[1] = puVar16[1];
      }
      else {
        lVar18 = 0;
        do {
          piStack_410[lVar18] = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < (int)uStack_44c);
        if ((int)uStack_44c < 3) goto LAB_109ba15c0;
LAB_109ba15f4:
        uStack_450 = uStack_3f0;
        func_0x000109a84868(&uStack_450,&uStack_3f0);
      }
      uStack_438 = uStack_3d8;
      uStack_434 = uStack_3d4;
      uStack_440 = uStack_3e0;
      uStack_43c = uStack_3dc;
      uStack_428 = uStack_3c8;
      uStack_424 = uStack_3c4;
      uStack_430 = uStack_3d0;
      uStack_42c = uStack_3cc;
      lStack_418 = lStack_3b8;
      uStack_420 = uStack_3c0;
      uStack_41c = uStack_3bc;
      if (lStack_488 != 0) {
        piVar25 = (int *)(lStack_488 + 0x14);
        do {
          iVar2 = *piVar25;
          cVar6 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar24) {
            *piVar25 = iVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_4c0);
        }
      }
      lStack_488 = 0;
      puStack_4a8 = (uint *)0x0;
      puStack_4b0 = (undefined4 *)0x0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      if (0 < (int)uStack_4c0._4_4_) {
        lVar18 = 0;
        do {
          piStack_480[lVar18] = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < (int)uStack_4c0._4_4_);
      }
      if (puStack_478 != &uStack_470 && puStack_478 != (undefined8 *)0x0) {
        _free(puStack_478[-1]);
      }
      if (iStack_3e4 == 1 || iStack_3e8 == 1) {
        uVar19 = (ulong)uStack_3ec;
        if ((int)uStack_3ec < 3) {
          uVar17 = iStack_3e8 * iStack_3e4;
        }
        else {
          uVar17 = 1;
          piVar25 = piStack_3b0;
          do {
            uVar17 = *piVar25 * uVar17;
            uVar19 = uVar19 - 1;
            piVar25 = piVar25 + 1;
          } while (uVar19 != 0);
        }
        if (uVar27 == uVar17) {
          uVar17 = *(uint *)(param_1 + 0x18);
          goto LAB_109ba16dc;
        }
      }
      puVar14 = (undefined4 *)0x48;
      func_0x000107c2ae8c();
      *puVar14 = 1;
      uStack_4c0 = puVar14 + 1;
      puStack_4b8 = (uint *)0x40;
      *(undefined8 *)(puVar14 + 3) = 0x2031203d3d20736c;
      *(undefined8 *)(puVar14 + 1) = 0x6f632e6b73616d28;
      *(undefined8 *)(puVar14 + 7) = 0x203d3d2073776f72;
      *(undefined8 *)(puVar14 + 5) = 0x2e6b73616d207c7c;
      *(undefined8 *)(puVar14 + 0xb) = 0x2e6b73616d29746e;
      *(undefined8 *)(puVar14 + 9) = 0x6928202626202931;
      *(undefined1 *)(puVar14 + 0x11) = 0;
      *(undefined8 *)(puVar14 + 0xf) = 0x746e756f63203d3d;
      *(undefined8 *)(puVar14 + 0xd) = 0x2029286c61746f74;
      FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f55a6e6,&UNK_10f5a2da1,0x12e);
LAB_109ba2034:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x109ba2038);
      (*pcVar8)();
    }
LAB_109ba16dc:
    if (uVar27 == uVar17) {
      plVar11 = *(long **)(param_1 + 0x10);
      puStack_4b0 = (undefined4 *)0x0;
      uStack_4c0 = (undefined4 *)CONCAT44(uStack_4c0._4_4_,0x1010000);
      puStack_4b8 = (uint *)&uStack_f0;
      uStack_4c8 = 0;
      uStack_4d8 = (undefined4 *)CONCAT44(uStack_4d8._4_4_,0x1010000);
      puStack_4d0 = (uint *)&uStack_150;
      uStack_4f0 = CONCAT44(uStack_4f0._4_4_,0x2010000);
      puStack_4e8 = &uStack_390;
      uStack_4e0 = 0;
      (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_4c0,&uStack_4d8,&uStack_4f0);
      if (0 < (int)plVar11) {
        puVar12 = &uStack_390;
        FUN_109a479a0(puVar12,param_4);
        auVar29 = NEON_fmov(0x3ff0000000000000,8);
        puStack_4b8 = auVar29._8_8_;
        uStack_4c0 = auVar29._0_8_;
        uStack_4d8 = (undefined4 *)CONCAT44(uStack_4d8._4_4_,0xc1020006);
        puStack_4d0 = (uint *)&uStack_4c0;
        uStack_4c8 = 0x400000001;
        puStack_4b0 = uStack_4c0;
        puStack_4a8 = puStack_4b8;
        FUN_109a91d90();
        FUN_109a48a40(&uStack_3f0,&uStack_4d8,puVar12);
        bVar24 = true;
        goto LAB_109ba0eac;
      }
    }
    else {
      FUN_109b9ea70(*(undefined8 *)(param_1 + 0x28),0x3fdccccccccccccd,uVar17,
                    *(undefined4 *)(param_1 + 0x30));
      uVar28 = 0;
      if ((int)uVar17 < 4) {
        uVar17 = 3;
      }
      uVar4 = uVar27 >> 1;
      uVar19 = (ulong)uVar4;
      iVar2 = uVar4 - 1;
      dVar30 = 1.79769313486232e+308;
      do {
        if ((*(int *)(param_1 + 0x18) < (int)uVar27) &&
           (uVar20 = param_1,
           FUN_109ba022c(param_1,&uStack_f0,&uStack_150,&uStack_1b0,&uStack_210,&uStack_458,1000),
           (uVar20 & 1) == 0)) {
          if (uVar28 == 0) {
            bVar24 = false;
            goto LAB_109ba0eac;
          }
          break;
        }
        plVar11 = *(long **)(param_1 + 0x10);
        puStack_4b0 = (undefined4 *)0x0;
        uStack_4c0 = (undefined4 *)CONCAT44(uStack_4c0._4_4_,0x1010000);
        puStack_4b8 = &uStack_1b0;
        uStack_4c8 = 0;
        uStack_4d8 = (undefined4 *)CONCAT44(uStack_4d8._4_4_,0x1010000);
        puStack_4d0 = &uStack_210;
        uStack_4f0 = CONCAT44(uStack_4f0._4_4_,0x2010000);
        puStack_4e8 = &uStack_330;
        uStack_4e0 = 0;
        (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_4c0,&uStack_4d8,&uStack_4f0);
        iVar9 = (int)plVar11;
        if (0 < iVar9) {
          iVar5 = 0;
          if (iVar9 != 0) {
            iVar5 = uStack_32c._4_4_ / iVar9;
          }
          if (uStack_32c._4_4_ != iVar5 * iVar9) {
            puVar14 = (undefined4 *)0x20;
            func_0x000107c2ae8c();
            *puVar14 = 1;
            uStack_4c0 = puVar14 + 1;
            puStack_4b8 = (uint *)0x19;
            *(undefined1 *)((long)puVar14 + 0x1d) = 0;
            *(undefined8 *)(puVar14 + 3) = 0x6f6d6e2025207377;
            *(undefined8 *)(puVar14 + 1) = 0x6f722e6c65646f6d;
            *(undefined8 *)((long)puVar14 + 0x15) = 0x30203d3d20736c65;
            *(undefined8 *)((long)puVar14 + 0xd) = 0x646f6d6e20252073;
            FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f55a6e6,&UNK_10f5a2da1,0x14f);
            goto LAB_109ba2034;
          }
          iVar26 = 0;
          do {
            uStack_4d8._0_4_ = iVar26 * iVar5;
            iVar26 = iVar26 + 1;
            uStack_4d8._4_4_ = iVar26 * iVar5;
            uStack_4f0 = 0x7fffffff80000000;
            FUN_109a84930(&uStack_4c0,&uStack_330,&uStack_4d8,&uStack_4f0);
            uStack_4c8 = 0;
            uStack_4d8 = (undefined4 *)CONCAT44(uStack_4d8._4_4_,0x1010000);
            puStack_4d0 = (uint *)&uStack_f0;
            uStack_4e0 = 0;
            uStack_4f0 = CONCAT44(uStack_4f0._4_4_,0x1010000);
            puStack_4e8 = (uint *)&uStack_150;
            uStack_4f8 = 0;
            auStack_508[0] = 0x1010000;
            auStack_520[0] = 0x2010000;
            puStack_518 = &uStack_270;
            uStack_510 = 0;
            puStack_500 = &uStack_4c0;
            (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                      (*(long **)(param_1 + 0x10),&uStack_4d8,&uStack_4f0,auStack_508,auStack_520);
            if ((uStack_270 & 7) == 5) {
              if (lStack_238 != 0) {
                piVar25 = (int *)(lStack_238 + 0x14);
                do {
                  cVar6 = '\x01';
                  bVar24 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                  if (bVar24) {
                    *piVar25 = *piVar25 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              if (lStack_298 != 0) {
                piVar25 = (int *)(lStack_298 + 0x14);
                do {
                  iVar3 = *piVar25;
                  cVar6 = '\x01';
                  bVar24 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                  if (bVar24) {
                    *piVar25 = iVar3 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar3 + -1 == 0) {
                  func_0x000109a848d4(&uStack_2d0);
                }
              }
              plVar11 = plStack_228;
              lStack_298 = 0;
              uStack_2b8 = 0;
              uStack_2b4 = 0;
              uStack_2c0 = 0;
              uStack_2bc = 0;
              uStack_2a8 = 0;
              uStack_2a4 = 0;
              uStack_2b0 = 0;
              uStack_2ac = 0;
              if ((int)uStack_2cc < 1) {
LAB_109ba1a04:
                uStack_2d0 = uStack_270;
                if (2 < (int)uStack_26c) goto LAB_109ba1a38;
                uStack_2cc = uStack_26c;
                iStack_2c8 = iStack_268;
                iStack_2c4 = iStack_264;
                *plStack_288 = *plStack_228;
                plStack_288[1] = plVar11[1];
              }
              else {
                lVar18 = 0;
                do {
                  piStack_290[lVar18] = 0;
                  lVar18 = lVar18 + 1;
                } while (lVar18 < (int)uStack_2cc);
                if ((int)uStack_2cc < 3) goto LAB_109ba1a04;
LAB_109ba1a38:
                uStack_2d0 = uStack_270;
                func_0x000109a84868(&uStack_2d0,&uStack_270);
              }
              uStack_2b8 = uStack_258;
              uStack_2b4 = uStack_254;
              uStack_2c0 = uStack_260;
              uStack_2bc = uStack_25c;
              uStack_2a8 = uStack_248;
              uStack_2a4 = uStack_244;
              uStack_2b0 = uStack_250;
              uStack_2ac = uStack_24c;
              lStack_298 = lStack_238;
              uStack_2a0 = uStack_240;
              uStack_29c = uStack_23c;
            }
            else {
              uStack_4d8 = (undefined4 *)CONCAT44(uStack_4d8._4_4_,0x2010000);
              uStack_4c8 = 0;
              puStack_4d0 = &uStack_2d0;
              FUN_109a41858(0x3ff0000000000000,0,&uStack_270,&uStack_4d8,5);
            }
            if ((uStack_2d0 & 0x4fff) != 0x4005) {
LAB_109ba1df4:
              puVar14 = (undefined4 *)0x50;
              func_0x000107c2ae8c();
              *(undefined8 *)(puVar14 + 7) = 0x657079742e667272;
              *(undefined8 *)(puVar14 + 5) = 0x6520262620292873;
              *(undefined8 *)(puVar14 + 0xb) = 0x202626204632335f;
              *(undefined8 *)(puVar14 + 9) = 0x5643203d3d202928;
              *(undefined8 *)(puVar14 + 0xf) = 0x286c61746f742e66;
              *(undefined8 *)(puVar14 + 0xd) = 0x72726529746e6928;
              *(undefined8 *)((long)puVar14 + 0x46) = 0x746e756f63203d3d;
              *(undefined8 *)((long)puVar14 + 0x3e) = 0x2029286c61746f74;
              *puVar14 = 1;
              uStack_4d8 = puVar14 + 1;
              puStack_4d0 = (uint *)0x4a;
              *(undefined1 *)((long)puVar14 + 0x4e) = 0;
              *(undefined8 *)(puVar14 + 3) = 0x756f756e69746e6f;
              *(undefined8 *)(puVar14 + 1) = 0x4373692e66727265;
              FUN_109ac3188(0xffffff29,&uStack_4d8,&UNK_10f55a6e6,&UNK_10f5a2da1,0x15a);
              goto LAB_109ba2034;
            }
            uVar20 = (ulong)uStack_2cc;
            if ((int)uStack_2cc < 3) {
              uVar22 = iStack_2c4 * iStack_2c8;
            }
            else {
              uVar22 = 1;
              piVar25 = piStack_290;
              do {
                uVar22 = *piVar25 * uVar22;
                uVar20 = uVar20 - 1;
                piVar25 = piVar25 + 1;
              } while (uVar20 != 0);
            }
            if (uVar27 != uVar22) goto LAB_109ba1df4;
            __ZNSt3__16__sortIRNS_6__lessIiiEEPiEEvT0_S5_T_
                      (CONCAT44(uStack_2bc,uStack_2c0),
                       CONCAT44(uStack_2bc,uStack_2c0) + ((ulong)puVar10 & 0xffffffff) * 4,
                       &uStack_4d8);
            if (((ulong)puVar10 & 1) == 0) {
              if (((uStack_2d0 >> 0xe & 1) == 0) && (*piStack_290 != 1)) {
                if (piStack_290[1] == 1) {
                  pfVar21 = (float *)(CONCAT44(uStack_2bc,uStack_2c0) + *plStack_288 * (long)iVar2);
                  pfVar23 = (float *)(CONCAT44(uStack_2bc,uStack_2c0) + *plStack_288 * uVar19);
                }
                else {
                  iVar3 = 0;
                  if (iStack_2c4 != 0) {
                    iVar3 = iVar2 / iStack_2c4;
                  }
                  pfVar21 = (float *)(CONCAT44(uStack_2bc,uStack_2c0) + *plStack_288 * (long)iVar3 +
                                     (long)(iVar2 - iVar3 * iStack_2c4) * 4);
                  iVar3 = 0;
                  if (iStack_2c4 != 0) {
                    iVar3 = (int)uVar4 / iStack_2c4;
                  }
                  pfVar23 = (float *)(CONCAT44(uStack_2bc,uStack_2c0) + *plStack_288 * (long)iVar3 +
                                     (long)(int)(uVar4 - iVar3 * iStack_2c4) * 4);
                }
              }
              else {
                pfVar21 = (float *)(CONCAT44(uStack_2bc,uStack_2c0) + (long)iVar2 * 4);
                pfVar23 = (float *)(CONCAT44(uStack_2bc,uStack_2c0) + uVar19 * 4);
              }
              dVar31 = (double)(*pfVar21 + *pfVar23) * 0.5;
            }
            else {
              if (((uStack_2d0 >> 0xe & 1) == 0) && (*piStack_290 != 1)) {
                if (piStack_290[1] == 1) {
                  pfVar21 = (float *)(CONCAT44(uStack_2bc,uStack_2c0) + *plStack_288 * uVar19);
                }
                else {
                  iVar3 = 0;
                  if (iStack_2c4 != 0) {
                    iVar3 = (int)uVar4 / iStack_2c4;
                  }
                  pfVar21 = (float *)(CONCAT44(uStack_2bc,uStack_2c0) + *plStack_288 * (long)iVar3 +
                                     (long)(int)(uVar4 - iVar3 * iStack_2c4) * 4);
                }
              }
              else {
                pfVar21 = (float *)(CONCAT44(uStack_2bc,uStack_2c0) + uVar19 * 4);
              }
              dVar31 = (double)*pfVar21;
            }
            if (dVar31 < dVar30) {
              uStack_4d8 = (undefined4 *)CONCAT44(uStack_4d8._4_4_,0x2010000);
              puStack_4d0 = &uStack_390;
              uStack_4c8 = 0;
              FUN_109a479a0(&uStack_4c0,&uStack_4d8);
              dVar30 = dVar31;
            }
            if (lStack_488 != 0) {
              piVar25 = (int *)(lStack_488 + 0x14);
              do {
                iVar3 = *piVar25;
                cVar6 = '\x01';
                bVar24 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                if (bVar24) {
                  *piVar25 = iVar3 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar3 + -1 == 0) {
                func_0x000109a848d4(&uStack_4c0);
              }
            }
            lStack_488 = 0;
            puStack_4a8 = (uint *)0x0;
            puStack_4b0 = (undefined4 *)0x0;
            uStack_498 = 0;
            uStack_4a0 = 0;
            if (0 < (int)uStack_4c0._4_4_) {
              lVar18 = 0;
              do {
                piStack_480[lVar18] = 0;
                lVar18 = lVar18 + 1;
              } while (lVar18 < (int)uStack_4c0._4_4_);
            }
            if (puStack_478 != &uStack_470 && puStack_478 != (undefined8 *)0x0) {
              _free(puStack_478[-1]);
            }
          } while (iVar26 != iVar9);
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 != uVar17);
      if (dVar30 < 1.79769313486232e+308) {
        uVar13 = *(undefined8 *)(param_1 + 0x10);
        FUN_109ba0854(uVar13,&uStack_f0,&uStack_150,&uStack_390,&uStack_270,&uStack_3f0);
        if (((*param_5 & 0x1f0000) != 0) &&
           (CONCAT44(uStack_43c,uStack_440) != CONCAT44(uStack_3dc,uStack_3e0))) {
          if ((piStack_410[1] == piStack_3b0[1]) && (*piStack_410 == *piStack_3b0)) {
            uStack_4c0 = (undefined4 *)CONCAT44(uStack_4c0._4_4_,0x2010000);
            puStack_4b8 = &uStack_450;
            puStack_4b0 = (undefined4 *)0x0;
            FUN_109a479a0(&uStack_3f0,&uStack_4c0);
          }
          else {
            uStack_4c0 = (undefined4 *)CONCAT44(uStack_4c0._4_4_,0x1010000);
            puStack_4b8 = &uStack_3f0;
            puStack_4b0 = (undefined4 *)0x0;
            uStack_4d8 = (undefined4 *)CONCAT44(uStack_4d8._4_4_,0x2010000);
            puStack_4d0 = &uStack_450;
            uStack_4c8 = 0;
            FUN_109a895d0(&uStack_4c0,&uStack_4d8);
          }
        }
        FUN_109a479a0(&uStack_390,param_4);
        bVar24 = *(int *)(param_1 + 0x18) <= (int)uVar13;
        goto LAB_109ba0eac;
      }
      FUN_109a8e944(param_4);
    }
  }
  bVar24 = false;
LAB_109ba0eac:
  if (lStack_418 != 0) {
    piVar25 = (int *)(lStack_418 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar7) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_450);
    }
  }
  lStack_418 = 0;
  uStack_438 = 0;
  uStack_434 = 0;
  uStack_440 = 0;
  uStack_43c = 0;
  uStack_428 = 0;
  uStack_424 = 0;
  uStack_430 = 0;
  uStack_42c = 0;
  if (0 < (int)uStack_44c) {
    lVar18 = 0;
    do {
      piStack_410[lVar18] = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uStack_44c);
  }
  if (puStack_408 != &uStack_400 && puStack_408 != (undefined8 *)0x0) {
    _free(puStack_408[-1]);
  }
  if (lStack_3b8 != 0) {
    piVar25 = (int *)(lStack_3b8 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar7) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_3f0);
    }
  }
  lStack_3b8 = 0;
  uStack_3d8 = 0;
  uStack_3d4 = 0;
  uStack_3e0 = 0;
  uStack_3dc = 0;
  uStack_3c8 = 0;
  uStack_3c4 = 0;
  uStack_3d0 = 0;
  uStack_3cc = 0;
  if (0 < (int)uStack_3ec) {
    lVar18 = 0;
    do {
      piStack_3b0[lVar18] = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uStack_3ec);
  }
  if (puStack_3a8 != &uStack_3a0 && puStack_3a8 != (undefined8 *)0x0) {
    _free(puStack_3a8[-1]);
  }
  if (lStack_358 != 0) {
    piVar25 = (int *)(lStack_358 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar7) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_390);
    }
  }
  lStack_358 = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  uStack_368 = 0;
  uStack_364 = 0;
  uStack_370 = 0;
  uStack_36c = 0;
  if (0 < (int)uStack_38c) {
    lVar18 = 0;
    do {
      *(undefined4 *)(lStack_350 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uStack_38c);
  }
  if (puStack_348 != &uStack_340 && puStack_348 != (undefined8 *)0x0) {
    _free(puStack_348[-1]);
  }
  if (lStack_2f8 != 0) {
    piVar25 = (int *)(lStack_2f8 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar7) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_330);
    }
  }
  lStack_2f8 = 0;
  uStack_318 = 0;
  uStack_314 = 0;
  uStack_320 = 0;
  uStack_31c = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  if (0 < (int)uStack_32c) {
    lVar18 = 0;
    do {
      *(undefined4 *)(lStack_2f0 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uStack_32c);
  }
  if (puStack_2e8 != &uStack_2e0 && puStack_2e8 != (undefined8 *)0x0) {
    _free(puStack_2e8[-1]);
  }
  if (lStack_298 != 0) {
    piVar25 = (int *)(lStack_298 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar7) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_2d0);
    }
  }
  lStack_298 = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  if (0 < (int)uStack_2cc) {
    lVar18 = 0;
    do {
      piStack_290[lVar18] = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uStack_2cc);
  }
  if (plStack_288 != alStack_280 && plStack_288 != (long *)0x0) {
    _free(plStack_288[-1]);
  }
  if (lStack_238 != 0) {
    piVar25 = (int *)(lStack_238 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar7) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_270);
    }
  }
  lStack_238 = 0;
  uStack_258 = 0;
  uStack_254 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_248 = 0;
  uStack_244 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  if (0 < (int)uStack_26c) {
    lVar18 = 0;
    do {
      piStack_230[lVar18] = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uStack_26c);
  }
  if (plStack_228 != alStack_220 && plStack_228 != (long *)0x0) {
    _free(plStack_228[-1]);
  }
  if (lStack_1d8 != 0) {
    piVar25 = (int *)(lStack_1d8 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar7) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_210);
    }
  }
  lStack_1d8 = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  if (0 < (int)uStack_20c) {
    lVar18 = 0;
    do {
      *(undefined4 *)(lStack_1d0 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uStack_20c);
  }
  if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
    _free(puStack_1c8[-1]);
  }
  if (lStack_178 != 0) {
    piVar25 = (int *)(lStack_178 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar7) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1b0);
    }
  }
  lStack_178 = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  if (0 < (int)uStack_1ac) {
    lVar18 = 0;
    do {
      *(undefined4 *)(lStack_170 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uStack_1ac);
  }
  if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
    _free(puStack_168[-1]);
  }
  if (uStack_118 != 0) {
    piVar25 = (int *)(uStack_118 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar7) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_150);
    }
  }
  uStack_118 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (0 < uStack_150._4_4_) {
    lVar18 = 0;
    do {
      *(undefined4 *)(uStack_110 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < uStack_150._4_4_);
  }
  if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
    _free(puStack_108[-1]);
  }
  if (uStack_b8 != 0) {
    piVar25 = (int *)(uStack_b8 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar7) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_f0);
    }
  }
  uStack_b8 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (0 < uStack_f0._4_4_) {
    lVar18 = 0;
    do {
      *(undefined4 *)(uStack_b0 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < uStack_f0._4_4_);
  }
  if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
    _free(puStack_a8[-1]);
  }
  return bVar24;
}



/* Entry: 109ba21e8; end: 109ba21ef;  */

void FUN_109ba21e8(void)

{
  return;
}



/* Entry: 109ba21f0; end: 109ba222b;  */

void FUN_109ba21f0(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109ba2228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109ba222c; end: 109ba2233;  */

void FUN_109ba222c(void)

{
  return;
}



/* Entry: 109ba2234; end: 109ba226f;  */

void FUN_109ba2234(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109ba226c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109ba2270; end: 109ba237f;  */

void FUN_109ba2270(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  
  puVar4 = (undefined8 *)0x228;
  __Znwm();
  *puVar4 = &PTR_FUN_110b29d50;
  puVar4[0x1b] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1c] = 0;
  *(undefined4 *)(puVar4 + 0x2c) = 0x42ff0000;
  puVar4[0x33] = 0;
  puVar4[0x32] = 0;
  *(undefined8 *)((long)puVar4 + 0x16c) = 0;
  *(undefined8 *)((long)puVar4 + 0x164) = 0;
  *(undefined8 *)((long)puVar4 + 0x17c) = 0;
  *(undefined8 *)((long)puVar4 + 0x174) = 0;
  *(undefined8 *)((long)puVar4 + 0x18c) = 0;
  *(undefined8 *)((long)puVar4 + 0x184) = 0;
  puVar4[0x34] = puVar4 + 0x2d;
  puVar4[0x35] = puVar4 + 0x36;
  puVar4[0x37] = 0;
  puVar4[0x36] = 0;
  *(undefined4 *)(puVar4 + 0x38) = 0x42ff0000;
  puVar4[0x3f] = 0;
  puVar4[0x3e] = 0;
  *(undefined8 *)((long)puVar4 + 0x1cc) = 0;
  *(undefined8 *)((long)puVar4 + 0x1c4) = 0;
  *(undefined8 *)((long)puVar4 + 0x1dc) = 0;
  *(undefined8 *)((long)puVar4 + 0x1d4) = 0;
  *(undefined8 *)((long)puVar4 + 0x1ec) = 0;
  *(undefined8 *)((long)puVar4 + 0x1e4) = 0;
  puVar4[0x40] = puVar4 + 0x39;
  puVar4[0x41] = puVar4 + 0x42;
  *(undefined4 *)(puVar4 + 0x44) = 0;
  puVar4[0x43] = 0;
  puVar4[0x42] = 0;
  plVar5 = (long *)0x20;
  __Znwm();
  plVar6 = plVar5 + 1;
  *(int *)plVar6 = 1;
  *plVar5 = (long)&PTR_DAT_110b29dc8;
  plVar5[2] = (long)puVar4;
  *param_1 = plVar5;
  param_1[1] = puVar4;
  FUN_109ba3d6c();
  if ((int)puVar4 == 0) {
    do {
      iVar3 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



/* Entry: 109ba2380; end: 109ba2533;  */

undefined8 * FUN_109ba2380(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b29d50;
  if (*(int *)(param_1 + 0x44) != 0) {
    param_1[0x18] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x13] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
    if (param_1[0x33] != 0) {
      piVar1 = (int *)(param_1[0x33] + 0x14);
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
        func_0x000109a848d4(param_1 + 0x2c);
      }
    }
    param_1[0x33] = 0;
    param_1[0x2f] = 0;
    param_1[0x2e] = 0;
    param_1[0x31] = 0;
    param_1[0x30] = 0;
    if (0 < *(int *)((long)param_1 + 0x164)) {
      lVar5 = 0;
      lVar7 = param_1[0x34];
      do {
        *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)((long)param_1 + 0x164));
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (param_1[0x3f] != 0) {
    piVar1 = (int *)(param_1[0x3f] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x38);
    }
  }
  param_1[0x3f] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  if (0 < *(int *)((long)param_1 + 0x1c4)) {
    lVar5 = 0;
    lVar7 = param_1[0x40];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1c4));
  }
  puVar6 = (undefined8 *)param_1[0x41];
  if (puVar6 != param_1 + 0x42 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x33] != 0) {
    piVar1 = (int *)(param_1[0x33] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x2c);
    }
  }
  param_1[0x33] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  if (0 < *(int *)((long)param_1 + 0x164)) {
    lVar5 = 0;
    lVar7 = param_1[0x34];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x164));
  }
  puVar6 = (undefined8 *)param_1[0x35];
  if (puVar6 != param_1 + 0x36 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = param_1[0x1b];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109ba2534; end: 109ba2537;  */

undefined8 * FUN_109ba2534(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b29d50;
  if (*(int *)(param_1 + 0x44) != 0) {
    param_1[0x18] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x13] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
    if (param_1[0x33] != 0) {
      piVar1 = (int *)(param_1[0x33] + 0x14);
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
        func_0x000109a848d4(param_1 + 0x2c);
      }
    }
    param_1[0x33] = 0;
    param_1[0x2f] = 0;
    param_1[0x2e] = 0;
    param_1[0x31] = 0;
    param_1[0x30] = 0;
    if (0 < *(int *)((long)param_1 + 0x164)) {
      lVar5 = 0;
      lVar7 = param_1[0x34];
      do {
        *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)((long)param_1 + 0x164));
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (param_1[0x3f] != 0) {
    piVar1 = (int *)(param_1[0x3f] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x38);
    }
  }
  param_1[0x3f] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  if (0 < *(int *)((long)param_1 + 0x1c4)) {
    lVar5 = 0;
    lVar7 = param_1[0x40];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1c4));
  }
  puVar6 = (undefined8 *)param_1[0x41];
  if (puVar6 != param_1 + 0x42 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x33] != 0) {
    piVar1 = (int *)(param_1[0x33] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x2c);
    }
  }
  param_1[0x33] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  if (0 < *(int *)((long)param_1 + 0x164)) {
    lVar5 = 0;
    lVar7 = param_1[0x34];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x164));
  }
  puVar6 = (undefined8 *)param_1[0x35];
  if (puVar6 != param_1 + 0x36 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = param_1[0x1b];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109ba2538; end: 109ba254b;  */

void FUN_109ba2538(void)

{
  FUN_109ba2380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ba254c; end: 109ba3097;  */

void FUN_109ba254c(float param_1,double param_2,double param_3,long *param_4,long param_5,
                  long param_6,long param_7,ulong param_8,undefined4 param_9,undefined4 param_10,
                  uint param_11,uint param_12,undefined4 param_13,long param_14,undefined8 *param_15
                  )

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  float *pfVar5;
  float *pfVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  uint uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  uint uVar30;
  ulong uVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  double dVar45;
  double dVar46;
  float fVar47;
  double dVar48;
  float fVar49;
  double dVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined4 uStack_a0;
  int iStack_9c;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_4[3] = param_5;
  param_4[4] = param_6;
  param_4[5] = param_7;
  *(uint *)(param_4 + 6) = (uint)param_8;
  *(float *)((long)param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 7) = param_9;
  *(undefined4 *)((long)param_4 + 0x3c) = param_10;
  param_4[8] = (long)param_2;
  *(uint *)(param_4 + 9) = param_11;
  param_4[10] = (long)param_3;
  *(uint *)(param_4 + 0xb) = param_12;
  param_4[0xc] = param_14;
  param_4[0xd] = (long)param_15;
  if (((((param_5 == 0) || (param_6 == 0)) || ((uint)param_8 < 4)) ||
      ((param_1 < 0.0 || (param_2 < 0.0)))) || (1.0 < param_2)) {
LAB_109ba2fbc:
    if (param_15 != (undefined8 *)0x0) {
      *(undefined4 *)(param_15 + 4) = 0;
      param_15[1] = 0;
      *param_15 = 0;
      param_15[3] = 0;
      param_15[2] = 0;
    }
LAB_109ba2fcc:
    if (param_4[5] != 0) {
      _bzero(param_4[5],(int)param_4[6]);
    }
    param_4[0x19] = 0;
    param_4[0x16] = 0;
    if (param_4[0x3f] != 0) {
      piVar1 = (int *)(param_4[0x3f] + 0x14);
      do {
        iVar14 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar14 + -1 == 0) {
        func_0x000109a848d4(param_4 + 0x38);
      }
    }
    param_4[0x3f] = 0;
    param_4[0x3b] = 0;
    param_4[0x3a] = 0;
    param_4[0x3d] = 0;
    param_4[0x3c] = 0;
    if (0 < *(int *)((long)param_4 + 0x1c4)) {
      lVar20 = 0;
      lVar25 = param_4[0x40];
      do {
        *(undefined4 *)(lVar25 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < *(int *)((long)param_4 + 0x1c4));
    }
    uVar13 = 0;
  }
  else {
    if (param_11 < 5) {
      param_11 = 4;
    }
    *(uint *)(param_4 + 9) = param_11;
    if ((param_12 & 1) != 0) {
      if (((0.0 < param_3) && (param_3 < 1.0)) && (param_15 != (undefined8 *)0x0)) {
        plVar10 = param_4;
        (**(code **)(*param_4 + 0x20))(param_3,param_4,param_8);
        if ((int)plVar10 != 0) {
          param_8 = (ulong)*(uint *)(param_4 + 6);
          goto LAB_109ba2638;
        }
        param_15 = (undefined8 *)param_4[0xd];
      }
      goto LAB_109ba2fbc;
    }
    if (param_15 == (undefined8 *)0x0) goto LAB_109ba2fcc;
LAB_109ba2638:
    uVar13 = param_8 & 0xffffffff;
    uVar31 = uVar13 + 0x1f & 0x1ffffffe0;
    iVar14 = ((int)param_8 + (int)uVar31 + 0x1fU & 0xffffffe0) + 0x20;
    if ((((2 < *(int *)((long)param_4 + 0x1c4)) || ((int)param_4[0x39] != 1)) ||
        (*(int *)((long)param_4 + 0x1cc) != iVar14)) ||
       (((*(ushort *)(param_4 + 0x38) & 0xfff) != 0 || (lVar20 = param_4[0x3a], lVar20 == 0)))) {
      uStack_a0 = 1;
      iStack_9c = iVar14;
      FUN_109a83fd0(param_4 + 0x38,2,&uStack_a0,0);
      lVar20 = param_4[0x3a];
      uVar13 = (ulong)*(uint *)(param_4 + 6);
    }
    uVar11 = lVar20 + 0x1fU & 0xffffffffffffffe0;
    param_4[0x19] = uVar11;
    param_4[0x16] = uVar11 + uVar31;
    _bzero(uVar11,uVar13);
    _bzero(param_4[0x16],(int)param_4[6]);
    param_4[0xe] = 0x400000000;
    *(undefined4 *)(param_4 + 0xf) = 1;
    dVar32 = 1.0;
    uVar17 = 4;
    dVar39 = 1.0;
    do {
      dVar39 = dVar39 * (double)uVar17;
      dVar32 = dVar32 * (double)(((int)param_4[6] + uVar17) - 4);
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    param_4[0x10] = (long)((dVar39 * (double)*(uint *)((long)param_4 + 0x3c)) / dVar32);
    *(undefined4 *)((long)param_4 + 0x8c) = 0;
    *(undefined4 *)(param_4 + 0x12) = 0;
    *(int *)(param_4 + 0x11) = (int)param_4[6];
    puVar22 = (undefined8 *)param_4[0xc];
    puVar18 = (undefined8 *)param_4[0x15];
    if (puVar22 == (undefined8 *)0x0) {
      *(undefined4 *)(puVar18 + 4) = 0;
      uVar12 = 0;
      uVar19 = 0;
      puVar18[3] = 0;
      puVar18[2] = 0;
    }
    else {
      uVar19 = puVar22[1];
      uVar12 = *puVar22;
      uVar26 = puVar22[3];
      uVar24 = puVar22[2];
      *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(puVar22 + 4);
      puVar18[3] = uVar26;
      puVar18[2] = uVar24;
    }
    puVar18[1] = uVar19;
    *puVar18 = uVar12;
    uVar17 = 0;
    *(undefined4 *)(param_4 + 0x17) = 0;
    puVar18 = (undefined8 *)param_4[0x18];
    *(undefined4 *)(puVar18 + 4) = 0;
    puVar18[1] = 0;
    *puVar18 = 0;
    puVar18[3] = 0;
    puVar18[2] = 0;
    *(undefined4 *)(param_4 + 0x26) = 1;
    *(undefined4 *)(param_4 + 0x1a) = 0;
    param_4[0x25] = 0;
    param_4[0x21] = 0x3ff0000000000000;
    param_4[0x20] = 0x4039000000000000;
    param_4[0x23] = 0x3f847ae147ae147b;
    param_4[0x22] = 0x3fb999999999999a;
    dVar32 = 2.7832806769085257;
    do {
      dVar39 = dVar32;
      _log();
      dVar39 = dVar39 + 2.7832806769085257;
      dVar45 = dVar39 - dVar32;
      bVar8 = uVar17 < 9;
      uVar17 = uVar17 + 1;
      dVar32 = dVar39;
    } while (1.5e-08 < dVar45 && bVar8);
    param_4[0x24] = (long)dVar39;
    param_4[0x27] = 0x3fb9999999999999;
    param_4[0x28] = 0x3ff1999999999999;
    if (param_4[0xc] != 0) {
      FUN_109ba3098(param_4);
    }
    uVar17 = 0;
    *(undefined4 *)(param_4 + 0xe) = 0;
    do {
      uVar15 = *(uint *)((long)param_4 + 0x74);
      uVar21 = *(uint *)(param_4 + 0xf);
      if ((uVar21 <= uVar17) && (uVar15 < *(uint *)(param_4 + 0x11))) {
        uVar30 = uVar15 - 3;
        uVar15 = uVar15 + 1;
        dVar32 = ((double)param_4[0x10] * (double)uVar15) / (double)uVar30;
        dVar39 = dVar32 - (double)param_4[0x10];
        uVar21 = uVar21 + (int)dVar39;
        *(uint *)((long)param_4 + 0x74) = uVar15;
        *(uint *)(param_4 + 0xf) = uVar21;
        param_4[0x10] = (long)dVar32;
      }
      lVar20 = param_4[0x13];
      if (uVar21 < uVar17) {
        if (uVar15 < 8) {
          uVar17 = 0;
          iVar14 = 0;
          do {
            (**(code **)(*param_4 + 0x28))(param_4);
            dVar39 = dVar39 * (double)uVar15;
            if (dVar39 < (double)(4 - uVar17)) {
              *(int *)(lVar20 + (ulong)uVar17 * 4) = iVar14;
              uVar17 = uVar17 + 1;
            }
            iVar14 = iVar14 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar17 < 4);
        }
        else {
          lVar25 = 0;
          do {
            (**(code **)(*param_4 + 0x28))(param_4);
            dVar39 = dVar39 * (double)uVar15;
            iVar14 = (int)dVar39;
            *(int *)(lVar20 + lVar25 * 4) = iVar14;
            if (lVar25 != 0) {
              do {
                lVar23 = 0;
                while (*(int *)(lVar20 + lVar23 * 4) != iVar14) {
                  lVar23 = lVar23 + 1;
                  if (lVar25 == lVar23) goto LAB_109ba2970;
                }
                (**(code **)(*param_4 + 0x28))(param_4);
                dVar39 = dVar39 * (double)uVar15;
                iVar14 = (int)dVar39;
                *(int *)(lVar20 + lVar25 * 4) = iVar14;
              } while( true );
            }
LAB_109ba2970:
            lVar25 = lVar25 + 1;
          } while (lVar25 != 4);
        }
      }
      else {
        uVar15 = uVar15 - 1;
        if (uVar15 < 6) {
          uVar17 = 0;
          iVar14 = 0;
          do {
            (**(code **)(*param_4 + 0x28))(param_4);
            dVar39 = dVar39 * (double)uVar15;
            if (dVar39 < (double)(uVar17 ^ 3)) {
              *(int *)(lVar20 + (ulong)uVar17 * 4) = iVar14;
              uVar17 = uVar17 + 1;
            }
            iVar14 = iVar14 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar17 < 3);
        }
        else {
          lVar25 = 0;
          do {
            (**(code **)(*param_4 + 0x28))(param_4);
            dVar39 = dVar39 * (double)uVar15;
            iVar14 = (int)dVar39;
            *(int *)(lVar20 + lVar25 * 4) = iVar14;
            if (lVar25 != 0) {
              do {
                lVar23 = 0;
                while (*(int *)(lVar20 + lVar23 * 4) != iVar14) {
                  lVar23 = lVar23 + 1;
                  if (lVar25 == lVar23) goto LAB_109ba29e8;
                }
                (**(code **)(*param_4 + 0x28))(param_4);
                dVar39 = dVar39 * (double)uVar15;
                iVar14 = (int)dVar39;
                *(int *)(lVar20 + lVar25 * 4) = iVar14;
              } while( true );
            }
LAB_109ba29e8:
            lVar25 = lVar25 + 1;
          } while (lVar25 != 3);
        }
        *(int *)(param_4[0x13] + 0xc) = *(int *)((long)param_4 + 0x74) + -1;
      }
      puVar4 = (uint *)param_4[0x13];
      puVar18 = (undefined8 *)param_4[0x14];
      uVar17 = *puVar4;
      uVar21 = puVar4[1];
      uVar15 = puVar4[2];
      uVar30 = puVar4[3];
      lVar20 = param_4[3];
      lVar25 = param_4[4];
      uVar28 = *(undefined8 *)(lVar20 + (ulong)uVar17 * 8);
      *puVar18 = uVar28;
      uVar13 = *(ulong *)(lVar20 + (ulong)uVar21 * 8);
      puVar18[1] = uVar13;
      uVar29 = *(undefined8 *)(lVar20 + (ulong)uVar15 * 8);
      puVar18[2] = uVar29;
      uVar12 = *(undefined8 *)(lVar20 + (ulong)uVar30 * 8);
      puVar18[3] = uVar12;
      uVar24 = *(undefined8 *)(lVar25 + (ulong)uVar17 * 8);
      puVar18[4] = uVar24;
      uVar27 = *(undefined8 *)(lVar25 + (ulong)uVar21 * 8);
      puVar18[5] = uVar27;
      uVar26 = *(undefined8 *)(lVar25 + (ulong)uVar15 * 8);
      puVar18[6] = uVar26;
      uVar19 = *(undefined8 *)(lVar25 + (ulong)uVar30 * 8);
      puVar18[7] = uVar19;
      fVar34 = (float)uVar28;
      fVar37 = (float)uVar13;
      dVar39 = (double)(uVar13 & 0xffffffff);
      fVar38 = (float)uVar29;
      fVar40 = (float)uVar12;
      fVar41 = (float)((ulong)uVar28 >> 0x20);
      fVar35 = (float)(uVar13 >> 0x20);
      fVar36 = (float)((ulong)uVar29 >> 0x20);
      fVar42 = (float)((ulong)uVar12 >> 0x20);
      bVar8 = true;
      if ((fVar34 != fVar37) && (bVar8 = false, !NAN(fVar37) && !NAN(fVar38))) {
        bVar8 = fVar37 == fVar38;
      }
      bVar9 = true;
      if ((!bVar8) && (bVar9 = false, !NAN(fVar34) && !NAN(fVar40))) {
        bVar9 = fVar34 == fVar40;
      }
      bVar8 = true;
      if ((!bVar9) && (bVar8 = false, !NAN(fVar37) && !NAN(fVar40))) {
        bVar8 = fVar37 == fVar40;
      }
      bVar9 = true;
      if ((!bVar8) && (bVar9 = false, !NAN(fVar34) && !NAN(fVar38))) {
        bVar9 = fVar34 == fVar38;
      }
      bVar8 = true;
      if ((!bVar9) && (bVar8 = false, !NAN(fVar38) && !NAN(fVar40))) {
        bVar8 = fVar38 == fVar40;
      }
      bVar9 = true;
      if ((!bVar8) && (bVar9 = false, !NAN(fVar41) && !NAN(fVar35))) {
        bVar9 = fVar41 == fVar35;
      }
      bVar8 = true;
      if ((!bVar9) && (bVar8 = false, !NAN(fVar35) && !NAN(fVar36))) {
        bVar8 = fVar35 == fVar36;
      }
      bVar9 = true;
      if ((!bVar8) && (bVar9 = false, !NAN(fVar41) && !NAN(fVar42))) {
        bVar9 = fVar41 == fVar42;
      }
      bVar8 = true;
      if ((!bVar9) && (bVar8 = false, !NAN(fVar35) && !NAN(fVar42))) {
        bVar8 = fVar35 == fVar42;
      }
      bVar9 = true;
      if ((!bVar8) && (bVar9 = false, !NAN(fVar41) && !NAN(fVar36))) {
        bVar9 = fVar41 == fVar36;
      }
      bVar8 = true;
      if ((!bVar9) && (bVar8 = false, !NAN(fVar36) && !NAN(fVar42))) {
        bVar8 = fVar36 == fVar42;
      }
      if (!bVar8) {
        fVar62 = (float)((ulong)uVar24 >> 0x20);
        fVar52 = (float)((ulong)uVar27 >> 0x20);
        fVar55 = (float)uVar27;
        fVar43 = (float)uVar24;
        fVar44 = (float)uVar26;
        fVar49 = (float)((ulong)uVar26 >> 0x20);
        fVar64 = -(fVar41 * fVar37) + fVar35 * fVar34;
        fVar69 = -(fVar62 * fVar55) + fVar52 * fVar43;
        if (-1 < ((int)(fVar69 + (fVar55 - fVar43) * fVar49 + fVar44 * (fVar62 - fVar52)) ^
                 (int)(fVar64 + (fVar37 - fVar34) * fVar36 + fVar38 * (fVar41 - fVar35)))) {
          fVar47 = (float)uVar19;
          fVar51 = (float)((ulong)uVar19 >> 0x20);
          if (-1 < ((int)(fVar69 + (fVar55 - fVar43) * fVar51 + fVar47 * (fVar62 - fVar52)) ^
                   (int)(fVar64 + (fVar37 - fVar34) * fVar42 + fVar40 * (fVar41 - fVar35)))) {
            fVar64 = -(fVar36 * fVar40) + fVar42 * fVar38;
            fVar69 = -(fVar49 * fVar47) + fVar51 * fVar44;
            if ((-1 < ((int)(fVar69 + (fVar47 - fVar44) * fVar62 + fVar43 * (fVar49 - fVar51)) ^
                      (int)(fVar64 + (fVar40 - fVar38) * fVar41 + fVar34 * (fVar36 - fVar42)))) &&
               (fVar64 = fVar64 + (fVar40 - fVar38) * fVar35 + fVar37 * (fVar36 - fVar42),
               dVar39 = (double)(ulong)(uint)fVar64,
               -1 < ((int)(fVar69 + (fVar47 - fVar44) * fVar52 + fVar55 * (fVar49 - fVar51)) ^
                    (int)fVar64))) {
              pfVar5 = (float *)param_4[0x14];
              pfVar6 = (float *)param_4[0x15];
              fVar51 = *pfVar5;
              fVar41 = pfVar5[1];
              fVar55 = pfVar5[2];
              fVar37 = pfVar5[3];
              fVar34 = pfVar5[4];
              fVar38 = pfVar5[5];
              fVar64 = pfVar5[6];
              fVar58 = pfVar5[7];
              fVar59 = pfVar5[8];
              fVar61 = pfVar5[9];
              fVar62 = pfVar5[10];
              fVar69 = pfVar5[0xb];
              fVar36 = pfVar5[0xc];
              fVar35 = pfVar5[0xd];
              fVar66 = pfVar5[0xe];
              fVar42 = pfVar5[0xf];
              fVar67 = fVar34 * fVar36;
              fVar71 = fVar34 * fVar35;
              fVar47 = fVar38 * fVar36;
              fVar43 = fVar67 - fVar51 * fVar59;
              fVar40 = fVar71 - fVar51 * fVar61;
              fVar72 = fVar38 * fVar35;
              fVar53 = fVar47 - fVar41 * fVar59;
              fVar51 = fVar51 - fVar34;
              fVar49 = fVar55 - fVar34;
              fVar44 = fVar64 - fVar34;
              fVar52 = fVar41 - fVar38;
              fVar56 = fVar72 - fVar41 * fVar61;
              fVar59 = fVar59 - fVar36;
              fVar61 = fVar61 - fVar35;
              fVar54 = -(fVar43 * fVar49) + fVar51 * (fVar67 - fVar55 * fVar62);
              fVar57 = -(fVar53 * fVar49) + fVar51 * (fVar47 - fVar37 * fVar62);
              fVar63 = -(fVar59 * fVar49) + fVar51 * (fVar62 - fVar36);
              fVar70 = -(fVar40 * fVar49) + fVar51 * (fVar71 - fVar55 * fVar69);
              fVar68 = -(fVar56 * fVar49) + fVar51 * (fVar72 - fVar37 * fVar69);
              fVar65 = -(fVar61 * fVar49) + fVar51 * (fVar69 - fVar35);
              fVar62 = -(fVar52 * fVar44) + fVar51 * (fVar58 - fVar38);
              fVar69 = -(fVar52 * fVar49) + fVar51 * (fVar37 - fVar38);
              fVar37 = -(fVar54 * fVar62) +
                       fVar69 * (-(fVar43 * fVar44) + fVar51 * (fVar67 - fVar64 * fVar66));
              fVar41 = -(fVar70 * fVar62) +
                       fVar69 * (-(fVar40 * fVar44) + fVar51 * (fVar71 - fVar64 * fVar42));
              fVar55 = 1.0 / (-(fVar52 * fVar49) + fVar69 * fVar51);
              fVar49 = fVar55 * (-(fVar54 * fVar52) + fVar69 * fVar43);
              fVar67 = fVar55 * (-(fVar57 * fVar52) + fVar69 * fVar53);
              fVar60 = fVar55 * (-(fVar63 * fVar52) + fVar69 * fVar59);
              fVar43 = fVar55 * (-(fVar70 * fVar52) + fVar69 * fVar40);
              fVar71 = fVar55 * (-(fVar68 * fVar52) + fVar69 * fVar56);
              fVar55 = fVar55 * (-(fVar65 * fVar52) + fVar69 * fVar61);
              fVar64 = 1.0 / fVar69;
              fVar54 = fVar64 * fVar54;
              fVar70 = fVar64 * fVar70;
              fVar73 = -(fVar34 * fVar36) - (fVar38 * fVar54 + fVar34 * fVar49);
              fVar52 = -(fVar34 * fVar35) - (fVar38 * fVar70 + fVar34 * fVar43);
              fVar40 = (-(fVar68 * fVar62) +
                       fVar69 * (-(fVar56 * fVar44) + fVar51 * (fVar72 - fVar58 * fVar42))) / fVar41
              ;
              fVar41 = (-(fVar65 * fVar62) +
                       fVar69 * (-(fVar61 * fVar44) + fVar51 * (fVar42 - fVar35))) / fVar41;
              fVar37 = ((-(fVar63 * fVar62) +
                        fVar69 * (-(fVar59 * fVar44) + fVar51 * (fVar66 - fVar36))) -
                       fVar41 * fVar37) /
                       ((-(fVar57 * fVar62) +
                        fVar69 * (-(fVar53 * fVar44) + fVar51 * (fVar47 - fVar58 * fVar66))) -
                       fVar40 * fVar37);
              fVar42 = (fVar60 - fVar41 * fVar49) - fVar37 * (fVar67 - fVar40 * fVar49);
              fVar49 = (fVar64 * fVar63 - fVar41 * fVar54) -
                       fVar37 * (fVar64 * fVar57 - fVar40 * fVar54);
              fVar36 = ((fVar36 - (fVar38 * fVar64 * fVar63 + fVar34 * fVar60)) - fVar41 * fVar73) -
                       fVar37 * ((-(fVar38 * fVar36) - (fVar38 * fVar64 * fVar57 + fVar34 * fVar67))
                                - fVar40 * fVar73);
              fVar43 = (fVar55 - fVar41 * fVar43) - fVar37 * (fVar71 - fVar40 * fVar43);
              fVar44 = (fVar64 * fVar65 - fVar41 * fVar70) -
                       fVar37 * (fVar64 * fVar68 - fVar40 * fVar70);
              fVar34 = ((fVar35 - (fVar38 * fVar64 * fVar65 + fVar34 * fVar55)) - fVar41 * fVar52) -
                       fVar37 * ((-(fVar38 * fVar35) - (fVar38 * fVar64 * fVar68 + fVar34 * fVar71))
                                - fVar40 * fVar52);
              fVar41 = fVar41 - fVar37 * fVar40;
              *pfVar6 = fVar42;
              pfVar6[1] = fVar49;
              pfVar6[2] = fVar36;
              pfVar6[3] = fVar43;
              pfVar6[4] = fVar44;
              pfVar6[5] = fVar34;
              pfVar6[6] = fVar41;
              pfVar6[7] = fVar37;
              fVar37 = fVar37 + fVar41 + fVar34 + fVar44 + fVar43 + fVar36 + fVar42 + fVar49;
              dVar39 = (double)(ulong)(uint)fVar37;
              pfVar6[8] = 1.0;
              if ((uint)ABS(fVar37) < 0x7f800001) {
                FUN_109ba3098(param_4);
              }
            }
          }
        }
      }
      uVar17 = (int)param_4[0xe] + 1;
      *(uint *)(param_4 + 0xe) = uVar17;
    } while ((uVar17 < 100) || (uVar17 < *(uint *)(param_4 + 7)));
    uVar17 = *(uint *)(param_4 + 0x1a);
    if (((*(byte *)(param_4 + 0xb) >> 2 & 1) != 0) && (4 < uVar17)) {
      FUN_109ba350c(param_4);
      uVar17 = *(uint *)(param_4 + 0x1a);
    }
    puVar18 = (undefined8 *)param_4[0xd];
    if (uVar17 < *(uint *)(param_4 + 9)) {
      if (puVar18 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar18 + 4) = 0;
        puVar18[1] = 0;
        *puVar18 = 0;
        puVar18[3] = 0;
        puVar18[2] = 0;
      }
      if (param_4[5] != 0) {
        _bzero(param_4[5],(int)param_4[6]);
      }
    }
    else {
      puVar22 = (undefined8 *)param_4[0x18];
      uVar19 = puVar22[1];
      uVar12 = *puVar22;
      uVar26 = puVar22[3];
      uVar24 = puVar22[2];
      *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(puVar22 + 4);
      puVar18[1] = uVar19;
      *puVar18 = uVar12;
      puVar18[3] = uVar26;
      puVar18[2] = uVar24;
      if (param_4[5] != 0) {
        _memcpy(param_4[5],param_4[0x19],(int)param_4[6]);
      }
    }
    param_4[0x19] = 0;
    param_4[0x16] = 0;
    if (param_4[0x3f] != 0) {
      piVar1 = (int *)(param_4[0x3f] + 0x14);
      do {
        iVar14 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar14 + -1 == 0) {
        func_0x000109a848d4(param_4 + 0x38);
      }
    }
    param_4[0x3f] = 0;
    param_4[0x3b] = 0;
    param_4[0x3a] = 0;
    param_4[0x3d] = 0;
    param_4[0x3c] = 0;
    if (0 < *(int *)((long)param_4 + 0x1c4)) {
      lVar20 = 0;
      lVar25 = param_4[0x40];
      do {
        *(undefined4 *)(lVar25 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < *(int *)((long)param_4 + 0x1c4));
    }
    uVar17 = 0;
    if (*(uint *)(param_4 + 9) <= *(uint *)(param_4 + 0x1a)) {
      uVar17 = *(uint *)(param_4 + 0x1a);
    }
    uVar13 = (ulong)uVar17;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)(uVar13 + 0x18);
  lVar25 = *(long *)(uVar13 + 0x20);
  pfVar5 = *(float **)(uVar13 + 0xa8);
  lVar23 = *(long *)(uVar13 + 0xb0);
  *(int *)(uVar13 + 0x90) = *(int *)(uVar13 + 0x90) + 1;
  *(undefined4 *)(uVar13 + 0xb8) = 0;
  *(undefined4 *)(uVar13 + 0x130) = 1;
  if (*(int *)(uVar13 + 0x30) == 0) {
    uVar31 = 0;
    *(undefined4 *)(uVar13 + 0x128) = 0;
    uVar17 = *(uint *)(uVar13 + 0xb8);
LAB_109ba3204:
    if (uVar17 <= *(uint *)(uVar13 + 0xd0)) goto LAB_109ba3348;
    dVar46 = (double)uVar17 / (double)uVar31;
    *(double *)(uVar13 + 0x110) = dVar46;
    dVar33 = *(double *)(uVar13 + 0x118);
    dVar48 = *(double *)(uVar13 + 0x100);
    dVar50 = *(double *)(uVar13 + 0x108);
    dVar45 = (1.0 - dVar33) / (1.0 - dVar46);
    dVar32 = dVar45;
    _log();
    dVar46 = dVar33 / dVar46;
    dVar39 = dVar46;
    _log();
    uVar15 = 0;
    dVar39 = (dVar48 * (dVar33 * dVar39 + dVar32 * (1.0 - dVar33))) / dVar50 + 1.0;
    dVar32 = dVar39;
    do {
      dVar33 = dVar32;
      _log();
      dVar33 = dVar39 + dVar33;
      dVar48 = dVar33 - dVar32;
      bVar8 = uVar15 < 9;
      uVar15 = uVar15 + 1;
      dVar32 = dVar33;
    } while (1.5e-08 < dVar48 && bVar8);
  }
  else {
    fVar34 = *(float *)(uVar13 + 0x34) * *(float *)(uVar13 + 0x34);
    dVar32 = 1.0;
    uVar17 = 1;
    uVar11 = 0;
    do {
      fVar37 = *(float *)(lVar20 + (ulong)(uVar17 - 1) * 4);
      fVar40 = *(float *)(lVar20 + (ulong)uVar17 * 4);
      fVar38 = fVar40 * pfVar5[7] + fVar37 * pfVar5[6] + 1.0;
      fVar41 = (pfVar5[2] + fVar40 * pfVar5[1] + fVar37 * *pfVar5) / fVar38 -
               *(float *)(lVar25 + (ulong)(uVar17 - 1) * 4);
      fVar37 = (pfVar5[5] + fVar40 * pfVar5[4] + fVar37 * pfVar5[3]) / fVar38 -
               *(float *)(lVar25 + (ulong)uVar17 * 4);
      fVar37 = fVar41 * fVar41 + fVar37 * fVar37;
      iVar14 = *(int *)(uVar13 + 0xb8);
      if (fVar37 <= fVar34) {
        iVar14 = iVar14 + 1;
      }
      *(int *)(uVar13 + 0xb8) = iVar14;
      *(bool *)(lVar23 + uVar11) = fVar37 <= fVar34;
      lVar3 = 0x138;
      if (fVar34 < fVar37) {
        lVar3 = 0x140;
      }
      dVar32 = dVar32 * *(double *)(uVar13 + lVar3);
      dVar39 = *(double *)(uVar13 + 0x120);
      *(uint *)(uVar13 + 0x130) = (uint)(dVar32 <= dVar39);
      uVar2 = uVar11 + 1;
      uVar31 = (ulong)*(uint *)(uVar13 + 0x30);
      iVar14 = (int)uVar2;
      if (uVar31 <= uVar2) {
        *(int *)(uVar13 + 0x128) = iVar14;
        *(int *)(uVar13 + 300) = *(int *)(uVar13 + 300) + (int)uVar11 + 1;
        uVar17 = *(uint *)(uVar13 + 0xb8);
        if (dVar32 <= dVar39) goto LAB_109ba3204;
        goto LAB_109ba3298;
      }
      uVar17 = uVar17 + 2;
      uVar11 = uVar2;
    } while (dVar32 <= dVar39);
    *(int *)(uVar13 + 0x128) = iVar14;
    *(int *)(uVar13 + 300) = *(int *)(uVar13 + 300) + iVar14;
    uVar17 = *(uint *)(uVar13 + 0xb8);
LAB_109ba3298:
    dVar32 = (double)uVar17 / (double)(uVar2 & 0xffffffff);
    if ((dVar32 <= 0.0) ||
       (ABS(*(double *)(uVar13 + 0x118) - dVar32) / *(double *)(uVar13 + 0x118) <= 0.1))
    goto LAB_109ba3348;
    *(double *)(uVar13 + 0x118) = dVar32;
    dVar50 = *(double *)(uVar13 + 0x108);
    dVar46 = *(double *)(uVar13 + 0x110);
    dVar48 = *(double *)(uVar13 + 0x100);
    dVar45 = (1.0 - dVar32) / (1.0 - dVar46);
    dVar39 = dVar45;
    _log();
    dVar46 = dVar32 / dVar46;
    dVar33 = dVar46;
    _log();
    uVar15 = 0;
    dVar39 = (dVar48 * (dVar32 * dVar33 + dVar39 * (1.0 - dVar32))) / dVar50 + 1.0;
    dVar32 = dVar39;
    do {
      dVar33 = dVar32;
      _log();
      dVar33 = dVar39 + dVar33;
      dVar48 = dVar33 - dVar32;
      bVar8 = uVar15 < 9;
      uVar15 = uVar15 + 1;
      dVar32 = dVar33;
    } while (1.5e-08 < dVar48 && bVar8);
  }
  *(double *)(uVar13 + 0x120) = dVar33;
  *(double *)(uVar13 + 0x138) = dVar46;
  *(double *)(uVar13 + 0x140) = dVar45;
LAB_109ba3348:
  if (*(uint *)(uVar13 + 0xd0) < uVar17) {
    *(uint *)(uVar13 + 0xb8) = *(uint *)(uVar13 + 0xd0);
    uVar19 = *(undefined8 *)(uVar13 + 0xb0);
    uVar12 = *(undefined8 *)(uVar13 + 0xa8);
    *(undefined8 *)(uVar13 + 0xb0) = *(undefined8 *)(uVar13 + 200);
    *(undefined8 *)(uVar13 + 0xa8) = *(undefined8 *)(uVar13 + 0xc0);
    *(undefined8 *)(uVar13 + 200) = uVar19;
    *(undefined8 *)(uVar13 + 0xc0) = uVar12;
    *(uint *)(uVar13 + 0xd0) = uVar17;
    if ((4 < uVar17) && ((*(uint *)(uVar13 + 0x58) >> 1 & 1) != 0)) {
      FUN_109ba350c(uVar13);
      uVar17 = *(uint *)(uVar13 + 0xd0);
      uVar31 = (ulong)*(uint *)(uVar13 + 0x30);
    }
    uVar30 = (uint)uVar31;
    dVar39 = *(double *)(uVar13 + 0x40);
    dVar32 = (double)uVar17 / (double)uVar31;
    uVar21 = *(uint *)(uVar13 + 0x38);
    _pow(dVar32,0x4010000000000000);
    dVar32 = 1.0 - dVar32;
    uVar15 = uVar21;
    if (dVar32 < 1.0) {
      if (dVar32 <= 0.0) {
        uVar15 = 1;
      }
      else {
        dVar45 = 1.0 - dVar39;
        _log();
        _log();
        uVar15 = (uint)(dVar45 / dVar32);
      }
    }
    if (uVar21 <= uVar15) {
      uVar15 = uVar21;
    }
    *(uint *)(uVar13 + 0x38) = uVar15;
    if ((*(byte *)(uVar13 + 0x58) & 1) != 0) {
      uVar21 = uVar17;
      if ((uVar17 != 0) && (uVar11 = uVar31, uVar16 = uVar17, 0x14 < uVar30)) {
        while ((uVar30 = (uint)uVar11, uVar30 * uVar17 <= uVar16 * (int)uVar31 ||
               (uVar11 = uVar31, uVar21 = uVar16, uVar16 = uVar17,
               *(uint *)(*(long *)(uVar13 + 0xd8) + uVar31 * 4) <= uVar17))) {
          uVar21 = uVar16;
          uVar30 = (uint)uVar11;
          if ((uVar31 - 1 < 0x15) ||
             (uVar17 = uVar17 - (*(char *)(*(long *)(uVar13 + 200) + uVar31 + -1) != '\0'),
             uVar31 = uVar31 - 1, uVar16 = uVar21, uVar17 == 0)) break;
        }
      }
      if (*(int *)(uVar13 + 0x8c) * uVar30 < *(int *)(uVar13 + 0x88) * uVar21) {
        *(uint *)(uVar13 + 0x88) = uVar30;
        *(uint *)(uVar13 + 0x8c) = uVar21;
        dVar32 = (double)uVar21 / (double)uVar30;
        _pow(dVar32,0x4010000000000000);
        dVar32 = 1.0 - dVar32;
        uVar17 = uVar15;
        if (dVar32 < 1.0) {
          if (dVar32 <= 0.0) {
            uVar17 = 1;
          }
          else {
            dVar39 = 1.0 - dVar39;
            _log();
            _log();
            uVar17 = (uint)(dVar39 / dVar32);
          }
        }
        if (uVar15 <= uVar17) {
          uVar17 = uVar15;
        }
        *(uint *)(uVar13 + 0x38) = uVar17;
      }
    }
  }
  return;
}



/* Entry: 109ba3098; end: 109ba350b;  */

void FUN_109ba3098(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  
  lVar3 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x20);
  pfVar4 = *(float **)(param_1 + 0xa8);
  lVar6 = *(long *)(param_1 + 0xb0);
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x130) = 1;
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar15 = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
    uVar11 = *(uint *)(param_1 + 0xb8);
LAB_109ba3204:
    if (uVar11 <= *(uint *)(param_1 + 0xd0)) goto LAB_109ba3348;
    dVar27 = (double)uVar11 / (double)uVar15;
    *(double *)(param_1 + 0x110) = dVar27;
    dVar17 = *(double *)(param_1 + 0x118);
    dVar28 = *(double *)(param_1 + 0x100);
    dVar29 = *(double *)(param_1 + 0x108);
    dVar26 = (1.0 - dVar17) / (1.0 - dVar27);
    dVar16 = dVar26;
    _log();
    dVar27 = dVar17 / dVar27;
    dVar23 = dVar27;
    _log();
    uVar8 = 0;
    dVar23 = (dVar28 * (dVar17 * dVar23 + dVar16 * (1.0 - dVar17))) / dVar29 + 1.0;
    dVar16 = dVar23;
    do {
      dVar17 = dVar16;
      _log();
      dVar17 = dVar23 + dVar17;
      dVar28 = dVar17 - dVar16;
      bVar7 = uVar8 < 9;
      uVar8 = uVar8 + 1;
      dVar16 = dVar17;
    } while (1.5e-08 < dVar28 && bVar7);
  }
  else {
    fVar18 = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34);
    dVar16 = 1.0;
    uVar11 = 1;
    uVar12 = 0;
    do {
      fVar21 = *(float *)(lVar3 + (ulong)(uVar11 - 1) * 4);
      fVar24 = *(float *)(lVar3 + (ulong)uVar11 * 4);
      fVar22 = fVar24 * pfVar4[7] + fVar21 * pfVar4[6] + 1.0;
      fVar25 = (pfVar4[2] + fVar24 * pfVar4[1] + fVar21 * *pfVar4) / fVar22 -
               *(float *)(lVar5 + (ulong)(uVar11 - 1) * 4);
      fVar21 = (pfVar4[5] + fVar24 * pfVar4[4] + fVar21 * pfVar4[3]) / fVar22 -
               *(float *)(lVar5 + (ulong)uVar11 * 4);
      fVar21 = fVar25 * fVar25 + fVar21 * fVar21;
      iVar13 = *(int *)(param_1 + 0xb8);
      if (fVar21 <= fVar18) {
        iVar13 = iVar13 + 1;
      }
      *(int *)(param_1 + 0xb8) = iVar13;
      *(bool *)(lVar6 + uVar12) = fVar21 <= fVar18;
      lVar2 = 0x138;
      if (fVar18 < fVar21) {
        lVar2 = 0x140;
      }
      dVar16 = dVar16 * *(double *)(param_1 + lVar2);
      dVar23 = *(double *)(param_1 + 0x120);
      *(uint *)(param_1 + 0x130) = (uint)(dVar16 <= dVar23);
      uVar1 = uVar12 + 1;
      uVar15 = (ulong)*(uint *)(param_1 + 0x30);
      iVar13 = (int)uVar1;
      if (uVar15 <= uVar1) {
        *(int *)(param_1 + 0x128) = iVar13;
        *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + (int)uVar12 + 1;
        uVar11 = *(uint *)(param_1 + 0xb8);
        if (dVar16 <= dVar23) goto LAB_109ba3204;
        goto LAB_109ba3298;
      }
      uVar11 = uVar11 + 2;
      uVar12 = uVar1;
    } while (dVar16 <= dVar23);
    *(int *)(param_1 + 0x128) = iVar13;
    *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + iVar13;
    uVar11 = *(uint *)(param_1 + 0xb8);
LAB_109ba3298:
    dVar16 = (double)uVar11 / (double)(uVar1 & 0xffffffff);
    if ((dVar16 <= 0.0) ||
       (ABS(*(double *)(param_1 + 0x118) - dVar16) / *(double *)(param_1 + 0x118) <= 0.1))
    goto LAB_109ba3348;
    *(double *)(param_1 + 0x118) = dVar16;
    dVar29 = *(double *)(param_1 + 0x108);
    dVar27 = *(double *)(param_1 + 0x110);
    dVar28 = *(double *)(param_1 + 0x100);
    dVar26 = (1.0 - dVar16) / (1.0 - dVar27);
    dVar23 = dVar26;
    _log();
    dVar27 = dVar16 / dVar27;
    dVar17 = dVar27;
    _log();
    uVar8 = 0;
    dVar23 = (dVar28 * (dVar16 * dVar17 + dVar23 * (1.0 - dVar16))) / dVar29 + 1.0;
    dVar16 = dVar23;
    do {
      dVar17 = dVar16;
      _log();
      dVar17 = dVar23 + dVar17;
      dVar28 = dVar17 - dVar16;
      bVar7 = uVar8 < 9;
      uVar8 = uVar8 + 1;
      dVar16 = dVar17;
    } while (1.5e-08 < dVar28 && bVar7);
  }
  *(double *)(param_1 + 0x120) = dVar17;
  *(double *)(param_1 + 0x138) = dVar27;
  *(double *)(param_1 + 0x140) = dVar26;
LAB_109ba3348:
  if (*(uint *)(param_1 + 0xd0) < uVar11) {
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xd0);
    uVar20 = *(undefined8 *)(param_1 + 0xb0);
    uVar19 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 200) = uVar20;
    *(undefined8 *)(param_1 + 0xc0) = uVar19;
    *(uint *)(param_1 + 0xd0) = uVar11;
    if ((4 < uVar11) && ((*(uint *)(param_1 + 0x58) >> 1 & 1) != 0)) {
      FUN_109ba350c(param_1);
      uVar11 = *(uint *)(param_1 + 0xd0);
      uVar15 = (ulong)*(uint *)(param_1 + 0x30);
    }
    uVar14 = (uint)uVar15;
    dVar23 = *(double *)(param_1 + 0x40);
    dVar16 = (double)uVar11 / (double)uVar15;
    uVar10 = *(uint *)(param_1 + 0x38);
    _pow(dVar16,0x4010000000000000);
    dVar16 = 1.0 - dVar16;
    uVar8 = uVar10;
    if (dVar16 < 1.0) {
      if (dVar16 <= 0.0) {
        uVar8 = 1;
      }
      else {
        dVar26 = 1.0 - dVar23;
        _log();
        _log();
        uVar8 = (uint)(dVar26 / dVar16);
      }
    }
    if (uVar10 <= uVar8) {
      uVar8 = uVar10;
    }
    *(uint *)(param_1 + 0x38) = uVar8;
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      uVar10 = uVar11;
      if ((uVar11 != 0) && (uVar12 = uVar15, uVar9 = uVar11, 0x14 < uVar14)) {
        while ((uVar14 = (uint)uVar12, uVar14 * uVar11 <= uVar9 * (int)uVar15 ||
               (uVar12 = uVar15, uVar10 = uVar9, uVar9 = uVar11,
               *(uint *)(*(long *)(param_1 + 0xd8) + uVar15 * 4) <= uVar11))) {
          uVar10 = uVar9;
          uVar14 = (uint)uVar12;
          if ((uVar15 - 1 < 0x15) ||
             (uVar11 = uVar11 - (*(char *)(*(long *)(param_1 + 200) + uVar15 + -1) != '\0'),
             uVar15 = uVar15 - 1, uVar9 = uVar10, uVar11 == 0)) break;
        }
      }
      if (*(int *)(param_1 + 0x8c) * uVar14 < *(int *)(param_1 + 0x88) * uVar10) {
        *(uint *)(param_1 + 0x88) = uVar14;
        *(uint *)(param_1 + 0x8c) = uVar10;
        dVar16 = (double)uVar10 / (double)uVar14;
        _pow(dVar16,0x4010000000000000);
        dVar16 = 1.0 - dVar16;
        uVar11 = uVar8;
        if (dVar16 < 1.0) {
          if (dVar16 <= 0.0) {
            uVar11 = 1;
          }
          else {
            dVar23 = 1.0 - dVar23;
            _log();
            _log();
            uVar11 = (uint)(dVar23 / dVar16);
          }
        }
        if (uVar8 <= uVar11) {
          uVar11 = uVar8;
        }
        *(uint *)(param_1 + 0x38) = uVar11;
      }
    }
  }
  return;
}



/* Entry: 109ba350c; end: 109ba3d6b;  */

void FUN_109ba350c(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  float *pfVar11;
  long lVar12;
  float *pfVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uStack_150;
  long lStack_148;
  ulong uStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(param_1 + 0xc0);
  FUN_109ba4130(plVar5,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x158),&fStack_ac);
  uVar16 = 0;
  fVar17 = 100.0;
  do {
    pfVar6 = *(float **)(param_1 + 0x148);
    pfVar7 = *(float **)(param_1 + 0x150);
    fStack_bc = fVar17;
LAB_109ba3580:
    lVar8 = 0;
    pfVar11 = pfVar7;
    do {
      if (lVar8 == 0) {
        fVar17 = (fStack_bc + 1.0) * *pfVar6;
      }
      else {
        lVar12 = 0;
        pfVar13 = pfVar7;
        do {
          fVar17 = pfVar6[lVar8 * 8 + lVar12];
          if (lVar12 != 0) {
            lVar15 = 0;
            do {
              fVar17 = fVar17 - pfVar13[lVar15] * pfVar11[lVar15];
              lVar15 = lVar15 + 1;
            } while (lVar12 != lVar15);
          }
          pfVar7[lVar8 * 8 + lVar12] = fVar17 / pfVar7[lVar12 * 9];
          lVar12 = lVar12 + 1;
          pfVar13 = pfVar13 + 8;
        } while (lVar12 != lVar8);
        lVar12 = 0;
        fVar17 = (fStack_bc + 1.0) * pfVar6[lVar8 * 9];
        do {
          fVar17 = fVar17 - pfVar11[lVar12] * pfVar11[lVar12];
          lVar12 = lVar12 + 1;
        } while (lVar8 != lVar12);
      }
      if (fVar17 < 0.0) goto LAB_109ba3638;
      pfVar7[lVar8 * 9] = SQRT(fVar17);
      lVar8 = lVar8 + 1;
      pfVar11 = pfVar11 + 8;
    } while (lVar8 != 8);
    fVar28 = 1.0 / *pfVar7;
    fVar48 = 1.0 / pfVar7[9];
    fVar33 = 1.0 / pfVar7[0x12];
    fStack_cc = 1.0 / pfVar7[0x1b];
    fVar41 = 1.0 / pfVar7[0x24];
    fStack_fc = 1.0 / pfVar7[0x2d];
    fStack_dc = 1.0 / pfVar7[0x36];
    fStack_b8 = 1.0 / pfVar7[0x3f];
    fVar38 = fVar28 * -(fVar48 * pfVar7[8]);
    fStack_d0 = fVar33 * -(fStack_cc * pfVar7[0x1a]);
    fStack_104 = fVar41 * -(fStack_fc * pfVar7[0x2c]);
    fStack_b4 = fStack_dc * -(fStack_b8 * pfVar7[0x3e]);
    fVar25 = fVar33 * pfVar7[0x10];
    fVar32 = fVar33 * pfVar7[0x11];
    fVar17 = fStack_cc * pfVar7[0x18] + pfVar7[0x10] * fStack_d0;
    fVar18 = fStack_cc * pfVar7[0x19] + pfVar7[0x11] * fStack_d0;
    fVar19 = fVar38 * fVar32;
    fStack_d4 = fVar19 + fVar28 * fVar25;
    fVar34 = fVar38 * fVar18;
    fStack_c0 = fVar34 + fVar28 * fVar17;
    fStack_ec = -(fVar32 * fVar48);
    pfVar7[0x10] = -(fVar25 * fVar28) - fVar19;
    fVar34 = -(fVar17 * fVar28) - fVar34;
    fVar25 = fStack_dc * pfVar7[0x34];
    fVar32 = fStack_dc * pfVar7[0x35];
    fVar17 = fStack_b8 * pfVar7[0x3c] + pfVar7[0x34] * fStack_b4;
    fVar19 = fStack_b8 * pfVar7[0x3d] + pfVar7[0x35] * fStack_b4;
    fVar35 = fStack_104 * fVar32;
    fStack_c8 = fVar35 + fVar41 * fVar25;
    fVar42 = fStack_104 * fVar19;
    fStack_c4 = fVar42 + fVar41 * fVar17;
    fStack_108 = -(fVar32 * fStack_fc);
    pfVar7[0x34] = -(fVar25 * fVar41) - fVar35;
    fStack_b0 = -(fVar19 * fStack_fc);
    pfVar7[0x3c] = -(fVar17 * fVar41) - fVar42;
    fVar17 = pfVar7[0x20];
    fVar42 = pfVar7[0x21];
    fVar25 = pfVar7[0x28];
    fVar19 = pfVar7[0x29];
    fVar43 = pfVar7[0x30];
    fVar26 = (fStack_108 * fVar19 - fVar42 * fStack_c8) + pfVar7[0x31] * fStack_dc;
    fVar23 = pfVar7[0x22];
    fVar24 = pfVar7[0x23];
    fVar22 = (fStack_b0 * fVar19 - fVar42 * fStack_c4) + pfVar7[0x31] * fStack_b4 +
             pfVar7[0x39] * fStack_b8;
    fVar32 = pfVar7[0x2a];
    fVar35 = pfVar7[0x2b];
    fVar36 = (fStack_108 * fVar32 - fVar23 * fStack_c8) + pfVar7[0x32] * fStack_dc;
    fVar49 = (fStack_b0 * fVar32 - fVar23 * fStack_c4) + pfVar7[0x32] * fStack_b4 +
             pfVar7[0x3a] * fStack_b8;
    fVar44 = (fStack_108 * fVar35 - fVar24 * fStack_c8) + pfVar7[0x33] * fStack_dc;
    fVar46 = (fStack_b0 * fVar35 - fVar24 * fStack_c4) + pfVar7[0x33] * fStack_b4 +
             pfVar7[0x3b] * fStack_b8;
    fVar19 = fStack_fc * fVar19 + fVar42 * fStack_104;
    fVar32 = fStack_fc * fVar32 + fVar23 * fStack_104;
    fVar23 = fVar41 * fVar23;
    fStack_e0 = fStack_ec * fVar23 + fVar48 * fVar41 * fVar42;
    fStack_e8 = fStack_ec * fVar32 + fVar48 * fVar19;
    fStack_f4 = fStack_ec * fVar36 + fVar48 * fVar26;
    fStack_110 = fStack_ec * fVar49 + fVar48 * fVar22;
    fVar20 = -(fVar18 * fVar48);
    fVar21 = fStack_fc * fVar35 + fVar24 * fStack_104;
    fVar24 = fVar41 * fVar24;
    fStack_d8 = (fVar38 * fVar41 * fVar42 + fVar28 * fVar41 * fVar17) - fStack_d4 * fVar23;
    pfVar7[0x20] = -(fVar24 * fVar34) - fStack_d8;
    pfVar7[0x21] = -(fVar24 * fVar20) - fStack_e0;
    fStack_f8 = fStack_d0 * fVar24;
    fVar42 = -(fVar24 * fStack_cc);
    pfVar7[0x22] = -(fVar23 * fVar33) - fStack_f8;
    fStack_e4 = (fVar38 * fVar19 + fVar28 * (fStack_fc * fVar25 + fVar17 * fStack_104)) -
                fStack_d4 * fVar32;
    pfVar7[0x28] = -(fVar21 * fVar34) - fStack_e4;
    pfVar7[0x29] = -(fVar21 * fVar20) - fStack_e8;
    fStack_114 = -(fVar21 * fStack_cc);
    pfVar7[0x2a] = -(fVar32 * fVar33) - fStack_d0 * fVar21;
    fStack_f0 = (fVar38 * fVar26 +
                fVar28 * ((fStack_108 * fVar25 - fVar17 * fStack_c8) + fVar43 * fStack_dc)) -
                fStack_d4 * fVar36;
    pfVar7[0x30] = -(fVar44 * fVar34) - fStack_f0;
    pfVar7[0x31] = -(fVar44 * fVar20) - fStack_f4;
    fStack_100 = -(fVar44 * fStack_cc);
    pfVar7[0x32] = -(fVar36 * fVar33) - fStack_d0 * fVar44;
    pfVar7[0x18] = fVar34;
    pfVar7[0x19] = fVar20;
    fStack_10c = (fVar38 * fVar22 +
                 fVar28 * ((fStack_b0 * fVar25 - fVar17 * fStack_c4) + fVar43 * fStack_b4 +
                          pfVar7[0x38] * fStack_b8)) - fStack_d4 * fVar49;
    pfVar7[0x38] = -(fVar46 * fVar34) - fStack_10c;
    pfVar7[0x39] = -(fVar46 * fVar20) - fStack_110;
    fVar37 = -(fVar46 * fStack_cc);
    pfVar7[0x3a] = -(fVar49 * fVar33) - fStack_d0 * fVar46;
    pfVar7[0x3b] = fVar37;
    *pfVar7 = fVar28;
    pfVar7[0x11] = fStack_ec;
    pfVar7[0x12] = fVar33;
    pfVar7[0x23] = fVar42;
    pfVar7[0x24] = fVar41;
    pfVar7[8] = fVar38;
    pfVar7[9] = fVar48;
    pfVar7[0x1a] = fStack_d0;
    pfVar7[0x1b] = fStack_cc;
    pfVar7[0x2c] = fStack_104;
    pfVar7[0x2d] = fStack_fc;
    pfVar7[0x3e] = fStack_b4;
    pfVar7[0x3f] = fStack_b8;
    pfVar7[0x35] = fStack_108;
    pfVar7[0x36] = fStack_dc;
    pfVar7[0x3d] = fStack_b0;
    pfVar7[0x2b] = fStack_114;
    pfVar7[0x33] = fStack_100;
    pfVar6 = *(float **)(param_1 + 0x158);
    fVar22 = *pfVar6;
    fVar34 = pfVar6[1];
    fVar18 = fVar48 * fVar34 + fVar22 * fVar38;
    fVar27 = pfVar6[2];
    fVar39 = pfVar6[3];
    fVar19 = (fStack_ec * fVar34 - fVar22 * fStack_d4) + fVar27 * fVar33;
    fVar25 = fStack_f8 + fVar33 * fVar23;
    fVar29 = fStack_d0 * fVar21 + fVar33 * fVar32;
    fVar35 = fStack_d0 * fVar44 + fVar33 * fVar36;
    fVar17 = fStack_d0 * fVar46 + fVar33 * fVar49;
    fVar40 = (fVar20 * fVar34 - fVar22 * fStack_c0) + fVar27 * fStack_d0 + fVar39 * fStack_cc;
    fVar49 = fStack_d8 - fStack_c0 * fVar24;
    fVar47 = fStack_e0 + fVar20 * fVar24;
    fVar50 = fStack_e4 - fStack_c0 * fVar21;
    fVar21 = fStack_e8 + fVar20 * fVar21;
    fVar23 = fStack_f0 - fStack_c0 * fVar44;
    fVar45 = fStack_f4 + fVar20 * fVar44;
    fVar36 = fStack_10c - fStack_c0 * fVar46;
    fVar43 = fStack_110 + fVar20 * fVar46;
    fVar24 = pfVar6[4];
    fVar26 = pfVar6[5];
    fVar46 = ((-(fVar47 * fVar34) - fVar22 * fVar49) - fVar27 * fVar25) + fVar39 * fVar42 +
             fVar24 * fVar41;
    fVar44 = ((-(fVar21 * fVar34) - fVar22 * fVar50) - fVar27 * fVar29) + fVar39 * fStack_114 +
             fVar24 * fStack_104 + fVar26 * fStack_fc;
    fVar32 = ((((-(fVar45 * fVar34) - fVar22 * fVar23) - fVar27 * fVar35) + fVar39 * fStack_100) -
             fVar24 * fStack_c8) + fVar26 * fStack_108 + pfVar6[6] * fStack_dc;
    fVar24 = ((((-(fVar43 * fVar34) - fVar22 * fVar36) - fVar27 * fVar17) + fVar39 * fVar37) -
             fVar24 * fStack_c4) + fVar26 * fStack_b0 + pfVar6[6] * fStack_b4 +
             pfVar6[7] * fStack_b8;
    fStack_90 = fStack_b4 * fVar24 + fVar32 * fStack_dc;
    fStack_a8 = ((((((fVar38 * fVar18 + fVar28 * fVar22 * fVar28) - fVar19 * fStack_d4) -
                   fVar40 * fStack_c0) - fVar46 * fVar49) - fVar44 * fVar50) - fVar32 * fVar23) -
                fVar24 * fVar36;
    fStack_a4 = ((((fStack_ec * fVar19 + fVar18 * fVar48 + fVar40 * fVar20) - fVar46 * fVar47) -
                 fVar44 * fVar21) - fVar32 * fVar45) - fVar24 * fVar43;
    fStack_a0 = ((((fStack_d0 * fVar40 + fVar19 * fVar33) - fVar46 * fVar25) - fVar44 * fVar29) -
                fVar32 * fVar35) - fVar24 * fVar17;
    fStack_9c = fVar42 * fVar46 + fVar40 * fStack_cc + fVar44 * fStack_114 + fVar32 * fStack_100 +
                fVar24 * fVar37;
    fStack_98 = ((fStack_104 * fVar44 + fVar46 * fVar41) - fVar32 * fStack_c8) - fVar24 * fStack_c4;
    fStack_94 = fStack_108 * fVar32 + fVar44 * fStack_fc + fVar24 * fStack_b0;
    fStack_8c = fStack_b8 * fVar24;
    pfVar7 = *(float **)(param_1 + 0xc0);
    fVar18 = *pfVar7 - fStack_a8;
    fVar19 = pfVar7[1] - fStack_a4;
    fVar25 = pfVar7[2] - fStack_a0;
    fVar32 = pfVar7[3] - fStack_9c;
    fVar35 = pfVar7[4] - fStack_98;
    fVar42 = pfVar7[5] - fStack_94;
    fVar20 = pfVar7[6] - fStack_90;
    fVar24 = pfVar7[7] - fStack_b8 * fVar24;
    fVar17 = 0.0;
    fVar21 = 0.0;
    if (*(uint *)(param_1 + 0x30) != 0) {
      uVar9 = 0;
      pcVar14 = *(char **)(param_1 + 200);
      do {
        if (*pcVar14 != '\0') {
          lVar8 = (uVar9 & 0xffffffff) * 4;
          fVar22 = *(float *)(*(long *)(param_1 + 0x18) + lVar8);
          uVar1 = (int)uVar9 + 1;
          fVar23 = *(float *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 4);
          fVar26 = fVar24 * fVar23 + fVar22 * fVar20 + 1.0;
          fVar34 = 1.0 / fVar26;
          if (ABS(fVar26) <= 1.1920929e-07) {
            fVar34 = 0.0;
          }
          fVar26 = (fVar25 + fVar19 * fVar23 + fVar22 * fVar18) * fVar34 -
                   *(float *)(*(long *)(param_1 + 0x20) + lVar8);
          fVar22 = (fVar42 + fVar35 * fVar23 + fVar22 * fVar32) * fVar34 -
                   *(float *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 4);
          fVar21 = fVar21 + fVar22 * fVar22 + fVar26 * fVar26;
        }
        uVar9 = uVar9 + 2;
        pcVar14 = pcVar14 + 1;
      } while ((ulong)*(uint *)(param_1 + 0x30) * 2 - uVar9 != 0);
    }
    lVar8 = 0;
    do {
      fVar22 = (float)*(undefined8 *)((long)&fStack_a8 + lVar8);
      fVar23 = (float)((ulong)*(undefined8 *)((long)&fStack_a8 + lVar8) >> 0x20);
      fVar26 = (float)*(undefined8 *)((long)&fStack_a0 + lVar8);
      fVar34 = (float)((ulong)*(undefined8 *)((long)&fStack_a0 + lVar8) >> 0x20);
      fVar17 = fVar17 + fVar22 * fVar22 + fVar23 * fVar23 + fVar26 * fVar26 + fVar34 * fVar34;
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != 0x20);
    lVar8 = 0;
    fVar17 = fStack_bc * fVar17;
    do {
      uVar31 = ((undefined8 *)((long)pfVar6 + lVar8))[1];
      uVar30 = *(undefined8 *)((long)pfVar6 + lVar8);
      fVar17 = fVar17 + (float)*(undefined8 *)((long)&fStack_a8 + lVar8) * (float)uVar30 +
               (float)((ulong)*(undefined8 *)((long)&fStack_a8 + lVar8) >> 0x20) *
               (float)((ulong)uVar30 >> 0x20) +
               (float)*(undefined8 *)((long)&fStack_a0 + lVar8) * (float)uVar31 +
               (float)((ulong)*(undefined8 *)((long)&fStack_a0 + lVar8) >> 0x20) *
               (float)((ulong)uVar31 >> 0x20);
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != 0x20);
    fVar22 = fStack_ac - fVar21;
    if (1.1920929e-07 <= ABS(fVar17 * 0.5)) {
      fVar22 = (fStack_ac - fVar21) / (fVar17 * 0.5);
    }
    if (fVar22 < 0.25) {
      fVar17 = fStack_bc * 8.0;
      if (fVar17 <= 8.388608e+09) goto LAB_109ba3ce4;
      goto LAB_109ba3d28;
    }
    fVar17 = fStack_bc;
    if (0.75 < fVar22) {
      fVar17 = fStack_bc * 0.5;
    }
LAB_109ba3ce4:
    if (0.0 < fVar22) {
      *pfVar7 = fVar18;
      pfVar7[1] = fVar19;
      pfVar7[2] = fVar25;
      pfVar7[3] = fVar32;
      pfVar7[4] = fVar35;
      pfVar7[5] = fVar42;
      pfVar7[6] = fVar20;
      pfVar7[7] = fVar24;
      plVar5 = *(long **)(param_1 + 0xc0);
      fStack_ac = fVar21;
      FUN_109ba4130(plVar5,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                    *(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0x30),
                    *(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x158),&fStack_ac);
    }
    uVar1 = (int)uVar16 + 1;
    uVar16 = (ulong)uVar1;
    if (uVar1 == 100) {
LAB_109ba3d28:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return;
      }
      ___stack_chk_fail();
      pcStack_128 = FUN_109ba3d6c;
      lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
      *(undefined4 *)(plVar5 + 0x44) = 0;
      uStack_140 = uVar16;
      lStack_138 = param_1;
      puStack_130 = &stack0xfffffffffffffff0;
      if ((((2 < *(int *)((long)plVar5 + 0x164)) || ((int)plVar5[0x2d] != 1)) ||
          (*(int *)((long)plVar5 + 0x16c) != 800)) ||
         (((*(ushort *)(plVar5 + 0x2c) & 0xfff) != 0 || (lVar8 = plVar5[0x2e], lVar8 == 0)))) {
        uStack_150 = 0x32000000001;
        FUN_109a83fd0(plVar5 + 0x2c,2,&uStack_150,0);
        lVar8 = plVar5[0x2e];
      }
      uVar16 = lVar8 + 0x1fU & 0xffffffffffffffe0;
      plVar5[0x13] = uVar16;
      plVar5[0x14] = uVar16 + 0x20;
      plVar5[0x29] = uVar16 + 0xe0;
      plVar5[0x2a] = uVar16 + 0x1e0;
      plVar5[0x2b] = uVar16 + 0x2e0;
      plVar5[0x15] = uVar16 + 0x60;
      plVar5[0x16] = 0;
      *(undefined4 *)(plVar5 + 0x17) = 0;
      plVar5[0x18] = uVar16 + 0xa0;
      plVar5[0x19] = 0;
      *(undefined4 *)(plVar5 + 0x1a) = 0;
      *(undefined4 *)(plVar5 + 0x1e) = 0;
      plVar5[0x1f] = 0;
      (**(code **)(*plVar5 + 0x30))(plVar5,0xffffffffffffffff);
      if (plVar5[0x2e] != 0) {
        uVar16 = (ulong)*(uint *)((long)plVar5 + 0x164);
        if ((int)*(uint *)((long)plVar5 + 0x164) < 3) {
          lVar8 = (long)*(int *)((long)plVar5 + 0x16c) * (long)(int)plVar5[0x2d];
        }
        else {
          lVar8 = 1;
          piVar10 = (int *)plVar5[0x34];
          do {
            lVar8 = lVar8 * *piVar10;
            uVar16 = uVar16 - 1;
            piVar10 = piVar10 + 1;
          } while (uVar16 != 0);
        }
        if (lVar8 != 0) {
          lVar8 = 1;
          *(undefined4 *)(plVar5 + 0x44) = 1;
          goto LAB_109ba3ea0;
        }
      }
      (**(code **)(*plVar5 + 0x18))(plVar5);
      lVar8 = 0;
LAB_109ba3ea0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
        return;
      }
      ___stack_chk_fail();
      if (*(int *)(lVar8 + 0x220) != 0) {
        *(undefined8 *)(lVar8 + 0xc0) = 0;
        *(undefined8 *)(lVar8 + 0xa0) = 0;
        *(undefined8 *)(lVar8 + 0xa8) = 0;
        *(undefined8 *)(lVar8 + 0x98) = 0;
        *(undefined8 *)(lVar8 + 0x150) = 0;
        *(undefined8 *)(lVar8 + 0x158) = 0;
        *(undefined8 *)(lVar8 + 0x148) = 0;
        if (*(long *)(lVar8 + 0x198) != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0x198) + 0x14);
          do {
            iVar2 = *piVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(lVar8 + 0x160);
          }
        }
        *(undefined8 *)(lVar8 + 0x198) = 0;
        *(undefined8 *)(lVar8 + 0x178) = 0;
        *(undefined8 *)(lVar8 + 0x170) = 0;
        *(undefined8 *)(lVar8 + 0x188) = 0;
        *(undefined8 *)(lVar8 + 0x180) = 0;
        if (0 < *(int *)(lVar8 + 0x164)) {
          lVar12 = 0;
          lVar15 = *(long *)(lVar8 + 0x1a0);
          do {
            *(undefined4 *)(lVar15 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar8 + 0x164));
        }
        *(undefined4 *)(lVar8 + 0x220) = 0;
      }
      return;
    }
  } while( true );
LAB_109ba3638:
  fStack_bc = fStack_bc + fStack_bc;
  goto LAB_109ba3580;
}



/* Entry: 109ba3d6c; end: 109ba3f6f;  */

void FUN_109ba3d6c(long *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if ((((2 < *(int *)((long)param_1 + 0x164)) || ((int)param_1[0x2d] != 1)) ||
      (*(int *)((long)param_1 + 0x16c) != 800)) ||
     (((*(ushort *)(param_1 + 0x2c) & 0xfff) != 0 || (lVar4 = param_1[0x2e], lVar4 == 0)))) {
    uStack_30 = 0x32000000001;
    FUN_109a83fd0(param_1 + 0x2c,2,&uStack_30,0);
    lVar4 = param_1[0x2e];
  }
  uVar5 = lVar4 + 0x1fU & 0xffffffffffffffe0;
  param_1[0x13] = uVar5;
  param_1[0x14] = uVar5 + 0x20;
  param_1[0x29] = uVar5 + 0xe0;
  param_1[0x2a] = uVar5 + 0x1e0;
  param_1[0x2b] = uVar5 + 0x2e0;
  param_1[0x15] = uVar5 + 0x60;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = uVar5 + 0xa0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  (**(code **)(*param_1 + 0x30))(param_1,0xffffffffffffffff);
  if (param_1[0x2e] != 0) {
    uVar5 = (ulong)*(uint *)((long)param_1 + 0x164);
    if ((int)*(uint *)((long)param_1 + 0x164) < 3) {
      lVar4 = (long)*(int *)((long)param_1 + 0x16c) * (long)(int)param_1[0x2d];
    }
    else {
      lVar4 = 1;
      piVar8 = (int *)param_1[0x34];
      do {
        lVar4 = lVar4 * *piVar8;
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 1;
      } while (uVar5 != 0);
    }
    if (lVar4 != 0) {
      lVar4 = 1;
      *(undefined4 *)(param_1 + 0x44) = 1;
      goto LAB_109ba3ea0;
    }
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar4 = 0;
LAB_109ba3ea0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (*(int *)(lVar4 + 0x220) != 0) {
      *(undefined8 *)(lVar4 + 0xc0) = 0;
      *(undefined8 *)(lVar4 + 0xa0) = 0;
      *(undefined8 *)(lVar4 + 0xa8) = 0;
      *(undefined8 *)(lVar4 + 0x98) = 0;
      *(undefined8 *)(lVar4 + 0x150) = 0;
      *(undefined8 *)(lVar4 + 0x158) = 0;
      *(undefined8 *)(lVar4 + 0x148) = 0;
      if (*(long *)(lVar4 + 0x198) != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0x198) + 0x14);
        do {
          iVar1 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(lVar4 + 0x160);
        }
      }
      *(undefined8 *)(lVar4 + 0x198) = 0;
      *(undefined8 *)(lVar4 + 0x178) = 0;
      *(undefined8 *)(lVar4 + 0x170) = 0;
      *(undefined8 *)(lVar4 + 0x188) = 0;
      *(undefined8 *)(lVar4 + 0x180) = 0;
      if (0 < *(int *)(lVar4 + 0x164)) {
        lVar6 = 0;
        lVar7 = *(long *)(lVar4 + 0x1a0);
        do {
          *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(lVar4 + 0x164));
      }
      *(undefined4 *)(lVar4 + 0x220) = 0;
    }
    return;
  }
  return;
}



/* Entry: 109ba3f70; end: 109ba40c7;  */

undefined8 FUN_109ba3f70(double param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  double dVar6;
  
  if (param_3 == 0) {
    *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_2 + 0xd8);
    *(undefined4 *)(param_2 + 0xf0) = 0;
  }
  else {
    if (*(double *)(param_2 + 0xf8) == param_1) {
      if (param_3 <= *(uint *)(param_2 + 0xf0)) {
        return 1;
      }
      func_0x0001074287b0(param_2 + 0xd8,param_3);
      uVar1 = *(uint *)(param_2 + 0xf0);
      uVar5 = (ulong)uVar1;
      if (uVar1 < 6) {
        uVar1 = 5;
      }
      uVar3 = (ulong)uVar1;
      iVar4 = param_3 - uVar1;
      if (uVar1 <= param_3 && iVar4 != 0) {
        dVar6 = *(double *)(param_2 + 0xf8);
        lVar2 = *(long *)(param_2 + 0xd8);
        do {
          *(int *)(lVar2 + uVar5 * 4 + uVar3 * 4) =
               (int)(dVar6 * (double)(uVar3 & 0xffffffff) + 4.0 +
                    SQRT(dVar6 * (1.0 - dVar6)) * 1.645 * SQRT((double)(uVar3 & 0xffffffff)));
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else {
      func_0x0001074287b0(param_2 + 0xd8,(ulong)param_3);
      *(double *)(param_2 + 0xf8) = param_1;
      if (5 < param_3) {
        lVar2 = *(long *)(param_2 + 0xd8);
        uVar5 = 5;
        do {
          *(int *)(lVar2 + uVar5 * 4) =
               (int)(param_1 * (double)(uVar5 & 0xffffffff) + 4.0 +
                    SQRT(param_1 * (1.0 - param_1)) * 1.645 * SQRT((double)(uVar5 & 0xffffffff)));
          uVar5 = uVar5 + 1;
        } while (param_3 != uVar5);
      }
    }
    *(uint *)(param_2 + 0xf0) = param_3;
  }
  return 1;
}



/* Entry: 109ba40c8; end: 109ba40ef;  */

double FUN_109ba40c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 8) ^ *(ulong *)(param_1 + 8) << 0x17;
  uVar2 = uVar1 >> 0x1a ^ uVar2 >> 0x11 ^ uVar1 ^ uVar2;
  *(ulong *)(param_1 + 8) = uVar1;
  *(ulong *)(param_1 + 0x10) = uVar2;
  return (double)(uVar2 + uVar1) / 1.0;
}



/* Entry: 109ba40f0; end: 109ba412f;  */

void FUN_109ba40f0(long *param_1,ulong param_2)

{
  int iVar1;
  
  param_1[1] = param_2;
  param_1[2] = ~param_2;
  iVar1 = 0x14;
  do {
    (**(code **)(*param_1 + 0x28))(param_1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



/* Entry: 109ba4130; end: 109ba4377;  */

void FUN_109ba4130(float *param_1,long param_2,long param_3,char *param_4,uint param_5,
                  float *param_6,undefined8 *param_7,float *param_8)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (param_6 != (float *)0x0) {
    param_6[0x3a] = 0.0;
    param_6[0x3b] = 0.0;
    param_6[0x38] = 0.0;
    param_6[0x39] = 0.0;
    param_6[0x3e] = 0.0;
    param_6[0x3f] = 0.0;
    param_6[0x3c] = 0.0;
    param_6[0x3d] = 0.0;
    param_6[0x32] = 0.0;
    param_6[0x33] = 0.0;
    param_6[0x30] = 0.0;
    param_6[0x31] = 0.0;
    param_6[0x36] = 0.0;
    param_6[0x37] = 0.0;
    param_6[0x34] = 0.0;
    param_6[0x35] = 0.0;
    param_6[0x2a] = 0.0;
    param_6[0x2b] = 0.0;
    param_6[0x28] = 0.0;
    param_6[0x29] = 0.0;
    param_6[0x2e] = 0.0;
    param_6[0x2f] = 0.0;
    param_6[0x2c] = 0.0;
    param_6[0x2d] = 0.0;
    param_6[0x22] = 0.0;
    param_6[0x23] = 0.0;
    param_6[0x20] = 0.0;
    param_6[0x21] = 0.0;
    param_6[0x26] = 0.0;
    param_6[0x27] = 0.0;
    param_6[0x24] = 0.0;
    param_6[0x25] = 0.0;
    param_6[0x1a] = 0.0;
    param_6[0x1b] = 0.0;
    param_6[0x18] = 0.0;
    param_6[0x19] = 0.0;
    param_6[0x1e] = 0.0;
    param_6[0x1f] = 0.0;
    param_6[0x1c] = 0.0;
    param_6[0x1d] = 0.0;
    param_6[0x12] = 0.0;
    param_6[0x13] = 0.0;
    param_6[0x10] = 0.0;
    param_6[0x11] = 0.0;
    param_6[0x16] = 0.0;
    param_6[0x17] = 0.0;
    param_6[0x14] = 0.0;
    param_6[0x15] = 0.0;
    param_6[10] = 0.0;
    param_6[0xb] = 0.0;
    param_6[8] = 0.0;
    param_6[9] = 0.0;
    param_6[0xe] = 0.0;
    param_6[0xf] = 0.0;
    param_6[0xc] = 0.0;
    param_6[0xd] = 0.0;
    param_6[2] = 0.0;
    param_6[3] = 0.0;
    param_6[0] = 0.0;
    param_6[1] = 0.0;
    param_6[6] = 0.0;
    param_6[7] = 0.0;
    param_6[4] = 0.0;
    param_6[5] = 0.0;
  }
  if (param_7 != (undefined8 *)0x0) {
    param_7[1] = 0;
    *param_7 = 0;
    param_7[3] = 0;
    param_7[2] = 0;
  }
  if (param_5 == 0) {
    fVar3 = 0.0;
  }
  else {
    uVar2 = 0;
    fVar3 = 0.0;
    do {
      if (*param_4 != '\0') {
        lVar1 = (uVar2 & 0xffffffff) * 4;
        uVar8 = *(undefined8 *)(param_2 + lVar1);
        fVar9 = (float)((ulong)uVar8 >> 0x20);
        fVar7 = (float)uVar8;
        fVar4 = param_1[7] * fVar9 + fVar7 * param_1[6] + 1.0;
        fVar5 = 1.0 / fVar4;
        if (ABS(fVar4) <= 1.1920929e-07) {
          fVar5 = 0.0;
        }
        fVar4 = (param_1[2] + param_1[1] * fVar9 + fVar7 * *param_1) * fVar5;
        fVar14 = fVar5 * (param_1[5] + param_1[4] * fVar9 + fVar7 * param_1[3]);
        fVar12 = fVar4 - *(float *)(param_3 + lVar1);
        fVar13 = fVar14 - *(float *)(param_3 + (ulong)((int)uVar2 + 1) * 4);
        fVar3 = fVar3 + fVar13 * fVar13 + fVar12 * fVar12;
        if (param_6 != (float *)0x0 || param_7 != (undefined8 *)0x0) {
          fVar10 = fVar7 * fVar5;
          fVar11 = fVar9 * fVar5;
          fVar4 = -fVar4;
          fVar14 = -fVar14;
          fVar6 = fVar7 * fVar4 * fVar5;
          fVar4 = fVar9 * fVar4 * fVar5;
          fVar7 = fVar7 * fVar14 * fVar5;
          fVar9 = fVar9 * fVar14 * fVar5;
          if (param_7 != (undefined8 *)0x0) {
            *param_7 = CONCAT44((float)((ulong)*param_7 >> 0x20) + fVar11 * fVar12,
                                (float)*param_7 + fVar10 * fVar12);
            *(float *)(param_7 + 1) = *(float *)(param_7 + 1) + fVar5 * fVar12;
            *(ulong *)((long)param_7 + 0xc) =
                 CONCAT44((float)((ulong)*(undefined8 *)((long)param_7 + 0xc) >> 0x20) +
                          fVar11 * fVar13,
                          (float)*(undefined8 *)((long)param_7 + 0xc) + fVar10 * fVar13);
            *(float *)((long)param_7 + 0x14) = *(float *)((long)param_7 + 0x14) + fVar5 * fVar13;
            param_7[3] = CONCAT44(fVar9 * fVar13 + fVar4 * fVar12 +
                                  (float)((ulong)param_7[3] >> 0x20),
                                  fVar7 * fVar13 + fVar6 * fVar12 + (float)param_7[3]);
          }
          if (param_6 != (float *)0x0) {
            *param_6 = *param_6 + fVar10 * fVar10;
            *(ulong *)(param_6 + 8) =
                 CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 8) >> 0x20) + fVar11 * fVar11,
                          (float)*(undefined8 *)(param_6 + 8) + fVar10 * fVar11);
            *(ulong *)(param_6 + 0x10) =
                 CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 0x10) >> 0x20) + fVar11 * fVar5,
                          (float)*(undefined8 *)(param_6 + 0x10) + fVar10 * fVar5);
            param_6[0x12] = param_6[0x12] + fVar5 * fVar5;
            param_6[0x1b] = param_6[0x1b] + fVar10 * fVar10;
            *(ulong *)(param_6 + 0x23) =
                 CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 0x23) >> 0x20) + fVar11 * fVar11,
                          (float)*(undefined8 *)(param_6 + 0x23) + fVar10 * fVar11);
            *(ulong *)(param_6 + 0x2b) =
                 CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 0x2b) >> 0x20) + fVar11 * fVar5,
                          (float)*(undefined8 *)(param_6 + 0x2b) + fVar10 * fVar5);
            param_6[0x2d] = param_6[0x2d] + fVar5 * fVar5;
            *(ulong *)(param_6 + 0x32) =
                 CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 0x32) >> 0x20) + fVar7 * fVar10,
                          (float)*(undefined8 *)(param_6 + 0x32) + fVar6 * fVar5);
            *(ulong *)(param_6 + 0x30) =
                 CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 0x30) >> 0x20) + fVar6 * fVar11,
                          (float)*(undefined8 *)(param_6 + 0x30) + fVar6 * fVar10);
            param_6[0x34] = param_6[0x34] + fVar7 * fVar11;
            param_6[0x35] = param_6[0x35] + fVar7 * fVar5;
            param_6[0x36] = fVar7 * fVar7 + fVar6 * fVar6 + param_6[0x36];
            *(ulong *)(param_6 + 0x3a) =
                 CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 0x3a) >> 0x20) + fVar9 * fVar10,
                          (float)*(undefined8 *)(param_6 + 0x3a) + fVar4 * fVar5);
            *(ulong *)(param_6 + 0x38) =
                 CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 0x38) >> 0x20) + fVar4 * fVar11,
                          (float)*(undefined8 *)(param_6 + 0x38) + fVar4 * fVar10);
            *(ulong *)(param_6 + 0x3c) =
                 CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 0x3c) >> 0x20) + fVar5 * fVar9,
                          (float)*(undefined8 *)(param_6 + 0x3c) + fVar11 * fVar9);
            *(ulong *)(param_6 + 0x3e) =
                 CONCAT44(fVar9 * fVar9 + fVar4 * fVar4 +
                          (float)((ulong)*(undefined8 *)(param_6 + 0x3e) >> 0x20),
                          fVar7 * fVar9 + fVar6 * fVar4 + (float)*(undefined8 *)(param_6 + 0x3e));
          }
        }
      }
      uVar2 = uVar2 + 2;
      param_4 = param_4 + 1;
    } while ((ulong)param_5 << 1 != uVar2);
  }
  *param_8 = fVar3;
  return;
}



/* Entry: 109ba4378; end: 109ba43b3;  */

void FUN_109ba4378(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109ba43b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109ba43b4; end: 109ba5c5f;  */

uint * FUN_109ba43b4(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                    uint *param_6,int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  uint *puVar8;
  undefined4 *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  undefined8 *puVar15;
  uint uStack_668;
  undefined4 uStack_664;
  undefined8 uStack_660;
  undefined4 uStack_658;
  undefined8 uStack_650;
  undefined4 uStack_648;
  undefined4 uStack_644;
  uint uStack_640;
  undefined4 uStack_63c;
  uint *puStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  uint uStack_618;
  undefined4 uStack_614;
  uint *puStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  int iStack_5f8;
  int iStack_5f4;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b8;
  ulong uStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  uint uStack_590;
  int iStack_58c;
  undefined8 uStack_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  long lStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  long lStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  uint uStack_3d0;
  int iStack_3cc;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  long lStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  ulong uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
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
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  uint uStack_1f0;
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
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  uint uStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  long lStack_158;
  undefined8 *puStack_150;
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
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar10 = *(ulong **)(param_1 + 2);
    uStack_90 = (ulong)&uStack_d0 | 8;
    uStack_c8 = puVar10[1];
    uStack_d0 = *puVar10;
    uStack_b8 = puVar10[3];
    uStack_c0 = puVar10[2];
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
      uStack_80 = *(undefined8 *)puVar10[9];
      uStack_78 = ((undefined8 *)puVar10[9])[1];
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
    puVar10 = *(ulong **)(param_2 + 2);
    uStack_f0 = (ulong)&uStack_130 | 8;
    uStack_128 = puVar10[1];
    uStack_130 = *puVar10;
    uStack_118 = puVar10[3];
    uStack_120 = puVar10[2];
    uStack_108 = puVar10[5];
    uStack_110 = puVar10[4];
    uStack_f8 = puVar10[7];
    uStack_100 = puVar10[6];
    puStack_e8 = &uStack_e0;
    uStack_d8 = 0;
    uStack_e0 = 0;
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
      uStack_e0 = *(undefined8 *)puVar10[9];
      uStack_d8 = ((undefined8 *)puVar10[9])[1];
    }
    else {
      uStack_130 = uStack_130 & 0xffffffff;
      func_0x000109a84868(&uStack_130);
    }
  }
  else {
    FUN_109a8a180(&uStack_130,param_2,0xffffffff);
  }
  puVar13 = &uStack_d0;
  FUN_109a89cd4(puVar13,3,5,1);
  puVar15 = &uStack_d0;
  FUN_109a89cd4(puVar15,3,6,1);
  iVar3 = (int)puVar13;
  if ((int)puVar13 <= (int)puVar15) {
    iVar3 = (int)puVar15;
  }
  if (-1 < iVar3) {
    puVar13 = &uStack_130;
    FUN_109a89cd4(puVar13,2,5,1);
    puVar15 = &uStack_130;
    FUN_109a89cd4(puVar15,2,6,1);
    iVar2 = (int)puVar13;
    if ((int)puVar13 <= (int)puVar15) {
      iVar2 = (int)puVar15;
    }
    if (iVar3 == iVar2) {
      uStack_190 = 0x42ff0000;
      uStack_184 = 0;
      uStack_180 = 0;
      iStack_18c = 0;
      uStack_188 = 0;
      puVar13 = (undefined8 *)((ulong)&uStack_190 | 8);
      uStack_174 = 0;
      uStack_170 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      uStack_164 = 0;
      uStack_16c = 0;
      uStack_168 = 0;
      lStack_158 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_1f0 = 0x42ff0000;
      puVar15 = (undefined8 *)((ulong)&uStack_1f0 | 8);
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
      uStack_198 = 0;
      uStack_1a0 = 0;
      puStack_1b0 = puVar15;
      puStack_1a8 = &uStack_1a0;
      puStack_150 = puVar13;
      puStack_148 = &uStack_140;
      if ((param_7 != 0) && (param_8 == 0)) {
        puVar14 = param_5;
        FUN_109a8b904(param_5,0xffffffff);
        puVar8 = param_6;
        FUN_109a8b904(param_6,0xffffffff);
        FUN_109a8b004(&uStack_250,param_5,0xffffffff);
        FUN_109a8b004(&uStack_2b0,param_6,0xffffffff);
        if ((1 < (int)puVar14 - 5U) || (1 < (int)puVar8 - 5U)) {
          puVar9 = (undefined4 *)0x54;
          func_0x000107c2ae8c();
          *puVar9 = 1;
          uStack_530 = (undefined8 *)(puVar9 + 1);
          uStack_528._0_4_ = 0x4c;
          uStack_528._4_4_ = 0;
          *(undefined8 *)(puVar9 + 7) = 0x5f5643203d3d2065;
          *(undefined8 *)(puVar9 + 5) = 0x70797472207c7c20;
          *(undefined8 *)(puVar9 + 0xb) = 0x3d20657079747428;
          *(undefined8 *)(puVar9 + 9) = 0x2026262029463436;
          *(undefined8 *)(puVar9 + 0xf) = 0x70797474207c7c20;
          *(undefined8 *)(puVar9 + 0xd) = 0x4632335f5643203d;
          *(undefined8 *)(puVar9 + 0x12) = 0x294634365f564320;
          *(undefined8 *)(puVar9 + 0x10) = 0x3d3d206570797474;
          *(undefined1 *)(puVar9 + 0x14) = 0;
          *(undefined8 *)(puVar9 + 3) = 0x4632335f5643203d;
          *(undefined8 *)(puVar9 + 1) = 0x3d20657079747228;
          FUN_109ac3188(0xffffff29,&uStack_530,&UNK_10f5a2eca,&UNK_10f5a2ed3,0x48);
          goto LAB_109ba5a5c;
        }
        if ((((int)uStack_250 == 1) && (uStack_250._4_4_ == 3)) ||
           (((int)uStack_250 == 3 && (uStack_250._4_4_ == 1)))) {
          if ((((int)uStack_2b0 == 1) && (uStack_2b0._4_4_ == 3)) ||
             (((int)uStack_2b0 == 3 && (uStack_2b0._4_4_ == 1)))) goto LAB_109ba4780;
        }
        puVar9 = (undefined4 *)0x64;
        func_0x000107c2ae8c();
        *puVar9 = 1;
        uStack_530 = (undefined8 *)(puVar9 + 1);
        uStack_528._0_4_ = 0x5c;
        uStack_528._4_4_ = 0;
        *(undefined8 *)(puVar9 + 0xb) = 0x2026262029293120;
        *(undefined8 *)(puVar9 + 9) = 0x2c3328657a695320;
        *(undefined8 *)(puVar9 + 0xf) = 0x3128657a6953203d;
        *(undefined8 *)(puVar9 + 0xd) = 0x3d20657a69737428;
        *(undefined8 *)(puVar9 + 0x13) = 0x3d3d20657a697374;
        *(undefined8 *)(puVar9 + 0x11) = 0x207c7c202933202c;
        *(undefined8 *)(puVar9 + 0x16) = 0x292931202c332865;
        *(undefined8 *)(puVar9 + 0x14) = 0x7a6953203d3d2065;
        *(undefined8 *)(puVar9 + 3) = 0x3128657a6953203d;
        *(undefined8 *)(puVar9 + 1) = 0x3d20657a69737228;
        *(undefined1 *)(puVar9 + 0x18) = 0;
        *(undefined8 *)(puVar9 + 7) = 0x3d3d20657a697372;
        *(undefined8 *)(puVar9 + 5) = 0x207c7c202933202c;
        FUN_109ac3188(0xffffff29,&uStack_530,&UNK_10f5a2eca,&UNK_10f5a2ed3,0x4a);
        goto LAB_109ba5a5c;
      }
      FUN_109a8f64c(param_5,3,1,6,0xffffffff,0,0);
      FUN_109a8f64c(param_6,3,1,6,0xffffffff,0,0);
LAB_109ba4780:
      if ((*param_5 & 0x1f0000) == 0x10000) {
        puVar11 = *(undefined8 **)(param_5 + 2);
        puStack_4f0 = (undefined8 *)((ulong)&uStack_530 | 8);
        uStack_528._0_4_ = (undefined4)puVar11[1];
        uStack_528._4_4_ = (undefined4)((ulong)puVar11[1] >> 0x20);
        uStack_530._0_4_ = (uint)*puVar11;
        uStack_530._4_4_ = (int)((ulong)*puVar11 >> 0x20);
        uStack_518 = (undefined4)puVar11[3];
        uStack_514 = (undefined4)((ulong)puVar11[3] >> 0x20);
        uStack_520 = (undefined4)puVar11[2];
        uStack_51c = (undefined4)((ulong)puVar11[2] >> 0x20);
        lStack_4f8 = puVar11[7];
        uStack_508 = (undefined4)puVar11[5];
        uStack_504 = (undefined4)((ulong)puVar11[5] >> 0x20);
        uStack_510 = (undefined4)puVar11[4];
        uStack_50c = (undefined4)((ulong)puVar11[4] >> 0x20);
        uStack_500 = (undefined4)puVar11[6];
        uStack_4fc = (undefined4)((ulong)puVar11[6] >> 0x20);
        puStack_4e8 = &uStack_4e0;
        uStack_4e0 = 0;
        uStack_4d8 = 0;
        if (puVar11[7] != 0) {
          piVar1 = (int *)(puVar11[7] + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (*(int *)((long)puVar11 + 4) < 3) {
          uStack_4e0 = *(undefined8 *)puVar11[9];
          uStack_4d8 = ((undefined8 *)puVar11[9])[1];
        }
        else {
          uStack_530._4_4_ = 0;
          func_0x000109a84868(&uStack_530);
        }
      }
      else {
        FUN_109a8a180(&uStack_530,param_5,0xffffffff);
      }
      if (lStack_158 != 0) {
        piVar1 = (int *)(lStack_158 + 0x14);
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
          func_0x000109a848d4(&uStack_190);
        }
      }
      if (0 < iStack_18c) {
        lVar12 = 0;
        do {
          *(undefined4 *)((long)puStack_150 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < iStack_18c);
      }
      uStack_188 = (undefined4)uStack_528;
      uStack_184 = uStack_528._4_4_;
      uStack_190 = (uint)uStack_530;
      iStack_18c = uStack_530._4_4_;
      uStack_178 = uStack_518;
      uStack_174 = uStack_514;
      uStack_180 = uStack_520;
      uStack_17c = uStack_51c;
      uStack_168 = uStack_508;
      uStack_164 = uStack_504;
      uStack_170 = uStack_510;
      uStack_16c = uStack_50c;
      lStack_158 = lStack_4f8;
      uStack_160 = uStack_500;
      uStack_15c = uStack_4fc;
      puVar11 = puStack_150;
      puVar6 = puStack_148;
      if ((puStack_148 != &uStack_140) &&
         (puVar11 = puVar13, puVar6 = &uStack_140, puStack_148 != (undefined8 *)0x0)) {
        _free(puStack_148[-1]);
      }
      puStack_148 = puVar6;
      puStack_150 = puVar11;
      if (uStack_530._4_4_ < 3) {
        puVar13 = (undefined8 *)((ulong)&uStack_530 | 4);
        *puStack_148 = *puStack_4e8;
        puStack_148[1] = puStack_4e8[1];
        uStack_530._0_4_ = 0x42ff0000;
        puVar13[1] = 0;
        *puVar13 = 0;
        puVar13[3] = 0;
        puVar13[2] = 0;
        puVar13[5] = 0;
        puVar13[4] = 0;
        *(undefined8 *)((long)puVar13 + 0x34) = 0;
        *(undefined8 *)((long)puVar13 + 0x2c) = 0;
        if (puStack_4e8 != &uStack_4e0) {
          _free(puStack_4e8[-1]);
        }
      }
      else {
        puStack_148 = puStack_4e8;
        puStack_150 = puStack_4f0;
      }
      if ((*param_6 & 0x1f0000) == 0x10000) {
        puVar13 = *(undefined8 **)(param_6 + 2);
        puStack_4f0 = (undefined8 *)((ulong)&uStack_530 | 8);
        uStack_528._0_4_ = (undefined4)puVar13[1];
        uStack_528._4_4_ = (undefined4)((ulong)puVar13[1] >> 0x20);
        uStack_530._0_4_ = (uint)*puVar13;
        uStack_530._4_4_ = (int)((ulong)*puVar13 >> 0x20);
        uStack_518 = (undefined4)puVar13[3];
        uStack_514 = (undefined4)((ulong)puVar13[3] >> 0x20);
        uStack_520 = (undefined4)puVar13[2];
        uStack_51c = (undefined4)((ulong)puVar13[2] >> 0x20);
        lStack_4f8 = puVar13[7];
        uStack_508 = (undefined4)puVar13[5];
        uStack_504 = (undefined4)((ulong)puVar13[5] >> 0x20);
        uStack_510 = (undefined4)puVar13[4];
        uStack_50c = (undefined4)((ulong)puVar13[4] >> 0x20);
        uStack_500 = (undefined4)puVar13[6];
        uStack_4fc = (undefined4)((ulong)puVar13[6] >> 0x20);
        puStack_4e8 = &uStack_4e0;
        uStack_4e0 = 0;
        uStack_4d8 = 0;
        if (puVar13[7] != 0) {
          piVar1 = (int *)(puVar13[7] + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (*(int *)((long)puVar13 + 4) < 3) {
          uStack_4e0 = *(undefined8 *)puVar13[9];
          uStack_4d8 = ((undefined8 *)puVar13[9])[1];
        }
        else {
          uStack_530._4_4_ = 0;
          func_0x000109a84868(&uStack_530);
        }
      }
      else {
        FUN_109a8a180(&uStack_530,param_6,0xffffffff);
      }
      if (lStack_1b8 != 0) {
        piVar1 = (int *)(lStack_1b8 + 0x14);
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
          func_0x000109a848d4(&uStack_1f0);
        }
      }
      if (0 < iStack_1ec) {
        lVar12 = 0;
        do {
          *(undefined4 *)((long)puStack_1b0 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < iStack_1ec);
      }
      uStack_1e8 = (undefined4)uStack_528;
      uStack_1e4 = uStack_528._4_4_;
      uStack_1f0 = (uint)uStack_530;
      iStack_1ec = uStack_530._4_4_;
      uStack_1d8 = uStack_518;
      uStack_1d4 = uStack_514;
      uStack_1e0 = uStack_520;
      uStack_1dc = uStack_51c;
      uStack_1c8 = uStack_508;
      uStack_1c4 = uStack_504;
      uStack_1d0 = uStack_510;
      uStack_1cc = uStack_50c;
      lStack_1b8 = lStack_4f8;
      uStack_1c0 = uStack_500;
      uStack_1bc = uStack_4fc;
      puVar13 = puStack_1b0;
      puVar11 = puStack_1a8;
      if ((puStack_1a8 != &uStack_1a0) &&
         (puVar13 = puVar15, puVar11 = &uStack_1a0, puStack_1a8 != (undefined8 *)0x0)) {
        _free(puStack_1a8[-1]);
      }
      puStack_1a8 = puVar11;
      puStack_1b0 = puVar13;
      if (uStack_530._4_4_ < 3) {
        puVar13 = (undefined8 *)((ulong)&uStack_530 | 4);
        *puStack_1a8 = *puStack_4e8;
        puStack_1a8[1] = puStack_4e8[1];
        uStack_530._0_4_ = 0x42ff0000;
        puVar13[1] = 0;
        *puVar13 = 0;
        puVar13[3] = 0;
        puVar13[2] = 0;
        puVar13[5] = 0;
        puVar13[4] = 0;
        *(undefined8 *)((long)puVar13 + 0x34) = 0;
        *(undefined8 *)((long)puVar13 + 0x2c) = 0;
        if (puStack_4e8 != &uStack_4e0) {
          _free(puStack_4e8[-1]);
        }
      }
      else {
        puStack_1a8 = puStack_4e8;
        puStack_1b0 = puStack_4f0;
      }
      if ((*param_3 & 0x1f0000) == 0x10000) {
        puVar10 = *(ulong **)(param_3 + 2);
        uStack_210 = (ulong)&uStack_250 | 8;
        uStack_248 = puVar10[1];
        uStack_250 = *puVar10;
        uStack_238 = puVar10[3];
        uStack_240 = puVar10[2];
        uStack_228 = puVar10[5];
        uStack_230 = puVar10[4];
        uStack_218 = puVar10[7];
        uStack_220 = puVar10[6];
        puStack_208 = &uStack_200;
        uStack_1f8 = 0;
        uStack_200 = 0;
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
          uStack_200 = *(undefined8 *)puVar10[9];
          uStack_1f8 = ((undefined8 *)puVar10[9])[1];
        }
        else {
          uStack_250 = uStack_250 & 0xffffffff;
          func_0x000109a84868(&uStack_250);
        }
      }
      else {
        FUN_109a8a180(&uStack_250,param_3,0xffffffff);
      }
      if ((*param_4 & 0x1f0000) == 0x10000) {
        puVar10 = *(ulong **)(param_4 + 2);
        uStack_270 = (ulong)&uStack_2b0 | 8;
        uStack_2a8 = puVar10[1];
        uStack_2b0 = *puVar10;
        uStack_298 = puVar10[3];
        uStack_2a0 = puVar10[2];
        uStack_288 = puVar10[5];
        uStack_290 = puVar10[4];
        uStack_278 = puVar10[7];
        uStack_280 = puVar10[6];
        puStack_268 = &uStack_260;
        uStack_258 = 0;
        uStack_260 = 0;
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
          uStack_260 = *(undefined8 *)puVar10[9];
          uStack_258 = ((undefined8 *)puVar10[9])[1];
        }
        else {
          uStack_2b0 = uStack_2b0 & 0xffffffff;
          func_0x000109a84868(&uStack_2b0);
        }
      }
      else {
        FUN_109a8a180(&uStack_2b0,param_4,0xffffffff);
      }
      lStack_4f8 = 0;
      uStack_4fc = 0;
      uStack_504 = 0;
      uStack_500 = 0;
      uStack_50c = 0;
      uStack_508 = 0;
      puStack_4f0 = (undefined8 *)((ulong)&uStack_530 | 8);
      uStack_514 = 0;
      uStack_510 = 0;
      uStack_51c = 0;
      uStack_518 = 0;
      uStack_528._4_4_ = 0;
      uStack_520 = 0;
      uStack_530._4_4_ = 0;
      uStack_528._0_4_ = 0;
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      uStack_530._0_4_ = 0x42ff0006;
      puStack_4e8 = &uStack_4e0;
      FUN_109b5e0c8(&uStack_530,&uStack_250);
      uStack_2d0 = (ulong)&uStack_310 | 8;
      uStack_308 = CONCAT44(uStack_528._4_4_,(undefined4)uStack_528);
      uStack_310 = CONCAT44(uStack_530._4_4_,(uint)uStack_530);
      uStack_2f8 = CONCAT44(uStack_514,uStack_518);
      uStack_300 = CONCAT44(uStack_51c,uStack_520);
      uStack_2e8 = CONCAT44(uStack_504,uStack_508);
      uStack_2f0 = CONCAT44(uStack_50c,uStack_510);
      uStack_2e0 = CONCAT44(uStack_4fc,uStack_500);
      lStack_2d8 = lStack_4f8;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      if (uStack_530._4_4_ < 3) {
        puVar13 = (undefined8 *)((ulong)&uStack_530 | 4);
        uStack_2c0 = *puStack_4e8;
        uStack_2b8 = puStack_4e8[1];
        uStack_530._0_4_ = 0x42ff0000;
        puVar13[1] = 0;
        *puVar13 = 0;
        puVar13[3] = 0;
        puVar13[2] = 0;
        puVar13[5] = 0;
        puVar13[4] = 0;
        *(undefined8 *)((long)puVar13 + 0x34) = 0;
        *(undefined8 *)((long)puVar13 + 0x2c) = 0;
        puStack_2c8 = &uStack_2c0;
        if (puStack_4e8 != &uStack_4e0) {
          _free(puStack_4e8[-1]);
        }
      }
      else {
        puStack_2c8 = puStack_4e8;
        uStack_2d0 = (ulong)puStack_4f0;
      }
      lStack_4f8 = 0;
      uStack_4fc = 0;
      puStack_4f0 = (undefined8 *)((ulong)&uStack_530 | 8);
      uStack_504 = 0;
      uStack_500 = 0;
      uStack_50c = 0;
      uStack_508 = 0;
      uStack_514 = 0;
      uStack_510 = 0;
      uStack_51c = 0;
      uStack_518 = 0;
      uStack_528._4_4_ = 0;
      uStack_520 = 0;
      uStack_530._4_4_ = 0;
      uStack_528._0_4_ = 0;
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      uStack_530._0_4_ = 0x42ff0006;
      puVar13 = &uStack_530;
      puStack_4e8 = &uStack_4e0;
      FUN_109b5e0c8(puVar13,&uStack_2b0);
      puStack_330 = (undefined8 *)((ulong)&uStack_370 | 8);
      uStack_368 = CONCAT44(uStack_528._4_4_,(undefined4)uStack_528);
      uStack_370 = CONCAT44(uStack_530._4_4_,(uint)uStack_530);
      uStack_358 = CONCAT44(uStack_514,uStack_518);
      uStack_360 = CONCAT44(uStack_51c,uStack_520);
      uStack_348 = CONCAT44(uStack_504,uStack_508);
      uStack_350 = CONCAT44(uStack_50c,uStack_510);
      uStack_340 = CONCAT44(uStack_4fc,uStack_500);
      lStack_338 = lStack_4f8;
      uStack_318 = 0;
      uStack_320 = 0;
      if (uStack_530._4_4_ < 3) {
        puVar15 = (undefined8 *)((ulong)&uStack_530 | 4);
        uStack_320 = *puStack_4e8;
        uStack_318 = puStack_4e8[1];
        uStack_530._0_4_ = 0x42ff0000;
        puVar15[1] = 0;
        *puVar15 = 0;
        puVar15[3] = 0;
        puVar15[2] = 0;
        puVar15[5] = 0;
        puVar15[4] = 0;
        *(undefined8 *)((long)puVar15 + 0x34) = 0;
        *(undefined8 *)((long)puVar15 + 0x2c) = 0;
        puStack_328 = &uStack_320;
        if (puStack_4e8 != &uStack_4e0) {
          puVar13 = (undefined8 *)puStack_4e8[-1];
          _free(puVar13);
        }
      }
      else {
        puStack_328 = puStack_4e8;
        puStack_330 = puStack_4f0;
      }
      if (param_8 < 3) {
        if (param_8 == 0) {
          uStack_50c = uStack_c8._4_4_;
          if (uStack_d0._4_4_ == 1) {
            uStack_50c = 1;
          }
          uStack_528._0_4_ = 0;
          uStack_528._4_4_ = 0;
          uStack_520 = 0;
          uStack_518 = (undefined4)uStack_c0;
          uStack_514 = (undefined4)(uStack_c0 >> 0x20);
          uStack_510 = (undefined4)uStack_c8;
          uStack_530._0_4_ = (uint)uStack_d0 & 0x4fff | 0x42420000;
          uStack_530._4_4_ = (int)*puStack_88;
          uStack_3ac = uStack_128._4_4_;
          if (uStack_130._4_4_ == 1) {
            uStack_3ac = 1;
          }
          uStack_3c8._0_4_ = 0;
          uStack_3c8._4_4_ = 0;
          uStack_3c0 = 0;
          uStack_3b8 = (undefined4)uStack_120;
          uStack_3b4 = (undefined4)(uStack_120 >> 0x20);
          uStack_3b0 = (undefined4)uStack_128;
          uStack_3d0 = (uint)uStack_130 & 0x4fff | 0x42420000;
          iStack_3cc = (int)*puStack_e8;
          uStack_56c = uStack_308._4_4_;
          if (uStack_310._4_4_ == 1) {
            uStack_56c = 1;
          }
          uStack_588._0_4_ = 0;
          uStack_588._4_4_ = 0;
          uStack_580 = 0;
          uStack_578 = (undefined4)uStack_300;
          uStack_574 = (undefined4)((ulong)uStack_300 >> 0x20);
          uStack_570 = (undefined4)uStack_308;
          uStack_590 = (uint)uStack_310 & 0x4fff | 0x42420000;
          iStack_58c = (int)*puStack_2c8;
          iStack_5f4 = uStack_368._4_4_;
          if (uStack_370._4_4_ == 1) {
            iStack_5f4 = 1;
          }
          puStack_610 = (uint *)0x0;
          uStack_608 = (ulong)uStack_608._4_4_ << 0x20;
          uStack_600 = uStack_360;
          iStack_5f8 = (int)uStack_368;
          uStack_618 = (uint)uStack_370 & 0x4fff | 0x42420000;
          uStack_614 = (undefined4)*puStack_328;
          uStack_628 = CONCAT44(uStack_17c,uStack_180);
          uStack_61c = uStack_184;
          if (iStack_18c == 1) {
            uStack_61c = 1;
          }
          puStack_638 = (uint *)0x0;
          uStack_630 = (ulong)uStack_630._4_4_ << 0x20;
          uStack_620 = uStack_188;
          uStack_640 = uStack_190 & 0x4fff | 0x42420000;
          uStack_63c = (undefined4)*puStack_148;
          uStack_650 = CONCAT44(uStack_1dc,uStack_1e0);
          uStack_644 = uStack_1e4;
          if (iStack_1ec == 1) {
            uStack_644 = 1;
          }
          uStack_660 = 0;
          uStack_658 = 0;
          uStack_648 = uStack_1e8;
          uStack_668 = uStack_1f0 & 0x4fff | 0x42420000;
          puVar14 = (uint *)0x0;
          if (iStack_5f4 * (int)uStack_368 != 0) {
            puVar14 = &uStack_618;
          }
          uStack_664 = (undefined4)*puStack_1a8;
          FUN_109b8c958(&uStack_530,&uStack_3d0,&uStack_590,puVar14,&uStack_640,&uStack_668,param_7)
          ;
LAB_109ba5290:
          puVar14 = (uint *)0x1;
LAB_109ba5294:
          if (lStack_338 != 0) {
            piVar1 = (int *)(lStack_338 + 0x14);
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
              func_0x000109a848d4(&uStack_370);
            }
          }
          lStack_338 = 0;
          uStack_358 = 0;
          uStack_360 = 0;
          uStack_348 = 0;
          uStack_350 = 0;
          if (0 < uStack_370._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_330 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_370._4_4_);
          }
          if (puStack_328 != &uStack_320 && puStack_328 != (undefined8 *)0x0) {
            _free(puStack_328[-1]);
          }
          if (lStack_2d8 != 0) {
            piVar1 = (int *)(lStack_2d8 + 0x14);
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
              func_0x000109a848d4(&uStack_310);
            }
          }
          lStack_2d8 = 0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          uStack_2e8 = 0;
          uStack_2f0 = 0;
          if (0 < uStack_310._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)(uStack_2d0 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_310._4_4_);
          }
          if (puStack_2c8 != &uStack_2c0 && puStack_2c8 != (undefined8 *)0x0) {
            _free(puStack_2c8[-1]);
          }
          if (uStack_278 != 0) {
            piVar1 = (int *)(uStack_278 + 0x14);
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
              func_0x000109a848d4(&uStack_2b0);
            }
          }
          uStack_278 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_288 = 0;
          uStack_290 = 0;
          if (0 < uStack_2b0._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)(uStack_270 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_2b0._4_4_);
          }
          if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
            _free(puStack_268[-1]);
          }
          if (uStack_218 != 0) {
            piVar1 = (int *)(uStack_218 + 0x14);
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
              func_0x000109a848d4(&uStack_250);
            }
          }
          uStack_218 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          uStack_228 = 0;
          uStack_230 = 0;
          if (0 < uStack_250._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)(uStack_210 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_250._4_4_);
          }
          if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
            _free(puStack_208[-1]);
          }
          if (lStack_1b8 != 0) {
            piVar1 = (int *)(lStack_1b8 + 0x14);
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
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_1b0 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < iStack_1ec);
          }
          if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
            _free(puStack_1a8[-1]);
          }
          if (lStack_158 != 0) {
            piVar1 = (int *)(lStack_158 + 0x14);
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
              func_0x000109a848d4(&uStack_190);
            }
          }
          lStack_158 = 0;
          uStack_178 = 0;
          uStack_174 = 0;
          uStack_180 = 0;
          uStack_17c = 0;
          uStack_168 = 0;
          uStack_164 = 0;
          uStack_170 = 0;
          uStack_16c = 0;
          if (0 < iStack_18c) {
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_150 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < iStack_18c);
          }
          if (puStack_148 != &uStack_140 && puStack_148 != (undefined8 *)0x0) {
            _free(puStack_148[-1]);
          }
          if (uStack_f8 != 0) {
            piVar1 = (int *)(uStack_f8 + 0x14);
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
              func_0x000109a848d4(&uStack_130);
            }
          }
          uStack_f8 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          if (0 < uStack_130._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)(uStack_f0 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_130._4_4_);
          }
          if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
            _free(puStack_e8[-1]);
          }
          if (uStack_98 != 0) {
            piVar1 = (int *)(uStack_98 + 0x14);
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
              func_0x000109a848d4(&uStack_d0);
            }
          }
          uStack_98 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          if (0 < uStack_d0._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)(uStack_90 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_d0._4_4_);
          }
          if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
            _free(puStack_88[-1]);
          }
          return puVar14;
        }
        if (param_8 == 1) goto LAB_109ba4eb8;
        if (param_8 == 2) {
          if (iVar3 != 4) {
            puVar9 = (undefined4 *)0x14;
            func_0x000107c2ae8c();
            *puVar9 = 1;
            uStack_530 = (undefined8 *)(puVar9 + 1);
            *uStack_530 = 0x2073746e696f706e;
            uStack_528._0_4_ = 0xc;
            uStack_528._4_4_ = 0;
            *(undefined1 *)(puVar9 + 4) = 0;
            puVar9[3] = 0x34203d3d;
            FUN_109ac3188(0xffffff29,&uStack_530,&UNK_10f5a2eca,&UNK_10f5a2ed3,0x67);
            goto LAB_109ba5a5c;
          }
          uStack_530._0_4_ = 0x42ff0000;
          uStack_588 = (uint *)&uStack_530;
          uStack_528._4_4_ = 0;
          uStack_520 = 0;
          uStack_530._4_4_ = 0;
          uStack_528._0_4_ = 0;
          puStack_4f0 = &uStack_528;
          uStack_514 = 0;
          uStack_510 = 0;
          uStack_51c = 0;
          uStack_518 = 0;
          uStack_504 = 0;
          uStack_50c = 0;
          uStack_508 = 0;
          lStack_4f8 = 0;
          uStack_500 = 0;
          uStack_4fc = 0;
          uStack_4e0 = 0;
          uStack_4d8 = 0;
          uStack_3c0 = 0;
          uStack_3bc = 0;
          uStack_3d0 = 0x1010000;
          uStack_3c8 = &uStack_130;
          uStack_590 = 0x2010000;
          uStack_580 = 0;
          uStack_57c = 0;
          uStack_608 = 0;
          uStack_618 = 0x1010000;
          puStack_610 = (uint *)&uStack_310;
          uStack_630 = 0;
          uStack_640 = 0x1010000;
          puStack_638 = (uint *)&uStack_370;
          puStack_4e8 = &uStack_4e0;
          FUN_109a91d90();
          puVar15 = puVar13;
          FUN_109a91d90();
          FUN_109b5d5b8(&uStack_3d0,&uStack_590,&uStack_618,&uStack_640,puVar13,puVar15);
          uStack_5e8 = uStack_308;
          uStack_5f0 = uStack_310;
          uStack_5d8 = uStack_2f8;
          uStack_5e0 = uStack_300;
          uStack_5c8 = uStack_2e8;
          uStack_5d0 = uStack_2f0;
          uStack_5b0 = (ulong)&uStack_5f0 | 8;
          lStack_5b8 = lStack_2d8;
          uStack_5c0 = uStack_2e0;
          uStack_5a0 = 0;
          uStack_598 = 0;
          if (lStack_2d8 != 0) {
            piVar1 = (int *)(lStack_2d8 + 0x14);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puStack_5a8 = &uStack_5a0;
          if (uStack_310._4_4_ < 3) {
            uStack_5a0 = *puStack_2c8;
            uStack_598 = puStack_2c8[1];
          }
          else {
            uStack_5f0 = uStack_310 & 0xffffffff;
            func_0x000109a84868(&uStack_5f0,&uStack_310);
          }
          FUN_109b9ceac(&uStack_590,&uStack_5f0);
          if (lStack_5b8 != 0) {
            piVar1 = (int *)(lStack_5b8 + 0x14);
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
              func_0x000109a848d4(&uStack_5f0);
            }
          }
          lStack_5b8 = 0;
          uStack_5d8 = 0;
          uStack_5e0 = 0;
          uStack_5c8 = 0;
          uStack_5d0 = 0;
          if (0 < uStack_5f0._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)(uStack_5b0 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_5f0._4_4_);
          }
          if (puStack_5a8 != &uStack_5a0 && puStack_5a8 != (undefined8 *)0x0) {
            _free(puStack_5a8[-1]);
          }
          uStack_3d0 = 0x42ff0000;
          uStack_3c8._4_4_ = 0;
          uStack_3c0 = 0;
          iStack_3cc = 0;
          uStack_3c8._0_4_ = 0;
          puStack_390 = &uStack_3c8;
          uStack_3b4 = 0;
          uStack_3b0 = 0;
          uStack_3bc = 0;
          uStack_3b8 = 0;
          uStack_3a4 = 0;
          uStack_3ac = 0;
          uStack_3a8 = 0;
          lStack_398 = 0;
          uStack_3a0 = 0;
          uStack_39c = 0;
          uStack_378 = 0;
          uStack_380 = 0;
          puVar14 = &uStack_590;
          puStack_388 = &uStack_380;
          FUN_109b9cf3c(puVar14,&uStack_3d0,&uStack_1f0,&uStack_d0,&uStack_530);
          if ((int)puVar14 != 0) {
            uStack_618 = 0x1010000;
            puStack_610 = &uStack_3d0;
            uStack_608 = 0;
            uStack_640 = 0x2010000;
            puStack_638 = &uStack_190;
            uStack_630 = 0;
            puVar8 = puVar14;
            FUN_109a91d90();
            FUN_109b8d8fc(&uStack_618,&uStack_640,puVar8);
          }
          if (lStack_398 != 0) {
            piVar1 = (int *)(lStack_398 + 0x14);
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
              func_0x000109a848d4(&uStack_3d0);
            }
          }
          lStack_398 = 0;
          uStack_3b8 = 0;
          uStack_3b4 = 0;
          uStack_3c0 = 0;
          uStack_3bc = 0;
          uStack_3a8 = 0;
          uStack_3a4 = 0;
          uStack_3b0 = 0;
          uStack_3ac = 0;
          if (0 < iStack_3cc) {
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_390 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < iStack_3cc);
          }
          if (puStack_388 != &uStack_380 && puStack_388 != (undefined8 *)0x0) {
            _free(puStack_388[-1]);
          }
          if (lStack_4f8 != 0) {
            piVar1 = (int *)(lStack_4f8 + 0x14);
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
              func_0x000109a848d4(&uStack_530);
            }
          }
          lStack_4f8 = 0;
          uStack_518 = 0;
          uStack_514 = 0;
          uStack_520 = 0;
          uStack_51c = 0;
          uStack_508 = 0;
          uStack_504 = 0;
          uStack_510 = 0;
          uStack_50c = 0;
          if (0 < uStack_530._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_4f0 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_530._4_4_);
          }
          uStack_528 = (undefined8 *)CONCAT44(uStack_528._4_4_,(undefined4)uStack_528);
          if (puStack_4e8 != &uStack_4e0 && puStack_4e8 != (undefined8 *)0x0) {
            _free(puStack_4e8[-1]);
          }
          goto LAB_109ba5294;
        }
      }
      else if (param_8 - 3U < 2) {
LAB_109ba4eb8:
        uStack_3d0 = 0x42ff0000;
        uStack_588 = &uStack_3d0;
        uStack_3c8._4_4_ = 0;
        uStack_3c0 = 0;
        iStack_3cc = 0;
        uStack_3c8._0_4_ = 0;
        puStack_390 = &uStack_3c8;
        uStack_3b4 = 0;
        uStack_3b0 = 0;
        uStack_3bc = 0;
        uStack_3b8 = 0;
        uStack_3a4 = 0;
        uStack_3ac = 0;
        uStack_3a8 = 0;
        lStack_398 = 0;
        uStack_3a0 = 0;
        uStack_39c = 0;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_520 = 0;
        uStack_51c = 0;
        uStack_530._0_4_ = 0x1010000;
        uStack_528 = &uStack_130;
        uStack_590 = 0x2010000;
        uStack_580 = 0;
        uStack_57c = 0;
        uStack_608 = 0;
        uStack_618 = 0x1010000;
        puStack_610 = (uint *)&uStack_310;
        uStack_630 = 0;
        uStack_640 = 0x1010000;
        puStack_638 = (uint *)&uStack_370;
        puStack_388 = &uStack_380;
        FUN_109a91d90();
        puVar15 = puVar13;
        FUN_109a91d90();
        FUN_109b5d5b8(&uStack_530,&uStack_590,&uStack_618,&uStack_640,puVar13,puVar15);
        FUN_109b91454(&uStack_530,&uStack_310,&uStack_d0,&uStack_3d0);
        uStack_590 = 0x42ff0000;
        uStack_588._4_4_ = 0;
        uStack_580 = 0;
        iStack_58c = 0;
        uStack_588._0_4_ = 0;
        puStack_550 = &uStack_588;
        uStack_574 = 0;
        uStack_570 = 0;
        uStack_57c = 0;
        uStack_578 = 0;
        uStack_564 = 0;
        uStack_56c = 0;
        uStack_568 = 0;
        lStack_558 = 0;
        uStack_560 = 0;
        uStack_55c = 0;
        uStack_540 = 0;
        uStack_538 = 0;
        puVar13 = &uStack_530;
        puStack_548 = &uStack_540;
        FUN_109b91ecc(puVar13,&uStack_590,&uStack_1f0);
        uStack_608 = 0;
        uStack_618 = 0x1010000;
        uStack_640 = 0x2010000;
        puStack_638 = &uStack_190;
        uStack_630 = 0;
        puStack_610 = &uStack_590;
        FUN_109a91d90();
        FUN_109b8d8fc(&uStack_618,&uStack_640,puVar13);
        puVar13 = uStack_528;
        if (lStack_558 != 0) {
          piVar1 = (int *)(lStack_558 + 0x14);
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
            func_0x000109a848d4(&uStack_590);
            puVar13 = uStack_528;
          }
        }
        lStack_558 = 0;
        uStack_578 = 0;
        uStack_574 = 0;
        uStack_580 = 0;
        uStack_57c = 0;
        uStack_568 = 0;
        uStack_564 = 0;
        uStack_570 = 0;
        uStack_56c = 0;
        if (0 < iStack_58c) {
          lVar12 = 0;
          do {
            *(undefined4 *)((long)puStack_550 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < iStack_58c);
        }
        uStack_528 = puVar13;
        if (puStack_548 != &uStack_540 && puStack_548 != (undefined8 *)0x0) {
          _free(puStack_548[-1]);
        }
        FUN_109b91e54(&uStack_530);
        if (lStack_398 != 0) {
          piVar1 = (int *)(lStack_398 + 0x14);
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
            func_0x000109a848d4(&uStack_3d0);
          }
        }
        lStack_398 = 0;
        uStack_3b8 = 0;
        uStack_3b4 = 0;
        uStack_3c0 = 0;
        uStack_3bc = 0;
        uStack_3a8 = 0;
        uStack_3a4 = 0;
        uStack_3b0 = 0;
        uStack_3ac = 0;
        if (0 < iStack_3cc) {
          lVar12 = 0;
          do {
            *(undefined4 *)((long)puStack_390 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < iStack_3cc);
        }
        if (puStack_388 != &uStack_380 && puStack_388 != (undefined8 *)0x0) {
          _free(puStack_388[-1]);
        }
        goto LAB_109ba5290;
      }
      puVar9 = (undefined4 *)0x68;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      uStack_530 = (undefined8 *)(puVar9 + 1);
      uStack_528._0_4_ = 0x61;
      uStack_528._4_4_ = 0;
      *(undefined8 *)(puVar9 + 0xb) = 0x41524554495f504e;
      *(undefined8 *)(puVar9 + 9) = 0x5045564c4f532066;
      *(undefined8 *)(puVar9 + 0xf) = 0x505f504e5045564c;
      *(undefined8 *)(puVar9 + 0xd) = 0x4f53202c45564954;
      *(undefined8 *)(puVar9 + 0x13) = 0x4e50455f504e5045;
      *(undefined8 *)(puVar9 + 0x11) = 0x564c4f53202c5033;
      *(undefined8 *)(puVar9 + 0x17) = 0x4c445f504e504556;
      *(undefined8 *)(puVar9 + 0x15) = 0x4c4f5320726f2050;
      *(undefined8 *)(puVar9 + 3) = 0x656d756772612073;
      *(undefined8 *)(puVar9 + 1) = 0x67616c6620656854;
      *(undefined2 *)(puVar9 + 0x19) = 0x53;
      *(undefined8 *)(puVar9 + 7) = 0x6f20656e6f206562;
      *(undefined8 *)(puVar9 + 5) = 0x207473756d20746e;
      FUN_109ac3188(0xfffffffb,&uStack_530,&UNK_10f5a2eca,&UNK_10f5a2ed3,0x92);
      goto LAB_109ba5a5c;
    }
  }
  puVar9 = (undefined4 *)0x68;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  uStack_530 = (undefined8 *)(puVar9 + 1);
  uStack_528._0_4_ = 99;
  uStack_528._4_4_ = 0;
  *(undefined4 *)((long)puVar9 + 99) = 0x29294634;
  *(undefined8 *)(puVar9 + 0xb) = 0x636568632e73746e;
  *(undefined8 *)(puVar9 + 9) = 0x696f70692878616d;
  *(undefined8 *)(puVar9 + 0xf) = 0x32335f5643202c32;
  *(undefined8 *)(puVar9 + 0xd) = 0x28726f746365566b;
  *(undefined8 *)(puVar9 + 0x13) = 0x636568632e73746e;
  *(undefined8 *)(puVar9 + 0x11) = 0x696f7069202c2946;
  *(undefined8 *)(puVar9 + 0x17) = 0x34365f5643202c32;
  *(undefined8 *)(puVar9 + 0x15) = 0x28726f746365566b;
  *(undefined8 *)(puVar9 + 3) = 0x2026262030203d3e;
  *(undefined8 *)(puVar9 + 1) = 0x2073746e696f706e;
  *(undefined1 *)((long)puVar9 + 0x67) = 0;
  *(undefined8 *)(puVar9 + 7) = 0x3a3a647473203d3d;
  *(undefined8 *)(puVar9 + 5) = 0x2073746e696f706e;
  FUN_109ac3188(0xffffff29,&uStack_530,&UNK_10f5a2eca,&UNK_10f5a2ed3,0x3d);
LAB_109ba5a5c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109ba5a60);
  (*pcVar7)();
}



/* Entry: 109ba5c60; end: 109ba8013;  */

/* WARNING: Removing unreachable block (ram,0x000109ba5ea8) */
/* WARNING: Removing unreachable block (ram,0x000109ba5eac) */
/* WARNING: Removing unreachable block (ram,0x000109ba5eb4) */
/* WARNING: Removing unreachable block (ram,0x000109ba5ebc) */
/* WARNING: Removing unreachable block (ram,0x000109ba5ec0) */
/* WARNING: Removing unreachable block (ram,0x000109ba5ee0) */
/* WARNING: Removing unreachable block (ram,0x000109ba5ee8) */
/* WARNING: Removing unreachable block (ram,0x000109ba5efc) */
/* WARNING: Removing unreachable block (ram,0x000109ba5f0c) */

undefined8
FUN_109ba5c60(float param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5,
             uint *param_6,uint *param_7,uint *param_8,int param_9,undefined4 param_10,long param_11
             ,int param_12)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  code *pcVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  undefined8 *puVar21;
  long *plVar22;
  ulong uVar23;
  uint *puVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  uint uVar28;
  ulong uVar29;
  long *plVar30;
  long lVar31;
  undefined4 auStack_5c0 [2];
  uint *puStack_5b8;
  undefined8 uStack_5b0;
  undefined4 auStack_5a8 [2];
  undefined4 *puStack_5a0;
  undefined8 uStack_598;
  undefined4 auStack_590 [2];
  undefined8 *puStack_588;
  undefined8 uStack_580;
  undefined4 auStack_578 [2];
  long *plStack_570;
  undefined8 uStack_568;
  undefined4 auStack_560 [2];
  undefined8 *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 *puStack_540;
  undefined8 uStack_538;
  long *plStack_530;
  undefined8 *puStack_528;
  undefined8 uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  long *plStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  undefined8 uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  uint uStack_460;
  int iStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  long lStack_428;
  ulong uStack_420;
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined4 uStack_400;
  int iStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  long lStack_3c8;
  ulong uStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  uint uStack_3a0;
  int iStack_39c;
  int iStack_398;
  int iStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  ulong uStack_368;
  int *piStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  uint uStack_340;
  int iStack_33c;
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
  ulong uStack_308;
  int *piStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  uint *puStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  int iStack_158;
  int iStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  ulong uStack_128;
  int *piStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulong uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar12 = *(ulong **)(param_3 + 2);
    uStack_240 = (ulong)&uStack_280 | 8;
    uStack_278 = puVar12[1];
    uStack_280 = *puVar12;
    uStack_268 = puVar12[3];
    uStack_270 = puVar12[2];
    uStack_258 = puVar12[5];
    uStack_260 = puVar12[4];
    uStack_248 = puVar12[7];
    uStack_250 = puVar12[6];
    puStack_238 = &uStack_230;
    uStack_228 = 0;
    uStack_230 = 0;
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
      uStack_230 = *(undefined8 *)puVar12[9];
      uStack_228 = ((undefined8 *)puVar12[9])[1];
    }
    else {
      uStack_280 = uStack_280 & 0xffffffff;
      func_0x000109a84868(&uStack_280);
    }
  }
  else {
    FUN_109a8a180(&uStack_280,param_3,0xffffffff);
  }
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar12 = *(ulong **)(param_4 + 2);
    uStack_2a0 = (ulong)&uStack_2e0 | 8;
    uStack_2d8 = puVar12[1];
    uStack_2e0 = *puVar12;
    uStack_2c8 = puVar12[3];
    uStack_2d0 = puVar12[2];
    uStack_2b8 = puVar12[5];
    uStack_2c0 = puVar12[4];
    uStack_2a8 = puVar12[7];
    uStack_2b0 = puVar12[6];
    puStack_298 = &uStack_290;
    uStack_288 = 0;
    uStack_290 = 0;
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
      uStack_290 = *(undefined8 *)puVar12[9];
      uStack_288 = ((undefined8 *)puVar12[9])[1];
    }
    else {
      uStack_2e0 = uStack_2e0 & 0xffffffff;
      func_0x000109a84868(&uStack_2e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_2e0,param_4,0xffffffff);
  }
  uStack_340 = 0x42ff0000;
  iStack_334 = 0;
  uStack_330 = 0;
  iStack_33c = 0;
  iStack_338 = 0;
  uStack_324 = 0;
  uStack_320 = 0;
  uStack_32c = 0;
  uStack_328 = 0;
  piStack_300 = &iStack_338;
  uStack_314 = 0;
  uStack_31c = 0;
  uStack_318 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_3a0 = 0x42ff0000;
  piStack_360 = &iStack_398;
  iStack_394 = 0;
  uStack_390 = 0;
  iStack_39c = 0;
  iStack_398 = 0;
  uStack_384 = 0;
  uStack_380 = 0;
  uStack_38c = 0;
  uStack_388 = 0;
  uStack_374 = 0;
  uStack_37c = 0;
  uStack_378 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_36c = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  puStack_358 = &uStack_350;
  puStack_2f8 = &uStack_2f0;
  if ((((uint)uStack_280 & 7) == 6) || (((uint)uStack_280 >> 0xe & 1) == 0)) {
    uStack_100._0_4_ = 0x2010000;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_f8 = &uStack_340;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_280,&uStack_100,5);
  }
  else {
    if (uStack_248 != 0) {
      piVar1 = (int *)(uStack_248 + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_308 = 0;
    uStack_328 = 0;
    uStack_324 = 0;
    uStack_330 = 0;
    uStack_32c = 0;
    uStack_318 = 0;
    uStack_314 = 0;
    uStack_320 = 0;
    uStack_31c = 0;
    uStack_340 = (uint)uStack_280;
    if (uStack_280._4_4_ < 3) {
      iStack_33c = uStack_280._4_4_;
      iStack_338 = (int)uStack_278;
      iStack_334 = (int)(uStack_278 >> 0x20);
      uStack_2f0 = *puStack_238;
      uStack_2e8 = puStack_238[1];
    }
    else {
      func_0x000109a84868(&uStack_340,&uStack_280);
    }
    uStack_328 = (undefined4)uStack_268;
    uStack_324 = (undefined4)(uStack_268 >> 0x20);
    uStack_330 = (undefined4)uStack_270;
    uStack_32c = (undefined4)(uStack_270 >> 0x20);
    uStack_318 = (undefined4)uStack_258;
    uStack_314 = (undefined4)(uStack_258 >> 0x20);
    uStack_320 = (undefined4)uStack_260;
    uStack_31c = (undefined4)(uStack_260 >> 0x20);
    uStack_310 = (undefined4)uStack_250;
    uStack_30c = (undefined4)(uStack_250 >> 0x20);
    uStack_308 = uStack_248;
  }
  if ((((uint)uStack_2e0 & 7) == 6) || (((uint)uStack_2e0 >> 0xe & 1) == 0)) {
    uStack_100._0_4_ = 0x2010000;
    uStack_f8 = &uStack_3a0;
    uStack_f0 = 0;
    uStack_ec = 0;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_2e0,&uStack_100,5);
  }
  else {
    if (uStack_2a8 != 0) {
      piVar1 = (int *)(uStack_2a8 + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (uStack_368 != 0) {
      piVar1 = (int *)(uStack_368 + 0x14);
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
        func_0x000109a848d4(&uStack_3a0);
      }
    }
    puVar13 = puStack_298;
    uStack_368 = 0;
    uStack_388 = 0;
    uStack_384 = 0;
    uStack_390 = 0;
    uStack_38c = 0;
    uStack_378 = 0;
    uStack_374 = 0;
    uStack_380 = 0;
    uStack_37c = 0;
    if (iStack_39c < 1) {
LAB_109ba6070:
      uStack_3a0 = (uint)uStack_2e0;
      if (2 < uStack_2e0._4_4_) goto LAB_109ba60a4;
      iStack_39c = uStack_2e0._4_4_;
      iStack_398 = (int)uStack_2d8;
      iStack_394 = (int)(uStack_2d8 >> 0x20);
      *puStack_358 = *puStack_298;
      puStack_358[1] = puVar13[1];
    }
    else {
      lVar17 = 0;
      do {
        piStack_360[lVar17] = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iStack_39c);
      if (iStack_39c < 3) goto LAB_109ba6070;
LAB_109ba60a4:
      uStack_3a0 = (uint)uStack_2e0;
      func_0x000109a84868(&uStack_3a0,&uStack_2e0);
    }
    uStack_388 = (undefined4)uStack_2c8;
    uStack_384 = (undefined4)(uStack_2c8 >> 0x20);
    uStack_390 = (undefined4)uStack_2d0;
    uStack_38c = (undefined4)(uStack_2d0 >> 0x20);
    uStack_378 = (undefined4)uStack_2b8;
    uStack_374 = (undefined4)(uStack_2b8 >> 0x20);
    uStack_380 = (undefined4)uStack_2c0;
    uStack_37c = (undefined4)(uStack_2c0 >> 0x20);
    uStack_368 = uStack_2a8;
    uStack_370 = (undefined4)uStack_2b0;
    uStack_36c = (undefined4)(uStack_2b0 >> 0x20);
  }
  puVar8 = &uStack_340;
  FUN_109a89cd4(puVar8,3,5,1);
  puVar9 = &uStack_340;
  FUN_109a89cd4(puVar9,3,6,1);
  uVar3 = (uint)puVar8;
  if ((int)(uint)puVar8 <= (int)(uint)puVar9) {
    uVar3 = (uint)puVar9;
  }
  if (-1 < (int)uVar3) {
    puVar8 = &uStack_3a0;
    FUN_109a89cd4(puVar8,2,5,1);
    puVar9 = &uStack_3a0;
    FUN_109a89cd4(puVar9,2,6,1);
    uVar28 = (uint)puVar8;
    if ((int)(uint)puVar8 <= (int)(uint)puVar9) {
      uVar28 = (uint)puVar9;
    }
    if (uVar3 == uVar28) {
      if ((uStack_340 >> 0xe & 1) == 0) {
        puVar11 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_100 = puVar11 + 1;
        uStack_f8._0_4_ = 0x16;
        uStack_f8._4_4_ = 0;
        *(undefined1 *)((long)puVar11 + 0x1a) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x6e69746e6f437369;
        *(undefined8 *)(puVar11 + 1) = 0x2e73746e696f706f;
        *(undefined8 *)((long)puVar11 + 0x12) = 0x292873756f756e69;
        FUN_109ac3188(0xffffff29,&uStack_100,&UNK_10f5a306f,&UNK_10f5a2ed3,0xe8);
        goto LAB_109ba7d14;
      }
      if (1 < (uStack_340 & 7) - 5) {
        puVar11 = (undefined4 *)0x3c;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_100 = puVar11 + 1;
        uStack_f8._0_4_ = 0x36;
        uStack_f8._4_4_ = 0;
        *(undefined8 *)(puVar11 + 3) = 0x2029286874706564;
        *(undefined8 *)(puVar11 + 1) = 0x2e73746e696f706f;
        *(undefined1 *)((long)puVar11 + 0x3a) = 0;
        *(undefined8 *)(puVar11 + 7) = 0x6f706f207c7c2046;
        *(undefined8 *)(puVar11 + 5) = 0x32335f5643203d3d;
        *(undefined8 *)(puVar11 + 0xb) = 0x203d3d2029286874;
        *(undefined8 *)(puVar11 + 9) = 0x7065642e73746e69;
        *(undefined8 *)((long)puVar11 + 0x32) = 0x4634365f5643203d;
        FUN_109ac3188(0xffffff29,&uStack_100,&UNK_10f5a306f,&UNK_10f5a2ed3,0xe9);
        goto LAB_109ba7d14;
      }
      if ((((uStack_340 & 0xff8) == 0x10) && (iStack_338 == 1)) ||
         (iStack_334 + iStack_334 * (uStack_340 >> 3 & 0x1ff) == 3)) {
        if ((uStack_3a0 >> 0xe & 1) == 0) {
          puVar11 = (undefined4 *)0x1c;
          func_0x000107c2ae8c();
          *puVar11 = 1;
          uStack_100 = puVar11 + 1;
          uStack_f8._0_4_ = 0x16;
          uStack_f8._4_4_ = 0;
          *(undefined1 *)((long)puVar11 + 0x1a) = 0;
          *(undefined8 *)(puVar11 + 3) = 0x6e69746e6f437369;
          *(undefined8 *)(puVar11 + 1) = 0x2e73746e696f7069;
          *(undefined8 *)((long)puVar11 + 0x12) = 0x292873756f756e69;
          FUN_109ac3188(0xffffff29,&uStack_100,&UNK_10f5a306f,&UNK_10f5a2ed3,0xeb);
          goto LAB_109ba7d14;
        }
        if (1 < (uStack_3a0 & 7) - 5) {
          puVar11 = (undefined4 *)0x3c;
          func_0x000107c2ae8c();
          *puVar11 = 1;
          uStack_100 = puVar11 + 1;
          uStack_f8._0_4_ = 0x36;
          uStack_f8._4_4_ = 0;
          *(undefined8 *)(puVar11 + 3) = 0x2029286874706564;
          *(undefined8 *)(puVar11 + 1) = 0x2e73746e696f7069;
          *(undefined1 *)((long)puVar11 + 0x3a) = 0;
          *(undefined8 *)(puVar11 + 7) = 0x6f7069207c7c2046;
          *(undefined8 *)(puVar11 + 5) = 0x32335f5643203d3d;
          *(undefined8 *)(puVar11 + 0xb) = 0x203d3d2029286874;
          *(undefined8 *)(puVar11 + 9) = 0x7065642e73746e69;
          *(undefined8 *)((long)puVar11 + 0x32) = 0x4634365f5643203d;
          FUN_109ac3188(0xffffff29,&uStack_100,&UNK_10f5a306f,&UNK_10f5a2ed3,0xec);
          goto LAB_109ba7d14;
        }
        if ((((uStack_3a0 & 0xff8) != 8) || (iStack_398 != 1)) &&
           (iStack_394 + iStack_394 * (uStack_3a0 >> 3 & 0x1ff) != 2)) {
          puVar11 = (undefined4 *)0x5c;
          func_0x000107c2ae8c();
          *puVar11 = 1;
          uStack_100 = puVar11 + 1;
          uStack_f8._0_4_ = 0x56;
          uStack_f8._4_4_ = 0;
          *(undefined8 *)(puVar11 + 0xb) = 0x7c202932203d3d20;
          *(undefined8 *)(puVar11 + 9) = 0x2928736c656e6e61;
          *(undefined8 *)(puVar11 + 0xf) = 0x692a736c6f632e73;
          *(undefined8 *)(puVar11 + 0xd) = 0x746e696f7069207c;
          *(undefined8 *)(puVar11 + 0x13) = 0x28736c656e6e6168;
          *(undefined8 *)(puVar11 + 0x11) = 0x632e73746e696f70;
          *(undefined8 *)(puVar11 + 3) = 0x3d3d2073776f722e;
          *(undefined8 *)(puVar11 + 1) = 0x73746e696f706928;
          *(undefined1 *)((long)puVar11 + 0x5a) = 0;
          *(undefined8 *)((long)puVar11 + 0x52) = 0x32203d3d20292873;
          *(undefined8 *)(puVar11 + 7) = 0x68632e73746e696f;
          *(undefined8 *)(puVar11 + 5) = 0x7069202626203120;
          FUN_109ac3188(0xffffff29,&uStack_100,&UNK_10f5a306f,&UNK_10f5a2ed3,0xed);
          goto LAB_109ba7d14;
        }
        FUN_109a8f64c(param_7,3,1,6,0xffffffff,0,0);
        FUN_109a8f64c(param_8,3,1,6,0xffffffff,0,0);
        if (param_9 == 0) {
          uStack_400 = 0x42ff0000;
          uStack_3c0 = (ulong)&uStack_400 | 8;
          uStack_3f4 = 0;
          uStack_3f0 = 0;
          iStack_3fc = 0;
          uStack_3f8 = 0;
          uStack_3e4 = 0;
          uStack_3e0 = 0;
          uStack_3ec = 0;
          uStack_3e8 = 0;
          uStack_3d4 = 0;
          uStack_3dc = 0;
          uStack_3d8 = 0;
          lStack_3c8 = 0;
          uStack_3d0 = 0;
          uStack_3cc = 0;
          puStack_3b8 = &uStack_3b0;
          uStack_3a8 = 0;
          uStack_3b0 = 0;
          uStack_100._0_4_ = 3;
          uStack_100._4_4_ = 1;
          FUN_109a83fd0(&uStack_400,2,&uStack_100,6);
          uStack_460 = 0x42ff0000;
          uStack_420 = (ulong)&uStack_460 | 8;
          uStack_454 = 0;
          uStack_450 = 0;
          iStack_45c = 0;
          uStack_458 = 0;
          uStack_444 = 0;
          uStack_440 = 0;
          uStack_44c = 0;
          uStack_448 = 0;
          uStack_434 = 0;
          uStack_43c = 0;
          uStack_438 = 0;
          lStack_428 = 0;
          uStack_430 = 0;
          uStack_42c = 0;
          puStack_418 = &uStack_410;
          uStack_408 = 0;
          uStack_410 = 0;
          uStack_100._0_4_ = 3;
          uStack_100._4_4_ = 1;
          FUN_109a83fd0(&uStack_460,2,&uStack_100,6);
        }
        else {
          if ((*param_7 & 0x1f0000) == 0x10000) {
            puVar13 = *(undefined8 **)(param_7 + 2);
            uStack_3c0 = (ulong)&uStack_400 | 8;
            uStack_3f8 = (undefined4)puVar13[1];
            uStack_3f4 = (undefined4)((ulong)puVar13[1] >> 0x20);
            uStack_400 = (undefined4)*puVar13;
            iStack_3fc = (int)((ulong)*puVar13 >> 0x20);
            uStack_3e8 = (undefined4)puVar13[3];
            uStack_3e4 = (undefined4)((ulong)puVar13[3] >> 0x20);
            uStack_3f0 = (undefined4)puVar13[2];
            uStack_3ec = (undefined4)((ulong)puVar13[2] >> 0x20);
            lStack_3c8 = puVar13[7];
            uStack_3d8 = (undefined4)puVar13[5];
            uStack_3d4 = (undefined4)((ulong)puVar13[5] >> 0x20);
            uStack_3e0 = (undefined4)puVar13[4];
            uStack_3dc = (undefined4)((ulong)puVar13[4] >> 0x20);
            uStack_3d0 = (undefined4)puVar13[6];
            uStack_3cc = (undefined4)((ulong)puVar13[6] >> 0x20);
            puStack_3b8 = &uStack_3b0;
            uStack_3a8 = 0;
            uStack_3b0 = 0;
            if (puVar13[7] != 0) {
              piVar1 = (int *)(puVar13[7] + 0x14);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            if (*(int *)((long)puVar13 + 4) < 3) {
              uStack_3b0 = *(undefined8 *)puVar13[9];
              uStack_3a8 = ((undefined8 *)puVar13[9])[1];
            }
            else {
              iStack_3fc = 0;
              func_0x000109a84868(&uStack_400);
            }
          }
          else {
            FUN_109a8a180(&uStack_400,param_7,0xffffffff);
          }
          if ((*param_8 & 0x1f0000) == 0x10000) {
            puVar13 = *(undefined8 **)(param_8 + 2);
            uStack_420 = (ulong)&uStack_460 | 8;
            uStack_458 = (undefined4)puVar13[1];
            uStack_454 = (undefined4)((ulong)puVar13[1] >> 0x20);
            uStack_460 = (uint)*puVar13;
            iStack_45c = (int)((ulong)*puVar13 >> 0x20);
            uStack_448 = (undefined4)puVar13[3];
            uStack_444 = (undefined4)((ulong)puVar13[3] >> 0x20);
            uStack_450 = (undefined4)puVar13[2];
            uStack_44c = (undefined4)((ulong)puVar13[2] >> 0x20);
            lStack_428 = puVar13[7];
            uStack_438 = (undefined4)puVar13[5];
            uStack_434 = (undefined4)((ulong)puVar13[5] >> 0x20);
            uStack_440 = (undefined4)puVar13[4];
            uStack_43c = (undefined4)((ulong)puVar13[4] >> 0x20);
            uStack_430 = (undefined4)puVar13[6];
            uStack_42c = (undefined4)((ulong)puVar13[6] >> 0x20);
            puStack_418 = &uStack_410;
            uStack_408 = 0;
            uStack_410 = 0;
            if (puVar13[7] != 0) {
              piVar1 = (int *)(puVar13[7] + 0x14);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            if (*(int *)((long)puVar13 + 4) < 3) {
              uStack_410 = *(undefined8 *)puVar13[9];
              uStack_408 = ((undefined8 *)puVar13[9])[1];
            }
            else {
              iStack_45c = 0;
              func_0x000109a84868(&uStack_460);
            }
          }
          else {
            FUN_109a8a180(&uStack_460,param_8,0xffffffff);
          }
        }
        if ((*param_5 & 0x1f0000) == 0x10000) {
          puVar12 = *(ulong **)(param_5 + 2);
          uStack_480 = (ulong)&uStack_4c0 | 8;
          uStack_4b8 = puVar12[1];
          uStack_4c0 = *puVar12;
          uStack_4a8 = puVar12[3];
          uStack_4b0 = puVar12[2];
          uStack_498 = puVar12[5];
          uStack_4a0 = puVar12[4];
          uStack_488 = puVar12[7];
          uStack_490 = puVar12[6];
          puStack_478 = &uStack_470;
          uStack_470 = 0;
          uStack_468 = 0;
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
            uStack_470 = *(undefined8 *)puVar12[9];
            uStack_468 = ((undefined8 *)puVar12[9])[1];
          }
          else {
            uStack_4c0 = uStack_4c0 & 0xffffffff;
            func_0x000109a84868(&uStack_4c0);
          }
        }
        else {
          FUN_109a8a180(&uStack_4c0,param_5,0xffffffff);
        }
        if ((*param_6 & 0x1f0000) == 0x10000) {
          puVar12 = *(ulong **)(param_6 + 2);
          uStack_4e0 = (ulong)&uStack_520 | 8;
          uStack_518 = puVar12[1];
          uStack_520 = *puVar12;
          uStack_508 = puVar12[3];
          uStack_510 = puVar12[2];
          uStack_4f8 = puVar12[5];
          uStack_500 = puVar12[4];
          uStack_4e8 = puVar12[7];
          uStack_4f0 = puVar12[6];
          plStack_4d8 = &lStack_4d0;
          lStack_4d0 = 0;
          lStack_4c8 = 0;
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
            lStack_4d0 = *(long *)puVar12[9];
            lStack_4c8 = ((long *)puVar12[9])[1];
          }
          else {
            uStack_520 = uStack_520 & 0xffffffff;
            func_0x000109a84868(&uStack_520);
          }
        }
        else {
          FUN_109a8a180(&uStack_520,param_6,0xffffffff);
        }
        uVar14 = 1;
        if (uVar3 == 4) {
          uVar14 = 2;
        }
        uVar15 = 4;
        if (uVar3 != 4) {
          uVar15 = 5;
        }
        plStack_530 = (long *)0x0;
        puStack_528 = (undefined8 *)0x0;
        puVar13 = (undefined8 *)0x190;
        __Znwm();
        puStack_c0 = (undefined8 *)((ulong)&uStack_100 | 8);
        uStack_f8._0_4_ = (int)uStack_4b8;
        uStack_f8._4_4_ = (undefined4)(uStack_4b8 >> 0x20);
        uStack_100._0_4_ = (undefined4)uStack_4c0;
        uStack_e8 = (undefined4)uStack_4a8;
        uStack_e4 = (undefined4)(uStack_4a8 >> 0x20);
        uStack_f0 = (undefined4)uStack_4b0;
        uStack_ec = (undefined4)(uStack_4b0 >> 0x20);
        uStack_d8 = (undefined4)uStack_498;
        uStack_d4 = (undefined4)(uStack_498 >> 0x20);
        uStack_e0 = (undefined4)uStack_4a0;
        uStack_dc = (undefined4)(uStack_4a0 >> 0x20);
        uStack_c8 = uStack_488;
        uStack_d0 = (undefined4)uStack_490;
        uStack_cc = (undefined4)(uStack_490 >> 0x20);
        uStack_b0 = 0;
        uStack_a8 = 0;
        if (uStack_488 != 0) {
          piVar1 = (int *)(uStack_488 + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puStack_b8 = &uStack_b0;
        if (uStack_4c0._4_4_ < 3) {
          uStack_b0 = *puStack_478;
          uStack_a8 = puStack_478[1];
          uStack_100._4_4_ = uStack_4c0._4_4_;
        }
        else {
          uStack_100._4_4_ = 0;
          func_0x000109a84868(&uStack_100,&uStack_4c0);
        }
        piStack_120 = (int *)((ulong)&uStack_160 | 8);
        iStack_158 = (int)uStack_518;
        iStack_154 = (int)(uStack_518 >> 0x20);
        uStack_160._0_1_ = (undefined1)uStack_520;
        uStack_160._1_1_ = (byte)(uStack_520 >> 8);
        uStack_160._2_2_ = (undefined2)(uStack_520 >> 0x10);
        uStack_148 = (undefined4)uStack_508;
        uStack_144 = (undefined4)(uStack_508 >> 0x20);
        uStack_150 = (undefined4)uStack_510;
        uStack_14c = (undefined4)(uStack_510 >> 0x20);
        uStack_138 = (undefined4)uStack_4f8;
        uStack_134 = (undefined4)(uStack_4f8 >> 0x20);
        uStack_140 = (undefined4)uStack_500;
        uStack_13c = (undefined4)(uStack_500 >> 0x20);
        uStack_128 = uStack_4e8;
        uStack_130 = (undefined4)uStack_4f0;
        uStack_12c = (undefined4)(uStack_4f0 >> 0x20);
        lStack_108 = 0;
        lStack_110 = 0;
        if (uStack_4e8 != 0) {
          piVar1 = (int *)(uStack_4e8 + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plStack_118 = &lStack_110;
        if (uStack_520._4_4_ < 3) {
          lStack_110 = *plStack_4d8;
          lStack_108 = plStack_4d8[1];
          uStack_160._4_4_ = uStack_520._4_4_;
        }
        else {
          uStack_160._4_4_ = 0;
          func_0x000109a84868(&uStack_160,&uStack_520);
        }
        puStack_180 = (undefined8 *)((ulong)&uStack_1c0 | 8);
        uStack_1b8._0_4_ = uStack_3f8;
        uStack_1b8._4_4_ = uStack_3f4;
        uStack_1c0._0_4_ = uStack_400;
        uStack_1c0._4_4_ = iStack_3fc;
        uStack_1a8 = uStack_3e8;
        uStack_1a4 = uStack_3e4;
        uStack_1b0._0_4_ = uStack_3f0;
        uStack_1b0._4_4_ = uStack_3ec;
        uStack_198 = uStack_3d8;
        uStack_194 = uStack_3d4;
        uStack_1a0 = uStack_3e0;
        uStack_19c = uStack_3dc;
        lStack_188 = lStack_3c8;
        uStack_190 = uStack_3d0;
        uStack_18c = uStack_3cc;
        uStack_168 = 0;
        uStack_170 = 0;
        if (lStack_3c8 != 0) {
          piVar1 = (int *)(lStack_3c8 + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puStack_178 = &uStack_170;
        if (iStack_3fc < 3) {
          uStack_170 = *puStack_3b8;
          uStack_168 = puStack_3b8[1];
        }
        else {
          uStack_1c0._4_4_ = 0;
          func_0x000109a84868(&uStack_1c0,&uStack_400);
        }
        puStack_218 = (uint *)CONCAT44(uStack_454,uStack_458);
        uStack_220 = (uint *)CONCAT44(iStack_45c,uStack_460);
        uStack_208 = CONCAT44(uStack_444,uStack_448);
        lStack_210 = CONCAT44(uStack_44c,uStack_450);
        uStack_1e0 = (ulong)&uStack_220 | 8;
        uStack_1f8 = CONCAT44(uStack_434,uStack_438);
        uStack_200 = CONCAT44(uStack_43c,uStack_440);
        uStack_1f0 = CONCAT44(uStack_42c,uStack_430);
        lStack_1e8 = lStack_428;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        if (lStack_428 != 0) {
          piVar1 = (int *)(lStack_428 + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puStack_1d8 = &uStack_1d0;
        if (iStack_45c < 3) {
          uStack_1d0 = *puStack_418;
          uStack_1c8 = puStack_418[1];
        }
        else {
          uStack_220 = (uint *)(ulong)uStack_460;
          func_0x000109a84868(&uStack_220,&uStack_460);
        }
        puVar13[2] = CONCAT44(uStack_f8._4_4_,(int)uStack_f8);
        puVar13[1] = CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
        puVar13[4] = CONCAT44(uStack_e4,uStack_e8);
        puVar13[3] = CONCAT44(uStack_ec,uStack_f0);
        *puVar13 = &PTR_FUN_110b29e08;
        puVar13[6] = CONCAT44(uStack_d4,uStack_d8);
        puVar13[5] = CONCAT44(uStack_dc,uStack_e0);
        puVar13[8] = uStack_c8;
        puVar13[7] = CONCAT44(uStack_cc,uStack_d0);
        puVar13[0xb] = 0;
        puVar13[9] = puVar13 + 2;
        puVar13[10] = puVar13 + 0xb;
        puVar13[0xc] = 0;
        if (uStack_c8 != 0) {
          piVar1 = (int *)(uStack_c8 + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (uStack_100._4_4_ < 3) {
          puVar21 = (undefined8 *)puVar13[10];
          *puVar21 = *puStack_b8;
          puVar21[1] = puStack_b8[1];
        }
        else {
          *(undefined4 *)((long)puVar13 + 0xc) = 0;
          func_0x000109a84868(puVar13 + 1,&uStack_100);
        }
        puVar13[0xe] = CONCAT44(iStack_154,iStack_158);
        puVar13[0xd] = CONCAT44(uStack_160._4_4_,
                                CONCAT22(uStack_160._2_2_,
                                         CONCAT11(uStack_160._1_1_,(undefined1)uStack_160)));
        puVar13[0x10] = CONCAT44(uStack_144,uStack_148);
        puVar13[0xf] = CONCAT44(uStack_14c,uStack_150);
        puVar13[0x12] = CONCAT44(uStack_134,uStack_138);
        puVar13[0x11] = CONCAT44(uStack_13c,uStack_140);
        puVar13[0x14] = uStack_128;
        puVar13[0x13] = CONCAT44(uStack_12c,uStack_130);
        puVar13[0x17] = 0;
        puVar13[0x15] = puVar13 + 0xe;
        puVar13[0x16] = puVar13 + 0x17;
        puVar13[0x18] = 0;
        if (uStack_128 != 0) {
          piVar1 = (int *)(uStack_128 + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (uStack_160._4_4_ < 3) {
          plVar22 = (long *)puVar13[0x16];
          *plVar22 = *plStack_118;
          plVar22[1] = plStack_118[1];
        }
        else {
          *(undefined4 *)((long)puVar13 + 0x6c) = 0;
          func_0x000109a84868(puVar13 + 0xd,&uStack_160);
        }
        puVar13[0x1b] = CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8);
        puVar13[0x1a] = CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
        *(undefined4 *)(puVar13 + 0x19) = uVar14;
        *(char *)((long)puVar13 + 0xcc) = (char)param_9;
        puVar13[0x1d] = CONCAT44(uStack_1a4,uStack_1a8);
        puVar13[0x1c] = CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
        puVar13[0x1f] = CONCAT44(uStack_194,uStack_198);
        puVar13[0x1e] = CONCAT44(uStack_19c,uStack_1a0);
        puVar13[0x21] = lStack_188;
        puVar13[0x20] = CONCAT44(uStack_18c,uStack_190);
        puVar13[0x24] = 0;
        puVar13[0x22] = puVar13 + 0x1b;
        puVar13[0x23] = puVar13 + 0x24;
        puVar13[0x25] = 0;
        if (lStack_188 != 0) {
          piVar1 = (int *)(lStack_188 + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (uStack_1c0._4_4_ < 3) {
          puVar21 = (undefined8 *)puVar13[0x23];
          *puVar21 = *puStack_178;
          puVar21[1] = puStack_178[1];
        }
        else {
          *(undefined4 *)((long)puVar13 + 0xd4) = 0;
          func_0x000109a84868(puVar13 + 0x1a,&uStack_1c0);
        }
        puVar13[0x27] = puStack_218;
        puVar13[0x26] = uStack_220;
        puVar13[0x29] = uStack_208;
        puVar13[0x28] = lStack_210;
        puVar13[0x2b] = uStack_1f8;
        puVar13[0x2a] = uStack_200;
        puVar13[0x2d] = lStack_1e8;
        puVar13[0x2c] = uStack_1f0;
        puVar13[0x2e] = puVar13 + 0x27;
        puVar13[0x2f] = puVar13 + 0x30;
        puVar13[0x30] = 0;
        puVar13[0x31] = 0;
        if (lStack_1e8 != 0) {
          piVar1 = (int *)(lStack_1e8 + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (uStack_220._4_4_ < 3) {
          puVar21 = (undefined8 *)puVar13[0x2f];
          *puVar21 = *puStack_1d8;
          puVar21[1] = puStack_1d8[1];
        }
        else {
          *(undefined4 *)((long)puVar13 + 0x134) = 0;
          func_0x000109a84868(puVar13 + 0x26,&uStack_220);
        }
        plVar22 = (long *)0x20;
        __Znwm();
        plVar30 = plVar22 + 1;
        *(int *)plVar30 = 1;
        *plVar22 = (long)&PTR_FUN_110b29e58;
        plVar22[2] = (long)puVar13;
        if (lStack_1e8 != 0) {
          piVar1 = (int *)(lStack_1e8 + 0x14);
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
            func_0x000109a848d4(&uStack_220);
          }
        }
        lStack_1e8 = 0;
        uStack_208 = 0;
        lStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        if (0 < uStack_220._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)(uStack_1e0 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_220._4_4_);
        }
        if (puStack_1d8 != &uStack_1d0 && puStack_1d8 != (undefined8 *)0x0) {
          _free(puStack_1d8[-1]);
        }
        if (lStack_188 != 0) {
          piVar1 = (int *)(lStack_188 + 0x14);
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
            func_0x000109a848d4(&uStack_1c0);
          }
        }
        lStack_188 = 0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1b0._0_4_ = 0;
        uStack_1b0._4_4_ = 0;
        uStack_198 = 0;
        uStack_194 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        if (0 < uStack_1c0._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_180 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_1c0._4_4_);
        }
        if (puStack_178 != &uStack_170 && puStack_178 != (undefined8 *)0x0) {
          _free(puStack_178[-1]);
        }
        if (uStack_128 != 0) {
          piVar1 = (int *)(uStack_128 + 0x14);
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
            func_0x000109a848d4(&uStack_160);
          }
        }
        uStack_128 = 0;
        uStack_148 = 0;
        uStack_144 = 0;
        uStack_150 = 0;
        uStack_14c = 0;
        uStack_138 = 0;
        uStack_134 = 0;
        uStack_140 = 0;
        uStack_13c = 0;
        if (0 < uStack_160._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)piStack_120 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_160._4_4_);
        }
        if (plStack_118 != &lStack_110 && plStack_118 != (long *)0x0) {
          _free(plStack_118[-1]);
        }
        if (uStack_c8 != 0) {
          piVar1 = (int *)(uStack_c8 + 0x14);
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
            func_0x000109a848d4(&uStack_100);
          }
        }
        uStack_c8 = 0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        if (0 < uStack_100._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_c0 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_100._4_4_);
        }
        if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
          _free(puStack_b8[-1]);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar5) {
            *(int *)plVar30 = (int)*plVar30 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uStack_f8._0_4_ = (int)puStack_528;
        uStack_f8._4_4_ = (undefined4)((ulong)puStack_528 >> 0x20);
        uStack_100._0_4_ = SUB84(plStack_530,0);
        uStack_100._4_4_ = (int)((ulong)plStack_530 >> 0x20);
        plStack_530 = plVar22;
        puStack_528 = puVar13;
        FUN_109b98b28(&uStack_100);
        do {
          iVar16 = (int)*plVar30 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar5) {
            *(int *)plVar30 = iVar16;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
        uStack_100._0_4_ = 0x42ff0000;
        puStack_c0 = &uStack_f8;
        uStack_f8._4_4_ = 0;
        uStack_f0 = 0;
        uStack_100._4_4_ = 0;
        uStack_f8._0_4_ = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        uStack_d4 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_160._0_1_ = 3;
        uStack_160._1_1_ = 0;
        uStack_160._2_2_ = 0;
        uStack_160._4_4_ = 2;
        puStack_b8 = &uStack_b0;
        FUN_109a83fd0(&uStack_100,2,&uStack_160,6);
        uStack_160._0_1_ = 0;
        uStack_160._1_1_ = 0;
        uStack_160._2_2_ = 0x42ff;
        piStack_120 = &iStack_158;
        iStack_154 = 0;
        uStack_150 = 0;
        uStack_160._4_4_ = 0;
        iStack_158 = 0;
        uStack_144 = 0;
        uStack_140 = 0;
        uStack_14c = 0;
        uStack_148 = 0;
        uStack_134 = 0;
        uStack_13c = 0;
        uStack_138 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_12c = 0;
        lStack_108 = 0;
        lStack_110 = 0;
        uStack_1c0._0_4_ = 1;
        uStack_1c0._4_4_ = iStack_338;
        plStack_118 = &lStack_110;
        FUN_109a83fd0(&uStack_160,2,&uStack_1c0,0);
        FUN_109b9ebd8(auStack_578,(double)param_1,param_2,&plStack_530,uVar15,param_10);
        uStack_1b0._0_4_ = 0;
        uStack_1b0._4_4_ = 0;
        uStack_1c0._0_4_ = 0x1010000;
        uStack_1b8 = &uStack_340;
        lStack_210 = 0;
        uStack_220 = (uint *)CONCAT44(uStack_220._4_4_,0x1010000);
        puStack_218 = &uStack_3a0;
        uStack_548 = CONCAT44(uStack_548._4_4_,0x2010000);
        puStack_540 = &uStack_100;
        uStack_538 = 0;
        auStack_560[0] = 0x2010000;
        puStack_558 = &uStack_160;
        uStack_550 = 0;
        plVar22 = plStack_570;
        (**(code **)(*plStack_570 + 0x48))
                  (plStack_570,&uStack_1c0,&uStack_220,&uStack_548,auStack_560);
        FUN_109b98b7c(auStack_578);
        if ((int)plVar22 == 0) {
LAB_109ba7418:
          FUN_109a91b04(param_7,&uStack_400);
          FUN_109a91b04(param_8,&uStack_460);
          if ((*(byte *)(param_11 + 2) & 0x1f) != 0) {
            FUN_109a8e944();
          }
          uVar27 = 0;
        }
        else {
          uStack_1b8._0_4_ = 0;
          uStack_1b8._4_4_ = 0;
          uStack_1c0._0_4_ = 0;
          uStack_1c0._4_4_ = 0;
          uStack_1b0._0_4_ = 0;
          uStack_1b0._4_4_ = 0;
          puStack_218 = (uint *)0x0;
          uStack_220 = (uint *)0x0;
          lStack_210 = 0;
          uStack_548._0_4_ = 0x82030016;
          puStack_540 = &uStack_1c0;
          uStack_538 = 0;
          FUN_109a41858(0x3ff0000000000000,0,&uStack_340,&uStack_548,6);
          uStack_548 = CONCAT44(uStack_548._4_4_,0x8203000e);
          puStack_540 = &uStack_220;
          uStack_538 = 0;
          FUN_109a41858(0x3ff0000000000000,0,&uStack_3a0,&uStack_548,6);
          puVar13 = (undefined8 *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
          if (uVar3 != 0) {
            uVar23 = 0;
            iVar16 = 0;
            puVar21 = puVar13 + 2;
            do {
              if (*(char *)(CONCAT44(uStack_14c,uStack_150) + uVar23) != '\0') {
                if ((long)iVar16 < (long)uVar23) {
                  puVar26 = puVar13 + (long)iVar16 * 3;
                  uVar27 = puVar21[-2];
                  puVar26[1] = puVar21[-1];
                  *puVar26 = uVar27;
                  puVar26[2] = *puVar21;
                }
                iVar16 = iVar16 + 1;
              }
              uVar23 = uVar23 + 1;
              puVar21 = puVar21 + 3;
            } while (uVar3 != uVar23);
            uVar23 = 0;
            iVar25 = 0;
            do {
              if (*(char *)(CONCAT44(uStack_14c,uStack_150) + uVar23) != '\0') {
                if ((long)iVar25 < (long)uVar23) {
                  uVar27 = *(undefined8 *)(uStack_220 + uVar23 * 4);
                  *(undefined8 *)(uStack_220 + (long)iVar25 * 4 + 2) =
                       *(undefined8 *)(uStack_220 + uVar23 * 4 + 2);
                  *(undefined8 *)(uStack_220 + (long)iVar25 * 4) = uVar27;
                }
                iVar25 = iVar25 + 1;
              }
              uVar23 = uVar23 + 1;
            } while (uVar3 != uVar23);
            uVar29 = (ulong)iVar16;
            puVar21 = (undefined8 *)CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8);
            lVar17 = (long)puVar21 - (long)puVar13 >> 3;
            uVar18 = lVar17 * -0x5555555555555555;
            uVar23 = uVar29 + lVar17 * 0x5555555555555555;
            if (uVar29 < uVar18 || uVar23 == 0) goto LAB_109ba6f98;
            if (uVar23 <= (ulong)((CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0) - (long)puVar21
                                  >> 3) * -0x5555555555555555)) {
              uVar23 = (uVar23 * 0x18 - 0x18) / 0x18;
              _bzero(puVar21,uVar23 * 0x18 + 0x18);
              uStack_1b8 = (uint *)(puVar21 + uVar23 * 3 + 3);
              goto LAB_109ba6fe8;
            }
            if (iVar16 < 0) {
              func_0x000109ba8014();
              goto LAB_109ba7d14;
            }
            lVar17 = CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0) - (long)puVar13 >> 3;
            uVar18 = lVar17 * 0x5555555555555556;
            if (uVar18 < uVar29 || uVar18 - uVar29 == 0) {
              uVar18 = uVar29;
            }
            if (0x555555555555554 < (ulong)(lVar17 * -0x5555555555555555)) {
              uVar18 = 0xaaaaaaaaaaaaaaa;
            }
            if (uVar18 < 0xaaaaaaaaaaaaaab) {
              puVar10 = (undefined8 *)(uVar18 * 0x18);
              __Znwm();
              lVar17 = (long)puVar10 + ((long)puVar21 - (long)puVar13);
              lVar31 = ((uVar23 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
              _bzero(lVar17,lVar31);
              uStack_1b8 = (uint *)(lVar17 + lVar31);
              puVar2 = puVar10;
              for (puVar26 = puVar13; puVar26 != puVar21; puVar26 = puVar26 + 3) {
                uVar27 = *puVar26;
                puVar2[1] = puVar26[1];
                *puVar2 = uVar27;
                puVar2[2] = puVar26[2];
                puVar2 = puVar2 + 3;
              }
              uStack_1c0._0_4_ = SUB84(puVar10,0);
              uStack_1c0._4_4_ = (int)((ulong)puVar10 >> 0x20);
              uStack_1b0 = puVar10 + uVar18 * 3;
              if (puVar13 != (undefined8 *)0x0) {
                __ZdlPv(puVar13);
              }
              goto LAB_109ba6fec;
            }
LAB_109ba7d00:
            func_0x000104c4f740();
            goto LAB_109ba7d14;
          }
          uVar29 = 0;
          uVar18 = (CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8) - (long)puVar13 >> 3) *
                   -0x5555555555555555;
LAB_109ba6f98:
          if (uVar29 < uVar18) {
            uStack_1b8 = (uint *)(puVar13 + (long)(int)uVar29 * 3);
LAB_109ba6fe8:
          }
LAB_109ba6fec:
          puVar9 = puStack_218;
          puVar8 = uStack_220;
          lVar17 = (long)puStack_218 - (long)uStack_220;
          uVar23 = lVar17 >> 4;
          if (uVar23 < uVar29) {
            uVar18 = uVar29 - uVar23;
            if ((ulong)(lStack_210 - (long)puStack_218 >> 4) < uVar18) {
              if (uVar29 >> 0x3c != 0) {
                func_0x000109ba8028();
                goto LAB_109ba7d14;
              }
              uVar19 = lStack_210 - (long)uStack_220 >> 3;
              if (uVar19 <= uVar29) {
                uVar19 = uVar29;
              }
              if (0x7fffffffffffffef < (ulong)(lStack_210 - (long)uStack_220)) {
                uVar19 = 0xfffffffffffffff;
              }
              if (uVar19 >> 0x3c != 0) goto LAB_109ba7d00;
              lVar31 = uVar19 << 4;
              __Znwm();
              lVar17 = lVar31 + lVar17;
              lVar31 = lVar31 + uVar19 * 0x10;
              _bzero(lVar17,uVar18 * 0x10);
              puStack_218 = (uint *)(lVar17 + uVar18 * 0x10);
              uStack_220 = (uint *)(lVar17 + uVar23 * -0x10);
              puVar6 = uStack_220;
              for (puVar24 = puVar8; puVar24 != puVar9; puVar24 = puVar24 + 4) {
                uVar27 = *(undefined8 *)puVar24;
                *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar24 + 2);
                *(undefined8 *)puVar6 = uVar27;
                puVar6 = puVar6 + 4;
              }
              lStack_210 = lVar31;
              if (puVar8 != (uint *)0x0) {
                __ZdlPv(puVar8);
              }
            }
            else {
              _bzero(puStack_218,uVar18 * 0x10);
              puStack_218 = puVar9 + uVar18 * 4;
            }
          }
          else if (uVar29 < uVar23) {
            puStack_218 = uStack_220 + uVar29 * 4;
          }
          uStack_538 = 0;
          uStack_548 = CONCAT44(uStack_548._4_4_,0x81030016);
          puStack_540 = &uStack_1c0;
          uStack_550 = 0;
          auStack_560[0] = 0x8103000e;
          puStack_558 = &uStack_220;
          uStack_568 = 0;
          auStack_578[0] = 0x1010000;
          plStack_570 = &uStack_4c0;
          uStack_580 = 0;
          auStack_590[0] = 0x1010000;
          puStack_588 = &uStack_520;
          auStack_5a8[0] = 0x2010000;
          puStack_5a0 = &uStack_400;
          uStack_598 = 0;
          auStack_5c0[0] = 0x2010000;
          puStack_5b8 = &uStack_460;
          if (param_12 == 2) {
            param_12 = 1;
          }
          uStack_5b0 = 0;
          puVar13 = &uStack_548;
          FUN_109ba43b4(puVar13,auStack_560,auStack_578,auStack_590,auStack_5a8,auStack_5c0,0,
                        param_12);
          if (uStack_220 != (uint *)0x0) {
            puStack_218 = uStack_220;
            __ZdlPv();
          }
          if (CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0) != 0) {
            uStack_1b8._0_4_ = (undefined4)uStack_1c0;
            uStack_1b8._4_4_ = uStack_1c0._4_4_;
            __ZdlPv();
          }
          uVar28 = 0;
          if (0 < (int)uStack_f8) {
            uVar28 = (uint)puVar13;
          }
          if ((uVar28 & 1) == 0) goto LAB_109ba7418;
          uStack_220 = (uint *)0x7fffffff80000000;
          uStack_548 = 0x100000000;
          FUN_109a84930(&uStack_1c0,&uStack_100,&uStack_220,&uStack_548);
          FUN_109a91b04(param_7,&uStack_1c0);
          if (lStack_188 != 0) {
            piVar1 = (int *)(lStack_188 + 0x14);
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
              func_0x000109a848d4(&uStack_1c0);
            }
          }
          lStack_188 = 0;
          uStack_1a8 = 0;
          uStack_1a4 = 0;
          uStack_1b0._0_4_ = 0;
          uStack_1b0._4_4_ = 0;
          uStack_198 = 0;
          uStack_194 = 0;
          uStack_1a0 = 0;
          uStack_19c = 0;
          if (0 < uStack_1c0._4_4_) {
            lVar17 = 0;
            do {
              *(undefined4 *)((long)puStack_180 + lVar17 * 4) = 0;
              lVar17 = lVar17 + 1;
            } while (lVar17 < uStack_1c0._4_4_);
          }
          if (puStack_178 != &uStack_170 && puStack_178 != (undefined8 *)0x0) {
            _free(puStack_178[-1]);
          }
          uStack_220 = (uint *)0x7fffffff80000000;
          uStack_548 = 0x200000001;
          FUN_109a84930(&uStack_1c0,&uStack_100,&uStack_220,&uStack_548);
          FUN_109a91b04(param_8,&uStack_1c0);
          if (lStack_188 != 0) {
            piVar1 = (int *)(lStack_188 + 0x14);
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
              func_0x000109a848d4(&uStack_1c0);
            }
          }
          lStack_188 = 0;
          uStack_1a8 = 0;
          uStack_1a4 = 0;
          uStack_1b0._0_4_ = 0;
          uStack_1b0._4_4_ = 0;
          uStack_198 = 0;
          uStack_194 = 0;
          uStack_1a0 = 0;
          uStack_19c = 0;
          if (0 < uStack_1c0._4_4_) {
            lVar17 = 0;
            do {
              *(undefined4 *)((long)puStack_180 + lVar17 * 4) = 0;
              lVar17 = lVar17 + 1;
            } while (lVar17 < uStack_1c0._4_4_);
          }
          if (puStack_178 != &uStack_170 && puStack_178 != (undefined8 *)0x0) {
            _free(puStack_178[-1]);
          }
          puVar8 = uStack_1b8;
          if ((*(byte *)(param_11 + 2) & 0x1f) != 0) {
            uStack_1c0._0_4_ = 0x42ff0000;
            uStack_1b8._4_4_ = 0;
            uStack_1b0._0_4_ = 0;
            uStack_1c0._4_4_ = 0;
            uStack_1b8._0_4_ = 0;
            puStack_180 = &uStack_1b8;
            uStack_1a4 = 0;
            uStack_1a0 = 0;
            uStack_1b0._4_4_ = 0;
            uStack_1a8 = 0;
            uStack_194 = 0;
            uStack_19c = 0;
            uStack_198 = 0;
            lStack_188 = 0;
            uStack_190 = 0;
            uStack_18c = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_220 = (uint *)((ulong)uStack_220 & 0xffffffff00000000);
            puStack_178 = &uStack_170;
            if (uVar3 != 0) {
              iVar16 = 0;
              do {
                if (((uStack_160._1_1_ >> 6 & 1) == 0) && (*piStack_120 != 1)) {
                  if (piStack_120[1] != 1) {
                    iVar25 = 0;
                    if (iStack_154 != 0) {
                      iVar25 = iVar16 / iStack_154;
                    }
                    lVar17 = (CONCAT44(uStack_14c,uStack_150) + *plStack_118 * (long)iVar25) -
                             (long)(iVar25 * iStack_154);
                    goto LAB_109ba739c;
                  }
                  pcVar20 = (char *)(CONCAT44(uStack_14c,uStack_150) + *plStack_118 * (long)iVar16);
                }
                else {
                  lVar17 = CONCAT44(uStack_14c,uStack_150);
LAB_109ba739c:
                  pcVar20 = (char *)(lVar17 + iVar16);
                }
                if (*pcVar20 != '\0') {
                  FUN_1094174f0(&uStack_1c0,&uStack_220);
                  iVar16 = (int)uStack_220;
                }
                iVar16 = iVar16 + 1;
                uStack_220 = (uint *)CONCAT44(uStack_220._4_4_,iVar16);
              } while (iVar16 < (int)uVar3);
            }
            FUN_109a479a0(&uStack_1c0,param_11);
            if (lStack_188 != 0) {
              piVar1 = (int *)(lStack_188 + 0x14);
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
                func_0x000109a848d4(&uStack_1c0);
              }
            }
            puVar8 = (uint *)CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8);
            lStack_188 = 0;
            uStack_1a8 = 0;
            uStack_1a4 = 0;
            uStack_1b0._0_4_ = 0;
            uStack_1b0._4_4_ = 0;
            uStack_198 = 0;
            uStack_194 = 0;
            uStack_1a0 = 0;
            uStack_19c = 0;
            if (0 < uStack_1c0._4_4_) {
              lVar17 = 0;
              do {
                *(undefined4 *)((long)puStack_180 + lVar17 * 4) = 0;
                lVar17 = lVar17 + 1;
              } while (lVar17 < uStack_1c0._4_4_);
            }
            if (puStack_178 != &uStack_170 && puStack_178 != (undefined8 *)0x0) {
              _free(puStack_178[-1]);
              puVar8 = (uint *)CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8);
            }
          }
          uVar27 = 1;
          uStack_1b8 = puVar8;
        }
        if (uStack_128 != 0) {
          piVar1 = (int *)(uStack_128 + 0x14);
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
            func_0x000109a848d4(&uStack_160);
          }
        }
        uStack_128 = 0;
        uStack_148 = 0;
        uStack_144 = 0;
        uStack_150 = 0;
        uStack_14c = 0;
        uStack_138 = 0;
        uStack_134 = 0;
        uStack_140 = 0;
        uStack_13c = 0;
        if (0 < uStack_160._4_4_) {
          lVar17 = 0;
          do {
            piStack_120[lVar17] = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_160._4_4_);
        }
        if (plStack_118 != &lStack_110 && plStack_118 != (long *)0x0) {
          _free(plStack_118[-1]);
        }
        if (uStack_c8 != 0) {
          piVar1 = (int *)(uStack_c8 + 0x14);
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
            func_0x000109a848d4(&uStack_100);
          }
        }
        uStack_c8 = 0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        if (0 < uStack_100._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_c0 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_100._4_4_);
        }
        if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
          _free(puStack_b8[-1]);
        }
        FUN_109b98b28(&plStack_530);
        if (uStack_4e8 != 0) {
          piVar1 = (int *)(uStack_4e8 + 0x14);
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
            func_0x000109a848d4(&uStack_520);
          }
        }
        uStack_4e8 = 0;
        uStack_508 = 0;
        uStack_510 = 0;
        uStack_4f8 = 0;
        uStack_500 = 0;
        if (0 < uStack_520._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)(uStack_4e0 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_520._4_4_);
        }
        if (plStack_4d8 != &lStack_4d0 && plStack_4d8 != (long *)0x0) {
          _free(plStack_4d8[-1]);
        }
        if (uStack_488 != 0) {
          piVar1 = (int *)(uStack_488 + 0x14);
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
            func_0x000109a848d4(&uStack_4c0);
          }
        }
        uStack_488 = 0;
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        uStack_498 = 0;
        uStack_4a0 = 0;
        if (0 < uStack_4c0._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)(uStack_480 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_4c0._4_4_);
        }
        if (puStack_478 != &uStack_470 && puStack_478 != (undefined8 *)0x0) {
          _free(puStack_478[-1]);
        }
        if (lStack_428 != 0) {
          piVar1 = (int *)(lStack_428 + 0x14);
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
            func_0x000109a848d4(&uStack_460);
          }
        }
        lStack_428 = 0;
        uStack_448 = 0;
        uStack_444 = 0;
        uStack_450 = 0;
        uStack_44c = 0;
        uStack_438 = 0;
        uStack_434 = 0;
        uStack_440 = 0;
        uStack_43c = 0;
        if (0 < iStack_45c) {
          lVar17 = 0;
          do {
            *(undefined4 *)(uStack_420 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_45c);
        }
        if (puStack_418 != &uStack_410 && puStack_418 != (undefined8 *)0x0) {
          _free(puStack_418[-1]);
        }
        if (lStack_3c8 != 0) {
          piVar1 = (int *)(lStack_3c8 + 0x14);
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
            func_0x000109a848d4(&uStack_400);
          }
        }
        lStack_3c8 = 0;
        uStack_3e8 = 0;
        uStack_3e4 = 0;
        uStack_3f0 = 0;
        uStack_3ec = 0;
        uStack_3d8 = 0;
        uStack_3d4 = 0;
        uStack_3e0 = 0;
        uStack_3dc = 0;
        if (0 < iStack_3fc) {
          lVar17 = 0;
          do {
            *(undefined4 *)(uStack_3c0 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_3fc);
        }
        if (puStack_3b8 != &uStack_3b0 && puStack_3b8 != (undefined8 *)0x0) {
          _free(puStack_3b8[-1]);
        }
        if (uStack_368 != 0) {
          piVar1 = (int *)(uStack_368 + 0x14);
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
            func_0x000109a848d4(&uStack_3a0);
          }
        }
        uStack_368 = 0;
        uStack_388 = 0;
        uStack_384 = 0;
        uStack_390 = 0;
        uStack_38c = 0;
        uStack_378 = 0;
        uStack_374 = 0;
        uStack_380 = 0;
        uStack_37c = 0;
        if (0 < iStack_39c) {
          lVar17 = 0;
          do {
            piStack_360[lVar17] = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_39c);
        }
        if (puStack_358 != &uStack_350 && puStack_358 != (undefined8 *)0x0) {
          _free(puStack_358[-1]);
        }
        if (uStack_308 != 0) {
          piVar1 = (int *)(uStack_308 + 0x14);
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
            func_0x000109a848d4(&uStack_340);
          }
        }
        uStack_308 = 0;
        uStack_328 = 0;
        uStack_324 = 0;
        uStack_330 = 0;
        uStack_32c = 0;
        uStack_318 = 0;
        uStack_314 = 0;
        uStack_320 = 0;
        uStack_31c = 0;
        if (0 < iStack_33c) {
          lVar17 = 0;
          do {
            piStack_300[lVar17] = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_33c);
        }
        if (puStack_2f8 != &uStack_2f0 && puStack_2f8 != (undefined8 *)0x0) {
          _free(puStack_2f8[-1]);
        }
        if (uStack_2a8 != 0) {
          piVar1 = (int *)(uStack_2a8 + 0x14);
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
            func_0x000109a848d4(&uStack_2e0);
          }
        }
        uStack_2a8 = 0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        if (0 < uStack_2e0._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)(uStack_2a0 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_2e0._4_4_);
        }
        if (puStack_298 != &uStack_290 && puStack_298 != (undefined8 *)0x0) {
          _free(puStack_298[-1]);
        }
        if (uStack_248 != 0) {
          piVar1 = (int *)(uStack_248 + 0x14);
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
            func_0x000109a848d4(&uStack_280);
          }
        }
        uStack_248 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        if (0 < uStack_280._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)(uStack_240 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_280._4_4_);
        }
        if (puStack_238 != &uStack_230 && puStack_238 != (undefined8 *)0x0) {
          _free(puStack_238[-1]);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
          return uVar27;
        }
        ___stack_chk_fail();
      }
      puVar11 = (undefined4 *)0x5c;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      uStack_100 = puVar11 + 1;
      uStack_f8._0_4_ = 0x56;
      uStack_f8._4_4_ = 0;
      *(undefined8 *)(puVar11 + 0xb) = 0x7c202933203d3d20;
      *(undefined8 *)(puVar11 + 9) = 0x2928736c656e6e61;
      *(undefined8 *)(puVar11 + 0xf) = 0x6f2a736c6f632e73;
      *(undefined8 *)(puVar11 + 0xd) = 0x746e696f706f207c;
      *(undefined8 *)(puVar11 + 0x13) = 0x28736c656e6e6168;
      *(undefined8 *)(puVar11 + 0x11) = 0x632e73746e696f70;
      *(undefined8 *)(puVar11 + 3) = 0x3d3d2073776f722e;
      *(undefined8 *)(puVar11 + 1) = 0x73746e696f706f28;
      *(undefined1 *)((long)puVar11 + 0x5a) = 0;
      *(undefined8 *)((long)puVar11 + 0x52) = 0x33203d3d20292873;
      *(undefined8 *)(puVar11 + 7) = 0x68632e73746e696f;
      *(undefined8 *)(puVar11 + 5) = 0x706f202626203120;
      FUN_109ac3188(0xffffff29,&uStack_100,&UNK_10f5a306f,&UNK_10f5a2ed3,0xea);
      goto LAB_109ba7d14;
    }
  }
  puVar11 = (undefined4 *)0x68;
  func_0x000107c2ae8c();
  *puVar11 = 1;
  uStack_100 = puVar11 + 1;
  uStack_f8._0_4_ = 99;
  uStack_f8._4_4_ = 0;
  *(undefined4 *)((long)puVar11 + 99) = 0x29294634;
  *(undefined8 *)(puVar11 + 0xb) = 0x636568632e73746e;
  *(undefined8 *)(puVar11 + 9) = 0x696f70692878616d;
  *(undefined8 *)(puVar11 + 0xf) = 0x32335f5643202c32;
  *(undefined8 *)(puVar11 + 0xd) = 0x28726f746365566b;
  *(undefined8 *)(puVar11 + 0x13) = 0x636568632e73746e;
  *(undefined8 *)(puVar11 + 0x11) = 0x696f7069202c2946;
  *(undefined8 *)(puVar11 + 0x17) = 0x34365f5643202c32;
  *(undefined8 *)(puVar11 + 0x15) = 0x28726f746365566b;
  *(undefined8 *)(puVar11 + 3) = 0x2026262030203d3e;
  *(undefined8 *)(puVar11 + 1) = 0x2073746e696f706e;
  *(undefined1 *)((long)puVar11 + 0x67) = 0;
  *(undefined8 *)(puVar11 + 7) = 0x3a3a647473203d3d;
  *(undefined8 *)(puVar11 + 5) = 0x2073746e696f706e;
  FUN_109ac3188(0xffffff29,&uStack_100,&UNK_10f5a306f,&UNK_10f5a2ed3,0xe6);
LAB_109ba7d14:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109ba7d18);
  (*pcVar7)();
}



/* Entry: 109ba8014; end: 109ba803b;  */

undefined8 * FUN_109ba8014(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  puVar5 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *puVar5 = &PTR_FUN_110b29e08;
  if (puVar5[0x2d] != 0) {
    piVar1 = (int *)(puVar5[0x2d] + 0x14);
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
      func_0x000109a848d4(puVar5 + 0x26);
    }
  }
  puVar5[0x2d] = 0;
  puVar5[0x29] = 0;
  puVar5[0x28] = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2a] = 0;
  if (0 < *(int *)((long)puVar5 + 0x134)) {
    lVar6 = 0;
    lVar8 = puVar5[0x2e];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0x134));
  }
  puVar7 = (undefined8 *)puVar5[0x2f];
  if (puVar7 != puVar5 + 0x30 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (puVar5[0x21] != 0) {
    piVar1 = (int *)(puVar5[0x21] + 0x14);
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
      func_0x000109a848d4(puVar5 + 0x1a);
    }
  }
  puVar5[0x21] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x1e] = 0;
  if (0 < *(int *)((long)puVar5 + 0xd4)) {
    lVar6 = 0;
    lVar8 = puVar5[0x22];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0xd4));
  }
  puVar7 = (undefined8 *)puVar5[0x23];
  if (puVar7 != puVar5 + 0x24 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (puVar5[0x14] != 0) {
    piVar1 = (int *)(puVar5[0x14] + 0x14);
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
      func_0x000109a848d4(puVar5 + 0xd);
    }
  }
  puVar5[0x14] = 0;
  puVar5[0x10] = 0;
  puVar5[0xf] = 0;
  puVar5[0x12] = 0;
  puVar5[0x11] = 0;
  if (0 < *(int *)((long)puVar5 + 0x6c)) {
    lVar6 = 0;
    lVar8 = puVar5[0x15];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0x6c));
  }
  puVar7 = (undefined8 *)puVar5[0x16];
  if (puVar7 != puVar5 + 0x17 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (puVar5[8] != 0) {
    piVar1 = (int *)(puVar5[8] + 0x14);
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
      func_0x000109a848d4(puVar5 + 1);
    }
  }
  puVar5[8] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  if (0 < *(int *)((long)puVar5 + 0xc)) {
    lVar6 = 0;
    lVar8 = puVar5[9];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0xc));
  }
  puVar7 = (undefined8 *)puVar5[10];
  if (puVar7 != puVar5 + 0xb && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  return puVar5;
}



/* Entry: 109ba803c; end: 109ba803f;  */

undefined8 * FUN_109ba803c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b29e08;
  if (param_1[0x2d] != 0) {
    piVar1 = (int *)(param_1[0x2d] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x26);
    }
  }
  param_1[0x2d] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  if (0 < *(int *)((long)param_1 + 0x134)) {
    lVar5 = 0;
    lVar7 = param_1[0x2e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x134));
  }
  puVar6 = (undefined8 *)param_1[0x2f];
  if (puVar6 != param_1 + 0x30 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x21] != 0) {
    piVar1 = (int *)(param_1[0x21] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1a);
    }
  }
  param_1[0x21] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  if (0 < *(int *)((long)param_1 + 0xd4)) {
    lVar5 = 0;
    lVar7 = param_1[0x22];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xd4));
  }
  puVar6 = (undefined8 *)param_1[0x23];
  if (puVar6 != param_1 + 0x24 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
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
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109ba8040; end: 109ba8053;  */

void FUN_109ba8040(void)

{
  FUN_109ba8d30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ba8054; end: 109ba8473;  */

uint * FUN_109ba8054(long param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  undefined4 uStack_1c8;
  int iStack_1c4;
  undefined8 uStack_1c0;
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
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 auStack_168 [2];
  undefined4 *puStack_160;
  undefined8 uStack_158;
  undefined4 auStack_150 [2];
  long lStack_148;
  undefined8 uStack_140;
  undefined4 auStack_138 [2];
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar5 = *(ulong **)(param_2 + 2);
    uStack_80 = (ulong)&uStack_c0 | 8;
    uStack_b8 = puVar5[1];
    uStack_c0 = *puVar5;
    uStack_a8 = puVar5[3];
    uStack_b0 = puVar5[2];
    uStack_98 = puVar5[5];
    uStack_a0 = puVar5[4];
    uStack_88 = puVar5[7];
    uStack_90 = puVar5[6];
    puStack_78 = &uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    if (puVar5[7] != 0) {
      piVar1 = (int *)(puVar5[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar5 + 4) < 3) {
      uStack_70 = *(undefined8 *)puVar5[9];
      uStack_68 = ((undefined8 *)puVar5[9])[1];
    }
    else {
      uStack_c0 = uStack_c0 & 0xffffffff;
      func_0x000109a84868(&uStack_c0);
    }
  }
  else {
    FUN_109a8a180(&uStack_c0,param_2,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar5 = *(ulong **)(param_3 + 2);
    uStack_e0 = (ulong)&uStack_120 | 8;
    uStack_118 = puVar5[1];
    uStack_120 = *puVar5;
    uStack_108 = puVar5[3];
    uStack_110 = puVar5[2];
    uStack_f8 = puVar5[5];
    uStack_100 = puVar5[4];
    uStack_e8 = puVar5[7];
    uStack_f0 = puVar5[6];
    puStack_d8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    if (puVar5[7] != 0) {
      piVar1 = (int *)(puVar5[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar5 + 4) < 3) {
      uStack_d0 = *(undefined8 *)puVar5[9];
      uStack_c8 = ((undefined8 *)puVar5[9])[1];
    }
    else {
      uStack_120 = uStack_120 & 0xffffffff;
      func_0x000109a84868(&uStack_120);
    }
  }
  else {
    FUN_109a8a180(&uStack_120,param_3,0xffffffff);
  }
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1c0 = param_1 + 8;
  uStack_1c8 = 0x1010000;
  lStack_130 = param_1 + 0x68;
  uStack_128 = 0;
  auStack_138[0] = 0x1010000;
  auStack_150[0] = 0xc2010000;
  uStack_140 = 0;
  auStack_168[0] = 0xc2010000;
  uStack_158 = 0;
  puStack_160 = (undefined4 *)(param_1 + 0x130);
  lStack_148 = param_1 + 0xd0;
  FUN_109ba43b4(param_2,param_3,&uStack_1c8,auStack_138,auStack_150,auStack_168,
                *(undefined1 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 200));
  uStack_1c8 = 0x42ff0000;
  puStack_188 = &uStack_1c0;
  uStack_1c0._4_4_ = 0;
  uStack_1b8 = 0;
  iStack_1c4 = 0;
  uStack_1c0._0_4_ = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_19c = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  lStack_190 = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_128 = 0;
  auStack_138[0] = 0x1010000;
  uStack_140 = 0;
  auStack_150[0] = 0x1010000;
  auStack_168[0] = 0x2010000;
  uStack_158 = 0;
  puStack_180 = &uStack_178;
  puStack_160 = &uStack_1c8;
  lStack_148 = param_1 + 0x130;
  lStack_130 = param_1 + 0xd0;
  FUN_109a91dec(auStack_138,auStack_150,auStack_168);
  FUN_109a479a0(&uStack_1c8,param_4);
  if (lStack_190 != 0) {
    piVar1 = (int *)(lStack_190 + 0x14);
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
      func_0x000109a848d4(&uStack_1c8);
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
  if (0 < iStack_1c4) {
    lVar6 = 0;
    do {
      *(undefined4 *)((long)puStack_188 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_1c4);
  }
  if (puStack_180 != &uStack_178 && puStack_180 != (undefined8 *)0x0) {
    _free(puStack_180[-1]);
  }
  if (uStack_e8 != 0) {
    piVar1 = (int *)(uStack_e8 + 0x14);
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
      func_0x000109a848d4(&uStack_120);
    }
  }
  uStack_e8 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (0 < uStack_120._4_4_) {
    lVar6 = 0;
    do {
      *(undefined4 *)(uStack_e0 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < uStack_120._4_4_);
  }
  if (puStack_d8 != &uStack_d0 && puStack_d8 != (undefined8 *)0x0) {
    _free(puStack_d8[-1]);
  }
  if (uStack_88 != 0) {
    piVar1 = (int *)(uStack_88 + 0x14);
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
      func_0x000109a848d4(&uStack_c0);
    }
  }
  uStack_88 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (0 < uStack_c0._4_4_) {
    lVar6 = 0;
    do {
      *(undefined4 *)(uStack_80 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < uStack_c0._4_4_);
  }
  if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
    _free(puStack_78[-1]);
  }
  return param_2;
}



/* Entry: 109ba8474; end: 109ba8d27;  */

void FUN_109ba8474(long param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  int iVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 auStack_378 [2];
  uint *puStack_370;
  undefined8 uStack_368;
  undefined4 auStack_360 [2];
  long lStack_358;
  undefined8 uStack_350;
  undefined4 auStack_348 [2];
  long lStack_340;
  undefined8 uStack_338;
  undefined4 auStack_330 [2];
  uint *puStack_328;
  undefined8 uStack_320;
  undefined4 auStack_318 [2];
  uint *puStack_310;
  undefined8 uStack_308;
  uint uStack_300;
  int iStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  long lStack_2c8;
  undefined4 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  uint auStack_2a0 [4];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_268;
  long lStack_260;
  undefined1 *puStack_258;
  undefined1 auStack_250 [16];
  uint uStack_240;
  int iStack_23c;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_208;
  long lStack_200;
  undefined1 *puStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined8 uStack_1e0;
  ulong uStack_1d8;
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
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  float *pfStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_2 + 2);
    uStack_e0 = (ulong)&uStack_120 | 8;
    uStack_118 = puVar9[1];
    uStack_120 = *puVar9;
    uStack_108 = puVar9[3];
    uStack_110 = puVar9[2];
    uStack_f8 = puVar9[5];
    uStack_100 = puVar9[4];
    uStack_e8 = puVar9[7];
    uStack_f0 = puVar9[6];
    puStack_d8 = &uStack_d0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_d0 = *(undefined8 *)puVar9[9];
      uStack_c8 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_120 = uStack_120 & 0xffffffff;
      func_0x000109a84868(&uStack_120);
    }
  }
  else {
    FUN_109a8a180(&uStack_120,param_2,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_3 + 2);
    uStack_140 = (ulong)&uStack_180 | 8;
    uStack_178 = puVar9[1];
    uStack_180 = *puVar9;
    uStack_168 = puVar9[3];
    uStack_170 = puVar9[2];
    uStack_158 = puVar9[5];
    uStack_160 = puVar9[4];
    uStack_148 = puVar9[7];
    uStack_150 = puVar9[6];
    puStack_138 = &uStack_130;
    uStack_128 = 0;
    uStack_130 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_130 = *(undefined8 *)puVar9[9];
      uStack_128 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_180 = uStack_180 & 0xffffffff;
      func_0x000109a84868(&uStack_180);
    }
  }
  else {
    FUN_109a8a180(&uStack_180,param_3,0xffffffff);
  }
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_4 + 2);
    uStack_1a0 = (ulong)&uStack_1e0 | 8;
    uStack_1d8 = puVar9[1];
    uStack_1e0 = *puVar9;
    uStack_1c8 = puVar9[3];
    uStack_1d0 = puVar9[2];
    uStack_1b8 = puVar9[5];
    uStack_1c0 = puVar9[4];
    uStack_1a8 = puVar9[7];
    uStack_1b0 = puVar9[6];
    puStack_198 = &uStack_190;
    uStack_190 = 0;
    uStack_188 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_190 = *(undefined8 *)puVar9[9];
      uStack_188 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_1e0 = uStack_1e0 & 0xffffffff;
      func_0x000109a84868(&uStack_1e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_1e0,param_4,0xffffffff);
  }
  puVar6 = &uStack_120;
  FUN_109a89cd4(puVar6,3,0xffffffff,1);
  auStack_2a0[0] = 0x80000000;
  auStack_2a0[1] = 0x7fffffff;
  uStack_300 = 0;
  iStack_2fc = 1;
  FUN_109a84930(&uStack_240,&uStack_1e0,auStack_2a0,&uStack_300);
  uStack_300 = 0x80000000;
  iStack_2fc = 0x7fffffff;
  uStack_c0 = 0x200000001;
  FUN_109a84930(auStack_2a0,&uStack_1e0,&uStack_300,&uStack_c0);
  uStack_300 = 0x42ff0000;
  puStack_2c0 = &uStack_2f8;
  uStack_2f4 = 0;
  uStack_2f0 = 0;
  iStack_2fc = 0;
  uStack_2f8 = 0;
  uStack_2e4 = 0;
  uStack_2e0 = 0;
  uStack_2ec = 0;
  uStack_2e8 = 0;
  uStack_2d4 = 0;
  uStack_2dc = 0;
  uStack_2d8 = 0;
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_c0._4_4_ = 2;
  puVar7 = &uStack_300;
  puStack_2b8 = &uStack_2b0;
  uStack_c0._0_4_ = (uint)puVar6;
  FUN_109a83fd0(puVar7,2,&uStack_c0,5);
  pfStack_b0 = (float *)0x0;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,0x1010000);
  puStack_b8 = &uStack_120;
  uStack_308 = 0;
  auStack_318[0] = 0x1010000;
  puStack_310 = &uStack_240;
  uStack_320 = 0;
  auStack_330[0] = 0x1010000;
  puStack_328 = auStack_2a0;
  lStack_340 = param_1 + 8;
  uStack_338 = 0;
  auStack_348[0] = 0x1010000;
  lStack_358 = param_1 + 0x68;
  uStack_350 = 0;
  auStack_360[0] = 0x1010000;
  auStack_378[0] = 0x2010000;
  puStack_370 = &uStack_300;
  uStack_368 = 0;
  FUN_109a91d90();
  FUN_109b8de28(0,&uStack_c0,auStack_318,auStack_330,auStack_348,auStack_360,auStack_378,puVar7);
  uVar5 = uStack_170;
  lVar12 = CONCAT44(uStack_2ec,uStack_2f0);
  puVar7 = param_5;
  FUN_109a8f64c(param_5,puVar6,1,5,0xffffffff,0,0);
  if ((*param_5 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_5 + 2);
    uStack_80 = (ulong)&uStack_c0 | 8;
    puStack_b8 = (undefined8 *)puVar9[1];
    uStack_c0 = *puVar9;
    uStack_a8 = puVar9[3];
    pfStack_b0 = (float *)puVar9[2];
    uStack_98 = puVar9[5];
    uStack_a0 = puVar9[4];
    uStack_88 = puVar9[7];
    uStack_90 = puVar9[6];
    puStack_78 = &uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_70 = *(undefined8 *)puVar9[9];
      uStack_68 = ((undefined8 *)puVar9[9])[1];
      param_5 = puVar7;
    }
    else {
      uStack_c0 = uStack_c0 & 0xffffffff;
      param_5 = (uint *)&uStack_c0;
      func_0x000109a84868(param_5);
    }
  }
  else {
    puVar9 = (ulong *)0xffffffff;
    FUN_109a8a180(&uStack_c0,param_5);
  }
  pfVar15 = pfStack_b0;
  iVar8 = (int)puVar9;
  if (uStack_88 != 0) {
    piVar1 = (int *)(uStack_88 + 0x14);
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
      param_5 = (uint *)&uStack_c0;
      func_0x000109a848d4(param_5);
    }
  }
  uStack_88 = 0;
  uStack_a8 = 0;
  pfStack_b0 = (float *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (0 < uStack_c0._4_4_) {
    lVar10 = 0;
    do {
      *(undefined4 *)(uStack_80 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < uStack_c0._4_4_);
  }
  if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
    param_5 = (uint *)puStack_78[-1];
    _free(param_5);
  }
  if (0 < (int)(uint)puVar6) {
    uVar11 = (ulong)puVar6 & 0xffffffff;
    pfVar13 = (float *)(lVar12 + 4);
    pfVar14 = (float *)(uVar5 + 4);
    do {
      *pfVar15 = SQRT((*pfVar14 - *pfVar13) * (*pfVar14 - *pfVar13) +
                      (pfVar14[-1] - pfVar13[-1]) * (pfVar14[-1] - pfVar13[-1]));
      pfVar13 = pfVar13 + 2;
      pfVar14 = pfVar14 + 2;
      uVar11 = uVar11 - 1;
      pfVar15 = pfVar15 + 1;
    } while (uVar11 != 0);
  }
  if (lStack_2c8 != 0) {
    piVar1 = (int *)(lStack_2c8 + 0x14);
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
      param_5 = &uStack_300;
      func_0x000109a848d4(param_5);
    }
  }
  lStack_2c8 = 0;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  if (0 < iStack_2fc) {
    lVar12 = 0;
    do {
      puStack_2c0[lVar12] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_2fc);
  }
  if (puStack_2b8 != &uStack_2b0 && puStack_2b8 != (undefined8 *)0x0) {
    param_5 = (uint *)puStack_2b8[-1];
    _free(param_5);
  }
  if (lStack_268 != 0) {
    piVar1 = (int *)(lStack_268 + 0x14);
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
      param_5 = auStack_2a0;
      func_0x000109a848d4(param_5);
    }
  }
  lStack_268 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  if (0 < (int)auStack_2a0[1]) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lStack_260 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)auStack_2a0[1]);
  }
  if (puStack_258 != auStack_250 && puStack_258 != (undefined1 *)0x0) {
    param_5 = *(uint **)(puStack_258 + -8);
    _free(param_5);
  }
  if (lStack_208 != 0) {
    piVar1 = (int *)(lStack_208 + 0x14);
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
      param_5 = &uStack_240;
      func_0x000109a848d4(param_5);
    }
  }
  lStack_208 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  if (0 < iStack_23c) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lStack_200 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_23c);
  }
  if (puStack_1f8 != auStack_1f0 && puStack_1f8 != (undefined1 *)0x0) {
    param_5 = *(uint **)(puStack_1f8 + -8);
    _free(param_5);
  }
  if (uStack_1a8 != 0) {
    piVar1 = (int *)(uStack_1a8 + 0x14);
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
      param_5 = (uint *)&uStack_1e0;
      func_0x000109a848d4(param_5);
    }
  }
  uStack_1a8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  if (0 < uStack_1e0._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_1a0 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_1e0._4_4_);
  }
  if (puStack_198 != &uStack_190 && puStack_198 != (undefined8 *)0x0) {
    param_5 = (uint *)puStack_198[-1];
    _free(param_5);
  }
  if (uStack_148 != 0) {
    piVar1 = (int *)(uStack_148 + 0x14);
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
      param_5 = (uint *)&uStack_180;
      func_0x000109a848d4(param_5);
    }
  }
  uStack_148 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  if (0 < uStack_180._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_140 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_180._4_4_);
  }
  if (puStack_138 != &uStack_130 && puStack_138 != (undefined8 *)0x0) {
    param_5 = (uint *)puStack_138[-1];
    _free(param_5);
  }
  if (uStack_e8 != 0) {
    piVar1 = (int *)(uStack_e8 + 0x14);
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
      param_5 = (uint *)&uStack_120;
      func_0x000109a848d4(param_5);
    }
  }
  uStack_e8 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (0 < uStack_120._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_e0 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_120._4_4_);
  }
  if (puStack_d8 != &uStack_d0 && puStack_d8 != (undefined8 *)0x0) {
    param_5 = (uint *)puStack_d8[-1];
    _free(param_5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) goto LAB_109ba8d18;
  func_0x000104bd46a0(param_5);
  func_0x00010567aa40(&uStack_300);
  func_0x00010567aa40(auStack_2a0);
  func_0x00010567aa40(&uStack_240);
  do {
    func_0x00010567aa40(&uStack_1e0);
    func_0x00010567aa40(&uStack_180);
    func_0x00010567aa40(&uStack_120);
LAB_109ba8d18:
    __Unwind_Resume(param_5);
  } while( true );
}



/* Entry: 109ba8d28; end: 109ba8d2f;  */

undefined8 FUN_109ba8d28(void)

{
  return 1;
}



/* Entry: 109ba8d30; end: 109ba8f53;  */

undefined8 * FUN_109ba8d30(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b29e08;
  if (param_1[0x2d] != 0) {
    piVar1 = (int *)(param_1[0x2d] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x26);
    }
  }
  param_1[0x2d] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  if (0 < *(int *)((long)param_1 + 0x134)) {
    lVar5 = 0;
    lVar7 = param_1[0x2e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x134));
  }
  puVar6 = (undefined8 *)param_1[0x2f];
  if (puVar6 != param_1 + 0x30 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x21] != 0) {
    piVar1 = (int *)(param_1[0x21] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1a);
    }
  }
  param_1[0x21] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  if (0 < *(int *)((long)param_1 + 0xd4)) {
    lVar5 = 0;
    lVar7 = param_1[0x22];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xd4));
  }
  puVar6 = (undefined8 *)param_1[0x23];
  if (puVar6 != param_1 + 0x24 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
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
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109ba8f54; end: 109ba8f5b;  */

void FUN_109ba8f54(void)

{
  return;
}



/* Entry: 109ba8f5c; end: 109ba8f97;  */

void FUN_109ba8f5c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109ba8f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109ba8f98; end: 109ba8fef;  */

undefined8 * FUN_109ba8f98(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[4];
  for (puVar2 = (undefined8 *)param_1[3]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    _free(*puVar2);
  }
  _free(*param_1);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109ba8ff0; end: 109ba905b;  */

long FUN_109ba8ff0(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *plVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long *unaff_x19;
  ulong unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar2 = (undefined1 *)register0x00000008;
  while( true ) {
    uVar8 = param_2;
    plVar6 = param_1;
    *(ulong *)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    puVar7 = puVar2 + -0x28;
    _posix_memalign(puVar7,0x40,uVar8);
    lVar10 = *(long *)(puVar2 + -0x28);
    if ((int)puVar7 != 0) {
      lVar10 = 0;
    }
    *(long *)(puVar2 + -0x28) = lVar10;
    if (lVar10 != 0) break;
    FUN_109ba905c();
    puVar3 = puVar2 + -0x40;
    puVar4 = puVar2 + -0x40;
    puVar5 = puVar2 + -0x40;
    *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
    *(code **)(puVar2 + -0x38) = FUN_109ba905c;
    param_1 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    unaff_x30 = FUN_109ba9084;
    puVar9 = PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    if (puVar9 == (undefined *)0x0) {
      return 0;
    }
    param_2 = (ulong)(puVar9 + 0x3f) & 0xffffffffffffffc0;
    lVar1 = param_1[1];
    lVar10 = lVar1 + param_2;
    puVar2 = puVar2 + -0x40;
    unaff_x19 = plVar6;
    unaff_x20 = uVar8;
    unaff_x29 = puVar4;
    if (lVar10 <= param_1[2]) {
      param_1[1] = lVar10;
      puVar2 = puVar3;
      unaff_x29 = puVar5;
      if (*param_1 != 0) {
        return *param_1 + lVar1;
      }
    }
  }
  plVar6[6] = plVar6[6] + uVar8;
  FUN_109ac41b8(plVar6 + 3,puVar2 + -0x28);
  return *(long *)(puVar2 + -0x28);
}



/* Entry: 109ba905c; end: 109ba9083;  */

long FUN_109ba905c(void)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x19;
  ulong unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    plVar3 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar4 = PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    if (puVar4 == (undefined *)0x0) {
      return 0;
    }
    uVar5 = (ulong)(puVar4 + 0x3f) & 0xffffffffffffffc0;
    lVar1 = plVar3[1];
    lVar6 = lVar1 + uVar5;
    if (lVar6 <= plVar3[2]) {
      plVar3[1] = lVar6;
      if (*plVar3 != 0) {
        return *plVar3 + lVar1;
      }
    }
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) = FUN_109ba9084;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x20);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x38);
    _posix_memalign(puVar2,0x40,uVar5);
    lVar6 = *(long *)((long)register0x00000008 + -0x38);
    if ((int)puVar2 != 0) {
      lVar6 = 0;
    }
    *(long *)((long)register0x00000008 + -0x38) = lVar6;
    if (lVar6 != 0) break;
    unaff_x30 = FUN_109ba905c;
    FUN_109ba905c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x19 = plVar3;
    unaff_x20 = uVar5;
  }
  plVar3[6] = plVar3[6] + uVar5;
  FUN_109ac41b8(plVar3 + 3,(undefined1 *)((long)register0x00000008 + -0x38));
  return *(long *)((long)register0x00000008 + -0x38);
}



/* Entry: 109ba9084; end: 109ba90bf;  */

long FUN_109ba9084(long *param_1,undefined *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  ulong unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar3 = param_1;
    if (param_2 == (undefined *)0x0) {
      return 0;
    }
    uVar4 = (ulong)(param_2 + 0x3f) & 0xffffffffffffffc0;
    lVar1 = plVar3[1];
    lVar5 = lVar1 + uVar4;
    if (lVar5 <= plVar3[2]) {
      plVar3[1] = lVar5;
      if (*plVar3 != 0) {
        return *plVar3 + lVar1;
      }
    }
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x28);
    _posix_memalign(puVar2,0x40,uVar4);
    lVar5 = *(long *)((long)register0x00000008 + -0x28);
    if ((int)puVar2 != 0) {
      lVar5 = 0;
    }
    *(long *)((long)register0x00000008 + -0x28) = lVar5;
    if (lVar5 != 0) break;
    FUN_109ba905c();
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) = FUN_109ba905c;
    param_1 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    unaff_x30 = FUN_109ba9084;
    param_2 = PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x19 = plVar3;
    unaff_x20 = uVar4;
  }
  plVar3[6] = plVar3[6] + uVar4;
  FUN_109ac41b8(plVar3 + 3,(undefined1 *)((long)register0x00000008 + -0x28));
  return *(long *)((long)register0x00000008 + -0x28);
}



/* Entry: 109ba90c0; end: 109ba9197;  */

void FUN_109ba90c0(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lStack_48;
  undefined8 *puVar6;
  
  param_1[1] = 0;
  puVar1 = (undefined8 *)param_1[4];
  if ((undefined8 *)param_1[3] != puVar1) {
    lVar8 = param_1[2];
    lVar9 = param_1[6];
    puVar5 = (undefined8 *)param_1[3];
    do {
      puVar6 = puVar5 + 1;
      _free(*puVar5);
      puVar5 = puVar6;
    } while (puVar6 != puVar1);
    uVar7 = lVar9 + lVar8;
    param_1[4] = param_1[3];
    _free(*param_1);
    plVar4 = &lStack_48;
    _posix_memalign(plVar4,0x40,uVar7);
    lVar8 = lStack_48;
    if ((int)plVar4 != 0) {
      lVar8 = 0;
    }
    *param_1 = lVar8;
    uVar2 = uVar7;
    if (0 < (long)uVar7) {
      do {
        uVar7 = uVar2;
        if (lVar8 != 0) break;
        uVar7 = uVar2 >> 1;
        plVar4 = &lStack_48;
        _posix_memalign(plVar4,0x40,uVar7);
        lVar8 = lStack_48;
        if ((int)plVar4 != 0) {
          lVar8 = 0;
        }
        *param_1 = lVar8;
        bVar3 = 1 < uVar2;
        uVar2 = uVar7;
      } while (bVar3);
    }
    param_1[2] = uVar7;
    param_1[6] = 0;
  }
  return;
}



/* Entry: 109ba9198; end: 109ba932f;  */

void FUN_109ba9198(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint auStack_48 [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar9 = (uint)param_2;
  uVar8 = uVar9 & (-1 << (ulong)(uVar4 << 1 & 0x1f) ^ 0xffffffffU);
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 == 3) {
    if ((int)uVar4 < 1) {
      auStack_48[0] = 0;
      auStack_48[1] = 0;
    }
    else {
      auStack_48[1] = 0;
      auStack_48[0] = 0;
      uVar11 = 0;
      do {
        uVar6 = 1 << (ulong)(uVar11 & 0x1f);
        bVar7 = (uVar8 & 2) != 0;
        uVar2 = auStack_48[1];
        if (bVar7) {
          uVar2 = uVar6 + ~auStack_48[1];
        }
        uVar3 = auStack_48[0];
        if (bVar7) {
          uVar3 = uVar6 + ~auStack_48[0];
        }
        param_2 = (uint *)(ulong)uVar3;
        bVar7 = (uVar8 & 1) != (uVar8 & 2) >> 1;
        if (bVar7) {
          uVar3 = auStack_48[1];
        }
        uVar1 = uVar6 + auStack_48[0];
        auStack_48[0] = uVar2;
        if (bVar7) {
          auStack_48[0] = uVar1;
        }
        auStack_48[1] = uVar3 + (uVar6 & (int)(uVar8 << 0x1e) >> 0x1f);
        uVar8 = uVar8 >> 2;
        uVar11 = uVar11 + 1;
      } while (uVar4 != uVar11);
    }
  }
  else if (iVar5 == 2) {
    param_2 = auStack_48;
    FUN_109ba9330();
    auStack_48[0] = auStack_48[0] ^ auStack_48[1];
  }
  else if (iVar5 == 1) {
    param_2 = auStack_48;
    FUN_109ba9330();
  }
  else {
    auStack_48[0] = uVar8 & (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
    auStack_48[1] = uVar8 >> (ulong)(uVar4 & 0x1f);
  }
  lVar10 = 0;
  auStack_48[2] = 0;
  auStack_48[3] = 1;
  do {
    lVar12 = (long)*(int *)((long)auStack_48 + lVar10 + 8);
    *(uint *)(param_3 + lVar12 * 4) =
         ((uVar9 >> (ulong)(uVar4 << 1 & 0x1f) &
          (-1 << (ulong)(*(uint *)(param_1 + 0x14 + lVar12 * 4) & 0x1f) ^ 0xffffffffU)) <<
         (ulong)(*(uint *)(param_1 + 0x10) & 0x1f)) + auStack_48[lVar12];
    lVar10 = lVar10 + 4;
  } while (lVar10 != 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    uVar4 = uVar8 >> 1 & 0x22222222 | uVar8 & 0x99999999;
    uVar8 = uVar4 | (uVar8 & 0x22222222) << 1;
    uVar4 = uVar8 & 0xc3c3c3c3 | uVar4 >> 2 & 0xc0c0c0c;
    uVar8 = uVar4 | (uVar8 & 0xc0c0c0c) << 2;
    uVar4 = uVar8 & 0xf00ff00f | uVar4 >> 4 & 0xf000f0;
    uVar8 = uVar4 | (uVar8 & 0xf000f0) << 4;
    *param_2 = uVar4 & 0xff | (uVar4 >> 0x10 & 0xff) << 8;
    param_2[1] = (uVar8 & 0xff000000 | (uVar8 & 0xffff) << 8) >> 0x10;
    return;
  }
  return;
}



/* Entry: 109ba9330; end: 109ba93a3;  */

void FUN_109ba9330(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 >> 1 & 0x22222222 | param_1 & 0x99999999;
  uVar2 = uVar1 | (param_1 & 0x22222222) << 1;
  uVar1 = uVar2 & 0xc3c3c3c3 | uVar1 >> 2 & 0xc0c0c0c;
  uVar2 = uVar1 | (uVar2 & 0xc0c0c0c) << 2;
  uVar1 = uVar2 & 0xf00ff00f | uVar1 >> 4 & 0xf000f0;
  uVar2 = uVar1 | (uVar2 & 0xf000f0) << 4;
  *param_2 = uVar1 & 0xff | (uVar1 >> 0x10 & 0xff) << 8;
  param_2[1] = (uVar2 & 0xff000000 | (uVar2 & 0xffff) << 8) >> 0x10;
  return;
}



/* Entry: 109ba93a4; end: 109ba970b;  */

void FUN_109ba93a4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int *param_9,int *param_10)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint auStack_68 [2];
  
  auStack_68[0] = 0;
  auStack_68[1] = 0;
  if (param_2 < param_1) {
    puVar8 = auStack_68 + 1;
    iVar13 = param_2;
    iVar11 = param_5;
    iVar9 = param_1;
    iVar10 = param_4;
  }
  else {
    if (param_2 <= param_1) goto LAB_109ba945c;
    puVar8 = auStack_68;
    iVar13 = param_1;
    iVar11 = param_4;
    iVar9 = param_2;
    iVar10 = param_5;
  }
  uVar16 = (uint)LZCOUNT(iVar9);
  iVar14 = (int)LZCOUNT(iVar13 + -1);
  uVar12 = iVar14 + ~uVar16;
  if (iVar13 << (ulong)(iVar14 - uVar16 & 0x1f) <= iVar9) {
    uVar12 = iVar14 - uVar16;
  }
  iVar14 = (int)LZCOUNT(iVar11) - iVar14;
  if (1 < iVar14) {
    iVar14 = 2;
  }
  uVar16 = (((int)LZCOUNT(iVar10) - uVar16) + iVar14) - 2;
  uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
  if ((int)uVar12 <= (int)uVar16) {
    uVar16 = uVar12;
  }
  *puVar8 = uVar16;
LAB_109ba945c:
  uVar16 = 0x1f - (uint)LZCOUNT(param_4);
  uVar3 = 0x1f - (uint)LZCOUNT(param_5);
  uVar12 = uVar3;
  if ((int)uVar3 <= (int)uVar16) {
    uVar12 = uVar16;
  }
  iVar13 = param_1;
  if (param_2 <= param_1) {
    iVar13 = param_2;
  }
  uVar4 = 0x1f - (int)LZCOUNT(iVar13);
  uVar2 = uVar12;
  if ((int)uVar12 <= (int)uVar4) {
    uVar2 = uVar4;
  }
  uVar4 = uVar12 + 6;
  if ((int)uVar2 <= (int)(uVar12 + 6)) {
    uVar4 = uVar2;
  }
  uVar5 = 0x20 - (int)LZCOUNT(param_8 + -1);
  iVar13 = 0x1f - (int)LZCOUNT(*param_9);
  uVar17 = 0xffffffff;
  iVar11 = -0x80000000;
  do {
    iVar9 = (param_2 >> (uVar12 & 0x1f)) * (param_1 >> (uVar12 & 0x1f));
    if (iVar9 < 2) {
      iVar9 = 1;
    }
    if (param_8 == 1) {
      iVar9 = 0;
    }
    else {
      uVar6 = (uint)LZCOUNT(iVar9) ^ 0x1f;
      uVar7 = uVar6 - uVar5;
      if ((int)uVar7 < 0) {
        iVar9 = -0x40;
      }
      else {
        iVar10 = 0x10;
        if (uVar7 < 4) {
          iVar10 = uVar7 * 8 + -0x10;
        }
        iVar9 = -0x10;
        if (uVar6 != uVar5) {
          iVar9 = iVar10;
        }
      }
    }
    iVar14 = 1 << (ulong)(uVar12 & 0x1f);
    iVar10 = iVar14;
    if (param_1 <= iVar14) {
      iVar10 = param_1;
    }
    if (param_2 <= iVar14) {
      iVar14 = param_2;
    }
    if ((int)(0x80000000U >> (ulong)((uint)LZCOUNT(param_4) & 0x1f)) < param_1 &&
        (int)(0x80000000U >> (ulong)((uint)LZCOUNT(param_5) & 0x1f)) < param_2) {
      iVar15 = 0x20 - (int)LZCOUNT(iVar10 * param_6 * param_3 + iVar14 * param_7 * param_3 + -1);
      uVar6 = iVar15 - iVar13;
      if ((int)uVar6 < -1) {
        iVar15 = 0x40;
      }
      else if (uVar6 == 0xffffffff) {
        iVar15 = 0x38;
      }
      else if (iVar15 == iVar13) {
        iVar15 = 0x30;
      }
      else if (uVar6 < 4) {
        iVar15 = uVar6 * -0x10 + 0x30;
      }
      else {
        iVar15 = -0x40;
      }
    }
    else {
      iVar15 = 0;
    }
    uVar6 = 0x1f - (int)LZCOUNT(iVar14 * iVar10);
    if (uVar6 == uVar3 + uVar16) {
      iVar10 = 0;
    }
    else {
      uVar6 = uVar6 + ~(uVar3 + uVar16);
      if (uVar6 < 7) {
        iVar10 = uVar6 * 8 + 8;
      }
      else {
        iVar10 = 0x40;
      }
    }
    iVar10 = iVar15 + iVar9 + iVar10;
    if (iVar11 <= iVar10) {
      uVar17 = uVar12;
    }
    if (iVar10 <= iVar11) {
      iVar10 = iVar11;
    }
    bVar1 = (int)uVar12 < (int)uVar4;
    uVar12 = uVar12 + 1;
    iVar11 = iVar10;
  } while (bVar1);
  iVar11 = uVar2 - uVar17;
  uVar12 = param_1 >> (auStack_68[1] + iVar11 & 0x1f) & -param_4;
  uVar2 = param_2 >> (auStack_68[0] + iVar11 & 0x1f) & -param_5;
  param_10[2] = param_1;
  param_10[3] = param_2;
  param_10[4] = iVar11;
  param_10[5] = auStack_68[1];
  param_10[6] = auStack_68[0];
  param_10[7] = param_4;
  param_10[8] = param_5;
  param_10[9] = uVar12;
  param_10[10] = uVar2;
  param_10[0xb] =
       (int)(-param_4 &
            ((uVar12 << (ulong)(auStack_68[1] + iVar11 & 0x1f)) - (param_4 + param_1) ^ 0xffffffff))
       >> (uVar16 & 0x1f);
  param_10[0xc] =
       (int)(-param_5 &
            ((uVar2 << (ulong)(auStack_68[0] + iVar11 & 0x1f)) - (param_5 + param_2) ^ 0xffffffff))
       >> (uVar3 & 0x1f);
  param_3 = ((param_1 >> (auStack_68[1] & 0x1f)) * param_6 +
            (param_2 >> (auStack_68[0] & 0x1f)) * param_7) * param_3;
  iVar13 = 2;
  if (param_9[1] < param_3) {
    iVar13 = 3;
  }
  if (param_3 <= *param_9) {
    iVar13 = 0;
  }
  iVar11 = 1 << (ulong)(auStack_68[1] + iVar11 * 2 + auStack_68[0] & 0x1f);
  if (param_8 <= iVar11) {
    iVar11 = param_8;
  }
  *param_10 = iVar11;
  param_10[1] = iVar13;
  return;
}



/* Entry: 109ba970c; end: 109ba97cb;  */

byte * FUN_109ba970c(byte *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  int iVar7;
  int aiStack_20 [2];
  long lStack_18;
  
  lVar4 = 0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aiStack_20[0] = 0;
  aiStack_20[1] = 1;
  do {
    lVar6 = (long)*(int *)((long)aiStack_20 + lVar4);
    iVar7 = *(int *)(param_2 + lVar6 * 4);
    iVar1 = *(int *)(param_1 + lVar6 * 4 + 0x2c);
    if (iVar7 <= *(int *)(param_1 + lVar6 * 4 + 0x2c)) {
      iVar1 = iVar7;
    }
    iVar1 = *(int *)(param_1 + lVar6 * 4 + 0x24) * iVar7 +
            iVar1 * *(int *)(param_1 + lVar6 * 4 + 0x1c);
    *(int *)(param_3 + lVar6 * 4) = iVar1;
    if (iVar7 < *(int *)(param_1 + lVar6 * 4 + 0x2c)) {
      iVar7 = *(int *)(param_1 + lVar6 * 4 + 0x1c);
    }
    else {
      iVar7 = 0;
    }
    *(int *)(param_4 + lVar6 * 4) = iVar1 + *(int *)(param_1 + lVar6 * 4 + 0x24) + iVar7;
    lVar4 = lVar4 + 4;
  } while (lVar4 != 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    __ZNSt3__15mutex4lockEv(param_1 + 0x38);
    pbVar5 = param_1 + 4;
    if ((*param_1 & 1) == 0) {
      do {
        iVar1 = *(int *)pbVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pbVar5,0x10);
        if (bVar3) {
          *(int *)pbVar5 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__15mutex6unlockEv(param_1 + 0x38);
      if (iVar1 != 1) {
        return (byte *)0x0;
      }
    }
    else {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      __ZNSt3__15mutex6unlockEv(param_1 + 0x38);
    }
    __ZNSt3__118condition_variable10notify_allEv(param_1 + 8);
    return (byte *)0x1;
  }
  return param_1;
}



/* Entry: 109ba97cc; end: 109ba983f;  */

undefined8 FUN_109ba97cc(byte *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  pbVar4 = param_1 + 4;
  if ((*param_1 & 1) == 0) {
    do {
      iVar1 = *(int *)pbVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
      if (bVar3) {
        *(int *)pbVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    __ZNSt3__15mutex6unlockEv(param_1 + 0x38);
    if (iVar1 != 1) {
      return 0;
    }
  }
  else {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x38);
  }
  __ZNSt3__118condition_variable10notify_allEv(param_1 + 8);
  return 1;
}



/* Entry: 109ba9840; end: 109ba991b;  */

void FUN_109ba9840(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lStack_50;
  char cStack_48;
  undefined7 uStack_47;
  
  if (*(int *)(param_1 + 4) != 0) {
    if (0 < param_2) {
      _clock_gettime(4,&lStack_50);
      lVar1 = lStack_50;
      lVar2 = CONCAT71(uStack_47,cStack_48);
      do {
        if (*(int *)(param_1 + 4) == 0) {
          return;
        }
        Yield();
        _clock_gettime(4,&lStack_50);
      } while ((CONCAT71(uStack_47,cStack_48) - lVar2) + (lStack_50 - lVar1) * 1000000000 < param_2)
      ;
    }
    lVar2 = param_1 + 0x38;
    cStack_48 = '\x01';
    lStack_50 = lVar2;
    __ZNSt3__15mutex4lockEv(lVar2);
    if (*(int *)(param_1 + 4) != 0) {
      do {
        __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1 + 8,&lStack_50);
      } while (*(int *)(param_1 + 4) != 0);
      lVar2 = lStack_50;
      if (cStack_48 != '\x01') {
        return;
      }
    }
    __ZNSt3__15mutex6unlockEv(lVar2);
  }
  return;
}



/* Entry: 109ba991c; end: 109ba99b3;  */

undefined8 * FUN_109ba991c(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0xb0;
  __Znwm();
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  FUN_109babfac(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x28) = 0;
  *(undefined4 *)(puVar1 + 0x30) = 1;
  puVar1[0x34] = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  puVar1[0x48] = 0;
  *(undefined8 *)(puVar1 + 0x54) = 0;
  *(undefined8 *)(puVar1 + 0x4c) = 0;
  *(undefined8 *)(puVar1 + 100) = 0;
  *(undefined8 *)(puVar1 + 0x5c) = 0;
  *(undefined4 *)(puVar1 + 0x6c) = 0;
  *(undefined8 *)(puVar1 + 0x70) = 0x32aaaba7;
  *(undefined8 *)(puVar1 + 0x80) = 0;
  *(undefined8 *)(puVar1 + 0x78) = 0;
  *(undefined8 *)(puVar1 + 0x90) = 0;
  *(undefined8 *)(puVar1 + 0x88) = 0;
  *(undefined8 *)(puVar1 + 0xa0) = 0;
  *(undefined8 *)(puVar1 + 0x98) = 0;
  *(undefined8 *)(puVar1 + 0xa8) = 0;
  *param_1 = puVar1;
  return param_1;
}



/* Entry: 109ba99b4; end: 109ba9a2b;  */

long * FUN_109ba99b4(long *param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    __ZNSt3__15mutexD1Ev(lVar1 + 0x70);
    lStack_28 = lVar1 + 0x58;
    FUN_109ba9a7c(&lStack_28);
    FUN_109ba9a2c(lVar1 + 0x40,0);
    func_0x000109ba9a54(lVar1 + 0x38,0);
    FUN_109bac36c(lVar1 + 0x20);
    FUN_109bac420(lVar1 + 0x10);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109ba9a2c; end: 109ba9a7b;  */

void FUN_109ba9a2c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_109baaeac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109ba9a7c; end: 109ba9aef;  */

void FUN_109ba9a7c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -8;
        FUN_109ba9af0(lVar2,0);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109ba9af0; end: 109ba9d67;  */

void FUN_109ba9af0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_109ba8f98(lVar1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109ba9d68; end: 109ba9f0f;  */

undefined ****** FUN_109ba9d68(undefined ******param_1,int param_2)

{
  ulong uVar1;
  undefined *****pppppuVar2;
  undefined *****pppppuVar3;
  undefined *puVar4;
  int *piVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  int *piVar15;
  undefined ******ppppppuVar16;
  undefined ******ppppppuVar17;
  undefined *****pppppuVar18;
  undefined *****pppppuVar19;
  undefined ****ppppuStack_f8;
  undefined ****ppppuStack_f0;
  undefined ****ppppuStack_e8;
  undefined ****ppppuStack_e0;
  undefined *****pppppuStack_d8;
  undefined ****ppppuStack_68;
  int *piStack_60;
  undefined *****pppppuStack_50;
  undefined *****apppppuStack_48 [2];
  char cStack_31;
  undefined *****pppppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = (uint)*(byte *)(param_1 + 9);
  ppppppuVar7 = param_1;
  if (*(byte *)(param_1 + 9) == 0) {
    puVar4 = &UNK_10f5a3132;
    _getenv();
    if (puVar4 == (undefined *)0x0) {
LAB_109ba9ddc:
      piVar15 = (int *)((long)param_1 + 0x4c);
      pppppuStack_30 = (undefined *****)apppppuStack_48;
      ppppuStack_68 = (undefined ****)&PTR_DAT_110b29f18;
      piStack_60 = piVar15;
      pppppuStack_50 = &ppppuStack_68;
      apppppuStack_48[0] = (undefined *****)&PTR_FUN_110b29e98;
      if (*piVar15 == 0) {
        piVar5 = piVar15;
        func_0x000109ba9b2c();
        *piVar15 = (int)piVar5;
        bVar14 = (int)piVar5 == 1 & bRam00000001132e8fce;
        if (pppppuStack_50 == &ppppuStack_68) goto LAB_109ba9e24;
        ppppppuVar7 = (undefined ******)pppppuStack_50;
        if ((undefined ******)pppppuStack_50 != (undefined ******)0x0) {
          lVar11 = 0x28;
          goto LAB_109ba9e28;
        }
      }
      else {
        bVar14 = *piVar15 == 1 & bRam00000001132e8fce;
LAB_109ba9e24:
        lVar11 = 0x20;
LAB_109ba9e28:
        ppppppuVar7 = (undefined ******)pppppuStack_50;
        (**(code **)((long)*pppppuStack_50 + lVar11))();
      }
      uVar9 = 0x3f;
      if (bVar14 == 0) {
        uVar9 = 0x1f;
      }
      ppppppuVar16 = (undefined ******)(ulong)uVar9;
    }
    else {
      func_0x000107c31940(apppppuStack_48,puVar4);
      ppppppuVar16 = apppppuStack_48;
      param_2 = 0;
      __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                (ppppppuVar16,0,0x10);
      ppppppuVar7 = ppppppuVar16;
      if (cStack_31 < '\0') {
        ppppppuVar7 = (undefined ******)apppppuStack_48[0];
        __ZdlPv();
      }
      if (((ulong)ppppppuVar16 & 0xff) == 0) goto LAB_109ba9ddc;
    }
    uVar9 = (uint)ppppppuVar16;
    *(char *)(param_1 + 9) = (char)ppppppuVar16;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined ******)(ulong)(uVar9 & 0xff);
  }
  ___stack_chk_fail();
  if (pppppuStack_50 == &ppppuStack_68) {
    lVar11 = 0x20;
  }
  else {
    if ((undefined ******)pppppuStack_50 == (undefined ******)0x0) goto LAB_109ba9f08;
    lVar11 = 0x28;
  }
  (**(code **)((long)*pppppuStack_50 + lVar11))();
LAB_109ba9f08:
  __Unwind_Resume();
  ppppppuVar17 = ppppppuVar7 + 0xb;
  pppppuVar18 = *ppppppuVar17;
  iVar10 = (int)((ulong)((long)ppppppuVar7[0xc] - (long)pppppuVar18) >> 3);
  pppppuVar3 = ppppppuVar7[0xc];
  ppppppuVar16 = ppppppuVar7;
  do {
    if (param_2 <= iVar10) {
      return ppppppuVar16;
    }
    ppppppuVar16 = (undefined ******)0x50;
    __Znwm();
    *ppppppuVar16 = (undefined *****)0x0;
    ppppppuVar16[1] = (undefined *****)0x0;
    ppppppuVar16[2] = (undefined *****)0xee6b280;
    ppppppuVar16[4] = (undefined *****)0x0;
    ppppppuVar16[3] = (undefined *****)0x0;
    ppppppuVar16[6] = (undefined *****)0x0;
    ppppppuVar16[5] = (undefined *****)0x0;
    ppppppuVar16[8] = (undefined *****)0x0;
    ppppppuVar16[7] = (undefined *****)0x0;
    ppppppuVar16[9] = (undefined *****)0x0;
    if (pppppuVar3 < ppppppuVar7[0xd]) {
      pppppuVar19 = pppppuVar3 + 1;
      *pppppuVar3 = (undefined ****)ppppppuVar16;
    }
    else {
      uVar1 = ((long)pppppuVar3 - (long)pppppuVar18 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_109baa270();
        ppppppuVar16 = ppppppuVar16 + 7;
        ppppppuVar7 = (undefined ******)*ppppppuVar16;
        if (ppppppuVar7 == (undefined ******)0x0) {
          puVar8 = (undefined8 *)0x38;
          __Znwm();
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
          puVar8[5] = 0;
          puVar8[4] = 0;
          puVar8[6] = 0;
          func_0x000109ba9a54(ppppppuVar16,puVar8);
          ppppppuVar7 = (undefined ******)*ppppppuVar16;
        }
        return ppppppuVar7;
      }
      uVar12 = (long)ppppppuVar7[0xd] - (long)pppppuVar18;
      uVar13 = (long)uVar12 >> 2;
      if (uVar13 <= uVar1) {
        uVar13 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar12) {
        uVar13 = 0x1fffffffffffffff;
      }
      ppppppuVar6 = ppppppuVar17;
      pppppuStack_d8 = (undefined *****)ppppppuVar17;
      FUN_109baa284();
      pppppuVar2 = ppppppuVar7[0xb];
      puVar8 = (undefined8 *)((long)ppppppuVar6 + ((long)pppppuVar3 - (long)pppppuVar18));
      pppppuVar18 = (undefined *****)((long)puVar8 - ((long)ppppppuVar7[0xc] - (long)pppppuVar2));
      pppppuVar19 = (undefined *****)(puVar8 + 1);
      *puVar8 = ppppppuVar16;
      _memcpy(pppppuVar18,pppppuVar2);
      ppppuStack_f8 = (undefined ****)ppppppuVar7[0xb];
      ppppppuVar7[0xb] = pppppuVar18;
      ppppppuVar7[0xc] = pppppuVar19;
      ppppuStack_e0 = (undefined ****)ppppppuVar7[0xd];
      ppppppuVar7[0xd] = (undefined *****)(ppppppuVar6 + uVar13);
      ppppppuVar16 = (undefined ******)&ppppuStack_f8;
      ppppuStack_f0 = ppppuStack_f8;
      ppppuStack_e8 = ppppuStack_f8;
      func_0x000109baa2b8(ppppppuVar16);
      pppppuVar18 = ppppppuVar7[0xb];
    }
    ppppppuVar7[0xc] = pppppuVar19;
    iVar10 = (int)((ulong)((long)pppppuVar19 - (long)pppppuVar18) >> 3);
    pppppuVar3 = pppppuVar19;
  } while( true );
}



/* Entry: 109ba9f10; end: 109baa053;  */

undefined8 * FUN_109ba9f10(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  plVar9 = param_1 + 0xb;
  lVar10 = *plVar9;
  iVar6 = (int)((ulong)((long)param_1[0xc] - lVar10) >> 3);
  puVar2 = (undefined8 *)param_1[0xc];
  puVar4 = param_1;
  do {
    if (param_2 <= iVar6) {
      return puVar4;
    }
    puVar4 = (undefined8 *)0x50;
    __Znwm();
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 250000000;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[6] = 0;
    puVar4[5] = 0;
    puVar4[8] = 0;
    puVar4[7] = 0;
    puVar4[9] = 0;
    if (puVar2 < (undefined8 *)param_1[0xd]) {
      puVar11 = puVar2 + 1;
      *puVar2 = puVar4;
    }
    else {
      uVar1 = ((long)puVar2 - lVar10 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_109baa270();
        plVar9 = puVar4 + 7;
        puVar4 = (undefined8 *)*plVar9;
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)0x38;
          __Znwm();
          puVar4[1] = 0;
          *puVar4 = 0;
          puVar4[3] = 0;
          puVar4[2] = 0;
          puVar4[5] = 0;
          puVar4[4] = 0;
          puVar4[6] = 0;
          func_0x000109ba9a54(plVar9,puVar4);
          puVar4 = (undefined8 *)*plVar9;
        }
        return puVar4;
      }
      uVar7 = (long)param_1[0xd] - lVar10;
      uVar8 = (long)uVar7 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar8 = 0x1fffffffffffffff;
      }
      plVar5 = plVar9;
      plStack_68 = plVar9;
      FUN_109baa284();
      lVar3 = param_1[0xb];
      puVar2 = (undefined8 *)((long)plVar5 + ((long)puVar2 - lVar10));
      lVar10 = (long)puVar2 - (param_1[0xc] - lVar3);
      puVar11 = puVar2 + 1;
      *puVar2 = puVar4;
      _memcpy(lVar10,lVar3);
      uStack_88 = param_1[0xb];
      param_1[0xb] = lVar10;
      param_1[0xc] = puVar11;
      uStack_70 = param_1[0xd];
      param_1[0xd] = plVar5 + uVar8;
      puVar4 = &uStack_88;
      uStack_80 = uStack_88;
      uStack_78 = uStack_88;
      func_0x000109baa2b8(puVar4);
      lVar10 = param_1[0xb];
    }
    param_1[0xc] = puVar11;
    iVar6 = (int)((ulong)((long)puVar11 - lVar10) >> 3);
    puVar2 = puVar11;
  } while( true );
}



/* Entry: 109baa054; end: 109baa0f7;  */

long FUN_109baa054(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x38);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[6] = 0;
    func_0x000109ba9a54(plVar3,puVar2);
    lVar1 = *plVar3;
  }
  return lVar1;
}



/* Entry: 109baa0f8; end: 109baa0ff;  */

void FUN_109baa0f8(void)

{
  return;
}



/* Entry: 109baa100; end: 109baa123;  */

void FUN_109baa100(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110b29e98;
  return;
}



/* Entry: 109baa124; end: 109baa143;  */

void FUN_109baa124(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110b29e98;
  return;
}



/* Entry: 109baa144; end: 109baa17f;  */

long FUN_109baa144(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b29ef8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109baa180; end: 109baa193;  */

undefined ** FUN_109baa180(void)

{
  return &PTR_DAT_110b29ef8;
}



/* Entry: 109baa194; end: 109baa1c7;  */

void FUN_109baa194(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110b29f18;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109baa1c8; end: 109baa1e3;  */

void FUN_109baa1c8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110b29f18;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109baa1e4; end: 109baa263;  */

byte FUN_109baa1e4(long param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 8);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    piVar2 = piVar3;
    func_0x000109ba9b2c();
    iVar1 = (int)piVar2;
    *piVar3 = iVar1;
  }
  return iVar1 == 1 & bRam00000001132e8fce;
}



/* Entry: 109baa264; end: 109baa26f;  */

undefined ** FUN_109baa264(void)

{
  return &PTR_DAT_110b29f78;
}



/* Entry: 109baa270; end: 109baa283;  */

undefined1  [16] FUN_109baa270(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f5a313c;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -8;
    param_2 = 0;
    FUN_109ba9af0(lVar3 + -8,0);
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 109baa284; end: 109baa33f;  */

undefined1  [16] FUN_109baa284(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -8;
    param_2 = 0;
    FUN_109ba9af0(lVar2 + -8,0);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109baa340; end: 109baaeab;  */

void FUN_109baa340(long *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  long lVar44;
  uint uVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  ulong uVar48;
  int iVar49;
  uint uVar50;
  ulong uVar51;
  undefined8 *puVar52;
  undefined8 *puVar53;
  undefined8 *puVar54;
  uint uVar55;
  uint uVar56;
  undefined8 *puVar57;
  undefined8 *puVar58;
  undefined8 *puVar59;
  undefined8 *puVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar71;
  undefined8 uVar70;
  float fVar72;
  float fVar74;
  undefined8 uVar73;
  float fVar75;
  float fVar77;
  undefined8 uVar76;
  float fVar78;
  float fVar80;
  undefined8 uVar79;
  float fVar81;
  float fVar83;
  undefined8 uVar82;
  float fVar84;
  float fVar86;
  undefined8 uVar85;
  float fVar87;
  float fVar89;
  undefined8 uVar88;
  float fVar90;
  float fVar92;
  undefined8 uVar91;
  float fVar93;
  float fVar95;
  undefined8 uVar94;
  float fVar96;
  float fVar98;
  undefined8 uVar97;
  float fVar99;
  float fVar101;
  undefined8 uVar100;
  float fVar102;
  float fVar104;
  undefined8 uVar103;
  float fVar105;
  float fVar107;
  undefined8 uVar106;
  float fVar108;
  float fVar110;
  undefined8 uVar109;
  float fVar111;
  float fVar113;
  undefined8 uVar112;
  float fVar114;
  float fVar116;
  undefined8 uVar115;
  float fVar117;
  float fVar119;
  undefined8 uVar118;
  float fVar120;
  float fVar122;
  undefined8 uVar121;
  float fVar123;
  float fVar125;
  undefined8 uVar124;
  float fVar126;
  float fVar128;
  undefined8 uVar127;
  float fVar129;
  float fVar131;
  undefined8 uVar130;
  float fVar132;
  float fVar134;
  undefined8 uVar133;
  float fVar135;
  float fVar137;
  undefined8 uVar136;
  float fVar138;
  float fVar140;
  undefined8 uVar139;
  float fVar141;
  float fVar143;
  undefined8 uVar142;
  float fVar144;
  float fVar146;
  undefined8 uVar145;
  undefined8 uVar147;
  undefined8 uVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar159;
  float fVar160;
  float fVar161;
  undefined1 auVar158 [16];
  float fVar162;
  float fVar164;
  float fVar165;
  float fVar166;
  undefined1 auVar163 [16];
  float fVar167;
  float fVar169;
  float fVar170;
  float fVar171;
  undefined1 auVar168 [16];
  float fVar172;
  float fVar174;
  float fVar175;
  float fVar176;
  undefined1 auVar173 [16];
  float fVar177;
  float fVar179;
  float fVar180;
  float fVar181;
  undefined1 auVar178 [16];
  float fVar182;
  float fVar184;
  float fVar185;
  float fVar186;
  undefined1 auVar183 [16];
  float fVar187;
  float fVar189;
  float fVar190;
  float fVar191;
  undefined1 auVar188 [16];
  float fVar192;
  float fVar194;
  float fVar195;
  float fVar196;
  undefined1 auVar193 [16];
  float fVar197;
  float fVar199;
  float fVar200;
  float fVar201;
  undefined1 auVar198 [16];
  float fVar202;
  float fVar204;
  float fVar205;
  float fVar206;
  undefined1 auVar203 [16];
  float fVar207;
  float fVar209;
  float fVar210;
  float fVar211;
  undefined1 auVar208 [16];
  float fVar212;
  float fVar214;
  float fVar215;
  float fVar216;
  undefined1 auVar213 [16];
  float fVar217;
  float fVar219;
  float fVar220;
  float fVar221;
  undefined1 auVar218 [16];
  float fVar222;
  float fVar224;
  float fVar225;
  float fVar226;
  undefined1 auVar223 [16];
  float fVar227;
  float fVar229;
  float fVar230;
  float fVar231;
  undefined1 auVar228 [16];
  float fVar232;
  float fVar234;
  float fVar235;
  float fVar236;
  undefined1 auVar233 [16];
  
  puVar52 = (undefined8 *)*param_1;
  puVar53 = (undefined8 *)param_1[1];
  puVar54 = (undefined8 *)param_1[2];
  uVar55 = *(uint *)(param_1 + 4);
  uVar56 = *(uint *)((long)param_1 + 0x24);
  lVar44 = param_1[6];
  iVar2 = *(int *)((long)param_1 + 0x34);
  puVar47 = (undefined8 *)*param_1;
  uVar50 = *(uint *)(param_1 + 5);
  iVar3 = *(int *)((long)param_1 + 0x2c);
  uVar4 = *(uint *)(param_1 + 7);
  uVar5 = *(uint *)((long)param_1 + 0x3c);
  uVar51 = (ulong)*(uint *)(param_1 + 8);
  uVar6 = *(uint *)((long)param_1 + 0x44);
  uVar70 = *puVar52;
  uVar73 = puVar52[1];
  uVar76 = puVar52[2];
  uVar79 = puVar52[3];
  uVar82 = *puVar53;
  uVar85 = puVar53[1];
  uVar88 = puVar53[2];
  uVar91 = puVar53[3];
  puVar60 = puVar54;
  do {
    fVar232 = 0.0;
    fVar234 = 0.0;
    fVar235 = 0.0;
    fVar236 = 0.0;
    fVar227 = 0.0;
    fVar229 = 0.0;
    fVar230 = 0.0;
    fVar231 = 0.0;
    fVar222 = 0.0;
    fVar224 = 0.0;
    fVar225 = 0.0;
    fVar226 = 0.0;
    fVar217 = 0.0;
    fVar219 = 0.0;
    fVar220 = 0.0;
    fVar221 = 0.0;
    fVar212 = 0.0;
    fVar214 = 0.0;
    fVar215 = 0.0;
    fVar216 = 0.0;
    fVar207 = 0.0;
    fVar209 = 0.0;
    fVar210 = 0.0;
    fVar211 = 0.0;
    fVar202 = 0.0;
    fVar204 = 0.0;
    fVar205 = 0.0;
    fVar206 = 0.0;
    fVar197 = 0.0;
    fVar199 = 0.0;
    fVar200 = 0.0;
    fVar201 = 0.0;
    fVar192 = 0.0;
    fVar194 = 0.0;
    fVar195 = 0.0;
    fVar196 = 0.0;
    fVar182 = 0.0;
    fVar184 = 0.0;
    fVar185 = 0.0;
    fVar186 = 0.0;
    fVar172 = 0.0;
    fVar174 = 0.0;
    fVar175 = 0.0;
    fVar176 = 0.0;
    fVar162 = 0.0;
    fVar164 = 0.0;
    fVar165 = 0.0;
    fVar166 = 0.0;
    puVar46 = puVar52 + 4;
    puVar58 = puVar53 + 4;
    uVar45 = 1;
    fVar149 = (float)uVar82;
    fVar187 = (float)uVar70;
    fVar189 = (float)((ulong)uVar70 >> 0x20);
    fVar190 = (float)uVar73;
    fVar191 = (float)((ulong)uVar73 >> 0x20);
    fVar157 = fVar187 * fVar149 + 0.0;
    fVar159 = fVar189 * fVar149 + 0.0;
    fVar160 = fVar190 * fVar149 + 0.0;
    fVar161 = fVar191 * fVar149 + 0.0;
    fVar149 = (float)((ulong)uVar82 >> 0x20);
    fVar167 = fVar187 * fVar149 + 0.0;
    fVar169 = fVar189 * fVar149 + 0.0;
    fVar170 = fVar190 * fVar149 + 0.0;
    fVar171 = fVar191 * fVar149 + 0.0;
    fVar149 = (float)uVar85;
    fVar177 = fVar187 * fVar149 + 0.0;
    fVar179 = fVar189 * fVar149 + 0.0;
    fVar180 = fVar190 * fVar149 + 0.0;
    fVar181 = fVar191 * fVar149 + 0.0;
    fVar149 = (float)((ulong)uVar85 >> 0x20);
    fVar187 = fVar187 * fVar149 + 0.0;
    fVar189 = fVar189 * fVar149 + 0.0;
    fVar190 = fVar190 * fVar149 + 0.0;
    fVar191 = fVar191 * fVar149 + 0.0;
    if (7 < (int)uVar6) {
      uVar94 = *puVar46;
      uVar97 = puVar52[5];
      uVar100 = puVar52[6];
      uVar103 = puVar52[7];
      uVar106 = *puVar58;
      uVar109 = puVar53[5];
      uVar112 = puVar53[6];
      uVar115 = puVar53[7];
      uVar118 = puVar52[8];
      uVar121 = puVar52[9];
      uVar124 = puVar52[10];
      uVar127 = puVar52[0xb];
      uVar130 = puVar53[8];
      uVar133 = puVar53[9];
      uVar136 = puVar53[10];
      uVar139 = puVar53[0xb];
      uVar142 = puVar52[0xc];
      uVar145 = puVar52[0xd];
      uVar147 = puVar52[0xe];
      uVar148 = puVar52[0xf];
      fVar149 = *(float *)(puVar53 + 0xc);
      fVar150 = *(float *)((long)puVar53 + 100);
      fVar151 = *(float *)(puVar53 + 0xd);
      fVar152 = *(float *)((long)puVar53 + 0x6c);
      fVar153 = *(float *)(puVar53 + 0xe);
      fVar154 = *(float *)((long)puVar53 + 0x74);
      fVar155 = *(float *)(puVar53 + 0xf);
      fVar156 = *(float *)((long)puVar53 + 0x7c);
      uVar45 = 4;
      puVar57 = puVar53 + 0x10;
      puVar59 = puVar52 + 0x10;
      do {
        puVar46 = puVar59 + 0x10;
        puVar58 = puVar57 + 0x10;
        fVar87 = (float)uVar88;
        fVar69 = (float)uVar70;
        fVar71 = (float)((ulong)uVar70 >> 0x20);
        fVar72 = (float)uVar73;
        fVar74 = (float)((ulong)uVar73 >> 0x20);
        fVar89 = (float)((ulong)uVar88 >> 0x20);
        fVar90 = (float)uVar91;
        fVar92 = (float)((ulong)uVar91 >> 0x20);
        uVar73 = puVar59[1];
        uVar70 = *puVar59;
        fVar75 = (float)uVar76;
        fVar77 = (float)((ulong)uVar76 >> 0x20);
        fVar78 = (float)uVar79;
        fVar80 = (float)((ulong)uVar79 >> 0x20);
        uVar91 = puVar57[3];
        uVar88 = puVar57[2];
        fVar81 = (float)uVar82;
        fVar83 = (float)((ulong)uVar82 >> 0x20);
        fVar84 = (float)uVar85;
        fVar86 = (float)((ulong)uVar85 >> 0x20);
        uVar79 = puVar59[3];
        uVar76 = puVar59[2];
        fVar105 = (float)uVar106;
        fVar93 = (float)uVar94;
        fVar95 = (float)((ulong)uVar94 >> 0x20);
        fVar96 = (float)uVar97;
        fVar98 = (float)((ulong)uVar97 >> 0x20);
        fVar107 = (float)((ulong)uVar106 >> 0x20);
        uVar85 = puVar57[1];
        uVar82 = *puVar57;
        fVar108 = (float)uVar109;
        fVar110 = (float)((ulong)uVar109 >> 0x20);
        fVar111 = (float)uVar112;
        fVar113 = (float)((ulong)uVar112 >> 0x20);
        fVar114 = (float)uVar115;
        fVar116 = (float)((ulong)uVar115 >> 0x20);
        uVar97 = puVar59[5];
        uVar94 = puVar59[4];
        fVar99 = (float)uVar100;
        fVar101 = (float)((ulong)uVar100 >> 0x20);
        fVar102 = (float)uVar103;
        fVar104 = (float)((ulong)uVar103 >> 0x20);
        uVar115 = puVar57[7];
        uVar112 = puVar57[6];
        uVar103 = puVar59[7];
        uVar100 = puVar59[6];
        fVar129 = (float)uVar130;
        fVar117 = (float)uVar118;
        fVar119 = (float)((ulong)uVar118 >> 0x20);
        fVar120 = (float)uVar121;
        fVar122 = (float)((ulong)uVar121 >> 0x20);
        fVar131 = (float)((ulong)uVar130 >> 0x20);
        uVar109 = puVar57[5];
        uVar106 = puVar57[4];
        fVar132 = (float)uVar133;
        fVar134 = (float)((ulong)uVar133 >> 0x20);
        fVar135 = (float)uVar136;
        fVar137 = (float)((ulong)uVar136 >> 0x20);
        fVar138 = (float)uVar139;
        fVar140 = (float)((ulong)uVar139 >> 0x20);
        uVar121 = puVar59[9];
        uVar118 = puVar59[8];
        fVar123 = (float)uVar124;
        fVar125 = (float)((ulong)uVar124 >> 0x20);
        fVar126 = (float)uVar127;
        fVar128 = (float)((ulong)uVar127 >> 0x20);
        uVar139 = puVar57[0xb];
        uVar136 = puVar57[10];
        uVar127 = puVar59[0xb];
        uVar124 = puVar59[10];
        fVar141 = (float)uVar142;
        fVar143 = (float)((ulong)uVar142 >> 0x20);
        fVar144 = (float)uVar145;
        fVar146 = (float)((ulong)uVar145 >> 0x20);
        uVar133 = puVar57[9];
        uVar130 = puVar57[8];
        fVar61 = fVar141 * fVar151;
        fVar63 = fVar143 * fVar151;
        fVar65 = fVar144 * fVar151;
        fVar67 = fVar146 * fVar151;
        fVar62 = fVar141 * fVar152;
        fVar64 = fVar143 * fVar152;
        fVar66 = fVar144 * fVar152;
        fVar68 = fVar146 * fVar152;
        fVar197 = fVar197 + fVar69 * fVar87 + fVar93 * fVar111 + fVar117 * fVar135 +
                  fVar141 * fVar153;
        fVar199 = fVar199 + fVar71 * fVar87 + fVar95 * fVar111 + fVar119 * fVar135 +
                  fVar143 * fVar153;
        fVar200 = fVar200 + fVar72 * fVar87 + fVar96 * fVar111 + fVar120 * fVar135 +
                  fVar144 * fVar153;
        fVar201 = fVar201 + fVar74 * fVar87 + fVar98 * fVar111 + fVar122 * fVar135 +
                  fVar146 * fVar153;
        fVar207 = fVar207 + fVar69 * fVar89 + fVar93 * fVar113 + fVar117 * fVar137 +
                  fVar141 * fVar154;
        fVar209 = fVar209 + fVar71 * fVar89 + fVar95 * fVar113 + fVar119 * fVar137 +
                  fVar143 * fVar154;
        fVar210 = fVar210 + fVar72 * fVar89 + fVar96 * fVar113 + fVar120 * fVar137 +
                  fVar144 * fVar154;
        fVar211 = fVar211 + fVar74 * fVar89 + fVar98 * fVar113 + fVar122 * fVar137 +
                  fVar146 * fVar154;
        fVar217 = fVar217 + fVar69 * fVar90 + fVar93 * fVar114 + fVar117 * fVar138 +
                  fVar141 * fVar155;
        fVar219 = fVar219 + fVar71 * fVar90 + fVar95 * fVar114 + fVar119 * fVar138 +
                  fVar143 * fVar155;
        fVar220 = fVar220 + fVar72 * fVar90 + fVar96 * fVar114 + fVar120 * fVar138 +
                  fVar144 * fVar155;
        fVar221 = fVar221 + fVar74 * fVar90 + fVar98 * fVar114 + fVar122 * fVar138 +
                  fVar146 * fVar155;
        fVar227 = fVar227 + fVar69 * fVar92 + fVar93 * fVar116 + fVar117 * fVar140 +
                  fVar141 * fVar156;
        fVar229 = fVar229 + fVar71 * fVar92 + fVar95 * fVar116 + fVar119 * fVar140 +
                  fVar143 * fVar156;
        fVar230 = fVar230 + fVar72 * fVar92 + fVar96 * fVar116 + fVar120 * fVar140 +
                  fVar144 * fVar156;
        fVar231 = fVar231 + fVar74 * fVar92 + fVar98 * fVar116 + fVar122 * fVar140 +
                  fVar146 * fVar156;
        uVar145 = puVar59[0xd];
        uVar142 = puVar59[0xc];
        fVar69 = (float)uVar147;
        fVar71 = (float)((ulong)uVar147 >> 0x20);
        fVar72 = (float)uVar148;
        fVar74 = (float)((ulong)uVar148 >> 0x20);
        fVar202 = fVar202 + fVar75 * fVar87 + fVar99 * fVar111 + fVar123 * fVar135 +
                  fVar69 * fVar153;
        fVar204 = fVar204 + fVar77 * fVar87 + fVar101 * fVar111 + fVar125 * fVar135 +
                  fVar71 * fVar153;
        fVar205 = fVar205 + fVar78 * fVar87 + fVar102 * fVar111 + fVar126 * fVar135 +
                  fVar72 * fVar153;
        fVar206 = fVar206 + fVar80 * fVar87 + fVar104 * fVar111 + fVar128 * fVar135 +
                  fVar74 * fVar153;
        fVar212 = fVar212 + fVar75 * fVar89 + fVar99 * fVar113 + fVar123 * fVar137 +
                  fVar69 * fVar154;
        fVar214 = fVar214 + fVar77 * fVar89 + fVar101 * fVar113 + fVar125 * fVar137 +
                  fVar71 * fVar154;
        fVar215 = fVar215 + fVar78 * fVar89 + fVar102 * fVar113 + fVar126 * fVar137 +
                  fVar72 * fVar154;
        fVar216 = fVar216 + fVar80 * fVar89 + fVar104 * fVar113 + fVar128 * fVar137 +
                  fVar74 * fVar154;
        fVar222 = fVar222 + fVar75 * fVar90 + fVar99 * fVar114 + fVar123 * fVar138 +
                  fVar69 * fVar155;
        fVar224 = fVar224 + fVar77 * fVar90 + fVar101 * fVar114 + fVar125 * fVar138 +
                  fVar71 * fVar155;
        fVar225 = fVar225 + fVar78 * fVar90 + fVar102 * fVar114 + fVar126 * fVar138 +
                  fVar72 * fVar155;
        fVar226 = fVar226 + fVar80 * fVar90 + fVar104 * fVar114 + fVar128 * fVar138 +
                  fVar74 * fVar155;
        fVar232 = fVar232 + fVar75 * fVar92 + fVar99 * fVar116 + fVar123 * fVar140 +
                  fVar69 * fVar156;
        fVar234 = fVar234 + fVar77 * fVar92 + fVar101 * fVar116 + fVar125 * fVar140 +
                  fVar71 * fVar156;
        fVar235 = fVar235 + fVar78 * fVar92 + fVar102 * fVar116 + fVar126 * fVar140 +
                  fVar72 * fVar156;
        fVar236 = fVar236 + fVar80 * fVar92 + fVar104 * fVar116 + fVar128 * fVar140 +
                  fVar74 * fVar156;
        fVar155 = (float)puVar57[0xf];
        fVar156 = (float)((ulong)puVar57[0xf] >> 0x20);
        fVar153 = (float)puVar57[0xe];
        fVar154 = (float)((ulong)puVar57[0xe] >> 0x20);
        fVar162 = fVar162 + fVar75 * fVar81 + fVar99 * fVar105 + fVar123 * fVar129 +
                  fVar69 * fVar149;
        fVar164 = fVar164 + fVar77 * fVar81 + fVar101 * fVar105 + fVar125 * fVar129 +
                  fVar71 * fVar149;
        fVar165 = fVar165 + fVar78 * fVar81 + fVar102 * fVar105 + fVar126 * fVar129 +
                  fVar72 * fVar149;
        fVar166 = fVar166 + fVar80 * fVar81 + fVar104 * fVar105 + fVar128 * fVar129 +
                  fVar74 * fVar149;
        fVar172 = fVar172 + fVar75 * fVar83 + fVar99 * fVar107 + fVar123 * fVar131 +
                  fVar69 * fVar150;
        fVar174 = fVar174 + fVar77 * fVar83 + fVar101 * fVar107 + fVar125 * fVar131 +
                  fVar71 * fVar150;
        fVar175 = fVar175 + fVar78 * fVar83 + fVar102 * fVar107 + fVar126 * fVar131 +
                  fVar72 * fVar150;
        fVar176 = fVar176 + fVar80 * fVar83 + fVar104 * fVar107 + fVar128 * fVar131 +
                  fVar74 * fVar150;
        fVar182 = fVar182 + fVar75 * fVar84 + fVar99 * fVar108 + fVar123 * fVar132 +
                  fVar69 * fVar151;
        fVar184 = fVar184 + fVar77 * fVar84 + fVar101 * fVar108 + fVar125 * fVar132 +
                  fVar71 * fVar151;
        fVar185 = fVar185 + fVar78 * fVar84 + fVar102 * fVar108 + fVar126 * fVar132 +
                  fVar72 * fVar151;
        fVar186 = fVar186 + fVar80 * fVar84 + fVar104 * fVar108 + fVar128 * fVar132 +
                  fVar74 * fVar151;
        fVar192 = fVar192 + fVar75 * fVar86 + fVar99 * fVar110 + fVar123 * fVar134 +
                  fVar69 * fVar152;
        fVar194 = fVar194 + fVar77 * fVar86 + fVar101 * fVar110 + fVar125 * fVar134 +
                  fVar71 * fVar152;
        fVar195 = fVar195 + fVar78 * fVar86 + fVar102 * fVar110 + fVar126 * fVar134 +
                  fVar72 * fVar152;
        fVar196 = fVar196 + fVar80 * fVar86 + fVar104 * fVar110 + fVar128 * fVar134 +
                  fVar74 * fVar152;
        uVar148 = puVar59[0xf];
        uVar147 = puVar59[0xe];
        fVar151 = (float)uVar82;
        fVar69 = (float)uVar70;
        fVar71 = (float)((ulong)uVar70 >> 0x20);
        fVar72 = (float)uVar73;
        fVar74 = (float)((ulong)uVar73 >> 0x20);
        fVar157 = fVar157 + fVar93 * fVar105 + fVar117 * fVar129 + fVar141 * fVar149 +
                  fVar69 * fVar151;
        fVar159 = fVar159 + fVar95 * fVar105 + fVar119 * fVar129 + fVar143 * fVar149 +
                  fVar71 * fVar151;
        fVar160 = fVar160 + fVar96 * fVar105 + fVar120 * fVar129 + fVar144 * fVar149 +
                  fVar72 * fVar151;
        fVar161 = fVar161 + fVar98 * fVar105 + fVar122 * fVar129 + fVar146 * fVar149 +
                  fVar74 * fVar151;
        fVar149 = (float)((ulong)uVar82 >> 0x20);
        fVar167 = fVar167 + fVar93 * fVar107 + fVar117 * fVar131 + fVar141 * fVar150 +
                  fVar69 * fVar149;
        fVar169 = fVar169 + fVar95 * fVar107 + fVar119 * fVar131 + fVar143 * fVar150 +
                  fVar71 * fVar149;
        fVar170 = fVar170 + fVar96 * fVar107 + fVar120 * fVar131 + fVar144 * fVar150 +
                  fVar72 * fVar149;
        fVar171 = fVar171 + fVar98 * fVar107 + fVar122 * fVar131 + fVar146 * fVar150 +
                  fVar74 * fVar149;
        fVar151 = (float)puVar57[0xd];
        fVar152 = (float)((ulong)puVar57[0xd] >> 0x20);
        fVar149 = (float)puVar57[0xc];
        fVar150 = (float)((ulong)puVar57[0xc] >> 0x20);
        fVar75 = (float)uVar85;
        fVar177 = fVar177 + fVar93 * fVar108 + fVar117 * fVar132 + fVar61 + fVar69 * fVar75;
        fVar179 = fVar179 + fVar95 * fVar108 + fVar119 * fVar132 + fVar63 + fVar71 * fVar75;
        fVar180 = fVar180 + fVar96 * fVar108 + fVar120 * fVar132 + fVar65 + fVar72 * fVar75;
        fVar181 = fVar181 + fVar98 * fVar108 + fVar122 * fVar132 + fVar67 + fVar74 * fVar75;
        fVar61 = (float)((ulong)uVar85 >> 0x20);
        fVar187 = fVar187 + fVar93 * fVar110 + fVar117 * fVar134 + fVar62 + fVar69 * fVar61;
        fVar189 = fVar189 + fVar95 * fVar110 + fVar119 * fVar134 + fVar64 + fVar71 * fVar61;
        fVar190 = fVar190 + fVar96 * fVar110 + fVar120 * fVar134 + fVar66 + fVar72 * fVar61;
        fVar191 = fVar191 + fVar98 * fVar110 + fVar122 * fVar134 + fVar68 + fVar74 * fVar61;
        uVar45 = uVar45 + 4;
        puVar57 = puVar58;
        puVar59 = puVar46;
      } while ((int)uVar45 < (int)(uVar6 & 0xfffffffc));
      fVar69 = (float)uVar106;
      fVar61 = (float)uVar94;
      fVar62 = (float)((ulong)uVar94 >> 0x20);
      fVar63 = (float)uVar97;
      fVar64 = (float)((ulong)uVar97 >> 0x20);
      fVar71 = (float)((ulong)uVar106 >> 0x20);
      fVar72 = (float)uVar109;
      fVar74 = (float)((ulong)uVar109 >> 0x20);
      fVar75 = (float)uVar112;
      fVar77 = (float)((ulong)uVar112 >> 0x20);
      fVar78 = (float)uVar115;
      fVar80 = (float)((ulong)uVar115 >> 0x20);
      fVar65 = (float)uVar100;
      fVar66 = (float)((ulong)uVar100 >> 0x20);
      fVar67 = (float)uVar103;
      fVar68 = (float)((ulong)uVar103 >> 0x20);
      fVar93 = (float)uVar130;
      fVar81 = (float)uVar118;
      fVar83 = (float)((ulong)uVar118 >> 0x20);
      fVar84 = (float)uVar121;
      fVar86 = (float)((ulong)uVar121 >> 0x20);
      fVar95 = (float)((ulong)uVar130 >> 0x20);
      fVar96 = (float)uVar133;
      fVar98 = (float)((ulong)uVar133 >> 0x20);
      fVar99 = (float)uVar136;
      fVar101 = (float)((ulong)uVar136 >> 0x20);
      fVar102 = (float)uVar139;
      fVar104 = (float)((ulong)uVar139 >> 0x20);
      fVar87 = (float)uVar124;
      fVar89 = (float)((ulong)uVar124 >> 0x20);
      fVar90 = (float)uVar127;
      fVar92 = (float)((ulong)uVar127 >> 0x20);
      fVar105 = (float)uVar142;
      fVar107 = (float)((ulong)uVar142 >> 0x20);
      fVar108 = (float)uVar145;
      fVar110 = (float)((ulong)uVar145 >> 0x20);
      fVar157 = fVar157 + fVar61 * fVar69 + fVar81 * fVar93 + fVar105 * fVar149;
      fVar159 = fVar159 + fVar62 * fVar69 + fVar83 * fVar93 + fVar107 * fVar149;
      fVar160 = fVar160 + fVar63 * fVar69 + fVar84 * fVar93 + fVar108 * fVar149;
      fVar161 = fVar161 + fVar64 * fVar69 + fVar86 * fVar93 + fVar110 * fVar149;
      fVar167 = fVar167 + fVar61 * fVar71 + fVar81 * fVar95 + fVar105 * fVar150;
      fVar169 = fVar169 + fVar62 * fVar71 + fVar83 * fVar95 + fVar107 * fVar150;
      fVar170 = fVar170 + fVar63 * fVar71 + fVar84 * fVar95 + fVar108 * fVar150;
      fVar171 = fVar171 + fVar64 * fVar71 + fVar86 * fVar95 + fVar110 * fVar150;
      fVar177 = fVar177 + fVar61 * fVar72 + fVar81 * fVar96 + fVar105 * fVar151;
      fVar179 = fVar179 + fVar62 * fVar72 + fVar83 * fVar96 + fVar107 * fVar151;
      fVar180 = fVar180 + fVar63 * fVar72 + fVar84 * fVar96 + fVar108 * fVar151;
      fVar181 = fVar181 + fVar64 * fVar72 + fVar86 * fVar96 + fVar110 * fVar151;
      fVar187 = fVar187 + fVar61 * fVar74 + fVar81 * fVar98 + fVar105 * fVar152;
      fVar189 = fVar189 + fVar62 * fVar74 + fVar83 * fVar98 + fVar107 * fVar152;
      fVar190 = fVar190 + fVar63 * fVar74 + fVar84 * fVar98 + fVar108 * fVar152;
      fVar191 = fVar191 + fVar64 * fVar74 + fVar86 * fVar98 + fVar110 * fVar152;
      fVar197 = fVar197 + fVar61 * fVar75 + fVar81 * fVar99 + fVar105 * fVar153;
      fVar199 = fVar199 + fVar62 * fVar75 + fVar83 * fVar99 + fVar107 * fVar153;
      fVar200 = fVar200 + fVar63 * fVar75 + fVar84 * fVar99 + fVar108 * fVar153;
      fVar201 = fVar201 + fVar64 * fVar75 + fVar86 * fVar99 + fVar110 * fVar153;
      fVar207 = fVar207 + fVar61 * fVar77 + fVar81 * fVar101 + fVar105 * fVar154;
      fVar209 = fVar209 + fVar62 * fVar77 + fVar83 * fVar101 + fVar107 * fVar154;
      fVar210 = fVar210 + fVar63 * fVar77 + fVar84 * fVar101 + fVar108 * fVar154;
      fVar211 = fVar211 + fVar64 * fVar77 + fVar86 * fVar101 + fVar110 * fVar154;
      fVar217 = fVar217 + fVar61 * fVar78 + fVar81 * fVar102 + fVar105 * fVar155;
      fVar219 = fVar219 + fVar62 * fVar78 + fVar83 * fVar102 + fVar107 * fVar155;
      fVar220 = fVar220 + fVar63 * fVar78 + fVar84 * fVar102 + fVar108 * fVar155;
      fVar221 = fVar221 + fVar64 * fVar78 + fVar86 * fVar102 + fVar110 * fVar155;
      fVar227 = fVar227 + fVar61 * fVar80 + fVar81 * fVar104 + fVar105 * fVar156;
      fVar229 = fVar229 + fVar62 * fVar80 + fVar83 * fVar104 + fVar107 * fVar156;
      fVar230 = fVar230 + fVar63 * fVar80 + fVar84 * fVar104 + fVar108 * fVar156;
      fVar231 = fVar231 + fVar64 * fVar80 + fVar86 * fVar104 + fVar110 * fVar156;
      fVar61 = (float)uVar147;
      fVar62 = (float)((ulong)uVar147 >> 0x20);
      fVar63 = (float)uVar148;
      fVar64 = (float)((ulong)uVar148 >> 0x20);
      fVar202 = fVar202 + fVar65 * fVar75 + fVar87 * fVar99 + fVar61 * fVar153;
      fVar204 = fVar204 + fVar66 * fVar75 + fVar89 * fVar99 + fVar62 * fVar153;
      fVar205 = fVar205 + fVar67 * fVar75 + fVar90 * fVar99 + fVar63 * fVar153;
      fVar206 = fVar206 + fVar68 * fVar75 + fVar92 * fVar99 + fVar64 * fVar153;
      fVar212 = fVar212 + fVar65 * fVar77 + fVar87 * fVar101 + fVar61 * fVar154;
      fVar214 = fVar214 + fVar66 * fVar77 + fVar89 * fVar101 + fVar62 * fVar154;
      fVar215 = fVar215 + fVar67 * fVar77 + fVar90 * fVar101 + fVar63 * fVar154;
      fVar216 = fVar216 + fVar68 * fVar77 + fVar92 * fVar101 + fVar64 * fVar154;
      fVar222 = fVar222 + fVar65 * fVar78 + fVar87 * fVar102 + fVar61 * fVar155;
      fVar224 = fVar224 + fVar66 * fVar78 + fVar89 * fVar102 + fVar62 * fVar155;
      fVar225 = fVar225 + fVar67 * fVar78 + fVar90 * fVar102 + fVar63 * fVar155;
      fVar226 = fVar226 + fVar68 * fVar78 + fVar92 * fVar102 + fVar64 * fVar155;
      fVar232 = fVar232 + fVar65 * fVar80 + fVar87 * fVar104 + fVar61 * fVar156;
      fVar234 = fVar234 + fVar66 * fVar80 + fVar89 * fVar104 + fVar62 * fVar156;
      fVar235 = fVar235 + fVar67 * fVar80 + fVar90 * fVar104 + fVar63 * fVar156;
      fVar236 = fVar236 + fVar68 * fVar80 + fVar92 * fVar104 + fVar64 * fVar156;
      fVar162 = fVar162 + fVar65 * fVar69 + fVar87 * fVar93 + fVar61 * fVar149;
      fVar164 = fVar164 + fVar66 * fVar69 + fVar89 * fVar93 + fVar62 * fVar149;
      fVar165 = fVar165 + fVar67 * fVar69 + fVar90 * fVar93 + fVar63 * fVar149;
      fVar166 = fVar166 + fVar68 * fVar69 + fVar92 * fVar93 + fVar64 * fVar149;
      fVar172 = fVar172 + fVar65 * fVar71 + fVar87 * fVar95 + fVar61 * fVar150;
      fVar174 = fVar174 + fVar66 * fVar71 + fVar89 * fVar95 + fVar62 * fVar150;
      fVar175 = fVar175 + fVar67 * fVar71 + fVar90 * fVar95 + fVar63 * fVar150;
      fVar176 = fVar176 + fVar68 * fVar71 + fVar92 * fVar95 + fVar64 * fVar150;
      fVar182 = fVar182 + fVar65 * fVar72 + fVar87 * fVar96 + fVar61 * fVar151;
      fVar184 = fVar184 + fVar66 * fVar72 + fVar89 * fVar96 + fVar62 * fVar151;
      fVar185 = fVar185 + fVar67 * fVar72 + fVar90 * fVar96 + fVar63 * fVar151;
      fVar186 = fVar186 + fVar68 * fVar72 + fVar92 * fVar96 + fVar64 * fVar151;
      fVar192 = fVar192 + fVar65 * fVar74 + fVar87 * fVar98 + fVar61 * fVar152;
      fVar194 = fVar194 + fVar66 * fVar74 + fVar89 * fVar98 + fVar62 * fVar152;
      fVar195 = fVar195 + fVar67 * fVar74 + fVar90 * fVar98 + fVar63 * fVar152;
      fVar196 = fVar196 + fVar68 * fVar74 + fVar92 * fVar98 + fVar64 * fVar152;
    }
    uVar94 = uVar82;
    uVar97 = uVar85;
    if (uVar45 != uVar6) {
      do {
        fVar153 = (float)uVar88;
        fVar149 = (float)uVar70;
        fVar150 = (float)((ulong)uVar70 >> 0x20);
        fVar151 = (float)uVar73;
        fVar152 = (float)((ulong)uVar73 >> 0x20);
        fVar197 = fVar197 + fVar149 * fVar153;
        fVar199 = fVar199 + fVar150 * fVar153;
        fVar200 = fVar200 + fVar151 * fVar153;
        fVar201 = fVar201 + fVar152 * fVar153;
        fVar154 = (float)((ulong)uVar88 >> 0x20);
        fVar207 = fVar207 + fVar149 * fVar154;
        fVar209 = fVar209 + fVar150 * fVar154;
        fVar210 = fVar210 + fVar151 * fVar154;
        fVar211 = fVar211 + fVar152 * fVar154;
        uVar82 = *puVar58;
        uVar85 = puVar58[1];
        fVar155 = (float)uVar91;
        fVar217 = fVar217 + fVar149 * fVar155;
        fVar219 = fVar219 + fVar150 * fVar155;
        fVar220 = fVar220 + fVar151 * fVar155;
        fVar221 = fVar221 + fVar152 * fVar155;
        fVar156 = (float)((ulong)uVar91 >> 0x20);
        fVar227 = fVar227 + fVar149 * fVar156;
        fVar229 = fVar229 + fVar150 * fVar156;
        fVar230 = fVar230 + fVar151 * fVar156;
        fVar231 = fVar231 + fVar152 * fVar156;
        uVar70 = *puVar46;
        uVar73 = puVar46[1];
        fVar149 = (float)uVar76;
        fVar150 = (float)((ulong)uVar76 >> 0x20);
        fVar151 = (float)uVar79;
        fVar152 = (float)((ulong)uVar79 >> 0x20);
        fVar202 = fVar202 + fVar149 * fVar153;
        fVar204 = fVar204 + fVar150 * fVar153;
        fVar205 = fVar205 + fVar151 * fVar153;
        fVar206 = fVar206 + fVar152 * fVar153;
        fVar212 = fVar212 + fVar149 * fVar154;
        fVar214 = fVar214 + fVar150 * fVar154;
        fVar215 = fVar215 + fVar151 * fVar154;
        fVar216 = fVar216 + fVar152 * fVar154;
        uVar45 = uVar45 + 1;
        fVar222 = fVar222 + fVar149 * fVar155;
        fVar224 = fVar224 + fVar150 * fVar155;
        fVar225 = fVar225 + fVar151 * fVar155;
        fVar226 = fVar226 + fVar152 * fVar155;
        fVar232 = fVar232 + fVar149 * fVar156;
        fVar234 = fVar234 + fVar150 * fVar156;
        fVar235 = fVar235 + fVar151 * fVar156;
        fVar236 = fVar236 + fVar152 * fVar156;
        uVar88 = puVar58[2];
        uVar91 = puVar58[3];
        puVar58 = puVar58 + 4;
        fVar153 = (float)uVar94;
        fVar162 = fVar162 + fVar149 * fVar153;
        fVar164 = fVar164 + fVar150 * fVar153;
        fVar165 = fVar165 + fVar151 * fVar153;
        fVar166 = fVar166 + fVar152 * fVar153;
        fVar153 = (float)((ulong)uVar94 >> 0x20);
        fVar172 = fVar172 + fVar149 * fVar153;
        fVar174 = fVar174 + fVar150 * fVar153;
        fVar175 = fVar175 + fVar151 * fVar153;
        fVar176 = fVar176 + fVar152 * fVar153;
        fVar153 = (float)uVar97;
        fVar182 = fVar182 + fVar149 * fVar153;
        fVar184 = fVar184 + fVar150 * fVar153;
        fVar185 = fVar185 + fVar151 * fVar153;
        fVar186 = fVar186 + fVar152 * fVar153;
        fVar153 = (float)((ulong)uVar97 >> 0x20);
        fVar192 = fVar192 + fVar149 * fVar153;
        fVar194 = fVar194 + fVar150 * fVar153;
        fVar195 = fVar195 + fVar151 * fVar153;
        fVar196 = fVar196 + fVar152 * fVar153;
        uVar76 = puVar46[2];
        uVar79 = puVar46[3];
        puVar46 = puVar46 + 4;
        fVar153 = (float)uVar82;
        fVar149 = (float)uVar70;
        fVar150 = (float)((ulong)uVar70 >> 0x20);
        fVar151 = (float)uVar73;
        fVar152 = (float)((ulong)uVar73 >> 0x20);
        fVar157 = fVar157 + fVar149 * fVar153;
        fVar159 = fVar159 + fVar150 * fVar153;
        fVar160 = fVar160 + fVar151 * fVar153;
        fVar161 = fVar161 + fVar152 * fVar153;
        fVar153 = (float)((ulong)uVar82 >> 0x20);
        fVar167 = fVar167 + fVar149 * fVar153;
        fVar169 = fVar169 + fVar150 * fVar153;
        fVar170 = fVar170 + fVar151 * fVar153;
        fVar171 = fVar171 + fVar152 * fVar153;
        fVar153 = (float)uVar85;
        fVar177 = fVar177 + fVar149 * fVar153;
        fVar179 = fVar179 + fVar150 * fVar153;
        fVar180 = fVar180 + fVar151 * fVar153;
        fVar181 = fVar181 + fVar152 * fVar153;
        fVar153 = (float)((ulong)uVar85 >> 0x20);
        fVar187 = fVar187 + fVar149 * fVar153;
        fVar189 = fVar189 + fVar150 * fVar153;
        fVar190 = fVar190 + fVar151 * fVar153;
        fVar191 = fVar191 + fVar152 * fVar153;
        uVar94 = uVar82;
        uVar97 = uVar85;
      } while ((int)uVar45 < (int)uVar6);
    }
    fVar153 = (float)uVar88;
    fVar149 = (float)uVar70;
    fVar150 = (float)((ulong)uVar70 >> 0x20);
    fVar151 = (float)uVar73;
    fVar152 = (float)((ulong)uVar73 >> 0x20);
    fVar197 = fVar197 + fVar149 * fVar153;
    fVar199 = fVar199 + fVar150 * fVar153;
    fVar200 = fVar200 + fVar151 * fVar153;
    fVar201 = fVar201 + fVar152 * fVar153;
    fVar154 = (float)((ulong)uVar88 >> 0x20);
    fVar207 = fVar207 + fVar149 * fVar154;
    fVar209 = fVar209 + fVar150 * fVar154;
    fVar210 = fVar210 + fVar151 * fVar154;
    fVar211 = fVar211 + fVar152 * fVar154;
    fVar155 = (float)uVar91;
    fVar217 = fVar217 + fVar149 * fVar155;
    fVar219 = fVar219 + fVar150 * fVar155;
    fVar220 = fVar220 + fVar151 * fVar155;
    fVar221 = fVar221 + fVar152 * fVar155;
    fVar156 = (float)((ulong)uVar91 >> 0x20);
    fVar227 = fVar227 + fVar149 * fVar156;
    fVar229 = fVar229 + fVar150 * fVar156;
    fVar230 = fVar230 + fVar151 * fVar156;
    fVar231 = fVar231 + fVar152 * fVar156;
    fVar149 = (float)uVar76;
    fVar150 = (float)((ulong)uVar76 >> 0x20);
    fVar151 = (float)uVar79;
    fVar152 = (float)((ulong)uVar79 >> 0x20);
    fVar202 = fVar202 + fVar149 * fVar153;
    fVar204 = fVar204 + fVar150 * fVar153;
    fVar205 = fVar205 + fVar151 * fVar153;
    fVar206 = fVar206 + fVar152 * fVar153;
    fVar212 = fVar212 + fVar149 * fVar154;
    fVar214 = fVar214 + fVar150 * fVar154;
    fVar215 = fVar215 + fVar151 * fVar154;
    fVar216 = fVar216 + fVar152 * fVar154;
    fVar222 = fVar222 + fVar149 * fVar155;
    fVar224 = fVar224 + fVar150 * fVar155;
    fVar225 = fVar225 + fVar151 * fVar155;
    fVar226 = fVar226 + fVar152 * fVar155;
    fVar232 = fVar232 + fVar149 * fVar156;
    fVar234 = fVar234 + fVar150 * fVar156;
    fVar235 = fVar235 + fVar151 * fVar156;
    fVar236 = fVar236 + fVar152 * fVar156;
    fVar153 = (float)uVar82;
    fVar162 = fVar162 + fVar149 * fVar153;
    fVar164 = fVar164 + fVar150 * fVar153;
    fVar165 = fVar165 + fVar151 * fVar153;
    fVar166 = fVar166 + fVar152 * fVar153;
    fVar153 = (float)((ulong)uVar82 >> 0x20);
    fVar172 = fVar172 + fVar149 * fVar153;
    fVar174 = fVar174 + fVar150 * fVar153;
    fVar175 = fVar175 + fVar151 * fVar153;
    fVar176 = fVar176 + fVar152 * fVar153;
    fVar153 = (float)uVar85;
    fVar182 = fVar182 + fVar149 * fVar153;
    fVar184 = fVar184 + fVar150 * fVar153;
    fVar185 = fVar185 + fVar151 * fVar153;
    fVar186 = fVar186 + fVar152 * fVar153;
    fVar153 = (float)((ulong)uVar85 >> 0x20);
    fVar192 = fVar192 + fVar149 * fVar153;
    fVar194 = fVar194 + fVar150 * fVar153;
    fVar195 = fVar195 + fVar151 * fVar153;
    fVar196 = fVar196 + fVar152 * fVar153;
    if ((int)uVar55 < (int)uVar50) {
      puVar52 = puVar52 + uVar4;
    }
    else {
      puVar52 = puVar47;
      if ((int)uVar56 < iVar3) {
        puVar53 = puVar53 + uVar5;
      }
    }
    bVar9 = *(byte *)(param_1 + 10);
    uVar50 = uVar55;
    if ((bVar9 & 0x20) != 0) {
      uVar50 = uVar56;
    }
    pfVar1 = (float *)param_1[3];
    if ((bVar9 & 1) != 0) {
      pfVar1 = (float *)param_1[3] + uVar50;
    }
    fVar149 = *pfVar1;
    fVar150 = pfVar1[1];
    fVar151 = pfVar1[2];
    fVar152 = pfVar1[3];
    fVar153 = pfVar1[4];
    fVar154 = pfVar1[5];
    fVar155 = pfVar1[6];
    fVar156 = pfVar1[7];
    uVar70 = *puVar52;
    uVar73 = puVar52[1];
    uVar76 = puVar52[2];
    uVar79 = puVar52[3];
    uVar82 = *puVar53;
    uVar85 = puVar53[1];
    uVar88 = puVar53[2];
    uVar91 = puVar53[3];
    if ((bVar9 & 0x20) == 0) {
      auVar158._0_4_ = fVar157 + fVar149;
      auVar158._4_4_ = fVar159 + fVar150;
      auVar158._8_4_ = fVar160 + fVar151;
      auVar158._12_4_ = fVar161 + fVar152;
      auVar163._0_4_ = fVar162 + fVar153;
      auVar163._4_4_ = fVar164 + fVar154;
      auVar163._8_4_ = fVar165 + fVar155;
      auVar163._12_4_ = fVar166 + fVar156;
      auVar168._0_4_ = fVar167 + fVar149;
      auVar168._4_4_ = fVar169 + fVar150;
      auVar168._8_4_ = fVar170 + fVar151;
      auVar168._12_4_ = fVar171 + fVar152;
      auVar173._0_4_ = fVar172 + fVar153;
      auVar173._4_4_ = fVar174 + fVar154;
      auVar173._8_4_ = fVar175 + fVar155;
      auVar173._12_4_ = fVar176 + fVar156;
      auVar178._0_4_ = fVar177 + fVar149;
      auVar178._4_4_ = fVar179 + fVar150;
      auVar178._8_4_ = fVar180 + fVar151;
      auVar178._12_4_ = fVar181 + fVar152;
      auVar183._0_4_ = fVar182 + fVar153;
      auVar183._4_4_ = fVar184 + fVar154;
      auVar183._8_4_ = fVar185 + fVar155;
      auVar183._12_4_ = fVar186 + fVar156;
      auVar188._0_4_ = fVar187 + fVar149;
      auVar188._4_4_ = fVar189 + fVar150;
      auVar188._8_4_ = fVar190 + fVar151;
      auVar188._12_4_ = fVar191 + fVar152;
      auVar193._0_4_ = fVar192 + fVar153;
      auVar193._4_4_ = fVar194 + fVar154;
      auVar193._8_4_ = fVar195 + fVar155;
      auVar193._12_4_ = fVar196 + fVar156;
      auVar198._0_4_ = fVar197 + fVar149;
      auVar198._4_4_ = fVar199 + fVar150;
      auVar198._8_4_ = fVar200 + fVar151;
      auVar198._12_4_ = fVar201 + fVar152;
      auVar203._0_4_ = fVar202 + fVar153;
      auVar203._4_4_ = fVar204 + fVar154;
      auVar203._8_4_ = fVar205 + fVar155;
      auVar203._12_4_ = fVar206 + fVar156;
      auVar208._0_4_ = fVar207 + fVar149;
      auVar208._4_4_ = fVar209 + fVar150;
      auVar208._8_4_ = fVar210 + fVar151;
      auVar208._12_4_ = fVar211 + fVar152;
      auVar213._0_4_ = fVar212 + fVar153;
      auVar213._4_4_ = fVar214 + fVar154;
      auVar213._8_4_ = fVar215 + fVar155;
      auVar213._12_4_ = fVar216 + fVar156;
      auVar218._0_4_ = fVar217 + fVar149;
      auVar218._4_4_ = fVar219 + fVar150;
      auVar218._8_4_ = fVar220 + fVar151;
      auVar218._12_4_ = fVar221 + fVar152;
      auVar223._0_4_ = fVar222 + fVar153;
      auVar223._4_4_ = fVar224 + fVar154;
      auVar223._8_4_ = fVar225 + fVar155;
      auVar223._12_4_ = fVar226 + fVar156;
      auVar228._0_4_ = fVar227 + fVar149;
      auVar228._4_4_ = fVar229 + fVar150;
      auVar228._8_4_ = fVar230 + fVar151;
      auVar228._12_4_ = fVar231 + fVar152;
      auVar233._0_4_ = fVar232 + fVar153;
      auVar233._4_4_ = fVar234 + fVar154;
      auVar233._8_4_ = fVar235 + fVar155;
      auVar233._12_4_ = fVar236 + fVar156;
    }
    else {
      auVar158._0_4_ = fVar157 + fVar149;
      auVar158._4_4_ = fVar159 + fVar149;
      auVar158._8_4_ = fVar160 + fVar149;
      auVar158._12_4_ = fVar161 + fVar149;
      auVar163._0_4_ = fVar162 + fVar149;
      auVar163._4_4_ = fVar164 + fVar149;
      auVar163._8_4_ = fVar165 + fVar149;
      auVar163._12_4_ = fVar166 + fVar149;
      auVar168._0_4_ = fVar167 + fVar150;
      auVar168._4_4_ = fVar169 + fVar150;
      auVar168._8_4_ = fVar170 + fVar150;
      auVar168._12_4_ = fVar171 + fVar150;
      auVar173._0_4_ = fVar172 + fVar150;
      auVar173._4_4_ = fVar174 + fVar150;
      auVar173._8_4_ = fVar175 + fVar150;
      auVar173._12_4_ = fVar176 + fVar150;
      auVar178._0_4_ = fVar177 + fVar151;
      auVar178._4_4_ = fVar179 + fVar151;
      auVar178._8_4_ = fVar180 + fVar151;
      auVar178._12_4_ = fVar181 + fVar151;
      auVar183._0_4_ = fVar182 + fVar151;
      auVar183._4_4_ = fVar184 + fVar151;
      auVar183._8_4_ = fVar185 + fVar151;
      auVar183._12_4_ = fVar186 + fVar151;
      auVar188._0_4_ = fVar187 + fVar152;
      auVar188._4_4_ = fVar189 + fVar152;
      auVar188._8_4_ = fVar190 + fVar152;
      auVar188._12_4_ = fVar191 + fVar152;
      auVar193._0_4_ = fVar192 + fVar152;
      auVar193._4_4_ = fVar194 + fVar152;
      auVar193._8_4_ = fVar195 + fVar152;
      auVar193._12_4_ = fVar196 + fVar152;
      auVar198._0_4_ = fVar197 + fVar153;
      auVar198._4_4_ = fVar199 + fVar153;
      auVar198._8_4_ = fVar200 + fVar153;
      auVar198._12_4_ = fVar201 + fVar153;
      auVar203._0_4_ = fVar202 + fVar153;
      auVar203._4_4_ = fVar204 + fVar153;
      auVar203._8_4_ = fVar205 + fVar153;
      auVar203._12_4_ = fVar206 + fVar153;
      auVar208._0_4_ = fVar207 + fVar154;
      auVar208._4_4_ = fVar209 + fVar154;
      auVar208._8_4_ = fVar210 + fVar154;
      auVar208._12_4_ = fVar211 + fVar154;
      auVar213._0_4_ = fVar212 + fVar154;
      auVar213._4_4_ = fVar214 + fVar154;
      auVar213._8_4_ = fVar215 + fVar154;
      auVar213._12_4_ = fVar216 + fVar154;
      auVar218._0_4_ = fVar217 + fVar155;
      auVar218._4_4_ = fVar219 + fVar155;
      auVar218._8_4_ = fVar220 + fVar155;
      auVar218._12_4_ = fVar221 + fVar155;
      auVar223._0_4_ = fVar222 + fVar155;
      auVar223._4_4_ = fVar224 + fVar155;
      auVar223._8_4_ = fVar225 + fVar155;
      auVar223._12_4_ = fVar226 + fVar155;
      auVar228._0_4_ = fVar227 + fVar156;
      auVar228._4_4_ = fVar229 + fVar156;
      auVar228._8_4_ = fVar230 + fVar156;
      auVar228._12_4_ = fVar231 + fVar156;
      auVar233._0_4_ = fVar232 + fVar156;
      auVar233._4_4_ = fVar234 + fVar156;
      auVar233._8_4_ = fVar235 + fVar156;
      auVar233._12_4_ = fVar236 + fVar156;
    }
    uVar7 = (undefined4)param_1[9];
    uVar8 = *(undefined4 *)((long)param_1 + 0x4c);
    auVar12._4_4_ = uVar7;
    auVar12._0_4_ = uVar7;
    auVar12._8_4_ = uVar7;
    auVar12._12_4_ = uVar7;
    auVar158 = NEON_fmax(auVar158,auVar12,4);
    auVar13._4_4_ = uVar7;
    auVar13._0_4_ = uVar7;
    auVar13._8_4_ = uVar7;
    auVar13._12_4_ = uVar7;
    auVar163 = NEON_fmax(auVar163,auVar13,4);
    auVar14._4_4_ = uVar7;
    auVar14._0_4_ = uVar7;
    auVar14._8_4_ = uVar7;
    auVar14._12_4_ = uVar7;
    auVar168 = NEON_fmax(auVar168,auVar14,4);
    auVar15._4_4_ = uVar7;
    auVar15._0_4_ = uVar7;
    auVar15._8_4_ = uVar7;
    auVar15._12_4_ = uVar7;
    auVar173 = NEON_fmax(auVar173,auVar15,4);
    auVar16._4_4_ = uVar7;
    auVar16._0_4_ = uVar7;
    auVar16._8_4_ = uVar7;
    auVar16._12_4_ = uVar7;
    auVar178 = NEON_fmax(auVar178,auVar16,4);
    auVar17._4_4_ = uVar7;
    auVar17._0_4_ = uVar7;
    auVar17._8_4_ = uVar7;
    auVar17._12_4_ = uVar7;
    auVar183 = NEON_fmax(auVar183,auVar17,4);
    auVar18._4_4_ = uVar7;
    auVar18._0_4_ = uVar7;
    auVar18._8_4_ = uVar7;
    auVar18._12_4_ = uVar7;
    auVar188 = NEON_fmax(auVar188,auVar18,4);
    auVar19._4_4_ = uVar7;
    auVar19._0_4_ = uVar7;
    auVar19._8_4_ = uVar7;
    auVar19._12_4_ = uVar7;
    auVar193 = NEON_fmax(auVar193,auVar19,4);
    auVar20._4_4_ = uVar7;
    auVar20._0_4_ = uVar7;
    auVar20._8_4_ = uVar7;
    auVar20._12_4_ = uVar7;
    auVar198 = NEON_fmax(auVar198,auVar20,4);
    auVar21._4_4_ = uVar7;
    auVar21._0_4_ = uVar7;
    auVar21._8_4_ = uVar7;
    auVar21._12_4_ = uVar7;
    auVar203 = NEON_fmax(auVar203,auVar21,4);
    auVar22._4_4_ = uVar7;
    auVar22._0_4_ = uVar7;
    auVar22._8_4_ = uVar7;
    auVar22._12_4_ = uVar7;
    auVar208 = NEON_fmax(auVar208,auVar22,4);
    auVar23._4_4_ = uVar7;
    auVar23._0_4_ = uVar7;
    auVar23._8_4_ = uVar7;
    auVar23._12_4_ = uVar7;
    auVar213 = NEON_fmax(auVar213,auVar23,4);
    auVar24._4_4_ = uVar7;
    auVar24._0_4_ = uVar7;
    auVar24._8_4_ = uVar7;
    auVar24._12_4_ = uVar7;
    auVar218 = NEON_fmax(auVar218,auVar24,4);
    auVar25._4_4_ = uVar7;
    auVar25._0_4_ = uVar7;
    auVar25._8_4_ = uVar7;
    auVar25._12_4_ = uVar7;
    auVar223 = NEON_fmax(auVar223,auVar25,4);
    auVar26._4_4_ = uVar7;
    auVar26._0_4_ = uVar7;
    auVar26._8_4_ = uVar7;
    auVar26._12_4_ = uVar7;
    auVar228 = NEON_fmax(auVar228,auVar26,4);
    auVar27._4_4_ = uVar7;
    auVar27._0_4_ = uVar7;
    auVar27._8_4_ = uVar7;
    auVar27._12_4_ = uVar7;
    auVar233 = NEON_fmax(auVar233,auVar27,4);
    auVar28._4_4_ = uVar8;
    auVar28._0_4_ = uVar8;
    auVar28._8_4_ = uVar8;
    auVar28._12_4_ = uVar8;
    auVar158 = NEON_fmin(auVar158,auVar28,4);
    auVar29._4_4_ = uVar8;
    auVar29._0_4_ = uVar8;
    auVar29._8_4_ = uVar8;
    auVar29._12_4_ = uVar8;
    auVar163 = NEON_fmin(auVar163,auVar29,4);
    auVar30._4_4_ = uVar8;
    auVar30._0_4_ = uVar8;
    auVar30._8_4_ = uVar8;
    auVar30._12_4_ = uVar8;
    auVar168 = NEON_fmin(auVar168,auVar30,4);
    auVar31._4_4_ = uVar8;
    auVar31._0_4_ = uVar8;
    auVar31._8_4_ = uVar8;
    auVar31._12_4_ = uVar8;
    auVar173 = NEON_fmin(auVar173,auVar31,4);
    auVar32._4_4_ = uVar8;
    auVar32._0_4_ = uVar8;
    auVar32._8_4_ = uVar8;
    auVar32._12_4_ = uVar8;
    auVar178 = NEON_fmin(auVar178,auVar32,4);
    auVar33._4_4_ = uVar8;
    auVar33._0_4_ = uVar8;
    auVar33._8_4_ = uVar8;
    auVar33._12_4_ = uVar8;
    auVar183 = NEON_fmin(auVar183,auVar33,4);
    auVar34._4_4_ = uVar8;
    auVar34._0_4_ = uVar8;
    auVar34._8_4_ = uVar8;
    auVar34._12_4_ = uVar8;
    auVar188 = NEON_fmin(auVar188,auVar34,4);
    auVar35._4_4_ = uVar8;
    auVar35._0_4_ = uVar8;
    auVar35._8_4_ = uVar8;
    auVar35._12_4_ = uVar8;
    auVar193 = NEON_fmin(auVar193,auVar35,4);
    auVar36._4_4_ = uVar8;
    auVar36._0_4_ = uVar8;
    auVar36._8_4_ = uVar8;
    auVar36._12_4_ = uVar8;
    auVar198 = NEON_fmin(auVar198,auVar36,4);
    auVar37._4_4_ = uVar8;
    auVar37._0_4_ = uVar8;
    auVar37._8_4_ = uVar8;
    auVar37._12_4_ = uVar8;
    auVar203 = NEON_fmin(auVar203,auVar37,4);
    auVar38._4_4_ = uVar8;
    auVar38._0_4_ = uVar8;
    auVar38._8_4_ = uVar8;
    auVar38._12_4_ = uVar8;
    auVar208 = NEON_fmin(auVar208,auVar38,4);
    auVar39._4_4_ = uVar8;
    auVar39._0_4_ = uVar8;
    auVar39._8_4_ = uVar8;
    auVar39._12_4_ = uVar8;
    auVar213 = NEON_fmin(auVar213,auVar39,4);
    auVar40._4_4_ = uVar8;
    auVar40._0_4_ = uVar8;
    auVar40._8_4_ = uVar8;
    auVar40._12_4_ = uVar8;
    auVar218 = NEON_fmin(auVar218,auVar40,4);
    auVar41._4_4_ = uVar8;
    auVar41._0_4_ = uVar8;
    auVar41._8_4_ = uVar8;
    auVar41._12_4_ = uVar8;
    auVar223 = NEON_fmin(auVar223,auVar41,4);
    auVar42._4_4_ = uVar8;
    auVar42._0_4_ = uVar8;
    auVar42._8_4_ = uVar8;
    auVar42._12_4_ = uVar8;
    auVar228 = NEON_fmin(auVar228,auVar42,4);
    auVar43._4_4_ = uVar8;
    auVar43._0_4_ = uVar8;
    auVar43._8_4_ = uVar8;
    auVar43._12_4_ = uVar8;
    auVar233 = NEON_fmin(auVar233,auVar43,4);
    iVar10 = (int)lVar44 - uVar55;
    iVar11 = iVar2 - uVar56;
    if (8 < iVar10) {
      iVar10 = 8;
    }
    if (8 < iVar11) {
      iVar11 = 8;
    }
    puVar47 = puVar60;
    uVar48 = uVar51;
    if (iVar10 != 8 || iVar11 != 8) {
      puVar47 = (undefined8 *)((long)param_1 + 0x74);
      uVar48 = 0x20;
    }
    Hint_Prefetch(puVar47,2,0,1);
    puVar47[1] = auVar158._8_8_;
    *puVar47 = auVar158._0_8_;
    puVar47[3] = auVar163._8_8_;
    puVar47[2] = auVar163._0_8_;
    puVar47 = (undefined8 *)((long)puVar47 + uVar48);
    Hint_Prefetch(puVar47,2,0,1);
    puVar47[1] = auVar168._8_8_;
    *puVar47 = auVar168._0_8_;
    puVar47[3] = auVar173._8_8_;
    puVar47[2] = auVar173._0_8_;
    puVar47 = (undefined8 *)((long)puVar47 + uVar48);
    Hint_Prefetch(puVar47,2,0,1);
    puVar47[1] = auVar178._8_8_;
    *puVar47 = auVar178._0_8_;
    puVar47[3] = auVar183._8_8_;
    puVar47[2] = auVar183._0_8_;
    puVar47 = (undefined8 *)((long)puVar47 + uVar48);
    Hint_Prefetch(puVar47,2,0,1);
    puVar47[1] = auVar188._8_8_;
    *puVar47 = auVar188._0_8_;
    puVar47[3] = auVar193._8_8_;
    puVar47[2] = auVar193._0_8_;
    puVar47 = (undefined8 *)((long)puVar47 + uVar48);
    Hint_Prefetch(puVar47,2,0,1);
    puVar47[1] = auVar198._8_8_;
    *puVar47 = auVar198._0_8_;
    puVar47[3] = auVar203._8_8_;
    puVar47[2] = auVar203._0_8_;
    puVar47 = (undefined8 *)((long)puVar47 + uVar48);
    Hint_Prefetch(puVar47,2,0,1);
    puVar47[1] = auVar208._8_8_;
    *puVar47 = auVar208._0_8_;
    puVar47[3] = auVar213._8_8_;
    puVar47[2] = auVar213._0_8_;
    puVar47 = (undefined8 *)((long)puVar47 + uVar48);
    Hint_Prefetch(puVar47,2,0,1);
    puVar47[1] = auVar218._8_8_;
    *puVar47 = auVar218._0_8_;
    puVar47[3] = auVar223._8_8_;
    puVar47[2] = auVar223._0_8_;
    puVar47 = (undefined8 *)((long)puVar47 + uVar48);
    Hint_Prefetch(puVar47,2,0,1);
    puVar47[1] = auVar228._8_8_;
    *puVar47 = auVar228._0_8_;
    *(undefined1 (*) [16])(puVar47 + 2) = auVar233;
    if (iVar10 != 8 || iVar11 != 8) {
      iVar49 = 0;
      puVar47 = (undefined8 *)((long)param_1 + 0x74);
      puVar46 = puVar60;
      do {
        Hint_Prefetch(puVar46,2,0,1);
        uVar48 = 0;
        do {
          *(undefined4 *)((long)puVar46 + uVar48 * 4) = *(undefined4 *)((long)puVar47 + uVar48 * 4);
          uVar50 = (int)uVar48 + 1;
          uVar48 = (ulong)uVar50;
        } while ((int)uVar50 < iVar10);
        iVar49 = iVar49 + 1;
        puVar47 = puVar47 + 4;
        puVar46 = (undefined8 *)((long)puVar46 + uVar51);
      } while (iVar49 < iVar11);
    }
    puVar47 = (undefined8 *)*param_1;
    uVar50 = *(uint *)(param_1 + 5);
    if (uVar55 == uVar50) {
      uVar56 = uVar56 + 8;
      puVar54 = puVar54 + uVar51;
      puVar60 = puVar54;
      uVar55 = *(uint *)(param_1 + 4);
    }
    else {
      puVar60 = puVar60 + 4;
      uVar55 = uVar55 + 8;
    }
  } while ((int)uVar56 <= iVar3);
  return;
}



/* Entry: 109baaeac; end: 109baaeeb;  */

long * FUN_109baaeac(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  for (plVar2 = (long *)param_1[2]; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    _free(plVar2[7]);
    _free(plVar2[9]);
  }
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    __ZdlPv();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109baaeec; end: 109bab05b;  */

undefined1 * FUN_109baaeec(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined4 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_38;
  
  plVar2 = &lStack_90;
  plVar3 = &lStack_90;
  lStack_40 = param_3[5];
  lStack_48 = param_3[4];
  uStack_38 = (undefined4)param_3[6];
  lVar6 = param_1;
  uStack_50 = param_2;
  FUN_109bab288(param_1,&uStack_50);
  if (lVar6 == 0) {
    lVar6 = 4;
    if (*(char *)((long)param_3 + 0x2c) != '\0') {
      lVar6 = 0;
    }
    lVar5 = (long)(int)param_3[5] * (long)*(int *)((long)param_3 + lVar6 + 0x20) *
            (ulong)*(byte *)((long)param_3 + 2);
    lVar4 = 0x40;
    _posix_memalign(&lStack_90,0x40,lVar5);
    lVar6 = lStack_90;
    if ((int)plVar2 != 0) {
      lVar6 = 0;
    }
    param_3[1] = lVar6;
    if (lVar6 == 0) {
LAB_109bab058:
      FUN_109ba905c();
      lVar6 = *(long *)((long)plVar2 + 0x18);
      puVar1 = (undefined1 *)plVar2;
      while ((lVar6 != 0 &&
             (*(long *)((long)plVar2 + 0x28) < *(long *)((long)plVar2 + 0x30) + lVar4))) {
        puVar1 = (undefined1 *)plVar2;
        FUN_109bab0a4(plVar2);
        lVar6 = *(long *)((long)plVar2 + 0x18);
      }
      return puVar1;
    }
    if ((*(byte *)((long)param_3 + 0x11) & 1) == 0) {
      lVar6 = (long)*(int *)((long)param_3 + 0x24) *
              (long)(int)(uint)*(byte *)((long)param_3 + 0x12);
      lVar4 = 0x40;
      _posix_memalign(&lStack_90,0x40,lVar6);
      if ((int)plVar3 != 0) {
        lStack_90 = 0;
      }
      param_3[3] = lStack_90;
      plVar2 = plVar3;
      if (lStack_90 == 0) goto LAB_109bab058;
    }
    else {
      lVar6 = 0;
    }
    lVar6 = lVar6 + lVar5;
    FUN_109bab05c(param_1,lVar6);
    lStack_88 = param_3[1];
    lStack_90 = *param_3;
    lStack_78 = param_3[3];
    lStack_80 = param_3[2];
    lStack_68 = param_3[5];
    lStack_70 = param_3[4];
    uStack_60 = (undefined4)param_3[6];
    lStack_58 = *(long *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lStack_58 + 1;
    FUN_109bab43c(param_1,&uStack_50,&uStack_50,&lStack_90);
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + lVar6;
    puVar1 = (undefined1 *)0x1;
  }
  else {
    puVar1 = (undefined1 *)0x0;
    lVar4 = *(long *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar4 + 1;
    *(long *)(lVar6 + 0x68) = lVar4;
    lVar5 = *(long *)(lVar6 + 0x38);
    lVar4 = *(long *)(lVar6 + 0x30);
    lVar8 = *(long *)(lVar6 + 0x48);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar10 = *(long *)(lVar6 + 0x58);
    lVar9 = *(long *)(lVar6 + 0x50);
    *(undefined4 *)(param_3 + 6) = *(undefined4 *)(lVar6 + 0x60);
    param_3[3] = lVar8;
    param_3[2] = lVar7;
    param_3[5] = lVar10;
    param_3[4] = lVar9;
    param_3[1] = lVar5;
    *param_3 = lVar4;
  }
  return puVar1;
}



/* Entry: 109bab05c; end: 109bab0a3;  */

void FUN_109bab05c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(long *)(param_1 + 0x28) < *(long *)(param_1 + 0x30) + param_2))) {
    FUN_109bab0a4(param_1);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  return;
}



/* Entry: 109bab0a4; end: 109bab23f;  */

void FUN_109bab0a4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = (long *)param_1[2];
  uVar2 = plVar8[0xd];
  plVar9 = plVar8;
  do {
    uVar3 = plVar8[0xd];
    plVar5 = plVar8;
    if (uVar2 <= (ulong)plVar8[0xd]) {
      uVar3 = uVar2;
      plVar5 = plVar9;
    }
    plVar9 = plVar5;
    plVar8 = (long *)*plVar8;
    uVar2 = uVar3;
  } while (plVar8 != (long *)0x0);
  lVar1 = 4;
  if (*(char *)((long)plVar9 + 0x5c) != '\0') {
    lVar1 = 0;
  }
  param_1[6] = (param_1[6] -
               (long)(int)plVar9[0xb] * (long)*(int *)((long)plVar9 + lVar1 + 0x50) *
               (ulong)*(byte *)((long)plVar9 + 0x32)) -
               (long)*(int *)((long)plVar9 + 0x54) * (long)(int)(uint)*(byte *)((long)plVar9 + 0x42)
  ;
  _free(plVar9[7]);
  _free(plVar9[9]);
  uVar3 = param_1[1];
  lVar1 = *plVar9;
  uVar2 = plVar9[1];
  uVar4 = uVar3 - 1;
  if ((uVar3 & uVar4) == 0) {
    uVar2 = uVar4 & uVar2;
  }
  else if (uVar3 <= uVar2) {
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = uVar2 / uVar3;
    }
    uVar2 = uVar2 - uVar6 * uVar3;
  }
  plVar8 = *(long **)(*param_1 + uVar2 * 8);
  do {
    plVar5 = plVar8;
    plVar8 = (long *)*plVar5;
  } while ((long *)*plVar5 != plVar9);
  if (plVar5 == param_1 + 2) {
LAB_109bab1a0:
    if (lVar1 == 0) {
LAB_109bab1d4:
      *(undefined8 *)(*param_1 + uVar2 * 8) = 0;
      lVar1 = *plVar9;
      goto LAB_109bab1dc;
    }
    uVar6 = *(ulong *)(lVar1 + 8);
    if ((uVar3 & uVar4) == 0) {
      uVar7 = uVar6 & uVar4;
    }
    else {
      uVar7 = uVar6;
      if (uVar3 <= uVar6) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar6 / uVar3;
        }
        uVar7 = uVar6 - uVar7 * uVar3;
      }
    }
    if (uVar7 != uVar2) goto LAB_109bab1d4;
  }
  else {
    uVar6 = plVar5[1];
    if ((uVar3 & uVar4) == 0) {
      uVar6 = uVar6 & uVar4;
    }
    else if (uVar3 <= uVar6) {
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = uVar6 / uVar3;
      }
      uVar6 = uVar6 - uVar7 * uVar3;
    }
    if (uVar6 != uVar2) goto LAB_109bab1a0;
LAB_109bab1dc:
    if (lVar1 == 0) goto LAB_109bab218;
    uVar6 = *(ulong *)(lVar1 + 8);
  }
  if ((uVar3 & uVar4) == 0) {
    uVar6 = uVar6 & uVar4;
  }
  else if (uVar3 <= uVar6) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar6 / uVar3;
    }
    uVar6 = uVar6 - uVar4 * uVar3;
  }
  if (uVar6 != uVar2) {
    *(long **)(*param_1 + uVar6 * 8) = plVar5;
    lVar1 = *plVar9;
  }
LAB_109bab218:
  *plVar5 = lVar1;
  *plVar9 = 0;
  param_1[3] = param_1[3] + -1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar9);
  return;
}



/* Entry: 109bab240; end: 109bab287;  */

long * FUN_109bab240(long *param_1)

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



/* Entry: 109bab288; end: 109bab39f;  */

long FUN_109bab288(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = (ulong)*(byte *)((long)param_2 + 0x14) + (ulong)*(byte *)((long)param_2 + 0x15) * 2 +
            (long)(int)param_2[2] * 3 + (ulong)*(byte *)((long)param_2 + 0x16) * 5 +
            (ulong)*(byte *)((long)param_2 + 0x17) * 7 + (long)(int)param_2[1] * 0xb +
            (long)*(int *)((long)param_2 + 0xc) * 0xd ^ *param_2;
    uVar6 = uVar4 - 1;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = uVar5 & uVar6;
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
        uVar7 = uVar5 - uVar7 * uVar4;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
      do {
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar3 = plVar2[1];
        if (uVar3 == uVar5) {
          uVar3 = (ulong)(plVar2 + 2);
          FUN_109bab3a0(uVar3,param_2);
          if ((uVar3 & 1) != 0) {
            return (long)plVar2;
          }
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar3 = uVar3 & uVar6;
          }
          else if (uVar4 <= uVar3) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar3 / uVar4;
            }
            uVar3 = uVar3 - uVar1 * uVar4;
          }
          if (uVar3 != uVar7) {
            return 0;
          }
        }
        plVar2 = (long *)*plVar2;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109bab3a0; end: 109bab43b;  */

bool FUN_109bab3a0(long *param_1,long *param_2)

{
  if (((((*param_1 == *param_2) && (*(int *)((long)param_1 + 0xc) == *(int *)((long)param_2 + 0xc)))
       && ((int)param_1[1] == (int)param_2[1])) &&
      (((int)param_1[2] == (int)param_2[2] &&
       (*(char *)((long)param_1 + 0x14) == *(char *)((long)param_2 + 0x14))))) &&
     ((*(char *)((long)param_1 + 0x16) == *(char *)((long)param_2 + 0x16) &&
      ((*(char *)((long)param_1 + 0x17) == *(char *)((long)param_2 + 0x17) &&
       (*(char *)((long)param_1 + 0x15) == *(char *)((long)param_2 + 0x15))))))) {
    return (int)param_1[3] == (int)param_2[3];
  }
  return false;
}



/* Entry: 109bab43c; end: 109bab867;  */

undefined1  [16] FUN_109bab43c(long *param_1,ulong *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x26;
  ulong uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  
  uVar14 = (ulong)*(byte *)((long)param_2 + 0x14) + (ulong)*(byte *)((long)param_2 + 0x15) * 2 +
           (long)(int)param_2[2] * 3 + (ulong)*(byte *)((long)param_2 + 0x16) * 5 +
           (ulong)*(byte *)((long)param_2 + 0x17) * 7 + (long)(int)param_2[1] * 0xb +
           (long)*(int *)((long)param_2 + 0xc) * 0xd ^ *param_2;
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar16 = uVar15 - 1;
    if ((uVar15 & uVar16) == 0) {
      unaff_x26 = uVar14 & uVar16;
    }
    else {
      unaff_x26 = uVar14;
      if (uVar15 <= uVar14) {
        uVar7 = 0;
        if (uVar15 != 0) {
          uVar7 = uVar14 / uVar15;
        }
        unaff_x26 = uVar14 - uVar7 * uVar15;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar13 = (long *)*puVar6; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        uVar7 = plVar13[1];
        if (uVar7 == uVar14) {
          plVar9 = plVar13 + 2;
          FUN_109bab3a0(plVar9,param_2);
          if (((ulong)plVar9 & 1) != 0) {
            uVar5 = 0;
            goto LAB_109bab7e8;
          }
        }
        else {
          if ((uVar15 & uVar16) == 0) {
            uVar7 = uVar7 & uVar16;
          }
          else if (uVar15 <= uVar7) {
            uVar8 = 0;
            if (uVar15 != 0) {
              uVar8 = uVar7 / uVar15;
            }
            uVar7 = uVar7 - uVar8 * uVar15;
          }
          if (uVar7 != unaff_x26) break;
        }
      }
    }
  }
  plVar13 = (long *)0x70;
  __Znwm();
  *plVar13 = 0;
  plVar13[1] = uVar14;
  lVar3 = *param_3;
  lVar17 = param_3[3];
  lVar4 = param_3[2];
  plVar13[3] = param_3[1];
  plVar13[2] = lVar3;
  plVar13[5] = lVar17;
  plVar13[4] = lVar4;
  lVar3 = *param_4;
  lVar17 = param_4[3];
  lVar4 = param_4[2];
  plVar13[7] = param_4[1];
  plVar13[6] = lVar3;
  plVar13[9] = lVar17;
  plVar13[8] = lVar4;
  lVar3 = param_4[4];
  lVar17 = param_4[7];
  lVar4 = param_4[6];
  plVar13[0xb] = param_4[5];
  plVar13[10] = lVar3;
  plVar13[0xd] = lVar17;
  plVar13[0xc] = lVar4;
  if ((uVar15 == 0) || (*(float *)(param_1 + 4) * (float)uVar15 < (float)(param_1[3] + 1))) {
    uVar16 = 1;
    if (2 < uVar15) {
      uVar16 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar16 = uVar16 | uVar15 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar16 <= uVar7) {
      uVar16 = uVar7;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar15 = param_1[1];
    }
    if (uVar15 < uVar16) {
LAB_109bab5f8:
      if (uVar16 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109bab854);
        (*pcVar2)();
      }
      lVar3 = uVar16 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar15 = 0;
      param_1[1] = uVar16;
      do {
        *(undefined8 *)(*param_1 + uVar15 * 8) = 0;
        uVar15 = uVar15 + 1;
      } while (uVar16 != uVar15);
      plVar9 = (long *)param_1[2];
      uVar15 = uVar16;
      if (plVar9 != (long *)0x0) {
        uVar7 = plVar9[1];
        uVar8 = uVar16 - 1;
        if ((uVar16 & uVar8) == 0) {
          uVar7 = uVar7 & uVar8;
        }
        else if (uVar16 <= uVar7) {
          uVar12 = 0;
          if (uVar16 != 0) {
            uVar12 = uVar7 / uVar16;
          }
          uVar7 = uVar7 - uVar12 * uVar16;
        }
        *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar9;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar16 & uVar8) == 0) {
            uVar12 = uVar12 & uVar8;
          }
          else if (uVar16 <= uVar12) {
            uVar1 = 0;
            if (uVar16 != 0) {
              uVar1 = uVar12 / uVar16;
            }
            uVar12 = uVar12 - uVar1 * uVar16;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar12 * 8) == 0) {
              *(long **)(lVar3 + uVar12 * 8) = plVar9;
              uVar7 = uVar12;
            }
            else {
              *plVar9 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + uVar12 * 8);
              **(long **)(lVar3 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar9;
            }
          }
          plVar9 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar16 < uVar15) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar16 <= uVar7) {
        uVar16 = uVar7;
      }
      if (uVar16 < uVar15) {
        if (uVar16 != 0) goto LAB_109bab5f8;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = param_1[1];
      }
    }
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x26 = uVar15 - 1 & uVar14;
    }
    else {
      unaff_x26 = uVar14;
      if (uVar15 <= uVar14) {
        uVar16 = 0;
        if (uVar15 != 0) {
          uVar16 = uVar14 / uVar15;
        }
        unaff_x26 = uVar14 - uVar16 * uVar15;
      }
    }
  }
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + unaff_x26 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar13 = *plVar9;
    *plVar9 = (long)plVar13;
    *(long **)(lVar3 + unaff_x26 * 8) = plVar9;
    if (*plVar13 == 0) goto LAB_109bab7d8;
    uVar14 = *(ulong *)(*plVar13 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar14 = uVar14 & uVar15 - 1;
    }
    else if (uVar15 <= uVar14) {
      uVar16 = 0;
      if (uVar15 != 0) {
        uVar16 = uVar14 / uVar15;
      }
      uVar14 = uVar14 - uVar16 * uVar15;
    }
    plVar9 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar13 = *plVar9;
  }
  *plVar9 = (long)plVar13;
LAB_109bab7d8:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_109bab7e8:
  auVar18._8_8_ = uVar5;
  auVar18._0_8_ = plVar13;
  return auVar18;
}



/* Entry: 109bab868; end: 109baba5b;  */

void FUN_109bab868(undefined8 *param_1,long param_2,long param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 *puVar28;
  long *plVar29;
  ulong uVar30;
  ulong *puVar31;
  long lVar32;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  ulong *puStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar27 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = param_2 + 0x20;
  uStack_70 = 0x100000000;
  do {
    iVar18 = *(int *)((long)&uStack_70 + lVar27);
    lVar24 = param_2 + 0x98 + (long)iVar18 * 0x38;
    lVar32 = lVar23 + (long)iVar18 * 0x28;
    cVar4 = *(char *)(lVar32 + 0x24);
    lVar20 = 0x3c;
    if (iVar18 != 0) {
      lVar20 = 0x14;
    }
    lVar19 = 0x67;
    if (iVar18 != 0) {
      lVar19 = 0x2f;
    }
    bVar5 = *(byte *)(param_2 + 0x98 + lVar19);
    puVar11 = param_1;
    if (cVar4 == '\x01') {
      if ((int)(uint)bVar5 < *(int *)(lVar23 + lVar20)) goto LAB_109bab994;
LAB_109bab920:
      func_0x000109baa0a0();
      uVar25 = lVar23 + (long)iVar18 * 0x28;
      uVar16 = *(ulong *)(uVar25 + 8);
      param_3 = lVar24;
      FUN_109baaeec();
      if ((int)puVar11 != 0) {
        FUN_109ba9f10(param_1,1);
        puVar11 = *(undefined8 **)param_1[0xb];
        *(undefined4 *)puVar11 = *(undefined4 *)(param_1 + 1);
        FUN_109baccf8(puVar11,(long)param_1 + 0x4c);
        param_4 = (ulong *)0x0;
        (**(code **)(param_2 + 8 + (long)iVar18 * 8))();
        uVar16 = uVar25;
        param_3 = lVar24;
      }
      *(undefined1 *)(param_2 + 0x108 + (long)iVar18) = 1;
    }
    else {
      if ((cVar4 == '\x03') ||
         ((cVar4 == '\x02' && (*(int *)(lVar23 + lVar20) <= (int)((uint)bVar5 * 4)))))
      goto LAB_109bab920;
LAB_109bab994:
      func_0x000109baa054();
      lVar20 = 4;
      if (*(char *)(lVar24 + 0x2c) != '\0') {
        lVar20 = 0;
      }
      lVar19 = (long)*(int *)(lVar24 + 0x28) * (long)*(int *)(lVar24 + lVar20 + 0x20) *
               (ulong)*(byte *)(lVar24 + 2);
      lVar20 = 0;
      if (lVar19 != 0) {
        iVar18 = *(int *)(lVar32 + 8);
        puVar13 = puVar11;
        FUN_109ba9084(puVar11,lVar19 + 0x400);
        lVar20 = 0x200;
        if (0xfffffdfe < ((int)puVar13 - iVar18 & 0x3ffU) - 0x301) {
          lVar20 = 0;
        }
        lVar20 = (long)puVar13 + lVar20;
      }
      *(long *)(lVar24 + 8) = lVar20;
      uVar16 = (long)*(int *)(lVar24 + 0x24) * (long)(int)(uint)*(byte *)(lVar24 + 0x12);
      FUN_109ba9084();
      *(undefined8 **)(lVar24 + 0x18) = puVar11;
    }
    iVar18 = (int)param_3;
    lVar27 = lVar27 + 4;
  } while (lVar27 != 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  iVar15 = (int)uVar16;
  uVar7 = iVar15 - 1;
  uVar25 = (ulong)uVar7;
  if (uVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000109babab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_4 + 0x10))(param_4);
    return;
  }
  puVar31 = (ulong *)*puVar11;
  uVar17 = uVar16;
  if ((bRam00000001137e19c0 & 1) == 0) {
    iVar10 = 0x137e19c0;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      uVar17 = 0x1132e8f78;
      ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_110346798,0x1132e8f78,0x100000000);
      ___cxa_guard_release(0x1137e19c0);
    }
  }
  __ZNSt3__15mutex4lockEv(0x1132e8f78);
  puVar13 = (undefined8 *)*puVar31;
  uVar30 = puVar31[1];
  uVar21 = (long)(uVar30 - (long)puVar13) >> 4;
  puVar28 = (undefined8 *)(long)(int)uVar7;
  if (uVar21 < uVar7) {
    if ((undefined8 *)((long)(puVar31[2] - (long)puVar13) >> 4) < puVar28) {
      if ((int)uVar7 < 0) {
        FUN_109bac188();
        goto LAB_109babf54;
      }
      puVar12 = puVar28;
      puStack_108 = puVar31;
      FUN_109bac19c();
      uVar30 = (long)puVar12 + (uVar30 - (long)puVar13);
      lVar23 = uVar17 * 2;
      uVar17 = *puVar31;
      uVar21 = uVar30 - (puVar31[1] - uVar17);
      _memcpy(uVar21);
      puStack_128 = (undefined *)*puVar31;
      *puVar31 = uVar21;
      puVar31[1] = uVar30;
      puStack_110 = (undefined *)puVar31[2];
      puVar31[2] = (ulong)(puVar12 + lVar23);
      puStack_120 = puStack_128;
      puStack_118 = puStack_128;
      func_0x000109bac1d0(&puStack_128);
      puVar13 = (undefined8 *)*puVar31;
      uVar21 = (long)(puVar31[1] - (long)puVar13) >> 4;
    }
    if (uVar25 <= uVar21) goto LAB_109babc88;
    do {
      puVar13 = (undefined8 *)0x20;
      __Znwm();
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = &PTR_FUN_110b29f98;
      uVar14 = 2;
      uVar17 = 0;
      _dispatch_get_global_queue();
      puVar26 = puVar13 + 3;
      *puVar26 = uVar14;
      puVar12 = (undefined8 *)puVar31[1];
      puStack_138 = puVar26;
      puStack_130 = puVar13;
      if (puVar12 < (undefined8 *)puVar31[2]) {
        *puVar12 = puVar26;
        puVar12[1] = puVar13;
        puVar12 = puVar12 + 2;
      }
      else {
        lVar23 = (long)puVar12 - *puVar31;
        uVar30 = (lVar23 >> 4) + 1;
        if (uVar30 >> 0x3c != 0) {
          FUN_109bac188();
          goto LAB_109babf54;
        }
        uVar22 = (long)puVar31[2] - *puVar31;
        uVar21 = (long)uVar22 >> 3;
        if (uVar21 <= uVar30) {
          uVar21 = uVar30;
        }
        if (0x7fffffffffffffef < uVar22) {
          uVar21 = 0xfffffffffffffff;
        }
        puStack_108 = puVar31;
        FUN_109bac19c();
        puVar3 = (undefined8 *)(uVar21 + lVar23);
        lVar23 = uVar17 * 0x10;
        *puVar3 = puVar26;
        puVar3[1] = puVar13;
        puVar12 = puVar3 + 2;
        uVar17 = *puVar31;
        uVar30 = (long)puVar3 - (puVar31[1] - uVar17);
        _memcpy(uVar30);
        puStack_128 = (undefined *)*puVar31;
        *puVar31 = uVar30;
        puVar31[1] = (ulong)puVar12;
        puStack_110 = (undefined *)puVar31[2];
        puVar31[2] = uVar21 + lVar23;
        puStack_120 = puStack_128;
        puStack_118 = puStack_128;
        func_0x000109bac1d0(&puStack_128);
      }
      puVar31[1] = (ulong)puVar12;
      puVar13 = (undefined8 *)*puVar31;
    } while ((ulong)((long)puVar12 - (long)puVar13 >> 4) < uVar25);
    puStack_150 = (undefined8 *)0x0;
    puStack_148 = (undefined8 *)0x0;
    puStack_140 = (undefined8 *)0x0;
    uVar16 = uVar16 & 0xffffffff;
    if (uVar7 == 0) goto LAB_109babce4;
    puVar12 = puVar13 + (long)puVar28 * 2;
  }
  else {
LAB_109babc88:
    puVar12 = puVar13 + (long)puVar28 * 2;
  }
  puStack_140 = (undefined8 *)0x0;
  puStack_148 = (undefined8 *)0x0;
  puStack_150 = (undefined8 *)0x0;
  iVar15 = (int)uVar16;
  if ((int)uVar7 < 0) {
    FUN_109bac188();
LAB_109babf54:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x109babf58);
    (*pcVar9)();
  }
  FUN_109bac19c();
  puStack_140 = puVar28 + uVar17 * 2;
  puStack_148 = puVar28;
  do {
    lVar23 = puVar13[1];
    uVar14 = *puVar13;
    puStack_148[1] = puVar13[1];
    *puStack_148 = uVar14;
    if (lVar23 != 0) {
      plVar29 = (long *)(lVar23 + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar6) {
          *plVar29 = *plVar29 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar13 = puVar13 + 2;
    puStack_148 = puStack_148 + 2;
    puStack_150 = puVar28;
  } while (puVar13 != puVar12);
LAB_109babce4:
  __ZNSt3__15mutex6unlockEv(0x1132e8f78);
  puVar13 = (undefined8 *)0x90;
  __Znwm();
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &PTR_FUN_110b2a018;
  *(undefined1 *)(puVar13 + 3) = 0;
  *(undefined4 *)((long)puVar13 + 0x1c) = 0;
  puVar13[4] = 0x3cb0b1bb;
  puVar13[6] = 0;
  puVar13[5] = 0;
  puVar13[8] = 0;
  puVar13[7] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0x32aaaba7;
  puVar13[0xc] = 0;
  puVar13[0xb] = 0;
  puVar13[0xe] = 0;
  puVar13[0xd] = 0;
  puVar13[0x10] = 0;
  puVar13[0xf] = 0;
  puVar13[0x11] = 0;
  plVar29 = (long *)puVar11[3];
  puVar11[2] = puVar13 + 3;
  puVar11[3] = puVar13;
  if (plVar29 != (long *)0x0) {
    plVar1 = plVar29 + 1;
    do {
      lVar23 = *plVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
    }
  }
  lVar23 = puVar11[2];
  *(uint *)(lVar23 + 4) = uVar7;
  *(bool *)lVar23 = uVar7 == 1;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  if (1 < iVar15) {
    uVar16 = 0;
    puVar31 = param_4;
    do {
      puVar13 = (undefined8 *)puStack_150[uVar16 * 2];
      plVar29 = (long *)puVar11[3];
      plStack_f8 = (long *)puVar11[3];
      uStack_100 = puVar11[2];
      if (plVar29 != (long *)0x0) {
        plVar1 = plVar29 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar31 = (ulong *)((long)puVar31 + (long)iVar18);
      uVar14 = *puVar13;
      puStack_128 = puVar8;
      puStack_120 = (undefined *)0x46000000;
      puStack_118 = (undefined *)0x109bac30c;
      puStack_110 = &UNK_110b29fd8;
      if (plVar29 != (long *)0x0) {
        plVar1 = plVar29 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puStack_108 = puVar31;
      func_0x000107c27d8c(uVar14,&puStack_128);
      plVar1 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        plVar2 = plStack_f8 + 1;
        do {
          lVar23 = *plVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if (plVar29 != (long *)0x0) {
        plVar1 = plVar29 + 1;
        do {
          lVar23 = *plVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar25);
  }
  (**(code **)(*param_4 + 0x10))();
  FUN_109ba9840(puVar11[2],1000000);
  func_0x000109bac2b0(&puStack_150);
  return;
}



/* Entry: 109baba5c; end: 109babfab;  */

void FUN_109baba5c(undefined8 *param_1,ulong param_2,int param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  ulong *puStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  
  iVar13 = (int)param_2;
  uVar6 = iVar13 - 1;
  uVar22 = (ulong)uVar6;
  if (uVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000109babab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_4 + 0x10))(param_4);
    return;
  }
  puVar23 = (ulong *)*param_1;
  uVar14 = param_2;
  if ((bRam00000001137e19c0 & 1) == 0) {
    iVar9 = 0x137e19c0;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      uVar14 = 0x1132e8f78;
      ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_110346798,0x1132e8f78,0x100000000);
      ___cxa_guard_release(0x1137e19c0);
    }
  }
  __ZNSt3__15mutex4lockEv(0x1132e8f78);
  puVar11 = (undefined8 *)*puVar23;
  uVar21 = puVar23[1];
  uVar15 = (long)(uVar21 - (long)puVar11) >> 4;
  puVar19 = (undefined8 *)(long)(int)uVar6;
  if (uVar15 < uVar6) {
    if ((undefined8 *)((long)(puVar23[2] - (long)puVar11) >> 4) < puVar19) {
      if ((int)uVar6 < 0) {
        FUN_109bac188();
        goto LAB_109babf54;
      }
      puVar10 = puVar19;
      puStack_88 = puVar23;
      FUN_109bac19c();
      uVar21 = (long)puVar10 + (uVar21 - (long)puVar11);
      lVar17 = uVar14 * 2;
      uVar14 = *puVar23;
      uVar15 = uVar21 - (puVar23[1] - uVar14);
      _memcpy(uVar15);
      puStack_a8 = (undefined *)*puVar23;
      *puVar23 = uVar15;
      puVar23[1] = uVar21;
      puStack_90 = (undefined *)puVar23[2];
      puVar23[2] = (ulong)(puVar10 + lVar17);
      puStack_a0 = puStack_a8;
      puStack_98 = puStack_a8;
      func_0x000109bac1d0(&puStack_a8);
      puVar11 = (undefined8 *)*puVar23;
      uVar15 = (long)(puVar23[1] - (long)puVar11) >> 4;
    }
    if (uVar22 <= uVar15) goto LAB_109babc88;
    do {
      puVar11 = (undefined8 *)0x20;
      __Znwm();
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_FUN_110b29f98;
      uVar12 = 2;
      uVar14 = 0;
      _dispatch_get_global_queue();
      puVar18 = puVar11 + 3;
      *puVar18 = uVar12;
      puVar10 = (undefined8 *)puVar23[1];
      puStack_b8 = puVar18;
      puStack_b0 = puVar11;
      if (puVar10 < (undefined8 *)puVar23[2]) {
        *puVar10 = puVar18;
        puVar10[1] = puVar11;
        puVar10 = puVar10 + 2;
      }
      else {
        lVar17 = (long)puVar10 - *puVar23;
        uVar21 = (lVar17 >> 4) + 1;
        if (uVar21 >> 0x3c != 0) {
          FUN_109bac188();
          goto LAB_109babf54;
        }
        uVar16 = (long)puVar23[2] - *puVar23;
        uVar15 = (long)uVar16 >> 3;
        if (uVar15 <= uVar21) {
          uVar15 = uVar21;
        }
        if (0x7fffffffffffffef < uVar16) {
          uVar15 = 0xfffffffffffffff;
        }
        puStack_88 = puVar23;
        FUN_109bac19c();
        puVar3 = (undefined8 *)(uVar15 + lVar17);
        lVar17 = uVar14 * 0x10;
        *puVar3 = puVar18;
        puVar3[1] = puVar11;
        puVar10 = puVar3 + 2;
        uVar14 = *puVar23;
        uVar21 = (long)puVar3 - (puVar23[1] - uVar14);
        _memcpy(uVar21);
        puStack_a8 = (undefined *)*puVar23;
        *puVar23 = uVar21;
        puVar23[1] = (ulong)puVar10;
        puStack_90 = (undefined *)puVar23[2];
        puVar23[2] = uVar15 + lVar17;
        puStack_a0 = puStack_a8;
        puStack_98 = puStack_a8;
        func_0x000109bac1d0(&puStack_a8);
      }
      puVar23[1] = (ulong)puVar10;
      puVar11 = (undefined8 *)*puVar23;
    } while ((ulong)((long)puVar10 - (long)puVar11 >> 4) < uVar22);
    puStack_d0 = (undefined8 *)0x0;
    puStack_c8 = (undefined8 *)0x0;
    puStack_c0 = (undefined8 *)0x0;
    param_2 = param_2 & 0xffffffff;
    if (uVar6 == 0) goto LAB_109babce4;
    puVar10 = puVar11 + (long)puVar19 * 2;
  }
  else {
LAB_109babc88:
    puVar10 = puVar11 + (long)puVar19 * 2;
  }
  puStack_c0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  puStack_d0 = (undefined8 *)0x0;
  iVar13 = (int)param_2;
  if ((int)uVar6 < 0) {
    FUN_109bac188();
LAB_109babf54:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x109babf58);
    (*pcVar8)();
  }
  FUN_109bac19c();
  puStack_c0 = puVar19 + uVar14 * 2;
  puStack_c8 = puVar19;
  do {
    lVar17 = puVar11[1];
    uVar12 = *puVar11;
    puStack_c8[1] = puVar11[1];
    *puStack_c8 = uVar12;
    if (lVar17 != 0) {
      plVar20 = (long *)(lVar17 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *plVar20 = *plVar20 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar11 = puVar11 + 2;
    puStack_c8 = puStack_c8 + 2;
    puStack_d0 = puVar19;
  } while (puVar11 != puVar10);
LAB_109babce4:
  __ZNSt3__15mutex6unlockEv(0x1132e8f78);
  puVar11 = (undefined8 *)0x90;
  __Znwm();
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &PTR_FUN_110b2a018;
  *(undefined1 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  puVar11[4] = 0x3cb0b1bb;
  puVar11[6] = 0;
  puVar11[5] = 0;
  puVar11[8] = 0;
  puVar11[7] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0x32aaaba7;
  puVar11[0xc] = 0;
  puVar11[0xb] = 0;
  puVar11[0xe] = 0;
  puVar11[0xd] = 0;
  puVar11[0x10] = 0;
  puVar11[0xf] = 0;
  puVar11[0x11] = 0;
  plVar20 = (long *)param_1[3];
  param_1[2] = puVar11 + 3;
  param_1[3] = puVar11;
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 1;
    do {
      lVar17 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  lVar17 = param_1[2];
  *(uint *)(lVar17 + 4) = uVar6;
  *(bool *)lVar17 = uVar6 == 1;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  if (1 < iVar13) {
    uVar14 = 0;
    puVar23 = param_4;
    do {
      puVar11 = (undefined8 *)puStack_d0[uVar14 * 2];
      plVar20 = (long *)param_1[3];
      plStack_78 = (long *)param_1[3];
      uStack_80 = param_1[2];
      if (plVar20 != (long *)0x0) {
        plVar1 = plVar20 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar23 = (ulong *)((long)puVar23 + (long)param_3);
      uVar12 = *puVar11;
      puStack_a8 = puVar7;
      puStack_a0 = (undefined *)0x46000000;
      puStack_98 = (undefined *)0x109bac30c;
      puStack_90 = &UNK_110b29fd8;
      if (plVar20 != (long *)0x0) {
        plVar1 = plVar20 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puStack_88 = puVar23;
      func_0x000107c27d8c(uVar12,&puStack_a8);
      plVar1 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar2 = plStack_78 + 1;
        do {
          lVar17 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if (plVar20 != (long *)0x0) {
        plVar1 = plVar20 + 1;
        do {
          lVar17 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar22);
  }
  (**(code **)(*param_4 + 0x10))();
  FUN_109ba9840(param_1[2],1000000);
  func_0x000109bac2b0(&puStack_d0);
  return;
}



/* Entry: 109babfac; end: 109bac15b;  */

void FUN_109babfac(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if ((bRam00000001137e19c8 & 1) == 0) {
    iVar3 = 0x137e19c8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_110346798,0x1132e8f38,0x100000000);
      ___cxa_guard_release(0x1137e19c8);
    }
  }
  if ((bRam00000001137e19d0 & 1) == 0) {
    iVar3 = 0x137e19d0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      ___cxa_atexit(FUN_109bac15c,0x1137e19d8,0x100000000);
      ___cxa_guard_release(0x1137e19d0);
    }
  }
  __ZNSt3__15mutex4lockEv(0x1132e8f38);
  *param_1 = 0;
  param_1[1] = 0;
  if (plRam00000001137e19e0 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = plRam00000001137e19e0;
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = plVar7;
    plVar6 = plRam00000001137e19d8;
    if ((plVar7 != (long *)0x0) && (*param_1 = plRam00000001137e19d8, plVar6 != (long *)0x0))
    goto LAB_109bac0b4;
  }
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110b2a068;
  plVar6 = plVar4 + 3;
  *plVar6 = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *param_1 = plVar6;
  param_1[1] = plVar4;
  if (plVar7 == (long *)0x0) {
LAB_109bac084:
    plVar7 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    plVar6 = plVar7 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    plVar6 = (long *)*param_1;
    plVar4 = (long *)param_1[1];
    if (plVar4 != (long *)0x0) goto LAB_109bac084;
  }
  plVar7 = plRam00000001137e19e0;
  bVar2 = plRam00000001137e19e0 != (long *)0x0;
  plRam00000001137e19d8 = plVar6;
  plRam00000001137e19e0 = plVar4;
  if (bVar2) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_109bac0b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x1132e8f38);
  return;
}


